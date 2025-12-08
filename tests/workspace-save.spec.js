import { test, expect } from './fixtures.js';

test.describe('Workspace save functionality', () => {
  test('can save project changes to Supabase', async ({ workspacePage: page }) => {
    // Make a change to the project - update CGRA rows
    const rowsInput = page.getByTestId('property-multiCgraRows');
    await expect(rowsInput).toBeVisible();
    await rowsInput.fill('3');

    // Wait for the change to be reflected
    const cgraNodes = page.locator('svg .layer-cgra-nodes g.cgra-node');
    await expect(cgraNodes).toHaveCount(12); // 3 rows x 4 columns = 12

    // Open the menu and save
    await page.locator('[aria-label="open settings"]').click();
    await page.getByText('Save project').click();

    // Wait for success notification
    await expect(page.locator('text=Project saved successfully')).toBeVisible({ timeout: 5000 });
  });

  test('shows project name in header', async ({ workspacePage: page }) => {
    // Check that the project name is visible in the header
    await expect(page.locator('text=E2E Test Project')).toBeVisible();
  });

  test('can navigate back to dashboard', async ({ workspacePage: page }) => {
    // Open the menu
    await page.locator('[aria-label="open settings"]').click();

    // Click back to dashboard
    await page.getByText('Back to dashboard').click();

    // Should navigate to dashboard
    await expect(page).toHaveURL('/dashboard', { timeout: 5000 });
  });

  test('export menu option is available', async ({ workspacePage: page }) => {
    // Open the menu
    await page.locator('[aria-label="open settings"]').click();

    // Check export option is visible
    await expect(page.getByText('Export to file')).toBeVisible();
  });

  test('import menu option is available', async ({ workspacePage: page }) => {
    // Open the menu
    await page.locator('[aria-label="open settings"]').click();

    // Check import option is visible
    await expect(page.getByText('Import from file')).toBeVisible();
  });
});
