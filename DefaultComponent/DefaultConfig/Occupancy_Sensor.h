/*********************************************************************
	Rhapsody	: 9.0 
	Login		: Yang
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Occupancy_Sensor
//!	Generated Date	: Wed, 21, Jun 2023  
	File Path	: DefaultComponent\DefaultConfig\Occupancy_Sensor.h
*********************************************************************/

#ifndef Occupancy_Sensor_H
#define Occupancy_Sensor_H

//## auto_generated
#include <oxf\oxf.h>
//## auto_generated
#include <..\Profiles\SysML\SIDefinitions.h>
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
    int getNumOccupants() const;
    
    //## auto_generated
    void setNumOccupants(int p_numOccupants);
    
    //## auto_generated
    Network* getItsNetwork() const;
    
    //## auto_generated
    void setItsNetwork(Network* p_Network);

protected :

    //## auto_generated
    void cleanUpRelations();
    
    ////    Attributes    ////
    
    int numOccupants;		//## attribute numOccupants
    
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
	File Path	: DefaultComponent\DefaultConfig\Occupancy_Sensor.h
*********************************************************************/
