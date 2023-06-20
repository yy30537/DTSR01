/********************************************************************
	Rhapsody	: 9.0 
	Login		: Yang
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: External_Personnel
//!	Generated Date	: Tue, 20, Jun 2023  
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
    itsNetwork = p_Network;
}

void External_Personnel::cleanUpRelations() {
    if(itsNetwork != NULL)
        {
            itsNetwork = NULL;
        }
}

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\External_Personnel.cpp
*********************************************************************/
