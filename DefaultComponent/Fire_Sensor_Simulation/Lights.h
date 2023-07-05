/*********************************************************************
	Rhapsody	: 9.0 
	Login		: 20181759
	Component	: DefaultComponent 
	Configuration 	: Fire_Sensor_Simulation
	Model Element	: Lights
//!	Generated Date	: Wed, 5, Jul 2023  
	File Path	: DefaultComponent\Fire_Sensor_Simulation\Lights.h
*********************************************************************/

#ifndef Lights_H
#define Lights_H

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

//## class Lights
class Lights {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedLights;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    Lights();
    
    //## auto_generated
    ~Lights();
    
    ////    Additional operations    ////
    
    //## auto_generated
    int getIntensity() const;
    
    //## auto_generated
    void setIntensity(int p_intensity);
    
    //## auto_generated
    Network* getItsNetwork() const;
    
    //## auto_generated
    void setItsNetwork(Network* p_Network);

protected :

    //## auto_generated
    void cleanUpRelations();
    
    ////    Attributes    ////
    
    int intensity;		//## attribute intensity
    
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

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedLights : virtual public AOMInstance {
    DECLARE_META(Lights, OMAnimatedLights)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeAttributes(AOMSAttributes* aomsAttributes) const;
    
    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\Fire_Sensor_Simulation\Lights.h
*********************************************************************/
