/********************************************************************
	Rhapsody	: 9.0 
	Login		: 20181759
	Component	: DefaultComponent 
	Configuration 	: Lights_Simulation
	Model Element	: CO2_Sensor
//!	Generated Date	: Wed, 5, Jul 2023  
	File Path	: DefaultComponent\Lights_Simulation\CO2_Sensor.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX

#define _OMSTATECHART_ANIMATED
//#]

//## auto_generated
#include "CO2_Sensor.h"
//## link itsHVAC
#include "HVAC.h"
//## link itsNetwork
#include "Network.h"
//#[ ignore
#define ArchitecturalAnalysisPkg_CO2_Sensor_CO2_Sensor_SERIALIZE OM_NO_OP
//#]

//## package ArchitecturalAnalysisPkg

//## class CO2_Sensor
CO2_Sensor::CO2_Sensor(IOxfActive* theActiveContext) : CO2_Level_Ok(true) {
    NOTIFY_REACTIVE_CONSTRUCTOR(CO2_Sensor, CO2_Sensor(), 0, ArchitecturalAnalysisPkg_CO2_Sensor_CO2_Sensor_SERIALIZE);
    setActiveContext(theActiveContext, false);
    itsHVAC = NULL;
    itsNetwork = NULL;
    initStatechart();
}

CO2_Sensor::~CO2_Sensor() {
    NOTIFY_DESTRUCTOR(~CO2_Sensor, true);
    cleanUpRelations();
}

int CO2_Sensor::getCO2_Level_Ok() const {
    return CO2_Level_Ok;
}

void CO2_Sensor::setCO2_Level_Ok(int p_CO2_Level_Ok) {
    CO2_Level_Ok = p_CO2_Level_Ok;
}

HVAC* CO2_Sensor::getItsHVAC() const {
    return itsHVAC;
}

void CO2_Sensor::setItsHVAC(HVAC* p_HVAC) {
    if(p_HVAC != NULL)
        {
            p_HVAC->_setItsCO2_Sensor(this);
        }
    _setItsHVAC(p_HVAC);
}

Network* CO2_Sensor::getItsNetwork() const {
    return itsNetwork;
}

void CO2_Sensor::setItsNetwork(Network* p_Network) {
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

bool CO2_Sensor::startBehavior() {
    bool done = false;
    done = OMReactive::startBehavior();
    return done;
}

void CO2_Sensor::initStatechart() {
    rootState_subState = OMNonState;
    rootState_active = OMNonState;
}

void CO2_Sensor::cleanUpRelations() {
    if(itsHVAC != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsHVAC");
            CO2_Sensor* p_CO2_Sensor = itsHVAC->getItsCO2_Sensor();
            if(p_CO2_Sensor != NULL)
                {
                    itsHVAC->__setItsCO2_Sensor(NULL);
                }
            itsHVAC = NULL;
        }
    if(itsNetwork != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsNetwork");
            itsNetwork = NULL;
        }
}

void CO2_Sensor::__setItsHVAC(HVAC* p_HVAC) {
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

void CO2_Sensor::_setItsHVAC(HVAC* p_HVAC) {
    if(itsHVAC != NULL)
        {
            itsHVAC->__setItsCO2_Sensor(NULL);
        }
    __setItsHVAC(p_HVAC);
}

void CO2_Sensor::_clearItsHVAC() {
    NOTIFY_RELATION_CLEARED("itsHVAC");
    itsHVAC = NULL;
}

void CO2_Sensor::rootState_entDef() {
    {
        NOTIFY_STATE_ENTERED("ROOT");
        NOTIFY_TRANSITION_STARTED("0");
        NOTIFY_STATE_ENTERED("ROOT.Normal_CO2_level");
        rootState_subState = Normal_CO2_level;
        rootState_active = Normal_CO2_level;
        //#[ state Normal_CO2_level.(Entry) 
        CO2_Level_Ok = true;
        
        //#]
        NOTIFY_TRANSITION_TERMINATED("0");
    }
}

IOxfReactive::TakeEventStatus CO2_Sensor::rootState_processEvent() {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    switch (rootState_active) {
        // State Normal_CO2_level
        case Normal_CO2_level:
        {
            if(IS_EVENT_TYPE_OF(ev_CO2_Level_OverThreshold_ArchitecturalAnalysisPkg_id))
                {
                    NOTIFY_TRANSITION_STARTED("1");
                    NOTIFY_STATE_EXITED("ROOT.Normal_CO2_level");
                    NOTIFY_STATE_ENTERED("ROOT.High_CO2_Level");
                    rootState_subState = High_CO2_Level;
                    rootState_active = High_CO2_Level;
                    //#[ state High_CO2_Level.(Entry) 
                    CO2_Level_Ok = false;
                    //#]
                    NOTIFY_TRANSITION_TERMINATED("1");
                    res = eventConsumed;
                }
            
        }
        break;
        // State High_CO2_Level
        case High_CO2_Level:
        {
            if(IS_EVENT_TYPE_OF(ev_CO2_Level_BelowThreshold_ArchitecturalAnalysisPkg_id))
                {
                    NOTIFY_TRANSITION_STARTED("2");
                    NOTIFY_STATE_EXITED("ROOT.High_CO2_Level");
                    NOTIFY_STATE_ENTERED("ROOT.Normal_CO2_level");
                    rootState_subState = Normal_CO2_level;
                    rootState_active = Normal_CO2_level;
                    //#[ state Normal_CO2_level.(Entry) 
                    CO2_Level_Ok = true;
                    
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
void OMAnimatedCO2_Sensor::serializeAttributes(AOMSAttributes* aomsAttributes) const {
    aomsAttributes->addAttribute("CO2_Level_Ok", x2String(myReal->CO2_Level_Ok));
}

void OMAnimatedCO2_Sensor::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsNetwork", false, true);
    if(myReal->itsNetwork)
        {
            aomsRelations->ADD_ITEM(myReal->itsNetwork);
        }
    aomsRelations->addRelation("itsHVAC", false, true);
    if(myReal->itsHVAC)
        {
            aomsRelations->ADD_ITEM(myReal->itsHVAC);
        }
}

void OMAnimatedCO2_Sensor::rootState_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT");
    switch (myReal->rootState_subState) {
        case CO2_Sensor::Normal_CO2_level:
        {
            Normal_CO2_level_serializeStates(aomsState);
        }
        break;
        case CO2_Sensor::High_CO2_Level:
        {
            High_CO2_Level_serializeStates(aomsState);
        }
        break;
        default:
            break;
    }
}

void OMAnimatedCO2_Sensor::Normal_CO2_level_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.Normal_CO2_level");
}

void OMAnimatedCO2_Sensor::High_CO2_Level_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.High_CO2_Level");
}
//#]

IMPLEMENT_REACTIVE_META_P(CO2_Sensor, ArchitecturalAnalysisPkg, ArchitecturalAnalysisPkg, false, OMAnimatedCO2_Sensor)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\Lights_Simulation\CO2_Sensor.cpp
*********************************************************************/
