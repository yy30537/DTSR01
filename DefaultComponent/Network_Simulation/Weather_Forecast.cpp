/********************************************************************
	Rhapsody	: 9.0 
	Login		: Yang
	Component	: DefaultComponent 
	Configuration 	: Network_Simulation
	Model Element	: Weather_Forecast
//!	Generated Date	: Wed, 21, Jun 2023  
	File Path	: DefaultComponent\Network_Simulation\Weather_Forecast.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "Weather_Forecast.h"
//## link itsNetwork
#include "Network.h"
//## link itsSmart_Room
#include "Smart_Room.h"
//#[ ignore
#define ArchitecturalAnalysisPkg_Weather_Forecast_Weather_Forecast_SERIALIZE OM_NO_OP
//#]

//## package ArchitecturalAnalysisPkg

//## class Weather_Forecast
Weather_Forecast::Weather_Forecast() {
    NOTIFY_CONSTRUCTOR(Weather_Forecast, Weather_Forecast(), 0, ArchitecturalAnalysisPkg_Weather_Forecast_Weather_Forecast_SERIALIZE);
    itsNetwork = NULL;
    itsSmart_Room = NULL;
}

Weather_Forecast::~Weather_Forecast() {
    NOTIFY_DESTRUCTOR(~Weather_Forecast, true);
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
            NOTIFY_RELATION_CLEARED("itsNetwork");
            Weather_Forecast* p_Weather_Forecast = itsNetwork->getItsWeather_Forecast();
            if(p_Weather_Forecast != NULL)
                {
                    itsNetwork->__setItsWeather_Forecast(NULL);
                }
            itsNetwork = NULL;
        }
    if(itsSmart_Room != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsSmart_Room");
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
    if(p_Network != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsNetwork", p_Network, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsNetwork");
        }
}

void Weather_Forecast::_setItsNetwork(Network* p_Network) {
    if(itsNetwork != NULL)
        {
            itsNetwork->__setItsWeather_Forecast(NULL);
        }
    __setItsNetwork(p_Network);
}

void Weather_Forecast::_clearItsNetwork() {
    NOTIFY_RELATION_CLEARED("itsNetwork");
    itsNetwork = NULL;
}

void Weather_Forecast::__setItsSmart_Room(Smart_Room* p_Smart_Room) {
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

void Weather_Forecast::_setItsSmart_Room(Smart_Room* p_Smart_Room) {
    if(itsSmart_Room != NULL)
        {
            itsSmart_Room->__setItsWeather_Forecast(NULL);
        }
    __setItsSmart_Room(p_Smart_Room);
}

void Weather_Forecast::_clearItsSmart_Room() {
    NOTIFY_RELATION_CLEARED("itsSmart_Room");
    itsSmart_Room = NULL;
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedWeather_Forecast::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsSmart_Room", false, true);
    if(myReal->itsSmart_Room)
        {
            aomsRelations->ADD_ITEM(myReal->itsSmart_Room);
        }
    aomsRelations->addRelation("itsNetwork", false, true);
    if(myReal->itsNetwork)
        {
            aomsRelations->ADD_ITEM(myReal->itsNetwork);
        }
}
//#]

IMPLEMENT_META_P(Weather_Forecast, ArchitecturalAnalysisPkg, ArchitecturalAnalysisPkg, false, OMAnimatedWeather_Forecast)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\Network_Simulation\Weather_Forecast.cpp
*********************************************************************/
