/********************************************************************
	Rhapsody	: 9.0 
	Login		: Yang
	Component	: DefaultComponent 
	Configuration 	: Network_Simulation
	Model Element	: Weather_Forecast
//!	Generated Date	: Sat, 15, Jul 2023  
	File Path	: DefaultComponent\Network_Simulation\Weather_Forecast.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "Weather_Forecast.h"
//## link itsNetwork
#include "Network.h"
//#[ ignore
#define ArchitecturalAnalysisPkg_Weather_Forecast_Weather_Forecast_SERIALIZE OM_NO_OP

#define ArchitecturalAnalysisPkg_Weather_Forecast_getCold_SERIALIZE OM_NO_OP

#define ArchitecturalAnalysisPkg_Weather_Forecast_getHot_SERIALIZE OM_NO_OP

#define ArchitecturalAnalysisPkg_Weather_Forecast_setCold_SERIALIZE aomsmethod->addAttribute("arg_cold", x2String(arg_cold));

#define ArchitecturalAnalysisPkg_Weather_Forecast_setHot_SERIALIZE aomsmethod->addAttribute("arg_hot", x2String(arg_hot));
//#]

//## package ArchitecturalAnalysisPkg

//## class Weather_Forecast
//#[ ignore
Weather_Forecast::pWeatherForecast_C::pWeatherForecast_C() : _p_(0) {
    itsI_Weather = NULL;
}

Weather_Forecast::pWeatherForecast_C::~pWeatherForecast_C() {
    cleanUpRelations();
}

void Weather_Forecast::pWeatherForecast_C::connectWeather_Forecast(Weather_Forecast* part) {
    setItsI_Weather(part);
    
}

bool Weather_Forecast::pWeatherForecast_C::getCold() {
    bool res = false;
    if (itsI_Weather != NULL) {
        res = itsI_Weather->getCold();
    }
    return res;
}

bool Weather_Forecast::pWeatherForecast_C::getHot() {
    bool res = false;
    if (itsI_Weather != NULL) {
        res = itsI_Weather->getHot();
    }
    return res;
}

I_Weather* Weather_Forecast::pWeatherForecast_C::getItsI_Weather() {
    return this;
}

void Weather_Forecast::pWeatherForecast_C::setCold(bool arg_cold) {
    
    if (itsI_Weather != NULL) {
        itsI_Weather->setCold(arg_cold);
    }
    
}

void Weather_Forecast::pWeatherForecast_C::setHot(bool arg_hot) {
    
    if (itsI_Weather != NULL) {
        itsI_Weather->setHot(arg_hot);
    }
    
}

void Weather_Forecast::pWeatherForecast_C::setItsI_Weather(I_Weather* p_I_Weather) {
    itsI_Weather = p_I_Weather;
}

void Weather_Forecast::pWeatherForecast_C::cleanUpRelations() {
    if(itsI_Weather != NULL)
        {
            itsI_Weather = NULL;
        }
}
//#]

Weather_Forecast::Weather_Forecast() : ColdOutside(false), HotOutside(false) {
    NOTIFY_CONSTRUCTOR(Weather_Forecast, Weather_Forecast(), 0, ArchitecturalAnalysisPkg_Weather_Forecast_Weather_Forecast_SERIALIZE);
    itsNetwork = NULL;
    initRelations();
}

Weather_Forecast::~Weather_Forecast() {
    NOTIFY_DESTRUCTOR(~Weather_Forecast, false);
    cleanUpRelations();
}

bool Weather_Forecast::getCold() {
    NOTIFY_OPERATION(getCold, getCold(), 0, ArchitecturalAnalysisPkg_Weather_Forecast_getCold_SERIALIZE);
    //#[ operation getCold()
    std::cout<<"I_Weather: get Cold";
    return ColdOutside;
    //#]
}

bool Weather_Forecast::getHot() {
    NOTIFY_OPERATION(getHot, getHot(), 0, ArchitecturalAnalysisPkg_Weather_Forecast_getHot_SERIALIZE);
    //#[ operation getHot()
    std::cout<<"I_Weather: get Hot";
    return HotOutside;
    //#]
}

void Weather_Forecast::setCold(bool arg_cold) {
    NOTIFY_OPERATION(setCold, setCold(bool), 1, ArchitecturalAnalysisPkg_Weather_Forecast_setCold_SERIALIZE);
    //#[ operation setCold(bool)
    std::cout<<"I_Weather: set Cold";
    ColdOutside=arg_cold;
    //#]
}

void Weather_Forecast::setHot(bool arg_hot) {
    NOTIFY_OPERATION(setHot, setHot(bool), 1, ArchitecturalAnalysisPkg_Weather_Forecast_setHot_SERIALIZE);
    //#[ operation setHot(bool)
    std::cout<<"I_Weather: set Hot";
    HotOutside=arg_hot;
    //#]
}

Weather_Forecast::pWeatherForecast_C* Weather_Forecast::getPWeatherForecast() const {
    return (Weather_Forecast::pWeatherForecast_C*) &pWeatherForecast;
}

Weather_Forecast::pWeatherForecast_C* Weather_Forecast::get_pWeatherForecast() const {
    return (Weather_Forecast::pWeatherForecast_C*) &pWeatherForecast;
}

bool Weather_Forecast::getColdOutside() const {
    return ColdOutside;
}

void Weather_Forecast::setColdOutside(bool p_ColdOutside) {
    ColdOutside = p_ColdOutside;
    NOTIFY_SET_OPERATION;
}

bool Weather_Forecast::getHotOutside() const {
    return HotOutside;
}

void Weather_Forecast::setHotOutside(bool p_HotOutside) {
    HotOutside = p_HotOutside;
    NOTIFY_SET_OPERATION;
}

Network* Weather_Forecast::getItsNetwork() const {
    return itsNetwork;
}

void Weather_Forecast::setItsNetwork(Network* p_Network) {
    if(p_Network != NULL)
        {
            p_Network->_setItsWeather_Forecast(this);
        }
    _setItsNetwork(p_Network);
}

void Weather_Forecast::initRelations() {
    if (get_pWeatherForecast() != NULL) {
        get_pWeatherForecast()->connectWeather_Forecast(this);
    }
}

void Weather_Forecast::cleanUpRelations() {
    if(itsNetwork != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsNetwork");
            Weather_Forecast* p_Weather_Forecast = itsNetwork->getItsWeather_Forecast();
            if(p_Weather_Forecast != NULL)
                {
                    itsNetwork->__setItsWeather_Forecast(NULL);
                }
            itsNetwork = NULL;
        }
}

void Weather_Forecast::__setItsNetwork(Network* p_Network) {
    itsNetwork = p_Network;
    if(p_Network != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsNetwork", p_Network, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsNetwork");
        }
}

void Weather_Forecast::_setItsNetwork(Network* p_Network) {
    if(itsNetwork != NULL)
        {
            itsNetwork->__setItsWeather_Forecast(NULL);
        }
    __setItsNetwork(p_Network);
}

void Weather_Forecast::_clearItsNetwork() {
    NOTIFY_RELATION_CLEARED("itsNetwork");
    itsNetwork = NULL;
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedWeather_Forecast::serializeAttributes(AOMSAttributes* aomsAttributes) const {
    aomsAttributes->addAttribute("HotOutside", x2String(myReal->HotOutside));
    aomsAttributes->addAttribute("ColdOutside", x2String(myReal->ColdOutside));
    OMAnimatedI_Weather::serializeAttributes(aomsAttributes);
}

void OMAnimatedWeather_Forecast::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsNetwork", false, true);
    if(myReal->itsNetwork)
        {
            aomsRelations->ADD_ITEM(myReal->itsNetwork);
        }
    OMAnimatedI_Weather::serializeRelations(aomsRelations);
}
//#]

IMPLEMENT_META_S_P(Weather_Forecast, ArchitecturalAnalysisPkg, false, I_Weather, OMAnimatedI_Weather, OMAnimatedWeather_Forecast)

OMINIT_SUPERCLASS(I_Weather, OMAnimatedI_Weather)

OMREGISTER_CLASS
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\Network_Simulation\Weather_Forecast.cpp
*********************************************************************/
