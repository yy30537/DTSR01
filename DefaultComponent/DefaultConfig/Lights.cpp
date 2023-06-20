/********************************************************************
	Rhapsody	: 9.0 
	Login		: Yang
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Lights
//!	Generated Date	: Tue, 20, Jun 2023  
	File Path	: DefaultComponent\DefaultConfig\Lights.cpp
*********************************************************************/

//## auto_generated
#include "Lights.h"
//## link itsNetwork
#include "Network.h"
//## package ArchitecturalAnalysisPkg

//## class Lights
Lights::Lights() {
    itsNetwork = NULL;
}

Lights::~Lights() {
    cleanUpRelations();
}

Network* Lights::getItsNetwork() const {
    return itsNetwork;
}

void Lights::setItsNetwork(Network* p_Network) {
    if(p_Network != NULL)
        {
            p_Network->_setItsLights(this);
        }
    _setItsNetwork(p_Network);
}

void Lights::cleanUpRelations() {
    if(itsNetwork != NULL)
        {
            Lights* p_Lights = itsNetwork->getItsLights();
            if(p_Lights != NULL)
                {
                    itsNetwork->__setItsLights(NULL);
                }
            itsNetwork = NULL;
        }
}

void Lights::__setItsNetwork(Network* p_Network) {
    itsNetwork = p_Network;
}

void Lights::_setItsNetwork(Network* p_Network) {
    if(itsNetwork != NULL)
        {
            itsNetwork->__setItsLights(NULL);
        }
    __setItsNetwork(p_Network);
}

void Lights::_clearItsNetwork() {
    itsNetwork = NULL;
}

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Lights.cpp
*********************************************************************/
