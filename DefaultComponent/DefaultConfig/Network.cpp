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
//## link itsHVAC
#include "HVAC.h"
//## link itsLights
#include "Lights.h"
//## link itsCO2_Sensor
#include "CO2_Sensor.h"
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

int Network::pNetwork_C::getTemp() {
    int res = 0;
    if (itsI_HVAC != NULL) {
        res = itsI_HVAC->getTemp();
    }
    return res;
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

void Network::pNetwork_C::setTemp(int arg_temp) {
    
    if (itsI_HVAC != NULL) {
        itsI_HVAC->setTemp(arg_temp);
    }
    
}

void Network::pNetwork_C::set_AC_state(bool arg_AC_state) {
    
    if (itsI_HVAC != NULL) {
        itsI_HVAC->set_AC_state(arg_AC_state);
    }
    
}

void Network::pNetwork_C::set_CO2_Alarm(bool arg_CO2_Alarm_state) {
    
    if (itsI_CO2 != NULL) {
        itsI_CO2->set_CO2_Alarm(arg_CO2_Alarm_state);
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

Network::Network(IOxfActive* theActiveContext) : temp_Network(26) {
    NOTIFY_REACTIVE_CONSTRUCTOR(Network, Network(), 0, ArchitecturalAnalysisPkg_Network_Network_SERIALIZE);
    setActiveContext(theActiveContext, false);
    itsCO2_Sensor = NULL;
    itsHVAC = NULL;
    itsLights = NULL;
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

int Network::getTemp_Network() const {
    return temp_Network;
}

void Network::setTemp_Network(int p_temp_Network) {
    temp_Network = p_temp_Network;
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

Lights* Network::getItsLights() const {
    return itsLights;
}

void Network::setItsLights(Lights* p_Lights) {
    itsLights = p_Lights;
    if(p_Lights != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsLights", p_Lights, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsLights");
        }
}

bool Network::startBehavior() {
    bool done = false;
    done = OMReactive::startBehavior();
    return done;
}

void Network::initStatechart() {
    rootState_subState = OMNonState;
    rootState_active = OMNonState;
    state_12_subState = OMNonState;
    state_12_active = OMNonState;
    state_11_subState = OMNonState;
    state_11_active = OMNonState;
    state_10_subState = OMNonState;
    state_10_active = OMNonState;
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
    if(itsLights != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsLights");
            itsLights = NULL;
        }
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

void Network::rootState_entDef() {
    {
        NOTIFY_STATE_ENTERED("ROOT");
        NOTIFY_TRANSITION_STARTED("6");
        NOTIFY_STATE_ENTERED("ROOT.HVAC_Disabled");
        rootState_subState = HVAC_Disabled;
        rootState_active = HVAC_Disabled;
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
    state_10_entDef();
    state_11_entDef();
    state_12_entDef();
}

void Network::HVAC_Enabled_exit() {
    switch (state_10_subState) {
        // State AC_OFF
        case AC_OFF:
        {
            popNullTransition();
            NOTIFY_STATE_EXITED("ROOT.HVAC_Enabled.state_10.AC_OFF");
        }
        break;
        // State AC_ON
        case AC_ON:
        {
            NOTIFY_STATE_EXITED("ROOT.HVAC_Enabled.state_10.AC_ON");
        }
        break;
        default:
            break;
    }
    state_10_subState = OMNonState;
    NOTIFY_STATE_EXITED("ROOT.HVAC_Enabled.state_10");
    switch (state_11_subState) {
        // State Heating_OFF
        case Heating_OFF:
        {
            NOTIFY_STATE_EXITED("ROOT.HVAC_Enabled.state_11.Heating_OFF");
        }
        break;
        // State Heating_On
        case Heating_On:
        {
            NOTIFY_STATE_EXITED("ROOT.HVAC_Enabled.state_11.Heating_On");
        }
        break;
        default:
            break;
    }
    state_11_subState = OMNonState;
    NOTIFY_STATE_EXITED("ROOT.HVAC_Enabled.state_11");
    switch (state_12_subState) {
        // State Vent_OFF
        case Vent_OFF:
        {
            NOTIFY_STATE_EXITED("ROOT.HVAC_Enabled.state_12.Vent_OFF");
        }
        break;
        // State Vent_On
        case Vent_On:
        {
            NOTIFY_STATE_EXITED("ROOT.HVAC_Enabled.state_12.Vent_On");
        }
        break;
        default:
            break;
    }
    state_12_subState = OMNonState;
    NOTIFY_STATE_EXITED("ROOT.HVAC_Enabled.state_12");
    
    NOTIFY_STATE_EXITED("ROOT.HVAC_Enabled");
}

IOxfReactive::TakeEventStatus Network::HVAC_Enabled_processEvent() {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    // State state_10
    if(state_10_processEvent() != eventNotConsumed)
        {
            res = eventConsumed;
            if(!IS_IN(HVAC_Enabled))
                {
                    return res;
                }
        }
    // State state_11
    if(state_11_processEvent() != eventNotConsumed)
        {
            res = eventConsumed;
            if(!IS_IN(HVAC_Enabled))
                {
                    return res;
                }
        }
    // State state_12
    if(state_12_processEvent() != eventNotConsumed)
        {
            res = eventConsumed;
            if(!IS_IN(HVAC_Enabled))
                {
                    return res;
                }
        }
    
    return res;
}

void Network::state_12_entDef() {
    NOTIFY_STATE_ENTERED("ROOT.HVAC_Enabled.state_12");
    NOTIFY_TRANSITION_STARTED("10");
    NOTIFY_STATE_ENTERED("ROOT.HVAC_Enabled.state_12.Vent_OFF");
    state_12_subState = Vent_OFF;
    state_12_active = Vent_OFF;
    NOTIFY_TRANSITION_TERMINATED("10");
}

IOxfReactive::TakeEventStatus Network::state_12_processEvent() {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    switch (state_12_active) {
        // State Vent_OFF
        case Vent_OFF:
        {
            if(IS_EVENT_TYPE_OF(ev_Vent_SwitchOn_ArchitecturalAnalysisPkg_id))
                {
                    NOTIFY_TRANSITION_STARTED("4");
                    NOTIFY_STATE_EXITED("ROOT.HVAC_Enabled.state_12.Vent_OFF");
                    //#[ transition 4 
                    OUT_PORT(pNetwork)->set_Vent_state(true);
                    //#]
                    NOTIFY_STATE_ENTERED("ROOT.HVAC_Enabled.state_12.Vent_On");
                    state_12_subState = Vent_On;
                    state_12_active = Vent_On;
                    NOTIFY_TRANSITION_TERMINATED("4");
                    res = eventConsumed;
                }
            else if(IS_EVENT_TYPE_OF(ev_CO2_AboveTH_ArchitecturalAnalysisPkg_id))
                {
                    NOTIFY_TRANSITION_STARTED("12");
                    NOTIFY_STATE_EXITED("ROOT.HVAC_Enabled.state_12.Vent_OFF");
                    //#[ transition 12 
                    OUT_PORT(pNetwork)->set_CO2_Alarm(true);
                    //#]
                    NOTIFY_STATE_ENTERED("ROOT.HVAC_Enabled.state_12.Vent_On");
                    state_12_subState = Vent_On;
                    state_12_active = Vent_On;
                    NOTIFY_TRANSITION_TERMINATED("12");
                    res = eventConsumed;
                }
            
            
        }
        break;
        // State Vent_On
        case Vent_On:
        {
            if(IS_EVENT_TYPE_OF(ev_CO2_BelowTH_ArchitecturalAnalysisPkg_id))
                {
                    NOTIFY_TRANSITION_STARTED("13");
                    NOTIFY_STATE_EXITED("ROOT.HVAC_Enabled.state_12.Vent_On");
                    //#[ transition 13 
                    OUT_PORT(pNetwork)->set_CO2_Alarm(false);
                    //#]
                    NOTIFY_STATE_ENTERED("ROOT.HVAC_Enabled.state_12.Vent_OFF");
                    state_12_subState = Vent_OFF;
                    state_12_active = Vent_OFF;
                    NOTIFY_TRANSITION_TERMINATED("13");
                    res = eventConsumed;
                }
            else if(IS_EVENT_TYPE_OF(ev_Vent_SwitchOff_ArchitecturalAnalysisPkg_id))
                {
                    NOTIFY_TRANSITION_STARTED("5");
                    NOTIFY_STATE_EXITED("ROOT.HVAC_Enabled.state_12.Vent_On");
                    //#[ transition 5 
                    OUT_PORT(pNetwork)->set_Vent_state(false);
                    //#]
                    NOTIFY_STATE_ENTERED("ROOT.HVAC_Enabled.state_12.Vent_OFF");
                    state_12_subState = Vent_OFF;
                    state_12_active = Vent_OFF;
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

void Network::state_11_entDef() {
    NOTIFY_STATE_ENTERED("ROOT.HVAC_Enabled.state_11");
    NOTIFY_TRANSITION_STARTED("9");
    NOTIFY_STATE_ENTERED("ROOT.HVAC_Enabled.state_11.Heating_OFF");
    state_11_subState = Heating_OFF;
    state_11_active = Heating_OFF;
    NOTIFY_TRANSITION_TERMINATED("9");
}

IOxfReactive::TakeEventStatus Network::state_11_processEvent() {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    switch (state_11_active) {
        // State Heating_OFF
        case Heating_OFF:
        {
            if(IS_EVENT_TYPE_OF(ev_Heating_SwitchOn_ArchitecturalAnalysisPkg_id))
                {
                    NOTIFY_TRANSITION_STARTED("2");
                    NOTIFY_STATE_EXITED("ROOT.HVAC_Enabled.state_11.Heating_OFF");
                    //#[ transition 2 
                    OUT_PORT(pNetwork)->set_Heating_state(true);
                    //#]
                    NOTIFY_STATE_ENTERED("ROOT.HVAC_Enabled.state_11.Heating_On");
                    state_11_subState = Heating_On;
                    state_11_active = Heating_On;
                    NOTIFY_TRANSITION_TERMINATED("2");
                    res = eventConsumed;
                }
            
            
        }
        break;
        // State Heating_On
        case Heating_On:
        {
            if(IS_EVENT_TYPE_OF(ev_Heating_SwitchOff_ArchitecturalAnalysisPkg_id))
                {
                    NOTIFY_TRANSITION_STARTED("3");
                    NOTIFY_STATE_EXITED("ROOT.HVAC_Enabled.state_11.Heating_On");
                    //#[ transition 3 
                    OUT_PORT(pNetwork)->set_Heating_state(false);
                    //#]
                    NOTIFY_STATE_ENTERED("ROOT.HVAC_Enabled.state_11.Heating_OFF");
                    state_11_subState = Heating_OFF;
                    state_11_active = Heating_OFF;
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

void Network::state_10_entDef() {
    NOTIFY_STATE_ENTERED("ROOT.HVAC_Enabled.state_10");
    NOTIFY_TRANSITION_STARTED("8");
    NOTIFY_STATE_ENTERED("ROOT.HVAC_Enabled.state_10.AC_OFF");
    pushNullTransition();
    state_10_subState = AC_OFF;
    state_10_active = AC_OFF;
    NOTIFY_TRANSITION_TERMINATED("8");
}

IOxfReactive::TakeEventStatus Network::state_10_processEvent() {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    switch (state_10_active) {
        // State AC_OFF
        case AC_OFF:
        {
            res = AC_OFF_handleEvent();
        }
        break;
        // State AC_ON
        case AC_ON:
        {
            res = AC_ON_handleEvent();
        }
        break;
        default:
            break;
    }
    return res;
}

IOxfReactive::TakeEventStatus Network::state_10_handleEvent() {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    if(IS_EVENT_TYPE_OF(ev_HVAC_SwitchOff_ArchitecturalAnalysisPkg_id))
        {
            NOTIFY_TRANSITION_STARTED("7");
            HVAC_Enabled_exit();
            //#[ transition 7 
            OUT_PORT(pNetwork)->set_HVAC_state(false);
            //#]
            NOTIFY_STATE_ENTERED("ROOT.HVAC_Disabled");
            rootState_subState = HVAC_Disabled;
            rootState_active = HVAC_Disabled;
            NOTIFY_TRANSITION_TERMINATED("7");
            res = eventConsumed;
        }
    
    return res;
}

IOxfReactive::TakeEventStatus Network::AC_ON_handleEvent() {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    if(IS_EVENT_TYPE_OF(ev_AC_SwitchOff_ArchitecturalAnalysisPkg_id))
        {
            NOTIFY_TRANSITION_STARTED("1");
            NOTIFY_STATE_EXITED("ROOT.HVAC_Enabled.state_10.AC_ON");
            //#[ transition 1 
            OUT_PORT(pNetwork)->set_AC_state(false);
            //#]
            NOTIFY_STATE_ENTERED("ROOT.HVAC_Enabled.state_10.AC_OFF");
            pushNullTransition();
            state_10_subState = AC_OFF;
            state_10_active = AC_OFF;
            NOTIFY_TRANSITION_TERMINATED("1");
            res = eventConsumed;
        }
    
    if(res == eventNotConsumed)
        {
            res = state_10_handleEvent();
        }
    return res;
}

IOxfReactive::TakeEventStatus Network::AC_OFF_handleEvent() {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    if(IS_EVENT_TYPE_OF(OMNullEventId))
        {
            NOTIFY_TRANSITION_STARTED("14");
            popNullTransition();
            NOTIFY_STATE_EXITED("ROOT.HVAC_Enabled.state_10.AC_OFF");
            NOTIFY_STATE_ENTERED("ROOT.HVAC_Enabled.state_10.AC_ON");
            state_10_subState = AC_ON;
            state_10_active = AC_ON;
            NOTIFY_TRANSITION_TERMINATED("14");
            res = eventConsumed;
        }
    else if(IS_EVENT_TYPE_OF(ev_AC_SwitchOn_ArchitecturalAnalysisPkg_id))
        {
            NOTIFY_TRANSITION_STARTED("0");
            popNullTransition();
            NOTIFY_STATE_EXITED("ROOT.HVAC_Enabled.state_10.AC_OFF");
            //#[ transition 0 
            OUT_PORT(pNetwork)->set_AC_state(true);
            //#]
            NOTIFY_STATE_ENTERED("ROOT.HVAC_Enabled.state_10.AC_ON");
            state_10_subState = AC_ON;
            state_10_active = AC_ON;
            NOTIFY_TRANSITION_TERMINATED("0");
            res = eventConsumed;
        }
    
    if(res == eventNotConsumed)
        {
            res = state_10_handleEvent();
        }
    return res;
}

IOxfReactive::TakeEventStatus Network::HVAC_Disabled_handleEvent() {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    if(IS_EVENT_TYPE_OF(ev_HVAC_SwitchOn_ArchitecturalAnalysisPkg_id))
        {
            NOTIFY_TRANSITION_STARTED("11");
            NOTIFY_STATE_EXITED("ROOT.HVAC_Disabled");
            //#[ transition 11 
            OUT_PORT(pNetwork)->set_HVAC_state(true);
            //#]
            NOTIFY_STATE_ENTERED("ROOT.HVAC_Enabled");
            rootState_subState = HVAC_Enabled;
            rootState_active = HVAC_Enabled;
            state_11_entDef();
            state_12_entDef();
            state_10_entDef();
            NOTIFY_TRANSITION_TERMINATED("11");
            res = eventConsumed;
        }
    
    return res;
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedNetwork::serializeAttributes(AOMSAttributes* aomsAttributes) const {
    aomsAttributes->addAttribute("temp_Network", x2String(myReal->temp_Network));
}

void OMAnimatedNetwork::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsHVAC", false, true);
    if(myReal->itsHVAC)
        {
            aomsRelations->ADD_ITEM(myReal->itsHVAC);
        }
    aomsRelations->addRelation("itsLights", false, true);
    if(myReal->itsLights)
        {
            aomsRelations->ADD_ITEM(myReal->itsLights);
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
    state_10_serializeStates(aomsState);
    state_11_serializeStates(aomsState);
    state_12_serializeStates(aomsState);
}

void OMAnimatedNetwork::state_12_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.HVAC_Enabled.state_12");
    switch (myReal->state_12_subState) {
        case Network::Vent_OFF:
        {
            Vent_OFF_serializeStates(aomsState);
        }
        break;
        case Network::Vent_On:
        {
            Vent_On_serializeStates(aomsState);
        }
        break;
        default:
            break;
    }
}

void OMAnimatedNetwork::Vent_On_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.HVAC_Enabled.state_12.Vent_On");
}

void OMAnimatedNetwork::Vent_OFF_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.HVAC_Enabled.state_12.Vent_OFF");
}

void OMAnimatedNetwork::state_11_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.HVAC_Enabled.state_11");
    switch (myReal->state_11_subState) {
        case Network::Heating_OFF:
        {
            Heating_OFF_serializeStates(aomsState);
        }
        break;
        case Network::Heating_On:
        {
            Heating_On_serializeStates(aomsState);
        }
        break;
        default:
            break;
    }
}

void OMAnimatedNetwork::Heating_On_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.HVAC_Enabled.state_11.Heating_On");
}

void OMAnimatedNetwork::Heating_OFF_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.HVAC_Enabled.state_11.Heating_OFF");
}

void OMAnimatedNetwork::state_10_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.HVAC_Enabled.state_10");
    switch (myReal->state_10_subState) {
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
    aomsState->addState("ROOT.HVAC_Enabled.state_10.AC_ON");
}

void OMAnimatedNetwork::AC_OFF_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.HVAC_Enabled.state_10.AC_OFF");
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
