/*********************************************************************
	Rhapsody	: 9.0 
	Login		: Administrator
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Occupancy_Sensor
//!	Generated Date	: Thu, 13, Jul 2023  
	File Path	: DefaultComponent\DefaultConfig\Occupancy_Sensor.h
*********************************************************************/

#ifndef Occupancy_Sensor_H
#define Occupancy_Sensor_H

//## auto_generated
#include <oxf\oxf.h>
//## auto_generated
#include <..\Profiles\SysML\SIDefinitions.h>
//## auto_generated
#include <aom\aom.h>
//## auto_generated
#include "ArchitecturalAnalysisPkg.h"
//## package ArchitecturalAnalysisPkg

//## class Occupancy_Sensor
class Occupancy_Sensor {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedOccupancy_Sensor;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    Occupancy_Sensor();
    
    //## auto_generated
    ~Occupancy_Sensor();
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedOccupancy_Sensor : virtual public AOMInstance {
    DECLARE_META(Occupancy_Sensor, OMAnimatedOccupancy_Sensor)
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Occupancy_Sensor.h
*********************************************************************/
