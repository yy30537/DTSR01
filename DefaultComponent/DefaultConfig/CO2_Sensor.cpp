/********************************************************************
	Rhapsody	: 9.0 
	Login		: Yang
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: CO2_Sensor
//!	Generated Date	: Sun, 9, Jul 2023  
	File Path	: DefaultComponent\DefaultConfig\CO2_Sensor.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "CO2_Sensor.h"
//#[ ignore
#define ArchitecturalAnalysisPkg_CO2_Sensor_CO2_Sensor_SERIALIZE OM_NO_OP
//#]

//## package ArchitecturalAnalysisPkg

//## class CO2_Sensor
CO2_Sensor::CO2_Sensor() {
    NOTIFY_CONSTRUCTOR(CO2_Sensor, CO2_Sensor(), 0, ArchitecturalAnalysisPkg_CO2_Sensor_CO2_Sensor_SERIALIZE);
}

CO2_Sensor::~CO2_Sensor() {
    NOTIFY_DESTRUCTOR(~CO2_Sensor, true);
}

#ifdef _OMINSTRUMENT
IMPLEMENT_META_P(CO2_Sensor, ArchitecturalAnalysisPkg, ArchitecturalAnalysisPkg, false, OMAnimatedCO2_Sensor)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\CO2_Sensor.cpp
*********************************************************************/
