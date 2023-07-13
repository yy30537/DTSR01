/*********************************************************************
	Rhapsody	: 9.0 
	Login		: Administrator
	Component	: DefaultComponent 
	Configuration 	: Network_Simulation
	Model Element	: ArchitecturalAnalysisPkg
//!	Generated Date	: Thu, 13, Jul 2023  
	File Path	: DefaultComponent\Network_Simulation\ArchitecturalAnalysisPkg.h
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
class CO2_Sensor;

//## auto_generated
class HVAC;

//## auto_generated
class I_CO2;

//## auto_generated
class I_HVAC;

//## auto_generated
class Network;

//#[ ignore
#define ev_AC_SwitchOn_ArchitecturalAnalysisPkg_id 18201

#define ev_AC_SwitchOff_ArchitecturalAnalysisPkg_id 18202

#define ev_Heating_SwitchOn_ArchitecturalAnalysisPkg_id 18203

#define ev_Heating_SwitchOff_ArchitecturalAnalysisPkg_id 18204

#define ev_Vent_SwitchOn_ArchitecturalAnalysisPkg_id 18205

#define ev_Vent_SwitchOff_ArchitecturalAnalysisPkg_id 18206

#define ev_HVAC_SwitchOff_ArchitecturalAnalysisPkg_id 18207

#define ev_HVAC_SwitchOn_ArchitecturalAnalysisPkg_id 18208

#define ev_CO2_OverTH_ArchitecturalAnalysisPkg_id 18209

#define ev_CO2_UnderTH_ArchitecturalAnalysisPkg_id 18210
//#]

//## package ArchitecturalAnalysisPkg


//## auto_generated
void ArchitecturalAnalysisPkg_initRelations();

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

//## event ev_CO2_OverTH()
class ev_CO2_OverTH : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedev_CO2_OverTH;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    ev_CO2_OverTH();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedev_CO2_OverTH : virtual public AOMEvent {
    DECLARE_META_EVENT(ev_CO2_OverTH)
};
//#]
#endif // _OMINSTRUMENT

//## event ev_CO2_UnderTH()
class ev_CO2_UnderTH : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedev_CO2_UnderTH;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    ev_CO2_UnderTH();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedev_CO2_UnderTH : virtual public AOMEvent {
    DECLARE_META_EVENT(ev_CO2_UnderTH)
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\Network_Simulation\ArchitecturalAnalysisPkg.h
*********************************************************************/
