/********************************************************************
	Rhapsody	: 9.0 
	Login		: Administrator
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Network
//!	Generated Date	: Sun, 16, Jul 2023  
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

#define OMAnim_ArchitecturalAnalysisPkg_Network_setFireDetected_bool_UNSERIALIZE_ARGS OP_UNSER(OMDestructiveString2X,p_fireDetected)

#define OMAnim_ArchitecturalAnalysisPkg_Network_setFireDetected_bool_SERIALIZE_RET_VAL

#define OMAnim_ArchitecturalAnalysisPkg_Network_setIntensity_int_UNSERIALIZE_ARGS OP_UNSER(OMDestructiveString2X,p_intensity)

#define OMAnim_ArchitecturalAnalysisPkg_Network_setIntensity_int_SERIALIZE_RET_VAL

#define OMAnim_ArchitecturalAnalysisPkg_Network_setIs_Movement_bool_UNSERIALIZE_ARGS OP_UNSER(OMDestructiveString2X,p_is_Movement)

#define OMAnim_ArchitecturalAnalysisPkg_Network_setIs_Movement_bool_SERIALIZE_RET_VAL

#define OMAnim_ArchitecturalAnalysisPkg_Network_setLightState_bool_UNSERIALIZE_ARGS OP_UNSER(OMDestructiveString2X,p_lightState)

#define OMAnim_ArchitecturalAnalysisPkg_Network_setLightState_bool_SERIALIZE_RET_VAL

#define OMAnim_ArchitecturalAnalysisPkg_Network_setOccupied_bool_UNSERIALIZE_ARGS OP_UNSER(OMDestructiveString2X,p_occupied)

#define OMAnim_ArchitecturalAnalysisPkg_Network_setOccupied_bool_SERIALIZE_RET_VAL
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

bool Network::pNetwork_C::SS_getState() {
    bool res = false;
    if (itsI_SS != NULL) {
        res = itsI_SS->SS_getState();
    }
    return res;
}

void Network::pNetwork_C::SS_setState(bool argState) {
    
    if (itsI_SS != NULL) {
        itsI_SS->SS_setState(argState);
    }
    
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

bool Network::pNetwork_C::getMM() {
    bool res = false;
    if (itsI_MS != NULL) {
        res = itsI_MS->getMM();
    }
    return res;
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

bool Network::pNetwork_C::getStateMic() {
    bool res = false;
    if (itsI_Mic != NULL) {
        res = itsI_Mic->getStateMic();
    }
    return res;
}

bool Network::pNetwork_C::getStateSpkr() {
    bool res = false;
    if (itsI_Spkr != NULL) {
        res = itsI_Spkr->getStateSpkr();
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

bool Network::pNetwork_C::getWC() {
    bool res = false;
    if (itsI_WC != NULL) {
        res = itsI_WC->getWC();
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

void Network::pNetwork_C::setIntensity(int arg_intensity) {
    
    if (itsI_Light != NULL) {
        itsI_Light->setIntensity(arg_intensity);
    }
    
}

void Network::pNetwork_C::setMM(bool arg) {
    
    if (itsI_MS != NULL) {
        itsI_MS->setMM(arg);
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

void Network::pNetwork_C::setStateMic(bool argState) {
    
    if (itsI_Mic != NULL) {
        itsI_Mic->setStateMic(argState);
    }
    
}

void Network::pNetwork_C::setStateSpkr(bool argState) {
    
    if (itsI_Spkr != NULL) {
        itsI_Spkr->setStateSpkr(argState);
    }
    
}

void Network::pNetwork_C::setTemp(int arg_temp) {
    
    if (itsI_HVAC != NULL) {
        itsI_HVAC->setTemp(arg_temp);
    }
    
}

void Network::pNetwork_C::setWC(bool arg) {
    
    if (itsI_WC != NULL) {
        itsI_WC->setWC(arg);
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

Network::Network(IOxfActive* theActiveContext) : intensity(0), fireAlarm(false), fireDetected(false), is_Movement(false), lightState(false), occupied(false) {
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
    state_15_subState = OMNonState;
    state_15_active = OMNonState;
    state_14_subState = OMNonState;
    state_14_active = OMNonState;
    state_13_subState = OMNonState;
    state_13_active = OMNonState;
    state_12_subState = OMNonState;
    state_12_active = OMNonState;
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

int Network::getIntensity() const {
    return intensity;
}

void Network::setIntensity(int p_intensity) {
    intensity = p_intensity;
    NOTIFY_SET_OPERATION;
}

bool Network::getFireAlarm() const {
    return fireAlarm;
}

void Network::setFireAlarm(bool p_fireAlarm) {
    fireAlarm = p_fireAlarm;
    NOTIFY_SET_OPERATION;
}

bool Network::getFireDetected() const {
    return fireDetected;
}

void Network::setFireDetected(bool p_fireDetected) {
    fireDetected = p_fireDetected;
    NOTIFY_SET_OPERATION;
}

bool Network::getIs_Movement() const {
    return is_Movement;
}

void Network::setIs_Movement(bool p_is_Movement) {
    is_Movement = p_is_Movement;
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
    NOTIFY_SET_OPERATION;
}

void Network::rootState_entDef() {
    {
        NOTIFY_STATE_ENTERED("ROOT");
        rootStateEntDef();
    }
}

void Network::rootStateEntDef() {
    NOTIFY_TRANSITION_STARTED("0");
    NOTIFY_STATE_ENTERED("ROOT.CommunicationAudioSystemInOperation");
    rootState_subState = CommunicationAudioSystemInOperation;
    rootState_active = CommunicationAudioSystemInOperation;
    state_13_entDef();
    state_14_entDef();
    state_15_entDef();
    state_12_entDef();
    NOTIFY_TRANSITION_TERMINATED("0");
}

IOxfReactive::TakeEventStatus Network::rootState_processEvent() {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    // State CommunicationAudioSystemInOperation
    if(rootState_active == CommunicationAudioSystemInOperation)
        {
            res = CommunicationAudioSystemInOperation_processEvent();
        }
    return res;
}

void Network::CommunicationAudioSystemInOperation_entDef() {
    NOTIFY_STATE_ENTERED("ROOT.CommunicationAudioSystemInOperation");
    rootState_subState = CommunicationAudioSystemInOperation;
    rootState_active = CommunicationAudioSystemInOperation;
    state_12_entDef();
    state_13_entDef();
    state_14_entDef();
    state_15_entDef();
}

void Network::CommunicationAudioSystemInOperation_exit() {
    switch (state_12_subState) {
        // State micOn
        case micOn:
        {
            NOTIFY_STATE_EXITED("ROOT.CommunicationAudioSystemInOperation.state_12.micOn");
        }
        break;
        // State micOff
        case micOff:
        {
            NOTIFY_STATE_EXITED("ROOT.CommunicationAudioSystemInOperation.state_12.micOff");
        }
        break;
        default:
            break;
    }
    state_12_subState = OMNonState;
    NOTIFY_STATE_EXITED("ROOT.CommunicationAudioSystemInOperation.state_12");
    switch (state_13_subState) {
        // State smartscreenOn
        case smartscreenOn:
        {
            NOTIFY_STATE_EXITED("ROOT.CommunicationAudioSystemInOperation.state_13.smartscreenOn");
        }
        break;
        // State smartscreenOff
        case smartscreenOff:
        {
            NOTIFY_STATE_EXITED("ROOT.CommunicationAudioSystemInOperation.state_13.smartscreenOff");
        }
        break;
        default:
            break;
    }
    state_13_subState = OMNonState;
    NOTIFY_STATE_EXITED("ROOT.CommunicationAudioSystemInOperation.state_13");
    switch (state_14_subState) {
        // State speakersOff
        case speakersOff:
        {
            NOTIFY_STATE_EXITED("ROOT.CommunicationAudioSystemInOperation.state_14.speakersOff");
        }
        break;
        // State speakersOn
        case speakersOn:
        {
            NOTIFY_STATE_EXITED("ROOT.CommunicationAudioSystemInOperation.state_14.speakersOn");
        }
        break;
        default:
            break;
    }
    state_14_subState = OMNonState;
    NOTIFY_STATE_EXITED("ROOT.CommunicationAudioSystemInOperation.state_14");
    switch (state_15_subState) {
        // State webcamOn
        case webcamOn:
        {
            NOTIFY_STATE_EXITED("ROOT.CommunicationAudioSystemInOperation.state_15.webcamOn");
        }
        break;
        // State webcamOff
        case webcamOff:
        {
            NOTIFY_STATE_EXITED("ROOT.CommunicationAudioSystemInOperation.state_15.webcamOff");
        }
        break;
        default:
            break;
    }
    state_15_subState = OMNonState;
    NOTIFY_STATE_EXITED("ROOT.CommunicationAudioSystemInOperation.state_15");
    
    NOTIFY_STATE_EXITED("ROOT.CommunicationAudioSystemInOperation");
}

IOxfReactive::TakeEventStatus Network::CommunicationAudioSystemInOperation_processEvent() {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    // State state_12
    if(state_12_processEvent() != eventNotConsumed)
        {
            res = eventConsumed;
            if(!IS_IN(CommunicationAudioSystemInOperation))
                {
                    return res;
                }
        }
    // State state_13
    if(state_13_processEvent() != eventNotConsumed)
        {
            res = eventConsumed;
            if(!IS_IN(CommunicationAudioSystemInOperation))
                {
                    return res;
                }
        }
    // State state_14
    if(state_14_processEvent() != eventNotConsumed)
        {
            res = eventConsumed;
            if(!IS_IN(CommunicationAudioSystemInOperation))
                {
                    return res;
                }
        }
    // State state_15
    if(state_15_processEvent() != eventNotConsumed)
        {
            res = eventConsumed;
            if(!IS_IN(CommunicationAudioSystemInOperation))
                {
                    return res;
                }
        }
    
    return res;
}

void Network::state_15_entDef() {
    NOTIFY_STATE_ENTERED("ROOT.CommunicationAudioSystemInOperation.state_15");
    NOTIFY_TRANSITION_STARTED("4");
    NOTIFY_STATE_ENTERED("ROOT.CommunicationAudioSystemInOperation.state_15.webcamOff");
    state_15_subState = webcamOff;
    state_15_active = webcamOff;
    //#[ state CommunicationAudioSystemInOperation.state_15.webcamOff.(Entry) 
    OUT_PORT(pNetwork)->setWC(false);
    //#]
    NOTIFY_TRANSITION_TERMINATED("4");
}

IOxfReactive::TakeEventStatus Network::state_15_processEvent() {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    switch (state_15_active) {
        // State webcamOn
        case webcamOn:
        {
            if(IS_EVENT_TYPE_OF(ev_turnoff_WC_ArchitecturalAnalysisPkg_id))
                {
                    NOTIFY_TRANSITION_STARTED("8");
                    NOTIFY_STATE_EXITED("ROOT.CommunicationAudioSystemInOperation.state_15.webcamOn");
                    NOTIFY_STATE_ENTERED("ROOT.CommunicationAudioSystemInOperation.state_15.webcamOff");
                    state_15_subState = webcamOff;
                    state_15_active = webcamOff;
                    //#[ state CommunicationAudioSystemInOperation.state_15.webcamOff.(Entry) 
                    OUT_PORT(pNetwork)->setWC(false);
                    //#]
                    NOTIFY_TRANSITION_TERMINATED("8");
                    res = eventConsumed;
                }
            
            
        }
        break;
        // State webcamOff
        case webcamOff:
        {
            if(IS_EVENT_TYPE_OF(ev_turnon_WC_ArchitecturalAnalysisPkg_id))
                {
                    NOTIFY_TRANSITION_STARTED("7");
                    NOTIFY_STATE_EXITED("ROOT.CommunicationAudioSystemInOperation.state_15.webcamOff");
                    NOTIFY_STATE_ENTERED("ROOT.CommunicationAudioSystemInOperation.state_15.webcamOn");
                    state_15_subState = webcamOn;
                    state_15_active = webcamOn;
                    //#[ state CommunicationAudioSystemInOperation.state_15.webcamOn.(Entry) 
                    OUT_PORT(pNetwork)->setWC(true);
                    //#]
                    NOTIFY_TRANSITION_TERMINATED("7");
                    res = eventConsumed;
                }
            
            
        }
        break;
        default:
            break;
    }
    return res;
}

void Network::state_14_entDef() {
    NOTIFY_STATE_ENTERED("ROOT.CommunicationAudioSystemInOperation.state_14");
    NOTIFY_TRANSITION_STARTED("3");
    NOTIFY_STATE_ENTERED("ROOT.CommunicationAudioSystemInOperation.state_14.speakersOff");
    state_14_subState = speakersOff;
    state_14_active = speakersOff;
    //#[ state CommunicationAudioSystemInOperation.state_14.speakersOff.(Entry) 
    OUT_PORT(pNetwork)->setStateSpkr(false);
    //#]
    NOTIFY_TRANSITION_TERMINATED("3");
}

IOxfReactive::TakeEventStatus Network::state_14_processEvent() {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    switch (state_14_active) {
        // State speakersOff
        case speakersOff:
        {
            if(IS_EVENT_TYPE_OF(ev_turnon_spkr_ArchitecturalAnalysisPkg_id))
                {
                    NOTIFY_TRANSITION_STARTED("11");
                    NOTIFY_STATE_EXITED("ROOT.CommunicationAudioSystemInOperation.state_14.speakersOff");
                    NOTIFY_STATE_ENTERED("ROOT.CommunicationAudioSystemInOperation.state_14.speakersOn");
                    state_14_subState = speakersOn;
                    state_14_active = speakersOn;
                    //#[ state CommunicationAudioSystemInOperation.state_14.speakersOn.(Entry) 
                    OUT_PORT(pNetwork)->setStateSpkr(true);
                    //#]
                    NOTIFY_TRANSITION_TERMINATED("11");
                    res = eventConsumed;
                }
            
            
        }
        break;
        // State speakersOn
        case speakersOn:
        {
            if(IS_EVENT_TYPE_OF(ev_turnoff_spkr_ArchitecturalAnalysisPkg_id))
                {
                    NOTIFY_TRANSITION_STARTED("12");
                    NOTIFY_STATE_EXITED("ROOT.CommunicationAudioSystemInOperation.state_14.speakersOn");
                    NOTIFY_STATE_ENTERED("ROOT.CommunicationAudioSystemInOperation.state_14.speakersOff");
                    state_14_subState = speakersOff;
                    state_14_active = speakersOff;
                    //#[ state CommunicationAudioSystemInOperation.state_14.speakersOff.(Entry) 
                    OUT_PORT(pNetwork)->setStateSpkr(false);
                    //#]
                    NOTIFY_TRANSITION_TERMINATED("12");
                    res = eventConsumed;
                }
            
            
        }
        break;
        default:
            break;
    }
    return res;
}

void Network::state_13_entDef() {
    NOTIFY_STATE_ENTERED("ROOT.CommunicationAudioSystemInOperation.state_13");
    NOTIFY_TRANSITION_STARTED("2");
    NOTIFY_STATE_ENTERED("ROOT.CommunicationAudioSystemInOperation.state_13.smartscreenOff");
    state_13_subState = smartscreenOff;
    state_13_active = smartscreenOff;
    //#[ state CommunicationAudioSystemInOperation.state_13.smartscreenOff.(Entry) 
    OUT_PORT(pNetwork)->SS_setState(false);
    //#]
    NOTIFY_TRANSITION_TERMINATED("2");
}

IOxfReactive::TakeEventStatus Network::state_13_processEvent() {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    switch (state_13_active) {
        // State smartscreenOn
        case smartscreenOn:
        {
            if(IS_EVENT_TYPE_OF(ev_turnoff_SS_ArchitecturalAnalysisPkg_id))
                {
                    NOTIFY_TRANSITION_STARTED("6");
                    NOTIFY_STATE_EXITED("ROOT.CommunicationAudioSystemInOperation.state_13.smartscreenOn");
                    NOTIFY_STATE_ENTERED("ROOT.CommunicationAudioSystemInOperation.state_13.smartscreenOff");
                    state_13_subState = smartscreenOff;
                    state_13_active = smartscreenOff;
                    //#[ state CommunicationAudioSystemInOperation.state_13.smartscreenOff.(Entry) 
                    OUT_PORT(pNetwork)->SS_setState(false);
                    //#]
                    NOTIFY_TRANSITION_TERMINATED("6");
                    res = eventConsumed;
                }
            
            
        }
        break;
        // State smartscreenOff
        case smartscreenOff:
        {
            if(IS_EVENT_TYPE_OF(ev_turnon_SS_ArchitecturalAnalysisPkg_id))
                {
                    NOTIFY_TRANSITION_STARTED("5");
                    NOTIFY_STATE_EXITED("ROOT.CommunicationAudioSystemInOperation.state_13.smartscreenOff");
                    NOTIFY_STATE_ENTERED("ROOT.CommunicationAudioSystemInOperation.state_13.smartscreenOn");
                    state_13_subState = smartscreenOn;
                    state_13_active = smartscreenOn;
                    //#[ state CommunicationAudioSystemInOperation.state_13.smartscreenOn.(Entry) 
                    OUT_PORT(pNetwork)->SS_setState(true);
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

void Network::state_12_entDef() {
    NOTIFY_STATE_ENTERED("ROOT.CommunicationAudioSystemInOperation.state_12");
    NOTIFY_TRANSITION_STARTED("1");
    NOTIFY_STATE_ENTERED("ROOT.CommunicationAudioSystemInOperation.state_12.micOff");
    state_12_subState = micOff;
    state_12_active = micOff;
    //#[ state CommunicationAudioSystemInOperation.state_12.micOff.(Entry) 
    OUT_PORT(pNetwork)->setStateMic(false);
    //#]
    NOTIFY_TRANSITION_TERMINATED("1");
}

IOxfReactive::TakeEventStatus Network::state_12_processEvent() {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    switch (state_12_active) {
        // State micOn
        case micOn:
        {
            if(IS_EVENT_TYPE_OF(ev_turnoff_mic_ArchitecturalAnalysisPkg_id))
                {
                    NOTIFY_TRANSITION_STARTED("10");
                    NOTIFY_STATE_EXITED("ROOT.CommunicationAudioSystemInOperation.state_12.micOn");
                    NOTIFY_STATE_ENTERED("ROOT.CommunicationAudioSystemInOperation.state_12.micOff");
                    state_12_subState = micOff;
                    state_12_active = micOff;
                    //#[ state CommunicationAudioSystemInOperation.state_12.micOff.(Entry) 
                    OUT_PORT(pNetwork)->setStateMic(false);
                    //#]
                    NOTIFY_TRANSITION_TERMINATED("10");
                    res = eventConsumed;
                }
            
            
        }
        break;
        // State micOff
        case micOff:
        {
            if(IS_EVENT_TYPE_OF(ev_turnon_mic_ArchitecturalAnalysisPkg_id))
                {
                    NOTIFY_TRANSITION_STARTED("9");
                    NOTIFY_STATE_EXITED("ROOT.CommunicationAudioSystemInOperation.state_12.micOff");
                    NOTIFY_STATE_ENTERED("ROOT.CommunicationAudioSystemInOperation.state_12.micOn");
                    state_12_subState = micOn;
                    state_12_active = micOn;
                    //#[ state CommunicationAudioSystemInOperation.state_12.micOn.(Entry) 
                    OUT_PORT(pNetwork)->setStateMic(true);
                    //#]
                    NOTIFY_TRANSITION_TERMINATED("9");
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
void OMAnimatedNetwork::serializeAttributes(AOMSAttributes* aomsAttributes) const {
    aomsAttributes->addAttribute("intensity", x2String(myReal->intensity));
    aomsAttributes->addAttribute("lightState", x2String(myReal->lightState));
    aomsAttributes->addAttribute("occupied", x2String(myReal->occupied));
    aomsAttributes->addAttribute("is_Movement", x2String(myReal->is_Movement));
    aomsAttributes->addAttribute("fireDetected", x2String(myReal->fireDetected));
    aomsAttributes->addAttribute("fireAlarm", x2String(myReal->fireAlarm));
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
    if(myReal->rootState_subState == Network::CommunicationAudioSystemInOperation)
        {
            CommunicationAudioSystemInOperation_serializeStates(aomsState);
        }
}

void OMAnimatedNetwork::CommunicationAudioSystemInOperation_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.CommunicationAudioSystemInOperation");
    state_12_serializeStates(aomsState);
    state_13_serializeStates(aomsState);
    state_14_serializeStates(aomsState);
    state_15_serializeStates(aomsState);
}

void OMAnimatedNetwork::state_15_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.CommunicationAudioSystemInOperation.state_15");
    switch (myReal->state_15_subState) {
        case Network::webcamOn:
        {
            webcamOn_serializeStates(aomsState);
        }
        break;
        case Network::webcamOff:
        {
            webcamOff_serializeStates(aomsState);
        }
        break;
        default:
            break;
    }
}

void OMAnimatedNetwork::webcamOn_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.CommunicationAudioSystemInOperation.state_15.webcamOn");
}

void OMAnimatedNetwork::webcamOff_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.CommunicationAudioSystemInOperation.state_15.webcamOff");
}

void OMAnimatedNetwork::state_14_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.CommunicationAudioSystemInOperation.state_14");
    switch (myReal->state_14_subState) {
        case Network::speakersOff:
        {
            speakersOff_serializeStates(aomsState);
        }
        break;
        case Network::speakersOn:
        {
            speakersOn_serializeStates(aomsState);
        }
        break;
        default:
            break;
    }
}

void OMAnimatedNetwork::speakersOn_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.CommunicationAudioSystemInOperation.state_14.speakersOn");
}

void OMAnimatedNetwork::speakersOff_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.CommunicationAudioSystemInOperation.state_14.speakersOff");
}

void OMAnimatedNetwork::state_13_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.CommunicationAudioSystemInOperation.state_13");
    switch (myReal->state_13_subState) {
        case Network::smartscreenOn:
        {
            smartscreenOn_serializeStates(aomsState);
        }
        break;
        case Network::smartscreenOff:
        {
            smartscreenOff_serializeStates(aomsState);
        }
        break;
        default:
            break;
    }
}

void OMAnimatedNetwork::smartscreenOn_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.CommunicationAudioSystemInOperation.state_13.smartscreenOn");
}

void OMAnimatedNetwork::smartscreenOff_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.CommunicationAudioSystemInOperation.state_13.smartscreenOff");
}

void OMAnimatedNetwork::state_12_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.CommunicationAudioSystemInOperation.state_12");
    switch (myReal->state_12_subState) {
        case Network::micOn:
        {
            micOn_serializeStates(aomsState);
        }
        break;
        case Network::micOff:
        {
            micOff_serializeStates(aomsState);
        }
        break;
        default:
            break;
    }
}

void OMAnimatedNetwork::micOn_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.CommunicationAudioSystemInOperation.state_12.micOn");
}

void OMAnimatedNetwork::micOff_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.CommunicationAudioSystemInOperation.state_12.micOff");
}
//#]

IMPLEMENT_REACTIVE_META_P(Network, ArchitecturalAnalysisPkg, ArchitecturalAnalysisPkg, false, OMAnimatedNetwork)

IMPLEMENT_META_OP(OMAnimatedNetwork, ArchitecturalAnalysisPkg_Network_setFireDetected_bool, "setFireDetected", FALSE, "setFireDetected(bool)", 1)

IMPLEMENT_OP_CALL(ArchitecturalAnalysisPkg_Network_setFireDetected_bool, Network, setFireDetected(p_fireDetected), NO_OP())

IMPLEMENT_META_OP(OMAnimatedNetwork, ArchitecturalAnalysisPkg_Network_setIntensity_int, "setIntensity", FALSE, "setIntensity(int)", 1)

IMPLEMENT_OP_CALL(ArchitecturalAnalysisPkg_Network_setIntensity_int, Network, setIntensity(p_intensity), NO_OP())

IMPLEMENT_META_OP(OMAnimatedNetwork, ArchitecturalAnalysisPkg_Network_setIs_Movement_bool, "setIs_Movement", FALSE, "setIs_Movement(bool)", 1)

IMPLEMENT_OP_CALL(ArchitecturalAnalysisPkg_Network_setIs_Movement_bool, Network, setIs_Movement(p_is_Movement), NO_OP())

IMPLEMENT_META_OP(OMAnimatedNetwork, ArchitecturalAnalysisPkg_Network_setLightState_bool, "setLightState", FALSE, "setLightState(bool)", 1)

IMPLEMENT_OP_CALL(ArchitecturalAnalysisPkg_Network_setLightState_bool, Network, setLightState(p_lightState), NO_OP())

IMPLEMENT_META_OP(OMAnimatedNetwork, ArchitecturalAnalysisPkg_Network_setOccupied_bool, "setOccupied", FALSE, "setOccupied(bool)", 1)

IMPLEMENT_OP_CALL(ArchitecturalAnalysisPkg_Network_setOccupied_bool, Network, setOccupied(p_occupied), NO_OP())
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Network.cpp
*********************************************************************/
