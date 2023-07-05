/********************************************************************
	Rhapsody	: 9.0 
	Login		: 20181759
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Room_Touch_Panel
//!	Generated Date	: Wed, 5, Jul 2023  
	File Path	: DefaultComponent\DefaultConfig\Room_Touch_Panel.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "Room_Touch_Panel.h"
//## link itsExternalPersonnel
#include "ExternalPersonnel.h"
//## link itsHVAC
#include "HVAC.h"
//## link itsNetwork
#include "Network.h"
//## link itsUser
#include "User.h"
//#[ ignore
#define ArchitecturalAnalysisPkg_Room_Touch_Panel_Room_Touch_Panel_SERIALIZE OM_NO_OP

#define ArchitecturalAnalysisPkg_Room_Touch_Panel_decreaseLightIntensity_SERIALIZE OM_NO_OP

#define ArchitecturalAnalysisPkg_Room_Touch_Panel_increaseLightIntensity_SERIALIZE OM_NO_OP

#define ArchitecturalAnalysisPkg_Room_Touch_Panel_requestExternalPersonnel_SERIALIZE OM_NO_OP

#define ArchitecturalAnalysisPkg_Room_Touch_Panel_setLightIntensity_SERIALIZE aomsmethod->addAttribute("targetIntensity", x2String(targetIntensity));

#define ArchitecturalAnalysisPkg_Room_Touch_Panel_turnOff_Light_SERIALIZE OM_NO_OP

#define ArchitecturalAnalysisPkg_Room_Touch_Panel_turnOn_Light_SERIALIZE OM_NO_OP
//#]

//## package ArchitecturalAnalysisPkg

//## class Room_Touch_Panel
Room_Touch_Panel::Room_Touch_Panel(IOxfActive* theActiveContext) {
    NOTIFY_REACTIVE_CONSTRUCTOR(Room_Touch_Panel, Room_Touch_Panel(), 0, ArchitecturalAnalysisPkg_Room_Touch_Panel_Room_Touch_Panel_SERIALIZE);
    setActiveContext(theActiveContext, false);
    itsExternalPersonnel = NULL;
    itsHVAC = NULL;
    itsNetwork = NULL;
    itsUser = NULL;
}

Room_Touch_Panel::~Room_Touch_Panel() {
    NOTIFY_DESTRUCTOR(~Room_Touch_Panel, true);
    cleanUpRelations();
}

ExternalPersonnel* Room_Touch_Panel::getItsExternalPersonnel() const {
    return itsExternalPersonnel;
}

void Room_Touch_Panel::setItsExternalPersonnel(ExternalPersonnel* p_ExternalPersonnel) {
    if(p_ExternalPersonnel != NULL)
        {
            p_ExternalPersonnel->_setItsRoom_Touch_Panel(this);
        }
    _setItsExternalPersonnel(p_ExternalPersonnel);
}

HVAC* Room_Touch_Panel::getItsHVAC() const {
    return itsHVAC;
}

void Room_Touch_Panel::setItsHVAC(HVAC* p_HVAC) {
    if(p_HVAC != NULL)
        {
            p_HVAC->_setItsRoom_Touch_Panel(this);
        }
    _setItsHVAC(p_HVAC);
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

User* Room_Touch_Panel::getItsUser() const {
    return itsUser;
}

void Room_Touch_Panel::setItsUser(User* p_User) {
    if(p_User != NULL)
        {
            p_User->_setItsRoom_Touch_Panel(this);
        }
    _setItsUser(p_User);
}

bool Room_Touch_Panel::startBehavior() {
    bool done = false;
    done = OMReactive::startBehavior();
    return done;
}

void Room_Touch_Panel::cleanUpRelations() {
    if(itsExternalPersonnel != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsExternalPersonnel");
            Room_Touch_Panel* p_Room_Touch_Panel = itsExternalPersonnel->getItsRoom_Touch_Panel();
            if(p_Room_Touch_Panel != NULL)
                {
                    itsExternalPersonnel->__setItsRoom_Touch_Panel(NULL);
                }
            itsExternalPersonnel = NULL;
        }
    if(itsHVAC != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsHVAC");
            Room_Touch_Panel* p_Room_Touch_Panel = itsHVAC->getItsRoom_Touch_Panel();
            if(p_Room_Touch_Panel != NULL)
                {
                    itsHVAC->__setItsRoom_Touch_Panel(NULL);
                }
            itsHVAC = NULL;
        }
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
    if(itsUser != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsUser");
            Room_Touch_Panel* p_Room_Touch_Panel = itsUser->getItsRoom_Touch_Panel();
            if(p_Room_Touch_Panel != NULL)
                {
                    itsUser->__setItsRoom_Touch_Panel(NULL);
                }
            itsUser = NULL;
        }
}

//#[ ignore
#undef OM_RET_TYPE
#define OM_RET_TYPE int
#undef OM_SER_RET
#define OM_SER_RET(val) x2String(val)
#undef OM_SER_OUT
#define OM_SER_OUT 
//#]


int Room_Touch_Panel::decreaseLightIntensity() {
    NOTIFY_TRIGGERED_OPERATION(decreaseLightIntensity, decreaseLightIntensity(), 0, ArchitecturalAnalysisPkg_Room_Touch_Panel_decreaseLightIntensity_SERIALIZE);
    decreaseLightIntensity_Room_Touch_Panel_Event triggerEvent;
    handleTrigger(&triggerEvent);
    OM_RETURN(triggerEvent.om_reply);
}

//#[ ignore
#undef OM_RET_TYPE
#define OM_RET_TYPE int
#undef OM_SER_RET
#define OM_SER_RET(val) x2String(val)
#undef OM_SER_OUT
#define OM_SER_OUT 
//#]


int Room_Touch_Panel::increaseLightIntensity() {
    NOTIFY_TRIGGERED_OPERATION(increaseLightIntensity, increaseLightIntensity(), 0, ArchitecturalAnalysisPkg_Room_Touch_Panel_increaseLightIntensity_SERIALIZE);
    increaseLightIntensity_Room_Touch_Panel_Event triggerEvent;
    handleTrigger(&triggerEvent);
    OM_RETURN(triggerEvent.om_reply);
}

//#[ ignore
#undef OM_RET_TYPE
#define OM_RET_TYPE 
#undef OM_SER_RET
#define OM_SER_RET(val) 
#undef OM_SER_OUT
#define OM_SER_OUT 
//#]


void Room_Touch_Panel::requestExternalPersonnel() {
    NOTIFY_TRIGGERED_OPERATION(requestExternalPersonnel, requestExternalPersonnel(), 0, ArchitecturalAnalysisPkg_Room_Touch_Panel_requestExternalPersonnel_SERIALIZE);
    requestExternalPersonnel_Room_Touch_Panel_Event triggerEvent;
    handleTrigger(&triggerEvent);
    OM_RETURN_VOID;
}

//#[ ignore
#undef OM_RET_TYPE
#define OM_RET_TYPE 
#undef OM_SER_RET
#define OM_SER_RET(val) 
#undef OM_SER_OUT
#define OM_SER_OUT 
//#]


void Room_Touch_Panel::setLightIntensity(int targetIntensity) {
    NOTIFY_TRIGGERED_OPERATION(setLightIntensity, setLightIntensity(int), 1, ArchitecturalAnalysisPkg_Room_Touch_Panel_setLightIntensity_SERIALIZE);
    setLightIntensity_Room_Touch_Panel_Event triggerEvent(targetIntensity);
    handleTrigger(&triggerEvent);
    OM_RETURN_VOID;
}

//#[ ignore
#undef OM_RET_TYPE
#define OM_RET_TYPE 
#undef OM_SER_RET
#define OM_SER_RET(val) 
#undef OM_SER_OUT
#define OM_SER_OUT 
//#]


void Room_Touch_Panel::turnOff_Light() {
    NOTIFY_TRIGGERED_OPERATION(turnOff_Light, turnOff_Light(), 0, ArchitecturalAnalysisPkg_Room_Touch_Panel_turnOff_Light_SERIALIZE);
    turnOff_Light_Room_Touch_Panel_Event triggerEvent;
    handleTrigger(&triggerEvent);
    OM_RETURN_VOID;
}

//#[ ignore
#undef OM_RET_TYPE
#define OM_RET_TYPE 
#undef OM_SER_RET
#define OM_SER_RET(val) 
#undef OM_SER_OUT
#define OM_SER_OUT 
//#]


void Room_Touch_Panel::turnOn_Light() {
    NOTIFY_TRIGGERED_OPERATION(turnOn_Light, turnOn_Light(), 0, ArchitecturalAnalysisPkg_Room_Touch_Panel_turnOn_Light_SERIALIZE);
    turnOn_Light_Room_Touch_Panel_Event triggerEvent;
    handleTrigger(&triggerEvent);
    OM_RETURN_VOID;
}

void Room_Touch_Panel::__setItsExternalPersonnel(ExternalPersonnel* p_ExternalPersonnel) {
    itsExternalPersonnel = p_ExternalPersonnel;
    if(p_ExternalPersonnel != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsExternalPersonnel", p_ExternalPersonnel, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsExternalPersonnel");
        }
}

void Room_Touch_Panel::_setItsExternalPersonnel(ExternalPersonnel* p_ExternalPersonnel) {
    if(itsExternalPersonnel != NULL)
        {
            itsExternalPersonnel->__setItsRoom_Touch_Panel(NULL);
        }
    __setItsExternalPersonnel(p_ExternalPersonnel);
}

void Room_Touch_Panel::_clearItsExternalPersonnel() {
    NOTIFY_RELATION_CLEARED("itsExternalPersonnel");
    itsExternalPersonnel = NULL;
}

void Room_Touch_Panel::__setItsHVAC(HVAC* p_HVAC) {
    itsHVAC = p_HVAC;
    if(p_HVAC != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsHVAC", p_HVAC, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsHVAC");
        }
}

void Room_Touch_Panel::_setItsHVAC(HVAC* p_HVAC) {
    if(itsHVAC != NULL)
        {
            itsHVAC->__setItsRoom_Touch_Panel(NULL);
        }
    __setItsHVAC(p_HVAC);
}

void Room_Touch_Panel::_clearItsHVAC() {
    NOTIFY_RELATION_CLEARED("itsHVAC");
    itsHVAC = NULL;
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

void Room_Touch_Panel::__setItsUser(User* p_User) {
    itsUser = p_User;
    if(p_User != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsUser", p_User, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsUser");
        }
}

void Room_Touch_Panel::_setItsUser(User* p_User) {
    if(itsUser != NULL)
        {
            itsUser->__setItsRoom_Touch_Panel(NULL);
        }
    __setItsUser(p_User);
}

void Room_Touch_Panel::_clearItsUser() {
    NOTIFY_RELATION_CLEARED("itsUser");
    itsUser = NULL;
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedRoom_Touch_Panel::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsNetwork", false, true);
    if(myReal->itsNetwork)
        {
            aomsRelations->ADD_ITEM(myReal->itsNetwork);
        }
    aomsRelations->addRelation("itsHVAC", false, true);
    if(myReal->itsHVAC)
        {
            aomsRelations->ADD_ITEM(myReal->itsHVAC);
        }
    aomsRelations->addRelation("itsExternalPersonnel", false, true);
    if(myReal->itsExternalPersonnel)
        {
            aomsRelations->ADD_ITEM(myReal->itsExternalPersonnel);
        }
    aomsRelations->addRelation("itsUser", false, true);
    if(myReal->itsUser)
        {
            aomsRelations->ADD_ITEM(myReal->itsUser);
        }
}
//#]

IMPLEMENT_REACTIVE_META_SIMPLE_P(Room_Touch_Panel, ArchitecturalAnalysisPkg, ArchitecturalAnalysisPkg, false, OMAnimatedRoom_Touch_Panel)
#endif // _OMINSTRUMENT

//#[ ignore
decreaseLightIntensity_Room_Touch_Panel_Event::decreaseLightIntensity_Room_Touch_Panel_Event() {
    setId(decreaseLightIntensity_Room_Touch_Panel_Event_id);
}
//#]

//#[ ignore
increaseLightIntensity_Room_Touch_Panel_Event::increaseLightIntensity_Room_Touch_Panel_Event() {
    setId(increaseLightIntensity_Room_Touch_Panel_Event_id);
}
//#]

//#[ ignore
requestExternalPersonnel_Room_Touch_Panel_Event::requestExternalPersonnel_Room_Touch_Panel_Event() {
    setId(requestExternalPersonnel_Room_Touch_Panel_Event_id);
}
//#]

//#[ ignore
setLightIntensity_Room_Touch_Panel_Event::setLightIntensity_Room_Touch_Panel_Event(int p_targetIntensity) {
    setId(setLightIntensity_Room_Touch_Panel_Event_id);
    targetIntensity = p_targetIntensity;
}
//#]

//#[ ignore
turnOff_Light_Room_Touch_Panel_Event::turnOff_Light_Room_Touch_Panel_Event() {
    setId(turnOff_Light_Room_Touch_Panel_Event_id);
}
//#]

//#[ ignore
turnOn_Light_Room_Touch_Panel_Event::turnOn_Light_Room_Touch_Panel_Event() {
    setId(turnOn_Light_Room_Touch_Panel_Event_id);
}
//#]

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Room_Touch_Panel.cpp
*********************************************************************/
