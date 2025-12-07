import { useState } from 'react';
import {
  Alert,
  Box,
  Button,
  Container,
  TextField,
  Typography,
  Paper,
  Link
} from '@mui/material';
import { Link as RouterLink, useNavigate } from 'react-router-dom';
import { useAuth } from '../contexts/AuthContext';

function SignupPage() {
  const navigate = useNavigate();
  const { signUp } = useAuth();
  const [name, setName] = useState('');
  const [email, setEmail] = useState('');
  const [password, setPassword] = useState('');
  const [confirmPassword, setConfirmPassword] = useState('');
  const [error, setError] = useState('');
  const [success, setSuccess] = useState('');
  const [loading, setLoading] = useState(false);

  const handleSubmit = async (event) => {
    event.preventDefault();
    setError('');
    setSuccess('');

    if (password !== confirmPassword) {
      setError('Passwords do not match');
      return;
    }

    if (password.length < 6) {
      setError('Password must be at least 6 characters');
      return;
    }

    setLoading(true);

    const { data, error: signUpError } = await signUp(email, password, name);

    if (signUpError) {
      setError(signUpError.message);
      setLoading(false);
      return;
    }

    // Check if email confirmation is required
    if (data?.user && !data?.session) {
      setSuccess('Check your email for the confirmation link!');
      setLoading(false);
      return;
    }

    navigate('/dashboard');
  };

  return (
    <Box
      sx={{
        minHeight: '100vh',
        bgcolor: 'background.default',
        display: 'flex',
        alignItems: 'center',
        justifyContent: 'center',
        py: 4
      }}
    >
      <Container maxWidth="xs">
        <Paper
          elevation={0}
          sx={{
            p: 4,
            bgcolor: 'background.paper',
            border: '1px solid rgba(148, 163, 184, 0.15)',
            borderRadius: 3
          }}
        >
          <Typography
            variant="h4"
            component="h1"
            sx={{
              fontWeight: 700,
              textAlign: 'center',
              mb: 1,
              background: 'linear-gradient(135deg, #3aa8ff 0%, #5ad786 100%)',
              backgroundClip: 'text',
              WebkitBackgroundClip: 'text',
              WebkitTextFillColor: 'transparent'
            }}
          >
            CGRA FLOW
          </Typography>
          <Typography
            variant="body1"
            sx={{
              textAlign: 'center',
              color: 'text.secondary',
              mb: 4
            }}
          >
            Create your account
          </Typography>
          {error && (
            <Alert severity="error" sx={{ mb: 2 }}>
              {error}
            </Alert>
          )}
          {success && (
            <Alert severity="success" sx={{ mb: 2 }}>
              {success}
            </Alert>
          )}
          <Box component="form" onSubmit={handleSubmit}>
            <TextField
              fullWidth
              label="Full Name"
              type="text"
              value={name}
              onChange={(e) => setName(e.target.value)}
              margin="normal"
              required
              autoComplete="name"
              autoFocus
              disabled={loading}
            />
            <TextField
              fullWidth
              label="Email"
              type="email"
              value={email}
              onChange={(e) => setEmail(e.target.value)}
              margin="normal"
              required
              autoComplete="email"
              disabled={loading}
            />
            <TextField
              fullWidth
              label="Password"
              type="password"
              value={password}
              onChange={(e) => setPassword(e.target.value)}
              margin="normal"
              required
              autoComplete="new-password"
              disabled={loading}
              helperText="Must be at least 6 characters"
            />
            <TextField
              fullWidth
              label="Confirm Password"
              type="password"
              value={confirmPassword}
              onChange={(e) => setConfirmPassword(e.target.value)}
              margin="normal"
              required
              autoComplete="new-password"
              disabled={loading}
            />
            <Button
              type="submit"
              fullWidth
              variant="contained"
              size="large"
              disabled={loading}
              sx={{
                mt: 3,
                mb: 2,
                py: 1.5,
                background: 'linear-gradient(135deg, #3aa8ff 0%, #5ad786 100%)',
                '&:hover': {
                  background: 'linear-gradient(135deg, #2d8ad9 0%, #4bc274 100%)'
                },
                '&:disabled': {
                  background: 'rgba(148, 163, 184, 0.3)'
                }
              }}
            >
              {loading ? 'Creating account...' : 'Create Account'}
            </Button>
            <Box sx={{ textAlign: 'center' }}>
              <Typography variant="body2" sx={{ color: 'text.secondary' }}>
                Already have an account?{' '}
                <Link
                  component={RouterLink}
                  to="/login"
                  sx={{ color: 'primary.main', textDecoration: 'none' }}
                >
                  Sign in
                </Link>
              </Typography>
            </Box>
          </Box>
        </Paper>
        <Box sx={{ mt: 3, textAlign: 'center' }}>
          <Link
            component={RouterLink}
            to="/"
            sx={{
              color: 'text.secondary',
              textDecoration: 'none',
              '&:hover': { color: 'primary.main' }
            }}
          >
            Back to home
          </Link>
        </Box>
      </Container>
    </Box>
  );
}

export default SignupPage;
