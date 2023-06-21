/********************************************************************
	Rhapsody	: 9.0 
	Login		: Yang
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Movement_Sensor
//!	Generated Date	: Wed, 21, Jun 2023  
	File Path	: DefaultComponent\DefaultConfig\Movement_Sensor.cpp
*********************************************************************/

//## auto_generated
#include "Movement_Sensor.h"
//## link itsNetwork
#include "Network.h"
//## package ArchitecturalAnalysisPkg

//## class Movement_Sensor
Movement_Sensor::Movement_Sensor() : isMovement(0) {
    itsNetwork = NULL;
}

Movement_Sensor::~Movement_Sensor() {
    cleanUpRelations();
}

bool Movement_Sensor::getIsMovement() const {
    return isMovement;
}

void Movement_Sensor::setIsMovement(bool p_isMovement) {
    isMovement = p_isMovement;
}

Network* Movement_Sensor::getItsNetwork() const {
    return itsNetwork;
}

void Movement_Sensor::setItsNetwork(Network* p_Network) {
    if(p_Network != NULL)
        {
            p_Network->_setItsMovement_Sensor(this);
        }
    _setItsNetwork(p_Network);
}

void Movement_Sensor::cleanUpRelations() {
    if(itsNetwork != NULL)
        {
            Movement_Sensor* p_Movement_Sensor = itsNetwork->getItsMovement_Sensor();
            if(p_Movement_Sensor != NULL)
                {
                    itsNetwork->__setItsMovement_Sensor(NULL);
                }
            itsNetwork = NULL;
        }
}

void Movement_Sensor::__setItsNetwork(Network* p_Network) {
    itsNetwork = p_Network;
}

void Movement_Sensor::_setItsNetwork(Network* p_Network) {
    if(itsNetwork != NULL)
        {
            itsNetwork->__setItsMovement_Sensor(NULL);
        }
    __setItsNetwork(p_Network);
}

void Movement_Sensor::_clearItsNetwork() {
    itsNetwork = NULL;
}

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Movement_Sensor.cpp
*********************************************************************/
