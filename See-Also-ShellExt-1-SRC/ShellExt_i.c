/* this file contains the actual definitions of */
/* the IIDs and CLSIDs */

/* link this file in with the server and any clients */


/* File created by MIDL compiler version 5.01.0164 */
/* at Fri Dec 24 14:56:58 2010
 */
/* Compiler settings for C:\Documents and Settings\wangqianzhou\×ÀÃæ\work_space\ShellExt\ShellExt.idl:
    Oicf (OptLev=i2), W1, Zp8, env=Win32, ms_ext, c_ext
    error checks: allocation ref bounds_check enum stub_data 
*/
//@@MIDL_FILE_HEADING(  )
#ifdef __cplusplus
extern "C"{
#endif 


#ifndef __IID_DEFINED__
#define __IID_DEFINED__

typedef struct _IID
{
    unsigned long x;
    unsigned short s1;
    unsigned short s2;
    unsigned char  c[8];
} IID;

#endif // __IID_DEFINED__

#ifndef CLSID_DEFINED
#define CLSID_DEFINED
typedef IID CLSID;
#endif // CLSID_DEFINED

const IID IID_IShellExtern = {0xA10C6A18,0x6496,0x4D66,{0x96,0x2E,0x1E,0x4A,0x2E,0x2F,0x81,0x48}};


const IID LIBID_SHELLEXTLib = {0x930D29D1,0x24CF,0x4CAD,{0xAE,0xBD,0xFC,0x71,0x3A,0x71,0x05,0xB0}};


const CLSID CLSID_ShellExtern = {0x507925AE,0x6108,0x4D7C,{0xAF,0x2C,0x9D,0xC5,0xAC,0xEF,0xBB,0xC5}};


#ifdef __cplusplus
}
#endif

