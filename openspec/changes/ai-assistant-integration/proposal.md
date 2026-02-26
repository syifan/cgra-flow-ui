## Why

当前 AI Assistant 面板只有 UI 框架，缺少核心功能实现。用户无法通过自然语言与 AI 交互来自动设计 CGRA 架构，必须完全手动配置。参考 Python 实现 (`ai_assistant_sample/`)，需要实现 AI API 调用、配置提取和应用、以及智能分析功能，使 CGRA 设计既能手动又能通过 AI 辅助完成。

## What Changes

- **AI API 集成**: 实现 OpenAI-compatible API 调用，支持 OpenAI、Gemini、Qwen、DeepSeek 四个供应商
- **聊天功能**: 实现完整的聊天交互，包括消息发送、响应显示、聊天历史管理
- **配置提取**: 从 AI 响应中提取 CGRA 配置（high_performance, balanced, low_power 三种模式）
- **配置应用**: 将 AI 推荐的配置应用到 architecture 状态，触发 UI 更新
- **三个操作按钮功能**:
  - "Generate CGRA from Given Kernel": 弹出对话框输入 kernel 描述，让 AI 生成配置
  - "Apply AI-Generated CGRA Design": 启用对话框选择配置模式并应用
  - "Analyze CGRA Mapping Report": 分析当前映射状态，发送给 AI 获取优化建议
- **错误处理**: API 错误、网络错误的友好提示

## Capabilities

### New Capabilities

- `ai-api-integration`: AI API 调用服务，支持多供应商、流式响应、错误处理
- `ai-chat-interaction`: 聊天交互功能，包括消息管理、历史记录、响应显示
- `ai-cgra-config`: AI 配置提取和应用，包括 JSON 解析、参数验证、状态更新

### Modified Capabilities

（无 - 这是新功能，不修改现有 spec 的需求）

## Impact

**新增文件**:
- `src/workspace/services/aiApiService.js` - AI API 调用服务
- `src/workspace/services/aiConfigExtractor.js` - CGRA 配置提取和验证
- `src/workspace/context/AIContext.jsx` - AI 状态管理 Context（可选）

**修改文件**:
- `src/workspace/AIAssistantPanel.jsx` - 实现所有 TODO 功能
- `src/Workspace.jsx` - 添加 AI 状态管理，传递配置应用回调

**依赖**:
- 需要用户自己提供各供应商的 API Key
- API 调用直接从前端发起（或后续可改为后端代理）
