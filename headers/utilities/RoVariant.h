#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.Storage.ApplicationData.dll by Windissect. 3 member(s).
class RoVariant {
public:
    class Accessor;
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Attach@RoVariant@@QEAAXPEAUIInspectable@@@Z
    void Attach(IInspectable *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1RoVariant@@QEAA@XZ
    ~RoVariant();
private:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0RoVariant@@AEAA@PEAUIInspectable@@_N1@Z
    RoVariant(IInspectable *, bool, bool);
};
