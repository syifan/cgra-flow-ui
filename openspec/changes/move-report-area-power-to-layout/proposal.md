## Why

The "Report Area/Power" panel lives on the Verification page today, but area/power results are produced by the place-and-route step and are directly relevant to the Layout workflow. Surfacing them on the Layout page—immediately above the Place and Route panel—reduces page-switching and keeps the synthesis-to-layout feedback loop in one place.

## What Changes

- Remove the "Report Area/Power" section (heading + `<ReportPanel>`) from `VerificationTab.jsx`.
- Add the same section to `LayoutTab.jsx`, positioned **above** the existing "Place and Route" section.
- No changes to `ReportPanel` component logic, props, or data sources.
- No changes to any backend, job processing, or API layer.

## Capabilities

### New Capabilities
<!-- None: this is a pure UI relocation with no new behavior -->

### Modified Capabilities
<!-- No spec-level behavior changes; only panel placement changes -->

## Impact

- **Modified files**: `src/workspace/VerificationTab.jsx`, `src/workspace/LayoutTab.jsx`
- **Unchanged**: `src/workspace/verification/ReportPanel.jsx` and all its dependencies
- **No breaking changes** to APIs, routing, or data flow
