const PE_SIZE = 42;
const PE_GAP = 48;
const CGRA_PADDING = 32;
const CGRA_GAP = 160;
const MARGIN = 48;
const CGRA_ROUTER_RADIUS = 14;
const CGRA_ROUTER_OFFSET = 28;

function normalizeLabelText(raw) {
  if (raw == null) return '';
  return String(raw).replace(/\s+/g, ' ').trim();
}

export function buildLayout(architecture) {
  if (!architecture || !Array.isArray(architecture.CGRAs)) {
    return {
      layouts: [],
      width: MARGIN * 2,
      height: MARGIN * 2
    };
  }

  const layouts = architecture.CGRAs.map((cgra) => {
    const peXs = cgra.PEs.map((pe) => pe.x);
    const peYs = cgra.PEs.map((pe) => pe.y);
    const minX = Math.min(...peXs);
    const maxX = Math.max(...peXs);
    const minY = Math.min(...peYs);
    const maxY = Math.max(...peYs);
    const columns = maxX - minX + 1;
    const rows = maxY - minY + 1;

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

  const globalWidth = layouts.length ? Math.max(...layouts.map((layout) => layout.width)) : 0;
  const globalHeight = layouts.length ? Math.max(...layouts.map((layout) => layout.height)) : 0;
  const globalMinX = layouts.length ? Math.min(...layouts.map((layout) => layout.x)) : 0;
  const globalMinY = layouts.length ? Math.min(...layouts.map((layout) => layout.y)) : 0;
  const globalMaxY = layouts.length ? Math.max(...layouts.map((layout) => layout.y)) : 0;

  const enhancedLayouts = layouts.map((layout) => {
    const localColumnIndex = layout.x - globalMinX;
    const drawingColumn = localColumnIndex;
    const drawingRow = layout.y - globalMinY;
    const displayColumn = layout.x;
    const displayRow = globalMaxY - layout.y;
    const baseOriginX = MARGIN + drawingColumn * (globalWidth + CGRA_GAP);
    const baseOriginY = MARGIN + drawingRow * (globalHeight + CGRA_GAP);
    const originX = baseOriginX;
    const originY = baseOriginY + (globalHeight - layout.height);
    const routerLocalX = -CGRA_ROUTER_OFFSET;
    const routerLocalY = layout.height + CGRA_ROUTER_OFFSET;
    const routerCenterX = originX + routerLocalX;
    const routerCenterY = originY + routerLocalY;
    const originalLabel = layout.label;
    const topRowIndex = layout.y - globalMinY;
    const topColumnIndex = layout.x - globalMinX;
    const defaultTopLabel = `CGRA (${topRowIndex}, ${topColumnIndex})`;
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
    const displayLabel =
      isDefaultTopLabel ? coordinateLabelBottomOrigin : originalLabel || coordinateLabelBottomOrigin;

    return {
      ...layout,
      label: displayLabel,
      originalLabel,
      displayColumn,
      displayRow,
      displayLabel,
      originX,
      originY,
      centerX: originX + layout.width / 2,
      centerY: originY + layout.height / 2,
      routerLocalX,
      routerLocalY,
      routerCenterX,
      routerCenterY
    };
  });

  const totalWidth =
    (enhancedLayouts.length
      ? Math.max(
          ...enhancedLayouts.map((layout) =>
            Math.max(layout.originX + layout.width, layout.routerCenterX + CGRA_ROUTER_RADIUS)
          )
        ) + MARGIN
      : MARGIN * 2);
  const totalHeight =
    (enhancedLayouts.length
      ? Math.max(
          ...enhancedLayouts.map((layout) =>
            Math.max(layout.originY + layout.height, layout.routerCenterY + CGRA_ROUTER_RADIUS)
          )
        ) + MARGIN
      : MARGIN * 2);

  return {
    layouts: enhancedLayouts,
    width: totalWidth,
    height: totalHeight
  };
}
