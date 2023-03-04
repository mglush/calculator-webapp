import React from 'react'

function CalculatorDisplay(props) {

    return (
        <input
            readOnly={true}
            className="calculator-display"
            value={props.text}
        />
    );
}

export default CalculatorDisplay;