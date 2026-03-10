## ADDED Requirements

### Requirement: Topological layer layout
The DotGraph component SHALL compute a layered layout from the graph's structural data (objects and edges) by assigning each node a depth equal to the length of the longest path from any source node (a node with in-degree 0). Nodes at the same depth SHALL be placed in the same horizontal tier. All edges SHALL flow from left (shallower) to right (deeper).

#### Scenario: Source nodes placed in leftmost tier
- **WHEN** a graph has nodes with no incoming edges
- **THEN** those nodes SHALL appear in the leftmost column (depth 0)

#### Scenario: Downstream nodes placed in deeper tiers
- **WHEN** a node has one or more incoming edges
- **THEN** that node SHALL appear in the column whose index equals the longest incoming path length

#### Scenario: Cycle fallback
- **WHEN** the graph contains a cycle (rare, non-standard) causing some nodes to remain unvisited by BFS
- **THEN** those unvisited nodes SHALL be appended to the rightmost tier rather than omitted

---

### Requirement: Node rendering as labeled rectangles
Each graph node SHALL be rendered as a rounded SVG rectangle containing its `label` text centered inside. Node width SHALL be proportional to the length of the longest line in the label. Node height SHALL be fixed.

#### Scenario: Multi-line label sizing
- **WHEN** a node label contains newline characters
- **THEN** each line SHALL be split and the longest line SHALL determine the node's width

#### Scenario: Short label minimum width
- **WHEN** a node label is very short (fewer than ~12 characters)
- **THEN** the node rectangle SHALL have a minimum width so the label is readable

---

### Requirement: Directed edges with arrowheads
Each graph edge SHALL be rendered as a smooth curved path (cubic Bézier) connecting source and target nodes. Each edge SHALL have a triangular arrowhead at the target end indicating direction of data flow.

#### Scenario: Edge connects correct nodes
- **WHEN** a graph edge references source node A and target node B
- **THEN** the rendered path SHALL originate from the right side of node A and terminate at the left side of node B

#### Scenario: Arrowhead visible at target
- **WHEN** an edge is rendered
- **THEN** a triangular marker SHALL be visible at the point where the path meets the target node

---

### Requirement: Hover highlight via `highlightedPatterns`
The component SHALL accept a `highlightedPatterns` prop (array of strings). When non-empty, nodes whose `label` contains any of the patterns (case-insensitive) SHALL be visually emphasized, and all other nodes SHALL be dimmed. When the prop is empty or omitted, all nodes SHALL render at full opacity with no highlight.

#### Scenario: Matching node emphasized
- **WHEN** `highlightedPatterns` contains a string that appears in a node's label
- **THEN** that node SHALL render with an amber-colored stroke and full opacity

#### Scenario: Non-matching nodes dimmed
- **WHEN** `highlightedPatterns` is non-empty
- **THEN** nodes whose labels do not match any pattern SHALL render at reduced opacity

#### Scenario: No patterns — all nodes normal
- **WHEN** `highlightedPatterns` is empty
- **THEN** all nodes SHALL render at full opacity without any highlight styling

---

### Requirement: Node tooltip on hover
When a user hovers over a node, the component SHALL display a tooltip showing the node's full `label` text. The tooltip SHALL disappear when the cursor leaves the node.

#### Scenario: Tooltip appears on mouse enter
- **WHEN** the user moves the mouse over a node rectangle
- **THEN** a tooltip SHALL appear near the cursor displaying the node's label

#### Scenario: Tooltip disappears on mouse leave
- **WHEN** the user moves the mouse away from a node
- **THEN** the tooltip SHALL no longer be visible

---

### Requirement: Zoom and pan interaction
The graph view SHALL support mouse-wheel zoom and click-drag pan so users can explore large graphs. The zoom extent SHALL allow zooming out to at least 20% and zooming in to at least 400%.

#### Scenario: Zoom in with scroll wheel
- **WHEN** the user scrolls up over the graph
- **THEN** the graph SHALL scale up (zoom in) centered on the cursor position

#### Scenario: Pan with click-drag
- **WHEN** the user clicks and drags on the graph background
- **THEN** the graph SHALL translate in the direction of the drag

---

### Requirement: Maximize toggle
The component SHALL provide a maximize button that expands the graph to fill the viewport. Pressing it again SHALL restore the graph to its original container bounds. The maximize state SHALL be reflected in the URL query string so it survives a page reload.

#### Scenario: Maximize button expands view
- **WHEN** the user clicks the maximize button
- **THEN** the graph container SHALL expand to cover the full viewport

#### Scenario: Restore button returns to normal size
- **WHEN** the graph is maximized and the user clicks the restore button
- **THEN** the graph container SHALL return to its inline size within the Mapping tab

#### Scenario: URL state preserved on reload
- **WHEN** the page is reloaded while the graph is maximized
- **THEN** the graph SHALL re-open in maximized state

---

### Requirement: Stable prop interface
The component SHALL accept the same props as before this change: `graph` (Graphviz JSON object), `highlightedPatterns` (array of strings), `width` (number, optional), and `height` (number, optional). No callsite changes in `MappingTab.jsx` SHALL be required.

#### Scenario: Existing callers unchanged
- **WHEN** `MappingTab` renders `<DotGraph graph={g.json} highlightedPatterns={hoveredOpcodes} />`
- **THEN** the component SHALL render correctly without any prop changes at the call site
