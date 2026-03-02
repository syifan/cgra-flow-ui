/**
 * Verification Service
 * Handles SVerilog generation job submission and realtime status subscription.
 * The runner fetches architecture from the project directly, so only project_id
 * is required in the job payload.
 */

import { supabase } from '../../lib/supabase';

/**
 * Submit a verilog-generation job for the given project.
 *
 * @param {string} projectId - The project ID
 * @returns {Promise<string>} The new job's ID
 */
export async function submitVerilogGenerationJob(projectId) {
  const {
    data: { user }
  } = await supabase.auth.getUser();

  const { data: newJob, error } = await supabase
    .from('jobs')
    .insert({
      project_id: projectId,
      user_id: user?.id,
      type: 'verilog-generation',
      status: 'queued',
      info: {}
    })
    .select()
    .single();

  if (error) {
    throw new Error(`Failed to submit verilog-generation job: ${error.message}`);
  }

  return newJob.id;
}

/**
 * Subscribe to job row updates for a specific job.
 *
 * @param {string} jobId - The job ID to watch
 * @param {function} onUpdate - Called with { status, result, error } on each update
 * @returns {function} unsubscribe function
 */
export function subscribeToJob(jobId, onUpdate) {
  const channel = supabase
    .channel(`job-${jobId}`)
    .on(
      'postgres_changes',
      {
        event: 'UPDATE',
        schema: 'public',
        table: 'jobs',
        filter: `id=eq.${jobId}`
      },
      (payload) => {
        const { status, info, error_message } = payload.new;
        onUpdate({ status, result: info, error: error_message });
      }
    )
    .subscribe();

  return () => {
    channel.unsubscribe();
  };
}
