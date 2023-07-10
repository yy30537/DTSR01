/********************************************************************
	Rhapsody	: 9.0 
	Login		: Yang
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: ExternalPersonnel
//!	Generated Date	: Sun, 9, Jul 2023  
	File Path	: DefaultComponent\DefaultConfig\ExternalPersonnel.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "ExternalPersonnel.h"
//## link itsDoor_Touch_Panel
#include "Door_Touch_Panel.h"
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

Room_Touch_Panel* ExternalPersonnel::getItsRoom_Touch_Panel() const {
    return itsRoom_Touch_Panel;
}

void ExternalPersonnel::setItsRoom_Touch_Panel(Room_Touch_Panel* p_Room_Touch_Panel) {
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
            itsDoor_Touch_Panel = NULL;
        }
    if(itsRoom_Touch_Panel != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsRoom_Touch_Panel");
            itsRoom_Touch_Panel = NULL;
        }
    if(itsSmart_Room != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsSmart_Room");
            itsSmart_Room = NULL;
        }
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
}
//#]

IMPLEMENT_META_P(ExternalPersonnel, ActorPkg, ActorPkg, false, OMAnimatedExternalPersonnel)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\ExternalPersonnel.cpp
*********************************************************************/
