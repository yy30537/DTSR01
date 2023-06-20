/*********************************************************************
	Rhapsody	: 9.0 
	Login		: Yang
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Door_Touch_Panel
//!	Generated Date	: Tue, 20, Jun 2023  
	File Path	: DefaultComponent\DefaultConfig\Door_Touch_Panel.h
*********************************************************************/

#ifndef Door_Touch_Panel_H
#define Door_Touch_Panel_H

//## auto_generated
#include <oxf\oxf.h>
//## auto_generated
#include <..\Profiles\SysML\SIDefinitions.h>
//## link itsNetwork
class Network;

//## package ArchitecturalAnalysisPkg

//## class Door_Touch_Panel
class Door_Touch_Panel {
    ////    Constructors and destructors    ////
    
public :

    //## auto_generated
    Door_Touch_Panel();
    
    //## auto_generated
    ~Door_Touch_Panel();
    
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
    
    ////    Framework operations    ////

public :

    //## auto_generated
    void __setItsNetwork(Network* p_Network);
    
    //## auto_generated
    void _setItsNetwork(Network* p_Network);
    
    //## auto_generated
    void _clearItsNetwork();
};

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Door_Touch_Panel.h
*********************************************************************/
