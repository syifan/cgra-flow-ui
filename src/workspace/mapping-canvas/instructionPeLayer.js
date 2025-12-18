/**
 * D3 layer for rendering PE nodes with instruction state
 */

import { select } from 'd3';
import {
  PE_SIZE,
  PE_INACTIVE_FILL,
  PE_STROKE,
  PE_INACTIVE_STROKE,
  PE_LABEL_FILL,
  PE_LABEL_INACTIVE_FILL,
  PE_LABEL_FONT_SIZE,
  PE_OPCODE_FONT_SIZE,
  getOpcodeColor
} from './constants';

/**
 * Create an instruction PE layer
 * @param {d3.Selection} root - The root SVG group
 * @returns {object} Layer controller with render and destroy methods
 */
export function createInstructionPeLayer(root) {
  const group = root.append('g').attr('class', 'layer-instruction-pe');

  /**
   * Render PE nodes with instruction state
   * @param {Array} peNodes - Array of PE node data with positions
   * @param {Map} activeInstructions - Map of coreId -> instruction data for current timestep
   * @param {Function} onHover - Callback when a PE node is hovered (instruction) or unhovered (null)
   * @param {Object} highlightedPE - Optional PE to highlight { col, row }
   */
  const render = (peNodes, activeInstructions = new Map(), onHover, highlightedPE = null) => {
    const nodeSelection = group.selectAll('g.pe-node').data(peNodes, (d) => d.id);

    // Remove old nodes
    nodeSelection.exit().remove();

    // Create new nodes
    const nodeEnter = nodeSelection
      .enter()
      .append('g')
      .attr('class', 'pe-node')
      .style('cursor', 'pointer');

    // Add rectangle for each PE
    nodeEnter.append('rect').attr('rx', 6).attr('ry', 6);

    // Add label for PE position
    nodeEnter
      .append('text')
      .attr('class', 'pe-position-label')
      .attr('text-anchor', 'middle')
      .attr('font-family', '"Fira Code", monospace')
      .attr('font-size', PE_LABEL_FONT_SIZE);

    // Add label for opcode
    nodeEnter
      .append('text')
      .attr('class', 'pe-opcode-label')
      .attr('text-anchor', 'middle')
      .attr('font-family', '"Fira Code", monospace')
      .attr('font-size', PE_OPCODE_FONT_SIZE)
      .attr('font-weight', 'bold');

    // Merge and update all nodes
    const merged = nodeEnter.merge(nodeSelection);

    merged
      .attr('transform', (d) => `translate(${d.x}, ${d.y})`)
      .each(function updateNode(datum) {
        const node = select(this);
        const instruction = activeInstructions.get(datum.coreId);
        const isActive = Boolean(instruction);
        const opcode = instruction?.operations?.[0]?.opcode || '';

        // Check if this PE should be highlighted
        const isHighlighted =
          highlightedPE && datum.column === highlightedPE.col && datum.row === highlightedPE.row;

        // Update rectangle with highlight effects
        const rect = node.select('rect');
        rect
          .attr('width', PE_SIZE)
          .attr('height', PE_SIZE)
          .attr('fill', isActive ? getOpcodeColor(opcode) : PE_INACTIVE_FILL)
          .attr('stroke', isHighlighted ? '#f59e0b' : isActive ? PE_STROKE : PE_INACTIVE_STROKE)
          .attr('stroke-width', isHighlighted ? 4 : isActive ? 2 : 1)
          .attr('opacity', isActive ? 1 : 0.6);

        // Apply glow effect for highlighted PE
        if (isHighlighted) {
          rect.style('filter', 'drop-shadow(0 0 12px rgba(245, 158, 11, 0.9))');
        } else {
          rect.style('filter', null);
        }

        // Update position label
        node
          .select('text.pe-position-label')
          .attr('x', PE_SIZE / 2)
          .attr('y', PE_SIZE / 2 - 6)
          .attr('fill', isActive ? PE_LABEL_FILL : PE_LABEL_INACTIVE_FILL)
          .text(`(${datum.column},${datum.row})`);

        // Update opcode label
        node
          .select('text.pe-opcode-label')
          .attr('x', PE_SIZE / 2)
          .attr('y', PE_SIZE / 2 + 10)
          .attr('fill', isActive ? PE_LABEL_FILL : 'transparent')
          .text(truncateOpcode(opcode));

        // Setup hover events
        node
          .on('mouseenter', () => {
            if (onHover && instruction) {
              onHover(instruction);
            }
          })
          .on('mouseleave', () => {
            if (onHover) {
              onHover(null);
            }
          });
      });
  };

  /**
   * Truncate long opcodes for display
   */
  const truncateOpcode = (opcode) => {
    if (!opcode) return '';
    // Shorten common prefixes
    const shortened = opcode
      .replace('GRANT_', 'G_')
      .replace('DATA_', 'D_')
      .replace('CTRL_', 'C_')
      .replace('ICMP_', 'I_');
    return shortened.length > 8 ? shortened.slice(0, 7) + '…' : shortened;
  };

  const destroy = () => {
    group.remove();
  };

  return {
    render,
    destroy
  };
}
