## 1. AI API Service

- [x] 1.1 Create `src/workspace/services/aiApiService.js` with AI_PROVIDERS configuration
- [x] 1.2 Implement `callOpenAICompatibleApi()` function with fetch and timeout handling
- [x] 1.3 Add error handling for network errors, authentication errors, and rate limits
- [x] 1.4 Implement system prompt with CGRA domain knowledge

## 2. Configuration Extractor

- [x] 2.1 Create `src/workspace/services/aiConfigExtractor.js`
- [x] 2.2 Implement `extractCgraConfig()` to parse JSON from AI response
- [x] 2.3 Implement `validateAndFixConfig()` with parameter validation and auto-correction
- [x] 2.4 Add validation for cgra_rows, cgra_columns (2-8), configMemSize, data_spm_kb

## 3. Chat Interaction

- [x] 3.1 Add messages state management (array of {isUser, text} objects)
- [x] 3.2 Implement handleSend to add user message and call API
- [x] 3.3 Implement handleClear to clear messages and chat history
- [x] 3.4 Add "Thinking..." indicator while waiting for API response
- [x] 3.5 Display messages with proper styling (user: right, AI: left)

## 4. Kernel Description Dialog

- [x] 4.1 Add kernel description dialog with TextField input
- [x] 4.2 Implement handleGenerateFromKernel to show dialog and format prompt
- [x] 4.3 Send generated prompt to AI and handle response

## 5. Mapping Analysis

- [x] 5.1 Implement handleAnalyzeMapping to check for mapping results
- [x] 5.2 Gather current architecture state and mapping metrics
- [x] 5.3 Format analysis prompt and send to AI

## 6. Configuration Application

- [x] 6.1 Store lastRecommendedConfigs state for three modes
- [x] 6.2 Enable "Apply AI-Generated CGRA Design" button when config is available
- [x] 6.3 Implement handleApplyConfig to update architecture via callback
- [x] 6.4 Add applyConfig callback prop from Workspace.jsx
- [x] 6.5 Map config parameters to architecture structure:
  - cgra_rows/columns → perCgraRows/perCgraColumns
  - multi_cgra_rows/columns → multiCgraRows/multiCgraColumns  
  - configMemSize → configMemoryEntries
  - data_spm_kb → sramBanks (calculated)
  - fu_types → PEs[].tileFunctionalUnits

## 7. Workspace Integration

- [x] 7.1 Add handleApplyAIConfig callback in Workspace.jsx
- [x] 7.2 Pass onApplyConfig prop to AIAssistantPanel via SidePanel
- [x] 7.3 Ensure architecture state update triggers UI re-render
