/*********************************************************************
	Rhapsody	: 9.0 
	Login		: Yang
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Lights
//!	Generated Date	: Tue, 11, Jul 2023  
	File Path	: DefaultComponent\DefaultConfig\Lights.h
*********************************************************************/

#ifndef Lights_H
#define Lights_H

//## auto_generated
#include <oxf\oxf.h>
//## auto_generated
#include <..\Profiles\SysML\SIDefinitions.h>
//## auto_generated
#include <aom\aom.h>
//## auto_generated
#include "ArchitecturalAnalysisPkg.h"
//## package ArchitecturalAnalysisPkg

//## class Lights
class Lights {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedLights;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    Lights();
    
    //## auto_generated
    ~Lights();
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedLights : virtual public AOMInstance {
    DECLARE_META(Lights, OMAnimatedLights)
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Lights.h
*********************************************************************/
