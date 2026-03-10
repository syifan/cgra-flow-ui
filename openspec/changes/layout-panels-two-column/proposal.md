## Why

The Layout page currently stacks "Report Area/Power" and "Place and Route" vertically, requiring the user to scroll between them. Displaying them side-by-side in a two-column row makes better use of horizontal space and allows both panels to be visible simultaneously.

## What Changes

- Replace the vertical stack layout in `LayoutTab.jsx` with a two-column row layout.
- "Report Area/Power" (Accordion + ReportPanel) occupies the left column.
- "Place and Route" (Paper with form controls + result display) occupies the right column.
- Both columns are equal width (50/50) and fill the available height.
- A vertical `Divider` (MUI, `orientation="vertical" flexItem`) separates the two columns, matching the style used in the Verification tab.

## Non-goals

- No changes to the content or functionality of either panel.
- No responsive/mobile breakpoint handling (desktop-only layout is sufficient).
- No changes to any other tab (Design, Mapping, Verification).

## Capabilities

### New Capabilities

- `layout-tab-two-column`: Side-by-side display of the Report Area/Power and Place and Route panels in the Layout tab using a two-column CSS/MUI Grid or flex row.

### Modified Capabilities

_(none — no existing spec-level requirements are changing)_

## Impact

- **File**: `src/workspace/LayoutTab.jsx` — outer container changes from a vertical `Box` to a two-column `Box`/`Grid` row.
- **No API or data changes** — purely presentational.
- **No new dependencies** required; MUI Grid or flexbox via `sx` prop is sufficient.
