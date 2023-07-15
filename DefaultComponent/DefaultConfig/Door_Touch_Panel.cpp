/********************************************************************
	Rhapsody	: 9.0 
	Login		: Administrator
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Door_Touch_Panel
//!	Generated Date	: Sat, 15, Jul 2023  
	File Path	: DefaultComponent\DefaultConfig\Door_Touch_Panel.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "Door_Touch_Panel.h"
//#[ ignore
#define ArchitecturalAnalysisPkg_Door_Touch_Panel_Door_Touch_Panel_SERIALIZE OM_NO_OP
//#]

//## package ArchitecturalAnalysisPkg

//## class Door_Touch_Panel
//#[ ignore
Door_Touch_Panel::pDoorTouch_C::pDoorTouch_C() : _p_(0) {
}

Door_Touch_Panel::pDoorTouch_C::~pDoorTouch_C() {
}

void Door_Touch_Panel::pDoorTouch_C::connectDoor_Touch_Panel(Door_Touch_Panel* part) {
}
//#]

Door_Touch_Panel::Door_Touch_Panel() {
    NOTIFY_CONSTRUCTOR(Door_Touch_Panel, Door_Touch_Panel(), 0, ArchitecturalAnalysisPkg_Door_Touch_Panel_Door_Touch_Panel_SERIALIZE);
}

Door_Touch_Panel::~Door_Touch_Panel() {
    NOTIFY_DESTRUCTOR(~Door_Touch_Panel, true);
}

Door_Touch_Panel::pDoorTouch_C* Door_Touch_Panel::getPDoorTouch() const {
    return (Door_Touch_Panel::pDoorTouch_C*) &pDoorTouch;
}

Door_Touch_Panel::pDoorTouch_C* Door_Touch_Panel::get_pDoorTouch() const {
    return (Door_Touch_Panel::pDoorTouch_C*) &pDoorTouch;
}

#ifdef _OMINSTRUMENT
IMPLEMENT_META_P(Door_Touch_Panel, ArchitecturalAnalysisPkg, ArchitecturalAnalysisPkg, false, OMAnimatedDoor_Touch_Panel)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Door_Touch_Panel.cpp
*********************************************************************/
