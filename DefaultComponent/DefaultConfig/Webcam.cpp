/********************************************************************
	Rhapsody	: 9.0 
	Login		: Administrator
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Webcam
//!	Generated Date	: Sun, 16, Jul 2023  
	File Path	: DefaultComponent\DefaultConfig\Webcam.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "Webcam.h"
//#[ ignore
#define ArchitecturalAnalysisPkg_Webcam_Webcam_SERIALIZE OM_NO_OP

#define ArchitecturalAnalysisPkg_Webcam_getWC_SERIALIZE OM_NO_OP

#define ArchitecturalAnalysisPkg_Webcam_setWC_SERIALIZE aomsmethod->addAttribute("arg", x2String(arg));
//#]

//## package ArchitecturalAnalysisPkg

//## class Webcam
//#[ ignore
Webcam::pWebcam_C::pWebcam_C() : _p_(0) {
    itsI_WC = NULL;
}

Webcam::pWebcam_C::~pWebcam_C() {
    cleanUpRelations();
}

void Webcam::pWebcam_C::connectWebcam(Webcam* part) {
    setItsI_WC(part);
    
}

I_WC* Webcam::pWebcam_C::getItsI_WC() {
    return this;
}

bool Webcam::pWebcam_C::getWC() {
    bool res = false;
    if (itsI_WC != NULL) {
        res = itsI_WC->getWC();
    }
    return res;
}

void Webcam::pWebcam_C::setWC(bool arg) {
    
    if (itsI_WC != NULL) {
        itsI_WC->setWC(arg);
    }
    
}

void Webcam::pWebcam_C::setItsI_WC(I_WC* p_I_WC) {
    itsI_WC = p_I_WC;
}

void Webcam::pWebcam_C::cleanUpRelations() {
    if(itsI_WC != NULL)
        {
            itsI_WC = NULL;
        }
}
//#]

Webcam::Webcam() : state(false) {
    NOTIFY_CONSTRUCTOR(Webcam, Webcam(), 0, ArchitecturalAnalysisPkg_Webcam_Webcam_SERIALIZE);
    initRelations();
}

Webcam::~Webcam() {
    NOTIFY_DESTRUCTOR(~Webcam, false);
}

Webcam::pWebcam_C* Webcam::getPWebcam() const {
    return (Webcam::pWebcam_C*) &pWebcam;
}

Webcam::pWebcam_C* Webcam::get_pWebcam() const {
    return (Webcam::pWebcam_C*) &pWebcam;
}

void Webcam::initRelations() {
    if (get_pWebcam() != NULL) {
        get_pWebcam()->connectWebcam(this);
    }
}

bool Webcam::getWC() {
    NOTIFY_OPERATION(getWC, getWC(), 0, ArchitecturalAnalysisPkg_Webcam_getWC_SERIALIZE);
    //#[ operation getWC()
    return state;
    //#]
}

void Webcam::setWC(bool arg) {
    NOTIFY_OPERATION(setWC, setWC(bool), 1, ArchitecturalAnalysisPkg_Webcam_setWC_SERIALIZE);
    //#[ operation setWC(bool)
    state=arg;
    //#]
}

bool Webcam::getState() const {
    return state;
}

void Webcam::setState(bool p_state) {
    state = p_state;
    NOTIFY_SET_OPERATION;
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedWebcam::serializeAttributes(AOMSAttributes* aomsAttributes) const {
    aomsAttributes->addAttribute("state", x2String(myReal->state));
    OMAnimatedI_WC::serializeAttributes(aomsAttributes);
}

void OMAnimatedWebcam::serializeRelations(AOMSRelations* aomsRelations) const {
    OMAnimatedI_WC::serializeRelations(aomsRelations);
}
//#]

IMPLEMENT_META_S_P(Webcam, ArchitecturalAnalysisPkg, false, I_WC, OMAnimatedI_WC, OMAnimatedWebcam)

OMINIT_SUPERCLASS(I_WC, OMAnimatedI_WC)

OMREGISTER_CLASS
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Webcam.cpp
*********************************************************************/
