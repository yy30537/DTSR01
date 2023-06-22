/********************************************************************
	Rhapsody	: 9.0 
	Login		: Administrator
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Lights
//!	Generated Date	: Thu, 22, Jun 2023  
	File Path	: DefaultComponent\DefaultConfig\Lights.cpp
*********************************************************************/

//## auto_generated
#include "Lights.h"
//## link itsNetwork
#include "Network.h"
//## package ArchitecturalAnalysisPkg

//## class Lights
Lights::Lights() : intensity(0) {
    itsNetwork = NULL;
}

Lights::~Lights() {
    cleanUpRelations();
}

int Lights::getIntensity() const {
    return intensity;
}

void Lights::setIntensity(int p_intensity) {
    intensity = p_intensity;
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
