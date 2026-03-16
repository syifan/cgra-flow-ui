## Context

The Layout tab currently submits no real job — `handleRun` just delays 1.5 s and then shows the static `final_all.webp` bundled in the repo. The Docker image has been extended (`cgra/cgra-flow:web-ui`) with OpenROAD via a new `Dockerfile.openroad` that layers `openroad/orfs` on top of the existing `cgra/cgra-flow:web-ui`. The runner already has the `synthesis` job type as a near-identical precedent (`synthesisExecutor.js`): it finds the latest `verilog-generation` job, downloads the file, writes a shell script, mounts a temp directory into Docker, and streams `PROGRESS:<n>:<label>` lines back to Supabase.

## Goals / Non-Goals

**Goals:**
- Real `layout` job that runs inside Docker: sv2v (if needed) → OpenROAD PnR via mflowgen → captures the result image.
- Upload result image to Supabase Storage; store the signed URL in `job.info.imageUrl`.
- `LayoutTab.jsx` submits the job, shows a live progress bar, and displays the returned image.
- Fallback to `/cgra/default_design.v` when no verilog-generation job exists (same as synthesis).

**Non-Goals:**
- Supporting custom SDC / config.mk files uploaded by the user (the file-picker fields in LayoutTab remain UI-only for now).
- Supporting process nodes other than `nangate45` in the first iteration (OpenROAD's bundled PDK in orfs).
- Cancelling an in-flight layout job.
- Showing per-step metrics (WNS, TNS, area); result is image-only for now.

## Decisions

### 1 — Reuse the synthesis executor pattern wholesale

**Decision**: `layoutExecutor.js` follows `synthesisExecutor.js` exactly: same `runWithProgress` helper, same `PROGRESS:<n>:<label>` protocol, same temp-directory mount, same Supabase progress patching, same fallback to `/cgra/default_design.v`.

**Alternative considered**: A generic "executor factory" abstraction. Rejected — only two executors exist; DRY overhead isn't justified here.

### 2 — sv2v is only run on generated SVerilog, not on the bundled default

**Decision**: When `useDefaultDesign = true`, skip sv2v and use the default file directly. The default file is already plain Verilog (it was converted once during image preparation). This matches the synthesis executor.

**Alternative considered**: Always run sv2v. Rejected — unnecessary work; sv2v fails on plain Verilog with warnings.

### 3 — Use mflowgen with nangate45 PDK to drive OpenROAD

**Decision**: The layout shell script replicates mflowgen's ASIC flow up through the final routing step (`make` through step N that produces `final.odb` and a layout image), using the `nangate45` process node already present in the orfs image. The layout image is extracted from the OpenROAD output directory (typically `results/nangate45/.../final.png` or exported via `openroad -exit` with a TCL script).

**Alternative considered**: Call OpenROAD directly without mflowgen. Rejected — mflowgen already wires up floorplan, placement, CTS, and routing with sensible defaults; replicating that manually is fragile.

### 4 — Result image is uploaded to Supabase Storage

**Decision**: After Docker exits successfully, the host reads the PNG from the mounted temp directory and uploads it to `job-artifacts/<jobId>/layout.png`. The public/signed URL is written to `job.info.imageUrl`. `LayoutTab.jsx` reads `imageUrl` from the realtime job update and sets it as the `<img>` src, replacing the hardcoded import.

**Alternative considered**: Save image path on disk and serve via a local file URL. Rejected — Supabase Storage is already wired up for synthesis artifacts; consistent approach.

### 5 — LayoutTab wires to the new job type via the existing `subscribeToJob` helper

**Decision**: Replace the mock `handleRun` with `submitLayoutJob(projectId)` from `verificationService.js`. Subscribe with the existing `subscribeToJob(jobId, onUpdate)` to receive progress and final `imageUrl`. The spinner and progress bar follow the same pattern as `ReportPanel.jsx`.

**Alternative considered**: Polling instead of realtime. Rejected — realtime is already established and lower latency.

## Risks / Trade-offs

- **OpenROAD runtime**: A full PnR run can take 10–30 minutes for a real CGRA design. The `LAYOUT_DOCKER_TIMEOUT_MS` env var (default 60 min) guards against hangs.
- **Image extraction path**: The exact path of the layout image inside the mflowgen build directory depends on the PDK and step numbering. If it moves between OpenROAD versions, the shell script needs updating. _Mitigation_: use a `find` command to locate the PNG rather than a hard-coded path.
- **glibc / library compatibility**: The `Dockerfile.openroad` copies Ubuntu 22.04 libs into a 24.04 base; if OpenROAD fails at runtime the wrapper's `LD_LIBRARY_PATH` may need tuning. _Mitigation_: The smoke-test in `Dockerfile.openroad` (`openroad -version`) catches this at build time.
- **Storage bucket permissions**: The runner uses the service-role key, so uploads will succeed, but the frontend needs a signed URL or the bucket must be public. _Mitigation_: Use `supabase.storage.from(bucket).createSignedUrl(path, 3600)` (1-hour TTL) consistent with how other artifacts are served.

## Migration Plan

1. Create `runner/layoutExecutor.js`.
2. Register `layout` case in `runner/jobProcessor.js`.
3. Add `submitLayoutJob` to `src/workspace/services/verificationService.js`.
4. Update `src/workspace/LayoutTab.jsx` to use real job flow.
5. No database migrations — reuses `jobs` table and `job.info` JSONB.
6. Smoke-test: confirm `openroad -version` works inside a running container; manually queue a `layout` job via Supabase Studio and watch progress updates.

**Rollback**: Revert `LayoutTab.jsx` to the mock `handleRun`; remove the `layout` case from `jobProcessor.js`. No data loss.

## Open Questions

- What is the exact mflowgen step number / output path for the layout image in the orfs nangate45 flow? Needs a test run to confirm before the shell script is finalised.
- Should the process node (asap7 / nangate45 / sky130hd) selector in LayoutTab actually be wired to the job payload, or remain UI-only? (Deferred to a follow-up.)
