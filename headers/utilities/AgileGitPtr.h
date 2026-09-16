#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.Storage.ApplicationData.dll by Windissect. 2 member(s).
class AgileGitPtr {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyLocal@AgileGitPtr@@QEBAJAEBU_GUID@@PEAPEAX@Z
    long CopyLocal(_GUID const &, void * *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@AgileGitPtr@@QEAAJW4AgileReferenceOptions@@AEBU_GUID@@PEAUIUnknown@@@Z
    long Initialize(int, _GUID const &, IUnknown *);
};
