## 1. Layout Algorithm

- [x] 1.1 In `DotGraph.jsx`, extract node list from `graph.objects` (filter to items with a `name` or `_gvid` field) and build a canonical ID map keyed by `_gvid` and `name`
- [x] 1.2 Build an adjacency list and in-degree map from `graph.edges`, mapping each edge's `tail` and `head` fields to the canonical node IDs
- [x] 1.3 Implement Kahn's BFS topological sort: initialize a queue with all zero-in-degree nodes, assign `depth[v] = max(depth[u] + 1)` for each edge u→v, and collect nodes into layers by depth
- [x] 1.4 Handle the cycle fallback: after BFS, append any unvisited nodes to the final layer rather than omitting them

## 2. Layout Position Computation

- [x] 2.1 Define layout constants: `NODE_HEIGHT = 36`, `NODE_H_SPACING = 54` (vertical gap between nodes in a layer), `LAYER_WIDTH = 200` (horizontal distance between layer centers)
- [x] 2.2 For each node, compute label width: split the label on `\n`, take the longest line, and calculate `nodeWidth = Math.max(100, longestLine.length * 8)`
- [x] 2.3 Assign `x` positions: `x = depth * LAYER_WIDTH + PADDING`
- [x] 2.4 Assign `y` positions within each layer: evenly space nodes vertically so the layer is centred in the SVG
- [x] 2.5 Compute the total SVG `viewBox` dimensions from `maxDepth * LAYER_WIDTH` (width) and `maxNodesPerLayer * NODE_H_SPACING` (height)

## 3. Node Rendering

- [x] 3.1 Remove the existing `renderDrawOps` function and all Graphviz coordinate/bounding-box parsing code
- [x] 3.2 Append a `<defs>` block to the SVG with a triangular `marker` element for arrowheads (id: `"arrowhead"`)
- [x] 3.3 Render each node as a `<rect>` with `rx=6`, positioned at `(x - nodeWidth/2, y - NODE_HEIGHT/2)`, with the computed width and fixed height
- [x] 3.4 Render each node's label as a `<text>` element centered inside its rectangle; split multi-line labels into `<tspan>` elements
- [x] 3.5 Attach `class="node"` and `data-label` attributes to each node `<g>` element (required by the highlight effect)
- [x] 3.6 Store each node's computed `{ x, y, nodeWidth }` in `nodeInfoRef` for use by tooltip and highlight effects

## 4. Edge Rendering

- [x] 4.1 For each edge, look up source and target node positions from the computed layout
- [x] 4.2 Render each edge as a `<path>` using `d3.linkHorizontal()` with source point at `(sourceX + sourceWidth/2, sourceY)` and target point at `(targetX - targetWidth/2, targetY)`
- [x] 4.3 Apply `marker-end="url(#arrowhead)"` to each edge path
- [x] 4.4 Skip edges whose source or target node cannot be resolved (log a warning, do not throw)

## 5. Interaction — Zoom, Pan, Tooltip

- [x] 5.1 Retain the `d3.zoom()` setup with `scaleExtent([0.2, 4])` applied to the SVG; wrap all rendered content in a `<g>` that receives the zoom transform
- [x] 5.2 Retain the tooltip `div` (appended to `document.body`) with `mousemove` / `mouseleave` handlers on `.node` elements; source the label from the updated `nodeInfoRef` structure
- [x] 5.3 Ensure tooltip cleanup (`tooltip.remove()`) is returned from the layout `useEffect`

## 6. Highlight Effect

- [x] 6.1 Verify the existing `highlightedPatterns` `useEffect` still functions correctly after the node rendering change: it selects `.node` elements, reads `data-label`, and applies amber stroke / dimming — no changes should be needed if steps 3.5 and 3.6 are complete
- [x] 6.2 Manually test: hover an instruction row in the Mapping tab and confirm the matching DFG node is highlighted with amber stroke while others are dimmed

## 7. Maximize Toggle

- [x] 7.1 Retain the `maximized` state, `toggleMaximize` handler, and URL query-string sync (`useEffect` with `window.history.replaceState`) unchanged
- [x] 7.2 Retain the maximize button and its SVG icon in the JSX return; verify it still positions correctly over the new renderer

## 8. Cleanup and Validation

- [x] 8.1 Remove dead imports no longer used after deleting `renderDrawOps` (e.g., any Graphviz-specific helpers)
- [ ] 8.2 Run `npm run dev` and open the Mapping tab with a completed mapping job; verify the DFG renders with horizontal tiers and directed edges
- [ ] 8.2 Run `npm run dev` and open the Mapping tab with a completed mapping job; verify the DFG renders with horizontal tiers and directed edges
- [ ] 8.3 Verify that maximizing the graph, reloading the page, and restoring all work correctly
- [ ] 8.4 Run the existing Playwright tests (`npm run test` or `npx playwright test`) and confirm no regressions
