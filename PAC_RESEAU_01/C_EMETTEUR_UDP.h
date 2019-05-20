/* 
 * File:   C_EMETTEUR_UDP.h
 * Author: Administrateur
 *
 * Created on 20 novembre 2013, 16:22
 */

#ifndef C_EMETTEUR_UDP_H
#define	C_EMETTEUR_UDP_H

#include "C_THREAD.h"
#include <windows.h>

class C_EMETTEUR_UDP : protected C_THREAD {
public:
     C_EMETTEUR_UDP();
     void Stoppe_Toi();
      using   C_THREAD::Reveille_Toi;
     using   C_THREAD::Synchronisation_Avec_Mort;
     void Run();
     void Emettre(C_COORDINATION::T_INFO_ACTION_1& P_info);
     void Emettre(C_COORDINATION::T_INFO_ACTION_2& P_info);

protected:
    SOCKET L_Socket_Client;
    sockaddr_in L_Info_Process_Distant;
    DWORD Execute();
};

#endif	/* C_EMETTEUR_UDP_H */

