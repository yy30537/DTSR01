/********************************************************************
	Rhapsody	: 9.0 
	Login		: Administrator
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Occupancy_Sensor
//!	Generated Date	: Thu, 13, Jul 2023  
	File Path	: DefaultComponent\DefaultConfig\Occupancy_Sensor.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "Occupancy_Sensor.h"
//#[ ignore
#define ArchitecturalAnalysisPkg_Occupancy_Sensor_Occupancy_Sensor_SERIALIZE OM_NO_OP
//#]

//## package ArchitecturalAnalysisPkg

//## class Occupancy_Sensor
Occupancy_Sensor::Occupancy_Sensor() {
    NOTIFY_CONSTRUCTOR(Occupancy_Sensor, Occupancy_Sensor(), 0, ArchitecturalAnalysisPkg_Occupancy_Sensor_Occupancy_Sensor_SERIALIZE);
}

Occupancy_Sensor::~Occupancy_Sensor() {
    NOTIFY_DESTRUCTOR(~Occupancy_Sensor, true);
}

#ifdef _OMINSTRUMENT
IMPLEMENT_META_P(Occupancy_Sensor, ArchitecturalAnalysisPkg, ArchitecturalAnalysisPkg, false, OMAnimatedOccupancy_Sensor)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Occupancy_Sensor.cpp
*********************************************************************/
