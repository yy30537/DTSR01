/********************************************************************
	Rhapsody	: 9.0 
	Login		: Yang
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Microphones
//!	Generated Date	: Sat, 8, Jul 2023  
	File Path	: DefaultComponent\DefaultConfig\Microphones.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "Microphones.h"
//## link itsNetwork
#include "Network.h"
//#[ ignore
#define ArchitecturalAnalysisPkg_Microphones_Microphones_SERIALIZE OM_NO_OP
//#]

//## package ArchitecturalAnalysisPkg

//## class Microphones
Microphones::Microphones() : isOn(0), volume(0) {
    NOTIFY_CONSTRUCTOR(Microphones, Microphones(), 0, ArchitecturalAnalysisPkg_Microphones_Microphones_SERIALIZE);
    itsNetwork = NULL;
}

Microphones::~Microphones() {
    NOTIFY_DESTRUCTOR(~Microphones, true);
    cleanUpRelations();
}

bool Microphones::getIsOn() const {
    return isOn;
}

void Microphones::setIsOn(bool p_isOn) {
    isOn = p_isOn;
}

int Microphones::getVolume() const {
    return volume;
}

void Microphones::setVolume(int p_volume) {
    volume = p_volume;
}

Network* Microphones::getItsNetwork() const {
    return itsNetwork;
}

void Microphones::setItsNetwork(Network* p_Network) {
    if(p_Network != NULL)
        {
            p_Network->_setItsMicrophones(this);
        }
    _setItsNetwork(p_Network);
}

void Microphones::cleanUpRelations() {
    if(itsNetwork != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsNetwork");
            Microphones* p_Microphones = itsNetwork->getItsMicrophones();
            if(p_Microphones != NULL)
                {
                    itsNetwork->__setItsMicrophones(NULL);
                }
            itsNetwork = NULL;
        }
}

void Microphones::__setItsNetwork(Network* p_Network) {
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

void Microphones::_setItsNetwork(Network* p_Network) {
    if(itsNetwork != NULL)
        {
            itsNetwork->__setItsMicrophones(NULL);
        }
    __setItsNetwork(p_Network);
}

void Microphones::_clearItsNetwork() {
    NOTIFY_RELATION_CLEARED("itsNetwork");
    itsNetwork = NULL;
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedMicrophones::serializeAttributes(AOMSAttributes* aomsAttributes) const {
    aomsAttributes->addAttribute("isOn", x2String(myReal->isOn));
    aomsAttributes->addAttribute("volume", x2String(myReal->volume));
}

void OMAnimatedMicrophones::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsNetwork", false, true);
    if(myReal->itsNetwork)
        {
            aomsRelations->ADD_ITEM(myReal->itsNetwork);
        }
}
//#]

IMPLEMENT_META_P(Microphones, ArchitecturalAnalysisPkg, ArchitecturalAnalysisPkg, false, OMAnimatedMicrophones)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Microphones.cpp
*********************************************************************/
