/*********************************************************************
	Rhapsody	: 9.0 
	Login		: Administrator
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Occupancy_Sensor
//!	Generated Date	: Thu, 22, Jun 2023  
	File Path	: DefaultComponent\DefaultConfig\Occupancy_Sensor.h
*********************************************************************/

#ifndef Occupancy_Sensor_H
#define Occupancy_Sensor_H

//## auto_generated
#include <oxf\oxf.h>
//## auto_generated
#include <..\Profiles\SysML\SIDefinitions.h>
//## link itsHVAC
class HVAC;

//## link itsNetwork
class Network;

//## package ArchitecturalAnalysisPkg

//## class Occupancy_Sensor
class Occupancy_Sensor {
    ////    Constructors and destructors    ////
    
public :

    //## auto_generated
    Occupancy_Sensor();
    
    //## auto_generated
    ~Occupancy_Sensor();
    
    ////    Additional operations    ////
    
    //## auto_generated
    bool getDetectOccupantLeaves() const;
    
    //## auto_generated
    void setDetectOccupantLeaves(bool p_detectOccupantLeaves);
    
    //## auto_generated
    bool getNewOccupantsDetected() const;
    
    //## auto_generated
    void setNewOccupantsDetected(bool p_newOccupantsDetected);
    
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
    
    bool detectOccupantLeaves;		//## attribute detectOccupantLeaves
    
    bool newOccupantsDetected;		//## attribute newOccupantsDetected
    
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
	File Path	: DefaultComponent\DefaultConfig\Occupancy_Sensor.h
*********************************************************************/
