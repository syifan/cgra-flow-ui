## Context

`LayoutTab.jsx` is currently a placeholder "Under Construction" screen with no functionality. The goal is to replace it with a working PnR configuration panel. The reference implementation lives in `CGRA-Flow-sample/mode_dark_light.py` (a Python/Gradio UI), which this panel mirrors in React/MUI.

A pre-computed result image (`CGRA-Flow-sample/layout/final_all.webp`) is available so PnR does not need to run in real time.

**Stakeholders**: CGRA designer users who want to see the layout result for a given process node and constraint files.

## Goals / Non-Goals

**Goals:**
- Replace the placeholder with a functional PnR configuration panel inside `LayoutTab.jsx`
- Provide file-path inputs for `constraint.sdc` and `config.mk`
- Provide a process node selector (`asap7`, `nangate45`, `sky130hd`)
- Simulate PnR execution: 1–2 s loading state, then display `final_all.webp`
- Match the visual style of the existing workspace UI (MUI components, existing theme)

**Non-Goals:**
- Actually invoking OpenROAD or any PnR tool
- Uploading or validating the selected files server-side
- Persisting the file paths or process selection across sessions
- Supporting additional process nodes beyond the three specified

## Decisions

### 1. Inline state management (no context/store)
All state (`sdcPath`, `mkPath`, `process`, `loading`, `showResult`) lives in local `useState` hooks inside `LayoutTab.jsx`.

**Rationale**: The panel is fully self-contained with no cross-component data needs. Lifting state or adding a context would add unnecessary complexity for a single-tab, single-image result.

**Alternative considered**: Zustand or React Context — rejected as overkill for local UI state.

---

### 2. File path as plain text field, not a native `<input type="file">`
Use an MUI `TextField` with a placeholder like `"/path/to/constraint.sdc"` rather than a real OS file picker. The web context runs against a remote CGRA tool server; a file path string is the correct input form (matching the Python Gradio reference), and the browser's `File` API would yield a `File` object rather than a usable server path.

**Alternative considered**: `<input type="file">` — rejected; returns a local file object, not a server-accessible path string.

---

### 3. Simulate delay with `setTimeout` (1.5 s)
On button click: set `loading = true`, after 1.5 s set `loading = false` and `showResult = true`.

**Rationale**: Simple, zero-dependency simulation that gives realistic visual feedback without mocking a network layer.

---

### 4. Static image import via Vite asset URL
The image `CGRA-Flow-sample/layout/final_all.webp` will be referenced via a relative import path in `LayoutTab.jsx`:

```js
import layoutImage from '../../CGRA-Flow-sample/layout/final_all.webp';
```

Vite handles static asset imports and returns the correct hashed URL in both dev and production builds.

**Alternative considered**: Put the image in `public/` and reference via absolute URL — possible, but importing keeps the asset co-located with the source reference and ensures build-time validation.

---

### 5. No new dependencies
All UI components are available from `@mui/material` (already in use): `TextField`, `Select`, `MenuItem`, `FormControl`, `InputLabel`, `Button`, `CircularProgress`, `Box`, `Typography`, `Paper`.

## Risks / Trade-offs

- **Image path coupling**: If `final_all.webp` is moved, the import in `LayoutTab.jsx` breaks at build time (auditable, not silent). → Mitigation: document the expected path in the task list.
- **No real validation**: File path fields accept any string; invalid paths are silently ignored since PnR is simulated. → Acceptable for the current scope; can add validation when real PnR is wired up.
- **Fixed 1.5 s delay**: May feel too fast or too slow depending on user expectations. → Value is easy to adjust; picked as a reasonable midpoint between 1 s and 2 s.
