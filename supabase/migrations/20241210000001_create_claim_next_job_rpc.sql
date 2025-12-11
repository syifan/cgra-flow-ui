-- Migration: Create claim_next_job RPC function
-- Description: Atomic job claiming using FOR UPDATE SKIP LOCKED to prevent race conditions

-- Create the claim_next_job function
-- This function atomically claims the next available job for a runner
-- Uses FOR UPDATE SKIP LOCKED to ensure only one runner can claim a job
CREATE OR REPLACE FUNCTION claim_next_job(p_runner_id TEXT)
RETURNS SETOF jobs
LANGUAGE plpgsql
SECURITY DEFINER
AS $$
DECLARE
  claimed_job jobs%ROWTYPE;
BEGIN
  -- Select and lock the oldest queued job, skipping any locked rows
  -- This ensures concurrent runners don't block each other
  SELECT * INTO claimed_job
  FROM jobs
  WHERE status = 'queued'
  ORDER BY created_at ASC
  LIMIT 1
  FOR UPDATE SKIP LOCKED;

  -- If no job found, return empty result
  IF NOT FOUND THEN
    RETURN;
  END IF;

  -- Update the job to 'running' status and set runner info
  UPDATE jobs
  SET
    status = 'running',
    started_at = NOW(),
    updated_at = NOW(),
    info = info || jsonb_build_object('runner_id', p_runner_id)
  WHERE id = claimed_job.id;

  -- Return the updated job
  RETURN QUERY
  SELECT * FROM jobs WHERE id = claimed_job.id;
END;
$$;

-- Add comment to function
COMMENT ON FUNCTION claim_next_job(TEXT) IS 'Atomically claim the next available job for a runner using FOR UPDATE SKIP LOCKED';
