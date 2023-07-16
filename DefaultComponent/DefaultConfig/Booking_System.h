/*********************************************************************
	Rhapsody	: 9.0 
	Login		: Administrator
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Booking_System
//!	Generated Date	: Sun, 16, Jul 2023  
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
//## class Booking_System
#include "I_BS.h"
//## package ArchitecturalAnalysisPkg

//## class Booking_System
class Booking_System : public I_BS {
public :

//#[ ignore
    //## package ArchitecturalAnalysisPkg
    class pBook_C : public I_BS {
        ////    Constructors and destructors    ////
        
    public :
    
        //## auto_generated
        pBook_C();
        
        //## auto_generated
        virtual ~pBook_C();
        
        ////    Operations    ////
        
        //## auto_generated
        void connectBooking_System(Booking_System* part);
        
        //## auto_generated
        I_BS* getItsI_BS();
        
        //## auto_generated
        virtual void login();
        
        ////    Additional operations    ////
        
        //## auto_generated
        void setItsI_BS(I_BS* p_I_BS);
    
    protected :
    
        //## auto_generated
        void cleanUpRelations();
        
        ////    Attributes    ////
        
        int _p_;		//## attribute _p_
        
        ////    Relations and components    ////
        
        I_BS* itsI_BS;		//## link itsI_BS
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
    virtual ~Booking_System();
    
    //## auto_generated
    pBook_C* getPBook() const;
    
    //## auto_generated
    pBook_C* get_pBook() const;
    
    //## auto_generated
    bool getAuth_status() const;
    
    //## auto_generated
    void setAuth_status(bool p_auth_status);

protected :

    //## auto_generated
    void initRelations();
    
    bool auth_status;		//## attribute auth_status

public :

    //## operation login()
    virtual void login();

protected :

//#[ ignore
    pBook_C pBook;
//#]
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedBooking_System : public OMAnimatedI_BS {
    DECLARE_META(Booking_System, OMAnimatedBooking_System)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeAttributes(AOMSAttributes* aomsAttributes) const;
    
    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Booking_System.h
*********************************************************************/
