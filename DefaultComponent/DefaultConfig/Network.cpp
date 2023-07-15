/********************************************************************
	Rhapsody	: 9.0 
	Login		: Administrator
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Network
//!	Generated Date	: Sat, 15, Jul 2023  
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
//## link itsWeather_Forecast
#include "Weather_Forecast.h"
//## link itsMovement_Sensor
#include "Movement_Sensor.h"
//## link itsOccupancy_Sensor
#include "Occupancy_Sensor.h"
//#[ ignore
#define ArchitecturalAnalysisPkg_Network_Network_SERIALIZE OM_NO_OP

#define OMAnim_ArchitecturalAnalysisPkg_Network_setIntensity_int_UNSERIALIZE_ARGS OP_UNSER(OMDestructiveString2X,p_intensity)

#define OMAnim_ArchitecturalAnalysisPkg_Network_setIntensity_int_SERIALIZE_RET_VAL

#define OMAnim_ArchitecturalAnalysisPkg_Network_setLightState_bool_UNSERIALIZE_ARGS OP_UNSER(OMDestructiveString2X,p_lightState)

#define OMAnim_ArchitecturalAnalysisPkg_Network_setLightState_bool_SERIALIZE_RET_VAL
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
    itsI_MS = NULL;
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

bool Network::pNetwork_C::get() {
    bool res = false;
    if (itsI_MS != NULL) {
        res = itsI_MS->get();
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

I_MS* Network::pNetwork_C::getItsI_MS() {
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
    if (itsI_Light != NULL) {
        res = itsI_Light->getState();
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

void Network::pNetwork_C::set(bool arg) {
    
    if (itsI_MS != NULL) {
        itsI_MS->set(arg);
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

void Network::pNetwork_C::setState(bool arg) {
    
    if (itsI_Light != NULL) {
        itsI_Light->setState(arg);
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

void Network::pNetwork_C::setItsI_MS(I_MS* p_I_MS) {
    itsI_MS = p_I_MS;
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
    if(itsI_MS != NULL)
        {
            itsI_MS = NULL;
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

Network::Network(IOxfActive* theActiveContext) : intensity(0), lightState(false), occupied(false) {
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
    rootState_timeout = NULL;
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

int Network::getIntensity() const {
    return intensity;
}

void Network::setIntensity(int p_intensity) {
    intensity = p_intensity;
    NOTIFY_SET_OPERATION;
}

bool Network::getLightState() const {
    return lightState;
}

void Network::setLightState(bool p_lightState) {
    lightState = p_lightState;
    NOTIFY_SET_OPERATION;
}

bool Network::getOccupied() const {
    return occupied;
}

void Network::setOccupied(bool p_occupied) {
    occupied = p_occupied;
}

void Network::rootState_entDef() {
    {
        NOTIFY_STATE_ENTERED("ROOT");
        NOTIFY_TRANSITION_STARTED("0");
        NOTIFY_STATE_ENTERED("ROOT.Off");
        pushNullTransition();
        rootState_subState = Off;
        rootState_active = Off;
        //#[ state Off.(Entry) 
        intensity=intensity;
        lightState=lightState;
        OUT_PORT(pNetwork)->setIntensity(intensity);
        //#]
        rootState_timeout = scheduleTimeout(200, "ROOT.Off");
        NOTIFY_TRANSITION_TERMINATED("0");
    }
}

IOxfReactive::TakeEventStatus Network::rootState_processEvent() {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    switch (rootState_active) {
        // State Off
        case Off:
        {
            res = Off_handleEvent();
        }
        break;
        case accepttimeevent_7:
        {
            if(IS_EVENT_TYPE_OF(OMNullEventId))
                {
                    NOTIFY_TRANSITION_STARTED("8");
                    popNullTransition();
                    NOTIFY_STATE_EXITED("ROOT.accepttimeevent_7");
                    NOTIFY_STATE_ENTERED("ROOT.On");
                    pushNullTransition();
                    rootState_subState = On;
                    rootState_active = On;
                    //#[ state On.(Entry) 
                    intensity=intensity;
                    lightState=lightState;
                    OUT_PORT(pNetwork)->setIntensity(intensity);
                    //#]
                    rootState_timeout = scheduleTimeout(200, "ROOT.On");
                    NOTIFY_TRANSITION_TERMINATED("8");
                    res = eventConsumed;
                }
            
        }
        break;
        case accepttimeevent_9:
        {
            if(IS_EVENT_TYPE_OF(OMNullEventId))
                {
                    NOTIFY_TRANSITION_STARTED("6");
                    popNullTransition();
                    NOTIFY_STATE_EXITED("ROOT.accepttimeevent_9");
                    NOTIFY_STATE_ENTERED("ROOT.Off");
                    pushNullTransition();
                    rootState_subState = Off;
                    rootState_active = Off;
                    //#[ state Off.(Entry) 
                    intensity=intensity;
                    lightState=lightState;
                    OUT_PORT(pNetwork)->setIntensity(intensity);
                    //#]
                    rootState_timeout = scheduleTimeout(200, "ROOT.Off");
                    NOTIFY_TRANSITION_TERMINATED("6");
                    res = eventConsumed;
                }
            
        }
        break;
        // State On
        case On:
        {
            res = On_handleEvent();
        }
        break;
        default:
            break;
    }
    return res;
}

IOxfReactive::TakeEventStatus Network::On_handleEvent() {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    if(IS_EVENT_TYPE_OF(OMTimeoutEventId))
        {
            if(getCurrentEvent() == rootState_timeout)
                {
                    NOTIFY_TRANSITION_STARTED("7");
                    popNullTransition();
                    cancel(rootState_timeout);
                    NOTIFY_STATE_EXITED("ROOT.On");
                    NOTIFY_STATE_ENTERED("ROOT.accepttimeevent_7");
                    pushNullTransition();
                    rootState_subState = accepttimeevent_7;
                    rootState_active = accepttimeevent_7;
                    NOTIFY_TRANSITION_TERMINATED("7");
                    res = eventConsumed;
                }
        }
    else if(IS_EVENT_TYPE_OF(OMNullEventId))
        {
            //## transition 1 
            if(intensity==0)
                {
                    NOTIFY_TRANSITION_STARTED("1");
                    popNullTransition();
                    cancel(rootState_timeout);
                    NOTIFY_STATE_EXITED("ROOT.On");
                    //#[ transition 1 
                    lightState=false;
                    //#]
                    NOTIFY_STATE_ENTERED("ROOT.Off");
                    pushNullTransition();
                    rootState_subState = Off;
                    rootState_active = Off;
                    //#[ state Off.(Entry) 
                    intensity=intensity;
                    lightState=lightState;
                    OUT_PORT(pNetwork)->setIntensity(intensity);
                    //#]
                    rootState_timeout = scheduleTimeout(200, "ROOT.Off");
                    NOTIFY_TRANSITION_TERMINATED("1");
                    res = eventConsumed;
                }
            else
                {
                    //## transition 4 
                    if(lightState==false)
                        {
                            NOTIFY_TRANSITION_STARTED("4");
                            popNullTransition();
                            cancel(rootState_timeout);
                            NOTIFY_STATE_EXITED("ROOT.On");
                            //#[ transition 4 
                            intensity=0;
                            //#]
                            NOTIFY_STATE_ENTERED("ROOT.Off");
                            pushNullTransition();
                            rootState_subState = Off;
                            rootState_active = Off;
                            //#[ state Off.(Entry) 
                            intensity=intensity;
                            lightState=lightState;
                            OUT_PORT(pNetwork)->setIntensity(intensity);
                            //#]
                            rootState_timeout = scheduleTimeout(200, "ROOT.Off");
                            NOTIFY_TRANSITION_TERMINATED("4");
                            res = eventConsumed;
                        }
                }
        }
    
    return res;
}

IOxfReactive::TakeEventStatus Network::Off_handleEvent() {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    if(IS_EVENT_TYPE_OF(OMTimeoutEventId))
        {
            if(getCurrentEvent() == rootState_timeout)
                {
                    NOTIFY_TRANSITION_STARTED("5");
                    popNullTransition();
                    cancel(rootState_timeout);
                    NOTIFY_STATE_EXITED("ROOT.Off");
                    NOTIFY_STATE_ENTERED("ROOT.accepttimeevent_9");
                    pushNullTransition();
                    rootState_subState = accepttimeevent_9;
                    rootState_active = accepttimeevent_9;
                    NOTIFY_TRANSITION_TERMINATED("5");
                    res = eventConsumed;
                }
        }
    else if(IS_EVENT_TYPE_OF(OMNullEventId))
        {
            //## transition 2 
            if(intensity!=0)
                {
                    NOTIFY_TRANSITION_STARTED("2");
                    popNullTransition();
                    cancel(rootState_timeout);
                    NOTIFY_STATE_EXITED("ROOT.Off");
                    //#[ transition 2 
                    lightState=true;
                    //#]
                    NOTIFY_STATE_ENTERED("ROOT.On");
                    pushNullTransition();
                    rootState_subState = On;
                    rootState_active = On;
                    //#[ state On.(Entry) 
                    intensity=intensity;
                    lightState=lightState;
                    OUT_PORT(pNetwork)->setIntensity(intensity);
                    //#]
                    rootState_timeout = scheduleTimeout(200, "ROOT.On");
                    NOTIFY_TRANSITION_TERMINATED("2");
                    res = eventConsumed;
                }
            else
                {
                    //## transition 3 
                    if(lightState==true)
                        {
                            NOTIFY_TRANSITION_STARTED("3");
                            popNullTransition();
                            cancel(rootState_timeout);
                            NOTIFY_STATE_EXITED("ROOT.Off");
                            //#[ transition 3 
                            intensity=5;
                            //#]
                            NOTIFY_STATE_ENTERED("ROOT.On");
                            pushNullTransition();
                            rootState_subState = On;
                            rootState_active = On;
                            //#[ state On.(Entry) 
                            intensity=intensity;
                            lightState=lightState;
                            OUT_PORT(pNetwork)->setIntensity(intensity);
                            //#]
                            rootState_timeout = scheduleTimeout(200, "ROOT.On");
                            NOTIFY_TRANSITION_TERMINATED("3");
                            res = eventConsumed;
                        }
                }
        }
    
    return res;
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedNetwork::serializeAttributes(AOMSAttributes* aomsAttributes) const {
    aomsAttributes->addAttribute("intensity", x2String(myReal->intensity));
    aomsAttributes->addAttribute("lightState", x2String(myReal->lightState));
    aomsAttributes->addAttribute("occupied", x2String(myReal->occupied));
}

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
        case Network::accepttimeevent_7:
        {
            accepttimeevent_7_serializeStates(aomsState);
        }
        break;
        case Network::accepttimeevent_9:
        {
            accepttimeevent_9_serializeStates(aomsState);
        }
        break;
        case Network::On:
        {
            On_serializeStates(aomsState);
        }
        break;
        default:
            break;
    }
}

void OMAnimatedNetwork::On_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.On");
}

void OMAnimatedNetwork::Off_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.Off");
}

void OMAnimatedNetwork::accepttimeevent_9_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.accepttimeevent_9");
}

void OMAnimatedNetwork::accepttimeevent_7_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.accepttimeevent_7");
}
//#]

IMPLEMENT_REACTIVE_META_P(Network, ArchitecturalAnalysisPkg, ArchitecturalAnalysisPkg, false, OMAnimatedNetwork)

IMPLEMENT_META_OP(OMAnimatedNetwork, ArchitecturalAnalysisPkg_Network_setIntensity_int, "setIntensity", FALSE, "setIntensity(int)", 1)

IMPLEMENT_OP_CALL(ArchitecturalAnalysisPkg_Network_setIntensity_int, Network, setIntensity(p_intensity), NO_OP())

IMPLEMENT_META_OP(OMAnimatedNetwork, ArchitecturalAnalysisPkg_Network_setLightState_bool, "setLightState", FALSE, "setLightState(bool)", 1)

IMPLEMENT_OP_CALL(ArchitecturalAnalysisPkg_Network_setLightState_bool, Network, setLightState(p_lightState), NO_OP())
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Network.cpp
*********************************************************************/
