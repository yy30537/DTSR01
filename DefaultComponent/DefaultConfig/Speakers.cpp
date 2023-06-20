/********************************************************************
	Rhapsody	: 9.0 
	Login		: Yang
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Speakers
//!	Generated Date	: Tue, 20, Jun 2023  
	File Path	: DefaultComponent\DefaultConfig\Speakers.cpp
*********************************************************************/

//## auto_generated
#include "Speakers.h"
//## link itsNetwork
#include "Network.h"
//## package ArchitecturalAnalysisPkg

//## class Speakers
Speakers::Speakers() {
    itsNetwork = NULL;
}

Speakers::~Speakers() {
    cleanUpRelations();
}

Network* Speakers::getItsNetwork() const {
    return itsNetwork;
}

void Speakers::setItsNetwork(Network* p_Network) {
    if(p_Network != NULL)
        {
            p_Network->_setItsSpeakers(this);
        }
    _setItsNetwork(p_Network);
}

void Speakers::cleanUpRelations() {
    if(itsNetwork != NULL)
        {
            Speakers* p_Speakers = itsNetwork->getItsSpeakers();
            if(p_Speakers != NULL)
                {
                    itsNetwork->__setItsSpeakers(NULL);
                }
            itsNetwork = NULL;
        }
}

void Speakers::__setItsNetwork(Network* p_Network) {
    itsNetwork = p_Network;
}

void Speakers::_setItsNetwork(Network* p_Network) {
    if(itsNetwork != NULL)
        {
            itsNetwork->__setItsSpeakers(NULL);
        }
    __setItsNetwork(p_Network);
}

void Speakers::_clearItsNetwork() {
    itsNetwork = NULL;
}

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Speakers.cpp
*********************************************************************/
