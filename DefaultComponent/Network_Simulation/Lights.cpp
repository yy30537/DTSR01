/********************************************************************
	Rhapsody	: 9.0 
	Login		: Yang
	Component	: DefaultComponent 
	Configuration 	: Network_Simulation
	Model Element	: Lights
//!	Generated Date	: Wed, 21, Jun 2023  
	File Path	: DefaultComponent\Network_Simulation\Lights.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "Lights.h"
//## link itsNetwork
#include "Network.h"
//#[ ignore
#define ArchitecturalAnalysisPkg_Lights_Lights_SERIALIZE OM_NO_OP
//#]

//## package ArchitecturalAnalysisPkg

//## class Lights
Lights::Lights() {
    NOTIFY_CONSTRUCTOR(Lights, Lights(), 0, ArchitecturalAnalysisPkg_Lights_Lights_SERIALIZE);
    itsNetwork = NULL;
}

Lights::~Lights() {
    NOTIFY_DESTRUCTOR(~Lights, true);
    cleanUpRelations();
}

Network* Lights::getItsNetwork() const {
    return itsNetwork;
}

void Lights::setItsNetwork(Network* p_Network) {
    if(p_Network != NULL)
        {
            p_Network->_setItsLights(this);
        }
    _setItsNetwork(p_Network);
}

void Lights::cleanUpRelations() {
    if(itsNetwork != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsNetwork");
            Lights* p_Lights = itsNetwork->getItsLights();
            if(p_Lights != NULL)
                {
                    itsNetwork->__setItsLights(NULL);
                }
            itsNetwork = NULL;
        }
}

void Lights::__setItsNetwork(Network* p_Network) {
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

void Lights::_setItsNetwork(Network* p_Network) {
    if(itsNetwork != NULL)
        {
            itsNetwork->__setItsLights(NULL);
        }
    __setItsNetwork(p_Network);
}

void Lights::_clearItsNetwork() {
    NOTIFY_RELATION_CLEARED("itsNetwork");
    itsNetwork = NULL;
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedLights::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsNetwork", false, true);
    if(myReal->itsNetwork)
        {
            aomsRelations->ADD_ITEM(myReal->itsNetwork);
        }
}
//#]

IMPLEMENT_META_P(Lights, ArchitecturalAnalysisPkg, ArchitecturalAnalysisPkg, false, OMAnimatedLights)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\Network_Simulation\Lights.cpp
*********************************************************************/
