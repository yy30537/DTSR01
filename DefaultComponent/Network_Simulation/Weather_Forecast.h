/*********************************************************************
	Rhapsody	: 9.0 
	Login		: Administrator
	Component	: DefaultComponent 
	Configuration 	: Network_Simulation
	Model Element	: Weather_Forecast
//!	Generated Date	: Sun, 16, Jul 2023  
	File Path	: DefaultComponent\Network_Simulation\Weather_Forecast.h
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
//## class Weather_Forecast
#include "I_Weather.h"
//## link itsNetwork
class Network;

//## package ArchitecturalAnalysisPkg

//## class Weather_Forecast
class Weather_Forecast : public I_Weather {
public :

//#[ ignore
    //## package ArchitecturalAnalysisPkg
    class pWeatherForecast_C : public I_Weather {
        ////    Constructors and destructors    ////
        
    public :
    
        //## auto_generated
        pWeatherForecast_C();
        
        //## auto_generated
        virtual ~pWeatherForecast_C();
        
        ////    Operations    ////
        
        //## auto_generated
        void connectWeather_Forecast(Weather_Forecast* part);
        
        //## auto_generated
        I_Weather* getItsI_Weather();
        
        ////    Additional operations    ////
        
        //## auto_generated
        void setItsI_Weather(I_Weather* p_I_Weather);
    
    protected :
    
        //## auto_generated
        void cleanUpRelations();
        
        ////    Attributes    ////
        
        int _p_;		//## attribute _p_
        
        ////    Relations and components    ////
        
        I_Weather* itsI_Weather;		//## link itsI_Weather
    };
//#]

    ////    Friends    ////
    
#ifdef _OMINSTRUMENT
    friend class OMAnimatedWeather_Forecast;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    Weather_Forecast();
    
    //## auto_generated
    ~Weather_Forecast();
    
    //## auto_generated
    pWeatherForecast_C* getPWeatherForecast() const;
    
    //## auto_generated
    pWeatherForecast_C* get_pWeatherForecast() const;
    
    //## auto_generated
    Network* getItsNetwork() const;
    
    //## auto_generated
    void setItsNetwork(Network* p_Network);

protected :

    //## auto_generated
    void initRelations();
    
    //## auto_generated
    void cleanUpRelations();
    
    Network* itsNetwork;		//## link itsNetwork

public :

    //## auto_generated
    void __setItsNetwork(Network* p_Network);
    
    //## auto_generated
    void _setItsNetwork(Network* p_Network);
    
    //## auto_generated
    void _clearItsNetwork();

protected :

//#[ ignore
    pWeatherForecast_C pWeatherForecast;
//#]
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedWeather_Forecast : public OMAnimatedI_Weather {
    DECLARE_META(Weather_Forecast, OMAnimatedWeather_Forecast)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeAttributes(AOMSAttributes* aomsAttributes) const;
    
    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\Network_Simulation\Weather_Forecast.h
*********************************************************************/
