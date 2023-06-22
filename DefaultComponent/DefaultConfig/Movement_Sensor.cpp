/********************************************************************
	Rhapsody	: 9.0 
	Login		: Administrator
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Movement_Sensor
//!	Generated Date	: Thu, 22, Jun 2023  
	File Path	: DefaultComponent\DefaultConfig\Movement_Sensor.cpp
*********************************************************************/

//## auto_generated
#include "Movement_Sensor.h"
//## link itsHVAC
#include "HVAC.h"
//## link itsNetwork
#include "Network.h"
//## package ArchitecturalAnalysisPkg

//## class Movement_Sensor
Movement_Sensor::Movement_Sensor() : isMovement(0) {
    itsHVAC = NULL;
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

HVAC* Movement_Sensor::getItsHVAC() const {
    return itsHVAC;
}

void Movement_Sensor::setItsHVAC(HVAC* p_HVAC) {
    if(p_HVAC != NULL)
        {
            p_HVAC->_setItsMovement_Sensor(this);
        }
    _setItsHVAC(p_HVAC);
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
    if(itsHVAC != NULL)
        {
            Movement_Sensor* p_Movement_Sensor = itsHVAC->getItsMovement_Sensor();
            if(p_Movement_Sensor != NULL)
                {
                    itsHVAC->__setItsMovement_Sensor(NULL);
                }
            itsHVAC = NULL;
        }
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

void Movement_Sensor::__setItsHVAC(HVAC* p_HVAC) {
    itsHVAC = p_HVAC;
}

void Movement_Sensor::_setItsHVAC(HVAC* p_HVAC) {
    if(itsHVAC != NULL)
        {
            itsHVAC->__setItsMovement_Sensor(NULL);
        }
    __setItsHVAC(p_HVAC);
}

void Movement_Sensor::_clearItsHVAC() {
    itsHVAC = NULL;
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
