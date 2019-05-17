/****************************************************************************
**
** Copyright (C) 2013 Digia Plc and/or its subsidiary(-ies).
** Contact: http://www.qt-project.org/legal
**
** This file is part of the Qt Quick Controls module of the Qt Toolkit.
**
** $QT_BEGIN_LICENSE:BSD$
** You may use this file under the terms of the BSD license as follows:
**
** "Redistribution and use in source and binary forms, with or without
** modification, are permitted provided that the following conditions are
** met:
**   * Redistributions of source code must retain the above copyright
**     notice, this list of conditions and the following disclaimer.
**   * Redistributions in binary form must reproduce the above copyright
**     notice, this list of conditions and the following disclaimer in
**     the documentation and/or other materials provided with the
**     distribution.
**   * Neither the name of Digia Plc and its Subsidiary(-ies) nor the names
**     of its contributors may be used to endorse or promote products derived
**     from this software without specific prior written permission.
**
**
** THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
** "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
** LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
** A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT
** OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
** SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
** LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
** DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
** THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
** (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
** OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE."
**
** $QT_END_LICENSE$
**
****************************************************************************/

import QtQuick 2.1
import QtQuick.Controls 1.0
import QtQuick.Controls.Private 1.0

/*!
    \qmltype Button
    \inqmlmodule QtQuick.Controls 1.0
    \since QtQuick.Controls 1.0
    \ingroup controls
    \brief A push button with a text label.

    The push button is perhaps the most commonly used widget in any graphical
    user interface. Pushing (or clicking) a button commands the computer to
    perform some action or answer a question. Common examples of buttons are
    OK, Apply, Cancel, Close, Yes, No, and Help buttons.

    Button is similar to the QPushButton widget.

    You can create a custom appearance for a Button by
    assigning a ButtonStyle.

 */
BasicButton {
    id: button

    /*! This property holds whether the push button is the default button.
        Default buttons decide what happens when the user presses enter in a
        dialog without giving a button explicit focus. \note This property only
        changes the style of the button. The expected behavior needs to be
        implemented by the user.

        The default value is \c false.
    */
    property bool isDefault: false

    /*! This property holds the text shown on the button. If the button has no
        text, the \l text property will be an empty string.

        The default value is the empty string.
    */
    property string text

    /*! This property holds the icon shown on the button. If the button has no
        icon, the \l iconSource property will be an empty string.

        The default value is the empty string.
    */
    property url iconSource

    /*! Assign a \l Menu to this property to get a pull-down menu button.

        The default value is \c null.
     */
    property Menu menu: null

    /*! \qmlproperty bool BasicButton::pressed

        This property holds whether the button is pressed. */
    readonly property bool pressed: __behavior.effectivePressed || menu && menu.__popupVisible

    activeFocusOnTab: true

    Accessible.name: text

    style: Qt.createComponent(Settings.theme() + "/ButtonStyle.qml", button)

    Binding {
        target: menu
        property: "__minimumWidth"
        value: button.__panel.width
    }

    Binding {
        target: menu
        property: "__visualItem"
        value: button
    }

    Connections {
        target: __behavior
        onEffectivePressedChanged: {
            if (__behavior.effectivePressed && menu)
                popupMenuTimer.start()
        }
    }

    Timer {
        id: popupMenuTimer
        interval: 10
        onTriggered: {
            __behavior.keyPressed = false
            menu.__popup(0, button.height, 0)
        }
    }
}
