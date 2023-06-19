/*********************************************************************
	Rhapsody	: 9.0 
	Login		: 20181759
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Smart_Room
//!	Generated Date	: Mon, 19, Jun 2023  
	File Path	: DefaultComponent\DefaultConfig\Smart_Room.h
*********************************************************************/

#ifndef Smart_Room_H
#define Smart_Room_H

//## auto_generated
#include <oxf\oxf.h>
//## auto_generated
#include <..\Profiles\SysML\SIDefinitions.h>
//## auto_generated
#include <oxf\omcollec.h>
//## auto_generated
#include <oxf\omlist.h>
//## classInstance itsCO2_Sensor
#include "CO2_Sensor.h"
//## classInstance itsDoor_Touch_Panel
#include "Door_Touch_Panel.h"
//## classInstance itsMovement_Sensor
#include "Movement_Sensor.h"
//## classInstance itsOccupancy_Sensor
#include "Occupancy_Sensor.h"
//## classInstance itsRoom_Touch_Panel
#include "Room_Touch_Panel.h"
//## classInstance itsSmart_Screen
#include "Smart_Screen.h"
//## classInstance itsWebcam
#include "Webcam.h"
//## link itsBooking_System
class Booking_System;

//## link itsExternal Personnel
class External Personnel;

//## classInstance itsFire_Sensor
class Fire_Sensor;

//## link itsHVAC
class HVAC;

//## classInstance itsLights
class Lights;

//## classInstance itsMicrophones
class Microphones;

//## link itsNetwork
class Network;

//## classInstance itsSpeakers
class Speakers;

//## link itsUser
class User;

//## link itsWeather_Forecast
class Weather_Forecast;

//## package ArchitecturalAnalysisPkg

//## class Smart_Room
class Smart_Room {
    ////    Constructors and destructors    ////
    
public :

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
    OMIterator<External Personnel*> getItsExternal Personnel() const;
    
    //## auto_generated
    void addItsExternal Personnel(External Personnel* p_External Personnel);
    
    //## auto_generated
    void removeItsExternal Personnel(External Personnel* p_External Personnel);
    
    //## auto_generated
    void clearItsExternal Personnel();
    
    //## auto_generated
    OMIterator<Fire_Sensor*> getItsFire_Sensor() const;
    
    //## auto_generated
    Fire_Sensor* newItsFire_Sensor();
    
    //## auto_generated
    void deleteItsFire_Sensor(Fire_Sensor* p_Fire_Sensor);
    
    //## auto_generated
    HVAC* getItsHVAC() const;
    
    //## auto_generated
    void setItsHVAC(HVAC* p_HVAC);
    
    //## auto_generated
    OMIterator<Lights*> getItsLights() const;
    
    //## auto_generated
    Lights* newItsLights();
    
    //## auto_generated
    void deleteItsLights(Lights* p_Lights);
    
    //## auto_generated
    OMIterator<Microphones*> getItsMicrophones() const;
    
    //## auto_generated
    Microphones* newItsMicrophones();
    
    //## auto_generated
    void deleteItsMicrophones(Microphones* p_Microphones);
    
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
    OMIterator<Speakers*> getItsSpeakers() const;
    
    //## auto_generated
    Speakers* newItsSpeakers();
    
    //## auto_generated
    void deleteItsSpeakers(Speakers* p_Speakers);
    
    //## auto_generated
    int getItsUser() const;
    
    //## auto_generated
    void addItsUser(User* p_User);
    
    //## auto_generated
    void removeItsUser(User* p_User);
    
    //## auto_generated
    void clearItsUser();
    
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
    
    OMCollection<External Personnel*> itsExternal Personnel;		//## link itsExternal Personnel
    
    OMList<Fire_Sensor*> itsFire_Sensor;		//## classInstance itsFire_Sensor
    
    HVAC* itsHVAC;		//## link itsHVAC
    
    OMList<Lights*> itsLights;		//## classInstance itsLights
    
    OMList<Microphones*> itsMicrophones;		//## classInstance itsMicrophones
    
    Movement_Sensor itsMovement_Sensor;		//## classInstance itsMovement_Sensor
    
    Network* itsNetwork;		//## link itsNetwork
    
    Occupancy_Sensor itsOccupancy_Sensor;		//## classInstance itsOccupancy_Sensor
    
    Room_Touch_Panel itsRoom_Touch_Panel;		//## classInstance itsRoom_Touch_Panel
    
    Smart_Screen itsSmart_Screen;		//## classInstance itsSmart_Screen
    
    OMList<Speakers*> itsSpeakers;		//## classInstance itsSpeakers
    
    User* itsUser[. *];		//## link itsUser
    
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
    void _addItsExternal Personnel(External Personnel* p_External Personnel);
    
    //## auto_generated
    void _removeItsExternal Personnel(External Personnel* p_External Personnel);
    
    //## auto_generated
    void _clearItsExternal Personnel();
    
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
    void _addItsUser(User* p_User);
    
    //## auto_generated
    void _removeItsUser(User* p_User);
    
    //## auto_generated
    void _clearItsUser();
    
    //## auto_generated
    void __setItsWeather_Forecast(Weather_Forecast* p_Weather_Forecast);
    
    //## auto_generated
    void _setItsWeather_Forecast(Weather_Forecast* p_Weather_Forecast);
    
    //## auto_generated
    void _clearItsWeather_Forecast();
};

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Smart_Room.h
*********************************************************************/
