## 1. Runner �?Layout Job Executor

- [x] 1.1 Create `runner/layoutExecutor.js` with the same module structure as `synthesisExecutor.js`: dotenv config, Supabase client init, `DOCKER_IMAGE`, `GRAPH_BUCKET`, `LAYOUT_DOCKER_TIMEOUT_MS` (default 3 600 000 ms) constants, UUID validation pattern, `patchJobInfo`, `updateProgress`, and `runWithProgress` helpers
- [x] 1.2 Implement `executeLayoutJob(job)`: validate `job.project_id` and `job.id`; create temp directory `layout-<jobId>` in `os.tmpdir()`
- [x] 1.3 Query Supabase for the latest `verilog-generation` job with `status = 'success'` for `job.project_id` (same query as synthesis); set `useDefaultDesign = !verilogJob`
- [x] 1.4 When `useDefaultDesign = false`: download the verilog file from Supabase Storage into `<tempDir>/design.v` (same download logic as synthesis)
- [x] 1.5 Compose `sv2vLines`: if `useDefaultDesign`, copy `/cgra/default_design.v` to `/layout/design_sv2v.v`; otherwise run `sv2v /layout/design.v > /layout/design_sv2v.v`
- [x] 1.6 Write `layout.sh` to the temp directory. Script contents:
  - `echo "PROGRESS:10:starting"`
  - sv2v lines (from 1.5)
  - `echo "PROGRESS:20:sv2v"`
  - mflowgen setup: `mkdir -p <MFLOWGEN_BUILD>`, `cd <MFLOWGEN_BUILD>`, `rm -rf ./*`, `mflowgen run --design <MFLOWGEN_DESIGN>` targeting nangate45
  - `make 2` �?`echo "PROGRESS:50:pnr-init"`
  - `make 3` �?`echo "PROGRESS:80:routing"`
  - Export layout image via OpenROAD TCL or find PNG in results directory �?`cp <layoutPng> /layout/layout.png`
  - `echo "PROGRESS:95:image-export"`
- [x] 1.7 Run Docker with `runWithProgress`: `docker run --rm -v <absTemp>:/layout <DOCKER_IMAGE> bash /layout/layout.sh`; call `updateProgress` on each `PROGRESS:` marker
- [x] 1.8 After Docker exits, use `find` to locate `layout.png` in the temp directory; throw a descriptive error if not found
- [x] 1.9 Upload `layout.png` to Supabase Storage at `job-artifacts/<jobId>/layout.png` using the service-role key
- [x] 1.10 Call `supabase.storage.from(bucket).createSignedUrl(path, 3600)` and write `{ progress: 100, stage: 'complete', timeCost, imageUrl }` to `job.info`; always clean up the temp directory in `finally`
- [x] 1.11 Export `executeLayoutJob` as a named export

## 2. Runner �?Register Layout Job Type

- [x] 2.1 In `runner/jobProcessor.js`, import `executeLayoutJob` from `./layoutExecutor.js`
- [x] 2.2 Add `case 'layout': return await executeLayoutJob(job);` to the `executeJob` switch statement

## 3. Frontend �?Verification Service

- [x] 3.1 Add `submitLayoutJob(projectId)` to `src/workspace/services/verificationService.js` following the same pattern as `submitSynthesisJob`: insert a `jobs` row with `type = 'layout'`, `status = 'queued'`, `project_id`, `user_id`, `info: {}`; return the new job's `id`

## 4. Frontend �?LayoutTab Wiring

- [x] 4.1 Add state variables to `LayoutTab.jsx`: `jobId`, `jobStatus`, `jobProgress`, `jobStage`, `imageUrl`, `jobError`; remove the existing `loading` / `showResult` mock state
- [x] 4.2 Replace `handleRun` mock with an async function that calls `submitLayoutJob(projectId)`, stores the returned job ID in state, and sets initial `jobStatus = 'queued'`
- [x] 4.3 Add a `useEffect` that calls `subscribeToJob(jobId, onUpdate)` when `jobId` changes; in `onUpdate` update `jobStatus`, `jobProgress`, `jobStage`, `imageUrl`, and `jobError` from the job row; return the unsubscribe function for cleanup
- [x] 4.4 Disable the "RTL �?Layout" button when `jobStatus` is `'queued'` or `'running'`
- [x] 4.5 Render a `LinearProgress` bar (value={jobProgress}) below the controls when `jobStatus` is `'queued'` or `'running'`; include a `Typography` label showing `jobStage`
- [x] 4.6 Render an `<img src={imageUrl}>` in the "Layout Result" section when `jobStatus === 'success'` and `imageUrl` is set; remove the static `layoutImage` import
- [x] 4.7 Render an MUI `Alert` with `severity="error"` when `jobStatus === 'failed'`; display `jobError` or a generic fallback message
- [x] 4.8 Remove the now-unused `import layoutImage from '../../CGRA-Flow-sample/layout/final_all.webp'` line

## 5. Smoke Test

- [ ] 5.1 Confirm `openroad -version` runs successfully inside the `cgra/cgra-flow:web-ui` container: `docker run --rm cgra/cgra-flow:web-ui openroad -version`
- [ ] 5.2 Manually queue a `layout` job via Supabase Studio for an existing project (no prior verilog-generation job) and verify the runner picks it up, uses the default design, and logs `PROGRESS:` markers
- [ ] 5.3 Verify that after the job completes, `job.info.imageUrl` is populated and the LayoutTab displays the image

