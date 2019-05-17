/*
authors : Patrick Nègre
          Gokhan Altunbas

date : july 2013

© Digimétrie All Rights Reserved
*/
import QtQuick 2.0
import Macourbe 1.0
import "Tools"

Rectangle {
    id : rectangle1
    width: 1000; height: 600
    border.width: 2
    Item {
        id: item_header
        anchors.top:rectangle1.top
        width: rectangle1.width
        height: rectangle1.height/13

        Rectangle{
            width:parent.width
            height:parent.height
            gradient: Gradient {
                GradientStop { id: topGrad; position: 0.0; color: "whitesmoke" }
                GradientStop { id: bottomGrad; position: 1.0; color: "floralwhite" }
            }
        }

        Text {
            id: text_temp_actu
            anchors.left: parent.left
            anchors.bottom:parent.bottom
            anchors.top:parent.top
            anchors.topMargin: 20
            width: 200
            height: 28
            text:""
            font.pixelSize:14
        }

        Text {
            id: text2
            anchors.left: parent.left
            anchors.top:parent.top
            width: 270
            height: 28
            text:"temp init : "+Qt.formatDateTime(mycurve1.temp_init, "d/M/yyyy    hh:mm:s");
            font.pixelSize: 14
        }
        Text {
            id: text3
            anchors.top: parent.top
            anchors.left:parent.left
            anchors.leftMargin: text2.width
            width: 200
            height: 28
            text:"décalage : "
            font.pixelSize: 14
        }
    }

    Item {
        id: item_content
        width: parent.width
        height: parent.height-item_header.height
        anchors.bottom: parent.bottom
        anchors.left: parent.left

        Item {
            id: item_courbe
            width: parent.width/1.3
            height: parent.height
            anchors.bottom: parent.bottom
            anchors.left: parent.left

            Rectangle{
                id : rectangle_item_courbe
                anchors.bottom:parent.bottom
                anchors.left:parent.left
                width: parent.width
                height: parent.height
                border.width: 2

                //***************************************************************************
                Text {
                    id: text_y_max
                    anchors.left: parent.left
                    anchors.leftMargin: 10
                    anchors.top:parent.top
                    anchors.topMargin: 30
                    width: 70
                    height: 28
                    text:mycurve1.y_max.toFixed(2)
                    font.pixelSize:14
                }
                Text {
                    id: text_y_min
                    anchors.left: parent.left
                    anchors.leftMargin: 10
                    anchors.bottom:parent.bottom
                    anchors.bottomMargin: 20
                    width: 70
                    height: 28
                    text:mycurve1.y_min.toFixed(2)
                    font.pixelSize:14
                }

                MyCurve{
                    id:mycurve1
                    width: parent.width
                    height: parent.height
                    x_start: 0
                    x_length: 6.28
                    stepx: 1
                    stepy: 0.5
                    y_min:-1
                    y_max:1
                    property var temp_init: new Date()
                    property var decal_ms :0
                    property var refresh_ms:16
                    //Since the animation timer is usually set to 60fps,
                    //the resolution of Timer will be at best 16ms.
                    decal: mycurve1.decal_ms
                    Timer {
                        id:timer1
                        interval: mycurve1.refresh_ms
                        running: true
                        repeat: true    //intervalle en ms
                        triggeredOnStart : true
                        //pour démarrer immédiatement sinon calc décalage est faux
                        onTriggered: {
                            var date_actu=new Date();
                            mycurve1.decal_ms=date_actu-mycurve1.temp_init;//calcul decalage
                            mycurve1.decal= mycurve1.decal_ms/1000;

                            text_temp_actu.text= "temp actuel : "+
                                    Qt.formatDateTime(date_actu, "d/M/yyyy    hh:mm:s");
                            text3.text="décalage : "+(mycurve1.decal_ms/1000).toFixed(0);
                        }
                        onRunningChanged:
                        {
                            if( running )
                                mycurve1.temp_init=new Date()
                        }
                    }
                }
            }
        }

        Item {
            id: item_tools
            width: parent.width-item_courbe.width
            height: parent.height
            anchors.bottom: parent.bottom
            anchors.left: item_courbe.right

            Rectangle{
                x: 0
                y: 0
                width:parent.width
                height:parent.height
                anchors.topMargin: 300

                gradient: Gradient {
                    GradientStop { id: topGrad2; position: 0.0; color: "lavender" }
                    GradientStop { id: bottomGrad2; position: 1.0; color: "steelblue" }
                }

                Text {
                    id: text_input_x_min
                    x: 0
                    y: 66
                    width: 80
                    height: 19
                    text: qsTr("x min : ")
                    anchors.leftMargin: 0
                    anchors.topMargin: 66
                    anchors.top: parent.top
                    anchors.left: parent.left
                    font.pointSize: 12
                }

                Rectangle {
                    id: rec_input_x_min
                    x: 171
                    y: 66
                    width: 60
                    height: 20
                    color: "#fffaf0"
                    anchors.rightMargin: 0
                    anchors.leftMargin: 60
                    anchors.topMargin: 66
                    anchors.right: parent.right
                    TextInput {
                        id: input_x_min
                        x: 0
                        y: 0
                        width: 50
                        height: 20
                        text: mycurve1.x_start
                        maximumLength: 5
                        font.pointSize: 12
                        onAccepted:{
                            var input = getText(0,maximumLength);
                            input = parseFloat(input.replace(",", "."));
                            if(input<=100){
                                mycurve1.x_start=input}
                        }
                    }
                    anchors.top: parent.top
                }

            }
            Text {

                id: text_stepx
                x: 0
                y: 127
                width:80
                height: 19
                anchors.top:parent.top
                anchors.left:parent.left
                anchors.topMargin: 127
                font.pointSize: 12
                text: qsTr("step x : ")
                anchors.leftMargin: 0
            }
            Rectangle{
                id: rec_input_stepx
                x: 171
                y: 120
                height:20
                width: 60
                anchors.top:parent.top
                anchors.topMargin: 120
                anchors.right:parent.right
                anchors.leftMargin: 60
                color:"floralwhite"
                anchors.rightMargin: 0

                TextInput {
                    id: input_stepx
                    width: 50
                    height: 20
                    text:mycurve1.stepx
                    font.pointSize: 12
                    maximumLength: 5
                    onAccepted:{
                        var input = getText(0,maximumLength);
                        input = parseFloat(input.replace(",", "."));

                        if(input<=100){
                            mycurve1.stepx=input}
                    }
                }
            }

            Text {

                id: text_input_y_max
                x: 0
                y: 84
                width:80
                height: 19
                anchors.top:parent.top
                anchors.left:parent.left
                anchors.topMargin: 84
                font.pointSize: 12
                text: qsTr("y max : ")
                anchors.leftMargin: 0
            }
            Rectangle{
                id: rec_input_y_max
                x: 171
                y: 84
                height:20
                width: 60
                anchors.top:parent.top
                anchors.topMargin: 84
                anchors.right:parent.right
                anchors.leftMargin: 60
                color:"floralwhite"
                anchors.rightMargin: 0

                TextInput {
                    id: input_y_max
                    x: 0
                    y: 0
                    width: 50
                    height: 20
                    text:mycurve1.y_max
                    font.pointSize: 12
                    maximumLength: 5
                    onAccepted:{
                        var input = getText(0,maximumLength);
                        input = parseFloat(input.replace(",", "."));

                        mycurve1.y_max=input
                    }
                }
            }
            Text {

                id: text_input_y_min
                x: 0
                y: 103
                width:80
                height: 19
                anchors.top:parent.top
                anchors.left:parent.left
                anchors.topMargin: 103
                font.pointSize: 12
                text: qsTr("y min : ")
                anchors.leftMargin: 0
            }
            Rectangle{
                id: rec_input_y_min
                x: 171
                y: 104
                height:20
                width: 60
                anchors.top:parent.top
                anchors.topMargin: 104
                anchors.right:parent.right
                anchors.leftMargin: 60
                color:"floralwhite"
                anchors.rightMargin: 0

                TextInput {
                    id: input_y_min
                    x: 0
                    y: 0
                    width: 50
                    height: 20
                    text:mycurve1.y_min
                    font.pointSize: 12
                    maximumLength: 5
                    onAccepted:{
                        var input = getText(0,maximumLength);
                        input = parseFloat(input.replace(",", "."));

                        mycurve1.y_min=input
                    }
                }
            }

            Text {

                id: text_stepy
                x: 0
                y: 140
                width:80
                height: 19
                anchors.top:parent.top
                anchors.left:parent.left
                anchors.topMargin: 140
                font.pointSize: 12
                text: qsTr("step y : ")
                anchors.leftMargin: 0
            }
            Rectangle{
                id: rec_input_stepy
                x: 171
                y: 140
                height:20
                width: 60
                anchors.top:parent.top
                anchors.topMargin: 140
                anchors.right:parent.right
                anchors.leftMargin: 60
                color:"floralwhite"
                anchors.rightMargin: 0

                TextInput {
                    id: input_stepy
                    width: 50
                    height: 20
                    text:mycurve1.stepy
                    font.pointSize: 12
                    maximumLength: 5
                    onAccepted:{
                        var input = getText(0,maximumLength);
                        input = parseFloat(input.replace(",", "."));
                        if(input<=100){
                            mycurve1.stepy=input}
                    }
                }
            }
            Text {
                id: text_refresh
                x: 0
                y: 240
                width: 135
                height: 21
                anchors.top:parent.top
                anchors.topMargin: 240
                anchors.left:parent.left
                text: qsTr("refresh écran(ms): ")
                anchors.leftMargin: 0
                font.pointSize: 12
            }
            Rectangle{
                id:rec_text_input1
                x: 171
                y: 241
                anchors.top:parent.top
                anchors.topMargin: 241
                anchors.right:parent.right
                width:60
                height:20
                anchors.leftMargin: 150
                color:"floralwhite"
                anchors.rightMargin: 0

                TextInput {

                    id: text_input_refresh
                    anchors.left:parent.left
                    anchors.top:parent.top
                    width: 50
                    height: parent.height
                    text:mycurve1.refresh_ms
                    font.pointSize: 12
                    maximumLength: 5
                    onAccepted:{
                        var input = getText(0,maximumLength);
                        input=Math.floor(input);
                        //floor automatically converts string to number

                        mycurve1.refresh_ms=input
                    }
                }
            }
            Button {
                id: start_button
                text: "Start"
                anchors.top:parent.top
                anchors.right:parent.right
                anchors.rightMargin: stop_button.width
                width:item_tools.width/2
                font.pixelSize: 20
                onClicked: timer1.running=true;
            }
            Button {
                id: stop_button
                anchors.top:parent.top
                anchors.right:parent.right
                width:item_tools.width/2
                text: "Stop"
                font.pixelSize: 20
                onClicked: timer1.running=false
            }
            Text {
                id: text_x_length
                x: 0
                y: 46
                width:80
                height: 19
                anchors.top:parent.top
                anchors.left:parent.left
                anchors.rightMargin: 148
                anchors.topMargin: 46
                font.pointSize: 12
                text: qsTr("x max : ")
                anchors.leftMargin: 0
            }
            Rectangle{
                id: rec_text_input2
                x: 171
                y: 45
                anchors.right:parent.right
                anchors.top:parent.top
                anchors.leftMargin:text_x_length.width
                height:20
                width: 60
                anchors.topMargin: 45
                color:"floralwhite"
                anchors.rightMargin: 0

                TextInput {
                    id: text_input_x_length
                    x: 0
                    y: 0
                    width: 50.7
                    height: 20
                    anchors.left:parent.left
                    anchors.top:parent.top
                    text:mycurve1.x_length
                    anchors.leftMargin: 0
                    anchors.topMargin: 0
                    font.pointSize: 12
                    maximumLength: 5
                    onAccepted:{
                        var input = getText(0,maximumLength);
                        input = parseFloat(input.replace(",", "."));

                        mycurve1.x_length=input
                    }
                }
            }


            Text {

                id: text_input_y_grandeur
                x: 0
                y: 183
                width:80
                height: 19
                anchors.top:parent.top
                anchors.left:parent.left
                anchors.topMargin: 183
                font.pointSize: 12
                text: qsTr("grandeur y : ")
                anchors.leftMargin: 0
            }
            Rectangle{
                id: rec_input_y_grandeur
                x: 110
                y: 183
                height:20
                width: 120
                anchors.top:parent.top
                anchors.topMargin: 183
                anchors.left:parent.left
                color:"floralwhite"
                anchors.leftMargin: 110

                TextInput {
                    id: input_y_grandeur
                    width: parent.width
                    height: 20
                    text:""
                    font.pointSize: 12
                    maximumLength: 10
                    onAccepted:{
                        var input = getText(0,maximumLength);
                        text_y_max.text=mycurve1.y_max.toFixed(2)+" "+input
                        text_y_min.text=mycurve1.y_min.toFixed(2)+" "+input
                    }
                }
            }

            Button {
                id: reset_button1
                x: 116
                y: 521
                width: item_tools.width/2
                text: "Reset"
                anchors.bottom:parent.bottom
                anchors.right: parent.right
                font.pixelSize: 20
                onClicked: {
                    mycurve1.x_start= 0
                    mycurve1.x_length= 6.28
                    mycurve1.stepx= 1
                    mycurve1.stepy= 0.5
                    mycurve1.y_min=-1
                    mycurve1.y_max=1
                }
            }
        }
    }
}
