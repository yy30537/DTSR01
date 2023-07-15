/********************************************************************
	Rhapsody	: 9.0 
	Login		: Yang
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Fire_Sensor
//!	Generated Date	: Sat, 15, Jul 2023  
	File Path	: DefaultComponent\DefaultConfig\Fire_Sensor.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "Fire_Sensor.h"
//#[ ignore
#define ArchitecturalAnalysisPkg_Fire_Sensor_Fire_Sensor_SERIALIZE OM_NO_OP

#define ArchitecturalAnalysisPkg_Fire_Sensor_getState_SERIALIZE OM_NO_OP

#define ArchitecturalAnalysisPkg_Fire_Sensor_setState_SERIALIZE aomsmethod->addAttribute("argState", x2String(argState));
//#]

//## package ArchitecturalAnalysisPkg

//## class Fire_Sensor
//#[ ignore
Fire_Sensor::pFS_C::pFS_C() : _p_(0) {
    itsI_FS = NULL;
}

Fire_Sensor::pFS_C::~pFS_C() {
    cleanUpRelations();
}

void Fire_Sensor::pFS_C::connectFire_Sensor(Fire_Sensor* part) {
    setItsI_FS(part);
    
}

I_FS* Fire_Sensor::pFS_C::getItsI_FS() {
    return this;
}

bool Fire_Sensor::pFS_C::getState() {
    bool res = false;
    if (itsI_FS != NULL) {
        res = itsI_FS->getState();
    }
    return res;
}

void Fire_Sensor::pFS_C::setState(bool argState) {
    
    if (itsI_FS != NULL) {
        itsI_FS->setState(argState);
    }
    
}

void Fire_Sensor::pFS_C::setItsI_FS(I_FS* p_I_FS) {
    itsI_FS = p_I_FS;
}

void Fire_Sensor::pFS_C::cleanUpRelations() {
    if(itsI_FS != NULL)
        {
            itsI_FS = NULL;
        }
}
//#]

Fire_Sensor::Fire_Sensor() : state(false) {
    NOTIFY_CONSTRUCTOR(Fire_Sensor, Fire_Sensor(), 0, ArchitecturalAnalysisPkg_Fire_Sensor_Fire_Sensor_SERIALIZE);
    initRelations();
}

Fire_Sensor::~Fire_Sensor() {
    NOTIFY_DESTRUCTOR(~Fire_Sensor, false);
}

bool Fire_Sensor::getState() {
    NOTIFY_OPERATION(getState, getState(), 0, ArchitecturalAnalysisPkg_Fire_Sensor_getState_SERIALIZE);
    //#[ operation getState()
    return state;
    //#]
}

void Fire_Sensor::setState(bool argState) {
    NOTIFY_OPERATION(setState, setState(bool), 1, ArchitecturalAnalysisPkg_Fire_Sensor_setState_SERIALIZE);
    //#[ operation setState(bool)
    state=argState;
    //#]
}

Fire_Sensor::pFS_C* Fire_Sensor::getPFS() const {
    return (Fire_Sensor::pFS_C*) &pFS;
}

Fire_Sensor::pFS_C* Fire_Sensor::get_pFS() const {
    return (Fire_Sensor::pFS_C*) &pFS;
}

void Fire_Sensor::initRelations() {
    if (get_pFS() != NULL) {
        get_pFS()->connectFire_Sensor(this);
    }
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedFire_Sensor::serializeAttributes(AOMSAttributes* aomsAttributes) const {
    aomsAttributes->addAttribute("state", x2String(myReal->state));
    OMAnimatedI_FS::serializeAttributes(aomsAttributes);
}

void OMAnimatedFire_Sensor::serializeRelations(AOMSRelations* aomsRelations) const {
    OMAnimatedI_FS::serializeRelations(aomsRelations);
}
//#]

IMPLEMENT_META_S_P(Fire_Sensor, ArchitecturalAnalysisPkg, false, I_FS, OMAnimatedI_FS, OMAnimatedFire_Sensor)

OMINIT_SUPERCLASS(I_FS, OMAnimatedI_FS)

OMREGISTER_CLASS
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Fire_Sensor.cpp
*********************************************************************/
