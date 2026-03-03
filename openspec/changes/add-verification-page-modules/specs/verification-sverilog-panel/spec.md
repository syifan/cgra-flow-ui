## ADDED Requirements

### Requirement: SVerilog panel displays generated SystemVerilog source
The Verification tab SHALL include an SVerilog panel that renders the generated SystemVerilog source code in a read-only, scrollable, monospace code viewer.

#### Scenario: SVerilog panel is visible on the Verification tab
- **WHEN** the user opens the Verification tab
- **THEN** the SVerilog panel SHALL be present as a collapsible accordion section with the title "SVerilog"

#### Scenario: Code is displayed in monospace font with dark background
- **WHEN** the SVerilog panel is expanded
- **THEN** the code content SHALL be rendered in a monospace font inside a dark-background scrollable container

#### Scenario: Code is read-only
- **WHEN** the user attempts to interact with the code viewer
- **THEN** the content SHALL NOT be editable (rendered as `<pre>` or equivalent non-editable element)

#### Scenario: Long source scrolls vertically
- **WHEN** the SVerilog content exceeds the panel's visible height
- **THEN** a vertical scrollbar SHALL appear and the content SHALL be fully accessible by scrolling
