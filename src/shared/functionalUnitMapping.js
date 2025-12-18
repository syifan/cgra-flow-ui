/**
 * Functional Unit to Instruction Mapping
 *
 * This module defines the mapping between hardware function units and
 * the MLIR instructions they support. Function units represent actual
 * hardware resources in the CGRA, while instructions are the operations
 * that can be executed on those units.
 */

// Function unit categories for UI organization
// These names match the backend's expected operation names (kFunctionUnitsToOperations)
export const FUNCTIONAL_UNIT_CATEGORIES = {
  'Arithmetic': ['constant', 'add', 'mul', 'div'],
  'Floating Point': ['fadd', 'fmul', 'fdiv'],
  'Memory': ['mem', 'mem_indexed', 'alloca'],
  'Logic': ['logic', 'cmp', 'sel'],
  'Type Conversion': ['type_conv'],
  'Vector': ['vfmul'],
  'Fused': ['fadd_fadd', 'fmul_fadd'],
  'Shift': ['shift'],
  'Control Flow': ['return', 'phi', 'loop_control'],
  'Predicate': ['grant']
};

// Complete mapping from function unit to backend instructions
// Must match kFunctionUnitsToOperations in Architecture.cpp
export const FUNCTION_UNIT_TO_INSTRUCTIONS = {
  // Arithmetic operations
  constant: ['constant'],
  add: ['add', 'sub'],
  mul: ['mul'],
  div: ['div', 'rem'],

  // Floating-point operations
  fadd: ['fadd', 'fsub'],
  fmul: ['fmul'],
  fdiv: ['fdiv'],

  // Memory operations
  mem: ['load', 'store'],
  mem_indexed: ['load_indexed', 'store_indexed'],
  alloca: ['alloca'],

  // Logical operations
  logic: ['or', 'not', 'and', 'xor'],
  cmp: ['icmp', 'fcmp'],
  sel: ['sel'],

  // Type conversion operations
  type_conv: ['cast', 'sext', 'zext'],

  // Vector operations
  vfmul: ['vfmul'],

  // Fused operations
  fadd_fadd: ['fadd_fadd'],
  fmul_fadd: ['fmul_fadd'],

  // Shift operations
  shift: ['shl'],

  // Control flow operations
  return: ['return'],
  phi: ['phi'],
  loop_control: ['loop_control'],

  // Predicate operations
  grant: ['grant_predicate', 'grant_once', 'grant_always']
};

// Metadata for UI display
export const FUNCTION_UNIT_METADATA = {
  // Integer Arithmetic
  add: { displayName: 'Integer ALU', description: 'Integer arithmetic (add, sub)' },
  mul: { displayName: 'Integer Multiplier', description: 'Integer multiplication' },
  div: { displayName: 'Integer Divider', description: 'Integer division and remainder' },
  shift: { displayName: 'Shifter', description: 'Bit shift operations' },

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

  // Type
  type_conv: { displayName: 'Type Converter', description: 'Type casting/extension' },
  constant: { displayName: 'Constant Unit', description: 'Constant generation' },

  // Control
  phi: { displayName: 'Phi Node', description: 'SSA merge point' },
  return: { displayName: 'Return Unit', description: 'Function return' },
  loop_control: { displayName: 'Loop Control', description: 'Loop iteration control' },

  // Grants
  grant: { displayName: 'Grant Unit', description: 'Token/permission management' },

  // Vector
  vfmul: { displayName: 'Vector FP Mul', description: 'Vector FP multiply' }
};

// Default enabled function units for new PEs (all enabled by default)
export const DEFAULT_FUNCTION_UNITS = {
  // Integer Arithmetic
  add: true,
  mul: true,
  div: true,
  shift: true,

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

  // Type
  type_conv: true,
  constant: true,

  // Control
  phi: true,
  return: true,
  loop_control: true,

  // Grants
  grant: true,

  // Vector
  vfmul: true
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
    if (enabled === true && FUNCTION_UNIT_TO_INSTRUCTIONS[unitName]) {
      instructions.push(...FUNCTION_UNIT_TO_INSTRUCTIONS[unitName]);
    }
  }

  return instructions;
}

/**
 * Convert function units configuration to a list of enabled operation names.
 * These operation names are what the backend expects (e.g., 'add', 'logic', 'mem').
 * @param {Object} functionalUnits - Object with function unit names as keys, booleans as values
 * @returns {Array<string>} - Array of enabled operation names for the backend
 */
export function functionUnitsToOperationNames(functionalUnits) {
  if (!functionalUnits || typeof functionalUnits !== 'object') {
    return [];
  }

  const operations = [];

  for (const [unitName, enabled] of Object.entries(functionalUnits)) {
    // Only include if enabled and it's a valid function unit
    if (enabled === true && FUNCTION_UNIT_TO_INSTRUCTIONS[unitName]) {
      operations.push(unitName);
    }
  }

  return operations;
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
