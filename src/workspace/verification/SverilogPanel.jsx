import { useCallback, useEffect, useRef, useState } from 'react';
import PropTypes from 'prop-types';
import {
  Alert,
  Box,
  Button,
  CircularProgress,
  Tooltip,
  Typography,
} from '@mui/material';
import PlayArrowIcon from '@mui/icons-material/PlayArrow';
import {
  submitVerilogGenerationJob,
  subscribeToJob,
} from '../services/verificationService';

// status: 'idle' | 'pending' | 'running' | 'done' | 'error'

function SverilogPanel({ architecture, projectId, onSverilogSuccess }) {
  const [status, setStatus] = useState('idle');
  const [sverilogText, setSverilogText] = useState(null);
  const [errorMessage, setErrorMessage] = useState(null);
  const unsubscribeRef = useRef(null);

  // Clean up subscription on unmount
  useEffect(() => {
    return () => {
      unsubscribeRef.current?.();
    };
  }, []);

  const handleGenerate = useCallback(async () => {
    if (!architecture || !projectId) return;

    // Cancel any previous subscription before starting a new job
    unsubscribeRef.current?.();
    unsubscribeRef.current = null;

    setStatus('pending');
    setSverilogText(null);
    setErrorMessage(null);

    let jobId;
    try {
      jobId = await submitVerilogGenerationJob(projectId);
    } catch (err) {
      setStatus('error');
      setErrorMessage(err.message || 'Failed to submit job.');
      return;
    }

    setStatus('running');

    const unsubscribe = subscribeToJob(jobId, async ({ status: jobStatus, result, error }) => {
      if (jobStatus === 'success') {
        unsubscribeRef.current?.();
        unsubscribeRef.current = null;

        // Notify parent that SVerilog generation succeeded (enables Synthesize)
        onSverilogSuccess?.();

        // Fetch SVerilog text from the first uploaded file's public URL
        const files = result?.verilog_files ?? [];
        if (files.length > 0 && files[0].publicUrl) {
          try {
            const response = await fetch(files[0].publicUrl);
            if (!response.ok) throw new Error(`HTTP ${response.status}`);
            const text = await response.text();
            setSverilogText(text);
            setStatus('done');
          } catch (fetchErr) {
            setStatus('error');
            setErrorMessage(`Job completed but failed to load SVerilog file: ${fetchErr.message}`);
          }
        } else {
          // Fallback: display stdout when no files were uploaded
          setSverilogText(result?.stdout ?? '(No output)');
          setStatus('done');
        }
      } else if (jobStatus === 'failed') {
        unsubscribeRef.current?.();
        unsubscribeRef.current = null;
        setStatus('error');
        setErrorMessage(error || 'Verilog generation failed.');
      }
      // 'queued' / 'running' — keep spinner, nothing to do
    });

    unsubscribeRef.current = unsubscribe;
  }, [architecture, projectId]);

  const isInFlight = status === 'pending' || status === 'running';
  const canGenerate = !!architecture && !!projectId && !isInFlight;

  return (
    <Box sx={{ display: 'flex', flexDirection: 'column', gap: 1 }}>
      {/* Generate button */}
      <Tooltip
        title={!architecture ? 'No architecture loaded' : ''}
        disableHoverListener={!!architecture}
      >
        <span style={{ display: 'inline-block' }}>
          <Button
            variant="contained"
            size="small"
            disabled={!canGenerate}
            onClick={handleGenerate}
            sx={{ mb: 1 }}
            startIcon={
              isInFlight
                ? <CircularProgress size={16} color="inherit" />
                : <PlayArrowIcon />
            }
          >
            {isInFlight ? 'Generating\u2026' : 'Generate'}
          </Button>
        </span>
      </Tooltip>

      {/* Running hint */}
      {isInFlight && (
        <Typography variant="caption" color="text.secondary" sx={{ textAlign: 'center' }}>
          This may take a minute\u2026
        </Typography>
      )}

      {/* Error state */}
      {status === 'error' && (
        <Alert severity="error" sx={{ whiteSpace: 'pre-wrap', wordBreak: 'break-word' }}>
          {errorMessage}
        </Alert>
      )}

      {/* Code viewer — shown in idle (placeholder) and done (real SVerilog) states */}
      {(status === 'idle' || status === 'done') && (
        <Box
          component="pre"
          sx={{
            m: 0,
            p: 2,
            background: '#1e1e1e',
            color: '#d4d4d4',
            fontFamily: 'monospace',
            fontSize: '0.8rem',
            lineHeight: 1.6,
            overflow: 'auto',
            maxHeight: '400px',
            borderRadius: 1,
            whiteSpace: 'pre',
          }}
        >
          {status === 'done' && sverilogText
            ? sverilogText
            : '// Click Generate to produce SVerilog for the current architecture.'}
        </Box>
      )}
    </Box>
  );
}

SverilogPanel.propTypes = {
  architecture: PropTypes.object,
  projectId: PropTypes.string,
  onSverilogSuccess: PropTypes.func,
};

export default SverilogPanel;

