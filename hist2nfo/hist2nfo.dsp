# Microsoft Developer Studio Project File - Name="hist2nfo" - Package Owner=<4>
# Microsoft Developer Studio Generated Build File, Format Version 6.00
# ** DO NOT EDIT **

# TARGTYPE "Win32 (x86) Console Application" 0x0103

CFG=hist2nfo - Win32 Release
!MESSAGE This is not a valid makefile. To build this project using NMAKE,
!MESSAGE use the Export Makefile command and run
!MESSAGE 
!MESSAGE NMAKE /f "hist2nfo.mak".
!MESSAGE 
!MESSAGE You can specify a configuration when running NMAKE
!MESSAGE by defining the macro CFG on the command line. For example:
!MESSAGE 
!MESSAGE NMAKE /f "hist2nfo.mak" CFG="hist2nfo - Win32 Release"
!MESSAGE 
!MESSAGE Possible choices for configuration are:
!MESSAGE 
!MESSAGE "hist2nfo - Win32 Release" (based on "Win32 (x86) Console Application")
!MESSAGE "hist2nfo - Win32 Debug" (based on "Win32 (x86) Console Application")
!MESSAGE 

# Begin Project
# PROP AllowPerConfigDependencies 0
# PROP Scc_ProjName ""
# PROP Scc_LocalPath ""
CPP=cl.exe
MTL=midl.exe
RSC=rc.exe

!IF  "$(CFG)" == "hist2nfo - Win32 Release"

# PROP BASE Use_MFC 6
# PROP BASE Use_Debug_Libraries 0
# PROP BASE Output_Dir ".\Release"
# PROP BASE Intermediate_Dir ".\Release"
# PROP BASE Target_Dir ""
# PROP Use_MFC 6
# PROP Use_Debug_Libraries 0
# PROP Output_Dir ".\Release"
# PROP Intermediate_Dir ".\Release"
# PROP Target_Dir ""
# ADD BASE CPP /nologo /MD /W4 /O1 /Ob1 /D "WIN32" /D "NDEBUG" /D "_CONSOLE" /D "_AFXDLL" /D "_MBCS" /GF /Zp1 /Gy /Yu"stdafx.h" /Fp".\Release/hist2nfo.pch" /Fo".\Release/" /Fd".\Release/" /c /GX 
# ADD CPP /nologo /MD /W4 /O1 /Ob1 /D "WIN32" /D "NDEBUG" /D "_CONSOLE" /D "_AFXDLL" /D "_MBCS" /GF /Zp1 /Gy /Yu"stdafx.h" /Fp".\Release/hist2nfo.pch" /Fo".\Release/" /Fd".\Release/" /c /GX 
# ADD BASE MTL /nologo /tlb".\Release\hist2nfo.tlb" /win32 
# ADD MTL /nologo /tlb".\Release\hist2nfo.tlb" /win32 
# ADD BASE RSC /l 1033 /d "NDEBUG" 
# ADD RSC /l 1033 /d "NDEBUG" 
BSC32=bscmake.exe
# ADD BASE BSC32 /nologo 
# ADD BSC32 /nologo 
LINK32=link.exe
# ADD BASE LINK32 kernel32.lib user32.lib gdi32.lib winspool.lib comdlg32.lib advapi32.lib shell32.lib ole32.lib oleaut32.lib uuid.lib odbc32.lib odbccp32.lib odbc32.lib odbccp32.lib /nologo /out:".\Release\hist2nfo.exe" /incremental:no /pdb:".\Release\hist2nfo.pdb" /pdbtype:sept /subsystem:console /MACHINE:I386
# ADD LINK32 kernel32.lib user32.lib gdi32.lib winspool.lib comdlg32.lib advapi32.lib shell32.lib ole32.lib oleaut32.lib uuid.lib odbc32.lib odbccp32.lib odbc32.lib odbccp32.lib /nologo /out:".\Release\hist2nfo.exe" /incremental:no /pdb:".\Release\hist2nfo.pdb" /pdbtype:sept /subsystem:console /MACHINE:I386

!ELSEIF  "$(CFG)" == "hist2nfo - Win32 Debug"

# PROP BASE Use_MFC 6
# PROP BASE Use_Debug_Libraries 1
# PROP BASE Output_Dir ".\Debug"
# PROP BASE Intermediate_Dir ".\Debug"
# PROP BASE Target_Dir ""
# PROP Use_MFC 6
# PROP Use_Debug_Libraries 1
# PROP Output_Dir ".\Debug"
# PROP Intermediate_Dir ".\Debug"
# PROP Target_Dir ""
# ADD BASE CPP /nologo /MDd /ZI /W4 /Od /D "WIN32" /D "_DEBUG" /D "_CONSOLE" /D "_AFXDLL" /D "_MBCS" /Yu"stdafx.h" /Fp".\Debug/hist2nfo.pch" /Fo".\Debug/" /Fd".\Debug/" /GZ /c /GX 
# ADD CPP /nologo /MDd /ZI /W4 /Od /D "WIN32" /D "_DEBUG" /D "_CONSOLE" /D "_AFXDLL" /D "_MBCS" /Yu"stdafx.h" /Fp".\Debug/hist2nfo.pch" /Fo".\Debug/" /Fd".\Debug/" /GZ /c /GX 
# ADD BASE MTL /nologo /tlb".\Debug\hist2nfo.tlb" /win32 
# ADD MTL /nologo /tlb".\Debug\hist2nfo.tlb" /win32 
# ADD BASE RSC /l 1033 /d "_DEBUG" 
# ADD RSC /l 1033 /d "_DEBUG" 
BSC32=bscmake.exe
# ADD BASE BSC32 /nologo 
# ADD BSC32 /nologo 
LINK32=link.exe
# ADD BASE LINK32 kernel32.lib user32.lib gdi32.lib winspool.lib comdlg32.lib advapi32.lib shell32.lib ole32.lib oleaut32.lib uuid.lib odbc32.lib odbccp32.lib odbc32.lib odbccp32.lib /nologo /out:".\Debug\hist2nfo.exe" /incremental:yes /debug /pdb:".\Debug\hist2nfo.pdb" /pdbtype:sept /subsystem:console /MACHINE:I386
# ADD LINK32 kernel32.lib user32.lib gdi32.lib winspool.lib comdlg32.lib advapi32.lib shell32.lib ole32.lib oleaut32.lib uuid.lib odbc32.lib odbccp32.lib odbc32.lib odbccp32.lib /nologo /out:".\Debug\hist2nfo.exe" /incremental:yes /debug /pdb:".\Debug\hist2nfo.pdb" /pdbtype:sept /subsystem:console /MACHINE:I386

!ENDIF

# Begin Target

# Name "hist2nfo - Win32 Release"
# Name "hist2nfo - Win32 Debug"
# Begin Group "Source Files"

# PROP Default_Filter "cpp;c;cxx;rc;def;r;odl;idl;hpj;bat"
# Begin Source File

SOURCE=.\StdAfx.cpp

!IF  "$(CFG)" == "hist2nfo - Win32 Release"

# ADD CPP /nologo /Yc"stdafx.h" /GX 
!ELSEIF  "$(CFG)" == "hist2nfo - Win32 Debug"

# ADD CPP /nologo /Yc"stdafx.h" /GZ /GX 
!ENDIF

# End Source File
# Begin Source File

SOURCE=.\hist2nfo.cpp
# End Source File
# End Group
# Begin Group "Header Files"

# PROP Default_Filter "h;hpp;hxx;hm;inl"
# Begin Source File

SOURCE=.\StdAfx.h
# End Source File
# End Group
# End Target
# End Project

