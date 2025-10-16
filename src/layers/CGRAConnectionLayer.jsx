export function computeRouterLinkEndpoints(source, target) {
  const CGRA_ROUTER_RADIUS = 14;
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

export function renderCGRAConnectionLayer(parent, layouts) {
  const cgraLinkLayer = parent
    .append('g')
    .attr('class', 'cgra-links')
    .attr('stroke', '#7dd3fc')
    .attr('stroke-width', 3)
    .attr('stroke-opacity', 0.45)
    .attr('fill', 'none');

  const cgraLinks = [];
  const cgraMap = new Map();
  layouts.forEach((cgra) => {
    cgraMap.set(`${cgra.x},${cgra.y}`, cgra);
  });

  layouts.forEach((cgra) => {
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

  return cgraLinkLayer;
}
