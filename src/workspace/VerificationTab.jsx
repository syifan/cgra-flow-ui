import { useState } from 'react';
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
  // Tracks whether a successful SVerilog generation result is available
  // for this project in the current session.
  // The Synthesize button in ReportPanel is disabled until this is true.
  const [sverilogDone, setSverilogDone] = useState(false);

  const handleSverilogSuccess = () => setSverilogDone(true);

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
            onSverilogSuccess={handleSverilogSuccess}
          />
        </AccordionDetails>
      </Accordion>

      <Accordion>
        <AccordionSummary expandIcon={<ExpandMoreIcon />}>
          <Typography variant="subtitle1" fontWeight="bold">Report Area/Power</Typography>
        </AccordionSummary>
        <AccordionDetails>
          <ReportPanel
            projectId={projectId}
            sverilogReady={sverilogDone}
          />
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
