@echo off

cd /D "%~dp0"

IF exist "P:\DayZTest\" (
	echo Removing existing link P:\DayZTest
	rmdir "P:\DayZTest\"
)

echo Creating link P:\DayZTest
mklink /J "P:\DayZTest\" "%cd%\DayZTest\"

echo Done