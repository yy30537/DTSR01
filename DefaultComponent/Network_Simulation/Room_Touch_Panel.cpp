/********************************************************************
	Rhapsody	: 9.0 
	Login		: Yang
	Component	: DefaultComponent 
	Configuration 	: Network_Simulation
	Model Element	: Room_Touch_Panel
//!	Generated Date	: Wed, 21, Jun 2023  
	File Path	: DefaultComponent\Network_Simulation\Room_Touch_Panel.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "Room_Touch_Panel.h"
//## link itsNetwork
#include "Network.h"
//#[ ignore
#define ArchitecturalAnalysisPkg_Room_Touch_Panel_Room_Touch_Panel_SERIALIZE OM_NO_OP
//#]

//## package ArchitecturalAnalysisPkg

//## class Room_Touch_Panel
Room_Touch_Panel::Room_Touch_Panel() {
    NOTIFY_CONSTRUCTOR(Room_Touch_Panel, Room_Touch_Panel(), 0, ArchitecturalAnalysisPkg_Room_Touch_Panel_Room_Touch_Panel_SERIALIZE);
    itsNetwork = NULL;
}

Room_Touch_Panel::~Room_Touch_Panel() {
    NOTIFY_DESTRUCTOR(~Room_Touch_Panel, true);
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
            NOTIFY_RELATION_CLEARED("itsNetwork");
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
    if(p_Network != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsNetwork", p_Network, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsNetwork");
        }
}

void Room_Touch_Panel::_setItsNetwork(Network* p_Network) {
    if(itsNetwork != NULL)
        {
            itsNetwork->__setItsRoom_Touch_Panel(NULL);
        }
    __setItsNetwork(p_Network);
}

void Room_Touch_Panel::_clearItsNetwork() {
    NOTIFY_RELATION_CLEARED("itsNetwork");
    itsNetwork = NULL;
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedRoom_Touch_Panel::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsNetwork", false, true);
    if(myReal->itsNetwork)
        {
            aomsRelations->ADD_ITEM(myReal->itsNetwork);
        }
}
//#]

IMPLEMENT_META_P(Room_Touch_Panel, ArchitecturalAnalysisPkg, ArchitecturalAnalysisPkg, false, OMAnimatedRoom_Touch_Panel)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\Network_Simulation\Room_Touch_Panel.cpp
*********************************************************************/
