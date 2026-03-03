## 1. Backend Infrastructure

- [x] 1.1 Add `verilog-generation` job type constant to `runner/jobProcessor.js`
- [x] 1.2 Create `executeVerilogGenerationJob()` function in `runner/mappingExecutor.js`
- [x] 1.3 Implement architecture YAML file writing logic with VectorCGRA schema
- [x] 1.4 Add Docker execution for pytest on MeshMultiCgraTemplateRTL_test.py
- [x] 1.5 Capture pytest stdout, stderr, and exit codes
- [x] 1.6 Implement Verilog file upload to Supabase Storage
- [x] 1.7 Add job result metadata storage (file paths, size, timestamp)
- [x] 1.8 Implement timeout handling for Docker execution (10 minute limit)
- [x] 1.9 Add error parsing logic for pytest failures

## 2. Frontend Services

- [ ] 2.1 Create `src/workspace/services/verificationService.js` file
- [ ] 2.2 Implement `exportArchitectureYaml()` function to convert frontend state to VectorCGRA YAML
- [ ] 2.3 Implement `submitVerilogJob()` function to create job in Supabase queue
- [ ] 2.4 Implement `getJobStatus()` function to fetch job status
- [ ] 2.5 Implement `subscribeToJobUpdates()` function using Supabase realtime
- [ ] 2.6 Implement `getVerilogFile()` function to download from Supabase Storage
- [ ] 2.7 Implement `getJobHistory()` function to list user's past jobs
- [ ] 2.8 Add error handling and user-friendly error message formatting

## 3. UI Components

- [ ] 3.1 Replace placeholder content in `src/workspace/VerificationTab.jsx`
- [ ] 3.2 Add "Generate Verilog" button with click handler
- [ ] 3.3 Implement job status display component (queued, running, completed, failed)
- [ ] 3.4 Add progress indicator during job execution
- [ ] 3.5 Implement Verilog code viewer component
- [ ] 3.6 Add download button for Verilog files
- [ ] 3.7 Create job history list view
- [ ] 3.8 Add error message display with detailed information
- [ ] 3.9 Implement duplicate submission prevention (disable button when job running)
- [ ] 3.10 Add job deletion functionality

## 4. Architecture Context Integration

- [ ] 4.1 Verify architecture state structure matches VectorCGRA requirements
- [ ] 4.2 Add validation for required architecture fields before YAML export
- [ ] 4.3 Implement architecture hash calculation for result tracking
- [ ] 4.4 Add verification state to existing workspace context if needed

## 5. Testing

- [ ] 5.1 Write unit tests for `exportArchitectureYaml()` function
- [ ] 5.2 Write unit tests for `executeVerilogGenerationJob()` with mocked Docker calls
- [ ] 5.3 Write integration test for complete job submission and status update flow
- [ ] 5.4 Write E2E test using Playwright for user workflow: design → verify → view result
- [ ] 5.5 Test error scenarios: Docker timeout, invalid architecture, missing Verilog file
- [ ] 5.6 Test large Verilog file handling (>10MB)

## 6. Documentation

- [ ] 6.1 Document VectorCGRA YAML schema requirements
- [ ] 6.2 Add JSDoc comments to verificationService.js functions
- [ ] 6.3 Update README with verification feature usage instructions
- [ ] 6.4 Document environment variables for Docker image path and timeout settings
