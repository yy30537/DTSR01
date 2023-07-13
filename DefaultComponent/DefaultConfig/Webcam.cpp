/********************************************************************
	Rhapsody	: 9.0 
	Login		: Administrator
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Webcam
//!	Generated Date	: Thu, 13, Jul 2023  
	File Path	: DefaultComponent\DefaultConfig\Webcam.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "Webcam.h"
//#[ ignore
#define ArchitecturalAnalysisPkg_Webcam_Webcam_SERIALIZE OM_NO_OP
//#]

//## package ArchitecturalAnalysisPkg

//## class Webcam
Webcam::Webcam() {
    NOTIFY_CONSTRUCTOR(Webcam, Webcam(), 0, ArchitecturalAnalysisPkg_Webcam_Webcam_SERIALIZE);
}

Webcam::~Webcam() {
    NOTIFY_DESTRUCTOR(~Webcam, true);
}

#ifdef _OMINSTRUMENT
IMPLEMENT_META_P(Webcam, ArchitecturalAnalysisPkg, ArchitecturalAnalysisPkg, false, OMAnimatedWebcam)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Webcam.cpp
*********************************************************************/
