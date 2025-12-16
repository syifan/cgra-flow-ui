import { createDefaultPeConnections } from './peConnections.js';

const appData = (() => {
  const MULTI_CGRA_ROWS = 1;
  const MULTI_CGRA_COLUMNS = 1;
  const PE_ROWS = 4;
  const PE_COLUMNS = 4;

  // Functional units using MLIR operation names directly
  const functionalUnitDefaults = {
    // Arithmetic
    add: true,
    mul: true,
    div: false,
    rem: false,
    shl: true,
    // Floating point
    fadd: false,
    fmul: false,
    fdiv: false,
    fmul_fadd: false,
    // Memory
    load: true,
    store: true,
    gep: true,
    memset: false,
    // Control
    phi: true,
    sel: true,
    not: true,
    icmp: true,
    return: true,
    // Data movement
    data_mov: false,
    ctrl_mov: false,
    reserve: false,
    // Grants
    grant_once: true,
    grant_predicate: true,
    // Type conversion
    cast: false,
    zext: false,
    sext: false,
    // Other
    constant: false,
    mac: true,
    // Vector
    vadd: false,
    vmul: false
  };

  const buildProcessingElements = (offsetY, offsetX) => {
    const pes = [];
    for (let row = 0; row < PE_ROWS; row += 1) {
      for (let col = 0; col < PE_COLUMNS; col += 1) {
        pes.push({
          id: `pe-${offsetY}-${offsetX}-${row}-${col}`,
          label: `PE (${row}, ${col})`,
          x: col,
          y: row,
          disabled: false,
          tileFunctionalUnits: { ...functionalUnitDefaults }
        });
      }
    }
    return pes;
  };

  const buildCgras = () => {
    const arrays = [];
    for (let row = 0; row < MULTI_CGRA_ROWS; row += 1) {
      for (let col = 0; col < MULTI_CGRA_COLUMNS; col += 1) {
        arrays.push({
          id: `cgra-${row}-${col}`,
          label: `CGRA (${col}, ${row})`,
          x: col,
          y: row,
          intraTopology: 'Mesh',
          sramBanks: 16,
          perCgraRows: PE_ROWS,
          perCgraColumns: PE_COLUMNS,
          configMemoryEntries: 8,
          router: {
            id: `router-${row}-${col}`
          },
          PEs: buildProcessingElements(row, col)
        });
      }
    }
    return arrays;
  };

  const architecture = {
    version: 1,
    architecture: {
      id: 'device-reference',
      name: 'Reference CGRA Device',
      totalSramKb: 1024,
      interTopology: 'Mesh',
      multiCgraRows: MULTI_CGRA_ROWS,
      multiCgraColumns: MULTI_CGRA_COLUMNS,
      vectorLanes: 1,
      dataBitwidth: 32,
      CGRAs: buildCgras()
    }
  };

  const peConnections = createDefaultPeConnections(architecture.architecture);
  architecture.architecture.PEConnections = peConnections;

  return architecture;
})();

export const defaultAppData = appData;
