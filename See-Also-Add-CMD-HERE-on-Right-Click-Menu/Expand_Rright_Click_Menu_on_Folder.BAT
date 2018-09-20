@ ECHO OFF
REM
SET REGPATH=HKEY_CLASSES_ROOT\Folder\shell
REM
REM REG ADD "%REGPATH%\zzdos" /ve /d "CMD Prompt(&Z)" /f
REG ADD "%REGPATH%\zzdos" /ve /d "CMD Prompt" /f
REG ADD "%REGPATH%\zzdos\command" /ve /d "cmd.exe /K CD %%1" /f
REM
REM REG ADD "%REGPATH%\zzexplorer" /ve /d "Open In A New Window(&Y)" /f
REG ADD "%REGPATH%\zzexplorer" /ve /d "Open In New Window" /f
REG ADD "%REGPATH%\zzexplorer\command" /ve /d "explorer.exe /e,/root,%%L" /f
REM
ECHO.
PAUSE