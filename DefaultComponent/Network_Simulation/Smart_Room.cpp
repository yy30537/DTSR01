/********************************************************************
	Rhapsody	: 9.0 
	Login		: Administrator
	Component	: DefaultComponent 
	Configuration 	: Network_Simulation
	Model Element	: Smart_Room
//!	Generated Date	: Thu, 22, Jun 2023  
	File Path	: DefaultComponent\Network_Simulation\Smart_Room.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "Smart_Room.h"
//## link itsNetwork
#include "Network.h"
//#[ ignore
#define ArchitecturalAnalysisPkg_Smart_Room_Smart_Room_SERIALIZE OM_NO_OP
//#]

//## package ArchitecturalAnalysisPkg

//## class Smart_Room
Smart_Room::Smart_Room() {
    NOTIFY_CONSTRUCTOR(Smart_Room, Smart_Room(), 0, ArchitecturalAnalysisPkg_Smart_Room_Smart_Room_SERIALIZE);
    itsNetwork = NULL;
}

Smart_Room::~Smart_Room() {
    NOTIFY_DESTRUCTOR(~Smart_Room, true);
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
            NOTIFY_RELATION_CLEARED("itsNetwork");
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
    if(p_Network != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsNetwork", p_Network, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsNetwork");
        }
}

void Smart_Room::_setItsNetwork(Network* p_Network) {
    if(itsNetwork != NULL)
        {
            itsNetwork->__setItsSmart_Room(NULL);
        }
    __setItsNetwork(p_Network);
}

void Smart_Room::_clearItsNetwork() {
    NOTIFY_RELATION_CLEARED("itsNetwork");
    itsNetwork = NULL;
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedSmart_Room::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsNetwork", false, true);
    if(myReal->itsNetwork)
        {
            aomsRelations->ADD_ITEM(myReal->itsNetwork);
        }
}
//#]

IMPLEMENT_META_P(Smart_Room, ArchitecturalAnalysisPkg, ArchitecturalAnalysisPkg, false, OMAnimatedSmart_Room)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\Network_Simulation\Smart_Room.cpp
*********************************************************************/
