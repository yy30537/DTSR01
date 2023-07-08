/********************************************************************
	Rhapsody	: 9.0 
	Login		: Yang
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Occupancy_Sensor
//!	Generated Date	: Sat, 8, Jul 2023  
	File Path	: DefaultComponent\DefaultConfig\Occupancy_Sensor.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "Occupancy_Sensor.h"
//## link itsHVAC
#include "HVAC.h"
//## link itsNetwork
#include "Network.h"
//#[ ignore
#define ArchitecturalAnalysisPkg_Occupancy_Sensor_Occupancy_Sensor_SERIALIZE OM_NO_OP
//#]

//## package ArchitecturalAnalysisPkg

//## class Occupancy_Sensor
Occupancy_Sensor::Occupancy_Sensor() {
    NOTIFY_CONSTRUCTOR(Occupancy_Sensor, Occupancy_Sensor(), 0, ArchitecturalAnalysisPkg_Occupancy_Sensor_Occupancy_Sensor_SERIALIZE);
    itsHVAC = NULL;
    itsNetwork = NULL;
}

Occupancy_Sensor::~Occupancy_Sensor() {
    NOTIFY_DESTRUCTOR(~Occupancy_Sensor, true);
    cleanUpRelations();
}

bool Occupancy_Sensor::getDetectOccupantLeaves() const {
    return detectOccupantLeaves;
}

void Occupancy_Sensor::setDetectOccupantLeaves(bool p_detectOccupantLeaves) {
    detectOccupantLeaves = p_detectOccupantLeaves;
}

bool Occupancy_Sensor::getNewOccupantsDetected() const {
    return newOccupantsDetected;
}

void Occupancy_Sensor::setNewOccupantsDetected(bool p_newOccupantsDetected) {
    newOccupantsDetected = p_newOccupantsDetected;
}

HVAC* Occupancy_Sensor::getItsHVAC() const {
    return itsHVAC;
}

void Occupancy_Sensor::setItsHVAC(HVAC* p_HVAC) {
    if(p_HVAC != NULL)
        {
            p_HVAC->_setItsOccupancy_Sensor(this);
        }
    _setItsHVAC(p_HVAC);
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
    if(itsHVAC != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsHVAC");
            Occupancy_Sensor* p_Occupancy_Sensor = itsHVAC->getItsOccupancy_Sensor();
            if(p_Occupancy_Sensor != NULL)
                {
                    itsHVAC->__setItsOccupancy_Sensor(NULL);
                }
            itsHVAC = NULL;
        }
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

void Occupancy_Sensor::__setItsHVAC(HVAC* p_HVAC) {
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

void Occupancy_Sensor::_setItsHVAC(HVAC* p_HVAC) {
    if(itsHVAC != NULL)
        {
            itsHVAC->__setItsOccupancy_Sensor(NULL);
        }
    __setItsHVAC(p_HVAC);
}

void Occupancy_Sensor::_clearItsHVAC() {
    NOTIFY_RELATION_CLEARED("itsHVAC");
    itsHVAC = NULL;
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
void OMAnimatedOccupancy_Sensor::serializeAttributes(AOMSAttributes* aomsAttributes) const {
    aomsAttributes->addAttribute("newOccupantsDetected", x2String(myReal->newOccupantsDetected));
    aomsAttributes->addAttribute("detectOccupantLeaves", x2String(myReal->detectOccupantLeaves));
}

void OMAnimatedOccupancy_Sensor::serializeRelations(AOMSRelations* aomsRelations) const {
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

IMPLEMENT_META_P(Occupancy_Sensor, ArchitecturalAnalysisPkg, ArchitecturalAnalysisPkg, false, OMAnimatedOccupancy_Sensor)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Occupancy_Sensor.cpp
*********************************************************************/
