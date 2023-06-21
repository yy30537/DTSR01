/********************************************************************
	Rhapsody	: 9.0 
	Login		: Yang
	Component	: DefaultComponent 
	Configuration 	: Network_Simulation
	Model Element	: ArchitecturalAnalysisPkg
//!	Generated Date	: Wed, 21, Jun 2023  
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
#define turn_on_light_SERIALIZE OM_NO_OP

#define turn_on_light_UNSERIALIZE OM_NO_OP

#define turn_on_light_CONSTRUCTOR turn_on_light()

#define turn_off_light_SERIALIZE OM_NO_OP

#define turn_off_light_UNSERIALIZE OM_NO_OP

#define turn_off_light_CONSTRUCTOR turn_off_light()
//#]

//## package ArchitecturalAnalysisPkg


#ifdef _OMINSTRUMENT
static void serializeGlobalVars(AOMSAttributes* /* aomsAttributes */);

IMPLEMENT_META_PACKAGE(ArchitecturalAnalysisPkg, ArchitecturalAnalysisPkg)

static void serializeGlobalVars(AOMSAttributes* /* aomsAttributes */) {
}
#endif // _OMINSTRUMENT

//## event turn_on_light()
turn_on_light::turn_on_light() {
    NOTIFY_EVENT_CONSTRUCTOR(turn_on_light)
    setId(turn_on_light_ArchitecturalAnalysisPkg_id);
}

bool turn_on_light::isTypeOf(const short id) const {
    return (turn_on_light_ArchitecturalAnalysisPkg_id==id);
}

IMPLEMENT_META_EVENT_P(turn_on_light, ArchitecturalAnalysisPkg, ArchitecturalAnalysisPkg, turn_on_light())

//## event turn_off_light()
turn_off_light::turn_off_light() {
    NOTIFY_EVENT_CONSTRUCTOR(turn_off_light)
    setId(turn_off_light_ArchitecturalAnalysisPkg_id);
}

bool turn_off_light::isTypeOf(const short id) const {
    return (turn_off_light_ArchitecturalAnalysisPkg_id==id);
}

IMPLEMENT_META_EVENT_P(turn_off_light, ArchitecturalAnalysisPkg, ArchitecturalAnalysisPkg, turn_off_light())

/*********************************************************************
	File Path	: DefaultComponent\Network_Simulation\ArchitecturalAnalysisPkg.cpp
*********************************************************************/
