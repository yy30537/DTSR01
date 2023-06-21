/*********************************************************************
	Rhapsody	: 9.0 
	Login		: Yang
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: CO2_Sensor
//!	Generated Date	: Wed, 21, Jun 2023  
	File Path	: DefaultComponent\DefaultConfig\CO2_Sensor.h
*********************************************************************/

#ifndef CO2_Sensor_H
#define CO2_Sensor_H

//## auto_generated
#include <oxf\oxf.h>
//## auto_generated
#include <..\Profiles\SysML\SIDefinitions.h>
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
    Network* getItsNetwork() const;
    
    //## auto_generated
    void setItsNetwork(Network* p_Network);

protected :

    //## auto_generated
    void cleanUpRelations();
    
    ////    Attributes    ////
    
    int CO2Level;		//## attribute CO2Level
    
    ////    Relations and components    ////
    
    Network* itsNetwork;		//## link itsNetwork
    
    ////    Framework operations    ////

public :

    //## auto_generated
    void __setItsNetwork(Network* p_Network);
    
    //## auto_generated
    void _setItsNetwork(Network* p_Network);
    
    //## auto_generated
    void _clearItsNetwork();
};

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\CO2_Sensor.h
*********************************************************************/
