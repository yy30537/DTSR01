/*********************************************************************
	Rhapsody	: 9.0 
	Login		: Administrator
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: I_Mic
//!	Generated Date	: Sat, 15, Jul 2023  
	File Path	: DefaultComponent\DefaultConfig\I_Mic.h
*********************************************************************/

#ifndef I_Mic_H
#define I_Mic_H

//## auto_generated
#include <oxf\oxf.h>
//## auto_generated
#include <..\Profiles\SysML\SIDefinitions.h>
//## auto_generated
#include <aom\aom.h>
//## auto_generated
#include "ArchitecturalAnalysisPkg.h"
//## package ArchitecturalAnalysisPkg

//## class I_Mic
class I_Mic {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedI_Mic;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    I_Mic();
    
    //## auto_generated
    virtual ~I_Mic() = 0;
    
    ////    Operations    ////
    
    //## operation getState()
    virtual bool getState() = 0;
    
    //## operation setState(bool)
    virtual void setState(bool argState) = 0;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedI_Mic : virtual public AOMInstance {
    DECLARE_META(I_Mic, OMAnimatedI_Mic)
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\I_Mic.h
*********************************************************************/
