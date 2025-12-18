/**
 * Functional Unit to Instruction Mapping for Runner
 *
 * This is a copy of the shared mapping for use in the runner service.
 * Keep in sync with src/shared/functionalUnitMapping.js
 */

// Complete mapping from function unit to backend instructions
const FUNCTION_UNIT_TO_INSTRUCTIONS = {
  // Integer Arithmetic
  alu: ['add', 'sub'],
  mul: ['mul'],
  div: ['div', 'rem'],
  shift: ['shl'],
  mac: ['mac'],

  // Logic
  logic: ['or', 'not', 'and', 'xor'],
  cmp: ['icmp', 'fcmp'],
  sel: ['sel'],

  // Floating Point
  fadd: ['fadd', 'fsub'],
  fmul: ['fmul'],
  fdiv: ['fdiv'],
  fmul_fadd: ['fmul_fadd'],
  fadd_fadd: ['fadd_fadd'],

  // Memory
  mem: ['load', 'store'],
  mem_indexed: ['load_indexed', 'store_indexed'],
  alloca: ['alloca'],
  gep: ['gep'],
  memset: ['memset'],

  // Type
  type_conv: ['cast', 'sext', 'zext'],
  constant: ['constant'],

  // Control
  phi: ['phi'],
  return: ['return'],
  branch: ['br', 'cond_br'],
  loop_control: ['loop_control'],

  // Data Movement
  data_mov: ['data_mov'],
  ctrl_mov: ['ctrl_mov'],
  reserve: ['reserve'],
  data: ['data'],

  // Grants
  grant: ['grant_predicate', 'grant_once', 'grant_always'],

  // Vector
  vadd: ['vadd'],
  vmul: ['vmul'],
  vfmul: ['vfmul'],
  vector: ['vector']
};

/**
 * Get all supported instructions as a Set.
 * @returns {Set<string>} - Set of all instruction names
 */
function getAllInstructions() {
  const allInstructions = new Set();
  for (const instructions of Object.values(FUNCTION_UNIT_TO_INSTRUCTIONS)) {
    for (const instruction of instructions) {
      allInstructions.add(instruction);
    }
  }
  return allInstructions;
}

/**
 * Convert function units configuration to a list of enabled instructions.
 * @param {Object} functionalUnits - Object with function unit names as keys, booleans as values
 * @returns {Array<string>} - Array of enabled instruction names
 */
function functionUnitsToInstructions(functionalUnits) {
  if (!functionalUnits || typeof functionalUnits !== 'object') {
    return [];
  }

  const instructions = [];

  for (const [unitName, enabled] of Object.entries(functionalUnits)) {
    if (enabled === true && FUNCTION_UNIT_TO_INSTRUCTIONS[unitName]) {
      instructions.push(...FUNCTION_UNIT_TO_INSTRUCTIONS[unitName]);
    }
  }

  return instructions;
}

export {
  FUNCTION_UNIT_TO_INSTRUCTIONS,
  getAllInstructions,
  functionUnitsToInstructions
};
