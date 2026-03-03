## ADDED Requirements

### Requirement: Run Tests button submits a job
The Verification → Tests panel SHALL display a "Run Tests" button. When clicked, the button SHALL submit a job of type `run_tests` to the existing Supabase `jobs` queue. The button SHALL be disabled while a run is already in progress (`pending` or `running` state).

#### Scenario: Button submits job and enters pending state
- **WHEN** the user clicks "Run Tests" and no run is currently in progress
- **THEN** a `run_tests` job SHALL be inserted into the `jobs` table and the UI SHALL transition to `pending` state, disabling the button

#### Scenario: Button is disabled during an active run
- **WHEN** a run is in `pending` or `running` state
- **THEN** the "Run Tests" button SHALL be rendered as disabled and SHALL NOT accept click events

#### Scenario: Button re-enables after run completes
- **WHEN** the job transitions to `success` or `failed`
- **THEN** the "Run Tests" button SHALL be re-enabled

---

### Requirement: Runner parses cases.txt to derive the test list
The job runner SHALL read `run_tests/cases.txt` (path configurable via `CASES_FILE_PATH` environment variable) at the start of each `run_tests` job execution. It SHALL parse the file and produce an ordered list of test cases. Lines beginning with `#` SHALL be treated as the human-readable label for the following test command. Lines beginning with `pytest` SHALL be the executable command. Empty lines SHALL be ignored.

#### Scenario: Comment line sets the label for the next test
- **WHEN** a `#`-prefixed line is followed by a `pytest` command line
- **THEN** the label for that test case SHALL be the comment text (without the leading `#`)

#### Scenario: Test case with explicit function name is parsed
- **WHEN** a `pytest` command includes `::test_<name>` (e.g., `pytest ../foo/bar_test.py::test_verilog_homo_2x2_4x4 -xvs`)
- **THEN** the parsed case SHALL have `file` set to the path before `::` and `caseName` set to the function name after `::`

#### Scenario: Test case without explicit function name is parsed
- **WHEN** a `pytest` command targets a whole file (e.g., `pytest ../mem/ctrl/test/CtrlMemDynamicRTL_test.py -xvs`)
- **THEN** `file` SHALL be the path and `caseName` SHALL be `null`

#### Scenario: File not found
- **WHEN** `cases.txt` cannot be read
- **THEN** the job SHALL fail immediately with an error message indicating the missing file

---

### Requirement: Runner executes each test sequentially in Docker
The runner SHALL execute each parsed test case as a separate `docker run` command, in order, inside the `cgra/cgra-flow:ui` image. Each command SHALL run as:
```
docker run --rm -w /cgra/VectorCGRA <image> bash -c "mkdir -p build && cd build && <pytest-cmd>"
```
A failed test SHALL NOT abort the remaining test cases. Each test SHALL have a per-test timeout (default 10 minutes, configurable via `TEST_DOCKER_TIMEOUT_MS`). `stdout`/`stderr` output per test SHALL be capped at 8 KB.

#### Scenario: Test passes
- **WHEN** docker exits with code 0
- **THEN** the test case's `status` SHALL be set to `"pass"` and `stdout` SHALL contain the captured output (capped at 8 KB)

#### Scenario: Test fails
- **WHEN** docker exits with a non-zero exit code
- **THEN** the test case's `status` SHALL be set to `"fail"` and `stdout` SHALL contain the captured output (capped at 8 KB)

#### Scenario: Test times out
- **WHEN** the docker command does not complete within `TEST_DOCKER_TIMEOUT_MS`
- **THEN** the container SHALL be killed and the test case's `status` SHALL be set to `"fail"` with a timeout message in `stdout`

#### Scenario: All cases run regardless of individual failure
- **WHEN** one test case has `status: "fail"`
- **THEN** the runner SHALL continue executing the remaining test cases in sequence

---

### Requirement: Runner reports incremental progress via jobs.info
After each test case completes (pass or fail), the runner SHALL update `jobs.info` in the Supabase `jobs` table with the full current test case array, `total` count, and `completed` count. The active test case SHALL have `status: "running"` set before its Docker command starts.

The `jobs.info` structure SHALL conform to:
```json
{
  "cases": [
    {
      "label": "<string>",
      "cmd": "<pytest command string>",
      "file": "<relative path>",
      "caseName": "<string | null>",
      "status": "pending | running | pass | fail",
      "stdout": "<string | null>",
      "durationMs": "<number | null>"
    }
  ],
  "total": "<number>",
  "completed": "<number>"
}
```

#### Scenario: Progress update after each test
- **WHEN** a test case finishes
- **THEN** `jobs.info.completed` SHALL be incremented by 1 and the case's `status` SHALL be updated to `"pass"` or `"fail"` in the same write

#### Scenario: Active test marked as running
- **WHEN** the runner begins executing a test case
- **THEN** that case's `status` in `jobs.info` SHALL be set to `"running"` before the Docker command starts

#### Scenario: All tests complete — job marked success
- **WHEN** all cases have been executed
- **THEN** the job SHALL be marked `success` even if some individual cases have `status: "fail"`

---

### Requirement: UI displays a real-time progress bar
The TestsPanel SHALL display an MUI `LinearProgress` bar while a run is in `running` state. The bar SHALL show the percentage `completed / total * 100`. A numeric percentage label (e.g., `"7 / 14 (50%)"`) SHALL be displayed alongside the bar.

#### Scenario: Progress bar reflects completed count
- **WHEN** `jobs.info.completed` increases from N to N+1
- **THEN** the progress bar value SHALL update to `(N+1) / total * 100` without a page reload

#### Scenario: Progress bar reaches 100% on completion
- **WHEN** `jobs.info.completed === jobs.info.total`
- **THEN** the progress bar SHALL show 100% and the overall summary SHALL appear

---

### Requirement: UI displays per-test rows with detail
The TestsPanel SHALL render one row per test case. Each row SHALL display:
- A status icon: spinning indicator for `running`, checkmark for `pass`, error icon for `fail`, hourglass for `pending`
- The test file path (relative, e.g., `mem/ctrl/test/CtrlMemDynamicRTL_test.py`)
- The case function name if `caseName` is non-null (e.g., `test_verilog_homo_2x2_4x4`)
- The human-readable label from the comment line
- The duration in seconds, once the test has completed

#### Scenario: Pending tests shown with hourglass
- **WHEN** a test case has `status: "pending"`
- **THEN** its row SHALL display a hourglass icon

#### Scenario: Running test shown with spinner
- **WHEN** a test case has `status: "running"`
- **THEN** its row SHALL display a circular progress spinner

#### Scenario: Passed test shown with checkmark
- **WHEN** a test case has `status: "pass"`
- **THEN** its row SHALL display a green checkmark icon

#### Scenario: Failed test shown with error icon
- **WHEN** a test case has `status: "fail"`
- **THEN** its row SHALL display a red error icon

---

### Requirement: UI displays overall summary on completion
When the job reaches `success` or `failed` state, the TestsPanel SHALL display a summary line showing total passed and failed counts (e.g., `"12 passed, 2 failed"`).

#### Scenario: All tests passed summary
- **WHEN** all cases have `status: "pass"`
- **THEN** the summary SHALL read `"<N> passed, 0 failed"` in a success color

#### Scenario: Some tests failed summary
- **WHEN** one or more cases have `status: "fail"`
- **THEN** the summary SHALL read `"<P> passed, <F> failed"` in an error color

---

### Requirement: UI handles job submission and runtime errors
If job submission fails (network error, Supabase error), the TestsPanel SHALL display an error alert and return to `idle` state. If the runner marks the job as `failed` (e.g., `cases.txt` not found), the panel SHALL display the error message from `jobs.error`.

#### Scenario: Submission error
- **WHEN** `submitRunTestsJob` throws an error
- **THEN** the panel SHALL display an error alert with the error message and the button SHALL be re-enabled

#### Scenario: Runner-side job failure
- **WHEN** the job transitions to `failed` state
- **THEN** the panel SHALL display an error alert with the failure reason and return to `error` state
