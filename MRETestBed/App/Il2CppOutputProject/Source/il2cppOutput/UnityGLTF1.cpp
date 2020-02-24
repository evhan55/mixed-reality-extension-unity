#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>
#include <stdint.h>

#include "codegen/il2cpp-codegen.h"
#include "il2cpp-object-internals.h"

template <typename R, typename T1, typename T2, typename T3, typename T4>
struct VirtFuncInvoker4
{
	typedef R (*Func)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
	}
};
template <typename R>
struct VirtFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3>
struct VirtFuncInvoker3
{
	typedef R (*Func)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename T1>
struct VirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct VirtFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct GenericVirtFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R, typename T1>
struct InterfaceFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1>
struct InterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R>
struct InterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct InterfaceFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct GenericInterfaceFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};

// GLTF.AttributeAccessor
struct AttributeAccessor_t54DE63C0FA54991AB605635BD32870BA45E9FF8C;
// GLTF.Math.Color[]
struct ColorU5BU5D_tAC03762E5A0861EA248597DDB8B645A9C927D92E;
// GLTF.Math.Matrix4x4
struct Matrix4x4_t43BAF443FBFCE8DA422507220B68CDD4CA7F19D9;
// GLTF.Math.Matrix4x4[]
struct Matrix4x4U5BU5D_tE3A13CB78E1B2CBDCD537180E7C6D83E18B0D9F0;
// GLTF.Math.Vector2[]
struct Vector2U5BU5D_tEA2AAE17DB7819302D8F79D98E0B685C1B0B2B35;
// GLTF.Math.Vector3[]
struct Vector3U5BU5D_t2D7E64F9BE7821BFC6DB876572F2B13386DE7540;
// GLTF.Math.Vector4[]
struct Vector4U5BU5D_tD623FACAF5A8002EF6F368F9FE7CD4CA56BA4033;
// GLTF.Schema.AccessorId
struct AccessorId_t6C51102D50B95D309D47FD946FE62ED76C16B83F;
// GLTF.Schema.AccessorSparse
struct AccessorSparse_t503861445674C5161C3AF2F1D15EA13BA2F6A69C;
// GLTF.Schema.Asset
struct Asset_t11E5855206F01C1EC0CBA2520D06BD265A17D72B;
// GLTF.Schema.BufferId
struct BufferId_t1F12DE28BBFD6A5C038FA14B0BCA46D852CC00F4;
// GLTF.Schema.BufferViewId
struct BufferViewId_tAE1D88A5BF8DD1B736DDDF93CEA0D07FE666D871;
// GLTF.Schema.DefaultExtensionFactory
struct DefaultExtensionFactory_t6F7054C0E34948CE71E4DB22B285190D70C9B3E8;
// GLTF.Schema.GLTFMaterial
struct GLTFMaterial_t3823C70B2B7CB4235F78C94163E7FA538F482C99;
// GLTF.Schema.GLTFRoot
struct GLTFRoot_t3CDB3EBE42E8A0E06DD58B35BAD5D98EF44F3A6B;
// GLTF.Schema.GLTFScene
struct GLTFScene_t668D116E319247178F4641B2F3A4DF33C6343BB6;
// GLTF.Schema.GLTFScene[]
struct GLTFSceneU5BU5D_tE1D351EC9A59EB35FC50C43ABEDBBF83F18EA986;
// GLTF.Schema.GLTFTexture
struct GLTFTexture_t2D12B18E729EBA0BBA4A5B51A991297BDFF7CD65;
// GLTF.Schema.ImageId
struct ImageId_t6B75A8719AF05FF5EF157163A485CAB340DDE68B;
// GLTF.Schema.NodeId
struct NodeId_tB863E2705852710AA05166CD9250E50B3A9FB8F0;
// GLTF.Schema.NodeId[]
struct NodeIdU5BU5D_t3066AB1DB7B8B5DD32F0EDEA805C695EF73E6B6B;
// GLTF.Schema.SamplerId
struct SamplerId_t72B86914DEF9D622B3D7F8CF2812317F81478EF4;
// GLTF.Schema.SceneId
struct SceneId_t67CF37B99AF8D98A11C03A45BDD51773EE6D605C;
// GLTF.Schema.Skin
struct Skin_t464B07F248F89DD7228D66EAD836CE5B20BB6F34;
// Microsoft.Win32.SafeHandles.SafeFileHandle
struct SafeFileHandle_tE1B31BE63CD11BBF2B9B6A205A72735F32EB1BCB;
// Newtonsoft.Json.Linq.JToken
struct JToken_t89BC2217CEF39D226DB2948A79BAB75018D0894D;
// System.Action
struct Action_t591D2A86165F896B4B800BB5C25CE18672A55579;
// System.Action`1<System.Object>
struct Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0;
// System.Action`2<System.Object,System.Object>
struct Action_2_t0DB6FD6F515527EAB552B690A291778C6F00D48C;
// System.Action`2<UnityEngine.GameObject,System.Runtime.ExceptionServices.ExceptionDispatchInfo>
struct Action_2_tA8345456806B324BA9E2C0C4E51F157CE28878B6;
// System.ArgumentNullException
struct ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD;
// System.AsyncCallback
struct AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4;
// System.Byte[]
struct ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821;
// System.Char[]
struct CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Threading.Tasks.Task>
struct Dictionary_2_t70161CFEB8DA3C79E19E31D0ED948D3C2925095F;
// System.Collections.Generic.Dictionary`2<System.String,GLTF.Schema.ExtensionFactory>
struct Dictionary_2_tCE39721A4E2D886DB49881BE5A01F58BFF4D9C9B;
// System.Collections.Generic.Dictionary`2<System.String,GLTF.Schema.IExtension>
struct Dictionary_2_t6BC8DB3735B763696A44D593FC99D69F69C69D51;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_tD6E204872BA9FD506A0287EF68E285BEB9EC0DFB;
// System.Collections.Generic.Dictionary`2<System.String,System.Net.Http.Headers.HeaderInfo>
struct Dictionary_2_tEBE1ABD140AD7E9C7019A4D27C5C036F79BA1565;
// System.Collections.Generic.Dictionary`2<System.String,System.Net.Http.Headers.HttpHeaders/HeaderBucket>
struct Dictionary_2_t68C9612F2AAB4592A72574ECE587789329FFC1B3;
// System.Collections.Generic.IEnumerable`1<GLTF.Schema.NodeId>
struct IEnumerable_1_t7C31BD36AE02E553D44906272A748B36C35F2CF9;
// System.Collections.Generic.List`1<GLTF.Schema.Accessor>
struct List_1_tD6BD43F18D577F434BC95E3CF0C780791BD97313;
// System.Collections.Generic.List`1<GLTF.Schema.BufferView>
struct List_1_t356616BC333D365D4AFA503A86F27C8F2C7DE3CE;
// System.Collections.Generic.List`1<GLTF.Schema.GLTFAnimation>
struct List_1_t3304AD243ED738B1AEC46C30143FBB620C43B139;
// System.Collections.Generic.List`1<GLTF.Schema.GLTFBuffer>
struct List_1_t698779CAF3B943DDE33E12735232CBF866ABE242;
// System.Collections.Generic.List`1<GLTF.Schema.GLTFCamera>
struct List_1_t958B443584AC2E8AF65F8F80BC610B23DB4BD020;
// System.Collections.Generic.List`1<GLTF.Schema.GLTFImage>
struct List_1_tDB08AF9939503E35BA48B9658EE24D588324833E;
// System.Collections.Generic.List`1<GLTF.Schema.GLTFMaterial>
struct List_1_tFD5B8627A061AEB46C1B0E96E24588A3757A93E5;
// System.Collections.Generic.List`1<GLTF.Schema.GLTFMesh>
struct List_1_t7F5CF0F89CD771A5DB0E1037DCF22E390E38084C;
// System.Collections.Generic.List`1<GLTF.Schema.GLTFScene>
struct List_1_tAED3D6A1ED2710E0A2CB5BACC62D7D58311F4DFD;
// System.Collections.Generic.List`1<GLTF.Schema.GLTFTexture>
struct List_1_tF4641F23A221781EDCA936E48FE1277514E220CF;
// System.Collections.Generic.List`1<GLTF.Schema.Node>
struct List_1_tD4508DBDDE1EC3543AF37D7BD3C2AD00ECDD389F;
// System.Collections.Generic.List`1<GLTF.Schema.NodeId>
struct List_1_t1B89882FA16EC868F9405338766EE999CD21DBAD;
// System.Collections.Generic.List`1<GLTF.Schema.Sampler>
struct List_1_t7FF059A33841C133771B08A6612E371F8A04A7E2;
// System.Collections.Generic.List`1<GLTF.Schema.Skin>
struct List_1_t96FB62D69AAB44436AF25AE0968E322706DEB7A7;
// System.Collections.Generic.List`1<System.Double>
struct List_1_t04E879C847712A9A4EDFA05DC4B8052C4487814C;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D;
// System.Collections.Generic.List`1<System.String>
struct List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3;
// System.Collections.Generic.List`1<UnityGLTF.Cache.MeshCacheData/PrimitiveCacheData>
struct List_1_t9420DF802D37FA4BB2242207D802D9AD3A6CDC7D;
// System.Collections.IDictionary
struct IDictionary_t1BD5C1546718A374EA8122FBD6C6EE45331E8CE7;
// System.Collections.IEnumerator
struct IEnumerator_t8789118187258CC88B77AFAC6315B5AF87D3E18A;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE;
// System.Delegate[]
struct DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196;
// System.Exception
struct Exception_t;
// System.Func`1<System.Boolean>
struct Func_1_t4ABD6DAD480574F152452DD6B9C9A55F4F6655F1;
// System.Func`1<System.IO.Stream>
struct Func_1_tF4352FCFF143E795C0D762BB22D817C4457922EC;
// System.Func`1<System.Object>
struct Func_1_t59BE545225A69AFD7B2056D169D0083051F6D386;
// System.Func`1<System.Threading.Tasks.Task/ContingentProperties>
struct Func_1_t48C2978A48CE3F2F6EB5B6DE269D00746483BB1F;
// System.Func`1<System.Threading.Tasks.Task>
struct Func_1_t864AB9A10EEBC12BC5B32E4C8BD6F0F8E0D2F728;
// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<System.IO.Stream>>
struct Func_2_t97AE46232676B6C4CB84D0101A45061F2288FCE5;
// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<System.Net.Http.HttpResponseMessage>>
struct Func_2_tFB268CDB738B6CBC785B7ECDDE8052F2D44D367C;
// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<UnityEngine.GameObject>>
struct Func_2_tAA953F5200B1F78C214ABA91EBDFD38B015A7E4F;
// System.Globalization.CultureInfo
struct CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F;
// System.IAsyncResult
struct IAsyncResult_t8E194308510B375B42432981AE5E7488C458D598;
// System.IO.FileNotFoundException
struct FileNotFoundException_t0B3F0AE5C94A781A7E2ABBD786F91C229B703431;
// System.IO.FileStream
struct FileStream_tA770BF9AF0906644D43C81B962C7DBC3BC79A418;
// System.IO.MemoryStream
struct MemoryStream_t495F44B85E6B4DDE2BB7E17DE963256A74E2298C;
// System.IO.Stream
struct Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7;
// System.IO.Stream/ReadWriteTask
struct ReadWriteTask_tFA17EEE8BC5C4C83EAEFCC3662A30DE351ABAA80;
// System.IO.Stream[]
struct StreamU5BU5D_tDADB5390E6C9A2BDA8A341EECC9F7F9DE08DB362;
// System.IProgress`1<UnityGLTF.ImportProgress>
struct IProgress_1_t2DFCFB5BE1424BAF654AD0B3CD63A7B4F9D7811C;
// System.Int32[]
struct Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83;
// System.Int32[][]
struct Int32U5BU5DU5BU5D_tCA34E042D233821D51B4DAFB480EE602F2DBEF43;
// System.IntPtr[]
struct IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD;
// System.LocalDataStoreHolder
struct LocalDataStoreHolder_tE0636E08496405406FD63190AC51EEB2EE51E304;
// System.LocalDataStoreMgr
struct LocalDataStoreMgr_t1964DDB9F2BE154BE3159A7507D0D0CCBF8FDCA9;
// System.MulticastDelegate
struct MulticastDelegate_t;
// System.Net.Http.Headers.HttpContentHeaders
struct HttpContentHeaders_t98D8657573ADACD807B6C941F46E6D69EDFD13A0;
// System.Net.Http.Headers.HttpRequestHeaders
struct HttpRequestHeaders_tD29E9D795891A7A0D4FE8C8AA7BF0E756FCA40D4;
// System.Net.Http.Headers.HttpResponseHeaders
struct HttpResponseHeaders_t51F7C46C9CE47E3B424A6137CE8F5BCA4E2B1D59;
// System.Net.Http.HttpClient
struct HttpClient_tC7477E4B30DD5CFE1B41DD9CD2EA1F83DB4DE9E7;
// System.Net.Http.HttpContent
struct HttpContent_t678722F60CA151DD19AFCA917657BE24F111A41D;
// System.Net.Http.HttpContent/FixedMemoryStream
struct FixedMemoryStream_t181662654A3A2002A1F5D33E7747A9E12DAD139C;
// System.Net.Http.HttpMessageHandler
struct HttpMessageHandler_t0094EF2850CF6420CBFC3952ED337AD381644894;
// System.Net.Http.HttpRequestException
struct HttpRequestException_tD4D14C20B90F362C83781589E7508A05E7060349;
// System.Net.Http.HttpRequestMessage
struct HttpRequestMessage_tBBC9EBC5D6C1B7E30F9927AABBDB65792FFB5427;
// System.Net.Http.HttpResponseMessage
struct HttpResponseMessage_t619DB9FDC8E63CDF2D0A314B61A4C6609A43F904;
// System.Net.Security.RemoteCertificateValidationCallback
struct RemoteCertificateValidationCallback_t9C6BA19681BAA3CD78E6674293A57FF5DF62831E;
// System.NotSupportedException
struct NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010;
// System.Object[]
struct ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A;
// System.OutOfMemoryException
struct OutOfMemoryException_t2DF3EAC178583BD1DEFAAECBEDB2AF1EA86FBFC7;
// System.Predicate`1<System.Object>
struct Predicate_1_t4AA10EFD4C5497CA1CD0FE35A6AF5990FF5D0979;
// System.Predicate`1<System.Threading.Tasks.Task>
struct Predicate_1_tF4286C34BB184CE5690FDCEBA7F09FC68D229335;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Runtime.CompilerServices.IAsyncStateMachine
struct IAsyncStateMachine_tEFDFBE18E061A6065AB2FF735F1425FB59F919BC;
// System.Runtime.ExceptionServices.ExceptionDispatchInfo
struct ExceptionDispatchInfo_t0C54083F3909DAF986A4DEAA7C047559531E0E2A;
// System.Runtime.Serialization.IFormatterConverter
struct IFormatterConverter_tC3280D64D358F47EA4DAF1A65609BA0FC081888A;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t1BB80E9C9DEA52DBF464487234B045E2930ADA26;
// System.Security.Cryptography.OidCollection
struct OidCollection_tEB423F1150E53DCF513BF5A699F911586A31B94E;
// System.Security.Cryptography.X509Certificates.X509Certificate
struct X509Certificate_t6859B8914E252B6831D6F59A2A720CD23F7FA7B2;
// System.Security.Cryptography.X509Certificates.X509Certificate2
struct X509Certificate2_tC1C49EB4CFD571C2FFDE940C24BC69651A058F73;
// System.Security.Cryptography.X509Certificates.X509Certificate2Collection
struct X509Certificate2Collection_t14D64A5A2CFE4EA1782A417F975C2AB85BDA190D;
// System.Security.Cryptography.X509Certificates.X509CertificateCollection
struct X509CertificateCollection_t824A6C58D0D1B4A7CAE30F26CE8EE4B23A8A1833;
// System.Security.Cryptography.X509Certificates.X509CertificateImpl
struct X509CertificateImpl_t89610BFDE87B872143A4623CFC7F17275EB48313;
// System.Security.Cryptography.X509Certificates.X509Chain
struct X509Chain_t4A28E9A30CBB331C9B68AE4AFCB30625C6C8B538;
// System.Security.Cryptography.X509Certificates.X509ChainImpl
struct X509ChainImpl_t34FABF07BEA0CFB6D88717BCDDE0607D9DA13A67;
// System.Security.Cryptography.X509Certificates.X509ChainPolicy
struct X509ChainPolicy_tCA1D9E9842A16ACD71D35E9C36659E3E861D74DD;
// System.Security.Cryptography.X509Certificates.X509ChainStatus[]
struct X509ChainStatusU5BU5D_tA8CCC33D50C4BCF6F657063CD1DACCC3B9A7BFBB;
// System.Security.Principal.IPrincipal
struct IPrincipal_t63FD7F58FBBE134C8FE4D31710AAEA00B000F0BF;
// System.Single[]
struct SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5;
// System.String
struct String_t;
// System.String[]
struct StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E;
// System.Threading.AsyncLocal`1<System.Globalization.CultureInfo>
struct AsyncLocal_1_tD39651C2EDD14B144FF3D9B9C716F807EB57655A;
// System.Threading.CancellationCallbackInfo
struct CancellationCallbackInfo_t8CDEA0AA9C9D1A2321FE2F88878F4B5E0901CF36;
// System.Threading.CancellationTokenRegistration[]
struct CancellationTokenRegistrationU5BU5D_t4B36771A6344CFC66696BB16419C664E286DAF1B;
// System.Threading.CancellationTokenSource
struct CancellationTokenSource_tF480B7E74A032667AFBD31F0530D619FB43AD3FE;
// System.Threading.ContextCallback
struct ContextCallback_t8AE8A965AC6C7ECD396F527F15CDC8E683BE1676;
// System.Threading.ExecutionContext
struct ExecutionContext_t0E11C30308A4CC964D8A2EA9132F9BDCE5362C70;
// System.Threading.InternalThread
struct InternalThread_tA4C58C2A7D15AF43C3E7507375E6D31DBBE7D192;
// System.Threading.ManualResetEvent
struct ManualResetEvent_tDFAF117B200ECA4CCF4FD09593F949A016D55408;
// System.Threading.SemaphoreSlim
struct SemaphoreSlim_t2E2888D1C0C8FAB80823C76F1602E4434B8FA048;
// System.Threading.SparselyPopulatedArray`1<System.Threading.CancellationCallbackInfo>[]
struct SparselyPopulatedArray_1U5BU5D_tF1A5F348104DB1ECF18799250B41740FCAA77813;
// System.Threading.Tasks.StackGuard
struct StackGuard_tE431ED3BBD1A18705FEE6F948EBF7FA2E99D64A9;
// System.Threading.Tasks.Task
struct Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2;
// System.Threading.Tasks.Task/ContingentProperties
struct ContingentProperties_t7149A27D01507C74E8BDAAA3848B45D2644FDF08;
// System.Threading.Tasks.TaskFactory
struct TaskFactory_tF3C6D983390ACFB40B4979E225368F78006D6155;
// System.Threading.Tasks.TaskFactory`1<System.IO.Stream>
struct TaskFactory_1_tE7B6DC2F22643759D47ED49CDDBD8C35D9383D8F;
// System.Threading.Tasks.TaskFactory`1<System.Net.Http.HttpResponseMessage>
struct TaskFactory_1_t580CAEE6F335CE6435DE183D51DA8D7334623D89;
// System.Threading.Tasks.TaskFactory`1<UnityEngine.GameObject>
struct TaskFactory_1_t178035BCBEC1546FC38538222A9C3DBFB601ABFE;
// System.Threading.Tasks.TaskScheduler
struct TaskScheduler_t966F2798F198FA90A0DA8EFC92BAC08297793114;
// System.Threading.Tasks.Task`1<System.IO.Stream>
struct Task_1_tAA7557E5A6A8B2C89E44907CB5B0502A618E9D01;
// System.Threading.Tasks.Task`1<System.Int32>
struct Task_1_t640F0CBB720BB9CD14B90B7B81624471A9F56D87;
// System.Threading.Tasks.Task`1<System.Net.Http.HttpResponseMessage>
struct Task_1_t519CB3A303B53176BD616AC273201D66B84FF270;
// System.Threading.Tasks.Task`1<System.Object>
struct Task_1_tA56001ED5270173CA1432EDFCD84EABB1024BC09;
// System.Threading.Tasks.Task`1<System.Threading.Tasks.VoidTaskResult>
struct Task_1_t1359D75350E9D976BFA28AD96E417450DE277673;
// System.Threading.Tasks.Task`1<UnityEngine.GameObject>
struct Task_1_t5029FFD61E4B10A1E614C1D97F1F0FA5B04557EC;
// System.Threading.Tasks.Task`1<UnityEngine.Material>
struct Task_1_t74879D22F3CC6429D4D6FCC94A7597CE737CB1DA;
// System.Threading.Tasks.Task`1<UnityEngine.Mesh>
struct Task_1_tF3C52637D7C212377E29F98D2AD11BBD43732A2B;
// System.Threading.Thread
struct Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7;
// System.Threading.ThreadStart
struct ThreadStart_t09FFA4371E4B2A713F212B157CC9B8B61983B5BF;
// System.Threading.Timer
struct Timer_t67FAB8E41573B4FA09CA56AE30725AF4297C2553;
// System.Threading.TimerCallback
struct TimerCallback_tC89F2FB1294A86F64DEB2C1F68024954018AA219;
// System.Type
struct Type_t;
// System.Type[]
struct TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F;
// System.UInt32[]
struct UInt32U5BU5D_t9AA834AF2940E75BBF8E3F08FF0D20D266DB71CB;
// System.Uri
struct Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E;
// System.Uri/UriInfo
struct UriInfo_t9FCC6BD4EC1EA14D75209E6A35417057BF6EDC5E;
// System.UriParser
struct UriParser_t07C77D673CCE8D2DA253B8A7ACCB010147F1A4AC;
// System.Version
struct Version_tDBE6876C59B6F56D4F8CAA03851177ABC6FE0DFD;
// System.Void
struct Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017;
// UnityEngine.Application/LowMemoryCallback
struct LowMemoryCallback_t3862486677D10CD16ECDA703CFB75039A4B3AE00;
// UnityEngine.BoneWeight[]
struct BoneWeightU5BU5D_t0CFB75EF43257A99CDCF393A069504F365A13F8D;
// UnityEngine.Color[]
struct ColorU5BU5D_t166D390E0E6F24360F990D1F81881A72B73CA399;
// UnityEngine.Component
struct Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621;
// UnityEngine.GameObject
struct GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tBF9D474747511CF34A040A1697E34C74C19BB520;
// UnityEngine.Material
struct Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598;
// UnityEngine.Matrix4x4[]
struct Matrix4x4U5BU5D_t1C64F7A0C34058334A8A95BF165F0027690598C9;
// UnityEngine.Mesh
struct Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C;
// UnityEngine.MeshTopology[]
struct MeshTopologyU5BU5D_tFB3BA87B0EA1E3A3AAEBA590B5458C0913B9DBD5;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429;
// UnityEngine.Object
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0;
// UnityEngine.ScriptableObject
struct ScriptableObject_tAB015486CEAB714DA0D5C1BA389B84FB90427734;
// UnityEngine.Shader
struct Shader_tE2731FF351B74AB4186897484FB01E000C1160CA;
// UnityEngine.SkinnedMeshRenderer
struct SkinnedMeshRenderer_tFC8103EE7842F7F8A98BEF0C855D32A9711B7B65;
// UnityEngine.Texture
struct Texture_t387FE83BB848001FD06B14707AEA6D5A0F6A95F4;
// UnityEngine.Texture2D[]
struct Texture2DU5BU5D_tCAC03055C735C020BAFC218D55183CF03E74C1C9;
// UnityEngine.Transform
struct Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA;
// UnityEngine.Transform[]
struct TransformU5BU5D_t4F5A1132877D8BA66ABC0A9A7FADA4E0237A7804;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28;
// UnityEngine.Vector3[][]
struct Vector3U5BU5DU5BU5D_tB83B3D7B4B4D7AD0A199DD45DF2963AB05A519AC;
// UnityEngine.Vector4[]
struct Vector4U5BU5D_t51402C154FFFCF7217A9BEC4B834F0B726C10F66;
// UnityEngine.WaitForEndOfFrame
struct WaitForEndOfFrame_t75980FB3F246D6AD36A85CA2BFDF8474E5EEBCCA;
// UnityEngine.WaitUntil
struct WaitUntil_t012561515C0E1D3DEA19DB3A05444B020C68E13F;
// UnityGLTF.AsyncCoroutineHelper
struct AsyncCoroutineHelper_t032BCD93473D0EBD9757396C7B539A1475B92757;
// UnityGLTF.Cache.AnimationCacheData[]
struct AnimationCacheDataU5BU5D_t88E1E8039583641016EAF933DED26D2FCA34F506;
// UnityGLTF.Cache.AssetCache
struct AssetCache_tE060C78C9F54F8BF6F50E904460FA53958B59D91;
// UnityGLTF.Cache.BufferCacheData
struct BufferCacheData_t94725215DAEBBBFF691A97822F8744A8038F6743;
// UnityGLTF.Cache.BufferCacheData[]
struct BufferCacheDataU5BU5D_t090C5C4874ADA45FFD0C6E6B36010DD196C0975E;
// UnityGLTF.Cache.MaterialCacheData
struct MaterialCacheData_t69ADD85645108393A5E19F1C642F81F977EA57CE;
// UnityGLTF.Cache.MaterialCacheData[]
struct MaterialCacheDataU5BU5D_t9A21B420B621CCFCE6242A807F055E5E17C12B27;
// UnityGLTF.Cache.MeshCacheData
struct MeshCacheData_tDC17655604D5D9B4FF0FFB71FEAB50212603F664;
// UnityGLTF.Cache.MeshCacheData[]
struct MeshCacheDataU5BU5D_t172934B760B5F101344848AB49BADBC9CAC4E59C;
// UnityGLTF.Cache.RefCountedCacheData
struct RefCountedCacheData_t3E7A4E802B00500764E6515507894E680D89D572;
// UnityGLTF.Cache.TextureCacheData[]
struct TextureCacheDataU5BU5D_t007DE14D03C524515B2A7999CFFD173EE498C1C4;
// UnityGLTF.GLTFLoadException
struct GLTFLoadException_tE78F0B883637138D8584E658C49315FE15B23B76;
// UnityGLTF.GLTFSceneImporter
struct GLTFSceneImporter_t29A5109798926C47E5B089376F3E467E78EB710E;
// UnityGLTF.GLTFSceneImporter/<>c__DisplayClass52_0
struct U3CU3Ec__DisplayClass52_0_t76D5C75ED384CEF8461B4D071C42B3931697D57F;
// UnityGLTF.GLTFSceneImporter/<>c__DisplayClass53_0
struct U3CU3Ec__DisplayClass53_0_t8D4248C7B9839F95826E82E11BB0844C853D00EA;
// UnityGLTF.GLTFSceneImporter/<>c__DisplayClass59_0
struct U3CU3Ec__DisplayClass59_0_t52561C113FB61DE90816C347C4AAD7789417775A;
// UnityGLTF.GLTFSceneImporter/<>c__DisplayClass59_1
struct U3CU3Ec__DisplayClass59_1_t90F861F46C374BE511649433683ED6D305917F53;
// UnityGLTF.GLTFSceneImporter/<>c__DisplayClass59_2
struct U3CU3Ec__DisplayClass59_2_t38C2586B97A5A0799CF34EFCC7F95D39B8CC89E2;
// UnityGLTF.GLTFSceneImporter/<WaitUntilEnum>d__58
struct U3CWaitUntilEnumU3Ed__58_t88491DB218CBB87C50048C22305BCAAC4FD1D126;
// UnityGLTF.IUniformMap
struct IUniformMap_tB534D103C3E206230A366756CA194ECCDD07F652;
// UnityGLTF.ImportOptions
struct ImportOptions_tF7380126D05F8D0CD248534D3C19EA83F20FA88E;
// UnityGLTF.ImporterFactory
struct ImporterFactory_tF4C9DDC9F2F0F811B53269CB45BD63B79953921A;
// UnityGLTF.InstantiatedGLTFObject
struct InstantiatedGLTFObject_t03E5C1C7AE61E8CF56BC66C274C240C65511816B;
// UnityGLTF.Loader.FileLoader
struct FileLoader_t0E6039215F6C1ABA58F3C0F708E581A45BDF3BC8;
// UnityGLTF.Loader.FileLoader/<>c__DisplayClass2_0
struct U3CU3Ec__DisplayClass2_0_t3678587430018971900F898C01E0454C44B67E11;
// UnityGLTF.Loader.IDataLoader
struct IDataLoader_t244E1A573CB1F06AADF5B2AE87D539279327980F;
// UnityGLTF.Loader.IDataLoader2
struct IDataLoader2_t005D1D7AC6CD2AD5F07EC15BD69562DD99A23B9F;
// UnityGLTF.Loader.ILoader
struct ILoader_tF8528F7ADD3975C18073805E5733B9B974FBE79C;
// UnityGLTF.Loader.LegacyLoaderWrapper/LegacyLoader
struct LegacyLoader_t5912492DEE5FE2B93A98D527C8D49A91CFDA8A22;
// UnityGLTF.Loader.LegacyLoaderWrapper/LegacyLoader2
struct LegacyLoader2_t0452563D748486937601133A68E894CFB0FEB5D1;
// UnityGLTF.Loader.WebRequestLoader
struct WebRequestLoader_tF1F01C9F12FA444AAA9D3466649478998AECB291;
// UnityGLTF.MemoryChecker
struct MemoryChecker_t6298B1B47ACD98ED696BC66A79E5D5217756BA6A;
// UnityGLTF.MetalRough2StandardMap
struct MetalRough2StandardMap_tD96C52E5A21D1AEDA6D38D6BF5C1883696E4E6DE;
// UnityGLTF.MetalRoughMap
struct MetalRoughMap_tF4F2F9C07978591A413F3ECB91DE6EA459A27DDC;
// UnityGLTF.ShaderNotFoundException
struct ShaderNotFoundException_t20F210948B72AE4B32DA84FE44A94340A5959E01;
// UnityGLTF.SpecGloss2StandardMap
struct SpecGloss2StandardMap_tDE7C0F9BFC51BA35B3D272A97615586D4DFBF158;
// UnityGLTF.SpecGlossMap
struct SpecGlossMap_t6C49CAC441F37DFF9D6A99F57A1EE359A82DC110;
// UnityGLTF.StandardMap
struct StandardMap_t3FEC34B6C31267CFE948D5C63C3DFECC4A1C4806;
// UnityGLTF.UnityMeshData
struct UnityMeshData_t8C2ACB9741D58C870FC7A0FD26F0EDFA9E141F27;
// UnityGLTF.ValuesConvertion
struct ValuesConvertion_t12BE76CED94854B72E7008BA86CF34852FB8F4DC;

IL2CPP_EXTERN_C RuntimeClass* ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AssetCache_tE060C78C9F54F8BF6F50E904460FA53958B59D91_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AsyncTaskMethodBuilder_1_t629F383EABB1E23F4CFEEA0B7A1783E79CB8EF9C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AttributeAccessor_t54DE63C0FA54991AB605635BD32870BA45E9FF8C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CancellationTokenSource_tF480B7E74A032667AFBD31F0530D619FB43AD3FE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FileNotFoundException_t0B3F0AE5C94A781A7E2ABBD786F91C229B703431_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_1_t4ABD6DAD480574F152452DD6B9C9A55F4F6655F1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_1_t864AB9A10EEBC12BC5B32E4C8BD6F0F8E0D2F728_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_1_tF4352FCFF143E795C0D762BB22D817C4457922EC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GLTFLoadException_tE78F0B883637138D8584E658C49315FE15B23B76_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HttpClient_tC7477E4B30DD5CFE1B41DD9CD2EA1F83DB4DE9E7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HttpRequestException_tD4D14C20B90F362C83781589E7508A05E7060349_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDataLoader2_t005D1D7AC6CD2AD5F07EC15BD69562DD99A23B9F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDataLoader_t244E1A573CB1F06AADF5B2AE87D539279327980F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ILoader_tF8528F7ADD3975C18073805E5733B9B974FBE79C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IProgress_1_t2DFCFB5BE1424BAF654AD0B3CD63A7B4F9D7811C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* LegacyLoader2_t0452563D748486937601133A68E894CFB0FEB5D1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* LegacyLoader_t5912492DEE5FE2B93A98D527C8D49A91CFDA8A22_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* LowMemoryCallback_t3862486677D10CD16ECDA703CFB75039A4B3AE00_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Matrix4x4U5BU5D_t1C64F7A0C34058334A8A95BF165F0027690598C9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MemoryChecker_t6298B1B47ACD98ED696BC66A79E5D5217756BA6A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MemoryStream_t495F44B85E6B4DDE2BB7E17DE963256A74E2298C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MetalRough2StandardMap_tD96C52E5A21D1AEDA6D38D6BF5C1883696E4E6DE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MetalRoughMap_tF4F2F9C07978591A413F3ECB91DE6EA459A27DDC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NumericArray_t4941F537DC57A0602218632AABDF228987E030E9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OutOfMemoryException_t2DF3EAC178583BD1DEFAAECBEDB2AF1EA86FBFC7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Path_t0B99A4B924A6FDF08814FFA8DD4CD121ED1A0752_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RemoteCertificateValidationCallback_t9C6BA19681BAA3CD78E6674293A57FF5DF62831E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RuntimeObject_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SchemaExtensions_t820BEEDB948F1A3AAF4E70186B859D496E874EC3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ServicePointManager_tB30C5869193569552EC4F0F454EF3ACF3908DC02_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ShaderNotFoundException_t20F210948B72AE4B32DA84FE44A94340A5959E01_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SpecGloss2StandardMap_tDE7C0F9BFC51BA35B3D272A97615586D4DFBF158_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SpecGlossMap_t6C49CAC441F37DFF9D6A99F57A1EE359A82DC110_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StandardMap_t3FEC34B6C31267CFE948D5C63C3DFECC4A1C4806_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TaskCanceledException_tB1E5209054F302F814E18BBCACDF6546BAF2EC48_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ThreadStart_t09FFA4371E4B2A713F212B157CC9B8B61983B5BF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TransformU5BU5D_t4F5A1132877D8BA66ABC0A9A7FADA4E0237A7804_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass2_0_t3678587430018971900F898C01E0454C44B67E11_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass52_0_t76D5C75ED384CEF8461B4D071C42B3931697D57F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass53_0_t8D4248C7B9839F95826E82E11BB0844C853D00EA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass59_0_t52561C113FB61DE90816C347C4AAD7789417775A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass59_1_t90F861F46C374BE511649433683ED6D305917F53_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass59_2_t38C2586B97A5A0799CF34EFCC7F95D39B8CC89E2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitUntil_t012561515C0E1D3DEA19DB3A05444B020C68E13F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* X509Certificate2_tC1C49EB4CFD571C2FFDE940C24BC69651A058F73_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral0491F7BDFE48EA03CFB65F5CB4500B2415A41B09;
IL2CPP_EXTERN_C String_t* _stringLiteral05E41B2BC369E8DD41BA3F357BD403D69D987B94;
IL2CPP_EXTERN_C String_t* _stringLiteral0C523C1F931D30DE8B4C762B3DCEE84293D2E54D;
IL2CPP_EXTERN_C String_t* _stringLiteral0ED4893A04BF987799495BA5C8FC366542B743A5;
IL2CPP_EXTERN_C String_t* _stringLiteral11E7231B58E151F8FE4A8F8B01F03097CE5F3D7D;
IL2CPP_EXTERN_C String_t* _stringLiteral12E851A75ADDEB18C3BF5D958F74EC7F12452F77;
IL2CPP_EXTERN_C String_t* _stringLiteral22297F7A92262F80946846C167D31B71CDA67573;
IL2CPP_EXTERN_C String_t* _stringLiteral2A0C7403061BB5C75EAD7924CB636F3C4AD3CEBA;
IL2CPP_EXTERN_C String_t* _stringLiteral2E382860493ED55C4A9CA16BDD05864C1B42EC31;
IL2CPP_EXTERN_C String_t* _stringLiteral2EF6458D57BA917EA3F6B44C5ECA2360C289D9A6;
IL2CPP_EXTERN_C String_t* _stringLiteral33B925D0E72A4BECD588D3986D1051DE5A45C857;
IL2CPP_EXTERN_C String_t* _stringLiteral35F77BD40388352E935E0FFA8E76270C40792BC5;
IL2CPP_EXTERN_C String_t* _stringLiteral36BDCAB142B91EE6C030073C24B3B2A5605ED74A;
IL2CPP_EXTERN_C String_t* _stringLiteral385FFEE158A6659B893991739D361A8336033F09;
IL2CPP_EXTERN_C String_t* _stringLiteral3A147112D98F38D70553BABE55C66B18C3F689A3;
IL2CPP_EXTERN_C String_t* _stringLiteral48372A4A03BA885FD394733AFD9DE546D29F4ED5;
IL2CPP_EXTERN_C String_t* _stringLiteral4ADCBE6CA00DFE6A1F1BF231938846D022B05CA4;
IL2CPP_EXTERN_C String_t* _stringLiteral4B0543BC8AD992DCF2FC8EB55210EB488BC284A6;
IL2CPP_EXTERN_C String_t* _stringLiteral4E8FB22FE6EC7198A52D0616F44CB36C0F014862;
IL2CPP_EXTERN_C String_t* _stringLiteral4F33A65A08BA0D97EB2A84B40E284FAF0000269D;
IL2CPP_EXTERN_C String_t* _stringLiteral549A3299D74D9A9920C618F3F180595D6E68FD16;
IL2CPP_EXTERN_C String_t* _stringLiteral5D9F687D9FC9C14E044E9189F3645779B7DE02A5;
IL2CPP_EXTERN_C String_t* _stringLiteral76DB1AA30D048277794F2EB6004B5AE7BAA0CBC7;
IL2CPP_EXTERN_C String_t* _stringLiteral7834B12DE453F0A3CB2149C41A44CE4379CAAFF0;
IL2CPP_EXTERN_C String_t* _stringLiteral8155D47CED513CDC15A2E017C7FF8AC0DFC4A3BF;
IL2CPP_EXTERN_C String_t* _stringLiteral821E099B69AB1185D9EA4C425921DD99EEDA20C4;
IL2CPP_EXTERN_C String_t* _stringLiteral8C57A49C51573D3D980A249B814F1A8A1A36F20B;
IL2CPP_EXTERN_C String_t* _stringLiteral9049EC117A0E62749B6FE66DB211B5A2D030A8EF;
IL2CPP_EXTERN_C String_t* _stringLiteral95AC564C8280AFFCE0FD6856683AA06F5793B8C4;
IL2CPP_EXTERN_C String_t* _stringLiteral9CCF554936E83A9185450EDFD0FB78A15BCF99BF;
IL2CPP_EXTERN_C String_t* _stringLiteralA714935433A98434E4240F3E048E4EC8841ED4B4;
IL2CPP_EXTERN_C String_t* _stringLiteralAAA5A6E84A2F02FED9413E98CB5954703F68F668;
IL2CPP_EXTERN_C String_t* _stringLiteralB52C0842FDEB3626C4E2888A49F80501CE99A123;
IL2CPP_EXTERN_C String_t* _stringLiteralB9567DED74E1C05B65EAB2AE2C2B49CC75B1660A;
IL2CPP_EXTERN_C String_t* _stringLiteralBB4F4F56B646130E64F53A771DA5BE8F8BF2A4F6;
IL2CPP_EXTERN_C String_t* _stringLiteralBC6BB163561B3286434F3D48B88DEAD08D7BC2ED;
IL2CPP_EXTERN_C String_t* _stringLiteralC510EA100EEE1C261FE63B56E1F3390BFB85F481;
IL2CPP_EXTERN_C String_t* _stringLiteralC637AEBE3A2825FB1F2BE997A9434F3CE48A4B93;
IL2CPP_EXTERN_C String_t* _stringLiteralC9E65FC5F63AB6DD9108B8C07C513736E30BFA7B;
IL2CPP_EXTERN_C String_t* _stringLiteralCA16D8C4DE0440224F69A6AB0F832B38618E1C41;
IL2CPP_EXTERN_C String_t* _stringLiteralCB8D38FA1E3834D91FFC154D07F1ED7D824EB076;
IL2CPP_EXTERN_C String_t* _stringLiteralD48C67736A90281297DD96BF118099E6CB6939B8;
IL2CPP_EXTERN_C String_t* _stringLiteralD4CDC3890B1DA1BF12D438D784CA622E32AEE17A;
IL2CPP_EXTERN_C String_t* _stringLiteralD8D1D9F659ECF5281C6CEF502BFFB325F4D8F1E4;
IL2CPP_EXTERN_C String_t* _stringLiteralDB45B98D4723CE30A1C40B6B15AD00E364E44D00;
IL2CPP_EXTERN_C String_t* _stringLiteralE7418EE2404E671CFA6A596B7336C27E8566329B;
IL2CPP_EXTERN_C String_t* _stringLiteralF46645E80E6B2F5870F335E7B980A4C4CBFCEC42;
IL2CPP_EXTERN_C String_t* _stringLiteralF877BF1D6584820709A40F8D4766EE0CF3D1129B;
IL2CPP_EXTERN_C String_t* _stringLiteralF8E5D25F3DAC2FA50576D06DA35D28B1B025C132;
IL2CPP_EXTERN_C String_t* _stringLiteralF9FE4FFA282A27E63A1A8C60A8D8E0DD0E708152;
IL2CPP_EXTERN_C String_t* _stringLiteralFA3FF31B8521C3FFF66EA30521B2578FF9A5C025;
IL2CPP_EXTERN_C const RuntimeMethod* Action_2_Invoke_mB23450FBA9B92A036FA6559F22031C4A2981B46E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t0CD71BC02837B0D53252196D19DABDA73A615B86_TisU3CLoadStreamAsyncU3Ed__3_t50DFA3B38506B50EA0F0E43D41F7D967B4E80BC1_m4FCBBF7AE0D3739454DDB5DA971D94BA8F7D9F75_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F_TisU3CLoadMaterialAsyncU3Ed__52_t755573D411A3D57BC63E16A616ED2F064C971F96_mDBD9EF90DD6DCD58FFCD18172BC7188023D91FD8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F_TisU3CLoadMeshAsyncU3Ed__53_tCB90C821E003B0152A4AAC3CB54BD84D61B8823D_m9278F9BCE710F42E3CF9FC6E6AEC175A3FDDDA8A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F_TisU3CLoadStreamAsyncU3Ed__3_t50DFA3B38506B50EA0F0E43D41F7D967B4E80BC1_m9DE022BAE7F86A99DF240A0EF91D8E159FBD24C4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_Create_mE990EBE247374CEF78C09BAC4A1845B42E2AF225_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_SetException_m3BF8D77ED3E1F97A9BB50B3C7A7E5E97923DDA44_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_SetException_m5A75241F31660276EB2924D240A2ACAF3F4F596E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_SetException_mC1800976D5170A9941CAD5BFBBD9168F2589174E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_SetResult_m3BC9ECED439531875525CF0D8BADDCF1F29C0C03_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_SetResult_m98940FAEAE7AA0A182DF13786E8E2E4F3BCEC2FF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_SetResult_mA3E85EE36EC5DD610101048D8EB64F04AB9CC680_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_SetStateMachine_m09A51B661BF01119D6D51465AD8C7F570EFC6AE5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_SetStateMachine_m3D90B0CDCE00AC2F23D6C52093AB4DA114EB0E60_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_SetStateMachine_mF2AF2A969249D4C5163F1C4C517E7C5060869F14_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_Start_TisU3CLoadStreamAsyncU3Ed__3_t50DFA3B38506B50EA0F0E43D41F7D967B4E80BC1_mB0E358C581265F31369FAAA7C9B372AE81105EC4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_get_Task_m638684DB3092DA761CD7ABE7A0A10D26A18FF017_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_tAE6B8B90DDB2F4605D3C8F53F1F449F35790A468_TisU3CSetupBonesU3Ed__81_t62772CFE58B2A384226F4D7C2927B56067511DDC_m6AACCF3E83D59FCCF856D1ECB605ED655C946DFD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_tE58F4C544BB434328CC2FB19E47D3E1A9599942C_TisU3CLoadJsonU3Ed__59_tCCA3845E8F7AC6B17CFC8E14B3623869D204520D_m86326E8BB99292A8220D367A0FCAEB206E0D6519_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F_TisU3CLoadSceneAsyncU3Ed__49_t1B6A25CAC879F95D954154652A4EB3422B957F5B_mF9307DBAD6E0FC8633BFD9538A5F6C583D7CEB4D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F_TisU3CLoadTextureAsyncU3Ed__90_t89527B90B205393BD5B0E5F5DFB152719A50FBEB_mADB813CEC003321849DF29ED9ECD06E9E7176EEF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F_TisU3CSetupLoadU3Ed__102_tFB8B5441489338282D4CAC773B60B896D00F07EF_m328953A61919506A8A2A0C6BF7DC3FC37F74702C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F_TisU3CYieldOnTimeoutAndThrowOnLowMemoryU3Ed__97_t94FCCE7CF181F8FA506AB6B4A977C0A7C9BD8BDB_mD2DC8FE44409674EC910F02670E96DBA5B78F571_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F_TisU3C_LoadSceneU3Ed__61_t235926E3418670BF165AE82626829C7DF9BCDF57_m804E37614DF66F6F82376961253D71CF9C2CE30F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FileLoader_LoadStream_m44762DC69301AB58DEFC28123254876747D2E715_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Func_1_Invoke_mC7466BFC36F67F4565B11F44CF8D352CE5593577_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Func_1__ctor_m01A998C67EF5BB6BDEB26C5AF8A91983E9D80814_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Func_1__ctor_m479BA9DCBE3F496111BD05CC90CB1044C5FFD552_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Func_1__ctor_mB6C6C2284F3D9BA4C8910EF439C0F00BA9164FBE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisInstantiatedGLTFObject_t03E5C1C7AE61E8CF56BC66C274C240C65511816B_m18F885773E8E7E8AE24577C61F8769DCD707303A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m08D9441B3CE06620361B6B23ECA6641B655CD7F8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_mC38D94CE53B66FE39465261CE2C708B2DA4DCDEF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m74BA8D86C414CF89D770517E5E5BB0D20BECE8DB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_mAB97D47FFE58B61357761FA45F7BF742BD94E964_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MemoryChecker_Application_lowMemory_mA3EB1DB736B06C92D2FF3FCF4B155D79BADA832D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MemoryChecker_ThrowIfOutOfMemory_m40C12ACD6E1974DD5873D8A653C7E5EC65B6B714_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_GetValueOrDefault_m63142B2DD02998F10B0CC4706DFE488F860763C2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_GetValueOrDefault_mE89BB8F302DF31EE202251F4746859285860B6B6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1__ctor_m11F9C228CFDF836DDFCD7880C09CB4098AB9D7F2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_HasValue_mB664E2C41CADA8413EF8842E6601B8C696A7CE15_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_HasValue_mF38F300C188F47AC0F03367107EC46D3BAF7DA3E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_mC4AB712D7F18E0991E1542CE53F11385E21E7B90_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* StandardMap__ctor_mD94FEC0FF5EBEB8E96ED131881460121F90654BA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskAwaiter_1_GetResult_m3203645289A2AA352E87023E38460D33B2FE4D16_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskAwaiter_1_GetResult_m706665648BB29D83FD0C72CFA6279966143192A2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskAwaiter_1_GetResult_mE8CC8E02ED729F42AAE54D4D195193A233E98677_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskAwaiter_1_get_IsCompleted_m0F711316D40833EE5C67F3E65571EF033B9364DF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskAwaiter_1_get_IsCompleted_m4C040B116179C4D7F75CC5D58D88EEBDFCE065D9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskAwaiter_1_get_IsCompleted_m909D94801484D90689A3F279FF0722556EA3AC30_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Task_1_GetAwaiter_m358260447F895E2AF6EBE2A3D9716FB8F9210CE2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Task_1_GetAwaiter_m511397276BFE6D43B77D1BD80905DF2FB0FA54E0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Task_1_GetAwaiter_m90E2F1385A9B5545BC25491244E0CEB39C7633AB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Task_FromResult_TisStream_tFC50657DD5AAB87770987F9179D934A51D99D5E7_m304EF757D9D1D57BB2E9D0B5D503A4C281684C56_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Task_Run_TisStream_tFC50657DD5AAB87770987F9179D934A51D99D5E7_mCF589D34FB48EFA2AFBCB8199682144F9D550ED7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CLoadJsonU3Ed__59_MoveNext_mBF7A396958F0F55A822BDC3D82B17A4CFF015A18_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CLoadSceneAsyncU3Ed__49_MoveNext_m23A9C2C1357554A7D3E554DBFA861054DDE20B7B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CLoadStreamAsyncU3Ed__3_MoveNext_mE264DF0A267A2DCEDF63AD1DACC975DF65F02317_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CLoadTextureAsyncU3Ed__90_MoveNext_mE560D34D16F569E9362802B1BD8BB7C3D3A30A10_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CSetupBonesU3Ed__81_MoveNext_mA170126FA296DE2AA10199060966C1908F018F63_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CSetupLoadU3Ed__102_MoveNext_mA4531B1A69D1F3F5024AB872EE50684949A7D116_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass2_0_U3CLoadStreamAsyncU3Eb__0_m299366B52DCB6CDDDDC1DF60A81288144C858A01_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass52_0_U3CLoadMaterialAsyncU3Eb__0_mD8AC385DAFBA56B316CA592183F94A0653D8C2E4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass53_0_U3CLoadMeshAsyncU3Eb__0_m7A9B963606B16984FBFA633F44718F0B0048CFF8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass59_0_U3CLoadJsonU3Eb__0_mD3955F04F6160C1406A701ABCE4ECB22E3D35BDC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass59_0_U3CLoadJsonU3Eb__2_m17A2AC3CCCDEE4821438C9BFC9B4DA75979E5FC3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass59_1_U3CLoadJsonU3Eb__1_m737235B9DCE60669DC29703FD3B6B1D9C93686D6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass59_2_U3CLoadJsonU3Eb__3_m70EA9649429F511E5A7D030A90BDADBB5C22C4E4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CWaitUntilEnumU3Ed__58_System_Collections_IEnumerator_Reset_mB2CE42E8885A607B432513BF31225C3BD972C882_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3C_LoadSceneU3Ed__61_MoveNext_m568E0F79D7250D56497C86BF36A148FFA8E95A34_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WebRequestLoader_ValidateServerCertificate_m6EE7B32ECD6C8762997839875178BC863DCFD4FF_RuntimeMethod_var;
IL2CPP_EXTERN_C const uint32_t FileLoader_LoadStreamAsync_mAD76D71A84881D7CCBBE121C260915CCB383EBBB_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t FileLoader_LoadStream_m44762DC69301AB58DEFC28123254876747D2E715_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t InstantiatedGLTFObject_Duplicate_mB2D59663613F6448E90BD676B742103B715405A9_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t LegacyLoader2_LoadStream_m09C8A492FCC20E5A539A31CC5A219A7E4A4FDE9B_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t LegacyLoaderWrapper_Wrap_m73A785C13564B6F0FFD54C3A1782FA803DC34FD4_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t LegacyLoader_LoadStreamAsync_m23632EBF17A332C163AC30BCB32A041E85B126FD_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MemoryChecker_ThrowIfOutOfMemory_m40C12ACD6E1974DD5873D8A653C7E5EC65B6B714_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MemoryChecker__ctor_mE60927E4E5764E4E815287255A88A4C6C4CAED15_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MetalRough2StandardMap_Clone_m48B81ACD2B81C3527ACE7A583F5E4B9723182BAC_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MetalRough2StandardMap_get_BaseColorXScale_m81E1051B0AC4104102D08C3B0FC782B057026DC8_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MetalRough2StandardMap_get_MetallicFactor_m7696DB75D25875DDD1F38FAFE2C66AA553853F47_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MetalRough2StandardMap_set_BaseColorFactor_mA6D6F5B9821D949A5596C4592D7F5E9CC8E54F24_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MetalRough2StandardMap_set_BaseColorTexture_m15323B39A9880885F43FB29298EA200B5BCB4B22_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MetalRough2StandardMap_set_BaseColorXOffset_mBAA83909B439DB8E02665C0254BC4F23A01C9EC8_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MetalRough2StandardMap_set_BaseColorXScale_mCFEB942EA6A57997AD4A00BEDDCD845D68DC8453_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MetalRough2StandardMap_set_MetallicFactor_m9D21324D635CD856E35E94F08A00840064F59391_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MetalRough2StandardMap_set_MetallicRoughnessTexture_m130B3DC337A1ED34570BCB99E9E3FD8E0776E1ED_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MetalRoughMap_Clone_m4C76BDB8BAC0DDE629B69A67FD30A5FDB3ABDE6A_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MetalRoughMap__ctor_mDCECE46F17DD3C8D64C070D39088D56FC74CBE17_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MetalRoughMap_get_MetallicRoughnessXScale_m925398C407C3D99B86974F40E9F15C8975E96412_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MetalRoughMap_set_MetallicRoughnessTexture_mFDCF7643FE214E7D650141794E6A95581219706C_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MetalRoughMap_set_MetallicRoughnessXOffset_mE44F368070F7A1B5AAE535B40A8126916702F8B8_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MetalRoughMap_set_MetallicRoughnessXScale_m478FD6F4B6BA4B7A8C3FB641097479390DF7AF19_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MetalRoughMap_set_RoughnessFactor_m51EB6A13A15036C820A90ECFA0862552C95497B3_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ShaderNotFoundException__ctor_m3B99892AD875F9157DA44236F77D93732B286841_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ShaderNotFoundException__ctor_m95667D5EB644710A69BEAA4E8DFAFD784ED6D9A6_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ShaderNotFoundException__ctor_mA2CA6843F2366189FF2D7B5006F906F19B349948_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SpecGloss2StandardMap_Clone_mED6F7C7447D31B3AD41031DE7C8699C7EDA48878_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SpecGloss2StandardMap_get_DiffuseXScale_m7E616CFD64F7F23621908096B49CE52FE8A895CE_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SpecGloss2StandardMap_get_SpecularGlossinessXScale_m0F186B111F0D0870E5B858025C5349B57E26C45A_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SpecGloss2StandardMap_set_DiffuseFactor_mC28F1DAAE6EDB1D20306604CC44C2729F66F4B22_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SpecGloss2StandardMap_set_DiffuseTexture_m25E1FF03E399B1324AF927859C7F6E17E23DBC65_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SpecGloss2StandardMap_set_DiffuseXOffset_m812B35DF78927C437436E346DB05C086EF7BFA8E_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SpecGloss2StandardMap_set_DiffuseXScale_mE84F50C279762604EC8F95A094518746C7673B25_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SpecGloss2StandardMap_set_GlossinessFactor_m3F37A2EC80EE9CF4242F5D293A962A8D5C3EEB32_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SpecGloss2StandardMap_set_SpecularFactor_m06926F5E36AAEA425703FA278A413539E0CCE743_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SpecGloss2StandardMap_set_SpecularGlossinessTexture_mB7E647BE1B81A08FE6927D1D484CA5A061531736_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SpecGloss2StandardMap_set_SpecularGlossinessXOffset_m235906E544FB373E5E379E4472998589FA0E6B59_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SpecGloss2StandardMap_set_SpecularGlossinessXScale_m3CFBF90515468BCDBDFD417FE33A32DD69F2D326_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SpecGlossMap_Clone_mDCAF2C87033047E960FAE9C39A8DD51FE83DFD28_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SpecGlossMap__ctor_m3026FE740E47EDD059CEC781C6186BA6E3D5B3A5_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t StandardMap_Clone_m0BC85D3C030E1C69163566B7AEB7586BDC685235_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t StandardMap_Copy_mB46954EB8DA70A2310FFDCAF0EE90DB82602457D_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t StandardMap__ctor_mD94FEC0FF5EBEB8E96ED131881460121F90654BA_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t StandardMap__ctor_mE7EFB02723CA25A21A4DB13F51863763B6D93167_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t StandardMap_get_EmissiveXScale_m6D6DDF8F9FDD24BB55FF55A48CFA3C6038220EEB_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t StandardMap_get_NormalXScale_m832AE129CC69616367B64F9D2795A4C67DD7376A_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t StandardMap_get_OcclusionXScale_mF4ECD25EE4BF94C30516BD7B0E31E450465A2331_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t StandardMap_set_AlphaMode_m1A16F348AF54973721AE71A1B507A95B57714A7B_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t StandardMap_set_DoubleSided_mFC4C7EBFEC1343F0A733CAC21F2FE3DE106A1F35_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t StandardMap_set_EmissiveFactor_mA23550F9697BABE3B9AA337AE5777B3275FCB2F2_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t StandardMap_set_EmissiveTexture_mBAEF56B05F38CCEFBE665C80742B7BD0157668ED_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t StandardMap_set_EmissiveXOffset_m30027CD14781CFA60674129EC92556D11895F825_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t StandardMap_set_EmissiveXScale_m4598D5EC38D89B9E581F5ED217F18EDA1EDE70B5_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t StandardMap_set_NormalTexScale_m83C88C7F8BE7F23CD79B19EF9E82E82FFD531115_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t StandardMap_set_NormalTexture_m3EB57188623427B9C697B11C0766AD11B920AB70_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t StandardMap_set_NormalXOffset_mA8D73441693A23035E6E697263F2E6A109B401EF_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t StandardMap_set_NormalXScale_m9AC2DD7CB4DD24DFF74449A041B494D65E3D5D53_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t StandardMap_set_OcclusionTexStrength_mA1F6EC8A9BD0320839B6EF1ABDAFFED5130EDA20_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t StandardMap_set_OcclusionTexture_mC5B15C946D67FDEBC0CFE25ABDBFCA1078975446_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t StandardMap_set_OcclusionXOffset_m9192EFFCEA3F94B6C8A679663797CF4F728EDBC0_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t StandardMap_set_OcclusionXScale_mFE852809298CF446DD2B6414DC470FF11BF27773_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t StandardMap_set_VertexColorsEnabled_mA64B57587B8FEA93B49E801C8AFC1E0BF9E16A37_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CLoadJsonU3Ed__59_MoveNext_mBF7A396958F0F55A822BDC3D82B17A4CFF015A18_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CLoadMaterialAsyncU3Ed__52_MoveNext_m1C8A9DE92DF95A4282B74854AC2D634BA25863F2_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CLoadMaterialAsyncU3Ed__52_SetStateMachine_mCAA4E143B5289A23437E48699A92E99C24B8FA11_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CLoadMeshAsyncU3Ed__53_MoveNext_m6C894E6978AC3D3C6C9944D53A80EBF3303241CE_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CLoadMeshAsyncU3Ed__53_SetStateMachine_m4AE5A7B0A0A181EF2EB9E2A13314A01FD49AF741_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CLoadSceneAsyncU3Ed__49_MoveNext_m23A9C2C1357554A7D3E554DBFA861054DDE20B7B_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CLoadStreamAsyncU3Ed__3_MoveNext_mE264DF0A267A2DCEDF63AD1DACC975DF65F02317_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CLoadStreamAsyncU3Ed__3_SetStateMachine_mBF19415B6FF1EF325D5688D1657EEA79D6C061D7_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CLoadTextureAsyncU3Ed__90_MoveNext_mE560D34D16F569E9362802B1BD8BB7C3D3A30A10_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CSetupBonesU3Ed__81_MoveNext_mA170126FA296DE2AA10199060966C1908F018F63_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CSetupLoadU3Ed__102_MoveNext_mA4531B1A69D1F3F5024AB872EE50684949A7D116_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CWaitUntilEnumU3Ed__58_System_Collections_IEnumerator_Reset_mB2CE42E8885A607B432513BF31225C3BD972C882_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CYieldOnTimeoutAndThrowOnLowMemoryU3Ed__97_MoveNext_m6EB59599C82A9E706128405639242DD61AC3E977_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3C_LoadSceneU3Ed__61_MoveNext_m568E0F79D7250D56497C86BF36A148FFA8E95A34_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ValuesConvertion_BeginInvoke_mB479D45F75959DC475E5792F9335F24EABF58792_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WebRequestLoader_LoadStreamAsync_mCF9536C0F590946D842C9D368EF762B70D6D6808_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WebRequestLoader_ValidateServerCertificate_m6EE7B32ECD6C8762997839875178BC863DCFD4FF_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WebRequestLoader__ctor_m5009007CA6C43F8C05BADD8B91BE281429811319_MetadataUsageId;
struct Color_t70494B978F490884EFB36116AD8C25F5E943C3E0 ;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;
struct Vector2_t028E0345D0C6663583B8C0740F927272E6FDCCE8 ;
struct Vector3_t23F8955612D53E66C78FE37F87B1C09E9D78B28C ;
struct Vector4_t239657374664B132BBB44122F237F461D91809ED ;

struct Matrix4x4U5BU5D_tE3A13CB78E1B2CBDCD537180E7C6D83E18B0D9F0;
struct DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86;
struct ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A;
struct X509ChainStatusU5BU5D_tA8CCC33D50C4BCF6F657063CD1DACCC3B9A7BFBB;
struct SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5;
struct Matrix4x4U5BU5D_t1C64F7A0C34058334A8A95BF165F0027690598C9;
struct TransformU5BU5D_t4F5A1132877D8BA66ABC0A9A7FADA4E0237A7804;
struct BufferCacheDataU5BU5D_t090C5C4874ADA45FFD0C6E6B36010DD196C0975E;
struct MaterialCacheDataU5BU5D_t9A21B420B621CCFCE6242A807F055E5E17C12B27;
struct MeshCacheDataU5BU5D_t172934B760B5F101344848AB49BADBC9CAC4E59C;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object


// GLTF.Math.Matrix4x4
struct  Matrix4x4_t43BAF443FBFCE8DA422507220B68CDD4CA7F19D9  : public RuntimeObject
{
public:
	// System.Single[] GLTF.Math.Matrix4x4::mat
	SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* ___mat_1;

public:
	inline static int32_t get_offset_of_mat_1() { return static_cast<int32_t>(offsetof(Matrix4x4_t43BAF443FBFCE8DA422507220B68CDD4CA7F19D9, ___mat_1)); }
	inline SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* get_mat_1() const { return ___mat_1; }
	inline SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5** get_address_of_mat_1() { return &___mat_1; }
	inline void set_mat_1(SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* value)
	{
		___mat_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mat_1), (void*)value);
	}
};

struct Matrix4x4_t43BAF443FBFCE8DA422507220B68CDD4CA7F19D9_StaticFields
{
public:
	// GLTF.Math.Matrix4x4 GLTF.Math.Matrix4x4::Identity
	Matrix4x4_t43BAF443FBFCE8DA422507220B68CDD4CA7F19D9 * ___Identity_0;

public:
	inline static int32_t get_offset_of_Identity_0() { return static_cast<int32_t>(offsetof(Matrix4x4_t43BAF443FBFCE8DA422507220B68CDD4CA7F19D9_StaticFields, ___Identity_0)); }
	inline Matrix4x4_t43BAF443FBFCE8DA422507220B68CDD4CA7F19D9 * get_Identity_0() const { return ___Identity_0; }
	inline Matrix4x4_t43BAF443FBFCE8DA422507220B68CDD4CA7F19D9 ** get_address_of_Identity_0() { return &___Identity_0; }
	inline void set_Identity_0(Matrix4x4_t43BAF443FBFCE8DA422507220B68CDD4CA7F19D9 * value)
	{
		___Identity_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Identity_0), (void*)value);
	}
};


// GLTF.Schema.GLTFId`1<GLTF.Schema.Accessor>
struct  GLTFId_1_t03C6D4307DA5F7D32A8A310F6F43A4992728AEC7  : public RuntimeObject
{
public:
	// System.Int32 GLTF.Schema.GLTFId`1::Id
	int32_t ___Id_0;
	// GLTF.Schema.GLTFRoot GLTF.Schema.GLTFId`1::Root
	GLTFRoot_t3CDB3EBE42E8A0E06DD58B35BAD5D98EF44F3A6B * ___Root_1;

public:
	inline static int32_t get_offset_of_Id_0() { return static_cast<int32_t>(offsetof(GLTFId_1_t03C6D4307DA5F7D32A8A310F6F43A4992728AEC7, ___Id_0)); }
	inline int32_t get_Id_0() const { return ___Id_0; }
	inline int32_t* get_address_of_Id_0() { return &___Id_0; }
	inline void set_Id_0(int32_t value)
	{
		___Id_0 = value;
	}

	inline static int32_t get_offset_of_Root_1() { return static_cast<int32_t>(offsetof(GLTFId_1_t03C6D4307DA5F7D32A8A310F6F43A4992728AEC7, ___Root_1)); }
	inline GLTFRoot_t3CDB3EBE42E8A0E06DD58B35BAD5D98EF44F3A6B * get_Root_1() const { return ___Root_1; }
	inline GLTFRoot_t3CDB3EBE42E8A0E06DD58B35BAD5D98EF44F3A6B ** get_address_of_Root_1() { return &___Root_1; }
	inline void set_Root_1(GLTFRoot_t3CDB3EBE42E8A0E06DD58B35BAD5D98EF44F3A6B * value)
	{
		___Root_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Root_1), (void*)value);
	}
};


// GLTF.Schema.GLTFId`1<GLTF.Schema.BufferView>
struct  GLTFId_1_t42D30DE0867573822EFF276155616B8DA56E3E8F  : public RuntimeObject
{
public:
	// System.Int32 GLTF.Schema.GLTFId`1::Id
	int32_t ___Id_0;
	// GLTF.Schema.GLTFRoot GLTF.Schema.GLTFId`1::Root
	GLTFRoot_t3CDB3EBE42E8A0E06DD58B35BAD5D98EF44F3A6B * ___Root_1;

public:
	inline static int32_t get_offset_of_Id_0() { return static_cast<int32_t>(offsetof(GLTFId_1_t42D30DE0867573822EFF276155616B8DA56E3E8F, ___Id_0)); }
	inline int32_t get_Id_0() const { return ___Id_0; }
	inline int32_t* get_address_of_Id_0() { return &___Id_0; }
	inline void set_Id_0(int32_t value)
	{
		___Id_0 = value;
	}

	inline static int32_t get_offset_of_Root_1() { return static_cast<int32_t>(offsetof(GLTFId_1_t42D30DE0867573822EFF276155616B8DA56E3E8F, ___Root_1)); }
	inline GLTFRoot_t3CDB3EBE42E8A0E06DD58B35BAD5D98EF44F3A6B * get_Root_1() const { return ___Root_1; }
	inline GLTFRoot_t3CDB3EBE42E8A0E06DD58B35BAD5D98EF44F3A6B ** get_address_of_Root_1() { return &___Root_1; }
	inline void set_Root_1(GLTFRoot_t3CDB3EBE42E8A0E06DD58B35BAD5D98EF44F3A6B * value)
	{
		___Root_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Root_1), (void*)value);
	}
};


// GLTF.Schema.GLTFId`1<GLTF.Schema.GLTFBuffer>
struct  GLTFId_1_t050A1D4340BD22B23EED14DBBBDEE97C66D39D50  : public RuntimeObject
{
public:
	// System.Int32 GLTF.Schema.GLTFId`1::Id
	int32_t ___Id_0;
	// GLTF.Schema.GLTFRoot GLTF.Schema.GLTFId`1::Root
	GLTFRoot_t3CDB3EBE42E8A0E06DD58B35BAD5D98EF44F3A6B * ___Root_1;

public:
	inline static int32_t get_offset_of_Id_0() { return static_cast<int32_t>(offsetof(GLTFId_1_t050A1D4340BD22B23EED14DBBBDEE97C66D39D50, ___Id_0)); }
	inline int32_t get_Id_0() const { return ___Id_0; }
	inline int32_t* get_address_of_Id_0() { return &___Id_0; }
	inline void set_Id_0(int32_t value)
	{
		___Id_0 = value;
	}

	inline static int32_t get_offset_of_Root_1() { return static_cast<int32_t>(offsetof(GLTFId_1_t050A1D4340BD22B23EED14DBBBDEE97C66D39D50, ___Root_1)); }
	inline GLTFRoot_t3CDB3EBE42E8A0E06DD58B35BAD5D98EF44F3A6B * get_Root_1() const { return ___Root_1; }
	inline GLTFRoot_t3CDB3EBE42E8A0E06DD58B35BAD5D98EF44F3A6B ** get_address_of_Root_1() { return &___Root_1; }
	inline void set_Root_1(GLTFRoot_t3CDB3EBE42E8A0E06DD58B35BAD5D98EF44F3A6B * value)
	{
		___Root_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Root_1), (void*)value);
	}
};


// GLTF.Schema.GLTFId`1<GLTF.Schema.Node>
struct  GLTFId_1_t03A4FA3C937E0B4939DA3B8F26A7FFF95A506783  : public RuntimeObject
{
public:
	// System.Int32 GLTF.Schema.GLTFId`1::Id
	int32_t ___Id_0;
	// GLTF.Schema.GLTFRoot GLTF.Schema.GLTFId`1::Root
	GLTFRoot_t3CDB3EBE42E8A0E06DD58B35BAD5D98EF44F3A6B * ___Root_1;

public:
	inline static int32_t get_offset_of_Id_0() { return static_cast<int32_t>(offsetof(GLTFId_1_t03A4FA3C937E0B4939DA3B8F26A7FFF95A506783, ___Id_0)); }
	inline int32_t get_Id_0() const { return ___Id_0; }
	inline int32_t* get_address_of_Id_0() { return &___Id_0; }
	inline void set_Id_0(int32_t value)
	{
		___Id_0 = value;
	}

	inline static int32_t get_offset_of_Root_1() { return static_cast<int32_t>(offsetof(GLTFId_1_t03A4FA3C937E0B4939DA3B8F26A7FFF95A506783, ___Root_1)); }
	inline GLTFRoot_t3CDB3EBE42E8A0E06DD58B35BAD5D98EF44F3A6B * get_Root_1() const { return ___Root_1; }
	inline GLTFRoot_t3CDB3EBE42E8A0E06DD58B35BAD5D98EF44F3A6B ** get_address_of_Root_1() { return &___Root_1; }
	inline void set_Root_1(GLTFRoot_t3CDB3EBE42E8A0E06DD58B35BAD5D98EF44F3A6B * value)
	{
		___Root_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Root_1), (void*)value);
	}
};


// GLTF.Schema.GLTFProperty
struct  GLTFProperty_t40AFD52A8EF43AFD933314F5D289DD0109492979  : public RuntimeObject
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,GLTF.Schema.IExtension> GLTF.Schema.GLTFProperty::Extensions
	Dictionary_2_t6BC8DB3735B763696A44D593FC99D69F69C69D51 * ___Extensions_2;
	// Newtonsoft.Json.Linq.JToken GLTF.Schema.GLTFProperty::Extras
	JToken_t89BC2217CEF39D226DB2948A79BAB75018D0894D * ___Extras_3;

public:
	inline static int32_t get_offset_of_Extensions_2() { return static_cast<int32_t>(offsetof(GLTFProperty_t40AFD52A8EF43AFD933314F5D289DD0109492979, ___Extensions_2)); }
	inline Dictionary_2_t6BC8DB3735B763696A44D593FC99D69F69C69D51 * get_Extensions_2() const { return ___Extensions_2; }
	inline Dictionary_2_t6BC8DB3735B763696A44D593FC99D69F69C69D51 ** get_address_of_Extensions_2() { return &___Extensions_2; }
	inline void set_Extensions_2(Dictionary_2_t6BC8DB3735B763696A44D593FC99D69F69C69D51 * value)
	{
		___Extensions_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Extensions_2), (void*)value);
	}

	inline static int32_t get_offset_of_Extras_3() { return static_cast<int32_t>(offsetof(GLTFProperty_t40AFD52A8EF43AFD933314F5D289DD0109492979, ___Extras_3)); }
	inline JToken_t89BC2217CEF39D226DB2948A79BAB75018D0894D * get_Extras_3() const { return ___Extras_3; }
	inline JToken_t89BC2217CEF39D226DB2948A79BAB75018D0894D ** get_address_of_Extras_3() { return &___Extras_3; }
	inline void set_Extras_3(JToken_t89BC2217CEF39D226DB2948A79BAB75018D0894D * value)
	{
		___Extras_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Extras_3), (void*)value);
	}
};

struct GLTFProperty_t40AFD52A8EF43AFD933314F5D289DD0109492979_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,GLTF.Schema.ExtensionFactory> GLTF.Schema.GLTFProperty::_extensionRegistry
	Dictionary_2_tCE39721A4E2D886DB49881BE5A01F58BFF4D9C9B * ____extensionRegistry_0;
	// GLTF.Schema.DefaultExtensionFactory GLTF.Schema.GLTFProperty::_defaultExtensionFactory
	DefaultExtensionFactory_t6F7054C0E34948CE71E4DB22B285190D70C9B3E8 * ____defaultExtensionFactory_1;

public:
	inline static int32_t get_offset_of__extensionRegistry_0() { return static_cast<int32_t>(offsetof(GLTFProperty_t40AFD52A8EF43AFD933314F5D289DD0109492979_StaticFields, ____extensionRegistry_0)); }
	inline Dictionary_2_tCE39721A4E2D886DB49881BE5A01F58BFF4D9C9B * get__extensionRegistry_0() const { return ____extensionRegistry_0; }
	inline Dictionary_2_tCE39721A4E2D886DB49881BE5A01F58BFF4D9C9B ** get_address_of__extensionRegistry_0() { return &____extensionRegistry_0; }
	inline void set__extensionRegistry_0(Dictionary_2_tCE39721A4E2D886DB49881BE5A01F58BFF4D9C9B * value)
	{
		____extensionRegistry_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____extensionRegistry_0), (void*)value);
	}

	inline static int32_t get_offset_of__defaultExtensionFactory_1() { return static_cast<int32_t>(offsetof(GLTFProperty_t40AFD52A8EF43AFD933314F5D289DD0109492979_StaticFields, ____defaultExtensionFactory_1)); }
	inline DefaultExtensionFactory_t6F7054C0E34948CE71E4DB22B285190D70C9B3E8 * get__defaultExtensionFactory_1() const { return ____defaultExtensionFactory_1; }
	inline DefaultExtensionFactory_t6F7054C0E34948CE71E4DB22B285190D70C9B3E8 ** get_address_of__defaultExtensionFactory_1() { return &____defaultExtensionFactory_1; }
	inline void set__defaultExtensionFactory_1(DefaultExtensionFactory_t6F7054C0E34948CE71E4DB22B285190D70C9B3E8 * value)
	{
		____defaultExtensionFactory_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____defaultExtensionFactory_1), (void*)value);
	}
};

struct Il2CppArrayBounds;

// System.Array


// System.Collections.Generic.List`1<GLTF.Schema.GLTFScene>
struct  List_1_tAED3D6A1ED2710E0A2CB5BACC62D7D58311F4DFD  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	GLTFSceneU5BU5D_tE1D351EC9A59EB35FC50C43ABEDBBF83F18EA986* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_tAED3D6A1ED2710E0A2CB5BACC62D7D58311F4DFD, ____items_1)); }
	inline GLTFSceneU5BU5D_tE1D351EC9A59EB35FC50C43ABEDBBF83F18EA986* get__items_1() const { return ____items_1; }
	inline GLTFSceneU5BU5D_tE1D351EC9A59EB35FC50C43ABEDBBF83F18EA986** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(GLTFSceneU5BU5D_tE1D351EC9A59EB35FC50C43ABEDBBF83F18EA986* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_tAED3D6A1ED2710E0A2CB5BACC62D7D58311F4DFD, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_tAED3D6A1ED2710E0A2CB5BACC62D7D58311F4DFD, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_tAED3D6A1ED2710E0A2CB5BACC62D7D58311F4DFD, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_tAED3D6A1ED2710E0A2CB5BACC62D7D58311F4DFD_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	GLTFSceneU5BU5D_tE1D351EC9A59EB35FC50C43ABEDBBF83F18EA986* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_tAED3D6A1ED2710E0A2CB5BACC62D7D58311F4DFD_StaticFields, ____emptyArray_5)); }
	inline GLTFSceneU5BU5D_tE1D351EC9A59EB35FC50C43ABEDBBF83F18EA986* get__emptyArray_5() const { return ____emptyArray_5; }
	inline GLTFSceneU5BU5D_tE1D351EC9A59EB35FC50C43ABEDBBF83F18EA986** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(GLTFSceneU5BU5D_tE1D351EC9A59EB35FC50C43ABEDBBF83F18EA986* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<GLTF.Schema.NodeId>
struct  List_1_t1B89882FA16EC868F9405338766EE999CD21DBAD  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	NodeIdU5BU5D_t3066AB1DB7B8B5DD32F0EDEA805C695EF73E6B6B* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t1B89882FA16EC868F9405338766EE999CD21DBAD, ____items_1)); }
	inline NodeIdU5BU5D_t3066AB1DB7B8B5DD32F0EDEA805C695EF73E6B6B* get__items_1() const { return ____items_1; }
	inline NodeIdU5BU5D_t3066AB1DB7B8B5DD32F0EDEA805C695EF73E6B6B** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(NodeIdU5BU5D_t3066AB1DB7B8B5DD32F0EDEA805C695EF73E6B6B* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t1B89882FA16EC868F9405338766EE999CD21DBAD, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t1B89882FA16EC868F9405338766EE999CD21DBAD, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t1B89882FA16EC868F9405338766EE999CD21DBAD, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t1B89882FA16EC868F9405338766EE999CD21DBAD_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	NodeIdU5BU5D_t3066AB1DB7B8B5DD32F0EDEA805C695EF73E6B6B* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t1B89882FA16EC868F9405338766EE999CD21DBAD_StaticFields, ____emptyArray_5)); }
	inline NodeIdU5BU5D_t3066AB1DB7B8B5DD32F0EDEA805C695EF73E6B6B* get__emptyArray_5() const { return ____emptyArray_5; }
	inline NodeIdU5BU5D_t3066AB1DB7B8B5DD32F0EDEA805C695EF73E6B6B** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(NodeIdU5BU5D_t3066AB1DB7B8B5DD32F0EDEA805C695EF73E6B6B* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<System.Object>
struct  List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D, ____items_1)); }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* get__items_1() const { return ____items_1; }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D_StaticFields, ____emptyArray_5)); }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* get__emptyArray_5() const { return ____emptyArray_5; }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.MarshalByRefObject
struct  MarshalByRefObject_tC4577953D0A44D0AB8597CFA868E01C858B1C9AF  : public RuntimeObject
{
public:
	// System.Object System.MarshalByRefObject::_identity
	RuntimeObject * ____identity_0;

public:
	inline static int32_t get_offset_of__identity_0() { return static_cast<int32_t>(offsetof(MarshalByRefObject_tC4577953D0A44D0AB8597CFA868E01C858B1C9AF, ____identity_0)); }
	inline RuntimeObject * get__identity_0() const { return ____identity_0; }
	inline RuntimeObject ** get_address_of__identity_0() { return &____identity_0; }
	inline void set__identity_0(RuntimeObject * value)
	{
		____identity_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____identity_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.MarshalByRefObject
struct MarshalByRefObject_tC4577953D0A44D0AB8597CFA868E01C858B1C9AF_marshaled_pinvoke
{
	Il2CppIUnknown* ____identity_0;
};
// Native definition for COM marshalling of System.MarshalByRefObject
struct MarshalByRefObject_tC4577953D0A44D0AB8597CFA868E01C858B1C9AF_marshaled_com
{
	Il2CppIUnknown* ____identity_0;
};

// System.Net.Http.HttpContent
struct  HttpContent_t678722F60CA151DD19AFCA917657BE24F111A41D  : public RuntimeObject
{
public:
	// System.Net.Http.HttpContent_FixedMemoryStream System.Net.Http.HttpContent::buffer
	FixedMemoryStream_t181662654A3A2002A1F5D33E7747A9E12DAD139C * ___buffer_0;
	// System.Boolean System.Net.Http.HttpContent::disposed
	bool ___disposed_1;
	// System.Net.Http.Headers.HttpContentHeaders System.Net.Http.HttpContent::headers
	HttpContentHeaders_t98D8657573ADACD807B6C941F46E6D69EDFD13A0 * ___headers_2;

public:
	inline static int32_t get_offset_of_buffer_0() { return static_cast<int32_t>(offsetof(HttpContent_t678722F60CA151DD19AFCA917657BE24F111A41D, ___buffer_0)); }
	inline FixedMemoryStream_t181662654A3A2002A1F5D33E7747A9E12DAD139C * get_buffer_0() const { return ___buffer_0; }
	inline FixedMemoryStream_t181662654A3A2002A1F5D33E7747A9E12DAD139C ** get_address_of_buffer_0() { return &___buffer_0; }
	inline void set_buffer_0(FixedMemoryStream_t181662654A3A2002A1F5D33E7747A9E12DAD139C * value)
	{
		___buffer_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buffer_0), (void*)value);
	}

	inline static int32_t get_offset_of_disposed_1() { return static_cast<int32_t>(offsetof(HttpContent_t678722F60CA151DD19AFCA917657BE24F111A41D, ___disposed_1)); }
	inline bool get_disposed_1() const { return ___disposed_1; }
	inline bool* get_address_of_disposed_1() { return &___disposed_1; }
	inline void set_disposed_1(bool value)
	{
		___disposed_1 = value;
	}

	inline static int32_t get_offset_of_headers_2() { return static_cast<int32_t>(offsetof(HttpContent_t678722F60CA151DD19AFCA917657BE24F111A41D, ___headers_2)); }
	inline HttpContentHeaders_t98D8657573ADACD807B6C941F46E6D69EDFD13A0 * get_headers_2() const { return ___headers_2; }
	inline HttpContentHeaders_t98D8657573ADACD807B6C941F46E6D69EDFD13A0 ** get_address_of_headers_2() { return &___headers_2; }
	inline void set_headers_2(HttpContentHeaders_t98D8657573ADACD807B6C941F46E6D69EDFD13A0 * value)
	{
		___headers_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___headers_2), (void*)value);
	}
};


// System.Net.Http.HttpMessageInvoker
struct  HttpMessageInvoker_t7270E2BED3201CE430D6C4BECF923454AA526A72  : public RuntimeObject
{
public:
	// System.Net.Http.HttpMessageHandler System.Net.Http.HttpMessageInvoker::handler
	HttpMessageHandler_t0094EF2850CF6420CBFC3952ED337AD381644894 * ___handler_0;
	// System.Boolean System.Net.Http.HttpMessageInvoker::disposeHandler
	bool ___disposeHandler_1;

public:
	inline static int32_t get_offset_of_handler_0() { return static_cast<int32_t>(offsetof(HttpMessageInvoker_t7270E2BED3201CE430D6C4BECF923454AA526A72, ___handler_0)); }
	inline HttpMessageHandler_t0094EF2850CF6420CBFC3952ED337AD381644894 * get_handler_0() const { return ___handler_0; }
	inline HttpMessageHandler_t0094EF2850CF6420CBFC3952ED337AD381644894 ** get_address_of_handler_0() { return &___handler_0; }
	inline void set_handler_0(HttpMessageHandler_t0094EF2850CF6420CBFC3952ED337AD381644894 * value)
	{
		___handler_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___handler_0), (void*)value);
	}

	inline static int32_t get_offset_of_disposeHandler_1() { return static_cast<int32_t>(offsetof(HttpMessageInvoker_t7270E2BED3201CE430D6C4BECF923454AA526A72, ___disposeHandler_1)); }
	inline bool get_disposeHandler_1() const { return ___disposeHandler_1; }
	inline bool* get_address_of_disposeHandler_1() { return &___disposeHandler_1; }
	inline void set_disposeHandler_1(bool value)
	{
		___disposeHandler_1 = value;
	}
};


// System.Runtime.ConstrainedExecution.CriticalFinalizerObject
struct  CriticalFinalizerObject_t8B006E1DEE084E781F5C0F3283E9226E28894DD9  : public RuntimeObject
{
public:

public:
};


// System.Runtime.ExceptionServices.ExceptionDispatchInfo
struct  ExceptionDispatchInfo_t0C54083F3909DAF986A4DEAA7C047559531E0E2A  : public RuntimeObject
{
public:
	// System.Exception System.Runtime.ExceptionServices.ExceptionDispatchInfo::m_Exception
	Exception_t * ___m_Exception_0;
	// System.Object System.Runtime.ExceptionServices.ExceptionDispatchInfo::m_stackTrace
	RuntimeObject * ___m_stackTrace_1;

public:
	inline static int32_t get_offset_of_m_Exception_0() { return static_cast<int32_t>(offsetof(ExceptionDispatchInfo_t0C54083F3909DAF986A4DEAA7C047559531E0E2A, ___m_Exception_0)); }
	inline Exception_t * get_m_Exception_0() const { return ___m_Exception_0; }
	inline Exception_t ** get_address_of_m_Exception_0() { return &___m_Exception_0; }
	inline void set_m_Exception_0(Exception_t * value)
	{
		___m_Exception_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Exception_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_stackTrace_1() { return static_cast<int32_t>(offsetof(ExceptionDispatchInfo_t0C54083F3909DAF986A4DEAA7C047559531E0E2A, ___m_stackTrace_1)); }
	inline RuntimeObject * get_m_stackTrace_1() const { return ___m_stackTrace_1; }
	inline RuntimeObject ** get_address_of_m_stackTrace_1() { return &___m_stackTrace_1; }
	inline void set_m_stackTrace_1(RuntimeObject * value)
	{
		___m_stackTrace_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_stackTrace_1), (void*)value);
	}
};


// System.Runtime.Serialization.SerializationInfo
struct  SerializationInfo_t1BB80E9C9DEA52DBF464487234B045E2930ADA26  : public RuntimeObject
{
public:
	// System.String[] System.Runtime.Serialization.SerializationInfo::m_members
	StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* ___m_members_3;
	// System.Object[] System.Runtime.Serialization.SerializationInfo::m_data
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ___m_data_4;
	// System.Type[] System.Runtime.Serialization.SerializationInfo::m_types
	TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* ___m_types_5;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> System.Runtime.Serialization.SerializationInfo::m_nameToIndex
	Dictionary_2_tD6E204872BA9FD506A0287EF68E285BEB9EC0DFB * ___m_nameToIndex_6;
	// System.Int32 System.Runtime.Serialization.SerializationInfo::m_currMember
	int32_t ___m_currMember_7;
	// System.Runtime.Serialization.IFormatterConverter System.Runtime.Serialization.SerializationInfo::m_converter
	RuntimeObject* ___m_converter_8;
	// System.String System.Runtime.Serialization.SerializationInfo::m_fullTypeName
	String_t* ___m_fullTypeName_9;
	// System.String System.Runtime.Serialization.SerializationInfo::m_assemName
	String_t* ___m_assemName_10;
	// System.Type System.Runtime.Serialization.SerializationInfo::objectType
	Type_t * ___objectType_11;
	// System.Boolean System.Runtime.Serialization.SerializationInfo::isFullTypeNameSetExplicit
	bool ___isFullTypeNameSetExplicit_12;
	// System.Boolean System.Runtime.Serialization.SerializationInfo::isAssemblyNameSetExplicit
	bool ___isAssemblyNameSetExplicit_13;
	// System.Boolean System.Runtime.Serialization.SerializationInfo::requireSameTokenInPartialTrust
	bool ___requireSameTokenInPartialTrust_14;

public:
	inline static int32_t get_offset_of_m_members_3() { return static_cast<int32_t>(offsetof(SerializationInfo_t1BB80E9C9DEA52DBF464487234B045E2930ADA26, ___m_members_3)); }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* get_m_members_3() const { return ___m_members_3; }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E** get_address_of_m_members_3() { return &___m_members_3; }
	inline void set_m_members_3(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* value)
	{
		___m_members_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_members_3), (void*)value);
	}

	inline static int32_t get_offset_of_m_data_4() { return static_cast<int32_t>(offsetof(SerializationInfo_t1BB80E9C9DEA52DBF464487234B045E2930ADA26, ___m_data_4)); }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* get_m_data_4() const { return ___m_data_4; }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A** get_address_of_m_data_4() { return &___m_data_4; }
	inline void set_m_data_4(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* value)
	{
		___m_data_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_data_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_types_5() { return static_cast<int32_t>(offsetof(SerializationInfo_t1BB80E9C9DEA52DBF464487234B045E2930ADA26, ___m_types_5)); }
	inline TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* get_m_types_5() const { return ___m_types_5; }
	inline TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F** get_address_of_m_types_5() { return &___m_types_5; }
	inline void set_m_types_5(TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* value)
	{
		___m_types_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_types_5), (void*)value);
	}

	inline static int32_t get_offset_of_m_nameToIndex_6() { return static_cast<int32_t>(offsetof(SerializationInfo_t1BB80E9C9DEA52DBF464487234B045E2930ADA26, ___m_nameToIndex_6)); }
	inline Dictionary_2_tD6E204872BA9FD506A0287EF68E285BEB9EC0DFB * get_m_nameToIndex_6() const { return ___m_nameToIndex_6; }
	inline Dictionary_2_tD6E204872BA9FD506A0287EF68E285BEB9EC0DFB ** get_address_of_m_nameToIndex_6() { return &___m_nameToIndex_6; }
	inline void set_m_nameToIndex_6(Dictionary_2_tD6E204872BA9FD506A0287EF68E285BEB9EC0DFB * value)
	{
		___m_nameToIndex_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_nameToIndex_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_currMember_7() { return static_cast<int32_t>(offsetof(SerializationInfo_t1BB80E9C9DEA52DBF464487234B045E2930ADA26, ___m_currMember_7)); }
	inline int32_t get_m_currMember_7() const { return ___m_currMember_7; }
	inline int32_t* get_address_of_m_currMember_7() { return &___m_currMember_7; }
	inline void set_m_currMember_7(int32_t value)
	{
		___m_currMember_7 = value;
	}

	inline static int32_t get_offset_of_m_converter_8() { return static_cast<int32_t>(offsetof(SerializationInfo_t1BB80E9C9DEA52DBF464487234B045E2930ADA26, ___m_converter_8)); }
	inline RuntimeObject* get_m_converter_8() const { return ___m_converter_8; }
	inline RuntimeObject** get_address_of_m_converter_8() { return &___m_converter_8; }
	inline void set_m_converter_8(RuntimeObject* value)
	{
		___m_converter_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_converter_8), (void*)value);
	}

	inline static int32_t get_offset_of_m_fullTypeName_9() { return static_cast<int32_t>(offsetof(SerializationInfo_t1BB80E9C9DEA52DBF464487234B045E2930ADA26, ___m_fullTypeName_9)); }
	inline String_t* get_m_fullTypeName_9() const { return ___m_fullTypeName_9; }
	inline String_t** get_address_of_m_fullTypeName_9() { return &___m_fullTypeName_9; }
	inline void set_m_fullTypeName_9(String_t* value)
	{
		___m_fullTypeName_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_fullTypeName_9), (void*)value);
	}

	inline static int32_t get_offset_of_m_assemName_10() { return static_cast<int32_t>(offsetof(SerializationInfo_t1BB80E9C9DEA52DBF464487234B045E2930ADA26, ___m_assemName_10)); }
	inline String_t* get_m_assemName_10() const { return ___m_assemName_10; }
	inline String_t** get_address_of_m_assemName_10() { return &___m_assemName_10; }
	inline void set_m_assemName_10(String_t* value)
	{
		___m_assemName_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_assemName_10), (void*)value);
	}

	inline static int32_t get_offset_of_objectType_11() { return static_cast<int32_t>(offsetof(SerializationInfo_t1BB80E9C9DEA52DBF464487234B045E2930ADA26, ___objectType_11)); }
	inline Type_t * get_objectType_11() const { return ___objectType_11; }
	inline Type_t ** get_address_of_objectType_11() { return &___objectType_11; }
	inline void set_objectType_11(Type_t * value)
	{
		___objectType_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___objectType_11), (void*)value);
	}

	inline static int32_t get_offset_of_isFullTypeNameSetExplicit_12() { return static_cast<int32_t>(offsetof(SerializationInfo_t1BB80E9C9DEA52DBF464487234B045E2930ADA26, ___isFullTypeNameSetExplicit_12)); }
	inline bool get_isFullTypeNameSetExplicit_12() const { return ___isFullTypeNameSetExplicit_12; }
	inline bool* get_address_of_isFullTypeNameSetExplicit_12() { return &___isFullTypeNameSetExplicit_12; }
	inline void set_isFullTypeNameSetExplicit_12(bool value)
	{
		___isFullTypeNameSetExplicit_12 = value;
	}

	inline static int32_t get_offset_of_isAssemblyNameSetExplicit_13() { return static_cast<int32_t>(offsetof(SerializationInfo_t1BB80E9C9DEA52DBF464487234B045E2930ADA26, ___isAssemblyNameSetExplicit_13)); }
	inline bool get_isAssemblyNameSetExplicit_13() const { return ___isAssemblyNameSetExplicit_13; }
	inline bool* get_address_of_isAssemblyNameSetExplicit_13() { return &___isAssemblyNameSetExplicit_13; }
	inline void set_isAssemblyNameSetExplicit_13(bool value)
	{
		___isAssemblyNameSetExplicit_13 = value;
	}

	inline static int32_t get_offset_of_requireSameTokenInPartialTrust_14() { return static_cast<int32_t>(offsetof(SerializationInfo_t1BB80E9C9DEA52DBF464487234B045E2930ADA26, ___requireSameTokenInPartialTrust_14)); }
	inline bool get_requireSameTokenInPartialTrust_14() const { return ___requireSameTokenInPartialTrust_14; }
	inline bool* get_address_of_requireSameTokenInPartialTrust_14() { return &___requireSameTokenInPartialTrust_14; }
	inline void set_requireSameTokenInPartialTrust_14(bool value)
	{
		___requireSameTokenInPartialTrust_14 = value;
	}
};


// System.Security.Cryptography.X509Certificates.X509Certificate
struct  X509Certificate_t6859B8914E252B6831D6F59A2A720CD23F7FA7B2  : public RuntimeObject
{
public:
	// System.Security.Cryptography.X509Certificates.X509CertificateImpl System.Security.Cryptography.X509Certificates.X509Certificate::impl
	X509CertificateImpl_t89610BFDE87B872143A4623CFC7F17275EB48313 * ___impl_0;
	// System.Boolean System.Security.Cryptography.X509Certificates.X509Certificate::hideDates
	bool ___hideDates_1;
	// System.String System.Security.Cryptography.X509Certificates.X509Certificate::issuer_name
	String_t* ___issuer_name_2;
	// System.String System.Security.Cryptography.X509Certificates.X509Certificate::subject_name
	String_t* ___subject_name_3;

public:
	inline static int32_t get_offset_of_impl_0() { return static_cast<int32_t>(offsetof(X509Certificate_t6859B8914E252B6831D6F59A2A720CD23F7FA7B2, ___impl_0)); }
	inline X509CertificateImpl_t89610BFDE87B872143A4623CFC7F17275EB48313 * get_impl_0() const { return ___impl_0; }
	inline X509CertificateImpl_t89610BFDE87B872143A4623CFC7F17275EB48313 ** get_address_of_impl_0() { return &___impl_0; }
	inline void set_impl_0(X509CertificateImpl_t89610BFDE87B872143A4623CFC7F17275EB48313 * value)
	{
		___impl_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___impl_0), (void*)value);
	}

	inline static int32_t get_offset_of_hideDates_1() { return static_cast<int32_t>(offsetof(X509Certificate_t6859B8914E252B6831D6F59A2A720CD23F7FA7B2, ___hideDates_1)); }
	inline bool get_hideDates_1() const { return ___hideDates_1; }
	inline bool* get_address_of_hideDates_1() { return &___hideDates_1; }
	inline void set_hideDates_1(bool value)
	{
		___hideDates_1 = value;
	}

	inline static int32_t get_offset_of_issuer_name_2() { return static_cast<int32_t>(offsetof(X509Certificate_t6859B8914E252B6831D6F59A2A720CD23F7FA7B2, ___issuer_name_2)); }
	inline String_t* get_issuer_name_2() const { return ___issuer_name_2; }
	inline String_t** get_address_of_issuer_name_2() { return &___issuer_name_2; }
	inline void set_issuer_name_2(String_t* value)
	{
		___issuer_name_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___issuer_name_2), (void*)value);
	}

	inline static int32_t get_offset_of_subject_name_3() { return static_cast<int32_t>(offsetof(X509Certificate_t6859B8914E252B6831D6F59A2A720CD23F7FA7B2, ___subject_name_3)); }
	inline String_t* get_subject_name_3() const { return ___subject_name_3; }
	inline String_t** get_address_of_subject_name_3() { return &___subject_name_3; }
	inline void set_subject_name_3(String_t* value)
	{
		___subject_name_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___subject_name_3), (void*)value);
	}
};


// System.Security.Cryptography.X509Certificates.X509Chain
struct  X509Chain_t4A28E9A30CBB331C9B68AE4AFCB30625C6C8B538  : public RuntimeObject
{
public:
	// System.Security.Cryptography.X509Certificates.X509ChainImpl System.Security.Cryptography.X509Certificates.X509Chain::impl
	X509ChainImpl_t34FABF07BEA0CFB6D88717BCDDE0607D9DA13A67 * ___impl_0;

public:
	inline static int32_t get_offset_of_impl_0() { return static_cast<int32_t>(offsetof(X509Chain_t4A28E9A30CBB331C9B68AE4AFCB30625C6C8B538, ___impl_0)); }
	inline X509ChainImpl_t34FABF07BEA0CFB6D88717BCDDE0607D9DA13A67 * get_impl_0() const { return ___impl_0; }
	inline X509ChainImpl_t34FABF07BEA0CFB6D88717BCDDE0607D9DA13A67 ** get_address_of_impl_0() { return &___impl_0; }
	inline void set_impl_0(X509ChainImpl_t34FABF07BEA0CFB6D88717BCDDE0607D9DA13A67 * value)
	{
		___impl_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___impl_0), (void*)value);
	}
};


// System.String
struct  String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::m_stringLength
	int32_t ___m_stringLength_0;
	// System.Char System.String::m_firstChar
	Il2CppChar ___m_firstChar_1;

public:
	inline static int32_t get_offset_of_m_stringLength_0() { return static_cast<int32_t>(offsetof(String_t, ___m_stringLength_0)); }
	inline int32_t get_m_stringLength_0() const { return ___m_stringLength_0; }
	inline int32_t* get_address_of_m_stringLength_0() { return &___m_stringLength_0; }
	inline void set_m_stringLength_0(int32_t value)
	{
		___m_stringLength_0 = value;
	}

	inline static int32_t get_offset_of_m_firstChar_1() { return static_cast<int32_t>(offsetof(String_t, ___m_firstChar_1)); }
	inline Il2CppChar get_m_firstChar_1() const { return ___m_firstChar_1; }
	inline Il2CppChar* get_address_of_m_firstChar_1() { return &___m_firstChar_1; }
	inline void set_m_firstChar_1(Il2CppChar value)
	{
		___m_firstChar_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_5;

public:
	inline static int32_t get_offset_of_Empty_5() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_5)); }
	inline String_t* get_Empty_5() const { return ___Empty_5; }
	inline String_t** get_address_of_Empty_5() { return &___Empty_5; }
	inline void set_Empty_5(String_t* value)
	{
		___Empty_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Empty_5), (void*)value);
	}
};


// System.ValueType
struct  ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_marshaled_com
{
};

// UnityEngine.CustomYieldInstruction
struct  CustomYieldInstruction_t819BB0973AFF22766749FF087B8AEFEAF3C2CB7D  : public RuntimeObject
{
public:

public:
};


// UnityGLTF.Cache.AssetCache
struct  AssetCache_tE060C78C9F54F8BF6F50E904460FA53958B59D91  : public RuntimeObject
{
public:
	// System.IO.Stream[] UnityGLTF.Cache.AssetCache::<ImageStreamCache>k__BackingField
	StreamU5BU5D_tDADB5390E6C9A2BDA8A341EECC9F7F9DE08DB362* ___U3CImageStreamCacheU3Ek__BackingField_0;
	// UnityEngine.Texture2D[] UnityGLTF.Cache.AssetCache::<ImageCache>k__BackingField
	Texture2DU5BU5D_tCAC03055C735C020BAFC218D55183CF03E74C1C9* ___U3CImageCacheU3Ek__BackingField_1;
	// UnityGLTF.Cache.TextureCacheData[] UnityGLTF.Cache.AssetCache::<TextureCache>k__BackingField
	TextureCacheDataU5BU5D_t007DE14D03C524515B2A7999CFFD173EE498C1C4* ___U3CTextureCacheU3Ek__BackingField_2;
	// UnityGLTF.Cache.MaterialCacheData[] UnityGLTF.Cache.AssetCache::<MaterialCache>k__BackingField
	MaterialCacheDataU5BU5D_t9A21B420B621CCFCE6242A807F055E5E17C12B27* ___U3CMaterialCacheU3Ek__BackingField_3;
	// UnityGLTF.Cache.BufferCacheData[] UnityGLTF.Cache.AssetCache::<BufferCache>k__BackingField
	BufferCacheDataU5BU5D_t090C5C4874ADA45FFD0C6E6B36010DD196C0975E* ___U3CBufferCacheU3Ek__BackingField_4;
	// UnityGLTF.Cache.MeshCacheData[] UnityGLTF.Cache.AssetCache::<MeshCache>k__BackingField
	MeshCacheDataU5BU5D_t172934B760B5F101344848AB49BADBC9CAC4E59C* ___U3CMeshCacheU3Ek__BackingField_5;
	// UnityGLTF.Cache.AnimationCacheData[] UnityGLTF.Cache.AssetCache::<AnimationCache>k__BackingField
	AnimationCacheDataU5BU5D_t88E1E8039583641016EAF933DED26D2FCA34F506* ___U3CAnimationCacheU3Ek__BackingField_6;
	// UnityEngine.GameObject[] UnityGLTF.Cache.AssetCache::<NodeCache>k__BackingField
	GameObjectU5BU5D_tBF9D474747511CF34A040A1697E34C74C19BB520* ___U3CNodeCacheU3Ek__BackingField_7;

public:
	inline static int32_t get_offset_of_U3CImageStreamCacheU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(AssetCache_tE060C78C9F54F8BF6F50E904460FA53958B59D91, ___U3CImageStreamCacheU3Ek__BackingField_0)); }
	inline StreamU5BU5D_tDADB5390E6C9A2BDA8A341EECC9F7F9DE08DB362* get_U3CImageStreamCacheU3Ek__BackingField_0() const { return ___U3CImageStreamCacheU3Ek__BackingField_0; }
	inline StreamU5BU5D_tDADB5390E6C9A2BDA8A341EECC9F7F9DE08DB362** get_address_of_U3CImageStreamCacheU3Ek__BackingField_0() { return &___U3CImageStreamCacheU3Ek__BackingField_0; }
	inline void set_U3CImageStreamCacheU3Ek__BackingField_0(StreamU5BU5D_tDADB5390E6C9A2BDA8A341EECC9F7F9DE08DB362* value)
	{
		___U3CImageStreamCacheU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CImageStreamCacheU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CImageCacheU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(AssetCache_tE060C78C9F54F8BF6F50E904460FA53958B59D91, ___U3CImageCacheU3Ek__BackingField_1)); }
	inline Texture2DU5BU5D_tCAC03055C735C020BAFC218D55183CF03E74C1C9* get_U3CImageCacheU3Ek__BackingField_1() const { return ___U3CImageCacheU3Ek__BackingField_1; }
	inline Texture2DU5BU5D_tCAC03055C735C020BAFC218D55183CF03E74C1C9** get_address_of_U3CImageCacheU3Ek__BackingField_1() { return &___U3CImageCacheU3Ek__BackingField_1; }
	inline void set_U3CImageCacheU3Ek__BackingField_1(Texture2DU5BU5D_tCAC03055C735C020BAFC218D55183CF03E74C1C9* value)
	{
		___U3CImageCacheU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CImageCacheU3Ek__BackingField_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CTextureCacheU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(AssetCache_tE060C78C9F54F8BF6F50E904460FA53958B59D91, ___U3CTextureCacheU3Ek__BackingField_2)); }
	inline TextureCacheDataU5BU5D_t007DE14D03C524515B2A7999CFFD173EE498C1C4* get_U3CTextureCacheU3Ek__BackingField_2() const { return ___U3CTextureCacheU3Ek__BackingField_2; }
	inline TextureCacheDataU5BU5D_t007DE14D03C524515B2A7999CFFD173EE498C1C4** get_address_of_U3CTextureCacheU3Ek__BackingField_2() { return &___U3CTextureCacheU3Ek__BackingField_2; }
	inline void set_U3CTextureCacheU3Ek__BackingField_2(TextureCacheDataU5BU5D_t007DE14D03C524515B2A7999CFFD173EE498C1C4* value)
	{
		___U3CTextureCacheU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CTextureCacheU3Ek__BackingField_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CMaterialCacheU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(AssetCache_tE060C78C9F54F8BF6F50E904460FA53958B59D91, ___U3CMaterialCacheU3Ek__BackingField_3)); }
	inline MaterialCacheDataU5BU5D_t9A21B420B621CCFCE6242A807F055E5E17C12B27* get_U3CMaterialCacheU3Ek__BackingField_3() const { return ___U3CMaterialCacheU3Ek__BackingField_3; }
	inline MaterialCacheDataU5BU5D_t9A21B420B621CCFCE6242A807F055E5E17C12B27** get_address_of_U3CMaterialCacheU3Ek__BackingField_3() { return &___U3CMaterialCacheU3Ek__BackingField_3; }
	inline void set_U3CMaterialCacheU3Ek__BackingField_3(MaterialCacheDataU5BU5D_t9A21B420B621CCFCE6242A807F055E5E17C12B27* value)
	{
		___U3CMaterialCacheU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CMaterialCacheU3Ek__BackingField_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CBufferCacheU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(AssetCache_tE060C78C9F54F8BF6F50E904460FA53958B59D91, ___U3CBufferCacheU3Ek__BackingField_4)); }
	inline BufferCacheDataU5BU5D_t090C5C4874ADA45FFD0C6E6B36010DD196C0975E* get_U3CBufferCacheU3Ek__BackingField_4() const { return ___U3CBufferCacheU3Ek__BackingField_4; }
	inline BufferCacheDataU5BU5D_t090C5C4874ADA45FFD0C6E6B36010DD196C0975E** get_address_of_U3CBufferCacheU3Ek__BackingField_4() { return &___U3CBufferCacheU3Ek__BackingField_4; }
	inline void set_U3CBufferCacheU3Ek__BackingField_4(BufferCacheDataU5BU5D_t090C5C4874ADA45FFD0C6E6B36010DD196C0975E* value)
	{
		___U3CBufferCacheU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CBufferCacheU3Ek__BackingField_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CMeshCacheU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(AssetCache_tE060C78C9F54F8BF6F50E904460FA53958B59D91, ___U3CMeshCacheU3Ek__BackingField_5)); }
	inline MeshCacheDataU5BU5D_t172934B760B5F101344848AB49BADBC9CAC4E59C* get_U3CMeshCacheU3Ek__BackingField_5() const { return ___U3CMeshCacheU3Ek__BackingField_5; }
	inline MeshCacheDataU5BU5D_t172934B760B5F101344848AB49BADBC9CAC4E59C** get_address_of_U3CMeshCacheU3Ek__BackingField_5() { return &___U3CMeshCacheU3Ek__BackingField_5; }
	inline void set_U3CMeshCacheU3Ek__BackingField_5(MeshCacheDataU5BU5D_t172934B760B5F101344848AB49BADBC9CAC4E59C* value)
	{
		___U3CMeshCacheU3Ek__BackingField_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CMeshCacheU3Ek__BackingField_5), (void*)value);
	}

	inline static int32_t get_offset_of_U3CAnimationCacheU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(AssetCache_tE060C78C9F54F8BF6F50E904460FA53958B59D91, ___U3CAnimationCacheU3Ek__BackingField_6)); }
	inline AnimationCacheDataU5BU5D_t88E1E8039583641016EAF933DED26D2FCA34F506* get_U3CAnimationCacheU3Ek__BackingField_6() const { return ___U3CAnimationCacheU3Ek__BackingField_6; }
	inline AnimationCacheDataU5BU5D_t88E1E8039583641016EAF933DED26D2FCA34F506** get_address_of_U3CAnimationCacheU3Ek__BackingField_6() { return &___U3CAnimationCacheU3Ek__BackingField_6; }
	inline void set_U3CAnimationCacheU3Ek__BackingField_6(AnimationCacheDataU5BU5D_t88E1E8039583641016EAF933DED26D2FCA34F506* value)
	{
		___U3CAnimationCacheU3Ek__BackingField_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CAnimationCacheU3Ek__BackingField_6), (void*)value);
	}

	inline static int32_t get_offset_of_U3CNodeCacheU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(AssetCache_tE060C78C9F54F8BF6F50E904460FA53958B59D91, ___U3CNodeCacheU3Ek__BackingField_7)); }
	inline GameObjectU5BU5D_tBF9D474747511CF34A040A1697E34C74C19BB520* get_U3CNodeCacheU3Ek__BackingField_7() const { return ___U3CNodeCacheU3Ek__BackingField_7; }
	inline GameObjectU5BU5D_tBF9D474747511CF34A040A1697E34C74C19BB520** get_address_of_U3CNodeCacheU3Ek__BackingField_7() { return &___U3CNodeCacheU3Ek__BackingField_7; }
	inline void set_U3CNodeCacheU3Ek__BackingField_7(GameObjectU5BU5D_tBF9D474747511CF34A040A1697E34C74C19BB520* value)
	{
		___U3CNodeCacheU3Ek__BackingField_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CNodeCacheU3Ek__BackingField_7), (void*)value);
	}
};


// UnityGLTF.Cache.BufferCacheData
struct  BufferCacheData_t94725215DAEBBBFF691A97822F8744A8038F6743  : public RuntimeObject
{
public:
	// System.UInt32 UnityGLTF.Cache.BufferCacheData::<ChunkOffset>k__BackingField
	uint32_t ___U3CChunkOffsetU3Ek__BackingField_0;
	// System.IO.Stream UnityGLTF.Cache.BufferCacheData::<Stream>k__BackingField
	Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * ___U3CStreamU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_U3CChunkOffsetU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(BufferCacheData_t94725215DAEBBBFF691A97822F8744A8038F6743, ___U3CChunkOffsetU3Ek__BackingField_0)); }
	inline uint32_t get_U3CChunkOffsetU3Ek__BackingField_0() const { return ___U3CChunkOffsetU3Ek__BackingField_0; }
	inline uint32_t* get_address_of_U3CChunkOffsetU3Ek__BackingField_0() { return &___U3CChunkOffsetU3Ek__BackingField_0; }
	inline void set_U3CChunkOffsetU3Ek__BackingField_0(uint32_t value)
	{
		___U3CChunkOffsetU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3CStreamU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(BufferCacheData_t94725215DAEBBBFF691A97822F8744A8038F6743, ___U3CStreamU3Ek__BackingField_1)); }
	inline Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * get_U3CStreamU3Ek__BackingField_1() const { return ___U3CStreamU3Ek__BackingField_1; }
	inline Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 ** get_address_of_U3CStreamU3Ek__BackingField_1() { return &___U3CStreamU3Ek__BackingField_1; }
	inline void set_U3CStreamU3Ek__BackingField_1(Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * value)
	{
		___U3CStreamU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CStreamU3Ek__BackingField_1), (void*)value);
	}
};


// UnityGLTF.Cache.MaterialCacheData
struct  MaterialCacheData_t69ADD85645108393A5E19F1C642F81F977EA57CE  : public RuntimeObject
{
public:
	// UnityEngine.Material UnityGLTF.Cache.MaterialCacheData::<UnityMaterial>k__BackingField
	Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___U3CUnityMaterialU3Ek__BackingField_0;
	// UnityEngine.Material UnityGLTF.Cache.MaterialCacheData::<UnityMaterialWithVertexColor>k__BackingField
	Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___U3CUnityMaterialWithVertexColorU3Ek__BackingField_1;
	// GLTF.Schema.GLTFMaterial UnityGLTF.Cache.MaterialCacheData::<GLTFMaterial>k__BackingField
	GLTFMaterial_t3823C70B2B7CB4235F78C94163E7FA538F482C99 * ___U3CGLTFMaterialU3Ek__BackingField_2;

public:
	inline static int32_t get_offset_of_U3CUnityMaterialU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(MaterialCacheData_t69ADD85645108393A5E19F1C642F81F977EA57CE, ___U3CUnityMaterialU3Ek__BackingField_0)); }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * get_U3CUnityMaterialU3Ek__BackingField_0() const { return ___U3CUnityMaterialU3Ek__BackingField_0; }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 ** get_address_of_U3CUnityMaterialU3Ek__BackingField_0() { return &___U3CUnityMaterialU3Ek__BackingField_0; }
	inline void set_U3CUnityMaterialU3Ek__BackingField_0(Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * value)
	{
		___U3CUnityMaterialU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CUnityMaterialU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CUnityMaterialWithVertexColorU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(MaterialCacheData_t69ADD85645108393A5E19F1C642F81F977EA57CE, ___U3CUnityMaterialWithVertexColorU3Ek__BackingField_1)); }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * get_U3CUnityMaterialWithVertexColorU3Ek__BackingField_1() const { return ___U3CUnityMaterialWithVertexColorU3Ek__BackingField_1; }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 ** get_address_of_U3CUnityMaterialWithVertexColorU3Ek__BackingField_1() { return &___U3CUnityMaterialWithVertexColorU3Ek__BackingField_1; }
	inline void set_U3CUnityMaterialWithVertexColorU3Ek__BackingField_1(Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * value)
	{
		___U3CUnityMaterialWithVertexColorU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CUnityMaterialWithVertexColorU3Ek__BackingField_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CGLTFMaterialU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(MaterialCacheData_t69ADD85645108393A5E19F1C642F81F977EA57CE, ___U3CGLTFMaterialU3Ek__BackingField_2)); }
	inline GLTFMaterial_t3823C70B2B7CB4235F78C94163E7FA538F482C99 * get_U3CGLTFMaterialU3Ek__BackingField_2() const { return ___U3CGLTFMaterialU3Ek__BackingField_2; }
	inline GLTFMaterial_t3823C70B2B7CB4235F78C94163E7FA538F482C99 ** get_address_of_U3CGLTFMaterialU3Ek__BackingField_2() { return &___U3CGLTFMaterialU3Ek__BackingField_2; }
	inline void set_U3CGLTFMaterialU3Ek__BackingField_2(GLTFMaterial_t3823C70B2B7CB4235F78C94163E7FA538F482C99 * value)
	{
		___U3CGLTFMaterialU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CGLTFMaterialU3Ek__BackingField_2), (void*)value);
	}
};


// UnityGLTF.Cache.MeshCacheData
struct  MeshCacheData_tDC17655604D5D9B4FF0FFB71FEAB50212603F664  : public RuntimeObject
{
public:
	// System.Collections.Generic.List`1<UnityGLTF.Cache.MeshCacheData_PrimitiveCacheData> UnityGLTF.Cache.MeshCacheData::Primitives
	List_1_t9420DF802D37FA4BB2242207D802D9AD3A6CDC7D * ___Primitives_0;
	// UnityEngine.Mesh UnityGLTF.Cache.MeshCacheData::<LoadedMesh>k__BackingField
	Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * ___U3CLoadedMeshU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_Primitives_0() { return static_cast<int32_t>(offsetof(MeshCacheData_tDC17655604D5D9B4FF0FFB71FEAB50212603F664, ___Primitives_0)); }
	inline List_1_t9420DF802D37FA4BB2242207D802D9AD3A6CDC7D * get_Primitives_0() const { return ___Primitives_0; }
	inline List_1_t9420DF802D37FA4BB2242207D802D9AD3A6CDC7D ** get_address_of_Primitives_0() { return &___Primitives_0; }
	inline void set_Primitives_0(List_1_t9420DF802D37FA4BB2242207D802D9AD3A6CDC7D * value)
	{
		___Primitives_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Primitives_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CLoadedMeshU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(MeshCacheData_tDC17655604D5D9B4FF0FFB71FEAB50212603F664, ___U3CLoadedMeshU3Ek__BackingField_1)); }
	inline Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * get_U3CLoadedMeshU3Ek__BackingField_1() const { return ___U3CLoadedMeshU3Ek__BackingField_1; }
	inline Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C ** get_address_of_U3CLoadedMeshU3Ek__BackingField_1() { return &___U3CLoadedMeshU3Ek__BackingField_1; }
	inline void set_U3CLoadedMeshU3Ek__BackingField_1(Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * value)
	{
		___U3CLoadedMeshU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CLoadedMeshU3Ek__BackingField_1), (void*)value);
	}
};


// UnityGLTF.Cache.RefCountedCacheData
struct  RefCountedCacheData_t3E7A4E802B00500764E6515507894E680D89D572  : public RuntimeObject
{
public:
	// System.Boolean UnityGLTF.Cache.RefCountedCacheData::_isDisposed
	bool ____isDisposed_0;
	// System.Int32 UnityGLTF.Cache.RefCountedCacheData::_refCount
	int32_t ____refCount_1;
	// System.Object UnityGLTF.Cache.RefCountedCacheData::_refCountLock
	RuntimeObject * ____refCountLock_2;
	// UnityGLTF.Cache.MeshCacheData[] UnityGLTF.Cache.RefCountedCacheData::<MeshCache>k__BackingField
	MeshCacheDataU5BU5D_t172934B760B5F101344848AB49BADBC9CAC4E59C* ___U3CMeshCacheU3Ek__BackingField_3;
	// UnityGLTF.Cache.MaterialCacheData[] UnityGLTF.Cache.RefCountedCacheData::<MaterialCache>k__BackingField
	MaterialCacheDataU5BU5D_t9A21B420B621CCFCE6242A807F055E5E17C12B27* ___U3CMaterialCacheU3Ek__BackingField_4;
	// UnityGLTF.Cache.TextureCacheData[] UnityGLTF.Cache.RefCountedCacheData::<TextureCache>k__BackingField
	TextureCacheDataU5BU5D_t007DE14D03C524515B2A7999CFFD173EE498C1C4* ___U3CTextureCacheU3Ek__BackingField_5;
	// UnityEngine.Texture2D[] UnityGLTF.Cache.RefCountedCacheData::<ImageCache>k__BackingField
	Texture2DU5BU5D_tCAC03055C735C020BAFC218D55183CF03E74C1C9* ___U3CImageCacheU3Ek__BackingField_6;

public:
	inline static int32_t get_offset_of__isDisposed_0() { return static_cast<int32_t>(offsetof(RefCountedCacheData_t3E7A4E802B00500764E6515507894E680D89D572, ____isDisposed_0)); }
	inline bool get__isDisposed_0() const { return ____isDisposed_0; }
	inline bool* get_address_of__isDisposed_0() { return &____isDisposed_0; }
	inline void set__isDisposed_0(bool value)
	{
		____isDisposed_0 = value;
	}

	inline static int32_t get_offset_of__refCount_1() { return static_cast<int32_t>(offsetof(RefCountedCacheData_t3E7A4E802B00500764E6515507894E680D89D572, ____refCount_1)); }
	inline int32_t get__refCount_1() const { return ____refCount_1; }
	inline int32_t* get_address_of__refCount_1() { return &____refCount_1; }
	inline void set__refCount_1(int32_t value)
	{
		____refCount_1 = value;
	}

	inline static int32_t get_offset_of__refCountLock_2() { return static_cast<int32_t>(offsetof(RefCountedCacheData_t3E7A4E802B00500764E6515507894E680D89D572, ____refCountLock_2)); }
	inline RuntimeObject * get__refCountLock_2() const { return ____refCountLock_2; }
	inline RuntimeObject ** get_address_of__refCountLock_2() { return &____refCountLock_2; }
	inline void set__refCountLock_2(RuntimeObject * value)
	{
		____refCountLock_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____refCountLock_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CMeshCacheU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(RefCountedCacheData_t3E7A4E802B00500764E6515507894E680D89D572, ___U3CMeshCacheU3Ek__BackingField_3)); }
	inline MeshCacheDataU5BU5D_t172934B760B5F101344848AB49BADBC9CAC4E59C* get_U3CMeshCacheU3Ek__BackingField_3() const { return ___U3CMeshCacheU3Ek__BackingField_3; }
	inline MeshCacheDataU5BU5D_t172934B760B5F101344848AB49BADBC9CAC4E59C** get_address_of_U3CMeshCacheU3Ek__BackingField_3() { return &___U3CMeshCacheU3Ek__BackingField_3; }
	inline void set_U3CMeshCacheU3Ek__BackingField_3(MeshCacheDataU5BU5D_t172934B760B5F101344848AB49BADBC9CAC4E59C* value)
	{
		___U3CMeshCacheU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CMeshCacheU3Ek__BackingField_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CMaterialCacheU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(RefCountedCacheData_t3E7A4E802B00500764E6515507894E680D89D572, ___U3CMaterialCacheU3Ek__BackingField_4)); }
	inline MaterialCacheDataU5BU5D_t9A21B420B621CCFCE6242A807F055E5E17C12B27* get_U3CMaterialCacheU3Ek__BackingField_4() const { return ___U3CMaterialCacheU3Ek__BackingField_4; }
	inline MaterialCacheDataU5BU5D_t9A21B420B621CCFCE6242A807F055E5E17C12B27** get_address_of_U3CMaterialCacheU3Ek__BackingField_4() { return &___U3CMaterialCacheU3Ek__BackingField_4; }
	inline void set_U3CMaterialCacheU3Ek__BackingField_4(MaterialCacheDataU5BU5D_t9A21B420B621CCFCE6242A807F055E5E17C12B27* value)
	{
		___U3CMaterialCacheU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CMaterialCacheU3Ek__BackingField_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CTextureCacheU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(RefCountedCacheData_t3E7A4E802B00500764E6515507894E680D89D572, ___U3CTextureCacheU3Ek__BackingField_5)); }
	inline TextureCacheDataU5BU5D_t007DE14D03C524515B2A7999CFFD173EE498C1C4* get_U3CTextureCacheU3Ek__BackingField_5() const { return ___U3CTextureCacheU3Ek__BackingField_5; }
	inline TextureCacheDataU5BU5D_t007DE14D03C524515B2A7999CFFD173EE498C1C4** get_address_of_U3CTextureCacheU3Ek__BackingField_5() { return &___U3CTextureCacheU3Ek__BackingField_5; }
	inline void set_U3CTextureCacheU3Ek__BackingField_5(TextureCacheDataU5BU5D_t007DE14D03C524515B2A7999CFFD173EE498C1C4* value)
	{
		___U3CTextureCacheU3Ek__BackingField_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CTextureCacheU3Ek__BackingField_5), (void*)value);
	}

	inline static int32_t get_offset_of_U3CImageCacheU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(RefCountedCacheData_t3E7A4E802B00500764E6515507894E680D89D572, ___U3CImageCacheU3Ek__BackingField_6)); }
	inline Texture2DU5BU5D_tCAC03055C735C020BAFC218D55183CF03E74C1C9* get_U3CImageCacheU3Ek__BackingField_6() const { return ___U3CImageCacheU3Ek__BackingField_6; }
	inline Texture2DU5BU5D_tCAC03055C735C020BAFC218D55183CF03E74C1C9** get_address_of_U3CImageCacheU3Ek__BackingField_6() { return &___U3CImageCacheU3Ek__BackingField_6; }
	inline void set_U3CImageCacheU3Ek__BackingField_6(Texture2DU5BU5D_tCAC03055C735C020BAFC218D55183CF03E74C1C9* value)
	{
		___U3CImageCacheU3Ek__BackingField_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CImageCacheU3Ek__BackingField_6), (void*)value);
	}
};


// UnityGLTF.GLTFSceneImporter_<>c__DisplayClass52_0
struct  U3CU3Ec__DisplayClass52_0_t76D5C75ED384CEF8461B4D071C42B3931697D57F  : public RuntimeObject
{
public:
	// System.Int32 UnityGLTF.GLTFSceneImporter_<>c__DisplayClass52_0::materialIndex
	int32_t ___materialIndex_0;
	// UnityGLTF.GLTFSceneImporter UnityGLTF.GLTFSceneImporter_<>c__DisplayClass52_0::<>4__this
	GLTFSceneImporter_t29A5109798926C47E5B089376F3E467E78EB710E * ___U3CU3E4__this_1;

public:
	inline static int32_t get_offset_of_materialIndex_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass52_0_t76D5C75ED384CEF8461B4D071C42B3931697D57F, ___materialIndex_0)); }
	inline int32_t get_materialIndex_0() const { return ___materialIndex_0; }
	inline int32_t* get_address_of_materialIndex_0() { return &___materialIndex_0; }
	inline void set_materialIndex_0(int32_t value)
	{
		___materialIndex_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E4__this_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass52_0_t76D5C75ED384CEF8461B4D071C42B3931697D57F, ___U3CU3E4__this_1)); }
	inline GLTFSceneImporter_t29A5109798926C47E5B089376F3E467E78EB710E * get_U3CU3E4__this_1() const { return ___U3CU3E4__this_1; }
	inline GLTFSceneImporter_t29A5109798926C47E5B089376F3E467E78EB710E ** get_address_of_U3CU3E4__this_1() { return &___U3CU3E4__this_1; }
	inline void set_U3CU3E4__this_1(GLTFSceneImporter_t29A5109798926C47E5B089376F3E467E78EB710E * value)
	{
		___U3CU3E4__this_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_1), (void*)value);
	}
};


// UnityGLTF.GLTFSceneImporter_<>c__DisplayClass59_0
struct  U3CU3Ec__DisplayClass59_0_t52561C113FB61DE90816C347C4AAD7789417775A  : public RuntimeObject
{
public:
	// UnityGLTF.GLTFSceneImporter UnityGLTF.GLTFSceneImporter_<>c__DisplayClass59_0::<>4__this
	GLTFSceneImporter_t29A5109798926C47E5B089376F3E467E78EB710E * ___U3CU3E4__this_0;
	// UnityGLTF.Loader.IDataLoader2 UnityGLTF.GLTFSceneImporter_<>c__DisplayClass59_0::dataLoader2
	RuntimeObject* ___dataLoader2_1;
	// System.String UnityGLTF.GLTFSceneImporter_<>c__DisplayClass59_0::jsonFilePath
	String_t* ___jsonFilePath_2;

public:
	inline static int32_t get_offset_of_U3CU3E4__this_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass59_0_t52561C113FB61DE90816C347C4AAD7789417775A, ___U3CU3E4__this_0)); }
	inline GLTFSceneImporter_t29A5109798926C47E5B089376F3E467E78EB710E * get_U3CU3E4__this_0() const { return ___U3CU3E4__this_0; }
	inline GLTFSceneImporter_t29A5109798926C47E5B089376F3E467E78EB710E ** get_address_of_U3CU3E4__this_0() { return &___U3CU3E4__this_0; }
	inline void set_U3CU3E4__this_0(GLTFSceneImporter_t29A5109798926C47E5B089376F3E467E78EB710E * value)
	{
		___U3CU3E4__this_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_0), (void*)value);
	}

	inline static int32_t get_offset_of_dataLoader2_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass59_0_t52561C113FB61DE90816C347C4AAD7789417775A, ___dataLoader2_1)); }
	inline RuntimeObject* get_dataLoader2_1() const { return ___dataLoader2_1; }
	inline RuntimeObject** get_address_of_dataLoader2_1() { return &___dataLoader2_1; }
	inline void set_dataLoader2_1(RuntimeObject* value)
	{
		___dataLoader2_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dataLoader2_1), (void*)value);
	}

	inline static int32_t get_offset_of_jsonFilePath_2() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass59_0_t52561C113FB61DE90816C347C4AAD7789417775A, ___jsonFilePath_2)); }
	inline String_t* get_jsonFilePath_2() const { return ___jsonFilePath_2; }
	inline String_t** get_address_of_jsonFilePath_2() { return &___jsonFilePath_2; }
	inline void set_jsonFilePath_2(String_t* value)
	{
		___jsonFilePath_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___jsonFilePath_2), (void*)value);
	}
};


// UnityGLTF.GLTFSceneImporter_<>c__DisplayClass59_1
struct  U3CU3Ec__DisplayClass59_1_t90F861F46C374BE511649433683ED6D305917F53  : public RuntimeObject
{
public:
	// System.Threading.Thread UnityGLTF.GLTFSceneImporter_<>c__DisplayClass59_1::loadThread
	Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7 * ___loadThread_0;

public:
	inline static int32_t get_offset_of_loadThread_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass59_1_t90F861F46C374BE511649433683ED6D305917F53, ___loadThread_0)); }
	inline Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7 * get_loadThread_0() const { return ___loadThread_0; }
	inline Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7 ** get_address_of_loadThread_0() { return &___loadThread_0; }
	inline void set_loadThread_0(Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7 * value)
	{
		___loadThread_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___loadThread_0), (void*)value);
	}
};


// UnityGLTF.GLTFSceneImporter_<>c__DisplayClass59_2
struct  U3CU3Ec__DisplayClass59_2_t38C2586B97A5A0799CF34EFCC7F95D39B8CC89E2  : public RuntimeObject
{
public:
	// System.Threading.Thread UnityGLTF.GLTFSceneImporter_<>c__DisplayClass59_2::parseJsonThread
	Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7 * ___parseJsonThread_0;

public:
	inline static int32_t get_offset_of_parseJsonThread_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass59_2_t38C2586B97A5A0799CF34EFCC7F95D39B8CC89E2, ___parseJsonThread_0)); }
	inline Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7 * get_parseJsonThread_0() const { return ___parseJsonThread_0; }
	inline Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7 ** get_address_of_parseJsonThread_0() { return &___parseJsonThread_0; }
	inline void set_parseJsonThread_0(Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7 * value)
	{
		___parseJsonThread_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___parseJsonThread_0), (void*)value);
	}
};


// UnityGLTF.GLTFSceneImporter_<WaitUntilEnum>d__58
struct  U3CWaitUntilEnumU3Ed__58_t88491DB218CBB87C50048C22305BCAAC4FD1D126  : public RuntimeObject
{
public:
	// System.Int32 UnityGLTF.GLTFSceneImporter_<WaitUntilEnum>d__58::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object UnityGLTF.GLTFSceneImporter_<WaitUntilEnum>d__58::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// UnityEngine.WaitUntil UnityGLTF.GLTFSceneImporter_<WaitUntilEnum>d__58::waitUntil
	WaitUntil_t012561515C0E1D3DEA19DB3A05444B020C68E13F * ___waitUntil_2;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CWaitUntilEnumU3Ed__58_t88491DB218CBB87C50048C22305BCAAC4FD1D126, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CWaitUntilEnumU3Ed__58_t88491DB218CBB87C50048C22305BCAAC4FD1D126, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_waitUntil_2() { return static_cast<int32_t>(offsetof(U3CWaitUntilEnumU3Ed__58_t88491DB218CBB87C50048C22305BCAAC4FD1D126, ___waitUntil_2)); }
	inline WaitUntil_t012561515C0E1D3DEA19DB3A05444B020C68E13F * get_waitUntil_2() const { return ___waitUntil_2; }
	inline WaitUntil_t012561515C0E1D3DEA19DB3A05444B020C68E13F ** get_address_of_waitUntil_2() { return &___waitUntil_2; }
	inline void set_waitUntil_2(WaitUntil_t012561515C0E1D3DEA19DB3A05444B020C68E13F * value)
	{
		___waitUntil_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___waitUntil_2), (void*)value);
	}
};


// UnityGLTF.ImportOptions
struct  ImportOptions_tF7380126D05F8D0CD248534D3C19EA83F20FA88E  : public RuntimeObject
{
public:
	// UnityGLTF.Loader.ILoader UnityGLTF.ImportOptions::ExternalDataLoader
	RuntimeObject* ___ExternalDataLoader_0;
	// UnityGLTF.Loader.IDataLoader UnityGLTF.ImportOptions::DataLoader
	RuntimeObject* ___DataLoader_1;
	// UnityGLTF.AsyncCoroutineHelper UnityGLTF.ImportOptions::AsyncCoroutineHelper
	AsyncCoroutineHelper_t032BCD93473D0EBD9757396C7B539A1475B92757 * ___AsyncCoroutineHelper_2;
	// System.Boolean UnityGLTF.ImportOptions::ThrowOnLowMemory
	bool ___ThrowOnLowMemory_3;

public:
	inline static int32_t get_offset_of_ExternalDataLoader_0() { return static_cast<int32_t>(offsetof(ImportOptions_tF7380126D05F8D0CD248534D3C19EA83F20FA88E, ___ExternalDataLoader_0)); }
	inline RuntimeObject* get_ExternalDataLoader_0() const { return ___ExternalDataLoader_0; }
	inline RuntimeObject** get_address_of_ExternalDataLoader_0() { return &___ExternalDataLoader_0; }
	inline void set_ExternalDataLoader_0(RuntimeObject* value)
	{
		___ExternalDataLoader_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ExternalDataLoader_0), (void*)value);
	}

	inline static int32_t get_offset_of_DataLoader_1() { return static_cast<int32_t>(offsetof(ImportOptions_tF7380126D05F8D0CD248534D3C19EA83F20FA88E, ___DataLoader_1)); }
	inline RuntimeObject* get_DataLoader_1() const { return ___DataLoader_1; }
	inline RuntimeObject** get_address_of_DataLoader_1() { return &___DataLoader_1; }
	inline void set_DataLoader_1(RuntimeObject* value)
	{
		___DataLoader_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DataLoader_1), (void*)value);
	}

	inline static int32_t get_offset_of_AsyncCoroutineHelper_2() { return static_cast<int32_t>(offsetof(ImportOptions_tF7380126D05F8D0CD248534D3C19EA83F20FA88E, ___AsyncCoroutineHelper_2)); }
	inline AsyncCoroutineHelper_t032BCD93473D0EBD9757396C7B539A1475B92757 * get_AsyncCoroutineHelper_2() const { return ___AsyncCoroutineHelper_2; }
	inline AsyncCoroutineHelper_t032BCD93473D0EBD9757396C7B539A1475B92757 ** get_address_of_AsyncCoroutineHelper_2() { return &___AsyncCoroutineHelper_2; }
	inline void set_AsyncCoroutineHelper_2(AsyncCoroutineHelper_t032BCD93473D0EBD9757396C7B539A1475B92757 * value)
	{
		___AsyncCoroutineHelper_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___AsyncCoroutineHelper_2), (void*)value);
	}

	inline static int32_t get_offset_of_ThrowOnLowMemory_3() { return static_cast<int32_t>(offsetof(ImportOptions_tF7380126D05F8D0CD248534D3C19EA83F20FA88E, ___ThrowOnLowMemory_3)); }
	inline bool get_ThrowOnLowMemory_3() const { return ___ThrowOnLowMemory_3; }
	inline bool* get_address_of_ThrowOnLowMemory_3() { return &___ThrowOnLowMemory_3; }
	inline void set_ThrowOnLowMemory_3(bool value)
	{
		___ThrowOnLowMemory_3 = value;
	}
};


// UnityGLTF.Loader.FileLoader
struct  FileLoader_t0E6039215F6C1ABA58F3C0F708E581A45BDF3BC8  : public RuntimeObject
{
public:
	// System.String UnityGLTF.Loader.FileLoader::_rootDirectoryPath
	String_t* ____rootDirectoryPath_0;

public:
	inline static int32_t get_offset_of__rootDirectoryPath_0() { return static_cast<int32_t>(offsetof(FileLoader_t0E6039215F6C1ABA58F3C0F708E581A45BDF3BC8, ____rootDirectoryPath_0)); }
	inline String_t* get__rootDirectoryPath_0() const { return ____rootDirectoryPath_0; }
	inline String_t** get_address_of__rootDirectoryPath_0() { return &____rootDirectoryPath_0; }
	inline void set__rootDirectoryPath_0(String_t* value)
	{
		____rootDirectoryPath_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____rootDirectoryPath_0), (void*)value);
	}
};


// UnityGLTF.Loader.FileLoader_<>c__DisplayClass2_0
struct  U3CU3Ec__DisplayClass2_0_t3678587430018971900F898C01E0454C44B67E11  : public RuntimeObject
{
public:
	// UnityGLTF.Loader.FileLoader UnityGLTF.Loader.FileLoader_<>c__DisplayClass2_0::<>4__this
	FileLoader_t0E6039215F6C1ABA58F3C0F708E581A45BDF3BC8 * ___U3CU3E4__this_0;
	// System.String UnityGLTF.Loader.FileLoader_<>c__DisplayClass2_0::relativeFilePath
	String_t* ___relativeFilePath_1;

public:
	inline static int32_t get_offset_of_U3CU3E4__this_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass2_0_t3678587430018971900F898C01E0454C44B67E11, ___U3CU3E4__this_0)); }
	inline FileLoader_t0E6039215F6C1ABA58F3C0F708E581A45BDF3BC8 * get_U3CU3E4__this_0() const { return ___U3CU3E4__this_0; }
	inline FileLoader_t0E6039215F6C1ABA58F3C0F708E581A45BDF3BC8 ** get_address_of_U3CU3E4__this_0() { return &___U3CU3E4__this_0; }
	inline void set_U3CU3E4__this_0(FileLoader_t0E6039215F6C1ABA58F3C0F708E581A45BDF3BC8 * value)
	{
		___U3CU3E4__this_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_0), (void*)value);
	}

	inline static int32_t get_offset_of_relativeFilePath_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass2_0_t3678587430018971900F898C01E0454C44B67E11, ___relativeFilePath_1)); }
	inline String_t* get_relativeFilePath_1() const { return ___relativeFilePath_1; }
	inline String_t** get_address_of_relativeFilePath_1() { return &___relativeFilePath_1; }
	inline void set_relativeFilePath_1(String_t* value)
	{
		___relativeFilePath_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___relativeFilePath_1), (void*)value);
	}
};


// UnityGLTF.Loader.LegacyLoaderWrapper
struct  LegacyLoaderWrapper_tC07F5A4E5451C73122A1D04D9987F9FD40EFD5BD  : public RuntimeObject
{
public:

public:
};


// UnityGLTF.Loader.LegacyLoaderWrapper_LegacyLoader
struct  LegacyLoader_t5912492DEE5FE2B93A98D527C8D49A91CFDA8A22  : public RuntimeObject
{
public:
	// UnityGLTF.Loader.ILoader UnityGLTF.Loader.LegacyLoaderWrapper_LegacyLoader::_loader
	RuntimeObject* ____loader_0;

public:
	inline static int32_t get_offset_of__loader_0() { return static_cast<int32_t>(offsetof(LegacyLoader_t5912492DEE5FE2B93A98D527C8D49A91CFDA8A22, ____loader_0)); }
	inline RuntimeObject* get__loader_0() const { return ____loader_0; }
	inline RuntimeObject** get_address_of__loader_0() { return &____loader_0; }
	inline void set__loader_0(RuntimeObject* value)
	{
		____loader_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____loader_0), (void*)value);
	}
};


// UnityGLTF.Loader.WebRequestLoader
struct  WebRequestLoader_tF1F01C9F12FA444AAA9D3466649478998AECB291  : public RuntimeObject
{
public:
	// System.Net.Http.HttpClient UnityGLTF.Loader.WebRequestLoader::httpClient
	HttpClient_tC7477E4B30DD5CFE1B41DD9CD2EA1F83DB4DE9E7 * ___httpClient_0;
	// System.Uri UnityGLTF.Loader.WebRequestLoader::baseAddress
	Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E * ___baseAddress_1;

public:
	inline static int32_t get_offset_of_httpClient_0() { return static_cast<int32_t>(offsetof(WebRequestLoader_tF1F01C9F12FA444AAA9D3466649478998AECB291, ___httpClient_0)); }
	inline HttpClient_tC7477E4B30DD5CFE1B41DD9CD2EA1F83DB4DE9E7 * get_httpClient_0() const { return ___httpClient_0; }
	inline HttpClient_tC7477E4B30DD5CFE1B41DD9CD2EA1F83DB4DE9E7 ** get_address_of_httpClient_0() { return &___httpClient_0; }
	inline void set_httpClient_0(HttpClient_tC7477E4B30DD5CFE1B41DD9CD2EA1F83DB4DE9E7 * value)
	{
		___httpClient_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___httpClient_0), (void*)value);
	}

	inline static int32_t get_offset_of_baseAddress_1() { return static_cast<int32_t>(offsetof(WebRequestLoader_tF1F01C9F12FA444AAA9D3466649478998AECB291, ___baseAddress_1)); }
	inline Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E * get_baseAddress_1() const { return ___baseAddress_1; }
	inline Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E ** get_address_of_baseAddress_1() { return &___baseAddress_1; }
	inline void set_baseAddress_1(Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E * value)
	{
		___baseAddress_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___baseAddress_1), (void*)value);
	}
};


// UnityGLTF.MemoryChecker
struct  MemoryChecker_t6298B1B47ACD98ED696BC66A79E5D5217756BA6A  : public RuntimeObject
{
public:
	// System.Boolean UnityGLTF.MemoryChecker::outOfMemory
	bool ___outOfMemory_0;

public:
	inline static int32_t get_offset_of_outOfMemory_0() { return static_cast<int32_t>(offsetof(MemoryChecker_t6298B1B47ACD98ED696BC66A79E5D5217756BA6A, ___outOfMemory_0)); }
	inline bool get_outOfMemory_0() const { return ___outOfMemory_0; }
	inline bool* get_address_of_outOfMemory_0() { return &___outOfMemory_0; }
	inline void set_outOfMemory_0(bool value)
	{
		___outOfMemory_0 = value;
	}
};


// UnityGLTF.UnityMeshData
struct  UnityMeshData_t8C2ACB9741D58C870FC7A0FD26F0EDFA9E141F27  : public RuntimeObject
{
public:
	// UnityEngine.Vector3[] UnityGLTF.UnityMeshData::Vertices
	Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* ___Vertices_0;
	// UnityEngine.Vector3[] UnityGLTF.UnityMeshData::Normals
	Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* ___Normals_1;
	// UnityEngine.Vector4[] UnityGLTF.UnityMeshData::Tangents
	Vector4U5BU5D_t51402C154FFFCF7217A9BEC4B834F0B726C10F66* ___Tangents_2;
	// UnityEngine.Vector2[] UnityGLTF.UnityMeshData::Uv1
	Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6* ___Uv1_3;
	// UnityEngine.Vector2[] UnityGLTF.UnityMeshData::Uv2
	Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6* ___Uv2_4;
	// UnityEngine.Vector2[] UnityGLTF.UnityMeshData::Uv3
	Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6* ___Uv3_5;
	// UnityEngine.Vector2[] UnityGLTF.UnityMeshData::Uv4
	Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6* ___Uv4_6;
	// UnityEngine.Color[] UnityGLTF.UnityMeshData::Colors
	ColorU5BU5D_t166D390E0E6F24360F990D1F81881A72B73CA399* ___Colors_7;
	// UnityEngine.BoneWeight[] UnityGLTF.UnityMeshData::BoneWeights
	BoneWeightU5BU5D_t0CFB75EF43257A99CDCF393A069504F365A13F8D* ___BoneWeights_8;
	// UnityEngine.Vector3[][] UnityGLTF.UnityMeshData::MorphTargetVertices
	Vector3U5BU5DU5BU5D_tB83B3D7B4B4D7AD0A199DD45DF2963AB05A519AC* ___MorphTargetVertices_9;
	// UnityEngine.Vector3[][] UnityGLTF.UnityMeshData::MorphTargetNormals
	Vector3U5BU5DU5BU5D_tB83B3D7B4B4D7AD0A199DD45DF2963AB05A519AC* ___MorphTargetNormals_10;
	// UnityEngine.Vector3[][] UnityGLTF.UnityMeshData::MorphTargetTangents
	Vector3U5BU5DU5BU5D_tB83B3D7B4B4D7AD0A199DD45DF2963AB05A519AC* ___MorphTargetTangents_11;
	// UnityEngine.MeshTopology[] UnityGLTF.UnityMeshData::Topology
	MeshTopologyU5BU5D_tFB3BA87B0EA1E3A3AAEBA590B5458C0913B9DBD5* ___Topology_12;
	// System.Int32[][] UnityGLTF.UnityMeshData::Indices
	Int32U5BU5DU5BU5D_tCA34E042D233821D51B4DAFB480EE602F2DBEF43* ___Indices_13;

public:
	inline static int32_t get_offset_of_Vertices_0() { return static_cast<int32_t>(offsetof(UnityMeshData_t8C2ACB9741D58C870FC7A0FD26F0EDFA9E141F27, ___Vertices_0)); }
	inline Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* get_Vertices_0() const { return ___Vertices_0; }
	inline Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28** get_address_of_Vertices_0() { return &___Vertices_0; }
	inline void set_Vertices_0(Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* value)
	{
		___Vertices_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Vertices_0), (void*)value);
	}

	inline static int32_t get_offset_of_Normals_1() { return static_cast<int32_t>(offsetof(UnityMeshData_t8C2ACB9741D58C870FC7A0FD26F0EDFA9E141F27, ___Normals_1)); }
	inline Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* get_Normals_1() const { return ___Normals_1; }
	inline Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28** get_address_of_Normals_1() { return &___Normals_1; }
	inline void set_Normals_1(Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* value)
	{
		___Normals_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Normals_1), (void*)value);
	}

	inline static int32_t get_offset_of_Tangents_2() { return static_cast<int32_t>(offsetof(UnityMeshData_t8C2ACB9741D58C870FC7A0FD26F0EDFA9E141F27, ___Tangents_2)); }
	inline Vector4U5BU5D_t51402C154FFFCF7217A9BEC4B834F0B726C10F66* get_Tangents_2() const { return ___Tangents_2; }
	inline Vector4U5BU5D_t51402C154FFFCF7217A9BEC4B834F0B726C10F66** get_address_of_Tangents_2() { return &___Tangents_2; }
	inline void set_Tangents_2(Vector4U5BU5D_t51402C154FFFCF7217A9BEC4B834F0B726C10F66* value)
	{
		___Tangents_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Tangents_2), (void*)value);
	}

	inline static int32_t get_offset_of_Uv1_3() { return static_cast<int32_t>(offsetof(UnityMeshData_t8C2ACB9741D58C870FC7A0FD26F0EDFA9E141F27, ___Uv1_3)); }
	inline Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6* get_Uv1_3() const { return ___Uv1_3; }
	inline Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6** get_address_of_Uv1_3() { return &___Uv1_3; }
	inline void set_Uv1_3(Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6* value)
	{
		___Uv1_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Uv1_3), (void*)value);
	}

	inline static int32_t get_offset_of_Uv2_4() { return static_cast<int32_t>(offsetof(UnityMeshData_t8C2ACB9741D58C870FC7A0FD26F0EDFA9E141F27, ___Uv2_4)); }
	inline Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6* get_Uv2_4() const { return ___Uv2_4; }
	inline Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6** get_address_of_Uv2_4() { return &___Uv2_4; }
	inline void set_Uv2_4(Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6* value)
	{
		___Uv2_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Uv2_4), (void*)value);
	}

	inline static int32_t get_offset_of_Uv3_5() { return static_cast<int32_t>(offsetof(UnityMeshData_t8C2ACB9741D58C870FC7A0FD26F0EDFA9E141F27, ___Uv3_5)); }
	inline Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6* get_Uv3_5() const { return ___Uv3_5; }
	inline Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6** get_address_of_Uv3_5() { return &___Uv3_5; }
	inline void set_Uv3_5(Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6* value)
	{
		___Uv3_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Uv3_5), (void*)value);
	}

	inline static int32_t get_offset_of_Uv4_6() { return static_cast<int32_t>(offsetof(UnityMeshData_t8C2ACB9741D58C870FC7A0FD26F0EDFA9E141F27, ___Uv4_6)); }
	inline Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6* get_Uv4_6() const { return ___Uv4_6; }
	inline Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6** get_address_of_Uv4_6() { return &___Uv4_6; }
	inline void set_Uv4_6(Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6* value)
	{
		___Uv4_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Uv4_6), (void*)value);
	}

	inline static int32_t get_offset_of_Colors_7() { return static_cast<int32_t>(offsetof(UnityMeshData_t8C2ACB9741D58C870FC7A0FD26F0EDFA9E141F27, ___Colors_7)); }
	inline ColorU5BU5D_t166D390E0E6F24360F990D1F81881A72B73CA399* get_Colors_7() const { return ___Colors_7; }
	inline ColorU5BU5D_t166D390E0E6F24360F990D1F81881A72B73CA399** get_address_of_Colors_7() { return &___Colors_7; }
	inline void set_Colors_7(ColorU5BU5D_t166D390E0E6F24360F990D1F81881A72B73CA399* value)
	{
		___Colors_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Colors_7), (void*)value);
	}

	inline static int32_t get_offset_of_BoneWeights_8() { return static_cast<int32_t>(offsetof(UnityMeshData_t8C2ACB9741D58C870FC7A0FD26F0EDFA9E141F27, ___BoneWeights_8)); }
	inline BoneWeightU5BU5D_t0CFB75EF43257A99CDCF393A069504F365A13F8D* get_BoneWeights_8() const { return ___BoneWeights_8; }
	inline BoneWeightU5BU5D_t0CFB75EF43257A99CDCF393A069504F365A13F8D** get_address_of_BoneWeights_8() { return &___BoneWeights_8; }
	inline void set_BoneWeights_8(BoneWeightU5BU5D_t0CFB75EF43257A99CDCF393A069504F365A13F8D* value)
	{
		___BoneWeights_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___BoneWeights_8), (void*)value);
	}

	inline static int32_t get_offset_of_MorphTargetVertices_9() { return static_cast<int32_t>(offsetof(UnityMeshData_t8C2ACB9741D58C870FC7A0FD26F0EDFA9E141F27, ___MorphTargetVertices_9)); }
	inline Vector3U5BU5DU5BU5D_tB83B3D7B4B4D7AD0A199DD45DF2963AB05A519AC* get_MorphTargetVertices_9() const { return ___MorphTargetVertices_9; }
	inline Vector3U5BU5DU5BU5D_tB83B3D7B4B4D7AD0A199DD45DF2963AB05A519AC** get_address_of_MorphTargetVertices_9() { return &___MorphTargetVertices_9; }
	inline void set_MorphTargetVertices_9(Vector3U5BU5DU5BU5D_tB83B3D7B4B4D7AD0A199DD45DF2963AB05A519AC* value)
	{
		___MorphTargetVertices_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___MorphTargetVertices_9), (void*)value);
	}

	inline static int32_t get_offset_of_MorphTargetNormals_10() { return static_cast<int32_t>(offsetof(UnityMeshData_t8C2ACB9741D58C870FC7A0FD26F0EDFA9E141F27, ___MorphTargetNormals_10)); }
	inline Vector3U5BU5DU5BU5D_tB83B3D7B4B4D7AD0A199DD45DF2963AB05A519AC* get_MorphTargetNormals_10() const { return ___MorphTargetNormals_10; }
	inline Vector3U5BU5DU5BU5D_tB83B3D7B4B4D7AD0A199DD45DF2963AB05A519AC** get_address_of_MorphTargetNormals_10() { return &___MorphTargetNormals_10; }
	inline void set_MorphTargetNormals_10(Vector3U5BU5DU5BU5D_tB83B3D7B4B4D7AD0A199DD45DF2963AB05A519AC* value)
	{
		___MorphTargetNormals_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___MorphTargetNormals_10), (void*)value);
	}

	inline static int32_t get_offset_of_MorphTargetTangents_11() { return static_cast<int32_t>(offsetof(UnityMeshData_t8C2ACB9741D58C870FC7A0FD26F0EDFA9E141F27, ___MorphTargetTangents_11)); }
	inline Vector3U5BU5DU5BU5D_tB83B3D7B4B4D7AD0A199DD45DF2963AB05A519AC* get_MorphTargetTangents_11() const { return ___MorphTargetTangents_11; }
	inline Vector3U5BU5DU5BU5D_tB83B3D7B4B4D7AD0A199DD45DF2963AB05A519AC** get_address_of_MorphTargetTangents_11() { return &___MorphTargetTangents_11; }
	inline void set_MorphTargetTangents_11(Vector3U5BU5DU5BU5D_tB83B3D7B4B4D7AD0A199DD45DF2963AB05A519AC* value)
	{
		___MorphTargetTangents_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___MorphTargetTangents_11), (void*)value);
	}

	inline static int32_t get_offset_of_Topology_12() { return static_cast<int32_t>(offsetof(UnityMeshData_t8C2ACB9741D58C870FC7A0FD26F0EDFA9E141F27, ___Topology_12)); }
	inline MeshTopologyU5BU5D_tFB3BA87B0EA1E3A3AAEBA590B5458C0913B9DBD5* get_Topology_12() const { return ___Topology_12; }
	inline MeshTopologyU5BU5D_tFB3BA87B0EA1E3A3AAEBA590B5458C0913B9DBD5** get_address_of_Topology_12() { return &___Topology_12; }
	inline void set_Topology_12(MeshTopologyU5BU5D_tFB3BA87B0EA1E3A3AAEBA590B5458C0913B9DBD5* value)
	{
		___Topology_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Topology_12), (void*)value);
	}

	inline static int32_t get_offset_of_Indices_13() { return static_cast<int32_t>(offsetof(UnityMeshData_t8C2ACB9741D58C870FC7A0FD26F0EDFA9E141F27, ___Indices_13)); }
	inline Int32U5BU5DU5BU5D_tCA34E042D233821D51B4DAFB480EE602F2DBEF43* get_Indices_13() const { return ___Indices_13; }
	inline Int32U5BU5DU5BU5D_tCA34E042D233821D51B4DAFB480EE602F2DBEF43** get_address_of_Indices_13() { return &___Indices_13; }
	inline void set_Indices_13(Int32U5BU5DU5BU5D_tCA34E042D233821D51B4DAFB480EE602F2DBEF43* value)
	{
		___Indices_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Indices_13), (void*)value);
	}
};


// GLTF.Schema.AccessorId
struct  AccessorId_t6C51102D50B95D309D47FD946FE62ED76C16B83F  : public GLTFId_1_t03C6D4307DA5F7D32A8A310F6F43A4992728AEC7
{
public:

public:
};


// GLTF.Schema.BufferId
struct  BufferId_t1F12DE28BBFD6A5C038FA14B0BCA46D852CC00F4  : public GLTFId_1_t050A1D4340BD22B23EED14DBBBDEE97C66D39D50
{
public:

public:
};


// GLTF.Schema.BufferViewId
struct  BufferViewId_tAE1D88A5BF8DD1B736DDDF93CEA0D07FE666D871  : public GLTFId_1_t42D30DE0867573822EFF276155616B8DA56E3E8F
{
public:

public:
};


// GLTF.Schema.GLTFChildOfRootProperty
struct  GLTFChildOfRootProperty_t162116062E3D11D0057F6780F387ED5EBE6C268C  : public GLTFProperty_t40AFD52A8EF43AFD933314F5D289DD0109492979
{
public:
	// System.String GLTF.Schema.GLTFChildOfRootProperty::Name
	String_t* ___Name_4;

public:
	inline static int32_t get_offset_of_Name_4() { return static_cast<int32_t>(offsetof(GLTFChildOfRootProperty_t162116062E3D11D0057F6780F387ED5EBE6C268C, ___Name_4)); }
	inline String_t* get_Name_4() const { return ___Name_4; }
	inline String_t** get_address_of_Name_4() { return &___Name_4; }
	inline void set_Name_4(String_t* value)
	{
		___Name_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Name_4), (void*)value);
	}
};


// GLTF.Schema.GLTFRoot
struct  GLTFRoot_t3CDB3EBE42E8A0E06DD58B35BAD5D98EF44F3A6B  : public GLTFProperty_t40AFD52A8EF43AFD933314F5D289DD0109492979
{
public:
	// System.Collections.Generic.List`1<System.String> GLTF.Schema.GLTFRoot::ExtensionsUsed
	List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * ___ExtensionsUsed_4;
	// System.Collections.Generic.List`1<System.String> GLTF.Schema.GLTFRoot::ExtensionsRequired
	List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * ___ExtensionsRequired_5;
	// System.Collections.Generic.List`1<GLTF.Schema.Accessor> GLTF.Schema.GLTFRoot::Accessors
	List_1_tD6BD43F18D577F434BC95E3CF0C780791BD97313 * ___Accessors_6;
	// System.Collections.Generic.List`1<GLTF.Schema.GLTFAnimation> GLTF.Schema.GLTFRoot::Animations
	List_1_t3304AD243ED738B1AEC46C30143FBB620C43B139 * ___Animations_7;
	// GLTF.Schema.Asset GLTF.Schema.GLTFRoot::Asset
	Asset_t11E5855206F01C1EC0CBA2520D06BD265A17D72B * ___Asset_8;
	// System.Collections.Generic.List`1<GLTF.Schema.GLTFBuffer> GLTF.Schema.GLTFRoot::Buffers
	List_1_t698779CAF3B943DDE33E12735232CBF866ABE242 * ___Buffers_9;
	// System.Collections.Generic.List`1<GLTF.Schema.BufferView> GLTF.Schema.GLTFRoot::BufferViews
	List_1_t356616BC333D365D4AFA503A86F27C8F2C7DE3CE * ___BufferViews_10;
	// System.Collections.Generic.List`1<GLTF.Schema.GLTFCamera> GLTF.Schema.GLTFRoot::Cameras
	List_1_t958B443584AC2E8AF65F8F80BC610B23DB4BD020 * ___Cameras_11;
	// System.Collections.Generic.List`1<GLTF.Schema.GLTFImage> GLTF.Schema.GLTFRoot::Images
	List_1_tDB08AF9939503E35BA48B9658EE24D588324833E * ___Images_12;
	// System.Collections.Generic.List`1<GLTF.Schema.GLTFMaterial> GLTF.Schema.GLTFRoot::Materials
	List_1_tFD5B8627A061AEB46C1B0E96E24588A3757A93E5 * ___Materials_13;
	// System.Collections.Generic.List`1<GLTF.Schema.GLTFMesh> GLTF.Schema.GLTFRoot::Meshes
	List_1_t7F5CF0F89CD771A5DB0E1037DCF22E390E38084C * ___Meshes_14;
	// System.Collections.Generic.List`1<GLTF.Schema.Node> GLTF.Schema.GLTFRoot::Nodes
	List_1_tD4508DBDDE1EC3543AF37D7BD3C2AD00ECDD389F * ___Nodes_15;
	// System.Collections.Generic.List`1<GLTF.Schema.Sampler> GLTF.Schema.GLTFRoot::Samplers
	List_1_t7FF059A33841C133771B08A6612E371F8A04A7E2 * ___Samplers_16;
	// GLTF.Schema.SceneId GLTF.Schema.GLTFRoot::Scene
	SceneId_t67CF37B99AF8D98A11C03A45BDD51773EE6D605C * ___Scene_17;
	// System.Collections.Generic.List`1<GLTF.Schema.GLTFScene> GLTF.Schema.GLTFRoot::Scenes
	List_1_tAED3D6A1ED2710E0A2CB5BACC62D7D58311F4DFD * ___Scenes_18;
	// System.Collections.Generic.List`1<GLTF.Schema.Skin> GLTF.Schema.GLTFRoot::Skins
	List_1_t96FB62D69AAB44436AF25AE0968E322706DEB7A7 * ___Skins_19;
	// System.Collections.Generic.List`1<GLTF.Schema.GLTFTexture> GLTF.Schema.GLTFRoot::Textures
	List_1_tF4641F23A221781EDCA936E48FE1277514E220CF * ___Textures_20;
	// System.Boolean GLTF.Schema.GLTFRoot::IsGLB
	bool ___IsGLB_21;

public:
	inline static int32_t get_offset_of_ExtensionsUsed_4() { return static_cast<int32_t>(offsetof(GLTFRoot_t3CDB3EBE42E8A0E06DD58B35BAD5D98EF44F3A6B, ___ExtensionsUsed_4)); }
	inline List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * get_ExtensionsUsed_4() const { return ___ExtensionsUsed_4; }
	inline List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 ** get_address_of_ExtensionsUsed_4() { return &___ExtensionsUsed_4; }
	inline void set_ExtensionsUsed_4(List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * value)
	{
		___ExtensionsUsed_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ExtensionsUsed_4), (void*)value);
	}

	inline static int32_t get_offset_of_ExtensionsRequired_5() { return static_cast<int32_t>(offsetof(GLTFRoot_t3CDB3EBE42E8A0E06DD58B35BAD5D98EF44F3A6B, ___ExtensionsRequired_5)); }
	inline List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * get_ExtensionsRequired_5() const { return ___ExtensionsRequired_5; }
	inline List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 ** get_address_of_ExtensionsRequired_5() { return &___ExtensionsRequired_5; }
	inline void set_ExtensionsRequired_5(List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * value)
	{
		___ExtensionsRequired_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ExtensionsRequired_5), (void*)value);
	}

	inline static int32_t get_offset_of_Accessors_6() { return static_cast<int32_t>(offsetof(GLTFRoot_t3CDB3EBE42E8A0E06DD58B35BAD5D98EF44F3A6B, ___Accessors_6)); }
	inline List_1_tD6BD43F18D577F434BC95E3CF0C780791BD97313 * get_Accessors_6() const { return ___Accessors_6; }
	inline List_1_tD6BD43F18D577F434BC95E3CF0C780791BD97313 ** get_address_of_Accessors_6() { return &___Accessors_6; }
	inline void set_Accessors_6(List_1_tD6BD43F18D577F434BC95E3CF0C780791BD97313 * value)
	{
		___Accessors_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Accessors_6), (void*)value);
	}

	inline static int32_t get_offset_of_Animations_7() { return static_cast<int32_t>(offsetof(GLTFRoot_t3CDB3EBE42E8A0E06DD58B35BAD5D98EF44F3A6B, ___Animations_7)); }
	inline List_1_t3304AD243ED738B1AEC46C30143FBB620C43B139 * get_Animations_7() const { return ___Animations_7; }
	inline List_1_t3304AD243ED738B1AEC46C30143FBB620C43B139 ** get_address_of_Animations_7() { return &___Animations_7; }
	inline void set_Animations_7(List_1_t3304AD243ED738B1AEC46C30143FBB620C43B139 * value)
	{
		___Animations_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Animations_7), (void*)value);
	}

	inline static int32_t get_offset_of_Asset_8() { return static_cast<int32_t>(offsetof(GLTFRoot_t3CDB3EBE42E8A0E06DD58B35BAD5D98EF44F3A6B, ___Asset_8)); }
	inline Asset_t11E5855206F01C1EC0CBA2520D06BD265A17D72B * get_Asset_8() const { return ___Asset_8; }
	inline Asset_t11E5855206F01C1EC0CBA2520D06BD265A17D72B ** get_address_of_Asset_8() { return &___Asset_8; }
	inline void set_Asset_8(Asset_t11E5855206F01C1EC0CBA2520D06BD265A17D72B * value)
	{
		___Asset_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Asset_8), (void*)value);
	}

	inline static int32_t get_offset_of_Buffers_9() { return static_cast<int32_t>(offsetof(GLTFRoot_t3CDB3EBE42E8A0E06DD58B35BAD5D98EF44F3A6B, ___Buffers_9)); }
	inline List_1_t698779CAF3B943DDE33E12735232CBF866ABE242 * get_Buffers_9() const { return ___Buffers_9; }
	inline List_1_t698779CAF3B943DDE33E12735232CBF866ABE242 ** get_address_of_Buffers_9() { return &___Buffers_9; }
	inline void set_Buffers_9(List_1_t698779CAF3B943DDE33E12735232CBF866ABE242 * value)
	{
		___Buffers_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Buffers_9), (void*)value);
	}

	inline static int32_t get_offset_of_BufferViews_10() { return static_cast<int32_t>(offsetof(GLTFRoot_t3CDB3EBE42E8A0E06DD58B35BAD5D98EF44F3A6B, ___BufferViews_10)); }
	inline List_1_t356616BC333D365D4AFA503A86F27C8F2C7DE3CE * get_BufferViews_10() const { return ___BufferViews_10; }
	inline List_1_t356616BC333D365D4AFA503A86F27C8F2C7DE3CE ** get_address_of_BufferViews_10() { return &___BufferViews_10; }
	inline void set_BufferViews_10(List_1_t356616BC333D365D4AFA503A86F27C8F2C7DE3CE * value)
	{
		___BufferViews_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___BufferViews_10), (void*)value);
	}

	inline static int32_t get_offset_of_Cameras_11() { return static_cast<int32_t>(offsetof(GLTFRoot_t3CDB3EBE42E8A0E06DD58B35BAD5D98EF44F3A6B, ___Cameras_11)); }
	inline List_1_t958B443584AC2E8AF65F8F80BC610B23DB4BD020 * get_Cameras_11() const { return ___Cameras_11; }
	inline List_1_t958B443584AC2E8AF65F8F80BC610B23DB4BD020 ** get_address_of_Cameras_11() { return &___Cameras_11; }
	inline void set_Cameras_11(List_1_t958B443584AC2E8AF65F8F80BC610B23DB4BD020 * value)
	{
		___Cameras_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Cameras_11), (void*)value);
	}

	inline static int32_t get_offset_of_Images_12() { return static_cast<int32_t>(offsetof(GLTFRoot_t3CDB3EBE42E8A0E06DD58B35BAD5D98EF44F3A6B, ___Images_12)); }
	inline List_1_tDB08AF9939503E35BA48B9658EE24D588324833E * get_Images_12() const { return ___Images_12; }
	inline List_1_tDB08AF9939503E35BA48B9658EE24D588324833E ** get_address_of_Images_12() { return &___Images_12; }
	inline void set_Images_12(List_1_tDB08AF9939503E35BA48B9658EE24D588324833E * value)
	{
		___Images_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Images_12), (void*)value);
	}

	inline static int32_t get_offset_of_Materials_13() { return static_cast<int32_t>(offsetof(GLTFRoot_t3CDB3EBE42E8A0E06DD58B35BAD5D98EF44F3A6B, ___Materials_13)); }
	inline List_1_tFD5B8627A061AEB46C1B0E96E24588A3757A93E5 * get_Materials_13() const { return ___Materials_13; }
	inline List_1_tFD5B8627A061AEB46C1B0E96E24588A3757A93E5 ** get_address_of_Materials_13() { return &___Materials_13; }
	inline void set_Materials_13(List_1_tFD5B8627A061AEB46C1B0E96E24588A3757A93E5 * value)
	{
		___Materials_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Materials_13), (void*)value);
	}

	inline static int32_t get_offset_of_Meshes_14() { return static_cast<int32_t>(offsetof(GLTFRoot_t3CDB3EBE42E8A0E06DD58B35BAD5D98EF44F3A6B, ___Meshes_14)); }
	inline List_1_t7F5CF0F89CD771A5DB0E1037DCF22E390E38084C * get_Meshes_14() const { return ___Meshes_14; }
	inline List_1_t7F5CF0F89CD771A5DB0E1037DCF22E390E38084C ** get_address_of_Meshes_14() { return &___Meshes_14; }
	inline void set_Meshes_14(List_1_t7F5CF0F89CD771A5DB0E1037DCF22E390E38084C * value)
	{
		___Meshes_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Meshes_14), (void*)value);
	}

	inline static int32_t get_offset_of_Nodes_15() { return static_cast<int32_t>(offsetof(GLTFRoot_t3CDB3EBE42E8A0E06DD58B35BAD5D98EF44F3A6B, ___Nodes_15)); }
	inline List_1_tD4508DBDDE1EC3543AF37D7BD3C2AD00ECDD389F * get_Nodes_15() const { return ___Nodes_15; }
	inline List_1_tD4508DBDDE1EC3543AF37D7BD3C2AD00ECDD389F ** get_address_of_Nodes_15() { return &___Nodes_15; }
	inline void set_Nodes_15(List_1_tD4508DBDDE1EC3543AF37D7BD3C2AD00ECDD389F * value)
	{
		___Nodes_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Nodes_15), (void*)value);
	}

	inline static int32_t get_offset_of_Samplers_16() { return static_cast<int32_t>(offsetof(GLTFRoot_t3CDB3EBE42E8A0E06DD58B35BAD5D98EF44F3A6B, ___Samplers_16)); }
	inline List_1_t7FF059A33841C133771B08A6612E371F8A04A7E2 * get_Samplers_16() const { return ___Samplers_16; }
	inline List_1_t7FF059A33841C133771B08A6612E371F8A04A7E2 ** get_address_of_Samplers_16() { return &___Samplers_16; }
	inline void set_Samplers_16(List_1_t7FF059A33841C133771B08A6612E371F8A04A7E2 * value)
	{
		___Samplers_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Samplers_16), (void*)value);
	}

	inline static int32_t get_offset_of_Scene_17() { return static_cast<int32_t>(offsetof(GLTFRoot_t3CDB3EBE42E8A0E06DD58B35BAD5D98EF44F3A6B, ___Scene_17)); }
	inline SceneId_t67CF37B99AF8D98A11C03A45BDD51773EE6D605C * get_Scene_17() const { return ___Scene_17; }
	inline SceneId_t67CF37B99AF8D98A11C03A45BDD51773EE6D605C ** get_address_of_Scene_17() { return &___Scene_17; }
	inline void set_Scene_17(SceneId_t67CF37B99AF8D98A11C03A45BDD51773EE6D605C * value)
	{
		___Scene_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Scene_17), (void*)value);
	}

	inline static int32_t get_offset_of_Scenes_18() { return static_cast<int32_t>(offsetof(GLTFRoot_t3CDB3EBE42E8A0E06DD58B35BAD5D98EF44F3A6B, ___Scenes_18)); }
	inline List_1_tAED3D6A1ED2710E0A2CB5BACC62D7D58311F4DFD * get_Scenes_18() const { return ___Scenes_18; }
	inline List_1_tAED3D6A1ED2710E0A2CB5BACC62D7D58311F4DFD ** get_address_of_Scenes_18() { return &___Scenes_18; }
	inline void set_Scenes_18(List_1_tAED3D6A1ED2710E0A2CB5BACC62D7D58311F4DFD * value)
	{
		___Scenes_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Scenes_18), (void*)value);
	}

	inline static int32_t get_offset_of_Skins_19() { return static_cast<int32_t>(offsetof(GLTFRoot_t3CDB3EBE42E8A0E06DD58B35BAD5D98EF44F3A6B, ___Skins_19)); }
	inline List_1_t96FB62D69AAB44436AF25AE0968E322706DEB7A7 * get_Skins_19() const { return ___Skins_19; }
	inline List_1_t96FB62D69AAB44436AF25AE0968E322706DEB7A7 ** get_address_of_Skins_19() { return &___Skins_19; }
	inline void set_Skins_19(List_1_t96FB62D69AAB44436AF25AE0968E322706DEB7A7 * value)
	{
		___Skins_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Skins_19), (void*)value);
	}

	inline static int32_t get_offset_of_Textures_20() { return static_cast<int32_t>(offsetof(GLTFRoot_t3CDB3EBE42E8A0E06DD58B35BAD5D98EF44F3A6B, ___Textures_20)); }
	inline List_1_tF4641F23A221781EDCA936E48FE1277514E220CF * get_Textures_20() const { return ___Textures_20; }
	inline List_1_tF4641F23A221781EDCA936E48FE1277514E220CF ** get_address_of_Textures_20() { return &___Textures_20; }
	inline void set_Textures_20(List_1_tF4641F23A221781EDCA936E48FE1277514E220CF * value)
	{
		___Textures_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Textures_20), (void*)value);
	}

	inline static int32_t get_offset_of_IsGLB_21() { return static_cast<int32_t>(offsetof(GLTFRoot_t3CDB3EBE42E8A0E06DD58B35BAD5D98EF44F3A6B, ___IsGLB_21)); }
	inline bool get_IsGLB_21() const { return ___IsGLB_21; }
	inline bool* get_address_of_IsGLB_21() { return &___IsGLB_21; }
	inline void set_IsGLB_21(bool value)
	{
		___IsGLB_21 = value;
	}
};


// GLTF.Schema.NodeId
struct  NodeId_tB863E2705852710AA05166CD9250E50B3A9FB8F0  : public GLTFId_1_t03A4FA3C937E0B4939DA3B8F26A7FFF95A506783
{
public:

public:
};


// GLTF.Schema.NumericArray
struct  NumericArray_t4941F537DC57A0602218632AABDF228987E030E9 
{
public:
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			// System.UInt32[] GLTF.Schema.NumericArray::AsUInts
			UInt32U5BU5D_t9AA834AF2940E75BBF8E3F08FF0D20D266DB71CB* ___AsUInts_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			UInt32U5BU5D_t9AA834AF2940E75BBF8E3F08FF0D20D266DB71CB* ___AsUInts_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Single[] GLTF.Schema.NumericArray::AsFloats
			SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* ___AsFloats_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* ___AsFloats_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// GLTF.Math.Vector2[] GLTF.Schema.NumericArray::AsVec2s
			Vector2U5BU5D_tEA2AAE17DB7819302D8F79D98E0B685C1B0B2B35* ___AsVec2s_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			Vector2U5BU5D_tEA2AAE17DB7819302D8F79D98E0B685C1B0B2B35* ___AsVec2s_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// GLTF.Math.Vector3[] GLTF.Schema.NumericArray::AsVec3s
			Vector3U5BU5D_t2D7E64F9BE7821BFC6DB876572F2B13386DE7540* ___AsVec3s_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			Vector3U5BU5D_t2D7E64F9BE7821BFC6DB876572F2B13386DE7540* ___AsVec3s_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// GLTF.Math.Vector4[] GLTF.Schema.NumericArray::AsVec4s
			Vector4U5BU5D_tD623FACAF5A8002EF6F368F9FE7CD4CA56BA4033* ___AsVec4s_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			Vector4U5BU5D_tD623FACAF5A8002EF6F368F9FE7CD4CA56BA4033* ___AsVec4s_4_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// GLTF.Math.Matrix4x4[] GLTF.Schema.NumericArray::AsMatrix4x4s
			Matrix4x4U5BU5D_tE3A13CB78E1B2CBDCD537180E7C6D83E18B0D9F0* ___AsMatrix4x4s_5;
		};
		#pragma pack(pop, tp)
		struct
		{
			Matrix4x4U5BU5D_tE3A13CB78E1B2CBDCD537180E7C6D83E18B0D9F0* ___AsMatrix4x4s_5_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// GLTF.Math.Color[] GLTF.Schema.NumericArray::AsColors
			ColorU5BU5D_tAC03762E5A0861EA248597DDB8B645A9C927D92E* ___AsColors_6;
		};
		#pragma pack(pop, tp)
		struct
		{
			ColorU5BU5D_tAC03762E5A0861EA248597DDB8B645A9C927D92E* ___AsColors_6_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// GLTF.Math.Vector2[] GLTF.Schema.NumericArray::AsTexcoords
			Vector2U5BU5D_tEA2AAE17DB7819302D8F79D98E0B685C1B0B2B35* ___AsTexcoords_7;
		};
		#pragma pack(pop, tp)
		struct
		{
			Vector2U5BU5D_tEA2AAE17DB7819302D8F79D98E0B685C1B0B2B35* ___AsTexcoords_7_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// GLTF.Math.Vector3[] GLTF.Schema.NumericArray::AsVertices
			Vector3U5BU5D_t2D7E64F9BE7821BFC6DB876572F2B13386DE7540* ___AsVertices_8;
		};
		#pragma pack(pop, tp)
		struct
		{
			Vector3U5BU5D_t2D7E64F9BE7821BFC6DB876572F2B13386DE7540* ___AsVertices_8_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// GLTF.Math.Vector3[] GLTF.Schema.NumericArray::AsNormals
			Vector3U5BU5D_t2D7E64F9BE7821BFC6DB876572F2B13386DE7540* ___AsNormals_9;
		};
		#pragma pack(pop, tp)
		struct
		{
			Vector3U5BU5D_t2D7E64F9BE7821BFC6DB876572F2B13386DE7540* ___AsNormals_9_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// GLTF.Math.Vector4[] GLTF.Schema.NumericArray::AsTangents
			Vector4U5BU5D_tD623FACAF5A8002EF6F368F9FE7CD4CA56BA4033* ___AsTangents_10;
		};
		#pragma pack(pop, tp)
		struct
		{
			Vector4U5BU5D_tD623FACAF5A8002EF6F368F9FE7CD4CA56BA4033* ___AsTangents_10_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.UInt32[] GLTF.Schema.NumericArray::AsTriangles
			UInt32U5BU5D_t9AA834AF2940E75BBF8E3F08FF0D20D266DB71CB* ___AsTriangles_11;
		};
		#pragma pack(pop, tp)
		struct
		{
			UInt32U5BU5D_t9AA834AF2940E75BBF8E3F08FF0D20D266DB71CB* ___AsTriangles_11_forAlignmentOnly;
		};
	};

public:
	inline static int32_t get_offset_of_AsUInts_0() { return static_cast<int32_t>(offsetof(NumericArray_t4941F537DC57A0602218632AABDF228987E030E9, ___AsUInts_0)); }
	inline UInt32U5BU5D_t9AA834AF2940E75BBF8E3F08FF0D20D266DB71CB* get_AsUInts_0() const { return ___AsUInts_0; }
	inline UInt32U5BU5D_t9AA834AF2940E75BBF8E3F08FF0D20D266DB71CB** get_address_of_AsUInts_0() { return &___AsUInts_0; }
	inline void set_AsUInts_0(UInt32U5BU5D_t9AA834AF2940E75BBF8E3F08FF0D20D266DB71CB* value)
	{
		___AsUInts_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___AsUInts_0), (void*)value);
	}

	inline static int32_t get_offset_of_AsFloats_1() { return static_cast<int32_t>(offsetof(NumericArray_t4941F537DC57A0602218632AABDF228987E030E9, ___AsFloats_1)); }
	inline SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* get_AsFloats_1() const { return ___AsFloats_1; }
	inline SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5** get_address_of_AsFloats_1() { return &___AsFloats_1; }
	inline void set_AsFloats_1(SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* value)
	{
		___AsFloats_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___AsFloats_1), (void*)value);
	}

	inline static int32_t get_offset_of_AsVec2s_2() { return static_cast<int32_t>(offsetof(NumericArray_t4941F537DC57A0602218632AABDF228987E030E9, ___AsVec2s_2)); }
	inline Vector2U5BU5D_tEA2AAE17DB7819302D8F79D98E0B685C1B0B2B35* get_AsVec2s_2() const { return ___AsVec2s_2; }
	inline Vector2U5BU5D_tEA2AAE17DB7819302D8F79D98E0B685C1B0B2B35** get_address_of_AsVec2s_2() { return &___AsVec2s_2; }
	inline void set_AsVec2s_2(Vector2U5BU5D_tEA2AAE17DB7819302D8F79D98E0B685C1B0B2B35* value)
	{
		___AsVec2s_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___AsVec2s_2), (void*)value);
	}

	inline static int32_t get_offset_of_AsVec3s_3() { return static_cast<int32_t>(offsetof(NumericArray_t4941F537DC57A0602218632AABDF228987E030E9, ___AsVec3s_3)); }
	inline Vector3U5BU5D_t2D7E64F9BE7821BFC6DB876572F2B13386DE7540* get_AsVec3s_3() const { return ___AsVec3s_3; }
	inline Vector3U5BU5D_t2D7E64F9BE7821BFC6DB876572F2B13386DE7540** get_address_of_AsVec3s_3() { return &___AsVec3s_3; }
	inline void set_AsVec3s_3(Vector3U5BU5D_t2D7E64F9BE7821BFC6DB876572F2B13386DE7540* value)
	{
		___AsVec3s_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___AsVec3s_3), (void*)value);
	}

	inline static int32_t get_offset_of_AsVec4s_4() { return static_cast<int32_t>(offsetof(NumericArray_t4941F537DC57A0602218632AABDF228987E030E9, ___AsVec4s_4)); }
	inline Vector4U5BU5D_tD623FACAF5A8002EF6F368F9FE7CD4CA56BA4033* get_AsVec4s_4() const { return ___AsVec4s_4; }
	inline Vector4U5BU5D_tD623FACAF5A8002EF6F368F9FE7CD4CA56BA4033** get_address_of_AsVec4s_4() { return &___AsVec4s_4; }
	inline void set_AsVec4s_4(Vector4U5BU5D_tD623FACAF5A8002EF6F368F9FE7CD4CA56BA4033* value)
	{
		___AsVec4s_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___AsVec4s_4), (void*)value);
	}

	inline static int32_t get_offset_of_AsMatrix4x4s_5() { return static_cast<int32_t>(offsetof(NumericArray_t4941F537DC57A0602218632AABDF228987E030E9, ___AsMatrix4x4s_5)); }
	inline Matrix4x4U5BU5D_tE3A13CB78E1B2CBDCD537180E7C6D83E18B0D9F0* get_AsMatrix4x4s_5() const { return ___AsMatrix4x4s_5; }
	inline Matrix4x4U5BU5D_tE3A13CB78E1B2CBDCD537180E7C6D83E18B0D9F0** get_address_of_AsMatrix4x4s_5() { return &___AsMatrix4x4s_5; }
	inline void set_AsMatrix4x4s_5(Matrix4x4U5BU5D_tE3A13CB78E1B2CBDCD537180E7C6D83E18B0D9F0* value)
	{
		___AsMatrix4x4s_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___AsMatrix4x4s_5), (void*)value);
	}

	inline static int32_t get_offset_of_AsColors_6() { return static_cast<int32_t>(offsetof(NumericArray_t4941F537DC57A0602218632AABDF228987E030E9, ___AsColors_6)); }
	inline ColorU5BU5D_tAC03762E5A0861EA248597DDB8B645A9C927D92E* get_AsColors_6() const { return ___AsColors_6; }
	inline ColorU5BU5D_tAC03762E5A0861EA248597DDB8B645A9C927D92E** get_address_of_AsColors_6() { return &___AsColors_6; }
	inline void set_AsColors_6(ColorU5BU5D_tAC03762E5A0861EA248597DDB8B645A9C927D92E* value)
	{
		___AsColors_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___AsColors_6), (void*)value);
	}

	inline static int32_t get_offset_of_AsTexcoords_7() { return static_cast<int32_t>(offsetof(NumericArray_t4941F537DC57A0602218632AABDF228987E030E9, ___AsTexcoords_7)); }
	inline Vector2U5BU5D_tEA2AAE17DB7819302D8F79D98E0B685C1B0B2B35* get_AsTexcoords_7() const { return ___AsTexcoords_7; }
	inline Vector2U5BU5D_tEA2AAE17DB7819302D8F79D98E0B685C1B0B2B35** get_address_of_AsTexcoords_7() { return &___AsTexcoords_7; }
	inline void set_AsTexcoords_7(Vector2U5BU5D_tEA2AAE17DB7819302D8F79D98E0B685C1B0B2B35* value)
	{
		___AsTexcoords_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___AsTexcoords_7), (void*)value);
	}

	inline static int32_t get_offset_of_AsVertices_8() { return static_cast<int32_t>(offsetof(NumericArray_t4941F537DC57A0602218632AABDF228987E030E9, ___AsVertices_8)); }
	inline Vector3U5BU5D_t2D7E64F9BE7821BFC6DB876572F2B13386DE7540* get_AsVertices_8() const { return ___AsVertices_8; }
	inline Vector3U5BU5D_t2D7E64F9BE7821BFC6DB876572F2B13386DE7540** get_address_of_AsVertices_8() { return &___AsVertices_8; }
	inline void set_AsVertices_8(Vector3U5BU5D_t2D7E64F9BE7821BFC6DB876572F2B13386DE7540* value)
	{
		___AsVertices_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___AsVertices_8), (void*)value);
	}

	inline static int32_t get_offset_of_AsNormals_9() { return static_cast<int32_t>(offsetof(NumericArray_t4941F537DC57A0602218632AABDF228987E030E9, ___AsNormals_9)); }
	inline Vector3U5BU5D_t2D7E64F9BE7821BFC6DB876572F2B13386DE7540* get_AsNormals_9() const { return ___AsNormals_9; }
	inline Vector3U5BU5D_t2D7E64F9BE7821BFC6DB876572F2B13386DE7540** get_address_of_AsNormals_9() { return &___AsNormals_9; }
	inline void set_AsNormals_9(Vector3U5BU5D_t2D7E64F9BE7821BFC6DB876572F2B13386DE7540* value)
	{
		___AsNormals_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___AsNormals_9), (void*)value);
	}

	inline static int32_t get_offset_of_AsTangents_10() { return static_cast<int32_t>(offsetof(NumericArray_t4941F537DC57A0602218632AABDF228987E030E9, ___AsTangents_10)); }
	inline Vector4U5BU5D_tD623FACAF5A8002EF6F368F9FE7CD4CA56BA4033* get_AsTangents_10() const { return ___AsTangents_10; }
	inline Vector4U5BU5D_tD623FACAF5A8002EF6F368F9FE7CD4CA56BA4033** get_address_of_AsTangents_10() { return &___AsTangents_10; }
	inline void set_AsTangents_10(Vector4U5BU5D_tD623FACAF5A8002EF6F368F9FE7CD4CA56BA4033* value)
	{
		___AsTangents_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___AsTangents_10), (void*)value);
	}

	inline static int32_t get_offset_of_AsTriangles_11() { return static_cast<int32_t>(offsetof(NumericArray_t4941F537DC57A0602218632AABDF228987E030E9, ___AsTriangles_11)); }
	inline UInt32U5BU5D_t9AA834AF2940E75BBF8E3F08FF0D20D266DB71CB* get_AsTriangles_11() const { return ___AsTriangles_11; }
	inline UInt32U5BU5D_t9AA834AF2940E75BBF8E3F08FF0D20D266DB71CB** get_address_of_AsTriangles_11() { return &___AsTriangles_11; }
	inline void set_AsTriangles_11(UInt32U5BU5D_t9AA834AF2940E75BBF8E3F08FF0D20D266DB71CB* value)
	{
		___AsTriangles_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___AsTriangles_11), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of GLTF.Schema.NumericArray
struct NumericArray_t4941F537DC57A0602218632AABDF228987E030E9_marshaled_pinvoke
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			Il2CppSafeArray/*NONE*/* ___AsUInts_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			Il2CppSafeArray/*NONE*/* ___AsUInts_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			Il2CppSafeArray/*NONE*/* ___AsFloats_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			Il2CppSafeArray/*NONE*/* ___AsFloats_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			Vector2_t028E0345D0C6663583B8C0740F927272E6FDCCE8 * ___AsVec2s_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			Vector2_t028E0345D0C6663583B8C0740F927272E6FDCCE8 * ___AsVec2s_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			Vector3_t23F8955612D53E66C78FE37F87B1C09E9D78B28C * ___AsVec3s_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			Vector3_t23F8955612D53E66C78FE37F87B1C09E9D78B28C * ___AsVec3s_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			Vector4_t239657374664B132BBB44122F237F461D91809ED * ___AsVec4s_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			Vector4_t239657374664B132BBB44122F237F461D91809ED * ___AsVec4s_4_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			Matrix4x4U5BU5D_tE3A13CB78E1B2CBDCD537180E7C6D83E18B0D9F0* ___AsMatrix4x4s_5;
		};
		#pragma pack(pop, tp)
		struct
		{
			Matrix4x4U5BU5D_tE3A13CB78E1B2CBDCD537180E7C6D83E18B0D9F0* ___AsMatrix4x4s_5_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			Color_t70494B978F490884EFB36116AD8C25F5E943C3E0 * ___AsColors_6;
		};
		#pragma pack(pop, tp)
		struct
		{
			Color_t70494B978F490884EFB36116AD8C25F5E943C3E0 * ___AsColors_6_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			Vector2_t028E0345D0C6663583B8C0740F927272E6FDCCE8 * ___AsTexcoords_7;
		};
		#pragma pack(pop, tp)
		struct
		{
			Vector2_t028E0345D0C6663583B8C0740F927272E6FDCCE8 * ___AsTexcoords_7_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			Vector3_t23F8955612D53E66C78FE37F87B1C09E9D78B28C * ___AsVertices_8;
		};
		#pragma pack(pop, tp)
		struct
		{
			Vector3_t23F8955612D53E66C78FE37F87B1C09E9D78B28C * ___AsVertices_8_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			Vector3_t23F8955612D53E66C78FE37F87B1C09E9D78B28C * ___AsNormals_9;
		};
		#pragma pack(pop, tp)
		struct
		{
			Vector3_t23F8955612D53E66C78FE37F87B1C09E9D78B28C * ___AsNormals_9_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			Vector4_t239657374664B132BBB44122F237F461D91809ED * ___AsTangents_10;
		};
		#pragma pack(pop, tp)
		struct
		{
			Vector4_t239657374664B132BBB44122F237F461D91809ED * ___AsTangents_10_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			Il2CppSafeArray/*NONE*/* ___AsTriangles_11;
		};
		#pragma pack(pop, tp)
		struct
		{
			Il2CppSafeArray/*NONE*/* ___AsTriangles_11_forAlignmentOnly;
		};
	};
};
// Native definition for COM marshalling of GLTF.Schema.NumericArray
struct NumericArray_t4941F537DC57A0602218632AABDF228987E030E9_marshaled_com
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			Il2CppSafeArray/*NONE*/* ___AsUInts_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			Il2CppSafeArray/*NONE*/* ___AsUInts_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			Il2CppSafeArray/*NONE*/* ___AsFloats_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			Il2CppSafeArray/*NONE*/* ___AsFloats_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			Vector2_t028E0345D0C6663583B8C0740F927272E6FDCCE8 * ___AsVec2s_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			Vector2_t028E0345D0C6663583B8C0740F927272E6FDCCE8 * ___AsVec2s_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			Vector3_t23F8955612D53E66C78FE37F87B1C09E9D78B28C * ___AsVec3s_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			Vector3_t23F8955612D53E66C78FE37F87B1C09E9D78B28C * ___AsVec3s_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			Vector4_t239657374664B132BBB44122F237F461D91809ED * ___AsVec4s_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			Vector4_t239657374664B132BBB44122F237F461D91809ED * ___AsVec4s_4_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			Matrix4x4U5BU5D_tE3A13CB78E1B2CBDCD537180E7C6D83E18B0D9F0* ___AsMatrix4x4s_5;
		};
		#pragma pack(pop, tp)
		struct
		{
			Matrix4x4U5BU5D_tE3A13CB78E1B2CBDCD537180E7C6D83E18B0D9F0* ___AsMatrix4x4s_5_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			Color_t70494B978F490884EFB36116AD8C25F5E943C3E0 * ___AsColors_6;
		};
		#pragma pack(pop, tp)
		struct
		{
			Color_t70494B978F490884EFB36116AD8C25F5E943C3E0 * ___AsColors_6_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			Vector2_t028E0345D0C6663583B8C0740F927272E6FDCCE8 * ___AsTexcoords_7;
		};
		#pragma pack(pop, tp)
		struct
		{
			Vector2_t028E0345D0C6663583B8C0740F927272E6FDCCE8 * ___AsTexcoords_7_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			Vector3_t23F8955612D53E66C78FE37F87B1C09E9D78B28C * ___AsVertices_8;
		};
		#pragma pack(pop, tp)
		struct
		{
			Vector3_t23F8955612D53E66C78FE37F87B1C09E9D78B28C * ___AsVertices_8_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			Vector3_t23F8955612D53E66C78FE37F87B1C09E9D78B28C * ___AsNormals_9;
		};
		#pragma pack(pop, tp)
		struct
		{
			Vector3_t23F8955612D53E66C78FE37F87B1C09E9D78B28C * ___AsNormals_9_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			Vector4_t239657374664B132BBB44122F237F461D91809ED * ___AsTangents_10;
		};
		#pragma pack(pop, tp)
		struct
		{
			Vector4_t239657374664B132BBB44122F237F461D91809ED * ___AsTangents_10_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			Il2CppSafeArray/*NONE*/* ___AsTriangles_11;
		};
		#pragma pack(pop, tp)
		struct
		{
			Il2CppSafeArray/*NONE*/* ___AsTriangles_11_forAlignmentOnly;
		};
	};
};

// System.Boolean
struct  Boolean_tB53F6830F670160873277339AA58F15CAED4399C 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C, ___m_value_0)); }
	inline bool get_m_value_0() const { return ___m_value_0; }
	inline bool* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(bool value)
	{
		___m_value_0 = value;
	}
};

struct Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields
{
public:
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;

public:
	inline static int32_t get_offset_of_TrueString_5() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields, ___TrueString_5)); }
	inline String_t* get_TrueString_5() const { return ___TrueString_5; }
	inline String_t** get_address_of_TrueString_5() { return &___TrueString_5; }
	inline void set_TrueString_5(String_t* value)
	{
		___TrueString_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TrueString_5), (void*)value);
	}

	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields, ___FalseString_6)); }
	inline String_t* get_FalseString_6() const { return ___FalseString_6; }
	inline String_t** get_address_of_FalseString_6() { return &___FalseString_6; }
	inline void set_FalseString_6(String_t* value)
	{
		___FalseString_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FalseString_6), (void*)value);
	}
};


// System.DateTime
struct  DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132 
{
public:
	// System.UInt64 System.DateTime::dateData
	uint64_t ___dateData_44;

public:
	inline static int32_t get_offset_of_dateData_44() { return static_cast<int32_t>(offsetof(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132, ___dateData_44)); }
	inline uint64_t get_dateData_44() const { return ___dateData_44; }
	inline uint64_t* get_address_of_dateData_44() { return &___dateData_44; }
	inline void set_dateData_44(uint64_t value)
	{
		___dateData_44 = value;
	}
};

struct DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132_StaticFields
{
public:
	// System.Int32[] System.DateTime::DaysToMonth365
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___DaysToMonth365_29;
	// System.Int32[] System.DateTime::DaysToMonth366
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___DaysToMonth366_30;
	// System.DateTime System.DateTime::MinValue
	DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  ___MinValue_31;
	// System.DateTime System.DateTime::MaxValue
	DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  ___MaxValue_32;

public:
	inline static int32_t get_offset_of_DaysToMonth365_29() { return static_cast<int32_t>(offsetof(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132_StaticFields, ___DaysToMonth365_29)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get_DaysToMonth365_29() const { return ___DaysToMonth365_29; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of_DaysToMonth365_29() { return &___DaysToMonth365_29; }
	inline void set_DaysToMonth365_29(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		___DaysToMonth365_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DaysToMonth365_29), (void*)value);
	}

	inline static int32_t get_offset_of_DaysToMonth366_30() { return static_cast<int32_t>(offsetof(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132_StaticFields, ___DaysToMonth366_30)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get_DaysToMonth366_30() const { return ___DaysToMonth366_30; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of_DaysToMonth366_30() { return &___DaysToMonth366_30; }
	inline void set_DaysToMonth366_30(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		___DaysToMonth366_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DaysToMonth366_30), (void*)value);
	}

	inline static int32_t get_offset_of_MinValue_31() { return static_cast<int32_t>(offsetof(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132_StaticFields, ___MinValue_31)); }
	inline DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  get_MinValue_31() const { return ___MinValue_31; }
	inline DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132 * get_address_of_MinValue_31() { return &___MinValue_31; }
	inline void set_MinValue_31(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  value)
	{
		___MinValue_31 = value;
	}

	inline static int32_t get_offset_of_MaxValue_32() { return static_cast<int32_t>(offsetof(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132_StaticFields, ___MaxValue_32)); }
	inline DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  get_MaxValue_32() const { return ___MaxValue_32; }
	inline DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132 * get_address_of_MaxValue_32() { return &___MaxValue_32; }
	inline void set_MaxValue_32(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  value)
	{
		___MaxValue_32 = value;
	}
};


// System.Double
struct  Double_t358B8F23BDC52A5DD700E727E204F9F7CDE12409 
{
public:
	// System.Double System.Double::m_value
	double ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Double_t358B8F23BDC52A5DD700E727E204F9F7CDE12409, ___m_value_0)); }
	inline double get_m_value_0() const { return ___m_value_0; }
	inline double* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(double value)
	{
		___m_value_0 = value;
	}
};

struct Double_t358B8F23BDC52A5DD700E727E204F9F7CDE12409_StaticFields
{
public:
	// System.Double System.Double::NegativeZero
	double ___NegativeZero_7;

public:
	inline static int32_t get_offset_of_NegativeZero_7() { return static_cast<int32_t>(offsetof(Double_t358B8F23BDC52A5DD700E727E204F9F7CDE12409_StaticFields, ___NegativeZero_7)); }
	inline double get_NegativeZero_7() const { return ___NegativeZero_7; }
	inline double* get_address_of_NegativeZero_7() { return &___NegativeZero_7; }
	inline void set_NegativeZero_7(double value)
	{
		___NegativeZero_7 = value;
	}
};


// System.Enum
struct  Enum_t2AF27C02B8653AE29442467390005ABC74D8F521  : public ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF
{
public:

public:
};

struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_StaticFields
{
public:
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* ___enumSeperatorCharArray_0;

public:
	inline static int32_t get_offset_of_enumSeperatorCharArray_0() { return static_cast<int32_t>(offsetof(Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_StaticFields, ___enumSeperatorCharArray_0)); }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* get_enumSeperatorCharArray_0() const { return ___enumSeperatorCharArray_0; }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2** get_address_of_enumSeperatorCharArray_0() { return &___enumSeperatorCharArray_0; }
	inline void set_enumSeperatorCharArray_0(CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* value)
	{
		___enumSeperatorCharArray_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumSeperatorCharArray_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_marshaled_com
{
};

// System.IO.Stream
struct  Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7  : public MarshalByRefObject_tC4577953D0A44D0AB8597CFA868E01C858B1C9AF
{
public:
	// System.IO.Stream_ReadWriteTask System.IO.Stream::_activeReadWriteTask
	ReadWriteTask_tFA17EEE8BC5C4C83EAEFCC3662A30DE351ABAA80 * ____activeReadWriteTask_3;
	// System.Threading.SemaphoreSlim System.IO.Stream::_asyncActiveSemaphore
	SemaphoreSlim_t2E2888D1C0C8FAB80823C76F1602E4434B8FA048 * ____asyncActiveSemaphore_4;

public:
	inline static int32_t get_offset_of__activeReadWriteTask_3() { return static_cast<int32_t>(offsetof(Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7, ____activeReadWriteTask_3)); }
	inline ReadWriteTask_tFA17EEE8BC5C4C83EAEFCC3662A30DE351ABAA80 * get__activeReadWriteTask_3() const { return ____activeReadWriteTask_3; }
	inline ReadWriteTask_tFA17EEE8BC5C4C83EAEFCC3662A30DE351ABAA80 ** get_address_of__activeReadWriteTask_3() { return &____activeReadWriteTask_3; }
	inline void set__activeReadWriteTask_3(ReadWriteTask_tFA17EEE8BC5C4C83EAEFCC3662A30DE351ABAA80 * value)
	{
		____activeReadWriteTask_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____activeReadWriteTask_3), (void*)value);
	}

	inline static int32_t get_offset_of__asyncActiveSemaphore_4() { return static_cast<int32_t>(offsetof(Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7, ____asyncActiveSemaphore_4)); }
	inline SemaphoreSlim_t2E2888D1C0C8FAB80823C76F1602E4434B8FA048 * get__asyncActiveSemaphore_4() const { return ____asyncActiveSemaphore_4; }
	inline SemaphoreSlim_t2E2888D1C0C8FAB80823C76F1602E4434B8FA048 ** get_address_of__asyncActiveSemaphore_4() { return &____asyncActiveSemaphore_4; }
	inline void set__asyncActiveSemaphore_4(SemaphoreSlim_t2E2888D1C0C8FAB80823C76F1602E4434B8FA048 * value)
	{
		____asyncActiveSemaphore_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____asyncActiveSemaphore_4), (void*)value);
	}
};

struct Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7_StaticFields
{
public:
	// System.IO.Stream System.IO.Stream::Null
	Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * ___Null_1;

public:
	inline static int32_t get_offset_of_Null_1() { return static_cast<int32_t>(offsetof(Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7_StaticFields, ___Null_1)); }
	inline Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * get_Null_1() const { return ___Null_1; }
	inline Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 ** get_address_of_Null_1() { return &___Null_1; }
	inline void set_Null_1(Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * value)
	{
		___Null_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Null_1), (void*)value);
	}
};


// System.Int32
struct  Int32_t585191389E07734F19F3156FF88FB3EF4800D102 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int32_t585191389E07734F19F3156FF88FB3EF4800D102, ___m_value_0)); }
	inline int32_t get_m_value_0() const { return ___m_value_0; }
	inline int32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int32_t value)
	{
		___m_value_0 = value;
	}
};


// System.Int64
struct  Int64_t7A386C2FF7B0280A0F516992401DDFCF0FF7B436 
{
public:
	// System.Int64 System.Int64::m_value
	int64_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int64_t7A386C2FF7B0280A0F516992401DDFCF0FF7B436, ___m_value_0)); }
	inline int64_t get_m_value_0() const { return ___m_value_0; }
	inline int64_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int64_t value)
	{
		___m_value_0 = value;
	}
};


// System.IntPtr
struct  IntPtr_t 
{
public:
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(IntPtr_t, ___m_value_0)); }
	inline void* get_m_value_0() const { return ___m_value_0; }
	inline void** get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(void* value)
	{
		___m_value_0 = value;
	}
};

struct IntPtr_t_StaticFields
{
public:
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;

public:
	inline static int32_t get_offset_of_Zero_1() { return static_cast<int32_t>(offsetof(IntPtr_t_StaticFields, ___Zero_1)); }
	inline intptr_t get_Zero_1() const { return ___Zero_1; }
	inline intptr_t* get_address_of_Zero_1() { return &___Zero_1; }
	inline void set_Zero_1(intptr_t value)
	{
		___Zero_1 = value;
	}
};


// System.Nullable`1<System.Boolean>
struct  Nullable_1_t9E6A67BECE376F0623B5C857F5674A0311C41793 
{
public:
	// T System.Nullable`1::value
	bool ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t9E6A67BECE376F0623B5C857F5674A0311C41793, ___value_0)); }
	inline bool get_value_0() const { return ___value_0; }
	inline bool* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(bool value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t9E6A67BECE376F0623B5C857F5674A0311C41793, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};


// System.Nullable`1<System.Int32>
struct  Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB 
{
public:
	// T System.Nullable`1::value
	int32_t ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB, ___value_0)); }
	inline int32_t get_value_0() const { return ___value_0; }
	inline int32_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(int32_t value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};


// System.Nullable`1<System.Int64>
struct  Nullable_1_t802480A692F4F0D29F2185320296572054FB8C0B 
{
public:
	// T System.Nullable`1::value
	int64_t ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t802480A692F4F0D29F2185320296572054FB8C0B, ___value_0)); }
	inline int64_t get_value_0() const { return ___value_0; }
	inline int64_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(int64_t value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t802480A692F4F0D29F2185320296572054FB8C0B, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};


// System.Runtime.CompilerServices.AsyncMethodBuilderCore
struct  AsyncMethodBuilderCore_t4CE6C1E4B0621A6EC45CF6E0E8F1F633FFF9FF01 
{
public:
	// System.Runtime.CompilerServices.IAsyncStateMachine System.Runtime.CompilerServices.AsyncMethodBuilderCore::m_stateMachine
	RuntimeObject* ___m_stateMachine_0;
	// System.Action System.Runtime.CompilerServices.AsyncMethodBuilderCore::m_defaultContextAction
	Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * ___m_defaultContextAction_1;

public:
	inline static int32_t get_offset_of_m_stateMachine_0() { return static_cast<int32_t>(offsetof(AsyncMethodBuilderCore_t4CE6C1E4B0621A6EC45CF6E0E8F1F633FFF9FF01, ___m_stateMachine_0)); }
	inline RuntimeObject* get_m_stateMachine_0() const { return ___m_stateMachine_0; }
	inline RuntimeObject** get_address_of_m_stateMachine_0() { return &___m_stateMachine_0; }
	inline void set_m_stateMachine_0(RuntimeObject* value)
	{
		___m_stateMachine_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_stateMachine_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_defaultContextAction_1() { return static_cast<int32_t>(offsetof(AsyncMethodBuilderCore_t4CE6C1E4B0621A6EC45CF6E0E8F1F633FFF9FF01, ___m_defaultContextAction_1)); }
	inline Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * get_m_defaultContextAction_1() const { return ___m_defaultContextAction_1; }
	inline Action_t591D2A86165F896B4B800BB5C25CE18672A55579 ** get_address_of_m_defaultContextAction_1() { return &___m_defaultContextAction_1; }
	inline void set_m_defaultContextAction_1(Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * value)
	{
		___m_defaultContextAction_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_defaultContextAction_1), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Runtime.CompilerServices.AsyncMethodBuilderCore
struct AsyncMethodBuilderCore_t4CE6C1E4B0621A6EC45CF6E0E8F1F633FFF9FF01_marshaled_pinvoke
{
	RuntimeObject* ___m_stateMachine_0;
	Il2CppMethodPointer ___m_defaultContextAction_1;
};
// Native definition for COM marshalling of System.Runtime.CompilerServices.AsyncMethodBuilderCore
struct AsyncMethodBuilderCore_t4CE6C1E4B0621A6EC45CF6E0E8F1F633FFF9FF01_marshaled_com
{
	RuntimeObject* ___m_stateMachine_0;
	Il2CppMethodPointer ___m_defaultContextAction_1;
};

// System.Runtime.CompilerServices.TaskAwaiter
struct  TaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F 
{
public:
	// System.Threading.Tasks.Task System.Runtime.CompilerServices.TaskAwaiter::m_task
	Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * ___m_task_0;

public:
	inline static int32_t get_offset_of_m_task_0() { return static_cast<int32_t>(offsetof(TaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F, ___m_task_0)); }
	inline Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * get_m_task_0() const { return ___m_task_0; }
	inline Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 ** get_address_of_m_task_0() { return &___m_task_0; }
	inline void set_m_task_0(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * value)
	{
		___m_task_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_task_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Runtime.CompilerServices.TaskAwaiter
struct TaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F_marshaled_pinvoke
{
	Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * ___m_task_0;
};
// Native definition for COM marshalling of System.Runtime.CompilerServices.TaskAwaiter
struct TaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F_marshaled_com
{
	Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * ___m_task_0;
};

// System.Runtime.CompilerServices.TaskAwaiter`1<System.IO.Stream>
struct  TaskAwaiter_1_tE58F4C544BB434328CC2FB19E47D3E1A9599942C 
{
public:
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.TaskAwaiter`1::m_task
	Task_1_tAA7557E5A6A8B2C89E44907CB5B0502A618E9D01 * ___m_task_0;

public:
	inline static int32_t get_offset_of_m_task_0() { return static_cast<int32_t>(offsetof(TaskAwaiter_1_tE58F4C544BB434328CC2FB19E47D3E1A9599942C, ___m_task_0)); }
	inline Task_1_tAA7557E5A6A8B2C89E44907CB5B0502A618E9D01 * get_m_task_0() const { return ___m_task_0; }
	inline Task_1_tAA7557E5A6A8B2C89E44907CB5B0502A618E9D01 ** get_address_of_m_task_0() { return &___m_task_0; }
	inline void set_m_task_0(Task_1_tAA7557E5A6A8B2C89E44907CB5B0502A618E9D01 * value)
	{
		___m_task_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_task_0), (void*)value);
	}
};


// System.Runtime.CompilerServices.TaskAwaiter`1<System.Net.Http.HttpResponseMessage>
struct  TaskAwaiter_1_t0CD71BC02837B0D53252196D19DABDA73A615B86 
{
public:
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.TaskAwaiter`1::m_task
	Task_1_t519CB3A303B53176BD616AC273201D66B84FF270 * ___m_task_0;

public:
	inline static int32_t get_offset_of_m_task_0() { return static_cast<int32_t>(offsetof(TaskAwaiter_1_t0CD71BC02837B0D53252196D19DABDA73A615B86, ___m_task_0)); }
	inline Task_1_t519CB3A303B53176BD616AC273201D66B84FF270 * get_m_task_0() const { return ___m_task_0; }
	inline Task_1_t519CB3A303B53176BD616AC273201D66B84FF270 ** get_address_of_m_task_0() { return &___m_task_0; }
	inline void set_m_task_0(Task_1_t519CB3A303B53176BD616AC273201D66B84FF270 * value)
	{
		___m_task_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_task_0), (void*)value);
	}
};


// System.Runtime.CompilerServices.TaskAwaiter`1<System.Object>
struct  TaskAwaiter_1_t8CDB78D2A4D48E80C35A8FF6FC04A82B9FC35977 
{
public:
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.TaskAwaiter`1::m_task
	Task_1_tA56001ED5270173CA1432EDFCD84EABB1024BC09 * ___m_task_0;

public:
	inline static int32_t get_offset_of_m_task_0() { return static_cast<int32_t>(offsetof(TaskAwaiter_1_t8CDB78D2A4D48E80C35A8FF6FC04A82B9FC35977, ___m_task_0)); }
	inline Task_1_tA56001ED5270173CA1432EDFCD84EABB1024BC09 * get_m_task_0() const { return ___m_task_0; }
	inline Task_1_tA56001ED5270173CA1432EDFCD84EABB1024BC09 ** get_address_of_m_task_0() { return &___m_task_0; }
	inline void set_m_task_0(Task_1_tA56001ED5270173CA1432EDFCD84EABB1024BC09 * value)
	{
		___m_task_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_task_0), (void*)value);
	}
};


// System.Runtime.CompilerServices.TaskAwaiter`1<UnityEngine.GameObject>
struct  TaskAwaiter_1_tAE6B8B90DDB2F4605D3C8F53F1F449F35790A468 
{
public:
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.TaskAwaiter`1::m_task
	Task_1_t5029FFD61E4B10A1E614C1D97F1F0FA5B04557EC * ___m_task_0;

public:
	inline static int32_t get_offset_of_m_task_0() { return static_cast<int32_t>(offsetof(TaskAwaiter_1_tAE6B8B90DDB2F4605D3C8F53F1F449F35790A468, ___m_task_0)); }
	inline Task_1_t5029FFD61E4B10A1E614C1D97F1F0FA5B04557EC * get_m_task_0() const { return ___m_task_0; }
	inline Task_1_t5029FFD61E4B10A1E614C1D97F1F0FA5B04557EC ** get_address_of_m_task_0() { return &___m_task_0; }
	inline void set_m_task_0(Task_1_t5029FFD61E4B10A1E614C1D97F1F0FA5B04557EC * value)
	{
		___m_task_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_task_0), (void*)value);
	}
};


// System.Security.Cryptography.X509Certificates.X509Certificate2
struct  X509Certificate2_tC1C49EB4CFD571C2FFDE940C24BC69651A058F73  : public X509Certificate_t6859B8914E252B6831D6F59A2A720CD23F7FA7B2
{
public:
	// System.String System.Security.Cryptography.X509Certificates.X509Certificate2::friendlyName
	String_t* ___friendlyName_4;

public:
	inline static int32_t get_offset_of_friendlyName_4() { return static_cast<int32_t>(offsetof(X509Certificate2_tC1C49EB4CFD571C2FFDE940C24BC69651A058F73, ___friendlyName_4)); }
	inline String_t* get_friendlyName_4() const { return ___friendlyName_4; }
	inline String_t** get_address_of_friendlyName_4() { return &___friendlyName_4; }
	inline void set_friendlyName_4(String_t* value)
	{
		___friendlyName_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___friendlyName_4), (void*)value);
	}
};

struct X509Certificate2_tC1C49EB4CFD571C2FFDE940C24BC69651A058F73_StaticFields
{
public:
	// System.Byte[] System.Security.Cryptography.X509Certificates.X509Certificate2::signedData
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___signedData_5;

public:
	inline static int32_t get_offset_of_signedData_5() { return static_cast<int32_t>(offsetof(X509Certificate2_tC1C49EB4CFD571C2FFDE940C24BC69651A058F73_StaticFields, ___signedData_5)); }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* get_signedData_5() const { return ___signedData_5; }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** get_address_of_signedData_5() { return &___signedData_5; }
	inline void set_signedData_5(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* value)
	{
		___signedData_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___signedData_5), (void*)value);
	}
};


// System.Single
struct  Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1, ___m_value_0)); }
	inline float get_m_value_0() const { return ___m_value_0; }
	inline float* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(float value)
	{
		___m_value_0 = value;
	}
};


// System.Threading.CancellationToken
struct  CancellationToken_t9E956952F7F20908F2AE72EDF36D97E6C7DB63AB 
{
public:
	// System.Threading.CancellationTokenSource System.Threading.CancellationToken::m_source
	CancellationTokenSource_tF480B7E74A032667AFBD31F0530D619FB43AD3FE * ___m_source_0;

public:
	inline static int32_t get_offset_of_m_source_0() { return static_cast<int32_t>(offsetof(CancellationToken_t9E956952F7F20908F2AE72EDF36D97E6C7DB63AB, ___m_source_0)); }
	inline CancellationTokenSource_tF480B7E74A032667AFBD31F0530D619FB43AD3FE * get_m_source_0() const { return ___m_source_0; }
	inline CancellationTokenSource_tF480B7E74A032667AFBD31F0530D619FB43AD3FE ** get_address_of_m_source_0() { return &___m_source_0; }
	inline void set_m_source_0(CancellationTokenSource_tF480B7E74A032667AFBD31F0530D619FB43AD3FE * value)
	{
		___m_source_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_source_0), (void*)value);
	}
};

struct CancellationToken_t9E956952F7F20908F2AE72EDF36D97E6C7DB63AB_StaticFields
{
public:
	// System.Action`1<System.Object> System.Threading.CancellationToken::s_ActionToActionObjShunt
	Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 * ___s_ActionToActionObjShunt_1;

public:
	inline static int32_t get_offset_of_s_ActionToActionObjShunt_1() { return static_cast<int32_t>(offsetof(CancellationToken_t9E956952F7F20908F2AE72EDF36D97E6C7DB63AB_StaticFields, ___s_ActionToActionObjShunt_1)); }
	inline Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 * get_s_ActionToActionObjShunt_1() const { return ___s_ActionToActionObjShunt_1; }
	inline Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 ** get_address_of_s_ActionToActionObjShunt_1() { return &___s_ActionToActionObjShunt_1; }
	inline void set_s_ActionToActionObjShunt_1(Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 * value)
	{
		___s_ActionToActionObjShunt_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_ActionToActionObjShunt_1), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Threading.CancellationToken
struct CancellationToken_t9E956952F7F20908F2AE72EDF36D97E6C7DB63AB_marshaled_pinvoke
{
	CancellationTokenSource_tF480B7E74A032667AFBD31F0530D619FB43AD3FE * ___m_source_0;
};
// Native definition for COM marshalling of System.Threading.CancellationToken
struct CancellationToken_t9E956952F7F20908F2AE72EDF36D97E6C7DB63AB_marshaled_com
{
	CancellationTokenSource_tF480B7E74A032667AFBD31F0530D619FB43AD3FE * ___m_source_0;
};

// System.Threading.Thread
struct  Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7  : public CriticalFinalizerObject_t8B006E1DEE084E781F5C0F3283E9226E28894DD9
{
public:
	// System.Threading.InternalThread System.Threading.Thread::internal_thread
	InternalThread_tA4C58C2A7D15AF43C3E7507375E6D31DBBE7D192 * ___internal_thread_6;
	// System.Object System.Threading.Thread::m_ThreadStartArg
	RuntimeObject * ___m_ThreadStartArg_7;
	// System.Object System.Threading.Thread::pending_exception
	RuntimeObject * ___pending_exception_8;
	// System.Security.Principal.IPrincipal System.Threading.Thread::principal
	RuntimeObject* ___principal_9;
	// System.Int32 System.Threading.Thread::principal_version
	int32_t ___principal_version_10;
	// System.MulticastDelegate System.Threading.Thread::m_Delegate
	MulticastDelegate_t * ___m_Delegate_12;
	// System.Threading.ExecutionContext System.Threading.Thread::m_ExecutionContext
	ExecutionContext_t0E11C30308A4CC964D8A2EA9132F9BDCE5362C70 * ___m_ExecutionContext_13;
	// System.Boolean System.Threading.Thread::m_ExecutionContextBelongsToOuterScope
	bool ___m_ExecutionContextBelongsToOuterScope_14;

public:
	inline static int32_t get_offset_of_internal_thread_6() { return static_cast<int32_t>(offsetof(Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7, ___internal_thread_6)); }
	inline InternalThread_tA4C58C2A7D15AF43C3E7507375E6D31DBBE7D192 * get_internal_thread_6() const { return ___internal_thread_6; }
	inline InternalThread_tA4C58C2A7D15AF43C3E7507375E6D31DBBE7D192 ** get_address_of_internal_thread_6() { return &___internal_thread_6; }
	inline void set_internal_thread_6(InternalThread_tA4C58C2A7D15AF43C3E7507375E6D31DBBE7D192 * value)
	{
		___internal_thread_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___internal_thread_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_ThreadStartArg_7() { return static_cast<int32_t>(offsetof(Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7, ___m_ThreadStartArg_7)); }
	inline RuntimeObject * get_m_ThreadStartArg_7() const { return ___m_ThreadStartArg_7; }
	inline RuntimeObject ** get_address_of_m_ThreadStartArg_7() { return &___m_ThreadStartArg_7; }
	inline void set_m_ThreadStartArg_7(RuntimeObject * value)
	{
		___m_ThreadStartArg_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ThreadStartArg_7), (void*)value);
	}

	inline static int32_t get_offset_of_pending_exception_8() { return static_cast<int32_t>(offsetof(Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7, ___pending_exception_8)); }
	inline RuntimeObject * get_pending_exception_8() const { return ___pending_exception_8; }
	inline RuntimeObject ** get_address_of_pending_exception_8() { return &___pending_exception_8; }
	inline void set_pending_exception_8(RuntimeObject * value)
	{
		___pending_exception_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___pending_exception_8), (void*)value);
	}

	inline static int32_t get_offset_of_principal_9() { return static_cast<int32_t>(offsetof(Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7, ___principal_9)); }
	inline RuntimeObject* get_principal_9() const { return ___principal_9; }
	inline RuntimeObject** get_address_of_principal_9() { return &___principal_9; }
	inline void set_principal_9(RuntimeObject* value)
	{
		___principal_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___principal_9), (void*)value);
	}

	inline static int32_t get_offset_of_principal_version_10() { return static_cast<int32_t>(offsetof(Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7, ___principal_version_10)); }
	inline int32_t get_principal_version_10() const { return ___principal_version_10; }
	inline int32_t* get_address_of_principal_version_10() { return &___principal_version_10; }
	inline void set_principal_version_10(int32_t value)
	{
		___principal_version_10 = value;
	}

	inline static int32_t get_offset_of_m_Delegate_12() { return static_cast<int32_t>(offsetof(Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7, ___m_Delegate_12)); }
	inline MulticastDelegate_t * get_m_Delegate_12() const { return ___m_Delegate_12; }
	inline MulticastDelegate_t ** get_address_of_m_Delegate_12() { return &___m_Delegate_12; }
	inline void set_m_Delegate_12(MulticastDelegate_t * value)
	{
		___m_Delegate_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Delegate_12), (void*)value);
	}

	inline static int32_t get_offset_of_m_ExecutionContext_13() { return static_cast<int32_t>(offsetof(Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7, ___m_ExecutionContext_13)); }
	inline ExecutionContext_t0E11C30308A4CC964D8A2EA9132F9BDCE5362C70 * get_m_ExecutionContext_13() const { return ___m_ExecutionContext_13; }
	inline ExecutionContext_t0E11C30308A4CC964D8A2EA9132F9BDCE5362C70 ** get_address_of_m_ExecutionContext_13() { return &___m_ExecutionContext_13; }
	inline void set_m_ExecutionContext_13(ExecutionContext_t0E11C30308A4CC964D8A2EA9132F9BDCE5362C70 * value)
	{
		___m_ExecutionContext_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ExecutionContext_13), (void*)value);
	}

	inline static int32_t get_offset_of_m_ExecutionContextBelongsToOuterScope_14() { return static_cast<int32_t>(offsetof(Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7, ___m_ExecutionContextBelongsToOuterScope_14)); }
	inline bool get_m_ExecutionContextBelongsToOuterScope_14() const { return ___m_ExecutionContextBelongsToOuterScope_14; }
	inline bool* get_address_of_m_ExecutionContextBelongsToOuterScope_14() { return &___m_ExecutionContextBelongsToOuterScope_14; }
	inline void set_m_ExecutionContextBelongsToOuterScope_14(bool value)
	{
		___m_ExecutionContextBelongsToOuterScope_14 = value;
	}
};

struct Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7_StaticFields
{
public:
	// System.LocalDataStoreMgr System.Threading.Thread::s_LocalDataStoreMgr
	LocalDataStoreMgr_t1964DDB9F2BE154BE3159A7507D0D0CCBF8FDCA9 * ___s_LocalDataStoreMgr_0;
	// System.Threading.AsyncLocal`1<System.Globalization.CultureInfo> System.Threading.Thread::s_asyncLocalCurrentCulture
	AsyncLocal_1_tD39651C2EDD14B144FF3D9B9C716F807EB57655A * ___s_asyncLocalCurrentCulture_4;
	// System.Threading.AsyncLocal`1<System.Globalization.CultureInfo> System.Threading.Thread::s_asyncLocalCurrentUICulture
	AsyncLocal_1_tD39651C2EDD14B144FF3D9B9C716F807EB57655A * ___s_asyncLocalCurrentUICulture_5;

public:
	inline static int32_t get_offset_of_s_LocalDataStoreMgr_0() { return static_cast<int32_t>(offsetof(Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7_StaticFields, ___s_LocalDataStoreMgr_0)); }
	inline LocalDataStoreMgr_t1964DDB9F2BE154BE3159A7507D0D0CCBF8FDCA9 * get_s_LocalDataStoreMgr_0() const { return ___s_LocalDataStoreMgr_0; }
	inline LocalDataStoreMgr_t1964DDB9F2BE154BE3159A7507D0D0CCBF8FDCA9 ** get_address_of_s_LocalDataStoreMgr_0() { return &___s_LocalDataStoreMgr_0; }
	inline void set_s_LocalDataStoreMgr_0(LocalDataStoreMgr_t1964DDB9F2BE154BE3159A7507D0D0CCBF8FDCA9 * value)
	{
		___s_LocalDataStoreMgr_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_LocalDataStoreMgr_0), (void*)value);
	}

	inline static int32_t get_offset_of_s_asyncLocalCurrentCulture_4() { return static_cast<int32_t>(offsetof(Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7_StaticFields, ___s_asyncLocalCurrentCulture_4)); }
	inline AsyncLocal_1_tD39651C2EDD14B144FF3D9B9C716F807EB57655A * get_s_asyncLocalCurrentCulture_4() const { return ___s_asyncLocalCurrentCulture_4; }
	inline AsyncLocal_1_tD39651C2EDD14B144FF3D9B9C716F807EB57655A ** get_address_of_s_asyncLocalCurrentCulture_4() { return &___s_asyncLocalCurrentCulture_4; }
	inline void set_s_asyncLocalCurrentCulture_4(AsyncLocal_1_tD39651C2EDD14B144FF3D9B9C716F807EB57655A * value)
	{
		___s_asyncLocalCurrentCulture_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_asyncLocalCurrentCulture_4), (void*)value);
	}

	inline static int32_t get_offset_of_s_asyncLocalCurrentUICulture_5() { return static_cast<int32_t>(offsetof(Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7_StaticFields, ___s_asyncLocalCurrentUICulture_5)); }
	inline AsyncLocal_1_tD39651C2EDD14B144FF3D9B9C716F807EB57655A * get_s_asyncLocalCurrentUICulture_5() const { return ___s_asyncLocalCurrentUICulture_5; }
	inline AsyncLocal_1_tD39651C2EDD14B144FF3D9B9C716F807EB57655A ** get_address_of_s_asyncLocalCurrentUICulture_5() { return &___s_asyncLocalCurrentUICulture_5; }
	inline void set_s_asyncLocalCurrentUICulture_5(AsyncLocal_1_tD39651C2EDD14B144FF3D9B9C716F807EB57655A * value)
	{
		___s_asyncLocalCurrentUICulture_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_asyncLocalCurrentUICulture_5), (void*)value);
	}
};

struct Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7_ThreadStaticFields
{
public:
	// System.LocalDataStoreHolder System.Threading.Thread::s_LocalDataStore
	LocalDataStoreHolder_tE0636E08496405406FD63190AC51EEB2EE51E304 * ___s_LocalDataStore_1;
	// System.Globalization.CultureInfo System.Threading.Thread::m_CurrentCulture
	CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * ___m_CurrentCulture_2;
	// System.Globalization.CultureInfo System.Threading.Thread::m_CurrentUICulture
	CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * ___m_CurrentUICulture_3;
	// System.Threading.Thread System.Threading.Thread::current_thread
	Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7 * ___current_thread_11;

public:
	inline static int32_t get_offset_of_s_LocalDataStore_1() { return static_cast<int32_t>(offsetof(Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7_ThreadStaticFields, ___s_LocalDataStore_1)); }
	inline LocalDataStoreHolder_tE0636E08496405406FD63190AC51EEB2EE51E304 * get_s_LocalDataStore_1() const { return ___s_LocalDataStore_1; }
	inline LocalDataStoreHolder_tE0636E08496405406FD63190AC51EEB2EE51E304 ** get_address_of_s_LocalDataStore_1() { return &___s_LocalDataStore_1; }
	inline void set_s_LocalDataStore_1(LocalDataStoreHolder_tE0636E08496405406FD63190AC51EEB2EE51E304 * value)
	{
		___s_LocalDataStore_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_LocalDataStore_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_CurrentCulture_2() { return static_cast<int32_t>(offsetof(Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7_ThreadStaticFields, ___m_CurrentCulture_2)); }
	inline CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * get_m_CurrentCulture_2() const { return ___m_CurrentCulture_2; }
	inline CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F ** get_address_of_m_CurrentCulture_2() { return &___m_CurrentCulture_2; }
	inline void set_m_CurrentCulture_2(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * value)
	{
		___m_CurrentCulture_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CurrentCulture_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_CurrentUICulture_3() { return static_cast<int32_t>(offsetof(Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7_ThreadStaticFields, ___m_CurrentUICulture_3)); }
	inline CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * get_m_CurrentUICulture_3() const { return ___m_CurrentUICulture_3; }
	inline CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F ** get_address_of_m_CurrentUICulture_3() { return &___m_CurrentUICulture_3; }
	inline void set_m_CurrentUICulture_3(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * value)
	{
		___m_CurrentUICulture_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CurrentUICulture_3), (void*)value);
	}

	inline static int32_t get_offset_of_current_thread_11() { return static_cast<int32_t>(offsetof(Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7_ThreadStaticFields, ___current_thread_11)); }
	inline Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7 * get_current_thread_11() const { return ___current_thread_11; }
	inline Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7 ** get_address_of_current_thread_11() { return &___current_thread_11; }
	inline void set_current_thread_11(Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7 * value)
	{
		___current_thread_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_thread_11), (void*)value);
	}
};


// System.UInt32
struct  UInt32_t4980FA09003AFAAB5A6E361BA2748EA9A005709B 
{
public:
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt32_t4980FA09003AFAAB5A6E361BA2748EA9A005709B, ___m_value_0)); }
	inline uint32_t get_m_value_0() const { return ___m_value_0; }
	inline uint32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint32_t value)
	{
		___m_value_0 = value;
	}
};


// System.Void
struct  Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017__padding[1];
	};

public:
};


// UnityEngine.Color
struct  Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 
{
public:
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;

public:
	inline static int32_t get_offset_of_r_0() { return static_cast<int32_t>(offsetof(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2, ___r_0)); }
	inline float get_r_0() const { return ___r_0; }
	inline float* get_address_of_r_0() { return &___r_0; }
	inline void set_r_0(float value)
	{
		___r_0 = value;
	}

	inline static int32_t get_offset_of_g_1() { return static_cast<int32_t>(offsetof(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2, ___g_1)); }
	inline float get_g_1() const { return ___g_1; }
	inline float* get_address_of_g_1() { return &___g_1; }
	inline void set_g_1(float value)
	{
		___g_1 = value;
	}

	inline static int32_t get_offset_of_b_2() { return static_cast<int32_t>(offsetof(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2, ___b_2)); }
	inline float get_b_2() const { return ___b_2; }
	inline float* get_address_of_b_2() { return &___b_2; }
	inline void set_b_2(float value)
	{
		___b_2 = value;
	}

	inline static int32_t get_offset_of_a_3() { return static_cast<int32_t>(offsetof(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2, ___a_3)); }
	inline float get_a_3() const { return ___a_3; }
	inline float* get_address_of_a_3() { return &___a_3; }
	inline void set_a_3(float value)
	{
		___a_3 = value;
	}
};


// UnityEngine.Matrix4x4
struct  Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA 
{
public:
	// System.Single UnityEngine.Matrix4x4::m00
	float ___m00_0;
	// System.Single UnityEngine.Matrix4x4::m10
	float ___m10_1;
	// System.Single UnityEngine.Matrix4x4::m20
	float ___m20_2;
	// System.Single UnityEngine.Matrix4x4::m30
	float ___m30_3;
	// System.Single UnityEngine.Matrix4x4::m01
	float ___m01_4;
	// System.Single UnityEngine.Matrix4x4::m11
	float ___m11_5;
	// System.Single UnityEngine.Matrix4x4::m21
	float ___m21_6;
	// System.Single UnityEngine.Matrix4x4::m31
	float ___m31_7;
	// System.Single UnityEngine.Matrix4x4::m02
	float ___m02_8;
	// System.Single UnityEngine.Matrix4x4::m12
	float ___m12_9;
	// System.Single UnityEngine.Matrix4x4::m22
	float ___m22_10;
	// System.Single UnityEngine.Matrix4x4::m32
	float ___m32_11;
	// System.Single UnityEngine.Matrix4x4::m03
	float ___m03_12;
	// System.Single UnityEngine.Matrix4x4::m13
	float ___m13_13;
	// System.Single UnityEngine.Matrix4x4::m23
	float ___m23_14;
	// System.Single UnityEngine.Matrix4x4::m33
	float ___m33_15;

public:
	inline static int32_t get_offset_of_m00_0() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m00_0)); }
	inline float get_m00_0() const { return ___m00_0; }
	inline float* get_address_of_m00_0() { return &___m00_0; }
	inline void set_m00_0(float value)
	{
		___m00_0 = value;
	}

	inline static int32_t get_offset_of_m10_1() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m10_1)); }
	inline float get_m10_1() const { return ___m10_1; }
	inline float* get_address_of_m10_1() { return &___m10_1; }
	inline void set_m10_1(float value)
	{
		___m10_1 = value;
	}

	inline static int32_t get_offset_of_m20_2() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m20_2)); }
	inline float get_m20_2() const { return ___m20_2; }
	inline float* get_address_of_m20_2() { return &___m20_2; }
	inline void set_m20_2(float value)
	{
		___m20_2 = value;
	}

	inline static int32_t get_offset_of_m30_3() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m30_3)); }
	inline float get_m30_3() const { return ___m30_3; }
	inline float* get_address_of_m30_3() { return &___m30_3; }
	inline void set_m30_3(float value)
	{
		___m30_3 = value;
	}

	inline static int32_t get_offset_of_m01_4() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m01_4)); }
	inline float get_m01_4() const { return ___m01_4; }
	inline float* get_address_of_m01_4() { return &___m01_4; }
	inline void set_m01_4(float value)
	{
		___m01_4 = value;
	}

	inline static int32_t get_offset_of_m11_5() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m11_5)); }
	inline float get_m11_5() const { return ___m11_5; }
	inline float* get_address_of_m11_5() { return &___m11_5; }
	inline void set_m11_5(float value)
	{
		___m11_5 = value;
	}

	inline static int32_t get_offset_of_m21_6() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m21_6)); }
	inline float get_m21_6() const { return ___m21_6; }
	inline float* get_address_of_m21_6() { return &___m21_6; }
	inline void set_m21_6(float value)
	{
		___m21_6 = value;
	}

	inline static int32_t get_offset_of_m31_7() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m31_7)); }
	inline float get_m31_7() const { return ___m31_7; }
	inline float* get_address_of_m31_7() { return &___m31_7; }
	inline void set_m31_7(float value)
	{
		___m31_7 = value;
	}

	inline static int32_t get_offset_of_m02_8() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m02_8)); }
	inline float get_m02_8() const { return ___m02_8; }
	inline float* get_address_of_m02_8() { return &___m02_8; }
	inline void set_m02_8(float value)
	{
		___m02_8 = value;
	}

	inline static int32_t get_offset_of_m12_9() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m12_9)); }
	inline float get_m12_9() const { return ___m12_9; }
	inline float* get_address_of_m12_9() { return &___m12_9; }
	inline void set_m12_9(float value)
	{
		___m12_9 = value;
	}

	inline static int32_t get_offset_of_m22_10() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m22_10)); }
	inline float get_m22_10() const { return ___m22_10; }
	inline float* get_address_of_m22_10() { return &___m22_10; }
	inline void set_m22_10(float value)
	{
		___m22_10 = value;
	}

	inline static int32_t get_offset_of_m32_11() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m32_11)); }
	inline float get_m32_11() const { return ___m32_11; }
	inline float* get_address_of_m32_11() { return &___m32_11; }
	inline void set_m32_11(float value)
	{
		___m32_11 = value;
	}

	inline static int32_t get_offset_of_m03_12() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m03_12)); }
	inline float get_m03_12() const { return ___m03_12; }
	inline float* get_address_of_m03_12() { return &___m03_12; }
	inline void set_m03_12(float value)
	{
		___m03_12 = value;
	}

	inline static int32_t get_offset_of_m13_13() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m13_13)); }
	inline float get_m13_13() const { return ___m13_13; }
	inline float* get_address_of_m13_13() { return &___m13_13; }
	inline void set_m13_13(float value)
	{
		___m13_13 = value;
	}

	inline static int32_t get_offset_of_m23_14() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m23_14)); }
	inline float get_m23_14() const { return ___m23_14; }
	inline float* get_address_of_m23_14() { return &___m23_14; }
	inline void set_m23_14(float value)
	{
		___m23_14 = value;
	}

	inline static int32_t get_offset_of_m33_15() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m33_15)); }
	inline float get_m33_15() const { return ___m33_15; }
	inline float* get_address_of_m33_15() { return &___m33_15; }
	inline void set_m33_15(float value)
	{
		___m33_15 = value;
	}
};

struct Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA_StaticFields
{
public:
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::zeroMatrix
	Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  ___zeroMatrix_16;
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::identityMatrix
	Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  ___identityMatrix_17;

public:
	inline static int32_t get_offset_of_zeroMatrix_16() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA_StaticFields, ___zeroMatrix_16)); }
	inline Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  get_zeroMatrix_16() const { return ___zeroMatrix_16; }
	inline Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA * get_address_of_zeroMatrix_16() { return &___zeroMatrix_16; }
	inline void set_zeroMatrix_16(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  value)
	{
		___zeroMatrix_16 = value;
	}

	inline static int32_t get_offset_of_identityMatrix_17() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA_StaticFields, ___identityMatrix_17)); }
	inline Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  get_identityMatrix_17() const { return ___identityMatrix_17; }
	inline Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA * get_address_of_identityMatrix_17() { return &___identityMatrix_17; }
	inline void set_identityMatrix_17(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  value)
	{
		___identityMatrix_17 = value;
	}
};


// UnityEngine.Vector2
struct  Vector2_tA85D2DD88578276CA8A8796756458277E72D073D 
{
public:
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}
};

struct Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields
{
public:
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___negativeInfinityVector_9;

public:
	inline static int32_t get_offset_of_zeroVector_2() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___zeroVector_2)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_zeroVector_2() const { return ___zeroVector_2; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_zeroVector_2() { return &___zeroVector_2; }
	inline void set_zeroVector_2(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___zeroVector_2 = value;
	}

	inline static int32_t get_offset_of_oneVector_3() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___oneVector_3)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_oneVector_3() const { return ___oneVector_3; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_oneVector_3() { return &___oneVector_3; }
	inline void set_oneVector_3(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___oneVector_3 = value;
	}

	inline static int32_t get_offset_of_upVector_4() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___upVector_4)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_upVector_4() const { return ___upVector_4; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_upVector_4() { return &___upVector_4; }
	inline void set_upVector_4(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___upVector_4 = value;
	}

	inline static int32_t get_offset_of_downVector_5() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___downVector_5)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_downVector_5() const { return ___downVector_5; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_downVector_5() { return &___downVector_5; }
	inline void set_downVector_5(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___downVector_5 = value;
	}

	inline static int32_t get_offset_of_leftVector_6() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___leftVector_6)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_leftVector_6() const { return ___leftVector_6; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_leftVector_6() { return &___leftVector_6; }
	inline void set_leftVector_6(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___leftVector_6 = value;
	}

	inline static int32_t get_offset_of_rightVector_7() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___rightVector_7)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_rightVector_7() const { return ___rightVector_7; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_rightVector_7() { return &___rightVector_7; }
	inline void set_rightVector_7(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___rightVector_7 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___positiveInfinityVector_8)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_positiveInfinityVector_8() const { return ___positiveInfinityVector_8; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_positiveInfinityVector_8() { return &___positiveInfinityVector_8; }
	inline void set_positiveInfinityVector_8(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___positiveInfinityVector_8 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_9() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___negativeInfinityVector_9)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_negativeInfinityVector_9() const { return ___negativeInfinityVector_9; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_negativeInfinityVector_9() { return &___negativeInfinityVector_9; }
	inline void set_negativeInfinityVector_9(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___negativeInfinityVector_9 = value;
	}
};


// UnityEngine.Vector3
struct  Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;

public:
	inline static int32_t get_offset_of_x_2() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720, ___x_2)); }
	inline float get_x_2() const { return ___x_2; }
	inline float* get_address_of_x_2() { return &___x_2; }
	inline void set_x_2(float value)
	{
		___x_2 = value;
	}

	inline static int32_t get_offset_of_y_3() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720, ___y_3)); }
	inline float get_y_3() const { return ___y_3; }
	inline float* get_address_of_y_3() { return &___y_3; }
	inline void set_y_3(float value)
	{
		___y_3 = value;
	}

	inline static int32_t get_offset_of_z_4() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720, ___z_4)); }
	inline float get_z_4() const { return ___z_4; }
	inline float* get_address_of_z_4() { return &___z_4; }
	inline void set_z_4(float value)
	{
		___z_4 = value;
	}
};

struct Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___negativeInfinityVector_14;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___zeroVector_5)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___oneVector_6)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_upVector_7() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___upVector_7)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_upVector_7() const { return ___upVector_7; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_upVector_7() { return &___upVector_7; }
	inline void set_upVector_7(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___upVector_7 = value;
	}

	inline static int32_t get_offset_of_downVector_8() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___downVector_8)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_downVector_8() const { return ___downVector_8; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_downVector_8() { return &___downVector_8; }
	inline void set_downVector_8(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___downVector_8 = value;
	}

	inline static int32_t get_offset_of_leftVector_9() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___leftVector_9)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_leftVector_9() const { return ___leftVector_9; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_leftVector_9() { return &___leftVector_9; }
	inline void set_leftVector_9(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___leftVector_9 = value;
	}

	inline static int32_t get_offset_of_rightVector_10() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___rightVector_10)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_rightVector_10() const { return ___rightVector_10; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_rightVector_10() { return &___rightVector_10; }
	inline void set_rightVector_10(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___rightVector_10 = value;
	}

	inline static int32_t get_offset_of_forwardVector_11() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___forwardVector_11)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_forwardVector_11() const { return ___forwardVector_11; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_forwardVector_11() { return &___forwardVector_11; }
	inline void set_forwardVector_11(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___forwardVector_11 = value;
	}

	inline static int32_t get_offset_of_backVector_12() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___backVector_12)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_backVector_12() const { return ___backVector_12; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_backVector_12() { return &___backVector_12; }
	inline void set_backVector_12(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___backVector_12 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_13() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___positiveInfinityVector_13)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_positiveInfinityVector_13() const { return ___positiveInfinityVector_13; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_positiveInfinityVector_13() { return &___positiveInfinityVector_13; }
	inline void set_positiveInfinityVector_13(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___positiveInfinityVector_13 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_14() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___negativeInfinityVector_14)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_negativeInfinityVector_14() const { return ___negativeInfinityVector_14; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_negativeInfinityVector_14() { return &___negativeInfinityVector_14; }
	inline void set_negativeInfinityVector_14(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___negativeInfinityVector_14 = value;
	}
};


// UnityEngine.Vector4
struct  Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E 
{
public:
	// System.Single UnityEngine.Vector4::x
	float ___x_1;
	// System.Single UnityEngine.Vector4::y
	float ___y_2;
	// System.Single UnityEngine.Vector4::z
	float ___z_3;
	// System.Single UnityEngine.Vector4::w
	float ___w_4;

public:
	inline static int32_t get_offset_of_x_1() { return static_cast<int32_t>(offsetof(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E, ___x_1)); }
	inline float get_x_1() const { return ___x_1; }
	inline float* get_address_of_x_1() { return &___x_1; }
	inline void set_x_1(float value)
	{
		___x_1 = value;
	}

	inline static int32_t get_offset_of_y_2() { return static_cast<int32_t>(offsetof(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E, ___y_2)); }
	inline float get_y_2() const { return ___y_2; }
	inline float* get_address_of_y_2() { return &___y_2; }
	inline void set_y_2(float value)
	{
		___y_2 = value;
	}

	inline static int32_t get_offset_of_z_3() { return static_cast<int32_t>(offsetof(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E, ___z_3)); }
	inline float get_z_3() const { return ___z_3; }
	inline float* get_address_of_z_3() { return &___z_3; }
	inline void set_z_3(float value)
	{
		___z_3 = value;
	}

	inline static int32_t get_offset_of_w_4() { return static_cast<int32_t>(offsetof(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E, ___w_4)); }
	inline float get_w_4() const { return ___w_4; }
	inline float* get_address_of_w_4() { return &___w_4; }
	inline void set_w_4(float value)
	{
		___w_4 = value;
	}
};

struct Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E_StaticFields
{
public:
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  ___zeroVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  ___oneVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  ___positiveInfinityVector_7;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  ___negativeInfinityVector_8;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E_StaticFields, ___zeroVector_5)); }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E_StaticFields, ___oneVector_6)); }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_7() { return static_cast<int32_t>(offsetof(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E_StaticFields, ___positiveInfinityVector_7)); }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  get_positiveInfinityVector_7() const { return ___positiveInfinityVector_7; }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E * get_address_of_positiveInfinityVector_7() { return &___positiveInfinityVector_7; }
	inline void set_positiveInfinityVector_7(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  value)
	{
		___positiveInfinityVector_7 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E_StaticFields, ___negativeInfinityVector_8)); }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  get_negativeInfinityVector_8() const { return ___negativeInfinityVector_8; }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E * get_address_of_negativeInfinityVector_8() { return &___negativeInfinityVector_8; }
	inline void set_negativeInfinityVector_8(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  value)
	{
		___negativeInfinityVector_8 = value;
	}
};


// UnityEngine.WaitUntil
struct  WaitUntil_t012561515C0E1D3DEA19DB3A05444B020C68E13F  : public CustomYieldInstruction_t819BB0973AFF22766749FF087B8AEFEAF3C2CB7D
{
public:
	// System.Func`1<System.Boolean> UnityEngine.WaitUntil::m_Predicate
	Func_1_t4ABD6DAD480574F152452DD6B9C9A55F4F6655F1 * ___m_Predicate_0;

public:
	inline static int32_t get_offset_of_m_Predicate_0() { return static_cast<int32_t>(offsetof(WaitUntil_t012561515C0E1D3DEA19DB3A05444B020C68E13F, ___m_Predicate_0)); }
	inline Func_1_t4ABD6DAD480574F152452DD6B9C9A55F4F6655F1 * get_m_Predicate_0() const { return ___m_Predicate_0; }
	inline Func_1_t4ABD6DAD480574F152452DD6B9C9A55F4F6655F1 ** get_address_of_m_Predicate_0() { return &___m_Predicate_0; }
	inline void set_m_Predicate_0(Func_1_t4ABD6DAD480574F152452DD6B9C9A55F4F6655F1 * value)
	{
		___m_Predicate_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Predicate_0), (void*)value);
	}
};


// UnityGLTF.GLTFSceneImporter_GLBStream
struct  GLBStream_t62748985BC9D1878C913AEB01D89B3F28939AB3F 
{
public:
	// System.IO.Stream UnityGLTF.GLTFSceneImporter_GLBStream::Stream
	Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * ___Stream_0;
	// System.Int64 UnityGLTF.GLTFSceneImporter_GLBStream::StartPosition
	int64_t ___StartPosition_1;

public:
	inline static int32_t get_offset_of_Stream_0() { return static_cast<int32_t>(offsetof(GLBStream_t62748985BC9D1878C913AEB01D89B3F28939AB3F, ___Stream_0)); }
	inline Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * get_Stream_0() const { return ___Stream_0; }
	inline Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 ** get_address_of_Stream_0() { return &___Stream_0; }
	inline void set_Stream_0(Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * value)
	{
		___Stream_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Stream_0), (void*)value);
	}

	inline static int32_t get_offset_of_StartPosition_1() { return static_cast<int32_t>(offsetof(GLBStream_t62748985BC9D1878C913AEB01D89B3F28939AB3F, ___StartPosition_1)); }
	inline int64_t get_StartPosition_1() const { return ___StartPosition_1; }
	inline int64_t* get_address_of_StartPosition_1() { return &___StartPosition_1; }
	inline void set_StartPosition_1(int64_t value)
	{
		___StartPosition_1 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityGLTF.GLTFSceneImporter/GLBStream
struct GLBStream_t62748985BC9D1878C913AEB01D89B3F28939AB3F_marshaled_pinvoke
{
	Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * ___Stream_0;
	int64_t ___StartPosition_1;
};
// Native definition for COM marshalling of UnityGLTF.GLTFSceneImporter/GLBStream
struct GLBStream_t62748985BC9D1878C913AEB01D89B3F28939AB3F_marshaled_com
{
	Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * ___Stream_0;
	int64_t ___StartPosition_1;
};

// UnityGLTF.ImportProgress
struct  ImportProgress_t4F58A59AEDE43A81DEEE82088082DD48A47DB28D 
{
public:
	// System.Boolean UnityGLTF.ImportProgress::IsDownloaded
	bool ___IsDownloaded_0;
	// System.Int32 UnityGLTF.ImportProgress::NodeTotal
	int32_t ___NodeTotal_1;
	// System.Int32 UnityGLTF.ImportProgress::NodeLoaded
	int32_t ___NodeLoaded_2;
	// System.Int32 UnityGLTF.ImportProgress::TextureTotal
	int32_t ___TextureTotal_3;
	// System.Int32 UnityGLTF.ImportProgress::TextureLoaded
	int32_t ___TextureLoaded_4;
	// System.Int32 UnityGLTF.ImportProgress::BuffersTotal
	int32_t ___BuffersTotal_5;
	// System.Int32 UnityGLTF.ImportProgress::BuffersLoaded
	int32_t ___BuffersLoaded_6;

public:
	inline static int32_t get_offset_of_IsDownloaded_0() { return static_cast<int32_t>(offsetof(ImportProgress_t4F58A59AEDE43A81DEEE82088082DD48A47DB28D, ___IsDownloaded_0)); }
	inline bool get_IsDownloaded_0() const { return ___IsDownloaded_0; }
	inline bool* get_address_of_IsDownloaded_0() { return &___IsDownloaded_0; }
	inline void set_IsDownloaded_0(bool value)
	{
		___IsDownloaded_0 = value;
	}

	inline static int32_t get_offset_of_NodeTotal_1() { return static_cast<int32_t>(offsetof(ImportProgress_t4F58A59AEDE43A81DEEE82088082DD48A47DB28D, ___NodeTotal_1)); }
	inline int32_t get_NodeTotal_1() const { return ___NodeTotal_1; }
	inline int32_t* get_address_of_NodeTotal_1() { return &___NodeTotal_1; }
	inline void set_NodeTotal_1(int32_t value)
	{
		___NodeTotal_1 = value;
	}

	inline static int32_t get_offset_of_NodeLoaded_2() { return static_cast<int32_t>(offsetof(ImportProgress_t4F58A59AEDE43A81DEEE82088082DD48A47DB28D, ___NodeLoaded_2)); }
	inline int32_t get_NodeLoaded_2() const { return ___NodeLoaded_2; }
	inline int32_t* get_address_of_NodeLoaded_2() { return &___NodeLoaded_2; }
	inline void set_NodeLoaded_2(int32_t value)
	{
		___NodeLoaded_2 = value;
	}

	inline static int32_t get_offset_of_TextureTotal_3() { return static_cast<int32_t>(offsetof(ImportProgress_t4F58A59AEDE43A81DEEE82088082DD48A47DB28D, ___TextureTotal_3)); }
	inline int32_t get_TextureTotal_3() const { return ___TextureTotal_3; }
	inline int32_t* get_address_of_TextureTotal_3() { return &___TextureTotal_3; }
	inline void set_TextureTotal_3(int32_t value)
	{
		___TextureTotal_3 = value;
	}

	inline static int32_t get_offset_of_TextureLoaded_4() { return static_cast<int32_t>(offsetof(ImportProgress_t4F58A59AEDE43A81DEEE82088082DD48A47DB28D, ___TextureLoaded_4)); }
	inline int32_t get_TextureLoaded_4() const { return ___TextureLoaded_4; }
	inline int32_t* get_address_of_TextureLoaded_4() { return &___TextureLoaded_4; }
	inline void set_TextureLoaded_4(int32_t value)
	{
		___TextureLoaded_4 = value;
	}

	inline static int32_t get_offset_of_BuffersTotal_5() { return static_cast<int32_t>(offsetof(ImportProgress_t4F58A59AEDE43A81DEEE82088082DD48A47DB28D, ___BuffersTotal_5)); }
	inline int32_t get_BuffersTotal_5() const { return ___BuffersTotal_5; }
	inline int32_t* get_address_of_BuffersTotal_5() { return &___BuffersTotal_5; }
	inline void set_BuffersTotal_5(int32_t value)
	{
		___BuffersTotal_5 = value;
	}

	inline static int32_t get_offset_of_BuffersLoaded_6() { return static_cast<int32_t>(offsetof(ImportProgress_t4F58A59AEDE43A81DEEE82088082DD48A47DB28D, ___BuffersLoaded_6)); }
	inline int32_t get_BuffersLoaded_6() const { return ___BuffersLoaded_6; }
	inline int32_t* get_address_of_BuffersLoaded_6() { return &___BuffersLoaded_6; }
	inline void set_BuffersLoaded_6(int32_t value)
	{
		___BuffersLoaded_6 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityGLTF.ImportProgress
struct ImportProgress_t4F58A59AEDE43A81DEEE82088082DD48A47DB28D_marshaled_pinvoke
{
	int32_t ___IsDownloaded_0;
	int32_t ___NodeTotal_1;
	int32_t ___NodeLoaded_2;
	int32_t ___TextureTotal_3;
	int32_t ___TextureLoaded_4;
	int32_t ___BuffersTotal_5;
	int32_t ___BuffersLoaded_6;
};
// Native definition for COM marshalling of UnityGLTF.ImportProgress
struct ImportProgress_t4F58A59AEDE43A81DEEE82088082DD48A47DB28D_marshaled_com
{
	int32_t ___IsDownloaded_0;
	int32_t ___NodeTotal_1;
	int32_t ___NodeLoaded_2;
	int32_t ___TextureTotal_3;
	int32_t ___TextureLoaded_4;
	int32_t ___BuffersTotal_5;
	int32_t ___BuffersLoaded_6;
};

// UnityGLTF.ImportStatistics
struct  ImportStatistics_t3102F608371E4D5FD73B008F8C3AD4371D9F1FD8 
{
public:
	// System.Int64 UnityGLTF.ImportStatistics::TriangleCount
	int64_t ___TriangleCount_0;
	// System.Int64 UnityGLTF.ImportStatistics::VertexCount
	int64_t ___VertexCount_1;

public:
	inline static int32_t get_offset_of_TriangleCount_0() { return static_cast<int32_t>(offsetof(ImportStatistics_t3102F608371E4D5FD73B008F8C3AD4371D9F1FD8, ___TriangleCount_0)); }
	inline int64_t get_TriangleCount_0() const { return ___TriangleCount_0; }
	inline int64_t* get_address_of_TriangleCount_0() { return &___TriangleCount_0; }
	inline void set_TriangleCount_0(int64_t value)
	{
		___TriangleCount_0 = value;
	}

	inline static int32_t get_offset_of_VertexCount_1() { return static_cast<int32_t>(offsetof(ImportStatistics_t3102F608371E4D5FD73B008F8C3AD4371D9F1FD8, ___VertexCount_1)); }
	inline int64_t get_VertexCount_1() const { return ___VertexCount_1; }
	inline int64_t* get_address_of_VertexCount_1() { return &___VertexCount_1; }
	inline void set_VertexCount_1(int64_t value)
	{
		___VertexCount_1 = value;
	}
};


// UnityGLTF.Loader.LegacyLoaderWrapper_LegacyLoader2
struct  LegacyLoader2_t0452563D748486937601133A68E894CFB0FEB5D1  : public LegacyLoader_t5912492DEE5FE2B93A98D527C8D49A91CFDA8A22
{
public:

public:
};


// GLTF.AttributeAccessor
struct  AttributeAccessor_t54DE63C0FA54991AB605635BD32870BA45E9FF8C  : public RuntimeObject
{
public:
	// GLTF.Schema.AccessorId GLTF.AttributeAccessor::<AccessorId>k__BackingField
	AccessorId_t6C51102D50B95D309D47FD946FE62ED76C16B83F * ___U3CAccessorIdU3Ek__BackingField_0;
	// GLTF.Schema.NumericArray GLTF.AttributeAccessor::<AccessorContent>k__BackingField
	NumericArray_t4941F537DC57A0602218632AABDF228987E030E9  ___U3CAccessorContentU3Ek__BackingField_1;
	// System.IO.Stream GLTF.AttributeAccessor::<Stream>k__BackingField
	Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * ___U3CStreamU3Ek__BackingField_2;
	// System.UInt32 GLTF.AttributeAccessor::<Offset>k__BackingField
	uint32_t ___U3COffsetU3Ek__BackingField_3;

public:
	inline static int32_t get_offset_of_U3CAccessorIdU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(AttributeAccessor_t54DE63C0FA54991AB605635BD32870BA45E9FF8C, ___U3CAccessorIdU3Ek__BackingField_0)); }
	inline AccessorId_t6C51102D50B95D309D47FD946FE62ED76C16B83F * get_U3CAccessorIdU3Ek__BackingField_0() const { return ___U3CAccessorIdU3Ek__BackingField_0; }
	inline AccessorId_t6C51102D50B95D309D47FD946FE62ED76C16B83F ** get_address_of_U3CAccessorIdU3Ek__BackingField_0() { return &___U3CAccessorIdU3Ek__BackingField_0; }
	inline void set_U3CAccessorIdU3Ek__BackingField_0(AccessorId_t6C51102D50B95D309D47FD946FE62ED76C16B83F * value)
	{
		___U3CAccessorIdU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CAccessorIdU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CAccessorContentU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(AttributeAccessor_t54DE63C0FA54991AB605635BD32870BA45E9FF8C, ___U3CAccessorContentU3Ek__BackingField_1)); }
	inline NumericArray_t4941F537DC57A0602218632AABDF228987E030E9  get_U3CAccessorContentU3Ek__BackingField_1() const { return ___U3CAccessorContentU3Ek__BackingField_1; }
	inline NumericArray_t4941F537DC57A0602218632AABDF228987E030E9 * get_address_of_U3CAccessorContentU3Ek__BackingField_1() { return &___U3CAccessorContentU3Ek__BackingField_1; }
	inline void set_U3CAccessorContentU3Ek__BackingField_1(NumericArray_t4941F537DC57A0602218632AABDF228987E030E9  value)
	{
		___U3CAccessorContentU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CAccessorContentU3Ek__BackingField_1))->___AsUInts_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CAccessorContentU3Ek__BackingField_1))->___AsFloats_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CAccessorContentU3Ek__BackingField_1))->___AsVec2s_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CAccessorContentU3Ek__BackingField_1))->___AsVec3s_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CAccessorContentU3Ek__BackingField_1))->___AsVec4s_4), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CAccessorContentU3Ek__BackingField_1))->___AsMatrix4x4s_5), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CAccessorContentU3Ek__BackingField_1))->___AsColors_6), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CAccessorContentU3Ek__BackingField_1))->___AsTexcoords_7), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CAccessorContentU3Ek__BackingField_1))->___AsVertices_8), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CAccessorContentU3Ek__BackingField_1))->___AsNormals_9), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CAccessorContentU3Ek__BackingField_1))->___AsTangents_10), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CAccessorContentU3Ek__BackingField_1))->___AsTriangles_11), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_U3CStreamU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(AttributeAccessor_t54DE63C0FA54991AB605635BD32870BA45E9FF8C, ___U3CStreamU3Ek__BackingField_2)); }
	inline Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * get_U3CStreamU3Ek__BackingField_2() const { return ___U3CStreamU3Ek__BackingField_2; }
	inline Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 ** get_address_of_U3CStreamU3Ek__BackingField_2() { return &___U3CStreamU3Ek__BackingField_2; }
	inline void set_U3CStreamU3Ek__BackingField_2(Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * value)
	{
		___U3CStreamU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CStreamU3Ek__BackingField_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3COffsetU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(AttributeAccessor_t54DE63C0FA54991AB605635BD32870BA45E9FF8C, ___U3COffsetU3Ek__BackingField_3)); }
	inline uint32_t get_U3COffsetU3Ek__BackingField_3() const { return ___U3COffsetU3Ek__BackingField_3; }
	inline uint32_t* get_address_of_U3COffsetU3Ek__BackingField_3() { return &___U3COffsetU3Ek__BackingField_3; }
	inline void set_U3COffsetU3Ek__BackingField_3(uint32_t value)
	{
		___U3COffsetU3Ek__BackingField_3 = value;
	}
};


// GLTF.Schema.AlphaMode
struct  AlphaMode_t41015BEC6E2BB18C0A2688E6CF441F148BA768E6 
{
public:
	// System.Int32 GLTF.Schema.AlphaMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(AlphaMode_t41015BEC6E2BB18C0A2688E6CF441F148BA768E6, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// GLTF.Schema.BufferViewTarget
struct  BufferViewTarget_t56AAAFD9880E8FE1098EE7B4F2F7DC54893FB87E 
{
public:
	// System.Int32 GLTF.Schema.BufferViewTarget::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(BufferViewTarget_t56AAAFD9880E8FE1098EE7B4F2F7DC54893FB87E, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// GLTF.Schema.GLTFAccessorAttributeType
struct  GLTFAccessorAttributeType_t733A462A97AE55D3A765746932C23C9AF0A9A67E 
{
public:
	// System.Int32 GLTF.Schema.GLTFAccessorAttributeType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(GLTFAccessorAttributeType_t733A462A97AE55D3A765746932C23C9AF0A9A67E, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// GLTF.Schema.GLTFComponentType
struct  GLTFComponentType_t2DB090AB0A0D5173E990FA29FE3B7C7C710F68E4 
{
public:
	// System.Int32 GLTF.Schema.GLTFComponentType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(GLTFComponentType_t2DB090AB0A0D5173E990FA29FE3B7C7C710F68E4, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// GLTF.Schema.GLTFScene
struct  GLTFScene_t668D116E319247178F4641B2F3A4DF33C6343BB6  : public GLTFChildOfRootProperty_t162116062E3D11D0057F6780F387ED5EBE6C268C
{
public:
	// System.Collections.Generic.List`1<GLTF.Schema.NodeId> GLTF.Schema.GLTFScene::Nodes
	List_1_t1B89882FA16EC868F9405338766EE999CD21DBAD * ___Nodes_5;

public:
	inline static int32_t get_offset_of_Nodes_5() { return static_cast<int32_t>(offsetof(GLTFScene_t668D116E319247178F4641B2F3A4DF33C6343BB6, ___Nodes_5)); }
	inline List_1_t1B89882FA16EC868F9405338766EE999CD21DBAD * get_Nodes_5() const { return ___Nodes_5; }
	inline List_1_t1B89882FA16EC868F9405338766EE999CD21DBAD ** get_address_of_Nodes_5() { return &___Nodes_5; }
	inline void set_Nodes_5(List_1_t1B89882FA16EC868F9405338766EE999CD21DBAD * value)
	{
		___Nodes_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Nodes_5), (void*)value);
	}
};


// GLTF.Schema.GLTFTexture
struct  GLTFTexture_t2D12B18E729EBA0BBA4A5B51A991297BDFF7CD65  : public GLTFChildOfRootProperty_t162116062E3D11D0057F6780F387ED5EBE6C268C
{
public:
	// GLTF.Schema.SamplerId GLTF.Schema.GLTFTexture::Sampler
	SamplerId_t72B86914DEF9D622B3D7F8CF2812317F81478EF4 * ___Sampler_5;
	// GLTF.Schema.ImageId GLTF.Schema.GLTFTexture::Source
	ImageId_t6B75A8719AF05FF5EF157163A485CAB340DDE68B * ___Source_6;

public:
	inline static int32_t get_offset_of_Sampler_5() { return static_cast<int32_t>(offsetof(GLTFTexture_t2D12B18E729EBA0BBA4A5B51A991297BDFF7CD65, ___Sampler_5)); }
	inline SamplerId_t72B86914DEF9D622B3D7F8CF2812317F81478EF4 * get_Sampler_5() const { return ___Sampler_5; }
	inline SamplerId_t72B86914DEF9D622B3D7F8CF2812317F81478EF4 ** get_address_of_Sampler_5() { return &___Sampler_5; }
	inline void set_Sampler_5(SamplerId_t72B86914DEF9D622B3D7F8CF2812317F81478EF4 * value)
	{
		___Sampler_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Sampler_5), (void*)value);
	}

	inline static int32_t get_offset_of_Source_6() { return static_cast<int32_t>(offsetof(GLTFTexture_t2D12B18E729EBA0BBA4A5B51A991297BDFF7CD65, ___Source_6)); }
	inline ImageId_t6B75A8719AF05FF5EF157163A485CAB340DDE68B * get_Source_6() const { return ___Source_6; }
	inline ImageId_t6B75A8719AF05FF5EF157163A485CAB340DDE68B ** get_address_of_Source_6() { return &___Source_6; }
	inline void set_Source_6(ImageId_t6B75A8719AF05FF5EF157163A485CAB340DDE68B * value)
	{
		___Source_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Source_6), (void*)value);
	}
};


// GLTF.Schema.Skin
struct  Skin_t464B07F248F89DD7228D66EAD836CE5B20BB6F34  : public GLTFChildOfRootProperty_t162116062E3D11D0057F6780F387ED5EBE6C268C
{
public:
	// GLTF.Schema.AccessorId GLTF.Schema.Skin::InverseBindMatrices
	AccessorId_t6C51102D50B95D309D47FD946FE62ED76C16B83F * ___InverseBindMatrices_5;
	// GLTF.Schema.NodeId GLTF.Schema.Skin::Skeleton
	NodeId_tB863E2705852710AA05166CD9250E50B3A9FB8F0 * ___Skeleton_6;
	// System.Collections.Generic.List`1<GLTF.Schema.NodeId> GLTF.Schema.Skin::Joints
	List_1_t1B89882FA16EC868F9405338766EE999CD21DBAD * ___Joints_7;

public:
	inline static int32_t get_offset_of_InverseBindMatrices_5() { return static_cast<int32_t>(offsetof(Skin_t464B07F248F89DD7228D66EAD836CE5B20BB6F34, ___InverseBindMatrices_5)); }
	inline AccessorId_t6C51102D50B95D309D47FD946FE62ED76C16B83F * get_InverseBindMatrices_5() const { return ___InverseBindMatrices_5; }
	inline AccessorId_t6C51102D50B95D309D47FD946FE62ED76C16B83F ** get_address_of_InverseBindMatrices_5() { return &___InverseBindMatrices_5; }
	inline void set_InverseBindMatrices_5(AccessorId_t6C51102D50B95D309D47FD946FE62ED76C16B83F * value)
	{
		___InverseBindMatrices_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___InverseBindMatrices_5), (void*)value);
	}

	inline static int32_t get_offset_of_Skeleton_6() { return static_cast<int32_t>(offsetof(Skin_t464B07F248F89DD7228D66EAD836CE5B20BB6F34, ___Skeleton_6)); }
	inline NodeId_tB863E2705852710AA05166CD9250E50B3A9FB8F0 * get_Skeleton_6() const { return ___Skeleton_6; }
	inline NodeId_tB863E2705852710AA05166CD9250E50B3A9FB8F0 ** get_address_of_Skeleton_6() { return &___Skeleton_6; }
	inline void set_Skeleton_6(NodeId_tB863E2705852710AA05166CD9250E50B3A9FB8F0 * value)
	{
		___Skeleton_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Skeleton_6), (void*)value);
	}

	inline static int32_t get_offset_of_Joints_7() { return static_cast<int32_t>(offsetof(Skin_t464B07F248F89DD7228D66EAD836CE5B20BB6F34, ___Joints_7)); }
	inline List_1_t1B89882FA16EC868F9405338766EE999CD21DBAD * get_Joints_7() const { return ___Joints_7; }
	inline List_1_t1B89882FA16EC868F9405338766EE999CD21DBAD ** get_address_of_Joints_7() { return &___Joints_7; }
	inline void set_Joints_7(List_1_t1B89882FA16EC868F9405338766EE999CD21DBAD * value)
	{
		___Joints_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Joints_7), (void*)value);
	}
};


// System.Delegate
struct  Delegate_t  : public RuntimeObject
{
public:
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject * ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t * ___method_info_7;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t * ___original_method_info_8;
	// System.DelegateData System.Delegate::data
	DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * ___data_9;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_10;

public:
	inline static int32_t get_offset_of_method_ptr_0() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_ptr_0)); }
	inline Il2CppMethodPointer get_method_ptr_0() const { return ___method_ptr_0; }
	inline Il2CppMethodPointer* get_address_of_method_ptr_0() { return &___method_ptr_0; }
	inline void set_method_ptr_0(Il2CppMethodPointer value)
	{
		___method_ptr_0 = value;
	}

	inline static int32_t get_offset_of_invoke_impl_1() { return static_cast<int32_t>(offsetof(Delegate_t, ___invoke_impl_1)); }
	inline intptr_t get_invoke_impl_1() const { return ___invoke_impl_1; }
	inline intptr_t* get_address_of_invoke_impl_1() { return &___invoke_impl_1; }
	inline void set_invoke_impl_1(intptr_t value)
	{
		___invoke_impl_1 = value;
	}

	inline static int32_t get_offset_of_m_target_2() { return static_cast<int32_t>(offsetof(Delegate_t, ___m_target_2)); }
	inline RuntimeObject * get_m_target_2() const { return ___m_target_2; }
	inline RuntimeObject ** get_address_of_m_target_2() { return &___m_target_2; }
	inline void set_m_target_2(RuntimeObject * value)
	{
		___m_target_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_target_2), (void*)value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_3)); }
	inline intptr_t get_method_3() const { return ___method_3; }
	inline intptr_t* get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(intptr_t value)
	{
		___method_3 = value;
	}

	inline static int32_t get_offset_of_delegate_trampoline_4() { return static_cast<int32_t>(offsetof(Delegate_t, ___delegate_trampoline_4)); }
	inline intptr_t get_delegate_trampoline_4() const { return ___delegate_trampoline_4; }
	inline intptr_t* get_address_of_delegate_trampoline_4() { return &___delegate_trampoline_4; }
	inline void set_delegate_trampoline_4(intptr_t value)
	{
		___delegate_trampoline_4 = value;
	}

	inline static int32_t get_offset_of_extra_arg_5() { return static_cast<int32_t>(offsetof(Delegate_t, ___extra_arg_5)); }
	inline intptr_t get_extra_arg_5() const { return ___extra_arg_5; }
	inline intptr_t* get_address_of_extra_arg_5() { return &___extra_arg_5; }
	inline void set_extra_arg_5(intptr_t value)
	{
		___extra_arg_5 = value;
	}

	inline static int32_t get_offset_of_method_code_6() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_code_6)); }
	inline intptr_t get_method_code_6() const { return ___method_code_6; }
	inline intptr_t* get_address_of_method_code_6() { return &___method_code_6; }
	inline void set_method_code_6(intptr_t value)
	{
		___method_code_6 = value;
	}

	inline static int32_t get_offset_of_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_info_7)); }
	inline MethodInfo_t * get_method_info_7() const { return ___method_info_7; }
	inline MethodInfo_t ** get_address_of_method_info_7() { return &___method_info_7; }
	inline void set_method_info_7(MethodInfo_t * value)
	{
		___method_info_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___method_info_7), (void*)value);
	}

	inline static int32_t get_offset_of_original_method_info_8() { return static_cast<int32_t>(offsetof(Delegate_t, ___original_method_info_8)); }
	inline MethodInfo_t * get_original_method_info_8() const { return ___original_method_info_8; }
	inline MethodInfo_t ** get_address_of_original_method_info_8() { return &___original_method_info_8; }
	inline void set_original_method_info_8(MethodInfo_t * value)
	{
		___original_method_info_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___original_method_info_8), (void*)value);
	}

	inline static int32_t get_offset_of_data_9() { return static_cast<int32_t>(offsetof(Delegate_t, ___data_9)); }
	inline DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * get_data_9() const { return ___data_9; }
	inline DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE ** get_address_of_data_9() { return &___data_9; }
	inline void set_data_9(DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * value)
	{
		___data_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___data_9), (void*)value);
	}

	inline static int32_t get_offset_of_method_is_virtual_10() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_is_virtual_10)); }
	inline bool get_method_is_virtual_10() const { return ___method_is_virtual_10; }
	inline bool* get_address_of_method_is_virtual_10() { return &___method_is_virtual_10; }
	inline void set_method_is_virtual_10(bool value)
	{
		___method_is_virtual_10 = value;
	}
};

// Native definition for P/Invoke marshalling of System.Delegate
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * ___data_9;
	int32_t ___method_is_virtual_10;
};
// Native definition for COM marshalling of System.Delegate
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * ___data_9;
	int32_t ___method_is_virtual_10;
};

// System.Exception
struct  Exception_t  : public RuntimeObject
{
public:
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t * ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject * ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject * ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD* ___native_trace_ips_15;

public:
	inline static int32_t get_offset_of__className_1() { return static_cast<int32_t>(offsetof(Exception_t, ____className_1)); }
	inline String_t* get__className_1() const { return ____className_1; }
	inline String_t** get_address_of__className_1() { return &____className_1; }
	inline void set__className_1(String_t* value)
	{
		____className_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____className_1), (void*)value);
	}

	inline static int32_t get_offset_of__message_2() { return static_cast<int32_t>(offsetof(Exception_t, ____message_2)); }
	inline String_t* get__message_2() const { return ____message_2; }
	inline String_t** get_address_of__message_2() { return &____message_2; }
	inline void set__message_2(String_t* value)
	{
		____message_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____message_2), (void*)value);
	}

	inline static int32_t get_offset_of__data_3() { return static_cast<int32_t>(offsetof(Exception_t, ____data_3)); }
	inline RuntimeObject* get__data_3() const { return ____data_3; }
	inline RuntimeObject** get_address_of__data_3() { return &____data_3; }
	inline void set__data_3(RuntimeObject* value)
	{
		____data_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____data_3), (void*)value);
	}

	inline static int32_t get_offset_of__innerException_4() { return static_cast<int32_t>(offsetof(Exception_t, ____innerException_4)); }
	inline Exception_t * get__innerException_4() const { return ____innerException_4; }
	inline Exception_t ** get_address_of__innerException_4() { return &____innerException_4; }
	inline void set__innerException_4(Exception_t * value)
	{
		____innerException_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____innerException_4), (void*)value);
	}

	inline static int32_t get_offset_of__helpURL_5() { return static_cast<int32_t>(offsetof(Exception_t, ____helpURL_5)); }
	inline String_t* get__helpURL_5() const { return ____helpURL_5; }
	inline String_t** get_address_of__helpURL_5() { return &____helpURL_5; }
	inline void set__helpURL_5(String_t* value)
	{
		____helpURL_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____helpURL_5), (void*)value);
	}

	inline static int32_t get_offset_of__stackTrace_6() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTrace_6)); }
	inline RuntimeObject * get__stackTrace_6() const { return ____stackTrace_6; }
	inline RuntimeObject ** get_address_of__stackTrace_6() { return &____stackTrace_6; }
	inline void set__stackTrace_6(RuntimeObject * value)
	{
		____stackTrace_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTrace_6), (void*)value);
	}

	inline static int32_t get_offset_of__stackTraceString_7() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTraceString_7)); }
	inline String_t* get__stackTraceString_7() const { return ____stackTraceString_7; }
	inline String_t** get_address_of__stackTraceString_7() { return &____stackTraceString_7; }
	inline void set__stackTraceString_7(String_t* value)
	{
		____stackTraceString_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTraceString_7), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_8() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackTraceString_8)); }
	inline String_t* get__remoteStackTraceString_8() const { return ____remoteStackTraceString_8; }
	inline String_t** get_address_of__remoteStackTraceString_8() { return &____remoteStackTraceString_8; }
	inline void set__remoteStackTraceString_8(String_t* value)
	{
		____remoteStackTraceString_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____remoteStackTraceString_8), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackIndex_9() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackIndex_9)); }
	inline int32_t get__remoteStackIndex_9() const { return ____remoteStackIndex_9; }
	inline int32_t* get_address_of__remoteStackIndex_9() { return &____remoteStackIndex_9; }
	inline void set__remoteStackIndex_9(int32_t value)
	{
		____remoteStackIndex_9 = value;
	}

	inline static int32_t get_offset_of__dynamicMethods_10() { return static_cast<int32_t>(offsetof(Exception_t, ____dynamicMethods_10)); }
	inline RuntimeObject * get__dynamicMethods_10() const { return ____dynamicMethods_10; }
	inline RuntimeObject ** get_address_of__dynamicMethods_10() { return &____dynamicMethods_10; }
	inline void set__dynamicMethods_10(RuntimeObject * value)
	{
		____dynamicMethods_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____dynamicMethods_10), (void*)value);
	}

	inline static int32_t get_offset_of__HResult_11() { return static_cast<int32_t>(offsetof(Exception_t, ____HResult_11)); }
	inline int32_t get__HResult_11() const { return ____HResult_11; }
	inline int32_t* get_address_of__HResult_11() { return &____HResult_11; }
	inline void set__HResult_11(int32_t value)
	{
		____HResult_11 = value;
	}

	inline static int32_t get_offset_of__source_12() { return static_cast<int32_t>(offsetof(Exception_t, ____source_12)); }
	inline String_t* get__source_12() const { return ____source_12; }
	inline String_t** get_address_of__source_12() { return &____source_12; }
	inline void set__source_12(String_t* value)
	{
		____source_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____source_12), (void*)value);
	}

	inline static int32_t get_offset_of__safeSerializationManager_13() { return static_cast<int32_t>(offsetof(Exception_t, ____safeSerializationManager_13)); }
	inline SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * get__safeSerializationManager_13() const { return ____safeSerializationManager_13; }
	inline SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 ** get_address_of__safeSerializationManager_13() { return &____safeSerializationManager_13; }
	inline void set__safeSerializationManager_13(SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * value)
	{
		____safeSerializationManager_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____safeSerializationManager_13), (void*)value);
	}

	inline static int32_t get_offset_of_captured_traces_14() { return static_cast<int32_t>(offsetof(Exception_t, ___captured_traces_14)); }
	inline StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* get_captured_traces_14() const { return ___captured_traces_14; }
	inline StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196** get_address_of_captured_traces_14() { return &___captured_traces_14; }
	inline void set_captured_traces_14(StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* value)
	{
		___captured_traces_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___captured_traces_14), (void*)value);
	}

	inline static int32_t get_offset_of_native_trace_ips_15() { return static_cast<int32_t>(offsetof(Exception_t, ___native_trace_ips_15)); }
	inline IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD* get_native_trace_ips_15() const { return ___native_trace_ips_15; }
	inline IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD** get_address_of_native_trace_ips_15() { return &___native_trace_ips_15; }
	inline void set_native_trace_ips_15(IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD* value)
	{
		___native_trace_ips_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___native_trace_ips_15), (void*)value);
	}
};

struct Exception_t_StaticFields
{
public:
	// System.Object System.Exception::s_EDILock
	RuntimeObject * ___s_EDILock_0;

public:
	inline static int32_t get_offset_of_s_EDILock_0() { return static_cast<int32_t>(offsetof(Exception_t_StaticFields, ___s_EDILock_0)); }
	inline RuntimeObject * get_s_EDILock_0() const { return ___s_EDILock_0; }
	inline RuntimeObject ** get_address_of_s_EDILock_0() { return &___s_EDILock_0; }
	inline void set_s_EDILock_0(RuntimeObject * value)
	{
		___s_EDILock_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_EDILock_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Exception
struct Exception_t_marshaled_pinvoke
{
	char* ____className_1;
	char* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_pinvoke* ____innerException_4;
	char* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	char* ____stackTraceString_7;
	char* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	char* ____source_12;
	SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * ____safeSerializationManager_13;
	StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
};
// Native definition for COM marshalling of System.Exception
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className_1;
	Il2CppChar* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_com* ____innerException_4;
	Il2CppChar* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	Il2CppChar* ____stackTraceString_7;
	Il2CppChar* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	Il2CppChar* ____source_12;
	SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * ____safeSerializationManager_13;
	StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
};

// System.IO.FileAccess
struct  FileAccess_t31950F3A853EAE886AC8F13EA7FC03A3EB46E3F6 
{
public:
	// System.Int32 System.IO.FileAccess::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(FileAccess_t31950F3A853EAE886AC8F13EA7FC03A3EB46E3F6, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.IO.MemoryStream
struct  MemoryStream_t495F44B85E6B4DDE2BB7E17DE963256A74E2298C  : public Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7
{
public:
	// System.Byte[] System.IO.MemoryStream::_buffer
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ____buffer_5;
	// System.Int32 System.IO.MemoryStream::_origin
	int32_t ____origin_6;
	// System.Int32 System.IO.MemoryStream::_position
	int32_t ____position_7;
	// System.Int32 System.IO.MemoryStream::_length
	int32_t ____length_8;
	// System.Int32 System.IO.MemoryStream::_capacity
	int32_t ____capacity_9;
	// System.Boolean System.IO.MemoryStream::_expandable
	bool ____expandable_10;
	// System.Boolean System.IO.MemoryStream::_writable
	bool ____writable_11;
	// System.Boolean System.IO.MemoryStream::_exposable
	bool ____exposable_12;
	// System.Boolean System.IO.MemoryStream::_isOpen
	bool ____isOpen_13;
	// System.Threading.Tasks.Task`1<System.Int32> System.IO.MemoryStream::_lastReadTask
	Task_1_t640F0CBB720BB9CD14B90B7B81624471A9F56D87 * ____lastReadTask_14;

public:
	inline static int32_t get_offset_of__buffer_5() { return static_cast<int32_t>(offsetof(MemoryStream_t495F44B85E6B4DDE2BB7E17DE963256A74E2298C, ____buffer_5)); }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* get__buffer_5() const { return ____buffer_5; }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** get_address_of__buffer_5() { return &____buffer_5; }
	inline void set__buffer_5(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* value)
	{
		____buffer_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____buffer_5), (void*)value);
	}

	inline static int32_t get_offset_of__origin_6() { return static_cast<int32_t>(offsetof(MemoryStream_t495F44B85E6B4DDE2BB7E17DE963256A74E2298C, ____origin_6)); }
	inline int32_t get__origin_6() const { return ____origin_6; }
	inline int32_t* get_address_of__origin_6() { return &____origin_6; }
	inline void set__origin_6(int32_t value)
	{
		____origin_6 = value;
	}

	inline static int32_t get_offset_of__position_7() { return static_cast<int32_t>(offsetof(MemoryStream_t495F44B85E6B4DDE2BB7E17DE963256A74E2298C, ____position_7)); }
	inline int32_t get__position_7() const { return ____position_7; }
	inline int32_t* get_address_of__position_7() { return &____position_7; }
	inline void set__position_7(int32_t value)
	{
		____position_7 = value;
	}

	inline static int32_t get_offset_of__length_8() { return static_cast<int32_t>(offsetof(MemoryStream_t495F44B85E6B4DDE2BB7E17DE963256A74E2298C, ____length_8)); }
	inline int32_t get__length_8() const { return ____length_8; }
	inline int32_t* get_address_of__length_8() { return &____length_8; }
	inline void set__length_8(int32_t value)
	{
		____length_8 = value;
	}

	inline static int32_t get_offset_of__capacity_9() { return static_cast<int32_t>(offsetof(MemoryStream_t495F44B85E6B4DDE2BB7E17DE963256A74E2298C, ____capacity_9)); }
	inline int32_t get__capacity_9() const { return ____capacity_9; }
	inline int32_t* get_address_of__capacity_9() { return &____capacity_9; }
	inline void set__capacity_9(int32_t value)
	{
		____capacity_9 = value;
	}

	inline static int32_t get_offset_of__expandable_10() { return static_cast<int32_t>(offsetof(MemoryStream_t495F44B85E6B4DDE2BB7E17DE963256A74E2298C, ____expandable_10)); }
	inline bool get__expandable_10() const { return ____expandable_10; }
	inline bool* get_address_of__expandable_10() { return &____expandable_10; }
	inline void set__expandable_10(bool value)
	{
		____expandable_10 = value;
	}

	inline static int32_t get_offset_of__writable_11() { return static_cast<int32_t>(offsetof(MemoryStream_t495F44B85E6B4DDE2BB7E17DE963256A74E2298C, ____writable_11)); }
	inline bool get__writable_11() const { return ____writable_11; }
	inline bool* get_address_of__writable_11() { return &____writable_11; }
	inline void set__writable_11(bool value)
	{
		____writable_11 = value;
	}

	inline static int32_t get_offset_of__exposable_12() { return static_cast<int32_t>(offsetof(MemoryStream_t495F44B85E6B4DDE2BB7E17DE963256A74E2298C, ____exposable_12)); }
	inline bool get__exposable_12() const { return ____exposable_12; }
	inline bool* get_address_of__exposable_12() { return &____exposable_12; }
	inline void set__exposable_12(bool value)
	{
		____exposable_12 = value;
	}

	inline static int32_t get_offset_of__isOpen_13() { return static_cast<int32_t>(offsetof(MemoryStream_t495F44B85E6B4DDE2BB7E17DE963256A74E2298C, ____isOpen_13)); }
	inline bool get__isOpen_13() const { return ____isOpen_13; }
	inline bool* get_address_of__isOpen_13() { return &____isOpen_13; }
	inline void set__isOpen_13(bool value)
	{
		____isOpen_13 = value;
	}

	inline static int32_t get_offset_of__lastReadTask_14() { return static_cast<int32_t>(offsetof(MemoryStream_t495F44B85E6B4DDE2BB7E17DE963256A74E2298C, ____lastReadTask_14)); }
	inline Task_1_t640F0CBB720BB9CD14B90B7B81624471A9F56D87 * get__lastReadTask_14() const { return ____lastReadTask_14; }
	inline Task_1_t640F0CBB720BB9CD14B90B7B81624471A9F56D87 ** get_address_of__lastReadTask_14() { return &____lastReadTask_14; }
	inline void set__lastReadTask_14(Task_1_t640F0CBB720BB9CD14B90B7B81624471A9F56D87 * value)
	{
		____lastReadTask_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____lastReadTask_14), (void*)value);
	}
};


// System.Net.Http.Headers.HttpHeaderKind
struct  HttpHeaderKind_tB1DD187D27BCE76C6EC20628350D06F1802F9F97 
{
public:
	// System.Int32 System.Net.Http.Headers.HttpHeaderKind::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(HttpHeaderKind_tB1DD187D27BCE76C6EC20628350D06F1802F9F97, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Net.HttpStatusCode
struct  HttpStatusCode_tEEC31491D56EE5BDB252F07906878274FD22AC0C 
{
public:
	// System.Int32 System.Net.HttpStatusCode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(HttpStatusCode_tEEC31491D56EE5BDB252F07906878274FD22AC0C, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Net.Security.SslPolicyErrors
struct  SslPolicyErrors_tD39D8AA1FDBFBC6745122C5A899F10A1C9258671 
{
public:
	// System.Int32 System.Net.Security.SslPolicyErrors::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SslPolicyErrors_tD39D8AA1FDBFBC6745122C5A899F10A1C9258671, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.IO.Stream>
struct  AsyncTaskMethodBuilder_1_t629F383EABB1E23F4CFEEA0B7A1783E79CB8EF9C 
{
public:
	// System.Runtime.CompilerServices.AsyncMethodBuilderCore System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_coreState
	AsyncMethodBuilderCore_t4CE6C1E4B0621A6EC45CF6E0E8F1F633FFF9FF01  ___m_coreState_1;
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_task
	Task_1_tAA7557E5A6A8B2C89E44907CB5B0502A618E9D01 * ___m_task_2;

public:
	inline static int32_t get_offset_of_m_coreState_1() { return static_cast<int32_t>(offsetof(AsyncTaskMethodBuilder_1_t629F383EABB1E23F4CFEEA0B7A1783E79CB8EF9C, ___m_coreState_1)); }
	inline AsyncMethodBuilderCore_t4CE6C1E4B0621A6EC45CF6E0E8F1F633FFF9FF01  get_m_coreState_1() const { return ___m_coreState_1; }
	inline AsyncMethodBuilderCore_t4CE6C1E4B0621A6EC45CF6E0E8F1F633FFF9FF01 * get_address_of_m_coreState_1() { return &___m_coreState_1; }
	inline void set_m_coreState_1(AsyncMethodBuilderCore_t4CE6C1E4B0621A6EC45CF6E0E8F1F633FFF9FF01  value)
	{
		___m_coreState_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_task_2() { return static_cast<int32_t>(offsetof(AsyncTaskMethodBuilder_1_t629F383EABB1E23F4CFEEA0B7A1783E79CB8EF9C, ___m_task_2)); }
	inline Task_1_tAA7557E5A6A8B2C89E44907CB5B0502A618E9D01 * get_m_task_2() const { return ___m_task_2; }
	inline Task_1_tAA7557E5A6A8B2C89E44907CB5B0502A618E9D01 ** get_address_of_m_task_2() { return &___m_task_2; }
	inline void set_m_task_2(Task_1_tAA7557E5A6A8B2C89E44907CB5B0502A618E9D01 * value)
	{
		___m_task_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_task_2), (void*)value);
	}
};

struct AsyncTaskMethodBuilder_1_t629F383EABB1E23F4CFEEA0B7A1783E79CB8EF9C_StaticFields
{
public:
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::s_defaultResultTask
	Task_1_tAA7557E5A6A8B2C89E44907CB5B0502A618E9D01 * ___s_defaultResultTask_0;

public:
	inline static int32_t get_offset_of_s_defaultResultTask_0() { return static_cast<int32_t>(offsetof(AsyncTaskMethodBuilder_1_t629F383EABB1E23F4CFEEA0B7A1783E79CB8EF9C_StaticFields, ___s_defaultResultTask_0)); }
	inline Task_1_tAA7557E5A6A8B2C89E44907CB5B0502A618E9D01 * get_s_defaultResultTask_0() const { return ___s_defaultResultTask_0; }
	inline Task_1_tAA7557E5A6A8B2C89E44907CB5B0502A618E9D01 ** get_address_of_s_defaultResultTask_0() { return &___s_defaultResultTask_0; }
	inline void set_s_defaultResultTask_0(Task_1_tAA7557E5A6A8B2C89E44907CB5B0502A618E9D01 * value)
	{
		___s_defaultResultTask_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_defaultResultTask_0), (void*)value);
	}
};


// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>
struct  AsyncTaskMethodBuilder_1_t2A9513A084F4B19851B91EF1F22BB57776D35663 
{
public:
	// System.Runtime.CompilerServices.AsyncMethodBuilderCore System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_coreState
	AsyncMethodBuilderCore_t4CE6C1E4B0621A6EC45CF6E0E8F1F633FFF9FF01  ___m_coreState_1;
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_task
	Task_1_tA56001ED5270173CA1432EDFCD84EABB1024BC09 * ___m_task_2;

public:
	inline static int32_t get_offset_of_m_coreState_1() { return static_cast<int32_t>(offsetof(AsyncTaskMethodBuilder_1_t2A9513A084F4B19851B91EF1F22BB57776D35663, ___m_coreState_1)); }
	inline AsyncMethodBuilderCore_t4CE6C1E4B0621A6EC45CF6E0E8F1F633FFF9FF01  get_m_coreState_1() const { return ___m_coreState_1; }
	inline AsyncMethodBuilderCore_t4CE6C1E4B0621A6EC45CF6E0E8F1F633FFF9FF01 * get_address_of_m_coreState_1() { return &___m_coreState_1; }
	inline void set_m_coreState_1(AsyncMethodBuilderCore_t4CE6C1E4B0621A6EC45CF6E0E8F1F633FFF9FF01  value)
	{
		___m_coreState_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_task_2() { return static_cast<int32_t>(offsetof(AsyncTaskMethodBuilder_1_t2A9513A084F4B19851B91EF1F22BB57776D35663, ___m_task_2)); }
	inline Task_1_tA56001ED5270173CA1432EDFCD84EABB1024BC09 * get_m_task_2() const { return ___m_task_2; }
	inline Task_1_tA56001ED5270173CA1432EDFCD84EABB1024BC09 ** get_address_of_m_task_2() { return &___m_task_2; }
	inline void set_m_task_2(Task_1_tA56001ED5270173CA1432EDFCD84EABB1024BC09 * value)
	{
		___m_task_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_task_2), (void*)value);
	}
};

struct AsyncTaskMethodBuilder_1_t2A9513A084F4B19851B91EF1F22BB57776D35663_StaticFields
{
public:
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::s_defaultResultTask
	Task_1_tA56001ED5270173CA1432EDFCD84EABB1024BC09 * ___s_defaultResultTask_0;

public:
	inline static int32_t get_offset_of_s_defaultResultTask_0() { return static_cast<int32_t>(offsetof(AsyncTaskMethodBuilder_1_t2A9513A084F4B19851B91EF1F22BB57776D35663_StaticFields, ___s_defaultResultTask_0)); }
	inline Task_1_tA56001ED5270173CA1432EDFCD84EABB1024BC09 * get_s_defaultResultTask_0() const { return ___s_defaultResultTask_0; }
	inline Task_1_tA56001ED5270173CA1432EDFCD84EABB1024BC09 ** get_address_of_s_defaultResultTask_0() { return &___s_defaultResultTask_0; }
	inline void set_s_defaultResultTask_0(Task_1_tA56001ED5270173CA1432EDFCD84EABB1024BC09 * value)
	{
		___s_defaultResultTask_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_defaultResultTask_0), (void*)value);
	}
};


// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Threading.Tasks.VoidTaskResult>
struct  AsyncTaskMethodBuilder_1_t66ED1808B26B8081A2804D6A750D13386E360BD9 
{
public:
	// System.Runtime.CompilerServices.AsyncMethodBuilderCore System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_coreState
	AsyncMethodBuilderCore_t4CE6C1E4B0621A6EC45CF6E0E8F1F633FFF9FF01  ___m_coreState_1;
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_task
	Task_1_t1359D75350E9D976BFA28AD96E417450DE277673 * ___m_task_2;

public:
	inline static int32_t get_offset_of_m_coreState_1() { return static_cast<int32_t>(offsetof(AsyncTaskMethodBuilder_1_t66ED1808B26B8081A2804D6A750D13386E360BD9, ___m_coreState_1)); }
	inline AsyncMethodBuilderCore_t4CE6C1E4B0621A6EC45CF6E0E8F1F633FFF9FF01  get_m_coreState_1() const { return ___m_coreState_1; }
	inline AsyncMethodBuilderCore_t4CE6C1E4B0621A6EC45CF6E0E8F1F633FFF9FF01 * get_address_of_m_coreState_1() { return &___m_coreState_1; }
	inline void set_m_coreState_1(AsyncMethodBuilderCore_t4CE6C1E4B0621A6EC45CF6E0E8F1F633FFF9FF01  value)
	{
		___m_coreState_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_task_2() { return static_cast<int32_t>(offsetof(AsyncTaskMethodBuilder_1_t66ED1808B26B8081A2804D6A750D13386E360BD9, ___m_task_2)); }
	inline Task_1_t1359D75350E9D976BFA28AD96E417450DE277673 * get_m_task_2() const { return ___m_task_2; }
	inline Task_1_t1359D75350E9D976BFA28AD96E417450DE277673 ** get_address_of_m_task_2() { return &___m_task_2; }
	inline void set_m_task_2(Task_1_t1359D75350E9D976BFA28AD96E417450DE277673 * value)
	{
		___m_task_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_task_2), (void*)value);
	}
};

struct AsyncTaskMethodBuilder_1_t66ED1808B26B8081A2804D6A750D13386E360BD9_StaticFields
{
public:
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::s_defaultResultTask
	Task_1_t1359D75350E9D976BFA28AD96E417450DE277673 * ___s_defaultResultTask_0;

public:
	inline static int32_t get_offset_of_s_defaultResultTask_0() { return static_cast<int32_t>(offsetof(AsyncTaskMethodBuilder_1_t66ED1808B26B8081A2804D6A750D13386E360BD9_StaticFields, ___s_defaultResultTask_0)); }
	inline Task_1_t1359D75350E9D976BFA28AD96E417450DE277673 * get_s_defaultResultTask_0() const { return ___s_defaultResultTask_0; }
	inline Task_1_t1359D75350E9D976BFA28AD96E417450DE277673 ** get_address_of_s_defaultResultTask_0() { return &___s_defaultResultTask_0; }
	inline void set_s_defaultResultTask_0(Task_1_t1359D75350E9D976BFA28AD96E417450DE277673 * value)
	{
		___s_defaultResultTask_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_defaultResultTask_0), (void*)value);
	}
};


// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<UnityEngine.Material>
struct  AsyncTaskMethodBuilder_1_tC7219A08BD3DD7AA457D88CB3FC2B69ABBED2A73 
{
public:
	// System.Runtime.CompilerServices.AsyncMethodBuilderCore System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_coreState
	AsyncMethodBuilderCore_t4CE6C1E4B0621A6EC45CF6E0E8F1F633FFF9FF01  ___m_coreState_1;
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_task
	Task_1_t74879D22F3CC6429D4D6FCC94A7597CE737CB1DA * ___m_task_2;

public:
	inline static int32_t get_offset_of_m_coreState_1() { return static_cast<int32_t>(offsetof(AsyncTaskMethodBuilder_1_tC7219A08BD3DD7AA457D88CB3FC2B69ABBED2A73, ___m_coreState_1)); }
	inline AsyncMethodBuilderCore_t4CE6C1E4B0621A6EC45CF6E0E8F1F633FFF9FF01  get_m_coreState_1() const { return ___m_coreState_1; }
	inline AsyncMethodBuilderCore_t4CE6C1E4B0621A6EC45CF6E0E8F1F633FFF9FF01 * get_address_of_m_coreState_1() { return &___m_coreState_1; }
	inline void set_m_coreState_1(AsyncMethodBuilderCore_t4CE6C1E4B0621A6EC45CF6E0E8F1F633FFF9FF01  value)
	{
		___m_coreState_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_task_2() { return static_cast<int32_t>(offsetof(AsyncTaskMethodBuilder_1_tC7219A08BD3DD7AA457D88CB3FC2B69ABBED2A73, ___m_task_2)); }
	inline Task_1_t74879D22F3CC6429D4D6FCC94A7597CE737CB1DA * get_m_task_2() const { return ___m_task_2; }
	inline Task_1_t74879D22F3CC6429D4D6FCC94A7597CE737CB1DA ** get_address_of_m_task_2() { return &___m_task_2; }
	inline void set_m_task_2(Task_1_t74879D22F3CC6429D4D6FCC94A7597CE737CB1DA * value)
	{
		___m_task_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_task_2), (void*)value);
	}
};

struct AsyncTaskMethodBuilder_1_tC7219A08BD3DD7AA457D88CB3FC2B69ABBED2A73_StaticFields
{
public:
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::s_defaultResultTask
	Task_1_t74879D22F3CC6429D4D6FCC94A7597CE737CB1DA * ___s_defaultResultTask_0;

public:
	inline static int32_t get_offset_of_s_defaultResultTask_0() { return static_cast<int32_t>(offsetof(AsyncTaskMethodBuilder_1_tC7219A08BD3DD7AA457D88CB3FC2B69ABBED2A73_StaticFields, ___s_defaultResultTask_0)); }
	inline Task_1_t74879D22F3CC6429D4D6FCC94A7597CE737CB1DA * get_s_defaultResultTask_0() const { return ___s_defaultResultTask_0; }
	inline Task_1_t74879D22F3CC6429D4D6FCC94A7597CE737CB1DA ** get_address_of_s_defaultResultTask_0() { return &___s_defaultResultTask_0; }
	inline void set_s_defaultResultTask_0(Task_1_t74879D22F3CC6429D4D6FCC94A7597CE737CB1DA * value)
	{
		___s_defaultResultTask_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_defaultResultTask_0), (void*)value);
	}
};


// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<UnityEngine.Mesh>
struct  AsyncTaskMethodBuilder_1_t50EB7C4D84FEBBDF5495A2EE38949E9E10E51791 
{
public:
	// System.Runtime.CompilerServices.AsyncMethodBuilderCore System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_coreState
	AsyncMethodBuilderCore_t4CE6C1E4B0621A6EC45CF6E0E8F1F633FFF9FF01  ___m_coreState_1;
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_task
	Task_1_tF3C52637D7C212377E29F98D2AD11BBD43732A2B * ___m_task_2;

public:
	inline static int32_t get_offset_of_m_coreState_1() { return static_cast<int32_t>(offsetof(AsyncTaskMethodBuilder_1_t50EB7C4D84FEBBDF5495A2EE38949E9E10E51791, ___m_coreState_1)); }
	inline AsyncMethodBuilderCore_t4CE6C1E4B0621A6EC45CF6E0E8F1F633FFF9FF01  get_m_coreState_1() const { return ___m_coreState_1; }
	inline AsyncMethodBuilderCore_t4CE6C1E4B0621A6EC45CF6E0E8F1F633FFF9FF01 * get_address_of_m_coreState_1() { return &___m_coreState_1; }
	inline void set_m_coreState_1(AsyncMethodBuilderCore_t4CE6C1E4B0621A6EC45CF6E0E8F1F633FFF9FF01  value)
	{
		___m_coreState_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_task_2() { return static_cast<int32_t>(offsetof(AsyncTaskMethodBuilder_1_t50EB7C4D84FEBBDF5495A2EE38949E9E10E51791, ___m_task_2)); }
	inline Task_1_tF3C52637D7C212377E29F98D2AD11BBD43732A2B * get_m_task_2() const { return ___m_task_2; }
	inline Task_1_tF3C52637D7C212377E29F98D2AD11BBD43732A2B ** get_address_of_m_task_2() { return &___m_task_2; }
	inline void set_m_task_2(Task_1_tF3C52637D7C212377E29F98D2AD11BBD43732A2B * value)
	{
		___m_task_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_task_2), (void*)value);
	}
};

struct AsyncTaskMethodBuilder_1_t50EB7C4D84FEBBDF5495A2EE38949E9E10E51791_StaticFields
{
public:
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::s_defaultResultTask
	Task_1_tF3C52637D7C212377E29F98D2AD11BBD43732A2B * ___s_defaultResultTask_0;

public:
	inline static int32_t get_offset_of_s_defaultResultTask_0() { return static_cast<int32_t>(offsetof(AsyncTaskMethodBuilder_1_t50EB7C4D84FEBBDF5495A2EE38949E9E10E51791_StaticFields, ___s_defaultResultTask_0)); }
	inline Task_1_tF3C52637D7C212377E29F98D2AD11BBD43732A2B * get_s_defaultResultTask_0() const { return ___s_defaultResultTask_0; }
	inline Task_1_tF3C52637D7C212377E29F98D2AD11BBD43732A2B ** get_address_of_s_defaultResultTask_0() { return &___s_defaultResultTask_0; }
	inline void set_s_defaultResultTask_0(Task_1_tF3C52637D7C212377E29F98D2AD11BBD43732A2B * value)
	{
		___s_defaultResultTask_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_defaultResultTask_0), (void*)value);
	}
};


// System.Runtime.Serialization.StreamingContextStates
struct  StreamingContextStates_t6D16CD7BC584A66A29B702F5FD59DF62BB1BDD3F 
{
public:
	// System.Int32 System.Runtime.Serialization.StreamingContextStates::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(StreamingContextStates_t6D16CD7BC584A66A29B702F5FD59DF62BB1BDD3F, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Security.Cryptography.X509Certificates.X509ChainStatusFlags
struct  X509ChainStatusFlags_t208E1E90A6014521B09653B6B237D045A8573E5B 
{
public:
	// System.Int32 System.Security.Cryptography.X509Certificates.X509ChainStatusFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(X509ChainStatusFlags_t208E1E90A6014521B09653B6B237D045A8573E5B, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Security.Cryptography.X509Certificates.X509RevocationFlag
struct  X509RevocationFlag_t8BF7FE53641A7A3C406E86857F3C80F0E25C3F4A 
{
public:
	// System.Int32 System.Security.Cryptography.X509Certificates.X509RevocationFlag::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(X509RevocationFlag_t8BF7FE53641A7A3C406E86857F3C80F0E25C3F4A, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Security.Cryptography.X509Certificates.X509RevocationMode
struct  X509RevocationMode_tEFEA8C7147423CC3363A4AF504853BD054A33BE7 
{
public:
	// System.Int32 System.Security.Cryptography.X509Certificates.X509RevocationMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(X509RevocationMode_tEFEA8C7147423CC3363A4AF504853BD054A33BE7, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Security.Cryptography.X509Certificates.X509VerificationFlags
struct  X509VerificationFlags_t145010CF6C45EE6563E0874B82C2555025F7A20B 
{
public:
	// System.Int32 System.Security.Cryptography.X509Certificates.X509VerificationFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(X509VerificationFlags_t145010CF6C45EE6563E0874B82C2555025F7A20B, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Threading.CancellationTokenSource
struct  CancellationTokenSource_tF480B7E74A032667AFBD31F0530D619FB43AD3FE  : public RuntimeObject
{
public:
	// System.Threading.ManualResetEvent modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.CancellationTokenSource::m_kernelEvent
	ManualResetEvent_tDFAF117B200ECA4CCF4FD09593F949A016D55408 * ___m_kernelEvent_3;
	// System.Threading.SparselyPopulatedArray`1<System.Threading.CancellationCallbackInfo>[] modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.CancellationTokenSource::m_registeredCallbacksLists
	SparselyPopulatedArray_1U5BU5D_tF1A5F348104DB1ECF18799250B41740FCAA77813* ___m_registeredCallbacksLists_4;
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.CancellationTokenSource::m_state
	int32_t ___m_state_9;
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.CancellationTokenSource::m_threadIDExecutingCallbacks
	int32_t ___m_threadIDExecutingCallbacks_10;
	// System.Boolean System.Threading.CancellationTokenSource::m_disposed
	bool ___m_disposed_11;
	// System.Threading.CancellationTokenRegistration[] System.Threading.CancellationTokenSource::m_linkingRegistrations
	CancellationTokenRegistrationU5BU5D_t4B36771A6344CFC66696BB16419C664E286DAF1B* ___m_linkingRegistrations_12;
	// System.Threading.CancellationCallbackInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.CancellationTokenSource::m_executingCallback
	CancellationCallbackInfo_t8CDEA0AA9C9D1A2321FE2F88878F4B5E0901CF36 * ___m_executingCallback_14;
	// System.Threading.Timer modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.CancellationTokenSource::m_timer
	Timer_t67FAB8E41573B4FA09CA56AE30725AF4297C2553 * ___m_timer_15;

public:
	inline static int32_t get_offset_of_m_kernelEvent_3() { return static_cast<int32_t>(offsetof(CancellationTokenSource_tF480B7E74A032667AFBD31F0530D619FB43AD3FE, ___m_kernelEvent_3)); }
	inline ManualResetEvent_tDFAF117B200ECA4CCF4FD09593F949A016D55408 * get_m_kernelEvent_3() const { return ___m_kernelEvent_3; }
	inline ManualResetEvent_tDFAF117B200ECA4CCF4FD09593F949A016D55408 ** get_address_of_m_kernelEvent_3() { return &___m_kernelEvent_3; }
	inline void set_m_kernelEvent_3(ManualResetEvent_tDFAF117B200ECA4CCF4FD09593F949A016D55408 * value)
	{
		___m_kernelEvent_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_kernelEvent_3), (void*)value);
	}

	inline static int32_t get_offset_of_m_registeredCallbacksLists_4() { return static_cast<int32_t>(offsetof(CancellationTokenSource_tF480B7E74A032667AFBD31F0530D619FB43AD3FE, ___m_registeredCallbacksLists_4)); }
	inline SparselyPopulatedArray_1U5BU5D_tF1A5F348104DB1ECF18799250B41740FCAA77813* get_m_registeredCallbacksLists_4() const { return ___m_registeredCallbacksLists_4; }
	inline SparselyPopulatedArray_1U5BU5D_tF1A5F348104DB1ECF18799250B41740FCAA77813** get_address_of_m_registeredCallbacksLists_4() { return &___m_registeredCallbacksLists_4; }
	inline void set_m_registeredCallbacksLists_4(SparselyPopulatedArray_1U5BU5D_tF1A5F348104DB1ECF18799250B41740FCAA77813* value)
	{
		___m_registeredCallbacksLists_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_registeredCallbacksLists_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_state_9() { return static_cast<int32_t>(offsetof(CancellationTokenSource_tF480B7E74A032667AFBD31F0530D619FB43AD3FE, ___m_state_9)); }
	inline int32_t get_m_state_9() const { return ___m_state_9; }
	inline int32_t* get_address_of_m_state_9() { return &___m_state_9; }
	inline void set_m_state_9(int32_t value)
	{
		___m_state_9 = value;
	}

	inline static int32_t get_offset_of_m_threadIDExecutingCallbacks_10() { return static_cast<int32_t>(offsetof(CancellationTokenSource_tF480B7E74A032667AFBD31F0530D619FB43AD3FE, ___m_threadIDExecutingCallbacks_10)); }
	inline int32_t get_m_threadIDExecutingCallbacks_10() const { return ___m_threadIDExecutingCallbacks_10; }
	inline int32_t* get_address_of_m_threadIDExecutingCallbacks_10() { return &___m_threadIDExecutingCallbacks_10; }
	inline void set_m_threadIDExecutingCallbacks_10(int32_t value)
	{
		___m_threadIDExecutingCallbacks_10 = value;
	}

	inline static int32_t get_offset_of_m_disposed_11() { return static_cast<int32_t>(offsetof(CancellationTokenSource_tF480B7E74A032667AFBD31F0530D619FB43AD3FE, ___m_disposed_11)); }
	inline bool get_m_disposed_11() const { return ___m_disposed_11; }
	inline bool* get_address_of_m_disposed_11() { return &___m_disposed_11; }
	inline void set_m_disposed_11(bool value)
	{
		___m_disposed_11 = value;
	}

	inline static int32_t get_offset_of_m_linkingRegistrations_12() { return static_cast<int32_t>(offsetof(CancellationTokenSource_tF480B7E74A032667AFBD31F0530D619FB43AD3FE, ___m_linkingRegistrations_12)); }
	inline CancellationTokenRegistrationU5BU5D_t4B36771A6344CFC66696BB16419C664E286DAF1B* get_m_linkingRegistrations_12() const { return ___m_linkingRegistrations_12; }
	inline CancellationTokenRegistrationU5BU5D_t4B36771A6344CFC66696BB16419C664E286DAF1B** get_address_of_m_linkingRegistrations_12() { return &___m_linkingRegistrations_12; }
	inline void set_m_linkingRegistrations_12(CancellationTokenRegistrationU5BU5D_t4B36771A6344CFC66696BB16419C664E286DAF1B* value)
	{
		___m_linkingRegistrations_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_linkingRegistrations_12), (void*)value);
	}

	inline static int32_t get_offset_of_m_executingCallback_14() { return static_cast<int32_t>(offsetof(CancellationTokenSource_tF480B7E74A032667AFBD31F0530D619FB43AD3FE, ___m_executingCallback_14)); }
	inline CancellationCallbackInfo_t8CDEA0AA9C9D1A2321FE2F88878F4B5E0901CF36 * get_m_executingCallback_14() const { return ___m_executingCallback_14; }
	inline CancellationCallbackInfo_t8CDEA0AA9C9D1A2321FE2F88878F4B5E0901CF36 ** get_address_of_m_executingCallback_14() { return &___m_executingCallback_14; }
	inline void set_m_executingCallback_14(CancellationCallbackInfo_t8CDEA0AA9C9D1A2321FE2F88878F4B5E0901CF36 * value)
	{
		___m_executingCallback_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_executingCallback_14), (void*)value);
	}

	inline static int32_t get_offset_of_m_timer_15() { return static_cast<int32_t>(offsetof(CancellationTokenSource_tF480B7E74A032667AFBD31F0530D619FB43AD3FE, ___m_timer_15)); }
	inline Timer_t67FAB8E41573B4FA09CA56AE30725AF4297C2553 * get_m_timer_15() const { return ___m_timer_15; }
	inline Timer_t67FAB8E41573B4FA09CA56AE30725AF4297C2553 ** get_address_of_m_timer_15() { return &___m_timer_15; }
	inline void set_m_timer_15(Timer_t67FAB8E41573B4FA09CA56AE30725AF4297C2553 * value)
	{
		___m_timer_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_timer_15), (void*)value);
	}
};

struct CancellationTokenSource_tF480B7E74A032667AFBD31F0530D619FB43AD3FE_StaticFields
{
public:
	// System.Threading.CancellationTokenSource System.Threading.CancellationTokenSource::_staticSource_Set
	CancellationTokenSource_tF480B7E74A032667AFBD31F0530D619FB43AD3FE * ____staticSource_Set_0;
	// System.Threading.CancellationTokenSource System.Threading.CancellationTokenSource::_staticSource_NotCancelable
	CancellationTokenSource_tF480B7E74A032667AFBD31F0530D619FB43AD3FE * ____staticSource_NotCancelable_1;
	// System.Int32 System.Threading.CancellationTokenSource::s_nLists
	int32_t ___s_nLists_2;
	// System.Action`1<System.Object> System.Threading.CancellationTokenSource::s_LinkedTokenCancelDelegate
	Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 * ___s_LinkedTokenCancelDelegate_13;
	// System.Threading.TimerCallback System.Threading.CancellationTokenSource::s_timerCallback
	TimerCallback_tC89F2FB1294A86F64DEB2C1F68024954018AA219 * ___s_timerCallback_16;

public:
	inline static int32_t get_offset_of__staticSource_Set_0() { return static_cast<int32_t>(offsetof(CancellationTokenSource_tF480B7E74A032667AFBD31F0530D619FB43AD3FE_StaticFields, ____staticSource_Set_0)); }
	inline CancellationTokenSource_tF480B7E74A032667AFBD31F0530D619FB43AD3FE * get__staticSource_Set_0() const { return ____staticSource_Set_0; }
	inline CancellationTokenSource_tF480B7E74A032667AFBD31F0530D619FB43AD3FE ** get_address_of__staticSource_Set_0() { return &____staticSource_Set_0; }
	inline void set__staticSource_Set_0(CancellationTokenSource_tF480B7E74A032667AFBD31F0530D619FB43AD3FE * value)
	{
		____staticSource_Set_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____staticSource_Set_0), (void*)value);
	}

	inline static int32_t get_offset_of__staticSource_NotCancelable_1() { return static_cast<int32_t>(offsetof(CancellationTokenSource_tF480B7E74A032667AFBD31F0530D619FB43AD3FE_StaticFields, ____staticSource_NotCancelable_1)); }
	inline CancellationTokenSource_tF480B7E74A032667AFBD31F0530D619FB43AD3FE * get__staticSource_NotCancelable_1() const { return ____staticSource_NotCancelable_1; }
	inline CancellationTokenSource_tF480B7E74A032667AFBD31F0530D619FB43AD3FE ** get_address_of__staticSource_NotCancelable_1() { return &____staticSource_NotCancelable_1; }
	inline void set__staticSource_NotCancelable_1(CancellationTokenSource_tF480B7E74A032667AFBD31F0530D619FB43AD3FE * value)
	{
		____staticSource_NotCancelable_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____staticSource_NotCancelable_1), (void*)value);
	}

	inline static int32_t get_offset_of_s_nLists_2() { return static_cast<int32_t>(offsetof(CancellationTokenSource_tF480B7E74A032667AFBD31F0530D619FB43AD3FE_StaticFields, ___s_nLists_2)); }
	inline int32_t get_s_nLists_2() const { return ___s_nLists_2; }
	inline int32_t* get_address_of_s_nLists_2() { return &___s_nLists_2; }
	inline void set_s_nLists_2(int32_t value)
	{
		___s_nLists_2 = value;
	}

	inline static int32_t get_offset_of_s_LinkedTokenCancelDelegate_13() { return static_cast<int32_t>(offsetof(CancellationTokenSource_tF480B7E74A032667AFBD31F0530D619FB43AD3FE_StaticFields, ___s_LinkedTokenCancelDelegate_13)); }
	inline Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 * get_s_LinkedTokenCancelDelegate_13() const { return ___s_LinkedTokenCancelDelegate_13; }
	inline Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 ** get_address_of_s_LinkedTokenCancelDelegate_13() { return &___s_LinkedTokenCancelDelegate_13; }
	inline void set_s_LinkedTokenCancelDelegate_13(Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 * value)
	{
		___s_LinkedTokenCancelDelegate_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_LinkedTokenCancelDelegate_13), (void*)value);
	}

	inline static int32_t get_offset_of_s_timerCallback_16() { return static_cast<int32_t>(offsetof(CancellationTokenSource_tF480B7E74A032667AFBD31F0530D619FB43AD3FE_StaticFields, ___s_timerCallback_16)); }
	inline TimerCallback_tC89F2FB1294A86F64DEB2C1F68024954018AA219 * get_s_timerCallback_16() const { return ___s_timerCallback_16; }
	inline TimerCallback_tC89F2FB1294A86F64DEB2C1F68024954018AA219 ** get_address_of_s_timerCallback_16() { return &___s_timerCallback_16; }
	inline void set_s_timerCallback_16(TimerCallback_tC89F2FB1294A86F64DEB2C1F68024954018AA219 * value)
	{
		___s_timerCallback_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_timerCallback_16), (void*)value);
	}
};


// System.Threading.Tasks.Task
struct  Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2  : public RuntimeObject
{
public:
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_taskId
	int32_t ___m_taskId_4;
	// System.Object System.Threading.Tasks.Task::m_action
	RuntimeObject * ___m_action_5;
	// System.Object System.Threading.Tasks.Task::m_stateObject
	RuntimeObject * ___m_stateObject_6;
	// System.Threading.Tasks.TaskScheduler System.Threading.Tasks.Task::m_taskScheduler
	TaskScheduler_t966F2798F198FA90A0DA8EFC92BAC08297793114 * ___m_taskScheduler_7;
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::m_parent
	Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * ___m_parent_8;
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_stateFlags
	int32_t ___m_stateFlags_9;
	// System.Object modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_continuationObject
	RuntimeObject * ___m_continuationObject_28;
	// System.Threading.Tasks.Task_ContingentProperties modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_contingentProperties
	ContingentProperties_t7149A27D01507C74E8BDAAA3848B45D2644FDF08 * ___m_contingentProperties_33;

public:
	inline static int32_t get_offset_of_m_taskId_4() { return static_cast<int32_t>(offsetof(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2, ___m_taskId_4)); }
	inline int32_t get_m_taskId_4() const { return ___m_taskId_4; }
	inline int32_t* get_address_of_m_taskId_4() { return &___m_taskId_4; }
	inline void set_m_taskId_4(int32_t value)
	{
		___m_taskId_4 = value;
	}

	inline static int32_t get_offset_of_m_action_5() { return static_cast<int32_t>(offsetof(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2, ___m_action_5)); }
	inline RuntimeObject * get_m_action_5() const { return ___m_action_5; }
	inline RuntimeObject ** get_address_of_m_action_5() { return &___m_action_5; }
	inline void set_m_action_5(RuntimeObject * value)
	{
		___m_action_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_action_5), (void*)value);
	}

	inline static int32_t get_offset_of_m_stateObject_6() { return static_cast<int32_t>(offsetof(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2, ___m_stateObject_6)); }
	inline RuntimeObject * get_m_stateObject_6() const { return ___m_stateObject_6; }
	inline RuntimeObject ** get_address_of_m_stateObject_6() { return &___m_stateObject_6; }
	inline void set_m_stateObject_6(RuntimeObject * value)
	{
		___m_stateObject_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_stateObject_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_taskScheduler_7() { return static_cast<int32_t>(offsetof(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2, ___m_taskScheduler_7)); }
	inline TaskScheduler_t966F2798F198FA90A0DA8EFC92BAC08297793114 * get_m_taskScheduler_7() const { return ___m_taskScheduler_7; }
	inline TaskScheduler_t966F2798F198FA90A0DA8EFC92BAC08297793114 ** get_address_of_m_taskScheduler_7() { return &___m_taskScheduler_7; }
	inline void set_m_taskScheduler_7(TaskScheduler_t966F2798F198FA90A0DA8EFC92BAC08297793114 * value)
	{
		___m_taskScheduler_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_taskScheduler_7), (void*)value);
	}

	inline static int32_t get_offset_of_m_parent_8() { return static_cast<int32_t>(offsetof(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2, ___m_parent_8)); }
	inline Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * get_m_parent_8() const { return ___m_parent_8; }
	inline Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 ** get_address_of_m_parent_8() { return &___m_parent_8; }
	inline void set_m_parent_8(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * value)
	{
		___m_parent_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_parent_8), (void*)value);
	}

	inline static int32_t get_offset_of_m_stateFlags_9() { return static_cast<int32_t>(offsetof(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2, ___m_stateFlags_9)); }
	inline int32_t get_m_stateFlags_9() const { return ___m_stateFlags_9; }
	inline int32_t* get_address_of_m_stateFlags_9() { return &___m_stateFlags_9; }
	inline void set_m_stateFlags_9(int32_t value)
	{
		___m_stateFlags_9 = value;
	}

	inline static int32_t get_offset_of_m_continuationObject_28() { return static_cast<int32_t>(offsetof(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2, ___m_continuationObject_28)); }
	inline RuntimeObject * get_m_continuationObject_28() const { return ___m_continuationObject_28; }
	inline RuntimeObject ** get_address_of_m_continuationObject_28() { return &___m_continuationObject_28; }
	inline void set_m_continuationObject_28(RuntimeObject * value)
	{
		___m_continuationObject_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_continuationObject_28), (void*)value);
	}

	inline static int32_t get_offset_of_m_contingentProperties_33() { return static_cast<int32_t>(offsetof(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2, ___m_contingentProperties_33)); }
	inline ContingentProperties_t7149A27D01507C74E8BDAAA3848B45D2644FDF08 * get_m_contingentProperties_33() const { return ___m_contingentProperties_33; }
	inline ContingentProperties_t7149A27D01507C74E8BDAAA3848B45D2644FDF08 ** get_address_of_m_contingentProperties_33() { return &___m_contingentProperties_33; }
	inline void set_m_contingentProperties_33(ContingentProperties_t7149A27D01507C74E8BDAAA3848B45D2644FDF08 * value)
	{
		___m_contingentProperties_33 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_contingentProperties_33), (void*)value);
	}
};

struct Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2_StaticFields
{
public:
	// System.Int32 System.Threading.Tasks.Task::s_taskIdCounter
	int32_t ___s_taskIdCounter_2;
	// System.Threading.Tasks.TaskFactory System.Threading.Tasks.Task::s_factory
	TaskFactory_tF3C6D983390ACFB40B4979E225368F78006D6155 * ___s_factory_3;
	// System.Object System.Threading.Tasks.Task::s_taskCompletionSentinel
	RuntimeObject * ___s_taskCompletionSentinel_29;
	// System.Boolean System.Threading.Tasks.Task::s_asyncDebuggingEnabled
	bool ___s_asyncDebuggingEnabled_30;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Threading.Tasks.Task> System.Threading.Tasks.Task::s_currentActiveTasks
	Dictionary_2_t70161CFEB8DA3C79E19E31D0ED948D3C2925095F * ___s_currentActiveTasks_31;
	// System.Object System.Threading.Tasks.Task::s_activeTasksLock
	RuntimeObject * ___s_activeTasksLock_32;
	// System.Action`1<System.Object> System.Threading.Tasks.Task::s_taskCancelCallback
	Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 * ___s_taskCancelCallback_34;
	// System.Func`1<System.Threading.Tasks.Task_ContingentProperties> System.Threading.Tasks.Task::s_createContingentProperties
	Func_1_t48C2978A48CE3F2F6EB5B6DE269D00746483BB1F * ___s_createContingentProperties_35;
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::s_completedTask
	Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * ___s_completedTask_36;
	// System.Predicate`1<System.Threading.Tasks.Task> System.Threading.Tasks.Task::s_IsExceptionObservedByParentPredicate
	Predicate_1_tF4286C34BB184CE5690FDCEBA7F09FC68D229335 * ___s_IsExceptionObservedByParentPredicate_37;
	// System.Threading.ContextCallback System.Threading.Tasks.Task::s_ecCallback
	ContextCallback_t8AE8A965AC6C7ECD396F527F15CDC8E683BE1676 * ___s_ecCallback_38;
	// System.Predicate`1<System.Object> System.Threading.Tasks.Task::s_IsTaskContinuationNullPredicate
	Predicate_1_t4AA10EFD4C5497CA1CD0FE35A6AF5990FF5D0979 * ___s_IsTaskContinuationNullPredicate_39;

public:
	inline static int32_t get_offset_of_s_taskIdCounter_2() { return static_cast<int32_t>(offsetof(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2_StaticFields, ___s_taskIdCounter_2)); }
	inline int32_t get_s_taskIdCounter_2() const { return ___s_taskIdCounter_2; }
	inline int32_t* get_address_of_s_taskIdCounter_2() { return &___s_taskIdCounter_2; }
	inline void set_s_taskIdCounter_2(int32_t value)
	{
		___s_taskIdCounter_2 = value;
	}

	inline static int32_t get_offset_of_s_factory_3() { return static_cast<int32_t>(offsetof(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2_StaticFields, ___s_factory_3)); }
	inline TaskFactory_tF3C6D983390ACFB40B4979E225368F78006D6155 * get_s_factory_3() const { return ___s_factory_3; }
	inline TaskFactory_tF3C6D983390ACFB40B4979E225368F78006D6155 ** get_address_of_s_factory_3() { return &___s_factory_3; }
	inline void set_s_factory_3(TaskFactory_tF3C6D983390ACFB40B4979E225368F78006D6155 * value)
	{
		___s_factory_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_factory_3), (void*)value);
	}

	inline static int32_t get_offset_of_s_taskCompletionSentinel_29() { return static_cast<int32_t>(offsetof(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2_StaticFields, ___s_taskCompletionSentinel_29)); }
	inline RuntimeObject * get_s_taskCompletionSentinel_29() const { return ___s_taskCompletionSentinel_29; }
	inline RuntimeObject ** get_address_of_s_taskCompletionSentinel_29() { return &___s_taskCompletionSentinel_29; }
	inline void set_s_taskCompletionSentinel_29(RuntimeObject * value)
	{
		___s_taskCompletionSentinel_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_taskCompletionSentinel_29), (void*)value);
	}

	inline static int32_t get_offset_of_s_asyncDebuggingEnabled_30() { return static_cast<int32_t>(offsetof(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2_StaticFields, ___s_asyncDebuggingEnabled_30)); }
	inline bool get_s_asyncDebuggingEnabled_30() const { return ___s_asyncDebuggingEnabled_30; }
	inline bool* get_address_of_s_asyncDebuggingEnabled_30() { return &___s_asyncDebuggingEnabled_30; }
	inline void set_s_asyncDebuggingEnabled_30(bool value)
	{
		___s_asyncDebuggingEnabled_30 = value;
	}

	inline static int32_t get_offset_of_s_currentActiveTasks_31() { return static_cast<int32_t>(offsetof(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2_StaticFields, ___s_currentActiveTasks_31)); }
	inline Dictionary_2_t70161CFEB8DA3C79E19E31D0ED948D3C2925095F * get_s_currentActiveTasks_31() const { return ___s_currentActiveTasks_31; }
	inline Dictionary_2_t70161CFEB8DA3C79E19E31D0ED948D3C2925095F ** get_address_of_s_currentActiveTasks_31() { return &___s_currentActiveTasks_31; }
	inline void set_s_currentActiveTasks_31(Dictionary_2_t70161CFEB8DA3C79E19E31D0ED948D3C2925095F * value)
	{
		___s_currentActiveTasks_31 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_currentActiveTasks_31), (void*)value);
	}

	inline static int32_t get_offset_of_s_activeTasksLock_32() { return static_cast<int32_t>(offsetof(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2_StaticFields, ___s_activeTasksLock_32)); }
	inline RuntimeObject * get_s_activeTasksLock_32() const { return ___s_activeTasksLock_32; }
	inline RuntimeObject ** get_address_of_s_activeTasksLock_32() { return &___s_activeTasksLock_32; }
	inline void set_s_activeTasksLock_32(RuntimeObject * value)
	{
		___s_activeTasksLock_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_activeTasksLock_32), (void*)value);
	}

	inline static int32_t get_offset_of_s_taskCancelCallback_34() { return static_cast<int32_t>(offsetof(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2_StaticFields, ___s_taskCancelCallback_34)); }
	inline Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 * get_s_taskCancelCallback_34() const { return ___s_taskCancelCallback_34; }
	inline Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 ** get_address_of_s_taskCancelCallback_34() { return &___s_taskCancelCallback_34; }
	inline void set_s_taskCancelCallback_34(Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 * value)
	{
		___s_taskCancelCallback_34 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_taskCancelCallback_34), (void*)value);
	}

	inline static int32_t get_offset_of_s_createContingentProperties_35() { return static_cast<int32_t>(offsetof(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2_StaticFields, ___s_createContingentProperties_35)); }
	inline Func_1_t48C2978A48CE3F2F6EB5B6DE269D00746483BB1F * get_s_createContingentProperties_35() const { return ___s_createContingentProperties_35; }
	inline Func_1_t48C2978A48CE3F2F6EB5B6DE269D00746483BB1F ** get_address_of_s_createContingentProperties_35() { return &___s_createContingentProperties_35; }
	inline void set_s_createContingentProperties_35(Func_1_t48C2978A48CE3F2F6EB5B6DE269D00746483BB1F * value)
	{
		___s_createContingentProperties_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_createContingentProperties_35), (void*)value);
	}

	inline static int32_t get_offset_of_s_completedTask_36() { return static_cast<int32_t>(offsetof(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2_StaticFields, ___s_completedTask_36)); }
	inline Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * get_s_completedTask_36() const { return ___s_completedTask_36; }
	inline Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 ** get_address_of_s_completedTask_36() { return &___s_completedTask_36; }
	inline void set_s_completedTask_36(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * value)
	{
		___s_completedTask_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_completedTask_36), (void*)value);
	}

	inline static int32_t get_offset_of_s_IsExceptionObservedByParentPredicate_37() { return static_cast<int32_t>(offsetof(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2_StaticFields, ___s_IsExceptionObservedByParentPredicate_37)); }
	inline Predicate_1_tF4286C34BB184CE5690FDCEBA7F09FC68D229335 * get_s_IsExceptionObservedByParentPredicate_37() const { return ___s_IsExceptionObservedByParentPredicate_37; }
	inline Predicate_1_tF4286C34BB184CE5690FDCEBA7F09FC68D229335 ** get_address_of_s_IsExceptionObservedByParentPredicate_37() { return &___s_IsExceptionObservedByParentPredicate_37; }
	inline void set_s_IsExceptionObservedByParentPredicate_37(Predicate_1_tF4286C34BB184CE5690FDCEBA7F09FC68D229335 * value)
	{
		___s_IsExceptionObservedByParentPredicate_37 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_IsExceptionObservedByParentPredicate_37), (void*)value);
	}

	inline static int32_t get_offset_of_s_ecCallback_38() { return static_cast<int32_t>(offsetof(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2_StaticFields, ___s_ecCallback_38)); }
	inline ContextCallback_t8AE8A965AC6C7ECD396F527F15CDC8E683BE1676 * get_s_ecCallback_38() const { return ___s_ecCallback_38; }
	inline ContextCallback_t8AE8A965AC6C7ECD396F527F15CDC8E683BE1676 ** get_address_of_s_ecCallback_38() { return &___s_ecCallback_38; }
	inline void set_s_ecCallback_38(ContextCallback_t8AE8A965AC6C7ECD396F527F15CDC8E683BE1676 * value)
	{
		___s_ecCallback_38 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_ecCallback_38), (void*)value);
	}

	inline static int32_t get_offset_of_s_IsTaskContinuationNullPredicate_39() { return static_cast<int32_t>(offsetof(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2_StaticFields, ___s_IsTaskContinuationNullPredicate_39)); }
	inline Predicate_1_t4AA10EFD4C5497CA1CD0FE35A6AF5990FF5D0979 * get_s_IsTaskContinuationNullPredicate_39() const { return ___s_IsTaskContinuationNullPredicate_39; }
	inline Predicate_1_t4AA10EFD4C5497CA1CD0FE35A6AF5990FF5D0979 ** get_address_of_s_IsTaskContinuationNullPredicate_39() { return &___s_IsTaskContinuationNullPredicate_39; }
	inline void set_s_IsTaskContinuationNullPredicate_39(Predicate_1_t4AA10EFD4C5497CA1CD0FE35A6AF5990FF5D0979 * value)
	{
		___s_IsTaskContinuationNullPredicate_39 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_IsTaskContinuationNullPredicate_39), (void*)value);
	}
};

struct Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2_ThreadStaticFields
{
public:
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::t_currentTask
	Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * ___t_currentTask_0;
	// System.Threading.Tasks.StackGuard System.Threading.Tasks.Task::t_stackGuard
	StackGuard_tE431ED3BBD1A18705FEE6F948EBF7FA2E99D64A9 * ___t_stackGuard_1;

public:
	inline static int32_t get_offset_of_t_currentTask_0() { return static_cast<int32_t>(offsetof(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2_ThreadStaticFields, ___t_currentTask_0)); }
	inline Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * get_t_currentTask_0() const { return ___t_currentTask_0; }
	inline Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 ** get_address_of_t_currentTask_0() { return &___t_currentTask_0; }
	inline void set_t_currentTask_0(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * value)
	{
		___t_currentTask_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___t_currentTask_0), (void*)value);
	}

	inline static int32_t get_offset_of_t_stackGuard_1() { return static_cast<int32_t>(offsetof(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2_ThreadStaticFields, ___t_stackGuard_1)); }
	inline StackGuard_tE431ED3BBD1A18705FEE6F948EBF7FA2E99D64A9 * get_t_stackGuard_1() const { return ___t_stackGuard_1; }
	inline StackGuard_tE431ED3BBD1A18705FEE6F948EBF7FA2E99D64A9 ** get_address_of_t_stackGuard_1() { return &___t_stackGuard_1; }
	inline void set_t_stackGuard_1(StackGuard_tE431ED3BBD1A18705FEE6F948EBF7FA2E99D64A9 * value)
	{
		___t_stackGuard_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___t_stackGuard_1), (void*)value);
	}
};


// System.Threading.ThreadPriority
struct  ThreadPriority_tA18DA7C04EFC2F3A9C97A1F52B9AC531692B2762 
{
public:
	// System.Int32 System.Threading.ThreadPriority::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ThreadPriority_tA18DA7C04EFC2F3A9C97A1F52B9AC531692B2762, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.TimeSpan
struct  TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4 
{
public:
	// System.Int64 System.TimeSpan::_ticks
	int64_t ____ticks_22;

public:
	inline static int32_t get_offset_of__ticks_22() { return static_cast<int32_t>(offsetof(TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4, ____ticks_22)); }
	inline int64_t get__ticks_22() const { return ____ticks_22; }
	inline int64_t* get_address_of__ticks_22() { return &____ticks_22; }
	inline void set__ticks_22(int64_t value)
	{
		____ticks_22 = value;
	}
};

struct TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4_StaticFields
{
public:
	// System.TimeSpan System.TimeSpan::Zero
	TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  ___Zero_19;
	// System.TimeSpan System.TimeSpan::MaxValue
	TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  ___MaxValue_20;
	// System.TimeSpan System.TimeSpan::MinValue
	TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  ___MinValue_21;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.TimeSpan::_legacyConfigChecked
	bool ____legacyConfigChecked_23;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.TimeSpan::_legacyMode
	bool ____legacyMode_24;

public:
	inline static int32_t get_offset_of_Zero_19() { return static_cast<int32_t>(offsetof(TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4_StaticFields, ___Zero_19)); }
	inline TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  get_Zero_19() const { return ___Zero_19; }
	inline TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4 * get_address_of_Zero_19() { return &___Zero_19; }
	inline void set_Zero_19(TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  value)
	{
		___Zero_19 = value;
	}

	inline static int32_t get_offset_of_MaxValue_20() { return static_cast<int32_t>(offsetof(TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4_StaticFields, ___MaxValue_20)); }
	inline TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  get_MaxValue_20() const { return ___MaxValue_20; }
	inline TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4 * get_address_of_MaxValue_20() { return &___MaxValue_20; }
	inline void set_MaxValue_20(TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  value)
	{
		___MaxValue_20 = value;
	}

	inline static int32_t get_offset_of_MinValue_21() { return static_cast<int32_t>(offsetof(TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4_StaticFields, ___MinValue_21)); }
	inline TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  get_MinValue_21() const { return ___MinValue_21; }
	inline TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4 * get_address_of_MinValue_21() { return &___MinValue_21; }
	inline void set_MinValue_21(TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  value)
	{
		___MinValue_21 = value;
	}

	inline static int32_t get_offset_of__legacyConfigChecked_23() { return static_cast<int32_t>(offsetof(TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4_StaticFields, ____legacyConfigChecked_23)); }
	inline bool get__legacyConfigChecked_23() const { return ____legacyConfigChecked_23; }
	inline bool* get_address_of__legacyConfigChecked_23() { return &____legacyConfigChecked_23; }
	inline void set__legacyConfigChecked_23(bool value)
	{
		____legacyConfigChecked_23 = value;
	}

	inline static int32_t get_offset_of__legacyMode_24() { return static_cast<int32_t>(offsetof(TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4_StaticFields, ____legacyMode_24)); }
	inline bool get__legacyMode_24() const { return ____legacyMode_24; }
	inline bool* get_address_of__legacyMode_24() { return &____legacyMode_24; }
	inline void set__legacyMode_24(bool value)
	{
		____legacyMode_24 = value;
	}
};


// System.Uri_Flags
struct  Flags_tEBE7CABEBD13F16920D6950B384EB8F988250A2A 
{
public:
	// System.UInt64 System.Uri_Flags::value__
	uint64_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Flags_tEBE7CABEBD13F16920D6950B384EB8F988250A2A, ___value___2)); }
	inline uint64_t get_value___2() const { return ___value___2; }
	inline uint64_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(uint64_t value)
	{
		___value___2 = value;
	}
};


// System.UriIdnScope
struct  UriIdnScope_tE1574B39C7492C761EFE2FC12DDE82DE013AC9D1 
{
public:
	// System.Int32 System.UriIdnScope::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(UriIdnScope_tE1574B39C7492C761EFE2FC12DDE82DE013AC9D1, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Object
struct  Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// UnityGLTF.GLTFSceneImporter_<>c__DisplayClass53_0
struct  U3CU3Ec__DisplayClass53_0_t8D4248C7B9839F95826E82E11BB0844C853D00EA  : public RuntimeObject
{
public:
	// System.Int32 UnityGLTF.GLTFSceneImporter_<>c__DisplayClass53_0::meshIndex
	int32_t ___meshIndex_0;
	// UnityGLTF.GLTFSceneImporter UnityGLTF.GLTFSceneImporter_<>c__DisplayClass53_0::<>4__this
	GLTFSceneImporter_t29A5109798926C47E5B089376F3E467E78EB710E * ___U3CU3E4__this_1;
	// System.Threading.CancellationToken UnityGLTF.GLTFSceneImporter_<>c__DisplayClass53_0::cancellationToken
	CancellationToken_t9E956952F7F20908F2AE72EDF36D97E6C7DB63AB  ___cancellationToken_2;

public:
	inline static int32_t get_offset_of_meshIndex_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass53_0_t8D4248C7B9839F95826E82E11BB0844C853D00EA, ___meshIndex_0)); }
	inline int32_t get_meshIndex_0() const { return ___meshIndex_0; }
	inline int32_t* get_address_of_meshIndex_0() { return &___meshIndex_0; }
	inline void set_meshIndex_0(int32_t value)
	{
		___meshIndex_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E4__this_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass53_0_t8D4248C7B9839F95826E82E11BB0844C853D00EA, ___U3CU3E4__this_1)); }
	inline GLTFSceneImporter_t29A5109798926C47E5B089376F3E467E78EB710E * get_U3CU3E4__this_1() const { return ___U3CU3E4__this_1; }
	inline GLTFSceneImporter_t29A5109798926C47E5B089376F3E467E78EB710E ** get_address_of_U3CU3E4__this_1() { return &___U3CU3E4__this_1; }
	inline void set_U3CU3E4__this_1(GLTFSceneImporter_t29A5109798926C47E5B089376F3E467E78EB710E * value)
	{
		___U3CU3E4__this_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_1), (void*)value);
	}

	inline static int32_t get_offset_of_cancellationToken_2() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass53_0_t8D4248C7B9839F95826E82E11BB0844C853D00EA, ___cancellationToken_2)); }
	inline CancellationToken_t9E956952F7F20908F2AE72EDF36D97E6C7DB63AB  get_cancellationToken_2() const { return ___cancellationToken_2; }
	inline CancellationToken_t9E956952F7F20908F2AE72EDF36D97E6C7DB63AB * get_address_of_cancellationToken_2() { return &___cancellationToken_2; }
	inline void set_cancellationToken_2(CancellationToken_t9E956952F7F20908F2AE72EDF36D97E6C7DB63AB  value)
	{
		___cancellationToken_2 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___cancellationToken_2))->___m_source_0), (void*)NULL);
	}
};


// UnityGLTF.GLTFSceneImporter_ColliderType
struct  ColliderType_tFF1251FDB8662E1BA0BB65DC4C8A77B399E0F024 
{
public:
	// System.Int32 UnityGLTF.GLTFSceneImporter_ColliderType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ColliderType_tFF1251FDB8662E1BA0BB65DC4C8A77B399E0F024, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// GLTF.Schema.Accessor
struct  Accessor_t89821E647431664D61D135A9BB9FD745EB75744B  : public GLTFChildOfRootProperty_t162116062E3D11D0057F6780F387ED5EBE6C268C
{
public:
	// GLTF.Schema.BufferViewId GLTF.Schema.Accessor::BufferView
	BufferViewId_tAE1D88A5BF8DD1B736DDDF93CEA0D07FE666D871 * ___BufferView_5;
	// System.UInt32 GLTF.Schema.Accessor::ByteOffset
	uint32_t ___ByteOffset_6;
	// GLTF.Schema.GLTFComponentType GLTF.Schema.Accessor::ComponentType
	int32_t ___ComponentType_7;
	// System.Boolean GLTF.Schema.Accessor::Normalized
	bool ___Normalized_8;
	// System.UInt32 GLTF.Schema.Accessor::Count
	uint32_t ___Count_9;
	// GLTF.Schema.GLTFAccessorAttributeType GLTF.Schema.Accessor::Type
	int32_t ___Type_10;
	// System.Collections.Generic.List`1<System.Double> GLTF.Schema.Accessor::Max
	List_1_t04E879C847712A9A4EDFA05DC4B8052C4487814C * ___Max_11;
	// System.Collections.Generic.List`1<System.Double> GLTF.Schema.Accessor::Min
	List_1_t04E879C847712A9A4EDFA05DC4B8052C4487814C * ___Min_12;
	// GLTF.Schema.AccessorSparse GLTF.Schema.Accessor::Sparse
	AccessorSparse_t503861445674C5161C3AF2F1D15EA13BA2F6A69C * ___Sparse_13;

public:
	inline static int32_t get_offset_of_BufferView_5() { return static_cast<int32_t>(offsetof(Accessor_t89821E647431664D61D135A9BB9FD745EB75744B, ___BufferView_5)); }
	inline BufferViewId_tAE1D88A5BF8DD1B736DDDF93CEA0D07FE666D871 * get_BufferView_5() const { return ___BufferView_5; }
	inline BufferViewId_tAE1D88A5BF8DD1B736DDDF93CEA0D07FE666D871 ** get_address_of_BufferView_5() { return &___BufferView_5; }
	inline void set_BufferView_5(BufferViewId_tAE1D88A5BF8DD1B736DDDF93CEA0D07FE666D871 * value)
	{
		___BufferView_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___BufferView_5), (void*)value);
	}

	inline static int32_t get_offset_of_ByteOffset_6() { return static_cast<int32_t>(offsetof(Accessor_t89821E647431664D61D135A9BB9FD745EB75744B, ___ByteOffset_6)); }
	inline uint32_t get_ByteOffset_6() const { return ___ByteOffset_6; }
	inline uint32_t* get_address_of_ByteOffset_6() { return &___ByteOffset_6; }
	inline void set_ByteOffset_6(uint32_t value)
	{
		___ByteOffset_6 = value;
	}

	inline static int32_t get_offset_of_ComponentType_7() { return static_cast<int32_t>(offsetof(Accessor_t89821E647431664D61D135A9BB9FD745EB75744B, ___ComponentType_7)); }
	inline int32_t get_ComponentType_7() const { return ___ComponentType_7; }
	inline int32_t* get_address_of_ComponentType_7() { return &___ComponentType_7; }
	inline void set_ComponentType_7(int32_t value)
	{
		___ComponentType_7 = value;
	}

	inline static int32_t get_offset_of_Normalized_8() { return static_cast<int32_t>(offsetof(Accessor_t89821E647431664D61D135A9BB9FD745EB75744B, ___Normalized_8)); }
	inline bool get_Normalized_8() const { return ___Normalized_8; }
	inline bool* get_address_of_Normalized_8() { return &___Normalized_8; }
	inline void set_Normalized_8(bool value)
	{
		___Normalized_8 = value;
	}

	inline static int32_t get_offset_of_Count_9() { return static_cast<int32_t>(offsetof(Accessor_t89821E647431664D61D135A9BB9FD745EB75744B, ___Count_9)); }
	inline uint32_t get_Count_9() const { return ___Count_9; }
	inline uint32_t* get_address_of_Count_9() { return &___Count_9; }
	inline void set_Count_9(uint32_t value)
	{
		___Count_9 = value;
	}

	inline static int32_t get_offset_of_Type_10() { return static_cast<int32_t>(offsetof(Accessor_t89821E647431664D61D135A9BB9FD745EB75744B, ___Type_10)); }
	inline int32_t get_Type_10() const { return ___Type_10; }
	inline int32_t* get_address_of_Type_10() { return &___Type_10; }
	inline void set_Type_10(int32_t value)
	{
		___Type_10 = value;
	}

	inline static int32_t get_offset_of_Max_11() { return static_cast<int32_t>(offsetof(Accessor_t89821E647431664D61D135A9BB9FD745EB75744B, ___Max_11)); }
	inline List_1_t04E879C847712A9A4EDFA05DC4B8052C4487814C * get_Max_11() const { return ___Max_11; }
	inline List_1_t04E879C847712A9A4EDFA05DC4B8052C4487814C ** get_address_of_Max_11() { return &___Max_11; }
	inline void set_Max_11(List_1_t04E879C847712A9A4EDFA05DC4B8052C4487814C * value)
	{
		___Max_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Max_11), (void*)value);
	}

	inline static int32_t get_offset_of_Min_12() { return static_cast<int32_t>(offsetof(Accessor_t89821E647431664D61D135A9BB9FD745EB75744B, ___Min_12)); }
	inline List_1_t04E879C847712A9A4EDFA05DC4B8052C4487814C * get_Min_12() const { return ___Min_12; }
	inline List_1_t04E879C847712A9A4EDFA05DC4B8052C4487814C ** get_address_of_Min_12() { return &___Min_12; }
	inline void set_Min_12(List_1_t04E879C847712A9A4EDFA05DC4B8052C4487814C * value)
	{
		___Min_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Min_12), (void*)value);
	}

	inline static int32_t get_offset_of_Sparse_13() { return static_cast<int32_t>(offsetof(Accessor_t89821E647431664D61D135A9BB9FD745EB75744B, ___Sparse_13)); }
	inline AccessorSparse_t503861445674C5161C3AF2F1D15EA13BA2F6A69C * get_Sparse_13() const { return ___Sparse_13; }
	inline AccessorSparse_t503861445674C5161C3AF2F1D15EA13BA2F6A69C ** get_address_of_Sparse_13() { return &___Sparse_13; }
	inline void set_Sparse_13(AccessorSparse_t503861445674C5161C3AF2F1D15EA13BA2F6A69C * value)
	{
		___Sparse_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Sparse_13), (void*)value);
	}
};


// GLTF.Schema.BufferView
struct  BufferView_tA426A728440976427358CC00CC2DF72A1FBFED7D  : public GLTFChildOfRootProperty_t162116062E3D11D0057F6780F387ED5EBE6C268C
{
public:
	// GLTF.Schema.BufferId GLTF.Schema.BufferView::Buffer
	BufferId_t1F12DE28BBFD6A5C038FA14B0BCA46D852CC00F4 * ___Buffer_5;
	// System.UInt32 GLTF.Schema.BufferView::ByteOffset
	uint32_t ___ByteOffset_6;
	// System.UInt32 GLTF.Schema.BufferView::ByteLength
	uint32_t ___ByteLength_7;
	// System.UInt32 GLTF.Schema.BufferView::ByteStride
	uint32_t ___ByteStride_8;
	// GLTF.Schema.BufferViewTarget GLTF.Schema.BufferView::Target
	int32_t ___Target_9;

public:
	inline static int32_t get_offset_of_Buffer_5() { return static_cast<int32_t>(offsetof(BufferView_tA426A728440976427358CC00CC2DF72A1FBFED7D, ___Buffer_5)); }
	inline BufferId_t1F12DE28BBFD6A5C038FA14B0BCA46D852CC00F4 * get_Buffer_5() const { return ___Buffer_5; }
	inline BufferId_t1F12DE28BBFD6A5C038FA14B0BCA46D852CC00F4 ** get_address_of_Buffer_5() { return &___Buffer_5; }
	inline void set_Buffer_5(BufferId_t1F12DE28BBFD6A5C038FA14B0BCA46D852CC00F4 * value)
	{
		___Buffer_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Buffer_5), (void*)value);
	}

	inline static int32_t get_offset_of_ByteOffset_6() { return static_cast<int32_t>(offsetof(BufferView_tA426A728440976427358CC00CC2DF72A1FBFED7D, ___ByteOffset_6)); }
	inline uint32_t get_ByteOffset_6() const { return ___ByteOffset_6; }
	inline uint32_t* get_address_of_ByteOffset_6() { return &___ByteOffset_6; }
	inline void set_ByteOffset_6(uint32_t value)
	{
		___ByteOffset_6 = value;
	}

	inline static int32_t get_offset_of_ByteLength_7() { return static_cast<int32_t>(offsetof(BufferView_tA426A728440976427358CC00CC2DF72A1FBFED7D, ___ByteLength_7)); }
	inline uint32_t get_ByteLength_7() const { return ___ByteLength_7; }
	inline uint32_t* get_address_of_ByteLength_7() { return &___ByteLength_7; }
	inline void set_ByteLength_7(uint32_t value)
	{
		___ByteLength_7 = value;
	}

	inline static int32_t get_offset_of_ByteStride_8() { return static_cast<int32_t>(offsetof(BufferView_tA426A728440976427358CC00CC2DF72A1FBFED7D, ___ByteStride_8)); }
	inline uint32_t get_ByteStride_8() const { return ___ByteStride_8; }
	inline uint32_t* get_address_of_ByteStride_8() { return &___ByteStride_8; }
	inline void set_ByteStride_8(uint32_t value)
	{
		___ByteStride_8 = value;
	}

	inline static int32_t get_offset_of_Target_9() { return static_cast<int32_t>(offsetof(BufferView_tA426A728440976427358CC00CC2DF72A1FBFED7D, ___Target_9)); }
	inline int32_t get_Target_9() const { return ___Target_9; }
	inline int32_t* get_address_of_Target_9() { return &___Target_9; }
	inline void set_Target_9(int32_t value)
	{
		___Target_9 = value;
	}
};


// System.IO.FileStream
struct  FileStream_tA770BF9AF0906644D43C81B962C7DBC3BC79A418  : public Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7
{
public:
	// System.Byte[] System.IO.FileStream::buf
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___buf_7;
	// System.String System.IO.FileStream::name
	String_t* ___name_8;
	// Microsoft.Win32.SafeHandles.SafeFileHandle System.IO.FileStream::safeHandle
	SafeFileHandle_tE1B31BE63CD11BBF2B9B6A205A72735F32EB1BCB * ___safeHandle_9;
	// System.Boolean System.IO.FileStream::isExposed
	bool ___isExposed_10;
	// System.Int64 System.IO.FileStream::append_startpos
	int64_t ___append_startpos_11;
	// System.IO.FileAccess System.IO.FileStream::access
	int32_t ___access_12;
	// System.Boolean System.IO.FileStream::owner
	bool ___owner_13;
	// System.Boolean System.IO.FileStream::async
	bool ___async_14;
	// System.Boolean System.IO.FileStream::canseek
	bool ___canseek_15;
	// System.Boolean System.IO.FileStream::anonymous
	bool ___anonymous_16;
	// System.Boolean System.IO.FileStream::buf_dirty
	bool ___buf_dirty_17;
	// System.Int32 System.IO.FileStream::buf_size
	int32_t ___buf_size_18;
	// System.Int32 System.IO.FileStream::buf_length
	int32_t ___buf_length_19;
	// System.Int32 System.IO.FileStream::buf_offset
	int32_t ___buf_offset_20;
	// System.Int64 System.IO.FileStream::buf_start
	int64_t ___buf_start_21;

public:
	inline static int32_t get_offset_of_buf_7() { return static_cast<int32_t>(offsetof(FileStream_tA770BF9AF0906644D43C81B962C7DBC3BC79A418, ___buf_7)); }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* get_buf_7() const { return ___buf_7; }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** get_address_of_buf_7() { return &___buf_7; }
	inline void set_buf_7(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* value)
	{
		___buf_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buf_7), (void*)value);
	}

	inline static int32_t get_offset_of_name_8() { return static_cast<int32_t>(offsetof(FileStream_tA770BF9AF0906644D43C81B962C7DBC3BC79A418, ___name_8)); }
	inline String_t* get_name_8() const { return ___name_8; }
	inline String_t** get_address_of_name_8() { return &___name_8; }
	inline void set_name_8(String_t* value)
	{
		___name_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___name_8), (void*)value);
	}

	inline static int32_t get_offset_of_safeHandle_9() { return static_cast<int32_t>(offsetof(FileStream_tA770BF9AF0906644D43C81B962C7DBC3BC79A418, ___safeHandle_9)); }
	inline SafeFileHandle_tE1B31BE63CD11BBF2B9B6A205A72735F32EB1BCB * get_safeHandle_9() const { return ___safeHandle_9; }
	inline SafeFileHandle_tE1B31BE63CD11BBF2B9B6A205A72735F32EB1BCB ** get_address_of_safeHandle_9() { return &___safeHandle_9; }
	inline void set_safeHandle_9(SafeFileHandle_tE1B31BE63CD11BBF2B9B6A205A72735F32EB1BCB * value)
	{
		___safeHandle_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___safeHandle_9), (void*)value);
	}

	inline static int32_t get_offset_of_isExposed_10() { return static_cast<int32_t>(offsetof(FileStream_tA770BF9AF0906644D43C81B962C7DBC3BC79A418, ___isExposed_10)); }
	inline bool get_isExposed_10() const { return ___isExposed_10; }
	inline bool* get_address_of_isExposed_10() { return &___isExposed_10; }
	inline void set_isExposed_10(bool value)
	{
		___isExposed_10 = value;
	}

	inline static int32_t get_offset_of_append_startpos_11() { return static_cast<int32_t>(offsetof(FileStream_tA770BF9AF0906644D43C81B962C7DBC3BC79A418, ___append_startpos_11)); }
	inline int64_t get_append_startpos_11() const { return ___append_startpos_11; }
	inline int64_t* get_address_of_append_startpos_11() { return &___append_startpos_11; }
	inline void set_append_startpos_11(int64_t value)
	{
		___append_startpos_11 = value;
	}

	inline static int32_t get_offset_of_access_12() { return static_cast<int32_t>(offsetof(FileStream_tA770BF9AF0906644D43C81B962C7DBC3BC79A418, ___access_12)); }
	inline int32_t get_access_12() const { return ___access_12; }
	inline int32_t* get_address_of_access_12() { return &___access_12; }
	inline void set_access_12(int32_t value)
	{
		___access_12 = value;
	}

	inline static int32_t get_offset_of_owner_13() { return static_cast<int32_t>(offsetof(FileStream_tA770BF9AF0906644D43C81B962C7DBC3BC79A418, ___owner_13)); }
	inline bool get_owner_13() const { return ___owner_13; }
	inline bool* get_address_of_owner_13() { return &___owner_13; }
	inline void set_owner_13(bool value)
	{
		___owner_13 = value;
	}

	inline static int32_t get_offset_of_async_14() { return static_cast<int32_t>(offsetof(FileStream_tA770BF9AF0906644D43C81B962C7DBC3BC79A418, ___async_14)); }
	inline bool get_async_14() const { return ___async_14; }
	inline bool* get_address_of_async_14() { return &___async_14; }
	inline void set_async_14(bool value)
	{
		___async_14 = value;
	}

	inline static int32_t get_offset_of_canseek_15() { return static_cast<int32_t>(offsetof(FileStream_tA770BF9AF0906644D43C81B962C7DBC3BC79A418, ___canseek_15)); }
	inline bool get_canseek_15() const { return ___canseek_15; }
	inline bool* get_address_of_canseek_15() { return &___canseek_15; }
	inline void set_canseek_15(bool value)
	{
		___canseek_15 = value;
	}

	inline static int32_t get_offset_of_anonymous_16() { return static_cast<int32_t>(offsetof(FileStream_tA770BF9AF0906644D43C81B962C7DBC3BC79A418, ___anonymous_16)); }
	inline bool get_anonymous_16() const { return ___anonymous_16; }
	inline bool* get_address_of_anonymous_16() { return &___anonymous_16; }
	inline void set_anonymous_16(bool value)
	{
		___anonymous_16 = value;
	}

	inline static int32_t get_offset_of_buf_dirty_17() { return static_cast<int32_t>(offsetof(FileStream_tA770BF9AF0906644D43C81B962C7DBC3BC79A418, ___buf_dirty_17)); }
	inline bool get_buf_dirty_17() const { return ___buf_dirty_17; }
	inline bool* get_address_of_buf_dirty_17() { return &___buf_dirty_17; }
	inline void set_buf_dirty_17(bool value)
	{
		___buf_dirty_17 = value;
	}

	inline static int32_t get_offset_of_buf_size_18() { return static_cast<int32_t>(offsetof(FileStream_tA770BF9AF0906644D43C81B962C7DBC3BC79A418, ___buf_size_18)); }
	inline int32_t get_buf_size_18() const { return ___buf_size_18; }
	inline int32_t* get_address_of_buf_size_18() { return &___buf_size_18; }
	inline void set_buf_size_18(int32_t value)
	{
		___buf_size_18 = value;
	}

	inline static int32_t get_offset_of_buf_length_19() { return static_cast<int32_t>(offsetof(FileStream_tA770BF9AF0906644D43C81B962C7DBC3BC79A418, ___buf_length_19)); }
	inline int32_t get_buf_length_19() const { return ___buf_length_19; }
	inline int32_t* get_address_of_buf_length_19() { return &___buf_length_19; }
	inline void set_buf_length_19(int32_t value)
	{
		___buf_length_19 = value;
	}

	inline static int32_t get_offset_of_buf_offset_20() { return static_cast<int32_t>(offsetof(FileStream_tA770BF9AF0906644D43C81B962C7DBC3BC79A418, ___buf_offset_20)); }
	inline int32_t get_buf_offset_20() const { return ___buf_offset_20; }
	inline int32_t* get_address_of_buf_offset_20() { return &___buf_offset_20; }
	inline void set_buf_offset_20(int32_t value)
	{
		___buf_offset_20 = value;
	}

	inline static int32_t get_offset_of_buf_start_21() { return static_cast<int32_t>(offsetof(FileStream_tA770BF9AF0906644D43C81B962C7DBC3BC79A418, ___buf_start_21)); }
	inline int64_t get_buf_start_21() const { return ___buf_start_21; }
	inline int64_t* get_address_of_buf_start_21() { return &___buf_start_21; }
	inline void set_buf_start_21(int64_t value)
	{
		___buf_start_21 = value;
	}
};

struct FileStream_tA770BF9AF0906644D43C81B962C7DBC3BC79A418_StaticFields
{
public:
	// System.Byte[] System.IO.FileStream::buf_recycle
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___buf_recycle_5;
	// System.Object System.IO.FileStream::buf_recycle_lock
	RuntimeObject * ___buf_recycle_lock_6;

public:
	inline static int32_t get_offset_of_buf_recycle_5() { return static_cast<int32_t>(offsetof(FileStream_tA770BF9AF0906644D43C81B962C7DBC3BC79A418_StaticFields, ___buf_recycle_5)); }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* get_buf_recycle_5() const { return ___buf_recycle_5; }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** get_address_of_buf_recycle_5() { return &___buf_recycle_5; }
	inline void set_buf_recycle_5(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* value)
	{
		___buf_recycle_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buf_recycle_5), (void*)value);
	}

	inline static int32_t get_offset_of_buf_recycle_lock_6() { return static_cast<int32_t>(offsetof(FileStream_tA770BF9AF0906644D43C81B962C7DBC3BC79A418_StaticFields, ___buf_recycle_lock_6)); }
	inline RuntimeObject * get_buf_recycle_lock_6() const { return ___buf_recycle_lock_6; }
	inline RuntimeObject ** get_address_of_buf_recycle_lock_6() { return &___buf_recycle_lock_6; }
	inline void set_buf_recycle_lock_6(RuntimeObject * value)
	{
		___buf_recycle_lock_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buf_recycle_lock_6), (void*)value);
	}
};


// System.MulticastDelegate
struct  MulticastDelegate_t  : public Delegate_t
{
public:
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* ___delegates_11;

public:
	inline static int32_t get_offset_of_delegates_11() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___delegates_11)); }
	inline DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* get_delegates_11() const { return ___delegates_11; }
	inline DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86** get_address_of_delegates_11() { return &___delegates_11; }
	inline void set_delegates_11(DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* value)
	{
		___delegates_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___delegates_11), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_11;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_11;
};

// System.Net.Http.Headers.HttpHeaders
struct  HttpHeaders_tF0E0E01200BD0D8141489FB370D60A9F4DBF42A1  : public RuntimeObject
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,System.Net.Http.Headers.HttpHeaders_HeaderBucket> System.Net.Http.Headers.HttpHeaders::headers
	Dictionary_2_t68C9612F2AAB4592A72574ECE587789329FFC1B3 * ___headers_1;
	// System.Net.Http.Headers.HttpHeaderKind System.Net.Http.Headers.HttpHeaders::HeaderKind
	int32_t ___HeaderKind_2;
	// System.Nullable`1<System.Boolean> System.Net.Http.Headers.HttpHeaders::connectionclose
	Nullable_1_t9E6A67BECE376F0623B5C857F5674A0311C41793  ___connectionclose_3;
	// System.Nullable`1<System.Boolean> System.Net.Http.Headers.HttpHeaders::transferEncodingChunked
	Nullable_1_t9E6A67BECE376F0623B5C857F5674A0311C41793  ___transferEncodingChunked_4;

public:
	inline static int32_t get_offset_of_headers_1() { return static_cast<int32_t>(offsetof(HttpHeaders_tF0E0E01200BD0D8141489FB370D60A9F4DBF42A1, ___headers_1)); }
	inline Dictionary_2_t68C9612F2AAB4592A72574ECE587789329FFC1B3 * get_headers_1() const { return ___headers_1; }
	inline Dictionary_2_t68C9612F2AAB4592A72574ECE587789329FFC1B3 ** get_address_of_headers_1() { return &___headers_1; }
	inline void set_headers_1(Dictionary_2_t68C9612F2AAB4592A72574ECE587789329FFC1B3 * value)
	{
		___headers_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___headers_1), (void*)value);
	}

	inline static int32_t get_offset_of_HeaderKind_2() { return static_cast<int32_t>(offsetof(HttpHeaders_tF0E0E01200BD0D8141489FB370D60A9F4DBF42A1, ___HeaderKind_2)); }
	inline int32_t get_HeaderKind_2() const { return ___HeaderKind_2; }
	inline int32_t* get_address_of_HeaderKind_2() { return &___HeaderKind_2; }
	inline void set_HeaderKind_2(int32_t value)
	{
		___HeaderKind_2 = value;
	}

	inline static int32_t get_offset_of_connectionclose_3() { return static_cast<int32_t>(offsetof(HttpHeaders_tF0E0E01200BD0D8141489FB370D60A9F4DBF42A1, ___connectionclose_3)); }
	inline Nullable_1_t9E6A67BECE376F0623B5C857F5674A0311C41793  get_connectionclose_3() const { return ___connectionclose_3; }
	inline Nullable_1_t9E6A67BECE376F0623B5C857F5674A0311C41793 * get_address_of_connectionclose_3() { return &___connectionclose_3; }
	inline void set_connectionclose_3(Nullable_1_t9E6A67BECE376F0623B5C857F5674A0311C41793  value)
	{
		___connectionclose_3 = value;
	}

	inline static int32_t get_offset_of_transferEncodingChunked_4() { return static_cast<int32_t>(offsetof(HttpHeaders_tF0E0E01200BD0D8141489FB370D60A9F4DBF42A1, ___transferEncodingChunked_4)); }
	inline Nullable_1_t9E6A67BECE376F0623B5C857F5674A0311C41793  get_transferEncodingChunked_4() const { return ___transferEncodingChunked_4; }
	inline Nullable_1_t9E6A67BECE376F0623B5C857F5674A0311C41793 * get_address_of_transferEncodingChunked_4() { return &___transferEncodingChunked_4; }
	inline void set_transferEncodingChunked_4(Nullable_1_t9E6A67BECE376F0623B5C857F5674A0311C41793  value)
	{
		___transferEncodingChunked_4 = value;
	}
};

struct HttpHeaders_tF0E0E01200BD0D8141489FB370D60A9F4DBF42A1_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,System.Net.Http.Headers.HeaderInfo> System.Net.Http.Headers.HttpHeaders::known_headers
	Dictionary_2_tEBE1ABD140AD7E9C7019A4D27C5C036F79BA1565 * ___known_headers_0;

public:
	inline static int32_t get_offset_of_known_headers_0() { return static_cast<int32_t>(offsetof(HttpHeaders_tF0E0E01200BD0D8141489FB370D60A9F4DBF42A1_StaticFields, ___known_headers_0)); }
	inline Dictionary_2_tEBE1ABD140AD7E9C7019A4D27C5C036F79BA1565 * get_known_headers_0() const { return ___known_headers_0; }
	inline Dictionary_2_tEBE1ABD140AD7E9C7019A4D27C5C036F79BA1565 ** get_address_of_known_headers_0() { return &___known_headers_0; }
	inline void set_known_headers_0(Dictionary_2_tEBE1ABD140AD7E9C7019A4D27C5C036F79BA1565 * value)
	{
		___known_headers_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___known_headers_0), (void*)value);
	}
};


// System.Net.Http.HttpClient
struct  HttpClient_tC7477E4B30DD5CFE1B41DD9CD2EA1F83DB4DE9E7  : public HttpMessageInvoker_t7270E2BED3201CE430D6C4BECF923454AA526A72
{
public:
	// System.Uri System.Net.Http.HttpClient::base_address
	Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E * ___base_address_3;
	// System.Threading.CancellationTokenSource System.Net.Http.HttpClient::cts
	CancellationTokenSource_tF480B7E74A032667AFBD31F0530D619FB43AD3FE * ___cts_4;
	// System.Boolean System.Net.Http.HttpClient::disposed
	bool ___disposed_5;
	// System.Net.Http.Headers.HttpRequestHeaders System.Net.Http.HttpClient::headers
	HttpRequestHeaders_tD29E9D795891A7A0D4FE8C8AA7BF0E756FCA40D4 * ___headers_6;
	// System.Int64 System.Net.Http.HttpClient::buffer_size
	int64_t ___buffer_size_7;
	// System.TimeSpan System.Net.Http.HttpClient::timeout
	TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  ___timeout_8;

public:
	inline static int32_t get_offset_of_base_address_3() { return static_cast<int32_t>(offsetof(HttpClient_tC7477E4B30DD5CFE1B41DD9CD2EA1F83DB4DE9E7, ___base_address_3)); }
	inline Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E * get_base_address_3() const { return ___base_address_3; }
	inline Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E ** get_address_of_base_address_3() { return &___base_address_3; }
	inline void set_base_address_3(Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E * value)
	{
		___base_address_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___base_address_3), (void*)value);
	}

	inline static int32_t get_offset_of_cts_4() { return static_cast<int32_t>(offsetof(HttpClient_tC7477E4B30DD5CFE1B41DD9CD2EA1F83DB4DE9E7, ___cts_4)); }
	inline CancellationTokenSource_tF480B7E74A032667AFBD31F0530D619FB43AD3FE * get_cts_4() const { return ___cts_4; }
	inline CancellationTokenSource_tF480B7E74A032667AFBD31F0530D619FB43AD3FE ** get_address_of_cts_4() { return &___cts_4; }
	inline void set_cts_4(CancellationTokenSource_tF480B7E74A032667AFBD31F0530D619FB43AD3FE * value)
	{
		___cts_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___cts_4), (void*)value);
	}

	inline static int32_t get_offset_of_disposed_5() { return static_cast<int32_t>(offsetof(HttpClient_tC7477E4B30DD5CFE1B41DD9CD2EA1F83DB4DE9E7, ___disposed_5)); }
	inline bool get_disposed_5() const { return ___disposed_5; }
	inline bool* get_address_of_disposed_5() { return &___disposed_5; }
	inline void set_disposed_5(bool value)
	{
		___disposed_5 = value;
	}

	inline static int32_t get_offset_of_headers_6() { return static_cast<int32_t>(offsetof(HttpClient_tC7477E4B30DD5CFE1B41DD9CD2EA1F83DB4DE9E7, ___headers_6)); }
	inline HttpRequestHeaders_tD29E9D795891A7A0D4FE8C8AA7BF0E756FCA40D4 * get_headers_6() const { return ___headers_6; }
	inline HttpRequestHeaders_tD29E9D795891A7A0D4FE8C8AA7BF0E756FCA40D4 ** get_address_of_headers_6() { return &___headers_6; }
	inline void set_headers_6(HttpRequestHeaders_tD29E9D795891A7A0D4FE8C8AA7BF0E756FCA40D4 * value)
	{
		___headers_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___headers_6), (void*)value);
	}

	inline static int32_t get_offset_of_buffer_size_7() { return static_cast<int32_t>(offsetof(HttpClient_tC7477E4B30DD5CFE1B41DD9CD2EA1F83DB4DE9E7, ___buffer_size_7)); }
	inline int64_t get_buffer_size_7() const { return ___buffer_size_7; }
	inline int64_t* get_address_of_buffer_size_7() { return &___buffer_size_7; }
	inline void set_buffer_size_7(int64_t value)
	{
		___buffer_size_7 = value;
	}

	inline static int32_t get_offset_of_timeout_8() { return static_cast<int32_t>(offsetof(HttpClient_tC7477E4B30DD5CFE1B41DD9CD2EA1F83DB4DE9E7, ___timeout_8)); }
	inline TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  get_timeout_8() const { return ___timeout_8; }
	inline TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4 * get_address_of_timeout_8() { return &___timeout_8; }
	inline void set_timeout_8(TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  value)
	{
		___timeout_8 = value;
	}
};

struct HttpClient_tC7477E4B30DD5CFE1B41DD9CD2EA1F83DB4DE9E7_StaticFields
{
public:
	// System.TimeSpan System.Net.Http.HttpClient::TimeoutDefault
	TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  ___TimeoutDefault_2;

public:
	inline static int32_t get_offset_of_TimeoutDefault_2() { return static_cast<int32_t>(offsetof(HttpClient_tC7477E4B30DD5CFE1B41DD9CD2EA1F83DB4DE9E7_StaticFields, ___TimeoutDefault_2)); }
	inline TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  get_TimeoutDefault_2() const { return ___TimeoutDefault_2; }
	inline TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4 * get_address_of_TimeoutDefault_2() { return &___TimeoutDefault_2; }
	inline void set_TimeoutDefault_2(TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  value)
	{
		___TimeoutDefault_2 = value;
	}
};


// System.Net.Http.HttpRequestException
struct  HttpRequestException_tD4D14C20B90F362C83781589E7508A05E7060349  : public Exception_t
{
public:

public:
};


// System.Net.Http.HttpResponseMessage
struct  HttpResponseMessage_t619DB9FDC8E63CDF2D0A314B61A4C6609A43F904  : public RuntimeObject
{
public:
	// System.Net.Http.Headers.HttpResponseHeaders System.Net.Http.HttpResponseMessage::headers
	HttpResponseHeaders_t51F7C46C9CE47E3B424A6137CE8F5BCA4E2B1D59 * ___headers_0;
	// System.String System.Net.Http.HttpResponseMessage::reasonPhrase
	String_t* ___reasonPhrase_1;
	// System.Net.HttpStatusCode System.Net.Http.HttpResponseMessage::statusCode
	int32_t ___statusCode_2;
	// System.Version System.Net.Http.HttpResponseMessage::version
	Version_tDBE6876C59B6F56D4F8CAA03851177ABC6FE0DFD * ___version_3;
	// System.Boolean System.Net.Http.HttpResponseMessage::disposed
	bool ___disposed_4;
	// System.Net.Http.HttpContent System.Net.Http.HttpResponseMessage::<Content>k__BackingField
	HttpContent_t678722F60CA151DD19AFCA917657BE24F111A41D * ___U3CContentU3Ek__BackingField_5;
	// System.Net.Http.HttpRequestMessage System.Net.Http.HttpResponseMessage::<RequestMessage>k__BackingField
	HttpRequestMessage_tBBC9EBC5D6C1B7E30F9927AABBDB65792FFB5427 * ___U3CRequestMessageU3Ek__BackingField_6;

public:
	inline static int32_t get_offset_of_headers_0() { return static_cast<int32_t>(offsetof(HttpResponseMessage_t619DB9FDC8E63CDF2D0A314B61A4C6609A43F904, ___headers_0)); }
	inline HttpResponseHeaders_t51F7C46C9CE47E3B424A6137CE8F5BCA4E2B1D59 * get_headers_0() const { return ___headers_0; }
	inline HttpResponseHeaders_t51F7C46C9CE47E3B424A6137CE8F5BCA4E2B1D59 ** get_address_of_headers_0() { return &___headers_0; }
	inline void set_headers_0(HttpResponseHeaders_t51F7C46C9CE47E3B424A6137CE8F5BCA4E2B1D59 * value)
	{
		___headers_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___headers_0), (void*)value);
	}

	inline static int32_t get_offset_of_reasonPhrase_1() { return static_cast<int32_t>(offsetof(HttpResponseMessage_t619DB9FDC8E63CDF2D0A314B61A4C6609A43F904, ___reasonPhrase_1)); }
	inline String_t* get_reasonPhrase_1() const { return ___reasonPhrase_1; }
	inline String_t** get_address_of_reasonPhrase_1() { return &___reasonPhrase_1; }
	inline void set_reasonPhrase_1(String_t* value)
	{
		___reasonPhrase_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___reasonPhrase_1), (void*)value);
	}

	inline static int32_t get_offset_of_statusCode_2() { return static_cast<int32_t>(offsetof(HttpResponseMessage_t619DB9FDC8E63CDF2D0A314B61A4C6609A43F904, ___statusCode_2)); }
	inline int32_t get_statusCode_2() const { return ___statusCode_2; }
	inline int32_t* get_address_of_statusCode_2() { return &___statusCode_2; }
	inline void set_statusCode_2(int32_t value)
	{
		___statusCode_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(HttpResponseMessage_t619DB9FDC8E63CDF2D0A314B61A4C6609A43F904, ___version_3)); }
	inline Version_tDBE6876C59B6F56D4F8CAA03851177ABC6FE0DFD * get_version_3() const { return ___version_3; }
	inline Version_tDBE6876C59B6F56D4F8CAA03851177ABC6FE0DFD ** get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(Version_tDBE6876C59B6F56D4F8CAA03851177ABC6FE0DFD * value)
	{
		___version_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___version_3), (void*)value);
	}

	inline static int32_t get_offset_of_disposed_4() { return static_cast<int32_t>(offsetof(HttpResponseMessage_t619DB9FDC8E63CDF2D0A314B61A4C6609A43F904, ___disposed_4)); }
	inline bool get_disposed_4() const { return ___disposed_4; }
	inline bool* get_address_of_disposed_4() { return &___disposed_4; }
	inline void set_disposed_4(bool value)
	{
		___disposed_4 = value;
	}

	inline static int32_t get_offset_of_U3CContentU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(HttpResponseMessage_t619DB9FDC8E63CDF2D0A314B61A4C6609A43F904, ___U3CContentU3Ek__BackingField_5)); }
	inline HttpContent_t678722F60CA151DD19AFCA917657BE24F111A41D * get_U3CContentU3Ek__BackingField_5() const { return ___U3CContentU3Ek__BackingField_5; }
	inline HttpContent_t678722F60CA151DD19AFCA917657BE24F111A41D ** get_address_of_U3CContentU3Ek__BackingField_5() { return &___U3CContentU3Ek__BackingField_5; }
	inline void set_U3CContentU3Ek__BackingField_5(HttpContent_t678722F60CA151DD19AFCA917657BE24F111A41D * value)
	{
		___U3CContentU3Ek__BackingField_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CContentU3Ek__BackingField_5), (void*)value);
	}

	inline static int32_t get_offset_of_U3CRequestMessageU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(HttpResponseMessage_t619DB9FDC8E63CDF2D0A314B61A4C6609A43F904, ___U3CRequestMessageU3Ek__BackingField_6)); }
	inline HttpRequestMessage_tBBC9EBC5D6C1B7E30F9927AABBDB65792FFB5427 * get_U3CRequestMessageU3Ek__BackingField_6() const { return ___U3CRequestMessageU3Ek__BackingField_6; }
	inline HttpRequestMessage_tBBC9EBC5D6C1B7E30F9927AABBDB65792FFB5427 ** get_address_of_U3CRequestMessageU3Ek__BackingField_6() { return &___U3CRequestMessageU3Ek__BackingField_6; }
	inline void set_U3CRequestMessageU3Ek__BackingField_6(HttpRequestMessage_tBBC9EBC5D6C1B7E30F9927AABBDB65792FFB5427 * value)
	{
		___U3CRequestMessageU3Ek__BackingField_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CRequestMessageU3Ek__BackingField_6), (void*)value);
	}
};


// System.Runtime.CompilerServices.AsyncTaskMethodBuilder
struct  AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487 
{
public:
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Threading.Tasks.VoidTaskResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder::m_builder
	AsyncTaskMethodBuilder_1_t66ED1808B26B8081A2804D6A750D13386E360BD9  ___m_builder_1;

public:
	inline static int32_t get_offset_of_m_builder_1() { return static_cast<int32_t>(offsetof(AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487, ___m_builder_1)); }
	inline AsyncTaskMethodBuilder_1_t66ED1808B26B8081A2804D6A750D13386E360BD9  get_m_builder_1() const { return ___m_builder_1; }
	inline AsyncTaskMethodBuilder_1_t66ED1808B26B8081A2804D6A750D13386E360BD9 * get_address_of_m_builder_1() { return &___m_builder_1; }
	inline void set_m_builder_1(AsyncTaskMethodBuilder_1_t66ED1808B26B8081A2804D6A750D13386E360BD9  value)
	{
		___m_builder_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_builder_1))->___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_builder_1))->___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_builder_1))->___m_task_2), (void*)NULL);
		#endif
	}
};

struct AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487_StaticFields
{
public:
	// System.Threading.Tasks.Task`1<System.Threading.Tasks.VoidTaskResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder::s_cachedCompleted
	Task_1_t1359D75350E9D976BFA28AD96E417450DE277673 * ___s_cachedCompleted_0;

public:
	inline static int32_t get_offset_of_s_cachedCompleted_0() { return static_cast<int32_t>(offsetof(AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487_StaticFields, ___s_cachedCompleted_0)); }
	inline Task_1_t1359D75350E9D976BFA28AD96E417450DE277673 * get_s_cachedCompleted_0() const { return ___s_cachedCompleted_0; }
	inline Task_1_t1359D75350E9D976BFA28AD96E417450DE277673 ** get_address_of_s_cachedCompleted_0() { return &___s_cachedCompleted_0; }
	inline void set_s_cachedCompleted_0(Task_1_t1359D75350E9D976BFA28AD96E417450DE277673 * value)
	{
		___s_cachedCompleted_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_cachedCompleted_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Runtime.CompilerServices.AsyncTaskMethodBuilder
struct AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487_marshaled_pinvoke
{
	AsyncTaskMethodBuilder_1_t66ED1808B26B8081A2804D6A750D13386E360BD9  ___m_builder_1;
};
// Native definition for COM marshalling of System.Runtime.CompilerServices.AsyncTaskMethodBuilder
struct AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487_marshaled_com
{
	AsyncTaskMethodBuilder_1_t66ED1808B26B8081A2804D6A750D13386E360BD9  ___m_builder_1;
};

// System.Runtime.Serialization.StreamingContext
struct  StreamingContext_t2CCDC54E0E8D078AF4A50E3A8B921B828A900034 
{
public:
	// System.Object System.Runtime.Serialization.StreamingContext::m_additionalContext
	RuntimeObject * ___m_additionalContext_0;
	// System.Runtime.Serialization.StreamingContextStates System.Runtime.Serialization.StreamingContext::m_state
	int32_t ___m_state_1;

public:
	inline static int32_t get_offset_of_m_additionalContext_0() { return static_cast<int32_t>(offsetof(StreamingContext_t2CCDC54E0E8D078AF4A50E3A8B921B828A900034, ___m_additionalContext_0)); }
	inline RuntimeObject * get_m_additionalContext_0() const { return ___m_additionalContext_0; }
	inline RuntimeObject ** get_address_of_m_additionalContext_0() { return &___m_additionalContext_0; }
	inline void set_m_additionalContext_0(RuntimeObject * value)
	{
		___m_additionalContext_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_additionalContext_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_state_1() { return static_cast<int32_t>(offsetof(StreamingContext_t2CCDC54E0E8D078AF4A50E3A8B921B828A900034, ___m_state_1)); }
	inline int32_t get_m_state_1() const { return ___m_state_1; }
	inline int32_t* get_address_of_m_state_1() { return &___m_state_1; }
	inline void set_m_state_1(int32_t value)
	{
		___m_state_1 = value;
	}
};

// Native definition for P/Invoke marshalling of System.Runtime.Serialization.StreamingContext
struct StreamingContext_t2CCDC54E0E8D078AF4A50E3A8B921B828A900034_marshaled_pinvoke
{
	Il2CppIUnknown* ___m_additionalContext_0;
	int32_t ___m_state_1;
};
// Native definition for COM marshalling of System.Runtime.Serialization.StreamingContext
struct StreamingContext_t2CCDC54E0E8D078AF4A50E3A8B921B828A900034_marshaled_com
{
	Il2CppIUnknown* ___m_additionalContext_0;
	int32_t ___m_state_1;
};

// System.Security.Cryptography.X509Certificates.X509ChainPolicy
struct  X509ChainPolicy_tCA1D9E9842A16ACD71D35E9C36659E3E861D74DD  : public RuntimeObject
{
public:
	// System.Security.Cryptography.OidCollection System.Security.Cryptography.X509Certificates.X509ChainPolicy::apps
	OidCollection_tEB423F1150E53DCF513BF5A699F911586A31B94E * ___apps_0;
	// System.Security.Cryptography.OidCollection System.Security.Cryptography.X509Certificates.X509ChainPolicy::cert
	OidCollection_tEB423F1150E53DCF513BF5A699F911586A31B94E * ___cert_1;
	// System.Security.Cryptography.X509Certificates.X509CertificateCollection System.Security.Cryptography.X509Certificates.X509ChainPolicy::store
	X509CertificateCollection_t824A6C58D0D1B4A7CAE30F26CE8EE4B23A8A1833 * ___store_2;
	// System.Security.Cryptography.X509Certificates.X509Certificate2Collection System.Security.Cryptography.X509Certificates.X509ChainPolicy::store2
	X509Certificate2Collection_t14D64A5A2CFE4EA1782A417F975C2AB85BDA190D * ___store2_3;
	// System.Security.Cryptography.X509Certificates.X509RevocationFlag System.Security.Cryptography.X509Certificates.X509ChainPolicy::rflag
	int32_t ___rflag_4;
	// System.Security.Cryptography.X509Certificates.X509RevocationMode System.Security.Cryptography.X509Certificates.X509ChainPolicy::mode
	int32_t ___mode_5;
	// System.TimeSpan System.Security.Cryptography.X509Certificates.X509ChainPolicy::timeout
	TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  ___timeout_6;
	// System.Security.Cryptography.X509Certificates.X509VerificationFlags System.Security.Cryptography.X509Certificates.X509ChainPolicy::vflags
	int32_t ___vflags_7;
	// System.DateTime System.Security.Cryptography.X509Certificates.X509ChainPolicy::vtime
	DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  ___vtime_8;

public:
	inline static int32_t get_offset_of_apps_0() { return static_cast<int32_t>(offsetof(X509ChainPolicy_tCA1D9E9842A16ACD71D35E9C36659E3E861D74DD, ___apps_0)); }
	inline OidCollection_tEB423F1150E53DCF513BF5A699F911586A31B94E * get_apps_0() const { return ___apps_0; }
	inline OidCollection_tEB423F1150E53DCF513BF5A699F911586A31B94E ** get_address_of_apps_0() { return &___apps_0; }
	inline void set_apps_0(OidCollection_tEB423F1150E53DCF513BF5A699F911586A31B94E * value)
	{
		___apps_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___apps_0), (void*)value);
	}

	inline static int32_t get_offset_of_cert_1() { return static_cast<int32_t>(offsetof(X509ChainPolicy_tCA1D9E9842A16ACD71D35E9C36659E3E861D74DD, ___cert_1)); }
	inline OidCollection_tEB423F1150E53DCF513BF5A699F911586A31B94E * get_cert_1() const { return ___cert_1; }
	inline OidCollection_tEB423F1150E53DCF513BF5A699F911586A31B94E ** get_address_of_cert_1() { return &___cert_1; }
	inline void set_cert_1(OidCollection_tEB423F1150E53DCF513BF5A699F911586A31B94E * value)
	{
		___cert_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___cert_1), (void*)value);
	}

	inline static int32_t get_offset_of_store_2() { return static_cast<int32_t>(offsetof(X509ChainPolicy_tCA1D9E9842A16ACD71D35E9C36659E3E861D74DD, ___store_2)); }
	inline X509CertificateCollection_t824A6C58D0D1B4A7CAE30F26CE8EE4B23A8A1833 * get_store_2() const { return ___store_2; }
	inline X509CertificateCollection_t824A6C58D0D1B4A7CAE30F26CE8EE4B23A8A1833 ** get_address_of_store_2() { return &___store_2; }
	inline void set_store_2(X509CertificateCollection_t824A6C58D0D1B4A7CAE30F26CE8EE4B23A8A1833 * value)
	{
		___store_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___store_2), (void*)value);
	}

	inline static int32_t get_offset_of_store2_3() { return static_cast<int32_t>(offsetof(X509ChainPolicy_tCA1D9E9842A16ACD71D35E9C36659E3E861D74DD, ___store2_3)); }
	inline X509Certificate2Collection_t14D64A5A2CFE4EA1782A417F975C2AB85BDA190D * get_store2_3() const { return ___store2_3; }
	inline X509Certificate2Collection_t14D64A5A2CFE4EA1782A417F975C2AB85BDA190D ** get_address_of_store2_3() { return &___store2_3; }
	inline void set_store2_3(X509Certificate2Collection_t14D64A5A2CFE4EA1782A417F975C2AB85BDA190D * value)
	{
		___store2_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___store2_3), (void*)value);
	}

	inline static int32_t get_offset_of_rflag_4() { return static_cast<int32_t>(offsetof(X509ChainPolicy_tCA1D9E9842A16ACD71D35E9C36659E3E861D74DD, ___rflag_4)); }
	inline int32_t get_rflag_4() const { return ___rflag_4; }
	inline int32_t* get_address_of_rflag_4() { return &___rflag_4; }
	inline void set_rflag_4(int32_t value)
	{
		___rflag_4 = value;
	}

	inline static int32_t get_offset_of_mode_5() { return static_cast<int32_t>(offsetof(X509ChainPolicy_tCA1D9E9842A16ACD71D35E9C36659E3E861D74DD, ___mode_5)); }
	inline int32_t get_mode_5() const { return ___mode_5; }
	inline int32_t* get_address_of_mode_5() { return &___mode_5; }
	inline void set_mode_5(int32_t value)
	{
		___mode_5 = value;
	}

	inline static int32_t get_offset_of_timeout_6() { return static_cast<int32_t>(offsetof(X509ChainPolicy_tCA1D9E9842A16ACD71D35E9C36659E3E861D74DD, ___timeout_6)); }
	inline TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  get_timeout_6() const { return ___timeout_6; }
	inline TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4 * get_address_of_timeout_6() { return &___timeout_6; }
	inline void set_timeout_6(TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  value)
	{
		___timeout_6 = value;
	}

	inline static int32_t get_offset_of_vflags_7() { return static_cast<int32_t>(offsetof(X509ChainPolicy_tCA1D9E9842A16ACD71D35E9C36659E3E861D74DD, ___vflags_7)); }
	inline int32_t get_vflags_7() const { return ___vflags_7; }
	inline int32_t* get_address_of_vflags_7() { return &___vflags_7; }
	inline void set_vflags_7(int32_t value)
	{
		___vflags_7 = value;
	}

	inline static int32_t get_offset_of_vtime_8() { return static_cast<int32_t>(offsetof(X509ChainPolicy_tCA1D9E9842A16ACD71D35E9C36659E3E861D74DD, ___vtime_8)); }
	inline DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  get_vtime_8() const { return ___vtime_8; }
	inline DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132 * get_address_of_vtime_8() { return &___vtime_8; }
	inline void set_vtime_8(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  value)
	{
		___vtime_8 = value;
	}
};


// System.Security.Cryptography.X509Certificates.X509ChainStatus
struct  X509ChainStatus_t9E05BD8700EA6158AC82F71CBE53AD20F6B99B0C 
{
public:
	// System.Security.Cryptography.X509Certificates.X509ChainStatusFlags System.Security.Cryptography.X509Certificates.X509ChainStatus::status
	int32_t ___status_0;
	// System.String System.Security.Cryptography.X509Certificates.X509ChainStatus::info
	String_t* ___info_1;

public:
	inline static int32_t get_offset_of_status_0() { return static_cast<int32_t>(offsetof(X509ChainStatus_t9E05BD8700EA6158AC82F71CBE53AD20F6B99B0C, ___status_0)); }
	inline int32_t get_status_0() const { return ___status_0; }
	inline int32_t* get_address_of_status_0() { return &___status_0; }
	inline void set_status_0(int32_t value)
	{
		___status_0 = value;
	}

	inline static int32_t get_offset_of_info_1() { return static_cast<int32_t>(offsetof(X509ChainStatus_t9E05BD8700EA6158AC82F71CBE53AD20F6B99B0C, ___info_1)); }
	inline String_t* get_info_1() const { return ___info_1; }
	inline String_t** get_address_of_info_1() { return &___info_1; }
	inline void set_info_1(String_t* value)
	{
		___info_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___info_1), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Security.Cryptography.X509Certificates.X509ChainStatus
struct X509ChainStatus_t9E05BD8700EA6158AC82F71CBE53AD20F6B99B0C_marshaled_pinvoke
{
	int32_t ___status_0;
	char* ___info_1;
};
// Native definition for COM marshalling of System.Security.Cryptography.X509Certificates.X509ChainStatus
struct X509ChainStatus_t9E05BD8700EA6158AC82F71CBE53AD20F6B99B0C_marshaled_com
{
	int32_t ___status_0;
	Il2CppChar* ___info_1;
};

// System.SystemException
struct  SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782  : public Exception_t
{
public:

public:
};


// System.Threading.Tasks.Task`1<System.IO.Stream>
struct  Task_1_tAA7557E5A6A8B2C89E44907CB5B0502A618E9D01  : public Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2
{
public:
	// TResult System.Threading.Tasks.Task`1::m_result
	Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * ___m_result_40;

public:
	inline static int32_t get_offset_of_m_result_40() { return static_cast<int32_t>(offsetof(Task_1_tAA7557E5A6A8B2C89E44907CB5B0502A618E9D01, ___m_result_40)); }
	inline Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * get_m_result_40() const { return ___m_result_40; }
	inline Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 ** get_address_of_m_result_40() { return &___m_result_40; }
	inline void set_m_result_40(Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * value)
	{
		___m_result_40 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_result_40), (void*)value);
	}
};

struct Task_1_tAA7557E5A6A8B2C89E44907CB5B0502A618E9D01_StaticFields
{
public:
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_Factory
	TaskFactory_1_tE7B6DC2F22643759D47ED49CDDBD8C35D9383D8F * ___s_Factory_41;
	// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<TResult>> System.Threading.Tasks.Task`1::TaskWhenAnyCast
	Func_2_t97AE46232676B6C4CB84D0101A45061F2288FCE5 * ___TaskWhenAnyCast_42;

public:
	inline static int32_t get_offset_of_s_Factory_41() { return static_cast<int32_t>(offsetof(Task_1_tAA7557E5A6A8B2C89E44907CB5B0502A618E9D01_StaticFields, ___s_Factory_41)); }
	inline TaskFactory_1_tE7B6DC2F22643759D47ED49CDDBD8C35D9383D8F * get_s_Factory_41() const { return ___s_Factory_41; }
	inline TaskFactory_1_tE7B6DC2F22643759D47ED49CDDBD8C35D9383D8F ** get_address_of_s_Factory_41() { return &___s_Factory_41; }
	inline void set_s_Factory_41(TaskFactory_1_tE7B6DC2F22643759D47ED49CDDBD8C35D9383D8F * value)
	{
		___s_Factory_41 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Factory_41), (void*)value);
	}

	inline static int32_t get_offset_of_TaskWhenAnyCast_42() { return static_cast<int32_t>(offsetof(Task_1_tAA7557E5A6A8B2C89E44907CB5B0502A618E9D01_StaticFields, ___TaskWhenAnyCast_42)); }
	inline Func_2_t97AE46232676B6C4CB84D0101A45061F2288FCE5 * get_TaskWhenAnyCast_42() const { return ___TaskWhenAnyCast_42; }
	inline Func_2_t97AE46232676B6C4CB84D0101A45061F2288FCE5 ** get_address_of_TaskWhenAnyCast_42() { return &___TaskWhenAnyCast_42; }
	inline void set_TaskWhenAnyCast_42(Func_2_t97AE46232676B6C4CB84D0101A45061F2288FCE5 * value)
	{
		___TaskWhenAnyCast_42 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TaskWhenAnyCast_42), (void*)value);
	}
};


// System.Threading.Tasks.Task`1<System.Net.Http.HttpResponseMessage>
struct  Task_1_t519CB3A303B53176BD616AC273201D66B84FF270  : public Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2
{
public:
	// TResult System.Threading.Tasks.Task`1::m_result
	HttpResponseMessage_t619DB9FDC8E63CDF2D0A314B61A4C6609A43F904 * ___m_result_40;

public:
	inline static int32_t get_offset_of_m_result_40() { return static_cast<int32_t>(offsetof(Task_1_t519CB3A303B53176BD616AC273201D66B84FF270, ___m_result_40)); }
	inline HttpResponseMessage_t619DB9FDC8E63CDF2D0A314B61A4C6609A43F904 * get_m_result_40() const { return ___m_result_40; }
	inline HttpResponseMessage_t619DB9FDC8E63CDF2D0A314B61A4C6609A43F904 ** get_address_of_m_result_40() { return &___m_result_40; }
	inline void set_m_result_40(HttpResponseMessage_t619DB9FDC8E63CDF2D0A314B61A4C6609A43F904 * value)
	{
		___m_result_40 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_result_40), (void*)value);
	}
};

struct Task_1_t519CB3A303B53176BD616AC273201D66B84FF270_StaticFields
{
public:
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_Factory
	TaskFactory_1_t580CAEE6F335CE6435DE183D51DA8D7334623D89 * ___s_Factory_41;
	// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<TResult>> System.Threading.Tasks.Task`1::TaskWhenAnyCast
	Func_2_tFB268CDB738B6CBC785B7ECDDE8052F2D44D367C * ___TaskWhenAnyCast_42;

public:
	inline static int32_t get_offset_of_s_Factory_41() { return static_cast<int32_t>(offsetof(Task_1_t519CB3A303B53176BD616AC273201D66B84FF270_StaticFields, ___s_Factory_41)); }
	inline TaskFactory_1_t580CAEE6F335CE6435DE183D51DA8D7334623D89 * get_s_Factory_41() const { return ___s_Factory_41; }
	inline TaskFactory_1_t580CAEE6F335CE6435DE183D51DA8D7334623D89 ** get_address_of_s_Factory_41() { return &___s_Factory_41; }
	inline void set_s_Factory_41(TaskFactory_1_t580CAEE6F335CE6435DE183D51DA8D7334623D89 * value)
	{
		___s_Factory_41 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Factory_41), (void*)value);
	}

	inline static int32_t get_offset_of_TaskWhenAnyCast_42() { return static_cast<int32_t>(offsetof(Task_1_t519CB3A303B53176BD616AC273201D66B84FF270_StaticFields, ___TaskWhenAnyCast_42)); }
	inline Func_2_tFB268CDB738B6CBC785B7ECDDE8052F2D44D367C * get_TaskWhenAnyCast_42() const { return ___TaskWhenAnyCast_42; }
	inline Func_2_tFB268CDB738B6CBC785B7ECDDE8052F2D44D367C ** get_address_of_TaskWhenAnyCast_42() { return &___TaskWhenAnyCast_42; }
	inline void set_TaskWhenAnyCast_42(Func_2_tFB268CDB738B6CBC785B7ECDDE8052F2D44D367C * value)
	{
		___TaskWhenAnyCast_42 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TaskWhenAnyCast_42), (void*)value);
	}
};


// System.Threading.Tasks.Task`1<UnityEngine.GameObject>
struct  Task_1_t5029FFD61E4B10A1E614C1D97F1F0FA5B04557EC  : public Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2
{
public:
	// TResult System.Threading.Tasks.Task`1::m_result
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___m_result_40;

public:
	inline static int32_t get_offset_of_m_result_40() { return static_cast<int32_t>(offsetof(Task_1_t5029FFD61E4B10A1E614C1D97F1F0FA5B04557EC, ___m_result_40)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_m_result_40() const { return ___m_result_40; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_m_result_40() { return &___m_result_40; }
	inline void set_m_result_40(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___m_result_40 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_result_40), (void*)value);
	}
};

struct Task_1_t5029FFD61E4B10A1E614C1D97F1F0FA5B04557EC_StaticFields
{
public:
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_Factory
	TaskFactory_1_t178035BCBEC1546FC38538222A9C3DBFB601ABFE * ___s_Factory_41;
	// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<TResult>> System.Threading.Tasks.Task`1::TaskWhenAnyCast
	Func_2_tAA953F5200B1F78C214ABA91EBDFD38B015A7E4F * ___TaskWhenAnyCast_42;

public:
	inline static int32_t get_offset_of_s_Factory_41() { return static_cast<int32_t>(offsetof(Task_1_t5029FFD61E4B10A1E614C1D97F1F0FA5B04557EC_StaticFields, ___s_Factory_41)); }
	inline TaskFactory_1_t178035BCBEC1546FC38538222A9C3DBFB601ABFE * get_s_Factory_41() const { return ___s_Factory_41; }
	inline TaskFactory_1_t178035BCBEC1546FC38538222A9C3DBFB601ABFE ** get_address_of_s_Factory_41() { return &___s_Factory_41; }
	inline void set_s_Factory_41(TaskFactory_1_t178035BCBEC1546FC38538222A9C3DBFB601ABFE * value)
	{
		___s_Factory_41 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Factory_41), (void*)value);
	}

	inline static int32_t get_offset_of_TaskWhenAnyCast_42() { return static_cast<int32_t>(offsetof(Task_1_t5029FFD61E4B10A1E614C1D97F1F0FA5B04557EC_StaticFields, ___TaskWhenAnyCast_42)); }
	inline Func_2_tAA953F5200B1F78C214ABA91EBDFD38B015A7E4F * get_TaskWhenAnyCast_42() const { return ___TaskWhenAnyCast_42; }
	inline Func_2_tAA953F5200B1F78C214ABA91EBDFD38B015A7E4F ** get_address_of_TaskWhenAnyCast_42() { return &___TaskWhenAnyCast_42; }
	inline void set_TaskWhenAnyCast_42(Func_2_tAA953F5200B1F78C214ABA91EBDFD38B015A7E4F * value)
	{
		___TaskWhenAnyCast_42 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TaskWhenAnyCast_42), (void*)value);
	}
};


// System.Uri
struct  Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E  : public RuntimeObject
{
public:
	// System.String System.Uri::m_String
	String_t* ___m_String_13;
	// System.String System.Uri::m_originalUnicodeString
	String_t* ___m_originalUnicodeString_14;
	// System.UriParser System.Uri::m_Syntax
	UriParser_t07C77D673CCE8D2DA253B8A7ACCB010147F1A4AC * ___m_Syntax_15;
	// System.String System.Uri::m_DnsSafeHost
	String_t* ___m_DnsSafeHost_16;
	// System.Uri_Flags System.Uri::m_Flags
	uint64_t ___m_Flags_17;
	// System.Uri_UriInfo System.Uri::m_Info
	UriInfo_t9FCC6BD4EC1EA14D75209E6A35417057BF6EDC5E * ___m_Info_18;
	// System.Boolean System.Uri::m_iriParsing
	bool ___m_iriParsing_19;

public:
	inline static int32_t get_offset_of_m_String_13() { return static_cast<int32_t>(offsetof(Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E, ___m_String_13)); }
	inline String_t* get_m_String_13() const { return ___m_String_13; }
	inline String_t** get_address_of_m_String_13() { return &___m_String_13; }
	inline void set_m_String_13(String_t* value)
	{
		___m_String_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_String_13), (void*)value);
	}

	inline static int32_t get_offset_of_m_originalUnicodeString_14() { return static_cast<int32_t>(offsetof(Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E, ___m_originalUnicodeString_14)); }
	inline String_t* get_m_originalUnicodeString_14() const { return ___m_originalUnicodeString_14; }
	inline String_t** get_address_of_m_originalUnicodeString_14() { return &___m_originalUnicodeString_14; }
	inline void set_m_originalUnicodeString_14(String_t* value)
	{
		___m_originalUnicodeString_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_originalUnicodeString_14), (void*)value);
	}

	inline static int32_t get_offset_of_m_Syntax_15() { return static_cast<int32_t>(offsetof(Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E, ___m_Syntax_15)); }
	inline UriParser_t07C77D673CCE8D2DA253B8A7ACCB010147F1A4AC * get_m_Syntax_15() const { return ___m_Syntax_15; }
	inline UriParser_t07C77D673CCE8D2DA253B8A7ACCB010147F1A4AC ** get_address_of_m_Syntax_15() { return &___m_Syntax_15; }
	inline void set_m_Syntax_15(UriParser_t07C77D673CCE8D2DA253B8A7ACCB010147F1A4AC * value)
	{
		___m_Syntax_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Syntax_15), (void*)value);
	}

	inline static int32_t get_offset_of_m_DnsSafeHost_16() { return static_cast<int32_t>(offsetof(Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E, ___m_DnsSafeHost_16)); }
	inline String_t* get_m_DnsSafeHost_16() const { return ___m_DnsSafeHost_16; }
	inline String_t** get_address_of_m_DnsSafeHost_16() { return &___m_DnsSafeHost_16; }
	inline void set_m_DnsSafeHost_16(String_t* value)
	{
		___m_DnsSafeHost_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_DnsSafeHost_16), (void*)value);
	}

	inline static int32_t get_offset_of_m_Flags_17() { return static_cast<int32_t>(offsetof(Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E, ___m_Flags_17)); }
	inline uint64_t get_m_Flags_17() const { return ___m_Flags_17; }
	inline uint64_t* get_address_of_m_Flags_17() { return &___m_Flags_17; }
	inline void set_m_Flags_17(uint64_t value)
	{
		___m_Flags_17 = value;
	}

	inline static int32_t get_offset_of_m_Info_18() { return static_cast<int32_t>(offsetof(Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E, ___m_Info_18)); }
	inline UriInfo_t9FCC6BD4EC1EA14D75209E6A35417057BF6EDC5E * get_m_Info_18() const { return ___m_Info_18; }
	inline UriInfo_t9FCC6BD4EC1EA14D75209E6A35417057BF6EDC5E ** get_address_of_m_Info_18() { return &___m_Info_18; }
	inline void set_m_Info_18(UriInfo_t9FCC6BD4EC1EA14D75209E6A35417057BF6EDC5E * value)
	{
		___m_Info_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Info_18), (void*)value);
	}

	inline static int32_t get_offset_of_m_iriParsing_19() { return static_cast<int32_t>(offsetof(Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E, ___m_iriParsing_19)); }
	inline bool get_m_iriParsing_19() const { return ___m_iriParsing_19; }
	inline bool* get_address_of_m_iriParsing_19() { return &___m_iriParsing_19; }
	inline void set_m_iriParsing_19(bool value)
	{
		___m_iriParsing_19 = value;
	}
};

struct Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E_StaticFields
{
public:
	// System.String System.Uri::UriSchemeFile
	String_t* ___UriSchemeFile_0;
	// System.String System.Uri::UriSchemeFtp
	String_t* ___UriSchemeFtp_1;
	// System.String System.Uri::UriSchemeGopher
	String_t* ___UriSchemeGopher_2;
	// System.String System.Uri::UriSchemeHttp
	String_t* ___UriSchemeHttp_3;
	// System.String System.Uri::UriSchemeHttps
	String_t* ___UriSchemeHttps_4;
	// System.String System.Uri::UriSchemeWs
	String_t* ___UriSchemeWs_5;
	// System.String System.Uri::UriSchemeWss
	String_t* ___UriSchemeWss_6;
	// System.String System.Uri::UriSchemeMailto
	String_t* ___UriSchemeMailto_7;
	// System.String System.Uri::UriSchemeNews
	String_t* ___UriSchemeNews_8;
	// System.String System.Uri::UriSchemeNntp
	String_t* ___UriSchemeNntp_9;
	// System.String System.Uri::UriSchemeNetTcp
	String_t* ___UriSchemeNetTcp_10;
	// System.String System.Uri::UriSchemeNetPipe
	String_t* ___UriSchemeNetPipe_11;
	// System.String System.Uri::SchemeDelimiter
	String_t* ___SchemeDelimiter_12;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Uri::s_ConfigInitialized
	bool ___s_ConfigInitialized_20;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Uri::s_ConfigInitializing
	bool ___s_ConfigInitializing_21;
	// System.UriIdnScope modreq(System.Runtime.CompilerServices.IsVolatile) System.Uri::s_IdnScope
	int32_t ___s_IdnScope_22;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Uri::s_IriParsing
	bool ___s_IriParsing_23;
	// System.Boolean System.Uri::useDotNetRelativeOrAbsolute
	bool ___useDotNetRelativeOrAbsolute_24;
	// System.Boolean System.Uri::IsWindowsFileSystem
	bool ___IsWindowsFileSystem_25;
	// System.Object System.Uri::s_initLock
	RuntimeObject * ___s_initLock_26;
	// System.Char[] System.Uri::HexLowerChars
	CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* ___HexLowerChars_27;
	// System.Char[] System.Uri::_WSchars
	CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* ____WSchars_28;

public:
	inline static int32_t get_offset_of_UriSchemeFile_0() { return static_cast<int32_t>(offsetof(Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E_StaticFields, ___UriSchemeFile_0)); }
	inline String_t* get_UriSchemeFile_0() const { return ___UriSchemeFile_0; }
	inline String_t** get_address_of_UriSchemeFile_0() { return &___UriSchemeFile_0; }
	inline void set_UriSchemeFile_0(String_t* value)
	{
		___UriSchemeFile_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UriSchemeFile_0), (void*)value);
	}

	inline static int32_t get_offset_of_UriSchemeFtp_1() { return static_cast<int32_t>(offsetof(Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E_StaticFields, ___UriSchemeFtp_1)); }
	inline String_t* get_UriSchemeFtp_1() const { return ___UriSchemeFtp_1; }
	inline String_t** get_address_of_UriSchemeFtp_1() { return &___UriSchemeFtp_1; }
	inline void set_UriSchemeFtp_1(String_t* value)
	{
		___UriSchemeFtp_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UriSchemeFtp_1), (void*)value);
	}

	inline static int32_t get_offset_of_UriSchemeGopher_2() { return static_cast<int32_t>(offsetof(Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E_StaticFields, ___UriSchemeGopher_2)); }
	inline String_t* get_UriSchemeGopher_2() const { return ___UriSchemeGopher_2; }
	inline String_t** get_address_of_UriSchemeGopher_2() { return &___UriSchemeGopher_2; }
	inline void set_UriSchemeGopher_2(String_t* value)
	{
		___UriSchemeGopher_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UriSchemeGopher_2), (void*)value);
	}

	inline static int32_t get_offset_of_UriSchemeHttp_3() { return static_cast<int32_t>(offsetof(Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E_StaticFields, ___UriSchemeHttp_3)); }
	inline String_t* get_UriSchemeHttp_3() const { return ___UriSchemeHttp_3; }
	inline String_t** get_address_of_UriSchemeHttp_3() { return &___UriSchemeHttp_3; }
	inline void set_UriSchemeHttp_3(String_t* value)
	{
		___UriSchemeHttp_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UriSchemeHttp_3), (void*)value);
	}

	inline static int32_t get_offset_of_UriSchemeHttps_4() { return static_cast<int32_t>(offsetof(Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E_StaticFields, ___UriSchemeHttps_4)); }
	inline String_t* get_UriSchemeHttps_4() const { return ___UriSchemeHttps_4; }
	inline String_t** get_address_of_UriSchemeHttps_4() { return &___UriSchemeHttps_4; }
	inline void set_UriSchemeHttps_4(String_t* value)
	{
		___UriSchemeHttps_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UriSchemeHttps_4), (void*)value);
	}

	inline static int32_t get_offset_of_UriSchemeWs_5() { return static_cast<int32_t>(offsetof(Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E_StaticFields, ___UriSchemeWs_5)); }
	inline String_t* get_UriSchemeWs_5() const { return ___UriSchemeWs_5; }
	inline String_t** get_address_of_UriSchemeWs_5() { return &___UriSchemeWs_5; }
	inline void set_UriSchemeWs_5(String_t* value)
	{
		___UriSchemeWs_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UriSchemeWs_5), (void*)value);
	}

	inline static int32_t get_offset_of_UriSchemeWss_6() { return static_cast<int32_t>(offsetof(Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E_StaticFields, ___UriSchemeWss_6)); }
	inline String_t* get_UriSchemeWss_6() const { return ___UriSchemeWss_6; }
	inline String_t** get_address_of_UriSchemeWss_6() { return &___UriSchemeWss_6; }
	inline void set_UriSchemeWss_6(String_t* value)
	{
		___UriSchemeWss_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UriSchemeWss_6), (void*)value);
	}

	inline static int32_t get_offset_of_UriSchemeMailto_7() { return static_cast<int32_t>(offsetof(Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E_StaticFields, ___UriSchemeMailto_7)); }
	inline String_t* get_UriSchemeMailto_7() const { return ___UriSchemeMailto_7; }
	inline String_t** get_address_of_UriSchemeMailto_7() { return &___UriSchemeMailto_7; }
	inline void set_UriSchemeMailto_7(String_t* value)
	{
		___UriSchemeMailto_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UriSchemeMailto_7), (void*)value);
	}

	inline static int32_t get_offset_of_UriSchemeNews_8() { return static_cast<int32_t>(offsetof(Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E_StaticFields, ___UriSchemeNews_8)); }
	inline String_t* get_UriSchemeNews_8() const { return ___UriSchemeNews_8; }
	inline String_t** get_address_of_UriSchemeNews_8() { return &___UriSchemeNews_8; }
	inline void set_UriSchemeNews_8(String_t* value)
	{
		___UriSchemeNews_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UriSchemeNews_8), (void*)value);
	}

	inline static int32_t get_offset_of_UriSchemeNntp_9() { return static_cast<int32_t>(offsetof(Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E_StaticFields, ___UriSchemeNntp_9)); }
	inline String_t* get_UriSchemeNntp_9() const { return ___UriSchemeNntp_9; }
	inline String_t** get_address_of_UriSchemeNntp_9() { return &___UriSchemeNntp_9; }
	inline void set_UriSchemeNntp_9(String_t* value)
	{
		___UriSchemeNntp_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UriSchemeNntp_9), (void*)value);
	}

	inline static int32_t get_offset_of_UriSchemeNetTcp_10() { return static_cast<int32_t>(offsetof(Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E_StaticFields, ___UriSchemeNetTcp_10)); }
	inline String_t* get_UriSchemeNetTcp_10() const { return ___UriSchemeNetTcp_10; }
	inline String_t** get_address_of_UriSchemeNetTcp_10() { return &___UriSchemeNetTcp_10; }
	inline void set_UriSchemeNetTcp_10(String_t* value)
	{
		___UriSchemeNetTcp_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UriSchemeNetTcp_10), (void*)value);
	}

	inline static int32_t get_offset_of_UriSchemeNetPipe_11() { return static_cast<int32_t>(offsetof(Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E_StaticFields, ___UriSchemeNetPipe_11)); }
	inline String_t* get_UriSchemeNetPipe_11() const { return ___UriSchemeNetPipe_11; }
	inline String_t** get_address_of_UriSchemeNetPipe_11() { return &___UriSchemeNetPipe_11; }
	inline void set_UriSchemeNetPipe_11(String_t* value)
	{
		___UriSchemeNetPipe_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UriSchemeNetPipe_11), (void*)value);
	}

	inline static int32_t get_offset_of_SchemeDelimiter_12() { return static_cast<int32_t>(offsetof(Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E_StaticFields, ___SchemeDelimiter_12)); }
	inline String_t* get_SchemeDelimiter_12() const { return ___SchemeDelimiter_12; }
	inline String_t** get_address_of_SchemeDelimiter_12() { return &___SchemeDelimiter_12; }
	inline void set_SchemeDelimiter_12(String_t* value)
	{
		___SchemeDelimiter_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SchemeDelimiter_12), (void*)value);
	}

	inline static int32_t get_offset_of_s_ConfigInitialized_20() { return static_cast<int32_t>(offsetof(Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E_StaticFields, ___s_ConfigInitialized_20)); }
	inline bool get_s_ConfigInitialized_20() const { return ___s_ConfigInitialized_20; }
	inline bool* get_address_of_s_ConfigInitialized_20() { return &___s_ConfigInitialized_20; }
	inline void set_s_ConfigInitialized_20(bool value)
	{
		___s_ConfigInitialized_20 = value;
	}

	inline static int32_t get_offset_of_s_ConfigInitializing_21() { return static_cast<int32_t>(offsetof(Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E_StaticFields, ___s_ConfigInitializing_21)); }
	inline bool get_s_ConfigInitializing_21() const { return ___s_ConfigInitializing_21; }
	inline bool* get_address_of_s_ConfigInitializing_21() { return &___s_ConfigInitializing_21; }
	inline void set_s_ConfigInitializing_21(bool value)
	{
		___s_ConfigInitializing_21 = value;
	}

	inline static int32_t get_offset_of_s_IdnScope_22() { return static_cast<int32_t>(offsetof(Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E_StaticFields, ___s_IdnScope_22)); }
	inline int32_t get_s_IdnScope_22() const { return ___s_IdnScope_22; }
	inline int32_t* get_address_of_s_IdnScope_22() { return &___s_IdnScope_22; }
	inline void set_s_IdnScope_22(int32_t value)
	{
		___s_IdnScope_22 = value;
	}

	inline static int32_t get_offset_of_s_IriParsing_23() { return static_cast<int32_t>(offsetof(Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E_StaticFields, ___s_IriParsing_23)); }
	inline bool get_s_IriParsing_23() const { return ___s_IriParsing_23; }
	inline bool* get_address_of_s_IriParsing_23() { return &___s_IriParsing_23; }
	inline void set_s_IriParsing_23(bool value)
	{
		___s_IriParsing_23 = value;
	}

	inline static int32_t get_offset_of_useDotNetRelativeOrAbsolute_24() { return static_cast<int32_t>(offsetof(Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E_StaticFields, ___useDotNetRelativeOrAbsolute_24)); }
	inline bool get_useDotNetRelativeOrAbsolute_24() const { return ___useDotNetRelativeOrAbsolute_24; }
	inline bool* get_address_of_useDotNetRelativeOrAbsolute_24() { return &___useDotNetRelativeOrAbsolute_24; }
	inline void set_useDotNetRelativeOrAbsolute_24(bool value)
	{
		___useDotNetRelativeOrAbsolute_24 = value;
	}

	inline static int32_t get_offset_of_IsWindowsFileSystem_25() { return static_cast<int32_t>(offsetof(Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E_StaticFields, ___IsWindowsFileSystem_25)); }
	inline bool get_IsWindowsFileSystem_25() const { return ___IsWindowsFileSystem_25; }
	inline bool* get_address_of_IsWindowsFileSystem_25() { return &___IsWindowsFileSystem_25; }
	inline void set_IsWindowsFileSystem_25(bool value)
	{
		___IsWindowsFileSystem_25 = value;
	}

	inline static int32_t get_offset_of_s_initLock_26() { return static_cast<int32_t>(offsetof(Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E_StaticFields, ___s_initLock_26)); }
	inline RuntimeObject * get_s_initLock_26() const { return ___s_initLock_26; }
	inline RuntimeObject ** get_address_of_s_initLock_26() { return &___s_initLock_26; }
	inline void set_s_initLock_26(RuntimeObject * value)
	{
		___s_initLock_26 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_initLock_26), (void*)value);
	}

	inline static int32_t get_offset_of_HexLowerChars_27() { return static_cast<int32_t>(offsetof(Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E_StaticFields, ___HexLowerChars_27)); }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* get_HexLowerChars_27() const { return ___HexLowerChars_27; }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2** get_address_of_HexLowerChars_27() { return &___HexLowerChars_27; }
	inline void set_HexLowerChars_27(CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* value)
	{
		___HexLowerChars_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___HexLowerChars_27), (void*)value);
	}

	inline static int32_t get_offset_of__WSchars_28() { return static_cast<int32_t>(offsetof(Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E_StaticFields, ____WSchars_28)); }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* get__WSchars_28() const { return ____WSchars_28; }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2** get_address_of__WSchars_28() { return &____WSchars_28; }
	inline void set__WSchars_28(CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* value)
	{
		____WSchars_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____WSchars_28), (void*)value);
	}
};


// UnityEngine.Component
struct  Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:

public:
};


// UnityEngine.GameObject
struct  GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:

public:
};


// UnityEngine.Material
struct  Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:

public:
};


// UnityEngine.Mesh
struct  Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:

public:
};


// UnityEngine.ScriptableObject
struct  ScriptableObject_tAB015486CEAB714DA0D5C1BA389B84FB90427734  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:

public:
};

// Native definition for P/Invoke marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_tAB015486CEAB714DA0D5C1BA389B84FB90427734_marshaled_pinvoke : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_tAB015486CEAB714DA0D5C1BA389B84FB90427734_marshaled_com : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshaled_com
{
};

// UnityEngine.Shader
struct  Shader_tE2731FF351B74AB4186897484FB01E000C1160CA  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:

public:
};


// UnityEngine.Texture
struct  Texture_t387FE83BB848001FD06B14707AEA6D5A0F6A95F4  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:

public:
};

struct Texture_t387FE83BB848001FD06B14707AEA6D5A0F6A95F4_StaticFields
{
public:
	// System.Int32 UnityEngine.Texture::GenerateAllMips
	int32_t ___GenerateAllMips_4;

public:
	inline static int32_t get_offset_of_GenerateAllMips_4() { return static_cast<int32_t>(offsetof(Texture_t387FE83BB848001FD06B14707AEA6D5A0F6A95F4_StaticFields, ___GenerateAllMips_4)); }
	inline int32_t get_GenerateAllMips_4() const { return ___GenerateAllMips_4; }
	inline int32_t* get_address_of_GenerateAllMips_4() { return &___GenerateAllMips_4; }
	inline void set_GenerateAllMips_4(int32_t value)
	{
		___GenerateAllMips_4 = value;
	}
};


// UnityGLTF.GLTFLoadException
struct  GLTFLoadException_tE78F0B883637138D8584E658C49315FE15B23B76  : public Exception_t
{
public:

public:
};


// UnityGLTF.GLTFSceneImporter
struct  GLTFSceneImporter_t29A5109798926C47E5B089376F3E467E78EB710E  : public RuntimeObject
{
public:
	// System.Int32 UnityGLTF.GLTFSceneImporter::MaximumLod
	int32_t ___MaximumLod_0;
	// System.Int32 UnityGLTF.GLTFSceneImporter::Timeout
	int32_t ___Timeout_1;
	// System.Boolean UnityGLTF.GLTFSceneImporter::_isMultithreaded
	bool ____isMultithreaded_2;
	// UnityEngine.Transform UnityGLTF.GLTFSceneImporter::<SceneParent>k__BackingField
	Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___U3CSceneParentU3Ek__BackingField_3;
	// UnityEngine.GameObject UnityGLTF.GLTFSceneImporter::<CreatedObject>k__BackingField
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___U3CCreatedObjectU3Ek__BackingField_4;
	// UnityGLTF.GLTFSceneImporter_ColliderType UnityGLTF.GLTFSceneImporter::<Collider>k__BackingField
	int32_t ___U3CColliderU3Ek__BackingField_5;
	// System.String UnityGLTF.GLTFSceneImporter::<CustomShaderName>k__BackingField
	String_t* ___U3CCustomShaderNameU3Ek__BackingField_6;
	// System.Boolean UnityGLTF.GLTFSceneImporter::KeepCPUCopyOfMesh
	bool ___KeepCPUCopyOfMesh_7;
	// System.Boolean UnityGLTF.GLTFSceneImporter::KeepCPUCopyOfTexture
	bool ___KeepCPUCopyOfTexture_8;
	// System.Boolean UnityGLTF.GLTFSceneImporter::GenerateMipMapsForTextures
	bool ___GenerateMipMapsForTextures_9;
	// System.Boolean UnityGLTF.GLTFSceneImporter::CullFarLOD
	bool ___CullFarLOD_10;
	// UnityGLTF.ImportStatistics UnityGLTF.GLTFSceneImporter::Statistics
	ImportStatistics_t3102F608371E4D5FD73B008F8C3AD4371D9F1FD8  ___Statistics_11;
	// UnityGLTF.ImportOptions UnityGLTF.GLTFSceneImporter::_options
	ImportOptions_tF7380126D05F8D0CD248534D3C19EA83F20FA88E * ____options_12;
	// UnityGLTF.MemoryChecker UnityGLTF.GLTFSceneImporter::_memoryChecker
	MemoryChecker_t6298B1B47ACD98ED696BC66A79E5D5217756BA6A * ____memoryChecker_13;
	// UnityEngine.GameObject UnityGLTF.GLTFSceneImporter::_lastLoadedScene
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ____lastLoadedScene_14;
	// GLTF.Schema.GLTFMaterial UnityGLTF.GLTFSceneImporter::DefaultMaterial
	GLTFMaterial_t3823C70B2B7CB4235F78C94163E7FA538F482C99 * ___DefaultMaterial_15;
	// UnityGLTF.Cache.MaterialCacheData UnityGLTF.GLTFSceneImporter::_defaultLoadedMaterial
	MaterialCacheData_t69ADD85645108393A5E19F1C642F81F977EA57CE * ____defaultLoadedMaterial_16;
	// System.String UnityGLTF.GLTFSceneImporter::_gltfFileName
	String_t* ____gltfFileName_17;
	// UnityGLTF.GLTFSceneImporter_GLBStream UnityGLTF.GLTFSceneImporter::_gltfStream
	GLBStream_t62748985BC9D1878C913AEB01D89B3F28939AB3F  ____gltfStream_18;
	// GLTF.Schema.GLTFRoot UnityGLTF.GLTFSceneImporter::_gltfRoot
	GLTFRoot_t3CDB3EBE42E8A0E06DD58B35BAD5D98EF44F3A6B * ____gltfRoot_19;
	// UnityGLTF.Cache.AssetCache UnityGLTF.GLTFSceneImporter::_assetCache
	AssetCache_tE060C78C9F54F8BF6F50E904460FA53958B59D91 * ____assetCache_20;
	// System.Boolean UnityGLTF.GLTFSceneImporter::_isRunning
	bool ____isRunning_21;
	// UnityGLTF.ImportProgress UnityGLTF.GLTFSceneImporter::progressStatus
	ImportProgress_t4F58A59AEDE43A81DEEE82088082DD48A47DB28D  ___progressStatus_22;
	// System.IProgress`1<UnityGLTF.ImportProgress> UnityGLTF.GLTFSceneImporter::progress
	RuntimeObject* ___progress_23;

public:
	inline static int32_t get_offset_of_MaximumLod_0() { return static_cast<int32_t>(offsetof(GLTFSceneImporter_t29A5109798926C47E5B089376F3E467E78EB710E, ___MaximumLod_0)); }
	inline int32_t get_MaximumLod_0() const { return ___MaximumLod_0; }
	inline int32_t* get_address_of_MaximumLod_0() { return &___MaximumLod_0; }
	inline void set_MaximumLod_0(int32_t value)
	{
		___MaximumLod_0 = value;
	}

	inline static int32_t get_offset_of_Timeout_1() { return static_cast<int32_t>(offsetof(GLTFSceneImporter_t29A5109798926C47E5B089376F3E467E78EB710E, ___Timeout_1)); }
	inline int32_t get_Timeout_1() const { return ___Timeout_1; }
	inline int32_t* get_address_of_Timeout_1() { return &___Timeout_1; }
	inline void set_Timeout_1(int32_t value)
	{
		___Timeout_1 = value;
	}

	inline static int32_t get_offset_of__isMultithreaded_2() { return static_cast<int32_t>(offsetof(GLTFSceneImporter_t29A5109798926C47E5B089376F3E467E78EB710E, ____isMultithreaded_2)); }
	inline bool get__isMultithreaded_2() const { return ____isMultithreaded_2; }
	inline bool* get_address_of__isMultithreaded_2() { return &____isMultithreaded_2; }
	inline void set__isMultithreaded_2(bool value)
	{
		____isMultithreaded_2 = value;
	}

	inline static int32_t get_offset_of_U3CSceneParentU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(GLTFSceneImporter_t29A5109798926C47E5B089376F3E467E78EB710E, ___U3CSceneParentU3Ek__BackingField_3)); }
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * get_U3CSceneParentU3Ek__BackingField_3() const { return ___U3CSceneParentU3Ek__BackingField_3; }
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA ** get_address_of_U3CSceneParentU3Ek__BackingField_3() { return &___U3CSceneParentU3Ek__BackingField_3; }
	inline void set_U3CSceneParentU3Ek__BackingField_3(Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * value)
	{
		___U3CSceneParentU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CSceneParentU3Ek__BackingField_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CCreatedObjectU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(GLTFSceneImporter_t29A5109798926C47E5B089376F3E467E78EB710E, ___U3CCreatedObjectU3Ek__BackingField_4)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_U3CCreatedObjectU3Ek__BackingField_4() const { return ___U3CCreatedObjectU3Ek__BackingField_4; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_U3CCreatedObjectU3Ek__BackingField_4() { return &___U3CCreatedObjectU3Ek__BackingField_4; }
	inline void set_U3CCreatedObjectU3Ek__BackingField_4(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___U3CCreatedObjectU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CCreatedObjectU3Ek__BackingField_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CColliderU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(GLTFSceneImporter_t29A5109798926C47E5B089376F3E467E78EB710E, ___U3CColliderU3Ek__BackingField_5)); }
	inline int32_t get_U3CColliderU3Ek__BackingField_5() const { return ___U3CColliderU3Ek__BackingField_5; }
	inline int32_t* get_address_of_U3CColliderU3Ek__BackingField_5() { return &___U3CColliderU3Ek__BackingField_5; }
	inline void set_U3CColliderU3Ek__BackingField_5(int32_t value)
	{
		___U3CColliderU3Ek__BackingField_5 = value;
	}

	inline static int32_t get_offset_of_U3CCustomShaderNameU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(GLTFSceneImporter_t29A5109798926C47E5B089376F3E467E78EB710E, ___U3CCustomShaderNameU3Ek__BackingField_6)); }
	inline String_t* get_U3CCustomShaderNameU3Ek__BackingField_6() const { return ___U3CCustomShaderNameU3Ek__BackingField_6; }
	inline String_t** get_address_of_U3CCustomShaderNameU3Ek__BackingField_6() { return &___U3CCustomShaderNameU3Ek__BackingField_6; }
	inline void set_U3CCustomShaderNameU3Ek__BackingField_6(String_t* value)
	{
		___U3CCustomShaderNameU3Ek__BackingField_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CCustomShaderNameU3Ek__BackingField_6), (void*)value);
	}

	inline static int32_t get_offset_of_KeepCPUCopyOfMesh_7() { return static_cast<int32_t>(offsetof(GLTFSceneImporter_t29A5109798926C47E5B089376F3E467E78EB710E, ___KeepCPUCopyOfMesh_7)); }
	inline bool get_KeepCPUCopyOfMesh_7() const { return ___KeepCPUCopyOfMesh_7; }
	inline bool* get_address_of_KeepCPUCopyOfMesh_7() { return &___KeepCPUCopyOfMesh_7; }
	inline void set_KeepCPUCopyOfMesh_7(bool value)
	{
		___KeepCPUCopyOfMesh_7 = value;
	}

	inline static int32_t get_offset_of_KeepCPUCopyOfTexture_8() { return static_cast<int32_t>(offsetof(GLTFSceneImporter_t29A5109798926C47E5B089376F3E467E78EB710E, ___KeepCPUCopyOfTexture_8)); }
	inline bool get_KeepCPUCopyOfTexture_8() const { return ___KeepCPUCopyOfTexture_8; }
	inline bool* get_address_of_KeepCPUCopyOfTexture_8() { return &___KeepCPUCopyOfTexture_8; }
	inline void set_KeepCPUCopyOfTexture_8(bool value)
	{
		___KeepCPUCopyOfTexture_8 = value;
	}

	inline static int32_t get_offset_of_GenerateMipMapsForTextures_9() { return static_cast<int32_t>(offsetof(GLTFSceneImporter_t29A5109798926C47E5B089376F3E467E78EB710E, ___GenerateMipMapsForTextures_9)); }
	inline bool get_GenerateMipMapsForTextures_9() const { return ___GenerateMipMapsForTextures_9; }
	inline bool* get_address_of_GenerateMipMapsForTextures_9() { return &___GenerateMipMapsForTextures_9; }
	inline void set_GenerateMipMapsForTextures_9(bool value)
	{
		___GenerateMipMapsForTextures_9 = value;
	}

	inline static int32_t get_offset_of_CullFarLOD_10() { return static_cast<int32_t>(offsetof(GLTFSceneImporter_t29A5109798926C47E5B089376F3E467E78EB710E, ___CullFarLOD_10)); }
	inline bool get_CullFarLOD_10() const { return ___CullFarLOD_10; }
	inline bool* get_address_of_CullFarLOD_10() { return &___CullFarLOD_10; }
	inline void set_CullFarLOD_10(bool value)
	{
		___CullFarLOD_10 = value;
	}

	inline static int32_t get_offset_of_Statistics_11() { return static_cast<int32_t>(offsetof(GLTFSceneImporter_t29A5109798926C47E5B089376F3E467E78EB710E, ___Statistics_11)); }
	inline ImportStatistics_t3102F608371E4D5FD73B008F8C3AD4371D9F1FD8  get_Statistics_11() const { return ___Statistics_11; }
	inline ImportStatistics_t3102F608371E4D5FD73B008F8C3AD4371D9F1FD8 * get_address_of_Statistics_11() { return &___Statistics_11; }
	inline void set_Statistics_11(ImportStatistics_t3102F608371E4D5FD73B008F8C3AD4371D9F1FD8  value)
	{
		___Statistics_11 = value;
	}

	inline static int32_t get_offset_of__options_12() { return static_cast<int32_t>(offsetof(GLTFSceneImporter_t29A5109798926C47E5B089376F3E467E78EB710E, ____options_12)); }
	inline ImportOptions_tF7380126D05F8D0CD248534D3C19EA83F20FA88E * get__options_12() const { return ____options_12; }
	inline ImportOptions_tF7380126D05F8D0CD248534D3C19EA83F20FA88E ** get_address_of__options_12() { return &____options_12; }
	inline void set__options_12(ImportOptions_tF7380126D05F8D0CD248534D3C19EA83F20FA88E * value)
	{
		____options_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____options_12), (void*)value);
	}

	inline static int32_t get_offset_of__memoryChecker_13() { return static_cast<int32_t>(offsetof(GLTFSceneImporter_t29A5109798926C47E5B089376F3E467E78EB710E, ____memoryChecker_13)); }
	inline MemoryChecker_t6298B1B47ACD98ED696BC66A79E5D5217756BA6A * get__memoryChecker_13() const { return ____memoryChecker_13; }
	inline MemoryChecker_t6298B1B47ACD98ED696BC66A79E5D5217756BA6A ** get_address_of__memoryChecker_13() { return &____memoryChecker_13; }
	inline void set__memoryChecker_13(MemoryChecker_t6298B1B47ACD98ED696BC66A79E5D5217756BA6A * value)
	{
		____memoryChecker_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____memoryChecker_13), (void*)value);
	}

	inline static int32_t get_offset_of__lastLoadedScene_14() { return static_cast<int32_t>(offsetof(GLTFSceneImporter_t29A5109798926C47E5B089376F3E467E78EB710E, ____lastLoadedScene_14)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get__lastLoadedScene_14() const { return ____lastLoadedScene_14; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of__lastLoadedScene_14() { return &____lastLoadedScene_14; }
	inline void set__lastLoadedScene_14(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		____lastLoadedScene_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____lastLoadedScene_14), (void*)value);
	}

	inline static int32_t get_offset_of_DefaultMaterial_15() { return static_cast<int32_t>(offsetof(GLTFSceneImporter_t29A5109798926C47E5B089376F3E467E78EB710E, ___DefaultMaterial_15)); }
	inline GLTFMaterial_t3823C70B2B7CB4235F78C94163E7FA538F482C99 * get_DefaultMaterial_15() const { return ___DefaultMaterial_15; }
	inline GLTFMaterial_t3823C70B2B7CB4235F78C94163E7FA538F482C99 ** get_address_of_DefaultMaterial_15() { return &___DefaultMaterial_15; }
	inline void set_DefaultMaterial_15(GLTFMaterial_t3823C70B2B7CB4235F78C94163E7FA538F482C99 * value)
	{
		___DefaultMaterial_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DefaultMaterial_15), (void*)value);
	}

	inline static int32_t get_offset_of__defaultLoadedMaterial_16() { return static_cast<int32_t>(offsetof(GLTFSceneImporter_t29A5109798926C47E5B089376F3E467E78EB710E, ____defaultLoadedMaterial_16)); }
	inline MaterialCacheData_t69ADD85645108393A5E19F1C642F81F977EA57CE * get__defaultLoadedMaterial_16() const { return ____defaultLoadedMaterial_16; }
	inline MaterialCacheData_t69ADD85645108393A5E19F1C642F81F977EA57CE ** get_address_of__defaultLoadedMaterial_16() { return &____defaultLoadedMaterial_16; }
	inline void set__defaultLoadedMaterial_16(MaterialCacheData_t69ADD85645108393A5E19F1C642F81F977EA57CE * value)
	{
		____defaultLoadedMaterial_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____defaultLoadedMaterial_16), (void*)value);
	}

	inline static int32_t get_offset_of__gltfFileName_17() { return static_cast<int32_t>(offsetof(GLTFSceneImporter_t29A5109798926C47E5B089376F3E467E78EB710E, ____gltfFileName_17)); }
	inline String_t* get__gltfFileName_17() const { return ____gltfFileName_17; }
	inline String_t** get_address_of__gltfFileName_17() { return &____gltfFileName_17; }
	inline void set__gltfFileName_17(String_t* value)
	{
		____gltfFileName_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____gltfFileName_17), (void*)value);
	}

	inline static int32_t get_offset_of__gltfStream_18() { return static_cast<int32_t>(offsetof(GLTFSceneImporter_t29A5109798926C47E5B089376F3E467E78EB710E, ____gltfStream_18)); }
	inline GLBStream_t62748985BC9D1878C913AEB01D89B3F28939AB3F  get__gltfStream_18() const { return ____gltfStream_18; }
	inline GLBStream_t62748985BC9D1878C913AEB01D89B3F28939AB3F * get_address_of__gltfStream_18() { return &____gltfStream_18; }
	inline void set__gltfStream_18(GLBStream_t62748985BC9D1878C913AEB01D89B3F28939AB3F  value)
	{
		____gltfStream_18 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&____gltfStream_18))->___Stream_0), (void*)NULL);
	}

	inline static int32_t get_offset_of__gltfRoot_19() { return static_cast<int32_t>(offsetof(GLTFSceneImporter_t29A5109798926C47E5B089376F3E467E78EB710E, ____gltfRoot_19)); }
	inline GLTFRoot_t3CDB3EBE42E8A0E06DD58B35BAD5D98EF44F3A6B * get__gltfRoot_19() const { return ____gltfRoot_19; }
	inline GLTFRoot_t3CDB3EBE42E8A0E06DD58B35BAD5D98EF44F3A6B ** get_address_of__gltfRoot_19() { return &____gltfRoot_19; }
	inline void set__gltfRoot_19(GLTFRoot_t3CDB3EBE42E8A0E06DD58B35BAD5D98EF44F3A6B * value)
	{
		____gltfRoot_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____gltfRoot_19), (void*)value);
	}

	inline static int32_t get_offset_of__assetCache_20() { return static_cast<int32_t>(offsetof(GLTFSceneImporter_t29A5109798926C47E5B089376F3E467E78EB710E, ____assetCache_20)); }
	inline AssetCache_tE060C78C9F54F8BF6F50E904460FA53958B59D91 * get__assetCache_20() const { return ____assetCache_20; }
	inline AssetCache_tE060C78C9F54F8BF6F50E904460FA53958B59D91 ** get_address_of__assetCache_20() { return &____assetCache_20; }
	inline void set__assetCache_20(AssetCache_tE060C78C9F54F8BF6F50E904460FA53958B59D91 * value)
	{
		____assetCache_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____assetCache_20), (void*)value);
	}

	inline static int32_t get_offset_of__isRunning_21() { return static_cast<int32_t>(offsetof(GLTFSceneImporter_t29A5109798926C47E5B089376F3E467E78EB710E, ____isRunning_21)); }
	inline bool get__isRunning_21() const { return ____isRunning_21; }
	inline bool* get_address_of__isRunning_21() { return &____isRunning_21; }
	inline void set__isRunning_21(bool value)
	{
		____isRunning_21 = value;
	}

	inline static int32_t get_offset_of_progressStatus_22() { return static_cast<int32_t>(offsetof(GLTFSceneImporter_t29A5109798926C47E5B089376F3E467E78EB710E, ___progressStatus_22)); }
	inline ImportProgress_t4F58A59AEDE43A81DEEE82088082DD48A47DB28D  get_progressStatus_22() const { return ___progressStatus_22; }
	inline ImportProgress_t4F58A59AEDE43A81DEEE82088082DD48A47DB28D * get_address_of_progressStatus_22() { return &___progressStatus_22; }
	inline void set_progressStatus_22(ImportProgress_t4F58A59AEDE43A81DEEE82088082DD48A47DB28D  value)
	{
		___progressStatus_22 = value;
	}

	inline static int32_t get_offset_of_progress_23() { return static_cast<int32_t>(offsetof(GLTFSceneImporter_t29A5109798926C47E5B089376F3E467E78EB710E, ___progress_23)); }
	inline RuntimeObject* get_progress_23() const { return ___progress_23; }
	inline RuntimeObject** get_address_of_progress_23() { return &___progress_23; }
	inline void set_progress_23(RuntimeObject* value)
	{
		___progress_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___progress_23), (void*)value);
	}
};


// UnityGLTF.GLTFSceneImporter_<LoadMaterialAsync>d__52
struct  U3CLoadMaterialAsyncU3Ed__52_t755573D411A3D57BC63E16A616ED2F064C971F96 
{
public:
	// System.Int32 UnityGLTF.GLTFSceneImporter_<LoadMaterialAsync>d__52::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<UnityEngine.Material> UnityGLTF.GLTFSceneImporter_<LoadMaterialAsync>d__52::<>t__builder
	AsyncTaskMethodBuilder_1_tC7219A08BD3DD7AA457D88CB3FC2B69ABBED2A73  ___U3CU3Et__builder_1;
	// System.Int32 UnityGLTF.GLTFSceneImporter_<LoadMaterialAsync>d__52::materialIndex
	int32_t ___materialIndex_2;
	// UnityGLTF.GLTFSceneImporter UnityGLTF.GLTFSceneImporter_<LoadMaterialAsync>d__52::<>4__this
	GLTFSceneImporter_t29A5109798926C47E5B089376F3E467E78EB710E * ___U3CU3E4__this_3;
	// UnityGLTF.GLTFSceneImporter_<>c__DisplayClass52_0 UnityGLTF.GLTFSceneImporter_<LoadMaterialAsync>d__52::<>8__1
	U3CU3Ec__DisplayClass52_0_t76D5C75ED384CEF8461B4D071C42B3931697D57F * ___U3CU3E8__1_4;
	// System.Runtime.CompilerServices.TaskAwaiter UnityGLTF.GLTFSceneImporter_<LoadMaterialAsync>d__52::<>u__1
	TaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F  ___U3CU3Eu__1_5;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CLoadMaterialAsyncU3Ed__52_t755573D411A3D57BC63E16A616ED2F064C971F96, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3Et__builder_1() { return static_cast<int32_t>(offsetof(U3CLoadMaterialAsyncU3Ed__52_t755573D411A3D57BC63E16A616ED2F064C971F96, ___U3CU3Et__builder_1)); }
	inline AsyncTaskMethodBuilder_1_tC7219A08BD3DD7AA457D88CB3FC2B69ABBED2A73  get_U3CU3Et__builder_1() const { return ___U3CU3Et__builder_1; }
	inline AsyncTaskMethodBuilder_1_tC7219A08BD3DD7AA457D88CB3FC2B69ABBED2A73 * get_address_of_U3CU3Et__builder_1() { return &___U3CU3Et__builder_1; }
	inline void set_U3CU3Et__builder_1(AsyncTaskMethodBuilder_1_tC7219A08BD3DD7AA457D88CB3FC2B69ABBED2A73  value)
	{
		___U3CU3Et__builder_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3Et__builder_1))->___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3Et__builder_1))->___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Et__builder_1))->___m_task_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_materialIndex_2() { return static_cast<int32_t>(offsetof(U3CLoadMaterialAsyncU3Ed__52_t755573D411A3D57BC63E16A616ED2F064C971F96, ___materialIndex_2)); }
	inline int32_t get_materialIndex_2() const { return ___materialIndex_2; }
	inline int32_t* get_address_of_materialIndex_2() { return &___materialIndex_2; }
	inline void set_materialIndex_2(int32_t value)
	{
		___materialIndex_2 = value;
	}

	inline static int32_t get_offset_of_U3CU3E4__this_3() { return static_cast<int32_t>(offsetof(U3CLoadMaterialAsyncU3Ed__52_t755573D411A3D57BC63E16A616ED2F064C971F96, ___U3CU3E4__this_3)); }
	inline GLTFSceneImporter_t29A5109798926C47E5B089376F3E467E78EB710E * get_U3CU3E4__this_3() const { return ___U3CU3E4__this_3; }
	inline GLTFSceneImporter_t29A5109798926C47E5B089376F3E467E78EB710E ** get_address_of_U3CU3E4__this_3() { return &___U3CU3E4__this_3; }
	inline void set_U3CU3E4__this_3(GLTFSceneImporter_t29A5109798926C47E5B089376F3E467E78EB710E * value)
	{
		___U3CU3E4__this_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E8__1_4() { return static_cast<int32_t>(offsetof(U3CLoadMaterialAsyncU3Ed__52_t755573D411A3D57BC63E16A616ED2F064C971F96, ___U3CU3E8__1_4)); }
	inline U3CU3Ec__DisplayClass52_0_t76D5C75ED384CEF8461B4D071C42B3931697D57F * get_U3CU3E8__1_4() const { return ___U3CU3E8__1_4; }
	inline U3CU3Ec__DisplayClass52_0_t76D5C75ED384CEF8461B4D071C42B3931697D57F ** get_address_of_U3CU3E8__1_4() { return &___U3CU3E8__1_4; }
	inline void set_U3CU3E8__1_4(U3CU3Ec__DisplayClass52_0_t76D5C75ED384CEF8461B4D071C42B3931697D57F * value)
	{
		___U3CU3E8__1_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E8__1_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3Eu__1_5() { return static_cast<int32_t>(offsetof(U3CLoadMaterialAsyncU3Ed__52_t755573D411A3D57BC63E16A616ED2F064C971F96, ___U3CU3Eu__1_5)); }
	inline TaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F  get_U3CU3Eu__1_5() const { return ___U3CU3Eu__1_5; }
	inline TaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F * get_address_of_U3CU3Eu__1_5() { return &___U3CU3Eu__1_5; }
	inline void set_U3CU3Eu__1_5(TaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F  value)
	{
		___U3CU3Eu__1_5 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Eu__1_5))->___m_task_0), (void*)NULL);
	}
};


// UnityGLTF.GLTFSceneImporter_<LoadMeshAsync>d__53
struct  U3CLoadMeshAsyncU3Ed__53_tCB90C821E003B0152A4AAC3CB54BD84D61B8823D 
{
public:
	// System.Int32 UnityGLTF.GLTFSceneImporter_<LoadMeshAsync>d__53::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<UnityEngine.Mesh> UnityGLTF.GLTFSceneImporter_<LoadMeshAsync>d__53::<>t__builder
	AsyncTaskMethodBuilder_1_t50EB7C4D84FEBBDF5495A2EE38949E9E10E51791  ___U3CU3Et__builder_1;
	// System.Int32 UnityGLTF.GLTFSceneImporter_<LoadMeshAsync>d__53::meshIndex
	int32_t ___meshIndex_2;
	// UnityGLTF.GLTFSceneImporter UnityGLTF.GLTFSceneImporter_<LoadMeshAsync>d__53::<>4__this
	GLTFSceneImporter_t29A5109798926C47E5B089376F3E467E78EB710E * ___U3CU3E4__this_3;
	// System.Threading.CancellationToken UnityGLTF.GLTFSceneImporter_<LoadMeshAsync>d__53::cancellationToken
	CancellationToken_t9E956952F7F20908F2AE72EDF36D97E6C7DB63AB  ___cancellationToken_4;
	// UnityGLTF.GLTFSceneImporter_<>c__DisplayClass53_0 UnityGLTF.GLTFSceneImporter_<LoadMeshAsync>d__53::<>8__1
	U3CU3Ec__DisplayClass53_0_t8D4248C7B9839F95826E82E11BB0844C853D00EA * ___U3CU3E8__1_5;
	// System.Runtime.CompilerServices.TaskAwaiter UnityGLTF.GLTFSceneImporter_<LoadMeshAsync>d__53::<>u__1
	TaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F  ___U3CU3Eu__1_6;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CLoadMeshAsyncU3Ed__53_tCB90C821E003B0152A4AAC3CB54BD84D61B8823D, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3Et__builder_1() { return static_cast<int32_t>(offsetof(U3CLoadMeshAsyncU3Ed__53_tCB90C821E003B0152A4AAC3CB54BD84D61B8823D, ___U3CU3Et__builder_1)); }
	inline AsyncTaskMethodBuilder_1_t50EB7C4D84FEBBDF5495A2EE38949E9E10E51791  get_U3CU3Et__builder_1() const { return ___U3CU3Et__builder_1; }
	inline AsyncTaskMethodBuilder_1_t50EB7C4D84FEBBDF5495A2EE38949E9E10E51791 * get_address_of_U3CU3Et__builder_1() { return &___U3CU3Et__builder_1; }
	inline void set_U3CU3Et__builder_1(AsyncTaskMethodBuilder_1_t50EB7C4D84FEBBDF5495A2EE38949E9E10E51791  value)
	{
		___U3CU3Et__builder_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3Et__builder_1))->___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3Et__builder_1))->___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Et__builder_1))->___m_task_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_meshIndex_2() { return static_cast<int32_t>(offsetof(U3CLoadMeshAsyncU3Ed__53_tCB90C821E003B0152A4AAC3CB54BD84D61B8823D, ___meshIndex_2)); }
	inline int32_t get_meshIndex_2() const { return ___meshIndex_2; }
	inline int32_t* get_address_of_meshIndex_2() { return &___meshIndex_2; }
	inline void set_meshIndex_2(int32_t value)
	{
		___meshIndex_2 = value;
	}

	inline static int32_t get_offset_of_U3CU3E4__this_3() { return static_cast<int32_t>(offsetof(U3CLoadMeshAsyncU3Ed__53_tCB90C821E003B0152A4AAC3CB54BD84D61B8823D, ___U3CU3E4__this_3)); }
	inline GLTFSceneImporter_t29A5109798926C47E5B089376F3E467E78EB710E * get_U3CU3E4__this_3() const { return ___U3CU3E4__this_3; }
	inline GLTFSceneImporter_t29A5109798926C47E5B089376F3E467E78EB710E ** get_address_of_U3CU3E4__this_3() { return &___U3CU3E4__this_3; }
	inline void set_U3CU3E4__this_3(GLTFSceneImporter_t29A5109798926C47E5B089376F3E467E78EB710E * value)
	{
		___U3CU3E4__this_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_3), (void*)value);
	}

	inline static int32_t get_offset_of_cancellationToken_4() { return static_cast<int32_t>(offsetof(U3CLoadMeshAsyncU3Ed__53_tCB90C821E003B0152A4AAC3CB54BD84D61B8823D, ___cancellationToken_4)); }
	inline CancellationToken_t9E956952F7F20908F2AE72EDF36D97E6C7DB63AB  get_cancellationToken_4() const { return ___cancellationToken_4; }
	inline CancellationToken_t9E956952F7F20908F2AE72EDF36D97E6C7DB63AB * get_address_of_cancellationToken_4() { return &___cancellationToken_4; }
	inline void set_cancellationToken_4(CancellationToken_t9E956952F7F20908F2AE72EDF36D97E6C7DB63AB  value)
	{
		___cancellationToken_4 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___cancellationToken_4))->___m_source_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_U3CU3E8__1_5() { return static_cast<int32_t>(offsetof(U3CLoadMeshAsyncU3Ed__53_tCB90C821E003B0152A4AAC3CB54BD84D61B8823D, ___U3CU3E8__1_5)); }
	inline U3CU3Ec__DisplayClass53_0_t8D4248C7B9839F95826E82E11BB0844C853D00EA * get_U3CU3E8__1_5() const { return ___U3CU3E8__1_5; }
	inline U3CU3Ec__DisplayClass53_0_t8D4248C7B9839F95826E82E11BB0844C853D00EA ** get_address_of_U3CU3E8__1_5() { return &___U3CU3E8__1_5; }
	inline void set_U3CU3E8__1_5(U3CU3Ec__DisplayClass53_0_t8D4248C7B9839F95826E82E11BB0844C853D00EA * value)
	{
		___U3CU3E8__1_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E8__1_5), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3Eu__1_6() { return static_cast<int32_t>(offsetof(U3CLoadMeshAsyncU3Ed__53_tCB90C821E003B0152A4AAC3CB54BD84D61B8823D, ___U3CU3Eu__1_6)); }
	inline TaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F  get_U3CU3Eu__1_6() const { return ___U3CU3Eu__1_6; }
	inline TaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F * get_address_of_U3CU3Eu__1_6() { return &___U3CU3Eu__1_6; }
	inline void set_U3CU3Eu__1_6(TaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F  value)
	{
		___U3CU3Eu__1_6 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Eu__1_6))->___m_task_0), (void*)NULL);
	}
};


// UnityGLTF.Loader.WebRequestLoader_<LoadStreamAsync>d__3
struct  U3CLoadStreamAsyncU3Ed__3_t50DFA3B38506B50EA0F0E43D41F7D967B4E80BC1 
{
public:
	// System.Int32 UnityGLTF.Loader.WebRequestLoader_<LoadStreamAsync>d__3::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.IO.Stream> UnityGLTF.Loader.WebRequestLoader_<LoadStreamAsync>d__3::<>t__builder
	AsyncTaskMethodBuilder_1_t629F383EABB1E23F4CFEEA0B7A1783E79CB8EF9C  ___U3CU3Et__builder_1;
	// System.String UnityGLTF.Loader.WebRequestLoader_<LoadStreamAsync>d__3::gltfFilePath
	String_t* ___gltfFilePath_2;
	// UnityGLTF.Loader.WebRequestLoader UnityGLTF.Loader.WebRequestLoader_<LoadStreamAsync>d__3::<>4__this
	WebRequestLoader_tF1F01C9F12FA444AAA9D3466649478998AECB291 * ___U3CU3E4__this_3;
	// System.Net.Http.HttpResponseMessage UnityGLTF.Loader.WebRequestLoader_<LoadStreamAsync>d__3::<response>5__2
	HttpResponseMessage_t619DB9FDC8E63CDF2D0A314B61A4C6609A43F904 * ___U3CresponseU3E5__2_4;
	// System.IO.MemoryStream UnityGLTF.Loader.WebRequestLoader_<LoadStreamAsync>d__3::<result>5__3
	MemoryStream_t495F44B85E6B4DDE2BB7E17DE963256A74E2298C * ___U3CresultU3E5__3_5;
	// System.Runtime.CompilerServices.TaskAwaiter`1<System.Net.Http.HttpResponseMessage> UnityGLTF.Loader.WebRequestLoader_<LoadStreamAsync>d__3::<>u__1
	TaskAwaiter_1_t0CD71BC02837B0D53252196D19DABDA73A615B86  ___U3CU3Eu__1_6;
	// System.Runtime.CompilerServices.TaskAwaiter UnityGLTF.Loader.WebRequestLoader_<LoadStreamAsync>d__3::<>u__2
	TaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F  ___U3CU3Eu__2_7;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CLoadStreamAsyncU3Ed__3_t50DFA3B38506B50EA0F0E43D41F7D967B4E80BC1, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3Et__builder_1() { return static_cast<int32_t>(offsetof(U3CLoadStreamAsyncU3Ed__3_t50DFA3B38506B50EA0F0E43D41F7D967B4E80BC1, ___U3CU3Et__builder_1)); }
	inline AsyncTaskMethodBuilder_1_t629F383EABB1E23F4CFEEA0B7A1783E79CB8EF9C  get_U3CU3Et__builder_1() const { return ___U3CU3Et__builder_1; }
	inline AsyncTaskMethodBuilder_1_t629F383EABB1E23F4CFEEA0B7A1783E79CB8EF9C * get_address_of_U3CU3Et__builder_1() { return &___U3CU3Et__builder_1; }
	inline void set_U3CU3Et__builder_1(AsyncTaskMethodBuilder_1_t629F383EABB1E23F4CFEEA0B7A1783E79CB8EF9C  value)
	{
		___U3CU3Et__builder_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3Et__builder_1))->___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3Et__builder_1))->___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Et__builder_1))->___m_task_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_gltfFilePath_2() { return static_cast<int32_t>(offsetof(U3CLoadStreamAsyncU3Ed__3_t50DFA3B38506B50EA0F0E43D41F7D967B4E80BC1, ___gltfFilePath_2)); }
	inline String_t* get_gltfFilePath_2() const { return ___gltfFilePath_2; }
	inline String_t** get_address_of_gltfFilePath_2() { return &___gltfFilePath_2; }
	inline void set_gltfFilePath_2(String_t* value)
	{
		___gltfFilePath_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___gltfFilePath_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_3() { return static_cast<int32_t>(offsetof(U3CLoadStreamAsyncU3Ed__3_t50DFA3B38506B50EA0F0E43D41F7D967B4E80BC1, ___U3CU3E4__this_3)); }
	inline WebRequestLoader_tF1F01C9F12FA444AAA9D3466649478998AECB291 * get_U3CU3E4__this_3() const { return ___U3CU3E4__this_3; }
	inline WebRequestLoader_tF1F01C9F12FA444AAA9D3466649478998AECB291 ** get_address_of_U3CU3E4__this_3() { return &___U3CU3E4__this_3; }
	inline void set_U3CU3E4__this_3(WebRequestLoader_tF1F01C9F12FA444AAA9D3466649478998AECB291 * value)
	{
		___U3CU3E4__this_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CresponseU3E5__2_4() { return static_cast<int32_t>(offsetof(U3CLoadStreamAsyncU3Ed__3_t50DFA3B38506B50EA0F0E43D41F7D967B4E80BC1, ___U3CresponseU3E5__2_4)); }
	inline HttpResponseMessage_t619DB9FDC8E63CDF2D0A314B61A4C6609A43F904 * get_U3CresponseU3E5__2_4() const { return ___U3CresponseU3E5__2_4; }
	inline HttpResponseMessage_t619DB9FDC8E63CDF2D0A314B61A4C6609A43F904 ** get_address_of_U3CresponseU3E5__2_4() { return &___U3CresponseU3E5__2_4; }
	inline void set_U3CresponseU3E5__2_4(HttpResponseMessage_t619DB9FDC8E63CDF2D0A314B61A4C6609A43F904 * value)
	{
		___U3CresponseU3E5__2_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CresponseU3E5__2_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CresultU3E5__3_5() { return static_cast<int32_t>(offsetof(U3CLoadStreamAsyncU3Ed__3_t50DFA3B38506B50EA0F0E43D41F7D967B4E80BC1, ___U3CresultU3E5__3_5)); }
	inline MemoryStream_t495F44B85E6B4DDE2BB7E17DE963256A74E2298C * get_U3CresultU3E5__3_5() const { return ___U3CresultU3E5__3_5; }
	inline MemoryStream_t495F44B85E6B4DDE2BB7E17DE963256A74E2298C ** get_address_of_U3CresultU3E5__3_5() { return &___U3CresultU3E5__3_5; }
	inline void set_U3CresultU3E5__3_5(MemoryStream_t495F44B85E6B4DDE2BB7E17DE963256A74E2298C * value)
	{
		___U3CresultU3E5__3_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CresultU3E5__3_5), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3Eu__1_6() { return static_cast<int32_t>(offsetof(U3CLoadStreamAsyncU3Ed__3_t50DFA3B38506B50EA0F0E43D41F7D967B4E80BC1, ___U3CU3Eu__1_6)); }
	inline TaskAwaiter_1_t0CD71BC02837B0D53252196D19DABDA73A615B86  get_U3CU3Eu__1_6() const { return ___U3CU3Eu__1_6; }
	inline TaskAwaiter_1_t0CD71BC02837B0D53252196D19DABDA73A615B86 * get_address_of_U3CU3Eu__1_6() { return &___U3CU3Eu__1_6; }
	inline void set_U3CU3Eu__1_6(TaskAwaiter_1_t0CD71BC02837B0D53252196D19DABDA73A615B86  value)
	{
		___U3CU3Eu__1_6 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Eu__1_6))->___m_task_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_U3CU3Eu__2_7() { return static_cast<int32_t>(offsetof(U3CLoadStreamAsyncU3Ed__3_t50DFA3B38506B50EA0F0E43D41F7D967B4E80BC1, ___U3CU3Eu__2_7)); }
	inline TaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F  get_U3CU3Eu__2_7() const { return ___U3CU3Eu__2_7; }
	inline TaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F * get_address_of_U3CU3Eu__2_7() { return &___U3CU3Eu__2_7; }
	inline void set_U3CU3Eu__2_7(TaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F  value)
	{
		___U3CU3Eu__2_7 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Eu__2_7))->___m_task_0), (void*)NULL);
	}
};


// UnityGLTF.ShaderNotFoundException
struct  ShaderNotFoundException_t20F210948B72AE4B32DA84FE44A94340A5959E01  : public Exception_t
{
public:

public:
};


// UnityGLTF.StandardMap
struct  StandardMap_t3FEC34B6C31267CFE948D5C63C3DFECC4A1C4806  : public RuntimeObject
{
public:
	// UnityEngine.Material UnityGLTF.StandardMap::_material
	Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ____material_0;
	// GLTF.Schema.AlphaMode UnityGLTF.StandardMap::_alphaMode
	int32_t ____alphaMode_1;
	// System.Double UnityGLTF.StandardMap::_alphaCutoff
	double ____alphaCutoff_2;
	// UnityEngine.Vector2 UnityGLTF.StandardMap::normalOffset
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___normalOffset_3;
	// UnityEngine.Vector2 UnityGLTF.StandardMap::occlusionOffset
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___occlusionOffset_4;
	// UnityEngine.Vector2 UnityGLTF.StandardMap::emissiveOffset
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___emissiveOffset_5;

public:
	inline static int32_t get_offset_of__material_0() { return static_cast<int32_t>(offsetof(StandardMap_t3FEC34B6C31267CFE948D5C63C3DFECC4A1C4806, ____material_0)); }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * get__material_0() const { return ____material_0; }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 ** get_address_of__material_0() { return &____material_0; }
	inline void set__material_0(Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * value)
	{
		____material_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____material_0), (void*)value);
	}

	inline static int32_t get_offset_of__alphaMode_1() { return static_cast<int32_t>(offsetof(StandardMap_t3FEC34B6C31267CFE948D5C63C3DFECC4A1C4806, ____alphaMode_1)); }
	inline int32_t get__alphaMode_1() const { return ____alphaMode_1; }
	inline int32_t* get_address_of__alphaMode_1() { return &____alphaMode_1; }
	inline void set__alphaMode_1(int32_t value)
	{
		____alphaMode_1 = value;
	}

	inline static int32_t get_offset_of__alphaCutoff_2() { return static_cast<int32_t>(offsetof(StandardMap_t3FEC34B6C31267CFE948D5C63C3DFECC4A1C4806, ____alphaCutoff_2)); }
	inline double get__alphaCutoff_2() const { return ____alphaCutoff_2; }
	inline double* get_address_of__alphaCutoff_2() { return &____alphaCutoff_2; }
	inline void set__alphaCutoff_2(double value)
	{
		____alphaCutoff_2 = value;
	}

	inline static int32_t get_offset_of_normalOffset_3() { return static_cast<int32_t>(offsetof(StandardMap_t3FEC34B6C31267CFE948D5C63C3DFECC4A1C4806, ___normalOffset_3)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_normalOffset_3() const { return ___normalOffset_3; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_normalOffset_3() { return &___normalOffset_3; }
	inline void set_normalOffset_3(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___normalOffset_3 = value;
	}

	inline static int32_t get_offset_of_occlusionOffset_4() { return static_cast<int32_t>(offsetof(StandardMap_t3FEC34B6C31267CFE948D5C63C3DFECC4A1C4806, ___occlusionOffset_4)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_occlusionOffset_4() const { return ___occlusionOffset_4; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_occlusionOffset_4() { return &___occlusionOffset_4; }
	inline void set_occlusionOffset_4(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___occlusionOffset_4 = value;
	}

	inline static int32_t get_offset_of_emissiveOffset_5() { return static_cast<int32_t>(offsetof(StandardMap_t3FEC34B6C31267CFE948D5C63C3DFECC4A1C4806, ___emissiveOffset_5)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_emissiveOffset_5() const { return ___emissiveOffset_5; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_emissiveOffset_5() { return &___emissiveOffset_5; }
	inline void set_emissiveOffset_5(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___emissiveOffset_5 = value;
	}
};


// System.Action`2<UnityEngine.GameObject,System.Runtime.ExceptionServices.ExceptionDispatchInfo>
struct  Action_2_tA8345456806B324BA9E2C0C4E51F157CE28878B6  : public MulticastDelegate_t
{
public:

public:
};


// System.ArgumentException
struct  ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1  : public SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782
{
public:
	// System.String System.ArgumentException::m_paramName
	String_t* ___m_paramName_17;

public:
	inline static int32_t get_offset_of_m_paramName_17() { return static_cast<int32_t>(offsetof(ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1, ___m_paramName_17)); }
	inline String_t* get_m_paramName_17() const { return ___m_paramName_17; }
	inline String_t** get_address_of_m_paramName_17() { return &___m_paramName_17; }
	inline void set_m_paramName_17(String_t* value)
	{
		___m_paramName_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_paramName_17), (void*)value);
	}
};


// System.AsyncCallback
struct  AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`1<System.Boolean>
struct  Func_1_t4ABD6DAD480574F152452DD6B9C9A55F4F6655F1  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`1<System.IO.Stream>
struct  Func_1_tF4352FCFF143E795C0D762BB22D817C4457922EC  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`1<System.Threading.Tasks.Task>
struct  Func_1_t864AB9A10EEBC12BC5B32E4C8BD6F0F8E0D2F728  : public MulticastDelegate_t
{
public:

public:
};


// System.IO.IOException
struct  IOException_t60E052020EDE4D3075F57A1DCC224FF8864354BA  : public SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782
{
public:
	// System.String System.IO.IOException::_maybeFullPath
	String_t* ____maybeFullPath_17;

public:
	inline static int32_t get_offset_of__maybeFullPath_17() { return static_cast<int32_t>(offsetof(IOException_t60E052020EDE4D3075F57A1DCC224FF8864354BA, ____maybeFullPath_17)); }
	inline String_t* get__maybeFullPath_17() const { return ____maybeFullPath_17; }
	inline String_t** get_address_of__maybeFullPath_17() { return &____maybeFullPath_17; }
	inline void set__maybeFullPath_17(String_t* value)
	{
		____maybeFullPath_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____maybeFullPath_17), (void*)value);
	}
};


// System.Net.Http.Headers.HttpContentHeaders
struct  HttpContentHeaders_t98D8657573ADACD807B6C941F46E6D69EDFD13A0  : public HttpHeaders_tF0E0E01200BD0D8141489FB370D60A9F4DBF42A1
{
public:
	// System.Net.Http.HttpContent System.Net.Http.Headers.HttpContentHeaders::content
	HttpContent_t678722F60CA151DD19AFCA917657BE24F111A41D * ___content_5;

public:
	inline static int32_t get_offset_of_content_5() { return static_cast<int32_t>(offsetof(HttpContentHeaders_t98D8657573ADACD807B6C941F46E6D69EDFD13A0, ___content_5)); }
	inline HttpContent_t678722F60CA151DD19AFCA917657BE24F111A41D * get_content_5() const { return ___content_5; }
	inline HttpContent_t678722F60CA151DD19AFCA917657BE24F111A41D ** get_address_of_content_5() { return &___content_5; }
	inline void set_content_5(HttpContent_t678722F60CA151DD19AFCA917657BE24F111A41D * value)
	{
		___content_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___content_5), (void*)value);
	}
};


// System.Net.Security.RemoteCertificateValidationCallback
struct  RemoteCertificateValidationCallback_t9C6BA19681BAA3CD78E6674293A57FF5DF62831E  : public MulticastDelegate_t
{
public:

public:
};


// System.NotSupportedException
struct  NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010  : public SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782
{
public:

public:
};


// System.OperationCanceledException
struct  OperationCanceledException_tD28B1AE59ACCE4D46333BFE398395B8D75D76A90  : public SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782
{
public:
	// System.Threading.CancellationToken System.OperationCanceledException::_cancellationToken
	CancellationToken_t9E956952F7F20908F2AE72EDF36D97E6C7DB63AB  ____cancellationToken_17;

public:
	inline static int32_t get_offset_of__cancellationToken_17() { return static_cast<int32_t>(offsetof(OperationCanceledException_tD28B1AE59ACCE4D46333BFE398395B8D75D76A90, ____cancellationToken_17)); }
	inline CancellationToken_t9E956952F7F20908F2AE72EDF36D97E6C7DB63AB  get__cancellationToken_17() const { return ____cancellationToken_17; }
	inline CancellationToken_t9E956952F7F20908F2AE72EDF36D97E6C7DB63AB * get_address_of__cancellationToken_17() { return &____cancellationToken_17; }
	inline void set__cancellationToken_17(CancellationToken_t9E956952F7F20908F2AE72EDF36D97E6C7DB63AB  value)
	{
		____cancellationToken_17 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&____cancellationToken_17))->___m_source_0), (void*)NULL);
	}
};


// System.OutOfMemoryException
struct  OutOfMemoryException_t2DF3EAC178583BD1DEFAAECBEDB2AF1EA86FBFC7  : public SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782
{
public:

public:
};


// System.Threading.ThreadStart
struct  ThreadStart_t09FFA4371E4B2A713F212B157CC9B8B61983B5BF  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Application_LowMemoryCallback
struct  LowMemoryCallback_t3862486677D10CD16ECDA703CFB75039A4B3AE00  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Behaviour
struct  Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8  : public Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621
{
public:

public:
};


// UnityEngine.Renderer
struct  Renderer_t0556D67DD582620D1F495627EDE30D03284151F4  : public Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621
{
public:

public:
};


// UnityEngine.Transform
struct  Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA  : public Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621
{
public:

public:
};


// UnityGLTF.GLTFSceneImporter_<LoadJson>d__59
struct  U3CLoadJsonU3Ed__59_tCCA3845E8F7AC6B17CFC8E14B3623869D204520D 
{
public:
	// System.Int32 UnityGLTF.GLTFSceneImporter_<LoadJson>d__59::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder UnityGLTF.GLTFSceneImporter_<LoadJson>d__59::<>t__builder
	AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487  ___U3CU3Et__builder_1;
	// UnityGLTF.GLTFSceneImporter UnityGLTF.GLTFSceneImporter_<LoadJson>d__59::<>4__this
	GLTFSceneImporter_t29A5109798926C47E5B089376F3E467E78EB710E * ___U3CU3E4__this_2;
	// System.String UnityGLTF.GLTFSceneImporter_<LoadJson>d__59::jsonFilePath
	String_t* ___jsonFilePath_3;
	// UnityGLTF.GLTFSceneImporter_<>c__DisplayClass59_0 UnityGLTF.GLTFSceneImporter_<LoadJson>d__59::<>8__1
	U3CU3Ec__DisplayClass59_0_t52561C113FB61DE90816C347C4AAD7789417775A * ___U3CU3E8__1_4;
	// System.Runtime.CompilerServices.TaskAwaiter`1<System.IO.Stream> UnityGLTF.GLTFSceneImporter_<LoadJson>d__59::<>u__1
	TaskAwaiter_1_tE58F4C544BB434328CC2FB19E47D3E1A9599942C  ___U3CU3Eu__1_5;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CLoadJsonU3Ed__59_tCCA3845E8F7AC6B17CFC8E14B3623869D204520D, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3Et__builder_1() { return static_cast<int32_t>(offsetof(U3CLoadJsonU3Ed__59_tCCA3845E8F7AC6B17CFC8E14B3623869D204520D, ___U3CU3Et__builder_1)); }
	inline AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487  get_U3CU3Et__builder_1() const { return ___U3CU3Et__builder_1; }
	inline AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487 * get_address_of_U3CU3Et__builder_1() { return &___U3CU3Et__builder_1; }
	inline void set_U3CU3Et__builder_1(AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487  value)
	{
		___U3CU3Et__builder_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___U3CU3Et__builder_1))->___m_builder_1))->___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___U3CU3Et__builder_1))->___m_builder_1))->___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3Et__builder_1))->___m_builder_1))->___m_task_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CLoadJsonU3Ed__59_tCCA3845E8F7AC6B17CFC8E14B3623869D204520D, ___U3CU3E4__this_2)); }
	inline GLTFSceneImporter_t29A5109798926C47E5B089376F3E467E78EB710E * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline GLTFSceneImporter_t29A5109798926C47E5B089376F3E467E78EB710E ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(GLTFSceneImporter_t29A5109798926C47E5B089376F3E467E78EB710E * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_jsonFilePath_3() { return static_cast<int32_t>(offsetof(U3CLoadJsonU3Ed__59_tCCA3845E8F7AC6B17CFC8E14B3623869D204520D, ___jsonFilePath_3)); }
	inline String_t* get_jsonFilePath_3() const { return ___jsonFilePath_3; }
	inline String_t** get_address_of_jsonFilePath_3() { return &___jsonFilePath_3; }
	inline void set_jsonFilePath_3(String_t* value)
	{
		___jsonFilePath_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___jsonFilePath_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E8__1_4() { return static_cast<int32_t>(offsetof(U3CLoadJsonU3Ed__59_tCCA3845E8F7AC6B17CFC8E14B3623869D204520D, ___U3CU3E8__1_4)); }
	inline U3CU3Ec__DisplayClass59_0_t52561C113FB61DE90816C347C4AAD7789417775A * get_U3CU3E8__1_4() const { return ___U3CU3E8__1_4; }
	inline U3CU3Ec__DisplayClass59_0_t52561C113FB61DE90816C347C4AAD7789417775A ** get_address_of_U3CU3E8__1_4() { return &___U3CU3E8__1_4; }
	inline void set_U3CU3E8__1_4(U3CU3Ec__DisplayClass59_0_t52561C113FB61DE90816C347C4AAD7789417775A * value)
	{
		___U3CU3E8__1_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E8__1_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3Eu__1_5() { return static_cast<int32_t>(offsetof(U3CLoadJsonU3Ed__59_tCCA3845E8F7AC6B17CFC8E14B3623869D204520D, ___U3CU3Eu__1_5)); }
	inline TaskAwaiter_1_tE58F4C544BB434328CC2FB19E47D3E1A9599942C  get_U3CU3Eu__1_5() const { return ___U3CU3Eu__1_5; }
	inline TaskAwaiter_1_tE58F4C544BB434328CC2FB19E47D3E1A9599942C * get_address_of_U3CU3Eu__1_5() { return &___U3CU3Eu__1_5; }
	inline void set_U3CU3Eu__1_5(TaskAwaiter_1_tE58F4C544BB434328CC2FB19E47D3E1A9599942C  value)
	{
		___U3CU3Eu__1_5 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Eu__1_5))->___m_task_0), (void*)NULL);
	}
};


// UnityGLTF.GLTFSceneImporter_<LoadSceneAsync>d__49
struct  U3CLoadSceneAsyncU3Ed__49_t1B6A25CAC879F95D954154652A4EB3422B957F5B 
{
public:
	// System.Int32 UnityGLTF.GLTFSceneImporter_<LoadSceneAsync>d__49::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder UnityGLTF.GLTFSceneImporter_<LoadSceneAsync>d__49::<>t__builder
	AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487  ___U3CU3Et__builder_1;
	// UnityGLTF.GLTFSceneImporter UnityGLTF.GLTFSceneImporter_<LoadSceneAsync>d__49::<>4__this
	GLTFSceneImporter_t29A5109798926C47E5B089376F3E467E78EB710E * ___U3CU3E4__this_2;
	// System.IProgress`1<UnityGLTF.ImportProgress> UnityGLTF.GLTFSceneImporter_<LoadSceneAsync>d__49::progress
	RuntimeObject* ___progress_3;
	// System.Threading.CancellationToken UnityGLTF.GLTFSceneImporter_<LoadSceneAsync>d__49::cancellationToken
	CancellationToken_t9E956952F7F20908F2AE72EDF36D97E6C7DB63AB  ___cancellationToken_4;
	// System.Int32 UnityGLTF.GLTFSceneImporter_<LoadSceneAsync>d__49::sceneIndex
	int32_t ___sceneIndex_5;
	// System.Boolean UnityGLTF.GLTFSceneImporter_<LoadSceneAsync>d__49::showSceneObj
	bool ___showSceneObj_6;
	// System.Action`2<UnityEngine.GameObject,System.Runtime.ExceptionServices.ExceptionDispatchInfo> UnityGLTF.GLTFSceneImporter_<LoadSceneAsync>d__49::onLoadComplete
	Action_2_tA8345456806B324BA9E2C0C4E51F157CE28878B6 * ___onLoadComplete_7;
	// System.Runtime.CompilerServices.TaskAwaiter UnityGLTF.GLTFSceneImporter_<LoadSceneAsync>d__49::<>u__1
	TaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F  ___U3CU3Eu__1_8;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CLoadSceneAsyncU3Ed__49_t1B6A25CAC879F95D954154652A4EB3422B957F5B, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3Et__builder_1() { return static_cast<int32_t>(offsetof(U3CLoadSceneAsyncU3Ed__49_t1B6A25CAC879F95D954154652A4EB3422B957F5B, ___U3CU3Et__builder_1)); }
	inline AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487  get_U3CU3Et__builder_1() const { return ___U3CU3Et__builder_1; }
	inline AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487 * get_address_of_U3CU3Et__builder_1() { return &___U3CU3Et__builder_1; }
	inline void set_U3CU3Et__builder_1(AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487  value)
	{
		___U3CU3Et__builder_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___U3CU3Et__builder_1))->___m_builder_1))->___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___U3CU3Et__builder_1))->___m_builder_1))->___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3Et__builder_1))->___m_builder_1))->___m_task_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CLoadSceneAsyncU3Ed__49_t1B6A25CAC879F95D954154652A4EB3422B957F5B, ___U3CU3E4__this_2)); }
	inline GLTFSceneImporter_t29A5109798926C47E5B089376F3E467E78EB710E * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline GLTFSceneImporter_t29A5109798926C47E5B089376F3E467E78EB710E ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(GLTFSceneImporter_t29A5109798926C47E5B089376F3E467E78EB710E * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_progress_3() { return static_cast<int32_t>(offsetof(U3CLoadSceneAsyncU3Ed__49_t1B6A25CAC879F95D954154652A4EB3422B957F5B, ___progress_3)); }
	inline RuntimeObject* get_progress_3() const { return ___progress_3; }
	inline RuntimeObject** get_address_of_progress_3() { return &___progress_3; }
	inline void set_progress_3(RuntimeObject* value)
	{
		___progress_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___progress_3), (void*)value);
	}

	inline static int32_t get_offset_of_cancellationToken_4() { return static_cast<int32_t>(offsetof(U3CLoadSceneAsyncU3Ed__49_t1B6A25CAC879F95D954154652A4EB3422B957F5B, ___cancellationToken_4)); }
	inline CancellationToken_t9E956952F7F20908F2AE72EDF36D97E6C7DB63AB  get_cancellationToken_4() const { return ___cancellationToken_4; }
	inline CancellationToken_t9E956952F7F20908F2AE72EDF36D97E6C7DB63AB * get_address_of_cancellationToken_4() { return &___cancellationToken_4; }
	inline void set_cancellationToken_4(CancellationToken_t9E956952F7F20908F2AE72EDF36D97E6C7DB63AB  value)
	{
		___cancellationToken_4 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___cancellationToken_4))->___m_source_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_sceneIndex_5() { return static_cast<int32_t>(offsetof(U3CLoadSceneAsyncU3Ed__49_t1B6A25CAC879F95D954154652A4EB3422B957F5B, ___sceneIndex_5)); }
	inline int32_t get_sceneIndex_5() const { return ___sceneIndex_5; }
	inline int32_t* get_address_of_sceneIndex_5() { return &___sceneIndex_5; }
	inline void set_sceneIndex_5(int32_t value)
	{
		___sceneIndex_5 = value;
	}

	inline static int32_t get_offset_of_showSceneObj_6() { return static_cast<int32_t>(offsetof(U3CLoadSceneAsyncU3Ed__49_t1B6A25CAC879F95D954154652A4EB3422B957F5B, ___showSceneObj_6)); }
	inline bool get_showSceneObj_6() const { return ___showSceneObj_6; }
	inline bool* get_address_of_showSceneObj_6() { return &___showSceneObj_6; }
	inline void set_showSceneObj_6(bool value)
	{
		___showSceneObj_6 = value;
	}

	inline static int32_t get_offset_of_onLoadComplete_7() { return static_cast<int32_t>(offsetof(U3CLoadSceneAsyncU3Ed__49_t1B6A25CAC879F95D954154652A4EB3422B957F5B, ___onLoadComplete_7)); }
	inline Action_2_tA8345456806B324BA9E2C0C4E51F157CE28878B6 * get_onLoadComplete_7() const { return ___onLoadComplete_7; }
	inline Action_2_tA8345456806B324BA9E2C0C4E51F157CE28878B6 ** get_address_of_onLoadComplete_7() { return &___onLoadComplete_7; }
	inline void set_onLoadComplete_7(Action_2_tA8345456806B324BA9E2C0C4E51F157CE28878B6 * value)
	{
		___onLoadComplete_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onLoadComplete_7), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3Eu__1_8() { return static_cast<int32_t>(offsetof(U3CLoadSceneAsyncU3Ed__49_t1B6A25CAC879F95D954154652A4EB3422B957F5B, ___U3CU3Eu__1_8)); }
	inline TaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F  get_U3CU3Eu__1_8() const { return ___U3CU3Eu__1_8; }
	inline TaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F * get_address_of_U3CU3Eu__1_8() { return &___U3CU3Eu__1_8; }
	inline void set_U3CU3Eu__1_8(TaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F  value)
	{
		___U3CU3Eu__1_8 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Eu__1_8))->___m_task_0), (void*)NULL);
	}
};


// UnityGLTF.GLTFSceneImporter_<LoadTextureAsync>d__90
struct  U3CLoadTextureAsyncU3Ed__90_t89527B90B205393BD5B0E5F5DFB152719A50FBEB 
{
public:
	// System.Int32 UnityGLTF.GLTFSceneImporter_<LoadTextureAsync>d__90::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder UnityGLTF.GLTFSceneImporter_<LoadTextureAsync>d__90::<>t__builder
	AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487  ___U3CU3Et__builder_1;
	// UnityGLTF.GLTFSceneImporter UnityGLTF.GLTFSceneImporter_<LoadTextureAsync>d__90::<>4__this
	GLTFSceneImporter_t29A5109798926C47E5B089376F3E467E78EB710E * ___U3CU3E4__this_2;
	// GLTF.Schema.GLTFTexture UnityGLTF.GLTFSceneImporter_<LoadTextureAsync>d__90::texture
	GLTFTexture_t2D12B18E729EBA0BBA4A5B51A991297BDFF7CD65 * ___texture_3;
	// System.Int32 UnityGLTF.GLTFSceneImporter_<LoadTextureAsync>d__90::textureIndex
	int32_t ___textureIndex_4;
	// System.Boolean UnityGLTF.GLTFSceneImporter_<LoadTextureAsync>d__90::markGpuOnly
	bool ___markGpuOnly_5;
	// System.Boolean UnityGLTF.GLTFSceneImporter_<LoadTextureAsync>d__90::isLinear
	bool ___isLinear_6;
	// System.Runtime.CompilerServices.TaskAwaiter UnityGLTF.GLTFSceneImporter_<LoadTextureAsync>d__90::<>u__1
	TaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F  ___U3CU3Eu__1_7;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CLoadTextureAsyncU3Ed__90_t89527B90B205393BD5B0E5F5DFB152719A50FBEB, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3Et__builder_1() { return static_cast<int32_t>(offsetof(U3CLoadTextureAsyncU3Ed__90_t89527B90B205393BD5B0E5F5DFB152719A50FBEB, ___U3CU3Et__builder_1)); }
	inline AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487  get_U3CU3Et__builder_1() const { return ___U3CU3Et__builder_1; }
	inline AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487 * get_address_of_U3CU3Et__builder_1() { return &___U3CU3Et__builder_1; }
	inline void set_U3CU3Et__builder_1(AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487  value)
	{
		___U3CU3Et__builder_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___U3CU3Et__builder_1))->___m_builder_1))->___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___U3CU3Et__builder_1))->___m_builder_1))->___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3Et__builder_1))->___m_builder_1))->___m_task_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CLoadTextureAsyncU3Ed__90_t89527B90B205393BD5B0E5F5DFB152719A50FBEB, ___U3CU3E4__this_2)); }
	inline GLTFSceneImporter_t29A5109798926C47E5B089376F3E467E78EB710E * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline GLTFSceneImporter_t29A5109798926C47E5B089376F3E467E78EB710E ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(GLTFSceneImporter_t29A5109798926C47E5B089376F3E467E78EB710E * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_texture_3() { return static_cast<int32_t>(offsetof(U3CLoadTextureAsyncU3Ed__90_t89527B90B205393BD5B0E5F5DFB152719A50FBEB, ___texture_3)); }
	inline GLTFTexture_t2D12B18E729EBA0BBA4A5B51A991297BDFF7CD65 * get_texture_3() const { return ___texture_3; }
	inline GLTFTexture_t2D12B18E729EBA0BBA4A5B51A991297BDFF7CD65 ** get_address_of_texture_3() { return &___texture_3; }
	inline void set_texture_3(GLTFTexture_t2D12B18E729EBA0BBA4A5B51A991297BDFF7CD65 * value)
	{
		___texture_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___texture_3), (void*)value);
	}

	inline static int32_t get_offset_of_textureIndex_4() { return static_cast<int32_t>(offsetof(U3CLoadTextureAsyncU3Ed__90_t89527B90B205393BD5B0E5F5DFB152719A50FBEB, ___textureIndex_4)); }
	inline int32_t get_textureIndex_4() const { return ___textureIndex_4; }
	inline int32_t* get_address_of_textureIndex_4() { return &___textureIndex_4; }
	inline void set_textureIndex_4(int32_t value)
	{
		___textureIndex_4 = value;
	}

	inline static int32_t get_offset_of_markGpuOnly_5() { return static_cast<int32_t>(offsetof(U3CLoadTextureAsyncU3Ed__90_t89527B90B205393BD5B0E5F5DFB152719A50FBEB, ___markGpuOnly_5)); }
	inline bool get_markGpuOnly_5() const { return ___markGpuOnly_5; }
	inline bool* get_address_of_markGpuOnly_5() { return &___markGpuOnly_5; }
	inline void set_markGpuOnly_5(bool value)
	{
		___markGpuOnly_5 = value;
	}

	inline static int32_t get_offset_of_isLinear_6() { return static_cast<int32_t>(offsetof(U3CLoadTextureAsyncU3Ed__90_t89527B90B205393BD5B0E5F5DFB152719A50FBEB, ___isLinear_6)); }
	inline bool get_isLinear_6() const { return ___isLinear_6; }
	inline bool* get_address_of_isLinear_6() { return &___isLinear_6; }
	inline void set_isLinear_6(bool value)
	{
		___isLinear_6 = value;
	}

	inline static int32_t get_offset_of_U3CU3Eu__1_7() { return static_cast<int32_t>(offsetof(U3CLoadTextureAsyncU3Ed__90_t89527B90B205393BD5B0E5F5DFB152719A50FBEB, ___U3CU3Eu__1_7)); }
	inline TaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F  get_U3CU3Eu__1_7() const { return ___U3CU3Eu__1_7; }
	inline TaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F * get_address_of_U3CU3Eu__1_7() { return &___U3CU3Eu__1_7; }
	inline void set_U3CU3Eu__1_7(TaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F  value)
	{
		___U3CU3Eu__1_7 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Eu__1_7))->___m_task_0), (void*)NULL);
	}
};


// UnityGLTF.GLTFSceneImporter_<SetupBones>d__81
struct  U3CSetupBonesU3Ed__81_t62772CFE58B2A384226F4D7C2927B56067511DDC 
{
public:
	// System.Int32 UnityGLTF.GLTFSceneImporter_<SetupBones>d__81::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder UnityGLTF.GLTFSceneImporter_<SetupBones>d__81::<>t__builder
	AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487  ___U3CU3Et__builder_1;
	// GLTF.Schema.Skin UnityGLTF.GLTFSceneImporter_<SetupBones>d__81::skin
	Skin_t464B07F248F89DD7228D66EAD836CE5B20BB6F34 * ___skin_2;
	// UnityGLTF.GLTFSceneImporter UnityGLTF.GLTFSceneImporter_<SetupBones>d__81::<>4__this
	GLTFSceneImporter_t29A5109798926C47E5B089376F3E467E78EB710E * ___U3CU3E4__this_3;
	// System.Threading.CancellationToken UnityGLTF.GLTFSceneImporter_<SetupBones>d__81::cancellationToken
	CancellationToken_t9E956952F7F20908F2AE72EDF36D97E6C7DB63AB  ___cancellationToken_4;
	// UnityEngine.SkinnedMeshRenderer UnityGLTF.GLTFSceneImporter_<SetupBones>d__81::renderer
	SkinnedMeshRenderer_tFC8103EE7842F7F8A98BEF0C855D32A9711B7B65 * ___renderer_5;
	// System.Int32 UnityGLTF.GLTFSceneImporter_<SetupBones>d__81::<boneCount>5__2
	int32_t ___U3CboneCountU3E5__2_6;
	// UnityEngine.Transform[] UnityGLTF.GLTFSceneImporter_<SetupBones>d__81::<bones>5__3
	TransformU5BU5D_t4F5A1132877D8BA66ABC0A9A7FADA4E0237A7804* ___U3CbonesU3E5__3_7;
	// GLTF.Math.Matrix4x4[] UnityGLTF.GLTFSceneImporter_<SetupBones>d__81::<gltfBindPoses>5__4
	Matrix4x4U5BU5D_tE3A13CB78E1B2CBDCD537180E7C6D83E18B0D9F0* ___U3CgltfBindPosesU3E5__4_8;
	// UnityEngine.Matrix4x4[] UnityGLTF.GLTFSceneImporter_<SetupBones>d__81::<bindPoses>5__5
	Matrix4x4U5BU5D_t1C64F7A0C34058334A8A95BF165F0027690598C9* ___U3CbindPosesU3E5__5_9;
	// System.Int32 UnityGLTF.GLTFSceneImporter_<SetupBones>d__81::<i>5__6
	int32_t ___U3CiU3E5__6_10;
	// System.Runtime.CompilerServices.TaskAwaiter`1<UnityEngine.GameObject> UnityGLTF.GLTFSceneImporter_<SetupBones>d__81::<>u__1
	TaskAwaiter_1_tAE6B8B90DDB2F4605D3C8F53F1F449F35790A468  ___U3CU3Eu__1_11;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CSetupBonesU3Ed__81_t62772CFE58B2A384226F4D7C2927B56067511DDC, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3Et__builder_1() { return static_cast<int32_t>(offsetof(U3CSetupBonesU3Ed__81_t62772CFE58B2A384226F4D7C2927B56067511DDC, ___U3CU3Et__builder_1)); }
	inline AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487  get_U3CU3Et__builder_1() const { return ___U3CU3Et__builder_1; }
	inline AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487 * get_address_of_U3CU3Et__builder_1() { return &___U3CU3Et__builder_1; }
	inline void set_U3CU3Et__builder_1(AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487  value)
	{
		___U3CU3Et__builder_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___U3CU3Et__builder_1))->___m_builder_1))->___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___U3CU3Et__builder_1))->___m_builder_1))->___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3Et__builder_1))->___m_builder_1))->___m_task_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_skin_2() { return static_cast<int32_t>(offsetof(U3CSetupBonesU3Ed__81_t62772CFE58B2A384226F4D7C2927B56067511DDC, ___skin_2)); }
	inline Skin_t464B07F248F89DD7228D66EAD836CE5B20BB6F34 * get_skin_2() const { return ___skin_2; }
	inline Skin_t464B07F248F89DD7228D66EAD836CE5B20BB6F34 ** get_address_of_skin_2() { return &___skin_2; }
	inline void set_skin_2(Skin_t464B07F248F89DD7228D66EAD836CE5B20BB6F34 * value)
	{
		___skin_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___skin_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_3() { return static_cast<int32_t>(offsetof(U3CSetupBonesU3Ed__81_t62772CFE58B2A384226F4D7C2927B56067511DDC, ___U3CU3E4__this_3)); }
	inline GLTFSceneImporter_t29A5109798926C47E5B089376F3E467E78EB710E * get_U3CU3E4__this_3() const { return ___U3CU3E4__this_3; }
	inline GLTFSceneImporter_t29A5109798926C47E5B089376F3E467E78EB710E ** get_address_of_U3CU3E4__this_3() { return &___U3CU3E4__this_3; }
	inline void set_U3CU3E4__this_3(GLTFSceneImporter_t29A5109798926C47E5B089376F3E467E78EB710E * value)
	{
		___U3CU3E4__this_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_3), (void*)value);
	}

	inline static int32_t get_offset_of_cancellationToken_4() { return static_cast<int32_t>(offsetof(U3CSetupBonesU3Ed__81_t62772CFE58B2A384226F4D7C2927B56067511DDC, ___cancellationToken_4)); }
	inline CancellationToken_t9E956952F7F20908F2AE72EDF36D97E6C7DB63AB  get_cancellationToken_4() const { return ___cancellationToken_4; }
	inline CancellationToken_t9E956952F7F20908F2AE72EDF36D97E6C7DB63AB * get_address_of_cancellationToken_4() { return &___cancellationToken_4; }
	inline void set_cancellationToken_4(CancellationToken_t9E956952F7F20908F2AE72EDF36D97E6C7DB63AB  value)
	{
		___cancellationToken_4 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___cancellationToken_4))->___m_source_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_renderer_5() { return static_cast<int32_t>(offsetof(U3CSetupBonesU3Ed__81_t62772CFE58B2A384226F4D7C2927B56067511DDC, ___renderer_5)); }
	inline SkinnedMeshRenderer_tFC8103EE7842F7F8A98BEF0C855D32A9711B7B65 * get_renderer_5() const { return ___renderer_5; }
	inline SkinnedMeshRenderer_tFC8103EE7842F7F8A98BEF0C855D32A9711B7B65 ** get_address_of_renderer_5() { return &___renderer_5; }
	inline void set_renderer_5(SkinnedMeshRenderer_tFC8103EE7842F7F8A98BEF0C855D32A9711B7B65 * value)
	{
		___renderer_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___renderer_5), (void*)value);
	}

	inline static int32_t get_offset_of_U3CboneCountU3E5__2_6() { return static_cast<int32_t>(offsetof(U3CSetupBonesU3Ed__81_t62772CFE58B2A384226F4D7C2927B56067511DDC, ___U3CboneCountU3E5__2_6)); }
	inline int32_t get_U3CboneCountU3E5__2_6() const { return ___U3CboneCountU3E5__2_6; }
	inline int32_t* get_address_of_U3CboneCountU3E5__2_6() { return &___U3CboneCountU3E5__2_6; }
	inline void set_U3CboneCountU3E5__2_6(int32_t value)
	{
		___U3CboneCountU3E5__2_6 = value;
	}

	inline static int32_t get_offset_of_U3CbonesU3E5__3_7() { return static_cast<int32_t>(offsetof(U3CSetupBonesU3Ed__81_t62772CFE58B2A384226F4D7C2927B56067511DDC, ___U3CbonesU3E5__3_7)); }
	inline TransformU5BU5D_t4F5A1132877D8BA66ABC0A9A7FADA4E0237A7804* get_U3CbonesU3E5__3_7() const { return ___U3CbonesU3E5__3_7; }
	inline TransformU5BU5D_t4F5A1132877D8BA66ABC0A9A7FADA4E0237A7804** get_address_of_U3CbonesU3E5__3_7() { return &___U3CbonesU3E5__3_7; }
	inline void set_U3CbonesU3E5__3_7(TransformU5BU5D_t4F5A1132877D8BA66ABC0A9A7FADA4E0237A7804* value)
	{
		___U3CbonesU3E5__3_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CbonesU3E5__3_7), (void*)value);
	}

	inline static int32_t get_offset_of_U3CgltfBindPosesU3E5__4_8() { return static_cast<int32_t>(offsetof(U3CSetupBonesU3Ed__81_t62772CFE58B2A384226F4D7C2927B56067511DDC, ___U3CgltfBindPosesU3E5__4_8)); }
	inline Matrix4x4U5BU5D_tE3A13CB78E1B2CBDCD537180E7C6D83E18B0D9F0* get_U3CgltfBindPosesU3E5__4_8() const { return ___U3CgltfBindPosesU3E5__4_8; }
	inline Matrix4x4U5BU5D_tE3A13CB78E1B2CBDCD537180E7C6D83E18B0D9F0** get_address_of_U3CgltfBindPosesU3E5__4_8() { return &___U3CgltfBindPosesU3E5__4_8; }
	inline void set_U3CgltfBindPosesU3E5__4_8(Matrix4x4U5BU5D_tE3A13CB78E1B2CBDCD537180E7C6D83E18B0D9F0* value)
	{
		___U3CgltfBindPosesU3E5__4_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CgltfBindPosesU3E5__4_8), (void*)value);
	}

	inline static int32_t get_offset_of_U3CbindPosesU3E5__5_9() { return static_cast<int32_t>(offsetof(U3CSetupBonesU3Ed__81_t62772CFE58B2A384226F4D7C2927B56067511DDC, ___U3CbindPosesU3E5__5_9)); }
	inline Matrix4x4U5BU5D_t1C64F7A0C34058334A8A95BF165F0027690598C9* get_U3CbindPosesU3E5__5_9() const { return ___U3CbindPosesU3E5__5_9; }
	inline Matrix4x4U5BU5D_t1C64F7A0C34058334A8A95BF165F0027690598C9** get_address_of_U3CbindPosesU3E5__5_9() { return &___U3CbindPosesU3E5__5_9; }
	inline void set_U3CbindPosesU3E5__5_9(Matrix4x4U5BU5D_t1C64F7A0C34058334A8A95BF165F0027690598C9* value)
	{
		___U3CbindPosesU3E5__5_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CbindPosesU3E5__5_9), (void*)value);
	}

	inline static int32_t get_offset_of_U3CiU3E5__6_10() { return static_cast<int32_t>(offsetof(U3CSetupBonesU3Ed__81_t62772CFE58B2A384226F4D7C2927B56067511DDC, ___U3CiU3E5__6_10)); }
	inline int32_t get_U3CiU3E5__6_10() const { return ___U3CiU3E5__6_10; }
	inline int32_t* get_address_of_U3CiU3E5__6_10() { return &___U3CiU3E5__6_10; }
	inline void set_U3CiU3E5__6_10(int32_t value)
	{
		___U3CiU3E5__6_10 = value;
	}

	inline static int32_t get_offset_of_U3CU3Eu__1_11() { return static_cast<int32_t>(offsetof(U3CSetupBonesU3Ed__81_t62772CFE58B2A384226F4D7C2927B56067511DDC, ___U3CU3Eu__1_11)); }
	inline TaskAwaiter_1_tAE6B8B90DDB2F4605D3C8F53F1F449F35790A468  get_U3CU3Eu__1_11() const { return ___U3CU3Eu__1_11; }
	inline TaskAwaiter_1_tAE6B8B90DDB2F4605D3C8F53F1F449F35790A468 * get_address_of_U3CU3Eu__1_11() { return &___U3CU3Eu__1_11; }
	inline void set_U3CU3Eu__1_11(TaskAwaiter_1_tAE6B8B90DDB2F4605D3C8F53F1F449F35790A468  value)
	{
		___U3CU3Eu__1_11 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Eu__1_11))->___m_task_0), (void*)NULL);
	}
};


// UnityGLTF.GLTFSceneImporter_<SetupLoad>d__102
struct  U3CSetupLoadU3Ed__102_tFB8B5441489338282D4CAC773B60B896D00F07EF 
{
public:
	// System.Int32 UnityGLTF.GLTFSceneImporter_<SetupLoad>d__102::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder UnityGLTF.GLTFSceneImporter_<SetupLoad>d__102::<>t__builder
	AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487  ___U3CU3Et__builder_1;
	// UnityGLTF.GLTFSceneImporter UnityGLTF.GLTFSceneImporter_<SetupLoad>d__102::<>4__this
	GLTFSceneImporter_t29A5109798926C47E5B089376F3E467E78EB710E * ___U3CU3E4__this_2;
	// System.Func`1<System.Threading.Tasks.Task> UnityGLTF.GLTFSceneImporter_<SetupLoad>d__102::callback
	Func_1_t864AB9A10EEBC12BC5B32E4C8BD6F0F8E0D2F728 * ___callback_3;
	// System.Runtime.CompilerServices.TaskAwaiter UnityGLTF.GLTFSceneImporter_<SetupLoad>d__102::<>u__1
	TaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F  ___U3CU3Eu__1_4;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CSetupLoadU3Ed__102_tFB8B5441489338282D4CAC773B60B896D00F07EF, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3Et__builder_1() { return static_cast<int32_t>(offsetof(U3CSetupLoadU3Ed__102_tFB8B5441489338282D4CAC773B60B896D00F07EF, ___U3CU3Et__builder_1)); }
	inline AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487  get_U3CU3Et__builder_1() const { return ___U3CU3Et__builder_1; }
	inline AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487 * get_address_of_U3CU3Et__builder_1() { return &___U3CU3Et__builder_1; }
	inline void set_U3CU3Et__builder_1(AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487  value)
	{
		___U3CU3Et__builder_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___U3CU3Et__builder_1))->___m_builder_1))->___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___U3CU3Et__builder_1))->___m_builder_1))->___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3Et__builder_1))->___m_builder_1))->___m_task_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CSetupLoadU3Ed__102_tFB8B5441489338282D4CAC773B60B896D00F07EF, ___U3CU3E4__this_2)); }
	inline GLTFSceneImporter_t29A5109798926C47E5B089376F3E467E78EB710E * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline GLTFSceneImporter_t29A5109798926C47E5B089376F3E467E78EB710E ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(GLTFSceneImporter_t29A5109798926C47E5B089376F3E467E78EB710E * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_callback_3() { return static_cast<int32_t>(offsetof(U3CSetupLoadU3Ed__102_tFB8B5441489338282D4CAC773B60B896D00F07EF, ___callback_3)); }
	inline Func_1_t864AB9A10EEBC12BC5B32E4C8BD6F0F8E0D2F728 * get_callback_3() const { return ___callback_3; }
	inline Func_1_t864AB9A10EEBC12BC5B32E4C8BD6F0F8E0D2F728 ** get_address_of_callback_3() { return &___callback_3; }
	inline void set_callback_3(Func_1_t864AB9A10EEBC12BC5B32E4C8BD6F0F8E0D2F728 * value)
	{
		___callback_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___callback_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3Eu__1_4() { return static_cast<int32_t>(offsetof(U3CSetupLoadU3Ed__102_tFB8B5441489338282D4CAC773B60B896D00F07EF, ___U3CU3Eu__1_4)); }
	inline TaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F  get_U3CU3Eu__1_4() const { return ___U3CU3Eu__1_4; }
	inline TaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F * get_address_of_U3CU3Eu__1_4() { return &___U3CU3Eu__1_4; }
	inline void set_U3CU3Eu__1_4(TaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F  value)
	{
		___U3CU3Eu__1_4 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Eu__1_4))->___m_task_0), (void*)NULL);
	}
};


// UnityGLTF.GLTFSceneImporter_<YieldOnTimeoutAndThrowOnLowMemory>d__97
struct  U3CYieldOnTimeoutAndThrowOnLowMemoryU3Ed__97_t94FCCE7CF181F8FA506AB6B4A977C0A7C9BD8BDB 
{
public:
	// System.Int32 UnityGLTF.GLTFSceneImporter_<YieldOnTimeoutAndThrowOnLowMemory>d__97::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder UnityGLTF.GLTFSceneImporter_<YieldOnTimeoutAndThrowOnLowMemory>d__97::<>t__builder
	AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487  ___U3CU3Et__builder_1;
	// UnityGLTF.GLTFSceneImporter UnityGLTF.GLTFSceneImporter_<YieldOnTimeoutAndThrowOnLowMemory>d__97::<>4__this
	GLTFSceneImporter_t29A5109798926C47E5B089376F3E467E78EB710E * ___U3CU3E4__this_2;
	// System.Runtime.CompilerServices.TaskAwaiter UnityGLTF.GLTFSceneImporter_<YieldOnTimeoutAndThrowOnLowMemory>d__97::<>u__1
	TaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F  ___U3CU3Eu__1_3;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CYieldOnTimeoutAndThrowOnLowMemoryU3Ed__97_t94FCCE7CF181F8FA506AB6B4A977C0A7C9BD8BDB, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3Et__builder_1() { return static_cast<int32_t>(offsetof(U3CYieldOnTimeoutAndThrowOnLowMemoryU3Ed__97_t94FCCE7CF181F8FA506AB6B4A977C0A7C9BD8BDB, ___U3CU3Et__builder_1)); }
	inline AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487  get_U3CU3Et__builder_1() const { return ___U3CU3Et__builder_1; }
	inline AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487 * get_address_of_U3CU3Et__builder_1() { return &___U3CU3Et__builder_1; }
	inline void set_U3CU3Et__builder_1(AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487  value)
	{
		___U3CU3Et__builder_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___U3CU3Et__builder_1))->___m_builder_1))->___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___U3CU3Et__builder_1))->___m_builder_1))->___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3Et__builder_1))->___m_builder_1))->___m_task_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CYieldOnTimeoutAndThrowOnLowMemoryU3Ed__97_t94FCCE7CF181F8FA506AB6B4A977C0A7C9BD8BDB, ___U3CU3E4__this_2)); }
	inline GLTFSceneImporter_t29A5109798926C47E5B089376F3E467E78EB710E * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline GLTFSceneImporter_t29A5109798926C47E5B089376F3E467E78EB710E ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(GLTFSceneImporter_t29A5109798926C47E5B089376F3E467E78EB710E * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3Eu__1_3() { return static_cast<int32_t>(offsetof(U3CYieldOnTimeoutAndThrowOnLowMemoryU3Ed__97_t94FCCE7CF181F8FA506AB6B4A977C0A7C9BD8BDB, ___U3CU3Eu__1_3)); }
	inline TaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F  get_U3CU3Eu__1_3() const { return ___U3CU3Eu__1_3; }
	inline TaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F * get_address_of_U3CU3Eu__1_3() { return &___U3CU3Eu__1_3; }
	inline void set_U3CU3Eu__1_3(TaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F  value)
	{
		___U3CU3Eu__1_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Eu__1_3))->___m_task_0), (void*)NULL);
	}
};


// UnityGLTF.GLTFSceneImporter_<_LoadScene>d__61
struct  U3C_LoadSceneU3Ed__61_t235926E3418670BF165AE82626829C7DF9BCDF57 
{
public:
	// System.Int32 UnityGLTF.GLTFSceneImporter_<_LoadScene>d__61::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder UnityGLTF.GLTFSceneImporter_<_LoadScene>d__61::<>t__builder
	AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487  ___U3CU3Et__builder_1;
	// System.Int32 UnityGLTF.GLTFSceneImporter_<_LoadScene>d__61::sceneIndex
	int32_t ___sceneIndex_2;
	// UnityGLTF.GLTFSceneImporter UnityGLTF.GLTFSceneImporter_<_LoadScene>d__61::<>4__this
	GLTFSceneImporter_t29A5109798926C47E5B089376F3E467E78EB710E * ___U3CU3E4__this_3;
	// System.Boolean UnityGLTF.GLTFSceneImporter_<_LoadScene>d__61::showSceneObj
	bool ___showSceneObj_4;
	// System.Threading.CancellationToken UnityGLTF.GLTFSceneImporter_<_LoadScene>d__61::cancellationToken
	CancellationToken_t9E956952F7F20908F2AE72EDF36D97E6C7DB63AB  ___cancellationToken_5;
	// System.Runtime.CompilerServices.TaskAwaiter UnityGLTF.GLTFSceneImporter_<_LoadScene>d__61::<>u__1
	TaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F  ___U3CU3Eu__1_6;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3C_LoadSceneU3Ed__61_t235926E3418670BF165AE82626829C7DF9BCDF57, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3Et__builder_1() { return static_cast<int32_t>(offsetof(U3C_LoadSceneU3Ed__61_t235926E3418670BF165AE82626829C7DF9BCDF57, ___U3CU3Et__builder_1)); }
	inline AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487  get_U3CU3Et__builder_1() const { return ___U3CU3Et__builder_1; }
	inline AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487 * get_address_of_U3CU3Et__builder_1() { return &___U3CU3Et__builder_1; }
	inline void set_U3CU3Et__builder_1(AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487  value)
	{
		___U3CU3Et__builder_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___U3CU3Et__builder_1))->___m_builder_1))->___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___U3CU3Et__builder_1))->___m_builder_1))->___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3Et__builder_1))->___m_builder_1))->___m_task_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_sceneIndex_2() { return static_cast<int32_t>(offsetof(U3C_LoadSceneU3Ed__61_t235926E3418670BF165AE82626829C7DF9BCDF57, ___sceneIndex_2)); }
	inline int32_t get_sceneIndex_2() const { return ___sceneIndex_2; }
	inline int32_t* get_address_of_sceneIndex_2() { return &___sceneIndex_2; }
	inline void set_sceneIndex_2(int32_t value)
	{
		___sceneIndex_2 = value;
	}

	inline static int32_t get_offset_of_U3CU3E4__this_3() { return static_cast<int32_t>(offsetof(U3C_LoadSceneU3Ed__61_t235926E3418670BF165AE82626829C7DF9BCDF57, ___U3CU3E4__this_3)); }
	inline GLTFSceneImporter_t29A5109798926C47E5B089376F3E467E78EB710E * get_U3CU3E4__this_3() const { return ___U3CU3E4__this_3; }
	inline GLTFSceneImporter_t29A5109798926C47E5B089376F3E467E78EB710E ** get_address_of_U3CU3E4__this_3() { return &___U3CU3E4__this_3; }
	inline void set_U3CU3E4__this_3(GLTFSceneImporter_t29A5109798926C47E5B089376F3E467E78EB710E * value)
	{
		___U3CU3E4__this_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_3), (void*)value);
	}

	inline static int32_t get_offset_of_showSceneObj_4() { return static_cast<int32_t>(offsetof(U3C_LoadSceneU3Ed__61_t235926E3418670BF165AE82626829C7DF9BCDF57, ___showSceneObj_4)); }
	inline bool get_showSceneObj_4() const { return ___showSceneObj_4; }
	inline bool* get_address_of_showSceneObj_4() { return &___showSceneObj_4; }
	inline void set_showSceneObj_4(bool value)
	{
		___showSceneObj_4 = value;
	}

	inline static int32_t get_offset_of_cancellationToken_5() { return static_cast<int32_t>(offsetof(U3C_LoadSceneU3Ed__61_t235926E3418670BF165AE82626829C7DF9BCDF57, ___cancellationToken_5)); }
	inline CancellationToken_t9E956952F7F20908F2AE72EDF36D97E6C7DB63AB  get_cancellationToken_5() const { return ___cancellationToken_5; }
	inline CancellationToken_t9E956952F7F20908F2AE72EDF36D97E6C7DB63AB * get_address_of_cancellationToken_5() { return &___cancellationToken_5; }
	inline void set_cancellationToken_5(CancellationToken_t9E956952F7F20908F2AE72EDF36D97E6C7DB63AB  value)
	{
		___cancellationToken_5 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___cancellationToken_5))->___m_source_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_U3CU3Eu__1_6() { return static_cast<int32_t>(offsetof(U3C_LoadSceneU3Ed__61_t235926E3418670BF165AE82626829C7DF9BCDF57, ___U3CU3Eu__1_6)); }
	inline TaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F  get_U3CU3Eu__1_6() const { return ___U3CU3Eu__1_6; }
	inline TaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F * get_address_of_U3CU3Eu__1_6() { return &___U3CU3Eu__1_6; }
	inline void set_U3CU3Eu__1_6(TaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F  value)
	{
		___U3CU3Eu__1_6 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Eu__1_6))->___m_task_0), (void*)NULL);
	}
};


// UnityGLTF.ImporterFactory
struct  ImporterFactory_tF4C9DDC9F2F0F811B53269CB45BD63B79953921A  : public ScriptableObject_tAB015486CEAB714DA0D5C1BA389B84FB90427734
{
public:

public:
};


// UnityGLTF.MetalRough2StandardMap
struct  MetalRough2StandardMap_tD96C52E5A21D1AEDA6D38D6BF5C1883696E4E6DE  : public StandardMap_t3FEC34B6C31267CFE948D5C63C3DFECC4A1C4806
{
public:
	// UnityEngine.Vector2 UnityGLTF.MetalRough2StandardMap::baseColorOffset
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___baseColorOffset_6;

public:
	inline static int32_t get_offset_of_baseColorOffset_6() { return static_cast<int32_t>(offsetof(MetalRough2StandardMap_tD96C52E5A21D1AEDA6D38D6BF5C1883696E4E6DE, ___baseColorOffset_6)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_baseColorOffset_6() const { return ___baseColorOffset_6; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_baseColorOffset_6() { return &___baseColorOffset_6; }
	inline void set_baseColorOffset_6(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___baseColorOffset_6 = value;
	}
};


// UnityGLTF.SpecGloss2StandardMap
struct  SpecGloss2StandardMap_tDE7C0F9BFC51BA35B3D272A97615586D4DFBF158  : public StandardMap_t3FEC34B6C31267CFE948D5C63C3DFECC4A1C4806
{
public:
	// UnityEngine.Vector2 UnityGLTF.SpecGloss2StandardMap::diffuseOffset
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___diffuseOffset_6;
	// UnityEngine.Vector2 UnityGLTF.SpecGloss2StandardMap::specGlossOffset
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___specGlossOffset_7;

public:
	inline static int32_t get_offset_of_diffuseOffset_6() { return static_cast<int32_t>(offsetof(SpecGloss2StandardMap_tDE7C0F9BFC51BA35B3D272A97615586D4DFBF158, ___diffuseOffset_6)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_diffuseOffset_6() const { return ___diffuseOffset_6; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_diffuseOffset_6() { return &___diffuseOffset_6; }
	inline void set_diffuseOffset_6(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___diffuseOffset_6 = value;
	}

	inline static int32_t get_offset_of_specGlossOffset_7() { return static_cast<int32_t>(offsetof(SpecGloss2StandardMap_tDE7C0F9BFC51BA35B3D272A97615586D4DFBF158, ___specGlossOffset_7)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_specGlossOffset_7() const { return ___specGlossOffset_7; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_specGlossOffset_7() { return &___specGlossOffset_7; }
	inline void set_specGlossOffset_7(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___specGlossOffset_7 = value;
	}
};


// UnityGLTF.ValuesConvertion
struct  ValuesConvertion_t12BE76CED94854B72E7008BA86CF34852FB8F4DC  : public MulticastDelegate_t
{
public:

public:
};


// System.ArgumentNullException
struct  ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD  : public ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1
{
public:

public:
};


// System.IO.FileNotFoundException
struct  FileNotFoundException_t0B3F0AE5C94A781A7E2ABBD786F91C229B703431  : public IOException_t60E052020EDE4D3075F57A1DCC224FF8864354BA
{
public:
	// System.String System.IO.FileNotFoundException::_fileName
	String_t* ____fileName_18;
	// System.String System.IO.FileNotFoundException::_fusionLog
	String_t* ____fusionLog_19;

public:
	inline static int32_t get_offset_of__fileName_18() { return static_cast<int32_t>(offsetof(FileNotFoundException_t0B3F0AE5C94A781A7E2ABBD786F91C229B703431, ____fileName_18)); }
	inline String_t* get__fileName_18() const { return ____fileName_18; }
	inline String_t** get_address_of__fileName_18() { return &____fileName_18; }
	inline void set__fileName_18(String_t* value)
	{
		____fileName_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____fileName_18), (void*)value);
	}

	inline static int32_t get_offset_of__fusionLog_19() { return static_cast<int32_t>(offsetof(FileNotFoundException_t0B3F0AE5C94A781A7E2ABBD786F91C229B703431, ____fusionLog_19)); }
	inline String_t* get__fusionLog_19() const { return ____fusionLog_19; }
	inline String_t** get_address_of__fusionLog_19() { return &____fusionLog_19; }
	inline void set__fusionLog_19(String_t* value)
	{
		____fusionLog_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____fusionLog_19), (void*)value);
	}
};


// System.Threading.Tasks.TaskCanceledException
struct  TaskCanceledException_tB1E5209054F302F814E18BBCACDF6546BAF2EC48  : public OperationCanceledException_tD28B1AE59ACCE4D46333BFE398395B8D75D76A90
{
public:
	// System.Threading.Tasks.Task System.Threading.Tasks.TaskCanceledException::m_canceledTask
	Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * ___m_canceledTask_18;

public:
	inline static int32_t get_offset_of_m_canceledTask_18() { return static_cast<int32_t>(offsetof(TaskCanceledException_tB1E5209054F302F814E18BBCACDF6546BAF2EC48, ___m_canceledTask_18)); }
	inline Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * get_m_canceledTask_18() const { return ___m_canceledTask_18; }
	inline Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 ** get_address_of_m_canceledTask_18() { return &___m_canceledTask_18; }
	inline void set_m_canceledTask_18(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * value)
	{
		___m_canceledTask_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_canceledTask_18), (void*)value);
	}
};


// UnityEngine.MonoBehaviour
struct  MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429  : public Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8
{
public:

public:
};


// UnityEngine.SkinnedMeshRenderer
struct  SkinnedMeshRenderer_tFC8103EE7842F7F8A98BEF0C855D32A9711B7B65  : public Renderer_t0556D67DD582620D1F495627EDE30D03284151F4
{
public:

public:
};


// UnityGLTF.MetalRoughMap
struct  MetalRoughMap_tF4F2F9C07978591A413F3ECB91DE6EA459A27DDC  : public MetalRough2StandardMap_tD96C52E5A21D1AEDA6D38D6BF5C1883696E4E6DE
{
public:
	// UnityEngine.Vector2 UnityGLTF.MetalRoughMap::metalRoughOffset
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___metalRoughOffset_7;

public:
	inline static int32_t get_offset_of_metalRoughOffset_7() { return static_cast<int32_t>(offsetof(MetalRoughMap_tF4F2F9C07978591A413F3ECB91DE6EA459A27DDC, ___metalRoughOffset_7)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_metalRoughOffset_7() const { return ___metalRoughOffset_7; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_metalRoughOffset_7() { return &___metalRoughOffset_7; }
	inline void set_metalRoughOffset_7(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___metalRoughOffset_7 = value;
	}
};


// UnityGLTF.SpecGlossMap
struct  SpecGlossMap_t6C49CAC441F37DFF9D6A99F57A1EE359A82DC110  : public SpecGloss2StandardMap_tDE7C0F9BFC51BA35B3D272A97615586D4DFBF158
{
public:

public:
};


// UnityGLTF.AsyncCoroutineHelper
struct  AsyncCoroutineHelper_t032BCD93473D0EBD9757396C7B539A1475B92757  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// System.Single UnityGLTF.AsyncCoroutineHelper::BudgetPerFrameInSeconds
	float ___BudgetPerFrameInSeconds_4;
	// UnityEngine.WaitForEndOfFrame UnityGLTF.AsyncCoroutineHelper::_waitForEndOfFrame
	WaitForEndOfFrame_t75980FB3F246D6AD36A85CA2BFDF8474E5EEBCCA * ____waitForEndOfFrame_5;
	// System.Single UnityGLTF.AsyncCoroutineHelper::_timeout
	float ____timeout_6;

public:
	inline static int32_t get_offset_of_BudgetPerFrameInSeconds_4() { return static_cast<int32_t>(offsetof(AsyncCoroutineHelper_t032BCD93473D0EBD9757396C7B539A1475B92757, ___BudgetPerFrameInSeconds_4)); }
	inline float get_BudgetPerFrameInSeconds_4() const { return ___BudgetPerFrameInSeconds_4; }
	inline float* get_address_of_BudgetPerFrameInSeconds_4() { return &___BudgetPerFrameInSeconds_4; }
	inline void set_BudgetPerFrameInSeconds_4(float value)
	{
		___BudgetPerFrameInSeconds_4 = value;
	}

	inline static int32_t get_offset_of__waitForEndOfFrame_5() { return static_cast<int32_t>(offsetof(AsyncCoroutineHelper_t032BCD93473D0EBD9757396C7B539A1475B92757, ____waitForEndOfFrame_5)); }
	inline WaitForEndOfFrame_t75980FB3F246D6AD36A85CA2BFDF8474E5EEBCCA * get__waitForEndOfFrame_5() const { return ____waitForEndOfFrame_5; }
	inline WaitForEndOfFrame_t75980FB3F246D6AD36A85CA2BFDF8474E5EEBCCA ** get_address_of__waitForEndOfFrame_5() { return &____waitForEndOfFrame_5; }
	inline void set__waitForEndOfFrame_5(WaitForEndOfFrame_t75980FB3F246D6AD36A85CA2BFDF8474E5EEBCCA * value)
	{
		____waitForEndOfFrame_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____waitForEndOfFrame_5), (void*)value);
	}

	inline static int32_t get_offset_of__timeout_6() { return static_cast<int32_t>(offsetof(AsyncCoroutineHelper_t032BCD93473D0EBD9757396C7B539A1475B92757, ____timeout_6)); }
	inline float get__timeout_6() const { return ____timeout_6; }
	inline float* get_address_of__timeout_6() { return &____timeout_6; }
	inline void set__timeout_6(float value)
	{
		____timeout_6 = value;
	}
};


// UnityGLTF.InstantiatedGLTFObject
struct  InstantiatedGLTFObject_t03E5C1C7AE61E8CF56BC66C274C240C65511816B  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// UnityGLTF.Cache.RefCountedCacheData UnityGLTF.InstantiatedGLTFObject::cachedData
	RefCountedCacheData_t3E7A4E802B00500764E6515507894E680D89D572 * ___cachedData_4;

public:
	inline static int32_t get_offset_of_cachedData_4() { return static_cast<int32_t>(offsetof(InstantiatedGLTFObject_t03E5C1C7AE61E8CF56BC66C274C240C65511816B, ___cachedData_4)); }
	inline RefCountedCacheData_t3E7A4E802B00500764E6515507894E680D89D572 * get_cachedData_4() const { return ___cachedData_4; }
	inline RefCountedCacheData_t3E7A4E802B00500764E6515507894E680D89D572 ** get_address_of_cachedData_4() { return &___cachedData_4; }
	inline void set_cachedData_4(RefCountedCacheData_t3E7A4E802B00500764E6515507894E680D89D572 * value)
	{
		___cachedData_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___cachedData_4), (void*)value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// UnityGLTF.Cache.MaterialCacheData[]
struct MaterialCacheDataU5BU5D_t9A21B420B621CCFCE6242A807F055E5E17C12B27  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) MaterialCacheData_t69ADD85645108393A5E19F1C642F81F977EA57CE * m_Items[1];

public:
	inline MaterialCacheData_t69ADD85645108393A5E19F1C642F81F977EA57CE * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline MaterialCacheData_t69ADD85645108393A5E19F1C642F81F977EA57CE ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, MaterialCacheData_t69ADD85645108393A5E19F1C642F81F977EA57CE * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline MaterialCacheData_t69ADD85645108393A5E19F1C642F81F977EA57CE * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline MaterialCacheData_t69ADD85645108393A5E19F1C642F81F977EA57CE ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, MaterialCacheData_t69ADD85645108393A5E19F1C642F81F977EA57CE * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityGLTF.Cache.MeshCacheData[]
struct MeshCacheDataU5BU5D_t172934B760B5F101344848AB49BADBC9CAC4E59C  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) MeshCacheData_tDC17655604D5D9B4FF0FFB71FEAB50212603F664 * m_Items[1];

public:
	inline MeshCacheData_tDC17655604D5D9B4FF0FFB71FEAB50212603F664 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline MeshCacheData_tDC17655604D5D9B4FF0FFB71FEAB50212603F664 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, MeshCacheData_tDC17655604D5D9B4FF0FFB71FEAB50212603F664 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline MeshCacheData_tDC17655604D5D9B4FF0FFB71FEAB50212603F664 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline MeshCacheData_tDC17655604D5D9B4FF0FFB71FEAB50212603F664 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, MeshCacheData_tDC17655604D5D9B4FF0FFB71FEAB50212603F664 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.Transform[]
struct TransformU5BU5D_t4F5A1132877D8BA66ABC0A9A7FADA4E0237A7804  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * m_Items[1];

public:
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// GLTF.Math.Matrix4x4[]
struct Matrix4x4U5BU5D_tE3A13CB78E1B2CBDCD537180E7C6D83E18B0D9F0  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Matrix4x4_t43BAF443FBFCE8DA422507220B68CDD4CA7F19D9 * m_Items[1];

public:
	inline Matrix4x4_t43BAF443FBFCE8DA422507220B68CDD4CA7F19D9 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Matrix4x4_t43BAF443FBFCE8DA422507220B68CDD4CA7F19D9 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Matrix4x4_t43BAF443FBFCE8DA422507220B68CDD4CA7F19D9 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Matrix4x4_t43BAF443FBFCE8DA422507220B68CDD4CA7F19D9 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Matrix4x4_t43BAF443FBFCE8DA422507220B68CDD4CA7F19D9 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Matrix4x4_t43BAF443FBFCE8DA422507220B68CDD4CA7F19D9 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityGLTF.Cache.BufferCacheData[]
struct BufferCacheDataU5BU5D_t090C5C4874ADA45FFD0C6E6B36010DD196C0975E  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) BufferCacheData_t94725215DAEBBBFF691A97822F8744A8038F6743 * m_Items[1];

public:
	inline BufferCacheData_t94725215DAEBBBFF691A97822F8744A8038F6743 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline BufferCacheData_t94725215DAEBBBFF691A97822F8744A8038F6743 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, BufferCacheData_t94725215DAEBBBFF691A97822F8744A8038F6743 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline BufferCacheData_t94725215DAEBBBFF691A97822F8744A8038F6743 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline BufferCacheData_t94725215DAEBBBFF691A97822F8744A8038F6743 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, BufferCacheData_t94725215DAEBBBFF691A97822F8744A8038F6743 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.Matrix4x4[]
struct Matrix4x4U5BU5D_t1C64F7A0C34058334A8A95BF165F0027690598C9  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  m_Items[1];

public:
	inline Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  value)
	{
		m_Items[index] = value;
	}
};
// System.Security.Cryptography.X509Certificates.X509ChainStatus[]
struct X509ChainStatusU5BU5D_tA8CCC33D50C4BCF6F657063CD1DACCC3B9A7BFBB  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) X509ChainStatus_t9E05BD8700EA6158AC82F71CBE53AD20F6B99B0C  m_Items[1];

public:
	inline X509ChainStatus_t9E05BD8700EA6158AC82F71CBE53AD20F6B99B0C  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline X509ChainStatus_t9E05BD8700EA6158AC82F71CBE53AD20F6B99B0C * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, X509ChainStatus_t9E05BD8700EA6158AC82F71CBE53AD20F6B99B0C  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___info_1), (void*)NULL);
	}
	inline X509ChainStatus_t9E05BD8700EA6158AC82F71CBE53AD20F6B99B0C  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline X509ChainStatus_t9E05BD8700EA6158AC82F71CBE53AD20F6B99B0C * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, X509ChainStatus_t9E05BD8700EA6158AC82F71CBE53AD20F6B99B0C  value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___info_1), (void*)NULL);
	}
};
// System.Single[]
struct SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) float m_Items[1];

public:
	inline float GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline float* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, float value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline float GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline float* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, float value)
	{
		m_Items[index] = value;
	}
};
// System.Delegate[]
struct DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Delegate_t * m_Items[1];

public:
	inline Delegate_t * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Delegate_t ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Delegate_t * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Delegate_t * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Delegate_t ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Delegate_t * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Object[]
struct ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) RuntimeObject * m_Items[1];

public:
	inline RuntimeObject * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// System.Void System.Func`1<System.Boolean>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_1__ctor_m479BA9DCBE3F496111BD05CC90CB1044C5FFD552_gshared (Func_1_t4ABD6DAD480574F152452DD6B9C9A55F4F6655F1 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Runtime.CompilerServices.TaskAwaiter`1<!0> System.Threading.Tasks.Task`1<System.Object>::GetAwaiter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TaskAwaiter_1_t8CDB78D2A4D48E80C35A8FF6FC04A82B9FC35977  Task_1_GetAwaiter_m9C50610C6F05C1DA9BFA67201CB570F1DE040817_gshared (Task_1_tA56001ED5270173CA1432EDFCD84EABB1024BC09 * __this, const RuntimeMethod* method);
// System.Boolean System.Runtime.CompilerServices.TaskAwaiter`1<System.Object>::get_IsCompleted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TaskAwaiter_1_get_IsCompleted_mBF435C7EFD03FCF7810FC08EEDC5945F80FF88F9_gshared (TaskAwaiter_1_t8CDB78D2A4D48E80C35A8FF6FC04A82B9FC35977 * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<System.Object>,UnityGLTF.GLTFSceneImporter/<LoadJson>d__59>(!!0&,!!1&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t8CDB78D2A4D48E80C35A8FF6FC04A82B9FC35977_TisU3CLoadJsonU3Ed__59_tCCA3845E8F7AC6B17CFC8E14B3623869D204520D_mCCDB51A47F34D9438FC94666667168D74A883764_gshared (AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487 * __this, TaskAwaiter_1_t8CDB78D2A4D48E80C35A8FF6FC04A82B9FC35977 * ___awaiter0, U3CLoadJsonU3Ed__59_tCCA3845E8F7AC6B17CFC8E14B3623869D204520D * ___stateMachine1, const RuntimeMethod* method);
// !0 System.Runtime.CompilerServices.TaskAwaiter`1<System.Object>::GetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * TaskAwaiter_1_GetResult_m9E148849CD4747E1BDD831E4FB2D7ECFA13C11C8_gshared (TaskAwaiter_1_t8CDB78D2A4D48E80C35A8FF6FC04A82B9FC35977 * __this, const RuntimeMethod* method);
// System.Void System.Func`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_1__ctor_mE02699FC76D830943069F8FC19D16C3B72A98A1F_gshared (Func_1_t59BE545225A69AFD7B2056D169D0083051F6D386 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter,UnityGLTF.GLTFSceneImporter/<LoadMaterialAsync>d__52>(!!0&,!!1&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F_TisU3CLoadMaterialAsyncU3Ed__52_t755573D411A3D57BC63E16A616ED2F064C971F96_m17EEA57202DE881D7F338E07B2EAF05D1D8EBF90_gshared (AsyncTaskMethodBuilder_1_t2A9513A084F4B19851B91EF1F22BB57776D35663 * __this, TaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F * ___awaiter0, U3CLoadMaterialAsyncU3Ed__52_t755573D411A3D57BC63E16A616ED2F064C971F96 * ___stateMachine1, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::SetException(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_SetException_m4C0B5462ECCB520FACA3C90B353DF596DAAF586D_gshared (AsyncTaskMethodBuilder_1_t2A9513A084F4B19851B91EF1F22BB57776D35663 * __this, Exception_t * ___exception0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::SetResult(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_SetResult_mD7DA7A17DC0610B11A0AAA364C3CA51FEC1271DB_gshared (AsyncTaskMethodBuilder_1_t2A9513A084F4B19851B91EF1F22BB57776D35663 * __this, RuntimeObject * ___result0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_SetStateMachine_m5CC21A02320CF3D2DD7894A31123DFD82A428E4C_gshared (AsyncTaskMethodBuilder_1_t2A9513A084F4B19851B91EF1F22BB57776D35663 * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter,UnityGLTF.GLTFSceneImporter/<LoadMeshAsync>d__53>(!!0&,!!1&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F_TisU3CLoadMeshAsyncU3Ed__53_tCB90C821E003B0152A4AAC3CB54BD84D61B8823D_m1ACBB45951DAF88850FF55F43D9410A88AF38056_gshared (AsyncTaskMethodBuilder_1_t2A9513A084F4B19851B91EF1F22BB57776D35663 * __this, TaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F * ___awaiter0, U3CLoadMeshAsyncU3Ed__53_tCB90C821E003B0152A4AAC3CB54BD84D61B8823D * ___stateMachine1, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter,UnityGLTF.GLTFSceneImporter/<LoadSceneAsync>d__49>(!!0&,!!1&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F_TisU3CLoadSceneAsyncU3Ed__49_t1B6A25CAC879F95D954154652A4EB3422B957F5B_mF9307DBAD6E0FC8633BFD9538A5F6C583D7CEB4D_gshared (AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487 * __this, TaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F * ___awaiter0, U3CLoadSceneAsyncU3Ed__49_t1B6A25CAC879F95D954154652A4EB3422B957F5B * ___stateMachine1, const RuntimeMethod* method);
// System.Void System.Action`2<System.Object,System.Object>::Invoke(!0,!1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_2_Invoke_m1738FFAE74BE5E599FD42520FA2BEF69D1AC4709_gshared (Action_2_t0DB6FD6F515527EAB552B690A291778C6F00D48C * __this, RuntimeObject * ___arg10, RuntimeObject * ___arg21, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter,UnityGLTF.GLTFSceneImporter/<LoadTextureAsync>d__90>(!!0&,!!1&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F_TisU3CLoadTextureAsyncU3Ed__90_t89527B90B205393BD5B0E5F5DFB152719A50FBEB_mADB813CEC003321849DF29ED9ECD06E9E7176EEF_gshared (AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487 * __this, TaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F * ___awaiter0, U3CLoadTextureAsyncU3Ed__90_t89527B90B205393BD5B0E5F5DFB152719A50FBEB * ___stateMachine1, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m507C9149FF7F83AAC72C29091E745D557DA47D22_gshared_inline (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR RuntimeObject * List_1_get_Item_mFDB8AD680C600072736579BBF5F38F7416396588_gshared_inline (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, int32_t ___index0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<System.Object>,UnityGLTF.GLTFSceneImporter/<SetupBones>d__81>(!!0&,!!1&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t8CDB78D2A4D48E80C35A8FF6FC04A82B9FC35977_TisU3CSetupBonesU3Ed__81_t62772CFE58B2A384226F4D7C2927B56067511DDC_m451304E87A5F13FD097EE7D8420E85477F1FDA80_gshared (AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487 * __this, TaskAwaiter_1_t8CDB78D2A4D48E80C35A8FF6FC04A82B9FC35977 * ___awaiter0, U3CSetupBonesU3Ed__81_t62772CFE58B2A384226F4D7C2927B56067511DDC * ___stateMachine1, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter,UnityGLTF.GLTFSceneImporter/<SetupLoad>d__102>(!!0&,!!1&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F_TisU3CSetupLoadU3Ed__102_tFB8B5441489338282D4CAC773B60B896D00F07EF_m328953A61919506A8A2A0C6BF7DC3FC37F74702C_gshared (AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487 * __this, TaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F * ___awaiter0, U3CSetupLoadU3Ed__102_tFB8B5441489338282D4CAC773B60B896D00F07EF * ___stateMachine1, const RuntimeMethod* method);
// !0 System.Func`1<System.Object>::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Func_1_Invoke_mBF530DABEB784E3EE650A4D493CF11300AA9E213_gshared (Func_1_t59BE545225A69AFD7B2056D169D0083051F6D386 * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter,UnityGLTF.GLTFSceneImporter/<YieldOnTimeoutAndThrowOnLowMemory>d__97>(!!0&,!!1&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F_TisU3CYieldOnTimeoutAndThrowOnLowMemoryU3Ed__97_t94FCCE7CF181F8FA506AB6B4A977C0A7C9BD8BDB_mD2DC8FE44409674EC910F02670E96DBA5B78F571_gshared (AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487 * __this, TaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F * ___awaiter0, U3CYieldOnTimeoutAndThrowOnLowMemoryU3Ed__97_t94FCCE7CF181F8FA506AB6B4A977C0A7C9BD8BDB * ___stateMachine1, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter,UnityGLTF.GLTFSceneImporter/<_LoadScene>d__61>(!!0&,!!1&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F_TisU3C_LoadSceneU3Ed__61_t235926E3418670BF165AE82626829C7DF9BCDF57_m804E37614DF66F6F82376961253D71CF9C2CE30F_gshared (AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487 * __this, TaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F * ___awaiter0, U3C_LoadSceneU3Ed__61_t235926E3418670BF165AE82626829C7DF9BCDF57 * ___stateMachine1, const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<System.Object>(!!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Object_Instantiate_TisRuntimeObject_m4566F033303F52A6D430A06E5FA2D29E2A8D6ED3_gshared (RuntimeObject * ___original0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * GameObject_GetComponent_TisRuntimeObject_mE03C66715289D7957CA068A675826B7EE0887BE3_gshared (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method);
// System.Threading.Tasks.Task`1<!!0> System.Threading.Tasks.Task::Run<System.Object>(System.Func`1<!!0>)
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR Task_1_tA56001ED5270173CA1432EDFCD84EABB1024BC09 * Task_Run_TisRuntimeObject_mCF998C68623C833934353D12C469C935C60E5948_gshared (Func_1_t59BE545225A69AFD7B2056D169D0083051F6D386 * ___function0, const RuntimeMethod* method);
// System.Threading.Tasks.Task`1<!!0> System.Threading.Tasks.Task::FromResult<System.Object>(!!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_tA56001ED5270173CA1432EDFCD84EABB1024BC09 * Task_FromResult_TisRuntimeObject_m8DBE4A25AA37C4CCED0205CA5FF6319D8BA1C9EB_gshared (RuntimeObject * ___result0, const RuntimeMethod* method);
// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<!0> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::Create()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AsyncTaskMethodBuilder_1_t2A9513A084F4B19851B91EF1F22BB57776D35663  AsyncTaskMethodBuilder_1_Create_mC7806A5C115ED2239A5073313AA3564D8244156E_gshared (const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::Start<UnityGLTF.Loader.WebRequestLoader/<LoadStreamAsync>d__3>(!!0&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_Start_TisU3CLoadStreamAsyncU3Ed__3_t50DFA3B38506B50EA0F0E43D41F7D967B4E80BC1_m5E4AA5C0DE234C77860D33BFB6A1166867BE30AD_gshared (AsyncTaskMethodBuilder_1_t2A9513A084F4B19851B91EF1F22BB57776D35663 * __this, U3CLoadStreamAsyncU3Ed__3_t50DFA3B38506B50EA0F0E43D41F7D967B4E80BC1 * ___stateMachine0, const RuntimeMethod* method);
// System.Threading.Tasks.Task`1<!0> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::get_Task()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_tA56001ED5270173CA1432EDFCD84EABB1024BC09 * AsyncTaskMethodBuilder_1_get_Task_m19C5664D70C4FC799BEFB8D0FC98E687F97059FA_gshared (AsyncTaskMethodBuilder_1_t2A9513A084F4B19851B91EF1F22BB57776D35663 * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<System.Object>,UnityGLTF.Loader.WebRequestLoader/<LoadStreamAsync>d__3>(!!0&,!!1&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t8CDB78D2A4D48E80C35A8FF6FC04A82B9FC35977_TisU3CLoadStreamAsyncU3Ed__3_t50DFA3B38506B50EA0F0E43D41F7D967B4E80BC1_m34E8492AEE7D0D3B922889A25496B7DD042DC455_gshared (AsyncTaskMethodBuilder_1_t2A9513A084F4B19851B91EF1F22BB57776D35663 * __this, TaskAwaiter_1_t8CDB78D2A4D48E80C35A8FF6FC04A82B9FC35977 * ___awaiter0, U3CLoadStreamAsyncU3Ed__3_t50DFA3B38506B50EA0F0E43D41F7D967B4E80BC1 * ___stateMachine1, const RuntimeMethod* method);
// System.Boolean System.Nullable`1<System.Int64>::get_HasValue()
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_mF38F300C188F47AC0F03367107EC46D3BAF7DA3E_gshared_inline (Nullable_1_t802480A692F4F0D29F2185320296572054FB8C0B * __this, const RuntimeMethod* method);
// !0 System.Nullable`1<System.Int64>::GetValueOrDefault()
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR int64_t Nullable_1_GetValueOrDefault_m63142B2DD02998F10B0CC4706DFE488F860763C2_gshared_inline (Nullable_1_t802480A692F4F0D29F2185320296572054FB8C0B * __this, const RuntimeMethod* method);
// System.Void System.Nullable`1<System.Int32>::.ctor(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Nullable_1__ctor_m11F9C228CFDF836DDFCD7880C09CB4098AB9D7F2_gshared (Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Boolean System.Nullable`1<System.Int32>::get_HasValue()
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_mB664E2C41CADA8413EF8842E6601B8C696A7CE15_gshared_inline (Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB * __this, const RuntimeMethod* method);
// !0 System.Nullable`1<System.Int32>::GetValueOrDefault()
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR int32_t Nullable_1_GetValueOrDefault_mE89BB8F302DF31EE202251F4746859285860B6B6_gshared_inline (Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter,UnityGLTF.Loader.WebRequestLoader/<LoadStreamAsync>d__3>(!!0&,!!1&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F_TisU3CLoadStreamAsyncU3Ed__3_t50DFA3B38506B50EA0F0E43D41F7D967B4E80BC1_m3FC9CE278F816E0AFA7418C5652142974BF33284_gshared (AsyncTaskMethodBuilder_1_t2A9513A084F4B19851B91EF1F22BB57776D35663 * __this, TaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F * ___awaiter0, U3CLoadStreamAsyncU3Ed__3_t50DFA3B38506B50EA0F0E43D41F7D967B4E80BC1 * ___stateMachine1, const RuntimeMethod* method);

// System.Void UnityGLTF.GLTFSceneImporter/<>c__DisplayClass59_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass59_0__ctor_m036EE3D0793899B55D27C55B6DB8894F1733B9FC (U3CU3Ec__DisplayClass59_0_t52561C113FB61DE90816C347C4AAD7789417775A * __this, const RuntimeMethod* method);
// System.Boolean UnityGLTF.GLTFSceneImporter::get_IsMultithreaded()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GLTFSceneImporter_get_IsMultithreaded_mB8CA39C18CDD5EAE4DF23693A04711F06A26509A (GLTFSceneImporter_t29A5109798926C47E5B089376F3E467E78EB710E * __this, const RuntimeMethod* method);
// System.Void UnityGLTF.GLTFSceneImporter/<>c__DisplayClass59_1::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass59_1__ctor_m3A921C5612D5A3829788ADF4A4D5D4B542A0226D (U3CU3Ec__DisplayClass59_1_t90F861F46C374BE511649433683ED6D305917F53 * __this, const RuntimeMethod* method);
// System.Void System.Threading.ThreadStart::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThreadStart__ctor_m692348FEAEBAF381D62984EE95B217CC024A77D5 (ThreadStart_t09FFA4371E4B2A713F212B157CC9B8B61983B5BF * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void System.Threading.Thread::.ctor(System.Threading.ThreadStart)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Thread__ctor_m36A33B990160C4499E991D288341CA325AE66DDD (Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7 * __this, ThreadStart_t09FFA4371E4B2A713F212B157CC9B8B61983B5BF * ___start0, const RuntimeMethod* method);
// System.Void System.Threading.Thread::set_Priority(System.Threading.ThreadPriority)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Thread_set_Priority_m151C92263BC72BE6910D49C7E3DF48BFBAB09F57 (Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void System.Threading.Thread::Start()
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void Thread_Start_mE2AC4744AFD147FDC84E8D9317B4E3AB890BC2D6 (Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7 * __this, const RuntimeMethod* method);
// System.Void System.Func`1<System.Boolean>::.ctor(System.Object,System.IntPtr)
inline void Func_1__ctor_m479BA9DCBE3F496111BD05CC90CB1044C5FFD552 (Func_1_t4ABD6DAD480574F152452DD6B9C9A55F4F6655F1 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_1_t4ABD6DAD480574F152452DD6B9C9A55F4F6655F1 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Func_1__ctor_m479BA9DCBE3F496111BD05CC90CB1044C5FFD552_gshared)(__this, ___object0, ___method1, method);
}
// System.Void UnityEngine.WaitUntil::.ctor(System.Func`1<System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitUntil__ctor_mC1A43A512B185C55FBE858F741BEA6D4417105C1 (WaitUntil_t012561515C0E1D3DEA19DB3A05444B020C68E13F * __this, Func_1_t4ABD6DAD480574F152452DD6B9C9A55F4F6655F1 * ___predicate0, const RuntimeMethod* method);
// System.Collections.IEnumerator UnityGLTF.GLTFSceneImporter::WaitUntilEnum(UnityEngine.WaitUntil)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GLTFSceneImporter_WaitUntilEnum_mDCCAA73CEE88BF0BDDCA45B123DB4BCC53B53C86 (GLTFSceneImporter_t29A5109798926C47E5B089376F3E467E78EB710E * __this, WaitUntil_t012561515C0E1D3DEA19DB3A05444B020C68E13F * ___waitUntil0, const RuntimeMethod* method);
// System.Void UnityGLTF.GLTFSceneImporter::RunCoroutineSync(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GLTFSceneImporter_RunCoroutineSync_m45079B735ACA15FD3026EA5992B78BEC1E0E33E4 (RuntimeObject* ___streamEnum0, const RuntimeMethod* method);
// System.Runtime.CompilerServices.TaskAwaiter`1<!0> System.Threading.Tasks.Task`1<System.IO.Stream>::GetAwaiter()
inline TaskAwaiter_1_tE58F4C544BB434328CC2FB19E47D3E1A9599942C  Task_1_GetAwaiter_m358260447F895E2AF6EBE2A3D9716FB8F9210CE2 (Task_1_tAA7557E5A6A8B2C89E44907CB5B0502A618E9D01 * __this, const RuntimeMethod* method)
{
	return ((  TaskAwaiter_1_tE58F4C544BB434328CC2FB19E47D3E1A9599942C  (*) (Task_1_tAA7557E5A6A8B2C89E44907CB5B0502A618E9D01 *, const RuntimeMethod*))Task_1_GetAwaiter_m9C50610C6F05C1DA9BFA67201CB570F1DE040817_gshared)(__this, method);
}
// System.Boolean System.Runtime.CompilerServices.TaskAwaiter`1<System.IO.Stream>::get_IsCompleted()
inline bool TaskAwaiter_1_get_IsCompleted_m4C040B116179C4D7F75CC5D58D88EEBDFCE065D9 (TaskAwaiter_1_tE58F4C544BB434328CC2FB19E47D3E1A9599942C * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (TaskAwaiter_1_tE58F4C544BB434328CC2FB19E47D3E1A9599942C *, const RuntimeMethod*))TaskAwaiter_1_get_IsCompleted_mBF435C7EFD03FCF7810FC08EEDC5945F80FF88F9_gshared)(__this, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<System.IO.Stream>,UnityGLTF.GLTFSceneImporter/<LoadJson>d__59>(!!0&,!!1&)
inline void AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_tE58F4C544BB434328CC2FB19E47D3E1A9599942C_TisU3CLoadJsonU3Ed__59_tCCA3845E8F7AC6B17CFC8E14B3623869D204520D_m86326E8BB99292A8220D367A0FCAEB206E0D6519 (AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487 * __this, TaskAwaiter_1_tE58F4C544BB434328CC2FB19E47D3E1A9599942C * ___awaiter0, U3CLoadJsonU3Ed__59_tCCA3845E8F7AC6B17CFC8E14B3623869D204520D * ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487 *, TaskAwaiter_1_tE58F4C544BB434328CC2FB19E47D3E1A9599942C *, U3CLoadJsonU3Ed__59_tCCA3845E8F7AC6B17CFC8E14B3623869D204520D *, const RuntimeMethod*))AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t8CDB78D2A4D48E80C35A8FF6FC04A82B9FC35977_TisU3CLoadJsonU3Ed__59_tCCA3845E8F7AC6B17CFC8E14B3623869D204520D_mCCDB51A47F34D9438FC94666667168D74A883764_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// !0 System.Runtime.CompilerServices.TaskAwaiter`1<System.IO.Stream>::GetResult()
inline Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * TaskAwaiter_1_GetResult_mE8CC8E02ED729F42AAE54D4D195193A233E98677 (TaskAwaiter_1_tE58F4C544BB434328CC2FB19E47D3E1A9599942C * __this, const RuntimeMethod* method)
{
	return ((  Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * (*) (TaskAwaiter_1_tE58F4C544BB434328CC2FB19E47D3E1A9599942C *, const RuntimeMethod*))TaskAwaiter_1_GetResult_m9E148849CD4747E1BDD831E4FB2D7ECFA13C11C8_gshared)(__this, method);
}
// System.Void UnityGLTF.GLTFSceneImporter/<>c__DisplayClass59_2::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass59_2__ctor_mBC51B0AACC477457ED21A35EAD8156D7B7B7F391 (U3CU3Ec__DisplayClass59_2_t38C2586B97A5A0799CF34EFCC7F95D39B8CC89E2 * __this, const RuntimeMethod* method);
// System.Void UnityGLTF.GLTFLoadException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GLTFLoadException__ctor_m43DE4A4E693E77E6A56895E31BBA605B4B00324C (GLTFLoadException_tE78F0B883637138D8584E658C49315FE15B23B76 * __this, String_t* ___message0, const RuntimeMethod* method);
// System.Void GLTF.GLTFParser::ParseJson(System.IO.Stream,GLTF.Schema.GLTFRoot&,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GLTFParser_ParseJson_m6AC650175439767ADD863203174136AE29CBE17B (Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * ___stream0, GLTFRoot_t3CDB3EBE42E8A0E06DD58B35BAD5D98EF44F3A6B ** ___gltfRoot1, int64_t ___startPosition2, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::SetException(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_SetException_m370C484922A63A6EF96E241D1370B8814F1F2D6B (AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487 * __this, Exception_t * ___exception0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::SetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_SetResult_m151016FB698F3BB34A73BAE693A97513A7E4C838 (AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487 * __this, const RuntimeMethod* method);
// System.Void UnityGLTF.GLTFSceneImporter/<LoadJson>d__59::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLoadJsonU3Ed__59_MoveNext_mBF7A396958F0F55A822BDC3D82B17A4CFF015A18 (U3CLoadJsonU3Ed__59_tCCA3845E8F7AC6B17CFC8E14B3623869D204520D * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_SetStateMachine_mB5DD68F7C49EA6D452AEBA02B1B98AED898C3C25 (AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487 * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method);
// System.Void UnityGLTF.GLTFSceneImporter/<LoadJson>d__59::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLoadJsonU3Ed__59_SetStateMachine_m4CECDBECD28C25A2607D87B9C96C92989269811E (U3CLoadJsonU3Ed__59_tCCA3845E8F7AC6B17CFC8E14B3623869D204520D * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method);
// System.Void UnityGLTF.GLTFSceneImporter/<>c__DisplayClass52_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass52_0__ctor_mB59EC4307334A296416D8C01BC389EE99E5BEC13 (U3CU3Ec__DisplayClass52_0_t76D5C75ED384CEF8461B4D071C42B3931697D57F * __this, const RuntimeMethod* method);
// System.Void System.Func`1<System.Threading.Tasks.Task>::.ctor(System.Object,System.IntPtr)
inline void Func_1__ctor_mB6C6C2284F3D9BA4C8910EF439C0F00BA9164FBE (Func_1_t864AB9A10EEBC12BC5B32E4C8BD6F0F8E0D2F728 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_1_t864AB9A10EEBC12BC5B32E4C8BD6F0F8E0D2F728 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Func_1__ctor_mE02699FC76D830943069F8FC19D16C3B72A98A1F_gshared)(__this, ___object0, ___method1, method);
}
// System.Threading.Tasks.Task UnityGLTF.GLTFSceneImporter::SetupLoad(System.Func`1<System.Threading.Tasks.Task>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * GLTFSceneImporter_SetupLoad_m572F73523267B6FAE3DD1FE33B14686102B58F3D (GLTFSceneImporter_t29A5109798926C47E5B089376F3E467E78EB710E * __this, Func_1_t864AB9A10EEBC12BC5B32E4C8BD6F0F8E0D2F728 * ___callback0, const RuntimeMethod* method);
// System.Runtime.CompilerServices.TaskAwaiter System.Threading.Tasks.Task::GetAwaiter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F  Task_GetAwaiter_m73027D5E4C16E961C658B83526BED8E32FD2AC6C (Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * __this, const RuntimeMethod* method);
// System.Boolean System.Runtime.CompilerServices.TaskAwaiter::get_IsCompleted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TaskAwaiter_get_IsCompleted_m5A2B6FEA0ED3B01B5E88DBF2D8BC4A45652ABD87 (TaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<UnityEngine.Material>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter,UnityGLTF.GLTFSceneImporter/<LoadMaterialAsync>d__52>(!!0&,!!1&)
inline void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F_TisU3CLoadMaterialAsyncU3Ed__52_t755573D411A3D57BC63E16A616ED2F064C971F96_mDBD9EF90DD6DCD58FFCD18172BC7188023D91FD8 (AsyncTaskMethodBuilder_1_tC7219A08BD3DD7AA457D88CB3FC2B69ABBED2A73 * __this, TaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F * ___awaiter0, U3CLoadMaterialAsyncU3Ed__52_t755573D411A3D57BC63E16A616ED2F064C971F96 * ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_tC7219A08BD3DD7AA457D88CB3FC2B69ABBED2A73 *, TaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F *, U3CLoadMaterialAsyncU3Ed__52_t755573D411A3D57BC63E16A616ED2F064C971F96 *, const RuntimeMethod*))AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F_TisU3CLoadMaterialAsyncU3Ed__52_t755573D411A3D57BC63E16A616ED2F064C971F96_m17EEA57202DE881D7F338E07B2EAF05D1D8EBF90_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// System.Void System.Runtime.CompilerServices.TaskAwaiter::GetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TaskAwaiter_GetResult_m89868C01592AC2B06CE1FD42D9B9C187C6FD928A (TaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F * __this, const RuntimeMethod* method);
// UnityGLTF.Cache.MaterialCacheData[] UnityGLTF.Cache.AssetCache::get_MaterialCache()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR MaterialCacheDataU5BU5D_t9A21B420B621CCFCE6242A807F055E5E17C12B27* AssetCache_get_MaterialCache_mA42C6FC4CD177BE95466FAF22EA7C478DF9003CA_inline (AssetCache_tE060C78C9F54F8BF6F50E904460FA53958B59D91 * __this, const RuntimeMethod* method);
// UnityEngine.Material UnityGLTF.Cache.MaterialCacheData::get_UnityMaterialWithVertexColor()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * MaterialCacheData_get_UnityMaterialWithVertexColor_mE5EC415DA4ACACC49E414AF4A454CE3C1F71C1C4_inline (MaterialCacheData_t69ADD85645108393A5E19F1C642F81F977EA57CE * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<UnityEngine.Material>::SetException(System.Exception)
inline void AsyncTaskMethodBuilder_1_SetException_mC1800976D5170A9941CAD5BFBBD9168F2589174E (AsyncTaskMethodBuilder_1_tC7219A08BD3DD7AA457D88CB3FC2B69ABBED2A73 * __this, Exception_t * ___exception0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_tC7219A08BD3DD7AA457D88CB3FC2B69ABBED2A73 *, Exception_t *, const RuntimeMethod*))AsyncTaskMethodBuilder_1_SetException_m4C0B5462ECCB520FACA3C90B353DF596DAAF586D_gshared)(__this, ___exception0, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<UnityEngine.Material>::SetResult(!0)
inline void AsyncTaskMethodBuilder_1_SetResult_m3BC9ECED439531875525CF0D8BADDCF1F29C0C03 (AsyncTaskMethodBuilder_1_tC7219A08BD3DD7AA457D88CB3FC2B69ABBED2A73 * __this, Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___result0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_tC7219A08BD3DD7AA457D88CB3FC2B69ABBED2A73 *, Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 *, const RuntimeMethod*))AsyncTaskMethodBuilder_1_SetResult_mD7DA7A17DC0610B11A0AAA364C3CA51FEC1271DB_gshared)(__this, ___result0, method);
}
// System.Void UnityGLTF.GLTFSceneImporter/<LoadMaterialAsync>d__52::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLoadMaterialAsyncU3Ed__52_MoveNext_m1C8A9DE92DF95A4282B74854AC2D634BA25863F2 (U3CLoadMaterialAsyncU3Ed__52_t755573D411A3D57BC63E16A616ED2F064C971F96 * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<UnityEngine.Material>::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
inline void AsyncTaskMethodBuilder_1_SetStateMachine_m3D90B0CDCE00AC2F23D6C52093AB4DA114EB0E60 (AsyncTaskMethodBuilder_1_tC7219A08BD3DD7AA457D88CB3FC2B69ABBED2A73 * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_tC7219A08BD3DD7AA457D88CB3FC2B69ABBED2A73 *, RuntimeObject*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_SetStateMachine_m5CC21A02320CF3D2DD7894A31123DFD82A428E4C_gshared)(__this, ___stateMachine0, method);
}
// System.Void UnityGLTF.GLTFSceneImporter/<LoadMaterialAsync>d__52::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLoadMaterialAsyncU3Ed__52_SetStateMachine_mCAA4E143B5289A23437E48699A92E99C24B8FA11 (U3CLoadMaterialAsyncU3Ed__52_t755573D411A3D57BC63E16A616ED2F064C971F96 * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method);
// System.Void UnityGLTF.GLTFSceneImporter/<>c__DisplayClass53_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass53_0__ctor_m2B3CF7AA83F39700EA60445D04B506832EC77E45 (U3CU3Ec__DisplayClass53_0_t8D4248C7B9839F95826E82E11BB0844C853D00EA * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<UnityEngine.Mesh>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter,UnityGLTF.GLTFSceneImporter/<LoadMeshAsync>d__53>(!!0&,!!1&)
inline void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F_TisU3CLoadMeshAsyncU3Ed__53_tCB90C821E003B0152A4AAC3CB54BD84D61B8823D_m9278F9BCE710F42E3CF9FC6E6AEC175A3FDDDA8A (AsyncTaskMethodBuilder_1_t50EB7C4D84FEBBDF5495A2EE38949E9E10E51791 * __this, TaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F * ___awaiter0, U3CLoadMeshAsyncU3Ed__53_tCB90C821E003B0152A4AAC3CB54BD84D61B8823D * ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t50EB7C4D84FEBBDF5495A2EE38949E9E10E51791 *, TaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F *, U3CLoadMeshAsyncU3Ed__53_tCB90C821E003B0152A4AAC3CB54BD84D61B8823D *, const RuntimeMethod*))AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F_TisU3CLoadMeshAsyncU3Ed__53_tCB90C821E003B0152A4AAC3CB54BD84D61B8823D_m1ACBB45951DAF88850FF55F43D9410A88AF38056_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// UnityGLTF.Cache.MeshCacheData[] UnityGLTF.Cache.AssetCache::get_MeshCache()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR MeshCacheDataU5BU5D_t172934B760B5F101344848AB49BADBC9CAC4E59C* AssetCache_get_MeshCache_mD1A34D709653BF94546C48EA7E776725F21E94CE_inline (AssetCache_tE060C78C9F54F8BF6F50E904460FA53958B59D91 * __this, const RuntimeMethod* method);
// UnityEngine.Mesh UnityGLTF.Cache.MeshCacheData::get_LoadedMesh()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * MeshCacheData_get_LoadedMesh_mF03D281EA79A6092D0208114EF7FFAC344C8F4B2_inline (MeshCacheData_tDC17655604D5D9B4FF0FFB71FEAB50212603F664 * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<UnityEngine.Mesh>::SetException(System.Exception)
inline void AsyncTaskMethodBuilder_1_SetException_m5A75241F31660276EB2924D240A2ACAF3F4F596E (AsyncTaskMethodBuilder_1_t50EB7C4D84FEBBDF5495A2EE38949E9E10E51791 * __this, Exception_t * ___exception0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t50EB7C4D84FEBBDF5495A2EE38949E9E10E51791 *, Exception_t *, const RuntimeMethod*))AsyncTaskMethodBuilder_1_SetException_m4C0B5462ECCB520FACA3C90B353DF596DAAF586D_gshared)(__this, ___exception0, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<UnityEngine.Mesh>::SetResult(!0)
inline void AsyncTaskMethodBuilder_1_SetResult_mA3E85EE36EC5DD610101048D8EB64F04AB9CC680 (AsyncTaskMethodBuilder_1_t50EB7C4D84FEBBDF5495A2EE38949E9E10E51791 * __this, Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * ___result0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t50EB7C4D84FEBBDF5495A2EE38949E9E10E51791 *, Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C *, const RuntimeMethod*))AsyncTaskMethodBuilder_1_SetResult_mD7DA7A17DC0610B11A0AAA364C3CA51FEC1271DB_gshared)(__this, ___result0, method);
}
// System.Void UnityGLTF.GLTFSceneImporter/<LoadMeshAsync>d__53::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLoadMeshAsyncU3Ed__53_MoveNext_m6C894E6978AC3D3C6C9944D53A80EBF3303241CE (U3CLoadMeshAsyncU3Ed__53_tCB90C821E003B0152A4AAC3CB54BD84D61B8823D * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<UnityEngine.Mesh>::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
inline void AsyncTaskMethodBuilder_1_SetStateMachine_mF2AF2A969249D4C5163F1C4C517E7C5060869F14 (AsyncTaskMethodBuilder_1_t50EB7C4D84FEBBDF5495A2EE38949E9E10E51791 * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t50EB7C4D84FEBBDF5495A2EE38949E9E10E51791 *, RuntimeObject*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_SetStateMachine_m5CC21A02320CF3D2DD7894A31123DFD82A428E4C_gshared)(__this, ___stateMachine0, method);
}
// System.Void UnityGLTF.GLTFSceneImporter/<LoadMeshAsync>d__53::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLoadMeshAsyncU3Ed__53_SetStateMachine_m4AE5A7B0A0A181EF2EB9E2A13314A01FD49AF741 (U3CLoadMeshAsyncU3Ed__53_tCB90C821E003B0152A4AAC3CB54BD84D61B8823D * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method);
// System.Void System.Threading.Monitor::Enter(System.Object,System.Boolean&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Enter_mC5B353DD83A0B0155DF6FBCC4DF5A580C25534C5 (RuntimeObject * ___obj0, bool* ___lockTaken1, const RuntimeMethod* method);
// System.Void System.Threading.Monitor::Exit(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Exit_m49A1E5356D984D0B934BB97A305E2E5E207225C2 (RuntimeObject * ___obj0, const RuntimeMethod* method);
// System.Void UnityGLTF.MemoryChecker::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MemoryChecker__ctor_mE60927E4E5764E4E815287255A88A4C6C4CAED15 (MemoryChecker_t6298B1B47ACD98ED696BC66A79E5D5217756BA6A * __this, const RuntimeMethod* method);
// System.Threading.Tasks.Task UnityGLTF.GLTFSceneImporter::LoadJson(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * GLTFSceneImporter_LoadJson_mCA3881A2B72C345F9AA491730D9CF1E6C00BA5B3 (GLTFSceneImporter_t29A5109798926C47E5B089376F3E467E78EB710E * __this, String_t* ___jsonFilePath0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter,UnityGLTF.GLTFSceneImporter/<LoadSceneAsync>d__49>(!!0&,!!1&)
inline void AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F_TisU3CLoadSceneAsyncU3Ed__49_t1B6A25CAC879F95D954154652A4EB3422B957F5B_mF9307DBAD6E0FC8633BFD9538A5F6C583D7CEB4D (AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487 * __this, TaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F * ___awaiter0, U3CLoadSceneAsyncU3Ed__49_t1B6A25CAC879F95D954154652A4EB3422B957F5B * ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487 *, TaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F *, U3CLoadSceneAsyncU3Ed__49_t1B6A25CAC879F95D954154652A4EB3422B957F5B *, const RuntimeMethod*))AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F_TisU3CLoadSceneAsyncU3Ed__49_t1B6A25CAC879F95D954154652A4EB3422B957F5B_mF9307DBAD6E0FC8633BFD9538A5F6C583D7CEB4D_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// System.Void System.Threading.CancellationToken::ThrowIfCancellationRequested()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CancellationToken_ThrowIfCancellationRequested_m13AB667F961F83D8ED759BA402325638F43B0938 (CancellationToken_t9E956952F7F20908F2AE72EDF36D97E6C7DB63AB * __this, const RuntimeMethod* method);
// System.Void UnityGLTF.Cache.AssetCache::.ctor(GLTF.Schema.GLTFRoot)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AssetCache__ctor_m3C03CC6A0178007549D6B4D6AC6C4AAED052566C (AssetCache_tE060C78C9F54F8BF6F50E904460FA53958B59D91 * __this, GLTFRoot_t3CDB3EBE42E8A0E06DD58B35BAD5D98EF44F3A6B * ___root0, const RuntimeMethod* method);
// System.Threading.Tasks.Task UnityGLTF.GLTFSceneImporter::_LoadScene(System.Int32,System.Boolean,System.Threading.CancellationToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * GLTFSceneImporter__LoadScene_m2A20B14C71BFD74C1BD2F899AFC06C5EDB05DC03 (GLTFSceneImporter_t29A5109798926C47E5B089376F3E467E78EB710E * __this, int32_t ___sceneIndex0, bool ___showSceneObj1, CancellationToken_t9E956952F7F20908F2AE72EDF36D97E6C7DB63AB  ___cancellationToken2, const RuntimeMethod* method);
// System.Void UnityGLTF.GLTFSceneImporter::Cleanup()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GLTFSceneImporter_Cleanup_mEDA112BFE03960505732686F099C6E8CF5E4B991 (GLTFSceneImporter_t29A5109798926C47E5B089376F3E467E78EB710E * __this, const RuntimeMethod* method);
// System.Runtime.ExceptionServices.ExceptionDispatchInfo System.Runtime.ExceptionServices.ExceptionDispatchInfo::Capture(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ExceptionDispatchInfo_t0C54083F3909DAF986A4DEAA7C047559531E0E2A * ExceptionDispatchInfo_Capture_m8E5F721466EDFE9AA8BC532F9AE7A859E0766E23 (Exception_t * ___source0, const RuntimeMethod* method);
// System.Void System.Action`2<UnityEngine.GameObject,System.Runtime.ExceptionServices.ExceptionDispatchInfo>::Invoke(!0,!1)
inline void Action_2_Invoke_mB23450FBA9B92A036FA6559F22031C4A2981B46E (Action_2_tA8345456806B324BA9E2C0C4E51F157CE28878B6 * __this, GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___arg10, ExceptionDispatchInfo_t0C54083F3909DAF986A4DEAA7C047559531E0E2A * ___arg21, const RuntimeMethod* method)
{
	((  void (*) (Action_2_tA8345456806B324BA9E2C0C4E51F157CE28878B6 *, GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *, ExceptionDispatchInfo_t0C54083F3909DAF986A4DEAA7C047559531E0E2A *, const RuntimeMethod*))Action_2_Invoke_m1738FFAE74BE5E599FD42520FA2BEF69D1AC4709_gshared)(__this, ___arg10, ___arg21, method);
}
// UnityEngine.GameObject UnityGLTF.GLTFSceneImporter::get_LastLoadedScene()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * GLTFSceneImporter_get_LastLoadedScene_m2D359392DB0836ACC37C5CE97F57678EA5D9122B_inline (GLTFSceneImporter_t29A5109798926C47E5B089376F3E467E78EB710E * __this, const RuntimeMethod* method);
// System.Void UnityGLTF.GLTFSceneImporter/<LoadSceneAsync>d__49::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLoadSceneAsyncU3Ed__49_MoveNext_m23A9C2C1357554A7D3E554DBFA861054DDE20B7B (U3CLoadSceneAsyncU3Ed__49_t1B6A25CAC879F95D954154652A4EB3422B957F5B * __this, const RuntimeMethod* method);
// System.Void UnityGLTF.GLTFSceneImporter/<LoadSceneAsync>d__49::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLoadSceneAsyncU3Ed__49_SetStateMachine_mB175D654E4B6101B098CF53CF216B77E68E74FC5 (U3CLoadSceneAsyncU3Ed__49_t1B6A25CAC879F95D954154652A4EB3422B957F5B * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter,UnityGLTF.GLTFSceneImporter/<LoadTextureAsync>d__90>(!!0&,!!1&)
inline void AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F_TisU3CLoadTextureAsyncU3Ed__90_t89527B90B205393BD5B0E5F5DFB152719A50FBEB_mADB813CEC003321849DF29ED9ECD06E9E7176EEF (AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487 * __this, TaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F * ___awaiter0, U3CLoadTextureAsyncU3Ed__90_t89527B90B205393BD5B0E5F5DFB152719A50FBEB * ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487 *, TaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F *, U3CLoadTextureAsyncU3Ed__90_t89527B90B205393BD5B0E5F5DFB152719A50FBEB *, const RuntimeMethod*))AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F_TisU3CLoadTextureAsyncU3Ed__90_t89527B90B205393BD5B0E5F5DFB152719A50FBEB_mADB813CEC003321849DF29ED9ECD06E9E7176EEF_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// System.Threading.Tasks.Task UnityGLTF.GLTFSceneImporter::ConstructImageBuffer(GLTF.Schema.GLTFTexture,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * GLTFSceneImporter_ConstructImageBuffer_mB7425D0F22415AE6D02A82D82B6D7DE202D8253A (GLTFSceneImporter_t29A5109798926C47E5B089376F3E467E78EB710E * __this, GLTFTexture_t2D12B18E729EBA0BBA4A5B51A991297BDFF7CD65 * ___texture0, int32_t ___textureIndex1, const RuntimeMethod* method);
// System.Void UnityGLTF.GLTFSceneImporter/<LoadTextureAsync>d__90::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLoadTextureAsyncU3Ed__90_MoveNext_mE560D34D16F569E9362802B1BD8BB7C3D3A30A10 (U3CLoadTextureAsyncU3Ed__90_t89527B90B205393BD5B0E5F5DFB152719A50FBEB * __this, const RuntimeMethod* method);
// System.Void UnityGLTF.GLTFSceneImporter/<LoadTextureAsync>d__90::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLoadTextureAsyncU3Ed__90_SetStateMachine_m95DDF3E6D84D74AD1D5705ACC94AEE40D4D2BABB (U3CLoadTextureAsyncU3Ed__90_t89527B90B205393BD5B0E5F5DFB152719A50FBEB * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<GLTF.Schema.NodeId>::get_Count()
inline int32_t List_1_get_Count_mC38D94CE53B66FE39465261CE2C708B2DA4DCDEF_inline (List_1_t1B89882FA16EC868F9405338766EE999CD21DBAD * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t1B89882FA16EC868F9405338766EE999CD21DBAD *, const RuntimeMethod*))List_1_get_Count_m507C9149FF7F83AAC72C29091E745D557DA47D22_gshared_inline)(__this, method);
}
// System.Void GLTF.AttributeAccessor::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AttributeAccessor__ctor_m9DE7776F8AC5156F42438E1199EE1153151D9A49 (AttributeAccessor_t54DE63C0FA54991AB605635BD32870BA45E9FF8C * __this, const RuntimeMethod* method);
// System.Void GLTF.AttributeAccessor::set_AccessorId(GLTF.Schema.AccessorId)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void AttributeAccessor_set_AccessorId_m0A847BD84D1BEC4B2F56D7C5C8E9FD27E2F10DEB_inline (AttributeAccessor_t54DE63C0FA54991AB605635BD32870BA45E9FF8C * __this, AccessorId_t6C51102D50B95D309D47FD946FE62ED76C16B83F * ___value0, const RuntimeMethod* method);
// UnityGLTF.Cache.BufferCacheData[] UnityGLTF.Cache.AssetCache::get_BufferCache()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR BufferCacheDataU5BU5D_t090C5C4874ADA45FFD0C6E6B36010DD196C0975E* AssetCache_get_BufferCache_mF79FDECEAE54294E62CCB5C0CF780FE2E6472445_inline (AssetCache_tE060C78C9F54F8BF6F50E904460FA53958B59D91 * __this, const RuntimeMethod* method);
// System.IO.Stream UnityGLTF.Cache.BufferCacheData::get_Stream()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * BufferCacheData_get_Stream_m846345E05A526E5D993667CB4B1D85A39D764FE1_inline (BufferCacheData_t94725215DAEBBBFF691A97822F8744A8038F6743 * __this, const RuntimeMethod* method);
// System.Void GLTF.AttributeAccessor::set_Stream(System.IO.Stream)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void AttributeAccessor_set_Stream_m2433EEE74EC014D1E5FAADA0451FE97C2242B70B_inline (AttributeAccessor_t54DE63C0FA54991AB605635BD32870BA45E9FF8C * __this, Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * ___value0, const RuntimeMethod* method);
// System.UInt32 UnityGLTF.Cache.BufferCacheData::get_ChunkOffset()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR uint32_t BufferCacheData_get_ChunkOffset_m67042555CF1C5521B6417767B6E3873E289B092B_inline (BufferCacheData_t94725215DAEBBBFF691A97822F8744A8038F6743 * __this, const RuntimeMethod* method);
// System.Void GLTF.AttributeAccessor::set_Offset(System.UInt32)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void AttributeAccessor_set_Offset_mE9C82B7E02249CFF716E8BC72044F8A99BFADD93_inline (AttributeAccessor_t54DE63C0FA54991AB605635BD32870BA45E9FF8C * __this, uint32_t ___value0, const RuntimeMethod* method);
// System.Void GLTF.GLTFHelpers::BuildBindPoseSamplers(GLTF.AttributeAccessor&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GLTFHelpers_BuildBindPoseSamplers_m8558DD5533C044EB2D9DFFFD0277C6BF1EC65806 (AttributeAccessor_t54DE63C0FA54991AB605635BD32870BA45E9FF8C ** ___attributeAccessor0, const RuntimeMethod* method);
// GLTF.Schema.NumericArray GLTF.AttributeAccessor::get_AccessorContent()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR NumericArray_t4941F537DC57A0602218632AABDF228987E030E9  AttributeAccessor_get_AccessorContent_m440E2D27F4F0017DCC5C80B33F8A37FCBF2244B3_inline (AttributeAccessor_t54DE63C0FA54991AB605635BD32870BA45E9FF8C * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<GLTF.Schema.NodeId>::get_Item(System.Int32)
inline NodeId_tB863E2705852710AA05166CD9250E50B3A9FB8F0 * List_1_get_Item_mAB97D47FFE58B61357761FA45F7BF742BD94E964_inline (List_1_t1B89882FA16EC868F9405338766EE999CD21DBAD * __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  NodeId_tB863E2705852710AA05166CD9250E50B3A9FB8F0 * (*) (List_1_t1B89882FA16EC868F9405338766EE999CD21DBAD *, int32_t, const RuntimeMethod*))List_1_get_Item_mFDB8AD680C600072736579BBF5F38F7416396588_gshared_inline)(__this, ___index0, method);
}
// System.Threading.Tasks.Task`1<UnityEngine.GameObject> UnityGLTF.GLTFSceneImporter::GetNode(System.Int32,System.Threading.CancellationToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t5029FFD61E4B10A1E614C1D97F1F0FA5B04557EC * GLTFSceneImporter_GetNode_m7D1647D2D937C2C792D0932E3D459DA2845AEF5A (GLTFSceneImporter_t29A5109798926C47E5B089376F3E467E78EB710E * __this, int32_t ___nodeId0, CancellationToken_t9E956952F7F20908F2AE72EDF36D97E6C7DB63AB  ___cancellationToken1, const RuntimeMethod* method);
// System.Runtime.CompilerServices.TaskAwaiter`1<!0> System.Threading.Tasks.Task`1<UnityEngine.GameObject>::GetAwaiter()
inline TaskAwaiter_1_tAE6B8B90DDB2F4605D3C8F53F1F449F35790A468  Task_1_GetAwaiter_m90E2F1385A9B5545BC25491244E0CEB39C7633AB (Task_1_t5029FFD61E4B10A1E614C1D97F1F0FA5B04557EC * __this, const RuntimeMethod* method)
{
	return ((  TaskAwaiter_1_tAE6B8B90DDB2F4605D3C8F53F1F449F35790A468  (*) (Task_1_t5029FFD61E4B10A1E614C1D97F1F0FA5B04557EC *, const RuntimeMethod*))Task_1_GetAwaiter_m9C50610C6F05C1DA9BFA67201CB570F1DE040817_gshared)(__this, method);
}
// System.Boolean System.Runtime.CompilerServices.TaskAwaiter`1<UnityEngine.GameObject>::get_IsCompleted()
inline bool TaskAwaiter_1_get_IsCompleted_m909D94801484D90689A3F279FF0722556EA3AC30 (TaskAwaiter_1_tAE6B8B90DDB2F4605D3C8F53F1F449F35790A468 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (TaskAwaiter_1_tAE6B8B90DDB2F4605D3C8F53F1F449F35790A468 *, const RuntimeMethod*))TaskAwaiter_1_get_IsCompleted_mBF435C7EFD03FCF7810FC08EEDC5945F80FF88F9_gshared)(__this, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<UnityEngine.GameObject>,UnityGLTF.GLTFSceneImporter/<SetupBones>d__81>(!!0&,!!1&)
inline void AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_tAE6B8B90DDB2F4605D3C8F53F1F449F35790A468_TisU3CSetupBonesU3Ed__81_t62772CFE58B2A384226F4D7C2927B56067511DDC_m6AACCF3E83D59FCCF856D1ECB605ED655C946DFD (AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487 * __this, TaskAwaiter_1_tAE6B8B90DDB2F4605D3C8F53F1F449F35790A468 * ___awaiter0, U3CSetupBonesU3Ed__81_t62772CFE58B2A384226F4D7C2927B56067511DDC * ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487 *, TaskAwaiter_1_tAE6B8B90DDB2F4605D3C8F53F1F449F35790A468 *, U3CSetupBonesU3Ed__81_t62772CFE58B2A384226F4D7C2927B56067511DDC *, const RuntimeMethod*))AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t8CDB78D2A4D48E80C35A8FF6FC04A82B9FC35977_TisU3CSetupBonesU3Ed__81_t62772CFE58B2A384226F4D7C2927B56067511DDC_m451304E87A5F13FD097EE7D8420E85477F1FDA80_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// !0 System.Runtime.CompilerServices.TaskAwaiter`1<UnityEngine.GameObject>::GetResult()
inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * TaskAwaiter_1_GetResult_m3203645289A2AA352E87023E38460D33B2FE4D16 (TaskAwaiter_1_tAE6B8B90DDB2F4605D3C8F53F1F449F35790A468 * __this, const RuntimeMethod* method)
{
	return ((  GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * (*) (TaskAwaiter_1_tAE6B8B90DDB2F4605D3C8F53F1F449F35790A468 *, const RuntimeMethod*))TaskAwaiter_1_GetResult_m9E148849CD4747E1BDD831E4FB2D7ECFA13C11C8_gshared)(__this, method);
}
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method);
// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::get_identity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  Matrix4x4_get_identity_mA0CECDE2A5E85CF014375084624F3770B5B7B79B (const RuntimeMethod* method);
// UnityEngine.Matrix4x4 UnityGLTF.Extensions.SchemaExtensions::ToUnityMatrix4x4Convert(GLTF.Math.Matrix4x4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  SchemaExtensions_ToUnityMatrix4x4Convert_m7C719C8578F611BE256F57C3F03025333460A2B6 (Matrix4x4_t43BAF443FBFCE8DA422507220B68CDD4CA7F19D9 * ___gltfMat0, const RuntimeMethod* method);
// System.Void UnityEngine.SkinnedMeshRenderer::set_rootBone(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SkinnedMeshRenderer_set_rootBone_mBC4EA4CFD91C1FA593D17233AC70E1E219F24C21 (SkinnedMeshRenderer_tFC8103EE7842F7F8A98BEF0C855D32A9711B7B65 * __this, Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___value0, const RuntimeMethod* method);
// GLTF.Schema.NodeId GLTF.GLTFHelpers::FindCommonAncestor(System.Collections.Generic.IEnumerable`1<GLTF.Schema.NodeId>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NodeId_tB863E2705852710AA05166CD9250E50B3A9FB8F0 * GLTFHelpers_FindCommonAncestor_m68BA42B74B5DFAD06D2F0AFFFE8D6DA4501B87F0 (RuntimeObject* ___nodes0, const RuntimeMethod* method);
// System.Void System.Exception::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Exception__ctor_m89BADFF36C3B170013878726E07729D51AA9FBE0 (Exception_t * __this, String_t* ___message0, const RuntimeMethod* method);
// UnityEngine.Mesh UnityEngine.SkinnedMeshRenderer::get_sharedMesh()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * SkinnedMeshRenderer_get_sharedMesh_mCEFF1E7B966C5C7F940F051930D18DF98F427444 (SkinnedMeshRenderer_tFC8103EE7842F7F8A98BEF0C855D32A9711B7B65 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Mesh::set_bindposes(UnityEngine.Matrix4x4[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_set_bindposes_m75011114B82AA0045C07AFFB4B07F7E0FAAFC23E (Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * __this, Matrix4x4U5BU5D_t1C64F7A0C34058334A8A95BF165F0027690598C9* ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.SkinnedMeshRenderer::set_bones(UnityEngine.Transform[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SkinnedMeshRenderer_set_bones_mDA75746FD5C90CCEB656A107371FC3BD593AE783 (SkinnedMeshRenderer_tFC8103EE7842F7F8A98BEF0C855D32A9711B7B65 * __this, TransformU5BU5D_t4F5A1132877D8BA66ABC0A9A7FADA4E0237A7804* ___value0, const RuntimeMethod* method);
// System.Void UnityGLTF.GLTFSceneImporter/<SetupBones>d__81::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSetupBonesU3Ed__81_MoveNext_mA170126FA296DE2AA10199060966C1908F018F63 (U3CSetupBonesU3Ed__81_t62772CFE58B2A384226F4D7C2927B56067511DDC * __this, const RuntimeMethod* method);
// System.Void UnityGLTF.GLTFSceneImporter/<SetupBones>d__81::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSetupBonesU3Ed__81_SetStateMachine_m0CBAA99E6C162A3EF13970B470AB902476EF9C33 (U3CSetupBonesU3Ed__81_t62772CFE58B2A384226F4D7C2927B56067511DDC * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter,UnityGLTF.GLTFSceneImporter/<SetupLoad>d__102>(!!0&,!!1&)
inline void AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F_TisU3CSetupLoadU3Ed__102_tFB8B5441489338282D4CAC773B60B896D00F07EF_m328953A61919506A8A2A0C6BF7DC3FC37F74702C (AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487 * __this, TaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F * ___awaiter0, U3CSetupLoadU3Ed__102_tFB8B5441489338282D4CAC773B60B896D00F07EF * ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487 *, TaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F *, U3CSetupLoadU3Ed__102_tFB8B5441489338282D4CAC773B60B896D00F07EF *, const RuntimeMethod*))AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F_TisU3CSetupLoadU3Ed__102_tFB8B5441489338282D4CAC773B60B896D00F07EF_m328953A61919506A8A2A0C6BF7DC3FC37F74702C_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// !0 System.Func`1<System.Threading.Tasks.Task>::Invoke()
inline Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * Func_1_Invoke_mC7466BFC36F67F4565B11F44CF8D352CE5593577 (Func_1_t864AB9A10EEBC12BC5B32E4C8BD6F0F8E0D2F728 * __this, const RuntimeMethod* method)
{
	return ((  Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * (*) (Func_1_t864AB9A10EEBC12BC5B32E4C8BD6F0F8E0D2F728 *, const RuntimeMethod*))Func_1_Invoke_mBF530DABEB784E3EE650A4D493CF11300AA9E213_gshared)(__this, method);
}
// System.Void UnityGLTF.GLTFSceneImporter/<SetupLoad>d__102::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSetupLoadU3Ed__102_MoveNext_mA4531B1A69D1F3F5024AB872EE50684949A7D116 (U3CSetupLoadU3Ed__102_tFB8B5441489338282D4CAC773B60B896D00F07EF * __this, const RuntimeMethod* method);
// System.Void UnityGLTF.GLTFSceneImporter/<SetupLoad>d__102::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSetupLoadU3Ed__102_SetStateMachine_m3CF3E1FF67585D1C747A6FB44FF9AE93933D1225 (U3CSetupLoadU3Ed__102_tFB8B5441489338282D4CAC773B60B896D00F07EF * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_mA121DE1CAC8F25277DEB489DC7771209D91CAE33 (NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010 * __this, const RuntimeMethod* method);
// System.Void UnityGLTF.MemoryChecker::ThrowIfOutOfMemory()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MemoryChecker_ThrowIfOutOfMemory_m40C12ACD6E1974DD5873D8A653C7E5EC65B6B714 (MemoryChecker_t6298B1B47ACD98ED696BC66A79E5D5217756BA6A * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1 (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * ___x0, Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * ___y1, const RuntimeMethod* method);
// System.Threading.Tasks.Task UnityGLTF.AsyncCoroutineHelper::YieldOnTimeout()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * AsyncCoroutineHelper_YieldOnTimeout_m35081A029D4067EC4CE2425D67AEC3069E4043A5 (AsyncCoroutineHelper_t032BCD93473D0EBD9757396C7B539A1475B92757 * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter,UnityGLTF.GLTFSceneImporter/<YieldOnTimeoutAndThrowOnLowMemory>d__97>(!!0&,!!1&)
inline void AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F_TisU3CYieldOnTimeoutAndThrowOnLowMemoryU3Ed__97_t94FCCE7CF181F8FA506AB6B4A977C0A7C9BD8BDB_mD2DC8FE44409674EC910F02670E96DBA5B78F571 (AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487 * __this, TaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F * ___awaiter0, U3CYieldOnTimeoutAndThrowOnLowMemoryU3Ed__97_t94FCCE7CF181F8FA506AB6B4A977C0A7C9BD8BDB * ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487 *, TaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F *, U3CYieldOnTimeoutAndThrowOnLowMemoryU3Ed__97_t94FCCE7CF181F8FA506AB6B4A977C0A7C9BD8BDB *, const RuntimeMethod*))AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F_TisU3CYieldOnTimeoutAndThrowOnLowMemoryU3Ed__97_t94FCCE7CF181F8FA506AB6B4A977C0A7C9BD8BDB_mD2DC8FE44409674EC910F02670E96DBA5B78F571_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// System.Void UnityGLTF.GLTFSceneImporter/<YieldOnTimeoutAndThrowOnLowMemory>d__97::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CYieldOnTimeoutAndThrowOnLowMemoryU3Ed__97_MoveNext_m6EB59599C82A9E706128405639242DD61AC3E977 (U3CYieldOnTimeoutAndThrowOnLowMemoryU3Ed__97_t94FCCE7CF181F8FA506AB6B4A977C0A7C9BD8BDB * __this, const RuntimeMethod* method);
// System.Void UnityGLTF.GLTFSceneImporter/<YieldOnTimeoutAndThrowOnLowMemory>d__97::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CYieldOnTimeoutAndThrowOnLowMemoryU3Ed__97_SetStateMachine_m9B504500B98FE08BB5B397EBBE5C44446D5148C4 (U3CYieldOnTimeoutAndThrowOnLowMemoryU3Ed__97_t94FCCE7CF181F8FA506AB6B4A977C0A7C9BD8BDB * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<GLTF.Schema.GLTFScene>::get_Count()
inline int32_t List_1_get_Count_m08D9441B3CE06620361B6B23ECA6641B655CD7F8_inline (List_1_tAED3D6A1ED2710E0A2CB5BACC62D7D58311F4DFD * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tAED3D6A1ED2710E0A2CB5BACC62D7D58311F4DFD *, const RuntimeMethod*))List_1_get_Count_m507C9149FF7F83AAC72C29091E745D557DA47D22_gshared_inline)(__this, method);
}
// !0 System.Collections.Generic.List`1<GLTF.Schema.GLTFScene>::get_Item(System.Int32)
inline GLTFScene_t668D116E319247178F4641B2F3A4DF33C6343BB6 * List_1_get_Item_m74BA8D86C414CF89D770517E5E5BB0D20BECE8DB_inline (List_1_tAED3D6A1ED2710E0A2CB5BACC62D7D58311F4DFD * __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  GLTFScene_t668D116E319247178F4641B2F3A4DF33C6343BB6 * (*) (List_1_tAED3D6A1ED2710E0A2CB5BACC62D7D58311F4DFD *, int32_t, const RuntimeMethod*))List_1_get_Item_mFDB8AD680C600072736579BBF5F38F7416396588_gshared_inline)(__this, ___index0, method);
}
// GLTF.Schema.GLTFScene GLTF.Schema.GLTFRoot::GetDefaultScene()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GLTFScene_t668D116E319247178F4641B2F3A4DF33C6343BB6 * GLTFRoot_GetDefaultScene_m73586980AE9F7CD17E566F3425373E5D322986C3 (GLTFRoot_t3CDB3EBE42E8A0E06DD58B35BAD5D98EF44F3A6B * __this, const RuntimeMethod* method);
// System.Void UnityGLTF.GLTFSceneImporter::GetGtlfContentTotals(GLTF.Schema.GLTFScene)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GLTFSceneImporter_GetGtlfContentTotals_m43289E07195084F10C145D447F78BF1819A7371B (GLTFSceneImporter_t29A5109798926C47E5B089376F3E467E78EB710E * __this, GLTFScene_t668D116E319247178F4641B2F3A4DF33C6343BB6 * ___scene0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter,UnityGLTF.GLTFSceneImporter/<_LoadScene>d__61>(!!0&,!!1&)
inline void AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F_TisU3C_LoadSceneU3Ed__61_t235926E3418670BF165AE82626829C7DF9BCDF57_m804E37614DF66F6F82376961253D71CF9C2CE30F (AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487 * __this, TaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F * ___awaiter0, U3C_LoadSceneU3Ed__61_t235926E3418670BF165AE82626829C7DF9BCDF57 * ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487 *, TaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F *, U3C_LoadSceneU3Ed__61_t235926E3418670BF165AE82626829C7DF9BCDF57 *, const RuntimeMethod*))AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F_TisU3C_LoadSceneU3Ed__61_t235926E3418670BF165AE82626829C7DF9BCDF57_m804E37614DF66F6F82376961253D71CF9C2CE30F_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// UnityEngine.Transform UnityGLTF.GLTFSceneImporter::get_SceneParent()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * GLTFSceneImporter_get_SceneParent_m024C6944150465D5154A60F25FC757E3CD9A15AC_inline (GLTFSceneImporter_t29A5109798926C47E5B089376F3E467E78EB710E * __this, const RuntimeMethod* method);
// UnityEngine.GameObject UnityGLTF.GLTFSceneImporter::get_CreatedObject()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * GLTFSceneImporter_get_CreatedObject_mA374F1F0FDCC8968B6624F667818753D64E71704_inline (GLTFSceneImporter_t29A5109798926C47E5B089376F3E467E78EB710E * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::SetParent(UnityEngine.Transform,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_SetParent_m268E3814921D90882EFECE244A797264DE2A5E35 (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___parent0, bool ___worldPositionStays1, const RuntimeMethod* method);
// System.Void UnityGLTF.GLTFSceneImporter/<_LoadScene>d__61::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3C_LoadSceneU3Ed__61_MoveNext_m568E0F79D7250D56497C86BF36A148FFA8E95A34 (U3C_LoadSceneU3Ed__61_t235926E3418670BF165AE82626829C7DF9BCDF57 * __this, const RuntimeMethod* method);
// System.Void UnityGLTF.GLTFSceneImporter/<_LoadScene>d__61::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3C_LoadSceneU3Ed__61_SetStateMachine_m7F073F1DBC33F490DD02CABCFA380DE7C42E1871 (U3C_LoadSceneU3Ed__61_t235926E3418670BF165AE82626829C7DF9BCDF57 * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method);
// System.Void UnityEngine.ScriptableObject::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScriptableObject__ctor_m6E2B3821A4A361556FC12E9B1C71E1D5DC002C5B (ScriptableObject_tAB015486CEAB714DA0D5C1BA389B84FB90427734 * __this, const RuntimeMethod* method);
// System.Void UnityGLTF.Cache.RefCountedCacheData::DecreaseRefCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RefCountedCacheData_DecreaseRefCount_m6557CEAF8BC29CB712DC1E433FFA50A83266B29A (RefCountedCacheData_t3E7A4E802B00500764E6515507894E680D89D572 * __this, const RuntimeMethod* method);
// System.Void UnityGLTF.Cache.RefCountedCacheData::IncreaseRefCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RefCountedCacheData_IncreaseRefCount_m0FA8DF83E5CF1944647E7C73C742BCE39A305503 (RefCountedCacheData_t3E7A4E802B00500764E6515507894E680D89D572 * __this, const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<UnityEngine.GameObject>(!!0)
inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * Object_Instantiate_TisGameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_mC4AB712D7F18E0991E1542CE53F11385E21E7B90 (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___original0, const RuntimeMethod* method)
{
	return ((  GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * (*) (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m4566F033303F52A6D430A06E5FA2D29E2A8D6ED3_gshared)(___original0, method);
}
// !!0 UnityEngine.GameObject::GetComponent<UnityGLTF.InstantiatedGLTFObject>()
inline InstantiatedGLTFObject_t03E5C1C7AE61E8CF56BC66C274C240C65511816B * GameObject_GetComponent_TisInstantiatedGLTFObject_t03E5C1C7AE61E8CF56BC66C274C240C65511816B_m18F885773E8E7E8AE24577C61F8769DCD707303A (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method)
{
	return ((  InstantiatedGLTFObject_t03E5C1C7AE61E8CF56BC66C274C240C65511816B * (*) (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mE03C66715289D7957CA068A675826B7EE0887BE3_gshared)(__this, method);
}
// UnityGLTF.Cache.RefCountedCacheData UnityGLTF.InstantiatedGLTFObject::get_CachedData()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR RefCountedCacheData_t3E7A4E802B00500764E6515507894E680D89D572 * InstantiatedGLTFObject_get_CachedData_mD9A2EB60267B0ECF6802D9960266B773619E1F22_inline (InstantiatedGLTFObject_t03E5C1C7AE61E8CF56BC66C274C240C65511816B * __this, const RuntimeMethod* method);
// System.Void UnityGLTF.InstantiatedGLTFObject::set_CachedData(UnityGLTF.Cache.RefCountedCacheData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InstantiatedGLTFObject_set_CachedData_mA7F0FB8174485BDC3AE2F7D6F856351339CEF0BC (InstantiatedGLTFObject_t03E5C1C7AE61E8CF56BC66C274C240C65511816B * __this, RefCountedCacheData_t3E7A4E802B00500764E6515507894E680D89D572 * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97 (MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429 * __this, const RuntimeMethod* method);
// System.Void UnityGLTF.Loader.FileLoader/<>c__DisplayClass2_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass2_0__ctor_m788FC2C2E4FA700FF5FC1B78D0B1301BA99F63A2 (U3CU3Ec__DisplayClass2_0_t3678587430018971900F898C01E0454C44B67E11 * __this, const RuntimeMethod* method);
// System.Void System.Func`1<System.IO.Stream>::.ctor(System.Object,System.IntPtr)
inline void Func_1__ctor_m01A998C67EF5BB6BDEB26C5AF8A91983E9D80814 (Func_1_tF4352FCFF143E795C0D762BB22D817C4457922EC * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_1_tF4352FCFF143E795C0D762BB22D817C4457922EC *, RuntimeObject *, intptr_t, const RuntimeMethod*))Func_1__ctor_mE02699FC76D830943069F8FC19D16C3B72A98A1F_gshared)(__this, ___object0, ___method1, method);
}
// System.Threading.Tasks.Task`1<!!0> System.Threading.Tasks.Task::Run<System.IO.Stream>(System.Func`1<!!0>)
inline Task_1_tAA7557E5A6A8B2C89E44907CB5B0502A618E9D01 * Task_Run_TisStream_tFC50657DD5AAB87770987F9179D934A51D99D5E7_mCF589D34FB48EFA2AFBCB8199682144F9D550ED7 (Func_1_tF4352FCFF143E795C0D762BB22D817C4457922EC * ___function0, const RuntimeMethod* method)
{
	return ((  Task_1_tAA7557E5A6A8B2C89E44907CB5B0502A618E9D01 * (*) (Func_1_tF4352FCFF143E795C0D762BB22D817C4457922EC *, const RuntimeMethod*))Task_Run_TisRuntimeObject_mCF998C68623C833934353D12C469C935C60E5948_gshared)(___function0, method);
}
// System.Void System.ArgumentNullException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentNullException__ctor_mEE0C0D6FCB2D08CD7967DBB1329A0854BBED49ED (ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD * __this, String_t* ___paramName0, const RuntimeMethod* method);
// System.String System.IO.Path::Combine(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Path_Combine_mA495A18104786EB450EC0E44EE0FB7F9040C4311 (String_t* ___path10, String_t* ___path21, const RuntimeMethod* method);
// System.Boolean System.IO.File::Exists(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool File_Exists_m6B9BDD8EEB33D744EB0590DD27BC0152FAFBD1FB (String_t* ___path0, const RuntimeMethod* method);
// System.Void System.IO.FileNotFoundException::.ctor(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FileNotFoundException__ctor_mB97B07D7D9C7A611842518376C8E11B56AD4CA98 (FileNotFoundException_t0B3F0AE5C94A781A7E2ABBD786F91C229B703431 * __this, String_t* ___message0, String_t* ___fileName1, const RuntimeMethod* method);
// System.IO.FileStream System.IO.File::OpenRead(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FileStream_tA770BF9AF0906644D43C81B962C7DBC3BC79A418 * File_OpenRead_m3B2974AB5AA8011E587AC834BE71862BF77C2129 (String_t* ___path0, const RuntimeMethod* method);
// System.IO.Stream UnityGLTF.Loader.FileLoader::LoadStream(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * FileLoader_LoadStream_m44762DC69301AB58DEFC28123254876747D2E715 (FileLoader_t0E6039215F6C1ABA58F3C0F708E581A45BDF3BC8 * __this, String_t* ___relativeFilePath0, const RuntimeMethod* method);
// System.Void UnityGLTF.Loader.LegacyLoaderWrapper/LegacyLoader2::.ctor(UnityGLTF.Loader.ILoader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LegacyLoader2__ctor_mA989F2315BEC1BC62D91B7DA499A895397091A25 (LegacyLoader2_t0452563D748486937601133A68E894CFB0FEB5D1 * __this, RuntimeObject* ___loader0, const RuntimeMethod* method);
// System.Void UnityGLTF.Loader.LegacyLoaderWrapper/LegacyLoader::.ctor(UnityGLTF.Loader.ILoader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LegacyLoader__ctor_mB6EE440CC5B2364037797F74321739F140C697C4 (LegacyLoader_t5912492DEE5FE2B93A98D527C8D49A91CFDA8A22 * __this, RuntimeObject* ___loader0, const RuntimeMethod* method);
// System.Threading.Tasks.Task`1<!!0> System.Threading.Tasks.Task::FromResult<System.IO.Stream>(!!0)
inline Task_1_tAA7557E5A6A8B2C89E44907CB5B0502A618E9D01 * Task_FromResult_TisStream_tFC50657DD5AAB87770987F9179D934A51D99D5E7_m304EF757D9D1D57BB2E9D0B5D503A4C281684C56 (Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * ___result0, const RuntimeMethod* method)
{
	return ((  Task_1_tAA7557E5A6A8B2C89E44907CB5B0502A618E9D01 * (*) (Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 *, const RuntimeMethod*))Task_FromResult_TisRuntimeObject_m8DBE4A25AA37C4CCED0205CA5FF6319D8BA1C9EB_gshared)(___result0, method);
}
// System.Void System.Net.Http.HttpClient::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HttpClient__ctor_m179C3B29F7C664CDC5B5761E24EC2E9685385A1F (HttpClient_tC7477E4B30DD5CFE1B41DD9CD2EA1F83DB4DE9E7 * __this, const RuntimeMethod* method);
// System.Void System.Net.Security.RemoteCertificateValidationCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RemoteCertificateValidationCallback__ctor_m830361B1E3107AC75A34E07042B4A2567B331E3F (RemoteCertificateValidationCallback_t9C6BA19681BAA3CD78E6674293A57FF5DF62831E * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void System.Net.ServicePointManager::set_ServerCertificateValidationCallback(System.Net.Security.RemoteCertificateValidationCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ServicePointManager_set_ServerCertificateValidationCallback_m5F7A15AF5E38A59E64879079DDB83B5845DBC087 (RemoteCertificateValidationCallback_t9C6BA19681BAA3CD78E6674293A57FF5DF62831E * ___value0, const RuntimeMethod* method);
// System.Void System.Uri::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Uri__ctor_mBA69907A1D799CD12ED44B611985B25FE4C626A2 (Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E * __this, String_t* ___uriString0, const RuntimeMethod* method);
// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<!0> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.IO.Stream>::Create()
inline AsyncTaskMethodBuilder_1_t629F383EABB1E23F4CFEEA0B7A1783E79CB8EF9C  AsyncTaskMethodBuilder_1_Create_mE990EBE247374CEF78C09BAC4A1845B42E2AF225 (const RuntimeMethod* method)
{
	return ((  AsyncTaskMethodBuilder_1_t629F383EABB1E23F4CFEEA0B7A1783E79CB8EF9C  (*) (const RuntimeMethod*))AsyncTaskMethodBuilder_1_Create_mC7806A5C115ED2239A5073313AA3564D8244156E_gshared)(method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.IO.Stream>::Start<UnityGLTF.Loader.WebRequestLoader/<LoadStreamAsync>d__3>(!!0&)
inline void AsyncTaskMethodBuilder_1_Start_TisU3CLoadStreamAsyncU3Ed__3_t50DFA3B38506B50EA0F0E43D41F7D967B4E80BC1_mB0E358C581265F31369FAAA7C9B372AE81105EC4 (AsyncTaskMethodBuilder_1_t629F383EABB1E23F4CFEEA0B7A1783E79CB8EF9C * __this, U3CLoadStreamAsyncU3Ed__3_t50DFA3B38506B50EA0F0E43D41F7D967B4E80BC1 * ___stateMachine0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t629F383EABB1E23F4CFEEA0B7A1783E79CB8EF9C *, U3CLoadStreamAsyncU3Ed__3_t50DFA3B38506B50EA0F0E43D41F7D967B4E80BC1 *, const RuntimeMethod*))AsyncTaskMethodBuilder_1_Start_TisU3CLoadStreamAsyncU3Ed__3_t50DFA3B38506B50EA0F0E43D41F7D967B4E80BC1_m5E4AA5C0DE234C77860D33BFB6A1166867BE30AD_gshared)(__this, ___stateMachine0, method);
}
// System.Threading.Tasks.Task`1<!0> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.IO.Stream>::get_Task()
inline Task_1_tAA7557E5A6A8B2C89E44907CB5B0502A618E9D01 * AsyncTaskMethodBuilder_1_get_Task_m638684DB3092DA761CD7ABE7A0A10D26A18FF017 (AsyncTaskMethodBuilder_1_t629F383EABB1E23F4CFEEA0B7A1783E79CB8EF9C * __this, const RuntimeMethod* method)
{
	return ((  Task_1_tAA7557E5A6A8B2C89E44907CB5B0502A618E9D01 * (*) (AsyncTaskMethodBuilder_1_t629F383EABB1E23F4CFEEA0B7A1783E79CB8EF9C *, const RuntimeMethod*))AsyncTaskMethodBuilder_1_get_Task_m19C5664D70C4FC799BEFB8D0FC98E687F97059FA_gshared)(__this, method);
}
// System.Security.Cryptography.X509Certificates.X509ChainStatus[] System.Security.Cryptography.X509Certificates.X509Chain::get_ChainStatus()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR X509ChainStatusU5BU5D_tA8CCC33D50C4BCF6F657063CD1DACCC3B9A7BFBB* X509Chain_get_ChainStatus_mC51B55A2E42D6C213FB77E43594CF3D53B0247A8 (X509Chain_t4A28E9A30CBB331C9B68AE4AFCB30625C6C8B538 * __this, const RuntimeMethod* method);
// System.Security.Cryptography.X509Certificates.X509ChainStatusFlags System.Security.Cryptography.X509Certificates.X509ChainStatus::get_Status()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t X509ChainStatus_get_Status_mEEC25ED0247E17DDC922F799955225690F176EF0_inline (X509ChainStatus_t9E05BD8700EA6158AC82F71CBE53AD20F6B99B0C * __this, const RuntimeMethod* method);
// System.Security.Cryptography.X509Certificates.X509ChainPolicy System.Security.Cryptography.X509Certificates.X509Chain::get_ChainPolicy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR X509ChainPolicy_tCA1D9E9842A16ACD71D35E9C36659E3E861D74DD * X509Chain_get_ChainPolicy_m20178152AD298737CDA267E61DC1EB80CFCB8AF0 (X509Chain_t4A28E9A30CBB331C9B68AE4AFCB30625C6C8B538 * __this, const RuntimeMethod* method);
// System.Void System.Security.Cryptography.X509Certificates.X509ChainPolicy::set_RevocationFlag(System.Security.Cryptography.X509Certificates.X509RevocationFlag)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X509ChainPolicy_set_RevocationFlag_m0D2B621B5C2AA7F8E60417B091064AFB058AE0CA (X509ChainPolicy_tCA1D9E9842A16ACD71D35E9C36659E3E861D74DD * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void System.Security.Cryptography.X509Certificates.X509ChainPolicy::set_RevocationMode(System.Security.Cryptography.X509Certificates.X509RevocationMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X509ChainPolicy_set_RevocationMode_mFE8CA2695BFF62D0FB0BD38A2BFA0D70ED95596D (X509ChainPolicy_tCA1D9E9842A16ACD71D35E9C36659E3E861D74DD * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void System.TimeSpan::.ctor(System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TimeSpan__ctor_m44268277AFF84DEF6CA3442907CE8116A982FB87 (TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4 * __this, int32_t ___hours0, int32_t ___minutes1, int32_t ___seconds2, const RuntimeMethod* method);
// System.Void System.Security.Cryptography.X509Certificates.X509ChainPolicy::set_UrlRetrievalTimeout(System.TimeSpan)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void X509ChainPolicy_set_UrlRetrievalTimeout_m3BB0D762903D9284505DBE8302FE7B82A9AB1544_inline (X509ChainPolicy_tCA1D9E9842A16ACD71D35E9C36659E3E861D74DD * __this, TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  ___value0, const RuntimeMethod* method);
// System.Void System.Security.Cryptography.X509Certificates.X509ChainPolicy::set_VerificationFlags(System.Security.Cryptography.X509Certificates.X509VerificationFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X509ChainPolicy_set_VerificationFlags_m83653618359EBAC3BBB7DC1424B69CD910F018B8 (X509ChainPolicy_tCA1D9E9842A16ACD71D35E9C36659E3E861D74DD * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Boolean System.Security.Cryptography.X509Certificates.X509Chain::Build(System.Security.Cryptography.X509Certificates.X509Certificate2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool X509Chain_Build_mBFD7D826998357F632892CBB24EDFDDA9B62BCCB (X509Chain_t4A28E9A30CBB331C9B68AE4AFCB30625C6C8B538 * __this, X509Certificate2_tC1C49EB4CFD571C2FFDE940C24BC69651A058F73 * ___certificate0, const RuntimeMethod* method);
// System.Void System.Threading.CancellationTokenSource::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CancellationTokenSource__ctor_m282A9AF96A92487F7B0B391F00F3083C1832A53F (CancellationTokenSource_tF480B7E74A032667AFBD31F0530D619FB43AD3FE * __this, int32_t ___millisecondsDelay0, const RuntimeMethod* method);
// System.Void System.Uri::.ctor(System.Uri,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Uri__ctor_m41A759BF295FB902084DD289849793E01A65A14E (Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E * __this, Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E * ___baseUri0, String_t* ___relativeUri1, const RuntimeMethod* method);
// System.Threading.CancellationToken System.Threading.CancellationTokenSource::get_Token()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CancellationToken_t9E956952F7F20908F2AE72EDF36D97E6C7DB63AB  CancellationTokenSource_get_Token_mBB578AFC3DB427E263C966B2DCA86E6ED1CCBC9B (CancellationTokenSource_tF480B7E74A032667AFBD31F0530D619FB43AD3FE * __this, const RuntimeMethod* method);
// System.Threading.Tasks.Task`1<System.Net.Http.HttpResponseMessage> System.Net.Http.HttpClient::GetAsync(System.Uri,System.Threading.CancellationToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t519CB3A303B53176BD616AC273201D66B84FF270 * HttpClient_GetAsync_m4CC1F79573EF2823DC71095B79E5788D07C26A0F (HttpClient_tC7477E4B30DD5CFE1B41DD9CD2EA1F83DB4DE9E7 * __this, Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E * ___requestUri0, CancellationToken_t9E956952F7F20908F2AE72EDF36D97E6C7DB63AB  ___cancellationToken1, const RuntimeMethod* method);
// System.Runtime.CompilerServices.TaskAwaiter`1<!0> System.Threading.Tasks.Task`1<System.Net.Http.HttpResponseMessage>::GetAwaiter()
inline TaskAwaiter_1_t0CD71BC02837B0D53252196D19DABDA73A615B86  Task_1_GetAwaiter_m511397276BFE6D43B77D1BD80905DF2FB0FA54E0 (Task_1_t519CB3A303B53176BD616AC273201D66B84FF270 * __this, const RuntimeMethod* method)
{
	return ((  TaskAwaiter_1_t0CD71BC02837B0D53252196D19DABDA73A615B86  (*) (Task_1_t519CB3A303B53176BD616AC273201D66B84FF270 *, const RuntimeMethod*))Task_1_GetAwaiter_m9C50610C6F05C1DA9BFA67201CB570F1DE040817_gshared)(__this, method);
}
// System.Boolean System.Runtime.CompilerServices.TaskAwaiter`1<System.Net.Http.HttpResponseMessage>::get_IsCompleted()
inline bool TaskAwaiter_1_get_IsCompleted_m0F711316D40833EE5C67F3E65571EF033B9364DF (TaskAwaiter_1_t0CD71BC02837B0D53252196D19DABDA73A615B86 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (TaskAwaiter_1_t0CD71BC02837B0D53252196D19DABDA73A615B86 *, const RuntimeMethod*))TaskAwaiter_1_get_IsCompleted_mBF435C7EFD03FCF7810FC08EEDC5945F80FF88F9_gshared)(__this, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.IO.Stream>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<System.Net.Http.HttpResponseMessage>,UnityGLTF.Loader.WebRequestLoader/<LoadStreamAsync>d__3>(!!0&,!!1&)
inline void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t0CD71BC02837B0D53252196D19DABDA73A615B86_TisU3CLoadStreamAsyncU3Ed__3_t50DFA3B38506B50EA0F0E43D41F7D967B4E80BC1_m4FCBBF7AE0D3739454DDB5DA971D94BA8F7D9F75 (AsyncTaskMethodBuilder_1_t629F383EABB1E23F4CFEEA0B7A1783E79CB8EF9C * __this, TaskAwaiter_1_t0CD71BC02837B0D53252196D19DABDA73A615B86 * ___awaiter0, U3CLoadStreamAsyncU3Ed__3_t50DFA3B38506B50EA0F0E43D41F7D967B4E80BC1 * ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t629F383EABB1E23F4CFEEA0B7A1783E79CB8EF9C *, TaskAwaiter_1_t0CD71BC02837B0D53252196D19DABDA73A615B86 *, U3CLoadStreamAsyncU3Ed__3_t50DFA3B38506B50EA0F0E43D41F7D967B4E80BC1 *, const RuntimeMethod*))AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t8CDB78D2A4D48E80C35A8FF6FC04A82B9FC35977_TisU3CLoadStreamAsyncU3Ed__3_t50DFA3B38506B50EA0F0E43D41F7D967B4E80BC1_m34E8492AEE7D0D3B922889A25496B7DD042DC455_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// !0 System.Runtime.CompilerServices.TaskAwaiter`1<System.Net.Http.HttpResponseMessage>::GetResult()
inline HttpResponseMessage_t619DB9FDC8E63CDF2D0A314B61A4C6609A43F904 * TaskAwaiter_1_GetResult_m706665648BB29D83FD0C72CFA6279966143192A2 (TaskAwaiter_1_t0CD71BC02837B0D53252196D19DABDA73A615B86 * __this, const RuntimeMethod* method)
{
	return ((  HttpResponseMessage_t619DB9FDC8E63CDF2D0A314B61A4C6609A43F904 * (*) (TaskAwaiter_1_t0CD71BC02837B0D53252196D19DABDA73A615B86 *, const RuntimeMethod*))TaskAwaiter_1_GetResult_m9E148849CD4747E1BDD831E4FB2D7ECFA13C11C8_gshared)(__this, method);
}
// System.Void System.Net.Http.HttpRequestException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HttpRequestException__ctor_m6AAFFF4CC44447AF132DDD7666D3C09A7E665692 (HttpRequestException_tD4D14C20B90F362C83781589E7508A05E7060349 * __this, String_t* ___message0, const RuntimeMethod* method);
// System.Net.Http.HttpResponseMessage System.Net.Http.HttpResponseMessage::EnsureSuccessStatusCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HttpResponseMessage_t619DB9FDC8E63CDF2D0A314B61A4C6609A43F904 * HttpResponseMessage_EnsureSuccessStatusCode_mFC49F01BD731C4FE89B7143E0AA8C6137F372B44 (HttpResponseMessage_t619DB9FDC8E63CDF2D0A314B61A4C6609A43F904 * __this, const RuntimeMethod* method);
// System.Net.Http.HttpContent System.Net.Http.HttpResponseMessage::get_Content()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR HttpContent_t678722F60CA151DD19AFCA917657BE24F111A41D * HttpResponseMessage_get_Content_m325C3E47B0D7E1DD70CA36FA04B894A152AD4420_inline (HttpResponseMessage_t619DB9FDC8E63CDF2D0A314B61A4C6609A43F904 * __this, const RuntimeMethod* method);
// System.Net.Http.Headers.HttpContentHeaders System.Net.Http.HttpContent::get_Headers()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HttpContentHeaders_t98D8657573ADACD807B6C941F46E6D69EDFD13A0 * HttpContent_get_Headers_mCCD2B7D5CA1C1AEE1A78DA2E9036A66A5BCCB942 (HttpContent_t678722F60CA151DD19AFCA917657BE24F111A41D * __this, const RuntimeMethod* method);
// System.Nullable`1<System.Int64> System.Net.Http.Headers.HttpContentHeaders::get_ContentLength()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Nullable_1_t802480A692F4F0D29F2185320296572054FB8C0B  HttpContentHeaders_get_ContentLength_m50A72962BB24A825F66CAD516C1D8B9D0DAFB788 (HttpContentHeaders_t98D8657573ADACD807B6C941F46E6D69EDFD13A0 * __this, const RuntimeMethod* method);
// System.Boolean System.Nullable`1<System.Int64>::get_HasValue()
inline bool Nullable_1_get_HasValue_mF38F300C188F47AC0F03367107EC46D3BAF7DA3E_inline (Nullable_1_t802480A692F4F0D29F2185320296572054FB8C0B * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Nullable_1_t802480A692F4F0D29F2185320296572054FB8C0B *, const RuntimeMethod*))Nullable_1_get_HasValue_mF38F300C188F47AC0F03367107EC46D3BAF7DA3E_gshared_inline)(__this, method);
}
// !0 System.Nullable`1<System.Int64>::GetValueOrDefault()
inline int64_t Nullable_1_GetValueOrDefault_m63142B2DD02998F10B0CC4706DFE488F860763C2_inline (Nullable_1_t802480A692F4F0D29F2185320296572054FB8C0B * __this, const RuntimeMethod* method)
{
	return ((  int64_t (*) (Nullable_1_t802480A692F4F0D29F2185320296572054FB8C0B *, const RuntimeMethod*))Nullable_1_GetValueOrDefault_m63142B2DD02998F10B0CC4706DFE488F860763C2_gshared_inline)(__this, method);
}
// System.Void System.Nullable`1<System.Int32>::.ctor(!0)
inline void Nullable_1__ctor_m11F9C228CFDF836DDFCD7880C09CB4098AB9D7F2 (Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB * __this, int32_t ___value0, const RuntimeMethod* method)
{
	((  void (*) (Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB *, int32_t, const RuntimeMethod*))Nullable_1__ctor_m11F9C228CFDF836DDFCD7880C09CB4098AB9D7F2_gshared)(__this, ___value0, method);
}
// System.Boolean System.Nullable`1<System.Int32>::get_HasValue()
inline bool Nullable_1_get_HasValue_mB664E2C41CADA8413EF8842E6601B8C696A7CE15_inline (Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB *, const RuntimeMethod*))Nullable_1_get_HasValue_mB664E2C41CADA8413EF8842E6601B8C696A7CE15_gshared_inline)(__this, method);
}
// !0 System.Nullable`1<System.Int32>::GetValueOrDefault()
inline int32_t Nullable_1_GetValueOrDefault_mE89BB8F302DF31EE202251F4746859285860B6B6_inline (Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB *, const RuntimeMethod*))Nullable_1_GetValueOrDefault_mE89BB8F302DF31EE202251F4746859285860B6B6_gshared_inline)(__this, method);
}
// System.Void System.IO.MemoryStream::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MemoryStream__ctor_m78689C82DED9ACE5022B7EABF28F17FF318DF2AA (MemoryStream_t495F44B85E6B4DDE2BB7E17DE963256A74E2298C * __this, int32_t ___capacity0, const RuntimeMethod* method);
// System.Threading.Tasks.Task System.Net.Http.HttpContent::CopyToAsync(System.IO.Stream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * HttpContent_CopyToAsync_m6C495863CF9D60460B03EDF285A0D9D7118E130C (HttpContent_t678722F60CA151DD19AFCA917657BE24F111A41D * __this, Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * ___stream0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.IO.Stream>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter,UnityGLTF.Loader.WebRequestLoader/<LoadStreamAsync>d__3>(!!0&,!!1&)
inline void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F_TisU3CLoadStreamAsyncU3Ed__3_t50DFA3B38506B50EA0F0E43D41F7D967B4E80BC1_m9DE022BAE7F86A99DF240A0EF91D8E159FBD24C4 (AsyncTaskMethodBuilder_1_t629F383EABB1E23F4CFEEA0B7A1783E79CB8EF9C * __this, TaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F * ___awaiter0, U3CLoadStreamAsyncU3Ed__3_t50DFA3B38506B50EA0F0E43D41F7D967B4E80BC1 * ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t629F383EABB1E23F4CFEEA0B7A1783E79CB8EF9C *, TaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F *, U3CLoadStreamAsyncU3Ed__3_t50DFA3B38506B50EA0F0E43D41F7D967B4E80BC1 *, const RuntimeMethod*))AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F_TisU3CLoadStreamAsyncU3Ed__3_t50DFA3B38506B50EA0F0E43D41F7D967B4E80BC1_m3FC9CE278F816E0AFA7418C5652142974BF33284_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// System.Void System.Net.Http.HttpResponseMessage::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HttpResponseMessage_Dispose_m61CB38AEE179CB99AC3E5F74D7C09D9D888FAA7F (HttpResponseMessage_t619DB9FDC8E63CDF2D0A314B61A4C6609A43F904 * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.IO.Stream>::SetException(System.Exception)
inline void AsyncTaskMethodBuilder_1_SetException_m3BF8D77ED3E1F97A9BB50B3C7A7E5E97923DDA44 (AsyncTaskMethodBuilder_1_t629F383EABB1E23F4CFEEA0B7A1783E79CB8EF9C * __this, Exception_t * ___exception0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t629F383EABB1E23F4CFEEA0B7A1783E79CB8EF9C *, Exception_t *, const RuntimeMethod*))AsyncTaskMethodBuilder_1_SetException_m4C0B5462ECCB520FACA3C90B353DF596DAAF586D_gshared)(__this, ___exception0, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.IO.Stream>::SetResult(!0)
inline void AsyncTaskMethodBuilder_1_SetResult_m98940FAEAE7AA0A182DF13786E8E2E4F3BCEC2FF (AsyncTaskMethodBuilder_1_t629F383EABB1E23F4CFEEA0B7A1783E79CB8EF9C * __this, Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * ___result0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t629F383EABB1E23F4CFEEA0B7A1783E79CB8EF9C *, Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 *, const RuntimeMethod*))AsyncTaskMethodBuilder_1_SetResult_mD7DA7A17DC0610B11A0AAA364C3CA51FEC1271DB_gshared)(__this, ___result0, method);
}
// System.Void UnityGLTF.Loader.WebRequestLoader/<LoadStreamAsync>d__3::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLoadStreamAsyncU3Ed__3_MoveNext_mE264DF0A267A2DCEDF63AD1DACC975DF65F02317 (U3CLoadStreamAsyncU3Ed__3_t50DFA3B38506B50EA0F0E43D41F7D967B4E80BC1 * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.IO.Stream>::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
inline void AsyncTaskMethodBuilder_1_SetStateMachine_m09A51B661BF01119D6D51465AD8C7F570EFC6AE5 (AsyncTaskMethodBuilder_1_t629F383EABB1E23F4CFEEA0B7A1783E79CB8EF9C * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t629F383EABB1E23F4CFEEA0B7A1783E79CB8EF9C *, RuntimeObject*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_SetStateMachine_m5CC21A02320CF3D2DD7894A31123DFD82A428E4C_gshared)(__this, ___stateMachine0, method);
}
// System.Void UnityGLTF.Loader.WebRequestLoader/<LoadStreamAsync>d__3::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLoadStreamAsyncU3Ed__3_SetStateMachine_mBF19415B6FF1EF325D5688D1657EEA79D6C061D7 (U3CLoadStreamAsyncU3Ed__3_t50DFA3B38506B50EA0F0E43D41F7D967B4E80BC1 * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method);
// System.Void UnityEngine.Application/LowMemoryCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LowMemoryCallback__ctor_m9A428FDE023342AE31B3749FC821B078AEDA2290 (LowMemoryCallback_t3862486677D10CD16ECDA703CFB75039A4B3AE00 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void UnityEngine.Application::add_lowMemory(UnityEngine.Application/LowMemoryCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Application_add_lowMemory_mC747F7C8E7A304125DF3FF98C47DCCFA7CCC32B7 (LowMemoryCallback_t3862486677D10CD16ECDA703CFB75039A4B3AE00 * ___value0, const RuntimeMethod* method);
// System.Void System.OutOfMemoryException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OutOfMemoryException__ctor_m4ED0B5B3F91BAF66BDF69E09EF6DC74777FE8DEB (OutOfMemoryException_t2DF3EAC178583BD1DEFAAECBEDB2AF1EA86FBFC7 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector2__ctor_mEE8FB117AB1F8DB746FB8B3EB4C0DA3BF2A230D0 (Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * __this, float ___x0, float ___y1, const RuntimeMethod* method);
// System.Void UnityGLTF.StandardMap::.ctor(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StandardMap__ctor_mD94FEC0FF5EBEB8E96ED131881460121F90654BA (StandardMap_t3FEC34B6C31267CFE948D5C63C3DFECC4A1C4806 * __this, String_t* ___shaderName0, int32_t ___MaxLOD1, const RuntimeMethod* method);
// System.Void UnityGLTF.StandardMap::.ctor(UnityEngine.Material,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StandardMap__ctor_mE7EFB02723CA25A21A4DB13F51863763B6D93167 (StandardMap_t3FEC34B6C31267CFE948D5C63C3DFECC4A1C4806 * __this, Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___mat0, int32_t ___MaxLOD1, const RuntimeMethod* method);
// System.Void UnityEngine.Material::SetTexture(System.String,UnityEngine.Texture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_SetTexture_mAA0F00FACFE40CFE4BE28A11162E5EEFCC5F5A61 (Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * __this, String_t* ___name0, Texture_t387FE83BB848001FD06B14707AEA6D5A0F6A95F4 * ___value1, const RuntimeMethod* method);
// System.Void UnityEngine.Material::SetTextureOffset(System.String,UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_SetTextureOffset_mAF1B6A6AD9E952262F7AE80B17B31D8FF720ADE7 (Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * __this, String_t* ___name0, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___value1, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Material::GetTextureScale(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  Material_GetTextureScale_m2B1FFB0B67C22C3544E2E66E3E0D5B8DEE7EA859 (Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * __this, String_t* ___name0, const RuntimeMethod* method);
// System.Void UnityEngine.Material::SetTextureScale(System.String,UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_SetTextureScale_m9D9C2ADD50088A1712891A6A2AAAAFA734703BBF (Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * __this, String_t* ___name0, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___value1, const RuntimeMethod* method);
// System.Void UnityEngine.Material::SetColor(System.String,UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_SetColor_mB91EF8CAC3AB3B39D2535BF9F7FECECF3EC2161C (Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * __this, String_t* ___name0, Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  ___value1, const RuntimeMethod* method);
// System.Single UnityEngine.Mathf::Min(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Mathf_Min_mCF9BE0E9CAC9F18D207692BB2DAC7F3E1D4E1CB7 (float ___a0, float ___b1, const RuntimeMethod* method);
// System.Single UnityEngine.Material::GetFloat(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Material_GetFloat_m8A4243FC6619B4E0E820E87754035700FD4913F0 (Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * __this, String_t* ___name0, const RuntimeMethod* method);
// System.Void UnityEngine.Material::SetFloat(System.String,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_SetFloat_m4B7D3FAA00D20BCB3C487E72B7E4B2691D5ECAD2 (Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * __this, String_t* ___name0, float ___value1, const RuntimeMethod* method);
// System.Void UnityEngine.Material::.ctor(UnityEngine.Material)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material__ctor_m0171C6D4D3FD04D58C70808F255DBA67D0ED2BDE (Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * __this, Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___source0, const RuntimeMethod* method);
// System.Void UnityGLTF.MetalRough2StandardMap::.ctor(UnityEngine.Material,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MetalRough2StandardMap__ctor_mB1C233CA445EA5DBCDC38D73EE43FFCA63FFAB95 (MetalRough2StandardMap_tD96C52E5A21D1AEDA6D38D6BF5C1883696E4E6DE * __this, Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___m0, int32_t ___MaxLOD1, const RuntimeMethod* method);
// System.Void UnityGLTF.StandardMap::Copy(UnityGLTF.IUniformMap)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StandardMap_Copy_mB46954EB8DA70A2310FFDCAF0EE90DB82602457D (StandardMap_t3FEC34B6C31267CFE948D5C63C3DFECC4A1C4806 * __this, RuntimeObject* ___o0, const RuntimeMethod* method);
// System.Void UnityGLTF.MetalRough2StandardMap::.ctor(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MetalRough2StandardMap__ctor_m51FF4EA7CDD971F1E6D9F64BFE64F7F432E7AE20 (MetalRough2StandardMap_tD96C52E5A21D1AEDA6D38D6BF5C1883696E4E6DE * __this, String_t* ___shaderName0, int32_t ___MaxLOD1, const RuntimeMethod* method);
// System.Void UnityEngine.Material::EnableKeyword(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_EnableKeyword_m7466758182CBBC40134C9048CDF682DF46F32FA9 (Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * __this, String_t* ___keyword0, const RuntimeMethod* method);
// System.Void UnityGLTF.MetalRoughMap::.ctor(UnityEngine.Material,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MetalRoughMap__ctor_m8D0CD9D66C6585C854816D526D0D01BB29E7CA84 (MetalRoughMap_tF4F2F9C07978591A413F3ECB91DE6EA459A27DDC * __this, Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___m0, int32_t ___MaxLOD1, const RuntimeMethod* method);
// System.Void System.Exception::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Exception__ctor_m5FEC89FBFACEEDCEE29CCFD44A85D72FC28EB0D1 (Exception_t * __this, const RuntimeMethod* method);
// UnityEngine.Vector4 UnityEngine.Vector4::op_Implicit(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  Vector4_op_Implicit_m5BFA8D95F88CB2AEA6E02B200A61B718314A8495 (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___v0, const RuntimeMethod* method);
// System.Void UnityEngine.Material::SetVector(System.String,UnityEngine.Vector4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_SetVector_m6FC2CC4EBE6C45D48D8B9164148A0CB3124335EC (Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * __this, String_t* ___name0, Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  ___value1, const RuntimeMethod* method);
// System.Void UnityGLTF.SpecGloss2StandardMap::.ctor(UnityEngine.Material,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpecGloss2StandardMap__ctor_m29890CEC2EA3A3245F1174C9EB4ACBD2695C73DC (SpecGloss2StandardMap_tDE7C0F9BFC51BA35B3D272A97615586D4DFBF158 * __this, Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___m0, int32_t ___MaxLOD1, const RuntimeMethod* method);
// System.Void UnityGLTF.SpecGloss2StandardMap::.ctor(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpecGloss2StandardMap__ctor_mCE8053B4F2AD2F7B0C5D221535FD3EE9E294D83E (SpecGloss2StandardMap_tDE7C0F9BFC51BA35B3D272A97615586D4DFBF158 * __this, String_t* ___shaderName0, int32_t ___MaxLOD1, const RuntimeMethod* method);
// System.Void UnityGLTF.SpecGlossMap::.ctor(UnityEngine.Material,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpecGlossMap__ctor_m57AFC15B92D682FCAF527ADBFDB4FDDC12CC20F7 (SpecGlossMap_t6C49CAC441F37DFF9D6A99F57A1EE359A82DC110 * __this, Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___m0, int32_t ___MaxLOD1, const RuntimeMethod* method);
// UnityEngine.Shader UnityEngine.Shader::Find(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Shader_tE2731FF351B74AB4186897484FB01E000C1160CA * Shader_Find_m755654AA68D1C663A3E20A10E00CDC10F96C962B (String_t* ___name0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * ___x0, Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * ___y1, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method);
// System.Void UnityGLTF.ShaderNotFoundException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShaderNotFoundException__ctor_m95667D5EB644710A69BEAA4E8DFAFD784ED6D9A6 (ShaderNotFoundException_t20F210948B72AE4B32DA84FE44A94340A5959E01 * __this, String_t* ___message0, const RuntimeMethod* method);
// System.Void UnityEngine.Shader::set_maximumLOD(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Shader_set_maximumLOD_mAF8E3615BB40E1381CDC4110D20D3BB866AFDC4B (Shader_tE2731FF351B74AB4186897484FB01E000C1160CA * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Material::.ctor(UnityEngine.Shader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material__ctor_m81E76B5C1316004F25D4FE9CEC0E78A7428DABA8 (Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * __this, Shader_tE2731FF351B74AB4186897484FB01E000C1160CA * ___shader0, const RuntimeMethod* method);
// UnityEngine.Shader UnityEngine.Material::get_shader()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Shader_tE2731FF351B74AB4186897484FB01E000C1160CA * Material_get_shader_m9CEDCA4D97D42588C6B827400E364E4A8EC55FF0 (Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Material::HasProperty(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Material_HasProperty_m8611FACA6F9D9B2B5C3E92B6D93D2D514B443512 (Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * __this, String_t* ___name0, const RuntimeMethod* method);
// System.Int32 UnityEngine.Material::get_renderQueue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Material_get_renderQueue_mDEC48BD94C93FF5A04BC7190E4B5C56BB6E44140 (Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::LogWarning(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogWarning_m37338644DC81F640CCDFEAE35A223F0E965F0568 (RuntimeObject * ___message0, const RuntimeMethod* method);
// System.Void UnityEngine.Material::SetOverrideTag(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_SetOverrideTag_m773D4D6BE26AA7E1200C76571C6DABC4A53002DB (Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * __this, String_t* ___tag0, String_t* ___val1, const RuntimeMethod* method);
// System.Void UnityEngine.Material::SetInt(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_SetInt_m1FCBDBB985E6A299AE11C3D8AF29BB4D7C7DF278 (Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * __this, String_t* ___name0, int32_t ___value1, const RuntimeMethod* method);
// System.Void UnityEngine.Material::DisableKeyword(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_DisableKeyword_m2ACBFC5D28ED46FF2CF5532F00D702FF62C02ED3 (Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * __this, String_t* ___keyword0, const RuntimeMethod* method);
// System.Void UnityEngine.Material::set_renderQueue(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_set_renderQueue_m02A0C73EC4B9C9D2C2ABFFD777EBDA45C1E1BD4D (Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void System.ThrowHelper::ThrowArgumentOutOfRangeException()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentOutOfRangeException_mBA2AF20A35144E0C43CD721A22EAC9FCA15D6550 (const RuntimeMethod* method);
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityGLTF.GLTFSceneImporter_<LoadJson>d__59::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLoadJsonU3Ed__59_MoveNext_mBF7A396958F0F55A822BDC3D82B17A4CFF015A18 (U3CLoadJsonU3Ed__59_tCCA3845E8F7AC6B17CFC8E14B3623869D204520D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CLoadJsonU3Ed__59_MoveNext_mBF7A396958F0F55A822BDC3D82B17A4CFF015A18_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	GLTFSceneImporter_t29A5109798926C47E5B089376F3E467E78EB710E * V_1 = NULL;
	U3CU3Ec__DisplayClass59_1_t90F861F46C374BE511649433683ED6D305917F53 * V_2 = NULL;
	Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * V_3 = NULL;
	TaskAwaiter_1_tE58F4C544BB434328CC2FB19E47D3E1A9599942C  V_4;
	memset((&V_4), 0, sizeof(V_4));
	U3CU3Ec__DisplayClass59_2_t38C2586B97A5A0799CF34EFCC7F95D39B8CC89E2 * V_5 = NULL;
	Exception_t * V_6 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 3);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		GLTFSceneImporter_t29A5109798926C47E5B089376F3E467E78EB710E * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
	}

IL_000e:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_2 = V_0;
			if (!L_2)
			{
				goto IL_011a;
			}
		}

IL_0014:
		{
			U3CU3Ec__DisplayClass59_0_t52561C113FB61DE90816C347C4AAD7789417775A * L_3 = (U3CU3Ec__DisplayClass59_0_t52561C113FB61DE90816C347C4AAD7789417775A *)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass59_0_t52561C113FB61DE90816C347C4AAD7789417775A_il2cpp_TypeInfo_var);
			U3CU3Ec__DisplayClass59_0__ctor_m036EE3D0793899B55D27C55B6DB8894F1733B9FC(L_3, /*hidden argument*/NULL);
			__this->set_U3CU3E8__1_4(L_3);
			U3CU3Ec__DisplayClass59_0_t52561C113FB61DE90816C347C4AAD7789417775A * L_4 = __this->get_U3CU3E8__1_4();
			GLTFSceneImporter_t29A5109798926C47E5B089376F3E467E78EB710E * L_5 = __this->get_U3CU3E4__this_2();
			NullCheck(L_4);
			L_4->set_U3CU3E4__this_0(L_5);
			U3CU3Ec__DisplayClass59_0_t52561C113FB61DE90816C347C4AAD7789417775A * L_6 = __this->get_U3CU3E8__1_4();
			String_t* L_7 = __this->get_jsonFilePath_3();
			NullCheck(L_6);
			L_6->set_jsonFilePath_2(L_7);
			U3CU3Ec__DisplayClass59_0_t52561C113FB61DE90816C347C4AAD7789417775A * L_8 = __this->get_U3CU3E8__1_4();
			GLTFSceneImporter_t29A5109798926C47E5B089376F3E467E78EB710E * L_9 = V_1;
			NullCheck(L_9);
			ImportOptions_tF7380126D05F8D0CD248534D3C19EA83F20FA88E * L_10 = L_9->get__options_12();
			NullCheck(L_10);
			RuntimeObject* L_11 = L_10->get_DataLoader_1();
			NullCheck(L_8);
			L_8->set_dataLoader2_1(((RuntimeObject*)IsInst((RuntimeObject*)L_11, IDataLoader2_t005D1D7AC6CD2AD5F07EC15BD69562DD99A23B9F_il2cpp_TypeInfo_var)));
			GLTFSceneImporter_t29A5109798926C47E5B089376F3E467E78EB710E * L_12 = V_1;
			NullCheck(L_12);
			bool L_13 = GLTFSceneImporter_get_IsMultithreaded_mB8CA39C18CDD5EAE4DF23693A04711F06A26509A(L_12, /*hidden argument*/NULL);
			if (!L_13)
			{
				goto IL_00cb;
			}
		}

IL_0064:
		{
			U3CU3Ec__DisplayClass59_0_t52561C113FB61DE90816C347C4AAD7789417775A * L_14 = __this->get_U3CU3E8__1_4();
			NullCheck(L_14);
			RuntimeObject* L_15 = L_14->get_dataLoader2_1();
			if (!L_15)
			{
				goto IL_00cb;
			}
		}

IL_0071:
		{
			U3CU3Ec__DisplayClass59_1_t90F861F46C374BE511649433683ED6D305917F53 * L_16 = (U3CU3Ec__DisplayClass59_1_t90F861F46C374BE511649433683ED6D305917F53 *)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass59_1_t90F861F46C374BE511649433683ED6D305917F53_il2cpp_TypeInfo_var);
			U3CU3Ec__DisplayClass59_1__ctor_m3A921C5612D5A3829788ADF4A4D5D4B542A0226D(L_16, /*hidden argument*/NULL);
			V_2 = L_16;
			U3CU3Ec__DisplayClass59_1_t90F861F46C374BE511649433683ED6D305917F53 * L_17 = V_2;
			U3CU3Ec__DisplayClass59_0_t52561C113FB61DE90816C347C4AAD7789417775A * L_18 = __this->get_U3CU3E8__1_4();
			ThreadStart_t09FFA4371E4B2A713F212B157CC9B8B61983B5BF * L_19 = (ThreadStart_t09FFA4371E4B2A713F212B157CC9B8B61983B5BF *)il2cpp_codegen_object_new(ThreadStart_t09FFA4371E4B2A713F212B157CC9B8B61983B5BF_il2cpp_TypeInfo_var);
			ThreadStart__ctor_m692348FEAEBAF381D62984EE95B217CC024A77D5(L_19, L_18, (intptr_t)((intptr_t)U3CU3Ec__DisplayClass59_0_U3CLoadJsonU3Eb__0_mD3955F04F6160C1406A701ABCE4ECB22E3D35BDC_RuntimeMethod_var), /*hidden argument*/NULL);
			Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7 * L_20 = (Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7 *)il2cpp_codegen_object_new(Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7_il2cpp_TypeInfo_var);
			Thread__ctor_m36A33B990160C4499E991D288341CA325AE66DDD(L_20, L_19, /*hidden argument*/NULL);
			NullCheck(L_17);
			L_17->set_loadThread_0(L_20);
			U3CU3Ec__DisplayClass59_1_t90F861F46C374BE511649433683ED6D305917F53 * L_21 = V_2;
			NullCheck(L_21);
			Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7 * L_22 = L_21->get_loadThread_0();
			NullCheck(L_22);
			Thread_set_Priority_m151C92263BC72BE6910D49C7E3DF48BFBAB09F57(L_22, 4, /*hidden argument*/NULL);
			U3CU3Ec__DisplayClass59_1_t90F861F46C374BE511649433683ED6D305917F53 * L_23 = V_2;
			NullCheck(L_23);
			Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7 * L_24 = L_23->get_loadThread_0();
			NullCheck(L_24);
			Thread_Start_mE2AC4744AFD147FDC84E8D9317B4E3AB890BC2D6(L_24, /*hidden argument*/NULL);
			GLTFSceneImporter_t29A5109798926C47E5B089376F3E467E78EB710E * L_25 = V_1;
			U3CU3Ec__DisplayClass59_1_t90F861F46C374BE511649433683ED6D305917F53 * L_26 = V_2;
			Func_1_t4ABD6DAD480574F152452DD6B9C9A55F4F6655F1 * L_27 = (Func_1_t4ABD6DAD480574F152452DD6B9C9A55F4F6655F1 *)il2cpp_codegen_object_new(Func_1_t4ABD6DAD480574F152452DD6B9C9A55F4F6655F1_il2cpp_TypeInfo_var);
			Func_1__ctor_m479BA9DCBE3F496111BD05CC90CB1044C5FFD552(L_27, L_26, (intptr_t)((intptr_t)U3CU3Ec__DisplayClass59_1_U3CLoadJsonU3Eb__1_m737235B9DCE60669DC29703FD3B6B1D9C93686D6_RuntimeMethod_var), /*hidden argument*/Func_1__ctor_m479BA9DCBE3F496111BD05CC90CB1044C5FFD552_RuntimeMethod_var);
			WaitUntil_t012561515C0E1D3DEA19DB3A05444B020C68E13F * L_28 = (WaitUntil_t012561515C0E1D3DEA19DB3A05444B020C68E13F *)il2cpp_codegen_object_new(WaitUntil_t012561515C0E1D3DEA19DB3A05444B020C68E13F_il2cpp_TypeInfo_var);
			WaitUntil__ctor_mC1A43A512B185C55FBE858F741BEA6D4417105C1(L_28, L_27, /*hidden argument*/NULL);
			NullCheck(L_25);
			RuntimeObject* L_29 = GLTFSceneImporter_WaitUntilEnum_mDCCAA73CEE88BF0BDDCA45B123DB4BCC53B53C86(L_25, L_28, /*hidden argument*/NULL);
			GLTFSceneImporter_RunCoroutineSync_m45079B735ACA15FD3026EA5992B78BEC1E0E33E4(L_29, /*hidden argument*/NULL);
			goto IL_014b;
		}

IL_00cb:
		{
			GLTFSceneImporter_t29A5109798926C47E5B089376F3E467E78EB710E * L_30 = V_1;
			NullCheck(L_30);
			ImportOptions_tF7380126D05F8D0CD248534D3C19EA83F20FA88E * L_31 = L_30->get__options_12();
			NullCheck(L_31);
			RuntimeObject* L_32 = L_31->get_DataLoader_1();
			U3CU3Ec__DisplayClass59_0_t52561C113FB61DE90816C347C4AAD7789417775A * L_33 = __this->get_U3CU3E8__1_4();
			NullCheck(L_33);
			String_t* L_34 = L_33->get_jsonFilePath_2();
			NullCheck(L_32);
			Task_1_tAA7557E5A6A8B2C89E44907CB5B0502A618E9D01 * L_35 = InterfaceFuncInvoker1< Task_1_tAA7557E5A6A8B2C89E44907CB5B0502A618E9D01 *, String_t* >::Invoke(0 /* System.Threading.Tasks.Task`1<System.IO.Stream> UnityGLTF.Loader.IDataLoader::LoadStreamAsync(System.String) */, IDataLoader_t244E1A573CB1F06AADF5B2AE87D539279327980F_il2cpp_TypeInfo_var, L_32, L_34);
			NullCheck(L_35);
			TaskAwaiter_1_tE58F4C544BB434328CC2FB19E47D3E1A9599942C  L_36 = Task_1_GetAwaiter_m358260447F895E2AF6EBE2A3D9716FB8F9210CE2(L_35, /*hidden argument*/Task_1_GetAwaiter_m358260447F895E2AF6EBE2A3D9716FB8F9210CE2_RuntimeMethod_var);
			V_4 = L_36;
			bool L_37 = TaskAwaiter_1_get_IsCompleted_m4C040B116179C4D7F75CC5D58D88EEBDFCE065D9((TaskAwaiter_1_tE58F4C544BB434328CC2FB19E47D3E1A9599942C *)(&V_4), /*hidden argument*/TaskAwaiter_1_get_IsCompleted_m4C040B116179C4D7F75CC5D58D88EEBDFCE065D9_RuntimeMethod_var);
			if (L_37)
			{
				goto IL_0137;
			}
		}

IL_00f6:
		{
			int32_t L_38 = 0;
			V_0 = L_38;
			__this->set_U3CU3E1__state_0(L_38);
			TaskAwaiter_1_tE58F4C544BB434328CC2FB19E47D3E1A9599942C  L_39 = V_4;
			__this->set_U3CU3Eu__1_5(L_39);
			AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487 * L_40 = __this->get_address_of_U3CU3Et__builder_1();
			AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_tE58F4C544BB434328CC2FB19E47D3E1A9599942C_TisU3CLoadJsonU3Ed__59_tCCA3845E8F7AC6B17CFC8E14B3623869D204520D_m86326E8BB99292A8220D367A0FCAEB206E0D6519((AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487 *)L_40, (TaskAwaiter_1_tE58F4C544BB434328CC2FB19E47D3E1A9599942C *)(&V_4), (U3CLoadJsonU3Ed__59_tCCA3845E8F7AC6B17CFC8E14B3623869D204520D *)__this, /*hidden argument*/AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_tE58F4C544BB434328CC2FB19E47D3E1A9599942C_TisU3CLoadJsonU3Ed__59_tCCA3845E8F7AC6B17CFC8E14B3623869D204520D_m86326E8BB99292A8220D367A0FCAEB206E0D6519_RuntimeMethod_var);
			goto IL_021c;
		}

IL_011a:
		{
			TaskAwaiter_1_tE58F4C544BB434328CC2FB19E47D3E1A9599942C  L_41 = __this->get_U3CU3Eu__1_5();
			V_4 = L_41;
			TaskAwaiter_1_tE58F4C544BB434328CC2FB19E47D3E1A9599942C * L_42 = __this->get_address_of_U3CU3Eu__1_5();
			il2cpp_codegen_initobj(L_42, sizeof(TaskAwaiter_1_tE58F4C544BB434328CC2FB19E47D3E1A9599942C ));
			int32_t L_43 = (-1);
			V_0 = L_43;
			__this->set_U3CU3E1__state_0(L_43);
		}

IL_0137:
		{
			Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * L_44 = TaskAwaiter_1_GetResult_mE8CC8E02ED729F42AAE54D4D195193A233E98677((TaskAwaiter_1_tE58F4C544BB434328CC2FB19E47D3E1A9599942C *)(&V_4), /*hidden argument*/TaskAwaiter_1_GetResult_mE8CC8E02ED729F42AAE54D4D195193A233E98677_RuntimeMethod_var);
			V_3 = L_44;
			GLTFSceneImporter_t29A5109798926C47E5B089376F3E467E78EB710E * L_45 = V_1;
			NullCheck(L_45);
			GLBStream_t62748985BC9D1878C913AEB01D89B3F28939AB3F * L_46 = L_45->get_address_of__gltfStream_18();
			Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * L_47 = V_3;
			L_46->set_Stream_0(L_47);
		}

IL_014b:
		{
			GLTFSceneImporter_t29A5109798926C47E5B089376F3E467E78EB710E * L_48 = V_1;
			NullCheck(L_48);
			GLBStream_t62748985BC9D1878C913AEB01D89B3F28939AB3F * L_49 = L_48->get_address_of__gltfStream_18();
			L_49->set_StartPosition_1((((int64_t)((int64_t)0))));
			GLTFSceneImporter_t29A5109798926C47E5B089376F3E467E78EB710E * L_50 = V_1;
			NullCheck(L_50);
			bool L_51 = GLTFSceneImporter_get_IsMultithreaded_mB8CA39C18CDD5EAE4DF23693A04711F06A26509A(L_50, /*hidden argument*/NULL);
			if (!L_51)
			{
				goto IL_01cd;
			}
		}

IL_0160:
		{
			U3CU3Ec__DisplayClass59_2_t38C2586B97A5A0799CF34EFCC7F95D39B8CC89E2 * L_52 = (U3CU3Ec__DisplayClass59_2_t38C2586B97A5A0799CF34EFCC7F95D39B8CC89E2 *)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass59_2_t38C2586B97A5A0799CF34EFCC7F95D39B8CC89E2_il2cpp_TypeInfo_var);
			U3CU3Ec__DisplayClass59_2__ctor_mBC51B0AACC477457ED21A35EAD8156D7B7B7F391(L_52, /*hidden argument*/NULL);
			V_5 = L_52;
			U3CU3Ec__DisplayClass59_2_t38C2586B97A5A0799CF34EFCC7F95D39B8CC89E2 * L_53 = V_5;
			U3CU3Ec__DisplayClass59_0_t52561C113FB61DE90816C347C4AAD7789417775A * L_54 = __this->get_U3CU3E8__1_4();
			ThreadStart_t09FFA4371E4B2A713F212B157CC9B8B61983B5BF * L_55 = (ThreadStart_t09FFA4371E4B2A713F212B157CC9B8B61983B5BF *)il2cpp_codegen_object_new(ThreadStart_t09FFA4371E4B2A713F212B157CC9B8B61983B5BF_il2cpp_TypeInfo_var);
			ThreadStart__ctor_m692348FEAEBAF381D62984EE95B217CC024A77D5(L_55, L_54, (intptr_t)((intptr_t)U3CU3Ec__DisplayClass59_0_U3CLoadJsonU3Eb__2_m17A2AC3CCCDEE4821438C9BFC9B4DA75979E5FC3_RuntimeMethod_var), /*hidden argument*/NULL);
			Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7 * L_56 = (Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7 *)il2cpp_codegen_object_new(Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7_il2cpp_TypeInfo_var);
			Thread__ctor_m36A33B990160C4499E991D288341CA325AE66DDD(L_56, L_55, /*hidden argument*/NULL);
			NullCheck(L_53);
			L_53->set_parseJsonThread_0(L_56);
			U3CU3Ec__DisplayClass59_2_t38C2586B97A5A0799CF34EFCC7F95D39B8CC89E2 * L_57 = V_5;
			NullCheck(L_57);
			Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7 * L_58 = L_57->get_parseJsonThread_0();
			NullCheck(L_58);
			Thread_set_Priority_m151C92263BC72BE6910D49C7E3DF48BFBAB09F57(L_58, 4, /*hidden argument*/NULL);
			U3CU3Ec__DisplayClass59_2_t38C2586B97A5A0799CF34EFCC7F95D39B8CC89E2 * L_59 = V_5;
			NullCheck(L_59);
			Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7 * L_60 = L_59->get_parseJsonThread_0();
			NullCheck(L_60);
			Thread_Start_mE2AC4744AFD147FDC84E8D9317B4E3AB890BC2D6(L_60, /*hidden argument*/NULL);
			GLTFSceneImporter_t29A5109798926C47E5B089376F3E467E78EB710E * L_61 = V_1;
			U3CU3Ec__DisplayClass59_2_t38C2586B97A5A0799CF34EFCC7F95D39B8CC89E2 * L_62 = V_5;
			Func_1_t4ABD6DAD480574F152452DD6B9C9A55F4F6655F1 * L_63 = (Func_1_t4ABD6DAD480574F152452DD6B9C9A55F4F6655F1 *)il2cpp_codegen_object_new(Func_1_t4ABD6DAD480574F152452DD6B9C9A55F4F6655F1_il2cpp_TypeInfo_var);
			Func_1__ctor_m479BA9DCBE3F496111BD05CC90CB1044C5FFD552(L_63, L_62, (intptr_t)((intptr_t)U3CU3Ec__DisplayClass59_2_U3CLoadJsonU3Eb__3_m70EA9649429F511E5A7D030A90BDADBB5C22C4E4_RuntimeMethod_var), /*hidden argument*/Func_1__ctor_m479BA9DCBE3F496111BD05CC90CB1044C5FFD552_RuntimeMethod_var);
			WaitUntil_t012561515C0E1D3DEA19DB3A05444B020C68E13F * L_64 = (WaitUntil_t012561515C0E1D3DEA19DB3A05444B020C68E13F *)il2cpp_codegen_object_new(WaitUntil_t012561515C0E1D3DEA19DB3A05444B020C68E13F_il2cpp_TypeInfo_var);
			WaitUntil__ctor_mC1A43A512B185C55FBE858F741BEA6D4417105C1(L_64, L_63, /*hidden argument*/NULL);
			NullCheck(L_61);
			RuntimeObject* L_65 = GLTFSceneImporter_WaitUntilEnum_mDCCAA73CEE88BF0BDDCA45B123DB4BCC53B53C86(L_61, L_64, /*hidden argument*/NULL);
			GLTFSceneImporter_RunCoroutineSync_m45079B735ACA15FD3026EA5992B78BEC1E0E33E4(L_65, /*hidden argument*/NULL);
			GLTFSceneImporter_t29A5109798926C47E5B089376F3E467E78EB710E * L_66 = V_1;
			NullCheck(L_66);
			GLTFRoot_t3CDB3EBE42E8A0E06DD58B35BAD5D98EF44F3A6B * L_67 = L_66->get__gltfRoot_19();
			if (L_67)
			{
				goto IL_01ee;
			}
		}

IL_01c2:
		{
			GLTFLoadException_tE78F0B883637138D8584E658C49315FE15B23B76 * L_68 = (GLTFLoadException_tE78F0B883637138D8584E658C49315FE15B23B76 *)il2cpp_codegen_object_new(GLTFLoadException_tE78F0B883637138D8584E658C49315FE15B23B76_il2cpp_TypeInfo_var);
			GLTFLoadException__ctor_m43DE4A4E693E77E6A56895E31BBA605B4B00324C(L_68, _stringLiteral22297F7A92262F80946846C167D31B71CDA67573, /*hidden argument*/NULL);
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_68, NULL, U3CLoadJsonU3Ed__59_MoveNext_mBF7A396958F0F55A822BDC3D82B17A4CFF015A18_RuntimeMethod_var);
		}

IL_01cd:
		{
			GLTFSceneImporter_t29A5109798926C47E5B089376F3E467E78EB710E * L_69 = V_1;
			NullCheck(L_69);
			GLBStream_t62748985BC9D1878C913AEB01D89B3F28939AB3F * L_70 = L_69->get_address_of__gltfStream_18();
			Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * L_71 = L_70->get_Stream_0();
			GLTFSceneImporter_t29A5109798926C47E5B089376F3E467E78EB710E * L_72 = V_1;
			NullCheck(L_72);
			GLTFRoot_t3CDB3EBE42E8A0E06DD58B35BAD5D98EF44F3A6B ** L_73 = L_72->get_address_of__gltfRoot_19();
			GLTFSceneImporter_t29A5109798926C47E5B089376F3E467E78EB710E * L_74 = V_1;
			NullCheck(L_74);
			GLBStream_t62748985BC9D1878C913AEB01D89B3F28939AB3F * L_75 = L_74->get_address_of__gltfStream_18();
			int64_t L_76 = L_75->get_StartPosition_1();
			GLTFParser_ParseJson_m6AC650175439767ADD863203174136AE29CBE17B(L_71, (GLTFRoot_t3CDB3EBE42E8A0E06DD58B35BAD5D98EF44F3A6B **)L_73, L_76, /*hidden argument*/NULL);
		}

IL_01ee:
		{
			goto IL_0209;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (Exception_t_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_01f0;
		throw e;
	}

CATCH_01f0:
	{ // begin catch(System.Exception)
		V_6 = ((Exception_t *)__exception_local);
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487 * L_77 = __this->get_address_of_U3CU3Et__builder_1();
		Exception_t * L_78 = V_6;
		AsyncTaskMethodBuilder_SetException_m370C484922A63A6EF96E241D1370B8814F1F2D6B((AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487 *)L_77, L_78, /*hidden argument*/NULL);
		goto IL_021c;
	} // end catch (depth: 1)

IL_0209:
	{
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487 * L_79 = __this->get_address_of_U3CU3Et__builder_1();
		AsyncTaskMethodBuilder_SetResult_m151016FB698F3BB34A73BAE693A97513A7E4C838((AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487 *)L_79, /*hidden argument*/NULL);
	}

IL_021c:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CLoadJsonU3Ed__59_MoveNext_mBF7A396958F0F55A822BDC3D82B17A4CFF015A18_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	U3CLoadJsonU3Ed__59_tCCA3845E8F7AC6B17CFC8E14B3623869D204520D * _thisAdjusted = reinterpret_cast<U3CLoadJsonU3Ed__59_tCCA3845E8F7AC6B17CFC8E14B3623869D204520D *>(__this + 1);
	U3CLoadJsonU3Ed__59_MoveNext_mBF7A396958F0F55A822BDC3D82B17A4CFF015A18(_thisAdjusted, method);
}
// System.Void UnityGLTF.GLTFSceneImporter_<LoadJson>d__59::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLoadJsonU3Ed__59_SetStateMachine_m4CECDBECD28C25A2607D87B9C96C92989269811E (U3CLoadJsonU3Ed__59_tCCA3845E8F7AC6B17CFC8E14B3623869D204520D * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	{
		AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487 * L_0 = __this->get_address_of_U3CU3Et__builder_1();
		RuntimeObject* L_1 = ___stateMachine0;
		AsyncTaskMethodBuilder_SetStateMachine_mB5DD68F7C49EA6D452AEBA02B1B98AED898C3C25((AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487 *)L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void U3CLoadJsonU3Ed__59_SetStateMachine_m4CECDBECD28C25A2607D87B9C96C92989269811E_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	U3CLoadJsonU3Ed__59_tCCA3845E8F7AC6B17CFC8E14B3623869D204520D * _thisAdjusted = reinterpret_cast<U3CLoadJsonU3Ed__59_tCCA3845E8F7AC6B17CFC8E14B3623869D204520D *>(__this + 1);
	U3CLoadJsonU3Ed__59_SetStateMachine_m4CECDBECD28C25A2607D87B9C96C92989269811E(_thisAdjusted, ___stateMachine0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityGLTF.GLTFSceneImporter_<LoadMaterialAsync>d__52::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLoadMaterialAsyncU3Ed__52_MoveNext_m1C8A9DE92DF95A4282B74854AC2D634BA25863F2 (U3CLoadMaterialAsyncU3Ed__52_t755573D411A3D57BC63E16A616ED2F064C971F96 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CLoadMaterialAsyncU3Ed__52_MoveNext_m1C8A9DE92DF95A4282B74854AC2D634BA25863F2_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	GLTFSceneImporter_t29A5109798926C47E5B089376F3E467E78EB710E * V_1 = NULL;
	Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * V_2 = NULL;
	TaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F  V_3;
	memset((&V_3), 0, sizeof(V_3));
	Exception_t * V_4 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 3);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		GLTFSceneImporter_t29A5109798926C47E5B089376F3E467E78EB710E * L_1 = __this->get_U3CU3E4__this_3();
		V_1 = L_1;
	}

IL_000e:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_2 = V_0;
			if (!L_2)
			{
				goto IL_0084;
			}
		}

IL_0011:
		{
			U3CU3Ec__DisplayClass52_0_t76D5C75ED384CEF8461B4D071C42B3931697D57F * L_3 = (U3CU3Ec__DisplayClass52_0_t76D5C75ED384CEF8461B4D071C42B3931697D57F *)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass52_0_t76D5C75ED384CEF8461B4D071C42B3931697D57F_il2cpp_TypeInfo_var);
			U3CU3Ec__DisplayClass52_0__ctor_mB59EC4307334A296416D8C01BC389EE99E5BEC13(L_3, /*hidden argument*/NULL);
			__this->set_U3CU3E8__1_4(L_3);
			U3CU3Ec__DisplayClass52_0_t76D5C75ED384CEF8461B4D071C42B3931697D57F * L_4 = __this->get_U3CU3E8__1_4();
			int32_t L_5 = __this->get_materialIndex_2();
			NullCheck(L_4);
			L_4->set_materialIndex_0(L_5);
			U3CU3Ec__DisplayClass52_0_t76D5C75ED384CEF8461B4D071C42B3931697D57F * L_6 = __this->get_U3CU3E8__1_4();
			GLTFSceneImporter_t29A5109798926C47E5B089376F3E467E78EB710E * L_7 = __this->get_U3CU3E4__this_3();
			NullCheck(L_6);
			L_6->set_U3CU3E4__this_1(L_7);
			GLTFSceneImporter_t29A5109798926C47E5B089376F3E467E78EB710E * L_8 = V_1;
			U3CU3Ec__DisplayClass52_0_t76D5C75ED384CEF8461B4D071C42B3931697D57F * L_9 = __this->get_U3CU3E8__1_4();
			Func_1_t864AB9A10EEBC12BC5B32E4C8BD6F0F8E0D2F728 * L_10 = (Func_1_t864AB9A10EEBC12BC5B32E4C8BD6F0F8E0D2F728 *)il2cpp_codegen_object_new(Func_1_t864AB9A10EEBC12BC5B32E4C8BD6F0F8E0D2F728_il2cpp_TypeInfo_var);
			Func_1__ctor_mB6C6C2284F3D9BA4C8910EF439C0F00BA9164FBE(L_10, L_9, (intptr_t)((intptr_t)U3CU3Ec__DisplayClass52_0_U3CLoadMaterialAsyncU3Eb__0_mD8AC385DAFBA56B316CA592183F94A0653D8C2E4_RuntimeMethod_var), /*hidden argument*/Func_1__ctor_mB6C6C2284F3D9BA4C8910EF439C0F00BA9164FBE_RuntimeMethod_var);
			NullCheck(L_8);
			Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * L_11 = GLTFSceneImporter_SetupLoad_m572F73523267B6FAE3DD1FE33B14686102B58F3D(L_8, L_10, /*hidden argument*/NULL);
			NullCheck(L_11);
			TaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F  L_12 = Task_GetAwaiter_m73027D5E4C16E961C658B83526BED8E32FD2AC6C(L_11, /*hidden argument*/NULL);
			V_3 = L_12;
			bool L_13 = TaskAwaiter_get_IsCompleted_m5A2B6FEA0ED3B01B5E88DBF2D8BC4A45652ABD87((TaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F *)(&V_3), /*hidden argument*/NULL);
			if (L_13)
			{
				goto IL_00a0;
			}
		}

IL_0064:
		{
			int32_t L_14 = 0;
			V_0 = L_14;
			__this->set_U3CU3E1__state_0(L_14);
			TaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F  L_15 = V_3;
			__this->set_U3CU3Eu__1_5(L_15);
			AsyncTaskMethodBuilder_1_tC7219A08BD3DD7AA457D88CB3FC2B69ABBED2A73 * L_16 = __this->get_address_of_U3CU3Et__builder_1();
			AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F_TisU3CLoadMaterialAsyncU3Ed__52_t755573D411A3D57BC63E16A616ED2F064C971F96_mDBD9EF90DD6DCD58FFCD18172BC7188023D91FD8((AsyncTaskMethodBuilder_1_tC7219A08BD3DD7AA457D88CB3FC2B69ABBED2A73 *)L_16, (TaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F *)(&V_3), (U3CLoadMaterialAsyncU3Ed__52_t755573D411A3D57BC63E16A616ED2F064C971F96 *)__this, /*hidden argument*/AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F_TisU3CLoadMaterialAsyncU3Ed__52_t755573D411A3D57BC63E16A616ED2F064C971F96_mDBD9EF90DD6DCD58FFCD18172BC7188023D91FD8_RuntimeMethod_var);
			goto IL_00f3;
		}

IL_0084:
		{
			TaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F  L_17 = __this->get_U3CU3Eu__1_5();
			V_3 = L_17;
			TaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F * L_18 = __this->get_address_of_U3CU3Eu__1_5();
			il2cpp_codegen_initobj(L_18, sizeof(TaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F ));
			int32_t L_19 = (-1);
			V_0 = L_19;
			__this->set_U3CU3E1__state_0(L_19);
		}

IL_00a0:
		{
			TaskAwaiter_GetResult_m89868C01592AC2B06CE1FD42D9B9C187C6FD928A((TaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F *)(&V_3), /*hidden argument*/NULL);
			GLTFSceneImporter_t29A5109798926C47E5B089376F3E467E78EB710E * L_20 = V_1;
			NullCheck(L_20);
			AssetCache_tE060C78C9F54F8BF6F50E904460FA53958B59D91 * L_21 = L_20->get__assetCache_20();
			NullCheck(L_21);
			MaterialCacheDataU5BU5D_t9A21B420B621CCFCE6242A807F055E5E17C12B27* L_22 = AssetCache_get_MaterialCache_mA42C6FC4CD177BE95466FAF22EA7C478DF9003CA_inline(L_21, /*hidden argument*/NULL);
			U3CU3Ec__DisplayClass52_0_t76D5C75ED384CEF8461B4D071C42B3931697D57F * L_23 = __this->get_U3CU3E8__1_4();
			NullCheck(L_23);
			int32_t L_24 = L_23->get_materialIndex_0();
			NullCheck(L_22);
			int32_t L_25 = L_24;
			MaterialCacheData_t69ADD85645108393A5E19F1C642F81F977EA57CE * L_26 = (L_22)->GetAt(static_cast<il2cpp_array_size_t>(L_25));
			NullCheck(L_26);
			Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_27 = MaterialCacheData_get_UnityMaterialWithVertexColor_mE5EC415DA4ACACC49E414AF4A454CE3C1F71C1C4_inline(L_26, /*hidden argument*/NULL);
			V_2 = L_27;
			goto IL_00df;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (Exception_t_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_00c6;
		throw e;
	}

CATCH_00c6:
	{ // begin catch(System.Exception)
		V_4 = ((Exception_t *)__exception_local);
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncTaskMethodBuilder_1_tC7219A08BD3DD7AA457D88CB3FC2B69ABBED2A73 * L_28 = __this->get_address_of_U3CU3Et__builder_1();
		Exception_t * L_29 = V_4;
		AsyncTaskMethodBuilder_1_SetException_mC1800976D5170A9941CAD5BFBBD9168F2589174E((AsyncTaskMethodBuilder_1_tC7219A08BD3DD7AA457D88CB3FC2B69ABBED2A73 *)L_28, L_29, /*hidden argument*/AsyncTaskMethodBuilder_1_SetException_mC1800976D5170A9941CAD5BFBBD9168F2589174E_RuntimeMethod_var);
		goto IL_00f3;
	} // end catch (depth: 1)

IL_00df:
	{
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncTaskMethodBuilder_1_tC7219A08BD3DD7AA457D88CB3FC2B69ABBED2A73 * L_30 = __this->get_address_of_U3CU3Et__builder_1();
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_31 = V_2;
		AsyncTaskMethodBuilder_1_SetResult_m3BC9ECED439531875525CF0D8BADDCF1F29C0C03((AsyncTaskMethodBuilder_1_tC7219A08BD3DD7AA457D88CB3FC2B69ABBED2A73 *)L_30, L_31, /*hidden argument*/AsyncTaskMethodBuilder_1_SetResult_m3BC9ECED439531875525CF0D8BADDCF1F29C0C03_RuntimeMethod_var);
	}

IL_00f3:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CLoadMaterialAsyncU3Ed__52_MoveNext_m1C8A9DE92DF95A4282B74854AC2D634BA25863F2_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	U3CLoadMaterialAsyncU3Ed__52_t755573D411A3D57BC63E16A616ED2F064C971F96 * _thisAdjusted = reinterpret_cast<U3CLoadMaterialAsyncU3Ed__52_t755573D411A3D57BC63E16A616ED2F064C971F96 *>(__this + 1);
	U3CLoadMaterialAsyncU3Ed__52_MoveNext_m1C8A9DE92DF95A4282B74854AC2D634BA25863F2(_thisAdjusted, method);
}
// System.Void UnityGLTF.GLTFSceneImporter_<LoadMaterialAsync>d__52::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLoadMaterialAsyncU3Ed__52_SetStateMachine_mCAA4E143B5289A23437E48699A92E99C24B8FA11 (U3CLoadMaterialAsyncU3Ed__52_t755573D411A3D57BC63E16A616ED2F064C971F96 * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CLoadMaterialAsyncU3Ed__52_SetStateMachine_mCAA4E143B5289A23437E48699A92E99C24B8FA11_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		AsyncTaskMethodBuilder_1_tC7219A08BD3DD7AA457D88CB3FC2B69ABBED2A73 * L_0 = __this->get_address_of_U3CU3Et__builder_1();
		RuntimeObject* L_1 = ___stateMachine0;
		AsyncTaskMethodBuilder_1_SetStateMachine_m3D90B0CDCE00AC2F23D6C52093AB4DA114EB0E60((AsyncTaskMethodBuilder_1_tC7219A08BD3DD7AA457D88CB3FC2B69ABBED2A73 *)L_0, L_1, /*hidden argument*/AsyncTaskMethodBuilder_1_SetStateMachine_m3D90B0CDCE00AC2F23D6C52093AB4DA114EB0E60_RuntimeMethod_var);
		return;
	}
}
IL2CPP_EXTERN_C  void U3CLoadMaterialAsyncU3Ed__52_SetStateMachine_mCAA4E143B5289A23437E48699A92E99C24B8FA11_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	U3CLoadMaterialAsyncU3Ed__52_t755573D411A3D57BC63E16A616ED2F064C971F96 * _thisAdjusted = reinterpret_cast<U3CLoadMaterialAsyncU3Ed__52_t755573D411A3D57BC63E16A616ED2F064C971F96 *>(__this + 1);
	U3CLoadMaterialAsyncU3Ed__52_SetStateMachine_mCAA4E143B5289A23437E48699A92E99C24B8FA11(_thisAdjusted, ___stateMachine0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityGLTF.GLTFSceneImporter_<LoadMeshAsync>d__53::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLoadMeshAsyncU3Ed__53_MoveNext_m6C894E6978AC3D3C6C9944D53A80EBF3303241CE (U3CLoadMeshAsyncU3Ed__53_tCB90C821E003B0152A4AAC3CB54BD84D61B8823D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CLoadMeshAsyncU3Ed__53_MoveNext_m6C894E6978AC3D3C6C9944D53A80EBF3303241CE_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	GLTFSceneImporter_t29A5109798926C47E5B089376F3E467E78EB710E * V_1 = NULL;
	Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * V_2 = NULL;
	TaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F  V_3;
	memset((&V_3), 0, sizeof(V_3));
	Exception_t * V_4 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 3);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		GLTFSceneImporter_t29A5109798926C47E5B089376F3E467E78EB710E * L_1 = __this->get_U3CU3E4__this_3();
		V_1 = L_1;
	}

IL_000e:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_2 = V_0;
			if (!L_2)
			{
				goto IL_0098;
			}
		}

IL_0014:
		{
			U3CU3Ec__DisplayClass53_0_t8D4248C7B9839F95826E82E11BB0844C853D00EA * L_3 = (U3CU3Ec__DisplayClass53_0_t8D4248C7B9839F95826E82E11BB0844C853D00EA *)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass53_0_t8D4248C7B9839F95826E82E11BB0844C853D00EA_il2cpp_TypeInfo_var);
			U3CU3Ec__DisplayClass53_0__ctor_m2B3CF7AA83F39700EA60445D04B506832EC77E45(L_3, /*hidden argument*/NULL);
			__this->set_U3CU3E8__1_5(L_3);
			U3CU3Ec__DisplayClass53_0_t8D4248C7B9839F95826E82E11BB0844C853D00EA * L_4 = __this->get_U3CU3E8__1_5();
			int32_t L_5 = __this->get_meshIndex_2();
			NullCheck(L_4);
			L_4->set_meshIndex_0(L_5);
			U3CU3Ec__DisplayClass53_0_t8D4248C7B9839F95826E82E11BB0844C853D00EA * L_6 = __this->get_U3CU3E8__1_5();
			GLTFSceneImporter_t29A5109798926C47E5B089376F3E467E78EB710E * L_7 = __this->get_U3CU3E4__this_3();
			NullCheck(L_6);
			L_6->set_U3CU3E4__this_1(L_7);
			U3CU3Ec__DisplayClass53_0_t8D4248C7B9839F95826E82E11BB0844C853D00EA * L_8 = __this->get_U3CU3E8__1_5();
			CancellationToken_t9E956952F7F20908F2AE72EDF36D97E6C7DB63AB  L_9 = __this->get_cancellationToken_4();
			NullCheck(L_8);
			L_8->set_cancellationToken_2(L_9);
			GLTFSceneImporter_t29A5109798926C47E5B089376F3E467E78EB710E * L_10 = V_1;
			U3CU3Ec__DisplayClass53_0_t8D4248C7B9839F95826E82E11BB0844C853D00EA * L_11 = __this->get_U3CU3E8__1_5();
			Func_1_t864AB9A10EEBC12BC5B32E4C8BD6F0F8E0D2F728 * L_12 = (Func_1_t864AB9A10EEBC12BC5B32E4C8BD6F0F8E0D2F728 *)il2cpp_codegen_object_new(Func_1_t864AB9A10EEBC12BC5B32E4C8BD6F0F8E0D2F728_il2cpp_TypeInfo_var);
			Func_1__ctor_mB6C6C2284F3D9BA4C8910EF439C0F00BA9164FBE(L_12, L_11, (intptr_t)((intptr_t)U3CU3Ec__DisplayClass53_0_U3CLoadMeshAsyncU3Eb__0_m7A9B963606B16984FBFA633F44718F0B0048CFF8_RuntimeMethod_var), /*hidden argument*/Func_1__ctor_mB6C6C2284F3D9BA4C8910EF439C0F00BA9164FBE_RuntimeMethod_var);
			NullCheck(L_10);
			Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * L_13 = GLTFSceneImporter_SetupLoad_m572F73523267B6FAE3DD1FE33B14686102B58F3D(L_10, L_12, /*hidden argument*/NULL);
			NullCheck(L_13);
			TaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F  L_14 = Task_GetAwaiter_m73027D5E4C16E961C658B83526BED8E32FD2AC6C(L_13, /*hidden argument*/NULL);
			V_3 = L_14;
			bool L_15 = TaskAwaiter_get_IsCompleted_m5A2B6FEA0ED3B01B5E88DBF2D8BC4A45652ABD87((TaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F *)(&V_3), /*hidden argument*/NULL);
			if (L_15)
			{
				goto IL_00b4;
			}
		}

IL_0078:
		{
			int32_t L_16 = 0;
			V_0 = L_16;
			__this->set_U3CU3E1__state_0(L_16);
			TaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F  L_17 = V_3;
			__this->set_U3CU3Eu__1_6(L_17);
			AsyncTaskMethodBuilder_1_t50EB7C4D84FEBBDF5495A2EE38949E9E10E51791 * L_18 = __this->get_address_of_U3CU3Et__builder_1();
			AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F_TisU3CLoadMeshAsyncU3Ed__53_tCB90C821E003B0152A4AAC3CB54BD84D61B8823D_m9278F9BCE710F42E3CF9FC6E6AEC175A3FDDDA8A((AsyncTaskMethodBuilder_1_t50EB7C4D84FEBBDF5495A2EE38949E9E10E51791 *)L_18, (TaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F *)(&V_3), (U3CLoadMeshAsyncU3Ed__53_tCB90C821E003B0152A4AAC3CB54BD84D61B8823D *)__this, /*hidden argument*/AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F_TisU3CLoadMeshAsyncU3Ed__53_tCB90C821E003B0152A4AAC3CB54BD84D61B8823D_m9278F9BCE710F42E3CF9FC6E6AEC175A3FDDDA8A_RuntimeMethod_var);
			goto IL_0107;
		}

IL_0098:
		{
			TaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F  L_19 = __this->get_U3CU3Eu__1_6();
			V_3 = L_19;
			TaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F * L_20 = __this->get_address_of_U3CU3Eu__1_6();
			il2cpp_codegen_initobj(L_20, sizeof(TaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F ));
			int32_t L_21 = (-1);
			V_0 = L_21;
			__this->set_U3CU3E1__state_0(L_21);
		}

IL_00b4:
		{
			TaskAwaiter_GetResult_m89868C01592AC2B06CE1FD42D9B9C187C6FD928A((TaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F *)(&V_3), /*hidden argument*/NULL);
			GLTFSceneImporter_t29A5109798926C47E5B089376F3E467E78EB710E * L_22 = V_1;
			NullCheck(L_22);
			AssetCache_tE060C78C9F54F8BF6F50E904460FA53958B59D91 * L_23 = L_22->get__assetCache_20();
			NullCheck(L_23);
			MeshCacheDataU5BU5D_t172934B760B5F101344848AB49BADBC9CAC4E59C* L_24 = AssetCache_get_MeshCache_mD1A34D709653BF94546C48EA7E776725F21E94CE_inline(L_23, /*hidden argument*/NULL);
			U3CU3Ec__DisplayClass53_0_t8D4248C7B9839F95826E82E11BB0844C853D00EA * L_25 = __this->get_U3CU3E8__1_5();
			NullCheck(L_25);
			int32_t L_26 = L_25->get_meshIndex_0();
			NullCheck(L_24);
			int32_t L_27 = L_26;
			MeshCacheData_tDC17655604D5D9B4FF0FFB71FEAB50212603F664 * L_28 = (L_24)->GetAt(static_cast<il2cpp_array_size_t>(L_27));
			NullCheck(L_28);
			Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * L_29 = MeshCacheData_get_LoadedMesh_mF03D281EA79A6092D0208114EF7FFAC344C8F4B2_inline(L_28, /*hidden argument*/NULL);
			V_2 = L_29;
			goto IL_00f3;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (Exception_t_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_00da;
		throw e;
	}

CATCH_00da:
	{ // begin catch(System.Exception)
		V_4 = ((Exception_t *)__exception_local);
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncTaskMethodBuilder_1_t50EB7C4D84FEBBDF5495A2EE38949E9E10E51791 * L_30 = __this->get_address_of_U3CU3Et__builder_1();
		Exception_t * L_31 = V_4;
		AsyncTaskMethodBuilder_1_SetException_m5A75241F31660276EB2924D240A2ACAF3F4F596E((AsyncTaskMethodBuilder_1_t50EB7C4D84FEBBDF5495A2EE38949E9E10E51791 *)L_30, L_31, /*hidden argument*/AsyncTaskMethodBuilder_1_SetException_m5A75241F31660276EB2924D240A2ACAF3F4F596E_RuntimeMethod_var);
		goto IL_0107;
	} // end catch (depth: 1)

IL_00f3:
	{
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncTaskMethodBuilder_1_t50EB7C4D84FEBBDF5495A2EE38949E9E10E51791 * L_32 = __this->get_address_of_U3CU3Et__builder_1();
		Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * L_33 = V_2;
		AsyncTaskMethodBuilder_1_SetResult_mA3E85EE36EC5DD610101048D8EB64F04AB9CC680((AsyncTaskMethodBuilder_1_t50EB7C4D84FEBBDF5495A2EE38949E9E10E51791 *)L_32, L_33, /*hidden argument*/AsyncTaskMethodBuilder_1_SetResult_mA3E85EE36EC5DD610101048D8EB64F04AB9CC680_RuntimeMethod_var);
	}

IL_0107:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CLoadMeshAsyncU3Ed__53_MoveNext_m6C894E6978AC3D3C6C9944D53A80EBF3303241CE_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	U3CLoadMeshAsyncU3Ed__53_tCB90C821E003B0152A4AAC3CB54BD84D61B8823D * _thisAdjusted = reinterpret_cast<U3CLoadMeshAsyncU3Ed__53_tCB90C821E003B0152A4AAC3CB54BD84D61B8823D *>(__this + 1);
	U3CLoadMeshAsyncU3Ed__53_MoveNext_m6C894E6978AC3D3C6C9944D53A80EBF3303241CE(_thisAdjusted, method);
}
// System.Void UnityGLTF.GLTFSceneImporter_<LoadMeshAsync>d__53::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLoadMeshAsyncU3Ed__53_SetStateMachine_m4AE5A7B0A0A181EF2EB9E2A13314A01FD49AF741 (U3CLoadMeshAsyncU3Ed__53_tCB90C821E003B0152A4AAC3CB54BD84D61B8823D * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CLoadMeshAsyncU3Ed__53_SetStateMachine_m4AE5A7B0A0A181EF2EB9E2A13314A01FD49AF741_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		AsyncTaskMethodBuilder_1_t50EB7C4D84FEBBDF5495A2EE38949E9E10E51791 * L_0 = __this->get_address_of_U3CU3Et__builder_1();
		RuntimeObject* L_1 = ___stateMachine0;
		AsyncTaskMethodBuilder_1_SetStateMachine_mF2AF2A969249D4C5163F1C4C517E7C5060869F14((AsyncTaskMethodBuilder_1_t50EB7C4D84FEBBDF5495A2EE38949E9E10E51791 *)L_0, L_1, /*hidden argument*/AsyncTaskMethodBuilder_1_SetStateMachine_mF2AF2A969249D4C5163F1C4C517E7C5060869F14_RuntimeMethod_var);
		return;
	}
}
IL2CPP_EXTERN_C  void U3CLoadMeshAsyncU3Ed__53_SetStateMachine_m4AE5A7B0A0A181EF2EB9E2A13314A01FD49AF741_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	U3CLoadMeshAsyncU3Ed__53_tCB90C821E003B0152A4AAC3CB54BD84D61B8823D * _thisAdjusted = reinterpret_cast<U3CLoadMeshAsyncU3Ed__53_tCB90C821E003B0152A4AAC3CB54BD84D61B8823D *>(__this + 1);
	U3CLoadMeshAsyncU3Ed__53_SetStateMachine_m4AE5A7B0A0A181EF2EB9E2A13314A01FD49AF741(_thisAdjusted, ___stateMachine0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityGLTF.GLTFSceneImporter_<LoadSceneAsync>d__49::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLoadSceneAsyncU3Ed__49_MoveNext_m23A9C2C1357554A7D3E554DBFA861054DDE20B7B (U3CLoadSceneAsyncU3Ed__49_t1B6A25CAC879F95D954154652A4EB3422B957F5B * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CLoadSceneAsyncU3Ed__49_MoveNext_m23A9C2C1357554A7D3E554DBFA861054DDE20B7B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	GLTFSceneImporter_t29A5109798926C47E5B089376F3E467E78EB710E * V_1 = NULL;
	GLTFSceneImporter_t29A5109798926C47E5B089376F3E467E78EB710E * V_2 = NULL;
	bool V_3 = false;
	TaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F  V_4;
	memset((&V_4), 0, sizeof(V_4));
	Exception_t * V_5 = NULL;
	Exception_t * V_6 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 8);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	RuntimeObject* G_B16_0 = NULL;
	RuntimeObject* G_B15_0 = NULL;
	Action_2_tA8345456806B324BA9E2C0C4E51F157CE28878B6 * G_B30_0 = NULL;
	Action_2_tA8345456806B324BA9E2C0C4E51F157CE28878B6 * G_B29_0 = NULL;
	Action_2_tA8345456806B324BA9E2C0C4E51F157CE28878B6 * G_B43_0 = NULL;
	Action_2_tA8345456806B324BA9E2C0C4E51F157CE28878B6 * G_B42_0 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		GLTFSceneImporter_t29A5109798926C47E5B089376F3E467E78EB710E * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
	}

IL_000e:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_2 = V_0;
		}

IL_0013:
		try
		{ // begin try (depth: 2)
			try
			{ // begin try (depth: 3)
				{
					int32_t L_3 = V_0;
					if (!L_3)
					{
						goto IL_00f1;
					}
				}

IL_0019:
				{
					int32_t L_4 = V_0;
					if ((((int32_t)L_4) == ((int32_t)1)))
					{
						goto IL_0191;
					}
				}

IL_0020:
				{
					GLTFSceneImporter_t29A5109798926C47E5B089376F3E467E78EB710E * L_5 = V_1;
					V_2 = L_5;
					V_3 = (bool)0;
				}

IL_0024:
				try
				{ // begin try (depth: 4)
					{
						GLTFSceneImporter_t29A5109798926C47E5B089376F3E467E78EB710E * L_6 = V_2;
						Monitor_Enter_mC5B353DD83A0B0155DF6FBCC4DF5A580C25534C5(L_6, (bool*)(&V_3), /*hidden argument*/NULL);
						GLTFSceneImporter_t29A5109798926C47E5B089376F3E467E78EB710E * L_7 = V_1;
						NullCheck(L_7);
						bool L_8 = L_7->get__isRunning_21();
						if (!L_8)
						{
							goto IL_003f;
						}
					}

IL_0034:
					{
						GLTFLoadException_tE78F0B883637138D8584E658C49315FE15B23B76 * L_9 = (GLTFLoadException_tE78F0B883637138D8584E658C49315FE15B23B76 *)il2cpp_codegen_object_new(GLTFLoadException_tE78F0B883637138D8584E658C49315FE15B23B76_il2cpp_TypeInfo_var);
						GLTFLoadException__ctor_m43DE4A4E693E77E6A56895E31BBA605B4B00324C(L_9, _stringLiteral0C523C1F931D30DE8B4C762B3DCEE84293D2E54D, /*hidden argument*/NULL);
						IL2CPP_RAISE_MANAGED_EXCEPTION(L_9, NULL, U3CLoadSceneAsyncU3Ed__49_MoveNext_m23A9C2C1357554A7D3E554DBFA861054DDE20B7B_RuntimeMethod_var);
					}

IL_003f:
					{
						GLTFSceneImporter_t29A5109798926C47E5B089376F3E467E78EB710E * L_10 = V_1;
						NullCheck(L_10);
						L_10->set__isRunning_21((bool)1);
						IL2CPP_LEAVE(0x56, FINALLY_0048);
					}
				} // end try (depth: 4)
				catch(Il2CppExceptionWrapper& e)
				{
					__last_unhandled_exception = (Exception_t *)e.ex;
					goto FINALLY_0048;
				}

FINALLY_0048:
				{ // begin finally (depth: 4)
					{
						int32_t L_11 = V_0;
						if ((((int32_t)L_11) >= ((int32_t)0)))
						{
							goto IL_0055;
						}
					}

IL_004c:
					{
						bool L_12 = V_3;
						if (!L_12)
						{
							goto IL_0055;
						}
					}

IL_004f:
					{
						GLTFSceneImporter_t29A5109798926C47E5B089376F3E467E78EB710E * L_13 = V_2;
						Monitor_Exit_m49A1E5356D984D0B934BB97A305E2E5E207225C2(L_13, /*hidden argument*/NULL);
					}

IL_0055:
					{
						IL2CPP_END_FINALLY(72)
					}
				} // end finally (depth: 4)
				IL2CPP_CLEANUP(72)
				{
					IL2CPP_JUMP_TBL(0x56, IL_0056)
					IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
				}

IL_0056:
				{
					GLTFSceneImporter_t29A5109798926C47E5B089376F3E467E78EB710E * L_14 = V_1;
					NullCheck(L_14);
					ImportOptions_tF7380126D05F8D0CD248534D3C19EA83F20FA88E * L_15 = L_14->get__options_12();
					NullCheck(L_15);
					bool L_16 = L_15->get_ThrowOnLowMemory_3();
					if (!L_16)
					{
						goto IL_006e;
					}
				}

IL_0063:
				{
					GLTFSceneImporter_t29A5109798926C47E5B089376F3E467E78EB710E * L_17 = V_1;
					MemoryChecker_t6298B1B47ACD98ED696BC66A79E5D5217756BA6A * L_18 = (MemoryChecker_t6298B1B47ACD98ED696BC66A79E5D5217756BA6A *)il2cpp_codegen_object_new(MemoryChecker_t6298B1B47ACD98ED696BC66A79E5D5217756BA6A_il2cpp_TypeInfo_var);
					MemoryChecker__ctor_mE60927E4E5764E4E815287255A88A4C6C4CAED15(L_18, /*hidden argument*/NULL);
					NullCheck(L_17);
					L_17->set__memoryChecker_13(L_18);
				}

IL_006e:
				{
					GLTFSceneImporter_t29A5109798926C47E5B089376F3E467E78EB710E * L_19 = V_1;
					NullCheck(L_19);
					ImportProgress_t4F58A59AEDE43A81DEEE82088082DD48A47DB28D * L_20 = L_19->get_address_of_progressStatus_22();
					il2cpp_codegen_initobj(L_20, sizeof(ImportProgress_t4F58A59AEDE43A81DEEE82088082DD48A47DB28D ));
					GLTFSceneImporter_t29A5109798926C47E5B089376F3E467E78EB710E * L_21 = V_1;
					RuntimeObject* L_22 = __this->get_progress_3();
					NullCheck(L_21);
					L_21->set_progress_23(L_22);
					GLTFSceneImporter_t29A5109798926C47E5B089376F3E467E78EB710E * L_23 = V_1;
					NullCheck(L_23);
					ImportStatistics_t3102F608371E4D5FD73B008F8C3AD4371D9F1FD8 * L_24 = L_23->get_address_of_Statistics_11();
					il2cpp_codegen_initobj(L_24, sizeof(ImportStatistics_t3102F608371E4D5FD73B008F8C3AD4371D9F1FD8 ));
					RuntimeObject* L_25 = __this->get_progress_3();
					RuntimeObject* L_26 = L_25;
					G_B15_0 = L_26;
					if (L_26)
					{
						G_B16_0 = L_26;
						goto IL_009e;
					}
				}

IL_009b:
				{
					goto IL_00a9;
				}

IL_009e:
				{
					GLTFSceneImporter_t29A5109798926C47E5B089376F3E467E78EB710E * L_27 = V_1;
					NullCheck(L_27);
					ImportProgress_t4F58A59AEDE43A81DEEE82088082DD48A47DB28D  L_28 = L_27->get_progressStatus_22();
					NullCheck(G_B16_0);
					InterfaceActionInvoker1< ImportProgress_t4F58A59AEDE43A81DEEE82088082DD48A47DB28D  >::Invoke(0 /* System.Void System.IProgress`1<UnityGLTF.ImportProgress>::Report(!0) */, IProgress_1_t2DFCFB5BE1424BAF654AD0B3CD63A7B4F9D7811C_il2cpp_TypeInfo_var, G_B16_0, L_28);
				}

IL_00a9:
				{
					GLTFSceneImporter_t29A5109798926C47E5B089376F3E467E78EB710E * L_29 = V_1;
					NullCheck(L_29);
					GLTFRoot_t3CDB3EBE42E8A0E06DD58B35BAD5D98EF44F3A6B * L_30 = L_29->get__gltfRoot_19();
					if (L_30)
					{
						goto IL_0121;
					}
				}

IL_00b1:
				{
					GLTFSceneImporter_t29A5109798926C47E5B089376F3E467E78EB710E * L_31 = V_1;
					GLTFSceneImporter_t29A5109798926C47E5B089376F3E467E78EB710E * L_32 = V_1;
					NullCheck(L_32);
					String_t* L_33 = L_32->get__gltfFileName_17();
					NullCheck(L_31);
					Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * L_34 = GLTFSceneImporter_LoadJson_mCA3881A2B72C345F9AA491730D9CF1E6C00BA5B3(L_31, L_33, /*hidden argument*/NULL);
					NullCheck(L_34);
					TaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F  L_35 = Task_GetAwaiter_m73027D5E4C16E961C658B83526BED8E32FD2AC6C(L_34, /*hidden argument*/NULL);
					V_4 = L_35;
					bool L_36 = TaskAwaiter_get_IsCompleted_m5A2B6FEA0ED3B01B5E88DBF2D8BC4A45652ABD87((TaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F *)(&V_4), /*hidden argument*/NULL);
					if (L_36)
					{
						goto IL_010e;
					}
				}

IL_00cd:
				{
					int32_t L_37 = 0;
					V_0 = L_37;
					__this->set_U3CU3E1__state_0(L_37);
					TaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F  L_38 = V_4;
					__this->set_U3CU3Eu__1_8(L_38);
					AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487 * L_39 = __this->get_address_of_U3CU3Et__builder_1();
					AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F_TisU3CLoadSceneAsyncU3Ed__49_t1B6A25CAC879F95D954154652A4EB3422B957F5B_mF9307DBAD6E0FC8633BFD9538A5F6C583D7CEB4D((AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487 *)L_39, (TaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F *)(&V_4), (U3CLoadSceneAsyncU3Ed__49_t1B6A25CAC879F95D954154652A4EB3422B957F5B *)__this, /*hidden argument*/AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F_TisU3CLoadSceneAsyncU3Ed__49_t1B6A25CAC879F95D954154652A4EB3422B957F5B_mF9307DBAD6E0FC8633BFD9538A5F6C583D7CEB4D_RuntimeMethod_var);
					IL2CPP_LEAVE(0x24A, FINALLY_01dc);
				}

IL_00f1:
				{
					TaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F  L_40 = __this->get_U3CU3Eu__1_8();
					V_4 = L_40;
					TaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F * L_41 = __this->get_address_of_U3CU3Eu__1_8();
					il2cpp_codegen_initobj(L_41, sizeof(TaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F ));
					int32_t L_42 = (-1);
					V_0 = L_42;
					__this->set_U3CU3E1__state_0(L_42);
				}

IL_010e:
				{
					TaskAwaiter_GetResult_m89868C01592AC2B06CE1FD42D9B9C187C6FD928A((TaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F *)(&V_4), /*hidden argument*/NULL);
					GLTFSceneImporter_t29A5109798926C47E5B089376F3E467E78EB710E * L_43 = V_1;
					NullCheck(L_43);
					ImportProgress_t4F58A59AEDE43A81DEEE82088082DD48A47DB28D * L_44 = L_43->get_address_of_progressStatus_22();
					L_44->set_IsDownloaded_0((bool)1);
				}

IL_0121:
				{
					CancellationToken_t9E956952F7F20908F2AE72EDF36D97E6C7DB63AB * L_45 = __this->get_address_of_cancellationToken_4();
					CancellationToken_ThrowIfCancellationRequested_m13AB667F961F83D8ED759BA402325638F43B0938((CancellationToken_t9E956952F7F20908F2AE72EDF36D97E6C7DB63AB *)L_45, /*hidden argument*/NULL);
					GLTFSceneImporter_t29A5109798926C47E5B089376F3E467E78EB710E * L_46 = V_1;
					NullCheck(L_46);
					AssetCache_tE060C78C9F54F8BF6F50E904460FA53958B59D91 * L_47 = L_46->get__assetCache_20();
					if (L_47)
					{
						goto IL_0145;
					}
				}

IL_0134:
				{
					GLTFSceneImporter_t29A5109798926C47E5B089376F3E467E78EB710E * L_48 = V_1;
					GLTFSceneImporter_t29A5109798926C47E5B089376F3E467E78EB710E * L_49 = V_1;
					NullCheck(L_49);
					GLTFRoot_t3CDB3EBE42E8A0E06DD58B35BAD5D98EF44F3A6B * L_50 = L_49->get__gltfRoot_19();
					AssetCache_tE060C78C9F54F8BF6F50E904460FA53958B59D91 * L_51 = (AssetCache_tE060C78C9F54F8BF6F50E904460FA53958B59D91 *)il2cpp_codegen_object_new(AssetCache_tE060C78C9F54F8BF6F50E904460FA53958B59D91_il2cpp_TypeInfo_var);
					AssetCache__ctor_m3C03CC6A0178007549D6B4D6AC6C4AAED052566C(L_51, L_50, /*hidden argument*/NULL);
					NullCheck(L_48);
					L_48->set__assetCache_20(L_51);
				}

IL_0145:
				{
					GLTFSceneImporter_t29A5109798926C47E5B089376F3E467E78EB710E * L_52 = V_1;
					int32_t L_53 = __this->get_sceneIndex_5();
					bool L_54 = __this->get_showSceneObj_6();
					CancellationToken_t9E956952F7F20908F2AE72EDF36D97E6C7DB63AB  L_55 = __this->get_cancellationToken_4();
					NullCheck(L_52);
					Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * L_56 = GLTFSceneImporter__LoadScene_m2A20B14C71BFD74C1BD2F899AFC06C5EDB05DC03(L_52, L_53, L_54, L_55, /*hidden argument*/NULL);
					NullCheck(L_56);
					TaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F  L_57 = Task_GetAwaiter_m73027D5E4C16E961C658B83526BED8E32FD2AC6C(L_56, /*hidden argument*/NULL);
					V_4 = L_57;
					bool L_58 = TaskAwaiter_get_IsCompleted_m5A2B6FEA0ED3B01B5E88DBF2D8BC4A45652ABD87((TaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F *)(&V_4), /*hidden argument*/NULL);
					if (L_58)
					{
						goto IL_01ae;
					}
				}

IL_016d:
				{
					int32_t L_59 = 1;
					V_0 = L_59;
					__this->set_U3CU3E1__state_0(L_59);
					TaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F  L_60 = V_4;
					__this->set_U3CU3Eu__1_8(L_60);
					AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487 * L_61 = __this->get_address_of_U3CU3Et__builder_1();
					AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F_TisU3CLoadSceneAsyncU3Ed__49_t1B6A25CAC879F95D954154652A4EB3422B957F5B_mF9307DBAD6E0FC8633BFD9538A5F6C583D7CEB4D((AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487 *)L_61, (TaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F *)(&V_4), (U3CLoadSceneAsyncU3Ed__49_t1B6A25CAC879F95D954154652A4EB3422B957F5B *)__this, /*hidden argument*/AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F_TisU3CLoadSceneAsyncU3Ed__49_t1B6A25CAC879F95D954154652A4EB3422B957F5B_mF9307DBAD6E0FC8633BFD9538A5F6C583D7CEB4D_RuntimeMethod_var);
					IL2CPP_LEAVE(0x24A, FINALLY_01dc);
				}

IL_0191:
				{
					TaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F  L_62 = __this->get_U3CU3Eu__1_8();
					V_4 = L_62;
					TaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F * L_63 = __this->get_address_of_U3CU3Eu__1_8();
					il2cpp_codegen_initobj(L_63, sizeof(TaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F ));
					int32_t L_64 = (-1);
					V_0 = L_64;
					__this->set_U3CU3E1__state_0(L_64);
				}

IL_01ae:
				{
					TaskAwaiter_GetResult_m89868C01592AC2B06CE1FD42D9B9C187C6FD928A((TaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F *)(&V_4), /*hidden argument*/NULL);
					goto IL_01da;
				}
			} // end try (depth: 3)
			catch(Il2CppExceptionWrapper& e)
			{
				__exception_local = (Exception_t *)e.ex;
				if(il2cpp_codegen_class_is_assignable_from (Exception_t_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
					goto CATCH_01b7;
				throw e;
			}

CATCH_01b7:
			{ // begin catch(System.Exception)
				{
					V_5 = ((Exception_t *)__exception_local);
					GLTFSceneImporter_t29A5109798926C47E5B089376F3E467E78EB710E * L_65 = V_1;
					NullCheck(L_65);
					GLTFSceneImporter_Cleanup_mEDA112BFE03960505732686F099C6E8CF5E4B991(L_65, /*hidden argument*/NULL);
					Action_2_tA8345456806B324BA9E2C0C4E51F157CE28878B6 * L_66 = __this->get_onLoadComplete_7();
					Action_2_tA8345456806B324BA9E2C0C4E51F157CE28878B6 * L_67 = L_66;
					G_B29_0 = L_67;
					if (L_67)
					{
						G_B30_0 = L_67;
						goto IL_01cb;
					}
				}

IL_01c8:
				{
					goto IL_01d8;
				}

IL_01cb:
				{
					Exception_t * L_68 = V_5;
					ExceptionDispatchInfo_t0C54083F3909DAF986A4DEAA7C047559531E0E2A * L_69 = ExceptionDispatchInfo_Capture_m8E5F721466EDFE9AA8BC532F9AE7A859E0766E23(L_68, /*hidden argument*/NULL);
					NullCheck(G_B30_0);
					Action_2_Invoke_mB23450FBA9B92A036FA6559F22031C4A2981B46E(G_B30_0, (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)NULL, L_69, /*hidden argument*/Action_2_Invoke_mB23450FBA9B92A036FA6559F22031C4A2981B46E_RuntimeMethod_var);
				}

IL_01d8:
				{
					IL2CPP_RAISE_MANAGED_EXCEPTION(__exception_local, NULL, U3CLoadSceneAsyncU3Ed__49_MoveNext_m23A9C2C1357554A7D3E554DBFA861054DDE20B7B_RuntimeMethod_var);
				}
			} // end catch (depth: 3)

IL_01da:
			{
				IL2CPP_LEAVE(0x204, FINALLY_01dc);
			}
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__last_unhandled_exception = (Exception_t *)e.ex;
			goto FINALLY_01dc;
		}

FINALLY_01dc:
		{ // begin finally (depth: 2)
			{
				int32_t L_70 = V_0;
				if ((((int32_t)L_70) >= ((int32_t)0)))
				{
					goto IL_0203;
				}
			}

IL_01e0:
			{
				GLTFSceneImporter_t29A5109798926C47E5B089376F3E467E78EB710E * L_71 = V_1;
				V_2 = L_71;
				V_3 = (bool)0;
			}

IL_01e4:
			try
			{ // begin try (depth: 3)
				GLTFSceneImporter_t29A5109798926C47E5B089376F3E467E78EB710E * L_72 = V_2;
				Monitor_Enter_mC5B353DD83A0B0155DF6FBCC4DF5A580C25534C5(L_72, (bool*)(&V_3), /*hidden argument*/NULL);
				GLTFSceneImporter_t29A5109798926C47E5B089376F3E467E78EB710E * L_73 = V_1;
				NullCheck(L_73);
				L_73->set__isRunning_21((bool)0);
				IL2CPP_LEAVE(0x203, FINALLY_01f5);
			} // end try (depth: 3)
			catch(Il2CppExceptionWrapper& e)
			{
				__last_unhandled_exception = (Exception_t *)e.ex;
				goto FINALLY_01f5;
			}

FINALLY_01f5:
			{ // begin finally (depth: 3)
				{
					int32_t L_74 = V_0;
					if ((((int32_t)L_74) >= ((int32_t)0)))
					{
						goto IL_0202;
					}
				}

IL_01f9:
				{
					bool L_75 = V_3;
					if (!L_75)
					{
						goto IL_0202;
					}
				}

IL_01fc:
				{
					GLTFSceneImporter_t29A5109798926C47E5B089376F3E467E78EB710E * L_76 = V_2;
					Monitor_Exit_m49A1E5356D984D0B934BB97A305E2E5E207225C2(L_76, /*hidden argument*/NULL);
				}

IL_0202:
				{
					IL2CPP_END_FINALLY(501)
				}
			} // end finally (depth: 3)
			IL2CPP_CLEANUP(501)
			{
				IL2CPP_JUMP_TBL(0x203, IL_0203)
				IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
			}

IL_0203:
			{
				IL2CPP_END_FINALLY(476)
			}
		} // end finally (depth: 2)
		IL2CPP_CLEANUP(476)
		{
			IL2CPP_JUMP_TBL(0x24A, IL_024a)
			IL2CPP_JUMP_TBL(0x204, IL_0204)
			IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		}

IL_0204:
		{
			Action_2_tA8345456806B324BA9E2C0C4E51F157CE28878B6 * L_77 = __this->get_onLoadComplete_7();
			Action_2_tA8345456806B324BA9E2C0C4E51F157CE28878B6 * L_78 = L_77;
			G_B42_0 = L_78;
			if (L_78)
			{
				G_B43_0 = L_78;
				goto IL_0210;
			}
		}

IL_020d:
		{
			goto IL_021c;
		}

IL_0210:
		{
			GLTFSceneImporter_t29A5109798926C47E5B089376F3E467E78EB710E * L_79 = V_1;
			NullCheck(L_79);
			GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_80 = GLTFSceneImporter_get_LastLoadedScene_m2D359392DB0836ACC37C5CE97F57678EA5D9122B_inline(L_79, /*hidden argument*/NULL);
			NullCheck(G_B43_0);
			Action_2_Invoke_mB23450FBA9B92A036FA6559F22031C4A2981B46E(G_B43_0, L_80, (ExceptionDispatchInfo_t0C54083F3909DAF986A4DEAA7C047559531E0E2A *)NULL, /*hidden argument*/Action_2_Invoke_mB23450FBA9B92A036FA6559F22031C4A2981B46E_RuntimeMethod_var);
		}

IL_021c:
		{
			goto IL_0237;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (Exception_t_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_021e;
		throw e;
	}

CATCH_021e:
	{ // begin catch(System.Exception)
		V_6 = ((Exception_t *)__exception_local);
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487 * L_81 = __this->get_address_of_U3CU3Et__builder_1();
		Exception_t * L_82 = V_6;
		AsyncTaskMethodBuilder_SetException_m370C484922A63A6EF96E241D1370B8814F1F2D6B((AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487 *)L_81, L_82, /*hidden argument*/NULL);
		goto IL_024a;
	} // end catch (depth: 1)

IL_0237:
	{
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487 * L_83 = __this->get_address_of_U3CU3Et__builder_1();
		AsyncTaskMethodBuilder_SetResult_m151016FB698F3BB34A73BAE693A97513A7E4C838((AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487 *)L_83, /*hidden argument*/NULL);
	}

IL_024a:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CLoadSceneAsyncU3Ed__49_MoveNext_m23A9C2C1357554A7D3E554DBFA861054DDE20B7B_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	U3CLoadSceneAsyncU3Ed__49_t1B6A25CAC879F95D954154652A4EB3422B957F5B * _thisAdjusted = reinterpret_cast<U3CLoadSceneAsyncU3Ed__49_t1B6A25CAC879F95D954154652A4EB3422B957F5B *>(__this + 1);
	U3CLoadSceneAsyncU3Ed__49_MoveNext_m23A9C2C1357554A7D3E554DBFA861054DDE20B7B(_thisAdjusted, method);
}
// System.Void UnityGLTF.GLTFSceneImporter_<LoadSceneAsync>d__49::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLoadSceneAsyncU3Ed__49_SetStateMachine_mB175D654E4B6101B098CF53CF216B77E68E74FC5 (U3CLoadSceneAsyncU3Ed__49_t1B6A25CAC879F95D954154652A4EB3422B957F5B * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	{
		AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487 * L_0 = __this->get_address_of_U3CU3Et__builder_1();
		RuntimeObject* L_1 = ___stateMachine0;
		AsyncTaskMethodBuilder_SetStateMachine_mB5DD68F7C49EA6D452AEBA02B1B98AED898C3C25((AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487 *)L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void U3CLoadSceneAsyncU3Ed__49_SetStateMachine_mB175D654E4B6101B098CF53CF216B77E68E74FC5_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	U3CLoadSceneAsyncU3Ed__49_t1B6A25CAC879F95D954154652A4EB3422B957F5B * _thisAdjusted = reinterpret_cast<U3CLoadSceneAsyncU3Ed__49_t1B6A25CAC879F95D954154652A4EB3422B957F5B *>(__this + 1);
	U3CLoadSceneAsyncU3Ed__49_SetStateMachine_mB175D654E4B6101B098CF53CF216B77E68E74FC5(_thisAdjusted, ___stateMachine0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityGLTF.GLTFSceneImporter_<LoadTextureAsync>d__90::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLoadTextureAsyncU3Ed__90_MoveNext_mE560D34D16F569E9362802B1BD8BB7C3D3A30A10 (U3CLoadTextureAsyncU3Ed__90_t89527B90B205393BD5B0E5F5DFB152719A50FBEB * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CLoadTextureAsyncU3Ed__90_MoveNext_mE560D34D16F569E9362802B1BD8BB7C3D3A30A10_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	GLTFSceneImporter_t29A5109798926C47E5B089376F3E467E78EB710E * V_1 = NULL;
	GLTFSceneImporter_t29A5109798926C47E5B089376F3E467E78EB710E * V_2 = NULL;
	bool V_3 = false;
	TaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F  V_4;
	memset((&V_4), 0, sizeof(V_4));
	Exception_t * V_5 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 8);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		GLTFSceneImporter_t29A5109798926C47E5B089376F3E467E78EB710E * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
	}

IL_000e:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_2 = V_0;
		}

IL_0013:
		try
		{ // begin try (depth: 2)
			{
				int32_t L_3 = V_0;
				switch (L_3)
				{
					case 0:
					{
						goto IL_00bb;
					}
					case 1:
					{
						goto IL_013e;
					}
					case 2:
					{
						goto IL_01b1;
					}
				}
			}

IL_0025:
			{
				GLTFSceneImporter_t29A5109798926C47E5B089376F3E467E78EB710E * L_4 = V_1;
				V_2 = L_4;
				V_3 = (bool)0;
			}

IL_0029:
			try
			{ // begin try (depth: 3)
				{
					GLTFSceneImporter_t29A5109798926C47E5B089376F3E467E78EB710E * L_5 = V_2;
					Monitor_Enter_mC5B353DD83A0B0155DF6FBCC4DF5A580C25534C5(L_5, (bool*)(&V_3), /*hidden argument*/NULL);
					GLTFSceneImporter_t29A5109798926C47E5B089376F3E467E78EB710E * L_6 = V_1;
					NullCheck(L_6);
					bool L_7 = L_6->get__isRunning_21();
					if (!L_7)
					{
						goto IL_0044;
					}
				}

IL_0039:
				{
					GLTFLoadException_tE78F0B883637138D8584E658C49315FE15B23B76 * L_8 = (GLTFLoadException_tE78F0B883637138D8584E658C49315FE15B23B76 *)il2cpp_codegen_object_new(GLTFLoadException_tE78F0B883637138D8584E658C49315FE15B23B76_il2cpp_TypeInfo_var);
					GLTFLoadException__ctor_m43DE4A4E693E77E6A56895E31BBA605B4B00324C(L_8, _stringLiteralCB8D38FA1E3834D91FFC154D07F1ED7D824EB076, /*hidden argument*/NULL);
					IL2CPP_RAISE_MANAGED_EXCEPTION(L_8, NULL, U3CLoadTextureAsyncU3Ed__90_MoveNext_mE560D34D16F569E9362802B1BD8BB7C3D3A30A10_RuntimeMethod_var);
				}

IL_0044:
				{
					GLTFSceneImporter_t29A5109798926C47E5B089376F3E467E78EB710E * L_9 = V_1;
					NullCheck(L_9);
					L_9->set__isRunning_21((bool)1);
					IL2CPP_LEAVE(0x5B, FINALLY_004d);
				}
			} // end try (depth: 3)
			catch(Il2CppExceptionWrapper& e)
			{
				__last_unhandled_exception = (Exception_t *)e.ex;
				goto FINALLY_004d;
			}

FINALLY_004d:
			{ // begin finally (depth: 3)
				{
					int32_t L_10 = V_0;
					if ((((int32_t)L_10) >= ((int32_t)0)))
					{
						goto IL_005a;
					}
				}

IL_0051:
				{
					bool L_11 = V_3;
					if (!L_11)
					{
						goto IL_005a;
					}
				}

IL_0054:
				{
					GLTFSceneImporter_t29A5109798926C47E5B089376F3E467E78EB710E * L_12 = V_2;
					Monitor_Exit_m49A1E5356D984D0B934BB97A305E2E5E207225C2(L_12, /*hidden argument*/NULL);
				}

IL_005a:
				{
					IL2CPP_END_FINALLY(77)
				}
			} // end finally (depth: 3)
			IL2CPP_CLEANUP(77)
			{
				IL2CPP_JUMP_TBL(0x5B, IL_005b)
				IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
			}

IL_005b:
			{
				GLTFSceneImporter_t29A5109798926C47E5B089376F3E467E78EB710E * L_13 = V_1;
				NullCheck(L_13);
				ImportOptions_tF7380126D05F8D0CD248534D3C19EA83F20FA88E * L_14 = L_13->get__options_12();
				NullCheck(L_14);
				bool L_15 = L_14->get_ThrowOnLowMemory_3();
				if (!L_15)
				{
					goto IL_0073;
				}
			}

IL_0068:
			{
				GLTFSceneImporter_t29A5109798926C47E5B089376F3E467E78EB710E * L_16 = V_1;
				MemoryChecker_t6298B1B47ACD98ED696BC66A79E5D5217756BA6A * L_17 = (MemoryChecker_t6298B1B47ACD98ED696BC66A79E5D5217756BA6A *)il2cpp_codegen_object_new(MemoryChecker_t6298B1B47ACD98ED696BC66A79E5D5217756BA6A_il2cpp_TypeInfo_var);
				MemoryChecker__ctor_mE60927E4E5764E4E815287255A88A4C6C4CAED15(L_17, /*hidden argument*/NULL);
				NullCheck(L_16);
				L_16->set__memoryChecker_13(L_17);
			}

IL_0073:
			{
				GLTFSceneImporter_t29A5109798926C47E5B089376F3E467E78EB710E * L_18 = V_1;
				NullCheck(L_18);
				GLTFRoot_t3CDB3EBE42E8A0E06DD58B35BAD5D98EF44F3A6B * L_19 = L_18->get__gltfRoot_19();
				if (L_19)
				{
					goto IL_00df;
				}
			}

IL_007b:
			{
				GLTFSceneImporter_t29A5109798926C47E5B089376F3E467E78EB710E * L_20 = V_1;
				GLTFSceneImporter_t29A5109798926C47E5B089376F3E467E78EB710E * L_21 = V_1;
				NullCheck(L_21);
				String_t* L_22 = L_21->get__gltfFileName_17();
				NullCheck(L_20);
				Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * L_23 = GLTFSceneImporter_LoadJson_mCA3881A2B72C345F9AA491730D9CF1E6C00BA5B3(L_20, L_22, /*hidden argument*/NULL);
				NullCheck(L_23);
				TaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F  L_24 = Task_GetAwaiter_m73027D5E4C16E961C658B83526BED8E32FD2AC6C(L_23, /*hidden argument*/NULL);
				V_4 = L_24;
				bool L_25 = TaskAwaiter_get_IsCompleted_m5A2B6FEA0ED3B01B5E88DBF2D8BC4A45652ABD87((TaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F *)(&V_4), /*hidden argument*/NULL);
				if (L_25)
				{
					goto IL_00d8;
				}
			}

IL_0097:
			{
				int32_t L_26 = 0;
				V_0 = L_26;
				__this->set_U3CU3E1__state_0(L_26);
				TaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F  L_27 = V_4;
				__this->set_U3CU3Eu__1_7(L_27);
				AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487 * L_28 = __this->get_address_of_U3CU3Et__builder_1();
				AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F_TisU3CLoadTextureAsyncU3Ed__90_t89527B90B205393BD5B0E5F5DFB152719A50FBEB_mADB813CEC003321849DF29ED9ECD06E9E7176EEF((AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487 *)L_28, (TaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F *)(&V_4), (U3CLoadTextureAsyncU3Ed__90_t89527B90B205393BD5B0E5F5DFB152719A50FBEB *)__this, /*hidden argument*/AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F_TisU3CLoadTextureAsyncU3Ed__90_t89527B90B205393BD5B0E5F5DFB152719A50FBEB_mADB813CEC003321849DF29ED9ECD06E9E7176EEF_RuntimeMethod_var);
				IL2CPP_LEAVE(0x22D, FINALLY_01d7);
			}

IL_00bb:
			{
				TaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F  L_29 = __this->get_U3CU3Eu__1_7();
				V_4 = L_29;
				TaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F * L_30 = __this->get_address_of_U3CU3Eu__1_7();
				il2cpp_codegen_initobj(L_30, sizeof(TaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F ));
				int32_t L_31 = (-1);
				V_0 = L_31;
				__this->set_U3CU3E1__state_0(L_31);
			}

IL_00d8:
			{
				TaskAwaiter_GetResult_m89868C01592AC2B06CE1FD42D9B9C187C6FD928A((TaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F *)(&V_4), /*hidden argument*/NULL);
			}

IL_00df:
			{
				GLTFSceneImporter_t29A5109798926C47E5B089376F3E467E78EB710E * L_32 = V_1;
				NullCheck(L_32);
				AssetCache_tE060C78C9F54F8BF6F50E904460FA53958B59D91 * L_33 = L_32->get__assetCache_20();
				if (L_33)
				{
					goto IL_00f8;
				}
			}

IL_00e7:
			{
				GLTFSceneImporter_t29A5109798926C47E5B089376F3E467E78EB710E * L_34 = V_1;
				GLTFSceneImporter_t29A5109798926C47E5B089376F3E467E78EB710E * L_35 = V_1;
				NullCheck(L_35);
				GLTFRoot_t3CDB3EBE42E8A0E06DD58B35BAD5D98EF44F3A6B * L_36 = L_35->get__gltfRoot_19();
				AssetCache_tE060C78C9F54F8BF6F50E904460FA53958B59D91 * L_37 = (AssetCache_tE060C78C9F54F8BF6F50E904460FA53958B59D91 *)il2cpp_codegen_object_new(AssetCache_tE060C78C9F54F8BF6F50E904460FA53958B59D91_il2cpp_TypeInfo_var);
				AssetCache__ctor_m3C03CC6A0178007549D6B4D6AC6C4AAED052566C(L_37, L_36, /*hidden argument*/NULL);
				NullCheck(L_34);
				L_34->set__assetCache_20(L_37);
			}

IL_00f8:
			{
				GLTFSceneImporter_t29A5109798926C47E5B089376F3E467E78EB710E * L_38 = V_1;
				GLTFTexture_t2D12B18E729EBA0BBA4A5B51A991297BDFF7CD65 * L_39 = __this->get_texture_3();
				int32_t L_40 = __this->get_textureIndex_4();
				NullCheck(L_38);
				Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * L_41 = GLTFSceneImporter_ConstructImageBuffer_mB7425D0F22415AE6D02A82D82B6D7DE202D8253A(L_38, L_39, L_40, /*hidden argument*/NULL);
				NullCheck(L_41);
				TaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F  L_42 = Task_GetAwaiter_m73027D5E4C16E961C658B83526BED8E32FD2AC6C(L_41, /*hidden argument*/NULL);
				V_4 = L_42;
				bool L_43 = TaskAwaiter_get_IsCompleted_m5A2B6FEA0ED3B01B5E88DBF2D8BC4A45652ABD87((TaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F *)(&V_4), /*hidden argument*/NULL);
				if (L_43)
				{
					goto IL_015b;
				}
			}

IL_011a:
			{
				int32_t L_44 = 1;
				V_0 = L_44;
				__this->set_U3CU3E1__state_0(L_44);
				TaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F  L_45 = V_4;
				__this->set_U3CU3Eu__1_7(L_45);
				AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487 * L_46 = __this->get_address_of_U3CU3Et__builder_1();
				AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F_TisU3CLoadTextureAsyncU3Ed__90_t89527B90B205393BD5B0E5F5DFB152719A50FBEB_mADB813CEC003321849DF29ED9ECD06E9E7176EEF((AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487 *)L_46, (TaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F *)(&V_4), (U3CLoadTextureAsyncU3Ed__90_t89527B90B205393BD5B0E5F5DFB152719A50FBEB *)__this, /*hidden argument*/AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F_TisU3CLoadTextureAsyncU3Ed__90_t89527B90B205393BD5B0E5F5DFB152719A50FBEB_mADB813CEC003321849DF29ED9ECD06E9E7176EEF_RuntimeMethod_var);
				IL2CPP_LEAVE(0x22D, FINALLY_01d7);
			}

IL_013e:
			{
				TaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F  L_47 = __this->get_U3CU3Eu__1_7();
				V_4 = L_47;
				TaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F * L_48 = __this->get_address_of_U3CU3Eu__1_7();
				il2cpp_codegen_initobj(L_48, sizeof(TaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F ));
				int32_t L_49 = (-1);
				V_0 = L_49;
				__this->set_U3CU3E1__state_0(L_49);
			}

IL_015b:
			{
				TaskAwaiter_GetResult_m89868C01592AC2B06CE1FD42D9B9C187C6FD928A((TaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F *)(&V_4), /*hidden argument*/NULL);
				GLTFSceneImporter_t29A5109798926C47E5B089376F3E467E78EB710E * L_50 = V_1;
				GLTFTexture_t2D12B18E729EBA0BBA4A5B51A991297BDFF7CD65 * L_51 = __this->get_texture_3();
				int32_t L_52 = __this->get_textureIndex_4();
				bool L_53 = __this->get_markGpuOnly_5();
				bool L_54 = __this->get_isLinear_6();
				NullCheck(L_50);
				Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * L_55 = VirtFuncInvoker4< Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 *, GLTFTexture_t2D12B18E729EBA0BBA4A5B51A991297BDFF7CD65 *, int32_t, bool, bool >::Invoke(21 /* System.Threading.Tasks.Task UnityGLTF.GLTFSceneImporter::ConstructTexture(GLTF.Schema.GLTFTexture,System.Int32,System.Boolean,System.Boolean) */, L_50, L_51, L_52, L_53, L_54);
				NullCheck(L_55);
				TaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F  L_56 = Task_GetAwaiter_m73027D5E4C16E961C658B83526BED8E32FD2AC6C(L_55, /*hidden argument*/NULL);
				V_4 = L_56;
				bool L_57 = TaskAwaiter_get_IsCompleted_m5A2B6FEA0ED3B01B5E88DBF2D8BC4A45652ABD87((TaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F *)(&V_4), /*hidden argument*/NULL);
				if (L_57)
				{
					goto IL_01ce;
				}
			}

IL_0190:
			{
				int32_t L_58 = 2;
				V_0 = L_58;
				__this->set_U3CU3E1__state_0(L_58);
				TaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F  L_59 = V_4;
				__this->set_U3CU3Eu__1_7(L_59);
				AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487 * L_60 = __this->get_address_of_U3CU3Et__builder_1();
				AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F_TisU3CLoadTextureAsyncU3Ed__90_t89527B90B205393BD5B0E5F5DFB152719A50FBEB_mADB813CEC003321849DF29ED9ECD06E9E7176EEF((AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487 *)L_60, (TaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F *)(&V_4), (U3CLoadTextureAsyncU3Ed__90_t89527B90B205393BD5B0E5F5DFB152719A50FBEB *)__this, /*hidden argument*/AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F_TisU3CLoadTextureAsyncU3Ed__90_t89527B90B205393BD5B0E5F5DFB152719A50FBEB_mADB813CEC003321849DF29ED9ECD06E9E7176EEF_RuntimeMethod_var);
				IL2CPP_LEAVE(0x22D, FINALLY_01d7);
			}

IL_01b1:
			{
				TaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F  L_61 = __this->get_U3CU3Eu__1_7();
				V_4 = L_61;
				TaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F * L_62 = __this->get_address_of_U3CU3Eu__1_7();
				il2cpp_codegen_initobj(L_62, sizeof(TaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F ));
				int32_t L_63 = (-1);
				V_0 = L_63;
				__this->set_U3CU3E1__state_0(L_63);
			}

IL_01ce:
			{
				TaskAwaiter_GetResult_m89868C01592AC2B06CE1FD42D9B9C187C6FD928A((TaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F *)(&V_4), /*hidden argument*/NULL);
				IL2CPP_LEAVE(0x1FF, FINALLY_01d7);
			}
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__last_unhandled_exception = (Exception_t *)e.ex;
			goto FINALLY_01d7;
		}

FINALLY_01d7:
		{ // begin finally (depth: 2)
			{
				int32_t L_64 = V_0;
				if ((((int32_t)L_64) >= ((int32_t)0)))
				{
					goto IL_01fe;
				}
			}

IL_01db:
			{
				GLTFSceneImporter_t29A5109798926C47E5B089376F3E467E78EB710E * L_65 = V_1;
				V_2 = L_65;
				V_3 = (bool)0;
			}

IL_01df:
			try
			{ // begin try (depth: 3)
				GLTFSceneImporter_t29A5109798926C47E5B089376F3E467E78EB710E * L_66 = V_2;
				Monitor_Enter_mC5B353DD83A0B0155DF6FBCC4DF5A580C25534C5(L_66, (bool*)(&V_3), /*hidden argument*/NULL);
				GLTFSceneImporter_t29A5109798926C47E5B089376F3E467E78EB710E * L_67 = V_1;
				NullCheck(L_67);
				L_67->set__isRunning_21((bool)0);
				IL2CPP_LEAVE(0x1FE, FINALLY_01f0);
			} // end try (depth: 3)
			catch(Il2CppExceptionWrapper& e)
			{
				__last_unhandled_exception = (Exception_t *)e.ex;
				goto FINALLY_01f0;
			}

FINALLY_01f0:
			{ // begin finally (depth: 3)
				{
					int32_t L_68 = V_0;
					if ((((int32_t)L_68) >= ((int32_t)0)))
					{
						goto IL_01fd;
					}
				}

IL_01f4:
				{
					bool L_69 = V_3;
					if (!L_69)
					{
						goto IL_01fd;
					}
				}

IL_01f7:
				{
					GLTFSceneImporter_t29A5109798926C47E5B089376F3E467E78EB710E * L_70 = V_2;
					Monitor_Exit_m49A1E5356D984D0B934BB97A305E2E5E207225C2(L_70, /*hidden argument*/NULL);
				}

IL_01fd:
				{
					IL2CPP_END_FINALLY(496)
				}
			} // end finally (depth: 3)
			IL2CPP_CLEANUP(496)
			{
				IL2CPP_JUMP_TBL(0x1FE, IL_01fe)
				IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
			}

IL_01fe:
			{
				IL2CPP_END_FINALLY(471)
			}
		} // end finally (depth: 2)
		IL2CPP_CLEANUP(471)
		{
			IL2CPP_JUMP_TBL(0x22D, IL_022d)
			IL2CPP_JUMP_TBL(0x1FF, IL_01ff)
			IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		}

IL_01ff:
		{
			goto IL_021a;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (Exception_t_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_0201;
		throw e;
	}

CATCH_0201:
	{ // begin catch(System.Exception)
		V_5 = ((Exception_t *)__exception_local);
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487 * L_71 = __this->get_address_of_U3CU3Et__builder_1();
		Exception_t * L_72 = V_5;
		AsyncTaskMethodBuilder_SetException_m370C484922A63A6EF96E241D1370B8814F1F2D6B((AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487 *)L_71, L_72, /*hidden argument*/NULL);
		goto IL_022d;
	} // end catch (depth: 1)

IL_021a:
	{
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487 * L_73 = __this->get_address_of_U3CU3Et__builder_1();
		AsyncTaskMethodBuilder_SetResult_m151016FB698F3BB34A73BAE693A97513A7E4C838((AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487 *)L_73, /*hidden argument*/NULL);
	}

IL_022d:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CLoadTextureAsyncU3Ed__90_MoveNext_mE560D34D16F569E9362802B1BD8BB7C3D3A30A10_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	U3CLoadTextureAsyncU3Ed__90_t89527B90B205393BD5B0E5F5DFB152719A50FBEB * _thisAdjusted = reinterpret_cast<U3CLoadTextureAsyncU3Ed__90_t89527B90B205393BD5B0E5F5DFB152719A50FBEB *>(__this + 1);
	U3CLoadTextureAsyncU3Ed__90_MoveNext_mE560D34D16F569E9362802B1BD8BB7C3D3A30A10(_thisAdjusted, method);
}
// System.Void UnityGLTF.GLTFSceneImporter_<LoadTextureAsync>d__90::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLoadTextureAsyncU3Ed__90_SetStateMachine_m95DDF3E6D84D74AD1D5705ACC94AEE40D4D2BABB (U3CLoadTextureAsyncU3Ed__90_t89527B90B205393BD5B0E5F5DFB152719A50FBEB * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	{
		AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487 * L_0 = __this->get_address_of_U3CU3Et__builder_1();
		RuntimeObject* L_1 = ___stateMachine0;
		AsyncTaskMethodBuilder_SetStateMachine_mB5DD68F7C49EA6D452AEBA02B1B98AED898C3C25((AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487 *)L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void U3CLoadTextureAsyncU3Ed__90_SetStateMachine_m95DDF3E6D84D74AD1D5705ACC94AEE40D4D2BABB_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	U3CLoadTextureAsyncU3Ed__90_t89527B90B205393BD5B0E5F5DFB152719A50FBEB * _thisAdjusted = reinterpret_cast<U3CLoadTextureAsyncU3Ed__90_t89527B90B205393BD5B0E5F5DFB152719A50FBEB *>(__this + 1);
	U3CLoadTextureAsyncU3Ed__90_SetStateMachine_m95DDF3E6D84D74AD1D5705ACC94AEE40D4D2BABB(_thisAdjusted, ___stateMachine0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityGLTF.GLTFSceneImporter_<SetupBones>d__81::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSetupBonesU3Ed__81_MoveNext_mA170126FA296DE2AA10199060966C1908F018F63 (U3CSetupBonesU3Ed__81_t62772CFE58B2A384226F4D7C2927B56067511DDC * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CSetupBonesU3Ed__81_MoveNext_mA170126FA296DE2AA10199060966C1908F018F63_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	GLTFSceneImporter_t29A5109798926C47E5B089376F3E467E78EB710E * V_1 = NULL;
	int32_t V_2 = 0;
	AttributeAccessor_t54DE63C0FA54991AB605635BD32870BA45E9FF8C * V_3 = NULL;
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * V_4 = NULL;
	TaskAwaiter_1_tAE6B8B90DDB2F4605D3C8F53F1F449F35790A468  V_5;
	memset((&V_5), 0, sizeof(V_5));
	int32_t V_6 = 0;
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * V_7 = NULL;
	NodeId_tB863E2705852710AA05166CD9250E50B3A9FB8F0 * V_8 = NULL;
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * V_9 = NULL;
	Exception_t * V_10 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 5);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	int32_t G_B10_0 = 0;
	Matrix4x4U5BU5D_t1C64F7A0C34058334A8A95BF165F0027690598C9* G_B10_1 = NULL;
	int32_t G_B9_0 = 0;
	Matrix4x4U5BU5D_t1C64F7A0C34058334A8A95BF165F0027690598C9* G_B9_1 = NULL;
	Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  G_B11_0;
	memset((&G_B11_0), 0, sizeof(G_B11_0));
	int32_t G_B11_1 = 0;
	Matrix4x4U5BU5D_t1C64F7A0C34058334A8A95BF165F0027690598C9* G_B11_2 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		GLTFSceneImporter_t29A5109798926C47E5B089376F3E467E78EB710E * L_1 = __this->get_U3CU3E4__this_3();
		V_1 = L_1;
	}

IL_000e:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_2 = V_0;
			switch (L_2)
			{
				case 0:
				{
					goto IL_015a;
				}
				case 1:
				{
					goto IL_0249;
				}
				case 2:
				{
					goto IL_02e6;
				}
			}
		}

IL_0020:
		{
			Skin_t464B07F248F89DD7228D66EAD836CE5B20BB6F34 * L_3 = __this->get_skin_2();
			NullCheck(L_3);
			List_1_t1B89882FA16EC868F9405338766EE999CD21DBAD * L_4 = L_3->get_Joints_7();
			NullCheck(L_4);
			int32_t L_5 = List_1_get_Count_mC38D94CE53B66FE39465261CE2C708B2DA4DCDEF_inline(L_4, /*hidden argument*/List_1_get_Count_mC38D94CE53B66FE39465261CE2C708B2DA4DCDEF_RuntimeMethod_var);
			__this->set_U3CboneCountU3E5__2_6(L_5);
			int32_t L_6 = __this->get_U3CboneCountU3E5__2_6();
			TransformU5BU5D_t4F5A1132877D8BA66ABC0A9A7FADA4E0237A7804* L_7 = (TransformU5BU5D_t4F5A1132877D8BA66ABC0A9A7FADA4E0237A7804*)(TransformU5BU5D_t4F5A1132877D8BA66ABC0A9A7FADA4E0237A7804*)SZArrayNew(TransformU5BU5D_t4F5A1132877D8BA66ABC0A9A7FADA4E0237A7804_il2cpp_TypeInfo_var, (uint32_t)L_6);
			__this->set_U3CbonesU3E5__3_7(L_7);
			__this->set_U3CgltfBindPosesU3E5__4_8((Matrix4x4U5BU5D_tE3A13CB78E1B2CBDCD537180E7C6D83E18B0D9F0*)NULL);
			Skin_t464B07F248F89DD7228D66EAD836CE5B20BB6F34 * L_8 = __this->get_skin_2();
			NullCheck(L_8);
			AccessorId_t6C51102D50B95D309D47FD946FE62ED76C16B83F * L_9 = L_8->get_InverseBindMatrices_5();
			if (!L_9)
			{
				goto IL_00e2;
			}
		}

IL_005e:
		{
			Skin_t464B07F248F89DD7228D66EAD836CE5B20BB6F34 * L_10 = __this->get_skin_2();
			NullCheck(L_10);
			AccessorId_t6C51102D50B95D309D47FD946FE62ED76C16B83F * L_11 = L_10->get_InverseBindMatrices_5();
			NullCheck(L_11);
			Accessor_t89821E647431664D61D135A9BB9FD745EB75744B * L_12 = VirtFuncInvoker0< Accessor_t89821E647431664D61D135A9BB9FD745EB75744B * >::Invoke(4 /* !0 GLTF.Schema.GLTFId`1<GLTF.Schema.Accessor>::get_Value() */, L_11);
			NullCheck(L_12);
			BufferViewId_tAE1D88A5BF8DD1B736DDDF93CEA0D07FE666D871 * L_13 = L_12->get_BufferView_5();
			NullCheck(L_13);
			BufferView_tA426A728440976427358CC00CC2DF72A1FBFED7D * L_14 = VirtFuncInvoker0< BufferView_tA426A728440976427358CC00CC2DF72A1FBFED7D * >::Invoke(4 /* !0 GLTF.Schema.GLTFId`1<GLTF.Schema.BufferView>::get_Value() */, L_13);
			NullCheck(L_14);
			BufferId_t1F12DE28BBFD6A5C038FA14B0BCA46D852CC00F4 * L_15 = L_14->get_Buffer_5();
			NullCheck(L_15);
			int32_t L_16 = ((GLTFId_1_t050A1D4340BD22B23EED14DBBBDEE97C66D39D50 *)L_15)->get_Id_0();
			V_2 = L_16;
			AttributeAccessor_t54DE63C0FA54991AB605635BD32870BA45E9FF8C * L_17 = (AttributeAccessor_t54DE63C0FA54991AB605635BD32870BA45E9FF8C *)il2cpp_codegen_object_new(AttributeAccessor_t54DE63C0FA54991AB605635BD32870BA45E9FF8C_il2cpp_TypeInfo_var);
			AttributeAccessor__ctor_m9DE7776F8AC5156F42438E1199EE1153151D9A49(L_17, /*hidden argument*/NULL);
			AttributeAccessor_t54DE63C0FA54991AB605635BD32870BA45E9FF8C * L_18 = L_17;
			Skin_t464B07F248F89DD7228D66EAD836CE5B20BB6F34 * L_19 = __this->get_skin_2();
			NullCheck(L_19);
			AccessorId_t6C51102D50B95D309D47FD946FE62ED76C16B83F * L_20 = L_19->get_InverseBindMatrices_5();
			NullCheck(L_18);
			AttributeAccessor_set_AccessorId_m0A847BD84D1BEC4B2F56D7C5C8E9FD27E2F10DEB_inline(L_18, L_20, /*hidden argument*/NULL);
			AttributeAccessor_t54DE63C0FA54991AB605635BD32870BA45E9FF8C * L_21 = L_18;
			GLTFSceneImporter_t29A5109798926C47E5B089376F3E467E78EB710E * L_22 = V_1;
			NullCheck(L_22);
			AssetCache_tE060C78C9F54F8BF6F50E904460FA53958B59D91 * L_23 = L_22->get__assetCache_20();
			NullCheck(L_23);
			BufferCacheDataU5BU5D_t090C5C4874ADA45FFD0C6E6B36010DD196C0975E* L_24 = AssetCache_get_BufferCache_mF79FDECEAE54294E62CCB5C0CF780FE2E6472445_inline(L_23, /*hidden argument*/NULL);
			int32_t L_25 = V_2;
			NullCheck(L_24);
			int32_t L_26 = L_25;
			BufferCacheData_t94725215DAEBBBFF691A97822F8744A8038F6743 * L_27 = (L_24)->GetAt(static_cast<il2cpp_array_size_t>(L_26));
			NullCheck(L_27);
			Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * L_28 = BufferCacheData_get_Stream_m846345E05A526E5D993667CB4B1D85A39D764FE1_inline(L_27, /*hidden argument*/NULL);
			NullCheck(L_21);
			AttributeAccessor_set_Stream_m2433EEE74EC014D1E5FAADA0451FE97C2242B70B_inline(L_21, L_28, /*hidden argument*/NULL);
			AttributeAccessor_t54DE63C0FA54991AB605635BD32870BA45E9FF8C * L_29 = L_21;
			GLTFSceneImporter_t29A5109798926C47E5B089376F3E467E78EB710E * L_30 = V_1;
			NullCheck(L_30);
			AssetCache_tE060C78C9F54F8BF6F50E904460FA53958B59D91 * L_31 = L_30->get__assetCache_20();
			NullCheck(L_31);
			BufferCacheDataU5BU5D_t090C5C4874ADA45FFD0C6E6B36010DD196C0975E* L_32 = AssetCache_get_BufferCache_mF79FDECEAE54294E62CCB5C0CF780FE2E6472445_inline(L_31, /*hidden argument*/NULL);
			int32_t L_33 = V_2;
			NullCheck(L_32);
			int32_t L_34 = L_33;
			BufferCacheData_t94725215DAEBBBFF691A97822F8744A8038F6743 * L_35 = (L_32)->GetAt(static_cast<il2cpp_array_size_t>(L_34));
			NullCheck(L_35);
			uint32_t L_36 = BufferCacheData_get_ChunkOffset_m67042555CF1C5521B6417767B6E3873E289B092B_inline(L_35, /*hidden argument*/NULL);
			NullCheck(L_29);
			AttributeAccessor_set_Offset_mE9C82B7E02249CFF716E8BC72044F8A99BFADD93_inline(L_29, L_36, /*hidden argument*/NULL);
			V_3 = L_29;
			GLTFHelpers_BuildBindPoseSamplers_m8558DD5533C044EB2D9DFFFD0277C6BF1EC65806((AttributeAccessor_t54DE63C0FA54991AB605635BD32870BA45E9FF8C **)(&V_3), /*hidden argument*/NULL);
			AttributeAccessor_t54DE63C0FA54991AB605635BD32870BA45E9FF8C * L_37 = V_3;
			NullCheck(L_37);
			NumericArray_t4941F537DC57A0602218632AABDF228987E030E9  L_38 = AttributeAccessor_get_AccessorContent_m440E2D27F4F0017DCC5C80B33F8A37FCBF2244B3_inline(L_37, /*hidden argument*/NULL);
			Matrix4x4U5BU5D_tE3A13CB78E1B2CBDCD537180E7C6D83E18B0D9F0* L_39 = L_38.get_AsMatrix4x4s_5();
			__this->set_U3CgltfBindPosesU3E5__4_8(L_39);
		}

IL_00e2:
		{
			int32_t L_40 = __this->get_U3CboneCountU3E5__2_6();
			Matrix4x4U5BU5D_t1C64F7A0C34058334A8A95BF165F0027690598C9* L_41 = (Matrix4x4U5BU5D_t1C64F7A0C34058334A8A95BF165F0027690598C9*)(Matrix4x4U5BU5D_t1C64F7A0C34058334A8A95BF165F0027690598C9*)SZArrayNew(Matrix4x4U5BU5D_t1C64F7A0C34058334A8A95BF165F0027690598C9_il2cpp_TypeInfo_var, (uint32_t)L_40);
			__this->set_U3CbindPosesU3E5__5_9(L_41);
			__this->set_U3CiU3E5__6_10(0);
			goto IL_01d8;
		}

IL_00ff:
		{
			GLTFSceneImporter_t29A5109798926C47E5B089376F3E467E78EB710E * L_42 = V_1;
			Skin_t464B07F248F89DD7228D66EAD836CE5B20BB6F34 * L_43 = __this->get_skin_2();
			NullCheck(L_43);
			List_1_t1B89882FA16EC868F9405338766EE999CD21DBAD * L_44 = L_43->get_Joints_7();
			int32_t L_45 = __this->get_U3CiU3E5__6_10();
			NullCheck(L_44);
			NodeId_tB863E2705852710AA05166CD9250E50B3A9FB8F0 * L_46 = List_1_get_Item_mAB97D47FFE58B61357761FA45F7BF742BD94E964_inline(L_44, L_45, /*hidden argument*/List_1_get_Item_mAB97D47FFE58B61357761FA45F7BF742BD94E964_RuntimeMethod_var);
			NullCheck(L_46);
			int32_t L_47 = ((GLTFId_1_t03A4FA3C937E0B4939DA3B8F26A7FFF95A506783 *)L_46)->get_Id_0();
			CancellationToken_t9E956952F7F20908F2AE72EDF36D97E6C7DB63AB  L_48 = __this->get_cancellationToken_4();
			NullCheck(L_42);
			Task_1_t5029FFD61E4B10A1E614C1D97F1F0FA5B04557EC * L_49 = GLTFSceneImporter_GetNode_m7D1647D2D937C2C792D0932E3D459DA2845AEF5A(L_42, L_47, L_48, /*hidden argument*/NULL);
			NullCheck(L_49);
			TaskAwaiter_1_tAE6B8B90DDB2F4605D3C8F53F1F449F35790A468  L_50 = Task_1_GetAwaiter_m90E2F1385A9B5545BC25491244E0CEB39C7633AB(L_49, /*hidden argument*/Task_1_GetAwaiter_m90E2F1385A9B5545BC25491244E0CEB39C7633AB_RuntimeMethod_var);
			V_5 = L_50;
			bool L_51 = TaskAwaiter_1_get_IsCompleted_m909D94801484D90689A3F279FF0722556EA3AC30((TaskAwaiter_1_tAE6B8B90DDB2F4605D3C8F53F1F449F35790A468 *)(&V_5), /*hidden argument*/TaskAwaiter_1_get_IsCompleted_m909D94801484D90689A3F279FF0722556EA3AC30_RuntimeMethod_var);
			if (L_51)
			{
				goto IL_0177;
			}
		}

IL_0136:
		{
			int32_t L_52 = 0;
			V_0 = L_52;
			__this->set_U3CU3E1__state_0(L_52);
			TaskAwaiter_1_tAE6B8B90DDB2F4605D3C8F53F1F449F35790A468  L_53 = V_5;
			__this->set_U3CU3Eu__1_11(L_53);
			AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487 * L_54 = __this->get_address_of_U3CU3Et__builder_1();
			AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_tAE6B8B90DDB2F4605D3C8F53F1F449F35790A468_TisU3CSetupBonesU3Ed__81_t62772CFE58B2A384226F4D7C2927B56067511DDC_m6AACCF3E83D59FCCF856D1ECB605ED655C946DFD((AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487 *)L_54, (TaskAwaiter_1_tAE6B8B90DDB2F4605D3C8F53F1F449F35790A468 *)(&V_5), (U3CSetupBonesU3Ed__81_t62772CFE58B2A384226F4D7C2927B56067511DDC *)__this, /*hidden argument*/AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_tAE6B8B90DDB2F4605D3C8F53F1F449F35790A468_TisU3CSetupBonesU3Ed__81_t62772CFE58B2A384226F4D7C2927B56067511DDC_m6AACCF3E83D59FCCF856D1ECB605ED655C946DFD_RuntimeMethod_var);
			goto IL_0380;
		}

IL_015a:
		{
			TaskAwaiter_1_tAE6B8B90DDB2F4605D3C8F53F1F449F35790A468  L_55 = __this->get_U3CU3Eu__1_11();
			V_5 = L_55;
			TaskAwaiter_1_tAE6B8B90DDB2F4605D3C8F53F1F449F35790A468 * L_56 = __this->get_address_of_U3CU3Eu__1_11();
			il2cpp_codegen_initobj(L_56, sizeof(TaskAwaiter_1_tAE6B8B90DDB2F4605D3C8F53F1F449F35790A468 ));
			int32_t L_57 = (-1);
			V_0 = L_57;
			__this->set_U3CU3E1__state_0(L_57);
		}

IL_0177:
		{
			GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_58 = TaskAwaiter_1_GetResult_m3203645289A2AA352E87023E38460D33B2FE4D16((TaskAwaiter_1_tAE6B8B90DDB2F4605D3C8F53F1F449F35790A468 *)(&V_5), /*hidden argument*/TaskAwaiter_1_GetResult_m3203645289A2AA352E87023E38460D33B2FE4D16_RuntimeMethod_var);
			V_4 = L_58;
			TransformU5BU5D_t4F5A1132877D8BA66ABC0A9A7FADA4E0237A7804* L_59 = __this->get_U3CbonesU3E5__3_7();
			int32_t L_60 = __this->get_U3CiU3E5__6_10();
			GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_61 = V_4;
			NullCheck(L_61);
			Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_62 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_61, /*hidden argument*/NULL);
			NullCheck(L_59);
			ArrayElementTypeCheck (L_59, L_62);
			(L_59)->SetAt(static_cast<il2cpp_array_size_t>(L_60), (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA *)L_62);
			Matrix4x4U5BU5D_t1C64F7A0C34058334A8A95BF165F0027690598C9* L_63 = __this->get_U3CbindPosesU3E5__5_9();
			int32_t L_64 = __this->get_U3CiU3E5__6_10();
			Matrix4x4U5BU5D_tE3A13CB78E1B2CBDCD537180E7C6D83E18B0D9F0* L_65 = __this->get_U3CgltfBindPosesU3E5__4_8();
			G_B9_0 = L_64;
			G_B9_1 = L_63;
			if (L_65)
			{
				G_B10_0 = L_64;
				G_B10_1 = L_63;
				goto IL_01af;
			}
		}

IL_01a8:
		{
			IL2CPP_RUNTIME_CLASS_INIT(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA_il2cpp_TypeInfo_var);
			Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  L_66 = Matrix4x4_get_identity_mA0CECDE2A5E85CF014375084624F3770B5B7B79B(/*hidden argument*/NULL);
			G_B11_0 = L_66;
			G_B11_1 = G_B9_0;
			G_B11_2 = G_B9_1;
			goto IL_01c1;
		}

IL_01af:
		{
			Matrix4x4U5BU5D_tE3A13CB78E1B2CBDCD537180E7C6D83E18B0D9F0* L_67 = __this->get_U3CgltfBindPosesU3E5__4_8();
			int32_t L_68 = __this->get_U3CiU3E5__6_10();
			NullCheck(L_67);
			int32_t L_69 = L_68;
			Matrix4x4_t43BAF443FBFCE8DA422507220B68CDD4CA7F19D9 * L_70 = (L_67)->GetAt(static_cast<il2cpp_array_size_t>(L_69));
			IL2CPP_RUNTIME_CLASS_INIT(SchemaExtensions_t820BEEDB948F1A3AAF4E70186B859D496E874EC3_il2cpp_TypeInfo_var);
			Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  L_71 = SchemaExtensions_ToUnityMatrix4x4Convert_m7C719C8578F611BE256F57C3F03025333460A2B6(L_70, /*hidden argument*/NULL);
			G_B11_0 = L_71;
			G_B11_1 = G_B10_0;
			G_B11_2 = G_B10_1;
		}

IL_01c1:
		{
			NullCheck(G_B11_2);
			(G_B11_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B11_1), (Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA )G_B11_0);
			int32_t L_72 = __this->get_U3CiU3E5__6_10();
			V_6 = L_72;
			int32_t L_73 = V_6;
			__this->set_U3CiU3E5__6_10(((int32_t)il2cpp_codegen_add((int32_t)L_73, (int32_t)1)));
		}

IL_01d8:
		{
			int32_t L_74 = __this->get_U3CiU3E5__6_10();
			int32_t L_75 = __this->get_U3CboneCountU3E5__2_6();
			if ((((int32_t)L_74) < ((int32_t)L_75)))
			{
				goto IL_00ff;
			}
		}

IL_01e9:
		{
			Skin_t464B07F248F89DD7228D66EAD836CE5B20BB6F34 * L_76 = __this->get_skin_2();
			NullCheck(L_76);
			NodeId_tB863E2705852710AA05166CD9250E50B3A9FB8F0 * L_77 = L_76->get_Skeleton_6();
			if (!L_77)
			{
				goto IL_0286;
			}
		}

IL_01f9:
		{
			GLTFSceneImporter_t29A5109798926C47E5B089376F3E467E78EB710E * L_78 = V_1;
			Skin_t464B07F248F89DD7228D66EAD836CE5B20BB6F34 * L_79 = __this->get_skin_2();
			NullCheck(L_79);
			NodeId_tB863E2705852710AA05166CD9250E50B3A9FB8F0 * L_80 = L_79->get_Skeleton_6();
			NullCheck(L_80);
			int32_t L_81 = ((GLTFId_1_t03A4FA3C937E0B4939DA3B8F26A7FFF95A506783 *)L_80)->get_Id_0();
			CancellationToken_t9E956952F7F20908F2AE72EDF36D97E6C7DB63AB  L_82 = __this->get_cancellationToken_4();
			NullCheck(L_78);
			Task_1_t5029FFD61E4B10A1E614C1D97F1F0FA5B04557EC * L_83 = GLTFSceneImporter_GetNode_m7D1647D2D937C2C792D0932E3D459DA2845AEF5A(L_78, L_81, L_82, /*hidden argument*/NULL);
			NullCheck(L_83);
			TaskAwaiter_1_tAE6B8B90DDB2F4605D3C8F53F1F449F35790A468  L_84 = Task_1_GetAwaiter_m90E2F1385A9B5545BC25491244E0CEB39C7633AB(L_83, /*hidden argument*/Task_1_GetAwaiter_m90E2F1385A9B5545BC25491244E0CEB39C7633AB_RuntimeMethod_var);
			V_5 = L_84;
			bool L_85 = TaskAwaiter_1_get_IsCompleted_m909D94801484D90689A3F279FF0722556EA3AC30((TaskAwaiter_1_tAE6B8B90DDB2F4605D3C8F53F1F449F35790A468 *)(&V_5), /*hidden argument*/TaskAwaiter_1_get_IsCompleted_m909D94801484D90689A3F279FF0722556EA3AC30_RuntimeMethod_var);
			if (L_85)
			{
				goto IL_0266;
			}
		}

IL_0225:
		{
			int32_t L_86 = 1;
			V_0 = L_86;
			__this->set_U3CU3E1__state_0(L_86);
			TaskAwaiter_1_tAE6B8B90DDB2F4605D3C8F53F1F449F35790A468  L_87 = V_5;
			__this->set_U3CU3Eu__1_11(L_87);
			AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487 * L_88 = __this->get_address_of_U3CU3Et__builder_1();
			AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_tAE6B8B90DDB2F4605D3C8F53F1F449F35790A468_TisU3CSetupBonesU3Ed__81_t62772CFE58B2A384226F4D7C2927B56067511DDC_m6AACCF3E83D59FCCF856D1ECB605ED655C946DFD((AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487 *)L_88, (TaskAwaiter_1_tAE6B8B90DDB2F4605D3C8F53F1F449F35790A468 *)(&V_5), (U3CSetupBonesU3Ed__81_t62772CFE58B2A384226F4D7C2927B56067511DDC *)__this, /*hidden argument*/AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_tAE6B8B90DDB2F4605D3C8F53F1F449F35790A468_TisU3CSetupBonesU3Ed__81_t62772CFE58B2A384226F4D7C2927B56067511DDC_m6AACCF3E83D59FCCF856D1ECB605ED655C946DFD_RuntimeMethod_var);
			goto IL_0380;
		}

IL_0249:
		{
			TaskAwaiter_1_tAE6B8B90DDB2F4605D3C8F53F1F449F35790A468  L_89 = __this->get_U3CU3Eu__1_11();
			V_5 = L_89;
			TaskAwaiter_1_tAE6B8B90DDB2F4605D3C8F53F1F449F35790A468 * L_90 = __this->get_address_of_U3CU3Eu__1_11();
			il2cpp_codegen_initobj(L_90, sizeof(TaskAwaiter_1_tAE6B8B90DDB2F4605D3C8F53F1F449F35790A468 ));
			int32_t L_91 = (-1);
			V_0 = L_91;
			__this->set_U3CU3E1__state_0(L_91);
		}

IL_0266:
		{
			GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_92 = TaskAwaiter_1_GetResult_m3203645289A2AA352E87023E38460D33B2FE4D16((TaskAwaiter_1_tAE6B8B90DDB2F4605D3C8F53F1F449F35790A468 *)(&V_5), /*hidden argument*/TaskAwaiter_1_GetResult_m3203645289A2AA352E87023E38460D33B2FE4D16_RuntimeMethod_var);
			V_7 = L_92;
			SkinnedMeshRenderer_tFC8103EE7842F7F8A98BEF0C855D32A9711B7B65 * L_93 = __this->get_renderer_5();
			GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_94 = V_7;
			NullCheck(L_94);
			Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_95 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_94, /*hidden argument*/NULL);
			NullCheck(L_93);
			SkinnedMeshRenderer_set_rootBone_mBC4EA4CFD91C1FA593D17233AC70E1E219F24C21(L_93, L_95, /*hidden argument*/NULL);
			goto IL_032b;
		}

IL_0286:
		{
			Skin_t464B07F248F89DD7228D66EAD836CE5B20BB6F34 * L_96 = __this->get_skin_2();
			NullCheck(L_96);
			List_1_t1B89882FA16EC868F9405338766EE999CD21DBAD * L_97 = L_96->get_Joints_7();
			NodeId_tB863E2705852710AA05166CD9250E50B3A9FB8F0 * L_98 = GLTFHelpers_FindCommonAncestor_m68BA42B74B5DFAD06D2F0AFFFE8D6DA4501B87F0(L_97, /*hidden argument*/NULL);
			V_8 = L_98;
			NodeId_tB863E2705852710AA05166CD9250E50B3A9FB8F0 * L_99 = V_8;
			if (!L_99)
			{
				goto IL_0320;
			}
		}

IL_029f:
		{
			GLTFSceneImporter_t29A5109798926C47E5B089376F3E467E78EB710E * L_100 = V_1;
			NodeId_tB863E2705852710AA05166CD9250E50B3A9FB8F0 * L_101 = V_8;
			NullCheck(L_101);
			int32_t L_102 = ((GLTFId_1_t03A4FA3C937E0B4939DA3B8F26A7FFF95A506783 *)L_101)->get_Id_0();
			CancellationToken_t9E956952F7F20908F2AE72EDF36D97E6C7DB63AB  L_103 = __this->get_cancellationToken_4();
			NullCheck(L_100);
			Task_1_t5029FFD61E4B10A1E614C1D97F1F0FA5B04557EC * L_104 = GLTFSceneImporter_GetNode_m7D1647D2D937C2C792D0932E3D459DA2845AEF5A(L_100, L_102, L_103, /*hidden argument*/NULL);
			NullCheck(L_104);
			TaskAwaiter_1_tAE6B8B90DDB2F4605D3C8F53F1F449F35790A468  L_105 = Task_1_GetAwaiter_m90E2F1385A9B5545BC25491244E0CEB39C7633AB(L_104, /*hidden argument*/Task_1_GetAwaiter_m90E2F1385A9B5545BC25491244E0CEB39C7633AB_RuntimeMethod_var);
			V_5 = L_105;
			bool L_106 = TaskAwaiter_1_get_IsCompleted_m909D94801484D90689A3F279FF0722556EA3AC30((TaskAwaiter_1_tAE6B8B90DDB2F4605D3C8F53F1F449F35790A468 *)(&V_5), /*hidden argument*/TaskAwaiter_1_get_IsCompleted_m909D94801484D90689A3F279FF0722556EA3AC30_RuntimeMethod_var);
			if (L_106)
			{
				goto IL_0303;
			}
		}

IL_02c2:
		{
			int32_t L_107 = 2;
			V_0 = L_107;
			__this->set_U3CU3E1__state_0(L_107);
			TaskAwaiter_1_tAE6B8B90DDB2F4605D3C8F53F1F449F35790A468  L_108 = V_5;
			__this->set_U3CU3Eu__1_11(L_108);
			AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487 * L_109 = __this->get_address_of_U3CU3Et__builder_1();
			AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_tAE6B8B90DDB2F4605D3C8F53F1F449F35790A468_TisU3CSetupBonesU3Ed__81_t62772CFE58B2A384226F4D7C2927B56067511DDC_m6AACCF3E83D59FCCF856D1ECB605ED655C946DFD((AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487 *)L_109, (TaskAwaiter_1_tAE6B8B90DDB2F4605D3C8F53F1F449F35790A468 *)(&V_5), (U3CSetupBonesU3Ed__81_t62772CFE58B2A384226F4D7C2927B56067511DDC *)__this, /*hidden argument*/AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_tAE6B8B90DDB2F4605D3C8F53F1F449F35790A468_TisU3CSetupBonesU3Ed__81_t62772CFE58B2A384226F4D7C2927B56067511DDC_m6AACCF3E83D59FCCF856D1ECB605ED655C946DFD_RuntimeMethod_var);
			goto IL_0380;
		}

IL_02e6:
		{
			TaskAwaiter_1_tAE6B8B90DDB2F4605D3C8F53F1F449F35790A468  L_110 = __this->get_U3CU3Eu__1_11();
			V_5 = L_110;
			TaskAwaiter_1_tAE6B8B90DDB2F4605D3C8F53F1F449F35790A468 * L_111 = __this->get_address_of_U3CU3Eu__1_11();
			il2cpp_codegen_initobj(L_111, sizeof(TaskAwaiter_1_tAE6B8B90DDB2F4605D3C8F53F1F449F35790A468 ));
			int32_t L_112 = (-1);
			V_0 = L_112;
			__this->set_U3CU3E1__state_0(L_112);
		}

IL_0303:
		{
			GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_113 = TaskAwaiter_1_GetResult_m3203645289A2AA352E87023E38460D33B2FE4D16((TaskAwaiter_1_tAE6B8B90DDB2F4605D3C8F53F1F449F35790A468 *)(&V_5), /*hidden argument*/TaskAwaiter_1_GetResult_m3203645289A2AA352E87023E38460D33B2FE4D16_RuntimeMethod_var);
			V_9 = L_113;
			SkinnedMeshRenderer_tFC8103EE7842F7F8A98BEF0C855D32A9711B7B65 * L_114 = __this->get_renderer_5();
			GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_115 = V_9;
			NullCheck(L_115);
			Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_116 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_115, /*hidden argument*/NULL);
			NullCheck(L_114);
			SkinnedMeshRenderer_set_rootBone_mBC4EA4CFD91C1FA593D17233AC70E1E219F24C21(L_114, L_116, /*hidden argument*/NULL);
			goto IL_032b;
		}

IL_0320:
		{
			Exception_t * L_117 = (Exception_t *)il2cpp_codegen_object_new(Exception_t_il2cpp_TypeInfo_var);
			Exception__ctor_m89BADFF36C3B170013878726E07729D51AA9FBE0(L_117, _stringLiteralF8E5D25F3DAC2FA50576D06DA35D28B1B025C132, /*hidden argument*/NULL);
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_117, NULL, U3CSetupBonesU3Ed__81_MoveNext_mA170126FA296DE2AA10199060966C1908F018F63_RuntimeMethod_var);
		}

IL_032b:
		{
			SkinnedMeshRenderer_tFC8103EE7842F7F8A98BEF0C855D32A9711B7B65 * L_118 = __this->get_renderer_5();
			NullCheck(L_118);
			Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * L_119 = SkinnedMeshRenderer_get_sharedMesh_mCEFF1E7B966C5C7F940F051930D18DF98F427444(L_118, /*hidden argument*/NULL);
			Matrix4x4U5BU5D_t1C64F7A0C34058334A8A95BF165F0027690598C9* L_120 = __this->get_U3CbindPosesU3E5__5_9();
			NullCheck(L_119);
			Mesh_set_bindposes_m75011114B82AA0045C07AFFB4B07F7E0FAAFC23E(L_119, L_120, /*hidden argument*/NULL);
			SkinnedMeshRenderer_tFC8103EE7842F7F8A98BEF0C855D32A9711B7B65 * L_121 = __this->get_renderer_5();
			TransformU5BU5D_t4F5A1132877D8BA66ABC0A9A7FADA4E0237A7804* L_122 = __this->get_U3CbonesU3E5__3_7();
			NullCheck(L_121);
			SkinnedMeshRenderer_set_bones_mDA75746FD5C90CCEB656A107371FC3BD593AE783(L_121, L_122, /*hidden argument*/NULL);
			goto IL_036d;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (Exception_t_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_0354;
		throw e;
	}

CATCH_0354:
	{ // begin catch(System.Exception)
		V_10 = ((Exception_t *)__exception_local);
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487 * L_123 = __this->get_address_of_U3CU3Et__builder_1();
		Exception_t * L_124 = V_10;
		AsyncTaskMethodBuilder_SetException_m370C484922A63A6EF96E241D1370B8814F1F2D6B((AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487 *)L_123, L_124, /*hidden argument*/NULL);
		goto IL_0380;
	} // end catch (depth: 1)

IL_036d:
	{
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487 * L_125 = __this->get_address_of_U3CU3Et__builder_1();
		AsyncTaskMethodBuilder_SetResult_m151016FB698F3BB34A73BAE693A97513A7E4C838((AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487 *)L_125, /*hidden argument*/NULL);
	}

IL_0380:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CSetupBonesU3Ed__81_MoveNext_mA170126FA296DE2AA10199060966C1908F018F63_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	U3CSetupBonesU3Ed__81_t62772CFE58B2A384226F4D7C2927B56067511DDC * _thisAdjusted = reinterpret_cast<U3CSetupBonesU3Ed__81_t62772CFE58B2A384226F4D7C2927B56067511DDC *>(__this + 1);
	U3CSetupBonesU3Ed__81_MoveNext_mA170126FA296DE2AA10199060966C1908F018F63(_thisAdjusted, method);
}
// System.Void UnityGLTF.GLTFSceneImporter_<SetupBones>d__81::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSetupBonesU3Ed__81_SetStateMachine_m0CBAA99E6C162A3EF13970B470AB902476EF9C33 (U3CSetupBonesU3Ed__81_t62772CFE58B2A384226F4D7C2927B56067511DDC * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	{
		AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487 * L_0 = __this->get_address_of_U3CU3Et__builder_1();
		RuntimeObject* L_1 = ___stateMachine0;
		AsyncTaskMethodBuilder_SetStateMachine_mB5DD68F7C49EA6D452AEBA02B1B98AED898C3C25((AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487 *)L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void U3CSetupBonesU3Ed__81_SetStateMachine_m0CBAA99E6C162A3EF13970B470AB902476EF9C33_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	U3CSetupBonesU3Ed__81_t62772CFE58B2A384226F4D7C2927B56067511DDC * _thisAdjusted = reinterpret_cast<U3CSetupBonesU3Ed__81_t62772CFE58B2A384226F4D7C2927B56067511DDC *>(__this + 1);
	U3CSetupBonesU3Ed__81_SetStateMachine_m0CBAA99E6C162A3EF13970B470AB902476EF9C33(_thisAdjusted, ___stateMachine0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityGLTF.GLTFSceneImporter_<SetupLoad>d__102::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSetupLoadU3Ed__102_MoveNext_mA4531B1A69D1F3F5024AB872EE50684949A7D116 (U3CSetupLoadU3Ed__102_tFB8B5441489338282D4CAC773B60B896D00F07EF * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CSetupLoadU3Ed__102_MoveNext_mA4531B1A69D1F3F5024AB872EE50684949A7D116_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	GLTFSceneImporter_t29A5109798926C47E5B089376F3E467E78EB710E * V_1 = NULL;
	GLTFSceneImporter_t29A5109798926C47E5B089376F3E467E78EB710E * V_2 = NULL;
	bool V_3 = false;
	TaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F  V_4;
	memset((&V_4), 0, sizeof(V_4));
	Exception_t * V_5 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 8);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		GLTFSceneImporter_t29A5109798926C47E5B089376F3E467E78EB710E * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
	}

IL_000e:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_2 = V_0;
		}

IL_0013:
		try
		{ // begin try (depth: 2)
			try
			{ // begin try (depth: 3)
				{
					int32_t L_3 = V_0;
					if (!L_3)
					{
						goto IL_00c2;
					}
				}

IL_0019:
				{
					int32_t L_4 = V_0;
					if ((((int32_t)L_4) == ((int32_t)1)))
					{
						goto IL_013e;
					}
				}

IL_0020:
				{
					GLTFSceneImporter_t29A5109798926C47E5B089376F3E467E78EB710E * L_5 = V_1;
					V_2 = L_5;
					V_3 = (bool)0;
				}

IL_0024:
				try
				{ // begin try (depth: 4)
					{
						GLTFSceneImporter_t29A5109798926C47E5B089376F3E467E78EB710E * L_6 = V_2;
						Monitor_Enter_mC5B353DD83A0B0155DF6FBCC4DF5A580C25534C5(L_6, (bool*)(&V_3), /*hidden argument*/NULL);
						GLTFSceneImporter_t29A5109798926C47E5B089376F3E467E78EB710E * L_7 = V_1;
						NullCheck(L_7);
						bool L_8 = L_7->get__isRunning_21();
						if (!L_8)
						{
							goto IL_003f;
						}
					}

IL_0034:
					{
						GLTFLoadException_tE78F0B883637138D8584E658C49315FE15B23B76 * L_9 = (GLTFLoadException_tE78F0B883637138D8584E658C49315FE15B23B76 *)il2cpp_codegen_object_new(GLTFLoadException_tE78F0B883637138D8584E658C49315FE15B23B76_il2cpp_TypeInfo_var);
						GLTFLoadException__ctor_m43DE4A4E693E77E6A56895E31BBA605B4B00324C(L_9, _stringLiteral05E41B2BC369E8DD41BA3F357BD403D69D987B94, /*hidden argument*/NULL);
						IL2CPP_RAISE_MANAGED_EXCEPTION(L_9, NULL, U3CSetupLoadU3Ed__102_MoveNext_mA4531B1A69D1F3F5024AB872EE50684949A7D116_RuntimeMethod_var);
					}

IL_003f:
					{
						GLTFSceneImporter_t29A5109798926C47E5B089376F3E467E78EB710E * L_10 = V_1;
						NullCheck(L_10);
						L_10->set__isRunning_21((bool)1);
						IL2CPP_LEAVE(0x56, FINALLY_0048);
					}
				} // end try (depth: 4)
				catch(Il2CppExceptionWrapper& e)
				{
					__last_unhandled_exception = (Exception_t *)e.ex;
					goto FINALLY_0048;
				}

FINALLY_0048:
				{ // begin finally (depth: 4)
					{
						int32_t L_11 = V_0;
						if ((((int32_t)L_11) >= ((int32_t)0)))
						{
							goto IL_0055;
						}
					}

IL_004c:
					{
						bool L_12 = V_3;
						if (!L_12)
						{
							goto IL_0055;
						}
					}

IL_004f:
					{
						GLTFSceneImporter_t29A5109798926C47E5B089376F3E467E78EB710E * L_13 = V_2;
						Monitor_Exit_m49A1E5356D984D0B934BB97A305E2E5E207225C2(L_13, /*hidden argument*/NULL);
					}

IL_0055:
					{
						IL2CPP_END_FINALLY(72)
					}
				} // end finally (depth: 4)
				IL2CPP_CLEANUP(72)
				{
					IL2CPP_JUMP_TBL(0x56, IL_0056)
					IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
				}

IL_0056:
				{
					GLTFSceneImporter_t29A5109798926C47E5B089376F3E467E78EB710E * L_14 = V_1;
					NullCheck(L_14);
					ImportStatistics_t3102F608371E4D5FD73B008F8C3AD4371D9F1FD8 * L_15 = L_14->get_address_of_Statistics_11();
					il2cpp_codegen_initobj(L_15, sizeof(ImportStatistics_t3102F608371E4D5FD73B008F8C3AD4371D9F1FD8 ));
					GLTFSceneImporter_t29A5109798926C47E5B089376F3E467E78EB710E * L_16 = V_1;
					NullCheck(L_16);
					ImportOptions_tF7380126D05F8D0CD248534D3C19EA83F20FA88E * L_17 = L_16->get__options_12();
					NullCheck(L_17);
					bool L_18 = L_17->get_ThrowOnLowMemory_3();
					if (!L_18)
					{
						goto IL_007a;
					}
				}

IL_006f:
				{
					GLTFSceneImporter_t29A5109798926C47E5B089376F3E467E78EB710E * L_19 = V_1;
					MemoryChecker_t6298B1B47ACD98ED696BC66A79E5D5217756BA6A * L_20 = (MemoryChecker_t6298B1B47ACD98ED696BC66A79E5D5217756BA6A *)il2cpp_codegen_object_new(MemoryChecker_t6298B1B47ACD98ED696BC66A79E5D5217756BA6A_il2cpp_TypeInfo_var);
					MemoryChecker__ctor_mE60927E4E5764E4E815287255A88A4C6C4CAED15(L_20, /*hidden argument*/NULL);
					NullCheck(L_19);
					L_19->set__memoryChecker_13(L_20);
				}

IL_007a:
				{
					GLTFSceneImporter_t29A5109798926C47E5B089376F3E467E78EB710E * L_21 = V_1;
					NullCheck(L_21);
					GLTFRoot_t3CDB3EBE42E8A0E06DD58B35BAD5D98EF44F3A6B * L_22 = L_21->get__gltfRoot_19();
					if (L_22)
					{
						goto IL_00e6;
					}
				}

IL_0082:
				{
					GLTFSceneImporter_t29A5109798926C47E5B089376F3E467E78EB710E * L_23 = V_1;
					GLTFSceneImporter_t29A5109798926C47E5B089376F3E467E78EB710E * L_24 = V_1;
					NullCheck(L_24);
					String_t* L_25 = L_24->get__gltfFileName_17();
					NullCheck(L_23);
					Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * L_26 = GLTFSceneImporter_LoadJson_mCA3881A2B72C345F9AA491730D9CF1E6C00BA5B3(L_23, L_25, /*hidden argument*/NULL);
					NullCheck(L_26);
					TaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F  L_27 = Task_GetAwaiter_m73027D5E4C16E961C658B83526BED8E32FD2AC6C(L_26, /*hidden argument*/NULL);
					V_4 = L_27;
					bool L_28 = TaskAwaiter_get_IsCompleted_m5A2B6FEA0ED3B01B5E88DBF2D8BC4A45652ABD87((TaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F *)(&V_4), /*hidden argument*/NULL);
					if (L_28)
					{
						goto IL_00df;
					}
				}

IL_009e:
				{
					int32_t L_29 = 0;
					V_0 = L_29;
					__this->set_U3CU3E1__state_0(L_29);
					TaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F  L_30 = V_4;
					__this->set_U3CU3Eu__1_4(L_30);
					AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487 * L_31 = __this->get_address_of_U3CU3Et__builder_1();
					AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F_TisU3CSetupLoadU3Ed__102_tFB8B5441489338282D4CAC773B60B896D00F07EF_m328953A61919506A8A2A0C6BF7DC3FC37F74702C((AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487 *)L_31, (TaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F *)(&V_4), (U3CSetupLoadU3Ed__102_tFB8B5441489338282D4CAC773B60B896D00F07EF *)__this, /*hidden argument*/AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F_TisU3CSetupLoadU3Ed__102_tFB8B5441489338282D4CAC773B60B896D00F07EF_m328953A61919506A8A2A0C6BF7DC3FC37F74702C_RuntimeMethod_var);
					IL2CPP_LEAVE(0x1C5, FINALLY_016f);
				}

IL_00c2:
				{
					TaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F  L_32 = __this->get_U3CU3Eu__1_4();
					V_4 = L_32;
					TaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F * L_33 = __this->get_address_of_U3CU3Eu__1_4();
					il2cpp_codegen_initobj(L_33, sizeof(TaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F ));
					int32_t L_34 = (-1);
					V_0 = L_34;
					__this->set_U3CU3E1__state_0(L_34);
				}

IL_00df:
				{
					TaskAwaiter_GetResult_m89868C01592AC2B06CE1FD42D9B9C187C6FD928A((TaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F *)(&V_4), /*hidden argument*/NULL);
				}

IL_00e6:
				{
					GLTFSceneImporter_t29A5109798926C47E5B089376F3E467E78EB710E * L_35 = V_1;
					NullCheck(L_35);
					AssetCache_tE060C78C9F54F8BF6F50E904460FA53958B59D91 * L_36 = L_35->get__assetCache_20();
					if (L_36)
					{
						goto IL_00ff;
					}
				}

IL_00ee:
				{
					GLTFSceneImporter_t29A5109798926C47E5B089376F3E467E78EB710E * L_37 = V_1;
					GLTFSceneImporter_t29A5109798926C47E5B089376F3E467E78EB710E * L_38 = V_1;
					NullCheck(L_38);
					GLTFRoot_t3CDB3EBE42E8A0E06DD58B35BAD5D98EF44F3A6B * L_39 = L_38->get__gltfRoot_19();
					AssetCache_tE060C78C9F54F8BF6F50E904460FA53958B59D91 * L_40 = (AssetCache_tE060C78C9F54F8BF6F50E904460FA53958B59D91 *)il2cpp_codegen_object_new(AssetCache_tE060C78C9F54F8BF6F50E904460FA53958B59D91_il2cpp_TypeInfo_var);
					AssetCache__ctor_m3C03CC6A0178007549D6B4D6AC6C4AAED052566C(L_40, L_39, /*hidden argument*/NULL);
					NullCheck(L_37);
					L_37->set__assetCache_20(L_40);
				}

IL_00ff:
				{
					Func_1_t864AB9A10EEBC12BC5B32E4C8BD6F0F8E0D2F728 * L_41 = __this->get_callback_3();
					NullCheck(L_41);
					Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * L_42 = Func_1_Invoke_mC7466BFC36F67F4565B11F44CF8D352CE5593577(L_41, /*hidden argument*/Func_1_Invoke_mC7466BFC36F67F4565B11F44CF8D352CE5593577_RuntimeMethod_var);
					NullCheck(L_42);
					TaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F  L_43 = Task_GetAwaiter_m73027D5E4C16E961C658B83526BED8E32FD2AC6C(L_42, /*hidden argument*/NULL);
					V_4 = L_43;
					bool L_44 = TaskAwaiter_get_IsCompleted_m5A2B6FEA0ED3B01B5E88DBF2D8BC4A45652ABD87((TaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F *)(&V_4), /*hidden argument*/NULL);
					if (L_44)
					{
						goto IL_015b;
					}
				}

IL_011a:
				{
					int32_t L_45 = 1;
					V_0 = L_45;
					__this->set_U3CU3E1__state_0(L_45);
					TaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F  L_46 = V_4;
					__this->set_U3CU3Eu__1_4(L_46);
					AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487 * L_47 = __this->get_address_of_U3CU3Et__builder_1();
					AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F_TisU3CSetupLoadU3Ed__102_tFB8B5441489338282D4CAC773B60B896D00F07EF_m328953A61919506A8A2A0C6BF7DC3FC37F74702C((AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487 *)L_47, (TaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F *)(&V_4), (U3CSetupLoadU3Ed__102_tFB8B5441489338282D4CAC773B60B896D00F07EF *)__this, /*hidden argument*/AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F_TisU3CSetupLoadU3Ed__102_tFB8B5441489338282D4CAC773B60B896D00F07EF_m328953A61919506A8A2A0C6BF7DC3FC37F74702C_RuntimeMethod_var);
					IL2CPP_LEAVE(0x1C5, FINALLY_016f);
				}

IL_013e:
				{
					TaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F  L_48 = __this->get_U3CU3Eu__1_4();
					V_4 = L_48;
					TaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F * L_49 = __this->get_address_of_U3CU3Eu__1_4();
					il2cpp_codegen_initobj(L_49, sizeof(TaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F ));
					int32_t L_50 = (-1);
					V_0 = L_50;
					__this->set_U3CU3E1__state_0(L_50);
				}

IL_015b:
				{
					TaskAwaiter_GetResult_m89868C01592AC2B06CE1FD42D9B9C187C6FD928A((TaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F *)(&V_4), /*hidden argument*/NULL);
					goto IL_016d;
				}
			} // end try (depth: 3)
			catch(Il2CppExceptionWrapper& e)
			{
				__exception_local = (Exception_t *)e.ex;
				if(il2cpp_codegen_class_is_assignable_from (RuntimeObject_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
					goto CATCH_0164;
				throw e;
			}

CATCH_0164:
			{ // begin catch(System.Object)
				GLTFSceneImporter_t29A5109798926C47E5B089376F3E467E78EB710E * L_51 = V_1;
				NullCheck(L_51);
				GLTFSceneImporter_Cleanup_mEDA112BFE03960505732686F099C6E8CF5E4B991(L_51, /*hidden argument*/NULL);
				IL2CPP_RAISE_MANAGED_EXCEPTION(__exception_local, NULL, U3CSetupLoadU3Ed__102_MoveNext_mA4531B1A69D1F3F5024AB872EE50684949A7D116_RuntimeMethod_var);
			} // end catch (depth: 3)

IL_016d:
			{
				IL2CPP_LEAVE(0x197, FINALLY_016f);
			}
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__last_unhandled_exception = (Exception_t *)e.ex;
			goto FINALLY_016f;
		}

FINALLY_016f:
		{ // begin finally (depth: 2)
			{
				int32_t L_52 = V_0;
				if ((((int32_t)L_52) >= ((int32_t)0)))
				{
					goto IL_0196;
				}
			}

IL_0173:
			{
				GLTFSceneImporter_t29A5109798926C47E5B089376F3E467E78EB710E * L_53 = V_1;
				V_2 = L_53;
				V_3 = (bool)0;
			}

IL_0177:
			try
			{ // begin try (depth: 3)
				GLTFSceneImporter_t29A5109798926C47E5B089376F3E467E78EB710E * L_54 = V_2;
				Monitor_Enter_mC5B353DD83A0B0155DF6FBCC4DF5A580C25534C5(L_54, (bool*)(&V_3), /*hidden argument*/NULL);
				GLTFSceneImporter_t29A5109798926C47E5B089376F3E467E78EB710E * L_55 = V_1;
				NullCheck(L_55);
				L_55->set__isRunning_21((bool)0);
				IL2CPP_LEAVE(0x196, FINALLY_0188);
			} // end try (depth: 3)
			catch(Il2CppExceptionWrapper& e)
			{
				__last_unhandled_exception = (Exception_t *)e.ex;
				goto FINALLY_0188;
			}

FINALLY_0188:
			{ // begin finally (depth: 3)
				{
					int32_t L_56 = V_0;
					if ((((int32_t)L_56) >= ((int32_t)0)))
					{
						goto IL_0195;
					}
				}

IL_018c:
				{
					bool L_57 = V_3;
					if (!L_57)
					{
						goto IL_0195;
					}
				}

IL_018f:
				{
					GLTFSceneImporter_t29A5109798926C47E5B089376F3E467E78EB710E * L_58 = V_2;
					Monitor_Exit_m49A1E5356D984D0B934BB97A305E2E5E207225C2(L_58, /*hidden argument*/NULL);
				}

IL_0195:
				{
					IL2CPP_END_FINALLY(392)
				}
			} // end finally (depth: 3)
			IL2CPP_CLEANUP(392)
			{
				IL2CPP_JUMP_TBL(0x196, IL_0196)
				IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
			}

IL_0196:
			{
				IL2CPP_END_FINALLY(367)
			}
		} // end finally (depth: 2)
		IL2CPP_CLEANUP(367)
		{
			IL2CPP_JUMP_TBL(0x1C5, IL_01c5)
			IL2CPP_JUMP_TBL(0x197, IL_0197)
			IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		}

IL_0197:
		{
			goto IL_01b2;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (Exception_t_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_0199;
		throw e;
	}

CATCH_0199:
	{ // begin catch(System.Exception)
		V_5 = ((Exception_t *)__exception_local);
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487 * L_59 = __this->get_address_of_U3CU3Et__builder_1();
		Exception_t * L_60 = V_5;
		AsyncTaskMethodBuilder_SetException_m370C484922A63A6EF96E241D1370B8814F1F2D6B((AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487 *)L_59, L_60, /*hidden argument*/NULL);
		goto IL_01c5;
	} // end catch (depth: 1)

IL_01b2:
	{
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487 * L_61 = __this->get_address_of_U3CU3Et__builder_1();
		AsyncTaskMethodBuilder_SetResult_m151016FB698F3BB34A73BAE693A97513A7E4C838((AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487 *)L_61, /*hidden argument*/NULL);
	}

IL_01c5:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CSetupLoadU3Ed__102_MoveNext_mA4531B1A69D1F3F5024AB872EE50684949A7D116_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	U3CSetupLoadU3Ed__102_tFB8B5441489338282D4CAC773B60B896D00F07EF * _thisAdjusted = reinterpret_cast<U3CSetupLoadU3Ed__102_tFB8B5441489338282D4CAC773B60B896D00F07EF *>(__this + 1);
	U3CSetupLoadU3Ed__102_MoveNext_mA4531B1A69D1F3F5024AB872EE50684949A7D116(_thisAdjusted, method);
}
// System.Void UnityGLTF.GLTFSceneImporter_<SetupLoad>d__102::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSetupLoadU3Ed__102_SetStateMachine_m3CF3E1FF67585D1C747A6FB44FF9AE93933D1225 (U3CSetupLoadU3Ed__102_tFB8B5441489338282D4CAC773B60B896D00F07EF * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	{
		AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487 * L_0 = __this->get_address_of_U3CU3Et__builder_1();
		RuntimeObject* L_1 = ___stateMachine0;
		AsyncTaskMethodBuilder_SetStateMachine_mB5DD68F7C49EA6D452AEBA02B1B98AED898C3C25((AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487 *)L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void U3CSetupLoadU3Ed__102_SetStateMachine_m3CF3E1FF67585D1C747A6FB44FF9AE93933D1225_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	U3CSetupLoadU3Ed__102_tFB8B5441489338282D4CAC773B60B896D00F07EF * _thisAdjusted = reinterpret_cast<U3CSetupLoadU3Ed__102_tFB8B5441489338282D4CAC773B60B896D00F07EF *>(__this + 1);
	U3CSetupLoadU3Ed__102_SetStateMachine_m3CF3E1FF67585D1C747A6FB44FF9AE93933D1225(_thisAdjusted, ___stateMachine0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityGLTF.GLTFSceneImporter_<WaitUntilEnum>d__58::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CWaitUntilEnumU3Ed__58__ctor_m0E9F13831B322EA2FA2688BF170474D18D66A9DA (U3CWaitUntilEnumU3Ed__58_t88491DB218CBB87C50048C22305BCAAC4FD1D126 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void UnityGLTF.GLTFSceneImporter_<WaitUntilEnum>d__58::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CWaitUntilEnumU3Ed__58_System_IDisposable_Dispose_mEE37E6EADFF7B3F4DAA5EC7BA8ED9CFD34363B92 (U3CWaitUntilEnumU3Ed__58_t88491DB218CBB87C50048C22305BCAAC4FD1D126 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean UnityGLTF.GLTFSceneImporter_<WaitUntilEnum>d__58::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CWaitUntilEnumU3Ed__58_MoveNext_m84289C13BD5A91AFE82320FCFFC556E0FE8B39BA (U3CWaitUntilEnumU3Ed__58_t88491DB218CBB87C50048C22305BCAAC4FD1D126 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (!L_1)
		{
			goto IL_0010;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_002c;
		}
	}
	{
		return (bool)0;
	}

IL_0010:
	{
		__this->set_U3CU3E1__state_0((-1));
		WaitUntil_t012561515C0E1D3DEA19DB3A05444B020C68E13F * L_3 = __this->get_waitUntil_2();
		__this->set_U3CU3E2__current_1(L_3);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_002c:
	{
		__this->set_U3CU3E1__state_0((-1));
		return (bool)0;
	}
}
// System.Object UnityGLTF.GLTFSceneImporter_<WaitUntilEnum>d__58::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CWaitUntilEnumU3Ed__58_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m4301C0226592AFD0F9188E1C5071114EF3CBB27A (U3CWaitUntilEnumU3Ed__58_t88491DB218CBB87C50048C22305BCAAC4FD1D126 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void UnityGLTF.GLTFSceneImporter_<WaitUntilEnum>d__58::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CWaitUntilEnumU3Ed__58_System_Collections_IEnumerator_Reset_mB2CE42E8885A607B432513BF31225C3BD972C882 (U3CWaitUntilEnumU3Ed__58_t88491DB218CBB87C50048C22305BCAAC4FD1D126 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CWaitUntilEnumU3Ed__58_System_Collections_IEnumerator_Reset_mB2CE42E8885A607B432513BF31225C3BD972C882_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010 * L_0 = (NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010 *)il2cpp_codegen_object_new(NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_mA121DE1CAC8F25277DEB489DC7771209D91CAE33(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, NULL, U3CWaitUntilEnumU3Ed__58_System_Collections_IEnumerator_Reset_mB2CE42E8885A607B432513BF31225C3BD972C882_RuntimeMethod_var);
	}
}
// System.Object UnityGLTF.GLTFSceneImporter_<WaitUntilEnum>d__58::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CWaitUntilEnumU3Ed__58_System_Collections_IEnumerator_get_Current_m7802F4EA7CA6EBF7296203C398EBBF537CDB9F56 (U3CWaitUntilEnumU3Ed__58_t88491DB218CBB87C50048C22305BCAAC4FD1D126 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityGLTF.GLTFSceneImporter_<YieldOnTimeoutAndThrowOnLowMemory>d__97::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CYieldOnTimeoutAndThrowOnLowMemoryU3Ed__97_MoveNext_m6EB59599C82A9E706128405639242DD61AC3E977 (U3CYieldOnTimeoutAndThrowOnLowMemoryU3Ed__97_t94FCCE7CF181F8FA506AB6B4A977C0A7C9BD8BDB * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CYieldOnTimeoutAndThrowOnLowMemoryU3Ed__97_MoveNext_m6EB59599C82A9E706128405639242DD61AC3E977_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	GLTFSceneImporter_t29A5109798926C47E5B089376F3E467E78EB710E * V_1 = NULL;
	TaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F  V_2;
	memset((&V_2), 0, sizeof(V_2));
	Exception_t * V_3 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 3);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		GLTFSceneImporter_t29A5109798926C47E5B089376F3E467E78EB710E * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
	}

IL_000e:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_2 = V_0;
			if (!L_2)
			{
				goto IL_007b;
			}
		}

IL_0011:
		{
			GLTFSceneImporter_t29A5109798926C47E5B089376F3E467E78EB710E * L_3 = V_1;
			NullCheck(L_3);
			ImportOptions_tF7380126D05F8D0CD248534D3C19EA83F20FA88E * L_4 = L_3->get__options_12();
			NullCheck(L_4);
			bool L_5 = L_4->get_ThrowOnLowMemory_3();
			if (!L_5)
			{
				goto IL_0029;
			}
		}

IL_001e:
		{
			GLTFSceneImporter_t29A5109798926C47E5B089376F3E467E78EB710E * L_6 = V_1;
			NullCheck(L_6);
			MemoryChecker_t6298B1B47ACD98ED696BC66A79E5D5217756BA6A * L_7 = L_6->get__memoryChecker_13();
			NullCheck(L_7);
			MemoryChecker_ThrowIfOutOfMemory_m40C12ACD6E1974DD5873D8A653C7E5EC65B6B714(L_7, /*hidden argument*/NULL);
		}

IL_0029:
		{
			GLTFSceneImporter_t29A5109798926C47E5B089376F3E467E78EB710E * L_8 = V_1;
			NullCheck(L_8);
			ImportOptions_tF7380126D05F8D0CD248534D3C19EA83F20FA88E * L_9 = L_8->get__options_12();
			NullCheck(L_9);
			AsyncCoroutineHelper_t032BCD93473D0EBD9757396C7B539A1475B92757 * L_10 = L_9->get_AsyncCoroutineHelper_2();
			IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
			bool L_11 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_10, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
			if (!L_11)
			{
				goto IL_009e;
			}
		}

IL_003c:
		{
			GLTFSceneImporter_t29A5109798926C47E5B089376F3E467E78EB710E * L_12 = V_1;
			NullCheck(L_12);
			ImportOptions_tF7380126D05F8D0CD248534D3C19EA83F20FA88E * L_13 = L_12->get__options_12();
			NullCheck(L_13);
			AsyncCoroutineHelper_t032BCD93473D0EBD9757396C7B539A1475B92757 * L_14 = L_13->get_AsyncCoroutineHelper_2();
			NullCheck(L_14);
			Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * L_15 = AsyncCoroutineHelper_YieldOnTimeout_m35081A029D4067EC4CE2425D67AEC3069E4043A5(L_14, /*hidden argument*/NULL);
			NullCheck(L_15);
			TaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F  L_16 = Task_GetAwaiter_m73027D5E4C16E961C658B83526BED8E32FD2AC6C(L_15, /*hidden argument*/NULL);
			V_2 = L_16;
			bool L_17 = TaskAwaiter_get_IsCompleted_m5A2B6FEA0ED3B01B5E88DBF2D8BC4A45652ABD87((TaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F *)(&V_2), /*hidden argument*/NULL);
			if (L_17)
			{
				goto IL_0097;
			}
		}

IL_005b:
		{
			int32_t L_18 = 0;
			V_0 = L_18;
			__this->set_U3CU3E1__state_0(L_18);
			TaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F  L_19 = V_2;
			__this->set_U3CU3Eu__1_3(L_19);
			AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487 * L_20 = __this->get_address_of_U3CU3Et__builder_1();
			AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F_TisU3CYieldOnTimeoutAndThrowOnLowMemoryU3Ed__97_t94FCCE7CF181F8FA506AB6B4A977C0A7C9BD8BDB_mD2DC8FE44409674EC910F02670E96DBA5B78F571((AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487 *)L_20, (TaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F *)(&V_2), (U3CYieldOnTimeoutAndThrowOnLowMemoryU3Ed__97_t94FCCE7CF181F8FA506AB6B4A977C0A7C9BD8BDB *)__this, /*hidden argument*/AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F_TisU3CYieldOnTimeoutAndThrowOnLowMemoryU3Ed__97_t94FCCE7CF181F8FA506AB6B4A977C0A7C9BD8BDB_mD2DC8FE44409674EC910F02670E96DBA5B78F571_RuntimeMethod_var);
			goto IL_00ca;
		}

IL_007b:
		{
			TaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F  L_21 = __this->get_U3CU3Eu__1_3();
			V_2 = L_21;
			TaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F * L_22 = __this->get_address_of_U3CU3Eu__1_3();
			il2cpp_codegen_initobj(L_22, sizeof(TaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F ));
			int32_t L_23 = (-1);
			V_0 = L_23;
			__this->set_U3CU3E1__state_0(L_23);
		}

IL_0097:
		{
			TaskAwaiter_GetResult_m89868C01592AC2B06CE1FD42D9B9C187C6FD928A((TaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F *)(&V_2), /*hidden argument*/NULL);
		}

IL_009e:
		{
			goto IL_00b7;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (Exception_t_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_00a0;
		throw e;
	}

CATCH_00a0:
	{ // begin catch(System.Exception)
		V_3 = ((Exception_t *)__exception_local);
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487 * L_24 = __this->get_address_of_U3CU3Et__builder_1();
		Exception_t * L_25 = V_3;
		AsyncTaskMethodBuilder_SetException_m370C484922A63A6EF96E241D1370B8814F1F2D6B((AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487 *)L_24, L_25, /*hidden argument*/NULL);
		goto IL_00ca;
	} // end catch (depth: 1)

IL_00b7:
	{
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487 * L_26 = __this->get_address_of_U3CU3Et__builder_1();
		AsyncTaskMethodBuilder_SetResult_m151016FB698F3BB34A73BAE693A97513A7E4C838((AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487 *)L_26, /*hidden argument*/NULL);
	}

IL_00ca:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CYieldOnTimeoutAndThrowOnLowMemoryU3Ed__97_MoveNext_m6EB59599C82A9E706128405639242DD61AC3E977_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	U3CYieldOnTimeoutAndThrowOnLowMemoryU3Ed__97_t94FCCE7CF181F8FA506AB6B4A977C0A7C9BD8BDB * _thisAdjusted = reinterpret_cast<U3CYieldOnTimeoutAndThrowOnLowMemoryU3Ed__97_t94FCCE7CF181F8FA506AB6B4A977C0A7C9BD8BDB *>(__this + 1);
	U3CYieldOnTimeoutAndThrowOnLowMemoryU3Ed__97_MoveNext_m6EB59599C82A9E706128405639242DD61AC3E977(_thisAdjusted, method);
}
// System.Void UnityGLTF.GLTFSceneImporter_<YieldOnTimeoutAndThrowOnLowMemory>d__97::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CYieldOnTimeoutAndThrowOnLowMemoryU3Ed__97_SetStateMachine_m9B504500B98FE08BB5B397EBBE5C44446D5148C4 (U3CYieldOnTimeoutAndThrowOnLowMemoryU3Ed__97_t94FCCE7CF181F8FA506AB6B4A977C0A7C9BD8BDB * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	{
		AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487 * L_0 = __this->get_address_of_U3CU3Et__builder_1();
		RuntimeObject* L_1 = ___stateMachine0;
		AsyncTaskMethodBuilder_SetStateMachine_mB5DD68F7C49EA6D452AEBA02B1B98AED898C3C25((AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487 *)L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void U3CYieldOnTimeoutAndThrowOnLowMemoryU3Ed__97_SetStateMachine_m9B504500B98FE08BB5B397EBBE5C44446D5148C4_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	U3CYieldOnTimeoutAndThrowOnLowMemoryU3Ed__97_t94FCCE7CF181F8FA506AB6B4A977C0A7C9BD8BDB * _thisAdjusted = reinterpret_cast<U3CYieldOnTimeoutAndThrowOnLowMemoryU3Ed__97_t94FCCE7CF181F8FA506AB6B4A977C0A7C9BD8BDB *>(__this + 1);
	U3CYieldOnTimeoutAndThrowOnLowMemoryU3Ed__97_SetStateMachine_m9B504500B98FE08BB5B397EBBE5C44446D5148C4(_thisAdjusted, ___stateMachine0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityGLTF.GLTFSceneImporter_<_LoadScene>d__61::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3C_LoadSceneU3Ed__61_MoveNext_m568E0F79D7250D56497C86BF36A148FFA8E95A34 (U3C_LoadSceneU3Ed__61_t235926E3418670BF165AE82626829C7DF9BCDF57 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3C_LoadSceneU3Ed__61_MoveNext_m568E0F79D7250D56497C86BF36A148FFA8E95A34_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	GLTFSceneImporter_t29A5109798926C47E5B089376F3E467E78EB710E * V_1 = NULL;
	GLTFScene_t668D116E319247178F4641B2F3A4DF33C6343BB6 * V_2 = NULL;
	TaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F  V_3;
	memset((&V_3), 0, sizeof(V_3));
	Exception_t * V_4 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 3);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		GLTFSceneImporter_t29A5109798926C47E5B089376F3E467E78EB710E * L_1 = __this->get_U3CU3E4__this_3();
		V_1 = L_1;
	}

IL_000e:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_2 = V_0;
			if (!L_2)
			{
				goto IL_00b4;
			}
		}

IL_0014:
		{
			int32_t L_3 = __this->get_sceneIndex_2();
			if ((((int32_t)L_3) < ((int32_t)0)))
			{
				goto IL_004e;
			}
		}

IL_001d:
		{
			int32_t L_4 = __this->get_sceneIndex_2();
			GLTFSceneImporter_t29A5109798926C47E5B089376F3E467E78EB710E * L_5 = V_1;
			NullCheck(L_5);
			GLTFRoot_t3CDB3EBE42E8A0E06DD58B35BAD5D98EF44F3A6B * L_6 = L_5->get__gltfRoot_19();
			NullCheck(L_6);
			List_1_tAED3D6A1ED2710E0A2CB5BACC62D7D58311F4DFD * L_7 = L_6->get_Scenes_18();
			NullCheck(L_7);
			int32_t L_8 = List_1_get_Count_m08D9441B3CE06620361B6B23ECA6641B655CD7F8_inline(L_7, /*hidden argument*/List_1_get_Count_m08D9441B3CE06620361B6B23ECA6641B655CD7F8_RuntimeMethod_var);
			if ((((int32_t)L_4) >= ((int32_t)L_8)))
			{
				goto IL_004e;
			}
		}

IL_0035:
		{
			GLTFSceneImporter_t29A5109798926C47E5B089376F3E467E78EB710E * L_9 = V_1;
			NullCheck(L_9);
			GLTFRoot_t3CDB3EBE42E8A0E06DD58B35BAD5D98EF44F3A6B * L_10 = L_9->get__gltfRoot_19();
			NullCheck(L_10);
			List_1_tAED3D6A1ED2710E0A2CB5BACC62D7D58311F4DFD * L_11 = L_10->get_Scenes_18();
			int32_t L_12 = __this->get_sceneIndex_2();
			NullCheck(L_11);
			GLTFScene_t668D116E319247178F4641B2F3A4DF33C6343BB6 * L_13 = List_1_get_Item_m74BA8D86C414CF89D770517E5E5BB0D20BECE8DB_inline(L_11, L_12, /*hidden argument*/List_1_get_Item_m74BA8D86C414CF89D770517E5E5BB0D20BECE8DB_RuntimeMethod_var);
			V_2 = L_13;
			goto IL_005a;
		}

IL_004e:
		{
			GLTFSceneImporter_t29A5109798926C47E5B089376F3E467E78EB710E * L_14 = V_1;
			NullCheck(L_14);
			GLTFRoot_t3CDB3EBE42E8A0E06DD58B35BAD5D98EF44F3A6B * L_15 = L_14->get__gltfRoot_19();
			NullCheck(L_15);
			GLTFScene_t668D116E319247178F4641B2F3A4DF33C6343BB6 * L_16 = GLTFRoot_GetDefaultScene_m73586980AE9F7CD17E566F3425373E5D322986C3(L_15, /*hidden argument*/NULL);
			V_2 = L_16;
		}

IL_005a:
		{
			GLTFScene_t668D116E319247178F4641B2F3A4DF33C6343BB6 * L_17 = V_2;
			if (L_17)
			{
				goto IL_0068;
			}
		}

IL_005d:
		{
			GLTFLoadException_tE78F0B883637138D8584E658C49315FE15B23B76 * L_18 = (GLTFLoadException_tE78F0B883637138D8584E658C49315FE15B23B76 *)il2cpp_codegen_object_new(GLTFLoadException_tE78F0B883637138D8584E658C49315FE15B23B76_il2cpp_TypeInfo_var);
			GLTFLoadException__ctor_m43DE4A4E693E77E6A56895E31BBA605B4B00324C(L_18, _stringLiteral9049EC117A0E62749B6FE66DB211B5A2D030A8EF, /*hidden argument*/NULL);
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_18, NULL, U3C_LoadSceneU3Ed__61_MoveNext_m568E0F79D7250D56497C86BF36A148FFA8E95A34_RuntimeMethod_var);
		}

IL_0068:
		{
			GLTFSceneImporter_t29A5109798926C47E5B089376F3E467E78EB710E * L_19 = V_1;
			GLTFScene_t668D116E319247178F4641B2F3A4DF33C6343BB6 * L_20 = V_2;
			NullCheck(L_19);
			GLTFSceneImporter_GetGtlfContentTotals_m43289E07195084F10C145D447F78BF1819A7371B(L_19, L_20, /*hidden argument*/NULL);
			GLTFSceneImporter_t29A5109798926C47E5B089376F3E467E78EB710E * L_21 = V_1;
			GLTFScene_t668D116E319247178F4641B2F3A4DF33C6343BB6 * L_22 = V_2;
			bool L_23 = __this->get_showSceneObj_4();
			CancellationToken_t9E956952F7F20908F2AE72EDF36D97E6C7DB63AB  L_24 = __this->get_cancellationToken_5();
			NullCheck(L_21);
			Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * L_25 = VirtFuncInvoker3< Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 *, GLTFScene_t668D116E319247178F4641B2F3A4DF33C6343BB6 *, bool, CancellationToken_t9E956952F7F20908F2AE72EDF36D97E6C7DB63AB  >::Invoke(11 /* System.Threading.Tasks.Task UnityGLTF.GLTFSceneImporter::ConstructScene(GLTF.Schema.GLTFScene,System.Boolean,System.Threading.CancellationToken) */, L_21, L_22, L_23, L_24);
			NullCheck(L_25);
			TaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F  L_26 = Task_GetAwaiter_m73027D5E4C16E961C658B83526BED8E32FD2AC6C(L_25, /*hidden argument*/NULL);
			V_3 = L_26;
			bool L_27 = TaskAwaiter_get_IsCompleted_m5A2B6FEA0ED3B01B5E88DBF2D8BC4A45652ABD87((TaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F *)(&V_3), /*hidden argument*/NULL);
			if (L_27)
			{
				goto IL_00d0;
			}
		}

IL_0091:
		{
			int32_t L_28 = 0;
			V_0 = L_28;
			__this->set_U3CU3E1__state_0(L_28);
			TaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F  L_29 = V_3;
			__this->set_U3CU3Eu__1_6(L_29);
			AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487 * L_30 = __this->get_address_of_U3CU3Et__builder_1();
			AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F_TisU3C_LoadSceneU3Ed__61_t235926E3418670BF165AE82626829C7DF9BCDF57_m804E37614DF66F6F82376961253D71CF9C2CE30F((AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487 *)L_30, (TaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F *)(&V_3), (U3C_LoadSceneU3Ed__61_t235926E3418670BF165AE82626829C7DF9BCDF57 *)__this, /*hidden argument*/AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F_TisU3C_LoadSceneU3Ed__61_t235926E3418670BF165AE82626829C7DF9BCDF57_m804E37614DF66F6F82376961253D71CF9C2CE30F_RuntimeMethod_var);
			goto IL_0136;
		}

IL_00b4:
		{
			TaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F  L_31 = __this->get_U3CU3Eu__1_6();
			V_3 = L_31;
			TaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F * L_32 = __this->get_address_of_U3CU3Eu__1_6();
			il2cpp_codegen_initobj(L_32, sizeof(TaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F ));
			int32_t L_33 = (-1);
			V_0 = L_33;
			__this->set_U3CU3E1__state_0(L_33);
		}

IL_00d0:
		{
			TaskAwaiter_GetResult_m89868C01592AC2B06CE1FD42D9B9C187C6FD928A((TaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F *)(&V_3), /*hidden argument*/NULL);
			GLTFSceneImporter_t29A5109798926C47E5B089376F3E467E78EB710E * L_34 = V_1;
			NullCheck(L_34);
			Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_35 = GLTFSceneImporter_get_SceneParent_m024C6944150465D5154A60F25FC757E3CD9A15AC_inline(L_34, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
			bool L_36 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_35, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
			if (!L_36)
			{
				goto IL_00fc;
			}
		}

IL_00e5:
		{
			GLTFSceneImporter_t29A5109798926C47E5B089376F3E467E78EB710E * L_37 = V_1;
			NullCheck(L_37);
			GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_38 = GLTFSceneImporter_get_CreatedObject_mA374F1F0FDCC8968B6624F667818753D64E71704_inline(L_37, /*hidden argument*/NULL);
			NullCheck(L_38);
			Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_39 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_38, /*hidden argument*/NULL);
			GLTFSceneImporter_t29A5109798926C47E5B089376F3E467E78EB710E * L_40 = V_1;
			NullCheck(L_40);
			Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_41 = GLTFSceneImporter_get_SceneParent_m024C6944150465D5154A60F25FC757E3CD9A15AC_inline(L_40, /*hidden argument*/NULL);
			NullCheck(L_39);
			Transform_SetParent_m268E3814921D90882EFECE244A797264DE2A5E35(L_39, L_41, (bool)0, /*hidden argument*/NULL);
		}

IL_00fc:
		{
			GLTFSceneImporter_t29A5109798926C47E5B089376F3E467E78EB710E * L_42 = V_1;
			GLTFSceneImporter_t29A5109798926C47E5B089376F3E467E78EB710E * L_43 = V_1;
			NullCheck(L_43);
			GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_44 = GLTFSceneImporter_get_CreatedObject_mA374F1F0FDCC8968B6624F667818753D64E71704_inline(L_43, /*hidden argument*/NULL);
			NullCheck(L_42);
			L_42->set__lastLoadedScene_14(L_44);
			goto IL_0123;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (Exception_t_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_010a;
		throw e;
	}

CATCH_010a:
	{ // begin catch(System.Exception)
		V_4 = ((Exception_t *)__exception_local);
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487 * L_45 = __this->get_address_of_U3CU3Et__builder_1();
		Exception_t * L_46 = V_4;
		AsyncTaskMethodBuilder_SetException_m370C484922A63A6EF96E241D1370B8814F1F2D6B((AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487 *)L_45, L_46, /*hidden argument*/NULL);
		goto IL_0136;
	} // end catch (depth: 1)

IL_0123:
	{
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487 * L_47 = __this->get_address_of_U3CU3Et__builder_1();
		AsyncTaskMethodBuilder_SetResult_m151016FB698F3BB34A73BAE693A97513A7E4C838((AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487 *)L_47, /*hidden argument*/NULL);
	}

IL_0136:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3C_LoadSceneU3Ed__61_MoveNext_m568E0F79D7250D56497C86BF36A148FFA8E95A34_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	U3C_LoadSceneU3Ed__61_t235926E3418670BF165AE82626829C7DF9BCDF57 * _thisAdjusted = reinterpret_cast<U3C_LoadSceneU3Ed__61_t235926E3418670BF165AE82626829C7DF9BCDF57 *>(__this + 1);
	U3C_LoadSceneU3Ed__61_MoveNext_m568E0F79D7250D56497C86BF36A148FFA8E95A34(_thisAdjusted, method);
}
// System.Void UnityGLTF.GLTFSceneImporter_<_LoadScene>d__61::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3C_LoadSceneU3Ed__61_SetStateMachine_m7F073F1DBC33F490DD02CABCFA380DE7C42E1871 (U3C_LoadSceneU3Ed__61_t235926E3418670BF165AE82626829C7DF9BCDF57 * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	{
		AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487 * L_0 = __this->get_address_of_U3CU3Et__builder_1();
		RuntimeObject* L_1 = ___stateMachine0;
		AsyncTaskMethodBuilder_SetStateMachine_mB5DD68F7C49EA6D452AEBA02B1B98AED898C3C25((AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487 *)L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void U3C_LoadSceneU3Ed__61_SetStateMachine_m7F073F1DBC33F490DD02CABCFA380DE7C42E1871_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	U3C_LoadSceneU3Ed__61_t235926E3418670BF165AE82626829C7DF9BCDF57 * _thisAdjusted = reinterpret_cast<U3C_LoadSceneU3Ed__61_t235926E3418670BF165AE82626829C7DF9BCDF57 *>(__this + 1);
	U3C_LoadSceneU3Ed__61_SetStateMachine_m7F073F1DBC33F490DD02CABCFA380DE7C42E1871(_thisAdjusted, ___stateMachine0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: UnityGLTF.GLTFSceneImporter/GLBStream
IL2CPP_EXTERN_C void GLBStream_t62748985BC9D1878C913AEB01D89B3F28939AB3F_marshal_pinvoke(const GLBStream_t62748985BC9D1878C913AEB01D89B3F28939AB3F& unmarshaled, GLBStream_t62748985BC9D1878C913AEB01D89B3F28939AB3F_marshaled_pinvoke& marshaled)
{
	Exception_t* ___Stream_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'Stream' of type 'GLBStream': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___Stream_0Exception, NULL, NULL);
}
IL2CPP_EXTERN_C void GLBStream_t62748985BC9D1878C913AEB01D89B3F28939AB3F_marshal_pinvoke_back(const GLBStream_t62748985BC9D1878C913AEB01D89B3F28939AB3F_marshaled_pinvoke& marshaled, GLBStream_t62748985BC9D1878C913AEB01D89B3F28939AB3F& unmarshaled)
{
	Exception_t* ___Stream_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'Stream' of type 'GLBStream': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___Stream_0Exception, NULL, NULL);
}
// Conversion method for clean up from marshalling of: UnityGLTF.GLTFSceneImporter/GLBStream
IL2CPP_EXTERN_C void GLBStream_t62748985BC9D1878C913AEB01D89B3F28939AB3F_marshal_pinvoke_cleanup(GLBStream_t62748985BC9D1878C913AEB01D89B3F28939AB3F_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: UnityGLTF.GLTFSceneImporter/GLBStream
IL2CPP_EXTERN_C void GLBStream_t62748985BC9D1878C913AEB01D89B3F28939AB3F_marshal_com(const GLBStream_t62748985BC9D1878C913AEB01D89B3F28939AB3F& unmarshaled, GLBStream_t62748985BC9D1878C913AEB01D89B3F28939AB3F_marshaled_com& marshaled)
{
	Exception_t* ___Stream_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'Stream' of type 'GLBStream': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___Stream_0Exception, NULL, NULL);
}
IL2CPP_EXTERN_C void GLBStream_t62748985BC9D1878C913AEB01D89B3F28939AB3F_marshal_com_back(const GLBStream_t62748985BC9D1878C913AEB01D89B3F28939AB3F_marshaled_com& marshaled, GLBStream_t62748985BC9D1878C913AEB01D89B3F28939AB3F& unmarshaled)
{
	Exception_t* ___Stream_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'Stream' of type 'GLBStream': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___Stream_0Exception, NULL, NULL);
}
// Conversion method for clean up from marshalling of: UnityGLTF.GLTFSceneImporter/GLBStream
IL2CPP_EXTERN_C void GLBStream_t62748985BC9D1878C913AEB01D89B3F28939AB3F_marshal_com_cleanup(GLBStream_t62748985BC9D1878C913AEB01D89B3F28939AB3F_marshaled_com& marshaled)
{
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityGLTF.ImportOptions::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ImportOptions__ctor_m06A66FD866D8E45D697A45AC6DDEBCC419D9F506 (ImportOptions_tF7380126D05F8D0CD248534D3C19EA83F20FA88E * __this, const RuntimeMethod* method)
{
	{
		__this->set_ThrowOnLowMemory_3((bool)1);
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: UnityGLTF.ImportProgress
IL2CPP_EXTERN_C void ImportProgress_t4F58A59AEDE43A81DEEE82088082DD48A47DB28D_marshal_pinvoke(const ImportProgress_t4F58A59AEDE43A81DEEE82088082DD48A47DB28D& unmarshaled, ImportProgress_t4F58A59AEDE43A81DEEE82088082DD48A47DB28D_marshaled_pinvoke& marshaled)
{
	marshaled.___IsDownloaded_0 = static_cast<int32_t>(unmarshaled.get_IsDownloaded_0());
	marshaled.___NodeTotal_1 = unmarshaled.get_NodeTotal_1();
	marshaled.___NodeLoaded_2 = unmarshaled.get_NodeLoaded_2();
	marshaled.___TextureTotal_3 = unmarshaled.get_TextureTotal_3();
	marshaled.___TextureLoaded_4 = unmarshaled.get_TextureLoaded_4();
	marshaled.___BuffersTotal_5 = unmarshaled.get_BuffersTotal_5();
	marshaled.___BuffersLoaded_6 = unmarshaled.get_BuffersLoaded_6();
}
IL2CPP_EXTERN_C void ImportProgress_t4F58A59AEDE43A81DEEE82088082DD48A47DB28D_marshal_pinvoke_back(const ImportProgress_t4F58A59AEDE43A81DEEE82088082DD48A47DB28D_marshaled_pinvoke& marshaled, ImportProgress_t4F58A59AEDE43A81DEEE82088082DD48A47DB28D& unmarshaled)
{
	bool unmarshaled_IsDownloaded_temp_0 = false;
	unmarshaled_IsDownloaded_temp_0 = static_cast<bool>(marshaled.___IsDownloaded_0);
	unmarshaled.set_IsDownloaded_0(unmarshaled_IsDownloaded_temp_0);
	int32_t unmarshaled_NodeTotal_temp_1 = 0;
	unmarshaled_NodeTotal_temp_1 = marshaled.___NodeTotal_1;
	unmarshaled.set_NodeTotal_1(unmarshaled_NodeTotal_temp_1);
	int32_t unmarshaled_NodeLoaded_temp_2 = 0;
	unmarshaled_NodeLoaded_temp_2 = marshaled.___NodeLoaded_2;
	unmarshaled.set_NodeLoaded_2(unmarshaled_NodeLoaded_temp_2);
	int32_t unmarshaled_TextureTotal_temp_3 = 0;
	unmarshaled_TextureTotal_temp_3 = marshaled.___TextureTotal_3;
	unmarshaled.set_TextureTotal_3(unmarshaled_TextureTotal_temp_3);
	int32_t unmarshaled_TextureLoaded_temp_4 = 0;
	unmarshaled_TextureLoaded_temp_4 = marshaled.___TextureLoaded_4;
	unmarshaled.set_TextureLoaded_4(unmarshaled_TextureLoaded_temp_4);
	int32_t unmarshaled_BuffersTotal_temp_5 = 0;
	unmarshaled_BuffersTotal_temp_5 = marshaled.___BuffersTotal_5;
	unmarshaled.set_BuffersTotal_5(unmarshaled_BuffersTotal_temp_5);
	int32_t unmarshaled_BuffersLoaded_temp_6 = 0;
	unmarshaled_BuffersLoaded_temp_6 = marshaled.___BuffersLoaded_6;
	unmarshaled.set_BuffersLoaded_6(unmarshaled_BuffersLoaded_temp_6);
}
// Conversion method for clean up from marshalling of: UnityGLTF.ImportProgress
IL2CPP_EXTERN_C void ImportProgress_t4F58A59AEDE43A81DEEE82088082DD48A47DB28D_marshal_pinvoke_cleanup(ImportProgress_t4F58A59AEDE43A81DEEE82088082DD48A47DB28D_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: UnityGLTF.ImportProgress
IL2CPP_EXTERN_C void ImportProgress_t4F58A59AEDE43A81DEEE82088082DD48A47DB28D_marshal_com(const ImportProgress_t4F58A59AEDE43A81DEEE82088082DD48A47DB28D& unmarshaled, ImportProgress_t4F58A59AEDE43A81DEEE82088082DD48A47DB28D_marshaled_com& marshaled)
{
	marshaled.___IsDownloaded_0 = static_cast<int32_t>(unmarshaled.get_IsDownloaded_0());
	marshaled.___NodeTotal_1 = unmarshaled.get_NodeTotal_1();
	marshaled.___NodeLoaded_2 = unmarshaled.get_NodeLoaded_2();
	marshaled.___TextureTotal_3 = unmarshaled.get_TextureTotal_3();
	marshaled.___TextureLoaded_4 = unmarshaled.get_TextureLoaded_4();
	marshaled.___BuffersTotal_5 = unmarshaled.get_BuffersTotal_5();
	marshaled.___BuffersLoaded_6 = unmarshaled.get_BuffersLoaded_6();
}
IL2CPP_EXTERN_C void ImportProgress_t4F58A59AEDE43A81DEEE82088082DD48A47DB28D_marshal_com_back(const ImportProgress_t4F58A59AEDE43A81DEEE82088082DD48A47DB28D_marshaled_com& marshaled, ImportProgress_t4F58A59AEDE43A81DEEE82088082DD48A47DB28D& unmarshaled)
{
	bool unmarshaled_IsDownloaded_temp_0 = false;
	unmarshaled_IsDownloaded_temp_0 = static_cast<bool>(marshaled.___IsDownloaded_0);
	unmarshaled.set_IsDownloaded_0(unmarshaled_IsDownloaded_temp_0);
	int32_t unmarshaled_NodeTotal_temp_1 = 0;
	unmarshaled_NodeTotal_temp_1 = marshaled.___NodeTotal_1;
	unmarshaled.set_NodeTotal_1(unmarshaled_NodeTotal_temp_1);
	int32_t unmarshaled_NodeLoaded_temp_2 = 0;
	unmarshaled_NodeLoaded_temp_2 = marshaled.___NodeLoaded_2;
	unmarshaled.set_NodeLoaded_2(unmarshaled_NodeLoaded_temp_2);
	int32_t unmarshaled_TextureTotal_temp_3 = 0;
	unmarshaled_TextureTotal_temp_3 = marshaled.___TextureTotal_3;
	unmarshaled.set_TextureTotal_3(unmarshaled_TextureTotal_temp_3);
	int32_t unmarshaled_TextureLoaded_temp_4 = 0;
	unmarshaled_TextureLoaded_temp_4 = marshaled.___TextureLoaded_4;
	unmarshaled.set_TextureLoaded_4(unmarshaled_TextureLoaded_temp_4);
	int32_t unmarshaled_BuffersTotal_temp_5 = 0;
	unmarshaled_BuffersTotal_temp_5 = marshaled.___BuffersTotal_5;
	unmarshaled.set_BuffersTotal_5(unmarshaled_BuffersTotal_temp_5);
	int32_t unmarshaled_BuffersLoaded_temp_6 = 0;
	unmarshaled_BuffersLoaded_temp_6 = marshaled.___BuffersLoaded_6;
	unmarshaled.set_BuffersLoaded_6(unmarshaled_BuffersLoaded_temp_6);
}
// Conversion method for clean up from marshalling of: UnityGLTF.ImportProgress
IL2CPP_EXTERN_C void ImportProgress_t4F58A59AEDE43A81DEEE82088082DD48A47DB28D_marshal_com_cleanup(ImportProgress_t4F58A59AEDE43A81DEEE82088082DD48A47DB28D_marshaled_com& marshaled)
{
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityGLTF.ImporterFactory::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ImporterFactory__ctor_mBE610A97264478FFE59D0A82477A4022EE9510FB (ImporterFactory_tF4C9DDC9F2F0F811B53269CB45BD63B79953921A * __this, const RuntimeMethod* method)
{
	{
		ScriptableObject__ctor_m6E2B3821A4A361556FC12E9B1C71E1D5DC002C5B(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// UnityGLTF.Cache.RefCountedCacheData UnityGLTF.InstantiatedGLTFObject::get_CachedData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RefCountedCacheData_t3E7A4E802B00500764E6515507894E680D89D572 * InstantiatedGLTFObject_get_CachedData_mD9A2EB60267B0ECF6802D9960266B773619E1F22 (InstantiatedGLTFObject_t03E5C1C7AE61E8CF56BC66C274C240C65511816B * __this, const RuntimeMethod* method)
{
	{
		RefCountedCacheData_t3E7A4E802B00500764E6515507894E680D89D572 * L_0 = __this->get_cachedData_4();
		return L_0;
	}
}
// System.Void UnityGLTF.InstantiatedGLTFObject::set_CachedData(UnityGLTF.Cache.RefCountedCacheData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InstantiatedGLTFObject_set_CachedData_mA7F0FB8174485BDC3AE2F7D6F856351339CEF0BC (InstantiatedGLTFObject_t03E5C1C7AE61E8CF56BC66C274C240C65511816B * __this, RefCountedCacheData_t3E7A4E802B00500764E6515507894E680D89D572 * ___value0, const RuntimeMethod* method)
{
	{
		RefCountedCacheData_t3E7A4E802B00500764E6515507894E680D89D572 * L_0 = __this->get_cachedData_4();
		RefCountedCacheData_t3E7A4E802B00500764E6515507894E680D89D572 * L_1 = ___value0;
		if ((((RuntimeObject*)(RefCountedCacheData_t3E7A4E802B00500764E6515507894E680D89D572 *)L_0) == ((RuntimeObject*)(RefCountedCacheData_t3E7A4E802B00500764E6515507894E680D89D572 *)L_1)))
		{
			goto IL_0036;
		}
	}
	{
		RefCountedCacheData_t3E7A4E802B00500764E6515507894E680D89D572 * L_2 = __this->get_cachedData_4();
		if (!L_2)
		{
			goto IL_001c;
		}
	}
	{
		RefCountedCacheData_t3E7A4E802B00500764E6515507894E680D89D572 * L_3 = __this->get_cachedData_4();
		NullCheck(L_3);
		RefCountedCacheData_DecreaseRefCount_m6557CEAF8BC29CB712DC1E433FFA50A83266B29A(L_3, /*hidden argument*/NULL);
	}

IL_001c:
	{
		RefCountedCacheData_t3E7A4E802B00500764E6515507894E680D89D572 * L_4 = ___value0;
		__this->set_cachedData_4(L_4);
		RefCountedCacheData_t3E7A4E802B00500764E6515507894E680D89D572 * L_5 = __this->get_cachedData_4();
		if (!L_5)
		{
			goto IL_0036;
		}
	}
	{
		RefCountedCacheData_t3E7A4E802B00500764E6515507894E680D89D572 * L_6 = __this->get_cachedData_4();
		NullCheck(L_6);
		RefCountedCacheData_IncreaseRefCount_m0FA8DF83E5CF1944647E7C73C742BCE39A305503(L_6, /*hidden argument*/NULL);
	}

IL_0036:
	{
		return;
	}
}
// UnityGLTF.InstantiatedGLTFObject UnityGLTF.InstantiatedGLTFObject::Duplicate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InstantiatedGLTFObject_t03E5C1C7AE61E8CF56BC66C274C240C65511816B * InstantiatedGLTFObject_Duplicate_mB2D59663613F6448E90BD676B742103B715405A9 (InstantiatedGLTFObject_t03E5C1C7AE61E8CF56BC66C274C240C65511816B * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InstantiatedGLTFObject_Duplicate_mB2D59663613F6448E90BD676B742103B715405A9_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_0 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_1 = Object_Instantiate_TisGameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_mC4AB712D7F18E0991E1542CE53F11385E21E7B90(L_0, /*hidden argument*/Object_Instantiate_TisGameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_mC4AB712D7F18E0991E1542CE53F11385E21E7B90_RuntimeMethod_var);
		NullCheck(L_1);
		InstantiatedGLTFObject_t03E5C1C7AE61E8CF56BC66C274C240C65511816B * L_2 = GameObject_GetComponent_TisInstantiatedGLTFObject_t03E5C1C7AE61E8CF56BC66C274C240C65511816B_m18F885773E8E7E8AE24577C61F8769DCD707303A(L_1, /*hidden argument*/GameObject_GetComponent_TisInstantiatedGLTFObject_t03E5C1C7AE61E8CF56BC66C274C240C65511816B_m18F885773E8E7E8AE24577C61F8769DCD707303A_RuntimeMethod_var);
		InstantiatedGLTFObject_t03E5C1C7AE61E8CF56BC66C274C240C65511816B * L_3 = L_2;
		RefCountedCacheData_t3E7A4E802B00500764E6515507894E680D89D572 * L_4 = InstantiatedGLTFObject_get_CachedData_mD9A2EB60267B0ECF6802D9960266B773619E1F22_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_3);
		InstantiatedGLTFObject_set_CachedData_mA7F0FB8174485BDC3AE2F7D6F856351339CEF0BC(L_3, L_4, /*hidden argument*/NULL);
		return L_3;
	}
}
// System.Void UnityGLTF.InstantiatedGLTFObject::OnDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InstantiatedGLTFObject_OnDestroy_m8DCD45881305FA90089B285B76E77F4A99027214 (InstantiatedGLTFObject_t03E5C1C7AE61E8CF56BC66C274C240C65511816B * __this, const RuntimeMethod* method)
{
	{
		InstantiatedGLTFObject_set_CachedData_mA7F0FB8174485BDC3AE2F7D6F856351339CEF0BC(__this, (RefCountedCacheData_t3E7A4E802B00500764E6515507894E680D89D572 *)NULL, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityGLTF.InstantiatedGLTFObject::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InstantiatedGLTFObject__ctor_mB141544EE66DA8C078E0277B67F9D40FAFC253D5 (InstantiatedGLTFObject_t03E5C1C7AE61E8CF56BC66C274C240C65511816B * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityGLTF.Loader.FileLoader::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FileLoader__ctor_mACEEC51EC7298D9B9D0A01D67EA45A50855DE211 (FileLoader_t0E6039215F6C1ABA58F3C0F708E581A45BDF3BC8 * __this, String_t* ___rootDirectoryPath0, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___rootDirectoryPath0;
		__this->set__rootDirectoryPath_0(L_0);
		return;
	}
}
// System.Threading.Tasks.Task`1<System.IO.Stream> UnityGLTF.Loader.FileLoader::LoadStreamAsync(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_tAA7557E5A6A8B2C89E44907CB5B0502A618E9D01 * FileLoader_LoadStreamAsync_mAD76D71A84881D7CCBBE121C260915CCB383EBBB (FileLoader_t0E6039215F6C1ABA58F3C0F708E581A45BDF3BC8 * __this, String_t* ___relativeFilePath0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (FileLoader_LoadStreamAsync_mAD76D71A84881D7CCBBE121C260915CCB383EBBB_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec__DisplayClass2_0_t3678587430018971900F898C01E0454C44B67E11 * L_0 = (U3CU3Ec__DisplayClass2_0_t3678587430018971900F898C01E0454C44B67E11 *)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass2_0_t3678587430018971900F898C01E0454C44B67E11_il2cpp_TypeInfo_var);
		U3CU3Ec__DisplayClass2_0__ctor_m788FC2C2E4FA700FF5FC1B78D0B1301BA99F63A2(L_0, /*hidden argument*/NULL);
		U3CU3Ec__DisplayClass2_0_t3678587430018971900F898C01E0454C44B67E11 * L_1 = L_0;
		NullCheck(L_1);
		L_1->set_U3CU3E4__this_0(__this);
		U3CU3Ec__DisplayClass2_0_t3678587430018971900F898C01E0454C44B67E11 * L_2 = L_1;
		String_t* L_3 = ___relativeFilePath0;
		NullCheck(L_2);
		L_2->set_relativeFilePath_1(L_3);
		Func_1_tF4352FCFF143E795C0D762BB22D817C4457922EC * L_4 = (Func_1_tF4352FCFF143E795C0D762BB22D817C4457922EC *)il2cpp_codegen_object_new(Func_1_tF4352FCFF143E795C0D762BB22D817C4457922EC_il2cpp_TypeInfo_var);
		Func_1__ctor_m01A998C67EF5BB6BDEB26C5AF8A91983E9D80814(L_4, L_2, (intptr_t)((intptr_t)U3CU3Ec__DisplayClass2_0_U3CLoadStreamAsyncU3Eb__0_m299366B52DCB6CDDDDC1DF60A81288144C858A01_RuntimeMethod_var), /*hidden argument*/Func_1__ctor_m01A998C67EF5BB6BDEB26C5AF8A91983E9D80814_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2_il2cpp_TypeInfo_var);
		Task_1_tAA7557E5A6A8B2C89E44907CB5B0502A618E9D01 * L_5 = Task_Run_TisStream_tFC50657DD5AAB87770987F9179D934A51D99D5E7_mCF589D34FB48EFA2AFBCB8199682144F9D550ED7(L_4, /*hidden argument*/Task_Run_TisStream_tFC50657DD5AAB87770987F9179D934A51D99D5E7_mCF589D34FB48EFA2AFBCB8199682144F9D550ED7_RuntimeMethod_var);
		return L_5;
	}
}
// System.IO.Stream UnityGLTF.Loader.FileLoader::LoadStream(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * FileLoader_LoadStream_m44762DC69301AB58DEFC28123254876747D2E715 (FileLoader_t0E6039215F6C1ABA58F3C0F708E581A45BDF3BC8 * __this, String_t* ___relativeFilePath0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (FileLoader_LoadStream_m44762DC69301AB58DEFC28123254876747D2E715_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* G_B4_0 = NULL;
	String_t* G_B3_0 = NULL;
	{
		String_t* L_0 = ___relativeFilePath0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD * L_1 = (ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD *)il2cpp_codegen_object_new(ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_mEE0C0D6FCB2D08CD7967DBB1329A0854BBED49ED(L_1, _stringLiteralBC6BB163561B3286434F3D48B88DEAD08D7BC2ED, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, NULL, FileLoader_LoadStream_m44762DC69301AB58DEFC28123254876747D2E715_RuntimeMethod_var);
	}

IL_000e:
	{
		String_t* L_2 = __this->get__rootDirectoryPath_0();
		String_t* L_3 = ___relativeFilePath0;
		IL2CPP_RUNTIME_CLASS_INIT(Path_t0B99A4B924A6FDF08814FFA8DD4CD121ED1A0752_il2cpp_TypeInfo_var);
		String_t* L_4 = Path_Combine_mA495A18104786EB450EC0E44EE0FB7F9040C4311(L_2, L_3, /*hidden argument*/NULL);
		String_t* L_5 = L_4;
		bool L_6 = File_Exists_m6B9BDD8EEB33D744EB0590DD27BC0152FAFBD1FB(L_5, /*hidden argument*/NULL);
		G_B3_0 = L_5;
		if (L_6)
		{
			G_B4_0 = L_5;
			goto IL_002e;
		}
	}
	{
		String_t* L_7 = ___relativeFilePath0;
		FileNotFoundException_t0B3F0AE5C94A781A7E2ABBD786F91C229B703431 * L_8 = (FileNotFoundException_t0B3F0AE5C94A781A7E2ABBD786F91C229B703431 *)il2cpp_codegen_object_new(FileNotFoundException_t0B3F0AE5C94A781A7E2ABBD786F91C229B703431_il2cpp_TypeInfo_var);
		FileNotFoundException__ctor_mB97B07D7D9C7A611842518376C8E11B56AD4CA98(L_8, _stringLiteralBB4F4F56B646130E64F53A771DA5BE8F8BF2A4F6, L_7, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_8, NULL, FileLoader_LoadStream_m44762DC69301AB58DEFC28123254876747D2E715_RuntimeMethod_var);
	}

IL_002e:
	{
		FileStream_tA770BF9AF0906644D43C81B962C7DBC3BC79A418 * L_9 = File_OpenRead_m3B2974AB5AA8011E587AC834BE71862BF77C2129(G_B4_0, /*hidden argument*/NULL);
		return L_9;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityGLTF.Loader.FileLoader_<>c__DisplayClass2_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass2_0__ctor_m788FC2C2E4FA700FF5FC1B78D0B1301BA99F63A2 (U3CU3Ec__DisplayClass2_0_t3678587430018971900F898C01E0454C44B67E11 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.IO.Stream UnityGLTF.Loader.FileLoader_<>c__DisplayClass2_0::<LoadStreamAsync>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * U3CU3Ec__DisplayClass2_0_U3CLoadStreamAsyncU3Eb__0_m299366B52DCB6CDDDDC1DF60A81288144C858A01 (U3CU3Ec__DisplayClass2_0_t3678587430018971900F898C01E0454C44B67E11 * __this, const RuntimeMethod* method)
{
	{
		FileLoader_t0E6039215F6C1ABA58F3C0F708E581A45BDF3BC8 * L_0 = __this->get_U3CU3E4__this_0();
		String_t* L_1 = __this->get_relativeFilePath_1();
		NullCheck(L_0);
		Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * L_2 = FileLoader_LoadStream_m44762DC69301AB58DEFC28123254876747D2E715(L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// UnityGLTF.Loader.IDataLoader UnityGLTF.Loader.LegacyLoaderWrapper::Wrap(UnityGLTF.Loader.ILoader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* LegacyLoaderWrapper_Wrap_m73A785C13564B6F0FFD54C3A1782FA803DC34FD4 (RuntimeObject* ___loader0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (LegacyLoaderWrapper_Wrap_m73A785C13564B6F0FFD54C3A1782FA803DC34FD4_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___loader0;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		return (RuntimeObject*)NULL;
	}

IL_0005:
	{
		RuntimeObject* L_1 = ___loader0;
		NullCheck(L_1);
		bool L_2 = InterfaceFuncInvoker0< bool >::Invoke(3 /* System.Boolean UnityGLTF.Loader.ILoader::get_HasSyncLoadMethod() */, ILoader_tF8528F7ADD3975C18073805E5733B9B974FBE79C_il2cpp_TypeInfo_var, L_1);
		if (!L_2)
		{
			goto IL_0014;
		}
	}
	{
		RuntimeObject* L_3 = ___loader0;
		LegacyLoader2_t0452563D748486937601133A68E894CFB0FEB5D1 * L_4 = (LegacyLoader2_t0452563D748486937601133A68E894CFB0FEB5D1 *)il2cpp_codegen_object_new(LegacyLoader2_t0452563D748486937601133A68E894CFB0FEB5D1_il2cpp_TypeInfo_var);
		LegacyLoader2__ctor_mA989F2315BEC1BC62D91B7DA499A895397091A25(L_4, L_3, /*hidden argument*/NULL);
		return L_4;
	}

IL_0014:
	{
		RuntimeObject* L_5 = ___loader0;
		LegacyLoader_t5912492DEE5FE2B93A98D527C8D49A91CFDA8A22 * L_6 = (LegacyLoader_t5912492DEE5FE2B93A98D527C8D49A91CFDA8A22 *)il2cpp_codegen_object_new(LegacyLoader_t5912492DEE5FE2B93A98D527C8D49A91CFDA8A22_il2cpp_TypeInfo_var);
		LegacyLoader__ctor_mB6EE440CC5B2364037797F74321739F140C697C4(L_6, L_5, /*hidden argument*/NULL);
		return L_6;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityGLTF.Loader.LegacyLoaderWrapper_LegacyLoader::.ctor(UnityGLTF.Loader.ILoader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LegacyLoader__ctor_mB6EE440CC5B2364037797F74321739F140C697C4 (LegacyLoader_t5912492DEE5FE2B93A98D527C8D49A91CFDA8A22 * __this, RuntimeObject* ___loader0, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		RuntimeObject* L_0 = ___loader0;
		__this->set__loader_0(L_0);
		return;
	}
}
// System.Threading.Tasks.Task`1<System.IO.Stream> UnityGLTF.Loader.LegacyLoaderWrapper_LegacyLoader::LoadStreamAsync(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_tAA7557E5A6A8B2C89E44907CB5B0502A618E9D01 * LegacyLoader_LoadStreamAsync_m23632EBF17A332C163AC30BCB32A041E85B126FD (LegacyLoader_t5912492DEE5FE2B93A98D527C8D49A91CFDA8A22 * __this, String_t* ___relativeFilePath0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (LegacyLoader_LoadStreamAsync_m23632EBF17A332C163AC30BCB32A041E85B126FD_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->get__loader_0();
		String_t* L_1 = ___relativeFilePath0;
		NullCheck(L_0);
		InterfaceFuncInvoker1< Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 *, String_t* >::Invoke(0 /* System.Threading.Tasks.Task UnityGLTF.Loader.ILoader::LoadStream(System.String) */, ILoader_tF8528F7ADD3975C18073805E5733B9B974FBE79C_il2cpp_TypeInfo_var, L_0, L_1);
		RuntimeObject* L_2 = __this->get__loader_0();
		NullCheck(L_2);
		Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * L_3 = InterfaceFuncInvoker0< Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * >::Invoke(2 /* System.IO.Stream UnityGLTF.Loader.ILoader::get_LoadedStream() */, ILoader_tF8528F7ADD3975C18073805E5733B9B974FBE79C_il2cpp_TypeInfo_var, L_2);
		IL2CPP_RUNTIME_CLASS_INIT(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2_il2cpp_TypeInfo_var);
		Task_1_tAA7557E5A6A8B2C89E44907CB5B0502A618E9D01 * L_4 = Task_FromResult_TisStream_tFC50657DD5AAB87770987F9179D934A51D99D5E7_m304EF757D9D1D57BB2E9D0B5D503A4C281684C56(L_3, /*hidden argument*/Task_FromResult_TisStream_tFC50657DD5AAB87770987F9179D934A51D99D5E7_m304EF757D9D1D57BB2E9D0B5D503A4C281684C56_RuntimeMethod_var);
		return L_4;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityGLTF.Loader.LegacyLoaderWrapper_LegacyLoader2::.ctor(UnityGLTF.Loader.ILoader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LegacyLoader2__ctor_mA989F2315BEC1BC62D91B7DA499A895397091A25 (LegacyLoader2_t0452563D748486937601133A68E894CFB0FEB5D1 * __this, RuntimeObject* ___loader0, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = ___loader0;
		LegacyLoader__ctor_mB6EE440CC5B2364037797F74321739F140C697C4(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.IO.Stream UnityGLTF.Loader.LegacyLoaderWrapper_LegacyLoader2::LoadStream(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * LegacyLoader2_LoadStream_m09C8A492FCC20E5A539A31CC5A219A7E4A4FDE9B (LegacyLoader2_t0452563D748486937601133A68E894CFB0FEB5D1 * __this, String_t* ___relativeFilePath0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (LegacyLoader2_LoadStream_m09C8A492FCC20E5A539A31CC5A219A7E4A4FDE9B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ((LegacyLoader_t5912492DEE5FE2B93A98D527C8D49A91CFDA8A22 *)__this)->get__loader_0();
		String_t* L_1 = ___relativeFilePath0;
		NullCheck(L_0);
		InterfaceActionInvoker1< String_t* >::Invoke(1 /* System.Void UnityGLTF.Loader.ILoader::LoadStreamSync(System.String) */, ILoader_tF8528F7ADD3975C18073805E5733B9B974FBE79C_il2cpp_TypeInfo_var, L_0, L_1);
		RuntimeObject* L_2 = ((LegacyLoader_t5912492DEE5FE2B93A98D527C8D49A91CFDA8A22 *)__this)->get__loader_0();
		NullCheck(L_2);
		Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * L_3 = InterfaceFuncInvoker0< Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * >::Invoke(2 /* System.IO.Stream UnityGLTF.Loader.ILoader::get_LoadedStream() */, ILoader_tF8528F7ADD3975C18073805E5733B9B974FBE79C_il2cpp_TypeInfo_var, L_2);
		return L_3;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityGLTF.Loader.WebRequestLoader::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebRequestLoader__ctor_m5009007CA6C43F8C05BADD8B91BE281429811319 (WebRequestLoader_tF1F01C9F12FA444AAA9D3466649478998AECB291 * __this, String_t* ___rootUri0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WebRequestLoader__ctor_m5009007CA6C43F8C05BADD8B91BE281429811319_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		HttpClient_tC7477E4B30DD5CFE1B41DD9CD2EA1F83DB4DE9E7 * L_0 = (HttpClient_tC7477E4B30DD5CFE1B41DD9CD2EA1F83DB4DE9E7 *)il2cpp_codegen_object_new(HttpClient_tC7477E4B30DD5CFE1B41DD9CD2EA1F83DB4DE9E7_il2cpp_TypeInfo_var);
		HttpClient__ctor_m179C3B29F7C664CDC5B5761E24EC2E9685385A1F(L_0, /*hidden argument*/NULL);
		__this->set_httpClient_0(L_0);
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		RemoteCertificateValidationCallback_t9C6BA19681BAA3CD78E6674293A57FF5DF62831E * L_1 = (RemoteCertificateValidationCallback_t9C6BA19681BAA3CD78E6674293A57FF5DF62831E *)il2cpp_codegen_object_new(RemoteCertificateValidationCallback_t9C6BA19681BAA3CD78E6674293A57FF5DF62831E_il2cpp_TypeInfo_var);
		RemoteCertificateValidationCallback__ctor_m830361B1E3107AC75A34E07042B4A2567B331E3F(L_1, NULL, (intptr_t)((intptr_t)WebRequestLoader_ValidateServerCertificate_m6EE7B32ECD6C8762997839875178BC863DCFD4FF_RuntimeMethod_var), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(ServicePointManager_tB30C5869193569552EC4F0F454EF3ACF3908DC02_il2cpp_TypeInfo_var);
		ServicePointManager_set_ServerCertificateValidationCallback_m5F7A15AF5E38A59E64879079DDB83B5845DBC087(L_1, /*hidden argument*/NULL);
		String_t* L_2 = ___rootUri0;
		Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E * L_3 = (Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E *)il2cpp_codegen_object_new(Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E_il2cpp_TypeInfo_var);
		Uri__ctor_mBA69907A1D799CD12ED44B611985B25FE4C626A2(L_3, L_2, /*hidden argument*/NULL);
		__this->set_baseAddress_1(L_3);
		return;
	}
}
// System.Threading.Tasks.Task`1<System.IO.Stream> UnityGLTF.Loader.WebRequestLoader::LoadStreamAsync(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_tAA7557E5A6A8B2C89E44907CB5B0502A618E9D01 * WebRequestLoader_LoadStreamAsync_mCF9536C0F590946D842C9D368EF762B70D6D6808 (WebRequestLoader_tF1F01C9F12FA444AAA9D3466649478998AECB291 * __this, String_t* ___gltfFilePath0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WebRequestLoader_LoadStreamAsync_mCF9536C0F590946D842C9D368EF762B70D6D6808_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3CLoadStreamAsyncU3Ed__3_t50DFA3B38506B50EA0F0E43D41F7D967B4E80BC1  V_0;
	memset((&V_0), 0, sizeof(V_0));
	AsyncTaskMethodBuilder_1_t629F383EABB1E23F4CFEEA0B7A1783E79CB8EF9C  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		(&V_0)->set_U3CU3E4__this_3(__this);
		String_t* L_0 = ___gltfFilePath0;
		(&V_0)->set_gltfFilePath_2(L_0);
		IL2CPP_RUNTIME_CLASS_INIT(AsyncTaskMethodBuilder_1_t629F383EABB1E23F4CFEEA0B7A1783E79CB8EF9C_il2cpp_TypeInfo_var);
		AsyncTaskMethodBuilder_1_t629F383EABB1E23F4CFEEA0B7A1783E79CB8EF9C  L_1 = AsyncTaskMethodBuilder_1_Create_mE990EBE247374CEF78C09BAC4A1845B42E2AF225(/*hidden argument*/AsyncTaskMethodBuilder_1_Create_mE990EBE247374CEF78C09BAC4A1845B42E2AF225_RuntimeMethod_var);
		(&V_0)->set_U3CU3Et__builder_1(L_1);
		(&V_0)->set_U3CU3E1__state_0((-1));
		U3CLoadStreamAsyncU3Ed__3_t50DFA3B38506B50EA0F0E43D41F7D967B4E80BC1  L_2 = V_0;
		AsyncTaskMethodBuilder_1_t629F383EABB1E23F4CFEEA0B7A1783E79CB8EF9C  L_3 = L_2.get_U3CU3Et__builder_1();
		V_1 = L_3;
		AsyncTaskMethodBuilder_1_Start_TisU3CLoadStreamAsyncU3Ed__3_t50DFA3B38506B50EA0F0E43D41F7D967B4E80BC1_mB0E358C581265F31369FAAA7C9B372AE81105EC4((AsyncTaskMethodBuilder_1_t629F383EABB1E23F4CFEEA0B7A1783E79CB8EF9C *)(&V_1), (U3CLoadStreamAsyncU3Ed__3_t50DFA3B38506B50EA0F0E43D41F7D967B4E80BC1 *)(&V_0), /*hidden argument*/AsyncTaskMethodBuilder_1_Start_TisU3CLoadStreamAsyncU3Ed__3_t50DFA3B38506B50EA0F0E43D41F7D967B4E80BC1_mB0E358C581265F31369FAAA7C9B372AE81105EC4_RuntimeMethod_var);
		AsyncTaskMethodBuilder_1_t629F383EABB1E23F4CFEEA0B7A1783E79CB8EF9C * L_4 = (&V_0)->get_address_of_U3CU3Et__builder_1();
		Task_1_tAA7557E5A6A8B2C89E44907CB5B0502A618E9D01 * L_5 = AsyncTaskMethodBuilder_1_get_Task_m638684DB3092DA761CD7ABE7A0A10D26A18FF017((AsyncTaskMethodBuilder_1_t629F383EABB1E23F4CFEEA0B7A1783E79CB8EF9C *)L_4, /*hidden argument*/AsyncTaskMethodBuilder_1_get_Task_m638684DB3092DA761CD7ABE7A0A10D26A18FF017_RuntimeMethod_var);
		return L_5;
	}
}
// System.Boolean UnityGLTF.Loader.WebRequestLoader::ValidateServerCertificate(System.Object,System.Security.Cryptography.X509Certificates.X509Certificate,System.Security.Cryptography.X509Certificates.X509Chain,System.Net.Security.SslPolicyErrors)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WebRequestLoader_ValidateServerCertificate_m6EE7B32ECD6C8762997839875178BC863DCFD4FF (RuntimeObject * ___sender0, X509Certificate_t6859B8914E252B6831D6F59A2A720CD23F7FA7B2 * ___certificate1, X509Chain_t4A28E9A30CBB331C9B68AE4AFCB30625C6C8B538 * ___chain2, int32_t ___errors3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WebRequestLoader_ValidateServerCertificate_m6EE7B32ECD6C8762997839875178BC863DCFD4FF_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	{
		V_0 = (bool)1;
		int32_t L_0 = ___errors3;
		if (!L_0)
		{
			goto IL_0078;
		}
	}
	{
		V_1 = 0;
		goto IL_006d;
	}

IL_0009:
	{
		X509Chain_t4A28E9A30CBB331C9B68AE4AFCB30625C6C8B538 * L_1 = ___chain2;
		NullCheck(L_1);
		X509ChainStatusU5BU5D_tA8CCC33D50C4BCF6F657063CD1DACCC3B9A7BFBB* L_2 = X509Chain_get_ChainStatus_mC51B55A2E42D6C213FB77E43594CF3D53B0247A8(L_1, /*hidden argument*/NULL);
		int32_t L_3 = V_1;
		NullCheck(L_2);
		int32_t L_4 = X509ChainStatus_get_Status_mEEC25ED0247E17DDC922F799955225690F176EF0_inline((X509ChainStatus_t9E05BD8700EA6158AC82F71CBE53AD20F6B99B0C *)((L_2)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_3))), /*hidden argument*/NULL);
		if ((((int32_t)L_4) == ((int32_t)((int32_t)64))))
		{
			goto IL_0069;
		}
	}
	{
		X509Chain_t4A28E9A30CBB331C9B68AE4AFCB30625C6C8B538 * L_5 = ___chain2;
		NullCheck(L_5);
		X509ChainPolicy_tCA1D9E9842A16ACD71D35E9C36659E3E861D74DD * L_6 = X509Chain_get_ChainPolicy_m20178152AD298737CDA267E61DC1EB80CFCB8AF0(L_5, /*hidden argument*/NULL);
		NullCheck(L_6);
		X509ChainPolicy_set_RevocationFlag_m0D2B621B5C2AA7F8E60417B091064AFB058AE0CA(L_6, 1, /*hidden argument*/NULL);
		X509Chain_t4A28E9A30CBB331C9B68AE4AFCB30625C6C8B538 * L_7 = ___chain2;
		NullCheck(L_7);
		X509ChainPolicy_tCA1D9E9842A16ACD71D35E9C36659E3E861D74DD * L_8 = X509Chain_get_ChainPolicy_m20178152AD298737CDA267E61DC1EB80CFCB8AF0(L_7, /*hidden argument*/NULL);
		NullCheck(L_8);
		X509ChainPolicy_set_RevocationMode_mFE8CA2695BFF62D0FB0BD38A2BFA0D70ED95596D(L_8, 1, /*hidden argument*/NULL);
		X509Chain_t4A28E9A30CBB331C9B68AE4AFCB30625C6C8B538 * L_9 = ___chain2;
		NullCheck(L_9);
		X509ChainPolicy_tCA1D9E9842A16ACD71D35E9C36659E3E861D74DD * L_10 = X509Chain_get_ChainPolicy_m20178152AD298737CDA267E61DC1EB80CFCB8AF0(L_9, /*hidden argument*/NULL);
		TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  L_11;
		memset((&L_11), 0, sizeof(L_11));
		TimeSpan__ctor_m44268277AFF84DEF6CA3442907CE8116A982FB87((&L_11), 0, 1, 0, /*hidden argument*/NULL);
		NullCheck(L_10);
		X509ChainPolicy_set_UrlRetrievalTimeout_m3BB0D762903D9284505DBE8302FE7B82A9AB1544_inline(L_10, L_11, /*hidden argument*/NULL);
		X509Chain_t4A28E9A30CBB331C9B68AE4AFCB30625C6C8B538 * L_12 = ___chain2;
		NullCheck(L_12);
		X509ChainPolicy_tCA1D9E9842A16ACD71D35E9C36659E3E861D74DD * L_13 = X509Chain_get_ChainPolicy_m20178152AD298737CDA267E61DC1EB80CFCB8AF0(L_12, /*hidden argument*/NULL);
		NullCheck(L_13);
		X509ChainPolicy_set_VerificationFlags_m83653618359EBAC3BBB7DC1424B69CD910F018B8(L_13, ((int32_t)4095), /*hidden argument*/NULL);
		X509Chain_t4A28E9A30CBB331C9B68AE4AFCB30625C6C8B538 * L_14 = ___chain2;
		X509Certificate_t6859B8914E252B6831D6F59A2A720CD23F7FA7B2 * L_15 = ___certificate1;
		NullCheck(L_14);
		bool L_16 = X509Chain_Build_mBFD7D826998357F632892CBB24EDFDDA9B62BCCB(L_14, ((X509Certificate2_tC1C49EB4CFD571C2FFDE940C24BC69651A058F73 *)CastclassClass((RuntimeObject*)L_15, X509Certificate2_tC1C49EB4CFD571C2FFDE940C24BC69651A058F73_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		if (L_16)
		{
			goto IL_0069;
		}
	}
	{
		V_0 = (bool)0;
	}

IL_0069:
	{
		int32_t L_17 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_17, (int32_t)1));
	}

IL_006d:
	{
		int32_t L_18 = V_1;
		X509Chain_t4A28E9A30CBB331C9B68AE4AFCB30625C6C8B538 * L_19 = ___chain2;
		NullCheck(L_19);
		X509ChainStatusU5BU5D_tA8CCC33D50C4BCF6F657063CD1DACCC3B9A7BFBB* L_20 = X509Chain_get_ChainStatus_mC51B55A2E42D6C213FB77E43594CF3D53B0247A8(L_19, /*hidden argument*/NULL);
		NullCheck(L_20);
		if ((((int32_t)L_18) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_20)->max_length)))))))
		{
			goto IL_0009;
		}
	}

IL_0078:
	{
		bool L_21 = V_0;
		return L_21;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityGLTF.Loader.WebRequestLoader_<LoadStreamAsync>d__3::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLoadStreamAsyncU3Ed__3_MoveNext_mE264DF0A267A2DCEDF63AD1DACC975DF65F02317 (U3CLoadStreamAsyncU3Ed__3_t50DFA3B38506B50EA0F0E43D41F7D967B4E80BC1 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CLoadStreamAsyncU3Ed__3_MoveNext_mE264DF0A267A2DCEDF63AD1DACC975DF65F02317_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	WebRequestLoader_tF1F01C9F12FA444AAA9D3466649478998AECB291 * V_1 = NULL;
	Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * V_2 = NULL;
	CancellationTokenSource_tF480B7E74A032667AFBD31F0530D619FB43AD3FE * V_3 = NULL;
	HttpResponseMessage_t619DB9FDC8E63CDF2D0A314B61A4C6609A43F904 * V_4 = NULL;
	TaskAwaiter_1_t0CD71BC02837B0D53252196D19DABDA73A615B86  V_5;
	memset((&V_5), 0, sizeof(V_5));
	Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB  V_6;
	memset((&V_6), 0, sizeof(V_6));
	Nullable_1_t802480A692F4F0D29F2185320296572054FB8C0B  V_7;
	memset((&V_7), 0, sizeof(V_7));
	Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB  V_8;
	memset((&V_8), 0, sizeof(V_8));
	TaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F  V_9;
	memset((&V_9), 0, sizeof(V_9));
	Exception_t * V_10 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 5);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	U3CLoadStreamAsyncU3Ed__3_t50DFA3B38506B50EA0F0E43D41F7D967B4E80BC1 * G_B14_0 = NULL;
	U3CLoadStreamAsyncU3Ed__3_t50DFA3B38506B50EA0F0E43D41F7D967B4E80BC1 * G_B13_0 = NULL;
	Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB  G_B15_0;
	memset((&G_B15_0), 0, sizeof(G_B15_0));
	U3CLoadStreamAsyncU3Ed__3_t50DFA3B38506B50EA0F0E43D41F7D967B4E80BC1 * G_B15_1 = NULL;
	U3CLoadStreamAsyncU3Ed__3_t50DFA3B38506B50EA0F0E43D41F7D967B4E80BC1 * G_B17_0 = NULL;
	U3CLoadStreamAsyncU3Ed__3_t50DFA3B38506B50EA0F0E43D41F7D967B4E80BC1 * G_B16_0 = NULL;
	int32_t G_B18_0 = 0;
	U3CLoadStreamAsyncU3Ed__3_t50DFA3B38506B50EA0F0E43D41F7D967B4E80BC1 * G_B18_1 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		WebRequestLoader_tF1F01C9F12FA444AAA9D3466649478998AECB291 * L_1 = __this->get_U3CU3E4__this_3();
		V_1 = L_1;
	}

IL_000e:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_2 = V_0;
			if (!L_2)
			{
				goto IL_002b;
			}
		}

IL_0011:
		{
			int32_t L_3 = V_0;
			if ((((int32_t)L_3) == ((int32_t)1)))
			{
				goto IL_017c;
			}
		}

IL_0018:
		{
			String_t* L_4 = __this->get_gltfFilePath_2();
			if (L_4)
			{
				goto IL_002b;
			}
		}

IL_0020:
		{
			ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD * L_5 = (ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD *)il2cpp_codegen_object_new(ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD_il2cpp_TypeInfo_var);
			ArgumentNullException__ctor_mEE0C0D6FCB2D08CD7967DBB1329A0854BBED49ED(L_5, _stringLiteralDB45B98D4723CE30A1C40B6B15AD00E364E44D00, /*hidden argument*/NULL);
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, NULL, U3CLoadStreamAsyncU3Ed__3_MoveNext_mE264DF0A267A2DCEDF63AD1DACC975DF65F02317_RuntimeMethod_var);
		}

IL_002b:
		{
		}

IL_002c:
		try
		{ // begin try (depth: 2)
			{
				int32_t L_6 = V_0;
				if (!L_6)
				{
					goto IL_0090;
				}
			}

IL_002f:
			{
				CancellationTokenSource_tF480B7E74A032667AFBD31F0530D619FB43AD3FE * L_7 = (CancellationTokenSource_tF480B7E74A032667AFBD31F0530D619FB43AD3FE *)il2cpp_codegen_object_new(CancellationTokenSource_tF480B7E74A032667AFBD31F0530D619FB43AD3FE_il2cpp_TypeInfo_var);
				CancellationTokenSource__ctor_m282A9AF96A92487F7B0B391F00F3083C1832A53F(L_7, ((int32_t)30000), /*hidden argument*/NULL);
				V_3 = L_7;
				WebRequestLoader_tF1F01C9F12FA444AAA9D3466649478998AECB291 * L_8 = V_1;
				NullCheck(L_8);
				HttpClient_tC7477E4B30DD5CFE1B41DD9CD2EA1F83DB4DE9E7 * L_9 = L_8->get_httpClient_0();
				WebRequestLoader_tF1F01C9F12FA444AAA9D3466649478998AECB291 * L_10 = V_1;
				NullCheck(L_10);
				Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E * L_11 = L_10->get_baseAddress_1();
				String_t* L_12 = __this->get_gltfFilePath_2();
				Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E * L_13 = (Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E *)il2cpp_codegen_object_new(Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E_il2cpp_TypeInfo_var);
				Uri__ctor_m41A759BF295FB902084DD289849793E01A65A14E(L_13, L_11, L_12, /*hidden argument*/NULL);
				CancellationTokenSource_tF480B7E74A032667AFBD31F0530D619FB43AD3FE * L_14 = V_3;
				NullCheck(L_14);
				CancellationToken_t9E956952F7F20908F2AE72EDF36D97E6C7DB63AB  L_15 = CancellationTokenSource_get_Token_mBB578AFC3DB427E263C966B2DCA86E6ED1CCBC9B(L_14, /*hidden argument*/NULL);
				NullCheck(L_9);
				Task_1_t519CB3A303B53176BD616AC273201D66B84FF270 * L_16 = HttpClient_GetAsync_m4CC1F79573EF2823DC71095B79E5788D07C26A0F(L_9, L_13, L_15, /*hidden argument*/NULL);
				NullCheck(L_16);
				TaskAwaiter_1_t0CD71BC02837B0D53252196D19DABDA73A615B86  L_17 = Task_1_GetAwaiter_m511397276BFE6D43B77D1BD80905DF2FB0FA54E0(L_16, /*hidden argument*/Task_1_GetAwaiter_m511397276BFE6D43B77D1BD80905DF2FB0FA54E0_RuntimeMethod_var);
				V_5 = L_17;
				bool L_18 = TaskAwaiter_1_get_IsCompleted_m0F711316D40833EE5C67F3E65571EF033B9364DF((TaskAwaiter_1_t0CD71BC02837B0D53252196D19DABDA73A615B86 *)(&V_5), /*hidden argument*/TaskAwaiter_1_get_IsCompleted_m0F711316D40833EE5C67F3E65571EF033B9364DF_RuntimeMethod_var);
				if (L_18)
				{
					goto IL_00ad;
				}
			}

IL_006c:
			{
				int32_t L_19 = 0;
				V_0 = L_19;
				__this->set_U3CU3E1__state_0(L_19);
				TaskAwaiter_1_t0CD71BC02837B0D53252196D19DABDA73A615B86  L_20 = V_5;
				__this->set_U3CU3Eu__1_6(L_20);
				AsyncTaskMethodBuilder_1_t629F383EABB1E23F4CFEEA0B7A1783E79CB8EF9C * L_21 = __this->get_address_of_U3CU3Et__builder_1();
				AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t0CD71BC02837B0D53252196D19DABDA73A615B86_TisU3CLoadStreamAsyncU3Ed__3_t50DFA3B38506B50EA0F0E43D41F7D967B4E80BC1_m4FCBBF7AE0D3739454DDB5DA971D94BA8F7D9F75((AsyncTaskMethodBuilder_1_t629F383EABB1E23F4CFEEA0B7A1783E79CB8EF9C *)L_21, (TaskAwaiter_1_t0CD71BC02837B0D53252196D19DABDA73A615B86 *)(&V_5), (U3CLoadStreamAsyncU3Ed__3_t50DFA3B38506B50EA0F0E43D41F7D967B4E80BC1 *)__this, /*hidden argument*/AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t0CD71BC02837B0D53252196D19DABDA73A615B86_TisU3CLoadStreamAsyncU3Ed__3_t50DFA3B38506B50EA0F0E43D41F7D967B4E80BC1_m4FCBBF7AE0D3739454DDB5DA971D94BA8F7D9F75_RuntimeMethod_var);
				goto IL_01e1;
			}

IL_0090:
			{
				TaskAwaiter_1_t0CD71BC02837B0D53252196D19DABDA73A615B86  L_22 = __this->get_U3CU3Eu__1_6();
				V_5 = L_22;
				TaskAwaiter_1_t0CD71BC02837B0D53252196D19DABDA73A615B86 * L_23 = __this->get_address_of_U3CU3Eu__1_6();
				il2cpp_codegen_initobj(L_23, sizeof(TaskAwaiter_1_t0CD71BC02837B0D53252196D19DABDA73A615B86 ));
				int32_t L_24 = (-1);
				V_0 = L_24;
				__this->set_U3CU3E1__state_0(L_24);
			}

IL_00ad:
			{
				HttpResponseMessage_t619DB9FDC8E63CDF2D0A314B61A4C6609A43F904 * L_25 = TaskAwaiter_1_GetResult_m706665648BB29D83FD0C72CFA6279966143192A2((TaskAwaiter_1_t0CD71BC02837B0D53252196D19DABDA73A615B86 *)(&V_5), /*hidden argument*/TaskAwaiter_1_GetResult_m706665648BB29D83FD0C72CFA6279966143192A2_RuntimeMethod_var);
				V_4 = L_25;
				HttpResponseMessage_t619DB9FDC8E63CDF2D0A314B61A4C6609A43F904 * L_26 = V_4;
				__this->set_U3CresponseU3E5__2_4(L_26);
				goto IL_00cc;
			}
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__exception_local = (Exception_t *)e.ex;
			if(il2cpp_codegen_class_is_assignable_from (TaskCanceledException_tB1E5209054F302F814E18BBCACDF6546BAF2EC48_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
				goto CATCH_00c0;
			throw e;
		}

CATCH_00c0:
		{ // begin catch(System.Threading.Tasks.TaskCanceledException)
			HttpRequestException_tD4D14C20B90F362C83781589E7508A05E7060349 * L_27 = (HttpRequestException_tD4D14C20B90F362C83781589E7508A05E7060349 *)il2cpp_codegen_object_new(HttpRequestException_tD4D14C20B90F362C83781589E7508A05E7060349_il2cpp_TypeInfo_var);
			HttpRequestException__ctor_m6AAFFF4CC44447AF132DDD7666D3C09A7E665692(L_27, _stringLiteral2E382860493ED55C4A9CA16BDD05864C1B42EC31, /*hidden argument*/NULL);
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_27, NULL, U3CLoadStreamAsyncU3Ed__3_MoveNext_mE264DF0A267A2DCEDF63AD1DACC975DF65F02317_RuntimeMethod_var);
		} // end catch (depth: 2)

IL_00cc:
		{
			HttpResponseMessage_t619DB9FDC8E63CDF2D0A314B61A4C6609A43F904 * L_28 = __this->get_U3CresponseU3E5__2_4();
			NullCheck(L_28);
			HttpResponseMessage_EnsureSuccessStatusCode_mFC49F01BD731C4FE89B7143E0AA8C6137F372B44(L_28, /*hidden argument*/NULL);
			HttpResponseMessage_t619DB9FDC8E63CDF2D0A314B61A4C6609A43F904 * L_29 = __this->get_U3CresponseU3E5__2_4();
			NullCheck(L_29);
			HttpContent_t678722F60CA151DD19AFCA917657BE24F111A41D * L_30 = HttpResponseMessage_get_Content_m325C3E47B0D7E1DD70CA36FA04B894A152AD4420_inline(L_29, /*hidden argument*/NULL);
			NullCheck(L_30);
			HttpContentHeaders_t98D8657573ADACD807B6C941F46E6D69EDFD13A0 * L_31 = HttpContent_get_Headers_mCCD2B7D5CA1C1AEE1A78DA2E9036A66A5BCCB942(L_30, /*hidden argument*/NULL);
			NullCheck(L_31);
			Nullable_1_t802480A692F4F0D29F2185320296572054FB8C0B  L_32 = HttpContentHeaders_get_ContentLength_m50A72962BB24A825F66CAD516C1D8B9D0DAFB788(L_31, /*hidden argument*/NULL);
			V_7 = L_32;
			bool L_33 = Nullable_1_get_HasValue_mF38F300C188F47AC0F03367107EC46D3BAF7DA3E_inline((Nullable_1_t802480A692F4F0D29F2185320296572054FB8C0B *)(&V_7), /*hidden argument*/Nullable_1_get_HasValue_mF38F300C188F47AC0F03367107EC46D3BAF7DA3E_RuntimeMethod_var);
			G_B13_0 = __this;
			if (L_33)
			{
				G_B14_0 = __this;
				goto IL_0105;
			}
		}

IL_00f9:
		{
			il2cpp_codegen_initobj((&V_8), sizeof(Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB ));
			Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB  L_34 = V_8;
			G_B15_0 = L_34;
			G_B15_1 = G_B13_0;
			goto IL_0112;
		}

IL_0105:
		{
			int64_t L_35 = Nullable_1_GetValueOrDefault_m63142B2DD02998F10B0CC4706DFE488F860763C2_inline((Nullable_1_t802480A692F4F0D29F2185320296572054FB8C0B *)(&V_7), /*hidden argument*/Nullable_1_GetValueOrDefault_m63142B2DD02998F10B0CC4706DFE488F860763C2_RuntimeMethod_var);
			Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB  L_36;
			memset((&L_36), 0, sizeof(L_36));
			Nullable_1__ctor_m11F9C228CFDF836DDFCD7880C09CB4098AB9D7F2((&L_36), (((int32_t)((int32_t)L_35))), /*hidden argument*/Nullable_1__ctor_m11F9C228CFDF836DDFCD7880C09CB4098AB9D7F2_RuntimeMethod_var);
			G_B15_0 = L_36;
			G_B15_1 = G_B14_0;
		}

IL_0112:
		{
			V_6 = G_B15_0;
			bool L_37 = Nullable_1_get_HasValue_mB664E2C41CADA8413EF8842E6601B8C696A7CE15_inline((Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB *)(&V_6), /*hidden argument*/Nullable_1_get_HasValue_mB664E2C41CADA8413EF8842E6601B8C696A7CE15_RuntimeMethod_var);
			G_B16_0 = G_B15_1;
			if (L_37)
			{
				G_B17_0 = G_B15_1;
				goto IL_0124;
			}
		}

IL_011d:
		{
			G_B18_0 = ((int32_t)5000);
			G_B18_1 = G_B16_0;
			goto IL_012b;
		}

IL_0124:
		{
			int32_t L_38 = Nullable_1_GetValueOrDefault_mE89BB8F302DF31EE202251F4746859285860B6B6_inline((Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB *)(&V_6), /*hidden argument*/Nullable_1_GetValueOrDefault_mE89BB8F302DF31EE202251F4746859285860B6B6_RuntimeMethod_var);
			G_B18_0 = L_38;
			G_B18_1 = G_B17_0;
		}

IL_012b:
		{
			MemoryStream_t495F44B85E6B4DDE2BB7E17DE963256A74E2298C * L_39 = (MemoryStream_t495F44B85E6B4DDE2BB7E17DE963256A74E2298C *)il2cpp_codegen_object_new(MemoryStream_t495F44B85E6B4DDE2BB7E17DE963256A74E2298C_il2cpp_TypeInfo_var);
			MemoryStream__ctor_m78689C82DED9ACE5022B7EABF28F17FF318DF2AA(L_39, G_B18_0, /*hidden argument*/NULL);
			G_B18_1->set_U3CresultU3E5__3_5(L_39);
			HttpResponseMessage_t619DB9FDC8E63CDF2D0A314B61A4C6609A43F904 * L_40 = __this->get_U3CresponseU3E5__2_4();
			NullCheck(L_40);
			HttpContent_t678722F60CA151DD19AFCA917657BE24F111A41D * L_41 = HttpResponseMessage_get_Content_m325C3E47B0D7E1DD70CA36FA04B894A152AD4420_inline(L_40, /*hidden argument*/NULL);
			MemoryStream_t495F44B85E6B4DDE2BB7E17DE963256A74E2298C * L_42 = __this->get_U3CresultU3E5__3_5();
			NullCheck(L_41);
			Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * L_43 = HttpContent_CopyToAsync_m6C495863CF9D60460B03EDF285A0D9D7118E130C(L_41, L_42, /*hidden argument*/NULL);
			NullCheck(L_43);
			TaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F  L_44 = Task_GetAwaiter_m73027D5E4C16E961C658B83526BED8E32FD2AC6C(L_43, /*hidden argument*/NULL);
			V_9 = L_44;
			bool L_45 = TaskAwaiter_get_IsCompleted_m5A2B6FEA0ED3B01B5E88DBF2D8BC4A45652ABD87((TaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F *)(&V_9), /*hidden argument*/NULL);
			if (L_45)
			{
				goto IL_0199;
			}
		}

IL_015b:
		{
			int32_t L_46 = 1;
			V_0 = L_46;
			__this->set_U3CU3E1__state_0(L_46);
			TaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F  L_47 = V_9;
			__this->set_U3CU3Eu__2_7(L_47);
			AsyncTaskMethodBuilder_1_t629F383EABB1E23F4CFEEA0B7A1783E79CB8EF9C * L_48 = __this->get_address_of_U3CU3Et__builder_1();
			AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F_TisU3CLoadStreamAsyncU3Ed__3_t50DFA3B38506B50EA0F0E43D41F7D967B4E80BC1_m9DE022BAE7F86A99DF240A0EF91D8E159FBD24C4((AsyncTaskMethodBuilder_1_t629F383EABB1E23F4CFEEA0B7A1783E79CB8EF9C *)L_48, (TaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F *)(&V_9), (U3CLoadStreamAsyncU3Ed__3_t50DFA3B38506B50EA0F0E43D41F7D967B4E80BC1 *)__this, /*hidden argument*/AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F_TisU3CLoadStreamAsyncU3Ed__3_t50DFA3B38506B50EA0F0E43D41F7D967B4E80BC1_m9DE022BAE7F86A99DF240A0EF91D8E159FBD24C4_RuntimeMethod_var);
			goto IL_01e1;
		}

IL_017c:
		{
			TaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F  L_49 = __this->get_U3CU3Eu__2_7();
			V_9 = L_49;
			TaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F * L_50 = __this->get_address_of_U3CU3Eu__2_7();
			il2cpp_codegen_initobj(L_50, sizeof(TaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F ));
			int32_t L_51 = (-1);
			V_0 = L_51;
			__this->set_U3CU3E1__state_0(L_51);
		}

IL_0199:
		{
			TaskAwaiter_GetResult_m89868C01592AC2B06CE1FD42D9B9C187C6FD928A((TaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F *)(&V_9), /*hidden argument*/NULL);
			HttpResponseMessage_t619DB9FDC8E63CDF2D0A314B61A4C6609A43F904 * L_52 = __this->get_U3CresponseU3E5__2_4();
			NullCheck(L_52);
			HttpResponseMessage_Dispose_m61CB38AEE179CB99AC3E5F74D7C09D9D888FAA7F(L_52, /*hidden argument*/NULL);
			MemoryStream_t495F44B85E6B4DDE2BB7E17DE963256A74E2298C * L_53 = __this->get_U3CresultU3E5__3_5();
			V_2 = L_53;
			goto IL_01cd;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (Exception_t_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_01b4;
		throw e;
	}

CATCH_01b4:
	{ // begin catch(System.Exception)
		V_10 = ((Exception_t *)__exception_local);
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncTaskMethodBuilder_1_t629F383EABB1E23F4CFEEA0B7A1783E79CB8EF9C * L_54 = __this->get_address_of_U3CU3Et__builder_1();
		Exception_t * L_55 = V_10;
		AsyncTaskMethodBuilder_1_SetException_m3BF8D77ED3E1F97A9BB50B3C7A7E5E97923DDA44((AsyncTaskMethodBuilder_1_t629F383EABB1E23F4CFEEA0B7A1783E79CB8EF9C *)L_54, L_55, /*hidden argument*/AsyncTaskMethodBuilder_1_SetException_m3BF8D77ED3E1F97A9BB50B3C7A7E5E97923DDA44_RuntimeMethod_var);
		goto IL_01e1;
	} // end catch (depth: 1)

IL_01cd:
	{
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncTaskMethodBuilder_1_t629F383EABB1E23F4CFEEA0B7A1783E79CB8EF9C * L_56 = __this->get_address_of_U3CU3Et__builder_1();
		Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * L_57 = V_2;
		AsyncTaskMethodBuilder_1_SetResult_m98940FAEAE7AA0A182DF13786E8E2E4F3BCEC2FF((AsyncTaskMethodBuilder_1_t629F383EABB1E23F4CFEEA0B7A1783E79CB8EF9C *)L_56, L_57, /*hidden argument*/AsyncTaskMethodBuilder_1_SetResult_m98940FAEAE7AA0A182DF13786E8E2E4F3BCEC2FF_RuntimeMethod_var);
	}

IL_01e1:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CLoadStreamAsyncU3Ed__3_MoveNext_mE264DF0A267A2DCEDF63AD1DACC975DF65F02317_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	U3CLoadStreamAsyncU3Ed__3_t50DFA3B38506B50EA0F0E43D41F7D967B4E80BC1 * _thisAdjusted = reinterpret_cast<U3CLoadStreamAsyncU3Ed__3_t50DFA3B38506B50EA0F0E43D41F7D967B4E80BC1 *>(__this + 1);
	U3CLoadStreamAsyncU3Ed__3_MoveNext_mE264DF0A267A2DCEDF63AD1DACC975DF65F02317(_thisAdjusted, method);
}
// System.Void UnityGLTF.Loader.WebRequestLoader_<LoadStreamAsync>d__3::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLoadStreamAsyncU3Ed__3_SetStateMachine_mBF19415B6FF1EF325D5688D1657EEA79D6C061D7 (U3CLoadStreamAsyncU3Ed__3_t50DFA3B38506B50EA0F0E43D41F7D967B4E80BC1 * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CLoadStreamAsyncU3Ed__3_SetStateMachine_mBF19415B6FF1EF325D5688D1657EEA79D6C061D7_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		AsyncTaskMethodBuilder_1_t629F383EABB1E23F4CFEEA0B7A1783E79CB8EF9C * L_0 = __this->get_address_of_U3CU3Et__builder_1();
		RuntimeObject* L_1 = ___stateMachine0;
		AsyncTaskMethodBuilder_1_SetStateMachine_m09A51B661BF01119D6D51465AD8C7F570EFC6AE5((AsyncTaskMethodBuilder_1_t629F383EABB1E23F4CFEEA0B7A1783E79CB8EF9C *)L_0, L_1, /*hidden argument*/AsyncTaskMethodBuilder_1_SetStateMachine_m09A51B661BF01119D6D51465AD8C7F570EFC6AE5_RuntimeMethod_var);
		return;
	}
}
IL2CPP_EXTERN_C  void U3CLoadStreamAsyncU3Ed__3_SetStateMachine_mBF19415B6FF1EF325D5688D1657EEA79D6C061D7_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	U3CLoadStreamAsyncU3Ed__3_t50DFA3B38506B50EA0F0E43D41F7D967B4E80BC1 * _thisAdjusted = reinterpret_cast<U3CLoadStreamAsyncU3Ed__3_t50DFA3B38506B50EA0F0E43D41F7D967B4E80BC1 *>(__this + 1);
	U3CLoadStreamAsyncU3Ed__3_SetStateMachine_mBF19415B6FF1EF325D5688D1657EEA79D6C061D7(_thisAdjusted, ___stateMachine0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityGLTF.MemoryChecker::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MemoryChecker__ctor_mE60927E4E5764E4E815287255A88A4C6C4CAED15 (MemoryChecker_t6298B1B47ACD98ED696BC66A79E5D5217756BA6A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MemoryChecker__ctor_mE60927E4E5764E4E815287255A88A4C6C4CAED15_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		LowMemoryCallback_t3862486677D10CD16ECDA703CFB75039A4B3AE00 * L_0 = (LowMemoryCallback_t3862486677D10CD16ECDA703CFB75039A4B3AE00 *)il2cpp_codegen_object_new(LowMemoryCallback_t3862486677D10CD16ECDA703CFB75039A4B3AE00_il2cpp_TypeInfo_var);
		LowMemoryCallback__ctor_m9A428FDE023342AE31B3749FC821B078AEDA2290(L_0, __this, (intptr_t)((intptr_t)MemoryChecker_Application_lowMemory_mA3EB1DB736B06C92D2FF3FCF4B155D79BADA832D_RuntimeMethod_var), /*hidden argument*/NULL);
		Application_add_lowMemory_mC747F7C8E7A304125DF3FF98C47DCCFA7CCC32B7(L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityGLTF.MemoryChecker::ThrowIfOutOfMemory()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MemoryChecker_ThrowIfOutOfMemory_m40C12ACD6E1974DD5873D8A653C7E5EC65B6B714 (MemoryChecker_t6298B1B47ACD98ED696BC66A79E5D5217756BA6A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MemoryChecker_ThrowIfOutOfMemory_m40C12ACD6E1974DD5873D8A653C7E5EC65B6B714_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = __this->get_outOfMemory_0();
		if (!L_0)
		{
			goto IL_000e;
		}
	}
	{
		OutOfMemoryException_t2DF3EAC178583BD1DEFAAECBEDB2AF1EA86FBFC7 * L_1 = (OutOfMemoryException_t2DF3EAC178583BD1DEFAAECBEDB2AF1EA86FBFC7 *)il2cpp_codegen_object_new(OutOfMemoryException_t2DF3EAC178583BD1DEFAAECBEDB2AF1EA86FBFC7_il2cpp_TypeInfo_var);
		OutOfMemoryException__ctor_m4ED0B5B3F91BAF66BDF69E09EF6DC74777FE8DEB(L_1, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, NULL, MemoryChecker_ThrowIfOutOfMemory_m40C12ACD6E1974DD5873D8A653C7E5EC65B6B714_RuntimeMethod_var);
	}

IL_000e:
	{
		return;
	}
}
// System.Void UnityGLTF.MemoryChecker::Application_lowMemory()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MemoryChecker_Application_lowMemory_mA3EB1DB736B06C92D2FF3FCF4B155D79BADA832D (MemoryChecker_t6298B1B47ACD98ED696BC66A79E5D5217756BA6A * __this, const RuntimeMethod* method)
{
	{
		__this->set_outOfMemory_0((bool)1);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityGLTF.MetalRough2StandardMap::.ctor(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MetalRough2StandardMap__ctor_m51FF4EA7CDD971F1E6D9F64BFE64F7F432E7AE20 (MetalRough2StandardMap_tD96C52E5A21D1AEDA6D38D6BF5C1883696E4E6DE * __this, String_t* ___shaderName0, int32_t ___MaxLOD1, const RuntimeMethod* method)
{
	{
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_0;
		memset((&L_0), 0, sizeof(L_0));
		Vector2__ctor_mEE8FB117AB1F8DB746FB8B3EB4C0DA3BF2A230D0((&L_0), (0.0f), (0.0f), /*hidden argument*/NULL);
		__this->set_baseColorOffset_6(L_0);
		String_t* L_1 = ___shaderName0;
		int32_t L_2 = ___MaxLOD1;
		StandardMap__ctor_mD94FEC0FF5EBEB8E96ED131881460121F90654BA(__this, L_1, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityGLTF.MetalRough2StandardMap::.ctor(UnityEngine.Material,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MetalRough2StandardMap__ctor_mB1C233CA445EA5DBCDC38D73EE43FFCA63FFAB95 (MetalRough2StandardMap_tD96C52E5A21D1AEDA6D38D6BF5C1883696E4E6DE * __this, Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___m0, int32_t ___MaxLOD1, const RuntimeMethod* method)
{
	{
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_0;
		memset((&L_0), 0, sizeof(L_0));
		Vector2__ctor_mEE8FB117AB1F8DB746FB8B3EB4C0DA3BF2A230D0((&L_0), (0.0f), (0.0f), /*hidden argument*/NULL);
		__this->set_baseColorOffset_6(L_0);
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_1 = ___m0;
		int32_t L_2 = ___MaxLOD1;
		StandardMap__ctor_mE7EFB02723CA25A21A4DB13F51863763B6D93167(__this, L_1, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityGLTF.MetalRough2StandardMap::set_BaseColorTexture(UnityEngine.Texture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MetalRough2StandardMap_set_BaseColorTexture_m15323B39A9880885F43FB29298EA200B5BCB4B22 (MetalRough2StandardMap_tD96C52E5A21D1AEDA6D38D6BF5C1883696E4E6DE * __this, Texture_t387FE83BB848001FD06B14707AEA6D5A0F6A95F4 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MetalRough2StandardMap_set_BaseColorTexture_m15323B39A9880885F43FB29298EA200B5BCB4B22_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_0 = ((StandardMap_t3FEC34B6C31267CFE948D5C63C3DFECC4A1C4806 *)__this)->get__material_0();
		Texture_t387FE83BB848001FD06B14707AEA6D5A0F6A95F4 * L_1 = ___value0;
		NullCheck(L_0);
		Material_SetTexture_mAA0F00FACFE40CFE4BE28A11162E5EEFCC5F5A61(L_0, _stringLiteralC510EA100EEE1C261FE63B56E1F3390BFB85F481, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityGLTF.MetalRough2StandardMap::set_BaseColorTexCoord(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MetalRough2StandardMap_set_BaseColorTexCoord_m8011815FEF31F09B44848E8C1CB5BC7027C0EC45 (MetalRough2StandardMap_tD96C52E5A21D1AEDA6D38D6BF5C1883696E4E6DE * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void UnityGLTF.MetalRough2StandardMap::set_BaseColorXOffset(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MetalRough2StandardMap_set_BaseColorXOffset_mBAA83909B439DB8E02665C0254BC4F23A01C9EC8 (MetalRough2StandardMap_tD96C52E5A21D1AEDA6D38D6BF5C1883696E4E6DE * __this, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MetalRough2StandardMap_set_BaseColorXOffset_mBAA83909B439DB8E02665C0254BC4F23A01C9EC8_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_0 = ___value0;
		__this->set_baseColorOffset_6(L_0);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * L_1 = __this->get_address_of_baseColorOffset_6();
		float L_2 = L_1->get_x_0();
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_3 = VirtFuncInvoker0< Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  >::Invoke(76 /* UnityEngine.Vector2 UnityGLTF.MetalRough2StandardMap::get_BaseColorXScale() */, __this);
		float L_4 = L_3.get_y_1();
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * L_5 = __this->get_address_of_baseColorOffset_6();
		float L_6 = L_5->get_y_1();
		Vector2__ctor_mEE8FB117AB1F8DB746FB8B3EB4C0DA3BF2A230D0((Vector2_tA85D2DD88578276CA8A8796756458277E72D073D *)(&V_0), L_2, ((float)il2cpp_codegen_subtract((float)((float)il2cpp_codegen_subtract((float)(1.0f), (float)L_4)), (float)L_6)), /*hidden argument*/NULL);
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_7 = ((StandardMap_t3FEC34B6C31267CFE948D5C63C3DFECC4A1C4806 *)__this)->get__material_0();
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_8 = V_0;
		NullCheck(L_7);
		Material_SetTextureOffset_mAF1B6A6AD9E952262F7AE80B17B31D8FF720ADE7(L_7, _stringLiteralC510EA100EEE1C261FE63B56E1F3390BFB85F481, L_8, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityGLTF.MetalRough2StandardMap::set_BaseColorXRotation(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MetalRough2StandardMap_set_BaseColorXRotation_m2028A87678B0D21DED60B763671D71AD6C00F0D4 (MetalRough2StandardMap_tD96C52E5A21D1AEDA6D38D6BF5C1883696E4E6DE * __this, double ___value0, const RuntimeMethod* method)
{
	{
		return;
	}
}
// UnityEngine.Vector2 UnityGLTF.MetalRough2StandardMap::get_BaseColorXScale()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  MetalRough2StandardMap_get_BaseColorXScale_m81E1051B0AC4104102D08C3B0FC782B057026DC8 (MetalRough2StandardMap_tD96C52E5A21D1AEDA6D38D6BF5C1883696E4E6DE * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MetalRough2StandardMap_get_BaseColorXScale_m81E1051B0AC4104102D08C3B0FC782B057026DC8_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_0 = ((StandardMap_t3FEC34B6C31267CFE948D5C63C3DFECC4A1C4806 *)__this)->get__material_0();
		NullCheck(L_0);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_1 = Material_GetTextureScale_m2B1FFB0B67C22C3544E2E66E3E0D5B8DEE7EA859(L_0, _stringLiteralC510EA100EEE1C261FE63B56E1F3390BFB85F481, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void UnityGLTF.MetalRough2StandardMap::set_BaseColorXScale(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MetalRough2StandardMap_set_BaseColorXScale_mCFEB942EA6A57997AD4A00BEDDCD845D68DC8453 (MetalRough2StandardMap_tD96C52E5A21D1AEDA6D38D6BF5C1883696E4E6DE * __this, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MetalRough2StandardMap_set_BaseColorXScale_mCFEB942EA6A57997AD4A00BEDDCD845D68DC8453_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_0 = ((StandardMap_t3FEC34B6C31267CFE948D5C63C3DFECC4A1C4806 *)__this)->get__material_0();
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_1 = ___value0;
		NullCheck(L_0);
		Material_SetTextureScale_m9D9C2ADD50088A1712891A6A2AAAAFA734703BBF(L_0, _stringLiteralC510EA100EEE1C261FE63B56E1F3390BFB85F481, L_1, /*hidden argument*/NULL);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_2 = __this->get_baseColorOffset_6();
		VirtActionInvoker1< Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  >::Invoke(74 /* System.Void UnityGLTF.MetalRough2StandardMap::set_BaseColorXOffset(UnityEngine.Vector2) */, __this, L_2);
		return;
	}
}
// System.Void UnityGLTF.MetalRough2StandardMap::set_BaseColorXTexCoord(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MetalRough2StandardMap_set_BaseColorXTexCoord_mB2586933E17AFB262BB1BADEDDCCFD05C86ECABE (MetalRough2StandardMap_tD96C52E5A21D1AEDA6D38D6BF5C1883696E4E6DE * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void UnityGLTF.MetalRough2StandardMap::set_BaseColorFactor(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MetalRough2StandardMap_set_BaseColorFactor_mA6D6F5B9821D949A5596C4592D7F5E9CC8E54F24 (MetalRough2StandardMap_tD96C52E5A21D1AEDA6D38D6BF5C1883696E4E6DE * __this, Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MetalRough2StandardMap_set_BaseColorFactor_mA6D6F5B9821D949A5596C4592D7F5E9CC8E54F24_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_0 = ((StandardMap_t3FEC34B6C31267CFE948D5C63C3DFECC4A1C4806 *)__this)->get__material_0();
		Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  L_1 = ___value0;
		NullCheck(L_0);
		Material_SetColor_mB91EF8CAC3AB3B39D2535BF9F7FECECF3EC2161C(L_0, _stringLiteral36BDCAB142B91EE6C030073C24B3B2A5605ED74A, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityGLTF.MetalRough2StandardMap::set_MetallicRoughnessTexture(UnityEngine.Texture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MetalRough2StandardMap_set_MetallicRoughnessTexture_m130B3DC337A1ED34570BCB99E9E3FD8E0776E1ED (MetalRough2StandardMap_tD96C52E5A21D1AEDA6D38D6BF5C1883696E4E6DE * __this, Texture_t387FE83BB848001FD06B14707AEA6D5A0F6A95F4 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MetalRough2StandardMap_set_MetallicRoughnessTexture_m130B3DC337A1ED34570BCB99E9E3FD8E0776E1ED_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		double L_0 = VirtFuncInvoker0< double >::Invoke(87 /* System.Double UnityGLTF.MetalRough2StandardMap::get_MetallicFactor() */, __this);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB_il2cpp_TypeInfo_var);
		float L_1 = Mathf_Min_mCF9BE0E9CAC9F18D207692BB2DAC7F3E1D4E1CB7((0.5f), (((float)((float)(float)L_0))), /*hidden argument*/NULL);
		VirtActionInvoker1< double >::Invoke(88 /* System.Void UnityGLTF.MetalRough2StandardMap::set_MetallicFactor(System.Double) */, __this, (((double)((double)(double)L_1))));
		return;
	}
}
// System.Void UnityGLTF.MetalRough2StandardMap::set_MetallicRoughnessTexCoord(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MetalRough2StandardMap_set_MetallicRoughnessTexCoord_m4A8CB5482CBA34D61F8259D6DFD093C04208F429 (MetalRough2StandardMap_tD96C52E5A21D1AEDA6D38D6BF5C1883696E4E6DE * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void UnityGLTF.MetalRough2StandardMap::set_MetallicRoughnessXOffset(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MetalRough2StandardMap_set_MetallicRoughnessXOffset_mAE5F97ED8E94E405EC5236A3AE17093BBE0417D2 (MetalRough2StandardMap_tD96C52E5A21D1AEDA6D38D6BF5C1883696E4E6DE * __this, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___value0, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void UnityGLTF.MetalRough2StandardMap::set_MetallicRoughnessXRotation(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MetalRough2StandardMap_set_MetallicRoughnessXRotation_m921B7B8DD6C81A81BC6D573A38D7DB2A207EDDFD (MetalRough2StandardMap_tD96C52E5A21D1AEDA6D38D6BF5C1883696E4E6DE * __this, double ___value0, const RuntimeMethod* method)
{
	{
		return;
	}
}
// UnityEngine.Vector2 UnityGLTF.MetalRough2StandardMap::get_MetallicRoughnessXScale()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  MetalRough2StandardMap_get_MetallicRoughnessXScale_mAB9807BCBA55C733BFE9E1A0B7725856AD18BBDB (MetalRough2StandardMap_tD96C52E5A21D1AEDA6D38D6BF5C1883696E4E6DE * __this, const RuntimeMethod* method)
{
	{
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_0;
		memset((&L_0), 0, sizeof(L_0));
		Vector2__ctor_mEE8FB117AB1F8DB746FB8B3EB4C0DA3BF2A230D0((&L_0), (1.0f), (1.0f), /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Void UnityGLTF.MetalRough2StandardMap::set_MetallicRoughnessXScale(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MetalRough2StandardMap_set_MetallicRoughnessXScale_m212AF747733BF64C7852DF52A8DEA96C1DF24053 (MetalRough2StandardMap_tD96C52E5A21D1AEDA6D38D6BF5C1883696E4E6DE * __this, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___value0, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void UnityGLTF.MetalRough2StandardMap::set_MetallicRoughnessXTexCoord(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MetalRough2StandardMap_set_MetallicRoughnessXTexCoord_m02A14B6A1EA80B823B20B443E10E0D7A064425A3 (MetalRough2StandardMap_tD96C52E5A21D1AEDA6D38D6BF5C1883696E4E6DE * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Double UnityGLTF.MetalRough2StandardMap::get_MetallicFactor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double MetalRough2StandardMap_get_MetallicFactor_m7696DB75D25875DDD1F38FAFE2C66AA553853F47 (MetalRough2StandardMap_tD96C52E5A21D1AEDA6D38D6BF5C1883696E4E6DE * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MetalRough2StandardMap_get_MetallicFactor_m7696DB75D25875DDD1F38FAFE2C66AA553853F47_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_0 = ((StandardMap_t3FEC34B6C31267CFE948D5C63C3DFECC4A1C4806 *)__this)->get__material_0();
		NullCheck(L_0);
		float L_1 = Material_GetFloat_m8A4243FC6619B4E0E820E87754035700FD4913F0(L_0, _stringLiteralB9567DED74E1C05B65EAB2AE2C2B49CC75B1660A, /*hidden argument*/NULL);
		return (((double)((double)(double)L_1)));
	}
}
// System.Void UnityGLTF.MetalRough2StandardMap::set_MetallicFactor(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MetalRough2StandardMap_set_MetallicFactor_m9D21324D635CD856E35E94F08A00840064F59391 (MetalRough2StandardMap_tD96C52E5A21D1AEDA6D38D6BF5C1883696E4E6DE * __this, double ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MetalRough2StandardMap_set_MetallicFactor_m9D21324D635CD856E35E94F08A00840064F59391_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_0 = ((StandardMap_t3FEC34B6C31267CFE948D5C63C3DFECC4A1C4806 *)__this)->get__material_0();
		double L_1 = ___value0;
		NullCheck(L_0);
		Material_SetFloat_m4B7D3FAA00D20BCB3C487E72B7E4B2691D5ECAD2(L_0, _stringLiteralB9567DED74E1C05B65EAB2AE2C2B49CC75B1660A, (((float)((float)(float)L_1))), /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityGLTF.MetalRough2StandardMap::set_RoughnessFactor(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MetalRough2StandardMap_set_RoughnessFactor_mD73D977D8BE629EA861650D1ED8AB01FEAAD3D52 (MetalRough2StandardMap_tD96C52E5A21D1AEDA6D38D6BF5C1883696E4E6DE * __this, double ___value0, const RuntimeMethod* method)
{
	{
		return;
	}
}
// UnityGLTF.IUniformMap UnityGLTF.MetalRough2StandardMap::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MetalRough2StandardMap_Clone_m48B81ACD2B81C3527ACE7A583F5E4B9723182BAC (MetalRough2StandardMap_tD96C52E5A21D1AEDA6D38D6BF5C1883696E4E6DE * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MetalRough2StandardMap_Clone_m48B81ACD2B81C3527ACE7A583F5E4B9723182BAC_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	MetalRough2StandardMap_tD96C52E5A21D1AEDA6D38D6BF5C1883696E4E6DE * V_0 = NULL;
	{
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_0 = ((StandardMap_t3FEC34B6C31267CFE948D5C63C3DFECC4A1C4806 *)__this)->get__material_0();
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_1 = (Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 *)il2cpp_codegen_object_new(Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598_il2cpp_TypeInfo_var);
		Material__ctor_m0171C6D4D3FD04D58C70808F255DBA67D0ED2BDE(L_1, L_0, /*hidden argument*/NULL);
		MetalRough2StandardMap_tD96C52E5A21D1AEDA6D38D6BF5C1883696E4E6DE * L_2 = (MetalRough2StandardMap_tD96C52E5A21D1AEDA6D38D6BF5C1883696E4E6DE *)il2cpp_codegen_object_new(MetalRough2StandardMap_tD96C52E5A21D1AEDA6D38D6BF5C1883696E4E6DE_il2cpp_TypeInfo_var);
		MetalRough2StandardMap__ctor_mB1C233CA445EA5DBCDC38D73EE43FFCA63FFAB95(L_2, L_1, ((int32_t)1000), /*hidden argument*/NULL);
		V_0 = L_2;
		MetalRough2StandardMap_tD96C52E5A21D1AEDA6D38D6BF5C1883696E4E6DE * L_3 = V_0;
		StandardMap_Copy_mB46954EB8DA70A2310FFDCAF0EE90DB82602457D(__this, L_3, /*hidden argument*/NULL);
		MetalRough2StandardMap_tD96C52E5A21D1AEDA6D38D6BF5C1883696E4E6DE * L_4 = V_0;
		return L_4;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityGLTF.MetalRoughMap::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MetalRoughMap__ctor_mDCECE46F17DD3C8D64C070D39088D56FC74CBE17 (MetalRoughMap_tF4F2F9C07978591A413F3ECB91DE6EA459A27DDC * __this, int32_t ___MaxLOD0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MetalRoughMap__ctor_mDCECE46F17DD3C8D64C070D39088D56FC74CBE17_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_0;
		memset((&L_0), 0, sizeof(L_0));
		Vector2__ctor_mEE8FB117AB1F8DB746FB8B3EB4C0DA3BF2A230D0((&L_0), (0.0f), (0.0f), /*hidden argument*/NULL);
		__this->set_metalRoughOffset_7(L_0);
		int32_t L_1 = ___MaxLOD0;
		MetalRough2StandardMap__ctor_m51FF4EA7CDD971F1E6D9F64BFE64F7F432E7AE20(__this, _stringLiteralB52C0842FDEB3626C4E2888A49F80501CE99A123, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityGLTF.MetalRoughMap::.ctor(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MetalRoughMap__ctor_mA6B38CC97B0AB97D7E885EFD25DC6AC1F53D9406 (MetalRoughMap_tF4F2F9C07978591A413F3ECB91DE6EA459A27DDC * __this, String_t* ___shaderName0, int32_t ___MaxLOD1, const RuntimeMethod* method)
{
	{
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_0;
		memset((&L_0), 0, sizeof(L_0));
		Vector2__ctor_mEE8FB117AB1F8DB746FB8B3EB4C0DA3BF2A230D0((&L_0), (0.0f), (0.0f), /*hidden argument*/NULL);
		__this->set_metalRoughOffset_7(L_0);
		String_t* L_1 = ___shaderName0;
		int32_t L_2 = ___MaxLOD1;
		MetalRough2StandardMap__ctor_m51FF4EA7CDD971F1E6D9F64BFE64F7F432E7AE20(__this, L_1, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityGLTF.MetalRoughMap::.ctor(UnityEngine.Material,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MetalRoughMap__ctor_m8D0CD9D66C6585C854816D526D0D01BB29E7CA84 (MetalRoughMap_tF4F2F9C07978591A413F3ECB91DE6EA459A27DDC * __this, Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___m0, int32_t ___MaxLOD1, const RuntimeMethod* method)
{
	{
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_0;
		memset((&L_0), 0, sizeof(L_0));
		Vector2__ctor_mEE8FB117AB1F8DB746FB8B3EB4C0DA3BF2A230D0((&L_0), (0.0f), (0.0f), /*hidden argument*/NULL);
		__this->set_metalRoughOffset_7(L_0);
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_1 = ___m0;
		int32_t L_2 = ___MaxLOD1;
		MetalRough2StandardMap__ctor_mB1C233CA445EA5DBCDC38D73EE43FFCA63FFAB95(__this, L_1, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityGLTF.MetalRoughMap::set_NormalTexCoord(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MetalRoughMap_set_NormalTexCoord_m9FAAC147A3C89AA625BB8AB9972D151288E8B6FC (MetalRoughMap_tF4F2F9C07978591A413F3ECB91DE6EA459A27DDC * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void UnityGLTF.MetalRoughMap::set_EmissiveTexCoord(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MetalRoughMap_set_EmissiveTexCoord_m45FB5F92A8606E2F20EA0A52164DAC747633BEB9 (MetalRoughMap_tF4F2F9C07978591A413F3ECB91DE6EA459A27DDC * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void UnityGLTF.MetalRoughMap::set_BaseColorTexCoord(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MetalRoughMap_set_BaseColorTexCoord_mE4241BF7CE74B40D1D9E1A0641809512DF1DAFD6 (MetalRoughMap_tF4F2F9C07978591A413F3ECB91DE6EA459A27DDC * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void UnityGLTF.MetalRoughMap::set_MetallicRoughnessTexture(UnityEngine.Texture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MetalRoughMap_set_MetallicRoughnessTexture_mFDCF7643FE214E7D650141794E6A95581219706C (MetalRoughMap_tF4F2F9C07978591A413F3ECB91DE6EA459A27DDC * __this, Texture_t387FE83BB848001FD06B14707AEA6D5A0F6A95F4 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MetalRoughMap_set_MetallicRoughnessTexture_mFDCF7643FE214E7D650141794E6A95581219706C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_0 = ((StandardMap_t3FEC34B6C31267CFE948D5C63C3DFECC4A1C4806 *)__this)->get__material_0();
		Texture_t387FE83BB848001FD06B14707AEA6D5A0F6A95F4 * L_1 = ___value0;
		NullCheck(L_0);
		Material_SetTexture_mAA0F00FACFE40CFE4BE28A11162E5EEFCC5F5A61(L_0, _stringLiteralAAA5A6E84A2F02FED9413E98CB5954703F68F668, L_1, /*hidden argument*/NULL);
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_2 = ((StandardMap_t3FEC34B6C31267CFE948D5C63C3DFECC4A1C4806 *)__this)->get__material_0();
		NullCheck(L_2);
		Material_EnableKeyword_m7466758182CBBC40134C9048CDF682DF46F32FA9(L_2, _stringLiteral4B0543BC8AD992DCF2FC8EB55210EB488BC284A6, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityGLTF.MetalRoughMap::set_MetallicRoughnessTexCoord(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MetalRoughMap_set_MetallicRoughnessTexCoord_m938FB41A6BD7EFA7D14490169E85D5D6A76ACB2B (MetalRoughMap_tF4F2F9C07978591A413F3ECB91DE6EA459A27DDC * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void UnityGLTF.MetalRoughMap::set_MetallicRoughnessXOffset(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MetalRoughMap_set_MetallicRoughnessXOffset_mE44F368070F7A1B5AAE535B40A8126916702F8B8 (MetalRoughMap_tF4F2F9C07978591A413F3ECB91DE6EA459A27DDC * __this, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MetalRoughMap_set_MetallicRoughnessXOffset_mE44F368070F7A1B5AAE535B40A8126916702F8B8_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_0 = ___value0;
		__this->set_metalRoughOffset_7(L_0);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * L_1 = __this->get_address_of_metalRoughOffset_7();
		float L_2 = L_1->get_x_0();
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_3 = VirtFuncInvoker0< Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  >::Invoke(84 /* UnityEngine.Vector2 UnityGLTF.MetalRough2StandardMap::get_MetallicRoughnessXScale() */, __this);
		float L_4 = L_3.get_y_1();
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * L_5 = __this->get_address_of_metalRoughOffset_7();
		float L_6 = L_5->get_y_1();
		Vector2__ctor_mEE8FB117AB1F8DB746FB8B3EB4C0DA3BF2A230D0((Vector2_tA85D2DD88578276CA8A8796756458277E72D073D *)(&V_0), L_2, ((float)il2cpp_codegen_subtract((float)((float)il2cpp_codegen_subtract((float)(1.0f), (float)L_4)), (float)L_6)), /*hidden argument*/NULL);
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_7 = ((StandardMap_t3FEC34B6C31267CFE948D5C63C3DFECC4A1C4806 *)__this)->get__material_0();
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_8 = V_0;
		NullCheck(L_7);
		Material_SetTextureOffset_mAF1B6A6AD9E952262F7AE80B17B31D8FF720ADE7(L_7, _stringLiteralAAA5A6E84A2F02FED9413E98CB5954703F68F668, L_8, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityGLTF.MetalRoughMap::set_MetallicRoughnessXRotation(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MetalRoughMap_set_MetallicRoughnessXRotation_m1D7AF7491AE860D884AAC863A3340C18FC170873 (MetalRoughMap_tF4F2F9C07978591A413F3ECB91DE6EA459A27DDC * __this, double ___value0, const RuntimeMethod* method)
{
	{
		return;
	}
}
// UnityEngine.Vector2 UnityGLTF.MetalRoughMap::get_MetallicRoughnessXScale()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  MetalRoughMap_get_MetallicRoughnessXScale_m925398C407C3D99B86974F40E9F15C8975E96412 (MetalRoughMap_tF4F2F9C07978591A413F3ECB91DE6EA459A27DDC * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MetalRoughMap_get_MetallicRoughnessXScale_m925398C407C3D99B86974F40E9F15C8975E96412_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_0 = ((StandardMap_t3FEC34B6C31267CFE948D5C63C3DFECC4A1C4806 *)__this)->get__material_0();
		NullCheck(L_0);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_1 = Material_GetTextureScale_m2B1FFB0B67C22C3544E2E66E3E0D5B8DEE7EA859(L_0, _stringLiteralAAA5A6E84A2F02FED9413E98CB5954703F68F668, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void UnityGLTF.MetalRoughMap::set_MetallicRoughnessXScale(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MetalRoughMap_set_MetallicRoughnessXScale_m478FD6F4B6BA4B7A8C3FB641097479390DF7AF19 (MetalRoughMap_tF4F2F9C07978591A413F3ECB91DE6EA459A27DDC * __this, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MetalRoughMap_set_MetallicRoughnessXScale_m478FD6F4B6BA4B7A8C3FB641097479390DF7AF19_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_0 = ((StandardMap_t3FEC34B6C31267CFE948D5C63C3DFECC4A1C4806 *)__this)->get__material_0();
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_1 = ___value0;
		NullCheck(L_0);
		Material_SetTextureScale_m9D9C2ADD50088A1712891A6A2AAAAFA734703BBF(L_0, _stringLiteralAAA5A6E84A2F02FED9413E98CB5954703F68F668, L_1, /*hidden argument*/NULL);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_2 = __this->get_metalRoughOffset_7();
		VirtActionInvoker1< Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  >::Invoke(82 /* System.Void UnityGLTF.MetalRough2StandardMap::set_MetallicRoughnessXOffset(UnityEngine.Vector2) */, __this, L_2);
		return;
	}
}
// System.Void UnityGLTF.MetalRoughMap::set_MetallicRoughnessXTexCoord(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MetalRoughMap_set_MetallicRoughnessXTexCoord_m9CA3748569E787580CF3A234060C6D819E135FBB (MetalRoughMap_tF4F2F9C07978591A413F3ECB91DE6EA459A27DDC * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void UnityGLTF.MetalRoughMap::set_RoughnessFactor(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MetalRoughMap_set_RoughnessFactor_m51EB6A13A15036C820A90ECFA0862552C95497B3 (MetalRoughMap_tF4F2F9C07978591A413F3ECB91DE6EA459A27DDC * __this, double ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MetalRoughMap_set_RoughnessFactor_m51EB6A13A15036C820A90ECFA0862552C95497B3_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_0 = ((StandardMap_t3FEC34B6C31267CFE948D5C63C3DFECC4A1C4806 *)__this)->get__material_0();
		double L_1 = ___value0;
		NullCheck(L_0);
		Material_SetFloat_m4B7D3FAA00D20BCB3C487E72B7E4B2691D5ECAD2(L_0, _stringLiteral76DB1AA30D048277794F2EB6004B5AE7BAA0CBC7, (((float)((float)(float)L_1))), /*hidden argument*/NULL);
		return;
	}
}
// UnityGLTF.IUniformMap UnityGLTF.MetalRoughMap::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MetalRoughMap_Clone_m4C76BDB8BAC0DDE629B69A67FD30A5FDB3ABDE6A (MetalRoughMap_tF4F2F9C07978591A413F3ECB91DE6EA459A27DDC * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MetalRoughMap_Clone_m4C76BDB8BAC0DDE629B69A67FD30A5FDB3ABDE6A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	MetalRoughMap_tF4F2F9C07978591A413F3ECB91DE6EA459A27DDC * V_0 = NULL;
	{
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_0 = ((StandardMap_t3FEC34B6C31267CFE948D5C63C3DFECC4A1C4806 *)__this)->get__material_0();
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_1 = (Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 *)il2cpp_codegen_object_new(Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598_il2cpp_TypeInfo_var);
		Material__ctor_m0171C6D4D3FD04D58C70808F255DBA67D0ED2BDE(L_1, L_0, /*hidden argument*/NULL);
		MetalRoughMap_tF4F2F9C07978591A413F3ECB91DE6EA459A27DDC * L_2 = (MetalRoughMap_tF4F2F9C07978591A413F3ECB91DE6EA459A27DDC *)il2cpp_codegen_object_new(MetalRoughMap_tF4F2F9C07978591A413F3ECB91DE6EA459A27DDC_il2cpp_TypeInfo_var);
		MetalRoughMap__ctor_m8D0CD9D66C6585C854816D526D0D01BB29E7CA84(L_2, L_1, ((int32_t)1000), /*hidden argument*/NULL);
		V_0 = L_2;
		MetalRoughMap_tF4F2F9C07978591A413F3ECB91DE6EA459A27DDC * L_3 = V_0;
		StandardMap_Copy_mB46954EB8DA70A2310FFDCAF0EE90DB82602457D(__this, L_3, /*hidden argument*/NULL);
		MetalRoughMap_tF4F2F9C07978591A413F3ECB91DE6EA459A27DDC * L_4 = V_0;
		return L_4;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityGLTF.ShaderNotFoundException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShaderNotFoundException__ctor_mA2CA6843F2366189FF2D7B5006F906F19B349948 (ShaderNotFoundException_t20F210948B72AE4B32DA84FE44A94340A5959E01 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ShaderNotFoundException__ctor_mA2CA6843F2366189FF2D7B5006F906F19B349948_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_m5FEC89FBFACEEDCEE29CCFD44A85D72FC28EB0D1(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityGLTF.ShaderNotFoundException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShaderNotFoundException__ctor_m95667D5EB644710A69BEAA4E8DFAFD784ED6D9A6 (ShaderNotFoundException_t20F210948B72AE4B32DA84FE44A94340A5959E01 * __this, String_t* ___message0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ShaderNotFoundException__ctor_m95667D5EB644710A69BEAA4E8DFAFD784ED6D9A6_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___message0;
		IL2CPP_RUNTIME_CLASS_INIT(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_m89BADFF36C3B170013878726E07729D51AA9FBE0(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityGLTF.ShaderNotFoundException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShaderNotFoundException__ctor_m3B99892AD875F9157DA44236F77D93732B286841 (ShaderNotFoundException_t20F210948B72AE4B32DA84FE44A94340A5959E01 * __this, SerializationInfo_t1BB80E9C9DEA52DBF464487234B045E2930ADA26 * ___info0, StreamingContext_t2CCDC54E0E8D078AF4A50E3A8B921B828A900034  ___context1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ShaderNotFoundException__ctor_m3B99892AD875F9157DA44236F77D93732B286841_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_m5FEC89FBFACEEDCEE29CCFD44A85D72FC28EB0D1(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityGLTF.SpecGloss2StandardMap::.ctor(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpecGloss2StandardMap__ctor_mCE8053B4F2AD2F7B0C5D221535FD3EE9E294D83E (SpecGloss2StandardMap_tDE7C0F9BFC51BA35B3D272A97615586D4DFBF158 * __this, String_t* ___shaderName0, int32_t ___MaxLOD1, const RuntimeMethod* method)
{
	{
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_0;
		memset((&L_0), 0, sizeof(L_0));
		Vector2__ctor_mEE8FB117AB1F8DB746FB8B3EB4C0DA3BF2A230D0((&L_0), (0.0f), (0.0f), /*hidden argument*/NULL);
		__this->set_diffuseOffset_6(L_0);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_1;
		memset((&L_1), 0, sizeof(L_1));
		Vector2__ctor_mEE8FB117AB1F8DB746FB8B3EB4C0DA3BF2A230D0((&L_1), (0.0f), (0.0f), /*hidden argument*/NULL);
		__this->set_specGlossOffset_7(L_1);
		String_t* L_2 = ___shaderName0;
		int32_t L_3 = ___MaxLOD1;
		StandardMap__ctor_mD94FEC0FF5EBEB8E96ED131881460121F90654BA(__this, L_2, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityGLTF.SpecGloss2StandardMap::.ctor(UnityEngine.Material,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpecGloss2StandardMap__ctor_m29890CEC2EA3A3245F1174C9EB4ACBD2695C73DC (SpecGloss2StandardMap_tDE7C0F9BFC51BA35B3D272A97615586D4DFBF158 * __this, Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___m0, int32_t ___MaxLOD1, const RuntimeMethod* method)
{
	{
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_0;
		memset((&L_0), 0, sizeof(L_0));
		Vector2__ctor_mEE8FB117AB1F8DB746FB8B3EB4C0DA3BF2A230D0((&L_0), (0.0f), (0.0f), /*hidden argument*/NULL);
		__this->set_diffuseOffset_6(L_0);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_1;
		memset((&L_1), 0, sizeof(L_1));
		Vector2__ctor_mEE8FB117AB1F8DB746FB8B3EB4C0DA3BF2A230D0((&L_1), (0.0f), (0.0f), /*hidden argument*/NULL);
		__this->set_specGlossOffset_7(L_1);
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_2 = ___m0;
		int32_t L_3 = ___MaxLOD1;
		StandardMap__ctor_mE7EFB02723CA25A21A4DB13F51863763B6D93167(__this, L_2, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityGLTF.SpecGloss2StandardMap::set_DiffuseTexture(UnityEngine.Texture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpecGloss2StandardMap_set_DiffuseTexture_m25E1FF03E399B1324AF927859C7F6E17E23DBC65 (SpecGloss2StandardMap_tDE7C0F9BFC51BA35B3D272A97615586D4DFBF158 * __this, Texture_t387FE83BB848001FD06B14707AEA6D5A0F6A95F4 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SpecGloss2StandardMap_set_DiffuseTexture_m25E1FF03E399B1324AF927859C7F6E17E23DBC65_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_0 = ((StandardMap_t3FEC34B6C31267CFE948D5C63C3DFECC4A1C4806 *)__this)->get__material_0();
		Texture_t387FE83BB848001FD06B14707AEA6D5A0F6A95F4 * L_1 = ___value0;
		NullCheck(L_0);
		Material_SetTexture_mAA0F00FACFE40CFE4BE28A11162E5EEFCC5F5A61(L_0, _stringLiteralC510EA100EEE1C261FE63B56E1F3390BFB85F481, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityGLTF.SpecGloss2StandardMap::set_DiffuseTexCoord(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpecGloss2StandardMap_set_DiffuseTexCoord_m13DA9A00AD0F91A5A5DF47B35EE45F37A3B6E7DB (SpecGloss2StandardMap_tDE7C0F9BFC51BA35B3D272A97615586D4DFBF158 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void UnityGLTF.SpecGloss2StandardMap::set_DiffuseXOffset(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpecGloss2StandardMap_set_DiffuseXOffset_m812B35DF78927C437436E346DB05C086EF7BFA8E (SpecGloss2StandardMap_tDE7C0F9BFC51BA35B3D272A97615586D4DFBF158 * __this, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SpecGloss2StandardMap_set_DiffuseXOffset_m812B35DF78927C437436E346DB05C086EF7BFA8E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_0 = ___value0;
		__this->set_diffuseOffset_6(L_0);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * L_1 = __this->get_address_of_diffuseOffset_6();
		float L_2 = L_1->get_x_0();
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_3 = VirtFuncInvoker0< Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  >::Invoke(75 /* UnityEngine.Vector2 UnityGLTF.SpecGloss2StandardMap::get_DiffuseXScale() */, __this);
		float L_4 = L_3.get_y_1();
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * L_5 = __this->get_address_of_diffuseOffset_6();
		float L_6 = L_5->get_y_1();
		Vector2__ctor_mEE8FB117AB1F8DB746FB8B3EB4C0DA3BF2A230D0((Vector2_tA85D2DD88578276CA8A8796756458277E72D073D *)(&V_0), L_2, ((float)il2cpp_codegen_subtract((float)((float)il2cpp_codegen_subtract((float)(1.0f), (float)L_4)), (float)L_6)), /*hidden argument*/NULL);
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_7 = ((StandardMap_t3FEC34B6C31267CFE948D5C63C3DFECC4A1C4806 *)__this)->get__material_0();
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_8 = V_0;
		NullCheck(L_7);
		Material_SetTextureOffset_mAF1B6A6AD9E952262F7AE80B17B31D8FF720ADE7(L_7, _stringLiteralC510EA100EEE1C261FE63B56E1F3390BFB85F481, L_8, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityGLTF.SpecGloss2StandardMap::set_DiffuseXRotation(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpecGloss2StandardMap_set_DiffuseXRotation_m37BCE19CD00F26E9D8AAA9C1CABACFEDE6796E62 (SpecGloss2StandardMap_tDE7C0F9BFC51BA35B3D272A97615586D4DFBF158 * __this, double ___value0, const RuntimeMethod* method)
{
	{
		return;
	}
}
// UnityEngine.Vector2 UnityGLTF.SpecGloss2StandardMap::get_DiffuseXScale()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  SpecGloss2StandardMap_get_DiffuseXScale_m7E616CFD64F7F23621908096B49CE52FE8A895CE (SpecGloss2StandardMap_tDE7C0F9BFC51BA35B3D272A97615586D4DFBF158 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SpecGloss2StandardMap_get_DiffuseXScale_m7E616CFD64F7F23621908096B49CE52FE8A895CE_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_0 = ((StandardMap_t3FEC34B6C31267CFE948D5C63C3DFECC4A1C4806 *)__this)->get__material_0();
		NullCheck(L_0);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_1 = Material_GetTextureScale_m2B1FFB0B67C22C3544E2E66E3E0D5B8DEE7EA859(L_0, _stringLiteralC510EA100EEE1C261FE63B56E1F3390BFB85F481, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void UnityGLTF.SpecGloss2StandardMap::set_DiffuseXScale(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpecGloss2StandardMap_set_DiffuseXScale_mE84F50C279762604EC8F95A094518746C7673B25 (SpecGloss2StandardMap_tDE7C0F9BFC51BA35B3D272A97615586D4DFBF158 * __this, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SpecGloss2StandardMap_set_DiffuseXScale_mE84F50C279762604EC8F95A094518746C7673B25_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_0 = ((StandardMap_t3FEC34B6C31267CFE948D5C63C3DFECC4A1C4806 *)__this)->get__material_0();
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_1 = ___value0;
		NullCheck(L_0);
		Material_SetTextureScale_m9D9C2ADD50088A1712891A6A2AAAAFA734703BBF(L_0, _stringLiteralC510EA100EEE1C261FE63B56E1F3390BFB85F481, L_1, /*hidden argument*/NULL);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_2 = __this->get_diffuseOffset_6();
		VirtActionInvoker1< Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  >::Invoke(73 /* System.Void UnityGLTF.SpecGloss2StandardMap::set_DiffuseXOffset(UnityEngine.Vector2) */, __this, L_2);
		return;
	}
}
// System.Void UnityGLTF.SpecGloss2StandardMap::set_DiffuseXTexCoord(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpecGloss2StandardMap_set_DiffuseXTexCoord_m0A7098E5D81A12FE451FE9CC04E51615EFE8A796 (SpecGloss2StandardMap_tDE7C0F9BFC51BA35B3D272A97615586D4DFBF158 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void UnityGLTF.SpecGloss2StandardMap::set_DiffuseFactor(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpecGloss2StandardMap_set_DiffuseFactor_mC28F1DAAE6EDB1D20306604CC44C2729F66F4B22 (SpecGloss2StandardMap_tDE7C0F9BFC51BA35B3D272A97615586D4DFBF158 * __this, Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SpecGloss2StandardMap_set_DiffuseFactor_mC28F1DAAE6EDB1D20306604CC44C2729F66F4B22_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_0 = ((StandardMap_t3FEC34B6C31267CFE948D5C63C3DFECC4A1C4806 *)__this)->get__material_0();
		Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  L_1 = ___value0;
		NullCheck(L_0);
		Material_SetColor_mB91EF8CAC3AB3B39D2535BF9F7FECECF3EC2161C(L_0, _stringLiteral36BDCAB142B91EE6C030073C24B3B2A5605ED74A, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityGLTF.SpecGloss2StandardMap::set_SpecularGlossinessTexture(UnityEngine.Texture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpecGloss2StandardMap_set_SpecularGlossinessTexture_mB7E647BE1B81A08FE6927D1D484CA5A061531736 (SpecGloss2StandardMap_tDE7C0F9BFC51BA35B3D272A97615586D4DFBF158 * __this, Texture_t387FE83BB848001FD06B14707AEA6D5A0F6A95F4 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SpecGloss2StandardMap_set_SpecularGlossinessTexture_mB7E647BE1B81A08FE6927D1D484CA5A061531736_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_0 = ((StandardMap_t3FEC34B6C31267CFE948D5C63C3DFECC4A1C4806 *)__this)->get__material_0();
		Texture_t387FE83BB848001FD06B14707AEA6D5A0F6A95F4 * L_1 = ___value0;
		NullCheck(L_0);
		Material_SetTexture_mAA0F00FACFE40CFE4BE28A11162E5EEFCC5F5A61(L_0, _stringLiteral385FFEE158A6659B893991739D361A8336033F09, L_1, /*hidden argument*/NULL);
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_2 = ((StandardMap_t3FEC34B6C31267CFE948D5C63C3DFECC4A1C4806 *)__this)->get__material_0();
		NullCheck(L_2);
		Material_SetFloat_m4B7D3FAA00D20BCB3C487E72B7E4B2691D5ECAD2(L_2, _stringLiteral12E851A75ADDEB18C3BF5D958F74EC7F12452F77, (0.0f), /*hidden argument*/NULL);
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_3 = ((StandardMap_t3FEC34B6C31267CFE948D5C63C3DFECC4A1C4806 *)__this)->get__material_0();
		NullCheck(L_3);
		Material_EnableKeyword_m7466758182CBBC40134C9048CDF682DF46F32FA9(L_3, _stringLiteralF9FE4FFA282A27E63A1A8C60A8D8E0DD0E708152, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityGLTF.SpecGloss2StandardMap::set_SpecularGlossinessXOffset(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpecGloss2StandardMap_set_SpecularGlossinessXOffset_m235906E544FB373E5E379E4472998589FA0E6B59 (SpecGloss2StandardMap_tDE7C0F9BFC51BA35B3D272A97615586D4DFBF158 * __this, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SpecGloss2StandardMap_set_SpecularGlossinessXOffset_m235906E544FB373E5E379E4472998589FA0E6B59_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_0 = ___value0;
		__this->set_specGlossOffset_7(L_0);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * L_1 = __this->get_address_of_specGlossOffset_7();
		float L_2 = L_1->get_x_0();
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_3 = VirtFuncInvoker0< Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  >::Invoke(82 /* UnityEngine.Vector2 UnityGLTF.SpecGloss2StandardMap::get_SpecularGlossinessXScale() */, __this);
		float L_4 = L_3.get_y_1();
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * L_5 = __this->get_address_of_specGlossOffset_7();
		float L_6 = L_5->get_y_1();
		Vector2__ctor_mEE8FB117AB1F8DB746FB8B3EB4C0DA3BF2A230D0((Vector2_tA85D2DD88578276CA8A8796756458277E72D073D *)(&V_0), L_2, ((float)il2cpp_codegen_subtract((float)((float)il2cpp_codegen_subtract((float)(1.0f), (float)L_4)), (float)L_6)), /*hidden argument*/NULL);
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_7 = ((StandardMap_t3FEC34B6C31267CFE948D5C63C3DFECC4A1C4806 *)__this)->get__material_0();
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_8 = V_0;
		NullCheck(L_7);
		Material_SetTextureOffset_mAF1B6A6AD9E952262F7AE80B17B31D8FF720ADE7(L_7, _stringLiteral385FFEE158A6659B893991739D361A8336033F09, L_8, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityGLTF.SpecGloss2StandardMap::set_SpecularGlossinessXRotation(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpecGloss2StandardMap_set_SpecularGlossinessXRotation_m17C1495F713A29DDCFC6399B747E171B826B0966 (SpecGloss2StandardMap_tDE7C0F9BFC51BA35B3D272A97615586D4DFBF158 * __this, double ___value0, const RuntimeMethod* method)
{
	{
		return;
	}
}
// UnityEngine.Vector2 UnityGLTF.SpecGloss2StandardMap::get_SpecularGlossinessXScale()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  SpecGloss2StandardMap_get_SpecularGlossinessXScale_m0F186B111F0D0870E5B858025C5349B57E26C45A (SpecGloss2StandardMap_tDE7C0F9BFC51BA35B3D272A97615586D4DFBF158 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SpecGloss2StandardMap_get_SpecularGlossinessXScale_m0F186B111F0D0870E5B858025C5349B57E26C45A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_0 = ((StandardMap_t3FEC34B6C31267CFE948D5C63C3DFECC4A1C4806 *)__this)->get__material_0();
		NullCheck(L_0);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_1 = Material_GetTextureScale_m2B1FFB0B67C22C3544E2E66E3E0D5B8DEE7EA859(L_0, _stringLiteral385FFEE158A6659B893991739D361A8336033F09, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void UnityGLTF.SpecGloss2StandardMap::set_SpecularGlossinessXScale(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpecGloss2StandardMap_set_SpecularGlossinessXScale_m3CFBF90515468BCDBDFD417FE33A32DD69F2D326 (SpecGloss2StandardMap_tDE7C0F9BFC51BA35B3D272A97615586D4DFBF158 * __this, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SpecGloss2StandardMap_set_SpecularGlossinessXScale_m3CFBF90515468BCDBDFD417FE33A32DD69F2D326_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_0 = ((StandardMap_t3FEC34B6C31267CFE948D5C63C3DFECC4A1C4806 *)__this)->get__material_0();
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_1 = ___value0;
		NullCheck(L_0);
		Material_SetTextureScale_m9D9C2ADD50088A1712891A6A2AAAAFA734703BBF(L_0, _stringLiteral385FFEE158A6659B893991739D361A8336033F09, L_1, /*hidden argument*/NULL);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_2 = __this->get_specGlossOffset_7();
		VirtActionInvoker1< Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  >::Invoke(80 /* System.Void UnityGLTF.SpecGloss2StandardMap::set_SpecularGlossinessXOffset(UnityEngine.Vector2) */, __this, L_2);
		return;
	}
}
// System.Void UnityGLTF.SpecGloss2StandardMap::set_SpecularGlossinessXTexCoord(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpecGloss2StandardMap_set_SpecularGlossinessXTexCoord_m6086D89672A0F9CC8638E20F9208AEE74F8FFDE7 (SpecGloss2StandardMap_tDE7C0F9BFC51BA35B3D272A97615586D4DFBF158 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void UnityGLTF.SpecGloss2StandardMap::set_SpecularFactor(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpecGloss2StandardMap_set_SpecularFactor_m06926F5E36AAEA425703FA278A413539E0CCE743 (SpecGloss2StandardMap_tDE7C0F9BFC51BA35B3D272A97615586D4DFBF158 * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SpecGloss2StandardMap_set_SpecularFactor_m06926F5E36AAEA425703FA278A413539E0CCE743_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_0 = ((StandardMap_t3FEC34B6C31267CFE948D5C63C3DFECC4A1C4806 *)__this)->get__material_0();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_1 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E_il2cpp_TypeInfo_var);
		Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  L_2 = Vector4_op_Implicit_m5BFA8D95F88CB2AEA6E02B200A61B718314A8495(L_1, /*hidden argument*/NULL);
		NullCheck(L_0);
		Material_SetVector_m6FC2CC4EBE6C45D48D8B9164148A0CB3124335EC(L_0, _stringLiteral11E7231B58E151F8FE4A8F8B01F03097CE5F3D7D, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityGLTF.SpecGloss2StandardMap::set_GlossinessFactor(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpecGloss2StandardMap_set_GlossinessFactor_m3F37A2EC80EE9CF4242F5D293A962A8D5C3EEB32 (SpecGloss2StandardMap_tDE7C0F9BFC51BA35B3D272A97615586D4DFBF158 * __this, double ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SpecGloss2StandardMap_set_GlossinessFactor_m3F37A2EC80EE9CF4242F5D293A962A8D5C3EEB32_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_0 = ((StandardMap_t3FEC34B6C31267CFE948D5C63C3DFECC4A1C4806 *)__this)->get__material_0();
		double L_1 = ___value0;
		NullCheck(L_0);
		Material_SetFloat_m4B7D3FAA00D20BCB3C487E72B7E4B2691D5ECAD2(L_0, _stringLiteralF46645E80E6B2F5870F335E7B980A4C4CBFCEC42, (((float)((float)(float)L_1))), /*hidden argument*/NULL);
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_2 = ((StandardMap_t3FEC34B6C31267CFE948D5C63C3DFECC4A1C4806 *)__this)->get__material_0();
		double L_3 = ___value0;
		NullCheck(L_2);
		Material_SetFloat_m4B7D3FAA00D20BCB3C487E72B7E4B2691D5ECAD2(L_2, _stringLiteral76DB1AA30D048277794F2EB6004B5AE7BAA0CBC7, (((float)((float)(float)L_3))), /*hidden argument*/NULL);
		return;
	}
}
// UnityGLTF.IUniformMap UnityGLTF.SpecGloss2StandardMap::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SpecGloss2StandardMap_Clone_mED6F7C7447D31B3AD41031DE7C8699C7EDA48878 (SpecGloss2StandardMap_tDE7C0F9BFC51BA35B3D272A97615586D4DFBF158 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SpecGloss2StandardMap_Clone_mED6F7C7447D31B3AD41031DE7C8699C7EDA48878_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	SpecGloss2StandardMap_tDE7C0F9BFC51BA35B3D272A97615586D4DFBF158 * V_0 = NULL;
	{
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_0 = ((StandardMap_t3FEC34B6C31267CFE948D5C63C3DFECC4A1C4806 *)__this)->get__material_0();
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_1 = (Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 *)il2cpp_codegen_object_new(Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598_il2cpp_TypeInfo_var);
		Material__ctor_m0171C6D4D3FD04D58C70808F255DBA67D0ED2BDE(L_1, L_0, /*hidden argument*/NULL);
		SpecGloss2StandardMap_tDE7C0F9BFC51BA35B3D272A97615586D4DFBF158 * L_2 = (SpecGloss2StandardMap_tDE7C0F9BFC51BA35B3D272A97615586D4DFBF158 *)il2cpp_codegen_object_new(SpecGloss2StandardMap_tDE7C0F9BFC51BA35B3D272A97615586D4DFBF158_il2cpp_TypeInfo_var);
		SpecGloss2StandardMap__ctor_m29890CEC2EA3A3245F1174C9EB4ACBD2695C73DC(L_2, L_1, ((int32_t)1000), /*hidden argument*/NULL);
		V_0 = L_2;
		SpecGloss2StandardMap_tDE7C0F9BFC51BA35B3D272A97615586D4DFBF158 * L_3 = V_0;
		StandardMap_Copy_mB46954EB8DA70A2310FFDCAF0EE90DB82602457D(__this, L_3, /*hidden argument*/NULL);
		SpecGloss2StandardMap_tDE7C0F9BFC51BA35B3D272A97615586D4DFBF158 * L_4 = V_0;
		return L_4;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityGLTF.SpecGlossMap::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpecGlossMap__ctor_m3026FE740E47EDD059CEC781C6186BA6E3D5B3A5 (SpecGlossMap_t6C49CAC441F37DFF9D6A99F57A1EE359A82DC110 * __this, int32_t ___MaxLOD0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SpecGlossMap__ctor_m3026FE740E47EDD059CEC781C6186BA6E3D5B3A5_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___MaxLOD0;
		SpecGloss2StandardMap__ctor_mCE8053B4F2AD2F7B0C5D221535FD3EE9E294D83E(__this, _stringLiteralA714935433A98434E4240F3E048E4EC8841ED4B4, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityGLTF.SpecGlossMap::.ctor(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpecGlossMap__ctor_m50947B23D33E60F80B04CAACB28BA47A72142285 (SpecGlossMap_t6C49CAC441F37DFF9D6A99F57A1EE359A82DC110 * __this, String_t* ___shaderName0, int32_t ___MaxLOD1, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___shaderName0;
		int32_t L_1 = ___MaxLOD1;
		SpecGloss2StandardMap__ctor_mCE8053B4F2AD2F7B0C5D221535FD3EE9E294D83E(__this, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityGLTF.SpecGlossMap::.ctor(UnityEngine.Material,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpecGlossMap__ctor_m57AFC15B92D682FCAF527ADBFDB4FDDC12CC20F7 (SpecGlossMap_t6C49CAC441F37DFF9D6A99F57A1EE359A82DC110 * __this, Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___m0, int32_t ___MaxLOD1, const RuntimeMethod* method)
{
	{
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_0 = ___m0;
		int32_t L_1 = ___MaxLOD1;
		SpecGloss2StandardMap__ctor_m29890CEC2EA3A3245F1174C9EB4ACBD2695C73DC(__this, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityGLTF.SpecGlossMap::set_NormalTexCoord(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpecGlossMap_set_NormalTexCoord_mAED5977F2A8BF054F983FB3F8CB714E0B020B736 (SpecGlossMap_t6C49CAC441F37DFF9D6A99F57A1EE359A82DC110 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void UnityGLTF.SpecGlossMap::set_EmissiveTexCoord(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpecGlossMap_set_EmissiveTexCoord_mC3F87CD5274CE921543B69E3F6AE1D424F84DBFA (SpecGlossMap_t6C49CAC441F37DFF9D6A99F57A1EE359A82DC110 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void UnityGLTF.SpecGlossMap::set_DiffuseTexCoord(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpecGlossMap_set_DiffuseTexCoord_m383E5EC96D62133FFEFEBE6DBF9CAE298BC4E759 (SpecGlossMap_t6C49CAC441F37DFF9D6A99F57A1EE359A82DC110 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		return;
	}
}
// UnityGLTF.IUniformMap UnityGLTF.SpecGlossMap::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SpecGlossMap_Clone_mDCAF2C87033047E960FAE9C39A8DD51FE83DFD28 (SpecGlossMap_t6C49CAC441F37DFF9D6A99F57A1EE359A82DC110 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SpecGlossMap_Clone_mDCAF2C87033047E960FAE9C39A8DD51FE83DFD28_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	SpecGlossMap_t6C49CAC441F37DFF9D6A99F57A1EE359A82DC110 * V_0 = NULL;
	{
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_0 = ((StandardMap_t3FEC34B6C31267CFE948D5C63C3DFECC4A1C4806 *)__this)->get__material_0();
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_1 = (Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 *)il2cpp_codegen_object_new(Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598_il2cpp_TypeInfo_var);
		Material__ctor_m0171C6D4D3FD04D58C70808F255DBA67D0ED2BDE(L_1, L_0, /*hidden argument*/NULL);
		SpecGlossMap_t6C49CAC441F37DFF9D6A99F57A1EE359A82DC110 * L_2 = (SpecGlossMap_t6C49CAC441F37DFF9D6A99F57A1EE359A82DC110 *)il2cpp_codegen_object_new(SpecGlossMap_t6C49CAC441F37DFF9D6A99F57A1EE359A82DC110_il2cpp_TypeInfo_var);
		SpecGlossMap__ctor_m57AFC15B92D682FCAF527ADBFDB4FDDC12CC20F7(L_2, L_1, ((int32_t)1000), /*hidden argument*/NULL);
		V_0 = L_2;
		SpecGlossMap_t6C49CAC441F37DFF9D6A99F57A1EE359A82DC110 * L_3 = V_0;
		StandardMap_Copy_mB46954EB8DA70A2310FFDCAF0EE90DB82602457D(__this, L_3, /*hidden argument*/NULL);
		SpecGlossMap_t6C49CAC441F37DFF9D6A99F57A1EE359A82DC110 * L_4 = V_0;
		return L_4;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityGLTF.StandardMap::.ctor(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StandardMap__ctor_mD94FEC0FF5EBEB8E96ED131881460121F90654BA (StandardMap_t3FEC34B6C31267CFE948D5C63C3DFECC4A1C4806 * __this, String_t* ___shaderName0, int32_t ___MaxLOD1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (StandardMap__ctor_mD94FEC0FF5EBEB8E96ED131881460121F90654BA_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Shader_tE2731FF351B74AB4186897484FB01E000C1160CA * V_0 = NULL;
	{
		__this->set__alphaCutoff_2((0.5));
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_0;
		memset((&L_0), 0, sizeof(L_0));
		Vector2__ctor_mEE8FB117AB1F8DB746FB8B3EB4C0DA3BF2A230D0((&L_0), (0.0f), (0.0f), /*hidden argument*/NULL);
		__this->set_normalOffset_3(L_0);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_1;
		memset((&L_1), 0, sizeof(L_1));
		Vector2__ctor_mEE8FB117AB1F8DB746FB8B3EB4C0DA3BF2A230D0((&L_1), (0.0f), (0.0f), /*hidden argument*/NULL);
		__this->set_occlusionOffset_4(L_1);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_2;
		memset((&L_2), 0, sizeof(L_2));
		Vector2__ctor_mEE8FB117AB1F8DB746FB8B3EB4C0DA3BF2A230D0((&L_2), (0.0f), (0.0f), /*hidden argument*/NULL);
		__this->set_emissiveOffset_5(L_2);
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		String_t* L_3 = ___shaderName0;
		Shader_tE2731FF351B74AB4186897484FB01E000C1160CA * L_4 = Shader_Find_m755654AA68D1C663A3E20A10E00CDC10F96C962B(L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		Shader_tE2731FF351B74AB4186897484FB01E000C1160CA * L_5 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_6 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C(L_5, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_0075;
		}
	}
	{
		String_t* L_7 = ___shaderName0;
		String_t* L_8 = String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE(L_7, _stringLiteral33B925D0E72A4BECD588D3986D1051DE5A45C857, /*hidden argument*/NULL);
		ShaderNotFoundException_t20F210948B72AE4B32DA84FE44A94340A5959E01 * L_9 = (ShaderNotFoundException_t20F210948B72AE4B32DA84FE44A94340A5959E01 *)il2cpp_codegen_object_new(ShaderNotFoundException_t20F210948B72AE4B32DA84FE44A94340A5959E01_il2cpp_TypeInfo_var);
		ShaderNotFoundException__ctor_m95667D5EB644710A69BEAA4E8DFAFD784ED6D9A6(L_9, L_8, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_9, NULL, StandardMap__ctor_mD94FEC0FF5EBEB8E96ED131881460121F90654BA_RuntimeMethod_var);
	}

IL_0075:
	{
		Shader_tE2731FF351B74AB4186897484FB01E000C1160CA * L_10 = V_0;
		int32_t L_11 = ___MaxLOD1;
		NullCheck(L_10);
		Shader_set_maximumLOD_mAF8E3615BB40E1381CDC4110D20D3BB866AFDC4B(L_10, L_11, /*hidden argument*/NULL);
		Shader_tE2731FF351B74AB4186897484FB01E000C1160CA * L_12 = V_0;
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_13 = (Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 *)il2cpp_codegen_object_new(Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598_il2cpp_TypeInfo_var);
		Material__ctor_m81E76B5C1316004F25D4FE9CEC0E78A7428DABA8(L_13, L_12, /*hidden argument*/NULL);
		__this->set__material_0(L_13);
		return;
	}
}
// System.Void UnityGLTF.StandardMap::.ctor(UnityEngine.Material,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StandardMap__ctor_mE7EFB02723CA25A21A4DB13F51863763B6D93167 (StandardMap_t3FEC34B6C31267CFE948D5C63C3DFECC4A1C4806 * __this, Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___mat0, int32_t ___MaxLOD1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (StandardMap__ctor_mE7EFB02723CA25A21A4DB13F51863763B6D93167_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		__this->set__alphaCutoff_2((0.5));
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_0;
		memset((&L_0), 0, sizeof(L_0));
		Vector2__ctor_mEE8FB117AB1F8DB746FB8B3EB4C0DA3BF2A230D0((&L_0), (0.0f), (0.0f), /*hidden argument*/NULL);
		__this->set_normalOffset_3(L_0);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_1;
		memset((&L_1), 0, sizeof(L_1));
		Vector2__ctor_mEE8FB117AB1F8DB746FB8B3EB4C0DA3BF2A230D0((&L_1), (0.0f), (0.0f), /*hidden argument*/NULL);
		__this->set_occlusionOffset_4(L_1);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_2;
		memset((&L_2), 0, sizeof(L_2));
		Vector2__ctor_mEE8FB117AB1F8DB746FB8B3EB4C0DA3BF2A230D0((&L_2), (0.0f), (0.0f), /*hidden argument*/NULL);
		__this->set_emissiveOffset_5(L_2);
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_3 = ___mat0;
		NullCheck(L_3);
		Shader_tE2731FF351B74AB4186897484FB01E000C1160CA * L_4 = Material_get_shader_m9CEDCA4D97D42588C6B827400E364E4A8EC55FF0(L_3, /*hidden argument*/NULL);
		int32_t L_5 = ___MaxLOD1;
		NullCheck(L_4);
		Shader_set_maximumLOD_mAF8E3615BB40E1381CDC4110D20D3BB866AFDC4B(L_4, L_5, /*hidden argument*/NULL);
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_6 = ___mat0;
		__this->set__material_0(L_6);
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_7 = ___mat0;
		NullCheck(L_7);
		bool L_8 = Material_HasProperty_m8611FACA6F9D9B2B5C3E92B6D93D2D514B443512(L_7, _stringLiteral9CCF554936E83A9185450EDFD0FB78A15BCF99BF, /*hidden argument*/NULL);
		if (!L_8)
		{
			goto IL_0086;
		}
	}
	{
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_9 = ___mat0;
		NullCheck(L_9);
		float L_10 = Material_GetFloat_m8A4243FC6619B4E0E820E87754035700FD4913F0(L_9, _stringLiteral9CCF554936E83A9185450EDFD0FB78A15BCF99BF, /*hidden argument*/NULL);
		__this->set__alphaCutoff_2((((double)((double)(double)L_10))));
	}

IL_0086:
	{
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_11 = ___mat0;
		NullCheck(L_11);
		int32_t L_12 = Material_get_renderQueue_mDEC48BD94C93FF5A04BC7190E4B5C56BB6E44140(L_11, /*hidden argument*/NULL);
		V_0 = L_12;
		int32_t L_13 = V_0;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)2000))))
		{
			goto IL_00b7;
		}
	}
	{
		int32_t L_14 = V_0;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)2450))))
		{
			goto IL_00a7;
		}
	}
	{
		int32_t L_15 = V_0;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)3000))))
		{
			goto IL_00af;
		}
	}
	{
		goto IL_00b7;
	}

IL_00a7:
	{
		__this->set__alphaMode_1(1);
		return;
	}

IL_00af:
	{
		__this->set__alphaMode_1(2);
		return;
	}

IL_00b7:
	{
		__this->set__alphaMode_1(0);
		return;
	}
}
// UnityEngine.Material UnityGLTF.StandardMap::get_Material()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * StandardMap_get_Material_m18F27D01588B94CE110326DDBA707B6A98167EBC (StandardMap_t3FEC34B6C31267CFE948D5C63C3DFECC4A1C4806 * __this, const RuntimeMethod* method)
{
	{
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_0 = __this->get__material_0();
		return L_0;
	}
}
// System.Void UnityGLTF.StandardMap::set_NormalTexture(UnityEngine.Texture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StandardMap_set_NormalTexture_m3EB57188623427B9C697B11C0766AD11B920AB70 (StandardMap_t3FEC34B6C31267CFE948D5C63C3DFECC4A1C4806 * __this, Texture_t387FE83BB848001FD06B14707AEA6D5A0F6A95F4 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (StandardMap_set_NormalTexture_m3EB57188623427B9C697B11C0766AD11B920AB70_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_0 = __this->get__material_0();
		NullCheck(L_0);
		bool L_1 = Material_HasProperty_m8611FACA6F9D9B2B5C3E92B6D93D2D514B443512(L_0, _stringLiteral2A0C7403061BB5C75EAD7924CB636F3C4AD3CEBA, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0034;
		}
	}
	{
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_2 = __this->get__material_0();
		Texture_t387FE83BB848001FD06B14707AEA6D5A0F6A95F4 * L_3 = ___value0;
		NullCheck(L_2);
		Material_SetTexture_mAA0F00FACFE40CFE4BE28A11162E5EEFCC5F5A61(L_2, _stringLiteral2A0C7403061BB5C75EAD7924CB636F3C4AD3CEBA, L_3, /*hidden argument*/NULL);
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_4 = __this->get__material_0();
		NullCheck(L_4);
		Material_EnableKeyword_m7466758182CBBC40134C9048CDF682DF46F32FA9(L_4, _stringLiteral0ED4893A04BF987799495BA5C8FC366542B743A5, /*hidden argument*/NULL);
		return;
	}

IL_0034:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_LogWarning_m37338644DC81F640CCDFEAE35A223F0E965F0568(_stringLiteral4ADCBE6CA00DFE6A1F1BF231938846D022B05CA4, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityGLTF.StandardMap::set_NormalTexCoord(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StandardMap_set_NormalTexCoord_m7F7DB45662DCCE779858C871C1B84FBC337B4FC0 (StandardMap_t3FEC34B6C31267CFE948D5C63C3DFECC4A1C4806 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void UnityGLTF.StandardMap::set_NormalXOffset(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StandardMap_set_NormalXOffset_mA8D73441693A23035E6E697263F2E6A109B401EF (StandardMap_t3FEC34B6C31267CFE948D5C63C3DFECC4A1C4806 * __this, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (StandardMap_set_NormalXOffset_mA8D73441693A23035E6E697263F2E6A109B401EF_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_0 = ___value0;
		__this->set_normalOffset_3(L_0);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * L_1 = __this->get_address_of_normalOffset_3();
		float L_2 = L_1->get_x_0();
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_3 = VirtFuncInvoker0< Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  >::Invoke(33 /* UnityEngine.Vector2 UnityGLTF.StandardMap::get_NormalXScale() */, __this);
		float L_4 = L_3.get_y_1();
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * L_5 = __this->get_address_of_normalOffset_3();
		float L_6 = L_5->get_y_1();
		Vector2__ctor_mEE8FB117AB1F8DB746FB8B3EB4C0DA3BF2A230D0((Vector2_tA85D2DD88578276CA8A8796756458277E72D073D *)(&V_0), L_2, ((float)il2cpp_codegen_subtract((float)((float)il2cpp_codegen_subtract((float)(1.0f), (float)L_4)), (float)L_6)), /*hidden argument*/NULL);
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_7 = __this->get__material_0();
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_8 = V_0;
		NullCheck(L_7);
		Material_SetTextureOffset_mAF1B6A6AD9E952262F7AE80B17B31D8FF720ADE7(L_7, _stringLiteral2A0C7403061BB5C75EAD7924CB636F3C4AD3CEBA, L_8, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityGLTF.StandardMap::set_NormalXRotation(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StandardMap_set_NormalXRotation_mF2A8AF685FBFDB255E5D0E1729EB8D855A160C31 (StandardMap_t3FEC34B6C31267CFE948D5C63C3DFECC4A1C4806 * __this, double ___value0, const RuntimeMethod* method)
{
	{
		return;
	}
}
// UnityEngine.Vector2 UnityGLTF.StandardMap::get_NormalXScale()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  StandardMap_get_NormalXScale_m832AE129CC69616367B64F9D2795A4C67DD7376A (StandardMap_t3FEC34B6C31267CFE948D5C63C3DFECC4A1C4806 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (StandardMap_get_NormalXScale_m832AE129CC69616367B64F9D2795A4C67DD7376A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_0 = __this->get__material_0();
		NullCheck(L_0);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_1 = Material_GetTextureScale_m2B1FFB0B67C22C3544E2E66E3E0D5B8DEE7EA859(L_0, _stringLiteral2A0C7403061BB5C75EAD7924CB636F3C4AD3CEBA, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void UnityGLTF.StandardMap::set_NormalXScale(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StandardMap_set_NormalXScale_m9AC2DD7CB4DD24DFF74449A041B494D65E3D5D53 (StandardMap_t3FEC34B6C31267CFE948D5C63C3DFECC4A1C4806 * __this, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (StandardMap_set_NormalXScale_m9AC2DD7CB4DD24DFF74449A041B494D65E3D5D53_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_0 = __this->get__material_0();
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_1 = ___value0;
		NullCheck(L_0);
		Material_SetTextureScale_m9D9C2ADD50088A1712891A6A2AAAAFA734703BBF(L_0, _stringLiteral2A0C7403061BB5C75EAD7924CB636F3C4AD3CEBA, L_1, /*hidden argument*/NULL);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_2 = __this->get_normalOffset_3();
		VirtActionInvoker1< Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  >::Invoke(31 /* System.Void UnityGLTF.StandardMap::set_NormalXOffset(UnityEngine.Vector2) */, __this, L_2);
		return;
	}
}
// System.Void UnityGLTF.StandardMap::set_NormalXTexCoord(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StandardMap_set_NormalXTexCoord_mA7B0CD757B54C2C1E1B8AD53C3B52CC83792B456 (StandardMap_t3FEC34B6C31267CFE948D5C63C3DFECC4A1C4806 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void UnityGLTF.StandardMap::set_NormalTexScale(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StandardMap_set_NormalTexScale_m83C88C7F8BE7F23CD79B19EF9E82E82FFD531115 (StandardMap_t3FEC34B6C31267CFE948D5C63C3DFECC4A1C4806 * __this, double ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (StandardMap_set_NormalTexScale_m83C88C7F8BE7F23CD79B19EF9E82E82FFD531115_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_0 = __this->get__material_0();
		NullCheck(L_0);
		bool L_1 = Material_HasProperty_m8611FACA6F9D9B2B5C3E92B6D93D2D514B443512(L_0, _stringLiteral3A147112D98F38D70553BABE55C66B18C3F689A3, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0025;
		}
	}
	{
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_2 = __this->get__material_0();
		double L_3 = ___value0;
		NullCheck(L_2);
		Material_SetFloat_m4B7D3FAA00D20BCB3C487E72B7E4B2691D5ECAD2(L_2, _stringLiteral3A147112D98F38D70553BABE55C66B18C3F689A3, (((float)((float)(float)L_3))), /*hidden argument*/NULL);
		return;
	}

IL_0025:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_LogWarning_m37338644DC81F640CCDFEAE35A223F0E965F0568(_stringLiteral95AC564C8280AFFCE0FD6856683AA06F5793B8C4, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityGLTF.StandardMap::set_OcclusionTexture(UnityEngine.Texture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StandardMap_set_OcclusionTexture_mC5B15C946D67FDEBC0CFE25ABDBFCA1078975446 (StandardMap_t3FEC34B6C31267CFE948D5C63C3DFECC4A1C4806 * __this, Texture_t387FE83BB848001FD06B14707AEA6D5A0F6A95F4 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (StandardMap_set_OcclusionTexture_mC5B15C946D67FDEBC0CFE25ABDBFCA1078975446_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_0 = __this->get__material_0();
		NullCheck(L_0);
		bool L_1 = Material_HasProperty_m8611FACA6F9D9B2B5C3E92B6D93D2D514B443512(L_0, _stringLiteralF877BF1D6584820709A40F8D4766EE0CF3D1129B, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0024;
		}
	}
	{
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_2 = __this->get__material_0();
		Texture_t387FE83BB848001FD06B14707AEA6D5A0F6A95F4 * L_3 = ___value0;
		NullCheck(L_2);
		Material_SetTexture_mAA0F00FACFE40CFE4BE28A11162E5EEFCC5F5A61(L_2, _stringLiteralF877BF1D6584820709A40F8D4766EE0CF3D1129B, L_3, /*hidden argument*/NULL);
		return;
	}

IL_0024:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_LogWarning_m37338644DC81F640CCDFEAE35A223F0E965F0568(_stringLiteralD4CDC3890B1DA1BF12D438D784CA622E32AEE17A, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityGLTF.StandardMap::set_OcclusionXOffset(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StandardMap_set_OcclusionXOffset_m9192EFFCEA3F94B6C8A679663797CF4F728EDBC0 (StandardMap_t3FEC34B6C31267CFE948D5C63C3DFECC4A1C4806 * __this, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (StandardMap_set_OcclusionXOffset_m9192EFFCEA3F94B6C8A679663797CF4F728EDBC0_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_0 = ___value0;
		__this->set_occlusionOffset_4(L_0);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * L_1 = __this->get_address_of_occlusionOffset_4();
		float L_2 = L_1->get_x_0();
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_3 = VirtFuncInvoker0< Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  >::Invoke(40 /* UnityEngine.Vector2 UnityGLTF.StandardMap::get_OcclusionXScale() */, __this);
		float L_4 = L_3.get_y_1();
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * L_5 = __this->get_address_of_occlusionOffset_4();
		float L_6 = L_5->get_y_1();
		Vector2__ctor_mEE8FB117AB1F8DB746FB8B3EB4C0DA3BF2A230D0((Vector2_tA85D2DD88578276CA8A8796756458277E72D073D *)(&V_0), L_2, ((float)il2cpp_codegen_subtract((float)((float)il2cpp_codegen_subtract((float)(1.0f), (float)L_4)), (float)L_6)), /*hidden argument*/NULL);
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_7 = __this->get__material_0();
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_8 = V_0;
		NullCheck(L_7);
		Material_SetTextureOffset_mAF1B6A6AD9E952262F7AE80B17B31D8FF720ADE7(L_7, _stringLiteralF877BF1D6584820709A40F8D4766EE0CF3D1129B, L_8, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityGLTF.StandardMap::set_OcclusionXRotation(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StandardMap_set_OcclusionXRotation_m8E20D45581AB740FF7F01D15F4D4FED369A3315D (StandardMap_t3FEC34B6C31267CFE948D5C63C3DFECC4A1C4806 * __this, double ___value0, const RuntimeMethod* method)
{
	{
		return;
	}
}
// UnityEngine.Vector2 UnityGLTF.StandardMap::get_OcclusionXScale()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  StandardMap_get_OcclusionXScale_mF4ECD25EE4BF94C30516BD7B0E31E450465A2331 (StandardMap_t3FEC34B6C31267CFE948D5C63C3DFECC4A1C4806 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (StandardMap_get_OcclusionXScale_mF4ECD25EE4BF94C30516BD7B0E31E450465A2331_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_0 = __this->get__material_0();
		NullCheck(L_0);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_1 = Material_GetTextureScale_m2B1FFB0B67C22C3544E2E66E3E0D5B8DEE7EA859(L_0, _stringLiteralF877BF1D6584820709A40F8D4766EE0CF3D1129B, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void UnityGLTF.StandardMap::set_OcclusionXScale(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StandardMap_set_OcclusionXScale_mFE852809298CF446DD2B6414DC470FF11BF27773 (StandardMap_t3FEC34B6C31267CFE948D5C63C3DFECC4A1C4806 * __this, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (StandardMap_set_OcclusionXScale_mFE852809298CF446DD2B6414DC470FF11BF27773_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_0 = __this->get__material_0();
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_1 = ___value0;
		NullCheck(L_0);
		Material_SetTextureScale_m9D9C2ADD50088A1712891A6A2AAAAFA734703BBF(L_0, _stringLiteralF877BF1D6584820709A40F8D4766EE0CF3D1129B, L_1, /*hidden argument*/NULL);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_2 = __this->get_occlusionOffset_4();
		VirtActionInvoker1< Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  >::Invoke(38 /* System.Void UnityGLTF.StandardMap::set_OcclusionXOffset(UnityEngine.Vector2) */, __this, L_2);
		return;
	}
}
// System.Void UnityGLTF.StandardMap::set_OcclusionXTexCoord(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StandardMap_set_OcclusionXTexCoord_mE89758A56618F25E831D08612B7F6C67896590C3 (StandardMap_t3FEC34B6C31267CFE948D5C63C3DFECC4A1C4806 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void UnityGLTF.StandardMap::set_OcclusionTexStrength(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StandardMap_set_OcclusionTexStrength_mA1F6EC8A9BD0320839B6EF1ABDAFFED5130EDA20 (StandardMap_t3FEC34B6C31267CFE948D5C63C3DFECC4A1C4806 * __this, double ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (StandardMap_set_OcclusionTexStrength_mA1F6EC8A9BD0320839B6EF1ABDAFFED5130EDA20_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_0 = __this->get__material_0();
		NullCheck(L_0);
		bool L_1 = Material_HasProperty_m8611FACA6F9D9B2B5C3E92B6D93D2D514B443512(L_0, _stringLiteral549A3299D74D9A9920C618F3F180595D6E68FD16, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0025;
		}
	}
	{
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_2 = __this->get__material_0();
		double L_3 = ___value0;
		NullCheck(L_2);
		Material_SetFloat_m4B7D3FAA00D20BCB3C487E72B7E4B2691D5ECAD2(L_2, _stringLiteral549A3299D74D9A9920C618F3F180595D6E68FD16, (((float)((float)(float)L_3))), /*hidden argument*/NULL);
		return;
	}

IL_0025:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_LogWarning_m37338644DC81F640CCDFEAE35A223F0E965F0568(_stringLiteralFA3FF31B8521C3FFF66EA30521B2578FF9A5C025, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityGLTF.StandardMap::set_EmissiveTexture(UnityEngine.Texture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StandardMap_set_EmissiveTexture_mBAEF56B05F38CCEFBE665C80742B7BD0157668ED (StandardMap_t3FEC34B6C31267CFE948D5C63C3DFECC4A1C4806 * __this, Texture_t387FE83BB848001FD06B14707AEA6D5A0F6A95F4 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (StandardMap_set_EmissiveTexture_mBAEF56B05F38CCEFBE665C80742B7BD0157668ED_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_0 = __this->get__material_0();
		NullCheck(L_0);
		bool L_1 = Material_HasProperty_m8611FACA6F9D9B2B5C3E92B6D93D2D514B443512(L_0, _stringLiteral4F33A65A08BA0D97EB2A84B40E284FAF0000269D, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0034;
		}
	}
	{
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_2 = __this->get__material_0();
		Texture_t387FE83BB848001FD06B14707AEA6D5A0F6A95F4 * L_3 = ___value0;
		NullCheck(L_2);
		Material_SetTexture_mAA0F00FACFE40CFE4BE28A11162E5EEFCC5F5A61(L_2, _stringLiteral4F33A65A08BA0D97EB2A84B40E284FAF0000269D, L_3, /*hidden argument*/NULL);
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_4 = __this->get__material_0();
		NullCheck(L_4);
		Material_EnableKeyword_m7466758182CBBC40134C9048CDF682DF46F32FA9(L_4, _stringLiteral48372A4A03BA885FD394733AFD9DE546D29F4ED5, /*hidden argument*/NULL);
		return;
	}

IL_0034:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_LogWarning_m37338644DC81F640CCDFEAE35A223F0E965F0568(_stringLiteral5D9F687D9FC9C14E044E9189F3645779B7DE02A5, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityGLTF.StandardMap::set_EmissiveTexCoord(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StandardMap_set_EmissiveTexCoord_m482ABE38CDD90CCFB33E954F91DA376DE76EED12 (StandardMap_t3FEC34B6C31267CFE948D5C63C3DFECC4A1C4806 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void UnityGLTF.StandardMap::set_EmissiveXOffset(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StandardMap_set_EmissiveXOffset_m30027CD14781CFA60674129EC92556D11895F825 (StandardMap_t3FEC34B6C31267CFE948D5C63C3DFECC4A1C4806 * __this, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (StandardMap_set_EmissiveXOffset_m30027CD14781CFA60674129EC92556D11895F825_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_0 = ___value0;
		__this->set_emissiveOffset_5(L_0);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * L_1 = __this->get_address_of_emissiveOffset_5();
		float L_2 = L_1->get_x_0();
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_3 = VirtFuncInvoker0< Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  >::Invoke(48 /* UnityEngine.Vector2 UnityGLTF.StandardMap::get_EmissiveXScale() */, __this);
		float L_4 = L_3.get_y_1();
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * L_5 = __this->get_address_of_emissiveOffset_5();
		float L_6 = L_5->get_y_1();
		Vector2__ctor_mEE8FB117AB1F8DB746FB8B3EB4C0DA3BF2A230D0((Vector2_tA85D2DD88578276CA8A8796756458277E72D073D *)(&V_0), L_2, ((float)il2cpp_codegen_subtract((float)((float)il2cpp_codegen_subtract((float)(1.0f), (float)L_4)), (float)L_6)), /*hidden argument*/NULL);
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_7 = __this->get__material_0();
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_8 = V_0;
		NullCheck(L_7);
		Material_SetTextureOffset_mAF1B6A6AD9E952262F7AE80B17B31D8FF720ADE7(L_7, _stringLiteral4F33A65A08BA0D97EB2A84B40E284FAF0000269D, L_8, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityGLTF.StandardMap::set_EmissiveXRotation(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StandardMap_set_EmissiveXRotation_mC8AB735FB591C8A17900E029917AC9650CB5A1B1 (StandardMap_t3FEC34B6C31267CFE948D5C63C3DFECC4A1C4806 * __this, double ___value0, const RuntimeMethod* method)
{
	{
		return;
	}
}
// UnityEngine.Vector2 UnityGLTF.StandardMap::get_EmissiveXScale()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  StandardMap_get_EmissiveXScale_m6D6DDF8F9FDD24BB55FF55A48CFA3C6038220EEB (StandardMap_t3FEC34B6C31267CFE948D5C63C3DFECC4A1C4806 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (StandardMap_get_EmissiveXScale_m6D6DDF8F9FDD24BB55FF55A48CFA3C6038220EEB_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_0 = __this->get__material_0();
		NullCheck(L_0);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_1 = Material_GetTextureScale_m2B1FFB0B67C22C3544E2E66E3E0D5B8DEE7EA859(L_0, _stringLiteral4F33A65A08BA0D97EB2A84B40E284FAF0000269D, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void UnityGLTF.StandardMap::set_EmissiveXScale(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StandardMap_set_EmissiveXScale_m4598D5EC38D89B9E581F5ED217F18EDA1EDE70B5 (StandardMap_t3FEC34B6C31267CFE948D5C63C3DFECC4A1C4806 * __this, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (StandardMap_set_EmissiveXScale_m4598D5EC38D89B9E581F5ED217F18EDA1EDE70B5_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_0 = __this->get__material_0();
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_1 = ___value0;
		NullCheck(L_0);
		Material_SetTextureScale_m9D9C2ADD50088A1712891A6A2AAAAFA734703BBF(L_0, _stringLiteral4F33A65A08BA0D97EB2A84B40E284FAF0000269D, L_1, /*hidden argument*/NULL);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_2 = __this->get_emissiveOffset_5();
		VirtActionInvoker1< Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  >::Invoke(46 /* System.Void UnityGLTF.StandardMap::set_EmissiveXOffset(UnityEngine.Vector2) */, __this, L_2);
		return;
	}
}
// System.Void UnityGLTF.StandardMap::set_EmissiveXTexCoord(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StandardMap_set_EmissiveXTexCoord_m853DF1C90E5A1AB3DA9798DCDBB6D574997F2F7D (StandardMap_t3FEC34B6C31267CFE948D5C63C3DFECC4A1C4806 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void UnityGLTF.StandardMap::set_EmissiveFactor(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StandardMap_set_EmissiveFactor_mA23550F9697BABE3B9AA337AE5777B3275FCB2F2 (StandardMap_t3FEC34B6C31267CFE948D5C63C3DFECC4A1C4806 * __this, Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (StandardMap_set_EmissiveFactor_mA23550F9697BABE3B9AA337AE5777B3275FCB2F2_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_0 = __this->get__material_0();
		NullCheck(L_0);
		bool L_1 = Material_HasProperty_m8611FACA6F9D9B2B5C3E92B6D93D2D514B443512(L_0, _stringLiteralCA16D8C4DE0440224F69A6AB0F832B38618E1C41, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0024;
		}
	}
	{
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_2 = __this->get__material_0();
		Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  L_3 = ___value0;
		NullCheck(L_2);
		Material_SetColor_mB91EF8CAC3AB3B39D2535BF9F7FECECF3EC2161C(L_2, _stringLiteralCA16D8C4DE0440224F69A6AB0F832B38618E1C41, L_3, /*hidden argument*/NULL);
		return;
	}

IL_0024:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_LogWarning_m37338644DC81F640CCDFEAE35A223F0E965F0568(_stringLiteral7834B12DE453F0A3CB2149C41A44CE4379CAAFF0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityGLTF.StandardMap::set_AlphaMode(GLTF.Schema.AlphaMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StandardMap_set_AlphaMode_m1A16F348AF54973721AE71A1B507A95B57714A7B (StandardMap_t3FEC34B6C31267CFE948D5C63C3DFECC4A1C4806 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (StandardMap_set_AlphaMode_m1A16F348AF54973721AE71A1B507A95B57714A7B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___value0;
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_00c0;
		}
	}
	{
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_1 = __this->get__material_0();
		NullCheck(L_1);
		Material_SetOverrideTag_m773D4D6BE26AA7E1200C76571C6DABC4A53002DB(L_1, _stringLiteral2EF6458D57BA917EA3F6B44C5ECA2360C289D9A6, _stringLiteral8155D47CED513CDC15A2E017C7FF8AC0DFC4A3BF, /*hidden argument*/NULL);
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_2 = __this->get__material_0();
		NullCheck(L_2);
		Material_SetInt_m1FCBDBB985E6A299AE11C3D8AF29BB4D7C7DF278(L_2, _stringLiteral821E099B69AB1185D9EA4C425921DD99EEDA20C4, 1, /*hidden argument*/NULL);
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_3 = __this->get__material_0();
		NullCheck(L_3);
		Material_SetInt_m1FCBDBB985E6A299AE11C3D8AF29BB4D7C7DF278(L_3, _stringLiteralC9E65FC5F63AB6DD9108B8C07C513736E30BFA7B, 0, /*hidden argument*/NULL);
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_4 = __this->get__material_0();
		NullCheck(L_4);
		Material_SetInt_m1FCBDBB985E6A299AE11C3D8AF29BB4D7C7DF278(L_4, _stringLiteralD48C67736A90281297DD96BF118099E6CB6939B8, 1, /*hidden argument*/NULL);
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_5 = __this->get__material_0();
		NullCheck(L_5);
		Material_EnableKeyword_m7466758182CBBC40134C9048CDF682DF46F32FA9(L_5, _stringLiteral4E8FB22FE6EC7198A52D0616F44CB36C0F014862, /*hidden argument*/NULL);
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_6 = __this->get__material_0();
		NullCheck(L_6);
		Material_DisableKeyword_m2ACBFC5D28ED46FF2CF5532F00D702FF62C02ED3(L_6, _stringLiteral8C57A49C51573D3D980A249B814F1A8A1A36F20B, /*hidden argument*/NULL);
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_7 = __this->get__material_0();
		NullCheck(L_7);
		Material_DisableKeyword_m2ACBFC5D28ED46FF2CF5532F00D702FF62C02ED3(L_7, _stringLiteral35F77BD40388352E935E0FFA8E76270C40792BC5, /*hidden argument*/NULL);
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_8 = __this->get__material_0();
		NullCheck(L_8);
		Material_set_renderQueue_m02A0C73EC4B9C9D2C2ABFFD777EBDA45C1E1BD4D(L_8, ((int32_t)2450), /*hidden argument*/NULL);
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_9 = __this->get__material_0();
		NullCheck(L_9);
		bool L_10 = Material_HasProperty_m8611FACA6F9D9B2B5C3E92B6D93D2D514B443512(L_9, _stringLiteral9CCF554936E83A9185450EDFD0FB78A15BCF99BF, /*hidden argument*/NULL);
		if (!L_10)
		{
			goto IL_01dd;
		}
	}
	{
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_11 = __this->get__material_0();
		double L_12 = __this->get__alphaCutoff_2();
		NullCheck(L_11);
		Material_SetFloat_m4B7D3FAA00D20BCB3C487E72B7E4B2691D5ECAD2(L_11, _stringLiteral9CCF554936E83A9185450EDFD0FB78A15BCF99BF, (((float)((float)(float)L_12))), /*hidden argument*/NULL);
		goto IL_01dd;
	}

IL_00c0:
	{
		int32_t L_13 = ___value0;
		if ((!(((uint32_t)L_13) == ((uint32_t)2))))
		{
			goto IL_0155;
		}
	}
	{
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_14 = __this->get__material_0();
		NullCheck(L_14);
		Material_SetOverrideTag_m773D4D6BE26AA7E1200C76571C6DABC4A53002DB(L_14, _stringLiteral2EF6458D57BA917EA3F6B44C5ECA2360C289D9A6, _stringLiteral0491F7BDFE48EA03CFB65F5CB4500B2415A41B09, /*hidden argument*/NULL);
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_15 = __this->get__material_0();
		NullCheck(L_15);
		Material_SetInt_m1FCBDBB985E6A299AE11C3D8AF29BB4D7C7DF278(L_15, _stringLiteral821E099B69AB1185D9EA4C425921DD99EEDA20C4, 5, /*hidden argument*/NULL);
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_16 = __this->get__material_0();
		NullCheck(L_16);
		Material_SetInt_m1FCBDBB985E6A299AE11C3D8AF29BB4D7C7DF278(L_16, _stringLiteralC9E65FC5F63AB6DD9108B8C07C513736E30BFA7B, ((int32_t)10), /*hidden argument*/NULL);
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_17 = __this->get__material_0();
		NullCheck(L_17);
		Material_SetInt_m1FCBDBB985E6A299AE11C3D8AF29BB4D7C7DF278(L_17, _stringLiteralD48C67736A90281297DD96BF118099E6CB6939B8, 0, /*hidden argument*/NULL);
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_18 = __this->get__material_0();
		NullCheck(L_18);
		Material_DisableKeyword_m2ACBFC5D28ED46FF2CF5532F00D702FF62C02ED3(L_18, _stringLiteral4E8FB22FE6EC7198A52D0616F44CB36C0F014862, /*hidden argument*/NULL);
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_19 = __this->get__material_0();
		NullCheck(L_19);
		Material_EnableKeyword_m7466758182CBBC40134C9048CDF682DF46F32FA9(L_19, _stringLiteral8C57A49C51573D3D980A249B814F1A8A1A36F20B, /*hidden argument*/NULL);
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_20 = __this->get__material_0();
		NullCheck(L_20);
		Material_DisableKeyword_m2ACBFC5D28ED46FF2CF5532F00D702FF62C02ED3(L_20, _stringLiteral35F77BD40388352E935E0FFA8E76270C40792BC5, /*hidden argument*/NULL);
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_21 = __this->get__material_0();
		NullCheck(L_21);
		Material_set_renderQueue_m02A0C73EC4B9C9D2C2ABFFD777EBDA45C1E1BD4D(L_21, ((int32_t)3000), /*hidden argument*/NULL);
		goto IL_01dd;
	}

IL_0155:
	{
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_22 = __this->get__material_0();
		NullCheck(L_22);
		Material_SetOverrideTag_m773D4D6BE26AA7E1200C76571C6DABC4A53002DB(L_22, _stringLiteral2EF6458D57BA917EA3F6B44C5ECA2360C289D9A6, _stringLiteralC637AEBE3A2825FB1F2BE997A9434F3CE48A4B93, /*hidden argument*/NULL);
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_23 = __this->get__material_0();
		NullCheck(L_23);
		Material_SetInt_m1FCBDBB985E6A299AE11C3D8AF29BB4D7C7DF278(L_23, _stringLiteral821E099B69AB1185D9EA4C425921DD99EEDA20C4, 1, /*hidden argument*/NULL);
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_24 = __this->get__material_0();
		NullCheck(L_24);
		Material_SetInt_m1FCBDBB985E6A299AE11C3D8AF29BB4D7C7DF278(L_24, _stringLiteralC9E65FC5F63AB6DD9108B8C07C513736E30BFA7B, 0, /*hidden argument*/NULL);
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_25 = __this->get__material_0();
		NullCheck(L_25);
		Material_SetInt_m1FCBDBB985E6A299AE11C3D8AF29BB4D7C7DF278(L_25, _stringLiteralD48C67736A90281297DD96BF118099E6CB6939B8, 1, /*hidden argument*/NULL);
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_26 = __this->get__material_0();
		NullCheck(L_26);
		Material_DisableKeyword_m2ACBFC5D28ED46FF2CF5532F00D702FF62C02ED3(L_26, _stringLiteral4E8FB22FE6EC7198A52D0616F44CB36C0F014862, /*hidden argument*/NULL);
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_27 = __this->get__material_0();
		NullCheck(L_27);
		Material_DisableKeyword_m2ACBFC5D28ED46FF2CF5532F00D702FF62C02ED3(L_27, _stringLiteral8C57A49C51573D3D980A249B814F1A8A1A36F20B, /*hidden argument*/NULL);
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_28 = __this->get__material_0();
		NullCheck(L_28);
		Material_DisableKeyword_m2ACBFC5D28ED46FF2CF5532F00D702FF62C02ED3(L_28, _stringLiteral35F77BD40388352E935E0FFA8E76270C40792BC5, /*hidden argument*/NULL);
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_29 = __this->get__material_0();
		NullCheck(L_29);
		Material_set_renderQueue_m02A0C73EC4B9C9D2C2ABFFD777EBDA45C1E1BD4D(L_29, ((int32_t)2000), /*hidden argument*/NULL);
	}

IL_01dd:
	{
		int32_t L_30 = ___value0;
		__this->set__alphaMode_1(L_30);
		return;
	}
}
// System.Void UnityGLTF.StandardMap::set_DoubleSided(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StandardMap_set_DoubleSided_mFC4C7EBFEC1343F0A733CAC21F2FE3DE106A1F35 (StandardMap_t3FEC34B6C31267CFE948D5C63C3DFECC4A1C4806 * __this, bool ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (StandardMap_set_DoubleSided_mFC4C7EBFEC1343F0A733CAC21F2FE3DE106A1F35_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = ___value0;
		if (!L_0)
		{
			goto IL_0015;
		}
	}
	{
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_1 = __this->get__material_0();
		NullCheck(L_1);
		Material_SetInt_m1FCBDBB985E6A299AE11C3D8AF29BB4D7C7DF278(L_1, _stringLiteralE7418EE2404E671CFA6A596B7336C27E8566329B, 0, /*hidden argument*/NULL);
		return;
	}

IL_0015:
	{
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_2 = __this->get__material_0();
		NullCheck(L_2);
		Material_SetInt_m1FCBDBB985E6A299AE11C3D8AF29BB4D7C7DF278(L_2, _stringLiteralE7418EE2404E671CFA6A596B7336C27E8566329B, 2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityGLTF.StandardMap::set_VertexColorsEnabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StandardMap_set_VertexColorsEnabled_mA64B57587B8FEA93B49E801C8AFC1E0BF9E16A37 (StandardMap_t3FEC34B6C31267CFE948D5C63C3DFECC4A1C4806 * __this, bool ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (StandardMap_set_VertexColorsEnabled_mA64B57587B8FEA93B49E801C8AFC1E0BF9E16A37_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = ___value0;
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_1 = __this->get__material_0();
		NullCheck(L_1);
		Material_EnableKeyword_m7466758182CBBC40134C9048CDF682DF46F32FA9(L_1, _stringLiteralD8D1D9F659ECF5281C6CEF502BFFB325F4D8F1E4, /*hidden argument*/NULL);
		return;
	}

IL_0014:
	{
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_2 = __this->get__material_0();
		NullCheck(L_2);
		Material_DisableKeyword_m2ACBFC5D28ED46FF2CF5532F00D702FF62C02ED3(L_2, _stringLiteralD8D1D9F659ECF5281C6CEF502BFFB325F4D8F1E4, /*hidden argument*/NULL);
		return;
	}
}
// UnityGLTF.IUniformMap UnityGLTF.StandardMap::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* StandardMap_Clone_m0BC85D3C030E1C69163566B7AEB7586BDC685235 (StandardMap_t3FEC34B6C31267CFE948D5C63C3DFECC4A1C4806 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (StandardMap_Clone_m0BC85D3C030E1C69163566B7AEB7586BDC685235_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_0 = __this->get__material_0();
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_1 = (Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 *)il2cpp_codegen_object_new(Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598_il2cpp_TypeInfo_var);
		Material__ctor_m0171C6D4D3FD04D58C70808F255DBA67D0ED2BDE(L_1, L_0, /*hidden argument*/NULL);
		StandardMap_t3FEC34B6C31267CFE948D5C63C3DFECC4A1C4806 * L_2 = (StandardMap_t3FEC34B6C31267CFE948D5C63C3DFECC4A1C4806 *)il2cpp_codegen_object_new(StandardMap_t3FEC34B6C31267CFE948D5C63C3DFECC4A1C4806_il2cpp_TypeInfo_var);
		StandardMap__ctor_mE7EFB02723CA25A21A4DB13F51863763B6D93167(L_2, L_1, ((int32_t)1000), /*hidden argument*/NULL);
		StandardMap_t3FEC34B6C31267CFE948D5C63C3DFECC4A1C4806 * L_3 = L_2;
		int32_t L_4 = __this->get__alphaMode_1();
		NullCheck(L_3);
		L_3->set__alphaMode_1(L_4);
		StandardMap_t3FEC34B6C31267CFE948D5C63C3DFECC4A1C4806 * L_5 = L_3;
		double L_6 = __this->get__alphaCutoff_2();
		NullCheck(L_5);
		L_5->set__alphaCutoff_2(L_6);
		return L_5;
	}
}
// System.Void UnityGLTF.StandardMap::Copy(UnityGLTF.IUniformMap)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StandardMap_Copy_mB46954EB8DA70A2310FFDCAF0EE90DB82602457D (StandardMap_t3FEC34B6C31267CFE948D5C63C3DFECC4A1C4806 * __this, RuntimeObject* ___o0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (StandardMap_Copy_mB46954EB8DA70A2310FFDCAF0EE90DB82602457D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___o0;
		StandardMap_t3FEC34B6C31267CFE948D5C63C3DFECC4A1C4806 * L_1 = ((StandardMap_t3FEC34B6C31267CFE948D5C63C3DFECC4A1C4806 *)CastclassClass((RuntimeObject*)L_0, StandardMap_t3FEC34B6C31267CFE948D5C63C3DFECC4A1C4806_il2cpp_TypeInfo_var));
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_2 = __this->get__material_0();
		NullCheck(L_1);
		L_1->set__material_0(L_2);
		StandardMap_t3FEC34B6C31267CFE948D5C63C3DFECC4A1C4806 * L_3 = L_1;
		double L_4 = __this->get__alphaCutoff_2();
		NullCheck(L_3);
		L_3->set__alphaCutoff_2(L_4);
		int32_t L_5 = __this->get__alphaMode_1();
		NullCheck(L_3);
		L_3->set__alphaMode_1(L_5);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityGLTF.UnityMeshData::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityMeshData__ctor_m9187F75CDE91878F2C06F72E90C357D811E5D8CC (UnityMeshData_t8C2ACB9741D58C870FC7A0FD26F0EDFA9E141F27 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityGLTF.ValuesConvertion::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValuesConvertion__ctor_mDEA90FD699A048933DFCFDF6F33DAF9EAC29AF9D (ValuesConvertion_t12BE76CED94854B72E7008BA86CF34852FB8F4DC * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Single[] UnityGLTF.ValuesConvertion::Invoke(GLTF.Schema.NumericArray,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* ValuesConvertion_Invoke_m18A20EEC603B3ABE0F62E2B426A524D7399BE95A (ValuesConvertion_t12BE76CED94854B72E7008BA86CF34852FB8F4DC * __this, NumericArray_t4941F537DC57A0602218632AABDF228987E030E9  ___data0, int32_t ___frame1, const RuntimeMethod* method)
{
	SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* result = NULL;
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 2)
			{
				// open
				typedef SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* (*FunctionPointerType) (NumericArray_t4941F537DC57A0602218632AABDF228987E030E9 , int32_t, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(___data0, ___frame1, targetMethod);
			}
			else
			{
				// closed
				typedef SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* (*FunctionPointerType) (void*, NumericArray_t4941F537DC57A0602218632AABDF228987E030E9 , int32_t, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___data0, ___frame1, targetMethod);
			}
		}
		else
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (targetThis == NULL)
				{
					typedef SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* (*FunctionPointerType) (NumericArray_t4941F537DC57A0602218632AABDF228987E030E9 , int32_t, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)(___data0, ___frame1, targetMethod);
				}
				else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = GenericInterfaceFuncInvoker2< SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5*, NumericArray_t4941F537DC57A0602218632AABDF228987E030E9 , int32_t >::Invoke(targetMethod, targetThis, ___data0, ___frame1);
					else
						result = GenericVirtFuncInvoker2< SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5*, NumericArray_t4941F537DC57A0602218632AABDF228987E030E9 , int32_t >::Invoke(targetMethod, targetThis, ___data0, ___frame1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker2< SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5*, NumericArray_t4941F537DC57A0602218632AABDF228987E030E9 , int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___data0, ___frame1);
					else
						result = VirtFuncInvoker2< SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5*, NumericArray_t4941F537DC57A0602218632AABDF228987E030E9 , int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___data0, ___frame1);
				}
			}
			else
			{
				typedef SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* (*FunctionPointerType) (void*, NumericArray_t4941F537DC57A0602218632AABDF228987E030E9 , int32_t, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___data0, ___frame1, targetMethod);
			}
		}
	}
	return result;
}
// System.IAsyncResult UnityGLTF.ValuesConvertion::BeginInvoke(GLTF.Schema.NumericArray,System.Int32,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ValuesConvertion_BeginInvoke_mB479D45F75959DC475E5792F9335F24EABF58792 (ValuesConvertion_t12BE76CED94854B72E7008BA86CF34852FB8F4DC * __this, NumericArray_t4941F537DC57A0602218632AABDF228987E030E9  ___data0, int32_t ___frame1, AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ValuesConvertion_BeginInvoke_mB479D45F75959DC475E5792F9335F24EABF58792_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(NumericArray_t4941F537DC57A0602218632AABDF228987E030E9_il2cpp_TypeInfo_var, &___data0);
	__d_args[1] = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &___frame1);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);
}
// System.Single[] UnityGLTF.ValuesConvertion::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* ValuesConvertion_EndInvoke_m74260B9B631DCE52A18BC802FADEFF25F90997C3 (ValuesConvertion_t12BE76CED94854B72E7008BA86CF34852FB8F4DC * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return (SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5*)__result;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR MaterialCacheDataU5BU5D_t9A21B420B621CCFCE6242A807F055E5E17C12B27* AssetCache_get_MaterialCache_mA42C6FC4CD177BE95466FAF22EA7C478DF9003CA_inline (AssetCache_tE060C78C9F54F8BF6F50E904460FA53958B59D91 * __this, const RuntimeMethod* method)
{
	{
		MaterialCacheDataU5BU5D_t9A21B420B621CCFCE6242A807F055E5E17C12B27* L_0 = __this->get_U3CMaterialCacheU3Ek__BackingField_3();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * MaterialCacheData_get_UnityMaterialWithVertexColor_mE5EC415DA4ACACC49E414AF4A454CE3C1F71C1C4_inline (MaterialCacheData_t69ADD85645108393A5E19F1C642F81F977EA57CE * __this, const RuntimeMethod* method)
{
	{
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_0 = __this->get_U3CUnityMaterialWithVertexColorU3Ek__BackingField_1();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR MeshCacheDataU5BU5D_t172934B760B5F101344848AB49BADBC9CAC4E59C* AssetCache_get_MeshCache_mD1A34D709653BF94546C48EA7E776725F21E94CE_inline (AssetCache_tE060C78C9F54F8BF6F50E904460FA53958B59D91 * __this, const RuntimeMethod* method)
{
	{
		MeshCacheDataU5BU5D_t172934B760B5F101344848AB49BADBC9CAC4E59C* L_0 = __this->get_U3CMeshCacheU3Ek__BackingField_5();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * MeshCacheData_get_LoadedMesh_mF03D281EA79A6092D0208114EF7FFAC344C8F4B2_inline (MeshCacheData_tDC17655604D5D9B4FF0FFB71FEAB50212603F664 * __this, const RuntimeMethod* method)
{
	{
		Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * L_0 = __this->get_U3CLoadedMeshU3Ek__BackingField_1();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * GLTFSceneImporter_get_LastLoadedScene_m2D359392DB0836ACC37C5CE97F57678EA5D9122B_inline (GLTFSceneImporter_t29A5109798926C47E5B089376F3E467E78EB710E * __this, const RuntimeMethod* method)
{
	{
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_0 = __this->get__lastLoadedScene_14();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void AttributeAccessor_set_AccessorId_m0A847BD84D1BEC4B2F56D7C5C8E9FD27E2F10DEB_inline (AttributeAccessor_t54DE63C0FA54991AB605635BD32870BA45E9FF8C * __this, AccessorId_t6C51102D50B95D309D47FD946FE62ED76C16B83F * ___value0, const RuntimeMethod* method)
{
	{
		AccessorId_t6C51102D50B95D309D47FD946FE62ED76C16B83F * L_0 = ___value0;
		__this->set_U3CAccessorIdU3Ek__BackingField_0(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR BufferCacheDataU5BU5D_t090C5C4874ADA45FFD0C6E6B36010DD196C0975E* AssetCache_get_BufferCache_mF79FDECEAE54294E62CCB5C0CF780FE2E6472445_inline (AssetCache_tE060C78C9F54F8BF6F50E904460FA53958B59D91 * __this, const RuntimeMethod* method)
{
	{
		BufferCacheDataU5BU5D_t090C5C4874ADA45FFD0C6E6B36010DD196C0975E* L_0 = __this->get_U3CBufferCacheU3Ek__BackingField_4();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * BufferCacheData_get_Stream_m846345E05A526E5D993667CB4B1D85A39D764FE1_inline (BufferCacheData_t94725215DAEBBBFF691A97822F8744A8038F6743 * __this, const RuntimeMethod* method)
{
	{
		Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * L_0 = __this->get_U3CStreamU3Ek__BackingField_1();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void AttributeAccessor_set_Stream_m2433EEE74EC014D1E5FAADA0451FE97C2242B70B_inline (AttributeAccessor_t54DE63C0FA54991AB605635BD32870BA45E9FF8C * __this, Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * ___value0, const RuntimeMethod* method)
{
	{
		Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * L_0 = ___value0;
		__this->set_U3CStreamU3Ek__BackingField_2(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR uint32_t BufferCacheData_get_ChunkOffset_m67042555CF1C5521B6417767B6E3873E289B092B_inline (BufferCacheData_t94725215DAEBBBFF691A97822F8744A8038F6743 * __this, const RuntimeMethod* method)
{
	{
		uint32_t L_0 = __this->get_U3CChunkOffsetU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void AttributeAccessor_set_Offset_mE9C82B7E02249CFF716E8BC72044F8A99BFADD93_inline (AttributeAccessor_t54DE63C0FA54991AB605635BD32870BA45E9FF8C * __this, uint32_t ___value0, const RuntimeMethod* method)
{
	{
		uint32_t L_0 = ___value0;
		__this->set_U3COffsetU3Ek__BackingField_3(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR NumericArray_t4941F537DC57A0602218632AABDF228987E030E9  AttributeAccessor_get_AccessorContent_m440E2D27F4F0017DCC5C80B33F8A37FCBF2244B3_inline (AttributeAccessor_t54DE63C0FA54991AB605635BD32870BA45E9FF8C * __this, const RuntimeMethod* method)
{
	{
		NumericArray_t4941F537DC57A0602218632AABDF228987E030E9  L_0 = __this->get_U3CAccessorContentU3Ek__BackingField_1();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * GLTFSceneImporter_get_SceneParent_m024C6944150465D5154A60F25FC757E3CD9A15AC_inline (GLTFSceneImporter_t29A5109798926C47E5B089376F3E467E78EB710E * __this, const RuntimeMethod* method)
{
	{
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_0 = __this->get_U3CSceneParentU3Ek__BackingField_3();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * GLTFSceneImporter_get_CreatedObject_mA374F1F0FDCC8968B6624F667818753D64E71704_inline (GLTFSceneImporter_t29A5109798926C47E5B089376F3E467E78EB710E * __this, const RuntimeMethod* method)
{
	{
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_0 = __this->get_U3CCreatedObjectU3Ek__BackingField_4();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR RefCountedCacheData_t3E7A4E802B00500764E6515507894E680D89D572 * InstantiatedGLTFObject_get_CachedData_mD9A2EB60267B0ECF6802D9960266B773619E1F22_inline (InstantiatedGLTFObject_t03E5C1C7AE61E8CF56BC66C274C240C65511816B * __this, const RuntimeMethod* method)
{
	{
		RefCountedCacheData_t3E7A4E802B00500764E6515507894E680D89D572 * L_0 = __this->get_cachedData_4();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t X509ChainStatus_get_Status_mEEC25ED0247E17DDC922F799955225690F176EF0_inline (X509ChainStatus_t9E05BD8700EA6158AC82F71CBE53AD20F6B99B0C * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_status_0();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void X509ChainPolicy_set_UrlRetrievalTimeout_m3BB0D762903D9284505DBE8302FE7B82A9AB1544_inline (X509ChainPolicy_tCA1D9E9842A16ACD71D35E9C36659E3E861D74DD * __this, TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  ___value0, const RuntimeMethod* method)
{
	{
		TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  L_0 = ___value0;
		__this->set_timeout_6(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR HttpContent_t678722F60CA151DD19AFCA917657BE24F111A41D * HttpResponseMessage_get_Content_m325C3E47B0D7E1DD70CA36FA04B894A152AD4420_inline (HttpResponseMessage_t619DB9FDC8E63CDF2D0A314B61A4C6609A43F904 * __this, const RuntimeMethod* method)
{
	{
		HttpContent_t678722F60CA151DD19AFCA917657BE24F111A41D * L_0 = __this->get_U3CContentU3Ek__BackingField_5();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m507C9149FF7F83AAC72C29091E745D557DA47D22_gshared_inline (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get__size_2();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR RuntimeObject * List_1_get_Item_mFDB8AD680C600072736579BBF5F38F7416396588_gshared_inline (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, int32_t ___index0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___index0;
		int32_t L_1 = (int32_t)__this->get__size_2();
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mBA2AF20A35144E0C43CD721A22EAC9FCA15D6550(/*hidden argument*/NULL);
	}

IL_000e:
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_2 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)__this->get__items_1();
		int32_t L_3 = ___index0;
		RuntimeObject * L_4 = IL2CPP_ARRAY_UNSAFE_LOAD((ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)L_2, (int32_t)L_3);
		return L_4;
	}
}
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_mF38F300C188F47AC0F03367107EC46D3BAF7DA3E_gshared_inline (Nullable_1_t802480A692F4F0D29F2185320296572054FB8C0B * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = (bool)__this->get_has_value_1();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR int64_t Nullable_1_GetValueOrDefault_m63142B2DD02998F10B0CC4706DFE488F860763C2_gshared_inline (Nullable_1_t802480A692F4F0D29F2185320296572054FB8C0B * __this, const RuntimeMethod* method)
{
	{
		int64_t L_0 = (int64_t)__this->get_value_0();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_mB664E2C41CADA8413EF8842E6601B8C696A7CE15_gshared_inline (Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = (bool)__this->get_has_value_1();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR int32_t Nullable_1_GetValueOrDefault_mE89BB8F302DF31EE202251F4746859285860B6B6_gshared_inline (Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get_value_0();
		return L_0;
	}
}
