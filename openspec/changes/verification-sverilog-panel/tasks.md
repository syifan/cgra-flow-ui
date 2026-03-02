## 1. Service Layer

- [x] 1.1 Create `src/workspace/services/verificationService.js` with a `submitVerilogGenerationJob(architecture)` function that inserts a job row with `type: 'verilog-generation'` and the architecture as payload into the Supabase jobs table, returning the new job `id`
- [x] 1.2 Add `subscribeToJob(jobId, onUpdate)` to `verificationService.js` that opens a Supabase realtime channel subscription on the jobs table for the given `jobId`, calls `onUpdate({ status, result, error })` on each row update, and returns an `unsubscribe` function
- [x] 1.3 Verify the service functions work end-to-end by checking that a submitted job appears in the Supabase jobs table with the correct type and payload

## 2. Architecture Prop Threading

- [x] 2.1 Update `VerificationTab.jsx` to accept an `architecture` prop and add PropTypes validation for it
- [x] 2.2 Forward the `architecture` prop from `VerificationTab` down to the `SverilogPanel` component
- [x] 2.3 Update `Workspace.jsx` to pass the `architecture` state variable to `<VerificationTab architecture={architecture} />` in the memoized render callback (case `'verification'`)

## 3. SverilogPanel State Machine

- [x] 3.1 Replace the `MOCK_SVERILOG` constant in `SverilogPanel.jsx` with component state: `status` (`'idle' | 'pending' | 'running' | 'done' | 'error'`), `sverilogText` (string or null), and `errorMessage` (string or null)
- [x] 3.2 Add a `handleGenerate` async function that calls `submitVerilogGenerationJob(architecture)`, transitions state to `pending`, then calls `subscribeToJob` and transitions to `running`; handle the `onUpdate` callback to transition to `done` (with `sverilogText`) or `error` (with `errorMessage`) based on job status
- [x] 3.3 Add a `useEffect` cleanup that unsubscribes the Supabase channel subscription when the component unmounts or a new job starts, preventing memory leaks

## 4. SverilogPanel UI

- [x] 4.1 Add a MUI `Button` above the code viewer in `SverilogPanel.jsx` with label "Generate"; disable it when `architecture` is null/undefined (with a MUI `Tooltip` showing "No architecture loaded") or when `status` is `'pending'` or `'running'`
- [x] 4.2 Show a MUI `CircularProgress` spinner inline within or adjacent to the Generate button when `status` is `'pending'` or `'running'`
- [x] 4.3 Render the `<pre>` code viewer with `sverilogText` when `status` is `'done'`; show a placeholder message (e.g., "Click Generate to produce SVerilog for the current architecture.") when `status` is `'idle'`
- [x] 4.4 Render a MUI `Alert` with `severity="error"` and `errorMessage` content when `status` is `'error'`; ensure the Generate button is re-enabled so the user can retry

## 5. Verification

- [ ] 5.1 Manually verify the full flow: load a workspace with an architecture, open the Verification tab → SVerilog accordion, click Generate, observe spinner, confirm SVerilog text appears in the scrollable viewer on success
- [ ] 5.2 Manually verify the error path: with no runner active, click Generate, confirm the error state and message are displayed and the button re-enables
- [ ] 5.3 Manually verify the disabled state: open the Verification tab without an architecture loaded and confirm the Generate button is disabled with the "No architecture loaded" tooltip
