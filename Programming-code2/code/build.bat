@echo off
setlocal

rem //
rem // This is a MS Visual C++ build script for examples from
rem // "Programming -- Principles and Practice Using C++" by Bjarne Stroustrup
rem //


rem Usage:
rem     build        - Build all examples using the most recent MS VC++ compiler
rem     build clean  - Clean all examples
rem     build test   - Test all built examples
rem     build [ msvc90 | msvc80 | msvc71 ] - Build with a given version of MS VC++

set current_dir=%cd%
set divider=---------------------

echo %divider% 02 %divider% & cd %current_dir%\Chapter02 & call build.bat %* 
echo %divider% 03 %divider% & cd %current_dir%\Chapter03 & call build.bat %* 
echo %divider% 04 %divider% & cd %current_dir%\Chapter04 & call build.bat %* 
echo %divider% 05 %divider% & cd %current_dir%\Chapter05 & call build.bat %* 
echo %divider% 06 %divider% & cd %current_dir%\Chapter06 & call build.bat %* 
echo %divider% 07 %divider% & cd %current_dir%\Chapter07 & call build.bat %* 
echo %divider% 08 %divider% & cd %current_dir%\Chapter08 & call build.bat %* 
echo %divider% 09 %divider% & cd %current_dir%\Chapter09 & call build.bat %* 
echo %divider% 10 %divider% & cd %current_dir%\Chapter10 & call build.bat %* 
echo %divider% 11 %divider% & cd %current_dir%\Chapter11 & call build.bat %* 
echo %divider% 12 %divider% & cd %current_dir%\Chapter12 & call build.bat %* 
echo %divider% 13 %divider% & cd %current_dir%\Chapter13 & call build.bat %* 
echo %divider% 14 %divider% & cd %current_dir%\Chapter14 & call build.bat %* 
echo %divider% 15 %divider% & cd %current_dir%\Chapter15 & call build.bat %* 
echo %divider% 16 %divider% & cd %current_dir%\Chapter16 & call build.bat %* 
echo %divider% 17 %divider% & cd %current_dir%\Chapter17 & call build.bat %* 
echo %divider% 18 %divider% & cd %current_dir%\Chapter18 & call build.bat %* 
echo %divider% 19 %divider% & cd %current_dir%\Chapter19 & call build.bat %* 
echo %divider% 20 %divider% & cd %current_dir%\Chapter20 & call build.bat %* 
echo %divider% 21 %divider% & cd %current_dir%\Chapter21 & call build.bat %* 
echo %divider% 22 %divider% & cd %current_dir%\Chapter22 & call build.bat %* 
echo %divider% 23 %divider% & cd %current_dir%\Chapter23 & call build.bat %* 
echo %divider% 24 %divider% & cd %current_dir%\Chapter24 & call build.bat %* 
echo %divider% 25 %divider% & cd %current_dir%\Chapter25 & call build.bat %* 
echo %divider% 26 %divider% & cd %current_dir%\Chapter26 & call build.bat %* 
echo %divider% 27 %divider% & cd %current_dir%\Chapter27 & call build.bat %* 
