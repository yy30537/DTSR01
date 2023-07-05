/*********************************************************************
	Rhapsody	: 9.0 
	Login		: 20181759
	Component	: DefaultComponent 
	Configuration 	: Network_Simulation
	Model Element	: CO2_Sensor
//!	Generated Date	: Fri, 23, Jun 2023  
	File Path	: DefaultComponent\Network_Simulation\CO2_Sensor.h
*********************************************************************/

#ifndef CO2_Sensor_H
#define CO2_Sensor_H

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

//## class CO2_Sensor
class CO2_Sensor {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedCO2_Sensor;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
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

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedCO2_Sensor : virtual public AOMInstance {
    DECLARE_META(CO2_Sensor, OMAnimatedCO2_Sensor)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeAttributes(AOMSAttributes* aomsAttributes) const;
    
    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\Network_Simulation\CO2_Sensor.h
*********************************************************************/
