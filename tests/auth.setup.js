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

setup('authenticate and create project', async ({ page }) => {
  // Increase timeout for this setup test
  setup.setTimeout(120000);

  // Ensure the .auth directory exists
  const authDir = path.dirname(AUTH_FILE);
  if (!fs.existsSync(authDir)) {
    fs.mkdirSync(authDir, { recursive: true });
  }

  // First, try to sign up (in case user doesn't exist)
  await page.goto('/signup');
  await page.waitForLoadState('networkidle');

  // Wait for the form to be visible
  await expect(page.getByRole('heading', { name: 'CGRA FLOW' })).toBeVisible({ timeout: 10000 });

  // Get form inputs by their role and accessible name
  const fullNameInput = page.getByRole('textbox', { name: /full name/i });
  const emailInput = page.getByRole('textbox', { name: /^email$/i });
  const passwordInputs = page.locator('input[type="password"]');

  await fullNameInput.fill(TEST_USER.fullName);
  await emailInput.fill(TEST_USER.email);
  await passwordInputs.first().fill(TEST_USER.password);
  await passwordInputs.last().fill(TEST_USER.password);
  await page.getByRole('button', { name: 'Create Account' }).click();

  // Wait for either navigation to dashboard or an error/success message
  await Promise.race([
    page.waitForURL('**/dashboard', { timeout: 10000 }).catch(() => {}),
    page.locator('[role="alert"]').waitFor({ state: 'visible', timeout: 10000 }).catch(() => {})
  ]);

  // Check for any error messages
  const errorAlert = page.locator('[role="alert"]').filter({ hasText: /error/i });
  const hasError = await errorAlert.isVisible().catch(() => false);
  if (hasError) {
    const errorText = await errorAlert.textContent();
    console.error('Signup error:', errorText);
  }

  // Check if we're on the dashboard (signup succeeded) or still on signup (user exists)
  let currentUrl = page.url();

  if (!currentUrl.includes('/dashboard')) {
    // User might already exist, try to login instead
    console.log('Signup may have failed (user exists?), trying login...');
    await page.goto('/login');
    await page.waitForLoadState('networkidle');

    // Wait for the login form
    await expect(page.getByRole('heading', { name: 'CGRA FLOW' })).toBeVisible({ timeout: 10000 });

    const loginEmail = page.getByRole('textbox', { name: /email/i });
    const loginPassword = page.locator('input[type="password"]');

    await loginEmail.fill(TEST_USER.email);
    await loginPassword.fill(TEST_USER.password);
    await page.getByRole('button', { name: 'Sign In' }).click();

    // Wait for either navigation to dashboard or an error message
    await Promise.race([
      page.waitForURL('**/dashboard', { timeout: 10000 }).catch(() => {}),
      page.locator('[role="alert"]').waitFor({ state: 'visible', timeout: 10000 }).catch(() => {})
    ]);

    // Check for error message
    const loginError = page.locator('[role="alert"]');
    const hasLoginError = await loginError.isVisible().catch(() => false);
    if (hasLoginError) {
      const loginErrorText = await loginError.textContent();
      console.error('Login error:', loginErrorText);

      // If login failed with "Invalid login credentials", we need to create the user
      // This might happen if the database was reset
      if (loginErrorText?.includes('Invalid')) {
        console.log('User does not exist, creating via signup...');
        await page.goto('/signup');
        await page.waitForLoadState('networkidle');

        const signupNameInput = page.getByRole('textbox', { name: /full name/i });
        const signupEmailInput = page.getByRole('textbox', { name: /^email$/i });
        const signupPasswordInputs = page.locator('input[type="password"]');

        await signupNameInput.fill(TEST_USER.fullName);
        await signupEmailInput.fill(TEST_USER.email);
        await signupPasswordInputs.first().fill(TEST_USER.password);
        await signupPasswordInputs.last().fill(TEST_USER.password);
        await page.getByRole('button', { name: 'Create Account' }).click();

        // Wait for either navigation to dashboard or an error message
        await Promise.race([
          page.waitForURL('**/dashboard', { timeout: 10000 }).catch(() => {}),
          page.locator('[role="alert"]').waitFor({ state: 'visible', timeout: 10000 }).catch(() => {})
        ]);
      }
    }

    // Check current URL
    currentUrl = page.url();
    if (!currentUrl.includes('/dashboard')) {
      // Take a screenshot for debugging
      await page.screenshot({ path: 'tests/.auth/debug-screenshot.png' });
      throw new Error(`Failed to authenticate. Current URL: ${currentUrl}`);
    }
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
