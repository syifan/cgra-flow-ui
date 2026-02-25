## 1. Create AIAssistantPanel Component

- [x] 1.1 Create `src/workspace/AIAssistantPanel.jsx` with chat UI layout (message area + input field)
- [x] 1.2 Add placeholder text for empty state
- [x] 1.3 Add input field with placeholder text
- [x] 1.4 Add send button next to input
- [x] 1.5 Style component to match dark theme

## 2. Create SidePanel Component

- [x] 2.1 Create `src/workspace/SidePanel.jsx` with MUI Tabs
- [x] 2.2 Implement "Manual" and "AI Assistant" tabs
- [x] 2.3 Add state management for active tab (default: "Manual")
- [x] 2.4 Render PropertyInspector in "Manual" tab
- [x] 2.5 Render AIAssistantPanel in "AI Assistant" tab
- [x] 2.6 Pass through all props from DesignTab to PropertyInspector

## 3. Update DesignTab

- [x] 3.1 Import SidePanel component
- [x] 3.2 Replace direct PropertyInspector usage with SidePanel
- [x] 3.3 Pass architecture, selection, onPropertyChange, disabled props to SidePanel

## 4. Update Workspace Index Exports

- [x] 4.1 Add SidePanel and AIAssistantPanel exports to `src/workspace/index.js`

## 5. Verification

- [ ] 5.1 Start dev server and verify tabs appear
- [ ] 5.2 Verify "Manual" tab shows PropertyInspector correctly
- [ ] 5.3 Verify tab switching works between "Manual" and "AI Assistant"
- [ ] 5.4 Verify AI Assistant panel shows chat UI
- [ ] 5.5 Verify no console errors
