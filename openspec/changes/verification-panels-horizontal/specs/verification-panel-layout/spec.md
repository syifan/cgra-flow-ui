## ADDED Requirements

### Requirement: Two-column horizontal layout
The Verification tab SHALL render the Tests panel and the SVerilog panel side-by-side in two equal-width columns within a single row, replacing the previous vertically-stacked accordion layout.

#### Scenario: Both panels visible without scrolling the tab
- **WHEN** the user opens the Verification tab
- **THEN** both the Tests panel and the SVerilog panel are visible simultaneously without requiring any expand/collapse action

#### Scenario: Equal column widths
- **WHEN** the Verification tab renders at any supported width
- **THEN** the Tests column and the SVerilog column each occupy 50% of the available tab width

### Requirement: Panel headers always shown
Each column SHALL display a bold section header ("Tests" and "SVerilog" respectively) that is always visible, independent of any expand/collapse control.

#### Scenario: Tests header visible
- **WHEN** the Verification tab is rendered
- **THEN** a bold "Tests" heading is visible at the top of the left column

#### Scenario: SVerilog header visible
- **WHEN** the Verification tab is rendered
- **THEN** a bold "SVerilog" heading is visible at the top of the right column

### Requirement: Independent column scrolling
Each column SHALL scroll independently when its content overflows the available height, without causing the other column to scroll.

#### Scenario: Tests panel content overflow
- **WHEN** the Tests panel content exceeds the column height
- **THEN** a scrollbar appears within the left column only, and the right column remains unaffected

#### Scenario: SVerilog panel content overflow
- **WHEN** the SVerilog panel content exceeds the column height
- **THEN** a scrollbar appears within the right column only, and the left column remains unaffected

### Requirement: Full tab height utilization
The two-column layout SHALL fill the full height of the Verification tab container so that each column can use the maximum available vertical space.

#### Scenario: Columns fill tab height
- **WHEN** the Verification tab is open
- **THEN** both columns extend to the full height of the tab content area
