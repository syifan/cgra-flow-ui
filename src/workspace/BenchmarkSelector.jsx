import { useState, useCallback } from 'react';
import PropTypes from 'prop-types';
import {
  Box,
  Button,
  Checkbox,
  Dialog,
  DialogActions,
  DialogContent,
  DialogTitle,
  IconButton,
  List,
  ListItem,
  ListItemButton,
  ListItemIcon,
  ListItemText,
  Typography
} from '@mui/material';
import ExpandMoreIcon from '@mui/icons-material/ExpandMore';
import CloseIcon from '@mui/icons-material/Close';

// Benchmark descriptions for display
const BENCHMARK_DESCRIPTIONS = {
  bicg: 'Biconjugate Gradient - An iterative method for solving linear systems with sparse matrices.',
  fir: 'Finite Impulse Response filter - A common DSP operation that computes weighted sums of input samples.',
  histogram: 'Image processing operation that computes frequency distribution of pixel intensities.',
  relu: 'Rectified Linear Unit activation function - A fundamental operation in neural networks.',
  gemm: 'General Matrix Multiplication - Fundamental linear algebra operation.',
  conv2d: 'Two-dimensional convolution - Core operation in convolutional neural networks.',
  pooling: 'Pooling operation - Downsampling technique used in neural networks.',
  softmax: 'Softmax activation - Converts logits to probability distribution.'
};

function BenchmarkSelector({
  availableBenchmarks,
  selectedBenchmarks,
  currentBenchmark,
  onSelectionChange,
  onCurrentChange,
  disabled
}) {
  const [open, setOpen] = useState(false);

  const handleOpen = useCallback(() => {
    if (!disabled) {
      setOpen(true);
    }
  }, [disabled]);

  const handleClose = useCallback(() => {
    setOpen(false);
  }, []);

  const handleToggleSelection = useCallback((e, benchmarkName) => {
    e.stopPropagation();
    if (disabled) return;
    onSelectionChange((prev) => ({
      ...prev,
      [benchmarkName]: !prev[benchmarkName]
    }));
  }, [disabled, onSelectionChange]);

  const handleSetCurrent = useCallback((benchmarkName) => {
    if (disabled) return;
    // First ensure the benchmark is selected
    onSelectionChange((prev) => ({
      ...prev,
      [benchmarkName]: true
    }));
    // Then set it as current
    onCurrentChange(benchmarkName);
  }, [disabled, onSelectionChange, onCurrentChange]);

  const selectedCount = Object.values(selectedBenchmarks).filter(Boolean).length;
  const benchmarkList = Object.keys(availableBenchmarks);

  // Build button label
  const getButtonLabel = () => {
    if (selectedCount === 0) {
      return 'No benchmark selected';
    }

    const currentLabel = currentBenchmark
      ? `Current: ${currentBenchmark.toUpperCase()}`
      : 'No current benchmark';

    return `${currentLabel} | ${selectedCount} selected`;
  };

  return (
    <>
      <Button
        variant="outlined"
        onClick={handleOpen}
        disabled={disabled}
        endIcon={<ExpandMoreIcon />}
        sx={{
          textTransform: 'none',
          height: 40,
          borderColor: 'rgba(148, 163, 184, 0.35)',
          color: 'text.primary',
          borderRadius: 2,
          '&:hover': {
            borderColor: 'rgba(148, 163, 184, 0.5)',
            bgcolor: 'rgba(148, 163, 184, 0.1)'
          }
        }}
      >
        {getButtonLabel()}
      </Button>

      <Dialog
        open={open}
        onClose={handleClose}
        maxWidth="sm"
        fullWidth
        PaperProps={{
          sx: {
            bgcolor: 'background.paper',
            backgroundImage: 'none'
          }
        }}
      >
        <DialogTitle sx={{ display: 'flex', alignItems: 'center', justifyContent: 'space-between' }}>
          <Typography variant="h6">Select Benchmarks</Typography>
          <IconButton
            edge="end"
            onClick={handleClose}
            aria-label="close"
            size="small"
          >
            <CloseIcon />
          </IconButton>
        </DialogTitle>
        <DialogContent dividers>
          <Typography variant="body2" sx={{ color: 'text.secondary', mb: 2 }}>
            Click on a benchmark to set it as current. Use the checkbox to include/exclude from mapping.
          </Typography>
          <List dense>
            {benchmarkList.map((name) => {
              const isSelected = Boolean(selectedBenchmarks[name]);
              const isCurrent = currentBenchmark === name;
              const description = BENCHMARK_DESCRIPTIONS[name] || `Benchmark: ${name}`;

              return (
                <ListItem
                  key={name}
                  disablePadding
                  sx={{
                    mb: 0.5,
                    borderRadius: 1,
                    border: isCurrent ? '2px solid' : '2px solid transparent',
                    borderColor: isCurrent ? 'warning.main' : 'transparent',
                    bgcolor: isCurrent ? 'rgba(255, 167, 38, 0.08)' : 'transparent'
                  }}
                >
                  <ListItemButton
                    onClick={() => handleSetCurrent(name)}
                    disabled={disabled}
                    dense
                    sx={{
                      borderRadius: 1
                    }}
                  >
                    <ListItemIcon>
                      <Checkbox
                        edge="start"
                        checked={isSelected}
                        onClick={(e) => handleToggleSelection(e, name)}
                        tabIndex={-1}
                        disabled={disabled}
                      />
                    </ListItemIcon>
                    <ListItemText
                      primary={
                        <Box sx={{ display: 'flex', alignItems: 'center', gap: 1 }}>
                          <Typography variant="body1" sx={{ fontWeight: 500 }}>
                            {name.toUpperCase()}
                          </Typography>
                          {isCurrent && (
                            <Typography
                              variant="caption"
                              sx={{
                                px: 1,
                                py: 0.25,
                                borderRadius: 1,
                                bgcolor: 'warning.main',
                                color: 'warning.contrastText',
                                fontSize: '0.65rem',
                                fontWeight: 600
                              }}
                            >
                              CURRENT
                            </Typography>
                          )}
                        </Box>
                      }
                      secondary={description}
                    />
                  </ListItemButton>
                </ListItem>
              );
            })}
          </List>
          {benchmarkList.length === 0 && (
            <Typography variant="body2" sx={{ color: 'text.secondary', textAlign: 'center', py: 3 }}>
              No benchmarks available. Please ensure the benchmark index is loaded.
            </Typography>
          )}
        </DialogContent>
        <DialogActions sx={{ px: 3, py: 2 }}>
          <Typography variant="body2" sx={{ flex: 1, color: 'text.secondary' }}>
            {selectedCount} benchmark{selectedCount !== 1 ? 's' : ''} selected
          </Typography>
          <Button onClick={handleClose} variant="contained">
            Done
          </Button>
        </DialogActions>
      </Dialog>
    </>
  );
}

BenchmarkSelector.propTypes = {
  availableBenchmarks: PropTypes.object.isRequired,
  selectedBenchmarks: PropTypes.object.isRequired,
  currentBenchmark: PropTypes.string,
  onSelectionChange: PropTypes.func.isRequired,
  onCurrentChange: PropTypes.func.isRequired,
  disabled: PropTypes.bool
};

export default BenchmarkSelector;
