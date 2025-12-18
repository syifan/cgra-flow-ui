import {
  CGRA_GAP,
  CGRA_PADDING,
  CGRA_ROUTER_CONNECTOR_INSET,
  CGRA_ROUTER_OFFSET,
  CGRA_ROUTER_RADIUS,
  MARGIN,
  PE_GAP,
  PE_SIZE
} from './constants';
import { computePeLinkEndpoints, computeRouterLinkEndpoints } from './geometry';
import { normalizeLabelText } from './utils';

const BASE_LAYOUT = {
  width: MARGIN * 2,
  height: MARGIN * 2,
  cgras: [],
  cgraConnections: [],
  cgraSwitchConnectors: [],
  cgraSwitches: [],
  peNodes: [],
  peConnections: []
};

const ensureNumber = (value, fallback = 0) => {
  const numeric = Number(value);
  return Number.isFinite(numeric) ? numeric : fallback;
};

const DEFAULT_INTER_TOPOLOGY = 'Mesh';

const CGRA_DIRECTION_OFFSETS = {
  n: { dx: 0, dy: -1 },
  ne: { dx: 1, dy: -1 },
  e: { dx: 1, dy: 0 },
  se: { dx: 1, dy: 1 },
  s: { dx: 0, dy: 1 },
  sw: { dx: -1, dy: 1 },
  w: { dx: -1, dy: 0 },
  nw: { dx: -1, dy: -1 }
};

const TOPOLOGY_DIRECTION_MAP = {
  KingMesh: ['n', 'ne', 'e', 'se', 's', 'sw', 'w', 'nw'],
  Mesh: ['n', 'e', 's', 'w']
};

function deriveCgraLabel(layout, globalMinX, globalMinY, globalMaxY) {
  const originalLabel = layout.label;
  const localColumnIndex = layout.x - globalMinX;
  const localRowIndex = layout.y - globalMinY;
  const displayColumn = layout.x;
  const displayRow = layout.y;
  const drawingRow = globalMaxY - layout.y;
  const invertedRowIndex = globalMaxY - layout.y;
  const legacyRowColumnLabel = `CGRA (${layout.y}, ${layout.x})`;
  const legacyRowColumnLabelTight = `CGRA (${layout.y},${layout.x})`;
  const legacyDisplayLabel = `CGRA (${invertedRowIndex}, ${localColumnIndex})`;
  const legacyDisplayLabelTight = `CGRA (${invertedRowIndex},${localColumnIndex})`;
  const legacyBottomOriginLabel = `CGRA (${localColumnIndex}, ${invertedRowIndex})`;
  const legacyBottomOriginLabelTight = `CGRA (${localColumnIndex},${invertedRowIndex})`;
  const localRowColumnLabel = `CGRA (${localRowIndex}, ${localColumnIndex})`;
  const localRowColumnLabelTight = `CGRA (${localRowIndex},${localColumnIndex})`;
  const localColumnRowLabel = `CGRA (${localColumnIndex}, ${localRowIndex})`;
  const localColumnRowLabelTight = `CGRA (${localColumnIndex},${localRowIndex})`;
  const coordinateLabelTopOrigin = `CGRA (${layout.x}, ${layout.y})`;
  const coordinateLabelTopOriginTight = `CGRA (${layout.x},${layout.y})`;
  const coordinateLabelBottomOrigin = `CGRA (${displayColumn}, ${displayRow})`;
  const coordinateLabelBottomOriginTight = `CGRA (${displayColumn},${displayRow})`;
  const normalizedOriginalLabel = normalizeLabelText(originalLabel);
  const defaultLabelCandidates = [
    coordinateLabelBottomOrigin,
    coordinateLabelBottomOriginTight,
    coordinateLabelTopOrigin,
    coordinateLabelTopOriginTight,
    legacyRowColumnLabel,
    legacyRowColumnLabelTight,
    legacyDisplayLabel,
    legacyDisplayLabelTight,
    legacyBottomOriginLabel,
    legacyBottomOriginLabelTight,
    localRowColumnLabel,
    localRowColumnLabelTight,
    localColumnRowLabel,
    localColumnRowLabelTight
  ];
  const isDefaultLabel =
    !normalizedOriginalLabel ||
    defaultLabelCandidates.some(
      (candidate) => normalizedOriginalLabel === normalizeLabelText(candidate)
    );

  return {
    displayLabel: isDefaultLabel
      ? coordinateLabelBottomOrigin
      : originalLabel || coordinateLabelBottomOrigin,
    displayColumn,
    displayRow,
    drawingRow
  };
}

function derivePeLabel(pe, gridColumn, dataRow, rows) {
  const displayColumn = ensureNumber(pe.x);
  const displayRow = ensureNumber(pe.y);
  const bottomOriginRow = rows - 1 - dataRow;
  // Label format is (x, y) = (column, row) for Cartesian coordinates
  const cartesianLabel = `PE (${displayColumn}, ${displayRow})`;
  const cartesianLabelTight = `PE (${displayColumn},${displayRow})`;
  // Legacy formats for backwards compatibility detection
  const legacyRowColLabel = `PE (${displayRow}, ${displayColumn})`;
  const legacyRowColLabelTight = `PE (${displayRow},${displayColumn})`;
  const bottomOriginLabel = `PE (${displayColumn}, ${bottomOriginRow})`;
  const bottomOriginLabelTight = `PE (${displayColumn},${bottomOriginRow})`;
  const gridAlignedLabel = `PE (${gridColumn}, ${dataRow})`;
  const gridAlignedLabelTight = `PE (${gridColumn},${dataRow})`;
  const normalizedLabel = normalizeLabelText(pe.label);
  const isDefaultLabel =
    !normalizedLabel ||
    normalizedLabel === normalizeLabelText(cartesianLabel) ||
    normalizedLabel === normalizeLabelText(cartesianLabelTight) ||
    normalizedLabel === normalizeLabelText(legacyRowColLabel) ||
    normalizedLabel === normalizeLabelText(legacyRowColLabelTight) ||
    normalizedLabel === normalizeLabelText(bottomOriginLabel) ||
    normalizedLabel === normalizeLabelText(bottomOriginLabelTight) ||
    normalizedLabel === normalizeLabelText(gridAlignedLabel) ||
    normalizedLabel === normalizeLabelText(gridAlignedLabelTight);

  const displayLabel = isDefaultLabel ? cartesianLabel : pe.label || cartesianLabel;

  return {
    displayLabel,
    displayLabelLines: isDefaultLabel ? ['PE', `(${displayColumn}, ${displayRow})`] : null,
    displayColumn,
    displayRow
  };
}

function buildCgraLayouts(architecture) {
  const cgras = Array.isArray(architecture?.CGRAs) ? architecture.CGRAs : [];

  return cgras.map((cgra) => {
    const peList =
      Array.isArray(cgra?.PEs) && cgra.PEs.length
        ? cgra.PEs
        : [
            {
              id: `${cgra.id}-stub-pe`,
              x: 0,
              y: 0
            }
          ];

    const peXs = peList.map((pe) => ensureNumber(pe.x));
    const peYs = peList.map((pe) => ensureNumber(pe.y));
    const minX = Math.min(...peXs);
    const maxX = Math.max(...peXs);
    const minY = Math.min(...peYs);
    const maxY = Math.max(...peYs);
    const columns = Math.max(1, maxX - minX + 1);
    const rows = Math.max(1, maxY - minY + 1);

    const width = columns * PE_SIZE + (columns - 1) * PE_GAP + CGRA_PADDING * 2;
    const height = rows * PE_SIZE + (rows - 1) * PE_GAP + CGRA_PADDING * 2;

    return {
      ...cgra,
      minX,
      minY,
      width,
      height,
      columns,
      rows
    };
  });
}

function computeDirectionalCgraConnections(cgraData, cgraMap, directions) {
  if (!Array.isArray(directions) || directions.length === 0) {
    return [];
  }

  const connections = [];

  cgraData.forEach((cgra) => {
    if (!cgra) return;

    directions.forEach((direction) => {
      const offset = CGRA_DIRECTION_OFFSETS[direction];
      if (!offset) return;

      const neighbor = cgraMap.get(`${cgra.x + offset.dx},${cgra.y + offset.dy}`);
      if (!neighbor) return;

      const endpoints = computeRouterLinkEndpoints(cgra, neighbor);

      connections.push({
        id: `${cgra.id}->${neighbor.id}`,
        sourceId: cgra.id,
        targetId: neighbor.id,
        ...endpoints
      });
    });
  });

  return connections;
}

function computeRingCgraConnections(cgraData) {
  const count = Array.isArray(cgraData) ? cgraData.length : 0;
  if (count <= 1) {
    return [];
  }

  const ordered = [...cgraData].sort((a, b) => {
    if (a.y === b.y) {
      return a.x - b.x;
    }
    return a.y - b.y;
  });

  const connections = [];

  for (let index = 0; index < count; index += 1) {
    const current = ordered[index];
    const next = ordered[(index + 1) % count];
    const prev = ordered[(index - 1 + count) % count];

    const nextEndpoints = computeRouterLinkEndpoints(current, next);
    connections.push({
      id: `${current.id}->${next.id}`,
      sourceId: current.id,
      targetId: next.id,
      ...nextEndpoints
    });

    if (prev.id !== next.id) {
      const prevEndpoints = computeRouterLinkEndpoints(current, prev);
      connections.push({
        id: `${current.id}->${prev.id}`,
        sourceId: current.id,
        targetId: prev.id,
        ...prevEndpoints
      });
    }
  }

  return connections;
}

function computeCgraConnections(architecture, cgraData, cgraMap) {
  if (!Array.isArray(cgraData) || cgraData.length === 0) {
    return [];
  }

  const topology = architecture?.interTopology;
  if (topology === 'Ring') {
    return computeRingCgraConnections(cgraData);
  }

  const directions =
    TOPOLOGY_DIRECTION_MAP[topology] ?? TOPOLOGY_DIRECTION_MAP[DEFAULT_INTER_TOPOLOGY];

  return computeDirectionalCgraConnections(cgraData, cgraMap, directions);
}

export function buildCanvasLayout(architecture) {
  if (!architecture || !Array.isArray(architecture.CGRAs)) {
    return BASE_LAYOUT;
  }

  const layouts = buildCgraLayouts(architecture);

  if (layouts.length === 0) {
    return BASE_LAYOUT;
  }

  const globalWidth = Math.max(...layouts.map((layout) => layout.width));
  const globalHeight = Math.max(...layouts.map((layout) => layout.height));
  const globalMinX = Math.min(...layouts.map((layout) => layout.x));
  const globalMinY = Math.min(...layouts.map((layout) => layout.y));
  const globalMaxY = Math.max(...layouts.map((layout) => layout.y));

  const cgraData = [];
  const peNodes = [];
  const peNodeById = new Map();
  const peConnections = [];
  const cgraSwitchConnectors = [];
  const cgraSwitches = [];
  const cgraMap = new Map();

  const columnWidths = new Map();
  const rowHeights = new Map();

  layouts.forEach((layout) => {
    columnWidths.set(layout.x, Math.max(columnWidths.get(layout.x) ?? 0, layout.columns));
    rowHeights.set(layout.y, Math.max(rowHeights.get(layout.y) ?? 0, layout.rows));
  });

  const columnOffsets = new Map();
  let accumulatedColumns = 0;
  [...columnWidths.keys()]
    .sort((a, b) => a - b)
    .forEach((columnIndex) => {
      columnOffsets.set(columnIndex, accumulatedColumns);
      accumulatedColumns += columnWidths.get(columnIndex) ?? 0;
    });

  const rowOffsets = new Map();
  let accumulatedRows = 0;
  [...rowHeights.keys()]
    .sort((a, b) => a - b)
    .forEach((rowIndex) => {
      rowOffsets.set(rowIndex, accumulatedRows);
      accumulatedRows += rowHeights.get(rowIndex) ?? 0;
    });

  layouts.forEach((layout) => {
    const localColumnIndex = layout.x - globalMinX;
    const drawingRow = globalMaxY - layout.y;

    const baseOriginX = MARGIN + localColumnIndex * (globalWidth + CGRA_GAP);
    const baseOriginY = MARGIN + drawingRow * (globalHeight + CGRA_GAP);
    const originX = baseOriginX;
    const originY = baseOriginY + (globalHeight - layout.height);
    const routerLocalX = -CGRA_ROUTER_OFFSET;
    const routerLocalY = layout.height + CGRA_ROUTER_OFFSET;
    const routerCenterX = originX + routerLocalX;
    const routerCenterY = originY + routerLocalY;

    const connectorStartX = originX + CGRA_ROUTER_CONNECTOR_INSET;
    const connectorStartY = originY + layout.height - CGRA_ROUTER_CONNECTOR_INSET;
    const connectorDx = routerCenterX - connectorStartX;
    const connectorDy = routerCenterY - connectorStartY;
    const connectorLength = Math.sqrt(connectorDx * connectorDx + connectorDy * connectorDy) || 1;
    const connectorEndX =
      routerCenterX - (connectorDx / connectorLength) * CGRA_ROUTER_RADIUS;
    const connectorEndY =
      routerCenterY - (connectorDy / connectorLength) * CGRA_ROUTER_RADIUS;

    const { displayLabel, displayColumn, displayRow } = deriveCgraLabel(
      layout,
      globalMinX,
      globalMinY,
      globalMaxY
    );

    const columnSpan = columnWidths.get(layout.x) ?? layout.columns;
    const rowSpan = rowHeights.get(layout.y) ?? layout.rows;
    const rowAlignmentOffset = Math.max(rowSpan - layout.rows, 0);

    const globalColumnOffset = columnOffsets.get(layout.x) ?? 0;
    const globalRowOffset = (rowOffsets.get(layout.y) ?? 0) + rowAlignmentOffset;

    const cgraEntry = {
      id: layout.id,
      label: layout.label,
      displayLabel,
      originalLabel: layout.label,
      x: layout.x,
      y: layout.y,
      displayColumn,
      displayRow,
      originX,
      originY,
      width: layout.width,
      height: layout.height,
      routerLocalX,
      routerLocalY,
      routerCenterX,
      routerCenterY,
      rows: layout.rows,
      columns: layout.columns,
      globalColumnOffset,
      globalRowOffset
    };

    cgraData.push(cgraEntry);
    cgraMap.set(`${layout.x},${layout.y}`, cgraEntry);

    cgraSwitchConnectors.push({
      id: layout.id,
      x1: connectorStartX,
      y1: connectorStartY,
      x2: connectorEndX,
      y2: connectorEndY
    });

    cgraSwitches.push({
      id: layout.id,
      cx: routerCenterX,
      cy: routerCenterY
    });

    if (!Array.isArray(layout.PEs) || !layout.PEs.length) {
      return;
    }

    layout.PEs.forEach((pe) => {
      const gridColumn = ensureNumber(pe.x) - layout.minX;
      const dataRow = ensureNumber(pe.y) - layout.minY;
      const drawingRow = layout.rows - 1 - dataRow;
      const px = CGRA_PADDING + gridColumn * (PE_SIZE + PE_GAP);
      const py = CGRA_PADDING + drawingRow * (PE_SIZE + PE_GAP);
      const { displayLabel: peDisplayLabel, displayLabelLines, displayColumn, displayRow } =
        derivePeLabel(pe, gridColumn, dataRow, layout.rows);
      const globalColumn = globalColumnOffset + gridColumn;
      const globalRow = globalRowOffset + dataRow;

      const node = {
        ...pe,
        cgraId: layout.id,
        gridX: ensureNumber(pe.x),
        gridY: ensureNumber(pe.y),
        localColumn: gridColumn,
        localRow: dataRow,
        px,
        py,
        x: originX + px,
        y: originY + py,
        cx: originX + px + PE_SIZE / 2,
        cy: originY + py + PE_SIZE / 2,
        label: peDisplayLabel,
        displayLabel: peDisplayLabel,
        displayLabelLines,
        displayColumn,
        displayRow,
        globalColumn,
        globalRow
      };

      peNodes.push(node);
      peNodeById.set(node.id, node);
    });
  });

  const connections = Array.isArray(architecture?.PEConnections)
    ? architecture.PEConnections
    : [];

  const peConnectionsByNode = new Map();

  const addConnection = (nodeId, connection) => {
    if (!nodeId || !connection) return;
    const list = peConnectionsByNode.get(nodeId);
    if (list) {
      list.push(connection);
    } else {
      peConnectionsByNode.set(nodeId, [connection]);
    }
  };

  connections.forEach((connection, index) => {
    if (!connection) return;
    const sourceNode = peNodeById.get(connection.source?.peId);
    const destinationNode = peNodeById.get(connection.destination?.peId);
    if (!sourceNode || !destinationNode) {
      return;
    }

    const baseId =
      connection.id ??
      `${connection.source.peId}:${connection.source.direction}->${connection.destination.peId}:${connection.destination.direction}`;

    const forwardEndpoints = computePeLinkEndpoints(sourceNode, destinationNode);
    peConnections.push({
      id: baseId,
      sourceId: sourceNode.id,
      targetId: destinationNode.id,
      cgraId: sourceNode.cgraId,
      direction: connection.source?.direction,
      ...forwardEndpoints
    });
    addConnection(sourceNode.id, {
      ...connection,
      rendered: {
        ...forwardEndpoints,
        direction: connection.source?.direction,
        sourceId: sourceNode.id,
        targetId: destinationNode.id
      },
      orientation: 'outgoing'
    });
    addConnection(destinationNode.id, {
      ...connection,
      rendered: {
        ...forwardEndpoints,
        direction: connection.source?.direction,
        sourceId: sourceNode.id,
        targetId: destinationNode.id
      },
      orientation: 'incoming'
    });

    if (connection.bidirectional) {
      const reverseEndpoints = computePeLinkEndpoints(destinationNode, sourceNode);
      peConnections.push({
        id: `${baseId}::reverse`,
        sourceId: destinationNode.id,
        targetId: sourceNode.id,
        cgraId: destinationNode.cgraId,
        direction: connection.destination?.direction,
        ...reverseEndpoints
      });
      addConnection(destinationNode.id, {
        ...connection,
        rendered: {
          ...reverseEndpoints,
          direction: connection.destination?.direction,
          sourceId: destinationNode.id,
          targetId: sourceNode.id
        },
        orientation: 'outgoing'
      });
      addConnection(sourceNode.id, {
        ...connection,
        rendered: {
          ...reverseEndpoints,
          direction: connection.destination?.direction,
          sourceId: destinationNode.id,
          targetId: sourceNode.id
        },
        orientation: 'incoming'
      });
    }
  });

  const cgraConnections = computeCgraConnections(architecture, cgraData, cgraMap);

  const totalWidth =
    Math.max(
      ...cgraData.map((layout) =>
        Math.max(layout.originX + layout.width, layout.routerCenterX + CGRA_ROUTER_RADIUS)
      )
    ) + MARGIN;

  const totalHeight =
    Math.max(
      ...cgraData.map((layout) =>
        Math.max(layout.originY + layout.height, layout.routerCenterY + CGRA_ROUTER_RADIUS)
      )
    ) + MARGIN;

  return {
    width: totalWidth,
    height: totalHeight,
    cgras: cgraData,
    cgraConnections,
    cgraSwitchConnectors,
    cgraSwitches,
    peNodes: peNodes.map((node) => ({
      ...node,
      connections: peConnectionsByNode.get(node.id) ?? []
    })),
    peConnections
  };
}
