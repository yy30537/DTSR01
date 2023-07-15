/*********************************************************************
	Rhapsody	: 9.0 
	Login		: Yang
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Fire_Sensor
//!	Generated Date	: Sat, 15, Jul 2023  
	File Path	: DefaultComponent\DefaultConfig\Fire_Sensor.h
*********************************************************************/

#ifndef Fire_Sensor_H
#define Fire_Sensor_H

//## auto_generated
#include <oxf\oxf.h>
//## auto_generated
#include <..\Profiles\SysML\SIDefinitions.h>
//## auto_generated
#include <aom\aom.h>
//## auto_generated
#include "ArchitecturalAnalysisPkg.h"
//## package ArchitecturalAnalysisPkg

//## class Fire_Sensor
class Fire_Sensor {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedFire_Sensor;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    Fire_Sensor();
    
    //## auto_generated
    ~Fire_Sensor();
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedFire_Sensor : virtual public AOMInstance {
    DECLARE_META(Fire_Sensor, OMAnimatedFire_Sensor)
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Fire_Sensor.h
*********************************************************************/
