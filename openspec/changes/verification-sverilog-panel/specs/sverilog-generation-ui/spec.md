## ADDED Requirements

### Requirement: Generate button triggers SVerilog job
The SVerilog panel SHALL display a "Generate" button that submits a `verilog-generation` job for the current architecture when clicked. The button SHALL be disabled when no architecture is loaded or when a generation job is already in progress.

#### Scenario: Generate button visible when architecture loaded
- **WHEN** the user opens the Verification tab with a CGRA architecture loaded
- **THEN** the SVerilog panel SHALL display an enabled "Generate" button

#### Scenario: Generate button disabled without architecture
- **WHEN** the user opens the Verification tab with no architecture loaded
- **THEN** the SVerilog panel SHALL display a disabled "Generate" button with tooltip text "No architecture loaded"

#### Scenario: Generate button disabled while job in progress
- **WHEN** a `verilog-generation` job has been submitted and has not yet completed or failed
- **THEN** the "Generate" button SHALL be disabled for the duration of the job

#### Scenario: User clicks Generate
- **WHEN** the user clicks the "Generate" button with a valid architecture loaded
- **THEN** a `verilog-generation` job SHALL be submitted to the job queue with the current architecture data as payload

### Requirement: Loading state shown during generation
The SVerilog panel SHALL display a loading indicator while a `verilog-generation` job is in the `pending` or `running` state.

#### Scenario: Spinner shown while pending
- **WHEN** a `verilog-generation` job has been submitted and not yet picked up by the runner
- **THEN** the panel SHALL show a loading spinner or progress indicator alongside or within the Generate button

#### Scenario: Spinner shown while running
- **WHEN** a `verilog-generation` job is being processed by the runner
- **THEN** the panel SHALL continue to show the loading indicator

### Requirement: SVerilog output displayed on success
When a `verilog-generation` job completes successfully, the SVerilog panel SHALL replace any previous content with the generated SVerilog text in a scrollable code viewer.

#### Scenario: Generated SVerilog replaces placeholder on success
- **WHEN** a `verilog-generation` job transitions to `completed` status
- **THEN** the panel SHALL display the generated SVerilog text in a scrollable monospace code block
- **AND** the loading indicator SHALL be hidden
- **AND** the Generate button SHALL be re-enabled

#### Scenario: Scrollbar appears for long SVerilog output
- **WHEN** the generated SVerilog text exceeds the visible height of the code viewer
- **THEN** a vertical scrollbar SHALL appear within the code viewer without expanding the panel layout

### Requirement: Error message displayed on failure
When a `verilog-generation` job fails, the SVerilog panel SHALL display a human-readable error message in place of the code viewer.

#### Scenario: Error shown on job failure
- **WHEN** a `verilog-generation` job transitions to `failed` status
- **THEN** the panel SHALL display an error message describing the failure
- **AND** the loading indicator SHALL be hidden
- **AND** the Generate button SHALL be re-enabled to allow retry

#### Scenario: User can retry after failure
- **WHEN** the panel is in the error state
- **THEN** the Generate button SHALL be enabled
- **AND** clicking it SHALL submit a new `verilog-generation` job, clearing the error state

### Requirement: Architecture data passed to SVerilog panel
The `VerificationTab` component SHALL receive the current `architecture` object as a prop from `Workspace.jsx` and forward it to `SverilogPanel`.

#### Scenario: Architecture prop flows to SverilogPanel
- **WHEN** `Workspace.jsx` renders the Verification tab
- **THEN** the current `architecture` state SHALL be passed as a prop to `VerificationTab`
- **AND** `VerificationTab` SHALL forward that prop to `SverilogPanel`

### Requirement: Job submission and subscription encapsulated in service
All Supabase interactions for verilog generation (job insertion and realtime status subscription) SHALL be encapsulated in `src/workspace/services/verificationService.js`. The component SHALL not call Supabase directly.

#### Scenario: Service submits job
- **WHEN** `submitVerilogGenerationJob(architecture)` is called
- **THEN** a row with `type: 'verilog-generation'` and the architecture payload SHALL be inserted into the jobs table
- **AND** the function SHALL return the new job's `id`

#### Scenario: Service subscribes to job updates
- **WHEN** `subscribeToJob(jobId, onUpdate)` is called
- **THEN** a Supabase realtime channel subscription SHALL be opened for that job row
- **AND** `onUpdate` SHALL be called with `{ status, result, error }` whenever the job row changes
- **AND** the function SHALL return an `unsubscribe` callback

#### Scenario: Subscription cleaned up on unmount
- **WHEN** the `SverilogPanel` component unmounts while a job is in progress
- **THEN** the realtime subscription SHALL be unsubscribed to prevent memory leaks or stale state updates
