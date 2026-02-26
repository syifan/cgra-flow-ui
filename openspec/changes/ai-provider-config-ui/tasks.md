## 1. Data Layer

- [x] 1.1 Define AI_PROVIDERS constant with provider names and model lists

## 2. Configuration Section UI

- [x] 2.1 Add collapsible configuration section header with expand/collapse icon
- [x] 2.2 Add provider dropdown (Select) with OpenAI, Gemini, Qwen, DeepSeek options
- [x] 2.3 Add API Key TextField with password type and visibility toggle
- [x] 2.4 Add model dropdown (Select) that updates based on selected provider
- [x] 2.5 Add configuration mode ToggleButtonGroup with High Performance, Balanced, Low Power options

## 3. Chat Input Enhancements

- [x] 3.1 Add Clear button next to Send button in input area
- [x] 3.2 Disable Clear button when input is empty

## 4. State Management

- [x] 4.1 Add useState for provider selection (default: OpenAI)
- [x] 4.2 Add useState for API key input
- [x] 4.3 Add useState for model selection with auto-reset on provider change
- [x] 4.4 Add useState for config dialog open/close state
- [x] 4.5 Add useState for hasRecommendedConfig (controls Apply button state)
- [x] 4.6 Add useState for configuration section expanded/collapsed state

## 5. Styling & Layout

- [x] 5.1 Style configuration section with appropriate spacing and borders
- [x] 5.2 Ensure responsive layout within side panel constraints

## 6. Action Buttons

- [x] 6.1 Add "Generate CGRA from Given Kernel" button (green)
- [x] 6.2 Add "Apply AI-Generated CGRA Design" button (blue, disabled by default)
- [x] 6.3 Add "Analyze CGRA Mapping Report" button (orange)
