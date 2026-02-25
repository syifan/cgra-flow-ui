## Context

The AI Assistant panel (`src/workspace/AIAssistantPanel.jsx`) currently provides a basic chat interface. The reference implementation in `ai_assistant_sample/ai_assistant.py` demonstrates full AI provider configuration with 4 providers (OpenAI, Gemini, Qwen, DeepSeek), each with specific models. This design adds the configuration UI to match that functionality.

**Current State**:
- Simple chat input with Send button only
- No provider/model selection
- No API key input
- No configuration mode options

## Goals / Non-Goals

**Goals:**
- Add UI controls for AI provider configuration (provider, API key, model)
- Add configuration mode selector (High Performance / Balanced / Low Power)
- Add Clear button for chat input
- Maintain backward compatibility with existing chat functionality

**Non-Goals:**
- Actual API integration (next proposal)
- Persisting configuration to storage
- Chat history management

## Decisions

### 1. Configuration Section Placement
**Decision**: Place configuration controls in a collapsible section at the top of the panel.

**Rationale**: Keeps the chat area clean while making configuration accessible. Users can expand/collapse as needed.

**Alternatives Considered**:
- Inline with chat: Too cluttered, reduces chat visibility
- Separate settings modal: Too many clicks for frequent changes

### 2. Configuration State Management
**Decision**: Use React `useState` for local component state.

**Rationale**: Simple UI-only change. No need for global state until actual API integration.

**Alternatives Considered**:
- React Context: Overkill for single component
- LocalStorage: Premature before API integration

### 3. Provider/Model Data Structure
**Decision**: Define a constant object matching the Python reference implementation.

```javascript
const AI_PROVIDERS = {
  OpenAI: {
    models: ["gpt-4o", "gpt-4o-mini", "gpt-4-turbo", "gpt-3.5-turbo"],
    defaultModel: "gpt-4o-mini"
  },
  Gemini: {
    models: ["gemini-2.0-flash", "gemini-1.5-flash", "gemini-1.5-pro"],
    defaultModel: "gemini-2.0-flash"
  },
  Qwen: {
    models: ["qwen-plus", "qwen-turbo", "qwen-max", "qwen-long"],
    defaultModel: "qwen-plus"
  },
  DeepSeek: {
    models: ["deepseek-chat", "deepseek-reasoner"],
    defaultModel: "deepseek-chat"
  }
};
```

**Rationale**: Mirrors the Python implementation, making future integration straightforward.

### 4. API Key Input Security
**Decision**: Use `type="password"` for API key field with visibility toggle.

**Rationale**: Standard security practice for sensitive data while allowing verification.

## Risks / Trade-offs

- **API Key in Memory**: Key stored in component state until API integration → Acceptable for UI-only phase
- **No Persistence**: Users must re-enter config each session → Will be addressed in follow-up proposal
