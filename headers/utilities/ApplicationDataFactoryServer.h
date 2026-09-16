#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.Storage.ApplicationData.dll by Windissect. 8 member(s).
namespace Windows::Storage {
class ApplicationDataFactoryServer {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ActivateInstance@ApplicationDataFactoryServer@Storage@Windows@@UEAAJPEAPEAUIInspectable@@@Z
    virtual long ActivateInstance(IInspectable * *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0ApplicationDataFactoryServer@Storage@Windows@@QEAA@XZ
    ApplicationDataFactoryServer();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetForUserAsync@ApplicationDataFactoryServer@Storage@Windows@@UEAAJPEAUIUser@System@3@PEAPEAU?$IAsyncOperation@PEAVApplicationData@Storage@Windows@@@Foundation@3@@Z
    virtual long GetForUserAsync(::Windows::System::IUser *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Current@ApplicationDataFactoryServer@Storage@Windows@@UEAAJPEAPEAUIApplicationData@23@@Z
    virtual long get_Current(::Windows::Storage::IApplicationData * *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?BuildPropertyKeyByUserSid@ApplicationDataFactoryServer@Storage@Windows@@CAJPEAUHSTRING__@@PEAPEAU4@@Z
    static long BuildPropertyKeyByUserSid(HSTRING__*, HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetApplicationDataInstance@ApplicationDataFactoryServer@Storage@Windows@@CAJPEAUHSTRING__@@PEAPEAUIApplicationData@23@@Z
    static long GetApplicationDataInstance(HSTRING__*, ::Windows::Storage::IApplicationData * *);
};
} // namespace Windows::Storage
