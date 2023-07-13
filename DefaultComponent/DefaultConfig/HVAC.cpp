/********************************************************************
	Rhapsody	: 9.0 
	Login		: Administrator
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: HVAC
//!	Generated Date	: Thu, 13, Jul 2023  
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

#define ArchitecturalAnalysisPkg_HVAC_get_AC_state_SERIALIZE OM_NO_OP

#define ArchitecturalAnalysisPkg_HVAC_get_HVAC_state_SERIALIZE OM_NO_OP

#define ArchitecturalAnalysisPkg_HVAC_get_Heating_state_SERIALIZE OM_NO_OP

#define ArchitecturalAnalysisPkg_HVAC_get_Vent_state_SERIALIZE OM_NO_OP

#define ArchitecturalAnalysisPkg_HVAC_set_AC_state_SERIALIZE aomsmethod->addAttribute("arg_AC_state", x2String(arg_AC_state));

#define ArchitecturalAnalysisPkg_HVAC_set_HVAC_state_SERIALIZE aomsmethod->addAttribute("arg_HVAC_state", x2String(arg_HVAC_state));

#define ArchitecturalAnalysisPkg_HVAC_set_Heating_state_SERIALIZE aomsmethod->addAttribute("arg_Heating_state", x2String(arg_Heating_state));

#define ArchitecturalAnalysisPkg_HVAC_set_Vent_state_SERIALIZE aomsmethod->addAttribute("arg_Vent_state", x2String(arg_Vent_state));
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

bool HVAC::pHVAC_C::get_AC_state() {
    bool res = false;
    if (itsI_HVAC != NULL) {
        res = itsI_HVAC->get_AC_state();
    }
    return res;
}

bool HVAC::pHVAC_C::get_HVAC_state() {
    bool res = false;
    if (itsI_HVAC != NULL) {
        res = itsI_HVAC->get_HVAC_state();
    }
    return res;
}

bool HVAC::pHVAC_C::get_Heating_state() {
    bool res = false;
    if (itsI_HVAC != NULL) {
        res = itsI_HVAC->get_Heating_state();
    }
    return res;
}

bool HVAC::pHVAC_C::get_Vent_state() {
    bool res = false;
    if (itsI_HVAC != NULL) {
        res = itsI_HVAC->get_Vent_state();
    }
    return res;
}

void HVAC::pHVAC_C::set_AC_state(bool arg_AC_state) {
    
    if (itsI_HVAC != NULL) {
        itsI_HVAC->set_AC_state(arg_AC_state);
    }
    
}

void HVAC::pHVAC_C::set_HVAC_state(bool arg_HVAC_state) {
    
    if (itsI_HVAC != NULL) {
        itsI_HVAC->set_HVAC_state(arg_HVAC_state);
    }
    
}

void HVAC::pHVAC_C::set_Heating_state(bool arg_Heating_state) {
    
    if (itsI_HVAC != NULL) {
        itsI_HVAC->set_Heating_state(arg_Heating_state);
    }
    
}

void HVAC::pHVAC_C::set_Vent_state(bool arg_Vent_state) {
    
    if (itsI_HVAC != NULL) {
        itsI_HVAC->set_Vent_state(arg_Vent_state);
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

HVAC::HVAC() : status_AC(false), status_HVAC(false), status_Heating(false), status_Vent(false), temp(26) {
    NOTIFY_CONSTRUCTOR(HVAC, HVAC(), 0, ArchitecturalAnalysisPkg_HVAC_HVAC_SERIALIZE);
    itsNetwork = NULL;
    initRelations();
}

HVAC::~HVAC() {
    NOTIFY_DESTRUCTOR(~HVAC, false);
    cleanUpRelations();
}

bool HVAC::get_AC_state() {
    NOTIFY_OPERATION(get_AC_state, get_AC_state(), 0, ArchitecturalAnalysisPkg_HVAC_get_AC_state_SERIALIZE);
    //#[ operation get_AC_state()
    std::cout<<"I_HVAC: get AC state";
    std::cout<<"AC status=" << status_AC << "\n";
    return status_AC;
    //#]
}

bool HVAC::get_HVAC_state() {
    NOTIFY_OPERATION(get_HVAC_state, get_HVAC_state(), 0, ArchitecturalAnalysisPkg_HVAC_get_HVAC_state_SERIALIZE);
    //#[ operation get_HVAC_state()
    std::cout<<"I_HVAC: get HVAC state";
    std::cout<<"HVAC status=" << status_HVAC << "\n";
    return status_HVAC;
    //#]
}

bool HVAC::get_Heating_state() {
    NOTIFY_OPERATION(get_Heating_state, get_Heating_state(), 0, ArchitecturalAnalysisPkg_HVAC_get_Heating_state_SERIALIZE);
    //#[ operation get_Heating_state()
    std::cout<<"I_HVAC: get Heating state";
    std::cout<<"Heating status=" << status_Heating << "\n";
    return status_Heating;
    //#]
}

bool HVAC::get_Vent_state() {
    NOTIFY_OPERATION(get_Vent_state, get_Vent_state(), 0, ArchitecturalAnalysisPkg_HVAC_get_Vent_state_SERIALIZE);
    //#[ operation get_Vent_state()
    std::cout<<"I_HVAC: get Vent state";
    std::cout<<"Vent status=" << status_Vent << "\n";
    return status_Vent;
    //#]
}

void HVAC::set_AC_state(bool arg_AC_state) {
    NOTIFY_OPERATION(set_AC_state, set_AC_state(bool), 1, ArchitecturalAnalysisPkg_HVAC_set_AC_state_SERIALIZE);
    //#[ operation set_AC_state(bool)
    std::cout<<"I_HVAC: set AC state="<<arg_AC_state<<"\n";
    status_AC=arg_AC_state;
    //#]
}

void HVAC::set_HVAC_state(bool arg_HVAC_state) {
    NOTIFY_OPERATION(set_HVAC_state, set_HVAC_state(bool), 1, ArchitecturalAnalysisPkg_HVAC_set_HVAC_state_SERIALIZE);
    //#[ operation set_HVAC_state(bool)
    std::cout<<"I_HVAC: set HVAC state="<<arg_HVAC_state<<"\n";
    status_HVAC=arg_HVAC_state;
    //#]
}

void HVAC::set_Heating_state(bool arg_Heating_state) {
    NOTIFY_OPERATION(set_Heating_state, set_Heating_state(bool), 1, ArchitecturalAnalysisPkg_HVAC_set_Heating_state_SERIALIZE);
    //#[ operation set_Heating_state(bool)
    std::cout<<"I_HVAC: set Heating state="<<arg_Heating_state<<"\n";
    status_Heating=arg_Heating_state;
    //#]
}

void HVAC::set_Vent_state(bool arg_Vent_state) {
    NOTIFY_OPERATION(set_Vent_state, set_Vent_state(bool), 1, ArchitecturalAnalysisPkg_HVAC_set_Vent_state_SERIALIZE);
    //#[ operation set_Vent_state(bool)
    std::cout<<"I_HVAC: set Vent state="<<arg_Vent_state<<"\n";
    status_Vent=arg_Vent_state;
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
    NOTIFY_SET_OPERATION;
}

bool HVAC::getStatus_HVAC() const {
    return status_HVAC;
}

void HVAC::setStatus_HVAC(bool p_status_HVAC) {
    status_HVAC = p_status_HVAC;
    NOTIFY_SET_OPERATION;
}

bool HVAC::getStatus_Heating() const {
    return status_Heating;
}

void HVAC::setStatus_Heating(bool p_status_Heating) {
    status_Heating = p_status_Heating;
    NOTIFY_SET_OPERATION;
}

bool HVAC::getStatus_Vent() const {
    return status_Vent;
}

void HVAC::setStatus_Vent(bool p_status_Vent) {
    status_Vent = p_status_Vent;
}

int HVAC::getTemp() const {
    return temp;
}

void HVAC::setTemp(int p_temp) {
    temp = p_temp;
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
    aomsAttributes->addAttribute("temp", x2String(myReal->temp));
    aomsAttributes->addAttribute("status_AC", x2String(myReal->status_AC));
    aomsAttributes->addAttribute("status_Heating", x2String(myReal->status_Heating));
    aomsAttributes->addAttribute("status_Vent", x2String(myReal->status_Vent));
    aomsAttributes->addAttribute("status_HVAC", x2String(myReal->status_HVAC));
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
