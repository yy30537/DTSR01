/*********************************************************************
	Rhapsody	: 9.0 
	Login		: Administrator
	Component	: DefaultComponent 
	Configuration 	: Network_Simulation
	Model Element	: Door_Touch_Panel
//!	Generated Date	: Thu, 22, Jun 2023  
	File Path	: DefaultComponent\Network_Simulation\Door_Touch_Panel.h
*********************************************************************/

#ifndef Door_Touch_Panel_H
#define Door_Touch_Panel_H

//## auto_generated
#include <oxf\oxf.h>
//## auto_generated
#include <..\Profiles\SysML\SIDefinitions.h>
//## auto_generated
#include <aom\aom.h>
//## auto_generated
#include "ArchitecturalAnalysisPkg.h"
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
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedDoor_Touch_Panel;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
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

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedDoor_Touch_Panel : virtual public AOMInstance {
    DECLARE_META(Door_Touch_Panel, OMAnimatedDoor_Touch_Panel)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\Network_Simulation\Door_Touch_Panel.h
*********************************************************************/
