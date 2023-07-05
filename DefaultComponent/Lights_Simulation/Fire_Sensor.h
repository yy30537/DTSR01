/*********************************************************************
	Rhapsody	: 9.0 
	Login		: 20181759
	Component	: DefaultComponent 
	Configuration 	: Lights_Simulation
	Model Element	: Fire_Sensor
//!	Generated Date	: Wed, 5, Jul 2023  
	File Path	: DefaultComponent\Lights_Simulation\Fire_Sensor.h
*********************************************************************/

#ifndef Fire_Sensor_H
#define Fire_Sensor_H

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
//## package ArchitecturalAnalysisPkg

//## class Fire_Sensor
class Fire_Sensor : public OMReactive {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedFire_Sensor;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    Fire_Sensor(IOxfActive* theActiveContext = 0);
    
    //## auto_generated
    ~Fire_Sensor();
    
    ////    Additional operations    ////
    
    //## auto_generated
    bool getIsFire() const;
    
    //## auto_generated
    void setIsFire(bool p_isFire);
    
    //## auto_generated
    virtual bool startBehavior();

protected :

    //## auto_generated
    void initStatechart();
    
    ////    Attributes    ////
    
    bool isFire;		//## attribute isFire
    
    ////    Framework operations    ////

public :

    // rootState:
    //## statechart_method
    inline bool rootState_IN() const;
    
    //## statechart_method
    virtual void rootState_entDef();
    
    //## statechart_method
    virtual IOxfReactive::TakeEventStatus rootState_processEvent();
    
    // Normal:
    //## statechart_method
    inline bool Normal_IN() const;
    
    // Emergency:
    //## statechart_method
    inline bool Emergency_IN() const;
    
    ////    Framework    ////

protected :

//#[ ignore
    enum Fire_Sensor_Enum {
        OMNonState = 0,
        Normal = 1,
        Emergency = 2
    };
    
    int rootState_subState;
    
    int rootState_active;
//#]
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedFire_Sensor : virtual public AOMInstance {
    DECLARE_REACTIVE_META(Fire_Sensor, OMAnimatedFire_Sensor)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeAttributes(AOMSAttributes* aomsAttributes) const;
    
    //## statechart_method
    void rootState_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void Normal_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void Emergency_serializeStates(AOMSState* aomsState) const;
};
//#]
#endif // _OMINSTRUMENT

inline bool Fire_Sensor::rootState_IN() const {
    return true;
}

inline bool Fire_Sensor::Normal_IN() const {
    return rootState_subState == Normal;
}

inline bool Fire_Sensor::Emergency_IN() const {
    return rootState_subState == Emergency;
}

#endif
/*********************************************************************
	File Path	: DefaultComponent\Lights_Simulation\Fire_Sensor.h
*********************************************************************/
