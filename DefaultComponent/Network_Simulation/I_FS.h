/*********************************************************************
	Rhapsody	: 9.0 
	Login		: Administrator
	Component	: DefaultComponent 
	Configuration 	: Network_Simulation
	Model Element	: I_FS
//!	Generated Date	: Sun, 16, Jul 2023  
	File Path	: DefaultComponent\Network_Simulation\I_FS.h
*********************************************************************/

#ifndef I_FS_H
#define I_FS_H

//## auto_generated
#include <oxf\oxf.h>
//## auto_generated
#include <..\Profiles\SysML\SIDefinitions.h>
//## auto_generated
#include <aom\aom.h>
//## auto_generated
#include "ArchitecturalAnalysisPkg.h"
//## package ArchitecturalAnalysisPkg

//## class I_FS
class I_FS {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedI_FS;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    I_FS();
    
    //## auto_generated
    virtual ~I_FS() = 0;
    
    ////    Operations    ////
    
    //## operation getState()
    virtual bool getState() = 0;
    
    //## operation setState(bool)
    virtual void setState(bool argState) = 0;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedI_FS : virtual public AOMInstance {
    DECLARE_META(I_FS, OMAnimatedI_FS)
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\Network_Simulation\I_FS.h
*********************************************************************/
