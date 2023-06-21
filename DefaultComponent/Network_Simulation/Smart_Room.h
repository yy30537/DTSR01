/*********************************************************************
	Rhapsody	: 9.0 
	Login		: Yang
	Component	: DefaultComponent 
	Configuration 	: Network_Simulation
	Model Element	: Smart_Room
//!	Generated Date	: Wed, 21, Jun 2023  
	File Path	: DefaultComponent\Network_Simulation\Smart_Room.h
*********************************************************************/

#ifndef Smart_Room_H
#define Smart_Room_H

//## auto_generated
#include <oxf\oxf.h>
//## auto_generated
#include <..\Profiles\SysML\SIDefinitions.h>
//## auto_generated
#include <aom\aom.h>
//## auto_generated
#include "ArchitecturalAnalysisPkg.h"
//## classInstance itsCO2_Sensor
#include "CO2_Sensor.h"
//## classInstance itsDoor_Touch_Panel
#include "Door_Touch_Panel.h"
//## classInstance itsFire_Sensor
#include "Fire_Sensor.h"
//## classInstance itsLights
#include "Lights.h"
//## classInstance itsMicrophones
#include "Microphones.h"
//## classInstance itsMovement_Sensor
#include "Movement_Sensor.h"
//## classInstance itsOccupancy_Sensor
#include "Occupancy_Sensor.h"
//## classInstance itsRoom_Touch_Panel
#include "Room_Touch_Panel.h"
//## classInstance itsSmart_Screen
#include "Smart_Screen.h"
//## classInstance itsSpeakers
#include "Speakers.h"
//## classInstance itsWebcam
#include "Webcam.h"
//## link itsBooking_System
class Booking_System;

//## link itsHVAC
class HVAC;

//## link itsNetwork
class Network;

//## link itsWeather_Forecast
class Weather_Forecast;

//## package ArchitecturalAnalysisPkg

//## class Smart_Room
class Smart_Room {
#ifdef _OMINSTRUMENT
    OM_DECLARE_COMPOSITE_OFFSET
#endif // _OMINSTRUMENT

    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedSmart_Room;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    Smart_Room();
    
    //## auto_generated
    ~Smart_Room();
    
    ////    Additional operations    ////
    
    //## auto_generated
    Booking_System* getItsBooking_System() const;
    
    //## auto_generated
    void setItsBooking_System(Booking_System* p_Booking_System);
    
    //## auto_generated
    CO2_Sensor* getItsCO2_Sensor() const;
    
    //## auto_generated
    Door_Touch_Panel* getItsDoor_Touch_Panel() const;
    
    //## auto_generated
    Fire_Sensor* getItsFire_Sensor() const;
    
    //## auto_generated
    HVAC* getItsHVAC() const;
    
    //## auto_generated
    void setItsHVAC(HVAC* p_HVAC);
    
    //## auto_generated
    Lights* getItsLights() const;
    
    //## auto_generated
    Microphones* getItsMicrophones() const;
    
    //## auto_generated
    Movement_Sensor* getItsMovement_Sensor() const;
    
    //## auto_generated
    Network* getItsNetwork() const;
    
    //## auto_generated
    void setItsNetwork(Network* p_Network);
    
    //## auto_generated
    Occupancy_Sensor* getItsOccupancy_Sensor() const;
    
    //## auto_generated
    Room_Touch_Panel* getItsRoom_Touch_Panel() const;
    
    //## auto_generated
    Smart_Screen* getItsSmart_Screen() const;
    
    //## auto_generated
    Speakers* getItsSpeakers() const;
    
    //## auto_generated
    Weather_Forecast* getItsWeather_Forecast() const;
    
    //## auto_generated
    void setItsWeather_Forecast(Weather_Forecast* p_Weather_Forecast);
    
    //## auto_generated
    Webcam* getItsWebcam() const;

protected :

    //## auto_generated
    void cleanUpRelations();
    
    ////    Relations and components    ////
    
    Booking_System* itsBooking_System;		//## link itsBooking_System
    
    CO2_Sensor itsCO2_Sensor;		//## classInstance itsCO2_Sensor
    
    Door_Touch_Panel itsDoor_Touch_Panel;		//## classInstance itsDoor_Touch_Panel
    
    Fire_Sensor itsFire_Sensor;		//## classInstance itsFire_Sensor
    
    HVAC* itsHVAC;		//## link itsHVAC
    
    Lights itsLights;		//## classInstance itsLights
    
    Microphones itsMicrophones;		//## classInstance itsMicrophones
    
    Movement_Sensor itsMovement_Sensor;		//## classInstance itsMovement_Sensor
    
    Network* itsNetwork;		//## link itsNetwork
    
    Occupancy_Sensor itsOccupancy_Sensor;		//## classInstance itsOccupancy_Sensor
    
    Room_Touch_Panel itsRoom_Touch_Panel;		//## classInstance itsRoom_Touch_Panel
    
    Smart_Screen itsSmart_Screen;		//## classInstance itsSmart_Screen
    
    Speakers itsSpeakers;		//## classInstance itsSpeakers
    
    Weather_Forecast* itsWeather_Forecast;		//## link itsWeather_Forecast
    
    Webcam itsWebcam;		//## classInstance itsWebcam
    
    ////    Framework operations    ////

public :

    //## auto_generated
    void __setItsBooking_System(Booking_System* p_Booking_System);
    
    //## auto_generated
    void _setItsBooking_System(Booking_System* p_Booking_System);
    
    //## auto_generated
    void _clearItsBooking_System();
    
    //## auto_generated
    void __setItsHVAC(HVAC* p_HVAC);
    
    //## auto_generated
    void _setItsHVAC(HVAC* p_HVAC);
    
    //## auto_generated
    void _clearItsHVAC();
    
    //## auto_generated
    void __setItsNetwork(Network* p_Network);
    
    //## auto_generated
    void _setItsNetwork(Network* p_Network);
    
    //## auto_generated
    void _clearItsNetwork();
    
    //## auto_generated
    void __setItsWeather_Forecast(Weather_Forecast* p_Weather_Forecast);
    
    //## auto_generated
    void _setItsWeather_Forecast(Weather_Forecast* p_Weather_Forecast);
    
    //## auto_generated
    void _clearItsWeather_Forecast();
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedSmart_Room : virtual public AOMInstance {
    DECLARE_META(Smart_Room, OMAnimatedSmart_Room)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\Network_Simulation\Smart_Room.h
*********************************************************************/
