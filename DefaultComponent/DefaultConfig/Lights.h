/*********************************************************************
	Rhapsody	: 9.0 
	Login		: Administrator
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Lights
//!	Generated Date	: Thu, 22, Jun 2023  
	File Path	: DefaultComponent\DefaultConfig\Lights.h
*********************************************************************/

#ifndef Lights_H
#define Lights_H

//## auto_generated
#include <oxf\oxf.h>
//## auto_generated
#include <..\Profiles\SysML\SIDefinitions.h>
//## link itsNetwork
class Network;

//## package ArchitecturalAnalysisPkg

//## class Lights
class Lights {
    ////    Constructors and destructors    ////
    
public :

    //## auto_generated
    Lights();
    
    //## auto_generated
    ~Lights();
    
    ////    Additional operations    ////
    
    //## auto_generated
    int getIntensity() const;
    
    //## auto_generated
    void setIntensity(int p_intensity);
    
    //## auto_generated
    Network* getItsNetwork() const;
    
    //## auto_generated
    void setItsNetwork(Network* p_Network);

protected :

    //## auto_generated
    void cleanUpRelations();
    
    ////    Attributes    ////
    
    int intensity;		//## attribute intensity
    
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
};

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Lights.h
*********************************************************************/
