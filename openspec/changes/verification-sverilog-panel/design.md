## Context

**Current State:**
- `SverilogPanel.jsx` exists under `src/workspace/verification/` and renders a scrollable `<pre>` block with a hard-coded mock SVerilog constant. There is no "Generate" button or any live job integration.
- `VerificationTab.jsx` hosts `SverilogPanel` inside a collapsible MUI `Accordion`. It currently receives no props from `Workspace.jsx` (rendered as `<VerificationTab />`).
- `Workspace.jsx` holds the live `architecture` object in local state and passes it to `DesignTab`, `SidePanel`, etc. via props — the established pattern is prop-drilling (no React Context for architecture).
- The backend `verilog-generation` job type, runner handler, and Docker execution logic are already implemented (see `verify-cgra-verilog-generation`). The runner returns generated SVerilog via a Supabase storage URL in the job `result` column.
- The service layer follows a file-per-concern pattern: `aiApiService.js`, `aiConfigExtractor.js`, etc. No `verificationService.js` exists yet.

**Key Constraints:**
- `architecture` is managed in `Workspace.jsx` state; it must be threaded down as a prop — not fetched again from Supabase in the UI panel.
- SVerilog generation can take tens of seconds; the UI must remain usable while the job runs.
- The Supabase job queue is already used for mapping jobs; the `verilog-generation` type uses the same schema.

## Goals / Non-Goals

**Goals:**
- Add a "Generate" button to `SverilogPanel` that submits a `verilog-generation` job using the current architecture.
- Show clear loading, success, and error states in the panel.
- Replace the mock SVerilog constant with real output once the job completes.
- Keep the scrollable `<pre>` viewer that already exists.
- Encapsulate all job-submission and status-tracking logic in `verificationService.js`.

**Non-Goals:**
- Syntax highlighting for the SVerilog output.
- Caching or re-using previous generation results across sessions.
- Displaying per-line generation progress or streaming output.
- Any changes to the runner, Docker executor, or Supabase schema.
- Making architecture data available via React Context (out of scope for this change).

## Decisions

### 1. Architecture Data Access — Prop-Drilling

**Decision:** Pass `architecture` from `Workspace.jsx` → `VerificationTab` → `SverilogPanel` via props.

**Rationale:**
- Consistent with every other tab in the workspace (`DesignTab`, `SidePanel`, etc.).
- `Workspace.jsx` renders `VerificationTab` in a `useCallback`-memoized factory that already has `architecture` in scope — the change is a one-liner addition.
- Introducing a React Context for architecture is a separate, cross-cutting concern.

**Alternatives Considered:**
- React Context for architecture → Rejected: Large refactor, out of scope.
- Fetching architecture from Supabase inside `SverilogPanel` → Rejected: Stale data risk, duplicates existing state.

### 2. Job Submission and Status — `verificationService.js`

**Decision:** Create `src/workspace/services/verificationService.js` with two exports:
- `submitVerilogGenerationJob(architecture)` → inserts a job row and returns the job `id`.
- `subscribeToJob(jobId, onUpdate)` → opens a Supabase realtime channel on the jobs table and calls `onUpdate({ status, result, error })` on each update. Returns an `unsubscribe` function.

**Rationale:**
- Mirrors the service layer for AI (`aiApiService.js`) and mapping.
- Keeps `SverilogPanel` focused on rendering; no Supabase calls in the component.
- Realtime subscription is already used for mapping jobs — reuse the same pattern.
- Two narrow exports are easy to unit test and mock in future Playwright tests.

**Alternatives Considered:**
- Inline Supabase calls inside `SverilogPanel` → Rejected: Mixes concerns, harder to test.
- HTTP polling → Rejected: Realtime subscription is already available and lower-latency.

### 3. UI State Machine in `SverilogPanel`

**Decision:** Model panel state with a single `status` string + auxiliary fields using `useState`:

```
status: 'idle' | 'pending' | 'running' | 'done' | 'error'
sverilogText: string | null
errorMessage: string | null
```

State transitions:
- `idle` → click Generate → `pending` (submitting job)
- `pending` → job row created → `running` (subscription active)
- `running` → job status = `completed` → `done` (show SVerilog)
- `running` / `pending` → job status = `failed` → `error` (show error message)
- `done` / `error` → click Generate again → `pending` (re-run)

**Rationale:**
- Simple, self-contained; no external state management needed.
- The mock SVerilog constant is replaced with `sverilogText`, falling back to a placeholder when `null`.
- A `useEffect` cleanup unsubscribes the Supabase channel when the component unmounts or a new job starts.

### 4. Generate Button Placement and UX

**Decision:** Place the Generate button at the top of `SverilogPanel`, full-width, above the code viewer. Show a `CircularProgress` spinner inline with the button label during `pending`/`running` states. Disable the button while a job is in-flight.

**Rationale:**
- Matches the visual pattern of other action buttons in the workspace.
- Inline spinner avoids layout shift.
- Disabling during in-flight prevents duplicate submissions without extra guard logic.

**Architecture data guard:** If `architecture` prop is `null` or `undefined`, the Generate button is disabled with a tooltip "No architecture loaded".

## Risks / Trade-offs

- **Supabase subscription not firing** → Mitigation: Fall back to a 5-second polling interval via `setInterval` as a safety net (can be added if observed in testing).
- **Job stays `running` indefinitely** → Mitigation: Show elapsed time and a "Cancel / retry" escape hatch in a follow-up; for now, display a note that generation may take a minute.
- **SVerilog output very large** → The existing `maxHeight: 400px` + `overflow: auto` on the `<pre>` viewer handles this already; no change needed.
- **Architecture prop threading** → Minor risk of merge conflict with other changes modifying `Workspace.jsx`'s render callback; easily resolved since the edit is small.

## Migration Plan

No data migration required. The change is purely additive:
1. Add `architecture` prop to `VerificationTab` and pass it through to `SverilogPanel`.
2. Create `verificationService.js`.
3. Update `SverilogPanel` with button + state machine.
4. Update `Workspace.jsx` to pass `architecture` to `VerificationTab`.

Rollback: Revert the four files above. No Supabase schema changes means no DB rollback needed.

## Open Questions

- Should the generated SVerilog be persisted (e.g., saved to Supabase storage and shown on next load)? Currently out of scope — the panel resets to idle on remount.
- Should the Verification accordion for SVerilog auto-expand when the user clicks Generate? Deferring to implementation; default expansion state is unchanged.
