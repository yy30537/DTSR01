/********************************************************************
	Rhapsody	: 9.0 
	Login		: 20181759
	Component	: DefaultComponent 
	Configuration 	: Fire_Sensor_Simulation
	Model Element	: Fire_Sensor_Simulation
//!	Generated Date	: Wed, 5, Jul 2023  
	File Path	: DefaultComponent\Fire_Sensor_Simulation\MainDefaultComponent.cpp
*********************************************************************/

//## auto_generated
#include "MainDefaultComponent.h"
//## auto_generated
#include "Fire_Sensor.h"
int main(int argc, char* argv[]) {
    int status = 0;
    if(OXF::initialize(argc, argv, 6423))
        {
            Fire_Sensor * p_Fire_Sensor;
            p_Fire_Sensor = new Fire_Sensor;
            p_Fire_Sensor->startBehavior();
            //#[ configuration DefaultComponent::Fire_Sensor_Simulation 
            //#]
            OXF::start();
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
	File Path	: DefaultComponent\Fire_Sensor_Simulation\MainDefaultComponent.cpp
*********************************************************************/
