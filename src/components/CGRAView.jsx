import { useEffect, useRef } from 'react';
import PropTypes from 'prop-types';
import * as d3 from 'd3';
import { Box, Typography } from '@mui/material';
import { alpha, lighten, useTheme } from '@mui/material/styles';

const VIEWBOX_SIZE = 480;
const PADDING = 32;
const NODE_WIDTH = 36;
const NODE_HEIGHT = 24;

function buildMesh(rows, cols) {
  const nodes = [];
  const links = [];

  for (let row = 0; row < rows; row += 1) {
    for (let col = 0; col < cols; col += 1) {
      const id = `${row}-${col}`;
      nodes.push({ id, row, col });
    }
  }

  const nodeIndex = (row, col) => row * cols + col;

  for (let row = 0; row < rows; row += 1) {
    for (let col = 0; col < cols; col += 1) {
      if (col < cols - 1) {
        links.push({ source: nodeIndex(row, col), target: nodeIndex(row, col + 1) });
      }
      if (row < rows - 1) {
        links.push({ source: nodeIndex(row, col), target: nodeIndex(row + 1, col) });
      }
    }
  }

  return { nodes, links };
}

const CGRAView = ({ rows, cols }) => {
  const theme = useTheme();
  const primaryMain = theme.palette.primary.main;
  const secondaryMain = theme.palette.secondary.main;
  const primaryDark = theme.palette.primary.dark;
  const secondaryDark = theme.palette.secondary.dark;
  const linkBase = lighten(secondaryMain, 0.1);
  const backgroundPaper = theme.palette.background.paper;
  const contrastText = theme.palette.getContrastText(primaryMain);
  const white = theme.palette.common.white;
  const containerRef = useRef(null);

  useEffect(() => {
    const container = d3.select(containerRef.current);
    container.selectAll('*').remove();

    const width = VIEWBOX_SIZE;
    const height = VIEWBOX_SIZE;

    const svg = container
      .append('svg')
      .attr('viewBox', `0 0 ${width} ${height}`)
      .attr('width', '100%')
      .attr('height', '100%');

    const { nodes, links } = buildMesh(rows, cols);

    const xScale = d3
      .scaleLinear()
      .domain([0, Math.max(cols - 1, 1)])
      .range([PADDING, width - PADDING]);

    const yScale = d3
      .scaleLinear()
      .domain([0, Math.max(rows - 1, 1)])
      .range([PADDING, height - PADDING]);

    const defs = svg.append('defs');

    defs
      .append('linearGradient')
      .attr('id', 'tile-fill')
      .attr('x1', '0%')
      .attr('y1', '0%')
      .attr('x2', '100%')
      .attr('y2', '100%')
      .selectAll('stop')
      .data([
        { offset: '0%', color: alpha(primaryMain, 0.9) },
        { offset: '100%', color: alpha(secondaryMain, 0.8) }
      ])
      .join('stop')
      .attr('offset', (d) => d.offset)
      .attr('stop-color', (d) => d.color);

    const shadow = defs
      .append('filter')
      .attr('id', 'node-shadow')
      .attr('x', '-50%')
      .attr('y', '-50%')
      .attr('width', '200%')
      .attr('height', '200%');

    shadow.append('feDropShadow').attr('dx', 0).attr('dy', 2).attr('stdDeviation', 3).attr('flood-opacity', 0.25);

    svg
      .append('g')
      .selectAll('line')
      .data(links)
      .join('line')
      .attr('x1', (d) => xScale(nodes[d.source].col))
      .attr('y1', (d) => yScale(nodes[d.source].row))
      .attr('x2', (d) => xScale(nodes[d.target].col))
      .attr('y2', (d) => yScale(nodes[d.target].row))
      .attr('stroke', alpha(linkBase, 0.9))
      .attr('stroke-width', 3)
      .attr('stroke-linecap', 'round')
      .attr('opacity', 0.85);

    const nodeGroup = svg
      .append('g')
      .selectAll('g')
      .data(nodes)
      .join('g')
      .attr('transform', (d) => `translate(${xScale(d.col)}, ${yScale(d.row)})`);

    nodeGroup
      .append('rect')
      .attr('x', -NODE_WIDTH / 2)
      .attr('y', -NODE_HEIGHT / 2)
      .attr('width', NODE_WIDTH)
      .attr('height', NODE_HEIGHT)
      .attr('rx', 6)
      .attr('ry', 6)
      .attr('fill', 'url(#tile-fill)')
      .attr('stroke', alpha(backgroundPaper, 0.8))
      .attr('stroke-width', 2)
      .attr('filter', 'url(#node-shadow)');

    nodeGroup
      .append('text')
      .text((d) => `${d.row + 1},${d.col + 1}`)
      .attr('text-anchor', 'middle')
      .attr('dominant-baseline', 'middle')
      .attr('fill', contrastText)
      .attr('font-size', 10)
      .attr('font-weight', 600);

    return () => {
      container.selectAll('*').remove();
    };
  }, [rows, cols, primaryMain, secondaryMain, backgroundPaper, contrastText]);

  return (
    <Box>
      <Typography variant="body2" color="text.secondary" sx={{ mb: 1 }}>
        Visualizes a {rows} × {cols} CGRA mesh with nearest-neighbor interconnect.
      </Typography>
      <Box
        ref={containerRef}
        sx={{
          width: '100%',
          aspectRatio: '1 / 1',
          borderRadius: 3,
          background: `linear-gradient(135deg, ${alpha(primaryDark, 0.12)}, ${alpha(secondaryDark, 0.12)})`,
          boxShadow: `inset 0 0 0 1px ${alpha(white, 0.1)}`,
          p: 1.5
        }}
      />
    </Box>
  );
};

CGRAView.propTypes = {
  rows: PropTypes.number.isRequired,
  cols: PropTypes.number.isRequired
};

export default CGRAView;
