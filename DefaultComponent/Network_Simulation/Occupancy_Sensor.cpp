/********************************************************************
	Rhapsody	: 9.0 
	Login		: Yang
	Component	: DefaultComponent 
	Configuration 	: Network_Simulation
	Model Element	: Occupancy_Sensor
//!	Generated Date	: Wed, 21, Jun 2023  
	File Path	: DefaultComponent\Network_Simulation\Occupancy_Sensor.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "Occupancy_Sensor.h"
//## link itsNetwork
#include "Network.h"
//#[ ignore
#define ArchitecturalAnalysisPkg_Occupancy_Sensor_Occupancy_Sensor_SERIALIZE OM_NO_OP
//#]

//## package ArchitecturalAnalysisPkg

//## class Occupancy_Sensor
Occupancy_Sensor::Occupancy_Sensor() {
    NOTIFY_CONSTRUCTOR(Occupancy_Sensor, Occupancy_Sensor(), 0, ArchitecturalAnalysisPkg_Occupancy_Sensor_Occupancy_Sensor_SERIALIZE);
    itsNetwork = NULL;
}

Occupancy_Sensor::~Occupancy_Sensor() {
    NOTIFY_DESTRUCTOR(~Occupancy_Sensor, true);
    cleanUpRelations();
}

Network* Occupancy_Sensor::getItsNetwork() const {
    return itsNetwork;
}

void Occupancy_Sensor::setItsNetwork(Network* p_Network) {
    if(p_Network != NULL)
        {
            p_Network->_setItsOccupancy_Sensor(this);
        }
    _setItsNetwork(p_Network);
}

void Occupancy_Sensor::cleanUpRelations() {
    if(itsNetwork != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsNetwork");
            Occupancy_Sensor* p_Occupancy_Sensor = itsNetwork->getItsOccupancy_Sensor();
            if(p_Occupancy_Sensor != NULL)
                {
                    itsNetwork->__setItsOccupancy_Sensor(NULL);
                }
            itsNetwork = NULL;
        }
}

void Occupancy_Sensor::__setItsNetwork(Network* p_Network) {
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

void Occupancy_Sensor::_setItsNetwork(Network* p_Network) {
    if(itsNetwork != NULL)
        {
            itsNetwork->__setItsOccupancy_Sensor(NULL);
        }
    __setItsNetwork(p_Network);
}

void Occupancy_Sensor::_clearItsNetwork() {
    NOTIFY_RELATION_CLEARED("itsNetwork");
    itsNetwork = NULL;
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedOccupancy_Sensor::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsNetwork", false, true);
    if(myReal->itsNetwork)
        {
            aomsRelations->ADD_ITEM(myReal->itsNetwork);
        }
}
//#]

IMPLEMENT_META_P(Occupancy_Sensor, ArchitecturalAnalysisPkg, ArchitecturalAnalysisPkg, false, OMAnimatedOccupancy_Sensor)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\Network_Simulation\Occupancy_Sensor.cpp
*********************************************************************/
