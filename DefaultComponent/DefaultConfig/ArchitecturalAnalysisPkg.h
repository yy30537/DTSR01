/*********************************************************************
	Rhapsody	: 9.0 
	Login		: Yang
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: ArchitecturalAnalysisPkg
//!	Generated Date	: Sun, 9, Jul 2023  
	File Path	: DefaultComponent\DefaultConfig\ArchitecturalAnalysisPkg.h
*********************************************************************/

#ifndef ArchitecturalAnalysisPkg_H
#define ArchitecturalAnalysisPkg_H

//## auto_generated
#include <oxf\oxf.h>
//## auto_generated
#include <..\Profiles\SysML\SIDefinitions.h>
//## auto_generated
#include <aom\aom.h>
//## auto_generated
class AC;

//## auto_generated
class Booking_System;

//## auto_generated
class CO2_Sensor;

//## auto_generated
class Door_Touch_Panel;

//## auto_generated
class External_Personnel;

//## auto_generated
class Fire_Sensor;

//## classInstance itsHVAC
class HVAC;

//## auto_generated
class Heating;

//## auto_generated
class I_HVAC;

//## auto_generated
class Lights;

//## auto_generated
class Microphones;

//## auto_generated
class Movement_Sensor;

//## classInstance itsNetwork
class Network;

//## auto_generated
class Occupancy_Sensor;

//## auto_generated
class Room_Touch_Panel;

//## auto_generated
class Smart_Room;

//## auto_generated
class Smart_Screen;

//## auto_generated
class Speakers;

//## auto_generated
class Ventilation;

//## auto_generated
class Weather_Forecast;

//## auto_generated
class Webcam;

//## package ArchitecturalAnalysisPkg


//## classInstance itsHVAC
extern HVAC itsHVAC;

//## classInstance itsNetwork
extern Network itsNetwork;

//## auto_generated
void ArchitecturalAnalysisPkg_initRelations();

//## auto_generated
bool ArchitecturalAnalysisPkg_startBehavior();

//#[ ignore
class ArchitecturalAnalysisPkg_OMInitializer {
    ////    Constructors and destructors    ////
    
public :

    //## auto_generated
    ArchitecturalAnalysisPkg_OMInitializer();
    
    //## auto_generated
    ~ArchitecturalAnalysisPkg_OMInitializer();
};
//#]

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\ArchitecturalAnalysisPkg.h
*********************************************************************/
