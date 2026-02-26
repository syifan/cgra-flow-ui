import os from 'os'

/**
 * Write a runner heartbeat row (best-effort).
 * Returns true if successful, false otherwise.
 */
export async function upsertRunnerHeartbeat(
  supabase,
  {
    runnerId,
    runnerMode,
    runnerProjectId = null,
    version = 'unknown'
  }
) {
  const { error } = await supabase.rpc('upsert_runner_heartbeat', {
    p_runner_id: runnerId,
    p_mode: runnerMode,
    p_project_id: runnerProjectId,
    p_host: os.hostname(),
    p_pid: process.pid,
    p_version: version
  })

  if (error) {
    return { ok: false, error }
  }
  return { ok: true }
}

/**
 * Mark runner as stopped in heartbeat table (best-effort).
 */
export async function markRunnerStopped(supabase, runnerId) {
  const { error } = await supabase.rpc('mark_runner_stopped', {
    p_runner_id: runnerId
  })
  if (error) {
    return { ok: false, error }
  }
  return { ok: true }
}
