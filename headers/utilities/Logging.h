#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.Storage.ApplicationData.dll by Windissect. 30 member(s).
namespace Windows::Storage::StateABIHelpers {
class Logging {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogAppRegistrationRepairResult@Logging@StateABIHelpers@Storage@Windows@@SAJPEBGJJ@Z
    static long LogAppRegistrationRepairResult(unsigned short const *, long, long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogAppRegistrationRepairTriggered@Logging@StateABIHelpers@Storage@Windows@@SAJPEBGJ@Z
    static long LogAppRegistrationRepairTriggered(unsigned short const *, long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogDeleteDirectoryError@Logging@StateABIHelpers@Storage@Windows@@SAJPEBGJ@Z
    static long LogDeleteDirectoryError(unsigned short const *, long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogDeleteFileError@Logging@StateABIHelpers@Storage@Windows@@SAJPEBGJ_N@Z
    static long LogDeleteFileError(unsigned short const *, long, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogFixStateLocationsAccessFailed@Logging@StateABIHelpers@Storage@Windows@@SAJJ@Z
    static long LogFixStateLocationsAccessFailed(long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogFolderPathAccessCheckFailure@Logging@StateABIHelpers@Storage@Windows@@SAJPEBGJ@Z
    static long LogFolderPathAccessCheckFailure(unsigned short const *, long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogPublisherStorageFolderInstantiationError@Logging@StateABIHelpers@Storage@Windows@@SAJPEBGQEAXJ@Z
    static long LogPublisherStorageFolderInstantiationError(unsigned short const *, void * const, long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogRepairStateLocationsResult@Logging@StateABIHelpers@Storage@Windows@@SAJPEBGJJ@Z
    static long LogRepairStateLocationsResult(unsigned short const *, long, long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogRepairStateLocationsTriggered@Logging@StateABIHelpers@Storage@Windows@@SAJPEBGJ@Z
    static long LogRepairStateLocationsTriggered(unsigned short const *, long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogSharedLocalFolderInstantiationError@Logging@StateABIHelpers@Storage@Windows@@SAJQEAXJ@Z
    static long LogSharedLocalFolderInstantiationError(void * const, long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogStateUpdateRequired@Logging@StateABIHelpers@Storage@Windows@@SAJPEBU_EVENT_DESCRIPTOR@@PEBG1J@Z
    static long LogStateUpdateRequired(_EVENT_DESCRIPTOR const *, unsigned short const *, unsigned short const *, long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogStorageFolderInstantiationError@Logging@StateABIHelpers@Storage@Windows@@SAJW4tag_STATE_PERSIST_ATTRIB@@QEAXJ@Z
    static long LogStorageFolderInstantiationError(int, void * const, long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogTempCleanupAborted@Logging@StateABIHelpers@Storage@Windows@@SAJXZ
    static long LogTempCleanupAborted();
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogTempCleanupCompleted@Logging@StateABIHelpers@Storage@Windows@@SAJXZ
    static long LogTempCleanupCompleted();
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogTempCleanupProfileError@Logging@StateABIHelpers@Storage@Windows@@SAJPEBGJ@Z
    static long LogTempCleanupProfileError(unsigned short const *, long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogTempCleanupSkipped@Logging@StateABIHelpers@Storage@Windows@@SAJXZ
    static long LogTempCleanupSkipped();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetPerformanceMarker@Logging@StateABIHelpers@Storage@Windows@@SAJPEBU_EVENT_DESCRIPTOR@@@Z
    static long SetPerformanceMarker(_EVENT_DESCRIPTOR const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Unregister@Logging@StateABIHelpers@Storage@Windows@@SAJXZ
    static long Unregister();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AcquireLockAndInitLogging@Logging@StateABIHelpers@Storage@Windows@@CAJXZ
    static long AcquireLockAndInitLogging();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetLocalityPathString@Logging@StateABIHelpers@Storage@Windows@@CAJW4tag_STATE_PERSIST_ATTRIB@@QEAXIPEAG@Z
    static long GetLocalityPathString(int, void * const, unsigned int, unsigned short *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPackageFamilyName@Logging@StateABIHelpers@Storage@Windows@@CAJIPEAG@Z
    static long GetPackageFamilyName(unsigned int, unsigned short *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPublisherCacheFolderPathString@Logging@StateABIHelpers@Storage@Windows@@CAJPEBGQEAXIPEAG@Z
    static long GetPublisherCacheFolderPathString(unsigned short const *, void * const, unsigned int, unsigned short *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSharedLocalFolderPathString@Logging@StateABIHelpers@Storage@Windows@@CAJQEAXIPEAG@Z
    static long GetSharedLocalFolderPathString(void * const, unsigned int, unsigned short *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@Logging@StateABIHelpers@Storage@Windows@@CAJXZ
    static long Initialize();
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogEvent@Logging@StateABIHelpers@Storage@Windows@@CAJPEBU_EVENT_DESCRIPTOR@@PEBG1J@Z
    static long LogEvent(_EVENT_DESCRIPTOR const *, unsigned short const *, unsigned short const *, long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogEvent@Logging@StateABIHelpers@Storage@Windows@@CAJPEBU_EVENT_DESCRIPTOR@@PEBG1JJ@Z
    static long LogEvent(_EVENT_DESCRIPTOR const *, unsigned short const *, unsigned short const *, long, long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogEvent@Logging@StateABIHelpers@Storage@Windows@@CAJPEBU_EVENT_DESCRIPTOR@@PEBGJ@Z
    static long LogEvent(_EVENT_DESCRIPTOR const *, unsigned short const *, long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogEvent@Logging@StateABIHelpers@Storage@Windows@@CAJPEBU_EVENT_DESCRIPTOR@@@Z
    static long LogEvent(_EVENT_DESCRIPTOR const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogEvent@Logging@StateABIHelpers@Storage@Windows@@CAJPEBU_EVENT_DESCRIPTOR@@PEBG@Z
    static long LogEvent(_EVENT_DESCRIPTOR const *, unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemovePIIfromFilePath@Logging@StateABIHelpers@Storage@Windows@@CAPEBGPEBG@Z
    static unsigned short const * RemovePIIfromFilePath(unsigned short const *);
};
} // namespace Windows::Storage::StateABIHelpers
