/*********************************************************************
	Rhapsody	: 9.0 
	Login		: Administrator
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Smart_Room
//!	Generated Date	: Thu, 22, Jun 2023  
	File Path	: DefaultComponent\DefaultConfig\Smart_Room.h
*********************************************************************/

#ifndef Smart_Room_H
#define Smart_Room_H

//## auto_generated
#include <oxf\oxf.h>
//## auto_generated
#include <..\Profiles\SysML\SIDefinitions.h>
//## link itsNetwork
class Network;

//## package ArchitecturalAnalysisPkg

//## class Smart_Room
class Smart_Room {
    ////    Constructors and destructors    ////
    
public :

    //## auto_generated
    Smart_Room();
    
    //## auto_generated
    ~Smart_Room();
    
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
	File Path	: DefaultComponent\DefaultConfig\Smart_Room.h
*********************************************************************/
