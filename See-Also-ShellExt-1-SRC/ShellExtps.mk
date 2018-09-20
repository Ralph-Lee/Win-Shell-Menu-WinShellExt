
ShellExtps.dll: dlldata.obj ShellExt_p.obj ShellExt_i.obj
	link /dll /out:ShellExtps.dll /def:ShellExtps.def /entry:DllMain dlldata.obj ShellExt_p.obj ShellExt_i.obj \
		kernel32.lib rpcndr.lib rpcns4.lib rpcrt4.lib oleaut32.lib uuid.lib \

.c.obj:
	cl /c /Ox /DWIN32 /D_WIN32_WINNT=0x0400 /DREGISTER_PROXY_DLL \
		$<

clean:
	@del ShellExtps.dll
	@del ShellExtps.lib
	@del ShellExtps.exp
	@del dlldata.obj
	@del ShellExt_p.obj
	@del ShellExt_i.obj
