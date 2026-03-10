## Why

The "Generate" button in the Verification → SVerilog panel and the "Synthesize" button in the Layout → Report Area/Power panel use `fullWidth` with the default MUI button size ("medium"), while the "Run Tests" button in the Verification → Tests panel uses `size="small"` without `fullWidth`. This visual inconsistency makes the primary action buttons feel mismatched across panels that otherwise share the same design language.

## What Changes

- Remove `fullWidth` from the **Generate** button in `SverilogPanel.jsx`
- Add `size="small"` and `sx={{ mb: 1 }}` to the **Generate** button in `SverilogPanel.jsx`
- Remove `fullWidth` from the **Synthesize** button in `ReportPanel.jsx`
- Add `size="small"` and `sx={{ mb: 1 }}` to the **Synthesize** button in `ReportPanel.jsx`
- Adjust any wrapping `<span>` or Tooltip containers in both files to match the non-fullWidth layout

## Capabilities

### New Capabilities
- `panel-action-buttons`: Visual consistency standard for primary action buttons in workspace panels — defines the canonical size, spacing, and layout props that all panel-level action buttons must follow.

### Modified Capabilities

_(none — no existing spec-level behavior changes)_

## Impact

- `src/workspace/verification/SverilogPanel.jsx` — Generate button props
- `src/workspace/verification/ReportPanel.jsx` — Synthesize button props and its Tooltip wrapper
- No API, routing, or data model changes
- No new dependencies
