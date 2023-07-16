/*********************************************************************
	Rhapsody	: 9.0 
	Login		: Administrator
	Component	: DefaultComponent 
	Configuration 	: Network_Simulation
	Model Element	: I_BS
//!	Generated Date	: Sun, 16, Jul 2023  
	File Path	: DefaultComponent\Network_Simulation\I_BS.h
*********************************************************************/

#ifndef I_BS_H
#define I_BS_H

//## auto_generated
#include <oxf\oxf.h>
//## auto_generated
#include <..\Profiles\SysML\SIDefinitions.h>
//## auto_generated
#include <aom\aom.h>
//## auto_generated
#include "ArchitecturalAnalysisPkg.h"
//## package ArchitecturalAnalysisPkg

//## class I_BS
class I_BS {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedI_BS;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    I_BS();
    
    //## auto_generated
    virtual ~I_BS() = 0;
    
    ////    Operations    ////
    
    //## operation login()
    virtual void login() = 0;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedI_BS : virtual public AOMInstance {
    DECLARE_META(I_BS, OMAnimatedI_BS)
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\Network_Simulation\I_BS.h
*********************************************************************/
