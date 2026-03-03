## Why

The Verification → Tests panel currently displays a static mock list of test cases with no way to actually execute them, providing no real feedback on the health of the CGRA design. Users need a one-click way to run the real pytest-based VectorCGRA test suite (defined in `run_tests/cases.txt`) inside the Docker environment and see live progress as each test completes.

## What Changes

- Add a **"Run Tests"** button to the `TestsPanel` in the Verification tab
- Parse `run_tests/cases.txt` to derive the list of test cases (file name + individual case/function name where specified)
- Submit a `run_tests` job to the existing job queue (Supabase + runner pattern, matching how SVerilog generation works)
- The runner executes each pytest command sequentially inside the `cgra/cgra-flow:ui` Docker image, reporting per-test results as they complete
- The UI subscribes to job progress updates and renders:
  - A progress bar showing `completed / total` tests with a percentage
  - Per-test rows showing: file path, case name, and status (pending → running → pass/fail)
  - Overall pass/fail summary on completion

## Capabilities

### New Capabilities

- `run-tests`: Execute the VectorCGRA pytest test suite via a job submitted to the runner queue and streamed back to the UI with per-test progress

### Modified Capabilities

- *(none — no existing spec-level requirements change)*

## Impact

**Frontend**
- `src/workspace/verification/TestsPanel.jsx` — replace static mock list with live run-tests UI
- `src/workspace/services/verificationService.js` — add `submitRunTestsJob` and subscribe logic (reuse `subscribeToJob`)

**Runner / Backend**
- `runner/jobProcessor.js` — add handler for job type `run_tests`
- `runner/mappingExecutor.js` (or new `testExecutor.js`) — parse `cases.txt`, run each pytest command in Docker one at a time, emit incremental `info` updates so the UI can track per-test status in real time

**Database**
- The existing `jobs` table is sufficient; incremental updates write to `jobs.info` (same pattern used by SVerilog generation)

**No new dependencies** expected; MUI `LinearProgress` already available.
