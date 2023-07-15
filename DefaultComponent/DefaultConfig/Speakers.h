/*********************************************************************
	Rhapsody	: 9.0 
	Login		: Yang
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Speakers
//!	Generated Date	: Sat, 15, Jul 2023  
	File Path	: DefaultComponent\DefaultConfig\Speakers.h
*********************************************************************/

#ifndef Speakers_H
#define Speakers_H

//## auto_generated
#include <oxf\oxf.h>
//## auto_generated
#include <..\Profiles\SysML\SIDefinitions.h>
//## auto_generated
#include <aom\aom.h>
//## auto_generated
#include "ArchitecturalAnalysisPkg.h"
//## class Speakers
#include "I_Spkr.h"
//## package ArchitecturalAnalysisPkg

//## class Speakers
class Speakers : public I_Spkr {
public :

//#[ ignore
    //## package ArchitecturalAnalysisPkg
    class pSpeakers_C : public I_Spkr {
        ////    Constructors and destructors    ////
        
    public :
    
        //## auto_generated
        pSpeakers_C();
        
        //## auto_generated
        virtual ~pSpeakers_C();
        
        ////    Operations    ////
        
        //## auto_generated
        void connectSpeakers(Speakers* part);
        
        //## auto_generated
        I_Spkr* getItsI_Spkr();
        
        //## auto_generated
        virtual bool getState();
        
        //## auto_generated
        virtual void setState(bool argState);
        
        ////    Additional operations    ////
        
        //## auto_generated
        void setItsI_Spkr(I_Spkr* p_I_Spkr);
    
    protected :
    
        //## auto_generated
        void cleanUpRelations();
        
        ////    Attributes    ////
        
        int _p_;		//## attribute _p_
        
        ////    Relations and components    ////
        
        I_Spkr* itsI_Spkr;		//## link itsI_Spkr
    };
//#]

    ////    Friends    ////
    
#ifdef _OMINSTRUMENT
    friend class OMAnimatedSpeakers;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    Speakers();
    
    //## auto_generated
    virtual ~Speakers();
    
    //## operation getState()
    virtual bool getState();
    
    //## operation setState(bool)
    virtual void setState(bool argState);
    
    //## auto_generated
    pSpeakers_C* getPSpeakers() const;
    
    //## auto_generated
    pSpeakers_C* get_pSpeakers() const;

protected :

    //## auto_generated
    void initRelations();
    
    bool state;		//## attribute state
    
//#[ ignore
    pSpeakers_C pSpeakers;
//#]
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedSpeakers : public OMAnimatedI_Spkr {
    DECLARE_META(Speakers, OMAnimatedSpeakers)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeAttributes(AOMSAttributes* aomsAttributes) const;
    
    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Speakers.h
*********************************************************************/
