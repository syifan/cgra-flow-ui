import { select } from 'd3';
import {
  CGRA_FILL,
  CGRA_LABEL_FILL,
  CGRA_LABEL_FONT_SIZE,
  CGRA_LABEL_MAX_SCALE,
  CGRA_LABEL_SELECTED_FILL,
  CGRA_SELECTED_FILL,
  CGRA_SELECTED_STROKE,
  CGRA_STROKE
} from './constants';

export function createCgraNodesLayer(root, { onSelectionChange } = {}) {
  const group = root.append('g').attr('class', 'layer-cgra-nodes').attr('pointer-events', 'all');
  const clampOpacity = (value) =>
    Number.isFinite(value) ? Math.max(0, Math.min(1, value)) : 1;
  let currentGroupOpacity = 1;
  let currentLabelOpacity = 1;
  const updatePointerEvents = () => {
    group.attr('pointer-events', currentGroupOpacity > 0 ? 'all' : 'none');
  };

  const render = (cgras = []) => {
    const nodeSelection = group.selectAll('g.cgra-node').data(cgras, (d) => d.id);

    nodeSelection.exit().remove();

    const nodeEnter = nodeSelection
      .enter()
      .append('g')
      .attr('class', 'cgra-node')
      .style('cursor', 'pointer')
      .on('click', (event, datum) => {
        event.stopPropagation();
        onSelectionChange?.({ type: 'cgra', id: datum.id, cgraId: datum.id });
      });

    nodeEnter.append('rect').attr('class', 'cgra-boundary').attr('rx', 18).attr('ry', 18);

    nodeEnter
      .append('text')
      .attr('class', 'cgra-label')
      .attr('fill', CGRA_LABEL_FILL)
      .attr('font-family', '"Fira Code", monospace')
      .attr('font-weight', 500)
      .attr('text-anchor', 'middle')
      .attr('dominant-baseline', 'central')
      .attr('pointer-events', 'none');

    const merged = nodeEnter.merge(nodeSelection);

    merged.attr('transform', (d) => `translate(${d.originX}, ${d.originY})`).each(function updateNode(datum) {
      const node = select(this);
      node.attr('data-id', datum.id);

      node
        .select('rect.cgra-boundary')
        .attr('width', datum.width)
        .attr('height', datum.height)
        .attr('fill', CGRA_FILL)
        .attr('stroke', CGRA_STROKE)
        .attr('stroke-width', 2.5);

      node
        .select('text.cgra-label')
        .attr('x', datum.width / 2)
        .attr('y', -12)
        .attr('font-size', CGRA_LABEL_FONT_SIZE)
        .text(datum.displayLabel || datum.label || datum.id);
    });

    merged.each(function applyLabelOpacity() {
      select(this).select('text.cgra-label').attr('opacity', currentLabelOpacity);
    });
  };

  const updateSelection = (selection) => {
    group.selectAll('g.cgra-node').each(function applySelection(datum) {
      const node = select(this);
      const isSelected = selection?.type === 'cgra' && selection.id === datum.id;

      node
        .select('rect.cgra-boundary')
        .attr('fill', isSelected ? CGRA_SELECTED_FILL : CGRA_FILL)
        .attr('stroke', isSelected ? CGRA_SELECTED_STROKE : CGRA_STROKE)
        .attr('stroke-width', isSelected ? 3.5 : 2.5)
        .attr('stroke-opacity', isSelected ? 0.95 : 1);

      node
        .select('text.cgra-label')
        .attr('fill', isSelected ? CGRA_LABEL_SELECTED_FILL : CGRA_LABEL_FILL);
    });
  };

  const handleZoom = (zoomLevel) => {
    const k = Number.isFinite(zoomLevel) ? zoomLevel : 1;
    const fontScale = Math.min(CGRA_LABEL_MAX_SCALE, Math.max(1, 1 / Math.max(k, 1e-6)));
    const fontSize = CGRA_LABEL_FONT_SIZE * fontScale;

    group
      .selectAll('text.cgra-label')
      .attr('font-size', fontSize);
  };

  const setVisibility = (visible) => {
    group.attr('display', visible ? null : 'none');
  };

  const setOpacity = (value) => {
    currentGroupOpacity = clampOpacity(value);
    group.attr('opacity', currentGroupOpacity);
    updatePointerEvents();
  };

  const setLabelOpacity = (value) => {
    currentLabelOpacity = clampOpacity(value);
    group.selectAll('text.cgra-label').attr('opacity', currentLabelOpacity);
  };

  const destroy = () => {
    group.remove();
  };

  return {
    render,
    updateSelection,
    handleZoom,
    setVisibility,
    setOpacity,
    setLabelOpacity,
    destroy
  };
}
