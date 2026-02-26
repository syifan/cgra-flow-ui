import { useCallback, useMemo, useState } from 'react';
import {
  Box,
  Button,
  Chip,
  ToggleButton,
  ToggleButtonGroup,
  Tooltip,
  Typography
} from '@mui/material';
import PropTypes from 'prop-types';
import CheckCircleIcon from '@mui/icons-material/CheckCircle';
import ErrorIcon from '@mui/icons-material/Error';
import HourglassEmptyIcon from '@mui/icons-material/HourglassEmpty';
import PlayArrowIcon from '@mui/icons-material/PlayArrow';
import DownloadIcon from '@mui/icons-material/Download';
import AccountTreeIcon from '@mui/icons-material/AccountTree';
import TimelineIcon from '@mui/icons-material/Timeline';
import DotGraph from './DotGraph';
import DependencyGraph from './DependencyGraph';
import MappingInstructionGrid from './MappingInstructionGrid';
import { buildDependencyGraph, findNodeIdForInstruction } from './dependencyGraphUtils';
import { supabase } from '../lib/supabase';

/**
 * Convert instruction opcode to graph node label pattern
 * Instruction opcodes like "GRANT_ONCE" map to "neura.grant_once" in the graph
 */
function opcodeToGraphPattern(opcode) {
  if (!opcode) return null;
  // Convert UPPER_CASE to lower_case and prefix with "neura."
  const lowerOpcode = opcode.toLowerCase();
  return `neura.${lowerOpcode}`;
}

function MappingTab({
  latestMappingJob,
  graphData,
  instructionData,
  isLocked,
  onStartMapping,
  selectedBenchmarkNames,
  currentBenchmark
}) {
  // Graph view mode: 'dataflow' (DotGraph) or 'dependency' (DependencyGraph)
  const [graphViewMode, setGraphViewMode] = useState('dependency');

  // Track hovered instruction to highlight corresponding graph nodes
  const [hoveredOpcodes, setHoveredOpcodes] = useState([]);
  const [highlightedNodeId, setHighlightedNodeId] = useState(null);

  // Track current animation slide (index_per_ii) from instruction grid
  const [currentAnimationSlide, setCurrentAnimationSlide] = useState(null);

  // Jump target from clicking on dependency graph nodes
  const [jumpTarget, setJumpTarget] = useState(null);

  // Build dependency graph nodes for linking (memoized)
  const dependencyNodes = useMemo(() => {
    if (!instructionData || !currentBenchmark || !instructionData[currentBenchmark]) {
      return [];
    }
    const { nodes } = buildDependencyGraph(instructionData[currentBenchmark]);
    return nodes;
  }, [instructionData, currentBenchmark]);

  // Handle hover events from the instruction grid
  const handleInstructionHover = useCallback((instruction) => {
    if (!instruction) {
      setHoveredOpcodes([]);
      setHighlightedNodeId(null);
      return;
    }
    // For DotGraph (existing) - extract opcodes for pattern matching
    const opcodes = instruction.operations
      ?.map((op) => opcodeToGraphPattern(op.opcode))
      .filter(Boolean) || [];
    setHoveredOpcodes(opcodes);

    // For DependencyGraph (new) - find exact node ID for 1-to-1 linking
    const nodeId = findNodeIdForInstruction(dependencyNodes, instruction);
    setHighlightedNodeId(nodeId);
  }, [dependencyNodes]);

  // Handle graph view mode toggle
  const handleGraphViewModeChange = useCallback((_, newMode) => {
    if (newMode !== null) {
      setGraphViewMode(newMode);
    }
  }, []);

  // Handle slide (index_per_ii) changes from the instruction grid animation
  const handleSlideChange = useCallback((slide) => {
    setCurrentAnimationSlide(slide);
  }, []);

  // Handle clicks on dependency graph nodes - jump to that slide (index_per_ii) and highlight PE
  const handleNodeClick = useCallback((nodeInfo) => {
    setJumpTarget({
      indexPerII: nodeInfo.indexPerII,
      pe: nodeInfo.pe,
      id: Date.now() // Unique ID to trigger effect even if same node clicked twice
    });
  }, []);

  const getJobStatusDisplay = () => {
    if (!latestMappingJob) return null;
    const status = latestMappingJob.status;
    const benchmarks = Array.isArray(latestMappingJob.info?.benchmarks)
      ? latestMappingJob.info.benchmarks.join(', ')
      : latestMappingJob.info?.benchmarks && typeof latestMappingJob.info.benchmarks === 'object'
        ? Object.keys(latestMappingJob.info.benchmarks).join(', ')
      : 'N/A';
    const isFakeResult = latestMappingJob.info?.completed_by === 'fake_runner';
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
      <Box sx={{ display: 'flex', alignItems: 'flex-start', gap: 2, flexWrap: 'wrap' }}>
        <Box sx={{ display: 'flex', alignItems: 'center', gap: 1 }}>
          <Typography variant="body2" sx={{ color: 'text.secondary' }}>
            Latest Job:
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
          <Typography variant="body2" sx={{ color: 'error.main' }}>
            Error: {latestMappingJob.error_message}
          </Typography>
        )}
        {isFakeResult && (
          <Typography variant="body2" sx={{ color: 'warning.main' }}>
            Processed by fake runner; no real mapping artifacts were generated.
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
          >
            Download
          </Button>
        )}
      </Box>
    );
  };

  const hasGraphData = Object.keys(graphData).length > 0 && currentBenchmark && graphData[currentBenchmark];
  const hasInstructionData = instructionData && currentBenchmark && instructionData[currentBenchmark];

  return (
    <Box
      sx={{
        height: '100%',
        display: 'grid',
        gridTemplateRows: '1fr auto',
        gap: 2,
        p: 2,
        overflow: 'hidden'
      }}
    >
      {/* Top section: split left/right */}
      <Box
        sx={{
          display: 'grid',
          gridTemplateColumns: hasGraphData || hasInstructionData ? '1fr 1fr' : '1fr',
          gap: 2,
          minHeight: 0,
          overflow: 'hidden'
        }}
      >
        {/* Left panel: Graph View (Dataflow or Dependency) */}
        <Box
          sx={{
            display: 'flex',
            flexDirection: 'column',
            border: '1px solid',
            borderColor: 'divider',
            borderRadius: 1,
            overflow: 'hidden',
            bgcolor: 'rgba(15, 23, 42, 0.3)'
          }}
        >
          <Box
            sx={{
              p: 1.5,
              borderBottom: '1px solid',
              borderColor: 'divider',
              display: 'flex',
              justifyContent: 'space-between',
              alignItems: 'center'
            }}
          >
            <Typography variant="subtitle2" sx={{ color: 'text.secondary' }}>
              {graphViewMode === 'dataflow' ? 'Dataflow Graph' : 'Dependency Graph'}
            </Typography>
            {hasInstructionData && (
              <ToggleButtonGroup
                value={graphViewMode}
                exclusive
                onChange={handleGraphViewModeChange}
                size="small"
                sx={{ '& .MuiToggleButton-root': { py: 0.5, px: 1 } }}
              >
                <ToggleButton value="dataflow">
                  <Tooltip title="Algorithm dataflow (graphviz)">
                    <AccountTreeIcon fontSize="small" />
                  </Tooltip>
                </ToggleButton>
                <ToggleButton value="dependency">
                  <Tooltip title="Compute dependencies (1-to-1 PE linking)">
                    <TimelineIcon fontSize="small" />
                  </Tooltip>
                </ToggleButton>
              </ToggleButtonGroup>
            )}
          </Box>
          <Box sx={{ flex: 1, overflow: 'auto', p: 1.5 }}>
            {graphViewMode === 'dataflow' ? (
              // Dataflow Graph (existing DotGraph)
              hasGraphData ? (
                graphData[currentBenchmark].map((g) => (
                  <Box key={g.file} sx={{ mb: 2 }}>
                    <Typography variant="caption" sx={{ color: 'text.secondary', display: 'block', mb: 1 }}>
                      {g.file}
                    </Typography>
                    <DotGraph graph={g.json} highlightedPatterns={hoveredOpcodes} />
                  </Box>
                ))
              ) : (
                <Box
                  sx={{
                    height: '100%',
                    display: 'flex',
                    flexDirection: 'column',
                    alignItems: 'center',
                    justifyContent: 'center',
                    color: 'text.secondary',
                    textAlign: 'center',
                    p: 3
                  }}
                >
                  <Typography variant="body2" sx={{ mb: 2 }}>
                    No mapping results available
                  </Typography>
                  <Typography variant="caption">
                    Select benchmarks and click &quot;Start Mapping&quot; to generate results
                  </Typography>
                </Box>
              )
            ) : (
              // Dependency Graph (new)
              hasInstructionData ? (
                <DependencyGraph
                  instructionData={instructionData[currentBenchmark]}
                  highlightedNodeId={highlightedNodeId}
                  currentSlide={currentAnimationSlide}
                  onNodeClick={handleNodeClick}
                />
              ) : (
                <Box
                  sx={{
                    height: '100%',
                    display: 'flex',
                    alignItems: 'center',
                    justifyContent: 'center',
                    color: 'text.secondary'
                  }}
                >
                  <Typography variant="body2">No instruction data available</Typography>
                </Box>
              )
            )}
          </Box>
        </Box>

        {/* Right panel: Instruction Mapping Grid (only show if we have data) */}
        {(hasGraphData || hasInstructionData) && (
          <Box
            sx={{
              display: 'flex',
              flexDirection: 'column',
              border: '1px solid',
              borderColor: 'divider',
              borderRadius: 1,
              overflow: 'hidden',
              bgcolor: 'rgba(15, 23, 42, 0.3)'
            }}
          >
            <Box sx={{ p: 1.5, borderBottom: '1px solid', borderColor: 'divider' }}>
              <Typography variant="subtitle2" sx={{ color: 'text.secondary' }}>
                PE Instruction Mapping
              </Typography>
            </Box>
            <Box sx={{ flex: 1, overflow: 'hidden', p: 1.5 }}>
              {hasInstructionData ? (
                <MappingInstructionGrid
                  instructionData={instructionData[currentBenchmark]}
                  onInstructionHover={handleInstructionHover}
                  onSlideChange={handleSlideChange}
                  jumpTarget={jumpTarget}
                />
              ) : (
                <Box
                  sx={{
                    height: '100%',
                    display: 'flex',
                    alignItems: 'center',
                    justifyContent: 'center',
                    color: 'text.secondary'
                  }}
                >
                  <Typography variant="body2">No instruction data available</Typography>
                </Box>
              )}
            </Box>
          </Box>
        )}
      </Box>

      {/* Bottom section: Job Status and Controls */}
      <Box
        sx={{
          p: 2,
          bgcolor: 'rgba(148, 163, 184, 0.1)',
          borderRadius: 1,
          display: 'flex',
          flexDirection: 'column',
          gap: 2
        }}
      >
        {/* Job status */}
        {getJobStatusDisplay()}

        {/* Benchmark selection and Start button */}
        <Box sx={{ display: 'flex', alignItems: 'center', gap: 2, flexWrap: 'wrap' }}>
          <Typography variant="body2" sx={{ color: 'text.secondary' }}>
            Selected: {selectedBenchmarkNames.length > 0 ? selectedBenchmarkNames.join(', ') : 'None'}
          </Typography>
          {currentBenchmark && (
            <Chip
              size="small"
              label={`Viewing: ${currentBenchmark}`}
              color="primary"
              variant="outlined"
            />
          )}
          <Box sx={{ flex: 1 }} />
          <Button
            variant="contained"
            disabled={isLocked || selectedBenchmarkNames.length === 0}
            onClick={onStartMapping}
            startIcon={<PlayArrowIcon />}
          >
            Start Mapping
          </Button>
        </Box>
      </Box>
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
  instructionData: PropTypes.object,
  isLocked: PropTypes.bool.isRequired,
  onStartMapping: PropTypes.func.isRequired,
  selectedBenchmarkNames: PropTypes.arrayOf(PropTypes.string).isRequired,
  currentBenchmark: PropTypes.string
};

export default MappingTab;
