## Why

The Mapping tab's Dataflow Graph currently renders nodes in a serialized (vertically stacked) fashion that matches Graphviz's default output order rather than the actual data-dependency structure. This makes it difficult to understand operation precedence and data flow at a glance. A topological layout—where nodes are grouped into horizontal layers by dependency depth—would make the DFG immediately readable and meaningful.

## What Changes

- Replace the raw Graphviz coordinate-based rendering in `DotGraph.jsx` with a D3-powered topological layout that computes node layers from the graph's edge structure
- Nodes at the same topological depth are placed on the same horizontal tier; edges flow top-to-bottom
- Node labels, types, and existing hover-highlight behavior (`highlightedPatterns`) are preserved
- Zoom/pan interaction is retained
- The serialized fallback is removed; the topological renderer handles all DFG display in the Mapping tab

## Capabilities

### New Capabilities
- `mapping-dfg-view`: Topological DFG visualization — a D3-based layered graph renderer that computes topological depth from the graph's edge list and lays out nodes in horizontal tiers with directed edges drawn between them. Replaces the current Graphviz coordinate passthrough.

### Modified Capabilities
<!-- No existing specs are being modified — openspec/specs/ is currently empty -->

## Impact

- **`src/workspace/DotGraph.jsx`** — core change: swap Graphviz drawing-instruction rendering for a D3 DAG layer layout
- **`src/workspace/MappingTab.jsx`** — no structural changes; `DotGraph` prop interface stays the same (`graph`, `highlightedPatterns`)
- **Dependencies**: D3.js 7.x (already in stack) — no new packages needed
- **Data format**: continues to consume the same Graphviz JSON (`dot -Tjson`) objects/edges structure; only the visual layout computation changes
