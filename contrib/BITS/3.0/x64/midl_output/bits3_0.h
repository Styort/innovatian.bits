

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 7.00.0500 */
/* at Wed Feb 11 10:29:13 2009
 */
/* Compiler settings for C:\Program Files\Microsoft SDKs\Windows\v6.0A\Include\bits3_0.idl:
    Oicf, W1, Zp8, env=Win64 (32b run)
    protocol : dce , ms_ext, c_ext, robust
    error checks: allocation ref bounds_check enum stub_data 
    VC __declspec() decoration level: 
         __declspec(uuid()), __declspec(selectany), __declspec(novtable)
         DECLSPEC_UUID(), MIDL_INTERFACE()
*/
//@@MIDL_FILE_HEADING(  )

#pragma warning( disable: 4049 )  /* more than 64k source lines */


/* verify that the <rpcndr.h> version is high enough to compile this file*/
#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 475
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

#ifndef __bits3_0_h__
#define __bits3_0_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef __IBitsPeerCacheRecord_FWD_DEFINED__
#define __IBitsPeerCacheRecord_FWD_DEFINED__
typedef interface IBitsPeerCacheRecord IBitsPeerCacheRecord;
#endif 	/* __IBitsPeerCacheRecord_FWD_DEFINED__ */


#ifndef __IEnumBitsPeerCacheRecords_FWD_DEFINED__
#define __IEnumBitsPeerCacheRecords_FWD_DEFINED__
typedef interface IEnumBitsPeerCacheRecords IEnumBitsPeerCacheRecords;
#endif 	/* __IEnumBitsPeerCacheRecords_FWD_DEFINED__ */


#ifndef __IBitsPeer_FWD_DEFINED__
#define __IBitsPeer_FWD_DEFINED__
typedef interface IBitsPeer IBitsPeer;
#endif 	/* __IBitsPeer_FWD_DEFINED__ */


#ifndef __IEnumBitsPeers_FWD_DEFINED__
#define __IEnumBitsPeers_FWD_DEFINED__
typedef interface IEnumBitsPeers IEnumBitsPeers;
#endif 	/* __IEnumBitsPeers_FWD_DEFINED__ */


#ifndef __IBitsPeerCacheAdministration_FWD_DEFINED__
#define __IBitsPeerCacheAdministration_FWD_DEFINED__
typedef interface IBitsPeerCacheAdministration IBitsPeerCacheAdministration;
#endif 	/* __IBitsPeerCacheAdministration_FWD_DEFINED__ */


#ifndef __IBackgroundCopyJob4_FWD_DEFINED__
#define __IBackgroundCopyJob4_FWD_DEFINED__
typedef interface IBackgroundCopyJob4 IBackgroundCopyJob4;
#endif 	/* __IBackgroundCopyJob4_FWD_DEFINED__ */


#ifndef __IBackgroundCopyFile3_FWD_DEFINED__
#define __IBackgroundCopyFile3_FWD_DEFINED__
typedef interface IBackgroundCopyFile3 IBackgroundCopyFile3;
#endif 	/* __IBackgroundCopyFile3_FWD_DEFINED__ */


#ifndef __IBackgroundCopyCallback2_FWD_DEFINED__
#define __IBackgroundCopyCallback2_FWD_DEFINED__
typedef interface IBackgroundCopyCallback2 IBackgroundCopyCallback2;
#endif 	/* __IBackgroundCopyCallback2_FWD_DEFINED__ */


#ifndef __BackgroundCopyManager3_0_FWD_DEFINED__
#define __BackgroundCopyManager3_0_FWD_DEFINED__

#ifdef __cplusplus
typedef class BackgroundCopyManager3_0 BackgroundCopyManager3_0;
#else
typedef struct BackgroundCopyManager3_0 BackgroundCopyManager3_0;
#endif /* __cplusplus */

#endif 	/* __BackgroundCopyManager3_0_FWD_DEFINED__ */


#ifndef __IBackgroundCopyJob4_FWD_DEFINED__
#define __IBackgroundCopyJob4_FWD_DEFINED__
typedef interface IBackgroundCopyJob4 IBackgroundCopyJob4;
#endif 	/* __IBackgroundCopyJob4_FWD_DEFINED__ */


/* header files for imported files */
#include "bits.h"
#include "bits1_5.h"
#include "bits2_0.h"
#include "bits2_5.h"

#ifdef __cplusplus
extern "C"{
#endif 


#ifndef __IBitsPeerCacheRecord_INTERFACE_DEFINED__
#define __IBitsPeerCacheRecord_INTERFACE_DEFINED__

/* interface IBitsPeerCacheRecord */
/* [object][helpstring][uuid] */ 


EXTERN_C const IID IID_IBitsPeerCacheRecord;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("659cdeaf-489e-11d9-a9cd-000d56965251")
    IBitsPeerCacheRecord : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetId( 
            /* [ref][out] */ GUID *pVal) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetOriginUrl( 
            /* [out] */ LPWSTR *pVal) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetFileSize( 
            /* [ref][out] */ UINT64 *pVal) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetFileModificationTime( 
            /* [ref][out] */ FILETIME *pVal) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetLastAccessTime( 
            /* [ref][out] */ FILETIME *pVal) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE IsFileValidated( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetFileRanges( 
            /* [ref][out] */ DWORD *pRangeCount,
            /* [size_is][size_is][out] */ BG_FILE_RANGE **ppRanges) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IBitsPeerCacheRecordVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IBitsPeerCacheRecord * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IBitsPeerCacheRecord * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IBitsPeerCacheRecord * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetId )( 
            IBitsPeerCacheRecord * This,
            /* [ref][out] */ GUID *pVal);
        
        HRESULT ( STDMETHODCALLTYPE *GetOriginUrl )( 
            IBitsPeerCacheRecord * This,
            /* [out] */ LPWSTR *pVal);
        
        HRESULT ( STDMETHODCALLTYPE *GetFileSize )( 
            IBitsPeerCacheRecord * This,
            /* [ref][out] */ UINT64 *pVal);
        
        HRESULT ( STDMETHODCALLTYPE *GetFileModificationTime )( 
            IBitsPeerCacheRecord * This,
            /* [ref][out] */ FILETIME *pVal);
        
        HRESULT ( STDMETHODCALLTYPE *GetLastAccessTime )( 
            IBitsPeerCacheRecord * This,
            /* [ref][out] */ FILETIME *pVal);
        
        HRESULT ( STDMETHODCALLTYPE *IsFileValidated )( 
            IBitsPeerCacheRecord * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetFileRanges )( 
            IBitsPeerCacheRecord * This,
            /* [ref][out] */ DWORD *pRangeCount,
            /* [size_is][size_is][out] */ BG_FILE_RANGE **ppRanges);
        
        END_INTERFACE
    } IBitsPeerCacheRecordVtbl;

    interface IBitsPeerCacheRecord
    {
        CONST_VTBL struct IBitsPeerCacheRecordVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IBitsPeerCacheRecord_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IBitsPeerCacheRecord_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IBitsPeerCacheRecord_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IBitsPeerCacheRecord_GetId(This,pVal)	\
    ( (This)->lpVtbl -> GetId(This,pVal) ) 

#define IBitsPeerCacheRecord_GetOriginUrl(This,pVal)	\
    ( (This)->lpVtbl -> GetOriginUrl(This,pVal) ) 

#define IBitsPeerCacheRecord_GetFileSize(This,pVal)	\
    ( (This)->lpVtbl -> GetFileSize(This,pVal) ) 

#define IBitsPeerCacheRecord_GetFileModificationTime(This,pVal)	\
    ( (This)->lpVtbl -> GetFileModificationTime(This,pVal) ) 

#define IBitsPeerCacheRecord_GetLastAccessTime(This,pVal)	\
    ( (This)->lpVtbl -> GetLastAccessTime(This,pVal) ) 

#define IBitsPeerCacheRecord_IsFileValidated(This)	\
    ( (This)->lpVtbl -> IsFileValidated(This) ) 

#define IBitsPeerCacheRecord_GetFileRanges(This,pRangeCount,ppRanges)	\
    ( (This)->lpVtbl -> GetFileRanges(This,pRangeCount,ppRanges) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IBitsPeerCacheRecord_INTERFACE_DEFINED__ */


#ifndef __IEnumBitsPeerCacheRecords_INTERFACE_DEFINED__
#define __IEnumBitsPeerCacheRecords_INTERFACE_DEFINED__

/* interface IEnumBitsPeerCacheRecords */
/* [object][helpstring][uuid] */ 


EXTERN_C const IID IID_IEnumBitsPeerCacheRecords;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("659cdea4-489e-11d9-a9cd-000d56965251")
    IEnumBitsPeerCacheRecords : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE Next( 
            /* [in] */ ULONG celt,
            /* [length_is][size_is][out] */ IBitsPeerCacheRecord **rgelt,
            /* [unique][out][in] */ ULONG *pceltFetched) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Skip( 
            /* [in] */ ULONG celt) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Reset( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Clone( 
            /* [out] */ IEnumBitsPeerCacheRecords **ppenum) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetCount( 
            /* [out] */ ULONG *puCount) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IEnumBitsPeerCacheRecordsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IEnumBitsPeerCacheRecords * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IEnumBitsPeerCacheRecords * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IEnumBitsPeerCacheRecords * This);
        
        HRESULT ( STDMETHODCALLTYPE *Next )( 
            IEnumBitsPeerCacheRecords * This,
            /* [in] */ ULONG celt,
            /* [length_is][size_is][out] */ IBitsPeerCacheRecord **rgelt,
            /* [unique][out][in] */ ULONG *pceltFetched);
        
        HRESULT ( STDMETHODCALLTYPE *Skip )( 
            IEnumBitsPeerCacheRecords * This,
            /* [in] */ ULONG celt);
        
        HRESULT ( STDMETHODCALLTYPE *Reset )( 
            IEnumBitsPeerCacheRecords * This);
        
        HRESULT ( STDMETHODCALLTYPE *Clone )( 
            IEnumBitsPeerCacheRecords * This,
            /* [out] */ IEnumBitsPeerCacheRecords **ppenum);
        
        HRESULT ( STDMETHODCALLTYPE *GetCount )( 
            IEnumBitsPeerCacheRecords * This,
            /* [out] */ ULONG *puCount);
        
        END_INTERFACE
    } IEnumBitsPeerCacheRecordsVtbl;

    interface IEnumBitsPeerCacheRecords
    {
        CONST_VTBL struct IEnumBitsPeerCacheRecordsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IEnumBitsPeerCacheRecords_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IEnumBitsPeerCacheRecords_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IEnumBitsPeerCacheRecords_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IEnumBitsPeerCacheRecords_Next(This,celt,rgelt,pceltFetched)	\
    ( (This)->lpVtbl -> Next(This,celt,rgelt,pceltFetched) ) 

#define IEnumBitsPeerCacheRecords_Skip(This,celt)	\
    ( (This)->lpVtbl -> Skip(This,celt) ) 

#define IEnumBitsPeerCacheRecords_Reset(This)	\
    ( (This)->lpVtbl -> Reset(This) ) 

#define IEnumBitsPeerCacheRecords_Clone(This,ppenum)	\
    ( (This)->lpVtbl -> Clone(This,ppenum) ) 

#define IEnumBitsPeerCacheRecords_GetCount(This,puCount)	\
    ( (This)->lpVtbl -> GetCount(This,puCount) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IEnumBitsPeerCacheRecords_INTERFACE_DEFINED__ */


#ifndef __IBitsPeer_INTERFACE_DEFINED__
#define __IBitsPeer_INTERFACE_DEFINED__

/* interface IBitsPeer */
/* [object][helpstring][uuid] */ 


EXTERN_C const IID IID_IBitsPeer;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("659cdea2-489e-11d9-a9cd-000d56965251")
    IBitsPeer : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetPeerName( 
            /* [ref][out] */ LPWSTR *pName) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE IsAuthenticated( 
            /* [ref][out] */ BOOL *pAuth) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE IsAvailable( 
            /* [ref][out] */ BOOL *pOnline) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IBitsPeerVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IBitsPeer * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IBitsPeer * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IBitsPeer * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetPeerName )( 
            IBitsPeer * This,
            /* [ref][out] */ LPWSTR *pName);
        
        HRESULT ( STDMETHODCALLTYPE *IsAuthenticated )( 
            IBitsPeer * This,
            /* [ref][out] */ BOOL *pAuth);
        
        HRESULT ( STDMETHODCALLTYPE *IsAvailable )( 
            IBitsPeer * This,
            /* [ref][out] */ BOOL *pOnline);
        
        END_INTERFACE
    } IBitsPeerVtbl;

    interface IBitsPeer
    {
        CONST_VTBL struct IBitsPeerVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IBitsPeer_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IBitsPeer_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IBitsPeer_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IBitsPeer_GetPeerName(This,pName)	\
    ( (This)->lpVtbl -> GetPeerName(This,pName) ) 

#define IBitsPeer_IsAuthenticated(This,pAuth)	\
    ( (This)->lpVtbl -> IsAuthenticated(This,pAuth) ) 

#define IBitsPeer_IsAvailable(This,pOnline)	\
    ( (This)->lpVtbl -> IsAvailable(This,pOnline) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IBitsPeer_INTERFACE_DEFINED__ */


#ifndef __IEnumBitsPeers_INTERFACE_DEFINED__
#define __IEnumBitsPeers_INTERFACE_DEFINED__

/* interface IEnumBitsPeers */
/* [object][helpstring][uuid] */ 


EXTERN_C const IID IID_IEnumBitsPeers;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("659cdea5-489e-11d9-a9cd-000d56965251")
    IEnumBitsPeers : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE Next( 
            /* [in] */ ULONG celt,
            /* [length_is][size_is][out] */ IBitsPeer **rgelt,
            /* [unique][out][in] */ ULONG *pceltFetched) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Skip( 
            /* [in] */ ULONG celt) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Reset( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Clone( 
            /* [out] */ IEnumBitsPeers **ppenum) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetCount( 
            /* [out] */ ULONG *puCount) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IEnumBitsPeersVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IEnumBitsPeers * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IEnumBitsPeers * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IEnumBitsPeers * This);
        
        HRESULT ( STDMETHODCALLTYPE *Next )( 
            IEnumBitsPeers * This,
            /* [in] */ ULONG celt,
            /* [length_is][size_is][out] */ IBitsPeer **rgelt,
            /* [unique][out][in] */ ULONG *pceltFetched);
        
        HRESULT ( STDMETHODCALLTYPE *Skip )( 
            IEnumBitsPeers * This,
            /* [in] */ ULONG celt);
        
        HRESULT ( STDMETHODCALLTYPE *Reset )( 
            IEnumBitsPeers * This);
        
        HRESULT ( STDMETHODCALLTYPE *Clone )( 
            IEnumBitsPeers * This,
            /* [out] */ IEnumBitsPeers **ppenum);
        
        HRESULT ( STDMETHODCALLTYPE *GetCount )( 
            IEnumBitsPeers * This,
            /* [out] */ ULONG *puCount);
        
        END_INTERFACE
    } IEnumBitsPeersVtbl;

    interface IEnumBitsPeers
    {
        CONST_VTBL struct IEnumBitsPeersVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IEnumBitsPeers_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IEnumBitsPeers_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IEnumBitsPeers_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IEnumBitsPeers_Next(This,celt,rgelt,pceltFetched)	\
    ( (This)->lpVtbl -> Next(This,celt,rgelt,pceltFetched) ) 

#define IEnumBitsPeers_Skip(This,celt)	\
    ( (This)->lpVtbl -> Skip(This,celt) ) 

#define IEnumBitsPeers_Reset(This)	\
    ( (This)->lpVtbl -> Reset(This) ) 

#define IEnumBitsPeers_Clone(This,ppenum)	\
    ( (This)->lpVtbl -> Clone(This,ppenum) ) 

#define IEnumBitsPeers_GetCount(This,puCount)	\
    ( (This)->lpVtbl -> GetCount(This,puCount) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IEnumBitsPeers_INTERFACE_DEFINED__ */


#ifndef __IBitsPeerCacheAdministration_INTERFACE_DEFINED__
#define __IBitsPeerCacheAdministration_INTERFACE_DEFINED__

/* interface IBitsPeerCacheAdministration */
/* [object][helpstring][uuid] */ 

#define   BG_ENABLE_PEERCACHING_CLIENT   0x0001
#define   BG_ENABLE_PEERCACHING_SERVER   0x0002

EXTERN_C const IID IID_IBitsPeerCacheAdministration;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("659cdead-489e-11d9-a9cd-000d56965251")
    IBitsPeerCacheAdministration : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetMaximumCacheSize( 
            /* [out][ref] */ DWORD *pBytes) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetMaximumCacheSize( 
            DWORD Bytes) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetMaximumContentAge( 
            /* [out][ref] */ ULONG *pSeconds) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetMaximumContentAge( 
            ULONG Seconds) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetConfigurationFlags( 
            /* [out][ref] */ DWORD *pFlags) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetConfigurationFlags( 
            DWORD Flags) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE EnumRecords( 
            /* [out] */ IEnumBitsPeerCacheRecords **ppEnum) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetRecord( 
            /* [in] */ REFGUID id,
            /* [out] */ IBitsPeerCacheRecord **ppRecord) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE ClearRecords( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE DeleteRecord( 
            /* [in] */ REFGUID id) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE DeleteUrl( 
            /* [ref][in] */ LPCWSTR url) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE EnumPeers( 
            /* [ref][out] */ IEnumBitsPeers **ppEnum) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE ClearPeers( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE DiscoverPeers( void) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IBitsPeerCacheAdministrationVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IBitsPeerCacheAdministration * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IBitsPeerCacheAdministration * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IBitsPeerCacheAdministration * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetMaximumCacheSize )( 
            IBitsPeerCacheAdministration * This,
            /* [out][ref] */ DWORD *pBytes);
        
        HRESULT ( STDMETHODCALLTYPE *SetMaximumCacheSize )( 
            IBitsPeerCacheAdministration * This,
            DWORD Bytes);
        
        HRESULT ( STDMETHODCALLTYPE *GetMaximumContentAge )( 
            IBitsPeerCacheAdministration * This,
            /* [out][ref] */ ULONG *pSeconds);
        
        HRESULT ( STDMETHODCALLTYPE *SetMaximumContentAge )( 
            IBitsPeerCacheAdministration * This,
            ULONG Seconds);
        
        HRESULT ( STDMETHODCALLTYPE *GetConfigurationFlags )( 
            IBitsPeerCacheAdministration * This,
            /* [out][ref] */ DWORD *pFlags);
        
        HRESULT ( STDMETHODCALLTYPE *SetConfigurationFlags )( 
            IBitsPeerCacheAdministration * This,
            DWORD Flags);
        
        HRESULT ( STDMETHODCALLTYPE *EnumRecords )( 
            IBitsPeerCacheAdministration * This,
            /* [out] */ IEnumBitsPeerCacheRecords **ppEnum);
        
        HRESULT ( STDMETHODCALLTYPE *GetRecord )( 
            IBitsPeerCacheAdministration * This,
            /* [in] */ REFGUID id,
            /* [out] */ IBitsPeerCacheRecord **ppRecord);
        
        HRESULT ( STDMETHODCALLTYPE *ClearRecords )( 
            IBitsPeerCacheAdministration * This);
        
        HRESULT ( STDMETHODCALLTYPE *DeleteRecord )( 
            IBitsPeerCacheAdministration * This,
            /* [in] */ REFGUID id);
        
        HRESULT ( STDMETHODCALLTYPE *DeleteUrl )( 
            IBitsPeerCacheAdministration * This,
            /* [ref][in] */ LPCWSTR url);
        
        HRESULT ( STDMETHODCALLTYPE *EnumPeers )( 
            IBitsPeerCacheAdministration * This,
            /* [ref][out] */ IEnumBitsPeers **ppEnum);
        
        HRESULT ( STDMETHODCALLTYPE *ClearPeers )( 
            IBitsPeerCacheAdministration * This);
        
        HRESULT ( STDMETHODCALLTYPE *DiscoverPeers )( 
            IBitsPeerCacheAdministration * This);
        
        END_INTERFACE
    } IBitsPeerCacheAdministrationVtbl;

    interface IBitsPeerCacheAdministration
    {
        CONST_VTBL struct IBitsPeerCacheAdministrationVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IBitsPeerCacheAdministration_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IBitsPeerCacheAdministration_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IBitsPeerCacheAdministration_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IBitsPeerCacheAdministration_GetMaximumCacheSize(This,pBytes)	\
    ( (This)->lpVtbl -> GetMaximumCacheSize(This,pBytes) ) 

#define IBitsPeerCacheAdministration_SetMaximumCacheSize(This,Bytes)	\
    ( (This)->lpVtbl -> SetMaximumCacheSize(This,Bytes) ) 

#define IBitsPeerCacheAdministration_GetMaximumContentAge(This,pSeconds)	\
    ( (This)->lpVtbl -> GetMaximumContentAge(This,pSeconds) ) 

#define IBitsPeerCacheAdministration_SetMaximumContentAge(This,Seconds)	\
    ( (This)->lpVtbl -> SetMaximumContentAge(This,Seconds) ) 

#define IBitsPeerCacheAdministration_GetConfigurationFlags(This,pFlags)	\
    ( (This)->lpVtbl -> GetConfigurationFlags(This,pFlags) ) 

#define IBitsPeerCacheAdministration_SetConfigurationFlags(This,Flags)	\
    ( (This)->lpVtbl -> SetConfigurationFlags(This,Flags) ) 

#define IBitsPeerCacheAdministration_EnumRecords(This,ppEnum)	\
    ( (This)->lpVtbl -> EnumRecords(This,ppEnum) ) 

#define IBitsPeerCacheAdministration_GetRecord(This,id,ppRecord)	\
    ( (This)->lpVtbl -> GetRecord(This,id,ppRecord) ) 

#define IBitsPeerCacheAdministration_ClearRecords(This)	\
    ( (This)->lpVtbl -> ClearRecords(This) ) 

#define IBitsPeerCacheAdministration_DeleteRecord(This,id)	\
    ( (This)->lpVtbl -> DeleteRecord(This,id) ) 

#define IBitsPeerCacheAdministration_DeleteUrl(This,url)	\
    ( (This)->lpVtbl -> DeleteUrl(This,url) ) 

#define IBitsPeerCacheAdministration_EnumPeers(This,ppEnum)	\
    ( (This)->lpVtbl -> EnumPeers(This,ppEnum) ) 

#define IBitsPeerCacheAdministration_ClearPeers(This)	\
    ( (This)->lpVtbl -> ClearPeers(This) ) 

#define IBitsPeerCacheAdministration_DiscoverPeers(This)	\
    ( (This)->lpVtbl -> DiscoverPeers(This) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IBitsPeerCacheAdministration_INTERFACE_DEFINED__ */


#ifndef __IBackgroundCopyJob4_INTERFACE_DEFINED__
#define __IBackgroundCopyJob4_INTERFACE_DEFINED__

/* interface IBackgroundCopyJob4 */
/* [object][helpstring][uuid] */ 

#define   BG_JOB_ENABLE_PEERCACHING_CLIENT   0x0001
#define   BG_JOB_ENABLE_PEERCACHING_SERVER   0x0002

EXTERN_C const IID IID_IBackgroundCopyJob4;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("659cdeae-489e-11d9-a9cd-000d56965251")
    IBackgroundCopyJob4 : public IBackgroundCopyJob3
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE SetPeerCachingFlags( 
            DWORD Flags) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetPeerCachingFlags( 
            /* [ref][out] */ DWORD *pFlags) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetOwnerIntegrityLevel( 
            /* [ref][out] */ ULONG *pLevel) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetOwnerElevationState( 
            /* [ref][out] */ BOOL *pElevated) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetMaximumDownloadTime( 
            ULONG Timeout) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetMaximumDownloadTime( 
            /* [ref][out] */ ULONG *pTimeout) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IBackgroundCopyJob4Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IBackgroundCopyJob4 * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IBackgroundCopyJob4 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IBackgroundCopyJob4 * This);
        
        HRESULT ( STDMETHODCALLTYPE *AddFileSet )( 
            IBackgroundCopyJob4 * This,
            /* [in] */ ULONG cFileCount,
            /* [size_is][in] */ BG_FILE_INFO *pFileSet);
        
        HRESULT ( STDMETHODCALLTYPE *AddFile )( 
            IBackgroundCopyJob4 * This,
            /* [in] */ LPCWSTR RemoteUrl,
            /* [in] */ LPCWSTR LocalName);
        
        HRESULT ( STDMETHODCALLTYPE *EnumFiles )( 
            IBackgroundCopyJob4 * This,
            /* [out] */ IEnumBackgroundCopyFiles **pEnum);
        
        HRESULT ( STDMETHODCALLTYPE *Suspend )( 
            IBackgroundCopyJob4 * This);
        
        HRESULT ( STDMETHODCALLTYPE *Resume )( 
            IBackgroundCopyJob4 * This);
        
        HRESULT ( STDMETHODCALLTYPE *Cancel )( 
            IBackgroundCopyJob4 * This);
        
        HRESULT ( STDMETHODCALLTYPE *Complete )( 
            IBackgroundCopyJob4 * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetId )( 
            IBackgroundCopyJob4 * This,
            /* [out] */ GUID *pVal);
        
        HRESULT ( STDMETHODCALLTYPE *GetType )( 
            IBackgroundCopyJob4 * This,
            /* [out] */ BG_JOB_TYPE *pVal);
        
        HRESULT ( STDMETHODCALLTYPE *GetProgress )( 
            IBackgroundCopyJob4 * This,
            /* [out] */ BG_JOB_PROGRESS *pVal);
        
        HRESULT ( STDMETHODCALLTYPE *GetTimes )( 
            IBackgroundCopyJob4 * This,
            /* [out] */ BG_JOB_TIMES *pVal);
        
        HRESULT ( STDMETHODCALLTYPE *GetState )( 
            IBackgroundCopyJob4 * This,
            /* [out] */ BG_JOB_STATE *pVal);
        
        HRESULT ( STDMETHODCALLTYPE *GetError )( 
            IBackgroundCopyJob4 * This,
            /* [out] */ IBackgroundCopyError **ppError);
        
        HRESULT ( STDMETHODCALLTYPE *GetOwner )( 
            IBackgroundCopyJob4 * This,
            /* [out] */ LPWSTR *pVal);
        
        HRESULT ( STDMETHODCALLTYPE *SetDisplayName )( 
            IBackgroundCopyJob4 * This,
            /* [in] */ LPCWSTR Val);
        
        HRESULT ( STDMETHODCALLTYPE *GetDisplayName )( 
            IBackgroundCopyJob4 * This,
            /* [out] */ LPWSTR *pVal);
        
        HRESULT ( STDMETHODCALLTYPE *SetDescription )( 
            IBackgroundCopyJob4 * This,
            /* [in] */ LPCWSTR Val);
        
        HRESULT ( STDMETHODCALLTYPE *GetDescription )( 
            IBackgroundCopyJob4 * This,
            /* [out] */ LPWSTR *pVal);
        
        HRESULT ( STDMETHODCALLTYPE *SetPriority )( 
            IBackgroundCopyJob4 * This,
            /* [in] */ BG_JOB_PRIORITY Val);
        
        HRESULT ( STDMETHODCALLTYPE *GetPriority )( 
            IBackgroundCopyJob4 * This,
            /* [out] */ BG_JOB_PRIORITY *pVal);
        
        HRESULT ( STDMETHODCALLTYPE *SetNotifyFlags )( 
            IBackgroundCopyJob4 * This,
            /* [in] */ ULONG Val);
        
        HRESULT ( STDMETHODCALLTYPE *GetNotifyFlags )( 
            IBackgroundCopyJob4 * This,
            /* [out] */ ULONG *pVal);
        
        HRESULT ( STDMETHODCALLTYPE *SetNotifyInterface )( 
            IBackgroundCopyJob4 * This,
            /* [in] */ IUnknown *Val);
        
        HRESULT ( STDMETHODCALLTYPE *GetNotifyInterface )( 
            IBackgroundCopyJob4 * This,
            /* [out] */ IUnknown **pVal);
        
        HRESULT ( STDMETHODCALLTYPE *SetMinimumRetryDelay )( 
            IBackgroundCopyJob4 * This,
            /* [in] */ ULONG Seconds);
        
        HRESULT ( STDMETHODCALLTYPE *GetMinimumRetryDelay )( 
            IBackgroundCopyJob4 * This,
            /* [out] */ ULONG *Seconds);
        
        HRESULT ( STDMETHODCALLTYPE *SetNoProgressTimeout )( 
            IBackgroundCopyJob4 * This,
            /* [in] */ ULONG Seconds);
        
        HRESULT ( STDMETHODCALLTYPE *GetNoProgressTimeout )( 
            IBackgroundCopyJob4 * This,
            /* [out] */ ULONG *Seconds);
        
        HRESULT ( STDMETHODCALLTYPE *GetErrorCount )( 
            IBackgroundCopyJob4 * This,
            /* [out] */ ULONG *Errors);
        
        HRESULT ( STDMETHODCALLTYPE *SetProxySettings )( 
            IBackgroundCopyJob4 * This,
            /* [in] */ BG_JOB_PROXY_USAGE ProxyUsage,
            /* [unique][string][in] */ const WCHAR *ProxyList,
            /* [unique][string][in] */ const WCHAR *ProxyBypassList);
        
        HRESULT ( STDMETHODCALLTYPE *GetProxySettings )( 
            IBackgroundCopyJob4 * This,
            /* [out] */ BG_JOB_PROXY_USAGE *pProxyUsage,
            /* [out] */ LPWSTR *pProxyList,
            /* [out] */ LPWSTR *pProxyBypassList);
        
        HRESULT ( STDMETHODCALLTYPE *TakeOwnership )( 
            IBackgroundCopyJob4 * This);
        
        HRESULT ( STDMETHODCALLTYPE *SetNotifyCmdLine )( 
            IBackgroundCopyJob4 * This,
            /* [unique][in] */ LPCWSTR Program,
            /* [unique][in] */ LPCWSTR Parameters);
        
        HRESULT ( STDMETHODCALLTYPE *GetNotifyCmdLine )( 
            IBackgroundCopyJob4 * This,
            /* [out] */ LPWSTR *pProgram,
            /* [out] */ LPWSTR *pParameters);
        
        HRESULT ( STDMETHODCALLTYPE *GetReplyProgress )( 
            IBackgroundCopyJob4 * This,
            /* [out][in] */ BG_JOB_REPLY_PROGRESS *pProgress);
        
        HRESULT ( STDMETHODCALLTYPE *GetReplyData )( 
            IBackgroundCopyJob4 * This,
            /* [size_is][size_is][out] */ byte **ppBuffer,
            /* [unique][out][in] */ UINT64 *pLength);
        
        HRESULT ( STDMETHODCALLTYPE *SetReplyFileName )( 
            IBackgroundCopyJob4 * This,
            /* [unique][in] */ LPCWSTR ReplyFileName);
        
        HRESULT ( STDMETHODCALLTYPE *GetReplyFileName )( 
            IBackgroundCopyJob4 * This,
            /* [out] */ LPWSTR *pReplyFileName);
        
        HRESULT ( STDMETHODCALLTYPE *SetCredentials )( 
            IBackgroundCopyJob4 * This,
            BG_AUTH_CREDENTIALS *credentials);
        
        HRESULT ( STDMETHODCALLTYPE *RemoveCredentials )( 
            IBackgroundCopyJob4 * This,
            BG_AUTH_TARGET Target,
            BG_AUTH_SCHEME Scheme);
        
        HRESULT ( STDMETHODCALLTYPE *ReplaceRemotePrefix )( 
            IBackgroundCopyJob4 * This,
            /* [in] */ LPCWSTR OldPrefix,
            /* [in] */ LPCWSTR NewPrefix);
        
        HRESULT ( STDMETHODCALLTYPE *AddFileWithRanges )( 
            IBackgroundCopyJob4 * This,
            /* [in] */ LPCWSTR RemoteUrl,
            /* [in] */ LPCWSTR LocalName,
            /* [in] */ DWORD RangeCount,
            /* [size_is][in] */ BG_FILE_RANGE Ranges[  ]);
        
        HRESULT ( STDMETHODCALLTYPE *SetFileACLFlags )( 
            IBackgroundCopyJob4 * This,
            /* [in] */ DWORD Flags);
        
        HRESULT ( STDMETHODCALLTYPE *GetFileACLFlags )( 
            IBackgroundCopyJob4 * This,
            /* [ref][out] */ DWORD *Flags);
        
        HRESULT ( STDMETHODCALLTYPE *SetPeerCachingFlags )( 
            IBackgroundCopyJob4 * This,
            DWORD Flags);
        
        HRESULT ( STDMETHODCALLTYPE *GetPeerCachingFlags )( 
            IBackgroundCopyJob4 * This,
            /* [ref][out] */ DWORD *pFlags);
        
        HRESULT ( STDMETHODCALLTYPE *GetOwnerIntegrityLevel )( 
            IBackgroundCopyJob4 * This,
            /* [ref][out] */ ULONG *pLevel);
        
        HRESULT ( STDMETHODCALLTYPE *GetOwnerElevationState )( 
            IBackgroundCopyJob4 * This,
            /* [ref][out] */ BOOL *pElevated);
        
        HRESULT ( STDMETHODCALLTYPE *SetMaximumDownloadTime )( 
            IBackgroundCopyJob4 * This,
            ULONG Timeout);
        
        HRESULT ( STDMETHODCALLTYPE *GetMaximumDownloadTime )( 
            IBackgroundCopyJob4 * This,
            /* [ref][out] */ ULONG *pTimeout);
        
        END_INTERFACE
    } IBackgroundCopyJob4Vtbl;

    interface IBackgroundCopyJob4
    {
        CONST_VTBL struct IBackgroundCopyJob4Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IBackgroundCopyJob4_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IBackgroundCopyJob4_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IBackgroundCopyJob4_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IBackgroundCopyJob4_AddFileSet(This,cFileCount,pFileSet)	\
    ( (This)->lpVtbl -> AddFileSet(This,cFileCount,pFileSet) ) 

#define IBackgroundCopyJob4_AddFile(This,RemoteUrl,LocalName)	\
    ( (This)->lpVtbl -> AddFile(This,RemoteUrl,LocalName) ) 

#define IBackgroundCopyJob4_EnumFiles(This,pEnum)	\
    ( (This)->lpVtbl -> EnumFiles(This,pEnum) ) 

#define IBackgroundCopyJob4_Suspend(This)	\
    ( (This)->lpVtbl -> Suspend(This) ) 

#define IBackgroundCopyJob4_Resume(This)	\
    ( (This)->lpVtbl -> Resume(This) ) 

#define IBackgroundCopyJob4_Cancel(This)	\
    ( (This)->lpVtbl -> Cancel(This) ) 

#define IBackgroundCopyJob4_Complete(This)	\
    ( (This)->lpVtbl -> Complete(This) ) 

#define IBackgroundCopyJob4_GetId(This,pVal)	\
    ( (This)->lpVtbl -> GetId(This,pVal) ) 

#define IBackgroundCopyJob4_GetType(This,pVal)	\
    ( (This)->lpVtbl -> GetType(This,pVal) ) 

#define IBackgroundCopyJob4_GetProgress(This,pVal)	\
    ( (This)->lpVtbl -> GetProgress(This,pVal) ) 

#define IBackgroundCopyJob4_GetTimes(This,pVal)	\
    ( (This)->lpVtbl -> GetTimes(This,pVal) ) 

#define IBackgroundCopyJob4_GetState(This,pVal)	\
    ( (This)->lpVtbl -> GetState(This,pVal) ) 

#define IBackgroundCopyJob4_GetError(This,ppError)	\
    ( (This)->lpVtbl -> GetError(This,ppError) ) 

#define IBackgroundCopyJob4_GetOwner(This,pVal)	\
    ( (This)->lpVtbl -> GetOwner(This,pVal) ) 

#define IBackgroundCopyJob4_SetDisplayName(This,Val)	\
    ( (This)->lpVtbl -> SetDisplayName(This,Val) ) 

#define IBackgroundCopyJob4_GetDisplayName(This,pVal)	\
    ( (This)->lpVtbl -> GetDisplayName(This,pVal) ) 

#define IBackgroundCopyJob4_SetDescription(This,Val)	\
    ( (This)->lpVtbl -> SetDescription(This,Val) ) 

#define IBackgroundCopyJob4_GetDescription(This,pVal)	\
    ( (This)->lpVtbl -> GetDescription(This,pVal) ) 

#define IBackgroundCopyJob4_SetPriority(This,Val)	\
    ( (This)->lpVtbl -> SetPriority(This,Val) ) 

#define IBackgroundCopyJob4_GetPriority(This,pVal)	\
    ( (This)->lpVtbl -> GetPriority(This,pVal) ) 

#define IBackgroundCopyJob4_SetNotifyFlags(This,Val)	\
    ( (This)->lpVtbl -> SetNotifyFlags(This,Val) ) 

#define IBackgroundCopyJob4_GetNotifyFlags(This,pVal)	\
    ( (This)->lpVtbl -> GetNotifyFlags(This,pVal) ) 

#define IBackgroundCopyJob4_SetNotifyInterface(This,Val)	\
    ( (This)->lpVtbl -> SetNotifyInterface(This,Val) ) 

#define IBackgroundCopyJob4_GetNotifyInterface(This,pVal)	\
    ( (This)->lpVtbl -> GetNotifyInterface(This,pVal) ) 

#define IBackgroundCopyJob4_SetMinimumRetryDelay(This,Seconds)	\
    ( (This)->lpVtbl -> SetMinimumRetryDelay(This,Seconds) ) 

#define IBackgroundCopyJob4_GetMinimumRetryDelay(This,Seconds)	\
    ( (This)->lpVtbl -> GetMinimumRetryDelay(This,Seconds) ) 

#define IBackgroundCopyJob4_SetNoProgressTimeout(This,Seconds)	\
    ( (This)->lpVtbl -> SetNoProgressTimeout(This,Seconds) ) 

#define IBackgroundCopyJob4_GetNoProgressTimeout(This,Seconds)	\
    ( (This)->lpVtbl -> GetNoProgressTimeout(This,Seconds) ) 

#define IBackgroundCopyJob4_GetErrorCount(This,Errors)	\
    ( (This)->lpVtbl -> GetErrorCount(This,Errors) ) 

#define IBackgroundCopyJob4_SetProxySettings(This,ProxyUsage,ProxyList,ProxyBypassList)	\
    ( (This)->lpVtbl -> SetProxySettings(This,ProxyUsage,ProxyList,ProxyBypassList) ) 

#define IBackgroundCopyJob4_GetProxySettings(This,pProxyUsage,pProxyList,pProxyBypassList)	\
    ( (This)->lpVtbl -> GetProxySettings(This,pProxyUsage,pProxyList,pProxyBypassList) ) 

#define IBackgroundCopyJob4_TakeOwnership(This)	\
    ( (This)->lpVtbl -> TakeOwnership(This) ) 


#define IBackgroundCopyJob4_SetNotifyCmdLine(This,Program,Parameters)	\
    ( (This)->lpVtbl -> SetNotifyCmdLine(This,Program,Parameters) ) 

#define IBackgroundCopyJob4_GetNotifyCmdLine(This,pProgram,pParameters)	\
    ( (This)->lpVtbl -> GetNotifyCmdLine(This,pProgram,pParameters) ) 

#define IBackgroundCopyJob4_GetReplyProgress(This,pProgress)	\
    ( (This)->lpVtbl -> GetReplyProgress(This,pProgress) ) 

#define IBackgroundCopyJob4_GetReplyData(This,ppBuffer,pLength)	\
    ( (This)->lpVtbl -> GetReplyData(This,ppBuffer,pLength) ) 

#define IBackgroundCopyJob4_SetReplyFileName(This,ReplyFileName)	\
    ( (This)->lpVtbl -> SetReplyFileName(This,ReplyFileName) ) 

#define IBackgroundCopyJob4_GetReplyFileName(This,pReplyFileName)	\
    ( (This)->lpVtbl -> GetReplyFileName(This,pReplyFileName) ) 

#define IBackgroundCopyJob4_SetCredentials(This,credentials)	\
    ( (This)->lpVtbl -> SetCredentials(This,credentials) ) 

#define IBackgroundCopyJob4_RemoveCredentials(This,Target,Scheme)	\
    ( (This)->lpVtbl -> RemoveCredentials(This,Target,Scheme) ) 


#define IBackgroundCopyJob4_ReplaceRemotePrefix(This,OldPrefix,NewPrefix)	\
    ( (This)->lpVtbl -> ReplaceRemotePrefix(This,OldPrefix,NewPrefix) ) 

#define IBackgroundCopyJob4_AddFileWithRanges(This,RemoteUrl,LocalName,RangeCount,Ranges)	\
    ( (This)->lpVtbl -> AddFileWithRanges(This,RemoteUrl,LocalName,RangeCount,Ranges) ) 

#define IBackgroundCopyJob4_SetFileACLFlags(This,Flags)	\
    ( (This)->lpVtbl -> SetFileACLFlags(This,Flags) ) 

#define IBackgroundCopyJob4_GetFileACLFlags(This,Flags)	\
    ( (This)->lpVtbl -> GetFileACLFlags(This,Flags) ) 


#define IBackgroundCopyJob4_SetPeerCachingFlags(This,Flags)	\
    ( (This)->lpVtbl -> SetPeerCachingFlags(This,Flags) ) 

#define IBackgroundCopyJob4_GetPeerCachingFlags(This,pFlags)	\
    ( (This)->lpVtbl -> GetPeerCachingFlags(This,pFlags) ) 

#define IBackgroundCopyJob4_GetOwnerIntegrityLevel(This,pLevel)	\
    ( (This)->lpVtbl -> GetOwnerIntegrityLevel(This,pLevel) ) 

#define IBackgroundCopyJob4_GetOwnerElevationState(This,pElevated)	\
    ( (This)->lpVtbl -> GetOwnerElevationState(This,pElevated) ) 

#define IBackgroundCopyJob4_SetMaximumDownloadTime(This,Timeout)	\
    ( (This)->lpVtbl -> SetMaximumDownloadTime(This,Timeout) ) 

#define IBackgroundCopyJob4_GetMaximumDownloadTime(This,pTimeout)	\
    ( (This)->lpVtbl -> GetMaximumDownloadTime(This,pTimeout) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IBackgroundCopyJob4_INTERFACE_DEFINED__ */


#ifndef __IBackgroundCopyFile3_INTERFACE_DEFINED__
#define __IBackgroundCopyFile3_INTERFACE_DEFINED__

/* interface IBackgroundCopyFile3 */
/* [object][helpstring][uuid] */ 


EXTERN_C const IID IID_IBackgroundCopyFile3;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("659cdeaa-489e-11d9-a9cd-000d56965251")
    IBackgroundCopyFile3 : public IBackgroundCopyFile2
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetTemporaryName( 
            /* [out] */ LPWSTR *pFilename) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetValidationState( 
            /* [in] */ BOOL state) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetValidationState( 
            /* [out] */ BOOL *pState) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE IsDownloadedFromPeer( 
            /* [out] */ BOOL *pVal) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IBackgroundCopyFile3Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IBackgroundCopyFile3 * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IBackgroundCopyFile3 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IBackgroundCopyFile3 * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetRemoteName )( 
            IBackgroundCopyFile3 * This,
            /* [out] */ LPWSTR *pVal);
        
        HRESULT ( STDMETHODCALLTYPE *GetLocalName )( 
            IBackgroundCopyFile3 * This,
            /* [out] */ LPWSTR *pVal);
        
        HRESULT ( STDMETHODCALLTYPE *GetProgress )( 
            IBackgroundCopyFile3 * This,
            /* [out] */ BG_FILE_PROGRESS *pVal);
        
        HRESULT ( STDMETHODCALLTYPE *GetFileRanges )( 
            IBackgroundCopyFile3 * This,
            /* [unique][out][in] */ DWORD *RangeCount,
            /* [size_is][size_is][out] */ BG_FILE_RANGE **Ranges);
        
        HRESULT ( STDMETHODCALLTYPE *SetRemoteName )( 
            IBackgroundCopyFile3 * This,
            LPCWSTR Val);
        
        HRESULT ( STDMETHODCALLTYPE *GetTemporaryName )( 
            IBackgroundCopyFile3 * This,
            /* [out] */ LPWSTR *pFilename);
        
        HRESULT ( STDMETHODCALLTYPE *SetValidationState )( 
            IBackgroundCopyFile3 * This,
            /* [in] */ BOOL state);
        
        HRESULT ( STDMETHODCALLTYPE *GetValidationState )( 
            IBackgroundCopyFile3 * This,
            /* [out] */ BOOL *pState);
        
        HRESULT ( STDMETHODCALLTYPE *IsDownloadedFromPeer )( 
            IBackgroundCopyFile3 * This,
            /* [out] */ BOOL *pVal);
        
        END_INTERFACE
    } IBackgroundCopyFile3Vtbl;

    interface IBackgroundCopyFile3
    {
        CONST_VTBL struct IBackgroundCopyFile3Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IBackgroundCopyFile3_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IBackgroundCopyFile3_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IBackgroundCopyFile3_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IBackgroundCopyFile3_GetRemoteName(This,pVal)	\
    ( (This)->lpVtbl -> GetRemoteName(This,pVal) ) 

#define IBackgroundCopyFile3_GetLocalName(This,pVal)	\
    ( (This)->lpVtbl -> GetLocalName(This,pVal) ) 

#define IBackgroundCopyFile3_GetProgress(This,pVal)	\
    ( (This)->lpVtbl -> GetProgress(This,pVal) ) 


#define IBackgroundCopyFile3_GetFileRanges(This,RangeCount,Ranges)	\
    ( (This)->lpVtbl -> GetFileRanges(This,RangeCount,Ranges) ) 

#define IBackgroundCopyFile3_SetRemoteName(This,Val)	\
    ( (This)->lpVtbl -> SetRemoteName(This,Val) ) 


#define IBackgroundCopyFile3_GetTemporaryName(This,pFilename)	\
    ( (This)->lpVtbl -> GetTemporaryName(This,pFilename) ) 

#define IBackgroundCopyFile3_SetValidationState(This,state)	\
    ( (This)->lpVtbl -> SetValidationState(This,state) ) 

#define IBackgroundCopyFile3_GetValidationState(This,pState)	\
    ( (This)->lpVtbl -> GetValidationState(This,pState) ) 

#define IBackgroundCopyFile3_IsDownloadedFromPeer(This,pVal)	\
    ( (This)->lpVtbl -> IsDownloadedFromPeer(This,pVal) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IBackgroundCopyFile3_INTERFACE_DEFINED__ */


#ifndef __IBackgroundCopyCallback2_INTERFACE_DEFINED__
#define __IBackgroundCopyCallback2_INTERFACE_DEFINED__

/* interface IBackgroundCopyCallback2 */
/* [object][helpstring][uuid] */ 


EXTERN_C const IID IID_IBackgroundCopyCallback2;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("659cdeac-489e-11d9-a9cd-000d56965251")
    IBackgroundCopyCallback2 : public IBackgroundCopyCallback
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE FileTransferred( 
            /* [in] */ IBackgroundCopyJob *pJob,
            /* [in] */ IBackgroundCopyFile *pFile) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IBackgroundCopyCallback2Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IBackgroundCopyCallback2 * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IBackgroundCopyCallback2 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IBackgroundCopyCallback2 * This);
        
        HRESULT ( STDMETHODCALLTYPE *JobTransferred )( 
            IBackgroundCopyCallback2 * This,
            /* [in] */ IBackgroundCopyJob *pJob);
        
        HRESULT ( STDMETHODCALLTYPE *JobError )( 
            IBackgroundCopyCallback2 * This,
            /* [in] */ IBackgroundCopyJob *pJob,
            /* [in] */ IBackgroundCopyError *pError);
        
        HRESULT ( STDMETHODCALLTYPE *JobModification )( 
            IBackgroundCopyCallback2 * This,
            /* [in] */ IBackgroundCopyJob *pJob,
            /* [in] */ DWORD dwReserved);
        
        HRESULT ( STDMETHODCALLTYPE *FileTransferred )( 
            IBackgroundCopyCallback2 * This,
            /* [in] */ IBackgroundCopyJob *pJob,
            /* [in] */ IBackgroundCopyFile *pFile);
        
        END_INTERFACE
    } IBackgroundCopyCallback2Vtbl;

    interface IBackgroundCopyCallback2
    {
        CONST_VTBL struct IBackgroundCopyCallback2Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IBackgroundCopyCallback2_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IBackgroundCopyCallback2_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IBackgroundCopyCallback2_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IBackgroundCopyCallback2_JobTransferred(This,pJob)	\
    ( (This)->lpVtbl -> JobTransferred(This,pJob) ) 

#define IBackgroundCopyCallback2_JobError(This,pJob,pError)	\
    ( (This)->lpVtbl -> JobError(This,pJob,pError) ) 

#define IBackgroundCopyCallback2_JobModification(This,pJob,dwReserved)	\
    ( (This)->lpVtbl -> JobModification(This,pJob,dwReserved) ) 


#define IBackgroundCopyCallback2_FileTransferred(This,pJob,pFile)	\
    ( (This)->lpVtbl -> FileTransferred(This,pJob,pFile) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IBackgroundCopyCallback2_INTERFACE_DEFINED__ */



#ifndef __BackgroundCopyManager3_0_LIBRARY_DEFINED__
#define __BackgroundCopyManager3_0_LIBRARY_DEFINED__

/* library BackgroundCopyManager3_0 */
/* [version][lcid][helpstring][uuid] */ 



EXTERN_C const IID LIBID_BackgroundCopyManager3_0;

EXTERN_C const CLSID CLSID_BackgroundCopyManager3_0;

#ifdef __cplusplus

class DECLSPEC_UUID("659cdea7-489e-11d9-a9cd-000d56965251")
BackgroundCopyManager3_0;
#endif
#endif /* __BackgroundCopyManager3_0_LIBRARY_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


