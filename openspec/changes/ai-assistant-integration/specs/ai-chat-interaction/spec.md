## ADDED Requirements

### Requirement: Send chat message

The system SHALL allow users to send messages to the AI assistant.

#### Scenario: User sends message
- **WHEN** user types a message and clicks Send (or presses Enter)
- **THEN** system SHALL add user message to chat history
- **AND** system SHALL clear the input field
- **AND** system SHALL show "Thinking..." indicator
- **AND** system SHALL call AI API

#### Scenario: Empty message
- **WHEN** user tries to send empty message
- **THEN** system SHALL NOT send the message

### Requirement: Display chat messages

The system SHALL display conversation history with clear user/AI distinction.

#### Scenario: User message display
- **WHEN** user message is added to history
- **THEN** system SHALL display it with user styling (right-aligned, primary color)

#### Scenario: AI message display
- **WHEN** AI response is received
- **THEN** system SHALL display it with AI styling (left-aligned, neutral color)
- **AND** system SHALL remove "Thinking..." indicator

### Requirement: Clear chat history

The system SHALL allow users to clear the chat history.

#### Scenario: Clear button clicked
- **WHEN** user clicks the Clear button
- **THEN** system SHALL clear all messages from display
- **AND** system SHALL clear chat history sent to API

### Requirement: Maintain chat history for context

The system SHALL maintain chat history for API context within a session.

#### Scenario: Chat history in API call
- **WHEN** user sends a new message
- **THEN** system SHALL include previous messages in the API request
- **AND** system SHALL NOT persist chat history across page reloads

### Requirement: Kernel description dialog

The system SHALL provide a dialog for users to describe their kernel/application.

#### Scenario: Generate CGRA from Kernel button clicked
- **WHEN** user clicks "Generate CGRA from Given Kernel" button
- **THEN** system SHALL show a dialog asking for kernel description
- **AND** system SHALL prompt user to describe application/kernel

#### Scenario: User submits kernel description
- **WHEN** user enters kernel description and confirms
- **THEN** system SHALL format a prompt asking AI to recommend CGRA parameters
- **AND** system SHALL send the prompt to AI

### Requirement: Mapping analysis

The system SHALL allow users to request AI analysis of current mapping results.

#### Scenario: Analyze Mapping Report button clicked
- **WHEN** user clicks "Analyze CGRA Mapping Report" button
- **AND** no mapping has been done
- **THEN** system SHALL show info message "Please first complete compilation and mapping"

#### Scenario: Mapping analysis with results
- **WHEN** user clicks "Analyze CGRA Mapping Report" button
- **AND** mapping results exist
- **THEN** system SHALL gather current configuration and mapping metrics
- **AND** system SHALL send analysis request to AI
