## ADDED Requirements

### Requirement: SDC file path input
The Layout tab SHALL display a text field labelled "Constraint (constraint.sdc)" that accepts a file path string for the timing constraint file.

#### Scenario: Field is empty on initial load
- **WHEN** the user opens the Layout tab
- **THEN** the SDC file path field is empty

#### Scenario: User enters a file path
- **WHEN** the user types a path into the SDC field
- **THEN** the field displays the typed path as its value

---

### Requirement: Config file path input
The Layout tab SHALL display a text field labelled "Config (config.mk)" that accepts a file path string for the build configuration file.

#### Scenario: Field is empty on initial load
- **WHEN** the user opens the Layout tab
- **THEN** the config file path field is empty

#### Scenario: User enters a file path
- **WHEN** the user types a path into the config field
- **THEN** the field displays the typed path as its value

---

### Requirement: Process node selector
The Layout tab SHALL display a dropdown selector labelled "Process" with exactly three options: `asap7`, `nangate45`, `sky130hd`.

#### Scenario: Default selection
- **WHEN** the user opens the Layout tab
- **THEN** one of the three process options is selected by default (recommended: `asap7`)

#### Scenario: User changes process
- **WHEN** the user selects a different process from the dropdown
- **THEN** the dropdown reflects the newly selected value

---

### Requirement: RTL → Layout trigger button
The Layout tab SHALL display a button labelled "RTL → Layout" that initiates the simulated Place-and-Route flow.

#### Scenario: Button is enabled by default
- **WHEN** the user opens the Layout tab
- **THEN** the "RTL → Layout" button is enabled and clickable

#### Scenario: Loading state on click
- **WHEN** the user clicks "RTL → Layout"
- **THEN** the button becomes disabled and a loading indicator (spinner) is shown for approximately 1–2 seconds

---

### Requirement: Layout result image display
After the simulated PnR completes, the Layout tab SHALL display the pre-computed layout image (`final_all.webp`) below the input controls.

#### Scenario: Image appears after loading
- **WHEN** the 1–2 s loading period ends
- **THEN** the loading indicator is hidden, the button re-enables, and the layout result image is rendered below the controls

#### Scenario: Image is not shown before running
- **WHEN** the user has not yet clicked "RTL → Layout"
- **THEN** no result image is displayed

#### Scenario: Running again replaces the result
- **WHEN** the user clicks "RTL → Layout" a second time after a result is already showing
- **THEN** the existing image is hidden, the loading state is shown again, and the image reappears after the delay
