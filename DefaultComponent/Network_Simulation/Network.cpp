/********************************************************************
	Rhapsody	: 9.0 
	Login		: Yang
	Component	: DefaultComponent 
	Configuration 	: Network_Simulation
	Model Element	: Network
//!	Generated Date	: Sat, 15, Jul 2023  
	File Path	: DefaultComponent\Network_Simulation\Network.cpp
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
//## link itsWeather_Forecast
#include "Weather_Forecast.h"
//## link itsMovement_Sensor
#include "Movement_Sensor.h"
//## link itsOccupancy_Sensor
#include "Occupancy_Sensor.h"
//#[ ignore
#define ArchitecturalAnalysisPkg_Network_Network_SERIALIZE OM_NO_OP
//#]

//## package ArchitecturalAnalysisPkg

//## class Network
//#[ ignore
Network::pNetwork_C::pNetwork_C() : _p_(0) {
    itsI_BS = NULL;
    itsI_CO2 = NULL;
    itsI_FS = NULL;
    itsI_HVAC = NULL;
    itsI_Light = NULL;
    itsI_Mic = NULL;
    itsI_OS = NULL;
    itsI_SS = NULL;
    itsI_Spkr = NULL;
    itsI_WC = NULL;
    itsI_Weather = NULL;
}

Network::pNetwork_C::~pNetwork_C() {
    cleanUpRelations();
}

bool Network::pNetwork_C::getCold() {
    bool res = false;
    if (itsI_Weather != NULL) {
        res = itsI_Weather->getCold();
    }
    return res;
}

bool Network::pNetwork_C::getHot() {
    bool res = false;
    if (itsI_Weather != NULL) {
        res = itsI_Weather->getHot();
    }
    return res;
}

int Network::pNetwork_C::getItensity() {
    int res = 0;
    if (itsI_Light != NULL) {
        res = itsI_Light->getItensity();
    }
    return res;
}

I_BS* Network::pNetwork_C::getItsI_BS() {
    return this;
}

I_CO2* Network::pNetwork_C::getItsI_CO2() {
    return this;
}

I_FS* Network::pNetwork_C::getItsI_FS() {
    return this;
}

I_HVAC* Network::pNetwork_C::getItsI_HVAC() {
    return this;
}

I_Light* Network::pNetwork_C::getItsI_Light() {
    return this;
}

I_Mic* Network::pNetwork_C::getItsI_Mic() {
    return this;
}

I_OS* Network::pNetwork_C::getItsI_OS() {
    return this;
}

I_SS* Network::pNetwork_C::getItsI_SS() {
    return this;
}

I_Spkr* Network::pNetwork_C::getItsI_Spkr() {
    return this;
}

I_WC* Network::pNetwork_C::getItsI_WC() {
    return this;
}

I_Weather* Network::pNetwork_C::getItsI_Weather() {
    return this;
}

bool Network::pNetwork_C::getOccupied() {
    bool res = false;
    if (itsI_OS != NULL) {
        res = itsI_OS->getOccupied();
    }
    return res;
}

Network::pNetwork_C* Network::pNetwork_C::getOutBound() {
    return this;
}

bool Network::pNetwork_C::getState() {
    bool res = false;
    if (itsI_FS != NULL) {
        res = itsI_FS->getState();
    }
    return res;
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

void Network::pNetwork_C::login() {
    
    if (itsI_BS != NULL) {
        itsI_BS->login();
    }
    
}

void Network::pNetwork_C::setCold(bool arg_cold) {
    
    if (itsI_Weather != NULL) {
        itsI_Weather->setCold(arg_cold);
    }
    
}

void Network::pNetwork_C::setHot(bool arg_hot) {
    
    if (itsI_Weather != NULL) {
        itsI_Weather->setHot(arg_hot);
    }
    
}

void Network::pNetwork_C::setIntensity(int arg_intensity) {
    
    if (itsI_Light != NULL) {
        itsI_Light->setIntensity(arg_intensity);
    }
    
}

void Network::pNetwork_C::setOccupied(bool arg_occupied) {
    
    if (itsI_OS != NULL) {
        itsI_OS->setOccupied(arg_occupied);
    }
    
}

void Network::pNetwork_C::setState(bool argState) {
    
    if (itsI_FS != NULL) {
        itsI_FS->setState(argState);
    }
    
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

void Network::pNetwork_C::setItsI_BS(I_BS* p_I_BS) {
    itsI_BS = p_I_BS;
}

void Network::pNetwork_C::setItsI_CO2(I_CO2* p_I_CO2) {
    itsI_CO2 = p_I_CO2;
}

void Network::pNetwork_C::setItsI_FS(I_FS* p_I_FS) {
    itsI_FS = p_I_FS;
}

void Network::pNetwork_C::setItsI_HVAC(I_HVAC* p_I_HVAC) {
    itsI_HVAC = p_I_HVAC;
}

void Network::pNetwork_C::setItsI_Light(I_Light* p_I_Light) {
    itsI_Light = p_I_Light;
}

void Network::pNetwork_C::setItsI_Mic(I_Mic* p_I_Mic) {
    itsI_Mic = p_I_Mic;
}

void Network::pNetwork_C::setItsI_OS(I_OS* p_I_OS) {
    itsI_OS = p_I_OS;
}

void Network::pNetwork_C::setItsI_SS(I_SS* p_I_SS) {
    itsI_SS = p_I_SS;
}

void Network::pNetwork_C::setItsI_Spkr(I_Spkr* p_I_Spkr) {
    itsI_Spkr = p_I_Spkr;
}

void Network::pNetwork_C::setItsI_WC(I_WC* p_I_WC) {
    itsI_WC = p_I_WC;
}

void Network::pNetwork_C::setItsI_Weather(I_Weather* p_I_Weather) {
    itsI_Weather = p_I_Weather;
}

void Network::pNetwork_C::cleanUpRelations() {
    if(itsI_BS != NULL)
        {
            itsI_BS = NULL;
        }
    if(itsI_CO2 != NULL)
        {
            itsI_CO2 = NULL;
        }
    if(itsI_FS != NULL)
        {
            itsI_FS = NULL;
        }
    if(itsI_HVAC != NULL)
        {
            itsI_HVAC = NULL;
        }
    if(itsI_Light != NULL)
        {
            itsI_Light = NULL;
        }
    if(itsI_Mic != NULL)
        {
            itsI_Mic = NULL;
        }
    if(itsI_OS != NULL)
        {
            itsI_OS = NULL;
        }
    if(itsI_SS != NULL)
        {
            itsI_SS = NULL;
        }
    if(itsI_Spkr != NULL)
        {
            itsI_Spkr = NULL;
        }
    if(itsI_WC != NULL)
        {
            itsI_WC = NULL;
        }
    if(itsI_Weather != NULL)
        {
            itsI_Weather = NULL;
        }
}
//#]

Network::Network(IOxfActive* theActiveContext) {
    NOTIFY_REACTIVE_CONSTRUCTOR(Network, Network(), 0, ArchitecturalAnalysisPkg_Network_Network_SERIALIZE);
    setActiveContext(theActiveContext, false);
    itsCO2_Sensor = NULL;
    itsHVAC = NULL;
    itsLights = NULL;
    itsMovement_Sensor = NULL;
    itsOccupancy_Sensor = NULL;
    itsWeather_Forecast = NULL;
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
    if(p_Lights != NULL)
        {
            p_Lights->_setItsNetwork(this);
        }
    _setItsLights(p_Lights);
}

bool Network::startBehavior() {
    bool done = false;
    done = OMReactive::startBehavior();
    return done;
}

void Network::initStatechart() {
    rootState_subState = OMNonState;
    rootState_active = OMNonState;
    On_subState = OMNonState;
    rootState_timeout = NULL;
    On_timeout = NULL;
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
            Network* p_Network = itsLights->getItsNetwork();
            if(p_Network != NULL)
                {
                    itsLights->__setItsNetwork(NULL);
                }
            itsLights = NULL;
        }
    if(itsMovement_Sensor != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsMovement_Sensor");
            Network* p_Network = itsMovement_Sensor->getItsNetwork();
            if(p_Network != NULL)
                {
                    itsMovement_Sensor->__setItsNetwork(NULL);
                }
            itsMovement_Sensor = NULL;
        }
    if(itsOccupancy_Sensor != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsOccupancy_Sensor");
            Network* p_Network = itsOccupancy_Sensor->getItsNetwork();
            if(p_Network != NULL)
                {
                    itsOccupancy_Sensor->__setItsNetwork(NULL);
                }
            itsOccupancy_Sensor = NULL;
        }
    if(itsWeather_Forecast != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsWeather_Forecast");
            Network* p_Network = itsWeather_Forecast->getItsNetwork();
            if(p_Network != NULL)
                {
                    itsWeather_Forecast->__setItsNetwork(NULL);
                }
            itsWeather_Forecast = NULL;
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

Weather_Forecast* Network::getItsWeather_Forecast() const {
    return itsWeather_Forecast;
}

void Network::setItsWeather_Forecast(Weather_Forecast* p_Weather_Forecast) {
    if(p_Weather_Forecast != NULL)
        {
            p_Weather_Forecast->_setItsNetwork(this);
        }
    _setItsWeather_Forecast(p_Weather_Forecast);
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

void Network::__setItsWeather_Forecast(Weather_Forecast* p_Weather_Forecast) {
    itsWeather_Forecast = p_Weather_Forecast;
    if(p_Weather_Forecast != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsWeather_Forecast", p_Weather_Forecast, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsWeather_Forecast");
        }
}

void Network::_setItsWeather_Forecast(Weather_Forecast* p_Weather_Forecast) {
    if(itsWeather_Forecast != NULL)
        {
            itsWeather_Forecast->__setItsNetwork(NULL);
        }
    __setItsWeather_Forecast(p_Weather_Forecast);
}

void Network::_clearItsWeather_Forecast() {
    NOTIFY_RELATION_CLEARED("itsWeather_Forecast");
    itsWeather_Forecast = NULL;
}

Movement_Sensor* Network::getItsMovement_Sensor() const {
    return itsMovement_Sensor;
}

void Network::setItsMovement_Sensor(Movement_Sensor* p_Movement_Sensor) {
    if(p_Movement_Sensor != NULL)
        {
            p_Movement_Sensor->_setItsNetwork(this);
        }
    _setItsMovement_Sensor(p_Movement_Sensor);
}

Occupancy_Sensor* Network::getItsOccupancy_Sensor() const {
    return itsOccupancy_Sensor;
}

void Network::setItsOccupancy_Sensor(Occupancy_Sensor* p_Occupancy_Sensor) {
    if(p_Occupancy_Sensor != NULL)
        {
            p_Occupancy_Sensor->_setItsNetwork(this);
        }
    _setItsOccupancy_Sensor(p_Occupancy_Sensor);
}

void Network::__setItsLights(Lights* p_Lights) {
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

void Network::_setItsLights(Lights* p_Lights) {
    if(itsLights != NULL)
        {
            itsLights->__setItsNetwork(NULL);
        }
    __setItsLights(p_Lights);
}

void Network::_clearItsLights() {
    NOTIFY_RELATION_CLEARED("itsLights");
    itsLights = NULL;
}

void Network::__setItsMovement_Sensor(Movement_Sensor* p_Movement_Sensor) {
    itsMovement_Sensor = p_Movement_Sensor;
    if(p_Movement_Sensor != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsMovement_Sensor", p_Movement_Sensor, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsMovement_Sensor");
        }
}

void Network::_setItsMovement_Sensor(Movement_Sensor* p_Movement_Sensor) {
    if(itsMovement_Sensor != NULL)
        {
            itsMovement_Sensor->__setItsNetwork(NULL);
        }
    __setItsMovement_Sensor(p_Movement_Sensor);
}

void Network::_clearItsMovement_Sensor() {
    NOTIFY_RELATION_CLEARED("itsMovement_Sensor");
    itsMovement_Sensor = NULL;
}

void Network::__setItsOccupancy_Sensor(Occupancy_Sensor* p_Occupancy_Sensor) {
    itsOccupancy_Sensor = p_Occupancy_Sensor;
    if(p_Occupancy_Sensor != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsOccupancy_Sensor", p_Occupancy_Sensor, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsOccupancy_Sensor");
        }
}

void Network::_setItsOccupancy_Sensor(Occupancy_Sensor* p_Occupancy_Sensor) {
    if(itsOccupancy_Sensor != NULL)
        {
            itsOccupancy_Sensor->__setItsNetwork(NULL);
        }
    __setItsOccupancy_Sensor(p_Occupancy_Sensor);
}

void Network::_clearItsOccupancy_Sensor() {
    NOTIFY_RELATION_CLEARED("itsOccupancy_Sensor");
    itsOccupancy_Sensor = NULL;
}

void Network::cancelTimeouts() {
    cancel(rootState_timeout);
    cancel(On_timeout);
}

bool Network::cancelTimeout(const IOxfTimeout* arg) {
    bool res = false;
    if(rootState_timeout == arg)
        {
            rootState_timeout = NULL;
            res = true;
        }
    if(On_timeout == arg)
        {
            On_timeout = NULL;
            res = true;
        }
    return res;
}

void Network::rootState_entDef() {
    {
        NOTIFY_STATE_ENTERED("ROOT");
        NOTIFY_TRANSITION_STARTED("0");
        NOTIFY_STATE_ENTERED("ROOT.Off");
        rootState_subState = Off;
        rootState_active = Off;
        NOTIFY_TRANSITION_TERMINATED("0");
    }
}

IOxfReactive::TakeEventStatus Network::rootState_processEvent() {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    switch (rootState_active) {
        // State Off
        case Off:
        {
            if(IS_EVENT_TYPE_OF(ev_turnOnLight_ArchitecturalAnalysisPkg_id))
                {
                    NOTIFY_TRANSITION_STARTED("2");
                    NOTIFY_STATE_EXITED("ROOT.Off");
                    //#[ transition 2 
                    OUT_PORT(pNetwork)->setIntensity(5);
                    //#]
                    On_entDef();
                    NOTIFY_TRANSITION_TERMINATED("2");
                    res = eventConsumed;
                }
            
        }
        break;
        // State Op
        case Op:
        {
            res = Op_handleEvent();
        }
        break;
        case accepttimeevent_7:
        {
            res = accepttimeevent_7_handleEvent();
        }
        break;
        case accepttimeevent_6:
        {
            if(IS_EVENT_TYPE_OF(OMNullEventId))
                {
                    if(TRUE)
                        {
                            NOTIFY_TRANSITION_STARTED("5");
                            NOTIFY_TRANSITION_STARTED("7");
                            popNullTransition();
                            NOTIFY_STATE_EXITED("ROOT.accepttimeevent_6");
                            On_entDef();
                            NOTIFY_TRANSITION_TERMINATED("7");
                            NOTIFY_TRANSITION_TERMINATED("5");
                            res = eventConsumed;
                        }
                }
            
        }
        break;
        default:
            break;
    }
    return res;
}

void Network::On_entDef() {
    NOTIFY_STATE_ENTERED("ROOT.On");
    rootState_subState = On;
    rootState_timeout = scheduleTimeout(3000, "ROOT.On");
    NOTIFY_TRANSITION_STARTED("3");
    NOTIFY_STATE_ENTERED("ROOT.On.Op");
    On_subState = Op;
    rootState_active = Op;
    On_timeout = scheduleTimeout(1000, "ROOT.On.Op");
    NOTIFY_TRANSITION_TERMINATED("3");
}

IOxfReactive::TakeEventStatus Network::On_handleEvent() {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    if(IS_EVENT_TYPE_OF(OMTimeoutEventId))
        {
            if(getCurrentEvent() == rootState_timeout)
                {
                    NOTIFY_TRANSITION_STARTED("4");
                    switch (On_subState) {
                        // State Op
                        case Op:
                        {
                            cancel(On_timeout);
                            NOTIFY_STATE_EXITED("ROOT.On.Op");
                        }
                        break;
                        case accepttimeevent_7:
                        {
                            popNullTransition();
                            NOTIFY_STATE_EXITED("ROOT.On.accepttimeevent_7");
                        }
                        break;
                        default:
                            break;
                    }
                    On_subState = OMNonState;
                    cancel(rootState_timeout);
                    NOTIFY_STATE_EXITED("ROOT.On");
                    NOTIFY_STATE_ENTERED("ROOT.accepttimeevent_6");
                    pushNullTransition();
                    rootState_subState = accepttimeevent_6;
                    rootState_active = accepttimeevent_6;
                    NOTIFY_TRANSITION_TERMINATED("4");
                    res = eventConsumed;
                }
        }
    else if(IS_EVENT_TYPE_OF(ev_TurnOff_Light_ArchitecturalAnalysisPkg_id))
        {
            NOTIFY_TRANSITION_STARTED("1");
            switch (On_subState) {
                // State Op
                case Op:
                {
                    cancel(On_timeout);
                    NOTIFY_STATE_EXITED("ROOT.On.Op");
                }
                break;
                case accepttimeevent_7:
                {
                    popNullTransition();
                    NOTIFY_STATE_EXITED("ROOT.On.accepttimeevent_7");
                }
                break;
                default:
                    break;
            }
            On_subState = OMNonState;
            cancel(rootState_timeout);
            NOTIFY_STATE_EXITED("ROOT.On");
            //#[ transition 1 
            OUT_PORT(pNetwork)->setIntensity(0);
            //#]
            NOTIFY_STATE_ENTERED("ROOT.Off");
            rootState_subState = Off;
            rootState_active = Off;
            NOTIFY_TRANSITION_TERMINATED("1");
            res = eventConsumed;
        }
    
    return res;
}

IOxfReactive::TakeEventStatus Network::Op_handleEvent() {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    if(IS_EVENT_TYPE_OF(OMTimeoutEventId))
        {
            if(getCurrentEvent() == On_timeout)
                {
                    NOTIFY_TRANSITION_STARTED("8");
                    cancel(On_timeout);
                    NOTIFY_STATE_EXITED("ROOT.On.Op");
                    NOTIFY_STATE_ENTERED("ROOT.On.accepttimeevent_7");
                    pushNullTransition();
                    On_subState = accepttimeevent_7;
                    rootState_active = accepttimeevent_7;
                    NOTIFY_TRANSITION_TERMINATED("8");
                    res = eventConsumed;
                }
        }
    
    if(res == eventNotConsumed)
        {
            res = On_handleEvent();
        }
    return res;
}

IOxfReactive::TakeEventStatus Network::accepttimeevent_7_handleEvent() {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    if(IS_EVENT_TYPE_OF(OMNullEventId))
        {
            NOTIFY_TRANSITION_STARTED("9");
            popNullTransition();
            NOTIFY_STATE_EXITED("ROOT.On.accepttimeevent_7");
            NOTIFY_STATE_ENTERED("ROOT.On.Op");
            On_subState = Op;
            rootState_active = Op;
            On_timeout = scheduleTimeout(1000, "ROOT.On.Op");
            NOTIFY_TRANSITION_TERMINATED("9");
            res = eventConsumed;
        }
    
    if(res == eventNotConsumed)
        {
            res = On_handleEvent();
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
    aomsRelations->addRelation("itsWeather_Forecast", false, true);
    if(myReal->itsWeather_Forecast)
        {
            aomsRelations->ADD_ITEM(myReal->itsWeather_Forecast);
        }
    aomsRelations->addRelation("itsMovement_Sensor", false, true);
    if(myReal->itsMovement_Sensor)
        {
            aomsRelations->ADD_ITEM(myReal->itsMovement_Sensor);
        }
    aomsRelations->addRelation("itsLights", false, true);
    if(myReal->itsLights)
        {
            aomsRelations->ADD_ITEM(myReal->itsLights);
        }
    aomsRelations->addRelation("itsOccupancy_Sensor", false, true);
    if(myReal->itsOccupancy_Sensor)
        {
            aomsRelations->ADD_ITEM(myReal->itsOccupancy_Sensor);
        }
}

void OMAnimatedNetwork::rootState_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT");
    switch (myReal->rootState_subState) {
        case Network::Off:
        {
            Off_serializeStates(aomsState);
        }
        break;
        case Network::On:
        {
            On_serializeStates(aomsState);
        }
        break;
        case Network::accepttimeevent_6:
        {
            accepttimeevent_6_serializeStates(aomsState);
        }
        break;
        default:
            break;
    }
}

void OMAnimatedNetwork::On_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.On");
    switch (myReal->On_subState) {
        case Network::Op:
        {
            Op_serializeStates(aomsState);
        }
        break;
        case Network::accepttimeevent_7:
        {
            accepttimeevent_7_serializeStates(aomsState);
        }
        break;
        default:
            break;
    }
}

void OMAnimatedNetwork::Op_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.On.Op");
}

void OMAnimatedNetwork::accepttimeevent_7_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.On.accepttimeevent_7");
}

void OMAnimatedNetwork::Off_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.Off");
}

void OMAnimatedNetwork::accepttimeevent_6_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.accepttimeevent_6");
}
//#]

IMPLEMENT_REACTIVE_META_P(Network, ArchitecturalAnalysisPkg, ArchitecturalAnalysisPkg, false, OMAnimatedNetwork)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\Network_Simulation\Network.cpp
*********************************************************************/
