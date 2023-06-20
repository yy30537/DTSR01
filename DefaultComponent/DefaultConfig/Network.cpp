/********************************************************************
	Rhapsody	: 9.0 
	Login		: Yang
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Network
//!	Generated Date	: Tue, 20, Jun 2023  
	File Path	: DefaultComponent\DefaultConfig\Network.cpp
*********************************************************************/

//## auto_generated
#include "Network.h"
//## link itsBooking_System
#include "Booking_System.h"
//## link itsCO2_Sensor
#include "CO2_Sensor.h"
//## link itsDoor_Touch_Panel
#include "Door_Touch_Panel.h"
//## link itsFire_Sensor
#include "Fire_Sensor.h"
//## link itsHVAC
#include "HVAC.h"
//## link itsLights
#include "Lights.h"
//## link itsMicrophones
#include "Microphones.h"
//## link itsMovement_Sensor
#include "Movement_Sensor.h"
//## link itsOccupancy_Sensor
#include "Occupancy_Sensor.h"
//## link itsRoom_Touch_Panel
#include "Room_Touch_Panel.h"
//## link itsSmart_Room
#include "Smart_Room.h"
//## link itsSmart_Screen
#include "Smart_Screen.h"
//## link itsSpeakers
#include "Speakers.h"
//## link itsWeather_Forecast
#include "Weather_Forecast.h"
//## link itsWebcam
#include "Webcam.h"
//## package ArchitecturalAnalysisPkg

//## class Network
Network::Network() {
    itsBooking_System = NULL;
    itsBooking_System_1 = NULL;
    itsCO2_Sensor = NULL;
    itsDoor_Touch_Panel = NULL;
    itsFire_Sensor = NULL;
    itsHVAC = NULL;
    itsLights = NULL;
    itsMicrophones = NULL;
    itsMovement_Sensor = NULL;
    itsOccupancy_Sensor = NULL;
    itsRoom_Touch_Panel = NULL;
    itsSmart_Room = NULL;
    itsSmart_Screen = NULL;
    itsSpeakers = NULL;
    itsWeather_Forecast = NULL;
    itsWebcam = NULL;
}

Network::~Network() {
    cleanUpRelations();
}

Booking_System* Network::getItsBooking_System() const {
    return itsBooking_System;
}

void Network::setItsBooking_System(Booking_System* p_Booking_System) {
    if(p_Booking_System != NULL)
        {
            p_Booking_System->_setItsNetwork(this);
        }
    _setItsBooking_System(p_Booking_System);
}

Booking_System* Network::getItsBooking_System_1() const {
    return itsBooking_System_1;
}

void Network::setItsBooking_System_1(Booking_System* p_Booking_System) {
    if(p_Booking_System != NULL)
        {
            p_Booking_System->_setItsNetwork_1(this);
        }
    _setItsBooking_System_1(p_Booking_System);
}

CO2_Sensor* Network::getItsCO2_Sensor() const {
    return itsCO2_Sensor;
}

void Network::setItsCO2_Sensor(CO2_Sensor* p_CO2_Sensor) {
    if(p_CO2_Sensor != NULL)
        {
            p_CO2_Sensor->_setItsNetwork(this);
        }
    _setItsCO2_Sensor(p_CO2_Sensor);
}

Door_Touch_Panel* Network::getItsDoor_Touch_Panel() const {
    return itsDoor_Touch_Panel;
}

void Network::setItsDoor_Touch_Panel(Door_Touch_Panel* p_Door_Touch_Panel) {
    if(p_Door_Touch_Panel != NULL)
        {
            p_Door_Touch_Panel->_setItsNetwork(this);
        }
    _setItsDoor_Touch_Panel(p_Door_Touch_Panel);
}

Fire_Sensor* Network::getItsFire_Sensor() const {
    return itsFire_Sensor;
}

void Network::setItsFire_Sensor(Fire_Sensor* p_Fire_Sensor) {
    if(p_Fire_Sensor != NULL)
        {
            p_Fire_Sensor->_setItsNetwork(this);
        }
    _setItsFire_Sensor(p_Fire_Sensor);
}

HVAC* Network::getItsHVAC() const {
    return itsHVAC;
}

void Network::setItsHVAC(HVAC* p_HVAC) {
    if(p_HVAC != NULL)
        {
            p_HVAC->_setItsNetwork(this);
        }
    _setItsHVAC(p_HVAC);
}

Lights* Network::getItsLights() const {
    return itsLights;
}

void Network::setItsLights(Lights* p_Lights) {
    if(p_Lights != NULL)
        {
            p_Lights->_setItsNetwork(this);
        }
    _setItsLights(p_Lights);
}

Microphones* Network::getItsMicrophones() const {
    return itsMicrophones;
}

void Network::setItsMicrophones(Microphones* p_Microphones) {
    if(p_Microphones != NULL)
        {
            p_Microphones->_setItsNetwork(this);
        }
    _setItsMicrophones(p_Microphones);
}

Movement_Sensor* Network::getItsMovement_Sensor() const {
    return itsMovement_Sensor;
}

void Network::setItsMovement_Sensor(Movement_Sensor* p_Movement_Sensor) {
    if(p_Movement_Sensor != NULL)
        {
            p_Movement_Sensor->_setItsNetwork(this);
        }
    _setItsMovement_Sensor(p_Movement_Sensor);
}

Occupancy_Sensor* Network::getItsOccupancy_Sensor() const {
    return itsOccupancy_Sensor;
}

void Network::setItsOccupancy_Sensor(Occupancy_Sensor* p_Occupancy_Sensor) {
    if(p_Occupancy_Sensor != NULL)
        {
            p_Occupancy_Sensor->_setItsNetwork(this);
        }
    _setItsOccupancy_Sensor(p_Occupancy_Sensor);
}

Room_Touch_Panel* Network::getItsRoom_Touch_Panel() const {
    return itsRoom_Touch_Panel;
}

void Network::setItsRoom_Touch_Panel(Room_Touch_Panel* p_Room_Touch_Panel) {
    if(p_Room_Touch_Panel != NULL)
        {
            p_Room_Touch_Panel->_setItsNetwork(this);
        }
    _setItsRoom_Touch_Panel(p_Room_Touch_Panel);
}

Smart_Room* Network::getItsSmart_Room() const {
    return itsSmart_Room;
}

void Network::setItsSmart_Room(Smart_Room* p_Smart_Room) {
    if(p_Smart_Room != NULL)
        {
            p_Smart_Room->_setItsNetwork(this);
        }
    _setItsSmart_Room(p_Smart_Room);
}

Smart_Screen* Network::getItsSmart_Screen() const {
    return itsSmart_Screen;
}

void Network::setItsSmart_Screen(Smart_Screen* p_Smart_Screen) {
    if(p_Smart_Screen != NULL)
        {
            p_Smart_Screen->_setItsNetwork(this);
        }
    _setItsSmart_Screen(p_Smart_Screen);
}

Speakers* Network::getItsSpeakers() const {
    return itsSpeakers;
}

void Network::setItsSpeakers(Speakers* p_Speakers) {
    if(p_Speakers != NULL)
        {
            p_Speakers->_setItsNetwork(this);
        }
    _setItsSpeakers(p_Speakers);
}

Weather_Forecast* Network::getItsWeather_Forecast() const {
    return itsWeather_Forecast;
}

void Network::setItsWeather_Forecast(Weather_Forecast* p_Weather_Forecast) {
    if(p_Weather_Forecast != NULL)
        {
            p_Weather_Forecast->_setItsNetwork(this);
        }
    _setItsWeather_Forecast(p_Weather_Forecast);
}

Webcam* Network::getItsWebcam() const {
    return itsWebcam;
}

void Network::setItsWebcam(Webcam* p_Webcam) {
    if(p_Webcam != NULL)
        {
            p_Webcam->_setItsNetwork(this);
        }
    _setItsWebcam(p_Webcam);
}

void Network::cleanUpRelations() {
    if(itsBooking_System != NULL)
        {
            Network* p_Network = itsBooking_System->getItsNetwork();
            if(p_Network != NULL)
                {
                    itsBooking_System->__setItsNetwork(NULL);
                }
            itsBooking_System = NULL;
        }
    if(itsBooking_System_1 != NULL)
        {
            Network* p_Network = itsBooking_System_1->getItsNetwork_1();
            if(p_Network != NULL)
                {
                    itsBooking_System_1->__setItsNetwork_1(NULL);
                }
            itsBooking_System_1 = NULL;
        }
    if(itsCO2_Sensor != NULL)
        {
            Network* p_Network = itsCO2_Sensor->getItsNetwork();
            if(p_Network != NULL)
                {
                    itsCO2_Sensor->__setItsNetwork(NULL);
                }
            itsCO2_Sensor = NULL;
        }
    if(itsDoor_Touch_Panel != NULL)
        {
            Network* p_Network = itsDoor_Touch_Panel->getItsNetwork();
            if(p_Network != NULL)
                {
                    itsDoor_Touch_Panel->__setItsNetwork(NULL);
                }
            itsDoor_Touch_Panel = NULL;
        }
    if(itsFire_Sensor != NULL)
        {
            Network* p_Network = itsFire_Sensor->getItsNetwork();
            if(p_Network != NULL)
                {
                    itsFire_Sensor->__setItsNetwork(NULL);
                }
            itsFire_Sensor = NULL;
        }
    if(itsHVAC != NULL)
        {
            Network* p_Network = itsHVAC->getItsNetwork();
            if(p_Network != NULL)
                {
                    itsHVAC->__setItsNetwork(NULL);
                }
            itsHVAC = NULL;
        }
    if(itsLights != NULL)
        {
            Network* p_Network = itsLights->getItsNetwork();
            if(p_Network != NULL)
                {
                    itsLights->__setItsNetwork(NULL);
                }
            itsLights = NULL;
        }
    if(itsMicrophones != NULL)
        {
            Network* p_Network = itsMicrophones->getItsNetwork();
            if(p_Network != NULL)
                {
                    itsMicrophones->__setItsNetwork(NULL);
                }
            itsMicrophones = NULL;
        }
    if(itsMovement_Sensor != NULL)
        {
            Network* p_Network = itsMovement_Sensor->getItsNetwork();
            if(p_Network != NULL)
                {
                    itsMovement_Sensor->__setItsNetwork(NULL);
                }
            itsMovement_Sensor = NULL;
        }
    if(itsOccupancy_Sensor != NULL)
        {
            Network* p_Network = itsOccupancy_Sensor->getItsNetwork();
            if(p_Network != NULL)
                {
                    itsOccupancy_Sensor->__setItsNetwork(NULL);
                }
            itsOccupancy_Sensor = NULL;
        }
    if(itsRoom_Touch_Panel != NULL)
        {
            Network* p_Network = itsRoom_Touch_Panel->getItsNetwork();
            if(p_Network != NULL)
                {
                    itsRoom_Touch_Panel->__setItsNetwork(NULL);
                }
            itsRoom_Touch_Panel = NULL;
        }
    if(itsSmart_Room != NULL)
        {
            Network* p_Network = itsSmart_Room->getItsNetwork();
            if(p_Network != NULL)
                {
                    itsSmart_Room->__setItsNetwork(NULL);
                }
            itsSmart_Room = NULL;
        }
    if(itsSmart_Screen != NULL)
        {
            Network* p_Network = itsSmart_Screen->getItsNetwork();
            if(p_Network != NULL)
                {
                    itsSmart_Screen->__setItsNetwork(NULL);
                }
            itsSmart_Screen = NULL;
        }
    if(itsSpeakers != NULL)
        {
            Network* p_Network = itsSpeakers->getItsNetwork();
            if(p_Network != NULL)
                {
                    itsSpeakers->__setItsNetwork(NULL);
                }
            itsSpeakers = NULL;
        }
    if(itsWeather_Forecast != NULL)
        {
            Network* p_Network = itsWeather_Forecast->getItsNetwork();
            if(p_Network != NULL)
                {
                    itsWeather_Forecast->__setItsNetwork(NULL);
                }
            itsWeather_Forecast = NULL;
        }
    if(itsWebcam != NULL)
        {
            Network* p_Network = itsWebcam->getItsNetwork();
            if(p_Network != NULL)
                {
                    itsWebcam->__setItsNetwork(NULL);
                }
            itsWebcam = NULL;
        }
}

void Network::__setItsBooking_System(Booking_System* p_Booking_System) {
    itsBooking_System = p_Booking_System;
}

void Network::_setItsBooking_System(Booking_System* p_Booking_System) {
    if(itsBooking_System != NULL)
        {
            itsBooking_System->__setItsNetwork(NULL);
        }
    __setItsBooking_System(p_Booking_System);
}

void Network::_clearItsBooking_System() {
    itsBooking_System = NULL;
}

void Network::__setItsBooking_System_1(Booking_System* p_Booking_System) {
    itsBooking_System_1 = p_Booking_System;
}

void Network::_setItsBooking_System_1(Booking_System* p_Booking_System) {
    if(itsBooking_System_1 != NULL)
        {
            itsBooking_System_1->__setItsNetwork_1(NULL);
        }
    __setItsBooking_System_1(p_Booking_System);
}

void Network::_clearItsBooking_System_1() {
    itsBooking_System_1 = NULL;
}

void Network::__setItsCO2_Sensor(CO2_Sensor* p_CO2_Sensor) {
    itsCO2_Sensor = p_CO2_Sensor;
}

void Network::_setItsCO2_Sensor(CO2_Sensor* p_CO2_Sensor) {
    if(itsCO2_Sensor != NULL)
        {
            itsCO2_Sensor->__setItsNetwork(NULL);
        }
    __setItsCO2_Sensor(p_CO2_Sensor);
}

void Network::_clearItsCO2_Sensor() {
    itsCO2_Sensor = NULL;
}

void Network::__setItsDoor_Touch_Panel(Door_Touch_Panel* p_Door_Touch_Panel) {
    itsDoor_Touch_Panel = p_Door_Touch_Panel;
}

void Network::_setItsDoor_Touch_Panel(Door_Touch_Panel* p_Door_Touch_Panel) {
    if(itsDoor_Touch_Panel != NULL)
        {
            itsDoor_Touch_Panel->__setItsNetwork(NULL);
        }
    __setItsDoor_Touch_Panel(p_Door_Touch_Panel);
}

void Network::_clearItsDoor_Touch_Panel() {
    itsDoor_Touch_Panel = NULL;
}

void Network::__setItsFire_Sensor(Fire_Sensor* p_Fire_Sensor) {
    itsFire_Sensor = p_Fire_Sensor;
}

void Network::_setItsFire_Sensor(Fire_Sensor* p_Fire_Sensor) {
    if(itsFire_Sensor != NULL)
        {
            itsFire_Sensor->__setItsNetwork(NULL);
        }
    __setItsFire_Sensor(p_Fire_Sensor);
}

void Network::_clearItsFire_Sensor() {
    itsFire_Sensor = NULL;
}

void Network::__setItsHVAC(HVAC* p_HVAC) {
    itsHVAC = p_HVAC;
}

void Network::_setItsHVAC(HVAC* p_HVAC) {
    if(itsHVAC != NULL)
        {
            itsHVAC->__setItsNetwork(NULL);
        }
    __setItsHVAC(p_HVAC);
}

void Network::_clearItsHVAC() {
    itsHVAC = NULL;
}

void Network::__setItsLights(Lights* p_Lights) {
    itsLights = p_Lights;
}

void Network::_setItsLights(Lights* p_Lights) {
    if(itsLights != NULL)
        {
            itsLights->__setItsNetwork(NULL);
        }
    __setItsLights(p_Lights);
}

void Network::_clearItsLights() {
    itsLights = NULL;
}

void Network::__setItsMicrophones(Microphones* p_Microphones) {
    itsMicrophones = p_Microphones;
}

void Network::_setItsMicrophones(Microphones* p_Microphones) {
    if(itsMicrophones != NULL)
        {
            itsMicrophones->__setItsNetwork(NULL);
        }
    __setItsMicrophones(p_Microphones);
}

void Network::_clearItsMicrophones() {
    itsMicrophones = NULL;
}

void Network::__setItsMovement_Sensor(Movement_Sensor* p_Movement_Sensor) {
    itsMovement_Sensor = p_Movement_Sensor;
}

void Network::_setItsMovement_Sensor(Movement_Sensor* p_Movement_Sensor) {
    if(itsMovement_Sensor != NULL)
        {
            itsMovement_Sensor->__setItsNetwork(NULL);
        }
    __setItsMovement_Sensor(p_Movement_Sensor);
}

void Network::_clearItsMovement_Sensor() {
    itsMovement_Sensor = NULL;
}

void Network::__setItsOccupancy_Sensor(Occupancy_Sensor* p_Occupancy_Sensor) {
    itsOccupancy_Sensor = p_Occupancy_Sensor;
}

void Network::_setItsOccupancy_Sensor(Occupancy_Sensor* p_Occupancy_Sensor) {
    if(itsOccupancy_Sensor != NULL)
        {
            itsOccupancy_Sensor->__setItsNetwork(NULL);
        }
    __setItsOccupancy_Sensor(p_Occupancy_Sensor);
}

void Network::_clearItsOccupancy_Sensor() {
    itsOccupancy_Sensor = NULL;
}

void Network::__setItsRoom_Touch_Panel(Room_Touch_Panel* p_Room_Touch_Panel) {
    itsRoom_Touch_Panel = p_Room_Touch_Panel;
}

void Network::_setItsRoom_Touch_Panel(Room_Touch_Panel* p_Room_Touch_Panel) {
    if(itsRoom_Touch_Panel != NULL)
        {
            itsRoom_Touch_Panel->__setItsNetwork(NULL);
        }
    __setItsRoom_Touch_Panel(p_Room_Touch_Panel);
}

void Network::_clearItsRoom_Touch_Panel() {
    itsRoom_Touch_Panel = NULL;
}

void Network::__setItsSmart_Room(Smart_Room* p_Smart_Room) {
    itsSmart_Room = p_Smart_Room;
}

void Network::_setItsSmart_Room(Smart_Room* p_Smart_Room) {
    if(itsSmart_Room != NULL)
        {
            itsSmart_Room->__setItsNetwork(NULL);
        }
    __setItsSmart_Room(p_Smart_Room);
}

void Network::_clearItsSmart_Room() {
    itsSmart_Room = NULL;
}

void Network::__setItsSmart_Screen(Smart_Screen* p_Smart_Screen) {
    itsSmart_Screen = p_Smart_Screen;
}

void Network::_setItsSmart_Screen(Smart_Screen* p_Smart_Screen) {
    if(itsSmart_Screen != NULL)
        {
            itsSmart_Screen->__setItsNetwork(NULL);
        }
    __setItsSmart_Screen(p_Smart_Screen);
}

void Network::_clearItsSmart_Screen() {
    itsSmart_Screen = NULL;
}

void Network::__setItsSpeakers(Speakers* p_Speakers) {
    itsSpeakers = p_Speakers;
}

void Network::_setItsSpeakers(Speakers* p_Speakers) {
    if(itsSpeakers != NULL)
        {
            itsSpeakers->__setItsNetwork(NULL);
        }
    __setItsSpeakers(p_Speakers);
}

void Network::_clearItsSpeakers() {
    itsSpeakers = NULL;
}

void Network::__setItsWeather_Forecast(Weather_Forecast* p_Weather_Forecast) {
    itsWeather_Forecast = p_Weather_Forecast;
}

void Network::_setItsWeather_Forecast(Weather_Forecast* p_Weather_Forecast) {
    if(itsWeather_Forecast != NULL)
        {
            itsWeather_Forecast->__setItsNetwork(NULL);
        }
    __setItsWeather_Forecast(p_Weather_Forecast);
}

void Network::_clearItsWeather_Forecast() {
    itsWeather_Forecast = NULL;
}

void Network::__setItsWebcam(Webcam* p_Webcam) {
    itsWebcam = p_Webcam;
}

void Network::_setItsWebcam(Webcam* p_Webcam) {
    if(itsWebcam != NULL)
        {
            itsWebcam->__setItsNetwork(NULL);
        }
    __setItsWebcam(p_Webcam);
}

void Network::_clearItsWebcam() {
    itsWebcam = NULL;
}

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Network.cpp
*********************************************************************/
