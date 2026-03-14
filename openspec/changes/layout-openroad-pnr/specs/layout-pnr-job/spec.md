## ADDED Requirements

### Requirement: Layout job type is registered in the runner
The runner `jobProcessor.js` SHALL handle a job with `type = 'layout'` by dispatching to `layoutExecutor.js`.

#### Scenario: Layout job is dispatched
- **WHEN** a job row with `type = 'layout'` is dequeued by the runner
- **THEN** `executeLayoutJob(job)` is called and the job is processed

---

### Requirement: Layout job requires a prior successful SVerilog generation
The executor SHALL look for the latest `verilog-generation` job with `status = 'success'` for the same `project_id`.

#### Scenario: Verilog-generation job found
- **WHEN** at least one successful `verilog-generation` job exists for the project
- **THEN** the executor downloads the generated `.v` file and uses it as the PnR input

#### Scenario: No verilog-generation job found – fallback to default
- **WHEN** no successful `verilog-generation` job exists for the project
- **THEN** the executor uses the pre-built `/cgra/default_design.v` bundled in the Docker image and does NOT run sv2v

---

### Requirement: Executor converts SVerilog to plain Verilog via sv2v
When using a generated design file (not the default), the executor SHALL run `sv2v` on it before passing it to OpenROAD.

#### Scenario: sv2v conversion succeeds
- **WHEN** a generated `design.v` (SVerilog) is available
- **THEN** the executor runs `sv2v design.v > design_sv2v.v` inside Docker and the output is used as the PnR input

#### Scenario: Bundled default skips sv2v
- **WHEN** the executor uses `/cgra/default_design.v` (already plain Verilog)
- **THEN** sv2v is NOT invoked; the file is copied directly to `design_sv2v.v`

---

### Requirement: Executor runs OpenROAD place-and-route via mflowgen inside Docker
The executor SHALL write a shell script, mount a temp directory into the Docker container, and run mflowgen with OpenROAD through to the final routing step.

#### Scenario: Docker container is started for PnR
- **WHEN** the layout job begins executing
- **THEN** `docker run --rm -v <tempDir>:/layout <DOCKER_IMAGE> bash /layout/layout.sh` is invoked with the `cgra/cgra-flow:web-ui` image

#### Scenario: mflowgen drives the flow
- **WHEN** the layout shell script runs inside Docker
- **THEN** mflowgen is configured for the `nangate45` process node and `make` is called to run through the final routing step

---

### Requirement: Executor reports intermediate progress to Supabase
The executor SHALL update `job.info` with `{ progress, stage, timeCost }` at key milestones via `PROGRESS:<n>:<label>` markers streamed from the Docker process.

#### Scenario: Progress milestones are emitted
- **WHEN** the Docker process emits `PROGRESS:10:starting`, `PROGRESS:20:sv2v`, `PROGRESS:50:pnr-init`, `PROGRESS:80:routing`, `PROGRESS:95:image-export`
- **THEN** the runner patches `job.info` with the corresponding progress value and stage label

---

### Requirement: Executor uploads the layout result image to Supabase Storage
After Docker exits successfully, the executor SHALL read the PNG captured from the OpenROAD output directory and upload it to the `job-artifacts` bucket.

#### Scenario: Result image is uploaded
- **WHEN** the Docker process exits with code 0 and a `.png` file exists in the mounted temp directory
- **THEN** the executor uploads the file to `job-artifacts/<jobId>/layout.png` using the Supabase service-role key

#### Scenario: Signed URL is stored in job info
- **WHEN** the upload succeeds
- **THEN** the executor calls `createSignedUrl` (1-hour TTL) and writes the URL to `job.info.imageUrl`

#### Scenario: No image found after Docker exits
- **WHEN** Docker exits with code 0 but no PNG is found in the temp directory
- **THEN** the job is marked `failed` with an error message indicating the image was not produced

---

### Requirement: Layout job executor has a configurable timeout
The executor SHALL respect a `LAYOUT_DOCKER_TIMEOUT_MS` environment variable (default: 3 600 000 ms = 60 min).

#### Scenario: Timeout is enforced
- **WHEN** the Docker process runs longer than `LAYOUT_DOCKER_TIMEOUT_MS`
- **THEN** the process is killed and the job is marked `failed` with a timeout error

---

### Requirement: Docker image includes OpenROAD
The `cgra/cgra-flow:web-ui` image SHALL have `openroad` on `PATH`.

#### Scenario: openroad binary is available
- **WHEN** the container starts
- **THEN** `openroad -version` exits with code 0 and prints a version string
