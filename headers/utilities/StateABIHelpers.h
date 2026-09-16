#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.Storage.ApplicationData.dll by Windissect. 17 member(s).
namespace Windows::Storage {
class StateABIHelpers {
public:
    class Logging;
    class SettingPropertyToApiSetValueConverter;
public /*unspecified*/:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ApiSetEnumerateAtom@StateABIHelpers@Storage@Windows@@YAJPEAXW4tag_ENUMERATE_ITEM_TYPE@@PEAUtag_STATE_ENUM_ITEM@@PEAI@Z
    long ApiSetEnumerateAtom(void *, int, tag_STATE_ENUM_ITEM *, unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ApiSetEnumerateContainer@StateABIHelpers@Storage@Windows@@YAJPEAXW4tag_ENUMERATE_ITEM_TYPE@@PEAUtag_STATE_ENUM_ITEM@@PEAI@Z
    long ApiSetEnumerateContainer(void *, int, tag_STATE_ENUM_ITEM *, unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreatePropertyValueFromSettingData@StateABIHelpers@Storage@Windows@@YAJPEBEIW4tag_STATE_VALUE_TYPE@@AEAV?$ComPtr@UIPropertyValueStatics@Foundation@Windows@@@WRL@Microsoft@@PEAPEAUIInspectable@@@Z
    long CreatePropertyValueFromSettingData(unsigned char const *, unsigned int, int, WindissectOpaque &, IInspectable * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureFolderAccessible@StateABIHelpers@Storage@Windows@@YAJV?$ComPtr@UIStorageFolder@Storage@Windows@@@WRL@Microsoft@@PEAUIUser@System@3@@Z
    long EnsureFolderAccessible(WindissectOpaque, ::Windows::System::IUser *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnumerateApiSetItems@StateABIHelpers@Storage@Windows@@YAJPEAXP6AJ0W4tag_ENUMERATE_ITEM_TYPE@@PEAUtag_STATE_ENUM_ITEM@@PEAI@Z1PEAPEAU5@@Z
    long EnumerateApiSetItems(void *, long ( *)(void *, int, tag_STATE_ENUM_ITEM *, unsigned int *), int, tag_STATE_ENUM_ITEM * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FixStateLocationsAccess@StateABIHelpers@Storage@Windows@@YAJPEAUIUser@System@3@@Z
    long FixStateLocationsAccess(::Windows::System::IUser *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAppContainerSid@StateABIHelpers@Storage@Windows@@YAJPEAXPEAW4_APPCONTAINER_SID_TYPE@@K0@Z
    long GetAppContainerSid(void *, int *, unsigned long, void *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPropertyValueStaticInterface@StateABIHelpers@Storage@Windows@@YAJPEAPEAUIPropertyValueStatics@Foundation@3@@Z
    long GetPropertyValueStaticInterface(WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetStateApiSetPersistAttrib@StateABIHelpers@Storage@Windows@@YAJW4ApplicationDataLocality@23@PEAW4tag_STATE_PERSIST_ATTRIB@@@Z
    long GetStateApiSetPersistAttrib(int, int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsAppContainerProcess@StateABIHelpers@Storage@Windows@@YAJPEA_N@Z
    long IsAppContainerProcess(bool *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RepairAppRegistration@StateABIHelpers@Storage@Windows@@YAJPEBGJPEAUIUser@System@3@@Z
    long RepairAppRegistration(unsigned short const *, long, ::Windows::System::IUser *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RepairStateLocations@StateABIHelpers@Storage@Windows@@YAJPEBGJPEAUIUser@System@3@@Z
    long RepairStateLocations(unsigned short const *, long, ::Windows::System::IUser *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReportError@StateABIHelpers@Storage@Windows@@YAXJG@Z
    void ReportError(long, unsigned short);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TriggerRepairAppRegistrationIfNeeded@StateABIHelpers@Storage@Windows@@YAXPEBGJPEAUIUser@System@3@@Z
    void TriggerRepairAppRegistrationIfNeeded(unsigned short const *, long, ::Windows::System::IUser *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TriggerRepairStateLocationsIfNeeded@StateABIHelpers@Storage@Windows@@YAJPEBGJPEAUIUser@System@3@@Z
    long TriggerRepairStateLocationsIfNeeded(unsigned short const *, long, ::Windows::System::IUser *);
};
} // namespace Windows::Storage
