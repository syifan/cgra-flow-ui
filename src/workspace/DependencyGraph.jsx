/**
 * DependencyGraph - Visualize compute dependencies from instruction data
 * Shows data dependencies between operations with 1-to-1 PE linking.
 * Uses a timeline-based layout where X-axis = timestep.
 */

import { useEffect, useMemo, useRef, useState } from 'react';
import PropTypes from 'prop-types';
import * as d3 from 'd3';
import { buildDependencyGraph } from './dependencyGraphUtils';
import { getOpcodeColor, FLOW_COLORS } from './mapping-canvas/constants';

// Layout constants
const NODE_WIDTH = 70;
const NODE_HEIGHT = 36;
const NODE_PADDING_X = 30;
const NODE_PADDING_Y = 20;
const MARGIN = { top: 40, right: 40, bottom: 40, left: 60 };

/**
 * Truncate long opcodes for display
 */
function truncateOpcode(opcode) {
  if (!opcode) return '';
  const shortened = opcode
    .replace('GRANT_', 'G_')
    .replace('DATA_', 'D_')
    .replace('CTRL_', 'C_')
    .replace('ICMP_', 'I_');
  return shortened.length > 7 ? shortened.slice(0, 6) + '\u2026' : shortened;
}

export default function DependencyGraph({
  instructionData,
  highlightedNodeId = null,
  width = 800,
  height = 500
}) {
  const svgRef = useRef(null);
  const graphId = 'dependency-graph';
  const [maximized, setMaximized] = useState(() => {
    const params = new URLSearchParams(window.location.search);
    return params.get('depGraphMax') === graphId;
  });

  // Build the dependency graph from instruction data
  const { nodes, edges } = useMemo(() => {
    if (!instructionData?.array_config) {
      return { nodes: [], edges: [] };
    }
    return buildDependencyGraph(instructionData);
  }, [instructionData]);

  // Calculate layout positions for nodes
  const layoutData = useMemo(() => {
    if (nodes.length === 0) return { nodes: [], edges: [], width: 0, height: 0 };

    // Group nodes by timestep
    const nodesByTimestep = new Map();
    nodes.forEach((node) => {
      if (!nodesByTimestep.has(node.timestep)) {
        nodesByTimestep.set(node.timestep, []);
      }
      nodesByTimestep.get(node.timestep).push(node);
    });

    // Sort timesteps
    const timesteps = Array.from(nodesByTimestep.keys()).sort((a, b) => a - b);

    // Calculate positions
    let maxNodesInColumn = 0;
    timesteps.forEach((ts) => {
      const count = nodesByTimestep.get(ts).length;
      if (count > maxNodesInColumn) maxNodesInColumn = count;
    });

    const graphWidth =
      MARGIN.left + timesteps.length * (NODE_WIDTH + NODE_PADDING_X) + MARGIN.right;
    const graphHeight =
      MARGIN.top + maxNodesInColumn * (NODE_HEIGHT + NODE_PADDING_Y) + MARGIN.bottom;

    // Assign positions to nodes
    const positionedNodes = [];
    timesteps.forEach((ts, tsIndex) => {
      const nodesAtTs = nodesByTimestep.get(ts);
      // Sort by PE location for consistent ordering
      nodesAtTs.sort((a, b) => {
        if (a.pe.row !== b.pe.row) return a.pe.row - b.pe.row;
        return a.pe.col - b.pe.col;
      });

      nodesAtTs.forEach((node, nodeIndex) => {
        positionedNodes.push({
          ...node,
          x: MARGIN.left + tsIndex * (NODE_WIDTH + NODE_PADDING_X),
          y: MARGIN.top + nodeIndex * (NODE_HEIGHT + NODE_PADDING_Y)
        });
      });
    });

    // Create positioned edges
    const nodeMap = new Map(positionedNodes.map((n) => [n.id, n]));
    const positionedEdges = edges
      .map((edge) => {
        const source = nodeMap.get(edge.source);
        const target = nodeMap.get(edge.target);
        if (!source || !target) return null;
        return {
          ...edge,
          sourceNode: source,
          targetNode: target
        };
      })
      .filter(Boolean);

    return {
      nodes: positionedNodes,
      edges: positionedEdges,
      width: graphWidth,
      height: graphHeight,
      timesteps
    };
  }, [nodes, edges]);

  // Render the graph with D3
  useEffect(() => {
    if (!svgRef.current || layoutData.nodes.length === 0) return;

    const svg = d3.select(svgRef.current);
    svg.selectAll('*').remove();

    const graphWidth = Math.max(layoutData.width, width);
    const graphHeight = Math.max(layoutData.height, height);

    svg.attr('viewBox', `0 0 ${graphWidth} ${graphHeight}`);

    const g = svg.append('g');

    // Setup zoom
    const zoom = d3
      .zoom()
      .scaleExtent([0.3, 3])
      .on('zoom', (event) => {
        g.attr('transform', event.transform);
      });
    svg.call(zoom);

    // Draw timestep markers
    const timestepLabels = g.append('g').attr('class', 'timestep-labels');
    layoutData.timesteps?.forEach((ts, i) => {
      const x = MARGIN.left + i * (NODE_WIDTH + NODE_PADDING_X) + NODE_WIDTH / 2;
      timestepLabels
        .append('text')
        .attr('x', x)
        .attr('y', MARGIN.top - 15)
        .attr('text-anchor', 'middle')
        .attr('font-size', 10)
        .attr('font-family', '"Fira Code", monospace')
        .attr('fill', '#64748b')
        .text(`t=${ts}`);
    });

    // Draw edges first (behind nodes)
    const edgesGroup = g.append('g').attr('class', 'edges');

    layoutData.edges.forEach((edge) => {
      const sourceX = edge.sourceNode.x + NODE_WIDTH;
      const sourceY = edge.sourceNode.y + NODE_HEIGHT / 2;
      const targetX = edge.targetNode.x;
      const targetY = edge.targetNode.y + NODE_HEIGHT / 2;

      // Determine if edge goes forward or backward in time
      const isForward = edge.targetNode.timestep >= edge.sourceNode.timestep;

      // Create curved path
      const midX = (sourceX + targetX) / 2;
      let path;

      if (isForward) {
        // Forward edge: gentle curve
        path = `M ${sourceX} ${sourceY} C ${midX} ${sourceY}, ${midX} ${targetY}, ${targetX} ${targetY}`;
      } else {
        // Backward edge: arc above
        const arcHeight = Math.min(50, Math.abs(targetX - sourceX) * 0.3);
        path = `M ${sourceX} ${sourceY} C ${sourceX + 20} ${sourceY - arcHeight}, ${targetX - 20} ${targetY - arcHeight}, ${targetX} ${targetY}`;
      }

      const strokeColor = edge.type === 'register' ? FLOW_COLORS.BLUE : FLOW_COLORS.RED;

      edgesGroup
        .append('path')
        .attr('d', path)
        .attr('fill', 'none')
        .attr('stroke', strokeColor)
        .attr('stroke-width', 1.5)
        .attr('stroke-dasharray', edge.type === 'register' ? 'none' : '4,2')
        .attr('opacity', 0.6)
        .attr('marker-end', 'url(#arrow)');
    });

    // Define arrow marker
    svg
      .append('defs')
      .append('marker')
      .attr('id', 'arrow')
      .attr('viewBox', '0 -5 10 10')
      .attr('refX', 8)
      .attr('refY', 0)
      .attr('markerWidth', 6)
      .attr('markerHeight', 6)
      .attr('orient', 'auto')
      .append('path')
      .attr('d', 'M0,-5L10,0L0,5')
      .attr('fill', '#94a3b8');

    // Draw nodes
    const nodesGroup = g.append('g').attr('class', 'nodes');

    layoutData.nodes.forEach((node) => {
      const nodeG = nodesGroup
        .append('g')
        .attr('class', 'node')
        .attr('data-id', node.id)
        .attr('transform', `translate(${node.x}, ${node.y})`)
        .style('cursor', 'pointer');

      // Node background
      nodeG
        .append('rect')
        .attr('width', NODE_WIDTH)
        .attr('height', NODE_HEIGHT)
        .attr('rx', 4)
        .attr('fill', getOpcodeColor(node.opcode))
        .attr('stroke', '#1e293b')
        .attr('stroke-width', 1);

      // Opcode label
      nodeG
        .append('text')
        .attr('x', NODE_WIDTH / 2)
        .attr('y', NODE_HEIGHT / 2 - 4)
        .attr('text-anchor', 'middle')
        .attr('dominant-baseline', 'middle')
        .attr('font-size', 10)
        .attr('font-family', '"Fira Code", monospace')
        .attr('font-weight', 'bold')
        .attr('fill', '#ffffff')
        .text(truncateOpcode(node.opcode));

      // PE location label
      nodeG
        .append('text')
        .attr('x', NODE_WIDTH / 2)
        .attr('y', NODE_HEIGHT / 2 + 10)
        .attr('text-anchor', 'middle')
        .attr('dominant-baseline', 'middle')
        .attr('font-size', 8)
        .attr('font-family', '"Fira Code", monospace')
        .attr('fill', 'rgba(255,255,255,0.7)')
        .text(`(${node.pe.col},${node.pe.row})`);
    });

    // Tooltip
    const tooltip = d3
      .select('body')
      .append('div')
      .attr('class', 'dependency-graph-tooltip')
      .style('position', 'fixed')
      .style('pointer-events', 'none')
      .style('background', 'rgba(17,24,39,0.95)')
      .style('color', '#f9fafb')
      .style('padding', '8px 12px')
      .style('border-radius', '6px')
      .style('font-size', '11px')
      .style('font-family', '"Fira Code", monospace')
      .style('box-shadow', '0 4px 12px rgba(0,0,0,0.4)')
      .style('z-index', '10005')
      .style('max-width', '300px')
      .style('opacity', 0);

    nodesGroup.selectAll('.node').on('mousemove', function (event) {
      const nodeId = d3.select(this).attr('data-id');
      const node = layoutData.nodes.find((n) => n.id === nodeId);
      if (!node) return;

      const tooltipContent = `${node.opcode}\nt=${node.timestep} PE(${node.pe.col},${node.pe.row})\nsrc: ${node.srcOperands.join(', ') || 'none'}\ndst: ${node.dstOperands.join(', ') || 'none'}`;

      tooltip
        .style('opacity', 1)
        .text(tooltipContent)
        .style('left', `${event.clientX + 15}px`)
        .style('top', `${event.clientY + 15}px`);
    });

    nodesGroup.selectAll('.node').on('mouseleave', () => {
      tooltip.style('opacity', 0);
    });

    return () => {
      tooltip.remove();
    };
  }, [layoutData, width, height]);

  // Apply highlighting when highlightedNodeId changes
  useEffect(() => {
    if (!svgRef.current) return;

    const svg = d3.select(svgRef.current);
    const nodesGroup = svg.select('g.nodes');
    const edgesGroup = svg.select('g.edges');

    if (nodesGroup.empty()) return;

    const hasHighlight = highlightedNodeId !== null;

    // Reset all nodes and edges first
    nodesGroup.selectAll('.node').each(function () {
      const nodeG = d3.select(this);
      const nodeId = nodeG.attr('data-id');
      const isHighlighted = hasHighlight && nodeId === highlightedNodeId;

      if (hasHighlight) {
        if (isHighlighted) {
          nodeG.style('opacity', 1);
          nodeG
            .select('rect')
            .attr('stroke', '#f59e0b')
            .attr('stroke-width', 3)
            .style('filter', 'drop-shadow(0 0 8px rgba(245, 158, 11, 0.8))');
        } else {
          nodeG.style('opacity', 0.3);
          nodeG.select('rect').attr('stroke', '#1e293b').attr('stroke-width', 1).style('filter', null);
        }
      } else {
        nodeG.style('opacity', 1);
        nodeG.select('rect').attr('stroke', '#1e293b').attr('stroke-width', 1).style('filter', null);
      }
    });

    // Highlight connected edges
    if (hasHighlight) {
      edgesGroup.selectAll('path').each(function () {
        const edge = d3.select(this);
        // Edges are not easily queryable for source/target from the path itself
        // For now, dim all edges when highlighting
        edge.style('opacity', 0.2);
      });

      // Find and highlight edges connected to the highlighted node
      layoutData.edges.forEach((edge, i) => {
        if (edge.sourceNode.id === highlightedNodeId || edge.targetNode.id === highlightedNodeId) {
          edgesGroup.selectAll('path').filter((_, idx) => idx === i).style('opacity', 1);
        }
      });
    } else {
      edgesGroup.selectAll('path').style('opacity', 0.6);
    }
  }, [highlightedNodeId, layoutData.edges]);

  // Update URL for maximize state
  useEffect(() => {
    const params = new URLSearchParams(window.location.search);
    if (maximized) {
      params.set('depGraphMax', graphId);
    } else {
      params.delete('depGraphMax');
    }
    const newUrl = `${window.location.pathname}${params.toString() ? `?${params.toString()}` : ''}${window.location.hash}`;
    window.history.replaceState({}, '', newUrl);
  }, [maximized]);

  const toggleMaximize = () => setMaximized((prev) => !prev);

  if (!instructionData?.array_config || nodes.length === 0) {
    return (
      <div
        style={{
          display: 'flex',
          alignItems: 'center',
          justifyContent: 'center',
          height: '100%',
          color: '#94a3b8',
          fontFamily: '"Fira Code", monospace',
          fontSize: 12
        }}
      >
        No instruction data available
      </div>
    );
  }

  const containerStyle = maximized
    ? {
        position: 'fixed',
        inset: '16px',
        zIndex: 10000,
        background: '#0b1624',
        padding: '8px',
        borderRadius: '10px',
        boxShadow: '0 10px 40px rgba(0,0,0,0.4)',
        border: '2px solid #38bdf8'
      }
    : {
        position: 'relative'
      };

  return (
    <div style={containerStyle}>
      <button
        type="button"
        onClick={toggleMaximize}
        aria-label={maximized ? 'Restore graph view' : 'Maximize graph view'}
        style={{
          position: 'absolute',
          top: 8,
          right: 8,
          zIndex: 10001,
          padding: '6px',
          background: '#1f2937',
          color: '#e5e7eb',
          border: '1px solid #334155',
          borderRadius: 6,
          cursor: 'pointer',
          display: 'flex',
          alignItems: 'center',
          justifyContent: 'center',
          width: 36,
          height: 32
        }}
      >
        <svg
          width="16"
          height="16"
          viewBox="0 0 24 24"
          fill="none"
          stroke="currentColor"
          strokeWidth="2"
          strokeLinecap="round"
          strokeLinejoin="round"
        >
          {maximized ? (
            <>
              <polyline points="9 14 4 14 4 9" />
              <polyline points="15 10 20 10 20 15" />
              <line x1="20" y1="4" x2="14" y2="10" />
              <line x1="4" y1="20" x2="10" y2="14" />
            </>
          ) : (
            <>
              <rect x="5" y="5" width="14" height="14" rx="2" />
              <polyline points="9 5 9 9 5 9" />
              <polyline points="15 19 15 15 19 15" />
            </>
          )}
        </svg>
      </button>

      {/* Legend */}
      <div
        style={{
          position: 'absolute',
          top: 8,
          left: 8,
          zIndex: 10001,
          display: 'flex',
          gap: 12,
          fontSize: 10,
          fontFamily: '"Fira Code", monospace',
          color: '#94a3b8'
        }}
      >
        <span style={{ display: 'flex', alignItems: 'center', gap: 4 }}>
          <span
            style={{ width: 20, height: 2, background: FLOW_COLORS.BLUE, display: 'inline-block' }}
          />
          Register
        </span>
        <span style={{ display: 'flex', alignItems: 'center', gap: 4 }}>
          <span
            style={{
              width: 20,
              height: 2,
              background: FLOW_COLORS.RED,
              display: 'inline-block',
              borderTop: `2px dashed ${FLOW_COLORS.RED}`
            }}
          />
          Directional
        </span>
      </div>

      <svg
        ref={svgRef}
        width="100%"
        height={maximized ? 'calc(100vh - 64px)' : height}
        style={{ display: 'block', background: '#ffffff' }}
      />
    </div>
  );
}

DependencyGraph.propTypes = {
  instructionData: PropTypes.object,
  highlightedNodeId: PropTypes.string,
  width: PropTypes.number,
  height: PropTypes.number
};
