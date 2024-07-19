import React, { useState } from 'react';

const CounterComponent = () => {
  const [count, setCount] = useState(0);

  const buttonStyle = {
    padding: '10px 20px',
    margin: '5px',
    fontSize: '16px',
    cursor: 'pointer',
    color: 'white',
    border: 'none',
    borderRadius: '5px'
  };

  const incrementStyle = {
    ...buttonStyle,
    backgroundColor: 'green',
  };

  const decrementStyle = {
    ...buttonStyle,
    backgroundColor: 'red',
  };

  return (
    <div>
      <h1>Counter App</h1>
      <h1>{count}</h1>
      <button style={incrementStyle} onClick={() => setCount(count + 1)}>Increment</button>
      <button style={decrementStyle} onClick={() => setCount(count - 1)}>Decrement</button>
    </div>
  );
};

export default CounterComponent;
