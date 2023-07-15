/********************************************************************
	Rhapsody	: 9.0 
	Login		: Yang
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Booking_System
//!	Generated Date	: Sat, 15, Jul 2023  
	File Path	: DefaultComponent\DefaultConfig\Booking_System.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "Booking_System.h"
//#[ ignore
#define ArchitecturalAnalysisPkg_Booking_System_Booking_System_SERIALIZE OM_NO_OP

#define ArchitecturalAnalysisPkg_Booking_System_login_SERIALIZE OM_NO_OP
//#]

//## package ArchitecturalAnalysisPkg

//## class Booking_System
//#[ ignore
Booking_System::pBook_C::pBook_C() : _p_(0) {
    itsI_BS = NULL;
}

Booking_System::pBook_C::~pBook_C() {
    cleanUpRelations();
}

void Booking_System::pBook_C::connectBooking_System(Booking_System* part) {
    setItsI_BS(part);
    
}

I_BS* Booking_System::pBook_C::getItsI_BS() {
    return this;
}

void Booking_System::pBook_C::login() {
    
    if (itsI_BS != NULL) {
        itsI_BS->login();
    }
    
}

void Booking_System::pBook_C::setItsI_BS(I_BS* p_I_BS) {
    itsI_BS = p_I_BS;
}

void Booking_System::pBook_C::cleanUpRelations() {
    if(itsI_BS != NULL)
        {
            itsI_BS = NULL;
        }
}
//#]

Booking_System::Booking_System() : auth_status(false) {
    NOTIFY_CONSTRUCTOR(Booking_System, Booking_System(), 0, ArchitecturalAnalysisPkg_Booking_System_Booking_System_SERIALIZE);
    initRelations();
}

Booking_System::~Booking_System() {
    NOTIFY_DESTRUCTOR(~Booking_System, false);
}

void Booking_System::login() {
    NOTIFY_OPERATION(login, login(), 0, ArchitecturalAnalysisPkg_Booking_System_login_SERIALIZE);
    //#[ operation login()
    auth_status=true;
    //#]
}

Booking_System::pBook_C* Booking_System::getPBook() const {
    return (Booking_System::pBook_C*) &pBook;
}

Booking_System::pBook_C* Booking_System::get_pBook() const {
    return (Booking_System::pBook_C*) &pBook;
}

bool Booking_System::getAuth_status() const {
    return auth_status;
}

void Booking_System::setAuth_status(bool p_auth_status) {
    auth_status = p_auth_status;
}

void Booking_System::initRelations() {
    if (get_pBook() != NULL) {
        get_pBook()->connectBooking_System(this);
    }
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedBooking_System::serializeAttributes(AOMSAttributes* aomsAttributes) const {
    aomsAttributes->addAttribute("auth_status", x2String(myReal->auth_status));
    OMAnimatedI_BS::serializeAttributes(aomsAttributes);
}

void OMAnimatedBooking_System::serializeRelations(AOMSRelations* aomsRelations) const {
    OMAnimatedI_BS::serializeRelations(aomsRelations);
}
//#]

IMPLEMENT_META_S_P(Booking_System, ArchitecturalAnalysisPkg, false, I_BS, OMAnimatedI_BS, OMAnimatedBooking_System)

OMINIT_SUPERCLASS(I_BS, OMAnimatedI_BS)

OMREGISTER_CLASS
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Booking_System.cpp
*********************************************************************/
