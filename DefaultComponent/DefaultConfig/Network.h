/*********************************************************************
	Rhapsody	: 9.0 
	Login		: Administrator
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Network
//!	Generated Date	: Thu, 13, Jul 2023  
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
#include "I_CO2.h"
//## class pNetwork_C
#include "I_HVAC.h"
//## link itsCO2_Sensor
class CO2_Sensor;

//## link itsHVAC
class HVAC;

//## package ArchitecturalAnalysisPkg

//## class Network
class Network : public OMReactive {
public :

//#[ ignore
    //## package ArchitecturalAnalysisPkg
    class pNetwork_C : public I_HVAC, public I_CO2 {
        ////    Constructors and destructors    ////
        
    public :
    
        //## auto_generated
        pNetwork_C();
        
        //## auto_generated
        virtual ~pNetwork_C();
        
        ////    Operations    ////
        
        //## auto_generated
        I_CO2* getItsI_CO2();
        
        //## auto_generated
        I_HVAC* getItsI_HVAC();
        
        //## auto_generated
        Network::pNetwork_C* getOutBound();
        
        //## auto_generated
        virtual bool get_AC_state();
        
        //## auto_generated
        virtual bool get_CO2_Alarm();
        
        //## auto_generated
        virtual bool get_HVAC_state();
        
        //## auto_generated
        virtual bool get_Heating_state();
        
        //## auto_generated
        virtual bool get_Vent_state();
        
        //## auto_generated
        virtual void set_AC_state(bool arg_AC_state);
        
        //## auto_generated
        virtual void set_CO2_Alarm(bool arg_CO2_state);
        
        //## auto_generated
        virtual void set_HVAC_state(bool arg_HVAC_state);
        
        //## auto_generated
        virtual void set_Heating_state(bool arg_Heating_state);
        
        //## auto_generated
        virtual void set_Vent_state(bool arg_Vent_state);
        
        ////    Additional operations    ////
        
        //## auto_generated
        void setItsI_CO2(I_CO2* p_I_CO2);
        
        //## auto_generated
        void setItsI_HVAC(I_HVAC* p_I_HVAC);
    
    protected :
    
        //## auto_generated
        void cleanUpRelations();
        
        ////    Attributes    ////
        
        int _p_;		//## attribute _p_
        
        ////    Relations and components    ////
        
        I_CO2* itsI_CO2;		//## link itsI_CO2
        
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
    CO2_Sensor* getItsCO2_Sensor() const;
    
    //## auto_generated
    void setItsCO2_Sensor(CO2_Sensor* p_CO2_Sensor);
    
    //## auto_generated
    HVAC* getItsHVAC() const;
    
    //## auto_generated
    void setItsHVAC(HVAC* p_HVAC);
    
    //## auto_generated
    virtual bool startBehavior();

protected :

    //## auto_generated
    void initStatechart();
    
    //## auto_generated
    void cleanUpRelations();
    
    ////    Relations and components    ////
    
//#[ ignore
    pNetwork_C pNetwork;
//#]

    CO2_Sensor* itsCO2_Sensor;		//## link itsCO2_Sensor
    
    HVAC* itsHVAC;		//## link itsHVAC
    
    ////    Framework operations    ////

public :

    //## auto_generated
    void __setItsCO2_Sensor(CO2_Sensor* p_CO2_Sensor);
    
    //## auto_generated
    void _setItsCO2_Sensor(CO2_Sensor* p_CO2_Sensor);
    
    //## auto_generated
    void _clearItsCO2_Sensor();
    
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
    
    //## statechart_method
    IOxfReactive::TakeEventStatus HVAC_Enabled_handleEvent();
    
    // state_Vent:
    //## statechart_method
    inline bool state_Vent_IN() const;
    
    //## statechart_method
    void state_Vent_entDef();
    
    //## statechart_method
    IOxfReactive::TakeEventStatus state_Vent_processEvent();
    
    // Vent_ON:
    //## statechart_method
    inline bool Vent_ON_IN() const;
    
    // Vent_OFF:
    //## statechart_method
    inline bool Vent_OFF_IN() const;
    
    // state_Heating:
    //## statechart_method
    inline bool state_Heating_IN() const;
    
    //## statechart_method
    void state_Heating_entDef();
    
    //## statechart_method
    IOxfReactive::TakeEventStatus state_Heating_processEvent();
    
    // Heating_ON:
    //## statechart_method
    inline bool Heating_ON_IN() const;
    
    // Heating_OFF:
    //## statechart_method
    inline bool Heating_OFF_IN() const;
    
    // state_AC:
    //## statechart_method
    inline bool state_AC_IN() const;
    
    //## statechart_method
    void state_AC_entDef();
    
    //## statechart_method
    IOxfReactive::TakeEventStatus state_AC_processEvent();
    
    // AC_ON:
    //## statechart_method
    inline bool AC_ON_IN() const;
    
    // AC_OFF:
    //## statechart_method
    inline bool AC_OFF_IN() const;
    
    // HVAC_Disabled:
    //## statechart_method
    inline bool HVAC_Disabled_IN() const;
    
    //## statechart_method
    IOxfReactive::TakeEventStatus HVAC_DisabledTakeev_HVAC_SwitchOn();
    
    //## statechart_method
    IOxfReactive::TakeEventStatus HVAC_Disabled_handleEvent();
    
    ////    Framework    ////

protected :

//#[ ignore
    enum Network_Enum {
        OMNonState = 0,
        HVAC_Enabled = 1,
        state_Vent = 2,
        Vent_ON = 3,
        Vent_OFF = 4,
        state_Heating = 5,
        Heating_ON = 6,
        Heating_OFF = 7,
        state_AC = 8,
        AC_ON = 9,
        AC_OFF = 10,
        HVAC_Disabled = 11
    };
    
    int rootState_subState;
    
    int rootState_active;
    
    int state_Vent_subState;
    
    int state_Vent_active;
    
    int state_Heating_subState;
    
    int state_Heating_active;
    
    int state_AC_subState;
    
    int state_AC_active;
//#]
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedNetwork : virtual public AOMInstance {
    DECLARE_REACTIVE_META(Network, OMAnimatedNetwork)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
    
    //## statechart_method
    void rootState_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void HVAC_Enabled_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void state_Vent_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void Vent_ON_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void Vent_OFF_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void state_Heating_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void Heating_ON_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void Heating_OFF_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void state_AC_serializeStates(AOMSState* aomsState) const;
    
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

inline bool Network::state_Vent_IN() const {
    return HVAC_Enabled_IN();
}

inline bool Network::Vent_ON_IN() const {
    return state_Vent_subState == Vent_ON;
}

inline bool Network::Vent_OFF_IN() const {
    return state_Vent_subState == Vent_OFF;
}

inline bool Network::state_Heating_IN() const {
    return HVAC_Enabled_IN();
}

inline bool Network::Heating_ON_IN() const {
    return state_Heating_subState == Heating_ON;
}

inline bool Network::Heating_OFF_IN() const {
    return state_Heating_subState == Heating_OFF;
}

inline bool Network::state_AC_IN() const {
    return HVAC_Enabled_IN();
}

inline bool Network::AC_ON_IN() const {
    return state_AC_subState == AC_ON;
}

inline bool Network::AC_OFF_IN() const {
    return state_AC_subState == AC_OFF;
}

inline bool Network::HVAC_Disabled_IN() const {
    return rootState_subState == HVAC_Disabled;
}

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Network.h
*********************************************************************/
