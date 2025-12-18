import {
  FUNCTIONAL_UNIT_CATEGORIES,
  FUNCTION_UNIT_TO_INSTRUCTIONS,
  FUNCTION_UNIT_METADATA
} from '../shared/functionalUnitMapping.js';

/**
 * Generate PE functional unit schema entries from the shared mapping.
 * Creates collapsible sections for each category with function unit toggles.
 */
function generateFunctionalUnitSchema() {
  const schema = [];

  for (const [category, units] of Object.entries(FUNCTIONAL_UNIT_CATEGORIES)) {
    for (const unitName of units) {
      const metadata = FUNCTION_UNIT_METADATA[unitName] || {};
      const instructions = FUNCTION_UNIT_TO_INSTRUCTIONS[unitName] || [];

      schema.push({
        key: `tileFunctionalUnits.${unitName}`,
        label: metadata.displayName || unitName,
        sublabel: instructions.join(', '),
        type: 'boolean',
        mutable: true,
        section: category,
        collapsible: true,
        disabledWhen: { key: 'disabled', equals: true },
        toggleGroup: 'tileFunctionalUnits'
      });
    }
  }

  return schema;
}

export const PROPERTY_SCHEMAS = {
  device: [
    {
      key: 'totalSramKb',
      label: 'Total SRAM (KBs)',
      type: 'number',
      mutable: true,
      min: 0,
      step: 1
    },
    {
      key: 'interTopology',
      label: 'Inter-CGRA Topology',
      type: 'select',
      mutable: true,
      options: ['KingMesh', 'Mesh', 'Ring']
    },
    {
      key: 'multiCgraRows',
      label: 'Multi-CGRA Rows',
      type: 'number',
      mutable: true,
      min: 1,
      step: 1
    },
    {
      key: 'multiCgraColumns',
      label: 'Multi-CGRA Columns',
      type: 'number',
      mutable: true,
      min: 1,
      step: 1
    },
    {
      key: 'vectorLanes',
      label: 'Vector Lanes',
      type: 'number',
      mutable: true,
      min: 1,
      step: 1
    },
    {
      key: 'dataBitwidth',
      label: 'Data Bitwidth',
      type: 'number',
      mutable: true,
      min: 1,
      step: 1
    }
  ],
  cgra: [
    {
      key: 'intraTopology',
      label: 'Intra-CGRA Topology',
      type: 'select',
      mutable: true,
      options: ['KingMesh', 'Mesh', 'Ring']
    },
    {
      key: 'sramBanks',
      label: 'Number of SRAM Banks',
      type: 'number',
      mutable: true,
      min: 0,
      step: 1
    },
    {
      key: 'perCgraRows',
      label: 'Per-CGRA Rows',
      type: 'number',
      mutable: true,
      min: 1,
      step: 1
    },
    {
      key: 'perCgraColumns',
      label: 'Per-CGRA Columns',
      type: 'number',
      mutable: true,
      min: 1,
      step: 1
    },
    {
      key: 'configMemoryEntries',
      label: 'Configuration Memory Entries',
      type: 'number',
      mutable: true,
      min: 1,
      step: 1
    }
  ],
  pe: [
    {
      key: 'disabled',
      label: 'Disable',
      type: 'boolean',
      mutable: true
    },
    // Functional unit toggles (generated from shared mapping)
    ...generateFunctionalUnitSchema(),
    // Outgoing links
    {
      key: 'outgoingLinks.nw',
      label: 'NW',
      type: 'boolean',
      mutable: true,
      section: 'Outgoing Links',
      disabledWhen: { key: 'disabled', equals: true },
      toggleGroup: 'outgoingLinks'
    },
    {
      key: 'outgoingLinks.sw',
      label: 'SW',
      type: 'boolean',
      mutable: true,
      section: 'Outgoing Links',
      disabledWhen: { key: 'disabled', equals: true },
      toggleGroup: 'outgoingLinks'
    },
    {
      key: 'outgoingLinks.ne',
      label: 'NE',
      type: 'boolean',
      mutable: true,
      section: 'Outgoing Links',
      disabledWhen: { key: 'disabled', equals: true },
      toggleGroup: 'outgoingLinks'
    },
    {
      key: 'outgoingLinks.se',
      label: 'SE',
      type: 'boolean',
      mutable: true,
      section: 'Outgoing Links',
      disabledWhen: { key: 'disabled', equals: true },
      toggleGroup: 'outgoingLinks'
    },
    {
      key: 'outgoingLinks.n',
      label: 'N',
      type: 'boolean',
      mutable: true,
      section: 'Outgoing Links',
      disabledWhen: { key: 'disabled', equals: true },
      toggleGroup: 'outgoingLinks'
    },
    {
      key: 'outgoingLinks.s',
      label: 'S',
      type: 'boolean',
      mutable: true,
      section: 'Outgoing Links',
      disabledWhen: { key: 'disabled', equals: true },
      toggleGroup: 'outgoingLinks'
    },
    {
      key: 'outgoingLinks.w',
      label: 'W',
      type: 'boolean',
      mutable: true,
      section: 'Outgoing Links',
      disabledWhen: { key: 'disabled', equals: true },
      toggleGroup: 'outgoingLinks'
    },
    {
      key: 'outgoingLinks.e',
      label: 'E',
      type: 'boolean',
      mutable: true,
      section: 'Outgoing Links',
      disabledWhen: { key: 'disabled', equals: true },
      toggleGroup: 'outgoingLinks'
    }
  ]
};

export const PROPERTY_TITLES = {
  device: 'Device Properties',
  cgra: 'CGRA Properties',
  pe: 'PE Modeling'
};
