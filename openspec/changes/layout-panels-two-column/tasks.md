## 1. Update LayoutTab.jsx

- [x] 1.1 Add `Grid` and `Divider` to the MUI imports in `src/workspace/LayoutTab.jsx`
- [x] 1.2 Replace the outer `Box` children with a `Grid container spacing={2} sx={{ height: '100%' }}` wrapper
- [x] 1.3 Move the "Report Area/Power" `Accordion` into a left `Grid size="grow" sx={{ height: '100%', overflow: 'auto' }}` column and remove `sx={{ mb: 2 }}` from the Accordion
- [x] 1.4 Add `<Divider orientation="vertical" flexItem />` between the two Grid columns
- [x] 1.5 Move the "Place and Route" `Paper` into a right `Grid size="grow" sx={{ height: '100%', overflow: 'auto' }}` column
- [x] 1.6 Update the outer `Box` padding/sizing to match the Verification tab (`p: 2, boxSizing: 'border-box'`)

## 2. Verify

- [x] 2.1 Visually confirm both panels render side by side with a vertical divider in the Layout tab
- [x] 2.2 Confirm each column scrolls independently when content overflows
- [x] 2.3 Confirm the Place and Route form controls (file inputs, process selector, Run button, result image) still function correctly
- [x] 2.4 Confirm the ReportPanel renders and behaves correctly in the left column
