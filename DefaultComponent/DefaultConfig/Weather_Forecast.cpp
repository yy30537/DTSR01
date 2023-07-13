/********************************************************************
	Rhapsody	: 9.0 
	Login		: Administrator
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Weather_Forecast
//!	Generated Date	: Thu, 13, Jul 2023  
	File Path	: DefaultComponent\DefaultConfig\Weather_Forecast.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "Weather_Forecast.h"
//#[ ignore
#define ArchitecturalAnalysisPkg_Weather_Forecast_Weather_Forecast_SERIALIZE OM_NO_OP
//#]

//## package ArchitecturalAnalysisPkg

//## class Weather_Forecast
Weather_Forecast::Weather_Forecast() {
    NOTIFY_CONSTRUCTOR(Weather_Forecast, Weather_Forecast(), 0, ArchitecturalAnalysisPkg_Weather_Forecast_Weather_Forecast_SERIALIZE);
}

Weather_Forecast::~Weather_Forecast() {
    NOTIFY_DESTRUCTOR(~Weather_Forecast, true);
}

#ifdef _OMINSTRUMENT
IMPLEMENT_META_P(Weather_Forecast, ArchitecturalAnalysisPkg, ArchitecturalAnalysisPkg, false, OMAnimatedWeather_Forecast)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Weather_Forecast.cpp
*********************************************************************/
