/********************************************************************
	Rhapsody	: 9.0 
	Login		: Yang
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: I_CO2
//!	Generated Date	: Wed, 12, Jul 2023  
	File Path	: DefaultComponent\DefaultConfig\I_CO2.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "I_CO2.h"
//#[ ignore
#define ArchitecturalAnalysisPkg_I_CO2_I_CO2_SERIALIZE OM_NO_OP

#define ArchitecturalAnalysisPkg_I_CO2_get_CO2_Alarm_SERIALIZE OM_NO_OP

#define ArchitecturalAnalysisPkg_I_CO2_set_CO2_Alarm_SERIALIZE aomsmethod->addAttribute("arg_CO2_state", x2String(arg_CO2_state));
//#]

//## package ArchitecturalAnalysisPkg

//## class I_CO2
I_CO2::I_CO2() {
    NOTIFY_CONSTRUCTOR(I_CO2, I_CO2(), 0, ArchitecturalAnalysisPkg_I_CO2_I_CO2_SERIALIZE);
}

I_CO2::~I_CO2() {
    NOTIFY_DESTRUCTOR(~I_CO2, true);
}

#ifdef _OMINSTRUMENT
IMPLEMENT_META_P(I_CO2, ArchitecturalAnalysisPkg, ArchitecturalAnalysisPkg, false, OMAnimatedI_CO2)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\I_CO2.cpp
*********************************************************************/
