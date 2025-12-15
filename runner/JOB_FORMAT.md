# Job Format Documentation

This document describes the structure of jobs in the CGRA Flow system.

## Job Schema

Jobs are stored in the `jobs` table with the following structure:

```sql
CREATE TABLE jobs (
  id UUID PRIMARY KEY,
  project_id UUID REFERENCES projects(id),
  user_id UUID REFERENCES auth.users(id),
  type job_type NOT NULL,        -- 'mapping', 'verification', or 'layout'
  status job_status NOT NULL,    -- 'queued', 'running', 'success', 'failed', 'cancelled'
  info JSONB DEFAULT '{}',       -- Job-specific information
  error_message TEXT,
  created_at TIMESTAMPTZ,
  updated_at TIMESTAMPTZ,
  started_at TIMESTAMPTZ,
  completed_at TIMESTAMPTZ
);
```

## Job Types

### 1. Mapping Job

Compiles C/C++ kernels to CGRA using the dataflow compiler.

**Type:** `mapping`

**Info Structure:**
```json
{
  "benchmarks": ["fir", "bicg", "relu"]
}
```

> **Note:** The architecture is not stored in the job's `info` field. Instead, the runner
> fetches it from the associated project at execution time. This ensures the job always
> uses the current project architecture (single source of truth).

**Result Structure:**
```json
{
  "execution_time_ms": 45230,
  "job_directory": "./jobs/550e8400-e29b-41d4-a716-446655440000",
  "benchmarks": {
    "fir": {
      "status": "success",
      "execution_time_ms": 12500,
      "test_passed": true,
      "compiled_ii": 5,
      "rec_mii": 5,
      "res_mii": 2,
      "stdout_length": 15234,
      "stderr_length": 0
    },
    "bicg": {
      "status": "success",
      "execution_time_ms": 18400,
      "test_passed": true,
      "compiled_ii": 8,
      "rec_mii": 6,
      "res_mii": 4
    },
    "relu": {
      "status": "failed",
      "error": "Benchmark timed out after 600000ms",
      "stderr": "..."
    }
  },
  "summary": {
    "total": 3,
    "success": 2,
    "failed": 1
  }
}
```

## Available Benchmarks

Benchmarks are located in `/cgra/dataflow/test/e2e/` in the Docker container.

- `bicg` - BiConjugate Gradient
- `fir` - Finite Impulse Response filter
- `histogram` - Histogram computation
- `relu` - Rectified Linear Unit activation

## Job Directory Structure

When a mapping job is executed, the following directory structure is created:

```
jobs/
└── <job-id>/
    ├── architecture.json          # Original architecture from UI
    ├── architecture.yaml           # Converted YAML for dataflow
    └── benchmarks/
        ├── fir/
        │   ├── architecture.yaml   # Architecture copy
        │   ├── stdout.txt          # Test output
        │   └── stderr.txt          # Error output
        ├── bicg/
        │   ├── architecture.yaml
        │   ├── stdout.txt
        │   └── stderr.txt
        └── relu/
            ├── architecture.yaml
            ├── stdout.txt
            └── stderr.txt
```

## Creating Jobs from UI

Example code to create a mapping job from the web UI:

```javascript
import { supabase } from './lib/supabase';

async function createMappingJob(projectId, userId, benchmarks) {
  const { data, error } = await supabase
    .from('jobs')
    .insert({
      project_id: projectId,
      user_id: userId,
      type: 'mapping',
      status: 'queued',
      info: { benchmarks }  // Only benchmarks; architecture is fetched from project
    })
    .select()
    .single();

  if (error) throw error;
  return data;
}

// Usage
const job = await createMappingJob(
  'project-uuid',
  'user-uuid',
  ['fir', 'bicg', 'relu']
);
```

## Job Status Lifecycle

```
queued → running → success
                 ↘ failed
                 ↘ cancelled
```

1. **queued**: Job created, waiting for runner
2. **running**: Runner claimed the job and is executing
3. **success**: Job completed successfully
4. **failed**: Job encountered an error
5. **cancelled**: User cancelled the job

## Runner Modes

### Fake Mode
```bash
RUNNER_MODE=fake
```
- Simulates job execution with random duration (10-30s)
- No Docker required
- Returns fake results
- Good for testing UI and job queue

### Real Mode
```bash
RUNNER_MODE=real
```
- Executes actual mapping in Docker
- Requires `cgra-flow:latest` Docker image
- Creates job directories with real outputs
- Runs llvm-lit tests for each benchmark

## Environment Variables

```bash
# Required
SUPABASE_URL=...
SUPABASE_SERVICE_ROLE_KEY=...

# Runner config
RUNNER_ID=runner-001              # Unique runner identifier
POLL_INTERVAL_MS=5000             # Polling interval
RUNNER_MODE=fake                  # 'fake' or 'real'

# Real mode config
JOBS_DIR=./jobs                   # Job output directory
DOCKER_IMAGE=cgra-flow:latest     # Docker image name
DOCKER_TIMEOUT_MS=600000          # Per-benchmark timeout (10 min)
```

## Docker Requirements

To run in real mode, you need the `cgra-flow` Docker image:

```bash
cd cgra-flow-docker
docker build -t cgra-flow:latest .
```

The image must include:
- LLVM/MLIR toolchain with `llvm-lit`, `clang++`, `llvm-extract`, `mlir-translate`
- dataflow compiler with test benchmarks
- Architecture specification at `/cgra/dataflow/test/arch_spec/architecture.yaml`

## Monitoring Jobs

### From UI
```javascript
// Subscribe to job updates
const subscription = supabase
  .channel('job-updates')
  .on('postgres_changes', {
    event: '*',
    schema: 'public',
    table: 'jobs',
    filter: `user_id=eq.${userId}`
  }, (payload) => {
    console.log('Job update:', payload);
  })
  .subscribe();
```

### From Runner Logs
```bash
# Follow runner logs
pm2 logs cgra-runner --lines 100

# Or with tail
tail -f ~/.pm2/logs/cgra-runner-out.log
```

## Error Handling

Common errors and solutions:

**Docker image not found:**
```
Error: Docker image cgra-flow:latest not found
Solution: Build the image with docker build -t cgra-flow:latest .
```

**Timeout errors:**
```
Error: Benchmark timed out after 600000ms
Solution: Increase DOCKER_TIMEOUT_MS or optimize the benchmark
```

**Missing benchmarks:**
```
Error: Test file not found: /cgra/dataflow/test/e2e/unknown/unknown_kernel.mlir
Solution: Check benchmark name spelling and availability
```

## Best Practices

1. **Small benchmark sets**: Start with 1-2 benchmarks to test
2. **Timeout tuning**: Adjust `DOCKER_TIMEOUT_MS` based on hardware
3. **Disk space**: Monitor `JOBS_DIR` - clean up old jobs periodically
4. **Error checking**: Always check job status before using results
5. **Architecture validation**: Validate architecture JSON before creating job
