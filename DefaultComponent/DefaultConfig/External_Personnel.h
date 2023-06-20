/*********************************************************************
	Rhapsody	: 9.0 
	Login		: Yang
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: External_Personnel
//!	Generated Date	: Tue, 20, Jun 2023  
	File Path	: DefaultComponent\DefaultConfig\External_Personnel.h
*********************************************************************/

#ifndef External_Personnel_H
#define External_Personnel_H

//## auto_generated
#include <oxf\oxf.h>
//## auto_generated
#include <..\Profiles\SysML\SIDefinitions.h>
//## link itsNetwork
class Network;

//## package ArchitecturalAnalysisPkg

//## class External_Personnel
class External_Personnel {
    ////    Constructors and destructors    ////
    
public :

    //## auto_generated
    External_Personnel();
    
    //## auto_generated
    ~External_Personnel();
    
    ////    Additional operations    ////
    
    //## auto_generated
    Network* getItsNetwork() const;
    
    //## auto_generated
    void setItsNetwork(Network* p_Network);

protected :

    //## auto_generated
    void cleanUpRelations();
    
    ////    Relations and components    ////
    
    Network* itsNetwork;		//## link itsNetwork
};

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\External_Personnel.h
*********************************************************************/
