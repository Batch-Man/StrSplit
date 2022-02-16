@Echo off
cls
Cd bin\

Title Demo StrSplit 1.0 by kvc
Echo.
Echo. 
Echo. ORIGINAL Path variable...
Echo. %Path%
Echo.
Echo.
Echo.
Echo. This is How it looks, in without splitting...
timeout /t 8
Echo. Splitting Path variable to individual Strings.
Echo.
Echo.
StrSplit ";" "%path%"
Echo.
pause 
exit
