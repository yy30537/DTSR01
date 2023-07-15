/********************************************************************
	Rhapsody	: 9.0 
	Login		: Yang
	Component	: DefaultComponent 
	Configuration 	: Network_Simulation
	Model Element	: ArchitecturalAnalysisPkg
//!	Generated Date	: Sat, 15, Jul 2023  
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

#define ev_gets_too_hot_SERIALIZE OM_NO_OP

#define ev_gets_too_hot_UNSERIALIZE OM_NO_OP

#define ev_gets_too_hot_CONSTRUCTOR ev_gets_too_hot()

#define ev_gets_too_cold_SERIALIZE OM_NO_OP

#define ev_gets_too_cold_UNSERIALIZE OM_NO_OP

#define ev_gets_too_cold_CONSTRUCTOR ev_gets_too_cold()

#define ev_gets_not_hot_SERIALIZE OM_NO_OP

#define ev_gets_not_hot_UNSERIALIZE OM_NO_OP

#define ev_gets_not_hot_CONSTRUCTOR ev_gets_not_hot()

#define ev_gets_not_cold_SERIALIZE OM_NO_OP

#define ev_gets_not_cold_UNSERIALIZE OM_NO_OP

#define ev_gets_not_cold_CONSTRUCTOR ev_gets_not_cold()

#define ev_SetLightIntensity_SERIALIZE OM_NO_OP

#define ev_SetLightIntensity_UNSERIALIZE OM_NO_OP

#define ev_SetLightIntensity_CONSTRUCTOR ev_SetLightIntensity()

#define ev_TurnOn_Light_SERIALIZE OM_NO_OP

#define ev_TurnOn_Light_UNSERIALIZE OM_NO_OP

#define ev_TurnOn_Light_CONSTRUCTOR ev_TurnOn_Light()

#define ev_TurnOff_Light_SERIALIZE OM_NO_OP

#define ev_TurnOff_Light_UNSERIALIZE OM_NO_OP

#define ev_TurnOff_Light_CONSTRUCTOR ev_TurnOff_Light()

#define ev_turnOnLight_SERIALIZE OM_NO_OP

#define ev_turnOnLight_UNSERIALIZE OM_NO_OP

#define ev_turnOnLight_CONSTRUCTOR ev_turnOnLight()
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

//## event ev_gets_too_hot()
ev_gets_too_hot::ev_gets_too_hot() {
    NOTIFY_EVENT_CONSTRUCTOR(ev_gets_too_hot)
    setId(ev_gets_too_hot_ArchitecturalAnalysisPkg_id);
}

bool ev_gets_too_hot::isTypeOf(const short id) const {
    return (ev_gets_too_hot_ArchitecturalAnalysisPkg_id==id);
}

IMPLEMENT_META_EVENT_P(ev_gets_too_hot, ArchitecturalAnalysisPkg, ArchitecturalAnalysisPkg, ev_gets_too_hot())

//## event ev_gets_too_cold()
ev_gets_too_cold::ev_gets_too_cold() {
    NOTIFY_EVENT_CONSTRUCTOR(ev_gets_too_cold)
    setId(ev_gets_too_cold_ArchitecturalAnalysisPkg_id);
}

bool ev_gets_too_cold::isTypeOf(const short id) const {
    return (ev_gets_too_cold_ArchitecturalAnalysisPkg_id==id);
}

IMPLEMENT_META_EVENT_P(ev_gets_too_cold, ArchitecturalAnalysisPkg, ArchitecturalAnalysisPkg, ev_gets_too_cold())

//## event ev_gets_not_hot()
ev_gets_not_hot::ev_gets_not_hot() {
    NOTIFY_EVENT_CONSTRUCTOR(ev_gets_not_hot)
    setId(ev_gets_not_hot_ArchitecturalAnalysisPkg_id);
}

bool ev_gets_not_hot::isTypeOf(const short id) const {
    return (ev_gets_not_hot_ArchitecturalAnalysisPkg_id==id);
}

IMPLEMENT_META_EVENT_P(ev_gets_not_hot, ArchitecturalAnalysisPkg, ArchitecturalAnalysisPkg, ev_gets_not_hot())

//## event ev_gets_not_cold()
ev_gets_not_cold::ev_gets_not_cold() {
    NOTIFY_EVENT_CONSTRUCTOR(ev_gets_not_cold)
    setId(ev_gets_not_cold_ArchitecturalAnalysisPkg_id);
}

bool ev_gets_not_cold::isTypeOf(const short id) const {
    return (ev_gets_not_cold_ArchitecturalAnalysisPkg_id==id);
}

IMPLEMENT_META_EVENT_P(ev_gets_not_cold, ArchitecturalAnalysisPkg, ArchitecturalAnalysisPkg, ev_gets_not_cold())

//## event ev_SetLightIntensity()
ev_SetLightIntensity::ev_SetLightIntensity() {
    NOTIFY_EVENT_CONSTRUCTOR(ev_SetLightIntensity)
    setId(ev_SetLightIntensity_ArchitecturalAnalysisPkg_id);
}

bool ev_SetLightIntensity::isTypeOf(const short id) const {
    return (ev_SetLightIntensity_ArchitecturalAnalysisPkg_id==id);
}

IMPLEMENT_META_EVENT_P(ev_SetLightIntensity, ArchitecturalAnalysisPkg, ArchitecturalAnalysisPkg, ev_SetLightIntensity())

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

/*********************************************************************
	File Path	: DefaultComponent\Network_Simulation\ArchitecturalAnalysisPkg.cpp
*********************************************************************/
