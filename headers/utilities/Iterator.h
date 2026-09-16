#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.Storage.ApplicationData.dll by Windissect. 17 member(s).
namespace Windows::Storage::ApplicationDataCompositeValueServer {
class Iterator {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@Iterator@ApplicationDataCompositeValueServer@Storage@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@Iterator@ApplicationDataCompositeValueServer@Storage@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@Iterator@ApplicationDataCompositeValueServer@Storage@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@Iterator@ApplicationDataCompositeValueServer@Storage@Windows@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0Iterator@ApplicationDataCompositeValueServer@Storage@Windows@@QEAA@XZ
    Iterator();
    // Category: Method | Source: PDB Internal
    // Symbol: ?MoveNext@Iterator@ApplicationDataCompositeValueServer@Storage@Windows@@UEAAJPEAE@Z
    virtual long MoveNext(unsigned char *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@Iterator@ApplicationDataCompositeValueServer@Storage@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@Iterator@ApplicationDataCompositeValueServer@Storage@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Current@Iterator@ApplicationDataCompositeValueServer@Storage@Windows@@UEAAJPEAPEAU?$IKeyValuePair@PEAUHSTRING__@@PEAUIInspectable@@@Collections@Foundation@4@@Z
    virtual long get_Current(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_HasCurrent@Iterator@ApplicationDataCompositeValueServer@Storage@Windows@@UEAAJPEAE@Z
    virtual long get_HasCurrent(unsigned char *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1Iterator@ApplicationDataCompositeValueServer@Storage@Windows@@UEAA@XZ
    virtual ~Iterator();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@Iterator@ApplicationDataCompositeValueServer@Storage@Windows@@MEAAJPEAXPEAV234@@Z
    virtual long RuntimeClassInitialize(void *, ::Windows::Storage::ApplicationDataCompositeValueServer *);
};
} // namespace Windows::Storage::ApplicationDataCompositeValueServer
