/********************************************************************
	Rhapsody	: 9.0 
	Login		: 20181759
	Component	: DefaultComponent 
	Configuration 	: Network_Simulation
	Model Element	: HVAC
//!	Generated Date	: Fri, 23, Jun 2023  
	File Path	: DefaultComponent\Network_Simulation\HVAC.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "HVAC.h"
//## link itsCO2_Sensor
#include "CO2_Sensor.h"
//## link itsMovement_Sensor
#include "Movement_Sensor.h"
//## link itsNetwork
#include "Network.h"
//## link itsOccupancy_Sensor
#include "Occupancy_Sensor.h"
//## link itsRoom_Touch_Panel
#include "Room_Touch_Panel.h"
//#[ ignore
#define ArchitecturalAnalysisPkg_HVAC_HVAC_SERIALIZE OM_NO_OP

#define ArchitecturalAnalysisPkg_HVAC_setTemperature_SERIALIZE OM_NO_OP

#define ArchitecturalAnalysisPkg_HVAC_turnOffCooling_SERIALIZE OM_NO_OP

#define ArchitecturalAnalysisPkg_HVAC_turnOffHeating_SERIALIZE OM_NO_OP

#define ArchitecturalAnalysisPkg_HVAC_turnOffVentilation_SERIALIZE OM_NO_OP

#define ArchitecturalAnalysisPkg_HVAC_turnOnCooling_SERIALIZE OM_NO_OP

#define ArchitecturalAnalysisPkg_HVAC_turnOnHeating_SERIALIZE OM_NO_OP

#define ArchitecturalAnalysisPkg_HVAC_turnOnVentilation_SERIALIZE OM_NO_OP
//#]

//## package ArchitecturalAnalysisPkg

//## class HVAC
HVAC::HVAC() : coolingOn(0), heatingOn(0), ventilationOn(0) {
    NOTIFY_CONSTRUCTOR(HVAC, HVAC(), 0, ArchitecturalAnalysisPkg_HVAC_HVAC_SERIALIZE);
    itsCO2_Sensor = NULL;
    itsMovement_Sensor = NULL;
    itsNetwork = NULL;
    itsOccupancy_Sensor = NULL;
    itsRoom_Touch_Panel = NULL;
}

HVAC::~HVAC() {
    NOTIFY_DESTRUCTOR(~HVAC, true);
    cleanUpRelations();
}

void HVAC::setTemperature() {
    NOTIFY_OPERATION(setTemperature, setTemperature(), 0, ArchitecturalAnalysisPkg_HVAC_setTemperature_SERIALIZE);
    //#[ operation setTemperature()
    //#]
}

void HVAC::turnOffCooling() {
    NOTIFY_OPERATION(turnOffCooling, turnOffCooling(), 0, ArchitecturalAnalysisPkg_HVAC_turnOffCooling_SERIALIZE);
    //#[ operation turnOffCooling()
    //#]
}

void HVAC::turnOffHeating() {
    NOTIFY_OPERATION(turnOffHeating, turnOffHeating(), 0, ArchitecturalAnalysisPkg_HVAC_turnOffHeating_SERIALIZE);
    //#[ operation turnOffHeating()
    //#]
}

void HVAC::turnOffVentilation() {
    NOTIFY_OPERATION(turnOffVentilation, turnOffVentilation(), 0, ArchitecturalAnalysisPkg_HVAC_turnOffVentilation_SERIALIZE);
    //#[ operation turnOffVentilation()
    //#]
}

void HVAC::turnOnCooling() {
    NOTIFY_OPERATION(turnOnCooling, turnOnCooling(), 0, ArchitecturalAnalysisPkg_HVAC_turnOnCooling_SERIALIZE);
    //#[ operation turnOnCooling()
    //#]
}

void HVAC::turnOnHeating() {
    NOTIFY_OPERATION(turnOnHeating, turnOnHeating(), 0, ArchitecturalAnalysisPkg_HVAC_turnOnHeating_SERIALIZE);
    //#[ operation turnOnHeating()
    //#]
}

void HVAC::turnOnVentilation() {
    NOTIFY_OPERATION(turnOnVentilation, turnOnVentilation(), 0, ArchitecturalAnalysisPkg_HVAC_turnOnVentilation_SERIALIZE);
    //#[ operation turnOnVentilation()
    //#]
}

bool HVAC::getCoolingOn() const {
    return coolingOn;
}

void HVAC::setCoolingOn(bool p_coolingOn) {
    coolingOn = p_coolingOn;
}

bool HVAC::getHeatingOn() const {
    return heatingOn;
}

void HVAC::setHeatingOn(bool p_heatingOn) {
    heatingOn = p_heatingOn;
}

int HVAC::getTemperature() const {
    return temperature;
}

void HVAC::setTemperature(int p_temperature) {
    temperature = p_temperature;
}

bool HVAC::getVentilationOn() const {
    return ventilationOn;
}

void HVAC::setVentilationOn(bool p_ventilationOn) {
    ventilationOn = p_ventilationOn;
}

CO2_Sensor* HVAC::getItsCO2_Sensor() const {
    return itsCO2_Sensor;
}

void HVAC::setItsCO2_Sensor(CO2_Sensor* p_CO2_Sensor) {
    if(p_CO2_Sensor != NULL)
        {
            p_CO2_Sensor->_setItsHVAC(this);
        }
    _setItsCO2_Sensor(p_CO2_Sensor);
}

Movement_Sensor* HVAC::getItsMovement_Sensor() const {
    return itsMovement_Sensor;
}

void HVAC::setItsMovement_Sensor(Movement_Sensor* p_Movement_Sensor) {
    if(p_Movement_Sensor != NULL)
        {
            p_Movement_Sensor->_setItsHVAC(this);
        }
    _setItsMovement_Sensor(p_Movement_Sensor);
}

Network* HVAC::getItsNetwork() const {
    return itsNetwork;
}

void HVAC::setItsNetwork(Network* p_Network) {
    if(p_Network != NULL)
        {
            p_Network->_setItsHVAC(this);
        }
    _setItsNetwork(p_Network);
}

Occupancy_Sensor* HVAC::getItsOccupancy_Sensor() const {
    return itsOccupancy_Sensor;
}

void HVAC::setItsOccupancy_Sensor(Occupancy_Sensor* p_Occupancy_Sensor) {
    if(p_Occupancy_Sensor != NULL)
        {
            p_Occupancy_Sensor->_setItsHVAC(this);
        }
    _setItsOccupancy_Sensor(p_Occupancy_Sensor);
}

Room_Touch_Panel* HVAC::getItsRoom_Touch_Panel() const {
    return itsRoom_Touch_Panel;
}

void HVAC::setItsRoom_Touch_Panel(Room_Touch_Panel* p_Room_Touch_Panel) {
    if(p_Room_Touch_Panel != NULL)
        {
            p_Room_Touch_Panel->_setItsHVAC(this);
        }
    _setItsRoom_Touch_Panel(p_Room_Touch_Panel);
}

void HVAC::cleanUpRelations() {
    if(itsCO2_Sensor != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsCO2_Sensor");
            HVAC* p_HVAC = itsCO2_Sensor->getItsHVAC();
            if(p_HVAC != NULL)
                {
                    itsCO2_Sensor->__setItsHVAC(NULL);
                }
            itsCO2_Sensor = NULL;
        }
    if(itsMovement_Sensor != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsMovement_Sensor");
            HVAC* p_HVAC = itsMovement_Sensor->getItsHVAC();
            if(p_HVAC != NULL)
                {
                    itsMovement_Sensor->__setItsHVAC(NULL);
                }
            itsMovement_Sensor = NULL;
        }
    if(itsNetwork != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsNetwork");
            HVAC* p_HVAC = itsNetwork->getItsHVAC();
            if(p_HVAC != NULL)
                {
                    itsNetwork->__setItsHVAC(NULL);
                }
            itsNetwork = NULL;
        }
    if(itsOccupancy_Sensor != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsOccupancy_Sensor");
            HVAC* p_HVAC = itsOccupancy_Sensor->getItsHVAC();
            if(p_HVAC != NULL)
                {
                    itsOccupancy_Sensor->__setItsHVAC(NULL);
                }
            itsOccupancy_Sensor = NULL;
        }
    if(itsRoom_Touch_Panel != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsRoom_Touch_Panel");
            HVAC* p_HVAC = itsRoom_Touch_Panel->getItsHVAC();
            if(p_HVAC != NULL)
                {
                    itsRoom_Touch_Panel->__setItsHVAC(NULL);
                }
            itsRoom_Touch_Panel = NULL;
        }
}

void HVAC::__setItsCO2_Sensor(CO2_Sensor* p_CO2_Sensor) {
    itsCO2_Sensor = p_CO2_Sensor;
    if(p_CO2_Sensor != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsCO2_Sensor", p_CO2_Sensor, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsCO2_Sensor");
        }
}

void HVAC::_setItsCO2_Sensor(CO2_Sensor* p_CO2_Sensor) {
    if(itsCO2_Sensor != NULL)
        {
            itsCO2_Sensor->__setItsHVAC(NULL);
        }
    __setItsCO2_Sensor(p_CO2_Sensor);
}

void HVAC::_clearItsCO2_Sensor() {
    NOTIFY_RELATION_CLEARED("itsCO2_Sensor");
    itsCO2_Sensor = NULL;
}

void HVAC::__setItsMovement_Sensor(Movement_Sensor* p_Movement_Sensor) {
    itsMovement_Sensor = p_Movement_Sensor;
    if(p_Movement_Sensor != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsMovement_Sensor", p_Movement_Sensor, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsMovement_Sensor");
        }
}

void HVAC::_setItsMovement_Sensor(Movement_Sensor* p_Movement_Sensor) {
    if(itsMovement_Sensor != NULL)
        {
            itsMovement_Sensor->__setItsHVAC(NULL);
        }
    __setItsMovement_Sensor(p_Movement_Sensor);
}

void HVAC::_clearItsMovement_Sensor() {
    NOTIFY_RELATION_CLEARED("itsMovement_Sensor");
    itsMovement_Sensor = NULL;
}

void HVAC::__setItsNetwork(Network* p_Network) {
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

void HVAC::_setItsNetwork(Network* p_Network) {
    if(itsNetwork != NULL)
        {
            itsNetwork->__setItsHVAC(NULL);
        }
    __setItsNetwork(p_Network);
}

void HVAC::_clearItsNetwork() {
    NOTIFY_RELATION_CLEARED("itsNetwork");
    itsNetwork = NULL;
}

void HVAC::__setItsOccupancy_Sensor(Occupancy_Sensor* p_Occupancy_Sensor) {
    itsOccupancy_Sensor = p_Occupancy_Sensor;
    if(p_Occupancy_Sensor != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsOccupancy_Sensor", p_Occupancy_Sensor, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsOccupancy_Sensor");
        }
}

void HVAC::_setItsOccupancy_Sensor(Occupancy_Sensor* p_Occupancy_Sensor) {
    if(itsOccupancy_Sensor != NULL)
        {
            itsOccupancy_Sensor->__setItsHVAC(NULL);
        }
    __setItsOccupancy_Sensor(p_Occupancy_Sensor);
}

void HVAC::_clearItsOccupancy_Sensor() {
    NOTIFY_RELATION_CLEARED("itsOccupancy_Sensor");
    itsOccupancy_Sensor = NULL;
}

void HVAC::__setItsRoom_Touch_Panel(Room_Touch_Panel* p_Room_Touch_Panel) {
    itsRoom_Touch_Panel = p_Room_Touch_Panel;
    if(p_Room_Touch_Panel != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsRoom_Touch_Panel", p_Room_Touch_Panel, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsRoom_Touch_Panel");
        }
}

void HVAC::_setItsRoom_Touch_Panel(Room_Touch_Panel* p_Room_Touch_Panel) {
    if(itsRoom_Touch_Panel != NULL)
        {
            itsRoom_Touch_Panel->__setItsHVAC(NULL);
        }
    __setItsRoom_Touch_Panel(p_Room_Touch_Panel);
}

void HVAC::_clearItsRoom_Touch_Panel() {
    NOTIFY_RELATION_CLEARED("itsRoom_Touch_Panel");
    itsRoom_Touch_Panel = NULL;
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedHVAC::serializeAttributes(AOMSAttributes* aomsAttributes) const {
    aomsAttributes->addAttribute("heatingOn", x2String(myReal->heatingOn));
    aomsAttributes->addAttribute("coolingOn", x2String(myReal->coolingOn));
    aomsAttributes->addAttribute("ventilationOn", x2String(myReal->ventilationOn));
    aomsAttributes->addAttribute("temperature", x2String(myReal->temperature));
}

void OMAnimatedHVAC::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsNetwork", false, true);
    if(myReal->itsNetwork)
        {
            aomsRelations->ADD_ITEM(myReal->itsNetwork);
        }
    aomsRelations->addRelation("itsCO2_Sensor", false, true);
    if(myReal->itsCO2_Sensor)
        {
            aomsRelations->ADD_ITEM(myReal->itsCO2_Sensor);
        }
    aomsRelations->addRelation("itsOccupancy_Sensor", false, true);
    if(myReal->itsOccupancy_Sensor)
        {
            aomsRelations->ADD_ITEM(myReal->itsOccupancy_Sensor);
        }
    aomsRelations->addRelation("itsMovement_Sensor", false, true);
    if(myReal->itsMovement_Sensor)
        {
            aomsRelations->ADD_ITEM(myReal->itsMovement_Sensor);
        }
    aomsRelations->addRelation("itsRoom_Touch_Panel", false, true);
    if(myReal->itsRoom_Touch_Panel)
        {
            aomsRelations->ADD_ITEM(myReal->itsRoom_Touch_Panel);
        }
}
//#]

IMPLEMENT_META_P(HVAC, ArchitecturalAnalysisPkg, ArchitecturalAnalysisPkg, false, OMAnimatedHVAC)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\Network_Simulation\HVAC.cpp
*********************************************************************/
