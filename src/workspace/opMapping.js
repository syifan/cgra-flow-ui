// Shared operation utilities between frontend checks and converter.
// Uses the shared functional unit to instruction mapping.

import {
  functionUnitsToInstructions,
  getAllInstructions,
  getAllFunctionUnits,
  FUNCTION_UNIT_TO_INSTRUCTIONS
} from '../shared/functionalUnitMapping.js';

// All supported instructions (derived from function unit mapping)
export const SUPPORTED_OPERATIONS = new Set(getAllInstructions());

// All supported function units
export const SUPPORTED_FUNCTION_UNITS = new Set(getAllFunctionUnits());

// Re-export for convenience
export { FUNCTION_UNIT_TO_INSTRUCTIONS };

/**
 * Converts function units configuration to a list of instruction names.
 * @param {Object} tileFunctionalUnits - Object with function unit names as keys, booleans as values
 * @returns {Array<string>} - Array of instruction names
 */
export const functionalUnitsToOps = (tileFunctionalUnits = {}) => {
  return functionUnitsToInstructions(tileFunctionalUnits || {});
};

/**
 * Collects all enabled instructions from an architecture.
 * @param {Object} architecture - The architecture object
 * @returns {Set<string>} - Set of enabled instruction names
 */
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

/**
 * Collects all enabled function units from an architecture.
 * @param {Object} architecture - The architecture object
 * @returns {Set<string>} - Set of enabled function unit names
 */
export const collectArchitectureFunctionUnits = (architecture) => {
  const units = new Set();
  const cgras = architecture?.CGRAs || [];
  cgras.forEach((cgra) => {
    (cgra?.PEs || []).forEach((pe) => {
      if (pe?.disabled) return;
      const tileFunctionalUnits = pe.tileFunctionalUnits || {};
      Object.entries(tileFunctionalUnits).forEach(([unitName, enabled]) => {
        if (enabled && SUPPORTED_FUNCTION_UNITS.has(unitName)) {
          units.add(unitName);
        }
      });
    });
  });
  return units;
};
