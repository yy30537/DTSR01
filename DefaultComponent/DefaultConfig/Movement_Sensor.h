/*********************************************************************
	Rhapsody	: 9.0 
	Login		: Administrator
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Movement_Sensor
//!	Generated Date	: Thu, 22, Jun 2023  
	File Path	: DefaultComponent\DefaultConfig\Movement_Sensor.h
*********************************************************************/

#ifndef Movement_Sensor_H
#define Movement_Sensor_H

//## auto_generated
#include <oxf\oxf.h>
//## auto_generated
#include <..\Profiles\SysML\SIDefinitions.h>
//## link itsHVAC
class HVAC;

//## link itsNetwork
class Network;

//## package ArchitecturalAnalysisPkg

//## class Movement_Sensor
class Movement_Sensor {
    ////    Constructors and destructors    ////
    
public :

    //## auto_generated
    Movement_Sensor();
    
    //## auto_generated
    ~Movement_Sensor();
    
    ////    Additional operations    ////
    
    //## auto_generated
    bool getIsMovement() const;
    
    //## auto_generated
    void setIsMovement(bool p_isMovement);
    
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
    
    bool isMovement;		//## attribute isMovement
    
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
    
    //## auto_generated
    void __setItsNetwork(Network* p_Network);
    
    //## auto_generated
    void _setItsNetwork(Network* p_Network);
    
    //## auto_generated
    void _clearItsNetwork();
};

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Movement_Sensor.h
*********************************************************************/
