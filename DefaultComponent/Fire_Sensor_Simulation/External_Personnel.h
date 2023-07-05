/*********************************************************************
	Rhapsody	: 9.0 
	Login		: 20181759
	Component	: DefaultComponent 
	Configuration 	: Fire_Sensor_Simulation
	Model Element	: External_Personnel
//!	Generated Date	: Wed, 5, Jul 2023  
	File Path	: DefaultComponent\Fire_Sensor_Simulation\External_Personnel.h
*********************************************************************/

#ifndef External_Personnel_H
#define External_Personnel_H

//## auto_generated
#include <oxf\oxf.h>
//## auto_generated
#include <..\Profiles\SysML\SIDefinitions.h>
//## auto_generated
#include <aom\aom.h>
//## auto_generated
#include "ArchitecturalAnalysisPkg.h"
//## link itsNetwork
class Network;

//## package ArchitecturalAnalysisPkg

//## class External_Personnel
class External_Personnel {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedExternal_Personnel;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    External_Personnel();
    
    //## auto_generated
    ~External_Personnel();
    
    ////    Additional operations    ////
    
    //## auto_generated
    Network* getItsNetwork() const;
    
    //## auto_generated
    void setItsNetwork(Network* p_Network);

protected :

    //## auto_generated
    void cleanUpRelations();
    
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

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedExternal_Personnel : virtual public AOMInstance {
    DECLARE_META(External_Personnel, OMAnimatedExternal_Personnel)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\Fire_Sensor_Simulation\External_Personnel.h
*********************************************************************/
