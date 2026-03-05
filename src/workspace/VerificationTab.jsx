import PropTypes from 'prop-types';
import { Box, Divider, Grid, Typography } from '@mui/material';
import TestsPanel from './verification/TestsPanel';
import SverilogPanel from './verification/SverilogPanel';

function VerificationTab({ architecture, projectId, onSverilogSuccess }) {

  return (
    <Box sx={{ height: '100%', p: 2, boxSizing: 'border-box' }}>
      <Grid container spacing={2} sx={{ height: '100%' }}>
        <Grid size="grow" sx={{ height: '100%', overflow: 'auto' }}>
          <Typography variant="subtitle1" fontWeight="bold" sx={{ mb: 1 }}>Tests</Typography>
          <TestsPanel projectId={projectId} />
        </Grid>
        <Divider orientation="vertical" flexItem />
        <Grid size="grow" sx={{ height: '100%', overflow: 'auto' }}>
          <Typography variant="subtitle1" fontWeight="bold" sx={{ mb: 1 }}>SVerilog</Typography>
          <SverilogPanel
            architecture={architecture}
            projectId={projectId}
            onSverilogSuccess={onSverilogSuccess}
          />
        </Grid>
      </Grid>
    </Box>
  );
}

VerificationTab.propTypes = {
  architecture: PropTypes.object,
  projectId: PropTypes.string,
  onSverilogSuccess: PropTypes.func,
};

export default VerificationTab;
