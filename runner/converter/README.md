# CGRA Architecture Converter

Converts CGRA Flow UI JSON architecture format to dataflow YAML format required by the Docker mapping tool.

## Structure

```
converter/
├── README.md           # This file
├── converter.js        # Conversion logic
├── converter.test.js   # Test suite
└── fixtures/           # Test fixture files (coming soon)
```

## Testing

This module uses **Node.js built-in test runner** (available in Node 20+).

### Run all tests
```bash
npm test
```

### Run tests in watch mode
```bash
npm run test:watch
```

### Run only converter tests
```bash
npm run test:converter
```

## Test Coverage

The test suite covers:

1. **Basic Structure Conversion**
   - Multi-CGRA grid dimensions
   - Per-CGRA grid dimensions
   - Memory configuration
   - Topology settings

2. **Functional Units Mapping**
   - Boolean flags → operation string list
   - Filtering disabled operations
   - Default operation sets

3. **Tile Overrides**
   - Disabled tiles (`disabled: true` → `existence: false`)
   - Custom functional units (specialized tiles)
   - Tile-specific configurations

4. **Topology Conversion**
   - Case normalization (Mesh → mesh)
   - Inter-CGRA vs Intra-CGRA topologies

5. **Multi-CGRA Architectures**
   - Multiple CGRA instances
   - Grid layouts

## Operations and Required Set

- UI functional units are translated to compiler ops using this map (legacy keys supported):
  - `phi → phi`
  - `shift|shl → shl`
  - `select|sel → sel`
  - `mac → mac`
  - `logic → logic`
  - `load → load`
  - `store → store`
  - `compare|icmp → icmp`
  - `not → not`
  - `add → add`
  - `mul → mul`
  - `grant_once → grant_once`
  - `grant_predicate → grant_predicate`
  - `gep → gep`

- The converter always injects the following **required operations** to every tile to keep parity with the dataflow compiler (see issue #205): `add, load, mul, phi, icmp, grant_once, not, grant_predicate, gep, return`.
- If no common set of operations is found across tiles, the default includes all known mapped ops plus the required set.

## Conversion Mapping

| JSON Field | YAML Field | Notes |
|------------|------------|-------|
| `multiCgraRows` | `multi_cgra_defaults.rows` | Direct mapping |
| `multiCgraColumns` | `multi_cgra_defaults.columns` | Direct mapping |
| `interTopology` | `multi_cgra_defaults.base_topology` | Lowercase |
| `totalSramKb` | `multi_cgra_defaults.memory.capacity` | Direct mapping |
| `perCgraRows` | `per_cgra_defaults.rows` | From first CGRA |
| `perCgraColumns` | `per_cgra_defaults.columns` | From first CGRA |
| `intraTopology` | `per_cgra_defaults.base_topology` | Lowercase |
| `sramBanks` | `per_cgra_defaults.memory.banks` | From first CGRA |
| `configMemoryEntries` | `per_cgra_defaults.ctrl_mem_items` | From first CGRA |
| `dataBitwidth` | `link_defaults.bandwidth` | Direct mapping |
| `tileFunctionalUnits.*` | `tile_defaults.operations[]` | Boolean → string list |
| `PE.disabled: true` | `tile_overrides[].existence: false` | Only if disabled |
| Custom functional units | `tile_overrides[].operations[]` | If differs from default |

## Example

**Input (JSON):**
```json
{
  "architecture": {
    "multiCgraRows": 2,
    "multiCgraColumns": 2,
    "dataBitwidth": 32,
    "CGRAs": [{
      "perCgraRows": 4,
      "perCgraColumns": 4,
      "PEs": [{
        "x": 0,
        "y": 0,
        "tileFunctionalUnits": {
          "add": true,
          "mul": true,
          "load": false
        }
      }]
    }]
  }
}
```

**Output (YAML):**
```yaml
architecture:
  name: "Architecture"
  version: "1.0"

multi_cgra_defaults:
  rows: 2
  columns: 2
  base_topology: "mesh"

per_cgra_defaults:
  rows: 4
  columns: 4
  base_topology: "mesh"

tile_defaults:
  # Includes required operations even if not listed in JSON
  operations: ["add", "mul", "load", "phi", "icmp", "grant_once", "not", "grant_predicate", "gep", "return", "sel", "shl", "logic", "store", "mac"]
  num_registers: 32

link_defaults:
  latency: 1
  bandwidth: 32
```
