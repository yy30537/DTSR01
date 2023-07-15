/********************************************************************
	Rhapsody	: 9.0 
	Login		: Yang
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Ventilation
//!	Generated Date	: Sat, 15, Jul 2023  
	File Path	: DefaultComponent\DefaultConfig\Ventilation.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "Ventilation.h"
//#[ ignore
#define ArchitecturalAnalysisPkg_Ventilation_Ventilation_SERIALIZE OM_NO_OP
//#]

//## package ArchitecturalAnalysisPkg

//## class Ventilation
Ventilation::Ventilation() {
    NOTIFY_CONSTRUCTOR(Ventilation, Ventilation(), 0, ArchitecturalAnalysisPkg_Ventilation_Ventilation_SERIALIZE);
}

Ventilation::~Ventilation() {
    NOTIFY_DESTRUCTOR(~Ventilation, true);
}

#ifdef _OMINSTRUMENT
IMPLEMENT_META_P(Ventilation, ArchitecturalAnalysisPkg, ArchitecturalAnalysisPkg, false, OMAnimatedVentilation)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Ventilation.cpp
*********************************************************************/
