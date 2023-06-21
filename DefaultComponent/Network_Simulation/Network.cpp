/********************************************************************
	Rhapsody	: 9.0 
	Login		: Yang
	Component	: DefaultComponent 
	Configuration 	: Network_Simulation
	Model Element	: Network
//!	Generated Date	: Wed, 21, Jun 2023  
	File Path	: DefaultComponent\Network_Simulation\Network.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX

#define _OMSTATECHART_ANIMATED
//#]

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
//#[ ignore
#define ArchitecturalAnalysisPkg_Network_Network_SERIALIZE OM_NO_OP

#define ArchitecturalAnalysisPkg_Network_decreaseLightIntensity_SERIALIZE OM_NO_OP

#define ArchitecturalAnalysisPkg_Network_increaseLightIntensity_SERIALIZE OM_NO_OP

#define ArchitecturalAnalysisPkg_Network_turnOffLight_SERIALIZE OM_NO_OP
//#]

//## package ArchitecturalAnalysisPkg

//## class Network
Network::Network(IOxfActive* theActiveContext) : light_intensity(0) {
    NOTIFY_REACTIVE_CONSTRUCTOR(Network, Network(), 0, ArchitecturalAnalysisPkg_Network_Network_SERIALIZE);
    setActiveContext(theActiveContext, false);
    itsBooking_System = NULL;
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
    initStatechart();
}

Network::~Network() {
    NOTIFY_DESTRUCTOR(~Network, true);
    cleanUpRelations();
}

int Network::decreaseLightIntensity() {
    NOTIFY_OPERATION(decreaseLightIntensity, decreaseLightIntensity(), 0, ArchitecturalAnalysisPkg_Network_decreaseLightIntensity_SERIALIZE);
    //#[ operation decreaseLightIntensity()
    return 0;
    //#]
}

int Network::increaseLightIntensity() {
    NOTIFY_OPERATION(increaseLightIntensity, increaseLightIntensity(), 0, ArchitecturalAnalysisPkg_Network_increaseLightIntensity_SERIALIZE);
    //#[ operation increaseLightIntensity()
    return 0;
    //#]
}

void Network::turnOffLight() {
    NOTIFY_OPERATION(turnOffLight, turnOffLight(), 0, ArchitecturalAnalysisPkg_Network_turnOffLight_SERIALIZE);
    //#[ operation turnOffLight()
    //#]
}

int Network::getLight_intensity() const {
    return light_intensity;
}

void Network::setLight_intensity(int p_light_intensity) {
    light_intensity = p_light_intensity;
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

bool Network::startBehavior() {
    bool done = false;
    done = OMReactive::startBehavior();
    return done;
}

void Network::initStatechart() {
    rootState_subState = OMNonState;
    rootState_active = OMNonState;
}

void Network::cleanUpRelations() {
    if(itsBooking_System != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsBooking_System");
            Network* p_Network = itsBooking_System->getItsNetwork();
            if(p_Network != NULL)
                {
                    itsBooking_System->__setItsNetwork(NULL);
                }
            itsBooking_System = NULL;
        }
    if(itsCO2_Sensor != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsCO2_Sensor");
            Network* p_Network = itsCO2_Sensor->getItsNetwork();
            if(p_Network != NULL)
                {
                    itsCO2_Sensor->__setItsNetwork(NULL);
                }
            itsCO2_Sensor = NULL;
        }
    if(itsDoor_Touch_Panel != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsDoor_Touch_Panel");
            Network* p_Network = itsDoor_Touch_Panel->getItsNetwork();
            if(p_Network != NULL)
                {
                    itsDoor_Touch_Panel->__setItsNetwork(NULL);
                }
            itsDoor_Touch_Panel = NULL;
        }
    if(itsFire_Sensor != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsFire_Sensor");
            Network* p_Network = itsFire_Sensor->getItsNetwork();
            if(p_Network != NULL)
                {
                    itsFire_Sensor->__setItsNetwork(NULL);
                }
            itsFire_Sensor = NULL;
        }
    if(itsHVAC != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsHVAC");
            Network* p_Network = itsHVAC->getItsNetwork();
            if(p_Network != NULL)
                {
                    itsHVAC->__setItsNetwork(NULL);
                }
            itsHVAC = NULL;
        }
    if(itsLights != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsLights");
            Network* p_Network = itsLights->getItsNetwork();
            if(p_Network != NULL)
                {
                    itsLights->__setItsNetwork(NULL);
                }
            itsLights = NULL;
        }
    if(itsMicrophones != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsMicrophones");
            Network* p_Network = itsMicrophones->getItsNetwork();
            if(p_Network != NULL)
                {
                    itsMicrophones->__setItsNetwork(NULL);
                }
            itsMicrophones = NULL;
        }
    if(itsMovement_Sensor != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsMovement_Sensor");
            Network* p_Network = itsMovement_Sensor->getItsNetwork();
            if(p_Network != NULL)
                {
                    itsMovement_Sensor->__setItsNetwork(NULL);
                }
            itsMovement_Sensor = NULL;
        }
    if(itsOccupancy_Sensor != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsOccupancy_Sensor");
            Network* p_Network = itsOccupancy_Sensor->getItsNetwork();
            if(p_Network != NULL)
                {
                    itsOccupancy_Sensor->__setItsNetwork(NULL);
                }
            itsOccupancy_Sensor = NULL;
        }
    if(itsRoom_Touch_Panel != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsRoom_Touch_Panel");
            Network* p_Network = itsRoom_Touch_Panel->getItsNetwork();
            if(p_Network != NULL)
                {
                    itsRoom_Touch_Panel->__setItsNetwork(NULL);
                }
            itsRoom_Touch_Panel = NULL;
        }
    if(itsSmart_Room != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsSmart_Room");
            Network* p_Network = itsSmart_Room->getItsNetwork();
            if(p_Network != NULL)
                {
                    itsSmart_Room->__setItsNetwork(NULL);
                }
            itsSmart_Room = NULL;
        }
    if(itsSmart_Screen != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsSmart_Screen");
            Network* p_Network = itsSmart_Screen->getItsNetwork();
            if(p_Network != NULL)
                {
                    itsSmart_Screen->__setItsNetwork(NULL);
                }
            itsSmart_Screen = NULL;
        }
    if(itsSpeakers != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsSpeakers");
            Network* p_Network = itsSpeakers->getItsNetwork();
            if(p_Network != NULL)
                {
                    itsSpeakers->__setItsNetwork(NULL);
                }
            itsSpeakers = NULL;
        }
    if(itsWeather_Forecast != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsWeather_Forecast");
            Network* p_Network = itsWeather_Forecast->getItsNetwork();
            if(p_Network != NULL)
                {
                    itsWeather_Forecast->__setItsNetwork(NULL);
                }
            itsWeather_Forecast = NULL;
        }
    if(itsWebcam != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsWebcam");
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
    if(p_Booking_System != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsBooking_System", p_Booking_System, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsBooking_System");
        }
}

void Network::_setItsBooking_System(Booking_System* p_Booking_System) {
    if(itsBooking_System != NULL)
        {
            itsBooking_System->__setItsNetwork(NULL);
        }
    __setItsBooking_System(p_Booking_System);
}

void Network::_clearItsBooking_System() {
    NOTIFY_RELATION_CLEARED("itsBooking_System");
    itsBooking_System = NULL;
}

void Network::__setItsCO2_Sensor(CO2_Sensor* p_CO2_Sensor) {
    itsCO2_Sensor = p_CO2_Sensor;
    if(p_CO2_Sensor != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsCO2_Sensor", p_CO2_Sensor, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsCO2_Sensor");
        }
}

void Network::_setItsCO2_Sensor(CO2_Sensor* p_CO2_Sensor) {
    if(itsCO2_Sensor != NULL)
        {
            itsCO2_Sensor->__setItsNetwork(NULL);
        }
    __setItsCO2_Sensor(p_CO2_Sensor);
}

void Network::_clearItsCO2_Sensor() {
    NOTIFY_RELATION_CLEARED("itsCO2_Sensor");
    itsCO2_Sensor = NULL;
}

void Network::__setItsDoor_Touch_Panel(Door_Touch_Panel* p_Door_Touch_Panel) {
    itsDoor_Touch_Panel = p_Door_Touch_Panel;
    if(p_Door_Touch_Panel != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsDoor_Touch_Panel", p_Door_Touch_Panel, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsDoor_Touch_Panel");
        }
}

void Network::_setItsDoor_Touch_Panel(Door_Touch_Panel* p_Door_Touch_Panel) {
    if(itsDoor_Touch_Panel != NULL)
        {
            itsDoor_Touch_Panel->__setItsNetwork(NULL);
        }
    __setItsDoor_Touch_Panel(p_Door_Touch_Panel);
}

void Network::_clearItsDoor_Touch_Panel() {
    NOTIFY_RELATION_CLEARED("itsDoor_Touch_Panel");
    itsDoor_Touch_Panel = NULL;
}

void Network::__setItsFire_Sensor(Fire_Sensor* p_Fire_Sensor) {
    itsFire_Sensor = p_Fire_Sensor;
    if(p_Fire_Sensor != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsFire_Sensor", p_Fire_Sensor, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsFire_Sensor");
        }
}

void Network::_setItsFire_Sensor(Fire_Sensor* p_Fire_Sensor) {
    if(itsFire_Sensor != NULL)
        {
            itsFire_Sensor->__setItsNetwork(NULL);
        }
    __setItsFire_Sensor(p_Fire_Sensor);
}

void Network::_clearItsFire_Sensor() {
    NOTIFY_RELATION_CLEARED("itsFire_Sensor");
    itsFire_Sensor = NULL;
}

void Network::__setItsHVAC(HVAC* p_HVAC) {
    itsHVAC = p_HVAC;
    if(p_HVAC != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsHVAC", p_HVAC, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsHVAC");
        }
}

void Network::_setItsHVAC(HVAC* p_HVAC) {
    if(itsHVAC != NULL)
        {
            itsHVAC->__setItsNetwork(NULL);
        }
    __setItsHVAC(p_HVAC);
}

void Network::_clearItsHVAC() {
    NOTIFY_RELATION_CLEARED("itsHVAC");
    itsHVAC = NULL;
}

void Network::__setItsLights(Lights* p_Lights) {
    itsLights = p_Lights;
    if(p_Lights != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsLights", p_Lights, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsLights");
        }
}

void Network::_setItsLights(Lights* p_Lights) {
    if(itsLights != NULL)
        {
            itsLights->__setItsNetwork(NULL);
        }
    __setItsLights(p_Lights);
}

void Network::_clearItsLights() {
    NOTIFY_RELATION_CLEARED("itsLights");
    itsLights = NULL;
}

void Network::__setItsMicrophones(Microphones* p_Microphones) {
    itsMicrophones = p_Microphones;
    if(p_Microphones != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsMicrophones", p_Microphones, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsMicrophones");
        }
}

void Network::_setItsMicrophones(Microphones* p_Microphones) {
    if(itsMicrophones != NULL)
        {
            itsMicrophones->__setItsNetwork(NULL);
        }
    __setItsMicrophones(p_Microphones);
}

void Network::_clearItsMicrophones() {
    NOTIFY_RELATION_CLEARED("itsMicrophones");
    itsMicrophones = NULL;
}

void Network::__setItsMovement_Sensor(Movement_Sensor* p_Movement_Sensor) {
    itsMovement_Sensor = p_Movement_Sensor;
    if(p_Movement_Sensor != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsMovement_Sensor", p_Movement_Sensor, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsMovement_Sensor");
        }
}

void Network::_setItsMovement_Sensor(Movement_Sensor* p_Movement_Sensor) {
    if(itsMovement_Sensor != NULL)
        {
            itsMovement_Sensor->__setItsNetwork(NULL);
        }
    __setItsMovement_Sensor(p_Movement_Sensor);
}

void Network::_clearItsMovement_Sensor() {
    NOTIFY_RELATION_CLEARED("itsMovement_Sensor");
    itsMovement_Sensor = NULL;
}

void Network::__setItsOccupancy_Sensor(Occupancy_Sensor* p_Occupancy_Sensor) {
    itsOccupancy_Sensor = p_Occupancy_Sensor;
    if(p_Occupancy_Sensor != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsOccupancy_Sensor", p_Occupancy_Sensor, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsOccupancy_Sensor");
        }
}

void Network::_setItsOccupancy_Sensor(Occupancy_Sensor* p_Occupancy_Sensor) {
    if(itsOccupancy_Sensor != NULL)
        {
            itsOccupancy_Sensor->__setItsNetwork(NULL);
        }
    __setItsOccupancy_Sensor(p_Occupancy_Sensor);
}

void Network::_clearItsOccupancy_Sensor() {
    NOTIFY_RELATION_CLEARED("itsOccupancy_Sensor");
    itsOccupancy_Sensor = NULL;
}

void Network::__setItsRoom_Touch_Panel(Room_Touch_Panel* p_Room_Touch_Panel) {
    itsRoom_Touch_Panel = p_Room_Touch_Panel;
    if(p_Room_Touch_Panel != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsRoom_Touch_Panel", p_Room_Touch_Panel, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsRoom_Touch_Panel");
        }
}

void Network::_setItsRoom_Touch_Panel(Room_Touch_Panel* p_Room_Touch_Panel) {
    if(itsRoom_Touch_Panel != NULL)
        {
            itsRoom_Touch_Panel->__setItsNetwork(NULL);
        }
    __setItsRoom_Touch_Panel(p_Room_Touch_Panel);
}

void Network::_clearItsRoom_Touch_Panel() {
    NOTIFY_RELATION_CLEARED("itsRoom_Touch_Panel");
    itsRoom_Touch_Panel = NULL;
}

void Network::__setItsSmart_Room(Smart_Room* p_Smart_Room) {
    itsSmart_Room = p_Smart_Room;
    if(p_Smart_Room != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsSmart_Room", p_Smart_Room, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsSmart_Room");
        }
}

void Network::_setItsSmart_Room(Smart_Room* p_Smart_Room) {
    if(itsSmart_Room != NULL)
        {
            itsSmart_Room->__setItsNetwork(NULL);
        }
    __setItsSmart_Room(p_Smart_Room);
}

void Network::_clearItsSmart_Room() {
    NOTIFY_RELATION_CLEARED("itsSmart_Room");
    itsSmart_Room = NULL;
}

void Network::__setItsSmart_Screen(Smart_Screen* p_Smart_Screen) {
    itsSmart_Screen = p_Smart_Screen;
    if(p_Smart_Screen != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsSmart_Screen", p_Smart_Screen, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsSmart_Screen");
        }
}

void Network::_setItsSmart_Screen(Smart_Screen* p_Smart_Screen) {
    if(itsSmart_Screen != NULL)
        {
            itsSmart_Screen->__setItsNetwork(NULL);
        }
    __setItsSmart_Screen(p_Smart_Screen);
}

void Network::_clearItsSmart_Screen() {
    NOTIFY_RELATION_CLEARED("itsSmart_Screen");
    itsSmart_Screen = NULL;
}

void Network::__setItsSpeakers(Speakers* p_Speakers) {
    itsSpeakers = p_Speakers;
    if(p_Speakers != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsSpeakers", p_Speakers, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsSpeakers");
        }
}

void Network::_setItsSpeakers(Speakers* p_Speakers) {
    if(itsSpeakers != NULL)
        {
            itsSpeakers->__setItsNetwork(NULL);
        }
    __setItsSpeakers(p_Speakers);
}

void Network::_clearItsSpeakers() {
    NOTIFY_RELATION_CLEARED("itsSpeakers");
    itsSpeakers = NULL;
}

void Network::__setItsWeather_Forecast(Weather_Forecast* p_Weather_Forecast) {
    itsWeather_Forecast = p_Weather_Forecast;
    if(p_Weather_Forecast != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsWeather_Forecast", p_Weather_Forecast, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsWeather_Forecast");
        }
}

void Network::_setItsWeather_Forecast(Weather_Forecast* p_Weather_Forecast) {
    if(itsWeather_Forecast != NULL)
        {
            itsWeather_Forecast->__setItsNetwork(NULL);
        }
    __setItsWeather_Forecast(p_Weather_Forecast);
}

void Network::_clearItsWeather_Forecast() {
    NOTIFY_RELATION_CLEARED("itsWeather_Forecast");
    itsWeather_Forecast = NULL;
}

void Network::__setItsWebcam(Webcam* p_Webcam) {
    itsWebcam = p_Webcam;
    if(p_Webcam != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsWebcam", p_Webcam, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsWebcam");
        }
}

void Network::_setItsWebcam(Webcam* p_Webcam) {
    if(itsWebcam != NULL)
        {
            itsWebcam->__setItsNetwork(NULL);
        }
    __setItsWebcam(p_Webcam);
}

void Network::_clearItsWebcam() {
    NOTIFY_RELATION_CLEARED("itsWebcam");
    itsWebcam = NULL;
}

void Network::rootState_entDef() {
    {
        NOTIFY_STATE_ENTERED("ROOT");
        NOTIFY_TRANSITION_STARTED("0");
        NOTIFY_STATE_ENTERED("ROOT.lights_off");
        rootState_subState = lights_off;
        rootState_active = lights_off;
        NOTIFY_TRANSITION_TERMINATED("0");
    }
}

IOxfReactive::TakeEventStatus Network::rootState_processEvent() {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    switch (rootState_active) {
        // State lights_off
        case lights_off:
        {
            if(IS_EVENT_TYPE_OF(turn_on_light_ArchitecturalAnalysisPkg_id))
                {
                    NOTIFY_TRANSITION_STARTED("1");
                    NOTIFY_STATE_EXITED("ROOT.lights_off");
                    NOTIFY_STATE_ENTERED("ROOT.lights_on");
                    rootState_subState = lights_on;
                    rootState_active = lights_on;
                    NOTIFY_TRANSITION_TERMINATED("1");
                    res = eventConsumed;
                }
            
        }
        break;
        // State lights_on
        case lights_on:
        {
            if(IS_EVENT_TYPE_OF(turn_off_light_ArchitecturalAnalysisPkg_id))
                {
                    NOTIFY_TRANSITION_STARTED("2");
                    NOTIFY_STATE_EXITED("ROOT.lights_on");
                    NOTIFY_STATE_ENTERED("ROOT.lights_off");
                    rootState_subState = lights_off;
                    rootState_active = lights_off;
                    NOTIFY_TRANSITION_TERMINATED("2");
                    res = eventConsumed;
                }
            
        }
        break;
        default:
            break;
    }
    return res;
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedNetwork::serializeAttributes(AOMSAttributes* aomsAttributes) const {
    aomsAttributes->addAttribute("light_intensity", x2String(myReal->light_intensity));
}

void OMAnimatedNetwork::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsSmart_Room", false, true);
    if(myReal->itsSmart_Room)
        {
            aomsRelations->ADD_ITEM(myReal->itsSmart_Room);
        }
    aomsRelations->addRelation("itsHVAC", false, true);
    if(myReal->itsHVAC)
        {
            aomsRelations->ADD_ITEM(myReal->itsHVAC);
        }
    aomsRelations->addRelation("itsWeather_Forecast", false, true);
    if(myReal->itsWeather_Forecast)
        {
            aomsRelations->ADD_ITEM(myReal->itsWeather_Forecast);
        }
    aomsRelations->addRelation("itsBooking_System", false, true);
    if(myReal->itsBooking_System)
        {
            aomsRelations->ADD_ITEM(myReal->itsBooking_System);
        }
    aomsRelations->addRelation("itsRoom_Touch_Panel", false, true);
    if(myReal->itsRoom_Touch_Panel)
        {
            aomsRelations->ADD_ITEM(myReal->itsRoom_Touch_Panel);
        }
    aomsRelations->addRelation("itsDoor_Touch_Panel", false, true);
    if(myReal->itsDoor_Touch_Panel)
        {
            aomsRelations->ADD_ITEM(myReal->itsDoor_Touch_Panel);
        }
    aomsRelations->addRelation("itsSmart_Screen", false, true);
    if(myReal->itsSmart_Screen)
        {
            aomsRelations->ADD_ITEM(myReal->itsSmart_Screen);
        }
    aomsRelations->addRelation("itsSpeakers", false, true);
    if(myReal->itsSpeakers)
        {
            aomsRelations->ADD_ITEM(myReal->itsSpeakers);
        }
    aomsRelations->addRelation("itsWebcam", false, true);
    if(myReal->itsWebcam)
        {
            aomsRelations->ADD_ITEM(myReal->itsWebcam);
        }
    aomsRelations->addRelation("itsMicrophones", false, true);
    if(myReal->itsMicrophones)
        {
            aomsRelations->ADD_ITEM(myReal->itsMicrophones);
        }
    aomsRelations->addRelation("itsLights", false, true);
    if(myReal->itsLights)
        {
            aomsRelations->ADD_ITEM(myReal->itsLights);
        }
    aomsRelations->addRelation("itsCO2_Sensor", false, true);
    if(myReal->itsCO2_Sensor)
        {
            aomsRelations->ADD_ITEM(myReal->itsCO2_Sensor);
        }
    aomsRelations->addRelation("itsOccupancy_Sensor", false, true);
    if(myReal->itsOccupancy_Sensor)
        {
            aomsRelations->ADD_ITEM(myReal->itsOccupancy_Sensor);
        }
    aomsRelations->addRelation("itsMovement_Sensor", false, true);
    if(myReal->itsMovement_Sensor)
        {
            aomsRelations->ADD_ITEM(myReal->itsMovement_Sensor);
        }
    aomsRelations->addRelation("itsFire_Sensor", false, true);
    if(myReal->itsFire_Sensor)
        {
            aomsRelations->ADD_ITEM(myReal->itsFire_Sensor);
        }
}

void OMAnimatedNetwork::rootState_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT");
    switch (myReal->rootState_subState) {
        case Network::lights_off:
        {
            lights_off_serializeStates(aomsState);
        }
        break;
        case Network::lights_on:
        {
            lights_on_serializeStates(aomsState);
        }
        break;
        default:
            break;
    }
}

void OMAnimatedNetwork::lights_on_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.lights_on");
}

void OMAnimatedNetwork::lights_off_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.lights_off");
}
//#]

IMPLEMENT_REACTIVE_META_P(Network, ArchitecturalAnalysisPkg, ArchitecturalAnalysisPkg, false, OMAnimatedNetwork)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\Network_Simulation\Network.cpp
*********************************************************************/
