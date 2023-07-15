/*********************************************************************
	Rhapsody	: 9.0 
	Login		: Administrator
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: I_Weather
//!	Generated Date	: Sat, 15, Jul 2023  
	File Path	: DefaultComponent\DefaultConfig\I_Weather.h
*********************************************************************/

#ifndef I_Weather_H
#define I_Weather_H

//## auto_generated
#include <oxf\oxf.h>
//## auto_generated
#include <..\Profiles\SysML\SIDefinitions.h>
//## auto_generated
#include <aom\aom.h>
//## auto_generated
#include "ArchitecturalAnalysisPkg.h"
//## package ArchitecturalAnalysisPkg

//## class I_Weather
class I_Weather {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedI_Weather;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    I_Weather();
    
    //## auto_generated
    virtual ~I_Weather();
    
    ////    Operations    ////
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedI_Weather : virtual public AOMInstance {
    DECLARE_META(I_Weather, OMAnimatedI_Weather)
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\I_Weather.h
*********************************************************************/
