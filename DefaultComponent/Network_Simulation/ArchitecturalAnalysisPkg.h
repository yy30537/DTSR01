/*********************************************************************
	Rhapsody	: 9.0 
	Login		: Yang
	Component	: DefaultComponent 
	Configuration 	: Network_Simulation
	Model Element	: ArchitecturalAnalysisPkg
//!	Generated Date	: Wed, 21, Jun 2023  
	File Path	: DefaultComponent\Network_Simulation\ArchitecturalAnalysisPkg.h
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
#include <oxf\event.h>
//## auto_generated
class Booking_System;

//## auto_generated
class CO2_Sensor;

//## auto_generated
class Door_Touch_Panel;

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
#define turn_on_light_ArchitecturalAnalysisPkg_id 18201

#define turn_off_light_ArchitecturalAnalysisPkg_id 18202
//#]

//## package ArchitecturalAnalysisPkg



//## event turn_on_light()
class turn_on_light : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedturn_on_light;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    turn_on_light();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedturn_on_light : virtual public AOMEvent {
    DECLARE_META_EVENT(turn_on_light)
};
//#]
#endif // _OMINSTRUMENT

//## event turn_off_light()
class turn_off_light : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedturn_off_light;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    turn_off_light();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedturn_off_light : virtual public AOMEvent {
    DECLARE_META_EVENT(turn_off_light)
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\Network_Simulation\ArchitecturalAnalysisPkg.h
*********************************************************************/
