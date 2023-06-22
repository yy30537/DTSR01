/********************************************************************
	Rhapsody	: 9.0 
	Login		: Administrator
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: User
//!	Generated Date	: Thu, 22, Jun 2023  
	File Path	: DefaultComponent\DefaultConfig\User.cpp
*********************************************************************/

//## auto_generated
#include "User.h"
//## link itsDoor_Touch_Panel
#include "Door_Touch_Panel.h"
//## link itsNetwork
#include "Network.h"
//## link itsRoom_Touch_Panel
#include "Room_Touch_Panel.h"
//## link itsSmart_Room
#include "Smart_Room.h"
//## package ActorPkg

//## actor User
User::User() {
    itsDoor_Touch_Panel = NULL;
    itsNetwork = NULL;
    itsRoom_Touch_Panel = NULL;
    itsSmart_Room = NULL;
}

User::~User() {
    cleanUpRelations();
}

Door_Touch_Panel* User::getItsDoor_Touch_Panel() const {
    return itsDoor_Touch_Panel;
}

void User::setItsDoor_Touch_Panel(Door_Touch_Panel* p_Door_Touch_Panel) {
    if(p_Door_Touch_Panel != NULL)
        {
            p_Door_Touch_Panel->_setItsUser(this);
        }
    _setItsDoor_Touch_Panel(p_Door_Touch_Panel);
}

Network* User::getItsNetwork() const {
    return itsNetwork;
}

void User::setItsNetwork(Network* p_Network) {
    if(p_Network != NULL)
        {
            p_Network->_setItsUser(this);
        }
    _setItsNetwork(p_Network);
}

Room_Touch_Panel* User::getItsRoom_Touch_Panel() const {
    return itsRoom_Touch_Panel;
}

void User::setItsRoom_Touch_Panel(Room_Touch_Panel* p_Room_Touch_Panel) {
    if(p_Room_Touch_Panel != NULL)
        {
            p_Room_Touch_Panel->_setItsUser(this);
        }
    _setItsRoom_Touch_Panel(p_Room_Touch_Panel);
}

Smart_Room* User::getItsSmart_Room() const {
    return itsSmart_Room;
}

void User::setItsSmart_Room(Smart_Room* p_Smart_Room) {
    itsSmart_Room = p_Smart_Room;
}

void User::cleanUpRelations() {
    if(itsDoor_Touch_Panel != NULL)
        {
            User* p_User = itsDoor_Touch_Panel->getItsUser();
            if(p_User != NULL)
                {
                    itsDoor_Touch_Panel->__setItsUser(NULL);
                }
            itsDoor_Touch_Panel = NULL;
        }
    if(itsNetwork != NULL)
        {
            User* p_User = itsNetwork->getItsUser();
            if(p_User != NULL)
                {
                    itsNetwork->__setItsUser(NULL);
                }
            itsNetwork = NULL;
        }
    if(itsRoom_Touch_Panel != NULL)
        {
            User* p_User = itsRoom_Touch_Panel->getItsUser();
            if(p_User != NULL)
                {
                    itsRoom_Touch_Panel->__setItsUser(NULL);
                }
            itsRoom_Touch_Panel = NULL;
        }
    if(itsSmart_Room != NULL)
        {
            itsSmart_Room = NULL;
        }
}

void User::__setItsDoor_Touch_Panel(Door_Touch_Panel* p_Door_Touch_Panel) {
    itsDoor_Touch_Panel = p_Door_Touch_Panel;
}

void User::_setItsDoor_Touch_Panel(Door_Touch_Panel* p_Door_Touch_Panel) {
    if(itsDoor_Touch_Panel != NULL)
        {
            itsDoor_Touch_Panel->__setItsUser(NULL);
        }
    __setItsDoor_Touch_Panel(p_Door_Touch_Panel);
}

void User::_clearItsDoor_Touch_Panel() {
    itsDoor_Touch_Panel = NULL;
}

void User::__setItsNetwork(Network* p_Network) {
    itsNetwork = p_Network;
}

void User::_setItsNetwork(Network* p_Network) {
    if(itsNetwork != NULL)
        {
            itsNetwork->__setItsUser(NULL);
        }
    __setItsNetwork(p_Network);
}

void User::_clearItsNetwork() {
    itsNetwork = NULL;
}

void User::__setItsRoom_Touch_Panel(Room_Touch_Panel* p_Room_Touch_Panel) {
    itsRoom_Touch_Panel = p_Room_Touch_Panel;
}

void User::_setItsRoom_Touch_Panel(Room_Touch_Panel* p_Room_Touch_Panel) {
    if(itsRoom_Touch_Panel != NULL)
        {
            itsRoom_Touch_Panel->__setItsUser(NULL);
        }
    __setItsRoom_Touch_Panel(p_Room_Touch_Panel);
}

void User::_clearItsRoom_Touch_Panel() {
    itsRoom_Touch_Panel = NULL;
}

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\User.cpp
*********************************************************************/
