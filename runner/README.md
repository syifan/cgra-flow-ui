# CGRA Flow Runner

Job runner service for CGRA Flow UI that processes mapping jobs using the dataflow compiler.

## Structure

```
runner/
├── index.js              # Main entry point
├── jobProcessor.js       # Job claim/update logic
├── mappingExecutor.js    # Real mapping job executor
├── converter/            # Architecture format converter
│   ├── converter.js      # Conversion logic
│   ├── converter.test.js # Test suite
│   ├── example.js        # Example usage
│   └── README.md         # Converter documentation
├── JOB_FORMAT.md         # Job structure documentation
├── .env.example          # Environment template
└── package.json          # Dependencies & scripts
```

## Setup

### Prerequisites
- Node.js 20+ or 22+
- Supabase account and project

### Installation

```bash
cd runner
npm install
```

### Configuration

Copy `.env.example` to `.env` and configure:

```bash
# Supabase connection
SUPABASE_URL=your_supabase_url
SUPABASE_SERVICE_ROLE_KEY=your_service_role_key

# Runner settings
RUNNER_MODE=fake  # or 'real' for actual Docker execution
RUNNER_ID=runner-local
POLL_INTERVAL_MS=5000

# Real mode settings (required for RUNNER_MODE=real)
JOBS_DIR=./jobs
DOCKER_IMAGE=cgra/cgra-flow:ui
DOCKER_TIMEOUT_MS=600000
```

#### Runner Modes

- **fake**: Simulates job execution (no Docker required)
- **real**: Executes actual CGRA mapping in Docker container

## Usage

### Start the runner

```bash
npm start
```

### Run tests

```bash
# Run all tests
npm test

# Watch mode (auto-rerun on changes)
npm run test:watch

# Run only converter tests
npm run test:converter
```

## Modules

### Architecture Converter

Converts CGRA Flow UI JSON architecture format to dataflow compiler YAML format.

**See:** [converter/README.md](./converter/README.md)

**Quick example:**
```javascript
import { convertJsonToYamlString } from './converter/converter.js';

const jsonArchitecture = { /* ... */ };
const yamlString = convertJsonToYamlString(jsonArchitecture);
console.log(yamlString);
```

**Test it:**
```bash
node converter/example.js
```

### Mapping Executor

Handles real CGRA mapping jobs:

1. **Setup**: Creates job directory structure
2. **Convert**: Writes architecture JSON and converts to YAML
3. **Process**: Iterates through benchmarks, running llvm-lit for each
4. **Collect**: Gathers results, stdout, stderr, and mapping metrics
5. **Update**: Returns summary with execution times and status

**Job Directory Structure:**
```
jobs/<job-id>/
├── architecture.json     # Original from UI
├── architecture.yaml      # Converted for dataflow
└── benchmarks/
    ├── fir/
    │   ├── architecture.yaml
    │   ├── stdout.txt
    │   └── stderr.txt
    └── bicg/
        ├── architecture.yaml
        ├── stdout.txt
        └── stderr.txt
```

**See:** [JOB_FORMAT.md](./JOB_FORMAT.md) for complete job schema

## Development

### Testing

The converter module uses Node.js built-in test runner (no external dependencies).

```bash
# Run tests
npm test

# Watch mode
npm run test:watch

# With coverage (Node 20+)
node --test --experimental-test-coverage converter/converter.test.js
```

### Code Quality

Basic checks run in CI:
- No `console.log` in production code
- Proper ES6 module exports/imports
- Valid YAML output structure

### Adding Tests

Add test cases to `converter/converter.test.js`:

```javascript
import { describe, it } from 'node:test';
import assert from 'node:assert/strict';
import { convertJsonToYaml } from './converter.js';

describe('Your test suite', () => {
  it('should do something', () => {
    const result = convertJsonToYaml(input);
    assert.equal(result.something, expected);
  });
});
```

## CI/CD

### GitHub Actions

**Converter Tests** (`.github/workflows/converter-tests.yml`)
- Runs on push to main and PRs
- Tests on Node 20 and 22
- Validates example output
- Uploads artifacts

**Production Deployment** (`.github/workflows/production-runner.yml`)
- Deploys to production server via SSH
- Uses PM2 for process management
- Auto-restarts on push to main

### Local CI Simulation

Run the same checks as CI:

```bash
# Install dependencies
npm ci

# Run tests
npm test

# Run example
node converter/example.js > example-output.yaml

# Validate output
grep -q "architecture:" example-output.yaml && echo "✓ Valid YAML"
```

## Architecture

### Converter Flow

```
JSON Architecture (UI format)
    ↓
JavaScript Object
    ↓
Transform & Extract Defaults
    ↓
Build YAML Structure Object
    ↓
js-yaml.dump()
    ↓
YAML String (dataflow format)
```

### Job Processing Flow

```
Poll Supabase
    ↓
Get pending job
    ↓
Convert architecture JSON → YAML
    ↓
Write to Docker volume
    ↓
Execute mapping in Docker
    ↓
Read results
    ↓
Update job status in Supabase
```

## Deployment

### Production

Deployed via GitHub Actions to production server:
- Auto-deploys on push to main
- Managed by PM2
- Uses service role key for Supabase

### Preview

Each PR gets its own runner instance:
- Isolated from production
- Auto-cleanup on PR close
- Uses same codebase as production

## Troubleshooting

### Tests failing

```bash
# Clean install
rm -rf node_modules package-lock.json
npm install
npm test
```

### Runner not processing jobs

Check:
1. Environment variables are set correctly
2. Supabase connection is working
3. Job queue has pending jobs
4. Runner has proper permissions

### Converter errors

Run example to see detailed output:
```bash
node converter/example.js
```

Check test suite for similar patterns:
```bash
npm run test:converter
```

## License

See main project LICENSE
