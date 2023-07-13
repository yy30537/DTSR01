/*********************************************************************
	Rhapsody	: 9.0 
	Login		: Administrator
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: CO2_Sensor
//!	Generated Date	: Thu, 13, Jul 2023  
	File Path	: DefaultComponent\DefaultConfig\CO2_Sensor.h
*********************************************************************/

#ifndef CO2_Sensor_H
#define CO2_Sensor_H

//## auto_generated
#include <oxf\oxf.h>
//## auto_generated
#include <..\Profiles\SysML\SIDefinitions.h>
//## auto_generated
#include <aom\aom.h>
//## auto_generated
#include "ArchitecturalAnalysisPkg.h"
//## class CO2_Sensor
#include "I_CO2.h"
//## link itsNetwork
class Network;

//## package ArchitecturalAnalysisPkg

//## class CO2_Sensor
class CO2_Sensor : public I_CO2 {
public :

//#[ ignore
    //## package ArchitecturalAnalysisPkg
    class pCO2_C : public I_CO2 {
        ////    Constructors and destructors    ////
        
    public :
    
        //## auto_generated
        pCO2_C();
        
        //## auto_generated
        virtual ~pCO2_C();
        
        ////    Operations    ////
        
        //## auto_generated
        void connectCO2_Sensor(CO2_Sensor* part);
        
        //## auto_generated
        I_CO2* getItsI_CO2();
        
        //## auto_generated
        virtual bool get_CO2_Alarm();
        
        //## auto_generated
        virtual void set_CO2_Alarm(bool arg_CO2_Alarm_state);
        
        ////    Additional operations    ////
        
        //## auto_generated
        void setItsI_CO2(I_CO2* p_I_CO2);
    
    protected :
    
        //## auto_generated
        void cleanUpRelations();
        
        ////    Attributes    ////
        
        int _p_;		//## attribute _p_
        
        ////    Relations and components    ////
        
        I_CO2* itsI_CO2;		//## link itsI_CO2
    };
//#]

    ////    Friends    ////
    
#ifdef _OMINSTRUMENT
    friend class OMAnimatedCO2_Sensor;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    CO2_Sensor();
    
    //## auto_generated
    virtual ~CO2_Sensor();
    
    //## operation get_CO2_Alarm()
    virtual bool get_CO2_Alarm();
    
    //## operation set_CO2_Alarm(bool)
    virtual void set_CO2_Alarm(bool arg_CO2_Alarm_state);
    
    //## auto_generated
    pCO2_C* getPCO2() const;
    
    //## auto_generated
    pCO2_C* get_pCO2() const;
    
    //## auto_generated
    bool getCO2_Alarm_state() const;
    
    //## auto_generated
    void setCO2_Alarm_state(bool p_CO2_Alarm_state);
    
    //## auto_generated
    Network* getItsNetwork() const;
    
    //## auto_generated
    void setItsNetwork(Network* p_Network);

protected :

    //## auto_generated
    void initRelations();
    
    //## auto_generated
    void cleanUpRelations();
    
    bool CO2_Alarm_state;		//## attribute CO2_Alarm_state
    
//#[ ignore
    pCO2_C pCO2;
//#]

    Network* itsNetwork;		//## link itsNetwork

public :

    //## auto_generated
    void __setItsNetwork(Network* p_Network);
    
    //## auto_generated
    void _setItsNetwork(Network* p_Network);
    
    //## auto_generated
    void _clearItsNetwork();
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedCO2_Sensor : public OMAnimatedI_CO2 {
    DECLARE_META(CO2_Sensor, OMAnimatedCO2_Sensor)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeAttributes(AOMSAttributes* aomsAttributes) const;
    
    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\CO2_Sensor.h
*********************************************************************/
