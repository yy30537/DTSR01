/*********************************************************************
	Rhapsody	: 9.0 
	Login		: Administrator
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Heating
//!	Generated Date	: Fri, 14, Jul 2023  
	File Path	: DefaultComponent\DefaultConfig\Heating.h
*********************************************************************/

#ifndef Heating_H
#define Heating_H

//## auto_generated
#include <oxf\oxf.h>
//## auto_generated
#include <..\Profiles\SysML\SIDefinitions.h>
//## auto_generated
#include <aom\aom.h>
//## auto_generated
#include "ArchitecturalAnalysisPkg.h"
//## package ArchitecturalAnalysisPkg

//## class Heating
class Heating {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedHeating;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    Heating();
    
    //## auto_generated
    ~Heating();
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedHeating : virtual public AOMInstance {
    DECLARE_META(Heating, OMAnimatedHeating)
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Heating.h
*********************************************************************/
