/********************************************************************
	Rhapsody	: 9.0 
	Login		: Administrator
	Component	: DefaultComponent 
	Configuration 	: Network_Simulation
	Model Element	: I_HVAC
//!	Generated Date	: Thu, 13, Jul 2023  
	File Path	: DefaultComponent\Network_Simulation\I_HVAC.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "I_HVAC.h"
//#[ ignore
#define ArchitecturalAnalysisPkg_I_HVAC_I_HVAC_SERIALIZE OM_NO_OP

#define ArchitecturalAnalysisPkg_I_HVAC_get_AC_state_SERIALIZE OM_NO_OP

#define ArchitecturalAnalysisPkg_I_HVAC_get_HVAC_state_SERIALIZE OM_NO_OP

#define ArchitecturalAnalysisPkg_I_HVAC_get_Heating_state_SERIALIZE OM_NO_OP

#define ArchitecturalAnalysisPkg_I_HVAC_get_Vent_state_SERIALIZE OM_NO_OP

#define ArchitecturalAnalysisPkg_I_HVAC_set_AC_state_SERIALIZE aomsmethod->addAttribute("arg_AC_state", x2String(arg_AC_state));

#define ArchitecturalAnalysisPkg_I_HVAC_set_HVAC_state_SERIALIZE aomsmethod->addAttribute("arg_HVAC_state", x2String(arg_HVAC_state));

#define ArchitecturalAnalysisPkg_I_HVAC_set_Heating_state_SERIALIZE aomsmethod->addAttribute("arg_Heating_state", x2String(arg_Heating_state));

#define ArchitecturalAnalysisPkg_I_HVAC_set_Vent_state_SERIALIZE aomsmethod->addAttribute("arg_Vent_state", x2String(arg_Vent_state));
//#]

//## package ArchitecturalAnalysisPkg

//## class I_HVAC
I_HVAC::I_HVAC() {
    NOTIFY_CONSTRUCTOR(I_HVAC, I_HVAC(), 0, ArchitecturalAnalysisPkg_I_HVAC_I_HVAC_SERIALIZE);
}

I_HVAC::~I_HVAC() {
    NOTIFY_DESTRUCTOR(~I_HVAC, true);
}

#ifdef _OMINSTRUMENT
IMPLEMENT_META_P(I_HVAC, ArchitecturalAnalysisPkg, ArchitecturalAnalysisPkg, false, OMAnimatedI_HVAC)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\Network_Simulation\I_HVAC.cpp
*********************************************************************/
