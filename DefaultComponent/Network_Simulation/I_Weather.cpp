/********************************************************************
	Rhapsody	: 9.0 
	Login		: Administrator
	Component	: DefaultComponent 
	Configuration 	: Network_Simulation
	Model Element	: I_Weather
//!	Generated Date	: Sun, 16, Jul 2023  
	File Path	: DefaultComponent\Network_Simulation\I_Weather.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "I_Weather.h"
//#[ ignore
#define ArchitecturalAnalysisPkg_I_Weather_I_Weather_SERIALIZE OM_NO_OP
//#]

//## package ArchitecturalAnalysisPkg

//## class I_Weather
I_Weather::I_Weather() {
    NOTIFY_CONSTRUCTOR(I_Weather, I_Weather(), 0, ArchitecturalAnalysisPkg_I_Weather_I_Weather_SERIALIZE);
}

I_Weather::~I_Weather() {
    NOTIFY_DESTRUCTOR(~I_Weather, true);
}

#ifdef _OMINSTRUMENT
IMPLEMENT_META_P(I_Weather, ArchitecturalAnalysisPkg, ArchitecturalAnalysisPkg, false, OMAnimatedI_Weather)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\Network_Simulation\I_Weather.cpp
*********************************************************************/
