/********************************************************************
	Rhapsody	: 9.0 
	Login		: Administrator
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: I_SS
//!	Generated Date	: Sat, 15, Jul 2023  
	File Path	: DefaultComponent\DefaultConfig\I_SS.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "I_SS.h"
//#[ ignore
#define ArchitecturalAnalysisPkg_I_SS_I_SS_SERIALIZE OM_NO_OP

#define ArchitecturalAnalysisPkg_I_SS_getState_SERIALIZE OM_NO_OP

#define ArchitecturalAnalysisPkg_I_SS_setState_SERIALIZE aomsmethod->addAttribute("argState", x2String(argState));
//#]

//## package ArchitecturalAnalysisPkg

//## class I_SS
I_SS::I_SS() {
    NOTIFY_CONSTRUCTOR(I_SS, I_SS(), 0, ArchitecturalAnalysisPkg_I_SS_I_SS_SERIALIZE);
}

I_SS::~I_SS() {
    NOTIFY_DESTRUCTOR(~I_SS, true);
}

#ifdef _OMINSTRUMENT
IMPLEMENT_META_P(I_SS, ArchitecturalAnalysisPkg, ArchitecturalAnalysisPkg, false, OMAnimatedI_SS)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\I_SS.cpp
*********************************************************************/
