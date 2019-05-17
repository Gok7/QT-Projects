//android
import QtQuick 2.1
import "Tools"

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
        x: 68
        y: 215
        width: 230
        height: 48
        text: qsTr("Hello World")
        anchors.verticalCenterOffset: 69
        anchors.horizontalCenterOffset: -5
        font.pointSize: 30
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
        width: 657
        height: 173
        anchors.horizontalCenterOffset: -2
        anchors.horizontalCenter: parent.horizontalCenter
        anchors.top: parent.top
        anchors.topMargin: 0
        fillMode: Image.Stretch
        source: "qrc:/imgs/Images/digimetrie_logo_1.png"
    }

    Image {
        id: image2
        x: 0
        y: 263
        width: 91
        height: 76
        source: "qrc:/imgs/Images/Android_Robot_100.png"
    }
//    ToolBar {
//        id: tool_bar1
//        x: -45
//        y: 290
//        width: 357
//        height: 27
//    }

    Text {
        id: text2
        x: 107
        y: 292
        text: qsTr("Transfert en cours...")
        visible: false
        font.pixelSize: 16
    }
    PCheckbox {
        x: 248
        y: 188
        width: 78
        height: 27
        text: "Checkbox"
        checked: false
        id: checkbox_001

        onCheckedChanged:
        {
            text2.visible = checkbox_001.checked;
        }
    }    ListModel {
        id: model

        ListElement {
            value:"Supprimer"
        }

        ListElement {
            value: "Supprimer et brouiller"
        }

        ListElement {
            value: "Supprimer pour de bon"
        }

        ListElement {
            value: "formater"
        }

        ListElement {
            value: "formatage + autodestruction"
        }
    }

    Rectangle {

        id: combobox_id_01
        x: 0
        y: 0
        width: 228
        height: 199
        color: transparent

        Rectangle {

            id: comboBoxContainer
            color: "#343434"
            x: 0
            y: 0
            width: 238
            height:combobox_id_01.height/6
            border.color: "#000FFF"


            PComboBox {
                function pli(){
                    comboBoxContainer.height = combobox_id_01.height/6;
                    comboBox.height=combobox_id_01.height/6;
                }
                id: comboBox
                x: 0
                y: 0
                width: 238
                height: 33
                selectedItem: -6
                initialText: "Menu du jour"
                maxHeight: combobox_id_01.height
                listModel: model

                onExpanded: {
                    comboBoxContainer.height = combobox_id_01.height;
                }

                onClosed: {
                    pli();
                }
            }
        }
    }

}
