-- Migration: Fix claim_next_job overload ambiguity for PostgREST RPC calls
-- Description:
--   1) Remove overloaded claim_next_job(TEXT, TEXT, UUID, BOOLEAN) which
--      conflicts with the existing claim_next_job(TEXT) under PostgREST.
--   2) Re-introduce the mode-aware logic under a unique RPC name:
--      claim_next_job_v2(...)

DROP FUNCTION IF EXISTS claim_next_job(TEXT, TEXT, UUID, BOOLEAN);

CREATE OR REPLACE FUNCTION claim_next_job_v2(
  p_runner_id TEXT,
  p_runner_mode TEXT DEFAULT 'real',
  p_target_project_id UUID DEFAULT NULL,
  p_allow_fake_claim BOOLEAN DEFAULT false
)
RETURNS SETOF jobs
LANGUAGE plpgsql
SECURITY DEFINER
AS $$
DECLARE
  claimed_job jobs%ROWTYPE;
BEGIN
  SELECT * INTO claimed_job
  FROM jobs
  WHERE status = 'queued'
    AND (p_target_project_id IS NULL OR project_id = p_target_project_id)
    AND (
      p_runner_mode = 'real'
      OR p_allow_fake_claim = true
    )
  ORDER BY created_at ASC
  LIMIT 1
  FOR UPDATE SKIP LOCKED;

  IF NOT FOUND THEN
    RETURN;
  END IF;

  UPDATE jobs
  SET
    status = 'running',
    started_at = NOW(),
    updated_at = NOW(),
    info = info
      || jsonb_build_object('runner_id', p_runner_id)
      || jsonb_build_object('runner_mode', p_runner_mode)
  WHERE id = claimed_job.id;

  RETURN QUERY
  SELECT * FROM jobs WHERE id = claimed_job.id;
END;
$$;

COMMENT ON FUNCTION claim_next_job_v2(TEXT, TEXT, UUID, BOOLEAN)
  IS 'Mode-aware atomic job claim. Fake claims are blocked unless explicitly allowed.';
