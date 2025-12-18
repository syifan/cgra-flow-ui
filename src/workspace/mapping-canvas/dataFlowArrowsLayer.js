/**
 * D3 layer for rendering data flow arrows between PEs
 */

import { select } from 'd3';
import {
  PE_SIZE,
  PE_GAP,
  ARROW_STROKE_WIDTH,
  ARROW_HEAD_SIZE,
  ARROW_OPACITY,
  getFlowColor
} from './constants';

/**
 * Create a data flow arrows layer
 * @param {d3.Selection} root - The root SVG group
 * @returns {object} Layer controller with render and destroy methods
 */
export function createDataFlowArrowsLayer(root) {
  const group = root.append('g').attr('class', 'layer-data-flow-arrows');

  // Create arrow marker definitions
  const defs = root.append('defs');

  // Create markers for different colors
  const colors = ['RED', 'BLUE', 'GREEN', 'YELLOW', 'default'];
  colors.forEach((colorName) => {
    const color = getFlowColor(colorName);
    defs
      .append('marker')
      .attr('id', `arrow-${colorName}`)
      .attr('viewBox', '0 -5 10 10')
      .attr('refX', 8)
      .attr('refY', 0)
      .attr('markerWidth', ARROW_HEAD_SIZE)
      .attr('markerHeight', ARROW_HEAD_SIZE)
      .attr('orient', 'auto')
      .append('path')
      .attr('d', 'M0,-5L10,0L0,5')
      .attr('fill', color);
  });

  /**
   * Calculate the center position of a PE cell
   * @param {number} column - PE column
   * @param {number} row - PE row
   * @param {number} gridPadding - Padding around the grid
   * @param {number} totalRows - Total number of rows in the grid
   * @returns {{x: number, y: number}}
   */
  const getPeCenter = (column, row, gridPadding, totalRows) => {
    return {
      x: gridPadding + column * (PE_SIZE + PE_GAP) + PE_SIZE / 2,
      // Flip y so row 0 is at bottom (Cartesian coordinates)
      y: gridPadding + (totalRows - 1 - row) * (PE_SIZE + PE_GAP) + PE_SIZE / 2
    };
  };

  /**
   * Calculate edge point of a PE cell for arrow connection
   * @param {number} fromCol - Source column
   * @param {number} fromRow - Source row
   * @param {number} toCol - Target column
   * @param {number} toRow - Target row
   * @param {number} gridPadding - Padding around the grid
   * @param {number} totalRows - Total number of rows in the grid
   * @returns {{x1: number, y1: number, x2: number, y2: number}}
   */
  const getArrowEndpoints = (fromCol, fromRow, toCol, toRow, gridPadding, totalRows) => {
    const fromCenter = getPeCenter(fromCol, fromRow, gridPadding, totalRows);
    const toCenter = getPeCenter(toCol, toRow, gridPadding, totalRows);

    const dx = toCenter.x - fromCenter.x;
    const dy = toCenter.y - fromCenter.y;
    const len = Math.sqrt(dx * dx + dy * dy);

    if (len === 0) {
      return { x1: fromCenter.x, y1: fromCenter.y, x2: toCenter.x, y2: toCenter.y };
    }

    // Offset from center to edge of PE
    const offset = PE_SIZE / 2 + 4;
    const arrowClearance = ARROW_HEAD_SIZE + 2;

    return {
      x1: fromCenter.x + (dx / len) * offset,
      y1: fromCenter.y + (dy / len) * offset,
      x2: toCenter.x - (dx / len) * (offset + arrowClearance),
      y2: toCenter.y - (dy / len) * (offset + arrowClearance)
    };
  };

  /**
   * Render data flow arrows
   * @param {Array} flows - Array of flow data
   * @param {number} gridPadding - Padding around the grid
   * @param {number} columns - Number of columns in the grid
   * @param {number} rows - Number of rows in the grid
   */
  const render = (flows, gridPadding, columns, rows) => {
    // Filter out flows that go outside the grid
    const validFlows = flows.filter(
      (f) =>
        f.fromColumn >= 0 &&
        f.fromColumn < columns &&
        f.fromRow >= 0 &&
        f.fromRow < rows &&
        f.toColumn >= 0 &&
        f.toColumn < columns &&
        f.toRow >= 0 &&
        f.toRow < rows
    );

    // Generate unique keys for flows
    const flowsWithKeys = validFlows.map((f, i) => ({
      ...f,
      key: `${f.fromColumn}-${f.fromRow}-${f.toColumn}-${f.toRow}-${f.type}-${i}`
    }));

    const lineSelection = group
      .selectAll('line.data-flow')
      .data(flowsWithKeys, (d) => d.key);

    // Remove old arrows
    lineSelection.exit().remove();

    // Create new arrows
    const lineEnter = lineSelection.enter().append('line').attr('class', 'data-flow');

    // Merge and update
    lineEnter
      .merge(lineSelection)
      .each(function updateArrow(datum) {
        const endpoints = getArrowEndpoints(
          datum.fromColumn,
          datum.fromRow,
          datum.toColumn,
          datum.toRow,
          gridPadding,
          rows
        );

        select(this)
          .attr('x1', endpoints.x1)
          .attr('y1', endpoints.y1)
          .attr('x2', endpoints.x2)
          .attr('y2', endpoints.y2)
          .attr('stroke', getFlowColor(datum.color))
          .attr('stroke-width', ARROW_STROKE_WIDTH)
          .attr('opacity', ARROW_OPACITY)
          .attr('marker-end', `url(#arrow-${datum.color || 'default'})`);
      });
  };

  const clear = () => {
    group.selectAll('line.data-flow').remove();
  };

  const destroy = () => {
    group.remove();
    defs.remove();
  };

  return {
    render,
    clear,
    destroy
  };
}
