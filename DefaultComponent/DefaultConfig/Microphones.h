/*********************************************************************
	Rhapsody	: 9.0 
	Login		: Administrator
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Microphones
//!	Generated Date	: Thu, 13, Jul 2023  
	File Path	: DefaultComponent\DefaultConfig\Microphones.h
*********************************************************************/

#ifndef Microphones_H
#define Microphones_H

//## auto_generated
#include <oxf\oxf.h>
//## auto_generated
#include <..\Profiles\SysML\SIDefinitions.h>
//## auto_generated
#include <aom\aom.h>
//## auto_generated
#include "ArchitecturalAnalysisPkg.h"
//## package ArchitecturalAnalysisPkg

//## class Microphones
class Microphones {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedMicrophones;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    Microphones();
    
    //## auto_generated
    ~Microphones();
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedMicrophones : virtual public AOMInstance {
    DECLARE_META(Microphones, OMAnimatedMicrophones)
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Microphones.h
*********************************************************************/
