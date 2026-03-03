import { useCallback, useEffect, useRef, useState } from 'react';
import PropTypes from 'prop-types';
import {
  Alert,
  Box,
  Button,
  CircularProgress,
  LinearProgress,
  List,
  ListItem,
  ListItemIcon,
  ListItemText,
  Typography,
} from '@mui/material';
import PlayArrowIcon from '@mui/icons-material/PlayArrow';
import CheckCircleIcon from '@mui/icons-material/CheckCircle';
import ErrorIcon from '@mui/icons-material/Error';
import HourglassEmptyIcon from '@mui/icons-material/HourglassEmpty';
import {
  submitRunTestsJob,
  subscribeToJob,
} from '../services/verificationService';

// status: 'idle' | 'pending' | 'running' | 'done' | 'error'

function StatusIcon({ status }) {
  if (status === 'pass') return <CheckCircleIcon color="success" fontSize="small" />;
  if (status === 'fail') return <ErrorIcon color="error" fontSize="small" />;
  if (status === 'running') return <CircularProgress size={16} />;
  return <HourglassEmptyIcon color="disabled" fontSize="small" />;
}

StatusIcon.propTypes = {
  status: PropTypes.string.isRequired,
};

function TestsPanel({ projectId }) {
  const [status, setStatus] = useState('idle');
  const [cases, setCases] = useState([]);
  const [total, setTotal] = useState(0);
  const [completed, setCompleted] = useState(0);
  const [errorMessage, setErrorMessage] = useState(null);
  const unsubscribeRef = useRef(null);

  // Clean up subscription on unmount
  useEffect(() => {
    return () => {
      unsubscribeRef.current?.();
    };
  }, []);

  const handleRunTests = useCallback(async () => {
    if (!projectId) return;

    // Cancel any previous subscription
    unsubscribeRef.current?.();
    unsubscribeRef.current = null;

    setStatus('pending');
    setCases([]);
    setTotal(0);
    setCompleted(0);
    setErrorMessage(null);

    let jobId;
    try {
      jobId = await submitRunTestsJob(projectId);
    } catch (err) {
      setStatus('error');
      setErrorMessage(err.message || 'Failed to submit run-tests job.');
      return;
    }

    setStatus('running');

    const unsubscribe = subscribeToJob(jobId, ({ status: jobStatus, result, error }) => {
      // Update per-test progress from incremental info patches
      if (result) {
        if (Array.isArray(result.cases)) setCases(result.cases);
        if (typeof result.total === 'number') setTotal(result.total);
        if (typeof result.completed === 'number') setCompleted(result.completed);
      }

      if (jobStatus === 'success') {
        unsubscribeRef.current?.();
        unsubscribeRef.current = null;
        setStatus('done');
      } else if (jobStatus === 'failed') {
        unsubscribeRef.current?.();
        unsubscribeRef.current = null;
        setStatus('error');
        setErrorMessage(error || 'Test run failed.');
      }
    });

    unsubscribeRef.current = unsubscribe;
  }, [projectId]);

  const isRunning = status === 'pending' || status === 'running';
  const pct = total > 0 ? Math.round((completed / total) * 100) : 0;
  const passCount = cases.filter((c) => c.status === 'pass').length;
  const failCount = cases.filter((c) => c.status === 'fail').length;

  return (
    <Box sx={{ p: 1 }}>
      {/* Run Tests button */}
      <Button
        variant="contained"
        size="small"
        startIcon={isRunning ? <CircularProgress size={14} color="inherit" /> : <PlayArrowIcon />}
        onClick={handleRunTests}
        disabled={isRunning || !projectId}
        sx={{ mb: 1 }}
      >
        {isRunning ? 'Running…' : 'Run Tests'}
      </Button>

      {/* Progress bar */}
      {(status === 'running' || status === 'done') && total > 0 && (
        <Box sx={{ mb: 1 }}>
          <LinearProgress
            variant="determinate"
            value={pct}
            sx={{ height: 8, borderRadius: 1, mb: 0.5 }}
          />
          <Typography variant="caption" color="text.secondary">
            {completed} / {total} ({pct}%)
          </Typography>
        </Box>
      )}

      {/* Overall summary */}
      {status === 'done' && (
        <Typography
          variant="body2"
          sx={{ mb: 1, fontWeight: 'bold', color: failCount === 0 ? 'success.main' : 'error.main' }}
        >
          {passCount} passed, {failCount} failed
        </Typography>
      )}

      {/* Error alert */}
      {status === 'error' && errorMessage && (
        <Alert severity="error" sx={{ mb: 1, fontSize: '0.8rem' }}>
          {errorMessage}
        </Alert>
      )}

      {/* Per-test list */}
      {cases.length > 0 && (
        <List dense disablePadding sx={{ overflow: 'auto', maxHeight: 400 }}>
          {cases.map((tc, idx) => (
            <ListItem key={idx} divider alignItems="flex-start">
              <ListItemIcon sx={{ minWidth: 32, mt: 0.5 }}>
                <StatusIcon status={tc.status} />
              </ListItemIcon>
              <ListItemText
                primary={
                  <Box sx={{ display: 'flex', alignItems: 'baseline', gap: 1, flexWrap: 'wrap' }}>
                    <Typography variant="body2" sx={{ fontFamily: 'monospace', fontSize: '0.75rem' }}>
                      {tc.file}
                      {tc.caseName && (
                        <Typography
                          component="span"
                          sx={{ color: 'primary.main', fontFamily: 'monospace', fontSize: '0.75rem' }}
                        >
                          ::{tc.caseName}
                        </Typography>
                      )}
                    </Typography>
                    {tc.durationMs != null && (
                      <Typography variant="caption" color="text.secondary">
                        {(tc.durationMs / 1000).toFixed(1)}s
                      </Typography>
                    )}
                  </Box>
                }
                secondary={
                  <Typography variant="caption" color="text.secondary">
                    {tc.label}
                  </Typography>
                }
              />
            </ListItem>
          ))}
        </List>
      )}

      {/* Idle state hint when no project */}
      {status === 'idle' && !projectId && (
        <Typography variant="caption" color="text.secondary">
          Open a project to run tests.
        </Typography>
      )}
    </Box>
  );
}

TestsPanel.propTypes = {
  projectId: PropTypes.string,
};

export default TestsPanel;
