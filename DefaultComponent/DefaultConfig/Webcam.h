/*********************************************************************
	Rhapsody	: 9.0 
	Login		: Administrator
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Webcam
//!	Generated Date	: Sat, 15, Jul 2023  
	File Path	: DefaultComponent\DefaultConfig\Webcam.h
*********************************************************************/

#ifndef Webcam_H
#define Webcam_H

//## auto_generated
#include <oxf\oxf.h>
//## auto_generated
#include <..\Profiles\SysML\SIDefinitions.h>
//## auto_generated
#include <aom\aom.h>
//## auto_generated
#include "ArchitecturalAnalysisPkg.h"
//## class Webcam
#include "I_WC.h"
//## package ArchitecturalAnalysisPkg

//## class Webcam
class Webcam : public I_WC {
public :

//#[ ignore
    //## package ArchitecturalAnalysisPkg
    class pWebcam_C : public I_WC {
        ////    Constructors and destructors    ////
        
    public :
    
        //## auto_generated
        pWebcam_C();
        
        //## auto_generated
        virtual ~pWebcam_C();
        
        ////    Operations    ////
        
        //## auto_generated
        void connectWebcam(Webcam* part);
        
        //## auto_generated
        I_WC* getItsI_WC();
        
        ////    Additional operations    ////
        
        //## auto_generated
        void setItsI_WC(I_WC* p_I_WC);
    
    protected :
    
        //## auto_generated
        void cleanUpRelations();
        
        ////    Attributes    ////
        
        int _p_;		//## attribute _p_
        
        ////    Relations and components    ////
        
        I_WC* itsI_WC;		//## link itsI_WC
    };
//#]

    ////    Friends    ////
    
#ifdef _OMINSTRUMENT
    friend class OMAnimatedWebcam;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    Webcam();
    
    //## auto_generated
    ~Webcam();
    
    //## auto_generated
    pWebcam_C* getPWebcam() const;
    
    //## auto_generated
    pWebcam_C* get_pWebcam() const;

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
    pWebcam_C pWebcam;
//#]
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedWebcam : public OMAnimatedI_WC {
    DECLARE_META(Webcam, OMAnimatedWebcam)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeAttributes(AOMSAttributes* aomsAttributes) const;
    
    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Webcam.h
*********************************************************************/
