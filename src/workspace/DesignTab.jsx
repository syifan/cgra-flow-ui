import { Box } from '@mui/material';
import { Layout, Model } from 'flexlayout-react';
import PropTypes from 'prop-types';
import { useCallback, useState } from 'react';
import MainCanvas from '../main_cancas';
import PropertyInspector from '../PropertyInspector';

const designLayout = {
  global: {
    tabSetMinHeight: 200,
    tabEnableClose: false
  },
  borders: [],
  layout: {
    type: 'row',
    weight: 100,
    children: [
      {
        type: 'tabset',
        weight: 70,
        selected: 0,
        children: [
          {
            type: 'tab',
            name: 'Canvas',
            component: 'canvas'
          }
        ]
      },
      {
        type: 'tabset',
        weight: 30,
        selected: 0,
        children: [
          {
            type: 'tab',
            name: 'Properties',
            component: 'properties'
          }
        ]
      }
    ]
  }
};

function DesignTab({
  architecture,
  selection,
  onSelectionChange,
  onPropertyChange,
  disabled
}) {
  const [model] = useState(() => Model.fromJson(designLayout));

  const factory = useCallback(
    (node) => {
      const component = node.getComponent();

      switch (component) {
        case 'canvas':
          return (
            <MainCanvas
              architecture={architecture}
              selection={selection}
              onSelectionChange={onSelectionChange}
            />
          );
        case 'properties':
          return (
            <PropertyInspector
              architecture={architecture}
              selection={selection}
              onPropertyChange={onPropertyChange}
              disabled={disabled}
            />
          );
        default:
          return null;
      }
    },
    [architecture, selection, onSelectionChange, onPropertyChange, disabled]
  );

  return (
    <Box
      sx={{
        height: '100%',
        width: '100%',
        position: 'relative',
        overflow: 'hidden',
        '& .flexlayout__layout': {
          height: '100%',
          width: '100%'
        },
        '& .flexlayout__layout, & .flexlayout__tabset, & .flexlayout__tabset_header': {
          bgcolor: 'transparent'
        },
        '& .flexlayout__tab': {
          color: 'text.secondary'
        }
      }}
    >
      <Layout model={model} factory={factory} />
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
