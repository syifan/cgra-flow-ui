// Shared operation utilities between frontend checks and converter.
// Uses MLIR operation names directly - no mapping needed.

// All supported MLIR operations that can be configured as functional units.
export const SUPPORTED_OPERATIONS = new Set([
  // Arithmetic
  'add', 'mul', 'div', 'rem', 'shl',
  // Floating point
  'fadd', 'fmul', 'fdiv', 'fmul_fadd',
  // Memory
  'load', 'store', 'gep', 'memset',
  // Control
  'phi', 'sel', 'not', 'icmp', 'return', 'br', 'cond_br',
  // Data movement
  'data_mov', 'ctrl_mov', 'reserve', 'data',
  // Grants
  'grant_once', 'grant_predicate',
  // Type conversion
  'cast', 'zext', 'sext',
  // Other
  'constant', 'mac',
  // Vector
  'vadd', 'vmul', 'vector'
]);

export const functionalUnitsToOps = (tileFunctionalUnits = {}) => {
  const ops = [];
  Object.entries(tileFunctionalUnits || {}).forEach(([key, enabled]) => {
    if (enabled && SUPPORTED_OPERATIONS.has(key)) {
      ops.push(key);
    }
  });
  return ops;
};

export const collectArchitectureOps = (architecture) => {
  const ops = new Set();
  const cgras = architecture?.CGRAs || [];
  cgras.forEach((cgra) => {
    (cgra?.PEs || []).forEach((pe) => {
      if (pe?.disabled) return;
      functionalUnitsToOps(pe.tileFunctionalUnits).forEach((op) => ops.add(op));
    });
  });
  return ops;
};
