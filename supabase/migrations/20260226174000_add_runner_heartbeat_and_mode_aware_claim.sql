-- Migration: Add runner heartbeat tracking and mode-aware claim filtering
-- Description:
--   1) Track active runners and their mode (real/fake) via heartbeat upserts
--   2) Add a mode-aware claim_next_job overload to prevent fake runners from
--      claiming production queue jobs unless explicitly allowed

CREATE TABLE IF NOT EXISTS runner_heartbeats (
  runner_id TEXT PRIMARY KEY,
  mode TEXT NOT NULL CHECK (mode IN ('real', 'fake')),
  project_id UUID REFERENCES projects(id) ON DELETE SET NULL,
  host TEXT,
  pid INTEGER,
  version TEXT,
  active BOOLEAN NOT NULL DEFAULT true,
  started_at TIMESTAMPTZ NOT NULL DEFAULT NOW(),
  last_seen TIMESTAMPTZ NOT NULL DEFAULT NOW(),
  updated_at TIMESTAMPTZ NOT NULL DEFAULT NOW()
);

CREATE INDEX IF NOT EXISTS idx_runner_heartbeats_mode ON runner_heartbeats(mode);
CREATE INDEX IF NOT EXISTS idx_runner_heartbeats_last_seen ON runner_heartbeats(last_seen DESC);
CREATE INDEX IF NOT EXISTS idx_runner_heartbeats_active ON runner_heartbeats(active);

ALTER TABLE runner_heartbeats ENABLE ROW LEVEL SECURITY;

-- No public access by default. Service role (used by runner) bypasses RLS.

CREATE OR REPLACE FUNCTION update_runner_heartbeats_updated_at()
RETURNS TRIGGER AS $$
BEGIN
  NEW.updated_at = NOW();
  RETURN NEW;
END;
$$ LANGUAGE plpgsql;

DROP TRIGGER IF EXISTS trigger_runner_heartbeats_updated_at ON runner_heartbeats;
CREATE TRIGGER trigger_runner_heartbeats_updated_at
  BEFORE UPDATE ON runner_heartbeats
  FOR EACH ROW
  EXECUTE FUNCTION update_runner_heartbeats_updated_at();

CREATE OR REPLACE FUNCTION upsert_runner_heartbeat(
  p_runner_id TEXT,
  p_mode TEXT,
  p_project_id UUID DEFAULT NULL,
  p_host TEXT DEFAULT NULL,
  p_pid INTEGER DEFAULT NULL,
  p_version TEXT DEFAULT NULL
)
RETURNS VOID
LANGUAGE plpgsql
SECURITY DEFINER
AS $$
BEGIN
  INSERT INTO runner_heartbeats (
    runner_id, mode, project_id, host, pid, version, active, started_at, last_seen, updated_at
  )
  VALUES (
    p_runner_id, p_mode, p_project_id, p_host, p_pid, p_version, true, NOW(), NOW(), NOW()
  )
  ON CONFLICT (runner_id) DO UPDATE SET
    mode = EXCLUDED.mode,
    project_id = EXCLUDED.project_id,
    host = EXCLUDED.host,
    pid = EXCLUDED.pid,
    version = EXCLUDED.version,
    active = true,
    last_seen = NOW(),
    updated_at = NOW();
END;
$$;

CREATE OR REPLACE FUNCTION mark_runner_stopped(p_runner_id TEXT)
RETURNS VOID
LANGUAGE plpgsql
SECURITY DEFINER
AS $$
BEGIN
  UPDATE runner_heartbeats
  SET active = false,
      last_seen = NOW(),
      updated_at = NOW()
  WHERE runner_id = p_runner_id;
END;
$$;

-- New overload: mode-aware claim with optional project scoping and explicit
-- fake-claim opt-in for test environments.
CREATE OR REPLACE FUNCTION claim_next_job(
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

COMMENT ON TABLE runner_heartbeats IS 'Runner process heartbeat and mode tracking for debugging and safety controls.';
COMMENT ON FUNCTION upsert_runner_heartbeat(TEXT, TEXT, UUID, TEXT, INTEGER, TEXT)
  IS 'Upsert or refresh a runner heartbeat row.';
COMMENT ON FUNCTION mark_runner_stopped(TEXT)
  IS 'Mark a runner as inactive during graceful shutdown.';
COMMENT ON FUNCTION claim_next_job(TEXT, TEXT, UUID, BOOLEAN)
  IS 'Mode-aware atomic job claim. Fake claims are blocked unless explicitly allowed.';
