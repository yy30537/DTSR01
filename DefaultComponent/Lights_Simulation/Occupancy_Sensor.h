/*********************************************************************
	Rhapsody	: 9.0 
	Login		: 20181759
	Component	: DefaultComponent 
	Configuration 	: Lights_Simulation
	Model Element	: Occupancy_Sensor
//!	Generated Date	: Wed, 5, Jul 2023  
	File Path	: DefaultComponent\Lights_Simulation\Occupancy_Sensor.h
*********************************************************************/

#ifndef Occupancy_Sensor_H
#define Occupancy_Sensor_H

//## auto_generated
#include <oxf\oxf.h>
//## auto_generated
#include <..\Profiles\SysML\SIDefinitions.h>
//## auto_generated
#include <aom\aom.h>
//## auto_generated
#include "ArchitecturalAnalysisPkg.h"
//## link itsHVAC
class HVAC;

//## link itsNetwork
class Network;

//## package ArchitecturalAnalysisPkg

//## class Occupancy_Sensor
class Occupancy_Sensor {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedOccupancy_Sensor;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
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

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedOccupancy_Sensor : virtual public AOMInstance {
    DECLARE_META(Occupancy_Sensor, OMAnimatedOccupancy_Sensor)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeAttributes(AOMSAttributes* aomsAttributes) const;
    
    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\Lights_Simulation\Occupancy_Sensor.h
*********************************************************************/
