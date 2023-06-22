/*********************************************************************
	Rhapsody	: 9.0 
	Login		: Administrator
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: ArchitecturalAnalysisPkg
//!	Generated Date	: Thu, 22, Jun 2023  
	File Path	: DefaultComponent\DefaultConfig\ArchitecturalAnalysisPkg.h
*********************************************************************/

#ifndef ArchitecturalAnalysisPkg_H
#define ArchitecturalAnalysisPkg_H

//## auto_generated
#include <oxf\oxf.h>
//## auto_generated
#include <..\Profiles\SysML\SIDefinitions.h>
//## auto_generated
#include <oxf\event.h>
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

//## auto_generated
class HVAC;

//## auto_generated
class Lights;

//## auto_generated
class Microphones;

//## auto_generated
class Movement_Sensor;

//## auto_generated
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
class Weather_Forecast;

//## auto_generated
class Webcam;

//#[ ignore
#define ev_CO2_Level_OverThreshold_ArchitecturalAnalysisPkg_id 18201

#define ev_CO2_Level_BelowThreshold_ArchitecturalAnalysisPkg_id 18202

#define ev_Fire_Detected_ArchitecturalAnalysisPkg_id 18203

#define ev_Fire_Distinguished_ArchitecturalAnalysisPkg_id 18204
//#]

//## package ArchitecturalAnalysisPkg



//## event ev_CO2_Level_OverThreshold()
class ev_CO2_Level_OverThreshold : public OMEvent {
    ////    Constructors and destructors    ////
    
public :

    //## auto_generated
    ev_CO2_Level_OverThreshold();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

//## event ev_CO2_Level_BelowThreshold()
class ev_CO2_Level_BelowThreshold : public OMEvent {
    ////    Constructors and destructors    ////
    
public :

    //## auto_generated
    ev_CO2_Level_BelowThreshold();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

//## event ev_Fire_Detected()
class ev_Fire_Detected : public OMEvent {
    ////    Constructors and destructors    ////
    
public :

    //## auto_generated
    ev_Fire_Detected();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

//## event ev_Fire_Distinguished()
class ev_Fire_Distinguished : public OMEvent {
    ////    Constructors and destructors    ////
    
public :

    //## auto_generated
    ev_Fire_Distinguished();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\ArchitecturalAnalysisPkg.h
*********************************************************************/
