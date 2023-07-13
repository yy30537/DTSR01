/*********************************************************************
	Rhapsody	: 9.0 
	Login		: Administrator
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Webcam
//!	Generated Date	: Thu, 13, Jul 2023  
	File Path	: DefaultComponent\DefaultConfig\Webcam.h
*********************************************************************/

#ifndef Webcam_H
#define Webcam_H

//## auto_generated
#include <oxf\oxf.h>
//## auto_generated
#include <..\Profiles\SysML\SIDefinitions.h>
//## auto_generated
#include <aom\aom.h>
//## auto_generated
#include "ArchitecturalAnalysisPkg.h"
//## package ArchitecturalAnalysisPkg

//## class Webcam
class Webcam {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedWebcam;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    Webcam();
    
    //## auto_generated
    ~Webcam();
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedWebcam : virtual public AOMInstance {
    DECLARE_META(Webcam, OMAnimatedWebcam)
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Webcam.h
*********************************************************************/
