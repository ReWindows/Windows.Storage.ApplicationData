#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.Storage.ApplicationData.dll by Windissect. 4 member(s).
class ConstrainedImpersonateLoggedOnUser {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0ConstrainedImpersonateLoggedOnUser@@QEAA@PEAUIUser@System@Windows@@@Z
    ConstrainedImpersonateLoggedOnUser(::Windows::System::IUser *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Impersonate@ConstrainedImpersonateLoggedOnUser@@QEAAJXZ
    long Impersonate();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1ConstrainedImpersonateLoggedOnUser@@QEAA@XZ
    ~ConstrainedImpersonateLoggedOnUser();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?GenerateImpersonationToken@ConstrainedImpersonateLoggedOnUser@@AEAAJXZ
    long GenerateImpersonationToken();
};
