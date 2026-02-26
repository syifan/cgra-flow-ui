## Why

To enhance the user experience in the Design tab, we need to provide an AI-assisted configuration option alongside the existing manual property editing. This allows users to either manually adjust CGRA properties or interact with an AI assistant for guidance and automated configuration suggestions.

## What Changes

- Modify the right panel in DesignTab to use a tabbed interface with two tabs:
  - "Manual" tab: Contains the existing PropertyInspector component (manual property editing)
  - "AI Assistant" tab: Provides a chat dialog interface for users to interact with AI (UI only, functionality to be implemented in future change)
- Create a new SidePanel component to encapsulate the tab switching logic
- Add a new AIAssistantPanel component as a placeholder for the AI chat interface

## Capabilities

### New Capabilities
- `side-panel-tabs`: Tabbed interface for the right-side panel in Design view, supporting Manual and AI Assistant modes
- `ai-assistant-ui`: UI scaffolding for AI Assistant chat interface (dialog-based conversation layout)

### Modified Capabilities
- None (DesignTab's external props and behavior remain unchanged; this is purely a UI restructuring)

## Impact

- **Affected Components**: 
  - `src/workspace/DesignTab.jsx` - Refactor right panel to use tabs
  - New: `src/workspace/SidePanel.jsx` - Container component for tabbed interface
  - New: `src/workspace/AIAssistantPanel.jsx` - AI Assistant UI placeholder
- **Dependencies**: Uses MUI Tabs component (@mui/material)
- **User Experience**: Users can switch between manual property editing and AI assistant via tabs in the right panel

## Non-goals

- AI backend integration or chat functionality (this change is UI-only)
- Changes to PropertyInspector functionality or appearance
- Changes to other tabs (Mapping, Verification, Layout)
