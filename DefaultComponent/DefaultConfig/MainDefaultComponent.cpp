/********************************************************************
	Rhapsody	: 9.0 
	Login		: 20181759
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: DefaultConfig
//!	Generated Date	: Wed, 5, Jul 2023  
	File Path	: DefaultComponent\DefaultConfig\MainDefaultComponent.cpp
*********************************************************************/

//## auto_generated
#include "MainDefaultComponent.h"
//## auto_generated
#include "CO2_Sensor.h"
//## auto_generated
#include "Fire_Sensor.h"
int main(int argc, char* argv[]) {
    int status = 0;
    if(OXF::initialize(argc, argv, 6423))
        {
            CO2_Sensor * p_CO2_Sensor;
            Fire_Sensor * p_Fire_Sensor;
            p_CO2_Sensor = new CO2_Sensor;
            p_CO2_Sensor->startBehavior();
            p_Fire_Sensor = new Fire_Sensor;
            p_Fire_Sensor->startBehavior();
            //#[ configuration DefaultComponent::DefaultConfig 
            //#]
            OXF::start();
            delete p_CO2_Sensor;
            delete p_Fire_Sensor;
            status = 0;
        }
    else
        {
            status = 1;
        }
    return status;
}

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\MainDefaultComponent.cpp
*********************************************************************/
