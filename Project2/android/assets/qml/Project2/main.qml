import QtQuick 2.0

Rectangle {
    id: rectangle1
    width: 357
    height: 339
    scale: 1
    rotation: 0
    z: 0
    transformOrigin: Item.Center
    Text {
        id: text1
        x: 13
        y: 339
        width: 714
        height: 152
        text: qsTr("Hello World")
        anchors.verticalCenterOffset: 165
        anchors.horizontalCenterOffset: -13
        font.pointSize: 105
        anchors.centerIn: parent
    }
    MouseArea {
        id: mousearea1
        x: 248
        y: 239
        width: 270
        height: 95
        anchors.rightMargin: 248
        anchors.bottomMargin: 166
        anchors.leftMargin: 248
        anchors.topMargin: 239
        anchors.fill: parent
        onClicked: {
            Qt.quit();
        }
    }

    Image {
        id: image1
        x: 0
        y: 0
        width: 761
        height: 239
        anchors.horizontalCenterOffset: -2
        anchors.horizontalCenter: parent.horizontalCenter
        anchors.top: parent.top
        anchors.topMargin: 0
        fillMode: Image.Stretch
        source: "qrc:/imgs/digimetrie_logo_1.png"
    }
    states: [
        State {
            name: "State1"

            PropertyChanges {
                target: mousearea1
                x: 55
                y: 105
                anchors.rightMargin: 60
                anchors.topMargin: 105
                anchors.bottomMargin: 141
                anchors.leftMargin: 55
            }

            PropertyChanges {
                target: image1
                x: -204
                y: -31
                width: 770
                height: 199
            }

            PropertyChanges {
                target: text1
                x: -204
                y: 177
                width: 390
                height: 118
                font.pointSize: 100
                anchors.horizontalCenterOffset: -188
                anchors.verticalCenterOffset: 66
            }
        }
    ]
}
