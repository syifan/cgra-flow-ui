## 1. Directory & File Scaffold

- [x] 1.1 Create directory `src/workspace/verification/`
- [x] 1.2 Create empty file `src/workspace/verification/TestsPanel.jsx`
- [x] 1.3 Create empty file `src/workspace/verification/SverilogPanel.jsx`
- [x] 1.4 Create empty file `src/workspace/verification/ReportPanel.jsx`

## 2. TestsPanel Implementation

- [x] 2.1 Define `MOCK_TESTS` array in `TestsPanel.jsx` with at least 5 test cases covering `pass`, `fail`, and `pending` statuses
- [x] 2.2 Implement the list layout using MUI `List` / `ListItem` components, one row per test case
- [x] 2.3 Render status icon per test: `CheckCircleIcon` (success) for pass, `ErrorIcon` (error) for fail, `HourglassEmptyIcon` (disabled) for pending
- [x] 2.4 Display test name as `Typography` `body2` next to the status icon
- [x] 2.5 Make the list scrollable (set `overflow: 'auto'` and a `maxHeight` on the container)
- [x] 2.6 Export `TestsPanel` as default export

## 3. SverilogPanel Implementation

- [x] 3.1 Define `MOCK_SVERILOG` string constant in `SverilogPanel.jsx` containing a representative multi-line SystemVerilog snippet (module declaration, ports, logic)
- [x] 3.2 Render the code in a MUI `Box` with `component="pre"`, `fontFamily: 'monospace'`, dark background (`background: '#1e1e1e'`, `color: '#d4d4d4'`), and `overflow: 'auto'`
- [x] 3.3 Set a fixed `maxHeight` (e.g., `400px`) so the panel doesn't expand infinitely
- [x] 3.4 Confirm the container is non-editable (use `<pre>` / `contentEditable` not set)
- [x] 3.5 Export `SverilogPanel` as default export

## 4. ReportPanel Implementation

- [x] 4.1 Define `MOCK_REPORT_ROWS` array in `ReportPanel.jsx` with entries for: Total Area, Cell Area, Net Area, Total Power, Dynamic Power, Leakage Power — each with a `label`, `value`, and `unit` field
- [x] 4.2 Render a MUI `Table` with two columns: "Metric" and "Value"
- [x] 4.3 Map `MOCK_REPORT_ROWS` to `TableRow` elements; display `label` in column 1 and `${value} ${unit}` in column 2
- [x] 4.4 Add a `TableHead` row with column labels ("Metric", "Value") styled with `fontWeight: 'bold'`
- [x] 4.5 Wrap the table in `TableContainer` with `Paper` for visual grouping
- [x] 4.6 Export `ReportPanel` as default export

## 5. VerificationTab Integration

- [x] 5.1 Import `Accordion`, `AccordionSummary`, `AccordionDetails`, and `ExpandMoreIcon` from MUI in `VerificationTab.jsx`
- [x] 5.2 Import `TestsPanel`, `SverilogPanel`, and `ReportPanel` from the `./verification/` directory
- [x] 5.3 Remove the existing placeholder (`ConstructionIcon` + Under Construction text)
- [x] 5.4 Render three `Accordion` panels stacked vertically inside a scrollable `Box`:
  - Accordion 1: summary "Tests", `defaultExpanded={true}`, content `<TestsPanel />`
  - Accordion 2: summary "SVerilog", content `<SverilogPanel />`
  - Accordion 3: summary "Report Area/Power", content `<ReportPanel />`
- [x] 5.5 Style each `AccordionSummary` title with `Typography variant="subtitle1" fontWeight="bold"`

## 6. Visual Verification

- [x] 6.1 Run `npm run dev` and open the app in a browser
- [ ] 6.2 Navigate to the Verification tab and confirm all three accordions are visible
- [ ] 6.3 Confirm "Tests" accordion is expanded by default on load
- [ ] 6.4 Expand the SVerilog accordion and confirm monospace code is readable and scrollable
- [ ] 6.5 Expand the Report accordion and confirm the two-column metric table renders correctly
