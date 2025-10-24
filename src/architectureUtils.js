import {
  buildConnectionsFromLegacyOutgoing,
  sanitizePeConnections
} from './peConnections.js';

const normalizeLabelText = (raw) => {
  if (raw == null) return '';
  return String(raw).replace(/\s+/g, ' ').trim();
};

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

const normalizeCoordinate = (value) => {
  const numeric = typeof value === 'number' ? value : Number(value);
  if (!Number.isFinite(numeric)) {
    return null;
  }
  return Math.floor(numeric);
};

const coordinateKey = (column, row) => `${column},${row}`;

const deriveAxisPositions = (count, sortedExistingValues) => {
  if (count <= 0) {
    return [];
  }

  const hasExisting = Array.isArray(sortedExistingValues) && sortedExistingValues.length > 0;
  const values = hasExisting ? [...sortedExistingValues] : [];

  if (!hasExisting) {
    return Array.from({ length: count }, (_, index) => index);
  }

  while (values.length > count) {
    values.pop();
  }

  while (values.length < count) {
    values.push(values[values.length - 1] + 1);
  }

  return values;
};

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
  const existingColumns = new Set();
  const existingRows = new Set();

  existing.forEach((pe) => {
    const columnValue = normalizeCoordinate(pe?.x);
    const rowValue = normalizeCoordinate(pe?.y);
    if (columnValue == null || rowValue == null) return;
    existingMap.set(coordinateKey(columnValue, rowValue), pe);
    existingColumns.add(columnValue);
    existingRows.add(rowValue);
  });

  const sortedExistingColumns = [...existingColumns].sort((a, b) => a - b);
  const sortedExistingRows = [...existingRows].sort((a, b) => a - b);
  const columnPositions = deriveAxisPositions(safeColumns, sortedExistingColumns);
  const rowPositions = deriveAxisPositions(safeRows, sortedExistingRows);

  const nextPEs = [];

  for (let rowIndex = 0; rowIndex < safeRows; rowIndex += 1) {
    const rowValue = rowPositions[rowIndex];

    for (let columnIndex = 0; columnIndex < safeColumns; columnIndex += 1) {
      const columnValue = columnPositions[columnIndex];
      const existingPe =
        existingMap.get(coordinateKey(columnValue, rowValue)) ?? null;
      const { outgoingLinks: _, ...existingRest } = existingPe ?? {};

      const id =
        existingPe?.id ?? createPeId(cgraRow, cgraColumn, rowValue, columnValue);
      const label = existingPe?.label ?? createPeLabel(rowValue, columnValue);
      const disabled = Boolean(existingPe?.disabled);
      const tileFunctionalUnits = normalizeFunctionalUnits(existingPe?.tileFunctionalUnits);

      nextPEs.push({
        ...existingRest,
        id,
        label,
        x: columnValue,
        y: rowValue,
        disabled,
        tileFunctionalUnits
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
    label: `CGRA (${column}, ${row})`,
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
        const defaultLabel = `CGRA (${column}, ${row})`;
        const legacyLabel = `CGRA (${row}, ${column})`;
        const legacyLabelTight = `CGRA (${row},${column})`;
        const normalizedExistingLabel = normalizeLabelText(existing.label);
        const shouldUpdateLabel =
          !normalizedExistingLabel ||
          normalizedExistingLabel === normalizeLabelText(legacyLabel) ||
          normalizedExistingLabel === normalizeLabelText(legacyLabelTight);
        nextCgras.push({
          ...existing,
          x: column,
          y: row,
          label: shouldUpdateLabel ? defaultLabel : existing.label,
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

export const normalizeArchitecture = (architecture) => {
  if (!architecture || typeof architecture !== 'object') {
    return architecture;
  }

  const legacyOutgoing = new Map();

  const normalizedCgras = Array.isArray(architecture.CGRAs)
    ? architecture.CGRAs.map((cgra) => {
        if (!cgra || !Array.isArray(cgra.PEs)) {
          return {
            ...cgra,
            PEs: []
          };
        }

        const nextPEs = cgra.PEs.map((pe) => {
          if (!pe) return pe;
          if (pe.outgoingLinks && pe.id) {
            legacyOutgoing.set(pe.id, { ...pe.outgoingLinks });
          }

          const { outgoingLinks, ...rest } = pe;
          return { ...rest };
        });

        return {
          ...cgra,
          PEs: nextPEs
        };
      })
    : [];

  const normalizedArchitecture = {
    ...architecture,
    CGRAs: normalizedCgras
  };

  let peConnections = sanitizePeConnections(architecture.PEConnections);

  if ((!peConnections || peConnections.length === 0) && legacyOutgoing.size > 0) {
    peConnections = sanitizePeConnections(
      buildConnectionsFromLegacyOutgoing(legacyOutgoing, normalizedArchitecture)
    );
  }

  return {
    ...normalizedArchitecture,
    PEConnections: peConnections ?? []
  };
};
