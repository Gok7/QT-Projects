/* 
 * File:   C_COORDINATION.h
 * Author: flopyy
 *
 * Created on 12 décembre 2013, 09:36
 */

#ifndef C_COORDINATION_H
#define	C_COORDINATION_H
#define CODE_ACTION_1 1
#define CODE_ACTION_2 2

#include "C_DATA.h"
#include "C_EMETTEUR_UDP.h"

class C_COORDINATION {
public:
    C_COORDINATION();
    C_COORDINATION(const C_COORDINATION& orig);
    virtual ~C_COORDINATION();

    struct T_INFO_ACTION_1 {
        int Code = CODE_ACTION_1;
        int Valeur_1;
        int Valeur_2;
    } Info_1;

    struct T_INFO_ACTION_2 {
        int Code = CODE_ACTION_2;
        int Valeur_1;
        int Valeur_2;
        int Valeur_3;
    } Info_2;

   
    static void Emission_Info_1(C_COORDINATION::T_INFO_ACTION_1& P_info);
    static void Emission_Info_2(C_COORDINATION::T_INFO_ACTION_2& P_info);
protected : 
     C_DATA* Data;
    C_EMETTEUR_UDP* Emetteur_UDP;
    
    //pas besoin d'instance de la classe pour faire appel aux fonctions static
};

#endif	/* C_COORDINATION_H */

