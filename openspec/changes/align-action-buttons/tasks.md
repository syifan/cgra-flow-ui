## 1. SverilogPanel — Generate Button

- [x] 1.1 In `src/workspace/verification/SverilogPanel.jsx`, remove the `fullWidth` prop from the `<Button>` for "Generate"
- [x] 1.2 Add `size="small"` to that `<Button>`
- [x] 1.3 Add `sx={{ mb: 1 }}` to that `<Button>`
- [x] 1.4 Change the wrapping `<span style={{ display: 'block' }}>` to `<span style={{ display: 'inline-block' }}>`

## 2. ReportPanel — Synthesize Button

- [x] 2.1 In `src/workspace/verification/ReportPanel.jsx`, remove the `fullWidth` prop from the `synthesizeButton` `<Button>`
- [x] 2.2 Add `size="small"` to that `<Button>`
- [x] 2.3 Add `sx={{ mb: 1 }}` to that `<Button>`
- [x] 2.4 Change the wrapping `<span style={{ display: 'block' }}>` (inside the Tooltip) to `<span style={{ display: 'inline-block' }}>`

## 3. Verification

- [x] 3.1 Visually confirm all three buttons (Generate, Synthesize, Run Tests) render at the same compact size and are left-aligned in their panels
- [x] 3.2 Verify the Tooltip still appears correctly on a disabled Generate button
- [x] 3.3 Verify the Tooltip still appears correctly on the Synthesize button when SVerilog is not yet generated
