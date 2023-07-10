/********************************************************************
	Rhapsody	: 9.0 
	Login		: Yang
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Fire_Sensor
//!	Generated Date	: Sun, 9, Jul 2023  
	File Path	: DefaultComponent\DefaultConfig\Fire_Sensor.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "Fire_Sensor.h"
//#[ ignore
#define ArchitecturalAnalysisPkg_Fire_Sensor_Fire_Sensor_SERIALIZE OM_NO_OP
//#]

//## package ArchitecturalAnalysisPkg

//## class Fire_Sensor
Fire_Sensor::Fire_Sensor() {
    NOTIFY_CONSTRUCTOR(Fire_Sensor, Fire_Sensor(), 0, ArchitecturalAnalysisPkg_Fire_Sensor_Fire_Sensor_SERIALIZE);
}

Fire_Sensor::~Fire_Sensor() {
    NOTIFY_DESTRUCTOR(~Fire_Sensor, true);
}

#ifdef _OMINSTRUMENT
IMPLEMENT_META_P(Fire_Sensor, ArchitecturalAnalysisPkg, ArchitecturalAnalysisPkg, false, OMAnimatedFire_Sensor)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Fire_Sensor.cpp
*********************************************************************/
