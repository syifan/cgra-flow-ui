-- Migration: Create jobs table
-- Description: Job queue for mapping, verification, and layout tasks

-- Create enum for job types
CREATE TYPE job_type AS ENUM ('mapping', 'verification', 'layout');

-- Create enum for job status
CREATE TYPE job_status AS ENUM ('queued', 'running', 'success', 'failed', 'cancelled');

-- Create jobs table
CREATE TABLE IF NOT EXISTS jobs (
  id UUID DEFAULT gen_random_uuid() PRIMARY KEY,
  project_id UUID REFERENCES projects(id) ON DELETE CASCADE NOT NULL,
  user_id UUID REFERENCES auth.users(id) ON DELETE CASCADE NOT NULL,
  type job_type NOT NULL,
  status job_status DEFAULT 'queued' NOT NULL,
  info JSONB DEFAULT '{}'::jsonb,
  error_message TEXT,
  created_at TIMESTAMPTZ DEFAULT NOW(),
  updated_at TIMESTAMPTZ DEFAULT NOW(),
  started_at TIMESTAMPTZ,
  completed_at TIMESTAMPTZ
);

-- Create indexes for faster lookups
CREATE INDEX IF NOT EXISTS idx_jobs_project_id ON jobs(project_id);
CREATE INDEX IF NOT EXISTS idx_jobs_user_id ON jobs(user_id);
CREATE INDEX IF NOT EXISTS idx_jobs_status ON jobs(status);
CREATE INDEX IF NOT EXISTS idx_jobs_created_at ON jobs(created_at DESC);

-- Enable Row Level Security
ALTER TABLE jobs ENABLE ROW LEVEL SECURITY;

-- Policy: Users can only see their own jobs
CREATE POLICY "Users can view own jobs"
  ON jobs FOR SELECT
  USING (auth.uid() IS NOT NULL AND auth.uid() = user_id);

-- Policy: Users can insert their own jobs
CREATE POLICY "Users can create jobs"
  ON jobs FOR INSERT
  WITH CHECK (auth.uid() IS NOT NULL AND auth.uid() = user_id);

-- Policy: Users can update their own jobs
CREATE POLICY "Users can update own jobs"
  ON jobs FOR UPDATE
  USING (auth.uid() IS NOT NULL AND auth.uid() = user_id)
  WITH CHECK (auth.uid() IS NOT NULL AND auth.uid() = user_id);

-- Policy: Users can delete their own jobs
CREATE POLICY "Users can delete own jobs"
  ON jobs FOR DELETE
  USING (auth.uid() IS NOT NULL AND auth.uid() = user_id);

-- Trigger to auto-update updated_at on row update
CREATE TRIGGER trigger_jobs_updated_at
  BEFORE UPDATE ON jobs
  FOR EACH ROW
  EXECUTE FUNCTION update_updated_at_column();

-- Add comment to table
COMMENT ON TABLE jobs IS 'Job queue for CGRA mapping, verification, and layout tasks';
COMMENT ON COLUMN jobs.info IS 'Job-specific information (e.g., {"benchmarks": ["fir", "mm"]} for mapping jobs)';

-- Enable Realtime for the jobs table
ALTER PUBLICATION supabase_realtime ADD TABLE jobs;
