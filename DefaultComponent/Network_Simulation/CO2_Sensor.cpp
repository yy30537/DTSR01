/********************************************************************
	Rhapsody	: 9.0 
	Login		: 20181759
	Component	: DefaultComponent 
	Configuration 	: Network_Simulation
	Model Element	: CO2_Sensor
//!	Generated Date	: Fri, 23, Jun 2023  
	File Path	: DefaultComponent\Network_Simulation\CO2_Sensor.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "CO2_Sensor.h"
//## link itsHVAC
#include "HVAC.h"
//## link itsNetwork
#include "Network.h"
//#[ ignore
#define ArchitecturalAnalysisPkg_CO2_Sensor_CO2_Sensor_SERIALIZE OM_NO_OP
//#]

//## package ArchitecturalAnalysisPkg

//## class CO2_Sensor
CO2_Sensor::CO2_Sensor() {
    NOTIFY_CONSTRUCTOR(CO2_Sensor, CO2_Sensor(), 0, ArchitecturalAnalysisPkg_CO2_Sensor_CO2_Sensor_SERIALIZE);
    itsHVAC = NULL;
    itsNetwork = NULL;
}

CO2_Sensor::~CO2_Sensor() {
    NOTIFY_DESTRUCTOR(~CO2_Sensor, true);
    cleanUpRelations();
}

int CO2_Sensor::getCO2Level() const {
    return CO2Level;
}

void CO2_Sensor::setCO2Level(int p_CO2Level) {
    CO2Level = p_CO2Level;
}

HVAC* CO2_Sensor::getItsHVAC() const {
    return itsHVAC;
}

void CO2_Sensor::setItsHVAC(HVAC* p_HVAC) {
    if(p_HVAC != NULL)
        {
            p_HVAC->_setItsCO2_Sensor(this);
        }
    _setItsHVAC(p_HVAC);
}

Network* CO2_Sensor::getItsNetwork() const {
    return itsNetwork;
}

void CO2_Sensor::setItsNetwork(Network* p_Network) {
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

void CO2_Sensor::cleanUpRelations() {
    if(itsHVAC != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsHVAC");
            CO2_Sensor* p_CO2_Sensor = itsHVAC->getItsCO2_Sensor();
            if(p_CO2_Sensor != NULL)
                {
                    itsHVAC->__setItsCO2_Sensor(NULL);
                }
            itsHVAC = NULL;
        }
    if(itsNetwork != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsNetwork");
            itsNetwork = NULL;
        }
}

void CO2_Sensor::__setItsHVAC(HVAC* p_HVAC) {
    itsHVAC = p_HVAC;
    if(p_HVAC != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsHVAC", p_HVAC, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsHVAC");
        }
}

void CO2_Sensor::_setItsHVAC(HVAC* p_HVAC) {
    if(itsHVAC != NULL)
        {
            itsHVAC->__setItsCO2_Sensor(NULL);
        }
    __setItsHVAC(p_HVAC);
}

void CO2_Sensor::_clearItsHVAC() {
    NOTIFY_RELATION_CLEARED("itsHVAC");
    itsHVAC = NULL;
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedCO2_Sensor::serializeAttributes(AOMSAttributes* aomsAttributes) const {
    aomsAttributes->addAttribute("CO2Level", x2String(myReal->CO2Level));
}

void OMAnimatedCO2_Sensor::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsNetwork", false, true);
    if(myReal->itsNetwork)
        {
            aomsRelations->ADD_ITEM(myReal->itsNetwork);
        }
    aomsRelations->addRelation("itsHVAC", false, true);
    if(myReal->itsHVAC)
        {
            aomsRelations->ADD_ITEM(myReal->itsHVAC);
        }
}
//#]

IMPLEMENT_META_P(CO2_Sensor, ArchitecturalAnalysisPkg, ArchitecturalAnalysisPkg, false, OMAnimatedCO2_Sensor)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\Network_Simulation\CO2_Sensor.cpp
*********************************************************************/
