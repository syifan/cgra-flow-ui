import { useEffect, useMemo, useState } from 'react';
import PropTypes from 'prop-types';
import {
  Alert,
  Box,
  Chip,
  Dialog,
  DialogContent,
  DialogTitle,
  LinearProgress,
  Table,
  TableBody,
  TableCell,
  TableContainer,
  TableHead,
  TableRow,
  Typography
} from '@mui/material';
import { supabase } from '../lib/supabase';

const REFRESH_MS = 10000;

const formatRelative = (ageSeconds) => {
  if (ageSeconds == null || Number.isNaN(ageSeconds)) return 'Unknown';
  if (ageSeconds < 60) return `${ageSeconds}s ago`;
  if (ageSeconds < 3600) return `${Math.floor(ageSeconds / 60)}m ago`;
  return `${Math.floor(ageSeconds / 3600)}h ago`;
};

function RunnerStatusDialog({ open, onClose }) {
  const [rows, setRows] = useState([]);
  const [loading, setLoading] = useState(false);
  const [error, setError] = useState('');
  const [lastUpdatedAt, setLastUpdatedAt] = useState(null);

  useEffect(() => {
    if (!open) return undefined;

    let mounted = true;

    const fetchStatus = async () => {
      setLoading(true);
      const { data, error: rpcError } = await supabase.rpc('list_runner_status');
      if (!mounted) return;

      if (rpcError) {
        setError(rpcError.message || 'Failed to load runner status.');
        setRows([]);
      } else {
        setError('');
        setRows(Array.isArray(data) ? data : []);
        setLastUpdatedAt(new Date());
      }
      setLoading(false);
    };

    fetchStatus();
    const timer = setInterval(fetchStatus, REFRESH_MS);

    return () => {
      mounted = false;
      clearInterval(timer);
    };
  }, [open]);

  const summary = useMemo(() => {
    const total = rows.length;
    const online = rows.filter((r) => r.status === 'online').length;
    const claimable = rows.filter((r) => r.claimable).length;
    return { total, online, claimable };
  }, [rows]);

  return (
    <Dialog open={open} onClose={onClose} maxWidth="md" fullWidth>
      <DialogTitle>Runner Status</DialogTitle>
      <DialogContent dividers>
        {loading && <LinearProgress sx={{ mb: 2 }} />}

        <Box sx={{ display: 'flex', gap: 1, mb: 2, flexWrap: 'wrap' }}>
          <Chip size="small" label={`Total: ${summary.total}`} variant="outlined" />
          <Chip size="small" label={`Online: ${summary.online}`} color="success" variant="outlined" />
          <Chip size="small" label={`Claimable: ${summary.claimable}`} color="info" variant="outlined" />
          {lastUpdatedAt && (
            <Chip
              size="small"
              label={`Updated: ${lastUpdatedAt.toLocaleTimeString()}`}
              variant="outlined"
            />
          )}
        </Box>

        {error && (
          <Alert severity="error" sx={{ mb: 2 }}>
            {error}
          </Alert>
        )}

        {!error && rows.length === 0 && !loading && (
          <Typography variant="body2" sx={{ color: 'text.secondary' }}>
            No runner heartbeat data available.
          </Typography>
        )}

        {!error && rows.length > 0 && (
          <TableContainer>
            <Table size="small">
              <TableHead>
                <TableRow>
                  <TableCell>Runner ID</TableCell>
                  <TableCell>Mode</TableCell>
                  <TableCell>Scope</TableCell>
                  <TableCell>Status</TableCell>
                  <TableCell>Claimable</TableCell>
                  <TableCell>Last Seen</TableCell>
                </TableRow>
              </TableHead>
              <TableBody>
                {rows.map((row) => {
                  const statusColor =
                    row.status === 'online' ? 'success' : row.status === 'stale' ? 'warning' : 'default';
                  return (
                    <TableRow key={row.runner_id}>
                      <TableCell>{row.runner_id}</TableCell>
                      <TableCell>{row.mode}</TableCell>
                      <TableCell>{row.scope}</TableCell>
                      <TableCell>
                        <Chip size="small" label={row.status} color={statusColor} variant="outlined" />
                      </TableCell>
                      <TableCell>{row.claimable ? 'Yes' : 'No'}</TableCell>
                      <TableCell>{formatRelative(row.age_seconds)}</TableCell>
                    </TableRow>
                  );
                })}
              </TableBody>
            </Table>
          </TableContainer>
        )}
      </DialogContent>
    </Dialog>
  );
}

RunnerStatusDialog.propTypes = {
  open: PropTypes.bool.isRequired,
  onClose: PropTypes.func.isRequired
};

export default RunnerStatusDialog;
