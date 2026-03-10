import { useState, useRef } from 'react';
import PropTypes from 'prop-types';
import {
  Accordion,
  AccordionDetails,
  AccordionSummary,
  Box,
  Divider,
  Grid,
  Typography,
  TextField,
  Select,
  MenuItem,
  FormControl,
  InputLabel,
  Button,
  CircularProgress,
  Paper,
  InputAdornment,
  IconButton,
} from '@mui/material';
import ExpandMoreIcon from '@mui/icons-material/ExpandMore';
import FolderOpenIcon from '@mui/icons-material/FolderOpen';
import layoutImage from '../../CGRA-Flow-sample/layout/final_all.webp';
import ReportPanel from './verification/ReportPanel';

function LayoutTab({ projectId, sverilogReady }) {
  const [sdcPath, setSdcPath] = useState('');
  const [mkPath, setMkPath] = useState('');
  const [process, setProcess] = useState('asap7');
  const [loading, setLoading] = useState(false);
  const [showResult, setShowResult] = useState(false);

  const sdcInputRef = useRef(null);
  const mkInputRef = useRef(null);

  const handleRun = () => {
    setLoading(true);
    setShowResult(false);
    setTimeout(() => {
      setLoading(false);
      setShowResult(true);
    }, 1500);
  };

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
                if (e.target.files[0]) setSdcPath(e.target.files[0].name);
              }}
            />
            <input
              ref={mkInputRef}
              type="file"
              accept=".mk"
              style={{ display: 'none' }}
              onChange={(e) => {
                if (e.target.files[0]) setMkPath(e.target.files[0].name);
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
                disabled={loading}
              >
                RTL → Layout
              </Button>
              {loading && <CircularProgress size={24} />}
            </Box>
          </Paper>

          {showResult && (
            <Box sx={{ mt: 2 }}>
              <Typography variant="h6" sx={{ mb: 1 }}>Layout Result</Typography>
              <Box
                component="img"
                src={layoutImage}
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
