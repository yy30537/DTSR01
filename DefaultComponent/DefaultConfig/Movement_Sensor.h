/*********************************************************************
	Rhapsody	: 9.0 
	Login		: Administrator
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Movement_Sensor
//!	Generated Date	: Sun, 16, Jul 2023  
	File Path	: DefaultComponent\DefaultConfig\Movement_Sensor.h
*********************************************************************/

#ifndef Movement_Sensor_H
#define Movement_Sensor_H

//## auto_generated
#include <oxf\oxf.h>
//## auto_generated
#include <..\Profiles\SysML\SIDefinitions.h>
//## auto_generated
#include <aom\aom.h>
//## auto_generated
#include "ArchitecturalAnalysisPkg.h"
//## class Movement_Sensor
#include "I_MS.h"
//## link itsNetwork
class Network;

//## package ArchitecturalAnalysisPkg

//## class Movement_Sensor
class Movement_Sensor : public I_MS {
public :

//#[ ignore
    //## package ArchitecturalAnalysisPkg
    class pMS_C : public I_MS {
        ////    Constructors and destructors    ////
        
    public :
    
        //## auto_generated
        pMS_C();
        
        //## auto_generated
        virtual ~pMS_C();
        
        ////    Operations    ////
        
        //## auto_generated
        void connectMovement_Sensor(Movement_Sensor* part);
        
        //## auto_generated
        I_MS* getItsI_MS();
        
        //## auto_generated
        virtual bool getMM();
        
        //## auto_generated
        virtual void setMM(bool arg);
        
        ////    Additional operations    ////
        
        //## auto_generated
        void setItsI_MS(I_MS* p_I_MS);
    
    protected :
    
        //## auto_generated
        void cleanUpRelations();
        
        ////    Attributes    ////
        
        int _p_;		//## attribute _p_
        
        ////    Relations and components    ////
        
        I_MS* itsI_MS;		//## link itsI_MS
    };
//#]

    ////    Friends    ////
    
#ifdef _OMINSTRUMENT
    friend class OMAnimatedMovement_Sensor;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    Movement_Sensor();
    
    //## auto_generated
    virtual ~Movement_Sensor();
    
    //## auto_generated
    Network* getItsNetwork() const;
    
    //## auto_generated
    void setItsNetwork(Network* p_Network);

protected :

    //## auto_generated
    void cleanUpRelations();
    
    Network* itsNetwork;		//## link itsNetwork

public :

    //## auto_generated
    void __setItsNetwork(Network* p_Network);
    
    //## auto_generated
    void _setItsNetwork(Network* p_Network);
    
    //## auto_generated
    void _clearItsNetwork();
    
    //## operation getMM()
    virtual bool getMM();
    
    //## operation setMM(bool)
    virtual void setMM(bool arg);
    
    //## auto_generated
    pMS_C* getPMS() const;
    
    //## auto_generated
    pMS_C* get_pMS() const;
    
    //## auto_generated
    bool getMovementDetected() const;
    
    //## auto_generated
    void setMovementDetected(bool p_movementDetected);

protected :

    //## auto_generated
    void initRelations();
    
    bool movementDetected;		//## attribute movementDetected
    
//#[ ignore
    pMS_C pMS;
//#]
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedMovement_Sensor : public OMAnimatedI_MS {
    DECLARE_META(Movement_Sensor, OMAnimatedMovement_Sensor)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeAttributes(AOMSAttributes* aomsAttributes) const;
    
    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Movement_Sensor.h
*********************************************************************/
