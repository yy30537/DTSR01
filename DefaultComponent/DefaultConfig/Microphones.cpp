/********************************************************************
	Rhapsody	: 9.0 
	Login		: Administrator
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Microphones
//!	Generated Date	: Thu, 22, Jun 2023  
	File Path	: DefaultComponent\DefaultConfig\Microphones.cpp
*********************************************************************/

//## auto_generated
#include "Microphones.h"
//## link itsNetwork
#include "Network.h"
//## package ArchitecturalAnalysisPkg

//## class Microphones
Microphones::Microphones() : isOn(0), volume(0) {
    itsNetwork = NULL;
}

Microphones::~Microphones() {
    cleanUpRelations();
}

bool Microphones::getIsOn() const {
    return isOn;
}

void Microphones::setIsOn(bool p_isOn) {
    isOn = p_isOn;
}

int Microphones::getVolume() const {
    return volume;
}

void Microphones::setVolume(int p_volume) {
    volume = p_volume;
}

Network* Microphones::getItsNetwork() const {
    return itsNetwork;
}

void Microphones::setItsNetwork(Network* p_Network) {
    if(p_Network != NULL)
        {
            p_Network->_setItsMicrophones(this);
        }
    _setItsNetwork(p_Network);
}

void Microphones::cleanUpRelations() {
    if(itsNetwork != NULL)
        {
            Microphones* p_Microphones = itsNetwork->getItsMicrophones();
            if(p_Microphones != NULL)
                {
                    itsNetwork->__setItsMicrophones(NULL);
                }
            itsNetwork = NULL;
        }
}

void Microphones::__setItsNetwork(Network* p_Network) {
    itsNetwork = p_Network;
}

void Microphones::_setItsNetwork(Network* p_Network) {
    if(itsNetwork != NULL)
        {
            itsNetwork->__setItsMicrophones(NULL);
        }
    __setItsNetwork(p_Network);
}

void Microphones::_clearItsNetwork() {
    itsNetwork = NULL;
}

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Microphones.cpp
*********************************************************************/
