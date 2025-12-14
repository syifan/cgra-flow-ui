/**
 * Real implementation for executing CGRA mapping jobs
 */

import { promises as fs } from 'fs';
import path from 'path';
import { exec, execFile } from 'child_process';
import { promisify } from 'util';
import { createClient } from '@supabase/supabase-js';
import { config } from 'dotenv';
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
const DOCKER_IMAGE = process.env.DOCKER_IMAGE || 'cgra-flow:latest';
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

  // Validate job structure
  if (!job.info) {
    throw new Error('Job info is missing');
  }

  if (!job.info.benchmarks || !Array.isArray(job.info.benchmarks) || job.info.benchmarks.length === 0) {
    throw new Error('Job info.benchmarks is missing or empty');
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
  const results = {};
  let successCount = 0;
  let failureCount = 0;

  console.log(`  Processing ${benchmarks.length} benchmark(s)...`);

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

  return {
    execution_time_ms: executionTimeMs,
    job_directory: jobDir,
    benchmarks: results,
    summary: {
      total: benchmarks.length,
      success: successCount,
      failed: failureCount
    }
  };
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
      stdout_length: stdout.length,
      stderr_length: stderr.length
    };
  } catch (error) {
    const endTime = Date.now();

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
