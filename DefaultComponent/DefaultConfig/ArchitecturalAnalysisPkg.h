/*********************************************************************
	Rhapsody	: 9.0 
	Login		: Administrator
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: ArchitecturalAnalysisPkg
//!	Generated Date	: Sat, 15, Jul 2023  
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
//## classInstance itsBooking_System
class Booking_System;

//## classInstance itsCO2_Sensor
class CO2_Sensor;

//## auto_generated
class Door_Touch_Panel;

//## auto_generated
class External_Personnel;

//## classInstance itsFire_Sensor
class Fire_Sensor;

//## classInstance itsHVAC
class HVAC;

//## auto_generated
class I_BS;

//## auto_generated
class I_CO2;

//## auto_generated
class I_FS;

//## auto_generated
class I_HVAC;

//## auto_generated
class I_Light;

//## auto_generated
class I_MS;

//## auto_generated
class I_Mic;

//## auto_generated
class I_OS;

//## auto_generated
class I_SS;

//## auto_generated
class I_Spkr;

//## auto_generated
class I_WC;

//## auto_generated
class I_Weather;

//## classInstance itsLights
class Lights;

//## classInstance itsMicrophones
class Microphones;

//## auto_generated
class Movement_Sensor;

//## classInstance itsNetwork
class Network;

//## classInstance itsOccupancy_Sensor
class Occupancy_Sensor;

//## auto_generated
class Room_Touch_Panel;

//## auto_generated
class Smart_Room;

//## classInstance itsSmart_Screen
class Smart_Screen;

//## classInstance itsSpeakers
class Speakers;

//## classInstance itsWeather_Forecast
class Weather_Forecast;

//## classInstance itsWebcam
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

#define ev_CO2_AboveTH_ArchitecturalAnalysisPkg_id 18209

#define ev_CO2_BelowTH_ArchitecturalAnalysisPkg_id 18210

#define ev_TurnOn_Light_ArchitecturalAnalysisPkg_id 18211

#define ev_TurnOff_Light_ArchitecturalAnalysisPkg_id 18212

#define ev_turnOnLight_ArchitecturalAnalysisPkg_id 18213
//#]

//## package ArchitecturalAnalysisPkg


//## classInstance itsHVAC
extern HVAC itsHVAC;

//## classInstance itsNetwork
extern Network itsNetwork;

//## auto_generated
void ArchitecturalAnalysisPkg_initRelations();

//## auto_generated
bool ArchitecturalAnalysisPkg_startBehavior();

//## classInstance itsCO2_Sensor
extern CO2_Sensor itsCO2_Sensor;

//## classInstance itsWeather_Forecast
extern Weather_Forecast itsWeather_Forecast;

//## classInstance itsLights
extern Lights itsLights;

//## classInstance itsOccupancy_Sensor
extern Occupancy_Sensor itsOccupancy_Sensor;

//## classInstance itsBooking_System
extern Booking_System itsBooking_System;

//## classInstance itsFire_Sensor
extern Fire_Sensor itsFire_Sensor;

//## classInstance itsMicrophones
extern Microphones itsMicrophones;

//## classInstance itsSmart_Screen
extern Smart_Screen itsSmart_Screen;

//## classInstance itsSpeakers
extern Speakers itsSpeakers;

//## classInstance itsWebcam
extern Webcam itsWebcam;

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

//## event ev_CO2_AboveTH()
class ev_CO2_AboveTH : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedev_CO2_AboveTH;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    ev_CO2_AboveTH();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedev_CO2_AboveTH : virtual public AOMEvent {
    DECLARE_META_EVENT(ev_CO2_AboveTH)
};
//#]
#endif // _OMINSTRUMENT

//## event ev_CO2_BelowTH()
class ev_CO2_BelowTH : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedev_CO2_BelowTH;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    ev_CO2_BelowTH();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedev_CO2_BelowTH : virtual public AOMEvent {
    DECLARE_META_EVENT(ev_CO2_BelowTH)
};
//#]
#endif // _OMINSTRUMENT

//## event ev_TurnOn_Light()
class ev_TurnOn_Light : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedev_TurnOn_Light;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    ev_TurnOn_Light();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedev_TurnOn_Light : virtual public AOMEvent {
    DECLARE_META_EVENT(ev_TurnOn_Light)
};
//#]
#endif // _OMINSTRUMENT

//## event ev_TurnOff_Light()
class ev_TurnOff_Light : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedev_TurnOff_Light;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    ev_TurnOff_Light();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedev_TurnOff_Light : virtual public AOMEvent {
    DECLARE_META_EVENT(ev_TurnOff_Light)
};
//#]
#endif // _OMINSTRUMENT

//## event ev_turnOnLight()
class ev_turnOnLight : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedev_turnOnLight;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    ev_turnOnLight();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedev_turnOnLight : virtual public AOMEvent {
    DECLARE_META_EVENT(ev_turnOnLight)
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\ArchitecturalAnalysisPkg.h
*********************************************************************/
