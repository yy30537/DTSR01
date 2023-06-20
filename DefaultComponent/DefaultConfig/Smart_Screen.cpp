/********************************************************************
	Rhapsody	: 9.0 
	Login		: Yang
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Smart_Screen
//!	Generated Date	: Tue, 20, Jun 2023  
	File Path	: DefaultComponent\DefaultConfig\Smart_Screen.cpp
*********************************************************************/

//## auto_generated
#include "Smart_Screen.h"
//## link itsNetwork
#include "Network.h"
//## package ArchitecturalAnalysisPkg

//## class Smart_Screen
Smart_Screen::Smart_Screen() {
    itsNetwork = NULL;
}

Smart_Screen::~Smart_Screen() {
    cleanUpRelations();
}

Network* Smart_Screen::getItsNetwork() const {
    return itsNetwork;
}

void Smart_Screen::setItsNetwork(Network* p_Network) {
    if(p_Network != NULL)
        {
            p_Network->_setItsSmart_Screen(this);
        }
    _setItsNetwork(p_Network);
}

void Smart_Screen::cleanUpRelations() {
    if(itsNetwork != NULL)
        {
            Smart_Screen* p_Smart_Screen = itsNetwork->getItsSmart_Screen();
            if(p_Smart_Screen != NULL)
                {
                    itsNetwork->__setItsSmart_Screen(NULL);
                }
            itsNetwork = NULL;
        }
}

void Smart_Screen::__setItsNetwork(Network* p_Network) {
    itsNetwork = p_Network;
}

void Smart_Screen::_setItsNetwork(Network* p_Network) {
    if(itsNetwork != NULL)
        {
            itsNetwork->__setItsSmart_Screen(NULL);
        }
    __setItsNetwork(p_Network);
}

void Smart_Screen::_clearItsNetwork() {
    itsNetwork = NULL;
}

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Smart_Screen.cpp
*********************************************************************/
