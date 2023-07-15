/********************************************************************
	Rhapsody	: 9.0 
	Login		: Administrator
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Room_Touch_Panel
//!	Generated Date	: Sat, 15, Jul 2023  
	File Path	: DefaultComponent\DefaultConfig\Room_Touch_Panel.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "Room_Touch_Panel.h"
//#[ ignore
#define ArchitecturalAnalysisPkg_Room_Touch_Panel_Room_Touch_Panel_SERIALIZE OM_NO_OP
//#]

//## package ArchitecturalAnalysisPkg

//## class Room_Touch_Panel
//#[ ignore
Room_Touch_Panel::pRoomTouch_C::pRoomTouch_C() : _p_(0) {
}

Room_Touch_Panel::pRoomTouch_C::~pRoomTouch_C() {
}

void Room_Touch_Panel::pRoomTouch_C::connectRoom_Touch_Panel(Room_Touch_Panel* part) {
}
//#]

Room_Touch_Panel::Room_Touch_Panel() {
    NOTIFY_CONSTRUCTOR(Room_Touch_Panel, Room_Touch_Panel(), 0, ArchitecturalAnalysisPkg_Room_Touch_Panel_Room_Touch_Panel_SERIALIZE);
}

Room_Touch_Panel::~Room_Touch_Panel() {
    NOTIFY_DESTRUCTOR(~Room_Touch_Panel, true);
}

Room_Touch_Panel::pRoomTouch_C* Room_Touch_Panel::getPRoomTouch() const {
    return (Room_Touch_Panel::pRoomTouch_C*) &pRoomTouch;
}

Room_Touch_Panel::pRoomTouch_C* Room_Touch_Panel::get_pRoomTouch() const {
    return (Room_Touch_Panel::pRoomTouch_C*) &pRoomTouch;
}

#ifdef _OMINSTRUMENT
IMPLEMENT_META_P(Room_Touch_Panel, ArchitecturalAnalysisPkg, ArchitecturalAnalysisPkg, false, OMAnimatedRoom_Touch_Panel)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Room_Touch_Panel.cpp
*********************************************************************/
