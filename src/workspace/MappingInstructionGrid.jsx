/**
 * MappingInstructionGrid - Visualize mapped instructions on a PE grid
 * Supports Animation and Multi-chart viewing modes
 */

import { useCallback, useEffect, useMemo, useRef, useState } from 'react';
import PropTypes from 'prop-types';
import { select, zoom as d3Zoom } from 'd3';
import {
  Box,
  Button,
  IconButton,
  MenuItem,
  Select,
  Slider,
  Tab,
  Tabs,
  TextField,
  Typography
} from '@mui/material';
import PlayArrowIcon from '@mui/icons-material/PlayArrow';
import PauseIcon from '@mui/icons-material/Pause';
import SkipPreviousIcon from '@mui/icons-material/SkipPrevious';
import SkipNextIcon from '@mui/icons-material/SkipNext';
import FirstPageIcon from '@mui/icons-material/FirstPage';
import LastPageIcon from '@mui/icons-material/LastPage';
import RepeatIcon from '@mui/icons-material/Repeat';
import RepeatOneIcon from '@mui/icons-material/RepeatOne';

import {
  getMaxTimestep,
  getArrayDimensions,
  getInstructionsAtTimestep,
  getDataFlowsAtTimestep
} from './instructionUtils';
import { createInstructionPeLayer } from './mapping-canvas/instructionPeLayer';
import { createDataFlowArrowsLayer } from './mapping-canvas/dataFlowArrowsLayer';
import {
  PE_SIZE,
  PE_GAP,
  GRID_PADDING,
  ZOOM_MIN,
  ZOOM_MAX,
  DEFAULT_ANIMATION_SPEED
} from './mapping-canvas/constants';

/**
 * Build PE node data for the grid
 */
function buildPeNodes(instructionData) {
  const { columns, rows } = getArrayDimensions(instructionData);
  const nodes = [];

  // Build a map of (column, row) -> coreId from instruction data
  const coreMap = new Map();
  instructionData?.array_config?.cores?.forEach((core) => {
    coreMap.set(`${core.column},${core.row}`, core.core_id);
  });

  for (let row = 0; row < rows; row++) {
    for (let col = 0; col < columns; col++) {
      const coreId = coreMap.get(`${col},${row}`) || `${col}-${row}`;
      nodes.push({
        id: `pe-${col}-${row}`,
        coreId,
        column: col,
        row: row,
        x: GRID_PADDING + col * (PE_SIZE + PE_GAP),
        y: GRID_PADDING + row * (PE_SIZE + PE_GAP)
      });
    }
  }

  return nodes;
}

/**
 * SingleGridView - Render a single PE grid for a specific timestep
 */
function SingleGridView({ instructionData, timestep, onInstructionHover, highlightedPE }) {
  const svgRef = useRef(null);
  const layersRef = useRef({ peLayer: null, arrowsLayer: null });

  const { columns, rows } = useMemo(
    () => getArrayDimensions(instructionData),
    [instructionData]
  );
  const peNodes = useMemo(() => buildPeNodes(instructionData), [instructionData]);

  const svgWidth = GRID_PADDING * 2 + columns * PE_SIZE + (columns - 1) * PE_GAP;
  const svgHeight = GRID_PADDING * 2 + rows * PE_SIZE + (rows - 1) * PE_GAP;

  // Initialize D3 layers
  useEffect(() => {
    if (!svgRef.current) return undefined;

    const svg = select(svgRef.current);
    svg.selectAll('*').remove();

    const contentGroup = svg.append('g').attr('class', 'content');

    // Create layers
    const arrowsLayer = createDataFlowArrowsLayer(contentGroup);
    const peLayer = createInstructionPeLayer(contentGroup);
    layersRef.current.arrowsLayer = arrowsLayer;
    layersRef.current.peLayer = peLayer;

    // Setup zoom
    const zoomBehavior = d3Zoom()
      .scaleExtent([ZOOM_MIN, ZOOM_MAX])
      .on('zoom', (event) => {
        contentGroup.attr('transform', event.transform);
      });

    svg.call(zoomBehavior);

    return () => {
      peLayer?.destroy();
      arrowsLayer?.destroy();
    };
  }, []);

  // Update visualization when timestep changes
  useEffect(() => {
    if (!layersRef.current.peLayer) return;

    // Get instructions for this timestep
    const instructions = getInstructionsAtTimestep(instructionData, timestep);

    // Build map of coreId -> instruction
    const activeInstructions = new Map();
    instructions.forEach((inst) => {
      activeInstructions.set(inst.coreId, inst);
    });

    // Get data flows
    const flows = getDataFlowsAtTimestep(instructionData, timestep);

    // Render layers
    layersRef.current.peLayer.render(peNodes, activeInstructions, onInstructionHover, highlightedPE);
    layersRef.current.arrowsLayer.render(flows, GRID_PADDING, columns, rows);
  }, [instructionData, timestep, peNodes, columns, rows, onInstructionHover, highlightedPE]);

  return (
    <svg
      ref={svgRef}
      width="100%"
      height="100%"
      viewBox={`0 0 ${svgWidth} ${svgHeight}`}
      style={{ background: 'rgba(15, 23, 42, 0.5)', borderRadius: 8 }}
    />
  );
}

SingleGridView.propTypes = {
  instructionData: PropTypes.object,
  timestep: PropTypes.number.isRequired,
  onInstructionHover: PropTypes.func,
  highlightedPE: PropTypes.shape({
    col: PropTypes.number,
    row: PropTypes.number
  })
};

/**
 * MiniPeGrid - Smaller PE grid for multi-chart view
 */
function MiniPeGrid({ instructionData, timestep }) {
  const { columns, rows } = useMemo(
    () => getArrayDimensions(instructionData),
    [instructionData]
  );
  const peNodes = useMemo(() => buildPeNodes(instructionData), [instructionData]);

  const instructions = useMemo(
    () => getInstructionsAtTimestep(instructionData, timestep),
    [instructionData, timestep]
  );

  const activeInstructions = useMemo(() => {
    const map = new Map();
    instructions.forEach((inst) => {
      map.set(inst.coreId, inst);
    });
    return map;
  }, [instructions]);

  const miniPeSize = 24;
  const miniGap = 4;
  const miniPadding = 8;
  const width = miniPadding * 2 + columns * miniPeSize + (columns - 1) * miniGap;
  const height = miniPadding * 2 + rows * miniPeSize + (rows - 1) * miniGap;

  return (
    <svg width={width} height={height} style={{ background: 'rgba(15, 23, 42, 0.3)', borderRadius: 4 }}>
      {peNodes.map((node) => {
        const inst = activeInstructions.get(node.coreId);
        const isActive = Boolean(inst);
        const x = miniPadding + node.column * (miniPeSize + miniGap);
        const y = miniPadding + node.row * (miniPeSize + miniGap);

        return (
          <rect
            key={node.id}
            x={x}
            y={y}
            width={miniPeSize}
            height={miniPeSize}
            rx={3}
            fill={isActive ? '#3b82f6' : 'rgba(148, 163, 184, 0.2)'}
            stroke={isActive ? '#1d4ed8' : 'rgba(148, 163, 184, 0.3)'}
            strokeWidth={1}
          />
        );
      })}
    </svg>
  );
}

MiniPeGrid.propTypes = {
  instructionData: PropTypes.object,
  timestep: PropTypes.number.isRequired
};

/**
 * MultiChartView - Show all timesteps as a scrollable grid
 */
function MultiChartView({ instructionData, maxTimestep }) {
  const [jumpValue, setJumpValue] = useState('');
  const containerRef = useRef(null);

  const handleJump = useCallback(() => {
    const ts = parseInt(jumpValue, 10);
    if (!Number.isNaN(ts) && ts >= 0 && ts <= maxTimestep) {
      const element = document.getElementById(`timestep-card-${ts}`);
      element?.scrollIntoView({ behavior: 'smooth', block: 'center' });
    }
  }, [jumpValue, maxTimestep]);

  const timesteps = useMemo(
    () => Array.from({ length: maxTimestep + 1 }, (_, i) => i),
    [maxTimestep]
  );

  return (
    <Box sx={{ display: 'flex', flexDirection: 'column', height: '100%' }}>
      {/* Jump controls */}
      <Box sx={{ display: 'flex', gap: 1, mb: 2, alignItems: 'center' }}>
        <TextField
          size="small"
          label="Jump to timestep"
          value={jumpValue}
          onChange={(e) => setJumpValue(e.target.value)}
          type="number"
          inputProps={{ min: 0, max: maxTimestep }}
          sx={{ width: 150 }}
        />
        <Button variant="outlined" size="small" onClick={handleJump}>
          Go
        </Button>
        <Typography variant="caption" sx={{ color: 'text.secondary', ml: 2 }}>
          {maxTimestep + 1} total timesteps
        </Typography>
      </Box>

      {/* Scrollable chart grid */}
      <Box
        ref={containerRef}
        sx={{
          display: 'grid',
          gridTemplateColumns: 'repeat(auto-fill, minmax(180px, 1fr))',
          gap: 2,
          flex: 1,
          overflow: 'auto',
          pb: 2
        }}
      >
        {timesteps.map((ts) => (
          <Box
            key={ts}
            id={`timestep-card-${ts}`}
            sx={{
              border: '1px solid',
              borderColor: 'divider',
              borderRadius: 1,
              p: 1,
              bgcolor: 'rgba(15, 23, 42, 0.3)'
            }}
          >
            <Typography variant="caption" sx={{ color: 'text.secondary', mb: 1, display: 'block' }}>
              t={ts}
            </Typography>
            <MiniPeGrid instructionData={instructionData} timestep={ts} />
          </Box>
        ))}
      </Box>
    </Box>
  );
}

MultiChartView.propTypes = {
  instructionData: PropTypes.object,
  maxTimestep: PropTypes.number.isRequired
};

/**
 * PlaybackControls - Controls for animation mode
 */
function PlaybackControls({
  isPlaying,
  onPlayPause,
  currentTimestep,
  maxTimestep,
  onTimestepChange,
  playbackSpeed,
  onSpeedChange,
  isLooping,
  onLoopToggle
}) {
  return (
    <Box sx={{ display: 'flex', alignItems: 'center', gap: 1, p: 1, flexWrap: 'wrap' }}>
      {/* Navigation buttons */}
      <IconButton size="small" onClick={() => onTimestepChange(0)} title="First">
        <FirstPageIcon fontSize="small" />
      </IconButton>
      <IconButton
        size="small"
        onClick={() => onTimestepChange(Math.max(0, currentTimestep - 1))}
        title="Previous"
      >
        <SkipPreviousIcon fontSize="small" />
      </IconButton>
      <IconButton size="small" onClick={onPlayPause} title={isPlaying ? 'Pause' : 'Play'}>
        {isPlaying ? <PauseIcon fontSize="small" /> : <PlayArrowIcon fontSize="small" />}
      </IconButton>
      <IconButton
        size="small"
        onClick={() => onTimestepChange(Math.min(maxTimestep, currentTimestep + 1))}
        title="Next"
      >
        <SkipNextIcon fontSize="small" />
      </IconButton>
      <IconButton size="small" onClick={() => onTimestepChange(maxTimestep)} title="Last">
        <LastPageIcon fontSize="small" />
      </IconButton>

      {/* Loop toggle */}
      <IconButton
        size="small"
        onClick={onLoopToggle}
        title={isLooping ? 'Loop enabled' : 'Loop disabled'}
        sx={{ color: isLooping ? 'primary.main' : 'text.secondary' }}
      >
        {isLooping ? <RepeatIcon fontSize="small" /> : <RepeatOneIcon fontSize="small" />}
      </IconButton>

      {/* Progress slider */}
      <Box sx={{ flex: 1, minWidth: 100, mx: 1 }}>
        <Slider
          size="small"
          value={currentTimestep}
          min={0}
          max={maxTimestep}
          onChange={(_, value) => onTimestepChange(value)}
          valueLabelDisplay="auto"
        />
      </Box>

      {/* Timestep display */}
      <Typography variant="caption" sx={{ color: 'text.secondary', minWidth: 60 }}>
        {currentTimestep} / {maxTimestep}
      </Typography>

      {/* Speed selector */}
      <Select
        size="small"
        value={playbackSpeed}
        onChange={(e) => onSpeedChange(e.target.value)}
        sx={{ minWidth: 80 }}
      >
        <MenuItem value={2000}>0.5x</MenuItem>
        <MenuItem value={1000}>1x</MenuItem>
        <MenuItem value={500}>2x</MenuItem>
        <MenuItem value={250}>4x</MenuItem>
      </Select>
    </Box>
  );
}

PlaybackControls.propTypes = {
  isPlaying: PropTypes.bool.isRequired,
  onPlayPause: PropTypes.func.isRequired,
  currentTimestep: PropTypes.number.isRequired,
  maxTimestep: PropTypes.number.isRequired,
  onTimestepChange: PropTypes.func.isRequired,
  playbackSpeed: PropTypes.number.isRequired,
  onSpeedChange: PropTypes.func.isRequired,
  isLooping: PropTypes.bool.isRequired,
  onLoopToggle: PropTypes.func.isRequired
};

/**
 * Main MappingInstructionGrid component
 */
function MappingInstructionGrid({ instructionData, onInstructionHover, onTimestepChange, jumpTarget }) {
  const [viewMode, setViewMode] = useState('animation');
  const [currentTimestep, setCurrentTimestep] = useState(0);
  const [isPlaying, setIsPlaying] = useState(false);
  const [playbackSpeed, setPlaybackSpeed] = useState(DEFAULT_ANIMATION_SPEED);
  const [isLooping, setIsLooping] = useState(true);
  const [highlightedPE, setHighlightedPE] = useState(null);

  const maxTimestep = useMemo(() => getMaxTimestep(instructionData), [instructionData]);
  const { compiledIi } = useMemo(() => getArrayDimensions(instructionData), [instructionData]);

  // Report timestep changes to parent
  useEffect(() => {
    if (onTimestepChange) {
      onTimestepChange(viewMode === 'animation' ? currentTimestep : null);
    }
  }, [currentTimestep, viewMode, onTimestepChange]);

  // Animation timer
  useEffect(() => {
    if (!isPlaying) return undefined;

    const timer = setInterval(() => {
      setCurrentTimestep((t) => {
        if (t >= maxTimestep) {
          if (isLooping) {
            return 0; // Loop back to start
          } else {
            setIsPlaying(false); // Stop at end
            return t;
          }
        }
        return t + 1;
      });
    }, playbackSpeed);

    return () => clearInterval(timer);
  }, [isPlaying, playbackSpeed, maxTimestep, isLooping]);

  // Reset timestep when instruction data changes
  // This is an intentional setState in effect - when data changes, we need to reset UI state
  // eslint-disable-next-line react-hooks/set-state-in-effect
  useEffect(() => {
    setCurrentTimestep(0);
    setIsPlaying(false);
  }, [instructionData]);

  // Handle jump target from clicking dependency graph nodes
  // eslint-disable-next-line react-hooks/set-state-in-effect
  useEffect(() => {
    if (!jumpTarget) return;

    // Switch to animation mode if not already
    setViewMode('animation');
    // Jump to the target timestep
    setCurrentTimestep(jumpTarget.timestep);
    // Stop any playing animation
    setIsPlaying(false);
    // Highlight the target PE
    setHighlightedPE({ col: jumpTarget.pe.col, row: jumpTarget.pe.row });

    // Clear highlight after a brief period
    const timer = setTimeout(() => {
      setHighlightedPE(null);
    }, 1500);

    return () => clearTimeout(timer);
  }, [jumpTarget]);

  const handleViewModeChange = useCallback((_, newMode) => {
    if (newMode !== null) {
      setViewMode(newMode);
      setIsPlaying(false);
    }
  }, []);

  const handlePlayPause = useCallback(() => {
    setIsPlaying((prev) => !prev);
  }, []);

  const handleTimestepChange = useCallback((value) => {
    setCurrentTimestep(value);
    setIsPlaying(false);
  }, []);

  const handleLoopToggle = useCallback(() => {
    setIsLooping((prev) => !prev);
  }, []);

  if (!instructionData?.array_config) {
    return (
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
    );
  }

  return (
    <Box sx={{ height: '100%', display: 'flex', flexDirection: 'column' }}>
      {/* Header with compiled II info */}
      <Box sx={{ display: 'flex', alignItems: 'center', justifyContent: 'space-between', mb: 1 }}>
        <Typography variant="subtitle2" sx={{ color: 'text.secondary' }}>
          Instruction Mapping
        </Typography>
        {compiledIi > 0 && (
          <Typography variant="caption" sx={{ color: 'text.secondary' }}>
            Compiled II: {compiledIi}
          </Typography>
        )}
      </Box>

      {/* Mode selector tabs */}
      <Tabs value={viewMode} onChange={handleViewModeChange} sx={{ minHeight: 36, mb: 1 }}>
        <Tab value="animation" label="Animation" sx={{ minHeight: 36, py: 0 }} />
        <Tab value="multi" label="Multi" sx={{ minHeight: 36, py: 0 }} />
      </Tabs>

      {/* Playback controls (for animation mode) */}
      {viewMode === 'animation' && (
        <PlaybackControls
          isPlaying={isPlaying}
          onPlayPause={handlePlayPause}
          currentTimestep={currentTimestep}
          maxTimestep={maxTimestep}
          onTimestepChange={handleTimestepChange}
          playbackSpeed={playbackSpeed}
          onSpeedChange={setPlaybackSpeed}
          isLooping={isLooping}
          onLoopToggle={handleLoopToggle}
        />
      )}

      {/* Render based on mode */}
      <Box sx={{ flex: 1, minHeight: 0, overflow: 'hidden' }}>
        {viewMode === 'multi' ? (
          <MultiChartView instructionData={instructionData} maxTimestep={maxTimestep} />
        ) : (
          <SingleGridView
            instructionData={instructionData}
            timestep={currentTimestep}
            onInstructionHover={onInstructionHover}
            highlightedPE={highlightedPE}
          />
        )}
      </Box>
    </Box>
  );
}

MappingInstructionGrid.propTypes = {
  instructionData: PropTypes.object,
  onInstructionHover: PropTypes.func,
  onTimestepChange: PropTypes.func,
  jumpTarget: PropTypes.shape({
    timestep: PropTypes.number,
    pe: PropTypes.shape({
      col: PropTypes.number,
      row: PropTypes.number
    }),
    id: PropTypes.number
  })
};

export default MappingInstructionGrid;
