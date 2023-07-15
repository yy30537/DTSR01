/*********************************************************************
	Rhapsody	: 9.0 
	Login		: Yang
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Booking_System
//!	Generated Date	: Sat, 15, Jul 2023  
	File Path	: DefaultComponent\DefaultConfig\Booking_System.h
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
//## auto_generated
#include <oxf\OMDefaultReactivePort.h>
//## package ArchitecturalAnalysisPkg

//## class Booking_System
class Booking_System {
public :

//#[ ignore
    //## package ArchitecturalAnalysisPkg
    class pBook_C : public OMDefaultReactivePort {
        ////    Constructors and destructors    ////
        
    public :
    
        //## auto_generated
        pBook_C();
        
        //## auto_generated
        virtual ~pBook_C();
        
        ////    Operations    ////
        
        //## auto_generated
        void connectBooking_System(Booking_System* part);
        
        ////    Attributes    ////
    
    protected :
    
        int _p_;		//## attribute _p_
    };
//#]

    ////    Friends    ////
    
#ifdef _OMINSTRUMENT
    friend class OMAnimatedBooking_System;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    Booking_System();
    
    //## auto_generated
    ~Booking_System();
    
    //## auto_generated
    pBook_C* getPBook() const;
    
    //## auto_generated
    pBook_C* get_pBook() const;

protected :

//#[ ignore
    pBook_C pBook;
//#]
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedBooking_System : virtual public AOMInstance {
    DECLARE_META(Booking_System, OMAnimatedBooking_System)
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Booking_System.h
*********************************************************************/
