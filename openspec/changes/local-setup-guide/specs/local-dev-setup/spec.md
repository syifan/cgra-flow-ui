## ADDED Requirements

### Requirement: Prerequisites are clearly stated
The guide SHALL list all software prerequisites with minimum version requirements before any setup steps, so contributors know what to install before cloning the repo.

#### Scenario: Contributor reads prerequisites
- **WHEN** a contributor opens `docs/LOCAL_SETUP.md`
- **THEN** they SHALL find a numbered list of prerequisites including Docker Desktop, Node.js (^20.19.0 or >=22.12.0), Git, and the Supabase CLI (or npx availability)

### Requirement: Required Docker images are documented
The guide SHALL document all Docker images required, including how to pull them, so contributors can obtain images before starting services.

#### Scenario: Pull Supabase images
- **WHEN** the contributor runs `npx supabase start` for the first time
- **THEN** the guide SHALL explain that Supabase CLI automatically pulls all required service images (~1-2 GB)

#### Scenario: Pull cgra-flow image
- **WHEN** the contributor does not have the `cgra/cgra-flow:ui` image locally
- **THEN** the guide SHALL provide the `docker pull cgra/cgra-flow:ui` command and note where to request access if the pull fails

### Requirement: Environment files are configured correctly
The guide SHALL provide step-by-step instructions for creating both required `.env` files (root `.env` for the frontend, `runner/.env` for the runner), so contributors do not need to infer configuration from source code.

#### Scenario: Create root .env
- **WHEN** the contributor runs `npx supabase status`
- **THEN** the guide SHALL show exactly which output values map to which `.env` variables (`API URL` → `VITE_SUPABASE_URL`, `anon key` → `VITE_SUPABASE_ANON_KEY`)

#### Scenario: Create runner/.env
- **WHEN** the contributor configures the runner
- **THEN** the guide SHALL document each required variable (`SUPABASE_URL`, `SUPABASE_SERVICE_ROLE_KEY`, `RUNNER_MODE`, `DOCKER_IMAGE`) with their values derived from `npx supabase status` output and `runner/.env.example`

### Requirement: Service startup order is documented
The guide SHALL specify the exact order in which services must be started, because starting the runner before Supabase will cause connection failures.

#### Scenario: Correct startup sequence
- **WHEN** a contributor follows the guide
- **THEN** they SHALL start services in this order: (1) Supabase, (2) frontend dev server, (3) runner

#### Scenario: Verify each service is healthy
- **WHEN** each service is started
- **THEN** the guide SHALL provide a verification command or expected terminal output to confirm that service is running correctly before proceeding to the next

### Requirement: End-to-end verification is documented
The guide SHALL include a verification section that lets contributors confirm the full stack is working, including submitting a test mapping job.

#### Scenario: Full stack smoke test
- **WHEN** all services are running
- **THEN** the guide SHALL instruct the contributor to open the UI, sign up or log in, create a project, and submit a mapping job, then observe the job status change from "Queued" to "Completed"

### Requirement: Common troubleshooting cases are documented
The guide SHALL include a troubleshooting section covering the most likely failure modes encountered during local setup.

#### Scenario: Blank page on first load
- **WHEN** the frontend shows a blank page
- **THEN** the troubleshooting section SHALL instruct the contributor to open the browser console and check for missing environment variable errors, and link to the `.env` setup step

#### Scenario: Job stuck in Queued state
- **WHEN** a mapping job stays in "Queued" indefinitely
- **THEN** the troubleshooting section SHALL instruct the contributor to verify the runner is running and check the runner terminal for errors, and confirm `RUNNER_MODE=real` and `DOCKER_IMAGE=cgra/cgra-flow:ui` are set correctly
