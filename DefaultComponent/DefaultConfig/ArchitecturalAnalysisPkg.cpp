/********************************************************************
	Rhapsody	: 9.0 
	Login		: Administrator
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: ArchitecturalAnalysisPkg
//!	Generated Date	: Sun, 16, Jul 2023  
	File Path	: DefaultComponent\DefaultConfig\ArchitecturalAnalysisPkg.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "ArchitecturalAnalysisPkg.h"
//## classInstance itsHVAC
#include "HVAC.h"
//## classInstance itsNetwork
#include "Network.h"
//## classInstance itsBooking_System
#include "Booking_System.h"
//## classInstance itsCO2_Sensor
#include "CO2_Sensor.h"
//## auto_generated
#include "Door_Touch_Panel.h"
//## auto_generated
#include "External_Personnel.h"
//## classInstance itsFire_Sensor
#include "Fire_Sensor.h"
//## auto_generated
#include "I_HVAC.h"
//## classInstance itsLights
#include "Lights.h"
//## classInstance itsMicrophones
#include "Microphones.h"
//## classInstance itsMovement_Sensor
#include "Movement_Sensor.h"
//## classInstance itsOccupancy_Sensor
#include "Occupancy_Sensor.h"
//## auto_generated
#include "Room_Touch_Panel.h"
//## auto_generated
#include "Smart_Room.h"
//## classInstance itsSmart_Screen
#include "Smart_Screen.h"
//## classInstance itsSpeakers
#include "Speakers.h"
//## classInstance itsWeather_Forecast
#include "Weather_Forecast.h"
//## classInstance itsWebcam
#include "Webcam.h"
//## auto_generated
#include "I_CO2.h"
//## auto_generated
#include "I_Weather.h"
//## auto_generated
#include "I_Light.h"
//## auto_generated
#include "I_OS.h"
//## auto_generated
#include "I_BS.h"
//## auto_generated
#include "I_FS.h"
//## auto_generated
#include "I_Mic.h"
//## auto_generated
#include "I_Spkr.h"
//## auto_generated
#include "I_SS.h"
//## auto_generated
#include "I_WC.h"
//## auto_generated
#include "I_MS.h"
//#[ ignore
#define ev_AC_SwitchOn_SERIALIZE OM_NO_OP

#define ev_AC_SwitchOn_UNSERIALIZE OM_NO_OP

#define ev_AC_SwitchOn_CONSTRUCTOR ev_AC_SwitchOn()

#define ev_AC_SwitchOff_SERIALIZE OM_NO_OP

#define ev_AC_SwitchOff_UNSERIALIZE OM_NO_OP

#define ev_AC_SwitchOff_CONSTRUCTOR ev_AC_SwitchOff()

#define ev_Heating_SwitchOn_SERIALIZE OM_NO_OP

#define ev_Heating_SwitchOn_UNSERIALIZE OM_NO_OP

#define ev_Heating_SwitchOn_CONSTRUCTOR ev_Heating_SwitchOn()

#define ev_Heating_SwitchOff_SERIALIZE OM_NO_OP

#define ev_Heating_SwitchOff_UNSERIALIZE OM_NO_OP

#define ev_Heating_SwitchOff_CONSTRUCTOR ev_Heating_SwitchOff()

#define ev_Vent_SwitchOn_SERIALIZE OM_NO_OP

#define ev_Vent_SwitchOn_UNSERIALIZE OM_NO_OP

#define ev_Vent_SwitchOn_CONSTRUCTOR ev_Vent_SwitchOn()

#define ev_Vent_SwitchOff_SERIALIZE OM_NO_OP

#define ev_Vent_SwitchOff_UNSERIALIZE OM_NO_OP

#define ev_Vent_SwitchOff_CONSTRUCTOR ev_Vent_SwitchOff()

#define ev_HVAC_SwitchOff_SERIALIZE OM_NO_OP

#define ev_HVAC_SwitchOff_UNSERIALIZE OM_NO_OP

#define ev_HVAC_SwitchOff_CONSTRUCTOR ev_HVAC_SwitchOff()

#define ev_HVAC_SwitchOn_SERIALIZE OM_NO_OP

#define ev_HVAC_SwitchOn_UNSERIALIZE OM_NO_OP

#define ev_HVAC_SwitchOn_CONSTRUCTOR ev_HVAC_SwitchOn()

#define ev_CO2_AboveTH_SERIALIZE OM_NO_OP

#define ev_CO2_AboveTH_UNSERIALIZE OM_NO_OP

#define ev_CO2_AboveTH_CONSTRUCTOR ev_CO2_AboveTH()

#define ev_CO2_BelowTH_SERIALIZE OM_NO_OP

#define ev_CO2_BelowTH_UNSERIALIZE OM_NO_OP

#define ev_CO2_BelowTH_CONSTRUCTOR ev_CO2_BelowTH()

#define ev_TurnOn_Light_SERIALIZE OM_NO_OP

#define ev_TurnOn_Light_UNSERIALIZE OM_NO_OP

#define ev_TurnOn_Light_CONSTRUCTOR ev_TurnOn_Light()

#define ev_TurnOff_Light_SERIALIZE OM_NO_OP

#define ev_TurnOff_Light_UNSERIALIZE OM_NO_OP

#define ev_TurnOff_Light_CONSTRUCTOR ev_TurnOff_Light()

#define ev_turnOnLight_SERIALIZE OM_NO_OP

#define ev_turnOnLight_UNSERIALIZE OM_NO_OP

#define ev_turnOnLight_CONSTRUCTOR ev_turnOnLight()

#define ev_DisableFireAlarm_SERIALIZE OM_NO_OP

#define ev_DisableFireAlarm_UNSERIALIZE OM_NO_OP

#define ev_DisableFireAlarm_CONSTRUCTOR ev_DisableFireAlarm()

#define ev_turnon_SS_SERIALIZE OM_NO_OP

#define ev_turnon_SS_UNSERIALIZE OM_NO_OP

#define ev_turnon_SS_CONSTRUCTOR ev_turnon_SS()

#define ev_turnoff_SS_SERIALIZE OM_NO_OP

#define ev_turnoff_SS_UNSERIALIZE OM_NO_OP

#define ev_turnoff_SS_CONSTRUCTOR ev_turnoff_SS()

#define ev_turnon_WC_SERIALIZE OM_NO_OP

#define ev_turnon_WC_UNSERIALIZE OM_NO_OP

#define ev_turnon_WC_CONSTRUCTOR ev_turnon_WC()

#define ev_turnoff_WC_SERIALIZE OM_NO_OP

#define ev_turnoff_WC_UNSERIALIZE OM_NO_OP

#define ev_turnoff_WC_CONSTRUCTOR ev_turnoff_WC()

#define ev_turnon_mic_SERIALIZE OM_NO_OP

#define ev_turnon_mic_UNSERIALIZE OM_NO_OP

#define ev_turnon_mic_CONSTRUCTOR ev_turnon_mic()

#define ev_turnoff_mic_SERIALIZE OM_NO_OP

#define ev_turnoff_mic_UNSERIALIZE OM_NO_OP

#define ev_turnoff_mic_CONSTRUCTOR ev_turnoff_mic()

#define ev_turnon_spkr_SERIALIZE OM_NO_OP

#define ev_turnon_spkr_UNSERIALIZE OM_NO_OP

#define ev_turnon_spkr_CONSTRUCTOR ev_turnon_spkr()

#define ev_turnoff_spkr_SERIALIZE OM_NO_OP

#define ev_turnoff_spkr_UNSERIALIZE OM_NO_OP

#define ev_turnoff_spkr_CONSTRUCTOR ev_turnoff_spkr()
//#]

//## package ArchitecturalAnalysisPkg


#ifdef _OMINSTRUMENT
static void serializeGlobalVars(AOMSAttributes* /* aomsAttributes */);

static void RenameGlobalInstances();

IMPLEMENT_META_PACKAGE(ArchitecturalAnalysisPkg, ArchitecturalAnalysisPkg)

static void serializeGlobalVars(AOMSAttributes* /* aomsAttributes */) {
}

static void RenameGlobalInstances() {
    OM_SET_INSTANCE_NAME(&itsCO2_Sensor, CO2_Sensor, "itsCO2_Sensor", AOMNoMultiplicity);
    OM_SET_INSTANCE_NAME(&itsHVAC, HVAC, "itsHVAC", AOMNoMultiplicity);
    OM_SET_INSTANCE_NAME(&itsLights, Lights, "itsLights", AOMNoMultiplicity);
    OM_SET_INSTANCE_NAME(&itsNetwork, Network, "itsNetwork", AOMNoMultiplicity);
    OM_SET_INSTANCE_NAME(&itsOccupancy_Sensor, Occupancy_Sensor, "itsOccupancy_Sensor", AOMNoMultiplicity);
    OM_SET_INSTANCE_NAME(&itsWeather_Forecast, Weather_Forecast, "itsWeather_Forecast", AOMNoMultiplicity);
    OM_SET_INSTANCE_NAME(&itsFire_Sensor, Fire_Sensor, "itsFire_Sensor", AOMNoMultiplicity);
    OM_SET_INSTANCE_NAME(&itsMicrophones, Microphones, "itsMicrophones", AOMNoMultiplicity);
    OM_SET_INSTANCE_NAME(&itsSmart_Screen, Smart_Screen, "itsSmart_Screen", AOMNoMultiplicity);
    OM_SET_INSTANCE_NAME(&itsSpeakers, Speakers, "itsSpeakers", AOMNoMultiplicity);
    OM_SET_INSTANCE_NAME(&itsWebcam, Webcam, "itsWebcam", AOMNoMultiplicity);
    OM_SET_INSTANCE_NAME(&itsBooking_System, Booking_System, "itsBooking_System", AOMNoMultiplicity);
    OM_SET_INSTANCE_NAME(&itsMovement_Sensor, Movement_Sensor, "itsMovement_Sensor", AOMNoMultiplicity);
}
#endif // _OMINSTRUMENT

//## classInstance itsHVAC
HVAC itsHVAC;

//## classInstance itsNetwork
Network itsNetwork;

void ArchitecturalAnalysisPkg_initRelations() {
    {
        {
            itsNetwork.setShouldDelete(false);
        }
    }
    {
        
        itsNetwork.get_pNetwork()->setItsI_HVAC(itsHVAC.get_pHVAC()->getItsI_HVAC());
        
    }
    {
        
        itsNetwork.get_pNetwork()->setItsI_CO2(itsCO2_Sensor.get_pCO2()->getItsI_CO2());
        
    }
    {
        
        itsNetwork.get_pNetwork()->setItsI_Weather(itsWeather_Forecast.get_pWeatherForecast()->getItsI_Weather());
        
    }
    {
        
        itsNetwork.get_pNetwork()->setItsI_Light(itsLights.get_pLights()->getItsI_Light());
        
    }
    {
        
        itsNetwork.get_pNetwork()->setItsI_OS(itsOccupancy_Sensor.get_pOS()->getItsI_OS());
        
    }
    {
        
        itsNetwork.get_pNetwork()->setItsI_FS(itsFire_Sensor.get_pFS()->getItsI_FS());
        
    }
    {
        
        itsNetwork.get_pNetwork()->setItsI_Mic(itsMicrophones.get_pMic()->getItsI_Mic());
        
    }
    {
        
        itsNetwork.get_pNetwork()->setItsI_SS(itsSmart_Screen.get_pSmartScreen()->getItsI_SS());
        
    }
    {
        
        itsNetwork.get_pNetwork()->setItsI_Spkr(itsSpeakers.get_pSpeakers()->getItsI_Spkr());
        
    }
    {
        
        itsNetwork.get_pNetwork()->setItsI_WC(itsWebcam.get_pWebcam()->getItsI_WC());
        
    }
    {
        
        itsNetwork.get_pNetwork()->setItsI_BS(itsBooking_System.get_pBook()->getItsI_BS());
        
    }
    {
        
        itsNetwork.get_pNetwork()->setItsI_MS(itsMovement_Sensor.get_pMS()->getItsI_MS());
        
    }
    
    #ifdef _OMINSTRUMENT
    RenameGlobalInstances();
    #endif // _OMINSTRUMENT
}

bool ArchitecturalAnalysisPkg_startBehavior() {
    bool done = true;
    done &= itsNetwork.startBehavior();
    return done;
}

//## classInstance itsCO2_Sensor
CO2_Sensor itsCO2_Sensor;

//## classInstance itsWeather_Forecast
Weather_Forecast itsWeather_Forecast;

//## classInstance itsLights
Lights itsLights;

//## classInstance itsOccupancy_Sensor
Occupancy_Sensor itsOccupancy_Sensor;

//## classInstance itsBooking_System
Booking_System itsBooking_System;

//## classInstance itsFire_Sensor
Fire_Sensor itsFire_Sensor;

//## classInstance itsMicrophones
Microphones itsMicrophones;

//## classInstance itsSmart_Screen
Smart_Screen itsSmart_Screen;

//## classInstance itsSpeakers
Speakers itsSpeakers;

//## classInstance itsWebcam
Webcam itsWebcam;

//## classInstance itsMovement_Sensor
Movement_Sensor itsMovement_Sensor;

//#[ ignore
ArchitecturalAnalysisPkg_OMInitializer::ArchitecturalAnalysisPkg_OMInitializer() {
    ArchitecturalAnalysisPkg_initRelations();
    ArchitecturalAnalysisPkg_startBehavior();
}

ArchitecturalAnalysisPkg_OMInitializer::~ArchitecturalAnalysisPkg_OMInitializer() {
}
//#]

//## event ev_AC_SwitchOn()
ev_AC_SwitchOn::ev_AC_SwitchOn() {
    NOTIFY_EVENT_CONSTRUCTOR(ev_AC_SwitchOn)
    setId(ev_AC_SwitchOn_ArchitecturalAnalysisPkg_id);
}

bool ev_AC_SwitchOn::isTypeOf(const short id) const {
    return (ev_AC_SwitchOn_ArchitecturalAnalysisPkg_id==id);
}

IMPLEMENT_META_EVENT_P(ev_AC_SwitchOn, ArchitecturalAnalysisPkg, ArchitecturalAnalysisPkg, ev_AC_SwitchOn())

//## event ev_AC_SwitchOff()
ev_AC_SwitchOff::ev_AC_SwitchOff() {
    NOTIFY_EVENT_CONSTRUCTOR(ev_AC_SwitchOff)
    setId(ev_AC_SwitchOff_ArchitecturalAnalysisPkg_id);
}

bool ev_AC_SwitchOff::isTypeOf(const short id) const {
    return (ev_AC_SwitchOff_ArchitecturalAnalysisPkg_id==id);
}

IMPLEMENT_META_EVENT_P(ev_AC_SwitchOff, ArchitecturalAnalysisPkg, ArchitecturalAnalysisPkg, ev_AC_SwitchOff())

//## event ev_Heating_SwitchOn()
ev_Heating_SwitchOn::ev_Heating_SwitchOn() {
    NOTIFY_EVENT_CONSTRUCTOR(ev_Heating_SwitchOn)
    setId(ev_Heating_SwitchOn_ArchitecturalAnalysisPkg_id);
}

bool ev_Heating_SwitchOn::isTypeOf(const short id) const {
    return (ev_Heating_SwitchOn_ArchitecturalAnalysisPkg_id==id);
}

IMPLEMENT_META_EVENT_P(ev_Heating_SwitchOn, ArchitecturalAnalysisPkg, ArchitecturalAnalysisPkg, ev_Heating_SwitchOn())

//## event ev_Heating_SwitchOff()
ev_Heating_SwitchOff::ev_Heating_SwitchOff() {
    NOTIFY_EVENT_CONSTRUCTOR(ev_Heating_SwitchOff)
    setId(ev_Heating_SwitchOff_ArchitecturalAnalysisPkg_id);
}

bool ev_Heating_SwitchOff::isTypeOf(const short id) const {
    return (ev_Heating_SwitchOff_ArchitecturalAnalysisPkg_id==id);
}

IMPLEMENT_META_EVENT_P(ev_Heating_SwitchOff, ArchitecturalAnalysisPkg, ArchitecturalAnalysisPkg, ev_Heating_SwitchOff())

//## event ev_Vent_SwitchOn()
ev_Vent_SwitchOn::ev_Vent_SwitchOn() {
    NOTIFY_EVENT_CONSTRUCTOR(ev_Vent_SwitchOn)
    setId(ev_Vent_SwitchOn_ArchitecturalAnalysisPkg_id);
}

bool ev_Vent_SwitchOn::isTypeOf(const short id) const {
    return (ev_Vent_SwitchOn_ArchitecturalAnalysisPkg_id==id);
}

IMPLEMENT_META_EVENT_P(ev_Vent_SwitchOn, ArchitecturalAnalysisPkg, ArchitecturalAnalysisPkg, ev_Vent_SwitchOn())

//## event ev_Vent_SwitchOff()
ev_Vent_SwitchOff::ev_Vent_SwitchOff() {
    NOTIFY_EVENT_CONSTRUCTOR(ev_Vent_SwitchOff)
    setId(ev_Vent_SwitchOff_ArchitecturalAnalysisPkg_id);
}

bool ev_Vent_SwitchOff::isTypeOf(const short id) const {
    return (ev_Vent_SwitchOff_ArchitecturalAnalysisPkg_id==id);
}

IMPLEMENT_META_EVENT_P(ev_Vent_SwitchOff, ArchitecturalAnalysisPkg, ArchitecturalAnalysisPkg, ev_Vent_SwitchOff())

//## event ev_HVAC_SwitchOff()
ev_HVAC_SwitchOff::ev_HVAC_SwitchOff() {
    NOTIFY_EVENT_CONSTRUCTOR(ev_HVAC_SwitchOff)
    setId(ev_HVAC_SwitchOff_ArchitecturalAnalysisPkg_id);
}

bool ev_HVAC_SwitchOff::isTypeOf(const short id) const {
    return (ev_HVAC_SwitchOff_ArchitecturalAnalysisPkg_id==id);
}

IMPLEMENT_META_EVENT_P(ev_HVAC_SwitchOff, ArchitecturalAnalysisPkg, ArchitecturalAnalysisPkg, ev_HVAC_SwitchOff())

//## event ev_HVAC_SwitchOn()
ev_HVAC_SwitchOn::ev_HVAC_SwitchOn() {
    NOTIFY_EVENT_CONSTRUCTOR(ev_HVAC_SwitchOn)
    setId(ev_HVAC_SwitchOn_ArchitecturalAnalysisPkg_id);
}

bool ev_HVAC_SwitchOn::isTypeOf(const short id) const {
    return (ev_HVAC_SwitchOn_ArchitecturalAnalysisPkg_id==id);
}

IMPLEMENT_META_EVENT_P(ev_HVAC_SwitchOn, ArchitecturalAnalysisPkg, ArchitecturalAnalysisPkg, ev_HVAC_SwitchOn())

//## event ev_CO2_AboveTH()
ev_CO2_AboveTH::ev_CO2_AboveTH() {
    NOTIFY_EVENT_CONSTRUCTOR(ev_CO2_AboveTH)
    setId(ev_CO2_AboveTH_ArchitecturalAnalysisPkg_id);
}

bool ev_CO2_AboveTH::isTypeOf(const short id) const {
    return (ev_CO2_AboveTH_ArchitecturalAnalysisPkg_id==id);
}

IMPLEMENT_META_EVENT_P(ev_CO2_AboveTH, ArchitecturalAnalysisPkg, ArchitecturalAnalysisPkg, ev_CO2_AboveTH())

//## event ev_CO2_BelowTH()
ev_CO2_BelowTH::ev_CO2_BelowTH() {
    NOTIFY_EVENT_CONSTRUCTOR(ev_CO2_BelowTH)
    setId(ev_CO2_BelowTH_ArchitecturalAnalysisPkg_id);
}

bool ev_CO2_BelowTH::isTypeOf(const short id) const {
    return (ev_CO2_BelowTH_ArchitecturalAnalysisPkg_id==id);
}

IMPLEMENT_META_EVENT_P(ev_CO2_BelowTH, ArchitecturalAnalysisPkg, ArchitecturalAnalysisPkg, ev_CO2_BelowTH())

//## event ev_TurnOn_Light()
ev_TurnOn_Light::ev_TurnOn_Light() {
    NOTIFY_EVENT_CONSTRUCTOR(ev_TurnOn_Light)
    setId(ev_TurnOn_Light_ArchitecturalAnalysisPkg_id);
}

bool ev_TurnOn_Light::isTypeOf(const short id) const {
    return (ev_TurnOn_Light_ArchitecturalAnalysisPkg_id==id);
}

IMPLEMENT_META_EVENT_P(ev_TurnOn_Light, ArchitecturalAnalysisPkg, ArchitecturalAnalysisPkg, ev_TurnOn_Light())

//## event ev_TurnOff_Light()
ev_TurnOff_Light::ev_TurnOff_Light() {
    NOTIFY_EVENT_CONSTRUCTOR(ev_TurnOff_Light)
    setId(ev_TurnOff_Light_ArchitecturalAnalysisPkg_id);
}

bool ev_TurnOff_Light::isTypeOf(const short id) const {
    return (ev_TurnOff_Light_ArchitecturalAnalysisPkg_id==id);
}

IMPLEMENT_META_EVENT_P(ev_TurnOff_Light, ArchitecturalAnalysisPkg, ArchitecturalAnalysisPkg, ev_TurnOff_Light())

//## event ev_turnOnLight()
ev_turnOnLight::ev_turnOnLight() {
    NOTIFY_EVENT_CONSTRUCTOR(ev_turnOnLight)
    setId(ev_turnOnLight_ArchitecturalAnalysisPkg_id);
}

bool ev_turnOnLight::isTypeOf(const short id) const {
    return (ev_turnOnLight_ArchitecturalAnalysisPkg_id==id);
}

IMPLEMENT_META_EVENT_P(ev_turnOnLight, ArchitecturalAnalysisPkg, ArchitecturalAnalysisPkg, ev_turnOnLight())

//## event ev_DisableFireAlarm()
ev_DisableFireAlarm::ev_DisableFireAlarm() {
    NOTIFY_EVENT_CONSTRUCTOR(ev_DisableFireAlarm)
    setId(ev_DisableFireAlarm_ArchitecturalAnalysisPkg_id);
}

bool ev_DisableFireAlarm::isTypeOf(const short id) const {
    return (ev_DisableFireAlarm_ArchitecturalAnalysisPkg_id==id);
}

IMPLEMENT_META_EVENT_P(ev_DisableFireAlarm, ArchitecturalAnalysisPkg, ArchitecturalAnalysisPkg, ev_DisableFireAlarm())

//## event ev_turnon_SS()
ev_turnon_SS::ev_turnon_SS() {
    NOTIFY_EVENT_CONSTRUCTOR(ev_turnon_SS)
    setId(ev_turnon_SS_ArchitecturalAnalysisPkg_id);
}

bool ev_turnon_SS::isTypeOf(const short id) const {
    return (ev_turnon_SS_ArchitecturalAnalysisPkg_id==id);
}

IMPLEMENT_META_EVENT_P(ev_turnon_SS, ArchitecturalAnalysisPkg, ArchitecturalAnalysisPkg, ev_turnon_SS())

//## event ev_turnoff_SS()
ev_turnoff_SS::ev_turnoff_SS() {
    NOTIFY_EVENT_CONSTRUCTOR(ev_turnoff_SS)
    setId(ev_turnoff_SS_ArchitecturalAnalysisPkg_id);
}

bool ev_turnoff_SS::isTypeOf(const short id) const {
    return (ev_turnoff_SS_ArchitecturalAnalysisPkg_id==id);
}

IMPLEMENT_META_EVENT_P(ev_turnoff_SS, ArchitecturalAnalysisPkg, ArchitecturalAnalysisPkg, ev_turnoff_SS())

//## event ev_turnon_WC()
ev_turnon_WC::ev_turnon_WC() {
    NOTIFY_EVENT_CONSTRUCTOR(ev_turnon_WC)
    setId(ev_turnon_WC_ArchitecturalAnalysisPkg_id);
}

bool ev_turnon_WC::isTypeOf(const short id) const {
    return (ev_turnon_WC_ArchitecturalAnalysisPkg_id==id);
}

IMPLEMENT_META_EVENT_P(ev_turnon_WC, ArchitecturalAnalysisPkg, ArchitecturalAnalysisPkg, ev_turnon_WC())

//## event ev_turnoff_WC()
ev_turnoff_WC::ev_turnoff_WC() {
    NOTIFY_EVENT_CONSTRUCTOR(ev_turnoff_WC)
    setId(ev_turnoff_WC_ArchitecturalAnalysisPkg_id);
}

bool ev_turnoff_WC::isTypeOf(const short id) const {
    return (ev_turnoff_WC_ArchitecturalAnalysisPkg_id==id);
}

IMPLEMENT_META_EVENT_P(ev_turnoff_WC, ArchitecturalAnalysisPkg, ArchitecturalAnalysisPkg, ev_turnoff_WC())

//## event ev_turnon_mic()
ev_turnon_mic::ev_turnon_mic() {
    NOTIFY_EVENT_CONSTRUCTOR(ev_turnon_mic)
    setId(ev_turnon_mic_ArchitecturalAnalysisPkg_id);
}

bool ev_turnon_mic::isTypeOf(const short id) const {
    return (ev_turnon_mic_ArchitecturalAnalysisPkg_id==id);
}

IMPLEMENT_META_EVENT_P(ev_turnon_mic, ArchitecturalAnalysisPkg, ArchitecturalAnalysisPkg, ev_turnon_mic())

//## event ev_turnoff_mic()
ev_turnoff_mic::ev_turnoff_mic() {
    NOTIFY_EVENT_CONSTRUCTOR(ev_turnoff_mic)
    setId(ev_turnoff_mic_ArchitecturalAnalysisPkg_id);
}

bool ev_turnoff_mic::isTypeOf(const short id) const {
    return (ev_turnoff_mic_ArchitecturalAnalysisPkg_id==id);
}

IMPLEMENT_META_EVENT_P(ev_turnoff_mic, ArchitecturalAnalysisPkg, ArchitecturalAnalysisPkg, ev_turnoff_mic())

//## event ev_turnon_spkr()
ev_turnon_spkr::ev_turnon_spkr() {
    NOTIFY_EVENT_CONSTRUCTOR(ev_turnon_spkr)
    setId(ev_turnon_spkr_ArchitecturalAnalysisPkg_id);
}

bool ev_turnon_spkr::isTypeOf(const short id) const {
    return (ev_turnon_spkr_ArchitecturalAnalysisPkg_id==id);
}

IMPLEMENT_META_EVENT_P(ev_turnon_spkr, ArchitecturalAnalysisPkg, ArchitecturalAnalysisPkg, ev_turnon_spkr())

//## event ev_turnoff_spkr()
ev_turnoff_spkr::ev_turnoff_spkr() {
    NOTIFY_EVENT_CONSTRUCTOR(ev_turnoff_spkr)
    setId(ev_turnoff_spkr_ArchitecturalAnalysisPkg_id);
}

bool ev_turnoff_spkr::isTypeOf(const short id) const {
    return (ev_turnoff_spkr_ArchitecturalAnalysisPkg_id==id);
}

IMPLEMENT_META_EVENT_P(ev_turnoff_spkr, ArchitecturalAnalysisPkg, ArchitecturalAnalysisPkg, ev_turnoff_spkr())

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\ArchitecturalAnalysisPkg.cpp
*********************************************************************/
