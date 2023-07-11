/*********************************************************************
	Rhapsody	: 9.0 
	Login		: Yang
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Network
//!	Generated Date	: Tue, 11, Jul 2023  
	File Path	: DefaultComponent\DefaultConfig\Network.h
*********************************************************************/

#ifndef Network_H
#define Network_H

//## auto_generated
#include <oxf\oxf.h>
//## auto_generated
#include <..\Profiles\SysML\SIDefinitions.h>
//## auto_generated
#include <aom\aom.h>
//## auto_generated
#include "ArchitecturalAnalysisPkg.h"
//## auto_generated
#include <oxf\omthread.h>
//## auto_generated
#include <oxf\omreactive.h>
//## auto_generated
#include <oxf\state.h>
//## auto_generated
#include <oxf\event.h>
//## class pNetwork_C
#include "I_HVAC.h"
//## link itsHVAC
class HVAC;

//## link itsLights
class Lights;

//## package ArchitecturalAnalysisPkg

//## class Network
class Network : public OMReactive {
public :

//#[ ignore
    //## package ArchitecturalAnalysisPkg
    class pNetwork_C : public I_HVAC {
        ////    Constructors and destructors    ////
        
    public :
    
        //## auto_generated
        pNetwork_C();
        
        //## auto_generated
        virtual ~pNetwork_C();
        
        ////    Operations    ////
        
        //## auto_generated
        I_HVAC* getItsI_HVAC();
        
        //## auto_generated
        I_HVAC* getOutBound();
        
        //## auto_generated
        virtual int getTemp();
        
        //## auto_generated
        virtual bool get_AC_state();
        
        //## auto_generated
        virtual bool get_HVAC_state();
        
        //## auto_generated
        virtual bool get_Heating_state();
        
        //## auto_generated
        virtual bool get_Vent_state();
        
        //## auto_generated
        virtual void setTemp(int arg_temp);
        
        //## auto_generated
        virtual void set_AC_state(bool arg_AC_state);
        
        //## auto_generated
        virtual void set_HVAC_state(bool arg_HVAC_state);
        
        //## auto_generated
        virtual void set_Heating_state(bool arg_Heating_state);
        
        //## auto_generated
        virtual void set_Vent_state(bool arg_Vent_state);
        
        ////    Additional operations    ////
        
        //## auto_generated
        void setItsI_HVAC(I_HVAC* p_I_HVAC);
    
    protected :
    
        //## auto_generated
        void cleanUpRelations();
        
        ////    Attributes    ////
        
        int _p_;		//## attribute _p_
        
        ////    Relations and components    ////
        
        I_HVAC* itsI_HVAC;		//## link itsI_HVAC
    };
//#]

    ////    Friends    ////
    
#ifdef _OMINSTRUMENT
    friend class OMAnimatedNetwork;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    Network(IOxfActive* theActiveContext = 0);
    
    //## auto_generated
    ~Network();
    
    ////    Additional operations    ////
    
    //## auto_generated
    pNetwork_C* getPNetwork() const;
    
    //## auto_generated
    pNetwork_C* get_pNetwork() const;
    
    //## auto_generated
    int getTemp_Network() const;
    
    //## auto_generated
    void setTemp_Network(int p_temp_Network);
    
    //## auto_generated
    HVAC* getItsHVAC() const;
    
    //## auto_generated
    void setItsHVAC(HVAC* p_HVAC);
    
    //## auto_generated
    Lights* getItsLights() const;
    
    //## auto_generated
    void setItsLights(Lights* p_Lights);
    
    //## auto_generated
    virtual bool startBehavior();

protected :

    //## auto_generated
    void initStatechart();
    
    //## auto_generated
    void cleanUpRelations();
    
    ////    Attributes    ////
    
    int temp_Network;		//## attribute temp_Network
    
    ////    Relations and components    ////
    
//#[ ignore
    pNetwork_C pNetwork;
//#]

    HVAC* itsHVAC;		//## link itsHVAC
    
    Lights* itsLights;		//## link itsLights
    
    ////    Framework operations    ////

public :

    //## auto_generated
    void __setItsHVAC(HVAC* p_HVAC);
    
    //## auto_generated
    void _setItsHVAC(HVAC* p_HVAC);
    
    //## auto_generated
    void _clearItsHVAC();
    
    // rootState:
    //## statechart_method
    inline bool rootState_IN() const;
    
    //## statechart_method
    virtual void rootState_entDef();
    
    //## statechart_method
    virtual IOxfReactive::TakeEventStatus rootState_processEvent();
    
    // HVAC_Enabled:
    //## statechart_method
    inline bool HVAC_Enabled_IN() const;
    
    //## statechart_method
    void HVAC_Enabled_entDef();
    
    //## statechart_method
    void HVAC_Enabled_exit();
    
    //## statechart_method
    IOxfReactive::TakeEventStatus HVAC_Enabled_processEvent();
    
    // state_12:
    //## statechart_method
    inline bool state_12_IN() const;
    
    //## statechart_method
    void state_12_entDef();
    
    //## statechart_method
    IOxfReactive::TakeEventStatus state_12_processEvent();
    
    // Vent_On:
    //## statechart_method
    inline bool Vent_On_IN() const;
    
    // Vent_OFF:
    //## statechart_method
    inline bool Vent_OFF_IN() const;
    
    // state_11:
    //## statechart_method
    inline bool state_11_IN() const;
    
    //## statechart_method
    void state_11_entDef();
    
    //## statechart_method
    IOxfReactive::TakeEventStatus state_11_processEvent();
    
    // Heating_On:
    //## statechart_method
    inline bool Heating_On_IN() const;
    
    // Heating_OFF:
    //## statechart_method
    inline bool Heating_OFF_IN() const;
    
    // state_10:
    //## statechart_method
    inline bool state_10_IN() const;
    
    //## statechart_method
    void state_10_entDef();
    
    //## statechart_method
    IOxfReactive::TakeEventStatus state_10_processEvent();
    
    //## statechart_method
    IOxfReactive::TakeEventStatus state_10_handleEvent();
    
    // AC_ON:
    //## statechart_method
    inline bool AC_ON_IN() const;
    
    //## statechart_method
    IOxfReactive::TakeEventStatus AC_ON_handleEvent();
    
    // AC_OFF:
    //## statechart_method
    inline bool AC_OFF_IN() const;
    
    //## statechart_method
    IOxfReactive::TakeEventStatus AC_OFF_handleEvent();
    
    // HVAC_Disabled:
    //## statechart_method
    inline bool HVAC_Disabled_IN() const;
    
    //## statechart_method
    IOxfReactive::TakeEventStatus HVAC_Disabled_handleEvent();
    
    ////    Framework    ////

protected :

//#[ ignore
    enum Network_Enum {
        OMNonState = 0,
        HVAC_Enabled = 1,
        state_12 = 2,
        Vent_On = 3,
        Vent_OFF = 4,
        state_11 = 5,
        Heating_On = 6,
        Heating_OFF = 7,
        state_10 = 8,
        AC_ON = 9,
        AC_OFF = 10,
        HVAC_Disabled = 11
    };
    
    int rootState_subState;
    
    int rootState_active;
    
    int state_12_subState;
    
    int state_12_active;
    
    int state_11_subState;
    
    int state_11_active;
    
    int state_10_subState;
    
    int state_10_active;
//#]
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedNetwork : virtual public AOMInstance {
    DECLARE_REACTIVE_META(Network, OMAnimatedNetwork)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeAttributes(AOMSAttributes* aomsAttributes) const;
    
    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
    
    //## statechart_method
    void rootState_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void HVAC_Enabled_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void state_12_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void Vent_On_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void Vent_OFF_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void state_11_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void Heating_On_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void Heating_OFF_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void state_10_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void AC_ON_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void AC_OFF_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void HVAC_Disabled_serializeStates(AOMSState* aomsState) const;
};
//#]
#endif // _OMINSTRUMENT

inline bool Network::rootState_IN() const {
    return true;
}

inline bool Network::HVAC_Enabled_IN() const {
    return rootState_subState == HVAC_Enabled;
}

inline bool Network::state_12_IN() const {
    return HVAC_Enabled_IN();
}

inline bool Network::Vent_On_IN() const {
    return state_12_subState == Vent_On;
}

inline bool Network::Vent_OFF_IN() const {
    return state_12_subState == Vent_OFF;
}

inline bool Network::state_11_IN() const {
    return HVAC_Enabled_IN();
}

inline bool Network::Heating_On_IN() const {
    return state_11_subState == Heating_On;
}

inline bool Network::Heating_OFF_IN() const {
    return state_11_subState == Heating_OFF;
}

inline bool Network::state_10_IN() const {
    return HVAC_Enabled_IN();
}

inline bool Network::AC_ON_IN() const {
    return state_10_subState == AC_ON;
}

inline bool Network::AC_OFF_IN() const {
    return state_10_subState == AC_OFF;
}

inline bool Network::HVAC_Disabled_IN() const {
    return rootState_subState == HVAC_Disabled;
}

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Network.h
*********************************************************************/
