## Why

The Verification tab's SVerilog accordion already has a scrollable code viewer (`SverilogPanel.jsx`) but it displays hard-coded mock data — there is no way for a user to trigger actual SVerilog generation from the current architecture. The `verify-cgra-verilog-generation` change already proved the end-to-end pipeline (Docker + VectorCGRA + job queue), so the remaining gap is purely at the UI layer: a "Generate" button that kicks off a real job and replaces the mock output with live results.

## What Changes

- Add a **Generate** button to `SverilogPanel` that submits a `verilog-generation` job for the current architecture.
- Display a loading/progress state while the job runs.
- Replace the mock SVerilog constant with the real output returned by the runner; keep the existing scrollable `<pre>` viewer.
- Surface error messages inline when generation fails.
- Wire `SverilogPanel` to the architecture context so it can read the current CGRA configuration without prop-drilling.

## Capabilities

### New Capabilities

- `sverilog-generation-ui`: UI surface in `SverilogPanel` for triggering SVerilog generation: Generate button, job-submission flow, real-time status polling via Supabase subscription, and display of the resulting SVerilog text or error messages.

### Modified Capabilities

None — the runner-side `verilog-generation` job type is already specified and proven; only the UI capability is new.

## Impact

**Frontend:**
- `src/workspace/verification/SverilogPanel.jsx` — primary change: add button, state, and generation logic.
- `src/workspace/services/verificationService.js` — create (or extend if already exists) to encapsulate job submission and status subscription for verilog-generation jobs.
- Architecture context (e.g., `contexts/`) — read-only consumption of current architecture YAML for job payload; no structural changes to context needed.

**Backend / Runner:**
- No changes required — `verilog-generation` job type handler already implemented in `verify-cgra-verilog-generation`.

**Dependencies:**
- Existing Supabase job queue infrastructure.
- Existing Docker runner with VectorCGRA.
- Architecture context already available in workspace.
