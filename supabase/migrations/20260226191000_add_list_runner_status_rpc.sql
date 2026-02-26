-- Migration: Expose read-only runner status to authenticated users
-- Description:
--   Provide a safe, read-only view of runner availability without exposing
--   sensitive host/process metadata from runner_heartbeats.

CREATE OR REPLACE FUNCTION list_runner_status()
RETURNS TABLE (
  runner_id TEXT,
  mode TEXT,
  scope TEXT,
  active BOOLEAN,
  last_seen TIMESTAMPTZ,
  age_seconds INTEGER,
  status TEXT,
  claimable BOOLEAN
)
LANGUAGE sql
SECURITY DEFINER
SET search_path = public
STABLE
AS $$
  SELECT
    rh.runner_id,
    rh.mode,
    COALESCE(rh.project_id::text, 'global') AS scope,
    rh.active,
    rh.last_seen,
    GREATEST(0, FLOOR(EXTRACT(EPOCH FROM (NOW() - rh.last_seen)))::INTEGER) AS age_seconds,
    CASE
      WHEN rh.active = true AND rh.last_seen >= NOW() - INTERVAL '30 seconds' THEN 'online'
      WHEN rh.active = true AND rh.last_seen >= NOW() - INTERVAL '2 minutes' THEN 'stale'
      ELSE 'offline'
    END AS status,
    (
      rh.mode = 'real'
      AND rh.active = true
      AND rh.last_seen >= NOW() - INTERVAL '2 minutes'
    ) AS claimable
  FROM runner_heartbeats rh
  WHERE rh.last_seen >= NOW() - INTERVAL '24 hours'
  ORDER BY
    CASE
      WHEN rh.active = true AND rh.last_seen >= NOW() - INTERVAL '30 seconds' THEN 0
      WHEN rh.active = true AND rh.last_seen >= NOW() - INTERVAL '2 minutes' THEN 1
      ELSE 2
    END,
    rh.last_seen DESC;
$$;

REVOKE ALL ON FUNCTION list_runner_status() FROM PUBLIC;
GRANT EXECUTE ON FUNCTION list_runner_status() TO authenticated;
GRANT EXECUTE ON FUNCTION list_runner_status() TO service_role;

COMMENT ON FUNCTION list_runner_status() IS
  'Read-only runner availability/status for UI consumption by authenticated users.';
