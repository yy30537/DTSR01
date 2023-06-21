/********************************************************************
	Rhapsody	: 9.0 
	Login		: Yang
	Component	: DefaultComponent 
	Configuration 	: Network_Simulation
	Model Element	: CO2_Sensor
//!	Generated Date	: Wed, 21, Jun 2023  
	File Path	: DefaultComponent\Network_Simulation\CO2_Sensor.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "CO2_Sensor.h"
//## link itsNetwork
#include "Network.h"
//#[ ignore
#define ArchitecturalAnalysisPkg_CO2_Sensor_CO2_Sensor_SERIALIZE OM_NO_OP
//#]

//## package ArchitecturalAnalysisPkg

//## class CO2_Sensor
CO2_Sensor::CO2_Sensor() {
    NOTIFY_CONSTRUCTOR(CO2_Sensor, CO2_Sensor(), 0, ArchitecturalAnalysisPkg_CO2_Sensor_CO2_Sensor_SERIALIZE);
    itsNetwork = NULL;
}

CO2_Sensor::~CO2_Sensor() {
    NOTIFY_DESTRUCTOR(~CO2_Sensor, true);
    cleanUpRelations();
}

Network* CO2_Sensor::getItsNetwork() const {
    return itsNetwork;
}

void CO2_Sensor::setItsNetwork(Network* p_Network) {
    if(p_Network != NULL)
        {
            p_Network->_setItsCO2_Sensor(this);
        }
    _setItsNetwork(p_Network);
}

void CO2_Sensor::cleanUpRelations() {
    if(itsNetwork != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsNetwork");
            CO2_Sensor* p_CO2_Sensor = itsNetwork->getItsCO2_Sensor();
            if(p_CO2_Sensor != NULL)
                {
                    itsNetwork->__setItsCO2_Sensor(NULL);
                }
            itsNetwork = NULL;
        }
}

void CO2_Sensor::__setItsNetwork(Network* p_Network) {
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

void CO2_Sensor::_setItsNetwork(Network* p_Network) {
    if(itsNetwork != NULL)
        {
            itsNetwork->__setItsCO2_Sensor(NULL);
        }
    __setItsNetwork(p_Network);
}

void CO2_Sensor::_clearItsNetwork() {
    NOTIFY_RELATION_CLEARED("itsNetwork");
    itsNetwork = NULL;
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedCO2_Sensor::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsNetwork", false, true);
    if(myReal->itsNetwork)
        {
            aomsRelations->ADD_ITEM(myReal->itsNetwork);
        }
}
//#]

IMPLEMENT_META_P(CO2_Sensor, ArchitecturalAnalysisPkg, ArchitecturalAnalysisPkg, false, OMAnimatedCO2_Sensor)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\Network_Simulation\CO2_Sensor.cpp
*********************************************************************/
