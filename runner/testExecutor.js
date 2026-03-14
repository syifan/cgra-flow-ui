/**
 * Test Executor for run_tests jobs.
 *
 * Parses run_tests/cases.txt, executes each pytest command sequentially inside
 * the cgra/cgra-flow:web-ui Docker image, and reports incremental progress by
 * patching jobs.info in Supabase after each test completes.
 *
 * Environment variables:
 *   CASES_FILE_PATH       - Path to cases.txt (default: ../CGRA-Flow-sample/cases.txt relative to this file)
 *   DOCKER_IMAGE          - Docker image to use (default: cgra/cgra-flow:web-ui)
 *   TEST_DOCKER_TIMEOUT_MS - Per-test timeout in ms (default: 600000 = 10 min)
 * 
 * See runner/README.md for full configuration documentation.
 */

import { promises as fs } from 'fs';
import path from 'path';
import { exec } from 'child_process';
import { fileURLToPath } from 'url';
import { config } from 'dotenv';
import { createClient } from '@supabase/supabase-js';

config();

const __dirname = path.dirname(fileURLToPath(import.meta.url));

// Validate required environment variables
if (!process.env.SUPABASE_URL) {
  throw new Error('SUPABASE_URL environment variable is required');
}
if (!process.env.SUPABASE_SERVICE_ROLE_KEY) {
  throw new Error('SUPABASE_SERVICE_ROLE_KEY environment variable is required');
}

// Internal Supabase client for patching job info mid-execution
const supabase = createClient(
  process.env.SUPABASE_URL,
  process.env.SUPABASE_SERVICE_ROLE_KEY,
  { auth: { autoRefreshToken: false, persistSession: false } }
);

// Configuration
const CASES_FILE_PATH = process.env.CASES_FILE_PATH
  || path.resolve(__dirname, '../CGRA-Flow-sample/cases.txt');

const DOCKER_IMAGE = process.env.DOCKER_IMAGE || 'cgra/cgra-flow:web-ui';
const TEST_DOCKER_TIMEOUT_MS = parseInt(process.env.TEST_DOCKER_TIMEOUT_MS || '600000', 10);
const STDOUT_CAP_BYTES = 8 * 1024; // 8 KB

// Validate Docker image name to prevent shell injection
const DOCKER_IMAGE_PATTERN = /^[a-z0-9][a-z0-9._/:@-]*$/i;
if (!DOCKER_IMAGE_PATTERN.test(DOCKER_IMAGE)) {
  throw new Error(`Invalid DOCKER_IMAGE format: "${DOCKER_IMAGE}"`);
}

/**
 * Parse cases.txt into an ordered array of test case descriptors.
 *
 * Format of cases.txt:
 *   # <label>         — human-readable label for the next test
 *   pytest <args>     — the pytest command to run
 *   (blank lines ignored)
 *
 * @param {string} [filePath] - Path to cases.txt (defaults to CASES_FILE_PATH env)
 * @returns {Promise<Array<{label:string, cmd:string, file:string, caseName:string|null}>>}
 */
export async function parseCasesFile(filePath = CASES_FILE_PATH) {
  let raw;
  try {
    raw = await fs.readFile(filePath, 'utf8');
  } catch (err) {
    throw new Error(`Cannot read cases file at "${filePath}": ${err.message}`);
  }

  const lines = raw.split('\n');
  const cases = [];
  let pendingLabel = null;

  for (const rawLine of lines) {
    const line = rawLine.trim();
    if (!line) continue;

    if (line.startsWith('#')) {
      // Strip leading # and optional space; accumulate multi-comment labels by joining
      const commentText = line.replace(/^#+\s*/, '').trim();
      if (pendingLabel === null) {
        pendingLabel = commentText;
      } else {
        // Multiple comment lines before a command — append (handles multi-line comments)
        pendingLabel = `${pendingLabel} ${commentText}`;
      }
    } else if (line.startsWith('pytest')) {
      // Extract file path and optional ::caseName from the pytest args
      // e.g. "pytest ../foo/bar_test.py::test_something -xvs"
      const parts = line.split(/\s+/);
      const target = parts[1] || ''; // first arg after "pytest"
      const [rawFile, caseName = null] = target.split('::');

      // Strip leading "../" prefix to get the relative path inside the VectorCGRA dir
      const file = rawFile.replace(/^\.\.\//, '');

      cases.push({
        label: pendingLabel || file,
        cmd: line,
        file,
        caseName: caseName || null,
      });

      pendingLabel = null;
    }
    // Lines that are neither comments nor pytest commands are ignored
  }

  return cases;
}

/**
 * Run a single test case in Docker and return the result.
 *
 * @param {object} caseEntry - Parsed case from parseCasesFile
 * @returns {Promise<{status:'pass'|'fail', stdout:string, durationMs:number}>}
 */
export async function runTestCase(caseEntry) {
  const startTime = Date.now();

  // Build the docker command. The working dir inside the container matches
  // the python-package.yml pattern: mkdir -p build && cd build && <pytest-cmd>
  const innerCmd = `mkdir -p build && cd build && ${caseEntry.cmd}`;

  // Shell-escape the inner command for the bash -c argument
  const shellArg = innerCmd.replace(/"/g, '\\"');
  const dockerCmd = `docker run --rm -w /cgra/VectorCGRA ${DOCKER_IMAGE} bash -c "${shellArg}"`;

  return new Promise((resolve) => {
    let timedOut = false;
    let outputBuffer = '';

    const child = exec(dockerCmd, { maxBuffer: 50 * 1024 * 1024 });

    child.stdout?.on('data', (chunk) => { outputBuffer += chunk; });
    child.stderr?.on('data', (chunk) => { outputBuffer += chunk; });

    const timer = setTimeout(() => {
      timedOut = true;
      // Kill the child process; Docker container will be cleaned up automatically
      // because we used --rm and the init process gets SIGKILL
      child.kill('SIGKILL');
    }, TEST_DOCKER_TIMEOUT_MS);

    child.on('close', (code) => {
      clearTimeout(timer);
      const durationMs = Date.now() - startTime;

      // Cap stdout at 8 KB (take the last STDOUT_CAP_BYTES characters to include failures)
      const stdout = outputBuffer.length > STDOUT_CAP_BYTES
        ? `[...truncated]\n${outputBuffer.slice(-STDOUT_CAP_BYTES)}`
        : outputBuffer;

      if (timedOut) {
        resolve({
          status: 'fail',
          stdout: `Timed out after ${Math.round(TEST_DOCKER_TIMEOUT_MS / 1000)}s\n${stdout}`,
          durationMs,
        });
      } else {
        resolve({
          status: code === 0 ? 'pass' : 'fail',
          stdout,
          durationMs,
        });
      }
    });

    child.on('error', (err) => {
      clearTimeout(timer);
      resolve({
        status: 'fail',
        stdout: `Failed to spawn docker: ${err.message}`,
        durationMs: Date.now() - startTime,
      });
    });
  });
}

/**
 * Patch jobs.info in Supabase with the current test case array.
 *
 * @param {import('@supabase/supabase-js').SupabaseClient} supabase
 * @param {string} jobId
 * @param {object} info - Full info object to write
 */
async function patchJobInfo(jobId, info) {
  const { error } = await supabase
    .from('jobs')
    .update({ info, updated_at: new Date().toISOString() })
    .eq('id', jobId);

  if (error) {
    // Log but don't throw — a failed info patch should not abort the test run
    console.error(`  Warning: failed to patch jobs.info for ${jobId}: ${error.message}`);
  }
}

/**
 * Execute a run_tests job: parse cases.txt, run each test sequentially in
 * Docker, and stream incremental progress back via jobs.info.
 *
 * @param {object} job - Job row from Supabase
 * @param {import('@supabase/supabase-js').SupabaseClient} supabase
 * @returns {Promise<object>} Final info object (same shape as jobs.info)
 */
export async function executeRunTestsJob(job) {
  console.log(`  Parsing cases from: ${CASES_FILE_PATH}`);

  const parsed = await parseCasesFile();
  const total = parsed.length;

  if (total === 0) {
    throw new Error(`No test cases found in "${CASES_FILE_PATH}"`);
  }

  console.log(`  Found ${total} test case(s)`);

  // Build initial cases array with all tests in 'pending' state
  let cases = parsed.map((c) => ({
    label: c.label,
    cmd: c.cmd,
    file: c.file,
    caseName: c.caseName,
    status: 'pending',
    stdout: null,
    durationMs: null,
  }));

  // Write initial state so the UI can render the pending list immediately
  let info = { cases, total, completed: 0 };
  await patchJobInfo(job.id, info);

  let completed = 0;

  for (let i = 0; i < cases.length; i++) {
    const testCase = cases[i];
    console.log(`\n  → [${i + 1}/${total}] ${testCase.label}`);
    console.log(`    cmd: ${testCase.cmd}`);

    // Mark this test as running
    cases = cases.map((c, idx) =>
      idx === i ? { ...c, status: 'running' } : c
    );
    info = { cases, total, completed };
    await patchJobInfo(job.id, info);

    // Execute the test in Docker
    const result = await runTestCase(testCase);

    completed++;
    const icon = result.status === 'pass' ? '✓' : '✗';
    console.log(`    ${icon} ${result.status} (${result.durationMs}ms)`);

    // Update the case with its result
    cases = cases.map((c, idx) =>
      idx === i
        ? { ...c, status: result.status, stdout: result.stdout, durationMs: result.durationMs }
        : c
    );
    info = { cases, total, completed };
    await patchJobInfo(job.id, info);
  }

  const passCount = cases.filter((c) => c.status === 'pass').length;
  const failCount = cases.filter((c) => c.status === 'fail').length;
  console.log(`\n  Summary: ${passCount} passed, ${failCount} failed`);

  return info;
}
