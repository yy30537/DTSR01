/********************************************************************
	Rhapsody	: 9.0 
	Login		: 20181759
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Booking_System
//!	Generated Date	: Wed, 5, Jul 2023  
	File Path	: DefaultComponent\DefaultConfig\Booking_System.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "Booking_System.h"
//## link itsDoor_Touch_Panel
#include "Door_Touch_Panel.h"
//## link itsNetwork
#include "Network.h"
//#[ ignore
#define ArchitecturalAnalysisPkg_Booking_System_Booking_System_SERIALIZE OM_NO_OP
//#]

//## package ArchitecturalAnalysisPkg

//## class Booking_System
Booking_System::Booking_System() {
    NOTIFY_CONSTRUCTOR(Booking_System, Booking_System(), 0, ArchitecturalAnalysisPkg_Booking_System_Booking_System_SERIALIZE);
    itsDoor_Touch_Panel = NULL;
    itsNetwork = NULL;
}

Booking_System::~Booking_System() {
    NOTIFY_DESTRUCTOR(~Booking_System, true);
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
            NOTIFY_RELATION_CLEARED("itsDoor_Touch_Panel");
            Booking_System* p_Booking_System = itsDoor_Touch_Panel->getItsBooking_System();
            if(p_Booking_System != NULL)
                {
                    itsDoor_Touch_Panel->__setItsBooking_System(NULL);
                }
            itsDoor_Touch_Panel = NULL;
        }
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
}

void Booking_System::__setItsDoor_Touch_Panel(Door_Touch_Panel* p_Door_Touch_Panel) {
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

void Booking_System::_setItsDoor_Touch_Panel(Door_Touch_Panel* p_Door_Touch_Panel) {
    if(itsDoor_Touch_Panel != NULL)
        {
            itsDoor_Touch_Panel->__setItsBooking_System(NULL);
        }
    __setItsDoor_Touch_Panel(p_Door_Touch_Panel);
}

void Booking_System::_clearItsDoor_Touch_Panel() {
    NOTIFY_RELATION_CLEARED("itsDoor_Touch_Panel");
    itsDoor_Touch_Panel = NULL;
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

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedBooking_System::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsNetwork", false, true);
    if(myReal->itsNetwork)
        {
            aomsRelations->ADD_ITEM(myReal->itsNetwork);
        }
    aomsRelations->addRelation("itsDoor_Touch_Panel", false, true);
    if(myReal->itsDoor_Touch_Panel)
        {
            aomsRelations->ADD_ITEM(myReal->itsDoor_Touch_Panel);
        }
}
//#]

IMPLEMENT_META_P(Booking_System, ArchitecturalAnalysisPkg, ArchitecturalAnalysisPkg, false, OMAnimatedBooking_System)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Booking_System.cpp
*********************************************************************/
