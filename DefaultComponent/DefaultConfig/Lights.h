/*********************************************************************
	Rhapsody	: 9.0 
	Login		: Yang
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Lights
//!	Generated Date	: Wed, 21, Jun 2023  
	File Path	: DefaultComponent\DefaultConfig\Lights.h
*********************************************************************/

#ifndef Lights_H
#define Lights_H

//## auto_generated
#include <oxf\oxf.h>
//## auto_generated
#include <..\Profiles\SysML\SIDefinitions.h>
//## auto_generated
#include <oxf\omreactive.h>
//## auto_generated
#include <oxf\state.h>
//## auto_generated
#include <oxf\event.h>
//## link itsNetwork
class Network;

//## package ArchitecturalAnalysisPkg

//## class Lights
class Lights : public OMReactive {
    ////    Constructors and destructors    ////
    
public :

    //## auto_generated
    Lights(IOxfActive* theActiveContext = 0);
    
    //## auto_generated
    virtual ~Lights();
    
    ////    Operations    ////
    
    //## operation setLightIntensity(int)
    virtual void setLightIntensity(int targetIntensity);
    
    ////    Additional operations    ////
    
    //## auto_generated
    int getIntensity() const;
    
    //## auto_generated
    void setIntensity(int p_intensity);
    
    //## auto_generated
    Network* getItsNetwork() const;
    
    //## auto_generated
    void setItsNetwork(Network* p_Network);
    
    //## auto_generated
    virtual bool startBehavior();

protected :

    //## auto_generated
    void initStatechart();
    
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
    
    // rootState:
    //## statechart_method
    inline bool rootState_IN() const;
    
    //## statechart_method
    virtual void rootState_entDef();
    
    //## statechart_method
    virtual IOxfReactive::TakeEventStatus rootState_processEvent();
    
    ////    Framework    ////

protected :

//#[ ignore
    enum Lights_Enum {
        OMNonState = 0
    };
    
    int rootState_subState;
    
    int rootState_active;
//#]
};

inline bool Lights::rootState_IN() const {
    return true;
}

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Lights.h
*********************************************************************/
