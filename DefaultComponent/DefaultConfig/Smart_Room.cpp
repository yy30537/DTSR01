/********************************************************************
	Rhapsody	: 9.0 
	Login		: 20181759
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Smart_Room
//!	Generated Date	: Mon, 19, Jun 2023  
	File Path	: DefaultComponent\DefaultConfig\Smart_Room.cpp
*********************************************************************/

//## auto_generated
#include "Smart_Room.h"
//## link itsBooking_System
#include "Booking_System.h"
//## link itsExternal Personnel
#include "External Personnel.h"
//## classInstance itsFire_Sensor
#include "Fire_Sensor.h"
//## link itsHVAC
#include "HVAC.h"
//## classInstance itsLights
#include "Lights.h"
//## classInstance itsMicrophones
#include "Microphones.h"
//## link itsNetwork
#include "Network.h"
//## classInstance itsSpeakers
#include "Speakers.h"
//## link itsUser
#include "User.h"
//## link itsWeather_Forecast
#include "Weather_Forecast.h"
//## package ArchitecturalAnalysisPkg

//## class Smart_Room
Smart_Room::Smart_Room() {
    itsBooking_System = NULL;
    itsHVAC = NULL;
    itsNetwork = NULL;
    {
        for (int pos = 0; pos < . *; ++pos) {
        	itsUser[pos] = NULL;
        }
    }
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

OMIterator<External Personnel*> Smart_Room::getItsExternal Personnel() const {
    OMIterator<External Personnel*> iter(itsExternal Personnel);
    return iter;
}

void Smart_Room::addItsExternal Personnel(External Personnel* p_External Personnel) {
    if(p_External Personnel != NULL)
        {
            p_External Personnel->_setItsSmart_Room(this);
        }
    _addItsExternal Personnel(p_External Personnel);
}

void Smart_Room::removeItsExternal Personnel(External Personnel* p_External Personnel) {
    if(p_External Personnel != NULL)
        {
            p_External Personnel->__setItsSmart_Room(NULL);
        }
    _removeItsExternal Personnel(p_External Personnel);
}

void Smart_Room::clearItsExternal Personnel() {
    OMIterator<External Personnel*> iter(itsExternal Personnel);
    while (*iter){
        (*iter)->_clearItsSmart_Room();
        iter++;
    }
    _clearItsExternal Personnel();
}

OMIterator<Fire_Sensor*> Smart_Room::getItsFire_Sensor() const {
    OMIterator<Fire_Sensor*> iter(itsFire_Sensor);
    return iter;
}

Fire_Sensor* Smart_Room::newItsFire_Sensor() {
    Fire_Sensor* newFire_Sensor = new Fire_Sensor;
    itsFire_Sensor.add(newFire_Sensor);
    return newFire_Sensor;
}

void Smart_Room::deleteItsFire_Sensor(Fire_Sensor* p_Fire_Sensor) {
    itsFire_Sensor.remove(p_Fire_Sensor);
    delete p_Fire_Sensor;
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

OMIterator<Lights*> Smart_Room::getItsLights() const {
    OMIterator<Lights*> iter(itsLights);
    return iter;
}

Lights* Smart_Room::newItsLights() {
    Lights* newLights = new Lights;
    itsLights.add(newLights);
    return newLights;
}

void Smart_Room::deleteItsLights(Lights* p_Lights) {
    itsLights.remove(p_Lights);
    delete p_Lights;
}

OMIterator<Microphones*> Smart_Room::getItsMicrophones() const {
    OMIterator<Microphones*> iter(itsMicrophones);
    return iter;
}

Microphones* Smart_Room::newItsMicrophones() {
    Microphones* newMicrophones = new Microphones;
    itsMicrophones.add(newMicrophones);
    return newMicrophones;
}

void Smart_Room::deleteItsMicrophones(Microphones* p_Microphones) {
    itsMicrophones.remove(p_Microphones);
    delete p_Microphones;
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

Occupancy_Sensor* Smart_Room::getItsOccupancy_Sensor() const {
    return (Occupancy_Sensor*) &itsOccupancy_Sensor;
}

Room_Touch_Panel* Smart_Room::getItsRoom_Touch_Panel() const {
    return (Room_Touch_Panel*) &itsRoom_Touch_Panel;
}

Smart_Screen* Smart_Room::getItsSmart_Screen() const {
    return (Smart_Screen*) &itsSmart_Screen;
}

OMIterator<Speakers*> Smart_Room::getItsSpeakers() const {
    OMIterator<Speakers*> iter(itsSpeakers);
    return iter;
}

Speakers* Smart_Room::newItsSpeakers() {
    Speakers* newSpeakers = new Speakers;
    itsSpeakers.add(newSpeakers);
    return newSpeakers;
}

void Smart_Room::deleteItsSpeakers(Speakers* p_Speakers) {
    itsSpeakers.remove(p_Speakers);
    delete p_Speakers;
}

int Smart_Room::getItsUser() const {
    int iter = 0;
    return iter;
}

void Smart_Room::addItsUser(User* p_User) {
    if(p_User != NULL)
        {
            p_User->_setItsSmart_Room(this);
        }
    _addItsUser(p_User);
}

void Smart_Room::removeItsUser(User* p_User) {
    if(p_User != NULL)
        {
            p_User->__setItsSmart_Room(NULL);
        }
    _removeItsUser(p_User);
}

void Smart_Room::clearItsUser() {
    int iter = 0;
    while ((iter < . *) && itsUser[iter]){
        (itsUser[iter])->_clearItsSmart_Room();
        iter++;
    }
    _clearItsUser();
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
    {
        OMIterator<Speakers*> iter(itsSpeakers);
        while (*iter){
            deleteItsSpeakers(*iter);
            iter.reset();
        }
    }
    {
        OMIterator<Microphones*> iter(itsMicrophones);
        while (*iter){
            deleteItsMicrophones(*iter);
            iter.reset();
        }
    }
    {
        OMIterator<Lights*> iter(itsLights);
        while (*iter){
            deleteItsLights(*iter);
            iter.reset();
        }
    }
    {
        OMIterator<Fire_Sensor*> iter(itsFire_Sensor);
        while (*iter){
            deleteItsFire_Sensor(*iter);
            iter.reset();
        }
    }
    if(itsBooking_System != NULL)
        {
            Smart_Room* p_Smart_Room = itsBooking_System->getItsSmart_Room();
            if(p_Smart_Room != NULL)
                {
                    itsBooking_System->__setItsSmart_Room(NULL);
                }
            itsBooking_System = NULL;
        }
    {
        OMIterator<External Personnel*> iter(itsExternal Personnel);
        while (*iter){
            Smart_Room* p_Smart_Room = (*iter)->getItsSmart_Room();
            if(p_Smart_Room != NULL)
                {
                    (*iter)->__setItsSmart_Room(NULL);
                }
            iter++;
        }
        itsExternal Personnel.removeAll();
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
    {
        int iter = 0;
        while ((iter < . *) && itsUser[iter]){
            Smart_Room* p_Smart_Room = (itsUser[iter])->getItsSmart_Room();
            if(p_Smart_Room != NULL)
                {
                    (itsUser[iter])->__setItsSmart_Room(NULL);
                }
            iter++;
        }
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

void Smart_Room::_addItsExternal Personnel(External Personnel* p_External Personnel) {
    itsExternal Personnel.add(p_External Personnel);
}

void Smart_Room::_removeItsExternal Personnel(External Personnel* p_External Personnel) {
    itsExternal Personnel.remove(p_External Personnel);
}

void Smart_Room::_clearItsExternal Personnel() {
    itsExternal Personnel.removeAll();
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

void Smart_Room::_addItsUser(User* p_User) {
    for (int pos = 0; pos < . *; ++pos) {
    	if (!itsUser[pos]) {
    		itsUser[pos] = p_User;
    		break;
    	}
    }
}

void Smart_Room::_removeItsUser(User* p_User) {
    for (int pos = 0; pos < . *; ++pos) {
    	if (itsUser[pos] == p_User) {
    		itsUser[pos] = NULL;
    	}
    }
}

void Smart_Room::_clearItsUser() {
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
