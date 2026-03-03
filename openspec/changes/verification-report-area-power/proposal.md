## Why

The "Report Area/Power" panel in the Verification tab currently displays hard-coded mock data, giving users no real insight into the synthesized area and power of their CGRA design. Real synthesis results (tile area from Yosys, SPM area/power from CACTI) are essential for design-space exploration and must be driven by the actual architecture configuration.

## What Changes

- Replace the static mock `ReportPanel.jsx` with a functional component that submits a `synthesis` job and streams results back in real time.
- Add a `Synthesize` button, a linear progress bar (0–100 %), and a time-cost counter to the panel.
- Display five result fields from the job output: **Time cost**, **Tiles area**, **Tiles power**, **SPM area**, **SPM power**.
- Add a new `synthesis` job type to the runner's `jobProcessor.js` / `executeSynthesisJob` executor.
- Extend `verificationService.js` with `submitSynthesisJob`.
- Update the Docker image (`cgra-flow-docker/Dockerfile`) to install the tools required for synthesis: **oss-cad-suite** (Yosys), **sv2v** (SV → Verilog converter), and **mflowgen** (Python flow manager). CACTI is included for SPM estimation.
- Extend the mflowgen `cgra` design inside VectorCGRA (or install it separately in Docker) so `make 2` and `make 3` execute correctly.

## Capabilities

### New Capabilities
- `synthesis-job`: Backend job executor that runs the full synthesis flow (sv2v → mflowgen/Yosys → stats parsing) inside the Docker container, reports intermediate progress via job `info` updates, and returns tile area, tile power, SPM area, and SPM power in the final job result.
- `report-area-power-ui`: Frontend React component (`ReportPanel.jsx`) that triggers a `synthesis` job, shows a live progress bar and elapsed-time counter, and renders the returned metrics in a structured table.

### Modified Capabilities
<!-- No existing spec-level requirements change. -->

## Impact

- **Frontend**: `src/workspace/verification/ReportPanel.jsx` — full rewrite; `src/workspace/services/verificationService.js` — add `submitSynthesisJob`.
- **Runner**: `runner/jobProcessor.js` — add `synthesis` case; new file `runner/synthesisExecutor.js`.
- **Docker**: `cgra-flow-docker/Dockerfile` — install oss-cad-suite, sv2v (requires `stack`/Haskell), and mflowgen; optionally CACTI for SPM.
- **No database schema changes** — reuses the existing `jobs` table and `job.info` JSON field for progress and result.
- **No breaking changes** to existing job types or UI panels.
