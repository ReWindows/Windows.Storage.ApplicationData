#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.Storage.ApplicationData.dll by Windissect. 34 member(s).
namespace Windows::Storage::StateABIImplementation {
class ClearOperation {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@ClearOperation@StateABIImplementation@Storage@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0ClearOperation@StateABIImplementation@Storage@Windows@@QEAA@IPEAX@Z
    ClearOperation(unsigned int, void *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0ClearOperation@StateABIImplementation@Storage@Windows@@QEAA@IPEAXH@Z
    ClearOperation(unsigned int, void *, int);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0ClearOperation@StateABIImplementation@Storage@Windows@@QEAA@IPEAXPEBG@Z
    ClearOperation(unsigned int, void *, unsigned short const *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0ClearOperation@StateABIImplementation@Storage@Windows@@QEAA@IPEAXW4ApplicationDataLocality@23@H@Z
    ClearOperation(unsigned int, void *, int, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@ClearOperation@StateABIImplementation@Storage@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@ClearOperation@StateABIImplementation@Storage@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@ClearOperation@StateABIImplementation@Storage@Windows@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@ClearOperation@StateABIImplementation@Storage@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@ClearOperation@StateABIImplementation@Storage@Windows@@UEAAKXZ
    virtual unsigned long Release();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?DoWork@ClearOperation@StateABIImplementation@Storage@Windows@@MEAAJXZ
    virtual long DoWork();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnumerateAndDeleteContainerItems@ClearOperation@StateABIImplementation@Storage@Windows@@AEAAJPEAXW4tag_ENUMERATE_ITEM_TYPE@@@Z
    long EnumerateAndDeleteContainerItems(void *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalClear@ClearOperation@StateABIImplementation@Storage@Windows@@AEAAJPEBG@Z
    long InternalClear(unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalClear@ClearOperation@StateABIImplementation@Storage@Windows@@AEAAJW4tag_STATE_PERSIST_ATTRIB@@@Z
    long InternalClear(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalClearSharedLocal@ClearOperation@StateABIImplementation@Storage@Windows@@AEAAJXZ
    long InternalClearSharedLocal();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalClearStructured@ClearOperation@StateABIImplementation@Storage@Windows@@AEAAJW4tag_STATE_PERSIST_ATTRIB@@@Z
    long InternalClearStructured(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalClearUnstructured@ClearOperation@StateABIImplementation@Storage@Windows@@AEAAJW4tag_STATE_PERSIST_ATTRIB@@@Z
    long InternalClearUnstructured(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveDirectoryTreeCallback@ClearOperation@StateABIImplementation@Storage@Windows@@CAJPEBGW4ActionType@@JPEAX@Z
    static long RemoveDirectoryTreeCallback(unsigned short const *, int, long, void *);
};
} // namespace Windows::Storage::StateABIImplementation
