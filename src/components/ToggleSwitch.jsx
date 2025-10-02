import PropTypes from 'prop-types';
import * as Switch from '@radix-ui/react-switch';

function ToggleSwitch({ id, label, checked, onCheckedChange }) {
  return (
    <label className="toggle-switch" htmlFor={id}>
      <span>{label}</span>
      <Switch.Root id={id} checked={checked} onCheckedChange={onCheckedChange} className="switch-root">
        <Switch.Thumb className="switch-thumb" />
      </Switch.Root>
    </label>
  );
}

ToggleSwitch.propTypes = {
  id: PropTypes.string.isRequired,
  label: PropTypes.string.isRequired,
  checked: PropTypes.bool,
  onCheckedChange: PropTypes.func
};

ToggleSwitch.defaultProps = {
  checked: false,
  onCheckedChange: () => {}
};

export default ToggleSwitch;
