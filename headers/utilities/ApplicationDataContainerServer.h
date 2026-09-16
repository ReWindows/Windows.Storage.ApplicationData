#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.Storage.ApplicationData.dll by Windissect. 31 member(s).
namespace Windows::Storage {
class ApplicationDataContainerServer {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@ApplicationDataContainerServer@Storage@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0ApplicationDataContainerServer@Storage@Windows@@QEAA@XZ
    ApplicationDataContainerServer();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Close@ApplicationDataContainerServer@Storage@Windows@@UEAAJXZ
    virtual long Close();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateContainer@ApplicationDataContainerServer@Storage@Windows@@UEAAJPEAUHSTRING__@@W4ApplicationDataCreateDisposition@23@PEAPEAUIApplicationDataContainer@23@@Z
    virtual long CreateContainer(HSTRING__*, int, ::Windows::Storage::IApplicationDataContainer * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DeleteContainer@ApplicationDataContainerServer@Storage@Windows@@UEAAJPEAUHSTRING__@@@Z
    virtual long DeleteContainer(HSTRING__*);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@ApplicationDataContainerServer@Storage@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@ApplicationDataContainerServer@Storage@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@ApplicationDataContainerServer@Storage@Windows@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@ApplicationDataContainerServer@Storage@Windows@@UEAAJQEAXW4ApplicationDataLocality@23@AEBV?$ComPtr@UIPropertyValueStatics@Foundation@Windows@@@WRL@Microsoft@@PEAUIUser@System@3@@Z
    virtual long Initialize(void * const, int, WindissectOpaque const &, ::Windows::System::IUser *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@ApplicationDataContainerServer@Storage@Windows@@UEAAJQEAXW4ApplicationDataLocality@23@PEAUHSTRING__@@W4ApplicationDataCreateDisposition@23@AEBV?$ComPtr@UIPropertyValueStatics@Foundation@Windows@@@WRL@Microsoft@@PEA_N@Z
    virtual long Initialize(void * const, int, HSTRING__*, int, WindissectOpaque const &, bool *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@ApplicationDataContainerServer@Storage@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@ApplicationDataContainerServer@Storage@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Containers@ApplicationDataContainerServer@Storage@Windows@@UEAAJPEAPEAU?$IMapView@PEAUHSTRING__@@PEAVApplicationDataContainer@Storage@Windows@@@Collections@Foundation@3@@Z
    virtual long get_Containers(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Locality@ApplicationDataContainerServer@Storage@Windows@@UEAAJPEAW4ApplicationDataLocality@23@@Z
    virtual long get_Locality(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Name@ApplicationDataContainerServer@Storage@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_Name(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Values@ApplicationDataContainerServer@Storage@Windows@@UEAAJPEAPEAUIPropertySet@Collections@Foundation@3@@Z
    virtual long get_Values(WindissectOpaque * *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1ApplicationDataContainerServer@Storage@Windows@@UEAA@XZ
    virtual ~ApplicationDataContainerServer();
};
} // namespace Windows::Storage
