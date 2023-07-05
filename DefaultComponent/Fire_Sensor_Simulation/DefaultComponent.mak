
############# Target type (Debug/Release) ##################
############################################################
CPPCompileDebug= /Zi /Od /D "_DEBUG" $(LIBCRT_FLAG)d  /Fd"$(TARGET_NAME)" 
CPPCompileRelease= /Ox /D"NDEBUG" $(LIBCRT_FLAG) /Fd"$(TARGET_NAME)" 
LinkDebug=
LinkRelease=
BuildSet=Debug
SUBSYSTEM=/SUBSYSTEM:console
RPFrameWorkDll=False
SimulinkLibName=

ConfigurationCPPCompileSwitches=   /I . /I . /I $(OMROOT)\LangCpp /I $(OMROOT)\LangCpp\oxf /nologo /W3 $(ENABLE_EH) $(CRT_FLAGS) $(CPPCompileDebug) /D "_AFXDLL" /D "WIN32" /D "_CONSOLE" /D "_MBCS" /D "_WINDOWS" $(INST_FLAGS) $(INCLUDE_PATH) $(INST_INCLUDES) /c   

SIMULINK_CONFIG=False
!IF "$(SIMULINK_CONFIG)" == "True"
ConfigurationCPPCompileSwitches=$(ConfigurationCPPCompileSwitches) /D "OM_WITH_CLEANUP"
!ENDIF


!IF "$(RPFrameWorkDll)" == "True"
ConfigurationCPPCompileSwitches=$(ConfigurationCPPCompileSwitches) /D "FRAMEWORK_DLL"
!ENDIF

################### Compilation flags ######################
############################################################
INCLUDE_QUALIFIER=/I
DEFINE_QUALIFIER=/D

!IF "False" == "True"
MT_PREFIX=MT
LIBCRT_FLAG=/MT
!ELSE
MT_PREFIX=
LIBCRT_FLAG=/MD
!ENDIF

LIB_PREFIX=MSVC15x86$(MT_PREFIX)

CRT_FLAGS=$(DEFINE_QUALIFIER)_CRT_SECURE_NO_DEPRECATE $(DEFINE_QUALIFIER)_CRT_SECURE_NO_WARNINGS
ENABLE_EH=/EHa

WINMM_LIB=winmm.lib

################### Commands definition #########################
#################################################################
RMDIR = rmdir
LIB_CMD=link.exe -lib
LINK_CMD=link.exe
LIB_FLAGS=$(LinkDebug)  /NOLOGO   
LINK_FLAGS=$(LinkDebug)  /NOLOGO    $(SUBSYSTEM) /MACHINE:x86 

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
LIB_EXT=.lib

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
  Fire_Sensor.obj \
  Network.obj \
  Smart_Room.obj \
  HVAC.obj \
  CO2_Sensor.obj \
  Occupancy_Sensor.obj \
  Movement_Sensor.obj \
  Room_Touch_Panel.obj \
  ExternalPersonnel.obj \
  Door_Touch_Panel.obj \
  Booking_System.obj \
  User.obj \
  Weather_Forecast.obj \
  Microphones.obj \
  Speakers.obj \
  Webcam.obj \
  Smart_Screen.obj \
  External_Personnel.obj \
  Lights.obj \
  ArchitecturalAnalysisPkg.obj \
  ActorPkg.obj \
  UseCaseAnalysisPkg.obj




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
$(OBJS) : $(INST_LIBS) $(OXF_LIBS)
!ENDIF

LIB_POSTFIX=
!IF "$(BuildSet)"=="Release"
LIB_POSTFIX=R
!ENDIF

!IF "$(TARGET_TYPE)" == "Executable"
LinkDebug=$(LinkDebug) /DEBUG
LinkRelease=$(LinkRelease) /OPT:NOREF
!ELSEIF "$(TARGET_TYPE)" == "Library"
LinkDebug=$(LinkDebug)
!ENDIF


!IF "$(INSTRUMENTATION)" == "Animation"
INST_FLAGS=/D "OMANIMATOR"
INST_INCLUDES=/I $(OMROOT)\LangCpp\aom /I $(OMROOT)\LangCpp\tom
!IF "$(RPFrameWorkDll)" == "True"
INST_LIBS= 
OXF_LIBS=$(OMROOT)\LangCpp\lib\$(LIB_PREFIX)oxfanimdll$(LIB_POSTFIX)$(LIB_EXT) 
!ELSE
INST_LIBS= $(FRAMEWORK_LIB_ROOT)\LangCpp\lib\$(LIB_PREFIX)aomanim$(LIB_POSTFIX)$(LIB_EXT) $(FRAMEWORK_LIB_ROOT)\LangCpp\lib\$(LIB_PREFIX)oxsiminst$(LIB_POSTFIX)$(LIB_EXT)
OXF_LIBS=$(FRAMEWORK_LIB_ROOT)\LangCpp\lib\$(LIB_PREFIX)oxfinst$(LIB_POSTFIX)$(LIB_EXT) $(FRAMEWORK_LIB_ROOT)\LangCpp\lib\$(LIB_PREFIX)omComAppl$(LIB_POSTFIX)$(LIB_EXT) $(SimulinkLibName)
!ENDIF
SOCK_LIB=wsock32.lib

!ELSEIF "$(INSTRUMENTATION)" == "Tracing"
INST_FLAGS=/D "OMTRACER"
INST_INCLUDES=/I $(OMROOT)\LangCpp\aom /I $(OMROOT)\LangCpp\tom
!IF "$(RPFrameWorkDll)" == "True"
INST_LIBS=
OXF_LIBS= $(FRAMEWORK_LIB_ROOT)\LangCpp\lib\$(LIB_PREFIX)oxftracedll$(LIB_POSTFIX)$(LIB_EXT) 
!ELSE
INST_LIBS=$(FRAMEWORK_LIB_ROOT)\LangCpp\lib\$(LIB_PREFIX)tomtrace$(LIB_POSTFIX)$(LIB_EXT) $(FRAMEWORK_LIB_ROOT)\LangCpp\lib\$(LIB_PREFIX)aomtrace$(LIB_POSTFIX)$(LIB_EXT) $(FRAMEWORK_LIB_ROOT)\LangCpp\lib\$(LIB_PREFIX)oxsiminst$(LIB_POSTFIX)$(LIB_EXT)
OXF_LIBS= $(FRAMEWORK_LIB_ROOT)\LangCpp\lib\$(LIB_PREFIX)oxfinst$(LIB_POSTFIX)$(LIB_EXT) $(FRAMEWORK_LIB_ROOT)\LangCpp\lib\$(LIB_PREFIX)omComAppl$(LIB_POSTFIX)$(LIB_EXT) $(SimulinkLibName)
!ENDIF
SOCK_LIB=wsock32.lib

!ELSEIF "$(INSTRUMENTATION)" == "None" 
INST_FLAGS=
INST_INCLUDES=
INST_LIBS=
!IF "$(RPFrameWorkDll)" == "True"
OXF_LIBS=$(FRAMEWORK_LIB_ROOT)\LangCpp\lib\$(LIB_PREFIX)oxfdll$(LIB_POSTFIX)$(LIB_EXT) $(FRAMEWORK_LIB_ROOT)\LangCpp\lib\$(LIB_PREFIX)oxsim$(LIB_POSTFIX)$(LIB_EXT)
!ELSE
OXF_LIBS=$(FRAMEWORK_LIB_ROOT)\LangCpp\lib\$(LIB_PREFIX)oxf$(LIB_POSTFIX)$(LIB_EXT) $(SimulinkLibName) $(FRAMEWORK_LIB_ROOT)\LangCpp\lib\$(LIB_PREFIX)oxsim$(LIB_POSTFIX)$(LIB_EXT)
!ENDIF
SOCK_LIB=

!ELSE
!ERROR An invalid Instrumentation $(INSTRUMENTATION) is specified.
!ENDIF



################## Generated dependencies ########################
##################################################################






Fire_Sensor.obj : Fire_Sensor.cpp Fire_Sensor.h    ArchitecturalAnalysisPkg.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"Fire_Sensor.obj" "Fire_Sensor.cpp" 



Network.obj : Network.cpp Network.h    ArchitecturalAnalysisPkg.h Smart_Room.h HVAC.h Room_Touch_Panel.h Door_Touch_Panel.h Smart_Screen.h Speakers.h Webcam.h Microphones.h Lights.h Occupancy_Sensor.h Movement_Sensor.h Booking_System.h External_Personnel.h ExternalPersonnel.h User.h Fire_Sensor.h CO2_Sensor.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"Network.obj" "Network.cpp" 



Smart_Room.obj : Smart_Room.cpp Smart_Room.h    ArchitecturalAnalysisPkg.h Network.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"Smart_Room.obj" "Smart_Room.cpp" 



HVAC.obj : HVAC.cpp HVAC.h    ArchitecturalAnalysisPkg.h Network.h CO2_Sensor.h Occupancy_Sensor.h Movement_Sensor.h Room_Touch_Panel.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"HVAC.obj" "HVAC.cpp" 



CO2_Sensor.obj : CO2_Sensor.cpp CO2_Sensor.h    ArchitecturalAnalysisPkg.h Network.h HVAC.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"CO2_Sensor.obj" "CO2_Sensor.cpp" 



Occupancy_Sensor.obj : Occupancy_Sensor.cpp Occupancy_Sensor.h    ArchitecturalAnalysisPkg.h Network.h HVAC.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"Occupancy_Sensor.obj" "Occupancy_Sensor.cpp" 



Movement_Sensor.obj : Movement_Sensor.cpp Movement_Sensor.h    ArchitecturalAnalysisPkg.h Network.h HVAC.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"Movement_Sensor.obj" "Movement_Sensor.cpp" 



Room_Touch_Panel.obj : Room_Touch_Panel.cpp Room_Touch_Panel.h    ArchitecturalAnalysisPkg.h Network.h HVAC.h ExternalPersonnel.h User.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"Room_Touch_Panel.obj" "Room_Touch_Panel.cpp" 



ExternalPersonnel.obj : ExternalPersonnel.cpp ExternalPersonnel.h    ActorPkg.h Smart_Room.h Door_Touch_Panel.h Room_Touch_Panel.h Network.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"ExternalPersonnel.obj" "ExternalPersonnel.cpp" 



Door_Touch_Panel.obj : Door_Touch_Panel.cpp Door_Touch_Panel.h    ArchitecturalAnalysisPkg.h Network.h Booking_System.h User.h ExternalPersonnel.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"Door_Touch_Panel.obj" "Door_Touch_Panel.cpp" 



Booking_System.obj : Booking_System.cpp Booking_System.h    ArchitecturalAnalysisPkg.h Network.h Door_Touch_Panel.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"Booking_System.obj" "Booking_System.cpp" 



User.obj : User.cpp User.h    ActorPkg.h Smart_Room.h Door_Touch_Panel.h Room_Touch_Panel.h Network.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"User.obj" "User.cpp" 



Weather_Forecast.obj : Weather_Forecast.cpp Weather_Forecast.h    ArchitecturalAnalysisPkg.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"Weather_Forecast.obj" "Weather_Forecast.cpp" 



Microphones.obj : Microphones.cpp Microphones.h    ArchitecturalAnalysisPkg.h Network.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"Microphones.obj" "Microphones.cpp" 



Speakers.obj : Speakers.cpp Speakers.h    ArchitecturalAnalysisPkg.h Network.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"Speakers.obj" "Speakers.cpp" 



Webcam.obj : Webcam.cpp Webcam.h    ArchitecturalAnalysisPkg.h Network.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"Webcam.obj" "Webcam.cpp" 



Smart_Screen.obj : Smart_Screen.cpp Smart_Screen.h    ArchitecturalAnalysisPkg.h Network.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"Smart_Screen.obj" "Smart_Screen.cpp" 



External_Personnel.obj : External_Personnel.cpp External_Personnel.h    ArchitecturalAnalysisPkg.h Network.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"External_Personnel.obj" "External_Personnel.cpp" 



Lights.obj : Lights.cpp Lights.h    ArchitecturalAnalysisPkg.h Network.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"Lights.obj" "Lights.cpp" 



ArchitecturalAnalysisPkg.obj : ArchitecturalAnalysisPkg.cpp ArchitecturalAnalysisPkg.h    Smart_Room.h Booking_System.h CO2_Sensor.h Door_Touch_Panel.h External_Personnel.h Fire_Sensor.h HVAC.h Lights.h Microphones.h Movement_Sensor.h Network.h Occupancy_Sensor.h Room_Touch_Panel.h Smart_Screen.h Speakers.h Weather_Forecast.h Webcam.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"ArchitecturalAnalysisPkg.obj" "ArchitecturalAnalysisPkg.cpp" 



ActorPkg.obj : ActorPkg.cpp ActorPkg.h    
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"ActorPkg.obj" "ActorPkg.cpp" 



UseCaseAnalysisPkg.obj : UseCaseAnalysisPkg.cpp UseCaseAnalysisPkg.h    
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"UseCaseAnalysisPkg.obj" "UseCaseAnalysisPkg.cpp" 






$(TARGET_MAIN)$(OBJ_EXT) : $(TARGET_MAIN)$(CPP_EXT) $(OBJS) 
	$(CPP) $(ConfigurationCPPCompileSwitches) /Fo"$(TARGET_MAIN)$(OBJ_EXT)" $(TARGET_MAIN)$(CPP_EXT)

########################## Linking instructions ###############################
###############################################################################
$(TARGET_NAME)$(EXE_EXT): $(OBJS) $(ADDITIONAL_OBJS) $(TARGET_MAIN)$(OBJ_EXT) DefaultComponent.mak 
	@echo Linking $(TARGET_NAME)$(EXE_EXT)
	$(LINK_CMD)  $(TARGET_MAIN)$(OBJ_EXT) $(OBJS) $(ADDITIONAL_OBJS) \
	$(LIBS) \
	$(INST_LIBS) \
	$(OXF_LIBS) \
	$(SOCK_LIB) \
	$(WINMM_LIB) \
	$(LINK_FLAGS) /out:$(TARGET_NAME)$(EXE_EXT)
	if exist $(TARGET_NAME)$(EXE_EXT).manifest mt.exe -manifest $@.manifest -outputresource:$(TARGET_NAME)$(EXE_EXT);1



$(TARGET_NAME)$(LIB_EXT) : $(OBJS) $(ADDITIONAL_OBJS) DefaultComponent.mak
	@echo Building library $@
	$(LIB_CMD) $(LIB_FLAGS) /out:$(TARGET_NAME)$(LIB_EXT) $(OBJS) $(ADDITIONAL_OBJS) $(LIBS)

clean:
	@echo Cleanup
	if exist Fire_Sensor.obj erase Fire_Sensor.obj
	if exist Network.obj erase Network.obj
	if exist Smart_Room.obj erase Smart_Room.obj
	if exist HVAC.obj erase HVAC.obj
	if exist CO2_Sensor.obj erase CO2_Sensor.obj
	if exist Occupancy_Sensor.obj erase Occupancy_Sensor.obj
	if exist Movement_Sensor.obj erase Movement_Sensor.obj
	if exist Room_Touch_Panel.obj erase Room_Touch_Panel.obj
	if exist ExternalPersonnel.obj erase ExternalPersonnel.obj
	if exist Door_Touch_Panel.obj erase Door_Touch_Panel.obj
	if exist Booking_System.obj erase Booking_System.obj
	if exist User.obj erase User.obj
	if exist Weather_Forecast.obj erase Weather_Forecast.obj
	if exist Microphones.obj erase Microphones.obj
	if exist Speakers.obj erase Speakers.obj
	if exist Webcam.obj erase Webcam.obj
	if exist Smart_Screen.obj erase Smart_Screen.obj
	if exist External_Personnel.obj erase External_Personnel.obj
	if exist Lights.obj erase Lights.obj
	if exist ArchitecturalAnalysisPkg.obj erase ArchitecturalAnalysisPkg.obj
	if exist ActorPkg.obj erase ActorPkg.obj
	if exist UseCaseAnalysisPkg.obj erase UseCaseAnalysisPkg.obj
	if exist $(TARGET_MAIN)$(OBJ_EXT) erase $(TARGET_MAIN)$(OBJ_EXT)
	if exist *$(OBJ_EXT) erase *$(OBJ_EXT)
	if exist $(TARGET_NAME).pdb erase $(TARGET_NAME).pdb
	if exist $(TARGET_NAME)$(LIB_EXT) erase $(TARGET_NAME)$(LIB_EXT)
	if exist $(TARGET_NAME).ilk erase $(TARGET_NAME).ilk
	if exist $(TARGET_NAME)$(EXE_EXT) erase $(TARGET_NAME)$(EXE_EXT)
	if exist $(TARGET_NAME)$(EXE_EXT).manifest erase $(TARGET_NAME)$(EXE_EXT).manifest
	$(CLEAN_OBJ_DIR)
	
