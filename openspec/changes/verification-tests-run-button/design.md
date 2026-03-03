## Context

The Verification → Tests panel shows a hardcoded mock list. The real test suite lives in `run_tests/cases.txt`: a flat list of `pytest` commands (with comment lines as labels) that run inside the `cgra/cgra-flow:ui` Docker image, in the `/cgra/VectorCGRA` working directory.

The project already has a full job pipeline:
- **Frontend** submits jobs via `verificationService.js` → Supabase `jobs` table
- **Runner** (`runner/index.js`) polls the queue, executes work in Docker, writes incremental results to `jobs.info`
- **Frontend** subscribes to real-time job updates via `subscribeToJob`

The SVerilog generation flow (`SverilogPanel` + `executeVerilogGenerationJob`) is the direct model to follow.

## Goals / Non-Goals

**Goals:**
- "Run Tests" button in TestsPanel submits a `run_tests` job
- Runner parses `cases.txt`, executes each pytest command in Docker one at a time
- `jobs.info` is updated after each test with per-test status (`pass`/`fail`/`running`)
- UI reflects real-time progress: progress bar + percentage + per-test rows
- Each test row shows: test file path, test case name (if specified), status icon

**Non-Goals:**
- Parallel test execution (sequential is correct; tests share Docker state)
- Running a subset of tests or filtering by name
- Storing test output/logs in Supabase Storage (stdout per-test in `info` is enough)
- Re-running individual failed tests

## Decisions

### 1. Job type: `run_tests` added to existing job model

The existing `jobs` table and `claimNextJob` / `completeJob` / `failJob` functions handle any job type. A new `type: 'run_tests'` is added to the switch in `jobProcessor.js`, dispatching to `executeRunTestsJob`.

> Alternative: a separate table/endpoint. Rejected — unnecessary complexity, queue isolation already works.

### 2. `cases.txt` parsed by the runner at job-execution time (not submission time)

The runner reads `cases.txt` from the host fs (`run_tests/cases.txt` relative to the project root, or configured via env `CASES_FILE_PATH`). This means the case list is always current without re-submitting jobs.

> Alternative: embed cases in `job.info` at submission. Rejected — binds UI to knowing the test list format; runner is the right place for this.

### 3. Incremental progress via `jobs.info` patches

After each pytest command completes, the runner calls a helper to patch `jobs.info` with the updated test case array. The UI's real-time subscription (Supabase Realtime) picks up each row update.

`jobs.info` shape for `run_tests`:
```json
{
  "cases": [
    { "label": "CtrlMemDynamicRTL", "cmd": "pytest ../mem/ctrl/test/CtrlMemDynamicRTL_test.py -xvs", "file": "mem/ctrl/test/CtrlMemDynamicRTL_test.py", "caseName": null, "status": "pass", "stdout": "...", "durationMs": 4200 },
    { "label": "Tile translation.", "cmd": "pytest ../tile/test/TileRTL_test.py -xvs", "file": "tile/test/TileRTL_test.py", "caseName": null, "status": "running" }
  ],
  "total": 14,
  "completed": 1
}
```

`status` values: `"pending"` | `"running"` | `"pass"` | `"fail"`

### 4. Docker execution per test case

Each test runs:
```
docker run --rm -w /cgra/VectorCGRA <image> bash -c "mkdir -p build && cd build && <pytest-cmd>"
```
This matches the `python-package.yml` pattern (`mkdir -p build && cd build && pytest ...`).

The existing `DOCKER_IMAGE` and `DOCKER_TIMEOUT_MS` env vars are reused. A per-test timeout (default 10 min) is used instead of the global timeout.

### 5. TestsPanel replaces mock list with live state machine

State: `idle` | `pending` | `running` | `done` | `error` — same pattern as `SverilogPanel`.

The "Run Tests" button is disabled while a run is in progress. On job completion the result list persists until the next run. A `LinearProgress` bar shows `completed / total` as a percentage. Test rows use the same `StatusIcon` approach (CheckCircle / Error / HourglassEmpty / CircularProgress for `running`).

## Risks / Trade-offs

- **Long test runtime** → Each test can take minutes; the 10-minute per-test timeout is a safety valve. The user sees per-test progress so the UI never appears frozen.
- **Docker not available on runner host** → Same risk as SVerilog generation; same mitigation (documented in README, runner exits with clear error).
- **cases.txt path hardcoded** → Configurable via `CASES_FILE_PATH` env var to reduce brittleness.
- **`jobs.info` patch cost** → Writing after every test adds N Supabase round-trips. Acceptable for ≤20 tests; not a concern at this scale.

## Migration Plan

1. Deploy runner with new `executeRunTestsJob` function and updated `jobProcessor.js`
2. Deploy frontend with updated `TestsPanel` and `verificationService.js`
3. No database schema changes needed

Rollback: revert both runner and frontend; no data migration required.

## Open Questions

- Should `stdout` per test be capped (e.g., last 4 KB) to avoid large `info` blobs? → Default to capping at 8 KB per test.
- Should a failed test abort the run or continue? → Continue (matches CI behavior in `python-package.yml` where only the first `pytest` call uses `-x`).
