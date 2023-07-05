/********************************************************************
	Rhapsody	: 9.0 
	Login		: 20181759
	Component	: DefaultComponent 
	Configuration 	: Network_Simulation
	Model Element	: Fire_Sensor
//!	Generated Date	: Fri, 23, Jun 2023  
	File Path	: DefaultComponent\Network_Simulation\Fire_Sensor.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "Fire_Sensor.h"
//#[ ignore
#define ArchitecturalAnalysisPkg_Fire_Sensor_Fire_Sensor_SERIALIZE OM_NO_OP
//#]

//## package ArchitecturalAnalysisPkg

//## class Fire_Sensor
Fire_Sensor::Fire_Sensor() {
    NOTIFY_CONSTRUCTOR(Fire_Sensor, Fire_Sensor(), 0, ArchitecturalAnalysisPkg_Fire_Sensor_Fire_Sensor_SERIALIZE);
}

Fire_Sensor::~Fire_Sensor() {
    NOTIFY_DESTRUCTOR(~Fire_Sensor, true);
}

bool Fire_Sensor::getIsFire() const {
    return isFire;
}

void Fire_Sensor::setIsFire(bool p_isFire) {
    isFire = p_isFire;
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedFire_Sensor::serializeAttributes(AOMSAttributes* aomsAttributes) const {
    aomsAttributes->addAttribute("isFire", x2String(myReal->isFire));
}
//#]

IMPLEMENT_META_P(Fire_Sensor, ArchitecturalAnalysisPkg, ArchitecturalAnalysisPkg, false, OMAnimatedFire_Sensor)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\Network_Simulation\Fire_Sensor.cpp
*********************************************************************/
