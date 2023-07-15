/********************************************************************
	Rhapsody	: 9.0 
	Login		: Administrator
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Occupancy_Sensor
//!	Generated Date	: Sat, 15, Jul 2023  
	File Path	: DefaultComponent\DefaultConfig\Occupancy_Sensor.cpp
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

#define ArchitecturalAnalysisPkg_Occupancy_Sensor_getOccupied_SERIALIZE OM_NO_OP

#define ArchitecturalAnalysisPkg_Occupancy_Sensor_setOccupied_SERIALIZE aomsmethod->addAttribute("arg_occupied", x2String(arg_occupied));
//#]

//## package ArchitecturalAnalysisPkg

//## class Occupancy_Sensor
//#[ ignore
Occupancy_Sensor::pOS_C::pOS_C() : _p_(0) {
    itsI_OS = NULL;
}

Occupancy_Sensor::pOS_C::~pOS_C() {
    cleanUpRelations();
}

void Occupancy_Sensor::pOS_C::connectOccupancy_Sensor(Occupancy_Sensor* part) {
    setItsI_OS(part);
    
}

I_OS* Occupancy_Sensor::pOS_C::getItsI_OS() {
    return this;
}

bool Occupancy_Sensor::pOS_C::getOccupied() {
    bool res = false;
    if (itsI_OS != NULL) {
        res = itsI_OS->getOccupied();
    }
    return res;
}

void Occupancy_Sensor::pOS_C::setOccupied(bool arg_occupied) {
    
    if (itsI_OS != NULL) {
        itsI_OS->setOccupied(arg_occupied);
    }
    
}

void Occupancy_Sensor::pOS_C::setItsI_OS(I_OS* p_I_OS) {
    itsI_OS = p_I_OS;
}

void Occupancy_Sensor::pOS_C::cleanUpRelations() {
    if(itsI_OS != NULL)
        {
            itsI_OS = NULL;
        }
}
//#]

Occupancy_Sensor::Occupancy_Sensor() : occupied(false) {
    NOTIFY_CONSTRUCTOR(Occupancy_Sensor, Occupancy_Sensor(), 0, ArchitecturalAnalysisPkg_Occupancy_Sensor_Occupancy_Sensor_SERIALIZE);
    itsNetwork = NULL;
    initRelations();
}

Occupancy_Sensor::~Occupancy_Sensor() {
    NOTIFY_DESTRUCTOR(~Occupancy_Sensor, false);
    cleanUpRelations();
}

bool Occupancy_Sensor::getOccupied() {
    NOTIFY_OPERATION(getOccupied, getOccupied(), 0, ArchitecturalAnalysisPkg_Occupancy_Sensor_getOccupied_SERIALIZE);
    //#[ operation getOccupied()
    return occupied;
    //#]
}

void Occupancy_Sensor::setOccupied(bool arg_occupied) {
    NOTIFY_OPERATION(setOccupied, setOccupied(bool), 1, ArchitecturalAnalysisPkg_Occupancy_Sensor_setOccupied_SERIALIZE);
    //#[ operation setOccupied(bool)
    occupied=arg_occupied;
    //#]
}

Occupancy_Sensor::pOS_C* Occupancy_Sensor::getPOS() const {
    return (Occupancy_Sensor::pOS_C*) &pOS;
}

Occupancy_Sensor::pOS_C* Occupancy_Sensor::get_pOS() const {
    return (Occupancy_Sensor::pOS_C*) &pOS;
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

void Occupancy_Sensor::initRelations() {
    if (get_pOS() != NULL) {
        get_pOS()->connectOccupancy_Sensor(this);
    }
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
void OMAnimatedOccupancy_Sensor::serializeAttributes(AOMSAttributes* aomsAttributes) const {
    aomsAttributes->addAttribute("occupied", x2String(myReal->occupied));
    OMAnimatedI_OS::serializeAttributes(aomsAttributes);
}

void OMAnimatedOccupancy_Sensor::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsNetwork", false, true);
    if(myReal->itsNetwork)
        {
            aomsRelations->ADD_ITEM(myReal->itsNetwork);
        }
    OMAnimatedI_OS::serializeRelations(aomsRelations);
}
//#]

IMPLEMENT_META_S_P(Occupancy_Sensor, ArchitecturalAnalysisPkg, false, I_OS, OMAnimatedI_OS, OMAnimatedOccupancy_Sensor)

OMINIT_SUPERCLASS(I_OS, OMAnimatedI_OS)

OMREGISTER_CLASS
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Occupancy_Sensor.cpp
*********************************************************************/
