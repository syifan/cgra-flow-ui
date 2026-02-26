/**
 * Utility functions for building compute dependency graphs from instruction data
 * The dependency graph shows data dependencies between operations with 1-to-1 PE linking.
 */

import { directionToDelta, isRegisterOperand, isDirectionOperand } from './instructionUtils';

/**
 * Build graph nodes from instruction data
 * Each node represents an operation at a specific index_per_ii (animation slide) and PE location
 * @param {object} instructionData - The instruction data from mapping
 * @returns {Array<{id: string, opcode: string, timestep: number, indexPerII: number, pe: {col: number, row: number, coreId: string}, srcOperands: string[], dstOperands: string[]}>}
 */
export function buildDependencyNodes(instructionData) {
  const nodes = [];

  instructionData?.array_config?.cores?.forEach((core) => {
    core.entries?.forEach((entry) => {
      entry.instructions?.forEach((inst) => {
        inst.operations?.forEach((op, opIndex) => {
          const suffix = opIndex > 0 ? `[${opIndex}]` : '';
          nodes.push({
            id: `${op.opcode}@ii${inst.index_per_ii}@PE(${core.column},${core.row})${suffix}`,
            opcode: op.opcode || '',
            timestep: inst.timestep,
            indexPerII: inst.index_per_ii,
            pe: {
              col: core.column,
              row: core.row,
              coreId: core.core_id
            },
            srcOperands: op.src_operands?.map((o) => o.operand) || [],
            dstOperands: op.dst_operands?.map((o) => o.operand) || [],
            srcColors: op.src_operands?.map((o) => o.color) || [],
            dstColors: op.dst_operands?.map((o) => o.color) || []
          });
        });
      });
    });
  });

  return nodes;
}

/**
 * Get the opposite direction for matching directional dependencies
 * @param {string} direction - Direction (NORTH, SOUTH, EAST, WEST)
 * @returns {string} The opposite direction
 */
function getOppositeDirection(direction) {
  const opposites = {
    NORTH: 'SOUTH',
    SOUTH: 'NORTH',
    EAST: 'WEST',
    WEST: 'EAST'
  };
  return opposites[direction] || direction;
}

/**
 * Build edges by tracing dependencies between operations
 * @param {Array} nodes - Array of graph nodes from buildDependencyNodes
 * @param {object} instructionData - The instruction data from mapping
 * @returns {Array<{source: string, target: string, type: string, operand: string}>}
 */
export function buildDependencyEdges(nodes, instructionData) {
  const edges = [];

  // Create lookup maps for efficient searching
  const nodesByPeAndTimestep = new Map();
  const registerWriteMap = new Map(); // PE+register -> latest writer node

  nodes.forEach((node) => {
    const key = `${node.pe.col},${node.pe.row},${node.timestep}`;
    if (!nodesByPeAndTimestep.has(key)) {
      nodesByPeAndTimestep.set(key, []);
    }
    nodesByPeAndTimestep.get(key).push(node);
  });

  // Sort nodes by timestep for temporal ordering
  const sortedNodes = [...nodes].sort((a, b) => a.timestep - b.timestep);

  // First pass: track register writes and build register dependencies
  sortedNodes.forEach((node) => {
    const peKey = `${node.pe.col},${node.pe.row}`;

    // Check source operands for register reads
    node.srcOperands.forEach((operand) => {
      if (isRegisterOperand(operand)) {
        const regKey = `${peKey},${operand}`;
        const writer = registerWriteMap.get(regKey);
        if (writer && writer.id !== node.id) {
          edges.push({
            source: writer.id,
            target: node.id,
            type: 'register',
            operand
          });
        }
      }
    });

    // Track register writes for future reads
    node.dstOperands.forEach((operand) => {
      if (isRegisterOperand(operand)) {
        const regKey = `${peKey},${operand}`;
        registerWriteMap.set(regKey, node);
      }
    });
  });

  // Second pass: build directional dependencies
  // Look for operations that read from a direction and find the neighbor PE that wrote to opposite direction
  const directionalWriteMap = new Map(); // "col,row,direction,timestep" -> node

  // First, collect all directional writes
  sortedNodes.forEach((node) => {
    node.dstOperands.forEach((operand) => {
      if (isDirectionOperand(operand)) {
        const key = `${node.pe.col},${node.pe.row},${operand},${node.timestep}`;
        directionalWriteMap.set(key, node);
      }
    });
  });

  // Then, find matching directional reads
  sortedNodes.forEach((node) => {
    node.srcOperands.forEach((operand) => {
      if (isDirectionOperand(operand)) {
        // This node reads from a direction (e.g., NORTH)
        // Find the neighbor PE that wrote to the opposite direction (e.g., SOUTH)
        const delta = directionToDelta(operand);
        if (delta) {
          const neighborCol = node.pe.col + delta.dx;
          const neighborRow = node.pe.row + delta.dy;
          const oppositeDir = getOppositeDirection(operand);

          // Look for a write at the same timestep or one timestep earlier
          for (let tOffset = 0; tOffset <= 1; tOffset++) {
            const searchTimestep = node.timestep - tOffset;
            if (searchTimestep < 0) continue;

            const key = `${neighborCol},${neighborRow},${oppositeDir},${searchTimestep}`;
            const writer = directionalWriteMap.get(key);
            if (writer) {
              edges.push({
                source: writer.id,
                target: node.id,
                type: 'directional',
                operand: `${oppositeDir}->${operand}`
              });
              break; // Found a match, stop searching
            }
          }
        }
      }
    });
  });

  return edges;
}

/**
 * Build complete dependency graph from instruction data
 * @param {object} instructionData - The instruction data from mapping
 * @returns {{nodes: Array, edges: Array}}
 */
export function buildDependencyGraph(instructionData) {
  const nodes = buildDependencyNodes(instructionData);
  const edges = buildDependencyEdges(nodes, instructionData);
  return { nodes, edges };
}

/**
 * Get node ID for a specific PE location and index_per_ii
 * Used for linking PE tiles to graph nodes
 * @param {Array} nodes - Array of graph nodes
 * @param {number} col - PE column
 * @param {number} row - PE row
 * @param {number} indexPerII - index_per_ii (animation slide)
 * @param {number} operationIndex - Operation index (default 0)
 * @returns {string | null} Node ID or null if not found
 */
export function getNodeIdForPE(nodes, col, row, indexPerII, operationIndex = 0) {
  const matching = nodes.filter(
    (n) => n.pe.col === col && n.pe.row === row && n.indexPerII === indexPerII
  );

  if (matching.length > operationIndex) {
    return matching[operationIndex].id;
  }

  return matching.length > 0 ? matching[0].id : null;
}

/**
 * Find the node ID that matches a given instruction
 * @param {Array} nodes - Array of graph nodes
 * @param {object} instruction - Instruction object with column, row, index_per_ii, operations
 * @returns {string | null} Node ID or null if not found
 */
export function findNodeIdForInstruction(nodes, instruction) {
  if (!instruction) return null;

  const opcode = instruction.operations?.[0]?.opcode;
  if (!opcode) return null;

  // Look for exact match first
  const exactMatch = nodes.find(
    (n) =>
      n.pe.col === instruction.column &&
      n.pe.row === instruction.row &&
      n.indexPerII === instruction.index_per_ii &&
      n.opcode === opcode
  );

  if (exactMatch) return exactMatch.id;

  // Fall back to PE + index_per_ii match
  const peMatch = nodes.find(
    (n) =>
      n.pe.col === instruction.column &&
      n.pe.row === instruction.row &&
      n.indexPerII === instruction.index_per_ii
  );

  return peMatch?.id || null;
}
