/********************************************************************
	Rhapsody	: 9.0 
	Login		: Administrator
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: External_Personnel
//!	Generated Date	: Thu, 22, Jun 2023  
	File Path	: DefaultComponent\DefaultConfig\External_Personnel.cpp
*********************************************************************/

//## auto_generated
#include "External_Personnel.h"
//## link itsNetwork
#include "Network.h"
//## package ArchitecturalAnalysisPkg

//## class External_Personnel
External_Personnel::External_Personnel() {
    itsNetwork = NULL;
}

External_Personnel::~External_Personnel() {
    cleanUpRelations();
}

Network* External_Personnel::getItsNetwork() const {
    return itsNetwork;
}

void External_Personnel::setItsNetwork(Network* p_Network) {
    if(p_Network != NULL)
        {
            p_Network->_setItsExternal_Personnel(this);
        }
    _setItsNetwork(p_Network);
}

void External_Personnel::cleanUpRelations() {
    if(itsNetwork != NULL)
        {
            External_Personnel* p_External_Personnel = itsNetwork->getItsExternal_Personnel();
            if(p_External_Personnel != NULL)
                {
                    itsNetwork->__setItsExternal_Personnel(NULL);
                }
            itsNetwork = NULL;
        }
}

void External_Personnel::__setItsNetwork(Network* p_Network) {
    itsNetwork = p_Network;
}

void External_Personnel::_setItsNetwork(Network* p_Network) {
    if(itsNetwork != NULL)
        {
            itsNetwork->__setItsExternal_Personnel(NULL);
        }
    __setItsNetwork(p_Network);
}

void External_Personnel::_clearItsNetwork() {
    itsNetwork = NULL;
}

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\External_Personnel.cpp
*********************************************************************/
