@echo off
REM Copyright (c) 2025 Agibot Co., Ltd.
REM Omniglove SDK is licensed under Mulan PSL v2.
REM SPDX-License-Identifier: MulanPSL-2.0

setlocal EnableExtensions DisableDelayedExpansion

set "SCRIPT_DIR=%~dp0"
set "INSTALL_DIR=C:\omniglove"
set "UPDATE_ENVIRONMENT=1"

if /I "%~1"=="--no-environment" goto :no_environment
if not "%~1"=="" set "INSTALL_DIR=%~f1"
goto :arguments_ready

:no_environment
set "UPDATE_ENVIRONMENT=0"
if not "%~2"=="" set "INSTALL_DIR=%~f2"

:arguments_ready
if "%UPDATE_ENVIRONMENT%"=="0" goto :privileges_ready

net session >nul 2>&1
if not errorlevel 1 goto :privileges_ready

echo [INFO] Requesting administrator privileges...
set "OMNIGLOVE_INSTALLER_PATH=%~f0"
set "OMNIGLOVE_INSTALLER_DIR=%INSTALL_DIR%"
powershell.exe -NoProfile -ExecutionPolicy Bypass -Command ^
  "$arg='^"'+$env:OMNIGLOVE_INSTALLER_DIR+'^"'; $p=Start-Process -FilePath $env:OMNIGLOVE_INSTALLER_PATH -ArgumentList $arg -Verb RunAs -Wait -PassThru; exit $p.ExitCode"
exit /b %errorlevel%

:privileges_ready
call :require_file "%SCRIPT_DIR%bin\omniglove.dll"
if errorlevel 1 goto :failed
call :require_file "%SCRIPT_DIR%bin\libusb-1.0.dll"
if errorlevel 1 goto :failed
call :require_file "%SCRIPT_DIR%bin\omniglove_ota_tool.exe"
if errorlevel 1 goto :failed
call :require_file "%SCRIPT_DIR%lib\omniglove.lib"
if errorlevel 1 goto :failed
call :require_file "%SCRIPT_DIR%include\omniglove\omniglove.h"
if errorlevel 1 goto :failed
call :require_file "%SCRIPT_DIR%cmake\OmnigloveSDKConfig.cmake"
if errorlevel 1 goto :failed
call :require_file "%SCRIPT_DIR%cmake\OmnigloveSDKConfigVersion.cmake"
if errorlevel 1 goto :failed
call :require_file "%SCRIPT_DIR%BUILD_INFO.txt"
if errorlevel 1 goto :failed
call :require_file "%SCRIPT_DIR%README_CN.md"
if errorlevel 1 goto :failed
call :require_file "%SCRIPT_DIR%uninstall.bat"
if errorlevel 1 goto :failed

echo ============================================
echo Omniglove SDK - Windows x86_64 Installer
echo ============================================
echo.
echo Installing to: %INSTALL_DIR%
echo.

if not exist "%INSTALL_DIR%" mkdir "%INSTALL_DIR%"
if errorlevel 1 goto :failed

call :copy_tree "%SCRIPT_DIR%bin" "%INSTALL_DIR%\bin"
if errorlevel 1 goto :failed
call :copy_tree "%SCRIPT_DIR%lib" "%INSTALL_DIR%\lib"
if errorlevel 1 goto :failed
call :copy_tree "%SCRIPT_DIR%include" "%INSTALL_DIR%\include"
if errorlevel 1 goto :failed
call :copy_tree "%SCRIPT_DIR%cmake" "%INSTALL_DIR%\cmake"
if errorlevel 1 goto :failed
call :copy_tree "%SCRIPT_DIR%examples" "%INSTALL_DIR%\examples"
if errorlevel 1 goto :failed
call :copy_tree "%SCRIPT_DIR%docs" "%INSTALL_DIR%\docs"
if errorlevel 1 goto :failed

copy /Y "%SCRIPT_DIR%README.md" "%INSTALL_DIR%\README.md" >nul
if errorlevel 1 goto :failed
copy /Y "%SCRIPT_DIR%README_CN.md" "%INSTALL_DIR%\README_CN.md" >nul
if errorlevel 1 goto :failed
copy /Y "%SCRIPT_DIR%BUILD_INFO.txt" "%INSTALL_DIR%\BUILD_INFO.txt" >nul
if errorlevel 1 goto :failed
copy /Y "%SCRIPT_DIR%uninstall.bat" "%INSTALL_DIR%\uninstall.bat" >nul
if errorlevel 1 goto :failed

if "%UPDATE_ENVIRONMENT%"=="0" goto :verify_install

set "OMNIGLOVE_INSTALL_PREFIX=%INSTALL_DIR%"
set "OMNIGLOVE_INSTALL_BIN=%INSTALL_DIR%\bin"
powershell.exe -NoProfile -ExecutionPolicy Bypass -Command ^
  "$entry=[IO.Path]::GetFullPath($env:OMNIGLOVE_INSTALL_BIN).TrimEnd('\'); $path=[string][Environment]::GetEnvironmentVariable('Path','Machine'); $items=@($path -split ';' ^| Where-Object { $_ }); $found=@($items ^| Where-Object { [string]::Equals($_.TrimEnd('\'),$entry,[StringComparison]::OrdinalIgnoreCase) }).Count -gt 0; if(-not $found){ [Environment]::SetEnvironmentVariable('Path',(@($items)+$entry)-join ';','Machine'); Write-Host '[OK] Added SDK bin directory to system PATH' } else { Write-Host '[OK] SDK bin directory is already in system PATH' }"
if errorlevel 1 goto :failed

powershell.exe -NoProfile -ExecutionPolicy Bypass -Command ^
  "$entry=[IO.Path]::GetFullPath($env:OMNIGLOVE_INSTALL_PREFIX).TrimEnd('\'); $path=[string][Environment]::GetEnvironmentVariable('CMAKE_PREFIX_PATH','Machine'); $items=@($path -split ';' ^| Where-Object { $_ }); $found=@($items ^| Where-Object { [string]::Equals($_.TrimEnd('\'),$entry,[StringComparison]::OrdinalIgnoreCase) }).Count -gt 0; if(-not $found){ [Environment]::SetEnvironmentVariable('CMAKE_PREFIX_PATH',(@($items)+$entry)-join ';','Machine'); Write-Host '[OK] Added SDK prefix to system CMAKE_PREFIX_PATH' } else { Write-Host '[OK] SDK prefix is already in system CMAKE_PREFIX_PATH' }"
if errorlevel 1 goto :failed

:verify_install
call :require_file "%INSTALL_DIR%\bin\omniglove.dll"
if errorlevel 1 goto :failed
call :require_file "%INSTALL_DIR%\bin\libusb-1.0.dll"
if errorlevel 1 goto :failed
call :require_file "%INSTALL_DIR%\bin\omniglove_ota_tool.exe"
if errorlevel 1 goto :failed
call :require_file "%INSTALL_DIR%\lib\omniglove.lib"
if errorlevel 1 goto :failed
call :require_file "%INSTALL_DIR%\include\omniglove\omniglove.h"
if errorlevel 1 goto :failed
call :require_file "%INSTALL_DIR%\cmake\OmnigloveSDKConfig.cmake"
if errorlevel 1 goto :failed
call :require_file "%INSTALL_DIR%\uninstall.bat"
if errorlevel 1 goto :failed

echo.
echo ============================================
echo Installation Complete
echo ============================================
echo SDK: %INSTALL_DIR%
echo CMake package: %INSTALL_DIR%\cmake
echo OTA tool: %INSTALL_DIR%\bin\omniglove_ota_tool.exe
if "%UPDATE_ENVIRONMENT%"=="1" echo Restart the terminal or IDE before running CMake.
if "%UPDATE_ENVIRONMENT%"=="1" pause
exit /b 0

:copy_tree
if not exist "%~1\" (
    echo [ERROR] Package directory is missing: %~1
    exit /b 1
)
if not exist "%~2" mkdir "%~2"
if errorlevel 1 exit /b 1
robocopy "%~1" "%~2" /E /NFL /NDL /NJH /NJS /NP >nul
if errorlevel 8 (
    echo [ERROR] Failed to copy %~1 to %~2
    exit /b 1
)
exit /b 0

:require_file
if exist "%~1" exit /b 0
echo [ERROR] Required file is missing: %~1
exit /b 1

:failed
set "INSTALL_RESULT=%errorlevel%"
if "%INSTALL_RESULT%"=="0" set "INSTALL_RESULT=1"
echo.
echo [ERROR] Omniglove SDK installation failed.
if "%UPDATE_ENVIRONMENT%"=="1" pause
exit /b %INSTALL_RESULT%
