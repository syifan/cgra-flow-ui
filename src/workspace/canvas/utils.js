import { select } from 'd3';
import {
  PE_LABEL_FONT_SIZE,
  PE_LABEL_LINE_HEIGHT_EM,
  PE_LABEL_MAX_CHARS_PER_LINE,
  PE_LABEL_MAX_LINES,
  PE_SIZE
} from './constants';

export function normalizeLabelText(raw) {
  if (raw == null) return '';
  return String(raw).replace(/\s+/g, ' ').trim();
}

export function splitLabelIntoLines(label) {
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

export function applyPeLabel(selection) {
  selection.each(function applyLabel(data) {
    const text = select(this);
    const lines = Array.isArray(data?.displayLabelLines)
      ? data.displayLabelLines
      : splitLabelIntoLines(data?.displayLabel || data?.label || data?.id);

    text.attr('font-size', PE_LABEL_FONT_SIZE);
    text.selectAll('tspan').remove();

    if (!lines.length) {
      return;
    }

    const initialDy =
      lines.length === 1
        ? '0em'
        : `${(-((lines.length - 1) / 2) * PE_LABEL_LINE_HEIGHT_EM).toFixed(2)}em`;

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
