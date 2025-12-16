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
    {
      key: 'tileFunctionalUnits.phi',
      label: 'Phi',
      type: 'boolean',
      mutable: true,
      section: 'Tile Functional Units',
      disabledWhen: { key: 'disabled', equals: true },
      toggleGroup: 'tileFunctionalUnits'
    },
    {
      key: 'tileFunctionalUnits.shift',
      label: 'Shift',
      type: 'boolean',
      mutable: true,
      section: 'Tile Functional Units',
      disabledWhen: { key: 'disabled', equals: true },
      toggleGroup: 'tileFunctionalUnits'
    },
    {
      key: 'tileFunctionalUnits.sel',
      label: 'Select (sel)',
      type: 'boolean',
      mutable: true,
      section: 'Tile Functional Units',
      disabledWhen: { key: 'disabled', equals: true },
      toggleGroup: 'tileFunctionalUnits'
    },
    {
      key: 'tileFunctionalUnits.mac',
      label: 'MAC',
      type: 'boolean',
      mutable: true,
      section: 'Tile Functional Units',
      disabledWhen: { key: 'disabled', equals: true },
      toggleGroup: 'tileFunctionalUnits'
    },
    {
      key: 'tileFunctionalUnits.return',
      label: 'Return',
      type: 'boolean',
      mutable: true,
      section: 'Tile Functional Units',
      disabledWhen: { key: 'disabled', equals: true },
      toggleGroup: 'tileFunctionalUnits'
    },
    {
      key: 'tileFunctionalUnits.logic',
      label: 'Logic',
      type: 'boolean',
      mutable: true,
      section: 'Tile Functional Units',
      disabledWhen: { key: 'disabled', equals: true },
      toggleGroup: 'tileFunctionalUnits'
    },
    {
      key: 'tileFunctionalUnits.load',
      label: 'Load',
      type: 'boolean',
      mutable: true,
      section: 'Tile Functional Units',
      disabledWhen: { key: 'disabled', equals: true },
      toggleGroup: 'tileFunctionalUnits'
    },
    {
      key: 'tileFunctionalUnits.store',
      label: 'Store',
      type: 'boolean',
      mutable: true,
      section: 'Tile Functional Units',
      disabledWhen: { key: 'disabled', equals: true },
      toggleGroup: 'tileFunctionalUnits'
    },
    {
      key: 'tileFunctionalUnits.icmp',
      label: 'ICmp',
      type: 'boolean',
      mutable: true,
      section: 'Tile Functional Units',
      disabledWhen: { key: 'disabled', equals: true },
      toggleGroup: 'tileFunctionalUnits'
    },
    {
      key: 'tileFunctionalUnits.not',
      label: 'Not',
      type: 'boolean',
      mutable: true,
      section: 'Tile Functional Units',
      disabledWhen: { key: 'disabled', equals: true },
      toggleGroup: 'tileFunctionalUnits'
    },
    {
      key: 'tileFunctionalUnits.grant_once',
      label: 'Grant Once',
      type: 'boolean',
      mutable: true,
      section: 'Tile Functional Units',
      disabledWhen: { key: 'disabled', equals: true },
      toggleGroup: 'tileFunctionalUnits'
    },
    {
      key: 'tileFunctionalUnits.grant_predicate',
      label: 'Grant Predicate',
      type: 'boolean',
      mutable: true,
      section: 'Tile Functional Units',
      disabledWhen: { key: 'disabled', equals: true },
      toggleGroup: 'tileFunctionalUnits'
    },
    {
      key: 'tileFunctionalUnits.gep',
      label: 'GEP',
      type: 'boolean',
      mutable: true,
      section: 'Tile Functional Units',
      disabledWhen: { key: 'disabled', equals: true },
      toggleGroup: 'tileFunctionalUnits'
    },
    {
      key: 'tileFunctionalUnits.add',
      label: 'Add',
      type: 'boolean',
      mutable: true,
      section: 'Tile Functional Units',
      disabledWhen: { key: 'disabled', equals: true },
      toggleGroup: 'tileFunctionalUnits'
    },
    {
      key: 'tileFunctionalUnits.mul',
      label: 'Mul',
      type: 'boolean',
      mutable: true,
      section: 'Tile Functional Units',
      disabledWhen: { key: 'disabled', equals: true },
      toggleGroup: 'tileFunctionalUnits'
    },
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

