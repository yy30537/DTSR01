/*********************************************************************
	Rhapsody	: 9.0 
	Login		: Administrator
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Occupancy_Sensor
//!	Generated Date	: Sat, 15, Jul 2023  
	File Path	: DefaultComponent\DefaultConfig\Occupancy_Sensor.h
*********************************************************************/

#ifndef Occupancy_Sensor_H
#define Occupancy_Sensor_H

//## auto_generated
#include <oxf\oxf.h>
//## auto_generated
#include <..\Profiles\SysML\SIDefinitions.h>
//## auto_generated
#include <aom\aom.h>
//## auto_generated
#include "ArchitecturalAnalysisPkg.h"
//## class Occupancy_Sensor
#include "I_OS.h"
//## link itsNetwork
class Network;

//## package ArchitecturalAnalysisPkg

//## class Occupancy_Sensor
class Occupancy_Sensor : public I_OS {
public :

//#[ ignore
    //## package ArchitecturalAnalysisPkg
    class pOS_C : public I_OS {
        ////    Constructors and destructors    ////
        
    public :
    
        //## auto_generated
        pOS_C();
        
        //## auto_generated
        virtual ~pOS_C();
        
        ////    Operations    ////
        
        //## auto_generated
        void connectOccupancy_Sensor(Occupancy_Sensor* part);
        
        //## auto_generated
        I_OS* getItsI_OS();
        
        //## auto_generated
        virtual bool getOccupied();
        
        //## auto_generated
        virtual void setOccupied(bool arg_occupied);
        
        ////    Additional operations    ////
        
        //## auto_generated
        void setItsI_OS(I_OS* p_I_OS);
    
    protected :
    
        //## auto_generated
        void cleanUpRelations();
        
        ////    Attributes    ////
        
        int _p_;		//## attribute _p_
        
        ////    Relations and components    ////
        
        I_OS* itsI_OS;		//## link itsI_OS
    };
//#]

    ////    Friends    ////
    
#ifdef _OMINSTRUMENT
    friend class OMAnimatedOccupancy_Sensor;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    Occupancy_Sensor();
    
    //## auto_generated
    virtual ~Occupancy_Sensor();
    
    //## operation getOccupied()
    virtual bool getOccupied();
    
    //## operation setOccupied(bool)
    virtual void setOccupied(bool arg_occupied);
    
    //## auto_generated
    pOS_C* getPOS() const;
    
    //## auto_generated
    pOS_C* get_pOS() const;
    
    //## auto_generated
    Network* getItsNetwork() const;
    
    //## auto_generated
    void setItsNetwork(Network* p_Network);

protected :

    //## auto_generated
    void initRelations();
    
    //## auto_generated
    void cleanUpRelations();
    
    bool occupied;		//## attribute occupied
    
    Network* itsNetwork;		//## link itsNetwork

public :

    //## auto_generated
    void __setItsNetwork(Network* p_Network);
    
    //## auto_generated
    void _setItsNetwork(Network* p_Network);
    
    //## auto_generated
    void _clearItsNetwork();

protected :

//#[ ignore
    pOS_C pOS;
//#]
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedOccupancy_Sensor : public OMAnimatedI_OS {
    DECLARE_META(Occupancy_Sensor, OMAnimatedOccupancy_Sensor)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeAttributes(AOMSAttributes* aomsAttributes) const;
    
    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Occupancy_Sensor.h
*********************************************************************/
