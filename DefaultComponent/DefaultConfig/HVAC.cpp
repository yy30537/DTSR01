/********************************************************************
	Rhapsody	: 9.0 
	Login		: Yang
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: HVAC
//!	Generated Date	: Tue, 20, Jun 2023  
	File Path	: DefaultComponent\DefaultConfig\HVAC.cpp
*********************************************************************/

//## auto_generated
#include "HVAC.h"
//## link itsNetwork
#include "Network.h"
//## link itsSmart_Room
#include "Smart_Room.h"
//## package ArchitecturalAnalysisPkg

//## class HVAC
HVAC::HVAC() {
    itsNetwork = NULL;
    itsSmart_Room = NULL;
}

HVAC::~HVAC() {
    cleanUpRelations();
}

Network* HVAC::getItsNetwork() const {
    return itsNetwork;
}

void HVAC::setItsNetwork(Network* p_Network) {
    if(p_Network != NULL)
        {
            p_Network->_setItsHVAC(this);
        }
    _setItsNetwork(p_Network);
}

Smart_Room* HVAC::getItsSmart_Room() const {
    return itsSmart_Room;
}

void HVAC::setItsSmart_Room(Smart_Room* p_Smart_Room) {
    if(p_Smart_Room != NULL)
        {
            p_Smart_Room->_setItsHVAC(this);
        }
    _setItsSmart_Room(p_Smart_Room);
}

void HVAC::cleanUpRelations() {
    if(itsNetwork != NULL)
        {
            HVAC* p_HVAC = itsNetwork->getItsHVAC();
            if(p_HVAC != NULL)
                {
                    itsNetwork->__setItsHVAC(NULL);
                }
            itsNetwork = NULL;
        }
    if(itsSmart_Room != NULL)
        {
            HVAC* p_HVAC = itsSmart_Room->getItsHVAC();
            if(p_HVAC != NULL)
                {
                    itsSmart_Room->__setItsHVAC(NULL);
                }
            itsSmart_Room = NULL;
        }
}

void HVAC::__setItsNetwork(Network* p_Network) {
    itsNetwork = p_Network;
}

void HVAC::_setItsNetwork(Network* p_Network) {
    if(itsNetwork != NULL)
        {
            itsNetwork->__setItsHVAC(NULL);
        }
    __setItsNetwork(p_Network);
}

void HVAC::_clearItsNetwork() {
    itsNetwork = NULL;
}

void HVAC::__setItsSmart_Room(Smart_Room* p_Smart_Room) {
    itsSmart_Room = p_Smart_Room;
}

void HVAC::_setItsSmart_Room(Smart_Room* p_Smart_Room) {
    if(itsSmart_Room != NULL)
        {
            itsSmart_Room->__setItsHVAC(NULL);
        }
    __setItsSmart_Room(p_Smart_Room);
}

void HVAC::_clearItsSmart_Room() {
    itsSmart_Room = NULL;
}

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\HVAC.cpp
*********************************************************************/
