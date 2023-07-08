/*********************************************************************
	Rhapsody	: 9.0 
	Login		: Yang
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Room_Touch_Panel
//!	Generated Date	: Sat, 8, Jul 2023  
	File Path	: DefaultComponent\DefaultConfig\Room_Touch_Panel.h
*********************************************************************/

#ifndef Room_Touch_Panel_H
#define Room_Touch_Panel_H

//## auto_generated
#include <oxf\oxf.h>
//## auto_generated
#include <..\Profiles\SysML\SIDefinitions.h>
//## auto_generated
#include <aom\aom.h>
//## auto_generated
#include "ArchitecturalAnalysisPkg.h"
//## auto_generated
#include <oxf\omthread.h>
//## auto_generated
#include <oxf\omreactive.h>
//## auto_generated
#include <oxf\state.h>
//## auto_generated
#include <oxf\event.h>
//## link itsExternalPersonnel
class ExternalPersonnel;

//## link itsHVAC
class HVAC;

//## link itsNetwork
class Network;

//## link itsUser
class User;

//#[ ignore
#define decreaseLightIntensity_Room_Touch_Panel_Event_id 31000

#define increaseLightIntensity_Room_Touch_Panel_Event_id 31001

#define requestExternalPersonnel_Room_Touch_Panel_Event_id 31002

#define setLightIntensity_Room_Touch_Panel_Event_id 31003

#define turnOff_Light_Room_Touch_Panel_Event_id 31004

#define turnOn_Light_Room_Touch_Panel_Event_id 31005
//#]

//## package ArchitecturalAnalysisPkg

//## class Room_Touch_Panel
class Room_Touch_Panel : public OMReactive {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedRoom_Touch_Panel;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    Room_Touch_Panel(IOxfActive* theActiveContext = 0);
    
    //## auto_generated
    ~Room_Touch_Panel();
    
    ////    Additional operations    ////
    
    //## auto_generated
    ExternalPersonnel* getItsExternalPersonnel() const;
    
    //## auto_generated
    void setItsExternalPersonnel(ExternalPersonnel* p_ExternalPersonnel);
    
    //## auto_generated
    HVAC* getItsHVAC() const;
    
    //## auto_generated
    void setItsHVAC(HVAC* p_HVAC);
    
    //## auto_generated
    Network* getItsNetwork() const;
    
    //## auto_generated
    void setItsNetwork(Network* p_Network);
    
    //## auto_generated
    User* getItsUser() const;
    
    //## auto_generated
    void setItsUser(User* p_User);
    
    //## auto_generated
    virtual bool startBehavior();

protected :

    //## auto_generated
    void cleanUpRelations();

public :

    //## TriggeredOperation decreaseLightIntensity()
    int decreaseLightIntensity();
    
    //## TriggeredOperation increaseLightIntensity()
    int increaseLightIntensity();
    
    //## TriggeredOperation requestExternalPersonnel()
    void requestExternalPersonnel();
    
    //## TriggeredOperation setLightIntensity(int)
    void setLightIntensity(int targetIntensity);
    
    //## TriggeredOperation turnOff_Light()
    void turnOff_Light();
    
    //## TriggeredOperation turnOn_Light()
    void turnOn_Light();
    
    ////    Relations and components    ////

protected :

    HVAC* itsHVAC;		//## link itsHVAC
    
    Network* itsNetwork;		//## link itsNetwork
    
    ////    Framework operations    ////

public :

    //## auto_generated
    void __setItsExternalPersonnel(ExternalPersonnel* p_ExternalPersonnel);
    
    //## auto_generated
    void _setItsExternalPersonnel(ExternalPersonnel* p_ExternalPersonnel);
    
    //## auto_generated
    void _clearItsExternalPersonnel();
    
    //## auto_generated
    void __setItsHVAC(HVAC* p_HVAC);
    
    //## auto_generated
    void _setItsHVAC(HVAC* p_HVAC);
    
    //## auto_generated
    void _clearItsHVAC();
    
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

protected :

    ExternalPersonnel* itsExternalPersonnel;		//## link itsExternalPersonnel
    
    User* itsUser;		//## link itsUser
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedRoom_Touch_Panel : virtual public AOMInstance {
    DECLARE_META(Room_Touch_Panel, OMAnimatedRoom_Touch_Panel)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
};
//#]
#endif // _OMINSTRUMENT

//#[ ignore
class decreaseLightIntensity_Room_Touch_Panel_Event : public OMEvent {
    ////    Constructors and destructors    ////
    
public :

    decreaseLightIntensity_Room_Touch_Panel_Event();
    
    ////    Framework    ////
    
    int om_reply;
};
//#]

//#[ ignore
class increaseLightIntensity_Room_Touch_Panel_Event : public OMEvent {
    ////    Constructors and destructors    ////
    
public :

    increaseLightIntensity_Room_Touch_Panel_Event();
    
    ////    Framework    ////
    
    int om_reply;
};
//#]

//#[ ignore
class requestExternalPersonnel_Room_Touch_Panel_Event : public OMEvent {
    ////    Constructors and destructors    ////
    
public :

    requestExternalPersonnel_Room_Touch_Panel_Event();
};
//#]

//#[ ignore
class setLightIntensity_Room_Touch_Panel_Event : public OMEvent {
    ////    Constructors and destructors    ////
    
public :

    setLightIntensity_Room_Touch_Panel_Event(int p_targetIntensity);
    
    ////    Framework    ////
    
    int targetIntensity;
};
//#]

//#[ ignore
class turnOff_Light_Room_Touch_Panel_Event : public OMEvent {
    ////    Constructors and destructors    ////
    
public :

    turnOff_Light_Room_Touch_Panel_Event();
};
//#]

//#[ ignore
class turnOn_Light_Room_Touch_Panel_Event : public OMEvent {
    ////    Constructors and destructors    ////
    
public :

    turnOn_Light_Room_Touch_Panel_Event();
};
//#]

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Room_Touch_Panel.h
*********************************************************************/
