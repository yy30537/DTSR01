/*********************************************************************
	Rhapsody	: 9.0 
	Login		: Administrator
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: External_Personnel
//!	Generated Date	: Fri, 14, Jul 2023  
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
//## package ArchitecturalAnalysisPkg

//## class External_Personnel
class External_Personnel {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedExternal_Personnel;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    External_Personnel();
    
    //## auto_generated
    ~External_Personnel();
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
