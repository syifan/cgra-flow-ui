## 1. Asset Preparation

- [x] 1.1 Verify `CGRA-Flow-sample/layout/final_all.webp` exists and is accessible from the project root
- [x] 1.2 Confirm Vite can resolve the relative import path `../../CGRA-Flow-sample/layout/final_all.webp` from `src/workspace/LayoutTab.jsx` (check `vite.config.js` for any `assetsInclude` or `publicDir` overrides if needed)

## 2. LayoutTab Rewrite

- [x] 2.1 Remove the existing "Under Construction" placeholder content from `src/workspace/LayoutTab.jsx`
- [x] 2.2 Add `useState` hooks for `sdcPath` (string), `mkPath` (string), `process` (string, default `"asap7"`), `loading` (boolean), and `showResult` (boolean)
- [x] 2.3 Import `final_all.webp` as a static asset: `import layoutImage from '../../CGRA-Flow-sample/layout/final_all.webp'`
- [x] 2.4 Add the MUI imports needed: `TextField`, `Select`, `MenuItem`, `FormControl`, `InputLabel`, `Button`, `CircularProgress`, `Paper`, `Divider`

## 3. Input Controls UI

- [x] 3.1 Add a `TextField` for the SDC file path, label `"Constraint (constraint.sdc)"`, full-width, bound to `sdcPath` state
- [x] 3.2 Add a `TextField` for the config file path, label `"Config (config.mk)"`, full-width, bound to `mkPath` state
- [x] 3.3 Add a `FormControl` + `Select` for process node with `InputLabel` `"Process"` and `MenuItem` options for `asap7`, `nangate45`, `sky130hd`, bound to `process` state

## 4. RTL → Layout Button and Simulation

- [x] 4.1 Add a `Button` labelled `"RTL → Layout"` (variant `contained`) that is disabled while `loading` is `true`
- [x] 4.2 Implement the click handler: set `loading = true`, `showResult = false`; after 1500 ms set `loading = false`, `showResult = true`
- [x] 4.3 Show a `CircularProgress` spinner adjacent to or inside the button while `loading` is `true`

## 5. Result Image Display

- [x] 5.1 Conditionally render an `<img>` (or MUI `Box` as `"img"`) with `src={layoutImage}` when `showResult` is `true`
- [x] 5.2 Set the image to `width: "100%"` and `maxWidth` suitable for the panel to prevent overflow
- [x] 5.3 Add a section label (e.g., `Typography` with `"Layout Result"`) above the image for clarity

## 6. Layout and Polish

- [x] 6.1 Wrap all controls in a `Paper` or `Box` with appropriate padding (`p: 2` or `p: 3`) and a vertical `gap` between fields
- [x] 6.2 Ensure the button row aligns left and the loading spinner is visually associated with the button
- [x] 6.3 Verify the panel scrolls correctly if the result image makes the tab content taller than the viewport
