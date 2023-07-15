
############# Target type (Debug/Release) ##################
############################################################
CPPCompileDebug= /Zi /Od /D "_DEBUG" $(LIBCRT_FLAG)d  /Fd"$(TARGET_NAME)" 
CPPCompileRelease= /Ox /D"NDEBUG" $(LIBCRT_FLAG) /Fd"$(TARGET_NAME)" 
LinkDebug=
LinkRelease=
BuildSet=Debug
SUBSYSTEM=/SUBSYSTEM:console
RPFrameWorkDll=False
DEF_EXT=.def
DLL_EXT=.dll
ConfigurationCPPCompileSwitches=   /I . /I . /I $(OMROOT)\LangCpp /I $(OMROOT)\LangCpp\oxf /nologo /W3 $(ENABLE_EH) $(CRT_FLAGS) $(CPPCompileDebug) /D "_AFXDLL" /D "WIN32" /D "_CONSOLE" /D "_MBCS" /D "_WINDOWS" $(INST_FLAGS) $(INCLUDE_PATH) $(INST_INCLUDES) /c 

!IF "$(RPFrameWorkDll)" == "True"
ConfigurationCPPCompileSwitches=$(ConfigurationCPPCompileSwitches) /D "FRAMEWORK_DLL"
!ENDIF

################### Compilation flags ######################
############################################################
INCLUDE_QUALIFIER=/I
LIB_PREFIX=MSVC15x86$(MT_PREFIX)

!IF "False" == "True"
MT_PREFIX=MT
LIBCRT_FLAG=/MT
!ELSE
MT_PREFIX=
LIBCRT_FLAG=/MD
!ENDIF

CRT_FLAGS=/D "_CRT_SECURE_NO_DEPRECATE" /D "_CRT_SECURE_NO_WARNINGS"
ENABLE_EH=/EHa

WINMM_LIB=winmm.lib

################### Commands definition #########################
#################################################################
RMDIR = rmdir
DLL_CMD=link.exe -dll
LINK_CMD=link.exe
DLL_FLAGS=$(LinkDebug) /NOLOGO   
LINK_FLAGS=$(LinkDebug) /NOLOGO    $(SUBSYSTEM) /MACHINE:x86 

############### Generated macros #################
##################################################

FLAGSFILE=
RULESFILE=
OMROOT="C:\Program Files (x86)\IBM\Rhapsody\9.0\Share"
RHPROOT="C:\Program Files (x86)\IBM\Rhapsody\9.0"
FRAMEWORK_LIB_ROOT="C:\ProgramData\IBM\Rhapsody\9.0\UserShare"

CPP_EXT=.cpp
H_EXT=.h
OBJ_EXT=.obj
EXE_EXT=.exe
LIB_EXT=.dll

INSTRUMENTATION=Animation

TIME_MODEL=RealTime

TARGET_TYPE=Executable

TARGET_NAME=DefaultComponent

all : $(TARGET_NAME)$(EXE_EXT) DefaultComponent.mak

TARGET_MAIN=MainDefaultComponent

LIBS=

INCLUDE_PATH= \
  $(INCLUDE_QUALIFIER)$(OMROOT)/LangCpp/osconfig/WIN32

ADDITIONAL_OBJS=

OBJS= \
  Smart_Room.obj \
  Booking_System.obj \
  CO2_Sensor.obj \
  Door_Touch_Panel.obj \
  External_Personnel.obj \
  Fire_Sensor.obj \
  HVAC.obj \
  Lights.obj \
  Microphones.obj \
  Movement_Sensor.obj \
  Occupancy_Sensor.obj \
  Room_Touch_Panel.obj \
  Smart_Screen.obj \
  Speakers.obj \
  Weather_Forecast.obj \
  Webcam.obj \
  Network.obj \
  I_HVAC.obj \
  I_CO2.obj \
  I_Weather.obj \
  I_Light.obj \
  I_OS.obj \
  I_FS.obj \
  I_Mic.obj \
  I_SS.obj \
  I_Spkr.obj \
  I_WC.obj \
  I_BS.obj \
  I_MS.obj \
  User.obj \
  ExternalPersonnel.obj \
  UseCaseAnalysisPkg.obj \
  ArchitecturalAnalysisPkg.obj \
  ActorPkg.obj




OBJ_DIR=

!IF "$(OBJ_DIR)"!=""
CREATE_OBJ_DIR=if not exist $(OBJ_DIR) mkdir $(OBJ_DIR)
CLEAN_OBJ_DIR= if exist $(OBJ_DIR) $(RMDIR) $(OBJ_DIR)
!ELSE
CREATE_OBJ_DIR=
CLEAN_OBJ_DIR=
!ENDIF
######################## Predefined macros ############################
#######################################################################
!IF "$(OBJS)" != ""
$(OBJS) : $(FLAGSFILE) $(RULESFILE) $(INST_LIBS) $(OXF_LIBS)
!ENDIF

LIB_EXT=.lib


LIB_POSTFIX=
!IF "$(BuildSet)"=="Release"
LIB_POSTFIX=R
!ENDIF

!IF "$(TARGET_TYPE)" == "Executable"
LinkDebug=$(LinkDebug) /DEBUG
LinkRelease=$(LinkRelease) /OPT:NOREF
!ELSEIF "$(TARGET_TYPE)" == "Library"
LinkDebug=$(LinkDebug) /DEBUG
LinkRelease=$(LinkRelease) /OPT:NOREF
!ENDIF

!IF "$(TIME_MODEL)" == "Simulated"
TIM_EXT=
!ELSEIF "$(TIME_MODEL)" == "RealTime"
TIM_EXT=
!ELSE
!ERROR An invalid Time Model "$(TIME_MODEL)" is specified.
!ENDIF

!IF "$(INSTRUMENTATION)" == "Animation"
INST_FLAGS=/D "OMANIMATOR"
INST_INCLUDES=/I $(OMROOT)\LangCpp\aom /I $(OMROOT)\LangCpp\tom
!IF "$(RPFrameWorkDll)" == "True"
INST_LIBS= 
OXF_LIBS=$(FRAMEWORK_LIB_ROOT)\LangCpp\lib\$(LIB_PREFIX)oxfanimdll$(LIB_POSTFIX)$(LIB_EXT) 
!ELSE
INST_LIBS= $(FRAMEWORK_LIB_ROOT)\LangCpp\lib\$(LIB_PREFIX)aomanim$(LIB_POSTFIX)$(LIB_EXT)
OXF_LIBS=$(FRAMEWORK_LIB_ROOT)\LangCpp\lib\$(LIB_PREFIX)oxf$(TIM_EXT)inst$(LIB_POSTFIX)$(LIB_EXT) $(FRAMEWORK_LIB_ROOT)\LangCpp\lib\$(LIB_PREFIX)omComAppl$(LIB_POSTFIX)$(LIB_EXT)
!ENDIF
SOCK_LIB=wsock32.lib

!ELSEIF "$(INSTRUMENTATION)" == "Tracing"
INST_FLAGS=/D "OMTRACER"
INST_INCLUDES=/I $(OMROOT)\LangCpp\aom /I $(OMROOT)\LangCpp\tom
!IF "$(RPFrameWorkDll)" == "True"
INST_LIBS=
OXF_LIBS= $(FRAMEWORK_LIB_ROOT)\LangCpp\lib\$(LIB_PREFIX)oxftracedll$(LIB_POSTFIX)$(LIB_EXT) 
!ELSE
INST_LIBS=$(FRAMEWORK_LIB_ROOT)\LangCpp\lib\$(LIB_PREFIX)tomtrace$(LIB_POSTFIX)$(LIB_EXT) $(FRAMEWORK_LIB_ROOT)\LangCpp\lib\$(LIB_PREFIX)aomtrace$(LIB_POSTFIX)$(LIB_EXT)
OXF_LIBS= $(FRAMEWORK_LIB_ROOT)\LangCpp\lib\$(LIB_PREFIX)oxf$(TIM_EXT)inst$(LIB_POSTFIX)$(LIB_EXT) $(FRAMEWORK_LIB_ROOT)\LangCpp\lib\$(LIB_PREFIX)omComAppl$(LIB_POSTFIX)$(LIB_EXT)
!ENDIF
SOCK_LIB=wsock32.lib

!ELSEIF "$(INSTRUMENTATION)" == "None" 
INST_FLAGS=
INST_INCLUDES=
INST_LIBS=
!IF "$(RPFrameWorkDll)" == "True"
OXF_LIBS=$(FRAMEWORK_LIB_ROOT)\LangCpp\lib\$(LIB_PREFIX)oxfdll$(LIB_POSTFIX)$(LIB_EXT)
!ELSE
OXF_LIBS=$(FRAMEWORK_LIB_ROOT)\LangCpp\lib\$(LIB_PREFIX)oxf$(TIM_EXT)$(LIB_POSTFIX)$(LIB_EXT)
!ENDIF
SOCK_LIB=

!ELSE
!ERROR An invalid Instrumentation $(INSTRUMENTATION) is specified.
!ENDIF

################## Generated dependencies ########################
##################################################################






Smart_Room.obj : Smart_Room.cpp Smart_Room.h    ArchitecturalAnalysisPkg.h Network.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"Smart_Room.obj" "Smart_Room.cpp" 



Booking_System.obj : Booking_System.cpp Booking_System.h    ArchitecturalAnalysisPkg.h I_BS.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"Booking_System.obj" "Booking_System.cpp" 



CO2_Sensor.obj : CO2_Sensor.cpp CO2_Sensor.h    ArchitecturalAnalysisPkg.h Network.h I_CO2.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"CO2_Sensor.obj" "CO2_Sensor.cpp" 



Door_Touch_Panel.obj : Door_Touch_Panel.cpp Door_Touch_Panel.h    ArchitecturalAnalysisPkg.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"Door_Touch_Panel.obj" "Door_Touch_Panel.cpp" 



External_Personnel.obj : External_Personnel.cpp External_Personnel.h    ArchitecturalAnalysisPkg.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"External_Personnel.obj" "External_Personnel.cpp" 



Fire_Sensor.obj : Fire_Sensor.cpp Fire_Sensor.h    ArchitecturalAnalysisPkg.h I_FS.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"Fire_Sensor.obj" "Fire_Sensor.cpp" 



HVAC.obj : HVAC.cpp HVAC.h    ArchitecturalAnalysisPkg.h Network.h I_HVAC.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"HVAC.obj" "HVAC.cpp" 



Lights.obj : Lights.cpp Lights.h    ArchitecturalAnalysisPkg.h Network.h I_Light.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"Lights.obj" "Lights.cpp" 



Microphones.obj : Microphones.cpp Microphones.h    ArchitecturalAnalysisPkg.h I_Mic.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"Microphones.obj" "Microphones.cpp" 



Movement_Sensor.obj : Movement_Sensor.cpp Movement_Sensor.h    ArchitecturalAnalysisPkg.h Network.h I_MS.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"Movement_Sensor.obj" "Movement_Sensor.cpp" 



Occupancy_Sensor.obj : Occupancy_Sensor.cpp Occupancy_Sensor.h    ArchitecturalAnalysisPkg.h Network.h I_OS.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"Occupancy_Sensor.obj" "Occupancy_Sensor.cpp" 



Room_Touch_Panel.obj : Room_Touch_Panel.cpp Room_Touch_Panel.h    ArchitecturalAnalysisPkg.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"Room_Touch_Panel.obj" "Room_Touch_Panel.cpp" 



Smart_Screen.obj : Smart_Screen.cpp Smart_Screen.h    ArchitecturalAnalysisPkg.h I_SS.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"Smart_Screen.obj" "Smart_Screen.cpp" 



Speakers.obj : Speakers.cpp Speakers.h    ArchitecturalAnalysisPkg.h I_Spkr.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"Speakers.obj" "Speakers.cpp" 



Weather_Forecast.obj : Weather_Forecast.cpp Weather_Forecast.h    ArchitecturalAnalysisPkg.h Network.h I_Weather.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"Weather_Forecast.obj" "Weather_Forecast.cpp" 



Webcam.obj : Webcam.cpp Webcam.h    ArchitecturalAnalysisPkg.h I_WC.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"Webcam.obj" "Webcam.cpp" 



Network.obj : Network.cpp Network.h    ArchitecturalAnalysisPkg.h HVAC.h CO2_Sensor.h Weather_Forecast.h Movement_Sensor.h Lights.h Occupancy_Sensor.h I_HVAC.h I_CO2.h I_Weather.h I_Light.h I_OS.h I_FS.h I_Mic.h I_SS.h I_Spkr.h I_WC.h I_BS.h I_MS.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"Network.obj" "Network.cpp" 



I_HVAC.obj : I_HVAC.cpp I_HVAC.h    ArchitecturalAnalysisPkg.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"I_HVAC.obj" "I_HVAC.cpp" 



I_CO2.obj : I_CO2.cpp I_CO2.h    ArchitecturalAnalysisPkg.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"I_CO2.obj" "I_CO2.cpp" 



I_Weather.obj : I_Weather.cpp I_Weather.h    ArchitecturalAnalysisPkg.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"I_Weather.obj" "I_Weather.cpp" 



I_Light.obj : I_Light.cpp I_Light.h    ArchitecturalAnalysisPkg.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"I_Light.obj" "I_Light.cpp" 



I_OS.obj : I_OS.cpp I_OS.h    ArchitecturalAnalysisPkg.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"I_OS.obj" "I_OS.cpp" 



I_FS.obj : I_FS.cpp I_FS.h    ArchitecturalAnalysisPkg.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"I_FS.obj" "I_FS.cpp" 



I_Mic.obj : I_Mic.cpp I_Mic.h    ArchitecturalAnalysisPkg.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"I_Mic.obj" "I_Mic.cpp" 



I_SS.obj : I_SS.cpp I_SS.h    ArchitecturalAnalysisPkg.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"I_SS.obj" "I_SS.cpp" 



I_Spkr.obj : I_Spkr.cpp I_Spkr.h    ArchitecturalAnalysisPkg.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"I_Spkr.obj" "I_Spkr.cpp" 



I_WC.obj : I_WC.cpp I_WC.h    ArchitecturalAnalysisPkg.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"I_WC.obj" "I_WC.cpp" 



I_BS.obj : I_BS.cpp I_BS.h    ArchitecturalAnalysisPkg.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"I_BS.obj" "I_BS.cpp" 



I_MS.obj : I_MS.cpp I_MS.h    ArchitecturalAnalysisPkg.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"I_MS.obj" "I_MS.cpp" 



User.obj : User.cpp User.h    ActorPkg.h Smart_Room.h Door_Touch_Panel.h Room_Touch_Panel.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"User.obj" "User.cpp" 



ExternalPersonnel.obj : ExternalPersonnel.cpp ExternalPersonnel.h    ActorPkg.h Smart_Room.h Door_Touch_Panel.h Room_Touch_Panel.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"ExternalPersonnel.obj" "ExternalPersonnel.cpp" 



UseCaseAnalysisPkg.obj : UseCaseAnalysisPkg.cpp UseCaseAnalysisPkg.h    
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"UseCaseAnalysisPkg.obj" "UseCaseAnalysisPkg.cpp" 



ArchitecturalAnalysisPkg.obj : ArchitecturalAnalysisPkg.cpp ArchitecturalAnalysisPkg.h    Smart_Room.h Booking_System.h CO2_Sensor.h Door_Touch_Panel.h External_Personnel.h Fire_Sensor.h HVAC.h Lights.h Microphones.h Movement_Sensor.h Occupancy_Sensor.h Room_Touch_Panel.h Smart_Screen.h Speakers.h Weather_Forecast.h Webcam.h Network.h I_HVAC.h I_CO2.h I_Weather.h I_Light.h I_OS.h I_FS.h I_Mic.h I_SS.h I_Spkr.h I_WC.h I_BS.h I_MS.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"ArchitecturalAnalysisPkg.obj" "ArchitecturalAnalysisPkg.cpp" 



ActorPkg.obj : ActorPkg.cpp ActorPkg.h    
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"ActorPkg.obj" "ActorPkg.cpp" 






!IF "$(TARGET_MAIN)" != ""
CLEAN_MAIN_OBJ=if exist $(TARGET_MAIN)$(OBJ_EXT) erase $(TARGET_MAIN)$(OBJ_EXT)
$(TARGET_MAIN)$(OBJ_EXT) : $(TARGET_MAIN)$(CPP_EXT) $(OBJS) $(FLAGSFILE) $(RULESFILE)
	$(CPP) $(ConfigurationCPPCompileSwitches) /Fo"$(TARGET_MAIN)$(OBJ_EXT)" $(TARGET_MAIN)$(CPP_EXT)
!ELSE
CLEAN_MAIN_OBJ=
!ENDIF

########################## Linking instructions ###############################
###############################################################################
!IF "$(TARGET_NAME)" != ""
$(TARGET_NAME)$(EXE_EXT): $(OBJS) $(ADDITIONAL_OBJS) $(TARGET_MAIN)$(OBJ_EXT) DefaultComponent.mak 
	@echo Linking $(TARGET_NAME)$(EXE_EXT)
	$(LINK_CMD)  $(TARGET_MAIN)$(OBJ_EXT) $(OBJS) $(ADDITIONAL_OBJS) \
	$(LIBS) \
	$(INST_LIBS) \
	$(OXF_LIBS) \
	$(SOCK_LIB) \
	$(WINMM_LIB) \
	$(LINK_FLAGS) /out:$(TARGET_NAME)$(EXE_EXT)
	if exist $(TARGET_NAME)$(EXE_EXT).manifest mt.exe -manifest $(TARGET_NAME)$(EXE_EXT).manifest -outputresource:$(TARGET_NAME)$(EXE_EXT);1

$(TARGET_NAME)$(DLL_EXT) : $(OBJS) $(ADDITIONAL_OBJS) DefaultComponent.mak
	@echo Building library $@
	$(DLL_CMD) $(DLL_FLAGS) $(OBJS) $(ADDITIONAL_OBJS) \
	$(LIBS) \
	$(INST_LIBS) \
	$(OXF_LIBS) \
	$(SOCK_LIB) \
	$(WINMM_LIB) \
	/out:$(TARGET_NAME)$(DLL_EXT)
	if exist $(TARGET_NAME)$(DLL_EXT).manifest mt.exe -manifest $(TARGET_NAME)$(DLL_EXT).manifest -outputresource:$(TARGET_NAME)$(DLL_EXT);2
 
!ENDIF

clean:
	@echo Cleanup
	if exist Smart_Room.obj erase Smart_Room.obj
	if exist Booking_System.obj erase Booking_System.obj
	if exist CO2_Sensor.obj erase CO2_Sensor.obj
	if exist Door_Touch_Panel.obj erase Door_Touch_Panel.obj
	if exist External_Personnel.obj erase External_Personnel.obj
	if exist Fire_Sensor.obj erase Fire_Sensor.obj
	if exist HVAC.obj erase HVAC.obj
	if exist Lights.obj erase Lights.obj
	if exist Microphones.obj erase Microphones.obj
	if exist Movement_Sensor.obj erase Movement_Sensor.obj
	if exist Occupancy_Sensor.obj erase Occupancy_Sensor.obj
	if exist Room_Touch_Panel.obj erase Room_Touch_Panel.obj
	if exist Smart_Screen.obj erase Smart_Screen.obj
	if exist Speakers.obj erase Speakers.obj
	if exist Weather_Forecast.obj erase Weather_Forecast.obj
	if exist Webcam.obj erase Webcam.obj
	if exist Network.obj erase Network.obj
	if exist I_HVAC.obj erase I_HVAC.obj
	if exist I_CO2.obj erase I_CO2.obj
	if exist I_Weather.obj erase I_Weather.obj
	if exist I_Light.obj erase I_Light.obj
	if exist I_OS.obj erase I_OS.obj
	if exist I_FS.obj erase I_FS.obj
	if exist I_Mic.obj erase I_Mic.obj
	if exist I_SS.obj erase I_SS.obj
	if exist I_Spkr.obj erase I_Spkr.obj
	if exist I_WC.obj erase I_WC.obj
	if exist I_BS.obj erase I_BS.obj
	if exist I_MS.obj erase I_MS.obj
	if exist User.obj erase User.obj
	if exist ExternalPersonnel.obj erase ExternalPersonnel.obj
	if exist UseCaseAnalysisPkg.obj erase UseCaseAnalysisPkg.obj
	if exist ArchitecturalAnalysisPkg.obj erase ArchitecturalAnalysisPkg.obj
	if exist ActorPkg.obj erase ActorPkg.obj
	$(CLEAN_MAIN_OBJ)
	if exist *$(OBJ_EXT) erase *$(OBJ_EXT)
	if exist $(TARGET_NAME).pdb erase $(TARGET_NAME).pdb
	if exist $(TARGET_NAME)$(LIB_EXT) erase $(TARGET_NAME)$(LIB_EXT)
	if exist $(TARGET_NAME).ilk erase $(TARGET_NAME).ilk
	if exist $(TARGET_NAME)$(EXE_EXT) erase $(TARGET_NAME)$(EXE_EXT)
	if exist $(TARGET_NAME)$(EXE_EXT).manifest erase $(TARGET_NAME)$(DLL_EXT).manifest
	if exist $(TARGET_NAME)$(DLL_EXT).manifest erase $(TARGET_NAME)$(DLL_EXT).manifest
	$(CLEAN_OBJ_DIR)
