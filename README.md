# CGRA-Flow UI

This project recreates the original CGRA-Flow Tkinter interface with a modern React + Vite implementation. The layout mirrors the configuration, mapping, and logging panes that power the CGRA design flow while providing responsive styling inspired by the desktop mock-up.

## Getting started

```bash
npm install
npm run dev
```

The development server listens on port `5173` by default.

To produce a static build run:

```bash
npm run build
```

## Project structure

- `src/App.jsx` – top-level workspace that wires panels, configuration forms, and simulated mapping log updates.
- `src/components/` – shared UI primitives such as `Panel`, `ToggleSwitch`, and `StatBadge`.
- `src/styles/` – global tokens (`index.scss`) and feature styling (`app.scss`) that recreate the dark themed dashboard aesthetic.

The UI currently stubs mapper execution by logging events and updating the status badge. It is ready to connect to the existing CGRA-Flow Python backend through HTTP or WebSocket APIs.
