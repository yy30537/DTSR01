/********************************************************************
	Rhapsody	: 9.0 
	Login		: Yang
	Component	: DefaultComponent 
	Configuration 	: Network_Simulation
	Model Element	: HVAC
//!	Generated Date	: Wed, 21, Jun 2023  
	File Path	: DefaultComponent\Network_Simulation\HVAC.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "HVAC.h"
//## link itsNetwork
#include "Network.h"
//## link itsSmart_Room
#include "Smart_Room.h"
//#[ ignore
#define ArchitecturalAnalysisPkg_HVAC_HVAC_SERIALIZE OM_NO_OP
//#]

//## package ArchitecturalAnalysisPkg

//## class HVAC
HVAC::HVAC() {
    NOTIFY_CONSTRUCTOR(HVAC, HVAC(), 0, ArchitecturalAnalysisPkg_HVAC_HVAC_SERIALIZE);
    itsNetwork = NULL;
    itsSmart_Room = NULL;
}

HVAC::~HVAC() {
    NOTIFY_DESTRUCTOR(~HVAC, true);
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
            NOTIFY_RELATION_CLEARED("itsNetwork");
            HVAC* p_HVAC = itsNetwork->getItsHVAC();
            if(p_HVAC != NULL)
                {
                    itsNetwork->__setItsHVAC(NULL);
                }
            itsNetwork = NULL;
        }
    if(itsSmart_Room != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsSmart_Room");
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
    if(p_Network != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsNetwork", p_Network, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsNetwork");
        }
}

void HVAC::_setItsNetwork(Network* p_Network) {
    if(itsNetwork != NULL)
        {
            itsNetwork->__setItsHVAC(NULL);
        }
    __setItsNetwork(p_Network);
}

void HVAC::_clearItsNetwork() {
    NOTIFY_RELATION_CLEARED("itsNetwork");
    itsNetwork = NULL;
}

void HVAC::__setItsSmart_Room(Smart_Room* p_Smart_Room) {
    itsSmart_Room = p_Smart_Room;
    if(p_Smart_Room != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsSmart_Room", p_Smart_Room, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsSmart_Room");
        }
}

void HVAC::_setItsSmart_Room(Smart_Room* p_Smart_Room) {
    if(itsSmart_Room != NULL)
        {
            itsSmart_Room->__setItsHVAC(NULL);
        }
    __setItsSmart_Room(p_Smart_Room);
}

void HVAC::_clearItsSmart_Room() {
    NOTIFY_RELATION_CLEARED("itsSmart_Room");
    itsSmart_Room = NULL;
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedHVAC::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsSmart_Room", false, true);
    if(myReal->itsSmart_Room)
        {
            aomsRelations->ADD_ITEM(myReal->itsSmart_Room);
        }
    aomsRelations->addRelation("itsNetwork", false, true);
    if(myReal->itsNetwork)
        {
            aomsRelations->ADD_ITEM(myReal->itsNetwork);
        }
}
//#]

IMPLEMENT_META_P(HVAC, ArchitecturalAnalysisPkg, ArchitecturalAnalysisPkg, false, OMAnimatedHVAC)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\Network_Simulation\HVAC.cpp
*********************************************************************/
