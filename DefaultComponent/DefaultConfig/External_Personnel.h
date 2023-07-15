/*********************************************************************
	Rhapsody	: 9.0 
	Login		: Yang
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: External_Personnel
//!	Generated Date	: Sat, 15, Jul 2023  
	File Path	: DefaultComponent\DefaultConfig\External_Personnel.h
*********************************************************************/

#ifndef External_Personnel_H
#define External_Personnel_H

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

//## class External_Personnel
class External_Personnel {
public :

//#[ ignore
    //## package ArchitecturalAnalysisPkg
    class pEP_C : public OMDefaultReactivePort {
        ////    Constructors and destructors    ////
        
    public :
    
        //## auto_generated
        pEP_C();
        
        //## auto_generated
        virtual ~pEP_C();
        
        ////    Operations    ////
        
        //## auto_generated
        void connectExternal_Personnel(External_Personnel* part);
        
        ////    Attributes    ////
    
    protected :
    
        int _p_;		//## attribute _p_
    };
//#]

    ////    Friends    ////
    
#ifdef _OMINSTRUMENT
    friend class OMAnimatedExternal_Personnel;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    External_Personnel();
    
    //## auto_generated
    ~External_Personnel();
    
    //## auto_generated
    pEP_C* getPEP() const;
    
    //## auto_generated
    pEP_C* get_pEP() const;

protected :

//#[ ignore
    pEP_C pEP;
//#]
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedExternal_Personnel : virtual public AOMInstance {
    DECLARE_META(External_Personnel, OMAnimatedExternal_Personnel)
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\External_Personnel.h
*********************************************************************/
