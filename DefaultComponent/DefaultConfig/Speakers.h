/*********************************************************************
	Rhapsody	: 9.0 
	Login		: Administrator
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Speakers
//!	Generated Date	: Thu, 22, Jun 2023  
	File Path	: DefaultComponent\DefaultConfig\Speakers.h
*********************************************************************/

#ifndef Speakers_H
#define Speakers_H

//## auto_generated
#include <oxf\oxf.h>
//## auto_generated
#include <..\Profiles\SysML\SIDefinitions.h>
//## link itsNetwork
class Network;

//## package ArchitecturalAnalysisPkg

//## class Speakers
class Speakers {
    ////    Constructors and destructors    ////
    
public :

    //## auto_generated
    Speakers();
    
    //## auto_generated
    ~Speakers();
    
    ////    Additional operations    ////
    
    //## auto_generated
    bool getIsOn() const;
    
    //## auto_generated
    void setIsOn(bool p_isOn);
    
    //## auto_generated
    int getVolume() const;
    
    //## auto_generated
    void setVolume(int p_volume);
    
    //## auto_generated
    Network* getItsNetwork() const;
    
    //## auto_generated
    void setItsNetwork(Network* p_Network);

protected :

    //## auto_generated
    void cleanUpRelations();
    
    ////    Attributes    ////
    
    bool isOn;		//## attribute isOn
    
    int volume;		//## attribute volume
    
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
	File Path	: DefaultComponent\DefaultConfig\Speakers.h
*********************************************************************/
