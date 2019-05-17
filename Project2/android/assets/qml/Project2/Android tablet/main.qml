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
        x: -194
        y: 246
        width: 714
        height: 152
        text: qsTr("Hello World")
        anchors.verticalCenterOffset: 152
        anchors.horizontalCenterOffset: -16
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
}
