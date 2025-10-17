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
import {
  computePeLinkEndpoints,
  computeRouterLinkEndpoints,
  PE_DIRECTION_OFFSETS
} from './geometry';
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

function deriveCgraLabel(layout, globalMinX, globalMinY, globalMaxY) {
  const originalLabel = layout.label;
  const localColumnIndex = layout.x - globalMinX;
  const displayColumn = layout.x;
  const drawingRow = layout.y - globalMinY;
  const displayRow = globalMaxY - layout.y;
  const topRowIndex = layout.y - globalMinY;
  const defaultTopLabel = `CGRA (${topRowIndex}, ${localColumnIndex})`;
  const legacyTopLabel = `CGRA (${layout.y}, ${layout.x})`;
  const legacyDisplayLabel = `CGRA (${displayRow}, ${localColumnIndex})`;
  const legacyBottomOriginLabel = `CGRA (${localColumnIndex}, ${displayRow})`;
  const legacyBottomOriginLabelTight = `CGRA (${localColumnIndex},${displayRow})`;
  const coordinateLabelTopOrigin = `CGRA (${layout.x}, ${layout.y})`;
  const coordinateLabelTopOriginTight = `CGRA (${layout.x},${layout.y})`;
  const coordinateLabelBottomOrigin = `CGRA (${displayColumn}, ${displayRow})`;
  const coordinateLabelBottomOriginTight = `CGRA (${displayColumn},${displayRow})`;
  const normalizedOriginalLabel = normalizeLabelText(originalLabel);
  const isDefaultTopLabel =
    !normalizedOriginalLabel ||
    normalizedOriginalLabel === normalizeLabelText(defaultTopLabel) ||
    normalizedOriginalLabel === normalizeLabelText(legacyTopLabel) ||
    normalizedOriginalLabel === normalizeLabelText(legacyDisplayLabel) ||
    normalizedOriginalLabel === normalizeLabelText(legacyBottomOriginLabel) ||
    normalizedOriginalLabel === normalizeLabelText(legacyBottomOriginLabelTight) ||
    normalizedOriginalLabel === normalizeLabelText(coordinateLabelTopOrigin) ||
    normalizedOriginalLabel === normalizeLabelText(coordinateLabelTopOriginTight) ||
    normalizedOriginalLabel === normalizeLabelText(coordinateLabelBottomOrigin) ||
    normalizedOriginalLabel === normalizeLabelText(coordinateLabelBottomOriginTight);

  return {
    displayLabel: isDefaultTopLabel
      ? coordinateLabelBottomOrigin
      : originalLabel || coordinateLabelBottomOrigin,
    displayColumn,
    displayRow,
    drawingRow
  };
}

function derivePeLabel(pe, gridColumn, drawingRow, rows) {
  const displayRow = rows - 1 - drawingRow;
  const displayColumn = pe.x;
  const defaultTopLabel = `PE (${drawingRow}, ${gridColumn})`;
  const legacyTopLabel = `PE (${pe.y}, ${pe.x})`;
  const coordinateLabel = `PE (${pe.x}, ${pe.y})`;
  const coordinateLabelTight = `PE (${pe.x},${pe.y})`;
  const coordinateLabelBottomOrigin = `PE (${pe.x}, ${displayRow})`;
  const coordinateLabelBottomOriginTight = `PE (${pe.x},${displayRow})`;
  const normalizedLabel = normalizeLabelText(pe.label);
  const isDefaultTopLabel =
    !normalizedLabel ||
    normalizedLabel === normalizeLabelText(defaultTopLabel) ||
    normalizedLabel === normalizeLabelText(legacyTopLabel) ||
    normalizedLabel === normalizeLabelText(coordinateLabel) ||
    normalizedLabel === normalizeLabelText(coordinateLabelTight) ||
    normalizedLabel === normalizeLabelText(coordinateLabelBottomOrigin) ||
    normalizedLabel === normalizeLabelText(coordinateLabelBottomOriginTight);

  const displayLabel = isDefaultTopLabel
    ? coordinateLabelBottomOrigin
    : pe.label || coordinateLabelBottomOrigin;

  return {
    displayLabel,
    displayLabelLines: isDefaultTopLabel ? ['PE', `(${pe.x}, ${displayRow})`] : null,
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
  const peConnections = [];
  const cgraSwitchConnectors = [];
  const cgraSwitches = [];
  const cgraMap = new Map();

  layouts.forEach((layout) => {
    const localColumnIndex = layout.x - globalMinX;
    const drawingRow = layout.y - globalMinY;

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
      columns: layout.columns
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

    const positionMap = new Map();

    layout.PEs.forEach((pe) => {
      const col = ensureNumber(pe.x) - layout.minX;
      const row = ensureNumber(pe.y) - layout.minY;
      const gridColumn = col;
      const px = CGRA_PADDING + gridColumn * (PE_SIZE + PE_GAP);
      const py = CGRA_PADDING + row * (PE_SIZE + PE_GAP);
      const { displayLabel: peDisplayLabel, displayLabelLines, displayColumn, displayRow } =
        derivePeLabel(pe, gridColumn, row, layout.rows);

      const node = {
        ...pe,
        cgraId: layout.id,
        gridX: ensureNumber(pe.x),
        gridY: ensureNumber(pe.y),
        localColumn: gridColumn,
        localRow: row,
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
        displayRow
      };

      positionMap.set(`${node.gridX},${node.gridY}`, node);
      peNodes.push(node);
    });

    positionMap.forEach((node) => {
      const outgoing = node?.outgoingLinks || {};

      Object.entries(PE_DIRECTION_OFFSETS).forEach(([direction, offset]) => {
        if (!outgoing[direction]) {
          return;
        }

        const neighbor = positionMap.get(`${node.gridX + offset.dx},${node.gridY + offset.dy}`);
        if (!neighbor) {
          return;
        }

        const endpoints = computePeLinkEndpoints(node, neighbor);

        peConnections.push({
          id: `${node.id}->${neighbor.id}`,
          sourceId: node.id,
          targetId: neighbor.id,
          cgraId: layout.id,
          direction,
          ...endpoints
        });
      });
    });
  });

  const cgraConnections = [];

  cgraData.forEach((cgra) => {
    const rightNeighbor = cgraMap.get(`${cgra.displayColumn + 1},${cgra.displayRow}`);
    const downNeighbor = cgraMap.get(`${cgra.displayColumn},${cgra.displayRow - 1}`);
    const eastNeighbor = cgraMap.get(`${cgra.x + 1},${cgra.y}`);
    const southNeighbor = cgraMap.get(`${cgra.x},${cgra.y + 1}`);

    const consideredNeighbors = [eastNeighbor, southNeighbor, rightNeighbor, downNeighbor].filter(Boolean);
    consideredNeighbors.forEach((neighbor) => {
      const endpoints = computeRouterLinkEndpoints(cgra, neighbor);
      cgraConnections.push({
        id: `${cgra.id}->${neighbor.id}`,
        sourceId: cgra.id,
        targetId: neighbor.id,
        ...endpoints
      });
    });
  });

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
    peNodes,
    peConnections
  };
}
