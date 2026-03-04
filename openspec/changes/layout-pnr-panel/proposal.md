## Why

The Layout tab currently has no UI for configuring or triggering a Place-and-Route (PnR) flow. Users need a self-contained panel that lets them select input files and a target process node, then see the resulting layout image — mirroring the workflow shown in `CGRA-Flow-sample/mode_dark_light.py`.

## What Changes

- Add a **Layout Panel** section inside the existing `LayoutTab.jsx` with:
  - A file-picker / text field for `constraint.sdc`
  - A file-picker / text field for `config.mk`
  - A dropdown to select the process node (`asap7`, `nangate45`, `sky130hd`)
  - An **"RTL → Layout"** button that simulates triggering PnR
- After the button is clicked: show a 1–2 s loading state, then render the pre-computed layout image (`CGRA-Flow-sample/layout/final_all.webp`) below the controls
- No real PnR process is invoked; the image is served as a static asset

## Capabilities

### New Capabilities

- `layout-pnr-panel`: Input controls (sdc file, mk file, process dropdown) and result image display for the Layout tab PnR workflow

### Modified Capabilities

_(none — no existing spec-level requirements are changing)_

## Impact

- **Files modified**: `src/workspace/LayoutTab.jsx`
- **Static asset**: `CGRA-Flow-sample/layout/final_all.webp` must be accessible at runtime (served via Vite's static asset handling or imported directly)
- **Dependencies**: No new packages required; uses existing MUI components (`Button`, `TextField`, `Select`, `MenuItem`, `CircularProgress`, `Box`)
- **No API changes, no database changes, no breaking changes**
