# CGRA-Flow UI

A modern web-based interface for the CGRA (Coarse-Grained Reconfigurable Array) design flow. Built with React, Vite, and Material UI, with Supabase for authentication and data persistence.

## Tech Stack

- **Frontend**: React 19, Vite, Material UI
- **Backend**: Supabase (PostgreSQL, Auth, Realtime)
- **Visualization**: D3.js for CGRA canvas rendering
- **Layout**: FlexLayout for dockable panels
- **Testing**: Playwright (E2E)

## Local Development

For a complete step-by-step guide to running this project locally — including Docker image setup, environment configuration, and service startup order — see:

**[docs/LOCAL_SETUP.md](docs/LOCAL_SETUP.md)**

- Node.js 20.19+ or 22.12+
- Docker (required for local Supabase)
- Supabase CLI (`npm install -g supabase` or use via `npx`)

### 1. Install Dependencies

```bash
npm install && npm run runner:install
```

### 2. Start Local Supabase

Make sure Docker is running, then start the local Supabase services:

```bash
npx supabase start
```

This spins up local containers for Postgres, Auth, Storage, and the API gateway. Once running, you'll have:

- **API**: http://127.0.0.1:54321
- **Database**: localhost:54322
- **Studio** (admin UI): http://127.0.0.1:54323

### 3. Configure Environment Variables

Create a `.env.local` file in the project root:

```bash
VITE_SUPABASE_URL=http://127.0.0.1:54321
VITE_SUPABASE_ANON_KEY=<your-local-anon-key>
```

The anon key is printed when `npx supabase start` completes. You can also retrieve it with:

```bash
npx supabase status
```

### 4. Apply Database Migrations

```bash
npm run db:migrate
```

### 5. Pull the CGRA-Flow Docker Image

```bash
docker pull cgra/cgra-flow:web-ui
```

### 6. Start the Development Server

```bash
npm run dev        # Frontend at http://localhost:5173
npm run runner     # Job runner (separate terminal)
```

### Stopping Supabase

```bash
npx supabase stop
```

### Production Build

```bash
npm run build
npm run preview  # Preview the build locally
```

## Job Runner

The job runner is a separate service that processes mapping, verification, and layout jobs from the queue.

### Runner Setup

```bash
# Install runner dependencies
npm run runner:install

# Configure credentials
cp runner/.env.example runner/.env
# Edit runner/.env with your Supabase URL and SERVICE ROLE key
```

### Runner Environment Variables

Create `runner/.env`:

```bash
SUPABASE_URL=http://127.0.0.1:54321
SUPABASE_SERVICE_ROLE_KEY=<your-service-role-key>  # NOT the anon key

RUNNER_ID=runner-001
POLL_INTERVAL_MS=5000

# Runner mode: 'fake' for testing, 'real' for actual Docker execution
RUNNER_MODE=fake

# Job execution configuration (for real mode)
JOBS_DIR=./jobs
DOCKER_IMAGE=cgra/cgra-flow:web-ui
DOCKER_TIMEOUT_MS=600000
```

### Start the Runner

```bash
npm run runner
```

The runner will poll for queued jobs and process them.

## Project Structure

```
cgra-flow-ui/
├── src/
│   ├── App.jsx                # Root component with routing
│   ├── main.jsx               # Entry point
│   ├── Workspace.jsx          # Main workspace with panels
│   ├── workspace/             # Workspace components
│   │   ├── PropertyInspector.jsx
│   │   ├── DesignTab.jsx
│   │   ├── MappingTab.jsx
│   │   ├── VerificationTab.jsx
│   │   ├── LayoutTab.jsx
│   │   ├── DependencyGraph.jsx
│   │   ├── MainCanvas.jsx
│   │   ├── canvas/            # D3-based CGRA visualization
│   │   │   ├── cgraNodesLayer.js
│   │   │   ├── cgraConnectionsLayer.js
│   │   │   ├── peNodesLayer.js
│   │   │   └── peConnectionsLayer.js
│   │   └── mapping-canvas/    # Mapping visualization
│   │       ├── instructionPeLayer.js
│   │       └── dataFlowArrowsLayer.js
│   ├── shared/                # Shared utilities
│   ├── contexts/              # React contexts
│   │   ├── AuthContext.jsx
│   │   └── NotificationContext.jsx
│   ├── pages/                 # Route pages
│   │   ├── LandingPage.jsx
│   │   ├── LoginPage.jsx
│   │   ├── SignupPage.jsx
│   │   └── DashboardPage.jsx
│   └── lib/
│       └── supabase.js        # Supabase client
├── runner/                    # Job runner service
│   ├── index.js
│   ├── jobProcessor.js
│   └── .env.example
├── supabase/
│   ├── config.toml            # Local Supabase configuration
│   └── migrations/            # Database migrations
├── tests/                     # Playwright E2E tests
└── package.json
```

## Testing

Run end-to-end tests with Playwright:

```bash
# Run all tests
npm run test:e2e

# Run tests with UI
npm run test:ui
```

## Available Scripts

| Script | Description |
|--------|-------------|
| `npm run dev` | Start development server |
| `npm run build` | Build for production |
| `npm run preview` | Preview production build |
| `npm run test:e2e` | Run Playwright tests |
| `npm run test:ui` | Run Playwright with UI |
| `npm run db:push` | Push migrations to Supabase |
| `npm run db:migrate` | Run database migrations |
| `npm run runner` | Start the job runner |
| `npm run runner:install` | Install runner dependencies |
