#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.Storage.ApplicationData.dll by Windissect. 27 member(s).
namespace Windows::Storage::StateABIImplementation {
class SetVersionOperation {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@SetVersionOperation@StateABIImplementation@Storage@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@SetVersionOperation@StateABIImplementation@Storage@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@SetVersionOperation@StateABIImplementation@Storage@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@SetVersionOperation@StateABIImplementation@Storage@Windows@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@SetVersionOperation@StateABIImplementation@Storage@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@SetVersionOperation@StateABIImplementation@Storage@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@SetVersionOperation@StateABIImplementation@Storage@Windows@@QEAAJIPEAXIPEAUIUser@System@4@PEAUIApplicationDataSetVersionHandler@34@@Z
    long RuntimeClassInitialize(unsigned int, void *, unsigned int, ::Windows::System::IUser *, ::Windows::Storage::IApplicationDataSetVersionHandler *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1SetVersionOperation@StateABIImplementation@Storage@Windows@@UEAA@XZ
    virtual ~SetVersionOperation();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AcquireLock@SetVersionOperation@StateABIImplementation@Storage@Windows@@IEAAJXZ
    long AcquireLock();
    // Category: Method | Source: PDB Internal
    // Symbol: ?DoWork@SetVersionOperation@StateABIImplementation@Storage@Windows@@MEAAJXZ
    virtual long DoWork();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WorkCompleted@SetVersionOperation@StateABIImplementation@Storage@Windows@@MEAAXXZ
    virtual void WorkCompleted();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?SqmSetVersionError@SetVersionOperation@StateABIImplementation@Storage@Windows@@AEAAXJ@Z
    void SqmSetVersionError(long);
};
} // namespace Windows::Storage::StateABIImplementation
