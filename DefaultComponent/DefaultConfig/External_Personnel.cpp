/********************************************************************
	Rhapsody	: 9.0 
	Login		: Administrator
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: External_Personnel
//!	Generated Date	: Sat, 15, Jul 2023  
	File Path	: DefaultComponent\DefaultConfig\External_Personnel.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "External_Personnel.h"
//#[ ignore
#define ArchitecturalAnalysisPkg_External_Personnel_External_Personnel_SERIALIZE OM_NO_OP
//#]

//## package ArchitecturalAnalysisPkg

//## class External_Personnel
//#[ ignore
External_Personnel::pEP_C::pEP_C() : _p_(0) {
}

External_Personnel::pEP_C::~pEP_C() {
}

void External_Personnel::pEP_C::connectExternal_Personnel(External_Personnel* part) {
}
//#]

External_Personnel::External_Personnel() {
    NOTIFY_CONSTRUCTOR(External_Personnel, External_Personnel(), 0, ArchitecturalAnalysisPkg_External_Personnel_External_Personnel_SERIALIZE);
}

External_Personnel::~External_Personnel() {
    NOTIFY_DESTRUCTOR(~External_Personnel, true);
}

External_Personnel::pEP_C* External_Personnel::getPEP() const {
    return (External_Personnel::pEP_C*) &pEP;
}

External_Personnel::pEP_C* External_Personnel::get_pEP() const {
    return (External_Personnel::pEP_C*) &pEP;
}

#ifdef _OMINSTRUMENT
IMPLEMENT_META_P(External_Personnel, ArchitecturalAnalysisPkg, ArchitecturalAnalysisPkg, false, OMAnimatedExternal_Personnel)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\External_Personnel.cpp
*********************************************************************/
