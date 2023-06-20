/*********************************************************************
	Rhapsody	: 9.0 
	Login		: Yang
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: User
//!	Generated Date	: Tue, 20, Jun 2023  
	File Path	: DefaultComponent\DefaultConfig\User.h
*********************************************************************/

#ifndef User_H
#define User_H

//## auto_generated
#include <oxf\oxf.h>
//## auto_generated
#include <..\Profiles\SysML\SIDefinitions.h>
//## link itsSmart_Room
class Smart_Room;

//## package ActorPkg

//## actor User
class User {
    ////    Constructors and destructors    ////
    
public :

    //## auto_generated
    User();
    
    //## auto_generated
    ~User();
    
    ////    Additional operations    ////
    
    //## auto_generated
    Smart_Room* getItsSmart_Room() const;
    
    //## auto_generated
    void setItsSmart_Room(Smart_Room* p_Smart_Room);

protected :

    //## auto_generated
    void cleanUpRelations();
    
    ////    Relations and components    ////
    
    Smart_Room* itsSmart_Room;		//## link itsSmart_Room
};

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\User.h
*********************************************************************/
