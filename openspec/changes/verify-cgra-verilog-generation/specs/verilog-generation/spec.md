## ADDED Requirements

### Requirement: Architecture YAML Export
The system SHALL export the current CGRA architecture design to a YAML format compatible with VectorCGRA test infrastructure.

#### Scenario: Export valid architecture
- **WHEN** user has a valid CGRA architecture design with configured tiles and links
- **THEN** system generates a YAML file containing architecture parameters, tile configurations, and link definitions matching VectorCGRA schema

#### Scenario: Handle incomplete architecture
- **WHEN** user has an incomplete architecture with missing required fields
- **THEN** system displays validation errors indicating missing fields and prevents export

### Requirement: Verilog Generation Job Submission
The system SHALL allow users to submit Verilog generation jobs to the backend job queue.

#### Scenario: Submit generation job
- **WHEN** user clicks "Generate Verilog" button on Verification tab
- **THEN** system creates a new job with type "verilog-generation" and adds it to the job queue

#### Scenario: Prevent duplicate submission
- **WHEN** user has an active Verilog generation job in progress
- **THEN** system disables the "Generate Verilog" button and displays status of current job

#### Scenario: Associate job with project
- **WHEN** user submits a Verilog generation job
- **THEN** system associates the job with the current project and user ID

### Requirement: Real-time Job Status Updates
The system SHALL provide real-time status updates for Verilog generation jobs.

#### Scenario: Display job progress
- **WHEN** a Verilog generation job is running
- **THEN** system displays real-time status updates including "queued", "running", "completed", or "failed" states

#### Scenario: Update status on completion
- **WHEN** a Verilog generation job completes successfully
- **THEN** system updates status to "completed" and enables result viewing

#### Scenario: Update status on failure
- **WHEN** a Verilog generation job fails
- **THEN** system updates status to "failed" and displays error message

### Requirement: Docker Container Integration
The system SHALL execute VectorCGRA test scripts in Docker containers with mounted architecture files.

#### Scenario: Execute test in container
- **WHEN** a Verilog generation job starts processing
- **THEN** system runs pytest on MeshMultiCgraTemplateRTL_test.py in Docker container with architecture YAML mounted

#### Scenario: Capture test output
- **WHEN** VectorCGRA test execution completes
- **THEN** system captures pytest stdout, stderr, and exit code for result processing

#### Scenario: Handle container timeout
- **WHEN** VectorCGRA test execution exceeds timeout threshold (10 minutes)
- **THEN** system terminates the container and marks job as failed with timeout error

### Requirement: Verilog Output Storage
The system SHALL store generated Verilog files in Supabase Storage for later retrieval.

#### Scenario: Store successful output
- **WHEN** VectorCGRA test generates Verilog files successfully
- **THEN** system uploads Verilog files to Supabase Storage under job ID path

#### Scenario: Handle large Verilog files
- **WHEN** generated Verilog file exceeds 10MB
- **THEN** system compresses file before storage and records original size in job metadata

#### Scenario: Preserve output metadata
- **WHEN** storing Verilog output
- **THEN** system records file path, size, generation timestamp, and architecture hash in job result

### Requirement: Verilog Code Display
The system SHALL display generated Verilog code to users in a readable format.

#### Scenario: Display generated Verilog
- **WHEN** user views a completed Verilog generation job
- **THEN** system loads and displays the Verilog file content in a code viewer component

#### Scenario: Handle missing Verilog file
- **WHEN** Verilog file cannot be retrieved from storage
- **THEN** system displays error message indicating file unavailability

#### Scenario: Provide download option
- **WHEN** user views generated Verilog code
- **THEN** system provides a download button to save Verilog file locally

### Requirement: Error Message Display
The system SHALL provide meaningful error messages when Verilog generation fails.

#### Scenario: Display pytest errors
- **WHEN** VectorCGRA test fails with pytest errors
- **THEN** system parses stderr and displays user-friendly error summary with details

#### Scenario: Display architecture validation errors
- **WHEN** architecture YAML fails VectorCGRA validation
- **THEN** system displays specific validation errors indicating which architecture properties are invalid

#### Scenario: Display system errors
- **WHEN** system error occurs (e.g., Docker unavailable, storage failure)
- **THEN** system displays generic error message and logs technical details for debugging

### Requirement: Job History Access
The system SHALL allow users to view history of their Verilog generation jobs.

#### Scenario: List user's jobs
- **WHEN** user opens Verification tab
- **THEN** system displays list of recent Verilog generation jobs with status, timestamp, and architecture summary

#### Scenario: View past job results
- **WHEN** user selects a historical completed job
- **THEN** system loads and displays the Verilog output and job metadata

#### Scenario: Delete job results
- **WHEN** user deletes a historical job
- **THEN** system removes job record and associated Verilog files from storage
