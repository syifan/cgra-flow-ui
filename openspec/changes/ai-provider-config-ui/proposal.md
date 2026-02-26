## Why

Currently, the AI Assistant panel in the CGRA Flow UI only has a basic chat interface with a text input. Users cannot configure which AI provider to use, provide their API key, or select a specific model. This limits the flexibility and usability of the AI assistant feature. The reference implementation in `ai_assistant_sample/ai_assistant.py` supports multiple AI providers (OpenAI, Gemini, Qwen, DeepSeek), each with their own models. This change will bring UI parity with the Python implementation's configuration options.

## What Changes

- Add AI provider dropdown selector (OpenAI, Gemini, Qwen, DeepSeek)
- Add API Key input field (password-type for security)
- Add Model selector dropdown that dynamically updates based on selected provider
- Add three configuration mode options (High Performance, Balanced, Low Power) as radio buttons or toggle buttons
- Add Clear button alongside Send button in the chat input area
- Update AIAssistantPanel component layout to accommodate new configuration controls

## Capabilities

### New Capabilities
- `ai-provider-config`: UI for selecting AI provider, entering API key, and choosing model in the AI Assistant panel

### Modified Capabilities
- None (this is a new feature addition)

## Impact

- **Affected Files**: `src/workspace/AIAssistantPanel.jsx`
- **Dependencies**: MUI components (Select, TextField, FormControl, RadioGroup/ButtonGroup)
- **UI Changes**: Expand the AI Assistant panel header or add a collapsible configuration section
