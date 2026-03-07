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
const NODE_PADDING_X = 50;
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
  currentSlide = null,
  onNodeClick = null,
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

  // Calculate layout positions for nodes using topological (Kahn's BFS) depth
  const layoutData = useMemo(() => {
    if (nodes.length === 0) return { nodes: [], edges: [], width: 0, height: 0, slides: [], depths: [] };

    // --- Topological depth via Kahn's BFS ---
    const nodeMap = new Map(nodes.map((n) => [n.id, n]));

    const adj = new Map(nodes.map((n) => [n.id, []]));
    const inDegree = new Map(nodes.map((n) => [n.id, 0]));
    edges.forEach((edge) => {
      if (!adj.has(edge.source) || !nodeMap.has(edge.target)) return;
      adj.get(edge.source).push(edge.target);
      inDegree.set(edge.target, (inDegree.get(edge.target) || 0) + 1);
    });

    const depth = new Map(nodes.map((n) => [n.id, 0]));
    const queue = nodes.filter((n) => inDegree.get(n.id) === 0).map((n) => n.id);
    const visited = new Set();
    let qi = 0;
    while (qi < queue.length) {
      const nId = queue[qi++];
      visited.add(nId);
      for (const mId of (adj.get(nId) || [])) {
        const nd = (depth.get(nId) || 0) + 1;
        if (nd > (depth.get(mId) || 0)) depth.set(mId, nd);
        inDegree.set(mId, (inDegree.get(mId) || 0) - 1);
        if (inDegree.get(mId) === 0) queue.push(mId);
      }
    }
    // Cycle fallback: unvisited nodes go to last layer
    const maxDepth = Math.max(0, ...[...depth.values()]);
    nodes.forEach((n) => {
      if (!visited.has(n.id)) depth.set(n.id, maxDepth + 1);
    });

    // Group by depth
    const layerMap = new Map();
    nodes.forEach((n) => {
      const d = depth.get(n.id);
      if (!layerMap.has(d)) layerMap.set(d, []);
      layerMap.get(d).push(n);
    });
    const sortedDepths = [...layerMap.keys()].sort((a, b) => a - b);

    const maxNodesInLayer = Math.max(...[...layerMap.values()].map((l) => l.length));
    const graphWidth = MARGIN.left + maxNodesInLayer * (NODE_WIDTH + NODE_PADDING_X) + MARGIN.right;
    const graphHeight = MARGIN.top + sortedDepths.length * (NODE_HEIGHT + NODE_PADDING_Y) + MARGIN.bottom;

    // Assign x, y positions – vertical layout: depth determines row (y), index determines column (x)
    const positionedNodes = [];
    sortedDepths.forEach((d, depthIndex) => {
      const layerNodes = layerMap.get(d);
      // Sort within layer by PE location for consistent, readable ordering
      layerNodes.sort((a, b) => {
        if (a.pe.row !== b.pe.row) return a.pe.row - b.pe.row;
        return a.pe.col - b.pe.col;
      });
      const totalLayerWidth = layerNodes.length * (NODE_WIDTH + NODE_PADDING_X);
      const startX = MARGIN.left + (maxNodesInLayer * (NODE_WIDTH + NODE_PADDING_X) - totalLayerWidth) / 2;
      layerNodes.forEach((node, ni) => {
        positionedNodes.push({
          ...node,
          x: startX + ni * (NODE_WIDTH + NODE_PADDING_X),
          y: MARGIN.top + depthIndex * (NODE_HEIGHT + NODE_PADDING_Y),
          depth: d
        });
      });
    });

    // Create positioned edges
    const positionedNodeMap = new Map(positionedNodes.map((n) => [n.id, n]));
    const positionedEdges = edges
      .map((edge) => {
        const source = positionedNodeMap.get(edge.source);
        const target = positionedNodeMap.get(edge.target);
        if (!source || !target) return null;
        return { ...edge, sourceNode: source, targetNode: target };
      })
      .filter(Boolean);

    const slides = [...new Set(positionedNodes.map((n) => n.indexPerII))].sort((a, b) => a - b);

    return {
      nodes: positionedNodes,
      edges: positionedEdges,
      width: graphWidth,
      height: graphHeight,
      slides,
      depths: sortedDepths
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

    // Define arrow markers for each edge type (must be before edges)
    const defs = svg.append('defs');

    // Blue arrow for register edges
    defs
      .append('marker')
      .attr('id', 'arrow-blue')
      .attr('viewBox', '0 -5 10 10')
      .attr('refX', 0)
      .attr('refY', 0)
      .attr('markerWidth', 8)
      .attr('markerHeight', 8)
      .attr('orient', 'auto')
      .append('path')
      .attr('d', 'M0,-5L10,0L0,5')
      .attr('fill', FLOW_COLORS.BLUE);

    // Red arrow for directional edges
    defs
      .append('marker')
      .attr('id', 'arrow-red')
      .attr('viewBox', '0 -5 10 10')
      .attr('refX', 0)
      .attr('refY', 0)
      .attr('markerWidth', 8)
      .attr('markerHeight', 8)
      .attr('orient', 'auto')
      .append('path')
      .attr('d', 'M0,-5L10,0L0,5')
      .attr('fill', FLOW_COLORS.RED);

    // Column highlight layer (behind everything else)
    g.append('g').attr('class', 'column-highlights');

    // Draw depth-level markers to the left of each row
    const slideLabels = g.append('g').attr('class', 'slide-labels');
    layoutData.depths?.forEach((d, i) => {
      const y = MARGIN.top + i * (NODE_HEIGHT + NODE_PADDING_Y) + NODE_HEIGHT / 2;
      slideLabels
        .append('text')
        .attr('x', MARGIN.left - 15)
        .attr('y', y)
        .attr('text-anchor', 'end')
        .attr('dominant-baseline', 'middle')
        .attr('font-size', 10)
        .attr('font-family', '"Fira Code", monospace')
        .attr('fill', '#94a3b8')
        .text(`L${d}`);
    });

    // Draw edges first (behind nodes)
    const edgesGroup = g.append('g').attr('class', 'edges');

    const ARROW_SIZE = 8; // Must match markerWidth

    layoutData.edges.forEach((edge) => {
      const sourceX = edge.sourceNode.x + NODE_WIDTH / 2;
      const sourceY = edge.sourceNode.y + NODE_HEIGHT;
      // Line ends at back of arrowhead, arrow tip extends to target node edge
      const targetX = edge.targetNode.x + NODE_WIDTH / 2;
      const targetY = edge.targetNode.y - ARROW_SIZE;

      // Determine if edge goes forward or backward in topological order
      const isForward = (edge.targetNode.depth ?? 0) >= (edge.sourceNode.depth ?? 0);

      // Create curved path (vertical flow)
      const midY = (sourceY + targetY) / 2;
      let path;

      if (isForward) {
        // Forward edge: gentle vertical curve
        path = `M ${sourceX} ${sourceY} C ${sourceX} ${midY}, ${targetX} ${midY}, ${targetX} ${targetY}`;
      } else {
        // Backward edge: arc to the right
        const arcWidth = Math.min(50, Math.abs(targetY - sourceY) * 0.3);
        path = `M ${sourceX} ${sourceY} C ${sourceX + arcWidth} ${sourceY + 20}, ${targetX + arcWidth} ${targetY - 20}, ${targetX} ${targetY}`;
      }

      const isRegister = edge.type === 'register';
      const strokeColor = isRegister ? FLOW_COLORS.BLUE : FLOW_COLORS.RED;
      const arrowId = isRegister ? 'arrow-blue' : 'arrow-red';

      edgesGroup
        .append('path')
        .attr('d', path)
        .attr('fill', 'none')
        .attr('stroke', strokeColor)
        .attr('stroke-width', 2)
        .attr('stroke-dasharray', isRegister ? 'none' : '4,2')
        .attr('opacity', 0.85)
        .attr('marker-end', `url(#${arrowId})`);
    });

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

      const tooltipContent = `${node.opcode}\nII=${node.indexPerII} PE(${node.pe.col},${node.pe.row})\nsrc: ${node.srcOperands.join(', ') || 'none'}\ndst: ${node.dstOperands.join(', ') || 'none'}`;

      tooltip
        .style('opacity', 1)
        .text(tooltipContent)
        .style('left', `${event.clientX + 15}px`)
        .style('top', `${event.clientY + 15}px`);
    });

    nodesGroup.selectAll('.node').on('mouseleave', () => {
      tooltip.style('opacity', 0);
    });

    // Add click handler to nodes
    nodesGroup.selectAll('.node').on('click', function () {
      const nodeId = d3.select(this).attr('data-id');
      const node = layoutData.nodes.find((n) => n.id === nodeId);
      if (node && onNodeClick) {
        onNodeClick({
          indexPerII: node.indexPerII,
          pe: { col: node.pe.col, row: node.pe.row },
          opcode: node.opcode,
          nodeId: node.id
        });
      }
    });

    return () => {
      tooltip.remove();
    };
  }, [layoutData, width, height, onNodeClick]);

  // Apply highlighting when highlightedNodeId or currentSlide changes
  useEffect(() => {
    if (!svgRef.current) return;

    const svg = d3.select(svgRef.current);
    const nodesGroup = svg.select('g.nodes');
    const edgesGroup = svg.select('g.edges');
    const columnHighlights = svg.select('g.column-highlights');

    if (nodesGroup.empty()) return;

    const hasHoverHighlight = highlightedNodeId !== null;
    const hasSlideHighlight = currentSlide !== null;

    // Get nodes at current slide (index_per_ii) for slide highlighting
    const nodesAtCurrentSlide = hasSlideHighlight
      ? new Set(layoutData.nodes.filter((n) => n.indexPerII === currentSlide).map((n) => n.id))
      : new Set();

    // With topological layout, nodes at the same indexPerII are spread across different
    // depth columns, so a single-column background highlight no longer applies.
    columnHighlights.selectAll('rect').remove();

    // Apply node highlighting - keep all nodes visible, just add glow effects
    nodesGroup.selectAll('.node').each(function () {
      const nodeG = d3.select(this);
      const nodeId = nodeG.attr('data-id');

      // Determine if this node should be highlighted
      const isHoverHighlighted = hasHoverHighlight && nodeId === highlightedNodeId;
      const isSlideHighlighted = hasSlideHighlight && nodesAtCurrentSlide.has(nodeId);

      // Always keep nodes at full opacity
      nodeG.style('opacity', 1);

      if (isHoverHighlighted) {
        // Hover takes priority - golden glow for hovered node
        nodeG
          .select('rect')
          .attr('stroke', '#f59e0b')
          .attr('stroke-width', 3)
          .style('filter', 'drop-shadow(0 0 8px rgba(245, 158, 11, 0.8))');
      } else if (isSlideHighlighted) {
        // Slide highlighting - cyan glow for nodes at current slide
        nodeG
          .select('rect')
          .attr('stroke', '#22d3ee')
          .attr('stroke-width', 2)
          .style('filter', 'drop-shadow(0 0 6px rgba(34, 211, 238, 0.7))');
      } else {
        // Reset to default
        nodeG.select('rect').attr('stroke', '#1e293b').attr('stroke-width', 1).style('filter', null);
      }
    });

    // Keep all edges visible
    edgesGroup.selectAll('path').style('opacity', 0.75);
  }, [highlightedNodeId, currentSlide, layoutData.nodes, layoutData.edges, layoutData.slides, layoutData.height]);

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
        position: 'relative',
        height: '100%',
        display: 'flex',
        flexDirection: 'column'
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
        height={maximized ? 'calc(100vh - 64px)' : '100%'}
        style={{ display: 'block', background: 'rgba(15, 23, 42, 0.5)', flex: 1, minHeight: 0 }}
      />
    </div>
  );
}

DependencyGraph.propTypes = {
  instructionData: PropTypes.object,
  highlightedNodeId: PropTypes.string,
  currentSlide: PropTypes.number,
  onNodeClick: PropTypes.func,
  width: PropTypes.number,
  height: PropTypes.number
};
