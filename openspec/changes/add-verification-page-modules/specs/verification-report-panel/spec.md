## ADDED Requirements

### Requirement: Report panel displays area and power metrics
The Verification tab SHALL include a Report Area/Power panel that presents CGRA area and power metrics in a structured table layout.

#### Scenario: Report panel is visible on the Verification tab
- **WHEN** the user opens the Verification tab
- **THEN** the Report Area/Power panel SHALL be present as a collapsible accordion section with the title "Report Area/Power"

#### Scenario: Metrics table renders rows for area and power
- **WHEN** the Report panel is expanded
- **THEN** the panel SHALL display a table with at least the following metric rows: Total Area, Cell Area, Net Area, Total Power, Dynamic Power, and Leakage Power

#### Scenario: Each metric row shows a name and value
- **WHEN** a metric row is rendered
- **THEN** it SHALL display the metric name in the first column and the metric value (with unit, e.g. "µm²" or "mW") in the second column

#### Scenario: Mocked data is shown when no real report is available
- **WHEN** the Verification tab is opened without a completed synthesis run
- **THEN** the Report panel SHALL still render with placeholder/mocked values rather than showing an error or empty state
