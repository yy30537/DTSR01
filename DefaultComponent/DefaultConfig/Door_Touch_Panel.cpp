/********************************************************************
	Rhapsody	: 9.0 
	Login		: Administrator
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Door_Touch_Panel
//!	Generated Date	: Thu, 22, Jun 2023  
	File Path	: DefaultComponent\DefaultConfig\Door_Touch_Panel.cpp
*********************************************************************/

//## auto_generated
#include "Door_Touch_Panel.h"
//## link itsBooking_System
#include "Booking_System.h"
//## link itsExternalPersonnel
#include "ExternalPersonnel.h"
//## link itsNetwork
#include "Network.h"
//## link itsUser
#include "User.h"
//## package ArchitecturalAnalysisPkg

//## class Door_Touch_Panel
Door_Touch_Panel::Door_Touch_Panel() {
    itsBooking_System = NULL;
    itsExternalPersonnel = NULL;
    itsNetwork = NULL;
    itsUser = NULL;
}

Door_Touch_Panel::~Door_Touch_Panel() {
    cleanUpRelations();
}

Booking_System* Door_Touch_Panel::getItsBooking_System() const {
    return itsBooking_System;
}

void Door_Touch_Panel::setItsBooking_System(Booking_System* p_Booking_System) {
    if(p_Booking_System != NULL)
        {
            p_Booking_System->_setItsDoor_Touch_Panel(this);
        }
    _setItsBooking_System(p_Booking_System);
}

ExternalPersonnel* Door_Touch_Panel::getItsExternalPersonnel() const {
    return itsExternalPersonnel;
}

void Door_Touch_Panel::setItsExternalPersonnel(ExternalPersonnel* p_ExternalPersonnel) {
    if(p_ExternalPersonnel != NULL)
        {
            p_ExternalPersonnel->_setItsDoor_Touch_Panel(this);
        }
    _setItsExternalPersonnel(p_ExternalPersonnel);
}

Network* Door_Touch_Panel::getItsNetwork() const {
    return itsNetwork;
}

void Door_Touch_Panel::setItsNetwork(Network* p_Network) {
    if(p_Network != NULL)
        {
            p_Network->_setItsDoor_Touch_Panel(this);
        }
    _setItsNetwork(p_Network);
}

User* Door_Touch_Panel::getItsUser() const {
    return itsUser;
}

void Door_Touch_Panel::setItsUser(User* p_User) {
    if(p_User != NULL)
        {
            p_User->_setItsDoor_Touch_Panel(this);
        }
    _setItsUser(p_User);
}

void Door_Touch_Panel::cleanUpRelations() {
    if(itsBooking_System != NULL)
        {
            Door_Touch_Panel* p_Door_Touch_Panel = itsBooking_System->getItsDoor_Touch_Panel();
            if(p_Door_Touch_Panel != NULL)
                {
                    itsBooking_System->__setItsDoor_Touch_Panel(NULL);
                }
            itsBooking_System = NULL;
        }
    if(itsExternalPersonnel != NULL)
        {
            Door_Touch_Panel* p_Door_Touch_Panel = itsExternalPersonnel->getItsDoor_Touch_Panel();
            if(p_Door_Touch_Panel != NULL)
                {
                    itsExternalPersonnel->__setItsDoor_Touch_Panel(NULL);
                }
            itsExternalPersonnel = NULL;
        }
    if(itsNetwork != NULL)
        {
            Door_Touch_Panel* p_Door_Touch_Panel = itsNetwork->getItsDoor_Touch_Panel();
            if(p_Door_Touch_Panel != NULL)
                {
                    itsNetwork->__setItsDoor_Touch_Panel(NULL);
                }
            itsNetwork = NULL;
        }
    if(itsUser != NULL)
        {
            Door_Touch_Panel* p_Door_Touch_Panel = itsUser->getItsDoor_Touch_Panel();
            if(p_Door_Touch_Panel != NULL)
                {
                    itsUser->__setItsDoor_Touch_Panel(NULL);
                }
            itsUser = NULL;
        }
}

void Door_Touch_Panel::__setItsBooking_System(Booking_System* p_Booking_System) {
    itsBooking_System = p_Booking_System;
}

void Door_Touch_Panel::_setItsBooking_System(Booking_System* p_Booking_System) {
    if(itsBooking_System != NULL)
        {
            itsBooking_System->__setItsDoor_Touch_Panel(NULL);
        }
    __setItsBooking_System(p_Booking_System);
}

void Door_Touch_Panel::_clearItsBooking_System() {
    itsBooking_System = NULL;
}

void Door_Touch_Panel::__setItsExternalPersonnel(ExternalPersonnel* p_ExternalPersonnel) {
    itsExternalPersonnel = p_ExternalPersonnel;
}

void Door_Touch_Panel::_setItsExternalPersonnel(ExternalPersonnel* p_ExternalPersonnel) {
    if(itsExternalPersonnel != NULL)
        {
            itsExternalPersonnel->__setItsDoor_Touch_Panel(NULL);
        }
    __setItsExternalPersonnel(p_ExternalPersonnel);
}

void Door_Touch_Panel::_clearItsExternalPersonnel() {
    itsExternalPersonnel = NULL;
}

void Door_Touch_Panel::__setItsNetwork(Network* p_Network) {
    itsNetwork = p_Network;
}

void Door_Touch_Panel::_setItsNetwork(Network* p_Network) {
    if(itsNetwork != NULL)
        {
            itsNetwork->__setItsDoor_Touch_Panel(NULL);
        }
    __setItsNetwork(p_Network);
}

void Door_Touch_Panel::_clearItsNetwork() {
    itsNetwork = NULL;
}

void Door_Touch_Panel::__setItsUser(User* p_User) {
    itsUser = p_User;
}

void Door_Touch_Panel::_setItsUser(User* p_User) {
    if(itsUser != NULL)
        {
            itsUser->__setItsDoor_Touch_Panel(NULL);
        }
    __setItsUser(p_User);
}

void Door_Touch_Panel::_clearItsUser() {
    itsUser = NULL;
}

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Door_Touch_Panel.cpp
*********************************************************************/
