/********************************************************************
	Rhapsody	: 9.0 
	Login		: Yang
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Webcam
//!	Generated Date	: Tue, 20, Jun 2023  
	File Path	: DefaultComponent\DefaultConfig\Webcam.cpp
*********************************************************************/

//## auto_generated
#include "Webcam.h"
//## link itsNetwork
#include "Network.h"
//## package ArchitecturalAnalysisPkg

//## class Webcam
Webcam::Webcam() {
    itsNetwork = NULL;
}

Webcam::~Webcam() {
    cleanUpRelations();
}

Network* Webcam::getItsNetwork() const {
    return itsNetwork;
}

void Webcam::setItsNetwork(Network* p_Network) {
    if(p_Network != NULL)
        {
            p_Network->_setItsWebcam(this);
        }
    _setItsNetwork(p_Network);
}

void Webcam::cleanUpRelations() {
    if(itsNetwork != NULL)
        {
            Webcam* p_Webcam = itsNetwork->getItsWebcam();
            if(p_Webcam != NULL)
                {
                    itsNetwork->__setItsWebcam(NULL);
                }
            itsNetwork = NULL;
        }
}

void Webcam::__setItsNetwork(Network* p_Network) {
    itsNetwork = p_Network;
}

void Webcam::_setItsNetwork(Network* p_Network) {
    if(itsNetwork != NULL)
        {
            itsNetwork->__setItsWebcam(NULL);
        }
    __setItsNetwork(p_Network);
}

void Webcam::_clearItsNetwork() {
    itsNetwork = NULL;
}

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Webcam.cpp
*********************************************************************/
