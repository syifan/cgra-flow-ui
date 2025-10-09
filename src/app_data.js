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

function buildOutgoingLinks(x, y, maxX, maxY) {
  return {
    nw: x > 0 && y > 0,
    sw: x > 0 && y < maxY,
    ne: x < maxX && y > 0,
    se: x < maxX && y < maxY,
    n: y > 0,
    s: y < maxY,
    w: x > 0,
    e: x < maxX
  };
}

function buildProcessingElements(offsetY, offsetX) {
  const pes = [];
  for (let row = 0; row < PE_ROWS; row += 1) {
    for (let col = 0; col < PE_COLUMNS; col += 1) {
      pes.push({
        id: `pe-${offsetY}-${offsetX}-${row}-${col}`,
        label: `PE (${row}, ${col})`,
        x: col,
        y: row,
        disabled: false,
        tileFunctionalUnits: { ...functionalUnitDefaults },
        outgoingLinks: buildOutgoingLinks(
          col,
          row,
          PE_COLUMNS - 1,
          PE_ROWS - 1
        )
      });
    }
  }
  return pes;
}

function buildCgras() {
  const arrays = [];
  for (let row = 0; row < MULTI_CGRA_ROWS; row += 1) {
    for (let col = 0; col < MULTI_CGRA_COLUMNS; col += 1) {
      arrays.push({
        id: `cgra-${row}-${col}`,
        label: `CGRA (${row}, ${col})`,
        x: col,
        y: row,
        intraTopology: 'KingMesh',
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
}

export const defaultArchitecture = {
  id: 'device-reference',
  name: 'Reference CGRA Device',
  totalSramKb: 1024,
  interTopology: 'KingMesh',
  multiCgraRows: MULTI_CGRA_ROWS,
  multiCgraColumns: MULTI_CGRA_COLUMNS,
  vectorLanes: 1,
  dataBitwidth: 32,
  CGRAs: buildCgras()
};

