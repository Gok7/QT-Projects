/* 
 * File:   C_COORDINATION.cpp
 * Author: flopyy
 * 
 * Created on 12 décembre 2013, 09:36
 */

#include "C_COORDINATION.h"
#include "C_DATA.h"

//#define SANS_PROCESS

#ifdef SANS_PROCESS
#include <iostream>
#endif

C_COORDINATION::C_COORDINATION() {
    
    NETWORK::Init_DLL_Socket();
    Data = new C_DATA;
    Emetteur_UDP = new C_EMETTEUR_UDP;
    Emetteur_UDP->Set_Data(Data);
    Emetteur_UDP->Reveille_Toi();
}

C_COORDINATION::C_COORDINATION(const C_COORDINATION& orig) {
}

C_COORDINATION::~C_COORDINATION() {
    
    Emetteur_UDP->Stoppe_Toi();
    Emetteur_UDP->Synchronisation_Avec_Mort();
    delete Emetteur_UDP;
    delete Data;
    NETWORK::Fin_DLL_Socket();
}

void C_COORDINATION::Emission_Info_1(C_COORDINATION::T_INFO_ACTION_1& P_info) {
#ifdef SANS_PROCESS

    std::cout << P_info.Code << P_info.Valeur_1 << P_info.Valeur_2
            << std::endl;
#endif
   

}

void C_COORDINATION::Emission_Info_2(C_COORDINATION::T_INFO_ACTION_2& P_info) {
#ifdef SANS_PROCESS

    std::cout << P_info.Code << P_info.Valeur_1 << P_info.Valeur_2
            << P_info.Valeur_3 << std::endl;

#endif

}