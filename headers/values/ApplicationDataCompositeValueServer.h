#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.Storage.ApplicationData.dll by Windissect. 60 member(s).
namespace Windows::Storage {
class ApplicationDataCompositeValueServer {
public:
    class Iterator;
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@ApplicationDataCompositeValueServer@Storage@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0ApplicationDataCompositeValueServer@Storage@Windows@@QEAA@XZ
    ApplicationDataCompositeValueServer();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Clear@ApplicationDataCompositeValueServer@Storage@Windows@@UEAAJXZ
    virtual long Clear();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Commit@ApplicationDataCompositeValueServer@Storage@Windows@@UEAAJPEAUIInspectable@@PEAUHSTRING__@@@Z
    virtual long Commit(IInspectable *, HSTRING__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?First@ApplicationDataCompositeValueServer@Storage@Windows@@UEAAJPEAPEAU?$IIterator@PEAU?$IKeyValuePair@PEAUHSTRING__@@PEAUIInspectable@@@Collections@Foundation@Windows@@@Collections@Foundation@3@@Z
    virtual long First(WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@ApplicationDataCompositeValueServer@Storage@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@ApplicationDataCompositeValueServer@Storage@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@ApplicationDataCompositeValueServer@Storage@Windows@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetView@ApplicationDataCompositeValueServer@Storage@Windows@@UEAAJPEAPEAU?$IMapView@PEAUHSTRING__@@PEAUIInspectable@@@Collections@Foundation@3@@Z
    virtual long GetView(WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasKey@ApplicationDataCompositeValueServer@Storage@Windows@@UEAAJPEAUHSTRING__@@PEAE@Z
    virtual long HasKey(HSTRING__*, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@ApplicationDataCompositeValueServer@Storage@Windows@@UEAAJPEAXPEAUHSTRING__@@@Z
    virtual long Initialize(void *, HSTRING__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Insert@ApplicationDataCompositeValueServer@Storage@Windows@@UEAAJPEAUHSTRING__@@PEAUIInspectable@@PEAE@Z
    virtual long Insert(HSTRING__*, IInspectable *, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetRuntimeClassName@ApplicationDataCompositeValueServer@Storage@Windows@@SAPEBGXZ
    static unsigned short const * InternalGetRuntimeClassName();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetTrustLevel@ApplicationDataCompositeValueServer@Storage@Windows@@SA?AW4TrustLevel@@XZ
    static int InternalGetTrustLevel();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Lookup@ApplicationDataCompositeValueServer@Storage@Windows@@UEAAJPEAUHSTRING__@@PEAPEAUIInspectable@@@Z
    virtual long Lookup(HSTRING__*, IInspectable * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@ApplicationDataCompositeValueServer@Storage@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@ApplicationDataCompositeValueServer@Storage@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Remove@ApplicationDataCompositeValueServer@Storage@Windows@@UEAAJPEAUHSTRING__@@@Z
    virtual long Remove(HSTRING__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@ApplicationDataCompositeValueServer@Storage@Windows@@UEAAJXZ
    virtual long RuntimeClassInitialize();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Serialize@ApplicationDataCompositeValueServer@Storage@Windows@@UEAAJPEAPEAEPEAI@Z
    virtual long Serialize(unsigned char * *, unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_MapChanged@ApplicationDataCompositeValueServer@Storage@Windows@@UEAAJPEAU?$MapChangedEventHandler@PEAUHSTRING__@@PEAUIInspectable@@@Collections@Foundation@3@PEAUEventRegistrationToken@@@Z
    virtual long add_MapChanged(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Size@ApplicationDataCompositeValueServer@Storage@Windows@@UEAAJPEAI@Z
    virtual long get_Size(unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_MapChanged@ApplicationDataCompositeValueServer@Storage@Windows@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_MapChanged(EventRegistrationToken);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1ApplicationDataCompositeValueServer@Storage@Windows@@UEAA@XZ
    virtual ~ApplicationDataCompositeValueServer();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?SignalDataChanged@ApplicationDataCompositeValueServer@Storage@Windows@@MEAAJXZ
    virtual long SignalDataChanged();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalCreateCompositeSettingsHashMapSnapshot@ApplicationDataCompositeValueServer@Storage@Windows@@EEAAJPEAPEAV?$HashMap@PEAUHSTRING__@@PEAUIInspectable@@U?$DefaultHash@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@U?$DefaultEqualityPredicate@PEAUHSTRING__@@@4567@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@4567@U?$DefaultLifetimeTraits@PEAUIInspectable@@@4567@U?$HashMapOptions@PEAUHSTRING__@@PEAUIInspectable@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@$00$0A@$0A@@4567@@Internal@Collections@Foundation@3@@Z
    virtual long InternalCreateCompositeSettingsHashMapSnapshot(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SqmReadSettingError@ApplicationDataCompositeValueServer@Storage@Windows@@AEAAXJ@Z
    void SqmReadSettingError(long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SqmWriteSettingError@ApplicationDataCompositeValueServer@Storage@Windows@@AEAAXJ@Z
    void SqmWriteSettingError(long);
};
} // namespace Windows::Storage
