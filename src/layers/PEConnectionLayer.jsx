const PE_SIZE = 42;
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

export function updatePeLinkVisibility(svg, zoomLevel) {
  const visible = zoomLevel >= PE_LINK_VISIBILITY_THRESHOLD;
  svg
    .selectAll('g.pe-links')
    .attr('display', visible ? null : 'none')
    .attr('aria-hidden', visible ? null : 'true');
}

export function renderPEConnectionLayer(parent, positionMap) {
  const peLinkLayer = parent
    .append('g')
    .attr('class', 'pe-links')
    .attr('stroke', '#60a5fa')
    .attr('stroke-width', 2)
    .attr('stroke-opacity', 0.4)
    .attr('fill', 'none')
    .attr('pointer-events', 'none');

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

  return peLinkLayer;
}
