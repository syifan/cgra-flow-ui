/**
 * Layout executor for 'layout' jobs.
 *
 * Flow:
 *   1. Find the latest successful verilog-generation job for the project.
 *   2. Download design.v from Supabase Storage to a temp directory
 *      (or fall back to /cgra/default_design.v bundled in the image).
 *   3. Write a layout shell script to the temp directory.
 *   4. Run Docker (mounting the temp directory at /layout) and stream stdout
 *      to capture "PROGRESS:<n>:<label>" markers for real-time progress updates.
 *   5. Locate the exported layout.png in the temp directory.
 *   6. Upload layout.png to Supabase Storage and write the signed URL to job.info.
 *
 * The layout shell script runs inside the Docker image and requires:
 *   - sv2v      (installed via zachjs/sv2v)
 *   - mflowgen  (installed via pip install -e /cgra/mflowgen)
 *   - openroad  (installed from openroad/orfs image layer)
 *
 * Environment variables:
 *   DOCKER_IMAGE               - Docker image (default: cgra/cgra-flow:web-ui)
 *   SUPABASE_STORAGE_BUCKET    - Storage bucket (default: job-artifacts)
 *   LAYOUT_DOCKER_TIMEOUT_MS   - Timeout in ms (default: 0 = no timeout)
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

const DOCKER_IMAGE = process.env.DOCKER_IMAGE || 'cgra/cgra-flow:web-ui';
const GRAPH_BUCKET = process.env.SUPABASE_STORAGE_BUCKET || 'job-artifacts';
const LAYOUT_DOCKER_TIMEOUT_MS = parseInt(
  process.env.LAYOUT_DOCKER_TIMEOUT_MS || '0',
  10
); // 0 = no timeout

const UUID_PATTERN =
  /^[0-9a-f]{8}-[0-9a-f]{4}-[0-9a-f]{4}-[0-9a-f]{4}-[0-9a-f]{12}$/i;

// ── Helpers ──────────────────────────────────────────────────────────────────

/**
 * Replace the job's entire info column in Supabase.
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

    const timer = timeoutMs > 0
      ? setTimeout(() => {
          timedOut = true;
          proc.kill('SIGTERM');
          reject(new Error(`Process "${cmd}" timed out after ${timeoutMs / 1000}s`));
        }, timeoutMs)
      : null;

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
      if (timer) clearTimeout(timer);
      if (timedOut) return;
      if (code === 0) {
        resolve({ stdout, stderr });
      } else {
        const tail = (stderr || stdout).slice(-3000);
        reject(new Error(`Process exited with code ${code}.\n${tail}`));
      }
    });

    proc.on('error', (err) => {
      if (timer) clearTimeout(timer);
      reject(err);
    });
  });
}

// ── Main executor ─────────────────────────────────────────────────────────────

/**
 * Execute a layout job.
 *
 * @param {object} job  Job row from Supabase (id, project_id, info, ...)
 * @returns {Promise<object>} Final result info object with imageUrl
 */
export async function executeLayoutJob(job) {
  const startTime = Date.now();
  /** Wall-clock seconds elapsed since job start (1 decimal place) */
  const elapsed = () => parseFloat(((Date.now() - startTime) / 1000).toFixed(1));

  // Validate job structure
  if (!job.project_id) throw new Error('Job project_id is missing');
  if (!UUID_PATTERN.test(job.id)) {
    throw new Error(`Invalid job ID format: "${job.id}"`);
  }

  const layoutDir = path.join(tmpdir(), `layout-${job.id}`);

  try {
    await fs.mkdir(layoutDir, { recursive: true });

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
      const designVPath = path.join(layoutDir, 'design.v');
      await fs.writeFile(designVPath, fileBuffer);
      console.log(`  ✓ Downloaded design.v (${fileBuffer.length} bytes)`);
    }

    // ── Step 4: Write the layout shell script ────────────────────────────
    const layoutScriptPath = path.join(layoutDir, 'layout.sh');

    // Paths inside the Docker container
    const ORFS_FLOW  = '/opt/orfs-flow';
    const DESIGN_CONFIG = `${ORFS_FLOW}/designs/asap7/CgraTemplateRTL/config.mk`;
    const RESULTS_DIR   = `${ORFS_FLOW}/results/asap7/CgraTemplateRTL`;

    // When using the bundled default_design.v it is already plain Verilog
    // (sv2v was run during image preparation), so we just copy it.
    const sv2vLines = useDefaultDesign
      ? [
          '# Bundled default_design.v is already plain Verilog — skip sv2v',
          'cp /cgra/default_design.v /layout/design_sv2v.v',
        ]
      : [
          '# Stage 1: sv2v — convert SystemVerilog to plain Verilog',
          'sv2v /layout/design.v > /layout/design_sv2v.v',
        ];

    const layoutScript = [
      '#!/bin/bash',
      'set -eo pipefail',
      '',
      'echo "PROGRESS:10:starting"',
      '',
      ...sv2vLines,
      'echo "PROGRESS:20:sv2v"',
      '',
      '# Stage 2: Run the full ORFS PnR flow (synth → place → route → finish).',
      '# Tool paths are resolved via symlinks baked into the image at the ORFS defaults.',
      `MAKE_LOG=/layout/make.log`,
      `cd ${ORFS_FLOW}`,
      'set +e',
      `make DESIGN_CONFIG=${DESIGN_CONFIG} VERILOG_FILES=/layout/design_sv2v.v 2>&1 | tee "$MAKE_LOG"`,
      'MAKE_EXIT=${PIPESTATUS[0]}',
      'set -e',
      'if [ "$MAKE_EXIT" -ne 0 ]; then',
      '  echo "--- last 60 lines of ORFS make output ---" >&2',
      '  tail -60 "$MAKE_LOG" >&2',
      '  echo "--- end of make output ---" >&2',
      '  # Dump the detailed yosys/openroad log if available',
      `  for logf in $(find ${ORFS_FLOW}/logs -name '*.log' 2>/dev/null | sort); do`,
      '    echo "--- $logf (last 80 lines) ---" >&2',
      '    tail -80 "$logf" >&2',
      '  done',
      '  exit "$MAKE_EXIT"',
      'fi',
      'echo "PROGRESS:80:routing-complete"',
      '',
      '# Stage 3: Export layout image via OpenROAD save_image',
      '# The final ODB is under results/asap7/CgraTemplateRTL/6_*.odb',
      `ODB=$(find ${RESULTS_DIR} -name '6_*.odb' 2>/dev/null | sort | tail -1)`,
      'if [ -n "$ODB" ]; then',
      '  # Write the TCL script using printf to avoid heredoc quoting issues',
      '  printf \'read_db %s\\nsave_image -resolution 2048 /layout/layout.png\\n\' "$ODB" > /layout/export_image.tcl',
      '  openroad -exit /layout/export_image.tcl 2>&1 || echo "WARNING: openroad image export failed"',
      'fi',
      '',
      '# Fallback: use any PNG produced automatically by the flow',
      'if [ ! -f /layout/layout.png ]; then',
      `  png_found=$(find ${RESULTS_DIR} /opt/orfs-flow/reports -name '*.png' 2>/dev/null | sort | tail -1)`,
      '  [ -n "$png_found" ] && cp "$png_found" /layout/layout.png && echo "Copied fallback PNG: $png_found"',
      'fi',
      '',
      'echo "PROGRESS:95:image-export"',
    ].join('\n');

    await fs.writeFile(layoutScriptPath, layoutScript, { mode: 0o755 });
    console.log(`  ✓ Wrote layout.sh`);

    // ── Step 5: Run Docker with streaming progress ────────────────────────
    const absoluteLayoutDir = path.resolve(layoutDir);
    const dockerArgs = [
      'run', '--rm',
      '-v', `${absoluteLayoutDir}:/layout`,
      DOCKER_IMAGE,
      'bash', '/layout/layout.sh',
    ];

    console.log(
      `  Running Docker layout (image: ${DOCKER_IMAGE}, timeout: ${LAYOUT_DOCKER_TIMEOUT_MS > 0 ? LAYOUT_DOCKER_TIMEOUT_MS / 1000 + 's' : 'none'})...`
    );

    await runWithProgress(
      'docker',
      dockerArgs,
      LAYOUT_DOCKER_TIMEOUT_MS,
      async (progress, stage) => {
        console.log(`  ↑ Progress ${progress}% [${stage}] (${elapsed()}s elapsed)`);
        await updateProgress(job.id, progress, stage, elapsed());
      }
    );

    console.log(`  ✓ Docker layout completed (${elapsed()}s total)`);

    // ── Step 6: Locate the layout image ──────────────────────────────────
    const layoutPngPath = path.join(layoutDir, 'layout.png');
    const pngExists = await fs.access(layoutPngPath).then(() => true).catch(() => false);

    if (!pngExists) {
      throw new Error(
        'Layout PnR completed but no layout.png was found. ' +
        'The OpenROAD image export may require OSMesa support in the Docker image, ' +
        'or the mflowgen flow did not produce a PNG report. ' +
        'Check the Docker logs for details.'
      );
    }

    console.log(`  ✓ Found layout.png`);

    // ── Step 7: Upload layout.png to Supabase Storage ─────────────────────
    const storagePath = `${job.id}/layout.png`;
    const imageBuffer = await fs.readFile(layoutPngPath);

    const { error: uploadError } = await supabase.storage
      .from(GRAPH_BUCKET)
      .upload(storagePath, imageBuffer, {
        contentType: 'image/png',
        upsert: true,
      });

    if (uploadError) {
      throw new Error(`Failed to upload layout.png: ${uploadError.message}`);
    }

    console.log(`  ✓ Uploaded layout.png to ${GRAPH_BUCKET}/${storagePath}`);

    // ── Step 8: Create signed URL (1 hour TTL) and write final result ─────
    const { data: signedUrlData, error: signedUrlError } = await supabase.storage
      .from(GRAPH_BUCKET)
      .createSignedUrl(storagePath, 3600);

    if (signedUrlError) {
      throw new Error(`Failed to create signed URL: ${signedUrlError.message}`);
    }

    const imageUrl = signedUrlData.signedUrl;
    const timeCost = elapsed();
    const result = {
      progress: 100,
      stage: 'complete',
      timeCost,
      imageUrl,
    };

    await updateProgress(job.id, 100, 'complete', timeCost);
    console.log(`  ✓ Layout finished: timeCost=${timeCost}s, imageUrl set`);

    return result;

  } finally {
    // Always remove the temp directory, even on error
    try {
      await fs.rm(layoutDir, { recursive: true, force: true });
    } catch (cleanupErr) {
      console.warn(`  ⚠️  Failed to clean up ${layoutDir}: ${cleanupErr.message}`);
    }
  }
}
