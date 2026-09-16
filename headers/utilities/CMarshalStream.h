#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.Storage.ApplicationData.dll by Windissect. 4 member(s).
namespace CMarshaledInterface {
class CMarshalStream {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@CMarshalStream@CMarshaledInterface@@QEAAJAEBU_GUID@@PEAUIUnknown@@W4MARSHAL_KIND@@@Z
    long RuntimeClassInitialize(_GUID const &, IUnknown *, int);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CMarshalStream@CMarshaledInterface@@UEAA@XZ
    virtual ~CMarshalStream();
};
} // namespace CMarshaledInterface
