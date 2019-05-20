/* 
 * File:   C_EMETTEUR_UDP.cpp
 * Author: Administrateur
 * 
 * Created on 20 novembre 2013, 16:22
 */

#include "C_EMETTEUR_UDP.h"
#include "DEFINE.h"
#include "C_COORDINATION.h"
#include <windows.h>
#define DEBUG
#ifdef DEBUG
#include <iostream>
using namespace std;
#define DBG(INFO) cerr<<INFO<<endl;
#else
#define DBG(INFO)
#endif

//------------------------------------------------------------------------------

C_EMETTEUR_UDP::C_EMETTEUR_UDP() {

    L_Socket_Client = socket(AF_INET, SOCK_DGRAM, IPPROTO_UDP);
    if (L_Socket_Client == INVALID_SOCKET) throw ("C_EMETTEUR_UDP::Execute - socket");

    L_Info_Process_Distant.sin_family = AF_INET;
    L_Info_Process_Distant.sin_port = htons(PORT_COMMUNICATION_UDP);
    L_Info_Process_Distant.sin_addr.S_un.S_addr = inet_addr(ADRESSE_BROADCAST);

    bool L_Broadcast = true;
    int L_Resultat = setsockopt(L_Socket_Client, SOL_SOCKET, SO_BROADCAST,
            (char*) &L_Broadcast, sizeof (L_Broadcast));
    if (L_Resultat == SOCKET_ERROR) throw ("C_EMETTEUR_UDP::Execute - setsockopt SO_BROADCAST");
}
//------------------------------------------------------------------------------

void Emettre(C_COORDINATION::T_INFO_ACTION_1& P_info) {
    int L_Taille = 0;

    L_Taille = sendto(L_Socket_Client, (char*) &L_Valeur_UDP, sizeof (L_Valeur_UDP),
            0, (sockaddr*) & L_Info_Process_Distant, sizeof (L_Info_Process_Distant));

    if (L_Taille == SOCKET_ERROR) {
        Stoppe_Toi();
    }
    DBG("C_EMETTEUR_UDP::Execute() : fin");
}

void Emettre(C_COORDINATION::T_INFO_ACTION_2& P_info) {
int L_Taille = 0;

    L_Taille = sendto(L_Socket_Client, (char*) &L_Valeur_UDP, sizeof (L_Valeur_UDP),
            0, (sockaddr*) & L_Info_Process_Distant, sizeof (L_Info_Process_Distant));

    if (L_Taille == SOCKET_ERROR) {
        Stoppe_Toi();
    }
    DBG("C_EMETTEUR_UDP::Execute() : fin");
}
//------------------------------------------------------------------------------

void C_EMETTEUR_UDP::Stoppe_Toi() {
    DBG("C_EMETTEUR_UDP::Stoppe_Toi()");
    closesocket(L_Socket_Client);
}
//------------------------------------------------------------------------------

void C_EMETTEUR_UDP::Run() {
    DBG("C_EMETTEUR_UDP::Run()");
    Execute();
}
