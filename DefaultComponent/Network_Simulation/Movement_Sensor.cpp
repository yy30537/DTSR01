/********************************************************************
	Rhapsody	: 9.0 
	Login		: Administrator
	Component	: DefaultComponent 
	Configuration 	: Network_Simulation
	Model Element	: Movement_Sensor
//!	Generated Date	: Sun, 16, Jul 2023  
	File Path	: DefaultComponent\Network_Simulation\Movement_Sensor.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "Movement_Sensor.h"
//## link itsNetwork
#include "Network.h"
//#[ ignore
#define ArchitecturalAnalysisPkg_Movement_Sensor_Movement_Sensor_SERIALIZE OM_NO_OP

#define ArchitecturalAnalysisPkg_Movement_Sensor_getMM_SERIALIZE OM_NO_OP

#define ArchitecturalAnalysisPkg_Movement_Sensor_setMM_SERIALIZE aomsmethod->addAttribute("arg", x2String(arg));
//#]

//## package ArchitecturalAnalysisPkg

//## class Movement_Sensor
//#[ ignore
Movement_Sensor::pMS_C::pMS_C() : _p_(0) {
    itsI_MS = NULL;
}

Movement_Sensor::pMS_C::~pMS_C() {
    cleanUpRelations();
}

void Movement_Sensor::pMS_C::connectMovement_Sensor(Movement_Sensor* part) {
    setItsI_MS(part);
    
}

I_MS* Movement_Sensor::pMS_C::getItsI_MS() {
    return this;
}

bool Movement_Sensor::pMS_C::getMM() {
    bool res = false;
    if (itsI_MS != NULL) {
        res = itsI_MS->getMM();
    }
    return res;
}

void Movement_Sensor::pMS_C::setMM(bool arg) {
    
    if (itsI_MS != NULL) {
        itsI_MS->setMM(arg);
    }
    
}

void Movement_Sensor::pMS_C::setItsI_MS(I_MS* p_I_MS) {
    itsI_MS = p_I_MS;
}

void Movement_Sensor::pMS_C::cleanUpRelations() {
    if(itsI_MS != NULL)
        {
            itsI_MS = NULL;
        }
}
//#]

Movement_Sensor::Movement_Sensor() : movementDetected(false) {
    NOTIFY_CONSTRUCTOR(Movement_Sensor, Movement_Sensor(), 0, ArchitecturalAnalysisPkg_Movement_Sensor_Movement_Sensor_SERIALIZE);
    itsNetwork = NULL;
    initRelations();
}

Movement_Sensor::~Movement_Sensor() {
    NOTIFY_DESTRUCTOR(~Movement_Sensor, false);
    cleanUpRelations();
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

bool Movement_Sensor::getMM() {
    NOTIFY_OPERATION(getMM, getMM(), 0, ArchitecturalAnalysisPkg_Movement_Sensor_getMM_SERIALIZE);
    //#[ operation getMM()
    return movementDetected;
    //#]
}

void Movement_Sensor::setMM(bool arg) {
    NOTIFY_OPERATION(setMM, setMM(bool), 1, ArchitecturalAnalysisPkg_Movement_Sensor_setMM_SERIALIZE);
    //#[ operation setMM(bool)
    movementDetected=arg;
    //#]
}

Movement_Sensor::pMS_C* Movement_Sensor::getPMS() const {
    return (Movement_Sensor::pMS_C*) &pMS;
}

Movement_Sensor::pMS_C* Movement_Sensor::get_pMS() const {
    return (Movement_Sensor::pMS_C*) &pMS;
}

bool Movement_Sensor::getMovementDetected() const {
    return movementDetected;
}

void Movement_Sensor::setMovementDetected(bool p_movementDetected) {
    movementDetected = p_movementDetected;
    NOTIFY_SET_OPERATION;
}

void Movement_Sensor::initRelations() {
    if (get_pMS() != NULL) {
        get_pMS()->connectMovement_Sensor(this);
    }
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedMovement_Sensor::serializeAttributes(AOMSAttributes* aomsAttributes) const {
    aomsAttributes->addAttribute("movementDetected", x2String(myReal->movementDetected));
    OMAnimatedI_MS::serializeAttributes(aomsAttributes);
}

void OMAnimatedMovement_Sensor::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsNetwork", false, true);
    if(myReal->itsNetwork)
        {
            aomsRelations->ADD_ITEM(myReal->itsNetwork);
        }
    OMAnimatedI_MS::serializeRelations(aomsRelations);
}
//#]

IMPLEMENT_META_S_P(Movement_Sensor, ArchitecturalAnalysisPkg, false, I_MS, OMAnimatedI_MS, OMAnimatedMovement_Sensor)

OMINIT_SUPERCLASS(I_MS, OMAnimatedI_MS)

OMREGISTER_CLASS
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\Network_Simulation\Movement_Sensor.cpp
*********************************************************************/
