import { useCallback, useEffect, useRef, useState } from 'react';
import PropTypes from 'prop-types';
import {
  Alert,
  Box,
  Button,
  CircularProgress,
  LinearProgress,
  Paper,
  Table,
  TableBody,
  TableCell,
  TableContainer,
  TableRow,
  Tooltip,
  Typography,
} from '@mui/material';
import PlayArrowIcon from '@mui/icons-material/PlayArrow';
import {
  submitSynthesisJob,
  subscribeToJob,
} from '../services/verificationService';

// status: 'idle' | 'pending' | 'running' | 'done' | 'error'

/**
 * Format a nullable number value with a unit suffix.
 * Returns '–' when the value is null or undefined.
 */
function MetricValue({ value, unit }) {
  if (value === null || value === undefined) {
    return <Typography variant="body2" sx={{ fontFamily: 'monospace' }}>–</Typography>;
  }
  return (
    <Typography variant="body2" sx={{ fontFamily: 'monospace' }}>
      {value} {unit}
    </Typography>
  );
}

MetricValue.propTypes = {
  value: PropTypes.number,
  unit: PropTypes.string,
};

function ReportPanel({ projectId, sverilogReady }) {
  const [status, setStatus] = useState('idle');
  const [progress, setProgress] = useState(0);
  const [elapsedSeconds, setElapsedSeconds] = useState(0);
  const [result, setResult] = useState(null);
  const [errorMessage, setErrorMessage] = useState(null);
  // Accumulated stage log: [{ progress, stage, timeCost }]
  const [stages, setStages] = useState([]);

  const unsubscribeRef = useRef(null);
  const intervalRef = useRef(null);

  // Stop the elapsed-time counter
  const stopTimer = useCallback(() => {
    if (intervalRef.current) {
      clearInterval(intervalRef.current);
      intervalRef.current = null;
    }
  }, []);

  // Start the elapsed-time counter
  const startTimer = useCallback(() => {
    stopTimer();
    setElapsedSeconds(0);
    intervalRef.current = setInterval(() => {
      setElapsedSeconds((s) => parseFloat((s + 1).toFixed(1)));
    }, 1000);
  }, [stopTimer]);

  // Clean up on unmount
  useEffect(() => {
    return () => {
      unsubscribeRef.current?.();
      stopTimer();
    };
  }, [stopTimer]);

  const isInFlight = status === 'pending' || status === 'running';
  // Synthesis is always allowed: if no SVerilog job has run yet, the executor
  // falls back to the bundled default_design.v baked into the Docker image.
  const canSynthesize = !!projectId && !isInFlight;

  const handleSynthesize = useCallback(async () => {
    if (!canSynthesize) return;

    // Cancel any previous subscription
    unsubscribeRef.current?.();
    unsubscribeRef.current = null;

    setStatus('pending');
    setProgress(0);
    setElapsedSeconds(0);
    setResult(null);
    setErrorMessage(null);
    setStages([]);
    stopTimer();

    let jobId;
    try {
      jobId = await submitSynthesisJob(projectId);
    } catch (err) {
      setStatus('error');
      setErrorMessage(err.message || 'Failed to submit synthesis job.');
      return;
    }

    setStatus('running');
    startTimer();

    const unsubscribe = subscribeToJob(jobId, ({ status: jobStatus, result: jobResult, error }) => {
      if (jobStatus === 'running' || jobStatus === 'queued') {
        // Update progress bar and accumulate stage log
        if (jobResult?.progress != null) {
          setProgress(jobResult.progress);
          if (jobResult.stage) {
            setStages((prev) => {
              // Avoid duplicating the same progress entry
              if (prev.length > 0 && prev[prev.length - 1].progress === jobResult.progress) {
                return prev;
              }
              return [...prev, {
                progress: jobResult.progress,
                stage: jobResult.stage,
                timeCost: jobResult.timeCost ?? null,
              }];
            });
          }
        }
        return;
      }

      if (jobStatus === 'success') {
        unsubscribeRef.current?.();
        unsubscribeRef.current = null;
        stopTimer();
        setProgress(100);
        setResult(jobResult);
        setStatus('done');
        return;
      }

      if (jobStatus === 'failed') {
        unsubscribeRef.current?.();
        unsubscribeRef.current = null;
        stopTimer();
        setStatus('error');
        setErrorMessage(error || 'Synthesis job failed.');
      }
    });

    unsubscribeRef.current = unsubscribe;
  }, [canSynthesize, projectId, startTimer, stopTimer]);

  const synthesizeButton = (
    <Button
      variant="contained"
      size="small"
      disabled={!canSynthesize}
      onClick={handleSynthesize}
      sx={{ mb: 1 }}
      startIcon={
        isInFlight
          ? <CircularProgress size={16} color="inherit" />
          : <PlayArrowIcon />
      }
    >
      {isInFlight ? 'Synthesizing\u2026' : 'Synthesize'}
    </Button>
  );

  return (
    <Box sx={{ display: 'flex', flexDirection: 'column', gap: 1.5 }}>

      {/* Synthesize button — tooltip hints about default design when SVerilog not yet generated */}
      {!sverilogReady ? (
        <Tooltip
          title="No SVerilog generated yet — will use the bundled default design for synthesis"
          placement="top"
        >
          <span style={{ display: 'inline-block' }}>{synthesizeButton}</span>
        </Tooltip>
      ) : (
        synthesizeButton
      )}

      {/* Progress bar + percentage */}
      {(isInFlight || status === 'done') && (
        <Box sx={{ display: 'flex', alignItems: 'center', gap: 1 }}>
          <LinearProgress
            variant="determinate"
            value={progress}
            sx={{ flexGrow: 1, height: 8, borderRadius: 1 }}
          />
          <Typography variant="caption" sx={{ minWidth: 36, textAlign: 'right' }}>
            {progress}%
          </Typography>
        </Box>
      )}

      {/* Stage log */}
      {(isInFlight || status === 'done') && stages.length > 0 && (
        <Box
          sx={{
            bgcolor: 'grey.900',
            borderRadius: 1,
            px: 1.5,
            py: 1,
            fontFamily: 'monospace',
            fontSize: '0.75rem',
            lineHeight: 1.8,
            display: 'flex',
            flexDirection: 'column',
            gap: 0,
          }}
        >
          {stages.map((s, i) => (
            <Box key={i} sx={{ display: 'flex', gap: 1, color: 'grey.300' }}>
              <Box component="span" sx={{ color: 'success.light', minWidth: 14 }}>✓</Box>
              <Box component="span" sx={{ color: 'primary.light', minWidth: 32 }}>{s.progress}%</Box>
              <Box component="span" sx={{ color: 'warning.light', minWidth: 110 }}>[{s.stage}]</Box>
              {s.timeCost != null && (
                <Box component="span" sx={{ color: 'grey.500' }}>({s.timeCost}s)</Box>
              )}
            </Box>
          ))}
          {isInFlight && (
            <Box sx={{ display: 'flex', gap: 1, color: 'grey.400' }}>
              <Box component="span" sx={{ color: 'warning.main', minWidth: 14 }}>⋯</Box>
              <Box component="span" sx={{ color: 'grey.400' }}>running…</Box>
            </Box>
          )}
        </Box>
      )}

      {/* Error alert */}
      {status === 'error' && (
        <Alert severity="error" sx={{ whiteSpace: 'pre-wrap', wordBreak: 'break-word' }}>
          {errorMessage}
        </Alert>
      )}

      {/* Results table — shown while running (with live time) and after done */}
      {(isInFlight || status === 'done') && (
        <TableContainer component={Paper} variant="outlined">
          <Table size="small">
            <TableBody>

              {/* Time cost — live counter while running, final value when done */}
              <TableRow hover>
                <TableCell>
                  <Typography variant="body2">Time cost</Typography>
                </TableCell>
                <TableCell align="right">
                  <Typography variant="body2" sx={{ fontFamily: 'monospace' }}>
                    {status === 'done' && result?.timeCost != null
                      ? `${result.timeCost} s`
                      : `${elapsedSeconds.toFixed(1)} s`}
                  </Typography>
                </TableCell>
              </TableRow>

              {/* Tiles area */}
              <TableRow hover>
                <TableCell>
                  <Typography variant="body2">Tiles area</Typography>
                </TableCell>
                <TableCell align="right">
                  <MetricValue value={result?.tileArea} unit="mm²" />
                </TableCell>
              </TableRow>

              {/* Tiles power — always '–' (Yosys cannot estimate dynamic power) */}
              <TableRow hover>
                <TableCell>
                  <Tooltip title="Yosys does not provide dynamic power estimation" placement="left">
                    <Typography variant="body2" sx={{ cursor: 'help', textDecoration: 'underline dotted' }}>
                      Tiles power
                    </Typography>
                  </Tooltip>
                </TableCell>
                <TableCell align="right">
                  <Typography variant="body2" sx={{ fontFamily: 'monospace' }}>–</Typography>
                </TableCell>
              </TableRow>

              {/* SPM area */}
              <TableRow hover>
                <TableCell>
                  <Typography variant="body2">SPM area</Typography>
                </TableCell>
                <TableCell align="right">
                  <MetricValue value={result?.spmArea} unit="mm²" />
                </TableCell>
              </TableRow>

              {/* SPM power */}
              <TableRow hover>
                <TableCell>
                  <Typography variant="body2">SPM power</Typography>
                </TableCell>
                <TableCell align="right">
                  <MetricValue value={result?.spmPower} unit="mW" />
                </TableCell>
              </TableRow>

            </TableBody>
          </Table>
        </TableContainer>
      )}
    </Box>
  );
}

ReportPanel.propTypes = {
  projectId: PropTypes.string,
  sverilogReady: PropTypes.bool,
};

export default ReportPanel;
