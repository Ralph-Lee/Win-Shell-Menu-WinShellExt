# WinShellExt

- Windows Explorer Shell Extensions

# Tools

- [NirSoft](http://www.nirsoft.net/utils/shell_menu_view.html) - ShellMenuView - Disable/enable context menu items of Explorer .

# Documents

- [Working with Shell Extensions](https://docs.microsoft.com/en-us/windows/desktop/shell/shell-exts)

- [Codeproject.com - How to Write Windows Shell Extension with .NET Languages](https://www.codeproject.com/Articles/174369/How-to-Write-Windows-Shell-Extension-with-NET-Lang)

- [Codeproject.com - .NET Shell Extensions - Shell Context Menus](https://www.codeproject.com/Articles/512956/NET-Shell-Extensions-Shell-Context-Menus)

- [Stackoverflow.com - How to add a menu item in Windows right-click menu](https://stackoverflow.com/questions/18309300/how-to-add-a-menu-item-in-windows-right-click-menu)

- [How to Add & Remove Entries from the Windows Right-Click Menu](https://www.makeuseof.com/tag/how-to-add-remove-entries-from-the-right-click-menu/)

- [10 Best Shortcuts to Add to Your Right-Click Menu](https://www.makeuseof.com/tag/10-best-shortcuts-add-right-click-menu/)

# Project Repos

- [CMDer - Home](http://cmder.net/)

- [CMDer - Github](https://github.com/cmderdev/cmder)

- [Cmder - Context Right-Click Menu for Windows](https://gist.github.com/jojobyte/66c8346ed8948b9b395f)

- [Babun - Home - A Windows shell Base on Cygwin](http://babun.github.io/)

- [Babun - Github](https://github.com/babun/babun)

# Cygwin Bash Here

- [Mintty official doc](https://github.com/mintty/mintty/wiki/Tips#starting-in-a-particular-directory)

## The `chere` command - official tool

- [Stackoverflow - Open Cygwin at a specific folder](https://stackoverflow.com/questions/9637601/open-cygwin-at-a-specific-folder)

After Cygwin is launched, open up a Cygwin terminal (**as an administrator**) and type the command:

    `$ chere -i -t mintty -s bash`

Now you should have `Bash Prompt Here` in the Windows right-click context menu.

## Cygwin-Bash-Here Repo using Windows Registry Table

-[Cygwin-Bash-Here on Github](https://github.com/olegcherr/Cygwin-Bash-Here)

- How does it work?

    It adds a simple command to `HKCR\Directory\shell` and `HKCR\Directory\Background\shell`:
    
    `"C:\cygwin\bin\mintty.exe" --dir "%V" -e /bin/env CHERE_INVOKING=1 /bin/bash --login`

## Open cygwin bash shell from Windows context menu

-[Mentioned doc](http://shitwefoundout.com/wiki/Open_cygwin_bash_shell_from_Windows_context_menu)

Create a `.reg` file with the following (select which options you want and append it/them to the reg file):

    `Windows Registry Editor Version 5.00`

1. Add option in the context menu for a directory:

    ```
    [HKEY_CLASSES_ROOT\Directory\shell\bash]
    @="Open Bash Here"

    [HKEY_CLASSES_ROOT\Directory\shell\bash\command]
    @="c:\\cygwin\\bin\\mintty.exe bash --login -i -c 'cd \"`cygpath \"$*\"`\";bash' bash %L"
    ```
2. Add option in the context menu for a drive:

    ```
    [HKEY_CLASSES_ROOT\Drive\shell\bash]
    @="Open Bash Here"

    [HKEY_CLASSES_ROOT\Drive\shell\bash\command]
    @="c:\\cygwin\\bin\\mintty.exe bash --login -i -c 'cd \"`cygpath \"$*\"`\";bash' bash %L"
    ```
3. Add option in the background context menu:
    
    This works in Windows 7, but requires the 'chere' package:

    ```
    [HKEY_CLASSES_ROOT\Directory\Background\shell\bash]
    @="Open Bash Here"

    [HKEY_CLASSES_ROOT\Directory\Background\shell\bash\command]
    @="c:\\cygwin\\bin\\mintty.exe -i /Cygwin-Terminal.ico -e /bin/xhere /bin/bash.exe"
    ```
    
    **This works in Windows 8, and is most likely in Windows 7 (not tested, but should be more stable than the `chere` method):**

    ```
    [HKEY_CLASSES_ROOT\Directory\Background\shell\bash]
    @="Open Bash Here"

    [HKEY_CLASSES_ROOT\Directory\Background\shell\bash\command]
    @="c:\\cygwin\\bin\\mintty.exe -i /Cygwin-Terminal.ico bash -i -c 'cd \"`cygpath \"%V\"`\";bash'
    ```

4. Add option in the background context menu in the Library folders:

    ```
    [HKEY_CLASSES_ROOT\LibraryFolder\Background\shell]

    [HKEY_CLASSES_ROOT\LibraryFolder\Background\shell\bash]
    @="Open Bash Here"

    [HKEY_CLASSES_ROOT\Directory\Background\shell\bash\command]
    @="c:\\cygwin\\bin\\mintty.exe -i /Cygwin-Terminal.ico bash -i -c 'cd \"`cygpath \"%V\"`\";bash'
    ```








