/********************************************************************
	Rhapsody	: 9.0 
	Login		: Administrator
	Component	: DefaultComponent 
	Configuration 	: Network_Simulation
	Model Element	: I_WC
//!	Generated Date	: Sun, 16, Jul 2023  
	File Path	: DefaultComponent\Network_Simulation\I_WC.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "I_WC.h"
//#[ ignore
#define ArchitecturalAnalysisPkg_I_WC_I_WC_SERIALIZE OM_NO_OP

#define ArchitecturalAnalysisPkg_I_WC_get_SERIALIZE OM_NO_OP

#define ArchitecturalAnalysisPkg_I_WC_set_SERIALIZE aomsmethod->addAttribute("arg", x2String(arg));
//#]

//## package ArchitecturalAnalysisPkg

//## class I_WC
I_WC::I_WC() {
    NOTIFY_CONSTRUCTOR(I_WC, I_WC(), 0, ArchitecturalAnalysisPkg_I_WC_I_WC_SERIALIZE);
}

I_WC::~I_WC() {
    NOTIFY_DESTRUCTOR(~I_WC, true);
}

#ifdef _OMINSTRUMENT
IMPLEMENT_META_P(I_WC, ArchitecturalAnalysisPkg, ArchitecturalAnalysisPkg, false, OMAnimatedI_WC)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\Network_Simulation\I_WC.cpp
*********************************************************************/
