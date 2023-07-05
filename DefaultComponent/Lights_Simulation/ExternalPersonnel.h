/*********************************************************************
	Rhapsody	: 9.0 
	Login		: 20181759
	Component	: DefaultComponent 
	Configuration 	: Lights_Simulation
	Model Element	: ExternalPersonnel
//!	Generated Date	: Wed, 5, Jul 2023  
	File Path	: DefaultComponent\Lights_Simulation\ExternalPersonnel.h
*********************************************************************/

#ifndef ExternalPersonnel_H
#define ExternalPersonnel_H

//## auto_generated
#include <oxf\oxf.h>
//## auto_generated
#include <..\Profiles\SysML\SIDefinitions.h>
//## auto_generated
#include <aom\aom.h>
//## auto_generated
#include "ActorPkg.h"
//## link itsDoor_Touch_Panel
class Door_Touch_Panel;

//## link itsNetwork
class Network;

//## link itsRoom_Touch_Panel
class Room_Touch_Panel;

//## link itsSmart_Room
class Smart_Room;

//## package ActorPkg

//## actor ExternalPersonnel
class ExternalPersonnel {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedExternalPersonnel;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    ExternalPersonnel();
    
    //## auto_generated
    ~ExternalPersonnel();
    
    ////    Additional operations    ////
    
    //## auto_generated
    Door_Touch_Panel* getItsDoor_Touch_Panel() const;
    
    //## auto_generated
    void setItsDoor_Touch_Panel(Door_Touch_Panel* p_Door_Touch_Panel);
    
    //## auto_generated
    Network* getItsNetwork() const;
    
    //## auto_generated
    void setItsNetwork(Network* p_Network);
    
    //## auto_generated
    Room_Touch_Panel* getItsRoom_Touch_Panel() const;
    
    //## auto_generated
    void setItsRoom_Touch_Panel(Room_Touch_Panel* p_Room_Touch_Panel);
    
    //## auto_generated
    Smart_Room* getItsSmart_Room() const;
    
    //## auto_generated
    void setItsSmart_Room(Smart_Room* p_Smart_Room);

protected :

    //## auto_generated
    void cleanUpRelations();
    
    ////    Relations and components    ////
    
    Door_Touch_Panel* itsDoor_Touch_Panel;		//## link itsDoor_Touch_Panel
    
    Network* itsNetwork;		//## link itsNetwork
    
    Room_Touch_Panel* itsRoom_Touch_Panel;		//## link itsRoom_Touch_Panel
    
    Smart_Room* itsSmart_Room;		//## link itsSmart_Room
    
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
    
    //## auto_generated
    void __setItsRoom_Touch_Panel(Room_Touch_Panel* p_Room_Touch_Panel);
    
    //## auto_generated
    void _setItsRoom_Touch_Panel(Room_Touch_Panel* p_Room_Touch_Panel);
    
    //## auto_generated
    void _clearItsRoom_Touch_Panel();
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedExternalPersonnel : virtual public AOMInstance {
    DECLARE_META(ExternalPersonnel, OMAnimatedExternalPersonnel)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\Lights_Simulation\ExternalPersonnel.h
*********************************************************************/
