/********************************************************************
	Rhapsody	: 9.0 
	Login		: Administrator
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Occupancy_Sensor
//!	Generated Date	: Thu, 22, Jun 2023  
	File Path	: DefaultComponent\DefaultConfig\Occupancy_Sensor.cpp
*********************************************************************/

//## auto_generated
#include "Occupancy_Sensor.h"
//## link itsHVAC
#include "HVAC.h"
//## link itsNetwork
#include "Network.h"
//## package ArchitecturalAnalysisPkg

//## class Occupancy_Sensor
Occupancy_Sensor::Occupancy_Sensor() {
    itsHVAC = NULL;
    itsNetwork = NULL;
}

Occupancy_Sensor::~Occupancy_Sensor() {
    cleanUpRelations();
}

bool Occupancy_Sensor::getDetectOccupantLeaves() const {
    return detectOccupantLeaves;
}

void Occupancy_Sensor::setDetectOccupantLeaves(bool p_detectOccupantLeaves) {
    detectOccupantLeaves = p_detectOccupantLeaves;
}

bool Occupancy_Sensor::getNewOccupantsDetected() const {
    return newOccupantsDetected;
}

void Occupancy_Sensor::setNewOccupantsDetected(bool p_newOccupantsDetected) {
    newOccupantsDetected = p_newOccupantsDetected;
}

HVAC* Occupancy_Sensor::getItsHVAC() const {
    return itsHVAC;
}

void Occupancy_Sensor::setItsHVAC(HVAC* p_HVAC) {
    if(p_HVAC != NULL)
        {
            p_HVAC->_setItsOccupancy_Sensor(this);
        }
    _setItsHVAC(p_HVAC);
}

Network* Occupancy_Sensor::getItsNetwork() const {
    return itsNetwork;
}

void Occupancy_Sensor::setItsNetwork(Network* p_Network) {
    if(p_Network != NULL)
        {
            p_Network->_setItsOccupancy_Sensor(this);
        }
    _setItsNetwork(p_Network);
}

void Occupancy_Sensor::cleanUpRelations() {
    if(itsHVAC != NULL)
        {
            Occupancy_Sensor* p_Occupancy_Sensor = itsHVAC->getItsOccupancy_Sensor();
            if(p_Occupancy_Sensor != NULL)
                {
                    itsHVAC->__setItsOccupancy_Sensor(NULL);
                }
            itsHVAC = NULL;
        }
    if(itsNetwork != NULL)
        {
            Occupancy_Sensor* p_Occupancy_Sensor = itsNetwork->getItsOccupancy_Sensor();
            if(p_Occupancy_Sensor != NULL)
                {
                    itsNetwork->__setItsOccupancy_Sensor(NULL);
                }
            itsNetwork = NULL;
        }
}

void Occupancy_Sensor::__setItsHVAC(HVAC* p_HVAC) {
    itsHVAC = p_HVAC;
}

void Occupancy_Sensor::_setItsHVAC(HVAC* p_HVAC) {
    if(itsHVAC != NULL)
        {
            itsHVAC->__setItsOccupancy_Sensor(NULL);
        }
    __setItsHVAC(p_HVAC);
}

void Occupancy_Sensor::_clearItsHVAC() {
    itsHVAC = NULL;
}

void Occupancy_Sensor::__setItsNetwork(Network* p_Network) {
    itsNetwork = p_Network;
}

void Occupancy_Sensor::_setItsNetwork(Network* p_Network) {
    if(itsNetwork != NULL)
        {
            itsNetwork->__setItsOccupancy_Sensor(NULL);
        }
    __setItsNetwork(p_Network);
}

void Occupancy_Sensor::_clearItsNetwork() {
    itsNetwork = NULL;
}

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Occupancy_Sensor.cpp
*********************************************************************/
