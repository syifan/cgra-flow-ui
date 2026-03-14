import { useState, useRef, useEffect } from 'react';
import PropTypes from 'prop-types';
import {
  Accordion,
  AccordionDetails,
  AccordionSummary,
  Alert,
  Box,
  Divider,
  Grid,
  LinearProgress,
  Typography,
  TextField,
  Select,
  MenuItem,
  FormControl,
  InputLabel,
  Button,
  Paper,
  InputAdornment,
  IconButton,
} from '@mui/material';
import ExpandMoreIcon from '@mui/icons-material/ExpandMore';
import FolderOpenIcon from '@mui/icons-material/FolderOpen';
import ReportPanel from './verification/ReportPanel';
import { submitLayoutJob, subscribeToJob } from './services/verificationService';

function LayoutTab({ projectId, sverilogReady }) {
  const [sdcPath, setSdcPath] = useState('');
  const [mkPath, setMkPath] = useState('');
  const [sdcFile, setSdcFile] = useState(null);
  const [mkFile, setMkFile] = useState(null);
  const [process, setProcess] = useState('asap7');
  const [jobId, setJobId] = useState(null);
  const [jobStatus, setJobStatus] = useState(null);
  const [jobProgress, setJobProgress] = useState(0);
  const [jobStage, setJobStage] = useState('');
  const [imageUrl, setImageUrl] = useState(null);
  const [jobError, setJobError] = useState(null);
  const [jobLog, setJobLog] = useState(null);
  const [elapsedSec, setElapsedSec] = useState(0);
  const [timeCost, setTimeCost] = useState(null);

  const sdcInputRef = useRef(null);
  const mkInputRef = useRef(null);
  const jobStartRef = useRef(null);
  const timerRef = useRef(null);

  const formatElapsed = (sec) => {
    const m = Math.floor(sec / 60);
    const s = sec % 60;
    return m > 0 ? `${m}m ${s}s` : `${s}s`;
  };

  const handleRun = async () => {
    setJobStatus('queued');
    setJobProgress(0);
    setJobStage('');
    setImageUrl(null);
    setJobError(null);
    setJobLog(null);
    setElapsedSec(0);
    setTimeCost(null);
    jobStartRef.current = Date.now();
    try {
      const sdcContent = sdcFile ? await sdcFile.text() : null;
      const mkContent  = mkFile  ? await mkFile.text()  : null;
      const id = await submitLayoutJob(projectId, sdcContent, mkContent);
      setJobId(id);
    } catch (err) {
      setJobStatus('failed');
      setJobError(err.message || 'Failed to submit layout job');
    }
  };

  // Client-side elapsed-time ticker
  useEffect(() => {
    if (jobStatus === 'queued' || jobStatus === 'running') {
      timerRef.current = setInterval(() => {
        if (jobStartRef.current) {
          setElapsedSec(Math.floor((Date.now() - jobStartRef.current) / 1000));
        }
      }, 1000);
      return () => clearInterval(timerRef.current);
    } else {
      clearInterval(timerRef.current);
    }
  }, [jobStatus]);

  useEffect(() => {
    if (!jobId) return;
    const unsubscribe = subscribeToJob(jobId, (update) => {
      setJobStatus(update.status);
      if (update.result) {
        if (update.result.progress !== undefined) setJobProgress(update.result.progress);
        if (update.result.stage   !== undefined) setJobStage(update.result.stage);
        if (update.result.imageUrl)              setImageUrl(update.result.imageUrl);
        if (update.result.timeCost !== undefined) setTimeCost(update.result.timeCost);
        if (update.result.log)                   setJobLog(update.result.log);
      }
      if (update.error) setJobError(update.error);
    });
    return () => unsubscribe();
  }, [jobId]);

  return (
    <Box sx={{ height: '100%', p: 2, boxSizing: 'border-box' }}>
      <Grid container spacing={2} sx={{ height: '100%' }}>
        {/* Left column: Report Area/Power */}
        <Grid size="grow" sx={{ height: '100%', overflow: 'auto' }}>
          <Accordion defaultExpanded>
            <AccordionSummary expandIcon={<ExpandMoreIcon />}>
              <Typography variant="subtitle1" fontWeight="bold">Report Area/Power</Typography>
            </AccordionSummary>
            <AccordionDetails>
              <ReportPanel
                projectId={projectId}
                sverilogReady={sverilogReady}
              />
            </AccordionDetails>
          </Accordion>
        </Grid>

        <Divider orientation="vertical" flexItem />

        {/* Right column: Place and Route */}
        <Grid size="grow" sx={{ height: '100%', overflow: 'auto' }}>
          <Paper elevation={2} sx={{ p: 3, display: 'flex', flexDirection: 'column', gap: 2 }}>
            <Typography variant="h6">Place and Route</Typography>

            {/* Hidden file inputs */}
            <input
              ref={sdcInputRef}
              type="file"
              accept=".sdc"
              style={{ display: 'none' }}
              onChange={(e) => {
                const f = e.target.files[0];
                if (f) { setSdcFile(f); setSdcPath(f.name); }
              }}
            />
            <input
              ref={mkInputRef}
              type="file"
              accept=".mk"
              style={{ display: 'none' }}
              onChange={(e) => {
                const f = e.target.files[0];
                if (f) { setMkFile(f); setMkPath(f.name); }
              }}
            />

            <TextField
              label="Constraint (constraint.sdc)"
              placeholder="Click to select constraint.sdc..."
              value={sdcPath}
              onClick={() => sdcInputRef.current.click()}
              inputProps={{ readOnly: true, style: { cursor: 'pointer' } }}
              fullWidth
              size="small"
              InputProps={{
                endAdornment: (
                  <InputAdornment position="end">
                    <IconButton size="small" onClick={() => sdcInputRef.current.click()}>
                      <FolderOpenIcon fontSize="small" />
                    </IconButton>
                  </InputAdornment>
                ),
              }}
            />

            <TextField
              label="Config (config.mk)"
              placeholder="Click to select config.mk..."
              value={mkPath}
              onClick={() => mkInputRef.current.click()}
              inputProps={{ readOnly: true, style: { cursor: 'pointer' } }}
              fullWidth
              size="small"
              InputProps={{
                endAdornment: (
                  <InputAdornment position="end">
                    <IconButton size="small" onClick={() => mkInputRef.current.click()}>
                      <FolderOpenIcon fontSize="small" />
                    </IconButton>
                  </InputAdornment>
                ),
              }}
            />

            <FormControl fullWidth size="small">
              <InputLabel>Process</InputLabel>
              <Select
                value={process}
                label="Process"
                onChange={(e) => setProcess(e.target.value)}
              >
                <MenuItem value="asap7">asap7</MenuItem>
                <MenuItem value="nangate45">nangate45</MenuItem>
                <MenuItem value="sky130hd">sky130hd</MenuItem>
              </Select>
            </FormControl>

            <Box sx={{ display: 'flex', alignItems: 'center', gap: 2 }}>
              <Button
                variant="contained"
                onClick={handleRun}
                disabled={jobStatus === 'queued' || jobStatus === 'running'}
              >
                RTL → Layout
              </Button>
            </Box>

            {(jobStatus === 'queued' || jobStatus === 'running') && (
              <Box sx={{ mt: 1 }}>
                <LinearProgress variant="determinate" value={jobProgress} />
                <Box sx={{ display: 'flex', justifyContent: 'space-between', mt: 0.5 }}>
                  <Typography variant="caption" color="text.secondary">
                    {jobStage || 'queued'}
                  </Typography>
                  <Typography variant="caption" color="text.secondary">
                    {formatElapsed(elapsedSec)} elapsed
                  </Typography>
                </Box>
              </Box>
            )}

            {jobStatus === 'failed' && (
              <Box sx={{ mt: 1 }}>
                {timeCost !== null && (
                  <Typography variant="caption" color="text.secondary" sx={{ display: 'block', mb: 0.5 }}>
                    Failed after {formatElapsed(Math.round(timeCost))}
                  </Typography>
                )}
                {jobError && <Alert severity="error" sx={{ mb: 1 }}>{jobError}</Alert>}
                {jobLog && (
                  <Box sx={{
                    p: 1,
                    bgcolor: 'grey.900',
                    color: 'grey.100',
                    borderRadius: 1,
                    overflow: 'auto',
                    maxHeight: 300,
                    fontFamily: 'monospace',
                    fontSize: '0.75rem',
                    whiteSpace: 'pre-wrap',
                    wordBreak: 'break-all',
                  }}>
                    {jobLog}
                  </Box>
                )}
              </Box>
            )}
          </Paper>

          {jobStatus === 'success' && imageUrl && (
            <Box sx={{ mt: 2 }}>
              <Box sx={{ display: 'flex', alignItems: 'baseline', gap: 2, mb: 1 }}>
                <Typography variant="h6">Layout Result</Typography>
                {timeCost !== null && (
                  <Typography variant="caption" color="text.secondary">
                    Completed in {formatElapsed(Math.round(timeCost))}
                  </Typography>
                )}
              </Box>
              <Box
                component="img"
                src={imageUrl}
                alt="Layout result"
                sx={{ width: '100%', maxWidth: 800, display: 'block', borderRadius: 1 }}
              />
            </Box>
          )}
        </Grid>
      </Grid>
    </Box>
  );
}

LayoutTab.propTypes = {
  projectId: PropTypes.string,
  sverilogReady: PropTypes.bool,
};

export default LayoutTab;
