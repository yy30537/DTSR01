/********************************************************************
	Rhapsody	: 9.0 
	Login		: Administrator
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Microphones
//!	Generated Date	: Thu, 13, Jul 2023  
	File Path	: DefaultComponent\DefaultConfig\Microphones.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "Microphones.h"
//#[ ignore
#define ArchitecturalAnalysisPkg_Microphones_Microphones_SERIALIZE OM_NO_OP
//#]

//## package ArchitecturalAnalysisPkg

//## class Microphones
Microphones::Microphones() {
    NOTIFY_CONSTRUCTOR(Microphones, Microphones(), 0, ArchitecturalAnalysisPkg_Microphones_Microphones_SERIALIZE);
}

Microphones::~Microphones() {
    NOTIFY_DESTRUCTOR(~Microphones, true);
}

#ifdef _OMINSTRUMENT
IMPLEMENT_META_P(Microphones, ArchitecturalAnalysisPkg, ArchitecturalAnalysisPkg, false, OMAnimatedMicrophones)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Microphones.cpp
*********************************************************************/
