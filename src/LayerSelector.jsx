import { useState, useCallback } from 'react';
import {
  Box,
  Checkbox,
  FormControlLabel,
  FormGroup,
  IconButton,
  Paper,
  Typography
} from '@mui/material';
import ExpandMoreIcon from '@mui/icons-material/ExpandMore';
import ExpandLessIcon from '@mui/icons-material/ExpandLess';

export const LAYER_MODES = {
  AUTOMATIC: 'automatic',
  CGRA: 'cgra',
  CGRA_CONNECTION: 'cgraConnection',
  PE: 'pe',
  PE_CONNECTION: 'peConnection'
};

function LayerSelector({ layerVisibility, onLayerVisibilityChange }) {
  const [expanded, setExpanded] = useState(false);

  const handleToggle = useCallback(() => {
    setExpanded((prev) => !prev);
  }, []);

  const handleCheckboxChange = useCallback(
    (layer) => (event) => {
      const checked = event.target.checked;
      
      if (layer === LAYER_MODES.AUTOMATIC) {
        // When automatic is checked, uncheck all manual layers
        onLayerVisibilityChange({
          automatic: checked,
          cgra: false,
          cgraConnection: false,
          pe: false,
          peConnection: false
        });
      } else {
        // When any manual layer is checked, uncheck automatic
        onLayerVisibilityChange({
          ...layerVisibility,
          automatic: false,
          [layer]: checked
        });
      }
    },
    [layerVisibility, onLayerVisibilityChange]
  );

  const getDisplayText = () => {
    if (layerVisibility.automatic) {
      return 'Layers: Automatic';
    }

    const activeLayers = [];
    if (layerVisibility.cgra) activeLayers.push('CGRA');
    if (layerVisibility.cgraConnection) activeLayers.push('CGRA-Conn');
    if (layerVisibility.pe) activeLayers.push('PE');
    if (layerVisibility.peConnection) activeLayers.push('PE-Conn');

    if (activeLayers.length === 0) {
      return 'Layers: None';
    }

    return `Layers: ${activeLayers.join(', ')}`;
  };

  return (
    <Paper
      elevation={3}
      sx={{
        position: 'absolute',
        top: 16,
        right: 16,
        zIndex: 1000,
        bgcolor: 'rgba(15, 23, 42, 0.95)',
        backdropFilter: 'blur(12px)',
        borderRadius: 2,
        border: '1px solid rgba(148, 163, 184, 0.3)',
        overflow: 'hidden'
      }}
    >
      {!expanded ? (
        <Box
          sx={{
            display: 'flex',
            alignItems: 'center',
            gap: 1,
            px: 2,
            py: 1,
            cursor: 'pointer'
          }}
          onClick={handleToggle}
        >
          <Typography
            variant="body2"
            sx={{
              color: 'text.primary',
              fontFamily: '"Fira Code", monospace',
              fontSize: 14
            }}
          >
            {getDisplayText()}
          </Typography>
          <IconButton size="small" sx={{ color: 'text.secondary' }}>
            <ExpandMoreIcon fontSize="small" />
          </IconButton>
        </Box>
      ) : (
        <Box sx={{ p: 2, minWidth: 240 }}>
          <Box
            sx={{
              display: 'flex',
              alignItems: 'center',
              justifyContent: 'space-between',
              mb: 1.5
            }}
          >
            <Typography
              variant="subtitle2"
              sx={{
                color: 'text.primary',
                fontWeight: 600,
                fontFamily: '"Fira Code", monospace'
              }}
            >
              Layers
            </Typography>
            <IconButton size="small" onClick={handleToggle} sx={{ color: 'text.secondary' }}>
              <ExpandLessIcon fontSize="small" />
            </IconButton>
          </Box>
          <FormGroup>
            <FormControlLabel
              control={
                <Checkbox
                  checked={layerVisibility.automatic}
                  onChange={handleCheckboxChange(LAYER_MODES.AUTOMATIC)}
                  size="small"
                  sx={{
                    color: 'text.secondary',
                    '&.Mui-checked': { color: 'primary.main' }
                  }}
                />
              }
              label={
                <Typography variant="body2" sx={{ fontFamily: '"Fira Code", monospace' }}>
                  Automatic
                </Typography>
              }
            />
            <FormControlLabel
              control={
                <Checkbox
                  checked={layerVisibility.cgra}
                  onChange={handleCheckboxChange(LAYER_MODES.CGRA)}
                  size="small"
                  disabled={layerVisibility.automatic}
                  sx={{
                    color: 'text.secondary',
                    '&.Mui-checked': { color: 'primary.main' }
                  }}
                />
              }
              label={
                <Typography variant="body2" sx={{ fontFamily: '"Fira Code", monospace' }}>
                  CGRA
                </Typography>
              }
            />
            <FormControlLabel
              control={
                <Checkbox
                  checked={layerVisibility.cgraConnection}
                  onChange={handleCheckboxChange(LAYER_MODES.CGRA_CONNECTION)}
                  size="small"
                  disabled={layerVisibility.automatic}
                  sx={{
                    color: 'text.secondary',
                    '&.Mui-checked': { color: 'primary.main' }
                  }}
                />
              }
              label={
                <Typography variant="body2" sx={{ fontFamily: '"Fira Code", monospace' }}>
                  CGRA-Connection
                </Typography>
              }
            />
            <FormControlLabel
              control={
                <Checkbox
                  checked={layerVisibility.pe}
                  onChange={handleCheckboxChange(LAYER_MODES.PE)}
                  size="small"
                  disabled={layerVisibility.automatic}
                  sx={{
                    color: 'text.secondary',
                    '&.Mui-checked': { color: 'primary.main' }
                  }}
                />
              }
              label={
                <Typography variant="body2" sx={{ fontFamily: '"Fira Code", monospace' }}>
                  Processing Elements (PE)
                </Typography>
              }
            />
            <FormControlLabel
              control={
                <Checkbox
                  checked={layerVisibility.peConnection}
                  onChange={handleCheckboxChange(LAYER_MODES.PE_CONNECTION)}
                  size="small"
                  disabled={layerVisibility.automatic}
                  sx={{
                    color: 'text.secondary',
                    '&.Mui-checked': { color: 'primary.main' }
                  }}
                />
              }
              label={
                <Typography variant="body2" sx={{ fontFamily: '"Fira Code", monospace' }}>
                  PE connection
                </Typography>
              }
            />
          </FormGroup>
        </Box>
      )}
    </Paper>
  );
}

export default LayerSelector;
