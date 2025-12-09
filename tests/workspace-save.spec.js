import { test, expect } from './fixtures.js';

test.describe('Workspace save functionality', () => {
  test('shows saved indicator initially', async ({ workspacePage: page }) => {
    // Initially project should show as saved
    await expect(page.locator('text=Saved')).toBeVisible();
  });

  test('shows unsaved indicator after making changes', async ({ workspacePage: page }) => {
    // Make a change to the project - update CGRA rows
    const rowsInput = page.getByTestId('property-multiCgraRows');
    await expect(rowsInput).toBeVisible();
    await rowsInput.fill('3');

    // Wait for the change to be reflected
    const cgraNodes = page.locator('svg .layer-cgra-nodes g.cgra-node');
    await expect(cgraNodes).toHaveCount(12); // 3 rows x 4 columns = 12

    // Should show unsaved indicator
    await expect(page.locator('.MuiChip-label:has-text("To be saved")')).toBeVisible();
  });

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

    // Should show saved indicator after saving (use chip selector)
    await expect(page.locator('.MuiChip-label:has-text("Saved")')).toBeVisible();
  });

  test('shows project name in header', async ({ workspacePage: page }) => {
    // Check that the project name is visible in the header
    await expect(page.locator('text=E2E Test Project')).toBeVisible();
  });

  test('can navigate back to dashboard via menu', async ({ workspacePage: page }) => {
    // Open the menu
    await page.locator('[aria-label="open settings"]').click();

    // Click back to dashboard
    await page.getByText('Back to dashboard').click();

    // Should navigate to dashboard
    await expect(page).toHaveURL('/dashboard', { timeout: 5000 });
  });

  test('can navigate back to dashboard by clicking logo', async ({ workspacePage: page }) => {
    // Click on CGRA Flow logo
    await page.locator('text=CGRA Flow').click();

    // Should navigate to dashboard
    await expect(page).toHaveURL('/dashboard', { timeout: 5000 });
  });

  test('shows confirmation when leaving with unsaved changes', async ({ workspacePage: page }) => {
    // Get the initial CGRA count
    const cgraNodes = page.locator('svg .layer-cgra-nodes g.cgra-node');
    const initialCount = await cgraNodes.count();

    // Make a change that guarantees a different state
    const columnsInput = page.getByTestId('property-multiCgraColumns');
    await expect(columnsInput).toBeVisible();

    // Use a value different from what's likely saved
    const newColumns = initialCount > 10 ? '2' : '5';
    await columnsInput.fill(newColumns);

    // Wait for unsaved indicator to appear (the count will change, triggering unsaved state)
    await expect(page.locator('.MuiChip-label:has-text("To be saved")')).toBeVisible({ timeout: 5000 });

    // Try to navigate away by clicking logo (before auto-save triggers at 10s)
    await page.locator('text=CGRA Flow').click();

    // Should show confirmation dialog
    await expect(page.getByRole('heading', { name: 'Unsaved Changes' })).toBeVisible({ timeout: 5000 });

    // Click Stay to cancel
    await page.getByRole('button', { name: 'Stay' }).click();

    // Should still be on workspace
    await expect(page).toHaveURL(/\/workspace\//);
  });

  test('auto-saves after 10 seconds of inactivity', async ({ workspacePage: page }) => {
    // Get the initial CGRA count
    const cgraNodes = page.locator('svg .layer-cgra-nodes g.cgra-node');
    const initialCount = await cgraNodes.count();

    // Make a change that guarantees a different state
    const rowsInput = page.getByTestId('property-multiCgraRows');
    await expect(rowsInput).toBeVisible();

    // Use a value different from what's likely saved
    const newRows = initialCount > 10 ? '2' : '5';
    await rowsInput.fill(newRows);

    // Should show unsaved indicator
    await expect(page.locator('.MuiChip-label:has-text("To be saved")')).toBeVisible({ timeout: 5000 });

    // Wait for auto-save (10 seconds) - check that it eventually becomes "Saved"
    // The "Saving..." state may be too brief to catch reliably
    await expect(page.locator('.MuiChip-label:has-text("Saved")')).toBeVisible({ timeout: 15000 });
  });
});
