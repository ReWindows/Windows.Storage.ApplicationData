#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.Storage.ApplicationData.dll by Windissect. 56 member(s).
namespace Windows::Storage {
class RestrictedApplicationDataServer {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@RestrictedApplicationDataServer@Storage@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearAllAsync@RestrictedApplicationDataServer@Storage@Windows@@UEAAJPEAPEAUIAsyncAction@Foundation@3@@Z
    virtual long ClearAllAsync(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearAsync@RestrictedApplicationDataServer@Storage@Windows@@UEAAJW4ApplicationDataLocality@23@PEAPEAUIAsyncAction@Foundation@3@@Z
    virtual long ClearAsync(int, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearPublisherCacheFolderAsync@RestrictedApplicationDataServer@Storage@Windows@@UEAAJQEAUHSTRING__@@PEAPEAUIAsyncAction@Foundation@3@@Z
    virtual long ClearPublisherCacheFolderAsync(HSTRING__* const, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Close@RestrictedApplicationDataServer@Storage@Windows@@UEAAJXZ
    virtual long Close();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@RestrictedApplicationDataServer@Storage@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPublisherCacheFolder@RestrictedApplicationDataServer@Storage@Windows@@UEAAJQEAUHSTRING__@@PEAPEAUIStorageFolder@23@@Z
    virtual long GetPublisherCacheFolder(HSTRING__* const, ::Windows::Storage::IStorageFolder * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@RestrictedApplicationDataServer@Storage@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@RestrictedApplicationDataServer@Storage@Windows@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@RestrictedApplicationDataServer@Storage@Windows@@UEAAJPEAUHSTRING__@@@Z
    virtual long Initialize(HSTRING__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@RestrictedApplicationDataServer@Storage@Windows@@UEAAJXZ
    virtual long Initialize();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@RestrictedApplicationDataServer@Storage@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@RestrictedApplicationDataServer@Storage@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetVersionAsync@RestrictedApplicationDataServer@Storage@Windows@@UEAAJIPEAUIApplicationDataSetVersionHandler@23@PEAPEAUIAsyncAction@Foundation@3@@Z
    virtual long SetVersionAsync(unsigned int, ::Windows::Storage::IApplicationDataSetVersionHandler *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SignalDataChanged@RestrictedApplicationDataServer@Storage@Windows@@UEAAJXZ
    virtual long SignalDataChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_DataChanged@RestrictedApplicationDataServer@Storage@Windows@@UEAAJPEAU?$ITypedEventHandler@PEAVApplicationData@Storage@Windows@@PEAUIInspectable@@@Foundation@3@PEAUEventRegistrationToken@@@Z
    virtual long add_DataChanged(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_LocalCacheFolder@RestrictedApplicationDataServer@Storage@Windows@@UEAAJPEAPEAUIStorageFolder@23@@Z
    virtual long get_LocalCacheFolder(::Windows::Storage::IStorageFolder * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_LocalFolder@RestrictedApplicationDataServer@Storage@Windows@@UEAAJPEAPEAUIStorageFolder@23@@Z
    virtual long get_LocalFolder(::Windows::Storage::IStorageFolder * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_LocalSettings@RestrictedApplicationDataServer@Storage@Windows@@UEAAJPEAPEAUIApplicationDataContainer@23@@Z
    virtual long get_LocalSettings(::Windows::Storage::IApplicationDataContainer * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_RoamingFolder@RestrictedApplicationDataServer@Storage@Windows@@UEAAJPEAPEAUIStorageFolder@23@@Z
    virtual long get_RoamingFolder(::Windows::Storage::IStorageFolder * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_RoamingSettings@RestrictedApplicationDataServer@Storage@Windows@@UEAAJPEAPEAUIApplicationDataContainer@23@@Z
    virtual long get_RoamingSettings(::Windows::Storage::IApplicationDataContainer * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_RoamingStorageQuota@RestrictedApplicationDataServer@Storage@Windows@@UEAAJPEA_K@Z
    virtual long get_RoamingStorageQuota(uint64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_SharedLocalFolder@RestrictedApplicationDataServer@Storage@Windows@@UEAAJPEAPEAUIStorageFolder@23@@Z
    virtual long get_SharedLocalFolder(::Windows::Storage::IStorageFolder * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_TemporaryFolder@RestrictedApplicationDataServer@Storage@Windows@@UEAAJPEAPEAUIStorageFolder@23@@Z
    virtual long get_TemporaryFolder(::Windows::Storage::IStorageFolder * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Version@RestrictedApplicationDataServer@Storage@Windows@@UEAAJPEAI@Z
    virtual long get_Version(unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_DataChanged@RestrictedApplicationDataServer@Storage@Windows@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_DataChanged(EventRegistrationToken);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1RestrictedApplicationDataServer@Storage@Windows@@UEAA@XZ
    virtual ~RestrictedApplicationDataServer();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalClearAsync@RestrictedApplicationDataServer@Storage@Windows@@AEAAJV?$ComPtr@VClearOperation@StateABIImplementation@Storage@Windows@@@WRL@Microsoft@@PEAPEAUIAsyncAction@Foundation@3@@Z
    long InternalClearAsync(WindissectOpaque, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetRootStorageFolder@RestrictedApplicationDataServer@Storage@Windows@@AEAAJW4ApplicationDataLocality@23@PEAPEAUIStorageFolder@23@@Z
    long InternalGetRootStorageFolder(int, ::Windows::Storage::IStorageFolder * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetRootStorageFolderPartialTrustCaller@RestrictedApplicationDataServer@Storage@Windows@@AEAAJW4tag_STATE_PERSIST_ATTRIB@@PEAPEAUIStorageFolder@23@@Z
    long InternalGetRootStorageFolderPartialTrustCaller(int, ::Windows::Storage::IStorageFolder * *);
};
} // namespace Windows::Storage
