/*********************************************************************
	Rhapsody	: 9.0 
	Login		: Yang
	Component	: DefaultComponent 
	Configuration 	: Network_Simulation
	Model Element	: Network
//!	Generated Date	: Wed, 21, Jun 2023  
	File Path	: DefaultComponent\Network_Simulation\Network.h
*********************************************************************/

#ifndef Network_H
#define Network_H

//## auto_generated
#include <oxf\oxf.h>
//## auto_generated
#include <..\Profiles\SysML\SIDefinitions.h>
//## auto_generated
#include <aom\aom.h>
//## auto_generated
#include "ArchitecturalAnalysisPkg.h"
//## auto_generated
#include <oxf\omthread.h>
//## auto_generated
#include <oxf\omreactive.h>
//## auto_generated
#include <oxf\state.h>
//## auto_generated
#include <oxf\event.h>
//## link itsBooking_System
class Booking_System;

//## link itsCO2_Sensor
class CO2_Sensor;

//## link itsDoor_Touch_Panel
class Door_Touch_Panel;

//## link itsFire_Sensor
class Fire_Sensor;

//## link itsHVAC
class HVAC;

//## link itsLights
class Lights;

//## link itsMicrophones
class Microphones;

//## link itsMovement_Sensor
class Movement_Sensor;

//## link itsOccupancy_Sensor
class Occupancy_Sensor;

//## link itsRoom_Touch_Panel
class Room_Touch_Panel;

//## link itsSmart_Room
class Smart_Room;

//## link itsSmart_Screen
class Smart_Screen;

//## link itsSpeakers
class Speakers;

//## link itsWeather_Forecast
class Weather_Forecast;

//## link itsWebcam
class Webcam;

//## package ArchitecturalAnalysisPkg

//## class Network
class Network : public OMReactive {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedNetwork;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    Network(IOxfActive* theActiveContext = 0);
    
    //## auto_generated
    virtual ~Network();
    
    ////    Operations    ////
    
    //## operation decreaseLightIntensity()
    virtual int decreaseLightIntensity();
    
    //## operation increaseLightIntensity()
    virtual int increaseLightIntensity();
    
    //## operation turnOffLight()
    virtual void turnOffLight();
    
    ////    Additional operations    ////
    
    //## auto_generated
    int getLight_intensity() const;
    
    //## auto_generated
    void setLight_intensity(int p_light_intensity);
    
    //## auto_generated
    Booking_System* getItsBooking_System() const;
    
    //## auto_generated
    void setItsBooking_System(Booking_System* p_Booking_System);
    
    //## auto_generated
    CO2_Sensor* getItsCO2_Sensor() const;
    
    //## auto_generated
    void setItsCO2_Sensor(CO2_Sensor* p_CO2_Sensor);
    
    //## auto_generated
    Door_Touch_Panel* getItsDoor_Touch_Panel() const;
    
    //## auto_generated
    void setItsDoor_Touch_Panel(Door_Touch_Panel* p_Door_Touch_Panel);
    
    //## auto_generated
    Fire_Sensor* getItsFire_Sensor() const;
    
    //## auto_generated
    void setItsFire_Sensor(Fire_Sensor* p_Fire_Sensor);
    
    //## auto_generated
    HVAC* getItsHVAC() const;
    
    //## auto_generated
    void setItsHVAC(HVAC* p_HVAC);
    
    //## auto_generated
    Lights* getItsLights() const;
    
    //## auto_generated
    void setItsLights(Lights* p_Lights);
    
    //## auto_generated
    Microphones* getItsMicrophones() const;
    
    //## auto_generated
    void setItsMicrophones(Microphones* p_Microphones);
    
    //## auto_generated
    Movement_Sensor* getItsMovement_Sensor() const;
    
    //## auto_generated
    void setItsMovement_Sensor(Movement_Sensor* p_Movement_Sensor);
    
    //## auto_generated
    Occupancy_Sensor* getItsOccupancy_Sensor() const;
    
    //## auto_generated
    void setItsOccupancy_Sensor(Occupancy_Sensor* p_Occupancy_Sensor);
    
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
    Speakers* getItsSpeakers() const;
    
    //## auto_generated
    void setItsSpeakers(Speakers* p_Speakers);
    
    //## auto_generated
    Weather_Forecast* getItsWeather_Forecast() const;
    
    //## auto_generated
    void setItsWeather_Forecast(Weather_Forecast* p_Weather_Forecast);
    
    //## auto_generated
    Webcam* getItsWebcam() const;
    
    //## auto_generated
    void setItsWebcam(Webcam* p_Webcam);
    
    //## auto_generated
    virtual bool startBehavior();

protected :

    //## auto_generated
    void initStatechart();
    
    //## auto_generated
    void cleanUpRelations();
    
    ////    Attributes    ////
    
    int light_intensity;		//## attribute light_intensity
    
    ////    Relations and components    ////
    
    Booking_System* itsBooking_System;		//## link itsBooking_System
    
    CO2_Sensor* itsCO2_Sensor;		//## link itsCO2_Sensor
    
    Door_Touch_Panel* itsDoor_Touch_Panel;		//## link itsDoor_Touch_Panel
    
    Fire_Sensor* itsFire_Sensor;		//## link itsFire_Sensor
    
    HVAC* itsHVAC;		//## link itsHVAC
    
    Lights* itsLights;		//## link itsLights
    
    Microphones* itsMicrophones;		//## link itsMicrophones
    
    Movement_Sensor* itsMovement_Sensor;		//## link itsMovement_Sensor
    
    Occupancy_Sensor* itsOccupancy_Sensor;		//## link itsOccupancy_Sensor
    
    Room_Touch_Panel* itsRoom_Touch_Panel;		//## link itsRoom_Touch_Panel
    
    Smart_Room* itsSmart_Room;		//## link itsSmart_Room
    
    Smart_Screen* itsSmart_Screen;		//## link itsSmart_Screen
    
    Speakers* itsSpeakers;		//## link itsSpeakers
    
    Weather_Forecast* itsWeather_Forecast;		//## link itsWeather_Forecast
    
    Webcam* itsWebcam;		//## link itsWebcam
    
    ////    Framework operations    ////

public :

    //## auto_generated
    void __setItsBooking_System(Booking_System* p_Booking_System);
    
    //## auto_generated
    void _setItsBooking_System(Booking_System* p_Booking_System);
    
    //## auto_generated
    void _clearItsBooking_System();
    
    //## auto_generated
    void __setItsCO2_Sensor(CO2_Sensor* p_CO2_Sensor);
    
    //## auto_generated
    void _setItsCO2_Sensor(CO2_Sensor* p_CO2_Sensor);
    
    //## auto_generated
    void _clearItsCO2_Sensor();
    
    //## auto_generated
    void __setItsDoor_Touch_Panel(Door_Touch_Panel* p_Door_Touch_Panel);
    
    //## auto_generated
    void _setItsDoor_Touch_Panel(Door_Touch_Panel* p_Door_Touch_Panel);
    
    //## auto_generated
    void _clearItsDoor_Touch_Panel();
    
    //## auto_generated
    void __setItsFire_Sensor(Fire_Sensor* p_Fire_Sensor);
    
    //## auto_generated
    void _setItsFire_Sensor(Fire_Sensor* p_Fire_Sensor);
    
    //## auto_generated
    void _clearItsFire_Sensor();
    
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
    void __setItsWeather_Forecast(Weather_Forecast* p_Weather_Forecast);
    
    //## auto_generated
    void _setItsWeather_Forecast(Weather_Forecast* p_Weather_Forecast);
    
    //## auto_generated
    void _clearItsWeather_Forecast();
    
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
    
    // lights_on:
    //## statechart_method
    inline bool lights_on_IN() const;
    
    // lights_off:
    //## statechart_method
    inline bool lights_off_IN() const;
    
    ////    Framework    ////

protected :

//#[ ignore
    enum Network_Enum {
        OMNonState = 0,
        lights_on = 1,
        lights_off = 2
    };
    
    int rootState_subState;
    
    int rootState_active;
//#]
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedNetwork : virtual public AOMInstance {
    DECLARE_REACTIVE_META(Network, OMAnimatedNetwork)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeAttributes(AOMSAttributes* aomsAttributes) const;
    
    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
    
    //## statechart_method
    void rootState_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void lights_on_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void lights_off_serializeStates(AOMSState* aomsState) const;
};
//#]
#endif // _OMINSTRUMENT

inline bool Network::rootState_IN() const {
    return true;
}

inline bool Network::lights_on_IN() const {
    return rootState_subState == lights_on;
}

inline bool Network::lights_off_IN() const {
    return rootState_subState == lights_off;
}

#endif
/*********************************************************************
	File Path	: DefaultComponent\Network_Simulation\Network.h
*********************************************************************/
