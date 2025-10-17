import { select } from 'd3';
import {
  PE_DISABLED_FILL,
  PE_FILL,
  PE_LABEL_DISABLED_FILL,
  PE_LABEL_FILL,
  PE_LABEL_FONT_SIZE,
  PE_LABEL_SELECTED_FILL,
  PE_SELECTED_FILL,
  PE_SELECTED_STROKE,
  PE_SIZE,
  PE_STROKE
} from './constants';
import { applyPeLabel } from './utils';

export function createPeNodesLayer(root, { onSelectionChange } = {}) {
  const group = root
    .append('g')
    .attr('class', 'layer-pe-nodes')
    .attr('pointer-events', 'all');
  const clampOpacity = (value) =>
    Number.isFinite(value) ? Math.max(0, Math.min(1, value)) : 1;
  let currentGroupOpacity = 1;
  let currentLabelOpacity = 1;
  let currentZoomLevel = 1;
  const updatePointerEvents = () => {
    group.attr('pointer-events', currentGroupOpacity > 0 ? 'all' : 'none');
  };

  const applyLabelFontSize = () => {
    const k = Number.isFinite(currentZoomLevel) ? currentZoomLevel : 1;
    const fontScale = Math.min(1.8, Math.max(0.85, 1 / Math.max(k, 1e-6)));
    const fontSize = PE_LABEL_FONT_SIZE * fontScale;
    group.selectAll('text.pe-label').attr('font-size', fontSize);
  };

  const render = (nodes = []) => {
    const nodeSelection = group.selectAll('g.pe-node').data(nodes, (d) => d.id);

    nodeSelection.exit().remove();

    const nodeEnter = nodeSelection
      .enter()
      .append('g')
      .attr('class', 'pe-node')
      .style('cursor', 'pointer')
      .on('click', (event, datum) => {
        event.stopPropagation();
        onSelectionChange?.({ type: 'pe', id: datum.id, cgraId: datum.cgraId });
      });

    nodeEnter.append('rect').attr('rx', 8).attr('ry', 8);

    nodeEnter
      .append('text')
      .attr('class', 'pe-label')
      .attr('text-anchor', 'middle')
      .attr('dominant-baseline', 'middle')
      .attr('font-family', '"Fira Code", monospace');

    const merged = nodeEnter.merge(nodeSelection);

    merged
      .attr('data-id', (d) => d.id)
      .attr('transform', (d) => `translate(${d.x}, ${d.y})`)
      .each(function updateNode(datum) {
        const node = select(this);
        const isDisabled = Boolean(datum.disabled);

        node
          .select('rect')
          .attr('width', PE_SIZE)
          .attr('height', PE_SIZE)
          .attr('fill', isDisabled ? PE_DISABLED_FILL : PE_FILL)
          .attr('stroke', PE_STROKE)
          .attr('stroke-width', 1.5);

        node
          .select('text.pe-label')
          .attr('x', PE_SIZE / 2)
          .attr('y', PE_SIZE / 2)
          .attr('fill', isDisabled ? PE_LABEL_DISABLED_FILL : PE_LABEL_FILL)
          .datum(datum)
          .call(applyPeLabel);
      });

    merged.each(function applyLabelOpacity() {
      select(this).select('text.pe-label').attr('opacity', currentLabelOpacity);
    });

    applyLabelFontSize();
  };

  const updateSelection = (selection) => {
    group.selectAll('g.pe-node').each(function applySelection(datum) {
      const node = select(this);
      const isSelected = selection?.type === 'pe' && selection.id === datum.id;
      const isDisabled = Boolean(datum.disabled);

      node
        .select('rect')
        .attr('fill', () => {
          if (isSelected) return PE_SELECTED_FILL;
          return isDisabled ? PE_DISABLED_FILL : PE_FILL;
        })
        .attr('stroke', isSelected ? PE_SELECTED_STROKE : PE_STROKE)
        .attr('stroke-width', isSelected ? 2 : 1.5);

      node
        .select('text.pe-label')
        .attr('fill', () => {
          if (isSelected) return PE_LABEL_SELECTED_FILL;
          return isDisabled ? PE_LABEL_DISABLED_FILL : PE_LABEL_FILL;
        })
        .datum(datum)
        .call(applyPeLabel);
    });

    applyLabelFontSize();
  };

  const handleZoom = (zoomLevel) => {
    currentZoomLevel = Number.isFinite(zoomLevel) ? zoomLevel : 1;
    applyLabelFontSize();
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
    group.selectAll('text.pe-label').attr('opacity', currentLabelOpacity);
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
