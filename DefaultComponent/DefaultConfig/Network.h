/*********************************************************************
	Rhapsody	: 9.0 
	Login		: Administrator
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Network
//!	Generated Date	: Sun, 16, Jul 2023  
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
//## class pNetwork_C
#include "I_CO2.h"
//## class pNetwork_C
#include "I_Weather.h"
//## class pNetwork_C
#include "I_Light.h"
//## class pNetwork_C
#include "I_OS.h"
//## class pNetwork_C
#include "I_BS.h"
//## class pNetwork_C
#include "I_FS.h"
//## class pNetwork_C
#include "I_Mic.h"
//## class pNetwork_C
#include "I_Spkr.h"
//## class pNetwork_C
#include "I_SS.h"
//## class pNetwork_C
#include "I_WC.h"
//## class pNetwork_C
#include "I_MS.h"
//## link itsCO2_Sensor
class CO2_Sensor;

//## link itsHVAC
class HVAC;

//## link itsLights
class Lights;

//## link itsMovement_Sensor
class Movement_Sensor;

//## link itsOccupancy_Sensor
class Occupancy_Sensor;

//## link itsWeather_Forecast
class Weather_Forecast;

//#[ ignore
#define OMAnim_ArchitecturalAnalysisPkg_Network_setCO2Alarm_bool_ARGS_DECLARATION bool p_CO2Alarm;

#define OMAnim_ArchitecturalAnalysisPkg_Network_setFireDetected_bool_ARGS_DECLARATION bool p_fireDetected;

#define OMAnim_ArchitecturalAnalysisPkg_Network_setIntensity_int_ARGS_DECLARATION int p_intensity;

#define OMAnim_ArchitecturalAnalysisPkg_Network_setIs_Movement_bool_ARGS_DECLARATION bool p_is_Movement;

#define OMAnim_ArchitecturalAnalysisPkg_Network_setLightState_bool_ARGS_DECLARATION bool p_lightState;

#define OMAnim_ArchitecturalAnalysisPkg_Network_setOccupied_bool_ARGS_DECLARATION bool p_occupied;

#define OMAnim_ArchitecturalAnalysisPkg_Network_setSpeakerVol_int_ARGS_DECLARATION int p_speakerVol;

#define OMAnim_ArchitecturalAnalysisPkg_Network_setTemp_int_ARGS_DECLARATION int p_temp;
//#]

//## package ArchitecturalAnalysisPkg

//## class Network
class Network : public OMReactive {
public :

//#[ ignore
    //## package ArchitecturalAnalysisPkg
    class pNetwork_C : public I_HVAC, public I_CO2, public I_Weather, public I_Light, public I_OS, public I_FS, public I_Mic, public I_SS, public I_Spkr, public I_WC, public I_BS, public I_MS {
        ////    Constructors and destructors    ////
        
    public :
    
        //## auto_generated
        pNetwork_C();
        
        //## auto_generated
        virtual ~pNetwork_C();
        
        ////    Operations    ////
        
        //## auto_generated
        virtual bool SS_getState();
        
        //## auto_generated
        virtual void SS_setState(bool argState);
        
        //## auto_generated
        virtual int getItensity();
        
        //## auto_generated
        I_BS* getItsI_BS();
        
        //## auto_generated
        I_CO2* getItsI_CO2();
        
        //## auto_generated
        I_FS* getItsI_FS();
        
        //## auto_generated
        I_HVAC* getItsI_HVAC();
        
        //## auto_generated
        I_Light* getItsI_Light();
        
        //## auto_generated
        I_MS* getItsI_MS();
        
        //## auto_generated
        I_Mic* getItsI_Mic();
        
        //## auto_generated
        I_OS* getItsI_OS();
        
        //## auto_generated
        I_SS* getItsI_SS();
        
        //## auto_generated
        I_Spkr* getItsI_Spkr();
        
        //## auto_generated
        I_WC* getItsI_WC();
        
        //## auto_generated
        I_Weather* getItsI_Weather();
        
        //## auto_generated
        virtual bool getMM();
        
        //## auto_generated
        virtual bool getOccupied();
        
        //## auto_generated
        Network::pNetwork_C* getOutBound();
        
        //## auto_generated
        virtual bool getState();
        
        //## auto_generated
        virtual bool getStateMic();
        
        //## auto_generated
        virtual bool getStateSpkr();
        
        //## auto_generated
        virtual int getTemp();
        
        //## auto_generated
        virtual bool getWC();
        
        //## auto_generated
        virtual bool get_AC_state();
        
        //## auto_generated
        virtual bool get_HVAC_state();
        
        //## auto_generated
        virtual bool get_Heating_state();
        
        //## auto_generated
        virtual bool get_Vent_state();
        
        //## auto_generated
        virtual void login();
        
        //## auto_generated
        virtual void setIntensity(int arg_intensity);
        
        //## auto_generated
        virtual void setMM(bool arg);
        
        //## auto_generated
        virtual void setOccupied(bool arg_occupied);
        
        //## auto_generated
        virtual void setState(bool arg);
        
        //## auto_generated
        virtual void setStateMic(bool argState);
        
        //## auto_generated
        virtual void setStateSpkr(bool argState);
        
        //## auto_generated
        virtual void setTemp(int arg_temp);
        
        //## auto_generated
        virtual void setWC(bool arg);
        
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
        void setItsI_BS(I_BS* p_I_BS);
        
        //## auto_generated
        void setItsI_CO2(I_CO2* p_I_CO2);
        
        //## auto_generated
        void setItsI_FS(I_FS* p_I_FS);
        
        //## auto_generated
        void setItsI_HVAC(I_HVAC* p_I_HVAC);
        
        //## auto_generated
        void setItsI_Light(I_Light* p_I_Light);
        
        //## auto_generated
        void setItsI_MS(I_MS* p_I_MS);
        
        //## auto_generated
        void setItsI_Mic(I_Mic* p_I_Mic);
        
        //## auto_generated
        void setItsI_OS(I_OS* p_I_OS);
        
        //## auto_generated
        void setItsI_SS(I_SS* p_I_SS);
        
        //## auto_generated
        void setItsI_Spkr(I_Spkr* p_I_Spkr);
        
        //## auto_generated
        void setItsI_WC(I_WC* p_I_WC);
        
        //## auto_generated
        void setItsI_Weather(I_Weather* p_I_Weather);
    
    protected :
    
        //## auto_generated
        void cleanUpRelations();
        
        ////    Attributes    ////
        
        int _p_;		//## attribute _p_
        
        ////    Relations and components    ////
        
        I_BS* itsI_BS;		//## link itsI_BS
        
        I_CO2* itsI_CO2;		//## link itsI_CO2
        
        I_FS* itsI_FS;		//## link itsI_FS
        
        I_HVAC* itsI_HVAC;		//## link itsI_HVAC
        
        I_Light* itsI_Light;		//## link itsI_Light
        
        I_MS* itsI_MS;		//## link itsI_MS
        
        I_Mic* itsI_Mic;		//## link itsI_Mic
        
        I_OS* itsI_OS;		//## link itsI_OS
        
        I_SS* itsI_SS;		//## link itsI_SS
        
        I_Spkr* itsI_Spkr;		//## link itsI_Spkr
        
        I_WC* itsI_WC;		//## link itsI_WC
        
        I_Weather* itsI_Weather;		//## link itsI_Weather
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
    
    ////    Relations and components    ////
    
    HVAC* itsHVAC;		//## link itsHVAC
    
    ////    Framework operations    ////

public :

    //## auto_generated
    void __setItsHVAC(HVAC* p_HVAC);
    
    //## auto_generated
    void _setItsHVAC(HVAC* p_HVAC);
    
    //## auto_generated
    void _clearItsHVAC();
    
    ////    Framework    ////
    
    //## auto_generated
    CO2_Sensor* getItsCO2_Sensor() const;
    
    //## auto_generated
    void setItsCO2_Sensor(CO2_Sensor* p_CO2_Sensor);
    
    //## auto_generated
    Weather_Forecast* getItsWeather_Forecast() const;
    
    //## auto_generated
    void setItsWeather_Forecast(Weather_Forecast* p_Weather_Forecast);

protected :

    CO2_Sensor* itsCO2_Sensor;		//## link itsCO2_Sensor
    
    Weather_Forecast* itsWeather_Forecast;		//## link itsWeather_Forecast

public :

    //## auto_generated
    void __setItsCO2_Sensor(CO2_Sensor* p_CO2_Sensor);
    
    //## auto_generated
    void _setItsCO2_Sensor(CO2_Sensor* p_CO2_Sensor);
    
    //## auto_generated
    void _clearItsCO2_Sensor();
    
    //## auto_generated
    void __setItsWeather_Forecast(Weather_Forecast* p_Weather_Forecast);
    
    //## auto_generated
    void _setItsWeather_Forecast(Weather_Forecast* p_Weather_Forecast);
    
    //## auto_generated
    void _clearItsWeather_Forecast();
    
    //## auto_generated
    Movement_Sensor* getItsMovement_Sensor() const;
    
    //## auto_generated
    void setItsMovement_Sensor(Movement_Sensor* p_Movement_Sensor);
    
    //## auto_generated
    Occupancy_Sensor* getItsOccupancy_Sensor() const;
    
    //## auto_generated
    void setItsOccupancy_Sensor(Occupancy_Sensor* p_Occupancy_Sensor);

protected :

    Lights* itsLights;		//## link itsLights
    
    Movement_Sensor* itsMovement_Sensor;		//## link itsMovement_Sensor
    
    Occupancy_Sensor* itsOccupancy_Sensor;		//## link itsOccupancy_Sensor

public :

    //## auto_generated
    void __setItsLights(Lights* p_Lights);
    
    //## auto_generated
    void _setItsLights(Lights* p_Lights);
    
    //## auto_generated
    void _clearItsLights();
    
    //## auto_generated
    void __setItsMovement_Sensor(Movement_Sensor* p_Movement_Sensor);
    
    //## auto_generated
    void _setItsMovement_Sensor(Movement_Sensor* p_Movement_Sensor);
    
    //## auto_generated
    void _clearItsMovement_Sensor();
    
    //## auto_generated
    void __setItsOccupancy_Sensor(Occupancy_Sensor* p_Occupancy_Sensor);
    
    //## auto_generated
    void _setItsOccupancy_Sensor(Occupancy_Sensor* p_Occupancy_Sensor);
    
    //## auto_generated
    void _clearItsOccupancy_Sensor();

protected :

    //## auto_generated
    void cancelTimeouts();
    
    //## auto_generated
    bool cancelTimeout(const IOxfTimeout* arg);

public :

    //## auto_generated
    int getIntensity() const;
    
    //## auto_generated
    void setIntensity(int p_intensity);

protected :

    int intensity;		//## attribute intensity

public :

    //## auto_generated
    bool getCO2Alarm() const;
    
    //## auto_generated
    void setCO2Alarm(bool p_CO2Alarm);
    
    //## auto_generated
    bool getFireAlarm() const;
    
    //## auto_generated
    void setFireAlarm(bool p_fireAlarm);
    
    //## auto_generated
    bool getFireDetected() const;
    
    //## auto_generated
    void setFireDetected(bool p_fireDetected);
    
    //## auto_generated
    bool getIs_Movement() const;
    
    //## auto_generated
    void setIs_Movement(bool p_is_Movement);
    
    //## auto_generated
    bool getLightState() const;
    
    //## auto_generated
    void setLightState(bool p_lightState);
    
    //## auto_generated
    bool getOccupied() const;
    
    //## auto_generated
    void setOccupied(bool p_occupied);
    
    //## auto_generated
    int getSpeakerVol() const;
    
    //## auto_generated
    void setSpeakerVol(int p_speakerVol);
    
    //## auto_generated
    int getTemp() const;
    
    //## auto_generated
    void setTemp(int p_temp);

protected :

    bool CO2Alarm;		//## attribute CO2Alarm
    
    bool fireAlarm;		//## attribute fireAlarm
    
    bool fireDetected;		//## attribute fireDetected
    
    bool is_Movement;		//## attribute is_Movement
    
    bool lightState;		//## attribute lightState
    
    bool occupied;		//## attribute occupied
    
    int speakerVol;		//## attribute speakerVol
    
    int temp;		//## attribute temp
    
//#[ ignore
    pNetwork_C pNetwork;
//#]

public :

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
    
    //## statechart_method
    IOxfReactive::TakeEventStatus Vent_OFF_handleEvent();
    
    // accepttimeevent_14:
    //## statechart_method
    inline bool accepttimeevent_14_IN() const;
    
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
    
    //## statechart_method
    void Heating_On_entDef();
    
    //## statechart_method
    IOxfReactive::TakeEventStatus Heating_On_handleEvent();
    
    // Heating_On_idle:
    //## statechart_method
    inline bool Heating_On_idle_IN() const;
    
    //## statechart_method
    IOxfReactive::TakeEventStatus Heating_On_idle_handleEvent();
    
    // Heating_On_accepttimeevent_17:
    //## statechart_method
    inline bool Heating_On_accepttimeevent_17_IN() const;
    
    //## statechart_method
    IOxfReactive::TakeEventStatus Heating_On_accepttimeevent_17_handleEvent();
    
    // Heating_OFF:
    //## statechart_method
    inline bool Heating_OFF_IN() const;
    
    //## statechart_method
    void Heating_OFF_entDef();
    
    //## statechart_method
    IOxfReactive::TakeEventStatus Heating_OFF_handleEvent();
    
    // Heating_OFF_idle:
    //## statechart_method
    inline bool Heating_OFF_idle_IN() const;
    
    //## statechart_method
    IOxfReactive::TakeEventStatus Heating_OFF_idle_handleEvent();
    
    // Heating_OFF_accepttimeevent_17:
    //## statechart_method
    inline bool Heating_OFF_accepttimeevent_17_IN() const;
    
    //## statechart_method
    IOxfReactive::TakeEventStatus Heating_OFF_accepttimeevent_17_handleEvent();
    
    // state_10:
    //## statechart_method
    inline bool state_10_IN() const;
    
    //## statechart_method
    void state_10_entDef();
    
    //## statechart_method
    IOxfReactive::TakeEventStatus state_10_processEvent();
    
    // AC_ON:
    //## statechart_method
    inline bool AC_ON_IN() const;
    
    //## statechart_method
    void AC_ON_entDef();
    
    //## statechart_method
    IOxfReactive::TakeEventStatus AC_ON_handleEvent();
    
    // AC_ON_idle:
    //## statechart_method
    inline bool AC_ON_idle_IN() const;
    
    //## statechart_method
    IOxfReactive::TakeEventStatus AC_ON_idle_handleEvent();
    
    // AC_ON_accepttimeevent_17:
    //## statechart_method
    inline bool AC_ON_accepttimeevent_17_IN() const;
    
    //## statechart_method
    IOxfReactive::TakeEventStatus AC_ON_accepttimeevent_17_handleEvent();
    
    // AC_OFF:
    //## statechart_method
    inline bool AC_OFF_IN() const;
    
    //## statechart_method
    void AC_OFF_entDef();
    
    //## statechart_method
    IOxfReactive::TakeEventStatus AC_OFF_handleEvent();
    
    // idle:
    //## statechart_method
    inline bool idle_IN() const;
    
    //## statechart_method
    IOxfReactive::TakeEventStatus idle_handleEvent();
    
    // accepttimeevent_17:
    //## statechart_method
    inline bool accepttimeevent_17_IN() const;
    
    //## statechart_method
    IOxfReactive::TakeEventStatus accepttimeevent_17_handleEvent();
    
    // HVAC_Disabled:
    //## statechart_method
    inline bool HVAC_Disabled_IN() const;
    
    //## statechart_method
    IOxfReactive::TakeEventStatus HVAC_DisabledTakeev_HVAC_SwitchOn();
    
    //## statechart_method
    IOxfReactive::TakeEventStatus HVAC_Disabled_handleEvent();

protected :

//#[ ignore
    enum Network_Enum {
        OMNonState = 0,
        HVAC_Enabled = 1,
        state_12 = 2,
        Vent_On = 3,
        Vent_OFF = 4,
        accepttimeevent_14 = 5,
        state_11 = 6,
        Heating_On = 7,
        Heating_On_idle = 8,
        Heating_On_accepttimeevent_17 = 9,
        Heating_OFF = 10,
        Heating_OFF_idle = 11,
        Heating_OFF_accepttimeevent_17 = 12,
        state_10 = 13,
        AC_ON = 14,
        AC_ON_idle = 15,
        AC_ON_accepttimeevent_17 = 16,
        AC_OFF = 17,
        idle = 18,
        accepttimeevent_17 = 19,
        HVAC_Disabled = 20
    };
    
    int rootState_subState;
    
    int rootState_active;
    
    int state_12_subState;
    
    int state_12_active;
    
    IOxfTimeout* state_12_timeout;
    
    int state_11_subState;
    
    int state_11_active;
    
    int Heating_On_subState;
    
    IOxfTimeout* Heating_On_timeout;
    
    int Heating_OFF_subState;
    
    IOxfTimeout* Heating_OFF_timeout;
    
    int state_10_subState;
    
    int state_10_active;
    
    int AC_ON_subState;
    
    IOxfTimeout* AC_ON_timeout;
    
    int AC_OFF_subState;
    
    IOxfTimeout* AC_OFF_timeout;
//#]
};

#ifdef _OMINSTRUMENT
DECLARE_OPERATION_CLASS(ArchitecturalAnalysisPkg_Network_setCO2Alarm_bool)

DECLARE_OPERATION_CLASS(ArchitecturalAnalysisPkg_Network_setFireDetected_bool)

DECLARE_OPERATION_CLASS(ArchitecturalAnalysisPkg_Network_setIntensity_int)

DECLARE_OPERATION_CLASS(ArchitecturalAnalysisPkg_Network_setIs_Movement_bool)

DECLARE_OPERATION_CLASS(ArchitecturalAnalysisPkg_Network_setLightState_bool)

DECLARE_OPERATION_CLASS(ArchitecturalAnalysisPkg_Network_setOccupied_bool)

DECLARE_OPERATION_CLASS(ArchitecturalAnalysisPkg_Network_setSpeakerVol_int)

DECLARE_OPERATION_CLASS(ArchitecturalAnalysisPkg_Network_setTemp_int)

//#[ ignore
class OMAnimatedNetwork : virtual public AOMInstance {
    DECLARE_REACTIVE_META(Network, OMAnimatedNetwork)
    
    DECLARE_META_OP(ArchitecturalAnalysisPkg_Network_setCO2Alarm_bool)
    
    DECLARE_META_OP(ArchitecturalAnalysisPkg_Network_setFireDetected_bool)
    
    DECLARE_META_OP(ArchitecturalAnalysisPkg_Network_setIntensity_int)
    
    DECLARE_META_OP(ArchitecturalAnalysisPkg_Network_setIs_Movement_bool)
    
    DECLARE_META_OP(ArchitecturalAnalysisPkg_Network_setLightState_bool)
    
    DECLARE_META_OP(ArchitecturalAnalysisPkg_Network_setOccupied_bool)
    
    DECLARE_META_OP(ArchitecturalAnalysisPkg_Network_setSpeakerVol_int)
    
    DECLARE_META_OP(ArchitecturalAnalysisPkg_Network_setTemp_int)
    
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
    void accepttimeevent_14_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void state_11_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void Heating_On_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void Heating_On_idle_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void Heating_On_accepttimeevent_17_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void Heating_OFF_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void Heating_OFF_idle_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void Heating_OFF_accepttimeevent_17_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void state_10_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void AC_ON_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void AC_ON_idle_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void AC_ON_accepttimeevent_17_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void AC_OFF_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void idle_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void accepttimeevent_17_serializeStates(AOMSState* aomsState) const;
    
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

inline bool Network::accepttimeevent_14_IN() const {
    return state_12_subState == accepttimeevent_14;
}

inline bool Network::state_11_IN() const {
    return HVAC_Enabled_IN();
}

inline bool Network::Heating_On_IN() const {
    return state_11_subState == Heating_On;
}

inline bool Network::Heating_On_idle_IN() const {
    return Heating_On_subState == Heating_On_idle;
}

inline bool Network::Heating_On_accepttimeevent_17_IN() const {
    return Heating_On_subState == Heating_On_accepttimeevent_17;
}

inline bool Network::Heating_OFF_IN() const {
    return state_11_subState == Heating_OFF;
}

inline bool Network::Heating_OFF_idle_IN() const {
    return Heating_OFF_subState == Heating_OFF_idle;
}

inline bool Network::Heating_OFF_accepttimeevent_17_IN() const {
    return Heating_OFF_subState == Heating_OFF_accepttimeevent_17;
}

inline bool Network::state_10_IN() const {
    return HVAC_Enabled_IN();
}

inline bool Network::AC_ON_IN() const {
    return state_10_subState == AC_ON;
}

inline bool Network::AC_ON_idle_IN() const {
    return AC_ON_subState == AC_ON_idle;
}

inline bool Network::AC_ON_accepttimeevent_17_IN() const {
    return AC_ON_subState == AC_ON_accepttimeevent_17;
}

inline bool Network::AC_OFF_IN() const {
    return state_10_subState == AC_OFF;
}

inline bool Network::idle_IN() const {
    return AC_OFF_subState == idle;
}

inline bool Network::accepttimeevent_17_IN() const {
    return AC_OFF_subState == accepttimeevent_17;
}

inline bool Network::HVAC_Disabled_IN() const {
    return rootState_subState == HVAC_Disabled;
}

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Network.h
*********************************************************************/
