/********************************************************************
	Rhapsody	: 9.0 
	Login		: Administrator
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Speakers
//!	Generated Date	: Sun, 16, Jul 2023  
	File Path	: DefaultComponent\DefaultConfig\Speakers.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "Speakers.h"
//#[ ignore
#define ArchitecturalAnalysisPkg_Speakers_Speakers_SERIALIZE OM_NO_OP

#define ArchitecturalAnalysisPkg_Speakers_getStateSpkr_SERIALIZE OM_NO_OP

#define ArchitecturalAnalysisPkg_Speakers_setStateSpkr_SERIALIZE aomsmethod->addAttribute("argState", x2String(argState));
//#]

//## package ArchitecturalAnalysisPkg

//## class Speakers
//#[ ignore
Speakers::pSpeakers_C::pSpeakers_C() : _p_(0) {
    itsI_Spkr = NULL;
}

Speakers::pSpeakers_C::~pSpeakers_C() {
    cleanUpRelations();
}

void Speakers::pSpeakers_C::connectSpeakers(Speakers* part) {
    setItsI_Spkr(part);
    
}

I_Spkr* Speakers::pSpeakers_C::getItsI_Spkr() {
    return this;
}

bool Speakers::pSpeakers_C::getStateSpkr() {
    bool res = false;
    if (itsI_Spkr != NULL) {
        res = itsI_Spkr->getStateSpkr();
    }
    return res;
}

void Speakers::pSpeakers_C::setStateSpkr(bool argState) {
    
    if (itsI_Spkr != NULL) {
        itsI_Spkr->setStateSpkr(argState);
    }
    
}

void Speakers::pSpeakers_C::setItsI_Spkr(I_Spkr* p_I_Spkr) {
    itsI_Spkr = p_I_Spkr;
}

void Speakers::pSpeakers_C::cleanUpRelations() {
    if(itsI_Spkr != NULL)
        {
            itsI_Spkr = NULL;
        }
}
//#]

Speakers::Speakers() : state(false) {
    NOTIFY_CONSTRUCTOR(Speakers, Speakers(), 0, ArchitecturalAnalysisPkg_Speakers_Speakers_SERIALIZE);
    initRelations();
}

Speakers::~Speakers() {
    NOTIFY_DESTRUCTOR(~Speakers, false);
}

bool Speakers::getStateSpkr() {
    NOTIFY_OPERATION(getStateSpkr, getStateSpkr(), 0, ArchitecturalAnalysisPkg_Speakers_getStateSpkr_SERIALIZE);
    //#[ operation getStateSpkr()
    return state;
    //#]
}

void Speakers::setStateSpkr(bool argState) {
    NOTIFY_OPERATION(setStateSpkr, setStateSpkr(bool), 1, ArchitecturalAnalysisPkg_Speakers_setStateSpkr_SERIALIZE);
    //#[ operation setStateSpkr(bool)
    state=argState;
    //#]
}

Speakers::pSpeakers_C* Speakers::getPSpeakers() const {
    return (Speakers::pSpeakers_C*) &pSpeakers;
}

Speakers::pSpeakers_C* Speakers::get_pSpeakers() const {
    return (Speakers::pSpeakers_C*) &pSpeakers;
}

void Speakers::initRelations() {
    if (get_pSpeakers() != NULL) {
        get_pSpeakers()->connectSpeakers(this);
    }
}

bool Speakers::getState() const {
    return state;
}

void Speakers::setState(bool p_state) {
    state = p_state;
    NOTIFY_SET_OPERATION;
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedSpeakers::serializeAttributes(AOMSAttributes* aomsAttributes) const {
    aomsAttributes->addAttribute("state", x2String(myReal->state));
    OMAnimatedI_Spkr::serializeAttributes(aomsAttributes);
}

void OMAnimatedSpeakers::serializeRelations(AOMSRelations* aomsRelations) const {
    OMAnimatedI_Spkr::serializeRelations(aomsRelations);
}
//#]

IMPLEMENT_META_S_P(Speakers, ArchitecturalAnalysisPkg, false, I_Spkr, OMAnimatedI_Spkr, OMAnimatedSpeakers)

OMINIT_SUPERCLASS(I_Spkr, OMAnimatedI_Spkr)

OMREGISTER_CLASS
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Speakers.cpp
*********************************************************************/
