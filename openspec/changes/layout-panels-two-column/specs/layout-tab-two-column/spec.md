## ADDED Requirements

### Requirement: Layout tab displays two panels side by side
The Layout tab SHALL render "Report Area/Power" and "Place and Route" in a two-column horizontal layout, with each column occupying equal width (50%) of the available space.

#### Scenario: Both panels visible simultaneously
- **WHEN** the user navigates to the Layout tab
- **THEN** "Report Area/Power" SHALL appear in the left column and "Place and Route" SHALL appear in the right column, both visible without any vertical scrolling of the tab container

#### Scenario: Independent column scrolling
- **WHEN** the content of either panel exceeds the column height
- **THEN** that column SHALL scroll independently without affecting the other column

### Requirement: Vertical divider separates the two columns
The Layout tab SHALL render a vertical `Divider` between the left and right columns, visually consistent with the divider used in the Verification tab.

#### Scenario: Divider rendered between columns
- **WHEN** the Layout tab is displayed
- **THEN** a vertical line SHALL appear between the "Report Area/Power" column and the "Place and Route" column

### Requirement: Panel content and functionality are unchanged
The two-column layout SHALL not alter the content, behavior, or props of the "Report Area/Power" panel (Accordion + ReportPanel) or the "Place and Route" panel (form controls, file inputs, Run button, and result image).

#### Scenario: Report Area/Power panel functions correctly
- **WHEN** the Layout tab is displayed in two-column mode
- **THEN** the ReportPanel SHALL render and behave identically to its previous single-column behavior

#### Scenario: Place and Route panel functions correctly
- **WHEN** the user interacts with the Place and Route form (file inputs, process selector, Run button)
- **THEN** all controls SHALL respond and the result image SHALL display as before
