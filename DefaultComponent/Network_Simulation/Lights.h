/*********************************************************************
	Rhapsody	: 9.0 
	Login		: Yang
	Component	: DefaultComponent 
	Configuration 	: Network_Simulation
	Model Element	: Lights
//!	Generated Date	: Sat, 15, Jul 2023  
	File Path	: DefaultComponent\Network_Simulation\Lights.h
*********************************************************************/

#ifndef Lights_H
#define Lights_H

//## auto_generated
#include <oxf\oxf.h>
//## auto_generated
#include <..\Profiles\SysML\SIDefinitions.h>
//## auto_generated
#include <aom\aom.h>
//## auto_generated
#include "ArchitecturalAnalysisPkg.h"
//## class Lights
#include "I_Light.h"
//## link itsNetwork
class Network;

//## package ArchitecturalAnalysisPkg

//## class Lights
class Lights : public I_Light {
public :

//#[ ignore
    //## package ArchitecturalAnalysisPkg
    class pLights_C : public I_Light {
        ////    Constructors and destructors    ////
        
    public :
    
        //## auto_generated
        pLights_C();
        
        //## auto_generated
        virtual ~pLights_C();
        
        ////    Operations    ////
        
        //## auto_generated
        void connectLights(Lights* part);
        
        //## auto_generated
        virtual int getItensity();
        
        //## auto_generated
        I_Light* getItsI_Light();
        
        //## auto_generated
        virtual void setIntensity(int arg_intensity);
        
        ////    Additional operations    ////
        
        //## auto_generated
        void setItsI_Light(I_Light* p_I_Light);
    
    protected :
    
        //## auto_generated
        void cleanUpRelations();
        
        ////    Attributes    ////
        
        int _p_;		//## attribute _p_
        
        ////    Relations and components    ////
        
        I_Light* itsI_Light;		//## link itsI_Light
    };
//#]

    ////    Friends    ////
    
#ifdef _OMINSTRUMENT
    friend class OMAnimatedLights;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    Lights();
    
    //## auto_generated
    virtual ~Lights();
    
    //## operation getItensity()
    virtual int getItensity();
    
    //## auto_generated
    pLights_C* getPLights() const;
    
    //## auto_generated
    pLights_C* get_pLights() const;
    
    //## auto_generated
    int getIntensity() const;
    
    //## auto_generated
    Network* getItsNetwork() const;
    
    //## auto_generated
    void setItsNetwork(Network* p_Network);

protected :

    //## auto_generated
    void initRelations();
    
    //## auto_generated
    void cleanUpRelations();
    
    int intensity;		//## attribute intensity
    
    Network* itsNetwork;		//## link itsNetwork

public :

    //## auto_generated
    void __setItsNetwork(Network* p_Network);
    
    //## auto_generated
    void _setItsNetwork(Network* p_Network);
    
    //## auto_generated
    void _clearItsNetwork();
    
    //## operation setIntensity(int)
    virtual void setIntensity(int arg_intensity);

protected :

//#[ ignore
    pLights_C pLights;
//#]
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedLights : public OMAnimatedI_Light {
    DECLARE_META(Lights, OMAnimatedLights)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeAttributes(AOMSAttributes* aomsAttributes) const;
    
    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\Network_Simulation\Lights.h
*********************************************************************/
