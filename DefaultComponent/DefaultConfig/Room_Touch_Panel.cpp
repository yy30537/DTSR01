/********************************************************************
	Rhapsody	: 9.0 
	Login		: Administrator
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Room_Touch_Panel
//!	Generated Date	: Thu, 22, Jun 2023  
	File Path	: DefaultComponent\DefaultConfig\Room_Touch_Panel.cpp
*********************************************************************/

//## auto_generated
#include <oxf\omthread.h>
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
//## package ArchitecturalAnalysisPkg

//## class Room_Touch_Panel
Room_Touch_Panel::Room_Touch_Panel(IOxfActive* theActiveContext) {
    setActiveContext(theActiveContext, false);
    itsExternalPersonnel = NULL;
    itsHVAC = NULL;
    itsNetwork = NULL;
    itsUser = NULL;
}

Room_Touch_Panel::~Room_Touch_Panel() {
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
            Room_Touch_Panel* p_Room_Touch_Panel = itsExternalPersonnel->getItsRoom_Touch_Panel();
            if(p_Room_Touch_Panel != NULL)
                {
                    itsExternalPersonnel->__setItsRoom_Touch_Panel(NULL);
                }
            itsExternalPersonnel = NULL;
        }
    if(itsHVAC != NULL)
        {
            Room_Touch_Panel* p_Room_Touch_Panel = itsHVAC->getItsRoom_Touch_Panel();
            if(p_Room_Touch_Panel != NULL)
                {
                    itsHVAC->__setItsRoom_Touch_Panel(NULL);
                }
            itsHVAC = NULL;
        }
    if(itsNetwork != NULL)
        {
            Room_Touch_Panel* p_Room_Touch_Panel = itsNetwork->getItsRoom_Touch_Panel();
            if(p_Room_Touch_Panel != NULL)
                {
                    itsNetwork->__setItsRoom_Touch_Panel(NULL);
                }
            itsNetwork = NULL;
        }
    if(itsUser != NULL)
        {
            Room_Touch_Panel* p_Room_Touch_Panel = itsUser->getItsRoom_Touch_Panel();
            if(p_Room_Touch_Panel != NULL)
                {
                    itsUser->__setItsRoom_Touch_Panel(NULL);
                }
            itsUser = NULL;
        }
}

int Room_Touch_Panel::decreaseLightIntensity() {
    decreaseLightIntensity_Room_Touch_Panel_Event triggerEvent;
    handleTrigger(&triggerEvent);
    return triggerEvent.om_reply;
}

int Room_Touch_Panel::increaseLightIntensity() {
    increaseLightIntensity_Room_Touch_Panel_Event triggerEvent;
    handleTrigger(&triggerEvent);
    return triggerEvent.om_reply;
}

void Room_Touch_Panel::requestExternalPersonnel() {
    requestExternalPersonnel_Room_Touch_Panel_Event triggerEvent;
    handleTrigger(&triggerEvent);
}

void Room_Touch_Panel::setLightIntensity(int targetIntensity) {
    setLightIntensity_Room_Touch_Panel_Event triggerEvent(targetIntensity);
    handleTrigger(&triggerEvent);
}

void Room_Touch_Panel::turnOff_Light() {
    turnOff_Light_Room_Touch_Panel_Event triggerEvent;
    handleTrigger(&triggerEvent);
}

void Room_Touch_Panel::turnOn_Light() {
    turnOn_Light_Room_Touch_Panel_Event triggerEvent;
    handleTrigger(&triggerEvent);
}

void Room_Touch_Panel::__setItsExternalPersonnel(ExternalPersonnel* p_ExternalPersonnel) {
    itsExternalPersonnel = p_ExternalPersonnel;
}

void Room_Touch_Panel::_setItsExternalPersonnel(ExternalPersonnel* p_ExternalPersonnel) {
    if(itsExternalPersonnel != NULL)
        {
            itsExternalPersonnel->__setItsRoom_Touch_Panel(NULL);
        }
    __setItsExternalPersonnel(p_ExternalPersonnel);
}

void Room_Touch_Panel::_clearItsExternalPersonnel() {
    itsExternalPersonnel = NULL;
}

void Room_Touch_Panel::__setItsHVAC(HVAC* p_HVAC) {
    itsHVAC = p_HVAC;
}

void Room_Touch_Panel::_setItsHVAC(HVAC* p_HVAC) {
    if(itsHVAC != NULL)
        {
            itsHVAC->__setItsRoom_Touch_Panel(NULL);
        }
    __setItsHVAC(p_HVAC);
}

void Room_Touch_Panel::_clearItsHVAC() {
    itsHVAC = NULL;
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

void Room_Touch_Panel::__setItsUser(User* p_User) {
    itsUser = p_User;
}

void Room_Touch_Panel::_setItsUser(User* p_User) {
    if(itsUser != NULL)
        {
            itsUser->__setItsRoom_Touch_Panel(NULL);
        }
    __setItsUser(p_User);
}

void Room_Touch_Panel::_clearItsUser() {
    itsUser = NULL;
}

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
