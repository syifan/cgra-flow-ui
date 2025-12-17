import { getOppositeDirection, PE_DIRECTION_OFFSETS, PE_DIRECTIONS } from './peDirections.js';

const ensureNumber = (value, fallback = 0) => {
  const numeric = Number(value);
  return Number.isFinite(numeric) ? numeric : fallback;
};

export const createPeConnectionId = (source, destination) =>
  `${source.peId}:${source.direction}->${destination.peId}:${destination.direction}`;

export const buildPeSpatialIndex = (architecture) => {
  const peById = new Map();
  const coordinateMap = new Map();
  const cgraById = new Map();
  const bounds = {
    minColumn: Infinity,
    maxColumn: -Infinity,
    minRow: Infinity,
    maxRow: -Infinity
  };

  const cgras = Array.isArray(architecture?.CGRAs) ? architecture.CGRAs : [];
  if (cgras.length === 0) {
    return { peById, coordinateMap, cgraById };
  }

  const layouts = cgras
    .map((cgra) => {
      if (!cgra || !Array.isArray(cgra.PEs) || cgra.PEs.length === 0) {
        return null;
      }

      const xs = cgra.PEs.map((pe) => ensureNumber(pe?.x));
      const ys = cgra.PEs.map((pe) => ensureNumber(pe?.y));
      const minX = Math.min(...xs);
      const maxX = Math.max(...xs);
      const minY = Math.min(...ys);
      const maxY = Math.max(...ys);
      const columns = Math.max(1, maxX - minX + 1);
      const rows = Math.max(1, maxY - minY + 1);

      return {
        cgra,
        minX,
        minY,
        columns,
        rows,
        columnKey: ensureNumber(cgra?.x),
        rowKey: ensureNumber(cgra?.y)
      };
    })
    .filter(Boolean);

  if (layouts.length === 0) {
    return { peById, coordinateMap, cgraById };
  }

  const columnWidths = new Map();
  const rowHeights = new Map();

  layouts.forEach((layout) => {
    columnWidths.set(
      layout.columnKey,
      Math.max(columnWidths.get(layout.columnKey) ?? 0, layout.columns)
    );
    rowHeights.set(
      layout.rowKey,
      Math.max(rowHeights.get(layout.rowKey) ?? 0, layout.rows)
    );
  });

  const columnOffsets = new Map();
  let accumulatedColumns = 0;
  [...columnWidths.keys()]
    .sort((a, b) => a - b)
    .forEach((columnKey) => {
      columnOffsets.set(columnKey, accumulatedColumns);
      accumulatedColumns += columnWidths.get(columnKey) ?? 0;
    });

  const rowOffsets = new Map();
  let accumulatedRows = 0;
  [...rowHeights.keys()]
    .sort((a, b) => a - b)
    .forEach((rowKey) => {
      rowOffsets.set(rowKey, accumulatedRows);
      accumulatedRows += rowHeights.get(rowKey) ?? 0;
    });

  layouts.forEach((layout) => {
    const { cgra, minX, minY, columns, rows, columnKey, rowKey } = layout;

    const globalColumnOffset = columnOffsets.get(columnKey) ?? 0;
    const globalRowOffset = rowOffsets.get(rowKey) ?? 0;

    cgraById.set(cgra.id, {
      id: cgra.id,
      x: columnKey,
      y: rowKey,
      columns,
      rows,
      minX,
      minY,
      globalColumnOffset,
      globalRowOffset
    });

    cgra.PEs.forEach((pe) => {
      if (!pe || !pe.id) return;

      const localColumn = ensureNumber(pe.x) - minX;
      const localRow = ensureNumber(pe.y) - minY;
      const globalColumn = globalColumnOffset + localColumn;
      const globalRow = globalRowOffset + localRow;
      const metadata = {
        id: pe.id,
        pe,
        cgra,
        cgraId: cgra.id,
        localColumn,
        localRow,
        globalColumn,
        globalRow
      };

      peById.set(pe.id, metadata);
      bounds.minColumn = Math.min(bounds.minColumn, globalColumn);
      bounds.maxColumn = Math.max(bounds.maxColumn, globalColumn);
      bounds.minRow = Math.min(bounds.minRow, globalRow);
      bounds.maxRow = Math.max(bounds.maxRow, globalRow);

      const key = `${globalColumn},${globalRow}`;
      const existing = coordinateMap.get(key);
      if (existing) {
        existing.push(metadata);
      } else {
        coordinateMap.set(key, [metadata]);
      }
    });
  });

  if (!Number.isFinite(bounds.minColumn)) {
    bounds.minColumn = 0;
    bounds.maxColumn = 0;
    bounds.minRow = 0;
    bounds.maxRow = 0;
  }

  return { peById, coordinateMap, cgraById, bounds };
};

export const findNeighborPe = (peId, direction, index) => {
  if (!peId || !direction || !index) return null;
  const source = index.peById.get(peId);
  if (!source) return null;

  const offset = PE_DIRECTION_OFFSETS[direction];
  if (!offset) return null;

  const { minColumn, maxColumn, minRow, maxRow } = index.bounds ?? {};
  const hasBounds =
    Number.isFinite(minColumn) &&
    Number.isFinite(maxColumn) &&
    Number.isFinite(minRow) &&
    Number.isFinite(maxRow);

  const stepLimit = hasBounds
    ? Math.max(
        Math.abs(maxColumn - minColumn),
        Math.abs(maxRow - minRow),
        1
      )
    : 1;

  const maxSteps = Math.max(stepLimit, 1);

  for (let step = 1; step <= maxSteps; step += 1) {
    const neighborColumn = source.globalColumn + offset.dx * step;
    const neighborRow = source.globalRow + offset.dy * step;

    if (hasBounds) {
      if (
        neighborColumn < minColumn ||
        neighborColumn > maxColumn ||
        neighborRow < minRow ||
        neighborRow > maxRow
      ) {
        break;
      }
    } else if (step > 1) {
      break;
    }

    const candidates = index.coordinateMap.get(`${neighborColumn},${neighborRow}`);
    if (!candidates || candidates.length === 0) {
      continue;
    }

    const neighbor =
      candidates.find((candidate) => candidate.id !== peId) ?? candidates[0];

    if (!neighbor || neighbor.id === peId) {
      continue;
    }

    return neighbor;
  }

  return null;
};

export const deriveOutgoingLinksForPe = (peId, connections) => {
  const outgoing = {};
  PE_DIRECTIONS.forEach((direction) => {
    outgoing[direction] = false;
  });

  if (!Array.isArray(connections) || connections.length === 0) {
    return outgoing;
  }

  connections.forEach((connection) => {
    if (!connection) return;
    const { source, destination, bidirectional } = connection;
    if (source?.peId === peId && source.direction && outgoing.hasOwnProperty(source.direction)) {
      outgoing[source.direction] = true;
    }
    if (
      bidirectional &&
      destination?.peId === peId &&
      destination.direction &&
      outgoing.hasOwnProperty(destination.direction)
    ) {
      outgoing[destination.direction] = true;
    }
  });

  return outgoing;
};

export const buildConnectionsFromLegacyOutgoing = (legacyOutgoing, architecture) => {
  const index = buildPeSpatialIndex(architecture);
  const orientedMap = new Map();

  legacyOutgoing.forEach((outgoing, peId) => {
    if (!outgoing) return;
    Object.entries(outgoing).forEach(([direction, enabled]) => {
      if (!enabled) return;
      const neighbor = findNeighborPe(peId, direction, index);
      if (!neighbor) return;
      const opposite = getOppositeDirection(direction);
      if (!opposite) return;

      const source = { peId, direction };
      const destination = { peId: neighbor.id, direction: opposite };
      const id = createPeConnectionId(source, destination);
      if (orientedMap.has(id)) {
        return;
      }

      orientedMap.set(id, {
        id,
        source,
        destination,
        bidirectional: false
      });
    });
  });

  const visited = new Set();
  const merged = [];

  orientedMap.forEach((connection, id) => {
    if (visited.has(id)) return;
    const reverseId = createPeConnectionId(connection.destination, connection.source);
    const reverse = orientedMap.get(reverseId);

    if (reverse) {
      visited.add(reverseId);
      merged.push({
        id,
        source: connection.source,
        destination: connection.destination,
        bidirectional: true
      });
    } else {
      merged.push(connection);
    }

    visited.add(id);
  });

  return merged;
};

export const createDefaultPeConnections = (architecture, directions = ['n', 'e', 's', 'w']) => {
  const index = buildPeSpatialIndex(architecture);
  const connections = [];

  index.peById.forEach((metadata) => {
    directions.forEach((direction) => {
      const neighbor = findNeighborPe(metadata.id, direction, index);
      if (!neighbor) return;
      if (metadata.id.localeCompare(neighbor.id) > 0) {
        return;
      }
      const opposite = getOppositeDirection(direction);
      if (!opposite) return;

      const source = { peId: metadata.id, direction };
      const destination = { peId: neighbor.id, direction: opposite };
      connections.push({
        id: createPeConnectionId(source, destination),
        source,
        destination,
        bidirectional: true
      });
    });
  });

  return connections;
};

export const sanitizePeConnections = (connections) => {
  if (!Array.isArray(connections)) {
    return [];
  }

  const byId = new Map();
  connections.forEach((connection) => {
    if (
      !connection ||
      !connection.source ||
      !connection.destination ||
      !connection.source.peId ||
      !connection.source.direction ||
      !connection.destination.peId ||
      !connection.destination.direction
    ) {
      return;
    }

    const normalized = {
      id:
        connection.id ??
        createPeConnectionId(connection.source, connection.destination),
      source: {
        peId: connection.source.peId,
        direction: connection.source.direction
      },
      destination: {
        peId: connection.destination.peId,
        direction: connection.destination.direction
      },
      bidirectional: Boolean(connection.bidirectional)
    };

    byId.set(normalized.id, normalized);
  });

  return [...byId.values()];
};

export const updatePeConnectionsForDirection = (architecture, peId, direction, enabled) => {
  const sanitized = sanitizePeConnections(architecture?.PEConnections);

  if (!architecture || !peId || !direction) {
    return sanitized;
  }

  const index = buildPeSpatialIndex(architecture);
  const neighbor = findNeighborPe(peId, direction, index);
  const opposite = getOppositeDirection(direction);

  const source = { peId, direction };
  const destination = neighbor && opposite ? { peId: neighbor.id, direction: opposite } : null;

  if (!destination) {
    // Remove any connections that reference this direction
    const filtered = sanitized.filter((connection) => {
      if (connection.source.peId === peId && connection.source.direction === direction) {
        return false;
      }
      if (
        connection.destination.peId === peId &&
        connection.destination.direction === direction &&
        connection.bidirectional
      ) {
        // Drop this entry; the caller can re-establish other direction if needed
        return false;
      }
      return true;
    });
    return sanitizePeConnections(filtered);
  }

  const forwardId = createPeConnectionId(source, destination);
  const reverseId = createPeConnectionId(destination, source);

  const updated = [...sanitized];
  const forwardIndex = updated.findIndex((connection) => connection.id === forwardId);
  const reverseIndex = updated.findIndex((connection) => connection.id === reverseId);
  const forward = forwardIndex >= 0 ? { ...updated[forwardIndex] } : null;
  const reverse = reverseIndex >= 0 ? { ...updated[reverseIndex] } : null;

  if (enabled) {
    if (forward) {
      updated[forwardIndex] = forward;
      return sanitizePeConnections(updated);
    }

    if (reverse) {
      if (!reverse.bidirectional) {
        updated[reverseIndex] = {
          ...reverse,
          bidirectional: true
        };
      }
      return sanitizePeConnections(updated);
    }

    updated.push({
      id: forwardId,
      source,
      destination,
      bidirectional: false
    });
    return sanitizePeConnections(updated);
  }

  // Disabling the direction
  if (forward) {
    if (forward.bidirectional) {
      updated.splice(forwardIndex, 1);

      if (reverse) {
        const adjustedReverseIndex = reverseIndex > forwardIndex ? reverseIndex - 1 : reverseIndex;
        updated[adjustedReverseIndex] = {
          ...reverse,
          bidirectional: false
        };
        return sanitizePeConnections(updated);
      }

      updated.push({
        id: reverseId,
        source: destination,
        destination: source,
        bidirectional: false
      });
      return sanitizePeConnections(updated);
    }

    updated.splice(forwardIndex, 1);
    return sanitizePeConnections(updated);
  }

  if (reverse) {
    if (reverse.bidirectional) {
      updated[reverseIndex] = {
        ...reverse,
        bidirectional: false
      };
    }
    return sanitizePeConnections(updated);
  }

  return sanitizePeConnections(updated);
};

export const reconcilePeConnectionsAfterCgraResize = ({
  architecture,
  previousConnections,
  addedPeIds = [],
  removedPeIds = [],
  defaultDirections = ['n', 'e', 's', 'w']
}) => {
  const sanitized = sanitizePeConnections(previousConnections);
  const removedSet = new Set(removedPeIds);
  const index = buildPeSpatialIndex(architecture);

  const directionsToRestore = [];

  const enqueueDirectionRestore = (entry) => {
    if (!entry || !entry.peId || !entry.direction) {
      return;
    }
    if (removedSet.has(entry.peId)) {
      return;
    }
    if (index.peById.size > 0 && !index.peById.has(entry.peId)) {
      return;
    }
    directionsToRestore.push({
      peId: entry.peId,
      direction: entry.direction
    });
  };

  let nextConnections = [];
  sanitized.forEach((connection) => {
    if (!connection || !connection.source || !connection.destination) {
      return;
    }

    const sourceId = connection.source.peId;
    const destinationId = connection.destination.peId;

    const sourceExists =
      sourceId && !removedSet.has(sourceId) && (index.peById.size === 0 || index.peById.has(sourceId));
    const destinationExists =
      destinationId &&
      !removedSet.has(destinationId) &&
      (index.peById.size === 0 || index.peById.has(destinationId));

    if (!sourceExists || !destinationExists) {
      if (sourceExists) {
        enqueueDirectionRestore(connection.source);
      }
      if (destinationExists) {
        enqueueDirectionRestore(connection.destination);
      }
      return;
    }

    const neighbor =
      connection.source.direction && index.peById.size > 0
        ? findNeighborPe(connection.source.peId, connection.source.direction, index)
        : null;

    if (!neighbor || neighbor.id !== destinationId) {
      // A resize introduced a new intermediate PE; rebuild connections for both ends.
      enqueueDirectionRestore(connection.source);
      enqueueDirectionRestore(connection.destination);
      return;
    }

    nextConnections.push(connection);
  });

  const workingArchitecture = {
    ...architecture,
    PEConnections: nextConnections
  };

  const directionQueue = new Map();
  const enqueueDirection = (peId, direction) => {
    if (!peId || !direction) return;
    if (removedSet.has(peId)) return;
    directionQueue.set(`${peId}:${direction}`, { peId, direction });
  };

  const uniqueAdded = Array.from(new Set(addedPeIds));

  uniqueAdded.forEach((peId) => {
    defaultDirections.forEach((direction) => {
      enqueueDirection(peId, direction);
      const neighbor =
        direction && index.peById.size > 0 ? findNeighborPe(peId, direction, index) : null;
      if (!neighbor || removedSet.has(neighbor.id)) {
        return;
      }
      const opposite = getOppositeDirection(direction);
      if (opposite) {
        enqueueDirection(neighbor.id, opposite);
      }
    });
  });

  directionsToRestore.forEach(({ peId, direction }) => {
    enqueueDirection(peId, direction);
  });

  directionQueue.forEach(({ peId, direction }) => {
    const updated = updatePeConnectionsForDirection(workingArchitecture, peId, direction, true);
    workingArchitecture.PEConnections = updated;
  });

  return sanitizePeConnections(workingArchitecture.PEConnections);
};
