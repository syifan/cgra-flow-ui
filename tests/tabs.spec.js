import { test, expect } from '@playwright/test';

test.describe('Initial layout', () => {
  test('renders all expected tabs', async ({ page }) => {
    await page.goto('/');
    await page.waitForLoadState('networkidle');

    const expectedTabs = ['Canvas', 'Properties', 'GenAI', 'Mapping', 'Verification', 'Layout'];

    for (const tabLabel of expectedTabs) {
      const tab = page.getByText(tabLabel, { exact: true }).first();
      await expect(tab).toBeVisible();
    }
  });
});
