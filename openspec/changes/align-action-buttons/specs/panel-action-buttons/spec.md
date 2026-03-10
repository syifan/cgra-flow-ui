## ADDED Requirements

### Requirement: Panel action buttons use small size
Primary action buttons in workspace panels (Generate, Synthesize, Run Tests) SHALL use MUI `size="small"` so that all panel-level action buttons have a uniform compact appearance.

#### Scenario: Generate button is small
- **WHEN** the Verification → SVerilog panel renders
- **THEN** the "Generate" button SHALL have `size="small"` applied

#### Scenario: Synthesize button is small
- **WHEN** the Layout → Report Area/Power panel renders
- **THEN** the "Synthesize" button SHALL have `size="small"` applied

#### Scenario: Run Tests button is small
- **WHEN** the Verification → Tests panel renders
- **THEN** the "Run Tests" button SHALL have `size="small"` applied

### Requirement: Panel action buttons are not full-width
Primary action buttons in workspace panels SHALL NOT use `fullWidth`, so they are left-aligned and sized to their content rather than spanning the entire panel width.

#### Scenario: Generate button is not full-width
- **WHEN** the Verification → SVerilog panel renders
- **THEN** the "Generate" button SHALL NOT span the full panel width

#### Scenario: Synthesize button is not full-width
- **WHEN** the Layout → Report Area/Power panel renders
- **THEN** the "Synthesize" button SHALL NOT span the full panel width

### Requirement: Panel action buttons have bottom margin
Primary action buttons in workspace panels SHALL have a bottom margin of 1 spacing unit (`mb: 1`) to provide consistent separation from the content below them.

#### Scenario: Generate button has bottom margin
- **WHEN** the Verification → SVerilog panel renders
- **THEN** the "Generate" button SHALL have `mb: 1` spacing below it

#### Scenario: Synthesize button has bottom margin
- **WHEN** the Layout → Report Area/Power panel renders
- **THEN** the "Synthesize" button SHALL have `mb: 1` spacing below it

### Requirement: Tooltip wrapper does not force full width
When a panel action button is wrapped in a `<span>` to enable Tooltip on a disabled button, the span SHALL use `display: 'inline-block'` (not `display: 'block'`) so it does not extend to full panel width.

#### Scenario: Generate button tooltip span is inline-block
- **WHEN** the Verification → SVerilog panel renders a disabled Generate button with a Tooltip
- **THEN** the wrapping `<span>` SHALL have `display: 'inline-block'`

#### Scenario: Synthesize button tooltip span is inline-block
- **WHEN** the Layout → Report Area/Power panel renders a Synthesize button wrapped in a Tooltip span
- **THEN** the wrapping `<span>` SHALL have `display: 'inline-block'`
