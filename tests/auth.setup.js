import { test as setup, expect } from '@playwright/test';
import path from 'path';
import fs from 'fs';

const AUTH_FILE = path.join(import.meta.dirname, '.auth', 'user.json');
const PROJECT_FILE = path.join(import.meta.dirname, '.auth', 'project.json');

// Test user credentials - these should match a user in your local Supabase
// Password must meet complexity requirements: 12+ chars, uppercase, lowercase, number, special char
const TEST_USER = {
  email: 'test@example.com',
  password: 'TestPassword123!',
  fullName: 'Test User'
};

// Helper function to wait for auth result (navigation or error)
async function waitForAuthResult(page) {
  await Promise.race([
    page.waitForURL('**/dashboard', { timeout: 10000 }).catch(() => {}),
    page.locator('[role="alert"]').waitFor({ state: 'visible', timeout: 10000 }).catch(() => {})
  ]);
}

// Helper function to check for error alerts
async function getErrorMessage(page) {
  const errorAlert = page.locator('[role="alert"]');
  const hasError = await errorAlert.isVisible().catch(() => false);
  if (hasError) {
    return await errorAlert.textContent();
  }
  return null;
}

// Helper function to attempt signup
async function attemptSignup(page) {
  await page.goto('/signup');
  await page.waitForLoadState('networkidle');
  await expect(page.getByRole('heading', { name: 'CGRA FLOW' })).toBeVisible({ timeout: 10000 });

  const fullNameInput = page.getByRole('textbox', { name: /full name/i });
  const emailInput = page.getByRole('textbox', { name: /^email$/i });
  const passwordInputs = page.locator('input[type="password"]');

  await fullNameInput.fill(TEST_USER.fullName);
  await emailInput.fill(TEST_USER.email);
  await passwordInputs.first().fill(TEST_USER.password);
  await passwordInputs.last().fill(TEST_USER.password);
  await page.getByRole('button', { name: 'Create Account' }).click();

  await waitForAuthResult(page);
  return page.url().includes('/dashboard');
}

// Helper function to attempt login
async function attemptLogin(page) {
  await page.goto('/login');
  await page.waitForLoadState('networkidle');
  await expect(page.getByRole('heading', { name: 'CGRA FLOW' })).toBeVisible({ timeout: 10000 });

  const emailInput = page.getByRole('textbox', { name: /email/i });
  const passwordInput = page.locator('input[type="password"]');

  await emailInput.fill(TEST_USER.email);
  await passwordInput.fill(TEST_USER.password);
  await page.getByRole('button', { name: 'Sign In' }).click();

  await waitForAuthResult(page);
  return page.url().includes('/dashboard');
}

setup('authenticate and create project', async ({ page }) => {
  // Increase timeout for this setup test
  setup.setTimeout(120000);

  // Ensure the .auth directory exists
  const authDir = path.dirname(AUTH_FILE);
  if (!fs.existsSync(authDir)) {
    fs.mkdirSync(authDir, { recursive: true });
  }

  // Try signup first (in case user doesn't exist)
  let authenticated = await attemptSignup(page);

  if (!authenticated) {
    const signupError = await getErrorMessage(page);
    if (signupError) {
      console.error('Signup error:', signupError);
    }

    // User might already exist, try login
    console.log('Signup may have failed (user exists?), trying login...');
    authenticated = await attemptLogin(page);

    if (!authenticated) {
      const loginError = await getErrorMessage(page);
      if (loginError) {
        console.error('Login error:', loginError);

        // If login failed with invalid credentials, try signup again (database may have been reset)
        if (loginError.includes('Invalid')) {
          console.log('User does not exist, creating via signup...');
          authenticated = await attemptSignup(page);
        }
      }
    }
  }

  if (!authenticated) {
    await page.screenshot({ path: 'tests/.auth/debug-screenshot.png' });
    throw new Error(`Failed to authenticate. Current URL: ${page.url()}`);
  }

  console.log('Successfully authenticated!');
  await page.waitForLoadState('networkidle');

  // Now we should be on the dashboard
  await expect(page).toHaveURL('/dashboard');

  // Wait for loading to complete
  await page.waitForSelector('text=My Projects', { timeout: 10000 });

  // Check if we already have a test project
  const existingProject = page.locator('text=E2E Test Project').first();
  const hasExistingProject = await existingProject.isVisible({ timeout: 3000 }).catch(() => false);

  let projectId;

  if (hasExistingProject) {
    // Click on existing project to get its ID from the URL
    await existingProject.click();
    await expect(page).toHaveURL(/\/workspace\//, { timeout: 10000 });
    const url = page.url();
    projectId = url.split('/workspace/')[1];
    console.log('Using existing project:', projectId);
  } else {
    // Create a new test project
    console.log('Creating new test project...');
    await page.getByRole('button', { name: 'New Project' }).click();
    await page.waitForSelector('[role="dialog"]');

    // Fill in project details
    const projectNameInput = page.getByRole('textbox', { name: /project name/i });
    const descriptionInput = page.getByRole('textbox', { name: /description/i });

    await projectNameInput.fill('E2E Test Project');
    await descriptionInput.fill('Project for end-to-end testing');
    await page.getByRole('button', { name: 'Create' }).click();

    // Wait for dialog to close and project to appear
    await expect(page.locator('[role="dialog"]')).toBeHidden({ timeout: 5000 });
    await expect(page.locator('text=E2E Test Project').first()).toBeVisible();

    // Open the newly created project
    await page.locator('text=E2E Test Project').first().click();
    await expect(page).toHaveURL(/\/workspace\//, { timeout: 10000 });
    const url = page.url();
    projectId = url.split('/workspace/')[1];
    console.log('Created new project:', projectId);
  }

  // Save the project ID for other tests
  fs.writeFileSync(PROJECT_FILE, JSON.stringify({ projectId }));

  // Save the authenticated state
  await page.context().storageState({ path: AUTH_FILE });
});
