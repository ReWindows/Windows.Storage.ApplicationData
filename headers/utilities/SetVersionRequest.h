#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.Storage.ApplicationData.dll by Windissect. 20 member(s).
namespace Windows::Storage {
class SetVersionRequest {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@SetVersionRequest@Storage@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDeferral@SetVersionRequest@Storage@Windows@@UEAAJPEAPEAUISetVersionDeferral@23@@Z
    virtual long GetDeferral(::Windows::Storage::ISetVersionDeferral * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@SetVersionRequest@Storage@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@SetVersionRequest@Storage@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@SetVersionRequest@Storage@Windows@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@SetVersionRequest@Storage@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@SetVersionRequest@Storage@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0SetVersionRequest@Storage@Windows@@QEAA@II@Z
    SetVersionRequest(unsigned int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?WaitForOutstandingDeferral@SetVersionRequest@Storage@Windows@@UEAAXXZ
    virtual void WaitForOutstandingDeferral();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_CurrentVersion@SetVersionRequest@Storage@Windows@@UEAAJPEAI@Z
    virtual long get_CurrentVersion(unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_DesiredVersion@SetVersionRequest@Storage@Windows@@UEAAJPEAI@Z
    virtual long get_DesiredVersion(unsigned int *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1SetVersionRequest@Storage@Windows@@UEAA@XZ
    virtual ~SetVersionRequest();
};
} // namespace Windows::Storage
