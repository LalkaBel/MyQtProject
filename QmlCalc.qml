import QtQuick 2.8
import QtQuick.Controls 1.2
import QtQuick.Layouts 1.1
import com.myinc.Text33 1.0

ApplicationWindow {
    title: "Factorial Calculation"
    width: 250
    height: 80
    visible: true

    Calculation {
        id: calc
    }

    ColumnLayout {
        anchors.fill: parent
        RowLayout { // 1. call of an invokable method
            TextInput{
                id: textInput
                width: 141
                height: 20
                text: qsTr("введи текст")
                font.pixelSize: 12
                 onAccepted: calc.input = value
            }
            Text {
                text: "Result:" + calc.factorial(textInput.text)
            }
        }
        /*RowLayout { // 2. using of the properties
            SpinBox {
                value: 0
                onValueChanged: calc.input = value
            }
            Text {
                text: "Result:" + calc.result
            }
        }*/
    }
}


// 3. alternative solution
/*ApplicationWindow {
    title: "Factorial Calculation"
    width: 250
    height: 40
    visible: true

    Calculation {
        input: sbx.value
        onResultValueChanged: txt.text = "Result:" + result
    }
    RowLayout {
       SpinBox {
           id: sbx
           value: 0
       }
       Text {
           id: txt
       }
   }
}
*/
