/********************************************************************
	Rhapsody	: 9.0 
	Login		: Administrator
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: ArchitecturalAnalysisPkg
//!	Generated Date	: Thu, 22, Jun 2023  
	File Path	: DefaultComponent\DefaultConfig\ArchitecturalAnalysisPkg.cpp
*********************************************************************/

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
//## package ArchitecturalAnalysisPkg



//## event ev_CO2_Level_OverThreshold()
ev_CO2_Level_OverThreshold::ev_CO2_Level_OverThreshold() {
    setId(ev_CO2_Level_OverThreshold_ArchitecturalAnalysisPkg_id);
}

bool ev_CO2_Level_OverThreshold::isTypeOf(const short id) const {
    return (ev_CO2_Level_OverThreshold_ArchitecturalAnalysisPkg_id==id);
}

//## event ev_CO2_Level_BelowThreshold()
ev_CO2_Level_BelowThreshold::ev_CO2_Level_BelowThreshold() {
    setId(ev_CO2_Level_BelowThreshold_ArchitecturalAnalysisPkg_id);
}

bool ev_CO2_Level_BelowThreshold::isTypeOf(const short id) const {
    return (ev_CO2_Level_BelowThreshold_ArchitecturalAnalysisPkg_id==id);
}

//## event ev_Fire_Detected()
ev_Fire_Detected::ev_Fire_Detected() {
    setId(ev_Fire_Detected_ArchitecturalAnalysisPkg_id);
}

bool ev_Fire_Detected::isTypeOf(const short id) const {
    return (ev_Fire_Detected_ArchitecturalAnalysisPkg_id==id);
}

//## event ev_Fire_Distinguished()
ev_Fire_Distinguished::ev_Fire_Distinguished() {
    setId(ev_Fire_Distinguished_ArchitecturalAnalysisPkg_id);
}

bool ev_Fire_Distinguished::isTypeOf(const short id) const {
    return (ev_Fire_Distinguished_ArchitecturalAnalysisPkg_id==id);
}

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\ArchitecturalAnalysisPkg.cpp
*********************************************************************/
