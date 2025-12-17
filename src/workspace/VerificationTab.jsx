import { Box, Typography } from '@mui/material';
import ConstructionIcon from '@mui/icons-material/Construction';

function VerificationTab() {
  return (
    <Box
      sx={{
        height: '100%',
        p: 3,
        display: 'flex',
        flexDirection: 'column',
        alignItems: 'center',
        justifyContent: 'center',
        color: 'text.secondary'
      }}
    >
      <ConstructionIcon sx={{ fontSize: 64, mb: 2, opacity: 0.5 }} />
      <Typography variant="h6" sx={{ mb: 1 }}>
        Under Construction
      </Typography>
      <Typography variant="body2" sx={{ textAlign: 'center', maxWidth: 400 }}>
        The verification workspace is currently being developed.
        This feature will allow you to verify your CGRA design against various constraints and specifications.
      </Typography>
    </Box>
  );
}

export default VerificationTab;
