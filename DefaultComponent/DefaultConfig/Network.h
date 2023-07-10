/*********************************************************************
	Rhapsody	: 9.0 
	Login		: Yang
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Network
//!	Generated Date	: Sun, 9, Jul 2023  
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
        virtual void setTemp(int arg_temp);
        
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
    virtual bool startBehavior();

protected :

    //## auto_generated
    void initStatechart();
    
    //## auto_generated
    void cleanUpRelations();
    
    //## auto_generated
    void cancelTimeouts();
    
    //## auto_generated
    bool cancelTimeout(const IOxfTimeout* arg);
    
    ////    Attributes    ////
    
    int temp_Network;		//## attribute temp_Network
    
    ////    Relations and components    ////
    
//#[ ignore
    pNetwork_C pNetwork;
//#]

    HVAC* itsHVAC;		//## link itsHVAC
    
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
    
    // On:
    //## statechart_method
    inline bool On_IN() const;
    
    ////    Framework    ////

protected :

//#[ ignore
    enum Network_Enum {
        OMNonState = 0,
        On = 1
    };
    
    int rootState_subState;
    
    int rootState_active;
    
    IOxfTimeout* rootState_timeout;
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
};
//#]
#endif // _OMINSTRUMENT

inline bool Network::rootState_IN() const {
    return true;
}

inline bool Network::On_IN() const {
    return rootState_subState == On;
}

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Network.h
*********************************************************************/
