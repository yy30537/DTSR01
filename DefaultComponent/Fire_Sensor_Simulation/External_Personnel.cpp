/********************************************************************
	Rhapsody	: 9.0 
	Login		: 20181759
	Component	: DefaultComponent 
	Configuration 	: Fire_Sensor_Simulation
	Model Element	: External_Personnel
//!	Generated Date	: Wed, 5, Jul 2023  
	File Path	: DefaultComponent\Fire_Sensor_Simulation\External_Personnel.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "External_Personnel.h"
//## link itsNetwork
#include "Network.h"
//#[ ignore
#define ArchitecturalAnalysisPkg_External_Personnel_External_Personnel_SERIALIZE OM_NO_OP
//#]

//## package ArchitecturalAnalysisPkg

//## class External_Personnel
External_Personnel::External_Personnel() {
    NOTIFY_CONSTRUCTOR(External_Personnel, External_Personnel(), 0, ArchitecturalAnalysisPkg_External_Personnel_External_Personnel_SERIALIZE);
    itsNetwork = NULL;
}

External_Personnel::~External_Personnel() {
    NOTIFY_DESTRUCTOR(~External_Personnel, true);
    cleanUpRelations();
}

Network* External_Personnel::getItsNetwork() const {
    return itsNetwork;
}

void External_Personnel::setItsNetwork(Network* p_Network) {
    if(p_Network != NULL)
        {
            p_Network->_setItsExternal_Personnel(this);
        }
    _setItsNetwork(p_Network);
}

void External_Personnel::cleanUpRelations() {
    if(itsNetwork != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsNetwork");
            External_Personnel* p_External_Personnel = itsNetwork->getItsExternal_Personnel();
            if(p_External_Personnel != NULL)
                {
                    itsNetwork->__setItsExternal_Personnel(NULL);
                }
            itsNetwork = NULL;
        }
}

void External_Personnel::__setItsNetwork(Network* p_Network) {
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

void External_Personnel::_setItsNetwork(Network* p_Network) {
    if(itsNetwork != NULL)
        {
            itsNetwork->__setItsExternal_Personnel(NULL);
        }
    __setItsNetwork(p_Network);
}

void External_Personnel::_clearItsNetwork() {
    NOTIFY_RELATION_CLEARED("itsNetwork");
    itsNetwork = NULL;
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedExternal_Personnel::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsNetwork", false, true);
    if(myReal->itsNetwork)
        {
            aomsRelations->ADD_ITEM(myReal->itsNetwork);
        }
}
//#]

IMPLEMENT_META_P(External_Personnel, ArchitecturalAnalysisPkg, ArchitecturalAnalysisPkg, false, OMAnimatedExternal_Personnel)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\Fire_Sensor_Simulation\External_Personnel.cpp
*********************************************************************/
