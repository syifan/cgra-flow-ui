import { createDefaultPeConnections } from './peConnections.js';
import { DEFAULT_FUNCTION_UNITS } from '../shared/functionalUnitMapping.js';

const appData = (() => {
  const MULTI_CGRA_ROWS = 1;
  const MULTI_CGRA_COLUMNS = 1;
  const PE_ROWS = 4;
  const PE_COLUMNS = 4;

  // Use the shared functional unit defaults
  const functionalUnitDefaults = { ...DEFAULT_FUNCTION_UNITS };

  const buildProcessingElements = (offsetY, offsetX) => {
    const pes = [];
    for (let row = 0; row < PE_ROWS; row += 1) {
      for (let col = 0; col < PE_COLUMNS; col += 1) {
        pes.push({
          id: `pe-${offsetY}-${offsetX}-${row}-${col}`,
          // Label format is (x, y) = (col, row) for Cartesian coordinates
          label: `PE (${col}, ${row})`,
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
