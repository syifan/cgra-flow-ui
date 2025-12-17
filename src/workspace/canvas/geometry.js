import {
  CGRA_ROUTER_RADIUS,
  PE_LINK_ARROW_CLEARANCE,
  PE_LINK_ARROW_LENGTH,
  PE_LINK_SOURCE_DETACHMENT,
  PE_LINK_TARGET_DETACHMENT,
  PE_RADIUS
} from './constants';

export function computeRouterLinkEndpoints(source, target) {
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

export function computePeLinkEndpoints(source, target) {
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

  sourceClearance = Math.max(
    boundaryDistance,
    Math.min(sourceClearance, distance - minimumTargetClearance)
  );
  const remaining = Math.max(distance - sourceClearance, 0);
  targetClearance = Math.max(
    minimumTargetClearance,
    Math.min(targetClearance, remaining)
  );

  return {
    x1: source.cx + ux * sourceClearance,
    y1: source.cy + uy * sourceClearance,
    x2: target.cx - ux * targetClearance,
    y2: target.cy - uy * targetClearance,
    marker: `url(#pe-arrow)`
  };
}

export const PE_ARROW_MARKER_ID = 'pe-arrow';
export const CGRA_ARROW_MARKER_ID = 'cgra-arrow';
