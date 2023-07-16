/*********************************************************************
	Rhapsody	: 9.0 
	Login		: Administrator
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Microphones
//!	Generated Date	: Sun, 16, Jul 2023  
	File Path	: DefaultComponent\DefaultConfig\Microphones.h
*********************************************************************/

#ifndef Microphones_H
#define Microphones_H

//## auto_generated
#include <oxf\oxf.h>
//## auto_generated
#include <..\Profiles\SysML\SIDefinitions.h>
//## auto_generated
#include <aom\aom.h>
//## auto_generated
#include "ArchitecturalAnalysisPkg.h"
//## class Microphones
#include "I_Mic.h"
//## package ArchitecturalAnalysisPkg

//## class Microphones
class Microphones : public I_Mic {
public :

//#[ ignore
    //## package ArchitecturalAnalysisPkg
    class pMic_C : public I_Mic {
        ////    Constructors and destructors    ////
        
    public :
    
        //## auto_generated
        pMic_C();
        
        //## auto_generated
        virtual ~pMic_C();
        
        ////    Operations    ////
        
        //## auto_generated
        void connectMicrophones(Microphones* part);
        
        //## auto_generated
        I_Mic* getItsI_Mic();
        
        //## auto_generated
        virtual bool getStateMic();
        
        //## auto_generated
        virtual void setStateMic(bool argState);
        
        ////    Additional operations    ////
        
        //## auto_generated
        void setItsI_Mic(I_Mic* p_I_Mic);
    
    protected :
    
        //## auto_generated
        void cleanUpRelations();
        
        ////    Attributes    ////
        
        int _p_;		//## attribute _p_
        
        ////    Relations and components    ////
        
        I_Mic* itsI_Mic;		//## link itsI_Mic
    };
//#]

    ////    Friends    ////
    
#ifdef _OMINSTRUMENT
    friend class OMAnimatedMicrophones;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    Microphones();
    
    //## auto_generated
    virtual ~Microphones();
    
    //## operation getStateMic()
    virtual bool getStateMic();
    
    //## operation setStateMic(bool)
    virtual void setStateMic(bool argState);
    
    //## auto_generated
    pMic_C* getPMic() const;
    
    //## auto_generated
    pMic_C* get_pMic() const;

protected :

    //## auto_generated
    void initRelations();
    
    bool state;		//## attribute state

public :

    //## auto_generated
    bool getState() const;
    
    //## auto_generated
    void setState(bool p_state);

protected :

//#[ ignore
    pMic_C pMic;
//#]
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedMicrophones : public OMAnimatedI_Mic {
    DECLARE_META(Microphones, OMAnimatedMicrophones)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeAttributes(AOMSAttributes* aomsAttributes) const;
    
    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Microphones.h
*********************************************************************/
