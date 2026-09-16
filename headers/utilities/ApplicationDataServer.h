#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.Storage.ApplicationData.dll by Windissect. 73 member(s).
namespace Windows::Storage {
class ApplicationDataServer {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@ApplicationDataServer@Storage@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0ApplicationDataServer@Storage@Windows@@QEAA@XZ
    ApplicationDataServer();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearAllAsync@ApplicationDataServer@Storage@Windows@@UEAAJPEAPEAUIAsyncAction@Foundation@3@@Z
    virtual long ClearAllAsync(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearAsync@ApplicationDataServer@Storage@Windows@@UEAAJW4ApplicationDataLocality@23@PEAPEAUIAsyncAction@Foundation@3@@Z
    virtual long ClearAsync(int, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearPublisherCacheFolderAsync@ApplicationDataServer@Storage@Windows@@UEAAJQEAUHSTRING__@@PEAPEAUIAsyncAction@Foundation@3@@Z
    virtual long ClearPublisherCacheFolderAsync(HSTRING__* const, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Close@ApplicationDataServer@Storage@Windows@@UEAAJXZ
    virtual long Close();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@ApplicationDataServer@Storage@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPublisherCacheFolder@ApplicationDataServer@Storage@Windows@@UEAAJQEAUHSTRING__@@PEAPEAUIStorageFolder@23@@Z
    virtual long GetPublisherCacheFolder(HSTRING__* const, ::Windows::Storage::IStorageFolder * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@ApplicationDataServer@Storage@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@ApplicationDataServer@Storage@Windows@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@ApplicationDataServer@Storage@Windows@@UEAAJPEAUHSTRING__@@PEAX@Z
    virtual long Initialize(HSTRING__*, void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@ApplicationDataServer@Storage@Windows@@UEAAJXZ
    virtual long Initialize();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetRuntimeClassName@ApplicationDataServer@Storage@Windows@@SAPEBGXZ
    static unsigned short const * InternalGetRuntimeClassName();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetTrustLevel@ApplicationDataServer@Storage@Windows@@SA?AW4TrustLevel@@XZ
    static int InternalGetTrustLevel();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@ApplicationDataServer@Storage@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@ApplicationDataServer@Storage@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetVersionAsync@ApplicationDataServer@Storage@Windows@@UEAAJIPEAUIApplicationDataSetVersionHandler@23@PEAPEAUIAsyncAction@Foundation@3@@Z
    virtual long SetVersionAsync(unsigned int, ::Windows::Storage::IApplicationDataSetVersionHandler *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SignalDataChanged@ApplicationDataServer@Storage@Windows@@UEAAJXZ
    virtual long SignalDataChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_DataChanged@ApplicationDataServer@Storage@Windows@@UEAAJPEAU?$ITypedEventHandler@PEAVApplicationData@Storage@Windows@@PEAUIInspectable@@@Foundation@3@PEAUEventRegistrationToken@@@Z
    virtual long add_DataChanged(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_LocalCacheFolder@ApplicationDataServer@Storage@Windows@@UEAAJPEAPEAUIStorageFolder@23@@Z
    virtual long get_LocalCacheFolder(::Windows::Storage::IStorageFolder * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_LocalFolder@ApplicationDataServer@Storage@Windows@@UEAAJPEAPEAUIStorageFolder@23@@Z
    virtual long get_LocalFolder(::Windows::Storage::IStorageFolder * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_LocalSettings@ApplicationDataServer@Storage@Windows@@UEAAJPEAPEAUIApplicationDataContainer@23@@Z
    virtual long get_LocalSettings(::Windows::Storage::IApplicationDataContainer * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_RoamingFolder@ApplicationDataServer@Storage@Windows@@UEAAJPEAPEAUIStorageFolder@23@@Z
    virtual long get_RoamingFolder(::Windows::Storage::IStorageFolder * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_RoamingSettings@ApplicationDataServer@Storage@Windows@@UEAAJPEAPEAUIApplicationDataContainer@23@@Z
    virtual long get_RoamingSettings(::Windows::Storage::IApplicationDataContainer * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_RoamingStorageQuota@ApplicationDataServer@Storage@Windows@@UEAAJPEA_K@Z
    virtual long get_RoamingStorageQuota(uint64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_SharedLocalFolder@ApplicationDataServer@Storage@Windows@@UEAAJPEAPEAUIStorageFolder@23@@Z
    virtual long get_SharedLocalFolder(::Windows::Storage::IStorageFolder * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_TemporaryFolder@ApplicationDataServer@Storage@Windows@@UEAAJPEAPEAUIStorageFolder@23@@Z
    virtual long get_TemporaryFolder(::Windows::Storage::IStorageFolder * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Version@ApplicationDataServer@Storage@Windows@@UEAAJPEAI@Z
    virtual long get_Version(unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_DataChanged@ApplicationDataServer@Storage@Windows@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_DataChanged(EventRegistrationToken);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1ApplicationDataServer@Storage@Windows@@UEAA@XZ
    virtual ~ApplicationDataServer();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateFolderItemWithJunctionSkipping@ApplicationDataServer@Storage@Windows@@CAJPEBGAEAV?$ComPtr@UIShellItem@@@WRL@Microsoft@@@Z
    static long CreateFolderItemWithJunctionSkipping(unsigned short const *, WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeDataChangedSignaler@ApplicationDataServer@Storage@Windows@@AEAAJXZ
    long InitializeDataChangedSignaler();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalClearAsync@ApplicationDataServer@Storage@Windows@@AEAAJV?$ComPtr@VClearOperation@StateABIImplementation@Storage@Windows@@@WRL@Microsoft@@PEAPEAUIAsyncAction@Foundation@3@@Z
    long InternalClearAsync(WindissectOpaque, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalClearPublisherFolderAsync@ApplicationDataServer@Storage@Windows@@AEAAJV?$ComPtr@VClearOperation@StateABIImplementation@Storage@Windows@@@WRL@Microsoft@@PEAPEAUIAsyncAction@Foundation@3@@Z
    long InternalClearPublisherFolderAsync(WindissectOpaque, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetPublisherFolder@ApplicationDataServer@Storage@Windows@@AEAAJQEAUHSTRING__@@PEAPEAUIStorageFolder@23@@Z
    long InternalGetPublisherFolder(HSTRING__* const, ::Windows::Storage::IStorageFolder * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetPublisherFolderFullTrustCaller@ApplicationDataServer@Storage@Windows@@AEAAJQEAUHSTRING__@@PEAPEAUIStorageFolder@23@@Z
    long InternalGetPublisherFolderFullTrustCaller(HSTRING__* const, ::Windows::Storage::IStorageFolder * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetPublisherFolderPartialTrustCaller@ApplicationDataServer@Storage@Windows@@AEAAJQEAUHSTRING__@@PEAPEAUIStorageFolder@23@@Z
    long InternalGetPublisherFolderPartialTrustCaller(HSTRING__* const, ::Windows::Storage::IStorageFolder * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetRootContainer@ApplicationDataServer@Storage@Windows@@AEAAJW4ApplicationDataLocality@23@PEAPEAUIApplicationDataContainer@23@@Z
    long InternalGetRootContainer(int, ::Windows::Storage::IApplicationDataContainer * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetRootStorageFolder@ApplicationDataServer@Storage@Windows@@AEAAJW4ApplicationDataLocality@23@PEAPEAUIStorageFolder@23@@Z
    long InternalGetRootStorageFolder(int, ::Windows::Storage::IStorageFolder * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetRootStorageFolderFullTrustCaller@ApplicationDataServer@Storage@Windows@@AEAAJW4tag_STATE_PERSIST_ATTRIB@@PEAPEAUIStorageFolder@23@@Z
    long InternalGetRootStorageFolderFullTrustCaller(int, ::Windows::Storage::IStorageFolder * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetRootStorageFolderPartialTrustCaller@ApplicationDataServer@Storage@Windows@@AEAAJW4tag_STATE_PERSIST_ATTRIB@@PEAPEAUIStorageFolder@23@@Z
    long InternalGetRootStorageFolderPartialTrustCaller(int, ::Windows::Storage::IStorageFolder * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetSharedLocalFolder@ApplicationDataServer@Storage@Windows@@AEAAJPEAPEAUIStorageFolder@23@@Z
    long InternalGetSharedLocalFolder(::Windows::Storage::IStorageFolder * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetSharedLocalFolderFullTrustCaller@ApplicationDataServer@Storage@Windows@@AEAAJPEAPEAUIStorageFolder@23@@Z
    long InternalGetSharedLocalFolderFullTrustCaller(::Windows::Storage::IStorageFolder * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetSharedLocalFolderPartialTrustCaller@ApplicationDataServer@Storage@Windows@@AEAAJPEAPEAUIStorageFolder@23@@Z
    long InternalGetSharedLocalFolderPartialTrustCaller(::Windows::Storage::IStorageFolder * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SqmGetPublisherFolderError@ApplicationDataServer@Storage@Windows@@AEAAXJPEBG0@Z
    void SqmGetPublisherFolderError(long, unsigned short const *, unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SqmGetRootStorageFolderError@ApplicationDataServer@Storage@Windows@@AEAAXJW4tag_STATE_PERSIST_ATTRIB@@PEBG@Z
    void SqmGetRootStorageFolderError(long, int, unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SqmGetSharedLocalFolderError@ApplicationDataServer@Storage@Windows@@AEAAXJPEBG@Z
    void SqmGetSharedLocalFolderError(long, unsigned short const *);
};
} // namespace Windows::Storage
