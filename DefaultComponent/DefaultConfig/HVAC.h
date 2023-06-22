/*********************************************************************
	Rhapsody	: 9.0 
	Login		: Administrator
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: HVAC
//!	Generated Date	: Thu, 22, Jun 2023  
	File Path	: DefaultComponent\DefaultConfig\HVAC.h
*********************************************************************/

#ifndef HVAC_H
#define HVAC_H

//## auto_generated
#include <oxf\oxf.h>
//## auto_generated
#include <..\Profiles\SysML\SIDefinitions.h>
//## link itsCO2_Sensor
class CO2_Sensor;

//## link itsMovement_Sensor
class Movement_Sensor;

//## link itsNetwork
class Network;

//## link itsOccupancy_Sensor
class Occupancy_Sensor;

//## link itsRoom_Touch_Panel
class Room_Touch_Panel;

//## package ArchitecturalAnalysisPkg

//## class HVAC
class HVAC {
    ////    Constructors and destructors    ////
    
public :

    //## auto_generated
    HVAC();
    
    //## auto_generated
    virtual ~HVAC();
    
    ////    Operations    ////
    
    //## operation setTemperature()
    virtual void setTemperature();
    
    //## operation turnOffCooling()
    virtual void turnOffCooling();
    
    //## operation turnOffHeating()
    virtual void turnOffHeating();
    
    //## operation turnOffVentilation()
    virtual void turnOffVentilation();
    
    //## operation turnOnCooling()
    virtual void turnOnCooling();
    
    //## operation turnOnHeating()
    virtual void turnOnHeating();
    
    //## operation turnOnVentilation()
    virtual void turnOnVentilation();
    
    ////    Additional operations    ////
    
    //## auto_generated
    bool getCoolingOn() const;
    
    //## auto_generated
    void setCoolingOn(bool p_coolingOn);
    
    //## auto_generated
    bool getHeatingOn() const;
    
    //## auto_generated
    void setHeatingOn(bool p_heatingOn);
    
    //## auto_generated
    int getTemperature() const;
    
    //## auto_generated
    void setTemperature(int p_temperature);
    
    //## auto_generated
    bool getVentilationOn() const;
    
    //## auto_generated
    void setVentilationOn(bool p_ventilationOn);
    
    //## auto_generated
    CO2_Sensor* getItsCO2_Sensor() const;
    
    //## auto_generated
    void setItsCO2_Sensor(CO2_Sensor* p_CO2_Sensor);
    
    //## auto_generated
    Movement_Sensor* getItsMovement_Sensor() const;
    
    //## auto_generated
    void setItsMovement_Sensor(Movement_Sensor* p_Movement_Sensor);
    
    //## auto_generated
    Network* getItsNetwork() const;
    
    //## auto_generated
    void setItsNetwork(Network* p_Network);
    
    //## auto_generated
    Occupancy_Sensor* getItsOccupancy_Sensor() const;
    
    //## auto_generated
    void setItsOccupancy_Sensor(Occupancy_Sensor* p_Occupancy_Sensor);
    
    //## auto_generated
    Room_Touch_Panel* getItsRoom_Touch_Panel() const;
    
    //## auto_generated
    void setItsRoom_Touch_Panel(Room_Touch_Panel* p_Room_Touch_Panel);

protected :

    //## auto_generated
    void cleanUpRelations();
    
    ////    Attributes    ////
    
    bool coolingOn;		//## attribute coolingOn
    
    bool heatingOn;		//## attribute heatingOn
    
    int temperature;		//## attribute temperature
    
    bool ventilationOn;		//## attribute ventilationOn
    
    ////    Relations and components    ////
    
    CO2_Sensor* itsCO2_Sensor;		//## link itsCO2_Sensor
    
    Movement_Sensor* itsMovement_Sensor;		//## link itsMovement_Sensor
    
    Network* itsNetwork;		//## link itsNetwork
    
    Occupancy_Sensor* itsOccupancy_Sensor;		//## link itsOccupancy_Sensor
    
    Room_Touch_Panel* itsRoom_Touch_Panel;		//## link itsRoom_Touch_Panel
    
    ////    Framework operations    ////

public :

    //## auto_generated
    void __setItsCO2_Sensor(CO2_Sensor* p_CO2_Sensor);
    
    //## auto_generated
    void _setItsCO2_Sensor(CO2_Sensor* p_CO2_Sensor);
    
    //## auto_generated
    void _clearItsCO2_Sensor();
    
    //## auto_generated
    void __setItsMovement_Sensor(Movement_Sensor* p_Movement_Sensor);
    
    //## auto_generated
    void _setItsMovement_Sensor(Movement_Sensor* p_Movement_Sensor);
    
    //## auto_generated
    void _clearItsMovement_Sensor();
    
    //## auto_generated
    void __setItsNetwork(Network* p_Network);
    
    //## auto_generated
    void _setItsNetwork(Network* p_Network);
    
    //## auto_generated
    void _clearItsNetwork();
    
    //## auto_generated
    void __setItsOccupancy_Sensor(Occupancy_Sensor* p_Occupancy_Sensor);
    
    //## auto_generated
    void _setItsOccupancy_Sensor(Occupancy_Sensor* p_Occupancy_Sensor);
    
    //## auto_generated
    void _clearItsOccupancy_Sensor();
    
    //## auto_generated
    void __setItsRoom_Touch_Panel(Room_Touch_Panel* p_Room_Touch_Panel);
    
    //## auto_generated
    void _setItsRoom_Touch_Panel(Room_Touch_Panel* p_Room_Touch_Panel);
    
    //## auto_generated
    void _clearItsRoom_Touch_Panel();
};

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\HVAC.h
*********************************************************************/
