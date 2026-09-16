#pragma once

#include <cstdint>

// Forward declarations (automatically generated)
class WindissectOpaque;
class CMarshaledInterface; 
class Common; 
namespace Microsoft { namespace WRL { class Details; } } 
class RoVariant; 
class State; 
namespace Windows { namespace Internal { class Details; } } 
namespace Windows { namespace Storage { class ApplicationDataCompositeValueServer; } } 
namespace Windows { namespace Storage { class StateABIHelpers; } } 
class AgileGitPtr; class CMarshaledInterface; class CNode; class CPair; class Chunk; class ChunkElementIterator; class ChunkView; class CloseHandle; class CloseStateContainer; class Common; class ConstrainedImpersonateLoggedOnUser; class Destroy; class EventRegistrationToken; class FEATURE_LOGGED_TRAITS; class FEATURE_STATE_CHANGE_SUBSCRIPTION__; class HINSTANCE__; class HKEY__; class HSTRING__; class IActivationFactory; class IClassFactory; class IFileSystemBindData; class IFileSystemBindData2; class IInspectable; class IRpcOptions; class IShellItem; class IStream; class IUnknown; class IWeakReference; class KeyTraits; class ReleaseSRWLockExclusive; class RoVariant; class RpcOptionsHelper; class SplitIterator; class State; class StateSchema; class WilFailureReport; class WilFailureReportInformation; class _CONTEXT; class _EVENT_DESCRIPTOR; class _EXCEPTION_RECORD; class _FILETIME; class _GUID; class _LARGE_INTEGER; class _RO_REGISTRATION_COOKIE; class _RTL_RUN_ONCE; class _RTL_SRWLOCK; class _TP_CALLBACK_INSTANCE; class _TP_TIMER; class _TP_WAIT; class _WIN32_FIND_DATAW; class __WIL_RTL_FEATURE_USAGE_DATA; class __WIL__WNF_STATE_NAME; class _tlgProvider_t; class _tlgWrapSz; class _tlgWrapperByVal; class lambda_22ae0402126a9b377652c127f3b030c1; class lambda_555ece05eb40144c1e2673634c4732a3; class lambda_6cb8c81068f1b2a378528c98eade5d01; class lambda_8bf17fa158a3a4f3664e1df030f57cd2; class lambda_c2fd7731c5ae0d37e65ea73be67c0f1b; class permission; class tag_HSTATE_NOTIFICATION; class tag_STATE_ENUM_ITEM; class thunk; class wil_FeatureState; class wil_details_FeatureReportingCache; class wil_details_FeatureStateCache; class wil_details_FeatureUsageSRUM; 
namespace Microsoft { namespace WRL { class ActivationFactory; class AgileRef; class ComPtr; class Details; class EventSource; class FtmBase; class Implements; class InvokeModeOptions; class RuntimeClassFlags; class SimpleSealedActivationFactory; } } 
namespace Microsoft { namespace WRL { namespace Wrappers { class HStringReference; class SRWLock; } } } 
namespace Microsoft { namespace WRL { namespace Wrappers { namespace Details { class SyncLockExclusive; class SyncLockShared; } } } } 
namespace TileDataLayer { namespace Migration { class ITdlMigration; } } 
namespace Windows { } 
namespace Windows { namespace ApplicationModel { namespace Core { class ICoreApplication; } } } 
namespace Windows { namespace Foundation { namespace Collections { class Detail; } } } 
namespace Windows { namespace Internal { class ComTaskPoolHandler; class Details; class GitPtr; class IAsyncFireCompletion; class StaticLifetimeStore; class String; class StringReference; } } 
namespace Windows { namespace Internal { namespace ComTaskPool { class CTaskWrapper; } } } 
namespace Windows { namespace Internal { namespace Storage { class IKnownFoldersUserModelStaticsPriv; } } } 
namespace Windows { namespace Management { namespace Core { class ApplicationDataManagerFactoryServer; class ApplicationDataManagerServer; class IApplicationDataManagerStatics; } } } 
namespace Windows { namespace Management { namespace Core { namespace Internal { class IApplicationDataManagerStaticsInternal; } } } } 
namespace Windows { namespace Management { namespace Deployment { namespace Internal { class IPackageManagerStateCreationInternal; } } } } 
namespace Windows { namespace Storage { class ApplicationData; class ApplicationDataCompositeValueServer; class ApplicationDataContainer; class ApplicationDataContainerServer; class ApplicationDataContainerSettingsServer; class ApplicationDataFactoryServer; class ApplicationDataServer; class IApplicationData; class IApplicationDataContainer; class IApplicationDataSetVersionHandler; class IKnownFoldersStaticsPriv; class ISetVersionDeferral; class IStorageFolder; class RestrictedApplicationDataServer; class SetVersionDeferral; class SetVersionRequest; class StateABIHelpers; } } 
namespace Windows { namespace Storage { namespace Private { class IApplicationDataCompositeValueInternal; } } } 
namespace Windows { namespace Storage { namespace StateABIImplementation { class ClearOperation; class GetForUserOperation; class SetVersionOperation; } } } 
namespace Windows { namespace System { class IUser; } } 
namespace Windows { namespace System { namespace Internal { class ISignInStateManager; } } } 
namespace XWinRT { class CElementTraits; class ComLock; class FakeStl; class InterfaceLifetimeTraits; class SerializingLockPolicy; class StringEquals; class TXPOSITION; class XHashMap; } 
namespace XWinRT { namespace SecureVersionTag { class TagManager; } } 
namespace XWinRT { namespace detail { class AcquireRead; class AcquireWrite; class LockHolder; class ReentrancyGuard; } } 
namespace std { class nothrow_t; class nullptr_t; } 
namespace wil { class FailureInfo; class process_heap_deleter; class srwlock; class unique_any_t; } 
namespace wil { namespace details { class DestroyThreadPoolTimer; class ResultStatus; class SystemThreadPoolMethods; class ThreadFailureCallbackHolder; class handle_invalid_resource_policy; class handle_null_resource_policy; class resource_policy; class unique_storage; } } 
namespace wil { namespace details_abi { class FeatureStateData; class ProcessLocalData; class ProcessLocalStorageData; class RawUsageIndex; class ThreadLocalData; class UsageIndexProperty; class UsageIndexes; class heap_vector; } } 
namespace wistd { class __compressed_pair; class default_delete; class function; class integral_constant; class unique_ptr; } 
namespace wistd { namespace __function { class __base; } } 

