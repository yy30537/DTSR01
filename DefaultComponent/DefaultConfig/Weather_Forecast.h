/*********************************************************************
	Rhapsody	: 9.0 
	Login		: Administrator
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Weather_Forecast
//!	Generated Date	: Thu, 13, Jul 2023  
	File Path	: DefaultComponent\DefaultConfig\Weather_Forecast.h
*********************************************************************/

#ifndef Weather_Forecast_H
#define Weather_Forecast_H

//## auto_generated
#include <oxf\oxf.h>
//## auto_generated
#include <..\Profiles\SysML\SIDefinitions.h>
//## auto_generated
#include <aom\aom.h>
//## auto_generated
#include "ArchitecturalAnalysisPkg.h"
//## package ArchitecturalAnalysisPkg

//## class Weather_Forecast
class Weather_Forecast {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedWeather_Forecast;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    Weather_Forecast();
    
    //## auto_generated
    ~Weather_Forecast();
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedWeather_Forecast : virtual public AOMInstance {
    DECLARE_META(Weather_Forecast, OMAnimatedWeather_Forecast)
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Weather_Forecast.h
*********************************************************************/
