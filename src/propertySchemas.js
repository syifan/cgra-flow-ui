export const PROPERTY_SCHEMAS = {
  cgra: [
    { key: 'id', label: 'Identifier', type: 'text', mutable: false },
    { key: 'label', label: 'Display Label', type: 'text', mutable: true },
    { key: 'x', label: 'X Position', type: 'number', mutable: false },
    { key: 'y', label: 'Y Position', type: 'number', mutable: false },
    {
      key: 'clockFrequency',
      label: 'Clock (MHz)',
      type: 'number',
      mutable: true,
      min: 100,
      max: 2000,
      step: 10
    },
    {
      key: 'voltage',
      label: 'Voltage (V)',
      type: 'number',
      mutable: true,
      min: 0.5,
      max: 1.5,
      step: 0.05
    }
  ],
  router: [
    { key: 'id', label: 'Identifier', type: 'text', mutable: false },
    { key: 'cgraId', label: 'CGRA', type: 'text', mutable: false },
    {
      key: 'routingStrategy',
      label: 'Routing Strategy',
      type: 'select',
      mutable: true,
      options: ['Shortest Path', 'Load Balanced', 'Fault Tolerant']
    },
    {
      key: 'bufferDepth',
      label: 'Buffer Depth',
      type: 'number',
      mutable: true,
      min: 1,
      max: 64,
      step: 1
    },
    {
      key: 'bandwidth',
      label: 'Bandwidth (GB/s)',
      type: 'number',
      mutable: true,
      min: 1,
      max: 512,
      step: 1
    }
  ],
  pe: [
    { key: 'id', label: 'Identifier', type: 'text', mutable: false },
    { key: 'cgraId', label: 'CGRA', type: 'text', mutable: false },
    { key: 'label', label: 'Display Label', type: 'text', mutable: true },
    { key: 'x', label: 'X Coordinate', type: 'number', mutable: false },
    { key: 'y', label: 'Y Coordinate', type: 'number', mutable: false },
    {
      key: 'operation',
      label: 'Operation',
      type: 'select',
      mutable: true,
      options: ['ALU', 'MAC', 'Load/Store', 'Branch']
    },
    {
      key: 'latency',
      label: 'Latency (cycles)',
      type: 'number',
      mutable: true,
      min: 1,
      max: 16,
      step: 1
    },
    {
      key: 'enabled',
      label: 'Enabled',
      type: 'boolean',
      mutable: true
    }
  ]
};

export const PROPERTY_TITLES = {
  cgra: 'CGRA Properties',
  router: 'Router Properties',
  pe: 'Processing Element Properties'
};
