/********************************************************************
	Rhapsody	: 9.0 
	Login		: Administrator
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Heating
//!	Generated Date	: Thu, 13, Jul 2023  
	File Path	: DefaultComponent\DefaultConfig\Heating.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "Heating.h"
//#[ ignore
#define ArchitecturalAnalysisPkg_Heating_Heating_SERIALIZE OM_NO_OP
//#]

//## package ArchitecturalAnalysisPkg

//## class Heating
Heating::Heating() {
    NOTIFY_CONSTRUCTOR(Heating, Heating(), 0, ArchitecturalAnalysisPkg_Heating_Heating_SERIALIZE);
}

Heating::~Heating() {
    NOTIFY_DESTRUCTOR(~Heating, true);
}

#ifdef _OMINSTRUMENT
IMPLEMENT_META_P(Heating, ArchitecturalAnalysisPkg, ArchitecturalAnalysisPkg, false, OMAnimatedHeating)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Heating.cpp
*********************************************************************/
