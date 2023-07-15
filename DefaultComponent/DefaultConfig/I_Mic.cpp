/********************************************************************
	Rhapsody	: 9.0 
	Login		: Yang
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: I_Mic
//!	Generated Date	: Sat, 15, Jul 2023  
	File Path	: DefaultComponent\DefaultConfig\I_Mic.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "I_Mic.h"
//#[ ignore
#define ArchitecturalAnalysisPkg_I_Mic_I_Mic_SERIALIZE OM_NO_OP
//#]

//## package ArchitecturalAnalysisPkg

//## class I_Mic
I_Mic::I_Mic() {
    NOTIFY_CONSTRUCTOR(I_Mic, I_Mic(), 0, ArchitecturalAnalysisPkg_I_Mic_I_Mic_SERIALIZE);
}

I_Mic::~I_Mic() {
    NOTIFY_DESTRUCTOR(~I_Mic, true);
}

#ifdef _OMINSTRUMENT
IMPLEMENT_META_P(I_Mic, ArchitecturalAnalysisPkg, ArchitecturalAnalysisPkg, false, OMAnimatedI_Mic)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\I_Mic.cpp
*********************************************************************/
