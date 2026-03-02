import {
  Paper,
  Table,
  TableBody,
  TableCell,
  TableContainer,
  TableHead,
  TableRow,
  Typography,
} from '@mui/material';

const MOCK_REPORT_ROWS = [
  { label: 'Total Area',      value: '12 483.20', unit: 'µm²' },
  { label: 'Cell Area',       value: '10 901.75', unit: 'µm²' },
  { label: 'Net Area',        value:  '1 581.45', unit: 'µm²' },
  { label: 'Total Power',     value:     '4.731', unit: 'mW'  },
  { label: 'Dynamic Power',   value:     '3.892', unit: 'mW'  },
  { label: 'Leakage Power',   value:     '0.839', unit: 'mW'  },
];

function ReportPanel() {
  return (
    <TableContainer component={Paper} variant="outlined">
      <Table size="small">
        <TableHead>
          <TableRow>
            <TableCell>
              <Typography variant="body2" fontWeight="bold">Metric</Typography>
            </TableCell>
            <TableCell align="right">
              <Typography variant="body2" fontWeight="bold">Value</Typography>
            </TableCell>
          </TableRow>
        </TableHead>
        <TableBody>
          {MOCK_REPORT_ROWS.map((row) => (
            <TableRow key={row.label} hover>
              <TableCell>
                <Typography variant="body2">{row.label}</Typography>
              </TableCell>
              <TableCell align="right">
                <Typography variant="body2" sx={{ fontFamily: 'monospace' }}>
                  {row.value} {row.unit}
                </Typography>
              </TableCell>
            </TableRow>
          ))}
        </TableBody>
      </Table>
    </TableContainer>
  );
}

export default ReportPanel;
