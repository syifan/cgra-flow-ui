## 1. Implementation

- [x] 1.1 In `src/workspace/VerificationTab.jsx`, replace the `Accordion`/`AccordionSummary`/`AccordionDetails` imports with MUI `Grid2` (keep `Box` and `Typography`)
- [x] 1.2 Remove the two `Accordion` blocks and replace the root `Box` content with a `Grid2` container (`container`, `spacing={2}`, `sx={{ height: '100%' }}`)
- [x] 1.3 Wrap `<TestsPanel>` in a `Grid2` item (`size={6}`, `sx={{ height: '100%', overflow: 'auto' }}`) with a bold "Tests" `Typography` header above it
- [x] 1.4 Wrap `<SverilogPanel>` in a `Grid2` item (`size={6}`, `sx={{ height: '100%', overflow: 'auto' }}`) with a bold "SVerilog" `Typography` header above it
- [x] 1.5 Verify unused imports (`Accordion`, `AccordionDetails`, `AccordionSummary`, `ExpandMoreIcon`) are removed

## 2. Verification

- [x] 2.1 Run the dev server and open the Verification tab — confirm both panels appear side-by-side without scrolling the tab
- [x] 2.2 Confirm "Tests" and "SVerilog" headings are visible and bold in their respective columns
- [x] 2.3 Confirm each column scrolls independently when content overflows
- [x] 2.4 Run `npm run build` and confirm no TypeScript/lint errors related to the changed file
