/********************************************************************
	Rhapsody	: 9.0 
	Login		: Administrator
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Lights
//!	Generated Date	: Sat, 15, Jul 2023  
	File Path	: DefaultComponent\DefaultConfig\Lights.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "Lights.h"
//## link itsNetwork
#include "Network.h"
//#[ ignore
#define ArchitecturalAnalysisPkg_Lights_Lights_SERIALIZE OM_NO_OP

#define ArchitecturalAnalysisPkg_Lights_getItensity_SERIALIZE OM_NO_OP

#define ArchitecturalAnalysisPkg_Lights_getState_SERIALIZE OM_NO_OP

#define ArchitecturalAnalysisPkg_Lights_setIntensity_SERIALIZE aomsmethod->addAttribute("arg_intensity", x2String(arg_intensity));

#define ArchitecturalAnalysisPkg_Lights_setState_SERIALIZE aomsmethod->addAttribute("arg", x2String(arg));
//#]

//## package ArchitecturalAnalysisPkg

//## class Lights
//#[ ignore
Lights::pLights_C::pLights_C() : _p_(0) {
    itsI_Light = NULL;
}

Lights::pLights_C::~pLights_C() {
    cleanUpRelations();
}

void Lights::pLights_C::connectLights(Lights* part) {
    setItsI_Light(part);
    
}

int Lights::pLights_C::getItensity() {
    int res = 0;
    if (itsI_Light != NULL) {
        res = itsI_Light->getItensity();
    }
    return res;
}

I_Light* Lights::pLights_C::getItsI_Light() {
    return this;
}

bool Lights::pLights_C::getState() {
    bool res = false;
    if (itsI_Light != NULL) {
        res = itsI_Light->getState();
    }
    return res;
}

void Lights::pLights_C::setIntensity(int arg_intensity) {
    
    if (itsI_Light != NULL) {
        itsI_Light->setIntensity(arg_intensity);
    }
    
}

void Lights::pLights_C::setState(bool arg) {
    
    if (itsI_Light != NULL) {
        itsI_Light->setState(arg);
    }
    
}

void Lights::pLights_C::setItsI_Light(I_Light* p_I_Light) {
    itsI_Light = p_I_Light;
}

void Lights::pLights_C::cleanUpRelations() {
    if(itsI_Light != NULL)
        {
            itsI_Light = NULL;
        }
}
//#]

Lights::Lights() : intensity(0) {
    NOTIFY_CONSTRUCTOR(Lights, Lights(), 0, ArchitecturalAnalysisPkg_Lights_Lights_SERIALIZE);
    itsNetwork = NULL;
    initRelations();
}

Lights::~Lights() {
    NOTIFY_DESTRUCTOR(~Lights, false);
    cleanUpRelations();
}

int Lights::getItensity() {
    NOTIFY_OPERATION(getItensity, getItensity(), 0, ArchitecturalAnalysisPkg_Lights_getItensity_SERIALIZE);
    //#[ operation getItensity()
    return intensity;
    //#]
}

Lights::pLights_C* Lights::getPLights() const {
    return (Lights::pLights_C*) &pLights;
}

Lights::pLights_C* Lights::get_pLights() const {
    return (Lights::pLights_C*) &pLights;
}

int Lights::getIntensity() const {
    return intensity;
}

Network* Lights::getItsNetwork() const {
    return itsNetwork;
}

void Lights::setItsNetwork(Network* p_Network) {
    if(p_Network != NULL)
        {
            p_Network->_setItsLights(this);
        }
    _setItsNetwork(p_Network);
}

void Lights::initRelations() {
    if (get_pLights() != NULL) {
        get_pLights()->connectLights(this);
    }
}

void Lights::cleanUpRelations() {
    if(itsNetwork != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsNetwork");
            Lights* p_Lights = itsNetwork->getItsLights();
            if(p_Lights != NULL)
                {
                    itsNetwork->__setItsLights(NULL);
                }
            itsNetwork = NULL;
        }
}

void Lights::__setItsNetwork(Network* p_Network) {
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

void Lights::_setItsNetwork(Network* p_Network) {
    if(itsNetwork != NULL)
        {
            itsNetwork->__setItsLights(NULL);
        }
    __setItsNetwork(p_Network);
}

void Lights::_clearItsNetwork() {
    NOTIFY_RELATION_CLEARED("itsNetwork");
    itsNetwork = NULL;
}

void Lights::setIntensity(int arg_intensity) {
    NOTIFY_OPERATION(setIntensity, setIntensity(int), 1, ArchitecturalAnalysisPkg_Lights_setIntensity_SERIALIZE);
    //#[ operation setIntensity(int)
    intensity=arg_intensity;
    //#]
}

bool Lights::getState() {
    NOTIFY_OPERATION(getState, getState(), 0, ArchitecturalAnalysisPkg_Lights_getState_SERIALIZE);
    //#[ operation getState()
    return state;
    //#]
}

void Lights::setState(bool arg) {
    NOTIFY_OPERATION(setState, setState(bool), 1, ArchitecturalAnalysisPkg_Lights_setState_SERIALIZE);
    //#[ operation setState(bool)
    state=arg;
    //#]
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedLights::serializeAttributes(AOMSAttributes* aomsAttributes) const {
    aomsAttributes->addAttribute("intensity", x2String(myReal->intensity));
    aomsAttributes->addAttribute("state", x2String(myReal->state));
    OMAnimatedI_Light::serializeAttributes(aomsAttributes);
}

void OMAnimatedLights::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsNetwork", false, true);
    if(myReal->itsNetwork)
        {
            aomsRelations->ADD_ITEM(myReal->itsNetwork);
        }
    OMAnimatedI_Light::serializeRelations(aomsRelations);
}
//#]

IMPLEMENT_META_S_P(Lights, ArchitecturalAnalysisPkg, false, I_Light, OMAnimatedI_Light, OMAnimatedLights)

OMINIT_SUPERCLASS(I_Light, OMAnimatedI_Light)

OMREGISTER_CLASS
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Lights.cpp
*********************************************************************/
