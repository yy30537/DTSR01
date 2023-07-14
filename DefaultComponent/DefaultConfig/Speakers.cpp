/********************************************************************
	Rhapsody	: 9.0 
	Login		: Administrator
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Speakers
//!	Generated Date	: Fri, 14, Jul 2023  
	File Path	: DefaultComponent\DefaultConfig\Speakers.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "Speakers.h"
//#[ ignore
#define ArchitecturalAnalysisPkg_Speakers_Speakers_SERIALIZE OM_NO_OP
//#]

//## package ArchitecturalAnalysisPkg

//## class Speakers
Speakers::Speakers() {
    NOTIFY_CONSTRUCTOR(Speakers, Speakers(), 0, ArchitecturalAnalysisPkg_Speakers_Speakers_SERIALIZE);
}

Speakers::~Speakers() {
    NOTIFY_DESTRUCTOR(~Speakers, true);
}

#ifdef _OMINSTRUMENT
IMPLEMENT_META_P(Speakers, ArchitecturalAnalysisPkg, ArchitecturalAnalysisPkg, false, OMAnimatedSpeakers)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Speakers.cpp
*********************************************************************/
