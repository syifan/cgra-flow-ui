import yaml from 'js-yaml';

function positiveInt(value, fallback = null) {
  const numeric = typeof value === 'number' ? value : Number(value);
  if (Number.isFinite(numeric) && numeric > 0) {
    return Math.floor(numeric);
  }

  return fallback;
}

function coordinate(value, fallback = 0) {
  const numeric = typeof value === 'number' ? value : Number(value);
  if (Number.isFinite(numeric)) {
    return Math.floor(numeric);
  }

  return fallback;
}

function cgraDimensionKey(rows, columns) {
  return `${rows}x${columns}`;
}

function deriveCgraSizing(arch) {
  const fallbackRows = positiveInt(arch.cgra_defaults?.rows, 2);
  const fallbackColumns = positiveInt(arch.cgra_defaults?.columns, 2);
  const cgras = Array.isArray(arch.CGRAs) ? arch.CGRAs : [];

  const dimensions = cgras.map((cgra, index) => ({
    index,
    cgra_x: coordinate(cgra?.x ?? cgra?.cgra_x, 0),
    cgra_y: coordinate(cgra?.y ?? cgra?.cgra_y, 0),
    rows: positiveInt(cgra?.perCgraRows ?? cgra?.rows, fallbackRows),
    columns: positiveInt(cgra?.perCgraColumns ?? cgra?.columns, fallbackColumns)
  }));

  if (dimensions.length === 0) {
    return {
      rows: fallbackRows,
      columns: fallbackColumns,
      overrides: []
    };
  }

  const dimensionCounts = new Map();
  dimensions.forEach((dimension) => {
    const key = cgraDimensionKey(dimension.rows, dimension.columns);
    const existing = dimensionCounts.get(key);
    if (existing) {
      existing.count += 1;
      return;
    }

    dimensionCounts.set(key, {
      rows: dimension.rows,
      columns: dimension.columns,
      count: 1,
      firstIndex: dimension.index
    });
  });

  const defaults = [...dimensionCounts.values()].sort((a, b) => (
    b.count - a.count || a.firstIndex - b.firstIndex
  ))[0];

  const overrides = dimensions
    .filter((dimension) => (
      dimension.rows !== defaults.rows || dimension.columns !== defaults.columns
    ))
    .map((dimension) => ({
      cgra_x: dimension.cgra_x,
      cgra_y: dimension.cgra_y,
      rows: dimension.rows,
      columns: dimension.columns
    }));

  return {
    rows: defaults.rows,
    columns: defaults.columns,
    overrides
  };
}

/**
 * Convert architecture JSON to VectorCGRA-compatible YAML object structure.
 * This keeps per-CGRA tile dimensions faithful by representing heterogeneity
 * through cgra_overrides instead of collapsing everything to the first CGRA.
 */
export function convertArchitectureToVectorCGRAYamlObject(architectureData) {
  console.log(`  ✅ Converting architecture to VectorCGRA-compatible YAML object structure`);
  // architectureData is project.data = { version, architecture: { CGRAs, multiCgraRows, ... } }
  // The frontend stores architecture with camelCase fields from handleApplyAIConfig.
  const arch = architectureData.architecture || architectureData;

  // Multi-CGRA dimensions
  // Frontend stores: arch.multiCgraRows / arch.multiCgraColumns (from handleApplyAIConfig)
  let multiRows = arch.multiCgraRows
    ?? arch.multi_cgra_defaults?.rows
    ?? 1;
  let multiCols = arch.multiCgraColumns
    ?? arch.multi_cgra_defaults?.columns
    ?? 1;

  // VectorCGRA ArchParser requires: cgra_rows <= cgra_columns AND num_cgras is power-of-2
  // Enforce rows <= columns by swapping if needed
  if (multiRows > multiCols) {
    [multiRows, multiCols] = [multiCols, multiRows];
  }
  // Round total CGRAs up to the nearest power-of-2
  let numCgras = multiRows * multiCols;
  if (numCgras > 0 && (numCgras & (numCgras - 1)) !== 0) {
    // next power of 2
    numCgras = 1 << Math.ceil(Math.log2(numCgras));
    multiCols = numCgras / multiRows;
  }

  // The test harness (MeshMultiCgraTemplateRTL_test.py) hard-codes dst_cgra_id = 2,
  // which requires CgraIdType = mk_bits(clog2(num_cgras)) to be at least Bits2
  // (i.e. num_cgras >= 4). Enforce a minimum 2x2 multi-CGRA grid.
  if (multiRows * multiCols < 4) {
    multiRows = 2;
    multiCols = 2;
  }

  // Per-CGRA dimensions
  const firstCgra = (arch.CGRAs || [])[0] || {};
  const cgraSizing = deriveCgraSizing(arch);

  // configMemSize MUST be 16; the test (MeshMultiCgraTemplateRTL_test.py) hardcodes
  // ctrl_mem_size = 16 when creating all payload types (CtrlAddrType = mk_bits(clog2(16)) = Bits4).
  // id2ctrlMemSize_map in the test is read from our YAML and passed to TileRTL, which creates
  // ctrl_mem with clog2(configMemSize) address bits. Both must match, so configMemSize must be 16.
  const configMemSize = 16;

  // Tile FU types
  // The frontend stores FU enablement as tileFunctionalUnits: { alu: true, mul: false, ... }
  // VectorCGRA's fu_map uses different names, notably 'add' instead of 'alu'.
  // We translate frontend FU names to VectorCGRA fu_map keys and filter out unsupported ones.
  //
  // VectorCGRA fu_map valid keys (from CgraTemplateRTL.py):
  //   add, mul, div, fadd, fmul, fdiv, logic, cmp, sel, type_conv, vfmul,
  //   fadd_fadd, fmul_fadd, grant, loop_control, phi, constant, mem, return,
  //   mem_indexed, alloca, shift
  const FRONTEND_TO_VECTORCGRA_FU = {
    alu: 'add',          // frontend 'alu' (add/sub) -> VectorCGRA 'add' (AdderRTL)
    mul: 'mul',
    div: 'div',
    shift: 'shift',
    logic: 'logic',
    cmp: 'cmp',
    sel: 'sel',
    fadd: 'fadd',
    fmul: 'fmul',
    fdiv: 'fdiv',
    fmul_fadd: 'fmul_fadd',
    fadd_fadd: 'fadd_fadd',
    mem: 'mem',
    mem_indexed: 'mem_indexed',
    alloca: 'alloca',
    type_conv: 'type_conv',
    constant: 'constant',
    phi: 'phi',
    return: 'return',
    loop_control: 'loop_control',
    grant: 'grant',
    vfmul: 'vfmul',
    // mac, gep, memset, branch, data_mov, ctrl_mov, reserve, data, vadd, vmul, vector
    // are not in VectorCGRA's fu_map; omit them
  };

  let fuTypes;
  const firstPe = firstCgra.PEs?.[0];
  if (firstPe?.tileFunctionalUnits && typeof firstPe.tileFunctionalUnits === 'object') {
    const translated = new Set();
    for (const [fu, enabled] of Object.entries(firstPe.tileFunctionalUnits)) {
      if (enabled && FRONTEND_TO_VECTORCGRA_FU[fu]) {
        translated.add(FRONTEND_TO_VECTORCGRA_FU[fu]);
      }
    }
    fuTypes = Array.from(translated);
  }
  if (!fuTypes || fuTypes.length === 0) {
    // Default: full VectorCGRA-compatible FU set (matches reference arch.yaml exactly)
    fuTypes = ['add', 'mul', 'div', 'fadd', 'fmul', 'fdiv', 'logic', 'cmp', 'sel',
               'type_conv', 'vfmul', 'fadd_fadd', 'fmul_fadd', 'grant', 'loop_control',
               'phi', 'constant', 'mem', 'return', 'mem_indexed', 'alloca', 'shift'];
  }

  // Build VectorCGRA-compatible YAML structure
  const vectorCgraYaml = {
    architecture: {
      name: 'NeuraMultiCgra',
      version: '1.0',
      checkpoint: 'pbk'
    },
    multi_cgra_defaults: {
      base_topology: arch.multi_cgra_defaults?.base_topology || 'mesh',
      rows: multiRows,
      columns: multiCols,
      memory: {
        capacity: arch.multi_cgra_defaults?.memory?.capacity || 256,
        'data bitwidth': arch.multi_cgra_defaults?.memory?.['data bitwidth'] || 64,
        'vector lanes': arch.multi_cgra_defaults?.memory?.['vector lanes'] || 1
      }
    },
    cgra_defaults: {
      rows: cgraSizing.rows,
      columns: cgraSizing.columns,
      configMemSize,
      'per bank sram': firstCgra.sramBanks ?? arch.cgra_defaults?.['per bank sram'] ?? 8
    },
    tile_defaults: {
      num_registers: arch.tile_defaults?.num_registers || 16,
      fu_types: fuTypes
    }
  };

  if (cgraSizing.overrides.length > 0) {
    vectorCgraYaml.cgra_overrides = cgraSizing.overrides;
  } else if (!Array.isArray(arch.CGRAs) && arch.cgra_overrides?.length > 0) {
    vectorCgraYaml.cgra_overrides = arch.cgra_overrides;
  }

  // Add overrides if present
  if (arch.link_overrides?.length > 0) {
    vectorCgraYaml.link_overrides = arch.link_overrides;
  }
  if (arch.tile_overrides?.length > 0) {
    vectorCgraYaml.tile_overrides = arch.tile_overrides;
  }

  return vectorCgraYaml;
}

/**
 * Convert architecture JSON to VectorCGRA-compatible YAML format.
 * This ensures the YAML matches VectorCGRA's expected schema.
 */
export function convertArchitectureToVectorCGRAYaml(architectureData) {
  return yaml.dump(convertArchitectureToVectorCGRAYamlObject(architectureData), {
    sortKeys: false,
    defaultFlowStyle: false,
    lineWidth: -1
  });
}
