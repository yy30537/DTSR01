/********************************************************************
	Rhapsody	: 9.0 
	Login		: 20181759
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Network
//!	Generated Date	: Wed, 5, Jul 2023  
	File Path	: DefaultComponent\DefaultConfig\Network.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX

#define _OMSTATECHART_ANIMATED
//#]

//## auto_generated
#include "Network.h"
//## link itsBooking_System
#include "Booking_System.h"
//## link itsDoor_Touch_Panel
#include "Door_Touch_Panel.h"
//## link itsExternal_Personnel
#include "External_Personnel.h"
//## link itsExternalPersonnel
#include "ExternalPersonnel.h"
//## link itsHVAC
#include "HVAC.h"
//## link itsRoom_Touch_Panel
#include "Room_Touch_Panel.h"
//## link itsSmart_Room
#include "Smart_Room.h"
//## link itsUser
#include "User.h"
//#[ ignore
#define ArchitecturalAnalysisPkg_Network_Network_SERIALIZE OM_NO_OP

#define ArchitecturalAnalysisPkg_Network_Set_CO2_Alarm_SERIALIZE aomsmethod->addAttribute("alarm_state", x2String(alarm_state));

#define ArchitecturalAnalysisPkg_Network_Set_Fire_Alarm_SERIALIZE aomsmethod->addAttribute("alarm_state", x2String(alarm_state));
//#]

//## package ArchitecturalAnalysisPkg

//## class Network
Network::Network(IOxfActive* theActiveContext) : CO2_Alarm_NetworkState(false), Fire_Alarm_NetworkState(false) {
    NOTIFY_REACTIVE_CONSTRUCTOR(Network, Network(), 0, ArchitecturalAnalysisPkg_Network_Network_SERIALIZE);
    setActiveContext(theActiveContext, false);
    {
        {
            itsFire_Sensor.setShouldDelete(false);
        }
        {
            itsCO2_Sensor.setShouldDelete(false);
        }
    }
    itsBooking_System = NULL;
    itsDoor_Touch_Panel = NULL;
    itsExternalPersonnel = NULL;
    itsExternal_Personnel = NULL;
    itsHVAC = NULL;
    itsLights = NULL;
    itsMicrophones = NULL;
    itsMovement_Sensor = NULL;
    itsOccupancy_Sensor = NULL;
    itsRoom_Touch_Panel = NULL;
    itsSmart_Room = NULL;
    itsSmart_Screen = NULL;
    itsSpeakers = NULL;
    itsUser = NULL;
    itsWebcam = NULL;
    initStatechart();
}

Network::~Network() {
    NOTIFY_DESTRUCTOR(~Network, true);
    cleanUpRelations();
}

void Network::Set_CO2_Alarm(bool alarm_state) {
    NOTIFY_OPERATION(Set_CO2_Alarm, Set_CO2_Alarm(bool), 1, ArchitecturalAnalysisPkg_Network_Set_CO2_Alarm_SERIALIZE);
    //#[ operation Set_CO2_Alarm(bool)
    std::cout<< " set CO2_Alarm_NetworkState \n";
    CO2_Alarm_NetworkState = alarm_state;
    
    //#]
}

void Network::Set_Fire_Alarm(bool alarm_state) {
    NOTIFY_OPERATION(Set_Fire_Alarm, Set_Fire_Alarm(bool), 1, ArchitecturalAnalysisPkg_Network_Set_Fire_Alarm_SERIALIZE);
    //#[ operation Set_Fire_Alarm(bool)
    std::cout<< " set Fire_Alarm_NetworkState \n";
    Fire_Alarm_NetworkState = alarm_state;
    //#]
}

bool Network::getCO2_Alarm_NetworkState() const {
    return CO2_Alarm_NetworkState;
}

void Network::setCO2_Alarm_NetworkState(bool p_CO2_Alarm_NetworkState) {
    CO2_Alarm_NetworkState = p_CO2_Alarm_NetworkState;
}

bool Network::getFire_Alarm_NetworkState() const {
    return Fire_Alarm_NetworkState;
}

void Network::setFire_Alarm_NetworkState(bool p_Fire_Alarm_NetworkState) {
    Fire_Alarm_NetworkState = p_Fire_Alarm_NetworkState;
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
    return (CO2_Sensor*) &itsCO2_Sensor;
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

ExternalPersonnel* Network::getItsExternalPersonnel() const {
    return itsExternalPersonnel;
}

void Network::setItsExternalPersonnel(ExternalPersonnel* p_ExternalPersonnel) {
    if(p_ExternalPersonnel != NULL)
        {
            p_ExternalPersonnel->_setItsNetwork(this);
        }
    _setItsExternalPersonnel(p_ExternalPersonnel);
}

External_Personnel* Network::getItsExternal_Personnel() const {
    return itsExternal_Personnel;
}

void Network::setItsExternal_Personnel(External_Personnel* p_External_Personnel) {
    if(p_External_Personnel != NULL)
        {
            p_External_Personnel->_setItsNetwork(this);
        }
    _setItsExternal_Personnel(p_External_Personnel);
}

Fire_Sensor* Network::getItsFire_Sensor() const {
    return (Fire_Sensor*) &itsFire_Sensor;
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

Lights* Network::getItsLights_1() const {
    return (Lights*) &itsLights_1;
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

Microphones* Network::getItsMicrophones_1() const {
    return (Microphones*) &itsMicrophones_1;
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

Movement_Sensor* Network::getItsMovement_Sensor_1() const {
    return (Movement_Sensor*) &itsMovement_Sensor_1;
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

Occupancy_Sensor* Network::getItsOccupancy_Sensor_1() const {
    return (Occupancy_Sensor*) &itsOccupancy_Sensor_1;
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

Smart_Screen* Network::getItsSmart_Screen_1() const {
    return (Smart_Screen*) &itsSmart_Screen_1;
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

Speakers* Network::getItsSpeakers_1() const {
    return (Speakers*) &itsSpeakers_1;
}

User* Network::getItsUser() const {
    return itsUser;
}

void Network::setItsUser(User* p_User) {
    if(p_User != NULL)
        {
            p_User->_setItsNetwork(this);
        }
    _setItsUser(p_User);
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

Webcam* Network::getItsWebcam_1() const {
    return (Webcam*) &itsWebcam_1;
}

bool Network::startBehavior() {
    bool done = true;
    done &= itsCO2_Sensor.startBehavior();
    done &= itsFire_Sensor.startBehavior();
    done &= OMReactive::startBehavior();
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
    if(itsExternalPersonnel != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsExternalPersonnel");
            Network* p_Network = itsExternalPersonnel->getItsNetwork();
            if(p_Network != NULL)
                {
                    itsExternalPersonnel->__setItsNetwork(NULL);
                }
            itsExternalPersonnel = NULL;
        }
    if(itsExternal_Personnel != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsExternal_Personnel");
            Network* p_Network = itsExternal_Personnel->getItsNetwork();
            if(p_Network != NULL)
                {
                    itsExternal_Personnel->__setItsNetwork(NULL);
                }
            itsExternal_Personnel = NULL;
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
    if(itsUser != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsUser");
            Network* p_Network = itsUser->getItsNetwork();
            if(p_Network != NULL)
                {
                    itsUser->__setItsNetwork(NULL);
                }
            itsUser = NULL;
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

void Network::__setItsExternalPersonnel(ExternalPersonnel* p_ExternalPersonnel) {
    itsExternalPersonnel = p_ExternalPersonnel;
    if(p_ExternalPersonnel != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsExternalPersonnel", p_ExternalPersonnel, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsExternalPersonnel");
        }
}

void Network::_setItsExternalPersonnel(ExternalPersonnel* p_ExternalPersonnel) {
    if(itsExternalPersonnel != NULL)
        {
            itsExternalPersonnel->__setItsNetwork(NULL);
        }
    __setItsExternalPersonnel(p_ExternalPersonnel);
}

void Network::_clearItsExternalPersonnel() {
    NOTIFY_RELATION_CLEARED("itsExternalPersonnel");
    itsExternalPersonnel = NULL;
}

void Network::__setItsExternal_Personnel(External_Personnel* p_External_Personnel) {
    itsExternal_Personnel = p_External_Personnel;
    if(p_External_Personnel != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsExternal_Personnel", p_External_Personnel, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsExternal_Personnel");
        }
}

void Network::_setItsExternal_Personnel(External_Personnel* p_External_Personnel) {
    if(itsExternal_Personnel != NULL)
        {
            itsExternal_Personnel->__setItsNetwork(NULL);
        }
    __setItsExternal_Personnel(p_External_Personnel);
}

void Network::_clearItsExternal_Personnel() {
    NOTIFY_RELATION_CLEARED("itsExternal_Personnel");
    itsExternal_Personnel = NULL;
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

void Network::__setItsUser(User* p_User) {
    itsUser = p_User;
    if(p_User != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsUser", p_User, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsUser");
        }
}

void Network::_setItsUser(User* p_User) {
    if(itsUser != NULL)
        {
            itsUser->__setItsNetwork(NULL);
        }
    __setItsUser(p_User);
}

void Network::_clearItsUser() {
    NOTIFY_RELATION_CLEARED("itsUser");
    itsUser = NULL;
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

void Network::setActiveContext(IOxfActive* theActiveContext, bool activeInstance) {
    OMReactive::setActiveContext(theActiveContext, activeInstance);
    {
        itsFire_Sensor.setActiveContext(theActiveContext, false);
        itsCO2_Sensor.setActiveContext(theActiveContext, false);
    }
}

void Network::destroy() {
    itsCO2_Sensor.destroy();
    itsFire_Sensor.destroy();
    OMReactive::destroy();
}

void Network::rootState_entDef() {
    {
        NOTIFY_STATE_ENTERED("ROOT");
        NOTIFY_TRANSITION_STARTED("0");
        NOTIFY_STATE_ENTERED("ROOT.CO2_Alarm_Off");
        rootState_subState = CO2_Alarm_Off;
        rootState_active = CO2_Alarm_Off;
        //#[ state CO2_Alarm_Off.(Entry) 
         Set_CO2_Alarm(false);
        //#]
        NOTIFY_TRANSITION_TERMINATED("0");
    }
}

IOxfReactive::TakeEventStatus Network::rootState_processEvent() {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    switch (rootState_active) {
        // State CO2_Alarm_Off
        case CO2_Alarm_Off:
        {
            if(IS_EVENT_TYPE_OF(ev_CO2_Level_OverThreshold_ArchitecturalAnalysisPkg_id))
                {
                    NOTIFY_TRANSITION_STARTED("1");
                    //#[ state CO2_Alarm_Off.(Exit) 
                    std::cout << " set co2 alarm to false \n";
                    //#]
                    NOTIFY_STATE_EXITED("ROOT.CO2_Alarm_Off");
                    NOTIFY_STATE_ENTERED("ROOT.CO2_Alarm_On");
                    rootState_subState = CO2_Alarm_On;
                    rootState_active = CO2_Alarm_On;
                    //#[ state CO2_Alarm_On.(Entry) 
                    Set_CO2_Alarm(true);
                    //#]
                    NOTIFY_TRANSITION_TERMINATED("1");
                    res = eventConsumed;
                }
            
        }
        break;
        // State CO2_Alarm_On
        case CO2_Alarm_On:
        {
            if(IS_EVENT_TYPE_OF(ev_CO2_Level_BelowThreshold_ArchitecturalAnalysisPkg_id))
                {
                    NOTIFY_TRANSITION_STARTED("2");
                    //#[ state CO2_Alarm_On.(Exit) 
                    std::cout << " set co2 alarm to true \n";
                    //#]
                    NOTIFY_STATE_EXITED("ROOT.CO2_Alarm_On");
                    NOTIFY_STATE_ENTERED("ROOT.CO2_Alarm_Off");
                    rootState_subState = CO2_Alarm_Off;
                    rootState_active = CO2_Alarm_Off;
                    //#[ state CO2_Alarm_Off.(Entry) 
                     Set_CO2_Alarm(false);
                    //#]
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
    aomsAttributes->addAttribute("Fire_Alarm_NetworkState", x2String(myReal->Fire_Alarm_NetworkState));
    aomsAttributes->addAttribute("CO2_Alarm_NetworkState", x2String(myReal->CO2_Alarm_NetworkState));
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
    aomsRelations->addRelation("itsBooking_System", false, true);
    if(myReal->itsBooking_System)
        {
            aomsRelations->ADD_ITEM(myReal->itsBooking_System);
        }
    aomsRelations->addRelation("itsExternal_Personnel", false, true);
    if(myReal->itsExternal_Personnel)
        {
            aomsRelations->ADD_ITEM(myReal->itsExternal_Personnel);
        }
    aomsRelations->addRelation("itsExternalPersonnel", false, true);
    if(myReal->itsExternalPersonnel)
        {
            aomsRelations->ADD_ITEM(myReal->itsExternalPersonnel);
        }
    aomsRelations->addRelation("itsUser", false, true);
    if(myReal->itsUser)
        {
            aomsRelations->ADD_ITEM(myReal->itsUser);
        }
    aomsRelations->addRelation("itsFire_Sensor", true, true);
    aomsRelations->ADD_ITEM(&myReal->itsFire_Sensor);
    aomsRelations->addRelation("itsCO2_Sensor", true, true);
    aomsRelations->ADD_ITEM(&myReal->itsCO2_Sensor);
    aomsRelations->addRelation("itsLights_1", true, true);
    aomsRelations->ADD_ITEM(&myReal->itsLights_1);
    aomsRelations->addRelation("itsSmart_Screen_1", true, true);
    aomsRelations->ADD_ITEM(&myReal->itsSmart_Screen_1);
    aomsRelations->addRelation("itsSpeakers_1", true, true);
    aomsRelations->ADD_ITEM(&myReal->itsSpeakers_1);
    aomsRelations->addRelation("itsWebcam_1", true, true);
    aomsRelations->ADD_ITEM(&myReal->itsWebcam_1);
    aomsRelations->addRelation("itsMicrophones_1", true, true);
    aomsRelations->ADD_ITEM(&myReal->itsMicrophones_1);
    aomsRelations->addRelation("itsMovement_Sensor_1", true, true);
    aomsRelations->ADD_ITEM(&myReal->itsMovement_Sensor_1);
    aomsRelations->addRelation("itsOccupancy_Sensor_1", true, true);
    aomsRelations->ADD_ITEM(&myReal->itsOccupancy_Sensor_1);
}

void OMAnimatedNetwork::rootState_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT");
    switch (myReal->rootState_subState) {
        case Network::CO2_Alarm_Off:
        {
            CO2_Alarm_Off_serializeStates(aomsState);
        }
        break;
        case Network::CO2_Alarm_On:
        {
            CO2_Alarm_On_serializeStates(aomsState);
        }
        break;
        default:
            break;
    }
}

void OMAnimatedNetwork::CO2_Alarm_On_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.CO2_Alarm_On");
}

void OMAnimatedNetwork::CO2_Alarm_Off_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.CO2_Alarm_Off");
}
//#]

IMPLEMENT_REACTIVE_META_P(Network, ArchitecturalAnalysisPkg, ArchitecturalAnalysisPkg, false, OMAnimatedNetwork)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Network.cpp
*********************************************************************/
