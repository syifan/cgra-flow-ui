# CGRA-Flow UI

A modern web-based interface for the CGRA (Coarse-Grained Reconfigurable Array) design flow. Built with React, Vite, and Material UI, with Supabase for authentication and data persistence.

## Tech Stack

- **Frontend**: React 19, Vite, Material UI
- **Backend**: Supabase (PostgreSQL, Auth, Realtime)
- **Visualization**: D3.js for CGRA canvas rendering
- **Layout**: FlexLayout for dockable panels
- **Testing**: Playwright (E2E)

## Getting Started

### Prerequisites

- Node.js 20.19+ or 22.12+
- A Supabase project (for database and auth)

### Frontend Setup

```bash
# Install dependencies
npm install

# Start development server
npm run dev
```

The development server runs on `http://localhost:5173` by default.

### Environment Variables

Create a `.env` file in the project root:

```bash
VITE_SUPABASE_URL=https://your-project.supabase.co
VITE_SUPABASE_ANON_KEY=your-anon-key
```

### Database Setup

Push the database schema to your Supabase project:

```bash
npm run db:push
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
SUPABASE_URL=https://your-project.supabase.co
SUPABASE_SERVICE_ROLE_KEY=your-service-role-key  # NOT the anon key
RUNNER_ID=runner-001
POLL_INTERVAL_MS=5000
```

### Start the Runner

```bash
npm run runner
```

The runner will poll for queued jobs and process them. Currently implements a fake runner that simulates job execution with a random 10-30 second delay.

## Project Structure

```
cgra-flow-ui/
├── src/
│   ├── App.jsx              # Root component with routing
│   ├── Workspace.jsx        # Main workspace with panels
│   ├── PropertyInspector.jsx # Property editing panel
│   ├── canvas/              # D3-based CGRA visualization
│   │   ├── cgraNodesLayer.js
│   │   ├── cgraConnectionsLayer.js
│   │   ├── peNodesLayer.js
│   │   └── peConnectionsLayer.js
│   ├── contexts/            # React contexts
│   │   ├── AuthContext.jsx  # Authentication state
│   │   └── NotificationContext.jsx
│   ├── pages/               # Route pages
│   │   ├── LandingPage.jsx
│   │   ├── LoginPage.jsx
│   │   ├── SignupPage.jsx
│   │   └── DashboardPage.jsx
│   └── lib/
│       └── supabase.js      # Supabase client
├── runner/                  # Job runner service
│   ├── index.js             # Entry point
│   ├── jobProcessor.js      # Job claiming & execution
│   └── .env.example
├── supabase/
│   └── migrations/          # Database migrations
├── tests/                   # Playwright E2E tests
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
