-- Migration: Add heartbeat support and lease-based stale job recovery
-- Description:
--   1) Track per-job runner heartbeat
--   2) Requeue stale running jobs in claim_next_job before claiming a new job

-- Track runner heartbeat for in-progress jobs
ALTER TABLE jobs
ADD COLUMN IF NOT EXISTS heartbeat_at TIMESTAMPTZ;

-- Improve stale-running lookup performance
CREATE INDEX IF NOT EXISTS idx_jobs_status_heartbeat_at ON jobs(status, heartbeat_at);
CREATE INDEX IF NOT EXISTS idx_jobs_status_started_at ON jobs(status, started_at);

-- Replace old one-arg function with lease-aware variant (second arg has default)
DROP FUNCTION IF EXISTS claim_next_job(TEXT);

CREATE OR REPLACE FUNCTION claim_next_job(
  p_runner_id TEXT,
  p_lease_timeout_seconds INTEGER DEFAULT 300
)
RETURNS SETOF jobs
LANGUAGE plpgsql
SECURITY DEFINER
AS $$
DECLARE
  claimed_job jobs%ROWTYPE;
  lease_interval INTERVAL;
BEGIN
  -- Defensive lower bound to avoid accidental aggressive reclaim.
  lease_interval := make_interval(secs => GREATEST(COALESCE(p_lease_timeout_seconds, 300), 30));

  -- Requeue stale running jobs so they can be picked up again.
  -- A job is stale if:
  --   - heartbeat exists but is too old, or
  --   - no heartbeat was ever recorded and started_at is too old.
  UPDATE jobs
  SET
    status = 'queued',
    started_at = NULL,
    heartbeat_at = NULL,
    updated_at = NOW(),
    info = COALESCE(info, '{}'::jsonb) || jsonb_build_object(
      'requeued_reason', 'lease_timeout',
      'requeued_at', NOW()
    )
  WHERE status = 'running'
    AND started_at IS NOT NULL
    AND (
      (heartbeat_at IS NOT NULL AND heartbeat_at < NOW() - lease_interval)
      OR
      (heartbeat_at IS NULL AND started_at < NOW() - lease_interval)
    );

  -- Select and lock the oldest queued job, skipping any locked rows.
  SELECT * INTO claimed_job
  FROM jobs
  WHERE status = 'queued'
  ORDER BY created_at ASC
  LIMIT 1
  FOR UPDATE SKIP LOCKED;

  IF NOT FOUND THEN
    RETURN;
  END IF;

  -- Mark as running and set initial heartbeat.
  UPDATE jobs
  SET
    status = 'running',
    started_at = NOW(),
    heartbeat_at = NOW(),
    updated_at = NOW(),
    info = COALESCE(info, '{}'::jsonb) || jsonb_build_object('runner_id', p_runner_id)
  WHERE id = claimed_job.id;

  RETURN QUERY
  SELECT * FROM jobs WHERE id = claimed_job.id;
END;
$$;

COMMENT ON FUNCTION claim_next_job(TEXT, INTEGER)
IS 'Atomically claim the next queued job and requeue stale running jobs using a lease timeout';
