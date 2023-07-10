/********************************************************************
	Rhapsody	: 9.0 
	Login		: Yang
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Lights
//!	Generated Date	: Sun, 9, Jul 2023  
	File Path	: DefaultComponent\DefaultConfig\Lights.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "Lights.h"
//#[ ignore
#define ArchitecturalAnalysisPkg_Lights_Lights_SERIALIZE OM_NO_OP
//#]

//## package ArchitecturalAnalysisPkg

//## class Lights
Lights::Lights() {
    NOTIFY_CONSTRUCTOR(Lights, Lights(), 0, ArchitecturalAnalysisPkg_Lights_Lights_SERIALIZE);
}

Lights::~Lights() {
    NOTIFY_DESTRUCTOR(~Lights, true);
}

#ifdef _OMINSTRUMENT
IMPLEMENT_META_P(Lights, ArchitecturalAnalysisPkg, ArchitecturalAnalysisPkg, false, OMAnimatedLights)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Lights.cpp
*********************************************************************/
