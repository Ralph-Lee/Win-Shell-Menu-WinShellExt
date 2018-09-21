# Tools

- [NirSoft](http://www.nirsoft.net/utils/shell_menu_view.html) - ShellMenuView - Disable/enable context menu items of Explorer .

# Documents

- [Working with Shell Extensions](https://docs.microsoft.com/en-us/windows/desktop/shell/shell-exts)

- [Codeproject.com - How to Write Windows Shell Extension with .NET Languages](https://www.codeproject.com/Articles/174369/How-to-Write-Windows-Shell-Extension-with-NET-Lang)

- [Codeproject.com - .NET Shell Extensions - Shell Context Menus](https://www.codeproject.com/Articles/512956/NET-Shell-Extensions-Shell-Context-Menus)

- [Stackoverflow.com - How to add a menu item in Windows right-click menu](https://stackoverflow.com/questions/18309300/how-to-add-a-menu-item-in-windows-right-click-menu)

- [How to Add & Remove Entries from the Windows Right-Click Menu](https://www.makeuseof.com/tag/how-to-add-remove-entries-from-the-right-click-menu/)

- [10 Best Shortcuts to Add to Your Right-Click Menu](https://www.makeuseof.com/tag/10-best-shortcuts-add-right-click-menu/)

# Repos

- [CMDer - Home](http://cmder.net/)

- [CMDer - Github](https://github.com/cmderdev/cmder)

- [Cmder - Context Right-Click Menu for Windows](https://gist.github.com/jojobyte/66c8346ed8948b9b395f)

- [Babun - Home - A Windows shell Base on Cygwin](http://babun.github.io/)

- [Babun - Github](https://github.com/babun/babun)

# Expand right-click menu on background

    @ECHO OFF
    SET REGPATH=HKEY_CLASSES_ROOT\Directory\Background\shell\CMDShell
    REG ADD "%REGPATH%" /ve /d "CMD Prompt" /f
    REG ADD "%REGPATH%\command" /ve /d "cmd.exe /K CD %%1" /f
    PAUSE

# Expand right-click menu on folder

    @ECHO OFF
    SET REGPATH=HKEY_CLASSES_ROOT\Folder\shell
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

# Git Bash here

- [Can not find "Git Bash Here" in context menu](https://github.com/git-for-windows/git/issues/1229)

- Version 1: The Registry exports for Git from the Windows installer

    Windows Registry Editor Version 5.00

    [HKEY_LOCAL_MACHINE\SOFTWARE\Classes\Directory\background\shell\git_gui]
    @="Git &GUI Here"
    "Icon"="C:\\Program Files\\Git\\cmd\\git-gui.exe"

    [HKEY_LOCAL_MACHINE\SOFTWARE\Classes\Directory\background\shell\git_gui\command]
    @="\"C:\\Program Files\\Git\\cmd\\git-gui.exe\" \"--working-dir\" \"%v.\""

    Windows Registry Editor Version 5.00

    [HKEY_LOCAL_MACHINE\SOFTWARE\Classes\Directory\background\shell\git_shell]
    @="Git Ba&sh Here"
    "Icon"="C:\\Program Files\\Git\\git-bash.exe"

    [HKEY_LOCAL_MACHINE\SOFTWARE\Classes\Directory\background\shell\git_shell\command]
    @="\"C:\\Program Files\\Git\\git-bash.exe\" \"--cd=%v.\""

- Version 2:

    Windows Registry Editor Version 5.00

    [HKEY_LOCAL_MACHINE\SOFTWARE\Classes\Directory\shell\git_shell\command]
    @="\"C:\\Program Files\\Git\\git-bash.exe\" \"--cd=%1\""

    [HKEY_LOCAL_MACHINE\SOFTWARE\Classes\Directory\shell\git_gui\command]
    @="\"C:\\Program Files\\Git\\cmd\\git-gui.exe\" \"--working-dir\" \"%1\""

    [HKEY_LOCAL_MACHINE\SOFTWARE\Classes\Directory\Background\shell\git_shell\command]
    @="\"C:\\Program Files\\Git\\git-bash.exe\" \"--cd=%v.\""

    [HKEY_LOCAL_MACHINE\SOFTWARE\Classes\Directory\Background\shell\git_gui\command]
    @="\"C:\\Program Files\\Git\\cmd\\git-gui.exe\" \"--working-dir\" \"%v.\""

- Version 3:

    Windows Registry Editor Version 5.00

    [HKEY_CLASSES_ROOT\LibraryFolder\background\shell\git_gui]
    @="Git &GUI Here"
    "Icon"="C:\\Program Files\\Git\\cmd\\git-gui.exe"

    [HKEY_CLASSES_ROOT\LibraryFolder\background\shell\git_gui\command]
    @="\"C:\\Program Files\\Git\\cmd\\git-gui.exe\" \"--working-dir\" \"%v.\""

    [HKEY_CLASSES_ROOT\LibraryFolder\background\shell\git_shell]
    @="Git Ba&sh Here"
    "Icon"="C:\\Program Files\\Git\\git-bash.exe"

    [HKEY_CLASSES_ROOT\LibraryFolder\background\shell\git_shell\command]
    @="\"C:\\Program Files\\Git\\git-bash.exe\" \"--cd=%v.\""

# Edit with Vim

- [Mentioned GvimExt code on Github](https://github.com/vim/vim/tree/master/src/GvimExt)

- [Adding Vim to MS-Windows File Explorer Menu](http://vim.wikia.com/wiki/Adding_Vim_to_MS-Windows_File_Explorer_Menu)

- [Right click in Windows Explorer to open gvim in explorer mode](http://vim.wikia.com/wiki/Right_click_in_Windows_Explorer_to_open_gvim_in_explorer_mode)

- [Add Vim to the Windows Explorer context menu](http://vim.wikia.com/wiki/Add_Vim_to_the_Windows_Explorer_context_menu)

# Cygwin Bash Here

- [Mintty official doc](https://github.com/mintty/mintty/wiki/Tips#starting-in-a-particular-directory)

## The `chere` command - official tool

- [Stackoverflow - Open Cygwin at a specific folder](https://stackoverflow.com/questions/9637601/open-cygwin-at-a-specific-folder)

Open a Cygwin terminal **as Administrator** and type the command:

    chere -i -t mintty -s bash

Now you should have `Bash Prompt Here` in the Windows right-click context menu.

## Cygwin-Bash-Here Repo

- [Cygwin-Bash-Here on Github](https://github.com/olegcherr/Cygwin-Bash-Here)

How does it work?

It adds a simple command to `HKCR\Directory\shell` and `HKCR\Directory\Background\shell`:
    
    "C:\cygwin\bin\mintty.exe" --dir "%V" -e /bin/env CHERE_INVOKING=1 /bin/bash --login

## Open cygwin bash shell from Windows context menu using Windows Registry Table

- [Mentioned doc](http://shitwefoundout.com/wiki/Open_cygwin_bash_shell_from_Windows_context_menu)

Create a *.reg* file with the following (select which options you want and append it/them to the reg file):

    Windows Registry Editor Version 5.00

1. Add option in the context menu for a **directory**:

    [HKEY_CLASSES_ROOT\Directory\shell\bash]
    @="Open Bash Here"

    [HKEY_CLASSES_ROOT\Directory\shell\bash\command]
    @="c:\\cygwin\\bin\\mintty.exe bash --login -i -c 'cd \"`cygpath \"$*\"`\";bash' bash %L"

2. Add option in the context menu for a **drive**:

    [HKEY_CLASSES_ROOT\Drive\shell\bash]
    @="Open Bash Here"

    [HKEY_CLASSES_ROOT\Drive\shell\bash\command]
    @="c:\\cygwin\\bin\\mintty.exe bash --login -i -c 'cd \"`cygpath \"$*\"`\";bash' bash %L"

3. Add option in the **background** context menu:
    
This works in Windows 7, but requires the `chere` package:

    [HKEY_CLASSES_ROOT\Directory\Background\shell\bash]
    @="Open Bash Here"

    [HKEY_CLASSES_ROOT\Directory\Background\shell\bash\command]
    @="c:\\cygwin\\bin\\mintty.exe -i /Cygwin-Terminal.ico -e /bin/xhere /bin/bash.exe"
    
**This works in Windows 8, and is most likely in Windows 7 (not tested, but should be more stable than the `chere` method):**

    [HKEY_CLASSES_ROOT\Directory\Background\shell\bash]
    @="Open Bash Here"

    [HKEY_CLASSES_ROOT\Directory\Background\shell\bash\command]
    @="c:\\cygwin\\bin\\mintty.exe -i /Cygwin-Terminal.ico bash -i -c 'cd \"`cygpath \"%V\"`\";bash'

4. Add option in the background context menu in the Library folders:

    [HKEY_CLASSES_ROOT\LibraryFolder\Background\shell]

    [HKEY_CLASSES_ROOT\LibraryFolder\Background\shell\bash]
    @="Open Bash Here"

    [HKEY_CLASSES_ROOT\Directory\Background\shell\bash\command]
    @="c:\\cygwin\\bin\\mintty.exe -i /Cygwin-Terminal.ico bash -i -c 'cd \"`cygpath \"%V\"`\";bash'
