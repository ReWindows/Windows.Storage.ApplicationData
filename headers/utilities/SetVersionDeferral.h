#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.Storage.ApplicationData.dll by Windissect. 18 member(s).
namespace Windows::Storage {
class SetVersionDeferral {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@SetVersionDeferral@Storage@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Complete@SetVersionDeferral@Storage@Windows@@UEAAJXZ
    virtual long Complete();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@SetVersionDeferral@Storage@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@SetVersionDeferral@Storage@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@SetVersionDeferral@Storage@Windows@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@SetVersionDeferral@Storage@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@SetVersionDeferral@Storage@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0SetVersionDeferral@Storage@Windows@@QEAA@XZ
    SetVersionDeferral();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WaitForOutstandingDeferral@SetVersionDeferral@Storage@Windows@@UEAAXXZ
    virtual void WaitForOutstandingDeferral();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1SetVersionDeferral@Storage@Windows@@UEAA@XZ
    virtual ~SetVersionDeferral();
};
} // namespace Windows::Storage
