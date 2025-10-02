import PropTypes from 'prop-types';

function Panel({ title, subtitle, children }) {
  return (
    <section className="panel">
      <div className="panel-heading">
        <h2>{title}</h2>
        {subtitle ? <p>{subtitle}</p> : null}
      </div>
      <div className="panel-body">{children}</div>
    </section>
  );
}

Panel.propTypes = {
  title: PropTypes.string.isRequired,
  subtitle: PropTypes.string,
  children: PropTypes.node
};

Panel.defaultProps = {
  subtitle: undefined,
  children: null
};

export default Panel;
