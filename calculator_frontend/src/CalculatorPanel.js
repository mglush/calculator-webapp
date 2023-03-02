import React from 'react'
import CalculatorButton from "./CalculatorButton";
import CalculatorDisplay from "./CalculatorDisplay";

function CalculatorPanel(props) {

    const buttons = [
        {text: "7", handler: ()=> props.numberClicked("7")},
        {text: "8", handler: ()=> props.numberClicked("8")},
        {text: "9", handler: ()=> props.numberClicked("9")},
        {text: "6", handler: ()=> props.numberClicked("6")},
        {text: "5", handler: ()=> props.numberClicked("5")},
        {text: "4", handler: ()=> props.numberClicked("4")},
        {text: "3", handler: ()=> props.numberClicked("3")},
        {text: "2", handler: ()=> props.numberClicked("2")},
        {text: "1", handler: ()=> props.numberClicked("1")},
        {text: "*", handler: ()=> props.operationClicked("*")},
        {text: "/", handler: ()=> props.operationClicked("/")},
        {text: "-", handler: ()=> props.operationClicked("-")},
        {text: "+", handler: ()=> props.operationClicked("+")},
        {text: ".", handler: ()=> props.dotClicked()},
        {text: "C", handler: ()=> props.clearClicked()},
        {text: "=", handler: ()=> props.equalClicked()}
    ];

    const calc_buttons = buttons.map((value, index) => {
        return (
            <CalculatorButton
                caption={value.text}
                onClick={value.handler}
            />
        );
    });

    return (
        <div className="calculator-grid-container">
            <CalculatorDisplay text={props.result} />
            {calc_buttons}
        </div>
    )
}

export default CalculatorPanel;