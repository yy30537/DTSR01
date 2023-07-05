/*********************************************************************
	Rhapsody	: 9.0 
	Login		: 20181759
	Component	: DefaultComponent 
	Configuration 	: Lights_Simulation
	Model Element	: Weather_Forecast
//!	Generated Date	: Wed, 5, Jul 2023  
	File Path	: DefaultComponent\Lights_Simulation\Weather_Forecast.h
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
    
    ////    Additional operations    ////
    
    //## auto_generated
    int getOutdoorTemperature() const;
    
    //## auto_generated
    void setOutdoorTemperature(int p_outdoorTemperature);
    
    ////    Attributes    ////

protected :

    int outdoorTemperature;		//## attribute outdoorTemperature
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedWeather_Forecast : virtual public AOMInstance {
    DECLARE_META(Weather_Forecast, OMAnimatedWeather_Forecast)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeAttributes(AOMSAttributes* aomsAttributes) const;
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\Lights_Simulation\Weather_Forecast.h
*********************************************************************/
