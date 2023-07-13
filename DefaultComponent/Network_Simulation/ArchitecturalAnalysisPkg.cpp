/********************************************************************
	Rhapsody	: 9.0 
	Login		: Administrator
	Component	: DefaultComponent 
	Configuration 	: Network_Simulation
	Model Element	: ArchitecturalAnalysisPkg
//!	Generated Date	: Thu, 13, Jul 2023  
	File Path	: DefaultComponent\Network_Simulation\ArchitecturalAnalysisPkg.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "ArchitecturalAnalysisPkg.h"
//## auto_generated
#include "CO2_Sensor.h"
//## auto_generated
#include "HVAC.h"
//## auto_generated
#include "I_CO2.h"
//## auto_generated
#include "I_HVAC.h"
//## auto_generated
#include "Network.h"
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

#define ev_CO2_OverTH_SERIALIZE OM_NO_OP

#define ev_CO2_OverTH_UNSERIALIZE OM_NO_OP

#define ev_CO2_OverTH_CONSTRUCTOR ev_CO2_OverTH()

#define ev_CO2_UnderTH_SERIALIZE OM_NO_OP

#define ev_CO2_UnderTH_UNSERIALIZE OM_NO_OP

#define ev_CO2_UnderTH_CONSTRUCTOR ev_CO2_UnderTH()
//#]

//## package ArchitecturalAnalysisPkg


#ifdef _OMINSTRUMENT
static void serializeGlobalVars(AOMSAttributes* /* aomsAttributes */);

static void RenameGlobalInstances();

IMPLEMENT_META_PACKAGE(ArchitecturalAnalysisPkg, ArchitecturalAnalysisPkg)
#endif // _OMINSTRUMENT

void ArchitecturalAnalysisPkg_initRelations() {
    
    #ifdef _OMINSTRUMENT
    RenameGlobalInstances();
    #endif // _OMINSTRUMENT
}

#ifdef _OMINSTRUMENT
static void serializeGlobalVars(AOMSAttributes* /* aomsAttributes */) {
}

static void RenameGlobalInstances() {
}
#endif // _OMINSTRUMENT

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

//## event ev_CO2_OverTH()
ev_CO2_OverTH::ev_CO2_OverTH() {
    NOTIFY_EVENT_CONSTRUCTOR(ev_CO2_OverTH)
    setId(ev_CO2_OverTH_ArchitecturalAnalysisPkg_id);
}

bool ev_CO2_OverTH::isTypeOf(const short id) const {
    return (ev_CO2_OverTH_ArchitecturalAnalysisPkg_id==id);
}

IMPLEMENT_META_EVENT_P(ev_CO2_OverTH, ArchitecturalAnalysisPkg, ArchitecturalAnalysisPkg, ev_CO2_OverTH())

//## event ev_CO2_UnderTH()
ev_CO2_UnderTH::ev_CO2_UnderTH() {
    NOTIFY_EVENT_CONSTRUCTOR(ev_CO2_UnderTH)
    setId(ev_CO2_UnderTH_ArchitecturalAnalysisPkg_id);
}

bool ev_CO2_UnderTH::isTypeOf(const short id) const {
    return (ev_CO2_UnderTH_ArchitecturalAnalysisPkg_id==id);
}

IMPLEMENT_META_EVENT_P(ev_CO2_UnderTH, ArchitecturalAnalysisPkg, ArchitecturalAnalysisPkg, ev_CO2_UnderTH())

/*********************************************************************
	File Path	: DefaultComponent\Network_Simulation\ArchitecturalAnalysisPkg.cpp
*********************************************************************/
