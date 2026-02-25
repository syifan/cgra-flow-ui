## ADDED Requirements

### Requirement: Support multiple AI providers

The system SHALL support calling AI APIs from multiple providers: OpenAI, Gemini, Qwen, and DeepSeek.

#### Scenario: User selects different provider
- **WHEN** user selects a provider from the dropdown
- **THEN** system SHALL update the API endpoint and available models for that provider

#### Scenario: Provider API configuration
- **WHEN** system initializes AI provider configuration
- **THEN** system SHALL use the following endpoints:
  - OpenAI: `https://api.openai.com/v1/chat/completions`
  - Gemini: `https://generativelanguage.googleapis.com/v1beta/openai/chat/completions`
  - Qwen: `https://dashscope.aliyuncs.com/compatible-mode/v1/chat/completions`
  - DeepSeek: `https://api.deepseek.com/chat/completions`

### Requirement: Call AI API with user message

The system SHALL send user messages to the selected AI provider and return responses.

#### Scenario: Successful API call
- **WHEN** user sends a message with valid API key
- **THEN** system SHALL call the provider API with chat history
- **AND** system SHALL return the AI response text

#### Scenario: API key not provided
- **WHEN** user sends a message without API key
- **THEN** system SHALL show error message "API Key not set"

#### Scenario: API call fails
- **WHEN** API call returns error (network, authentication, rate limit)
- **THEN** system SHALL show user-friendly error message
- **AND** system SHALL NOT add AI response to chat history

### Requirement: Include system prompt

The system SHALL include a system prompt that provides CGRA domain knowledge and instructs AI to return structured configuration.

#### Scenario: System prompt content
- **WHEN** system sends API request
- **THEN** system SHALL include system prompt with:
  - CGRA design guidelines
  - Available FU types
  - Instruction to return three config modes (high_performance, balanced, low_power)
  - Parameter validation ranges

### Requirement: Request timeout

The system SHALL set a timeout for API requests.

#### Scenario: Request timeout handling
- **WHEN** API request exceeds 120 seconds
- **THEN** system SHALL cancel the request
- **AND** system SHALL show "Request timeout" error message
