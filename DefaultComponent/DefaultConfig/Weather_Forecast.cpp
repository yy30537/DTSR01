/********************************************************************
	Rhapsody	: 9.0 
	Login		: Yang
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Weather_Forecast
//!	Generated Date	: Tue, 20, Jun 2023  
	File Path	: DefaultComponent\DefaultConfig\Weather_Forecast.cpp
*********************************************************************/

//## auto_generated
#include "Weather_Forecast.h"
//## link itsNetwork
#include "Network.h"
//## link itsSmart_Room
#include "Smart_Room.h"
//## package ArchitecturalAnalysisPkg

//## class Weather_Forecast
Weather_Forecast::Weather_Forecast() {
    itsNetwork = NULL;
    itsSmart_Room = NULL;
}

Weather_Forecast::~Weather_Forecast() {
    cleanUpRelations();
}

Network* Weather_Forecast::getItsNetwork() const {
    return itsNetwork;
}

void Weather_Forecast::setItsNetwork(Network* p_Network) {
    if(p_Network != NULL)
        {
            p_Network->_setItsWeather_Forecast(this);
        }
    _setItsNetwork(p_Network);
}

Smart_Room* Weather_Forecast::getItsSmart_Room() const {
    return itsSmart_Room;
}

void Weather_Forecast::setItsSmart_Room(Smart_Room* p_Smart_Room) {
    if(p_Smart_Room != NULL)
        {
            p_Smart_Room->_setItsWeather_Forecast(this);
        }
    _setItsSmart_Room(p_Smart_Room);
}

void Weather_Forecast::cleanUpRelations() {
    if(itsNetwork != NULL)
        {
            Weather_Forecast* p_Weather_Forecast = itsNetwork->getItsWeather_Forecast();
            if(p_Weather_Forecast != NULL)
                {
                    itsNetwork->__setItsWeather_Forecast(NULL);
                }
            itsNetwork = NULL;
        }
    if(itsSmart_Room != NULL)
        {
            Weather_Forecast* p_Weather_Forecast = itsSmart_Room->getItsWeather_Forecast();
            if(p_Weather_Forecast != NULL)
                {
                    itsSmart_Room->__setItsWeather_Forecast(NULL);
                }
            itsSmart_Room = NULL;
        }
}

void Weather_Forecast::__setItsNetwork(Network* p_Network) {
    itsNetwork = p_Network;
}

void Weather_Forecast::_setItsNetwork(Network* p_Network) {
    if(itsNetwork != NULL)
        {
            itsNetwork->__setItsWeather_Forecast(NULL);
        }
    __setItsNetwork(p_Network);
}

void Weather_Forecast::_clearItsNetwork() {
    itsNetwork = NULL;
}

void Weather_Forecast::__setItsSmart_Room(Smart_Room* p_Smart_Room) {
    itsSmart_Room = p_Smart_Room;
}

void Weather_Forecast::_setItsSmart_Room(Smart_Room* p_Smart_Room) {
    if(itsSmart_Room != NULL)
        {
            itsSmart_Room->__setItsWeather_Forecast(NULL);
        }
    __setItsSmart_Room(p_Smart_Room);
}

void Weather_Forecast::_clearItsSmart_Room() {
    itsSmart_Room = NULL;
}

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Weather_Forecast.cpp
*********************************************************************/
