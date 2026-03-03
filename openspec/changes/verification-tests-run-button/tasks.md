## 1. Runner — cases.txt Parser

- [x] 1.1 Create `runner/testExecutor.js` — add `parseCasesFile(filePath)` that reads `cases.txt`, strips blank lines, pairs `# comment` labels with the following `pytest` command, and returns an ordered array of `{ label, cmd, file, caseName }` objects (extract `file` and `caseName` by splitting on `::`)
- [x] 1.2 Add a `CASES_FILE_PATH` env var default in `testExecutor.js` pointing to `../run_tests/cases.txt` relative to the runner directory, document it in `runner/README.md`
- [x] 1.3 Write a unit test (Node `--test`) in `runner/testExecutor.test.js` that parses the real `run_tests/cases.txt` and asserts expected `file`/`caseName` values for a sample of entries

## 2. Runner — Docker Execution

- [x] 2.1 In `runner/testExecutor.js`, add `runTestCase(supabase, jobId, caseEntry)` that runs `docker run --rm -w /cgra/VectorCGRA <DOCKER_IMAGE> bash -c "mkdir -p build && cd build && <cmd>"`, captures combined stdout/stderr (capped at 8 KB), measures `durationMs`, and returns `{ status: 'pass'|'fail', stdout, durationMs }`
- [x] 2.2 Apply `TEST_DOCKER_TIMEOUT_MS` (default 600 000 ms) per test; on timeout kill the container and return `{ status: 'fail', stdout: 'Timed out after Xs' }`
- [x] 2.3 Add `executeRunTestsJob(job, supabase)` in `runner/testExecutor.js` that: (a) calls `parseCasesFile`, (b) writes initial `jobs.info` with all cases at `status: 'pending'` and `total`/`completed: 0`, (c) loops through cases sequentially — marking each `running`, running Docker, patching `jobs.info` after completion, incrementing `completed` — then returns final info

## 3. Runner — Job Dispatch

- [x] 3.1 Import `executeRunTestsJob` from `./testExecutor.js` in `runner/jobProcessor.js`
- [x] 3.2 Add `case 'run_tests': return await executeRunTestsJob(job, supabase)` to the `executeJob` switch in `jobProcessor.js`

## 4. Frontend — Service Layer

- [x] 4.1 Add `submitRunTestsJob(projectId)` to `src/workspace/services/verificationService.js` — inserts a row with `type: 'run_tests'`, `status: 'queued'`, `info: {}`, returns the new job ID (mirror the existing `submitVerilogGenerationJob` pattern)
- [x] 4.2 Verify `subscribeToJob` already handles `info` updates correctly for partial progress patches (it reads `payload.new.info` — no change needed, just confirm)

## 5. Frontend — TestsPanel Rewrite

- [x] 5.1 Replace the static `MOCK_TESTS` list and stateless render in `TestsPanel.jsx` with a state machine: `idle | pending | running | done | error` — add `useState` for `status`, `cases`, `total`, `completed`, `errorMessage`; add `useRef` for the unsubscribe function
- [x] 5.2 Add the "Run Tests" `Button` (MUI, `startIcon=<PlayArrowIcon>`) — call `submitRunTestsJob` on click, transition to `pending`, subscribe to the job, update state on each `info` update from Realtime; disable the button while `status` is `pending` or `running`
- [x] 5.3 Render an MUI `LinearProgress` bar (with `variant="determinate"`) and a label `"<completed> / <total> (<pct>%)"` below the button; show only when `status` is `running` or `done`
- [x] 5.4 Render the per-test `List` — each row shows: status icon (spinner for `running`, `CheckCircleIcon` for `pass`, `ErrorIcon` for `fail`, `HourglassEmptyIcon` for `pending`), test file path, case name (if non-null, in a secondary typography), human-readable label, and duration in seconds when available
- [x] 5.5 Render an overall summary line when `status` is `done`: `"<P> passed, <F> failed"` — use `success.main` color when F=0, otherwise `error.main`
- [x] 5.6 Render an MUI `Alert severity="error"` when `status` is `error`, showing `errorMessage`; include a cleanup `useEffect` to call `unsubscribeRef.current?.()` on unmount

## 6. Validation & Cleanup

- [x] 6.1 Run the dev server and manually verify the Tests panel renders the "Run Tests" button in idle state with no errors
- [x] 6.2 Start the runner in fake mode and confirm a `run_tests` job is claimed and dispatched without crashing (can temporarily stub `executeRunTestsJob` to return mock progress)
- [x] 6.3 Do an end-to-end smoke test with the real Docker runner: click "Run Tests", confirm the progress bar advances as each test completes, and the summary line appears at the end
- [x] 6.4 Confirm failed tests show the error icon and do not block subsequent tests from running
