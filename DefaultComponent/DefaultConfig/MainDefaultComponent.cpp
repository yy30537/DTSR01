/********************************************************************
	Rhapsody	: 9.0 
	Login		: Yang
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: DefaultConfig
//!	Generated Date	: Sun, 9, Jul 2023  
	File Path	: DefaultComponent\DefaultConfig\MainDefaultComponent.cpp
*********************************************************************/

//## auto_generated
#include "MainDefaultComponent.h"
//## auto_generated
#include "ActorPkg.h"
//## auto_generated
#include "ArchitecturalAnalysisPkg.h"
//## auto_generated
#include "UseCaseAnalysisPkg.h"
//## auto_generated
#include "CO2_Sensor.h"
//## auto_generated
#include "Fire_Sensor.h"
//## auto_generated
#include "Lights.h"
DefaultComponent::DefaultComponent() {
    ArchitecturalAnalysisPkg_initRelations();
    ArchitecturalAnalysisPkg_startBehavior();
}

int main(int argc, char* argv[]) {
    int status = 0;
    if(OXF::initialize(argc, argv, 6423))
        {
            CO2_Sensor * p_CO2_Sensor;
            Fire_Sensor * p_Fire_Sensor;
            Lights * p_Lights;
            DefaultComponent initializer_DefaultComponent;
            p_CO2_Sensor = new CO2_Sensor;
            p_Fire_Sensor = new Fire_Sensor;
            p_Lights = new Lights;
            //#[ configuration DefaultComponent::DefaultConfig 
            //#]
            OXF::start();
            delete p_CO2_Sensor;
            delete p_Fire_Sensor;
            delete p_Lights;
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
