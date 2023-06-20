/********************************************************************
	Rhapsody	: 9.0 
	Login		: Yang
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: ExternalPersonnel
//!	Generated Date	: Tue, 20, Jun 2023  
	File Path	: DefaultComponent\DefaultConfig\ExternalPersonnel.cpp
*********************************************************************/

//## auto_generated
#include "ExternalPersonnel.h"
//## link itsSmart_Room
#include "Smart_Room.h"
//## package ActorPkg

//## actor ExternalPersonnel
ExternalPersonnel::ExternalPersonnel() {
    itsSmart_Room = NULL;
}

ExternalPersonnel::~ExternalPersonnel() {
    cleanUpRelations();
}

Smart_Room* ExternalPersonnel::getItsSmart_Room() const {
    return itsSmart_Room;
}

void ExternalPersonnel::setItsSmart_Room(Smart_Room* p_Smart_Room) {
    itsSmart_Room = p_Smart_Room;
}

void ExternalPersonnel::cleanUpRelations() {
    if(itsSmart_Room != NULL)
        {
            itsSmart_Room = NULL;
        }
}

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\ExternalPersonnel.cpp
*********************************************************************/
