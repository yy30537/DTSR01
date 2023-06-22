/*********************************************************************
	Rhapsody	: 9.0 
	Login		: Administrator
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Booking_System
//!	Generated Date	: Thu, 22, Jun 2023  
	File Path	: DefaultComponent\DefaultConfig\Booking_System.h
*********************************************************************/

#ifndef Booking_System_H
#define Booking_System_H

//## auto_generated
#include <oxf\oxf.h>
//## auto_generated
#include <..\Profiles\SysML\SIDefinitions.h>
//## link itsDoor_Touch_Panel
class Door_Touch_Panel;

//## link itsNetwork
class Network;

//## package ArchitecturalAnalysisPkg

//## class Booking_System
class Booking_System {
    ////    Constructors and destructors    ////
    
public :

    //## auto_generated
    Booking_System();
    
    //## auto_generated
    ~Booking_System();
    
    ////    Additional operations    ////
    
    //## auto_generated
    Door_Touch_Panel* getItsDoor_Touch_Panel() const;
    
    //## auto_generated
    void setItsDoor_Touch_Panel(Door_Touch_Panel* p_Door_Touch_Panel);
    
    //## auto_generated
    Network* getItsNetwork() const;
    
    //## auto_generated
    void setItsNetwork(Network* p_Network);

protected :

    //## auto_generated
    void cleanUpRelations();
    
    ////    Relations and components    ////
    
    Door_Touch_Panel* itsDoor_Touch_Panel;		//## link itsDoor_Touch_Panel
    
    Network* itsNetwork;		//## link itsNetwork
    
    ////    Framework operations    ////

public :

    //## auto_generated
    void __setItsDoor_Touch_Panel(Door_Touch_Panel* p_Door_Touch_Panel);
    
    //## auto_generated
    void _setItsDoor_Touch_Panel(Door_Touch_Panel* p_Door_Touch_Panel);
    
    //## auto_generated
    void _clearItsDoor_Touch_Panel();
    
    //## auto_generated
    void __setItsNetwork(Network* p_Network);
    
    //## auto_generated
    void _setItsNetwork(Network* p_Network);
    
    //## auto_generated
    void _clearItsNetwork();
};

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Booking_System.h
*********************************************************************/
