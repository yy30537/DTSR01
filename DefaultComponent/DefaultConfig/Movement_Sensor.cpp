/********************************************************************
	Rhapsody	: 9.0 
	Login		: Administrator
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Movement_Sensor
//!	Generated Date	: Thu, 13, Jul 2023  
	File Path	: DefaultComponent\DefaultConfig\Movement_Sensor.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "Movement_Sensor.h"
//#[ ignore
#define ArchitecturalAnalysisPkg_Movement_Sensor_Movement_Sensor_SERIALIZE OM_NO_OP
//#]

//## package ArchitecturalAnalysisPkg

//## class Movement_Sensor
Movement_Sensor::Movement_Sensor() {
    NOTIFY_CONSTRUCTOR(Movement_Sensor, Movement_Sensor(), 0, ArchitecturalAnalysisPkg_Movement_Sensor_Movement_Sensor_SERIALIZE);
}

Movement_Sensor::~Movement_Sensor() {
    NOTIFY_DESTRUCTOR(~Movement_Sensor, true);
}

#ifdef _OMINSTRUMENT
IMPLEMENT_META_P(Movement_Sensor, ArchitecturalAnalysisPkg, ArchitecturalAnalysisPkg, false, OMAnimatedMovement_Sensor)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Movement_Sensor.cpp
*********************************************************************/
