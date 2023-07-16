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

#define OMAnim_ArchitecturalAnalysisPkg_Network_setCO2Alarm_bool_UNSERIALIZE_ARGS OP_UNSER(OMDestructiveString2X,p_CO2Alarm)

#define OMAnim_ArchitecturalAnalysisPkg_Network_setCO2Alarm_bool_SERIALIZE_RET_VAL

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

#define OMAnim_ArchitecturalAnalysisPkg_Network_setSpeakerVol_int_UNSERIALIZE_ARGS OP_UNSER(OMDestructiveString2X,p_speakerVol)

#define OMAnim_ArchitecturalAnalysisPkg_Network_setSpeakerVol_int_SERIALIZE_RET_VAL

#define OMAnim_ArchitecturalAnalysisPkg_Network_setTemp_int_UNSERIALIZE_ARGS OP_UNSER(OMDestructiveString2X,p_temp)

#define OMAnim_ArchitecturalAnalysisPkg_Network_setTemp_int_SERIALIZE_RET_VAL
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

Network::Network(IOxfActive* theActiveContext) : intensity(0), CO2Alarm(false), fireAlarm(false), fireDetected(false), is_Movement(false), lightState(false), occupied(false), speakerVol(0), temp(26) {
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
    state_12_subState = OMNonState;
    state_12_active = OMNonState;
    state_12_timeout = NULL;
    state_11_subState = OMNonState;
    state_11_active = OMNonState;
    Heating_On_subState = OMNonState;
    Heating_On_timeout = NULL;
    Heating_OFF_subState = OMNonState;
    Heating_OFF_timeout = NULL;
    state_10_subState = OMNonState;
    state_10_active = OMNonState;
    AC_ON_subState = OMNonState;
    AC_ON_timeout = NULL;
    AC_OFF_subState = OMNonState;
    AC_OFF_timeout = NULL;
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
    cancel(state_12_timeout);
    cancel(Heating_On_timeout);
    cancel(Heating_OFF_timeout);
    cancel(AC_ON_timeout);
    cancel(AC_OFF_timeout);
}

bool Network::cancelTimeout(const IOxfTimeout* arg) {
    bool res = false;
    if(state_12_timeout == arg)
        {
            state_12_timeout = NULL;
            res = true;
        }
    if(Heating_On_timeout == arg)
        {
            Heating_On_timeout = NULL;
            res = true;
        }
    if(Heating_OFF_timeout == arg)
        {
            Heating_OFF_timeout = NULL;
            res = true;
        }
    if(AC_ON_timeout == arg)
        {
            AC_ON_timeout = NULL;
            res = true;
        }
    if(AC_OFF_timeout == arg)
        {
            AC_OFF_timeout = NULL;
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

bool Network::getCO2Alarm() const {
    return CO2Alarm;
}

void Network::setCO2Alarm(bool p_CO2Alarm) {
    CO2Alarm = p_CO2Alarm;
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

int Network::getSpeakerVol() const {
    return speakerVol;
}

void Network::setSpeakerVol(int p_speakerVol) {
    speakerVol = p_speakerVol;
    NOTIFY_SET_OPERATION;
}

int Network::getTemp() const {
    return temp;
}

void Network::setTemp(int p_temp) {
    temp = p_temp;
    NOTIFY_SET_OPERATION;
}

void Network::rootState_entDef() {
    {
        NOTIFY_STATE_ENTERED("ROOT");
        NOTIFY_TRANSITION_STARTED("6");
        NOTIFY_STATE_ENTERED("ROOT.HVAC_Disabled");
        rootState_subState = HVAC_Disabled;
        rootState_active = HVAC_Disabled;
        //#[ state HVAC_Disabled.(Entry) 
        OUT_PORT(pNetwork)->set_AC_state(false);
        OUT_PORT(pNetwork)->set_Heating_state(false);
        OUT_PORT(pNetwork)->set_Vent_state(false);
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
            switch (AC_OFF_subState) {
                // State idle
                case idle:
                {
                    cancel(AC_OFF_timeout);
                    NOTIFY_STATE_EXITED("ROOT.HVAC_Enabled.state_10.AC_OFF.idle");
                }
                break;
                case accepttimeevent_17:
                {
                    popNullTransition();
                    NOTIFY_STATE_EXITED("ROOT.HVAC_Enabled.state_10.AC_OFF.accepttimeevent_17");
                }
                break;
                default:
                    break;
            }
            AC_OFF_subState = OMNonState;
            NOTIFY_STATE_EXITED("ROOT.HVAC_Enabled.state_10.AC_OFF");
        }
        break;
        // State AC_ON
        case AC_ON:
        {
            popNullTransition();
            switch (AC_ON_subState) {
                // State idle
                case AC_ON_idle:
                {
                    cancel(AC_ON_timeout);
                    NOTIFY_STATE_EXITED("ROOT.HVAC_Enabled.state_10.AC_ON.idle");
                }
                break;
                case AC_ON_accepttimeevent_17:
                {
                    popNullTransition();
                    NOTIFY_STATE_EXITED("ROOT.HVAC_Enabled.state_10.AC_ON.accepttimeevent_17");
                }
                break;
                default:
                    break;
            }
            AC_ON_subState = OMNonState;
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
            popNullTransition();
            switch (Heating_OFF_subState) {
                // State idle
                case Heating_OFF_idle:
                {
                    cancel(Heating_OFF_timeout);
                    NOTIFY_STATE_EXITED("ROOT.HVAC_Enabled.state_11.Heating_OFF.idle");
                }
                break;
                case Heating_OFF_accepttimeevent_17:
                {
                    popNullTransition();
                    NOTIFY_STATE_EXITED("ROOT.HVAC_Enabled.state_11.Heating_OFF.accepttimeevent_17");
                }
                break;
                default:
                    break;
            }
            Heating_OFF_subState = OMNonState;
            NOTIFY_STATE_EXITED("ROOT.HVAC_Enabled.state_11.Heating_OFF");
        }
        break;
        // State Heating_On
        case Heating_On:
        {
            popNullTransition();
            switch (Heating_On_subState) {
                // State idle
                case Heating_On_idle:
                {
                    cancel(Heating_On_timeout);
                    NOTIFY_STATE_EXITED("ROOT.HVAC_Enabled.state_11.Heating_On.idle");
                }
                break;
                case Heating_On_accepttimeevent_17:
                {
                    popNullTransition();
                    NOTIFY_STATE_EXITED("ROOT.HVAC_Enabled.state_11.Heating_On.accepttimeevent_17");
                }
                break;
                default:
                    break;
            }
            Heating_On_subState = OMNonState;
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
            popNullTransition();
            cancel(state_12_timeout);
            NOTIFY_STATE_EXITED("ROOT.HVAC_Enabled.state_12.Vent_OFF");
        }
        break;
        // State Vent_On
        case Vent_On:
        {
            NOTIFY_STATE_EXITED("ROOT.HVAC_Enabled.state_12.Vent_On");
        }
        break;
        case accepttimeevent_14:
        {
            popNullTransition();
            NOTIFY_STATE_EXITED("ROOT.HVAC_Enabled.state_12.accepttimeevent_14");
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
            OUT_PORT(pNetwork)->set_AC_state(false);
            OUT_PORT(pNetwork)->set_Heating_state(false);
            OUT_PORT(pNetwork)->set_Vent_state(false);
            OUT_PORT(pNetwork)->set_HVAC_state(false);
            //#]
            NOTIFY_TRANSITION_TERMINATED("7");
            res = eventConsumed;
        }
    
    return res;
}

void Network::state_12_entDef() {
    NOTIFY_STATE_ENTERED("ROOT.HVAC_Enabled.state_12");
    NOTIFY_TRANSITION_STARTED("10");
    NOTIFY_STATE_ENTERED("ROOT.HVAC_Enabled.state_12.Vent_OFF");
    pushNullTransition();
    state_12_subState = Vent_OFF;
    state_12_active = Vent_OFF;
    //#[ state HVAC_Enabled.state_12.Vent_OFF.(Entry) 
    OUT_PORT(pNetwork)->set_Vent_state(false);
    CO2Alarm=CO2Alarm;
    //#]
    state_12_timeout = scheduleTimeout(100, "ROOT.HVAC_Enabled.state_12.Vent_OFF");
    NOTIFY_TRANSITION_TERMINATED("10");
}

IOxfReactive::TakeEventStatus Network::state_12_processEvent() {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    switch (state_12_active) {
        // State Vent_OFF
        case Vent_OFF:
        {
            res = Vent_OFF_handleEvent();
        }
        break;
        // State Vent_On
        case Vent_On:
        {
            if(IS_EVENT_TYPE_OF(ev_Vent_SwitchOff_ArchitecturalAnalysisPkg_id))
                {
                    NOTIFY_TRANSITION_STARTED("5");
                    NOTIFY_STATE_EXITED("ROOT.HVAC_Enabled.state_12.Vent_On");
                    NOTIFY_STATE_ENTERED("ROOT.HVAC_Enabled.state_12.Vent_OFF");
                    pushNullTransition();
                    state_12_subState = Vent_OFF;
                    state_12_active = Vent_OFF;
                    //#[ state HVAC_Enabled.state_12.Vent_OFF.(Entry) 
                    OUT_PORT(pNetwork)->set_Vent_state(false);
                    CO2Alarm=CO2Alarm;
                    //#]
                    state_12_timeout = scheduleTimeout(100, "ROOT.HVAC_Enabled.state_12.Vent_OFF");
                    NOTIFY_TRANSITION_TERMINATED("5");
                    res = eventConsumed;
                }
            
            
        }
        break;
        case accepttimeevent_14:
        {
            if(IS_EVENT_TYPE_OF(OMNullEventId))
                {
                    NOTIFY_TRANSITION_STARTED("13");
                    popNullTransition();
                    NOTIFY_STATE_EXITED("ROOT.HVAC_Enabled.state_12.accepttimeevent_14");
                    NOTIFY_STATE_ENTERED("ROOT.HVAC_Enabled.state_12.Vent_OFF");
                    pushNullTransition();
                    state_12_subState = Vent_OFF;
                    state_12_active = Vent_OFF;
                    //#[ state HVAC_Enabled.state_12.Vent_OFF.(Entry) 
                    OUT_PORT(pNetwork)->set_Vent_state(false);
                    CO2Alarm=CO2Alarm;
                    //#]
                    state_12_timeout = scheduleTimeout(100, "ROOT.HVAC_Enabled.state_12.Vent_OFF");
                    NOTIFY_TRANSITION_TERMINATED("13");
                    res = eventConsumed;
                }
            
            
        }
        break;
        default:
            break;
    }
    return res;
}

IOxfReactive::TakeEventStatus Network::Vent_OFF_handleEvent() {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    if(IS_EVENT_TYPE_OF(OMTimeoutEventId))
        {
            if(getCurrentEvent() == state_12_timeout)
                {
                    NOTIFY_TRANSITION_STARTED("12");
                    popNullTransition();
                    cancel(state_12_timeout);
                    NOTIFY_STATE_EXITED("ROOT.HVAC_Enabled.state_12.Vent_OFF");
                    NOTIFY_STATE_ENTERED("ROOT.HVAC_Enabled.state_12.accepttimeevent_14");
                    pushNullTransition();
                    state_12_subState = accepttimeevent_14;
                    state_12_active = accepttimeevent_14;
                    NOTIFY_TRANSITION_TERMINATED("12");
                    res = eventConsumed;
                }
        }
    else if(IS_EVENT_TYPE_OF(OMNullEventId))
        {
            //## transition 14 
            if(CO2Alarm==true)
                {
                    NOTIFY_TRANSITION_STARTED("14");
                    popNullTransition();
                    cancel(state_12_timeout);
                    NOTIFY_STATE_EXITED("ROOT.HVAC_Enabled.state_12.Vent_OFF");
                    NOTIFY_STATE_ENTERED("ROOT.HVAC_Enabled.state_12.Vent_On");
                    state_12_subState = Vent_On;
                    state_12_active = Vent_On;
                    //#[ state HVAC_Enabled.state_12.Vent_On.(Entry) 
                    OUT_PORT(pNetwork)->set_Vent_state(true);
                    CO2Alarm=false;
                    //#]
                    NOTIFY_TRANSITION_TERMINATED("14");
                    res = eventConsumed;
                }
        }
    else if(IS_EVENT_TYPE_OF(ev_Vent_SwitchOn_ArchitecturalAnalysisPkg_id))
        {
            NOTIFY_TRANSITION_STARTED("4");
            popNullTransition();
            cancel(state_12_timeout);
            NOTIFY_STATE_EXITED("ROOT.HVAC_Enabled.state_12.Vent_OFF");
            NOTIFY_STATE_ENTERED("ROOT.HVAC_Enabled.state_12.Vent_On");
            state_12_subState = Vent_On;
            state_12_active = Vent_On;
            //#[ state HVAC_Enabled.state_12.Vent_On.(Entry) 
            OUT_PORT(pNetwork)->set_Vent_state(true);
            CO2Alarm=false;
            //#]
            NOTIFY_TRANSITION_TERMINATED("4");
            res = eventConsumed;
        }
    
    
    return res;
}

void Network::state_11_entDef() {
    NOTIFY_STATE_ENTERED("ROOT.HVAC_Enabled.state_11");
    NOTIFY_TRANSITION_STARTED("9");
    Heating_OFF_entDef();
    NOTIFY_TRANSITION_TERMINATED("9");
}

IOxfReactive::TakeEventStatus Network::state_11_processEvent() {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    switch (state_11_active) {
        // State idle
        case Heating_OFF_idle:
        {
            res = Heating_OFF_idle_handleEvent();
        }
        break;
        case Heating_OFF_accepttimeevent_17:
        {
            res = Heating_OFF_accepttimeevent_17_handleEvent();
        }
        break;
        // State idle
        case Heating_On_idle:
        {
            res = Heating_On_idle_handleEvent();
        }
        break;
        case Heating_On_accepttimeevent_17:
        {
            res = Heating_On_accepttimeevent_17_handleEvent();
        }
        break;
        default:
            break;
    }
    return res;
}

void Network::Heating_On_entDef() {
    NOTIFY_STATE_ENTERED("ROOT.HVAC_Enabled.state_11.Heating_On");
    pushNullTransition();
    state_11_subState = Heating_On;
    //#[ state HVAC_Enabled.state_11.Heating_On.(Entry) 
    OUT_PORT(pNetwork)->set_Heating_state(true);
    //#]
    NOTIFY_TRANSITION_STARTED("24");
    NOTIFY_STATE_ENTERED("ROOT.HVAC_Enabled.state_11.Heating_On.idle");
    Heating_On_subState = Heating_On_idle;
    state_11_active = Heating_On_idle;
    //#[ state HVAC_Enabled.state_11.Heating_On.idle.(Entry) 
    temp=temp;
    //#]
    Heating_On_timeout = scheduleTimeout(1000, "ROOT.HVAC_Enabled.state_11.Heating_On.idle");
    NOTIFY_TRANSITION_TERMINATED("24");
}

IOxfReactive::TakeEventStatus Network::Heating_On_handleEvent() {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    if(IS_EVENT_TYPE_OF(OMNullEventId))
        {
            //## transition 30 
            if(temp>20)
                {
                    NOTIFY_TRANSITION_STARTED("30");
                    popNullTransition();
                    switch (Heating_On_subState) {
                        // State idle
                        case Heating_On_idle:
                        {
                            cancel(Heating_On_timeout);
                            NOTIFY_STATE_EXITED("ROOT.HVAC_Enabled.state_11.Heating_On.idle");
                        }
                        break;
                        case Heating_On_accepttimeevent_17:
                        {
                            popNullTransition();
                            NOTIFY_STATE_EXITED("ROOT.HVAC_Enabled.state_11.Heating_On.accepttimeevent_17");
                        }
                        break;
                        default:
                            break;
                    }
                    Heating_On_subState = OMNonState;
                    NOTIFY_STATE_EXITED("ROOT.HVAC_Enabled.state_11.Heating_On");
                    Heating_OFF_entDef();
                    NOTIFY_TRANSITION_TERMINATED("30");
                    res = eventConsumed;
                }
        }
    else if(IS_EVENT_TYPE_OF(ev_Heating_SwitchOff_ArchitecturalAnalysisPkg_id))
        {
            NOTIFY_TRANSITION_STARTED("3");
            popNullTransition();
            switch (Heating_On_subState) {
                // State idle
                case Heating_On_idle:
                {
                    cancel(Heating_On_timeout);
                    NOTIFY_STATE_EXITED("ROOT.HVAC_Enabled.state_11.Heating_On.idle");
                }
                break;
                case Heating_On_accepttimeevent_17:
                {
                    popNullTransition();
                    NOTIFY_STATE_EXITED("ROOT.HVAC_Enabled.state_11.Heating_On.accepttimeevent_17");
                }
                break;
                default:
                    break;
            }
            Heating_On_subState = OMNonState;
            NOTIFY_STATE_EXITED("ROOT.HVAC_Enabled.state_11.Heating_On");
            Heating_OFF_entDef();
            NOTIFY_TRANSITION_TERMINATED("3");
            res = eventConsumed;
        }
    
    
    return res;
}

IOxfReactive::TakeEventStatus Network::Heating_On_idle_handleEvent() {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    if(IS_EVENT_TYPE_OF(OMTimeoutEventId))
        {
            if(getCurrentEvent() == Heating_On_timeout)
                {
                    NOTIFY_TRANSITION_STARTED("27");
                    cancel(Heating_On_timeout);
                    NOTIFY_STATE_EXITED("ROOT.HVAC_Enabled.state_11.Heating_On.idle");
                    NOTIFY_STATE_ENTERED("ROOT.HVAC_Enabled.state_11.Heating_On.accepttimeevent_17");
                    pushNullTransition();
                    Heating_On_subState = Heating_On_accepttimeevent_17;
                    state_11_active = Heating_On_accepttimeevent_17;
                    NOTIFY_TRANSITION_TERMINATED("27");
                    res = eventConsumed;
                }
        }
    
    if(res == eventNotConsumed)
        {
            res = Heating_On_handleEvent();
        }
    return res;
}

IOxfReactive::TakeEventStatus Network::Heating_On_accepttimeevent_17_handleEvent() {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    if(IS_EVENT_TYPE_OF(OMNullEventId))
        {
            NOTIFY_TRANSITION_STARTED("28");
            popNullTransition();
            NOTIFY_STATE_EXITED("ROOT.HVAC_Enabled.state_11.Heating_On.accepttimeevent_17");
            NOTIFY_STATE_ENTERED("ROOT.HVAC_Enabled.state_11.Heating_On.idle");
            Heating_On_subState = Heating_On_idle;
            state_11_active = Heating_On_idle;
            //#[ state HVAC_Enabled.state_11.Heating_On.idle.(Entry) 
            temp=temp;
            //#]
            Heating_On_timeout = scheduleTimeout(1000, "ROOT.HVAC_Enabled.state_11.Heating_On.idle");
            NOTIFY_TRANSITION_TERMINATED("28");
            res = eventConsumed;
        }
    
    if(res == eventNotConsumed)
        {
            res = Heating_On_handleEvent();
        }
    return res;
}

void Network::Heating_OFF_entDef() {
    NOTIFY_STATE_ENTERED("ROOT.HVAC_Enabled.state_11.Heating_OFF");
    pushNullTransition();
    state_11_subState = Heating_OFF;
    //#[ state HVAC_Enabled.state_11.Heating_OFF.(Entry) 
    OUT_PORT(pNetwork)->set_Heating_state(false);
    //#]
    NOTIFY_TRANSITION_STARTED("23");
    NOTIFY_STATE_ENTERED("ROOT.HVAC_Enabled.state_11.Heating_OFF.idle");
    Heating_OFF_subState = Heating_OFF_idle;
    state_11_active = Heating_OFF_idle;
    //#[ state HVAC_Enabled.state_11.Heating_OFF.idle.(Entry) 
    temp=temp;
    //#]
    Heating_OFF_timeout = scheduleTimeout(1000, "ROOT.HVAC_Enabled.state_11.Heating_OFF.idle");
    NOTIFY_TRANSITION_TERMINATED("23");
}

IOxfReactive::TakeEventStatus Network::Heating_OFF_handleEvent() {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    if(IS_EVENT_TYPE_OF(OMNullEventId))
        {
            //## transition 29 
            if(temp<15)
                {
                    NOTIFY_TRANSITION_STARTED("29");
                    popNullTransition();
                    switch (Heating_OFF_subState) {
                        // State idle
                        case Heating_OFF_idle:
                        {
                            cancel(Heating_OFF_timeout);
                            NOTIFY_STATE_EXITED("ROOT.HVAC_Enabled.state_11.Heating_OFF.idle");
                        }
                        break;
                        case Heating_OFF_accepttimeevent_17:
                        {
                            popNullTransition();
                            NOTIFY_STATE_EXITED("ROOT.HVAC_Enabled.state_11.Heating_OFF.accepttimeevent_17");
                        }
                        break;
                        default:
                            break;
                    }
                    Heating_OFF_subState = OMNonState;
                    NOTIFY_STATE_EXITED("ROOT.HVAC_Enabled.state_11.Heating_OFF");
                    Heating_On_entDef();
                    NOTIFY_TRANSITION_TERMINATED("29");
                    res = eventConsumed;
                }
        }
    else if(IS_EVENT_TYPE_OF(ev_Heating_SwitchOn_ArchitecturalAnalysisPkg_id))
        {
            NOTIFY_TRANSITION_STARTED("2");
            popNullTransition();
            switch (Heating_OFF_subState) {
                // State idle
                case Heating_OFF_idle:
                {
                    cancel(Heating_OFF_timeout);
                    NOTIFY_STATE_EXITED("ROOT.HVAC_Enabled.state_11.Heating_OFF.idle");
                }
                break;
                case Heating_OFF_accepttimeevent_17:
                {
                    popNullTransition();
                    NOTIFY_STATE_EXITED("ROOT.HVAC_Enabled.state_11.Heating_OFF.accepttimeevent_17");
                }
                break;
                default:
                    break;
            }
            Heating_OFF_subState = OMNonState;
            NOTIFY_STATE_EXITED("ROOT.HVAC_Enabled.state_11.Heating_OFF");
            Heating_On_entDef();
            NOTIFY_TRANSITION_TERMINATED("2");
            res = eventConsumed;
        }
    
    
    return res;
}

IOxfReactive::TakeEventStatus Network::Heating_OFF_idle_handleEvent() {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    if(IS_EVENT_TYPE_OF(OMTimeoutEventId))
        {
            if(getCurrentEvent() == Heating_OFF_timeout)
                {
                    NOTIFY_TRANSITION_STARTED("25");
                    cancel(Heating_OFF_timeout);
                    NOTIFY_STATE_EXITED("ROOT.HVAC_Enabled.state_11.Heating_OFF.idle");
                    NOTIFY_STATE_ENTERED("ROOT.HVAC_Enabled.state_11.Heating_OFF.accepttimeevent_17");
                    pushNullTransition();
                    Heating_OFF_subState = Heating_OFF_accepttimeevent_17;
                    state_11_active = Heating_OFF_accepttimeevent_17;
                    NOTIFY_TRANSITION_TERMINATED("25");
                    res = eventConsumed;
                }
        }
    
    if(res == eventNotConsumed)
        {
            res = Heating_OFF_handleEvent();
        }
    return res;
}

IOxfReactive::TakeEventStatus Network::Heating_OFF_accepttimeevent_17_handleEvent() {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    if(IS_EVENT_TYPE_OF(OMNullEventId))
        {
            NOTIFY_TRANSITION_STARTED("26");
            popNullTransition();
            NOTIFY_STATE_EXITED("ROOT.HVAC_Enabled.state_11.Heating_OFF.accepttimeevent_17");
            NOTIFY_STATE_ENTERED("ROOT.HVAC_Enabled.state_11.Heating_OFF.idle");
            Heating_OFF_subState = Heating_OFF_idle;
            state_11_active = Heating_OFF_idle;
            //#[ state HVAC_Enabled.state_11.Heating_OFF.idle.(Entry) 
            temp=temp;
            //#]
            Heating_OFF_timeout = scheduleTimeout(1000, "ROOT.HVAC_Enabled.state_11.Heating_OFF.idle");
            NOTIFY_TRANSITION_TERMINATED("26");
            res = eventConsumed;
        }
    
    if(res == eventNotConsumed)
        {
            res = Heating_OFF_handleEvent();
        }
    return res;
}

void Network::state_10_entDef() {
    NOTIFY_STATE_ENTERED("ROOT.HVAC_Enabled.state_10");
    NOTIFY_TRANSITION_STARTED("8");
    AC_OFF_entDef();
    NOTIFY_TRANSITION_TERMINATED("8");
}

IOxfReactive::TakeEventStatus Network::state_10_processEvent() {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    switch (state_10_active) {
        // State idle
        case idle:
        {
            res = idle_handleEvent();
        }
        break;
        case accepttimeevent_17:
        {
            res = accepttimeevent_17_handleEvent();
        }
        break;
        // State idle
        case AC_ON_idle:
        {
            res = AC_ON_idle_handleEvent();
        }
        break;
        case AC_ON_accepttimeevent_17:
        {
            res = AC_ON_accepttimeevent_17_handleEvent();
        }
        break;
        default:
            break;
    }
    return res;
}

void Network::AC_ON_entDef() {
    NOTIFY_STATE_ENTERED("ROOT.HVAC_Enabled.state_10.AC_ON");
    pushNullTransition();
    state_10_subState = AC_ON;
    //#[ state HVAC_Enabled.state_10.AC_ON.(Entry) 
    OUT_PORT(pNetwork)->set_AC_state(true);
    //#]
    NOTIFY_TRANSITION_STARTED("18");
    NOTIFY_STATE_ENTERED("ROOT.HVAC_Enabled.state_10.AC_ON.idle");
    AC_ON_subState = AC_ON_idle;
    state_10_active = AC_ON_idle;
    //#[ state HVAC_Enabled.state_10.AC_ON.idle.(Entry) 
    temp=temp;
    //#]
    AC_ON_timeout = scheduleTimeout(1000, "ROOT.HVAC_Enabled.state_10.AC_ON.idle");
    NOTIFY_TRANSITION_TERMINATED("18");
}

IOxfReactive::TakeEventStatus Network::AC_ON_handleEvent() {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    if(IS_EVENT_TYPE_OF(OMNullEventId))
        {
            //## transition 16 
            if(temp<25)
                {
                    NOTIFY_TRANSITION_STARTED("16");
                    popNullTransition();
                    switch (AC_ON_subState) {
                        // State idle
                        case AC_ON_idle:
                        {
                            cancel(AC_ON_timeout);
                            NOTIFY_STATE_EXITED("ROOT.HVAC_Enabled.state_10.AC_ON.idle");
                        }
                        break;
                        case AC_ON_accepttimeevent_17:
                        {
                            popNullTransition();
                            NOTIFY_STATE_EXITED("ROOT.HVAC_Enabled.state_10.AC_ON.accepttimeevent_17");
                        }
                        break;
                        default:
                            break;
                    }
                    AC_ON_subState = OMNonState;
                    NOTIFY_STATE_EXITED("ROOT.HVAC_Enabled.state_10.AC_ON");
                    AC_OFF_entDef();
                    NOTIFY_TRANSITION_TERMINATED("16");
                    res = eventConsumed;
                }
        }
    else if(IS_EVENT_TYPE_OF(ev_AC_SwitchOff_ArchitecturalAnalysisPkg_id))
        {
            NOTIFY_TRANSITION_STARTED("1");
            popNullTransition();
            switch (AC_ON_subState) {
                // State idle
                case AC_ON_idle:
                {
                    cancel(AC_ON_timeout);
                    NOTIFY_STATE_EXITED("ROOT.HVAC_Enabled.state_10.AC_ON.idle");
                }
                break;
                case AC_ON_accepttimeevent_17:
                {
                    popNullTransition();
                    NOTIFY_STATE_EXITED("ROOT.HVAC_Enabled.state_10.AC_ON.accepttimeevent_17");
                }
                break;
                default:
                    break;
            }
            AC_ON_subState = OMNonState;
            NOTIFY_STATE_EXITED("ROOT.HVAC_Enabled.state_10.AC_ON");
            AC_OFF_entDef();
            NOTIFY_TRANSITION_TERMINATED("1");
            res = eventConsumed;
        }
    
    
    return res;
}

IOxfReactive::TakeEventStatus Network::AC_ON_idle_handleEvent() {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    if(IS_EVENT_TYPE_OF(OMTimeoutEventId))
        {
            if(getCurrentEvent() == AC_ON_timeout)
                {
                    NOTIFY_TRANSITION_STARTED("19");
                    cancel(AC_ON_timeout);
                    NOTIFY_STATE_EXITED("ROOT.HVAC_Enabled.state_10.AC_ON.idle");
                    NOTIFY_STATE_ENTERED("ROOT.HVAC_Enabled.state_10.AC_ON.accepttimeevent_17");
                    pushNullTransition();
                    AC_ON_subState = AC_ON_accepttimeevent_17;
                    state_10_active = AC_ON_accepttimeevent_17;
                    NOTIFY_TRANSITION_TERMINATED("19");
                    res = eventConsumed;
                }
        }
    
    if(res == eventNotConsumed)
        {
            res = AC_ON_handleEvent();
        }
    return res;
}

IOxfReactive::TakeEventStatus Network::AC_ON_accepttimeevent_17_handleEvent() {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    if(IS_EVENT_TYPE_OF(OMNullEventId))
        {
            NOTIFY_TRANSITION_STARTED("20");
            popNullTransition();
            NOTIFY_STATE_EXITED("ROOT.HVAC_Enabled.state_10.AC_ON.accepttimeevent_17");
            NOTIFY_STATE_ENTERED("ROOT.HVAC_Enabled.state_10.AC_ON.idle");
            AC_ON_subState = AC_ON_idle;
            state_10_active = AC_ON_idle;
            //#[ state HVAC_Enabled.state_10.AC_ON.idle.(Entry) 
            temp=temp;
            //#]
            AC_ON_timeout = scheduleTimeout(1000, "ROOT.HVAC_Enabled.state_10.AC_ON.idle");
            NOTIFY_TRANSITION_TERMINATED("20");
            res = eventConsumed;
        }
    
    if(res == eventNotConsumed)
        {
            res = AC_ON_handleEvent();
        }
    return res;
}

void Network::AC_OFF_entDef() {
    NOTIFY_STATE_ENTERED("ROOT.HVAC_Enabled.state_10.AC_OFF");
    pushNullTransition();
    state_10_subState = AC_OFF;
    //#[ state HVAC_Enabled.state_10.AC_OFF.(Entry) 
    OUT_PORT(pNetwork)->set_AC_state(false);
    //#]
    NOTIFY_TRANSITION_STARTED("17");
    NOTIFY_STATE_ENTERED("ROOT.HVAC_Enabled.state_10.AC_OFF.idle");
    AC_OFF_subState = idle;
    state_10_active = idle;
    //#[ state HVAC_Enabled.state_10.AC_OFF.idle.(Entry) 
    temp=temp;
    //#]
    AC_OFF_timeout = scheduleTimeout(1000, "ROOT.HVAC_Enabled.state_10.AC_OFF.idle");
    NOTIFY_TRANSITION_TERMINATED("17");
}

IOxfReactive::TakeEventStatus Network::AC_OFF_handleEvent() {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    if(IS_EVENT_TYPE_OF(OMNullEventId))
        {
            //## transition 15 
            if(temp>30)
                {
                    NOTIFY_TRANSITION_STARTED("15");
                    popNullTransition();
                    switch (AC_OFF_subState) {
                        // State idle
                        case idle:
                        {
                            cancel(AC_OFF_timeout);
                            NOTIFY_STATE_EXITED("ROOT.HVAC_Enabled.state_10.AC_OFF.idle");
                        }
                        break;
                        case accepttimeevent_17:
                        {
                            popNullTransition();
                            NOTIFY_STATE_EXITED("ROOT.HVAC_Enabled.state_10.AC_OFF.accepttimeevent_17");
                        }
                        break;
                        default:
                            break;
                    }
                    AC_OFF_subState = OMNonState;
                    NOTIFY_STATE_EXITED("ROOT.HVAC_Enabled.state_10.AC_OFF");
                    AC_ON_entDef();
                    NOTIFY_TRANSITION_TERMINATED("15");
                    res = eventConsumed;
                }
        }
    else if(IS_EVENT_TYPE_OF(ev_AC_SwitchOn_ArchitecturalAnalysisPkg_id))
        {
            NOTIFY_TRANSITION_STARTED("0");
            popNullTransition();
            switch (AC_OFF_subState) {
                // State idle
                case idle:
                {
                    cancel(AC_OFF_timeout);
                    NOTIFY_STATE_EXITED("ROOT.HVAC_Enabled.state_10.AC_OFF.idle");
                }
                break;
                case accepttimeevent_17:
                {
                    popNullTransition();
                    NOTIFY_STATE_EXITED("ROOT.HVAC_Enabled.state_10.AC_OFF.accepttimeevent_17");
                }
                break;
                default:
                    break;
            }
            AC_OFF_subState = OMNonState;
            NOTIFY_STATE_EXITED("ROOT.HVAC_Enabled.state_10.AC_OFF");
            AC_ON_entDef();
            NOTIFY_TRANSITION_TERMINATED("0");
            res = eventConsumed;
        }
    
    
    return res;
}

IOxfReactive::TakeEventStatus Network::idle_handleEvent() {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    if(IS_EVENT_TYPE_OF(OMTimeoutEventId))
        {
            if(getCurrentEvent() == AC_OFF_timeout)
                {
                    NOTIFY_TRANSITION_STARTED("21");
                    cancel(AC_OFF_timeout);
                    NOTIFY_STATE_EXITED("ROOT.HVAC_Enabled.state_10.AC_OFF.idle");
                    NOTIFY_STATE_ENTERED("ROOT.HVAC_Enabled.state_10.AC_OFF.accepttimeevent_17");
                    pushNullTransition();
                    AC_OFF_subState = accepttimeevent_17;
                    state_10_active = accepttimeevent_17;
                    NOTIFY_TRANSITION_TERMINATED("21");
                    res = eventConsumed;
                }
        }
    
    if(res == eventNotConsumed)
        {
            res = AC_OFF_handleEvent();
        }
    return res;
}

IOxfReactive::TakeEventStatus Network::accepttimeevent_17_handleEvent() {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    if(IS_EVENT_TYPE_OF(OMNullEventId))
        {
            NOTIFY_TRANSITION_STARTED("22");
            popNullTransition();
            NOTIFY_STATE_EXITED("ROOT.HVAC_Enabled.state_10.AC_OFF.accepttimeevent_17");
            NOTIFY_STATE_ENTERED("ROOT.HVAC_Enabled.state_10.AC_OFF.idle");
            AC_OFF_subState = idle;
            state_10_active = idle;
            //#[ state HVAC_Enabled.state_10.AC_OFF.idle.(Entry) 
            temp=temp;
            //#]
            AC_OFF_timeout = scheduleTimeout(1000, "ROOT.HVAC_Enabled.state_10.AC_OFF.idle");
            NOTIFY_TRANSITION_TERMINATED("22");
            res = eventConsumed;
        }
    
    if(res == eventNotConsumed)
        {
            res = AC_OFF_handleEvent();
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
void OMAnimatedNetwork::serializeAttributes(AOMSAttributes* aomsAttributes) const {
    aomsAttributes->addAttribute("intensity", x2String(myReal->intensity));
    aomsAttributes->addAttribute("lightState", x2String(myReal->lightState));
    aomsAttributes->addAttribute("occupied", x2String(myReal->occupied));
    aomsAttributes->addAttribute("is_Movement", x2String(myReal->is_Movement));
    aomsAttributes->addAttribute("fireDetected", x2String(myReal->fireDetected));
    aomsAttributes->addAttribute("fireAlarm", x2String(myReal->fireAlarm));
    aomsAttributes->addAttribute("speakerVol", x2String(myReal->speakerVol));
    aomsAttributes->addAttribute("CO2Alarm", x2String(myReal->CO2Alarm));
    aomsAttributes->addAttribute("temp", x2String(myReal->temp));
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
        case Network::accepttimeevent_14:
        {
            accepttimeevent_14_serializeStates(aomsState);
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

void OMAnimatedNetwork::accepttimeevent_14_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.HVAC_Enabled.state_12.accepttimeevent_14");
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
    switch (myReal->Heating_On_subState) {
        case Network::Heating_On_idle:
        {
            Heating_On_idle_serializeStates(aomsState);
        }
        break;
        case Network::Heating_On_accepttimeevent_17:
        {
            Heating_On_accepttimeevent_17_serializeStates(aomsState);
        }
        break;
        default:
            break;
    }
}

void OMAnimatedNetwork::Heating_On_idle_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.HVAC_Enabled.state_11.Heating_On.idle");
}

void OMAnimatedNetwork::Heating_On_accepttimeevent_17_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.HVAC_Enabled.state_11.Heating_On.accepttimeevent_17");
}

void OMAnimatedNetwork::Heating_OFF_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.HVAC_Enabled.state_11.Heating_OFF");
    switch (myReal->Heating_OFF_subState) {
        case Network::Heating_OFF_idle:
        {
            Heating_OFF_idle_serializeStates(aomsState);
        }
        break;
        case Network::Heating_OFF_accepttimeevent_17:
        {
            Heating_OFF_accepttimeevent_17_serializeStates(aomsState);
        }
        break;
        default:
            break;
    }
}

void OMAnimatedNetwork::Heating_OFF_idle_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.HVAC_Enabled.state_11.Heating_OFF.idle");
}

void OMAnimatedNetwork::Heating_OFF_accepttimeevent_17_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.HVAC_Enabled.state_11.Heating_OFF.accepttimeevent_17");
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
    switch (myReal->AC_ON_subState) {
        case Network::AC_ON_idle:
        {
            AC_ON_idle_serializeStates(aomsState);
        }
        break;
        case Network::AC_ON_accepttimeevent_17:
        {
            AC_ON_accepttimeevent_17_serializeStates(aomsState);
        }
        break;
        default:
            break;
    }
}

void OMAnimatedNetwork::AC_ON_idle_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.HVAC_Enabled.state_10.AC_ON.idle");
}

void OMAnimatedNetwork::AC_ON_accepttimeevent_17_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.HVAC_Enabled.state_10.AC_ON.accepttimeevent_17");
}

void OMAnimatedNetwork::AC_OFF_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.HVAC_Enabled.state_10.AC_OFF");
    switch (myReal->AC_OFF_subState) {
        case Network::idle:
        {
            idle_serializeStates(aomsState);
        }
        break;
        case Network::accepttimeevent_17:
        {
            accepttimeevent_17_serializeStates(aomsState);
        }
        break;
        default:
            break;
    }
}

void OMAnimatedNetwork::idle_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.HVAC_Enabled.state_10.AC_OFF.idle");
}

void OMAnimatedNetwork::accepttimeevent_17_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.HVAC_Enabled.state_10.AC_OFF.accepttimeevent_17");
}

void OMAnimatedNetwork::HVAC_Disabled_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.HVAC_Disabled");
}
//#]

IMPLEMENT_REACTIVE_META_P(Network, ArchitecturalAnalysisPkg, ArchitecturalAnalysisPkg, false, OMAnimatedNetwork)

IMPLEMENT_META_OP(OMAnimatedNetwork, ArchitecturalAnalysisPkg_Network_setCO2Alarm_bool, "setCO2Alarm", FALSE, "setCO2Alarm(bool)", 1)

IMPLEMENT_OP_CALL(ArchitecturalAnalysisPkg_Network_setCO2Alarm_bool, Network, setCO2Alarm(p_CO2Alarm), NO_OP())

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

IMPLEMENT_META_OP(OMAnimatedNetwork, ArchitecturalAnalysisPkg_Network_setSpeakerVol_int, "setSpeakerVol", FALSE, "setSpeakerVol(int)", 1)

IMPLEMENT_OP_CALL(ArchitecturalAnalysisPkg_Network_setSpeakerVol_int, Network, setSpeakerVol(p_speakerVol), NO_OP())

IMPLEMENT_META_OP(OMAnimatedNetwork, ArchitecturalAnalysisPkg_Network_setTemp_int, "setTemp", FALSE, "setTemp(int)", 1)

IMPLEMENT_OP_CALL(ArchitecturalAnalysisPkg_Network_setTemp_int, Network, setTemp(p_temp), NO_OP())
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Network.cpp
*********************************************************************/
