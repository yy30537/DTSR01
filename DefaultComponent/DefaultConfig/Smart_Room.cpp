/********************************************************************
	Rhapsody	: 9.0 
	Login		: Administrator
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Smart_Room
//!	Generated Date	: Thu, 22, Jun 2023  
	File Path	: DefaultComponent\DefaultConfig\Smart_Room.cpp
*********************************************************************/

//## auto_generated
#include "Smart_Room.h"
//## link itsNetwork
#include "Network.h"
//## package ArchitecturalAnalysisPkg

//## class Smart_Room
Smart_Room::Smart_Room() {
    itsNetwork = NULL;
}

Smart_Room::~Smart_Room() {
    cleanUpRelations();
}

Network* Smart_Room::getItsNetwork() const {
    return itsNetwork;
}

void Smart_Room::setItsNetwork(Network* p_Network) {
    if(p_Network != NULL)
        {
            p_Network->_setItsSmart_Room(this);
        }
    _setItsNetwork(p_Network);
}

void Smart_Room::cleanUpRelations() {
    if(itsNetwork != NULL)
        {
            Smart_Room* p_Smart_Room = itsNetwork->getItsSmart_Room();
            if(p_Smart_Room != NULL)
                {
                    itsNetwork->__setItsSmart_Room(NULL);
                }
            itsNetwork = NULL;
        }
}

void Smart_Room::__setItsNetwork(Network* p_Network) {
    itsNetwork = p_Network;
}

void Smart_Room::_setItsNetwork(Network* p_Network) {
    if(itsNetwork != NULL)
        {
            itsNetwork->__setItsSmart_Room(NULL);
        }
    __setItsNetwork(p_Network);
}

void Smart_Room::_clearItsNetwork() {
    itsNetwork = NULL;
}

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Smart_Room.cpp
*********************************************************************/
