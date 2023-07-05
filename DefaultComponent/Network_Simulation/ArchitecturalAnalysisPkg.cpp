/********************************************************************
	Rhapsody	: 9.0 
	Login		: 20181759
	Component	: DefaultComponent 
	Configuration 	: Network_Simulation
	Model Element	: ArchitecturalAnalysisPkg
//!	Generated Date	: Fri, 23, Jun 2023  
	File Path	: DefaultComponent\Network_Simulation\ArchitecturalAnalysisPkg.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "ArchitecturalAnalysisPkg.h"
//## auto_generated
#include "Booking_System.h"
//## auto_generated
#include "CO2_Sensor.h"
//## auto_generated
#include "Door_Touch_Panel.h"
//## auto_generated
#include "External_Personnel.h"
//## auto_generated
#include "Fire_Sensor.h"
//## auto_generated
#include "HVAC.h"
//## auto_generated
#include "Lights.h"
//## auto_generated
#include "Microphones.h"
//## auto_generated
#include "Movement_Sensor.h"
//## auto_generated
#include "Network.h"
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
#include "Weather_Forecast.h"
//## auto_generated
#include "Webcam.h"
//#[ ignore
#define ev_CO2_Level_OverThreshold_SERIALIZE OM_NO_OP

#define ev_CO2_Level_OverThreshold_UNSERIALIZE OM_NO_OP

#define ev_CO2_Level_OverThreshold_CONSTRUCTOR ev_CO2_Level_OverThreshold()

#define ev_CO2_Level_BelowThreshold_SERIALIZE OM_NO_OP

#define ev_CO2_Level_BelowThreshold_UNSERIALIZE OM_NO_OP

#define ev_CO2_Level_BelowThreshold_CONSTRUCTOR ev_CO2_Level_BelowThreshold()

#define ev_Fire_Detected_SERIALIZE OM_NO_OP

#define ev_Fire_Detected_UNSERIALIZE OM_NO_OP

#define ev_Fire_Detected_CONSTRUCTOR ev_Fire_Detected()

#define ev_Fire_Distinguished_SERIALIZE OM_NO_OP

#define ev_Fire_Distinguished_UNSERIALIZE OM_NO_OP

#define ev_Fire_Distinguished_CONSTRUCTOR ev_Fire_Distinguished()
//#]

//## package ArchitecturalAnalysisPkg


#ifdef _OMINSTRUMENT
static void serializeGlobalVars(AOMSAttributes* /* aomsAttributes */);

IMPLEMENT_META_PACKAGE(ArchitecturalAnalysisPkg, ArchitecturalAnalysisPkg)

static void serializeGlobalVars(AOMSAttributes* /* aomsAttributes */) {
}
#endif // _OMINSTRUMENT

//## event ev_CO2_Level_OverThreshold()
ev_CO2_Level_OverThreshold::ev_CO2_Level_OverThreshold() {
    NOTIFY_EVENT_CONSTRUCTOR(ev_CO2_Level_OverThreshold)
    setId(ev_CO2_Level_OverThreshold_ArchitecturalAnalysisPkg_id);
}

bool ev_CO2_Level_OverThreshold::isTypeOf(const short id) const {
    return (ev_CO2_Level_OverThreshold_ArchitecturalAnalysisPkg_id==id);
}

IMPLEMENT_META_EVENT_P(ev_CO2_Level_OverThreshold, ArchitecturalAnalysisPkg, ArchitecturalAnalysisPkg, ev_CO2_Level_OverThreshold())

//## event ev_CO2_Level_BelowThreshold()
ev_CO2_Level_BelowThreshold::ev_CO2_Level_BelowThreshold() {
    NOTIFY_EVENT_CONSTRUCTOR(ev_CO2_Level_BelowThreshold)
    setId(ev_CO2_Level_BelowThreshold_ArchitecturalAnalysisPkg_id);
}

bool ev_CO2_Level_BelowThreshold::isTypeOf(const short id) const {
    return (ev_CO2_Level_BelowThreshold_ArchitecturalAnalysisPkg_id==id);
}

IMPLEMENT_META_EVENT_P(ev_CO2_Level_BelowThreshold, ArchitecturalAnalysisPkg, ArchitecturalAnalysisPkg, ev_CO2_Level_BelowThreshold())

//## event ev_Fire_Detected()
ev_Fire_Detected::ev_Fire_Detected() {
    NOTIFY_EVENT_CONSTRUCTOR(ev_Fire_Detected)
    setId(ev_Fire_Detected_ArchitecturalAnalysisPkg_id);
}

bool ev_Fire_Detected::isTypeOf(const short id) const {
    return (ev_Fire_Detected_ArchitecturalAnalysisPkg_id==id);
}

IMPLEMENT_META_EVENT_P(ev_Fire_Detected, ArchitecturalAnalysisPkg, ArchitecturalAnalysisPkg, ev_Fire_Detected())

//## event ev_Fire_Distinguished()
ev_Fire_Distinguished::ev_Fire_Distinguished() {
    NOTIFY_EVENT_CONSTRUCTOR(ev_Fire_Distinguished)
    setId(ev_Fire_Distinguished_ArchitecturalAnalysisPkg_id);
}

bool ev_Fire_Distinguished::isTypeOf(const short id) const {
    return (ev_Fire_Distinguished_ArchitecturalAnalysisPkg_id==id);
}

IMPLEMENT_META_EVENT_P(ev_Fire_Distinguished, ArchitecturalAnalysisPkg, ArchitecturalAnalysisPkg, ev_Fire_Distinguished())

/*********************************************************************
	File Path	: DefaultComponent\Network_Simulation\ArchitecturalAnalysisPkg.cpp
*********************************************************************/
