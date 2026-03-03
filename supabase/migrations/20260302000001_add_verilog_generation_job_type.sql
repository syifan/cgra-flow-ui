-- Add 'verilog-generation' to the job_type enum so the frontend can submit
-- verilog generation jobs through the standard job queue.
ALTER TYPE job_type ADD VALUE IF NOT EXISTS 'verilog-generation';
