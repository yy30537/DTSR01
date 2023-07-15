/********************************************************************
	Rhapsody	: 9.0 
	Login		: Yang
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: DefaultConfig
//!	Generated Date	: Sat, 15, Jul 2023  
	File Path	: DefaultComponent\DefaultConfig\MainDefaultComponent.cpp
*********************************************************************/

//## auto_generated
#include "MainDefaultComponent.h"
//## auto_generated
#include "ActorPkg.h"
//## auto_generated
#include "ArchitecturalAnalysisPkg.h"
//## auto_generated
#include "UseCaseAnalysisPkg.h"
//## auto_generated
#include "Booking_System.h"
//## auto_generated
#include "CO2_Sensor.h"
//## auto_generated
#include "Door_Touch_Panel.h"
//## auto_generated
#include "External_Personnel.h"
//## auto_generated
#include "Fire_Sensor.h"
//## auto_generated
#include "HVAC.h"
//## auto_generated
#include "I_BS.h"
//## auto_generated
#include "I_CO2.h"
//## auto_generated
#include "I_FS.h"
//## auto_generated
#include "I_HVAC.h"
//## auto_generated
#include "I_Light.h"
//## auto_generated
#include "I_Mic.h"
//## auto_generated
#include "I_OS.h"
//## auto_generated
#include "I_Spkr.h"
//## auto_generated
#include "I_SS.h"
//## auto_generated
#include "I_WC.h"
//## auto_generated
#include "I_Weather.h"
//## auto_generated
#include "Lights.h"
//## auto_generated
#include "Microphones.h"
//## auto_generated
#include "Movement_Sensor.h"
//## auto_generated
#include "Network.h"
//## auto_generated
#include "Occupancy_Sensor.h"
//## auto_generated
#include "Room_Touch_Panel.h"
//## auto_generated
#include "Smart_Room.h"
//## auto_generated
#include "Smart_Screen.h"
//## auto_generated
#include "Speakers.h"
//## auto_generated
#include "Weather_Forecast.h"
//## auto_generated
#include "Webcam.h"
DefaultComponent::DefaultComponent() {
    ArchitecturalAnalysisPkg_initRelations();
    ArchitecturalAnalysisPkg_startBehavior();
}

int main(int argc, char* argv[]) {
    int status = 0;
    if(OXF::initialize(argc, argv, 6423))
        {
            Booking_System * p_Booking_System;
            CO2_Sensor * p_CO2_Sensor;
            Door_Touch_Panel * p_Door_Touch_Panel;
            External_Personnel * p_External_Personnel;
            Fire_Sensor * p_Fire_Sensor;
            HVAC * p_HVAC;
            I_BS * p_I_BS;
            I_CO2 * p_I_CO2;
            I_FS * p_I_FS;
            I_HVAC * p_I_HVAC;
            I_Light * p_I_Light;
            I_Mic * p_I_Mic;
            I_OS * p_I_OS;
            I_Spkr * p_I_Spkr;
            I_SS * p_I_SS;
            I_WC * p_I_WC;
            I_Weather * p_I_Weather;
            Lights * p_Lights;
            Microphones * p_Microphones;
            Movement_Sensor * p_Movement_Sensor;
            Network * p_Network;
            Occupancy_Sensor * p_Occupancy_Sensor;
            Room_Touch_Panel * p_Room_Touch_Panel;
            Smart_Room * p_Smart_Room;
            Smart_Screen * p_Smart_Screen;
            Speakers * p_Speakers;
            Weather_Forecast * p_Weather_Forecast;
            Webcam * p_Webcam;
            DefaultComponent initializer_DefaultComponent;
            p_Booking_System = new Booking_System;
            p_CO2_Sensor = new CO2_Sensor;
            p_Door_Touch_Panel = new Door_Touch_Panel;
            p_External_Personnel = new External_Personnel;
            p_Fire_Sensor = new Fire_Sensor;
            p_HVAC = new HVAC;
            p_I_BS = new I_BS;
            p_I_CO2 = new I_CO2;
            p_I_FS = new I_FS;
            p_I_HVAC = new I_HVAC;
            p_I_Light = new I_Light;
            p_I_Mic = new I_Mic;
            p_I_OS = new I_OS;
            p_I_Spkr = new I_Spkr;
            p_I_SS = new I_SS;
            p_I_WC = new I_WC;
            p_I_Weather = new I_Weather;
            p_Lights = new Lights;
            p_Microphones = new Microphones;
            p_Movement_Sensor = new Movement_Sensor;
            p_Network = new Network;
            p_Network->startBehavior();
            p_Occupancy_Sensor = new Occupancy_Sensor;
            p_Room_Touch_Panel = new Room_Touch_Panel;
            p_Smart_Room = new Smart_Room;
            p_Smart_Room->startBehavior();
            p_Smart_Screen = new Smart_Screen;
            p_Speakers = new Speakers;
            p_Weather_Forecast = new Weather_Forecast;
            p_Webcam = new Webcam;
            //#[ configuration DefaultComponent::DefaultConfig 
            //#]
            OXF::start();
            delete p_Booking_System;
            delete p_CO2_Sensor;
            delete p_Door_Touch_Panel;
            delete p_External_Personnel;
            delete p_Fire_Sensor;
            delete p_HVAC;
            delete p_I_BS;
            delete p_I_CO2;
            delete p_I_FS;
            delete p_I_HVAC;
            delete p_I_Light;
            delete p_I_Mic;
            delete p_I_OS;
            delete p_I_Spkr;
            delete p_I_SS;
            delete p_I_WC;
            delete p_I_Weather;
            delete p_Lights;
            delete p_Microphones;
            delete p_Movement_Sensor;
            delete p_Network;
            delete p_Occupancy_Sensor;
            delete p_Room_Touch_Panel;
            delete p_Smart_Room;
            delete p_Smart_Screen;
            delete p_Speakers;
            delete p_Weather_Forecast;
            delete p_Webcam;
            status = 0;
        }
    else
        {
            status = 1;
        }
    return status;
}

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\MainDefaultComponent.cpp
*********************************************************************/
