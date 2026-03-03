## Why

Currently, users can design CGRA architectures through the web UI, but cannot verify whether their designs will successfully generate synthesizable Verilog code. The VerificationTab is a placeholder showing "Under Construction". This creates a gap in the design workflow - users need confidence that their manually designed or AI-generated CGRA configurations are valid before proceeding to synthesis.

Now is the right time to implement this because:
1. The backend runner infrastructure exists for executing jobs in Docker containers
2. The VectorCGRA repository with test infrastructure is available in the Docker image
3. Reference implementation exists in `ai_assistant_sample/mode_dark_light.py` showing how to invoke VectorCGRA tests
4. Users need validation capability as more AI-assisted designs are being generated

## What Changes

- Implement functional VerificationTab component to replace placeholder
- Add new job type `verilog-generation` to the runner task queue system
- Create API endpoint to submit verification jobs and retrieve results
- Integrate VectorCGRA's `MeshMultiCgraTemplateRTL_test.py` execution in Docker container
- Display real-time verification status and results to users
- Export current CGRA architecture design to YAML format compatible with VectorCGRA
- Parse and display generated Verilog output or error messages

## Capabilities

### New Capabilities

- `verilog-generation`: Capability to generate synthesizable Verilog from CGRA architecture designs by invoking VectorCGRA's multi-CGRA test infrastructure in Docker containers. Includes architecture YAML export, job queue integration, real-time status tracking, and result visualization.

### Modified Capabilities

None - this is a new capability that fills a gap in the existing workflow.

## Impact

**Frontend**:
- `src/workspace/VerificationTab.jsx` - Transform from placeholder to fully functional component
- May need new service file for verification API calls (e.g., `src/workspace/services/verificationService.js`)
- State management for verification job status and results

**Backend**:
- `runner/jobProcessor.js` - Add handler for `verilog-generation` job type
- `runner/mappingExecutor.js` - Add Docker execution logic for VectorCGRA tests
- `runner/converter/converter.js` - May need updates for architecture YAML format

**Docker Integration**:
- VectorCGRA repository at `/cgra/VectorCGRA` in container
- Test file path: `/cgra/VectorCGRA/multi_cgra/test/MeshMultiCgraTemplateRTL_test.py`
- Architecture YAML format must match VectorCGRA expectations

**Dependencies**:
- Existing Supabase job queue infrastructure
- Docker container with VectorCGRA installed
- Architecture export functionality (similar to `dumpArchYaml` in reference implementation)

**User Workflow**:
- Design CGRA architecture in Design tab
- Switch to Verification tab
- Click "Generate Verilog" button
- Watch real-time progress
- View generated Verilog code or error messages
