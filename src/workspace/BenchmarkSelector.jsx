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
import StarIcon from '@mui/icons-material/Star';
import StarBorderIcon from '@mui/icons-material/StarBorder';
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

  const handleToggle = useCallback((benchmarkName) => {
    if (disabled) return;
    onSelectionChange((prev) => ({
      ...prev,
      [benchmarkName]: !prev[benchmarkName]
    }));
  }, [disabled, onSelectionChange]);

  const handleMakeCurrent = useCallback((benchmarkName) => {
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
        size="small"
        onClick={handleOpen}
        disabled={disabled}
        endIcon={<ExpandMoreIcon />}
        sx={{
          textTransform: 'none',
          borderColor: 'rgba(148, 163, 184, 0.35)',
          color: 'text.primary',
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
            Select benchmarks to map on your CGRA design. Click the star to set a benchmark as the current one for detailed analysis.
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
                  secondaryAction={
                    <IconButton
                      edge="end"
                      onClick={() => handleMakeCurrent(name)}
                      disabled={disabled}
                      sx={{
                        color: isCurrent ? 'warning.main' : 'text.secondary'
                      }}
                    >
                      {isCurrent ? <StarIcon /> : <StarBorderIcon />}
                    </IconButton>
                  }
                >
                  <ListItemButton
                    onClick={() => handleToggle(name)}
                    disabled={disabled}
                    dense
                  >
                    <ListItemIcon>
                      <Checkbox
                        edge="start"
                        checked={isSelected}
                        tabIndex={-1}
                        disableRipple
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
                                fontSize: '0.65rem'
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
