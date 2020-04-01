@rem Bootstrapping script to build MREUnityRuntimeLib dll
@echo off

:: for /f "usebackq tokens=*" %%i in (`"%~dp0tools\vswhere" -products * -requires Microsoft.Component.MSBuild -property installationPath`)	 do (
::  set VSInstallDir=%%i
::  if exist "%%i\MSBuild\15.0\Bin\MSBuild.exe" goto FoundVisualStudio
:: )
:: echo MSBuild not found - please install Visual Studio 2017
:: pause
:: exit /b 1

:FoundVisualStudio
echo Building Mixed Reality Unity Runtime DLL
set ErrorString=Failed Visual Studio build
"C:\Program Files (x86)\Microsoft Visual Studio\2019\Community\MSBuild\Current\Bin\MSBuild.exe" "%~dp0MREUnityRuntime\MREUnityRuntime.sln" /p:Configuration=Release /p:Platform="Any CPU"

if errorlevel 1 (
  echo BUILD FAILED: %ErrorString%
  echo Make sure you have Visual Studio 2017, and Visual Studio's Unity Tools installed
  pause
  exit /b 1
)
exit /b 0


