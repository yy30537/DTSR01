/********************************************************************
	Rhapsody	: 9.0 
	Login		: Administrator
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Microphones
//!	Generated Date	: Sat, 15, Jul 2023  
	File Path	: DefaultComponent\DefaultConfig\Microphones.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "Microphones.h"
//#[ ignore
#define ArchitecturalAnalysisPkg_Microphones_Microphones_SERIALIZE OM_NO_OP

#define ArchitecturalAnalysisPkg_Microphones_getState_SERIALIZE OM_NO_OP

#define ArchitecturalAnalysisPkg_Microphones_setState_SERIALIZE aomsmethod->addAttribute("argState", x2String(argState));
//#]

//## package ArchitecturalAnalysisPkg

//## class Microphones
//#[ ignore
Microphones::pMic_C::pMic_C() : _p_(0) {
    itsI_Mic = NULL;
}

Microphones::pMic_C::~pMic_C() {
    cleanUpRelations();
}

void Microphones::pMic_C::connectMicrophones(Microphones* part) {
    setItsI_Mic(part);
    
}

I_Mic* Microphones::pMic_C::getItsI_Mic() {
    return this;
}

bool Microphones::pMic_C::getState() {
    bool res = false;
    if (itsI_Mic != NULL) {
        res = itsI_Mic->getState();
    }
    return res;
}

void Microphones::pMic_C::setState(bool argState) {
    
    if (itsI_Mic != NULL) {
        itsI_Mic->setState(argState);
    }
    
}

void Microphones::pMic_C::setItsI_Mic(I_Mic* p_I_Mic) {
    itsI_Mic = p_I_Mic;
}

void Microphones::pMic_C::cleanUpRelations() {
    if(itsI_Mic != NULL)
        {
            itsI_Mic = NULL;
        }
}
//#]

Microphones::Microphones() : state(false) {
    NOTIFY_CONSTRUCTOR(Microphones, Microphones(), 0, ArchitecturalAnalysisPkg_Microphones_Microphones_SERIALIZE);
    initRelations();
}

Microphones::~Microphones() {
    NOTIFY_DESTRUCTOR(~Microphones, false);
}

bool Microphones::getState() {
    NOTIFY_OPERATION(getState, getState(), 0, ArchitecturalAnalysisPkg_Microphones_getState_SERIALIZE);
    //#[ operation getState()
    return state;
    //#]
}

void Microphones::setState(bool argState) {
    NOTIFY_OPERATION(setState, setState(bool), 1, ArchitecturalAnalysisPkg_Microphones_setState_SERIALIZE);
    //#[ operation setState(bool)
    state=argState;
    //#]
}

Microphones::pMic_C* Microphones::getPMic() const {
    return (Microphones::pMic_C*) &pMic;
}

Microphones::pMic_C* Microphones::get_pMic() const {
    return (Microphones::pMic_C*) &pMic;
}

void Microphones::initRelations() {
    if (get_pMic() != NULL) {
        get_pMic()->connectMicrophones(this);
    }
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedMicrophones::serializeAttributes(AOMSAttributes* aomsAttributes) const {
    aomsAttributes->addAttribute("state", x2String(myReal->state));
    OMAnimatedI_Mic::serializeAttributes(aomsAttributes);
}

void OMAnimatedMicrophones::serializeRelations(AOMSRelations* aomsRelations) const {
    OMAnimatedI_Mic::serializeRelations(aomsRelations);
}
//#]

IMPLEMENT_META_S_P(Microphones, ArchitecturalAnalysisPkg, false, I_Mic, OMAnimatedI_Mic, OMAnimatedMicrophones)

OMINIT_SUPERCLASS(I_Mic, OMAnimatedI_Mic)

OMREGISTER_CLASS
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Microphones.cpp
*********************************************************************/
