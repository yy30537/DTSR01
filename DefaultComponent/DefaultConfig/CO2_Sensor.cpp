/********************************************************************
	Rhapsody	: 9.0 
	Login		: Administrator
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: CO2_Sensor
//!	Generated Date	: Thu, 22, Jun 2023  
	File Path	: DefaultComponent\DefaultConfig\CO2_Sensor.cpp
*********************************************************************/

//## auto_generated
#include "CO2_Sensor.h"
//## link itsHVAC
#include "HVAC.h"
//## link itsNetwork
#include "Network.h"
//## package ArchitecturalAnalysisPkg

//## class CO2_Sensor
CO2_Sensor::CO2_Sensor() {
    itsHVAC = NULL;
    itsNetwork = NULL;
}

CO2_Sensor::~CO2_Sensor() {
    cleanUpRelations();
}

int CO2_Sensor::getCO2Level() const {
    return CO2Level;
}

void CO2_Sensor::setCO2Level(int p_CO2Level) {
    CO2Level = p_CO2Level;
}

HVAC* CO2_Sensor::getItsHVAC() const {
    return itsHVAC;
}

void CO2_Sensor::setItsHVAC(HVAC* p_HVAC) {
    if(p_HVAC != NULL)
        {
            p_HVAC->_setItsCO2_Sensor(this);
        }
    _setItsHVAC(p_HVAC);
}

Network* CO2_Sensor::getItsNetwork() const {
    return itsNetwork;
}

void CO2_Sensor::setItsNetwork(Network* p_Network) {
    itsNetwork = p_Network;
}

void CO2_Sensor::cleanUpRelations() {
    if(itsHVAC != NULL)
        {
            CO2_Sensor* p_CO2_Sensor = itsHVAC->getItsCO2_Sensor();
            if(p_CO2_Sensor != NULL)
                {
                    itsHVAC->__setItsCO2_Sensor(NULL);
                }
            itsHVAC = NULL;
        }
    if(itsNetwork != NULL)
        {
            itsNetwork = NULL;
        }
}

void CO2_Sensor::__setItsHVAC(HVAC* p_HVAC) {
    itsHVAC = p_HVAC;
}

void CO2_Sensor::_setItsHVAC(HVAC* p_HVAC) {
    if(itsHVAC != NULL)
        {
            itsHVAC->__setItsCO2_Sensor(NULL);
        }
    __setItsHVAC(p_HVAC);
}

void CO2_Sensor::_clearItsHVAC() {
    itsHVAC = NULL;
}

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\CO2_Sensor.cpp
*********************************************************************/
