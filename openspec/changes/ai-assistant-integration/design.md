## Context

AI Assistant 面板 UI 已完成，需要实现核心功能。参考 Python 实现 (`ai_assistant_sample/ai_assistant.py` 和 `mode_dark_light.py`)，需要：

1. **AI API 调用**: 直接从前端调用 OpenAI-compatible API
2. **配置提取**: 解析 AI 响应中的 JSON 配置
3. **状态更新**: 将配置应用到 React state (`appState.architecture`)
4. **聊天管理**: 维护聊天历史、显示消息

当前架构使用 React state + Supabase 持久化，AI 功能不需要后端支持（API Key 由用户提供）。

## Goals / Non-Goals

**Goals:**
- 实现多供应商 AI API 调用（OpenAI, Gemini, Qwen, DeepSeek）
- 实现聊天交互和消息显示
- 实现 CGRA 配置提取和验证
- 实现配置应用到 architecture state
- 实现三个操作按钮的功能
- 友好的错误处理和用户反馈

**Non-Goals:**
- 后端 API 代理（API Key 直接从前端使用）
- 流式响应（使用普通请求，简化实现）
- RAG 知识库（保留 Python 实现中的 system prompt，后续可扩展）
- 会话持久化（聊天历史仅在内存中）

## Decisions

### 1. API 调用方式
**决定**: 直接从前端调用 OpenAI-compatible API

**理由**:
- 简化实现，无需后端支持
- 用户自己管理 API Key，无需服务器存储
- 四个供应商都支持 OpenAI-compatible 格式

**替代方案**:
- 后端代理: 更安全但增加复杂度，后续可迁移

### 2. 状态管理
**决定**: 在 AIAssistantPanel 内部管理 AI 相关状态，通过 props 回调更新 architecture

**理由**:
- AI 状态（聊天历史、配置）与 architecture 分离
- 通过 `onApplyConfig` 回调更新父组件状态
- 避免引入新的 Context，保持简单

### 3. 配置验证
**决定**: 在应用配置前验证并修正参数范围

**理由**:
- AI 可能返回无效值（如 rows=10 超出范围 2-8）
- 参考 Python 实现的 `validate_and_fix_config` 函数
- 自动修正而不是拒绝，提供更好的用户体验

### 4. System Prompt
**决定**: 内置 system prompt（参考 Python 实现）

**理由**:
- 包含 CGRA 设计领域知识
- 指导 AI 返回三种配置模式
- 后续可扩展 RAG 知识库

## Risks / Trade-offs

| 风险 | 缓解措施 |
|------|----------|
| API Key 暴露在前端 | 用户自行管理 Key，文档说明风险 |
| AI 返回无效配置 | 验证和自动修正机制 |
| 网络请求超时 | 120s 超时 + 友好错误提示 |
| CORS 问题 | 所有供应商支持 CORS |

## Migration Plan

1. 新增 `src/workspace/services/aiApiService.js`
2. 新增 `src/workspace/services/aiConfigExtractor.js`
3. 修改 `AIAssistantPanel.jsx` 实现功能
4. 修改 `Workspace.jsx` 传递 `onApplyConfig` 回调
