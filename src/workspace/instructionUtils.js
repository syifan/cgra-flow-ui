/**
 * Utility functions for processing instruction data from mapping results
 */

/**
 * Resolve index_per_ii for an instruction.
 * Some backend outputs omit index_per_ii and only provide timestep;
 * in that case derive it as timestep % compiled_ii.
 * @param {object} inst - Instruction object
 * @param {object} instructionData - Parent instruction data (for compiled_ii)
 * @returns {number}
 */
export function resolveIndexPerII(inst, instructionData) {
  if (inst.index_per_ii !== undefined && inst.index_per_ii !== null) {
    return Number(inst.index_per_ii);
  }
  const compiledII = instructionData?.array_config?.compiled_ii || 0;
  if (compiledII > 0 && inst.timestep !== undefined && inst.timestep !== null) {
    return Number(inst.timestep) % compiledII;
  }
  return 0;
}

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
 * Get all instructions for a specific index_per_ii (animation slide)
 * @param {object} instructionData - The instruction data from mapping
 * @param {number} indexPerII - The index_per_ii to filter by
 * @returns {Array<{coreId: string, column: number, row: number, timestep: number, index_per_ii: number, operations: Array}>}
 */
export function getInstructionsAtIndexPerII(instructionData, indexPerII) {
  const results = [];
  const targetII = Number(indexPerII);
  instructionData?.array_config?.cores?.forEach((core) => {
    core.entries?.forEach((entry) => {
      entry.instructions?.forEach((inst) => {
        if (resolveIndexPerII(inst, instructionData) === targetII) {
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
 * Get all unique index_per_ii values (sorted)
 * @param {object} instructionData - The instruction data from mapping
 * @returns {number[]}
 */
export function getAllIndexPerII(instructionData) {
  const indices = new Set();
  instructionData?.array_config?.cores?.forEach((core) => {
    core.entries?.forEach((entry) => {
      entry.instructions?.forEach((inst) => {
        indices.add(resolveIndexPerII(inst, instructionData));
      });
    });
  });
  return Array.from(indices).sort((a, b) => a - b);
}

/**
 * Get the maximum index_per_ii in the instruction data
 * Prefers compiled_ii from array_config when available, otherwise computes from actual data.
 * @param {object} instructionData - The instruction data from mapping
 * @returns {number}
 */
export function getMaxIndexPerII(instructionData) {
  // Prefer compiled_ii metadata if present (compiled_ii - 1 = max index)
  const compiledIi = instructionData?.array_config?.compiled_ii || 0;
  if (compiledIi > 0) return compiledIi - 1;

  // Fallback: compute from actual instruction entries
  let maxIndex = 0;
  instructionData?.array_config?.cores?.forEach((core) => {
    core.entries?.forEach((entry) => {
      entry.instructions?.forEach((inst) => {
        const ii = resolveIndexPerII(inst, instructionData);
        if (ii > maxIndex) {
          maxIndex = ii;
        }
      });
    });
  });
  return maxIndex;
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
    // Row 0 is at bottom (Cartesian-style), so north increases row.
    NORTH: { dx: 0, dy: 1 },
    SOUTH: { dx: 0, dy: -1 },
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
 * Get all data flow connections for a specific index_per_ii (animation slide)
 * Returns arrows that should be drawn between PEs
 * @param {object} instructionData - The instruction data from mapping
 * @param {number} indexPerII - The index_per_ii to get flows for
 * @returns {Array<{fromColumn: number, fromRow: number, toColumn: number, toRow: number, color: string}>}
 */
export function getDataFlowsAtIndexPerII(instructionData, indexPerII) {
  const flows = [];
  const instructions = getInstructionsAtIndexPerII(instructionData, indexPerII);

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
