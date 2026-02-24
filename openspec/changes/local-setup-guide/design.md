## Context

cgra-flow-ui requires three independent services to be running simultaneously for full local functionality: a Supabase instance (auth + database), the Vite dev server (frontend), and the Node.js runner service (job processor). The runner executes mapping jobs by spinning up a Docker container using the `cgra/cgra-flow:ui` image.

Currently there is no documentation that covers this multi-service setup. Contributors must infer the setup process from scattered config files (`runner/.env.example`, `runner/README.md`, `supabase/config.toml`), leading to time-consuming trial-and-error.

## Goals / Non-Goals

**Goals:**
- Produce a single authoritative `docs/LOCAL_SETUP.md` that a new contributor can follow from zero to a fully working local environment
- Cover all required Docker images and how to obtain them
- Cover all environment variable configuration
- Cover the correct service startup order and how to verify each step

**Non-Goals:**
- Building `cgra/cgra-flow:ui` from source (users pull the pre-built image)
- Hosting Supabase remotely or configuring cloud environments
- Platform-specific instructions beyond what Docker Desktop covers
- VS Code extension or IDE configuration

## Decisions

**Decision: Single guide file at `docs/LOCAL_SETUP.md`**
Rather than updating the existing `runner/README.md` or scattering instructions across multiple files, one canonical guide is clearer and easier to link to. The README can then link to it.
- Alternative: embed in root `README.md` — rejected; the root README is already long and mixes project description with usage.

**Decision: Local Supabase via `npx supabase start`**
Uses the official Supabase CLI which pulls all required service images automatically and generates the correct local credentials via `npx supabase status`.
- Alternative: manual `docker-compose` for Supabase — rejected; more fragile and diverges from the supported Supabase CLI workflow.

**Decision: Pull `cgra/cgra-flow:ui` from registry rather than build**
Building the image requires downloading a multi-GB LLVM tarball and compiling LLVM/MLIR which takes hours and has network-dependent steps. Pulling a pre-built image is the practical path for contributors.
- Alternative: document the build process — relegated to a separate note; not the primary path.

**Decision: Document required ports and how to verify each service**
Contributors often get stuck when a service appears to start but isn't reachable. Explicit port numbers and verification commands (e.g. `npx supabase status`, `docker ps`) eliminate ambiguity.

## Risks / Trade-offs

- [Risk] Supabase local ports (54321, 54322, 54323, ...) may conflict with other running services → Mitigation: note the ports in the guide and suggest checking with `netstat` or stopping conflicting services.
- [Risk] `cgra/cgra-flow:ui` image may not be publicly accessible → Mitigation: note who to contact for access; the guide documents the `docker pull` command and expected output.
- [Risk] Guide becomes stale as config changes → Mitigation: guide references config files (`.env.example`) rather than hardcoding values where possible, so readers always get the current field names.
- [Risk] Windows line endings in `.env` files can cause runner issues → Mitigation: note to use LF line endings or a Unix-style editor setting.
