export function createPeConnectionsLayer(root) {
  const group = root
    .append('g')
    .attr('class', 'layer-pe-connections')
    .attr('stroke', '#60a5fa')
    .attr('stroke-width', 2)
    .attr('stroke-opacity', 0.55)
    .attr('fill', 'none')
    .attr('pointer-events', 'none');
  const clampOpacity = (value) =>
    Number.isFinite(value) ? Math.max(0, Math.min(1, value)) : 1;

  const render = (connections = []) => {
    const linkSelection = group.selectAll('line.pe-connection').data(connections, (d) => d.id);

    linkSelection.exit().remove();

    linkSelection
      .enter()
      .append('line')
      .attr('class', 'pe-connection')
      .attr('marker-end', 'url(#pe-arrow)')
      .attr('stroke-linecap', 'round')
      .merge(linkSelection)
      .attr('x1', (d) => d.x1)
      .attr('y1', (d) => d.y1)
      .attr('x2', (d) => d.x2)
      .attr('y2', (d) => d.y2);
  };

  const handleZoom = () => {};

  const setVisibility = (visible) => {
    group.attr('display', visible ? null : 'none');
  };

  const setOpacity = (value) => {
    group.attr('opacity', clampOpacity(value));
  };

  const destroy = () => {
    group.remove();
  };

  return {
    render,
    handleZoom,
    setVisibility,
    setOpacity,
    destroy
  };
}
