

/* this ALWAYS GENERATED file contains the proxy stub code */


 /* File created by MIDL compiler version 7.00.0500 */
/* at Wed Feb 11 10:27:04 2009
 */
/* Compiler settings for C:\Program Files\Microsoft SDKs\Windows\v6.0A\Include\bits2_0.idl:
    Oicf, W1, Zp8, env=Win32 (32b run)
    protocol : dce , ms_ext, c_ext, robust
    error checks: allocation ref bounds_check enum stub_data 
    VC __declspec() decoration level: 
         __declspec(uuid()), __declspec(selectany), __declspec(novtable)
         DECLSPEC_UUID(), MIDL_INTERFACE()
*/
//@@MIDL_FILE_HEADING(  )

#if !defined(_M_IA64) && !defined(_M_AMD64)


#pragma warning( disable: 4049 )  /* more than 64k source lines */
#if _MSC_VER >= 1200
#pragma warning(push)
#endif

#pragma warning( disable: 4211 )  /* redefine extern to static */
#pragma warning( disable: 4232 )  /* dllimport identity*/
#pragma warning( disable: 4024 )  /* array to pointer mapping*/
#pragma warning( disable: 4152 )  /* function/data pointer conversion in expression */
#pragma warning( disable: 4100 ) /* unreferenced arguments in x86 call */

#pragma optimize("", off ) 

#define USE_STUBLESS_PROXY


/* verify that the <rpcproxy.h> version is high enough to compile this file*/
#ifndef __REDQ_RPCPROXY_H_VERSION__
#define __REQUIRED_RPCPROXY_H_VERSION__ 475
#endif


#include "rpcproxy.h"
#ifndef __RPCPROXY_H_VERSION__
#error this stub requires an updated version of <rpcproxy.h>
#endif // __RPCPROXY_H_VERSION__


#include "bits2_0.h"

#define TYPE_FORMAT_STRING_SIZE   63                                
#define PROC_FORMAT_STRING_SIZE   247                               
#define EXPR_FORMAT_STRING_SIZE   1                                 
#define TRANSMIT_AS_TABLE_SIZE    0            
#define WIRE_MARSHAL_TABLE_SIZE   0            

typedef struct _bits2_0_MIDL_TYPE_FORMAT_STRING
    {
    short          Pad;
    unsigned char  Format[ TYPE_FORMAT_STRING_SIZE ];
    } bits2_0_MIDL_TYPE_FORMAT_STRING;

typedef struct _bits2_0_MIDL_PROC_FORMAT_STRING
    {
    short          Pad;
    unsigned char  Format[ PROC_FORMAT_STRING_SIZE ];
    } bits2_0_MIDL_PROC_FORMAT_STRING;

typedef struct _bits2_0_MIDL_EXPR_FORMAT_STRING
    {
    long          Pad;
    unsigned char  Format[ EXPR_FORMAT_STRING_SIZE ];
    } bits2_0_MIDL_EXPR_FORMAT_STRING;


static RPC_SYNTAX_IDENTIFIER  _RpcTransferSyntax = 
{{0x8A885D04,0x1CEB,0x11C9,{0x9F,0xE8,0x08,0x00,0x2B,0x10,0x48,0x60}},{2,0}};


extern const bits2_0_MIDL_TYPE_FORMAT_STRING bits2_0__MIDL_TypeFormatString;
extern const bits2_0_MIDL_PROC_FORMAT_STRING bits2_0__MIDL_ProcFormatString;
extern const bits2_0_MIDL_EXPR_FORMAT_STRING bits2_0__MIDL_ExprFormatString;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IBackgroundCopyJob3_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IBackgroundCopyJob3_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IBackgroundCopyFile2_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IBackgroundCopyFile2_ProxyInfo;



#if !defined(__RPC_WIN32__)
#error  Invalid build platform for this stub.
#endif

#if !(TARGET_IS_NT50_OR_LATER)
#error You need a Windows 2000 or later to run this stub because it uses these features:
#error   /robust command line switch.
#error However, your C/C++ compilation flags indicate you intend to run this app on earlier systems.
#error This app will fail with the RPC_X_WRONG_STUB_VERSION error.
#endif


static const bits2_0_MIDL_PROC_FORMAT_STRING bits2_0__MIDL_ProcFormatString =
    {
        0,
        {

	/* Procedure ReplaceRemotePrefix */

			0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/*  2 */	NdrFcLong( 0x0 ),	/* 0 */
/*  6 */	NdrFcShort( 0x2b ),	/* 43 */
/*  8 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 10 */	NdrFcShort( 0x0 ),	/* 0 */
/* 12 */	NdrFcShort( 0x8 ),	/* 8 */
/* 14 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 16 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 18 */	NdrFcShort( 0x0 ),	/* 0 */
/* 20 */	NdrFcShort( 0x0 ),	/* 0 */
/* 22 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter OldPrefix */

/* 24 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 26 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 28 */	NdrFcShort( 0x4 ),	/* Type Offset=4 */

	/* Parameter NewPrefix */

/* 30 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 32 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 34 */	NdrFcShort( 0x4 ),	/* Type Offset=4 */

	/* Return value */

/* 36 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 38 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 40 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure AddFileWithRanges */

/* 42 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 44 */	NdrFcLong( 0x0 ),	/* 0 */
/* 48 */	NdrFcShort( 0x2c ),	/* 44 */
/* 50 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 52 */	NdrFcShort( 0x8 ),	/* 8 */
/* 54 */	NdrFcShort( 0x8 ),	/* 8 */
/* 56 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x5,		/* 5 */
/* 58 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 60 */	NdrFcShort( 0x0 ),	/* 0 */
/* 62 */	NdrFcShort( 0x1 ),	/* 1 */
/* 64 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter RemoteUrl */

/* 66 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 68 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 70 */	NdrFcShort( 0x4 ),	/* Type Offset=4 */

	/* Parameter LocalName */

/* 72 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 74 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 76 */	NdrFcShort( 0x4 ),	/* Type Offset=4 */

	/* Parameter RangeCount */

/* 78 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 80 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 82 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter Ranges */

/* 84 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 86 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 88 */	NdrFcShort( 0xe ),	/* Type Offset=14 */

	/* Return value */

/* 90 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 92 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 94 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure SetFileACLFlags */

/* 96 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 98 */	NdrFcLong( 0x0 ),	/* 0 */
/* 102 */	NdrFcShort( 0x2d ),	/* 45 */
/* 104 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 106 */	NdrFcShort( 0x8 ),	/* 8 */
/* 108 */	NdrFcShort( 0x8 ),	/* 8 */
/* 110 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 112 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 114 */	NdrFcShort( 0x0 ),	/* 0 */
/* 116 */	NdrFcShort( 0x0 ),	/* 0 */
/* 118 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter Flags */

/* 120 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 122 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 124 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 126 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 128 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 130 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetFileACLFlags */

/* 132 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 134 */	NdrFcLong( 0x0 ),	/* 0 */
/* 138 */	NdrFcShort( 0x2e ),	/* 46 */
/* 140 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 142 */	NdrFcShort( 0x0 ),	/* 0 */
/* 144 */	NdrFcShort( 0x24 ),	/* 36 */
/* 146 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 148 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 150 */	NdrFcShort( 0x0 ),	/* 0 */
/* 152 */	NdrFcShort( 0x0 ),	/* 0 */
/* 154 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter Flags */

/* 156 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 158 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 160 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 162 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 164 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 166 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetFileRanges */

/* 168 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 170 */	NdrFcLong( 0x0 ),	/* 0 */
/* 174 */	NdrFcShort( 0x6 ),	/* 6 */
/* 176 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 178 */	NdrFcShort( 0x1c ),	/* 28 */
/* 180 */	NdrFcShort( 0x24 ),	/* 36 */
/* 182 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x3,		/* 3 */
/* 184 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 186 */	NdrFcShort( 0x1 ),	/* 1 */
/* 188 */	NdrFcShort( 0x0 ),	/* 0 */
/* 190 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter RangeCount */

/* 192 */	NdrFcShort( 0x1a ),	/* Flags:  must free, in, out, */
/* 194 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 196 */	NdrFcShort( 0x22 ),	/* Type Offset=34 */

	/* Parameter Ranges */

/* 198 */	NdrFcShort( 0x2013 ),	/* Flags:  must size, must free, out, srv alloc size=8 */
/* 200 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 202 */	NdrFcShort( 0x26 ),	/* Type Offset=38 */

	/* Return value */

/* 204 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 206 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 208 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure SetRemoteName */

/* 210 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 212 */	NdrFcLong( 0x0 ),	/* 0 */
/* 216 */	NdrFcShort( 0x7 ),	/* 7 */
/* 218 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 220 */	NdrFcShort( 0x0 ),	/* 0 */
/* 222 */	NdrFcShort( 0x8 ),	/* 8 */
/* 224 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 226 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 228 */	NdrFcShort( 0x0 ),	/* 0 */
/* 230 */	NdrFcShort( 0x0 ),	/* 0 */
/* 232 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter Val */

/* 234 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 236 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 238 */	NdrFcShort( 0x4 ),	/* Type Offset=4 */

	/* Return value */

/* 240 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 242 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 244 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

			0x0
        }
    };

static const bits2_0_MIDL_TYPE_FORMAT_STRING bits2_0__MIDL_TypeFormatString =
    {
        0,
        {
			NdrFcShort( 0x0 ),	/* 0 */
/*  2 */	
			0x11, 0x8,	/* FC_RP [simple_pointer] */
/*  4 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/*  6 */	
			0x15,		/* FC_STRUCT */
			0x7,		/* 7 */
/*  8 */	NdrFcShort( 0x10 ),	/* 16 */
/* 10 */	0xb,		/* FC_HYPER */
			0xb,		/* FC_HYPER */
/* 12 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 14 */	
			0x1b,		/* FC_CARRAY */
			0x7,		/* 7 */
/* 16 */	NdrFcShort( 0x10 ),	/* 16 */
/* 18 */	0x29,		/* Corr desc:  parameter, FC_ULONG */
			0x0,		/*  */
/* 20 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 22 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 24 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 26 */	NdrFcShort( 0xffec ),	/* Offset= -20 (6) */
/* 28 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 30 */	
			0x11, 0xc,	/* FC_RP [alloced_on_stack] [simple_pointer] */
/* 32 */	0x8,		/* FC_LONG */
			0x5c,		/* FC_PAD */
/* 34 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 36 */	0x8,		/* FC_LONG */
			0x5c,		/* FC_PAD */
/* 38 */	
			0x11, 0x14,	/* FC_RP [alloced_on_stack] [pointer_deref] */
/* 40 */	NdrFcShort( 0x2 ),	/* Offset= 2 (42) */
/* 42 */	
			0x13, 0x0,	/* FC_OP */
/* 44 */	NdrFcShort( 0x2 ),	/* Offset= 2 (46) */
/* 46 */	
			0x1b,		/* FC_CARRAY */
			0x7,		/* 7 */
/* 48 */	NdrFcShort( 0x10 ),	/* 16 */
/* 50 */	0x29,		/* Corr desc:  parameter, FC_ULONG */
			0x54,		/* FC_DEREFERENCE */
/* 52 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 54 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 56 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 58 */	NdrFcShort( 0xffcc ),	/* Offset= -52 (6) */
/* 60 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */

			0x0
        }
    };


/* Standard interface: __MIDL_itf_bits2_0_0000_0000, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Object interface: IUnknown, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}} */


/* Object interface: IBackgroundCopyJob, ver. 0.0,
   GUID={0x37668d37,0x507e,0x4160,{0x93,0x16,0x26,0x30,0x6d,0x15,0x0b,0x12}} */


/* Object interface: IBackgroundCopyJob2, ver. 0.0,
   GUID={0x54b50739,0x686f,0x45eb,{0x9d,0xff,0xd6,0xa9,0xa0,0xfa,0xa9,0xaf}} */


/* Object interface: IBackgroundCopyJob3, ver. 0.0,
   GUID={0x443c8934,0x90ff,0x48ed,{0xbc,0xde,0x26,0xf5,0xc7,0x45,0x00,0x42}} */

#pragma code_seg(".orpc")
static const unsigned short IBackgroundCopyJob3_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    0,
    42,
    96,
    132
    };

static const MIDL_STUBLESS_PROXY_INFO IBackgroundCopyJob3_ProxyInfo =
    {
    &Object_StubDesc,
    bits2_0__MIDL_ProcFormatString.Format,
    &IBackgroundCopyJob3_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IBackgroundCopyJob3_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    bits2_0__MIDL_ProcFormatString.Format,
    &IBackgroundCopyJob3_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(47) _IBackgroundCopyJob3ProxyVtbl = 
{
    &IBackgroundCopyJob3_ProxyInfo,
    &IID_IBackgroundCopyJob3,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* (void *) (INT_PTR) -1 /* IBackgroundCopyJob::AddFileSet */ ,
    0 /* (void *) (INT_PTR) -1 /* IBackgroundCopyJob::AddFile */ ,
    0 /* (void *) (INT_PTR) -1 /* IBackgroundCopyJob::EnumFiles */ ,
    0 /* (void *) (INT_PTR) -1 /* IBackgroundCopyJob::Suspend */ ,
    0 /* (void *) (INT_PTR) -1 /* IBackgroundCopyJob::Resume */ ,
    0 /* (void *) (INT_PTR) -1 /* IBackgroundCopyJob::Cancel */ ,
    0 /* (void *) (INT_PTR) -1 /* IBackgroundCopyJob::Complete */ ,
    0 /* (void *) (INT_PTR) -1 /* IBackgroundCopyJob::GetId */ ,
    0 /* (void *) (INT_PTR) -1 /* IBackgroundCopyJob::GetType */ ,
    0 /* (void *) (INT_PTR) -1 /* IBackgroundCopyJob::GetProgress */ ,
    0 /* (void *) (INT_PTR) -1 /* IBackgroundCopyJob::GetTimes */ ,
    0 /* (void *) (INT_PTR) -1 /* IBackgroundCopyJob::GetState */ ,
    0 /* (void *) (INT_PTR) -1 /* IBackgroundCopyJob::GetError */ ,
    0 /* (void *) (INT_PTR) -1 /* IBackgroundCopyJob::GetOwner */ ,
    0 /* (void *) (INT_PTR) -1 /* IBackgroundCopyJob::SetDisplayName */ ,
    0 /* (void *) (INT_PTR) -1 /* IBackgroundCopyJob::GetDisplayName */ ,
    0 /* (void *) (INT_PTR) -1 /* IBackgroundCopyJob::SetDescription */ ,
    0 /* (void *) (INT_PTR) -1 /* IBackgroundCopyJob::GetDescription */ ,
    0 /* (void *) (INT_PTR) -1 /* IBackgroundCopyJob::SetPriority */ ,
    0 /* (void *) (INT_PTR) -1 /* IBackgroundCopyJob::GetPriority */ ,
    0 /* (void *) (INT_PTR) -1 /* IBackgroundCopyJob::SetNotifyFlags */ ,
    0 /* (void *) (INT_PTR) -1 /* IBackgroundCopyJob::GetNotifyFlags */ ,
    0 /* (void *) (INT_PTR) -1 /* IBackgroundCopyJob::SetNotifyInterface */ ,
    0 /* (void *) (INT_PTR) -1 /* IBackgroundCopyJob::GetNotifyInterface */ ,
    0 /* (void *) (INT_PTR) -1 /* IBackgroundCopyJob::SetMinimumRetryDelay */ ,
    0 /* (void *) (INT_PTR) -1 /* IBackgroundCopyJob::GetMinimumRetryDelay */ ,
    0 /* (void *) (INT_PTR) -1 /* IBackgroundCopyJob::SetNoProgressTimeout */ ,
    0 /* (void *) (INT_PTR) -1 /* IBackgroundCopyJob::GetNoProgressTimeout */ ,
    0 /* (void *) (INT_PTR) -1 /* IBackgroundCopyJob::GetErrorCount */ ,
    0 /* (void *) (INT_PTR) -1 /* IBackgroundCopyJob::SetProxySettings */ ,
    0 /* (void *) (INT_PTR) -1 /* IBackgroundCopyJob::GetProxySettings */ ,
    0 /* (void *) (INT_PTR) -1 /* IBackgroundCopyJob::TakeOwnership */ ,
    0 /* (void *) (INT_PTR) -1 /* IBackgroundCopyJob2::SetNotifyCmdLine */ ,
    0 /* (void *) (INT_PTR) -1 /* IBackgroundCopyJob2::GetNotifyCmdLine */ ,
    0 /* (void *) (INT_PTR) -1 /* IBackgroundCopyJob2::GetReplyProgress */ ,
    0 /* (void *) (INT_PTR) -1 /* IBackgroundCopyJob2::GetReplyData */ ,
    0 /* (void *) (INT_PTR) -1 /* IBackgroundCopyJob2::SetReplyFileName */ ,
    0 /* (void *) (INT_PTR) -1 /* IBackgroundCopyJob2::GetReplyFileName */ ,
    0 /* (void *) (INT_PTR) -1 /* IBackgroundCopyJob2::SetCredentials */ ,
    0 /* (void *) (INT_PTR) -1 /* IBackgroundCopyJob2::RemoveCredentials */ ,
    (void *) (INT_PTR) -1 /* IBackgroundCopyJob3::ReplaceRemotePrefix */ ,
    (void *) (INT_PTR) -1 /* IBackgroundCopyJob3::AddFileWithRanges */ ,
    (void *) (INT_PTR) -1 /* IBackgroundCopyJob3::SetFileACLFlags */ ,
    (void *) (INT_PTR) -1 /* IBackgroundCopyJob3::GetFileACLFlags */
};


static const PRPC_STUB_FUNCTION IBackgroundCopyJob3_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2
};

CInterfaceStubVtbl _IBackgroundCopyJob3StubVtbl =
{
    &IID_IBackgroundCopyJob3,
    &IBackgroundCopyJob3_ServerInfo,
    47,
    &IBackgroundCopyJob3_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Object interface: IBackgroundCopyFile, ver. 0.0,
   GUID={0x01b7bd23,0xfb88,0x4a77,{0x84,0x90,0x58,0x91,0xd3,0xe4,0x65,0x3a}} */


/* Object interface: IBackgroundCopyFile2, ver. 0.0,
   GUID={0x83e81b93,0x0873,0x474d,{0x8a,0x8c,0xf2,0x01,0x8b,0x1a,0x93,0x9c}} */

#pragma code_seg(".orpc")
static const unsigned short IBackgroundCopyFile2_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    168,
    210
    };

static const MIDL_STUBLESS_PROXY_INFO IBackgroundCopyFile2_ProxyInfo =
    {
    &Object_StubDesc,
    bits2_0__MIDL_ProcFormatString.Format,
    &IBackgroundCopyFile2_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IBackgroundCopyFile2_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    bits2_0__MIDL_ProcFormatString.Format,
    &IBackgroundCopyFile2_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(8) _IBackgroundCopyFile2ProxyVtbl = 
{
    &IBackgroundCopyFile2_ProxyInfo,
    &IID_IBackgroundCopyFile2,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* (void *) (INT_PTR) -1 /* IBackgroundCopyFile::GetRemoteName */ ,
    0 /* (void *) (INT_PTR) -1 /* IBackgroundCopyFile::GetLocalName */ ,
    0 /* (void *) (INT_PTR) -1 /* IBackgroundCopyFile::GetProgress */ ,
    (void *) (INT_PTR) -1 /* IBackgroundCopyFile2::GetFileRanges */ ,
    (void *) (INT_PTR) -1 /* IBackgroundCopyFile2::SetRemoteName */
};


static const PRPC_STUB_FUNCTION IBackgroundCopyFile2_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall2,
    NdrStubCall2
};

CInterfaceStubVtbl _IBackgroundCopyFile2StubVtbl =
{
    &IID_IBackgroundCopyFile2,
    &IBackgroundCopyFile2_ServerInfo,
    8,
    &IBackgroundCopyFile2_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Standard interface: __MIDL_itf_bits2_0_0000_0002, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */

static const MIDL_STUB_DESC Object_StubDesc = 
    {
    0,
    NdrOleAllocate,
    NdrOleFree,
    0,
    0,
    0,
    0,
    0,
    bits2_0__MIDL_TypeFormatString.Format,
    1, /* -error bounds_check flag */
    0x50002, /* Ndr library version */
    0,
    0x70001f4, /* MIDL Version 7.0.500 */
    0,
    0,
    0,  /* notify & notify_flag routine table */
    0x1, /* MIDL flag */
    0, /* cs routines */
    0,   /* proxy/server info */
    0
    };

const CInterfaceProxyVtbl * _bits2_0_ProxyVtblList[] = 
{
    ( CInterfaceProxyVtbl *) &_IBackgroundCopyJob3ProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IBackgroundCopyFile2ProxyVtbl,
    0
};

const CInterfaceStubVtbl * _bits2_0_StubVtblList[] = 
{
    ( CInterfaceStubVtbl *) &_IBackgroundCopyJob3StubVtbl,
    ( CInterfaceStubVtbl *) &_IBackgroundCopyFile2StubVtbl,
    0
};

PCInterfaceName const _bits2_0_InterfaceNamesList[] = 
{
    "IBackgroundCopyJob3",
    "IBackgroundCopyFile2",
    0
};

const IID *  _bits2_0_BaseIIDList[] = 
{
    &IID_IBackgroundCopyJob2,
    &IID_IBackgroundCopyFile,
    0
};


#define _bits2_0_CHECK_IID(n)	IID_GENERIC_CHECK_IID( _bits2_0, pIID, n)

int __stdcall _bits2_0_IID_Lookup( const IID * pIID, int * pIndex )
{
    IID_BS_LOOKUP_SETUP

    IID_BS_LOOKUP_INITIAL_TEST( _bits2_0, 2, 1 )
    IID_BS_LOOKUP_RETURN_RESULT( _bits2_0, 2, *pIndex )
    
}

const ExtendedProxyFileInfo bits2_0_ProxyFileInfo = 
{
    (PCInterfaceProxyVtblList *) & _bits2_0_ProxyVtblList,
    (PCInterfaceStubVtblList *) & _bits2_0_StubVtblList,
    (const PCInterfaceName * ) & _bits2_0_InterfaceNamesList,
    (const IID ** ) & _bits2_0_BaseIIDList,
    & _bits2_0_IID_Lookup, 
    2,
    2,
    0, /* table of [async_uuid] interfaces */
    0, /* Filler1 */
    0, /* Filler2 */
    0  /* Filler3 */
};
#pragma optimize("", on )
#if _MSC_VER >= 1200
#pragma warning(pop)
#endif


#endif /* !defined(_M_IA64) && !defined(_M_AMD64)*/

