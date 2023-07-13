/*********************************************************************
	Rhapsody	: 9.0 
	Login		: Administrator
	Component	: DefaultComponent 
	Configuration 	: Network_Simulation
	Model Element	: I_CO2
//!	Generated Date	: Thu, 13, Jul 2023  
	File Path	: DefaultComponent\Network_Simulation\I_CO2.h
*********************************************************************/

#ifndef I_CO2_H
#define I_CO2_H

//## auto_generated
#include <oxf\oxf.h>
//## auto_generated
#include <..\Profiles\SysML\SIDefinitions.h>
//## auto_generated
#include <aom\aom.h>
//## auto_generated
#include "ArchitecturalAnalysisPkg.h"
//## package ArchitecturalAnalysisPkg

//## class I_CO2
class I_CO2 {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedI_CO2;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    I_CO2();
    
    //## auto_generated
    virtual ~I_CO2() = 0;
    
    ////    Operations    ////
    
    //## operation get_CO2_Alarm()
    virtual bool get_CO2_Alarm() = 0;
    
    //## operation set_CO2_Alarm(bool)
    virtual void set_CO2_Alarm(bool arg_CO2_state) = 0;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedI_CO2 : virtual public AOMInstance {
    DECLARE_META(I_CO2, OMAnimatedI_CO2)
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\Network_Simulation\I_CO2.h
*********************************************************************/
