## ADDED Requirements

### Requirement: Layout tab submits a real layout job on button click
The `LayoutTab` component SHALL call `submitLayoutJob(projectId)` when the user clicks the "RTL → Layout" button, replacing the current mock delay.

#### Scenario: Button submits a layout job
- **WHEN** the user clicks "RTL → Layout"
- **THEN** `submitLayoutJob(projectId)` is called, a new `layout` job row is inserted in Supabase, and the returned job ID is stored in component state

#### Scenario: Button is disabled while a job is in flight
- **WHEN** a layout job is running (status is `queued` or `running`)
- **THEN** the "RTL → Layout" button is disabled

---

### Requirement: Layout tab shows a live progress bar during job execution
The `LayoutTab` component SHALL subscribe to the job's Supabase realtime channel and update a `LinearProgress` bar from `job.info.progress` (0–100).

#### Scenario: Progress bar appears on job start
- **WHEN** the layout job status changes to `running`
- **THEN** a `LinearProgress` bar is shown below the controls

#### Scenario: Progress bar advances as job progresses
- **WHEN** `job.info.progress` updates (e.g., 20, 50, 80)
- **THEN** the `LinearProgress` value updates to match

#### Scenario: Progress bar disappears on completion
- **WHEN** the job status becomes `success` or `failed`
- **THEN** the `LinearProgress` bar is removed

---

### Requirement: Layout tab displays the result image returned by the job
The `LayoutTab` component SHALL render the image at `job.info.imageUrl` when the job succeeds, replacing the static `final_all.webp` import.

#### Scenario: Result image is displayed on success
- **WHEN** the job status becomes `success` and `job.info.imageUrl` is set
- **THEN** an `<img>` element with `src={imageUrl}` is shown in the "Layout Result" section

#### Scenario: Static fallback image is removed
- **WHEN** no layout job has been submitted yet
- **THEN** no image is shown (the hardcoded `layoutImage` import is not rendered)

---

### Requirement: Layout tab shows an error message on job failure
The `LayoutTab` component SHALL display an error alert when the job status is `failed`.

#### Scenario: Error alert shown on failure
- **WHEN** the job status becomes `failed`
- **THEN** an MUI `Alert` with severity `error` is shown containing a human-readable error message

---

### Requirement: verificationService exposes submitLayoutJob
`src/workspace/services/verificationService.js` SHALL export a `submitLayoutJob(projectId)` function that inserts a `jobs` row with `type = 'layout'` and returns the new job's ID.

#### Scenario: Layout job is inserted
- **WHEN** `submitLayoutJob(projectId)` is called
- **THEN** a row with `{ type: 'layout', status: 'queued', project_id: projectId }` is inserted into the `jobs` table and the new job `id` is returned
