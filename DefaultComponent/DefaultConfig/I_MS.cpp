/********************************************************************
	Rhapsody	: 9.0 
	Login		: Administrator
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: I_MS
//!	Generated Date	: Sun, 16, Jul 2023  
	File Path	: DefaultComponent\DefaultConfig\I_MS.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "I_MS.h"
//#[ ignore
#define ArchitecturalAnalysisPkg_I_MS_I_MS_SERIALIZE OM_NO_OP

#define ArchitecturalAnalysisPkg_I_MS_getMM_SERIALIZE OM_NO_OP

#define ArchitecturalAnalysisPkg_I_MS_setMM_SERIALIZE aomsmethod->addAttribute("arg", x2String(arg));
//#]

//## package ArchitecturalAnalysisPkg

//## class I_MS
I_MS::I_MS() {
    NOTIFY_CONSTRUCTOR(I_MS, I_MS(), 0, ArchitecturalAnalysisPkg_I_MS_I_MS_SERIALIZE);
}

I_MS::~I_MS() {
    NOTIFY_DESTRUCTOR(~I_MS, true);
}

#ifdef _OMINSTRUMENT
IMPLEMENT_META_P(I_MS, ArchitecturalAnalysisPkg, ArchitecturalAnalysisPkg, false, OMAnimatedI_MS)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\I_MS.cpp
*********************************************************************/
