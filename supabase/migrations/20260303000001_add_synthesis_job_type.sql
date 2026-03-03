-- Add 'synthesis' to the job_type enum so the frontend can submit
-- Area/Power synthesis jobs through the standard job queue.
ALTER TYPE job_type ADD VALUE IF NOT EXISTS 'synthesis';
