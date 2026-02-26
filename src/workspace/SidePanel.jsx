import { useState } from 'react';
import PropTypes from 'prop-types';
import { Box, Tabs, Tab } from '@mui/material';
import PropertyInspector from './PropertyInspector';
import AIAssistantPanel from './AIAssistantPanel';

function SidePanel({
  architecture,
  selection,
  onPropertyChange,
  onApplyAIConfig,
  mappingInfo,
  disabled
}) {
  const [activeTab, setActiveTab] = useState(0);

  const handleTabChange = (_, newValue) => {
    setActiveTab(newValue);
  };

  return (
    <Box
      sx={{
        height: '100%',
        display: 'flex',
        flexDirection: 'column',
        overflow: 'hidden'
      }}
    >
      {/* Tabs Header */}
      <Box
        sx={{
          borderBottom: 1,
          borderColor: 'divider',
          bgcolor: 'rgba(148,163,184,0.05)'
        }}
      >
        <Tabs
          value={activeTab}
          onChange={handleTabChange}
          variant="fullWidth"
          sx={{
            '& .MuiTabs-flexContainer': {
              gap: 0
            },
            '& .MuiTab-root': {
              textTransform: 'none',
              fontWeight: 500,
              color: 'text.secondary',
              '&.Mui-selected': {
                color: 'text.primary'
              }
            },
            '& .MuiTabs-indicator': {
              bgcolor: 'primary.main'
            }
          }}
        >
          <Tab label="Manual" />
          <Tab label="AI Assistant" />
        </Tabs>
      </Box>

      {/* Tab Content */}
      <Box
        sx={{
          flex: 1,
          overflow: 'hidden',
          p: 0
        }}
      >
        {activeTab === 0 && (
          <PropertyInspector
            architecture={architecture}
            selection={selection}
            onPropertyChange={onPropertyChange}
            disabled={disabled}
          />
        )}
        {activeTab === 1 && (
          <AIAssistantPanel
            architecture={architecture}
            onApplyConfig={onApplyAIConfig}
            mappingInfo={mappingInfo}
          />
        )}
      </Box>
    </Box>
  );
}

SidePanel.propTypes = {
  architecture: PropTypes.object,
  selection: PropTypes.object,
  onPropertyChange: PropTypes.func.isRequired,
  onApplyAIConfig: PropTypes.func,
  mappingInfo: PropTypes.object,
  disabled: PropTypes.bool
};

export default SidePanel;
