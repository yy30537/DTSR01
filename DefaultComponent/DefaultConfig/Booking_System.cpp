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
//#]

//## package ArchitecturalAnalysisPkg

//## class Booking_System
//#[ ignore
Booking_System::pBook_C::pBook_C() : _p_(0) {
}

Booking_System::pBook_C::~pBook_C() {
}

void Booking_System::pBook_C::connectBooking_System(Booking_System* part) {
}
//#]

Booking_System::Booking_System() {
    NOTIFY_CONSTRUCTOR(Booking_System, Booking_System(), 0, ArchitecturalAnalysisPkg_Booking_System_Booking_System_SERIALIZE);
}

Booking_System::~Booking_System() {
    NOTIFY_DESTRUCTOR(~Booking_System, true);
}

Booking_System::pBook_C* Booking_System::getPBook() const {
    return (Booking_System::pBook_C*) &pBook;
}

Booking_System::pBook_C* Booking_System::get_pBook() const {
    return (Booking_System::pBook_C*) &pBook;
}

#ifdef _OMINSTRUMENT
IMPLEMENT_META_P(Booking_System, ArchitecturalAnalysisPkg, ArchitecturalAnalysisPkg, false, OMAnimatedBooking_System)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Booking_System.cpp
*********************************************************************/
