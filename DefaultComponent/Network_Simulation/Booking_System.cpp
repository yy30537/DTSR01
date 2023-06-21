/********************************************************************
	Rhapsody	: 9.0 
	Login		: Yang
	Component	: DefaultComponent 
	Configuration 	: Network_Simulation
	Model Element	: Booking_System
//!	Generated Date	: Wed, 21, Jun 2023  
	File Path	: DefaultComponent\Network_Simulation\Booking_System.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "Booking_System.h"
//## link itsNetwork
#include "Network.h"
//## link itsSmart_Room
#include "Smart_Room.h"
//#[ ignore
#define ArchitecturalAnalysisPkg_Booking_System_Booking_System_SERIALIZE OM_NO_OP
//#]

//## package ArchitecturalAnalysisPkg

//## class Booking_System
Booking_System::Booking_System() {
    NOTIFY_CONSTRUCTOR(Booking_System, Booking_System(), 0, ArchitecturalAnalysisPkg_Booking_System_Booking_System_SERIALIZE);
    itsNetwork = NULL;
    itsNetwork_1 = NULL;
    itsSmart_Room = NULL;
}

Booking_System::~Booking_System() {
    NOTIFY_DESTRUCTOR(~Booking_System, true);
    cleanUpRelations();
}

Network* Booking_System::getItsNetwork() const {
    return itsNetwork;
}

void Booking_System::setItsNetwork(Network* p_Network) {
    if(p_Network != NULL)
        {
            p_Network->_setItsBooking_System(this);
        }
    _setItsNetwork(p_Network);
}

Network* Booking_System::getItsNetwork_1() const {
    return itsNetwork_1;
}

void Booking_System::setItsNetwork_1(Network* p_Network) {
    itsNetwork_1 = p_Network;
    if(p_Network != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsNetwork_1", p_Network, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsNetwork_1");
        }
}

Smart_Room* Booking_System::getItsSmart_Room() const {
    return itsSmart_Room;
}

void Booking_System::setItsSmart_Room(Smart_Room* p_Smart_Room) {
    if(p_Smart_Room != NULL)
        {
            p_Smart_Room->_setItsBooking_System(this);
        }
    _setItsSmart_Room(p_Smart_Room);
}

void Booking_System::cleanUpRelations() {
    if(itsNetwork != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsNetwork");
            Booking_System* p_Booking_System = itsNetwork->getItsBooking_System();
            if(p_Booking_System != NULL)
                {
                    itsNetwork->__setItsBooking_System(NULL);
                }
            itsNetwork = NULL;
        }
    if(itsNetwork_1 != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsNetwork_1");
            itsNetwork_1 = NULL;
        }
    if(itsSmart_Room != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsSmart_Room");
            Booking_System* p_Booking_System = itsSmart_Room->getItsBooking_System();
            if(p_Booking_System != NULL)
                {
                    itsSmart_Room->__setItsBooking_System(NULL);
                }
            itsSmart_Room = NULL;
        }
}

void Booking_System::__setItsNetwork(Network* p_Network) {
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

void Booking_System::_setItsNetwork(Network* p_Network) {
    if(itsNetwork != NULL)
        {
            itsNetwork->__setItsBooking_System(NULL);
        }
    __setItsNetwork(p_Network);
}

void Booking_System::_clearItsNetwork() {
    NOTIFY_RELATION_CLEARED("itsNetwork");
    itsNetwork = NULL;
}

void Booking_System::__setItsSmart_Room(Smart_Room* p_Smart_Room) {
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

void Booking_System::_setItsSmart_Room(Smart_Room* p_Smart_Room) {
    if(itsSmart_Room != NULL)
        {
            itsSmart_Room->__setItsBooking_System(NULL);
        }
    __setItsSmart_Room(p_Smart_Room);
}

void Booking_System::_clearItsSmart_Room() {
    NOTIFY_RELATION_CLEARED("itsSmart_Room");
    itsSmart_Room = NULL;
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedBooking_System::serializeRelations(AOMSRelations* aomsRelations) const {
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
    aomsRelations->addRelation("itsNetwork_1", false, true);
    if(myReal->itsNetwork_1)
        {
            aomsRelations->ADD_ITEM(myReal->itsNetwork_1);
        }
}
//#]

IMPLEMENT_META_P(Booking_System, ArchitecturalAnalysisPkg, ArchitecturalAnalysisPkg, false, OMAnimatedBooking_System)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\Network_Simulation\Booking_System.cpp
*********************************************************************/
