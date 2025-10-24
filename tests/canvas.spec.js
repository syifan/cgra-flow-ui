import { test, expect } from '@playwright/test';

test.describe('Canvas rendering', () => {
  test('shows CGRAs and PEs on initial load', async ({ page }) => {
    await page.goto('/');
    await page.waitForLoadState('networkidle');

    const cgraLayer = page.locator('svg .layer-cgra-nodes');
    await expect(cgraLayer).toBeVisible();
    await expect(cgraLayer.locator('g.cgra-node').first()).toBeVisible();

    const peLayer = page.locator('svg .layer-pe-nodes');
    await expect(peLayer).toBeVisible();
    await expect(peLayer.locator('g.pe-node').first()).toBeVisible();

    const cgraConnectionsLayer = page.locator('svg .layer-cgra-connections');
    await expect(cgraConnectionsLayer).toBeVisible();
    const cgraConnectionLocator = cgraConnectionsLayer.locator('line.cgra-connection');
    const cgraConnectionCount = await cgraConnectionLocator.count();
    expect(cgraConnectionCount).toBeGreaterThan(0);
    let cgraHasVisible = false;
    for (let index = 0; index < cgraConnectionCount; index += 1) {
      const connection = cgraConnectionLocator.nth(index);
      const handle = await connection.elementHandle();
      const box = await handle?.boundingBox();
      if (box && (box.width > 0 || box.height > 0)) {
        cgraHasVisible = true;
        break;
      }
    }
    expect(cgraHasVisible).toBeTruthy();

    const peConnectionsLayer = page.locator('svg .layer-pe-connections');
    await expect(peConnectionsLayer).toBeVisible();
    const peConnectionLocator = peConnectionsLayer.locator('line.pe-connection');
    const peConnectionCount = await peConnectionLocator.count();
    expect(peConnectionCount).toBeGreaterThan(0);
    let peHasVisible = false;
    for (let index = 0; index < peConnectionCount; index += 1) {
      const connection = peConnectionLocator.nth(index);
      const handle = await connection.elementHandle();
      const box = await handle?.boundingBox();
      if (box && (box.width > 0 || box.height > 0)) {
        peHasVisible = true;
        break;
      }
    }
    expect(peHasVisible).toBeTruthy();
  });

  test('allows toggling individual layers on and off', async ({ page }) => {
    await page.goto('/');
    await page.waitForLoadState('networkidle');

    await page.getByTestId('ExpandMoreIcon').click();
    await page.getByRole('button', { name: 'Auto' }).click();

    const layers = [
      { label: 'CGRA Links', locator: page.locator('svg .layer-cgra-connections') },
      { label: 'CGRAs', locator: page.locator('svg .layer-cgra-nodes') },
      { label: 'PE Links', locator: page.locator('svg .layer-pe-connections') },
      { label: 'PEs', locator: page.locator('svg .layer-pe-nodes') }
    ];

    for (const { label, locator } of layers) {
      await expect(locator).toBeVisible();
      await page.getByRole('button', { name: label }).click();
      await expect(locator).toBeHidden();
      await page.getByRole('button', { name: label }).click();
      await expect(locator).toBeVisible();
    }
  });
});
