/*********************************************************************
	Rhapsody	: 9.0 
	Login		: Yang
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Smart_Screen
//!	Generated Date	: Sat, 15, Jul 2023  
	File Path	: DefaultComponent\DefaultConfig\Smart_Screen.h
*********************************************************************/

#ifndef Smart_Screen_H
#define Smart_Screen_H

//## auto_generated
#include <oxf\oxf.h>
//## auto_generated
#include <..\Profiles\SysML\SIDefinitions.h>
//## auto_generated
#include <aom\aom.h>
//## auto_generated
#include "ArchitecturalAnalysisPkg.h"
//## class Smart_Screen
#include "I_SS.h"
//## package ArchitecturalAnalysisPkg

//## class Smart_Screen
class Smart_Screen : public I_SS {
public :

//#[ ignore
    //## package ArchitecturalAnalysisPkg
    class pSmartScreen_C : public I_SS {
        ////    Constructors and destructors    ////
        
    public :
    
        //## auto_generated
        pSmartScreen_C();
        
        //## auto_generated
        virtual ~pSmartScreen_C();
        
        ////    Operations    ////
        
        //## auto_generated
        void connectSmart_Screen(Smart_Screen* part);
        
        //## auto_generated
        I_SS* getItsI_SS();
        
        //## auto_generated
        virtual bool getState();
        
        //## auto_generated
        virtual void setState(bool argState);
        
        ////    Additional operations    ////
        
        //## auto_generated
        void setItsI_SS(I_SS* p_I_SS);
    
    protected :
    
        //## auto_generated
        void cleanUpRelations();
        
        ////    Attributes    ////
        
        int _p_;		//## attribute _p_
        
        ////    Relations and components    ////
        
        I_SS* itsI_SS;		//## link itsI_SS
    };
//#]

    ////    Friends    ////
    
#ifdef _OMINSTRUMENT
    friend class OMAnimatedSmart_Screen;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    Smart_Screen();
    
    //## auto_generated
    virtual ~Smart_Screen();
    
    //## operation getState()
    virtual bool getState();
    
    //## operation setState(bool)
    virtual void setState(bool argState);
    
    //## auto_generated
    pSmartScreen_C* getPSmartScreen() const;
    
    //## auto_generated
    pSmartScreen_C* get_pSmartScreen() const;

protected :

    //## auto_generated
    void initRelations();
    
    bool state;		//## attribute state
    
//#[ ignore
    pSmartScreen_C pSmartScreen;
//#]
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedSmart_Screen : public OMAnimatedI_SS {
    DECLARE_META(Smart_Screen, OMAnimatedSmart_Screen)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeAttributes(AOMSAttributes* aomsAttributes) const;
    
    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Smart_Screen.h
*********************************************************************/
