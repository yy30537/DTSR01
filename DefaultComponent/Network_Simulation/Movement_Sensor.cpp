/********************************************************************
	Rhapsody	: 9.0 
	Login		: 20181759
	Component	: DefaultComponent 
	Configuration 	: Network_Simulation
	Model Element	: Movement_Sensor
//!	Generated Date	: Fri, 23, Jun 2023  
	File Path	: DefaultComponent\Network_Simulation\Movement_Sensor.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "Movement_Sensor.h"
//## link itsHVAC
#include "HVAC.h"
//## link itsNetwork
#include "Network.h"
//#[ ignore
#define ArchitecturalAnalysisPkg_Movement_Sensor_Movement_Sensor_SERIALIZE OM_NO_OP
//#]

//## package ArchitecturalAnalysisPkg

//## class Movement_Sensor
Movement_Sensor::Movement_Sensor() : isMovement(0) {
    NOTIFY_CONSTRUCTOR(Movement_Sensor, Movement_Sensor(), 0, ArchitecturalAnalysisPkg_Movement_Sensor_Movement_Sensor_SERIALIZE);
    itsHVAC = NULL;
    itsNetwork = NULL;
}

Movement_Sensor::~Movement_Sensor() {
    NOTIFY_DESTRUCTOR(~Movement_Sensor, true);
    cleanUpRelations();
}

bool Movement_Sensor::getIsMovement() const {
    return isMovement;
}

void Movement_Sensor::setIsMovement(bool p_isMovement) {
    isMovement = p_isMovement;
}

HVAC* Movement_Sensor::getItsHVAC() const {
    return itsHVAC;
}

void Movement_Sensor::setItsHVAC(HVAC* p_HVAC) {
    if(p_HVAC != NULL)
        {
            p_HVAC->_setItsMovement_Sensor(this);
        }
    _setItsHVAC(p_HVAC);
}

Network* Movement_Sensor::getItsNetwork() const {
    return itsNetwork;
}

void Movement_Sensor::setItsNetwork(Network* p_Network) {
    if(p_Network != NULL)
        {
            p_Network->_setItsMovement_Sensor(this);
        }
    _setItsNetwork(p_Network);
}

void Movement_Sensor::cleanUpRelations() {
    if(itsHVAC != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsHVAC");
            Movement_Sensor* p_Movement_Sensor = itsHVAC->getItsMovement_Sensor();
            if(p_Movement_Sensor != NULL)
                {
                    itsHVAC->__setItsMovement_Sensor(NULL);
                }
            itsHVAC = NULL;
        }
    if(itsNetwork != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsNetwork");
            Movement_Sensor* p_Movement_Sensor = itsNetwork->getItsMovement_Sensor();
            if(p_Movement_Sensor != NULL)
                {
                    itsNetwork->__setItsMovement_Sensor(NULL);
                }
            itsNetwork = NULL;
        }
}

void Movement_Sensor::__setItsHVAC(HVAC* p_HVAC) {
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

void Movement_Sensor::_setItsHVAC(HVAC* p_HVAC) {
    if(itsHVAC != NULL)
        {
            itsHVAC->__setItsMovement_Sensor(NULL);
        }
    __setItsHVAC(p_HVAC);
}

void Movement_Sensor::_clearItsHVAC() {
    NOTIFY_RELATION_CLEARED("itsHVAC");
    itsHVAC = NULL;
}

void Movement_Sensor::__setItsNetwork(Network* p_Network) {
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

void Movement_Sensor::_setItsNetwork(Network* p_Network) {
    if(itsNetwork != NULL)
        {
            itsNetwork->__setItsMovement_Sensor(NULL);
        }
    __setItsNetwork(p_Network);
}

void Movement_Sensor::_clearItsNetwork() {
    NOTIFY_RELATION_CLEARED("itsNetwork");
    itsNetwork = NULL;
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedMovement_Sensor::serializeAttributes(AOMSAttributes* aomsAttributes) const {
    aomsAttributes->addAttribute("isMovement", x2String(myReal->isMovement));
}

void OMAnimatedMovement_Sensor::serializeRelations(AOMSRelations* aomsRelations) const {
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

IMPLEMENT_META_P(Movement_Sensor, ArchitecturalAnalysisPkg, ArchitecturalAnalysisPkg, false, OMAnimatedMovement_Sensor)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\Network_Simulation\Movement_Sensor.cpp
*********************************************************************/
