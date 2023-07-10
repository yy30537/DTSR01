/********************************************************************
	Rhapsody	: 9.0 
	Login		: Yang
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: ArchitecturalAnalysisPkg
//!	Generated Date	: Sun, 9, Jul 2023  
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
//## auto_generated
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
//## package ArchitecturalAnalysisPkg


//## classInstance itsHVAC
HVAC itsHVAC;

//## classInstance itsNetwork
Network itsNetwork;

#ifdef _OMINSTRUMENT
static void serializeGlobalVars(AOMSAttributes* /* aomsAttributes */);

static void RenameGlobalInstances();

IMPLEMENT_META_PACKAGE(ArchitecturalAnalysisPkg, ArchitecturalAnalysisPkg)
#endif // _OMINSTRUMENT

void ArchitecturalAnalysisPkg_initRelations() {
    {
        {
            itsNetwork.setShouldDelete(false);
        }
    }
    {
        
        itsNetwork.get_pNetwork()->setItsI_HVAC(itsHVAC.get_pHVAC()->getItsI_HVAC());
        
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

#ifdef _OMINSTRUMENT
static void serializeGlobalVars(AOMSAttributes* /* aomsAttributes */) {
}

static void RenameGlobalInstances() {
    OM_SET_INSTANCE_NAME(&itsHVAC, HVAC, "itsHVAC", AOMNoMultiplicity);
    OM_SET_INSTANCE_NAME(&itsNetwork, Network, "itsNetwork", AOMNoMultiplicity);
}
#endif // _OMINSTRUMENT

//#[ ignore
ArchitecturalAnalysisPkg_OMInitializer::ArchitecturalAnalysisPkg_OMInitializer() {
    ArchitecturalAnalysisPkg_initRelations();
    ArchitecturalAnalysisPkg_startBehavior();
}

ArchitecturalAnalysisPkg_OMInitializer::~ArchitecturalAnalysisPkg_OMInitializer() {
}
//#]

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\ArchitecturalAnalysisPkg.cpp
*********************************************************************/
