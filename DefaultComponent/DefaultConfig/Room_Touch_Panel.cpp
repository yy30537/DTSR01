/********************************************************************
	Rhapsody	: 9.0 
	Login		: Yang
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Room_Touch_Panel
//!	Generated Date	: Tue, 20, Jun 2023  
	File Path	: DefaultComponent\DefaultConfig\Room_Touch_Panel.cpp
*********************************************************************/

//## auto_generated
#include "Room_Touch_Panel.h"
//## link itsNetwork
#include "Network.h"
//## package ArchitecturalAnalysisPkg

//## class Room_Touch_Panel
Room_Touch_Panel::Room_Touch_Panel() {
    itsNetwork = NULL;
}

Room_Touch_Panel::~Room_Touch_Panel() {
    cleanUpRelations();
}

Network* Room_Touch_Panel::getItsNetwork() const {
    return itsNetwork;
}

void Room_Touch_Panel::setItsNetwork(Network* p_Network) {
    if(p_Network != NULL)
        {
            p_Network->_setItsRoom_Touch_Panel(this);
        }
    _setItsNetwork(p_Network);
}

void Room_Touch_Panel::cleanUpRelations() {
    if(itsNetwork != NULL)
        {
            Room_Touch_Panel* p_Room_Touch_Panel = itsNetwork->getItsRoom_Touch_Panel();
            if(p_Room_Touch_Panel != NULL)
                {
                    itsNetwork->__setItsRoom_Touch_Panel(NULL);
                }
            itsNetwork = NULL;
        }
}

void Room_Touch_Panel::__setItsNetwork(Network* p_Network) {
    itsNetwork = p_Network;
}

void Room_Touch_Panel::_setItsNetwork(Network* p_Network) {
    if(itsNetwork != NULL)
        {
            itsNetwork->__setItsRoom_Touch_Panel(NULL);
        }
    __setItsNetwork(p_Network);
}

void Room_Touch_Panel::_clearItsNetwork() {
    itsNetwork = NULL;
}

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Room_Touch_Panel.cpp
*********************************************************************/
