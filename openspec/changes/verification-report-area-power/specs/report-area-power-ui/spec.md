## ADDED Requirements

### Requirement: Synthesize button is disabled until SVerilog generation is done
The ReportPanel SHALL accept a `sverilogReady` boolean prop. The "Synthesize" button SHALL be disabled and show a tooltip `"Generate SVerilog first"` when `sverilogReady` is `false`. When `sverilogReady` is `true` and no synthesis job is in flight, the button SHALL be enabled.

#### Scenario: SVerilog not yet generated
- **WHEN** the ReportPanel renders with `sverilogReady = false`
- **THEN** the "Synthesize" button is disabled and the tooltip text is `"Generate SVerilog first"`

#### Scenario: SVerilog generated and no job in flight
- **WHEN** the ReportPanel renders with `sverilogReady = true` and no synthesis job is running
- **THEN** the "Synthesize" button is enabled

#### Scenario: Job already in flight
- **WHEN** a synthesis job is currently running
- **THEN** the "Synthesize" button is disabled regardless of `sverilogReady`

---

### Requirement: Synthesize button submits a synthesis job and subscribes to updates
When the user clicks "Synthesize" the panel SHALL call `submitSynthesisJob(projectId)` from `verificationService.js` and subscribe to the returned job ID via the existing `subscribeToJob` helper. The subscription SHALL remain active until the job reaches `status = 'success'` or `status = 'failed'`.

#### Scenario: Button click triggers job submission
- **WHEN** the user clicks "Synthesize"
- **THEN** a new `synthesis` job row appears in Supabase with `status = 'queued'`

#### Scenario: Subscription cleaned up on unmount
- **WHEN** the component unmounts while a job is running
- **THEN** the Supabase realtime subscription is unsubscribed

---

### Requirement: Progress bar reflects job progress
The panel SHALL display a MUI `LinearProgress` component (determinate mode) whose `value` is derived from `job.info.progress` (0–100). While the job is in state `queued`, progress SHALL show 0. Between progress updates the bar SHALL remain at the last received value.

#### Scenario: Job queued
- **WHEN** the synthesis job is in `status = 'queued'`
- **THEN** the progress bar shows 0 %

#### Scenario: Intermediate progress update received
- **WHEN** the job's `info.progress` changes to 50 via realtime update
- **THEN** the progress bar renders at 50 %

#### Scenario: Job succeeds
- **WHEN** the job reaches `status = 'success'`
- **THEN** the progress bar shows 100 %

---

### Requirement: Elapsed time counter increments while job is running
The panel SHALL display an elapsed-time counter (in seconds, one decimal place) that starts at 0 when the job transitions to `status = 'running'` and increments every second via `setInterval`. The counter SHALL stop when the job reaches a terminal state (`success` or `failed`).

#### Scenario: Counter starts on running state
- **WHEN** the job status changes to `running`
- **THEN** the time counter begins incrementing from 0 every second

#### Scenario: Counter stops on success
- **WHEN** the job status changes to `success`
- **THEN** the time counter stops incrementing and displays the final elapsed time

---

### Requirement: Result metrics displayed in a structured table
On job success the panel SHALL display a table with five rows:

| Row label | Source | Unit |
|---|---|---|
| Time cost | `job.info.timeCost` | s |
| Tiles area | `job.info.tileArea` | mm² |
| Tiles power | always `–` | — |
| SPM area | `job.info.spmArea` (or `–` if null) | mm² |
| SPM power | `job.info.spmPower` (or `–` if null) | mW |

Each row SHALL include a unit suffix next to the value. Null values SHALL render as `–`.

#### Scenario: Tile area value displayed
- **WHEN** the job result contains `tileArea = 1.23`
- **THEN** the "Tiles area" row shows `1.23 mm²`

#### Scenario: Tile power always dashes
- **WHEN** the job result is displayed
- **THEN** the "Tiles power" row always shows `–` with a tooltip `"Yosys does not provide dynamic power estimation"`

#### Scenario: SPM fields null
- **WHEN** `job.info.spmArea` and `job.info.spmPower` are both `null`
- **THEN** both SPM rows show `–`

---

### Requirement: Error state displayed on job failure
When the job reaches `status = 'failed'` the panel SHALL display a MUI `Alert` with severity `error` showing the `error_message` from the job row. The progress bar SHALL remain at its last value and the time counter SHALL stop.

#### Scenario: Synthesis job fails
- **WHEN** the job reaches `status = 'failed'` with `error_message = "SVerilog generation must be completed before synthesis."`
- **THEN** an error alert is visible containing that exact message

---

### Requirement: VerificationTab passes sverilogReady to ReportPanel
`VerificationTab.jsx` SHALL track whether a successful SVerilog generation result is available for the current project and pass it as the `sverilogReady` prop to `ReportPanel`. A result is considered available when the SverilogPanel has received a successful job completion during the current session or a cached verilog file URL exists in the job result for the project.

#### Scenario: SVerilog panel completes successfully
- **WHEN** the SverilogPanel receives a successful job result
- **THEN** `sverilogReady` becomes `true` and the Synthesize button is enabled
