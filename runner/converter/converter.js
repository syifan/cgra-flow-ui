import yaml from 'js-yaml';
import { functionUnitsToInstructions, getAllInstructions } from '../../src/shared/functionalUnitMapping.js';

// Default values used when not specified in the input JSON
const DEFAULT_PER_CGRA_ROWS = 4;
const DEFAULT_PER_CGRA_COLUMNS = 4;
const DEFAULT_CTRL_MEM_ITEMS = 20;

// All supported instructions (derived from function unit mapping)
const SUPPORTED_OPERATIONS = getAllInstructions();

function normalizeOperations(operations = []) {
  const opSet = new Set(operations);
  return Array.from(opSet);
}

/**
 * Maps functional unit booleans to operation string list.
 * Uses the function unit to instruction mapping.
 * @param {Object} tileFunctionalUnits - Object with function unit names as keys, booleans as values
 * @returns {Array<string>} - Array of enabled instruction names
 */
function functionalUnitsToOperations(tileFunctionalUnits) {
  if (!tileFunctionalUnits || typeof tileFunctionalUnits !== 'object') {
    return [];
  }

  return functionUnitsToInstructions(tileFunctionalUnits);
}

/**
 * Gets the union (superset) of all operations from all enabled PEs.
 * Uses the superset because the dataflow mapper does not support tile_overrides
 * (any tile_override triggers a segfault in mlir-neura-opt). All tiles therefore
 * share a single operation set defined in tile_defaults.
 * @param {Array} cgras - Array of CGRA objects
 * @returns {Array<string>} - Union of all operations across enabled tiles
 */
function deriveDefaultOperations(cgras) {
  const allOps = new Set();

  // Collect union of all operations from enabled tiles
  cgras.forEach(cgra => {
    if (!Array.isArray(cgra?.PEs)) return;

    cgra.PEs.forEach(pe => {
      if (pe.disabled) return;

      const ops = functionalUnitsToOperations(pe.tileFunctionalUnits);
      ops.forEach(op => allOps.add(op));
    });
  });

  // If no operations found, use all supported operations as default
  if (allOps.size === 0) {
    return [...SUPPORTED_OPERATIONS];
  }

  return Array.from(allOps);
}

/**
 * Checks if two operation lists are equal
 * @param {Array<string>} ops1
 * @param {Array<string>} ops2
 * @returns {boolean}
 */
function operationsEqual(ops1, ops2) {
  if (ops1.length !== ops2.length) return false;
  const sorted1 = [...ops1].sort();
  const sorted2 = [...ops2].sort();
  return JSON.stringify(sorted1) === JSON.stringify(sorted2);
}

/**
 * Generates tile overrides for disabled or customized tiles
 * @param {Array} cgras - Array of CGRA objects
 * @param {Array<string>} defaultOperations - Default operations list
 * @returns {Array} - Array of tile override objects
 */
function generateTileOverrides(cgras, defaultOperations, normalizeOps = ops => ops) {
  const overrides = [];
  const normalizedDefault = normalizeOps(defaultOperations || []);

  cgras.forEach(cgra => {
    if (!Array.isArray(cgra?.PEs)) return;

    const cgraX = cgra.x ?? 0;
    const cgraY = cgra.y ?? 0;

    cgra.PEs.forEach(pe => {
      const tileX = pe.x ?? 0;
      const tileY = pe.y ?? 0;

      // Check if tile is disabled
      if (pe.disabled === true) {
        overrides.push({
          cgra_x: cgraX,
          cgra_y: cgraY,
          tile_x: tileX,
          tile_y: tileY,
          existence: false
        });
        return;
      }

      // Check if tile has custom operations
      const tileOps = normalizeOps(
        functionalUnitsToOperations(pe.tileFunctionalUnits)
      );
      if (!operationsEqual(tileOps, normalizedDefault)) {
        overrides.push({
          cgra_x: cgraX,
          cgra_y: cgraY,
          tile_x: tileX,
          tile_y: tileY,
          operations: tileOps
        });
      }
    });
  });

  return overrides;
}

/**
 * Converts CGRA Flow UI JSON architecture to dataflow YAML format
 * @param {Object} jsonArchitecture - The JSON architecture from the UI
 * @returns {Object} - YAML-compatible object structure
 */
export function convertJsonToYaml(jsonArchitecture) {
  const arch = jsonArchitecture?.architecture;

  if (!arch) {
    throw new Error('Invalid architecture: missing architecture object');
  }

  // Get first CGRA as template for defaults
  const firstCgra = Array.isArray(arch.CGRAs) && arch.CGRAs.length > 0
    ? arch.CGRAs[0]
    : {};

  // Derive default operations from all tiles
  const defaultOperations = normalizeOperations(
    deriveDefaultOperations(arch.CGRAs || [])
  );

  // Build the target YAML structure
  const yamlStructure = {
    architecture: {
      name: arch.name || 'NeuraMultiCgra',
      version: '1.0'
    },

    multi_cgra_defaults: {
      base_topology: (arch.interTopology || 'Mesh').toLowerCase(),
      rows: arch.multiCgraRows ?? 1,
      columns: arch.multiCgraColumns ?? 1
    },

    per_cgra_defaults: {
      rows: firstCgra.perCgraRows ?? DEFAULT_PER_CGRA_ROWS,
      columns: firstCgra.perCgraColumns ?? DEFAULT_PER_CGRA_COLUMNS,
      ctrl_mem_items: firstCgra.configMemoryEntries ?? DEFAULT_CTRL_MEM_ITEMS,
      base_topology: (firstCgra.intraTopology || 'Mesh').toLowerCase()
    },

    tile_defaults: {
      num_registers: 32, // Default value, not in JSON
      operations: defaultOperations
    },

    link_defaults: {
      latency: 1, // Default value
      bandwidth: arch.dataBitwidth ?? 32
    },

    link_overrides: [],

    // tile_overrides intentionally left empty: the dataflow mapper
    // (mlir-neura-opt) segfaults when any tile_override is present.
    // Per-tile operation differences are absorbed by the superset in
    // tile_defaults so every tile appears fully capable to the mapper.
    tile_overrides: [],

    extensions: {
      crossbar: false
    },

    simulator: {
      execution_model: 'serial',
      logging: {
        enabled: true,
        file: 'output.log'
      },
      driver: {
        name: 'Driver',
        frequency: '1GHz'
      },
      device: {
        name: 'Device',
        frequency: '1GHz',
        bind_to_architecture: true
      }
    }
  };

  // Add memory configuration if present
  if (arch.totalSramKb != null) {
    yamlStructure.multi_cgra_defaults.memory = {
      capacity: arch.totalSramKb
    };
  }

  if (firstCgra.sramBanks != null) {
    yamlStructure.per_cgra_defaults.memory = {
      banks: firstCgra.sramBanks
    };
  }

  return yamlStructure;
}

/**
 * Converts CGRA Flow UI JSON to YAML string
 * @param {Object} jsonArchitecture - The JSON architecture from the UI
 * @returns {string} - YAML string
 */
export function convertJsonToYamlString(jsonArchitecture) {
  const yamlObj = convertJsonToYaml(jsonArchitecture);
  return yaml.dump(yamlObj, {
    indent: 2,
    lineWidth: -1, // Don't wrap lines
    noRefs: true,
    sortKeys: false
  });
}
