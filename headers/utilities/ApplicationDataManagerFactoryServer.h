#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.Storage.ApplicationData.dll by Windissect. 7 member(s).
namespace Windows::Management::Core {
class ApplicationDataManagerFactoryServer {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ActivateInstance@ApplicationDataManagerFactoryServer@Core@Management@Windows@@UEAAJPEAPEAUIInspectable@@@Z
    virtual long ActivateInstance(IInspectable * *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0ApplicationDataManagerFactoryServer@Core@Management@Windows@@QEAA@XZ
    ApplicationDataManagerFactoryServer();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateForPackageFamily@ApplicationDataManagerFactoryServer@Core@Management@Windows@@UEAAJPEAUHSTRING__@@PEAPEAUIApplicationData@Storage@4@@Z
    virtual long CreateForPackageFamily(HSTRING__*, ::Windows::Storage::IApplicationData * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateForPackageFamilyWithUserImpersonation@ApplicationDataManagerFactoryServer@Core@Management@Windows@@UEAAJPEAUHSTRING__@@PEAPEAUIApplicationData@Storage@4@@Z
    virtual long CreateForPackageFamilyWithUserImpersonation(HSTRING__*, ::Windows::Storage::IApplicationData * *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalCreateForPackageFamily@ApplicationDataManagerFactoryServer@Core@Management@Windows@@AEAAJPEAUHSTRING__@@PEAXPEAPEAUIApplicationData@Storage@4@@Z
    long InternalCreateForPackageFamily(HSTRING__*, void *, ::Windows::Storage::IApplicationData * *);
};
} // namespace Windows::Management::Core
