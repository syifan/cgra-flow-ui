import { useState } from 'react';
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
  Stack
} from '@mui/material';
import SendIcon from '@mui/icons-material/Send';
import ClearIcon from '@mui/icons-material/Clear';
import SmartToyIcon from '@mui/icons-material/SmartToy';
import ExpandMoreIcon from '@mui/icons-material/ExpandMore';
import ExpandLessIcon from '@mui/icons-material/ExpandLess';
import VisibilityIcon from '@mui/icons-material/Visibility';
import VisibilityOffIcon from '@mui/icons-material/VisibilityOff';

// AI Provider configuration matching Python reference implementation
const AI_PROVIDERS = {
  OpenAI: {
    models: ['gpt-4o', 'gpt-4o-mini', 'gpt-4-turbo', 'gpt-3.5-turbo'],
    defaultModel: 'gpt-4o-mini'
  },
  Gemini: {
    models: ['gemini-2.0-flash', 'gemini-1.5-flash', 'gemini-1.5-pro'],
    defaultModel: 'gemini-2.0-flash'
  },
  Qwen: {
    models: ['qwen-plus', 'qwen-turbo', 'qwen-max', 'qwen-long'],
    defaultModel: 'qwen-plus'
  },
  DeepSeek: {
    models: ['deepseek-chat', 'deepseek-reasoner'],
    defaultModel: 'deepseek-chat'
  }
};

function AIAssistantPanel() {
  // Configuration state
  const [provider, setProvider] = useState('OpenAI');
  const [apiKey, setApiKey] = useState('');
  const [model, setModel] = useState(AI_PROVIDERS.OpenAI.defaultModel);
  const [configExpanded, setConfigExpanded] = useState(true);
  const [showApiKey, setShowApiKey] = useState(false);

  // Chat state
  const [inputValue, setInputValue] = useState('');
  const [messages] = useState([]);

  // Config mode dialog state
  const [configDialogOpen, setConfigDialogOpen] = useState(false);
  const [hasRecommendedConfig, setHasRecommendedConfig] = useState(false);

  // Handle provider change - reset model to default for new provider
  const handleProviderChange = (event) => {
    const newProvider = event.target.value;
    setProvider(newProvider);
    setModel(AI_PROVIDERS[newProvider].defaultModel);
  };

  const handleSend = () => {
    if (inputValue.trim()) {
      // Placeholder: Log to console for now
      // eslint-disable-next-line no-console
      console.log('AI Assistant: User message:', inputValue);
      setInputValue('');
      // TODO: When AI returns config, set hasRecommendedConfig to true
    }
  };

  const handleClear = () => {
    setInputValue('');
  };

  const handleKeyDown = (event) => {
    if (event.key === 'Enter' && !event.shiftKey) {
      event.preventDefault();
      handleSend();
    }
  };

  const handleApplyConfig = (mode) => {
    setConfigDialogOpen(false);
    // TODO: Apply the selected mode configuration
    // eslint-disable-next-line no-console
    console.log('Apply config mode:', mode);
  };

  const handleGenerateFromKernel = () => {
    // TODO: Open dialog to input kernel description
    // eslint-disable-next-line no-console
    console.log('Generate CGRA from kernel');
  };

  const handleAnalyzeMapping = () => {
    // TODO: Analyze current mapping
    // eslint-disable-next-line no-console
    console.log('Analyze CGRA mapping');
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
          </Box>
        </Collapse>
      </Box>

      {/* Action Buttons */}
      <Box
        sx={{
          px: 2.5,
          py: 2,
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
          disabled={!hasRecommendedConfig}
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
          sx={{
            textTransform: 'none',
            bgcolor: '#F57C00',
            '&:hover': { bgcolor: '#E65100' }
          }}
        >
          Analyze CGRA Mapping Report
        </Button>
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
                maxWidth: '80%',
                borderRadius: 2
              }}
            >
              <Typography variant="body2">{message.text}</Typography>
            </Paper>
          ))
        )}
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
                  <IconButton
                    onClick={handleClear}
                    disabled={!inputValue}
                    size="small"
                    title="Clear"
                  >
                    <ClearIcon fontSize="small" />
                  </IconButton>
                  <IconButton
                    onClick={handleSend}
                    disabled={!inputValue.trim()}
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
    </Box>
  );
}

export default AIAssistantPanel;
