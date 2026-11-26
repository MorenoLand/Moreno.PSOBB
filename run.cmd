@echo off
rem Run the lifted client. Set PSOBB_DIR to the directory that contains the retail data.
setlocal
if "%PSOBB_DIR%"=="" set "PSOBB_DIR=%~dp0data"
set "PATH=%~dp0bin;%PSOBB_DIR%;%PATH%"
set RECOMP_BOOT_LOG=1
cd /d "%~dp0bin"
PsoBBHost.exe "%PSOBB_DIR%" %*
