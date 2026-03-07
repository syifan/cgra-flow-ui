## Context

Three workspace panels each have a primary action button:

| Panel | Button | File | Current props |
|---|---|---|---|
| Verification → SVerilog | Generate | `SverilogPanel.jsx` | `variant="contained"`, `fullWidth` |
| Layout → Report Area/Power | Synthesize | `ReportPanel.jsx` | `variant="contained"`, `fullWidth` |
| Verification → Tests | Run Tests | `TestsPanel.jsx` | `variant="contained"`, `size="small"`, `sx={{ mb: 1 }}` |

The Run Tests button is the established reference: it is `size="small"` and not full-width, sitting naturally at the top-left of its panel. The other two buttons span the full panel width, making them visually heavier and inconsistent.

## Goals / Non-Goals

**Goals:**
- Make Generate (SverilogPanel) and Synthesize (ReportPanel) visually match Run Tests
- Apply `size="small"` and `sx={{ mb: 1 }}` to both buttons
- Remove `fullWidth` from both buttons
- Ensure Tooltip wrapper `<span>` elements do not force full-width layout

**Non-Goals:**
- Changing button labels, colors, icons, or behavior
- Refactoring into a shared component — not warranted for three buttons
- Modifying any other buttons in the application
- Changes to `TestsPanel.jsx` (it is already correct)

## Decisions

### ① `size="small"` instead of default ("medium")

**Decision:** Use `size="small"` on Generate and Synthesize, matching Run Tests.

**Rationale:** Run Tests is the most recently designed of the three and represents the current design intent. Small buttons are more appropriate for compact panel toolbars. No MUI theme override is needed — the prop is applied inline.

**Alternatives considered:**
- Upgrade Run Tests to `size="medium"` — rejected; would make Tests panel feel heavier than its content warrants.
- Introduce a shared `PanelActionButton` wrapper — rejected; over-engineering for a three-line prop change.

### ② Remove `fullWidth` without replacement container

**Decision:** Simply drop `fullWidth`; do not add `width: '100%'` elsewhere.

**Rationale:** Panel action buttons should not dominate the full width. Natural left-aligned sizing is consistent with how toolbar buttons work in other parts of the UI.

**Tooltip wrapping:** The `<span style={{ display: 'block' }}>` wrappers that exist to allow Tooltip on a disabled button do not need `display: 'block'` anymore (that was needed to make the span full-width for the fullWidth button). They can remain as-is or be changed to `display: 'inline-block'` — either is fine; we will use `display: 'inline-block'` to be semantically consistent with the non-fullWidth button.

### ③ Add `sx={{ mb: 1 }}` for spacing below the button

**Decision:** Add `sx={{ mb: 1 }}` to match the margin Run Tests uses before its progress elements.

**Rationale:** Provides consistent spacing between the action button and the content below it in every panel.

## Risks / Trade-offs

- **Visual regression in other themes:** Low risk — only prop changes, no custom CSS.
- **Tooltip span display change:** Changing `display: 'block'` → `display: 'inline-block'` has no functional effect but is cosmetically cleaner. If anything breaks, reverting is a one-word change.
