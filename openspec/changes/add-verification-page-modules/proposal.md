## Why

The Verification tab currently shows an "Under Construction" placeholder with no functional UI. Users completing a mapping workflow have no place to view test results, inspect generated SVerilog, or review area/power report data for their CGRA design. Adding structured UI panels to this tab makes the verification stage a first-class step in the workflow.

## What Changes

- Replace the placeholder content in `VerificationTab.jsx` with a three-panel layout
- Add a **Tests** panel: displays a list of test cases with their pass/fail status indicators
- Add a **SVerilog** panel: shows the generated SystemVerilog source in a read-only code viewer (syntax-highlighted)
- Add a **Report Area/Power** panel: presents area and power metrics in a structured table or card layout
- All panels are UI-only; data is static/mocked — no backend integration in this change

## Capabilities

### New Capabilities

- `verification-tests-panel`: Test-case list UI inside the Verification tab, showing test names and pass/fail status
- `verification-sverilog-panel`: Read-only SVerilog code viewer inside the Verification tab
- `verification-report-panel`: Area and power metrics display panel inside the Verification tab

### Modified Capabilities

*(none — no existing spec-level requirements are changing)*

## Impact

- **Modified file**: `src/workspace/VerificationTab.jsx` — replaces placeholder with three-panel layout
- **Possible new components**: `src/workspace/verification/TestsPanel.jsx`, `SverilogPanel.jsx`, `ReportPanel.jsx` (or inlined in VerificationTab)
- **Dependencies**: MUI components already available; no new npm packages required
- **No backend changes**, no API changes, no auth changes
- **No breaking changes**
