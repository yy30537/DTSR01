/********************************************************************
	Rhapsody	: 9.0 
	Login		: Administrator
	Component	: DefaultComponent 
	Configuration 	: Network_Simulation
	Model Element	: Webcam
//!	Generated Date	: Thu, 22, Jun 2023  
	File Path	: DefaultComponent\Network_Simulation\Webcam.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "Webcam.h"
//## link itsNetwork
#include "Network.h"
//#[ ignore
#define ArchitecturalAnalysisPkg_Webcam_Webcam_SERIALIZE OM_NO_OP
//#]

//## package ArchitecturalAnalysisPkg

//## class Webcam
Webcam::Webcam() {
    NOTIFY_CONSTRUCTOR(Webcam, Webcam(), 0, ArchitecturalAnalysisPkg_Webcam_Webcam_SERIALIZE);
    itsNetwork = NULL;
}

Webcam::~Webcam() {
    NOTIFY_DESTRUCTOR(~Webcam, true);
    cleanUpRelations();
}

bool Webcam::getIsOn() const {
    return isOn;
}

void Webcam::setIsOn(bool p_isOn) {
    isOn = p_isOn;
}

Network* Webcam::getItsNetwork() const {
    return itsNetwork;
}

void Webcam::setItsNetwork(Network* p_Network) {
    if(p_Network != NULL)
        {
            p_Network->_setItsWebcam(this);
        }
    _setItsNetwork(p_Network);
}

void Webcam::cleanUpRelations() {
    if(itsNetwork != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsNetwork");
            Webcam* p_Webcam = itsNetwork->getItsWebcam();
            if(p_Webcam != NULL)
                {
                    itsNetwork->__setItsWebcam(NULL);
                }
            itsNetwork = NULL;
        }
}

void Webcam::__setItsNetwork(Network* p_Network) {
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

void Webcam::_setItsNetwork(Network* p_Network) {
    if(itsNetwork != NULL)
        {
            itsNetwork->__setItsWebcam(NULL);
        }
    __setItsNetwork(p_Network);
}

void Webcam::_clearItsNetwork() {
    NOTIFY_RELATION_CLEARED("itsNetwork");
    itsNetwork = NULL;
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedWebcam::serializeAttributes(AOMSAttributes* aomsAttributes) const {
    aomsAttributes->addAttribute("isOn", x2String(myReal->isOn));
}

void OMAnimatedWebcam::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsNetwork", false, true);
    if(myReal->itsNetwork)
        {
            aomsRelations->ADD_ITEM(myReal->itsNetwork);
        }
}
//#]

IMPLEMENT_META_P(Webcam, ArchitecturalAnalysisPkg, ArchitecturalAnalysisPkg, false, OMAnimatedWebcam)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\Network_Simulation\Webcam.cpp
*********************************************************************/
