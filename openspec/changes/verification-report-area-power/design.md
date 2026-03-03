## Context

The Verification tab already supports two live job-driven flows (SVerilog generation, run-tests) that share a common pattern: submit a job to Supabase, subscribe to real-time row updates, render status in the UI. The `ReportPanel.jsx` exists but only shows hard-coded mock data.

The synthesis pipeline (per `run_tests/python-package.yml` and `ai_assistant_sample/mode_dark_light.py`) is:

1. Take `CgraTemplateRTL__pickled.v` produced by SVerilog generation.
2. Convert it with **sv2v** → `design_sv2v.v`.
3. Copy into mflowgen cgra design inputs, run `mflowgen run --design ../designs/cgra` then `make 2` (synthesis setup) and `make 3` (Yosys synthesis).
4. Parse `3-open-yosys-synthesis/stats.txt` to extract tile area (`Chip area for module` line).
5. Optionally run **CACTI** to estimate SPM area & power from a config template.

None of the three synthesis tools (oss-cad-suite/Yosys, sv2v, mflowgen) are present in the Docker image today.

## Goals / Non-Goals

**Goals:**
- Real Synthesize button that runs the full synthesis flow end-to-end inside Docker.
- Live progress bar (0–100 %) and elapsed-time counter updated from job `info`.
- Display five metrics: Time cost, Tiles area (mm²), Tiles power, SPM area (mm²), SPM power (mW).
- Install all required tools in the Docker image.
- Reuse the existing Supabase job queue and realtime subscription infrastructure.

**Non-Goals:**
- Layout (OpenROAD) — that is a separate future panel.
- Tile power from Yosys (Yosys cannot produce dynamic power; shown as `–`).
- Supporting synthesis for designs other than `CgraTemplateRTL`.
- Cancelling an in-flight synthesis job.
- CACTI integration in the first iteration (SPM fields can show `–` until CACTI is added to Docker; see Open Questions).

## Decisions

### 1 — Reuse the existing job queue pattern, add interim `info` progress updates

**Decision**: The executor writes incremental `info` patches to the Supabase `jobs` row at each milestone (e.g., `{ progress: 20, stage: "sv2v" }`). The frontend subscription already fires on every UPDATE; the panel reads `result.progress` and `result.stage` while `status === "running"`.

**Alternative considered**: Server-Sent Events / WebSocket separate channel. Rejected — adds infrastructure complexity; Supabase realtime on the `jobs` row is already wired up and sufficient.

### 2 — Synthesis input: use the verilog file from the most recent successful verilog-generation job

**Decision**: The `synthesis` job payload carries `project_id`. The executor queries Supabase for the latest `verilog-generation` success job for that project and downloads `CgraTemplateRTL__pickled.v` (or `design.v`) from Supabase Storage into a temp directory. This avoids coupling the synthesis job to the SVerilog panel state.

**Alternative considered**: Require the user to run SVerilog generation first and store the path in job info. Rejected — too fragile; the executor should self-heal by fetching the file directly.

### 3 — Docker tooling installation strategy

**Decision**:
- **oss-cad-suite** (provides Yosys + supporting tools): download static binary tarball from GitHub releases into `/cgra/oss-cad-suite`; add to `PATH`.
- **sv2v**: clone from `zachjs/sv2v`, checkout the pinned commit `9bab0448`, build with `stack`. Requires installing Haskell `stack` via `curl | sh`. This is slow but deterministic and matches the CI.
- **mflowgen**: `pip install -e .` from a cloned copy of `tancheng/mflowgen` inside the Docker build; the cgra design files are part of VectorCGRA (already cloned). mflowgen is run from `/cgra/VectorCGRA` context.
- **CACTI**: deferred (see Open Questions).

**Alternative considered for sv2v**: Use a pre-built binary release. The release artifacts are not universally available for all Linux targets; building from source is safer for Ubuntu 24.04.

### 4 — Progress milestones mapped to percentage values

| Stage | Progress |
|---|---|
| Job starts | 0 % |
| sv2v conversion done | 20 % |
| mflowgen init (`make 2`) done | 50 % |
| Yosys synthesis (`make 3`) done | 80 % |
| Stats parsed, result written | 100 % |

The executor does a Supabase `update` on the job's `info` column at each boundary. The frontend maps `result.progress` directly to the MUI `LinearProgress` value.

### 5 — Frontend: optimistic elapsed-time counter via `setInterval`

**Decision**: The frontend starts a `setInterval(1000)` when `status === "running"` and increments a local `elapsedSeconds` counter. It stops on job completion or error. This avoids depending on server-side timestamps for the UX counter.

### 6 — Tile power shown as `–`

Yosys provides area from `stats.txt` but no power. The result field `tilePower` is always `null`; the UI renders `–` with a tooltip: "Yosys does not provide dynamic power estimation."

## Risks / Trade-offs

- **sv2v build time in Docker** (~5–10 min): Mitigated by using Docker layer caching; sv2v is installed before VectorCGRA so the layer is reused on VectorCGRA updates.
- **oss-cad-suite download size** (~1 GB): Accepted. It is a one-time Docker build cost.
- **mflowgen cgra design path**: The design lives inside VectorCGRA at `VectorCGRA/` (or a subpath). The executor must resolve this dynamically from the container's clone location. Mitigation: hard-code `/cgra/VectorCGRA` as the mflowgen design root, add a health-check in the executor that fails early if the path is missing.
- **Synthesis job duration** (~5–15 min): The frontend shows elapsed time and a spinner; users are warned via a tooltip. No timeout is enforced server-side in v1.
- **Multiple simultaneous synthesis jobs**: Not guarded; the job queue processes one job at a time per runner instance, so concurrency is only a risk with multiple runners.

## Migration Plan

1. Update Dockerfile — install sv2v, oss-cad-suite, mflowgen; rebuild image.
2. Add `synthesisExecutor.js` to the runner.
3. Add `synthesis` case to `jobProcessor.js`.
4. Add `submitSynthesisJob` to `verificationService.js`.
5. Rewrite `ReportPanel.jsx` with live job subscription.
6. No database migrations needed — `info` column is already JSONB.
7. Smoke-test: submit a synthesis job manually via Supabase console; verify progress updates appear in the UI.

**Rollback**: The old `ReportPanel.jsx` only showed mock data, so reverting the UI change has zero functional regression. The runner executor can simply be removed from `jobProcessor.js`.

## Open Questions

1. **CACTI**: Does the Docker build environment support CACTI's dependencies (gcc, make)? If yes, add CACTI in a follow-up. For v1, SPM fields show `–`.
2. **mflowgen cgra design location**: Is it at `VectorCGRA/mflowgen/cgra` or elsewhere in the repo? Needs verification against the actual VectorCGRA submodule structure before coding `synthesisExecutor.js`.
3. **Input verilog file name**: The pickled verilog file name may include a hash suffix (e.g., `CgraTemplateRTL__pickled.v`). The executor must glob for `CgraTemplateRTL__*pickled*.v` rather than use a fixed name.
