@ ECHO OFF
SET REGPATH=HKEY_CLASSES_ROOT\Directory\Background\shell\minttyShell
REG ADD "%REGPATH%" /ve /d "Mintty Prompt" /f
REG ADD "%REGPATH%\command" /ve /d "cmd.exe /K CD %%1" /f
PAUSE
