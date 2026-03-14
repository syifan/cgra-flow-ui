## Why

The Layout tab currently shows a static mock image for place-and-route results. Now that the Docker image (`cgra/cgra-flow:ui-openroad`) includes OpenROAD, we can run a real PnR flow end-to-end: convert the generated SVerilog to plain Verilog with sv2v, run OpenROAD place-and-route, and display the actual layout image in the web UI — replacing the hardcoded `final_all.webp`.

## What Changes

- Add a new `layout` job type to the runner's `jobProcessor.js` and a new `layoutExecutor.js` executor.
- The executor:
  1. Looks for the latest successful `verilog-generation` job for the project (same pattern as synthesis); if none exists, falls back to the bundled `/cgra/default_design.v` inside the Docker image (already plain Verilog — sv2v not needed for the default).
  2. If using a generated SVerilog file, runs `sv2v` to convert it to plain Verilog (same as synthesis).
  3. Runs OpenROAD place-and-route inside Docker using the `cgra/cgra-flow:ui-openroad` image, with mflowgen orchestrating the flow through to the `final_all` step.
  4. Captures the resulting layout image from the OpenROAD output directory.
  5. Uploads the image to Supabase Storage and writes its URL to `job.info.imageUrl`.
- Add `submitLayoutJob(projectId)` to `verificationService.js`.
- Update `LayoutTab.jsx`: replace the mock `handleRun` with a real job submission; subscribe to the job via Supabase realtime; show a progress bar during the run; display the returned image URL when complete.

## Capabilities

### New Capabilities

- `layout-pnr-job`: Runner executor that runs sv2v + OpenROAD PnR inside Docker and uploads the result image to Supabase Storage.
- `layout-pnr-panel`: LayoutTab UI that submits the `layout` job, shows live progress, and renders the returned image.

### Modified Capabilities

_(none — the SVerilog-generation and synthesis specs are unchanged; this change only adds a new consumer of the same verilog-generation output)_

## Impact

- **Runner**: new file `runner/layoutExecutor.js`; `runner/jobProcessor.js` gains a `layout` case.
- **Frontend**: `src/workspace/LayoutTab.jsx` — replace mock with real job flow; `src/workspace/services/verificationService.js` — add `submitLayoutJob`.
- **Docker image**: must be `cgra/cgra-flow:ui-openroad` (already built); `runner/.env` `DOCKER_IMAGE` is already set.
- **Supabase Storage**: reuses the existing `job-artifacts` bucket for the layout image.
- **No database schema changes** — reuses the `jobs` table and `job.info` JSONB field.
- **No breaking changes** to existing job types, UI panels, or APIs.
