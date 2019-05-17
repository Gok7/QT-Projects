import QtQuick 2.1
import QtQuick.Controls 1.0
import "Tools"

//linux
Rectangle {
    id: rectangle1
    width: 500
    height: 500
    scale: 1
    rotation: 0
    z: 0
    transformOrigin: Item.Center
    MouseArea {
        id: mousearea1
        x: 248
        y: 280
        width: 270
        height: 95
        anchors.rightMargin: 248
        anchors.bottomMargin: 125
        anchors.leftMargin: 248
        anchors.topMargin: 280
        anchors.fill: parent
        onClicked: {
            Qt.quit();
        }

        Image {
            id: image2
            x: 154
            y: 141
            width: 98
            height: 78
            source: "qrc:/imgs/Images/Tux.png"
        }
        Image {
            id: image1
            x: -11
            y: -278
            width: 263
            height: 56
            anchors.horizontalCenterOffset: 119
            anchors.horizontalCenter: parent.horizontalCenter
            anchors.top: parent.top
            anchors.topMargin: -278
            fillMode: Image.Stretch
            source: "qrc:/imgs/Images/digimetrie_logo_1.png"

        }
        CheckBox {
            id: check_box1
            x: -239
            y: 81
            width: 141
            height: 22
            text: "Transfert UART"
            onCheckedStateChanged:
            {
                text2.visible = check_box1.checked;
            }
        }

        CheckBox {
            id: check_box2
            x: -239
            y: 103
            text: "Transfert USB"
            activeFocusOnPress: false
            checked: false
            onCheckedStateChanged:
            {
                text2.visible = check_box2.checked;
            }
        }
        ToolBar {
            id: tool_bar1
            x: -239
            y: 187
            width: 357
            height: 27
        }

        Text {
            id: text2
            x: -139
            y: 191
            text: qsTr("Transfert en cours...")
            visible: false
            font.pixelSize: 16
        }

        PCheckbox {
            x: -239
            y: 59
            width: 75
            height: 22
            text: "P_checkbox"
            checked: false
            id: checkbox_001

            onCheckedChanged:
            {
                text2.visible = checkbox_001.checked;
            }
        }
    }

    ListModel {
        id: model

        ListElement {
            value:"Supprimer"
        }

        ListElement {
            value: "Supprimer et brouiller"
        }

        ListElement {
            value: "Transfert données"
        }

        ListElement {
            value: "Formater"
        }

        ListElement {
            value: "Autodestruction"
        }
    }

    Rectangle {

        id: combobox_id_01
        x: 0
        y: 0
        width: 228
        height: 199

        Rectangle {

            id: comboBoxContainer
            color: "#343434"
            x: 0
            y: 6
            width: 228
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
                width: 233
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
