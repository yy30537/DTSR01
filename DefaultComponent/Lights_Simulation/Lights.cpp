/********************************************************************
	Rhapsody	: 9.0 
	Login		: 20181759
	Component	: DefaultComponent 
	Configuration 	: Lights_Simulation
	Model Element	: Lights
//!	Generated Date	: Wed, 5, Jul 2023  
	File Path	: DefaultComponent\Lights_Simulation\Lights.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX

#define _OMSTATECHART_ANIMATED
//#]

//## auto_generated
#include "Lights.h"
//## link itsNetwork
#include "Network.h"
//#[ ignore
#define ArchitecturalAnalysisPkg_Lights_Lights_SERIALIZE OM_NO_OP

#define OMAnim_ArchitecturalAnalysisPkg_Lights_setIntensity_int_UNSERIALIZE_ARGS OP_UNSER(OMDestructiveString2X,p_intensity)

#define OMAnim_ArchitecturalAnalysisPkg_Lights_setIntensity_int_SERIALIZE_RET_VAL
//#]

//## package ArchitecturalAnalysisPkg

//## class Lights
Lights::Lights(IOxfActive* theActiveContext) : intensity(0) {
    NOTIFY_REACTIVE_CONSTRUCTOR(Lights, Lights(), 0, ArchitecturalAnalysisPkg_Lights_Lights_SERIALIZE);
    setActiveContext(theActiveContext, false);
    itsNetwork = NULL;
    initStatechart();
}

Lights::~Lights() {
    NOTIFY_DESTRUCTOR(~Lights, true);
    cleanUpRelations();
}

int Lights::getIntensity() const {
    return intensity;
}

void Lights::setIntensity(int p_intensity) {
    intensity = p_intensity;
    NOTIFY_SET_OPERATION;
}

Network* Lights::getItsNetwork() const {
    return itsNetwork;
}

void Lights::setItsNetwork(Network* p_Network) {
    if(p_Network != NULL)
        {
            p_Network->_setItsLights(this);
        }
    _setItsNetwork(p_Network);
}

bool Lights::startBehavior() {
    bool done = false;
    done = OMReactive::startBehavior();
    return done;
}

void Lights::initStatechart() {
    rootState_subState = OMNonState;
    rootState_active = OMNonState;
}

void Lights::cleanUpRelations() {
    if(itsNetwork != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsNetwork");
            Lights* p_Lights = itsNetwork->getItsLights();
            if(p_Lights != NULL)
                {
                    itsNetwork->__setItsLights(NULL);
                }
            itsNetwork = NULL;
        }
}

void Lights::__setItsNetwork(Network* p_Network) {
    itsNetwork = p_Network;
    if(p_Network != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsNetwork", p_Network, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsNetwork");
        }
}

void Lights::_setItsNetwork(Network* p_Network) {
    if(itsNetwork != NULL)
        {
            itsNetwork->__setItsLights(NULL);
        }
    __setItsNetwork(p_Network);
}

void Lights::_clearItsNetwork() {
    NOTIFY_RELATION_CLEARED("itsNetwork");
    itsNetwork = NULL;
}

void Lights::rootState_entDef() {
    {
        NOTIFY_STATE_ENTERED("ROOT");
        NOTIFY_TRANSITION_STARTED("0");
        NOTIFY_STATE_ENTERED("ROOT.state_0");
        rootState_subState = state_0;
        rootState_active = state_0;
        //#[ state state_0.(Entry) 
        intensity = 0;
        //#]
        NOTIFY_TRANSITION_TERMINATED("0");
    }
}

IOxfReactive::TakeEventStatus Lights::rootState_processEvent() {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    switch (rootState_active) {
        // State state_0
        case state_0:
        {
            if(IS_EVENT_TYPE_OF(turn_On_Lights_ArchitecturalAnalysisPkg_id))
                {
                    NOTIFY_TRANSITION_STARTED("1");
                    NOTIFY_STATE_EXITED("ROOT.state_0");
                    NOTIFY_STATE_ENTERED("ROOT.LightsOn");
                    rootState_subState = LightsOn;
                    rootState_active = LightsOn;
                    //#[ state LightsOn.(Entry) 
                    intensity;
                    //#]
                    NOTIFY_TRANSITION_TERMINATED("1");
                    res = eventConsumed;
                }
            
        }
        break;
        // State LightsOn
        case LightsOn:
        {
            if(IS_EVENT_TYPE_OF(turn_Off_Lights_ArchitecturalAnalysisPkg_id))
                {
                    NOTIFY_TRANSITION_STARTED("2");
                    NOTIFY_STATE_EXITED("ROOT.LightsOn");
                    NOTIFY_STATE_ENTERED("ROOT.state_0");
                    rootState_subState = state_0;
                    rootState_active = state_0;
                    //#[ state state_0.(Entry) 
                    intensity = 0;
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
void OMAnimatedLights::serializeAttributes(AOMSAttributes* aomsAttributes) const {
    aomsAttributes->addAttribute("intensity", x2String(myReal->intensity));
}

void OMAnimatedLights::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsNetwork", false, true);
    if(myReal->itsNetwork)
        {
            aomsRelations->ADD_ITEM(myReal->itsNetwork);
        }
}

void OMAnimatedLights::rootState_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT");
    switch (myReal->rootState_subState) {
        case Lights::state_0:
        {
            state_0_serializeStates(aomsState);
        }
        break;
        case Lights::LightsOn:
        {
            LightsOn_serializeStates(aomsState);
        }
        break;
        default:
            break;
    }
}

void OMAnimatedLights::state_0_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.state_0");
}

void OMAnimatedLights::LightsOn_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.LightsOn");
}
//#]

IMPLEMENT_REACTIVE_META_P(Lights, ArchitecturalAnalysisPkg, ArchitecturalAnalysisPkg, false, OMAnimatedLights)

IMPLEMENT_META_OP(OMAnimatedLights, ArchitecturalAnalysisPkg_Lights_setIntensity_int, "setIntensity", FALSE, "setIntensity(int)", 1)

IMPLEMENT_OP_CALL(ArchitecturalAnalysisPkg_Lights_setIntensity_int, Lights, setIntensity(p_intensity), NO_OP())
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\Lights_Simulation\Lights.cpp
*********************************************************************/
