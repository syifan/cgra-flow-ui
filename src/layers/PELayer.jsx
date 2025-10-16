import { select } from 'd3';

const PE_SIZE = 42;
const PE_GAP = 48;
const CGRA_PADDING = 32;
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

export function updatePeLabelVisibility(svg, zoomLevel) {
  const display = zoomLevel >= PE_LABEL_VISIBILITY_THRESHOLD ? null : 'none';
  svg
    .selectAll('g.pe text')
    .attr('display', display)
    .attr('aria-hidden', zoomLevel >= PE_LABEL_VISIBILITY_THRESHOLD ? null : 'true');
}

export function renderPELayer(parent, cgraLayout, onSelectionChange) {
  const peLayer = parent.append('g').attr('class', 'pe-nodes');

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

  return { peLayer, positionMap };
}

export function updatePESelection(svg, selection) {
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
}
