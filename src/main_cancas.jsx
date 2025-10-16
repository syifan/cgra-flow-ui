import { useEffect, useMemo, useRef, useState, useCallback } from 'react';
import { Box } from '@mui/material';
import { select, zoom, zoomIdentity } from 'd3';
import LayerSelector from './LayerSelector';
import { buildLayout } from './layoutUtils';
import { renderCGRALayer, updateCGRASelection, updateCgraLabelVisibility } from './layers/CGRALayer';
import { renderCGRAConnectionLayer } from './layers/CGRAConnectionLayer';
import { renderPELayer, updatePESelection, updatePeLabelVisibility } from './layers/PELayer';
import { renderPEConnectionLayer, updatePeLinkVisibility } from './layers/PEConnectionLayer';

const PE_LINK_ARROW_LENGTH = 12;

// Zoom level thresholds for automatic layer visibility
const ZOOM_THRESHOLDS = {
  CGRA_MIN: 0.5,
  CGRA_MAX: 1.2,
  CGRA_CONNECTION_MIN: 0.5,
  CGRA_CONNECTION_MAX: 1.2,
  PE_MIN: 0.8,
  PE_MAX: 4,
  PE_CONNECTION_MIN: 0.85,
  PE_CONNECTION_MAX: 4
};

function getAutoLayerVisibility(zoomLevel) {
  return {
    cgra: zoomLevel >= ZOOM_THRESHOLDS.CGRA_MIN && zoomLevel <= ZOOM_THRESHOLDS.CGRA_MAX,
    cgraConnection: zoomLevel >= ZOOM_THRESHOLDS.CGRA_CONNECTION_MIN && zoomLevel <= ZOOM_THRESHOLDS.CGRA_CONNECTION_MAX,
    pe: zoomLevel >= ZOOM_THRESHOLDS.PE_MIN && zoomLevel <= ZOOM_THRESHOLDS.PE_MAX,
    peConnection: zoomLevel >= ZOOM_THRESHOLDS.PE_CONNECTION_MIN && zoomLevel <= ZOOM_THRESHOLDS.PE_CONNECTION_MAX
  };
}

function MainCanvas({ architecture, selection, onSelectionChange }) {
  const svgRef = useRef(null);
  const zoomTransformRef = useRef(zoomIdentity);
  const [layerVisibility, setLayerVisibility] = useState({
    automatic: true,
    cgra: false,
    cgraConnection: false,
    pe: false,
    peConnection: false
  });

  const layout = useMemo(() => buildLayout(architecture), [architecture]);

  const handleLayerVisibilityChange = useCallback((newVisibility) => {
    setLayerVisibility(newVisibility);
  }, []);

  const updateLayerVisibility = useCallback((svg, zoomLevel, visibility) => {
    const effectiveVisibility = visibility.automatic
      ? getAutoLayerVisibility(zoomLevel)
      : visibility;

    svg.selectAll('g.cgra-nodes').attr('display', effectiveVisibility.cgra ? null : 'none');
    svg.selectAll('g.cgra-links').attr('display', effectiveVisibility.cgraConnection ? null : 'none');
    svg.selectAll('g.pe-nodes').attr('display', effectiveVisibility.pe ? null : 'none');
    svg.selectAll('g.pe-links').attr('display', effectiveVisibility.peConnection ? null : 'none');

    updatePeLabelVisibility(svg, zoomLevel);
    updateCgraLabelVisibility(svg, zoomLevel);
  }, []);

  useEffect(() => {
    if (!svgRef.current) return;

    const svg = select(svgRef.current);
    svg.selectAll('*').remove();

    svg
      .attr('viewBox', `0 0 ${layout.width} ${layout.height}`)
      .attr('width', '100%')
      .attr('height', '100%');

    const defs = svg.append('defs');

    const peArrowMarker = defs
      .append('marker')
      .attr('id', 'pe-arrow')
      .attr('viewBox', `0 0 ${PE_LINK_ARROW_LENGTH} ${PE_LINK_ARROW_LENGTH}`)
      .attr('refX', PE_LINK_ARROW_LENGTH)
      .attr('refY', PE_LINK_ARROW_LENGTH / 2)
      .attr('markerWidth', PE_LINK_ARROW_LENGTH)
      .attr('markerHeight', PE_LINK_ARROW_LENGTH)
      .attr('orient', 'auto')
      .attr('markerUnits', 'userSpaceOnUse');

    peArrowMarker
      .append('path')
      .attr(
        'd',
        `M 0 0 L ${PE_LINK_ARROW_LENGTH} ${PE_LINK_ARROW_LENGTH / 2} L 0 ${PE_LINK_ARROW_LENGTH} z`
      )
      .attr('fill', '#60a5fa')
      .attr('fill-opacity', 0.85)
      .attr('stroke', 'none');

    const cgraArrowMarker = defs
      .append('marker')
      .attr('id', 'cgra-arrow')
      .attr('viewBox', '0 0 10 10')
      .attr('refX', 8)
      .attr('refY', 5)
      .attr('markerWidth', 7)
      .attr('markerHeight', 7)
      .attr('orient', 'auto')
      .attr('markerUnits', 'strokeWidth');

    cgraArrowMarker
      .append('path')
      .attr('d', 'M 0 0 L 10 5 L 0 10 z')
      .attr('fill', '#7dd3fc')
      .attr('fill-opacity', 0.85)
      .attr('stroke', 'none');

    const zoomGroup = svg.append('g').attr('class', 'zoom-group');

    // Render layers in order: CGRA connections, CGRA nodes, PE connections, PE nodes
    renderCGRAConnectionLayer(zoomGroup, layout.layouts);
    renderCGRALayer(zoomGroup, layout.layouts, onSelectionChange);

    layout.layouts.forEach((cgraLayout) => {
      const cgraGroup = zoomGroup
        .select(`g.cgra[data-id="${cgraLayout.id}"]`);

      const { positionMap } = renderPELayer(cgraGroup, cgraLayout, onSelectionChange);
      renderPEConnectionLayer(cgraGroup, positionMap);
    });

    const zoomBehavior = zoom()
      .scaleExtent([0.5, 4])
      .on('zoom', (event) => {
        zoomTransformRef.current = event.transform;
        zoomGroup.attr('transform', event.transform);
        updateLayerVisibility(svg, event.transform.k, layerVisibility);
      });

    svg.call(zoomBehavior);

    if (zoomTransformRef.current) {
      zoomGroup.attr('transform', zoomTransformRef.current);
      zoomBehavior.transform(svg, zoomTransformRef.current);
      updateLayerVisibility(svg, zoomTransformRef.current.k, layerVisibility);
    } else {
      updateLayerVisibility(svg, 1, layerVisibility);
    }

    svg.on('click', (event) => {
      if (event.defaultPrevented) return;
      onSelectionChange?.(null);
    });

    return () => {
      svg.on('.zoom', null);
      svg.on('click', null);
    };
  }, [layout, onSelectionChange, layerVisibility, updateLayerVisibility]);

  useEffect(() => {
    if (!svgRef.current) return;

    const svg = select(svgRef.current);

    updateCGRASelection(svg, selection);
    updatePESelection(svg, selection);
  }, [layout, selection]);

  return (
    <Box
      sx={{
        width: '100%',
        height: '100%',
        p: 3,
        bgcolor: 'rgba(15,23,42,0.55)',
        borderRadius: 1,
        boxShadow: 'inset 0 0 0 1px rgba(148,163,184,0.25)',
        position: 'relative'
      }}
    >
      <LayerSelector
        layerVisibility={layerVisibility}
        onLayerVisibilityChange={handleLayerVisibilityChange}
      />
      <svg ref={svgRef} />
    </Box>
  );
}

export default MainCanvas;
