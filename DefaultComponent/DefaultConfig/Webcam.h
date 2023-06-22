/*********************************************************************
	Rhapsody	: 9.0 
	Login		: Administrator
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Webcam
//!	Generated Date	: Thu, 22, Jun 2023  
	File Path	: DefaultComponent\DefaultConfig\Webcam.h
*********************************************************************/

#ifndef Webcam_H
#define Webcam_H

//## auto_generated
#include <oxf\oxf.h>
//## auto_generated
#include <..\Profiles\SysML\SIDefinitions.h>
//## link itsNetwork
class Network;

//## package ArchitecturalAnalysisPkg

//## class Webcam
class Webcam {
    ////    Constructors and destructors    ////
    
public :

    //## auto_generated
    Webcam();
    
    //## auto_generated
    ~Webcam();
    
    ////    Additional operations    ////
    
    //## auto_generated
    bool getIsOn() const;
    
    //## auto_generated
    void setIsOn(bool p_isOn);
    
    //## auto_generated
    Network* getItsNetwork() const;
    
    //## auto_generated
    void setItsNetwork(Network* p_Network);

protected :

    //## auto_generated
    void cleanUpRelations();
    
    ////    Attributes    ////
    
    bool isOn;		//## attribute isOn
    
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
	File Path	: DefaultComponent\DefaultConfig\Webcam.h
*********************************************************************/
