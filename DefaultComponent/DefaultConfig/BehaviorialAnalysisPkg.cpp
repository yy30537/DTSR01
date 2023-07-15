/********************************************************************
	Rhapsody	: 9.0 
	Login		: Yang
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: BehaviorialAnalysisPkg
//!	Generated Date	: Sat, 15, Jul 2023  
	File Path	: DefaultComponent\DefaultConfig\BehaviorialAnalysisPkg.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## package BehaviorialAnalysisPkg


#ifdef _OMINSTRUMENT
static void serializeGlobalVars(AOMSAttributes* /* aomsAttributes */);

static void RenameGlobalInstances();

IMPLEMENT_META_PACKAGE(BehaviorialAnalysisPkg, BehaviorialAnalysisPkg)
#endif // _OMINSTRUMENT

void BehaviorialAnalysisPkg_initRelations() {
    {
        {
            itsNetwork.setShouldDelete(false);
        }
    }
    
    #ifdef _OMINSTRUMENT
    RenameGlobalInstances();
    #endif // _OMINSTRUMENT
}

bool BehaviorialAnalysisPkg_startBehavior() {
    bool done = true;
    done &= itsNetwork.startBehavior();
    return done;
}

#ifdef _OMINSTRUMENT
static void serializeGlobalVars(AOMSAttributes* /* aomsAttributes */) {
}

static void RenameGlobalInstances() {
}
#endif // _OMINSTRUMENT

//#[ ignore
BehaviorialAnalysisPkg_OMInitializer::BehaviorialAnalysisPkg_OMInitializer() {
    BehaviorialAnalysisPkg_initRelations();
    BehaviorialAnalysisPkg_startBehavior();
}

BehaviorialAnalysisPkg_OMInitializer::~BehaviorialAnalysisPkg_OMInitializer() {
}
//#]

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\BehaviorialAnalysisPkg.cpp
*********************************************************************/
