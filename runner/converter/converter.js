import yaml from 'js-yaml';

/**
 * Maps functional unit booleans to operation string list
 * @param {Object} tileFunctionalUnits - Object with operation names as keys, booleans as values
 * @returns {Array<string>} - Array of enabled operation names
 */
function functionalUnitsToOperations(tileFunctionalUnits) {
  if (!tileFunctionalUnits || typeof tileFunctionalUnits !== 'object') {
    return [];
  }

  // Map UI functional unit names to YAML operation names
  const operationMap = {
    phi: 'phi',
    shift: 'shift',
    select: 'select',
    mac: 'mac',
    return: 'return',
    logic: 'logic',
    load: 'load',
    store: 'store',
    compare: 'compare',
    add: 'add',
    mul: 'mul'
  };

  const operations = [];

  for (const [key, value] of Object.entries(tileFunctionalUnits)) {
    if (value === true && operationMap[key]) {
      operations.push(operationMap[key]);
    }
  }

  return operations;
}

/**
 * Gets the most common set of operations from all PEs to use as default
 * @param {Array} cgras - Array of CGRA objects
 * @returns {Array<string>} - Most common operations list
 */
function deriveDefaultOperations(cgras) {
  const operationSets = new Map();

  // Collect all operation sets
  cgras.forEach(cgra => {
    if (!Array.isArray(cgra?.PEs)) return;

    cgra.PEs.forEach(pe => {
      if (pe.disabled) return;

      const ops = functionalUnitsToOperations(pe.tileFunctionalUnits);
      const key = JSON.stringify(ops.sort());
      operationSets.set(key, (operationSets.get(key) || 0) + 1);
    });
  });

  // Find most common set
  let maxCount = 0;
  let commonOps = [];

  for (const [opsJson, count] of operationSets.entries()) {
    if (count > maxCount) {
      maxCount = count;
      commonOps = JSON.parse(opsJson);
    }
  }

  // If no common set, use comprehensive default
  if (commonOps.length === 0) {
    commonOps = ['add', 'mul', 'sub', 'div', 'rem', 'fadd', 'fmul', 'fsub', 'fdiv',
                 'or', 'not', 'icmp', 'fcmp', 'sel', 'cast', 'sext', 'zext', 'shl',
                 'data_mov', 'ctrl_mov', 'reserve', 'grant_predicate', 'grant_once',
                 'grant_always', 'loop_control', 'phi', 'constant', 'load', 'store',
                 'return', 'load_indexed', 'store_indexed'];
  }

  return commonOps;
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
function generateTileOverrides(cgras, defaultOperations) {
  const overrides = [];

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
      const tileOps = functionalUnitsToOperations(pe.tileFunctionalUnits);
      if (!operationsEqual(tileOps, defaultOperations)) {
        overrides.push({
          cgra_x: cgraX,
          cgra_y: cgraY,
          tile_x: tileX,
          tile_y: tileY,
          operations: tileOps,
          existence: true
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
  const defaultOperations = deriveDefaultOperations(arch.CGRAs || []);

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
      rows: firstCgra.perCgraRows ?? 4,
      columns: firstCgra.perCgraColumns ?? 4,
      ctrl_mem_items: firstCgra.configMemoryEntries ?? 20,
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

    tile_overrides: generateTileOverrides(arch.CGRAs || [], defaultOperations),

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
