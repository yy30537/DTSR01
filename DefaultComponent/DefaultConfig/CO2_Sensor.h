/*********************************************************************
	Rhapsody	: 9.0 
	Login		: Administrator
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: CO2_Sensor
//!	Generated Date	: Thu, 22, Jun 2023  
	File Path	: DefaultComponent\DefaultConfig\CO2_Sensor.h
*********************************************************************/

#ifndef CO2_Sensor_H
#define CO2_Sensor_H

//## auto_generated
#include <oxf\oxf.h>
//## auto_generated
#include <..\Profiles\SysML\SIDefinitions.h>
//## link itsHVAC
class HVAC;

//## link itsNetwork
class Network;

//## package ArchitecturalAnalysisPkg

//## class CO2_Sensor
class CO2_Sensor {
    ////    Constructors and destructors    ////
    
public :

    //## auto_generated
    CO2_Sensor();
    
    //## auto_generated
    ~CO2_Sensor();
    
    ////    Additional operations    ////
    
    //## auto_generated
    int getCO2Level() const;
    
    //## auto_generated
    void setCO2Level(int p_CO2Level);
    
    //## auto_generated
    HVAC* getItsHVAC() const;
    
    //## auto_generated
    void setItsHVAC(HVAC* p_HVAC);
    
    //## auto_generated
    Network* getItsNetwork() const;
    
    //## auto_generated
    void setItsNetwork(Network* p_Network);

protected :

    //## auto_generated
    void cleanUpRelations();
    
    ////    Attributes    ////
    
    int CO2Level;		//## attribute CO2Level
    
    ////    Relations and components    ////
    
    HVAC* itsHVAC;		//## link itsHVAC
    
    Network* itsNetwork;		//## link itsNetwork
    
    ////    Framework operations    ////

public :

    //## auto_generated
    void __setItsHVAC(HVAC* p_HVAC);
    
    //## auto_generated
    void _setItsHVAC(HVAC* p_HVAC);
    
    //## auto_generated
    void _clearItsHVAC();
};

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\CO2_Sensor.h
*********************************************************************/
