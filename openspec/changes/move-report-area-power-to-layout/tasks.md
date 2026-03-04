## 1. Update Workspace.jsx

- [x] 1.1 Add `sverilogDone` state (`useState(false)`) and `handleSverilogSuccess` callback to `Workspace.jsx`
- [x] 1.2 Pass `onSverilogSuccess={handleSverilogSuccess}` prop to the `<VerificationTab>` render call in `Workspace.jsx`
- [x] 1.3 Pass `projectId={projectId}` and `sverilogReady={sverilogDone}` props to the `<LayoutTab>` render call in `Workspace.jsx`

## 2. Update VerificationTab.jsx

- [x] 2.1 Remove local `sverilogDone` state and `handleSverilogSuccess` from `VerificationTab`
- [x] 2.2 Accept `onSverilogSuccess` as a prop and pass it directly to `SverilogPanel`'s `onSverilogSuccess`
- [x] 2.3 Remove the `ReportPanel` import from `VerificationTab.jsx`
- [x] 2.4 Remove the "Report Area/Power" `<Accordion>` block (summary + details + `<ReportPanel>`) from `VerificationTab`
- [x] 2.5 Update `VerificationTab.propTypes` to replace `architecture` with `onSverilogSuccess` (remove `architecture` if unused)

## 3. Update LayoutTab.jsx

- [x] 3.1 Add `import ReportPanel from './verification/ReportPanel'` to `LayoutTab.jsx`
- [x] 3.2 Accept `projectId` and `sverilogReady` as props in `LayoutTab`
- [x] 3.3 Add `PropTypes` import and define `LayoutTab.propTypes` for the two new props
- [x] 3.4 Add the "Report Area/Power" `<Accordion>` block (with `<ReportPanel projectId={projectId} sverilogReady={sverilogReady} />`) above the existing `<Paper>` (Place and Route section)

## 4. Verify

- [x] 4.1 Confirm the app renders without errors on both the Layout and Verification tabs
- [x] 4.2 Confirm Report Area/Power accordion is visible on the Layout tab above Place and Route
- [x] 4.3 Confirm Report Area/Power accordion is no longer present on the Verification tab
- [x] 4.4 Confirm the Synthesize button is disabled before SVerilog succeeds and enabled after
