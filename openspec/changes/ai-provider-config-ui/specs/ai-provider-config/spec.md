## ADDED Requirements

### Requirement: User can select AI provider
The system SHALL provide a dropdown selector for choosing an AI provider from the following options: OpenAI, Gemini, Qwen, DeepSeek.

#### Scenario: Default provider selection
- **WHEN** the AI Assistant panel is first opened
- **THEN** the provider dropdown SHALL default to "OpenAI"

#### Scenario: Provider selection changes available models
- **WHEN** user selects a different provider from the dropdown
- **THEN** the model dropdown SHALL update to show only models for that provider

### Requirement: User can enter API key
The system SHALL provide a password-type input field for entering the API key for the selected provider.

#### Scenario: API key input is masked
- **WHEN** user types in the API key field
- **THEN** the input SHALL be masked by default

#### Scenario: API key visibility toggle
- **WHEN** user clicks the visibility toggle icon
- **THEN** the API key SHALL be displayed in plain text

### Requirement: User can select model
The system SHALL provide a dropdown selector for choosing a model from the selected provider's available models.

#### Scenario: Model selection defaults
- **WHEN** user selects a provider
- **THEN** the model dropdown SHALL default to the provider's recommended model:
  - OpenAI: "gpt-4o-mini"
  - Gemini: "gemini-2.0-flash"
  - Qwen: "qwen-plus"
  - DeepSeek: "deepseek-chat"

#### Scenario: Model list per provider
- **WHEN** user views the model dropdown
- **THEN** the available models SHALL be:
  - OpenAI: gpt-4o, gpt-4o-mini, gpt-4-turbo, gpt-3.5-turbo
  - Gemini: gemini-2.0-flash, gemini-1.5-flash, gemini-1.5-pro
  - Qwen: qwen-plus, qwen-turbo, qwen-max, qwen-long
  - DeepSeek: deepseek-chat, deepseek-reasoner

### Requirement: User can select configuration mode
The system SHALL provide a toggle group for selecting configuration optimization mode from three options: High Performance, Balanced, Low Power.

#### Scenario: Default configuration mode
- **WHEN** the AI Assistant panel is first opened
- **THEN** the configuration mode SHALL default to "Balanced"

#### Scenario: Configuration mode selection
- **WHEN** user selects a different configuration mode
- **THEN** the selected mode SHALL be visually highlighted

### Requirement: User can clear chat input
The system SHALL provide a Clear button to clear the text input field.

#### Scenario: Clear button clears input
- **WHEN** user clicks the Clear button
- **THEN** the chat input field SHALL be cleared

#### Scenario: Clear button disabled when empty
- **WHEN** the chat input field is empty
- **THEN** the Clear button SHALL be disabled
