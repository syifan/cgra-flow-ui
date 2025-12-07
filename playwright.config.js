import { defineConfig, devices } from '@playwright/test';

const AUTH_FILE = './tests/.auth/user.json';

export default defineConfig({
  testDir: './tests',
  fullyParallel: true,
  forbidOnly: !!process.env.CI,
  retries: process.env.CI ? 2 : 0,
  workers: process.env.CI ? 1 : undefined,
  reporter: [['list'], ['html', { open: 'never' }]],
  use: {
    baseURL: 'http://127.0.0.1:5173',
    trace: 'on-first-retry',
  },
  projects: [
    // Setup project - runs first to authenticate
    {
      name: 'setup',
      testMatch: /auth\.setup\.js/,
      use: { ...devices['Desktop Chrome'] },
    },
    // Main tests - depend on setup and use authenticated state
    {
      name: 'chromium',
      use: {
        ...devices['Desktop Chrome'],
        storageState: AUTH_FILE,
      },
      dependencies: ['setup'],
      testIgnore: /auth\.setup\.js/,
    },
  ],
  webServer: {
    command: 'npm run dev -- --host 127.0.0.1 --port 5173 --strictPort',
    url: 'http://127.0.0.1:5173',
    reuseExistingServer: !process.env.CI,
    stdout: 'pipe',
    stderr: 'pipe',
    timeout: 120 * 1000,
  },
});
