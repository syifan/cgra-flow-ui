## Context

`LayoutTab.jsx` currently renders "Report Area/Power" (an MUI `Accordion` wrapping `ReportPanel`) and "Place and Route" (an MUI `Paper` with form controls and a result image) stacked vertically inside a scrollable `Box`. This forces the user to scroll to see both panels.

The `VerificationTab.jsx` already implements the desired side-by-side pattern: a `Grid container` with two `Grid size="grow"` children separated by a `Divider orientation="vertical" flexItem`.

## Goals / Non-Goals

**Goals:**
- Reuse the exact same MUI layout pattern (`Box` → `Grid container spacing={2}`) from `VerificationTab`.
- Place "Report Area/Power" in the left column and "Place and Route" in the right column.
- Add a `Divider orientation="vertical" flexItem` between the two columns.
- Keep both columns scrollable independently via `overflow: 'auto'`.

**Non-Goals:**
- No responsive breakpoints — desktop horizontal layout only.
- No changes to `ReportPanel`, `Accordion`, or any inner sub-components.
- No changes to any other tab.

## Decisions

### 1. Use `Grid` + `Divider` (same as VerificationTab), not CSS Grid or Flexbox directly

**Decision**: Mirror the `VerificationTab` pattern exactly.

```jsx
<Box sx={{ height: '100%', p: 2, boxSizing: 'border-box' }}>
  <Grid container spacing={2} sx={{ height: '100%' }}>
    <Grid size="grow" sx={{ height: '100%', overflow: 'auto' }}>
      {/* Report Area/Power */}
    </Grid>
    <Divider orientation="vertical" flexItem />
    <Grid size="grow" sx={{ height: '100%', overflow: 'auto' }}>
      {/* Place and Route */}
    </Grid>
  </Grid>
</Box>
```

**Rationale**: MUI `Grid v2` with `size="grow"` gives equal 50/50 columns without explicit column counts. Using the same pattern as `VerificationTab` ensures visual and code consistency. The `Divider` is already a familiar MUI primitive used elsewhere in the app.

**Alternative considered**: Wrapping each panel in `Box sx={{ flex: 1 }}` with a parent `display: 'flex'` — rejected because it departs from the existing tab convention and requires more custom sx overrides.

### 2. Remove the outer `Accordion` wrapper's bottom margin

The current `Accordion` has `sx={{ mb: 2 }}` for the stacked layout. In the two-column layout this margin is unnecessary since vertical spacing is handled by the column container. Remove it.

### 3. Remove the `Paper` elevation wrapper from "Place and Route"

In the stacked layout the `Paper` provides visual separation. In the two-column layout the `Divider` already provides separation; keeping `Paper` inside a `Grid` column is fine and preserves scoping, so it stays — just ensure `height: '100%'` is set on the column so content fills available space.

## Risks / Trade-offs

- **Narrow viewports**: At small widths the two columns will be too cramped. Accepted — desktop-only scope per non-goals.
- **Accordion height growth**: If `ReportPanel` content is tall the left column will grow; `overflow: 'auto'` on the column prevents it from pushing the right column.

## Migration Plan

1. Edit `src/workspace/LayoutTab.jsx`:
   - Add `Grid, Divider` to MUI imports (already has `Box`).
   - Replace outer `Box` children with `Grid container` + two `Grid size="grow"` columns + `Divider`.
   - Move the `Accordion` (Report Area/Power) into the left column.
   - Move the `Paper` (Place and Route) into the right column.
   - Remove `mb: 2` from Accordion sx.
2. No other files need changes.
3. Rollback: revert `LayoutTab.jsx` — no data or API changes.

## Open Questions

_(none)_
