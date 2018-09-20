/* this ALWAYS GENERATED file contains the definitions for the interfaces */


/* File created by MIDL compiler version 5.01.0164 */
/* at Fri Dec 24 14:56:58 2010
 */
/* Compiler settings for C:\Documents and Settings\wangqianzhou\×ÀÃæ\work_space\ShellExt\ShellExt.idl:
    Oicf (OptLev=i2), W1, Zp8, env=Win32, ms_ext, c_ext
    error checks: allocation ref bounds_check enum stub_data 
*/
//@@MIDL_FILE_HEADING(  )


/* verify that the <rpcndr.h> version is high enough to compile this file*/
#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 440
#endif

#include "rpc.h"
#include "rpcndr.h"

#ifndef __RPCNDR_H_VERSION__
#error this stub requires an updated version of <rpcndr.h>
#endif // __RPCNDR_H_VERSION__

#ifndef COM_NO_WINDOWS_H
#include "windows.h"
#include "ole2.h"
#endif /*COM_NO_WINDOWS_H*/

#ifndef __ShellExt_h__
#define __ShellExt_h__

#ifdef __cplusplus
extern "C"{
#endif 

/* Forward Declarations */ 

#ifndef __IShellExtern_FWD_DEFINED__
#define __IShellExtern_FWD_DEFINED__
typedef interface IShellExtern IShellExtern;
#endif 	/* __IShellExtern_FWD_DEFINED__ */


#ifndef __ShellExtern_FWD_DEFINED__
#define __ShellExtern_FWD_DEFINED__

#ifdef __cplusplus
typedef class ShellExtern ShellExtern;
#else
typedef struct ShellExtern ShellExtern;
#endif /* __cplusplus */

#endif 	/* __ShellExtern_FWD_DEFINED__ */


/* header files for imported files */
#include "oaidl.h"
#include "ocidl.h"

void __RPC_FAR * __RPC_USER MIDL_user_allocate(size_t);
void __RPC_USER MIDL_user_free( void __RPC_FAR * ); 

#ifndef __IShellExtern_INTERFACE_DEFINED__
#define __IShellExtern_INTERFACE_DEFINED__

/* interface IShellExtern */
/* [unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_IShellExtern;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("A10C6A18-6496-4D66-962E-1E4A2E2F8148")
    IShellExtern : public IDispatch
    {
    public:
    };
    
#else 	/* C style interface */

    typedef struct IShellExternVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            IShellExtern __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            IShellExtern __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            IShellExtern __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfoCount )( 
            IShellExtern __RPC_FAR * This,
            /* [out] */ UINT __RPC_FAR *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfo )( 
            IShellExtern __RPC_FAR * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo __RPC_FAR *__RPC_FAR *ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetIDsOfNames )( 
            IShellExtern __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR __RPC_FAR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID __RPC_FAR *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Invoke )( 
            IShellExtern __RPC_FAR * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS __RPC_FAR *pDispParams,
            /* [out] */ VARIANT __RPC_FAR *pVarResult,
            /* [out] */ EXCEPINFO __RPC_FAR *pExcepInfo,
            /* [out] */ UINT __RPC_FAR *puArgErr);
        
        END_INTERFACE
    } IShellExternVtbl;

    interface IShellExtern
    {
        CONST_VTBL struct IShellExternVtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IShellExtern_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IShellExtern_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IShellExtern_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IShellExtern_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define IShellExtern_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define IShellExtern_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define IShellExtern_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)


#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IShellExtern_INTERFACE_DEFINED__ */



#ifndef __SHELLEXTLib_LIBRARY_DEFINED__
#define __SHELLEXTLib_LIBRARY_DEFINED__

/* library SHELLEXTLib */
/* [helpstring][version][uuid] */ 


EXTERN_C const IID LIBID_SHELLEXTLib;

EXTERN_C const CLSID CLSID_ShellExtern;

#ifdef __cplusplus

class DECLSPEC_UUID("507925AE-6108-4D7C-AF2C-9DC5ACEFBBC5")
ShellExtern;
#endif
#endif /* __SHELLEXTLib_LIBRARY_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif
