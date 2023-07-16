/********************************************************************
	Rhapsody	: 9.0 
	Login		: Administrator
	Component	: DefaultComponent 
	Configuration 	: Network_Simulation
	Model Element	: I_OS
//!	Generated Date	: Sun, 16, Jul 2023  
	File Path	: DefaultComponent\Network_Simulation\I_OS.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "I_OS.h"
//#[ ignore
#define ArchitecturalAnalysisPkg_I_OS_I_OS_SERIALIZE OM_NO_OP

#define ArchitecturalAnalysisPkg_I_OS_getOccupied_SERIALIZE OM_NO_OP

#define ArchitecturalAnalysisPkg_I_OS_setOccupied_SERIALIZE aomsmethod->addAttribute("arg_occupied", x2String(arg_occupied));
//#]

//## package ArchitecturalAnalysisPkg

//## class I_OS
I_OS::I_OS() {
    NOTIFY_CONSTRUCTOR(I_OS, I_OS(), 0, ArchitecturalAnalysisPkg_I_OS_I_OS_SERIALIZE);
}

I_OS::~I_OS() {
    NOTIFY_DESTRUCTOR(~I_OS, true);
}

#ifdef _OMINSTRUMENT
IMPLEMENT_META_P(I_OS, ArchitecturalAnalysisPkg, ArchitecturalAnalysisPkg, false, OMAnimatedI_OS)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\Network_Simulation\I_OS.cpp
*********************************************************************/
