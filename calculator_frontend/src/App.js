import React from 'react';
import './App.css';
import Calculator from "./Calculator";
import CalculatorApi from "./CalculatorApi";


function App() {
  return (
    <div className="App">
      <header className="App-header">
        <Calculator CalculatorApi = {new CalculatorApi('http://127.0.0.1:8080')}/>
      </header>
    </div>
  );
}

export default App;
