/********************************************************************
	Rhapsody	: 9.0 
	Login		: Yang
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Door_Touch_Panel
//!	Generated Date	: Tue, 20, Jun 2023  
	File Path	: DefaultComponent\DefaultConfig\Door_Touch_Panel.cpp
*********************************************************************/

//## auto_generated
#include "Door_Touch_Panel.h"
//## link itsNetwork
#include "Network.h"
//## package ArchitecturalAnalysisPkg

//## class Door_Touch_Panel
Door_Touch_Panel::Door_Touch_Panel() {
    itsNetwork = NULL;
}

Door_Touch_Panel::~Door_Touch_Panel() {
    cleanUpRelations();
}

Network* Door_Touch_Panel::getItsNetwork() const {
    return itsNetwork;
}

void Door_Touch_Panel::setItsNetwork(Network* p_Network) {
    if(p_Network != NULL)
        {
            p_Network->_setItsDoor_Touch_Panel(this);
        }
    _setItsNetwork(p_Network);
}

void Door_Touch_Panel::cleanUpRelations() {
    if(itsNetwork != NULL)
        {
            Door_Touch_Panel* p_Door_Touch_Panel = itsNetwork->getItsDoor_Touch_Panel();
            if(p_Door_Touch_Panel != NULL)
                {
                    itsNetwork->__setItsDoor_Touch_Panel(NULL);
                }
            itsNetwork = NULL;
        }
}

void Door_Touch_Panel::__setItsNetwork(Network* p_Network) {
    itsNetwork = p_Network;
}

void Door_Touch_Panel::_setItsNetwork(Network* p_Network) {
    if(itsNetwork != NULL)
        {
            itsNetwork->__setItsDoor_Touch_Panel(NULL);
        }
    __setItsNetwork(p_Network);
}

void Door_Touch_Panel::_clearItsNetwork() {
    itsNetwork = NULL;
}

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Door_Touch_Panel.cpp
*********************************************************************/
