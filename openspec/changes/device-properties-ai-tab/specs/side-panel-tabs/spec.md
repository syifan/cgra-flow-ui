## ADDED Requirements

### Requirement: Tabbed interface in right panel
The SidePanel component SHALL provide a tabbed interface with two tabs: "Manual" and "AI Assistant".

#### Scenario: Display tabs
- **WHEN** the DesignTab renders the right panel
- **THEN** the SidePanel displays two selectable tabs labeled "Manual" and "AI Assistant"

#### Scenario: Default tab selection
- **WHEN** the SidePanel is initially rendered
- **THEN** the "Manual" tab is active by default

#### Scenario: Tab switching
- **WHEN** user clicks on the "AI Assistant" tab
- **THEN** the AI Assistant panel is displayed

#### Scenario: Return to manual tab
- **WHEN** user clicks on the "Manual" tab
- **THEN** the PropertyInspector is displayed

### Requirement: Manual tab content
The "Manual" tab SHALL display the PropertyInspector component with all its existing functionality.

#### Scenario: PropertyInspector rendered
- **WHEN** the "Manual" tab is active
- **THEN** PropertyInspector receives all props from DesignTab (architecture, selection, onPropertyChange, disabled)

### Requirement: Tab styling consistency
The tabs SHALL use MUI Tabs component with consistent dark theme styling matching the application.

#### Scenario: Visual consistency
- **WHEN** tabs are rendered
- **THEN** they use the application's theme colors and typography
