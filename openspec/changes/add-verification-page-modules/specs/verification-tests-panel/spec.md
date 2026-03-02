## ADDED Requirements

### Requirement: Tests panel displays test case list
The Verification tab SHALL include a Tests panel that renders a scrollable list of test cases. Each test case entry SHALL display the test name and a status indicator.

#### Scenario: Test list renders with mocked data
- **WHEN** the user opens the Verification tab
- **THEN** the Tests panel SHALL be visible and expanded by default, showing at least one test case entry with a name and status icon

#### Scenario: Passed test case appearance
- **WHEN** a test case has status "pass"
- **THEN** its status indicator SHALL use a green check-circle icon (MUI `CheckCircleIcon` with `color="success"`)

#### Scenario: Failed test case appearance
- **WHEN** a test case has status "fail"
- **THEN** its status indicator SHALL use a red error icon (MUI `ErrorIcon` with `color="error"`)

#### Scenario: Pending test case appearance
- **WHEN** a test case has status "pending"
- **THEN** its status indicator SHALL use a grey hourglass icon (MUI `HourglassEmptyIcon` with `color="disabled"`)
