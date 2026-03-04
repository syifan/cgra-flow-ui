/**
 * Synthesis executor for 'synthesis' jobs.
 *
 * Flow:
 *   1. Find the latest successful verilog-generation job for the project.
 *   2. Download design.v from Supabase Storage to a temp directory.
 *   3. Write a synthesis shell script to the temp directory.
 *   4. Run Docker (mounting the temp directory) and stream stdout to capture
 *      "PROGRESS:<n>:<label>" markers for real-time Supabase progress updates.
 *   5. Parse 3-open-yosys-synthesis/stats.txt for tile area.
 *   6. Return the final result object.
 *
 * The synthesis shell script runs inside the Docker image and requires:
 *   - sv2v  (installed in Dockerfile via zachjs/sv2v)
 *   - mflowgen  (installed in Dockerfile via pip install -e /cgra/mflowgen)
 *   - yosys  (installed in Dockerfile via oss-cad-suite)
 *
 * Environment variables:
 *   DOCKER_IMAGE                 - Docker image (default: cgra/cgra-flow:ui)
 *   SUPABASE_STORAGE_BUCKET      - Storage bucket (default: job-artifacts)
 *   SYNTHESIS_DOCKER_TIMEOUT_MS  - Timeout in ms (default: 3600000 = 60 min)
 */

import { promises as fs } from 'fs';
import path from 'path';
import { spawn } from 'child_process';
import { tmpdir } from 'os';
import { createClient } from '@supabase/supabase-js';
import { config } from 'dotenv';

config();

if (!process.env.SUPABASE_URL) throw new Error('SUPABASE_URL is required');
if (!process.env.SUPABASE_SERVICE_ROLE_KEY) throw new Error('SUPABASE_SERVICE_ROLE_KEY is required');

const supabase = createClient(
  process.env.SUPABASE_URL,
  process.env.SUPABASE_SERVICE_ROLE_KEY,
  { auth: { autoRefreshToken: false, persistSession: false } }
);

const DOCKER_IMAGE = process.env.DOCKER_IMAGE || 'cgra/cgra-flow:ui';
const GRAPH_BUCKET = process.env.SUPABASE_STORAGE_BUCKET || 'job-artifacts';
const SYNTHESIS_DOCKER_TIMEOUT_MS = parseInt(
  process.env.SYNTHESIS_DOCKER_TIMEOUT_MS || '3600000',
  10
); // 60 minutes default

const UUID_PATTERN =
  /^[0-9a-f]{8}-[0-9a-f]{4}-[0-9a-f]{4}-[0-9a-f]{4}-[0-9a-f]{12}$/i;

// ── Helpers ──────────────────────────────────────────────────────────────────

/**
 * Replace the job's entire info column in Supabase.
 * Consistent with the testExecutor.js pattern.
 *
 * @param {string} jobId
 * @param {object} info
 */
async function patchJobInfo(jobId, info) {
  const { error } = await supabase
    .from('jobs')
    .update({ info, updated_at: new Date().toISOString() })
    .eq('id', jobId);
  if (error) {
    console.warn(`  ⚠️  Failed to patch job info for ${jobId}: ${error.message}`);
  }
}

/**
 * Write a standard progress object to the job's info column.
 *
 * @param {string}  jobId
 * @param {number}  progress  0–100
 * @param {string}  stage     Human-readable label (e.g. 'sv2v', 'complete')
 * @param {number}  timeCost  Elapsed seconds
 */
async function updateProgress(jobId, progress, stage, timeCost) {
  await patchJobInfo(jobId, { progress, stage, timeCost });
}

/**
 * Spawn a process, pipe stdout/stderr, and invoke onProgress for each
 * "PROGRESS:<n>:<label>" line emitted by the process.
 *
 * @param {string}   cmd
 * @param {string[]} args
 * @param {number}   timeoutMs
 * @param {function(number, string): Promise<void>} onProgress
 * @returns {Promise<{stdout: string, stderr: string}>}
 */
function runWithProgress(cmd, args, timeoutMs, onProgress) {
  return new Promise((resolve, reject) => {
    const proc = spawn(cmd, args);
    let stdout = '';
    let stderr = '';
    let timedOut = false;

    const timer = setTimeout(() => {
      timedOut = true;
      proc.kill('SIGTERM');
      reject(new Error(`Process "${cmd}" timed out after ${timeoutMs / 1000}s`));
    }, timeoutMs);

    proc.stdout.on('data', (data) => {
      const text = data.toString();
      stdout += text;
      for (const line of text.split('\n')) {
        const match = line.match(/^PROGRESS:(\d+):(.+)$/);
        if (match) {
          const progress = parseInt(match[1], 10);
          const stage = match[2].trim();
          onProgress(progress, stage).catch((err) => {
            console.warn(`  ⚠️  onProgress error: ${err.message}`);
          });
        }
      }
    });

    proc.stderr.on('data', (data) => {
      stderr += data.toString();
    });

    proc.on('close', (code) => {
      clearTimeout(timer);
      if (timedOut) return;
      if (code === 0) {
        resolve({ stdout, stderr });
      } else {
        const tail = (stderr || stdout).slice(-3000);
        reject(new Error(`Process exited with code ${code}.\n${tail}`));
      }
    });

    proc.on('error', (err) => {
      clearTimeout(timer);
      reject(err);
    });
  });
}

// ── Main executor ─────────────────────────────────────────────────────────────

/**
 * Execute a synthesis job.
 *
 * @param {object} job  Job row from Supabase (id, project_id, info, ...)
 * @returns {Promise<object>} Final result info object
 */
export async function executeSynthesisJob(job) {
  const startTime = Date.now();
  /** Wall-clock seconds elapsed since job start (1 decimal place) */
  const elapsed = () => parseFloat(((Date.now() - startTime) / 1000).toFixed(1));

  // Validate job structure
  if (!job.project_id) throw new Error('Job project_id is missing');
  if (!UUID_PATTERN.test(job.id)) {
    throw new Error(`Invalid job ID format: "${job.id}"`);
  }

  const synthDir = path.join(tmpdir(), `synthesis-${job.id}`);

  try {
    await fs.mkdir(synthDir, { recursive: true });

    // ── Step 1: Find the latest successful verilog-generation job ─────────
    console.log(
      `  Looking for a successful verilog-generation job for project ${job.project_id}...`
    );

    const { data: verilogJob, error: queryError } = await supabase
      .from('jobs')
      .select('id, info')
      .eq('project_id', job.project_id)
      .eq('type', 'verilog-generation')
      .eq('status', 'success')
      .order('created_at', { ascending: false })
      .limit(1)
      .maybeSingle();

    if (queryError) {
      throw new Error(`Failed to query verilog-generation jobs: ${queryError.message}`);
    }

    // When no successful verilog-generation job exists, fall back to the
    // pre-built design baked into the Docker image (/cgra/default_design.v).
    // This lets synthesis be tested independently without running SVerilog generation.
    const useDefaultDesign = !verilogJob;
    if (useDefaultDesign) {
      console.log(
        '  ℹ️  No verilog-generation job found — using bundled /cgra/default_design.v'
      );
    } else {
      console.log(`  ✓ Found verilog-generation job ${verilogJob.id}`);
    }

    // ── Steps 2-3: Download design.v (skipped when using image default) ───
    if (!useDefaultDesign) {
      // ── Step 2: Select the CgraTemplateRTL verilog file ─────────────────
      const verilogFiles = verilogJob.info?.verilog_files ?? [];
      // Priority: CgraTemplateRTL__*pickled*.v  >  CgraTemplateRTL*.v  > first file
      const targetFile =
        verilogFiles.find((f) => /CgraTemplateRTL.*pickled/i.test(f.file)) ||
        verilogFiles.find((f) => /CgraTemplateRTL/i.test(f.file)) ||
        verilogFiles[0];

      if (!targetFile) {
        throw new Error('No verilog files found in the latest verilog-generation job.');
      }
      console.log(`  Using verilog source: ${targetFile.file}`);

      // ── Step 3: Download verilog file from Supabase Storage ─────────────
      await updateProgress(job.id, 0, 'downloading', elapsed());

      const { data: fileBlob, error: downloadError } = await supabase.storage
        .from(targetFile.bucket || GRAPH_BUCKET)
        .download(targetFile.path);

      if (downloadError) {
        throw new Error(`Failed to download verilog file: ${downloadError.message}`);
      }

      const fileBuffer = Buffer.from(await fileBlob.arrayBuffer());
      const designVPath = path.join(synthDir, 'design.v');
      await fs.writeFile(designVPath, fileBuffer);
      console.log(`  ✓ Downloaded design.v (${fileBuffer.length} bytes)`);
    }

    // ── Step 4: Write the synthesis shell script ─────────────────────────
    const synthScriptPath = path.join(synthDir, 'synthesis.sh');

    // Paths inside the Docker container
    const MFLOWGEN_ROOT = '/cgra/mflowgen';
    const MFLOWGEN_DESIGN = `${MFLOWGEN_ROOT}/designs/cgra`;
    const MFLOWGEN_DESIGN_INPUT = `${MFLOWGEN_DESIGN}/rtl/outputs`;
    const MFLOWGEN_BUILD = `${MFLOWGEN_ROOT}/build`;
    const CACTI_DIR = '/cgra/cacti';

    // SPM estimation parameters — caller can pass via job.info; defaults suit 2×2 CGRA
    const spmSizeBytes   = job.info?.spmSizeBytes   ?? 1024;  // 1 KB
    const spmReadPorts   = job.info?.spmReadPorts    ?? 2;
    const spmWritePorts  = job.info?.spmWritePorts   ?? 1;

    // When using the bundled default_design.v it is already plain Verilog
    // (sv2v was run during image preparation), so we just copy it.
    const sv2vLines = useDefaultDesign
      ? [
          '# Bundled default_design.v is already plain Verilog — skip sv2v',
          'cp /cgra/default_design.v /synth/design_sv2v.v',
        ]
      : [
          '# Stage 1: sv2v — convert SystemVerilog to plain Verilog',
          'sv2v /synth/design.v > /synth/design_sv2v.v',
        ];

    const synthScript = [
      '#!/bin/bash',
      'set -eo pipefail',
      '',
      'echo "PROGRESS:10:starting"',
      '',
      '# Stage 0: CACTI — SPM area/power estimation (runs independently of synthesis)',
      `sed 's/\\[SPM_SIZE\\]/${spmSizeBytes}/; s/\\[READ_PORT_COUNT\\]/${spmReadPorts}/; s/\\[WRITE_PORT_COUNT\\]/${spmWritePorts}/' ${CACTI_DIR}/spm_template.cfg > /synth/spm.cfg`,
      `cd ${CACTI_DIR}`,
      './cacti -infile /synth/spm.cfg > /synth/cacti_out.txt 2>&1 || true',
      // Write a Python extraction script then run it — avoids shell quoting issues
      "cat > /synth/parse_cacti.py << 'PYEOF'",
      'import re',
      'txt = open("/synth/cacti_out.txt").read()',
      'def extract(p):',
      '    m = re.search(p, txt)',
      '    return m.group(1).strip() if m else ""',
      String.raw`energy = extract(r"Data array: Total dynamic read energy/access\s+\(nJ\):\s+([\d.e+\-]+)")`,
      String.raw`timing = extract(r"Data side \(with Output driver\) \(ns\):\s+([\d.e+\-]+)")`,
      String.raw`area   = extract(r"Data array: Area \(mm2\):\s+([\d.e+\-]+)")`,
      'open("/synth/cacti_result.txt","w").write(f"energy_nj={energy}\\ntiming_ns={timing}\\narea_mm2={area}\\n")',
      'PYEOF',
      'python3 /synth/parse_cacti.py',
      'echo "PROGRESS:15:cacti-done"',
      '',
      ...sv2vLines,
      'echo "PROGRESS:20:sv2v"',
      '',
      '# Stage 2: mflowgen — prepare design input and set up ASIC flow',
      `mkdir -p ${MFLOWGEN_DESIGN_INPUT}`,
      `cp /synth/design_sv2v.v ${MFLOWGEN_DESIGN_INPUT}/design.v`,
      `mkdir -p ${MFLOWGEN_BUILD}`,
      `cd ${MFLOWGEN_BUILD}`,
      'rm -rf ./* 2>/dev/null || true',
      `mflowgen run --design ${MFLOWGEN_DESIGN}`,
      'make 2',
      'echo "PROGRESS:50:synthesis-init"',
      '',
      '# Stage 3: Yosys synthesis',
      'make 3',
      'echo "PROGRESS:80:synthesis-run"',
      '',
      '# Copy stats output to the mounted volume for the host to parse',
      `cp ${MFLOWGEN_BUILD}/3-open-yosys-synthesis/stats.txt /synth/stats.txt`,
      'echo "PROGRESS:90:stats-copied"',
    ].join('\n');

    await fs.writeFile(synthScriptPath, synthScript, { mode: 0o755 });
    console.log(`  ✓ Wrote synthesis.sh`);

    // ── Step 5: Run Docker with streaming progress ────────────────────────
    const absoluteSynthDir = path.resolve(synthDir);
    const dockerArgs = [
      'run', '--rm',
      '-v', `${absoluteSynthDir}:/synth`,
      DOCKER_IMAGE,
      'bash', '/synth/synthesis.sh',
    ];

    console.log(
      `  Running Docker synthesis (image: ${DOCKER_IMAGE}, timeout: ${SYNTHESIS_DOCKER_TIMEOUT_MS / 1000}s)...`
    );

    await runWithProgress(
      'docker',
      dockerArgs,
      SYNTHESIS_DOCKER_TIMEOUT_MS,
      async (progress, stage) => {
        console.log(`  ↑ Progress ${progress}% [${stage}] (${elapsed()}s elapsed)`);
        await updateProgress(job.id, progress, stage, elapsed());
      }
    );

    console.log(`  ✓ Docker synthesis completed (${elapsed()}s total)`);

    // ── Step 6: Parse tile area from stats.txt ────────────────────────────
    let tileArea = null;
    try {
      const statsPath = path.join(synthDir, 'stats.txt');
      const statsContent = await fs.readFile(statsPath, 'utf8');

      for (const line of statsContent.split('\n')) {
        if (line.includes('Chip area for module ')) {
          const parts = line.split(': ');
          if (parts.length >= 2) {
            const rawMicron2 = parseFloat(parts[1].trim());
            if (!isNaN(rawMicron2)) {
              // Convert µm² → mm² (divide by 10^6), round to 2 decimal places
              tileArea = Math.round((rawMicron2 / 1_000_000) * 100) / 100;
              console.log(`  ✓ Tile area: ${tileArea} mm²`);
              break;
            }
          }
        }
      }

      if (tileArea === null) {
        console.warn('  ⚠️  "Chip area for module" line not found in stats.txt');
      }
    } catch (statsErr) {
      console.warn(`  ⚠️  Could not read stats.txt: ${statsErr.message}`);
    }

    // ── Step 7: Parse SPM area/power from cacti_result.txt ───────────────
    let spmArea = null;
    let spmPower = null;
    try {
      const cactiResultPath = path.join(synthDir, 'cacti_result.txt');
      const cactiContent = await fs.readFile(cactiResultPath, 'utf8');
      const cactiMap = {};
      for (const line of cactiContent.split('\n')) {
        const [k, v] = line.split('=');
        if (k && v) cactiMap[k.trim()] = parseFloat(v.trim());
      }
      const energyNj  = cactiMap['energy_nj'];
      const timingNs  = cactiMap['timing_ns'];
      const areaMm2   = cactiMap['area_mm2'];

      if (!isNaN(areaMm2) && areaMm2 > 0) {
        spmArea = Math.round(areaMm2 * 10000) / 10000;   // 4 decimal places (mm²)
        console.log(`  ✓ SPM area: ${spmArea} mm²`);
      }
      if (!isNaN(energyNj) && !isNaN(timingNs) && timingNs > 0) {
        // Power (mW) = energy (nJ) / access_time (ns) * 1000
        spmPower = Math.round((energyNj / timingNs) * 1000 * 100) / 100;  // 2 dp
        console.log(`  ✓ SPM power: ${spmPower} mW`);
      }
    } catch (cactiErr) {
      console.warn(`  ⚠️  Could not read cacti_result.txt: ${cactiErr.message}`);
    }

    // ── Step 8: Write final result ────────────────────────────────────────
    const timeCost = elapsed();
    const result = {
      progress: 100,
      stage: 'complete',
      timeCost,
      tileArea,
      tilePower: null,  // Yosys does not provide dynamic power estimation
      spmArea,
      spmPower,
    };

    await updateProgress(job.id, 100, 'complete', timeCost);
    console.log(`  ✓ Synthesis finished: tileArea=${tileArea} mm², timeCost=${timeCost}s`);

    return result;

  } finally {
    // Always remove the temp directory, even on error
    try {
      await fs.rm(synthDir, { recursive: true, force: true });
    } catch (cleanupErr) {
      console.warn(`  ⚠️  Failed to clean up ${synthDir}: ${cleanupErr.message}`);
    }
  }
}
