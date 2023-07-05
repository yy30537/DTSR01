/********************************************************************
	Rhapsody	: 9.0 
	Login		: 20181759
	Component	: DefaultComponent 
	Configuration 	: Lights_Simulation
	Model Element	: Lights_Simulation
//!	Generated Date	: Wed, 5, Jul 2023  
	File Path	: DefaultComponent\Lights_Simulation\MainDefaultComponent.cpp
*********************************************************************/

//## auto_generated
#include "MainDefaultComponent.h"
//## auto_generated
#include "Lights.h"
int main(int argc, char* argv[]) {
    int status = 0;
    if(OXF::initialize(argc, argv, 6423))
        {
            Lights * p_Lights;
            p_Lights = new Lights;
            p_Lights->startBehavior();
            //#[ configuration DefaultComponent::Lights_Simulation 
            //#]
            OXF::start();
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
	File Path	: DefaultComponent\Lights_Simulation\MainDefaultComponent.cpp
*********************************************************************/
