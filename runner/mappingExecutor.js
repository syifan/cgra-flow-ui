/**
 * Real implementation for executing CGRA mapping jobs
 */

import { promises as fs } from 'fs';
import path from 'path';
import { exec } from 'child_process';
import { promisify } from 'util';
import { createClient } from '@supabase/supabase-js';
import { config } from 'dotenv';
import { convertJsonToYamlString } from './converter/converter.js';

config();

const execAsync = promisify(exec);

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
  const yamlContent = convertJsonToYamlString(architectureData);
  await fs.writeFile(archYamlPath, yamlContent, 'utf8');
  console.log(`  ✓ Converted to architecture.yaml`);

  // Step 4: Verify Docker image exists
  await verifyDockerImage();

  // Step 5: Process each benchmark
  const benchmarks = job.info.benchmarks || [];
  const results = {};
  let successCount = 0;
  let failureCount = 0;

  console.log(`  Processing ${benchmarks.length} benchmark(s)...`);

  for (const benchmark of benchmarks) {
    console.log(`\n  → Benchmark: ${benchmark}`);

    try {
      const benchmarkResult = await processBenchmark(jobDir, benchmark, archYamlPath);
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
      `Docker image ${DOCKER_IMAGE} not found. Please build it first with:\n` +
      `  cd cgra-flow-docker && docker build -t ${DOCKER_IMAGE} .`
    );
  }
}

/**
 * Process a single benchmark
 *
 * @param {string} jobDir - Job directory path
 * @param {string} benchmark - Benchmark name (e.g., 'fir', 'mm')
 * @param {string} archYamlPath - Path to architecture YAML file
 * @returns {Promise<object>} Benchmark result
 */
async function processBenchmark(jobDir, benchmark, archYamlPath) {
  const benchmarkDir = path.join(jobDir, 'benchmarks', benchmark);
  await fs.mkdir(benchmarkDir, { recursive: true });
  const benchmarkOutputDir = path.join(benchmarkDir, 'Output');
  await fs.mkdir(benchmarkOutputDir, { recursive: true });
  const absoluteBenchmarkDir = path.resolve(benchmarkDir);

  // Determine test file path in Docker container
  const testFilePath = `/cgra/dataflow/test/e2e/${benchmark}/${benchmark}_kernel.mlir`;

  // Copy architecture.yaml to benchmark directory
  const benchmarkArchPath = path.join(benchmarkDir, 'architecture.yaml');
  await fs.copyFile(archYamlPath, benchmarkArchPath);

  // Seed the benchmark directory with the original test files from the image so that
  // writes in /cgra/dataflow/test/e2e/<benchmark> (dot/png/etc.) land on the host.
  // This copies once per run and lets us bind-mount the entire benchmark folder.
  const seedCommand = [
    'docker run --rm',
    `-v "${absoluteBenchmarkDir}:/workspace"`,
    DOCKER_IMAGE,
    'bash -lc',
    `"shopt -s dotglob && cp -r /cgra/dataflow/test/e2e/${benchmark}/* /workspace/"`,
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
    `-v "${absoluteBenchmarkDir}:/cgra/dataflow/test/e2e/${benchmark}"`,
    `-v "${absoluteJobDir}/architecture.yaml:/cgra/dataflow/test/arch_spec/architecture.yaml:ro"`,
    '-w',
    `/cgra/dataflow/test/e2e/${benchmark}`,
    DOCKER_IMAGE,
    `/cgra/llvm-project/build/bin/llvm-lit -v ${testFilePath}`
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

    // Parse llvm-lit output for results
    const passed = stdout.includes('pass 1') || stdout.includes('Passed: 1');
    const failed = stdout.includes('fail 1') || stdout.includes('Failed: 1');

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
      stdout_length: stdout.length,
      stderr_length: stderr.length
    };
  } catch (error) {
    const endTime = Date.now();

    // Save error output
    if (error.stdout) {
      await fs.writeFile(path.join(benchmarkDir, 'stdout.txt'), error.stdout, 'utf8');
    }
    if (error.stderr) {
      await fs.writeFile(path.join(benchmarkDir, 'stderr.txt'), error.stderr, 'utf8');
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
