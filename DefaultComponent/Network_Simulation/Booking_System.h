/*********************************************************************
	Rhapsody	: 9.0 
	Login		: Yang
	Component	: DefaultComponent 
	Configuration 	: Network_Simulation
	Model Element	: Booking_System
//!	Generated Date	: Wed, 21, Jun 2023  
	File Path	: DefaultComponent\Network_Simulation\Booking_System.h
*********************************************************************/

#ifndef Booking_System_H
#define Booking_System_H

//## auto_generated
#include <oxf\oxf.h>
//## auto_generated
#include <..\Profiles\SysML\SIDefinitions.h>
//## auto_generated
#include <aom\aom.h>
//## auto_generated
#include "ArchitecturalAnalysisPkg.h"
//## link itsNetwork
class Network;

//## link itsSmart_Room
class Smart_Room;

//## package ArchitecturalAnalysisPkg

//## class Booking_System
class Booking_System {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedBooking_System;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    Booking_System();
    
    //## auto_generated
    ~Booking_System();
    
    ////    Additional operations    ////
    
    //## auto_generated
    Network* getItsNetwork() const;
    
    //## auto_generated
    void setItsNetwork(Network* p_Network);
    
    //## auto_generated
    Network* getItsNetwork_1() const;
    
    //## auto_generated
    void setItsNetwork_1(Network* p_Network);
    
    //## auto_generated
    Smart_Room* getItsSmart_Room() const;
    
    //## auto_generated
    void setItsSmart_Room(Smart_Room* p_Smart_Room);

protected :

    //## auto_generated
    void cleanUpRelations();
    
    ////    Relations and components    ////
    
    Network* itsNetwork;		//## link itsNetwork
    
    Network* itsNetwork_1;		//## link itsNetwork_1
    
    Smart_Room* itsSmart_Room;		//## link itsSmart_Room
    
    ////    Framework operations    ////

public :

    //## auto_generated
    void __setItsNetwork(Network* p_Network);
    
    //## auto_generated
    void _setItsNetwork(Network* p_Network);
    
    //## auto_generated
    void _clearItsNetwork();
    
    //## auto_generated
    void __setItsSmart_Room(Smart_Room* p_Smart_Room);
    
    //## auto_generated
    void _setItsSmart_Room(Smart_Room* p_Smart_Room);
    
    //## auto_generated
    void _clearItsSmart_Room();
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedBooking_System : virtual public AOMInstance {
    DECLARE_META(Booking_System, OMAnimatedBooking_System)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\Network_Simulation\Booking_System.h
*********************************************************************/
