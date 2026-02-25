import { useState } from 'react';
import {
  Box,
  TextField,
  IconButton,
  Typography,
  Paper,
  InputAdornment
} from '@mui/material';
import SendIcon from '@mui/icons-material/Send';
import SmartToyIcon from '@mui/icons-material/SmartToy';

function AIAssistantPanel() {
  const [inputValue, setInputValue] = useState('');
  const [messages] = useState([]);

  const handleSend = () => {
    if (inputValue.trim()) {
      // Placeholder: Log to console for now
      // eslint-disable-next-line no-console
      console.log('AI Assistant: User message:', inputValue);
      setInputValue('');
    }
  };

  const handleKeyDown = (event) => {
    if (event.key === 'Enter' && !event.shiftKey) {
      event.preventDefault();
      handleSend();
    }
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
                <InputAdornment position="end">
                  <IconButton
                    onClick={handleSend}
                    disabled={!inputValue.trim()}
                    size="small"
                    color="primary"
                  >
                    <SendIcon fontSize="small" />
                  </IconButton>
                </InputAdornment>
              )
            }
          }}
        />
      </Box>
    </Box>
  );
}

export default AIAssistantPanel;
