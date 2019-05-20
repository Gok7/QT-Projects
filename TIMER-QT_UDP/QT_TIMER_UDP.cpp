/*
 * File:   main.cpp
 * Author: flopyy
 *
 * Created on 5 décembre 2013, 11:06
 */

#include <QApplication>

#include <cstdlib>
#include <windef.h>
#include <windows.h> 
#include <iostream>
#include <commctrl.h>
#include "C_DATA.h"
#include "C_EMETTEUR_UDP.h"
#include <winsock2.h>
#include "NS_NETWORK.h"
using namespace std;
#include "C_CADRE.h"
#define DEBUG
#ifdef DEBUG
#define DBG(INFO) cerr<<INFO<<endl;
#else
#define DBG(INFO)
#endif

C_DATA* Data;
C_EMETTEUR_UDP* Emetteur_UDP;

int main(int argc, char *argv[]) {
    // initialize resources, if needed
    // Q_INIT_RESOURCE(resfile);

    QApplication app(argc, argv);
    C_CADRE Fenetre;

    NETWORK::Init_DLL_Socket();
    Data = new C_DATA;
    Emetteur_UDP = new C_EMETTEUR_UDP;
    Emetteur_UDP->Set_Data(Data);
    Fenetre.Set_Data(Data);
    Emetteur_UDP->Reveille_Toi();
    Fenetre.show();

    int L_resultat = app.exec();


    //fin reseau
    Emetteur_UDP->Stoppe_Toi();
    Emetteur_UDP->Synchronisation_Avec_Mort();
    if (Emetteur_UDP) delete Emetteur_UDP;
    if (Data) delete Data;
    NETWORK::Fin_DLL_Socket();
    return L_resultat;
}
