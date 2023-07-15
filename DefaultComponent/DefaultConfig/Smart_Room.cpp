/********************************************************************
	Rhapsody	: 9.0 
	Login		: Yang
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Smart_Room
//!	Generated Date	: Sat, 15, Jul 2023  
	File Path	: DefaultComponent\DefaultConfig\Smart_Room.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "Smart_Room.h"
//#[ ignore
#define ArchitecturalAnalysisPkg_Smart_Room_Smart_Room_SERIALIZE OM_NO_OP
//#]

//## package ArchitecturalAnalysisPkg

//## class Smart_Room
Smart_Room::Smart_Room(IOxfActive* theActiveContext) {
    NOTIFY_REACTIVE_CONSTRUCTOR(Smart_Room, Smart_Room(), 0, ArchitecturalAnalysisPkg_Smart_Room_Smart_Room_SERIALIZE);
    setActiveContext(theActiveContext, false);
    {
        {
            itsNetwork.setShouldDelete(false);
        }
    }
}

Smart_Room::~Smart_Room() {
    NOTIFY_DESTRUCTOR(~Smart_Room, true);
}

Network* Smart_Room::getItsNetwork() const {
    return (Network*) &itsNetwork;
}

bool Smart_Room::startBehavior() {
    bool done = true;
    done &= itsNetwork.startBehavior();
    done &= OMReactive::startBehavior();
    return done;
}

void Smart_Room::setActiveContext(IOxfActive* theActiveContext, bool activeInstance) {
    OMReactive::setActiveContext(theActiveContext, activeInstance);
    {
        itsNetwork.setActiveContext(theActiveContext, false);
    }
}

void Smart_Room::destroy() {
    itsNetwork.destroy();
    OMReactive::destroy();
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedSmart_Room::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsNetwork", true, true);
    aomsRelations->ADD_ITEM(&myReal->itsNetwork);
}
//#]

IMPLEMENT_REACTIVE_META_SIMPLE_P(Smart_Room, ArchitecturalAnalysisPkg, ArchitecturalAnalysisPkg, false, OMAnimatedSmart_Room)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Smart_Room.cpp
*********************************************************************/
