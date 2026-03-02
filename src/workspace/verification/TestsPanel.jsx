import { Box, List, ListItem, ListItemIcon, ListItemText, Typography } from '@mui/material';
import CheckCircleIcon from '@mui/icons-material/CheckCircle';
import ErrorIcon from '@mui/icons-material/Error';
import HourglassEmptyIcon from '@mui/icons-material/HourglassEmpty';

const MOCK_TESTS = [
  { id: 1, name: 'test_cgra_universal_4x4', status: 'pass' },
  { id: 2, name: 'test_cgra_universal_8x8', status: 'pass' },
  { id: 3, name: 'test_mesh_multi_cgra_2x2', status: 'pass' },
  { id: 4, name: 'test_simplified_multi_cgra', status: 'fail' },
  { id: 5, name: 'test_verilog_output_syntax', status: 'pass' },
  { id: 6, name: 'test_verilog_timing_constraints', status: 'pending' },
  { id: 7, name: 'test_synthesis_area_report', status: 'pending' },
  { id: 8, name: 'test_spm_outlinks_connectivity', status: 'fail' },
];

function StatusIcon({ status }) {
  if (status === 'pass') return <CheckCircleIcon color="success" />;
  if (status === 'fail') return <ErrorIcon color="error" />;
  return <HourglassEmptyIcon color="disabled" />;
}

function TestsPanel() {
  return (
    <Box sx={{ overflow: 'auto', maxHeight: 360 }}>
      <List dense disablePadding>
        {MOCK_TESTS.map((test) => (
          <ListItem key={test.id} divider>
            <ListItemIcon sx={{ minWidth: 36 }}>
              <StatusIcon status={test.status} />
            </ListItemIcon>
            <ListItemText
              primary={
                <Typography variant="body2" sx={{ fontFamily: 'monospace' }}>
                  {test.name}
                </Typography>
              }
            />
          </ListItem>
        ))}
      </List>
    </Box>
  );
}

export default TestsPanel;
