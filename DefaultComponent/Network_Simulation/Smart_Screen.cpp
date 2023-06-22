/********************************************************************
	Rhapsody	: 9.0 
	Login		: Administrator
	Component	: DefaultComponent 
	Configuration 	: Network_Simulation
	Model Element	: Smart_Screen
//!	Generated Date	: Thu, 22, Jun 2023  
	File Path	: DefaultComponent\Network_Simulation\Smart_Screen.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "Smart_Screen.h"
//## link itsNetwork
#include "Network.h"
//#[ ignore
#define ArchitecturalAnalysisPkg_Smart_Screen_Smart_Screen_SERIALIZE OM_NO_OP
//#]

//## package ArchitecturalAnalysisPkg

//## class Smart_Screen
Smart_Screen::Smart_Screen() {
    NOTIFY_CONSTRUCTOR(Smart_Screen, Smart_Screen(), 0, ArchitecturalAnalysisPkg_Smart_Screen_Smart_Screen_SERIALIZE);
    itsNetwork = NULL;
}

Smart_Screen::~Smart_Screen() {
    NOTIFY_DESTRUCTOR(~Smart_Screen, true);
    cleanUpRelations();
}

Network* Smart_Screen::getItsNetwork() const {
    return itsNetwork;
}

void Smart_Screen::setItsNetwork(Network* p_Network) {
    if(p_Network != NULL)
        {
            p_Network->_setItsSmart_Screen(this);
        }
    _setItsNetwork(p_Network);
}

void Smart_Screen::cleanUpRelations() {
    if(itsNetwork != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsNetwork");
            Smart_Screen* p_Smart_Screen = itsNetwork->getItsSmart_Screen();
            if(p_Smart_Screen != NULL)
                {
                    itsNetwork->__setItsSmart_Screen(NULL);
                }
            itsNetwork = NULL;
        }
}

void Smart_Screen::__setItsNetwork(Network* p_Network) {
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

void Smart_Screen::_setItsNetwork(Network* p_Network) {
    if(itsNetwork != NULL)
        {
            itsNetwork->__setItsSmart_Screen(NULL);
        }
    __setItsNetwork(p_Network);
}

void Smart_Screen::_clearItsNetwork() {
    NOTIFY_RELATION_CLEARED("itsNetwork");
    itsNetwork = NULL;
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedSmart_Screen::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsNetwork", false, true);
    if(myReal->itsNetwork)
        {
            aomsRelations->ADD_ITEM(myReal->itsNetwork);
        }
}
//#]

IMPLEMENT_META_P(Smart_Screen, ArchitecturalAnalysisPkg, ArchitecturalAnalysisPkg, false, OMAnimatedSmart_Screen)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\Network_Simulation\Smart_Screen.cpp
*********************************************************************/
