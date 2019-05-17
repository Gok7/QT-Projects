/*

This is a very simple button component.

Example usage:

Button {
    text: "Click me!"
    font.pixelSize: 20

    onClicked: console.log("clicked")
}

*/

import QtQuick 2.0

Rectangle {
    id: button

    property alias text: textItem.text
    property alias font: textItem.font

    signal clicked

    width: textItem.width + 40; height: textItem.height + 10
    border.width: 1
    radius: height/4
    smooth: true

    gradient: Gradient {
        GradientStop { id: topGrad; position: 0.0; color: "lavender" }
        GradientStop { id: bottomGrad; position: 1.0; color: "darkblue" }
    }

    Text {
        id: textItem
        x: parent.width/2 - width/2; y: parent.height/2 - height/2
        font.pixelSize: 18
        color: "white"
    }

    MouseArea {
        id: mouseArea_button
        anchors.fill: parent
        onClicked: button.clicked()

        onPressed: topGrad.color= "darkblue",
                   bottomGrad.color= "lightsteelblue"
        onReleased:topGrad.color= "lavender",
                   bottomGrad.color= "darkblue"
    }
}
