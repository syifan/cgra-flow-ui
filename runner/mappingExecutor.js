/**
 * Real implementation for executing CGRA mapping jobs
 */

import { promises as fs } from 'fs';
import path from 'path';
import { exec, execFile } from 'child_process';
import { promisify } from 'util';
import { tmpdir } from 'os';
import { createClient } from '@supabase/supabase-js';
import { config } from 'dotenv';
import yaml from 'js-yaml';
import { convertJsonToYamlString } from './converter/converter.js';

config();

const execAsync = promisify(exec);
const execFileAsync = promisify(execFile);

// Validate required environment variables
if (!process.env.SUPABASE_URL) {
  throw new Error('SUPABASE_URL environment variable is required');
}
if (!process.env.SUPABASE_SERVICE_ROLE_KEY) {
  throw new Error('SUPABASE_SERVICE_ROLE_KEY environment variable is required');
}

// Create Supabase client for fetching project data
const supabase = createClient(
  process.env.SUPABASE_URL,
  process.env.SUPABASE_SERVICE_ROLE_KEY,
  {
    auth: {
      autoRefreshToken: false,
      persistSession: false
    }
  }
);

/**
 * Configuration
 */
const JOBS_DIR = process.env.JOBS_DIR || './jobs';
const DOCKER_IMAGE = process.env.DOCKER_IMAGE || 'cgra/cgra-flow:ui';
const DOCKER_TIMEOUT_MS = parseInt(process.env.DOCKER_TIMEOUT_MS || '600000', 10); // 10 minutes

// Validate Docker image name to prevent shell injection
// Valid format: [registry/][namespace/]name[:tag]
const DOCKER_IMAGE_PATTERN = /^[a-z0-9][a-z0-9._/:@-]*$/i;
if (!DOCKER_IMAGE_PATTERN.test(DOCKER_IMAGE)) {
  throw new Error(`Invalid DOCKER_IMAGE format: "${DOCKER_IMAGE}". Image name contains invalid characters.`);
}
const GRAPH_BUCKET = process.env.SUPABASE_STORAGE_BUCKET || 'job-artifacts';
let graphBucketReady = false;
let graphBucketLastAttempt = 0;
const GRAPH_BUCKET_RETRY_INTERVAL_MS = 60000; // Retry bucket creation after 1 minute on failure

// Docker container paths - these match the structure in cgra-flow-docker/Dockerfile
const DOCKER_DATAFLOW_TEST_DIR = process.env.DOCKER_DATAFLOW_TEST_DIR || '/cgra/dataflow/test';
const DOCKER_ARCH_SPEC_PATH = process.env.DOCKER_ARCH_SPEC_PATH || '/cgra/dataflow/test/arch_spec/architecture.yaml';
const DOCKER_LLVM_LIT_PATH = process.env.DOCKER_LLVM_LIT_PATH || '/cgra/llvm-project/build/bin/llvm-lit';

/**
 * Execute a mapping job
 *
 * @param {object} job - The job object from database
 * @param {string} job.id - Job ID
 * @param {object} job.info - Job info containing benchmarks and architecture
 * @returns {Promise<object>} Result info
 */
export async function executeMappingJob(job) {
  const startTime = Date.now();
  const jobDir = path.join(JOBS_DIR, job.id);
  let results = {};
  let successCount = 0;
  let failureCount = 0;
  let resultInfo = null;
  let caughtError = null;

  // Validate job structure
  if (!job.info) {
    throw new Error('Job info is missing');
  }

  if (!job.info.benchmarks || !Array.isArray(job.info.benchmarks) || job.info.benchmarks.length === 0) {
    throw new Error('Job info.benchmarks is missing or empty');
  }

  // Validate job ID format (UUID) to prevent command injection
  const UUID_PATTERN = /^[0-9a-f]{8}-[0-9a-f]{4}-[0-9a-f]{4}-[0-9a-f]{4}-[0-9a-f]{12}$/i;
  if (!UUID_PATTERN.test(job.id)) {
    throw new Error(`Invalid job ID format: "${job.id}"`);
  }

  // Validate benchmark names (alphanumeric, underscore, hyphen) to prevent command injection
  const BENCHMARK_PATTERN = /^[a-zA-Z0-9_-]+$/;
  for (const benchmark of job.info.benchmarks) {
    if (!BENCHMARK_PATTERN.test(benchmark)) {
      throw new Error(`Invalid benchmark name: "${benchmark}"`);
    }
  }

  // Fetch architecture from project (single source of truth)
  console.log(`  Fetching architecture from project ${job.project_id}...`);

  const { data: project, error } = await supabase
    .from('projects')
    .select('data')
    .eq('id', job.project_id)
    .single();

  if (error) {
    throw new Error(`Failed to fetch project: ${error.message}`);
  }

  if (!project || !project.data) {
    throw new Error(`Project ${job.project_id} has no data`);
  }

  // Validate architecture structure
  if (!project.data.architecture || typeof project.data.architecture !== 'object') {
    throw new Error(`Project ${job.project_id} data is missing 'architecture' object`);
  }
  if (!Array.isArray(project.data.architecture.CGRAs) || project.data.architecture.CGRAs.length === 0) {
    throw new Error(`Project ${job.project_id} architecture is missing a non-empty 'CGRAs' array`);
  }

  // project.data contains the full structure: { version: 1, architecture: { ... } }
  const architectureData = project.data;
  console.log(`  ✓ Fetched architecture from project`);

  console.log(`  Setting up job directory: ${jobDir}`);
  console.log(`  Benchmarks: ${job.info.benchmarks.join(', ')}`);

  // Step 1: Create job directory structure
  await setupJobDirectory(jobDir);

  // Step 2: Write architecture JSON
  const archJsonPath = path.join(jobDir, 'architecture.json');
  await fs.writeFile(
    archJsonPath,
    JSON.stringify(architectureData, null, 2),
    'utf8'
  );
  console.log(`  ✓ Wrote architecture.json`);

  // Step 3: Convert to YAML
  const archYamlPath = path.join(jobDir, 'architecture.yaml');
  let yamlContent;
  try {
    yamlContent = convertJsonToYamlString(architectureData);
  } catch (conversionError) {
    throw new Error(`Failed to convert architecture to YAML: ${conversionError.message}`);
  }
  await fs.writeFile(archYamlPath, yamlContent, 'utf8');
  console.log(`  ✓ Converted to architecture.yaml`);

  // Step 4: Verify Docker image exists
  await verifyDockerImage();

  // Ensure storage bucket exists (best-effort)
  await ensureGraphBucket();

  // Step 5: Process each benchmark
  const benchmarks = job.info.benchmarks || [];

  console.log(`  Processing ${benchmarks.length} benchmark(s)...`);

  try {
    for (const benchmark of benchmarks) {
      console.log(`\n  → Benchmark: ${benchmark}`);

      try {
        const benchmarkResult = await processBenchmark(jobDir, job.id, benchmark, archYamlPath);
        results[benchmark] = {
          status: 'success',
          ...benchmarkResult
        };
        successCount++;
        console.log(`    ✓ ${benchmark} completed successfully`);
      } catch (error) {
        results[benchmark] = {
          status: 'failed',
          error: error.message,
          stderr: error.stderr || ''
        };
        failureCount++;
        console.log(`    ✗ ${benchmark} failed: ${error.message}`);
      }
    }

    const endTime = Date.now();
    const executionTimeMs = endTime - startTime;

    console.log(`\n  Summary: ${successCount} benchmark(s) succeeded, ${failureCount} benchmark(s) failed`);

    // If any benchmark failed, propagate failure so the job is marked failed in DB
    if (failureCount > 0) {
      const failedList = Object.entries(results)
        .filter(([, r]) => r.status === 'failed')
        .map(([name, r]) => `${name}${r.error ? `: ${r.error}` : ''}`)
        .join('; ');
      const error = new Error(`Benchmark failures detected (${failureCount}/${benchmarks.length}): ${failedList}`);
      error.results = results;
      throw error;
    }

    resultInfo = {
      execution_time_ms: executionTimeMs,
      job_directory: jobDir,
      benchmarks: results,
      summary: {
        total: benchmarks.length,
        success: successCount,
        failed: failureCount
      }
    };
  } catch (error) {
    caughtError = error;
    if (!caughtError.results && Object.keys(results).length > 0) {
      caughtError.results = results;
    }
  } finally {
    const jobPackage = await uploadJobPackage(job.id, jobDir);
    if (resultInfo) {
      resultInfo.job_package = jobPackage;
    }
    if (caughtError) {
      const jobInfo = caughtError.jobInfo || {};
      if (caughtError.results || Object.keys(results).length > 0) {
        jobInfo.benchmarks = caughtError.results || results;
      }
      jobInfo.job_package = jobPackage;
      caughtError.jobInfo = jobInfo;
    }
  }

  if (caughtError) {
    throw caughtError;
  }

  return resultInfo;
}

/**
 * Setup job directory structure
 */
async function setupJobDirectory(jobDir) {
  // Create main job directory
  await fs.mkdir(jobDir, { recursive: true });

  // Create benchmarks subdirectory
  const benchmarksDir = path.join(jobDir, 'benchmarks');
  await fs.mkdir(benchmarksDir, { recursive: true });
}

/**
 * Verify Docker image exists
 */
async function verifyDockerImage() {
  try {
    await execAsync(`docker image inspect ${DOCKER_IMAGE}`);
  } catch (error) {
    throw new Error(
      `Docker image "${DOCKER_IMAGE}" not found. ` +
      `Build it from the cgra-flow-docker directory using: docker build -t ${DOCKER_IMAGE} .`
    );
  }
}

/**
 * Process a single benchmark
 *
 * @param {string} jobDir - Job directory path
 * @param {string} benchmark - Benchmark name (e.g., 'fir', 'bicg', 'relu')
 * @param {string} archYamlPath - Path to architecture YAML file
 * @returns {Promise<object>} Benchmark result
 */
async function processBenchmark(jobDir, jobId, benchmark, archYamlPath) {
  const benchmarkDir = path.join(jobDir, 'benchmarks', benchmark);
  await fs.mkdir(benchmarkDir, { recursive: true });
  const benchmarkOutputDir = path.join(benchmarkDir, 'Output');
  await fs.mkdir(benchmarkOutputDir, { recursive: true });
  const absoluteBenchmarkDir = path.resolve(benchmarkDir);

  // Determine test file path in Docker container
  const benchmarkTestDir = `${DOCKER_DATAFLOW_TEST_DIR}/e2e/${benchmark}`;
  const testFilePath = `${benchmarkTestDir}/${benchmark}_kernel.mlir`;

  // Copy architecture.yaml to benchmark directory
  const benchmarkArchPath = path.join(benchmarkDir, 'architecture.yaml');
  await fs.copyFile(archYamlPath, benchmarkArchPath);

  // Seed the benchmark directory with the original test files from the image so that
  // writes in the benchmark directory (dot/png/etc.) land on the host.
  // This copies once per run and lets us bind-mount the entire benchmark folder.
  const seedCommand = [
    'docker run --rm',
    `-v "${absoluteBenchmarkDir}:/workspace"`,
    DOCKER_IMAGE,
    'bash -lc',
    `"shopt -s dotglob && cp -r ${benchmarkTestDir}/* /workspace/"`,
  ].join(' ');
  await execAsync(seedCommand);

  // Run Docker container with mounted volumes
  const containerName = `cgra-job-${path.basename(jobDir)}-${benchmark}`;

  // Absolute paths for mounting
  const absoluteJobDir = path.resolve(jobDir);

  const dockerCommand = [
    'docker run',
    '--rm',
    `--name ${containerName}`,
    `-v "${absoluteBenchmarkDir}:${benchmarkTestDir}"`,
    `-v "${absoluteJobDir}/architecture.yaml:${DOCKER_ARCH_SPEC_PATH}:ro"`,
    '-w',
    benchmarkTestDir,
    DOCKER_IMAGE,
    `${DOCKER_LLVM_LIT_PATH} -v ${testFilePath}`
  ].join(' ');

  console.log(`    Running: llvm-lit ${testFilePath}`);

  const startTime = Date.now();

  try {
    const { stdout, stderr } = await execAsync(dockerCommand, {
      timeout: DOCKER_TIMEOUT_MS,
      maxBuffer: 10 * 1024 * 1024 // 10MB buffer
    });

    const endTime = Date.now();
    const executionTime = endTime - startTime;

    // Write outputs to files
    await fs.writeFile(path.join(benchmarkDir, 'stdout.txt'), stdout, 'utf8');
    await fs.writeFile(path.join(benchmarkDir, 'stderr.txt'), stderr, 'utf8');
    await convertDotFilesWithGraphviz(benchmarkDir, benchmark);
    const graphUploads = await uploadGraphJsonFiles(jobId, benchmark, benchmarkDir);
    const instructionFile = await uploadInstructionsFile(jobId, benchmark, benchmarkDir);

    // Parse llvm-lit output for results (case-insensitive for robustness)
    const passed = /pass(?:ed)?:?\s*1/i.test(stdout);
    const failed = /fail(?:ed)?:?\s*1/i.test(stdout);

    // Extract compiled_ii and mapping info from output
    const compiledIiMatch = stdout.match(/compiled_ii\s*=\s*(\d+)/);
    const recMiiMatch = stdout.match(/rec_mii\s*=\s*(\d+)/);
    const resMiiMatch = stdout.match(/res_mii\s*=\s*(\d+)/);

    return {
      execution_time_ms: executionTime,
      test_passed: passed && !failed,
      compiled_ii: compiledIiMatch ? parseInt(compiledIiMatch[1]) : null,
      rec_mii: recMiiMatch ? parseInt(recMiiMatch[1]) : null,
      res_mii: resMiiMatch ? parseInt(resMiiMatch[1]) : null,
      graph_files: graphUploads,
      instruction_file: instructionFile,
      stdout_length: stdout.length,
      stderr_length: stderr.length
    };
  } catch (error) {
    // Save error output (best effort - don't let save failures hide the original error)
    try {
      if (error.stdout) {
        await fs.writeFile(path.join(benchmarkDir, 'stdout.txt'), error.stdout, 'utf8');
      }
      if (error.stderr) {
        await fs.writeFile(path.join(benchmarkDir, 'stderr.txt'), error.stderr, 'utf8');
      }
      // Best effort conversion even on failure
      await convertDotFilesWithGraphviz(benchmarkDir, benchmark);
    } catch (saveError) {
      console.error(`    Warning: Failed to save error output: ${saveError.message}`);
    }

    // Enhance error message
    if (error.killed && error.signal === 'SIGTERM') {
      throw new Error(`Benchmark timed out after ${DOCKER_TIMEOUT_MS}ms`);
    }

    throw error;
  }
}

/**
 * Cleanup job directory (optional, for cleanup tasks)
 */
export async function cleanupJobDirectory(jobDir) {
  try {
    await fs.rm(jobDir, { recursive: true, force: true });
    console.log(`  Cleaned up job directory: ${jobDir}`);
  } catch (error) {
    console.error(`  Warning: Failed to cleanup ${jobDir}: ${error.message}`);
  }
}

/**
 * Convert any DOT files in the benchmark directory to JSON using Graphviz.
 * Writes <name>.json next to each <name>.dot. Warnings are logged but do not fail the job.
 */
async function convertDotFilesWithGraphviz(benchmarkDir, benchmark) {
  const entries = await fs.readdir(benchmarkDir, { withFileTypes: true });
  const dotFiles = entries
    .filter(
      (entry) =>
        entry.isFile() &&
        entry.name.toLowerCase() === `${benchmark.toLowerCase()}_kernel.dot`
    )
    .map((entry) => path.join(benchmarkDir, entry.name));

  for (const dotPath of dotFiles) {
    const outPath = dotPath.replace(/\.dot$/i, '.json');
    try {
      // Use execFileAsync to avoid shell interpolation vulnerabilities
      await execFileAsync('dot', ['-Tjson', dotPath, '-o', outPath]);
    } catch (err) {
      console.warn(`      ⚠️  Failed to convert ${dotPath} to JSON with Graphviz: ${err.message}`);
    }
  }
}

/**
 * Upload graph JSON files to Supabase storage.
 * Returns an array of { file, path, publicUrl } entries.
 */
async function uploadGraphJsonFiles(jobId, benchmark, benchmarkDir) {
  if (!graphBucketReady) {
    console.warn(`      ⚠️  Graph bucket "${GRAPH_BUCKET}" is not available; skipping uploads.`);
    return [];
  }

  const entries = await fs.readdir(benchmarkDir, { withFileTypes: true });
  const jsonFiles = entries
    .filter((entry) => entry.isFile() && entry.name.toLowerCase().endsWith('.json'))
    .map((entry) => path.join(benchmarkDir, entry.name));

  const uploads = [];
  for (const jsonPath of jsonFiles) {
    const fileName = path.basename(jsonPath);
    const storagePath = `jobs/${jobId}/${benchmark}/${fileName}`;
    try {
      const fileBuffer = await fs.readFile(jsonPath);
      const { error: uploadError } = await supabase.storage
        .from(GRAPH_BUCKET)
        .upload(storagePath, fileBuffer, {
          contentType: 'application/json',
          upsert: true
        });
      if (uploadError) {
        throw uploadError;
      }
      const { data: publicData } = supabase.storage.from(GRAPH_BUCKET).getPublicUrl(storagePath);
      uploads.push({
        file: fileName,
        path: storagePath,
        publicUrl: publicData?.publicUrl || null
      });
    } catch (err) {
      console.warn(`      ⚠️  Failed to upload graph ${jsonPath}: ${err.message}`);
    }
  }
  return uploads;
}

/**
 * Upload instructions YAML file as JSON to Supabase storage.
 * Looks for tmp-generated-instructions.yaml in the benchmark directory.
 * Returns { file, path, publicUrl } or null if not found.
 */
async function uploadInstructionsFile(jobId, benchmark, benchmarkDir) {
  if (!graphBucketReady) {
    console.warn(`      ⚠️  Graph bucket "${GRAPH_BUCKET}" is not available; skipping instructions upload.`);
    return null;
  }

  const yamlFileName = 'tmp-generated-instructions.yaml';
  const yamlPath = path.join(benchmarkDir, yamlFileName);

  try {
    // Check if the file exists
    await fs.access(yamlPath);
  } catch {
    console.log(`      ℹ️  No instructions file found at ${yamlPath}`);
    return null;
  }

  try {
    // Read and parse YAML
    const yamlContent = await fs.readFile(yamlPath, 'utf8');
    const jsonContent = yaml.load(yamlContent);

    // Upload JSON to Supabase storage
    const jsonFileName = `${benchmark}_instructions.json`;
    const storagePath = `jobs/${jobId}/${benchmark}/${jsonFileName}`;

    const { error: uploadError } = await supabase.storage
      .from(GRAPH_BUCKET)
      .upload(storagePath, JSON.stringify(jsonContent, null, 2), {
        contentType: 'application/json',
        upsert: true
      });

    if (uploadError) {
      throw uploadError;
    }

    const { data: publicData } = supabase.storage.from(GRAPH_BUCKET).getPublicUrl(storagePath);

    console.log(`      ✓ Uploaded instructions file: ${jsonFileName}`);

    return {
      file: jsonFileName,
      path: storagePath,
      publicUrl: publicData?.publicUrl || null
    };
  } catch (err) {
    console.warn(`      ⚠️  Failed to upload instructions file: ${err.message}`);
    return null;
  }
}

/**
 * Ensure the storage bucket for graph uploads exists (best-effort).
 * Retries after GRAPH_BUCKET_RETRY_INTERVAL_MS if previous attempt failed.
 */
async function ensureGraphBucket() {
  if (graphBucketReady) return;

  // Don't retry too frequently after a failure
  const now = Date.now();
  if (graphBucketLastAttempt > 0 && (now - graphBucketLastAttempt) < GRAPH_BUCKET_RETRY_INTERVAL_MS) {
    return;
  }
  graphBucketLastAttempt = now;

  try {
    const { data: buckets, error: listError } = await supabase.storage.listBuckets();
    if (listError) throw listError;
    const exists = buckets?.some((b) => b.name === GRAPH_BUCKET);
    if (!exists) {
      const { error: createError } = await supabase.storage.createBucket(GRAPH_BUCKET, {
        public: true
      });
      if (createError) throw createError;
      console.log(`  ✓ Created storage bucket: ${GRAPH_BUCKET}`);
    }
    graphBucketReady = true;
  } catch (err) {
    console.warn(`  ⚠️  Unable to ensure bucket "${GRAPH_BUCKET}": ${err.message}. Will retry after ${GRAPH_BUCKET_RETRY_INTERVAL_MS / 1000}s.`);
  }
}

/**
 * Archive the entire job directory into a gzipped tarball.
 * Returns the archive path and size in bytes.
 */
async function archiveJobDirectory(jobId, jobDir) {
  const archivePath = path.join(tmpdir(), `job-package-${jobId}.tar.gz`);
  // Exclude the archive itself (defensive) and write outside jobDir to avoid tar mutation warnings.
  const tarCommand = `tar -czf "${archivePath}" --exclude="job-package.tar.gz" -C "${jobDir}" .`;
  await execAsync(tarCommand);
  const stats = await fs.stat(archivePath);
  return { archivePath, size: stats.size };
}

/**
 * Upload the full job package archive to Supabase storage.
 */
async function uploadJobPackage(jobId, jobDir) {
  if (!graphBucketReady) {
    console.warn(`  ⚠️  Graph bucket "${GRAPH_BUCKET}" is not available; skipping job package upload.`);
    return null;
  }

  try {
    const { archivePath, size } = await archiveJobDirectory(jobId, jobDir);
    const fileBuffer = await fs.readFile(archivePath);
    const storagePath = `jobs/${jobId}/job-package.tar.gz`;
    const { error: uploadError } = await supabase.storage
      .from(GRAPH_BUCKET)
      .upload(storagePath, fileBuffer, {
        contentType: 'application/gzip',
        upsert: true
      });

    if (uploadError) {
      throw uploadError;
    }

    const { data: publicData } = supabase.storage.from(GRAPH_BUCKET).getPublicUrl(storagePath);

    return {
      file: 'job-package.tar.gz',
      path: storagePath,
      bucket: GRAPH_BUCKET,
      size,
      publicUrl: publicData?.publicUrl || null
    };
  } catch (error) {
    console.warn(`  ⚠️  Failed to upload job package: ${error.message}`);
    return null;
  } finally {
    // Best-effort cleanup of the temp archive
    try {
      const tmpPath = path.join(tmpdir(), `job-package-${jobId}.tar.gz`);
      await fs.unlink(tmpPath);
    } catch (cleanupErr) {
      // Ignore cleanup errors
    }
  }
}

/**
 * Execute a Verilog generation job
 *
 * @param {object} job - The job object from database
 * @param {string} job.id - Job ID
 * @param {string} job.project_id - Project ID
 * @param {object} job.info - Job info containing architecture data
 * @returns {Promise<object>} Result info
 */
export async function executeVerilogGenerationJob(job) {
  const startTime = Date.now();
  const jobDir = path.join(JOBS_DIR, job.id);

  console.log(`  Starting Verilog generation job ${job.id}`);

  // Validate job structure
  if (!job.project_id) {
    throw new Error('Job project_id is missing');
  }

  // Validate job ID format (UUID) to prevent command injection
  const UUID_PATTERN = /^[0-9a-f]{8}-[0-9a-f]{4}-[0-9a-f]{4}-[0-9a-f]{4}-[0-9a-f]{12}$/i;
  if (!UUID_PATTERN.test(job.id)) {
    throw new Error(`Invalid job ID format: "${job.id}"`);
  }

  // Fetch architecture from project (single source of truth)
  console.log(`  Fetching architecture from project ${job.project_id}...`);

  const { data: project, error } = await supabase
    .from('projects')
    .select('data')
    .eq('id', job.project_id)
    .single();

  if (error) {
    throw new Error(`Failed to fetch project: ${error.message}`);
  }

  if (!project || !project.data) {
    throw new Error(`Project ${job.project_id} has no data`);
  }

  // Validate architecture structure
  if (!project.data.architecture || typeof project.data.architecture !== 'object') {
    throw new Error(`Project ${job.project_id} data is missing 'architecture' object`);
  }

  const architectureData = project.data;
  console.log(`  ✓ Fetched architecture from project`);

  console.log(`  Setting up job directory: ${jobDir}`);

  // Step 1: Create job directory structure
  await fs.mkdir(jobDir, { recursive: true });
  const verilogDir = path.join(jobDir, 'verilog');
  await fs.mkdir(verilogDir, { recursive: true });

  // Step 2: Write architecture YAML
  const archYamlPath = path.join(jobDir, 'architecture.yaml');
  let yamlContent;
  try {
    // Convert architecture to VectorCGRA-compatible YAML format
    yamlContent = convertArchitectureToVectorCGRAYaml(architectureData);
  } catch (conversionError) {
    throw new Error(`Failed to convert architecture to YAML: ${conversionError.message}`);
  }
  await fs.writeFile(archYamlPath, yamlContent, 'utf8');
  console.log(`  ✓ Converted architecture to VectorCGRA YAML`);

  // Step 3: Create Python wrapper script for VectorCGRA test
  const pythonWrapperPath = path.join(jobDir, 'run_verilog_gen.py');
  const archYamlInContainer = '/tmp/architecture.yaml';
  const verilogOutputDir = '/tmp/verilog';
  
  const pythonScript = `#!/usr/bin/env python3
import sys
import os

# Add VectorCGRA to path
sys.path.insert(0, '/cgra/VectorCGRA')

from VectorCGRA.multi_cgra.test.MeshMultiCgraTemplateRTL_test import test_mesh_multi_cgra_universal, test_simplified_multi_cgra

def main():
    arch_yaml_path = '${archYamlInContainer}'
    output_dir = '${verilogOutputDir}'
    
    cmdline_opts = {
        'test_verilog': 'zeros',
        'test_yosys_verilog': '',
        'dump_textwave': False,
        'dump_vcd': False,
        'dump_vtb': False,
        'max_cycles': None
    }
    
    print(f"Generating Verilog from {arch_yaml_path}...")
    os.chdir(output_dir)
    
    success = True
    
    try:
        test_mesh_multi_cgra_universal(cmdline_opts, arch_yaml_path)
        print("SUCCESS: test_mesh_multi_cgra_universal completed")
    except Exception as e:
        print(f"FAILED: test_mesh_multi_cgra_universal failed: {e}")
        import traceback
        traceback.print_exc()
        success = False
    
    try:
        test_simplified_multi_cgra(cmdline_opts, arch_yaml_path)
        print("SUCCESS: test_simplified_multi_cgra completed")
    except Exception as e:
        print(f"FAILED: test_simplified_multi_cgra failed: {e}")
        import traceback
        traceback.print_exc()
        success = False
    
    # List generated files
    print("\\nGenerated Verilog files:")
    for f in os.listdir('.'):
        if f.endswith('.v'):
            size = os.path.getsize(f)
            print(f"  {f} ({size} bytes)")
    
    if success:
        print("\\nVerilog generation completed successfully")
        sys.exit(0)
    else:
        print("\\nVerilog generation completed with errors")
        sys.exit(1)

if __name__ == '__main__':
    main()
`;
  
  await fs.writeFile(pythonWrapperPath, pythonScript, 'utf8');
  console.log(`  ✓ Created VectorCGRA test wrapper script`);

  // Step 4: Verify Docker image exists
  await verifyDockerImage();

  // Ensure storage bucket exists
  await ensureGraphBucket();

  // Step 5: Run VectorCGRA test in Docker using Python wrapper
  const absoluteVerilogDir = path.resolve(verilogDir);
  const absoluteArchYamlPath = path.resolve(archYamlPath);
  const absolutePythonWrapper = path.resolve(pythonWrapperPath);

  const dockerCommand = [
    'docker run --rm',
    `-v "${absoluteArchYamlPath}:${archYamlInContainer}"`,
    `-v "${absoluteVerilogDir}:${verilogOutputDir}"`,
    `-v "${absolutePythonWrapper}:/tmp/run_verilog_gen.py"`,
    `-w /cgra`,
    DOCKER_IMAGE,
    'python3 /tmp/run_verilog_gen.py'
  ].join(' ');

  console.log(`  Running VectorCGRA test in Docker...`);

  let stdout = '';
  let stderr = '';
  let exitCode = 0;

  try {
    const result = await execAsync(dockerCommand, {
      timeout: DOCKER_TIMEOUT_MS,
      maxBuffer: 50 * 1024 * 1024 // 50MB buffer for large Verilog output
    });
    stdout = result.stdout;
    stderr = result.stderr;
    console.log(`  ✓ VectorCGRA test completed`);
  } catch (execError) {
    // execAsync throws on non-zero exit codes
    stdout = execError.stdout || '';
    stderr = execError.stderr || execError.message;
    exitCode = execError.code || 1;
    console.log(`  ✗ VectorCGRA test failed with exit code ${exitCode}`);
  }

  const endTime = Date.now();
  const executionTimeMs = endTime - startTime;

  // Step 5: Find and collect generated Verilog files
  let verilogFiles = [];
  try {
    const files = await fs.readdir(verilogDir);
    verilogFiles = files.filter(f => f.endsWith('.v'));
    console.log(`  Found ${verilogFiles.length} Verilog file(s)`);
  } catch (readError) {
    console.warn(`  ⚠️  Failed to read Verilog output directory: ${readError.message}`);
  }

  // Step 6: Upload Verilog files to Supabase Storage
  const uploadedFiles = [];
  for (const verilogFile of verilogFiles) {
    const localPath = path.join(verilogDir, verilogFile);
    try {
      const stats = await fs.stat(localPath);
      const fileBuffer = await fs.readFile(localPath);
      const storagePath = `jobs/${job.id}/verilog/${verilogFile}`;
      
      const { error: uploadError } = await supabase.storage
        .from(GRAPH_BUCKET)
        .upload(storagePath, fileBuffer, {
          contentType: 'text/plain',
          upsert: true
        });

      if (uploadError) {
        console.warn(`  ⚠️  Failed to upload ${verilogFile}: ${uploadError.message}`);
        continue;
      }

      const { data: publicData } = supabase.storage.from(GRAPH_BUCKET).getPublicUrl(storagePath);

      uploadedFiles.push({
        file: verilogFile,
        path: storagePath,
        bucket: GRAPH_BUCKET,
        size: stats.size,
        publicUrl: publicData?.publicUrl || null
      });
      console.log(`  ✓ Uploaded ${verilogFile} (${stats.size} bytes)`);
    } catch (uploadError) {
      console.warn(`  ⚠️  Failed to process ${verilogFile}: ${uploadError.message}`);
    }
  }

  // Step 7: Parse errors if test failed
  let errorMessage = null;
  if (exitCode !== 0) {
    errorMessage = parsePytestErrors(stderr || stdout);
  }

  // Step 8: Build result info
  const resultInfo = {
    execution_time_ms: executionTimeMs,
    job_directory: jobDir,
    exit_code: exitCode,
    verilog_files: uploadedFiles,
    verilog_count: uploadedFiles.length,
    stdout: stdout.substring(0, 10000), // Truncate large outputs
    stderr: stderr.substring(0, 10000)
  };

  // Step 9: Upload job package
  const jobPackage = await uploadJobPackage(job.id, jobDir);
  resultInfo.job_package = jobPackage;

  // Step 10: Throw error if test failed
  if (exitCode !== 0) {
    const error = new Error(errorMessage || `VectorCGRA test failed with exit code ${exitCode}`);
    error.jobInfo = resultInfo;
    throw error;
  }

  console.log(`  ✓ Verilog generation completed successfully`);
  return resultInfo;
}

/**
 * Parse pytest error output to extract user-friendly error messages
 */
function parsePytestErrors(output) {
  if (!output) return 'Unknown error occurred';

  // Try to extract error summary from pytest output
  const lines = output.split('\n');
  const errorLines = [];
  let inErrorSection = false;

  for (const line of lines) {
    if (line.includes('FAILED') || line.includes('ERROR')) {
      inErrorSection = true;
    }
    if (inErrorSection) {
      errorLines.push(line);
      if (errorLines.length > 20) break; // Limit error output
    }
  }

  if (errorLines.length > 0) {
    return errorLines.join('\n');
  }

  // Fallback to first 500 chars
  return output.substring(0, 500);
}

/**
 * Convert architecture JSON to VectorCGRA-compatible YAML format
 * This ensures the YAML matches VectorCGRA's expected schema
 */
function convertArchitectureToVectorCGRAYaml(architectureData) {
  // Extract architecture from the data structure
  const arch = architectureData.architecture || architectureData;
  
  // Build VectorCGRA-compatible YAML structure
  const vectorCgraYaml = {
    architecture: {
      name: 'NeuraMultiCgra',
      version: '1.0'
    },
    multi_cgra_defaults: {
      base_topology: arch.multi_cgra_defaults?.base_topology || 'mesh',
      rows: arch.multi_cgra_defaults?.rows || arch.CGRAs?.length || 1,
      columns: arch.multi_cgra_defaults?.columns || arch.CGRAs?.[0]?.length || 1,
      memory: {
        capacity: arch.multi_cgra_defaults?.memory?.capacity || 256,
        'data bitwidth': arch.multi_cgra_defaults?.memory?.['data bitwidth'] || 64,
        'vector lanes': arch.multi_cgra_defaults?.memory?.['vector lanes'] || 1
      }
    },
    cgra_defaults: {
      rows: arch.cgra_defaults?.rows || arch.CGRAs?.[0]?.[0]?.rows || 4,
      columns: arch.cgra_defaults?.columns || arch.CGRAs?.[0]?.[0]?.columns || 4,
      configMemSize: arch.cgra_defaults?.configMemSize || 64,
      'per bank sram': arch.cgra_defaults?.['per bank sram'] || 8
    },
    tile_defaults: {
      num_registers: arch.tile_defaults?.num_registers || 16,
      fu_types: arch.tile_defaults?.fu_types || ['alu', 'mul', 'lsu', 'rhauld']
    }
  };

  // Add link overrides if present
  if (arch.link_overrides && arch.link_overrides.length > 0) {
    vectorCgraYaml.link_overrides = arch.link_overrides;
  }

  // Add tile overrides if present
  if (arch.tile_overrides && arch.tile_overrides.length > 0) {
    vectorCgraYaml.tile_overrides = arch.tile_overrides;
  }

  // Convert to YAML string
  return yaml.dump(vectorCgraYaml, {
    sortKeys: false,
    defaultFlowStyle: false,
    lineWidth: -1
  });
}
