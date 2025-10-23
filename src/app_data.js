import { createDefaultPeConnections } from './peConnections.js';

const appData = (() => {
  const MULTI_CGRA_ROWS = 4;
  const MULTI_CGRA_COLUMNS = 4;
  const PE_ROWS = 4;
  const PE_COLUMNS = 4;

  const functionalUnitDefaults = {
    phi: true,
    shift: true,
    select: false,
    mac: true,
    return: false,
    logic: true,
    load: true,
    store: true,
    compare: false,
    add: true,
    mul: true
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
          label: `CGRA (${row}, ${col})`,
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
