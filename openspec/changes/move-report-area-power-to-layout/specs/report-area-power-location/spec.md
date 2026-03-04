## ADDED Requirements

### Requirement: Report Area/Power panel appears on Layout page
The Layout page SHALL display a "Report Area/Power" accordion panel above the "Place and Route" panel.

#### Scenario: Panel is visible on Layout tab
- **WHEN** the user navigates to the Layout tab
- **THEN** a "Report Area/Power" accordion is rendered above the "Place and Route" section

#### Scenario: Synthesize button is disabled before SVerilog succeeds
- **WHEN** the user opens the Layout tab before the SVerilog step has completed successfully in the current session
- **THEN** the Synthesize button inside the Report Area/Power panel SHALL be disabled

#### Scenario: Synthesize button is enabled after SVerilog succeeds
- **WHEN** the SVerilog generation step completes successfully in the current session
- **THEN** the Synthesize button inside the Report Area/Power panel on the Layout tab SHALL become enabled

## REMOVED Requirements

### Requirement: Report Area/Power panel on Verification page
**Reason**: Moved to Layout page to consolidate post-PnR feedback in one place.
**Migration**: Users should look for Report Area/Power on the Layout tab, above Place and Route.
