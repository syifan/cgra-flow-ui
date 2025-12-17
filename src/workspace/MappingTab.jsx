import {
  Box,
  Button,
  Chip,
  Typography
} from '@mui/material';
import PropTypes from 'prop-types';
import CheckCircleIcon from '@mui/icons-material/CheckCircle';
import ErrorIcon from '@mui/icons-material/Error';
import HourglassEmptyIcon from '@mui/icons-material/HourglassEmpty';
import PlayArrowIcon from '@mui/icons-material/PlayArrow';
import DownloadIcon from '@mui/icons-material/Download';
import DotGraph from './DotGraph';
import { supabase } from '../lib/supabase';

function MappingTab({
  latestMappingJob,
  graphData,
  isLocked,
  onStartMapping,
  selectedBenchmarkNames,
  currentBenchmark
}) {
  const getJobStatusDisplay = () => {
    if (!latestMappingJob) return null;
    const status = latestMappingJob.status;
    const benchmarks = Array.isArray(latestMappingJob.info?.benchmarks)
      ? latestMappingJob.info.benchmarks.join(', ')
      : 'N/A';
    const jobPackage = latestMappingJob.info?.job_package;
    const packageUrl = (() => {
      if (!jobPackage) return null;
      if (jobPackage.publicUrl) return jobPackage.publicUrl;
      if (jobPackage.path && jobPackage.bucket) {
        const { data } = supabase.storage.from(jobPackage.bucket).getPublicUrl(jobPackage.path);
        return data?.publicUrl || null;
      }
      return null;
    })();

    const statusConfig = {
      queued: { icon: <HourglassEmptyIcon fontSize="small" />, color: 'info', label: 'Queued' },
      running: { icon: <PlayArrowIcon fontSize="small" />, color: 'warning', label: 'Running' },
      success: { icon: <CheckCircleIcon fontSize="small" />, color: 'success', label: 'Success' },
      failed: { icon: <ErrorIcon fontSize="small" />, color: 'error', label: 'Failed' },
      cancelled: { icon: <ErrorIcon fontSize="small" />, color: 'default', label: 'Cancelled' }
    };

    const config = statusConfig[status] || statusConfig.cancelled;

    return (
      <Box sx={{ mb: 3, p: 2, bgcolor: 'rgba(148,163,184,0.1)', borderRadius: 1 }}>
        <Box sx={{ display: 'flex', alignItems: 'center', gap: 1, mb: 1 }}>
          <Typography variant="subtitle2" sx={{ color: 'text.secondary' }}>
            Latest Mapping Job:
          </Typography>
          <Chip
            size="small"
            icon={config.icon}
            label={config.label}
            color={config.color}
            variant="outlined"
          />
        </Box>
        <Typography variant="body2" sx={{ color: 'text.secondary' }}>
          Benchmarks: {benchmarks}
        </Typography>
        {latestMappingJob.error_message && (
          <Typography variant="body2" sx={{ color: 'error.main', mt: 1 }}>
            Error: {latestMappingJob.error_message}
          </Typography>
        )}
        {packageUrl && (
          <Button
            size="small"
            variant="outlined"
            startIcon={<DownloadIcon fontSize="small" />}
            href={packageUrl}
            target="_blank"
            rel="noopener noreferrer"
            sx={{ mt: 1.5 }}
          >
            Download job package
          </Button>
        )}
      </Box>
    );
  };

  return (
    <Box
      sx={{
        height: '100%',
        p: 3,
        display: 'flex',
        flexDirection: 'column',
        overflow: 'auto'
      }}
    >
      <Box sx={{ mb: 3 }}>
        <Typography variant="h6" sx={{ mb: 2 }}>
          Mapping
        </Typography>
        <Typography variant="body2" sx={{ color: 'text.secondary', mb: 3 }}>
          Map selected benchmarks onto your CGRA design. Select benchmarks using the benchmark
          selector in the navigation bar, then click Start Mapping to begin the process.
        </Typography>
      </Box>

      {getJobStatusDisplay()}

      <Box sx={{ mb: 3 }}>
        <Typography variant="subtitle2" sx={{ mb: 1, color: 'text.secondary' }}>
          Selected Benchmarks: {selectedBenchmarkNames.length > 0 ? selectedBenchmarkNames.join(', ') : 'None'}
        </Typography>
        <Button
          variant="contained"
          disabled={isLocked || selectedBenchmarkNames.length === 0}
          onClick={onStartMapping}
          startIcon={<PlayArrowIcon />}
          sx={{ mt: 1 }}
        >
          Start Mapping
        </Button>
      </Box>

      {Object.keys(graphData).length > 0 && currentBenchmark && graphData[currentBenchmark] && (
        <Box sx={{ flex: 1, minHeight: 0 }}>
          <Typography variant="subtitle2" sx={{ mb: 2, color: 'text.secondary' }}>
            Mapping Results for {currentBenchmark.toUpperCase()}
          </Typography>
          <Box
            sx={{
              p: 2,
              border: '1px solid',
              borderColor: 'divider',
              borderRadius: 1
            }}
          >
            {graphData[currentBenchmark].map((g) => (
              <Box key={g.file} sx={{ mb: 2 }}>
                <Typography variant="caption" sx={{ color: 'text.secondary', display: 'block', mb: 1 }}>
                  {g.file}
                </Typography>
                <DotGraph graph={g.json} />
              </Box>
            ))}
          </Box>
        </Box>
      )}
      {Object.keys(graphData).length > 0 && (!currentBenchmark || !graphData[currentBenchmark]) && (
        <Box sx={{ flex: 1, minHeight: 0 }}>
          <Typography variant="body2" sx={{ color: 'text.secondary' }}>
            Select a current benchmark to view its mapping results.
          </Typography>
        </Box>
      )}
    </Box>
  );
}

MappingTab.propTypes = {
  latestMappingJob: PropTypes.shape({
    status: PropTypes.string,
    error_message: PropTypes.string,
    info: PropTypes.shape({
      benchmarks: PropTypes.array,
      job_package: PropTypes.shape({
        publicUrl: PropTypes.string,
        path: PropTypes.string,
        bucket: PropTypes.string
      })
    })
  }),
  graphData: PropTypes.object.isRequired,
  isLocked: PropTypes.bool.isRequired,
  onStartMapping: PropTypes.func.isRequired,
  selectedBenchmarkNames: PropTypes.arrayOf(PropTypes.string).isRequired,
  currentBenchmark: PropTypes.string
};

export default MappingTab;
