/*********************************************************************
	Rhapsody	: 9.0 
	Login		: Yang
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Ventilation
//!	Generated Date	: Sun, 9, Jul 2023  
	File Path	: DefaultComponent\DefaultConfig\Ventilation.h
*********************************************************************/

#ifndef Ventilation_H
#define Ventilation_H

//## auto_generated
#include <oxf\oxf.h>
//## auto_generated
#include <..\Profiles\SysML\SIDefinitions.h>
//## auto_generated
#include <aom\aom.h>
//## auto_generated
#include "ArchitecturalAnalysisPkg.h"
//## package ArchitecturalAnalysisPkg

//## class Ventilation
class Ventilation {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedVentilation;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    Ventilation();
    
    //## auto_generated
    ~Ventilation();
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedVentilation : virtual public AOMInstance {
    DECLARE_META(Ventilation, OMAnimatedVentilation)
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Ventilation.h
*********************************************************************/
