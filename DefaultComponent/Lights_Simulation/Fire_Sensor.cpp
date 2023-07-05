/********************************************************************
	Rhapsody	: 9.0 
	Login		: 20181759
	Component	: DefaultComponent 
	Configuration 	: Lights_Simulation
	Model Element	: Fire_Sensor
//!	Generated Date	: Wed, 5, Jul 2023  
	File Path	: DefaultComponent\Lights_Simulation\Fire_Sensor.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX

#define _OMSTATECHART_ANIMATED
//#]

//## auto_generated
#include "Fire_Sensor.h"
//#[ ignore
#define ArchitecturalAnalysisPkg_Fire_Sensor_Fire_Sensor_SERIALIZE OM_NO_OP
//#]

//## package ArchitecturalAnalysisPkg

//## class Fire_Sensor
Fire_Sensor::Fire_Sensor(IOxfActive* theActiveContext) : isFire(false) {
    NOTIFY_REACTIVE_CONSTRUCTOR(Fire_Sensor, Fire_Sensor(), 0, ArchitecturalAnalysisPkg_Fire_Sensor_Fire_Sensor_SERIALIZE);
    setActiveContext(theActiveContext, false);
    initStatechart();
}

Fire_Sensor::~Fire_Sensor() {
    NOTIFY_DESTRUCTOR(~Fire_Sensor, true);
}

bool Fire_Sensor::getIsFire() const {
    return isFire;
}

void Fire_Sensor::setIsFire(bool p_isFire) {
    isFire = p_isFire;
}

bool Fire_Sensor::startBehavior() {
    bool done = false;
    done = OMReactive::startBehavior();
    return done;
}

void Fire_Sensor::initStatechart() {
    rootState_subState = OMNonState;
    rootState_active = OMNonState;
}

void Fire_Sensor::rootState_entDef() {
    {
        NOTIFY_STATE_ENTERED("ROOT");
        NOTIFY_TRANSITION_STARTED("0");
        NOTIFY_STATE_ENTERED("ROOT.Normal");
        rootState_subState = Normal;
        rootState_active = Normal;
        //#[ state Normal.(Entry) 
        isFire=false;
        //#]
        NOTIFY_TRANSITION_TERMINATED("0");
    }
}

IOxfReactive::TakeEventStatus Fire_Sensor::rootState_processEvent() {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    switch (rootState_active) {
        // State Normal
        case Normal:
        {
            if(IS_EVENT_TYPE_OF(ev_Fire_Detected_ArchitecturalAnalysisPkg_id))
                {
                    NOTIFY_TRANSITION_STARTED("1");
                    NOTIFY_STATE_EXITED("ROOT.Normal");
                    NOTIFY_STATE_ENTERED("ROOT.Emergency");
                    rootState_subState = Emergency;
                    rootState_active = Emergency;
                    //#[ state Emergency.(Entry) 
                    isFire=true;
                    //#]
                    NOTIFY_TRANSITION_TERMINATED("1");
                    res = eventConsumed;
                }
            
        }
        break;
        // State Emergency
        case Emergency:
        {
            if(IS_EVENT_TYPE_OF(ev_Fire_Distinguished_ArchitecturalAnalysisPkg_id))
                {
                    NOTIFY_TRANSITION_STARTED("2");
                    NOTIFY_STATE_EXITED("ROOT.Emergency");
                    NOTIFY_STATE_ENTERED("ROOT.Normal");
                    rootState_subState = Normal;
                    rootState_active = Normal;
                    //#[ state Normal.(Entry) 
                    isFire=false;
                    //#]
                    NOTIFY_TRANSITION_TERMINATED("2");
                    res = eventConsumed;
                }
            
        }
        break;
        default:
            break;
    }
    return res;
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedFire_Sensor::serializeAttributes(AOMSAttributes* aomsAttributes) const {
    aomsAttributes->addAttribute("isFire", x2String(myReal->isFire));
}

void OMAnimatedFire_Sensor::rootState_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT");
    switch (myReal->rootState_subState) {
        case Fire_Sensor::Normal:
        {
            Normal_serializeStates(aomsState);
        }
        break;
        case Fire_Sensor::Emergency:
        {
            Emergency_serializeStates(aomsState);
        }
        break;
        default:
            break;
    }
}

void OMAnimatedFire_Sensor::Normal_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.Normal");
}

void OMAnimatedFire_Sensor::Emergency_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.Emergency");
}
//#]

IMPLEMENT_REACTIVE_META_P(Fire_Sensor, ArchitecturalAnalysisPkg, ArchitecturalAnalysisPkg, false, OMAnimatedFire_Sensor)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\Lights_Simulation\Fire_Sensor.cpp
*********************************************************************/
