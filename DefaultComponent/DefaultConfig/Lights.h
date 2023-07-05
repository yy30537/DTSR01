/*********************************************************************
	Rhapsody	: 9.0 
	Login		: 20181759
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Lights
//!	Generated Date	: Wed, 5, Jul 2023  
	File Path	: DefaultComponent\DefaultConfig\Lights.h
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
//## auto_generated
#include <oxf\omthread.h>
//## auto_generated
#include <oxf\omreactive.h>
//## auto_generated
#include <oxf\state.h>
//## auto_generated
#include <oxf\event.h>
//## link itsNetwork
class Network;

//#[ ignore
#define OMAnim_ArchitecturalAnalysisPkg_Lights_setIntensity_int_ARGS_DECLARATION int p_intensity;
//#]

//## package ArchitecturalAnalysisPkg

//## class Lights
class Lights : public OMReactive {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedLights;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    Lights(IOxfActive* theActiveContext = 0);
    
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
    
    // state_0:
    //## statechart_method
    inline bool state_0_IN() const;
    
    // LightsOn:
    //## statechart_method
    inline bool LightsOn_IN() const;
    
    ////    Framework    ////

protected :

//#[ ignore
    enum Lights_Enum {
        OMNonState = 0,
        state_0 = 1,
        LightsOn = 2
    };
    
    int rootState_subState;
    
    int rootState_active;
//#]
};

#ifdef _OMINSTRUMENT
DECLARE_OPERATION_CLASS(ArchitecturalAnalysisPkg_Lights_setIntensity_int)

//#[ ignore
class OMAnimatedLights : virtual public AOMInstance {
    DECLARE_REACTIVE_META(Lights, OMAnimatedLights)
    
    DECLARE_META_OP(ArchitecturalAnalysisPkg_Lights_setIntensity_int)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeAttributes(AOMSAttributes* aomsAttributes) const;
    
    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
    
    //## statechart_method
    void rootState_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void state_0_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void LightsOn_serializeStates(AOMSState* aomsState) const;
};
//#]
#endif // _OMINSTRUMENT

inline bool Lights::rootState_IN() const {
    return true;
}

inline bool Lights::state_0_IN() const {
    return rootState_subState == state_0;
}

inline bool Lights::LightsOn_IN() const {
    return rootState_subState == LightsOn;
}

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Lights.h
*********************************************************************/
