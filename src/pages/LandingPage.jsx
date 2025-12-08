import { Box, Button, Container, Typography, Stack, Card, CardContent } from '@mui/material';
import { Link as RouterLink } from 'react-router-dom';
import GridViewIcon from '@mui/icons-material/GridView';
import AutoFixHighIcon from '@mui/icons-material/AutoFixHigh';
import VerifiedIcon from '@mui/icons-material/Verified';
import ViewInArIcon from '@mui/icons-material/ViewInAr';

const features = [
  {
    icon: <GridViewIcon sx={{ fontSize: 40 }} />,
    title: 'Visual Architecture Design',
    description: 'Design and visualize CGRA architectures with an intuitive canvas-based editor.'
  },
  {
    icon: <AutoFixHighIcon sx={{ fontSize: 40 }} />,
    title: 'GenAI Assisted',
    description: 'Leverage generative AI to help design and optimize your reconfigurable architectures.'
  },
  {
    icon: <VerifiedIcon sx={{ fontSize: 40 }} />,
    title: 'Verification Tools',
    description: 'Verify your designs with built-in validation and testing capabilities.'
  },
  {
    icon: <ViewInArIcon sx={{ fontSize: 40 }} />,
    title: 'Layout Generation',
    description: 'Automatically generate physical layouts from your architectural specifications.'
  }
];

function LandingPage() {
  return (
    <Box
      sx={{
        minHeight: '100vh',
        bgcolor: 'background.default',
        color: 'text.primary'
      }}
    >
      {/* Hero Section */}
      <Box
        sx={{
          pt: { xs: 8, md: 12 },
          pb: { xs: 8, md: 12 },
          textAlign: 'center',
          background: 'linear-gradient(180deg, rgba(58, 168, 255, 0.08) 0%, transparent 100%)'
        }}
      >
        <Container maxWidth="md">
          <Typography
            variant="h2"
            component="h1"
            sx={{
              fontWeight: 800,
              letterSpacing: 3,
              mb: 2,
              color: '#3aa8ff', // Fallback color for accessibility
              background: 'linear-gradient(135deg, #3aa8ff 0%, #5ad786 100%)',
              backgroundClip: 'text',
              WebkitBackgroundClip: 'text',
              WebkitTextFillColor: 'transparent'
            }}
          >
            CGRA FLOW
          </Typography>
          <Typography
            variant="h5"
            sx={{
              color: 'text.secondary',
              mb: 4,
              fontWeight: 400,
              lineHeight: 1.6
            }}
          >
            Design, visualize, and optimize Coarse-Grained Reconfigurable Array architectures
            with an intuitive web-based design environment.
          </Typography>
          <Stack
            direction={{ xs: 'column', sm: 'row' }}
            spacing={2}
            justifyContent="center"
          >
            <Button
              component={RouterLink}
              to="/signup"
              variant="contained"
              size="large"
              sx={{
                px: 4,
                py: 1.5,
                fontSize: '1rem',
                background: 'linear-gradient(135deg, #3aa8ff 0%, #5ad786 100%)',
                '&:hover': {
                  background: 'linear-gradient(135deg, #2d8ad9 0%, #4bc274 100%)'
                }
              }}
            >
              Get Started
            </Button>
            <Button
              component={RouterLink}
              to="/login"
              variant="outlined"
              size="large"
              sx={{
                px: 4,
                py: 1.5,
                fontSize: '1rem',
                borderColor: 'primary.main',
                '&:hover': {
                  borderColor: 'primary.light',
                  bgcolor: 'rgba(58, 168, 255, 0.08)'
                }
              }}
            >
              Sign In
            </Button>
          </Stack>
        </Container>
      </Box>

      {/* Features Section */}
      <Container maxWidth="lg" sx={{ py: { xs: 6, md: 10 } }}>
        <Typography
          variant="h4"
          component="h2"
          sx={{
            textAlign: 'center',
            fontWeight: 700,
            mb: 6
          }}
        >
          Powerful Features for CGRA Design
        </Typography>
        <Box
          sx={{
            display: 'grid',
            gridTemplateColumns: { xs: '1fr', sm: '1fr 1fr', md: 'repeat(4, 1fr)' },
            gap: 3
          }}
        >
          {features.map((feature) => (
            <Card
              key={feature.title}
              sx={{
                height: '100%',
                bgcolor: 'background.paper',
                border: '1px solid rgba(148, 163, 184, 0.15)',
                transition: 'transform 0.2s, border-color 0.2s',
                '&:hover': {
                  transform: 'translateY(-4px)',
                  borderColor: 'primary.main'
                }
              }}
            >
              <CardContent sx={{ textAlign: 'center', p: 3 }}>
                <Box sx={{ color: 'primary.main', mb: 2 }}>
                  {feature.icon}
                </Box>
                <Typography variant="h6" sx={{ fontWeight: 600, mb: 1 }}>
                  {feature.title}
                </Typography>
                <Typography variant="body2" sx={{ color: 'text.secondary' }}>
                  {feature.description}
                </Typography>
              </CardContent>
            </Card>
          ))}
        </Box>
      </Container>

      {/* CTA Section */}
      <Box
        sx={{
          py: { xs: 6, md: 8 },
          bgcolor: 'background.paper',
          borderTop: '1px solid rgba(148, 163, 184, 0.15)'
        }}
      >
        <Container maxWidth="sm" sx={{ textAlign: 'center' }}>
          <Typography variant="h5" sx={{ fontWeight: 600, mb: 2 }}>
            Ready to start designing?
          </Typography>
          <Typography variant="body1" sx={{ color: 'text.secondary', mb: 3 }}>
            Create an account and start building your CGRA architectures today.
          </Typography>
          <Button
            component={RouterLink}
            to="/signup"
            variant="contained"
            size="large"
            sx={{
              px: 4,
              py: 1.5,
              background: 'linear-gradient(135deg, #3aa8ff 0%, #5ad786 100%)',
              '&:hover': {
                background: 'linear-gradient(135deg, #2d8ad9 0%, #4bc274 100%)'
              }
            }}
          >
            Create Free Account
          </Button>
        </Container>
      </Box>

      {/* Footer */}
      <Box
        component="footer"
        sx={{
          py: 3,
          textAlign: 'center',
          borderTop: '1px solid rgba(148, 163, 184, 0.15)'
        }}
      >
        <Typography variant="body2" sx={{ color: 'text.secondary' }}>
          CGRA Flow - Coarse-Grained Reconfigurable Array Design Tool
        </Typography>
      </Box>
    </Box>
  );
}

export default LandingPage;
