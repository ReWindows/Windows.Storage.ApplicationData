#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.Storage.ApplicationData.dll by Windissect. 4 member(s).
namespace Microsoft::WRL::Details {
class WeakReferenceImpl {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Resolve@WeakReferenceImpl@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAUIInspectable@@@Z
    virtual long Resolve(_GUID const &, IInspectable * *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0WeakReferenceImpl@Details@WRL@Microsoft@@QEAA@PEAUIUnknown@@@Z
    WeakReferenceImpl(IUnknown *);
};
} // namespace Microsoft::WRL::Details
