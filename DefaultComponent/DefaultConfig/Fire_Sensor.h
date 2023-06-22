/*********************************************************************
	Rhapsody	: 9.0 
	Login		: Administrator
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Fire_Sensor
//!	Generated Date	: Thu, 22, Jun 2023  
	File Path	: DefaultComponent\DefaultConfig\Fire_Sensor.h
*********************************************************************/

#ifndef Fire_Sensor_H
#define Fire_Sensor_H

//## auto_generated
#include <oxf\oxf.h>
//## auto_generated
#include <..\Profiles\SysML\SIDefinitions.h>
//## package ArchitecturalAnalysisPkg

//## class Fire_Sensor
class Fire_Sensor {
    ////    Constructors and destructors    ////
    
public :

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

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Fire_Sensor.h
*********************************************************************/
