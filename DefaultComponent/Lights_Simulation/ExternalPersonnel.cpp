/********************************************************************
	Rhapsody	: 9.0 
	Login		: 20181759
	Component	: DefaultComponent 
	Configuration 	: Lights_Simulation
	Model Element	: ExternalPersonnel
//!	Generated Date	: Wed, 5, Jul 2023  
	File Path	: DefaultComponent\Lights_Simulation\ExternalPersonnel.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "ExternalPersonnel.h"
//## link itsDoor_Touch_Panel
#include "Door_Touch_Panel.h"
//## link itsNetwork
#include "Network.h"
//## link itsRoom_Touch_Panel
#include "Room_Touch_Panel.h"
//## link itsSmart_Room
#include "Smart_Room.h"
//#[ ignore
#define ActorPkg_ExternalPersonnel_ExternalPersonnel_SERIALIZE OM_NO_OP
//#]

//## package ActorPkg

//## actor ExternalPersonnel
ExternalPersonnel::ExternalPersonnel() {
    NOTIFY_CONSTRUCTOR(ExternalPersonnel, ExternalPersonnel(), 0, ActorPkg_ExternalPersonnel_ExternalPersonnel_SERIALIZE);
    itsDoor_Touch_Panel = NULL;
    itsNetwork = NULL;
    itsRoom_Touch_Panel = NULL;
    itsSmart_Room = NULL;
}

ExternalPersonnel::~ExternalPersonnel() {
    NOTIFY_DESTRUCTOR(~ExternalPersonnel, true);
    cleanUpRelations();
}

Door_Touch_Panel* ExternalPersonnel::getItsDoor_Touch_Panel() const {
    return itsDoor_Touch_Panel;
}

void ExternalPersonnel::setItsDoor_Touch_Panel(Door_Touch_Panel* p_Door_Touch_Panel) {
    if(p_Door_Touch_Panel != NULL)
        {
            p_Door_Touch_Panel->_setItsExternalPersonnel(this);
        }
    _setItsDoor_Touch_Panel(p_Door_Touch_Panel);
}

Network* ExternalPersonnel::getItsNetwork() const {
    return itsNetwork;
}

void ExternalPersonnel::setItsNetwork(Network* p_Network) {
    if(p_Network != NULL)
        {
            p_Network->_setItsExternalPersonnel(this);
        }
    _setItsNetwork(p_Network);
}

Room_Touch_Panel* ExternalPersonnel::getItsRoom_Touch_Panel() const {
    return itsRoom_Touch_Panel;
}

void ExternalPersonnel::setItsRoom_Touch_Panel(Room_Touch_Panel* p_Room_Touch_Panel) {
    if(p_Room_Touch_Panel != NULL)
        {
            p_Room_Touch_Panel->_setItsExternalPersonnel(this);
        }
    _setItsRoom_Touch_Panel(p_Room_Touch_Panel);
}

Smart_Room* ExternalPersonnel::getItsSmart_Room() const {
    return itsSmart_Room;
}

void ExternalPersonnel::setItsSmart_Room(Smart_Room* p_Smart_Room) {
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

void ExternalPersonnel::cleanUpRelations() {
    if(itsDoor_Touch_Panel != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsDoor_Touch_Panel");
            ExternalPersonnel* p_ExternalPersonnel = itsDoor_Touch_Panel->getItsExternalPersonnel();
            if(p_ExternalPersonnel != NULL)
                {
                    itsDoor_Touch_Panel->__setItsExternalPersonnel(NULL);
                }
            itsDoor_Touch_Panel = NULL;
        }
    if(itsNetwork != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsNetwork");
            ExternalPersonnel* p_ExternalPersonnel = itsNetwork->getItsExternalPersonnel();
            if(p_ExternalPersonnel != NULL)
                {
                    itsNetwork->__setItsExternalPersonnel(NULL);
                }
            itsNetwork = NULL;
        }
    if(itsRoom_Touch_Panel != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsRoom_Touch_Panel");
            ExternalPersonnel* p_ExternalPersonnel = itsRoom_Touch_Panel->getItsExternalPersonnel();
            if(p_ExternalPersonnel != NULL)
                {
                    itsRoom_Touch_Panel->__setItsExternalPersonnel(NULL);
                }
            itsRoom_Touch_Panel = NULL;
        }
    if(itsSmart_Room != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsSmart_Room");
            itsSmart_Room = NULL;
        }
}

void ExternalPersonnel::__setItsDoor_Touch_Panel(Door_Touch_Panel* p_Door_Touch_Panel) {
    itsDoor_Touch_Panel = p_Door_Touch_Panel;
    if(p_Door_Touch_Panel != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsDoor_Touch_Panel", p_Door_Touch_Panel, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsDoor_Touch_Panel");
        }
}

void ExternalPersonnel::_setItsDoor_Touch_Panel(Door_Touch_Panel* p_Door_Touch_Panel) {
    if(itsDoor_Touch_Panel != NULL)
        {
            itsDoor_Touch_Panel->__setItsExternalPersonnel(NULL);
        }
    __setItsDoor_Touch_Panel(p_Door_Touch_Panel);
}

void ExternalPersonnel::_clearItsDoor_Touch_Panel() {
    NOTIFY_RELATION_CLEARED("itsDoor_Touch_Panel");
    itsDoor_Touch_Panel = NULL;
}

void ExternalPersonnel::__setItsNetwork(Network* p_Network) {
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

void ExternalPersonnel::_setItsNetwork(Network* p_Network) {
    if(itsNetwork != NULL)
        {
            itsNetwork->__setItsExternalPersonnel(NULL);
        }
    __setItsNetwork(p_Network);
}

void ExternalPersonnel::_clearItsNetwork() {
    NOTIFY_RELATION_CLEARED("itsNetwork");
    itsNetwork = NULL;
}

void ExternalPersonnel::__setItsRoom_Touch_Panel(Room_Touch_Panel* p_Room_Touch_Panel) {
    itsRoom_Touch_Panel = p_Room_Touch_Panel;
    if(p_Room_Touch_Panel != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsRoom_Touch_Panel", p_Room_Touch_Panel, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsRoom_Touch_Panel");
        }
}

void ExternalPersonnel::_setItsRoom_Touch_Panel(Room_Touch_Panel* p_Room_Touch_Panel) {
    if(itsRoom_Touch_Panel != NULL)
        {
            itsRoom_Touch_Panel->__setItsExternalPersonnel(NULL);
        }
    __setItsRoom_Touch_Panel(p_Room_Touch_Panel);
}

void ExternalPersonnel::_clearItsRoom_Touch_Panel() {
    NOTIFY_RELATION_CLEARED("itsRoom_Touch_Panel");
    itsRoom_Touch_Panel = NULL;
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedExternalPersonnel::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsSmart_Room", false, true);
    if(myReal->itsSmart_Room)
        {
            aomsRelations->ADD_ITEM(myReal->itsSmart_Room);
        }
    aomsRelations->addRelation("itsDoor_Touch_Panel", false, true);
    if(myReal->itsDoor_Touch_Panel)
        {
            aomsRelations->ADD_ITEM(myReal->itsDoor_Touch_Panel);
        }
    aomsRelations->addRelation("itsRoom_Touch_Panel", false, true);
    if(myReal->itsRoom_Touch_Panel)
        {
            aomsRelations->ADD_ITEM(myReal->itsRoom_Touch_Panel);
        }
    aomsRelations->addRelation("itsNetwork", false, true);
    if(myReal->itsNetwork)
        {
            aomsRelations->ADD_ITEM(myReal->itsNetwork);
        }
}
//#]

IMPLEMENT_META_P(ExternalPersonnel, ActorPkg, ActorPkg, false, OMAnimatedExternalPersonnel)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\Lights_Simulation\ExternalPersonnel.cpp
*********************************************************************/
