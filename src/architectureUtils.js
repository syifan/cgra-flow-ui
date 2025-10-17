const FUNCTIONAL_UNIT_DEFAULTS = {
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

const ensurePositiveInt = (value, fallback = 1) => {
  const numeric = typeof value === 'number' ? value : Number(value);
  if (Number.isFinite(numeric)) {
    return Math.max(1, Math.floor(numeric));
  }

  const fallbackNumeric = typeof fallback === 'number' ? fallback : Number(fallback);
  if (Number.isFinite(fallbackNumeric)) {
    return Math.max(1, Math.floor(fallbackNumeric));
  }

  return 1;
};

const createOutgoingLinks = () => ({
  nw: false,
  sw: false,
  ne: false,
  se: false,
  n: true,
  s: true,
  w: true,
  e: true
});

const normalizeFunctionalUnits = (units = {}) => ({
  ...FUNCTIONAL_UNIT_DEFAULTS,
  ...units
});

const createPeId = (cgraRow, cgraColumn, row, column) =>
  `pe-${cgraRow}-${cgraColumn}-${row}-${column}`;

const createPeLabel = (row, column) => `PE (${row}, ${column})`;

export const buildProcessingElements = ({
  rows,
  columns,
  cgraRow,
  cgraColumn,
  existing = []
}) => {
  const safeRows = ensurePositiveInt(rows);
  const safeColumns = ensurePositiveInt(columns);
  const existingMap = new Map();
  existing.forEach((pe) => {
    if (typeof pe?.x !== 'number' || typeof pe?.y !== 'number') return;
    existingMap.set(`${pe.x},${pe.y}`, pe);
  });

  const rowMax = safeRows - 1;
  const columnMax = safeColumns - 1;
  const nextPEs = [];

  for (let row = 0; row < safeRows; row += 1) {
    for (let column = 0; column < safeColumns; column += 1) {
      const existingPe = existingMap.get(`${column},${row}`) ?? null;

      const id = existingPe?.id ?? createPeId(cgraRow, cgraColumn, row, column);
      const label = existingPe?.label ?? createPeLabel(row, column);
      const disabled = Boolean(existingPe?.disabled);
      const tileFunctionalUnits = normalizeFunctionalUnits(existingPe?.tileFunctionalUnits);

      nextPEs.push({
        ...existingPe,
        id,
        label,
        x: column,
        y: row,
        disabled,
        tileFunctionalUnits,
        outgoingLinks: createOutgoingLinks(column, row, columnMax, rowMax)
      });
    }
  }

  return nextPEs;
};

const pickCgraTemplate = (architecture) => {
  if (architecture?.CGRAs?.length) {
    return architecture.CGRAs[0];
  }
  return {
    intraTopology: 'Mesh',
    sramBanks: 0,
    perCgraRows: 1,
    perCgraColumns: 1,
    configMemoryEntries: 1
  };
};

export const createCgra = ({ row, column, architecture }) => {
  const template = pickCgraTemplate(architecture);
  const perCgraRows = ensurePositiveInt(template?.perCgraRows, 1);
  const perCgraColumns = ensurePositiveInt(template?.perCgraColumns, 1);

  return {
    id: `cgra-${row}-${column}`,
    label: `CGRA (${row}, ${column})`,
    x: column,
    y: row,
    intraTopology: template?.intraTopology ?? 'Mesh',
    sramBanks: template?.sramBanks ?? 0,
    perCgraRows,
    perCgraColumns,
    configMemoryEntries: template?.configMemoryEntries ?? 1,
    router: { id: `router-${row}-${column}` },
    PEs: buildProcessingElements({
      rows: perCgraRows,
      columns: perCgraColumns,
      cgraRow: row,
      cgraColumn: column
    })
  };
};

export const updateCgraDimensions = (cgra, rows, columns) => ({
  ...cgra,
  perCgraRows: ensurePositiveInt(rows, cgra?.perCgraRows),
  perCgraColumns: ensurePositiveInt(columns, cgra?.perCgraColumns),
  PEs: buildProcessingElements({
    rows,
    columns,
    cgraRow: cgra?.y ?? 0,
    cgraColumn: cgra?.x ?? 0,
    existing: Array.isArray(cgra?.PEs) ? cgra.PEs : []
  })
});

export const resizeArchitectureGrid = (architecture, rows, columns) => {
  const nextRows = ensurePositiveInt(rows, architecture?.multiCgraRows);
  const nextColumns = ensurePositiveInt(columns, architecture?.multiCgraColumns);
  const cgraMap = new Map();

  if (Array.isArray(architecture?.CGRAs)) {
    architecture.CGRAs.forEach((cgra) => {
      if (typeof cgra?.x !== 'number' || typeof cgra?.y !== 'number') return;
      cgraMap.set(`${cgra.y},${cgra.x}`, cgra);
    });
  }

  const nextCgras = [];

  for (let row = 0; row < nextRows; row += 1) {
    for (let column = 0; column < nextColumns; column += 1) {
      const existing = cgraMap.get(`${row},${column}`);
      if (existing) {
        const perCgraRows = ensurePositiveInt(existing?.perCgraRows, 1);
        const perCgraColumns = ensurePositiveInt(existing?.perCgraColumns, 1);
        nextCgras.push({
          ...existing,
          x: column,
          y: row,
          label: existing.label ?? `CGRA (${row}, ${column})`,
          perCgraRows,
          perCgraColumns,
          PEs: buildProcessingElements({
            rows: perCgraRows,
            columns: perCgraColumns,
            cgraRow: row,
            cgraColumn: column,
            existing: Array.isArray(existing?.PEs) ? existing.PEs : []
          })
        });
      } else {
        nextCgras.push(createCgra({ row, column, architecture }));
      }
    }
  }

  return {
    ...architecture,
    multiCgraRows: nextRows,
    multiCgraColumns: nextColumns,
    CGRAs: nextCgras
  };
};
