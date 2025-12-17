import { useEffect, useRef, useState } from 'react';
import * as d3 from 'd3';

/**
 * D3 renderer for Graphviz JSON (dot -Tjson output).
 * Directly renders Graphviz drawing instructions from _draw_ and _ldraw_ attributes.
 */
export default function DotGraph({ graph, width = 800, height = 600 }) {
  const svgRef = useRef(null);
  const graphId = graph?.name || graph?.label || 'dot-graph';
  const [maximized, setMaximized] = useState(() => {
    const params = new URLSearchParams(window.location.search);
    return params.get('dotGraphMax') === graphId;
  });

  useEffect(() => {
    if (!graph || !svgRef.current) return;

    // Parse bounding box
    const bbStr = graph.bb || '';
    const bbParts = bbStr.split(',').map(Number);
    const graphHeight = bbParts.length === 4 ? bbParts[3] : 1000;
    const graphWidth = bbParts.length === 4 ? bbParts[2] : 1000;

    // Helper to flip Y coordinate (Graphviz uses bottom-left origin)
    const flipY = (y) => graphHeight - y;

    // Helper to convert Graphviz color to CSS
    const parseColor = (color) => {
      if (!color) return null;
      if (color.startsWith('#')) return color;
      if (color === 'none') return 'transparent';
      return color;
    };

    const objects = graph.objects || graph.nodes || [];
    const edges = graph.edges || [];

    // Build id map for edge references
    const idMap = new Map();
    objects.forEach((o) => {
      const id = o.name || String(o._gvid);
      if (o._gvid !== undefined) {
        idMap.set(o._gvid, id);
      }
      idMap.set(id, id);
    });

    // Include all nodes (clusters will be rendered as containers if they have _draw_)
    const nodes = objects.filter((o) => {
      // Only include objects that have drawing instructions
      return o._draw_ || o._ldraw_;
    });

    // Include all edges
    const visibleEdges = edges;

    if (nodes.length === 0) return;

    // Setup SVG
    const svg = d3.select(svgRef.current);
    svg.selectAll('*').remove();
    svg.attr('viewBox', `0 0 ${graphWidth} ${graphHeight}`);

    const g = svg.append('g');

    // Setup zoom
    const zoom = d3.zoom()
      .scaleExtent([0.2, 4])
      .on('zoom', (event) => {
        g.attr('transform', event.transform);
      });
    svg.call(zoom);

    // Render drawing operations from _draw_ array
    const renderDrawOps = (parent, drawOps, labelDrawOps) => {
      if (!drawOps && !labelDrawOps) return;

      let currentStroke = '#000000';
      let currentFill = 'none';
      let currentFontSize = 14;

      // Render shape operations
      if (drawOps) {
        for (const op of drawOps) {
          switch (op.op) {
            case 'c': // stroke color
              currentStroke = parseColor(op.color) || currentStroke;
              break;
            case 'C': // fill color
              currentFill = parseColor(op.color) || currentFill;
              break;
            case 'e': // unfilled ellipse
            case 'E': // filled ellipse
              if (op.rect) {
                const [cx, cy, rx, ry] = op.rect;
                parent.append('ellipse')
                  .attr('cx', cx)
                  .attr('cy', flipY(cy))
                  .attr('rx', rx)
                  .attr('ry', ry)
                  .attr('fill', op.op === 'E' ? currentFill : 'none')
                  .attr('stroke', currentStroke)
                  .attr('stroke-width', 1);
              }
              break;
            case 'p': // unfilled polygon
            case 'P': // filled polygon
              if (op.points) {
                const pointsStr = op.points.map(p => `${p[0]},${flipY(p[1])}`).join(' ');
                parent.append('polygon')
                  .attr('points', pointsStr)
                  .attr('fill', op.op === 'P' ? currentFill : 'none')
                  .attr('stroke', currentStroke)
                  .attr('stroke-width', 1);
              }
              break;
            case 'b': // bezier curve
            case 'B': // filled bezier
              if (op.points && op.points.length >= 4) {
                let path = `M${op.points[0][0]},${flipY(op.points[0][1])}`;
                for (let i = 1; i < op.points.length; i += 3) {
                  if (i + 2 < op.points.length) {
                    const p1 = op.points[i];
                    const p2 = op.points[i + 1];
                    const p3 = op.points[i + 2];
                    path += ` C${p1[0]},${flipY(p1[1])} ${p2[0]},${flipY(p2[1])} ${p3[0]},${flipY(p3[1])}`;
                  }
                }
                parent.append('path')
                  .attr('d', path)
                  .attr('fill', op.op === 'B' ? currentFill : 'none')
                  .attr('stroke', currentStroke)
                  .attr('stroke-width', 1.5);
              }
              break;
            case 'L': // polyline
              if (op.points) {
                const pointsStr = op.points.map(p => `${p[0]},${flipY(p[1])}`).join(' ');
                parent.append('polyline')
                  .attr('points', pointsStr)
                  .attr('fill', 'none')
                  .attr('stroke', currentStroke)
                  .attr('stroke-width', 1.5);
              }
              break;
          }
        }
      }

      // Render label operations
      if (labelDrawOps) {
        for (const op of labelDrawOps) {
          switch (op.op) {
            case 'F': // font
              currentFontSize = op.size || 14;
              break;
            case 'c': // text color
              currentStroke = parseColor(op.color) || currentStroke;
              break;
            case 'T': // text
              if (op.pt && op.text) {
                const [x, y] = op.pt;
                let textAnchor = 'middle';
                if (op.align === 'l') textAnchor = 'start';
                else if (op.align === 'r') textAnchor = 'end';

                parent.append('text')
                  .attr('x', x)
                  .attr('y', flipY(y))
                  .attr('text-anchor', textAnchor)
                  .attr('dominant-baseline', 'middle')
                  .attr('font-size', currentFontSize)
                  .attr('font-family', 'Times-Roman, serif')
                  .attr('fill', currentStroke)
                  .text(op.text);
              }
              break;
          }
        }
      }
    };

    // Render edges first (so they appear behind nodes)
    const edgesGroup = g.append('g').attr('class', 'edges');
    visibleEdges.forEach((edge) => {
      const edgeGroup = edgesGroup.append('g');

      // Render edge path
      renderDrawOps(edgeGroup, edge._draw_, null);

      // Render arrowhead
      if (edge._hdraw_) {
        renderDrawOps(edgeGroup, edge._hdraw_, null);
      }

      // Render edge label if present
      if (edge._ldraw_) {
        renderDrawOps(edgeGroup, null, edge._ldraw_);
      }
    });

    // Render nodes
    const nodesGroup = g.append('g').attr('class', 'nodes');
    const nodeInfo = new Map();

    nodes.forEach((node) => {
      const nodeGroup = nodesGroup.append('g')
        .attr('class', 'node')
        .style('cursor', 'pointer');

      nodeInfo.set(nodeGroup.node(), node);

      // Render node shape
      renderDrawOps(nodeGroup, node._draw_, null);

      // Render node label
      renderDrawOps(nodeGroup, null, node._ldraw_);
    });

    // Tooltip - remove any stale tooltips first to handle edge cases (hot reload, early returns)
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
        const node = nodeInfo.get(this);
        if (!node) return;

        const label = (node.label || '').replace(/\\n/g, '\n');
        tooltip
          .style('opacity', 1)
          .text(label)
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
        style={{ display: 'block', background: '#ffffff' }}
      />
    </div>
  );
}
