import React, { useState } from 'react';
import './App.css';

function App() {
  const [input, setInput] = useState('');

  const handleClick = (value) => {
    setInput((prev) => prev + value);
  };

  const handleClear = () => {
    setInput('');
  };

  const handleCalculate = () => {
    try {
      setInput(eval(input).toString()); // eval is fine for simple calculator
    } catch {
      setInput('Error');
    }
  };

  return (
    <div className="calculator">
      <h2>Simple Calculator</h2>
      <input type="text" value={input} readOnly />
      <div className="buttons">
        {['7','8','9','/','4','5','6','*','1','2','3','-','0','.','=','+'].map((btn, index) => (
          <button
            key={index}
            onClick={() => {
              btn === '=' ? handleCalculate() : handleClick(btn);
            }}
          >
            {btn}
          </button>
        ))}
        <button onClick={handleClear}>C</button>
      </div>
    </div>
  );
}

export default App;
