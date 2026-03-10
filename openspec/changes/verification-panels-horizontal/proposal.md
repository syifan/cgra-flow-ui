## Why

The Verification tab currently stacks the "Tests" and "SVerilog" panels vertically as accordions, forcing users to scroll to see both at once. Displaying them side-by-side in a two-column row makes better use of horizontal screen space and lets users see test results and Verilog output simultaneously.

## What Changes

- Replace the vertical accordion stack in `VerificationTab.jsx` with a two-column horizontal layout.
- "Tests" panel occupies the left column; "SVerilog" panel occupies the right column.
- Both panels remain independently scrollable and fill the available height.
- The accordion expand/collapse behaviour is removed in favour of always-visible panels (or retained as collapsible cards within each column).

## Capabilities

### New Capabilities
- `verification-panel-layout`: Layout rules for the Verification tab — two equal columns rendered side by side, each containing one panel, responsive to tab width.

### Modified Capabilities
<!-- No existing spec-level requirements are changing. -->

## Impact

- **Files**: `src/workspace/VerificationTab.jsx`
- **Components**: `TestsPanel`, `SverilogPanel` — no internal changes required
- **Dependencies**: MUI `Grid2` or `Box` with `flexDirection: 'row'` (already available in MUI 7.x)
- **Tests**: `tests/tabs.spec.js` may need layout assertions updated if any exist
