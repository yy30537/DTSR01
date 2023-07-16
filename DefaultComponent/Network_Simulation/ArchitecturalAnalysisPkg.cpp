/********************************************************************
	Rhapsody	: 9.0 
	Login		: Administrator
	Component	: DefaultComponent 
	Configuration 	: Network_Simulation
	Model Element	: ArchitecturalAnalysisPkg
//!	Generated Date	: Sun, 16, Jul 2023  
	File Path	: DefaultComponent\Network_Simulation\ArchitecturalAnalysisPkg.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "ArchitecturalAnalysisPkg.h"
//## auto_generated
#include "HVAC.h"
//## auto_generated
#include "Network.h"
//## auto_generated
#include "CO2_Sensor.h"
//## auto_generated
#include "I_HVAC.h"
//## auto_generated
#include "Lights.h"
//## auto_generated
#include "Movement_Sensor.h"
//## auto_generated
#include "Occupancy_Sensor.h"
//## auto_generated
#include "Weather_Forecast.h"
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
//#]

//## package ArchitecturalAnalysisPkg


#ifdef _OMINSTRUMENT
static void serializeGlobalVars(AOMSAttributes* /* aomsAttributes */);

static void RenameGlobalInstances();

IMPLEMENT_META_PACKAGE(ArchitecturalAnalysisPkg, ArchitecturalAnalysisPkg)

static void serializeGlobalVars(AOMSAttributes* /* aomsAttributes */) {
}

static void RenameGlobalInstances() {
}
#endif // _OMINSTRUMENT

void ArchitecturalAnalysisPkg_initRelations() {
    
    #ifdef _OMINSTRUMENT
    RenameGlobalInstances();
    #endif // _OMINSTRUMENT
}

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

/*********************************************************************
	File Path	: DefaultComponent\Network_Simulation\ArchitecturalAnalysisPkg.cpp
*********************************************************************/
