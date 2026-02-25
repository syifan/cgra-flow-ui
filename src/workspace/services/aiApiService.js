/**
 * AI API Service
 * Provides integration with multiple AI providers (OpenAI, Gemini, Qwen, DeepSeek)
 */

// AI Provider configuration with OpenAI-compatible endpoints
export const AI_PROVIDERS = {
  OpenAI: {
    baseUrl: 'https://api.openai.com/v1/chat/completions',
    models: ['gpt-4o', 'gpt-4o-mini', 'gpt-4-turbo', 'gpt-3.5-turbo'],
    defaultModel: 'gpt-4o-mini',
    envKey: 'OPENAI_API_KEY'
  },
  Gemini: {
    baseUrl: 'https://generativelanguage.googleapis.com/v1beta/openai/chat/completions',
    models: ['gemini-2.0-flash', 'gemini-1.5-flash', 'gemini-1.5-pro'],
    defaultModel: 'gemini-2.0-flash',
    envKey: 'GEMINI_API_KEY'
  },
  Qwen: {
    baseUrl: 'https://dashscope.aliyuncs.com/compatible-mode/v1/chat/completions',
    models: ['qwen-plus', 'qwen-turbo', 'qwen-max', 'qwen-long'],
    defaultModel: 'qwen-plus',
    envKey: 'DASHSCOPE_API_KEY'
  },
  DeepSeek: {
    baseUrl: 'https://api.deepseek.com/chat/completions',
    models: ['deepseek-chat', 'deepseek-reasoner'],
    defaultModel: 'deepseek-chat',
    envKey: 'DEEPSEEK_API_KEY'
  }
};

// System prompt with CGRA domain knowledge
export const SYSTEM_PROMPT = `You are an AI assistant for CGRA-Flow, a framework for CGRA (Coarse-Grained Reconfigurable Array) design and exploration.

## Domain Knowledge:
1. Control Units Placement: Place control FUs (Cmp, Phi, Br, Sel, Ret) preferably in central tiles for global control and reduced communication delay.
2. Balance of Compute and Memory: Each tile should ideally include at least one compute FU (Add, Mul, Logic) and one memory FU (Ld, St).
3. Vectorization and Parallelism: If the kernel has many independent operations, replicate compute units and enable vectorization.
4. Configuration Memory (configMemSize): Small kernels → fewer instructions (8-64). Complex kernels with loops/branches → larger storage (128-512).
5. Scratchpad Memory (data_spm_kb): Memory-bound kernels benefit from larger scratchpad (32-64KB). Compute-intensive kernels can use smaller (4-16KB).
6. If goal is 'high_performance': prefer larger parallelism, vectorization, higher throughput.
7. If goal is 'low_power': prefer smaller area, lower memory usage, balanced FU count.

## Multi-CGRA Guidelines (IMPORTANT):
- Multi-CGRA (multi_cgra_rows > 1 or multi_cgra_columns > 1) means multiple independent CGRA instances working in parallel
- Use multi-CGRA when:
  * Kernel can be split into independent tasks (data parallelism)
  * High throughput is required (process multiple data streams simultaneously)
  * Large-scale computation like attention, transformer layers, batch processing
- Single CGRA (multi_cgra = 1x1) is sufficient for:
  * Simple kernels (relu, pooling, small filters)
  * Memory-bound kernels with limited parallelism
  * Low-power scenarios
- Recommended multi-CGRA configurations:
  * High performance: 2x2 or 2x4 multi-CGRA grid
  * Balanced: 1x2 or 2x1 multi-CGRA grid
  * Low power: 1x1 (single CGRA)

## Available FU Types (for tile configuration):
- Compute: add, mul, div, shift, logic
- Floating-point: fadd, fmul, fdiv, fmul_fadd, fadd_fadd, vfmul
- Control: cmp, sel, phi, loop_control
- Memory: mem, mem_indexed, constant
- Other: return, grant, alloca, type_conv

IMPORTANT: By default, all FU types should be enabled in every tile whenever we design a CGRA.
The full FU list is: ["add", "mul", "div", "fadd", "fmul", "fdiv", "logic", "cmp", "sel", "type_conv", "vfmul", "fadd_fadd", "fmul_fadd", "loop_control", "phi", "constant", "mem", "mem_indexed", "shift", "return", "alloca", "grant"]

When recommending CGRA configurations, provide THREE options:

\`\`\`json
{
  "high_performance": {
    "cgra_rows": <2-8>,
    "cgra_columns": <2-8>,
    "configMemSize": <8-512>,
    "data_spm_kb": <4-64>,
    "multi_cgra_rows": <1-4>,
    "multi_cgra_columns": <1-4>,
    "fu_types": ["add", "mul", "div", ...],
    "explanation": "<high_performance optimization reasoning>"
  },
  "balanced": {
    "cgra_rows": <2-8>,
    "cgra_columns": <2-8>,
    "configMemSize": <8-512>,
    "data_spm_kb": <4-64>,
    "multi_cgra_rows": <1-4>,
    "multi_cgra_columns": <1-4>,
    "fu_types": ["add", "mul", ...],
    "explanation": "<balanced trade-off reasoning>"
  },
  "low_power": {
    "cgra_rows": <2-8>,
    "cgra_columns": <2-8>,
    "configMemSize": <8-512>,
    "data_spm_kb": <4-64>,
    "multi_cgra_rows": <1-4>,
    "multi_cgra_columns": <1-4>,
    "fu_types": ["add", "mul", ...],
    "explanation": "<power saving reasoning>"
  }
}
\`\`\`

Design guidelines:
- High performance: Larger array, more parallelism, larger memory, more FU types
- Balanced: Medium-sized array, good high_performance with reasonable power
- Low power: Smaller array, minimal resources, only essential FUs

Be concise. Answer in the same language as the user's question.`;

/**
 * Call OpenAI-compatible API
 * @param {Object} params - API call parameters
 * @param {string} params.provider - Provider name (OpenAI, Gemini, Qwen, DeepSeek)
 * @param {string} params.apiKey - API key for the provider
 * @param {string} params.model - Model to use
 * @param {Array} params.messages - Chat history messages
 * @param {Function} params.onSuccess - Success callback (response)
 * @param {Function} params.onError - Error callback (errorMessage)
 */
export async function callOpenAICompatibleApi({
  provider,
  apiKey,
  model,
  messages,
  onSuccess,
  onError
}) {
  try {
    const providerConfig = AI_PROVIDERS[provider];

    if (!providerConfig) {
      onError(`Unknown provider: ${provider}`);
      return;
    }

    if (!apiKey) {
      onError(`API Key not set.\nPlease enter your ${providerConfig.envKey} in the API Key field.`);
      return;
    }

    // Prepare messages with system prompt
    const apiMessages = [
      { role: 'system', content: SYSTEM_PROMPT },
      ...messages
    ];

    // Create abort controller for timeout
    const controller = new AbortController();
    const timeoutId = setTimeout(() => controller.abort(), 120000); // 120 seconds timeout

    const response = await fetch(providerConfig.baseUrl, {
      method: 'POST',
      headers: {
        'Authorization': `Bearer ${apiKey}`,
        'Content-Type': 'application/json'
      },
      body: JSON.stringify({
        model,
        messages: apiMessages
      }),
      signal: controller.signal
    });

    clearTimeout(timeoutId);

    if (!response.ok) {
      let errorMessage = `HTTP ${response.status}`;
      try {
        const errorData = await response.json();
        errorMessage = errorData?.error?.message || errorMessage;
      } catch {
        // Ignore JSON parse errors
      }

      if (response.status === 401) {
        onError('Authentication failed. Please check your API key.');
      } else if (response.status === 429) {
        onError('Rate limit exceeded. Please wait and try again.');
      } else {
        onError(`API Error: ${errorMessage}`);
      }
      return;
    }

    const data = await response.json();
    const aiResponse = data?.choices?.[0]?.message?.content || 'No response received.';

    onSuccess(aiResponse);
  } catch (error) {
    if (error.name === 'AbortError') {
      onError('Request timeout. Please try again.');
    } else if (error.name === 'TypeError' && error.message.includes('fetch')) {
      onError('Connection failed. Please check your network.');
    } else {
      onError(`Error: ${error.message}`);
    }
  }
}

/**
 * Get available models for a provider
 * @param {string} provider - Provider name
 * @returns {Array} List of available models
 */
export function getModelsForProvider(provider) {
  return AI_PROVIDERS[provider]?.models || [];
}

/**
 * Get default model for a provider
 * @param {string} provider - Provider name
 * @returns {string} Default model name
 */
export function getDefaultModelForProvider(provider) {
  return AI_PROVIDERS[provider]?.defaultModel || '';
}
