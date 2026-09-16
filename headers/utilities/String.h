#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.Storage.ApplicationData.dll by Windissect. 3 member(s).
namespace Windows::Internal {
class String {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@String@Internal@Windows@@QEAAJAEBQEAUHSTRING__@@@Z
    long Initialize(HSTRING__* const &);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@String@Internal@Windows@@QEAAXXZ
    void Release();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1String@Internal@Windows@@QEAA@XZ
    ~String();
};
} // namespace Windows::Internal
