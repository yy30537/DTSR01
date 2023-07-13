/********************************************************************
	Rhapsody	: 9.0 
	Login		: Administrator
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Network
//!	Generated Date	: Thu, 13, Jul 2023  
	File Path	: DefaultComponent\DefaultConfig\Network.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX

#define _OMSTATECHART_ANIMATED
//#]

//## auto_generated
#include "Network.h"
//## link itsCO2_Sensor
#include "CO2_Sensor.h"
//## link itsHVAC
#include "HVAC.h"
//#[ ignore
#define ArchitecturalAnalysisPkg_Network_Network_SERIALIZE OM_NO_OP
//#]

//## package ArchitecturalAnalysisPkg

//## class Network
//#[ ignore
Network::pNetwork_C::pNetwork_C() : _p_(0) {
    itsI_CO2 = NULL;
    itsI_HVAC = NULL;
}

Network::pNetwork_C::~pNetwork_C() {
    cleanUpRelations();
}

I_CO2* Network::pNetwork_C::getItsI_CO2() {
    return this;
}

I_HVAC* Network::pNetwork_C::getItsI_HVAC() {
    return this;
}

Network::pNetwork_C* Network::pNetwork_C::getOutBound() {
    return this;
}

bool Network::pNetwork_C::get_AC_state() {
    bool res = false;
    if (itsI_HVAC != NULL) {
        res = itsI_HVAC->get_AC_state();
    }
    return res;
}

bool Network::pNetwork_C::get_CO2_Alarm() {
    bool res = false;
    if (itsI_CO2 != NULL) {
        res = itsI_CO2->get_CO2_Alarm();
    }
    return res;
}

bool Network::pNetwork_C::get_HVAC_state() {
    bool res = false;
    if (itsI_HVAC != NULL) {
        res = itsI_HVAC->get_HVAC_state();
    }
    return res;
}

bool Network::pNetwork_C::get_Heating_state() {
    bool res = false;
    if (itsI_HVAC != NULL) {
        res = itsI_HVAC->get_Heating_state();
    }
    return res;
}

bool Network::pNetwork_C::get_Vent_state() {
    bool res = false;
    if (itsI_HVAC != NULL) {
        res = itsI_HVAC->get_Vent_state();
    }
    return res;
}

void Network::pNetwork_C::set_AC_state(bool arg_AC_state) {
    
    if (itsI_HVAC != NULL) {
        itsI_HVAC->set_AC_state(arg_AC_state);
    }
    
}

void Network::pNetwork_C::set_CO2_Alarm(bool arg_CO2_state) {
    
    if (itsI_CO2 != NULL) {
        itsI_CO2->set_CO2_Alarm(arg_CO2_state);
    }
    
}

void Network::pNetwork_C::set_HVAC_state(bool arg_HVAC_state) {
    
    if (itsI_HVAC != NULL) {
        itsI_HVAC->set_HVAC_state(arg_HVAC_state);
    }
    
}

void Network::pNetwork_C::set_Heating_state(bool arg_Heating_state) {
    
    if (itsI_HVAC != NULL) {
        itsI_HVAC->set_Heating_state(arg_Heating_state);
    }
    
}

void Network::pNetwork_C::set_Vent_state(bool arg_Vent_state) {
    
    if (itsI_HVAC != NULL) {
        itsI_HVAC->set_Vent_state(arg_Vent_state);
    }
    
}

void Network::pNetwork_C::setItsI_CO2(I_CO2* p_I_CO2) {
    itsI_CO2 = p_I_CO2;
}

void Network::pNetwork_C::setItsI_HVAC(I_HVAC* p_I_HVAC) {
    itsI_HVAC = p_I_HVAC;
}

void Network::pNetwork_C::cleanUpRelations() {
    if(itsI_CO2 != NULL)
        {
            itsI_CO2 = NULL;
        }
    if(itsI_HVAC != NULL)
        {
            itsI_HVAC = NULL;
        }
}
//#]

Network::Network(IOxfActive* theActiveContext) {
    NOTIFY_REACTIVE_CONSTRUCTOR(Network, Network(), 0, ArchitecturalAnalysisPkg_Network_Network_SERIALIZE);
    setActiveContext(theActiveContext, false);
    itsCO2_Sensor = NULL;
    itsHVAC = NULL;
    initStatechart();
}

Network::~Network() {
    NOTIFY_DESTRUCTOR(~Network, true);
    cleanUpRelations();
}

Network::pNetwork_C* Network::getPNetwork() const {
    return (Network::pNetwork_C*) &pNetwork;
}

Network::pNetwork_C* Network::get_pNetwork() const {
    return (Network::pNetwork_C*) &pNetwork;
}

CO2_Sensor* Network::getItsCO2_Sensor() const {
    return itsCO2_Sensor;
}

void Network::setItsCO2_Sensor(CO2_Sensor* p_CO2_Sensor) {
    if(p_CO2_Sensor != NULL)
        {
            p_CO2_Sensor->_setItsNetwork(this);
        }
    _setItsCO2_Sensor(p_CO2_Sensor);
}

HVAC* Network::getItsHVAC() const {
    return itsHVAC;
}

void Network::setItsHVAC(HVAC* p_HVAC) {
    if(p_HVAC != NULL)
        {
            p_HVAC->_setItsNetwork(this);
        }
    _setItsHVAC(p_HVAC);
}

bool Network::startBehavior() {
    bool done = false;
    done = OMReactive::startBehavior();
    return done;
}

void Network::initStatechart() {
    rootState_subState = OMNonState;
    rootState_active = OMNonState;
    state_Vent_subState = OMNonState;
    state_Vent_active = OMNonState;
    state_Heating_subState = OMNonState;
    state_Heating_active = OMNonState;
    state_AC_subState = OMNonState;
    state_AC_active = OMNonState;
}

void Network::cleanUpRelations() {
    if(itsCO2_Sensor != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsCO2_Sensor");
            Network* p_Network = itsCO2_Sensor->getItsNetwork();
            if(p_Network != NULL)
                {
                    itsCO2_Sensor->__setItsNetwork(NULL);
                }
            itsCO2_Sensor = NULL;
        }
    if(itsHVAC != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsHVAC");
            Network* p_Network = itsHVAC->getItsNetwork();
            if(p_Network != NULL)
                {
                    itsHVAC->__setItsNetwork(NULL);
                }
            itsHVAC = NULL;
        }
}

void Network::__setItsCO2_Sensor(CO2_Sensor* p_CO2_Sensor) {
    itsCO2_Sensor = p_CO2_Sensor;
    if(p_CO2_Sensor != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsCO2_Sensor", p_CO2_Sensor, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsCO2_Sensor");
        }
}

void Network::_setItsCO2_Sensor(CO2_Sensor* p_CO2_Sensor) {
    if(itsCO2_Sensor != NULL)
        {
            itsCO2_Sensor->__setItsNetwork(NULL);
        }
    __setItsCO2_Sensor(p_CO2_Sensor);
}

void Network::_clearItsCO2_Sensor() {
    NOTIFY_RELATION_CLEARED("itsCO2_Sensor");
    itsCO2_Sensor = NULL;
}

void Network::__setItsHVAC(HVAC* p_HVAC) {
    itsHVAC = p_HVAC;
    if(p_HVAC != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsHVAC", p_HVAC, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsHVAC");
        }
}

void Network::_setItsHVAC(HVAC* p_HVAC) {
    if(itsHVAC != NULL)
        {
            itsHVAC->__setItsNetwork(NULL);
        }
    __setItsHVAC(p_HVAC);
}

void Network::_clearItsHVAC() {
    NOTIFY_RELATION_CLEARED("itsHVAC");
    itsHVAC = NULL;
}

void Network::rootState_entDef() {
    {
        NOTIFY_STATE_ENTERED("ROOT");
        NOTIFY_TRANSITION_STARTED("6");
        NOTIFY_STATE_ENTERED("ROOT.HVAC_Disabled");
        rootState_subState = HVAC_Disabled;
        rootState_active = HVAC_Disabled;
        //#[ state HVAC_Disabled.(Entry) 
        OUT_PORT(pNetwork)->set_HVAC_state(false);
        //#]
        NOTIFY_TRANSITION_TERMINATED("6");
    }
}

IOxfReactive::TakeEventStatus Network::rootState_processEvent() {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    switch (rootState_active) {
        // State HVAC_Enabled
        case HVAC_Enabled:
        {
            res = HVAC_Enabled_processEvent();
        }
        break;
        // State HVAC_Disabled
        case HVAC_Disabled:
        {
            res = HVAC_Disabled_handleEvent();
        }
        break;
        default:
            break;
    }
    return res;
}

void Network::HVAC_Enabled_entDef() {
    NOTIFY_STATE_ENTERED("ROOT.HVAC_Enabled");
    rootState_subState = HVAC_Enabled;
    rootState_active = HVAC_Enabled;
    //#[ state HVAC_Enabled.(Entry) 
    OUT_PORT(pNetwork)->set_HVAC_state(true);
    //#]
    state_AC_entDef();
    state_Heating_entDef();
    state_Vent_entDef();
}

void Network::HVAC_Enabled_exit() {
    switch (state_AC_subState) {
        // State AC_OFF
        case AC_OFF:
        {
            NOTIFY_STATE_EXITED("ROOT.HVAC_Enabled.state_AC.AC_OFF");
        }
        break;
        // State AC_ON
        case AC_ON:
        {
            NOTIFY_STATE_EXITED("ROOT.HVAC_Enabled.state_AC.AC_ON");
        }
        break;
        default:
            break;
    }
    state_AC_subState = OMNonState;
    NOTIFY_STATE_EXITED("ROOT.HVAC_Enabled.state_AC");
    switch (state_Heating_subState) {
        // State Heating_OFF
        case Heating_OFF:
        {
            NOTIFY_STATE_EXITED("ROOT.HVAC_Enabled.state_Heating.Heating_OFF");
        }
        break;
        // State Heating_ON
        case Heating_ON:
        {
            NOTIFY_STATE_EXITED("ROOT.HVAC_Enabled.state_Heating.Heating_ON");
        }
        break;
        default:
            break;
    }
    state_Heating_subState = OMNonState;
    NOTIFY_STATE_EXITED("ROOT.HVAC_Enabled.state_Heating");
    switch (state_Vent_subState) {
        // State Vent_OFF
        case Vent_OFF:
        {
            NOTIFY_STATE_EXITED("ROOT.HVAC_Enabled.state_Vent.Vent_OFF");
        }
        break;
        // State Vent_ON
        case Vent_ON:
        {
            NOTIFY_STATE_EXITED("ROOT.HVAC_Enabled.state_Vent.Vent_ON");
        }
        break;
        default:
            break;
    }
    state_Vent_subState = OMNonState;
    NOTIFY_STATE_EXITED("ROOT.HVAC_Enabled.state_Vent");
    
    NOTIFY_STATE_EXITED("ROOT.HVAC_Enabled");
}

IOxfReactive::TakeEventStatus Network::HVAC_Enabled_processEvent() {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    // State state_AC
    if(state_AC_processEvent() != eventNotConsumed)
        {
            res = eventConsumed;
            if(!IS_IN(HVAC_Enabled))
                {
                    return res;
                }
        }
    // State state_Heating
    if(state_Heating_processEvent() != eventNotConsumed)
        {
            res = eventConsumed;
            if(!IS_IN(HVAC_Enabled))
                {
                    return res;
                }
        }
    // State state_Vent
    if(state_Vent_processEvent() != eventNotConsumed)
        {
            res = eventConsumed;
            if(!IS_IN(HVAC_Enabled))
                {
                    return res;
                }
        }
    if(res == eventNotConsumed)
        {
            res = HVAC_Enabled_handleEvent();
        }
    return res;
}

IOxfReactive::TakeEventStatus Network::HVAC_Enabled_handleEvent() {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    if(IS_EVENT_TYPE_OF(ev_HVAC_SwitchOff_ArchitecturalAnalysisPkg_id))
        {
            NOTIFY_TRANSITION_STARTED("7");
            HVAC_Enabled_exit();
            NOTIFY_STATE_ENTERED("ROOT.HVAC_Disabled");
            rootState_subState = HVAC_Disabled;
            rootState_active = HVAC_Disabled;
            //#[ state HVAC_Disabled.(Entry) 
            OUT_PORT(pNetwork)->set_HVAC_state(false);
            //#]
            NOTIFY_TRANSITION_TERMINATED("7");
            res = eventConsumed;
        }
    
    return res;
}

void Network::state_Vent_entDef() {
    NOTIFY_STATE_ENTERED("ROOT.HVAC_Enabled.state_Vent");
    NOTIFY_TRANSITION_STARTED("10");
    NOTIFY_STATE_ENTERED("ROOT.HVAC_Enabled.state_Vent.Vent_OFF");
    state_Vent_subState = Vent_OFF;
    state_Vent_active = Vent_OFF;
    //#[ state HVAC_Enabled.state_Vent.Vent_OFF.(Entry) 
    OUT_PORT(pNetwork)->set_Vent_state(false);
    //#]
    NOTIFY_TRANSITION_TERMINATED("10");
}

IOxfReactive::TakeEventStatus Network::state_Vent_processEvent() {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    switch (state_Vent_active) {
        // State Vent_OFF
        case Vent_OFF:
        {
            if(IS_EVENT_TYPE_OF(ev_CO2_OverTH_ArchitecturalAnalysisPkg_id))
                {
                    NOTIFY_TRANSITION_STARTED("13");
                    NOTIFY_STATE_EXITED("ROOT.HVAC_Enabled.state_Vent.Vent_OFF");
                    NOTIFY_STATE_ENTERED("ROOT.HVAC_Enabled.state_Vent.Vent_ON");
                    state_Vent_subState = Vent_ON;
                    state_Vent_active = Vent_ON;
                    //#[ state HVAC_Enabled.state_Vent.Vent_ON.(Entry) 
                    OUT_PORT(pNetwork)->set_Vent_state(true);
                    //#]
                    NOTIFY_TRANSITION_TERMINATED("13");
                    res = eventConsumed;
                }
            else if(IS_EVENT_TYPE_OF(ev_Vent_SwitchOn_ArchitecturalAnalysisPkg_id))
                {
                    NOTIFY_TRANSITION_STARTED("4");
                    NOTIFY_STATE_EXITED("ROOT.HVAC_Enabled.state_Vent.Vent_OFF");
                    NOTIFY_STATE_ENTERED("ROOT.HVAC_Enabled.state_Vent.Vent_ON");
                    state_Vent_subState = Vent_ON;
                    state_Vent_active = Vent_ON;
                    //#[ state HVAC_Enabled.state_Vent.Vent_ON.(Entry) 
                    OUT_PORT(pNetwork)->set_Vent_state(true);
                    //#]
                    NOTIFY_TRANSITION_TERMINATED("4");
                    res = eventConsumed;
                }
            
            
        }
        break;
        // State Vent_ON
        case Vent_ON:
        {
            if(IS_EVENT_TYPE_OF(ev_CO2_UnderTH_ArchitecturalAnalysisPkg_id))
                {
                    NOTIFY_TRANSITION_STARTED("12");
                    NOTIFY_STATE_EXITED("ROOT.HVAC_Enabled.state_Vent.Vent_ON");
                    NOTIFY_STATE_ENTERED("ROOT.HVAC_Enabled.state_Vent.Vent_OFF");
                    state_Vent_subState = Vent_OFF;
                    state_Vent_active = Vent_OFF;
                    //#[ state HVAC_Enabled.state_Vent.Vent_OFF.(Entry) 
                    OUT_PORT(pNetwork)->set_Vent_state(false);
                    //#]
                    NOTIFY_TRANSITION_TERMINATED("12");
                    res = eventConsumed;
                }
            else if(IS_EVENT_TYPE_OF(ev_Vent_SwitchOff_ArchitecturalAnalysisPkg_id))
                {
                    NOTIFY_TRANSITION_STARTED("5");
                    NOTIFY_STATE_EXITED("ROOT.HVAC_Enabled.state_Vent.Vent_ON");
                    NOTIFY_STATE_ENTERED("ROOT.HVAC_Enabled.state_Vent.Vent_OFF");
                    state_Vent_subState = Vent_OFF;
                    state_Vent_active = Vent_OFF;
                    //#[ state HVAC_Enabled.state_Vent.Vent_OFF.(Entry) 
                    OUT_PORT(pNetwork)->set_Vent_state(false);
                    //#]
                    NOTIFY_TRANSITION_TERMINATED("5");
                    res = eventConsumed;
                }
            
            
        }
        break;
        default:
            break;
    }
    return res;
}

void Network::state_Heating_entDef() {
    NOTIFY_STATE_ENTERED("ROOT.HVAC_Enabled.state_Heating");
    NOTIFY_TRANSITION_STARTED("9");
    NOTIFY_STATE_ENTERED("ROOT.HVAC_Enabled.state_Heating.Heating_OFF");
    state_Heating_subState = Heating_OFF;
    state_Heating_active = Heating_OFF;
    //#[ state HVAC_Enabled.state_Heating.Heating_OFF.(Entry) 
    OUT_PORT(pNetwork)->set_Heating_state(false);
    //#]
    NOTIFY_TRANSITION_TERMINATED("9");
}

IOxfReactive::TakeEventStatus Network::state_Heating_processEvent() {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    switch (state_Heating_active) {
        // State Heating_OFF
        case Heating_OFF:
        {
            if(IS_EVENT_TYPE_OF(ev_Heating_SwitchOn_ArchitecturalAnalysisPkg_id))
                {
                    NOTIFY_TRANSITION_STARTED("2");
                    NOTIFY_STATE_EXITED("ROOT.HVAC_Enabled.state_Heating.Heating_OFF");
                    NOTIFY_STATE_ENTERED("ROOT.HVAC_Enabled.state_Heating.Heating_ON");
                    state_Heating_subState = Heating_ON;
                    state_Heating_active = Heating_ON;
                    //#[ state HVAC_Enabled.state_Heating.Heating_ON.(Entry) 
                    OUT_PORT(pNetwork)->set_Heating_state(true);
                    //#]
                    NOTIFY_TRANSITION_TERMINATED("2");
                    res = eventConsumed;
                }
            
            
        }
        break;
        // State Heating_ON
        case Heating_ON:
        {
            if(IS_EVENT_TYPE_OF(ev_Heating_SwitchOff_ArchitecturalAnalysisPkg_id))
                {
                    NOTIFY_TRANSITION_STARTED("3");
                    NOTIFY_STATE_EXITED("ROOT.HVAC_Enabled.state_Heating.Heating_ON");
                    NOTIFY_STATE_ENTERED("ROOT.HVAC_Enabled.state_Heating.Heating_OFF");
                    state_Heating_subState = Heating_OFF;
                    state_Heating_active = Heating_OFF;
                    //#[ state HVAC_Enabled.state_Heating.Heating_OFF.(Entry) 
                    OUT_PORT(pNetwork)->set_Heating_state(false);
                    //#]
                    NOTIFY_TRANSITION_TERMINATED("3");
                    res = eventConsumed;
                }
            
            
        }
        break;
        default:
            break;
    }
    return res;
}

void Network::state_AC_entDef() {
    NOTIFY_STATE_ENTERED("ROOT.HVAC_Enabled.state_AC");
    NOTIFY_TRANSITION_STARTED("8");
    NOTIFY_STATE_ENTERED("ROOT.HVAC_Enabled.state_AC.AC_OFF");
    state_AC_subState = AC_OFF;
    state_AC_active = AC_OFF;
    //#[ state HVAC_Enabled.state_AC.AC_OFF.(Entry) 
    OUT_PORT(pNetwork)->set_AC_state(false);
    //#]
    NOTIFY_TRANSITION_TERMINATED("8");
}

IOxfReactive::TakeEventStatus Network::state_AC_processEvent() {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    switch (state_AC_active) {
        // State AC_OFF
        case AC_OFF:
        {
            if(IS_EVENT_TYPE_OF(ev_AC_SwitchOn_ArchitecturalAnalysisPkg_id))
                {
                    NOTIFY_TRANSITION_STARTED("0");
                    NOTIFY_STATE_EXITED("ROOT.HVAC_Enabled.state_AC.AC_OFF");
                    NOTIFY_STATE_ENTERED("ROOT.HVAC_Enabled.state_AC.AC_ON");
                    state_AC_subState = AC_ON;
                    state_AC_active = AC_ON;
                    //#[ state HVAC_Enabled.state_AC.AC_ON.(Entry) 
                    OUT_PORT(pNetwork)->set_AC_state(true);
                    //#]
                    NOTIFY_TRANSITION_TERMINATED("0");
                    res = eventConsumed;
                }
            
            
        }
        break;
        // State AC_ON
        case AC_ON:
        {
            if(IS_EVENT_TYPE_OF(ev_AC_SwitchOff_ArchitecturalAnalysisPkg_id))
                {
                    NOTIFY_TRANSITION_STARTED("1");
                    NOTIFY_STATE_EXITED("ROOT.HVAC_Enabled.state_AC.AC_ON");
                    NOTIFY_STATE_ENTERED("ROOT.HVAC_Enabled.state_AC.AC_OFF");
                    state_AC_subState = AC_OFF;
                    state_AC_active = AC_OFF;
                    //#[ state HVAC_Enabled.state_AC.AC_OFF.(Entry) 
                    OUT_PORT(pNetwork)->set_AC_state(false);
                    //#]
                    NOTIFY_TRANSITION_TERMINATED("1");
                    res = eventConsumed;
                }
            
            
        }
        break;
        default:
            break;
    }
    return res;
}

IOxfReactive::TakeEventStatus Network::HVAC_DisabledTakeev_HVAC_SwitchOn() {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    NOTIFY_TRANSITION_STARTED("11");
    NOTIFY_STATE_EXITED("ROOT.HVAC_Disabled");
    HVAC_Enabled_entDef();
    NOTIFY_TRANSITION_TERMINATED("11");
    res = eventConsumed;
    return res;
}

IOxfReactive::TakeEventStatus Network::HVAC_Disabled_handleEvent() {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    if(IS_EVENT_TYPE_OF(ev_HVAC_SwitchOn_ArchitecturalAnalysisPkg_id))
        {
            res = HVAC_DisabledTakeev_HVAC_SwitchOn();
        }
    
    return res;
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedNetwork::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsHVAC", false, true);
    if(myReal->itsHVAC)
        {
            aomsRelations->ADD_ITEM(myReal->itsHVAC);
        }
    aomsRelations->addRelation("itsCO2_Sensor", false, true);
    if(myReal->itsCO2_Sensor)
        {
            aomsRelations->ADD_ITEM(myReal->itsCO2_Sensor);
        }
}

void OMAnimatedNetwork::rootState_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT");
    switch (myReal->rootState_subState) {
        case Network::HVAC_Enabled:
        {
            HVAC_Enabled_serializeStates(aomsState);
        }
        break;
        case Network::HVAC_Disabled:
        {
            HVAC_Disabled_serializeStates(aomsState);
        }
        break;
        default:
            break;
    }
}

void OMAnimatedNetwork::HVAC_Enabled_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.HVAC_Enabled");
    state_AC_serializeStates(aomsState);
    state_Heating_serializeStates(aomsState);
    state_Vent_serializeStates(aomsState);
}

void OMAnimatedNetwork::state_Vent_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.HVAC_Enabled.state_Vent");
    switch (myReal->state_Vent_subState) {
        case Network::Vent_OFF:
        {
            Vent_OFF_serializeStates(aomsState);
        }
        break;
        case Network::Vent_ON:
        {
            Vent_ON_serializeStates(aomsState);
        }
        break;
        default:
            break;
    }
}

void OMAnimatedNetwork::Vent_ON_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.HVAC_Enabled.state_Vent.Vent_ON");
}

void OMAnimatedNetwork::Vent_OFF_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.HVAC_Enabled.state_Vent.Vent_OFF");
}

void OMAnimatedNetwork::state_Heating_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.HVAC_Enabled.state_Heating");
    switch (myReal->state_Heating_subState) {
        case Network::Heating_OFF:
        {
            Heating_OFF_serializeStates(aomsState);
        }
        break;
        case Network::Heating_ON:
        {
            Heating_ON_serializeStates(aomsState);
        }
        break;
        default:
            break;
    }
}

void OMAnimatedNetwork::Heating_ON_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.HVAC_Enabled.state_Heating.Heating_ON");
}

void OMAnimatedNetwork::Heating_OFF_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.HVAC_Enabled.state_Heating.Heating_OFF");
}

void OMAnimatedNetwork::state_AC_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.HVAC_Enabled.state_AC");
    switch (myReal->state_AC_subState) {
        case Network::AC_OFF:
        {
            AC_OFF_serializeStates(aomsState);
        }
        break;
        case Network::AC_ON:
        {
            AC_ON_serializeStates(aomsState);
        }
        break;
        default:
            break;
    }
}

void OMAnimatedNetwork::AC_ON_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.HVAC_Enabled.state_AC.AC_ON");
}

void OMAnimatedNetwork::AC_OFF_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.HVAC_Enabled.state_AC.AC_OFF");
}

void OMAnimatedNetwork::HVAC_Disabled_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.HVAC_Disabled");
}
//#]

IMPLEMENT_REACTIVE_META_P(Network, ArchitecturalAnalysisPkg, ArchitecturalAnalysisPkg, false, OMAnimatedNetwork)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Network.cpp
*********************************************************************/
