/********************************************************************
	Rhapsody	: 9.0 
	Login		: Administrator
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Smart_Screen
//!	Generated Date	: Sat, 15, Jul 2023  
	File Path	: DefaultComponent\DefaultConfig\Smart_Screen.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "Smart_Screen.h"
//#[ ignore
#define ArchitecturalAnalysisPkg_Smart_Screen_Smart_Screen_SERIALIZE OM_NO_OP

#define ArchitecturalAnalysisPkg_Smart_Screen_getState_SERIALIZE OM_NO_OP

#define ArchitecturalAnalysisPkg_Smart_Screen_setState_SERIALIZE aomsmethod->addAttribute("argState", x2String(argState));
//#]

//## package ArchitecturalAnalysisPkg

//## class Smart_Screen
//#[ ignore
Smart_Screen::pSmartScreen_C::pSmartScreen_C() : _p_(0) {
    itsI_SS = NULL;
}

Smart_Screen::pSmartScreen_C::~pSmartScreen_C() {
    cleanUpRelations();
}

void Smart_Screen::pSmartScreen_C::connectSmart_Screen(Smart_Screen* part) {
    setItsI_SS(part);
    
}

I_SS* Smart_Screen::pSmartScreen_C::getItsI_SS() {
    return this;
}

bool Smart_Screen::pSmartScreen_C::getState() {
    bool res = false;
    if (itsI_SS != NULL) {
        res = itsI_SS->getState();
    }
    return res;
}

void Smart_Screen::pSmartScreen_C::setState(bool argState) {
    
    if (itsI_SS != NULL) {
        itsI_SS->setState(argState);
    }
    
}

void Smart_Screen::pSmartScreen_C::setItsI_SS(I_SS* p_I_SS) {
    itsI_SS = p_I_SS;
}

void Smart_Screen::pSmartScreen_C::cleanUpRelations() {
    if(itsI_SS != NULL)
        {
            itsI_SS = NULL;
        }
}
//#]

Smart_Screen::Smart_Screen() : state(false) {
    NOTIFY_CONSTRUCTOR(Smart_Screen, Smart_Screen(), 0, ArchitecturalAnalysisPkg_Smart_Screen_Smart_Screen_SERIALIZE);
    initRelations();
}

Smart_Screen::~Smart_Screen() {
    NOTIFY_DESTRUCTOR(~Smart_Screen, false);
}

bool Smart_Screen::getState() {
    NOTIFY_OPERATION(getState, getState(), 0, ArchitecturalAnalysisPkg_Smart_Screen_getState_SERIALIZE);
    //#[ operation getState()
    return state;
    //#]
}

void Smart_Screen::setState(bool argState) {
    NOTIFY_OPERATION(setState, setState(bool), 1, ArchitecturalAnalysisPkg_Smart_Screen_setState_SERIALIZE);
    //#[ operation setState(bool)
    state=argState;
    //#]
}

Smart_Screen::pSmartScreen_C* Smart_Screen::getPSmartScreen() const {
    return (Smart_Screen::pSmartScreen_C*) &pSmartScreen;
}

Smart_Screen::pSmartScreen_C* Smart_Screen::get_pSmartScreen() const {
    return (Smart_Screen::pSmartScreen_C*) &pSmartScreen;
}

void Smart_Screen::initRelations() {
    if (get_pSmartScreen() != NULL) {
        get_pSmartScreen()->connectSmart_Screen(this);
    }
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedSmart_Screen::serializeAttributes(AOMSAttributes* aomsAttributes) const {
    aomsAttributes->addAttribute("state", x2String(myReal->state));
    OMAnimatedI_SS::serializeAttributes(aomsAttributes);
}

void OMAnimatedSmart_Screen::serializeRelations(AOMSRelations* aomsRelations) const {
    OMAnimatedI_SS::serializeRelations(aomsRelations);
}
//#]

IMPLEMENT_META_S_P(Smart_Screen, ArchitecturalAnalysisPkg, false, I_SS, OMAnimatedI_SS, OMAnimatedSmart_Screen)

OMINIT_SUPERCLASS(I_SS, OMAnimatedI_SS)

OMREGISTER_CLASS
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Smart_Screen.cpp
*********************************************************************/
