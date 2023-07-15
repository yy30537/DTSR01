/*********************************************************************
	Rhapsody	: 9.0 
	Login		: Yang
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Movement_Sensor
//!	Generated Date	: Sat, 15, Jul 2023  
	File Path	: DefaultComponent\DefaultConfig\Movement_Sensor.h
*********************************************************************/

#ifndef Movement_Sensor_H
#define Movement_Sensor_H

//## auto_generated
#include <oxf\oxf.h>
//## auto_generated
#include <..\Profiles\SysML\SIDefinitions.h>
//## auto_generated
#include <aom\aom.h>
//## auto_generated
#include "ArchitecturalAnalysisPkg.h"
//## link itsNetwork
class Network;

//## package ArchitecturalAnalysisPkg

//## class Movement_Sensor
class Movement_Sensor {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedMovement_Sensor;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    Movement_Sensor();
    
    //## auto_generated
    ~Movement_Sensor();
    
    //## auto_generated
    Network* getItsNetwork() const;
    
    //## auto_generated
    void setItsNetwork(Network* p_Network);

protected :

    //## auto_generated
    void cleanUpRelations();
    
    Network* itsNetwork;		//## link itsNetwork

public :

    //## auto_generated
    void __setItsNetwork(Network* p_Network);
    
    //## auto_generated
    void _setItsNetwork(Network* p_Network);
    
    //## auto_generated
    void _clearItsNetwork();
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedMovement_Sensor : virtual public AOMInstance {
    DECLARE_META(Movement_Sensor, OMAnimatedMovement_Sensor)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Movement_Sensor.h
*********************************************************************/
