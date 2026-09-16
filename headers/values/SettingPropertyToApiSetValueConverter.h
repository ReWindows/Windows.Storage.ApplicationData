#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.Storage.ApplicationData.dll by Windissect. 5 member(s).
namespace Windows::Storage::StateABIHelpers {
class SettingPropertyToApiSetValueConverter {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSettingValueBuffer@SettingPropertyToApiSetValueConverter@StateABIHelpers@Storage@Windows@@QEBAPEAEXZ
    unsigned char * GetSettingValueBuffer() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSettingValueBufferBytes@SettingPropertyToApiSetValueConverter@StateABIHelpers@Storage@Windows@@QEBA?BIXZ
    unsigned int GetSettingValueBufferBytes() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSettingValueType@SettingPropertyToApiSetValueConverter@StateABIHelpers@Storage@Windows@@QEBA?BW4tag_STATE_VALUE_TYPE@@XZ
    int GetSettingValueType() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@SettingPropertyToApiSetValueConverter@StateABIHelpers@Storage@Windows@@QEAAJPEAUIInspectable@@@Z
    long Initialize(IInspectable *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1SettingPropertyToApiSetValueConverter@StateABIHelpers@Storage@Windows@@QEAA@XZ
    ~SettingPropertyToApiSetValueConverter();
};
} // namespace Windows::Storage::StateABIHelpers
