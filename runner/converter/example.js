import { convertJsonToYamlString } from './converter.js';

// Example: Simple 2x2 CGRA architecture
const exampleArchitecture = {
  version: 1,
  architecture: {
    id: 'example-device',
    name: 'Example CGRA Device',
    totalSramKb: 1024,
    interTopology: 'Mesh',
    multiCgraRows: 1,
    multiCgraColumns: 1,
    vectorLanes: 1,
    dataBitwidth: 32,
    CGRAs: [
      {
        id: 'cgra-0-0',
        label: 'CGRA (0, 0)',
        x: 0,
        y: 0,
        intraTopology: 'Mesh',
        sramBanks: 4,
        perCgraRows: 4,
        perCgraColumns: 4,
        configMemoryEntries: 20,
        PEs: [
          // Row 0
          {
            id: 'pe-0-0-0-0',
            x: 0,
            y: 0,
            disabled: false,
            tileFunctionalUnits: { phi: true, add: true, mul: true, load: true, store: true }
          },
          {
            id: 'pe-0-0-0-1',
            x: 1,
            y: 0,
            disabled: false,
            tileFunctionalUnits: { phi: true, add: true, mul: true, load: true, store: true }
          },
          {
            id: 'pe-0-0-0-2',
            x: 2,
            y: 0,
            disabled: false,
            tileFunctionalUnits: { phi: true, add: true, mul: true, load: true, store: true }
          },
          {
            id: 'pe-0-0-0-3',
            x: 3,
            y: 0,
            disabled: false,
            tileFunctionalUnits: { phi: true, add: true, mul: true, load: true, store: true }
          },
          // Row 1
          {
            id: 'pe-0-0-1-0',
            x: 0,
            y: 1,
            disabled: false,
            tileFunctionalUnits: { phi: true, add: true, mul: true, load: true, store: true }
          },
          {
            id: 'pe-0-0-1-1',
            x: 1,
            y: 1,
            disabled: true, // This tile is disabled
            tileFunctionalUnits: { phi: true, add: true, mul: true, load: true, store: true }
          },
          {
            id: 'pe-0-0-1-2',
            x: 2,
            y: 1,
            disabled: false,
            tileFunctionalUnits: { phi: true, add: true, mul: true, load: true, store: true }
          },
          {
            id: 'pe-0-0-1-3',
            x: 3,
            y: 1,
            disabled: false,
            tileFunctionalUnits: { phi: true, add: true, mul: true, load: true, store: true }
          },
          // Row 2
          {
            id: 'pe-0-0-2-0',
            x: 0,
            y: 2,
            disabled: false,
            tileFunctionalUnits: { phi: true, add: true, mul: true, load: true, store: true }
          },
          {
            id: 'pe-0-0-2-1',
            x: 1,
            y: 2,
            disabled: false,
            tileFunctionalUnits: { phi: true, add: true, mul: true, load: true, store: true }
          },
          {
            id: 'pe-0-0-2-2',
            x: 2,
            y: 2,
            disabled: false,
            tileFunctionalUnits: { phi: true, add: true, mul: true, load: true, store: true }
          },
          {
            id: 'pe-0-0-2-3',
            x: 3,
            y: 2,
            disabled: false,
            tileFunctionalUnits: { load: true } // Specialized load-only tile
          },
          // Row 3
          {
            id: 'pe-0-0-3-0',
            x: 0,
            y: 3,
            disabled: false,
            tileFunctionalUnits: { phi: true, add: true, mul: true, load: true, store: true }
          },
          {
            id: 'pe-0-0-3-1',
            x: 1,
            y: 3,
            disabled: false,
            tileFunctionalUnits: { phi: true, add: true, mul: true, load: true, store: true }
          },
          {
            id: 'pe-0-0-3-2',
            x: 2,
            y: 3,
            disabled: false,
            tileFunctionalUnits: { phi: true, add: true, mul: true, load: true, store: true }
          },
          {
            id: 'pe-0-0-3-3',
            x: 3,
            y: 3,
            disabled: false,
            tileFunctionalUnits: { store: true } // Specialized store-only tile
          }
        ]
      }
    ]
  }
};

console.log('Converting CGRA Flow UI JSON to YAML format...\n');
console.log('='.repeat(80));
console.log('\nGenerated YAML:\n');

const yamlOutput = convertJsonToYamlString(exampleArchitecture);
console.log(yamlOutput);

console.log('='.repeat(80));
console.log('\nConversion complete!');
console.log('\nKey features in this example:');
console.log('  ✓ 4x4 CGRA grid');
console.log('  ✓ 1 disabled tile at (1, 1)');
console.log('  ✓ 2 specialized tiles: load-only at (2, 3), store-only at (3, 3)');
console.log('  ✓ Default operations derived from most common tile configuration');
