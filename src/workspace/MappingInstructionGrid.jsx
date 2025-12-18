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
  getMaxIndexPerII,
  getArrayDimensions,
  getInstructionsAtIndexPerII,
  getDataFlowsAtIndexPerII
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
        // Flip y so row 0 is at bottom, higher rows are at top (Cartesian coordinates)
        y: GRID_PADDING + (rows - 1 - row) * (PE_SIZE + PE_GAP)
      });
    }
  }

  return nodes;
}

/**
 * SingleGridView - Render a single PE grid for a specific index_per_ii (animation slide)
 */
function SingleGridView({ instructionData, indexPerII, onInstructionHover, highlightedPE }) {
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

  // Update visualization when index_per_ii changes
  useEffect(() => {
    if (!layersRef.current.peLayer) return;

    // Get instructions for this index_per_ii (animation slide)
    const instructions = getInstructionsAtIndexPerII(instructionData, indexPerII);

    // Build map of coreId -> instruction
    const activeInstructions = new Map();
    instructions.forEach((inst) => {
      activeInstructions.set(inst.coreId, inst);
    });

    // Get data flows
    const flows = getDataFlowsAtIndexPerII(instructionData, indexPerII);

    // Render layers
    layersRef.current.peLayer.render(peNodes, activeInstructions, onInstructionHover, highlightedPE);
    layersRef.current.arrowsLayer.render(flows, GRID_PADDING, columns, rows);
  }, [instructionData, indexPerII, peNodes, columns, rows, onInstructionHover, highlightedPE]);

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
  indexPerII: PropTypes.number.isRequired,
  onInstructionHover: PropTypes.func,
  highlightedPE: PropTypes.shape({
    col: PropTypes.number,
    row: PropTypes.number
  })
};

/**
 * MiniPeGrid - Smaller PE grid for multi-chart view
 */
function MiniPeGrid({ instructionData, indexPerII }) {
  const { columns, rows } = useMemo(
    () => getArrayDimensions(instructionData),
    [instructionData]
  );
  const peNodes = useMemo(() => buildPeNodes(instructionData), [instructionData]);

  const instructions = useMemo(
    () => getInstructionsAtIndexPerII(instructionData, indexPerII),
    [instructionData, indexPerII]
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
        // Flip y so row 0 is at bottom (Cartesian coordinates)
        const y = miniPadding + (rows - 1 - node.row) * (miniPeSize + miniGap);

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
  indexPerII: PropTypes.number.isRequired
};

/**
 * MultiChartView - Show all index_per_ii values as a scrollable grid
 */
function MultiChartView({ instructionData, maxIndexPerII }) {
  const [jumpValue, setJumpValue] = useState('');
  const containerRef = useRef(null);

  const handleJump = useCallback(() => {
    const idx = parseInt(jumpValue, 10);
    if (!Number.isNaN(idx) && idx >= 0 && idx <= maxIndexPerII) {
      const element = document.getElementById(`slide-card-${idx}`);
      element?.scrollIntoView({ behavior: 'smooth', block: 'center' });
    }
  }, [jumpValue, maxIndexPerII]);

  const slideIndices = useMemo(
    () => Array.from({ length: maxIndexPerII + 1 }, (_, i) => i),
    [maxIndexPerII]
  );

  return (
    <Box sx={{ display: 'flex', flexDirection: 'column', height: '100%' }}>
      {/* Jump controls */}
      <Box sx={{ display: 'flex', gap: 1, mb: 2, alignItems: 'center' }}>
        <TextField
          size="small"
          label="Jump to slide"
          value={jumpValue}
          onChange={(e) => setJumpValue(e.target.value)}
          type="number"
          inputProps={{ min: 0, max: maxIndexPerII }}
          sx={{ width: 150 }}
        />
        <Button variant="outlined" size="small" onClick={handleJump}>
          Go
        </Button>
        <Typography variant="caption" sx={{ color: 'text.secondary', ml: 2 }}>
          {maxIndexPerII + 1} total slides (II)
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
        {slideIndices.map((idx) => (
          <Box
            key={idx}
            id={`slide-card-${idx}`}
            sx={{
              border: '1px solid',
              borderColor: 'divider',
              borderRadius: 1,
              p: 1,
              bgcolor: 'rgba(15, 23, 42, 0.3)'
            }}
          >
            <Typography variant="caption" sx={{ color: 'text.secondary', mb: 1, display: 'block' }}>
              II={idx}
            </Typography>
            <MiniPeGrid instructionData={instructionData} indexPerII={idx} />
          </Box>
        ))}
      </Box>
    </Box>
  );
}

MultiChartView.propTypes = {
  instructionData: PropTypes.object,
  maxIndexPerII: PropTypes.number.isRequired
};

/**
 * PlaybackControls - Controls for animation mode
 */
function PlaybackControls({
  isPlaying,
  onPlayPause,
  currentSlide,
  maxSlide,
  onSlideChange,
  playbackSpeed,
  onSpeedChange,
  isLooping,
  onLoopToggle
}) {
  return (
    <Box sx={{ display: 'flex', alignItems: 'center', gap: 1, p: 1, flexWrap: 'wrap' }}>
      {/* Navigation buttons */}
      <IconButton size="small" onClick={() => onSlideChange(0)} title="First">
        <FirstPageIcon fontSize="small" />
      </IconButton>
      <IconButton
        size="small"
        onClick={() => onSlideChange(Math.max(0, currentSlide - 1))}
        title="Previous"
      >
        <SkipPreviousIcon fontSize="small" />
      </IconButton>
      <IconButton size="small" onClick={onPlayPause} title={isPlaying ? 'Pause' : 'Play'}>
        {isPlaying ? <PauseIcon fontSize="small" /> : <PlayArrowIcon fontSize="small" />}
      </IconButton>
      <IconButton
        size="small"
        onClick={() => onSlideChange(Math.min(maxSlide, currentSlide + 1))}
        title="Next"
      >
        <SkipNextIcon fontSize="small" />
      </IconButton>
      <IconButton size="small" onClick={() => onSlideChange(maxSlide)} title="Last">
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
          value={currentSlide}
          min={0}
          max={maxSlide}
          onChange={(_, value) => onSlideChange(value)}
          valueLabelDisplay="auto"
        />
      </Box>

      {/* Slide display */}
      <Typography variant="caption" sx={{ color: 'text.secondary', minWidth: 60 }}>
        {currentSlide} / {maxSlide}
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
  currentSlide: PropTypes.number.isRequired,
  maxSlide: PropTypes.number.isRequired,
  onSlideChange: PropTypes.func.isRequired,
  playbackSpeed: PropTypes.number.isRequired,
  onSpeedChange: PropTypes.func.isRequired,
  isLooping: PropTypes.bool.isRequired,
  onLoopToggle: PropTypes.func.isRequired
};

/**
 * Main MappingInstructionGrid component
 */
function MappingInstructionGrid({ instructionData, onInstructionHover, onSlideChange, jumpTarget }) {
  const [viewMode, setViewMode] = useState('animation');
  const [currentSlide, setCurrentSlide] = useState(0);
  const [isPlaying, setIsPlaying] = useState(false);
  const [playbackSpeed, setPlaybackSpeed] = useState(DEFAULT_ANIMATION_SPEED);
  const [isLooping, setIsLooping] = useState(true);
  const [highlightedPE, setHighlightedPE] = useState(null);

  const maxSlide = useMemo(() => getMaxIndexPerII(instructionData), [instructionData]);
  const { compiledIi } = useMemo(() => getArrayDimensions(instructionData), [instructionData]);

  // Report slide (index_per_ii) changes to parent
  useEffect(() => {
    if (onSlideChange) {
      onSlideChange(viewMode === 'animation' ? currentSlide : null);
    }
  }, [currentSlide, viewMode, onSlideChange]);

  // Animation timer
  useEffect(() => {
    if (!isPlaying) return undefined;

    const timer = setInterval(() => {
      setCurrentSlide((s) => {
        if (s >= maxSlide) {
          if (isLooping) {
            return 0; // Loop back to start
          } else {
            setIsPlaying(false); // Stop at end
            return s;
          }
        }
        return s + 1;
      });
    }, playbackSpeed);

    return () => clearInterval(timer);
  }, [isPlaying, playbackSpeed, maxSlide, isLooping]);

  // Reset slide when instruction data changes
  // This is an intentional setState in effect - when data changes, we need to reset UI state
  // eslint-disable-next-line react-hooks/set-state-in-effect
  useEffect(() => {
    setCurrentSlide(0);
    setIsPlaying(false);
  }, [instructionData]);

  // Handle jump target from clicking dependency graph nodes
  // eslint-disable-next-line react-hooks/set-state-in-effect
  useEffect(() => {
    if (!jumpTarget) return;

    // Switch to animation mode if not already
    setViewMode('animation');
    // Jump to the target slide (index_per_ii)
    setCurrentSlide(jumpTarget.indexPerII);
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

  const handleSlideChange = useCallback((value) => {
    setCurrentSlide(value);
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
          currentSlide={currentSlide}
          maxSlide={maxSlide}
          onSlideChange={handleSlideChange}
          playbackSpeed={playbackSpeed}
          onSpeedChange={setPlaybackSpeed}
          isLooping={isLooping}
          onLoopToggle={handleLoopToggle}
        />
      )}

      {/* Render based on mode */}
      <Box sx={{ flex: 1, minHeight: 0, overflow: 'hidden' }}>
        {viewMode === 'multi' ? (
          <MultiChartView instructionData={instructionData} maxIndexPerII={maxSlide} />
        ) : (
          <SingleGridView
            instructionData={instructionData}
            indexPerII={currentSlide}
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
  onSlideChange: PropTypes.func,
  jumpTarget: PropTypes.shape({
    indexPerII: PropTypes.number,
    pe: PropTypes.shape({
      col: PropTypes.number,
      row: PropTypes.number
    }),
    id: PropTypes.number
  })
};

export default MappingInstructionGrid;
