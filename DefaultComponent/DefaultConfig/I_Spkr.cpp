/********************************************************************
	Rhapsody	: 9.0 
	Login		: Administrator
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: I_Spkr
//!	Generated Date	: Sun, 16, Jul 2023  
	File Path	: DefaultComponent\DefaultConfig\I_Spkr.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "I_Spkr.h"
//#[ ignore
#define ArchitecturalAnalysisPkg_I_Spkr_I_Spkr_SERIALIZE OM_NO_OP

#define ArchitecturalAnalysisPkg_I_Spkr_getStateSpkr_SERIALIZE OM_NO_OP

#define ArchitecturalAnalysisPkg_I_Spkr_setStateSpkr_SERIALIZE aomsmethod->addAttribute("argState", x2String(argState));
//#]

//## package ArchitecturalAnalysisPkg

//## class I_Spkr
I_Spkr::I_Spkr() {
    NOTIFY_CONSTRUCTOR(I_Spkr, I_Spkr(), 0, ArchitecturalAnalysisPkg_I_Spkr_I_Spkr_SERIALIZE);
}

I_Spkr::~I_Spkr() {
    NOTIFY_DESTRUCTOR(~I_Spkr, true);
}

#ifdef _OMINSTRUMENT
IMPLEMENT_META_P(I_Spkr, ArchitecturalAnalysisPkg, ArchitecturalAnalysisPkg, false, OMAnimatedI_Spkr)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\I_Spkr.cpp
*********************************************************************/
