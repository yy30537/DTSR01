/********************************************************************
	Rhapsody	: 9.0 
	Login		: Yang
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Booking_System
//!	Generated Date	: Tue, 20, Jun 2023  
	File Path	: DefaultComponent\DefaultConfig\Booking_System.cpp
*********************************************************************/

//## auto_generated
#include "Booking_System.h"
//## link itsNetwork
#include "Network.h"
//## link itsSmart_Room
#include "Smart_Room.h"
//## package ArchitecturalAnalysisPkg

//## class Booking_System
Booking_System::Booking_System() {
    itsNetwork = NULL;
    itsNetwork_1 = NULL;
    itsSmart_Room = NULL;
}

Booking_System::~Booking_System() {
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
    if(p_Network != NULL)
        {
            p_Network->_setItsBooking_System_1(this);
        }
    _setItsNetwork_1(p_Network);
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
            Booking_System* p_Booking_System = itsNetwork->getItsBooking_System();
            if(p_Booking_System != NULL)
                {
                    itsNetwork->__setItsBooking_System(NULL);
                }
            itsNetwork = NULL;
        }
    if(itsNetwork_1 != NULL)
        {
            Booking_System* p_Booking_System = itsNetwork_1->getItsBooking_System_1();
            if(p_Booking_System != NULL)
                {
                    itsNetwork_1->__setItsBooking_System_1(NULL);
                }
            itsNetwork_1 = NULL;
        }
    if(itsSmart_Room != NULL)
        {
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
}

void Booking_System::_setItsNetwork(Network* p_Network) {
    if(itsNetwork != NULL)
        {
            itsNetwork->__setItsBooking_System(NULL);
        }
    __setItsNetwork(p_Network);
}

void Booking_System::_clearItsNetwork() {
    itsNetwork = NULL;
}

void Booking_System::__setItsNetwork_1(Network* p_Network) {
    itsNetwork_1 = p_Network;
}

void Booking_System::_setItsNetwork_1(Network* p_Network) {
    if(itsNetwork_1 != NULL)
        {
            itsNetwork_1->__setItsBooking_System_1(NULL);
        }
    __setItsNetwork_1(p_Network);
}

void Booking_System::_clearItsNetwork_1() {
    itsNetwork_1 = NULL;
}

void Booking_System::__setItsSmart_Room(Smart_Room* p_Smart_Room) {
    itsSmart_Room = p_Smart_Room;
}

void Booking_System::_setItsSmart_Room(Smart_Room* p_Smart_Room) {
    if(itsSmart_Room != NULL)
        {
            itsSmart_Room->__setItsBooking_System(NULL);
        }
    __setItsSmart_Room(p_Smart_Room);
}

void Booking_System::_clearItsSmart_Room() {
    itsSmart_Room = NULL;
}

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Booking_System.cpp
*********************************************************************/
