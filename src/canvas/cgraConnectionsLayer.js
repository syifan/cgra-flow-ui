import { select } from 'd3';
import {
  CGRA_ROUTER_FILL,
  CGRA_ROUTER_RADIUS,
  CGRA_ROUTER_SELECTED_FILL,
  CGRA_ROUTER_SELECTED_STROKE,
  CGRA_ROUTER_STROKE
} from './constants';

export function createCgraConnectionsLayer(root, { onSelectionChange } = {}) {
  const group = root.append('g').attr('class', 'layer-cgra-connections');
  const clampOpacity = (value) =>
    Number.isFinite(value) ? Math.max(0, Math.min(1, value)) : 1;

  const connectorsGroup = group
    .append('g')
    .attr('class', 'cgra-switch-connectors')
    .attr('fill', 'none')
    .attr('stroke', CGRA_ROUTER_STROKE)
    .attr('stroke-width', 3)
    .attr('stroke-opacity', 0.85)
    .attr('pointer-events', 'none');

  const linksGroup = group
    .append('g')
    .attr('class', 'cgra-links')
    .attr('fill', 'none')
    .attr('stroke', '#7dd3fc')
    .attr('stroke-width', 3)
    .attr('stroke-opacity', 0.6)
    .attr('pointer-events', 'none');

  const switchesGroup = group
    .append('g')
    .attr('class', 'cgra-switches')
    .attr('pointer-events', 'auto');

  const render = ({ links = [], connectors = [], switches = [] } = {}) => {
    const linkSelection = linksGroup.selectAll('line.cgra-connection').data(links, (d) => d.id);

    linkSelection
      .exit()
      .remove();

    linkSelection
      .enter()
      .append('line')
      .attr('class', 'cgra-connection')
      .attr('stroke-linecap', 'round')
      .attr('marker-end', 'url(#cgra-arrow)')
      .merge(linkSelection)
      .attr('x1', (d) => d.x1)
      .attr('y1', (d) => d.y1)
      .attr('x2', (d) => d.x2)
      .attr('y2', (d) => d.y2);

    const connectorSelection = connectorsGroup
      .selectAll('line.cgra-switch-connector')
      .data(connectors, (d) => d.id);

    connectorSelection.exit().remove();

    connectorSelection
      .enter()
      .append('line')
      .attr('class', 'cgra-switch-connector')
      .attr('stroke-linecap', 'round')
      .merge(connectorSelection)
      .attr('x1', (d) => d.x1)
      .attr('y1', (d) => d.y1)
      .attr('x2', (d) => d.x2)
      .attr('y2', (d) => d.y2);

    const switchSelection = switchesGroup.selectAll('circle.cgra-switch').data(switches, (d) => d.id);

    switchSelection.exit().remove();

    const switchEnter = switchSelection
      .enter()
      .append('circle')
      .attr('class', 'cgra-switch')
      .attr('r', CGRA_ROUTER_RADIUS)
      .attr('fill', CGRA_ROUTER_FILL)
      .attr('stroke', CGRA_ROUTER_STROKE)
      .attr('stroke-width', 3)
      .attr('stroke-opacity', 0.85)
      .style('cursor', 'pointer')
      .on('click', (event, datum) => {
        event.stopPropagation();
        onSelectionChange?.({ type: 'cgra', id: datum.id, cgraId: datum.id });
      });

    switchEnter
      .merge(switchSelection)
      .attr('cx', (d) => d.cx)
      .attr('cy', (d) => d.cy);
  };

  const updateSelection = (selection) => {
    switchesGroup.selectAll('circle.cgra-switch').each(function applySelection(datum) {
      const node = select(this);
      const isSelected = selection?.type === 'cgra' && selection.id === datum.id;

      node
        .attr('fill', isSelected ? CGRA_ROUTER_SELECTED_FILL : CGRA_ROUTER_FILL)
        .attr('stroke', isSelected ? CGRA_ROUTER_SELECTED_STROKE : CGRA_ROUTER_STROKE);
    });
  };

  const setVisibility = (visible) => {
    group.attr('display', visible ? null : 'none');
  };

  const setOpacity = (value) => {
    group.attr('opacity', clampOpacity(value));
  };

  const handleZoom = () => {};

  const destroy = () => {
    group.remove();
  };

  return {
    render,
    updateSelection,
    setVisibility,
    setOpacity,
    handleZoom,
    destroy
  };
}
