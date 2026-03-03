## 1. Docker Image — Install Synthesis Tools

- [x] 1.1 Add oss-cad-suite installation to `cgra-flow-docker/Dockerfile`: download the `2024-09-20` static tarball from GitHub, extract to `/cgra/oss-cad-suite`, and add `/cgra/oss-cad-suite/bin` to `PATH`
- [x] 1.2 Add Haskell `stack` installation to `Dockerfile` (via `curl -sSL https://get.haskellstack.org/ | sh`) as a prerequisite for sv2v
- [x] 1.3 Clone `zachjs/sv2v`, checkout commit `9bab0448e32504cef764692018914f0f2f314911`, run `make`, and add the resulting `bin/` to `PATH` in `Dockerfile`
- [x] 1.4 Clone `tancheng/mflowgen` and install it with `pip install -e .` inside the venv in `Dockerfile`
- [x] 1.5 Add `RUN yosys --version && sv2v --version && mflowgen --help` smoke-check layer at the end of `Dockerfile` to fail the build early if any tool is missing
- [ ] 1.6 Rebuild the Docker image locally and confirm all three tools are accessible at runtime

## 2. Runner — Synthesis Job Executor

- [x] 2.1 Create `runner/synthesisExecutor.js` with exported function `executeSynthesisJob(job, supabase)`
- [x] 2.2 In `executeSynthesisJob`: query Supabase for the latest `verilog-generation` job with `status = 'success'` for `job.project_id`; throw `"SVerilog generation must be completed before synthesis."` if none found
- [x] 2.3 Download the input verilog file (`CgraTemplateRTL__*pickled*.v` / `design.v`) from Supabase Storage into a temp directory (use `os.tmpdir()` or a fixed `/tmp/synthesis-<jobId>/` path)
- [x] 2.4 Write a helper `updateProgress(supabase, jobId, progress, stage, timeCost)` that patches `jobs.info` with `{ progress, stage, timeCost }` via a Supabase UPDATE
- [x] 2.5 Run `sv2v design.v > design_sv2v.v` as a child process; call `updateProgress(..., 20, "sv2v", elapsed)` on success; throw on non-zero exit
- [x] 2.6 Copy `design_sv2v.v` to the mflowgen cgra design input path (`/cgra/VectorCGRA/.../rtl/outputs/design.v`); run `mflowgen run --design <cgra-design-dir>` and `make 2`; call `updateProgress(..., 50, "synthesis-init", elapsed)`
- [x] 2.7 Run `make 3` in the mflowgen build directory; call `updateProgress(..., 80, "synthesis-run", elapsed)`
- [x] 2.8 Parse `3-open-yosys-synthesis/stats.txt`: find the `"Chip area for module "` line and compute `tileArea = round(value / 1_000_000, 2)`; default to `null` if line not found
- [x] 2.9 Call `updateProgress(..., 100, "complete", elapsed)` and return the final result object `{ progress: 100, stage: "complete", timeCost, tileArea, tilePower: null, spmArea: null, spmPower: null }`
- [x] 2.10 Wrap the entire executor in try/catch so any unhandled error is rethrown and caught by `jobProcessor` → `failJob`; clean up the temp directory in a `finally` block

## 3. Runner — Register Synthesis Job Type

- [x] 3.1 Import `executeSynthesisJob` from `./synthesisExecutor.js` at the top of `runner/jobProcessor.js`
- [x] 3.2 Add `case 'synthesis': return await executeSynthesisJob(job, supabase);` to the `executeJob` switch statement (remove the existing no-op `verification` case if present)

## 4. Frontend — Verification Service

- [x] 4.1 Add `submitSynthesisJob(projectId)` to `src/workspace/services/verificationService.js` following the same pattern as `submitVerilogGenerationJob`: insert a `jobs` row with `type = 'synthesis'`, `status = 'queued'`, return the new job's `id`

## 5. Frontend — ReportPanel Rewrite

- [x] 5.1 Replace the static mock content in `src/workspace/verification/ReportPanel.jsx` with a functional component that accepts props `{ projectId, sverilogReady }`
- [x] 5.2 Add state: `status` (`'idle'|'pending'|'running'|'done'|'error'`), `progress` (0–100), `elapsedSeconds`, `result` (object), `errorMessage`; hold a `unsubscribeRef` for cleanup
- [x] 5.3 Implement `handleSynthesize`: guards on `!sverilogReady` and `isInFlight`; calls `submitSynthesisJob(projectId)`; subscribes via `subscribeToJob`; updates `progress` from `result.progress` and `status` from job status on each realtime event
- [x] 5.4 Add a `setInterval(1000)` that starts when `status === 'running'` and increments `elapsedSeconds`; clear the interval when status reaches a terminal state
- [x] 5.5 Render a MUI `Tooltip` wrapping the "Synthesize" `Button`: tooltip text `"Generate SVerilog first"` when `!sverilogReady`, disabled when `!sverilogReady || isInFlight`; show `CircularProgress` icon while in-flight
- [x] 5.6 Render a MUI `LinearProgress` (determinate) with `value={progress}` and a `Typography` showing `{progress}%` next to it
- [x] 5.7 Render an elapsed-time row: label "Time cost", value `{elapsedSeconds.toFixed(1)} s` (shows live while running, final value after done)
- [x] 5.8 Render the five-metric results table (MUI `Table`) with rows: Time cost, Tiles area, Tiles power, SPM area, SPM power — null values render as `–`; Tiles power always `–` with a tooltip `"Yosys does not provide dynamic power estimation"`
- [x] 5.9 Render a MUI `Alert` severity `"error"` with `errorMessage` when `status === 'error'`
- [x] 5.10 Clean up the Supabase subscription and the `setInterval` in the `useEffect` cleanup / `unsubscribeRef`

## 6. Frontend — VerificationTab Wiring

- [x] 6.1 Add `sverilogDone` state (boolean, default `false`) to `VerificationTab.jsx`
- [x] 6.2 Pass an `onSverilogSuccess` callback prop to `SverilogPanel` that sets `sverilogDone = true` when the SVerilog job completes successfully
- [x] 6.3 Pass `sverilogReady={sverilogDone}` and `projectId={projectId}` as props to `<ReportPanel />` inside `VerificationTab`
- [x] 6.4 Update `SverilogPanel.jsx` to accept and call the `onSverilogSuccess` prop when `jobStatus === 'success'` inside the subscription callback

## 7. Smoke Test & Validation

- [ ] 7.1 Manually submit a `synthesis` job via Supabase console (with a project that has a successful `verilog-generation` job) and verify progress updates appear at 20/50/80/100 in the `jobs.info` column
- [ ] 7.2 Verify that submitting a synthesis job for a project with no `verilog-generation` job results in `status = 'failed'` with the expected error message
- [ ] 7.3 Open the UI, generate SVerilog for a project, then click "Synthesize" — confirm the button is disabled before SVerilog generation and enabled after
- [ ] 7.4 Confirm the progress bar advances through visible steps and the elapsed-time counter increments during synthesis
- [ ] 7.5 Confirm the results table shows `tileArea` in mm² after job success, and `–` for tile power, SPM area, SPM power
