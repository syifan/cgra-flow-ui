## Why

New contributors to cgra-flow-ui have no step-by-step instructions for running the project locally. The setup requires coordinating multiple services (Supabase via Docker, the cgra-flow Docker image, a Node.js runner, and the Vite dev server), and the current README does not cover these steps, blocking anyone from contributing.

## What Changes

- Add a comprehensive local development guide (`docs/LOCAL_SETUP.md`) covering the full setup process
- Document required Docker images and how to pull them (`supabase/*` images, `cgra/cgra-flow:ui`)
- Document `.env` file creation for both the frontend and the runner service
- Document how to start all required services in the correct order
- Document how to verify the setup is working end-to-end

## Non-goals

- Building the `cgra/cgra-flow:ui` Docker image from source (users pull the pre-built image)
- Deploying to production or any cloud environment
- Setting up remote/hosted Supabase (guide covers local Docker only)
- Windows-only or platform-specific tooling beyond standard Docker Desktop

## Capabilities

### New Capabilities
- `local-dev-setup`: Complete guide for setting up and running cgra-flow-ui locally, including Docker images, environment configuration, and service startup order

### Modified Capabilities
_(none)_

## Impact

- Adds `docs/LOCAL_SETUP.md` (new file)
- No changes to existing source code
- Relevant to: `runner/.env.example`, `README.md`, `.env` setup
