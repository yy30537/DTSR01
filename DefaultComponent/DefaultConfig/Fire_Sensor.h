/*********************************************************************
	Rhapsody	: 9.0 
	Login		: Administrator
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Fire_Sensor
//!	Generated Date	: Sat, 15, Jul 2023  
	File Path	: DefaultComponent\DefaultConfig\Fire_Sensor.h
*********************************************************************/

#ifndef Fire_Sensor_H
#define Fire_Sensor_H

//## auto_generated
#include <oxf\oxf.h>
//## auto_generated
#include <..\Profiles\SysML\SIDefinitions.h>
//## auto_generated
#include <aom\aom.h>
//## auto_generated
#include "ArchitecturalAnalysisPkg.h"
//## class Fire_Sensor
#include "I_FS.h"
//## package ArchitecturalAnalysisPkg

//## class Fire_Sensor
class Fire_Sensor : public I_FS {
public :

//#[ ignore
    //## package ArchitecturalAnalysisPkg
    class pFS_C : public I_FS {
        ////    Constructors and destructors    ////
        
    public :
    
        //## auto_generated
        pFS_C();
        
        //## auto_generated
        virtual ~pFS_C();
        
        ////    Operations    ////
        
        //## auto_generated
        void connectFire_Sensor(Fire_Sensor* part);
        
        //## auto_generated
        I_FS* getItsI_FS();
        
        //## auto_generated
        virtual bool getState();
        
        //## auto_generated
        virtual void setState(bool argState);
        
        ////    Additional operations    ////
        
        //## auto_generated
        void setItsI_FS(I_FS* p_I_FS);
    
    protected :
    
        //## auto_generated
        void cleanUpRelations();
        
        ////    Attributes    ////
        
        int _p_;		//## attribute _p_
        
        ////    Relations and components    ////
        
        I_FS* itsI_FS;		//## link itsI_FS
    };
//#]

    ////    Friends    ////
    
#ifdef _OMINSTRUMENT
    friend class OMAnimatedFire_Sensor;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    Fire_Sensor();
    
    //## auto_generated
    virtual ~Fire_Sensor();
    
    //## operation getState()
    virtual bool getState();
    
    //## operation setState(bool)
    virtual void setState(bool argState);
    
    //## auto_generated
    pFS_C* getPFS() const;
    
    //## auto_generated
    pFS_C* get_pFS() const;

protected :

    //## auto_generated
    void initRelations();
    
    bool state;		//## attribute state
    
//#[ ignore
    pFS_C pFS;
//#]
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedFire_Sensor : public OMAnimatedI_FS {
    DECLARE_META(Fire_Sensor, OMAnimatedFire_Sensor)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeAttributes(AOMSAttributes* aomsAttributes) const;
    
    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Fire_Sensor.h
*********************************************************************/
