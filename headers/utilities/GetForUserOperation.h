#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.Storage.ApplicationData.dll by Windissect. 9 member(s).
namespace Windows::Storage::StateABIImplementation {
class GetForUserOperation {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?DoWork@GetForUserOperation@StateABIImplementation@Storage@Windows@@QEAAJPEAPEAUIApplicationData@34@@Z
    long DoWork(::Windows::Storage::IApplicationData * *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0GetForUserOperation@StateABIImplementation@Storage@Windows@@QEAA@XZ
    GetForUserOperation();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@GetForUserOperation@StateABIImplementation@Storage@Windows@@QEAAJPEAUIUser@System@4@@Z
    long RuntimeClassInitialize(::Windows::System::IUser *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateStateLocationsIfRequired@GetForUserOperation@StateABIImplementation@Storage@Windows@@QEAAJPEAUHSTRING__@@_K@Z
    long UpdateStateLocationsIfRequired(HSTRING__*, uint64_t);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1GetForUserOperation@StateABIImplementation@Storage@Windows@@UEAA@XZ
    virtual ~GetForUserOperation();
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSidFromUser@GetForUserOperation@StateABIImplementation@Storage@Windows@@CAJPEAUIUser@System@4@PEAPEAUHSTRING__@@PEAPEAXPEA_K@Z
    static long GetSidFromUser(::Windows::System::IUser *, HSTRING__* *, void * *, uint64_t *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsUpdateRequired@GetForUserOperation@StateABIImplementation@Storage@Windows@@AEAAJPEBG0PEA_N@Z
    long IsUpdateRequired(unsigned short const *, unsigned short const *, bool *);
};
} // namespace Windows::Storage::StateABIImplementation
