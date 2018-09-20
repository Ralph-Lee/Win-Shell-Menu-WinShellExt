// ShellExtern.cpp : Implementation of CShellExtern
#include "stdafx.h"
#include "ShellExt.h"
#include "ShellExtern.h"
#include <stdio.h>

/////////////////////////////////////////////////////////////////////////////
// CShellExtern
STDMETHODIMP CShellExtern::Initialize(LPCITEMIDLIST pIDFolder, LPDATAOBJECT pDataObj, HKEY hKeyID)
{
	return SHGetPathFromIDList ( pIDFolder, m_szPathName) ? S_OK : E_INVALIDARG;
}

STDMETHODIMP CShellExtern::QueryContextMenu(HMENU hMenu, UINT indexMenu, UINT idCmdFirst, UINT idCmdLast, UINT uFlags)
{
	if ( uFlags & CMF_DEFAULTONLY )
	{
        return MAKE_HRESULT ( SEVERITY_SUCCESS, FACILITY_NULL, 0 );
	}

	InsertMenu(hMenu, indexMenu, MF_BYPOSITION | MF_SEPARATOR, 0, NULL);
	InsertMenu (hMenu, indexMenu+1, MF_BYPOSITION, idCmdFirst, _T("从这里进入cmd"));
	InsertMenu(hMenu, indexMenu+2, MF_BYPOSITION | MF_SEPARATOR, 0, NULL);
	return MAKE_HRESULT ( SEVERITY_SUCCESS, FACILITY_NULL, 1 );
}

STDMETHODIMP CShellExtern::InvokeCommand(LPCMINVOKECOMMANDINFO pInfo)
{
    if ( 0 != HIWORD( pInfo->lpVerb ))	//如果lpVerb指向字符串，则忽略此次调用并退出
	{
        return E_INVALIDARG;
	}
	
     if ( 0 != LOWORD( pInfo->lpVerb ))	//菜单项的ID必须为0，因为只添加了一个菜单项
 	{
         return E_INVALIDARG;
 	}

	ShellExecute(NULL, _T("open"), _T("cmd.exe"), _T(""), m_szPathName, SW_SHOWNORMAL);
	return S_OK;
}

STDMETHODIMP CShellExtern::GetCommandString (UINT uCmd, UINT uFlags, UINT* puReserved, LPSTR pszName, UINT cchMax )
{	
	static TCHAR COMMAND_HELP_STRING[] = _T("在当前目录打开cmd窗口...");//菜单提示字串
	USES_CONVERSION ;	//使用字串转换

 	if (uCmd != 0)
 	{
 		return E_INVALIDARG;
 	}

	if ( uFlags & GCS_HELPTEXT )
	{        
		if ( uFlags & GCS_UNICODE )
		{
			// pszName 变为Unicode 字符串, 并使用Unicode字符串拷贝 API.
			lstrcpynW ( (LPWSTR) pszName, T2CW(COMMAND_HELP_STRING), cchMax );
		}
		else
		{
			// 使用 ANSI 字符串拷贝 API 返回帮助字符串.
			lstrcpynA ( pszName, T2CA(COMMAND_HELP_STRING), cchMax );
		}
	}	
    return S_OK;
}
