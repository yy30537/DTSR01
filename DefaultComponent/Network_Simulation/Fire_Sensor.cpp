/********************************************************************
	Rhapsody	: 9.0 
	Login		: Yang
	Component	: DefaultComponent 
	Configuration 	: Network_Simulation
	Model Element	: Fire_Sensor
//!	Generated Date	: Wed, 21, Jun 2023  
	File Path	: DefaultComponent\Network_Simulation\Fire_Sensor.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "Fire_Sensor.h"
//## link itsNetwork
#include "Network.h"
//#[ ignore
#define ArchitecturalAnalysisPkg_Fire_Sensor_Fire_Sensor_SERIALIZE OM_NO_OP
//#]

//## package ArchitecturalAnalysisPkg

//## class Fire_Sensor
Fire_Sensor::Fire_Sensor() {
    NOTIFY_CONSTRUCTOR(Fire_Sensor, Fire_Sensor(), 0, ArchitecturalAnalysisPkg_Fire_Sensor_Fire_Sensor_SERIALIZE);
    itsNetwork = NULL;
}

Fire_Sensor::~Fire_Sensor() {
    NOTIFY_DESTRUCTOR(~Fire_Sensor, true);
    cleanUpRelations();
}

Network* Fire_Sensor::getItsNetwork() const {
    return itsNetwork;
}

void Fire_Sensor::setItsNetwork(Network* p_Network) {
    if(p_Network != NULL)
        {
            p_Network->_setItsFire_Sensor(this);
        }
    _setItsNetwork(p_Network);
}

void Fire_Sensor::cleanUpRelations() {
    if(itsNetwork != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsNetwork");
            Fire_Sensor* p_Fire_Sensor = itsNetwork->getItsFire_Sensor();
            if(p_Fire_Sensor != NULL)
                {
                    itsNetwork->__setItsFire_Sensor(NULL);
                }
            itsNetwork = NULL;
        }
}

void Fire_Sensor::__setItsNetwork(Network* p_Network) {
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

void Fire_Sensor::_setItsNetwork(Network* p_Network) {
    if(itsNetwork != NULL)
        {
            itsNetwork->__setItsFire_Sensor(NULL);
        }
    __setItsNetwork(p_Network);
}

void Fire_Sensor::_clearItsNetwork() {
    NOTIFY_RELATION_CLEARED("itsNetwork");
    itsNetwork = NULL;
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedFire_Sensor::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsNetwork", false, true);
    if(myReal->itsNetwork)
        {
            aomsRelations->ADD_ITEM(myReal->itsNetwork);
        }
}
//#]

IMPLEMENT_META_P(Fire_Sensor, ArchitecturalAnalysisPkg, ArchitecturalAnalysisPkg, false, OMAnimatedFire_Sensor)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\Network_Simulation\Fire_Sensor.cpp
*********************************************************************/
