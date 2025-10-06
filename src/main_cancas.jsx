import { useEffect, useMemo, useRef } from 'react';
import { Box } from '@mui/material';
import { select } from 'd3-selection';

const PE_SIZE = 42;
const PE_GAP = 16;
const CGRA_PADDING = 32;
const CGRA_GAP = 160;
const MARGIN = 48;

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
    const originX =
      MARGIN +
      layout.x * (layout.width + CGRA_GAP);
    const originY =
      MARGIN +
      layout.y * (layout.height + CGRA_GAP);

    return {
      ...layout,
      originX,
      originY,
      centerX: originX + layout.width / 2,
      centerY: originY + layout.height / 2
    };
  });

  const totalWidth =
    Math.max(...enhancedLayouts.map((layout) => layout.originX + layout.width)) + MARGIN;
  const totalHeight =
    Math.max(...enhancedLayouts.map((layout) => layout.originY + layout.height)) + MARGIN;

  return {
    layouts: enhancedLayouts,
    width: totalWidth,
    height: totalHeight
  };
}

function MainCanvas({ architecture }) {
  const svgRef = useRef(null);

  const layout = useMemo(() => buildLayout(architecture), [architecture]);

  useEffect(() => {
    if (!svgRef.current) return;

    const svg = select(svgRef.current);
    svg.selectAll('*').remove();

    svg
      .attr('viewBox', `0 0 ${layout.width} ${layout.height}`)
      .attr('width', '100%')
      .attr('height', '100%');

    const cgraLinkLayer = svg
      .append('g')
      .attr('class', 'cgra-links')
      .attr('stroke', '#7dd3fc')
      .attr('stroke-width', 3)
      .attr('stroke-opacity', 0.45)
      .attr('fill', 'none');

    const cgraNodeLayer = svg.append('g').attr('class', 'cgra-nodes');

    layout.layouts.forEach((cgraLayout) => {
      const group = cgraNodeLayer
        .append('g')
        .attr('transform', `translate(${cgraLayout.originX}, ${cgraLayout.originY})`);

      const peLinkLayer = group
        .append('g')
        .attr('class', 'pe-links')
        .attr('stroke', '#60a5fa')
        .attr('stroke-width', 2)
        .attr('stroke-opacity', 0.4)
        .attr('fill', 'none');

      group
        .append('rect')
        .attr('width', cgraLayout.width)
        .attr('height', cgraLayout.height)
        .attr('rx', 18)
        .attr('ry', 18)
        .attr('fill', 'rgba(30, 64, 175, 0.18)')
        .attr('stroke', 'rgba(96, 165, 250, 0.6)')
        .attr('stroke-width', 2.5);

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
        .attr('transform', (d) => `translate(${d.px}, ${d.py})`);

      nodeGroups
        .append('rect')
        .attr('width', PE_SIZE)
        .attr('height', PE_SIZE)
        .attr('rx', 8)
        .attr('ry', 8)
        .attr('fill', 'rgba(59, 130, 246, 0.6)')
        .attr('stroke', '#1d4ed8')
        .attr('stroke-width', 1.5);

      nodeGroups
        .append('text')
        .attr('x', PE_SIZE / 2)
        .attr('y', PE_SIZE / 2 + 4)
        .attr('fill', '#e2e8f0')
        .attr('font-family', '"Fira Code", monospace')
        .attr('font-size', 12)
        .attr('text-anchor', 'middle')
        .text((d) => d.id);
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
        cgraLinks.push({
          source: cgra,
          target: rightNeighbor
        });
      }
      if (downNeighbor) {
        cgraLinks.push({
          source: cgra,
          target: downNeighbor
        });
      }
    });

    cgraLinkLayer
      .selectAll('line')
      .data(cgraLinks)
      .enter()
      .append('line')
      .attr('x1', (d) => d.source.centerX)
      .attr('y1', (d) => d.source.centerY)
      .attr('x2', (d) => d.target.centerX)
      .attr('y2', (d) => d.target.centerY)
      .attr('stroke-linecap', 'round');
  }, [layout]);

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
