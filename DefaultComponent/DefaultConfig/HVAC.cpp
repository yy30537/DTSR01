/********************************************************************
	Rhapsody	: 9.0 
	Login		: Administrator
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: HVAC
//!	Generated Date	: Thu, 22, Jun 2023  
	File Path	: DefaultComponent\DefaultConfig\HVAC.cpp
*********************************************************************/

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
//## package ArchitecturalAnalysisPkg

//## class HVAC
HVAC::HVAC() : coolingOn(0), heatingOn(0), ventilationOn(0) {
    itsCO2_Sensor = NULL;
    itsMovement_Sensor = NULL;
    itsNetwork = NULL;
    itsOccupancy_Sensor = NULL;
    itsRoom_Touch_Panel = NULL;
}

HVAC::~HVAC() {
    cleanUpRelations();
}

void HVAC::setTemperature() {
    //#[ operation setTemperature()
    //#]
}

void HVAC::turnOffCooling() {
    //#[ operation turnOffCooling()
    //#]
}

void HVAC::turnOffHeating() {
    //#[ operation turnOffHeating()
    //#]
}

void HVAC::turnOffVentilation() {
    //#[ operation turnOffVentilation()
    //#]
}

void HVAC::turnOnCooling() {
    //#[ operation turnOnCooling()
    //#]
}

void HVAC::turnOnHeating() {
    //#[ operation turnOnHeating()
    //#]
}

void HVAC::turnOnVentilation() {
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
            HVAC* p_HVAC = itsCO2_Sensor->getItsHVAC();
            if(p_HVAC != NULL)
                {
                    itsCO2_Sensor->__setItsHVAC(NULL);
                }
            itsCO2_Sensor = NULL;
        }
    if(itsMovement_Sensor != NULL)
        {
            HVAC* p_HVAC = itsMovement_Sensor->getItsHVAC();
            if(p_HVAC != NULL)
                {
                    itsMovement_Sensor->__setItsHVAC(NULL);
                }
            itsMovement_Sensor = NULL;
        }
    if(itsNetwork != NULL)
        {
            HVAC* p_HVAC = itsNetwork->getItsHVAC();
            if(p_HVAC != NULL)
                {
                    itsNetwork->__setItsHVAC(NULL);
                }
            itsNetwork = NULL;
        }
    if(itsOccupancy_Sensor != NULL)
        {
            HVAC* p_HVAC = itsOccupancy_Sensor->getItsHVAC();
            if(p_HVAC != NULL)
                {
                    itsOccupancy_Sensor->__setItsHVAC(NULL);
                }
            itsOccupancy_Sensor = NULL;
        }
    if(itsRoom_Touch_Panel != NULL)
        {
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
}

void HVAC::_setItsCO2_Sensor(CO2_Sensor* p_CO2_Sensor) {
    if(itsCO2_Sensor != NULL)
        {
            itsCO2_Sensor->__setItsHVAC(NULL);
        }
    __setItsCO2_Sensor(p_CO2_Sensor);
}

void HVAC::_clearItsCO2_Sensor() {
    itsCO2_Sensor = NULL;
}

void HVAC::__setItsMovement_Sensor(Movement_Sensor* p_Movement_Sensor) {
    itsMovement_Sensor = p_Movement_Sensor;
}

void HVAC::_setItsMovement_Sensor(Movement_Sensor* p_Movement_Sensor) {
    if(itsMovement_Sensor != NULL)
        {
            itsMovement_Sensor->__setItsHVAC(NULL);
        }
    __setItsMovement_Sensor(p_Movement_Sensor);
}

void HVAC::_clearItsMovement_Sensor() {
    itsMovement_Sensor = NULL;
}

void HVAC::__setItsNetwork(Network* p_Network) {
    itsNetwork = p_Network;
}

void HVAC::_setItsNetwork(Network* p_Network) {
    if(itsNetwork != NULL)
        {
            itsNetwork->__setItsHVAC(NULL);
        }
    __setItsNetwork(p_Network);
}

void HVAC::_clearItsNetwork() {
    itsNetwork = NULL;
}

void HVAC::__setItsOccupancy_Sensor(Occupancy_Sensor* p_Occupancy_Sensor) {
    itsOccupancy_Sensor = p_Occupancy_Sensor;
}

void HVAC::_setItsOccupancy_Sensor(Occupancy_Sensor* p_Occupancy_Sensor) {
    if(itsOccupancy_Sensor != NULL)
        {
            itsOccupancy_Sensor->__setItsHVAC(NULL);
        }
    __setItsOccupancy_Sensor(p_Occupancy_Sensor);
}

void HVAC::_clearItsOccupancy_Sensor() {
    itsOccupancy_Sensor = NULL;
}

void HVAC::__setItsRoom_Touch_Panel(Room_Touch_Panel* p_Room_Touch_Panel) {
    itsRoom_Touch_Panel = p_Room_Touch_Panel;
}

void HVAC::_setItsRoom_Touch_Panel(Room_Touch_Panel* p_Room_Touch_Panel) {
    if(itsRoom_Touch_Panel != NULL)
        {
            itsRoom_Touch_Panel->__setItsHVAC(NULL);
        }
    __setItsRoom_Touch_Panel(p_Room_Touch_Panel);
}

void HVAC::_clearItsRoom_Touch_Panel() {
    itsRoom_Touch_Panel = NULL;
}

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\HVAC.cpp
*********************************************************************/
