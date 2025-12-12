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
                  add: true,
                  mul: true,
                  load: true,
                  store: true
                }
              },
              {
                id: 'pe-0-0-0-1',
                label: 'PE (0, 1)',
                x: 1,
                y: 0,
                disabled: false,
                tileFunctionalUnits: {
                  phi: true,
                  add: true,
                  mul: true,
                  load: true,
                  store: true
                }
              },
              {
                id: 'pe-0-0-1-0',
                label: 'PE (1, 0)',
                x: 0,
                y: 1,
                disabled: false,
                tileFunctionalUnits: {
                  phi: true,
                  add: true,
                  mul: true,
                  load: true,
                  store: true
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
                  load: true,
                  store: true
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

    // Check per-CGRA defaults (minimum enforced is 4x4)
    assert.ok(result.per_cgra_defaults, 'Should have per_cgra_defaults');
    assert.equal(result.per_cgra_defaults.rows, 4);
    assert.equal(result.per_cgra_defaults.columns, 4);
    assert.equal(result.per_cgra_defaults.ctrl_mem_items, 20); // minimum enforced
    assert.equal(result.per_cgra_defaults.base_topology, 'mesh');
    assert.equal(result.per_cgra_defaults.memory.banks, 4);

    // Check tile defaults
    assert.ok(result.tile_defaults, 'Should have tile_defaults');
    assert.ok(Array.isArray(result.tile_defaults.operations));
    assert.ok(result.tile_defaults.operations.includes('add'));
    assert.ok(result.tile_defaults.operations.includes('mul'));
    assert.ok(result.tile_defaults.operations.includes('phi'));

    // Check link defaults
    assert.ok(result.link_defaults, 'Should have link_defaults');
    assert.equal(result.link_defaults.latency, 1);
    assert.equal(result.link_defaults.bandwidth, 32);
  });
});

describe('Architecture Converter - Functional Units', () => {
  it('should normalize operations to include all base operations', () => {
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
                  phi: true,
                  add: true,
                  mul: true
                }
              }
            ]
          }
        ]
      }
    };

    const result = convertJsonToYaml(input);

    // All base operations should be included regardless of UI settings
    const baseOps = [
      'add', 'mul', 'sub', 'div', 'rem',
      'fadd', 'fmul', 'fsub', 'fdiv',
      'or', 'not', 'icmp', 'fcmp', 'sel',
      'cast', 'sext', 'zext', 'shl',
      'vfmul', 'fadd_fadd', 'fmul_fadd',
      'data_mov', 'ctrl_mov', 'reserve',
      'grant_predicate', 'grant_once', 'grant_always',
      'loop_control', 'phi', 'constant',
      'load', 'store', 'return',
      'load_indexed', 'store_indexed', 'alloca'
    ];

    baseOps.forEach(op => {
      assert.ok(
        result.tile_defaults.operations.includes(op),
        `Should include base operation: ${op}`
      );
    });
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

  it('should not create override when operations normalize to same set', () => {
    // Since all tiles get normalized to include BASE_OPERATIONS,
    // different UI functional unit settings don't create overrides
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
                tileFunctionalUnits: { add: true, mul: true, load: true, store: true }
              },
              {
                x: 0,
                y: 1,
                disabled: false,
                tileFunctionalUnits: { load: true } // Different UI settings but normalizes to same
              }
            ]
          }
        ]
      }
    };

    const result = convertJsonToYaml(input);

    // No overrides should be created since operations normalize to the same set
    assert.ok(Array.isArray(result.tile_overrides));
    assert.equal(result.tile_overrides.length, 0, 'No overrides when operations normalize equally');
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
