import { useState } from 'react';
import {
  Box,
  Collapse,
  IconButton,
  Paper,
  ToggleButton,
  ToggleButtonGroup,
  Typography
} from '@mui/material';
import ExpandLessIcon from '@mui/icons-material/ExpandLess';
import ExpandMoreIcon from '@mui/icons-material/ExpandMore';

function LayerControl({ statusLabel, selectedValues, options, onToggle, sx }) {
  const [expanded, setExpanded] = useState(true);

  const handleCollapseToggle = () => {
    setExpanded((previous) => !previous);
  };

  return (
    <Paper
      elevation={0}
      sx={[
        {
          px: 2,
          py: 1.5,
          borderRadius: 2,
          bgcolor: 'rgba(15,23,42,0.92)',
          border: '1px solid rgba(148,163,184,0.35)',
          display: 'flex',
          flexDirection: 'column',
          gap: 1.5,
          width: 260,
          pointerEvents: 'auto'
        },
        ...(Array.isArray(sx) ? sx : [sx])
      ]}
    >
      <Box
        sx={{
          display: 'flex',
          alignItems: 'center',
          justifyContent: 'space-between',
          gap: 1
        }}
      >
        <Box
          sx={{
            display: 'flex',
            flexDirection: 'column',
            alignItems: 'flex-start',
            gap: 0.25
          }}
        >
          <Typography
            variant="caption"
            sx={{
              textTransform: 'uppercase',
              letterSpacing: 1,
              color: 'rgba(226,232,240,0.7)',
              fontWeight: 600
            }}
          >
            Layer View
          </Typography>
          <Typography variant="caption" sx={{ color: 'rgba(148,163,184,0.75)' }}>
            {statusLabel}
          </Typography>
        </Box>
        <IconButton
          size="small"
          onClick={handleCollapseToggle}
          sx={{
            color: 'rgba(226,232,240,0.85)',
            border: '1px solid rgba(148,163,184,0.35)',
            borderRadius: 1.25,
            width: 32,
            height: 32
          }}
        >
          {expanded ? <ExpandLessIcon fontSize="small" /> : <ExpandMoreIcon fontSize="small" />}
        </IconButton>
      </Box>
      <Collapse in={expanded} unmountOnExit>
        <ToggleButtonGroup
          value={selectedValues}
          size="small"
          orientation="vertical"
          onChange={onToggle}
          sx={{
            width: '100%',
            '& .MuiToggleButton-root': {
              borderColor: 'rgba(148,163,184,0.25)',
              color: 'rgba(226,232,240,0.85)',
              justifyContent: 'flex-start',
              textAlign: 'left',
              textTransform: 'none',
              gap: 0.75,
              '&.Mui-selected': {
                bgcolor: 'rgba(59,130,246,0.18)',
                color: '#e2e8f0'
              }
            }
          }}
        >
          {options.map((option) => (
            <ToggleButton key={option.value} value={option.value}>
              {option.label}
            </ToggleButton>
          ))}
        </ToggleButtonGroup>
      </Collapse>
    </Paper>
  );
}

export default LayerControl;
