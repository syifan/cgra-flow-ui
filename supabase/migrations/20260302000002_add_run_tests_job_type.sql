-- Add 'run_tests' to the job_type enum so the frontend can submit
-- VectorCGRA pytest test-suite jobs through the standard job queue.
ALTER TYPE job_type ADD VALUE IF NOT EXISTS 'run_tests';
