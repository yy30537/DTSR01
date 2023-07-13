/********************************************************************
	Rhapsody	: 9.0 
	Login		: Administrator
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: ArchitecturalAnalysisPkg
//!	Generated Date	: Thu, 13, Jul 2023  
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
//## auto_generated
#include "AC.h"
//## auto_generated
#include "Booking_System.h"
//## classInstance itsCO2_Sensor
#include "CO2_Sensor.h"
//## auto_generated
#include "Door_Touch_Panel.h"
//## auto_generated
#include "External_Personnel.h"
//## auto_generated
#include "Fire_Sensor.h"
//## auto_generated
#include "Heating.h"
//## auto_generated
#include "I_HVAC.h"
//## auto_generated
#include "Lights.h"
//## auto_generated
#include "Microphones.h"
//## auto_generated
#include "Movement_Sensor.h"
//## auto_generated
#include "Occupancy_Sensor.h"
//## auto_generated
#include "Room_Touch_Panel.h"
//## auto_generated
#include "Smart_Room.h"
//## auto_generated
#include "Smart_Screen.h"
//## auto_generated
#include "Speakers.h"
//## auto_generated
#include "Ventilation.h"
//## auto_generated
#include "Weather_Forecast.h"
//## auto_generated
#include "Webcam.h"
//## auto_generated
#include "I_CO2.h"
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
//#]

//## package ArchitecturalAnalysisPkg


#ifdef _OMINSTRUMENT
static void serializeGlobalVars(AOMSAttributes* /* aomsAttributes */);

static void RenameGlobalInstances();

IMPLEMENT_META_PACKAGE(ArchitecturalAnalysisPkg, ArchitecturalAnalysisPkg)

static void serializeGlobalVars(AOMSAttributes* /* aomsAttributes */) {
}

static void RenameGlobalInstances() {
    OM_SET_INSTANCE_NAME(&itsHVAC, HVAC, "itsHVAC", AOMNoMultiplicity);
    OM_SET_INSTANCE_NAME(&itsNetwork, Network, "itsNetwork", AOMNoMultiplicity);
    OM_SET_INSTANCE_NAME(&itsCO2_Sensor, CO2_Sensor, "itsCO2_Sensor", AOMNoMultiplicity);
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

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\ArchitecturalAnalysisPkg.cpp
*********************************************************************/
