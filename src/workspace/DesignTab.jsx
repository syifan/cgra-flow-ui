import { Box } from '@mui/material';
import PropTypes from 'prop-types';
import MainCanvas from '../main_cancas';
import PropertyInspector from '../PropertyInspector';

function DesignTab({
  architecture,
  selection,
  onSelectionChange,
  onPropertyChange,
  disabled
}) {
  return (
    <Box
      sx={{
        height: '100%',
        width: '100%',
        display: 'flex',
        overflow: 'hidden'
      }}
    >
      {/* Canvas Area - 70% */}
      <Box
        sx={{
          flex: '0 0 70%',
          height: '100%',
          position: 'relative',
          overflow: 'hidden'
        }}
      >
        <MainCanvas
          architecture={architecture}
          selection={selection}
          onSelectionChange={onSelectionChange}
        />
      </Box>

      {/* Properties Panel - 30% */}
      <Box
        sx={{
          flex: '0 0 30%',
          height: '100%',
          overflow: 'auto',
          borderLeft: '1px solid',
          borderColor: 'divider'
        }}
      >
        <PropertyInspector
          architecture={architecture}
          selection={selection}
          onPropertyChange={onPropertyChange}
          disabled={disabled}
        />
      </Box>
    </Box>
  );
}

DesignTab.propTypes = {
  architecture: PropTypes.object,
  selection: PropTypes.object,
  onSelectionChange: PropTypes.func.isRequired,
  onPropertyChange: PropTypes.func.isRequired,
  disabled: PropTypes.bool
};

export default DesignTab;
