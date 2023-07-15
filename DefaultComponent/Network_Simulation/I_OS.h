/*********************************************************************
	Rhapsody	: 9.0 
	Login		: Yang
	Component	: DefaultComponent 
	Configuration 	: Network_Simulation
	Model Element	: I_OS
//!	Generated Date	: Sat, 15, Jul 2023  
	File Path	: DefaultComponent\Network_Simulation\I_OS.h
*********************************************************************/

#ifndef I_OS_H
#define I_OS_H

//## auto_generated
#include <oxf\oxf.h>
//## auto_generated
#include <..\Profiles\SysML\SIDefinitions.h>
//## auto_generated
#include <aom\aom.h>
//## auto_generated
#include "ArchitecturalAnalysisPkg.h"
//## package ArchitecturalAnalysisPkg

//## class I_OS
class I_OS {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedI_OS;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    I_OS();
    
    //## auto_generated
    virtual ~I_OS() = 0;
    
    ////    Operations    ////
    
    //## operation getOccupied()
    virtual bool getOccupied() = 0;
    
    //## operation setOccupied(bool)
    virtual void setOccupied(bool arg_occupied) = 0;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedI_OS : virtual public AOMInstance {
    DECLARE_META(I_OS, OMAnimatedI_OS)
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\Network_Simulation\I_OS.h
*********************************************************************/
