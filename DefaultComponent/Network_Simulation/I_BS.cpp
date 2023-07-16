/********************************************************************
	Rhapsody	: 9.0 
	Login		: Administrator
	Component	: DefaultComponent 
	Configuration 	: Network_Simulation
	Model Element	: I_BS
//!	Generated Date	: Sun, 16, Jul 2023  
	File Path	: DefaultComponent\Network_Simulation\I_BS.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "I_BS.h"
//#[ ignore
#define ArchitecturalAnalysisPkg_I_BS_I_BS_SERIALIZE OM_NO_OP

#define ArchitecturalAnalysisPkg_I_BS_login_SERIALIZE OM_NO_OP
//#]

//## package ArchitecturalAnalysisPkg

//## class I_BS
I_BS::I_BS() {
    NOTIFY_CONSTRUCTOR(I_BS, I_BS(), 0, ArchitecturalAnalysisPkg_I_BS_I_BS_SERIALIZE);
}

I_BS::~I_BS() {
    NOTIFY_DESTRUCTOR(~I_BS, true);
}

#ifdef _OMINSTRUMENT
IMPLEMENT_META_P(I_BS, ArchitecturalAnalysisPkg, ArchitecturalAnalysisPkg, false, OMAnimatedI_BS)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\Network_Simulation\I_BS.cpp
*********************************************************************/
