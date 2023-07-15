/*********************************************************************
	Rhapsody	: 9.0 
	Login		: Yang
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: I_HVAC
//!	Generated Date	: Sat, 15, Jul 2023  
	File Path	: DefaultComponent\DefaultConfig\I_HVAC.h
*********************************************************************/

#ifndef I_HVAC_H
#define I_HVAC_H

//## auto_generated
#include <oxf\oxf.h>
//## auto_generated
#include <..\Profiles\SysML\SIDefinitions.h>
//## auto_generated
#include <aom\aom.h>
//## auto_generated
#include "ArchitecturalAnalysisPkg.h"
//## package ArchitecturalAnalysisPkg

//## class I_HVAC
class I_HVAC {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedI_HVAC;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    I_HVAC();
    
    //## auto_generated
    virtual ~I_HVAC() = 0;
    
    ////    Operations    ////
    
    //## operation getTemp()
    virtual int getTemp() = 0;
    
    //## operation get_AC_state()
    virtual bool get_AC_state() = 0;
    
    //## operation get_HVAC_state()
    virtual bool get_HVAC_state() = 0;
    
    //## operation get_Heating_state()
    virtual bool get_Heating_state() = 0;
    
    //## operation get_Vent_state()
    virtual bool get_Vent_state() = 0;
    
    //## operation setTemp(int)
    virtual void setTemp(int arg_temp) = 0;
    
    //## operation set_AC_state(bool)
    virtual void set_AC_state(bool arg_AC_state) = 0;
    
    //## operation set_HVAC_state(bool)
    virtual void set_HVAC_state(bool arg_HVAC_state) = 0;
    
    //## operation set_Heating_state(bool)
    virtual void set_Heating_state(bool arg_Heating_state) = 0;
    
    //## operation set_Vent_state(bool)
    virtual void set_Vent_state(bool arg_Vent_state) = 0;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedI_HVAC : virtual public AOMInstance {
    DECLARE_META(I_HVAC, OMAnimatedI_HVAC)
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\I_HVAC.h
*********************************************************************/
