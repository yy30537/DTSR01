/********************************************************************
	Rhapsody	: 9.0 
	Login		: Yang
	Component	: DefaultComponent 
	Configuration 	: Network_Simulation
	Model Element	: Door_Touch_Panel
//!	Generated Date	: Wed, 21, Jun 2023  
	File Path	: DefaultComponent\Network_Simulation\Door_Touch_Panel.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "Door_Touch_Panel.h"
//## link itsNetwork
#include "Network.h"
//#[ ignore
#define ArchitecturalAnalysisPkg_Door_Touch_Panel_Door_Touch_Panel_SERIALIZE OM_NO_OP
//#]

//## package ArchitecturalAnalysisPkg

//## class Door_Touch_Panel
Door_Touch_Panel::Door_Touch_Panel() {
    NOTIFY_CONSTRUCTOR(Door_Touch_Panel, Door_Touch_Panel(), 0, ArchitecturalAnalysisPkg_Door_Touch_Panel_Door_Touch_Panel_SERIALIZE);
    itsNetwork = NULL;
}

Door_Touch_Panel::~Door_Touch_Panel() {
    NOTIFY_DESTRUCTOR(~Door_Touch_Panel, true);
    cleanUpRelations();
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

void Door_Touch_Panel::cleanUpRelations() {
    if(itsNetwork != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsNetwork");
            Door_Touch_Panel* p_Door_Touch_Panel = itsNetwork->getItsDoor_Touch_Panel();
            if(p_Door_Touch_Panel != NULL)
                {
                    itsNetwork->__setItsDoor_Touch_Panel(NULL);
                }
            itsNetwork = NULL;
        }
}

void Door_Touch_Panel::__setItsNetwork(Network* p_Network) {
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

void Door_Touch_Panel::_setItsNetwork(Network* p_Network) {
    if(itsNetwork != NULL)
        {
            itsNetwork->__setItsDoor_Touch_Panel(NULL);
        }
    __setItsNetwork(p_Network);
}

void Door_Touch_Panel::_clearItsNetwork() {
    NOTIFY_RELATION_CLEARED("itsNetwork");
    itsNetwork = NULL;
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedDoor_Touch_Panel::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsNetwork", false, true);
    if(myReal->itsNetwork)
        {
            aomsRelations->ADD_ITEM(myReal->itsNetwork);
        }
}
//#]

IMPLEMENT_META_P(Door_Touch_Panel, ArchitecturalAnalysisPkg, ArchitecturalAnalysisPkg, false, OMAnimatedDoor_Touch_Panel)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\Network_Simulation\Door_Touch_Panel.cpp
*********************************************************************/
