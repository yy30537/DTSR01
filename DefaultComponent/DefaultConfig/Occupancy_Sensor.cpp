/********************************************************************
	Rhapsody	: 9.0 
	Login		: Yang
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Occupancy_Sensor
//!	Generated Date	: Wed, 21, Jun 2023  
	File Path	: DefaultComponent\DefaultConfig\Occupancy_Sensor.cpp
*********************************************************************/

//## auto_generated
#include "Occupancy_Sensor.h"
//## link itsNetwork
#include "Network.h"
//## package ArchitecturalAnalysisPkg

//## class Occupancy_Sensor
Occupancy_Sensor::Occupancy_Sensor() : numOccupants(0) {
    itsNetwork = NULL;
}

Occupancy_Sensor::~Occupancy_Sensor() {
    cleanUpRelations();
}

int Occupancy_Sensor::getNumOccupants() const {
    return numOccupants;
}

void Occupancy_Sensor::setNumOccupants(int p_numOccupants) {
    numOccupants = p_numOccupants;
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
