/********************************************************************
	Rhapsody	: 9.0 
	Login		: Yang
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: AC
//!	Generated Date	: Sun, 9, Jul 2023  
	File Path	: DefaultComponent\DefaultConfig\AC.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "AC.h"
//#[ ignore
#define ArchitecturalAnalysisPkg_AC_AC_SERIALIZE OM_NO_OP
//#]

//## package ArchitecturalAnalysisPkg

//## class AC
AC::AC() {
    NOTIFY_CONSTRUCTOR(AC, AC(), 0, ArchitecturalAnalysisPkg_AC_AC_SERIALIZE);
}

AC::~AC() {
    NOTIFY_DESTRUCTOR(~AC, true);
}

#ifdef _OMINSTRUMENT
IMPLEMENT_META_P(AC, ArchitecturalAnalysisPkg, ArchitecturalAnalysisPkg, false, OMAnimatedAC)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\AC.cpp
*********************************************************************/
