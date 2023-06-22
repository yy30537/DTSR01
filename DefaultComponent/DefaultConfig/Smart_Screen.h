/*********************************************************************
	Rhapsody	: 9.0 
	Login		: Administrator
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Smart_Screen
//!	Generated Date	: Thu, 22, Jun 2023  
	File Path	: DefaultComponent\DefaultConfig\Smart_Screen.h
*********************************************************************/

#ifndef Smart_Screen_H
#define Smart_Screen_H

//## auto_generated
#include <oxf\oxf.h>
//## auto_generated
#include <..\Profiles\SysML\SIDefinitions.h>
//## link itsNetwork
class Network;

//## package ArchitecturalAnalysisPkg

//## class Smart_Screen
class Smart_Screen {
    ////    Constructors and destructors    ////
    
public :

    //## auto_generated
    Smart_Screen();
    
    //## auto_generated
    ~Smart_Screen();
    
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
	File Path	: DefaultComponent\DefaultConfig\Smart_Screen.h
*********************************************************************/
