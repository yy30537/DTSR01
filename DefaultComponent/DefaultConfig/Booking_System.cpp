/********************************************************************
	Rhapsody	: 9.0 
	Login		: Administrator
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Booking_System
//!	Generated Date	: Thu, 22, Jun 2023  
	File Path	: DefaultComponent\DefaultConfig\Booking_System.cpp
*********************************************************************/

//## auto_generated
#include "Booking_System.h"
//## link itsDoor_Touch_Panel
#include "Door_Touch_Panel.h"
//## link itsNetwork
#include "Network.h"
//## package ArchitecturalAnalysisPkg

//## class Booking_System
Booking_System::Booking_System() {
    itsDoor_Touch_Panel = NULL;
    itsNetwork = NULL;
}

Booking_System::~Booking_System() {
    cleanUpRelations();
}

Door_Touch_Panel* Booking_System::getItsDoor_Touch_Panel() const {
    return itsDoor_Touch_Panel;
}

void Booking_System::setItsDoor_Touch_Panel(Door_Touch_Panel* p_Door_Touch_Panel) {
    if(p_Door_Touch_Panel != NULL)
        {
            p_Door_Touch_Panel->_setItsBooking_System(this);
        }
    _setItsDoor_Touch_Panel(p_Door_Touch_Panel);
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

void Booking_System::cleanUpRelations() {
    if(itsDoor_Touch_Panel != NULL)
        {
            Booking_System* p_Booking_System = itsDoor_Touch_Panel->getItsBooking_System();
            if(p_Booking_System != NULL)
                {
                    itsDoor_Touch_Panel->__setItsBooking_System(NULL);
                }
            itsDoor_Touch_Panel = NULL;
        }
    if(itsNetwork != NULL)
        {
            Booking_System* p_Booking_System = itsNetwork->getItsBooking_System();
            if(p_Booking_System != NULL)
                {
                    itsNetwork->__setItsBooking_System(NULL);
                }
            itsNetwork = NULL;
        }
}

void Booking_System::__setItsDoor_Touch_Panel(Door_Touch_Panel* p_Door_Touch_Panel) {
    itsDoor_Touch_Panel = p_Door_Touch_Panel;
}

void Booking_System::_setItsDoor_Touch_Panel(Door_Touch_Panel* p_Door_Touch_Panel) {
    if(itsDoor_Touch_Panel != NULL)
        {
            itsDoor_Touch_Panel->__setItsBooking_System(NULL);
        }
    __setItsDoor_Touch_Panel(p_Door_Touch_Panel);
}

void Booking_System::_clearItsDoor_Touch_Panel() {
    itsDoor_Touch_Panel = NULL;
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

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Booking_System.cpp
*********************************************************************/
