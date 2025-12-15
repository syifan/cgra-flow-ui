import { test, expect } from './fixtures.js';

test.describe('Canvas rendering', () => {
  test('shows CGRAs and PEs on initial load', async ({ workspacePage: page }) => {
    // workspacePage fixture already navigates to the workspace

    const cgraLayer = page.locator('svg .layer-cgra-nodes');
    await expect(cgraLayer).toBeVisible();
    await expect(cgraLayer.locator('g.cgra-node')).toHaveCount(1);

    const peLayer = page.locator('svg .layer-pe-nodes');
    await expect(peLayer).toBeVisible();
    const peNodes = peLayer.locator('g.pe-node');
    await expect(peNodes).toHaveCount(16);

    const cgraConnectionsLayer = page.locator('svg .layer-cgra-connections');
    await expect(cgraConnectionsLayer).toBeVisible();
    const cgraConnectionLocator = cgraConnectionsLayer.locator('line.cgra-connection');
    const cgraConnectionCount = await cgraConnectionLocator.count();
    expect(cgraConnectionCount).toBe(0);

    const peConnectionsLayer = page.locator('svg .layer-pe-connections');
    await expect(peConnectionsLayer).toBeVisible();
    const peConnectionLocator = peConnectionsLayer.locator('line.pe-connection');
    const peConnectionCount = await peConnectionLocator.count();
    expect(peConnectionCount).toBe(48);
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

  test('allows toggling individual layers on and off', async ({ workspacePage: page }) => {
    // workspacePage fixture already navigates to the workspace

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

  test('resizes CGRA grid when rows or columns change', async ({ workspacePage: page }) => {
    // workspacePage fixture already navigates to the workspace

    const cgraNodes = page.locator('svg .layer-cgra-nodes g.cgra-node');
    await expect(cgraNodes).toHaveCount(1);

    const rowsInput = page.getByTestId('property-multiCgraRows');
    const columnsInput = page.getByTestId('property-multiCgraColumns');

    await expect(rowsInput).toBeVisible();
    await expect(columnsInput).toBeVisible();

    await rowsInput.fill('2');
    await expect(cgraNodes).toHaveCount(2);

    await columnsInput.fill('3');
    await expect(cgraNodes).toHaveCount(6);

    await rowsInput.fill('4');
    await expect(cgraNodes).toHaveCount(12);

    await columnsInput.fill('2');
    await expect(cgraNodes).toHaveCount(8);
  });

  test('positions CGRAs using a bottom-left origin', async ({ workspacePage: page }) => {
    // workspacePage fixture already navigates to the workspace

    const rowsInput = page.getByTestId('property-multiCgraRows');
    const columnsInput = page.getByTestId('property-multiCgraColumns');

    await rowsInput.fill('2');
    await columnsInput.fill('3');

    const cgraNodes = page.locator('svg .layer-cgra-nodes g.cgra-node');
    await expect(cgraNodes).toHaveCount(6);

    const nodeCount = await cgraNodes.count();
    const nodes = [];
    for (let index = 0; index < nodeCount; index += 1) {
      const locator = cgraNodes.nth(index);
      const textContent = await locator.locator('text.cgra-label').textContent();
      expect(textContent, 'expected label text content').not.toBeNull();
      const labelText = (textContent ?? '').trim();
      const box = await locator.boundingBox();
      expect(box, `expected bounding box for ${labelText}`).not.toBeNull();
      if (!box) continue;
      nodes.push({
        label: labelText,
        cx: box.x + box.width / 2,
        cy: box.y + box.height / 2
      });
    }

    expect(nodes).toHaveLength(6);

    const tolerance = 5;
    const rowCenters = [];
    for (const node of [...nodes].sort((a, b) => b.cy - a.cy)) {
      if (!rowCenters.some((cy) => Math.abs(cy - node.cy) <= tolerance)) {
        rowCenters.push(node.cy);
      }
    }

    expect(rowCenters).toHaveLength(2);

    const nodesInRow = (targetCy) =>
      nodes.filter((node) => Math.abs(node.cy - targetCy) <= tolerance);
    const sortByCx = (list) => [...list].sort((a, b) => a.cx - b.cx);

    const bottomRowNodes = nodesInRow(rowCenters[0]);
    const bottomRowSorted = sortByCx(bottomRowNodes);
    expect(bottomRowSorted).toHaveLength(3);

    const secondRowNodes = nodesInRow(rowCenters[1]);
    const secondRowSorted = sortByCx(secondRowNodes);
    expect(secondRowSorted).toHaveLength(3);
    const secondRowLeft = secondRowSorted[0];

    const topRowNodes = nodesInRow(rowCenters[rowCenters.length - 1]);
    const topRowSorted = sortByCx(topRowNodes);
    expect(topRowSorted).toHaveLength(3);

    expect(bottomRowSorted[0].label).toBe('CGRA (0, 0)');
    expect(bottomRowSorted[1].label).toBe('CGRA (1, 0)');
    expect(topRowSorted[topRowSorted.length - 1].label).toBe('CGRA (2, 1)');
    expect(secondRowLeft.label).toBe('CGRA (0, 1)');
  });
});
