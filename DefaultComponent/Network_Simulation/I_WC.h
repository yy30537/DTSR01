/*********************************************************************
	Rhapsody	: 9.0 
	Login		: Yang
	Component	: DefaultComponent 
	Configuration 	: Network_Simulation
	Model Element	: I_WC
//!	Generated Date	: Sat, 15, Jul 2023  
	File Path	: DefaultComponent\Network_Simulation\I_WC.h
*********************************************************************/

#ifndef I_WC_H
#define I_WC_H

//## auto_generated
#include <oxf\oxf.h>
//## auto_generated
#include <..\Profiles\SysML\SIDefinitions.h>
//## auto_generated
#include <aom\aom.h>
//## auto_generated
#include "ArchitecturalAnalysisPkg.h"
//## package ArchitecturalAnalysisPkg

//## class I_WC
class I_WC {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedI_WC;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    I_WC();
    
    //## auto_generated
    virtual ~I_WC() = 0;
    
    ////    Operations    ////
    
    //## operation getState()
    virtual bool getState() = 0;
    
    //## operation setState(bool)
    virtual void setState(bool argState) = 0;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedI_WC : virtual public AOMInstance {
    DECLARE_META(I_WC, OMAnimatedI_WC)
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\Network_Simulation\I_WC.h
*********************************************************************/
