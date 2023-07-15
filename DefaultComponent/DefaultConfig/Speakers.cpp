/********************************************************************
	Rhapsody	: 9.0 
	Login		: Yang
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Speakers
//!	Generated Date	: Sat, 15, Jul 2023  
	File Path	: DefaultComponent\DefaultConfig\Speakers.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "Speakers.h"
//#[ ignore
#define ArchitecturalAnalysisPkg_Speakers_Speakers_SERIALIZE OM_NO_OP
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

Speakers::Speakers() {
    NOTIFY_CONSTRUCTOR(Speakers, Speakers(), 0, ArchitecturalAnalysisPkg_Speakers_Speakers_SERIALIZE);
    initRelations();
}

Speakers::~Speakers() {
    NOTIFY_DESTRUCTOR(~Speakers, false);
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

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedSpeakers::serializeAttributes(AOMSAttributes* aomsAttributes) const {
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
