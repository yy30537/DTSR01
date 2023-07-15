/********************************************************************
	Rhapsody	: 9.0 
	Login		: Administrator
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: CO2_Sensor
//!	Generated Date	: Sat, 15, Jul 2023  
	File Path	: DefaultComponent\DefaultConfig\CO2_Sensor.cpp
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

#define ArchitecturalAnalysisPkg_CO2_Sensor_get_CO2_Alarm_SERIALIZE OM_NO_OP

#define ArchitecturalAnalysisPkg_CO2_Sensor_set_CO2_Alarm_SERIALIZE aomsmethod->addAttribute("arg_CO2_Alarm_state", x2String(arg_CO2_Alarm_state));
//#]

//## package ArchitecturalAnalysisPkg

//## class CO2_Sensor
//#[ ignore
CO2_Sensor::pCO2_C::pCO2_C() : _p_(0) {
    itsI_CO2 = NULL;
}

CO2_Sensor::pCO2_C::~pCO2_C() {
    cleanUpRelations();
}

void CO2_Sensor::pCO2_C::connectCO2_Sensor(CO2_Sensor* part) {
    setItsI_CO2(part);
    
}

I_CO2* CO2_Sensor::pCO2_C::getItsI_CO2() {
    return this;
}

bool CO2_Sensor::pCO2_C::get_CO2_Alarm() {
    bool res = false;
    if (itsI_CO2 != NULL) {
        res = itsI_CO2->get_CO2_Alarm();
    }
    return res;
}

void CO2_Sensor::pCO2_C::set_CO2_Alarm(bool arg_CO2_Alarm_state) {
    
    if (itsI_CO2 != NULL) {
        itsI_CO2->set_CO2_Alarm(arg_CO2_Alarm_state);
    }
    
}

void CO2_Sensor::pCO2_C::setItsI_CO2(I_CO2* p_I_CO2) {
    itsI_CO2 = p_I_CO2;
}

void CO2_Sensor::pCO2_C::cleanUpRelations() {
    if(itsI_CO2 != NULL)
        {
            itsI_CO2 = NULL;
        }
}
//#]

CO2_Sensor::CO2_Sensor() {
    NOTIFY_CONSTRUCTOR(CO2_Sensor, CO2_Sensor(), 0, ArchitecturalAnalysisPkg_CO2_Sensor_CO2_Sensor_SERIALIZE);
    itsNetwork = NULL;
    initRelations();
}

CO2_Sensor::~CO2_Sensor() {
    NOTIFY_DESTRUCTOR(~CO2_Sensor, false);
    cleanUpRelations();
}

bool CO2_Sensor::get_CO2_Alarm() {
    NOTIFY_OPERATION(get_CO2_Alarm, get_CO2_Alarm(), 0, ArchitecturalAnalysisPkg_CO2_Sensor_get_CO2_Alarm_SERIALIZE);
    //#[ operation get_CO2_Alarm()
    std::cout<<"get_CO2_Alarm\n";
    return CO2_Alarm_state;
    //#]
}

void CO2_Sensor::set_CO2_Alarm(bool arg_CO2_Alarm_state) {
    NOTIFY_OPERATION(set_CO2_Alarm, set_CO2_Alarm(bool), 1, ArchitecturalAnalysisPkg_CO2_Sensor_set_CO2_Alarm_SERIALIZE);
    //#[ operation set_CO2_Alarm(bool)
    std::cout<<"set_CO2_Alarm_state()\n";
    CO2_Alarm_state=arg_CO2_Alarm_state;
    //#]
}

CO2_Sensor::pCO2_C* CO2_Sensor::getPCO2() const {
    return (CO2_Sensor::pCO2_C*) &pCO2;
}

CO2_Sensor::pCO2_C* CO2_Sensor::get_pCO2() const {
    return (CO2_Sensor::pCO2_C*) &pCO2;
}

bool CO2_Sensor::getCO2_Alarm_state() const {
    return CO2_Alarm_state;
}

void CO2_Sensor::setCO2_Alarm_state(bool p_CO2_Alarm_state) {
    CO2_Alarm_state = p_CO2_Alarm_state;
    NOTIFY_SET_OPERATION;
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

void CO2_Sensor::initRelations() {
    if (get_pCO2() != NULL) {
        get_pCO2()->connectCO2_Sensor(this);
    }
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
void OMAnimatedCO2_Sensor::serializeAttributes(AOMSAttributes* aomsAttributes) const {
    aomsAttributes->addAttribute("CO2_Alarm_state", x2String(myReal->CO2_Alarm_state));
    OMAnimatedI_CO2::serializeAttributes(aomsAttributes);
}

void OMAnimatedCO2_Sensor::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsNetwork", false, true);
    if(myReal->itsNetwork)
        {
            aomsRelations->ADD_ITEM(myReal->itsNetwork);
        }
    OMAnimatedI_CO2::serializeRelations(aomsRelations);
}
//#]

IMPLEMENT_META_S_P(CO2_Sensor, ArchitecturalAnalysisPkg, false, I_CO2, OMAnimatedI_CO2, OMAnimatedCO2_Sensor)

OMINIT_SUPERCLASS(I_CO2, OMAnimatedI_CO2)

OMREGISTER_CLASS
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\CO2_Sensor.cpp
*********************************************************************/
