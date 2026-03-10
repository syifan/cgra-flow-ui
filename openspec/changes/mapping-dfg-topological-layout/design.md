## Context

`DotGraph.jsx` currently renders a DFG by replaying Graphviz drawing instructions (`_draw_`, `_ldraw_`, `_hdraw_`) directly from `dot -Tjson` output. These instructions encode absolute pixel coordinates pre-computed by Graphviz's own layout engine, which produces a serialized/vertical arrangement that does not reflect the topological depth of the data-dependency graph.

The goal is to discard the Graphviz coordinate pass-through and instead compute a proper **layered (Sugiyama-style) DAG layout** from the graph's structural data (`objects` and `edges`), while preserving all existing UX: hover highlighting via `highlightedPatterns`, zoom/pan, maximize toggle, and node tooltips.

## Goals / Non-Goals

**Goals:**
- Compute topological layers (Kahn's algorithm) from the `edges` array in the Graphviz JSON
- Position nodes in horizontal tiers (left-to-right: shallow → deep), evenly spaced within each tier
- Draw edges as smooth curved paths (cubic Bézier or `d3.linkHorizontal`) with arrowheads
- Label each node with its `label` field; apply the existing amber highlight + dimming logic
- Retain the maximize toggle and zoom/pan behavior

**Non-Goals:**
- Full Sugiyama crossing-minimization (heuristic ordering within a layer is acceptable)
- Changing the `DotGraph` prop interface (`graph`, `highlightedPatterns`, `width`, `height`)
- Altering how `MappingTab.jsx` invokes `DotGraph`
- Changing the `DependencyGraph` view (this change only affects the "Dataflow" mode)

## Decisions

### D1 — Compute layout from `objects`/`edges`, ignore Graphviz coordinates

**Decision**: Extract node list from `graph.objects` and edge list from `graph.edges`. Ignore all `_draw_` / `_ldraw_` / `_hdraw_` coordinate data. Compute `x, y` positions entirely in JS.

**Rationale**: Graphviz coordinates are in an inverted coordinate space, sized to the Graphviz bounding box, and reflect Graphviz's internal ordering algorithm. Re-using them forces us to work around its serialized layout. A clean D3-computed layout gives us full control.

**Alternative considered**: Use `dagre` npm package (auto layout for DAGs). Rejected — introduces a new dependency; D3 alone is sufficient with Kahn's + manual positioning.

### D2 — Topological layering via Kahn's BFS algorithm

**Decision**: Assign each node a `depth` = length of the longest path from any source node (nodes with in-degree 0). Nodes at the same depth share a horizontal layer.

**Algorithm**:
1. Build adjacency list and in-degree map from `graph.edges` (using `_gvid` or `name` as keys)
2. BFS from all zero-in-degree nodes; assign `depth[v] = max(depth[u] + 1)` for each edge u→v
3. Group nodes by depth into layers

**Rationale**: Kahn's BFS is O(V+E), simple to implement inline, and produces a layout where all edges point from left to right (shallower to deeper).

### D3 — SVG rendering with D3 selections (no foreign rendering ops)

**Decision**: Replace the `renderDrawOps` function with plain D3 `append('rect')` / `append('text')` / `append('path')` calls using computed `x, y` positions.

- Nodes: rounded rectangles (`rect`, `rx=6`), sized to fit the label text
- Labels: `text` elements centered in the node box
- Edges: `path` with `d3.linkHorizontal()` cubic Bézier curves, with a triangle `marker-end` arrowhead defined in `<defs>`

**Rationale**: Clean separation between layout computation and rendering. Avoids the complexity of `flipY`, coordinate parsing, and Graphviz op-code dispatch.

### D4 — Highlight logic unchanged: label-based pattern matching

**Decision**: Keep the second `useEffect` that walks `.node` elements and applies amber stroke / dimming based on `highlightedPatterns`. The node `data-label` attribute is populated from `node.label` as before.

**Rationale**: `MappingTab` drives highlighting by passing opcode patterns; the matching logic is independent of how the layout was computed.

### D5 — Node sizing: fixed height, width proportional to label

**Decision**: Fixed node height of 36px; width = `Math.max(100, label.length * 8)` px. Horizontal tier spacing: 200px between layers; vertical node spacing: 54px between nodes in a layer.

**Rationale**: Avoids needing a DOM measurement pass before rendering. The heuristic is adequate for short opcode labels (e.g., `neura.grant_once`). Can be refined later.

## Risks / Trade-offs

- **Wide graphs with many parallel nodes in one layer** → columns of nodes may overflow the SVG height. *Mitigation*: SVG `viewBox` height is computed dynamically from `maxNodesPerLayer * nodeSpacing`; zoom/pan handles the rest.
- **Cycles in the DFG** (should not occur for valid benchmarks, but `dot` accepts them) → Kahn's BFS will leave cycle nodes unvisited. *Mitigation*: append unvisited nodes to the last layer as a fallback.
- **Edge label rendering** (`_ldraw_`) is dropped. *Mitigation*: Edge labels in the current DFGs are absent or redundant with node labels; acceptable trade-off for this iteration.
- **Long node labels** (multi-line `\\n` labels) → the fixed-width heuristic may underestimate. *Mitigation*: split label on `\n`, use the longest line for width calculation.

## Migration Plan

1. Rewrite `DotGraph.jsx` in place — no file renames, no new files
2. The prop interface is unchanged; no callsite changes needed
3. Deploy: normal Vite build — no migration steps or feature flags required
4. Rollback: revert `DotGraph.jsx` to prior commit

## Open Questions

- Should edge labels be re-introduced in a later iteration once a text-measurement approach is available?
- Should node width use `getBBox()` after initial render for precise sizing? (Would require a two-pass render pattern.)
