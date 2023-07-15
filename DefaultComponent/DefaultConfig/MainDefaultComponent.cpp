/********************************************************************
	Rhapsody	: 9.0 
	Login		: Yang
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: DefaultConfig
//!	Generated Date	: Sat, 15, Jul 2023  
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
#include "Lights.h"
//## auto_generated
#include "Network.h"
DefaultComponent::DefaultComponent() {
    ArchitecturalAnalysisPkg_initRelations();
    ArchitecturalAnalysisPkg_startBehavior();
}

int main(int argc, char* argv[]) {
    int status = 0;
    if(OXF::initialize(argc, argv, 6423))
        {
            Lights * p_Lights;
            Network * p_Network;
            DefaultComponent initializer_DefaultComponent;
            p_Lights = new Lights;
            p_Network = new Network;
            p_Network->startBehavior();
            //#[ configuration DefaultComponent::DefaultConfig 
            //#]
            OXF::start();
            delete p_Lights;
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
	File Path	: DefaultComponent\DefaultConfig\MainDefaultComponent.cpp
*********************************************************************/
