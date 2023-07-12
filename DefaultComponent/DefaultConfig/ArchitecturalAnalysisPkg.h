/*********************************************************************
	Rhapsody	: 9.0 
	Login		: Yang
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: ArchitecturalAnalysisPkg
//!	Generated Date	: Wed, 12, Jul 2023  
	File Path	: DefaultComponent\DefaultConfig\ArchitecturalAnalysisPkg.h
*********************************************************************/

#ifndef ArchitecturalAnalysisPkg_H
#define ArchitecturalAnalysisPkg_H

//## auto_generated
#include <oxf\oxf.h>
//## auto_generated
#include <..\Profiles\SysML\SIDefinitions.h>
//## auto_generated
#include <aom\aom.h>
//## auto_generated
#include <oxf\event.h>
//## auto_generated
class AC;

//## auto_generated
class Booking_System;

//## classInstance itsCO2_Sensor
class CO2_Sensor;

//## auto_generated
class Door_Touch_Panel;

//## auto_generated
class External_Personnel;

//## classInstance itsHVAC
class HVAC;

//## auto_generated
class Heating;

//## auto_generated
class I_CO2;

//## auto_generated
class I_HVAC;

//## auto_generated
class Lights;

//## auto_generated
class Microphones;

//## auto_generated
class Movement_Sensor;

//## classInstance itsNetwork
class Network;

//## auto_generated
class Occupancy_Sensor;

//## auto_generated
class Room_Touch_Panel;

//## auto_generated
class Smart_Room;

//## auto_generated
class Smart_Screen;

//## auto_generated
class Speakers;

//## auto_generated
class Ventilation;

//## auto_generated
class Weather_Forecast;

//## auto_generated
class Webcam;

//#[ ignore
#define ev_AC_SwitchOn_ArchitecturalAnalysisPkg_id 18201

#define ev_AC_SwitchOff_ArchitecturalAnalysisPkg_id 18202

#define ev_Heating_SwitchOn_ArchitecturalAnalysisPkg_id 18203

#define ev_Heating_SwitchOff_ArchitecturalAnalysisPkg_id 18204

#define ev_Vent_SwitchOn_ArchitecturalAnalysisPkg_id 18205

#define ev_Vent_SwitchOff_ArchitecturalAnalysisPkg_id 18206

#define ev_HVAC_SwitchOff_ArchitecturalAnalysisPkg_id 18207

#define ev_HVAC_SwitchOn_ArchitecturalAnalysisPkg_id 18208

#define ev_CO2_Trigger_ArchitecturalAnalysisPkg_id 18209
//#]

//## package ArchitecturalAnalysisPkg


//## classInstance itsCO2_Sensor
extern CO2_Sensor itsCO2_Sensor;

//## classInstance itsHVAC
extern HVAC itsHVAC;

//## classInstance itsNetwork
extern Network itsNetwork;

//## auto_generated
void ArchitecturalAnalysisPkg_initRelations();

//## auto_generated
bool ArchitecturalAnalysisPkg_startBehavior();

//#[ ignore
class ArchitecturalAnalysisPkg_OMInitializer {
    ////    Constructors and destructors    ////
    
public :

    //## auto_generated
    ArchitecturalAnalysisPkg_OMInitializer();
    
    //## auto_generated
    ~ArchitecturalAnalysisPkg_OMInitializer();
};
//#]

//## event ev_AC_SwitchOn()
class ev_AC_SwitchOn : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedev_AC_SwitchOn;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    ev_AC_SwitchOn();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedev_AC_SwitchOn : virtual public AOMEvent {
    DECLARE_META_EVENT(ev_AC_SwitchOn)
};
//#]
#endif // _OMINSTRUMENT

//## event ev_AC_SwitchOff()
class ev_AC_SwitchOff : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedev_AC_SwitchOff;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    ev_AC_SwitchOff();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedev_AC_SwitchOff : virtual public AOMEvent {
    DECLARE_META_EVENT(ev_AC_SwitchOff)
};
//#]
#endif // _OMINSTRUMENT

//## event ev_Heating_SwitchOn()
class ev_Heating_SwitchOn : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedev_Heating_SwitchOn;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    ev_Heating_SwitchOn();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedev_Heating_SwitchOn : virtual public AOMEvent {
    DECLARE_META_EVENT(ev_Heating_SwitchOn)
};
//#]
#endif // _OMINSTRUMENT

//## event ev_Heating_SwitchOff()
class ev_Heating_SwitchOff : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedev_Heating_SwitchOff;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    ev_Heating_SwitchOff();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedev_Heating_SwitchOff : virtual public AOMEvent {
    DECLARE_META_EVENT(ev_Heating_SwitchOff)
};
//#]
#endif // _OMINSTRUMENT

//## event ev_Vent_SwitchOn()
class ev_Vent_SwitchOn : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedev_Vent_SwitchOn;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    ev_Vent_SwitchOn();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedev_Vent_SwitchOn : virtual public AOMEvent {
    DECLARE_META_EVENT(ev_Vent_SwitchOn)
};
//#]
#endif // _OMINSTRUMENT

//## event ev_Vent_SwitchOff()
class ev_Vent_SwitchOff : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedev_Vent_SwitchOff;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    ev_Vent_SwitchOff();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedev_Vent_SwitchOff : virtual public AOMEvent {
    DECLARE_META_EVENT(ev_Vent_SwitchOff)
};
//#]
#endif // _OMINSTRUMENT

//## event ev_HVAC_SwitchOff()
class ev_HVAC_SwitchOff : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedev_HVAC_SwitchOff;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    ev_HVAC_SwitchOff();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedev_HVAC_SwitchOff : virtual public AOMEvent {
    DECLARE_META_EVENT(ev_HVAC_SwitchOff)
};
//#]
#endif // _OMINSTRUMENT

//## event ev_HVAC_SwitchOn()
class ev_HVAC_SwitchOn : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedev_HVAC_SwitchOn;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    ev_HVAC_SwitchOn();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedev_HVAC_SwitchOn : virtual public AOMEvent {
    DECLARE_META_EVENT(ev_HVAC_SwitchOn)
};
//#]
#endif // _OMINSTRUMENT

//## event ev_CO2_Trigger()
class ev_CO2_Trigger : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedev_CO2_Trigger;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    ev_CO2_Trigger();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedev_CO2_Trigger : virtual public AOMEvent {
    DECLARE_META_EVENT(ev_CO2_Trigger)
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\ArchitecturalAnalysisPkg.h
*********************************************************************/
