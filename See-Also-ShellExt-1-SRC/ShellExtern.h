// ShellExtern.h Declaration of the CShellExtern
/// @file
///
/// @brief
///     Declaration of the CShellExtern
///
/// Copyright (c) 2010  
/// 
/// зїеп:
///
///     wangqianzhou  2010.12.24
///		E-mail: wangqianzho@foxmail.com
/// 
///
#ifndef __SHELLEXTERN_H_
#define __SHELLEXTERN_H_

#include "resource.h"       // main symbols
#include <comdef.h>
#include <shlobj.h>
/////////////////////////////////////////////////////////////////////////////
// CShellExtern
class ATL_NO_VTABLE CShellExtern : 
	public CComObjectRootEx<CComSingleThreadModel>,
	public CComCoClass<CShellExtern, &CLSID_ShellExtern>,
	public IDispatchImpl<IShellExtern, &IID_IShellExtern, &LIBID_SHELLEXTLib>,
	public IShellExtInit,
    public IContextMenu
{
public:
	CShellExtern()
	{
	}

DECLARE_REGISTRY_RESOURCEID(IDR_SHELLEXTERN)

DECLARE_PROTECT_FINAL_CONSTRUCT()

BEGIN_COM_MAP(CShellExtern)
	COM_INTERFACE_ENTRY(IShellExtern)
	COM_INTERFACE_ENTRY(IDispatch)
	COM_INTERFACE_ENTRY(IShellExtInit)
	COM_INTERFACE_ENTRY(IContextMenu)
END_COM_MAP()

private:
	TCHAR m_szPathName[MAX_PATH * 2];
// IShellExtern
public:
    STDMETHOD(Initialize)(LPCITEMIDLIST, LPDATAOBJECT, HKEY);

    // IContextMenu
    STDMETHOD(QueryContextMenu)(HMENU, UINT, UINT, UINT, UINT);
    STDMETHOD(InvokeCommand)(LPCMINVOKECOMMANDINFO);
    STDMETHOD(GetCommandString)(UINT, UINT, UINT*, LPSTR, UINT);
};
	
#endif //__SHELLEXTERN_H_
