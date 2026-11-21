@echo off
REM Copyright (c) 2025 Agibot Co., Ltd.
REM Omniglove SDK is licensed under Mulan PSL v2.
REM SPDX-License-Identifier: MulanPSL-2.0

setlocal EnableExtensions DisableDelayedExpansion

set "INSTALL_DIR=C:\omniglove"
set "UPDATE_ENVIRONMENT=1"

if /I "%~1"=="--no-environment" goto :no_environment
if not "%~1"=="" set "INSTALL_DIR=%~f1"
goto :arguments_ready

:no_environment
set "UPDATE_ENVIRONMENT=0"
if not "%~2"=="" set "INSTALL_DIR=%~f2"

:arguments_ready
for %%I in ("%INSTALL_DIR%") do set "INSTALL_DIR=%%~fI"
set "SELF_DELETE=0"
if /I "%~f0"=="%INSTALL_DIR%\uninstall.bat" set "SELF_DELETE=1"

if "%UPDATE_ENVIRONMENT%"=="0" goto :privileges_ready

net session >nul 2>&1
if not errorlevel 1 goto :privileges_ready

echo [INFO] Requesting administrator privileges...
set "OMNIGLOVE_UNINSTALLER_PATH=%~f0"
set "OMNIGLOVE_UNINSTALLER_DIR=%INSTALL_DIR%"
powershell.exe -NoProfile -ExecutionPolicy Bypass -Command ^
  "$arg='^"'+$env:OMNIGLOVE_UNINSTALLER_DIR+'^"'; $p=Start-Process -FilePath $env:OMNIGLOVE_UNINSTALLER_PATH -ArgumentList $arg -Verb RunAs -Wait -PassThru; exit $p.ExitCode"
exit /b %errorlevel%

:privileges_ready
set "INSTALL_PRESENT=0"
if exist "%INSTALL_DIR%\BUILD_INFO.txt" goto :validate_install
if exist "%INSTALL_DIR%\bin\omniglove.dll" goto :invalid_install
if exist "%INSTALL_DIR%\lib\omniglove.lib" goto :invalid_install
if exist "%INSTALL_DIR%\include\omniglove\omniglove.h" goto :invalid_install
goto :remove_environment

:validate_install
findstr /X /C:"platform=windows-x86_64" "%INSTALL_DIR%\BUILD_INFO.txt" >nul
if errorlevel 1 goto :invalid_install
findstr /X /C:"library=bin/omniglove.dll" "%INSTALL_DIR%\BUILD_INFO.txt" >nul
if errorlevel 1 goto :invalid_install
set "INSTALL_PRESENT=1"

echo ============================================
echo Omniglove SDK - Windows x86_64 Uninstaller
echo ============================================
echo.
echo Removing SDK files from: %INSTALL_DIR%
echo.

del /F /Q "%INSTALL_DIR%\bin\omniglove.dll" 2>nul
del /F /Q "%INSTALL_DIR%\bin\libusb-1.0.dll" 2>nul
del /F /Q "%INSTALL_DIR%\bin\omniglove_ota_tool.exe" 2>nul
del /F /Q "%INSTALL_DIR%\lib\omniglove.lib" 2>nul
del /F /Q "%INSTALL_DIR%\include\omniglove\omniglove.h" 2>nul
del /F /Q "%INSTALL_DIR%\cmake\OmnigloveSDKConfig.cmake" 2>nul
del /F /Q "%INSTALL_DIR%\cmake\OmnigloveSDKConfigVersion.cmake" 2>nul
del /F /Q "%INSTALL_DIR%\examples\c_consumer\CMakeLists.txt" 2>nul
del /F /Q "%INSTALL_DIR%\examples\c_consumer\main.c" 2>nul
del /F /Q "%INSTALL_DIR%\examples\firmware_info\CMakeLists.txt" 2>nul
del /F /Q "%INSTALL_DIR%\examples\firmware_info\main.c" 2>nul
del /F /Q "%INSTALL_DIR%\docs\en\DEPENDENCIES.md" 2>nul
del /F /Q "%INSTALL_DIR%\docs\en\OTA.md" 2>nul
del /F /Q "%INSTALL_DIR%\docs\cn\DEPENDENCIES.md" 2>nul
del /F /Q "%INSTALL_DIR%\docs\cn\OTA.md" 2>nul
del /F /Q "%INSTALL_DIR%\README.md" 2>nul
del /F /Q "%INSTALL_DIR%\README_CN.md" 2>nul
del /F /Q "%INSTALL_DIR%\BUILD_INFO.txt" 2>nul

if "%SELF_DELETE%"=="0" del /F /Q "%INSTALL_DIR%\uninstall.bat" 2>nul

rmdir "%INSTALL_DIR%\examples\c_consumer" 2>nul
rmdir "%INSTALL_DIR%\examples\firmware_info" 2>nul
rmdir "%INSTALL_DIR%\examples" 2>nul
rmdir "%INSTALL_DIR%\docs\en" 2>nul
rmdir "%INSTALL_DIR%\docs\cn" 2>nul
rmdir "%INSTALL_DIR%\docs" 2>nul
rmdir "%INSTALL_DIR%\cmake" 2>nul
rmdir "%INSTALL_DIR%\include\omniglove" 2>nul
rmdir "%INSTALL_DIR%\include" 2>nul
rmdir "%INSTALL_DIR%\lib" 2>nul
rmdir "%INSTALL_DIR%\bin" 2>nul

if exist "%INSTALL_DIR%\bin\omniglove.dll" goto :failed
if exist "%INSTALL_DIR%\lib\omniglove.lib" goto :failed
if exist "%INSTALL_DIR%\include\omniglove\omniglove.h" goto :failed

:remove_environment
if "%UPDATE_ENVIRONMENT%"=="0" goto :complete

set "OMNIGLOVE_INSTALL_PREFIX=%INSTALL_DIR%"
set "OMNIGLOVE_INSTALL_BIN=%INSTALL_DIR%\bin"
powershell.exe -NoProfile -ExecutionPolicy Bypass -Command ^
  "$entry=[IO.Path]::GetFullPath($env:OMNIGLOVE_INSTALL_BIN).TrimEnd('\'); $path=[string][Environment]::GetEnvironmentVariable('Path','Machine'); $items=@($path -split ';' ^| Where-Object { $_ }); $kept=@($items ^| Where-Object { -not [string]::Equals($_.TrimEnd('\'),$entry,[StringComparison]::OrdinalIgnoreCase) }); if($kept.Count -ne $items.Count){ [Environment]::SetEnvironmentVariable('Path',$kept -join ';','Machine'); Write-Host '[OK] Removed SDK bin directory from system PATH' } else { Write-Host '[OK] SDK bin directory was not present in system PATH' }"
if errorlevel 1 goto :failed

powershell.exe -NoProfile -ExecutionPolicy Bypass -Command ^
  "$entry=[IO.Path]::GetFullPath($env:OMNIGLOVE_INSTALL_PREFIX).TrimEnd('\'); $path=[string][Environment]::GetEnvironmentVariable('CMAKE_PREFIX_PATH','Machine'); $items=@($path -split ';' ^| Where-Object { $_ }); $kept=@($items ^| Where-Object { -not [string]::Equals($_.TrimEnd('\'),$entry,[StringComparison]::OrdinalIgnoreCase) }); if($kept.Count -ne $items.Count){ [Environment]::SetEnvironmentVariable('CMAKE_PREFIX_PATH',$kept -join ';','Machine'); Write-Host '[OK] Removed SDK prefix from system CMAKE_PREFIX_PATH' } else { Write-Host '[OK] SDK prefix was not present in system CMAKE_PREFIX_PATH' }"
if errorlevel 1 goto :failed

:complete
if "%INSTALL_PRESENT%"=="0" echo [OK] Omniglove SDK was already absent from %INSTALL_DIR%
if "%INSTALL_PRESENT%"=="1" echo [OK] Omniglove SDK files were removed from %INSTALL_DIR%
if "%UPDATE_ENVIRONMENT%"=="1" echo Restart the terminal or IDE to refresh its environment.
if "%UPDATE_ENVIRONMENT%"=="1" pause

if "%SELF_DELETE%"=="1" goto :delete_self
rmdir "%INSTALL_DIR%" 2>nul
exit /b 0

:invalid_install
echo [ERROR] Refusing to uninstall: %INSTALL_DIR% is not a validated Omniglove Windows x86_64 installation.
if "%UPDATE_ENVIRONMENT%"=="1" pause
exit /b 1

:failed
echo [ERROR] Omniglove SDK uninstallation failed.
if "%UPDATE_ENVIRONMENT%"=="1" pause
exit /b 1

:delete_self
(goto) 2>nul & del /F /Q "%~f0" & rmdir "%INSTALL_DIR%" 2>nul
