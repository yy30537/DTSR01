/********************************************************************
	Rhapsody	: 9.0 
	Login		: Yang
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: HVAC
//!	Generated Date	: Sun, 9, Jul 2023  
	File Path	: DefaultComponent\DefaultConfig\HVAC.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "HVAC.h"
//## link itsNetwork
#include "Network.h"
//#[ ignore
#define ArchitecturalAnalysisPkg_HVAC_HVAC_SERIALIZE OM_NO_OP

#define ArchitecturalAnalysisPkg_HVAC_getTemp_SERIALIZE OM_NO_OP

#define ArchitecturalAnalysisPkg_HVAC_setTemp_SERIALIZE aomsmethod->addAttribute("arg_temp", x2String(arg_temp));
//#]

//## package ArchitecturalAnalysisPkg

//## class HVAC
//#[ ignore
HVAC::pHVAC_C::pHVAC_C() : _p_(0) {
    itsI_HVAC = NULL;
}

HVAC::pHVAC_C::~pHVAC_C() {
    cleanUpRelations();
}

void HVAC::pHVAC_C::connectHVAC(HVAC* part) {
    setItsI_HVAC(part);
    
}

I_HVAC* HVAC::pHVAC_C::getItsI_HVAC() {
    return this;
}

int HVAC::pHVAC_C::getTemp() {
    int res = 0;
    if (itsI_HVAC != NULL) {
        res = itsI_HVAC->getTemp();
    }
    return res;
}

void HVAC::pHVAC_C::setTemp(int arg_temp) {
    
    if (itsI_HVAC != NULL) {
        itsI_HVAC->setTemp(arg_temp);
    }
    
}

void HVAC::pHVAC_C::setItsI_HVAC(I_HVAC* p_I_HVAC) {
    itsI_HVAC = p_I_HVAC;
}

void HVAC::pHVAC_C::cleanUpRelations() {
    if(itsI_HVAC != NULL)
        {
            itsI_HVAC = NULL;
        }
}
//#]

HVAC::HVAC() : status_AC(false), status_Heating(false), status_Vent(false), temp_HVAC(26) {
    NOTIFY_CONSTRUCTOR(HVAC, HVAC(), 0, ArchitecturalAnalysisPkg_HVAC_HVAC_SERIALIZE);
    itsNetwork = NULL;
    initRelations();
}

HVAC::~HVAC() {
    NOTIFY_DESTRUCTOR(~HVAC, false);
    cleanUpRelations();
}

int HVAC::getTemp() {
    NOTIFY_OPERATION(getTemp, getTemp(), 0, ArchitecturalAnalysisPkg_HVAC_getTemp_SERIALIZE);
    //#[ operation getTemp()
    std::cout<<"getTemp()\n";
    std::cout<<"temp_HVAC="<<temp_HVAC<<"\n";
    return temp_HVAC;
    //#]
}

void HVAC::setTemp(int arg_temp) {
    NOTIFY_OPERATION(setTemp, setTemp(int), 1, ArchitecturalAnalysisPkg_HVAC_setTemp_SERIALIZE);
    //#[ operation setTemp(int)
    std::cout<<"setTemp("<<arg_temp<<")\n";
    temp_HVAC=arg_temp;
    std::cout<<"temp_HVAC="<<temp_HVAC<<"\n";
    //#]
}

HVAC::pHVAC_C* HVAC::getPHVAC() const {
    return (HVAC::pHVAC_C*) &pHVAC;
}

HVAC::pHVAC_C* HVAC::get_pHVAC() const {
    return (HVAC::pHVAC_C*) &pHVAC;
}

bool HVAC::getStatus_AC() const {
    return status_AC;
}

void HVAC::setStatus_AC(bool p_status_AC) {
    status_AC = p_status_AC;
}

bool HVAC::getStatus_Heating() const {
    return status_Heating;
}

void HVAC::setStatus_Heating(bool p_status_Heating) {
    status_Heating = p_status_Heating;
}

bool HVAC::getStatus_Vent() const {
    return status_Vent;
}

void HVAC::setStatus_Vent(bool p_status_Vent) {
    status_Vent = p_status_Vent;
}

int HVAC::getTemp_HVAC() const {
    return temp_HVAC;
}

void HVAC::setTemp_HVAC(int p_temp_HVAC) {
    temp_HVAC = p_temp_HVAC;
}

Network* HVAC::getItsNetwork() const {
    return itsNetwork;
}

void HVAC::setItsNetwork(Network* p_Network) {
    if(p_Network != NULL)
        {
            p_Network->_setItsHVAC(this);
        }
    _setItsNetwork(p_Network);
}

void HVAC::initRelations() {
    if (get_pHVAC() != NULL) {
        get_pHVAC()->connectHVAC(this);
    }
}

void HVAC::cleanUpRelations() {
    if(itsNetwork != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsNetwork");
            HVAC* p_HVAC = itsNetwork->getItsHVAC();
            if(p_HVAC != NULL)
                {
                    itsNetwork->__setItsHVAC(NULL);
                }
            itsNetwork = NULL;
        }
}

void HVAC::__setItsNetwork(Network* p_Network) {
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

void HVAC::_setItsNetwork(Network* p_Network) {
    if(itsNetwork != NULL)
        {
            itsNetwork->__setItsHVAC(NULL);
        }
    __setItsNetwork(p_Network);
}

void HVAC::_clearItsNetwork() {
    NOTIFY_RELATION_CLEARED("itsNetwork");
    itsNetwork = NULL;
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedHVAC::serializeAttributes(AOMSAttributes* aomsAttributes) const {
    aomsAttributes->addAttribute("temp_HVAC", x2String(myReal->temp_HVAC));
    aomsAttributes->addAttribute("status_AC", x2String(myReal->status_AC));
    aomsAttributes->addAttribute("status_Heating", x2String(myReal->status_Heating));
    aomsAttributes->addAttribute("status_Vent", x2String(myReal->status_Vent));
    OMAnimatedI_HVAC::serializeAttributes(aomsAttributes);
}

void OMAnimatedHVAC::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsNetwork", false, true);
    if(myReal->itsNetwork)
        {
            aomsRelations->ADD_ITEM(myReal->itsNetwork);
        }
    OMAnimatedI_HVAC::serializeRelations(aomsRelations);
}
//#]

IMPLEMENT_META_S_P(HVAC, ArchitecturalAnalysisPkg, false, I_HVAC, OMAnimatedI_HVAC, OMAnimatedHVAC)

OMINIT_SUPERCLASS(I_HVAC, OMAnimatedI_HVAC)

OMREGISTER_CLASS
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\HVAC.cpp
*********************************************************************/
