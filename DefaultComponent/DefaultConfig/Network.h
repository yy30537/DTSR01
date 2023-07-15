/*********************************************************************
	Rhapsody	: 9.0 
	Login		: Yang
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Network
//!	Generated Date	: Sat, 15, Jul 2023  
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
#include "I_FS.h"
//## class pNetwork_C
#include "I_Mic.h"
//## class pNetwork_C
#include "I_Spkr.h"
//## class pNetwork_C
#include "I_SS.h"
//## class pNetwork_C
#include "I_WC.h"
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

//## package ArchitecturalAnalysisPkg

//## class Network
class Network : public OMReactive {
public :

//#[ ignore
    //## package ArchitecturalAnalysisPkg
    class pNetwork_C : public I_HVAC, public I_CO2, public I_Weather, public I_Light, public I_OS, public I_FS, public I_Mic, public I_SS, public I_Spkr, public I_WC {
        ////    Constructors and destructors    ////
        
    public :
    
        //## auto_generated
        pNetwork_C();
        
        //## auto_generated
        virtual ~pNetwork_C();
        
        ////    Operations    ////
        
        //## auto_generated
        virtual bool getCold();
        
        //## auto_generated
        virtual bool getHot();
        
        //## auto_generated
        virtual int getItensity();
        
        //## auto_generated
        I_CO2* getItsI_CO2();
        
        //## auto_generated
        I_FS* getItsI_FS();
        
        //## auto_generated
        I_HVAC* getItsI_HVAC();
        
        //## auto_generated
        I_Light* getItsI_Light();
        
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
        virtual bool getOccupied();
        
        //## auto_generated
        Network::pNetwork_C* getOutBound();
        
        //## auto_generated
        virtual bool getState();
        
        //## auto_generated
        virtual int getTemp();
        
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
        virtual void setCold(bool arg_cold);
        
        //## auto_generated
        virtual void setHot(bool arg_hot);
        
        //## auto_generated
        virtual void setIntensity(int arg_intensity);
        
        //## auto_generated
        virtual void setOccupied(bool arg_occupied);
        
        //## auto_generated
        virtual void setState(bool argState);
        
        //## auto_generated
        virtual void setTemp(int arg_temp);
        
        //## auto_generated
        virtual void set_AC_state(bool arg_AC_state);
        
        //## auto_generated
        virtual void set_CO2_Alarm(bool arg_CO2_Alarm_state);
        
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
        void setItsI_FS(I_FS* p_I_FS);
        
        //## auto_generated
        void setItsI_HVAC(I_HVAC* p_I_HVAC);
        
        //## auto_generated
        void setItsI_Light(I_Light* p_I_Light);
        
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
        
        I_CO2* itsI_CO2;		//## link itsI_CO2
        
        I_FS* itsI_FS;		//## link itsI_FS
        
        I_HVAC* itsI_HVAC;		//## link itsI_HVAC
        
        I_Light* itsI_Light;		//## link itsI_Light
        
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
    
    // On:
    //## statechart_method
    inline bool On_IN() const;
    
    //## statechart_method
    void On_entDef();
    
    //## statechart_method
    IOxfReactive::TakeEventStatus On_handleEvent();
    
    // Op:
    //## statechart_method
    inline bool Op_IN() const;
    
    //## statechart_method
    IOxfReactive::TakeEventStatus Op_handleEvent();
    
    // accepttimeevent_7:
    //## statechart_method
    inline bool accepttimeevent_7_IN() const;
    
    //## statechart_method
    IOxfReactive::TakeEventStatus accepttimeevent_7_handleEvent();
    
    // Off:
    //## statechart_method
    inline bool Off_IN() const;
    
    // accepttimeevent_6:
    //## statechart_method
    inline bool accepttimeevent_6_IN() const;

protected :

//#[ ignore
    enum Network_Enum {
        OMNonState = 0,
        On = 1,
        Op = 2,
        accepttimeevent_7 = 3,
        Off = 4,
        accepttimeevent_6 = 5
    };
    
    int rootState_subState;
    
    int rootState_active;
    
    int On_subState;
    
    IOxfTimeout* rootState_timeout;
    
    IOxfTimeout* On_timeout;
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
    void On_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void Op_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void accepttimeevent_7_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void Off_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void accepttimeevent_6_serializeStates(AOMSState* aomsState) const;
};
//#]
#endif // _OMINSTRUMENT

inline bool Network::rootState_IN() const {
    return true;
}

inline bool Network::On_IN() const {
    return rootState_subState == On;
}

inline bool Network::Op_IN() const {
    return On_subState == Op;
}

inline bool Network::accepttimeevent_7_IN() const {
    return On_subState == accepttimeevent_7;
}

inline bool Network::Off_IN() const {
    return rootState_subState == Off;
}

inline bool Network::accepttimeevent_6_IN() const {
    return rootState_subState == accepttimeevent_6;
}

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Network.h
*********************************************************************/
