## Context

`VerificationTab.jsx` currently renders a static "Under Construction" placeholder. The verification stage is the final step in the CGRA workflow (after Design → Mapping), and users expect to review test results, inspect generated SVerilog, and examine area/power data there. This change delivers the UI scaffold for those three panels, with mocked/static data, so the layout and interaction patterns are established before backend integration.

The project uses React 19 + MUI 7 with a tab-panel architecture. Other tabs (`MappingTab.jsx`, `DesignTab.jsx`) use a combination of MUI `Box`, `Paper`, `Typography`, and layout components — the same patterns apply here.

## Goals / Non-Goals

**Goals:**
- Replace the placeholder in `VerificationTab.jsx` with a three-panel layout
- Implement `TestsPanel`: list of test cases with status icons (pass/fail/pending)
- Implement `SverilogPanel`: read-only code viewer for SystemVerilog source
- Implement `ReportPanel`: area and power metrics in a structured table/card
- Use mocked static data for all panels (no API calls)
- Follow existing MUI + functional-component conventions

**Non-Goals:**
- Backend integration or real data fetching
- Running actual tests from the UI
- Editing or downloading SVerilog source
- Exporting report data
- Playwright E2E tests for this change (UI-only, no functional behavior)

## Decisions

### Decision: Separate sub-components vs. inline in VerificationTab

**Choice**: Extract each panel into its own file under `src/workspace/verification/`.

**Rationale**: `MappingTab.jsx` is 400+ lines and already complex with inline sub-sections. Keeping each panel in its own file (`TestsPanel.jsx`, `SverilogPanel.jsx`, `ReportPanel.jsx`) makes future backend wiring straightforward — each file has a clear responsibility and a single import point. The change stays small and reviewable.

**Alternative considered**: Inline everything in `VerificationTab.jsx`. Rejected because it creates a monolithic file and makes incremental backend addition harder.

### Decision: Layout — vertical stack of collapsible panels

**Choice**: Use MUI `Accordion` components stacked vertically, one per panel, with the first panel (`Tests`) expanded by default.

**Rationale**: Three peer panels compete for vertical space. Accordions let the user focus on one panel at a time without scrolling. This mirrors patterns used in common IDEs and the existing Property Inspector sidebar. MUI `Accordion` is already available in the dependency set.

**Alternative considered**: Fixed 3-column horizontal split. Rejected because SVerilog code and test lists are both tall content that reads poorly in narrow columns on typical monitor widths.

### Decision: SVerilog display — `<pre>` / monospace box, no syntax highlighter library

**Choice**: Render SVerilog inside a scrollable MUI `Box` with `fontFamily: 'monospace'` styling and a dark background, with no third-party syntax highlighter.

**Rationale**: Adding a syntax-highlighting library (e.g., `react-syntax-highlighter`, `shiki`) is a new dependency that requires team review. Since this is a UI-scaffold change with mocked data, a styled `<pre>` block is sufficient to validate the layout without dependency risk.

**Alternative considered**: `react-syntax-highlighter`. Deferred to a future backend-integration change.

### Decision: Mocked data co-located in each panel component

**Choice**: Each panel defines its own `MOCK_*` constant at the top of its file.

**Rationale**: Keeps the mock easy to locate and replace when real data arrives. The mock shapes the component's prop interface, so when a parent passes real data the panel just needs a `data` prop swap.

## Risks / Trade-offs

- **Risk**: Accordion default-expand behaviour may feel unexpected if users expect all panels visible at once. → **Mitigation**: Default-expand "Tests" only; document in the component JSDoc that the expand state is uncontrolled and can be made controlled when data is wired up.
- **Risk**: Monospace box without line numbers may be hard to navigate for long SVerilog files. → **Mitigation**: Acceptable for the mocked-data phase; add line numbers when real output is integrated.
- **Trade-off**: Three new files adds a small directory to maintain, but the isolation benefit outweighs the overhead.

## Migration Plan

1. Create `src/workspace/verification/` directory
2. Create `TestsPanel.jsx`, `SverilogPanel.jsx`, `ReportPanel.jsx` with mocked data
3. Update `VerificationTab.jsx` to import and render all three panels inside MUI Accordions
4. Verify visually via `npm run dev`
5. No rollback concern — change is additive, placeholder is trivially restorable
