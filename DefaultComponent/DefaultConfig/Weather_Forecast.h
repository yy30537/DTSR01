/*********************************************************************
	Rhapsody	: 9.0 
	Login		: Administrator
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Weather_Forecast
//!	Generated Date	: Thu, 22, Jun 2023  
	File Path	: DefaultComponent\DefaultConfig\Weather_Forecast.h
*********************************************************************/

#ifndef Weather_Forecast_H
#define Weather_Forecast_H

//## auto_generated
#include <oxf\oxf.h>
//## auto_generated
#include <..\Profiles\SysML\SIDefinitions.h>
//## package ArchitecturalAnalysisPkg

//## class Weather_Forecast
class Weather_Forecast {
    ////    Constructors and destructors    ////
    
public :

    //## auto_generated
    Weather_Forecast();
    
    //## auto_generated
    ~Weather_Forecast();
    
    ////    Additional operations    ////
    
    //## auto_generated
    int getOutdoorTemperature() const;
    
    //## auto_generated
    void setOutdoorTemperature(int p_outdoorTemperature);
    
    ////    Attributes    ////

protected :

    int outdoorTemperature;		//## attribute outdoorTemperature
};

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Weather_Forecast.h
*********************************************************************/
