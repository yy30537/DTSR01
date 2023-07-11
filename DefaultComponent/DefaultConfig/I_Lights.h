/*********************************************************************
	Rhapsody	: 9.0 
	Login		: Yang
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: I_Lights
//!	Generated Date	: Tue, 11, Jul 2023  
	File Path	: DefaultComponent\DefaultConfig\I_Lights.h
*********************************************************************/

#ifndef I_Lights_H
#define I_Lights_H

//## auto_generated
#include <oxf\oxf.h>
//## auto_generated
#include <..\Profiles\SysML\SIDefinitions.h>
//## auto_generated
#include <aom\aom.h>
//## auto_generated
#include "ArchitecturalAnalysisPkg.h"
//## package ArchitecturalAnalysisPkg

//## class I_Lights
class I_Lights {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedI_Lights;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    I_Lights();
    
    //## auto_generated
    virtual ~I_Lights();
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedI_Lights : virtual public AOMInstance {
    DECLARE_META(I_Lights, OMAnimatedI_Lights)
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\I_Lights.h
*********************************************************************/
