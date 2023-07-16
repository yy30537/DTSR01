/********************************************************************
	Rhapsody	: 9.0 
	Login		: Administrator
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Microphones
//!	Generated Date	: Sun, 16, Jul 2023  
	File Path	: DefaultComponent\DefaultConfig\Microphones.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "Microphones.h"
//#[ ignore
#define ArchitecturalAnalysisPkg_Microphones_Microphones_SERIALIZE OM_NO_OP

#define ArchitecturalAnalysisPkg_Microphones_getStateMic_SERIALIZE OM_NO_OP

#define ArchitecturalAnalysisPkg_Microphones_setStateMic_SERIALIZE aomsmethod->addAttribute("argState", x2String(argState));
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

bool Microphones::pMic_C::getStateMic() {
    bool res = false;
    if (itsI_Mic != NULL) {
        res = itsI_Mic->getStateMic();
    }
    return res;
}

void Microphones::pMic_C::setStateMic(bool argState) {
    
    if (itsI_Mic != NULL) {
        itsI_Mic->setStateMic(argState);
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

bool Microphones::getStateMic() {
    NOTIFY_OPERATION(getStateMic, getStateMic(), 0, ArchitecturalAnalysisPkg_Microphones_getStateMic_SERIALIZE);
    //#[ operation getStateMic()
    return state;
    //#]
}

void Microphones::setStateMic(bool argState) {
    NOTIFY_OPERATION(setStateMic, setStateMic(bool), 1, ArchitecturalAnalysisPkg_Microphones_setStateMic_SERIALIZE);
    //#[ operation setStateMic(bool)
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

bool Microphones::getState() const {
    return state;
}

void Microphones::setState(bool p_state) {
    state = p_state;
    NOTIFY_SET_OPERATION;
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
