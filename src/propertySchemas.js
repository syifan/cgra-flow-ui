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
    // Arithmetic operations
    {
      key: 'tileFunctionalUnits.add',
      label: 'add',
      type: 'boolean',
      mutable: true,
      section: 'Arithmetic',
      disabledWhen: { key: 'disabled', equals: true },
      toggleGroup: 'tileFunctionalUnits'
    },
    {
      key: 'tileFunctionalUnits.mul',
      label: 'mul',
      type: 'boolean',
      mutable: true,
      section: 'Arithmetic',
      disabledWhen: { key: 'disabled', equals: true },
      toggleGroup: 'tileFunctionalUnits'
    },
    {
      key: 'tileFunctionalUnits.div',
      label: 'div',
      type: 'boolean',
      mutable: true,
      section: 'Arithmetic',
      disabledWhen: { key: 'disabled', equals: true },
      toggleGroup: 'tileFunctionalUnits'
    },
    {
      key: 'tileFunctionalUnits.rem',
      label: 'rem',
      type: 'boolean',
      mutable: true,
      section: 'Arithmetic',
      disabledWhen: { key: 'disabled', equals: true },
      toggleGroup: 'tileFunctionalUnits'
    },
    {
      key: 'tileFunctionalUnits.shl',
      label: 'shl',
      type: 'boolean',
      mutable: true,
      section: 'Arithmetic',
      disabledWhen: { key: 'disabled', equals: true },
      toggleGroup: 'tileFunctionalUnits'
    },
    {
      key: 'tileFunctionalUnits.mac',
      label: 'mac',
      type: 'boolean',
      mutable: true,
      section: 'Arithmetic',
      disabledWhen: { key: 'disabled', equals: true },
      toggleGroup: 'tileFunctionalUnits'
    },
    // Floating point operations
    {
      key: 'tileFunctionalUnits.fadd',
      label: 'fadd',
      type: 'boolean',
      mutable: true,
      section: 'Floating Point',
      disabledWhen: { key: 'disabled', equals: true },
      toggleGroup: 'tileFunctionalUnits'
    },
    {
      key: 'tileFunctionalUnits.fmul',
      label: 'fmul',
      type: 'boolean',
      mutable: true,
      section: 'Floating Point',
      disabledWhen: { key: 'disabled', equals: true },
      toggleGroup: 'tileFunctionalUnits'
    },
    {
      key: 'tileFunctionalUnits.fdiv',
      label: 'fdiv',
      type: 'boolean',
      mutable: true,
      section: 'Floating Point',
      disabledWhen: { key: 'disabled', equals: true },
      toggleGroup: 'tileFunctionalUnits'
    },
    {
      key: 'tileFunctionalUnits.fmul_fadd',
      label: 'fmul_fadd',
      type: 'boolean',
      mutable: true,
      section: 'Floating Point',
      disabledWhen: { key: 'disabled', equals: true },
      toggleGroup: 'tileFunctionalUnits'
    },
    // Memory operations
    {
      key: 'tileFunctionalUnits.load',
      label: 'load',
      type: 'boolean',
      mutable: true,
      section: 'Memory',
      disabledWhen: { key: 'disabled', equals: true },
      toggleGroup: 'tileFunctionalUnits'
    },
    {
      key: 'tileFunctionalUnits.store',
      label: 'store',
      type: 'boolean',
      mutable: true,
      section: 'Memory',
      disabledWhen: { key: 'disabled', equals: true },
      toggleGroup: 'tileFunctionalUnits'
    },
    {
      key: 'tileFunctionalUnits.gep',
      label: 'gep',
      type: 'boolean',
      mutable: true,
      section: 'Memory',
      disabledWhen: { key: 'disabled', equals: true },
      toggleGroup: 'tileFunctionalUnits'
    },
    {
      key: 'tileFunctionalUnits.memset',
      label: 'memset',
      type: 'boolean',
      mutable: true,
      section: 'Memory',
      disabledWhen: { key: 'disabled', equals: true },
      toggleGroup: 'tileFunctionalUnits'
    },
    // Control operations
    {
      key: 'tileFunctionalUnits.phi',
      label: 'phi',
      type: 'boolean',
      mutable: true,
      section: 'Control',
      disabledWhen: { key: 'disabled', equals: true },
      toggleGroup: 'tileFunctionalUnits'
    },
    {
      key: 'tileFunctionalUnits.sel',
      label: 'sel',
      type: 'boolean',
      mutable: true,
      section: 'Control',
      disabledWhen: { key: 'disabled', equals: true },
      toggleGroup: 'tileFunctionalUnits'
    },
    {
      key: 'tileFunctionalUnits.not',
      label: 'not',
      type: 'boolean',
      mutable: true,
      section: 'Control',
      disabledWhen: { key: 'disabled', equals: true },
      toggleGroup: 'tileFunctionalUnits'
    },
    {
      key: 'tileFunctionalUnits.icmp',
      label: 'icmp',
      type: 'boolean',
      mutable: true,
      section: 'Control',
      disabledWhen: { key: 'disabled', equals: true },
      toggleGroup: 'tileFunctionalUnits'
    },
    {
      key: 'tileFunctionalUnits.return',
      label: 'return',
      type: 'boolean',
      mutable: true,
      section: 'Control',
      disabledWhen: { key: 'disabled', equals: true },
      toggleGroup: 'tileFunctionalUnits'
    },
    // Data movement operations
    {
      key: 'tileFunctionalUnits.data_mov',
      label: 'data_mov',
      type: 'boolean',
      mutable: true,
      section: 'Data Movement',
      disabledWhen: { key: 'disabled', equals: true },
      toggleGroup: 'tileFunctionalUnits'
    },
    {
      key: 'tileFunctionalUnits.ctrl_mov',
      label: 'ctrl_mov',
      type: 'boolean',
      mutable: true,
      section: 'Data Movement',
      disabledWhen: { key: 'disabled', equals: true },
      toggleGroup: 'tileFunctionalUnits'
    },
    {
      key: 'tileFunctionalUnits.reserve',
      label: 'reserve',
      type: 'boolean',
      mutable: true,
      section: 'Data Movement',
      disabledWhen: { key: 'disabled', equals: true },
      toggleGroup: 'tileFunctionalUnits'
    },
    // Grant operations
    {
      key: 'tileFunctionalUnits.grant_once',
      label: 'grant_once',
      type: 'boolean',
      mutable: true,
      section: 'Grants',
      disabledWhen: { key: 'disabled', equals: true },
      toggleGroup: 'tileFunctionalUnits'
    },
    {
      key: 'tileFunctionalUnits.grant_predicate',
      label: 'grant_predicate',
      type: 'boolean',
      mutable: true,
      section: 'Grants',
      disabledWhen: { key: 'disabled', equals: true },
      toggleGroup: 'tileFunctionalUnits'
    },
    // Type conversion operations
    {
      key: 'tileFunctionalUnits.cast',
      label: 'cast',
      type: 'boolean',
      mutable: true,
      section: 'Type Conversion',
      disabledWhen: { key: 'disabled', equals: true },
      toggleGroup: 'tileFunctionalUnits'
    },
    {
      key: 'tileFunctionalUnits.zext',
      label: 'zext',
      type: 'boolean',
      mutable: true,
      section: 'Type Conversion',
      disabledWhen: { key: 'disabled', equals: true },
      toggleGroup: 'tileFunctionalUnits'
    },
    {
      key: 'tileFunctionalUnits.sext',
      label: 'sext',
      type: 'boolean',
      mutable: true,
      section: 'Type Conversion',
      disabledWhen: { key: 'disabled', equals: true },
      toggleGroup: 'tileFunctionalUnits'
    },
    // Other operations
    {
      key: 'tileFunctionalUnits.constant',
      label: 'constant',
      type: 'boolean',
      mutable: true,
      section: 'Other',
      disabledWhen: { key: 'disabled', equals: true },
      toggleGroup: 'tileFunctionalUnits'
    },
    // Vector operations
    {
      key: 'tileFunctionalUnits.vadd',
      label: 'vadd',
      type: 'boolean',
      mutable: true,
      section: 'Vector',
      disabledWhen: { key: 'disabled', equals: true },
      toggleGroup: 'tileFunctionalUnits'
    },
    {
      key: 'tileFunctionalUnits.vmul',
      label: 'vmul',
      type: 'boolean',
      mutable: true,
      section: 'Vector',
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

