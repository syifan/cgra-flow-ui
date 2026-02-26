## ADDED Requirements

### Requirement: Chat interface layout
The AIAssistantPanel component SHALL provide a chat interface with a message display area and an input field.

#### Scenario: Display chat UI
- **WHEN** the "AI Assistant" tab is active
- **THEN** a chat interface is visible with a message area and input field at the bottom

### Requirement: Message input field
The AIAssistantPanel SHALL include a text input field for users to type messages.

#### Scenario: Input field present
- **WHEN** the AI Assistant panel is displayed
- **THEN** a text input field is available at the bottom of the panel

#### Scenario: Input placeholder
- **WHEN** the input field is empty and unfocused
- **THEN** it displays placeholder text: "Ask AI to help configure your CGRA..."

### Requirement: Send button
The AIAssistantPanel SHALL include a send button next to the input field.

#### Scenario: Send button visible
- **WHEN** the AI Assistant panel is displayed
- **THEN** a send button is visible next to the input field

### Requirement: Message display area
The AIAssistantPanel SHALL include a scrollable area for displaying messages.

#### Scenario: Message area present
- **WHEN** the AI Assistant panel is displayed
- **THEN** a scrollable message area occupies the main portion of the panel

#### Scenario: Empty state message
- **WHEN** no messages have been sent or received
- **THEN** a helpful message is displayed: "Chat with AI to get help configuring your CGRA architecture."

### Requirement: UI-only implementation
The AIAssistantPanel SHALL render the UI components without actual chat functionality (backend integration in future change).

#### Scenario: Send action placeholder
- **WHEN** user clicks the send button or presses Enter
- **THEN** the action is acknowledged (e.g., console log) but no actual message processing occurs
