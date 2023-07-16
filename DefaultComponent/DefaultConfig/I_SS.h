/*********************************************************************
	Rhapsody	: 9.0 
	Login		: Administrator
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: I_SS
//!	Generated Date	: Sun, 16, Jul 2023  
	File Path	: DefaultComponent\DefaultConfig\I_SS.h
*********************************************************************/

#ifndef I_SS_H
#define I_SS_H

//## auto_generated
#include <oxf\oxf.h>
//## auto_generated
#include <..\Profiles\SysML\SIDefinitions.h>
//## auto_generated
#include <aom\aom.h>
//## auto_generated
#include "ArchitecturalAnalysisPkg.h"
//## package ArchitecturalAnalysisPkg

//## class I_SS
class I_SS {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedI_SS;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    I_SS();
    
    //## auto_generated
    virtual ~I_SS() = 0;
    
    ////    Operations    ////
    
    //## operation SS_getState()
    virtual bool SS_getState() = 0;
    
    //## operation SS_setState(bool)
    virtual void SS_setState(bool argState) = 0;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedI_SS : virtual public AOMInstance {
    DECLARE_META(I_SS, OMAnimatedI_SS)
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\I_SS.h
*********************************************************************/
