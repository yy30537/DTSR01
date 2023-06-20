/********************************************************************
	Rhapsody	: 9.0 
	Login		: Yang
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: User
//!	Generated Date	: Tue, 20, Jun 2023  
	File Path	: DefaultComponent\DefaultConfig\User.cpp
*********************************************************************/

//## auto_generated
#include "User.h"
//## link itsSmart_Room
#include "Smart_Room.h"
//## package ActorPkg

//## actor User
User::User() {
    itsSmart_Room = NULL;
}

User::~User() {
    cleanUpRelations();
}

Smart_Room* User::getItsSmart_Room() const {
    return itsSmart_Room;
}

void User::setItsSmart_Room(Smart_Room* p_Smart_Room) {
    itsSmart_Room = p_Smart_Room;
}

void User::cleanUpRelations() {
    if(itsSmart_Room != NULL)
        {
            itsSmart_Room = NULL;
        }
}

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\User.cpp
*********************************************************************/
