#include <qstring.h> 
#include <QPlainTextEdit>
#include "C_CADRE.h"
#include "C_COORDINATION.h"

C_CADRE::C_CADRE() {
    widget.setupUi(this);
}

C_CADRE::~C_CADRE() {
}

void C_CADRE::Slot_Info_A1() {

    QString L_Message;
    QString L_1 = widget.A1_V1->text();
    QString L_2 = widget.A1_V2->text();

    L_Message = L_1 + L_2;
    widget.Liste_Info1->addItem(L_Message);
    widget.Liste_Info1->scrollToBottom();

    Coordination.Info_1.Valeur_1 = L_1.toInt();
    Coordination.Info_1.Valeur_2 = L_2.toInt();
    C_COORDINATION::Emission_Info_1(Coordination.Info_1);
}

void C_CADRE::Slot_Info_A2() {

    QString L_Message;
    QString L_1 = widget.A2_V1->text();
    QString L_2 = widget.A2_V2->text();
    QString L_3 = widget.A2_V3->text();

    L_Message = L_1 + L_2 + L_3;
    widget.Liste_Info2->addItem(L_Message);
    widget.Liste_Info2->scrollToBottom();

    Coordination.Info_2.Valeur_1 = L_1.toInt();
    Coordination.Info_2.Valeur_2 = L_2.toInt();
    Coordination.Info_2.Valeur_3 = L_3.toInt();

    C_COORDINATION::Emission_Info_2(Coordination.Info_2);
}

//appui sur a1 déclenche : la lecture IHM des valeurs;
//envoi des valeurs via UDP
