import { useCallback, useEffect, useMemo, useRef, useState } from 'react';
import { Box } from '@mui/material';
import { select, zoom, zoomIdentity } from 'd3';
import {
  AUTO_LAYER_LABEL_OPACITY_FLOOR,
  CGRA_AUTO_FADE_OUT_END,
  CGRA_AUTO_FADE_OUT_START,
  CGRA_LABEL_EMPHASIS_END,
  CGRA_LABEL_EMPHASIS_START,
  CANVAS_ZOOM_MAX,
  CANVAS_ZOOM_MIN,
  PE_AUTO_FADE_IN_END,
  PE_AUTO_FADE_IN_START,
  PE_LABEL_EMPHASIS_END,
  PE_LABEL_EMPHASIS_START,
  PE_LINK_ARROW_LENGTH
} from './canvas/constants';
import { createCgraConnectionsLayer } from './canvas/cgraConnectionsLayer';
import { createCgraNodesLayer } from './canvas/cgraNodesLayer';
import { buildCanvasLayout } from './canvas/layout';
import { createPeConnectionsLayer } from './canvas/peConnectionsLayer';
import { createPeNodesLayer } from './canvas/peNodesLayer';
import LayerControl from './LayerControl';

const LAYER_VALUES = {
  AUTO: 'auto',
  CGRA_CONNECTIONS: 'cgraConnections',
  CGRAS: 'cgras',
  PE_CONNECTIONS: 'peConnections',
  PES: 'pes'
};

const LAYER_GROUPS = {
  CGRA: 'cgra',
  PE: 'pe'
};

const LAYER_OPTIONS = [
  { value: LAYER_VALUES.AUTO, label: 'Auto' },
  { value: LAYER_VALUES.CGRA_CONNECTIONS, label: 'CGRA Links' },
  { value: LAYER_VALUES.CGRAS, label: 'CGRAs' },
  { value: LAYER_VALUES.PE_CONNECTIONS, label: 'PE Links' },
  { value: LAYER_VALUES.PES, label: 'PEs' }
];

const LAYER_LABELS = {
  [LAYER_VALUES.CGRA_CONNECTIONS]: 'CGRA Links',
  [LAYER_VALUES.CGRAS]: 'CGRAs',
  [LAYER_VALUES.PE_CONNECTIONS]: 'PE Links',
  [LAYER_VALUES.PES]: 'PEs'
};

const AUTO_LAYER_LABELS = {
  [LAYER_GROUPS.CGRA]: 'CGRAs + Links',
  [LAYER_GROUPS.PE]: 'PEs + Links'
};

const ORDERED_LAYER_VALUES = [
  LAYER_VALUES.CGRA_CONNECTIONS,
  LAYER_VALUES.CGRAS,
  LAYER_VALUES.PE_CONNECTIONS,
  LAYER_VALUES.PES
];

const clamp01 = (value) => Math.max(0, Math.min(1, value));

const smoothstep = (value, min, max) => {
  if (value <= min) return 0;
  if (value >= max) return 1;
  const t = (value - min) / (max - min || 1);
  return t * t * (3 - 2 * t);
};

const computeOpacityProfile = (zoomLevel) => {
  const k = Number.isFinite(zoomLevel) ? zoomLevel : 1;
  const cgraFadeOut = smoothstep(k, CGRA_AUTO_FADE_OUT_START, CGRA_AUTO_FADE_OUT_END);
  const peFadeIn = smoothstep(k, PE_AUTO_FADE_IN_START, PE_AUTO_FADE_IN_END);

  const cgraOpacity = clamp01(1 - cgraFadeOut);
  const peOpacity = clamp01(peFadeIn);

  const cgraLabelEmphasis = smoothstep(k, CGRA_LABEL_EMPHASIS_START, CGRA_LABEL_EMPHASIS_END);
  const peLabelEmphasis = smoothstep(k, PE_LABEL_EMPHASIS_START, PE_LABEL_EMPHASIS_END);

  const cgraLabelOpacity = clamp01(
    Math.max(cgraOpacity, AUTO_LAYER_LABEL_OPACITY_FLOOR + (1 - AUTO_LAYER_LABEL_OPACITY_FLOOR) * cgraLabelEmphasis)
  );
  const peLabelOpacity = clamp01(
    Math.max(peOpacity, AUTO_LAYER_LABEL_OPACITY_FLOOR + (1 - AUTO_LAYER_LABEL_OPACITY_FLOOR) * peLabelEmphasis)
  );

  return {
    cgraOpacity,
    peOpacity,
    cgraLabelOpacity,
    peLabelOpacity
  };
};

const pickLayerForZoom = (zoomLevel) => {
  const { cgraOpacity, peOpacity } = computeOpacityProfile(zoomLevel);
  return peOpacity > cgraOpacity ? LAYER_GROUPS.PE : LAYER_GROUPS.CGRA;
};

const orderLayers = (layers) =>
  ORDERED_LAYER_VALUES.filter((layer) => layers.includes(layer));

function MainCanvas({ architecture, selection, onSelectionChange }) {
  const svgRef = useRef(null);
  const zoomGroupRef = useRef(null);
  const zoomBehaviorRef = useRef(null);
  const zoomTransformRef = useRef(zoomIdentity);
  const currentZoomRef = useRef(1);
  const layerControllersRef = useRef(null);
  const autoEnabledRef = useRef(true);
  const autoLayerRef = useRef(pickLayerForZoom(1));
  const manualLayersRef = useRef(ORDERED_LAYER_VALUES);
  const selectionRef = useRef(selection);

  const [autoEnabled, setAutoEnabled] = useState(true);
  const [autoLayer, setAutoLayer] = useState(() => pickLayerForZoom(1));
  const [manualLayers, setManualLayers] = useState(() => ORDERED_LAYER_VALUES);

  const layout = useMemo(() => buildCanvasLayout(architecture), [architecture]);

  useEffect(() => {
    autoEnabledRef.current = autoEnabled;
  }, [autoEnabled]);

  useEffect(() => {
    autoLayerRef.current = autoLayer;
  }, [autoLayer]);

  useEffect(() => {
    manualLayersRef.current = manualLayers;
  }, [manualLayers]);

  useEffect(() => {
    selectionRef.current = selection;
  }, [selection]);

  const applyLayerVisibility = useCallback((layerKeys) => {
    const layers = layerControllersRef.current?.layers;
    if (!layers) return;

    const visible = new Set(Array.isArray(layerKeys) ? layerKeys : [layerKeys]);

    Object.entries(layers).forEach(([key, controller]) => {
      controller?.setVisibility?.(visible.has(key));
    });
  }, []);

  const updateGroupOpacities = useCallback((zoomLevel) => {
    const { groups, layers } = layerControllersRef.current ?? {};
    if (!groups || !layers) return;

    const k = Number.isFinite(zoomLevel) ? zoomLevel : 1;

    if (autoEnabledRef.current) {
      const {
        cgraOpacity,
        peOpacity,
        cgraLabelOpacity,
        peLabelOpacity
      } = computeOpacityProfile(k);

      groups[LAYER_GROUPS.CGRA]?.setOpacity?.(cgraOpacity);
      groups[LAYER_GROUPS.CGRA]?.setLabelOpacity?.(cgraLabelOpacity);
      groups[LAYER_GROUPS.PE]?.setOpacity?.(peOpacity);
      groups[LAYER_GROUPS.PE]?.setLabelOpacity?.(peLabelOpacity);
      if (cgraOpacity <= 0 && selectionRef.current?.type === 'cgra') {
        onSelectionChange?.(null);
      }
      if (peOpacity <= 0 && selectionRef.current?.type === 'pe') {
        onSelectionChange?.(null);
      }
      return;
    }

    ORDERED_LAYER_VALUES.forEach((layerKey) => {
      const controller = layers[layerKey];
      if (!controller) return;
      const isVisible = manualLayersRef.current.includes(layerKey);
      const opacity = isVisible ? 1 : 0;
      controller.setOpacity?.(opacity);
      if (layerKey === LAYER_VALUES.CGRAS || layerKey === LAYER_VALUES.PES) {
        controller.setLabelOpacity?.(opacity);
      }
      if (
        !isVisible &&
        ((layerKey === LAYER_VALUES.CGRAS && selectionRef.current?.type === 'cgra') ||
          (layerKey === LAYER_VALUES.PES && selectionRef.current?.type === 'pe'))
      ) {
        onSelectionChange?.(null);
      }
    });
  }, [onSelectionChange]);

  const handleLayerToggle = useCallback(
    (event) => {
      const value = event.currentTarget.value;

      if (value === LAYER_VALUES.AUTO) {
        const enableAuto = !autoEnabledRef.current;
        setAutoEnabled(enableAuto);

        if (enableAuto) {
          const nextLayer = pickLayerForZoom(currentZoomRef.current);
          autoLayerRef.current = nextLayer;
          setAutoLayer(nextLayer);
          applyLayerVisibility(ORDERED_LAYER_VALUES);
          updateGroupOpacities(currentZoomRef.current);
        } else {
          const nextManual = manualLayersRef.current.length
            ? manualLayersRef.current
            : ORDERED_LAYER_VALUES;
          manualLayersRef.current = nextManual;
          setManualLayers(nextManual);
          applyLayerVisibility(nextManual);
          updateGroupOpacities(currentZoomRef.current);
        }

        return;
      }

      if (autoEnabledRef.current) {
        setAutoEnabled(false);
        const nextManual = manualLayersRef.current.includes(value)
          ? manualLayersRef.current
          : orderLayers([...manualLayersRef.current, value]);
        manualLayersRef.current = nextManual;
        setManualLayers(nextManual);
        applyLayerVisibility(nextManual);
        updateGroupOpacities(currentZoomRef.current);
        return;
      }

      const isSelected = manualLayersRef.current.includes(value);

      if (isSelected && manualLayersRef.current.length === 1) {
        return;
      }

      const nextManual = isSelected
        ? orderLayers(manualLayersRef.current.filter((layer) => layer !== value))
        : orderLayers([...manualLayersRef.current, value]);

      manualLayersRef.current = nextManual;
      setManualLayers(nextManual);
      applyLayerVisibility(nextManual);
      updateGroupOpacities(currentZoomRef.current);
    },
    [applyLayerVisibility, updateGroupOpacities]
  );

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
    zoomGroupRef.current = zoomGroup;

    const cgraConnectionsLayer = createCgraConnectionsLayer(zoomGroup, { onSelectionChange });
    const cgraNodesLayer = createCgraNodesLayer(zoomGroup, { onSelectionChange });
    const peConnectionsLayer = createPeConnectionsLayer(zoomGroup);
    const peNodesLayer = createPeNodesLayer(zoomGroup, { onSelectionChange });

    layerControllersRef.current = {
      svg,
      layers: {
        [LAYER_VALUES.CGRA_CONNECTIONS]: cgraConnectionsLayer,
        [LAYER_VALUES.CGRAS]: cgraNodesLayer,
        [LAYER_VALUES.PE_CONNECTIONS]: peConnectionsLayer,
        [LAYER_VALUES.PES]: peNodesLayer
      },
      groups: {
        [LAYER_GROUPS.CGRA]: {
          setVisibility: (visible) => {
            cgraConnectionsLayer.setVisibility?.(visible);
            cgraNodesLayer.setVisibility?.(visible);
          },
          setOpacity: (value) => {
            cgraConnectionsLayer.setOpacity?.(value);
            cgraNodesLayer.setOpacity?.(value);
          },
          setLabelOpacity: (value) => {
            cgraNodesLayer.setLabelOpacity?.(value);
          }
        },
        [LAYER_GROUPS.PE]: {
          setVisibility: (visible) => {
            peConnectionsLayer.setVisibility?.(visible);
            peNodesLayer.setVisibility?.(visible);
          },
          setOpacity: (value) => {
            peConnectionsLayer.setOpacity?.(value);
            peNodesLayer.setOpacity?.(value);
          },
          setLabelOpacity: (value) => {
            peNodesLayer.setLabelOpacity?.(value);
          }
        }
      }
    };

    const handleBackgroundClick = (event) => {
      if (event.defaultPrevented) return;
      onSelectionChange?.(null);
    };
    svg.on('click', handleBackgroundClick);

    const handleZoom = (event) => {
      zoomTransformRef.current = event.transform;
      currentZoomRef.current = event.transform.k;
      zoomGroup.attr('transform', event.transform);

      cgraNodesLayer.handleZoom?.(event.transform.k);
      peNodesLayer.handleZoom?.(event.transform.k);
      peConnectionsLayer.handleZoom?.(event.transform.k);
      cgraConnectionsLayer.handleZoom?.(event.transform.k);
      updateGroupOpacities(event.transform.k);

      const nextAutoLayer = pickLayerForZoom(event.transform.k);
      if (nextAutoLayer !== autoLayerRef.current) {
        autoLayerRef.current = nextAutoLayer;
        setAutoLayer(nextAutoLayer);
      }
    };

    const zoomBehavior = zoom().scaleExtent([CANVAS_ZOOM_MIN, CANVAS_ZOOM_MAX]).on('zoom', handleZoom);
    svg.call(zoomBehavior);
    zoomBehaviorRef.current = zoomBehavior;

    if (zoomTransformRef.current) {
      zoomGroup.attr('transform', zoomTransformRef.current);
      zoomBehavior.transform(svg, zoomTransformRef.current);
    } else {
      zoomGroup.attr('transform', zoomIdentity);
    }

    handleZoom({ transform: zoomTransformRef.current ?? zoomIdentity });

    const visibleLayers = autoEnabledRef.current
      ? ORDERED_LAYER_VALUES
      : manualLayersRef.current;
    applyLayerVisibility(visibleLayers);
    updateGroupOpacities(currentZoomRef.current);

    return () => {
      svg.on('.zoom', null);
      svg.on('click', null);
      zoomBehaviorRef.current = null;
      zoomGroupRef.current = null;

      Object.values(layerControllersRef.current?.layers ?? {}).forEach((layer) => {
        layer?.destroy?.();
      });

      layerControllersRef.current = null;
    };
  }, [layout.width, layout.height, onSelectionChange, applyLayerVisibility, updateGroupOpacities]);

  useEffect(() => {
    const controllers = layerControllersRef.current?.layers;
    const svg = layerControllersRef.current?.svg;
    if (!controllers || !svg) return;

    svg.attr('viewBox', `0 0 ${layout.width} ${layout.height}`);

    controllers[LAYER_VALUES.CGRA_CONNECTIONS].render({
      links: layout.cgraConnections,
      connectors: layout.cgraSwitchConnectors,
      switches: layout.cgraSwitches
    });
    controllers[LAYER_VALUES.CGRAS].render(layout.cgras);
    controllers[LAYER_VALUES.PES].render(layout.peNodes);
    controllers[LAYER_VALUES.PE_CONNECTIONS].render(layout.peConnections);

    controllers[LAYER_VALUES.CGRAS].handleZoom?.(currentZoomRef.current);
    controllers[LAYER_VALUES.PES].handleZoom?.(currentZoomRef.current);
    controllers[LAYER_VALUES.PE_CONNECTIONS].handleZoom?.(currentZoomRef.current);

    const visibleLayers = autoEnabled ? ORDERED_LAYER_VALUES : manualLayers;
    applyLayerVisibility(visibleLayers);
    updateGroupOpacities(currentZoomRef.current);
  }, [layout, autoEnabled, manualLayers, applyLayerVisibility, updateGroupOpacities]);

  useEffect(() => {
    const controllers = layerControllersRef.current?.layers;
    if (!controllers) return;
    controllers[LAYER_VALUES.CGRAS].updateSelection?.(selection);
    controllers[LAYER_VALUES.CGRA_CONNECTIONS].updateSelection?.(selection);
    controllers[LAYER_VALUES.PES].updateSelection?.(selection);
  }, [selection]);

  useEffect(() => {
    const visibleLayers = autoEnabled ? ORDERED_LAYER_VALUES : manualLayers;
    applyLayerVisibility(visibleLayers);
    updateGroupOpacities(currentZoomRef.current);
  }, [autoEnabled, autoLayer, manualLayers, applyLayerVisibility, updateGroupOpacities]);

  const selectedValues = useMemo(() => {
    if (autoEnabled) {
      return [LAYER_VALUES.AUTO, ...ORDERED_LAYER_VALUES];
    }
    return manualLayers;
  }, [autoEnabled, manualLayers]);

  const resolvedLayerLabel = useMemo(() => {
    if (autoEnabled) {
      return AUTO_LAYER_LABELS[autoLayer] ?? '';
    }
    const labels = manualLayers.map((layer) => LAYER_LABELS[layer]).filter(Boolean);
    return labels.join(', ');
  }, [autoEnabled, autoLayer, manualLayers]);

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
      <Box
        sx={{
          position: 'relative',
          width: '100%',
          height: '100%'
        }}
      >
        <svg ref={svgRef} style={{ width: '100%', height: '100%' }} />
        <LayerControl
          statusLabel={autoEnabled ? `Auto • ${resolvedLayerLabel}` : `Manual • ${resolvedLayerLabel}`}
          selectedValues={selectedValues}
          options={LAYER_OPTIONS}
          onToggle={handleLayerToggle}
          sx={{
            position: 'absolute',
            top: 16,
            right: 16
          }}
        />
      </Box>
    </Box>
  );
}

export default MainCanvas;
