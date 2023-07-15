/*********************************************************************
	Rhapsody	: 9.0 
	Login		: Yang
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Door_Touch_Panel
//!	Generated Date	: Sat, 15, Jul 2023  
	File Path	: DefaultComponent\DefaultConfig\Door_Touch_Panel.h
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
//## auto_generated
#include <oxf\OMDefaultReactivePort.h>
//## package ArchitecturalAnalysisPkg

//## class Door_Touch_Panel
class Door_Touch_Panel {
public :

//#[ ignore
    //## package ArchitecturalAnalysisPkg
    class pDoorTouch_C : public OMDefaultReactivePort {
        ////    Constructors and destructors    ////
        
    public :
    
        //## auto_generated
        pDoorTouch_C();
        
        //## auto_generated
        virtual ~pDoorTouch_C();
        
        ////    Operations    ////
        
        //## auto_generated
        void connectDoor_Touch_Panel(Door_Touch_Panel* part);
        
        ////    Attributes    ////
    
    protected :
    
        int _p_;		//## attribute _p_
    };
//#]

    ////    Friends    ////
    
#ifdef _OMINSTRUMENT
    friend class OMAnimatedDoor_Touch_Panel;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    Door_Touch_Panel();
    
    //## auto_generated
    ~Door_Touch_Panel();
    
    //## auto_generated
    pDoorTouch_C* getPDoorTouch() const;
    
    //## auto_generated
    pDoorTouch_C* get_pDoorTouch() const;

protected :

//#[ ignore
    pDoorTouch_C pDoorTouch;
//#]
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedDoor_Touch_Panel : virtual public AOMInstance {
    DECLARE_META(Door_Touch_Panel, OMAnimatedDoor_Touch_Panel)
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Door_Touch_Panel.h
*********************************************************************/
