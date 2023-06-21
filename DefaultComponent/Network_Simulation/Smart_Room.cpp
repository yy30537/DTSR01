/********************************************************************
	Rhapsody	: 9.0 
	Login		: Yang
	Component	: DefaultComponent 
	Configuration 	: Network_Simulation
	Model Element	: Smart_Room
//!	Generated Date	: Wed, 21, Jun 2023  
	File Path	: DefaultComponent\Network_Simulation\Smart_Room.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

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
//#[ ignore
#define ArchitecturalAnalysisPkg_Smart_Room_Smart_Room_SERIALIZE OM_NO_OP
//#]

//## package ArchitecturalAnalysisPkg

//## class Smart_Room
Smart_Room::Smart_Room() {
    NOTIFY_CONSTRUCTOR(Smart_Room, Smart_Room(), 0, ArchitecturalAnalysisPkg_Smart_Room_Smart_Room_SERIALIZE);
    itsBooking_System = NULL;
    itsHVAC = NULL;
    itsNetwork = NULL;
    itsWeather_Forecast = NULL;
}

Smart_Room::~Smart_Room() {
    NOTIFY_DESTRUCTOR(~Smart_Room, true);
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
            NOTIFY_RELATION_CLEARED("itsBooking_System");
            Smart_Room* p_Smart_Room = itsBooking_System->getItsSmart_Room();
            if(p_Smart_Room != NULL)
                {
                    itsBooking_System->__setItsSmart_Room(NULL);
                }
            itsBooking_System = NULL;
        }
    if(itsHVAC != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsHVAC");
            Smart_Room* p_Smart_Room = itsHVAC->getItsSmart_Room();
            if(p_Smart_Room != NULL)
                {
                    itsHVAC->__setItsSmart_Room(NULL);
                }
            itsHVAC = NULL;
        }
    if(itsNetwork != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsNetwork");
            Smart_Room* p_Smart_Room = itsNetwork->getItsSmart_Room();
            if(p_Smart_Room != NULL)
                {
                    itsNetwork->__setItsSmart_Room(NULL);
                }
            itsNetwork = NULL;
        }
    if(itsWeather_Forecast != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsWeather_Forecast");
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
    if(p_Booking_System != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsBooking_System", p_Booking_System, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsBooking_System");
        }
}

void Smart_Room::_setItsBooking_System(Booking_System* p_Booking_System) {
    if(itsBooking_System != NULL)
        {
            itsBooking_System->__setItsSmart_Room(NULL);
        }
    __setItsBooking_System(p_Booking_System);
}

void Smart_Room::_clearItsBooking_System() {
    NOTIFY_RELATION_CLEARED("itsBooking_System");
    itsBooking_System = NULL;
}

void Smart_Room::__setItsHVAC(HVAC* p_HVAC) {
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

void Smart_Room::_setItsHVAC(HVAC* p_HVAC) {
    if(itsHVAC != NULL)
        {
            itsHVAC->__setItsSmart_Room(NULL);
        }
    __setItsHVAC(p_HVAC);
}

void Smart_Room::_clearItsHVAC() {
    NOTIFY_RELATION_CLEARED("itsHVAC");
    itsHVAC = NULL;
}

void Smart_Room::__setItsNetwork(Network* p_Network) {
    itsNetwork = p_Network;
    if(p_Network != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsNetwork", p_Network, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsNetwork");
        }
}

void Smart_Room::_setItsNetwork(Network* p_Network) {
    if(itsNetwork != NULL)
        {
            itsNetwork->__setItsSmart_Room(NULL);
        }
    __setItsNetwork(p_Network);
}

void Smart_Room::_clearItsNetwork() {
    NOTIFY_RELATION_CLEARED("itsNetwork");
    itsNetwork = NULL;
}

void Smart_Room::__setItsWeather_Forecast(Weather_Forecast* p_Weather_Forecast) {
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

void Smart_Room::_setItsWeather_Forecast(Weather_Forecast* p_Weather_Forecast) {
    if(itsWeather_Forecast != NULL)
        {
            itsWeather_Forecast->__setItsSmart_Room(NULL);
        }
    __setItsWeather_Forecast(p_Weather_Forecast);
}

void Smart_Room::_clearItsWeather_Forecast() {
    NOTIFY_RELATION_CLEARED("itsWeather_Forecast");
    itsWeather_Forecast = NULL;
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedSmart_Room::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsSpeakers", true, true);
    aomsRelations->ADD_ITEM(&myReal->itsSpeakers);
    aomsRelations->addRelation("itsSmart_Screen", true, true);
    aomsRelations->ADD_ITEM(&myReal->itsSmart_Screen);
    aomsRelations->addRelation("itsDoor_Touch_Panel", true, true);
    aomsRelations->ADD_ITEM(&myReal->itsDoor_Touch_Panel);
    aomsRelations->addRelation("itsRoom_Touch_Panel", true, true);
    aomsRelations->ADD_ITEM(&myReal->itsRoom_Touch_Panel);
    aomsRelations->addRelation("itsWebcam", true, true);
    aomsRelations->ADD_ITEM(&myReal->itsWebcam);
    aomsRelations->addRelation("itsMicrophones", true, true);
    aomsRelations->ADD_ITEM(&myReal->itsMicrophones);
    aomsRelations->addRelation("itsLights", true, true);
    aomsRelations->ADD_ITEM(&myReal->itsLights);
    aomsRelations->addRelation("itsNetwork", false, true);
    if(myReal->itsNetwork)
        {
            aomsRelations->ADD_ITEM(myReal->itsNetwork);
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
    aomsRelations->addRelation("itsFire_Sensor", true, true);
    aomsRelations->ADD_ITEM(&myReal->itsFire_Sensor);
    aomsRelations->addRelation("itsMovement_Sensor", true, true);
    aomsRelations->ADD_ITEM(&myReal->itsMovement_Sensor);
    aomsRelations->addRelation("itsOccupancy_Sensor", true, true);
    aomsRelations->ADD_ITEM(&myReal->itsOccupancy_Sensor);
    aomsRelations->addRelation("itsCO2_Sensor", true, true);
    aomsRelations->ADD_ITEM(&myReal->itsCO2_Sensor);
}
//#]

IMPLEMENT_META_P(Smart_Room, ArchitecturalAnalysisPkg, ArchitecturalAnalysisPkg, false, OMAnimatedSmart_Room)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\Network_Simulation\Smart_Room.cpp
*********************************************************************/
