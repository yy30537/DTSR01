/********************************************************************
	Rhapsody	: 9.0 
	Login		: Yang
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Smart_Room
//!	Generated Date	: Tue, 20, Jun 2023  
	File Path	: DefaultComponent\DefaultConfig\Smart_Room.cpp
*********************************************************************/

//## auto_generated
#include "Smart_Room.h"
//## link itsBooking_System
#include "Booking_System.h"
//## link itsHVAC
#include "HVAC.h"
//## link itsNetwork
#include "Network.h"
//## link itsWeather_Forecast
#include "Weather_Forecast.h"
//## package ArchitecturalAnalysisPkg

//## class Smart_Room
Smart_Room::Smart_Room() {
    itsBooking_System = NULL;
    itsHVAC = NULL;
    itsNetwork = NULL;
    itsNetwork_1 = NULL;
    itsWeather_Forecast = NULL;
}

Smart_Room::~Smart_Room() {
    cleanUpRelations();
}

Booking_System* Smart_Room::getItsBooking_System() const {
    return itsBooking_System;
}

void Smart_Room::setItsBooking_System(Booking_System* p_Booking_System) {
    if(p_Booking_System != NULL)
        {
            p_Booking_System->_setItsSmart_Room(this);
        }
    _setItsBooking_System(p_Booking_System);
}

CO2_Sensor* Smart_Room::getItsCO2_Sensor() const {
    return (CO2_Sensor*) &itsCO2_Sensor;
}

Door_Touch_Panel* Smart_Room::getItsDoor_Touch_Panel() const {
    return (Door_Touch_Panel*) &itsDoor_Touch_Panel;
}

Fire_Sensor* Smart_Room::getItsFire_Sensor() const {
    return (Fire_Sensor*) &itsFire_Sensor;
}

HVAC* Smart_Room::getItsHVAC() const {
    return itsHVAC;
}

void Smart_Room::setItsHVAC(HVAC* p_HVAC) {
    if(p_HVAC != NULL)
        {
            p_HVAC->_setItsSmart_Room(this);
        }
    _setItsHVAC(p_HVAC);
}

Lights* Smart_Room::getItsLights() const {
    return (Lights*) &itsLights;
}

Microphones* Smart_Room::getItsMicrophones() const {
    return (Microphones*) &itsMicrophones;
}

Movement_Sensor* Smart_Room::getItsMovement_Sensor() const {
    return (Movement_Sensor*) &itsMovement_Sensor;
}

Network* Smart_Room::getItsNetwork() const {
    return itsNetwork;
}

void Smart_Room::setItsNetwork(Network* p_Network) {
    if(p_Network != NULL)
        {
            p_Network->_setItsSmart_Room(this);
        }
    _setItsNetwork(p_Network);
}

Network* Smart_Room::getItsNetwork_1() const {
    return itsNetwork_1;
}

void Smart_Room::setItsNetwork_1(Network* p_Network) {
    itsNetwork_1 = p_Network;
}

Occupancy_Sensor* Smart_Room::getItsOccupancy_Sensor() const {
    return (Occupancy_Sensor*) &itsOccupancy_Sensor;
}

Room_Touch_Panel* Smart_Room::getItsRoom_Touch_Panel() const {
    return (Room_Touch_Panel*) &itsRoom_Touch_Panel;
}

Smart_Screen* Smart_Room::getItsSmart_Screen() const {
    return (Smart_Screen*) &itsSmart_Screen;
}

Speakers* Smart_Room::getItsSpeakers() const {
    return (Speakers*) &itsSpeakers;
}

Weather_Forecast* Smart_Room::getItsWeather_Forecast() const {
    return itsWeather_Forecast;
}

void Smart_Room::setItsWeather_Forecast(Weather_Forecast* p_Weather_Forecast) {
    if(p_Weather_Forecast != NULL)
        {
            p_Weather_Forecast->_setItsSmart_Room(this);
        }
    _setItsWeather_Forecast(p_Weather_Forecast);
}

Webcam* Smart_Room::getItsWebcam() const {
    return (Webcam*) &itsWebcam;
}

void Smart_Room::cleanUpRelations() {
    if(itsBooking_System != NULL)
        {
            Smart_Room* p_Smart_Room = itsBooking_System->getItsSmart_Room();
            if(p_Smart_Room != NULL)
                {
                    itsBooking_System->__setItsSmart_Room(NULL);
                }
            itsBooking_System = NULL;
        }
    if(itsHVAC != NULL)
        {
            Smart_Room* p_Smart_Room = itsHVAC->getItsSmart_Room();
            if(p_Smart_Room != NULL)
                {
                    itsHVAC->__setItsSmart_Room(NULL);
                }
            itsHVAC = NULL;
        }
    if(itsNetwork != NULL)
        {
            Smart_Room* p_Smart_Room = itsNetwork->getItsSmart_Room();
            if(p_Smart_Room != NULL)
                {
                    itsNetwork->__setItsSmart_Room(NULL);
                }
            itsNetwork = NULL;
        }
    if(itsNetwork_1 != NULL)
        {
            itsNetwork_1 = NULL;
        }
    if(itsWeather_Forecast != NULL)
        {
            Smart_Room* p_Smart_Room = itsWeather_Forecast->getItsSmart_Room();
            if(p_Smart_Room != NULL)
                {
                    itsWeather_Forecast->__setItsSmart_Room(NULL);
                }
            itsWeather_Forecast = NULL;
        }
}

void Smart_Room::__setItsBooking_System(Booking_System* p_Booking_System) {
    itsBooking_System = p_Booking_System;
}

void Smart_Room::_setItsBooking_System(Booking_System* p_Booking_System) {
    if(itsBooking_System != NULL)
        {
            itsBooking_System->__setItsSmart_Room(NULL);
        }
    __setItsBooking_System(p_Booking_System);
}

void Smart_Room::_clearItsBooking_System() {
    itsBooking_System = NULL;
}

void Smart_Room::__setItsHVAC(HVAC* p_HVAC) {
    itsHVAC = p_HVAC;
}

void Smart_Room::_setItsHVAC(HVAC* p_HVAC) {
    if(itsHVAC != NULL)
        {
            itsHVAC->__setItsSmart_Room(NULL);
        }
    __setItsHVAC(p_HVAC);
}

void Smart_Room::_clearItsHVAC() {
    itsHVAC = NULL;
}

void Smart_Room::__setItsNetwork(Network* p_Network) {
    itsNetwork = p_Network;
}

void Smart_Room::_setItsNetwork(Network* p_Network) {
    if(itsNetwork != NULL)
        {
            itsNetwork->__setItsSmart_Room(NULL);
        }
    __setItsNetwork(p_Network);
}

void Smart_Room::_clearItsNetwork() {
    itsNetwork = NULL;
}

void Smart_Room::__setItsWeather_Forecast(Weather_Forecast* p_Weather_Forecast) {
    itsWeather_Forecast = p_Weather_Forecast;
}

void Smart_Room::_setItsWeather_Forecast(Weather_Forecast* p_Weather_Forecast) {
    if(itsWeather_Forecast != NULL)
        {
            itsWeather_Forecast->__setItsSmart_Room(NULL);
        }
    __setItsWeather_Forecast(p_Weather_Forecast);
}

void Smart_Room::_clearItsWeather_Forecast() {
    itsWeather_Forecast = NULL;
}

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Smart_Room.cpp
*********************************************************************/
