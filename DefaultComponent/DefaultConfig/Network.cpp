/********************************************************************
	Rhapsody	: 9.0 
	Login		: Yang
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Network
//!	Generated Date	: Sun, 9, Jul 2023  
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
//#[ ignore
#define ArchitecturalAnalysisPkg_Network_Network_SERIALIZE OM_NO_OP
//#]

//## package ArchitecturalAnalysisPkg

//## class Network
//#[ ignore
Network::pNetwork_C::pNetwork_C() : _p_(0) {
    itsI_HVAC = NULL;
}

Network::pNetwork_C::~pNetwork_C() {
    cleanUpRelations();
}

I_HVAC* Network::pNetwork_C::getItsI_HVAC() {
    return this;
}

I_HVAC* Network::pNetwork_C::getOutBound() {
    return this;
}

int Network::pNetwork_C::getTemp() {
    int res = 0;
    if (itsI_HVAC != NULL) {
        res = itsI_HVAC->getTemp();
    }
    return res;
}

void Network::pNetwork_C::setTemp(int arg_temp) {
    
    if (itsI_HVAC != NULL) {
        itsI_HVAC->setTemp(arg_temp);
    }
    
}

void Network::pNetwork_C::setItsI_HVAC(I_HVAC* p_I_HVAC) {
    itsI_HVAC = p_I_HVAC;
}

void Network::pNetwork_C::cleanUpRelations() {
    if(itsI_HVAC != NULL)
        {
            itsI_HVAC = NULL;
        }
}
//#]

Network::Network(IOxfActive* theActiveContext) : temp_Network(26) {
    NOTIFY_REACTIVE_CONSTRUCTOR(Network, Network(), 0, ArchitecturalAnalysisPkg_Network_Network_SERIALIZE);
    setActiveContext(theActiveContext, false);
    itsHVAC = NULL;
    initStatechart();
}

Network::~Network() {
    NOTIFY_DESTRUCTOR(~Network, true);
    cleanUpRelations();
    cancelTimeouts();
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

bool Network::startBehavior() {
    bool done = false;
    done = OMReactive::startBehavior();
    return done;
}

void Network::initStatechart() {
    rootState_subState = OMNonState;
    rootState_active = OMNonState;
    rootState_timeout = NULL;
}

void Network::cleanUpRelations() {
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

void Network::cancelTimeouts() {
    cancel(rootState_timeout);
}

bool Network::cancelTimeout(const IOxfTimeout* arg) {
    bool res = false;
    if(rootState_timeout == arg)
        {
            rootState_timeout = NULL;
            res = true;
        }
    return res;
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
        NOTIFY_TRANSITION_STARTED("0");
        NOTIFY_STATE_ENTERED("ROOT.On");
        rootState_subState = On;
        rootState_active = On;
        rootState_timeout = scheduleTimeout(2000, "ROOT.On");
        NOTIFY_TRANSITION_TERMINATED("0");
    }
}

IOxfReactive::TakeEventStatus Network::rootState_processEvent() {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    // State On
    if(rootState_active == On)
        {
            if(IS_EVENT_TYPE_OF(OMTimeoutEventId))
                {
                    if(getCurrentEvent() == rootState_timeout)
                        {
                            NOTIFY_TRANSITION_STARTED("1");
                            cancel(rootState_timeout);
                            NOTIFY_STATE_EXITED("ROOT.On");
                            //#[ transition 1 
                            OUT_PORT(pNetwork)->getTemp();
                            OUT_PORT(pNetwork)->setTemp(20);
                            //#]
                            NOTIFY_STATE_ENTERED("ROOT.On");
                            rootState_subState = On;
                            rootState_active = On;
                            rootState_timeout = scheduleTimeout(2000, "ROOT.On");
                            NOTIFY_TRANSITION_TERMINATED("1");
                            res = eventConsumed;
                        }
                }
            
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
}

void OMAnimatedNetwork::rootState_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT");
    if(myReal->rootState_subState == Network::On)
        {
            On_serializeStates(aomsState);
        }
}

void OMAnimatedNetwork::On_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.On");
}
//#]

IMPLEMENT_REACTIVE_META_P(Network, ArchitecturalAnalysisPkg, ArchitecturalAnalysisPkg, false, OMAnimatedNetwork)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Network.cpp
*********************************************************************/
