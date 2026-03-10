## Context

`VerificationTab.jsx` currently renders two MUI `Accordion` components stacked vertically:

1. **Tests** (expanded by default) — wraps `<TestsPanel>`
2. **SVerilog** (collapsed by default) — wraps `<SverilogPanel>`

The accordion pattern was reasonable when content was minimal, but as both panels have grown in height, users must scroll and independently expand/collapse accordions to see both. The tab has enough horizontal real estate for a side-by-side layout.

## Goals / Non-Goals

**Goals:**
- Render Tests and SVerilog panels in two equal columns on the same row
- Both panels always visible (no expand/collapse required to see content)
- Each column scrolls independently if its content overflows
- Single-file change — only `VerificationTab.jsx` needs modification

**Non-Goals:**
- Changing internal layout or logic of `TestsPanel` or `SverilogPanel`
- Responsive breakpoint handling (narrow-screen / mobile view)
- Persisting panel width preferences
- Any visual resizing / dragging between columns

## Decisions

### Decision 1: MUI `Grid2` over `Box` with flexbox

**Chosen:** MUI `Grid2` (the v2 Grid released in MUI 7.x) with `size={6}` on each column.

**Rationale:** `Grid2` expresses two equal columns declaratively, matches the project's MUI-first styling convention, and automatically handles the gutter between columns via the `spacing` prop.

**Alternatives considered:**
- Plain `Box` with `display: flex` / `flexDirection: row` — works but requires manual width calculation (`width: '50%'`) and gap management.
- CSS Grid via `sx={{ display: 'grid', gridTemplateColumns: '1fr 1fr' }}` — equally valid but adds unfamiliar syntax for a purely MUI codebase.

### Decision 2: Remove Accordion, use titled `Box` panels

**Chosen:** Replace each `Accordion` with a `Box` that has a bold `Typography` header and the panel content directly below.

**Rationale:** The accordion collapse action loses value in a side-by-side layout where vertical space is no longer the constraint. Keeping accordions would add unnecessary interaction complexity and visual chrome for no benefit.

**Alternative considered:** Retaining accordions inside each column — rejected because the expand/collapse toggle conflicts with the goal of both panels always being visible.

### Decision 3: Column height = full tab height, overflow handled per column

**Chosen:** The outer `Grid2` container uses `height: '100%'` and each column item uses `height: '100%'` with `overflow: 'auto'`.

**Rationale:** Allows each panel to scroll independently, consistent with how other tabs (e.g. LayoutTab) handle overflow.

## Risks / Trade-offs

- **TestsPanel or SverilogPanel have hardcoded min-widths** → If either child panel has width constraints that break below ~50% of the tab width, it will need its own fix. Low probability based on current code inspection.
- **Accordion headers removed** → Users accustomed to the collapsed SVerilog panel will now always see it. This is an intentional UX improvement but may require communication.
