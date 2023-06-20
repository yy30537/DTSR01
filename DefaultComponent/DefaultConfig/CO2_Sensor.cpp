/********************************************************************
	Rhapsody	: 9.0 
	Login		: Yang
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: CO2_Sensor
//!	Generated Date	: Tue, 20, Jun 2023  
	File Path	: DefaultComponent\DefaultConfig\CO2_Sensor.cpp
*********************************************************************/

//## auto_generated
#include "CO2_Sensor.h"
//## link itsNetwork
#include "Network.h"
//## package ArchitecturalAnalysisPkg

//## class CO2_Sensor
CO2_Sensor::CO2_Sensor() {
    itsNetwork = NULL;
}

CO2_Sensor::~CO2_Sensor() {
    cleanUpRelations();
}

Network* CO2_Sensor::getItsNetwork() const {
    return itsNetwork;
}

void CO2_Sensor::setItsNetwork(Network* p_Network) {
    if(p_Network != NULL)
        {
            p_Network->_setItsCO2_Sensor(this);
        }
    _setItsNetwork(p_Network);
}

void CO2_Sensor::cleanUpRelations() {
    if(itsNetwork != NULL)
        {
            CO2_Sensor* p_CO2_Sensor = itsNetwork->getItsCO2_Sensor();
            if(p_CO2_Sensor != NULL)
                {
                    itsNetwork->__setItsCO2_Sensor(NULL);
                }
            itsNetwork = NULL;
        }
}

void CO2_Sensor::__setItsNetwork(Network* p_Network) {
    itsNetwork = p_Network;
}

void CO2_Sensor::_setItsNetwork(Network* p_Network) {
    if(itsNetwork != NULL)
        {
            itsNetwork->__setItsCO2_Sensor(NULL);
        }
    __setItsNetwork(p_Network);
}

void CO2_Sensor::_clearItsNetwork() {
    itsNetwork = NULL;
}

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\CO2_Sensor.cpp
*********************************************************************/
