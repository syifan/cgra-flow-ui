import { useState, useRef, useCallback } from 'react';
import {
  Box,
  TextField,
  IconButton,
  Typography,
  Paper,
  InputAdornment,
  Select,
  MenuItem,
  FormControl,
  InputLabel,
  Collapse,
  Button,
  Dialog,
  DialogTitle,
  DialogContent,
  DialogActions,
  Stack,
  CircularProgress,
  Alert
} from '@mui/material';
import SendIcon from '@mui/icons-material/Send';
import ClearIcon from '@mui/icons-material/Clear';
import SmartToyIcon from '@mui/icons-material/SmartToy';
import ExpandMoreIcon from '@mui/icons-material/ExpandMore';
import ExpandLessIcon from '@mui/icons-material/ExpandLess';
import VisibilityIcon from '@mui/icons-material/Visibility';
import VisibilityOffIcon from '@mui/icons-material/VisibilityOff';
import { callOpenAICompatibleApi, AI_PROVIDERS } from './services/aiApiService';
import { extractCgraConfig } from './services/aiConfigExtractor';

function AIAssistantPanel({ onApplyConfig, architecture, mappingInfo }) {
  // Configuration state
  const [provider, setProvider] = useState('OpenAI');
  const [apiKey, setApiKey] = useState('');
  const [model, setModel] = useState(AI_PROVIDERS.OpenAI.defaultModel);
  const [configExpanded, setConfigExpanded] = useState(true);
  const [showApiKey, setShowApiKey] = useState(false);

  // Chat state
  const [inputValue, setInputValue] = useState('');
  const [messages, setMessages] = useState([]);
  const [isThinking, setIsThinking] = useState(false);
  const chatHistoryRef = useRef([]);

  // Config mode dialog state
  const [configDialogOpen, setConfigDialogOpen] = useState(false);
  const [lastRecommendedConfigs, setLastRecommendedConfigs] = useState(null);

  // Kernel description dialog state
  const [kernelDialogOpen, setKernelDialogOpen] = useState(false);
  const [kernelDescription, setKernelDescription] = useState('');

  // Handle provider change - reset model to default for new provider
  const handleProviderChange = (event) => {
    const newProvider = event.target.value;
    setProvider(newProvider);
    setModel(AI_PROVIDERS[newProvider].defaultModel);
  };

  // Add message to display
  const addMessage = useCallback((text, isUser = false) => {
    setMessages((prev) => [...prev, { text, isUser }]);
  }, []);

  // Update last message (for replacing "Thinking...")
  const updateLastMessage = useCallback((text) => {
    setMessages((prev) => {
      const newMessages = [...prev];
      if (newMessages.length > 0) {
        newMessages[newMessages.length - 1] = { text, isUser: false };
      }
      return newMessages;
    });
  }, []);

  // Handle sending message
  const handleSend = async () => {
    const userMessage = inputValue.trim();
    if (!userMessage || isThinking) return;

    // Add user message
    addMessage(userMessage, true);
    setInputValue('');

    // Add to chat history
    chatHistoryRef.current.push({ role: 'user', content: userMessage });

    // Show thinking indicator
    setIsThinking(true);
    addMessage('Thinking...');

    try {
      await callOpenAICompatibleApi({
        provider,
        apiKey,
        model,
        messages: chatHistoryRef.current,
        onSuccess: (response) => {
          // Add to chat history
          chatHistoryRef.current.push({ role: 'assistant', content: response });

          // Update the "Thinking..." message with actual response
          updateLastMessage(response);

          // Extract CGRA config if present
          const configs = extractCgraConfig(response);
          if (configs) {
            setLastRecommendedConfigs(configs);

            // Add info about available configs
            const availableModes = [];
            if (configs.high_performance) availableModes.push('High Performance');
            if (configs.balanced) availableModes.push('Balanced');
            if (configs.low_power) availableModes.push('Low Power');

            // Add success indicator after the response
            setMessages((prev) => [
              ...prev,
              {
                text: `\n✅ Configuration extracted! Available modes: ${availableModes.join(', ')}\nClick "Apply AI-Generated CGRA Design" to apply.`,
                isUser: false
              }
            ]);
          }

          setIsThinking(false);
        },
        onError: (error) => {
          updateLastMessage(`⚠️ ${error}`);
          setIsThinking(false);
        }
      });
    } catch (error) {
      updateLastMessage(`⚠️ Error: ${error.message}`);
      setIsThinking(false);
    }
  };

  // Clear chat history and messages
  const handleClearChat = () => {
    setMessages([]);
    chatHistoryRef.current = [];
    setLastRecommendedConfigs(null);
  };

  const handleKeyDown = (event) => {
    if (event.key === 'Enter' && !event.shiftKey) {
      event.preventDefault();
      handleSend();
    }
  };

  // Apply selected configuration
  const handleApplyConfig = (mode) => {
    setConfigDialogOpen(false);

    if (!lastRecommendedConfigs || !lastRecommendedConfigs[mode]) {
      return;
    }

    const config = lastRecommendedConfigs[mode];

    // Call the callback to update architecture
    if (onApplyConfig) {
      onApplyConfig(config);

      // Show success message
      const modeLabels = {
        high_performance: 'High Performance',
        balanced: 'Balanced',
        low_power: 'Low Power'
      };
      setMessages((prev) => [
        ...prev,
        {
          text: `✓ ${modeLabels[mode]} configuration applied:\n` +
            `  CGRA: ${config.cgra_rows}x${config.cgra_columns}\n` +
            `  Multi-CGRA: ${config.multi_cgra_rows}x${config.multi_cgra_columns}\n` +
            `  Config Memory: ${config.configMemSize} entries\n` +
            `  Data SPM: ${config.data_spm_kb} KB`,
          isUser: false
        }
      ]);
    }
  };

  // Generate CGRA from kernel description
  const handleGenerateFromKernel = () => {
    setKernelDialogOpen(true);
  };

  const handleKernelDialogSubmit = () => {
    if (!kernelDescription.trim()) return;

    setKernelDialogOpen(false);

    // Format the prompt
    const prompt = `Please recommend optimal CGRA parameters for: ${kernelDescription.trim()}`;

    // Set input and send
    setInputValue(prompt);
    setTimeout(() => {
      handleSend();
    }, 100);

    setKernelDescription('');
  };

  // Analyze mapping report
  const handleAnalyzeMapping = async () => {
    // Check if mapping info is available
    if (!mappingInfo || !mappingInfo.hasMapping) {
      setMessages((prev) => [
        ...prev,
        {
          text: 'ℹ️ No mapping data available.\nPlease first complete compilation and mapping in the Kernel panel, then click this button again for AI analysis.',
          isUser: false
        }
      ]);
      return;
    }

    // Gather mapping results
    const currentArch = architecture?.architecture || {};
    const currentRows = currentArch.multiCgraRows || 1;
    const currentCols = currentArch.multiCgraColumns || 1;
    const cgra = currentArch.CGRAs?.[0] || {};
    const peRows = cgra.perCgraRows || 4;
    const peCols = cgra.perCgraColumns || 4;

    const analyzePrompt = `Based on the following CGRA mapping results, analyze and recommend a better configuration:

## Current Configuration
- Multi-CGRA: ${currentRows}x${currentCols}
- Per CGRA: ${peRows}x${peCols} PEs
- Config Memory: ${cgra.configMemoryEntries || 8} entries

## Mapping Results
${mappingInfo.summary || 'Mapping data available'}

## Analysis Required
1. Is the current configuration optimal?
2. What improvements would you suggest?
3. Please provide CGRA parameter recommendations for high_performance, balanced, and low_power modes.`;

    // Set input and send
    setInputValue(analyzePrompt);
    setTimeout(() => {
      handleSend();
    }, 100);
  };

  return (
    <Box
      sx={{
        height: '100%',
        display: 'flex',
        flexDirection: 'column',
        bgcolor: 'rgba(148,163,184,0.08)',
        borderRadius: 1,
        overflow: 'hidden'
      }}
    >
      {/* Header */}
      <Box
        sx={{
          p: 2.5,
          borderBottom: '1px solid',
          borderColor: 'rgba(148,163,184,0.3)'
        }}
      >
        <Typography variant="subtitle1" color="text.primary">
          AI Assistant
        </Typography>
        <Typography variant="body2" sx={{ color: 'text.secondary', mt: 0.5 }}>
          Get help configuring your CGRA architecture
        </Typography>
      </Box>

      {/* Configuration Section */}
      <Box
        sx={{
          borderBottom: '1px solid',
          borderColor: 'rgba(148,163,184,0.3)'
        }}
      >
        {/* Configuration Header */}
        <Box
          sx={{
            px: 2.5,
            py: 1.5,
            display: 'flex',
            alignItems: 'center',
            justifyContent: 'space-between',
            cursor: 'pointer',
            '&:hover': {
              bgcolor: 'rgba(148,163,184,0.05)'
            }
          }}
          onClick={() => setConfigExpanded(!configExpanded)}
        >
          <Typography variant="body2" color="text.primary" sx={{ fontWeight: 500 }}>
            Configuration
          </Typography>
          <IconButton size="small" sx={{ p: 0.5 }}>
            {configExpanded ? <ExpandLessIcon fontSize="small" /> : <ExpandMoreIcon fontSize="small" />}
          </IconButton>
        </Box>

        {/* Configuration Controls */}
        <Collapse in={configExpanded}>
          <Box
            sx={{
              px: 2.5,
              pb: 2,
              display: 'flex',
              flexDirection: 'column',
              gap: 2
            }}
          >
            {/* Provider and Model Row */}
            <Box sx={{ display: 'flex', gap: 2, flexDirection: { xs: 'column', sm: 'row' } }}>
              <FormControl size="small" sx={{ flex: 1 }}>
                <InputLabel>Provider</InputLabel>
                <Select
                  value={provider}
                  label="Provider"
                  onChange={handleProviderChange}
                  sx={{ bgcolor: 'rgba(148,163,184,0.1)' }}
                >
                  {Object.keys(AI_PROVIDERS).map((name) => (
                    <MenuItem key={name} value={name}>
                      {name}
                    </MenuItem>
                  ))}
                </Select>
              </FormControl>

              <FormControl size="small" sx={{ flex: 1 }}>
                <InputLabel>Model</InputLabel>
                <Select
                  value={model}
                  label="Model"
                  onChange={(e) => setModel(e.target.value)}
                  sx={{ bgcolor: 'rgba(148,163,184,0.1)' }}
                >
                  {AI_PROVIDERS[provider].models.map((modelName) => (
                    <MenuItem key={modelName} value={modelName}>
                      {modelName}
                    </MenuItem>
                  ))}
                </Select>
              </FormControl>
            </Box>

            {/* API Key */}
            <TextField
              size="small"
              label="API Key"
              type={showApiKey ? 'text' : 'password'}
              value={apiKey}
              onChange={(e) => setApiKey(e.target.value)}
              placeholder={`Enter your ${provider} API key`}
              sx={{
                '& .MuiInputBase-root': {
                  bgcolor: 'rgba(148,163,184,0.1)'
                }
              }}
              slotProps={{
                input: {
                  endAdornment: (
                    <InputAdornment position="end">
                      <IconButton
                        onClick={() => setShowApiKey(!showApiKey)}
                        edge="end"
                        size="small"
                      >
                        {showApiKey ? <VisibilityOffIcon fontSize="small" /> : <VisibilityIcon fontSize="small" />}
                      </IconButton>
                    </InputAdornment>
                  )
                }
              }}
            />

            {!apiKey && (
              <Alert severity="info" sx={{ py: 0.5 }}>
                Enter your API key to start chatting with AI
              </Alert>
            )}
          </Box>
        </Collapse>
      </Box>

      {/* Messages Area */}
      <Box
        sx={{
          flex: 1,
          overflow: 'auto',
          p: 2.5,
          display: 'flex',
          flexDirection: 'column',
          gap: 2
        }}
      >
        {messages.length === 0 ? (
          <Box
            sx={{
              display: 'flex',
              flexDirection: 'column',
              alignItems: 'center',
              justifyContent: 'center',
              height: '100%',
              textAlign: 'center',
              gap: 2
            }}
          >
            <SmartToyIcon
              sx={{
                fontSize: 48,
                color: 'text.secondary',
                opacity: 0.5
              }}
            />
            <Typography variant="body1" color="text.secondary">
              Chat with AI to get help configuring your CGRA architecture.
            </Typography>
            <Typography variant="caption" color="text.secondary" sx={{ opacity: 0.7 }}>
              Ask questions about PE settings, connections, or optimization suggestions.
            </Typography>
          </Box>
        ) : (
          messages.map((message, index) => (
            <Paper
              key={index}
              sx={{
                p: 2,
                bgcolor: message.isUser
                  ? 'primary.main'
                  : 'rgba(148,163,184,0.15)',
                color: message.isUser ? 'primary.contrastText' : 'text.primary',
                alignSelf: message.isUser ? 'flex-end' : 'flex-start',
                maxWidth: '85%',
                borderRadius: 2,
                whiteSpace: 'pre-wrap',
                wordBreak: 'break-word'
              }}
            >
              <Typography variant="body2" sx={{ whiteSpace: 'pre-wrap' }}>
                {message.text}
              </Typography>
            </Paper>
          ))
        )}
      </Box>

      {/* Action Buttons */}
      <Box
        sx={{
          px: 2.5,
          py: 2,
          borderTop: '1px solid',
          borderBottom: '1px solid',
          borderColor: 'rgba(148,163,184,0.3)',
          display: 'flex',
          flexDirection: 'column',
          gap: 1
        }}
      >
        <Button
          variant="contained"
          size="small"
          fullWidth
          onClick={handleGenerateFromKernel}
          disabled={isThinking}
          sx={{
            textTransform: 'none',
            bgcolor: '#2E7D32',
            '&:hover': { bgcolor: '#1B5E20' }
          }}
        >
          Generate CGRA from Given Kernel
        </Button>
        <Button
          variant="contained"
          size="small"
          fullWidth
          disabled={!lastRecommendedConfigs || isThinking}
          onClick={() => setConfigDialogOpen(true)}
          sx={{
            textTransform: 'none',
            bgcolor: '#1565C0',
            '&:hover': { bgcolor: '#0D47A1' },
            '&:disabled': { bgcolor: 'rgba(21, 101, 192, 0.5)' }
          }}
        >
          Apply AI-Generated CGRA Design
        </Button>
        <Button
          variant="contained"
          size="small"
          fullWidth
          onClick={handleAnalyzeMapping}
          disabled={isThinking}
          sx={{
            textTransform: 'none',
            bgcolor: '#F57C00',
            '&:hover': { bgcolor: '#E65100' }
          }}
        >
          Analyze CGRA Mapping Report
        </Button>
      </Box>

      {/* Input Area */}
      <Box
        sx={{
          p: 2.5,
          borderTop: '1px solid',
          borderColor: 'rgba(148,163,184,0.3)'
        }}
      >
        <TextField
          fullWidth
          multiline
          maxRows={3}
          placeholder="Ask AI to help configure your CGRA..."
          value={inputValue}
          onChange={(e) => setInputValue(e.target.value)}
          onKeyDown={handleKeyDown}
          size="small"
          disabled={isThinking}
          sx={{
            '& .MuiInputBase-root': {
              bgcolor: 'rgba(148,163,184,0.1)',
              alignItems: 'flex-end'
            }
          }}
          slotProps={{
            input: {
              endAdornment: (
                <InputAdornment position="end" sx={{ gap: 0.5 }}>
                  {isThinking && <CircularProgress size={16} />}
                  <IconButton
                    onClick={handleClearChat}
                    size="small"
                    title="Clear chat"
                  >
                    <ClearIcon fontSize="small" />
                  </IconButton>
                  <IconButton
                    onClick={handleSend}
                    disabled={!inputValue.trim() || isThinking}
                    size="small"
                    color="primary"
                    title="Send"
                  >
                    <SendIcon fontSize="small" />
                  </IconButton>
                </InputAdornment>
              )
            }
          }}
        />
      </Box>

      {/* Configuration Mode Selection Dialog */}
      <Dialog
        open={configDialogOpen}
        onClose={() => setConfigDialogOpen(false)}
        maxWidth="sm"
        fullWidth
      >
        <DialogTitle sx={{ textAlign: 'center', pb: 1 }}>
          Select Configuration Mode
        </DialogTitle>
        <DialogContent>
          <Typography variant="body2" color="text.secondary" sx={{ textAlign: 'center', mb: 2 }}>
            Choose configuration mode:
          </Typography>
          <Stack direction="row" spacing={1.5} sx={{ mt: 1 }}>
            <Button
              variant="contained"
              fullWidth
              disabled={!lastRecommendedConfigs?.high_performance}
              onClick={() => handleApplyConfig('high_performance')}
              sx={{
                textTransform: 'none',
                bgcolor: '#1565C0',
                '&:hover': { bgcolor: '#0D47A1' },
                py: 2
              }}
            >
              High Performance
            </Button>
            <Button
              variant="contained"
              fullWidth
              disabled={!lastRecommendedConfigs?.balanced}
              onClick={() => handleApplyConfig('balanced')}
              sx={{
                textTransform: 'none',
                bgcolor: '#F57C00',
                '&:hover': { bgcolor: '#E65100' },
                py: 2
              }}
            >
              Balanced
            </Button>
            <Button
              variant="contained"
              fullWidth
              disabled={!lastRecommendedConfigs?.low_power}
              onClick={() => handleApplyConfig('low_power')}
              sx={{
                textTransform: 'none',
                bgcolor: '#2E7D32',
                '&:hover': { bgcolor: '#1B5E20' },
                py: 2
              }}
            >
              Low Power
            </Button>
          </Stack>
        </DialogContent>
        <DialogActions sx={{ justifyContent: 'center', pb: 2 }}>
          <Button
            onClick={() => setConfigDialogOpen(false)}
            variant="outlined"
            sx={{ textTransform: 'none' }}
          >
            Cancel
          </Button>
        </DialogActions>
      </Dialog>

      {/* Kernel Description Dialog */}
      <Dialog
        open={kernelDialogOpen}
        onClose={() => setKernelDialogOpen(false)}
        maxWidth="sm"
        fullWidth
      >
        <DialogTitle>Describe Your Kernel/Application</DialogTitle>
        <DialogContent>
          <Typography variant="body2" color="text.secondary" sx={{ mb: 2 }}>
            Describe the application or kernel you want to implement, and AI will recommend optimal CGRA parameters.
          </Typography>
          <TextField
            fullWidth
            multiline
            rows={4}
            value={kernelDescription}
            onChange={(e) => setKernelDescription(e.target.value)}
            placeholder="e.g., 'matrix multiplication', 'convolution for CNN', 'FFT processing', 'sparse matrix operations'..."
            sx={{ mt: 1 }}
          />
        </DialogContent>
        <DialogActions>
          <Button onClick={() => setKernelDialogOpen(false)} sx={{ textTransform: 'none' }}>
            Cancel
          </Button>
          <Button
            variant="contained"
            onClick={handleKernelDialogSubmit}
            disabled={!kernelDescription.trim()}
            sx={{ textTransform: 'none' }}
          >
            Generate Configuration
          </Button>
        </DialogActions>
      </Dialog>
    </Box>
  );
}

export default AIAssistantPanel;
