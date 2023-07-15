/********************************************************************
	Rhapsody	: 9.0 
	Login		: Yang
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: I_FS
//!	Generated Date	: Sat, 15, Jul 2023  
	File Path	: DefaultComponent\DefaultConfig\I_FS.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "I_FS.h"
//#[ ignore
#define ArchitecturalAnalysisPkg_I_FS_I_FS_SERIALIZE OM_NO_OP

#define ArchitecturalAnalysisPkg_I_FS_getState_SERIALIZE OM_NO_OP

#define ArchitecturalAnalysisPkg_I_FS_setState_SERIALIZE aomsmethod->addAttribute("argState", x2String(argState));
//#]

//## package ArchitecturalAnalysisPkg

//## class I_FS
I_FS::I_FS() {
    NOTIFY_CONSTRUCTOR(I_FS, I_FS(), 0, ArchitecturalAnalysisPkg_I_FS_I_FS_SERIALIZE);
}

I_FS::~I_FS() {
    NOTIFY_DESTRUCTOR(~I_FS, true);
}

#ifdef _OMINSTRUMENT
IMPLEMENT_META_P(I_FS, ArchitecturalAnalysisPkg, ArchitecturalAnalysisPkg, false, OMAnimatedI_FS)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\I_FS.cpp
*********************************************************************/
