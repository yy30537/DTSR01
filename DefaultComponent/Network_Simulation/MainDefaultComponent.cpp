/********************************************************************
	Rhapsody	: 9.0 
	Login		: Administrator
	Component	: DefaultComponent 
	Configuration 	: Network_Simulation
	Model Element	: Network_Simulation
//!	Generated Date	: Sun, 16, Jul 2023  
	File Path	: DefaultComponent\Network_Simulation\MainDefaultComponent.cpp
*********************************************************************/

//## auto_generated
#include "MainDefaultComponent.h"
//## auto_generated
#include "Network.h"
int main(int argc, char* argv[]) {
    int status = 0;
    if(OXF::initialize(argc, argv, 6423))
        {
            Network * p_Network;
            p_Network = new Network;
            p_Network->startBehavior();
            //#[ configuration DefaultComponent::Network_Simulation 
            //#]
            OXF::start();
            delete p_Network;
            status = 0;
        }
    else
        {
            status = 1;
        }
    return status;
}

/*********************************************************************
	File Path	: DefaultComponent\Network_Simulation\MainDefaultComponent.cpp
*********************************************************************/
