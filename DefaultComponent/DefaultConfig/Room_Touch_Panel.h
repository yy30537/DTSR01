/*********************************************************************
	Rhapsody	: 9.0 
	Login		: Yang
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Room_Touch_Panel
//!	Generated Date	: Sat, 15, Jul 2023  
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
#include <oxf\OMDefaultReactivePort.h>
//## package ArchitecturalAnalysisPkg

//## class Room_Touch_Panel
class Room_Touch_Panel {
public :

//#[ ignore
    //## package ArchitecturalAnalysisPkg
    class pRoomTouch_C : public OMDefaultReactivePort {
        ////    Constructors and destructors    ////
        
    public :
    
        //## auto_generated
        pRoomTouch_C();
        
        //## auto_generated
        virtual ~pRoomTouch_C();
        
        ////    Operations    ////
        
        //## auto_generated
        void connectRoom_Touch_Panel(Room_Touch_Panel* part);
        
        ////    Attributes    ////
    
    protected :
    
        int _p_;		//## attribute _p_
    };
//#]

    ////    Friends    ////
    
#ifdef _OMINSTRUMENT
    friend class OMAnimatedRoom_Touch_Panel;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    Room_Touch_Panel();
    
    //## auto_generated
    ~Room_Touch_Panel();
    
    //## auto_generated
    pRoomTouch_C* getPRoomTouch() const;
    
    //## auto_generated
    pRoomTouch_C* get_pRoomTouch() const;

protected :

//#[ ignore
    pRoomTouch_C pRoomTouch;
//#]
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedRoom_Touch_Panel : virtual public AOMInstance {
    DECLARE_META(Room_Touch_Panel, OMAnimatedRoom_Touch_Panel)
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Room_Touch_Panel.h
*********************************************************************/
