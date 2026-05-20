# GitHub Actions Workflows

This directory contains CI/CD workflows for the CGRA Flow UI project.

## Workflows

### 🎭 [playwright.yml](./playwright.yml)
**Playwright E2E Tests**

Runs end-to-end tests using Playwright to verify UI functionality.

- **Triggers:** Push to `main`, Pull requests
- **Runs on:** Ubuntu latest
- **Node version:** 20
- **Key steps:**
  - Sets up Supabase locally
  - Installs Playwright browsers
  - Runs E2E test suite
  - Uploads test reports as artifacts

### 🔄 [converter-tests.yml](./converter-tests.yml)
**Architecture Converter Unit Tests**

Tests the JSON-to-YAML architecture converter module.

- **Triggers:** Push to `main`, Pull requests (when converter files change)
- **Runs on:** Ubuntu latest
- **Node versions:** 20, 22 (matrix)
- **Jobs:**
  - **test**: Runs converter test suite on multiple Node versions
  - **lint**: Basic code quality checks
  - **example**: Validates example conversion output
- **Artifacts:** Example conversion output (7 days retention)

### 🌐 [preview-environment.yml](./preview-environment.yml)
**Preview Environment Deployment**

Deploys preview environments for pull requests.

- **Triggers:** Pull requests (synchronize, opened, reopened)
- **Runs on:** Ubuntu latest
- **Key features:**
  - Creates isolated preview environment per PR
  - Deploys to production infrastructure
  - Auto-cleanup on PR close

### 🚀 [production-runner.yml](./production-runner.yml)
**Production Runner Deployment**

Deploys the job runner to production server.

- **Triggers:** Push to `main` (when runner files change)
- **Runs on:** Ubuntu latest
- **Key steps:**
  - SSH deployment to production server
  - Uses PM2 for process management
  - Preserves PR-specific runners

### 🩺 [runner-watchdog.yml](./runner-watchdog.yml)
**Production Runner Watchdog**

Periodically verifies the production runner is online and attempts restart if down.

- **Triggers:** Scheduled every 10 minutes, manual dispatch
- **Runs on:** Ubuntu latest
- **Key steps:**
  - SSH health check of PM2 process `cgra-runner`
  - Automatic restart if process is offline
  - Fails workflow if restart cannot recover the process

## Status Badges

Add these to your README.md:

```markdown
![Playwright E2E](https://github.com/syifan/cgra-flow-ui/actions/workflows/playwright.yml/badge.svg)
![Converter Tests](https://github.com/syifan/cgra-flow-ui/actions/workflows/converter-tests.yml/badge.svg)
![Preview Environment](https://github.com/syifan/cgra-flow-ui/actions/workflows/preview-environment.yml/badge.svg)
![Production Runner](https://github.com/syifan/cgra-flow-ui/actions/workflows/production-runner.yml/badge.svg)
![Runner Watchdog](https://github.com/syifan/cgra-flow-ui/actions/workflows/runner-watchdog.yml/badge.svg)
```

## Required Secrets

Configure these in repository settings → Secrets and variables → Actions:

### For preview-environment.yml
- `PREVIEW_SSH_HOST` - Preview server hostname
- `PREVIEW_SSH_PORT` - SSH port (default: 22)
- `PREVIEW_SSH_USER` - SSH username
- `PREVIEW_SSH_KEY` - SSH private key
- `SUPABASE_URL` - Supabase project URL
- `SUPABASE_ANON_KEY` - Supabase anon key

### For production-runner.yml
- `RUNNER_SSH_HOST` - Production server hostname
- `RUNNER_SSH_PORT` - SSH port (default: 22)
- `RUNNER_SSH_USER` - SSH username
- `RUNNER_SSH_KEY` - SSH private key
- `SUPABASE_URL` - Supabase project URL
- `SUPABASE_SERVICE_ROLE_KEY` - Supabase service role key

### For runner-watchdog.yml
- `RUNNER_SSH_HOST` - Production server hostname
- `RUNNER_SSH_PORT` - SSH port (default: 22)
- `RUNNER_SSH_USER` - SSH username
- `RUNNER_SSH_KEY` - SSH private key

## Local Testing

### Test converter locally
```bash
cd runner
npm test
```

### Test with coverage
```bash
cd runner
node --test --experimental-test-coverage converter/converter.test.js
```

### Run example conversion
```bash
cd runner
node converter/example.js
```

### Test E2E locally
```bash
npm run test:e2e
```

## Workflow Optimization

- **Path filters** ensure workflows only run when relevant files change
- **Matrix builds** test across multiple Node versions
- **Artifacts** preserve test outputs for debugging
- **Caching** speeds up dependency installation
