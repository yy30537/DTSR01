/*********************************************************************
	Rhapsody	: 9.0 
	Login		: Administrator
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Network
//!	Generated Date	: Thu, 22, Jun 2023  
	File Path	: DefaultComponent\DefaultConfig\Network.h
*********************************************************************/

#ifndef Network_H
#define Network_H

//## auto_generated
#include <oxf\oxf.h>
//## auto_generated
#include <..\Profiles\SysML\SIDefinitions.h>
//## auto_generated
#include "ArchitecturalAnalysisPkg.h"
//## auto_generated
#include <oxf\omreactive.h>
//## auto_generated
#include <oxf\state.h>
//## auto_generated
#include <oxf\event.h>
//## classInstance itsCO2_Sensor
#include "CO2_Sensor.h"
//## classInstance itsFire_Sensor
#include "Fire_Sensor.h"
//## classInstance itsLights_1
#include "Lights.h"
//## classInstance itsMicrophones_1
#include "Microphones.h"
//## classInstance itsMovement_Sensor_1
#include "Movement_Sensor.h"
//## classInstance itsOccupancy_Sensor_1
#include "Occupancy_Sensor.h"
//## classInstance itsSmart_Screen_1
#include "Smart_Screen.h"
//## classInstance itsSpeakers_1
#include "Speakers.h"
//## classInstance itsWebcam_1
#include "Webcam.h"
//## link itsBooking_System
class Booking_System;

//## link itsDoor_Touch_Panel
class Door_Touch_Panel;

//## link itsExternalPersonnel
class ExternalPersonnel;

//## link itsExternal_Personnel
class External_Personnel;

//## link itsHVAC
class HVAC;

//## link itsRoom_Touch_Panel
class Room_Touch_Panel;

//## link itsSmart_Room
class Smart_Room;

//## link itsUser
class User;

//## package ArchitecturalAnalysisPkg

//## class Network
class Network : public OMReactive {
    ////    Constructors and destructors    ////
    
public :

    //## auto_generated
    Network(IOxfActive* theActiveContext = 0);
    
    //## auto_generated
    virtual ~Network();
    
    ////    Operations    ////
    
    //## operation Set_CO2_Alarm(bool)
    virtual void Set_CO2_Alarm(bool alarm_state);
    
    //## operation Set_Fire_Alarm(bool)
    virtual void Set_Fire_Alarm(bool alarm_state);
    
    ////    Additional operations    ////
    
    //## auto_generated
    bool getCO2_Alarm_NetworkState() const;
    
    //## auto_generated
    void setCO2_Alarm_NetworkState(bool p_CO2_Alarm_NetworkState);
    
    //## auto_generated
    bool getFire_Alarm_NetworkState() const;
    
    //## auto_generated
    void setFire_Alarm_NetworkState(bool p_Fire_Alarm_NetworkState);
    
    //## auto_generated
    Booking_System* getItsBooking_System() const;
    
    //## auto_generated
    void setItsBooking_System(Booking_System* p_Booking_System);
    
    //## auto_generated
    CO2_Sensor* getItsCO2_Sensor() const;
    
    //## auto_generated
    Door_Touch_Panel* getItsDoor_Touch_Panel() const;
    
    //## auto_generated
    void setItsDoor_Touch_Panel(Door_Touch_Panel* p_Door_Touch_Panel);
    
    //## auto_generated
    ExternalPersonnel* getItsExternalPersonnel() const;
    
    //## auto_generated
    void setItsExternalPersonnel(ExternalPersonnel* p_ExternalPersonnel);
    
    //## auto_generated
    External_Personnel* getItsExternal_Personnel() const;
    
    //## auto_generated
    void setItsExternal_Personnel(External_Personnel* p_External_Personnel);
    
    //## auto_generated
    Fire_Sensor* getItsFire_Sensor() const;
    
    //## auto_generated
    HVAC* getItsHVAC() const;
    
    //## auto_generated
    void setItsHVAC(HVAC* p_HVAC);
    
    //## auto_generated
    Lights* getItsLights() const;
    
    //## auto_generated
    void setItsLights(Lights* p_Lights);
    
    //## auto_generated
    Lights* getItsLights_1() const;
    
    //## auto_generated
    Microphones* getItsMicrophones() const;
    
    //## auto_generated
    void setItsMicrophones(Microphones* p_Microphones);
    
    //## auto_generated
    Microphones* getItsMicrophones_1() const;
    
    //## auto_generated
    Movement_Sensor* getItsMovement_Sensor() const;
    
    //## auto_generated
    void setItsMovement_Sensor(Movement_Sensor* p_Movement_Sensor);
    
    //## auto_generated
    Movement_Sensor* getItsMovement_Sensor_1() const;
    
    //## auto_generated
    Occupancy_Sensor* getItsOccupancy_Sensor() const;
    
    //## auto_generated
    void setItsOccupancy_Sensor(Occupancy_Sensor* p_Occupancy_Sensor);
    
    //## auto_generated
    Occupancy_Sensor* getItsOccupancy_Sensor_1() const;
    
    //## auto_generated
    Room_Touch_Panel* getItsRoom_Touch_Panel() const;
    
    //## auto_generated
    void setItsRoom_Touch_Panel(Room_Touch_Panel* p_Room_Touch_Panel);
    
    //## auto_generated
    Smart_Room* getItsSmart_Room() const;
    
    //## auto_generated
    void setItsSmart_Room(Smart_Room* p_Smart_Room);
    
    //## auto_generated
    Smart_Screen* getItsSmart_Screen() const;
    
    //## auto_generated
    void setItsSmart_Screen(Smart_Screen* p_Smart_Screen);
    
    //## auto_generated
    Smart_Screen* getItsSmart_Screen_1() const;
    
    //## auto_generated
    Speakers* getItsSpeakers() const;
    
    //## auto_generated
    void setItsSpeakers(Speakers* p_Speakers);
    
    //## auto_generated
    Speakers* getItsSpeakers_1() const;
    
    //## auto_generated
    User* getItsUser() const;
    
    //## auto_generated
    void setItsUser(User* p_User);
    
    //## auto_generated
    Webcam* getItsWebcam() const;
    
    //## auto_generated
    void setItsWebcam(Webcam* p_Webcam);
    
    //## auto_generated
    Webcam* getItsWebcam_1() const;
    
    //## auto_generated
    virtual bool startBehavior();

protected :

    //## auto_generated
    void initStatechart();
    
    //## auto_generated
    void cleanUpRelations();
    
    ////    Attributes    ////
    
    bool CO2_Alarm_NetworkState;		//## attribute CO2_Alarm_NetworkState
    
    bool Fire_Alarm_NetworkState;		//## attribute Fire_Alarm_NetworkState
    
    ////    Relations and components    ////
    
    Booking_System* itsBooking_System;		//## link itsBooking_System
    
    CO2_Sensor itsCO2_Sensor;		//## classInstance itsCO2_Sensor
    
    Door_Touch_Panel* itsDoor_Touch_Panel;		//## link itsDoor_Touch_Panel
    
    ExternalPersonnel* itsExternalPersonnel;		//## link itsExternalPersonnel
    
    External_Personnel* itsExternal_Personnel;		//## link itsExternal_Personnel
    
    Fire_Sensor itsFire_Sensor;		//## classInstance itsFire_Sensor
    
    HVAC* itsHVAC;		//## link itsHVAC
    
    Lights* itsLights;		//## link itsLights
    
    Lights itsLights_1;		//## classInstance itsLights_1
    
    Microphones* itsMicrophones;		//## link itsMicrophones
    
    Microphones itsMicrophones_1;		//## classInstance itsMicrophones_1
    
    Movement_Sensor* itsMovement_Sensor;		//## link itsMovement_Sensor
    
    Movement_Sensor itsMovement_Sensor_1;		//## classInstance itsMovement_Sensor_1
    
    Occupancy_Sensor* itsOccupancy_Sensor;		//## link itsOccupancy_Sensor
    
    Occupancy_Sensor itsOccupancy_Sensor_1;		//## classInstance itsOccupancy_Sensor_1
    
    Room_Touch_Panel* itsRoom_Touch_Panel;		//## link itsRoom_Touch_Panel
    
    Smart_Room* itsSmart_Room;		//## link itsSmart_Room
    
    Smart_Screen* itsSmart_Screen;		//## link itsSmart_Screen
    
    Smart_Screen itsSmart_Screen_1;		//## classInstance itsSmart_Screen_1
    
    Speakers* itsSpeakers;		//## link itsSpeakers
    
    Speakers itsSpeakers_1;		//## classInstance itsSpeakers_1
    
    User* itsUser;		//## link itsUser
    
    Webcam* itsWebcam;		//## link itsWebcam
    
    Webcam itsWebcam_1;		//## classInstance itsWebcam_1
    
    ////    Framework operations    ////

public :

    //## auto_generated
    void __setItsBooking_System(Booking_System* p_Booking_System);
    
    //## auto_generated
    void _setItsBooking_System(Booking_System* p_Booking_System);
    
    //## auto_generated
    void _clearItsBooking_System();
    
    //## auto_generated
    void __setItsDoor_Touch_Panel(Door_Touch_Panel* p_Door_Touch_Panel);
    
    //## auto_generated
    void _setItsDoor_Touch_Panel(Door_Touch_Panel* p_Door_Touch_Panel);
    
    //## auto_generated
    void _clearItsDoor_Touch_Panel();
    
    //## auto_generated
    void __setItsExternalPersonnel(ExternalPersonnel* p_ExternalPersonnel);
    
    //## auto_generated
    void _setItsExternalPersonnel(ExternalPersonnel* p_ExternalPersonnel);
    
    //## auto_generated
    void _clearItsExternalPersonnel();
    
    //## auto_generated
    void __setItsExternal_Personnel(External_Personnel* p_External_Personnel);
    
    //## auto_generated
    void _setItsExternal_Personnel(External_Personnel* p_External_Personnel);
    
    //## auto_generated
    void _clearItsExternal_Personnel();
    
    //## auto_generated
    void __setItsHVAC(HVAC* p_HVAC);
    
    //## auto_generated
    void _setItsHVAC(HVAC* p_HVAC);
    
    //## auto_generated
    void _clearItsHVAC();
    
    //## auto_generated
    void __setItsLights(Lights* p_Lights);
    
    //## auto_generated
    void _setItsLights(Lights* p_Lights);
    
    //## auto_generated
    void _clearItsLights();
    
    //## auto_generated
    void __setItsMicrophones(Microphones* p_Microphones);
    
    //## auto_generated
    void _setItsMicrophones(Microphones* p_Microphones);
    
    //## auto_generated
    void _clearItsMicrophones();
    
    //## auto_generated
    void __setItsMovement_Sensor(Movement_Sensor* p_Movement_Sensor);
    
    //## auto_generated
    void _setItsMovement_Sensor(Movement_Sensor* p_Movement_Sensor);
    
    //## auto_generated
    void _clearItsMovement_Sensor();
    
    //## auto_generated
    void __setItsOccupancy_Sensor(Occupancy_Sensor* p_Occupancy_Sensor);
    
    //## auto_generated
    void _setItsOccupancy_Sensor(Occupancy_Sensor* p_Occupancy_Sensor);
    
    //## auto_generated
    void _clearItsOccupancy_Sensor();
    
    //## auto_generated
    void __setItsRoom_Touch_Panel(Room_Touch_Panel* p_Room_Touch_Panel);
    
    //## auto_generated
    void _setItsRoom_Touch_Panel(Room_Touch_Panel* p_Room_Touch_Panel);
    
    //## auto_generated
    void _clearItsRoom_Touch_Panel();
    
    //## auto_generated
    void __setItsSmart_Room(Smart_Room* p_Smart_Room);
    
    //## auto_generated
    void _setItsSmart_Room(Smart_Room* p_Smart_Room);
    
    //## auto_generated
    void _clearItsSmart_Room();
    
    //## auto_generated
    void __setItsSmart_Screen(Smart_Screen* p_Smart_Screen);
    
    //## auto_generated
    void _setItsSmart_Screen(Smart_Screen* p_Smart_Screen);
    
    //## auto_generated
    void _clearItsSmart_Screen();
    
    //## auto_generated
    void __setItsSpeakers(Speakers* p_Speakers);
    
    //## auto_generated
    void _setItsSpeakers(Speakers* p_Speakers);
    
    //## auto_generated
    void _clearItsSpeakers();
    
    //## auto_generated
    void __setItsUser(User* p_User);
    
    //## auto_generated
    void _setItsUser(User* p_User);
    
    //## auto_generated
    void _clearItsUser();
    
    //## auto_generated
    void __setItsWebcam(Webcam* p_Webcam);
    
    //## auto_generated
    void _setItsWebcam(Webcam* p_Webcam);
    
    //## auto_generated
    void _clearItsWebcam();
    
    // rootState:
    //## statechart_method
    inline bool rootState_IN() const;
    
    //## statechart_method
    virtual void rootState_entDef();
    
    //## statechart_method
    virtual IOxfReactive::TakeEventStatus rootState_processEvent();
    
    // CO2_Alarm_On:
    //## statechart_method
    inline bool CO2_Alarm_On_IN() const;
    
    // CO2_Alarm_Off:
    //## statechart_method
    inline bool CO2_Alarm_Off_IN() const;
    
    ////    Framework    ////

protected :

//#[ ignore
    enum Network_Enum {
        OMNonState = 0,
        CO2_Alarm_On = 1,
        CO2_Alarm_Off = 2
    };
    
    int rootState_subState;
    
    int rootState_active;
//#]
};

inline bool Network::rootState_IN() const {
    return true;
}

inline bool Network::CO2_Alarm_On_IN() const {
    return rootState_subState == CO2_Alarm_On;
}

inline bool Network::CO2_Alarm_Off_IN() const {
    return rootState_subState == CO2_Alarm_Off;
}

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Network.h
*********************************************************************/
