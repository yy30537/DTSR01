/********************************************************************
	Rhapsody	: 9.0 
	Login		: Yang
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Fire_Sensor
//!	Generated Date	: Wed, 21, Jun 2023  
	File Path	: DefaultComponent\DefaultConfig\Fire_Sensor.cpp
*********************************************************************/

//## auto_generated
#include "Fire_Sensor.h"
//## link itsNetwork
#include "Network.h"
//## package ArchitecturalAnalysisPkg

//## class Fire_Sensor
Fire_Sensor::Fire_Sensor() {
    itsNetwork = NULL;
}

Fire_Sensor::~Fire_Sensor() {
    cleanUpRelations();
}

bool Fire_Sensor::getIsFire() const {
    return isFire;
}

void Fire_Sensor::setIsFire(bool p_isFire) {
    isFire = p_isFire;
}

Network* Fire_Sensor::getItsNetwork() const {
    return itsNetwork;
}

void Fire_Sensor::setItsNetwork(Network* p_Network) {
    if(p_Network != NULL)
        {
            p_Network->_setItsFire_Sensor(this);
        }
    _setItsNetwork(p_Network);
}

void Fire_Sensor::cleanUpRelations() {
    if(itsNetwork != NULL)
        {
            Fire_Sensor* p_Fire_Sensor = itsNetwork->getItsFire_Sensor();
            if(p_Fire_Sensor != NULL)
                {
                    itsNetwork->__setItsFire_Sensor(NULL);
                }
            itsNetwork = NULL;
        }
}

void Fire_Sensor::__setItsNetwork(Network* p_Network) {
    itsNetwork = p_Network;
}

void Fire_Sensor::_setItsNetwork(Network* p_Network) {
    if(itsNetwork != NULL)
        {
            itsNetwork->__setItsFire_Sensor(NULL);
        }
    __setItsNetwork(p_Network);
}

void Fire_Sensor::_clearItsNetwork() {
    itsNetwork = NULL;
}

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Fire_Sensor.cpp
*********************************************************************/
