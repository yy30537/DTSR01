/*********************************************************************
	Rhapsody	: 9.0 
	Login		: Yang
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: HVAC
//!	Generated Date	: Sat, 15, Jul 2023  
	File Path	: DefaultComponent\DefaultConfig\HVAC.h
*********************************************************************/

#ifndef HVAC_H
#define HVAC_H

//## auto_generated
#include <oxf\oxf.h>
//## auto_generated
#include <..\Profiles\SysML\SIDefinitions.h>
//## auto_generated
#include <aom\aom.h>
//## auto_generated
#include "ArchitecturalAnalysisPkg.h"
//## class HVAC
#include "I_HVAC.h"
//## link itsNetwork
class Network;

//## package ArchitecturalAnalysisPkg

//## class HVAC
class HVAC : public I_HVAC {
public :

//#[ ignore
    //## package ArchitecturalAnalysisPkg
    class pHVAC_C : public I_HVAC {
        ////    Constructors and destructors    ////
        
    public :
    
        //## auto_generated
        pHVAC_C();
        
        //## auto_generated
        virtual ~pHVAC_C();
        
        ////    Operations    ////
        
        //## auto_generated
        void connectHVAC(HVAC* part);
        
        //## auto_generated
        I_HVAC* getItsI_HVAC();
        
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
    friend class OMAnimatedHVAC;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    HVAC();
    
    //## auto_generated
    virtual ~HVAC();
    
    ////    Operations    ////
    
    //## operation getTemp()
    virtual int getTemp();
    
    //## operation get_AC_state()
    virtual bool get_AC_state();
    
    //## operation get_HVAC_state()
    virtual bool get_HVAC_state();
    
    //## operation get_Heating_state()
    virtual bool get_Heating_state();
    
    //## operation get_Vent_state()
    virtual bool get_Vent_state();
    
    //## operation setTemp(int)
    virtual void setTemp(int arg_temp);
    
    //## operation set_AC_state(bool)
    virtual void set_AC_state(bool arg_AC_state);
    
    //## operation set_HVAC_state(bool)
    virtual void set_HVAC_state(bool arg_HVAC_state);
    
    //## operation set_Heating_state(bool)
    virtual void set_Heating_state(bool arg_Heating_state);
    
    //## operation set_Vent_state(bool)
    virtual void set_Vent_state(bool arg_Vent_state);
    
    ////    Additional operations    ////
    
    //## auto_generated
    pHVAC_C* getPHVAC() const;
    
    //## auto_generated
    pHVAC_C* get_pHVAC() const;
    
    //## auto_generated
    bool getStatus_AC() const;
    
    //## auto_generated
    void setStatus_AC(bool p_status_AC);
    
    //## auto_generated
    bool getStatus_HVAC() const;
    
    //## auto_generated
    void setStatus_HVAC(bool p_status_HVAC);
    
    //## auto_generated
    bool getStatus_Heating() const;
    
    //## auto_generated
    void setStatus_Heating(bool p_status_Heating);
    
    //## auto_generated
    bool getStatus_Vent() const;
    
    //## auto_generated
    void setStatus_Vent(bool p_status_Vent);
    
    //## auto_generated
    int getTemp_HVAC() const;
    
    //## auto_generated
    void setTemp_HVAC(int p_temp_HVAC);
    
    //## auto_generated
    Network* getItsNetwork() const;
    
    //## auto_generated
    void setItsNetwork(Network* p_Network);

protected :

    //## auto_generated
    void initRelations();
    
    //## auto_generated
    void cleanUpRelations();
    
    ////    Attributes    ////
    
    bool status_AC;		//## attribute status_AC
    
    bool status_HVAC;		//## attribute status_HVAC
    
    bool status_Heating;		//## attribute status_Heating
    
    bool status_Vent;		//## attribute status_Vent
    
    int temp_HVAC;		//## attribute temp_HVAC
    
    ////    Relations and components    ////
    
    Network* itsNetwork;		//## link itsNetwork
    
    ////    Framework operations    ////

public :

    //## auto_generated
    void __setItsNetwork(Network* p_Network);
    
    //## auto_generated
    void _setItsNetwork(Network* p_Network);
    
    //## auto_generated
    void _clearItsNetwork();

protected :

//#[ ignore
    pHVAC_C pHVAC;
//#]
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedHVAC : public OMAnimatedI_HVAC {
    DECLARE_META(HVAC, OMAnimatedHVAC)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeAttributes(AOMSAttributes* aomsAttributes) const;
    
    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\HVAC.h
*********************************************************************/
