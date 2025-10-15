import { useEffect, useMemo, useRef } from 'react';
import { Box } from '@mui/material';
import { select, zoom, zoomIdentity } from 'd3';

const PE_SIZE = 42;
const PE_GAP = 48;
const CGRA_PADDING = 32;
const CGRA_GAP = 160;
const MARGIN = 48;
const CGRA_FILL = 'rgba(30, 64, 175, 0.18)';
const CGRA_SELECTED_FILL = 'rgba(249, 115, 22, 0.22)';
const CGRA_STROKE = 'rgba(96, 165, 250, 0.6)';
const CGRA_SELECTED_STROKE = '#f97316';
const CGRA_LABEL_FILL = '#bae6fd';
const CGRA_LABEL_SELECTED_FILL = '#f8fafc';
const CGRA_LABEL_FONT_SIZE = 20;
const CGRA_LABEL_VISIBILITY_THRESHOLD = 0.65;
const CGRA_LABEL_MAX_SCALE = 1.75;
const CGRA_ROUTER_RADIUS = 14;
const CGRA_ROUTER_OFFSET = 28;
const CGRA_ROUTER_FILL = '#0ea5e9';
const CGRA_ROUTER_STROKE = '#38bdf8';
const CGRA_ROUTER_SELECTED_FILL = '#f97316';
const CGRA_ROUTER_SELECTED_STROKE = '#fb923c';
const CGRA_ROUTER_CONNECTOR_INSET = 18;
const PE_FILL = 'rgba(59, 130, 246, 0.6)';
const PE_DISABLED_FILL = 'rgba(148, 163, 184, 0.45)';
const PE_STROKE = '#1d4ed8';
const PE_SELECTED_FILL = '#f97316';
const PE_SELECTED_STROKE = '#fb923c';
const PE_LABEL_FILL = '#e2e8f0';
const PE_LABEL_DISABLED_FILL = 'rgba(226, 232, 240, 0.6)';
const PE_LABEL_SELECTED_FILL = '#0f172a';
const PE_LABEL_MAX_CHARS_PER_LINE = 8;
const PE_LABEL_MAX_LINES = 2;
const PE_LABEL_VISIBILITY_THRESHOLD = 1.2;
const PE_LABEL_LINE_HEIGHT_EM = 1.1;
const PE_LABEL_FONT_SIZE = 12;
const PE_RADIUS = PE_SIZE / 2;
const PE_LINK_SOURCE_DETACHMENT = 12;
const PE_LINK_TARGET_DETACHMENT = 10;
const PE_LINK_ARROW_CLEARANCE = 6;
const PE_LINK_ARROW_LENGTH = 12;
const PE_LINK_VISIBILITY_THRESHOLD = 0.85;

const PE_DIRECTION_OFFSETS = {
  n: { dx: 0, dy: -1 },
  s: { dx: 0, dy: 1 },
  e: { dx: 1, dy: 0 },
  w: { dx: -1, dy: 0 },
  ne: { dx: 1, dy: -1 },
  nw: { dx: -1, dy: -1 },
  se: { dx: 1, dy: 1 },
  sw: { dx: -1, dy: 1 }
};

function normalizeLabelText(raw) {
  if (raw == null) return '';
  return String(raw).replace(/\s+/g, ' ').trim();
}

function splitLabelIntoLines(label) {
  const normalized = normalizeLabelText(label);
  if (!normalized) return [];

  const tokens = normalized
    .split(' ')
    .filter(Boolean)
    .flatMap((word) => {
      if (word.length <= PE_LABEL_MAX_CHARS_PER_LINE) {
        return [word];
      }

      const segments = [];
      for (let index = 0; index < word.length; index += PE_LABEL_MAX_CHARS_PER_LINE) {
        segments.push(word.slice(index, index + PE_LABEL_MAX_CHARS_PER_LINE));
      }
      return segments;
    });

  const lines = [];
  let current = '';
  let truncated = false;

  for (let index = 0; index < tokens.length; index += 1) {
    const token = tokens[index];
    const separator = current ? ' ' : '';
    const candidate = `${current}${separator}${token}`.trim();

    if (candidate.length <= PE_LABEL_MAX_CHARS_PER_LINE) {
      current = candidate;
      continue;
    }

    if (current) {
      lines.push(current);
    }

    if (lines.length >= PE_LABEL_MAX_LINES) {
      truncated = true;
      break;
    }

    current = token;
  }

  if (lines.length < PE_LABEL_MAX_LINES && current) {
    lines.push(current);
  } else if (!truncated && current && lines.length >= PE_LABEL_MAX_LINES) {
    truncated = true;
  }

  if (tokens.length && lines.length === 0) {
    lines.push(tokens[0].slice(0, PE_LABEL_MAX_CHARS_PER_LINE));
    truncated = tokens.length > 1 || tokens[0].length > PE_LABEL_MAX_CHARS_PER_LINE;
  }

  if (lines.length > PE_LABEL_MAX_LINES) {
    lines.length = PE_LABEL_MAX_LINES;
    truncated = true;
  }

  if (truncated) {
    const lastIndex = lines.length - 1;
    const lastLine = lines[lastIndex] ?? '';
    const trimmed = lastLine.slice(0, Math.max(PE_LABEL_MAX_CHARS_PER_LINE - 1, 1)).trimEnd();
    lines[lastIndex] = trimmed ? `${trimmed}…` : '…';
  }

  return lines;
}

function applyPeLabel(selection) {
  selection.each(function applyLabel(data) {
    const text = select(this);
    const preferredLabel = normalizeLabelText(data?.label);
    const fallbackLabel = normalizeLabelText(data?.displayLabel);
    const explicitLines = Array.isArray(data?.displayLabelLines)
      ? data.displayLabelLines.filter((line) => normalizeLabelText(line))
      : null;
    const lines =
      explicitLines && explicitLines.length
        ? explicitLines
        : splitLabelIntoLines(preferredLabel || fallbackLabel || data?.id);

    text.selectAll('tspan').remove();

    if (!lines.length) {
      return;
    }

    const initialDy =
      lines.length === 1 ? '0em' : `${(-((lines.length - 1) / 2) * PE_LABEL_LINE_HEIGHT_EM).toFixed(2)}em`;

    lines.forEach((line, index) => {
      const tspan = text
        .append('tspan')
        .attr('x', PE_SIZE / 2)
        .text(line);

      if (index === 0) {
        tspan.attr('dy', initialDy);
      } else {
        tspan.attr('dy', `${PE_LABEL_LINE_HEIGHT_EM}em`);
      }
    });
  });
}

function updatePeLabelVisibility(svg, zoomLevel) {
  const display = zoomLevel >= PE_LABEL_VISIBILITY_THRESHOLD ? null : 'none';
  svg
    .selectAll('g.pe text')
    .attr('display', display)
    .attr('aria-hidden', zoomLevel >= PE_LABEL_VISIBILITY_THRESHOLD ? null : 'true');
}

function updatePeLinkVisibility(svg, zoomLevel) {
  const visible = zoomLevel >= PE_LINK_VISIBILITY_THRESHOLD;
  svg
    .selectAll('g.pe-links')
    .attr('display', visible ? null : 'none')
    .attr('aria-hidden', visible ? null : 'true');
}

function updateCgraLabelVisibility(svg, zoomLevel = 1) {
  const k = Number.isFinite(zoomLevel) ? zoomLevel : 1;
  const visible = k >= CGRA_LABEL_VISIBILITY_THRESHOLD;
  const fontScale = Math.min(CGRA_LABEL_MAX_SCALE, Math.max(1, 1 / Math.max(k, 1e-6)));
  const fontSize = CGRA_LABEL_FONT_SIZE * fontScale;

  svg
    .selectAll('g.cgra text.cgra-label')
    .attr('display', visible ? null : 'none')
    .attr('aria-hidden', visible ? null : 'true')
    .attr('font-size', fontSize);
}

function computeRouterLinkEndpoints(source, target) {
  const dx = target.routerCenterX - source.routerCenterX;
  const dy = target.routerCenterY - source.routerCenterY;
  const distance = Math.sqrt(dx * dx + dy * dy) || 1;
  const ux = dx / distance;
  const uy = dy / distance;

  return {
    x1: source.routerCenterX + ux * CGRA_ROUTER_RADIUS,
    y1: source.routerCenterY + uy * CGRA_ROUTER_RADIUS,
    x2: target.routerCenterX - ux * CGRA_ROUTER_RADIUS,
    y2: target.routerCenterY - uy * CGRA_ROUTER_RADIUS
  };
}

function computePeLinkEndpoints(source, target) {
  const dx = target.cx - source.cx;
  const dy = target.cy - source.cy;
  const distance = Math.sqrt(dx * dx + dy * dy) || 1;
  const ux = dx / distance;
  const uy = dy / distance;
  const absUx = Math.abs(ux);
  const absUy = Math.abs(uy);

  const limitX = absUx > 1e-6 ? PE_RADIUS / absUx : Infinity;
  const limitY = absUy > 1e-6 ? PE_RADIUS / absUy : Infinity;
  const boundaryDistance = Math.min(limitX, limitY, distance / 2);

  const desiredSourceClearance = boundaryDistance + Math.max(0, PE_LINK_SOURCE_DETACHMENT);
  const minimumTargetClearance = boundaryDistance + Math.max(0, PE_LINK_ARROW_CLEARANCE);
  const desiredTargetClearance = boundaryDistance + Math.max(
    PE_LINK_ARROW_CLEARANCE,
    PE_LINK_TARGET_DETACHMENT
  );

  let sourceClearance = Math.min(desiredSourceClearance, distance - minimumTargetClearance);
  sourceClearance = Math.max(boundaryDistance, sourceClearance);

  let targetClearance = Math.min(desiredTargetClearance, distance - sourceClearance);
  targetClearance = Math.max(targetClearance, minimumTargetClearance);

  if (sourceClearance + targetClearance > distance) {
    const overlap = sourceClearance + targetClearance - distance;
    const sourceAdjustable = Math.max(0, sourceClearance - boundaryDistance);
    const targetAdjustable = Math.max(0, targetClearance - minimumTargetClearance);
    const totalAdjustable = sourceAdjustable + targetAdjustable;

    if (totalAdjustable > 1e-6) {
      const sourceShare = sourceAdjustable / totalAdjustable;
      const targetShare = targetAdjustable / totalAdjustable;
      sourceClearance -= overlap * sourceShare;
      targetClearance -= overlap * targetShare;
    } else {
      const halfOverlap = overlap / 2;
      sourceClearance -= halfOverlap;
      targetClearance -= halfOverlap;
    }
  }

  sourceClearance = Math.max(boundaryDistance, Math.min(sourceClearance, distance - minimumTargetClearance));
  const remaining = Math.max(distance - sourceClearance, 0);
  targetClearance = Math.max(minimumTargetClearance, Math.min(targetClearance, remaining));

  return {
    x1: source.cx + ux * sourceClearance,
    y1: source.cy + uy * sourceClearance,
    x2: target.cx - ux * targetClearance,
    y2: target.cy - uy * targetClearance
  };
}

function buildLayout(architecture) {
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

function MainCanvas({ architecture, selection, onSelectionChange }) {
  const svgRef = useRef(null);
  const zoomTransformRef = useRef(zoomIdentity);

  const layout = useMemo(() => buildLayout(architecture), [architecture]);

  useEffect(() => {
    if (!svgRef.current) return;

    const svg = select(svgRef.current);
    svg.selectAll('*').remove();

    svg
      .attr('viewBox', `0 0 ${layout.width} ${layout.height}`)
      .attr('width', '100%')
      .attr('height', '100%');

    const defs = svg.append('defs');

    const peArrowMarker = defs
      .append('marker')
      .attr('id', 'pe-arrow')
      .attr('viewBox', `0 0 ${PE_LINK_ARROW_LENGTH} ${PE_LINK_ARROW_LENGTH}`)
      .attr('refX', PE_LINK_ARROW_LENGTH)
      .attr('refY', PE_LINK_ARROW_LENGTH / 2)
      .attr('markerWidth', PE_LINK_ARROW_LENGTH)
      .attr('markerHeight', PE_LINK_ARROW_LENGTH)
      .attr('orient', 'auto')
      .attr('markerUnits', 'userSpaceOnUse');

    peArrowMarker
      .append('path')
      .attr(
        'd',
        `M 0 0 L ${PE_LINK_ARROW_LENGTH} ${PE_LINK_ARROW_LENGTH / 2} L 0 ${PE_LINK_ARROW_LENGTH} z`
      )
      .attr('fill', '#60a5fa')
      .attr('fill-opacity', 0.85)
      .attr('stroke', 'none');

    const cgraArrowMarker = defs
      .append('marker')
      .attr('id', 'cgra-arrow')
      .attr('viewBox', '0 0 10 10')
      .attr('refX', 8)
      .attr('refY', 5)
      .attr('markerWidth', 7)
      .attr('markerHeight', 7)
      .attr('orient', 'auto')
      .attr('markerUnits', 'strokeWidth');

    cgraArrowMarker
      .append('path')
      .attr('d', 'M 0 0 L 10 5 L 0 10 z')
      .attr('fill', '#7dd3fc')
      .attr('fill-opacity', 0.85)
      .attr('stroke', 'none');

    const zoomGroup = svg.append('g').attr('class', 'zoom-group');

    const cgraLinkLayer = zoomGroup
      .append('g')
      .attr('class', 'cgra-links')
      .attr('stroke', '#7dd3fc')
      .attr('stroke-width', 3)
      .attr('stroke-opacity', 0.45)
      .attr('fill', 'none');

    const cgraNodeLayer = zoomGroup.append('g').attr('class', 'cgra-nodes');

    layout.layouts.forEach((cgraLayout) => {
      const group = cgraNodeLayer
        .append('g')
        .attr('class', 'cgra')
        .attr('data-id', cgraLayout.id)
        .datum(cgraLayout)
        .attr('transform', `translate(${cgraLayout.originX}, ${cgraLayout.originY})`)
        .style('cursor', 'pointer')
        .on('click', (event) => {
          event.stopPropagation();
          onSelectionChange?.({ type: 'cgra', id: cgraLayout.id, cgraId: cgraLayout.id });
        });

      group
        .append('rect')
        .attr('class', 'cgra-boundary')
        .attr('width', cgraLayout.width)
        .attr('height', cgraLayout.height)
        .attr('rx', 18)
        .attr('ry', 18)
        .attr('fill', CGRA_FILL)
        .attr('stroke', CGRA_STROKE)
        .attr('stroke-width', 2.5);

      group
        .append('text')
        .attr('class', 'cgra-label')
        .attr('x', cgraLayout.width / 2)
        .attr('y', -12)
        .attr('fill', CGRA_LABEL_FILL)
        .attr('font-family', '"Fira Code", monospace')
        .attr('font-size', CGRA_LABEL_FONT_SIZE)
        .attr('font-weight', 500)
        .attr('text-anchor', 'middle')
        .attr('dominant-baseline', 'central')
        .attr('pointer-events', 'none')
        .text(cgraLayout.displayLabel || cgraLayout.label || cgraLayout.id);

      const connectorStartX = CGRA_ROUTER_CONNECTOR_INSET;
      const connectorStartY = cgraLayout.height - CGRA_ROUTER_CONNECTOR_INSET;
      const connectorDx = cgraLayout.routerLocalX - connectorStartX;
      const connectorDy = cgraLayout.routerLocalY - connectorStartY;
      const connectorLength = Math.sqrt(connectorDx * connectorDx + connectorDy * connectorDy) || 1;
      const connectorEndX =
        cgraLayout.routerLocalX - (connectorDx / connectorLength) * CGRA_ROUTER_RADIUS;
      const connectorEndY =
        cgraLayout.routerLocalY - (connectorDy / connectorLength) * CGRA_ROUTER_RADIUS;

      group
        .append('line')
        .attr('class', 'cgra-router-connector')
        .attr('x1', connectorStartX)
        .attr('y1', connectorStartY)
        .attr('x2', connectorEndX)
        .attr('y2', connectorEndY)
        .attr('stroke', CGRA_ROUTER_STROKE)
        .attr('stroke-width', 3)
        .attr('stroke-opacity', 0.85)
        .attr('stroke-linecap', 'round');

      const peLayer = group.append('g').attr('class', 'pe-nodes');

      const positionMap = new Map();
      cgraLayout.PEs.forEach((pe) => {
        const col = pe.x - cgraLayout.minX;
        const row = pe.y - cgraLayout.minY;
        const gridColumn = col;
        const displayColumn = pe.x;
        const displayRow = cgraLayout.rows - 1 - row;
        const drawingRow = row;
        const px = CGRA_PADDING + gridColumn * (PE_SIZE + PE_GAP);
        const py = CGRA_PADDING + drawingRow * (PE_SIZE + PE_GAP);
        const defaultTopLabel = `PE (${row}, ${gridColumn})`;
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
        const displayLabelLines = isDefaultTopLabel ? ['PE', `(${pe.x}, ${displayRow})`] : null;
        positionMap.set(`${pe.x},${pe.y}`, {
          ...pe,
          label: displayLabel,
          displayColumn,
          displayRow,
          displayLabel,
          displayLabelLines,
          px,
          py,
          cx: px + PE_SIZE / 2,
          cy: py + PE_SIZE / 2
        });
      });

      const peLinks = [];
      positionMap.forEach((pe) => {
        const outgoing = pe?.outgoingLinks || {};

        Object.entries(PE_DIRECTION_OFFSETS).forEach(([direction, offset]) => {
          if (!outgoing[direction]) {
            return;
          }

          const neighbor = positionMap.get(`${pe.x + offset.dx},${pe.y + offset.dy}`);
          if (!neighbor) {
            return;
          }

          const endpoints = computePeLinkEndpoints(pe, neighbor);
          peLinks.push({
            source: pe,
            target: neighbor,
            direction,
            ...endpoints
          });
        });
      });

      const peNodes = Array.from(positionMap.values());

      const nodeGroups = peLayer
        .selectAll('g.pe')
        .data(peNodes)
        .enter()
        .append('g')
        .attr('class', 'pe')
        .attr('data-id', (d) => d.id)
        .attr('transform', (d) => `translate(${d.px}, ${d.py})`)
        .style('cursor', 'pointer')
        .on('click', (event, d) => {
          event.stopPropagation();
          onSelectionChange?.({ type: 'pe', id: d.id, cgraId: cgraLayout.id });
        });

      nodeGroups
        .append('rect')
        .attr('width', PE_SIZE)
        .attr('height', PE_SIZE)
        .attr('rx', 8)
        .attr('ry', 8)
        .attr('fill', (d) => (d.disabled ? PE_DISABLED_FILL : PE_FILL))
        .attr('stroke', PE_STROKE)
        .attr('stroke-width', 1.5);

      nodeGroups
        .append('text')
        .attr('x', PE_SIZE / 2)
        .attr('y', PE_SIZE / 2)
        .attr('fill', (d) => (d.disabled ? PE_LABEL_DISABLED_FILL : PE_LABEL_FILL))
        .attr('font-family', '"Fira Code", monospace')
        .attr('font-size', PE_LABEL_FONT_SIZE)
        .attr('text-anchor', 'middle')
        .attr('dominant-baseline', 'middle')
        .call(applyPeLabel);

      const peLinkLayer = group
        .append('g')
        .attr('class', 'pe-links')
        .attr('stroke', '#60a5fa')
        .attr('stroke-width', 2)
        .attr('stroke-opacity', 0.4)
        .attr('fill', 'none')
        .attr('pointer-events', 'none');

      peLinkLayer
        .selectAll('line')
        .data(peLinks)
        .enter()
        .append('line')
        .attr('x1', (d) => d.x1)
        .attr('y1', (d) => d.y1)
        .attr('x2', (d) => d.x2)
        .attr('y2', (d) => d.y2)
        .attr('marker-end', 'url(#pe-arrow)')
        .attr('stroke-linecap', 'round');

      group
        .append('circle')
        .attr('class', 'cgra-router')
        .attr('cx', cgraLayout.routerLocalX)
        .attr('cy', cgraLayout.routerLocalY)
        .attr('r', CGRA_ROUTER_RADIUS)
        .attr('fill', CGRA_ROUTER_FILL)
        .attr('stroke', CGRA_ROUTER_STROKE)
        .attr('stroke-width', 3)
        .attr('stroke-opacity', 0.85);
    });

    const cgraLinks = [];
    const cgraMap = new Map();
    layout.layouts.forEach((cgra) => {
      cgraMap.set(`${cgra.x},${cgra.y}`, cgra);
    });

    layout.layouts.forEach((cgra) => {
      const rightNeighbor = cgraMap.get(`${cgra.x + 1},${cgra.y}`);
      const downNeighbor = cgraMap.get(`${cgra.x},${cgra.y + 1}`);
      if (rightNeighbor) {
        const endpoints = computeRouterLinkEndpoints(cgra, rightNeighbor);
        cgraLinks.push({
          source: cgra,
          target: rightNeighbor,
          ...endpoints
        });
      }
      if (downNeighbor) {
        const endpoints = computeRouterLinkEndpoints(cgra, downNeighbor);
        cgraLinks.push({
          source: cgra,
          target: downNeighbor,
          ...endpoints
        });
      }
    });

    cgraLinkLayer
      .selectAll('line')
      .data(cgraLinks)
      .enter()
      .append('line')
      .attr('x1', (d) => d.x1)
      .attr('y1', (d) => d.y1)
      .attr('x2', (d) => d.x2)
      .attr('y2', (d) => d.y2)
      .attr('stroke-linecap', 'round')
      .attr('marker-end', 'url(#cgra-arrow)');

    const zoomBehavior = zoom()
      .scaleExtent([0.5, 4])
      .on('zoom', (event) => {
        zoomTransformRef.current = event.transform;
        zoomGroup.attr('transform', event.transform);
        updatePeLabelVisibility(svg, event.transform.k);
        updatePeLinkVisibility(svg, event.transform.k);
        updateCgraLabelVisibility(svg, event.transform.k);
      });

    svg.call(zoomBehavior);

    if (zoomTransformRef.current) {
      zoomGroup.attr('transform', zoomTransformRef.current);
      zoomBehavior.transform(svg, zoomTransformRef.current);
      updatePeLabelVisibility(svg, zoomTransformRef.current.k);
      updatePeLinkVisibility(svg, zoomTransformRef.current.k);
      updateCgraLabelVisibility(svg, zoomTransformRef.current.k);
    } else {
      updatePeLabelVisibility(svg, 1);
      updatePeLinkVisibility(svg, 1);
      updateCgraLabelVisibility(svg, 1);
    }
    svg.on('click', (event) => {
      if (event.defaultPrevented) return;
      onSelectionChange?.(null);
    });

    return () => {
      svg.on('.zoom', null);
      svg.on('click', null);
    };
  }, [layout, onSelectionChange]);

  useEffect(() => {
    if (!svgRef.current) return;

    const svg = select(svgRef.current);

    svg.selectAll('g.cgra').each(function updateCgra() {
      const group = select(this);
      const id = group.attr('data-id');
      const boundary = group.select('rect.cgra-boundary');
      const label = group.select('text.cgra-label');
      const isSelected = selection?.type === 'cgra' && selection.id === id;
      const data = group.datum();

      boundary
        .attr('fill', isSelected ? CGRA_SELECTED_FILL : CGRA_FILL)
        .attr('stroke', isSelected ? CGRA_SELECTED_STROKE : CGRA_STROKE)
        .attr('stroke-width', isSelected ? 3.5 : 2.5)
        .attr('stroke-opacity', isSelected ? 0.95 : 1);

      if (!label.empty()) {
        label
          .text(data?.displayLabel || data?.label || data?.id || id)
          .attr('fill', isSelected ? CGRA_LABEL_SELECTED_FILL : CGRA_LABEL_FILL);
      }
    });

    svg.selectAll('g.pe').each(function updatePe() {
      const node = select(this);
      const id = node.attr('data-id');
      const rect = node.select('rect');
      const label = node.select('text');
      const isSelected = selection?.type === 'pe' && selection.id === id;
      const data = node.datum();
      const isDisabled = Boolean(data?.disabled);

      rect
        .attr('fill', () => {
          if (isSelected) return PE_SELECTED_FILL;
          return isDisabled ? PE_DISABLED_FILL : PE_FILL;
        })
        .attr('stroke', isSelected ? PE_SELECTED_STROKE : PE_STROKE)
        .attr('stroke-width', isSelected ? 2 : 1.5);

      label
        .attr('fill', () => {
          if (isSelected) return PE_LABEL_SELECTED_FILL;
          return isDisabled ? PE_LABEL_DISABLED_FILL : PE_LABEL_FILL;
        })
        .call(applyPeLabel);
    });
  }, [layout, selection]);

  return (
    <Box
      sx={{
        width: '100%',
        height: '100%',
        p: 3,
        bgcolor: 'rgba(15,23,42,0.55)',
        borderRadius: 1,
        boxShadow: 'inset 0 0 0 1px rgba(148,163,184,0.25)'
      }}
    >
      <svg ref={svgRef} />
    </Box>
  );
}

export default MainCanvas;
