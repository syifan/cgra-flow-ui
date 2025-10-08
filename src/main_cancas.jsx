import { useEffect, useMemo, useRef, useState } from 'react';
import { Box } from '@mui/material';
import { select } from 'd3-selection';
import { zoom } from 'd3-zoom';

const PE_SIZE = 42;
const PE_GAP = 16;
const CGRA_PADDING = 32;
const CGRA_GAP = 160;
const MARGIN = 48;
const CGRA_FILL = 'rgba(30, 64, 175, 0.18)';
const CGRA_SELECTED_FILL = 'rgba(14, 116, 144, 0.3)';
const CGRA_STROKE = 'rgba(96, 165, 250, 0.6)';
const CGRA_SELECTED_STROKE = '#38bdf8';
const CGRA_ROUTER_RADIUS = 14;
const CGRA_ROUTER_OFFSET = 28;
const CGRA_ROUTER_FILL = '#0ea5e9';
const CGRA_ROUTER_STROKE = '#38bdf8';
const CGRA_ROUTER_SELECTED_FILL = '#f97316';
const CGRA_ROUTER_SELECTED_STROKE = '#fb923c';
const CGRA_ROUTER_CONNECTOR_INSET = 18;
const PE_FILL = 'rgba(59, 130, 246, 0.6)';
const PE_STROKE = '#1d4ed8';
const PE_SELECTED_FILL = '#f97316';
const PE_SELECTED_STROKE = '#fb923c';
const PE_LABEL_FILL = '#e2e8f0';
const PE_LABEL_SELECTED_FILL = '#0f172a';

function computeRouterLinkEndpoints(source, target) {
  const dx = target.routerCenterX - source.routerCenterX;
  const dy = target.routerCenterY - source.routerCenterY;
  const distance = Math.sqrt(dx * dx + dy * dy) || 1;
  const ux = dx / distance;
  const uy = dy / distance;

  return {
    x1: source.routerCenterX + ux * CGRA_ROUTER_RADIUS,
    y1: source.routerCenterY + uy * CGRA_ROUTER_RADIUS,
    x2: target.routerCenterX - ux * CGRA_ROUTER_RADIUS,
    y2: target.routerCenterY - uy * CGRA_ROUTER_RADIUS
  };
}

function buildLayout(architecture) {
  const layouts = architecture.CGRAs.map((cgra) => {
    const peXs = cgra.PEs.map((pe) => pe.x);
    const peYs = cgra.PEs.map((pe) => pe.y);
    const minX = Math.min(...peXs);
    const maxX = Math.max(...peXs);
    const minY = Math.min(...peYs);
    const maxY = Math.max(...peYs);
    const columns = maxX - minX + 1;
    const rows = maxY - minY + 1;

    const width = columns * PE_SIZE + (columns - 1) * PE_GAP + CGRA_PADDING * 2;
    const height = rows * PE_SIZE + (rows - 1) * PE_GAP + CGRA_PADDING * 2;

    return {
      ...cgra,
      minX,
      minY,
      width,
      height,
      columns,
      rows
    };
  });

  const enhancedLayouts = layouts.map((layout) => {
    const originX = MARGIN + layout.x * (layout.width + CGRA_GAP);
    const originY = MARGIN + layout.y * (layout.height + CGRA_GAP);
    const routerLocalX = layout.width + CGRA_ROUTER_OFFSET;
    const routerLocalY = layout.height + CGRA_ROUTER_OFFSET;
    const routerCenterX = originX + routerLocalX;
    const routerCenterY = originY + routerLocalY;

    return {
      ...layout,
      originX,
      originY,
      centerX: originX + layout.width / 2,
      centerY: originY + layout.height / 2,
      routerLocalX,
      routerLocalY,
      routerCenterX,
      routerCenterY
    };
  });

  const totalWidth =
    (enhancedLayouts.length
      ? Math.max(
          ...enhancedLayouts.map((layout) =>
            Math.max(layout.originX + layout.width, layout.routerCenterX + CGRA_ROUTER_RADIUS)
          )
        ) + MARGIN
      : MARGIN * 2);
  const totalHeight =
    (enhancedLayouts.length
      ? Math.max(
          ...enhancedLayouts.map((layout) =>
            Math.max(layout.originY + layout.height, layout.routerCenterY + CGRA_ROUTER_RADIUS)
          )
        ) + MARGIN
      : MARGIN * 2);

  return {
    layouts: enhancedLayouts,
    width: totalWidth,
    height: totalHeight
  };
}

function MainCanvas({ architecture }) {
  const svgRef = useRef(null);
  const [selection, setSelection] = useState(null);

  const layout = useMemo(() => buildLayout(architecture), [architecture]);

  useEffect(() => {
    if (!svgRef.current) return;

    const svg = select(svgRef.current);
    svg.selectAll('*').remove();

    svg
      .attr('viewBox', `0 0 ${layout.width} ${layout.height}`)
      .attr('width', '100%')
      .attr('height', '100%');

    const zoomGroup = svg.append('g').attr('class', 'zoom-group');

    const cgraLinkLayer = zoomGroup
      .append('g')
      .attr('class', 'cgra-links')
      .attr('stroke', '#7dd3fc')
      .attr('stroke-width', 3)
      .attr('stroke-opacity', 0.45)
      .attr('fill', 'none');

    const cgraNodeLayer = zoomGroup.append('g').attr('class', 'cgra-nodes');

    layout.layouts.forEach((cgraLayout) => {
      const group = cgraNodeLayer
        .append('g')
        .attr('class', 'cgra')
        .attr('data-id', cgraLayout.id)
        .attr('transform', `translate(${cgraLayout.originX}, ${cgraLayout.originY})`)
        .style('cursor', 'pointer')
        .on('click', (event) => {
          event.stopPropagation();
          setSelection({ type: 'cgra', id: cgraLayout.id });
        });

      const peLinkLayer = group
        .append('g')
        .attr('class', 'pe-links')
        .attr('stroke', '#60a5fa')
        .attr('stroke-width', 2)
        .attr('stroke-opacity', 0.4)
        .attr('fill', 'none');

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

      const connectorStartX = cgraLayout.width - CGRA_ROUTER_CONNECTOR_INSET;
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

      const peLayer = group.append('g').attr('class', 'pe-nodes');

      const positionMap = new Map();
      cgraLayout.PEs.forEach((pe) => {
        const col = pe.x - cgraLayout.minX;
        const row = pe.y - cgraLayout.minY;
        const px = CGRA_PADDING + col * (PE_SIZE + PE_GAP);
        const py = CGRA_PADDING + row * (PE_SIZE + PE_GAP);
        positionMap.set(`${pe.x},${pe.y}`, {
          ...pe,
          px,
          py,
          cx: px + PE_SIZE / 2,
          cy: py + PE_SIZE / 2
        });
      });

      const peLinks = [];
      positionMap.forEach((pe) => {
        const rightNeighbor = positionMap.get(`${pe.x + 1},${pe.y}`);
        const downNeighbor = positionMap.get(`${pe.x},${pe.y + 1}`);
        if (rightNeighbor) {
          peLinks.push({
            source: pe,
            target: rightNeighbor
          });
        }
        if (downNeighbor) {
          peLinks.push({
            source: pe,
            target: downNeighbor
          });
        }
      });

      peLinkLayer
        .selectAll('line')
        .data(peLinks)
        .enter()
        .append('line')
        .attr('x1', (d) => d.source.cx)
        .attr('y1', (d) => d.source.cy)
        .attr('x2', (d) => d.target.cx)
        .attr('y2', (d) => d.target.cy);

      const peNodes = Array.from(positionMap.values());

      const nodeGroups = peLayer
        .selectAll('g.pe')
        .data(peNodes)
        .enter()
        .append('g')
        .attr('class', 'pe')
        .attr('data-id', (d) => d.id)
        .attr('transform', (d) => `translate(${d.px}, ${d.py})`)
        .style('cursor', 'pointer')
        .on('click', (event, d) => {
          event.stopPropagation();
          setSelection({ type: 'pe', id: d.id, cgraId: cgraLayout.id });
        });

      nodeGroups
        .append('rect')
        .attr('width', PE_SIZE)
        .attr('height', PE_SIZE)
        .attr('rx', 8)
        .attr('ry', 8)
        .attr('fill', PE_FILL)
        .attr('stroke', PE_STROKE)
        .attr('stroke-width', 1.5);

      nodeGroups
        .append('text')
        .attr('x', PE_SIZE / 2)
        .attr('y', PE_SIZE / 2 + 4)
        .attr('fill', PE_LABEL_FILL)
        .attr('font-family', '"Fira Code", monospace')
        .attr('font-size', 12)
        .attr('text-anchor', 'middle')
        .text((d) => d.id);

      group
        .append('circle')
        .attr('class', 'cgra-router')
        .attr('cx', cgraLayout.routerLocalX)
        .attr('cy', cgraLayout.routerLocalY)
        .attr('r', CGRA_ROUTER_RADIUS)
        .attr('fill', CGRA_ROUTER_FILL)
        .attr('stroke', CGRA_ROUTER_STROKE)
        .attr('stroke-width', 3)
        .attr('stroke-opacity', 0.85)
        .style('cursor', 'pointer')
        .on('click', (event) => {
          event.stopPropagation();
          setSelection({ type: 'router', id: cgraLayout.id });
        });
    });

    const cgraLinks = [];
    const cgraMap = new Map();
    layout.layouts.forEach((cgra) => {
      cgraMap.set(`${cgra.x},${cgra.y}`, cgra);
    });

    layout.layouts.forEach((cgra) => {
      const rightNeighbor = cgraMap.get(`${cgra.x + 1},${cgra.y}`);
      const downNeighbor = cgraMap.get(`${cgra.x},${cgra.y + 1}`);
      if (rightNeighbor) {
        const endpoints = computeRouterLinkEndpoints(cgra, rightNeighbor);
        cgraLinks.push({
          source: cgra,
          target: rightNeighbor,
          ...endpoints
        });
      }
      if (downNeighbor) {
        const endpoints = computeRouterLinkEndpoints(cgra, downNeighbor);
        cgraLinks.push({
          source: cgra,
          target: downNeighbor,
          ...endpoints
        });
      }
    });

    cgraLinkLayer
      .selectAll('line')
      .data(cgraLinks)
      .enter()
      .append('line')
      .attr('x1', (d) => d.x1)
      .attr('y1', (d) => d.y1)
      .attr('x2', (d) => d.x2)
      .attr('y2', (d) => d.y2)
      .attr('stroke-linecap', 'round');

    const zoomBehavior = zoom()
      .scaleExtent([0.5, 4])
      .on('zoom', (event) => {
        zoomGroup.attr('transform', event.transform);
      });

    svg.call(zoomBehavior);
    svg.on('click', (event) => {
      if (event.defaultPrevented) return;
      setSelection(null);
    });

    return () => {
      svg.on('.zoom', null);
      svg.on('click', null);
    };
  }, [layout]);

  useEffect(() => {
    if (!svgRef.current) return;

    const svg = select(svgRef.current);

    svg.selectAll('g.cgra').each(function updateCgra() {
      const group = select(this);
      const id = group.attr('data-id');
      const boundary = group.select('rect.cgra-boundary');
      const router = group.select('circle.cgra-router');
      const connector = group.select('line.cgra-router-connector');
      const isSelected = selection?.type === 'cgra' && selection.id === id;
      const containsSelectedPe = selection?.type === 'pe' && selection.cgraId === id;
      const routerSelected = selection?.type === 'router' && selection.id === id;
      const highlight = isSelected || containsSelectedPe;

      boundary
        .attr('fill', highlight ? CGRA_SELECTED_FILL : CGRA_FILL)
        .attr('stroke', highlight ? CGRA_SELECTED_STROKE : CGRA_STROKE)
        .attr('stroke-width', highlight ? 3.5 : 2.5)
        .attr('stroke-opacity', highlight ? 0.95 : 1);

      connector
        .attr('stroke', routerSelected || highlight ? CGRA_ROUTER_SELECTED_STROKE : CGRA_ROUTER_STROKE)
        .attr('stroke-width', routerSelected || highlight ? 3.5 : 3)
        .attr('stroke-opacity', routerSelected || highlight ? 1 : 0.85);

      router
        .attr(
          'fill',
          routerSelected || highlight ? CGRA_ROUTER_SELECTED_FILL : CGRA_ROUTER_FILL
        )
        .attr(
          'stroke',
          routerSelected || highlight ? CGRA_ROUTER_SELECTED_STROKE : CGRA_ROUTER_STROKE
        )
        .attr('stroke-width', routerSelected || highlight ? 3.5 : 3)
        .attr('stroke-opacity', routerSelected || highlight ? 1 : 0.85);
    });

    svg.selectAll('g.pe').each(function updatePe() {
      const node = select(this);
      const id = node.attr('data-id');
      const rect = node.select('rect');
      const label = node.select('text');
      const isSelected = selection?.type === 'pe' && selection.id === id;

      rect
        .attr('fill', isSelected ? PE_SELECTED_FILL : PE_FILL)
        .attr('stroke', isSelected ? PE_SELECTED_STROKE : PE_STROKE)
        .attr('stroke-width', isSelected ? 2 : 1.5);

      label.attr('fill', isSelected ? PE_LABEL_SELECTED_FILL : PE_LABEL_FILL);
    });
  }, [selection]);

  return (
    <Box
      sx={{
        width: '100%',
        height: '100%',
        p: 3,
        bgcolor: 'rgba(15,23,42,0.55)',
        borderRadius: 1,
        boxShadow: 'inset 0 0 0 1px rgba(148,163,184,0.25)'
      }}
    >
      <svg ref={svgRef} />
    </Box>
  );
}

export default MainCanvas;
