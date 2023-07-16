/*********************************************************************
	Rhapsody	: 9.0 
	Login		: Administrator
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: I_MS
//!	Generated Date	: Sun, 16, Jul 2023  
	File Path	: DefaultComponent\DefaultConfig\I_MS.h
*********************************************************************/

#ifndef I_MS_H
#define I_MS_H

//## auto_generated
#include <oxf\oxf.h>
//## auto_generated
#include <..\Profiles\SysML\SIDefinitions.h>
//## auto_generated
#include <aom\aom.h>
//## auto_generated
#include "ArchitecturalAnalysisPkg.h"
//## package ArchitecturalAnalysisPkg

//## class I_MS
class I_MS {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedI_MS;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    I_MS();
    
    //## auto_generated
    virtual ~I_MS() = 0;
    
    ////    Operations    ////
    
    //## operation getMM()
    virtual bool getMM() = 0;
    
    //## operation setMM(bool)
    virtual void setMM(bool arg) = 0;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedI_MS : virtual public AOMInstance {
    DECLARE_META(I_MS, OMAnimatedI_MS)
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\I_MS.h
*********************************************************************/
