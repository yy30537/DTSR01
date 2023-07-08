/********************************************************************
	Rhapsody	: 9.0 
	Login		: Yang
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Speakers
//!	Generated Date	: Sat, 8, Jul 2023  
	File Path	: DefaultComponent\DefaultConfig\Speakers.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "Speakers.h"
//## link itsNetwork
#include "Network.h"
//#[ ignore
#define ArchitecturalAnalysisPkg_Speakers_Speakers_SERIALIZE OM_NO_OP
//#]

//## package ArchitecturalAnalysisPkg

//## class Speakers
Speakers::Speakers() : isOn(0), volume(0) {
    NOTIFY_CONSTRUCTOR(Speakers, Speakers(), 0, ArchitecturalAnalysisPkg_Speakers_Speakers_SERIALIZE);
    itsNetwork = NULL;
}

Speakers::~Speakers() {
    NOTIFY_DESTRUCTOR(~Speakers, true);
    cleanUpRelations();
}

bool Speakers::getIsOn() const {
    return isOn;
}

void Speakers::setIsOn(bool p_isOn) {
    isOn = p_isOn;
}

int Speakers::getVolume() const {
    return volume;
}

void Speakers::setVolume(int p_volume) {
    volume = p_volume;
}

Network* Speakers::getItsNetwork() const {
    return itsNetwork;
}

void Speakers::setItsNetwork(Network* p_Network) {
    if(p_Network != NULL)
        {
            p_Network->_setItsSpeakers(this);
        }
    _setItsNetwork(p_Network);
}

void Speakers::cleanUpRelations() {
    if(itsNetwork != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsNetwork");
            Speakers* p_Speakers = itsNetwork->getItsSpeakers();
            if(p_Speakers != NULL)
                {
                    itsNetwork->__setItsSpeakers(NULL);
                }
            itsNetwork = NULL;
        }
}

void Speakers::__setItsNetwork(Network* p_Network) {
    itsNetwork = p_Network;
    if(p_Network != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsNetwork", p_Network, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsNetwork");
        }
}

void Speakers::_setItsNetwork(Network* p_Network) {
    if(itsNetwork != NULL)
        {
            itsNetwork->__setItsSpeakers(NULL);
        }
    __setItsNetwork(p_Network);
}

void Speakers::_clearItsNetwork() {
    NOTIFY_RELATION_CLEARED("itsNetwork");
    itsNetwork = NULL;
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedSpeakers::serializeAttributes(AOMSAttributes* aomsAttributes) const {
    aomsAttributes->addAttribute("volume", x2String(myReal->volume));
    aomsAttributes->addAttribute("isOn", x2String(myReal->isOn));
}

void OMAnimatedSpeakers::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsNetwork", false, true);
    if(myReal->itsNetwork)
        {
            aomsRelations->ADD_ITEM(myReal->itsNetwork);
        }
}
//#]

IMPLEMENT_META_P(Speakers, ArchitecturalAnalysisPkg, ArchitecturalAnalysisPkg, false, OMAnimatedSpeakers)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Speakers.cpp
*********************************************************************/
