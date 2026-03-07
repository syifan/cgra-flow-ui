import { useEffect, useRef, useState } from 'react';
import * as d3 from 'd3';

// Layout constants
const NODE_HEIGHT = 36;
const NODE_V_SPACING = 80;   // vertical distance between layer centers
const NODE_H_SPACING = 54;   // horizontal distance between node centers within a layer
const PADDING = 80;          // left/top/right/bottom padding

/**
 * D3 renderer for Graphviz JSON (dot -Tjson output).
 * Computes a topological (layered) layout from the graph's edge structure so
 * nodes are grouped into horizontal tiers by data-dependency depth.
 * Supports highlighting nodes that match patterns in highlightedPatterns.
 */
export default function DotGraph({ graph, width = 800, height = 600, highlightedPatterns = [] }) {
  const svgRef = useRef(null);
  const nodeInfoRef = useRef(new Map());
  const graphId = graph?.name || graph?.label || 'dot-graph';
  const [maximized, setMaximized] = useState(() => {
    const params = new URLSearchParams(window.location.search);
    return params.get('dotGraphMax') === graphId;
  });

  useEffect(() => {
    if (!graph || !svgRef.current) return;

    const objects = graph.objects || graph.nodes || [];
    const edges = graph.edges || [];

    // --- 1. Extract drawable nodes and build canonical ID map ---
    // Only include objects that were drawn (same filter as before, excludes bare subgraph wrappers)
    const allNodes = objects.filter((o) => o._draw_ || o._ldraw_);
    if (allNodes.length === 0) return;

    // Canonical ID: prefer name, fallback to string _gvid
    const nodeId = (o) => (o.name != null ? String(o.name) : String(o._gvid));

    // nodeMap: both name and _gvid string -> node object (for edge lookup)
    const nodeMap = new Map();
    allNodes.forEach((o) => {
      nodeMap.set(nodeId(o), o);
      if (o._gvid !== undefined) nodeMap.set(String(o._gvid), o);
    });

    // --- 2. Build adjacency list and in-degree map ---
    const adj = new Map();       // nodeId -> [nodeId, ...]
    const inDegree = new Map();  // nodeId -> number
    allNodes.forEach((o) => {
      adj.set(nodeId(o), []);
      inDegree.set(nodeId(o), 0);
    });

    edges.forEach((edge) => {
      // Graphviz JSON: tail/head are _gvid integers referencing objects array
      const tailNode = nodeMap.get(String(edge.tail));
      const headNode = nodeMap.get(String(edge.head));
      if (!tailNode || !headNode) return;
      const tId = nodeId(tailNode);
      const hId = nodeId(headNode);
      adj.get(tId).push(hId);
      inDegree.set(hId, inDegree.get(hId) + 1);
    });

    // --- 3. Kahn's BFS: assign longest-path depth to each node ---
    const depth = new Map();
    allNodes.forEach((o) => depth.set(nodeId(o), 0));

    const queue = [];
    allNodes.forEach((o) => {
      if (inDegree.get(nodeId(o)) === 0) queue.push(nodeId(o));
    });

    const visited = new Set();
    let qi = 0;
    while (qi < queue.length) {
      const nId = queue[qi++];
      visited.add(nId);
      for (const mId of adj.get(nId)) {
        const newDepth = depth.get(nId) + 1;
        if (newDepth > depth.get(mId)) depth.set(mId, newDepth);
        inDegree.set(mId, inDegree.get(mId) - 1);
        if (inDegree.get(mId) === 0) queue.push(mId);
      }
    }

    // --- 4. Cycle fallback: append unvisited nodes to the last layer ---
    const maxVisitedDepth = Math.max(0, ...[...depth.values()]);
    allNodes.forEach((o) => {
      if (!visited.has(nodeId(o))) depth.set(nodeId(o), maxVisitedDepth + 1);
    });

    // Group nodes into layers by depth
    const layers = new Map(); // depth -> [nodeId, ...]
    allNodes.forEach((o) => {
      const d = depth.get(nodeId(o));
      if (!layers.has(d)) layers.set(d, []);
      layers.get(d).push(nodeId(o));
    });

    // --- 5. Compute layout positions (vertical: layers top-to-bottom) ---
    const totalDepth = Math.max(0, ...[...depth.values()]);
    const maxNodesPerLayer = Math.max(...[...layers.values()].map((l) => l.length));

    // Compute max node width per layer for proper sizing
    const layerMaxWidth = new Map();
    layers.forEach((layerNodes, d) => {
      let maxW = 100;
      layerNodes.forEach((nId) => {
        const node = nodeMap.get(nId);
        const rawLabel = node?.label || nId;
        const label = rawLabel.replace(/\\n/g, '\n');
        const lines = label.split('\n');
        const longestLine = lines.reduce((a, b) => (a.length > b.length ? a : b), '');
        maxW = Math.max(maxW, longestLine.length * 8);
      });
      layerMaxWidth.set(d, maxW);
    });

    const nodeSpacingX = Math.max(...[...layerMaxWidth.values()]) + 30;
    const svgWidth = Math.max(maxNodesPerLayer * nodeSpacingX + PADDING * 2, 200);
    const svgHeight = (totalDepth + 1) * NODE_V_SPACING + PADDING * 2;

    // nodePos: nodeId -> { x, y, nodeWidth, label }
    const nodePos = new Map();
    layers.forEach((layerNodes, d) => {
      const y = d * NODE_V_SPACING + PADDING;
      const count = layerNodes.length;
      const totalLayerWidth = count * nodeSpacingX;
      const startX = (svgWidth - totalLayerWidth) / 2 + nodeSpacingX / 2;
      layerNodes.forEach((nId, i) => {
        const node = nodeMap.get(nId);
        const rawLabel = node?.label || nId;
        const label = rawLabel.replace(/\\n/g, '\n');
        const lines = label.split('\n');
        const longestLine = lines.reduce((a, b) => (a.length > b.length ? a : b), '');
        const nodeWidth = Math.max(100, longestLine.length * 8);
        const x = startX + i * nodeSpacingX;
        nodePos.set(nId, { x, y, nodeWidth, label });
      });
    });

    // --- Setup SVG ---
    const svg = d3.select(svgRef.current);
    svg.selectAll('*').remove();
    svg.attr('viewBox', `0 0 ${svgWidth} ${svgHeight}`);

    // Arrowhead marker
    const defs = svg.append('defs');
    defs.append('marker')
      .attr('id', 'arrowhead')
      .attr('viewBox', '0 -5 10 10')
      .attr('refX', 10)
      .attr('refY', 0)
      .attr('markerWidth', 6)
      .attr('markerHeight', 6)
      .attr('orient', 'auto')
      .append('path')
      .attr('d', 'M0,-5L10,0L0,5')
      .attr('fill', '#64748b');

    const g = svg.append('g');

    // Setup zoom
    const zoom = d3.zoom()
      .scaleExtent([0.2, 4])
      .on('zoom', (event) => {
        g.attr('transform', event.transform);
      });
    svg.call(zoom);

    // --- Render edges (behind nodes) ---
    const linkGen = d3.linkVertical()
      .x((d) => d.x)
      .y((d) => d.y);

    const edgesGroup = g.append('g').attr('class', 'edges');
    edges.forEach((edge) => {
      const tailNode = nodeMap.get(String(edge.tail));
      const headNode = nodeMap.get(String(edge.head));
      if (!tailNode || !headNode) return;
      const srcPos = nodePos.get(nodeId(tailNode));
      const tgtPos = nodePos.get(nodeId(headNode));
      if (!srcPos || !tgtPos) return;

      edgesGroup.append('path')
        .attr('d', linkGen({
          source: { x: srcPos.x, y: srcPos.y + NODE_HEIGHT / 2 },
          target: { x: tgtPos.x, y: tgtPos.y - NODE_HEIGHT / 2 },
        }))
        .attr('fill', 'none')
        .attr('stroke', '#475569')
        .attr('stroke-width', 1.5)
        .attr('marker-end', 'url(#arrowhead)');
    });

    // --- Render nodes ---
    const nodesGroup = g.append('g').attr('class', 'nodes');
    const nodeInfo = new Map();
    nodeInfoRef.current.clear();

    allNodes.forEach((node) => {
      const nId = nodeId(node);
      const pos = nodePos.get(nId);
      if (!pos) return;
      const { x, y, nodeWidth, label } = pos;
      const lines = label.split('\n');

      const nodeGroup = nodesGroup.append('g')
        .attr('class', 'node')
        .attr('data-label', label)
        .style('cursor', 'pointer');

      // Rectangle
      nodeGroup.append('rect')
        .attr('x', x - nodeWidth / 2)
        .attr('y', y - NODE_HEIGHT / 2)
        .attr('width', nodeWidth)
        .attr('height', NODE_HEIGHT)
        .attr('rx', 6)
        .attr('fill', '#1e293b')
        .attr('stroke', '#475569')
        .attr('stroke-width', 1);

      // Label text (multi-line via tspan)
      const textEl = nodeGroup.append('text')
        .attr('x', x)
        .attr('y', y)
        .attr('text-anchor', 'middle')
        .attr('dominant-baseline', 'middle')
        .attr('font-size', 11)
        .attr('font-family', 'monospace')
        .attr('fill', '#e2e8f0');

      if (lines.length === 1) {
        textEl.text(label);
      } else {
        const lineHeight = 13;
        const totalTextHeight = (lines.length - 1) * lineHeight;
        lines.forEach((line, i) => {
          textEl.append('tspan')
            .attr('x', x)
            .attr('dy', i === 0 ? -totalTextHeight / 2 : lineHeight)
            .text(line);
        });
      }

      // Store label for tooltip and highlight effects
      const nodeInfoData = { label };
      nodeInfo.set(nodeGroup.node(), nodeInfoData);
      nodeInfoRef.current.set(nodeGroup.node(), nodeInfoData);
    });

    // Tooltip - remove stale tooltips to handle hot reload / early returns
    d3.selectAll('.dot-graph-tooltip').remove();
    const tooltip = d3.select('body')
      .append('div')
      .attr('class', 'dot-graph-tooltip')
      .style('position', 'fixed')
      .style('pointer-events', 'none')
      .style('background', 'rgba(17,24,39,0.95)')
      .style('color', '#f9fafb')
      .style('padding', '8px 12px')
      .style('border-radius', '6px')
      .style('font-size', '12px')
      .style('font-family', 'monospace')
      .style('box-shadow', '0 4px 12px rgba(0,0,0,0.4)')
      .style('z-index', '10005')
      .style('max-width', '400px')
      .style('white-space', 'pre-wrap')
      .style('opacity', 0);

    nodesGroup.selectAll('.node')
      .on('mousemove', function(event) {
        const info = nodeInfo.get(this);
        if (!info) return;
        tooltip
          .style('opacity', 1)
          .text(info.label)
          .style('left', `${event.clientX + 15}px`)
          .style('top', `${event.clientY + 15}px`);
      })
      .on('mouseleave', () => {
        tooltip.style('opacity', 0);
      });

    // Cleanup tooltip on unmount
    return () => {
      tooltip.remove();
    };
  }, [graph, width, height]);

  // Apply highlighting effect when highlightedPatterns changes
  useEffect(() => {
    if (!svgRef.current) return;

    const svg = d3.select(svgRef.current);
    const nodesGroup = svg.select('g.nodes');

    if (nodesGroup.empty()) return;

    const hasHighlight = highlightedPatterns.length > 0;

    nodesGroup.selectAll('.node').each(function () {
      const nodeElement = d3.select(this);
      const nodeData = nodeInfoRef.current.get(this);
      const label = nodeData?.label || '';

      // Check if this node matches any highlighted pattern
      const isHighlighted = hasHighlight && highlightedPatterns.some(
        (pattern) => label.toLowerCase().includes(pattern.toLowerCase())
      );

      if (hasHighlight) {
        if (isHighlighted) {
          // Highlight matching nodes
          nodeElement
            .style('opacity', 1)
            .select('ellipse, polygon, rect')
            .style('stroke', '#f59e0b')
            .style('stroke-width', 3)
            .style('filter', 'drop-shadow(0 0 6px rgba(245, 158, 11, 0.8))');
        } else {
          // Dim non-matching nodes
          nodeElement.style('opacity', 0.3);
        }
      } else {
        // Reset all nodes when no highlight
        nodeElement
          .style('opacity', 1)
          .select('ellipse, polygon, rect')
          .style('stroke', null)
          .style('stroke-width', null)
          .style('filter', null);
      }
    });
  }, [highlightedPatterns]);

  useEffect(() => {
    const params = new URLSearchParams(window.location.search);
    if (maximized) {
      params.set('dotGraphMax', graphId);
    } else {
      params.delete('dotGraphMax');
    }
    const newUrl = `${window.location.pathname}${params.toString() ? `?${params.toString()}` : ''}${window.location.hash}`;
    window.history.replaceState({}, '', newUrl);
  }, [maximized, graphId]);

  const toggleMaximize = () => setMaximized((prev) => !prev);

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
      <svg
        ref={svgRef}
        width="100%"
        height={maximized ? 'calc(100vh - 64px)' : height}
        style={{ display: 'block', background: 'rgba(15, 23, 42, 0.5)' }}
      />
    </div>
  );
}
