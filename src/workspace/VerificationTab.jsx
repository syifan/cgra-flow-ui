import PropTypes from 'prop-types';
import {
  Accordion,
  AccordionDetails,
  AccordionSummary,
  Box,
  Typography,
} from '@mui/material';
import ExpandMoreIcon from '@mui/icons-material/ExpandMore';
import TestsPanel from './verification/TestsPanel';
import SverilogPanel from './verification/SverilogPanel';

function VerificationTab({ architecture, projectId, onSverilogSuccess }) {

  return (
    <Box sx={{ height: '100%', overflow: 'auto', p: 2 }}>
      <Accordion defaultExpanded>
        <AccordionSummary expandIcon={<ExpandMoreIcon />}>
          <Typography variant="subtitle1" fontWeight="bold">Tests</Typography>
        </AccordionSummary>
        <AccordionDetails sx={{ p: 0 }}>
          <TestsPanel projectId={projectId} />
        </AccordionDetails>
      </Accordion>

      <Accordion>
        <AccordionSummary expandIcon={<ExpandMoreIcon />}>
          <Typography variant="subtitle1" fontWeight="bold">SVerilog</Typography>
        </AccordionSummary>
        <AccordionDetails sx={{ p: 1 }}>
          <SverilogPanel
            architecture={architecture}
            projectId={projectId}
            onSverilogSuccess={onSverilogSuccess}
          />
        </AccordionDetails>
      </Accordion>

    </Box>
  );
}

VerificationTab.propTypes = {
  architecture: PropTypes.object,
  projectId: PropTypes.string,
  onSverilogSuccess: PropTypes.func,
};

export default VerificationTab;
