## Context

**Current State:**
- Frontend has `VerificationTab.jsx` as a placeholder showing "Under Construction"
- Backend runner infrastructure exists with job queue system (`runner/` directory)
- Docker image contains VectorCGRA at `/cgra/VectorCGRA` with test infrastructure
- Reference implementation in `ai_assistant_sample/mode_dark_light.py` demonstrates direct Python API calls to VectorCGRA tests
- Architecture data stored in frontend state and Supabase

**Key Constraints:**
- VectorCGRA tests expect YAML architecture files matching a specific schema
- Docker execution already supported via `mappingExecutor.js` for mapping jobs
- Job queue uses Supabase with types: 'mapping', 'synthesis', etc.
- Frontend-backend communication via Supabase realtime subscriptions

**Stakeholders:**
- End users designing CGRA architectures
- AI assistant generating architecture recommendations
- Backend runner processing jobs
- VectorCGRA test infrastructure

## Goals / Non-Goals

**Goals:**
- Enable users to verify CGRA designs generate valid Verilog
- Integrate VectorCGRA test execution in Docker containers
- Provide real-time feedback on generation progress
- Support both manual and AI-generated architectures
- Reuse existing job queue infrastructure
- Display generated Verilog or meaningful error messages

**Non-Goals:**
- Verilog syntax highlighting (future enhancement)
- Custom VectorCGRA test configurations
- Simulation or synthesis of generated Verilog (separate features)
- Multi-architecture batch verification
- Caching of generated Verilog results

## Decisions

### 1. Architecture YAML Export Format

**Decision:** Reuse existing architecture export logic from frontend state, adapt to VectorCGRA YAML schema.

**Rationale:**
- Frontend already tracks architecture configuration (rows, cols, tiles, links)
- Reference implementation has `dumpArchYaml()` function as a model
- Avoids duplicate data transformation logic

**Alternatives Considered:**
- Export from Supabase directly → Rejected: Requires fetching complete architecture from DB, frontend has most current state
- Create separate YAML service → Rejected: Adds unnecessary complexity for single format

### 2. Job Queue Integration

**Decision:** Add new job type `verilog-generation` to existing queue system.

**Rationale:**
- Consistent with existing `mapping` and `synthesis` job types
- Leverages existing `claimNextJob`, `completeJob`, `failJob` infrastructure
- Natural fit for long-running Docker tasks

**Alternatives Considered:**
- Dedicated verification service → Rejected: Over-engineering for single feature
- Synchronous API endpoint → Rejected: Docker execution may take minutes, would timeout

### 3. Docker Execution Strategy

**Decision:** Extend `mappingExecutor.js` with `executeVerilogGenerationJob()` function.

**Rationale:**
- Pattern already established for mapping jobs
- Docker container management centralized in one module
- Can reuse architecture YAML mounting and volume management

**Implementation Approach:**
```javascript
// Pseudo-code
async function executeVerilogGenerationJob(job) {
  // 1. Write architecture YAML to temp file
  // 2. Mount YAML file into Docker container
  // 3. Run pytest on MeshMultiCgraTemplateRTL_test.py with arch file
  // 4. Capture stdout/stderr and generated Verilog files
  // 5. Upload results to Supabase storage
  // 6. Return result info with storage paths
}
```

**Alternatives Considered:**
- Create new executor file → Rejected: Similar Docker patterns, keep together
- Use existing mapping executor directly → Rejected: Different test scripts and output handling

### 4. Frontend State Management

**Decision:** Add verification state to existing architecture context, create dedicated `verificationService.js`.

**Rationale:**
- Architecture context already exists in workspace
- Separation of concerns: service handles API, component handles UI
- Follows existing pattern of `aiApiService.js`, `mappingService.js`

**Alternatives Considered:**
- Global state management (Redux) → Rejected: Overkill for single feature, existing context sufficient
- Local component state → Rejected: Architecture data needs to be shared with job submission

### 5. Real-time Progress Updates

**Decision:** Use Supabase realtime subscription on job table updates.

**Rationale:**
- Already used for other job types
- Simple subscription model: `supabase.channel().on('UPDATE', ...)`
- No need for WebSocket setup

**Alternatives Considered:**
- Polling endpoint → Rejected: Less efficient, already have realtime infrastructure
- Server-sent events → Rejected: Requires additional server setup

### 6. Verilog Output Display

**Decision:** Store generated Verilog in Supabase Storage, display in Monaco Editor or simple code viewer.

**Rationale:**
- Verilog files can be large (MBs of generated code)
- Supabase Storage already used for job artifacts
- Code viewer provides scrollable, searchable interface

**Alternatives Considered:**
- Return in job result JSON → Rejected: Response size limits, JSON encoding issues
- Save to local filesystem → Rejected: Browser sandbox restrictions

## Risks / Trade-offs

**Risk:** VectorCGRA test execution may fail silently → **Mitigation:** Capture pytest exit codes, parse stderr for error messages, provide user-friendly error summaries

**Risk:** Generated Verilog format changes between VectorCGRA versions → **Mitigation:** Pin VectorCGRA to specific commit in Docker image, version the architecture YAML schema

**Risk:** Large Verilog files consume storage → **Mitigation:** Implement cleanup policy for old job artifacts, add storage quotas

**Risk:** Docker container startup time adds latency → **Mitigation:** Keep container warm if possible, show progress indicator immediately

**Trade-off:** Simplicity vs. Features → Chose to skip Verilog syntax highlighting and simulation integration in favor of faster delivery. Can add later as enhancements.

**Trade-off:** Real-time vs. On-demand → Rejected on-demand generation to avoid blocking UI, accepted job queue complexity for better UX.

## Migration Plan

**Deployment Steps:**
1. Deploy backend changes to runner service (backward compatible, new job type)
2. Deploy frontend changes (VerificationTab, verificationService)
3. No data migration required (uses existing job queue and storage)
4. Monitor first verilog-generation jobs for errors

**Rollback Strategy:**
- Frontend: Revert VerificationTab to placeholder
- Backend: Remove `verilog-generation` job handler, queue will reject unknown job types
- Database: No schema changes required
- Storage: Old artifacts remain accessible, no cleanup needed immediately

**Feature Flags:** Not required - feature is additive, no existing functionality affected

## Open Questions

1. **Error Message Formatting:** How much detail from pytest errors should be shown to users? Raw stderr vs. parsed/summarized errors?

2. **Progress Granularity:** Should we provide detailed progress (e.g., "Running test...", "Generating Verilog...") or simple status updates? Requires investigation of pytest output format.

3. **Architecture Validation:** Should we validate architecture YAML before submitting to VectorCGRA? Could prevent unnecessary job failures, but adds frontend complexity.

4. **Verilog File Naming:** How should generated Verilog files be named for storage? Job ID-based? Timestamp? User-defined?

5. **Multi-CGRA Support:** Does VectorCGRA test support multi-CGRA architectures directly, or need special handling? Need to verify with test documentation.
