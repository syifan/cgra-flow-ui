import { select } from 'd3';

const CGRA_PADDING = 32;
const CGRA_FILL = 'rgba(30, 64, 175, 0.18)';
const CGRA_SELECTED_FILL = 'rgba(249, 115, 22, 0.22)';
const CGRA_STROKE = 'rgba(96, 165, 250, 0.6)';
const CGRA_SELECTED_STROKE = '#f97316';
const CGRA_LABEL_FILL = '#bae6fd';
const CGRA_LABEL_SELECTED_FILL = '#f8fafc';
const CGRA_LABEL_FONT_SIZE = 20;
const CGRA_LABEL_VISIBILITY_THRESHOLD = 0.65;
const CGRA_LABEL_MAX_SCALE = 1.75;
const CGRA_ROUTER_RADIUS = 14;
const CGRA_ROUTER_OFFSET = 28;
const CGRA_ROUTER_FILL = '#0ea5e9';
const CGRA_ROUTER_STROKE = '#38bdf8';
const CGRA_ROUTER_CONNECTOR_INSET = 18;

export function updateCgraLabelVisibility(svg, zoomLevel = 1) {
  const k = Number.isFinite(zoomLevel) ? zoomLevel : 1;
  const visible = k >= CGRA_LABEL_VISIBILITY_THRESHOLD;
  const fontScale = Math.min(CGRA_LABEL_MAX_SCALE, Math.max(1, 1 / Math.max(k, 1e-6)));
  const fontSize = CGRA_LABEL_FONT_SIZE * fontScale;

  svg
    .selectAll('g.cgra text.cgra-label')
    .attr('display', visible ? null : 'none')
    .attr('aria-hidden', visible ? null : 'true')
    .attr('font-size', fontSize);
}

export function renderCGRALayer(parent, layouts, onSelectionChange) {
  const cgraNodeLayer = parent.append('g').attr('class', 'cgra-nodes');

  layouts.forEach((cgraLayout) => {
    const group = cgraNodeLayer
      .append('g')
      .attr('class', 'cgra')
      .attr('data-id', cgraLayout.id)
      .datum(cgraLayout)
      .attr('transform', `translate(${cgraLayout.originX}, ${cgraLayout.originY})`)
      .style('cursor', 'pointer')
      .on('click', (event) => {
        event.stopPropagation();
        onSelectionChange?.({ type: 'cgra', id: cgraLayout.id, cgraId: cgraLayout.id });
      });

    group
      .append('rect')
      .attr('class', 'cgra-boundary')
      .attr('width', cgraLayout.width)
      .attr('height', cgraLayout.height)
      .attr('rx', 18)
      .attr('ry', 18)
      .attr('fill', CGRA_FILL)
      .attr('stroke', CGRA_STROKE)
      .attr('stroke-width', 2.5);

    group
      .append('text')
      .attr('class', 'cgra-label')
      .attr('x', cgraLayout.width / 2)
      .attr('y', -12)
      .attr('fill', CGRA_LABEL_FILL)
      .attr('font-family', '"Fira Code", monospace')
      .attr('font-size', CGRA_LABEL_FONT_SIZE)
      .attr('font-weight', 500)
      .attr('text-anchor', 'middle')
      .attr('dominant-baseline', 'central')
      .attr('pointer-events', 'none')
      .text(cgraLayout.displayLabel || cgraLayout.label || cgraLayout.id);

    const connectorStartX = CGRA_ROUTER_CONNECTOR_INSET;
    const connectorStartY = cgraLayout.height - CGRA_ROUTER_CONNECTOR_INSET;
    const connectorDx = cgraLayout.routerLocalX - connectorStartX;
    const connectorDy = cgraLayout.routerLocalY - connectorStartY;
    const connectorLength = Math.sqrt(connectorDx * connectorDx + connectorDy * connectorDy) || 1;
    const connectorEndX =
      cgraLayout.routerLocalX - (connectorDx / connectorLength) * CGRA_ROUTER_RADIUS;
    const connectorEndY =
      cgraLayout.routerLocalY - (connectorDy / connectorLength) * CGRA_ROUTER_RADIUS;

    group
      .append('line')
      .attr('class', 'cgra-router-connector')
      .attr('x1', connectorStartX)
      .attr('y1', connectorStartY)
      .attr('x2', connectorEndX)
      .attr('y2', connectorEndY)
      .attr('stroke', CGRA_ROUTER_STROKE)
      .attr('stroke-width', 3)
      .attr('stroke-opacity', 0.85)
      .attr('stroke-linecap', 'round');

    group
      .append('circle')
      .attr('class', 'cgra-router')
      .attr('cx', cgraLayout.routerLocalX)
      .attr('cy', cgraLayout.routerLocalY)
      .attr('r', CGRA_ROUTER_RADIUS)
      .attr('fill', CGRA_ROUTER_FILL)
      .attr('stroke', CGRA_ROUTER_STROKE)
      .attr('stroke-width', 3)
      .attr('stroke-opacity', 0.85);
  });

  return cgraNodeLayer;
}

export function updateCGRASelection(svg, selection) {
  svg.selectAll('g.cgra').each(function updateCgra() {
    const group = select(this);
    const id = group.attr('data-id');
    const boundary = group.select('rect.cgra-boundary');
    const label = group.select('text.cgra-label');
    const isSelected = selection?.type === 'cgra' && selection.id === id;
    const data = group.datum();

    boundary
      .attr('fill', isSelected ? CGRA_SELECTED_FILL : CGRA_FILL)
      .attr('stroke', isSelected ? CGRA_SELECTED_STROKE : CGRA_STROKE)
      .attr('stroke-width', isSelected ? 3.5 : 2.5)
      .attr('stroke-opacity', isSelected ? 0.95 : 1);

    if (!label.empty()) {
      label
        .text(data?.displayLabel || data?.label || data?.id || id)
        .attr('fill', isSelected ? CGRA_LABEL_SELECTED_FILL : CGRA_LABEL_FILL);
    }
  });
}
