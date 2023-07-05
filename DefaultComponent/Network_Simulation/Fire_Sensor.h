/*********************************************************************
	Rhapsody	: 9.0 
	Login		: 20181759
	Component	: DefaultComponent 
	Configuration 	: Network_Simulation
	Model Element	: Fire_Sensor
//!	Generated Date	: Fri, 23, Jun 2023  
	File Path	: DefaultComponent\Network_Simulation\Fire_Sensor.h
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
    
    ////    Additional operations    ////
    
    //## auto_generated
    bool getIsFire() const;
    
    //## auto_generated
    void setIsFire(bool p_isFire);
    
    ////    Attributes    ////

protected :

    bool isFire;		//## attribute isFire
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedFire_Sensor : virtual public AOMInstance {
    DECLARE_META(Fire_Sensor, OMAnimatedFire_Sensor)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeAttributes(AOMSAttributes* aomsAttributes) const;
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\Network_Simulation\Fire_Sensor.h
*********************************************************************/
