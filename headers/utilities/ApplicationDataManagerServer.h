#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.Storage.ApplicationData.dll by Windissect. 2 member(s).
namespace Windows::Management::Core {
class ApplicationDataManagerServer {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetRuntimeClassName@ApplicationDataManagerServer@Core@Management@Windows@@SAPEBGXZ
    static unsigned short const * InternalGetRuntimeClassName();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetTrustLevel@ApplicationDataManagerServer@Core@Management@Windows@@SA?AW4TrustLevel@@XZ
    static int InternalGetTrustLevel();
};
} // namespace Windows::Management::Core
