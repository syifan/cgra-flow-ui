## ADDED Requirements

### Requirement: Synthesis job requires a prior successful SVerilog generation
The system SHALL refuse to start a synthesis job if no successful `verilog-generation` job exists for the given project. The `synthesisExecutor` SHALL query Supabase for the latest `verilog-generation` job with `status = 'success'` for the project before proceeding. If none is found it SHALL mark the synthesis job as `failed` with the error message `"SVerilog generation must be completed before synthesis."`.

#### Scenario: No SVerilog generation job exists
- **WHEN** a `synthesis` job is claimed for a project that has never had a successful `verilog-generation` job
- **THEN** the executor marks the job `failed` with error `"SVerilog generation must be completed before synthesis."`

#### Scenario: SVerilog generation exists and succeeded
- **WHEN** a `synthesis` job is claimed and the project has at least one `verilog-generation` job with `status = 'success'`
- **THEN** the executor downloads the verilog artifact and continues with the synthesis pipeline

---

### Requirement: Synthesis job type is registered in the runner
The runner's `jobProcessor.js` SHALL handle `job.type === 'synthesis'` by delegating to `synthesisExecutor.executeSynthesisJob(job)`.

#### Scenario: Job dispatched correctly
- **WHEN** a job with `type = 'synthesis'` is claimed from the queue
- **THEN** `executeJob` calls `executeSynthesisJob(job)` without throwing an "Unknown job type" error

---

### Requirement: Synthesis executor reports intermediate progress
The executor SHALL write incremental updates to the job's `info` column at each pipeline milestone so that the frontend can display a live progress bar.

The mandatory progress milestones are:

| Stage label | `progress` value |
|---|---|
| `"sv2v"` | 20 |
| `"synthesis-init"` | 50 |
| `"synthesis-run"` | 80 |
| `"complete"` | 100 |

Each update SHALL be a Supabase `UPDATE` on `jobs.info` with shape `{ progress: <number>, stage: "<label>", timeCost: <seconds> }`.

#### Scenario: Progress visible during sv2v step
- **WHEN** the executor finishes the sv2v conversion
- **THEN** the Supabase `jobs` row for that job has `info.progress = 20` and `info.stage = "sv2v"`

#### Scenario: Progress reaches 100 on completion
- **WHEN** the executor finishes parsing stats and writes the final result
- **THEN** the Supabase `jobs` row has `info.progress = 100` and `info.stage = "complete"`

---

### Requirement: Synthesis executor returns structured result
On success the executor SHALL update the job to `status = 'success'` with `info` containing:

```jsonc
{
  "progress": 100,
  "stage": "complete",
  "timeCost": <number>,       // wall-clock seconds (float, 1 decimal)
  "tileArea": <number|null>,  // mm², from Yosys stats.txt; null if not found
  "tilePower": null,          // always null (Yosys provides no dynamic power)
  "spmArea": null,            // mm², reserved for future CACTI integration
  "spmPower": null            // mW, reserved for future CACTI integration
}
```

#### Scenario: Tile area parsed correctly
- **WHEN** `3-open-yosys-synthesis/stats.txt` contains a line matching `"Chip area for module "`
- **THEN** `tileArea` in the job result equals `round(parsedMicronSquared / 1_000_000, 2)` (converted to mm²)

#### Scenario: Tile area not found
- **WHEN** `stats.txt` does not contain a `"Chip area for module "` line
- **THEN** `tileArea` is `null` and the job still completes as `success`

---

### Requirement: Docker image includes synthesis tools
The Docker image SHALL include the following tools on `PATH`:

| Tool | Version / source |
|---|---|
| `yosys` (via oss-cad-suite) | 2024-09-20 release from GitHub |
| `sv2v` | commit `9bab0448e32504cef764692018914f0f2f314911` of `zachjs/sv2v` |
| `mflowgen` | latest from `tancheng/mflowgen` (pip install) |

#### Scenario: Yosys available at runtime
- **WHEN** the runner container starts
- **THEN** `yosys --version` exits with code 0

#### Scenario: sv2v available at runtime
- **WHEN** the runner container starts
- **THEN** `sv2v --version` exits with code 0

#### Scenario: mflowgen available at runtime
- **WHEN** the runner container starts
- **THEN** `mflowgen --help` exits with code 0
