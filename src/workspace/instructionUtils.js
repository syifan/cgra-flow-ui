/**
 * Utility functions for processing instruction data from mapping results
 */

/**
 * Build a map of core_id to (column, row) position
 * @param {object} instructionData - The instruction data from mapping
 * @returns {Map<string, {column: number, row: number}>}
 */
export function buildCorePositionMap(instructionData) {
  const map = new Map();
  instructionData?.array_config?.cores?.forEach((core) => {
    map.set(core.core_id, { column: core.column, row: core.row });
  });
  return map;
}

/**
 * Get all instructions for a specific timestep
 * @param {object} instructionData - The instruction data from mapping
 * @param {number} timestep - The timestep to filter by
 * @returns {Array<{coreId: string, column: number, row: number, timestep: number, operations: Array}>}
 */
export function getInstructionsAtTimestep(instructionData, timestep) {
  const results = [];
  instructionData?.array_config?.cores?.forEach((core) => {
    core.entries?.forEach((entry) => {
      entry.instructions?.forEach((inst) => {
        if (inst.timestep === timestep) {
          results.push({
            coreId: core.core_id,
            column: core.column,
            row: core.row,
            ...inst
          });
        }
      });
    });
  });
  return results;
}

/**
 * Get all unique timesteps (sorted)
 * @param {object} instructionData - The instruction data from mapping
 * @returns {number[]}
 */
export function getAllTimesteps(instructionData) {
  const timesteps = new Set();
  instructionData?.array_config?.cores?.forEach((core) => {
    core.entries?.forEach((entry) => {
      entry.instructions?.forEach((inst) => {
        timesteps.add(inst.timestep);
      });
    });
  });
  return Array.from(timesteps).sort((a, b) => a - b);
}

/**
 * Get the maximum timestep in the instruction data
 * @param {object} instructionData - The instruction data from mapping
 * @returns {number}
 */
export function getMaxTimestep(instructionData) {
  let max = 0;
  instructionData?.array_config?.cores?.forEach((core) => {
    core.entries?.forEach((entry) => {
      entry.instructions?.forEach((inst) => {
        if (inst.timestep > max) max = inst.timestep;
      });
    });
  });
  return max;
}

/**
 * Get array dimensions from instruction data
 * @param {object} instructionData - The instruction data from mapping
 * @returns {{columns: number, rows: number, compiledIi: number}}
 */
export function getArrayDimensions(instructionData) {
  return {
    columns: instructionData?.array_config?.columns || 4,
    rows: instructionData?.array_config?.rows || 4,
    compiledIi: instructionData?.array_config?.compiled_ii || 0
  };
}

/**
 * Parse direction to delta for calculating neighbor positions
 * @param {string} direction - Direction string (NORTH, SOUTH, EAST, WEST)
 * @returns {{dx: number, dy: number} | null}
 */
export function directionToDelta(direction) {
  const map = {
    NORTH: { dx: 0, dy: -1 },
    SOUTH: { dx: 0, dy: 1 },
    EAST: { dx: 1, dy: 0 },
    WEST: { dx: -1, dy: 0 }
  };
  return map[direction] || null;
}

/**
 * Check if an operand is a direction (inter-PE communication)
 * @param {string} operand - The operand string
 * @returns {boolean}
 */
export function isDirectionOperand(operand) {
  return ['NORTH', 'SOUTH', 'EAST', 'WEST'].includes(operand);
}

/**
 * Check if an operand is a register
 * @param {string} operand - The operand string
 * @returns {boolean}
 */
export function isRegisterOperand(operand) {
  return operand?.startsWith('$');
}

/**
 * Check if an operand is a constant
 * @param {string} operand - The operand string
 * @returns {boolean}
 */
export function isConstantOperand(operand) {
  return operand?.startsWith('#');
}

/**
 * Get all data flow connections for a specific timestep
 * Returns arrows that should be drawn between PEs
 * @param {object} instructionData - The instruction data from mapping
 * @param {number} timestep - The timestep to get flows for
 * @returns {Array<{fromColumn: number, fromRow: number, toColumn: number, toRow: number, color: string}>}
 */
export function getDataFlowsAtTimestep(instructionData, timestep) {
  const flows = [];
  const instructions = getInstructionsAtTimestep(instructionData, timestep);

  instructions.forEach((inst) => {
    inst.operations?.forEach((op) => {
      // Check source operands for incoming data
      op.src_operands?.forEach((src) => {
        const delta = directionToDelta(src.operand);
        if (delta) {
          // Data coming FROM neighbor TO this PE
          flows.push({
            fromColumn: inst.column + delta.dx,
            fromRow: inst.row + delta.dy,
            toColumn: inst.column,
            toRow: inst.row,
            color: src.color || 'RED',
            type: 'input'
          });
        }
      });

      // Check destination operands for outgoing data
      op.dst_operands?.forEach((dst) => {
        const delta = directionToDelta(dst.operand);
        if (delta) {
          // Data going FROM this PE TO neighbor
          flows.push({
            fromColumn: inst.column,
            fromRow: inst.row,
            toColumn: inst.column + delta.dx,
            toRow: inst.row + delta.dy,
            color: dst.color || 'RED',
            type: 'output'
          });
        }
      });
    });
  });

  return flows;
}

/**
 * Get the primary opcode for display (first operation's opcode)
 * @param {Array} operations - Array of operations
 * @returns {string}
 */
export function getPrimaryOpcode(operations) {
  if (!operations || operations.length === 0) return '';
  return operations[0].opcode || '';
}
