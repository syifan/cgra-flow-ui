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
import ReportPanel from './verification/ReportPanel';

function VerificationTab({ architecture, projectId }) {
  return (
    <Box sx={{ height: '100%', overflow: 'auto', p: 2 }}>
      <Accordion defaultExpanded>
        <AccordionSummary expandIcon={<ExpandMoreIcon />}>
          <Typography variant="subtitle1" fontWeight="bold">Tests</Typography>
        </AccordionSummary>
        <AccordionDetails sx={{ p: 0 }}>
          <TestsPanel />
        </AccordionDetails>
      </Accordion>

      <Accordion>
        <AccordionSummary expandIcon={<ExpandMoreIcon />}>
          <Typography variant="subtitle1" fontWeight="bold">SVerilog</Typography>
        </AccordionSummary>
        <AccordionDetails sx={{ p: 1 }}>
          <SverilogPanel architecture={architecture} projectId={projectId} />
        </AccordionDetails>
      </Accordion>

      <Accordion>
        <AccordionSummary expandIcon={<ExpandMoreIcon />}>
          <Typography variant="subtitle1" fontWeight="bold">Report Area/Power</Typography>
        </AccordionSummary>
        <AccordionDetails>
          <ReportPanel />
        </AccordionDetails>
      </Accordion>
    </Box>
  );
}

VerificationTab.propTypes = {
  architecture: PropTypes.object,
  projectId: PropTypes.string,
};

export default VerificationTab;
