/**
 * Functional Unit to Instruction Mapping
 *
 * This module defines the mapping between hardware function units and
 * the MLIR instructions they support. Function units represent actual
 * hardware resources in the CGRA, while instructions are the operations
 * that can be executed on those units.
 */

// Function unit categories for UI organization
export const FUNCTIONAL_UNIT_CATEGORIES = {
  'Integer Arithmetic': ['alu', 'mul', 'div', 'shift', 'mac'],
  'Logic': ['logic', 'cmp', 'sel'],
  'Floating Point': ['fadd', 'fmul', 'fdiv', 'fmul_fadd', 'fadd_fadd'],
  'Memory': ['mem', 'mem_indexed', 'alloca', 'gep', 'memset'],
  'Type': ['type_conv', 'constant'],
  'Control': ['phi', 'return', 'branch', 'loop_control'],
  'Data Movement': ['data_mov', 'ctrl_mov', 'reserve', 'data'],
  'Grants': ['grant'],
  'Vector': ['vadd', 'vmul', 'vfmul', 'vector']
};

// Complete mapping from function unit to backend instructions
export const FUNCTION_UNIT_TO_INSTRUCTIONS = {
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

// Metadata for UI display
export const FUNCTION_UNIT_METADATA = {
  // Integer Arithmetic
  alu: { displayName: 'Integer ALU', description: 'Integer arithmetic (add, sub)' },
  mul: { displayName: 'Integer Multiplier', description: 'Integer multiplication' },
  div: { displayName: 'Integer Divider', description: 'Integer division and remainder' },
  shift: { displayName: 'Shifter', description: 'Bit shift operations' },
  mac: { displayName: 'MAC Unit', description: 'Multiply-accumulate' },

  // Logic
  logic: { displayName: 'Logic Unit', description: 'Bitwise logic (and, or, xor, not)' },
  cmp: { displayName: 'Comparator', description: 'Integer and FP comparisons' },
  sel: { displayName: 'Selector/Mux', description: 'Data selection' },

  // Floating Point
  fadd: { displayName: 'FP Adder', description: 'Floating-point add/sub' },
  fmul: { displayName: 'FP Multiplier', description: 'Floating-point multiply' },
  fdiv: { displayName: 'FP Divider', description: 'Floating-point division' },
  fmul_fadd: { displayName: 'FMA Unit', description: 'Fused multiply-add' },
  fadd_fadd: { displayName: 'Dual FP Add', description: 'Fused add-add' },

  // Memory
  mem: { displayName: 'Memory Unit', description: 'Load/store operations' },
  mem_indexed: { displayName: 'Indexed Memory', description: 'Indexed memory access' },
  alloca: { displayName: 'Stack Allocator', description: 'Stack allocation' },
  gep: { displayName: 'Address Calculator', description: 'Address computation (GEP)' },
  memset: { displayName: 'Memory Set', description: 'Memory initialization' },

  // Type
  type_conv: { displayName: 'Type Converter', description: 'Type casting/extension' },
  constant: { displayName: 'Constant Unit', description: 'Constant generation' },

  // Control
  phi: { displayName: 'Phi Node', description: 'SSA merge point' },
  return: { displayName: 'Return Unit', description: 'Function return' },
  branch: { displayName: 'Branch Unit', description: 'Control flow branching' },
  loop_control: { displayName: 'Loop Control', description: 'Loop iteration control' },

  // Data Movement
  data_mov: { displayName: 'Data Mover', description: 'Data transfer between PEs' },
  ctrl_mov: { displayName: 'Control Mover', description: 'Control signal routing' },
  reserve: { displayName: 'Reservation', description: 'Resource reservation' },
  data: { displayName: 'Data Channel', description: 'Data streaming' },

  // Grants
  grant: { displayName: 'Grant Unit', description: 'Token/permission management' },

  // Vector
  vadd: { displayName: 'Vector ALU', description: 'Vector addition' },
  vmul: { displayName: 'Vector Multiplier', description: 'Vector multiplication' },
  vfmul: { displayName: 'Vector FP Mul', description: 'Vector FP multiply' },
  vector: { displayName: 'Vector Generic', description: 'Generic vector ops' }
};

// Default enabled function units for new PEs (all enabled by default)
export const DEFAULT_FUNCTION_UNITS = {
  // Integer Arithmetic
  alu: true,
  mul: true,
  div: true,
  shift: true,
  mac: true,

  // Logic
  logic: true,
  cmp: true,
  sel: true,

  // Floating Point
  fadd: true,
  fmul: true,
  fdiv: true,
  fmul_fadd: true,
  fadd_fadd: true,

  // Memory
  mem: true,
  mem_indexed: true,
  alloca: true,
  gep: true,
  memset: true,

  // Type
  type_conv: true,
  constant: true,

  // Control
  phi: true,
  return: true,
  branch: true,
  loop_control: true,

  // Data Movement
  data_mov: true,
  ctrl_mov: true,
  reserve: true,
  data: true,

  // Grants
  grant: true,

  // Vector
  vadd: true,
  vmul: true,
  vfmul: true,
  vector: true
};

/**
 * Convert function units configuration to a list of enabled instructions.
 * @param {Object} functionalUnits - Object with function unit names as keys, booleans as values
 * @returns {Array<string>} - Array of enabled instruction names
 */
export function functionUnitsToInstructions(functionalUnits) {
  if (!functionalUnits || typeof functionalUnits !== 'object') {
    return [];
  }

  const instructions = [];

  for (const [unitName, enabled] of Object.entries(functionalUnits)) {
    if (enabled && FUNCTION_UNIT_TO_INSTRUCTIONS[unitName]) {
      instructions.push(...FUNCTION_UNIT_TO_INSTRUCTIONS[unitName]);
    }
  }

  return instructions;
}

/**
 * Get all supported instructions as a flat array.
 * @returns {Array<string>} - Array of all instruction names
 */
export function getAllInstructions() {
  const allInstructions = new Set();
  for (const instructions of Object.values(FUNCTION_UNIT_TO_INSTRUCTIONS)) {
    for (const instruction of instructions) {
      allInstructions.add(instruction);
    }
  }
  return Array.from(allInstructions);
}

/**
 * Get all function unit names.
 * @returns {Array<string>} - Array of function unit names
 */
export function getAllFunctionUnits() {
  return Object.keys(FUNCTION_UNIT_TO_INSTRUCTIONS);
}

/**
 * Get the function unit that supports a given instruction.
 * @param {string} instruction - The instruction name
 * @returns {string|null} - The function unit name, or null if not found
 */
export function getUnitForInstruction(instruction) {
  for (const [unit, instructions] of Object.entries(FUNCTION_UNIT_TO_INSTRUCTIONS)) {
    if (instructions.includes(instruction)) {
      return unit;
    }
  }
  return null;
}
