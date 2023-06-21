/*********************************************************************
	Rhapsody	: 9.0 
	Login		: Yang
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Fire_Sensor
//!	Generated Date	: Wed, 21, Jun 2023  
	File Path	: DefaultComponent\DefaultConfig\Fire_Sensor.h
*********************************************************************/

#ifndef Fire_Sensor_H
#define Fire_Sensor_H

//## auto_generated
#include <oxf\oxf.h>
//## auto_generated
#include <..\Profiles\SysML\SIDefinitions.h>
//## link itsNetwork
class Network;

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
    
    //## auto_generated
    Network* getItsNetwork() const;
    
    //## auto_generated
    void setItsNetwork(Network* p_Network);

protected :

    //## auto_generated
    void cleanUpRelations();
    
    ////    Attributes    ////
    
    bool isFire;		//## attribute isFire
    
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
	File Path	: DefaultComponent\DefaultConfig\Fire_Sensor.h
*********************************************************************/
