/********************************************************************
	Rhapsody	: 9.0 
	Login		: Administrator
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: I_Light
//!	Generated Date	: Sat, 15, Jul 2023  
	File Path	: DefaultComponent\DefaultConfig\I_Light.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "I_Light.h"
//#[ ignore
#define ArchitecturalAnalysisPkg_I_Light_I_Light_SERIALIZE OM_NO_OP

#define ArchitecturalAnalysisPkg_I_Light_getItensity_SERIALIZE OM_NO_OP

#define ArchitecturalAnalysisPkg_I_Light_getState_SERIALIZE OM_NO_OP

#define ArchitecturalAnalysisPkg_I_Light_setIntensity_SERIALIZE aomsmethod->addAttribute("arg_intensity", x2String(arg_intensity));

#define ArchitecturalAnalysisPkg_I_Light_setState_SERIALIZE aomsmethod->addAttribute("arg", x2String(arg));
//#]

//## package ArchitecturalAnalysisPkg

//## class I_Light
I_Light::I_Light() {
    NOTIFY_CONSTRUCTOR(I_Light, I_Light(), 0, ArchitecturalAnalysisPkg_I_Light_I_Light_SERIALIZE);
}

I_Light::~I_Light() {
    NOTIFY_DESTRUCTOR(~I_Light, true);
}

#ifdef _OMINSTRUMENT
IMPLEMENT_META_P(I_Light, ArchitecturalAnalysisPkg, ArchitecturalAnalysisPkg, false, OMAnimatedI_Light)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\I_Light.cpp
*********************************************************************/
