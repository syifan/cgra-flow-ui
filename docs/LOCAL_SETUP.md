# Local Development Setup Guide

This guide walks you through running cgra-flow-ui locally from scratch. You will start three services: a local Supabase instance, the Vite frontend dev server, and the Node.js job runner.

## Table of Contents

1. [Prerequisites](#1-prerequisites)
2. [Docker Images](#2-docker-images)
3. [Clone the Repository](#3-clone-the-repository)
4. [Install Dependencies](#4-install-dependencies)
5. [Start Supabase & Configure Environment](#5-start-supabase--configure-environment)
6. [Start All Services](#6-start-all-services)
7. [End-to-End Verification](#7-end-to-end-verification)
8. [Troubleshooting](#8-troubleshooting)

---

## 1. Prerequisites

Install the following before proceeding:

| Tool | Minimum Version | Notes |
|---|---|---|
| [Docker Desktop](https://www.docker.com/products/docker-desktop/) | Latest stable | Must be running before any step below |
| [Node.js](https://nodejs.org/) | ^20.19.0 or >=22.12.0 | Includes `npm` and `npx` — no separate installs needed |
| [Git](https://git-scm.com/) | Any recent version | |

> **No global Supabase CLI install required.** All Supabase commands in this guide use `npx supabase ...`, which downloads and runs the CLI automatically via Node.js.

---

## 2. Docker Images

Two sets of Docker images are required. Pull them before starting services to avoid long waits mid-setup.

### 2.1 Supabase Images

Supabase runs as a collection of Docker containers. The CLI pulls all required images automatically on the first `npx supabase start`. This download is approximately **1–2 GB** and only happens once.

No manual `docker pull` is needed for Supabase.

### 2.2 cgra-flow Image

The job runner executes CGRA mapping jobs inside a Docker container using the `cgra/cgra-flow:ui` image.

```bash
docker pull cgra/cgra-flow:ui
```

Expected output (image layers downloading, then):
```
Status: Downloaded newer image for cgra/cgra-flow:ui
```

---

## 3. Clone the Repository

```bash
git clone <repository-url>
cd cgra-flow-ui
```

---

## 4. Install Dependencies

Run both installs from the project root:

```bash
# Frontend dependencies
npm install

# Runner service dependencies
npm run runner:install
```

---

## 5. Start Supabase & Configure Environment

### 5.1 Start Supabase

```bash
npx supabase start
```

On first run this downloads ~1-2 GB of Docker images. Subsequent starts are fast. When complete you will see output like:

```
Started supabase local development setup.

         API URL: http://127.0.0.1:54321
     GraphQL URL: http://127.0.0.1:54321/graphql/v1
  S3 Storage URL: http://127.0.0.1:54321/storage/v1/s3
          DB URL: postgresql://postgres:postgres@127.0.0.1:54322/postgres
      Studio URL: http://127.0.0.1:54323
    Inbucket URL: http://127.0.0.1:54324
      JWT secret: super-secret-jwt-token-with-at-least-32-characters-long
        anon key: eyJhbGci...
service_role key: eyJhbGci...
```

To retrieve credentials again at any time:

```bash
npx supabase status
```

### 5.2 Create the Frontend `.env`

Create a file named `.env` in the **project root** (same directory as `package.json`):

```dotenv
# .env  (project root)
VITE_SUPABASE_URL=http://127.0.0.1:54321
VITE_SUPABASE_ANON_KEY=<paste the "anon key" from npx supabase status>
```

**Mapping from `npx supabase status` output:**

| `npx supabase status` field | `.env` variable |
|---|---|
| `API URL` | `VITE_SUPABASE_URL` |
| `anon key` | `VITE_SUPABASE_ANON_KEY` |

### 5.3 Create the Runner `runner/.env`

Create a file named `.env` inside the `runner/` directory:

```dotenv
# runner/.env
SUPABASE_URL=http://127.0.0.1:54321
SUPABASE_SERVICE_ROLE_KEY=<paste the "service_role key" from npx supabase status>

RUNNER_ID=runner-001
POLL_INTERVAL_MS=5000

RUNNER_MODE=real
RUNNER_ALLOW_FAKE_CLAIM=false
JOBS_DIR=./jobs
DOCKER_IMAGE=cgra/cgra-flow:ui
DOCKER_TIMEOUT_MS=600000
```

**Mapping from `npx supabase status` output:**

| `npx supabase status` field | `runner/.env` variable |
|---|---|
| `API URL` | `SUPABASE_URL` |
| `service_role key` | `SUPABASE_SERVICE_ROLE_KEY` |

> **Important:** Use the `service_role key` for the runner (not the `anon key`). The runner needs elevated permissions to update job records.

---

## 6. Start All Services

Open **three separate terminal windows** and start services in this order:

### Terminal 1 — Supabase (already running from step 5)

Verify it is still running:

```bash
npx supabase status
```

Expected: output showing API URL, DB URL, Studio URL etc. If it has stopped, run `npx supabase start` again.

### Terminal 2 — Frontend Dev Server

```bash
npm run dev
```

Expected output:
```
  VITE v7.x.x  ready in xxx ms

  ➜  Local:   http://localhost:5173/
  ➜  Network: use --host to expose
```

Verify: open [http://localhost:5173](http://localhost:5173) in your browser. You should see the cgra-flow-ui landing page.

### Terminal 3 — Job Runner

```bash
npm run runner
```

Expected output (within a few seconds):
```
Runner started. Polling for jobs...
```

Verify: you should see the runner polling log messages without any connection errors.

---

## 7. End-to-End Verification

With all three services running, confirm the full stack is working:

1. Open [http://localhost:5173](http://localhost:5173)
2. Click **Sign Up** and create an account (email + password; no email confirmation needed on local Supabase)
3. Log in and create a new project from the dashboard
4. Open the project workspace
5. Select a benchmark in the **Design** tab
6. Switch to the **Mapping** tab and submit a mapping job
7. Watch the job status — it should progress from **Queued** → **Running** → **Completed**

If the job reaches **Completed**, your local setup is fully working.

---

## 8. Troubleshooting

### Blank page on first load

**Symptom:** Opening `http://localhost:5173` shows a blank white page.

**Fix:**
1. Open your browser's Developer Tools (F12) → **Console** tab
2. Look for an error like `Missing Supabase environment variables`
3. If present, your root `.env` is missing or incorrect — go back to [step 5.2](#52-create-the-frontend-env) and recreate it
4. Stop and restart `npm run dev` after saving `.env`

---

### Job stuck in "Queued" state

**Symptom:** A submitted mapping job never leaves the **Queued** status.

**Fix:**
1. Check that the runner terminal (Terminal 3) is still active and printing poll messages
2. If the runner terminal is closed or shows errors, restart it: `npm run runner`
3. In `runner/.env`, confirm:
   - `RUNNER_MODE=real` (not `fake`)
   - `RUNNER_ALLOW_FAKE_CLAIM=false`
   - `DOCKER_IMAGE=cgra/cgra-flow:ui`
4. Check for stale runner processes from previous sessions:

   **Windows (PowerShell):**
   ```powershell
   Get-Process node
   # Kill all node processes if multiple show up unexpectedly:
   Stop-Process -Name node -Force
   ```

   **macOS / Linux:**
   ```bash
   ps aux | grep node
   # Kill by PID:
   kill <PID>
   ```
5. After cleaning up, restart the runner: `npm run runner`

---

### Supabase port conflict

**Symptom:** `npx supabase start` fails with a port-in-use error (ports 54321, 54322, 54323, etc.).

**Fix:**

**Windows (PowerShell):**
```powershell
# Find what is using port 54321
netstat -ano | findstr 54321
# Note the PID in the last column, then:
Stop-Process -Id <PID> -Force
```

**macOS / Linux:**
```bash
lsof -i :54321
kill <PID>
```

Alternatively, change the Supabase ports in `supabase/config.toml` and update both `.env` files to match.

