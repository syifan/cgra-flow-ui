## 1. Create Document Structure

- [x] 1.1 Create `docs/` directory at the project root
- [x] 1.2 Create `docs/LOCAL_SETUP.md` with top-level heading and table of contents skeleton

## 2. Write Prerequisites Section

- [x] 2.1 Document required software: Docker Desktop (with version requirement), Node.js (^20.19.0 or >=22.12.0), Git
- [x] 2.2 Document that `npx` (bundled with Node.js) is used to run the Supabase CLI — no global install required

## 3. Write Docker Images Section

- [x] 3.1 Explain that `npx supabase start` automatically pulls all Supabase service images on first run (~1-2 GB)
- [x] 3.2 Document `docker pull cgra/cgra-flow:ui` command with expected output and note about image access (who to contact if pull fails)

## 4. Write Environment Configuration Section

- [x] 4.1 Document how to start Supabase (`npx supabase start`) and run `npx supabase status` to get credentials
- [x] 4.2 Document root `.env` creation: map `API URL` → `VITE_SUPABASE_URL` and `anon key` → `VITE_SUPABASE_ANON_KEY` with a copy-paste template
- [x] 4.3 Document `runner/.env` creation: map `API URL` → `SUPABASE_URL` and `service_role key` → `SUPABASE_SERVICE_ROLE_KEY`, plus `RUNNER_MODE=real` and `DOCKER_IMAGE=cgra/cgra-flow:ui`, with a copy-paste template

## 5. Write Service Startup Section

- [x] 5.1 Document npm dependency installation: `npm install` (root) and `npm run runner:install`
- [x] 5.2 Document service startup order with commands: (1) Supabase already started in step 4, (2) `npm run dev`, (3) `npm run runner` in a separate terminal
- [x] 5.3 Add verification step for each service: Supabase (`npx supabase status`), frontend (open `http://localhost:5173`), runner (check terminal output for "Runner started")

## 6. Write End-to-End Verification Section

- [x] 6.1 Document the smoke test: open UI → sign up → create a project → submit a mapping job → confirm job status changes to "Completed"

## 7. Write Troubleshooting Section

- [x] 7.1 Document "Blank page on load" fix: open browser console, check for missing env variable error, re-check `.env` setup
- [x] 7.2 Document "Job stuck in Queued" fix: verify runner terminal is active, check `RUNNER_MODE=real` and `DOCKER_IMAGE=cgra/cgra-flow:ui` in `runner/.env`, confirm no stale node processes with `Get-Process node` (Windows) or `ps aux | grep node` (macOS/Linux)
- [x] 7.3 Document "Supabase port conflict" fix: identify conflicting process with `netstat -ano | findstr 54321` (Windows) and stop it, or change Supabase ports in `supabase/config.toml`

## 8. Update Root README

- [x] 8.1 Add a "Local Development" section (or update existing) in `README.md` that links to `docs/LOCAL_SETUP.md`
