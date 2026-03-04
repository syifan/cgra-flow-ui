## Context

`ReportPanel` is currently rendered inside `VerificationTab` as the third accordion section. It receives two props:

| Prop | Source |
|---|---|
| `projectId` | Passed from `Workspace.jsx` → `VerificationTab` |
| `sverilogReady` | Local `sverilogDone` state in `VerificationTab`, set to `true` when `SverilogPanel` fires `onSverilogSuccess` |

`LayoutTab` currently receives **no props** from `Workspace.jsx`. The target position is above the existing "Place and Route" `<Paper>` block.

## Goals / Non-Goals

**Goals:**
- Render the "Report Area/Power" accordion in `LayoutTab`, above "Place and Route"
- Preserve the `sverilogReady` gating behavior (Synthesize button disabled until SVerilog step succeeds)
- Pass `projectId` to `LayoutTab` so `ReportPanel` can use it

**Non-Goals:**
- Modifying `ReportPanel` internals
- Changing the SVerilog workflow or when `sverilogReady` becomes `true`
- Any backend, job, or API changes

## Decisions

### 1. Lift `sverilogDone` state to `Workspace.jsx`

**Decision:** Move the `sverilogDone` state and `handleSverilogSuccess` callback from `VerificationTab` up to `Workspace.jsx`. Pass the boolean down to `LayoutTab` and the setter callback down to `VerificationTab`.

**Alternatives considered:**
- *Keep state in `VerificationTab`, duplicate in `LayoutTab`*: The two booleans would diverge — no shared truth.
- *React Context*: Heavier solution than needed for a single boolean shared between two siblings; state lifting is simpler and more explicit here.

**Rationale:** `Workspace.jsx` already owns `projectId`, `architecture`, and other cross-tab state. One additional boolean is consistent with that pattern.

### 2. Pass `projectId` to `LayoutTab`

**Decision:** Update the `<LayoutTab />` render call in `Workspace.jsx` to pass `projectId`, and add `projectId` to `LayoutTab`'s props and `PropTypes`.

**Rationale:** `LayoutTab` will host `ReportPanel`, which needs `projectId` to fetch/submit synthesis jobs.

### 3. Panel position in `LayoutTab`

**Decision:** Add the accordion as a standalone `<Accordion>` rendered **before** the existing `<Paper>` (Place and Route section), wrapped in the same root `<Box>`.

**Rationale:** Matches the request ("above Place and Route") and keeps the same MUI `Accordion` pattern used in `VerificationTab` for visual consistency.

## Risks / Trade-offs

- **Cross-session state reset**: `sverilogDone` is session-level memory (not persisted). Refreshing the page resets it to `false`, re-disabling the Synthesize button. This is the existing behavior and is unchanged.
- **`sverilogReady` always false on first load**: Users landing on Layout before ever visiting Verification will see the Synthesize button disabled. This is correct behavior — SVerilog must succeed first. No change in semantics.

## Migration Plan

1. In `Workspace.jsx`: add `const [sverilogDone, setSverilogDone] = useState(false)` and pass props to both tabs.
2. In `VerificationTab.jsx`: remove local `sverilogDone` state; accept `onSverilogSuccess` as a prop.
3. In `LayoutTab.jsx`: accept `projectId` and `sverilogReady` props; add the `ReportPanel` import and accordion block above the `<Paper>`.
4. In `VerificationTab.jsx`: remove the Report Area/Power `<Accordion>` block and the `ReportPanel` import (if no longer used there).

No rollback risk — all changes are isolated to three component files with no API or data model impact.
