## ADDED Requirements

### Requirement: Extract CGRA configuration from AI response

The system SHALL parse AI responses to extract structured CGRA configuration.

#### Scenario: Configuration JSON found
- **WHEN** AI response contains a JSON code block with configuration
- **THEN** system SHALL parse the JSON
- **AND** system SHALL extract high_performance, balanced, and low_power configurations

#### Scenario: No configuration in response
- **WHEN** AI response does not contain configuration JSON
- **THEN** system SHALL NOT enable "Apply AI-Generated CGRA Design" button

### Requirement: Validate configuration parameters

The system SHALL validate extracted configuration parameters against allowed ranges.

#### Scenario: Validate CGRA dimensions
- **WHEN** configuration contains cgra_rows or cgra_columns
- **THEN** system SHALL ensure values are between 2 and 8
- **AND** system SHALL auto-correct out-of-range values

#### Scenario: Validate memory sizes
- **WHEN** configuration contains configMemSize or data_spm_kb
- **THEN** system SHALL ensure values are valid powers of 2
- **AND** system SHALL round to nearest valid value

#### Scenario: Validate multi-CGRA dimensions
- **WHEN** configuration contains multi_cgra_rows or multi_cgra_columns
- **THEN** system SHALL ensure values are between 1 and 4

### Requirement: Apply configuration to architecture

The system SHALL apply AI-recommended configuration to the CGRA architecture state.

#### Scenario: Apply configuration mode selected
- **WHEN** user clicks "Apply AI-Generated CGRA Design" button
- **THEN** system SHALL show dialog with three mode options
- **AND** system SHALL enable buttons for available modes

#### Scenario: User selects configuration mode
- **WHEN** user selects a mode (High Performance, Balanced, Low Power)
- **THEN** system SHALL update architecture state with:
  - CGRA rows and columns
  - Multi-CGRA rows and columns
  - Config memory size
  - Data SPM size (converted to sramBanks)
- **AND** system SHALL trigger UI update
- **AND** system SHALL show success message in chat

### Requirement: Update PE functional units

The system SHALL update PE functional unit configuration based on AI recommendations.

#### Scenario: FU types specified in config
- **WHEN** AI configuration includes fu_types array
- **THEN** system SHALL update each PE's tileFunctionalUnits to match
- **AND** system SHALL set all FU types in the list to enabled

### Requirement: Configuration mode dialog

The system SHALL provide a dialog for users to select configuration mode.

#### Scenario: Dialog shows available modes
- **WHEN** user opens configuration mode dialog
- **THEN** system SHALL show three buttons:
  - "High Performance" (blue, #1565C0)
  - "Balanced" (orange, #F57C00)
  - "Low Power" (green, #2E7D32)
- **AND** system SHALL disable buttons for modes without configuration

#### Scenario: Cancel configuration
- **WHEN** user clicks Cancel in configuration dialog
- **THEN** system SHALL close the dialog without applying changes
