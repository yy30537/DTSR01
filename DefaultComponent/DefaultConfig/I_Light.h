/*********************************************************************
	Rhapsody	: 9.0 
	Login		: Yang
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: I_Light
//!	Generated Date	: Sat, 15, Jul 2023  
	File Path	: DefaultComponent\DefaultConfig\I_Light.h
*********************************************************************/

#ifndef I_Light_H
#define I_Light_H

//## auto_generated
#include <oxf\oxf.h>
//## auto_generated
#include <..\Profiles\SysML\SIDefinitions.h>
//## auto_generated
#include <aom\aom.h>
//## auto_generated
#include "ArchitecturalAnalysisPkg.h"
//## package ArchitecturalAnalysisPkg

//## class I_Light
class I_Light {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedI_Light;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    I_Light();
    
    //## auto_generated
    virtual ~I_Light() = 0;
    
    ////    Operations    ////
    
    //## operation getItensity()
    virtual int getItensity() = 0;
    
    //## operation setIntensity(int)
    virtual void setIntensity(int arg_intensity) = 0;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedI_Light : virtual public AOMInstance {
    DECLARE_META(I_Light, OMAnimatedI_Light)
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\I_Light.h
*********************************************************************/
