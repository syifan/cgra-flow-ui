import { describe, it } from 'node:test';
import assert from 'node:assert/strict';
import { convertJsonToYaml } from './converter.js';

describe('Architecture Converter - Basic Structure', () => {
  it('should convert minimal architecture with single CGRA', () => {
    const input = {
      version: 1,
      architecture: {
        id: 'test-device',
        name: 'Test Device',
        totalSramKb: 512,
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
            perCgraRows: 2,
            perCgraColumns: 2,
            configMemoryEntries: 10,
            PEs: [
              {
                id: 'pe-0-0-0-0',
                label: 'PE (0, 0)',
                x: 0,
                y: 0,
                disabled: false,
                tileFunctionalUnits: {
                  phi: true,
                  add: true,  // operation name for integer ALU
                  mul: true,  // operation name for multiplier
                  mem: true   // operation name for memory unit
                }
              },
              {
                id: 'pe-0-0-0-1',
                // Label format is (x, y) = (column, row)
                label: 'PE (1, 0)',
                x: 1,
                y: 0,
                disabled: false,
                tileFunctionalUnits: {
                  phi: true,
                  add: true,
                  mul: true,
                  mem: true
                }
              },
              {
                id: 'pe-0-0-1-0',
                // Label format is (x, y) = (column, row)
                label: 'PE (0, 1)',
                x: 0,
                y: 1,
                disabled: false,
                tileFunctionalUnits: {
                  phi: true,
                  add: true,
                  mul: true,
                  mem: true
                }
              },
              {
                id: 'pe-0-0-1-1',
                label: 'PE (1, 1)',
                x: 1,
                y: 1,
                disabled: false,
                tileFunctionalUnits: {
                  phi: true,
                  add: true,
                  mul: true,
                  mem: true
                }
              }
            ]
          }
        ]
      }
    };

    const result = convertJsonToYaml(input);

    // Check basic structure
    assert.ok(result.architecture, 'Should have architecture key');
    assert.equal(result.architecture.name, 'Test Device');
    assert.equal(result.architecture.version, '1.0');

    // Check multi-CGRA defaults
    assert.ok(result.multi_cgra_defaults, 'Should have multi_cgra_defaults');
    assert.equal(result.multi_cgra_defaults.rows, 1);
    assert.equal(result.multi_cgra_defaults.columns, 1);
    assert.equal(result.multi_cgra_defaults.base_topology, 'mesh');
    assert.equal(result.multi_cgra_defaults.memory.capacity, 512);

    // Check per-CGRA defaults (user values passed through)
    assert.ok(result.per_cgra_defaults, 'Should have per_cgra_defaults');
    assert.equal(result.per_cgra_defaults.rows, 2);
    assert.equal(result.per_cgra_defaults.columns, 2);
    assert.equal(result.per_cgra_defaults.ctrl_mem_items, 10);
    assert.equal(result.per_cgra_defaults.base_topology, 'mesh');
    assert.equal(result.per_cgra_defaults.memory.banks, 4);

    // Check tile defaults - should contain operation names (function unit names)
    // The backend expects operation names like 'add', 'mul', 'mem', 'phi'
    assert.ok(result.tile_defaults, 'Should have tile_defaults');
    assert.ok(Array.isArray(result.tile_defaults.operations));
    assert.ok(result.tile_defaults.operations.includes('add'), 'Should include add operation');
    assert.ok(result.tile_defaults.operations.includes('mul'), 'Should include mul operation');
    assert.ok(result.tile_defaults.operations.includes('phi'), 'Should include phi operation');
    assert.ok(result.tile_defaults.operations.includes('mem'), 'Should include mem operation');

    // Check link defaults
    assert.ok(result.link_defaults, 'Should have link_defaults');
    assert.equal(result.link_defaults.latency, 1);
    assert.equal(result.link_defaults.bandwidth, 32);
  });
});

describe('Architecture Converter - Functional Units', () => {
  it('should convert function units to operation names correctly', () => {
    const input = {
      version: 1,
      architecture: {
        multiCgraRows: 1,
        multiCgraColumns: 1,
        dataBitwidth: 32,
        CGRAs: [
          {
            x: 0,
            y: 0,
            perCgraRows: 1,
            perCgraColumns: 1,
            configMemoryEntries: 10,
            PEs: [
              {
                x: 0,
                y: 0,
                disabled: false,
                tileFunctionalUnits: {
                  phi: true,    // operation name
                  add: true,    // operation name for integer ALU
                  mul: true     // operation name for multiplier
                }
              }
            ]
          }
        ]
      }
    };

    const result = convertJsonToYaml(input);

    // Should include enabled operation names directly
    assert.ok(result.tile_defaults.operations.includes('phi'), 'Should include phi');
    assert.ok(result.tile_defaults.operations.includes('add'), 'Should include add');
    assert.ok(result.tile_defaults.operations.includes('mul'), 'Should include mul');

    // Should NOT include operation names that were not enabled
    assert.ok(!result.tile_defaults.operations.includes('mem'), 'Should not include mem (disabled)');
  });

  it('should use all supported operations as fallback when none are specified', () => {
    const input = {
      version: 1,
      architecture: {
        multiCgraRows: 1,
        multiCgraColumns: 1,
        dataBitwidth: 32,
        CGRAs: [
          {
            x: 0,
            y: 0,
            perCgraRows: 1,
            perCgraColumns: 1,
            configMemoryEntries: 10,
            PEs: [
              {
                x: 0,
                y: 0,
                disabled: false,
                tileFunctionalUnits: {}
              }
            ]
          }
        ]
      }
    };

    const result = convertJsonToYaml(input);

    // When no operations are specified, it should fall back to all supported operation names
    assert.ok(Array.isArray(result.tile_defaults.operations));
    assert.ok(result.tile_defaults.operations.length > 0, 'Should have fallback operations');
    // Check a few common operation names are present in the fallback
    assert.ok(result.tile_defaults.operations.includes('add'));
    assert.ok(result.tile_defaults.operations.includes('mul'));
    assert.ok(result.tile_defaults.operations.includes('mem'));
  });

  it('should map cmp and sel function units correctly', () => {
    const input = {
      version: 1,
      architecture: {
        multiCgraRows: 1,
        multiCgraColumns: 1,
        dataBitwidth: 32,
        CGRAs: [
          {
            x: 0,
            y: 0,
            perCgraRows: 1,
            perCgraColumns: 1,
            configMemoryEntries: 10,
            PEs: [
              {
                x: 0,
                y: 0,
                disabled: false,
                tileFunctionalUnits: {
                  cmp: true,  // operation name for comparisons
                  sel: true   // operation name for selector
                }
              }
            ]
          }
        ]
      }
    };

    const result = convertJsonToYaml(input);
    // Now we output operation names directly, not expanded instructions
    assert.ok(result.tile_defaults.operations.includes('cmp'), 'Should include cmp operation');
    assert.ok(result.tile_defaults.operations.includes('sel'), 'Should include sel operation');
  });
});

describe('Architecture Converter - Tile Overrides', () => {
  it('should create tile override for disabled tile', () => {
    const input = {
      version: 1,
      architecture: {
        multiCgraRows: 1,
        multiCgraColumns: 1,
        dataBitwidth: 32,
        CGRAs: [
          {
            x: 0,
            y: 0,
            perCgraRows: 2,
            perCgraColumns: 2,
            configMemoryEntries: 10,
            PEs: [
              {
                x: 0,
                y: 0,
                disabled: false,
                tileFunctionalUnits: { add: true, mul: true }
              },
              {
                x: 1,
                y: 0,
                disabled: true, // This tile is disabled
                tileFunctionalUnits: { add: true, mul: true }
              },
              {
                x: 0,
                y: 1,
                disabled: false,
                tileFunctionalUnits: { add: true, mul: true }
              },
              {
                x: 1,
                y: 1,
                disabled: false,
                tileFunctionalUnits: { add: true, mul: true }
              }
            ]
          }
        ]
      }
    };

    const result = convertJsonToYaml(input);

    assert.ok(Array.isArray(result.tile_overrides));
    assert.equal(result.tile_overrides.length, 1);

    const override = result.tile_overrides[0];
    assert.equal(override.cgra_x, 0);
    assert.equal(override.cgra_y, 0);
    assert.equal(override.tile_x, 1);
    assert.equal(override.tile_y, 0);
    assert.equal(override.existence, false);
  });

  it('should create override when tile has different function units than default', () => {
    // Tiles with different function units should generate overrides
    const input = {
      version: 1,
      architecture: {
        multiCgraRows: 1,
        multiCgraColumns: 1,
        dataBitwidth: 32,
        CGRAs: [
          {
            x: 0,
            y: 0,
            perCgraRows: 2,
            perCgraColumns: 1,
            configMemoryEntries: 10,
            PEs: [
              {
                x: 0,
                y: 0,
                disabled: false,
                tileFunctionalUnits: { add: true, mul: true, mem: true }
              },
              {
                x: 0,
                y: 1,
                disabled: false,
                tileFunctionalUnits: { mem: true } // Different - only mem enabled
              }
            ]
          }
        ]
      }
    };

    const result = convertJsonToYaml(input);

    // Override should be created for tile with different operations
    assert.ok(Array.isArray(result.tile_overrides));
    assert.equal(result.tile_overrides.length, 1, 'Override created for tile with different operations');

    const override = result.tile_overrides[0];
    assert.equal(override.tile_x, 0);
    assert.equal(override.tile_y, 1);

    // Override should only contain operation names from its enabled function units
    const opsSet = new Set(override.operations);
    assert.ok(opsSet.has('mem'), 'Override should include mem operation');
    assert.ok(!opsSet.has('add'), 'Override should not include add (disabled)');
    assert.ok(!opsSet.has('mul'), 'Override should not include mul (disabled)');
  });
});

describe('Architecture Converter - Topology Conversion', () => {
  it('should convert topology names to lowercase', () => {
    const input = {
      version: 1,
      architecture: {
        interTopology: 'KingMesh',
        multiCgraRows: 1,
        multiCgraColumns: 1,
        dataBitwidth: 32,
        CGRAs: [
          {
            x: 0,
            y: 0,
            intraTopology: 'Ring',
            perCgraRows: 1,
            perCgraColumns: 1,
            configMemoryEntries: 10,
            PEs: [
              {
                x: 0,
                y: 0,
                disabled: false,
                tileFunctionalUnits: { add: true }
              }
            ]
          }
        ]
      }
    };

    const result = convertJsonToYaml(input);

    assert.equal(result.multi_cgra_defaults.base_topology, 'kingmesh');
    assert.equal(result.per_cgra_defaults.base_topology, 'ring');
  });
});

describe('Architecture Converter - Multi-CGRA', () => {
  it('should handle 2x2 multi-CGRA grid', () => {
    const input = {
      version: 1,
      architecture: {
        multiCgraRows: 2,
        multiCgraColumns: 2,
        dataBitwidth: 32,
        CGRAs: [
          { x: 0, y: 0, perCgraRows: 4, perCgraColumns: 4, configMemoryEntries: 10, PEs: [] },
          { x: 1, y: 0, perCgraRows: 4, perCgraColumns: 4, configMemoryEntries: 10, PEs: [] },
          { x: 0, y: 1, perCgraRows: 4, perCgraColumns: 4, configMemoryEntries: 10, PEs: [] },
          { x: 1, y: 1, perCgraRows: 4, perCgraColumns: 4, configMemoryEntries: 10, PEs: [] }
        ]
      }
    };

    const result = convertJsonToYaml(input);

    assert.equal(result.multi_cgra_defaults.rows, 2);
    assert.equal(result.multi_cgra_defaults.columns, 2);
  });
});
