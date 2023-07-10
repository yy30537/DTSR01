/********************************************************************
	Rhapsody	: 9.0 
	Login		: Yang
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: External_Personnel
//!	Generated Date	: Sun, 9, Jul 2023  
	File Path	: DefaultComponent\DefaultConfig\External_Personnel.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "External_Personnel.h"
//#[ ignore
#define ArchitecturalAnalysisPkg_External_Personnel_External_Personnel_SERIALIZE OM_NO_OP
//#]

//## package ArchitecturalAnalysisPkg

//## class External_Personnel
External_Personnel::External_Personnel() {
    NOTIFY_CONSTRUCTOR(External_Personnel, External_Personnel(), 0, ArchitecturalAnalysisPkg_External_Personnel_External_Personnel_SERIALIZE);
}

External_Personnel::~External_Personnel() {
    NOTIFY_DESTRUCTOR(~External_Personnel, true);
}

#ifdef _OMINSTRUMENT
IMPLEMENT_META_P(External_Personnel, ArchitecturalAnalysisPkg, ArchitecturalAnalysisPkg, false, OMAnimatedExternal_Personnel)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\External_Personnel.cpp
*********************************************************************/
