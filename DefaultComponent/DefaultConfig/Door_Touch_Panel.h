/*********************************************************************
	Rhapsody	: 9.0 
	Login		: Administrator
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Door_Touch_Panel
//!	Generated Date	: Thu, 22, Jun 2023  
	File Path	: DefaultComponent\DefaultConfig\Door_Touch_Panel.h
*********************************************************************/

#ifndef Door_Touch_Panel_H
#define Door_Touch_Panel_H

//## auto_generated
#include <oxf\oxf.h>
//## auto_generated
#include <..\Profiles\SysML\SIDefinitions.h>
//## link itsBooking_System
class Booking_System;

//## link itsExternalPersonnel
class ExternalPersonnel;

//## link itsNetwork
class Network;

//## link itsUser
class User;

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
    Booking_System* getItsBooking_System() const;
    
    //## auto_generated
    void setItsBooking_System(Booking_System* p_Booking_System);
    
    //## auto_generated
    ExternalPersonnel* getItsExternalPersonnel() const;
    
    //## auto_generated
    void setItsExternalPersonnel(ExternalPersonnel* p_ExternalPersonnel);
    
    //## auto_generated
    Network* getItsNetwork() const;
    
    //## auto_generated
    void setItsNetwork(Network* p_Network);
    
    //## auto_generated
    User* getItsUser() const;
    
    //## auto_generated
    void setItsUser(User* p_User);

protected :

    //## auto_generated
    void cleanUpRelations();
    
    ////    Relations and components    ////
    
    Booking_System* itsBooking_System;		//## link itsBooking_System
    
    ExternalPersonnel* itsExternalPersonnel;		//## link itsExternalPersonnel
    
    Network* itsNetwork;		//## link itsNetwork
    
    User* itsUser;		//## link itsUser
    
    ////    Framework operations    ////

public :

    //## auto_generated
    void __setItsBooking_System(Booking_System* p_Booking_System);
    
    //## auto_generated
    void _setItsBooking_System(Booking_System* p_Booking_System);
    
    //## auto_generated
    void _clearItsBooking_System();
    
    //## auto_generated
    void __setItsExternalPersonnel(ExternalPersonnel* p_ExternalPersonnel);
    
    //## auto_generated
    void _setItsExternalPersonnel(ExternalPersonnel* p_ExternalPersonnel);
    
    //## auto_generated
    void _clearItsExternalPersonnel();
    
    //## auto_generated
    void __setItsNetwork(Network* p_Network);
    
    //## auto_generated
    void _setItsNetwork(Network* p_Network);
    
    //## auto_generated
    void _clearItsNetwork();
    
    //## auto_generated
    void __setItsUser(User* p_User);
    
    //## auto_generated
    void _setItsUser(User* p_User);
    
    //## auto_generated
    void _clearItsUser();
};

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Door_Touch_Panel.h
*********************************************************************/
