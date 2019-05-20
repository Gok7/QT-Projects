/* 
 * File:   C_CLIENT.h
 * Author: flopyy
 *
 * Created on 12 décembre 2013, 15:16
 */

#ifndef C_CLIENT_H
#define	C_CLIENT_H

#include "C_CADRE.h"
#include "QDialogButtonBox"
#include "QNetworkSession"

class C_CLIENT : public QDialog
{
    Q_OBJECT

public:
    Client(QWidget *parent = 0);

private slots:
    void requestNewFortune();
    void readFortune();
    void displayError(QAbstractSocket::SocketError socketError);
    void enableGetFortuneButton();
    void sessionOpened();

private:
    QLabel *hostLabel;
    QLabel *portLabel;
    QComboBox *hostCombo;
    QLineEdit *portLineEdit;
    QLabel *statusLabel;
    QPushButton *getFortuneButton;
    QPushButton *quitButton;
    QDialogButtonBox *buttonBox;

    QTcpSocket *tcpSocket;
    QString currentFortune;
    quint16 blockSize;

    QNetworkSession *networkSession;
};

#endif	/* C_CLIENT_H */

