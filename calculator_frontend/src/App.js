import React from 'react';
import './App.css';
import Calculator from './Calculator'
import CalculatorApi from './CalculatorApi'

function App() {
    return (
        <div className="App">
            <header className="App-header">
                <Calculator calculatorApi={new CalculatorApi((process.env.REACT_APP_PROXY_API))} />
            </header>
        </div>
    );
}

export default App;