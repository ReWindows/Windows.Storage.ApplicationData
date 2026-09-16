#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.Storage.ApplicationData.dll by Windissect. 50 member(s).
namespace Windows::Storage {
class ApplicationDataContainerSettingsServer {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@ApplicationDataContainerSettingsServer@Storage@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Clear@ApplicationDataContainerSettingsServer@Storage@Windows@@UEAAJXZ
    virtual long Clear();
    // Category: Method | Source: PDB Internal
    // Symbol: ?First@ApplicationDataContainerSettingsServer@Storage@Windows@@UEAAJPEAPEAU?$IIterator@PEAU?$IKeyValuePair@PEAUHSTRING__@@PEAUIInspectable@@@Collections@Foundation@Windows@@@Collections@Foundation@3@@Z
    virtual long First(WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@ApplicationDataContainerSettingsServer@Storage@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@ApplicationDataContainerSettingsServer@Storage@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@ApplicationDataContainerSettingsServer@Storage@Windows@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetView@ApplicationDataContainerSettingsServer@Storage@Windows@@UEAAJPEAPEAU?$IMapView@PEAUHSTRING__@@PEAUIInspectable@@@Collections@Foundation@3@@Z
    virtual long GetView(WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasKey@ApplicationDataContainerSettingsServer@Storage@Windows@@UEAAJPEAUHSTRING__@@PEAE@Z
    virtual long HasKey(HSTRING__*, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@ApplicationDataContainerSettingsServer@Storage@Windows@@UEAAJPEAXW4ApplicationDataLocality@23@AEBV?$ComPtr@UIPropertyValueStatics@Foundation@Windows@@@WRL@Microsoft@@@Z
    virtual long Initialize(void *, int, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Insert@ApplicationDataContainerSettingsServer@Storage@Windows@@UEAAJPEAUHSTRING__@@PEAUIInspectable@@PEAE@Z
    virtual long Insert(HSTRING__*, IInspectable *, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Lookup@ApplicationDataContainerSettingsServer@Storage@Windows@@UEAAJPEAUHSTRING__@@PEAPEAUIInspectable@@@Z
    virtual long Lookup(HSTRING__*, IInspectable * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@ApplicationDataContainerSettingsServer@Storage@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@ApplicationDataContainerSettingsServer@Storage@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Remove@ApplicationDataContainerSettingsServer@Storage@Windows@@UEAAJPEAUHSTRING__@@@Z
    virtual long Remove(HSTRING__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_MapChanged@ApplicationDataContainerSettingsServer@Storage@Windows@@UEAAJPEAU?$MapChangedEventHandler@PEAUHSTRING__@@PEAUIInspectable@@@Collections@Foundation@3@PEAUEventRegistrationToken@@@Z
    virtual long add_MapChanged(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Size@ApplicationDataContainerSettingsServer@Storage@Windows@@UEAAJPEAI@Z
    virtual long get_Size(unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_MapChanged@ApplicationDataContainerSettingsServer@Storage@Windows@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_MapChanged(EventRegistrationToken);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?SignalDataChanged@ApplicationDataContainerSettingsServer@Storage@Windows@@IEAAJXZ
    long SignalDataChanged();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalCreateContainerSettingsHashMapSnapshot@ApplicationDataContainerSettingsServer@Storage@Windows@@EEAAJPEAPEAV?$HashMap@PEAUHSTRING__@@PEAUIInspectable@@U?$DefaultHash@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@U?$DefaultEqualityPredicate@PEAUHSTRING__@@@4567@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@4567@U?$DefaultLifetimeTraits@PEAUIInspectable@@@4567@U?$HashMapOptions@PEAUHSTRING__@@PEAUIInspectable@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@$00$0A@$0A@@4567@@Internal@Collections@Foundation@3@@Z
    virtual long InternalCreateContainerSettingsHashMapSnapshot(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalCreatePropertyValue@ApplicationDataContainerSettingsServer@Storage@Windows@@EEAAJAEBQEAUHSTRING__@@PEBEIW4tag_STATE_VALUE_TYPE@@PEAPEAUIInspectable@@@Z
    virtual long InternalCreatePropertyValue(HSTRING__* const &, unsigned char const *, unsigned int, int, IInspectable * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalInsertValue@ApplicationDataContainerSettingsServer@Storage@Windows@@EEAAJAEBQEAUHSTRING__@@AEAVSettingPropertyToApiSetValueConverter@StateABIHelpers@23@PEBU_FILETIME@@@Z
    virtual long InternalInsertValue(HSTRING__* const &, WindissectOpaque &, _FILETIME const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalLookupCompositeValue@ApplicationDataContainerSettingsServer@Storage@Windows@@EEAAJAEBQEAUHSTRING__@@PEAPEAUIInspectable@@@Z
    virtual long InternalLookupCompositeValue(HSTRING__* const &, IInspectable * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SqmReadSettingError@ApplicationDataContainerSettingsServer@Storage@Windows@@AEAAXJ@Z
    void SqmReadSettingError(long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SqmWriteSettingError@ApplicationDataContainerSettingsServer@Storage@Windows@@AEAAXJ@Z
    void SqmWriteSettingError(long);
};
} // namespace Windows::Storage
