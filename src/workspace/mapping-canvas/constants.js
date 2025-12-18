/**
 * Constants for the mapping instruction grid visualization
 */

// PE cell sizes
export const PE_SIZE = 60;
export const PE_GAP = 12;
export const GRID_PADDING = 20;

// PE colors
export const PE_ACTIVE_FILL = 'rgba(59, 130, 246, 0.9)';
export const PE_INACTIVE_FILL = 'rgba(148, 163, 184, 0.2)';
export const PE_STROKE = '#1d4ed8';
export const PE_INACTIVE_STROKE = 'rgba(148, 163, 184, 0.4)';

// Label styling
export const PE_LABEL_FILL = '#e2e8f0';
export const PE_LABEL_INACTIVE_FILL = 'rgba(148, 163, 184, 0.5)';
export const PE_LABEL_FONT_SIZE = 9;
export const PE_OPCODE_FONT_SIZE = 8;

// Opcode color mapping - distinct colors for different operation types
export const OPCODE_COLORS = {
  // Memory operations - green family
  LOAD: '#22c55e',
  STORE: '#16a34a',
  GEP: '#06b6d4',

  // Arithmetic operations - blue family
  ADD: '#3b82f6',
  SUB: '#2563eb',
  MUL: '#8b5cf6',
  DIV: '#7c3aed',

  // Logic operations - teal family
  ICMP_EQ: '#14b8a6',
  ICMP_NE: '#0d9488',
  ICMP_LT: '#0f766e',
  ICMP_LE: '#115e59',
  ICMP_GT: '#134e4a',
  ICMP_GE: '#064e3b',
  NOT: '#f97316',
  AND: '#ea580c',
  OR: '#c2410c',
  XOR: '#9a3412',

  // Control flow operations - red/pink family
  PHI: '#f59e0b',
  GRANT_ONCE: '#ef4444',
  GRANT_PREDICATE: '#ec4899',
  RETURN: '#dc2626',

  // Data movement - gray/slate family
  DATA_MOV: '#64748b',
  CTRL_MOV: '#475569',

  // Default
  default: '#94a3b8'
};

/**
 * Get color for an opcode
 * @param {string} opcode - The opcode string
 * @returns {string} - The hex color
 */
export function getOpcodeColor(opcode) {
  return OPCODE_COLORS[opcode] || OPCODE_COLORS.default;
}

// Data flow arrow colors - separate colors for input vs output
export const FLOW_COLORS = {
  // Input arrows (data coming INTO a PE) - blue/cyan family
  input: '#06b6d4',    // cyan
  // Output arrows (data going OUT of a PE) - orange/amber family
  output: '#f59e0b',   // amber
  // Fallback
  default: '#94a3b8',
  // Dependency graph edge colors (bright for dark backgrounds)
  BLUE: '#60a5fa',     // bright blue for register edges
  RED: '#f87171'       // bright red for directional edges
};

/**
 * Get color for a data flow based on direction type
 * @param {string} flowType - 'input' or 'output'
 * @returns {string} - The hex color
 */
export function getFlowColor(flowType) {
  return FLOW_COLORS[flowType] || FLOW_COLORS.default;
}

// Arrow styling
export const ARROW_STROKE_WIDTH = 2;
export const ARROW_HEAD_SIZE = 6;
export const ARROW_OPACITY = 0.7;

// Zoom constraints
export const ZOOM_MIN = 0.5;
export const ZOOM_MAX = 3;

// Animation timing
export const DEFAULT_ANIMATION_SPEED = 1000; // ms per slide (index_per_ii)
