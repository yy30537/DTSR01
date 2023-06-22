/*********************************************************************
	Rhapsody	: 9.0 
	Login		: Administrator
	Component	: DefaultComponent 
	Configuration 	: Network_Simulation
	Model Element	: Smart_Room
//!	Generated Date	: Thu, 22, Jun 2023  
	File Path	: DefaultComponent\Network_Simulation\Smart_Room.h
*********************************************************************/

#ifndef Smart_Room_H
#define Smart_Room_H

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

//## class Smart_Room
class Smart_Room {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedSmart_Room;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    Smart_Room();
    
    //## auto_generated
    ~Smart_Room();
    
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
class OMAnimatedSmart_Room : virtual public AOMInstance {
    DECLARE_META(Smart_Room, OMAnimatedSmart_Room)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\Network_Simulation\Smart_Room.h
*********************************************************************/
