﻿#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename T1, typename T2, typename T3>
struct VirtActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
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
struct VirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
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
struct GenericVirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct GenericVirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
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
struct GenericInterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct GenericInterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};

// <>f__AnonymousType0`4<System.Int32,System.Object,System.Object,System.Object>
struct U3CU3Ef__AnonymousType0_4_t6AD706F84E39BA82CD246ACA839166C93733D2BF;
// <>f__AnonymousType0`4<System.Int32,System.String,System.String,Newtonsoft.Json.Linq.JObject>
struct U3CU3Ef__AnonymousType0_4_tDE5000E5AA6D2F551A599D76967B42844AC60EE5;
// <>f__AnonymousType0`4<System.Int32,System.String,System.String,System.Object>
struct U3CU3Ef__AnonymousType0_4_tBCC04185AED1C1C2CFAD99475825F0A10CB5F9F6;
// System.Action`1<System.Object>
struct Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC;
// System.Comparison`1<UnityEngine.XR.ARFoundation.ARRaycastHit>
struct Comparison_1_t2171DE829C4A23A5663A53F71D283C076F5EFCBE;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>
struct Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Object>
struct Dictionary_2_tE1E5B6327FFA2C7AE34A69E0011815C914771C2F;
// System.Collections.Generic.Dictionary`2<System.Int32,UnityMessage>
struct Dictionary_2_t0BC3AC5C2146DD06B35F47A5F473B1D0090A809E;
// System.Collections.Generic.Dictionary`2<UnityEngine.XR.ARSubsystems.TrackableId,UnityEngine.XR.ARFoundation.ARRaycast>
struct Dictionary_2_t1D1E85AC0F638F3FF58F627822C66DECBAE7C06C;
// System.Func`4<UnityEngine.Ray,UnityEngine.XR.ARSubsystems.TrackableType,Unity.Collections.Allocator,Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRRaycastHit>>
struct Func_4_tA3D41D485BD4C73DB44AAD0202CA90BA777C1197;
// System.Func`4<UnityEngine.Vector2,UnityEngine.XR.ARSubsystems.TrackableType,Unity.Collections.Allocator,Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRRaycastHit>>
struct Func_4_t0D7774CBEE7827744440205CF327276346298BD3;
// System.Collections.Generic.IEnumerable`1<Newtonsoft.Json.Linq.JToken>
struct IEnumerable_1_t9DF74D741578F090EC2B64A9F94C72146C743F50;
// System.Collections.Generic.IEqualityComparer`1<System.Int32>
struct IEqualityComparer_1_t62010156673DE1460AB1D1CEBE5DCD48665E1A38;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,System.Int32>
struct KeyCollection_tDB6919EBDF36E83E708A483A6C4CF8065F62D1E0;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,UnityMessage>
struct KeyCollection_tF6E2BD1A51688398F2D4F85FB9190FBB4A9DAFA6;
// System.Lazy`1<UnityMessageManager>
struct Lazy_1_t1F6F28AE3A12C39616C210625F3C610F09E23E0D;
// System.Collections.Generic.List`1<Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRRaycastHit>>
struct List_1_tAF78E49171E2C987480BE2F36E1E73CEFDA37469;
// System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARRaycast>
struct List_1_t75314E6BE9CE5BE892C6B190246D0554A1F77AA7;
// System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARRaycastHit>
struct List_1_tDA68EC1B5CE9809C8709C1E58A7D0F4ACBB1252D;
// System.Collections.Generic.List`1<Dimension>
struct List_1_t8541C8BADA1A4B90DE74D36D29037CF0E814B9AA;
// System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.IRaycaster>
struct List_1_t179D10142696C7C113D229AC6E1884F4B19CFE27;
// System.Collections.Generic.List`1<System.Int32>
struct List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5;
// System.Collections.Generic.List`1<Portal>
struct List_1_tF98B6D846565344249C79E895B9E3BF385EA519E;
// System.Collections.Generic.List`1<PortalTransitionObject>
struct List_1_t30FCDC226FA7B79EC342BC4224C0AC67A9A36807;
// System.Collections.Generic.List`1<System.String>
struct List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3;
// System.Collections.Generic.List`1<UnityEngine.Vector3>
struct List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181;
// System.Collections.Generic.List`1<UnityEngine.XR.ARSubsystems.XRRaycastSubsystem>
struct List_1_t72B11B1FEAB79314490A07F58F757646DADED2C1;
// System.Collections.Generic.List`1<UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor>
struct List_1_tAE84735071B78277703DB9996DE2E5C4456317C5;
// SingletonMonoBehaviour`1<System.Object>
struct SingletonMonoBehaviour_1_tE14741F2799AE3F949345E77B1A572DC11A30DDE;
// SingletonMonoBehaviour`1<UnityMessageManager>
struct SingletonMonoBehaviour_1_tCE345733DAFD7C69997F22704982E2372C4BFCDD;
// UnityEngine.Events.UnityAction`2<UnityEngine.SceneManagement.Scene,System.Int32Enum>
struct UnityAction_2_t808E43EBC9AA89CEA5830BD187EC213182A02B50;
// UnityEngine.Events.UnityAction`2<UnityEngine.SceneManagement.Scene,UnityEngine.SceneManagement.LoadSceneMode>
struct UnityAction_2_tDEF0DD47461C853F98CD2FF3CEC4F5EE13A19906;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Int32>
struct ValueCollection_t8738745D8513A557A82E6E097DF4D4E70D5253C2;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,UnityMessage>
struct ValueCollection_tA403EAC50EF5A2B6760B999D4B5F8E0C2668B997;
// System.Collections.Generic.Dictionary`2/Entry<System.Int32,System.Int32>[]
struct EntryU5BU5D_tB55287EA11F7C665F930EF3A359F186CD3AE5EC1;
// System.Collections.Generic.Dictionary`2/Entry<System.Int32,UnityMessage>[]
struct EntryU5BU5D_tC02CA0AEDB81B33CE8B173EFD9E9B400F7656DC3;
// UnityEngine.XR.ARFoundation.ARRaycastHit[]
struct ARRaycastHitU5BU5D_t8F4AFCC32363485FEBCE484011A5C258676441CA;
// UnityEngine.Camera[]
struct CameraU5BU5D_tAF84B9EC9AF40F1B6294BCEBA82A1AD123A9D001;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
// Dimension[]
struct DimensionU5BU5D_t3DBD8E36003BB507A862CB89148705FD46796E4F;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642;
// System.Int32[]
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
// System.IntPtr[]
struct IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6;
// Newtonsoft.Json.Linq.JTokenType[]
struct JTokenTypeU5BU5D_t03DB097DBD7548086F9F27181BE1DB7AA4E653BE;
// UnityEngine.MeshRenderer[]
struct MeshRendererU5BU5D_t535468079DEF88AD38546DC5D04E9102C401D228;
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
// Portal[]
struct PortalU5BU5D_t349BD57D1E5B8EBBB8AAB466E738C7EB6D2DB40A;
// PortalTransitionObject[]
struct PortalTransitionObjectU5BU5D_tA3D594946282A5FE045336C6B819F2CEFA26C97A;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971;
// System.String[]
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;
// UnityEngine.Transform[]
struct TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D;
// System.Type[]
struct TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4;
// ARCusor
struct ARCusor_t203938EAE3094278392B0B5F4A9DBA22B5216F2B;
// ARFoundationPlacement
struct ARFoundationPlacement_t42AB2E6C3A2959C49F485A88D07D70DC25C6D69D;
// ARKitCameraRender
struct ARKitCameraRender_t22DD82E196622777058CEA91BF2C1BAA2477CF98;
// ARKitPlacement
struct ARKitPlacement_t39ADD720222BF9CE429246849A9E7D673C3A1D0A;
// UnityEngine.XR.ARFoundation.ARRaycastManager
struct ARRaycastManager_t76CDCF27810673048562A85CAD0E3FEEB3D7328F;
// UnityEngine.XR.ARFoundation.ARSessionOrigin
struct ARSessionOrigin_tA15648434106370D592D12C00B93054EC6CE6AE1;
// System.ComponentModel.AddingNewEventHandler
struct AddingNewEventHandler_t2407F1FD420B3D4997C0EFC15336D6BF71738EEB;
// UnityEngine.AndroidJavaClass
struct AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4;
// UnityEngine.AndroidJavaObject
struct AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E;
// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA;
// UnityEngine.AudioListener
struct AudioListener_t03B51B434A263F9AFD07AC8AA5CB4FE6402252A3;
// UnityEngine.Behaviour
struct Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9;
// System.Reflection.Binder
struct Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30;
// UnityEngine.Camera
struct Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C;
// UnityEngine.CharacterController
struct CharacterController_tCCF68621C784CCB3391E0C66FE134F6F93DD6C2E;
// UnityEngine.Collider
struct Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02;
// UnityEngine.Rendering.CommandBuffer
struct CommandBuffer_t25CD231BD3E822660339DB7D0E8F8ED6B7DBEA29;
// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684;
// ControllerGrabObject
struct ControllerGrabObject_tD8EC56C9C71EAC95FD692C2D16CA944AF071DD4E;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288;
// Dimension
struct Dimension_t28D074E7D31C414382BEB891CF77CF6345E04C34;
// UnityEngine.FixedJoint
struct FixedJoint_tB98C66DD49AFBAB1114A59E8132EB2498C540B09;
// UnityEngine.FlareLayer
struct FlareLayer_t0E96E3DA6EDBA0626F2322F17A594D4E5E34FBB6;
// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319;
// GearCameraRenderInfo
struct GearCameraRenderInfo_tD3E67E22C8199B14D79B3CE6F896CECF7E8C39CC;
// UnityEngine.GlobalJavaObjectRef
struct GlobalJavaObjectRef_t04A7D04EB0317C286F089E4DB4444EC4F2D78289;
// System.IAsyncResult
struct IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// Newtonsoft.Json.Linq.JContainer
struct JContainer_t0393B6D5D1D1452D16BE67178D48155F148BCFC4;
// Newtonsoft.Json.Linq.JObject
struct JObject_tD2FCDDA48CACDBCB702BAF49B7C649084F6FDA34;
// Newtonsoft.Json.Linq.JPropertyKeyedCollection
struct JPropertyKeyedCollection_t219F62CD15C1D6C625D656744FB107DDC5710E39;
// Newtonsoft.Json.Linq.JToken
struct JToken_t78F4E878E41125BB40B529918D104EDDC99E00C9;
// Newtonsoft.Json.Linq.JTokenEqualityComparer
struct JTokenEqualityComparer_t0E5DB261B004137A3EE94DB97E554351FC500AA0;
// UnityEngine.Joint
struct Joint_t085126F36196FC982700F4EA8466CF10C90EC15E;
// LayerManager
struct LayerManager_t3527BEB62E0C7C2C45055FE662E50E75642F7942;
// UnityEngine.Light
struct Light_tA2F349FE839781469A0344CF6039B51512394275;
// System.ComponentModel.ListChangedEventHandler
struct ListChangedEventHandler_t02874ED3C8355742E3E62AED85A53F3140506B8C;
// MainCameraController
struct MainCameraController_t90D850F2A0257D38B41668E324DEF1DDB2F89BFC;
// MainCameraLayerManager
struct MainCameraLayerManager_tB21B56BD4156E63941A865F34D94B01F22043250;
// UnityEngine.Material
struct Material_t8927C00353A72755313F046D0CE85178AE8218EE;
// System.Reflection.MemberFilter
struct MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81;
// UnityEngine.Mesh
struct Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6;
// MeshDeformer
struct MeshDeformer_t552F11EC8166EE3DED6958E9B4F0050853FB31F8;
// MeshDeformerInput
struct MeshDeformerInput_t539337F65D4F0BAA0C89ED1BF77F0B33C9E3EE6E;
// UnityEngine.MeshFilter
struct MeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A;
// UnityEngine.MeshRenderer
struct MeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B;
// MessageHandler
struct MessageHandler_t61D3A022CD7E59124898915FB6A1EB56ACBF19B7;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A;
// MovementLimiter
struct MovementLimiter_t363580643587ECA5D4C7B835B4EE95E3DE75C698;
// NativeAPI
struct NativeAPI_tCF1B87942D24DC16E49B82348757D460312951F7;
// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A;
// PlaneMeshDeformer
struct PlaneMeshDeformer_t53323E8C3770AE9A26910AFC953BEB86C9AD7C9A;
// Portal
struct Portal_t355BC086AE7B4F5E476064C8805CA0830E0CA48E;
// PortalTransitionObject
struct PortalTransitionObject_t6C6EC1877A4E2BAB5F3366A1E0B7F8C02BC133CE;
// System.ComponentModel.PropertyChangedEventHandler
struct PropertyChangedEventHandler_t094CCD63C952DCD4E1ED794434160679C28A8E99;
// System.ComponentModel.PropertyChangingEventHandler
struct PropertyChangingEventHandler_t31E1BA622DA161E68BB38F230BB5FE9551FB127B;
// System.Text.RegularExpressions.Regex
struct Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F;
// UnityEngine.RenderTexture
struct RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849;
// UnityEngine.Renderer
struct Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C;
// UnityEngine.Rigidbody
struct Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F;
// UnityEngine.Skybox
struct Skybox_t8B0EA7C092363DBCCF0B51434F04E7EE661E28E0;
// System.String
struct String_t;
// SubdividedCube
struct SubdividedCube_tFFFE4E2DAFE319BFFCCC128B8B956589136D74F5;
// UnityEngine.Texture
struct Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE;
// ThrowObject
struct ThrowObject_t3A1DF7FE7CFED5FDA16EFB502C2127AB115D6841;
// UnityEngine.Transform
struct Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1;
// System.Type
struct Type_t;
// UnityMessage
struct UnityMessage_tE42919C6EDB7FF8FF734D6E4D7246C2C457BA6AD;
// UnityMessageManager
struct UnityMessageManager_t4457746B746B34A7F9397BCF555A92EC97EE7831;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// UnityEngine.XR.ARSubsystems.XRRaycastSubsystem
struct XRRaycastSubsystem_t62FDAC9AA1BD44C4557AEE3FEF3D2FA24C71B6B8;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D;
// UnityMessageManager/MessageDelegate
struct MessageDelegate_tDCF734AA37209CBABC24AB82639DC96812A92CD9;
// UnityMessageManager/MessageHandlerDelegate
struct MessageHandlerDelegate_tC9B2C089EAB4A237AFE9F84E05D5D7B196643F28;

IL2CPP_EXTERN_C RuntimeClass* AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CommandBuffer_t25CD231BD3E822660339DB7D0E8F8ED6B7DBEA29_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t0BC3AC5C2146DD06B35F47A5F473B1D0090A809E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* LayerManager_t3527BEB62E0C7C2C45055FE662E50E75642F7942_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t30FCDC226FA7B79EC342BC4224C0AC67A9A36807_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t8541C8BADA1A4B90DE74D36D29037CF0E814B9AA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tDA68EC1B5CE9809C8709C1E58A7D0F4ACBB1252D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tF98B6D846565344249C79E895B9E3BF385EA519E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MessageDelegate_tDCF734AA37209CBABC24AB82639DC96812A92CD9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MessageHandlerDelegate_tC9B2C089EAB4A237AFE9F84E05D5D7B196643F28_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MessageHandler_t61D3A022CD7E59124898915FB6A1EB56ACBF19B7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SingletonMonoBehaviour_1_tCE345733DAFD7C69997F22704982E2372C4BFCDD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ef__AnonymousType0_4_tBCC04185AED1C1C2CFAD99475825F0A10CB5F9F6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ef__AnonymousType0_4_tDE5000E5AA6D2F551A599D76967B42844AC60EE5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityAction_2_tDEF0DD47461C853F98CD2FF3CEC4F5EE13A19906_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityMessageManager_t4457746B746B34A7F9397BCF555A92EC97EE7831_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral15A8A27C7D54D58FA24ADFF0E3E52BF4748B1E9D;
IL2CPP_EXTERN_C String_t* _stringLiteral16DD21BE77B115D392226EB71A2D3A9FDC29E3F0;
IL2CPP_EXTERN_C String_t* _stringLiteral24C049E512CD1B48036BD162FF63700A57CA3469;
IL2CPP_EXTERN_C String_t* _stringLiteral2A635A3A007DFDDEB6455B1D2A6781BF8F7A8169;
IL2CPP_EXTERN_C String_t* _stringLiteral2AD47C03F7A83F82E3B2ADFE8A60F1727FD3BEFD;
IL2CPP_EXTERN_C String_t* _stringLiteral3804D66ED4388200EADC17D3476C4A430A58A5BF;
IL2CPP_EXTERN_C String_t* _stringLiteral40C776DB92DC51DDEF843FFC1AE1917B3769978A;
IL2CPP_EXTERN_C String_t* _stringLiteral41C20D570ED16CE125005A35B7DCABA2EA5F5539;
IL2CPP_EXTERN_C String_t* _stringLiteral50C349861105941F8CC6A38A2B8CC315ED6CD653;
IL2CPP_EXTERN_C String_t* _stringLiteral52504B59BD1504CB2F04425E6599DDEF27A29271;
IL2CPP_EXTERN_C String_t* _stringLiteral5F629B25BE4F48980C1EDD2471AE2A239A980D35;
IL2CPP_EXTERN_C String_t* _stringLiteral62276E9B0963A652AE7404059058F8C8E455B262;
IL2CPP_EXTERN_C String_t* _stringLiteral7872402A59E9175DECE8237B6F756EA72FC3091E;
IL2CPP_EXTERN_C String_t* _stringLiteral7EA3FB78E01344733897241491196E66ECC12B9B;
IL2CPP_EXTERN_C String_t* _stringLiteral88BEE283254D7094E258B3A88730F4CC4F1E4AC7;
IL2CPP_EXTERN_C String_t* _stringLiteral996E5360F80E16B2189CC1E536C91CE68083F694;
IL2CPP_EXTERN_C String_t* _stringLiteral9D5313975DA8153FF9A5262016CB413A4E84846E;
IL2CPP_EXTERN_C String_t* _stringLiteralA2F4AC9DD8E1FAC5257E5F7BA5EE1C7C7E5F7AB1;
IL2CPP_EXTERN_C String_t* _stringLiteralA44A39671D4B7FA8FBE50D795EAB52248D5C5469;
IL2CPP_EXTERN_C String_t* _stringLiteralAA236E134566FACF682D16CDBC3E2C735E0EF19D;
IL2CPP_EXTERN_C String_t* _stringLiteralB59F0EFCC2B82196C428CFD6D80A08F8B47573FC;
IL2CPP_EXTERN_C String_t* _stringLiteralB77494B17C8DA599A6494EFFB7F17D9519775753;
IL2CPP_EXTERN_C String_t* _stringLiteralB8833A6A8DBC0A8BD7545AE8C434405E77ABF1C2;
IL2CPP_EXTERN_C String_t* _stringLiteralBBCF69B327CDBBC3FC0F8CDFFD8B395CC7699435;
IL2CPP_EXTERN_C String_t* _stringLiteralBDBB8D317096A0BA6BA9463FC2533707873DF8FD;
IL2CPP_EXTERN_C String_t* _stringLiteralBF3DA0187B0BD18F0D8EEDA007AB54339F51D95D;
IL2CPP_EXTERN_C String_t* _stringLiteralCE18B047107AA23D1AA9B2ED32D316148E02655F;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C String_t* _stringLiteralEA64C610DFA863C445196F98AE1C59C7E6F1B8EC;
IL2CPP_EXTERN_C String_t* _stringLiteralFD518666B4F52417752311AE996CEA3A91ECF532;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1_Invoke_m587509C88BB83721D7918D89DF07606BB752D744_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidJavaObject_GetStatic_TisAndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_mC84C97A7EC20ED712D21107C9FA32E0785021153_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisAudioListener_t03B51B434A263F9AFD07AC8AA5CB4FE6402252A3_m0DA4C699234A3DCDAC948DDC6763AE79C2FB5E83_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisCamera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_mE17146EF5B0D8E9F9D2D2D94567BF211AD00D320_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisCharacterController_tCCF68621C784CCB3391E0C66FE134F6F93DD6C2E_m3DB1DD5819F96D7C7F6F19C12138AC48D21DBBF2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisFlareLayer_t0E96E3DA6EDBA0626F2322F17A594D4E5E34FBB6_m340092F5A48BE24898132A824851BD0E8C1468E3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisMainCameraLayerManager_tB21B56BD4156E63941A865F34D94B01F22043250_mDBB64AB174E6AF156ED9AF444EC239D53E0B0813_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisMeshDeformer_t552F11EC8166EE3DED6958E9B4F0050853FB31F8_mB0560E6ABD7E285C74F1A9D629D2B400D9A60FFF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisMeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A_m4E31C5D3D0490AEE405B54BE9F61802EA425B9DC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisRigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A_m9DC24AA806B0B65E917751F7A3AFDB58861157CE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisSkybox_t8B0EA7C092363DBCCF0B51434F04E7EE661E28E0_m11DD63313E45B5E0C62FFCF04F0962CCF57D9FA2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_m2097BED9B4E3EDCC2144E58088BF028DB0B48D99_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_m2721B332C7315B8590D01121005560C8A4824279_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Clear_mEF66FB646BF483BD2943F78417C299E1C50730D7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Remove_m273238F996359EBF987A2836DA52FBF359AEFB67_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_TryGetValue_m0382483D7D84AC88696EFBBD3566B8B7B4C927D5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_mCDC1ED9FB26C45BCA609A92B7AA9757038C7C147_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_mE4D6F6FA5A737865159110CFFF4034001E7F75C1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Item_mFFEEBA09EA430B994459C2D86ADEE218592742A1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m2CA1D495CF53152D382FE86C5F0A73F644F3E6B7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_mC476650D5343DD52E76FFBFD14DC33545E715451_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_mB6178B876BA8A284965E31BEE9A1D81C6B22E419_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_mFC3DBA62507504A47BA3A291D2D082A8B90F66C3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m463A9A414E2DBE1AB63DB0E3DD5116ED743D7AFD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m65D32F0E72C3886B66F19493D4B5BA26910FA843_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Extensions_Value_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_mE737D3D701C8EEDB2752A3E37EB22CC2C54A17C0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Extensions_Value_TisString_t_mBACC332922C7F06DFCD9B54B358B31A5DD079729_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisFixedJoint_tB98C66DD49AFBAB1114A59E8132EB2498C540B09_m85194BB051287849C5780CB836BBE0C69DE4151A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisMainCameraLayerManager_tB21B56BD4156E63941A865F34D94B01F22043250_m58A2142CCC61F8A08FA25B3E5316E6B4929F5972_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisSkybox_t8B0EA7C092363DBCCF0B51434F04E7EE661E28E0_mED0AE40B29FD1E0A3FC3E2E24516D21F34399F4E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponentInChildren_TisCamera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_m82C012E5C19C54F736F3C32378E321895DF91F42_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisCamera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_mE3C86755BA935C0F4BDABF7D1E338FA5247E4F49_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisLight_tA2F349FE839781469A0344CF6039B51512394275_m0EB52103D195BED7315C22DC3394855236FCEBDC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisRigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A_mA1779277BB07CE3D2CB8E340CEA85C40C6B52354_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponentsInChildren_TisMeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B_m37C5016444DB54041F938EA344271762E17600C3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponentsInChildren_TisTransform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1_m1D81E170D9B0CD0720A6BCDD722BC8A0B4AA8F0E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m033EECBB287C9A0E63ECF2DD02CAF24195520399_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m75DD7927F36D7B656004563A4BD0528CFDFA2988_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m98F9810F948087F92A86F8F8B9172D84010E861C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mAE131B53917AD7132F6BA2C05D5D17C38C5A2E59_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mEE653047BDB3486ACC2E16DC6C3422A0BA48F01F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_m508B72E5229FAE7042D99A04555F66F10C597C7A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_mE0F03A2E42E2F7F8A282AE01C12945F7379DC702_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Contains_mABA385C85BB255ADA4BFE2CAD270E2D87D94963F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m86205E64F6403EC8EC22940E68CF9398AAB017D9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_mF6A8DB4F94B9B38EFF385A072ECECAD67222BFED_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Remove_mC5BE819CCDA563EAFFEA9336DF45CDDF185E92BF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_ToArray_mCFFA6AFA30A20FB2FFC3846AD114DF7BC21BFFBC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_ToArray_mDEFFC768D9AAD376D27FC0FC1F7B57EE2E93479F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m30C52A4F2828D86CA3FAB0B1B583948F4DA9F1F9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m45E78772E9157F6CD684A69AAB07CE4082FE5FFD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m4A851968BE5369F4D77375CA40EE5839A548A9CA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mA4F8E736A8FFB5EBEAD1B891DA67A42E72165F51_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mC26889C0423CCF594A8C363532AC63BB0DB25201_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mC3D6B78E090A56B23425C490B695934EC2C29851_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mF8F23D572031748AD428623AE16803455997E297_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m199DB87BCE947106FBA38E19FDFE80CB65B61144_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_mB10F8A78245EBB2F22DD22E5AC8CA7D5FDE70B88_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_mB41962F6417D600544FEA4DD58B96F3B2810E572_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m200A6C390D1FAEF2378D70230BD6E96D492ABE04_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MessageHandler_getData_TisRuntimeObject_m4B0F54A0EA8EBDB824898342D0FB18471D377EC9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_FindObjectsOfType_TisPortalTransitionObject_t6C6EC1877A4E2BAB5F3366A1E0B7F8C02BC133CE_m012FBA2F979CAC914747591A629AB63129A2FAB3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SingletonMonoBehaviour_1__ctor_m0FD850D200F04E2F76476533783D9581729AB59F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SingletonMonoBehaviour_1_get_Instance_m2219FD0089F95EA990F58F8DC6D47F79E9FCECC2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ef__AnonymousType0_4__ctor_m3C493629DA20D23984AAEB32CBBAEEB67F0017BD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ef__AnonymousType0_4__ctor_mFFC0CC0C01AE7B3F6573354A43AFF96C09074D0F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityAction_2__ctor_mE0417B33CF845A6B9324E67D296ADEA562B91DE0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityMessageManager_OnSceneLoaded_mD7DA9C76ADA8D8F30198B4D274FE391150DF7192_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Skybox_t8B0EA7C092363DBCCF0B51434F04E7EE661E28E0_0_0_0_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ARRaycastHitU5BU5D_t8F4AFCC32363485FEBCE484011A5C258676441CA;
struct CameraU5BU5D_tAF84B9EC9AF40F1B6294BCEBA82A1AD123A9D001;
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
struct GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642;
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
struct MeshRendererU5BU5D_t535468079DEF88AD38546DC5D04E9102C401D228;
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
struct PortalTransitionObjectU5BU5D_tA3D594946282A5FE045336C6B819F2CEFA26C97A;
struct TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D;
struct TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755;
struct Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_tFDCAFCBB4B3431CFF2DC4D3E03FBFDF54EFF7E9A 
{
public:

public:
};


// System.Object


// <>f__AnonymousType0`4<System.Int32,System.String,System.String,Newtonsoft.Json.Linq.JObject>
struct  U3CU3Ef__AnonymousType0_4_tDE5000E5AA6D2F551A599D76967B42844AC60EE5  : public RuntimeObject
{
public:
	// <id>j__TPar <>f__AnonymousType0`4::<id>i__Field
	int32_t ___U3CidU3Ei__Field_0;
	// <seq>j__TPar <>f__AnonymousType0`4::<seq>i__Field
	String_t* ___U3CseqU3Ei__Field_1;
	// <name>j__TPar <>f__AnonymousType0`4::<name>i__Field
	String_t* ___U3CnameU3Ei__Field_2;
	// <data>j__TPar <>f__AnonymousType0`4::<data>i__Field
	JObject_tD2FCDDA48CACDBCB702BAF49B7C649084F6FDA34 * ___U3CdataU3Ei__Field_3;

public:
	inline static int32_t get_offset_of_U3CidU3Ei__Field_0() { return static_cast<int32_t>(offsetof(U3CU3Ef__AnonymousType0_4_tDE5000E5AA6D2F551A599D76967B42844AC60EE5, ___U3CidU3Ei__Field_0)); }
	inline int32_t get_U3CidU3Ei__Field_0() const { return ___U3CidU3Ei__Field_0; }
	inline int32_t* get_address_of_U3CidU3Ei__Field_0() { return &___U3CidU3Ei__Field_0; }
	inline void set_U3CidU3Ei__Field_0(int32_t value)
	{
		___U3CidU3Ei__Field_0 = value;
	}

	inline static int32_t get_offset_of_U3CseqU3Ei__Field_1() { return static_cast<int32_t>(offsetof(U3CU3Ef__AnonymousType0_4_tDE5000E5AA6D2F551A599D76967B42844AC60EE5, ___U3CseqU3Ei__Field_1)); }
	inline String_t* get_U3CseqU3Ei__Field_1() const { return ___U3CseqU3Ei__Field_1; }
	inline String_t** get_address_of_U3CseqU3Ei__Field_1() { return &___U3CseqU3Ei__Field_1; }
	inline void set_U3CseqU3Ei__Field_1(String_t* value)
	{
		___U3CseqU3Ei__Field_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CseqU3Ei__Field_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CnameU3Ei__Field_2() { return static_cast<int32_t>(offsetof(U3CU3Ef__AnonymousType0_4_tDE5000E5AA6D2F551A599D76967B42844AC60EE5, ___U3CnameU3Ei__Field_2)); }
	inline String_t* get_U3CnameU3Ei__Field_2() const { return ___U3CnameU3Ei__Field_2; }
	inline String_t** get_address_of_U3CnameU3Ei__Field_2() { return &___U3CnameU3Ei__Field_2; }
	inline void set_U3CnameU3Ei__Field_2(String_t* value)
	{
		___U3CnameU3Ei__Field_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CnameU3Ei__Field_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CdataU3Ei__Field_3() { return static_cast<int32_t>(offsetof(U3CU3Ef__AnonymousType0_4_tDE5000E5AA6D2F551A599D76967B42844AC60EE5, ___U3CdataU3Ei__Field_3)); }
	inline JObject_tD2FCDDA48CACDBCB702BAF49B7C649084F6FDA34 * get_U3CdataU3Ei__Field_3() const { return ___U3CdataU3Ei__Field_3; }
	inline JObject_tD2FCDDA48CACDBCB702BAF49B7C649084F6FDA34 ** get_address_of_U3CdataU3Ei__Field_3() { return &___U3CdataU3Ei__Field_3; }
	inline void set_U3CdataU3Ei__Field_3(JObject_tD2FCDDA48CACDBCB702BAF49B7C649084F6FDA34 * value)
	{
		___U3CdataU3Ei__Field_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CdataU3Ei__Field_3), (void*)value);
	}
};


// <>f__AnonymousType0`4<System.Int32,System.String,System.String,System.Object>
struct  U3CU3Ef__AnonymousType0_4_tBCC04185AED1C1C2CFAD99475825F0A10CB5F9F6  : public RuntimeObject
{
public:
	// <id>j__TPar <>f__AnonymousType0`4::<id>i__Field
	int32_t ___U3CidU3Ei__Field_0;
	// <seq>j__TPar <>f__AnonymousType0`4::<seq>i__Field
	String_t* ___U3CseqU3Ei__Field_1;
	// <name>j__TPar <>f__AnonymousType0`4::<name>i__Field
	String_t* ___U3CnameU3Ei__Field_2;
	// <data>j__TPar <>f__AnonymousType0`4::<data>i__Field
	RuntimeObject * ___U3CdataU3Ei__Field_3;

public:
	inline static int32_t get_offset_of_U3CidU3Ei__Field_0() { return static_cast<int32_t>(offsetof(U3CU3Ef__AnonymousType0_4_tBCC04185AED1C1C2CFAD99475825F0A10CB5F9F6, ___U3CidU3Ei__Field_0)); }
	inline int32_t get_U3CidU3Ei__Field_0() const { return ___U3CidU3Ei__Field_0; }
	inline int32_t* get_address_of_U3CidU3Ei__Field_0() { return &___U3CidU3Ei__Field_0; }
	inline void set_U3CidU3Ei__Field_0(int32_t value)
	{
		___U3CidU3Ei__Field_0 = value;
	}

	inline static int32_t get_offset_of_U3CseqU3Ei__Field_1() { return static_cast<int32_t>(offsetof(U3CU3Ef__AnonymousType0_4_tBCC04185AED1C1C2CFAD99475825F0A10CB5F9F6, ___U3CseqU3Ei__Field_1)); }
	inline String_t* get_U3CseqU3Ei__Field_1() const { return ___U3CseqU3Ei__Field_1; }
	inline String_t** get_address_of_U3CseqU3Ei__Field_1() { return &___U3CseqU3Ei__Field_1; }
	inline void set_U3CseqU3Ei__Field_1(String_t* value)
	{
		___U3CseqU3Ei__Field_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CseqU3Ei__Field_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CnameU3Ei__Field_2() { return static_cast<int32_t>(offsetof(U3CU3Ef__AnonymousType0_4_tBCC04185AED1C1C2CFAD99475825F0A10CB5F9F6, ___U3CnameU3Ei__Field_2)); }
	inline String_t* get_U3CnameU3Ei__Field_2() const { return ___U3CnameU3Ei__Field_2; }
	inline String_t** get_address_of_U3CnameU3Ei__Field_2() { return &___U3CnameU3Ei__Field_2; }
	inline void set_U3CnameU3Ei__Field_2(String_t* value)
	{
		___U3CnameU3Ei__Field_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CnameU3Ei__Field_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CdataU3Ei__Field_3() { return static_cast<int32_t>(offsetof(U3CU3Ef__AnonymousType0_4_tBCC04185AED1C1C2CFAD99475825F0A10CB5F9F6, ___U3CdataU3Ei__Field_3)); }
	inline RuntimeObject * get_U3CdataU3Ei__Field_3() const { return ___U3CdataU3Ei__Field_3; }
	inline RuntimeObject ** get_address_of_U3CdataU3Ei__Field_3() { return &___U3CdataU3Ei__Field_3; }
	inline void set_U3CdataU3Ei__Field_3(RuntimeObject * value)
	{
		___U3CdataU3Ei__Field_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CdataU3Ei__Field_3), (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>
struct  Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_tB55287EA11F7C665F930EF3A359F186CD3AE5EC1* ___entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::version
	int32_t ___version_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeList
	int32_t ___freeList_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeCount
	int32_t ___freeCount_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::comparer
	RuntimeObject* ___comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::keys
	KeyCollection_tDB6919EBDF36E83E708A483A6C4CF8065F62D1E0 * ___keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_t8738745D8513A557A82E6E097DF4D4E70D5253C2 * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08, ___buckets_0)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08, ___entries_1)); }
	inline EntryU5BU5D_tB55287EA11F7C665F930EF3A359F186CD3AE5EC1* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_tB55287EA11F7C665F930EF3A359F186CD3AE5EC1** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_tB55287EA11F7C665F930EF3A359F186CD3AE5EC1* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08, ___keys_7)); }
	inline KeyCollection_tDB6919EBDF36E83E708A483A6C4CF8065F62D1E0 * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_tDB6919EBDF36E83E708A483A6C4CF8065F62D1E0 ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_tDB6919EBDF36E83E708A483A6C4CF8065F62D1E0 * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08, ___values_8)); }
	inline ValueCollection_t8738745D8513A557A82E6E097DF4D4E70D5253C2 * get_values_8() const { return ___values_8; }
	inline ValueCollection_t8738745D8513A557A82E6E097DF4D4E70D5253C2 ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_t8738745D8513A557A82E6E097DF4D4E70D5253C2 * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2<System.Int32,UnityMessage>
struct  Dictionary_2_t0BC3AC5C2146DD06B35F47A5F473B1D0090A809E  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_tC02CA0AEDB81B33CE8B173EFD9E9B400F7656DC3* ___entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::version
	int32_t ___version_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeList
	int32_t ___freeList_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeCount
	int32_t ___freeCount_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::comparer
	RuntimeObject* ___comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::keys
	KeyCollection_tF6E2BD1A51688398F2D4F85FB9190FBB4A9DAFA6 * ___keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_tA403EAC50EF5A2B6760B999D4B5F8E0C2668B997 * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_t0BC3AC5C2146DD06B35F47A5F473B1D0090A809E, ___buckets_0)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_t0BC3AC5C2146DD06B35F47A5F473B1D0090A809E, ___entries_1)); }
	inline EntryU5BU5D_tC02CA0AEDB81B33CE8B173EFD9E9B400F7656DC3* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_tC02CA0AEDB81B33CE8B173EFD9E9B400F7656DC3** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_tC02CA0AEDB81B33CE8B173EFD9E9B400F7656DC3* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_t0BC3AC5C2146DD06B35F47A5F473B1D0090A809E, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_t0BC3AC5C2146DD06B35F47A5F473B1D0090A809E, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t0BC3AC5C2146DD06B35F47A5F473B1D0090A809E, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t0BC3AC5C2146DD06B35F47A5F473B1D0090A809E, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t0BC3AC5C2146DD06B35F47A5F473B1D0090A809E, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t0BC3AC5C2146DD06B35F47A5F473B1D0090A809E, ___keys_7)); }
	inline KeyCollection_tF6E2BD1A51688398F2D4F85FB9190FBB4A9DAFA6 * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_tF6E2BD1A51688398F2D4F85FB9190FBB4A9DAFA6 ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_tF6E2BD1A51688398F2D4F85FB9190FBB4A9DAFA6 * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t0BC3AC5C2146DD06B35F47A5F473B1D0090A809E, ___values_8)); }
	inline ValueCollection_tA403EAC50EF5A2B6760B999D4B5F8E0C2668B997 * get_values_8() const { return ___values_8; }
	inline ValueCollection_tA403EAC50EF5A2B6760B999D4B5F8E0C2668B997 ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_tA403EAC50EF5A2B6760B999D4B5F8E0C2668B997 * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t0BC3AC5C2146DD06B35F47A5F473B1D0090A809E, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.EmptyArray`1<System.Object>
struct  EmptyArray_1_tBF73225DFA890366D579424FE8F40073BF9FBAD4  : public RuntimeObject
{
public:

public:
};

struct EmptyArray_1_tBF73225DFA890366D579424FE8F40073BF9FBAD4_StaticFields
{
public:
	// T[] System.EmptyArray`1::Value
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___Value_0;

public:
	inline static int32_t get_offset_of_Value_0() { return static_cast<int32_t>(offsetof(EmptyArray_1_tBF73225DFA890366D579424FE8F40073BF9FBAD4_StaticFields, ___Value_0)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get_Value_0() const { return ___Value_0; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of_Value_0() { return &___Value_0; }
	inline void set_Value_0(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		___Value_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Value_0), (void*)value);
	}
};


// System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARRaycastHit>
struct  List_1_tDA68EC1B5CE9809C8709C1E58A7D0F4ACBB1252D  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	ARRaycastHitU5BU5D_t8F4AFCC32363485FEBCE484011A5C258676441CA* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_tDA68EC1B5CE9809C8709C1E58A7D0F4ACBB1252D, ____items_1)); }
	inline ARRaycastHitU5BU5D_t8F4AFCC32363485FEBCE484011A5C258676441CA* get__items_1() const { return ____items_1; }
	inline ARRaycastHitU5BU5D_t8F4AFCC32363485FEBCE484011A5C258676441CA** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(ARRaycastHitU5BU5D_t8F4AFCC32363485FEBCE484011A5C258676441CA* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_tDA68EC1B5CE9809C8709C1E58A7D0F4ACBB1252D, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_tDA68EC1B5CE9809C8709C1E58A7D0F4ACBB1252D, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_tDA68EC1B5CE9809C8709C1E58A7D0F4ACBB1252D, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_tDA68EC1B5CE9809C8709C1E58A7D0F4ACBB1252D_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	ARRaycastHitU5BU5D_t8F4AFCC32363485FEBCE484011A5C258676441CA* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_tDA68EC1B5CE9809C8709C1E58A7D0F4ACBB1252D_StaticFields, ____emptyArray_5)); }
	inline ARRaycastHitU5BU5D_t8F4AFCC32363485FEBCE484011A5C258676441CA* get__emptyArray_5() const { return ____emptyArray_5; }
	inline ARRaycastHitU5BU5D_t8F4AFCC32363485FEBCE484011A5C258676441CA** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(ARRaycastHitU5BU5D_t8F4AFCC32363485FEBCE484011A5C258676441CA* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<Dimension>
struct  List_1_t8541C8BADA1A4B90DE74D36D29037CF0E814B9AA  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	DimensionU5BU5D_t3DBD8E36003BB507A862CB89148705FD46796E4F* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t8541C8BADA1A4B90DE74D36D29037CF0E814B9AA, ____items_1)); }
	inline DimensionU5BU5D_t3DBD8E36003BB507A862CB89148705FD46796E4F* get__items_1() const { return ____items_1; }
	inline DimensionU5BU5D_t3DBD8E36003BB507A862CB89148705FD46796E4F** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(DimensionU5BU5D_t3DBD8E36003BB507A862CB89148705FD46796E4F* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t8541C8BADA1A4B90DE74D36D29037CF0E814B9AA, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t8541C8BADA1A4B90DE74D36D29037CF0E814B9AA, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t8541C8BADA1A4B90DE74D36D29037CF0E814B9AA, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t8541C8BADA1A4B90DE74D36D29037CF0E814B9AA_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	DimensionU5BU5D_t3DBD8E36003BB507A862CB89148705FD46796E4F* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t8541C8BADA1A4B90DE74D36D29037CF0E814B9AA_StaticFields, ____emptyArray_5)); }
	inline DimensionU5BU5D_t3DBD8E36003BB507A862CB89148705FD46796E4F* get__emptyArray_5() const { return ____emptyArray_5; }
	inline DimensionU5BU5D_t3DBD8E36003BB507A862CB89148705FD46796E4F** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(DimensionU5BU5D_t3DBD8E36003BB507A862CB89148705FD46796E4F* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<System.Int32>
struct  List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7, ____items_1)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get__items_1() const { return ____items_1; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7_StaticFields, ____emptyArray_5)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get__emptyArray_5() const { return ____emptyArray_5; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<System.Object>
struct  List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____items_1)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get__items_1() const { return ____items_1; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5_StaticFields, ____emptyArray_5)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get__emptyArray_5() const { return ____emptyArray_5; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<Portal>
struct  List_1_tF98B6D846565344249C79E895B9E3BF385EA519E  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	PortalU5BU5D_t349BD57D1E5B8EBBB8AAB466E738C7EB6D2DB40A* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_tF98B6D846565344249C79E895B9E3BF385EA519E, ____items_1)); }
	inline PortalU5BU5D_t349BD57D1E5B8EBBB8AAB466E738C7EB6D2DB40A* get__items_1() const { return ____items_1; }
	inline PortalU5BU5D_t349BD57D1E5B8EBBB8AAB466E738C7EB6D2DB40A** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(PortalU5BU5D_t349BD57D1E5B8EBBB8AAB466E738C7EB6D2DB40A* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_tF98B6D846565344249C79E895B9E3BF385EA519E, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_tF98B6D846565344249C79E895B9E3BF385EA519E, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_tF98B6D846565344249C79E895B9E3BF385EA519E, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_tF98B6D846565344249C79E895B9E3BF385EA519E_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	PortalU5BU5D_t349BD57D1E5B8EBBB8AAB466E738C7EB6D2DB40A* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_tF98B6D846565344249C79E895B9E3BF385EA519E_StaticFields, ____emptyArray_5)); }
	inline PortalU5BU5D_t349BD57D1E5B8EBBB8AAB466E738C7EB6D2DB40A* get__emptyArray_5() const { return ____emptyArray_5; }
	inline PortalU5BU5D_t349BD57D1E5B8EBBB8AAB466E738C7EB6D2DB40A** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(PortalU5BU5D_t349BD57D1E5B8EBBB8AAB466E738C7EB6D2DB40A* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<PortalTransitionObject>
struct  List_1_t30FCDC226FA7B79EC342BC4224C0AC67A9A36807  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	PortalTransitionObjectU5BU5D_tA3D594946282A5FE045336C6B819F2CEFA26C97A* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t30FCDC226FA7B79EC342BC4224C0AC67A9A36807, ____items_1)); }
	inline PortalTransitionObjectU5BU5D_tA3D594946282A5FE045336C6B819F2CEFA26C97A* get__items_1() const { return ____items_1; }
	inline PortalTransitionObjectU5BU5D_tA3D594946282A5FE045336C6B819F2CEFA26C97A** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(PortalTransitionObjectU5BU5D_tA3D594946282A5FE045336C6B819F2CEFA26C97A* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t30FCDC226FA7B79EC342BC4224C0AC67A9A36807, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t30FCDC226FA7B79EC342BC4224C0AC67A9A36807, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t30FCDC226FA7B79EC342BC4224C0AC67A9A36807, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t30FCDC226FA7B79EC342BC4224C0AC67A9A36807_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	PortalTransitionObjectU5BU5D_tA3D594946282A5FE045336C6B819F2CEFA26C97A* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t30FCDC226FA7B79EC342BC4224C0AC67A9A36807_StaticFields, ____emptyArray_5)); }
	inline PortalTransitionObjectU5BU5D_tA3D594946282A5FE045336C6B819F2CEFA26C97A* get__emptyArray_5() const { return ____emptyArray_5; }
	inline PortalTransitionObjectU5BU5D_tA3D594946282A5FE045336C6B819F2CEFA26C97A** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(PortalTransitionObjectU5BU5D_tA3D594946282A5FE045336C6B819F2CEFA26C97A* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<System.String>
struct  List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3, ____items_1)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get__items_1() const { return ____items_1; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3_StaticFields, ____emptyArray_5)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get__emptyArray_5() const { return ____emptyArray_5; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<UnityEngine.Vector3>
struct  List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181, ____items_1)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get__items_1() const { return ____items_1; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181_StaticFields, ____emptyArray_5)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get__emptyArray_5() const { return ____emptyArray_5; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// UnityEngine.AndroidJavaObject
struct  AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E  : public RuntimeObject
{
public:
	// UnityEngine.GlobalJavaObjectRef UnityEngine.AndroidJavaObject::m_jobject
	GlobalJavaObjectRef_t04A7D04EB0317C286F089E4DB4444EC4F2D78289 * ___m_jobject_1;
	// UnityEngine.GlobalJavaObjectRef UnityEngine.AndroidJavaObject::m_jclass
	GlobalJavaObjectRef_t04A7D04EB0317C286F089E4DB4444EC4F2D78289 * ___m_jclass_2;

public:
	inline static int32_t get_offset_of_m_jobject_1() { return static_cast<int32_t>(offsetof(AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E, ___m_jobject_1)); }
	inline GlobalJavaObjectRef_t04A7D04EB0317C286F089E4DB4444EC4F2D78289 * get_m_jobject_1() const { return ___m_jobject_1; }
	inline GlobalJavaObjectRef_t04A7D04EB0317C286F089E4DB4444EC4F2D78289 ** get_address_of_m_jobject_1() { return &___m_jobject_1; }
	inline void set_m_jobject_1(GlobalJavaObjectRef_t04A7D04EB0317C286F089E4DB4444EC4F2D78289 * value)
	{
		___m_jobject_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_jobject_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_jclass_2() { return static_cast<int32_t>(offsetof(AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E, ___m_jclass_2)); }
	inline GlobalJavaObjectRef_t04A7D04EB0317C286F089E4DB4444EC4F2D78289 * get_m_jclass_2() const { return ___m_jclass_2; }
	inline GlobalJavaObjectRef_t04A7D04EB0317C286F089E4DB4444EC4F2D78289 ** get_address_of_m_jclass_2() { return &___m_jclass_2; }
	inline void set_m_jclass_2(GlobalJavaObjectRef_t04A7D04EB0317C286F089E4DB4444EC4F2D78289 * value)
	{
		___m_jclass_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_jclass_2), (void*)value);
	}
};

struct AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_StaticFields
{
public:
	// System.Boolean UnityEngine.AndroidJavaObject::enableDebugPrints
	bool ___enableDebugPrints_0;

public:
	inline static int32_t get_offset_of_enableDebugPrints_0() { return static_cast<int32_t>(offsetof(AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_StaticFields, ___enableDebugPrints_0)); }
	inline bool get_enableDebugPrints_0() const { return ___enableDebugPrints_0; }
	inline bool* get_address_of_enableDebugPrints_0() { return &___enableDebugPrints_0; }
	inline void set_enableDebugPrints_0(bool value)
	{
		___enableDebugPrints_0 = value;
	}
};

struct Il2CppArrayBounds;

// System.Array


// CameraExtensions
struct  CameraExtensions_t754D1E5F9D5022A6BD498E66AC8256006C75D0B9  : public RuntimeObject
{
public:

public:
};


// DimensionChanger
struct  DimensionChanger_t386A77EBDEC57B979AF5F78F899AD66927C7DE1C  : public RuntimeObject
{
public:

public:
};


// Newtonsoft.Json.Linq.JToken
struct  JToken_t78F4E878E41125BB40B529918D104EDDC99E00C9  : public RuntimeObject
{
public:
	// Newtonsoft.Json.Linq.JContainer Newtonsoft.Json.Linq.JToken::_parent
	JContainer_t0393B6D5D1D1452D16BE67178D48155F148BCFC4 * ____parent_1;
	// Newtonsoft.Json.Linq.JToken Newtonsoft.Json.Linq.JToken::_previous
	JToken_t78F4E878E41125BB40B529918D104EDDC99E00C9 * ____previous_2;
	// Newtonsoft.Json.Linq.JToken Newtonsoft.Json.Linq.JToken::_next
	JToken_t78F4E878E41125BB40B529918D104EDDC99E00C9 * ____next_3;
	// System.Object Newtonsoft.Json.Linq.JToken::_annotations
	RuntimeObject * ____annotations_4;

public:
	inline static int32_t get_offset_of__parent_1() { return static_cast<int32_t>(offsetof(JToken_t78F4E878E41125BB40B529918D104EDDC99E00C9, ____parent_1)); }
	inline JContainer_t0393B6D5D1D1452D16BE67178D48155F148BCFC4 * get__parent_1() const { return ____parent_1; }
	inline JContainer_t0393B6D5D1D1452D16BE67178D48155F148BCFC4 ** get_address_of__parent_1() { return &____parent_1; }
	inline void set__parent_1(JContainer_t0393B6D5D1D1452D16BE67178D48155F148BCFC4 * value)
	{
		____parent_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____parent_1), (void*)value);
	}

	inline static int32_t get_offset_of__previous_2() { return static_cast<int32_t>(offsetof(JToken_t78F4E878E41125BB40B529918D104EDDC99E00C9, ____previous_2)); }
	inline JToken_t78F4E878E41125BB40B529918D104EDDC99E00C9 * get__previous_2() const { return ____previous_2; }
	inline JToken_t78F4E878E41125BB40B529918D104EDDC99E00C9 ** get_address_of__previous_2() { return &____previous_2; }
	inline void set__previous_2(JToken_t78F4E878E41125BB40B529918D104EDDC99E00C9 * value)
	{
		____previous_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____previous_2), (void*)value);
	}

	inline static int32_t get_offset_of__next_3() { return static_cast<int32_t>(offsetof(JToken_t78F4E878E41125BB40B529918D104EDDC99E00C9, ____next_3)); }
	inline JToken_t78F4E878E41125BB40B529918D104EDDC99E00C9 * get__next_3() const { return ____next_3; }
	inline JToken_t78F4E878E41125BB40B529918D104EDDC99E00C9 ** get_address_of__next_3() { return &____next_3; }
	inline void set__next_3(JToken_t78F4E878E41125BB40B529918D104EDDC99E00C9 * value)
	{
		____next_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____next_3), (void*)value);
	}

	inline static int32_t get_offset_of__annotations_4() { return static_cast<int32_t>(offsetof(JToken_t78F4E878E41125BB40B529918D104EDDC99E00C9, ____annotations_4)); }
	inline RuntimeObject * get__annotations_4() const { return ____annotations_4; }
	inline RuntimeObject ** get_address_of__annotations_4() { return &____annotations_4; }
	inline void set__annotations_4(RuntimeObject * value)
	{
		____annotations_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____annotations_4), (void*)value);
	}
};

struct JToken_t78F4E878E41125BB40B529918D104EDDC99E00C9_StaticFields
{
public:
	// Newtonsoft.Json.Linq.JTokenEqualityComparer Newtonsoft.Json.Linq.JToken::_equalityComparer
	JTokenEqualityComparer_t0E5DB261B004137A3EE94DB97E554351FC500AA0 * ____equalityComparer_0;
	// Newtonsoft.Json.Linq.JTokenType[] Newtonsoft.Json.Linq.JToken::BooleanTypes
	JTokenTypeU5BU5D_t03DB097DBD7548086F9F27181BE1DB7AA4E653BE* ___BooleanTypes_5;
	// Newtonsoft.Json.Linq.JTokenType[] Newtonsoft.Json.Linq.JToken::NumberTypes
	JTokenTypeU5BU5D_t03DB097DBD7548086F9F27181BE1DB7AA4E653BE* ___NumberTypes_6;
	// Newtonsoft.Json.Linq.JTokenType[] Newtonsoft.Json.Linq.JToken::StringTypes
	JTokenTypeU5BU5D_t03DB097DBD7548086F9F27181BE1DB7AA4E653BE* ___StringTypes_7;
	// Newtonsoft.Json.Linq.JTokenType[] Newtonsoft.Json.Linq.JToken::GuidTypes
	JTokenTypeU5BU5D_t03DB097DBD7548086F9F27181BE1DB7AA4E653BE* ___GuidTypes_8;
	// Newtonsoft.Json.Linq.JTokenType[] Newtonsoft.Json.Linq.JToken::TimeSpanTypes
	JTokenTypeU5BU5D_t03DB097DBD7548086F9F27181BE1DB7AA4E653BE* ___TimeSpanTypes_9;
	// Newtonsoft.Json.Linq.JTokenType[] Newtonsoft.Json.Linq.JToken::UriTypes
	JTokenTypeU5BU5D_t03DB097DBD7548086F9F27181BE1DB7AA4E653BE* ___UriTypes_10;
	// Newtonsoft.Json.Linq.JTokenType[] Newtonsoft.Json.Linq.JToken::CharTypes
	JTokenTypeU5BU5D_t03DB097DBD7548086F9F27181BE1DB7AA4E653BE* ___CharTypes_11;
	// Newtonsoft.Json.Linq.JTokenType[] Newtonsoft.Json.Linq.JToken::DateTimeTypes
	JTokenTypeU5BU5D_t03DB097DBD7548086F9F27181BE1DB7AA4E653BE* ___DateTimeTypes_12;
	// Newtonsoft.Json.Linq.JTokenType[] Newtonsoft.Json.Linq.JToken::BytesTypes
	JTokenTypeU5BU5D_t03DB097DBD7548086F9F27181BE1DB7AA4E653BE* ___BytesTypes_13;

public:
	inline static int32_t get_offset_of__equalityComparer_0() { return static_cast<int32_t>(offsetof(JToken_t78F4E878E41125BB40B529918D104EDDC99E00C9_StaticFields, ____equalityComparer_0)); }
	inline JTokenEqualityComparer_t0E5DB261B004137A3EE94DB97E554351FC500AA0 * get__equalityComparer_0() const { return ____equalityComparer_0; }
	inline JTokenEqualityComparer_t0E5DB261B004137A3EE94DB97E554351FC500AA0 ** get_address_of__equalityComparer_0() { return &____equalityComparer_0; }
	inline void set__equalityComparer_0(JTokenEqualityComparer_t0E5DB261B004137A3EE94DB97E554351FC500AA0 * value)
	{
		____equalityComparer_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____equalityComparer_0), (void*)value);
	}

	inline static int32_t get_offset_of_BooleanTypes_5() { return static_cast<int32_t>(offsetof(JToken_t78F4E878E41125BB40B529918D104EDDC99E00C9_StaticFields, ___BooleanTypes_5)); }
	inline JTokenTypeU5BU5D_t03DB097DBD7548086F9F27181BE1DB7AA4E653BE* get_BooleanTypes_5() const { return ___BooleanTypes_5; }
	inline JTokenTypeU5BU5D_t03DB097DBD7548086F9F27181BE1DB7AA4E653BE** get_address_of_BooleanTypes_5() { return &___BooleanTypes_5; }
	inline void set_BooleanTypes_5(JTokenTypeU5BU5D_t03DB097DBD7548086F9F27181BE1DB7AA4E653BE* value)
	{
		___BooleanTypes_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___BooleanTypes_5), (void*)value);
	}

	inline static int32_t get_offset_of_NumberTypes_6() { return static_cast<int32_t>(offsetof(JToken_t78F4E878E41125BB40B529918D104EDDC99E00C9_StaticFields, ___NumberTypes_6)); }
	inline JTokenTypeU5BU5D_t03DB097DBD7548086F9F27181BE1DB7AA4E653BE* get_NumberTypes_6() const { return ___NumberTypes_6; }
	inline JTokenTypeU5BU5D_t03DB097DBD7548086F9F27181BE1DB7AA4E653BE** get_address_of_NumberTypes_6() { return &___NumberTypes_6; }
	inline void set_NumberTypes_6(JTokenTypeU5BU5D_t03DB097DBD7548086F9F27181BE1DB7AA4E653BE* value)
	{
		___NumberTypes_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___NumberTypes_6), (void*)value);
	}

	inline static int32_t get_offset_of_StringTypes_7() { return static_cast<int32_t>(offsetof(JToken_t78F4E878E41125BB40B529918D104EDDC99E00C9_StaticFields, ___StringTypes_7)); }
	inline JTokenTypeU5BU5D_t03DB097DBD7548086F9F27181BE1DB7AA4E653BE* get_StringTypes_7() const { return ___StringTypes_7; }
	inline JTokenTypeU5BU5D_t03DB097DBD7548086F9F27181BE1DB7AA4E653BE** get_address_of_StringTypes_7() { return &___StringTypes_7; }
	inline void set_StringTypes_7(JTokenTypeU5BU5D_t03DB097DBD7548086F9F27181BE1DB7AA4E653BE* value)
	{
		___StringTypes_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___StringTypes_7), (void*)value);
	}

	inline static int32_t get_offset_of_GuidTypes_8() { return static_cast<int32_t>(offsetof(JToken_t78F4E878E41125BB40B529918D104EDDC99E00C9_StaticFields, ___GuidTypes_8)); }
	inline JTokenTypeU5BU5D_t03DB097DBD7548086F9F27181BE1DB7AA4E653BE* get_GuidTypes_8() const { return ___GuidTypes_8; }
	inline JTokenTypeU5BU5D_t03DB097DBD7548086F9F27181BE1DB7AA4E653BE** get_address_of_GuidTypes_8() { return &___GuidTypes_8; }
	inline void set_GuidTypes_8(JTokenTypeU5BU5D_t03DB097DBD7548086F9F27181BE1DB7AA4E653BE* value)
	{
		___GuidTypes_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___GuidTypes_8), (void*)value);
	}

	inline static int32_t get_offset_of_TimeSpanTypes_9() { return static_cast<int32_t>(offsetof(JToken_t78F4E878E41125BB40B529918D104EDDC99E00C9_StaticFields, ___TimeSpanTypes_9)); }
	inline JTokenTypeU5BU5D_t03DB097DBD7548086F9F27181BE1DB7AA4E653BE* get_TimeSpanTypes_9() const { return ___TimeSpanTypes_9; }
	inline JTokenTypeU5BU5D_t03DB097DBD7548086F9F27181BE1DB7AA4E653BE** get_address_of_TimeSpanTypes_9() { return &___TimeSpanTypes_9; }
	inline void set_TimeSpanTypes_9(JTokenTypeU5BU5D_t03DB097DBD7548086F9F27181BE1DB7AA4E653BE* value)
	{
		___TimeSpanTypes_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TimeSpanTypes_9), (void*)value);
	}

	inline static int32_t get_offset_of_UriTypes_10() { return static_cast<int32_t>(offsetof(JToken_t78F4E878E41125BB40B529918D104EDDC99E00C9_StaticFields, ___UriTypes_10)); }
	inline JTokenTypeU5BU5D_t03DB097DBD7548086F9F27181BE1DB7AA4E653BE* get_UriTypes_10() const { return ___UriTypes_10; }
	inline JTokenTypeU5BU5D_t03DB097DBD7548086F9F27181BE1DB7AA4E653BE** get_address_of_UriTypes_10() { return &___UriTypes_10; }
	inline void set_UriTypes_10(JTokenTypeU5BU5D_t03DB097DBD7548086F9F27181BE1DB7AA4E653BE* value)
	{
		___UriTypes_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UriTypes_10), (void*)value);
	}

	inline static int32_t get_offset_of_CharTypes_11() { return static_cast<int32_t>(offsetof(JToken_t78F4E878E41125BB40B529918D104EDDC99E00C9_StaticFields, ___CharTypes_11)); }
	inline JTokenTypeU5BU5D_t03DB097DBD7548086F9F27181BE1DB7AA4E653BE* get_CharTypes_11() const { return ___CharTypes_11; }
	inline JTokenTypeU5BU5D_t03DB097DBD7548086F9F27181BE1DB7AA4E653BE** get_address_of_CharTypes_11() { return &___CharTypes_11; }
	inline void set_CharTypes_11(JTokenTypeU5BU5D_t03DB097DBD7548086F9F27181BE1DB7AA4E653BE* value)
	{
		___CharTypes_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CharTypes_11), (void*)value);
	}

	inline static int32_t get_offset_of_DateTimeTypes_12() { return static_cast<int32_t>(offsetof(JToken_t78F4E878E41125BB40B529918D104EDDC99E00C9_StaticFields, ___DateTimeTypes_12)); }
	inline JTokenTypeU5BU5D_t03DB097DBD7548086F9F27181BE1DB7AA4E653BE* get_DateTimeTypes_12() const { return ___DateTimeTypes_12; }
	inline JTokenTypeU5BU5D_t03DB097DBD7548086F9F27181BE1DB7AA4E653BE** get_address_of_DateTimeTypes_12() { return &___DateTimeTypes_12; }
	inline void set_DateTimeTypes_12(JTokenTypeU5BU5D_t03DB097DBD7548086F9F27181BE1DB7AA4E653BE* value)
	{
		___DateTimeTypes_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DateTimeTypes_12), (void*)value);
	}

	inline static int32_t get_offset_of_BytesTypes_13() { return static_cast<int32_t>(offsetof(JToken_t78F4E878E41125BB40B529918D104EDDC99E00C9_StaticFields, ___BytesTypes_13)); }
	inline JTokenTypeU5BU5D_t03DB097DBD7548086F9F27181BE1DB7AA4E653BE* get_BytesTypes_13() const { return ___BytesTypes_13; }
	inline JTokenTypeU5BU5D_t03DB097DBD7548086F9F27181BE1DB7AA4E653BE** get_address_of_BytesTypes_13() { return &___BytesTypes_13; }
	inline void set_BytesTypes_13(JTokenTypeU5BU5D_t03DB097DBD7548086F9F27181BE1DB7AA4E653BE* value)
	{
		___BytesTypes_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___BytesTypes_13), (void*)value);
	}
};


// LayerManager
struct  LayerManager_t3527BEB62E0C7C2C45055FE662E50E75642F7942  : public RuntimeObject
{
public:
	// System.Collections.Generic.List`1<System.String> LayerManager::definedLayers
	List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * ___definedLayers_1;

public:
	inline static int32_t get_offset_of_definedLayers_1() { return static_cast<int32_t>(offsetof(LayerManager_t3527BEB62E0C7C2C45055FE662E50E75642F7942, ___definedLayers_1)); }
	inline List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * get_definedLayers_1() const { return ___definedLayers_1; }
	inline List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 ** get_address_of_definedLayers_1() { return &___definedLayers_1; }
	inline void set_definedLayers_1(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * value)
	{
		___definedLayers_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___definedLayers_1), (void*)value);
	}
};

struct LayerManager_t3527BEB62E0C7C2C45055FE662E50E75642F7942_StaticFields
{
public:
	// LayerManager LayerManager::instance
	LayerManager_t3527BEB62E0C7C2C45055FE662E50E75642F7942 * ___instance_0;
	// System.Collections.Generic.List`1<Dimension> LayerManager::definedDimensions
	List_1_t8541C8BADA1A4B90DE74D36D29037CF0E814B9AA * ___definedDimensions_2;
	// System.Int32 LayerManager::totalLayerNum
	int32_t ___totalLayerNum_3;

public:
	inline static int32_t get_offset_of_instance_0() { return static_cast<int32_t>(offsetof(LayerManager_t3527BEB62E0C7C2C45055FE662E50E75642F7942_StaticFields, ___instance_0)); }
	inline LayerManager_t3527BEB62E0C7C2C45055FE662E50E75642F7942 * get_instance_0() const { return ___instance_0; }
	inline LayerManager_t3527BEB62E0C7C2C45055FE662E50E75642F7942 ** get_address_of_instance_0() { return &___instance_0; }
	inline void set_instance_0(LayerManager_t3527BEB62E0C7C2C45055FE662E50E75642F7942 * value)
	{
		___instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___instance_0), (void*)value);
	}

	inline static int32_t get_offset_of_definedDimensions_2() { return static_cast<int32_t>(offsetof(LayerManager_t3527BEB62E0C7C2C45055FE662E50E75642F7942_StaticFields, ___definedDimensions_2)); }
	inline List_1_t8541C8BADA1A4B90DE74D36D29037CF0E814B9AA * get_definedDimensions_2() const { return ___definedDimensions_2; }
	inline List_1_t8541C8BADA1A4B90DE74D36D29037CF0E814B9AA ** get_address_of_definedDimensions_2() { return &___definedDimensions_2; }
	inline void set_definedDimensions_2(List_1_t8541C8BADA1A4B90DE74D36D29037CF0E814B9AA * value)
	{
		___definedDimensions_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___definedDimensions_2), (void*)value);
	}

	inline static int32_t get_offset_of_totalLayerNum_3() { return static_cast<int32_t>(offsetof(LayerManager_t3527BEB62E0C7C2C45055FE662E50E75642F7942_StaticFields, ___totalLayerNum_3)); }
	inline int32_t get_totalLayerNum_3() const { return ___totalLayerNum_3; }
	inline int32_t* get_address_of_totalLayerNum_3() { return &___totalLayerNum_3; }
	inline void set_totalLayerNum_3(int32_t value)
	{
		___totalLayerNum_3 = value;
	}
};


// System.Reflection.MemberInfo
struct  MemberInfo_t  : public RuntimeObject
{
public:

public:
};


// MessageHandler
struct  MessageHandler_t61D3A022CD7E59124898915FB6A1EB56ACBF19B7  : public RuntimeObject
{
public:
	// System.Int32 MessageHandler::id
	int32_t ___id_0;
	// System.String MessageHandler::seq
	String_t* ___seq_1;
	// System.String MessageHandler::name
	String_t* ___name_2;
	// Newtonsoft.Json.Linq.JToken MessageHandler::data
	JToken_t78F4E878E41125BB40B529918D104EDDC99E00C9 * ___data_3;

public:
	inline static int32_t get_offset_of_id_0() { return static_cast<int32_t>(offsetof(MessageHandler_t61D3A022CD7E59124898915FB6A1EB56ACBF19B7, ___id_0)); }
	inline int32_t get_id_0() const { return ___id_0; }
	inline int32_t* get_address_of_id_0() { return &___id_0; }
	inline void set_id_0(int32_t value)
	{
		___id_0 = value;
	}

	inline static int32_t get_offset_of_seq_1() { return static_cast<int32_t>(offsetof(MessageHandler_t61D3A022CD7E59124898915FB6A1EB56ACBF19B7, ___seq_1)); }
	inline String_t* get_seq_1() const { return ___seq_1; }
	inline String_t** get_address_of_seq_1() { return &___seq_1; }
	inline void set_seq_1(String_t* value)
	{
		___seq_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___seq_1), (void*)value);
	}

	inline static int32_t get_offset_of_name_2() { return static_cast<int32_t>(offsetof(MessageHandler_t61D3A022CD7E59124898915FB6A1EB56ACBF19B7, ___name_2)); }
	inline String_t* get_name_2() const { return ___name_2; }
	inline String_t** get_address_of_name_2() { return &___name_2; }
	inline void set_name_2(String_t* value)
	{
		___name_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___name_2), (void*)value);
	}

	inline static int32_t get_offset_of_data_3() { return static_cast<int32_t>(offsetof(MessageHandler_t61D3A022CD7E59124898915FB6A1EB56ACBF19B7, ___data_3)); }
	inline JToken_t78F4E878E41125BB40B529918D104EDDC99E00C9 * get_data_3() const { return ___data_3; }
	inline JToken_t78F4E878E41125BB40B529918D104EDDC99E00C9 ** get_address_of_data_3() { return &___data_3; }
	inline void set_data_3(JToken_t78F4E878E41125BB40B529918D104EDDC99E00C9 * value)
	{
		___data_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___data_3), (void*)value);
	}
};


// NativeAPI
struct  NativeAPI_tCF1B87942D24DC16E49B82348757D460312951F7  : public RuntimeObject
{
public:

public:
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


// UnityMessage
struct  UnityMessage_tE42919C6EDB7FF8FF734D6E4D7246C2C457BA6AD  : public RuntimeObject
{
public:
	// System.String UnityMessage::name
	String_t* ___name_0;
	// Newtonsoft.Json.Linq.JObject UnityMessage::data
	JObject_tD2FCDDA48CACDBCB702BAF49B7C649084F6FDA34 * ___data_1;
	// System.Action`1<System.Object> UnityMessage::callBack
	Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * ___callBack_2;

public:
	inline static int32_t get_offset_of_name_0() { return static_cast<int32_t>(offsetof(UnityMessage_tE42919C6EDB7FF8FF734D6E4D7246C2C457BA6AD, ___name_0)); }
	inline String_t* get_name_0() const { return ___name_0; }
	inline String_t** get_address_of_name_0() { return &___name_0; }
	inline void set_name_0(String_t* value)
	{
		___name_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___name_0), (void*)value);
	}

	inline static int32_t get_offset_of_data_1() { return static_cast<int32_t>(offsetof(UnityMessage_tE42919C6EDB7FF8FF734D6E4D7246C2C457BA6AD, ___data_1)); }
	inline JObject_tD2FCDDA48CACDBCB702BAF49B7C649084F6FDA34 * get_data_1() const { return ___data_1; }
	inline JObject_tD2FCDDA48CACDBCB702BAF49B7C649084F6FDA34 ** get_address_of_data_1() { return &___data_1; }
	inline void set_data_1(JObject_tD2FCDDA48CACDBCB702BAF49B7C649084F6FDA34 * value)
	{
		___data_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___data_1), (void*)value);
	}

	inline static int32_t get_offset_of_callBack_2() { return static_cast<int32_t>(offsetof(UnityMessage_tE42919C6EDB7FF8FF734D6E4D7246C2C457BA6AD, ___callBack_2)); }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * get_callBack_2() const { return ___callBack_2; }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC ** get_address_of_callBack_2() { return &___callBack_2; }
	inline void set_callBack_2(Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * value)
	{
		___callBack_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___callBack_2), (void*)value);
	}
};


// System.ValueType
struct  ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_com
{
};

// System.Collections.Generic.List`1/Enumerator<Dimension>
struct  Enumerator_t49197A306F3EC32F88087BFF9EC8A440ED6844E1 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::list
	List_1_t8541C8BADA1A4B90DE74D36D29037CF0E814B9AA * ___list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	Dimension_t28D074E7D31C414382BEB891CF77CF6345E04C34 * ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_t49197A306F3EC32F88087BFF9EC8A440ED6844E1, ___list_0)); }
	inline List_1_t8541C8BADA1A4B90DE74D36D29037CF0E814B9AA * get_list_0() const { return ___list_0; }
	inline List_1_t8541C8BADA1A4B90DE74D36D29037CF0E814B9AA ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_t8541C8BADA1A4B90DE74D36D29037CF0E814B9AA * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_t49197A306F3EC32F88087BFF9EC8A440ED6844E1, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_t49197A306F3EC32F88087BFF9EC8A440ED6844E1, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t49197A306F3EC32F88087BFF9EC8A440ED6844E1, ___current_3)); }
	inline Dimension_t28D074E7D31C414382BEB891CF77CF6345E04C34 * get_current_3() const { return ___current_3; }
	inline Dimension_t28D074E7D31C414382BEB891CF77CF6345E04C34 ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(Dimension_t28D074E7D31C414382BEB891CF77CF6345E04C34 * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_3), (void*)value);
	}
};


// System.Collections.Generic.List`1/Enumerator<System.Object>
struct  Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::list
	List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * ___list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	RuntimeObject * ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6, ___list_0)); }
	inline List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * get_list_0() const { return ___list_0; }
	inline List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6, ___current_3)); }
	inline RuntimeObject * get_current_3() const { return ___current_3; }
	inline RuntimeObject ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(RuntimeObject * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_3), (void*)value);
	}
};


// System.Collections.Generic.List`1/Enumerator<Portal>
struct  Enumerator_t42BF4791E9024F9ADF2FF759B419F7DD450B89AA 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::list
	List_1_tF98B6D846565344249C79E895B9E3BF385EA519E * ___list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	Portal_t355BC086AE7B4F5E476064C8805CA0830E0CA48E * ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_t42BF4791E9024F9ADF2FF759B419F7DD450B89AA, ___list_0)); }
	inline List_1_tF98B6D846565344249C79E895B9E3BF385EA519E * get_list_0() const { return ___list_0; }
	inline List_1_tF98B6D846565344249C79E895B9E3BF385EA519E ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_tF98B6D846565344249C79E895B9E3BF385EA519E * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_t42BF4791E9024F9ADF2FF759B419F7DD450B89AA, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_t42BF4791E9024F9ADF2FF759B419F7DD450B89AA, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t42BF4791E9024F9ADF2FF759B419F7DD450B89AA, ___current_3)); }
	inline Portal_t355BC086AE7B4F5E476064C8805CA0830E0CA48E * get_current_3() const { return ___current_3; }
	inline Portal_t355BC086AE7B4F5E476064C8805CA0830E0CA48E ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(Portal_t355BC086AE7B4F5E476064C8805CA0830E0CA48E * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_3), (void*)value);
	}
};


// UnityEngine.AndroidJavaClass
struct  AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4  : public AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E
{
public:

public:
};


// System.Boolean
struct  Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37, ___m_value_0)); }
	inline bool get_m_value_0() const { return ___m_value_0; }
	inline bool* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(bool value)
	{
		___m_value_0 = value;
	}
};

struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields
{
public:
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;

public:
	inline static int32_t get_offset_of_TrueString_5() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___TrueString_5)); }
	inline String_t* get_TrueString_5() const { return ___TrueString_5; }
	inline String_t** get_address_of_TrueString_5() { return &___TrueString_5; }
	inline void set_TrueString_5(String_t* value)
	{
		___TrueString_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TrueString_5), (void*)value);
	}

	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___FalseString_6)); }
	inline String_t* get_FalseString_6() const { return ___FalseString_6; }
	inline String_t** get_address_of_FalseString_6() { return &___FalseString_6; }
	inline void set_FalseString_6(String_t* value)
	{
		___FalseString_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FalseString_6), (void*)value);
	}
};


// System.Enum
struct  Enum_t23B90B40F60E677A8025267341651C94AE079CDA  : public ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52
{
public:

public:
};

struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields
{
public:
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___enumSeperatorCharArray_0;

public:
	inline static int32_t get_offset_of_enumSeperatorCharArray_0() { return static_cast<int32_t>(offsetof(Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields, ___enumSeperatorCharArray_0)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_enumSeperatorCharArray_0() const { return ___enumSeperatorCharArray_0; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_enumSeperatorCharArray_0() { return &___enumSeperatorCharArray_0; }
	inline void set_enumSeperatorCharArray_0(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___enumSeperatorCharArray_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumSeperatorCharArray_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_com
{
};

// System.Int32
struct  Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046, ___m_value_0)); }
	inline int32_t get_m_value_0() const { return ___m_value_0; }
	inline int32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int32_t value)
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


// Newtonsoft.Json.Linq.JContainer
struct  JContainer_t0393B6D5D1D1452D16BE67178D48155F148BCFC4  : public JToken_t78F4E878E41125BB40B529918D104EDDC99E00C9
{
public:
	// System.ComponentModel.ListChangedEventHandler Newtonsoft.Json.Linq.JContainer::_listChanged
	ListChangedEventHandler_t02874ED3C8355742E3E62AED85A53F3140506B8C * ____listChanged_14;
	// System.ComponentModel.AddingNewEventHandler Newtonsoft.Json.Linq.JContainer::_addingNew
	AddingNewEventHandler_t2407F1FD420B3D4997C0EFC15336D6BF71738EEB * ____addingNew_15;
	// System.Object Newtonsoft.Json.Linq.JContainer::_syncRoot
	RuntimeObject * ____syncRoot_16;
	// System.Boolean Newtonsoft.Json.Linq.JContainer::_busy
	bool ____busy_17;

public:
	inline static int32_t get_offset_of__listChanged_14() { return static_cast<int32_t>(offsetof(JContainer_t0393B6D5D1D1452D16BE67178D48155F148BCFC4, ____listChanged_14)); }
	inline ListChangedEventHandler_t02874ED3C8355742E3E62AED85A53F3140506B8C * get__listChanged_14() const { return ____listChanged_14; }
	inline ListChangedEventHandler_t02874ED3C8355742E3E62AED85A53F3140506B8C ** get_address_of__listChanged_14() { return &____listChanged_14; }
	inline void set__listChanged_14(ListChangedEventHandler_t02874ED3C8355742E3E62AED85A53F3140506B8C * value)
	{
		____listChanged_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____listChanged_14), (void*)value);
	}

	inline static int32_t get_offset_of__addingNew_15() { return static_cast<int32_t>(offsetof(JContainer_t0393B6D5D1D1452D16BE67178D48155F148BCFC4, ____addingNew_15)); }
	inline AddingNewEventHandler_t2407F1FD420B3D4997C0EFC15336D6BF71738EEB * get__addingNew_15() const { return ____addingNew_15; }
	inline AddingNewEventHandler_t2407F1FD420B3D4997C0EFC15336D6BF71738EEB ** get_address_of__addingNew_15() { return &____addingNew_15; }
	inline void set__addingNew_15(AddingNewEventHandler_t2407F1FD420B3D4997C0EFC15336D6BF71738EEB * value)
	{
		____addingNew_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____addingNew_15), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_16() { return static_cast<int32_t>(offsetof(JContainer_t0393B6D5D1D1452D16BE67178D48155F148BCFC4, ____syncRoot_16)); }
	inline RuntimeObject * get__syncRoot_16() const { return ____syncRoot_16; }
	inline RuntimeObject ** get_address_of__syncRoot_16() { return &____syncRoot_16; }
	inline void set__syncRoot_16(RuntimeObject * value)
	{
		____syncRoot_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_16), (void*)value);
	}

	inline static int32_t get_offset_of__busy_17() { return static_cast<int32_t>(offsetof(JContainer_t0393B6D5D1D1452D16BE67178D48155F148BCFC4, ____busy_17)); }
	inline bool get__busy_17() const { return ____busy_17; }
	inline bool* get_address_of__busy_17() { return &____busy_17; }
	inline void set__busy_17(bool value)
	{
		____busy_17 = value;
	}
};


// UnityEngine.LayerMask
struct  LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8 
{
public:
	// System.Int32 UnityEngine.LayerMask::m_Mask
	int32_t ___m_Mask_0;

public:
	inline static int32_t get_offset_of_m_Mask_0() { return static_cast<int32_t>(offsetof(LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8, ___m_Mask_0)); }
	inline int32_t get_m_Mask_0() const { return ___m_Mask_0; }
	inline int32_t* get_address_of_m_Mask_0() { return &___m_Mask_0; }
	inline void set_m_Mask_0(int32_t value)
	{
		___m_Mask_0 = value;
	}
};


// UnityEngine.Matrix4x4
struct  Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 
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
	inline static int32_t get_offset_of_m00_0() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m00_0)); }
	inline float get_m00_0() const { return ___m00_0; }
	inline float* get_address_of_m00_0() { return &___m00_0; }
	inline void set_m00_0(float value)
	{
		___m00_0 = value;
	}

	inline static int32_t get_offset_of_m10_1() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m10_1)); }
	inline float get_m10_1() const { return ___m10_1; }
	inline float* get_address_of_m10_1() { return &___m10_1; }
	inline void set_m10_1(float value)
	{
		___m10_1 = value;
	}

	inline static int32_t get_offset_of_m20_2() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m20_2)); }
	inline float get_m20_2() const { return ___m20_2; }
	inline float* get_address_of_m20_2() { return &___m20_2; }
	inline void set_m20_2(float value)
	{
		___m20_2 = value;
	}

	inline static int32_t get_offset_of_m30_3() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m30_3)); }
	inline float get_m30_3() const { return ___m30_3; }
	inline float* get_address_of_m30_3() { return &___m30_3; }
	inline void set_m30_3(float value)
	{
		___m30_3 = value;
	}

	inline static int32_t get_offset_of_m01_4() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m01_4)); }
	inline float get_m01_4() const { return ___m01_4; }
	inline float* get_address_of_m01_4() { return &___m01_4; }
	inline void set_m01_4(float value)
	{
		___m01_4 = value;
	}

	inline static int32_t get_offset_of_m11_5() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m11_5)); }
	inline float get_m11_5() const { return ___m11_5; }
	inline float* get_address_of_m11_5() { return &___m11_5; }
	inline void set_m11_5(float value)
	{
		___m11_5 = value;
	}

	inline static int32_t get_offset_of_m21_6() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m21_6)); }
	inline float get_m21_6() const { return ___m21_6; }
	inline float* get_address_of_m21_6() { return &___m21_6; }
	inline void set_m21_6(float value)
	{
		___m21_6 = value;
	}

	inline static int32_t get_offset_of_m31_7() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m31_7)); }
	inline float get_m31_7() const { return ___m31_7; }
	inline float* get_address_of_m31_7() { return &___m31_7; }
	inline void set_m31_7(float value)
	{
		___m31_7 = value;
	}

	inline static int32_t get_offset_of_m02_8() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m02_8)); }
	inline float get_m02_8() const { return ___m02_8; }
	inline float* get_address_of_m02_8() { return &___m02_8; }
	inline void set_m02_8(float value)
	{
		___m02_8 = value;
	}

	inline static int32_t get_offset_of_m12_9() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m12_9)); }
	inline float get_m12_9() const { return ___m12_9; }
	inline float* get_address_of_m12_9() { return &___m12_9; }
	inline void set_m12_9(float value)
	{
		___m12_9 = value;
	}

	inline static int32_t get_offset_of_m22_10() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m22_10)); }
	inline float get_m22_10() const { return ___m22_10; }
	inline float* get_address_of_m22_10() { return &___m22_10; }
	inline void set_m22_10(float value)
	{
		___m22_10 = value;
	}

	inline static int32_t get_offset_of_m32_11() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m32_11)); }
	inline float get_m32_11() const { return ___m32_11; }
	inline float* get_address_of_m32_11() { return &___m32_11; }
	inline void set_m32_11(float value)
	{
		___m32_11 = value;
	}

	inline static int32_t get_offset_of_m03_12() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m03_12)); }
	inline float get_m03_12() const { return ___m03_12; }
	inline float* get_address_of_m03_12() { return &___m03_12; }
	inline void set_m03_12(float value)
	{
		___m03_12 = value;
	}

	inline static int32_t get_offset_of_m13_13() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m13_13)); }
	inline float get_m13_13() const { return ___m13_13; }
	inline float* get_address_of_m13_13() { return &___m13_13; }
	inline void set_m13_13(float value)
	{
		___m13_13 = value;
	}

	inline static int32_t get_offset_of_m23_14() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m23_14)); }
	inline float get_m23_14() const { return ___m23_14; }
	inline float* get_address_of_m23_14() { return &___m23_14; }
	inline void set_m23_14(float value)
	{
		___m23_14 = value;
	}

	inline static int32_t get_offset_of_m33_15() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m33_15)); }
	inline float get_m33_15() const { return ___m33_15; }
	inline float* get_address_of_m33_15() { return &___m33_15; }
	inline void set_m33_15(float value)
	{
		___m33_15 = value;
	}
};

struct Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461_StaticFields
{
public:
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::zeroMatrix
	Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  ___zeroMatrix_16;
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::identityMatrix
	Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  ___identityMatrix_17;

public:
	inline static int32_t get_offset_of_zeroMatrix_16() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461_StaticFields, ___zeroMatrix_16)); }
	inline Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  get_zeroMatrix_16() const { return ___zeroMatrix_16; }
	inline Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 * get_address_of_zeroMatrix_16() { return &___zeroMatrix_16; }
	inline void set_zeroMatrix_16(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  value)
	{
		___zeroMatrix_16 = value;
	}

	inline static int32_t get_offset_of_identityMatrix_17() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461_StaticFields, ___identityMatrix_17)); }
	inline Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  get_identityMatrix_17() const { return ___identityMatrix_17; }
	inline Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 * get_address_of_identityMatrix_17() { return &___identityMatrix_17; }
	inline void set_identityMatrix_17(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  value)
	{
		___identityMatrix_17 = value;
	}
};


// UnityEngine.Quaternion
struct  Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 
{
public:
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}

	inline static int32_t get_offset_of_z_2() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___z_2)); }
	inline float get_z_2() const { return ___z_2; }
	inline float* get_address_of_z_2() { return &___z_2; }
	inline void set_z_2(float value)
	{
		___z_2 = value;
	}

	inline static int32_t get_offset_of_w_3() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___w_3)); }
	inline float get_w_3() const { return ___w_3; }
	inline float* get_address_of_w_3() { return &___w_3; }
	inline void set_w_3(float value)
	{
		___w_3 = value;
	}
};

struct Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_StaticFields
{
public:
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___identityQuaternion_4;

public:
	inline static int32_t get_offset_of_identityQuaternion_4() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_StaticFields, ___identityQuaternion_4)); }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  get_identityQuaternion_4() const { return ___identityQuaternion_4; }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * get_address_of_identityQuaternion_4() { return &___identityQuaternion_4; }
	inline void set_identityQuaternion_4(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  value)
	{
		___identityQuaternion_4 = value;
	}
};


// UnityEngine.SceneManagement.Scene
struct  Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE 
{
public:
	// System.Int32 UnityEngine.SceneManagement.Scene::m_Handle
	int32_t ___m_Handle_0;

public:
	inline static int32_t get_offset_of_m_Handle_0() { return static_cast<int32_t>(offsetof(Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE, ___m_Handle_0)); }
	inline int32_t get_m_Handle_0() const { return ___m_Handle_0; }
	inline int32_t* get_address_of_m_Handle_0() { return &___m_Handle_0; }
	inline void set_m_Handle_0(int32_t value)
	{
		___m_Handle_0 = value;
	}
};


// System.Single
struct  Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E, ___m_value_0)); }
	inline float get_m_value_0() const { return ___m_value_0; }
	inline float* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(float value)
	{
		___m_value_0 = value;
	}
};


// UnityEngine.XR.ARSubsystems.TrackableId
struct  TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B 
{
public:
	// System.UInt64 UnityEngine.XR.ARSubsystems.TrackableId::m_SubId1
	uint64_t ___m_SubId1_2;
	// System.UInt64 UnityEngine.XR.ARSubsystems.TrackableId::m_SubId2
	uint64_t ___m_SubId2_3;

public:
	inline static int32_t get_offset_of_m_SubId1_2() { return static_cast<int32_t>(offsetof(TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B, ___m_SubId1_2)); }
	inline uint64_t get_m_SubId1_2() const { return ___m_SubId1_2; }
	inline uint64_t* get_address_of_m_SubId1_2() { return &___m_SubId1_2; }
	inline void set_m_SubId1_2(uint64_t value)
	{
		___m_SubId1_2 = value;
	}

	inline static int32_t get_offset_of_m_SubId2_3() { return static_cast<int32_t>(offsetof(TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B, ___m_SubId2_3)); }
	inline uint64_t get_m_SubId2_3() const { return ___m_SubId2_3; }
	inline uint64_t* get_address_of_m_SubId2_3() { return &___m_SubId2_3; }
	inline void set_m_SubId2_3(uint64_t value)
	{
		___m_SubId2_3 = value;
	}
};

struct TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B_StaticFields
{
public:
	// System.Text.RegularExpressions.Regex UnityEngine.XR.ARSubsystems.TrackableId::s_TrackableIdRegex
	Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F * ___s_TrackableIdRegex_0;
	// UnityEngine.XR.ARSubsystems.TrackableId UnityEngine.XR.ARSubsystems.TrackableId::s_InvalidId
	TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  ___s_InvalidId_1;

public:
	inline static int32_t get_offset_of_s_TrackableIdRegex_0() { return static_cast<int32_t>(offsetof(TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B_StaticFields, ___s_TrackableIdRegex_0)); }
	inline Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F * get_s_TrackableIdRegex_0() const { return ___s_TrackableIdRegex_0; }
	inline Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F ** get_address_of_s_TrackableIdRegex_0() { return &___s_TrackableIdRegex_0; }
	inline void set_s_TrackableIdRegex_0(Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F * value)
	{
		___s_TrackableIdRegex_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_TrackableIdRegex_0), (void*)value);
	}

	inline static int32_t get_offset_of_s_InvalidId_1() { return static_cast<int32_t>(offsetof(TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B_StaticFields, ___s_InvalidId_1)); }
	inline TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  get_s_InvalidId_1() const { return ___s_InvalidId_1; }
	inline TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B * get_address_of_s_InvalidId_1() { return &___s_InvalidId_1; }
	inline void set_s_InvalidId_1(TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  value)
	{
		___s_InvalidId_1 = value;
	}
};


// UnityEngine.Vector2
struct  Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 
{
public:
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}
};

struct Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields
{
public:
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___negativeInfinityVector_9;

public:
	inline static int32_t get_offset_of_zeroVector_2() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___zeroVector_2)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_zeroVector_2() const { return ___zeroVector_2; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_zeroVector_2() { return &___zeroVector_2; }
	inline void set_zeroVector_2(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___zeroVector_2 = value;
	}

	inline static int32_t get_offset_of_oneVector_3() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___oneVector_3)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_oneVector_3() const { return ___oneVector_3; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_oneVector_3() { return &___oneVector_3; }
	inline void set_oneVector_3(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___oneVector_3 = value;
	}

	inline static int32_t get_offset_of_upVector_4() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___upVector_4)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_upVector_4() const { return ___upVector_4; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_upVector_4() { return &___upVector_4; }
	inline void set_upVector_4(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___upVector_4 = value;
	}

	inline static int32_t get_offset_of_downVector_5() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___downVector_5)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_downVector_5() const { return ___downVector_5; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_downVector_5() { return &___downVector_5; }
	inline void set_downVector_5(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___downVector_5 = value;
	}

	inline static int32_t get_offset_of_leftVector_6() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___leftVector_6)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_leftVector_6() const { return ___leftVector_6; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_leftVector_6() { return &___leftVector_6; }
	inline void set_leftVector_6(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___leftVector_6 = value;
	}

	inline static int32_t get_offset_of_rightVector_7() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___rightVector_7)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_rightVector_7() const { return ___rightVector_7; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_rightVector_7() { return &___rightVector_7; }
	inline void set_rightVector_7(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___rightVector_7 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___positiveInfinityVector_8)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_positiveInfinityVector_8() const { return ___positiveInfinityVector_8; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_positiveInfinityVector_8() { return &___positiveInfinityVector_8; }
	inline void set_positiveInfinityVector_8(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___positiveInfinityVector_8 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_9() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___negativeInfinityVector_9)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_negativeInfinityVector_9() const { return ___negativeInfinityVector_9; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_negativeInfinityVector_9() { return &___negativeInfinityVector_9; }
	inline void set_negativeInfinityVector_9(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___negativeInfinityVector_9 = value;
	}
};


// UnityEngine.Vector3
struct  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;

public:
	inline static int32_t get_offset_of_x_2() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___x_2)); }
	inline float get_x_2() const { return ___x_2; }
	inline float* get_address_of_x_2() { return &___x_2; }
	inline void set_x_2(float value)
	{
		___x_2 = value;
	}

	inline static int32_t get_offset_of_y_3() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___y_3)); }
	inline float get_y_3() const { return ___y_3; }
	inline float* get_address_of_y_3() { return &___y_3; }
	inline void set_y_3(float value)
	{
		___y_3 = value;
	}

	inline static int32_t get_offset_of_z_4() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___z_4)); }
	inline float get_z_4() const { return ___z_4; }
	inline float* get_address_of_z_4() { return &___z_4; }
	inline void set_z_4(float value)
	{
		___z_4 = value;
	}
};

struct Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___negativeInfinityVector_14;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___zeroVector_5)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___oneVector_6)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_upVector_7() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___upVector_7)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_upVector_7() const { return ___upVector_7; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_upVector_7() { return &___upVector_7; }
	inline void set_upVector_7(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___upVector_7 = value;
	}

	inline static int32_t get_offset_of_downVector_8() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___downVector_8)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_downVector_8() const { return ___downVector_8; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_downVector_8() { return &___downVector_8; }
	inline void set_downVector_8(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___downVector_8 = value;
	}

	inline static int32_t get_offset_of_leftVector_9() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___leftVector_9)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_leftVector_9() const { return ___leftVector_9; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_leftVector_9() { return &___leftVector_9; }
	inline void set_leftVector_9(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___leftVector_9 = value;
	}

	inline static int32_t get_offset_of_rightVector_10() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___rightVector_10)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_rightVector_10() const { return ___rightVector_10; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_rightVector_10() { return &___rightVector_10; }
	inline void set_rightVector_10(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___rightVector_10 = value;
	}

	inline static int32_t get_offset_of_forwardVector_11() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___forwardVector_11)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_forwardVector_11() const { return ___forwardVector_11; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_forwardVector_11() { return &___forwardVector_11; }
	inline void set_forwardVector_11(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___forwardVector_11 = value;
	}

	inline static int32_t get_offset_of_backVector_12() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___backVector_12)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_backVector_12() const { return ___backVector_12; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_backVector_12() { return &___backVector_12; }
	inline void set_backVector_12(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___backVector_12 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_13() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___positiveInfinityVector_13)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_positiveInfinityVector_13() const { return ___positiveInfinityVector_13; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_positiveInfinityVector_13() { return &___positiveInfinityVector_13; }
	inline void set_positiveInfinityVector_13(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___positiveInfinityVector_13 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_14() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___negativeInfinityVector_14)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_negativeInfinityVector_14() const { return ___negativeInfinityVector_14; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_negativeInfinityVector_14() { return &___negativeInfinityVector_14; }
	inline void set_negativeInfinityVector_14(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___negativeInfinityVector_14 = value;
	}
};


// UnityEngine.Vector4
struct  Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 
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
	inline static int32_t get_offset_of_x_1() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___x_1)); }
	inline float get_x_1() const { return ___x_1; }
	inline float* get_address_of_x_1() { return &___x_1; }
	inline void set_x_1(float value)
	{
		___x_1 = value;
	}

	inline static int32_t get_offset_of_y_2() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___y_2)); }
	inline float get_y_2() const { return ___y_2; }
	inline float* get_address_of_y_2() { return &___y_2; }
	inline void set_y_2(float value)
	{
		___y_2 = value;
	}

	inline static int32_t get_offset_of_z_3() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___z_3)); }
	inline float get_z_3() const { return ___z_3; }
	inline float* get_address_of_z_3() { return &___z_3; }
	inline void set_z_3(float value)
	{
		___z_3 = value;
	}

	inline static int32_t get_offset_of_w_4() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___w_4)); }
	inline float get_w_4() const { return ___w_4; }
	inline float* get_address_of_w_4() { return &___w_4; }
	inline void set_w_4(float value)
	{
		___w_4 = value;
	}
};

struct Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields
{
public:
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___zeroVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___oneVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___positiveInfinityVector_7;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___negativeInfinityVector_8;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___zeroVector_5)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___oneVector_6)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_7() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___positiveInfinityVector_7)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_positiveInfinityVector_7() const { return ___positiveInfinityVector_7; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_positiveInfinityVector_7() { return &___positiveInfinityVector_7; }
	inline void set_positiveInfinityVector_7(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___positiveInfinityVector_7 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___negativeInfinityVector_8)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_negativeInfinityVector_8() const { return ___negativeInfinityVector_8; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_negativeInfinityVector_8() { return &___negativeInfinityVector_8; }
	inline void set_negativeInfinityVector_8(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___negativeInfinityVector_8 = value;
	}
};


// System.Void
struct  Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5__padding[1];
	};

public:
};


// System.Reflection.BindingFlags
struct  BindingFlags_tAAAB07D9AC588F0D55D844E51D7035E96DF94733 
{
public:
	// System.Int32 System.Reflection.BindingFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(BindingFlags_tAAAB07D9AC588F0D55D844E51D7035E96DF94733, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Bounds
struct  Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37 
{
public:
	// UnityEngine.Vector3 UnityEngine.Bounds::m_Center
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_Center_0;
	// UnityEngine.Vector3 UnityEngine.Bounds::m_Extents
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_Extents_1;

public:
	inline static int32_t get_offset_of_m_Center_0() { return static_cast<int32_t>(offsetof(Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37, ___m_Center_0)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_Center_0() const { return ___m_Center_0; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_Center_0() { return &___m_Center_0; }
	inline void set_m_Center_0(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_Center_0 = value;
	}

	inline static int32_t get_offset_of_m_Extents_1() { return static_cast<int32_t>(offsetof(Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37, ___m_Extents_1)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_Extents_1() const { return ___m_Extents_1; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_Extents_1() { return &___m_Extents_1; }
	inline void set_m_Extents_1(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_Extents_1 = value;
	}
};


// UnityEngine.Rendering.BuiltinRenderTextureType
struct  BuiltinRenderTextureType_t89FFB8A7C9095150BCA40E573A73664CC37F023A 
{
public:
	// System.Int32 UnityEngine.Rendering.BuiltinRenderTextureType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(BuiltinRenderTextureType_t89FFB8A7C9095150BCA40E573A73664CC37F023A, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Rendering.CameraEvent
struct  CameraEvent_tFB94407637890549849BC824FA13432BA83CB520 
{
public:
	// System.Int32 UnityEngine.Rendering.CameraEvent::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(CameraEvent_tFB94407637890549849BC824FA13432BA83CB520, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Rendering.CommandBuffer
struct  CommandBuffer_t25CD231BD3E822660339DB7D0E8F8ED6B7DBEA29  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Rendering.CommandBuffer::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(CommandBuffer_t25CD231BD3E822660339DB7D0E8F8ED6B7DBEA29, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};


// UnityEngine.CubemapFace
struct  CubemapFace_t74FBCA71A21252C2E10E256E61FE0B1E09D7B9E5 
{
public:
	// System.Int32 UnityEngine.CubemapFace::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(CubemapFace_t74FBCA71A21252C2E10E256E61FE0B1E09D7B9E5, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
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
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
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
	inline DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * get_data_9() const { return ___data_9; }
	inline DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 ** get_address_of_data_9() { return &___data_9; }
	inline void set_data_9(DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * value)
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
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
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
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	int32_t ___method_is_virtual_10;
};

// Direction
struct  Direction_tCEF39FDEFD63F8D9A915DB77CECE987CE371677E 
{
public:
	// System.Int32 Direction::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Direction_tCEF39FDEFD63F8D9A915DB77CECE987CE371677E, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
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
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* ___native_trace_ips_15;

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
	inline SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * get__safeSerializationManager_13() const { return ____safeSerializationManager_13; }
	inline SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F ** get_address_of__safeSerializationManager_13() { return &____safeSerializationManager_13; }
	inline void set__safeSerializationManager_13(SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * value)
	{
		____safeSerializationManager_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____safeSerializationManager_13), (void*)value);
	}

	inline static int32_t get_offset_of_captured_traces_14() { return static_cast<int32_t>(offsetof(Exception_t, ___captured_traces_14)); }
	inline StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* get_captured_traces_14() const { return ___captured_traces_14; }
	inline StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971** get_address_of_captured_traces_14() { return &___captured_traces_14; }
	inline void set_captured_traces_14(StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* value)
	{
		___captured_traces_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___captured_traces_14), (void*)value);
	}

	inline static int32_t get_offset_of_native_trace_ips_15() { return static_cast<int32_t>(offsetof(Exception_t, ___native_trace_ips_15)); }
	inline IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* get_native_trace_ips_15() const { return ___native_trace_ips_15; }
	inline IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6** get_address_of_native_trace_ips_15() { return &___native_trace_ips_15; }
	inline void set_native_trace_ips_15(IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* value)
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
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
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
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
};

// UnityEngine.HideFlags
struct  HideFlags_tDC64149E37544FF83B2B4222D3E9DC8188766A12 
{
public:
	// System.Int32 UnityEngine.HideFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(HideFlags_tDC64149E37544FF83B2B4222D3E9DC8188766A12, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Newtonsoft.Json.Linq.JObject
struct  JObject_tD2FCDDA48CACDBCB702BAF49B7C649084F6FDA34  : public JContainer_t0393B6D5D1D1452D16BE67178D48155F148BCFC4
{
public:
	// Newtonsoft.Json.Linq.JPropertyKeyedCollection Newtonsoft.Json.Linq.JObject::_properties
	JPropertyKeyedCollection_t219F62CD15C1D6C625D656744FB107DDC5710E39 * ____properties_18;
	// System.ComponentModel.PropertyChangedEventHandler Newtonsoft.Json.Linq.JObject::PropertyChanged
	PropertyChangedEventHandler_t094CCD63C952DCD4E1ED794434160679C28A8E99 * ___PropertyChanged_19;
	// System.ComponentModel.PropertyChangingEventHandler Newtonsoft.Json.Linq.JObject::PropertyChanging
	PropertyChangingEventHandler_t31E1BA622DA161E68BB38F230BB5FE9551FB127B * ___PropertyChanging_20;

public:
	inline static int32_t get_offset_of__properties_18() { return static_cast<int32_t>(offsetof(JObject_tD2FCDDA48CACDBCB702BAF49B7C649084F6FDA34, ____properties_18)); }
	inline JPropertyKeyedCollection_t219F62CD15C1D6C625D656744FB107DDC5710E39 * get__properties_18() const { return ____properties_18; }
	inline JPropertyKeyedCollection_t219F62CD15C1D6C625D656744FB107DDC5710E39 ** get_address_of__properties_18() { return &____properties_18; }
	inline void set__properties_18(JPropertyKeyedCollection_t219F62CD15C1D6C625D656744FB107DDC5710E39 * value)
	{
		____properties_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____properties_18), (void*)value);
	}

	inline static int32_t get_offset_of_PropertyChanged_19() { return static_cast<int32_t>(offsetof(JObject_tD2FCDDA48CACDBCB702BAF49B7C649084F6FDA34, ___PropertyChanged_19)); }
	inline PropertyChangedEventHandler_t094CCD63C952DCD4E1ED794434160679C28A8E99 * get_PropertyChanged_19() const { return ___PropertyChanged_19; }
	inline PropertyChangedEventHandler_t094CCD63C952DCD4E1ED794434160679C28A8E99 ** get_address_of_PropertyChanged_19() { return &___PropertyChanged_19; }
	inline void set_PropertyChanged_19(PropertyChangedEventHandler_t094CCD63C952DCD4E1ED794434160679C28A8E99 * value)
	{
		___PropertyChanged_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___PropertyChanged_19), (void*)value);
	}

	inline static int32_t get_offset_of_PropertyChanging_20() { return static_cast<int32_t>(offsetof(JObject_tD2FCDDA48CACDBCB702BAF49B7C649084F6FDA34, ___PropertyChanging_20)); }
	inline PropertyChangingEventHandler_t31E1BA622DA161E68BB38F230BB5FE9551FB127B * get_PropertyChanging_20() const { return ___PropertyChanging_20; }
	inline PropertyChangingEventHandler_t31E1BA622DA161E68BB38F230BB5FE9551FB127B ** get_address_of_PropertyChanging_20() { return &___PropertyChanging_20; }
	inline void set_PropertyChanging_20(PropertyChangingEventHandler_t31E1BA622DA161E68BB38F230BB5FE9551FB127B * value)
	{
		___PropertyChanging_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___PropertyChanging_20), (void*)value);
	}
};


// UnityEngine.SceneManagement.LoadSceneMode
struct  LoadSceneMode_tF5060E18B71D524860ECBF7B9B56193B1907E5CC 
{
public:
	// System.Int32 UnityEngine.SceneManagement.LoadSceneMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(LoadSceneMode_tF5060E18B71D524860ECBF7B9B56193B1907E5CC, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Object
struct  Object_tF2F3778131EFF286AF62B7B013A170F95A91571A  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// UnityEngine.Pose
struct  Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A 
{
public:
	// UnityEngine.Vector3 UnityEngine.Pose::position
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position_0;
	// UnityEngine.Quaternion UnityEngine.Pose::rotation
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___rotation_1;

public:
	inline static int32_t get_offset_of_position_0() { return static_cast<int32_t>(offsetof(Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A, ___position_0)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_position_0() const { return ___position_0; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_position_0() { return &___position_0; }
	inline void set_position_0(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___position_0 = value;
	}

	inline static int32_t get_offset_of_rotation_1() { return static_cast<int32_t>(offsetof(Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A, ___rotation_1)); }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  get_rotation_1() const { return ___rotation_1; }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * get_address_of_rotation_1() { return &___rotation_1; }
	inline void set_rotation_1(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  value)
	{
		___rotation_1 = value;
	}
};

struct Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A_StaticFields
{
public:
	// UnityEngine.Pose UnityEngine.Pose::k_Identity
	Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  ___k_Identity_2;

public:
	inline static int32_t get_offset_of_k_Identity_2() { return static_cast<int32_t>(offsetof(Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A_StaticFields, ___k_Identity_2)); }
	inline Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  get_k_Identity_2() const { return ___k_Identity_2; }
	inline Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A * get_address_of_k_Identity_2() { return &___k_Identity_2; }
	inline void set_k_Identity_2(Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  value)
	{
		___k_Identity_2 = value;
	}
};


// UnityEngine.Ray
struct  Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6 
{
public:
	// UnityEngine.Vector3 UnityEngine.Ray::m_Origin
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_Origin_0;
	// UnityEngine.Vector3 UnityEngine.Ray::m_Direction
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_Direction_1;

public:
	inline static int32_t get_offset_of_m_Origin_0() { return static_cast<int32_t>(offsetof(Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6, ___m_Origin_0)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_Origin_0() const { return ___m_Origin_0; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_Origin_0() { return &___m_Origin_0; }
	inline void set_m_Origin_0(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_Origin_0 = value;
	}

	inline static int32_t get_offset_of_m_Direction_1() { return static_cast<int32_t>(offsetof(Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6, ___m_Direction_1)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_Direction_1() const { return ___m_Direction_1; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_Direction_1() { return &___m_Direction_1; }
	inline void set_m_Direction_1(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_Direction_1 = value;
	}
};


// UnityEngine.RaycastHit
struct  RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89 
{
public:
	// UnityEngine.Vector3 UnityEngine.RaycastHit::m_Point
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_Point_0;
	// UnityEngine.Vector3 UnityEngine.RaycastHit::m_Normal
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_Normal_1;
	// System.UInt32 UnityEngine.RaycastHit::m_FaceID
	uint32_t ___m_FaceID_2;
	// System.Single UnityEngine.RaycastHit::m_Distance
	float ___m_Distance_3;
	// UnityEngine.Vector2 UnityEngine.RaycastHit::m_UV
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___m_UV_4;
	// System.Int32 UnityEngine.RaycastHit::m_Collider
	int32_t ___m_Collider_5;

public:
	inline static int32_t get_offset_of_m_Point_0() { return static_cast<int32_t>(offsetof(RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89, ___m_Point_0)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_Point_0() const { return ___m_Point_0; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_Point_0() { return &___m_Point_0; }
	inline void set_m_Point_0(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_Point_0 = value;
	}

	inline static int32_t get_offset_of_m_Normal_1() { return static_cast<int32_t>(offsetof(RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89, ___m_Normal_1)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_Normal_1() const { return ___m_Normal_1; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_Normal_1() { return &___m_Normal_1; }
	inline void set_m_Normal_1(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_Normal_1 = value;
	}

	inline static int32_t get_offset_of_m_FaceID_2() { return static_cast<int32_t>(offsetof(RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89, ___m_FaceID_2)); }
	inline uint32_t get_m_FaceID_2() const { return ___m_FaceID_2; }
	inline uint32_t* get_address_of_m_FaceID_2() { return &___m_FaceID_2; }
	inline void set_m_FaceID_2(uint32_t value)
	{
		___m_FaceID_2 = value;
	}

	inline static int32_t get_offset_of_m_Distance_3() { return static_cast<int32_t>(offsetof(RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89, ___m_Distance_3)); }
	inline float get_m_Distance_3() const { return ___m_Distance_3; }
	inline float* get_address_of_m_Distance_3() { return &___m_Distance_3; }
	inline void set_m_Distance_3(float value)
	{
		___m_Distance_3 = value;
	}

	inline static int32_t get_offset_of_m_UV_4() { return static_cast<int32_t>(offsetof(RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89, ___m_UV_4)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_m_UV_4() const { return ___m_UV_4; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_m_UV_4() { return &___m_UV_4; }
	inline void set_m_UV_4(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___m_UV_4 = value;
	}

	inline static int32_t get_offset_of_m_Collider_5() { return static_cast<int32_t>(offsetof(RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89, ___m_Collider_5)); }
	inline int32_t get_m_Collider_5() const { return ___m_Collider_5; }
	inline int32_t* get_address_of_m_Collider_5() { return &___m_Collider_5; }
	inline void set_m_Collider_5(int32_t value)
	{
		___m_Collider_5 = value;
	}
};


// System.RuntimeTypeHandle
struct  RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 
{
public:
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9, ___value_0)); }
	inline intptr_t get_value_0() const { return ___value_0; }
	inline intptr_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(intptr_t value)
	{
		___value_0 = value;
	}
};


// UnityEngine.TouchPhase
struct  TouchPhase_tB52B8A497547FB9575DE7975D13AC7D64C3A958A 
{
public:
	// System.Int32 UnityEngine.TouchPhase::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TouchPhase_tB52B8A497547FB9575DE7975D13AC7D64C3A958A, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.TouchType
struct  TouchType_t2EF726465ABD45681A6686BAC426814AA087C20F 
{
public:
	// System.Int32 UnityEngine.TouchType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TouchType_t2EF726465ABD45681A6686BAC426814AA087C20F, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.XR.ARSubsystems.TrackableType
struct  TrackableType_t2352F7091A5BE0192C8D908019BA7481A347C85F 
{
public:
	// System.Int32 UnityEngine.XR.ARSubsystems.TrackableType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TrackableType_t2352F7091A5BE0192C8D908019BA7481A347C85F, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// TriggerAxis
struct  TriggerAxis_t6E709AFEF98E0B01388027468507CA996B97E862 
{
public:
	// System.Int32 TriggerAxis::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TriggerAxis_t6E709AFEF98E0B01388027468507CA996B97E862, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Component
struct  Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// UnityEngine.GameObject
struct  GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// UnityEngine.Material
struct  Material_t8927C00353A72755313F046D0CE85178AE8218EE  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// UnityEngine.Mesh
struct  Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// System.MulticastDelegate
struct  MulticastDelegate_t  : public Delegate_t
{
public:
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* ___delegates_11;

public:
	inline static int32_t get_offset_of_delegates_11() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___delegates_11)); }
	inline DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* get_delegates_11() const { return ___delegates_11; }
	inline DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8** get_address_of_delegates_11() { return &___delegates_11; }
	inline void set_delegates_11(DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* value)
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

// UnityEngine.Rendering.RenderTargetIdentifier
struct  RenderTargetIdentifier_t70F41F3016FFCC4AAF4D7C57F280818114534C13 
{
public:
	// UnityEngine.Rendering.BuiltinRenderTextureType UnityEngine.Rendering.RenderTargetIdentifier::m_Type
	int32_t ___m_Type_0;
	// System.Int32 UnityEngine.Rendering.RenderTargetIdentifier::m_NameID
	int32_t ___m_NameID_1;
	// System.Int32 UnityEngine.Rendering.RenderTargetIdentifier::m_InstanceID
	int32_t ___m_InstanceID_2;
	// System.IntPtr UnityEngine.Rendering.RenderTargetIdentifier::m_BufferPointer
	intptr_t ___m_BufferPointer_3;
	// System.Int32 UnityEngine.Rendering.RenderTargetIdentifier::m_MipLevel
	int32_t ___m_MipLevel_4;
	// UnityEngine.CubemapFace UnityEngine.Rendering.RenderTargetIdentifier::m_CubeFace
	int32_t ___m_CubeFace_5;
	// System.Int32 UnityEngine.Rendering.RenderTargetIdentifier::m_DepthSlice
	int32_t ___m_DepthSlice_6;

public:
	inline static int32_t get_offset_of_m_Type_0() { return static_cast<int32_t>(offsetof(RenderTargetIdentifier_t70F41F3016FFCC4AAF4D7C57F280818114534C13, ___m_Type_0)); }
	inline int32_t get_m_Type_0() const { return ___m_Type_0; }
	inline int32_t* get_address_of_m_Type_0() { return &___m_Type_0; }
	inline void set_m_Type_0(int32_t value)
	{
		___m_Type_0 = value;
	}

	inline static int32_t get_offset_of_m_NameID_1() { return static_cast<int32_t>(offsetof(RenderTargetIdentifier_t70F41F3016FFCC4AAF4D7C57F280818114534C13, ___m_NameID_1)); }
	inline int32_t get_m_NameID_1() const { return ___m_NameID_1; }
	inline int32_t* get_address_of_m_NameID_1() { return &___m_NameID_1; }
	inline void set_m_NameID_1(int32_t value)
	{
		___m_NameID_1 = value;
	}

	inline static int32_t get_offset_of_m_InstanceID_2() { return static_cast<int32_t>(offsetof(RenderTargetIdentifier_t70F41F3016FFCC4AAF4D7C57F280818114534C13, ___m_InstanceID_2)); }
	inline int32_t get_m_InstanceID_2() const { return ___m_InstanceID_2; }
	inline int32_t* get_address_of_m_InstanceID_2() { return &___m_InstanceID_2; }
	inline void set_m_InstanceID_2(int32_t value)
	{
		___m_InstanceID_2 = value;
	}

	inline static int32_t get_offset_of_m_BufferPointer_3() { return static_cast<int32_t>(offsetof(RenderTargetIdentifier_t70F41F3016FFCC4AAF4D7C57F280818114534C13, ___m_BufferPointer_3)); }
	inline intptr_t get_m_BufferPointer_3() const { return ___m_BufferPointer_3; }
	inline intptr_t* get_address_of_m_BufferPointer_3() { return &___m_BufferPointer_3; }
	inline void set_m_BufferPointer_3(intptr_t value)
	{
		___m_BufferPointer_3 = value;
	}

	inline static int32_t get_offset_of_m_MipLevel_4() { return static_cast<int32_t>(offsetof(RenderTargetIdentifier_t70F41F3016FFCC4AAF4D7C57F280818114534C13, ___m_MipLevel_4)); }
	inline int32_t get_m_MipLevel_4() const { return ___m_MipLevel_4; }
	inline int32_t* get_address_of_m_MipLevel_4() { return &___m_MipLevel_4; }
	inline void set_m_MipLevel_4(int32_t value)
	{
		___m_MipLevel_4 = value;
	}

	inline static int32_t get_offset_of_m_CubeFace_5() { return static_cast<int32_t>(offsetof(RenderTargetIdentifier_t70F41F3016FFCC4AAF4D7C57F280818114534C13, ___m_CubeFace_5)); }
	inline int32_t get_m_CubeFace_5() const { return ___m_CubeFace_5; }
	inline int32_t* get_address_of_m_CubeFace_5() { return &___m_CubeFace_5; }
	inline void set_m_CubeFace_5(int32_t value)
	{
		___m_CubeFace_5 = value;
	}

	inline static int32_t get_offset_of_m_DepthSlice_6() { return static_cast<int32_t>(offsetof(RenderTargetIdentifier_t70F41F3016FFCC4AAF4D7C57F280818114534C13, ___m_DepthSlice_6)); }
	inline int32_t get_m_DepthSlice_6() const { return ___m_DepthSlice_6; }
	inline int32_t* get_address_of_m_DepthSlice_6() { return &___m_DepthSlice_6; }
	inline void set_m_DepthSlice_6(int32_t value)
	{
		___m_DepthSlice_6 = value;
	}
};


// UnityEngine.Texture
struct  Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};

struct Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE_StaticFields
{
public:
	// System.Int32 UnityEngine.Texture::GenerateAllMips
	int32_t ___GenerateAllMips_4;

public:
	inline static int32_t get_offset_of_GenerateAllMips_4() { return static_cast<int32_t>(offsetof(Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE_StaticFields, ___GenerateAllMips_4)); }
	inline int32_t get_GenerateAllMips_4() const { return ___GenerateAllMips_4; }
	inline int32_t* get_address_of_GenerateAllMips_4() { return &___GenerateAllMips_4; }
	inline void set_GenerateAllMips_4(int32_t value)
	{
		___GenerateAllMips_4 = value;
	}
};


// UnityEngine.Touch
struct  Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C 
{
public:
	// System.Int32 UnityEngine.Touch::m_FingerId
	int32_t ___m_FingerId_0;
	// UnityEngine.Vector2 UnityEngine.Touch::m_Position
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___m_Position_1;
	// UnityEngine.Vector2 UnityEngine.Touch::m_RawPosition
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___m_RawPosition_2;
	// UnityEngine.Vector2 UnityEngine.Touch::m_PositionDelta
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___m_PositionDelta_3;
	// System.Single UnityEngine.Touch::m_TimeDelta
	float ___m_TimeDelta_4;
	// System.Int32 UnityEngine.Touch::m_TapCount
	int32_t ___m_TapCount_5;
	// UnityEngine.TouchPhase UnityEngine.Touch::m_Phase
	int32_t ___m_Phase_6;
	// UnityEngine.TouchType UnityEngine.Touch::m_Type
	int32_t ___m_Type_7;
	// System.Single UnityEngine.Touch::m_Pressure
	float ___m_Pressure_8;
	// System.Single UnityEngine.Touch::m_maximumPossiblePressure
	float ___m_maximumPossiblePressure_9;
	// System.Single UnityEngine.Touch::m_Radius
	float ___m_Radius_10;
	// System.Single UnityEngine.Touch::m_RadiusVariance
	float ___m_RadiusVariance_11;
	// System.Single UnityEngine.Touch::m_AltitudeAngle
	float ___m_AltitudeAngle_12;
	// System.Single UnityEngine.Touch::m_AzimuthAngle
	float ___m_AzimuthAngle_13;

public:
	inline static int32_t get_offset_of_m_FingerId_0() { return static_cast<int32_t>(offsetof(Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C, ___m_FingerId_0)); }
	inline int32_t get_m_FingerId_0() const { return ___m_FingerId_0; }
	inline int32_t* get_address_of_m_FingerId_0() { return &___m_FingerId_0; }
	inline void set_m_FingerId_0(int32_t value)
	{
		___m_FingerId_0 = value;
	}

	inline static int32_t get_offset_of_m_Position_1() { return static_cast<int32_t>(offsetof(Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C, ___m_Position_1)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_m_Position_1() const { return ___m_Position_1; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_m_Position_1() { return &___m_Position_1; }
	inline void set_m_Position_1(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___m_Position_1 = value;
	}

	inline static int32_t get_offset_of_m_RawPosition_2() { return static_cast<int32_t>(offsetof(Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C, ___m_RawPosition_2)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_m_RawPosition_2() const { return ___m_RawPosition_2; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_m_RawPosition_2() { return &___m_RawPosition_2; }
	inline void set_m_RawPosition_2(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___m_RawPosition_2 = value;
	}

	inline static int32_t get_offset_of_m_PositionDelta_3() { return static_cast<int32_t>(offsetof(Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C, ___m_PositionDelta_3)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_m_PositionDelta_3() const { return ___m_PositionDelta_3; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_m_PositionDelta_3() { return &___m_PositionDelta_3; }
	inline void set_m_PositionDelta_3(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___m_PositionDelta_3 = value;
	}

	inline static int32_t get_offset_of_m_TimeDelta_4() { return static_cast<int32_t>(offsetof(Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C, ___m_TimeDelta_4)); }
	inline float get_m_TimeDelta_4() const { return ___m_TimeDelta_4; }
	inline float* get_address_of_m_TimeDelta_4() { return &___m_TimeDelta_4; }
	inline void set_m_TimeDelta_4(float value)
	{
		___m_TimeDelta_4 = value;
	}

	inline static int32_t get_offset_of_m_TapCount_5() { return static_cast<int32_t>(offsetof(Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C, ___m_TapCount_5)); }
	inline int32_t get_m_TapCount_5() const { return ___m_TapCount_5; }
	inline int32_t* get_address_of_m_TapCount_5() { return &___m_TapCount_5; }
	inline void set_m_TapCount_5(int32_t value)
	{
		___m_TapCount_5 = value;
	}

	inline static int32_t get_offset_of_m_Phase_6() { return static_cast<int32_t>(offsetof(Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C, ___m_Phase_6)); }
	inline int32_t get_m_Phase_6() const { return ___m_Phase_6; }
	inline int32_t* get_address_of_m_Phase_6() { return &___m_Phase_6; }
	inline void set_m_Phase_6(int32_t value)
	{
		___m_Phase_6 = value;
	}

	inline static int32_t get_offset_of_m_Type_7() { return static_cast<int32_t>(offsetof(Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C, ___m_Type_7)); }
	inline int32_t get_m_Type_7() const { return ___m_Type_7; }
	inline int32_t* get_address_of_m_Type_7() { return &___m_Type_7; }
	inline void set_m_Type_7(int32_t value)
	{
		___m_Type_7 = value;
	}

	inline static int32_t get_offset_of_m_Pressure_8() { return static_cast<int32_t>(offsetof(Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C, ___m_Pressure_8)); }
	inline float get_m_Pressure_8() const { return ___m_Pressure_8; }
	inline float* get_address_of_m_Pressure_8() { return &___m_Pressure_8; }
	inline void set_m_Pressure_8(float value)
	{
		___m_Pressure_8 = value;
	}

	inline static int32_t get_offset_of_m_maximumPossiblePressure_9() { return static_cast<int32_t>(offsetof(Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C, ___m_maximumPossiblePressure_9)); }
	inline float get_m_maximumPossiblePressure_9() const { return ___m_maximumPossiblePressure_9; }
	inline float* get_address_of_m_maximumPossiblePressure_9() { return &___m_maximumPossiblePressure_9; }
	inline void set_m_maximumPossiblePressure_9(float value)
	{
		___m_maximumPossiblePressure_9 = value;
	}

	inline static int32_t get_offset_of_m_Radius_10() { return static_cast<int32_t>(offsetof(Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C, ___m_Radius_10)); }
	inline float get_m_Radius_10() const { return ___m_Radius_10; }
	inline float* get_address_of_m_Radius_10() { return &___m_Radius_10; }
	inline void set_m_Radius_10(float value)
	{
		___m_Radius_10 = value;
	}

	inline static int32_t get_offset_of_m_RadiusVariance_11() { return static_cast<int32_t>(offsetof(Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C, ___m_RadiusVariance_11)); }
	inline float get_m_RadiusVariance_11() const { return ___m_RadiusVariance_11; }
	inline float* get_address_of_m_RadiusVariance_11() { return &___m_RadiusVariance_11; }
	inline void set_m_RadiusVariance_11(float value)
	{
		___m_RadiusVariance_11 = value;
	}

	inline static int32_t get_offset_of_m_AltitudeAngle_12() { return static_cast<int32_t>(offsetof(Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C, ___m_AltitudeAngle_12)); }
	inline float get_m_AltitudeAngle_12() const { return ___m_AltitudeAngle_12; }
	inline float* get_address_of_m_AltitudeAngle_12() { return &___m_AltitudeAngle_12; }
	inline void set_m_AltitudeAngle_12(float value)
	{
		___m_AltitudeAngle_12 = value;
	}

	inline static int32_t get_offset_of_m_AzimuthAngle_13() { return static_cast<int32_t>(offsetof(Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C, ___m_AzimuthAngle_13)); }
	inline float get_m_AzimuthAngle_13() const { return ___m_AzimuthAngle_13; }
	inline float* get_address_of_m_AzimuthAngle_13() { return &___m_AzimuthAngle_13; }
	inline void set_m_AzimuthAngle_13(float value)
	{
		___m_AzimuthAngle_13 = value;
	}
};


// System.Type
struct  Type_t  : public MemberInfo_t
{
public:
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  ____impl_9;

public:
	inline static int32_t get_offset_of__impl_9() { return static_cast<int32_t>(offsetof(Type_t, ____impl_9)); }
	inline RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  get__impl_9() const { return ____impl_9; }
	inline RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 * get_address_of__impl_9() { return &____impl_9; }
	inline void set__impl_9(RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  value)
	{
		____impl_9 = value;
	}
};

struct Type_t_StaticFields
{
public:
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * ___FilterAttribute_0;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * ___FilterName_1;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * ___FilterNameIgnoreCase_2;
	// System.Object System.Type::Missing
	RuntimeObject * ___Missing_3;
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_4;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* ___EmptyTypes_5;
	// System.Reflection.Binder System.Type::defaultBinder
	Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 * ___defaultBinder_6;

public:
	inline static int32_t get_offset_of_FilterAttribute_0() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterAttribute_0)); }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * get_FilterAttribute_0() const { return ___FilterAttribute_0; }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 ** get_address_of_FilterAttribute_0() { return &___FilterAttribute_0; }
	inline void set_FilterAttribute_0(MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * value)
	{
		___FilterAttribute_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterAttribute_0), (void*)value);
	}

	inline static int32_t get_offset_of_FilterName_1() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterName_1)); }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * get_FilterName_1() const { return ___FilterName_1; }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 ** get_address_of_FilterName_1() { return &___FilterName_1; }
	inline void set_FilterName_1(MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * value)
	{
		___FilterName_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterName_1), (void*)value);
	}

	inline static int32_t get_offset_of_FilterNameIgnoreCase_2() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterNameIgnoreCase_2)); }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * get_FilterNameIgnoreCase_2() const { return ___FilterNameIgnoreCase_2; }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 ** get_address_of_FilterNameIgnoreCase_2() { return &___FilterNameIgnoreCase_2; }
	inline void set_FilterNameIgnoreCase_2(MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * value)
	{
		___FilterNameIgnoreCase_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterNameIgnoreCase_2), (void*)value);
	}

	inline static int32_t get_offset_of_Missing_3() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Missing_3)); }
	inline RuntimeObject * get_Missing_3() const { return ___Missing_3; }
	inline RuntimeObject ** get_address_of_Missing_3() { return &___Missing_3; }
	inline void set_Missing_3(RuntimeObject * value)
	{
		___Missing_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Missing_3), (void*)value);
	}

	inline static int32_t get_offset_of_Delimiter_4() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Delimiter_4)); }
	inline Il2CppChar get_Delimiter_4() const { return ___Delimiter_4; }
	inline Il2CppChar* get_address_of_Delimiter_4() { return &___Delimiter_4; }
	inline void set_Delimiter_4(Il2CppChar value)
	{
		___Delimiter_4 = value;
	}

	inline static int32_t get_offset_of_EmptyTypes_5() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___EmptyTypes_5)); }
	inline TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* get_EmptyTypes_5() const { return ___EmptyTypes_5; }
	inline TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755** get_address_of_EmptyTypes_5() { return &___EmptyTypes_5; }
	inline void set_EmptyTypes_5(TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* value)
	{
		___EmptyTypes_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___EmptyTypes_5), (void*)value);
	}

	inline static int32_t get_offset_of_defaultBinder_6() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___defaultBinder_6)); }
	inline Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 * get_defaultBinder_6() const { return ___defaultBinder_6; }
	inline Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 ** get_address_of_defaultBinder_6() { return &___defaultBinder_6; }
	inline void set_defaultBinder_6(Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 * value)
	{
		___defaultBinder_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___defaultBinder_6), (void*)value);
	}
};


// UnityEngine.XR.ARSubsystems.XRRaycastHit
struct  XRRaycastHit_t94A3D13B245A9D0A7A7F2D0919DCAAC7C8DF8DDB 
{
public:
	// UnityEngine.XR.ARSubsystems.TrackableId UnityEngine.XR.ARSubsystems.XRRaycastHit::m_TrackableId
	TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  ___m_TrackableId_1;
	// UnityEngine.Pose UnityEngine.XR.ARSubsystems.XRRaycastHit::m_Pose
	Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  ___m_Pose_2;
	// System.Single UnityEngine.XR.ARSubsystems.XRRaycastHit::m_Distance
	float ___m_Distance_3;
	// UnityEngine.XR.ARSubsystems.TrackableType UnityEngine.XR.ARSubsystems.XRRaycastHit::m_HitType
	int32_t ___m_HitType_4;

public:
	inline static int32_t get_offset_of_m_TrackableId_1() { return static_cast<int32_t>(offsetof(XRRaycastHit_t94A3D13B245A9D0A7A7F2D0919DCAAC7C8DF8DDB, ___m_TrackableId_1)); }
	inline TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  get_m_TrackableId_1() const { return ___m_TrackableId_1; }
	inline TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B * get_address_of_m_TrackableId_1() { return &___m_TrackableId_1; }
	inline void set_m_TrackableId_1(TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  value)
	{
		___m_TrackableId_1 = value;
	}

	inline static int32_t get_offset_of_m_Pose_2() { return static_cast<int32_t>(offsetof(XRRaycastHit_t94A3D13B245A9D0A7A7F2D0919DCAAC7C8DF8DDB, ___m_Pose_2)); }
	inline Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  get_m_Pose_2() const { return ___m_Pose_2; }
	inline Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A * get_address_of_m_Pose_2() { return &___m_Pose_2; }
	inline void set_m_Pose_2(Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  value)
	{
		___m_Pose_2 = value;
	}

	inline static int32_t get_offset_of_m_Distance_3() { return static_cast<int32_t>(offsetof(XRRaycastHit_t94A3D13B245A9D0A7A7F2D0919DCAAC7C8DF8DDB, ___m_Distance_3)); }
	inline float get_m_Distance_3() const { return ___m_Distance_3; }
	inline float* get_address_of_m_Distance_3() { return &___m_Distance_3; }
	inline void set_m_Distance_3(float value)
	{
		___m_Distance_3 = value;
	}

	inline static int32_t get_offset_of_m_HitType_4() { return static_cast<int32_t>(offsetof(XRRaycastHit_t94A3D13B245A9D0A7A7F2D0919DCAAC7C8DF8DDB, ___m_HitType_4)); }
	inline int32_t get_m_HitType_4() const { return ___m_HitType_4; }
	inline int32_t* get_address_of_m_HitType_4() { return &___m_HitType_4; }
	inline void set_m_HitType_4(int32_t value)
	{
		___m_HitType_4 = value;
	}
};

struct XRRaycastHit_t94A3D13B245A9D0A7A7F2D0919DCAAC7C8DF8DDB_StaticFields
{
public:
	// UnityEngine.XR.ARSubsystems.XRRaycastHit UnityEngine.XR.ARSubsystems.XRRaycastHit::s_Default
	XRRaycastHit_t94A3D13B245A9D0A7A7F2D0919DCAAC7C8DF8DDB  ___s_Default_0;

public:
	inline static int32_t get_offset_of_s_Default_0() { return static_cast<int32_t>(offsetof(XRRaycastHit_t94A3D13B245A9D0A7A7F2D0919DCAAC7C8DF8DDB_StaticFields, ___s_Default_0)); }
	inline XRRaycastHit_t94A3D13B245A9D0A7A7F2D0919DCAAC7C8DF8DDB  get_s_Default_0() const { return ___s_Default_0; }
	inline XRRaycastHit_t94A3D13B245A9D0A7A7F2D0919DCAAC7C8DF8DDB * get_address_of_s_Default_0() { return &___s_Default_0; }
	inline void set_s_Default_0(XRRaycastHit_t94A3D13B245A9D0A7A7F2D0919DCAAC7C8DF8DDB  value)
	{
		___s_Default_0 = value;
	}
};


// System.Action`1<System.Object>
struct  Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Events.UnityAction`2<UnityEngine.SceneManagement.Scene,UnityEngine.SceneManagement.LoadSceneMode>
struct  UnityAction_2_tDEF0DD47461C853F98CD2FF3CEC4F5EE13A19906  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.XR.ARFoundation.ARRaycastHit
struct  ARRaycastHit_t2B16118C3B5F17B237335D69B1CA9C27474B621E 
{
public:
	// System.Single UnityEngine.XR.ARFoundation.ARRaycastHit::<distance>k__BackingField
	float ___U3CdistanceU3Ek__BackingField_0;
	// UnityEngine.XR.ARSubsystems.XRRaycastHit UnityEngine.XR.ARFoundation.ARRaycastHit::m_Hit
	XRRaycastHit_t94A3D13B245A9D0A7A7F2D0919DCAAC7C8DF8DDB  ___m_Hit_1;
	// UnityEngine.Transform UnityEngine.XR.ARFoundation.ARRaycastHit::m_Transform
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___m_Transform_2;

public:
	inline static int32_t get_offset_of_U3CdistanceU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(ARRaycastHit_t2B16118C3B5F17B237335D69B1CA9C27474B621E, ___U3CdistanceU3Ek__BackingField_0)); }
	inline float get_U3CdistanceU3Ek__BackingField_0() const { return ___U3CdistanceU3Ek__BackingField_0; }
	inline float* get_address_of_U3CdistanceU3Ek__BackingField_0() { return &___U3CdistanceU3Ek__BackingField_0; }
	inline void set_U3CdistanceU3Ek__BackingField_0(float value)
	{
		___U3CdistanceU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_m_Hit_1() { return static_cast<int32_t>(offsetof(ARRaycastHit_t2B16118C3B5F17B237335D69B1CA9C27474B621E, ___m_Hit_1)); }
	inline XRRaycastHit_t94A3D13B245A9D0A7A7F2D0919DCAAC7C8DF8DDB  get_m_Hit_1() const { return ___m_Hit_1; }
	inline XRRaycastHit_t94A3D13B245A9D0A7A7F2D0919DCAAC7C8DF8DDB * get_address_of_m_Hit_1() { return &___m_Hit_1; }
	inline void set_m_Hit_1(XRRaycastHit_t94A3D13B245A9D0A7A7F2D0919DCAAC7C8DF8DDB  value)
	{
		___m_Hit_1 = value;
	}

	inline static int32_t get_offset_of_m_Transform_2() { return static_cast<int32_t>(offsetof(ARRaycastHit_t2B16118C3B5F17B237335D69B1CA9C27474B621E, ___m_Transform_2)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_m_Transform_2() const { return ___m_Transform_2; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_m_Transform_2() { return &___m_Transform_2; }
	inline void set_m_Transform_2(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___m_Transform_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Transform_2), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.XR.ARFoundation.ARRaycastHit
struct ARRaycastHit_t2B16118C3B5F17B237335D69B1CA9C27474B621E_marshaled_pinvoke
{
	float ___U3CdistanceU3Ek__BackingField_0;
	XRRaycastHit_t94A3D13B245A9D0A7A7F2D0919DCAAC7C8DF8DDB  ___m_Hit_1;
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___m_Transform_2;
};
// Native definition for COM marshalling of UnityEngine.XR.ARFoundation.ARRaycastHit
struct ARRaycastHit_t2B16118C3B5F17B237335D69B1CA9C27474B621E_marshaled_com
{
	float ___U3CdistanceU3Ek__BackingField_0;
	XRRaycastHit_t94A3D13B245A9D0A7A7F2D0919DCAAC7C8DF8DDB  ___m_Hit_1;
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___m_Transform_2;
};

// System.AsyncCallback
struct  AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Behaviour
struct  Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.Collider
struct  Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.Joint
struct  Joint_t085126F36196FC982700F4EA8466CF10C90EC15E  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.MeshFilter
struct  MeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.RenderTexture
struct  RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849  : public Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE
{
public:

public:
};


// UnityEngine.Renderer
struct  Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.Rigidbody
struct  Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.Transform
struct  Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityMessageManager/MessageDelegate
struct  MessageDelegate_tDCF734AA37209CBABC24AB82639DC96812A92CD9  : public MulticastDelegate_t
{
public:

public:
};


// UnityMessageManager/MessageHandlerDelegate
struct  MessageHandlerDelegate_tC9B2C089EAB4A237AFE9F84E05D5D7B196643F28  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.AudioBehaviour
struct  AudioBehaviour_tB44966D47AD43C50C7294AEE9B57574E55AACA4A  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// UnityEngine.Camera
struct  Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};

struct Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_StaticFields
{
public:
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreCull
	CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * ___onPreCull_4;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreRender
	CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * ___onPreRender_5;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPostRender
	CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * ___onPostRender_6;

public:
	inline static int32_t get_offset_of_onPreCull_4() { return static_cast<int32_t>(offsetof(Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_StaticFields, ___onPreCull_4)); }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * get_onPreCull_4() const { return ___onPreCull_4; }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D ** get_address_of_onPreCull_4() { return &___onPreCull_4; }
	inline void set_onPreCull_4(CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * value)
	{
		___onPreCull_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPreCull_4), (void*)value);
	}

	inline static int32_t get_offset_of_onPreRender_5() { return static_cast<int32_t>(offsetof(Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_StaticFields, ___onPreRender_5)); }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * get_onPreRender_5() const { return ___onPreRender_5; }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D ** get_address_of_onPreRender_5() { return &___onPreRender_5; }
	inline void set_onPreRender_5(CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * value)
	{
		___onPreRender_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPreRender_5), (void*)value);
	}

	inline static int32_t get_offset_of_onPostRender_6() { return static_cast<int32_t>(offsetof(Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_StaticFields, ___onPostRender_6)); }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * get_onPostRender_6() const { return ___onPostRender_6; }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D ** get_address_of_onPostRender_6() { return &___onPostRender_6; }
	inline void set_onPostRender_6(CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * value)
	{
		___onPostRender_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPostRender_6), (void*)value);
	}
};


// UnityEngine.CharacterController
struct  CharacterController_tCCF68621C784CCB3391E0C66FE134F6F93DD6C2E  : public Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02
{
public:

public:
};


// UnityEngine.FixedJoint
struct  FixedJoint_tB98C66DD49AFBAB1114A59E8132EB2498C540B09  : public Joint_t085126F36196FC982700F4EA8466CF10C90EC15E
{
public:

public:
};


// UnityEngine.FlareLayer
struct  FlareLayer_t0E96E3DA6EDBA0626F2322F17A594D4E5E34FBB6  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// UnityEngine.Light
struct  Light_tA2F349FE839781469A0344CF6039B51512394275  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:
	// System.Int32 UnityEngine.Light::m_BakedIndex
	int32_t ___m_BakedIndex_4;

public:
	inline static int32_t get_offset_of_m_BakedIndex_4() { return static_cast<int32_t>(offsetof(Light_tA2F349FE839781469A0344CF6039B51512394275, ___m_BakedIndex_4)); }
	inline int32_t get_m_BakedIndex_4() const { return ___m_BakedIndex_4; }
	inline int32_t* get_address_of_m_BakedIndex_4() { return &___m_BakedIndex_4; }
	inline void set_m_BakedIndex_4(int32_t value)
	{
		___m_BakedIndex_4 = value;
	}
};


// UnityEngine.MeshRenderer
struct  MeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B  : public Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C
{
public:

public:
};


// UnityEngine.MonoBehaviour
struct  MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// UnityEngine.Skybox
struct  Skybox_t8B0EA7C092363DBCCF0B51434F04E7EE661E28E0  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// SingletonMonoBehaviour`1<UnityMessageManager>
struct  SingletonMonoBehaviour_1_tCE345733DAFD7C69997F22704982E2372C4BFCDD  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};

struct SingletonMonoBehaviour_1_tCE345733DAFD7C69997F22704982E2372C4BFCDD_StaticFields
{
public:
	// System.Lazy`1<T> SingletonMonoBehaviour`1::LazyInstance
	Lazy_1_t1F6F28AE3A12C39616C210625F3C610F09E23E0D * ___LazyInstance_4;

public:
	inline static int32_t get_offset_of_LazyInstance_4() { return static_cast<int32_t>(offsetof(SingletonMonoBehaviour_1_tCE345733DAFD7C69997F22704982E2372C4BFCDD_StaticFields, ___LazyInstance_4)); }
	inline Lazy_1_t1F6F28AE3A12C39616C210625F3C610F09E23E0D * get_LazyInstance_4() const { return ___LazyInstance_4; }
	inline Lazy_1_t1F6F28AE3A12C39616C210625F3C610F09E23E0D ** get_address_of_LazyInstance_4() { return &___LazyInstance_4; }
	inline void set_LazyInstance_4(Lazy_1_t1F6F28AE3A12C39616C210625F3C610F09E23E0D * value)
	{
		___LazyInstance_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___LazyInstance_4), (void*)value);
	}
};


// UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3<UnityEngine.XR.ARSubsystems.XRRaycastSubsystem,UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor,UnityEngine.XR.ARSubsystems.XRRaycastSubsystem/Provider>
struct  SubsystemLifecycleManager_3_t0541A12A544D670B641A4F64D8959D69726CCB6D  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// TSubsystem UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3::<subsystem>k__BackingField
	XRRaycastSubsystem_t62FDAC9AA1BD44C4557AEE3FEF3D2FA24C71B6B8 * ___U3CsubsystemU3Ek__BackingField_4;

public:
	inline static int32_t get_offset_of_U3CsubsystemU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(SubsystemLifecycleManager_3_t0541A12A544D670B641A4F64D8959D69726CCB6D, ___U3CsubsystemU3Ek__BackingField_4)); }
	inline XRRaycastSubsystem_t62FDAC9AA1BD44C4557AEE3FEF3D2FA24C71B6B8 * get_U3CsubsystemU3Ek__BackingField_4() const { return ___U3CsubsystemU3Ek__BackingField_4; }
	inline XRRaycastSubsystem_t62FDAC9AA1BD44C4557AEE3FEF3D2FA24C71B6B8 ** get_address_of_U3CsubsystemU3Ek__BackingField_4() { return &___U3CsubsystemU3Ek__BackingField_4; }
	inline void set_U3CsubsystemU3Ek__BackingField_4(XRRaycastSubsystem_t62FDAC9AA1BD44C4557AEE3FEF3D2FA24C71B6B8 * value)
	{
		___U3CsubsystemU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CsubsystemU3Ek__BackingField_4), (void*)value);
	}
};

struct SubsystemLifecycleManager_3_t0541A12A544D670B641A4F64D8959D69726CCB6D_StaticFields
{
public:
	// System.Collections.Generic.List`1<TSubsystemDescriptor> UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3::s_SubsystemDescriptors
	List_1_tAE84735071B78277703DB9996DE2E5C4456317C5 * ___s_SubsystemDescriptors_5;
	// System.Collections.Generic.List`1<TSubsystem> UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3::s_SubsystemInstances
	List_1_t72B11B1FEAB79314490A07F58F757646DADED2C1 * ___s_SubsystemInstances_6;

public:
	inline static int32_t get_offset_of_s_SubsystemDescriptors_5() { return static_cast<int32_t>(offsetof(SubsystemLifecycleManager_3_t0541A12A544D670B641A4F64D8959D69726CCB6D_StaticFields, ___s_SubsystemDescriptors_5)); }
	inline List_1_tAE84735071B78277703DB9996DE2E5C4456317C5 * get_s_SubsystemDescriptors_5() const { return ___s_SubsystemDescriptors_5; }
	inline List_1_tAE84735071B78277703DB9996DE2E5C4456317C5 ** get_address_of_s_SubsystemDescriptors_5() { return &___s_SubsystemDescriptors_5; }
	inline void set_s_SubsystemDescriptors_5(List_1_tAE84735071B78277703DB9996DE2E5C4456317C5 * value)
	{
		___s_SubsystemDescriptors_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_SubsystemDescriptors_5), (void*)value);
	}

	inline static int32_t get_offset_of_s_SubsystemInstances_6() { return static_cast<int32_t>(offsetof(SubsystemLifecycleManager_3_t0541A12A544D670B641A4F64D8959D69726CCB6D_StaticFields, ___s_SubsystemInstances_6)); }
	inline List_1_t72B11B1FEAB79314490A07F58F757646DADED2C1 * get_s_SubsystemInstances_6() const { return ___s_SubsystemInstances_6; }
	inline List_1_t72B11B1FEAB79314490A07F58F757646DADED2C1 ** get_address_of_s_SubsystemInstances_6() { return &___s_SubsystemInstances_6; }
	inline void set_s_SubsystemInstances_6(List_1_t72B11B1FEAB79314490A07F58F757646DADED2C1 * value)
	{
		___s_SubsystemInstances_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_SubsystemInstances_6), (void*)value);
	}
};


// ARCusor
struct  ARCusor_t203938EAE3094278392B0B5F4A9DBA22B5216F2B  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.GameObject ARCusor::cursorChildObject
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___cursorChildObject_4;
	// UnityEngine.GameObject ARCusor::objectToPlace
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___objectToPlace_5;
	// UnityEngine.XR.ARFoundation.ARRaycastManager ARCusor::raycastManager
	ARRaycastManager_t76CDCF27810673048562A85CAD0E3FEEB3D7328F * ___raycastManager_6;
	// UnityEngine.GameObject ARCusor::room
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___room_7;
	// System.Boolean ARCusor::useCursor
	bool ___useCursor_8;

public:
	inline static int32_t get_offset_of_cursorChildObject_4() { return static_cast<int32_t>(offsetof(ARCusor_t203938EAE3094278392B0B5F4A9DBA22B5216F2B, ___cursorChildObject_4)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_cursorChildObject_4() const { return ___cursorChildObject_4; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_cursorChildObject_4() { return &___cursorChildObject_4; }
	inline void set_cursorChildObject_4(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___cursorChildObject_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___cursorChildObject_4), (void*)value);
	}

	inline static int32_t get_offset_of_objectToPlace_5() { return static_cast<int32_t>(offsetof(ARCusor_t203938EAE3094278392B0B5F4A9DBA22B5216F2B, ___objectToPlace_5)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_objectToPlace_5() const { return ___objectToPlace_5; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_objectToPlace_5() { return &___objectToPlace_5; }
	inline void set_objectToPlace_5(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___objectToPlace_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___objectToPlace_5), (void*)value);
	}

	inline static int32_t get_offset_of_raycastManager_6() { return static_cast<int32_t>(offsetof(ARCusor_t203938EAE3094278392B0B5F4A9DBA22B5216F2B, ___raycastManager_6)); }
	inline ARRaycastManager_t76CDCF27810673048562A85CAD0E3FEEB3D7328F * get_raycastManager_6() const { return ___raycastManager_6; }
	inline ARRaycastManager_t76CDCF27810673048562A85CAD0E3FEEB3D7328F ** get_address_of_raycastManager_6() { return &___raycastManager_6; }
	inline void set_raycastManager_6(ARRaycastManager_t76CDCF27810673048562A85CAD0E3FEEB3D7328F * value)
	{
		___raycastManager_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___raycastManager_6), (void*)value);
	}

	inline static int32_t get_offset_of_room_7() { return static_cast<int32_t>(offsetof(ARCusor_t203938EAE3094278392B0B5F4A9DBA22B5216F2B, ___room_7)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_room_7() const { return ___room_7; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_room_7() { return &___room_7; }
	inline void set_room_7(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___room_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___room_7), (void*)value);
	}

	inline static int32_t get_offset_of_useCursor_8() { return static_cast<int32_t>(offsetof(ARCusor_t203938EAE3094278392B0B5F4A9DBA22B5216F2B, ___useCursor_8)); }
	inline bool get_useCursor_8() const { return ___useCursor_8; }
	inline bool* get_address_of_useCursor_8() { return &___useCursor_8; }
	inline void set_useCursor_8(bool value)
	{
		___useCursor_8 = value;
	}
};


// ARFoundationPlacement
struct  ARFoundationPlacement_t42AB2E6C3A2959C49F485A88D07D70DC25C6D69D  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// ARKitCameraRender
struct  ARKitCameraRender_t22DD82E196622777058CEA91BF2C1BAA2477CF98  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.Material ARKitCameraRender::m_ClearMaterial
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___m_ClearMaterial_4;
	// UnityEngine.Rendering.CommandBuffer ARKitCameraRender::m_VideoCommandBuffer
	CommandBuffer_t25CD231BD3E822660339DB7D0E8F8ED6B7DBEA29 * ___m_VideoCommandBuffer_5;
	// System.Boolean ARKitCameraRender::bCommandBufferInitialized
	bool ___bCommandBufferInitialized_6;

public:
	inline static int32_t get_offset_of_m_ClearMaterial_4() { return static_cast<int32_t>(offsetof(ARKitCameraRender_t22DD82E196622777058CEA91BF2C1BAA2477CF98, ___m_ClearMaterial_4)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_m_ClearMaterial_4() const { return ___m_ClearMaterial_4; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_m_ClearMaterial_4() { return &___m_ClearMaterial_4; }
	inline void set_m_ClearMaterial_4(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___m_ClearMaterial_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ClearMaterial_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_VideoCommandBuffer_5() { return static_cast<int32_t>(offsetof(ARKitCameraRender_t22DD82E196622777058CEA91BF2C1BAA2477CF98, ___m_VideoCommandBuffer_5)); }
	inline CommandBuffer_t25CD231BD3E822660339DB7D0E8F8ED6B7DBEA29 * get_m_VideoCommandBuffer_5() const { return ___m_VideoCommandBuffer_5; }
	inline CommandBuffer_t25CD231BD3E822660339DB7D0E8F8ED6B7DBEA29 ** get_address_of_m_VideoCommandBuffer_5() { return &___m_VideoCommandBuffer_5; }
	inline void set_m_VideoCommandBuffer_5(CommandBuffer_t25CD231BD3E822660339DB7D0E8F8ED6B7DBEA29 * value)
	{
		___m_VideoCommandBuffer_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_VideoCommandBuffer_5), (void*)value);
	}

	inline static int32_t get_offset_of_bCommandBufferInitialized_6() { return static_cast<int32_t>(offsetof(ARKitCameraRender_t22DD82E196622777058CEA91BF2C1BAA2477CF98, ___bCommandBufferInitialized_6)); }
	inline bool get_bCommandBufferInitialized_6() const { return ___bCommandBufferInitialized_6; }
	inline bool* get_address_of_bCommandBufferInitialized_6() { return &___bCommandBufferInitialized_6; }
	inline void set_bCommandBufferInitialized_6(bool value)
	{
		___bCommandBufferInitialized_6 = value;
	}
};


// ARKitPlacement
struct  ARKitPlacement_t39ADD720222BF9CE429246849A9E7D673C3A1D0A  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.Transform ARKitPlacement::m_HitTransform
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___m_HitTransform_4;

public:
	inline static int32_t get_offset_of_m_HitTransform_4() { return static_cast<int32_t>(offsetof(ARKitPlacement_t39ADD720222BF9CE429246849A9E7D673C3A1D0A, ___m_HitTransform_4)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_m_HitTransform_4() const { return ___m_HitTransform_4; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_m_HitTransform_4() { return &___m_HitTransform_4; }
	inline void set_m_HitTransform_4(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___m_HitTransform_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_HitTransform_4), (void*)value);
	}
};


// UnityEngine.AudioListener
struct  AudioListener_t03B51B434A263F9AFD07AC8AA5CB4FE6402252A3  : public AudioBehaviour_tB44966D47AD43C50C7294AEE9B57574E55AACA4A
{
public:

public:
};


// ControllerGrabObject
struct  ControllerGrabObject_tD8EC56C9C71EAC95FD692C2D16CA944AF071DD4E  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.GameObject ControllerGrabObject::collidingObject
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___collidingObject_4;
	// UnityEngine.GameObject ControllerGrabObject::objectInHand
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___objectInHand_5;

public:
	inline static int32_t get_offset_of_collidingObject_4() { return static_cast<int32_t>(offsetof(ControllerGrabObject_tD8EC56C9C71EAC95FD692C2D16CA944AF071DD4E, ___collidingObject_4)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_collidingObject_4() const { return ___collidingObject_4; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_collidingObject_4() { return &___collidingObject_4; }
	inline void set_collidingObject_4(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___collidingObject_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___collidingObject_4), (void*)value);
	}

	inline static int32_t get_offset_of_objectInHand_5() { return static_cast<int32_t>(offsetof(ControllerGrabObject_tD8EC56C9C71EAC95FD692C2D16CA944AF071DD4E, ___objectInHand_5)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_objectInHand_5() const { return ___objectInHand_5; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_objectInHand_5() { return &___objectInHand_5; }
	inline void set_objectInHand_5(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___objectInHand_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___objectInHand_5), (void*)value);
	}
};


// Dimension
struct  Dimension_t28D074E7D31C414382BEB891CF77CF6345E04C34  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.Material Dimension::customSkybox
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___customSkybox_4;
	// System.Int32 Dimension::layer
	int32_t ___layer_5;
	// System.Boolean Dimension::initialWorld
	bool ___initialWorld_6;
	// System.Boolean Dimension::forceKeepInitialLayers
	bool ___forceKeepInitialLayers_7;
	// System.Collections.Generic.List`1<Portal> Dimension::connectedPortals
	List_1_tF98B6D846565344249C79E895B9E3BF385EA519E * ___connectedPortals_8;
	// UnityEngine.Camera Dimension::cam
	Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * ___cam_9;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32> Dimension::layerSwitchedChildren
	Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 * ___layerSwitchedChildren_10;
	// System.Boolean Dimension::mainCameraNeedsSetup
	bool ___mainCameraNeedsSetup_11;

public:
	inline static int32_t get_offset_of_customSkybox_4() { return static_cast<int32_t>(offsetof(Dimension_t28D074E7D31C414382BEB891CF77CF6345E04C34, ___customSkybox_4)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_customSkybox_4() const { return ___customSkybox_4; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_customSkybox_4() { return &___customSkybox_4; }
	inline void set_customSkybox_4(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___customSkybox_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___customSkybox_4), (void*)value);
	}

	inline static int32_t get_offset_of_layer_5() { return static_cast<int32_t>(offsetof(Dimension_t28D074E7D31C414382BEB891CF77CF6345E04C34, ___layer_5)); }
	inline int32_t get_layer_5() const { return ___layer_5; }
	inline int32_t* get_address_of_layer_5() { return &___layer_5; }
	inline void set_layer_5(int32_t value)
	{
		___layer_5 = value;
	}

	inline static int32_t get_offset_of_initialWorld_6() { return static_cast<int32_t>(offsetof(Dimension_t28D074E7D31C414382BEB891CF77CF6345E04C34, ___initialWorld_6)); }
	inline bool get_initialWorld_6() const { return ___initialWorld_6; }
	inline bool* get_address_of_initialWorld_6() { return &___initialWorld_6; }
	inline void set_initialWorld_6(bool value)
	{
		___initialWorld_6 = value;
	}

	inline static int32_t get_offset_of_forceKeepInitialLayers_7() { return static_cast<int32_t>(offsetof(Dimension_t28D074E7D31C414382BEB891CF77CF6345E04C34, ___forceKeepInitialLayers_7)); }
	inline bool get_forceKeepInitialLayers_7() const { return ___forceKeepInitialLayers_7; }
	inline bool* get_address_of_forceKeepInitialLayers_7() { return &___forceKeepInitialLayers_7; }
	inline void set_forceKeepInitialLayers_7(bool value)
	{
		___forceKeepInitialLayers_7 = value;
	}

	inline static int32_t get_offset_of_connectedPortals_8() { return static_cast<int32_t>(offsetof(Dimension_t28D074E7D31C414382BEB891CF77CF6345E04C34, ___connectedPortals_8)); }
	inline List_1_tF98B6D846565344249C79E895B9E3BF385EA519E * get_connectedPortals_8() const { return ___connectedPortals_8; }
	inline List_1_tF98B6D846565344249C79E895B9E3BF385EA519E ** get_address_of_connectedPortals_8() { return &___connectedPortals_8; }
	inline void set_connectedPortals_8(List_1_tF98B6D846565344249C79E895B9E3BF385EA519E * value)
	{
		___connectedPortals_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___connectedPortals_8), (void*)value);
	}

	inline static int32_t get_offset_of_cam_9() { return static_cast<int32_t>(offsetof(Dimension_t28D074E7D31C414382BEB891CF77CF6345E04C34, ___cam_9)); }
	inline Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * get_cam_9() const { return ___cam_9; }
	inline Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C ** get_address_of_cam_9() { return &___cam_9; }
	inline void set_cam_9(Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * value)
	{
		___cam_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___cam_9), (void*)value);
	}

	inline static int32_t get_offset_of_layerSwitchedChildren_10() { return static_cast<int32_t>(offsetof(Dimension_t28D074E7D31C414382BEB891CF77CF6345E04C34, ___layerSwitchedChildren_10)); }
	inline Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 * get_layerSwitchedChildren_10() const { return ___layerSwitchedChildren_10; }
	inline Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 ** get_address_of_layerSwitchedChildren_10() { return &___layerSwitchedChildren_10; }
	inline void set_layerSwitchedChildren_10(Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 * value)
	{
		___layerSwitchedChildren_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___layerSwitchedChildren_10), (void*)value);
	}

	inline static int32_t get_offset_of_mainCameraNeedsSetup_11() { return static_cast<int32_t>(offsetof(Dimension_t28D074E7D31C414382BEB891CF77CF6345E04C34, ___mainCameraNeedsSetup_11)); }
	inline bool get_mainCameraNeedsSetup_11() const { return ___mainCameraNeedsSetup_11; }
	inline bool* get_address_of_mainCameraNeedsSetup_11() { return &___mainCameraNeedsSetup_11; }
	inline void set_mainCameraNeedsSetup_11(bool value)
	{
		___mainCameraNeedsSetup_11 = value;
	}
};


// GearCameraRenderInfo
struct  GearCameraRenderInfo_tD3E67E22C8199B14D79B3CE6F896CECF7E8C39CC  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// MainCameraController
struct  MainCameraController_t90D850F2A0257D38B41668E324DEF1DDB2F89BFC  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Single MainCameraController::x
	float ___x_4;
	// System.Single MainCameraController::y
	float ___y_5;
	// System.Single MainCameraController::a
	float ___a_6;
	// System.Single MainCameraController::b
	float ___b_7;
	// System.Single MainCameraController::speed
	float ___speed_8;
	// UnityEngine.GameObject MainCameraController::circle2DView
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___circle2DView_9;
	// System.Int32 MainCameraController::currentIndex
	int32_t ___currentIndex_10;
	// UnityEngine.GameObject[] MainCameraController::spheres
	GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* ___spheres_11;
	// UnityEngine.GameObject[] MainCameraController::quads
	GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* ___quads_12;

public:
	inline static int32_t get_offset_of_x_4() { return static_cast<int32_t>(offsetof(MainCameraController_t90D850F2A0257D38B41668E324DEF1DDB2F89BFC, ___x_4)); }
	inline float get_x_4() const { return ___x_4; }
	inline float* get_address_of_x_4() { return &___x_4; }
	inline void set_x_4(float value)
	{
		___x_4 = value;
	}

	inline static int32_t get_offset_of_y_5() { return static_cast<int32_t>(offsetof(MainCameraController_t90D850F2A0257D38B41668E324DEF1DDB2F89BFC, ___y_5)); }
	inline float get_y_5() const { return ___y_5; }
	inline float* get_address_of_y_5() { return &___y_5; }
	inline void set_y_5(float value)
	{
		___y_5 = value;
	}

	inline static int32_t get_offset_of_a_6() { return static_cast<int32_t>(offsetof(MainCameraController_t90D850F2A0257D38B41668E324DEF1DDB2F89BFC, ___a_6)); }
	inline float get_a_6() const { return ___a_6; }
	inline float* get_address_of_a_6() { return &___a_6; }
	inline void set_a_6(float value)
	{
		___a_6 = value;
	}

	inline static int32_t get_offset_of_b_7() { return static_cast<int32_t>(offsetof(MainCameraController_t90D850F2A0257D38B41668E324DEF1DDB2F89BFC, ___b_7)); }
	inline float get_b_7() const { return ___b_7; }
	inline float* get_address_of_b_7() { return &___b_7; }
	inline void set_b_7(float value)
	{
		___b_7 = value;
	}

	inline static int32_t get_offset_of_speed_8() { return static_cast<int32_t>(offsetof(MainCameraController_t90D850F2A0257D38B41668E324DEF1DDB2F89BFC, ___speed_8)); }
	inline float get_speed_8() const { return ___speed_8; }
	inline float* get_address_of_speed_8() { return &___speed_8; }
	inline void set_speed_8(float value)
	{
		___speed_8 = value;
	}

	inline static int32_t get_offset_of_circle2DView_9() { return static_cast<int32_t>(offsetof(MainCameraController_t90D850F2A0257D38B41668E324DEF1DDB2F89BFC, ___circle2DView_9)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_circle2DView_9() const { return ___circle2DView_9; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_circle2DView_9() { return &___circle2DView_9; }
	inline void set_circle2DView_9(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___circle2DView_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___circle2DView_9), (void*)value);
	}

	inline static int32_t get_offset_of_currentIndex_10() { return static_cast<int32_t>(offsetof(MainCameraController_t90D850F2A0257D38B41668E324DEF1DDB2F89BFC, ___currentIndex_10)); }
	inline int32_t get_currentIndex_10() const { return ___currentIndex_10; }
	inline int32_t* get_address_of_currentIndex_10() { return &___currentIndex_10; }
	inline void set_currentIndex_10(int32_t value)
	{
		___currentIndex_10 = value;
	}

	inline static int32_t get_offset_of_spheres_11() { return static_cast<int32_t>(offsetof(MainCameraController_t90D850F2A0257D38B41668E324DEF1DDB2F89BFC, ___spheres_11)); }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* get_spheres_11() const { return ___spheres_11; }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642** get_address_of_spheres_11() { return &___spheres_11; }
	inline void set_spheres_11(GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* value)
	{
		___spheres_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___spheres_11), (void*)value);
	}

	inline static int32_t get_offset_of_quads_12() { return static_cast<int32_t>(offsetof(MainCameraController_t90D850F2A0257D38B41668E324DEF1DDB2F89BFC, ___quads_12)); }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* get_quads_12() const { return ___quads_12; }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642** get_address_of_quads_12() { return &___quads_12; }
	inline void set_quads_12(GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* value)
	{
		___quads_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___quads_12), (void*)value);
	}
};


// MainCameraLayerManager
struct  MainCameraLayerManager_tB21B56BD4156E63941A865F34D94B01F22043250  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// MeshDeformer
struct  MeshDeformer_t552F11EC8166EE3DED6958E9B4F0050853FB31F8  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.Mesh MeshDeformer::deformingMesh
	Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * ___deformingMesh_4;
	// UnityEngine.Vector3[] MeshDeformer::originalVertices
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___originalVertices_5;
	// UnityEngine.Vector3[] MeshDeformer::displacedVertices
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___displacedVertices_6;
	// System.Boolean MeshDeformer::lockXEdges
	bool ___lockXEdges_7;
	// System.Boolean MeshDeformer::lockYEdges
	bool ___lockYEdges_8;
	// System.Boolean MeshDeformer::lockZEdges
	bool ___lockZEdges_9;

public:
	inline static int32_t get_offset_of_deformingMesh_4() { return static_cast<int32_t>(offsetof(MeshDeformer_t552F11EC8166EE3DED6958E9B4F0050853FB31F8, ___deformingMesh_4)); }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * get_deformingMesh_4() const { return ___deformingMesh_4; }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 ** get_address_of_deformingMesh_4() { return &___deformingMesh_4; }
	inline void set_deformingMesh_4(Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * value)
	{
		___deformingMesh_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___deformingMesh_4), (void*)value);
	}

	inline static int32_t get_offset_of_originalVertices_5() { return static_cast<int32_t>(offsetof(MeshDeformer_t552F11EC8166EE3DED6958E9B4F0050853FB31F8, ___originalVertices_5)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get_originalVertices_5() const { return ___originalVertices_5; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of_originalVertices_5() { return &___originalVertices_5; }
	inline void set_originalVertices_5(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		___originalVertices_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___originalVertices_5), (void*)value);
	}

	inline static int32_t get_offset_of_displacedVertices_6() { return static_cast<int32_t>(offsetof(MeshDeformer_t552F11EC8166EE3DED6958E9B4F0050853FB31F8, ___displacedVertices_6)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get_displacedVertices_6() const { return ___displacedVertices_6; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of_displacedVertices_6() { return &___displacedVertices_6; }
	inline void set_displacedVertices_6(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		___displacedVertices_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___displacedVertices_6), (void*)value);
	}

	inline static int32_t get_offset_of_lockXEdges_7() { return static_cast<int32_t>(offsetof(MeshDeformer_t552F11EC8166EE3DED6958E9B4F0050853FB31F8, ___lockXEdges_7)); }
	inline bool get_lockXEdges_7() const { return ___lockXEdges_7; }
	inline bool* get_address_of_lockXEdges_7() { return &___lockXEdges_7; }
	inline void set_lockXEdges_7(bool value)
	{
		___lockXEdges_7 = value;
	}

	inline static int32_t get_offset_of_lockYEdges_8() { return static_cast<int32_t>(offsetof(MeshDeformer_t552F11EC8166EE3DED6958E9B4F0050853FB31F8, ___lockYEdges_8)); }
	inline bool get_lockYEdges_8() const { return ___lockYEdges_8; }
	inline bool* get_address_of_lockYEdges_8() { return &___lockYEdges_8; }
	inline void set_lockYEdges_8(bool value)
	{
		___lockYEdges_8 = value;
	}

	inline static int32_t get_offset_of_lockZEdges_9() { return static_cast<int32_t>(offsetof(MeshDeformer_t552F11EC8166EE3DED6958E9B4F0050853FB31F8, ___lockZEdges_9)); }
	inline bool get_lockZEdges_9() const { return ___lockZEdges_9; }
	inline bool* get_address_of_lockZEdges_9() { return &___lockZEdges_9; }
	inline void set_lockZEdges_9(bool value)
	{
		___lockZEdges_9 = value;
	}
};


// MeshDeformerInput
struct  MeshDeformerInput_t539337F65D4F0BAA0C89ED1BF77F0B33C9E3EE6E  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Single MeshDeformerInput::force
	float ___force_4;
	// System.Single MeshDeformerInput::forceOffset
	float ___forceOffset_5;

public:
	inline static int32_t get_offset_of_force_4() { return static_cast<int32_t>(offsetof(MeshDeformerInput_t539337F65D4F0BAA0C89ED1BF77F0B33C9E3EE6E, ___force_4)); }
	inline float get_force_4() const { return ___force_4; }
	inline float* get_address_of_force_4() { return &___force_4; }
	inline void set_force_4(float value)
	{
		___force_4 = value;
	}

	inline static int32_t get_offset_of_forceOffset_5() { return static_cast<int32_t>(offsetof(MeshDeformerInput_t539337F65D4F0BAA0C89ED1BF77F0B33C9E3EE6E, ___forceOffset_5)); }
	inline float get_forceOffset_5() const { return ___forceOffset_5; }
	inline float* get_address_of_forceOffset_5() { return &___forceOffset_5; }
	inline void set_forceOffset_5(float value)
	{
		___forceOffset_5 = value;
	}
};


// MovementLimiter
struct  MovementLimiter_t363580643587ECA5D4C7B835B4EE95E3DE75C698  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.Transform MovementLimiter::m_MoveTransform
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___m_MoveTransform_4;
	// UnityEngine.Quaternion MovementLimiter::oRotation
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___oRotation_5;
	// UnityEngine.Vector3 MovementLimiter::oPosition
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___oPosition_6;

public:
	inline static int32_t get_offset_of_m_MoveTransform_4() { return static_cast<int32_t>(offsetof(MovementLimiter_t363580643587ECA5D4C7B835B4EE95E3DE75C698, ___m_MoveTransform_4)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_m_MoveTransform_4() const { return ___m_MoveTransform_4; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_m_MoveTransform_4() { return &___m_MoveTransform_4; }
	inline void set_m_MoveTransform_4(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___m_MoveTransform_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_MoveTransform_4), (void*)value);
	}

	inline static int32_t get_offset_of_oRotation_5() { return static_cast<int32_t>(offsetof(MovementLimiter_t363580643587ECA5D4C7B835B4EE95E3DE75C698, ___oRotation_5)); }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  get_oRotation_5() const { return ___oRotation_5; }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * get_address_of_oRotation_5() { return &___oRotation_5; }
	inline void set_oRotation_5(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  value)
	{
		___oRotation_5 = value;
	}

	inline static int32_t get_offset_of_oPosition_6() { return static_cast<int32_t>(offsetof(MovementLimiter_t363580643587ECA5D4C7B835B4EE95E3DE75C698, ___oPosition_6)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_oPosition_6() const { return ___oPosition_6; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_oPosition_6() { return &___oPosition_6; }
	inline void set_oPosition_6(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___oPosition_6 = value;
	}
};


// Portal
struct  Portal_t355BC086AE7B4F5E476064C8805CA0830E0CA48E  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// Dimension Portal::dimension1
	Dimension_t28D074E7D31C414382BEB891CF77CF6345E04C34 * ___dimension1_4;
	// Dimension Portal::dimension2
	Dimension_t28D074E7D31C414382BEB891CF77CF6345E04C34 * ___dimension2_5;
	// System.Single Portal::renderQuality
	float ___renderQuality_6;
	// System.Single Portal::maximumDeformRange
	float ___maximumDeformRange_7;
	// System.Single Portal::deformPower
	float ___deformPower_8;
	// System.String Portal::ignoreRigidbodyTag
	String_t* ___ignoreRigidbodyTag_9;
	// UnityEngine.LayerMask Portal::alwaysVisibleMask
	LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8  ___alwaysVisibleMask_10;
	// System.Boolean Portal::enableObliqueProjection
	bool ___enableObliqueProjection_11;
	// System.Boolean Portal::<dimensionSwitched>k__BackingField
	bool ___U3CdimensionSwitchedU3Ek__BackingField_12;
	// System.String Portal::Notes
	String_t* ___Notes_13;
	// UnityEngine.Camera Portal::mainCamera
	Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * ___mainCamera_14;
	// UnityEngine.Camera Portal::rightCamera
	Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * ___rightCamera_15;
	// System.Single Portal::minimumDeformRangeSquared
	float ___minimumDeformRangeSquared_16;
	// System.Boolean Portal::isDeforming
	bool ___isDeforming_17;
	// UnityEngine.Renderer Portal::meshRenderer
	Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * ___meshRenderer_18;
	// UnityEngine.MeshFilter Portal::meshFilter
	MeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A * ___meshFilter_19;
	// MeshDeformer Portal::meshDeformer
	MeshDeformer_t552F11EC8166EE3DED6958E9B4F0050853FB31F8 * ___meshDeformer_20;
	// System.Boolean Portal::triggerZDirection
	bool ___triggerZDirection_21;
	// System.Collections.Generic.List`1<PortalTransitionObject> Portal::transitionObjects
	List_1_t30FCDC226FA7B79EC342BC4224C0AC67A9A36807 * ___transitionObjects_22;
	// UnityEngine.Camera Portal::renderCam
	Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * ___renderCam_23;
	// UnityEngine.Skybox Portal::camSkybox
	Skybox_t8B0EA7C092363DBCCF0B51434F04E7EE661E28E0 * ___camSkybox_24;
	// UnityEngine.RenderTexture Portal::leftTexture
	RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * ___leftTexture_25;
	// System.Single Portal::portalSwitchDistance
	float ___portalSwitchDistance_26;

public:
	inline static int32_t get_offset_of_dimension1_4() { return static_cast<int32_t>(offsetof(Portal_t355BC086AE7B4F5E476064C8805CA0830E0CA48E, ___dimension1_4)); }
	inline Dimension_t28D074E7D31C414382BEB891CF77CF6345E04C34 * get_dimension1_4() const { return ___dimension1_4; }
	inline Dimension_t28D074E7D31C414382BEB891CF77CF6345E04C34 ** get_address_of_dimension1_4() { return &___dimension1_4; }
	inline void set_dimension1_4(Dimension_t28D074E7D31C414382BEB891CF77CF6345E04C34 * value)
	{
		___dimension1_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dimension1_4), (void*)value);
	}

	inline static int32_t get_offset_of_dimension2_5() { return static_cast<int32_t>(offsetof(Portal_t355BC086AE7B4F5E476064C8805CA0830E0CA48E, ___dimension2_5)); }
	inline Dimension_t28D074E7D31C414382BEB891CF77CF6345E04C34 * get_dimension2_5() const { return ___dimension2_5; }
	inline Dimension_t28D074E7D31C414382BEB891CF77CF6345E04C34 ** get_address_of_dimension2_5() { return &___dimension2_5; }
	inline void set_dimension2_5(Dimension_t28D074E7D31C414382BEB891CF77CF6345E04C34 * value)
	{
		___dimension2_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dimension2_5), (void*)value);
	}

	inline static int32_t get_offset_of_renderQuality_6() { return static_cast<int32_t>(offsetof(Portal_t355BC086AE7B4F5E476064C8805CA0830E0CA48E, ___renderQuality_6)); }
	inline float get_renderQuality_6() const { return ___renderQuality_6; }
	inline float* get_address_of_renderQuality_6() { return &___renderQuality_6; }
	inline void set_renderQuality_6(float value)
	{
		___renderQuality_6 = value;
	}

	inline static int32_t get_offset_of_maximumDeformRange_7() { return static_cast<int32_t>(offsetof(Portal_t355BC086AE7B4F5E476064C8805CA0830E0CA48E, ___maximumDeformRange_7)); }
	inline float get_maximumDeformRange_7() const { return ___maximumDeformRange_7; }
	inline float* get_address_of_maximumDeformRange_7() { return &___maximumDeformRange_7; }
	inline void set_maximumDeformRange_7(float value)
	{
		___maximumDeformRange_7 = value;
	}

	inline static int32_t get_offset_of_deformPower_8() { return static_cast<int32_t>(offsetof(Portal_t355BC086AE7B4F5E476064C8805CA0830E0CA48E, ___deformPower_8)); }
	inline float get_deformPower_8() const { return ___deformPower_8; }
	inline float* get_address_of_deformPower_8() { return &___deformPower_8; }
	inline void set_deformPower_8(float value)
	{
		___deformPower_8 = value;
	}

	inline static int32_t get_offset_of_ignoreRigidbodyTag_9() { return static_cast<int32_t>(offsetof(Portal_t355BC086AE7B4F5E476064C8805CA0830E0CA48E, ___ignoreRigidbodyTag_9)); }
	inline String_t* get_ignoreRigidbodyTag_9() const { return ___ignoreRigidbodyTag_9; }
	inline String_t** get_address_of_ignoreRigidbodyTag_9() { return &___ignoreRigidbodyTag_9; }
	inline void set_ignoreRigidbodyTag_9(String_t* value)
	{
		___ignoreRigidbodyTag_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ignoreRigidbodyTag_9), (void*)value);
	}

	inline static int32_t get_offset_of_alwaysVisibleMask_10() { return static_cast<int32_t>(offsetof(Portal_t355BC086AE7B4F5E476064C8805CA0830E0CA48E, ___alwaysVisibleMask_10)); }
	inline LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8  get_alwaysVisibleMask_10() const { return ___alwaysVisibleMask_10; }
	inline LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8 * get_address_of_alwaysVisibleMask_10() { return &___alwaysVisibleMask_10; }
	inline void set_alwaysVisibleMask_10(LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8  value)
	{
		___alwaysVisibleMask_10 = value;
	}

	inline static int32_t get_offset_of_enableObliqueProjection_11() { return static_cast<int32_t>(offsetof(Portal_t355BC086AE7B4F5E476064C8805CA0830E0CA48E, ___enableObliqueProjection_11)); }
	inline bool get_enableObliqueProjection_11() const { return ___enableObliqueProjection_11; }
	inline bool* get_address_of_enableObliqueProjection_11() { return &___enableObliqueProjection_11; }
	inline void set_enableObliqueProjection_11(bool value)
	{
		___enableObliqueProjection_11 = value;
	}

	inline static int32_t get_offset_of_U3CdimensionSwitchedU3Ek__BackingField_12() { return static_cast<int32_t>(offsetof(Portal_t355BC086AE7B4F5E476064C8805CA0830E0CA48E, ___U3CdimensionSwitchedU3Ek__BackingField_12)); }
	inline bool get_U3CdimensionSwitchedU3Ek__BackingField_12() const { return ___U3CdimensionSwitchedU3Ek__BackingField_12; }
	inline bool* get_address_of_U3CdimensionSwitchedU3Ek__BackingField_12() { return &___U3CdimensionSwitchedU3Ek__BackingField_12; }
	inline void set_U3CdimensionSwitchedU3Ek__BackingField_12(bool value)
	{
		___U3CdimensionSwitchedU3Ek__BackingField_12 = value;
	}

	inline static int32_t get_offset_of_Notes_13() { return static_cast<int32_t>(offsetof(Portal_t355BC086AE7B4F5E476064C8805CA0830E0CA48E, ___Notes_13)); }
	inline String_t* get_Notes_13() const { return ___Notes_13; }
	inline String_t** get_address_of_Notes_13() { return &___Notes_13; }
	inline void set_Notes_13(String_t* value)
	{
		___Notes_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Notes_13), (void*)value);
	}

	inline static int32_t get_offset_of_mainCamera_14() { return static_cast<int32_t>(offsetof(Portal_t355BC086AE7B4F5E476064C8805CA0830E0CA48E, ___mainCamera_14)); }
	inline Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * get_mainCamera_14() const { return ___mainCamera_14; }
	inline Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C ** get_address_of_mainCamera_14() { return &___mainCamera_14; }
	inline void set_mainCamera_14(Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * value)
	{
		___mainCamera_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mainCamera_14), (void*)value);
	}

	inline static int32_t get_offset_of_rightCamera_15() { return static_cast<int32_t>(offsetof(Portal_t355BC086AE7B4F5E476064C8805CA0830E0CA48E, ___rightCamera_15)); }
	inline Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * get_rightCamera_15() const { return ___rightCamera_15; }
	inline Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C ** get_address_of_rightCamera_15() { return &___rightCamera_15; }
	inline void set_rightCamera_15(Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * value)
	{
		___rightCamera_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___rightCamera_15), (void*)value);
	}

	inline static int32_t get_offset_of_minimumDeformRangeSquared_16() { return static_cast<int32_t>(offsetof(Portal_t355BC086AE7B4F5E476064C8805CA0830E0CA48E, ___minimumDeformRangeSquared_16)); }
	inline float get_minimumDeformRangeSquared_16() const { return ___minimumDeformRangeSquared_16; }
	inline float* get_address_of_minimumDeformRangeSquared_16() { return &___minimumDeformRangeSquared_16; }
	inline void set_minimumDeformRangeSquared_16(float value)
	{
		___minimumDeformRangeSquared_16 = value;
	}

	inline static int32_t get_offset_of_isDeforming_17() { return static_cast<int32_t>(offsetof(Portal_t355BC086AE7B4F5E476064C8805CA0830E0CA48E, ___isDeforming_17)); }
	inline bool get_isDeforming_17() const { return ___isDeforming_17; }
	inline bool* get_address_of_isDeforming_17() { return &___isDeforming_17; }
	inline void set_isDeforming_17(bool value)
	{
		___isDeforming_17 = value;
	}

	inline static int32_t get_offset_of_meshRenderer_18() { return static_cast<int32_t>(offsetof(Portal_t355BC086AE7B4F5E476064C8805CA0830E0CA48E, ___meshRenderer_18)); }
	inline Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * get_meshRenderer_18() const { return ___meshRenderer_18; }
	inline Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C ** get_address_of_meshRenderer_18() { return &___meshRenderer_18; }
	inline void set_meshRenderer_18(Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * value)
	{
		___meshRenderer_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___meshRenderer_18), (void*)value);
	}

	inline static int32_t get_offset_of_meshFilter_19() { return static_cast<int32_t>(offsetof(Portal_t355BC086AE7B4F5E476064C8805CA0830E0CA48E, ___meshFilter_19)); }
	inline MeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A * get_meshFilter_19() const { return ___meshFilter_19; }
	inline MeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A ** get_address_of_meshFilter_19() { return &___meshFilter_19; }
	inline void set_meshFilter_19(MeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A * value)
	{
		___meshFilter_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___meshFilter_19), (void*)value);
	}

	inline static int32_t get_offset_of_meshDeformer_20() { return static_cast<int32_t>(offsetof(Portal_t355BC086AE7B4F5E476064C8805CA0830E0CA48E, ___meshDeformer_20)); }
	inline MeshDeformer_t552F11EC8166EE3DED6958E9B4F0050853FB31F8 * get_meshDeformer_20() const { return ___meshDeformer_20; }
	inline MeshDeformer_t552F11EC8166EE3DED6958E9B4F0050853FB31F8 ** get_address_of_meshDeformer_20() { return &___meshDeformer_20; }
	inline void set_meshDeformer_20(MeshDeformer_t552F11EC8166EE3DED6958E9B4F0050853FB31F8 * value)
	{
		___meshDeformer_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___meshDeformer_20), (void*)value);
	}

	inline static int32_t get_offset_of_triggerZDirection_21() { return static_cast<int32_t>(offsetof(Portal_t355BC086AE7B4F5E476064C8805CA0830E0CA48E, ___triggerZDirection_21)); }
	inline bool get_triggerZDirection_21() const { return ___triggerZDirection_21; }
	inline bool* get_address_of_triggerZDirection_21() { return &___triggerZDirection_21; }
	inline void set_triggerZDirection_21(bool value)
	{
		___triggerZDirection_21 = value;
	}

	inline static int32_t get_offset_of_transitionObjects_22() { return static_cast<int32_t>(offsetof(Portal_t355BC086AE7B4F5E476064C8805CA0830E0CA48E, ___transitionObjects_22)); }
	inline List_1_t30FCDC226FA7B79EC342BC4224C0AC67A9A36807 * get_transitionObjects_22() const { return ___transitionObjects_22; }
	inline List_1_t30FCDC226FA7B79EC342BC4224C0AC67A9A36807 ** get_address_of_transitionObjects_22() { return &___transitionObjects_22; }
	inline void set_transitionObjects_22(List_1_t30FCDC226FA7B79EC342BC4224C0AC67A9A36807 * value)
	{
		___transitionObjects_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___transitionObjects_22), (void*)value);
	}

	inline static int32_t get_offset_of_renderCam_23() { return static_cast<int32_t>(offsetof(Portal_t355BC086AE7B4F5E476064C8805CA0830E0CA48E, ___renderCam_23)); }
	inline Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * get_renderCam_23() const { return ___renderCam_23; }
	inline Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C ** get_address_of_renderCam_23() { return &___renderCam_23; }
	inline void set_renderCam_23(Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * value)
	{
		___renderCam_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___renderCam_23), (void*)value);
	}

	inline static int32_t get_offset_of_camSkybox_24() { return static_cast<int32_t>(offsetof(Portal_t355BC086AE7B4F5E476064C8805CA0830E0CA48E, ___camSkybox_24)); }
	inline Skybox_t8B0EA7C092363DBCCF0B51434F04E7EE661E28E0 * get_camSkybox_24() const { return ___camSkybox_24; }
	inline Skybox_t8B0EA7C092363DBCCF0B51434F04E7EE661E28E0 ** get_address_of_camSkybox_24() { return &___camSkybox_24; }
	inline void set_camSkybox_24(Skybox_t8B0EA7C092363DBCCF0B51434F04E7EE661E28E0 * value)
	{
		___camSkybox_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___camSkybox_24), (void*)value);
	}

	inline static int32_t get_offset_of_leftTexture_25() { return static_cast<int32_t>(offsetof(Portal_t355BC086AE7B4F5E476064C8805CA0830E0CA48E, ___leftTexture_25)); }
	inline RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * get_leftTexture_25() const { return ___leftTexture_25; }
	inline RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 ** get_address_of_leftTexture_25() { return &___leftTexture_25; }
	inline void set_leftTexture_25(RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * value)
	{
		___leftTexture_25 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___leftTexture_25), (void*)value);
	}

	inline static int32_t get_offset_of_portalSwitchDistance_26() { return static_cast<int32_t>(offsetof(Portal_t355BC086AE7B4F5E476064C8805CA0830E0CA48E, ___portalSwitchDistance_26)); }
	inline float get_portalSwitchDistance_26() const { return ___portalSwitchDistance_26; }
	inline float* get_address_of_portalSwitchDistance_26() { return &___portalSwitchDistance_26; }
	inline void set_portalSwitchDistance_26(float value)
	{
		___portalSwitchDistance_26 = value;
	}
};


// PortalTransitionObject
struct  PortalTransitionObject_t6C6EC1877A4E2BAB5F3366A1E0B7F8C02BC133CE  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Boolean PortalTransitionObject::triggerZDirection
	bool ___triggerZDirection_4;

public:
	inline static int32_t get_offset_of_triggerZDirection_4() { return static_cast<int32_t>(offsetof(PortalTransitionObject_t6C6EC1877A4E2BAB5F3366A1E0B7F8C02BC133CE, ___triggerZDirection_4)); }
	inline bool get_triggerZDirection_4() const { return ___triggerZDirection_4; }
	inline bool* get_address_of_triggerZDirection_4() { return &___triggerZDirection_4; }
	inline void set_triggerZDirection_4(bool value)
	{
		___triggerZDirection_4 = value;
	}
};


// SubdividedCube
struct  SubdividedCube_tFFFE4E2DAFE319BFFCCC128B8B956589136D74F5  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.MeshFilter SubdividedCube::meshFilter
	MeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A * ___meshFilter_4;
	// UnityEngine.Mesh SubdividedCube::mesh
	Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * ___mesh_5;
	// System.Collections.Generic.List`1<UnityEngine.Vector3> SubdividedCube::verticies
	List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * ___verticies_6;
	// System.Collections.Generic.List`1<System.Int32> SubdividedCube::triangles
	List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * ___triangles_7;
	// System.Int32 SubdividedCube::squareCount
	int32_t ___squareCount_8;
	// System.Int32 SubdividedCube::divisions
	int32_t ___divisions_9;

public:
	inline static int32_t get_offset_of_meshFilter_4() { return static_cast<int32_t>(offsetof(SubdividedCube_tFFFE4E2DAFE319BFFCCC128B8B956589136D74F5, ___meshFilter_4)); }
	inline MeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A * get_meshFilter_4() const { return ___meshFilter_4; }
	inline MeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A ** get_address_of_meshFilter_4() { return &___meshFilter_4; }
	inline void set_meshFilter_4(MeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A * value)
	{
		___meshFilter_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___meshFilter_4), (void*)value);
	}

	inline static int32_t get_offset_of_mesh_5() { return static_cast<int32_t>(offsetof(SubdividedCube_tFFFE4E2DAFE319BFFCCC128B8B956589136D74F5, ___mesh_5)); }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * get_mesh_5() const { return ___mesh_5; }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 ** get_address_of_mesh_5() { return &___mesh_5; }
	inline void set_mesh_5(Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * value)
	{
		___mesh_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mesh_5), (void*)value);
	}

	inline static int32_t get_offset_of_verticies_6() { return static_cast<int32_t>(offsetof(SubdividedCube_tFFFE4E2DAFE319BFFCCC128B8B956589136D74F5, ___verticies_6)); }
	inline List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * get_verticies_6() const { return ___verticies_6; }
	inline List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 ** get_address_of_verticies_6() { return &___verticies_6; }
	inline void set_verticies_6(List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * value)
	{
		___verticies_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___verticies_6), (void*)value);
	}

	inline static int32_t get_offset_of_triangles_7() { return static_cast<int32_t>(offsetof(SubdividedCube_tFFFE4E2DAFE319BFFCCC128B8B956589136D74F5, ___triangles_7)); }
	inline List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * get_triangles_7() const { return ___triangles_7; }
	inline List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 ** get_address_of_triangles_7() { return &___triangles_7; }
	inline void set_triangles_7(List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * value)
	{
		___triangles_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___triangles_7), (void*)value);
	}

	inline static int32_t get_offset_of_squareCount_8() { return static_cast<int32_t>(offsetof(SubdividedCube_tFFFE4E2DAFE319BFFCCC128B8B956589136D74F5, ___squareCount_8)); }
	inline int32_t get_squareCount_8() const { return ___squareCount_8; }
	inline int32_t* get_address_of_squareCount_8() { return &___squareCount_8; }
	inline void set_squareCount_8(int32_t value)
	{
		___squareCount_8 = value;
	}

	inline static int32_t get_offset_of_divisions_9() { return static_cast<int32_t>(offsetof(SubdividedCube_tFFFE4E2DAFE319BFFCCC128B8B956589136D74F5, ___divisions_9)); }
	inline int32_t get_divisions_9() const { return ___divisions_9; }
	inline int32_t* get_address_of_divisions_9() { return &___divisions_9; }
	inline void set_divisions_9(int32_t value)
	{
		___divisions_9 = value;
	}
};


// ThrowObject
struct  ThrowObject_t3A1DF7FE7CFED5FDA16EFB502C2127AB115D6841  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.GameObject ThrowObject::objectToThrow
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___objectToThrow_4;
	// UnityEngine.Vector3 ThrowObject::force
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___force_5;

public:
	inline static int32_t get_offset_of_objectToThrow_4() { return static_cast<int32_t>(offsetof(ThrowObject_t3A1DF7FE7CFED5FDA16EFB502C2127AB115D6841, ___objectToThrow_4)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_objectToThrow_4() const { return ___objectToThrow_4; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_objectToThrow_4() { return &___objectToThrow_4; }
	inline void set_objectToThrow_4(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___objectToThrow_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___objectToThrow_4), (void*)value);
	}

	inline static int32_t get_offset_of_force_5() { return static_cast<int32_t>(offsetof(ThrowObject_t3A1DF7FE7CFED5FDA16EFB502C2127AB115D6841, ___force_5)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_force_5() const { return ___force_5; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_force_5() { return &___force_5; }
	inline void set_force_5(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___force_5 = value;
	}
};


// UnityEngine.XR.ARFoundation.ARTrackableManager`5<UnityEngine.XR.ARSubsystems.XRRaycastSubsystem,UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor,UnityEngine.XR.ARSubsystems.XRRaycastSubsystem/Provider,UnityEngine.XR.ARSubsystems.XRRaycast,UnityEngine.XR.ARFoundation.ARRaycast>
struct  ARTrackableManager_5_t7935FE663E07F7F1A41BC72B99D0E6B3B2C0E045  : public SubsystemLifecycleManager_3_t0541A12A544D670B641A4F64D8959D69726CCB6D
{
public:
	// UnityEngine.XR.ARFoundation.ARSessionOrigin UnityEngine.XR.ARFoundation.ARTrackableManager`5::<sessionOrigin>k__BackingField
	ARSessionOrigin_tA15648434106370D592D12C00B93054EC6CE6AE1 * ___U3CsessionOriginU3Ek__BackingField_7;
	// System.Collections.Generic.Dictionary`2<UnityEngine.XR.ARSubsystems.TrackableId,TTrackable> UnityEngine.XR.ARFoundation.ARTrackableManager`5::m_Trackables
	Dictionary_2_t1D1E85AC0F638F3FF58F627822C66DECBAE7C06C * ___m_Trackables_8;
	// System.Collections.Generic.Dictionary`2<UnityEngine.XR.ARSubsystems.TrackableId,TTrackable> UnityEngine.XR.ARFoundation.ARTrackableManager`5::m_PendingAdds
	Dictionary_2_t1D1E85AC0F638F3FF58F627822C66DECBAE7C06C * ___m_PendingAdds_9;

public:
	inline static int32_t get_offset_of_U3CsessionOriginU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(ARTrackableManager_5_t7935FE663E07F7F1A41BC72B99D0E6B3B2C0E045, ___U3CsessionOriginU3Ek__BackingField_7)); }
	inline ARSessionOrigin_tA15648434106370D592D12C00B93054EC6CE6AE1 * get_U3CsessionOriginU3Ek__BackingField_7() const { return ___U3CsessionOriginU3Ek__BackingField_7; }
	inline ARSessionOrigin_tA15648434106370D592D12C00B93054EC6CE6AE1 ** get_address_of_U3CsessionOriginU3Ek__BackingField_7() { return &___U3CsessionOriginU3Ek__BackingField_7; }
	inline void set_U3CsessionOriginU3Ek__BackingField_7(ARSessionOrigin_tA15648434106370D592D12C00B93054EC6CE6AE1 * value)
	{
		___U3CsessionOriginU3Ek__BackingField_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CsessionOriginU3Ek__BackingField_7), (void*)value);
	}

	inline static int32_t get_offset_of_m_Trackables_8() { return static_cast<int32_t>(offsetof(ARTrackableManager_5_t7935FE663E07F7F1A41BC72B99D0E6B3B2C0E045, ___m_Trackables_8)); }
	inline Dictionary_2_t1D1E85AC0F638F3FF58F627822C66DECBAE7C06C * get_m_Trackables_8() const { return ___m_Trackables_8; }
	inline Dictionary_2_t1D1E85AC0F638F3FF58F627822C66DECBAE7C06C ** get_address_of_m_Trackables_8() { return &___m_Trackables_8; }
	inline void set_m_Trackables_8(Dictionary_2_t1D1E85AC0F638F3FF58F627822C66DECBAE7C06C * value)
	{
		___m_Trackables_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Trackables_8), (void*)value);
	}

	inline static int32_t get_offset_of_m_PendingAdds_9() { return static_cast<int32_t>(offsetof(ARTrackableManager_5_t7935FE663E07F7F1A41BC72B99D0E6B3B2C0E045, ___m_PendingAdds_9)); }
	inline Dictionary_2_t1D1E85AC0F638F3FF58F627822C66DECBAE7C06C * get_m_PendingAdds_9() const { return ___m_PendingAdds_9; }
	inline Dictionary_2_t1D1E85AC0F638F3FF58F627822C66DECBAE7C06C ** get_address_of_m_PendingAdds_9() { return &___m_PendingAdds_9; }
	inline void set_m_PendingAdds_9(Dictionary_2_t1D1E85AC0F638F3FF58F627822C66DECBAE7C06C * value)
	{
		___m_PendingAdds_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PendingAdds_9), (void*)value);
	}
};

struct ARTrackableManager_5_t7935FE663E07F7F1A41BC72B99D0E6B3B2C0E045_StaticFields
{
public:
	// System.Collections.Generic.List`1<TTrackable> UnityEngine.XR.ARFoundation.ARTrackableManager`5::s_Added
	List_1_t75314E6BE9CE5BE892C6B190246D0554A1F77AA7 * ___s_Added_10;
	// System.Collections.Generic.List`1<TTrackable> UnityEngine.XR.ARFoundation.ARTrackableManager`5::s_Updated
	List_1_t75314E6BE9CE5BE892C6B190246D0554A1F77AA7 * ___s_Updated_11;
	// System.Collections.Generic.List`1<TTrackable> UnityEngine.XR.ARFoundation.ARTrackableManager`5::s_Removed
	List_1_t75314E6BE9CE5BE892C6B190246D0554A1F77AA7 * ___s_Removed_12;

public:
	inline static int32_t get_offset_of_s_Added_10() { return static_cast<int32_t>(offsetof(ARTrackableManager_5_t7935FE663E07F7F1A41BC72B99D0E6B3B2C0E045_StaticFields, ___s_Added_10)); }
	inline List_1_t75314E6BE9CE5BE892C6B190246D0554A1F77AA7 * get_s_Added_10() const { return ___s_Added_10; }
	inline List_1_t75314E6BE9CE5BE892C6B190246D0554A1F77AA7 ** get_address_of_s_Added_10() { return &___s_Added_10; }
	inline void set_s_Added_10(List_1_t75314E6BE9CE5BE892C6B190246D0554A1F77AA7 * value)
	{
		___s_Added_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Added_10), (void*)value);
	}

	inline static int32_t get_offset_of_s_Updated_11() { return static_cast<int32_t>(offsetof(ARTrackableManager_5_t7935FE663E07F7F1A41BC72B99D0E6B3B2C0E045_StaticFields, ___s_Updated_11)); }
	inline List_1_t75314E6BE9CE5BE892C6B190246D0554A1F77AA7 * get_s_Updated_11() const { return ___s_Updated_11; }
	inline List_1_t75314E6BE9CE5BE892C6B190246D0554A1F77AA7 ** get_address_of_s_Updated_11() { return &___s_Updated_11; }
	inline void set_s_Updated_11(List_1_t75314E6BE9CE5BE892C6B190246D0554A1F77AA7 * value)
	{
		___s_Updated_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Updated_11), (void*)value);
	}

	inline static int32_t get_offset_of_s_Removed_12() { return static_cast<int32_t>(offsetof(ARTrackableManager_5_t7935FE663E07F7F1A41BC72B99D0E6B3B2C0E045_StaticFields, ___s_Removed_12)); }
	inline List_1_t75314E6BE9CE5BE892C6B190246D0554A1F77AA7 * get_s_Removed_12() const { return ___s_Removed_12; }
	inline List_1_t75314E6BE9CE5BE892C6B190246D0554A1F77AA7 ** get_address_of_s_Removed_12() { return &___s_Removed_12; }
	inline void set_s_Removed_12(List_1_t75314E6BE9CE5BE892C6B190246D0554A1F77AA7 * value)
	{
		___s_Removed_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Removed_12), (void*)value);
	}
};


// PlaneMeshDeformer
struct  PlaneMeshDeformer_t53323E8C3770AE9A26910AFC953BEB86C9AD7C9A  : public MeshDeformer_t552F11EC8166EE3DED6958E9B4F0050853FB31F8
{
public:
	// System.Boolean PlaneMeshDeformer::direction
	bool ___direction_10;

public:
	inline static int32_t get_offset_of_direction_10() { return static_cast<int32_t>(offsetof(PlaneMeshDeformer_t53323E8C3770AE9A26910AFC953BEB86C9AD7C9A, ___direction_10)); }
	inline bool get_direction_10() const { return ___direction_10; }
	inline bool* get_address_of_direction_10() { return &___direction_10; }
	inline void set_direction_10(bool value)
	{
		___direction_10 = value;
	}
};


// UnityMessageManager
struct  UnityMessageManager_t4457746B746B34A7F9397BCF555A92EC97EE7831  : public SingletonMonoBehaviour_1_tCE345733DAFD7C69997F22704982E2372C4BFCDD
{
public:
	// UnityMessageManager/MessageDelegate UnityMessageManager::OnMessage
	MessageDelegate_tDCF734AA37209CBABC24AB82639DC96812A92CD9 * ___OnMessage_7;
	// UnityMessageManager/MessageHandlerDelegate UnityMessageManager::OnFlutterMessage
	MessageHandlerDelegate_tC9B2C089EAB4A237AFE9F84E05D5D7B196643F28 * ___OnFlutterMessage_8;
	// System.Collections.Generic.Dictionary`2<System.Int32,UnityMessage> UnityMessageManager::waitCallbackMessageMap
	Dictionary_2_t0BC3AC5C2146DD06B35F47A5F473B1D0090A809E * ___waitCallbackMessageMap_9;

public:
	inline static int32_t get_offset_of_OnMessage_7() { return static_cast<int32_t>(offsetof(UnityMessageManager_t4457746B746B34A7F9397BCF555A92EC97EE7831, ___OnMessage_7)); }
	inline MessageDelegate_tDCF734AA37209CBABC24AB82639DC96812A92CD9 * get_OnMessage_7() const { return ___OnMessage_7; }
	inline MessageDelegate_tDCF734AA37209CBABC24AB82639DC96812A92CD9 ** get_address_of_OnMessage_7() { return &___OnMessage_7; }
	inline void set_OnMessage_7(MessageDelegate_tDCF734AA37209CBABC24AB82639DC96812A92CD9 * value)
	{
		___OnMessage_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnMessage_7), (void*)value);
	}

	inline static int32_t get_offset_of_OnFlutterMessage_8() { return static_cast<int32_t>(offsetof(UnityMessageManager_t4457746B746B34A7F9397BCF555A92EC97EE7831, ___OnFlutterMessage_8)); }
	inline MessageHandlerDelegate_tC9B2C089EAB4A237AFE9F84E05D5D7B196643F28 * get_OnFlutterMessage_8() const { return ___OnFlutterMessage_8; }
	inline MessageHandlerDelegate_tC9B2C089EAB4A237AFE9F84E05D5D7B196643F28 ** get_address_of_OnFlutterMessage_8() { return &___OnFlutterMessage_8; }
	inline void set_OnFlutterMessage_8(MessageHandlerDelegate_tC9B2C089EAB4A237AFE9F84E05D5D7B196643F28 * value)
	{
		___OnFlutterMessage_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnFlutterMessage_8), (void*)value);
	}

	inline static int32_t get_offset_of_waitCallbackMessageMap_9() { return static_cast<int32_t>(offsetof(UnityMessageManager_t4457746B746B34A7F9397BCF555A92EC97EE7831, ___waitCallbackMessageMap_9)); }
	inline Dictionary_2_t0BC3AC5C2146DD06B35F47A5F473B1D0090A809E * get_waitCallbackMessageMap_9() const { return ___waitCallbackMessageMap_9; }
	inline Dictionary_2_t0BC3AC5C2146DD06B35F47A5F473B1D0090A809E ** get_address_of_waitCallbackMessageMap_9() { return &___waitCallbackMessageMap_9; }
	inline void set_waitCallbackMessageMap_9(Dictionary_2_t0BC3AC5C2146DD06B35F47A5F473B1D0090A809E * value)
	{
		___waitCallbackMessageMap_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___waitCallbackMessageMap_9), (void*)value);
	}
};

struct UnityMessageManager_t4457746B746B34A7F9397BCF555A92EC97EE7831_StaticFields
{
public:
	// System.Int32 UnityMessageManager::ID
	int32_t ___ID_6;

public:
	inline static int32_t get_offset_of_ID_6() { return static_cast<int32_t>(offsetof(UnityMessageManager_t4457746B746B34A7F9397BCF555A92EC97EE7831_StaticFields, ___ID_6)); }
	inline int32_t get_ID_6() const { return ___ID_6; }
	inline int32_t* get_address_of_ID_6() { return &___ID_6; }
	inline void set_ID_6(int32_t value)
	{
		___ID_6 = value;
	}
};


// UnityEngine.XR.ARFoundation.ARRaycastManager
struct  ARRaycastManager_t76CDCF27810673048562A85CAD0E3FEEB3D7328F  : public ARTrackableManager_5_t7935FE663E07F7F1A41BC72B99D0E6B3B2C0E045
{
public:
	// UnityEngine.GameObject UnityEngine.XR.ARFoundation.ARRaycastManager::m_RaycastPrefab
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___m_RaycastPrefab_13;
	// System.Func`4<UnityEngine.Vector2,UnityEngine.XR.ARSubsystems.TrackableType,Unity.Collections.Allocator,Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRRaycastHit>> UnityEngine.XR.ARFoundation.ARRaycastManager::m_RaycastViewportDelegate
	Func_4_t0D7774CBEE7827744440205CF327276346298BD3 * ___m_RaycastViewportDelegate_16;
	// System.Func`4<UnityEngine.Ray,UnityEngine.XR.ARSubsystems.TrackableType,Unity.Collections.Allocator,Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRRaycastHit>> UnityEngine.XR.ARFoundation.ARRaycastManager::m_RaycastRayDelegate
	Func_4_tA3D41D485BD4C73DB44AAD0202CA90BA777C1197 * ___m_RaycastRayDelegate_17;
	// System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.IRaycaster> UnityEngine.XR.ARFoundation.ARRaycastManager::m_Raycasters
	List_1_t179D10142696C7C113D229AC6E1884F4B19CFE27 * ___m_Raycasters_18;

public:
	inline static int32_t get_offset_of_m_RaycastPrefab_13() { return static_cast<int32_t>(offsetof(ARRaycastManager_t76CDCF27810673048562A85CAD0E3FEEB3D7328F, ___m_RaycastPrefab_13)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_m_RaycastPrefab_13() const { return ___m_RaycastPrefab_13; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_m_RaycastPrefab_13() { return &___m_RaycastPrefab_13; }
	inline void set_m_RaycastPrefab_13(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___m_RaycastPrefab_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_RaycastPrefab_13), (void*)value);
	}

	inline static int32_t get_offset_of_m_RaycastViewportDelegate_16() { return static_cast<int32_t>(offsetof(ARRaycastManager_t76CDCF27810673048562A85CAD0E3FEEB3D7328F, ___m_RaycastViewportDelegate_16)); }
	inline Func_4_t0D7774CBEE7827744440205CF327276346298BD3 * get_m_RaycastViewportDelegate_16() const { return ___m_RaycastViewportDelegate_16; }
	inline Func_4_t0D7774CBEE7827744440205CF327276346298BD3 ** get_address_of_m_RaycastViewportDelegate_16() { return &___m_RaycastViewportDelegate_16; }
	inline void set_m_RaycastViewportDelegate_16(Func_4_t0D7774CBEE7827744440205CF327276346298BD3 * value)
	{
		___m_RaycastViewportDelegate_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_RaycastViewportDelegate_16), (void*)value);
	}

	inline static int32_t get_offset_of_m_RaycastRayDelegate_17() { return static_cast<int32_t>(offsetof(ARRaycastManager_t76CDCF27810673048562A85CAD0E3FEEB3D7328F, ___m_RaycastRayDelegate_17)); }
	inline Func_4_tA3D41D485BD4C73DB44AAD0202CA90BA777C1197 * get_m_RaycastRayDelegate_17() const { return ___m_RaycastRayDelegate_17; }
	inline Func_4_tA3D41D485BD4C73DB44AAD0202CA90BA777C1197 ** get_address_of_m_RaycastRayDelegate_17() { return &___m_RaycastRayDelegate_17; }
	inline void set_m_RaycastRayDelegate_17(Func_4_tA3D41D485BD4C73DB44AAD0202CA90BA777C1197 * value)
	{
		___m_RaycastRayDelegate_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_RaycastRayDelegate_17), (void*)value);
	}

	inline static int32_t get_offset_of_m_Raycasters_18() { return static_cast<int32_t>(offsetof(ARRaycastManager_t76CDCF27810673048562A85CAD0E3FEEB3D7328F, ___m_Raycasters_18)); }
	inline List_1_t179D10142696C7C113D229AC6E1884F4B19CFE27 * get_m_Raycasters_18() const { return ___m_Raycasters_18; }
	inline List_1_t179D10142696C7C113D229AC6E1884F4B19CFE27 ** get_address_of_m_Raycasters_18() { return &___m_Raycasters_18; }
	inline void set_m_Raycasters_18(List_1_t179D10142696C7C113D229AC6E1884F4B19CFE27 * value)
	{
		___m_Raycasters_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Raycasters_18), (void*)value);
	}
};

struct ARRaycastManager_t76CDCF27810673048562A85CAD0E3FEEB3D7328F_StaticFields
{
public:
	// System.Comparison`1<UnityEngine.XR.ARFoundation.ARRaycastHit> UnityEngine.XR.ARFoundation.ARRaycastManager::s_RaycastHitComparer
	Comparison_1_t2171DE829C4A23A5663A53F71D283C076F5EFCBE * ___s_RaycastHitComparer_14;
	// System.Collections.Generic.List`1<Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRRaycastHit>> UnityEngine.XR.ARFoundation.ARRaycastManager::s_NativeRaycastHits
	List_1_tAF78E49171E2C987480BE2F36E1E73CEFDA37469 * ___s_NativeRaycastHits_15;

public:
	inline static int32_t get_offset_of_s_RaycastHitComparer_14() { return static_cast<int32_t>(offsetof(ARRaycastManager_t76CDCF27810673048562A85CAD0E3FEEB3D7328F_StaticFields, ___s_RaycastHitComparer_14)); }
	inline Comparison_1_t2171DE829C4A23A5663A53F71D283C076F5EFCBE * get_s_RaycastHitComparer_14() const { return ___s_RaycastHitComparer_14; }
	inline Comparison_1_t2171DE829C4A23A5663A53F71D283C076F5EFCBE ** get_address_of_s_RaycastHitComparer_14() { return &___s_RaycastHitComparer_14; }
	inline void set_s_RaycastHitComparer_14(Comparison_1_t2171DE829C4A23A5663A53F71D283C076F5EFCBE * value)
	{
		___s_RaycastHitComparer_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_RaycastHitComparer_14), (void*)value);
	}

	inline static int32_t get_offset_of_s_NativeRaycastHits_15() { return static_cast<int32_t>(offsetof(ARRaycastManager_t76CDCF27810673048562A85CAD0E3FEEB3D7328F_StaticFields, ___s_NativeRaycastHits_15)); }
	inline List_1_tAF78E49171E2C987480BE2F36E1E73CEFDA37469 * get_s_NativeRaycastHits_15() const { return ___s_NativeRaycastHits_15; }
	inline List_1_tAF78E49171E2C987480BE2F36E1E73CEFDA37469 ** get_address_of_s_NativeRaycastHits_15() { return &___s_NativeRaycastHits_15; }
	inline void set_s_NativeRaycastHits_15(List_1_tAF78E49171E2C987480BE2F36E1E73CEFDA37469 * value)
	{
		___s_NativeRaycastHits_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_NativeRaycastHits_15), (void*)value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// UnityEngine.Transform[]
struct TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * m_Items[1];

public:
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.Camera[]
struct CameraU5BU5D_tAF84B9EC9AF40F1B6294BCEBA82A1AD123A9D001  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * m_Items[1];

public:
	inline Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.MeshRenderer[]
struct MeshRendererU5BU5D_t535468079DEF88AD38546DC5D04E9102C401D228  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) MeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B * m_Items[1];

public:
	inline MeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline MeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, MeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline MeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline MeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, MeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * m_Items[1];

public:
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  m_Items[1];

public:
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		m_Items[index] = value;
	}
};
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE  : public RuntimeArray
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
// System.Type[]
struct TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Type_t * m_Items[1];

public:
	inline Type_t * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Type_t ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Type_t * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Type_t * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Type_t ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Type_t * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// PortalTransitionObject[]
struct PortalTransitionObjectU5BU5D_tA3D594946282A5FE045336C6B819F2CEFA26C97A  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) PortalTransitionObject_t6C6EC1877A4E2BAB5F3366A1E0B7F8C02BC133CE * m_Items[1];

public:
	inline PortalTransitionObject_t6C6EC1877A4E2BAB5F3366A1E0B7F8C02BC133CE * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline PortalTransitionObject_t6C6EC1877A4E2BAB5F3366A1E0B7F8C02BC133CE ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, PortalTransitionObject_t6C6EC1877A4E2BAB5F3366A1E0B7F8C02BC133CE * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline PortalTransitionObject_t6C6EC1877A4E2BAB5F3366A1E0B7F8C02BC133CE * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline PortalTransitionObject_t6C6EC1877A4E2BAB5F3366A1E0B7F8C02BC133CE ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, PortalTransitionObject_t6C6EC1877A4E2BAB5F3366A1E0B7F8C02BC133CE * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Int32[]
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) int32_t m_Items[1];

public:
	inline int32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int32_t value)
	{
		m_Items[index] = value;
	}
};
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8  : public RuntimeArray
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
// UnityEngine.XR.ARFoundation.ARRaycastHit[]
struct ARRaycastHitU5BU5D_t8F4AFCC32363485FEBCE484011A5C258676441CA  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) ARRaycastHit_t2B16118C3B5F17B237335D69B1CA9C27474B621E  m_Items[1];

public:
	inline ARRaycastHit_t2B16118C3B5F17B237335D69B1CA9C27474B621E  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline ARRaycastHit_t2B16118C3B5F17B237335D69B1CA9C27474B621E * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, ARRaycastHit_t2B16118C3B5F17B237335D69B1CA9C27474B621E  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_Transform_2), (void*)NULL);
	}
	inline ARRaycastHit_t2B16118C3B5F17B237335D69B1CA9C27474B621E  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline ARRaycastHit_t2B16118C3B5F17B237335D69B1CA9C27474B621E * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, ARRaycastHit_t2B16118C3B5F17B237335D69B1CA9C27474B621E  value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_Transform_2), (void*)NULL);
	}
};


// System.Void System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARRaycastHit>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_mC26889C0423CCF594A8C363532AC63BB0DB25201_gshared (List_1_tDA68EC1B5CE9809C8709C1E58A7D0F4ACBB1252D * __this, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARRaycastHit>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_mB10F8A78245EBB2F22DD22E5AC8CA7D5FDE70B88_gshared_inline (List_1_tDA68EC1B5CE9809C8709C1E58A7D0F4ACBB1252D * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARRaycastHit>::get_Item(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ARRaycastHit_t2B16118C3B5F17B237335D69B1CA9C27474B621E  List_1_get_Item_m200A6C390D1FAEF2378D70230BD6E96D492ABE04_gshared_inline (List_1_tDA68EC1B5CE9809C8709C1E58A7D0F4ACBB1252D * __this, int32_t ___index0, const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<System.Object>(!!0,UnityEngine.Vector3,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Object_Instantiate_TisRuntimeObject_mB05DEC51C29EF5BB8BD17D055E80217F11E571AA_gshared (RuntimeObject * ___original0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position1, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___rotation2, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponentInChildren<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * GameObject_GetComponentInChildren_TisRuntimeObject_mC8FC6687C66150FA89090C2A7733B2EE2E1315FD_gshared (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::AddComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * GameObject_AddComponent_TisRuntimeObject_mBDBD6EC58A4409E35E4C5D08757C36E4938256B1_gshared (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Add(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, RuntimeObject * ___item0, const RuntimeMethod* method);
// !!0[] UnityEngine.GameObject::GetComponentsInChildren<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* GameObject_GetComponentsInChildren_TisRuntimeObject_m6662AE3C936281A25097CCBD9098A9F85C69279A_gshared (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6  List_1_GetEnumerator_m1739A5E25DF502A6984F9B98CFCAC2D3FABCF233_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_gshared_inline (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m2E56233762839CE55C67E00AC8DD3D4D3F6C0DF0_gshared (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mCFB225D9E5E597A1CC8F958E53BEA1367D8AC7B8_gshared (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mE4D6F6FA5A737865159110CFFF4034001E7F75C1_gshared (Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Clear_mEF66FB646BF483BD2943F78417C299E1C50730D7_gshared (Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::Add(!0,!1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_m2721B332C7315B8590D01121005560C8A4824279_gshared (Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 * __this, int32_t ___key0, int32_t ___value1, const RuntimeMethod* method);
// !1 System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::get_Item(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_get_Item_mFFEEBA09EA430B994459C2D86ADEE218592742A1_gshared (Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 * __this, int32_t ___key0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// !!0 Newtonsoft.Json.Linq.Extensions::Value<System.Int32>(System.Collections.Generic.IEnumerable`1<Newtonsoft.Json.Linq.JToken>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Extensions_Value_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_mE737D3D701C8EEDB2752A3E37EB22CC2C54A17C0_gshared (RuntimeObject* ___value0, const RuntimeMethod* method);
// !!0 Newtonsoft.Json.Linq.Extensions::Value<System.Object>(System.Collections.Generic.IEnumerable`1<Newtonsoft.Json.Linq.JToken>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Extensions_Value_TisRuntimeObject_m02CC5FADCDB6AE8916F8F208B1BB513FA9EE6671_gshared (RuntimeObject* ___value0, const RuntimeMethod* method);
// System.Void <>f__AnonymousType0`4<System.Int32,System.Object,System.Object,System.Object>::.ctor(<id>j__TPar,<seq>j__TPar,<name>j__TPar,<data>j__TPar)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ef__AnonymousType0_4__ctor_mA42D0E885207E71D6D8CE9CC4A204CF6FDCA8565_gshared (U3CU3Ef__AnonymousType0_4_t6AD706F84E39BA82CD246ACA839166C93733D2BF * __this, int32_t ___id0, RuntimeObject * ___seq1, RuntimeObject * ___name2, RuntimeObject * ___data3, const RuntimeMethod* method);
// T SingletonMonoBehaviour`1<System.Object>::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * SingletonMonoBehaviour_1_get_Instance_mCA27DE8B40FBF13AC39B556178FCEE9909F030E4_gshared (const RuntimeMethod* method);
// !!0 UnityEngine.AndroidJavaObject::GetStatic<System.Object>(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * AndroidJavaObject_GetStatic_TisRuntimeObject_mEC743ECF275CB896DE039A9FC1E5672B30C8B3D0_gshared (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * __this, String_t* ___fieldName0, const RuntimeMethod* method);
// !!0[] System.Array::Empty<System.Object>()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_gshared_inline (const RuntimeMethod* method);
// !!0[] UnityEngine.Object::FindObjectsOfType<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* Object_FindObjectsOfType_TisRuntimeObject_m0015B67D48097755F4D6B1D2614DA7ED5C899F18_gshared (const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1<System.Object>::Contains(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Contains_m99C700668AC6D272188471D2D6B784A2B5636C8E_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, RuntimeObject * ___item0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1<System.Object>::Remove(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Remove_m753F7B4281CC4D02C07AE90726F51EF34B588DF7_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, RuntimeObject * ___item0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::Add(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_mAE131B53917AD7132F6BA2C05D5D17C38C5A2E59_gshared (List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___item0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Int32>::Add(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_mEE653047BDB3486ACC2E16DC6C3422A0BA48F01F_gshared (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * __this, int32_t ___item0, const RuntimeMethod* method);
// !0[] System.Collections.Generic.List`1<UnityEngine.Vector3>::ToArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* List_1_ToArray_mCFFA6AFA30A20FB2FFC3846AD114DF7BC21BFFBC_gshared (List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * __this, const RuntimeMethod* method);
// !0[] System.Collections.Generic.List`1<System.Int32>::ToArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* List_1_ToArray_mDEFFC768D9AAD376D27FC0FC1F7B57EE2E93479F_gshared (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Clear_mE0F03A2E42E2F7F8A282AE01C12945F7379DC702_gshared (List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Int32>::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Clear_m508B72E5229FAE7042D99A04555F66F10C597C7A_gshared (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_mF8F23D572031748AD428623AE16803455997E297_gshared (List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Int32>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m45E78772E9157F6CD684A69AAB07CE4082FE5FFD_gshared (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityAction`2<UnityEngine.SceneManagement.Scene,System.Int32Enum>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction_2__ctor_m50E7B823E46CB327D49A2D55A761F57472037634_gshared (UnityAction_2_t808E43EBC9AA89CEA5830BD187EC213182A02B50 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Add(!0,!1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_m39BC00F21EE9459BB8DEF5479F95F79C5C740682_gshared (Dictionary_2_tE1E5B6327FFA2C7AE34A69E0011815C914771C2F * __this, int32_t ___key0, RuntimeObject * ___value1, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::TryGetValue(!0,!1&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_m0A88BBB063127AFAD853506A433ACB07D7AAD67E_gshared (Dictionary_2_tE1E5B6327FFA2C7AE34A69E0011815C914771C2F * __this, int32_t ___key0, RuntimeObject ** ___value1, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Remove(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_mAC77908EC28C242ACC8C3C4CDEA945E73B95CFA4_gshared (Dictionary_2_tE1E5B6327FFA2C7AE34A69E0011815C914771C2F * __this, int32_t ___key0, const RuntimeMethod* method);
// T MessageHandler::getData<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * MessageHandler_getData_TisRuntimeObject_m4B0F54A0EA8EBDB824898342D0FB18471D377EC9_gshared (MessageHandler_t61D3A022CD7E59124898915FB6A1EB56ACBF19B7 * __this, const RuntimeMethod* method);
// System.Void System.Action`1<System.Object>::Invoke(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1_Invoke_m587509C88BB83721D7918D89DF07606BB752D744_gshared (Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * __this, RuntimeObject * ___obj0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mE7F9D51201F5A72BF4995CA0F3F0E866DB21E638_gshared (Dictionary_2_tE1E5B6327FFA2C7AE34A69E0011815C914771C2F * __this, const RuntimeMethod* method);
// System.Void SingletonMonoBehaviour`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SingletonMonoBehaviour_1__ctor_mFE92A122FFAD62C1BBD57040124CFB238F2301E3_gshared (SingletonMonoBehaviour_1_tE14741F2799AE3F949345E77B1A572DC11A30DDE * __this, const RuntimeMethod* method);

// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void ARCusor::UpadteCursor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARCusor_UpadteCursor_m94EC6F91630CCB9562BE23C64B02D4680894ABBF (ARCusor_t203938EAE3094278392B0B5F4A9DBA22B5216F2B * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.Input::get_touchCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Input_get_touchCount_mE1A06AB1973E3456AE398B3CC5105F27CC7335D6 (const RuntimeMethod* method);
// UnityEngine.Touch UnityEngine.Input::GetTouch(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C  Input_GetTouch_m6A2A31482B1A7D018C3AAC188C02F5D14500C81F (int32_t ___index0, const RuntimeMethod* method);
// UnityEngine.TouchPhase UnityEngine.Touch::get_phase()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Touch_get_phase_m576EA3F4FE1D12EB85510326AD8EC3C2EB267257 (Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.GameObject::get_active()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GameObject_get_active_mAE45BB4A1D06BE2AF8C460593FC0346A5EF8014D (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Transform::get_rotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  Transform_get_rotation_m4AA3858C00DF4C9614B80352558C4C37D08D2200 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method);
// System.Void UnityEngine.Quaternion::SetLookRotation(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Quaternion_SetLookRotation_m51FB0FD3F6EB54C4674C0B3690D3825D954EABE5 (Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___view0, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARRaycastHit>::.ctor()
inline void List_1__ctor_mC26889C0423CCF594A8C363532AC63BB0DB25201 (List_1_tDA68EC1B5CE9809C8709C1E58A7D0F4ACBB1252D * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tDA68EC1B5CE9809C8709C1E58A7D0F4ACBB1252D *, const RuntimeMethod*))List_1__ctor_mC26889C0423CCF594A8C363532AC63BB0DB25201_gshared)(__this, method);
}
// UnityEngine.Vector2 UnityEngine.Touch::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Touch_get_position_mE32B04C6DA32A0965C403A31847ED7F1725EA1DE (Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.ARFoundation.ARRaycastManager::Raycast(UnityEngine.Vector2,System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARRaycastHit>,UnityEngine.XR.ARSubsystems.TrackableType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ARRaycastManager_Raycast_mCC2851DAC2542C59528FCE21242231DFAF024650 (ARRaycastManager_t76CDCF27810673048562A85CAD0E3FEEB3D7328F * __this, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___screenPoint0, List_1_tDA68EC1B5CE9809C8709C1E58A7D0F4ACBB1252D * ___hitResults1, int32_t ___trackableTypes2, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARRaycastHit>::get_Count()
inline int32_t List_1_get_Count_mB10F8A78245EBB2F22DD22E5AC8CA7D5FDE70B88_inline (List_1_tDA68EC1B5CE9809C8709C1E58A7D0F4ACBB1252D * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tDA68EC1B5CE9809C8709C1E58A7D0F4ACBB1252D *, const RuntimeMethod*))List_1_get_Count_mB10F8A78245EBB2F22DD22E5AC8CA7D5FDE70B88_gshared_inline)(__this, method);
}
// !0 System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARRaycastHit>::get_Item(System.Int32)
inline ARRaycastHit_t2B16118C3B5F17B237335D69B1CA9C27474B621E  List_1_get_Item_m200A6C390D1FAEF2378D70230BD6E96D492ABE04_inline (List_1_tDA68EC1B5CE9809C8709C1E58A7D0F4ACBB1252D * __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  ARRaycastHit_t2B16118C3B5F17B237335D69B1CA9C27474B621E  (*) (List_1_tDA68EC1B5CE9809C8709C1E58A7D0F4ACBB1252D *, int32_t, const RuntimeMethod*))List_1_get_Item_m200A6C390D1FAEF2378D70230BD6E96D492ABE04_gshared_inline)(__this, ___index0, method);
}
// UnityEngine.Pose UnityEngine.XR.ARFoundation.ARRaycastHit::get_pose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  ARRaycastHit_get_pose_mB4D8BC45F23D9F2C2C8DCAFA88DB1221D76EF02B (ARRaycastHit_t2B16118C3B5F17B237335D69B1CA9C27474B621E * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<UnityEngine.GameObject>(!!0,UnityEngine.Vector3,UnityEngine.Quaternion)
inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___original0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position1, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___rotation2, const RuntimeMethod* method)
{
	return ((  GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E , Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 , const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_mB05DEC51C29EF5BB8BD17D055E80217F11E571AA_gshared)(___original0, ___position1, ___rotation2, method);
}
// UnityEngine.Camera UnityEngine.Camera::get_main()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * Camera_get_main_mC337C621B91591CEF89504C97EF64D717C12871C (const RuntimeMethod* method);
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * __this, float ___x0, float ___y1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector2_op_Implicit_m4FA146E613DBFE6C1C4B0E9B461D622E6F2FC294_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___v0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Camera::ViewportToScreenPoint(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Camera_ViewportToScreenPoint_mE22A3D0085E534EF4D0591439EF15DDDB3181DF8 (Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position0, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___v0, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_rotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_rotation_m1B5F3D4CE984AB31254615C9C71B0E54978583B4 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Rendering.CommandBuffer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CommandBuffer__ctor_mB7E1174EB3B4E2E53BCC6532840AB55ECE6D06CF (CommandBuffer_t25CD231BD3E822660339DB7D0E8F8ED6B7DBEA29 * __this, const RuntimeMethod* method);
// UnityEngine.Rendering.RenderTargetIdentifier UnityEngine.Rendering.RenderTargetIdentifier::op_Implicit(UnityEngine.Rendering.BuiltinRenderTextureType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RenderTargetIdentifier_t70F41F3016FFCC4AAF4D7C57F280818114534C13  RenderTargetIdentifier_op_Implicit_mB7B58C1D295E2DAE3C76874D030D4878A825E359 (int32_t ___type0, const RuntimeMethod* method);
// System.Void UnityEngine.Rendering.CommandBuffer::Blit(UnityEngine.Texture,UnityEngine.Rendering.RenderTargetIdentifier,UnityEngine.Material)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CommandBuffer_Blit_m76E1726DC41C41B8AFAE8DD4CA80627D3AB3802B (CommandBuffer_t25CD231BD3E822660339DB7D0E8F8ED6B7DBEA29 * __this, Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * ___source0, RenderTargetIdentifier_t70F41F3016FFCC4AAF4D7C57F280818114534C13  ___dest1, Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___mat2, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<UnityEngine.Camera>()
inline Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * Component_GetComponent_TisCamera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_mE17146EF5B0D8E9F9D2D2D94567BF211AD00D320 (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// System.Void UnityEngine.Camera::AddCommandBuffer(UnityEngine.Rendering.CameraEvent,UnityEngine.Rendering.CommandBuffer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Camera_AddCommandBuffer_m8F88C5009AC9676BCD0AD1AE4AA655D5BF71CB2F (Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * __this, int32_t ___evt0, CommandBuffer_t25CD231BD3E822660339DB7D0E8F8ED6B7DBEA29 * ___buffer1, const RuntimeMethod* method);
// System.Void UnityEngine.Camera::RemoveCommandBuffer(UnityEngine.Rendering.CameraEvent,UnityEngine.Rendering.CommandBuffer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Camera_RemoveCommandBuffer_m6F4BE369C87C0DB3913AE4A8DA31B2838B1DA3E6 (Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * __this, int32_t ___evt0, CommandBuffer_t25CD231BD3E822660339DB7D0E8F8ED6B7DBEA29 * ___buffer1, const RuntimeMethod* method);
// System.Void ARKitCameraRender::InitializeCommandBuffer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARKitCameraRender_InitializeCommandBuffer_mD503B7D13460299FF8534691D280E96ED29E3896 (ARKitCameraRender_t22DD82E196622777058CEA91BF2C1BAA2477CF98 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<UnityEngine.AudioListener>()
inline AudioListener_t03B51B434A263F9AFD07AC8AA5CB4FE6402252A3 * Component_GetComponent_TisAudioListener_t03B51B434A263F9AFD07AC8AA5CB4FE6402252A3_m0DA4C699234A3DCDAC948DDC6763AE79C2FB5E83 (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  AudioListener_t03B51B434A263F9AFD07AC8AA5CB4FE6402252A3 * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// System.Boolean UnityEngine.Object::op_Implicit(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___exists0, const RuntimeMethod* method);
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___obj0, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<UnityEngine.FlareLayer>()
inline FlareLayer_t0E96E3DA6EDBA0626F2322F17A594D4E5E34FBB6 * Component_GetComponent_TisFlareLayer_t0E96E3DA6EDBA0626F2322F17A594D4E5E34FBB6_m340092F5A48BE24898132A824851BD0E8C1468E3 (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  FlareLayer_t0E96E3DA6EDBA0626F2322F17A594D4E5E34FBB6 * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.GameObject::set_tag(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_set_tag_m0EBA46574304C71E047A33BDD5F5D49E9D9A25BE (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Behaviour::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32 (Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9 * __this, bool ___value0, const RuntimeMethod* method);
// System.Int32 UnityEngine.Camera::get_cullingMask()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Camera_get_cullingMask_m63492ED3AFA8F571FBED0B1729264A2E3BB64236 (Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Camera::set_cullingMask(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Camera_set_cullingMask_mB4B1EE4C6CC355625EDE08EAF17E99DAB242E0CC (Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * __this, int32_t ___value0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.Camera>()
inline Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * GameObject_GetComponent_TisCamera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_mE3C86755BA935C0F4BDABF7D1E338FA5247E4F49 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// !!0 UnityEngine.GameObject::GetComponentInChildren<UnityEngine.Camera>()
inline Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * GameObject_GetComponentInChildren_TisCamera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_m82C012E5C19C54F736F3C32378E321895DF91F42 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponentInChildren_TisRuntimeObject_mC8FC6687C66150FA89090C2A7733B2EE2E1315FD_gshared)(__this, method);
}
// System.Void ControllerGrabObject::SetCollidingObject(UnityEngine.Collider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ControllerGrabObject_SetCollidingObject_m620F8AC9F7E93D0943DC0D9A501D6C9D6D4CDFD1 (ControllerGrabObject_tD8EC56C9C71EAC95FD692C2D16CA944AF071DD4E * __this, Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * ___col0, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<UnityEngine.Rigidbody>()
inline Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * Component_GetComponent_TisRigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A_m9DC24AA806B0B65E917751F7A3AFDB58861157CE (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// UnityEngine.FixedJoint ControllerGrabObject::AddFixedJoint()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FixedJoint_tB98C66DD49AFBAB1114A59E8132EB2498C540B09 * ControllerGrabObject_AddFixedJoint_m104337E6EB483F6186D28BA8FAE72EAA5F2A276A (ControllerGrabObject_tD8EC56C9C71EAC95FD692C2D16CA944AF071DD4E * __this, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.Rigidbody>()
inline Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * GameObject_GetComponent_TisRigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A_mA1779277BB07CE3D2CB8E340CEA85C40C6B52354 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// System.Void UnityEngine.Joint::set_connectedBody(UnityEngine.Rigidbody)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Joint_set_connectedBody_m572C6C32E2FC5263AECDC460D50E5B0F79727B30 (Joint_t085126F36196FC982700F4EA8466CF10C90EC15E * __this, Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * ___value0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::AddComponent<UnityEngine.FixedJoint>()
inline FixedJoint_tB98C66DD49AFBAB1114A59E8132EB2498C540B09 * GameObject_AddComponent_TisFixedJoint_tB98C66DD49AFBAB1114A59E8132EB2498C540B09_m85194BB051287849C5780CB836BBE0C69DE4151A (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  FixedJoint_tB98C66DD49AFBAB1114A59E8132EB2498C540B09 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_mBDBD6EC58A4409E35E4C5D08757C36E4938256B1_gshared)(__this, method);
}
// System.Void UnityEngine.Joint::set_breakForce(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Joint_set_breakForce_m40F48AA52A113A84C9FE2CF42D46D09AFE76FC7E (Joint_t085126F36196FC982700F4EA8466CF10C90EC15E * __this, float ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Joint::set_breakTorque(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Joint_set_breakTorque_m2DF96181B4379D971CA4BD6BA59702D548292AB7 (Joint_t085126F36196FC982700F4EA8466CF10C90EC15E * __this, float ___value0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<Portal>::.ctor()
inline void List_1__ctor_mC3D6B78E090A56B23425C490B695934EC2C29851 (List_1_tF98B6D846565344249C79E895B9E3BF385EA519E * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tF98B6D846565344249C79E895B9E3BF385EA519E *, const RuntimeMethod*))List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared)(__this, method);
}
// LayerManager LayerManager::Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LayerManager_t3527BEB62E0C7C2C45055FE662E50E75642F7942 * LayerManager_Instance_m22B6988456614FBB6BD5D0232CF949B36C7F757C (const RuntimeMethod* method);
// System.String UnityEngine.Object::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * __this, const RuntimeMethod* method);
// System.Int32 LayerManager::CreateLayer(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LayerManager_CreateLayer_m7DFE6331E95A38042DA768683F4979C47DBAAC25 (LayerManager_t3527BEB62E0C7C2C45055FE662E50E75642F7942 * __this, String_t* ___name0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<Dimension>::Add(!0)
inline void List_1_Add_m98F9810F948087F92A86F8F8B9172D84010E861C (List_1_t8541C8BADA1A4B90DE74D36D29037CF0E814B9AA * __this, Dimension_t28D074E7D31C414382BEB891CF77CF6345E04C34 * ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t8541C8BADA1A4B90DE74D36D29037CF0E814B9AA *, Dimension_t28D074E7D31C414382BEB891CF77CF6345E04C34 *, const RuntimeMethod*))List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared)(__this, ___item0, method);
}
// System.Void UnityEngine.GameObject::set_layer(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_set_layer_m2F946916ACB41A59C46346F5243F2BAC235A36A6 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Int32 UnityEngine.LayerMask::NameToLayer(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LayerMask_NameToLayer_m6A2BBB60EC90F7EC48A6A91CA98149C547A04C0A (String_t* ___layerName0, const RuntimeMethod* method);
// !!0[] UnityEngine.GameObject::GetComponentsInChildren<UnityEngine.Transform>()
inline TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D* GameObject_GetComponentsInChildren_TisTransform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1_m1D81E170D9B0CD0720A6BCDD722BC8A0B4AA8F0E (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D* (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponentsInChildren_TisRuntimeObject_m6662AE3C936281A25097CCBD9098A9F85C69279A_gshared)(__this, method);
}
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.Light>()
inline Light_tA2F349FE839781469A0344CF6039B51512394275 * GameObject_GetComponent_TisLight_tA2F349FE839781469A0344CF6039B51512394275_m0EB52103D195BED7315C22DC3394855236FCEBDC (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  Light_tA2F349FE839781469A0344CF6039B51512394275 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// System.Void UnityEngine.Light::set_cullingMask(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Light_set_cullingMask_m4C8DE4FCAA45EBDC4F5A29639D87A4B8BA5AF717 (Light_tA2F349FE839781469A0344CF6039B51512394275 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Int32 UnityEngine.Light::get_cullingMask()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Light_get_cullingMask_mE74EEA0F3B6C92793ADA4B6B860B9B85B6668A11 (Light_tA2F349FE839781469A0344CF6039B51512394275 * __this, const RuntimeMethod* method);
// UnityEngine.Camera[] UnityEngine.Camera::get_allCameras()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CameraU5BU5D_tAF84B9EC9AF40F1B6294BCEBA82A1AD123A9D001* Camera_get_allCameras_m1191B0E8A5627AA6AE59D4A3A079C0CED0BDF3E8 (const RuntimeMethod* method);
// System.Void CameraExtensions::LayerCullingShow(UnityEngine.Camera,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraExtensions_LayerCullingShow_m7BD7EE4365D62985B64F84ADC12078390A2F68B2 (Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * ___cam0, int32_t ___layer1, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<UnityEngine.Skybox>()
inline Skybox_t8B0EA7C092363DBCCF0B51434F04E7EE661E28E0 * Component_GetComponent_TisSkybox_t8B0EA7C092363DBCCF0B51434F04E7EE661E28E0_m11DD63313E45B5E0C62FFCF04F0962CCF57D9FA2 (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  Skybox_t8B0EA7C092363DBCCF0B51434F04E7EE661E28E0 * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// System.Void UnityEngine.Skybox::set_material(UnityEngine.Material)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Skybox_set_material_m74316F6709A669D3181C4CB1EA1F40E745D0F88A (Skybox_t8B0EA7C092363DBCCF0B51434F04E7EE661E28E0 * __this, Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___value0, const RuntimeMethod* method);
// System.Void CameraExtensions::LayerCullingHide(UnityEngine.Camera,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraExtensions_LayerCullingHide_mA075BA4596F58AB98EB1B0587DE1C769E8589DE2 (Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * ___cam0, int32_t ___layerMask1, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___x0, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___y1, const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<Portal>::GetEnumerator()
inline Enumerator_t42BF4791E9024F9ADF2FF759B419F7DD450B89AA  List_1_GetEnumerator_mF6A8DB4F94B9B38EFF385A072ECECAD67222BFED (List_1_tF98B6D846565344249C79E895B9E3BF385EA519E * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t42BF4791E9024F9ADF2FF759B419F7DD450B89AA  (*) (List_1_tF98B6D846565344249C79E895B9E3BF385EA519E *, const RuntimeMethod*))List_1_GetEnumerator_m1739A5E25DF502A6984F9B98CFCAC2D3FABCF233_gshared)(__this, method);
}
// !0 System.Collections.Generic.List`1/Enumerator<Portal>::get_Current()
inline Portal_t355BC086AE7B4F5E476064C8805CA0830E0CA48E * Enumerator_get_Current_m463A9A414E2DBE1AB63DB0E3DD5116ED743D7AFD_inline (Enumerator_t42BF4791E9024F9ADF2FF759B419F7DD450B89AA * __this, const RuntimeMethod* method)
{
	return ((  Portal_t355BC086AE7B4F5E476064C8805CA0830E0CA48E * (*) (Enumerator_t42BF4791E9024F9ADF2FF759B419F7DD450B89AA *, const RuntimeMethod*))Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_gshared_inline)(__this, method);
}
// Dimension Portal::ToDimension()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Dimension_t28D074E7D31C414382BEB891CF77CF6345E04C34 * Portal_ToDimension_mD33B18BBDBEDE671CC5737BD70C3CFD5A1738BA3 (Portal_t355BC086AE7B4F5E476064C8805CA0830E0CA48E * __this, const RuntimeMethod* method);
// System.Void Portal::SwitchPortalDimensions()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Portal_SwitchPortalDimensions_m58C134865A1017CC8B8D1A5404F22B4DF2313E16 (Portal_t355BC086AE7B4F5E476064C8805CA0830E0CA48E * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<Portal>::MoveNext()
inline bool Enumerator_MoveNext_mB6178B876BA8A284965E31BEE9A1D81C6B22E419 (Enumerator_t42BF4791E9024F9ADF2FF759B419F7DD450B89AA * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t42BF4791E9024F9ADF2FF759B419F7DD450B89AA *, const RuntimeMethod*))Enumerator_MoveNext_m2E56233762839CE55C67E00AC8DD3D4D3F6C0DF0_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<Portal>::Dispose()
inline void Enumerator_Dispose_m2CA1D495CF53152D382FE86C5F0A73F644F3E6B7 (Enumerator_t42BF4791E9024F9ADF2FF759B419F7DD450B89AA * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t42BF4791E9024F9ADF2FF759B419F7DD450B89AA *, const RuntimeMethod*))Enumerator_Dispose_mCFB225D9E5E597A1CC8F958E53BEA1367D8AC7B8_gshared)(__this, method);
}
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method);
// System.Boolean UnityEngine.Component::CompareTag(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Component_CompareTag_m17D74EDCC81A10B18A0A588519F522E8DF1D7879 (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, String_t* ___tag0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::.ctor()
inline void Dictionary_2__ctor_mE4D6F6FA5A737865159110CFFF4034001E7F75C1 (Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 *, const RuntimeMethod*))Dictionary_2__ctor_mE4D6F6FA5A737865159110CFFF4034001E7F75C1_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::Clear()
inline void Dictionary_2_Clear_mEF66FB646BF483BD2943F78417C299E1C50730D7 (Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 *, const RuntimeMethod*))Dictionary_2_Clear_mEF66FB646BF483BD2943F78417C299E1C50730D7_gshared)(__this, method);
}
// System.Int32 UnityEngine.Object::GetInstanceID()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Object_GetInstanceID_m7CF962BC1DB5C03F3522F88728CB2F514582B501 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.GameObject::get_layer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GameObject_get_layer_m9D4C23A2FD105AF9964445BF18A77E8A49012F9F (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::Add(!0,!1)
inline void Dictionary_2_Add_m2721B332C7315B8590D01121005560C8A4824279 (Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 * __this, int32_t ___key0, int32_t ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 *, int32_t, int32_t, const RuntimeMethod*))Dictionary_2_Add_m2721B332C7315B8590D01121005560C8A4824279_gshared)(__this, ___key0, ___value1, method);
}
// !1 System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::get_Item(!0)
inline int32_t Dictionary_2_get_Item_mFFEEBA09EA430B994459C2D86ADEE218592742A1 (Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 * __this, int32_t ___key0, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 *, int32_t, const RuntimeMethod*))Dictionary_2_get_Item_mFFEEBA09EA430B994459C2D86ADEE218592742A1_gshared)(__this, ___key0, method);
}
// !!0[] UnityEngine.GameObject::GetComponentsInChildren<UnityEngine.MeshRenderer>()
inline MeshRendererU5BU5D_t535468079DEF88AD38546DC5D04E9102C401D228* GameObject_GetComponentsInChildren_TisMeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B_m37C5016444DB54041F938EA344271762E17600C3 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  MeshRendererU5BU5D_t535468079DEF88AD38546DC5D04E9102C401D228* (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponentsInChildren_TisRuntimeObject_m6662AE3C936281A25097CCBD9098A9F85C69279A_gshared)(__this, method);
}
// UnityEngine.Transform UnityEngine.Transform::get_parent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * Transform_get_parent_m7D06005D9CB55F90F39D42F6A2AF9C7BC80745C9 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___x0, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___y1, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<UnityEngine.CharacterController>()
inline CharacterController_tCCF68621C784CCB3391E0C66FE134F6F93DD6C2E * Component_GetComponent_TisCharacterController_tCCF68621C784CCB3391E0C66FE134F6F93DD6C2E_m3DB1DD5819F96D7C7F6F19C12138AC48D21DBBF2 (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  CharacterController_tCCF68621C784CCB3391E0C66FE134F6F93DD6C2E * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// System.Void LayerManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LayerManager__ctor_mA35555895E60EF39B2508ED3EAD343075E14D5CB (LayerManager_t3527BEB62E0C7C2C45055FE662E50E75642F7942 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.String>::.ctor()
inline void List_1__ctor_m30C52A4F2828D86CA3FAB0B1B583948F4DA9F1F9 (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 *, const RuntimeMethod*))List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<System.String>::Add(!0)
inline void List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * __this, String_t* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 *, String_t*, const RuntimeMethod*))List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared)(__this, ___item0, method);
}
// System.Void UnityEngine.Physics::IgnoreLayerCollision(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Physics_IgnoreLayerCollision_m9ED27D07C47AF3CBA70D3A5E5DF948E1035667B8 (int32_t ___layer10, int32_t ___layer21, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<System.String>::get_Count()
inline int32_t List_1_get_Count_m199DB87BCE947106FBA38E19FDFE80CB65B61144_inline (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 *, const RuntimeMethod*))List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline)(__this, method);
}
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<Dimension>::.ctor()
inline void List_1__ctor_m4A851968BE5369F4D77375CA40EE5839A548A9CA (List_1_t8541C8BADA1A4B90DE74D36D29037CF0E814B9AA * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t8541C8BADA1A4B90DE74D36D29037CF0E814B9AA *, const RuntimeMethod*))List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared)(__this, method);
}
// UnityEngine.GameObject[] UnityEngine.GameObject::FindGameObjectsWithTag(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* GameObject_FindGameObjectsWithTag_m0948320611DC82590D59A36D1C57155B1B6CE186 (String_t* ___tag0, const RuntimeMethod* method);
// System.Void MainCameraController::UpdateMoving()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainCameraController_UpdateMoving_mA9700A03A415926751D5BFD1EB3EE5B620242953 (MainCameraController_t90D850F2A0257D38B41668E324DEF1DDB2F89BFC * __this, const RuntimeMethod* method);
// System.Void MainCameraController::updateRotationByMouse()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainCameraController_updateRotationByMouse_mFB289B014C7F0700D4016B1414386EBFFED7F3D7 (MainCameraController_t90D850F2A0257D38B41668E324DEF1DDB2F89BFC * __this, const RuntimeMethod* method);
// System.Void MainCameraController::UpdateCricle2DView()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainCameraController_UpdateCricle2DView_m0DD41E64192A34DA3E0152C184519671BC03CC8A (MainCameraController_t90D850F2A0257D38B41668E324DEF1DDB2F89BFC * __this, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8 (RuntimeObject * ___message0, const RuntimeMethod* method);
// System.String UnityEngine.Component::get_tag()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Component_get_tag_m77B4A7356E58F985216CC53966F7A9699454803E (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.Transform::get_childCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Transform_get_childCount_mCBED4F6D3F6A7386C4D97C2C3FD25C383A0BCD05 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.Transform::GetChild(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, int32_t ___index0, const RuntimeMethod* method);
// System.String System.String::Format(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mB3D38E5238C3164DB4D7D29339D9E225A4496D17 (String_t* ___format0, RuntimeObject * ___arg01, const RuntimeMethod* method);
// System.Boolean UnityEngine.Input::GetMouseButton(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetMouseButton_m27BF2DDBF38A38787B83A13D3E6F0F88F7C834C1 (int32_t ___button0, const RuntimeMethod* method);
// System.Single UnityEngine.Input::GetAxis(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Input_GetAxis_m939297DEB2ECF8D8D09AD66EB69979AAD2B62326 (String_t* ___axisName0, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::Rotate(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_Rotate_m027A155054DDC4206F679EFB86BE0960D45C33A7 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___eulers0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Quaternion::get_eulerAngles()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Quaternion_get_eulerAngles_m3DA616CAD670235A407E8A7A75925AA8E22338C3 (Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * __this, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::Euler(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  Quaternion_Euler_m37BF99FFFA09F4B3F83DC066641B82C59B19A9C3 (float ___x0, float ___y1, float ___z2, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_eulerAngles()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_get_eulerAngles_mCF1E10C36ED1F03804A1D10A9BAB272E0EA8766F (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// System.String UnityEngine.Vector3::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Vector3_ToString_mD5085501F9A0483542E9F7B18CD09C0AB977E318 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::print(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour_print_m4F113B89EC1C221CAC6EC64365E6DAD0AF86F090 (RuntimeObject * ___message0, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::Euler(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  Quaternion_Euler_m887ABE4F4DD563351E9874D63922C2F53969BBAB (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___euler0, const RuntimeMethod* method);
// System.Single UnityEngine.Time::get_deltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290 (const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<Dimension>::GetEnumerator()
inline Enumerator_t49197A306F3EC32F88087BFF9EC8A440ED6844E1  List_1_GetEnumerator_m86205E64F6403EC8EC22940E68CF9398AAB017D9 (List_1_t8541C8BADA1A4B90DE74D36D29037CF0E814B9AA * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t49197A306F3EC32F88087BFF9EC8A440ED6844E1  (*) (List_1_t8541C8BADA1A4B90DE74D36D29037CF0E814B9AA *, const RuntimeMethod*))List_1_GetEnumerator_m1739A5E25DF502A6984F9B98CFCAC2D3FABCF233_gshared)(__this, method);
}
// !0 System.Collections.Generic.List`1/Enumerator<Dimension>::get_Current()
inline Dimension_t28D074E7D31C414382BEB891CF77CF6345E04C34 * Enumerator_get_Current_m65D32F0E72C3886B66F19493D4B5BA26910FA843_inline (Enumerator_t49197A306F3EC32F88087BFF9EC8A440ED6844E1 * __this, const RuntimeMethod* method)
{
	return ((  Dimension_t28D074E7D31C414382BEB891CF77CF6345E04C34 * (*) (Enumerator_t49197A306F3EC32F88087BFF9EC8A440ED6844E1 *, const RuntimeMethod*))Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_gshared_inline)(__this, method);
}
// System.Void Dimension::PreRender()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dimension_PreRender_m60DBD0F998687A2746D1E5D85DB775C0AF028641 (Dimension_t28D074E7D31C414382BEB891CF77CF6345E04C34 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<Dimension>::MoveNext()
inline bool Enumerator_MoveNext_mFC3DBA62507504A47BA3A291D2D082A8B90F66C3 (Enumerator_t49197A306F3EC32F88087BFF9EC8A440ED6844E1 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t49197A306F3EC32F88087BFF9EC8A440ED6844E1 *, const RuntimeMethod*))Enumerator_MoveNext_m2E56233762839CE55C67E00AC8DD3D4D3F6C0DF0_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<Dimension>::Dispose()
inline void Enumerator_Dispose_mC476650D5343DD52E76FFBFD14DC33545E715451 (Enumerator_t49197A306F3EC32F88087BFF9EC8A440ED6844E1 * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t49197A306F3EC32F88087BFF9EC8A440ED6844E1 *, const RuntimeMethod*))Enumerator_Dispose_mCFB225D9E5E597A1CC8F958E53BEA1367D8AC7B8_gshared)(__this, method);
}
// System.Void Dimension::PostRender()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dimension_PostRender_mCC43245957A1215A2492A41C3E3A81454968BC22 (Dimension_t28D074E7D31C414382BEB891CF77CF6345E04C34 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<UnityEngine.MeshFilter>()
inline MeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A * Component_GetComponent_TisMeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A_m4E31C5D3D0490AEE405B54BE9F61802EA425B9DC (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  MeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// UnityEngine.Mesh UnityEngine.MeshFilter::get_mesh()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * MeshFilter_get_mesh_mFC1DF5AFBC1E4269D08628DB83C954882FD2B417 (MeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A * __this, const RuntimeMethod* method);
// UnityEngine.Vector3[] UnityEngine.Mesh::get_vertices()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* Mesh_get_vertices_mB7A79698792B3CBA0E7E6EACDA6C031E496FB595 (Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Mesh::set_vertices(UnityEngine.Vector3[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_set_vertices_m38F0908D0FDFE484BE19E94BE9D6176667469AAD (Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * __this, Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Mesh::RecalculateNormals()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_RecalculateNormals_mEBF9ED932D0B463E4EF3947D232CC8BEECAE1A4A (Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::InverseTransformPoint(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_InverseTransformPoint_m476ABC8F3F14824D7D82FE2C54CEE5A151A669B8 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position0, const RuntimeMethod* method);
// System.Void MeshDeformer::AddDeformingForce(UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeshDeformer_AddDeformingForce_mE4BDC03DC7322C72885087E924D25CA464FEA9F0 (MeshDeformer_t552F11EC8166EE3DED6958E9B4F0050853FB31F8 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___point0, float ___force1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Subtraction(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_localScale()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_get_localScale_mD9DF6CA81108C2A6002B5EA2BE25A6CD2723D046 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Vector3::get_magnitude()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Vector3_get_magnitude_mDDD40612220D8104E77E993E18A101A69A944991 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Mathf::Max(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Mathf_Max_m4CE510E1F1013B33275F01543731A51A58BA0775 (float ___a0, float ___b1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_normalized()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_get_normalized_m2FA6DF38F97BDA4CCBDAE12B9FE913A241DAC8D5 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, float ___d1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, const RuntimeMethod* method);
// System.Void MeshDeformerInput::HandleInput()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeshDeformerInput_HandleInput_m3E1C9919ECA7B323DFFC339DDCDAAD367B7292D3 (MeshDeformerInput_t539337F65D4F0BAA0C89ED1BF77F0B33C9E3EE6E * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Input::get_mousePosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Input_get_mousePosition_m79528BC2F30C57054641F709C855130AE586AC0E (const RuntimeMethod* method);
// UnityEngine.Ray UnityEngine.Camera::ScreenPointToRay(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6  Camera_ScreenPointToRay_mD385213935A81030EDC604A39FD64761077CFBAB (Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___pos0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Physics::Raycast(UnityEngine.Ray,UnityEngine.RaycastHit&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Physics_Raycast_m80EC8EEDA0ABA8B01838BA9054834CD1A381916E (Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6  ___ray0, RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89 * ___hitInfo1, const RuntimeMethod* method);
// UnityEngine.Collider UnityEngine.RaycastHit::get_collider()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * RaycastHit_get_collider_m13A3DE16FBC631E0A1F987E0B22CE70AF8AB539E (RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<MeshDeformer>()
inline MeshDeformer_t552F11EC8166EE3DED6958E9B4F0050853FB31F8 * Component_GetComponent_TisMeshDeformer_t552F11EC8166EE3DED6958E9B4F0050853FB31F8_mB0560E6ABD7E285C74F1A9D629D2B400D9A60FFF (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  MeshDeformer_t552F11EC8166EE3DED6958E9B4F0050853FB31F8 * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// UnityEngine.Vector3 UnityEngine.RaycastHit::get_point()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  RaycastHit_get_point_m32F7282CBB2E13393A33BAD046BDA218E48DD21E (RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.RaycastHit::get_normal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  RaycastHit_get_normal_m2C813B25BAECD87FD9E9CB294278B291F4CC6674 (RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89 * __this, const RuntimeMethod* method);
// Newtonsoft.Json.Linq.JObject Newtonsoft.Json.Linq.JObject::Parse(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JObject_tD2FCDDA48CACDBCB702BAF49B7C649084F6FDA34 * JObject_Parse_mA2260CFB81694E96A188F3FC5B9B60BA69F2AE74 (String_t* ___json0, const RuntimeMethod* method);
// Newtonsoft.Json.Linq.JToken Newtonsoft.Json.Linq.JObject::GetValue(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JToken_t78F4E878E41125BB40B529918D104EDDC99E00C9 * JObject_GetValue_mCC9DA25500AF2DDE4A6A3F0D8DF9BCC9D53612E0 (JObject_tD2FCDDA48CACDBCB702BAF49B7C649084F6FDA34 * __this, String_t* ___propertyName0, const RuntimeMethod* method);
// !!0 Newtonsoft.Json.Linq.Extensions::Value<System.Int32>(System.Collections.Generic.IEnumerable`1<Newtonsoft.Json.Linq.JToken>)
inline int32_t Extensions_Value_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_mE737D3D701C8EEDB2752A3E37EB22CC2C54A17C0 (RuntimeObject* ___value0, const RuntimeMethod* method)
{
	return ((  int32_t (*) (RuntimeObject*, const RuntimeMethod*))Extensions_Value_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_mE737D3D701C8EEDB2752A3E37EB22CC2C54A17C0_gshared)(___value0, method);
}
// !!0 Newtonsoft.Json.Linq.Extensions::Value<System.String>(System.Collections.Generic.IEnumerable`1<Newtonsoft.Json.Linq.JToken>)
inline String_t* Extensions_Value_TisString_t_mBACC332922C7F06DFCD9B54B358B31A5DD079729 (RuntimeObject* ___value0, const RuntimeMethod* method)
{
	return ((  String_t* (*) (RuntimeObject*, const RuntimeMethod*))Extensions_Value_TisRuntimeObject_m02CC5FADCDB6AE8916F8F208B1BB513FA9EE6671_gshared)(___value0, method);
}
// System.Void MessageHandler::.ctor(System.Int32,System.String,System.String,Newtonsoft.Json.Linq.JToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MessageHandler__ctor_mA68FADA526667CCEA365016E6A8503CFC5E31A32 (MessageHandler_t61D3A022CD7E59124898915FB6A1EB56ACBF19B7 * __this, int32_t ___id0, String_t* ___seq1, String_t* ___name2, JToken_t78F4E878E41125BB40B529918D104EDDC99E00C9 * ___data3, const RuntimeMethod* method);
// System.Void <>f__AnonymousType0`4<System.Int32,System.String,System.String,System.Object>::.ctor(<id>j__TPar,<seq>j__TPar,<name>j__TPar,<data>j__TPar)
inline void U3CU3Ef__AnonymousType0_4__ctor_m3C493629DA20D23984AAEB32CBBAEEB67F0017BD (U3CU3Ef__AnonymousType0_4_tBCC04185AED1C1C2CFAD99475825F0A10CB5F9F6 * __this, int32_t ___id0, String_t* ___seq1, String_t* ___name2, RuntimeObject * ___data3, const RuntimeMethod* method)
{
	((  void (*) (U3CU3Ef__AnonymousType0_4_tBCC04185AED1C1C2CFAD99475825F0A10CB5F9F6 *, int32_t, String_t*, String_t*, RuntimeObject *, const RuntimeMethod*))U3CU3Ef__AnonymousType0_4__ctor_mA42D0E885207E71D6D8CE9CC4A204CF6FDCA8565_gshared)(__this, ___id0, ___seq1, ___name2, ___data3, method);
}
// Newtonsoft.Json.Linq.JObject Newtonsoft.Json.Linq.JObject::FromObject(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JObject_tD2FCDDA48CACDBCB702BAF49B7C649084F6FDA34 * JObject_FromObject_m084AF0C231311BFEBCA73D333450C8413CE0C426 (RuntimeObject * ___o0, const RuntimeMethod* method);
// T SingletonMonoBehaviour`1<UnityMessageManager>::get_Instance()
inline UnityMessageManager_t4457746B746B34A7F9397BCF555A92EC97EE7831 * SingletonMonoBehaviour_1_get_Instance_m2219FD0089F95EA990F58F8DC6D47F79E9FCECC2 (const RuntimeMethod* method)
{
	return ((  UnityMessageManager_t4457746B746B34A7F9397BCF555A92EC97EE7831 * (*) (const RuntimeMethod*))SingletonMonoBehaviour_1_get_Instance_mCA27DE8B40FBF13AC39B556178FCEE9909F030E4_gshared)(method);
}
// System.Void UnityMessageManager::SendMessageToFlutter(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityMessageManager_SendMessageToFlutter_mABF45FAA298107DDF065EC21C6925F3C7A4C3FA7 (UnityMessageManager_t4457746B746B34A7F9397BCF555A92EC97EE7831 * __this, String_t* ___message0, const RuntimeMethod* method);
// System.Void UnityEngine.AndroidJavaClass::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaClass__ctor_mEFF9F51871F231955D97DABDE9AB4A6B4EDA5541 (AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * __this, String_t* ___className0, const RuntimeMethod* method);
// System.String UnityEngine.SceneManagement.Scene::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Scene_get_name_m38F195D7CA6417FED310C23E4D8E86150C7835B8 (Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.SceneManagement.Scene::get_buildIndex()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Scene_get_buildIndex_mE32CE766EA0790E4636A351BA353A7FD71A11DA4 (Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.SceneManagement.Scene::get_isLoaded()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Scene_get_isLoaded_m040A3D274F4FAD21BC95C6154FEA557ADE5C8E93 (Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.SceneManagement.Scene::IsValid()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Scene_IsValid_mC8AE24868A5020050F6A544ECAF5465C2CFB7CED (Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE * __this, const RuntimeMethod* method);
// System.Void UnityEngine.AndroidJavaObject::CallStatic(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaObject_CallStatic_m5A97968767E1603C021023809276443ED24577FB (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * __this, String_t* ___methodName0, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args1, const RuntimeMethod* method);
// !!0 UnityEngine.AndroidJavaObject::GetStatic<UnityEngine.AndroidJavaObject>(System.String)
inline AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * AndroidJavaObject_GetStatic_TisAndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_mC84C97A7EC20ED712D21107C9FA32E0785021153 (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * __this, String_t* ___fieldName0, const RuntimeMethod* method)
{
	return ((  AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * (*) (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E *, String_t*, const RuntimeMethod*))AndroidJavaObject_GetStatic_TisRuntimeObject_mEC743ECF275CB896DE039A9FC1E5672B30C8B3D0_gshared)(__this, ___fieldName0, method);
}
// !!0[] System.Array::Empty<System.Object>()
inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_inline (const RuntimeMethod* method)
{
	return ((  ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* (*) (const RuntimeMethod*))Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_gshared_inline)(method);
}
// System.Void UnityEngine.AndroidJavaObject::Call(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaObject_Call_mBB226DA52CE5A2FCD9A2D42BC7FB4272E094B76D (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * __this, String_t* ___methodName0, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args1, const RuntimeMethod* method);
// System.Void MeshDeformer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeshDeformer__ctor_m24A0F5BA63C2DAF2FD7AA96472D8D2426ABB5212 (MeshDeformer_t552F11EC8166EE3DED6958E9B4F0050853FB31F8 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Shader::SetGlobalInt(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Shader_SetGlobalInt_mF4533D79C99D03B3D14C1DE84D074938C1403B26 (String_t* ___name0, int32_t ___value1, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<UnityEngine.Renderer>()
inline Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019 (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// Dimension Portal::FromDimension()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Dimension_t28D074E7D31C414382BEB891CF77CF6345E04C34 * Portal_FromDimension_mB4D6D1693AD5BA5303071B6E1A6FBC649757F557 (Portal_t355BC086AE7B4F5E476064C8805CA0830E0CA48E * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<Portal>::Add(!0)
inline void List_1_Add_m75DD7927F36D7B656004563A4BD0528CFDFA2988 (List_1_tF98B6D846565344249C79E895B9E3BF385EA519E * __this, Portal_t355BC086AE7B4F5E476064C8805CA0830E0CA48E * ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tF98B6D846565344249C79E895B9E3BF385EA519E *, Portal_t355BC086AE7B4F5E476064C8805CA0830E0CA48E *, const RuntimeMethod*))List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared)(__this, ___item0, method);
}
// System.Void Dimension::showChildrenWithTag(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dimension_showChildrenWithTag_mE6650FA8CB39315D9A1F40AEB3713530FC864C95 (Dimension_t28D074E7D31C414382BEB891CF77CF6345E04C34 * __this, String_t* ___tag0, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<MainCameraLayerManager>()
inline MainCameraLayerManager_tB21B56BD4156E63941A865F34D94B01F22043250 * Component_GetComponent_TisMainCameraLayerManager_tB21B56BD4156E63941A865F34D94B01F22043250_mDBB64AB174E6AF156ED9AF444EC239D53E0B0813 (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  MainCameraLayerManager_tB21B56BD4156E63941A865F34D94B01F22043250 * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// !!0 UnityEngine.GameObject::AddComponent<MainCameraLayerManager>()
inline MainCameraLayerManager_tB21B56BD4156E63941A865F34D94B01F22043250 * GameObject_AddComponent_TisMainCameraLayerManager_tB21B56BD4156E63941A865F34D94B01F22043250_m58A2142CCC61F8A08FA25B3E5316E6B4929F5972 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  MainCameraLayerManager_tB21B56BD4156E63941A865F34D94B01F22043250 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_mBDBD6EC58A4409E35E4C5D08757C36E4938256B1_gshared)(__this, method);
}
// System.Void DimensionChanger::SwitchCameraRender(UnityEngine.Camera,System.Int32,System.Int32,UnityEngine.Material)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DimensionChanger_SwitchCameraRender_mB38314B55E216C56BF10AAE2B036FB0A9A099139 (Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * ___camera0, int32_t ___fromDimensionLayer1, int32_t ___toDimensionLayer2, Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___dimensionSkybox3, const RuntimeMethod* method);
// System.Void DimensionChanger::SwitchDimensions(UnityEngine.GameObject,Dimension,Dimension)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DimensionChanger_SwitchDimensions_m3AC33B71D55EFC5A6BA9D66B09B3A870061F1385 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___obj0, Dimension_t28D074E7D31C414382BEB891CF77CF6345E04C34 * ___fromDimension1, Dimension_t28D074E7D31C414382BEB891CF77CF6345E04C34 * ___toDimension2, const RuntimeMethod* method);
// System.Void Dimension::SwitchConnectingPortals()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dimension_SwitchConnectingPortals_m4C629D85A4B5E5C0DEC8437B011D39D136BFBDB7 (Dimension_t28D074E7D31C414382BEB891CF77CF6345E04C34 * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.Camera::get_pixelWidth()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Camera_get_pixelWidth_m7DC2EF816FA7AB52EEE991E054FC7B1F31982802 (Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.Camera::get_pixelHeight()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Camera_get_pixelHeight_m7A18CEE2D95835EB95156E88D4D27EA018404201 (Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * __this, const RuntimeMethod* method);
// System.Void UnityEngine.RenderTexture::.ctor(System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderTexture__ctor_m5D8D36B284951F95A048C6B9ACA24FC7509564FF (RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * __this, int32_t ___width0, int32_t ___height1, int32_t ___depth2, const RuntimeMethod* method);
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E (RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  ___handle0, const RuntimeMethod* method);
// System.Void UnityEngine.GameObject::.ctor(System.String,System.Type[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject__ctor_m9829583AE3BF1285861C580895202F760F3A82E8 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, String_t* ___name0, TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* ___components1, const RuntimeMethod* method);
// System.Void Portal::SetupRenderCameraForAR()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Portal_SetupRenderCameraForAR_m48FF408FC286F9E2A7E140FCCE3FB22768F5B5F9 (Portal_t355BC086AE7B4F5E476064C8805CA0830E0CA48E * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Object::set_name(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_set_name_m87C4006618ADB325ABE5439DF159E10DD8DD0781 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Component::set_tag(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Component_set_tag_m6E921BD86BD4A0B5114725FFF0CCD62F26BD7E81 (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, String_t* ___value0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::AddComponent<UnityEngine.Skybox>()
inline Skybox_t8B0EA7C092363DBCCF0B51434F04E7EE661E28E0 * GameObject_AddComponent_TisSkybox_t8B0EA7C092363DBCCF0B51434F04E7EE661E28E0_mED0AE40B29FD1E0A3FC3E2E24516D21F34399F4E (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  Skybox_t8B0EA7C092363DBCCF0B51434F04E7EE661E28E0 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_mBDBD6EC58A4409E35E4C5D08757C36E4938256B1_gshared)(__this, method);
}
// System.Void CameraExtensions::ClearCameraComponents(UnityEngine.Camera)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraExtensions_ClearCameraComponents_m2207CEEB06FFFA9E9813C2C3371ABCC7B35F4224 (Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * ___camera0, const RuntimeMethod* method);
// System.Void UnityEngine.Object::set_hideFlags(UnityEngine.HideFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_set_hideFlags_m7DE229AF60B92F0C68819F77FEB27D775E66F3AC (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * __this, int32_t ___value0, const RuntimeMethod* method);
// UnityEngine.Material UnityEngine.Renderer::get_material()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Material_t8927C00353A72755313F046D0CE85178AE8218EE * Renderer_get_material_mE6B01125502D08EE0D6DFE2EAEC064AD9BB31804 (Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * __this, const RuntimeMethod* method);
// UnityEngine.Camera UnityEngine.Camera::get_current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * Camera_get_current_m4E5A6D19F422F8DD2CFF4EE80C65B033F24C45D6 (const RuntimeMethod* method);
// System.Void UnityEngine.Material::SetFloat(System.String,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_SetFloat_mBE01E05D49E5C7045E010F49A38E96B101D82768 (Material_t8927C00353A72755313F046D0CE85178AE8218EE * __this, String_t* ___name0, float ___value1, const RuntimeMethod* method);
// System.Void Portal::RenderPortal(UnityEngine.Camera)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Portal_RenderPortal_m25DA4E194677697D91B9ECACC5BC78810AFEC521 (Portal_t355BC086AE7B4F5E476064C8805CA0830E0CA48E * __this, Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * ___camera0, const RuntimeMethod* method);
// UnityEngine.Bounds UnityEngine.Renderer::get_bounds()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37  Renderer_get_bounds_m296EE301CAC35DE15E295646CAD7911794825097 (Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Bounds::get_size()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Bounds_get_size_mB1C37E89879C7810BC9F4210033D9277DAFE2C14 (Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Camera::set_nearClipPlane(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Camera_set_nearClipPlane_m4EA1D92F6E1D17E423EC036561E115F434DC2263 (Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * __this, float ___value0, const RuntimeMethod* method);
// System.Void Portal::RenderMono(UnityEngine.Camera)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Portal_RenderMono_mD518AB907A34FEB1B6F23C2B4425A90A06834B34 (Portal_t355BC086AE7B4F5E476064C8805CA0830E0CA48E * __this, Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * ___camera0, const RuntimeMethod* method);
// UnityEngine.Matrix4x4 UnityEngine.Camera::get_projectionMatrix()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  Camera_get_projectionMatrix_mDB77E3A7F71CEF085797BCE58FAC78058C5D6756 (Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * __this, const RuntimeMethod* method);
// System.Void Portal::RenderPlane(UnityEngine.Camera,UnityEngine.RenderTexture,UnityEngine.Vector3,UnityEngine.Quaternion,UnityEngine.Matrix4x4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Portal_RenderPlane_m3D0588BAAC26AA27A4C786F62BD30E04F9DAA2CF (Portal_t355BC086AE7B4F5E476064C8805CA0830E0CA48E * __this, Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * ___portalCamera0, RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * ___targetTexture1, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___camPosition2, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___camRotation3, Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  ___camProjectionMatrix4, const RuntimeMethod* method);
// System.Void UnityEngine.Material::SetTexture(System.String,UnityEngine.Texture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_SetTexture_m04A1CD55201841F85E475992931A210229C782CF (Material_t8927C00353A72755313F046D0CE85178AE8218EE * __this, String_t* ___name0, Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * ___value1, const RuntimeMethod* method);
// System.Void UnityEngine.Camera::set_targetTexture(UnityEngine.RenderTexture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Camera_set_targetTexture_m200B05665D1F5C62D9016C2DD20955755BAB4596 (Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * __this, RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Camera::ResetWorldToCameraMatrix()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Camera_ResetWorldToCameraMatrix_mE1FBF18A65E9B66FA0609D8D3A8A13052772C9B7 (Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_forward()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_get_forward_mD850B9ECF892009E3485408DC0D375165B7BF053 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// UnityEngine.Vector4 Portal::CameraSpacePlane(UnityEngine.Camera,UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  Portal_CameraSpacePlane_m4B47D9C3A6EE56B370AFDD6D8F2E4818175ED102 (Portal_t355BC086AE7B4F5E476064C8805CA0830E0CA48E * __this, Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * ___cam0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___pos1, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___normal2, float ___sideSign3, const RuntimeMethod* method);
// System.Void Portal::CalculateObliqueMatrix(UnityEngine.Matrix4x4&,UnityEngine.Vector4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Portal_CalculateObliqueMatrix_m8E315D6F8317DA0F7D28FAA01875160C48295893 (Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 * ___projection0, Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___clipPlane1, const RuntimeMethod* method);
// System.Void UnityEngine.Camera::set_projectionMatrix(UnityEngine.Matrix4x4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Camera_set_projectionMatrix_m3645AC49FC94726BDA07191C80299D8361D5C328 (Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * __this, Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  ___value0, const RuntimeMethod* method);
// System.Int32 UnityEngine.LayerMask::op_Implicit(UnityEngine.LayerMask)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LayerMask_op_Implicit_mD89E9970822613D8D19B2EBCA36C79391C287BE0 (LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8  ___mask0, const RuntimeMethod* method);
// System.Void CameraExtensions::LayerCullingShowMask(UnityEngine.Camera,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraExtensions_LayerCullingShowMask_m69EB95417060E388D8F58ABFB366959BBE236A56 (Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * ___cam0, int32_t ___layerMask1, const RuntimeMethod* method);
// System.Single UnityEngine.Camera::get_farClipPlane()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Camera_get_farClipPlane_m0FA1B9E2E815BECE2EA40023302EB942B52D9596 (Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Camera::set_farClipPlane(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Camera_set_farClipPlane_m63F1302068433A72A5103281327C68CD8F67AD41 (Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * __this, float ___value0, const RuntimeMethod* method);
// System.Single UnityEngine.Camera::get_nearClipPlane()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Camera_get_nearClipPlane_m75A7270074A35D95B05F25EBF8CE392ECA6517DC (Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Camera::get_orthographic()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Camera_get_orthographic_m3DE9A7705E2B4926BBFD2D6798D97B931B5B5550 (Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Camera::set_orthographic(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Camera_set_orthographic_m38A872FC2D448915EE94C4FB72FB02D4C3F56C52 (Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * __this, bool ___value0, const RuntimeMethod* method);
// System.Single UnityEngine.Camera::get_fieldOfView()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Camera_get_fieldOfView_mA9BA910800B2E33B572929CDA9A12CE596353920 (Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Camera::set_fieldOfView(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Camera_set_fieldOfView_m138FE103CAC4B803F39E4CF579609A5C3FEB5E49 (Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * __this, float ___value0, const RuntimeMethod* method);
// System.Single UnityEngine.Camera::get_aspect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Camera_get_aspect_mD0A1FC8F998473DA08866FF9CD61C02E6D5F4987 (Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Camera::set_aspect(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Camera_set_aspect_mF0D72E1250A4408B6A7C32700EE3D80C75C3879C (Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * __this, float ___value0, const RuntimeMethod* method);
// System.Single UnityEngine.Camera::get_orthographicSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Camera_get_orthographicSize_m970DC87D428A71EDF30F9ED7D0E76E08B1BE4EFE (Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Camera::set_orthographicSize(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Camera_set_orthographicSize_mFC4BBB0BB0097A5FE13E99D8388DF3008971085F (Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * __this, float ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Camera::Render()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Camera_Render_m2D9749799AAC91A3725044A6CF5594E1F5D68D61 (Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * __this, const RuntimeMethod* method);
// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::get_inverse()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  Matrix4x4_get_inverse_mFA34ECC790B269522F60FC32370D628DAFCAE225 (Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 * __this, const RuntimeMethod* method);
// System.Single Portal::sgn(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Portal_sgn_m18F82F51CF72ECC17A1797C75555BBC642D80692 (float ___a0, const RuntimeMethod* method);
// System.Void UnityEngine.Vector4::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector4__ctor_mCAB598A37C4D5E80282277E828B8A3EAD936D3B2 (Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * __this, float ___x0, float ___y1, float ___z2, float ___w3, const RuntimeMethod* method);
// UnityEngine.Vector4 UnityEngine.Matrix4x4::op_Multiply(UnityEngine.Matrix4x4,UnityEngine.Vector4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  Matrix4x4_op_Multiply_m6967C4B4CC9F36FE461F5420DF7175B4201E2585 (Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  ___lhs0, Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___vector1, const RuntimeMethod* method);
// System.Single UnityEngine.Vector4::Dot(UnityEngine.Vector4,UnityEngine.Vector4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Vector4_Dot_m3373C73B23A0BC07DDE8B9C99AA2FC933CD1143F (Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___a0, Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___b1, const RuntimeMethod* method);
// UnityEngine.Vector4 UnityEngine.Vector4::op_Multiply(UnityEngine.Vector4,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  Vector4_op_Multiply_m4B615DCAD6D77FE276AC56F17EA3ED0DCD942111_inline (Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___a0, float ___d1, const RuntimeMethod* method);
// System.Single UnityEngine.Matrix4x4::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Matrix4x4_get_Item_mA0E634EF5A723EA9DD824391D4C62F4100C64813 (Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 * __this, int32_t ___index0, const RuntimeMethod* method);
// System.Void UnityEngine.Matrix4x4::set_Item(System.Int32,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Matrix4x4_set_Item_m27BC97EE3093FDADFE0804FB80AFF5CDB03D355B (Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 * __this, int32_t ___index0, float ___value1, const RuntimeMethod* method);
// UnityEngine.Matrix4x4 UnityEngine.Camera::get_worldToCameraMatrix()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  Camera_get_worldToCameraMatrix_m7E2B63F64437E2C91C07F7FC819C79BE2152C5F6 (Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Matrix4x4::MultiplyPoint(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Matrix4x4_MultiplyPoint_mE92BEE4DED3B602983C2BBE06C44AD29564EDA83 (Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___point0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Matrix4x4::MultiplyVector(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Matrix4x4_MultiplyVector_m88C4BE23EB0B45BB701514AF3E1CA5A857F8212C (Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___vector0, const RuntimeMethod* method);
// System.Single UnityEngine.Vector3::Dot(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Dot_mD19905B093915BA12852732EA27AA2DBE030D11F_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___lhs0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___rhs1, const RuntimeMethod* method);
// UnityEngine.Bounds UnityEngine.Mesh::get_bounds()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37  Mesh_get_bounds_m8704A23E8BA2D77C89FD4BF4379238062B1BE5DF (Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::InverseTransformDirection(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_InverseTransformDirection_m9EB6F7A2598FD8D6B52F0A6EBA96A3BAAF68D696 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___direction0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_lossyScale()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_get_lossyScale_m469A16F93F135C1E4D5955C7EBDB893D1892A331 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// System.Void Portal::DeformPortalWithTransform(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Portal_DeformPortalWithTransform_m5A2D118E678F85E1CD7E51A4FB52A6238A25DA8A (Portal_t355BC086AE7B4F5E476064C8805CA0830E0CA48E * __this, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___otherTransform0, const RuntimeMethod* method);
// System.Void MeshDeformer::ClearDeformingForce()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeshDeformer_ClearDeformingForce_mF7A576894730ABAA2AEE6491092CB13549F52B18 (MeshDeformer_t552F11EC8166EE3DED6958E9B4F0050853FB31F8 * __this, const RuntimeMethod* method);
// System.Void Portal::CheckForTransitionObjects()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Portal_CheckForTransitionObjects_m010243CA2F1A728821D30CF78118B1A3066DF06A (Portal_t355BC086AE7B4F5E476064C8805CA0830E0CA48E * __this, const RuntimeMethod* method);
// System.Void Portal::SwitchDimensions()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Portal_SwitchDimensions_m4836758D0E38C2CE972EFFCB6CC8B6C12A7A84E8 (Portal_t355BC086AE7B4F5E476064C8805CA0830E0CA48E * __this, const RuntimeMethod* method);
// System.Boolean Portal::get_dimensionSwitched()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Portal_get_dimensionSwitched_m3D6982DB8172F73BAC01CF743D8511BF6EAA01E3_inline (Portal_t355BC086AE7B4F5E476064C8805CA0830E0CA48E * __this, const RuntimeMethod* method);
// System.Void Portal::set_dimensionSwitched(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Portal_set_dimensionSwitched_m9498E0389F4609BD3333FBC5D6DB172660C53C94_inline (Portal_t355BC086AE7B4F5E476064C8805CA0830E0CA48E * __this, bool ___value0, const RuntimeMethod* method);
// !!0[] UnityEngine.Object::FindObjectsOfType<PortalTransitionObject>()
inline PortalTransitionObjectU5BU5D_tA3D594946282A5FE045336C6B819F2CEFA26C97A* Object_FindObjectsOfType_TisPortalTransitionObject_t6C6EC1877A4E2BAB5F3366A1E0B7F8C02BC133CE_m012FBA2F979CAC914747591A629AB63129A2FAB3 (const RuntimeMethod* method)
{
	return ((  PortalTransitionObjectU5BU5D_tA3D594946282A5FE045336C6B819F2CEFA26C97A* (*) (const RuntimeMethod*))Object_FindObjectsOfType_TisRuntimeObject_m0015B67D48097755F4D6B1D2614DA7ED5C899F18_gshared)(method);
}
// System.Void Portal::HandleTransition(PortalTransitionObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Portal_HandleTransition_m5AE0FE539DCB7A9678B98DFD1B8BDA8223A1EA6E (Portal_t355BC086AE7B4F5E476064C8805CA0830E0CA48E * __this, PortalTransitionObject_t6C6EC1877A4E2BAB5F3366A1E0B7F8C02BC133CE * ___transitionObject0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1<PortalTransitionObject>::Contains(!0)
inline bool List_1_Contains_mABA385C85BB255ADA4BFE2CAD270E2D87D94963F (List_1_t30FCDC226FA7B79EC342BC4224C0AC67A9A36807 * __this, PortalTransitionObject_t6C6EC1877A4E2BAB5F3366A1E0B7F8C02BC133CE * ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_t30FCDC226FA7B79EC342BC4224C0AC67A9A36807 *, PortalTransitionObject_t6C6EC1877A4E2BAB5F3366A1E0B7F8C02BC133CE *, const RuntimeMethod*))List_1_Contains_m99C700668AC6D272188471D2D6B784A2B5636C8E_gshared)(__this, ___item0, method);
}
// System.Boolean System.Collections.Generic.List`1<PortalTransitionObject>::Remove(!0)
inline bool List_1_Remove_mC5BE819CCDA563EAFFEA9336DF45CDDF185E92BF (List_1_t30FCDC226FA7B79EC342BC4224C0AC67A9A36807 * __this, PortalTransitionObject_t6C6EC1877A4E2BAB5F3366A1E0B7F8C02BC133CE * ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_t30FCDC226FA7B79EC342BC4224C0AC67A9A36807 *, PortalTransitionObject_t6C6EC1877A4E2BAB5F3366A1E0B7F8C02BC133CE *, const RuntimeMethod*))List_1_Remove_m753F7B4281CC4D02C07AE90726F51EF34B588DF7_gshared)(__this, ___item0, method);
}
// System.Int32 System.Collections.Generic.List`1<PortalTransitionObject>::get_Count()
inline int32_t List_1_get_Count_mB41962F6417D600544FEA4DD58B96F3B2810E572_inline (List_1_t30FCDC226FA7B79EC342BC4224C0AC67A9A36807 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t30FCDC226FA7B79EC342BC4224C0AC67A9A36807 *, const RuntimeMethod*))List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline)(__this, method);
}
// UnityEngine.Camera CameraExtensions::CameraForObject(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * CameraExtensions_CameraForObject_mDFB14F372470D558EF73095B614ACBBFBB96EE73 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___obj0, const RuntimeMethod* method);
// System.Boolean UnityEngine.GameObject::CompareTag(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GameObject_CompareTag_mA692D8508984DBE4A2FEFD19E29CB1C9D5CDE001 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, String_t* ___tag0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<PortalTransitionObject>::Add(!0)
inline void List_1_Add_m033EECBB287C9A0E63ECF2DD02CAF24195520399 (List_1_t30FCDC226FA7B79EC342BC4224C0AC67A9A36807 * __this, PortalTransitionObject_t6C6EC1877A4E2BAB5F3366A1E0B7F8C02BC133CE * ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t30FCDC226FA7B79EC342BC4224C0AC67A9A36807 *, PortalTransitionObject_t6C6EC1877A4E2BAB5F3366A1E0B7F8C02BC133CE *, const RuntimeMethod*))List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared)(__this, ___item0, method);
}
// UnityEngine.Vector3 UnityEngine.Transform::TransformPoint(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_TransformPoint_m68AF95765A9279192E601208A9C5170027A5F0D2 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<PortalTransitionObject>::.ctor()
inline void List_1__ctor_mA4F8E736A8FFB5EBEAD1B891DA67A42E72165F51 (List_1_t30FCDC226FA7B79EC342BC4224C0AC67A9A36807 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t30FCDC226FA7B79EC342BC4224C0AC67A9A36807 *, const RuntimeMethod*))List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared)(__this, method);
}
// System.Void SubdividedCube::RenderCube()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SubdividedCube_RenderCube_m26801698B0236063961ABC389B62EA4506581E80 (SubdividedCube_tFFFE4E2DAFE319BFFCCC128B8B956589136D74F5 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::TransformVector(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_TransformVector_m7C5F87858E82A686A233D1866443ACAEA296AA2B (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___vector0, const RuntimeMethod* method);
// System.Void UnityEngine.Mesh::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh__ctor_mA3D8570373462201AD7B8C9586A7F9412E49C2F6 (Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * __this, const RuntimeMethod* method);
// System.Void SubdividedCube::AddSquare(System.Single,System.Single,System.Single,System.Single,Direction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SubdividedCube_AddSquare_m72504394AF49353C31F0FA3E485D35AEE5A313F4 (SubdividedCube_tFFFE4E2DAFE319BFFCCC128B8B956589136D74F5 * __this, float ___x0, float ___y1, float ___z2, float ___size3, int32_t ___direction4, const RuntimeMethod* method);
// System.Void SubdividedCube::UpdateMesh()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SubdividedCube_UpdateMesh_m9BEF3546379935CF14B6D91530326F9B3D8A51B1 (SubdividedCube_tFFFE4E2DAFE319BFFCCC128B8B956589136D74F5 * __this, const RuntimeMethod* method);
// System.Void SubdividedCube::AddFaceForTopBottom(System.Single,System.Single,System.Single,System.Single,Direction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SubdividedCube_AddFaceForTopBottom_mF098D3EF4274363CCF661B32553D38A243B25785 (SubdividedCube_tFFFE4E2DAFE319BFFCCC128B8B956589136D74F5 * __this, float ___x0, float ___y1, float ___z2, float ___size3, int32_t ___direction4, const RuntimeMethod* method);
// System.Void SubdividedCube::AddFaceForNorthSouth(System.Single,System.Single,System.Single,System.Single,Direction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SubdividedCube_AddFaceForNorthSouth_m44D6852CF0FC03A9C7D809F7EB3E7F667C5D69EC (SubdividedCube_tFFFE4E2DAFE319BFFCCC128B8B956589136D74F5 * __this, float ___x0, float ___y1, float ___z2, float ___size3, int32_t ___direction4, const RuntimeMethod* method);
// System.Void SubdividedCube::AddFaceForWestEast(System.Single,System.Single,System.Single,System.Single,Direction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SubdividedCube_AddFaceForWestEast_m58161C9C2B962992E22CB61C1E59E65D64209457 (SubdividedCube_tFFFE4E2DAFE319BFFCCC128B8B956589136D74F5 * __this, float ___x0, float ___y1, float ___z2, float ___size3, int32_t ___direction4, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::Add(!0)
inline void List_1_Add_mAE131B53917AD7132F6BA2C05D5D17C38C5A2E59 (List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 *, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E , const RuntimeMethod*))List_1_Add_mAE131B53917AD7132F6BA2C05D5D17C38C5A2E59_gshared)(__this, ___item0, method);
}
// System.Void SubdividedCube::AddLatestTriangles(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SubdividedCube_AddLatestTriangles_m101D021DA7DCB2FE27BB5F94FC4F51D6B5FF645A (SubdividedCube_tFFFE4E2DAFE319BFFCCC128B8B956589136D74F5 * __this, bool ___clockwise0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Int32>::Add(!0)
inline void List_1_Add_mEE653047BDB3486ACC2E16DC6C3422A0BA48F01F (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * __this, int32_t ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 *, int32_t, const RuntimeMethod*))List_1_Add_mEE653047BDB3486ACC2E16DC6C3422A0BA48F01F_gshared)(__this, ___item0, method);
}
// System.Void UnityEngine.Mesh::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_Clear_m7500ECE6209E14CC750CB16B48301B8D2A57ACCE (Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * __this, const RuntimeMethod* method);
// !0[] System.Collections.Generic.List`1<UnityEngine.Vector3>::ToArray()
inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* List_1_ToArray_mCFFA6AFA30A20FB2FFC3846AD114DF7BC21BFFBC (List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * __this, const RuntimeMethod* method)
{
	return ((  Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* (*) (List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 *, const RuntimeMethod*))List_1_ToArray_mCFFA6AFA30A20FB2FFC3846AD114DF7BC21BFFBC_gshared)(__this, method);
}
// !0[] System.Collections.Generic.List`1<System.Int32>::ToArray()
inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* List_1_ToArray_mDEFFC768D9AAD376D27FC0FC1F7B57EE2E93479F (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * __this, const RuntimeMethod* method)
{
	return ((  Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* (*) (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 *, const RuntimeMethod*))List_1_ToArray_mDEFFC768D9AAD376D27FC0FC1F7B57EE2E93479F_gshared)(__this, method);
}
// System.Void UnityEngine.Mesh::set_triangles(System.Int32[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_set_triangles_mF1D92E67523CD5FDC66A4378FC4AD8D4AD0D5FEC (Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * __this, Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___value0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::Clear()
inline void List_1_Clear_mE0F03A2E42E2F7F8A282AE01C12945F7379DC702 (List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 *, const RuntimeMethod*))List_1_Clear_mE0F03A2E42E2F7F8A282AE01C12945F7379DC702_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<System.Int32>::Clear()
inline void List_1_Clear_m508B72E5229FAE7042D99A04555F66F10C597C7A (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 *, const RuntimeMethod*))List_1_Clear_m508B72E5229FAE7042D99A04555F66F10C597C7A_gshared)(__this, method);
}
// System.Void UnityEngine.MeshFilter::set_sharedMesh(UnityEngine.Mesh)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeshFilter_set_sharedMesh_mC96D5F9AE4BC1D186221F568A4C3CE23572EC958 (MeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A * __this, Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * ___value0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::.ctor()
inline void List_1__ctor_mF8F23D572031748AD428623AE16803455997E297 (List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 *, const RuntimeMethod*))List_1__ctor_mF8F23D572031748AD428623AE16803455997E297_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<System.Int32>::.ctor()
inline void List_1__ctor_m45E78772E9157F6CD684A69AAB07CE4082FE5FFD (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 *, const RuntimeMethod*))List_1__ctor_m45E78772E9157F6CD684A69AAB07CE4082FE5FFD_gshared)(__this, method);
}
// System.Boolean UnityEngine.Input::GetMouseButtonDown(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetMouseButtonDown_m466D81FDCC87C9CB07557B39DCB435EB691F1EF3 (int32_t ___button0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::TransformDirection(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_TransformDirection_m6B5E3F0A7C6323159DEC6D9BC035FB53ADD96E91 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___direction0, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::get_identity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  Quaternion_get_identity_mF2E565DBCE793A1AE6208056D42CA7C59D83A702 (const RuntimeMethod* method);
// System.Void UnityEngine.Rigidbody::AddForce(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody_AddForce_mDFB0D57C25682B826999B0074F5C0FD399C6401D (Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___force0, const RuntimeMethod* method);
// System.Delegate System.Delegate::Combine(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t * Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55 (Delegate_t * ___a0, Delegate_t * ___b1, const RuntimeMethod* method);
// System.Delegate System.Delegate::Remove(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t * Delegate_Remove_m8B4AD17254118B2904720D55C9B34FB3DCCBD7D4 (Delegate_t * ___source0, Delegate_t * ___value1, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityAction`2<UnityEngine.SceneManagement.Scene,UnityEngine.SceneManagement.LoadSceneMode>::.ctor(System.Object,System.IntPtr)
inline void UnityAction_2__ctor_mE0417B33CF845A6B9324E67D296ADEA562B91DE0 (UnityAction_2_tDEF0DD47461C853F98CD2FF3CEC4F5EE13A19906 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (UnityAction_2_tDEF0DD47461C853F98CD2FF3CEC4F5EE13A19906 *, RuntimeObject *, intptr_t, const RuntimeMethod*))UnityAction_2__ctor_m50E7B823E46CB327D49A2D55A761F57472037634_gshared)(__this, ___object0, ___method1, method);
}
// System.Void UnityEngine.SceneManagement.SceneManager::add_sceneLoaded(UnityEngine.Events.UnityAction`2<UnityEngine.SceneManagement.Scene,UnityEngine.SceneManagement.LoadSceneMode>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneManager_add_sceneLoaded_m54990A485E2E66739E31090BDC3A4C01EF7729BA (UnityAction_2_tDEF0DD47461C853F98CD2FF3CEC4F5EE13A19906 * ___value0, const RuntimeMethod* method);
// System.Void NativeAPI::OnSceneLoaded(UnityEngine.SceneManagement.Scene,UnityEngine.SceneManagement.LoadSceneMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeAPI_OnSceneLoaded_m3664DB25D28063B8628236EA7338D05DEB78694A (Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  ___scene0, int32_t ___mode1, const RuntimeMethod* method);
// System.Void NativeAPI::ShowHostMainWindow()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeAPI_ShowHostMainWindow_mF11F3AE0A8A16104D2546D5225A967CAEF20F494 (const RuntimeMethod* method);
// System.Void NativeAPI::UnloadMainWindow()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeAPI_UnloadMainWindow_mC078E094545CA94E5BAF399E7C8B75E39274A855 (const RuntimeMethod* method);
// System.Void NativeAPI::QuitUnityWindow()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeAPI_QuitUnityWindow_m53C753446251C8F1D17D43FAC31BFC8DAEB12607 (const RuntimeMethod* method);
// System.Void NativeAPI::SendMessageToFlutter(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeAPI_SendMessageToFlutter_m589A00F5AE6DABEECC576A5E6BC709850513AE9B (String_t* ___message0, const RuntimeMethod* method);
// System.Int32 UnityMessageManager::generateId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnityMessageManager_generateId_m044493EEA44FD0FE6040EAAC4F26AF0AA65D32B1 (const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,UnityMessage>::Add(!0,!1)
inline void Dictionary_2_Add_m2097BED9B4E3EDCC2144E58088BF028DB0B48D99 (Dictionary_2_t0BC3AC5C2146DD06B35F47A5F473B1D0090A809E * __this, int32_t ___key0, UnityMessage_tE42919C6EDB7FF8FF734D6E4D7246C2C457BA6AD * ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t0BC3AC5C2146DD06B35F47A5F473B1D0090A809E *, int32_t, UnityMessage_tE42919C6EDB7FF8FF734D6E4D7246C2C457BA6AD *, const RuntimeMethod*))Dictionary_2_Add_m39BC00F21EE9459BB8DEF5479F95F79C5C740682_gshared)(__this, ___key0, ___value1, method);
}
// System.Void <>f__AnonymousType0`4<System.Int32,System.String,System.String,Newtonsoft.Json.Linq.JObject>::.ctor(<id>j__TPar,<seq>j__TPar,<name>j__TPar,<data>j__TPar)
inline void U3CU3Ef__AnonymousType0_4__ctor_mFFC0CC0C01AE7B3F6573354A43AFF96C09074D0F (U3CU3Ef__AnonymousType0_4_tDE5000E5AA6D2F551A599D76967B42844AC60EE5 * __this, int32_t ___id0, String_t* ___seq1, String_t* ___name2, JObject_tD2FCDDA48CACDBCB702BAF49B7C649084F6FDA34 * ___data3, const RuntimeMethod* method)
{
	((  void (*) (U3CU3Ef__AnonymousType0_4_tDE5000E5AA6D2F551A599D76967B42844AC60EE5 *, int32_t, String_t*, String_t*, JObject_tD2FCDDA48CACDBCB702BAF49B7C649084F6FDA34 *, const RuntimeMethod*))U3CU3Ef__AnonymousType0_4__ctor_mA42D0E885207E71D6D8CE9CC4A204CF6FDCA8565_gshared)(__this, ___id0, ___seq1, ___name2, ___data3, method);
}
// System.Void UnityMessageManager/MessageDelegate::Invoke(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MessageDelegate_Invoke_m38A45D4D87F60621AB4E4B6A68DDDE146B332DDD (MessageDelegate_tDCF734AA37209CBABC24AB82639DC96812A92CD9 * __this, String_t* ___message0, const RuntimeMethod* method);
// System.Boolean System.String::StartsWith(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_StartsWith_mDE2FF98CAFFD13F88EDEB6C40158DDF840BFCF12 (String_t* __this, String_t* ___value0, const RuntimeMethod* method);
// System.String System.String::Replace(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Replace_m98184150DC4E2FBDF13E723BF5B7353D9602AC4D (String_t* __this, String_t* ___oldValue0, String_t* ___newValue1, const RuntimeMethod* method);
// MessageHandler MessageHandler::Deserialize(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MessageHandler_t61D3A022CD7E59124898915FB6A1EB56ACBF19B7 * MessageHandler_Deserialize_mFD7001A5166EDD8386B2979B3C0FDC4544D0F123 (String_t* ___message0, const RuntimeMethod* method);
// System.Boolean System.String::Equals(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_Equals_m8A062B96B61A7D652E7D73C9B3E904F6B0E5F41D (String_t* __this, String_t* ___value0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,UnityMessage>::TryGetValue(!0,!1&)
inline bool Dictionary_2_TryGetValue_m0382483D7D84AC88696EFBBD3566B8B7B4C927D5 (Dictionary_2_t0BC3AC5C2146DD06B35F47A5F473B1D0090A809E * __this, int32_t ___key0, UnityMessage_tE42919C6EDB7FF8FF734D6E4D7246C2C457BA6AD ** ___value1, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t0BC3AC5C2146DD06B35F47A5F473B1D0090A809E *, int32_t, UnityMessage_tE42919C6EDB7FF8FF734D6E4D7246C2C457BA6AD **, const RuntimeMethod*))Dictionary_2_TryGetValue_m0A88BBB063127AFAD853506A433ACB07D7AAD67E_gshared)(__this, ___key0, ___value1, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,UnityMessage>::Remove(!0)
inline bool Dictionary_2_Remove_m273238F996359EBF987A2836DA52FBF359AEFB67 (Dictionary_2_t0BC3AC5C2146DD06B35F47A5F473B1D0090A809E * __this, int32_t ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t0BC3AC5C2146DD06B35F47A5F473B1D0090A809E *, int32_t, const RuntimeMethod*))Dictionary_2_Remove_mAC77908EC28C242ACC8C3C4CDEA945E73B95CFA4_gshared)(__this, ___key0, method);
}
// T MessageHandler::getData<System.Object>()
inline RuntimeObject * MessageHandler_getData_TisRuntimeObject_m4B0F54A0EA8EBDB824898342D0FB18471D377EC9 (MessageHandler_t61D3A022CD7E59124898915FB6A1EB56ACBF19B7 * __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject * (*) (MessageHandler_t61D3A022CD7E59124898915FB6A1EB56ACBF19B7 *, const RuntimeMethod*))MessageHandler_getData_TisRuntimeObject_m4B0F54A0EA8EBDB824898342D0FB18471D377EC9_gshared)(__this, method);
}
// System.Void System.Action`1<System.Object>::Invoke(!0)
inline void Action_1_Invoke_m587509C88BB83721D7918D89DF07606BB752D744 (Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC *, RuntimeObject *, const RuntimeMethod*))Action_1_Invoke_m587509C88BB83721D7918D89DF07606BB752D744_gshared)(__this, ___obj0, method);
}
// System.Void UnityMessageManager/MessageHandlerDelegate::Invoke(MessageHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MessageHandlerDelegate_Invoke_m001CCB602D2B55DD220BF06E2AA4828575197FFE (MessageHandlerDelegate_tC9B2C089EAB4A237AFE9F84E05D5D7B196643F28 * __this, MessageHandler_t61D3A022CD7E59124898915FB6A1EB56ACBF19B7 * ___handler0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,UnityMessage>::.ctor()
inline void Dictionary_2__ctor_mCDC1ED9FB26C45BCA609A92B7AA9757038C7C147 (Dictionary_2_t0BC3AC5C2146DD06B35F47A5F473B1D0090A809E * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t0BC3AC5C2146DD06B35F47A5F473B1D0090A809E *, const RuntimeMethod*))Dictionary_2__ctor_mE7F9D51201F5A72BF4995CA0F3F0E866DB21E638_gshared)(__this, method);
}
// System.Void SingletonMonoBehaviour`1<UnityMessageManager>::.ctor()
inline void SingletonMonoBehaviour_1__ctor_m0FD850D200F04E2F76476533783D9581729AB59F (SingletonMonoBehaviour_1_tCE345733DAFD7C69997F22704982E2372C4BFCDD * __this, const RuntimeMethod* method)
{
	((  void (*) (SingletonMonoBehaviour_1_tCE345733DAFD7C69997F22704982E2372C4BFCDD *, const RuntimeMethod*))SingletonMonoBehaviour_1__ctor_mFE92A122FFAD62C1BBD57040124CFB238F2301E3_gshared)(__this, method);
}
// System.Void System.ThrowHelper::ThrowArgumentOutOfRangeException()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929 (const RuntimeMethod* method);
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
// System.Void ARCusor::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARCusor_Start_m8978233B97EBE137FAF8BFE7847031A448106778 (ARCusor_t203938EAE3094278392B0B5F4A9DBA22B5216F2B * __this, const RuntimeMethod* method)
{
	{
		// objectToPlace.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_objectToPlace_5();
		NullCheck(L_0);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_0, (bool)0, /*hidden argument*/NULL);
		// cursorChildObject.SetActive(useCursor);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1 = __this->get_cursorChildObject_4();
		bool L_2 = __this->get_useCursor_8();
		NullCheck(L_1);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_1, L_2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void ARCusor::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARCusor_Update_m57E016524C41C0C7BEBC1917318555E7F0943EB3 (ARCusor_t203938EAE3094278392B0B5F4A9DBA22B5216F2B * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mC26889C0423CCF594A8C363532AC63BB0DB25201_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mB10F8A78245EBB2F22DD22E5AC8CA7D5FDE70B88_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m200A6C390D1FAEF2378D70230BD6E96D492ABE04_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tDA68EC1B5CE9809C8709C1E58A7D0F4ACBB1252D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_1;
	memset((&V_1), 0, sizeof(V_1));
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  V_2;
	memset((&V_2), 0, sizeof(V_2));
	List_1_tDA68EC1B5CE9809C8709C1E58A7D0F4ACBB1252D * V_3 = NULL;
	ARRaycastHit_t2B16118C3B5F17B237335D69B1CA9C27474B621E  V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
		// if (useCursor)
		bool L_0 = __this->get_useCursor_8();
		if (!L_0)
		{
			goto IL_000e;
		}
	}
	{
		// UpadteCursor();
		ARCusor_UpadteCursor_m94EC6F91630CCB9562BE23C64B02D4680894ABBF(__this, /*hidden argument*/NULL);
	}

IL_000e:
	{
		// if (Input.touchCount > 0 && Input.GetTouch(0).phase == TouchPhase.Began)
		int32_t L_1;
		L_1 = Input_get_touchCount_mE1A06AB1973E3456AE398B3CC5105F27CC7335D6(/*hidden argument*/NULL);
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_014e;
		}
	}
	{
		Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C  L_2;
		L_2 = Input_GetTouch_m6A2A31482B1A7D018C3AAC188C02F5D14500C81F(0, /*hidden argument*/NULL);
		V_0 = L_2;
		int32_t L_3;
		L_3 = Touch_get_phase_m576EA3F4FE1D12EB85510326AD8EC3C2EB267257((Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C *)(&V_0), /*hidden argument*/NULL);
		if (L_3)
		{
			goto IL_014e;
		}
	}
	{
		// if (objectToPlace.active == false)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_4 = __this->get_objectToPlace_5();
		NullCheck(L_4);
		bool L_5;
		L_5 = GameObject_get_active_mAE45BB4A1D06BE2AF8C460593FC0346A5EF8014D(L_4, /*hidden argument*/NULL);
		if (L_5)
		{
			goto IL_0045;
		}
	}
	{
		// objectToPlace.SetActive(true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_6 = __this->get_objectToPlace_5();
		NullCheck(L_6);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_6, (bool)1, /*hidden argument*/NULL);
	}

IL_0045:
	{
		// if (useCursor)
		bool L_7 = __this->get_useCursor_8();
		if (!L_7)
		{
			goto IL_00ec;
		}
	}
	{
		// Vector3 rotation = new Vector3(transform.rotation.x, transform.rotation.y, transform.rotation.z+180);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_8;
		L_8 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_8);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_9;
		L_9 = Transform_get_rotation_m4AA3858C00DF4C9614B80352558C4C37D08D2200(L_8, /*hidden argument*/NULL);
		float L_10 = L_9.get_x_0();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_11;
		L_11 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_11);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_12;
		L_12 = Transform_get_rotation_m4AA3858C00DF4C9614B80352558C4C37D08D2200(L_11, /*hidden argument*/NULL);
		float L_13 = L_12.get_y_1();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_14;
		L_14 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_14);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_15;
		L_15 = Transform_get_rotation_m4AA3858C00DF4C9614B80352558C4C37D08D2200(L_14, /*hidden argument*/NULL);
		float L_16 = L_15.get_z_2();
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&V_1), L_10, L_13, ((float)il2cpp_codegen_add((float)L_16, (float)(180.0f))), /*hidden argument*/NULL);
		// Quaternion quaternion = new Quaternion();
		il2cpp_codegen_initobj((&V_2), sizeof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 ));
		// quaternion.SetLookRotation(rotation);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_17 = V_1;
		Quaternion_SetLookRotation_m51FB0FD3F6EB54C4674C0B3690D3825D954EABE5((Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 *)(&V_2), L_17, /*hidden argument*/NULL);
		// objectToPlace.transform.position = transform.position;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_18 = __this->get_objectToPlace_5();
		NullCheck(L_18);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_19;
		L_19 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_18, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_20;
		L_20 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_20);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_21;
		L_21 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_20, /*hidden argument*/NULL);
		NullCheck(L_19);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_19, L_21, /*hidden argument*/NULL);
		// room.SetActive(true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_22 = __this->get_room_7();
		NullCheck(L_22);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_22, (bool)1, /*hidden argument*/NULL);
		// room.transform.position = transform.position;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_23 = __this->get_room_7();
		NullCheck(L_23);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_24;
		L_24 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_23, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_25;
		L_25 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_25);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_26;
		L_26 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_25, /*hidden argument*/NULL);
		NullCheck(L_24);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_24, L_26, /*hidden argument*/NULL);
		// cursorChildObject.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_27 = __this->get_cursorChildObject_4();
		NullCheck(L_27);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_27, (bool)0, /*hidden argument*/NULL);
		// }
		return;
	}

IL_00ec:
	{
		// List<ARRaycastHit> hits = new List<ARRaycastHit>();
		List_1_tDA68EC1B5CE9809C8709C1E58A7D0F4ACBB1252D * L_28 = (List_1_tDA68EC1B5CE9809C8709C1E58A7D0F4ACBB1252D *)il2cpp_codegen_object_new(List_1_tDA68EC1B5CE9809C8709C1E58A7D0F4ACBB1252D_il2cpp_TypeInfo_var);
		List_1__ctor_mC26889C0423CCF594A8C363532AC63BB0DB25201(L_28, /*hidden argument*/List_1__ctor_mC26889C0423CCF594A8C363532AC63BB0DB25201_RuntimeMethod_var);
		V_3 = L_28;
		// raycastManager.Raycast(Input.GetTouch(0).position,hits, UnityEngine.XR.ARSubsystems.TrackableType.Planes);
		ARRaycastManager_t76CDCF27810673048562A85CAD0E3FEEB3D7328F * L_29 = __this->get_raycastManager_6();
		Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C  L_30;
		L_30 = Input_GetTouch_m6A2A31482B1A7D018C3AAC188C02F5D14500C81F(0, /*hidden argument*/NULL);
		V_0 = L_30;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_31;
		L_31 = Touch_get_position_mE32B04C6DA32A0965C403A31847ED7F1725EA1DE((Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C *)(&V_0), /*hidden argument*/NULL);
		List_1_tDA68EC1B5CE9809C8709C1E58A7D0F4ACBB1252D * L_32 = V_3;
		NullCheck(L_29);
		bool L_33;
		L_33 = ARRaycastManager_Raycast_mCC2851DAC2542C59528FCE21242231DFAF024650(L_29, L_31, L_32, ((int32_t)15), /*hidden argument*/NULL);
		// if (hits.Count > 0)
		List_1_tDA68EC1B5CE9809C8709C1E58A7D0F4ACBB1252D * L_34 = V_3;
		NullCheck(L_34);
		int32_t L_35;
		L_35 = List_1_get_Count_mB10F8A78245EBB2F22DD22E5AC8CA7D5FDE70B88_inline(L_34, /*hidden argument*/List_1_get_Count_mB10F8A78245EBB2F22DD22E5AC8CA7D5FDE70B88_RuntimeMethod_var);
		if ((((int32_t)L_35) <= ((int32_t)0)))
		{
			goto IL_014e;
		}
	}
	{
		// GameObject.Instantiate(objectToPlace, hits[0].pose.position,hits[0].pose.rotation);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_36 = __this->get_objectToPlace_5();
		List_1_tDA68EC1B5CE9809C8709C1E58A7D0F4ACBB1252D * L_37 = V_3;
		NullCheck(L_37);
		ARRaycastHit_t2B16118C3B5F17B237335D69B1CA9C27474B621E  L_38;
		L_38 = List_1_get_Item_m200A6C390D1FAEF2378D70230BD6E96D492ABE04_inline(L_37, 0, /*hidden argument*/List_1_get_Item_m200A6C390D1FAEF2378D70230BD6E96D492ABE04_RuntimeMethod_var);
		V_4 = L_38;
		Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  L_39;
		L_39 = ARRaycastHit_get_pose_mB4D8BC45F23D9F2C2C8DCAFA88DB1221D76EF02B((ARRaycastHit_t2B16118C3B5F17B237335D69B1CA9C27474B621E *)(&V_4), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_40 = L_39.get_position_0();
		List_1_tDA68EC1B5CE9809C8709C1E58A7D0F4ACBB1252D * L_41 = V_3;
		NullCheck(L_41);
		ARRaycastHit_t2B16118C3B5F17B237335D69B1CA9C27474B621E  L_42;
		L_42 = List_1_get_Item_m200A6C390D1FAEF2378D70230BD6E96D492ABE04_inline(L_41, 0, /*hidden argument*/List_1_get_Item_m200A6C390D1FAEF2378D70230BD6E96D492ABE04_RuntimeMethod_var);
		V_4 = L_42;
		Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  L_43;
		L_43 = ARRaycastHit_get_pose_mB4D8BC45F23D9F2C2C8DCAFA88DB1221D76EF02B((ARRaycastHit_t2B16118C3B5F17B237335D69B1CA9C27474B621E *)(&V_4), /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_44 = L_43.get_rotation_1();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_45;
		L_45 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B(L_36, L_40, L_44, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var);
	}

IL_014e:
	{
		// }
		return;
	}
}
// System.Void ARCusor::UpadteCursor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARCusor_UpadteCursor_m94EC6F91630CCB9562BE23C64B02D4680894ABBF (ARCusor_t203938EAE3094278392B0B5F4A9DBA22B5216F2B * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mC26889C0423CCF594A8C363532AC63BB0DB25201_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mB10F8A78245EBB2F22DD22E5AC8CA7D5FDE70B88_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m200A6C390D1FAEF2378D70230BD6E96D492ABE04_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tDA68EC1B5CE9809C8709C1E58A7D0F4ACBB1252D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_0;
	memset((&V_0), 0, sizeof(V_0));
	List_1_tDA68EC1B5CE9809C8709C1E58A7D0F4ACBB1252D * V_1 = NULL;
	ARRaycastHit_t2B16118C3B5F17B237335D69B1CA9C27474B621E  V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		// Vector2 screenPosition = Camera.main.ViewportToScreenPoint(new Vector2(0.5f,0.5f));
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_0;
		L_0 = Camera_get_main_mC337C621B91591CEF89504C97EF64D717C12871C(/*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_1;
		memset((&L_1), 0, sizeof(L_1));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_1), (0.5f), (0.5f), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2;
		L_2 = Vector2_op_Implicit_m4FA146E613DBFE6C1C4B0E9B461D622E6F2FC294_inline(L_1, /*hidden argument*/NULL);
		NullCheck(L_0);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3;
		L_3 = Camera_ViewportToScreenPoint_mE22A3D0085E534EF4D0591439EF15DDDB3181DF8(L_0, L_2, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_4;
		L_4 = Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline(L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		// List<ARRaycastHit> hits = new List<ARRaycastHit>();
		List_1_tDA68EC1B5CE9809C8709C1E58A7D0F4ACBB1252D * L_5 = (List_1_tDA68EC1B5CE9809C8709C1E58A7D0F4ACBB1252D *)il2cpp_codegen_object_new(List_1_tDA68EC1B5CE9809C8709C1E58A7D0F4ACBB1252D_il2cpp_TypeInfo_var);
		List_1__ctor_mC26889C0423CCF594A8C363532AC63BB0DB25201(L_5, /*hidden argument*/List_1__ctor_mC26889C0423CCF594A8C363532AC63BB0DB25201_RuntimeMethod_var);
		V_1 = L_5;
		// raycastManager.Raycast(screenPosition,hits,UnityEngine.XR.ARSubsystems.TrackableType.Planes);
		ARRaycastManager_t76CDCF27810673048562A85CAD0E3FEEB3D7328F * L_6 = __this->get_raycastManager_6();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_7 = V_0;
		List_1_tDA68EC1B5CE9809C8709C1E58A7D0F4ACBB1252D * L_8 = V_1;
		NullCheck(L_6);
		bool L_9;
		L_9 = ARRaycastManager_Raycast_mCC2851DAC2542C59528FCE21242231DFAF024650(L_6, L_7, L_8, ((int32_t)15), /*hidden argument*/NULL);
		// if (hits.Count > 0)
		List_1_tDA68EC1B5CE9809C8709C1E58A7D0F4ACBB1252D * L_10 = V_1;
		NullCheck(L_10);
		int32_t L_11;
		L_11 = List_1_get_Count_mB10F8A78245EBB2F22DD22E5AC8CA7D5FDE70B88_inline(L_10, /*hidden argument*/List_1_get_Count_mB10F8A78245EBB2F22DD22E5AC8CA7D5FDE70B88_RuntimeMethod_var);
		if ((((int32_t)L_11) <= ((int32_t)0)))
		{
			goto IL_0081;
		}
	}
	{
		// transform.position = hits[0].pose.position;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_12;
		L_12 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		List_1_tDA68EC1B5CE9809C8709C1E58A7D0F4ACBB1252D * L_13 = V_1;
		NullCheck(L_13);
		ARRaycastHit_t2B16118C3B5F17B237335D69B1CA9C27474B621E  L_14;
		L_14 = List_1_get_Item_m200A6C390D1FAEF2378D70230BD6E96D492ABE04_inline(L_13, 0, /*hidden argument*/List_1_get_Item_m200A6C390D1FAEF2378D70230BD6E96D492ABE04_RuntimeMethod_var);
		V_2 = L_14;
		Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  L_15;
		L_15 = ARRaycastHit_get_pose_mB4D8BC45F23D9F2C2C8DCAFA88DB1221D76EF02B((ARRaycastHit_t2B16118C3B5F17B237335D69B1CA9C27474B621E *)(&V_2), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_16 = L_15.get_position_0();
		NullCheck(L_12);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_12, L_16, /*hidden argument*/NULL);
		// transform.rotation = hits[0].pose.rotation;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_17;
		L_17 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		List_1_tDA68EC1B5CE9809C8709C1E58A7D0F4ACBB1252D * L_18 = V_1;
		NullCheck(L_18);
		ARRaycastHit_t2B16118C3B5F17B237335D69B1CA9C27474B621E  L_19;
		L_19 = List_1_get_Item_m200A6C390D1FAEF2378D70230BD6E96D492ABE04_inline(L_18, 0, /*hidden argument*/List_1_get_Item_m200A6C390D1FAEF2378D70230BD6E96D492ABE04_RuntimeMethod_var);
		V_2 = L_19;
		Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  L_20;
		L_20 = ARRaycastHit_get_pose_mB4D8BC45F23D9F2C2C8DCAFA88DB1221D76EF02B((ARRaycastHit_t2B16118C3B5F17B237335D69B1CA9C27474B621E *)(&V_2), /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_21 = L_20.get_rotation_1();
		NullCheck(L_17);
		Transform_set_rotation_m1B5F3D4CE984AB31254615C9C71B0E54978583B4(L_17, L_21, /*hidden argument*/NULL);
	}

IL_0081:
	{
		// }
		return;
	}
}
// System.Void ARCusor::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARCusor__ctor_m5267FA6396BFCBDE7987A7D719B3EECC43E6FB89 (ARCusor_t203938EAE3094278392B0B5F4A9DBA22B5216F2B * __this, const RuntimeMethod* method)
{
	{
		// public bool useCursor=true;
		__this->set_useCursor_8((bool)1);
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void ARFoundationPlacement::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARFoundationPlacement_Start_m34C79E756AD37E6117CE6C6EE65976192F718890 (ARFoundationPlacement_t42AB2E6C3A2959C49F485A88D07D70DC25C6D69D * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void ARFoundationPlacement::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARFoundationPlacement_Update_m14463659CEB2F57EC82196685965E513844380E5 (ARFoundationPlacement_t42AB2E6C3A2959C49F485A88D07D70DC25C6D69D * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void ARFoundationPlacement::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARFoundationPlacement__ctor_m5AA8B95C2734557E1B3A9BE93B9B386332F53C90 (ARFoundationPlacement_t42AB2E6C3A2959C49F485A88D07D70DC25C6D69D * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void ARKitCameraRender::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARKitCameraRender_Start_mBA9AB39ADDD0202280672C9090E03EBF06A07C7C (ARKitCameraRender_t22DD82E196622777058CEA91BF2C1BAA2477CF98 * __this, const RuntimeMethod* method)
{
	{
		// bCommandBufferInitialized = false;
		__this->set_bCommandBufferInitialized_6((bool)0);
		// }
		return;
	}
}
// System.Void ARKitCameraRender::InitializeCommandBuffer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARKitCameraRender_InitializeCommandBuffer_mD503B7D13460299FF8534691D280E96ED29E3896 (ARKitCameraRender_t22DD82E196622777058CEA91BF2C1BAA2477CF98 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CommandBuffer_t25CD231BD3E822660339DB7D0E8F8ED6B7DBEA29_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisCamera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_mE17146EF5B0D8E9F9D2D2D94567BF211AD00D320_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_VideoCommandBuffer = new CommandBuffer();
		CommandBuffer_t25CD231BD3E822660339DB7D0E8F8ED6B7DBEA29 * L_0 = (CommandBuffer_t25CD231BD3E822660339DB7D0E8F8ED6B7DBEA29 *)il2cpp_codegen_object_new(CommandBuffer_t25CD231BD3E822660339DB7D0E8F8ED6B7DBEA29_il2cpp_TypeInfo_var);
		CommandBuffer__ctor_mB7E1174EB3B4E2E53BCC6532840AB55ECE6D06CF(L_0, /*hidden argument*/NULL);
		__this->set_m_VideoCommandBuffer_5(L_0);
		// m_VideoCommandBuffer.Blit(null, BuiltinRenderTextureType.CurrentActive, m_ClearMaterial);
		CommandBuffer_t25CD231BD3E822660339DB7D0E8F8ED6B7DBEA29 * L_1 = __this->get_m_VideoCommandBuffer_5();
		RenderTargetIdentifier_t70F41F3016FFCC4AAF4D7C57F280818114534C13  L_2;
		L_2 = RenderTargetIdentifier_op_Implicit_mB7B58C1D295E2DAE3C76874D030D4878A825E359(1, /*hidden argument*/NULL);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_3 = __this->get_m_ClearMaterial_4();
		NullCheck(L_1);
		CommandBuffer_Blit_m76E1726DC41C41B8AFAE8DD4CA80627D3AB3802B(L_1, (Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE *)NULL, L_2, L_3, /*hidden argument*/NULL);
		// GetComponent<Camera>().AddCommandBuffer(CameraEvent.BeforeForwardOpaque, m_VideoCommandBuffer);
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_4;
		L_4 = Component_GetComponent_TisCamera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_mE17146EF5B0D8E9F9D2D2D94567BF211AD00D320(__this, /*hidden argument*/Component_GetComponent_TisCamera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_mE17146EF5B0D8E9F9D2D2D94567BF211AD00D320_RuntimeMethod_var);
		CommandBuffer_t25CD231BD3E822660339DB7D0E8F8ED6B7DBEA29 * L_5 = __this->get_m_VideoCommandBuffer_5();
		NullCheck(L_4);
		Camera_AddCommandBuffer_m8F88C5009AC9676BCD0AD1AE4AA655D5BF71CB2F(L_4, ((int32_t)10), L_5, /*hidden argument*/NULL);
		// bCommandBufferInitialized = true;
		__this->set_bCommandBufferInitialized_6((bool)1);
		// }
		return;
	}
}
// System.Void ARKitCameraRender::OnDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARKitCameraRender_OnDestroy_m18D7DE8E6D5E9CE097959A494A1BA23DB1A107DD (ARKitCameraRender_t22DD82E196622777058CEA91BF2C1BAA2477CF98 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisCamera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_mE17146EF5B0D8E9F9D2D2D94567BF211AD00D320_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// GetComponent<Camera>().RemoveCommandBuffer(CameraEvent.BeforeForwardOpaque, m_VideoCommandBuffer);
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_0;
		L_0 = Component_GetComponent_TisCamera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_mE17146EF5B0D8E9F9D2D2D94567BF211AD00D320(__this, /*hidden argument*/Component_GetComponent_TisCamera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_mE17146EF5B0D8E9F9D2D2D94567BF211AD00D320_RuntimeMethod_var);
		CommandBuffer_t25CD231BD3E822660339DB7D0E8F8ED6B7DBEA29 * L_1 = __this->get_m_VideoCommandBuffer_5();
		NullCheck(L_0);
		Camera_RemoveCommandBuffer_m6F4BE369C87C0DB3913AE4A8DA31B2838B1DA3E6(L_0, ((int32_t)10), L_1, /*hidden argument*/NULL);
		// bCommandBufferInitialized = false;
		__this->set_bCommandBufferInitialized_6((bool)0);
		// }
		return;
	}
}
// System.Void ARKitCameraRender::OnPreRender()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARKitCameraRender_OnPreRender_m52259C54EEA489EE69EBEB296B4613EDA325B7A9 (ARKitCameraRender_t22DD82E196622777058CEA91BF2C1BAA2477CF98 * __this, const RuntimeMethod* method)
{
	{
		// if (!bCommandBufferInitialized) {
		bool L_0 = __this->get_bCommandBufferInitialized_6();
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		// InitializeCommandBuffer ();
		ARKitCameraRender_InitializeCommandBuffer_mD503B7D13460299FF8534691D280E96ED29E3896(__this, /*hidden argument*/NULL);
	}

IL_000e:
	{
		// }
		return;
	}
}
// System.Void ARKitCameraRender::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARKitCameraRender__ctor_mCD5A3EB72642613AF9D493F954C93E3C45E34FCC (ARKitCameraRender_t22DD82E196622777058CEA91BF2C1BAA2477CF98 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void ARKitPlacement::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARKitPlacement__ctor_m7A7802CC9E0B542A075263B6C20D08F05D30ED5E (ARKitPlacement_t39ADD720222BF9CE429246849A9E7D673C3A1D0A * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void CameraExtensions::ClearCameraComponents(UnityEngine.Camera)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraExtensions_ClearCameraComponents_m2207CEEB06FFFA9E9813C2C3371ABCC7B35F4224 (Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * ___camera0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisAudioListener_t03B51B434A263F9AFD07AC8AA5CB4FE6402252A3_m0DA4C699234A3DCDAC948DDC6763AE79C2FB5E83_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisFlareLayer_t0E96E3DA6EDBA0626F2322F17A594D4E5E34FBB6_m340092F5A48BE24898132A824851BD0E8C1468E3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB59F0EFCC2B82196C428CFD6D80A08F8B47573FC);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (camera.GetComponent<AudioListener> ()) {
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_0 = ___camera0;
		NullCheck(L_0);
		AudioListener_t03B51B434A263F9AFD07AC8AA5CB4FE6402252A3 * L_1;
		L_1 = Component_GetComponent_TisAudioListener_t03B51B434A263F9AFD07AC8AA5CB4FE6402252A3_m0DA4C699234A3DCDAC948DDC6763AE79C2FB5E83(L_0, /*hidden argument*/Component_GetComponent_TisAudioListener_t03B51B434A263F9AFD07AC8AA5CB4FE6402252A3_m0DA4C699234A3DCDAC948DDC6763AE79C2FB5E83_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499(L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0018;
		}
	}
	{
		// MonoBehaviour.Destroy (camera.GetComponent<AudioListener> ());
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_3 = ___camera0;
		NullCheck(L_3);
		AudioListener_t03B51B434A263F9AFD07AC8AA5CB4FE6402252A3 * L_4;
		L_4 = Component_GetComponent_TisAudioListener_t03B51B434A263F9AFD07AC8AA5CB4FE6402252A3_m0DA4C699234A3DCDAC948DDC6763AE79C2FB5E83(L_3, /*hidden argument*/Component_GetComponent_TisAudioListener_t03B51B434A263F9AFD07AC8AA5CB4FE6402252A3_m0DA4C699234A3DCDAC948DDC6763AE79C2FB5E83_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(L_4, /*hidden argument*/NULL);
	}

IL_0018:
	{
		// if (camera.GetComponent<FlareLayer> ()) {
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_5 = ___camera0;
		NullCheck(L_5);
		FlareLayer_t0E96E3DA6EDBA0626F2322F17A594D4E5E34FBB6 * L_6;
		L_6 = Component_GetComponent_TisFlareLayer_t0E96E3DA6EDBA0626F2322F17A594D4E5E34FBB6_m340092F5A48BE24898132A824851BD0E8C1468E3(L_5, /*hidden argument*/Component_GetComponent_TisFlareLayer_t0E96E3DA6EDBA0626F2322F17A594D4E5E34FBB6_m340092F5A48BE24898132A824851BD0E8C1468E3_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_7;
		L_7 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499(L_6, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_0030;
		}
	}
	{
		// MonoBehaviour.Destroy (camera.GetComponent<FlareLayer> ());
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_8 = ___camera0;
		NullCheck(L_8);
		FlareLayer_t0E96E3DA6EDBA0626F2322F17A594D4E5E34FBB6 * L_9;
		L_9 = Component_GetComponent_TisFlareLayer_t0E96E3DA6EDBA0626F2322F17A594D4E5E34FBB6_m340092F5A48BE24898132A824851BD0E8C1468E3(L_8, /*hidden argument*/Component_GetComponent_TisFlareLayer_t0E96E3DA6EDBA0626F2322F17A594D4E5E34FBB6_m340092F5A48BE24898132A824851BD0E8C1468E3_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(L_9, /*hidden argument*/NULL);
	}

IL_0030:
	{
		// camera.gameObject.tag = "Untagged";
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_10 = ___camera0;
		NullCheck(L_10);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_11;
		L_11 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_10, /*hidden argument*/NULL);
		NullCheck(L_11);
		GameObject_set_tag_m0EBA46574304C71E047A33BDD5F5D49E9D9A25BE(L_11, _stringLiteralB59F0EFCC2B82196C428CFD6D80A08F8B47573FC, /*hidden argument*/NULL);
		// camera.enabled = false;
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_12 = ___camera0;
		NullCheck(L_12);
		Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32(L_12, (bool)0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void CameraExtensions::LayerCullingShow(UnityEngine.Camera,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraExtensions_LayerCullingShow_m7BD7EE4365D62985B64F84ADC12078390A2F68B2 (Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * ___cam0, int32_t ___layer1, const RuntimeMethod* method)
{
	{
		// cam.cullingMask |= 1 << layer;
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_0 = ___cam0;
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_1 = L_0;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = Camera_get_cullingMask_m63492ED3AFA8F571FBED0B1729264A2E3BB64236(L_1, /*hidden argument*/NULL);
		int32_t L_3 = ___layer1;
		NullCheck(L_1);
		Camera_set_cullingMask_mB4B1EE4C6CC355625EDE08EAF17E99DAB242E0CC(L_1, ((int32_t)((int32_t)L_2|(int32_t)((int32_t)((int32_t)1<<(int32_t)((int32_t)((int32_t)L_3&(int32_t)((int32_t)31))))))), /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void CameraExtensions::LayerCullingShowMask(UnityEngine.Camera,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraExtensions_LayerCullingShowMask_m69EB95417060E388D8F58ABFB366959BBE236A56 (Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * ___cam0, int32_t ___layerMask1, const RuntimeMethod* method)
{
	{
		// cam.cullingMask |= layerMask;
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_0 = ___cam0;
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_1 = L_0;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = Camera_get_cullingMask_m63492ED3AFA8F571FBED0B1729264A2E3BB64236(L_1, /*hidden argument*/NULL);
		int32_t L_3 = ___layerMask1;
		NullCheck(L_1);
		Camera_set_cullingMask_mB4B1EE4C6CC355625EDE08EAF17E99DAB242E0CC(L_1, ((int32_t)((int32_t)L_2|(int32_t)L_3)), /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void CameraExtensions::LayerCullingHide(UnityEngine.Camera,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraExtensions_LayerCullingHide_mA075BA4596F58AB98EB1B0587DE1C769E8589DE2 (Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * ___cam0, int32_t ___layerMask1, const RuntimeMethod* method)
{
	{
		// cam.cullingMask &=  ~(1 << layerMask);
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_0 = ___cam0;
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_1 = L_0;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = Camera_get_cullingMask_m63492ED3AFA8F571FBED0B1729264A2E3BB64236(L_1, /*hidden argument*/NULL);
		int32_t L_3 = ___layerMask1;
		NullCheck(L_1);
		Camera_set_cullingMask_mB4B1EE4C6CC355625EDE08EAF17E99DAB242E0CC(L_1, ((int32_t)((int32_t)L_2&(int32_t)((~((int32_t)((int32_t)1<<(int32_t)((int32_t)((int32_t)L_3&(int32_t)((int32_t)31))))))))), /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void CameraExtensions::LayerCullingToggle(UnityEngine.Camera,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraExtensions_LayerCullingToggle_mBB91040BE633BC984A1A0EF74CF3D07BF4DD88E7 (Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * ___cam0, int32_t ___layerMask1, const RuntimeMethod* method)
{
	{
		// cam.cullingMask ^= layerMask;
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_0 = ___cam0;
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_1 = L_0;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = Camera_get_cullingMask_m63492ED3AFA8F571FBED0B1729264A2E3BB64236(L_1, /*hidden argument*/NULL);
		int32_t L_3 = ___layerMask1;
		NullCheck(L_1);
		Camera_set_cullingMask_mB4B1EE4C6CC355625EDE08EAF17E99DAB242E0CC(L_1, ((int32_t)((int32_t)L_2^(int32_t)L_3)), /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Boolean CameraExtensions::LayerCullingIncludes(UnityEngine.Camera,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CameraExtensions_LayerCullingIncludes_mB7509BC2C911529F8B60ACE8BF47CA2CF7FA809A (Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * ___cam0, int32_t ___layerMask1, const RuntimeMethod* method)
{
	{
		// return (cam.cullingMask & layerMask) > 0;
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_0 = ___cam0;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = Camera_get_cullingMask_m63492ED3AFA8F571FBED0B1729264A2E3BB64236(L_0, /*hidden argument*/NULL);
		int32_t L_2 = ___layerMask1;
		return (bool)((((int32_t)((int32_t)((int32_t)L_1&(int32_t)L_2))) > ((int32_t)0))? 1 : 0);
	}
}
// UnityEngine.Camera CameraExtensions::CameraForObject(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * CameraExtensions_CameraForObject_mDFB14F372470D558EF73095B614ACBBFBB96EE73 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___obj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponentInChildren_TisCamera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_m82C012E5C19C54F736F3C32378E321895DF91F42_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisCamera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_mE3C86755BA935C0F4BDABF7D1E338FA5247E4F49_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (obj.GetComponent<Camera> ()) {
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = ___obj0;
		NullCheck(L_0);
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_1;
		L_1 = GameObject_GetComponent_TisCamera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_mE3C86755BA935C0F4BDABF7D1E338FA5247E4F49(L_0, /*hidden argument*/GameObject_GetComponent_TisCamera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_mE3C86755BA935C0F4BDABF7D1E338FA5247E4F49_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499(L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0014;
		}
	}
	{
		// return obj.GetComponent<Camera> ();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_3 = ___obj0;
		NullCheck(L_3);
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_4;
		L_4 = GameObject_GetComponent_TisCamera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_mE3C86755BA935C0F4BDABF7D1E338FA5247E4F49(L_3, /*hidden argument*/GameObject_GetComponent_TisCamera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_mE3C86755BA935C0F4BDABF7D1E338FA5247E4F49_RuntimeMethod_var);
		return L_4;
	}

IL_0014:
	{
		// if (obj.GetComponentInChildren<Camera> ()) {
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_5 = ___obj0;
		NullCheck(L_5);
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_6;
		L_6 = GameObject_GetComponentInChildren_TisCamera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_m82C012E5C19C54F736F3C32378E321895DF91F42(L_5, /*hidden argument*/GameObject_GetComponentInChildren_TisCamera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_m82C012E5C19C54F736F3C32378E321895DF91F42_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_7;
		L_7 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499(L_6, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_0028;
		}
	}
	{
		// return obj.GetComponentInChildren<Camera> ();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_8 = ___obj0;
		NullCheck(L_8);
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_9;
		L_9 = GameObject_GetComponentInChildren_TisCamera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_m82C012E5C19C54F736F3C32378E321895DF91F42(L_8, /*hidden argument*/GameObject_GetComponentInChildren_TisCamera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_m82C012E5C19C54F736F3C32378E321895DF91F42_RuntimeMethod_var);
		return L_9;
	}

IL_0028:
	{
		// return null;
		return (Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C *)NULL;
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
// System.Void ControllerGrabObject::OnTriggerEnter(UnityEngine.Collider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ControllerGrabObject_OnTriggerEnter_m5C99E6C4DD35FAB01DE81246517CBC9FB803D47E (ControllerGrabObject_tD8EC56C9C71EAC95FD692C2D16CA944AF071DD4E * __this, Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * ___other0, const RuntimeMethod* method)
{
	{
		// SetCollidingObject(other);
		Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * L_0 = ___other0;
		ControllerGrabObject_SetCollidingObject_m620F8AC9F7E93D0943DC0D9A501D6C9D6D4CDFD1(__this, L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void ControllerGrabObject::OnTriggerStay(UnityEngine.Collider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ControllerGrabObject_OnTriggerStay_mB5E87B9A996FF6513105FA2D598B9447669E8791 (ControllerGrabObject_tD8EC56C9C71EAC95FD692C2D16CA944AF071DD4E * __this, Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * ___other0, const RuntimeMethod* method)
{
	{
		// SetCollidingObject(other);
		Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * L_0 = ___other0;
		ControllerGrabObject_SetCollidingObject_m620F8AC9F7E93D0943DC0D9A501D6C9D6D4CDFD1(__this, L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void ControllerGrabObject::OnTriggerExit(UnityEngine.Collider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ControllerGrabObject_OnTriggerExit_m77D0C8725DE109B354CAC1B84C0A7BE282BCF5C9 (ControllerGrabObject_tD8EC56C9C71EAC95FD692C2D16CA944AF071DD4E * __this, Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * ___other0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!collidingObject)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_collidingObject_4();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499(L_0, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_000e;
		}
	}
	{
		// return;
		return;
	}

IL_000e:
	{
		// collidingObject = null;
		__this->set_collidingObject_4((GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)NULL);
		// }
		return;
	}
}
// System.Void ControllerGrabObject::SetCollidingObject(UnityEngine.Collider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ControllerGrabObject_SetCollidingObject_m620F8AC9F7E93D0943DC0D9A501D6C9D6D4CDFD1 (ControllerGrabObject_tD8EC56C9C71EAC95FD692C2D16CA944AF071DD4E * __this, Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * ___col0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A_m9DC24AA806B0B65E917751F7A3AFDB58861157CE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (collidingObject || !col.GetComponent<Rigidbody>())
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_collidingObject_4();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499(L_0, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_001a;
		}
	}
	{
		Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * L_2 = ___col0;
		NullCheck(L_2);
		Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * L_3;
		L_3 = Component_GetComponent_TisRigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A_m9DC24AA806B0B65E917751F7A3AFDB58861157CE(L_2, /*hidden argument*/Component_GetComponent_TisRigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A_m9DC24AA806B0B65E917751F7A3AFDB58861157CE_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499(L_3, /*hidden argument*/NULL);
		if (L_4)
		{
			goto IL_001b;
		}
	}

IL_001a:
	{
		// return;
		return;
	}

IL_001b:
	{
		// collidingObject = col.gameObject;
		Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * L_5 = ___col0;
		NullCheck(L_5);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_6;
		L_6 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_5, /*hidden argument*/NULL);
		__this->set_collidingObject_4(L_6);
		// }
		return;
	}
}
// System.Void ControllerGrabObject::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ControllerGrabObject_Update_mAAEEE2ED8C1D0AE673869E6A54092857023B2795 (ControllerGrabObject_tD8EC56C9C71EAC95FD692C2D16CA944AF071DD4E * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void ControllerGrabObject::GrabObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ControllerGrabObject_GrabObject_mD1997D7E86AE09D81E813DE65D63DD8DF2025D01 (ControllerGrabObject_tD8EC56C9C71EAC95FD692C2D16CA944AF071DD4E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisRigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A_mA1779277BB07CE3D2CB8E340CEA85C40C6B52354_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// objectInHand = collidingObject;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_collidingObject_4();
		__this->set_objectInHand_5(L_0);
		// collidingObject = null;
		__this->set_collidingObject_4((GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)NULL);
		// var joint = AddFixedJoint();
		FixedJoint_tB98C66DD49AFBAB1114A59E8132EB2498C540B09 * L_1;
		L_1 = ControllerGrabObject_AddFixedJoint_m104337E6EB483F6186D28BA8FAE72EAA5F2A276A(__this, /*hidden argument*/NULL);
		// joint.connectedBody = objectInHand.GetComponent<Rigidbody>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2 = __this->get_objectInHand_5();
		NullCheck(L_2);
		Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * L_3;
		L_3 = GameObject_GetComponent_TisRigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A_mA1779277BB07CE3D2CB8E340CEA85C40C6B52354(L_2, /*hidden argument*/GameObject_GetComponent_TisRigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A_mA1779277BB07CE3D2CB8E340CEA85C40C6B52354_RuntimeMethod_var);
		NullCheck(L_1);
		Joint_set_connectedBody_m572C6C32E2FC5263AECDC460D50E5B0F79727B30(L_1, L_3, /*hidden argument*/NULL);
		// }
		return;
	}
}
// UnityEngine.FixedJoint ControllerGrabObject::AddFixedJoint()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FixedJoint_tB98C66DD49AFBAB1114A59E8132EB2498C540B09 * ControllerGrabObject_AddFixedJoint_m104337E6EB483F6186D28BA8FAE72EAA5F2A276A (ControllerGrabObject_tD8EC56C9C71EAC95FD692C2D16CA944AF071DD4E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisFixedJoint_tB98C66DD49AFBAB1114A59E8132EB2498C540B09_m85194BB051287849C5780CB836BBE0C69DE4151A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// FixedJoint fx = gameObject.AddComponent<FixedJoint>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0;
		L_0 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		FixedJoint_tB98C66DD49AFBAB1114A59E8132EB2498C540B09 * L_1;
		L_1 = GameObject_AddComponent_TisFixedJoint_tB98C66DD49AFBAB1114A59E8132EB2498C540B09_m85194BB051287849C5780CB836BBE0C69DE4151A(L_0, /*hidden argument*/GameObject_AddComponent_TisFixedJoint_tB98C66DD49AFBAB1114A59E8132EB2498C540B09_m85194BB051287849C5780CB836BBE0C69DE4151A_RuntimeMethod_var);
		// fx.breakForce = 20000;
		FixedJoint_tB98C66DD49AFBAB1114A59E8132EB2498C540B09 * L_2 = L_1;
		NullCheck(L_2);
		Joint_set_breakForce_m40F48AA52A113A84C9FE2CF42D46D09AFE76FC7E(L_2, (20000.0f), /*hidden argument*/NULL);
		// fx.breakTorque = 20000;
		FixedJoint_tB98C66DD49AFBAB1114A59E8132EB2498C540B09 * L_3 = L_2;
		NullCheck(L_3);
		Joint_set_breakTorque_m2DF96181B4379D971CA4BD6BA59702D548292AB7(L_3, (20000.0f), /*hidden argument*/NULL);
		// return fx;
		return L_3;
	}
}
// System.Void ControllerGrabObject::ReleaseObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ControllerGrabObject_ReleaseObject_m67784CF75AD42EAF21CF8AF7EB2F13EF4831727F (ControllerGrabObject_tD8EC56C9C71EAC95FD692C2D16CA944AF071DD4E * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void ControllerGrabObject::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ControllerGrabObject__ctor_mF614FD3E46FD2690E57FD433EAE9C17806A86970 (ControllerGrabObject_tD8EC56C9C71EAC95FD692C2D16CA944AF071DD4E * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void Dimension::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dimension_Awake_m200E34C2AC045F44544B1D83A92120569E3F6C22 (Dimension_t28D074E7D31C414382BEB891CF77CF6345E04C34 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisSkybox_t8B0EA7C092363DBCCF0B51434F04E7EE661E28E0_m11DD63313E45B5E0C62FFCF04F0962CCF57D9FA2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisLight_tA2F349FE839781469A0344CF6039B51512394275_m0EB52103D195BED7315C22DC3394855236FCEBDC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponentsInChildren_TisTransform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1_m1D81E170D9B0CD0720A6BCDD722BC8A0B4AA8F0E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LayerManager_t3527BEB62E0C7C2C45055FE662E50E75642F7942_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m98F9810F948087F92A86F8F8B9172D84010E861C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mC3D6B78E090A56B23425C490B695934EC2C29851_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tF98B6D846565344249C79E895B9E3BF385EA519E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9D5313975DA8153FF9A5262016CB413A4E84846E);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D* V_1 = NULL;
	int32_t V_2 = 0;
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * V_3 = NULL;
	CameraU5BU5D_tAF84B9EC9AF40F1B6294BCEBA82A1AD123A9D001* V_4 = NULL;
	Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * V_5 = NULL;
	{
		// connectedPortals = new List<Portal> ();
		List_1_tF98B6D846565344249C79E895B9E3BF385EA519E * L_0 = (List_1_tF98B6D846565344249C79E895B9E3BF385EA519E *)il2cpp_codegen_object_new(List_1_tF98B6D846565344249C79E895B9E3BF385EA519E_il2cpp_TypeInfo_var);
		List_1__ctor_mC3D6B78E090A56B23425C490B695934EC2C29851(L_0, /*hidden argument*/List_1__ctor_mC3D6B78E090A56B23425C490B695934EC2C29851_RuntimeMethod_var);
		__this->set_connectedPortals_8(L_0);
		// layer = LayerManager.Instance ().CreateLayer (gameObject.name);
		IL2CPP_RUNTIME_CLASS_INIT(LayerManager_t3527BEB62E0C7C2C45055FE662E50E75642F7942_il2cpp_TypeInfo_var);
		LayerManager_t3527BEB62E0C7C2C45055FE662E50E75642F7942 * L_1;
		L_1 = LayerManager_Instance_m22B6988456614FBB6BD5D0232CF949B36C7F757C(/*hidden argument*/NULL);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2;
		L_2 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		NullCheck(L_2);
		String_t* L_3;
		L_3 = Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB(L_2, /*hidden argument*/NULL);
		NullCheck(L_1);
		int32_t L_4;
		L_4 = LayerManager_CreateLayer_m7DFE6331E95A38042DA768683F4979C47DBAAC25(L_1, L_3, /*hidden argument*/NULL);
		__this->set_layer_5(L_4);
		// LayerManager.definedDimensions.Add (this);
		List_1_t8541C8BADA1A4B90DE74D36D29037CF0E814B9AA * L_5 = ((LayerManager_t3527BEB62E0C7C2C45055FE662E50E75642F7942_StaticFields*)il2cpp_codegen_static_fields_for(LayerManager_t3527BEB62E0C7C2C45055FE662E50E75642F7942_il2cpp_TypeInfo_var))->get_definedDimensions_2();
		NullCheck(L_5);
		List_1_Add_m98F9810F948087F92A86F8F8B9172D84010E861C(L_5, __this, /*hidden argument*/List_1_Add_m98F9810F948087F92A86F8F8B9172D84010E861C_RuntimeMethod_var);
		// gameObject.layer = layer;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_6;
		L_6 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		int32_t L_7 = __this->get_layer_5();
		NullCheck(L_6);
		GameObject_set_layer_m2F946916ACB41A59C46346F5243F2BAC235A36A6(L_6, L_7, /*hidden argument*/NULL);
		// int defaultLayer = LayerMask.NameToLayer("Default");
		int32_t L_8;
		L_8 = LayerMask_NameToLayer_m6A2BBB60EC90F7EC48A6A91CA98149C547A04C0A(_stringLiteral9D5313975DA8153FF9A5262016CB413A4E84846E, /*hidden argument*/NULL);
		V_0 = L_8;
		// if (!this.forceKeepInitialLayers) {
		bool L_9 = __this->get_forceKeepInitialLayers_7();
		if (L_9)
		{
			goto IL_00bf;
		}
	}
	{
		// Transform[] childrenTransforms = gameObject.GetComponentsInChildren<Transform> ();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_10;
		L_10 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		NullCheck(L_10);
		TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D* L_11;
		L_11 = GameObject_GetComponentsInChildren_TisTransform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1_m1D81E170D9B0CD0720A6BCDD722BC8A0B4AA8F0E(L_10, /*hidden argument*/GameObject_GetComponentsInChildren_TisTransform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1_m1D81E170D9B0CD0720A6BCDD722BC8A0B4AA8F0E_RuntimeMethod_var);
		// foreach (Transform t in childrenTransforms) {
		V_1 = L_11;
		V_2 = 0;
		goto IL_00b9;
	}

IL_0065:
	{
		// foreach (Transform t in childrenTransforms) {
		TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D* L_12 = V_1;
		int32_t L_13 = V_2;
		NullCheck(L_12);
		int32_t L_14 = L_13;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_15 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		V_3 = L_15;
		// t.gameObject.layer = layer;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_16 = V_3;
		NullCheck(L_16);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_17;
		L_17 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_16, /*hidden argument*/NULL);
		int32_t L_18 = __this->get_layer_5();
		NullCheck(L_17);
		GameObject_set_layer_m2F946916ACB41A59C46346F5243F2BAC235A36A6(L_17, L_18, /*hidden argument*/NULL);
		// if (t.gameObject.GetComponent<Light> ()) {
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_19 = V_3;
		NullCheck(L_19);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_20;
		L_20 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_19, /*hidden argument*/NULL);
		NullCheck(L_20);
		Light_tA2F349FE839781469A0344CF6039B51512394275 * L_21;
		L_21 = GameObject_GetComponent_TisLight_tA2F349FE839781469A0344CF6039B51512394275_m0EB52103D195BED7315C22DC3394855236FCEBDC(L_20, /*hidden argument*/GameObject_GetComponent_TisLight_tA2F349FE839781469A0344CF6039B51512394275_m0EB52103D195BED7315C22DC3394855236FCEBDC_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_22;
		L_22 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499(L_21, /*hidden argument*/NULL);
		if (!L_22)
		{
			goto IL_00b5;
		}
	}
	{
		// Light light = t.gameObject.GetComponent<Light> ();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_23 = V_3;
		NullCheck(L_23);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_24;
		L_24 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_23, /*hidden argument*/NULL);
		NullCheck(L_24);
		Light_tA2F349FE839781469A0344CF6039B51512394275 * L_25;
		L_25 = GameObject_GetComponent_TisLight_tA2F349FE839781469A0344CF6039B51512394275_m0EB52103D195BED7315C22DC3394855236FCEBDC(L_24, /*hidden argument*/GameObject_GetComponent_TisLight_tA2F349FE839781469A0344CF6039B51512394275_m0EB52103D195BED7315C22DC3394855236FCEBDC_RuntimeMethod_var);
		// light.cullingMask = defaultLayer;
		Light_tA2F349FE839781469A0344CF6039B51512394275 * L_26 = L_25;
		int32_t L_27 = V_0;
		NullCheck(L_26);
		Light_set_cullingMask_m4C8DE4FCAA45EBDC4F5A29639D87A4B8BA5AF717(L_26, L_27, /*hidden argument*/NULL);
		// light.cullingMask |= 1 << layer;
		Light_tA2F349FE839781469A0344CF6039B51512394275 * L_28 = L_26;
		NullCheck(L_28);
		int32_t L_29;
		L_29 = Light_get_cullingMask_mE74EEA0F3B6C92793ADA4B6B860B9B85B6668A11(L_28, /*hidden argument*/NULL);
		int32_t L_30 = __this->get_layer_5();
		NullCheck(L_28);
		Light_set_cullingMask_m4C8DE4FCAA45EBDC4F5A29639D87A4B8BA5AF717(L_28, ((int32_t)((int32_t)L_29|(int32_t)((int32_t)((int32_t)1<<(int32_t)((int32_t)((int32_t)L_30&(int32_t)((int32_t)31))))))), /*hidden argument*/NULL);
	}

IL_00b5:
	{
		int32_t L_31 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_31, (int32_t)1));
	}

IL_00b9:
	{
		// foreach (Transform t in childrenTransforms) {
		int32_t L_32 = V_2;
		TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D* L_33 = V_1;
		NullCheck(L_33);
		if ((((int32_t)L_32) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_33)->max_length))))))
		{
			goto IL_0065;
		}
	}

IL_00bf:
	{
		// foreach (Camera camera in Camera.allCameras) {
		CameraU5BU5D_tAF84B9EC9AF40F1B6294BCEBA82A1AD123A9D001* L_34;
		L_34 = Camera_get_allCameras_m1191B0E8A5627AA6AE59D4A3A079C0CED0BDF3E8(/*hidden argument*/NULL);
		V_4 = L_34;
		V_2 = 0;
		goto IL_0118;
	}

IL_00ca:
	{
		// foreach (Camera camera in Camera.allCameras) {
		CameraU5BU5D_tAF84B9EC9AF40F1B6294BCEBA82A1AD123A9D001* L_35 = V_4;
		int32_t L_36 = V_2;
		NullCheck(L_35);
		int32_t L_37 = L_36;
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_38 = (L_35)->GetAt(static_cast<il2cpp_array_size_t>(L_37));
		V_5 = L_38;
		// if (this.initialWorld)
		bool L_39 = __this->get_initialWorld_6();
		if (!L_39)
		{
			goto IL_0107;
		}
	}
	{
		// CameraExtensions.LayerCullingShow(camera, layer);
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_40 = V_5;
		int32_t L_41 = __this->get_layer_5();
		CameraExtensions_LayerCullingShow_m7BD7EE4365D62985B64F84ADC12078390A2F68B2(L_40, L_41, /*hidden argument*/NULL);
		// if (camera.GetComponent<Skybox>())
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_42 = V_5;
		NullCheck(L_42);
		Skybox_t8B0EA7C092363DBCCF0B51434F04E7EE661E28E0 * L_43;
		L_43 = Component_GetComponent_TisSkybox_t8B0EA7C092363DBCCF0B51434F04E7EE661E28E0_m11DD63313E45B5E0C62FFCF04F0962CCF57D9FA2(L_42, /*hidden argument*/Component_GetComponent_TisSkybox_t8B0EA7C092363DBCCF0B51434F04E7EE661E28E0_m11DD63313E45B5E0C62FFCF04F0962CCF57D9FA2_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_44;
		L_44 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499(L_43, /*hidden argument*/NULL);
		if (!L_44)
		{
			goto IL_0114;
		}
	}
	{
		// camera.GetComponent<Skybox>().material = customSkybox;
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_45 = V_5;
		NullCheck(L_45);
		Skybox_t8B0EA7C092363DBCCF0B51434F04E7EE661E28E0 * L_46;
		L_46 = Component_GetComponent_TisSkybox_t8B0EA7C092363DBCCF0B51434F04E7EE661E28E0_m11DD63313E45B5E0C62FFCF04F0962CCF57D9FA2(L_45, /*hidden argument*/Component_GetComponent_TisSkybox_t8B0EA7C092363DBCCF0B51434F04E7EE661E28E0_m11DD63313E45B5E0C62FFCF04F0962CCF57D9FA2_RuntimeMethod_var);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_47 = __this->get_customSkybox_4();
		NullCheck(L_46);
		Skybox_set_material_m74316F6709A669D3181C4CB1EA1F40E745D0F88A(L_46, L_47, /*hidden argument*/NULL);
		// }
		goto IL_0114;
	}

IL_0107:
	{
		// CameraExtensions.LayerCullingHide(camera, layer);
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_48 = V_5;
		int32_t L_49 = __this->get_layer_5();
		CameraExtensions_LayerCullingHide_mA075BA4596F58AB98EB1B0587DE1C769E8589DE2(L_48, L_49, /*hidden argument*/NULL);
	}

IL_0114:
	{
		int32_t L_50 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_50, (int32_t)1));
	}

IL_0118:
	{
		// foreach (Camera camera in Camera.allCameras) {
		int32_t L_51 = V_2;
		CameraU5BU5D_tAF84B9EC9AF40F1B6294BCEBA82A1AD123A9D001* L_52 = V_4;
		NullCheck(L_52);
		if ((((int32_t)L_51) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_52)->max_length))))))
		{
			goto IL_00ca;
		}
	}
	{
		// }
		return;
	}
}
// System.Void Dimension::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dimension_Start_mEA170B8BA3799A4E78A6E153151D041D21FB602B (Dimension_t28D074E7D31C414382BEB891CF77CF6345E04C34 * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void Dimension::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dimension_Update_m8FF538F69AF973A984B3DFA4EC844E311973F35D (Dimension_t28D074E7D31C414382BEB891CF77CF6345E04C34 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisSkybox_t8B0EA7C092363DBCCF0B51434F04E7EE661E28E0_m11DD63313E45B5E0C62FFCF04F0962CCF57D9FA2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(mainCameraNeedsSetup)
		bool L_0 = __this->get_mainCameraNeedsSetup_11();
		if (!L_0)
		{
			goto IL_0082;
		}
	}
	{
		// if (Camera.main == null) {
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_1;
		L_1 = Camera_get_main_mC337C621B91591CEF89504C97EF64D717C12871C(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_1, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0016;
		}
	}
	{
		// return;
		return;
	}

IL_0016:
	{
		// if (this.initialWorld)
		bool L_3 = __this->get_initialWorld_6();
		if (!L_3)
		{
			goto IL_006b;
		}
	}
	{
		// CameraExtensions.LayerCullingShow(Camera.main, layer);
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_4;
		L_4 = Camera_get_main_mC337C621B91591CEF89504C97EF64D717C12871C(/*hidden argument*/NULL);
		int32_t L_5 = __this->get_layer_5();
		CameraExtensions_LayerCullingShow_m7BD7EE4365D62985B64F84ADC12078390A2F68B2(L_4, L_5, /*hidden argument*/NULL);
		// Camera.main.gameObject.layer = layer;
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_6;
		L_6 = Camera_get_main_mC337C621B91591CEF89504C97EF64D717C12871C(/*hidden argument*/NULL);
		NullCheck(L_6);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_7;
		L_7 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_6, /*hidden argument*/NULL);
		int32_t L_8 = __this->get_layer_5();
		NullCheck(L_7);
		GameObject_set_layer_m2F946916ACB41A59C46346F5243F2BAC235A36A6(L_7, L_8, /*hidden argument*/NULL);
		// if (Camera.main.GetComponent<Skybox>())
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_9;
		L_9 = Camera_get_main_mC337C621B91591CEF89504C97EF64D717C12871C(/*hidden argument*/NULL);
		NullCheck(L_9);
		Skybox_t8B0EA7C092363DBCCF0B51434F04E7EE661E28E0 * L_10;
		L_10 = Component_GetComponent_TisSkybox_t8B0EA7C092363DBCCF0B51434F04E7EE661E28E0_m11DD63313E45B5E0C62FFCF04F0962CCF57D9FA2(L_9, /*hidden argument*/Component_GetComponent_TisSkybox_t8B0EA7C092363DBCCF0B51434F04E7EE661E28E0_m11DD63313E45B5E0C62FFCF04F0962CCF57D9FA2_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_11;
		L_11 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499(L_10, /*hidden argument*/NULL);
		if (!L_11)
		{
			goto IL_007b;
		}
	}
	{
		// Camera.main.GetComponent<Skybox>().material = customSkybox;
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_12;
		L_12 = Camera_get_main_mC337C621B91591CEF89504C97EF64D717C12871C(/*hidden argument*/NULL);
		NullCheck(L_12);
		Skybox_t8B0EA7C092363DBCCF0B51434F04E7EE661E28E0 * L_13;
		L_13 = Component_GetComponent_TisSkybox_t8B0EA7C092363DBCCF0B51434F04E7EE661E28E0_m11DD63313E45B5E0C62FFCF04F0962CCF57D9FA2(L_12, /*hidden argument*/Component_GetComponent_TisSkybox_t8B0EA7C092363DBCCF0B51434F04E7EE661E28E0_m11DD63313E45B5E0C62FFCF04F0962CCF57D9FA2_RuntimeMethod_var);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_14 = __this->get_customSkybox_4();
		NullCheck(L_13);
		Skybox_set_material_m74316F6709A669D3181C4CB1EA1F40E745D0F88A(L_13, L_14, /*hidden argument*/NULL);
		// } else {
		goto IL_007b;
	}

IL_006b:
	{
		// CameraExtensions.LayerCullingHide(Camera.main, layer);
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_15;
		L_15 = Camera_get_main_mC337C621B91591CEF89504C97EF64D717C12871C(/*hidden argument*/NULL);
		int32_t L_16 = __this->get_layer_5();
		CameraExtensions_LayerCullingHide_mA075BA4596F58AB98EB1B0587DE1C769E8589DE2(L_15, L_16, /*hidden argument*/NULL);
	}

IL_007b:
	{
		// this.mainCameraNeedsSetup = false;
		__this->set_mainCameraNeedsSetup_11((bool)0);
	}

IL_0082:
	{
		// }
		return;
	}
}
// System.Void Dimension::SwitchConnectingPortals()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dimension_SwitchConnectingPortals_m4C629D85A4B5E5C0DEC8437B011D39D136BFBDB7 (Dimension_t28D074E7D31C414382BEB891CF77CF6345E04C34 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m2CA1D495CF53152D382FE86C5F0A73F644F3E6B7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mB6178B876BA8A284965E31BEE9A1D81C6B22E419_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m463A9A414E2DBE1AB63DB0E3DD5116ED743D7AFD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_mF6A8DB4F94B9B38EFF385A072ECECAD67222BFED_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_t42BF4791E9024F9ADF2FF759B419F7DD450B89AA  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Portal_t355BC086AE7B4F5E476064C8805CA0830E0CA48E * V_1 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		// foreach (Portal portal in connectedPortals) {
		List_1_tF98B6D846565344249C79E895B9E3BF385EA519E * L_0 = __this->get_connectedPortals_8();
		NullCheck(L_0);
		Enumerator_t42BF4791E9024F9ADF2FF759B419F7DD450B89AA  L_1;
		L_1 = List_1_GetEnumerator_mF6A8DB4F94B9B38EFF385A072ECECAD67222BFED(L_0, /*hidden argument*/List_1_GetEnumerator_mF6A8DB4F94B9B38EFF385A072ECECAD67222BFED_RuntimeMethod_var);
		V_0 = L_1;
	}

IL_000c:
	try
	{ // begin try (depth: 1)
		{
			goto IL_002a;
		}

IL_000e:
		{
			// foreach (Portal portal in connectedPortals) {
			Portal_t355BC086AE7B4F5E476064C8805CA0830E0CA48E * L_2;
			L_2 = Enumerator_get_Current_m463A9A414E2DBE1AB63DB0E3DD5116ED743D7AFD_inline((Enumerator_t42BF4791E9024F9ADF2FF759B419F7DD450B89AA *)(&V_0), /*hidden argument*/Enumerator_get_Current_m463A9A414E2DBE1AB63DB0E3DD5116ED743D7AFD_RuntimeMethod_var);
			V_1 = L_2;
			// if (portal.ToDimension () == this) {
			Portal_t355BC086AE7B4F5E476064C8805CA0830E0CA48E * L_3 = V_1;
			NullCheck(L_3);
			Dimension_t28D074E7D31C414382BEB891CF77CF6345E04C34 * L_4;
			L_4 = Portal_ToDimension_mD33B18BBDBEDE671CC5737BD70C3CFD5A1738BA3(L_3, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
			bool L_5;
			L_5 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_4, __this, /*hidden argument*/NULL);
			if (!L_5)
			{
				goto IL_002a;
			}
		}

IL_0024:
		{
			// portal.SwitchPortalDimensions ();
			Portal_t355BC086AE7B4F5E476064C8805CA0830E0CA48E * L_6 = V_1;
			NullCheck(L_6);
			Portal_SwitchPortalDimensions_m58C134865A1017CC8B8D1A5404F22B4DF2313E16(L_6, /*hidden argument*/NULL);
		}

IL_002a:
		{
			// foreach (Portal portal in connectedPortals) {
			bool L_7;
			L_7 = Enumerator_MoveNext_mB6178B876BA8A284965E31BEE9A1D81C6B22E419((Enumerator_t42BF4791E9024F9ADF2FF759B419F7DD450B89AA *)(&V_0), /*hidden argument*/Enumerator_MoveNext_mB6178B876BA8A284965E31BEE9A1D81C6B22E419_RuntimeMethod_var);
			if (L_7)
			{
				goto IL_000e;
			}
		}

IL_0033:
		{
			IL2CPP_LEAVE(0x43, FINALLY_0035);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0035;
	}

FINALLY_0035:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m2CA1D495CF53152D382FE86C5F0A73F644F3E6B7((Enumerator_t42BF4791E9024F9ADF2FF759B419F7DD450B89AA *)(&V_0), /*hidden argument*/Enumerator_Dispose_m2CA1D495CF53152D382FE86C5F0A73F644F3E6B7_RuntimeMethod_var);
		IL2CPP_END_FINALLY(53)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(53)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x43, IL_0043)
	}

IL_0043:
	{
		// }
		return;
	}
}
// System.Void Dimension::showChildrenWithTag(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dimension_showChildrenWithTag_mE6650FA8CB39315D9A1F40AEB3713530FC864C95 (Dimension_t28D074E7D31C414382BEB891CF77CF6345E04C34 * __this, String_t* ___tag0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponentsInChildren_TisTransform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1_m1D81E170D9B0CD0720A6BCDD722BC8A0B4AA8F0E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9D5313975DA8153FF9A5262016CB413A4E84846E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D* V_1 = NULL;
	int32_t V_2 = 0;
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * V_3 = NULL;
	{
		// if (tag == "" || tag == null)
		String_t* L_0 = ___tag0;
		bool L_1;
		L_1 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_0, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_0010;
		}
	}
	{
		String_t* L_2 = ___tag0;
		if (L_2)
		{
			goto IL_0011;
		}
	}

IL_0010:
	{
		// return;
		return;
	}

IL_0011:
	{
		// int defaultLayer = LayerMask.NameToLayer("Default");
		int32_t L_3;
		L_3 = LayerMask_NameToLayer_m6A2BBB60EC90F7EC48A6A91CA98149C547A04C0A(_stringLiteral9D5313975DA8153FF9A5262016CB413A4E84846E, /*hidden argument*/NULL);
		V_0 = L_3;
		// Transform[] childrenTransforms = gameObject.GetComponentsInChildren<Transform>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_4;
		L_4 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		NullCheck(L_4);
		TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D* L_5;
		L_5 = GameObject_GetComponentsInChildren_TisTransform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1_m1D81E170D9B0CD0720A6BCDD722BC8A0B4AA8F0E(L_4, /*hidden argument*/GameObject_GetComponentsInChildren_TisTransform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1_m1D81E170D9B0CD0720A6BCDD722BC8A0B4AA8F0E_RuntimeMethod_var);
		// foreach (Transform t in childrenTransforms)
		V_1 = L_5;
		V_2 = 0;
		goto IL_0049;
	}

IL_002c:
	{
		// foreach (Transform t in childrenTransforms)
		TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D* L_6 = V_1;
		int32_t L_7 = V_2;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		V_3 = L_9;
		// if (t.CompareTag(tag))
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_10 = V_3;
		String_t* L_11 = ___tag0;
		NullCheck(L_10);
		bool L_12;
		L_12 = Component_CompareTag_m17D74EDCC81A10B18A0A588519F522E8DF1D7879(L_10, L_11, /*hidden argument*/NULL);
		if (!L_12)
		{
			goto IL_0045;
		}
	}
	{
		// t.gameObject.layer = defaultLayer;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_13 = V_3;
		NullCheck(L_13);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_14;
		L_14 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_13, /*hidden argument*/NULL);
		int32_t L_15 = V_0;
		NullCheck(L_14);
		GameObject_set_layer_m2F946916ACB41A59C46346F5243F2BAC235A36A6(L_14, L_15, /*hidden argument*/NULL);
	}

IL_0045:
	{
		int32_t L_16 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_16, (int32_t)1));
	}

IL_0049:
	{
		// foreach (Transform t in childrenTransforms)
		int32_t L_17 = V_2;
		TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D* L_18 = V_1;
		NullCheck(L_18);
		if ((((int32_t)L_17) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_18)->max_length))))))
		{
			goto IL_002c;
		}
	}
	{
		// }
		return;
	}
}
// System.Void Dimension::PreRender()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dimension_PreRender_m60DBD0F998687A2746D1E5D85DB775C0AF028641 (Dimension_t28D074E7D31C414382BEB891CF77CF6345E04C34 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_m2721B332C7315B8590D01121005560C8A4824279_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Clear_mEF66FB646BF483BD2943F78417C299E1C50730D7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_mE4D6F6FA5A737865159110CFFF4034001E7F75C1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisLight_tA2F349FE839781469A0344CF6039B51512394275_m0EB52103D195BED7315C22DC3394855236FCEBDC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponentsInChildren_TisTransform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1_m1D81E170D9B0CD0720A6BCDD722BC8A0B4AA8F0E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9D5313975DA8153FF9A5262016CB413A4E84846E);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D* V_1 = NULL;
	int32_t V_2 = 0;
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * V_3 = NULL;
	{
		// if (!forceKeepInitialLayers)
		bool L_0 = __this->get_forceKeepInitialLayers_7();
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		// return;
		return;
	}

IL_0009:
	{
		// if (layerSwitchedChildren == null) {
		Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 * L_1 = __this->get_layerSwitchedChildren_10();
		if (L_1)
		{
			goto IL_001c;
		}
	}
	{
		// layerSwitchedChildren = new Dictionary<int, int> ();
		Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 * L_2 = (Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 *)il2cpp_codegen_object_new(Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_mE4D6F6FA5A737865159110CFFF4034001E7F75C1(L_2, /*hidden argument*/Dictionary_2__ctor_mE4D6F6FA5A737865159110CFFF4034001E7F75C1_RuntimeMethod_var);
		__this->set_layerSwitchedChildren_10(L_2);
	}

IL_001c:
	{
		// layerSwitchedChildren.Clear ();
		Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 * L_3 = __this->get_layerSwitchedChildren_10();
		NullCheck(L_3);
		Dictionary_2_Clear_mEF66FB646BF483BD2943F78417C299E1C50730D7(L_3, /*hidden argument*/Dictionary_2_Clear_mEF66FB646BF483BD2943F78417C299E1C50730D7_RuntimeMethod_var);
		// int defaultLayer = LayerMask.NameToLayer("Default");
		int32_t L_4;
		L_4 = LayerMask_NameToLayer_m6A2BBB60EC90F7EC48A6A91CA98149C547A04C0A(_stringLiteral9D5313975DA8153FF9A5262016CB413A4E84846E, /*hidden argument*/NULL);
		V_0 = L_4;
		// Transform[] childrenTransforms = gameObject.GetComponentsInChildren<Transform> ();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_5;
		L_5 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		NullCheck(L_5);
		TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D* L_6;
		L_6 = GameObject_GetComponentsInChildren_TisTransform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1_m1D81E170D9B0CD0720A6BCDD722BC8A0B4AA8F0E(L_5, /*hidden argument*/GameObject_GetComponentsInChildren_TisTransform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1_m1D81E170D9B0CD0720A6BCDD722BC8A0B4AA8F0E_RuntimeMethod_var);
		// foreach (Transform t in childrenTransforms) {
		V_1 = L_6;
		V_2 = 0;
		goto IL_00b7;
	}

IL_0042:
	{
		// foreach (Transform t in childrenTransforms) {
		TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D* L_7 = V_1;
		int32_t L_8 = V_2;
		NullCheck(L_7);
		int32_t L_9 = L_8;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_10 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		V_3 = L_10;
		// layerSwitchedChildren.Add (t.gameObject.GetInstanceID (), t.gameObject.layer);
		Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 * L_11 = __this->get_layerSwitchedChildren_10();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_12 = V_3;
		NullCheck(L_12);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_13;
		L_13 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_12, /*hidden argument*/NULL);
		NullCheck(L_13);
		int32_t L_14;
		L_14 = Object_GetInstanceID_m7CF962BC1DB5C03F3522F88728CB2F514582B501(L_13, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_15 = V_3;
		NullCheck(L_15);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_16;
		L_16 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_15, /*hidden argument*/NULL);
		NullCheck(L_16);
		int32_t L_17;
		L_17 = GameObject_get_layer_m9D4C23A2FD105AF9964445BF18A77E8A49012F9F(L_16, /*hidden argument*/NULL);
		NullCheck(L_11);
		Dictionary_2_Add_m2721B332C7315B8590D01121005560C8A4824279(L_11, L_14, L_17, /*hidden argument*/Dictionary_2_Add_m2721B332C7315B8590D01121005560C8A4824279_RuntimeMethod_var);
		// t.gameObject.layer = layer;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_18 = V_3;
		NullCheck(L_18);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_19;
		L_19 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_18, /*hidden argument*/NULL);
		int32_t L_20 = __this->get_layer_5();
		NullCheck(L_19);
		GameObject_set_layer_m2F946916ACB41A59C46346F5243F2BAC235A36A6(L_19, L_20, /*hidden argument*/NULL);
		// if (t.gameObject.GetComponent<Light> ()) {
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_21 = V_3;
		NullCheck(L_21);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_22;
		L_22 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_21, /*hidden argument*/NULL);
		NullCheck(L_22);
		Light_tA2F349FE839781469A0344CF6039B51512394275 * L_23;
		L_23 = GameObject_GetComponent_TisLight_tA2F349FE839781469A0344CF6039B51512394275_m0EB52103D195BED7315C22DC3394855236FCEBDC(L_22, /*hidden argument*/GameObject_GetComponent_TisLight_tA2F349FE839781469A0344CF6039B51512394275_m0EB52103D195BED7315C22DC3394855236FCEBDC_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_24;
		L_24 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499(L_23, /*hidden argument*/NULL);
		if (!L_24)
		{
			goto IL_00b3;
		}
	}
	{
		// Light light = t.gameObject.GetComponent<Light> ();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_25 = V_3;
		NullCheck(L_25);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_26;
		L_26 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_25, /*hidden argument*/NULL);
		NullCheck(L_26);
		Light_tA2F349FE839781469A0344CF6039B51512394275 * L_27;
		L_27 = GameObject_GetComponent_TisLight_tA2F349FE839781469A0344CF6039B51512394275_m0EB52103D195BED7315C22DC3394855236FCEBDC(L_26, /*hidden argument*/GameObject_GetComponent_TisLight_tA2F349FE839781469A0344CF6039B51512394275_m0EB52103D195BED7315C22DC3394855236FCEBDC_RuntimeMethod_var);
		// light.cullingMask = defaultLayer;
		Light_tA2F349FE839781469A0344CF6039B51512394275 * L_28 = L_27;
		int32_t L_29 = V_0;
		NullCheck(L_28);
		Light_set_cullingMask_m4C8DE4FCAA45EBDC4F5A29639D87A4B8BA5AF717(L_28, L_29, /*hidden argument*/NULL);
		// light.cullingMask |= 1 << layer;
		Light_tA2F349FE839781469A0344CF6039B51512394275 * L_30 = L_28;
		NullCheck(L_30);
		int32_t L_31;
		L_31 = Light_get_cullingMask_mE74EEA0F3B6C92793ADA4B6B860B9B85B6668A11(L_30, /*hidden argument*/NULL);
		int32_t L_32 = __this->get_layer_5();
		NullCheck(L_30);
		Light_set_cullingMask_m4C8DE4FCAA45EBDC4F5A29639D87A4B8BA5AF717(L_30, ((int32_t)((int32_t)L_31|(int32_t)((int32_t)((int32_t)1<<(int32_t)((int32_t)((int32_t)L_32&(int32_t)((int32_t)31))))))), /*hidden argument*/NULL);
	}

IL_00b3:
	{
		int32_t L_33 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_33, (int32_t)1));
	}

IL_00b7:
	{
		// foreach (Transform t in childrenTransforms) {
		int32_t L_34 = V_2;
		TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D* L_35 = V_1;
		NullCheck(L_35);
		if ((((int32_t)L_34) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_35)->max_length))))))
		{
			goto IL_0042;
		}
	}
	{
		// }
		return;
	}
}
// System.Void Dimension::PostRender()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dimension_PostRender_mCC43245957A1215A2492A41C3E3A81454968BC22 (Dimension_t28D074E7D31C414382BEB891CF77CF6345E04C34 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_mFFEEBA09EA430B994459C2D86ADEE218592742A1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponentsInChildren_TisTransform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1_m1D81E170D9B0CD0720A6BCDD722BC8A0B4AA8F0E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D* V_0 = NULL;
	int32_t V_1 = 0;
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * V_2 = NULL;
	int32_t V_3 = 0;
	{
		// if (!forceKeepInitialLayers)
		bool L_0 = __this->get_forceKeepInitialLayers_7();
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		// return;
		return;
	}

IL_0009:
	{
		// Transform[] childrenTransforms = gameObject.GetComponentsInChildren<Transform> ();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1;
		L_1 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D* L_2;
		L_2 = GameObject_GetComponentsInChildren_TisTransform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1_m1D81E170D9B0CD0720A6BCDD722BC8A0B4AA8F0E(L_1, /*hidden argument*/GameObject_GetComponentsInChildren_TisTransform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1_m1D81E170D9B0CD0720A6BCDD722BC8A0B4AA8F0E_RuntimeMethod_var);
		// foreach (Transform t in childrenTransforms) {
		V_0 = L_2;
		V_1 = 0;
		goto IL_0044;
	}

IL_0019:
	{
		// foreach (Transform t in childrenTransforms) {
		TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D* L_3 = V_0;
		int32_t L_4 = V_1;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		V_2 = L_6;
		// int layer = layerSwitchedChildren [t.gameObject.GetInstanceID ()];
		Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 * L_7 = __this->get_layerSwitchedChildren_10();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_8 = V_2;
		NullCheck(L_8);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_9;
		L_9 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_8, /*hidden argument*/NULL);
		NullCheck(L_9);
		int32_t L_10;
		L_10 = Object_GetInstanceID_m7CF962BC1DB5C03F3522F88728CB2F514582B501(L_9, /*hidden argument*/NULL);
		NullCheck(L_7);
		int32_t L_11;
		L_11 = Dictionary_2_get_Item_mFFEEBA09EA430B994459C2D86ADEE218592742A1(L_7, L_10, /*hidden argument*/Dictionary_2_get_Item_mFFEEBA09EA430B994459C2D86ADEE218592742A1_RuntimeMethod_var);
		V_3 = L_11;
		// t.gameObject.layer = layer;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_12 = V_2;
		NullCheck(L_12);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_13;
		L_13 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_12, /*hidden argument*/NULL);
		int32_t L_14 = V_3;
		NullCheck(L_13);
		GameObject_set_layer_m2F946916ACB41A59C46346F5243F2BAC235A36A6(L_13, L_14, /*hidden argument*/NULL);
		int32_t L_15 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_15, (int32_t)1));
	}

IL_0044:
	{
		// foreach (Transform t in childrenTransforms) {
		int32_t L_16 = V_1;
		TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D* L_17 = V_0;
		NullCheck(L_17);
		if ((((int32_t)L_16) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_17)->max_length))))))
		{
			goto IL_0019;
		}
	}
	{
		// }
		return;
	}
}
// System.Void Dimension::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dimension__ctor_m7B0601DDFC9F1EC060D68C567C9915DF399E745A (Dimension_t28D074E7D31C414382BEB891CF77CF6345E04C34 * __this, const RuntimeMethod* method)
{
	{
		// private bool mainCameraNeedsSetup = true;
		__this->set_mainCameraNeedsSetup_11((bool)1);
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void DimensionChanger::SwitchDimensions(UnityEngine.GameObject,Dimension,Dimension)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DimensionChanger_SwitchDimensions_m3AC33B71D55EFC5A6BA9D66B09B3A870061F1385 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___obj0, Dimension_t28D074E7D31C414382BEB891CF77CF6345E04C34 * ___fromDimension1, Dimension_t28D074E7D31C414382BEB891CF77CF6345E04C34 * ___toDimension2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisCharacterController_tCCF68621C784CCB3391E0C66FE134F6F93DD6C2E_m3DB1DD5819F96D7C7F6F19C12138AC48D21DBBF2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponentsInChildren_TisMeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B_m37C5016444DB54041F938EA344271762E17600C3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * V_0 = NULL;
	MeshRendererU5BU5D_t535468079DEF88AD38546DC5D04E9102C401D228* V_1 = NULL;
	int32_t V_2 = 0;
	{
		// obj.layer = toDimension.layer;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = ___obj0;
		Dimension_t28D074E7D31C414382BEB891CF77CF6345E04C34 * L_1 = ___toDimension2;
		NullCheck(L_1);
		int32_t L_2 = L_1->get_layer_5();
		NullCheck(L_0);
		GameObject_set_layer_m2F946916ACB41A59C46346F5243F2BAC235A36A6(L_0, L_2, /*hidden argument*/NULL);
		// foreach(MeshRenderer childRenderer in obj.GetComponentsInChildren<MeshRenderer>()) {
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_3 = ___obj0;
		NullCheck(L_3);
		MeshRendererU5BU5D_t535468079DEF88AD38546DC5D04E9102C401D228* L_4;
		L_4 = GameObject_GetComponentsInChildren_TisMeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B_m37C5016444DB54041F938EA344271762E17600C3(L_3, /*hidden argument*/GameObject_GetComponentsInChildren_TisMeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B_m37C5016444DB54041F938EA344271762E17600C3_RuntimeMethod_var);
		V_1 = L_4;
		V_2 = 0;
		goto IL_002e;
	}

IL_0017:
	{
		// foreach(MeshRenderer childRenderer in obj.GetComponentsInChildren<MeshRenderer>()) {
		MeshRendererU5BU5D_t535468079DEF88AD38546DC5D04E9102C401D228* L_5 = V_1;
		int32_t L_6 = V_2;
		NullCheck(L_5);
		int32_t L_7 = L_6;
		MeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B * L_8 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		// childRenderer.gameObject.layer = toDimension.layer;
		NullCheck(L_8);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_9;
		L_9 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_8, /*hidden argument*/NULL);
		Dimension_t28D074E7D31C414382BEB891CF77CF6345E04C34 * L_10 = ___toDimension2;
		NullCheck(L_10);
		int32_t L_11 = L_10->get_layer_5();
		NullCheck(L_9);
		GameObject_set_layer_m2F946916ACB41A59C46346F5243F2BAC235A36A6(L_9, L_11, /*hidden argument*/NULL);
		int32_t L_12 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_12, (int32_t)1));
	}

IL_002e:
	{
		// foreach(MeshRenderer childRenderer in obj.GetComponentsInChildren<MeshRenderer>()) {
		int32_t L_13 = V_2;
		MeshRendererU5BU5D_t535468079DEF88AD38546DC5D04E9102C401D228* L_14 = V_1;
		NullCheck(L_14);
		if ((((int32_t)L_13) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_14)->max_length))))))
		{
			goto IL_0017;
		}
	}
	{
		// Transform parent = obj.transform.parent;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_15 = ___obj0;
		NullCheck(L_15);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_16;
		L_16 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_15, /*hidden argument*/NULL);
		NullCheck(L_16);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_17;
		L_17 = Transform_get_parent_m7D06005D9CB55F90F39D42F6A2AF9C7BC80745C9(L_16, /*hidden argument*/NULL);
		V_0 = L_17;
		// if(parent != null && parent.GetComponent<CharacterController>()) {
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_18 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_19;
		L_19 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_18, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_19)
		{
			goto IL_0067;
		}
	}
	{
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_20 = V_0;
		NullCheck(L_20);
		CharacterController_tCCF68621C784CCB3391E0C66FE134F6F93DD6C2E * L_21;
		L_21 = Component_GetComponent_TisCharacterController_tCCF68621C784CCB3391E0C66FE134F6F93DD6C2E_m3DB1DD5819F96D7C7F6F19C12138AC48D21DBBF2(L_20, /*hidden argument*/Component_GetComponent_TisCharacterController_tCCF68621C784CCB3391E0C66FE134F6F93DD6C2E_m3DB1DD5819F96D7C7F6F19C12138AC48D21DBBF2_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_22;
		L_22 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499(L_21, /*hidden argument*/NULL);
		if (!L_22)
		{
			goto IL_0067;
		}
	}
	{
		// parent.gameObject.layer = toDimension.layer;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_23 = V_0;
		NullCheck(L_23);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_24;
		L_24 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_23, /*hidden argument*/NULL);
		Dimension_t28D074E7D31C414382BEB891CF77CF6345E04C34 * L_25 = ___toDimension2;
		NullCheck(L_25);
		int32_t L_26 = L_25->get_layer_5();
		NullCheck(L_24);
		GameObject_set_layer_m2F946916ACB41A59C46346F5243F2BAC235A36A6(L_24, L_26, /*hidden argument*/NULL);
	}

IL_0067:
	{
		// }
		return;
	}
}
// System.Void DimensionChanger::SwitchCameraRender(UnityEngine.Camera,System.Int32,System.Int32,UnityEngine.Material)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DimensionChanger_SwitchCameraRender_mB38314B55E216C56BF10AAE2B036FB0A9A099139 (Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * ___camera0, int32_t ___fromDimensionLayer1, int32_t ___toDimensionLayer2, Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___dimensionSkybox3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisSkybox_t8B0EA7C092363DBCCF0B51434F04E7EE661E28E0_m11DD63313E45B5E0C62FFCF04F0962CCF57D9FA2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// CameraExtensions.LayerCullingShow (camera, toDimensionLayer);
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_0 = ___camera0;
		int32_t L_1 = ___toDimensionLayer2;
		CameraExtensions_LayerCullingShow_m7BD7EE4365D62985B64F84ADC12078390A2F68B2(L_0, L_1, /*hidden argument*/NULL);
		// CameraExtensions.LayerCullingHide (camera, fromDimensionLayer);
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_2 = ___camera0;
		int32_t L_3 = ___fromDimensionLayer1;
		CameraExtensions_LayerCullingHide_mA075BA4596F58AB98EB1B0587DE1C769E8589DE2(L_2, L_3, /*hidden argument*/NULL);
		// if (dimensionSkybox) {
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_4 = ___dimensionSkybox3;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499(L_4, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_002f;
		}
	}
	{
		// if (camera.GetComponent<Skybox> ()) {
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_6 = ___camera0;
		NullCheck(L_6);
		Skybox_t8B0EA7C092363DBCCF0B51434F04E7EE661E28E0 * L_7;
		L_7 = Component_GetComponent_TisSkybox_t8B0EA7C092363DBCCF0B51434F04E7EE661E28E0_m11DD63313E45B5E0C62FFCF04F0962CCF57D9FA2(L_6, /*hidden argument*/Component_GetComponent_TisSkybox_t8B0EA7C092363DBCCF0B51434F04E7EE661E28E0_m11DD63313E45B5E0C62FFCF04F0962CCF57D9FA2_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_8;
		L_8 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499(L_7, /*hidden argument*/NULL);
		if (!L_8)
		{
			goto IL_002f;
		}
	}
	{
		// camera.GetComponent<Skybox> ().material = dimensionSkybox;
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_9 = ___camera0;
		NullCheck(L_9);
		Skybox_t8B0EA7C092363DBCCF0B51434F04E7EE661E28E0 * L_10;
		L_10 = Component_GetComponent_TisSkybox_t8B0EA7C092363DBCCF0B51434F04E7EE661E28E0_m11DD63313E45B5E0C62FFCF04F0962CCF57D9FA2(L_9, /*hidden argument*/Component_GetComponent_TisSkybox_t8B0EA7C092363DBCCF0B51434F04E7EE661E28E0_m11DD63313E45B5E0C62FFCF04F0962CCF57D9FA2_RuntimeMethod_var);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_11 = ___dimensionSkybox3;
		NullCheck(L_10);
		Skybox_set_material_m74316F6709A669D3181C4CB1EA1F40E745D0F88A(L_10, L_11, /*hidden argument*/NULL);
	}

IL_002f:
	{
		// }
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void GearCameraRenderInfo::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GearCameraRenderInfo__ctor_m90448B04F7E4F7A0F8236A51DC32729F46465087 (GearCameraRenderInfo_tD3E67E22C8199B14D79B3CE6F896CECF7E8C39CC * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// LayerManager LayerManager::Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LayerManager_t3527BEB62E0C7C2C45055FE662E50E75642F7942 * LayerManager_Instance_m22B6988456614FBB6BD5D0232CF949B36C7F757C (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LayerManager_t3527BEB62E0C7C2C45055FE662E50E75642F7942_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m30C52A4F2828D86CA3FAB0B1B583948F4DA9F1F9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (instance == null) {
		IL2CPP_RUNTIME_CLASS_INIT(LayerManager_t3527BEB62E0C7C2C45055FE662E50E75642F7942_il2cpp_TypeInfo_var);
		LayerManager_t3527BEB62E0C7C2C45055FE662E50E75642F7942 * L_0 = ((LayerManager_t3527BEB62E0C7C2C45055FE662E50E75642F7942_StaticFields*)il2cpp_codegen_static_fields_for(LayerManager_t3527BEB62E0C7C2C45055FE662E50E75642F7942_il2cpp_TypeInfo_var))->get_instance_0();
		if (L_0)
		{
			goto IL_0020;
		}
	}
	{
		// instance = new LayerManager ();
		LayerManager_t3527BEB62E0C7C2C45055FE662E50E75642F7942 * L_1 = (LayerManager_t3527BEB62E0C7C2C45055FE662E50E75642F7942 *)il2cpp_codegen_object_new(LayerManager_t3527BEB62E0C7C2C45055FE662E50E75642F7942_il2cpp_TypeInfo_var);
		LayerManager__ctor_mA35555895E60EF39B2508ED3EAD343075E14D5CB(L_1, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(LayerManager_t3527BEB62E0C7C2C45055FE662E50E75642F7942_il2cpp_TypeInfo_var);
		((LayerManager_t3527BEB62E0C7C2C45055FE662E50E75642F7942_StaticFields*)il2cpp_codegen_static_fields_for(LayerManager_t3527BEB62E0C7C2C45055FE662E50E75642F7942_il2cpp_TypeInfo_var))->set_instance_0(L_1);
		// instance.definedLayers = new List<string> ();
		LayerManager_t3527BEB62E0C7C2C45055FE662E50E75642F7942 * L_2 = ((LayerManager_t3527BEB62E0C7C2C45055FE662E50E75642F7942_StaticFields*)il2cpp_codegen_static_fields_for(LayerManager_t3527BEB62E0C7C2C45055FE662E50E75642F7942_il2cpp_TypeInfo_var))->get_instance_0();
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_3 = (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 *)il2cpp_codegen_object_new(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3_il2cpp_TypeInfo_var);
		List_1__ctor_m30C52A4F2828D86CA3FAB0B1B583948F4DA9F1F9(L_3, /*hidden argument*/List_1__ctor_m30C52A4F2828D86CA3FAB0B1B583948F4DA9F1F9_RuntimeMethod_var);
		NullCheck(L_2);
		L_2->set_definedLayers_1(L_3);
	}

IL_0020:
	{
		// return instance;
		IL2CPP_RUNTIME_CLASS_INIT(LayerManager_t3527BEB62E0C7C2C45055FE662E50E75642F7942_il2cpp_TypeInfo_var);
		LayerManager_t3527BEB62E0C7C2C45055FE662E50E75642F7942 * L_4 = ((LayerManager_t3527BEB62E0C7C2C45055FE662E50E75642F7942_StaticFields*)il2cpp_codegen_static_fields_for(LayerManager_t3527BEB62E0C7C2C45055FE662E50E75642F7942_il2cpp_TypeInfo_var))->get_instance_0();
		return L_4;
	}
}
// System.Int32 LayerManager::CreateLayer(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LayerManager_CreateLayer_m7DFE6331E95A38042DA768683F4979C47DBAAC25 (LayerManager_t3527BEB62E0C7C2C45055FE662E50E75642F7942 * __this, String_t* ___name0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LayerManager_t3527BEB62E0C7C2C45055FE662E50E75642F7942_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m199DB87BCE947106FBA38E19FDFE80CB65B61144_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		// definedLayers.Add (name);
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_0 = __this->get_definedLayers_1();
		String_t* L_1 = ___name0;
		NullCheck(L_0);
		List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE(L_0, L_1, /*hidden argument*/List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE_RuntimeMethod_var);
		// for (int i = 0; i < definedLayers.Count; i++) {
		V_0 = 0;
		goto IL_0045;
	}

IL_0010:
	{
		// for (int j = 0; j < definedLayers.Count; j++) {
		V_1 = 0;
		goto IL_0033;
	}

IL_0014:
	{
		// if (i == j) continue;
		int32_t L_2 = V_0;
		int32_t L_3 = V_1;
		if ((((int32_t)L_2) == ((int32_t)L_3)))
		{
			goto IL_002f;
		}
	}
	{
		// Physics.IgnoreLayerCollision (totalLayerNum - i - 1, totalLayerNum - j - 1);
		IL2CPP_RUNTIME_CLASS_INIT(LayerManager_t3527BEB62E0C7C2C45055FE662E50E75642F7942_il2cpp_TypeInfo_var);
		int32_t L_4 = ((LayerManager_t3527BEB62E0C7C2C45055FE662E50E75642F7942_StaticFields*)il2cpp_codegen_static_fields_for(LayerManager_t3527BEB62E0C7C2C45055FE662E50E75642F7942_il2cpp_TypeInfo_var))->get_totalLayerNum_3();
		int32_t L_5 = V_0;
		int32_t L_6 = ((LayerManager_t3527BEB62E0C7C2C45055FE662E50E75642F7942_StaticFields*)il2cpp_codegen_static_fields_for(LayerManager_t3527BEB62E0C7C2C45055FE662E50E75642F7942_il2cpp_TypeInfo_var))->get_totalLayerNum_3();
		int32_t L_7 = V_1;
		Physics_IgnoreLayerCollision_m9ED27D07C47AF3CBA70D3A5E5DF948E1035667B8(((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_4, (int32_t)L_5)), (int32_t)1)), ((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_6, (int32_t)L_7)), (int32_t)1)), /*hidden argument*/NULL);
	}

IL_002f:
	{
		// for (int j = 0; j < definedLayers.Count; j++) {
		int32_t L_8 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_8, (int32_t)1));
	}

IL_0033:
	{
		// for (int j = 0; j < definedLayers.Count; j++) {
		int32_t L_9 = V_1;
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_10 = __this->get_definedLayers_1();
		NullCheck(L_10);
		int32_t L_11;
		L_11 = List_1_get_Count_m199DB87BCE947106FBA38E19FDFE80CB65B61144_inline(L_10, /*hidden argument*/List_1_get_Count_m199DB87BCE947106FBA38E19FDFE80CB65B61144_RuntimeMethod_var);
		if ((((int32_t)L_9) < ((int32_t)L_11)))
		{
			goto IL_0014;
		}
	}
	{
		// for (int i = 0; i < definedLayers.Count; i++) {
		int32_t L_12 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_12, (int32_t)1));
	}

IL_0045:
	{
		// for (int i = 0; i < definedLayers.Count; i++) {
		int32_t L_13 = V_0;
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_14 = __this->get_definedLayers_1();
		NullCheck(L_14);
		int32_t L_15;
		L_15 = List_1_get_Count_m199DB87BCE947106FBA38E19FDFE80CB65B61144_inline(L_14, /*hidden argument*/List_1_get_Count_m199DB87BCE947106FBA38E19FDFE80CB65B61144_RuntimeMethod_var);
		if ((((int32_t)L_13) < ((int32_t)L_15)))
		{
			goto IL_0010;
		}
	}
	{
		// return totalLayerNum - definedLayers.Count;
		IL2CPP_RUNTIME_CLASS_INIT(LayerManager_t3527BEB62E0C7C2C45055FE662E50E75642F7942_il2cpp_TypeInfo_var);
		int32_t L_16 = ((LayerManager_t3527BEB62E0C7C2C45055FE662E50E75642F7942_StaticFields*)il2cpp_codegen_static_fields_for(LayerManager_t3527BEB62E0C7C2C45055FE662E50E75642F7942_il2cpp_TypeInfo_var))->get_totalLayerNum_3();
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_17 = __this->get_definedLayers_1();
		NullCheck(L_17);
		int32_t L_18;
		L_18 = List_1_get_Count_m199DB87BCE947106FBA38E19FDFE80CB65B61144_inline(L_17, /*hidden argument*/List_1_get_Count_m199DB87BCE947106FBA38E19FDFE80CB65B61144_RuntimeMethod_var);
		return ((int32_t)il2cpp_codegen_subtract((int32_t)L_16, (int32_t)L_18));
	}
}
// System.Void LayerManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LayerManager__ctor_mA35555895E60EF39B2508ED3EAD343075E14D5CB (LayerManager_t3527BEB62E0C7C2C45055FE662E50E75642F7942 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void LayerManager::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LayerManager__cctor_m82CE343FDFCCCAF0D62825EA760110402D14EB23 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LayerManager_t3527BEB62E0C7C2C45055FE662E50E75642F7942_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m4A851968BE5369F4D77375CA40EE5839A548A9CA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t8541C8BADA1A4B90DE74D36D29037CF0E814B9AA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static LayerManager instance = null;
		((LayerManager_t3527BEB62E0C7C2C45055FE662E50E75642F7942_StaticFields*)il2cpp_codegen_static_fields_for(LayerManager_t3527BEB62E0C7C2C45055FE662E50E75642F7942_il2cpp_TypeInfo_var))->set_instance_0((LayerManager_t3527BEB62E0C7C2C45055FE662E50E75642F7942 *)NULL);
		// public static List<Dimension> definedDimensions = new List<Dimension> ();
		List_1_t8541C8BADA1A4B90DE74D36D29037CF0E814B9AA * L_0 = (List_1_t8541C8BADA1A4B90DE74D36D29037CF0E814B9AA *)il2cpp_codegen_object_new(List_1_t8541C8BADA1A4B90DE74D36D29037CF0E814B9AA_il2cpp_TypeInfo_var);
		List_1__ctor_m4A851968BE5369F4D77375CA40EE5839A548A9CA(L_0, /*hidden argument*/List_1__ctor_m4A851968BE5369F4D77375CA40EE5839A548A9CA_RuntimeMethod_var);
		((LayerManager_t3527BEB62E0C7C2C45055FE662E50E75642F7942_StaticFields*)il2cpp_codegen_static_fields_for(LayerManager_t3527BEB62E0C7C2C45055FE662E50E75642F7942_il2cpp_TypeInfo_var))->set_definedDimensions_2(L_0);
		// private static int totalLayerNum = 31;
		((LayerManager_t3527BEB62E0C7C2C45055FE662E50E75642F7942_StaticFields*)il2cpp_codegen_static_fields_for(LayerManager_t3527BEB62E0C7C2C45055FE662E50E75642F7942_il2cpp_TypeInfo_var))->set_totalLayerNum_3(((int32_t)31));
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
// System.Void MainCameraController::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainCameraController_Start_m3E3A5999B41AF1DE17EA40BEC577C4B6C264E56A (MainCameraController_t90D850F2A0257D38B41668E324DEF1DDB2F89BFC * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral62276E9B0963A652AE7404059058F8C8E455B262);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBDBB8D317096A0BA6BA9463FC2533707873DF8FD);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// spheres = GameObject.FindGameObjectsWithTag("Sphere");
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_0;
		L_0 = GameObject_FindGameObjectsWithTag_m0948320611DC82590D59A36D1C57155B1B6CE186(_stringLiteralBDBB8D317096A0BA6BA9463FC2533707873DF8FD, /*hidden argument*/NULL);
		__this->set_spheres_11(L_0);
		// for (int i = 0; i < spheres.Length; i++)
		V_0 = 0;
		goto IL_0026;
	}

IL_0014:
	{
		// spheres[i].SetActive(false);
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_1 = __this->get_spheres_11();
		int32_t L_2 = V_0;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		NullCheck(L_4);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_4, (bool)0, /*hidden argument*/NULL);
		// for (int i = 0; i < spheres.Length; i++)
		int32_t L_5 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_5, (int32_t)1));
	}

IL_0026:
	{
		// for (int i = 0; i < spheres.Length; i++)
		int32_t L_6 = V_0;
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_7 = __this->get_spheres_11();
		NullCheck(L_7);
		if ((((int32_t)L_6) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_7)->max_length))))))
		{
			goto IL_0014;
		}
	}
	{
		// quads = GameObject.FindGameObjectsWithTag("Quad");
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_8;
		L_8 = GameObject_FindGameObjectsWithTag_m0948320611DC82590D59A36D1C57155B1B6CE186(_stringLiteral62276E9B0963A652AE7404059058F8C8E455B262, /*hidden argument*/NULL);
		__this->set_quads_12(L_8);
		// }
		return;
	}
}
// System.Void MainCameraController::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainCameraController_Update_m59043519103A10C7956BE9A7D9F0E804A6B9AFA5 (MainCameraController_t90D850F2A0257D38B41668E324DEF1DDB2F89BFC * __this, const RuntimeMethod* method)
{
	{
		// UpdateMoving();
		MainCameraController_UpdateMoving_mA9700A03A415926751D5BFD1EB3EE5B620242953(__this, /*hidden argument*/NULL);
		// updateRotationByMouse();
		MainCameraController_updateRotationByMouse_mFB289B014C7F0700D4016B1414386EBFFED7F3D7(__this, /*hidden argument*/NULL);
		// UpdateCricle2DView();
		MainCameraController_UpdateCricle2DView_m0DD41E64192A34DA3E0152C184519671BC03CC8A(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void MainCameraController::OnTriggerEnter(UnityEngine.Collider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainCameraController_OnTriggerEnter_m137319FDEAACAAE0CF0C4BF29E51520D91C7CE02 (MainCameraController_t90D850F2A0257D38B41668E324DEF1DDB2F89BFC * __this, Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * ___other0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral15A8A27C7D54D58FA24ADFF0E3E52BF4748B1E9D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral52504B59BD1504CB2F04425E6599DDEF27A29271);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral62276E9B0963A652AE7404059058F8C8E455B262);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// for (int i = 0; i < spheres.Length; i++)
		V_0 = 0;
		goto IL_0025;
	}

IL_0004:
	{
		// if (spheres[i].active==true)
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_0 = __this->get_spheres_11();
		int32_t L_1 = V_0;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		NullCheck(L_3);
		bool L_4;
		L_4 = GameObject_get_active_mAE45BB4A1D06BE2AF8C460593FC0346A5EF8014D(L_3, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_0021;
		}
	}
	{
		// spheres[i].SetActive(false);
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_5 = __this->get_spheres_11();
		int32_t L_6 = V_0;
		NullCheck(L_5);
		int32_t L_7 = L_6;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_8 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		NullCheck(L_8);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_8, (bool)0, /*hidden argument*/NULL);
	}

IL_0021:
	{
		// for (int i = 0; i < spheres.Length; i++)
		int32_t L_9 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_9, (int32_t)1));
	}

IL_0025:
	{
		// for (int i = 0; i < spheres.Length; i++)
		int32_t L_10 = V_0;
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_11 = __this->get_spheres_11();
		NullCheck(L_11);
		if ((((int32_t)L_10) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_11)->max_length))))))
		{
			goto IL_0004;
		}
	}
	{
		// Debug.Log($"OnTriggerEnter {other.name}");
		Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * L_12 = ___other0;
		NullCheck(L_12);
		String_t* L_13;
		L_13 = Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB(L_12, /*hidden argument*/NULL);
		String_t* L_14;
		L_14 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteral52504B59BD1504CB2F04425E6599DDEF27A29271, L_13, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_14, /*hidden argument*/NULL);
		// if(other.tag=="Quad"&& other.gameObject.transform.childCount>0)
		Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * L_15 = ___other0;
		NullCheck(L_15);
		String_t* L_16;
		L_16 = Component_get_tag_m77B4A7356E58F985216CC53966F7A9699454803E(L_15, /*hidden argument*/NULL);
		bool L_17;
		L_17 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_16, _stringLiteral62276E9B0963A652AE7404059058F8C8E455B262, /*hidden argument*/NULL);
		if (!L_17)
		{
			goto IL_00c0;
		}
	}
	{
		Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * L_18 = ___other0;
		NullCheck(L_18);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_19;
		L_19 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_18, /*hidden argument*/NULL);
		NullCheck(L_19);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_20;
		L_20 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_19, /*hidden argument*/NULL);
		NullCheck(L_20);
		int32_t L_21;
		L_21 = Transform_get_childCount_mCBED4F6D3F6A7386C4D97C2C3FD25C383A0BCD05(L_20, /*hidden argument*/NULL);
		if ((((int32_t)L_21) <= ((int32_t)0)))
		{
			goto IL_00c0;
		}
	}
	{
		// var sphere = other.gameObject.transform.GetChild(0).gameObject;
		Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * L_22 = ___other0;
		NullCheck(L_22);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_23;
		L_23 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_22, /*hidden argument*/NULL);
		NullCheck(L_23);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_24;
		L_24 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_23, /*hidden argument*/NULL);
		NullCheck(L_24);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_25;
		L_25 = Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C(L_24, 0, /*hidden argument*/NULL);
		NullCheck(L_25);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_26;
		L_26 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_25, /*hidden argument*/NULL);
		// Debug.Log($"child count: {other.gameObject.transform.childCount}");
		Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * L_27 = ___other0;
		NullCheck(L_27);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_28;
		L_28 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_27, /*hidden argument*/NULL);
		NullCheck(L_28);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_29;
		L_29 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_28, /*hidden argument*/NULL);
		NullCheck(L_29);
		int32_t L_30;
		L_30 = Transform_get_childCount_mCBED4F6D3F6A7386C4D97C2C3FD25C383A0BCD05(L_29, /*hidden argument*/NULL);
		int32_t L_31 = L_30;
		RuntimeObject * L_32 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_31);
		String_t* L_33;
		L_33 = String_Format_mB3D38E5238C3164DB4D7D29339D9E225A4496D17(_stringLiteral15A8A27C7D54D58FA24ADFF0E3E52BF4748B1E9D, L_32, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_33, /*hidden argument*/NULL);
		// sphere.transform.position = other.transform.position;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_34 = L_26;
		NullCheck(L_34);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_35;
		L_35 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_34, /*hidden argument*/NULL);
		Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * L_36 = ___other0;
		NullCheck(L_36);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_37;
		L_37 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_36, /*hidden argument*/NULL);
		NullCheck(L_37);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_38;
		L_38 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_37, /*hidden argument*/NULL);
		NullCheck(L_35);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_35, L_38, /*hidden argument*/NULL);
		// sphere.SetActive(true);
		NullCheck(L_34);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_34, (bool)1, /*hidden argument*/NULL);
	}

IL_00c0:
	{
		// }
		return;
	}
}
// System.Void MainCameraController::updateRotationByMouse()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainCameraController_updateRotationByMouse_mFB289B014C7F0700D4016B1414386EBFFED7F3D7 (MainCameraController_t90D850F2A0257D38B41668E324DEF1DDB2F89BFC * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral16DD21BE77B115D392226EB71A2D3A9FDC29E3F0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral88BEE283254D7094E258B3A88730F4CC4F1E4AC7);
		s_Il2CppMethodInitialized = true;
	}
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if (Input.GetMouseButton(0))
		bool L_0;
		L_0 = Input_GetMouseButton_m27BF2DDBF38A38787B83A13D3E6F0F88F7C834C1(0, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_00a0;
		}
	}
	{
		// transform.Rotate(new Vector3(Input.GetAxis("Mouse Y") * speed, -Input.GetAxis("Mouse X") * speed, 0));
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_1;
		L_1 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		float L_2;
		L_2 = Input_GetAxis_m939297DEB2ECF8D8D09AD66EB69979AAD2B62326(_stringLiteral16DD21BE77B115D392226EB71A2D3A9FDC29E3F0, /*hidden argument*/NULL);
		float L_3 = __this->get_speed_8();
		float L_4;
		L_4 = Input_GetAxis_m939297DEB2ECF8D8D09AD66EB69979AAD2B62326(_stringLiteral88BEE283254D7094E258B3A88730F4CC4F1E4AC7, /*hidden argument*/NULL);
		float L_5 = __this->get_speed_8();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_6), ((float)il2cpp_codegen_multiply((float)L_2, (float)L_3)), ((float)il2cpp_codegen_multiply((float)((-L_4)), (float)L_5)), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_1);
		Transform_Rotate_m027A155054DDC4206F679EFB86BE0960D45C33A7(L_1, L_6, /*hidden argument*/NULL);
		// a = transform.rotation.eulerAngles.x;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_7;
		L_7 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_7);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_8;
		L_8 = Transform_get_rotation_m4AA3858C00DF4C9614B80352558C4C37D08D2200(L_7, /*hidden argument*/NULL);
		V_0 = L_8;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9;
		L_9 = Quaternion_get_eulerAngles_m3DA616CAD670235A407E8A7A75925AA8E22338C3((Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 *)(&V_0), /*hidden argument*/NULL);
		float L_10 = L_9.get_x_2();
		__this->set_a_6(L_10);
		// b = transform.rotation.eulerAngles.y;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_11;
		L_11 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_11);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_12;
		L_12 = Transform_get_rotation_m4AA3858C00DF4C9614B80352558C4C37D08D2200(L_11, /*hidden argument*/NULL);
		V_0 = L_12;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13;
		L_13 = Quaternion_get_eulerAngles_m3DA616CAD670235A407E8A7A75925AA8E22338C3((Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 *)(&V_0), /*hidden argument*/NULL);
		float L_14 = L_13.get_y_3();
		__this->set_b_7(L_14);
		// transform.rotation = Quaternion.Euler(a, b, 0);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_15;
		L_15 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		float L_16 = __this->get_a_6();
		float L_17 = __this->get_b_7();
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_18;
		L_18 = Quaternion_Euler_m37BF99FFFA09F4B3F83DC066641B82C59B19A9C3(L_16, L_17, (0.0f), /*hidden argument*/NULL);
		NullCheck(L_15);
		Transform_set_rotation_m1B5F3D4CE984AB31254615C9C71B0E54978583B4(L_15, L_18, /*hidden argument*/NULL);
	}

IL_00a0:
	{
		// }
		return;
	}
}
// System.Void MainCameraController::UpdateCricle2DView()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainCameraController_UpdateCricle2DView_m0DD41E64192A34DA3E0152C184519671BC03CC8A (MainCameraController_t90D850F2A0257D38B41668E324DEF1DDB2F89BFC * __this, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// Vector3 vector3 = new Vector3(0,0,-transform.eulerAngles.y);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0;
		L_0 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1;
		L_1 = Transform_get_eulerAngles_mCF1E10C36ED1F03804A1D10A9BAB272E0EA8766F(L_0, /*hidden argument*/NULL);
		float L_2 = L_1.get_y_3();
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&V_0), (0.0f), (0.0f), ((-L_2)), /*hidden argument*/NULL);
		// print(vector3.ToString());
		String_t* L_3;
		L_3 = Vector3_ToString_mD5085501F9A0483542E9F7B18CD09C0AB977E318((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&V_0), /*hidden argument*/NULL);
		MonoBehaviour_print_m4F113B89EC1C221CAC6EC64365E6DAD0AF86F090(L_3, /*hidden argument*/NULL);
		// circle2DView.transform.rotation = Quaternion.Euler(vector3);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_4 = __this->get_circle2DView_9();
		NullCheck(L_4);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_5;
		L_5 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_4, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = V_0;
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_7;
		L_7 = Quaternion_Euler_m887ABE4F4DD563351E9874D63922C2F53969BBAB(L_6, /*hidden argument*/NULL);
		NullCheck(L_5);
		Transform_set_rotation_m1B5F3D4CE984AB31254615C9C71B0E54978583B4(L_5, L_7, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void MainCameraController::UpdateMoving()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainCameraController_UpdateMoving_mA9700A03A415926751D5BFD1EB3EE5B620242953 (MainCameraController_t90D850F2A0257D38B41668E324DEF1DDB2F89BFC * __this, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// Vector3 pos = transform.position;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0;
		L_0 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1;
		L_1 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		// if (x > 0)
		float L_2 = __this->get_x_4();
		if ((!(((float)L_2) > ((float)(0.0f)))))
		{
			goto IL_004e;
		}
	}
	{
		// pos.z += (speed * Time.deltaTime);
		float* L_3 = (&V_0)->get_address_of_z_4();
		float* L_4 = L_3;
		float L_5 = *((float*)L_4);
		float L_6 = __this->get_speed_8();
		float L_7;
		L_7 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		*((float*)L_4) = (float)((float)il2cpp_codegen_add((float)L_5, (float)((float)il2cpp_codegen_multiply((float)L_6, (float)L_7))));
		// transform.position = pos;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_8;
		L_8 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9 = V_0;
		NullCheck(L_8);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_8, L_9, /*hidden argument*/NULL);
		// x--;
		float L_10 = __this->get_x_4();
		__this->set_x_4(((float)il2cpp_codegen_subtract((float)L_10, (float)(1.0f))));
	}

IL_004e:
	{
		// if (x < 0)
		float L_11 = __this->get_x_4();
		if ((!(((float)L_11) < ((float)(0.0f)))))
		{
			goto IL_0090;
		}
	}
	{
		// pos.z -= (speed * Time.deltaTime);
		float* L_12 = (&V_0)->get_address_of_z_4();
		float* L_13 = L_12;
		float L_14 = *((float*)L_13);
		float L_15 = __this->get_speed_8();
		float L_16;
		L_16 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		*((float*)L_13) = (float)((float)il2cpp_codegen_subtract((float)L_14, (float)((float)il2cpp_codegen_multiply((float)L_15, (float)L_16))));
		// transform.position = pos;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_17;
		L_17 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_18 = V_0;
		NullCheck(L_17);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_17, L_18, /*hidden argument*/NULL);
		// x++;
		float L_19 = __this->get_x_4();
		__this->set_x_4(((float)il2cpp_codegen_add((float)L_19, (float)(1.0f))));
	}

IL_0090:
	{
		// if (y > 0)
		float L_20 = __this->get_y_5();
		if ((!(((float)L_20) > ((float)(0.0f)))))
		{
			goto IL_00d2;
		}
	}
	{
		// pos.x += (speed * Time.deltaTime);
		float* L_21 = (&V_0)->get_address_of_x_2();
		float* L_22 = L_21;
		float L_23 = *((float*)L_22);
		float L_24 = __this->get_speed_8();
		float L_25;
		L_25 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		*((float*)L_22) = (float)((float)il2cpp_codegen_add((float)L_23, (float)((float)il2cpp_codegen_multiply((float)L_24, (float)L_25))));
		// transform.position = pos;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_26;
		L_26 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_27 = V_0;
		NullCheck(L_26);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_26, L_27, /*hidden argument*/NULL);
		// y--;
		float L_28 = __this->get_y_5();
		__this->set_y_5(((float)il2cpp_codegen_subtract((float)L_28, (float)(1.0f))));
	}

IL_00d2:
	{
		// if (y < 0)
		float L_29 = __this->get_y_5();
		if ((!(((float)L_29) < ((float)(0.0f)))))
		{
			goto IL_0114;
		}
	}
	{
		// pos.x -= (speed * Time.deltaTime);
		float* L_30 = (&V_0)->get_address_of_x_2();
		float* L_31 = L_30;
		float L_32 = *((float*)L_31);
		float L_33 = __this->get_speed_8();
		float L_34;
		L_34 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		*((float*)L_31) = (float)((float)il2cpp_codegen_subtract((float)L_32, (float)((float)il2cpp_codegen_multiply((float)L_33, (float)L_34))));
		// transform.position = pos;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_35;
		L_35 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_36 = V_0;
		NullCheck(L_35);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_35, L_36, /*hidden argument*/NULL);
		// y++;
		float L_37 = __this->get_y_5();
		__this->set_y_5(((float)il2cpp_codegen_add((float)L_37, (float)(1.0f))));
	}

IL_0114:
	{
		// }
		return;
	}
}
// System.Void MainCameraController::OnUpButtonClick()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainCameraController_OnUpButtonClick_mBD997EDB2F5BC5E841E12BB641C7F21812965608 (MainCameraController_t90D850F2A0257D38B41668E324DEF1DDB2F89BFC * __this, const RuntimeMethod* method)
{
	{
		// x =  3;
		__this->set_x_4((3.0f));
		// }
		return;
	}
}
// System.Void MainCameraController::OnDownButtonClick()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainCameraController_OnDownButtonClick_mF1F132A29EA72C3ABF8EF347F009AF4F69E44AD6 (MainCameraController_t90D850F2A0257D38B41668E324DEF1DDB2F89BFC * __this, const RuntimeMethod* method)
{
	{
		// x = -3;
		__this->set_x_4((-3.0f));
		// }
		return;
	}
}
// System.Void MainCameraController::OnRightButtonClick()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainCameraController_OnRightButtonClick_m23CB397C67ACB232B6DD8525C086E114BFD5E6D3 (MainCameraController_t90D850F2A0257D38B41668E324DEF1DDB2F89BFC * __this, const RuntimeMethod* method)
{
	{
		// y = 3;
		__this->set_y_5((3.0f));
		// }
		return;
	}
}
// System.Void MainCameraController::OnLeftButtonClick()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainCameraController_OnLeftButtonClick_m0CED418A1B38FDDD34AE9616DAD58FFAA3B7CE56 (MainCameraController_t90D850F2A0257D38B41668E324DEF1DDB2F89BFC * __this, const RuntimeMethod* method)
{
	{
		// y = -3;
		__this->set_y_5((-3.0f));
		// }
		return;
	}
}
// System.Void MainCameraController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainCameraController__ctor_mB762577697D8877B705452ADBBB8D0D299772158 (MainCameraController_t90D850F2A0257D38B41668E324DEF1DDB2F89BFC * __this, const RuntimeMethod* method)
{
	{
		// public float speed = 1.5f;
		__this->set_speed_8((1.5f));
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void MainCameraLayerManager::OnPreCull()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainCameraLayerManager_OnPreCull_m01A867E3E7CC2CC4EE1266D376BCA8125461E863 (MainCameraLayerManager_tB21B56BD4156E63941A865F34D94B01F22043250 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mC476650D5343DD52E76FFBFD14DC33545E715451_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mFC3DBA62507504A47BA3A291D2D082A8B90F66C3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m65D32F0E72C3886B66F19493D4B5BA26910FA843_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LayerManager_t3527BEB62E0C7C2C45055FE662E50E75642F7942_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m86205E64F6403EC8EC22940E68CF9398AAB017D9_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_t49197A306F3EC32F88087BFF9EC8A440ED6844E1  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		// foreach (Dimension dimension in LayerManager.definedDimensions) {
		IL2CPP_RUNTIME_CLASS_INIT(LayerManager_t3527BEB62E0C7C2C45055FE662E50E75642F7942_il2cpp_TypeInfo_var);
		List_1_t8541C8BADA1A4B90DE74D36D29037CF0E814B9AA * L_0 = ((LayerManager_t3527BEB62E0C7C2C45055FE662E50E75642F7942_StaticFields*)il2cpp_codegen_static_fields_for(LayerManager_t3527BEB62E0C7C2C45055FE662E50E75642F7942_il2cpp_TypeInfo_var))->get_definedDimensions_2();
		NullCheck(L_0);
		Enumerator_t49197A306F3EC32F88087BFF9EC8A440ED6844E1  L_1;
		L_1 = List_1_GetEnumerator_m86205E64F6403EC8EC22940E68CF9398AAB017D9(L_0, /*hidden argument*/List_1_GetEnumerator_m86205E64F6403EC8EC22940E68CF9398AAB017D9_RuntimeMethod_var);
		V_0 = L_1;
	}

IL_000b:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0019;
		}

IL_000d:
		{
			// foreach (Dimension dimension in LayerManager.definedDimensions) {
			Dimension_t28D074E7D31C414382BEB891CF77CF6345E04C34 * L_2;
			L_2 = Enumerator_get_Current_m65D32F0E72C3886B66F19493D4B5BA26910FA843_inline((Enumerator_t49197A306F3EC32F88087BFF9EC8A440ED6844E1 *)(&V_0), /*hidden argument*/Enumerator_get_Current_m65D32F0E72C3886B66F19493D4B5BA26910FA843_RuntimeMethod_var);
			// dimension.PreRender ();
			NullCheck(L_2);
			Dimension_PreRender_m60DBD0F998687A2746D1E5D85DB775C0AF028641(L_2, /*hidden argument*/NULL);
		}

IL_0019:
		{
			// foreach (Dimension dimension in LayerManager.definedDimensions) {
			bool L_3;
			L_3 = Enumerator_MoveNext_mFC3DBA62507504A47BA3A291D2D082A8B90F66C3((Enumerator_t49197A306F3EC32F88087BFF9EC8A440ED6844E1 *)(&V_0), /*hidden argument*/Enumerator_MoveNext_mFC3DBA62507504A47BA3A291D2D082A8B90F66C3_RuntimeMethod_var);
			if (L_3)
			{
				goto IL_000d;
			}
		}

IL_0022:
		{
			IL2CPP_LEAVE(0x32, FINALLY_0024);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0024;
	}

FINALLY_0024:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_mC476650D5343DD52E76FFBFD14DC33545E715451((Enumerator_t49197A306F3EC32F88087BFF9EC8A440ED6844E1 *)(&V_0), /*hidden argument*/Enumerator_Dispose_mC476650D5343DD52E76FFBFD14DC33545E715451_RuntimeMethod_var);
		IL2CPP_END_FINALLY(36)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(36)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x32, IL_0032)
	}

IL_0032:
	{
		// }
		return;
	}
}
// System.Void MainCameraLayerManager::OnPostRender()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainCameraLayerManager_OnPostRender_mC8BE1E7236C7149FFB381DC65E54F7F36B4B3235 (MainCameraLayerManager_tB21B56BD4156E63941A865F34D94B01F22043250 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mC476650D5343DD52E76FFBFD14DC33545E715451_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mFC3DBA62507504A47BA3A291D2D082A8B90F66C3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m65D32F0E72C3886B66F19493D4B5BA26910FA843_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LayerManager_t3527BEB62E0C7C2C45055FE662E50E75642F7942_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m86205E64F6403EC8EC22940E68CF9398AAB017D9_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_t49197A306F3EC32F88087BFF9EC8A440ED6844E1  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		// foreach (Dimension dimension in LayerManager.definedDimensions) {
		IL2CPP_RUNTIME_CLASS_INIT(LayerManager_t3527BEB62E0C7C2C45055FE662E50E75642F7942_il2cpp_TypeInfo_var);
		List_1_t8541C8BADA1A4B90DE74D36D29037CF0E814B9AA * L_0 = ((LayerManager_t3527BEB62E0C7C2C45055FE662E50E75642F7942_StaticFields*)il2cpp_codegen_static_fields_for(LayerManager_t3527BEB62E0C7C2C45055FE662E50E75642F7942_il2cpp_TypeInfo_var))->get_definedDimensions_2();
		NullCheck(L_0);
		Enumerator_t49197A306F3EC32F88087BFF9EC8A440ED6844E1  L_1;
		L_1 = List_1_GetEnumerator_m86205E64F6403EC8EC22940E68CF9398AAB017D9(L_0, /*hidden argument*/List_1_GetEnumerator_m86205E64F6403EC8EC22940E68CF9398AAB017D9_RuntimeMethod_var);
		V_0 = L_1;
	}

IL_000b:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0019;
		}

IL_000d:
		{
			// foreach (Dimension dimension in LayerManager.definedDimensions) {
			Dimension_t28D074E7D31C414382BEB891CF77CF6345E04C34 * L_2;
			L_2 = Enumerator_get_Current_m65D32F0E72C3886B66F19493D4B5BA26910FA843_inline((Enumerator_t49197A306F3EC32F88087BFF9EC8A440ED6844E1 *)(&V_0), /*hidden argument*/Enumerator_get_Current_m65D32F0E72C3886B66F19493D4B5BA26910FA843_RuntimeMethod_var);
			// dimension.PostRender ();
			NullCheck(L_2);
			Dimension_PostRender_mCC43245957A1215A2492A41C3E3A81454968BC22(L_2, /*hidden argument*/NULL);
		}

IL_0019:
		{
			// foreach (Dimension dimension in LayerManager.definedDimensions) {
			bool L_3;
			L_3 = Enumerator_MoveNext_mFC3DBA62507504A47BA3A291D2D082A8B90F66C3((Enumerator_t49197A306F3EC32F88087BFF9EC8A440ED6844E1 *)(&V_0), /*hidden argument*/Enumerator_MoveNext_mFC3DBA62507504A47BA3A291D2D082A8B90F66C3_RuntimeMethod_var);
			if (L_3)
			{
				goto IL_000d;
			}
		}

IL_0022:
		{
			IL2CPP_LEAVE(0x32, FINALLY_0024);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0024;
	}

FINALLY_0024:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_mC476650D5343DD52E76FFBFD14DC33545E715451((Enumerator_t49197A306F3EC32F88087BFF9EC8A440ED6844E1 *)(&V_0), /*hidden argument*/Enumerator_Dispose_mC476650D5343DD52E76FFBFD14DC33545E715451_RuntimeMethod_var);
		IL2CPP_END_FINALLY(36)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(36)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x32, IL_0032)
	}

IL_0032:
	{
		// }
		return;
	}
}
// System.Void MainCameraLayerManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainCameraLayerManager__ctor_m44E70DC95EA527732EC29D36AB877A081A9F6A08 (MainCameraLayerManager_tB21B56BD4156E63941A865F34D94B01F22043250 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void MeshDeformer::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeshDeformer_Start_mAE4DB74F48632A522089B7CF7AD8C72C9DD33B22 (MeshDeformer_t552F11EC8166EE3DED6958E9B4F0050853FB31F8 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisMeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A_m4E31C5D3D0490AEE405B54BE9F61802EA425B9DC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// deformingMesh = GetComponent<MeshFilter>().mesh;
		MeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A * L_0;
		L_0 = Component_GetComponent_TisMeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A_m4E31C5D3D0490AEE405B54BE9F61802EA425B9DC(__this, /*hidden argument*/Component_GetComponent_TisMeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A_m4E31C5D3D0490AEE405B54BE9F61802EA425B9DC_RuntimeMethod_var);
		NullCheck(L_0);
		Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * L_1;
		L_1 = MeshFilter_get_mesh_mFC1DF5AFBC1E4269D08628DB83C954882FD2B417(L_0, /*hidden argument*/NULL);
		__this->set_deformingMesh_4(L_1);
		// originalVertices = deformingMesh.vertices;
		Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * L_2 = __this->get_deformingMesh_4();
		NullCheck(L_2);
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_3;
		L_3 = Mesh_get_vertices_mB7A79698792B3CBA0E7E6EACDA6C031E496FB595(L_2, /*hidden argument*/NULL);
		__this->set_originalVertices_5(L_3);
		// displacedVertices = new Vector3[originalVertices.Length];
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_4 = __this->get_originalVertices_5();
		NullCheck(L_4);
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_5 = (Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4*)(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4*)SZArrayNew(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4_il2cpp_TypeInfo_var, (uint32_t)((int32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))));
		__this->set_displacedVertices_6(L_5);
		// for (int i = 0; i < originalVertices.Length; i++) {
		V_0 = 0;
		goto IL_0055;
	}

IL_0039:
	{
		// displacedVertices[i] = originalVertices[i];
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_6 = __this->get_displacedVertices_6();
		int32_t L_7 = V_0;
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_8 = __this->get_originalVertices_5();
		int32_t L_9 = V_0;
		NullCheck(L_8);
		int32_t L_10 = L_9;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_11 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )L_11);
		// for (int i = 0; i < originalVertices.Length; i++) {
		int32_t L_12 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_12, (int32_t)1));
	}

IL_0055:
	{
		// for (int i = 0; i < originalVertices.Length; i++) {
		int32_t L_13 = V_0;
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_14 = __this->get_originalVertices_5();
		NullCheck(L_14);
		if ((((int32_t)L_13) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_14)->max_length))))))
		{
			goto IL_0039;
		}
	}
	{
		// }
		return;
	}
}
// System.Void MeshDeformer::ClearDeformingForce()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeshDeformer_ClearDeformingForce_mF7A576894730ABAA2AEE6491092CB13549F52B18 (MeshDeformer_t552F11EC8166EE3DED6958E9B4F0050853FB31F8 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		// for (int i = 0; i < originalVertices.Length; i++) {
		V_0 = 0;
		goto IL_0020;
	}

IL_0004:
	{
		// displacedVertices[i] = originalVertices[i];
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_0 = __this->get_displacedVertices_6();
		int32_t L_1 = V_0;
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_2 = __this->get_originalVertices_5();
		int32_t L_3 = V_0;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		NullCheck(L_0);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(L_1), (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )L_5);
		// for (int i = 0; i < originalVertices.Length; i++) {
		int32_t L_6 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_6, (int32_t)1));
	}

IL_0020:
	{
		// for (int i = 0; i < originalVertices.Length; i++) {
		int32_t L_7 = V_0;
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_8 = __this->get_originalVertices_5();
		NullCheck(L_8);
		if ((((int32_t)L_7) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_8)->max_length))))))
		{
			goto IL_0004;
		}
	}
	{
		// deformingMesh.vertices = displacedVertices;
		Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * L_9 = __this->get_deformingMesh_4();
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_10 = __this->get_displacedVertices_6();
		NullCheck(L_9);
		Mesh_set_vertices_m38F0908D0FDFE484BE19E94BE9D6176667469AAD(L_9, L_10, /*hidden argument*/NULL);
		// deformingMesh.RecalculateNormals();
		Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * L_11 = __this->get_deformingMesh_4();
		NullCheck(L_11);
		Mesh_RecalculateNormals_mEBF9ED932D0B463E4EF3947D232CC8BEECAE1A4A(L_11, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void MeshDeformer::AddDeformingForce(UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeshDeformer_AddDeformingForce_mE4BDC03DC7322C72885087E924D25CA464FEA9F0 (MeshDeformer_t552F11EC8166EE3DED6958E9B4F0050853FB31F8 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___point0, float ___force1, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		// point = transform.InverseTransformPoint(point);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0;
		L_0 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1 = ___point0;
		NullCheck(L_0);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2;
		L_2 = Transform_InverseTransformPoint_m476ABC8F3F14824D7D82FE2C54CEE5A151A669B8(L_0, L_1, /*hidden argument*/NULL);
		___point0 = L_2;
		// for (int i = 0; i < displacedVertices.Length; i++) {
		V_0 = 0;
		goto IL_001f;
	}

IL_0012:
	{
		// AddForceToVertex(i, point, force);
		int32_t L_3 = V_0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4 = ___point0;
		float L_5 = ___force1;
		VirtActionInvoker3< int32_t, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E , float >::Invoke(5 /* System.Void MeshDeformer::AddForceToVertex(System.Int32,UnityEngine.Vector3,System.Single) */, __this, L_3, L_4, L_5);
		// for (int i = 0; i < displacedVertices.Length; i++) {
		int32_t L_6 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_6, (int32_t)1));
	}

IL_001f:
	{
		// for (int i = 0; i < displacedVertices.Length; i++) {
		int32_t L_7 = V_0;
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_8 = __this->get_displacedVertices_6();
		NullCheck(L_8);
		if ((((int32_t)L_7) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_8)->max_length))))))
		{
			goto IL_0012;
		}
	}
	{
		// deformingMesh.vertices = displacedVertices;
		Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * L_9 = __this->get_deformingMesh_4();
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_10 = __this->get_displacedVertices_6();
		NullCheck(L_9);
		Mesh_set_vertices_m38F0908D0FDFE484BE19E94BE9D6176667469AAD(L_9, L_10, /*hidden argument*/NULL);
		// deformingMesh.RecalculateNormals();
		Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * L_11 = __this->get_deformingMesh_4();
		NullCheck(L_11);
		Mesh_RecalculateNormals_mEBF9ED932D0B463E4EF3947D232CC8BEECAE1A4A(L_11, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void MeshDeformer::AddDeformingForce(UnityEngine.Vector3,System.Single,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeshDeformer_AddDeformingForce_m1A2E6C6232DF262F24F285DE57B39819215CB517 (MeshDeformer_t552F11EC8166EE3DED6958E9B4F0050853FB31F8 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___point0, float ___force1, bool ___direction2, const RuntimeMethod* method)
{
	{
		// AddDeformingForce(point, force);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___point0;
		float L_1 = ___force1;
		MeshDeformer_AddDeformingForce_mE4BDC03DC7322C72885087E924D25CA464FEA9F0(__this, L_0, L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void MeshDeformer::AddForceToVertex(System.Int32,UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeshDeformer_AddForceToVertex_m1C536A8413ACC2DA1A127FF88AD9499699B39325 (MeshDeformer_t552F11EC8166EE3DED6958E9B4F0050853FB31F8 * __this, int32_t ___i0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___point1, float ___force2, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	float V_1 = 0.0f;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		// if (lockXEdges && (originalVertices [i].x == -0.5f ||
		//     originalVertices [i].x == 0.5f)) {
		bool L_0 = __this->get_lockXEdges_7();
		if (!L_0)
		{
			goto IL_0039;
		}
	}
	{
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_1 = __this->get_originalVertices_5();
		int32_t L_2 = ___i0;
		NullCheck(L_1);
		float L_3 = ((L_1)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_2)))->get_x_2();
		if ((((float)L_3) == ((float)(-0.5f))))
		{
			goto IL_0038;
		}
	}
	{
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_4 = __this->get_originalVertices_5();
		int32_t L_5 = ___i0;
		NullCheck(L_4);
		float L_6 = ((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)))->get_x_2();
		if ((!(((float)L_6) == ((float)(0.5f)))))
		{
			goto IL_0039;
		}
	}

IL_0038:
	{
		// return;
		return;
	}

IL_0039:
	{
		// if (lockYEdges && (originalVertices [i].y == -0.5f ||
		//     originalVertices [i].y == 0.5f)) {
		bool L_7 = __this->get_lockYEdges_8();
		if (!L_7)
		{
			goto IL_0072;
		}
	}
	{
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_8 = __this->get_originalVertices_5();
		int32_t L_9 = ___i0;
		NullCheck(L_8);
		float L_10 = ((L_8)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_9)))->get_y_3();
		if ((((float)L_10) == ((float)(-0.5f))))
		{
			goto IL_0071;
		}
	}
	{
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_11 = __this->get_originalVertices_5();
		int32_t L_12 = ___i0;
		NullCheck(L_11);
		float L_13 = ((L_11)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_12)))->get_y_3();
		if ((!(((float)L_13) == ((float)(0.5f)))))
		{
			goto IL_0072;
		}
	}

IL_0071:
	{
		// return;
		return;
	}

IL_0072:
	{
		// if (lockZEdges && (originalVertices [i].z == -0.5f ||
		//     originalVertices [i].z == 0.5f)) {
		bool L_14 = __this->get_lockZEdges_9();
		if (!L_14)
		{
			goto IL_00ab;
		}
	}
	{
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_15 = __this->get_originalVertices_5();
		int32_t L_16 = ___i0;
		NullCheck(L_15);
		float L_17 = ((L_15)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_16)))->get_z_4();
		if ((((float)L_17) == ((float)(-0.5f))))
		{
			goto IL_00aa;
		}
	}
	{
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_18 = __this->get_originalVertices_5();
		int32_t L_19 = ___i0;
		NullCheck(L_18);
		float L_20 = ((L_18)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_19)))->get_z_4();
		if ((!(((float)L_20) == ((float)(0.5f)))))
		{
			goto IL_00ab;
		}
	}

IL_00aa:
	{
		// return;
		return;
	}

IL_00ab:
	{
		// Vector3 pointToVertex = originalVertices[i] - point;
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_21 = __this->get_originalVertices_5();
		int32_t L_22 = ___i0;
		NullCheck(L_21);
		int32_t L_23 = L_22;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_24 = (L_21)->GetAt(static_cast<il2cpp_array_size_t>(L_23));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_25 = ___point1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_26;
		L_26 = Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline(L_24, L_25, /*hidden argument*/NULL);
		V_0 = L_26;
		// pointToVertex = new Vector3 (
		//     pointToVertex.x * transform.localScale.x,
		//     pointToVertex.y * transform.localScale.y,
		//     pointToVertex.z * transform.localScale.z);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_27 = V_0;
		float L_28 = L_27.get_x_2();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_29;
		L_29 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_29);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_30;
		L_30 = Transform_get_localScale_mD9DF6CA81108C2A6002B5EA2BE25A6CD2723D046(L_29, /*hidden argument*/NULL);
		float L_31 = L_30.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_32 = V_0;
		float L_33 = L_32.get_y_3();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_34;
		L_34 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_34);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_35;
		L_35 = Transform_get_localScale_mD9DF6CA81108C2A6002B5EA2BE25A6CD2723D046(L_34, /*hidden argument*/NULL);
		float L_36 = L_35.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_37 = V_0;
		float L_38 = L_37.get_z_4();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_39;
		L_39 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_39);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_40;
		L_40 = Transform_get_localScale_mD9DF6CA81108C2A6002B5EA2BE25A6CD2723D046(L_39, /*hidden argument*/NULL);
		float L_41 = L_40.get_z_4();
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&V_0), ((float)il2cpp_codegen_multiply((float)L_28, (float)L_31)), ((float)il2cpp_codegen_multiply((float)L_33, (float)L_36)), ((float)il2cpp_codegen_multiply((float)L_38, (float)L_41)), /*hidden argument*/NULL);
		// float attenuatedForce = Mathf.Max (Mathf.Abs(force) - pointToVertex.magnitude, 0);
		float L_42 = ___force2;
		float L_43;
		L_43 = fabsf(L_42);
		float L_44;
		L_44 = Vector3_get_magnitude_mDDD40612220D8104E77E993E18A101A69A944991((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&V_0), /*hidden argument*/NULL);
		float L_45;
		L_45 = Mathf_Max_m4CE510E1F1013B33275F01543731A51A58BA0775(((float)il2cpp_codegen_subtract((float)L_43, (float)L_44)), (0.0f), /*hidden argument*/NULL);
		V_1 = L_45;
		// Vector3 transformForce = pointToVertex.normalized * attenuatedForce;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_46;
		L_46 = Vector3_get_normalized_m2FA6DF38F97BDA4CCBDAE12B9FE913A241DAC8D5((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&V_0), /*hidden argument*/NULL);
		float L_47 = V_1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_48;
		L_48 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_46, L_47, /*hidden argument*/NULL);
		V_2 = L_48;
		// transformForce = new Vector3 (
		//     transformForce.x / transform.localScale.x,
		//     transformForce.y / transform.localScale.y,
		//     transformForce.z / transform.localScale.z);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_49 = V_2;
		float L_50 = L_49.get_x_2();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_51;
		L_51 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_51);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_52;
		L_52 = Transform_get_localScale_mD9DF6CA81108C2A6002B5EA2BE25A6CD2723D046(L_51, /*hidden argument*/NULL);
		float L_53 = L_52.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_54 = V_2;
		float L_55 = L_54.get_y_3();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_56;
		L_56 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_56);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_57;
		L_57 = Transform_get_localScale_mD9DF6CA81108C2A6002B5EA2BE25A6CD2723D046(L_56, /*hidden argument*/NULL);
		float L_58 = L_57.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_59 = V_2;
		float L_60 = L_59.get_z_4();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_61;
		L_61 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_61);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_62;
		L_62 = Transform_get_localScale_mD9DF6CA81108C2A6002B5EA2BE25A6CD2723D046(L_61, /*hidden argument*/NULL);
		float L_63 = L_62.get_z_4();
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&V_2), ((float)((float)L_50/(float)L_53)), ((float)((float)L_55/(float)L_58)), ((float)((float)L_60/(float)L_63)), /*hidden argument*/NULL);
		// displacedVertices [i] = originalVertices [i] + (transformForce);
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_64 = __this->get_displacedVertices_6();
		int32_t L_65 = ___i0;
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_66 = __this->get_originalVertices_5();
		int32_t L_67 = ___i0;
		NullCheck(L_66);
		int32_t L_68 = L_67;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_69 = (L_66)->GetAt(static_cast<il2cpp_array_size_t>(L_68));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_70 = V_2;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_71;
		L_71 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_69, L_70, /*hidden argument*/NULL);
		NullCheck(L_64);
		(L_64)->SetAt(static_cast<il2cpp_array_size_t>(L_65), (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )L_71);
		// }
		return;
	}
}
// System.Void MeshDeformer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeshDeformer__ctor_m24A0F5BA63C2DAF2FD7AA96472D8D2426ABB5212 (MeshDeformer_t552F11EC8166EE3DED6958E9B4F0050853FB31F8 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void MeshDeformerInput::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeshDeformerInput_Update_mC44725D36325D5C61478656C5E3BA3A9BACE8B81 (MeshDeformerInput_t539337F65D4F0BAA0C89ED1BF77F0B33C9E3EE6E * __this, const RuntimeMethod* method)
{
	{
		// if (Input.GetMouseButton(0)) {
		bool L_0;
		L_0 = Input_GetMouseButton_m27BF2DDBF38A38787B83A13D3E6F0F88F7C834C1(0, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_000e;
		}
	}
	{
		// HandleInput();
		MeshDeformerInput_HandleInput_m3E1C9919ECA7B323DFFC339DDCDAAD367B7292D3(__this, /*hidden argument*/NULL);
	}

IL_000e:
	{
		// }
		return;
	}
}
// System.Void MeshDeformerInput::HandleInput()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeshDeformerInput_HandleInput_m3E1C9919ECA7B323DFFC339DDCDAAD367B7292D3 (MeshDeformerInput_t539337F65D4F0BAA0C89ED1BF77F0B33C9E3EE6E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisMeshDeformer_t552F11EC8166EE3DED6958E9B4F0050853FB31F8_mB0560E6ABD7E285C74F1A9D629D2B400D9A60FFF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89  V_0;
	memset((&V_0), 0, sizeof(V_0));
	MeshDeformer_t552F11EC8166EE3DED6958E9B4F0050853FB31F8 * V_1 = NULL;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		// Ray inputRay = Camera.main.ScreenPointToRay(Input.mousePosition);
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_0;
		L_0 = Camera_get_main_mC337C621B91591CEF89504C97EF64D717C12871C(/*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1;
		L_1 = Input_get_mousePosition_m79528BC2F30C57054641F709C855130AE586AC0E(/*hidden argument*/NULL);
		NullCheck(L_0);
		Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6  L_2;
		L_2 = Camera_ScreenPointToRay_mD385213935A81030EDC604A39FD64761077CFBAB(L_0, L_1, /*hidden argument*/NULL);
		// if (Physics.Raycast(inputRay, out hit)) {
		bool L_3;
		L_3 = Physics_Raycast_m80EC8EEDA0ABA8B01838BA9054834CD1A381916E(L_2, (RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89 *)(&V_0), /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_005b;
		}
	}
	{
		// MeshDeformer deformer = hit.collider.GetComponent<MeshDeformer>();
		Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * L_4;
		L_4 = RaycastHit_get_collider_m13A3DE16FBC631E0A1F987E0B22CE70AF8AB539E((RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89 *)(&V_0), /*hidden argument*/NULL);
		NullCheck(L_4);
		MeshDeformer_t552F11EC8166EE3DED6958E9B4F0050853FB31F8 * L_5;
		L_5 = Component_GetComponent_TisMeshDeformer_t552F11EC8166EE3DED6958E9B4F0050853FB31F8_mB0560E6ABD7E285C74F1A9D629D2B400D9A60FFF(L_4, /*hidden argument*/Component_GetComponent_TisMeshDeformer_t552F11EC8166EE3DED6958E9B4F0050853FB31F8_mB0560E6ABD7E285C74F1A9D629D2B400D9A60FFF_RuntimeMethod_var);
		V_1 = L_5;
		// if (deformer) {
		MeshDeformer_t552F11EC8166EE3DED6958E9B4F0050853FB31F8 * L_6 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_7;
		L_7 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499(L_6, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_005b;
		}
	}
	{
		// Vector3 point = hit.point;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8;
		L_8 = RaycastHit_get_point_m32F7282CBB2E13393A33BAD046BDA218E48DD21E((RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89 *)(&V_0), /*hidden argument*/NULL);
		V_2 = L_8;
		// point += hit.normal * forceOffset;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9 = V_2;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10;
		L_10 = RaycastHit_get_normal_m2C813B25BAECD87FD9E9CB294278B291F4CC6674((RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89 *)(&V_0), /*hidden argument*/NULL);
		float L_11 = __this->get_forceOffset_5();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12;
		L_12 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_10, L_11, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13;
		L_13 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_9, L_12, /*hidden argument*/NULL);
		V_2 = L_13;
		// deformer.AddDeformingForce(point, force);
		MeshDeformer_t552F11EC8166EE3DED6958E9B4F0050853FB31F8 * L_14 = V_1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_15 = V_2;
		float L_16 = __this->get_force_4();
		NullCheck(L_14);
		MeshDeformer_AddDeformingForce_mE4BDC03DC7322C72885087E924D25CA464FEA9F0(L_14, L_15, L_16, /*hidden argument*/NULL);
	}

IL_005b:
	{
		// }
		return;
	}
}
// System.Void MeshDeformerInput::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeshDeformerInput__ctor_mC483A835D14B1957894DA22BC170F06E791F84AE (MeshDeformerInput_t539337F65D4F0BAA0C89ED1BF77F0B33C9E3EE6E * __this, const RuntimeMethod* method)
{
	{
		// public float force = 10f;
		__this->set_force_4((10.0f));
		// public float forceOffset = 0.1f;
		__this->set_forceOffset_5((0.100000001f));
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// MessageHandler MessageHandler::Deserialize(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MessageHandler_t61D3A022CD7E59124898915FB6A1EB56ACBF19B7 * MessageHandler_Deserialize_mFD7001A5166EDD8386B2979B3C0FDC4544D0F123 (String_t* ___message0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Extensions_Value_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_mE737D3D701C8EEDB2752A3E37EB22CC2C54A17C0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Extensions_Value_TisString_t_mBACC332922C7F06DFCD9B54B358B31A5DD079729_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MessageHandler_t61D3A022CD7E59124898915FB6A1EB56ACBF19B7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral24C049E512CD1B48036BD162FF63700A57CA3469);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral996E5360F80E16B2189CC1E536C91CE68083F694);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA44A39671D4B7FA8FBE50D795EAB52248D5C5469);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCE18B047107AA23D1AA9B2ED32D316148E02655F);
		s_Il2CppMethodInitialized = true;
	}
	JObject_tD2FCDDA48CACDBCB702BAF49B7C649084F6FDA34 * V_0 = NULL;
	{
		// JObject m = JObject.Parse(message);
		String_t* L_0 = ___message0;
		JObject_tD2FCDDA48CACDBCB702BAF49B7C649084F6FDA34 * L_1;
		L_1 = JObject_Parse_mA2260CFB81694E96A188F3FC5B9B60BA69F2AE74(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		// MessageHandler handler = new MessageHandler(
		//     m.GetValue("id").Value<int>(),
		//     m.GetValue("seq").Value<string>(),
		//     m.GetValue("name").Value<string>(),
		//     m.GetValue("data")
		// );
		JObject_tD2FCDDA48CACDBCB702BAF49B7C649084F6FDA34 * L_2 = V_0;
		NullCheck(L_2);
		JToken_t78F4E878E41125BB40B529918D104EDDC99E00C9 * L_3;
		L_3 = JObject_GetValue_mCC9DA25500AF2DDE4A6A3F0D8DF9BCC9D53612E0(L_2, _stringLiteral996E5360F80E16B2189CC1E536C91CE68083F694, /*hidden argument*/NULL);
		int32_t L_4;
		L_4 = Extensions_Value_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_mE737D3D701C8EEDB2752A3E37EB22CC2C54A17C0(L_3, /*hidden argument*/Extensions_Value_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_mE737D3D701C8EEDB2752A3E37EB22CC2C54A17C0_RuntimeMethod_var);
		JObject_tD2FCDDA48CACDBCB702BAF49B7C649084F6FDA34 * L_5 = V_0;
		NullCheck(L_5);
		JToken_t78F4E878E41125BB40B529918D104EDDC99E00C9 * L_6;
		L_6 = JObject_GetValue_mCC9DA25500AF2DDE4A6A3F0D8DF9BCC9D53612E0(L_5, _stringLiteral24C049E512CD1B48036BD162FF63700A57CA3469, /*hidden argument*/NULL);
		String_t* L_7;
		L_7 = Extensions_Value_TisString_t_mBACC332922C7F06DFCD9B54B358B31A5DD079729(L_6, /*hidden argument*/Extensions_Value_TisString_t_mBACC332922C7F06DFCD9B54B358B31A5DD079729_RuntimeMethod_var);
		JObject_tD2FCDDA48CACDBCB702BAF49B7C649084F6FDA34 * L_8 = V_0;
		NullCheck(L_8);
		JToken_t78F4E878E41125BB40B529918D104EDDC99E00C9 * L_9;
		L_9 = JObject_GetValue_mCC9DA25500AF2DDE4A6A3F0D8DF9BCC9D53612E0(L_8, _stringLiteralCE18B047107AA23D1AA9B2ED32D316148E02655F, /*hidden argument*/NULL);
		String_t* L_10;
		L_10 = Extensions_Value_TisString_t_mBACC332922C7F06DFCD9B54B358B31A5DD079729(L_9, /*hidden argument*/Extensions_Value_TisString_t_mBACC332922C7F06DFCD9B54B358B31A5DD079729_RuntimeMethod_var);
		JObject_tD2FCDDA48CACDBCB702BAF49B7C649084F6FDA34 * L_11 = V_0;
		NullCheck(L_11);
		JToken_t78F4E878E41125BB40B529918D104EDDC99E00C9 * L_12;
		L_12 = JObject_GetValue_mCC9DA25500AF2DDE4A6A3F0D8DF9BCC9D53612E0(L_11, _stringLiteralA44A39671D4B7FA8FBE50D795EAB52248D5C5469, /*hidden argument*/NULL);
		MessageHandler_t61D3A022CD7E59124898915FB6A1EB56ACBF19B7 * L_13 = (MessageHandler_t61D3A022CD7E59124898915FB6A1EB56ACBF19B7 *)il2cpp_codegen_object_new(MessageHandler_t61D3A022CD7E59124898915FB6A1EB56ACBF19B7_il2cpp_TypeInfo_var);
		MessageHandler__ctor_mA68FADA526667CCEA365016E6A8503CFC5E31A32(L_13, L_4, L_7, L_10, L_12, /*hidden argument*/NULL);
		// return handler;
		return L_13;
	}
}
// System.Void MessageHandler::.ctor(System.Int32,System.String,System.String,Newtonsoft.Json.Linq.JToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MessageHandler__ctor_mA68FADA526667CCEA365016E6A8503CFC5E31A32 (MessageHandler_t61D3A022CD7E59124898915FB6A1EB56ACBF19B7 * __this, int32_t ___id0, String_t* ___seq1, String_t* ___name2, JToken_t78F4E878E41125BB40B529918D104EDDC99E00C9 * ___data3, const RuntimeMethod* method)
{
	{
		// public MessageHandler(int id, string seq, string name, JToken data)
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// this.id = id;
		int32_t L_0 = ___id0;
		__this->set_id_0(L_0);
		// this.seq = seq;
		String_t* L_1 = ___seq1;
		__this->set_seq_1(L_1);
		// this.name = name;
		String_t* L_2 = ___name2;
		__this->set_name_2(L_2);
		// this.data = data;
		JToken_t78F4E878E41125BB40B529918D104EDDC99E00C9 * L_3 = ___data3;
		__this->set_data_3(L_3);
		// }
		return;
	}
}
// System.Void MessageHandler::send(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MessageHandler_send_m9EF609A41518571430690AFA490250C054CA5C4B (MessageHandler_t61D3A022CD7E59124898915FB6A1EB56ACBF19B7 * __this, RuntimeObject * ___data0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SingletonMonoBehaviour_1_get_Instance_m2219FD0089F95EA990F58F8DC6D47F79E9FCECC2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SingletonMonoBehaviour_1_tCE345733DAFD7C69997F22704982E2372C4BFCDD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ef__AnonymousType0_4__ctor_m3C493629DA20D23984AAEB32CBBAEEB67F0017BD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ef__AnonymousType0_4_tBCC04185AED1C1C2CFAD99475825F0A10CB5F9F6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA2F4AC9DD8E1FAC5257E5F7BA5EE1C7C7E5F7AB1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEA64C610DFA863C445196F98AE1C59C7E6F1B8EC);
		s_Il2CppMethodInitialized = true;
	}
	JObject_tD2FCDDA48CACDBCB702BAF49B7C649084F6FDA34 * V_0 = NULL;
	{
		// JObject o = JObject.FromObject(new
		// {
		//     id = id,
		//     seq = "end",
		//     name = name,
		//     data = data
		// });
		int32_t L_0 = __this->get_id_0();
		String_t* L_1 = __this->get_name_2();
		RuntimeObject * L_2 = ___data0;
		U3CU3Ef__AnonymousType0_4_tBCC04185AED1C1C2CFAD99475825F0A10CB5F9F6 * L_3 = (U3CU3Ef__AnonymousType0_4_tBCC04185AED1C1C2CFAD99475825F0A10CB5F9F6 *)il2cpp_codegen_object_new(U3CU3Ef__AnonymousType0_4_tBCC04185AED1C1C2CFAD99475825F0A10CB5F9F6_il2cpp_TypeInfo_var);
		U3CU3Ef__AnonymousType0_4__ctor_m3C493629DA20D23984AAEB32CBBAEEB67F0017BD(L_3, L_0, _stringLiteralA2F4AC9DD8E1FAC5257E5F7BA5EE1C7C7E5F7AB1, L_1, L_2, /*hidden argument*/U3CU3Ef__AnonymousType0_4__ctor_m3C493629DA20D23984AAEB32CBBAEEB67F0017BD_RuntimeMethod_var);
		JObject_tD2FCDDA48CACDBCB702BAF49B7C649084F6FDA34 * L_4;
		L_4 = JObject_FromObject_m084AF0C231311BFEBCA73D333450C8413CE0C426(L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		// UnityMessageManager.Instance.SendMessageToFlutter(UnityMessageManager.MessagePrefix + o.ToString());
		IL2CPP_RUNTIME_CLASS_INIT(SingletonMonoBehaviour_1_tCE345733DAFD7C69997F22704982E2372C4BFCDD_il2cpp_TypeInfo_var);
		UnityMessageManager_t4457746B746B34A7F9397BCF555A92EC97EE7831 * L_5;
		L_5 = SingletonMonoBehaviour_1_get_Instance_m2219FD0089F95EA990F58F8DC6D47F79E9FCECC2(/*hidden argument*/SingletonMonoBehaviour_1_get_Instance_m2219FD0089F95EA990F58F8DC6D47F79E9FCECC2_RuntimeMethod_var);
		JObject_tD2FCDDA48CACDBCB702BAF49B7C649084F6FDA34 * L_6 = V_0;
		NullCheck(L_6);
		String_t* L_7;
		L_7 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_6);
		String_t* L_8;
		L_8 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteralEA64C610DFA863C445196F98AE1C59C7E6F1B8EC, L_7, /*hidden argument*/NULL);
		NullCheck(L_5);
		UnityMessageManager_SendMessageToFlutter_mABF45FAA298107DDF065EC21C6925F3C7A4C3FA7(L_5, L_8, /*hidden argument*/NULL);
		// }
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
// System.Void MovementLimiter::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MovementLimiter_Start_m2153EC2F75B34D6BF50100D250952D7823C8F5E5 (MovementLimiter_t363580643587ECA5D4C7B835B4EE95E3DE75C698 * __this, const RuntimeMethod* method)
{
	{
		// oRotation = m_MoveTransform.rotation;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0 = __this->get_m_MoveTransform_4();
		NullCheck(L_0);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_1;
		L_1 = Transform_get_rotation_m4AA3858C00DF4C9614B80352558C4C37D08D2200(L_0, /*hidden argument*/NULL);
		__this->set_oRotation_5(L_1);
		// oPosition = m_MoveTransform.position;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_2 = __this->get_m_MoveTransform_4();
		NullCheck(L_2);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3;
		L_3 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_2, /*hidden argument*/NULL);
		__this->set_oPosition_6(L_3);
		// }
		return;
	}
}
// System.Void MovementLimiter::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MovementLimiter_Update_m65E4E4E88525EC76B39F01B75FA4B642F0703EC9 (MovementLimiter_t363580643587ECA5D4C7B835B4EE95E3DE75C698 * __this, const RuntimeMethod* method)
{
	{
		// m_MoveTransform.rotation = oRotation;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0 = __this->get_m_MoveTransform_4();
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_1 = __this->get_oRotation_5();
		NullCheck(L_0);
		Transform_set_rotation_m1B5F3D4CE984AB31254615C9C71B0E54978583B4(L_0, L_1, /*hidden argument*/NULL);
		// m_MoveTransform.position = new Vector3 (oPosition.x, m_MoveTransform.position.y, oPosition.z);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_2 = __this->get_m_MoveTransform_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_3 = __this->get_address_of_oPosition_6();
		float L_4 = L_3->get_x_2();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_5 = __this->get_m_MoveTransform_4();
		NullCheck(L_5);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6;
		L_6 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_5, /*hidden argument*/NULL);
		float L_7 = L_6.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_8 = __this->get_address_of_oPosition_6();
		float L_9 = L_8->get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10;
		memset((&L_10), 0, sizeof(L_10));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_10), L_4, L_7, L_9, /*hidden argument*/NULL);
		NullCheck(L_2);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_2, L_10, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void MovementLimiter::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MovementLimiter__ctor_m3FD9FFA9C7AB758ECCD12EB5805F398F4BB63E03 (MovementLimiter_t363580643587ECA5D4C7B835B4EE95E3DE75C698 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void NativeAPI::OnSceneLoaded(UnityEngine.SceneManagement.Scene,UnityEngine.SceneManagement.LoadSceneMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeAPI_OnSceneLoaded_m3664DB25D28063B8628236EA7338D05DEB78694A (Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  ___scene0, int32_t ___mode1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral40C776DB92DC51DDEF843FFC1AE1917B3769978A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral50C349861105941F8CC6A38A2B8CC315ED6CD653);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 2> __leave_targets;

IL_0000:
	try
	{ // begin try (depth: 1)
		// AndroidJavaClass jc = new AndroidJavaClass("com.xraph.plugin.flutter_unity_widget.UnityPlayerUtils");
		AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * L_0 = (AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 *)il2cpp_codegen_object_new(AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4_il2cpp_TypeInfo_var);
		AndroidJavaClass__ctor_mEFF9F51871F231955D97DABDE9AB4A6B4EDA5541(L_0, _stringLiteral40C776DB92DC51DDEF843FFC1AE1917B3769978A, /*hidden argument*/NULL);
		// jc.CallStatic("onUnitySceneLoaded", scene.name, scene.buildIndex, scene.isLoaded, scene.IsValid());
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_1 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)4);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_2 = L_1;
		String_t* L_3;
		L_3 = Scene_get_name_m38F195D7CA6417FED310C23E4D8E86150C7835B8((Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE *)(&___scene0), /*hidden argument*/NULL);
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_3);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_4 = L_2;
		int32_t L_5;
		L_5 = Scene_get_buildIndex_mE32CE766EA0790E4636A351BA353A7FD71A11DA4((Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE *)(&___scene0), /*hidden argument*/NULL);
		int32_t L_6 = L_5;
		RuntimeObject * L_7 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_6);
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_7);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_7);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_8 = L_4;
		bool L_9;
		L_9 = Scene_get_isLoaded_m040A3D274F4FAD21BC95C6154FEA557ADE5C8E93((Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE *)(&___scene0), /*hidden argument*/NULL);
		bool L_10 = L_9;
		RuntimeObject * L_11 = Box(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var, &L_10);
		NullCheck(L_8);
		ArrayElementTypeCheck (L_8, L_11);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)L_11);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_12 = L_8;
		bool L_13;
		L_13 = Scene_IsValid_mC8AE24868A5020050F6A544ECAF5465C2CFB7CED((Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE *)(&___scene0), /*hidden argument*/NULL);
		bool L_14 = L_13;
		RuntimeObject * L_15 = Box(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var, &L_14);
		NullCheck(L_12);
		ArrayElementTypeCheck (L_12, L_15);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_15);
		NullCheck(L_0);
		AndroidJavaObject_CallStatic_m5A97968767E1603C021023809276443ED24577FB(L_0, _stringLiteral50C349861105941F8CC6A38A2B8CC315ED6CD653, L_12, /*hidden argument*/NULL);
		// }
		goto IL_005f;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0053;
		}
		throw e;
	}

CATCH_0053:
	{ // begin catch(System.Exception)
		// Debug.Log(e.Message);
		NullCheck(((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *)));
		String_t* L_16;
		L_16 = VirtFuncInvoker0< String_t* >::Invoke(5 /* System.String System.Exception::get_Message() */, ((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *)));
		IL2CPP_RUNTIME_CLASS_INIT(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var)));
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_16, /*hidden argument*/NULL);
		// }
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_005f;
	} // end catch (depth: 1)

IL_005f:
	{
		// }
		return;
	}
}
// System.Void NativeAPI::SendMessageToFlutter(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeAPI_SendMessageToFlutter_m589A00F5AE6DABEECC576A5E6BC709850513AE9B (String_t* ___message0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral40C776DB92DC51DDEF843FFC1AE1917B3769978A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFD518666B4F52417752311AE996CEA3A91ECF532);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 2> __leave_targets;

IL_0000:
	try
	{ // begin try (depth: 1)
		// AndroidJavaClass jc = new AndroidJavaClass("com.xraph.plugin.flutter_unity_widget.UnityPlayerUtils");
		AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * L_0 = (AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 *)il2cpp_codegen_object_new(AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4_il2cpp_TypeInfo_var);
		AndroidJavaClass__ctor_mEFF9F51871F231955D97DABDE9AB4A6B4EDA5541(L_0, _stringLiteral40C776DB92DC51DDEF843FFC1AE1917B3769978A, /*hidden argument*/NULL);
		// jc.CallStatic("onUnityMessage", message);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_1 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_2 = L_1;
		String_t* L_3 = ___message0;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_3);
		NullCheck(L_0);
		AndroidJavaObject_CallStatic_m5A97968767E1603C021023809276443ED24577FB(L_0, _stringLiteralFD518666B4F52417752311AE996CEA3A91ECF532, L_2, /*hidden argument*/NULL);
		// }
		goto IL_002c;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0020;
		}
		throw e;
	}

CATCH_0020:
	{ // begin catch(System.Exception)
		// Debug.Log(e.Message);
		NullCheck(((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *)));
		String_t* L_4;
		L_4 = VirtFuncInvoker0< String_t* >::Invoke(5 /* System.String System.Exception::get_Message() */, ((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *)));
		IL2CPP_RUNTIME_CLASS_INIT(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var)));
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_4, /*hidden argument*/NULL);
		// }
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_002c;
	} // end catch (depth: 1)

IL_002c:
	{
		// }
		return;
	}
}
// System.Void NativeAPI::ShowHostMainWindow()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeAPI_ShowHostMainWindow_mF11F3AE0A8A16104D2546D5225A967CAEF20F494 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_GetStatic_TisAndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_mC84C97A7EC20ED712D21107C9FA32E0785021153_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5F629B25BE4F48980C1EDD2471AE2A239A980D35);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7872402A59E9175DECE8237B6F756EA72FC3091E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAA236E134566FACF682D16CDBC3E2C735E0EF19D);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 2> __leave_targets;

IL_0000:
	try
	{ // begin try (depth: 1)
		// var jc = new AndroidJavaClass("com.xraph.plugin.flutter_unity_widget.OverrideUnityActivity");
		AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * L_0 = (AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 *)il2cpp_codegen_object_new(AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4_il2cpp_TypeInfo_var);
		AndroidJavaClass__ctor_mEFF9F51871F231955D97DABDE9AB4A6B4EDA5541(L_0, _stringLiteral7872402A59E9175DECE8237B6F756EA72FC3091E, /*hidden argument*/NULL);
		// var overrideActivity = jc.GetStatic<AndroidJavaObject>("instance");
		NullCheck(L_0);
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_1;
		L_1 = AndroidJavaObject_GetStatic_TisAndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_mC84C97A7EC20ED712D21107C9FA32E0785021153(L_0, _stringLiteralAA236E134566FACF682D16CDBC3E2C735E0EF19D, /*hidden argument*/AndroidJavaObject_GetStatic_TisAndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_mC84C97A7EC20ED712D21107C9FA32E0785021153_RuntimeMethod_var);
		// overrideActivity.Call("showMainActivity");
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_2;
		L_2 = Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_inline(/*hidden argument*/Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_RuntimeMethod_var);
		NullCheck(L_1);
		AndroidJavaObject_Call_mBB226DA52CE5A2FCD9A2D42BC7FB4272E094B76D(L_1, _stringLiteral5F629B25BE4F48980C1EDD2471AE2A239A980D35, L_2, /*hidden argument*/NULL);
		// }
		goto IL_0031;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0025;
		}
		throw e;
	}

CATCH_0025:
	{ // begin catch(System.Exception)
		// Debug.Log(e.Message);
		NullCheck(((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *)));
		String_t* L_3;
		L_3 = VirtFuncInvoker0< String_t* >::Invoke(5 /* System.String System.Exception::get_Message() */, ((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *)));
		IL2CPP_RUNTIME_CLASS_INIT(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var)));
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_3, /*hidden argument*/NULL);
		// }
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0031;
	} // end catch (depth: 1)

IL_0031:
	{
		// }
		return;
	}
}
// System.Void NativeAPI::UnloadMainWindow()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeAPI_UnloadMainWindow_mC078E094545CA94E5BAF399E7C8B75E39274A855 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_GetStatic_TisAndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_mC84C97A7EC20ED712D21107C9FA32E0785021153_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7872402A59E9175DECE8237B6F756EA72FC3091E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAA236E134566FACF682D16CDBC3E2C735E0EF19D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB8833A6A8DBC0A8BD7545AE8C434405E77ABF1C2);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 2> __leave_targets;

IL_0000:
	try
	{ // begin try (depth: 1)
		// AndroidJavaClass jc = new AndroidJavaClass("com.xraph.plugin.flutter_unity_widget.OverrideUnityActivity");
		AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * L_0 = (AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 *)il2cpp_codegen_object_new(AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4_il2cpp_TypeInfo_var);
		AndroidJavaClass__ctor_mEFF9F51871F231955D97DABDE9AB4A6B4EDA5541(L_0, _stringLiteral7872402A59E9175DECE8237B6F756EA72FC3091E, /*hidden argument*/NULL);
		// AndroidJavaObject overrideActivity = jc.GetStatic<AndroidJavaObject>("instance");
		NullCheck(L_0);
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_1;
		L_1 = AndroidJavaObject_GetStatic_TisAndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_mC84C97A7EC20ED712D21107C9FA32E0785021153(L_0, _stringLiteralAA236E134566FACF682D16CDBC3E2C735E0EF19D, /*hidden argument*/AndroidJavaObject_GetStatic_TisAndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_mC84C97A7EC20ED712D21107C9FA32E0785021153_RuntimeMethod_var);
		// overrideActivity.Call("unloadPlayer");
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_2;
		L_2 = Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_inline(/*hidden argument*/Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_RuntimeMethod_var);
		NullCheck(L_1);
		AndroidJavaObject_Call_mBB226DA52CE5A2FCD9A2D42BC7FB4272E094B76D(L_1, _stringLiteralB8833A6A8DBC0A8BD7545AE8C434405E77ABF1C2, L_2, /*hidden argument*/NULL);
		// }
		goto IL_0031;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0025;
		}
		throw e;
	}

CATCH_0025:
	{ // begin catch(System.Exception)
		// Debug.Log(e.Message);
		NullCheck(((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *)));
		String_t* L_3;
		L_3 = VirtFuncInvoker0< String_t* >::Invoke(5 /* System.String System.Exception::get_Message() */, ((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *)));
		IL2CPP_RUNTIME_CLASS_INIT(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var)));
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_3, /*hidden argument*/NULL);
		// }
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0031;
	} // end catch (depth: 1)

IL_0031:
	{
		// }
		return;
	}
}
// System.Void NativeAPI::QuitUnityWindow()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeAPI_QuitUnityWindow_m53C753446251C8F1D17D43FAC31BFC8DAEB12607 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_GetStatic_TisAndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_mC84C97A7EC20ED712D21107C9FA32E0785021153_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7872402A59E9175DECE8237B6F756EA72FC3091E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAA236E134566FACF682D16CDBC3E2C735E0EF19D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB77494B17C8DA599A6494EFFB7F17D9519775753);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 2> __leave_targets;

IL_0000:
	try
	{ // begin try (depth: 1)
		// AndroidJavaClass jc = new AndroidJavaClass("com.xraph.plugin.flutter_unity_widget.OverrideUnityActivity");
		AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * L_0 = (AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 *)il2cpp_codegen_object_new(AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4_il2cpp_TypeInfo_var);
		AndroidJavaClass__ctor_mEFF9F51871F231955D97DABDE9AB4A6B4EDA5541(L_0, _stringLiteral7872402A59E9175DECE8237B6F756EA72FC3091E, /*hidden argument*/NULL);
		// AndroidJavaObject overrideActivity = jc.GetStatic<AndroidJavaObject>("instance");
		NullCheck(L_0);
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_1;
		L_1 = AndroidJavaObject_GetStatic_TisAndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_mC84C97A7EC20ED712D21107C9FA32E0785021153(L_0, _stringLiteralAA236E134566FACF682D16CDBC3E2C735E0EF19D, /*hidden argument*/AndroidJavaObject_GetStatic_TisAndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_mC84C97A7EC20ED712D21107C9FA32E0785021153_RuntimeMethod_var);
		// overrideActivity.Call("quitPlayer");
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_2;
		L_2 = Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_inline(/*hidden argument*/Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_RuntimeMethod_var);
		NullCheck(L_1);
		AndroidJavaObject_Call_mBB226DA52CE5A2FCD9A2D42BC7FB4272E094B76D(L_1, _stringLiteralB77494B17C8DA599A6494EFFB7F17D9519775753, L_2, /*hidden argument*/NULL);
		// }
		goto IL_0031;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0025;
		}
		throw e;
	}

CATCH_0025:
	{ // begin catch(System.Exception)
		// Debug.Log(e.Message);
		NullCheck(((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *)));
		String_t* L_3;
		L_3 = VirtFuncInvoker0< String_t* >::Invoke(5 /* System.String System.Exception::get_Message() */, ((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *)));
		IL2CPP_RUNTIME_CLASS_INIT(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var)));
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_3, /*hidden argument*/NULL);
		// }
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0031;
	} // end catch (depth: 1)

IL_0031:
	{
		// }
		return;
	}
}
// System.Void NativeAPI::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeAPI__ctor_m078F288AC03B02E77E2017CB3EBD3E42B9FED0E4 (NativeAPI_tCF1B87942D24DC16E49B82348757D460312951F7 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
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
// System.Void PlaneMeshDeformer::AddDeformingForce(UnityEngine.Vector3,System.Single,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlaneMeshDeformer_AddDeformingForce_m85DF7D59EA65CA2C257464DBE68C37751C2071D8 (PlaneMeshDeformer_t53323E8C3770AE9A26910AFC953BEB86C9AD7C9A * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___point0, float ___force1, bool ___direction2, const RuntimeMethod* method)
{
	{
		// this.direction = direction;
		bool L_0 = ___direction2;
		__this->set_direction_10(L_0);
		// AddDeformingForce(point, force);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1 = ___point0;
		float L_2 = ___force1;
		MeshDeformer_AddDeformingForce_mE4BDC03DC7322C72885087E924D25CA464FEA9F0(__this, L_1, L_2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void PlaneMeshDeformer::AddForceToVertex(System.Int32,UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlaneMeshDeformer_AddForceToVertex_m3ADEDEC745546E2D102EEC22A12720E474402593 (PlaneMeshDeformer_t53323E8C3770AE9A26910AFC953BEB86C9AD7C9A * __this, int32_t ___i0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___point1, float ___force2, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	float V_1 = 0.0f;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_2;
	memset((&V_2), 0, sizeof(V_2));
	float G_B14_0 = 0.0f;
	float G_B14_1 = 0.0f;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * G_B14_2 = NULL;
	float G_B13_0 = 0.0f;
	float G_B13_1 = 0.0f;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * G_B13_2 = NULL;
	int32_t G_B15_0 = 0;
	float G_B15_1 = 0.0f;
	float G_B15_2 = 0.0f;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * G_B15_3 = NULL;
	{
		// if (lockXEdges && (originalVertices [i].x == -0.5f ||
		//     originalVertices [i].x == 0.5f)) {
		bool L_0 = ((MeshDeformer_t552F11EC8166EE3DED6958E9B4F0050853FB31F8 *)__this)->get_lockXEdges_7();
		if (!L_0)
		{
			goto IL_0039;
		}
	}
	{
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_1 = ((MeshDeformer_t552F11EC8166EE3DED6958E9B4F0050853FB31F8 *)__this)->get_originalVertices_5();
		int32_t L_2 = ___i0;
		NullCheck(L_1);
		float L_3 = ((L_1)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_2)))->get_x_2();
		if ((((float)L_3) == ((float)(-0.5f))))
		{
			goto IL_0038;
		}
	}
	{
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_4 = ((MeshDeformer_t552F11EC8166EE3DED6958E9B4F0050853FB31F8 *)__this)->get_originalVertices_5();
		int32_t L_5 = ___i0;
		NullCheck(L_4);
		float L_6 = ((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)))->get_x_2();
		if ((!(((float)L_6) == ((float)(0.5f)))))
		{
			goto IL_0039;
		}
	}

IL_0038:
	{
		// return;
		return;
	}

IL_0039:
	{
		// if (lockYEdges && (originalVertices [i].y == -0.5f ||
		//     originalVertices [i].y == 0.5f)) {
		bool L_7 = ((MeshDeformer_t552F11EC8166EE3DED6958E9B4F0050853FB31F8 *)__this)->get_lockYEdges_8();
		if (!L_7)
		{
			goto IL_0072;
		}
	}
	{
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_8 = ((MeshDeformer_t552F11EC8166EE3DED6958E9B4F0050853FB31F8 *)__this)->get_originalVertices_5();
		int32_t L_9 = ___i0;
		NullCheck(L_8);
		float L_10 = ((L_8)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_9)))->get_y_3();
		if ((((float)L_10) == ((float)(-0.5f))))
		{
			goto IL_0071;
		}
	}
	{
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_11 = ((MeshDeformer_t552F11EC8166EE3DED6958E9B4F0050853FB31F8 *)__this)->get_originalVertices_5();
		int32_t L_12 = ___i0;
		NullCheck(L_11);
		float L_13 = ((L_11)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_12)))->get_y_3();
		if ((!(((float)L_13) == ((float)(0.5f)))))
		{
			goto IL_0072;
		}
	}

IL_0071:
	{
		// return;
		return;
	}

IL_0072:
	{
		// if (lockZEdges && (originalVertices [i].z == -0.5f ||
		//     originalVertices [i].z == 0.5f)) {
		bool L_14 = ((MeshDeformer_t552F11EC8166EE3DED6958E9B4F0050853FB31F8 *)__this)->get_lockZEdges_9();
		if (!L_14)
		{
			goto IL_00ab;
		}
	}
	{
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_15 = ((MeshDeformer_t552F11EC8166EE3DED6958E9B4F0050853FB31F8 *)__this)->get_originalVertices_5();
		int32_t L_16 = ___i0;
		NullCheck(L_15);
		float L_17 = ((L_15)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_16)))->get_z_4();
		if ((((float)L_17) == ((float)(-0.5f))))
		{
			goto IL_00aa;
		}
	}
	{
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_18 = ((MeshDeformer_t552F11EC8166EE3DED6958E9B4F0050853FB31F8 *)__this)->get_originalVertices_5();
		int32_t L_19 = ___i0;
		NullCheck(L_18);
		float L_20 = ((L_18)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_19)))->get_z_4();
		if ((!(((float)L_20) == ((float)(0.5f)))))
		{
			goto IL_00ab;
		}
	}

IL_00aa:
	{
		// return;
		return;
	}

IL_00ab:
	{
		// Vector3 pointToVertex = originalVertices[i] - point;
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_21 = ((MeshDeformer_t552F11EC8166EE3DED6958E9B4F0050853FB31F8 *)__this)->get_originalVertices_5();
		int32_t L_22 = ___i0;
		NullCheck(L_21);
		int32_t L_23 = L_22;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_24 = (L_21)->GetAt(static_cast<il2cpp_array_size_t>(L_23));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_25 = ___point1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_26;
		L_26 = Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline(L_24, L_25, /*hidden argument*/NULL);
		V_0 = L_26;
		// pointToVertex = new Vector3(
		//     pointToVertex.x * transform.localScale.x,
		//     pointToVertex.y * transform.localScale.y,
		//     pointToVertex.z * transform.localScale.z);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_27 = V_0;
		float L_28 = L_27.get_x_2();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_29;
		L_29 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_29);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_30;
		L_30 = Transform_get_localScale_mD9DF6CA81108C2A6002B5EA2BE25A6CD2723D046(L_29, /*hidden argument*/NULL);
		float L_31 = L_30.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_32 = V_0;
		float L_33 = L_32.get_y_3();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_34;
		L_34 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_34);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_35;
		L_35 = Transform_get_localScale_mD9DF6CA81108C2A6002B5EA2BE25A6CD2723D046(L_34, /*hidden argument*/NULL);
		float L_36 = L_35.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_37 = V_0;
		float L_38 = L_37.get_z_4();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_39;
		L_39 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_39);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_40;
		L_40 = Transform_get_localScale_mD9DF6CA81108C2A6002B5EA2BE25A6CD2723D046(L_39, /*hidden argument*/NULL);
		float L_41 = L_40.get_z_4();
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&V_0), ((float)il2cpp_codegen_multiply((float)L_28, (float)L_31)), ((float)il2cpp_codegen_multiply((float)L_33, (float)L_36)), ((float)il2cpp_codegen_multiply((float)L_38, (float)L_41)), /*hidden argument*/NULL);
		// float attenuatedForce = Mathf.Max(Mathf.Abs(force) - pointToVertex.magnitude, 0.2f);
		float L_42 = ___force2;
		float L_43;
		L_43 = fabsf(L_42);
		float L_44;
		L_44 = Vector3_get_magnitude_mDDD40612220D8104E77E993E18A101A69A944991((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&V_0), /*hidden argument*/NULL);
		float L_45;
		L_45 = Mathf_Max_m4CE510E1F1013B33275F01543731A51A58BA0775(((float)il2cpp_codegen_subtract((float)L_43, (float)L_44)), (0.200000003f), /*hidden argument*/NULL);
		V_1 = L_45;
		// Vector3 transformForce = new Vector3(0, 0, (this.direction ? -1 : 1) * attenuatedForce / transform.localScale.z);
		bool L_46 = __this->get_direction_10();
		G_B13_0 = (0.0f);
		G_B13_1 = (0.0f);
		G_B13_2 = (&V_2);
		if (L_46)
		{
			G_B14_0 = (0.0f);
			G_B14_1 = (0.0f);
			G_B14_2 = (&V_2);
			goto IL_013a;
		}
	}
	{
		G_B15_0 = 1;
		G_B15_1 = G_B13_0;
		G_B15_2 = G_B13_1;
		G_B15_3 = G_B13_2;
		goto IL_013b;
	}

IL_013a:
	{
		G_B15_0 = (-1);
		G_B15_1 = G_B14_0;
		G_B15_2 = G_B14_1;
		G_B15_3 = G_B14_2;
	}

IL_013b:
	{
		float L_47 = V_1;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_48;
		L_48 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_48);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_49;
		L_49 = Transform_get_localScale_mD9DF6CA81108C2A6002B5EA2BE25A6CD2723D046(L_48, /*hidden argument*/NULL);
		float L_50 = L_49.get_z_4();
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)G_B15_3, G_B15_2, G_B15_1, ((float)((float)((float)il2cpp_codegen_multiply((float)((float)((float)G_B15_0)), (float)L_47))/(float)L_50)), /*hidden argument*/NULL);
		// displacedVertices[i] = originalVertices[i] + (transformForce);
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_51 = ((MeshDeformer_t552F11EC8166EE3DED6958E9B4F0050853FB31F8 *)__this)->get_displacedVertices_6();
		int32_t L_52 = ___i0;
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_53 = ((MeshDeformer_t552F11EC8166EE3DED6958E9B4F0050853FB31F8 *)__this)->get_originalVertices_5();
		int32_t L_54 = ___i0;
		NullCheck(L_53);
		int32_t L_55 = L_54;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_56 = (L_53)->GetAt(static_cast<il2cpp_array_size_t>(L_55));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_57 = V_2;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_58;
		L_58 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_56, L_57, /*hidden argument*/NULL);
		NullCheck(L_51);
		(L_51)->SetAt(static_cast<il2cpp_array_size_t>(L_52), (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )L_58);
		// }
		return;
	}
}
// System.Void PlaneMeshDeformer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlaneMeshDeformer__ctor_m4088528F9E5FE920083B47D9AC3575D6979221DF (PlaneMeshDeformer_t53323E8C3770AE9A26910AFC953BEB86C9AD7C9A * __this, const RuntimeMethod* method)
{
	{
		MeshDeformer__ctor_m24A0F5BA63C2DAF2FD7AA96472D8D2426ABB5212(__this, /*hidden argument*/NULL);
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
// System.Boolean Portal::get_dimensionSwitched()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Portal_get_dimensionSwitched_m3D6982DB8172F73BAC01CF743D8511BF6EAA01E3 (Portal_t355BC086AE7B4F5E476064C8805CA0830E0CA48E * __this, const RuntimeMethod* method)
{
	{
		// public bool dimensionSwitched { get; private set; }
		bool L_0 = __this->get_U3CdimensionSwitchedU3Ek__BackingField_12();
		return L_0;
	}
}
// System.Void Portal::set_dimensionSwitched(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Portal_set_dimensionSwitched_m9498E0389F4609BD3333FBC5D6DB172660C53C94 (Portal_t355BC086AE7B4F5E476064C8805CA0830E0CA48E * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool dimensionSwitched { get; private set; }
		bool L_0 = ___value0;
		__this->set_U3CdimensionSwitchedU3Ek__BackingField_12(L_0);
		return;
	}
}
// System.Void Portal::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Portal_Awake_m2727ACA18914B98B13A20BC9B13FF744C2791C08 (Portal_t355BC086AE7B4F5E476064C8805CA0830E0CA48E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2A635A3A007DFDDEB6455B1D2A6781BF8F7A8169);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7EA3FB78E01344733897241491196E66ECC12B9B);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log("This build is set up to run without VR or ARKit. To enable VR / AR support please edit your settings in Window -> Portal State Manager.");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteral7EA3FB78E01344733897241491196E66ECC12B9B, /*hidden argument*/NULL);
		// Shader.SetGlobalInt("OpenVRRender", 0);
		Shader_SetGlobalInt_mF4533D79C99D03B3D14C1DE84D074938C1403B26(_stringLiteral2A635A3A007DFDDEB6455B1D2A6781BF8F7A8169, 0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Portal::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Portal_Start_m1382BB42CECEC707B6014A9909F4B8CE02179357 (Portal_t355BC086AE7B4F5E476064C8805CA0830E0CA48E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisMainCameraLayerManager_tB21B56BD4156E63941A865F34D94B01F22043250_mDBB64AB174E6AF156ED9AF444EC239D53E0B0813_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisMeshDeformer_t552F11EC8166EE3DED6958E9B4F0050853FB31F8_mB0560E6ABD7E285C74F1A9D629D2B400D9A60FFF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisMeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A_m4E31C5D3D0490AEE405B54BE9F61802EA425B9DC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisMainCameraLayerManager_tB21B56BD4156E63941A865F34D94B01F22043250_m58A2142CCC61F8A08FA25B3E5316E6B4929F5972_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m75DD7927F36D7B656004563A4BD0528CFDFA2988_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// meshRenderer = GetComponent<Renderer> ();
		Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * L_0;
		L_0 = Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019(__this, /*hidden argument*/Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019_RuntimeMethod_var);
		__this->set_meshRenderer_18(L_0);
		// meshFilter = GetComponent<MeshFilter> ();
		MeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A * L_1;
		L_1 = Component_GetComponent_TisMeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A_m4E31C5D3D0490AEE405B54BE9F61802EA425B9DC(__this, /*hidden argument*/Component_GetComponent_TisMeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A_m4E31C5D3D0490AEE405B54BE9F61802EA425B9DC_RuntimeMethod_var);
		__this->set_meshFilter_19(L_1);
		// meshDeformer = GetComponent<MeshDeformer> ();
		MeshDeformer_t552F11EC8166EE3DED6958E9B4F0050853FB31F8 * L_2;
		L_2 = Component_GetComponent_TisMeshDeformer_t552F11EC8166EE3DED6958E9B4F0050853FB31F8_mB0560E6ABD7E285C74F1A9D629D2B400D9A60FFF(__this, /*hidden argument*/Component_GetComponent_TisMeshDeformer_t552F11EC8166EE3DED6958E9B4F0050853FB31F8_mB0560E6ABD7E285C74F1A9D629D2B400D9A60FFF_RuntimeMethod_var);
		__this->set_meshDeformer_20(L_2);
		// this.mainCamera = Camera.main;
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_3;
		L_3 = Camera_get_main_mC337C621B91591CEF89504C97EF64D717C12871C(/*hidden argument*/NULL);
		__this->set_mainCamera_14(L_3);
		// this.gameObject.layer = FromDimension ().layer;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_4;
		L_4 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		Dimension_t28D074E7D31C414382BEB891CF77CF6345E04C34 * L_5;
		L_5 = Portal_FromDimension_mB4D6D1693AD5BA5303071B6E1A6FBC649757F557(__this, /*hidden argument*/NULL);
		NullCheck(L_5);
		int32_t L_6 = L_5->get_layer_5();
		NullCheck(L_4);
		GameObject_set_layer_m2F946916ACB41A59C46346F5243F2BAC235A36A6(L_4, L_6, /*hidden argument*/NULL);
		// dimension1.connectedPortals.Add (this);
		Dimension_t28D074E7D31C414382BEB891CF77CF6345E04C34 * L_7 = __this->get_dimension1_4();
		NullCheck(L_7);
		List_1_tF98B6D846565344249C79E895B9E3BF385EA519E * L_8 = L_7->get_connectedPortals_8();
		NullCheck(L_8);
		List_1_Add_m75DD7927F36D7B656004563A4BD0528CFDFA2988(L_8, __this, /*hidden argument*/List_1_Add_m75DD7927F36D7B656004563A4BD0528CFDFA2988_RuntimeMethod_var);
		// dimension2.connectedPortals.Add (this);
		Dimension_t28D074E7D31C414382BEB891CF77CF6345E04C34 * L_9 = __this->get_dimension2_5();
		NullCheck(L_9);
		List_1_tF98B6D846565344249C79E895B9E3BF385EA519E * L_10 = L_9->get_connectedPortals_8();
		NullCheck(L_10);
		List_1_Add_m75DD7927F36D7B656004563A4BD0528CFDFA2988(L_10, __this, /*hidden argument*/List_1_Add_m75DD7927F36D7B656004563A4BD0528CFDFA2988_RuntimeMethod_var);
		// dimension1.showChildrenWithTag(this.ignoreRigidbodyTag);
		Dimension_t28D074E7D31C414382BEB891CF77CF6345E04C34 * L_11 = __this->get_dimension1_4();
		String_t* L_12 = __this->get_ignoreRigidbodyTag_9();
		NullCheck(L_11);
		Dimension_showChildrenWithTag_mE6650FA8CB39315D9A1F40AEB3713530FC864C95(L_11, L_12, /*hidden argument*/NULL);
		// dimension2.showChildrenWithTag(this.ignoreRigidbodyTag);
		Dimension_t28D074E7D31C414382BEB891CF77CF6345E04C34 * L_13 = __this->get_dimension2_5();
		String_t* L_14 = __this->get_ignoreRigidbodyTag_9();
		NullCheck(L_13);
		Dimension_showChildrenWithTag_mE6650FA8CB39315D9A1F40AEB3713530FC864C95(L_13, L_14, /*hidden argument*/NULL);
		// minimumDeformRangeSquared = maximumDeformRange * maximumDeformRange;
		float L_15 = __this->get_maximumDeformRange_7();
		float L_16 = __this->get_maximumDeformRange_7();
		__this->set_minimumDeformRangeSquared_16(((float)il2cpp_codegen_multiply((float)L_15, (float)L_16)));
		// Vector3 convertedPoint = transform.InverseTransformPoint (mainCamera.transform.position);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_17;
		L_17 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_18 = __this->get_mainCamera_14();
		NullCheck(L_18);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_19;
		L_19 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_18, /*hidden argument*/NULL);
		NullCheck(L_19);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_20;
		L_20 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_19, /*hidden argument*/NULL);
		NullCheck(L_17);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_21;
		L_21 = Transform_InverseTransformPoint_m476ABC8F3F14824D7D82FE2C54CEE5A151A669B8(L_17, L_20, /*hidden argument*/NULL);
		V_0 = L_21;
		// triggerZDirection = (convertedPoint.z > 0);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_22 = V_0;
		float L_23 = L_22.get_z_4();
		__this->set_triggerZDirection_21((bool)((((float)L_23) > ((float)(0.0f)))? 1 : 0));
		// if (!mainCamera.GetComponent<MainCameraLayerManager> ()) {
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_24 = __this->get_mainCamera_14();
		NullCheck(L_24);
		MainCameraLayerManager_tB21B56BD4156E63941A865F34D94B01F22043250 * L_25;
		L_25 = Component_GetComponent_TisMainCameraLayerManager_tB21B56BD4156E63941A865F34D94B01F22043250_mDBB64AB174E6AF156ED9AF444EC239D53E0B0813(L_24, /*hidden argument*/Component_GetComponent_TisMainCameraLayerManager_tB21B56BD4156E63941A865F34D94B01F22043250_mDBB64AB174E6AF156ED9AF444EC239D53E0B0813_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_26;
		L_26 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499(L_25, /*hidden argument*/NULL);
		if (L_26)
		{
			goto IL_00ee;
		}
	}
	{
		// mainCamera.gameObject.AddComponent<MainCameraLayerManager> ();  // this allows us to alter layers before / after a render!
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_27 = __this->get_mainCamera_14();
		NullCheck(L_27);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_28;
		L_28 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_27, /*hidden argument*/NULL);
		NullCheck(L_28);
		MainCameraLayerManager_tB21B56BD4156E63941A865F34D94B01F22043250 * L_29;
		L_29 = GameObject_AddComponent_TisMainCameraLayerManager_tB21B56BD4156E63941A865F34D94B01F22043250_m58A2142CCC61F8A08FA25B3E5316E6B4929F5972(L_28, /*hidden argument*/GameObject_AddComponent_TisMainCameraLayerManager_tB21B56BD4156E63941A865F34D94B01F22043250_m58A2142CCC61F8A08FA25B3E5316E6B4929F5972_RuntimeMethod_var);
	}

IL_00ee:
	{
		// }
		return;
	}
}
// System.Void Portal::OnDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Portal_OnDestroy_mEEF5EF1E1A56CF28D71A45B39149C68B66F2ABD7 (Portal_t355BC086AE7B4F5E476064C8805CA0830E0CA48E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (renderCam != null)
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_0 = __this->get_renderCam_23();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0025;
		}
	}
	{
		// Destroy(renderCam.gameObject);
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_2 = __this->get_renderCam_23();
		NullCheck(L_2);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_3;
		L_3 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_2, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(L_3, /*hidden argument*/NULL);
		// renderCam = null;
		__this->set_renderCam_23((Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C *)NULL);
	}

IL_0025:
	{
		// if (leftTexture != null) {
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_4 = __this->get_leftTexture_25();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_4, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_003e;
		}
	}
	{
		// Destroy (leftTexture);
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_6 = __this->get_leftTexture_25();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(L_6, /*hidden argument*/NULL);
	}

IL_003e:
	{
		// }
		return;
	}
}
// System.Void Portal::SwitchDimensions()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Portal_SwitchDimensions_m4836758D0E38C2CE972EFFCB6CC8B6C12A7A84E8 (Portal_t355BC086AE7B4F5E476064C8805CA0830E0CA48E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// DimensionChanger.SwitchCameraRender (this.mainCamera, FromDimension ().layer, ToDimension ().layer, ToDimension ().customSkybox);
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_0 = __this->get_mainCamera_14();
		Dimension_t28D074E7D31C414382BEB891CF77CF6345E04C34 * L_1;
		L_1 = Portal_FromDimension_mB4D6D1693AD5BA5303071B6E1A6FBC649757F557(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		int32_t L_2 = L_1->get_layer_5();
		Dimension_t28D074E7D31C414382BEB891CF77CF6345E04C34 * L_3;
		L_3 = Portal_ToDimension_mD33B18BBDBEDE671CC5737BD70C3CFD5A1738BA3(__this, /*hidden argument*/NULL);
		NullCheck(L_3);
		int32_t L_4 = L_3->get_layer_5();
		Dimension_t28D074E7D31C414382BEB891CF77CF6345E04C34 * L_5;
		L_5 = Portal_ToDimension_mD33B18BBDBEDE671CC5737BD70C3CFD5A1738BA3(__this, /*hidden argument*/NULL);
		NullCheck(L_5);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_6 = L_5->get_customSkybox_4();
		DimensionChanger_SwitchCameraRender_mB38314B55E216C56BF10AAE2B036FB0A9A099139(L_0, L_2, L_4, L_6, /*hidden argument*/NULL);
		// DimensionChanger.SwitchDimensions (this.mainCamera.gameObject, FromDimension (), ToDimension ());
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_7 = __this->get_mainCamera_14();
		NullCheck(L_7);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_8;
		L_8 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_7, /*hidden argument*/NULL);
		Dimension_t28D074E7D31C414382BEB891CF77CF6345E04C34 * L_9;
		L_9 = Portal_FromDimension_mB4D6D1693AD5BA5303071B6E1A6FBC649757F557(__this, /*hidden argument*/NULL);
		Dimension_t28D074E7D31C414382BEB891CF77CF6345E04C34 * L_10;
		L_10 = Portal_ToDimension_mD33B18BBDBEDE671CC5737BD70C3CFD5A1738BA3(__this, /*hidden argument*/NULL);
		DimensionChanger_SwitchDimensions_m3AC33B71D55EFC5A6BA9D66B09B3A870061F1385(L_8, L_9, L_10, /*hidden argument*/NULL);
		// if (this.rightCamera != null) {
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_11 = __this->get_rightCamera_15();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_12;
		L_12 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_11, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_12)
		{
			goto IL_009e;
		}
	}
	{
		// DimensionChanger.SwitchCameraRender(this.rightCamera, FromDimension().layer, ToDimension().layer, ToDimension().customSkybox);
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_13 = __this->get_rightCamera_15();
		Dimension_t28D074E7D31C414382BEB891CF77CF6345E04C34 * L_14;
		L_14 = Portal_FromDimension_mB4D6D1693AD5BA5303071B6E1A6FBC649757F557(__this, /*hidden argument*/NULL);
		NullCheck(L_14);
		int32_t L_15 = L_14->get_layer_5();
		Dimension_t28D074E7D31C414382BEB891CF77CF6345E04C34 * L_16;
		L_16 = Portal_ToDimension_mD33B18BBDBEDE671CC5737BD70C3CFD5A1738BA3(__this, /*hidden argument*/NULL);
		NullCheck(L_16);
		int32_t L_17 = L_16->get_layer_5();
		Dimension_t28D074E7D31C414382BEB891CF77CF6345E04C34 * L_18;
		L_18 = Portal_ToDimension_mD33B18BBDBEDE671CC5737BD70C3CFD5A1738BA3(__this, /*hidden argument*/NULL);
		NullCheck(L_18);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_19 = L_18->get_customSkybox_4();
		DimensionChanger_SwitchCameraRender_mB38314B55E216C56BF10AAE2B036FB0A9A099139(L_13, L_15, L_17, L_19, /*hidden argument*/NULL);
		// DimensionChanger.SwitchDimensions(this.rightCamera.gameObject, FromDimension(), ToDimension());
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_20 = __this->get_rightCamera_15();
		NullCheck(L_20);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_21;
		L_21 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_20, /*hidden argument*/NULL);
		Dimension_t28D074E7D31C414382BEB891CF77CF6345E04C34 * L_22;
		L_22 = Portal_FromDimension_mB4D6D1693AD5BA5303071B6E1A6FBC649757F557(__this, /*hidden argument*/NULL);
		Dimension_t28D074E7D31C414382BEB891CF77CF6345E04C34 * L_23;
		L_23 = Portal_ToDimension_mD33B18BBDBEDE671CC5737BD70C3CFD5A1738BA3(__this, /*hidden argument*/NULL);
		DimensionChanger_SwitchDimensions_m3AC33B71D55EFC5A6BA9D66B09B3A870061F1385(L_21, L_22, L_23, /*hidden argument*/NULL);
	}

IL_009e:
	{
		// ToDimension ().SwitchConnectingPortals ();
		Dimension_t28D074E7D31C414382BEB891CF77CF6345E04C34 * L_24;
		L_24 = Portal_ToDimension_mD33B18BBDBEDE671CC5737BD70C3CFD5A1738BA3(__this, /*hidden argument*/NULL);
		NullCheck(L_24);
		Dimension_SwitchConnectingPortals_m4C629D85A4B5E5C0DEC8437B011D39D136BFBDB7(L_24, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Portal::OnWillRenderObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Portal_OnWillRenderObject_mA12726E079C02210849A5DA3C5C715753B5D9810 (Portal_t355BC086AE7B4F5E476064C8805CA0830E0CA48E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisCamera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_mE17146EF5B0D8E9F9D2D2D94567BF211AD00D320_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisSkybox_t8B0EA7C092363DBCCF0B51434F04E7EE661E28E0_m11DD63313E45B5E0C62FFCF04F0962CCF57D9FA2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisSkybox_t8B0EA7C092363DBCCF0B51434F04E7EE661E28E0_mED0AE40B29FD1E0A3FC3E2E24516D21F34399F4E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisCamera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_mE3C86755BA935C0F4BDABF7D1E338FA5247E4F49_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Skybox_t8B0EA7C092363DBCCF0B51434F04E7EE661E28E0_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3804D66ED4388200EADC17D3476C4A430A58A5BF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral41C20D570ED16CE125005A35B7DCABA2EA5F5539);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB59F0EFCC2B82196C428CFD6D80A08F8B47573FC);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* G_B9_0 = NULL;
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * G_B9_1 = NULL;
	String_t* G_B8_0 = NULL;
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * G_B8_1 = NULL;
	int32_t G_B10_0 = 0;
	String_t* G_B10_1 = NULL;
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * G_B10_2 = NULL;
	{
		// if (!leftTexture) {
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_0 = __this->get_leftTexture_25();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499(L_0, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_0142;
		}
	}
	{
		// Vector2 texSize = new Vector2 (mainCamera.pixelWidth, mainCamera.pixelHeight);
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_2 = __this->get_mainCamera_14();
		NullCheck(L_2);
		int32_t L_3;
		L_3 = Camera_get_pixelWidth_m7DC2EF816FA7AB52EEE991E054FC7B1F31982802(L_2, /*hidden argument*/NULL);
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_4 = __this->get_mainCamera_14();
		NullCheck(L_4);
		int32_t L_5;
		L_5 = Camera_get_pixelHeight_m7A18CEE2D95835EB95156E88D4D27EA018404201(L_4, /*hidden argument*/NULL);
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 *)(&V_0), ((float)((float)L_3)), ((float)((float)L_5)), /*hidden argument*/NULL);
		// leftTexture = new RenderTexture ((int)(texSize.x * renderQuality), (int)(texSize.y * renderQuality), 16);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_6 = V_0;
		float L_7 = L_6.get_x_0();
		float L_8 = __this->get_renderQuality_6();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_9 = V_0;
		float L_10 = L_9.get_y_1();
		float L_11 = __this->get_renderQuality_6();
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_12 = (RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 *)il2cpp_codegen_object_new(RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849_il2cpp_TypeInfo_var);
		RenderTexture__ctor_m5D8D36B284951F95A048C6B9ACA24FC7509564FF(L_12, ((int32_t)((int32_t)((float)il2cpp_codegen_multiply((float)L_7, (float)L_8)))), ((int32_t)((int32_t)((float)il2cpp_codegen_multiply((float)L_10, (float)L_11)))), ((int32_t)16), /*hidden argument*/NULL);
		__this->set_leftTexture_25(L_12);
		// renderCam = new GameObject (gameObject.name + " render camera", typeof(Camera), typeof(Skybox)).GetComponent<Camera> ();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_13;
		L_13 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		NullCheck(L_13);
		String_t* L_14;
		L_14 = Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB(L_13, /*hidden argument*/NULL);
		String_t* L_15;
		L_15 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(L_14, _stringLiteral41C20D570ED16CE125005A35B7DCABA2EA5F5539, /*hidden argument*/NULL);
		TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* L_16 = (TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755*)(TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755*)SZArrayNew(TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755_il2cpp_TypeInfo_var, (uint32_t)2);
		TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* L_17 = L_16;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_18 = { reinterpret_cast<intptr_t> (Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_19;
		L_19 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_18, /*hidden argument*/NULL);
		NullCheck(L_17);
		ArrayElementTypeCheck (L_17, L_19);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(0), (Type_t *)L_19);
		TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* L_20 = L_17;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_21 = { reinterpret_cast<intptr_t> (Skybox_t8B0EA7C092363DBCCF0B51434F04E7EE661E28E0_0_0_0_var) };
		Type_t * L_22;
		L_22 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_21, /*hidden argument*/NULL);
		NullCheck(L_20);
		ArrayElementTypeCheck (L_20, L_22);
		(L_20)->SetAt(static_cast<il2cpp_array_size_t>(1), (Type_t *)L_22);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_23 = (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)il2cpp_codegen_object_new(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_il2cpp_TypeInfo_var);
		GameObject__ctor_m9829583AE3BF1285861C580895202F760F3A82E8(L_23, L_15, L_20, /*hidden argument*/NULL);
		NullCheck(L_23);
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_24;
		L_24 = GameObject_GetComponent_TisCamera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_mE3C86755BA935C0F4BDABF7D1E338FA5247E4F49(L_23, /*hidden argument*/GameObject_GetComponent_TisCamera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_mE3C86755BA935C0F4BDABF7D1E338FA5247E4F49_RuntimeMethod_var);
		__this->set_renderCam_23(L_24);
		// SetupRenderCameraForAR ();  // this will get the camera ready to render for ARKit or ARCore
		Portal_SetupRenderCameraForAR_m48FF408FC286F9E2A7E140FCCE3FB22768F5B5F9(__this, /*hidden argument*/NULL);
		// renderCam.name = gameObject.name + " render camera";
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_25 = __this->get_renderCam_23();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_26;
		L_26 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		NullCheck(L_26);
		String_t* L_27;
		L_27 = Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB(L_26, /*hidden argument*/NULL);
		String_t* L_28;
		L_28 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(L_27, _stringLiteral41C20D570ED16CE125005A35B7DCABA2EA5F5539, /*hidden argument*/NULL);
		NullCheck(L_25);
		Object_set_name_m87C4006618ADB325ABE5439DF159E10DD8DD0781(L_25, L_28, /*hidden argument*/NULL);
		// renderCam.tag = "Untagged";
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_29 = __this->get_renderCam_23();
		NullCheck(L_29);
		Component_set_tag_m6E921BD86BD4A0B5114725FFF0CCD62F26BD7E81(L_29, _stringLiteralB59F0EFCC2B82196C428CFD6D80A08F8B47573FC, /*hidden argument*/NULL);
		// if (renderCam.GetComponent<Skybox> ()) {
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_30 = __this->get_renderCam_23();
		NullCheck(L_30);
		Skybox_t8B0EA7C092363DBCCF0B51434F04E7EE661E28E0 * L_31;
		L_31 = Component_GetComponent_TisSkybox_t8B0EA7C092363DBCCF0B51434F04E7EE661E28E0_m11DD63313E45B5E0C62FFCF04F0962CCF57D9FA2(L_30, /*hidden argument*/Component_GetComponent_TisSkybox_t8B0EA7C092363DBCCF0B51434F04E7EE661E28E0_m11DD63313E45B5E0C62FFCF04F0962CCF57D9FA2_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_32;
		L_32 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499(L_31, /*hidden argument*/NULL);
		if (!L_32)
		{
			goto IL_00f8;
		}
	}
	{
		// camSkybox = renderCam.GetComponent<Skybox> ();
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_33 = __this->get_renderCam_23();
		NullCheck(L_33);
		Skybox_t8B0EA7C092363DBCCF0B51434F04E7EE661E28E0 * L_34;
		L_34 = Component_GetComponent_TisSkybox_t8B0EA7C092363DBCCF0B51434F04E7EE661E28E0_m11DD63313E45B5E0C62FFCF04F0962CCF57D9FA2(L_33, /*hidden argument*/Component_GetComponent_TisSkybox_t8B0EA7C092363DBCCF0B51434F04E7EE661E28E0_m11DD63313E45B5E0C62FFCF04F0962CCF57D9FA2_RuntimeMethod_var);
		__this->set_camSkybox_24(L_34);
		// } else {
		goto IL_011a;
	}

IL_00f8:
	{
		// renderCam.gameObject.AddComponent<Skybox> ();
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_35 = __this->get_renderCam_23();
		NullCheck(L_35);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_36;
		L_36 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_35, /*hidden argument*/NULL);
		NullCheck(L_36);
		Skybox_t8B0EA7C092363DBCCF0B51434F04E7EE661E28E0 * L_37;
		L_37 = GameObject_AddComponent_TisSkybox_t8B0EA7C092363DBCCF0B51434F04E7EE661E28E0_mED0AE40B29FD1E0A3FC3E2E24516D21F34399F4E(L_36, /*hidden argument*/GameObject_AddComponent_TisSkybox_t8B0EA7C092363DBCCF0B51434F04E7EE661E28E0_mED0AE40B29FD1E0A3FC3E2E24516D21F34399F4E_RuntimeMethod_var);
		// camSkybox = renderCam.GetComponent<Skybox> ();
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_38 = __this->get_renderCam_23();
		NullCheck(L_38);
		Skybox_t8B0EA7C092363DBCCF0B51434F04E7EE661E28E0 * L_39;
		L_39 = Component_GetComponent_TisSkybox_t8B0EA7C092363DBCCF0B51434F04E7EE661E28E0_m11DD63313E45B5E0C62FFCF04F0962CCF57D9FA2(L_38, /*hidden argument*/Component_GetComponent_TisSkybox_t8B0EA7C092363DBCCF0B51434F04E7EE661E28E0_m11DD63313E45B5E0C62FFCF04F0962CCF57D9FA2_RuntimeMethod_var);
		__this->set_camSkybox_24(L_39);
	}

IL_011a:
	{
		// CameraExtensions.ClearCameraComponents (renderCam.GetComponent<Camera>());
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_40 = __this->get_renderCam_23();
		NullCheck(L_40);
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_41;
		L_41 = Component_GetComponent_TisCamera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_mE17146EF5B0D8E9F9D2D2D94567BF211AD00D320(L_40, /*hidden argument*/Component_GetComponent_TisCamera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_mE17146EF5B0D8E9F9D2D2D94567BF211AD00D320_RuntimeMethod_var);
		CameraExtensions_ClearCameraComponents_m2207CEEB06FFFA9E9813C2C3371ABCC7B35F4224(L_41, /*hidden argument*/NULL);
		// renderCam.hideFlags = HideFlags.HideInHierarchy;
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_42 = __this->get_renderCam_23();
		NullCheck(L_42);
		Object_set_hideFlags_m7DE229AF60B92F0C68819F77FEB27D775E66F3AC(L_42, 1, /*hidden argument*/NULL);
		// renderCam.enabled = false;
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_43 = __this->get_renderCam_23();
		NullCheck(L_43);
		Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32(L_43, (bool)0, /*hidden argument*/NULL);
	}

IL_0142:
	{
		// if (ToDimension ().customSkybox) {
		Dimension_t28D074E7D31C414382BEB891CF77CF6345E04C34 * L_44;
		L_44 = Portal_ToDimension_mD33B18BBDBEDE671CC5737BD70C3CFD5A1738BA3(__this, /*hidden argument*/NULL);
		NullCheck(L_44);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_45 = L_44->get_customSkybox_4();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_46;
		L_46 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499(L_45, /*hidden argument*/NULL);
		if (!L_46)
		{
			goto IL_016a;
		}
	}
	{
		// camSkybox.material = ToDimension ().customSkybox;
		Skybox_t8B0EA7C092363DBCCF0B51434F04E7EE661E28E0 * L_47 = __this->get_camSkybox_24();
		Dimension_t28D074E7D31C414382BEB891CF77CF6345E04C34 * L_48;
		L_48 = Portal_ToDimension_mD33B18BBDBEDE671CC5737BD70C3CFD5A1738BA3(__this, /*hidden argument*/NULL);
		NullCheck(L_48);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_49 = L_48->get_customSkybox_4();
		NullCheck(L_47);
		Skybox_set_material_m74316F6709A669D3181C4CB1EA1F40E745D0F88A(L_47, L_49, /*hidden argument*/NULL);
	}

IL_016a:
	{
		// meshRenderer.material.SetFloat ("_RecursiveRender", (gameObject.layer != Camera.current.gameObject.layer) ? 1 : 0);
		Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * L_50 = __this->get_meshRenderer_18();
		NullCheck(L_50);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_51;
		L_51 = Renderer_get_material_mE6B01125502D08EE0D6DFE2EAEC064AD9BB31804(L_50, /*hidden argument*/NULL);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_52;
		L_52 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		NullCheck(L_52);
		int32_t L_53;
		L_53 = GameObject_get_layer_m9D4C23A2FD105AF9964445BF18A77E8A49012F9F(L_52, /*hidden argument*/NULL);
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_54;
		L_54 = Camera_get_current_m4E5A6D19F422F8DD2CFF4EE80C65B033F24C45D6(/*hidden argument*/NULL);
		NullCheck(L_54);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_55;
		L_55 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_54, /*hidden argument*/NULL);
		NullCheck(L_55);
		int32_t L_56;
		L_56 = GameObject_get_layer_m9D4C23A2FD105AF9964445BF18A77E8A49012F9F(L_55, /*hidden argument*/NULL);
		G_B8_0 = _stringLiteral3804D66ED4388200EADC17D3476C4A430A58A5BF;
		G_B8_1 = L_51;
		if ((!(((uint32_t)L_53) == ((uint32_t)L_56))))
		{
			G_B9_0 = _stringLiteral3804D66ED4388200EADC17D3476C4A430A58A5BF;
			G_B9_1 = L_51;
			goto IL_0199;
		}
	}
	{
		G_B10_0 = 0;
		G_B10_1 = G_B8_0;
		G_B10_2 = G_B8_1;
		goto IL_019a;
	}

IL_0199:
	{
		G_B10_0 = 1;
		G_B10_1 = G_B9_0;
		G_B10_2 = G_B9_1;
	}

IL_019a:
	{
		NullCheck(G_B10_2);
		Material_SetFloat_mBE01E05D49E5C7045E010F49A38E96B101D82768(G_B10_2, G_B10_1, ((float)((float)G_B10_0)), /*hidden argument*/NULL);
		// RenderPortal (Camera.current);
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_57;
		L_57 = Camera_get_current_m4E5A6D19F422F8DD2CFF4EE80C65B033F24C45D6(/*hidden argument*/NULL);
		Portal_RenderPortal_m25DA4E194677697D91B9ECACC5BC78810AFEC521(__this, L_57, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Portal::SetupRenderCameraForAR()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Portal_SetupRenderCameraForAR_m48FF408FC286F9E2A7E140FCCE3FB22768F5B5F9 (Portal_t355BC086AE7B4F5E476064C8805CA0830E0CA48E * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void Portal::RenderPortal(UnityEngine.Camera)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Portal_RenderPortal_m25DA4E194677697D91B9ECACC5BC78810AFEC521 (Portal_t355BC086AE7B4F5E476064C8805CA0830E0CA48E * __this, Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * ___camera0, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37  V_1;
	memset((&V_1), 0, sizeof(V_1));
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		// if (!this.enableObliqueProjection) {
		bool L_0 = __this->get_enableObliqueProjection_11();
		if (L_0)
		{
			goto IL_005c;
		}
	}
	{
		// Vector3 deltaTransform = transform.position - camera.transform.position;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_1;
		L_1 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2;
		L_2 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_1, /*hidden argument*/NULL);
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_3 = ___camera0;
		NullCheck(L_3);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_4;
		L_4 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_3, /*hidden argument*/NULL);
		NullCheck(L_4);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5;
		L_5 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_4, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6;
		L_6 = Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline(L_2, L_5, /*hidden argument*/NULL);
		V_0 = L_6;
		// renderCam.nearClipPlane = Mathf.Max (deltaTransform.magnitude - meshRenderer.bounds.size.magnitude, 0.01f);
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_7 = __this->get_renderCam_23();
		float L_8;
		L_8 = Vector3_get_magnitude_mDDD40612220D8104E77E993E18A101A69A944991((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&V_0), /*hidden argument*/NULL);
		Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * L_9 = __this->get_meshRenderer_18();
		NullCheck(L_9);
		Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37  L_10;
		L_10 = Renderer_get_bounds_m296EE301CAC35DE15E295646CAD7911794825097(L_9, /*hidden argument*/NULL);
		V_1 = L_10;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_11;
		L_11 = Bounds_get_size_mB1C37E89879C7810BC9F4210033D9277DAFE2C14((Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37 *)(&V_1), /*hidden argument*/NULL);
		V_2 = L_11;
		float L_12;
		L_12 = Vector3_get_magnitude_mDDD40612220D8104E77E993E18A101A69A944991((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&V_2), /*hidden argument*/NULL);
		float L_13;
		L_13 = Mathf_Max_m4CE510E1F1013B33275F01543731A51A58BA0775(((float)il2cpp_codegen_subtract((float)L_8, (float)L_12)), (0.00999999978f), /*hidden argument*/NULL);
		NullCheck(L_7);
		Camera_set_nearClipPlane_m4EA1D92F6E1D17E423EC036561E115F434DC2263(L_7, L_13, /*hidden argument*/NULL);
	}

IL_005c:
	{
		// this.RenderMono (camera);   // We force mono in things like ARKit & Hololens
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_14 = ___camera0;
		Portal_RenderMono_mD518AB907A34FEB1B6F23C2B4425A90A06834B34(__this, L_14, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Portal::RenderSteamVR(UnityEngine.Camera)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Portal_RenderSteamVR_m47C1C2F274096C5E2D2D4957F443A453C3C5CD67 (Portal_t355BC086AE7B4F5E476064C8805CA0830E0CA48E * __this, Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * ___camera0, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void Portal::RenderOpenVR(UnityEngine.Camera)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Portal_RenderOpenVR_m422E4F3D00AB3064A1DD23013D314A885F1B9007 (Portal_t355BC086AE7B4F5E476064C8805CA0830E0CA48E * __this, Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * ___camera0, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void Portal::RenderMono(UnityEngine.Camera)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Portal_RenderMono_mD518AB907A34FEB1B6F23C2B4425A90A06834B34 (Portal_t355BC086AE7B4F5E476064C8805CA0830E0CA48E * __this, Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * ___camera0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3804D66ED4388200EADC17D3476C4A430A58A5BF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBF3DA0187B0BD18F0D8EEDA007AB54339F51D95D);
		s_Il2CppMethodInitialized = true;
	}
	RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * V_0 = NULL;
	{
		// RenderTexture target = leftTexture;
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_0 = __this->get_leftTexture_25();
		V_0 = L_0;
		// RenderPlane (renderCam, target, camera.transform.position, camera.transform.rotation, camera.projectionMatrix);
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_1 = __this->get_renderCam_23();
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_2 = V_0;
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_3 = ___camera0;
		NullCheck(L_3);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_4;
		L_4 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_3, /*hidden argument*/NULL);
		NullCheck(L_4);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5;
		L_5 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_4, /*hidden argument*/NULL);
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_6 = ___camera0;
		NullCheck(L_6);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_7;
		L_7 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_6, /*hidden argument*/NULL);
		NullCheck(L_7);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_8;
		L_8 = Transform_get_rotation_m4AA3858C00DF4C9614B80352558C4C37D08D2200(L_7, /*hidden argument*/NULL);
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_9 = ___camera0;
		NullCheck(L_9);
		Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  L_10;
		L_10 = Camera_get_projectionMatrix_mDB77E3A7F71CEF085797BCE58FAC78058C5D6756(L_9, /*hidden argument*/NULL);
		Portal_RenderPlane_m3D0588BAAC26AA27A4C786F62BD30E04F9DAA2CF(__this, L_1, L_2, L_5, L_8, L_10, /*hidden argument*/NULL);
		// meshRenderer.material.SetTexture ("_LeftTex", target);
		Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * L_11 = __this->get_meshRenderer_18();
		NullCheck(L_11);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_12;
		L_12 = Renderer_get_material_mE6B01125502D08EE0D6DFE2EAEC064AD9BB31804(L_11, /*hidden argument*/NULL);
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_13 = V_0;
		NullCheck(L_12);
		Material_SetTexture_m04A1CD55201841F85E475992931A210229C782CF(L_12, _stringLiteralBF3DA0187B0BD18F0D8EEDA007AB54339F51D95D, L_13, /*hidden argument*/NULL);
		// meshRenderer.material.SetFloat ("_RecursiveRender", 1);  // Using Recursive render here will force the shader to only read from the LeftTex texture
		Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * L_14 = __this->get_meshRenderer_18();
		NullCheck(L_14);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_15;
		L_15 = Renderer_get_material_mE6B01125502D08EE0D6DFE2EAEC064AD9BB31804(L_14, /*hidden argument*/NULL);
		NullCheck(L_15);
		Material_SetFloat_mBE01E05D49E5C7045E010F49A38E96B101D82768(L_15, _stringLiteral3804D66ED4388200EADC17D3476C4A430A58A5BF, (1.0f), /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Portal::RenderPlane(UnityEngine.Camera,UnityEngine.RenderTexture,UnityEngine.Vector3,UnityEngine.Quaternion,UnityEngine.Matrix4x4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Portal_RenderPlane_m3D0588BAAC26AA27A4C786F62BD30E04F9DAA2CF (Portal_t355BC086AE7B4F5E476064C8805CA0830E0CA48E * __this, Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * ___portalCamera0, RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * ___targetTexture1, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___camPosition2, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___camRotation3, Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  ___camProjectionMatrix4, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  V_3;
	memset((&V_3), 0, sizeof(V_3));
	Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  V_4;
	memset((&V_4), 0, sizeof(V_4));
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  G_B2_0;
	memset((&G_B2_0), 0, sizeof(G_B2_0));
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  G_B2_1;
	memset((&G_B2_1), 0, sizeof(G_B2_1));
	Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * G_B2_2 = NULL;
	Portal_t355BC086AE7B4F5E476064C8805CA0830E0CA48E * G_B2_3 = NULL;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  G_B1_0;
	memset((&G_B1_0), 0, sizeof(G_B1_0));
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  G_B1_1;
	memset((&G_B1_1), 0, sizeof(G_B1_1));
	Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * G_B1_2 = NULL;
	Portal_t355BC086AE7B4F5E476064C8805CA0830E0CA48E * G_B1_3 = NULL;
	float G_B3_0 = 0.0f;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  G_B3_1;
	memset((&G_B3_1), 0, sizeof(G_B3_1));
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  G_B3_2;
	memset((&G_B3_2), 0, sizeof(G_B3_2));
	Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * G_B3_3 = NULL;
	Portal_t355BC086AE7B4F5E476064C8805CA0830E0CA48E * G_B3_4 = NULL;
	{
		// portalCamera.transform.position = camPosition;
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_0 = ___portalCamera0;
		NullCheck(L_0);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_1;
		L_1 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_0, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = ___camPosition2;
		NullCheck(L_1);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_1, L_2, /*hidden argument*/NULL);
		// portalCamera.transform.rotation = camRotation;
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_3 = ___portalCamera0;
		NullCheck(L_3);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_4;
		L_4 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_3, /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_5 = ___camRotation3;
		NullCheck(L_4);
		Transform_set_rotation_m1B5F3D4CE984AB31254615C9C71B0E54978583B4(L_4, L_5, /*hidden argument*/NULL);
		// portalCamera.targetTexture = targetTexture;
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_6 = ___portalCamera0;
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_7 = ___targetTexture1;
		NullCheck(L_6);
		Camera_set_targetTexture_m200B05665D1F5C62D9016C2DD20955755BAB4596(L_6, L_7, /*hidden argument*/NULL);
		// portalCamera.ResetWorldToCameraMatrix ();
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_8 = ___portalCamera0;
		NullCheck(L_8);
		Camera_ResetWorldToCameraMatrix_mE1FBF18A65E9B66FA0609D8D3A8A13052772C9B7(L_8, /*hidden argument*/NULL);
		// Vector3 pos = transform.position;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_9;
		L_9 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_9);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10;
		L_10 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_9, /*hidden argument*/NULL);
		V_0 = L_10;
		// Vector3 normal = transform.forward;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_11;
		L_11 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_11);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12;
		L_12 = Transform_get_forward_mD850B9ECF892009E3485408DC0D375165B7BF053(L_11, /*hidden argument*/NULL);
		V_1 = L_12;
		// bool isForward = transform.InverseTransformPoint (portalCamera.transform.position).z < 0;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_13;
		L_13 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_14 = ___portalCamera0;
		NullCheck(L_14);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_15;
		L_15 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_14, /*hidden argument*/NULL);
		NullCheck(L_15);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_16;
		L_16 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_15, /*hidden argument*/NULL);
		NullCheck(L_13);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_17;
		L_17 = Transform_InverseTransformPoint_m476ABC8F3F14824D7D82FE2C54CEE5A151A669B8(L_13, L_16, /*hidden argument*/NULL);
		float L_18 = L_17.get_z_4();
		V_2 = (bool)((((float)L_18) < ((float)(0.0f)))? 1 : 0);
		// Vector4 clipPlane = CameraSpacePlane( portalCamera, pos, normal, isForward ? 1.0f : -1.0f );
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_19 = ___portalCamera0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_20 = V_0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_21 = V_1;
		bool L_22 = V_2;
		G_B1_0 = L_21;
		G_B1_1 = L_20;
		G_B1_2 = L_19;
		G_B1_3 = __this;
		if (L_22)
		{
			G_B2_0 = L_21;
			G_B2_1 = L_20;
			G_B2_2 = L_19;
			G_B2_3 = __this;
			goto IL_006f;
		}
	}
	{
		G_B3_0 = (-1.0f);
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		G_B3_3 = G_B1_2;
		G_B3_4 = G_B1_3;
		goto IL_0074;
	}

IL_006f:
	{
		G_B3_0 = (1.0f);
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
		G_B3_3 = G_B2_2;
		G_B3_4 = G_B2_3;
	}

IL_0074:
	{
		NullCheck(G_B3_4);
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_23;
		L_23 = Portal_CameraSpacePlane_m4B47D9C3A6EE56B370AFDD6D8F2E4818175ED102(G_B3_4, G_B3_3, G_B3_2, G_B3_1, G_B3_0, /*hidden argument*/NULL);
		V_3 = L_23;
		// Matrix4x4 projection = camProjectionMatrix;
		Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  L_24 = ___camProjectionMatrix4;
		V_4 = L_24;
		// if (this.enableObliqueProjection) {
		bool L_25 = __this->get_enableObliqueProjection_11();
		if (!L_25)
		{
			goto IL_008e;
		}
	}
	{
		// CalculateObliqueMatrix (ref projection, clipPlane);
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_26 = V_3;
		Portal_CalculateObliqueMatrix_m8E315D6F8317DA0F7D28FAA01875160C48295893((Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 *)(&V_4), L_26, /*hidden argument*/NULL);
	}

IL_008e:
	{
		// portalCamera.projectionMatrix = projection;
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_27 = ___portalCamera0;
		Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  L_28 = V_4;
		NullCheck(L_27);
		Camera_set_projectionMatrix_m3645AC49FC94726BDA07191C80299D8361D5C328(L_27, L_28, /*hidden argument*/NULL);
		// portalCamera.enabled = false;
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_29 = ___portalCamera0;
		NullCheck(L_29);
		Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32(L_29, (bool)0, /*hidden argument*/NULL);
		// portalCamera.cullingMask = 0;
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_30 = ___portalCamera0;
		NullCheck(L_30);
		Camera_set_cullingMask_mB4B1EE4C6CC355625EDE08EAF17E99DAB242E0CC(L_30, 0, /*hidden argument*/NULL);
		// CameraExtensions.LayerCullingShow (portalCamera, ToDimension ().layer);
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_31 = ___portalCamera0;
		Dimension_t28D074E7D31C414382BEB891CF77CF6345E04C34 * L_32;
		L_32 = Portal_ToDimension_mD33B18BBDBEDE671CC5737BD70C3CFD5A1738BA3(__this, /*hidden argument*/NULL);
		NullCheck(L_32);
		int32_t L_33 = L_32->get_layer_5();
		CameraExtensions_LayerCullingShow_m7BD7EE4365D62985B64F84ADC12078390A2F68B2(L_31, L_33, /*hidden argument*/NULL);
		// CameraExtensions.LayerCullingShowMask (portalCamera, alwaysVisibleMask);
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_34 = ___portalCamera0;
		LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8  L_35 = __this->get_alwaysVisibleMask_10();
		int32_t L_36;
		L_36 = LayerMask_op_Implicit_mD89E9970822613D8D19B2EBCA36C79391C287BE0(L_35, /*hidden argument*/NULL);
		CameraExtensions_LayerCullingShowMask_m69EB95417060E388D8F58ABFB366959BBE236A56(L_34, L_36, /*hidden argument*/NULL);
		// portalCamera.farClipPlane = mainCamera.farClipPlane;
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_37 = ___portalCamera0;
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_38 = __this->get_mainCamera_14();
		NullCheck(L_38);
		float L_39;
		L_39 = Camera_get_farClipPlane_m0FA1B9E2E815BECE2EA40023302EB942B52D9596(L_38, /*hidden argument*/NULL);
		NullCheck(L_37);
		Camera_set_farClipPlane_m63F1302068433A72A5103281327C68CD8F67AD41(L_37, L_39, /*hidden argument*/NULL);
		// portalCamera.nearClipPlane = mainCamera.nearClipPlane;
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_40 = ___portalCamera0;
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_41 = __this->get_mainCamera_14();
		NullCheck(L_41);
		float L_42;
		L_42 = Camera_get_nearClipPlane_m75A7270074A35D95B05F25EBF8CE392ECA6517DC(L_41, /*hidden argument*/NULL);
		NullCheck(L_40);
		Camera_set_nearClipPlane_m4EA1D92F6E1D17E423EC036561E115F434DC2263(L_40, L_42, /*hidden argument*/NULL);
		// portalCamera.orthographic = mainCamera.orthographic;
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_43 = ___portalCamera0;
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_44 = __this->get_mainCamera_14();
		NullCheck(L_44);
		bool L_45;
		L_45 = Camera_get_orthographic_m3DE9A7705E2B4926BBFD2D6798D97B931B5B5550(L_44, /*hidden argument*/NULL);
		NullCheck(L_43);
		Camera_set_orthographic_m38A872FC2D448915EE94C4FB72FB02D4C3F56C52(L_43, L_45, /*hidden argument*/NULL);
		// portalCamera.fieldOfView = mainCamera.fieldOfView;
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_46 = ___portalCamera0;
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_47 = __this->get_mainCamera_14();
		NullCheck(L_47);
		float L_48;
		L_48 = Camera_get_fieldOfView_mA9BA910800B2E33B572929CDA9A12CE596353920(L_47, /*hidden argument*/NULL);
		NullCheck(L_46);
		Camera_set_fieldOfView_m138FE103CAC4B803F39E4CF579609A5C3FEB5E49(L_46, L_48, /*hidden argument*/NULL);
		// portalCamera.aspect = mainCamera.aspect;
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_49 = ___portalCamera0;
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_50 = __this->get_mainCamera_14();
		NullCheck(L_50);
		float L_51;
		L_51 = Camera_get_aspect_mD0A1FC8F998473DA08866FF9CD61C02E6D5F4987(L_50, /*hidden argument*/NULL);
		NullCheck(L_49);
		Camera_set_aspect_mF0D72E1250A4408B6A7C32700EE3D80C75C3879C(L_49, L_51, /*hidden argument*/NULL);
		// portalCamera.orthographicSize = mainCamera.orthographicSize;
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_52 = ___portalCamera0;
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_53 = __this->get_mainCamera_14();
		NullCheck(L_53);
		float L_54;
		L_54 = Camera_get_orthographicSize_m970DC87D428A71EDF30F9ED7D0E76E08B1BE4EFE(L_53, /*hidden argument*/NULL);
		NullCheck(L_52);
		Camera_set_orthographicSize_mFC4BBB0BB0097A5FE13E99D8388DF3008971085F(L_52, L_54, /*hidden argument*/NULL);
		// portalCamera.Render ();
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_55 = ___portalCamera0;
		NullCheck(L_55);
		Camera_Render_m2D9749799AAC91A3725044A6CF5594E1F5D68D61(L_55, /*hidden argument*/NULL);
		// portalCamera.targetTexture = null;
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_56 = ___portalCamera0;
		NullCheck(L_56);
		Camera_set_targetTexture_m200B05665D1F5C62D9016C2DD20955755BAB4596(L_56, (RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 *)NULL, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Portal::CalculateObliqueMatrix(UnityEngine.Matrix4x4&,UnityEngine.Vector4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Portal_CalculateObliqueMatrix_m8E315D6F8317DA0F7D28FAA01875160C48295893 (Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 * ___projection0, Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___clipPlane1, const RuntimeMethod* method)
{
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// Vector4 q = projection.inverse * new Vector4(
		//     sgn(clipPlane.x),
		//     sgn(clipPlane.y),
		//     1.0f,
		//     1.0f
		// );
		Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 * L_0 = ___projection0;
		Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  L_1;
		L_1 = Matrix4x4_get_inverse_mFA34ECC790B269522F60FC32370D628DAFCAE225((Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 *)L_0, /*hidden argument*/NULL);
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_2 = ___clipPlane1;
		float L_3 = L_2.get_x_1();
		float L_4;
		L_4 = Portal_sgn_m18F82F51CF72ECC17A1797C75555BBC642D80692(L_3, /*hidden argument*/NULL);
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_5 = ___clipPlane1;
		float L_6 = L_5.get_y_2();
		float L_7;
		L_7 = Portal_sgn_m18F82F51CF72ECC17A1797C75555BBC642D80692(L_6, /*hidden argument*/NULL);
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_8;
		memset((&L_8), 0, sizeof(L_8));
		Vector4__ctor_mCAB598A37C4D5E80282277E828B8A3EAD936D3B2((&L_8), L_4, L_7, (1.0f), (1.0f), /*hidden argument*/NULL);
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_9;
		L_9 = Matrix4x4_op_Multiply_m6967C4B4CC9F36FE461F5420DF7175B4201E2585(L_1, L_8, /*hidden argument*/NULL);
		V_0 = L_9;
		// Vector4 c = clipPlane * (2.0F / (Vector4.Dot (clipPlane, q)));
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_10 = ___clipPlane1;
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_11 = ___clipPlane1;
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_12 = V_0;
		float L_13;
		L_13 = Vector4_Dot_m3373C73B23A0BC07DDE8B9C99AA2FC933CD1143F(L_11, L_12, /*hidden argument*/NULL);
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_14;
		L_14 = Vector4_op_Multiply_m4B615DCAD6D77FE276AC56F17EA3ED0DCD942111_inline(L_10, ((float)((float)(2.0f)/(float)L_13)), /*hidden argument*/NULL);
		V_1 = L_14;
		// projection[2] = c.x - projection[3];
		Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 * L_15 = ___projection0;
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_16 = V_1;
		float L_17 = L_16.get_x_1();
		Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 * L_18 = ___projection0;
		float L_19;
		L_19 = Matrix4x4_get_Item_mA0E634EF5A723EA9DD824391D4C62F4100C64813((Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 *)L_18, 3, /*hidden argument*/NULL);
		Matrix4x4_set_Item_m27BC97EE3093FDADFE0804FB80AFF5CDB03D355B((Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 *)L_15, 2, ((float)il2cpp_codegen_subtract((float)L_17, (float)L_19)), /*hidden argument*/NULL);
		// projection[6] = c.y - projection[7];
		Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 * L_20 = ___projection0;
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_21 = V_1;
		float L_22 = L_21.get_y_2();
		Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 * L_23 = ___projection0;
		float L_24;
		L_24 = Matrix4x4_get_Item_mA0E634EF5A723EA9DD824391D4C62F4100C64813((Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 *)L_23, 7, /*hidden argument*/NULL);
		Matrix4x4_set_Item_m27BC97EE3093FDADFE0804FB80AFF5CDB03D355B((Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 *)L_20, 6, ((float)il2cpp_codegen_subtract((float)L_22, (float)L_24)), /*hidden argument*/NULL);
		// projection[10] = c.z - projection[11];
		Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 * L_25 = ___projection0;
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_26 = V_1;
		float L_27 = L_26.get_z_3();
		Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 * L_28 = ___projection0;
		float L_29;
		L_29 = Matrix4x4_get_Item_mA0E634EF5A723EA9DD824391D4C62F4100C64813((Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 *)L_28, ((int32_t)11), /*hidden argument*/NULL);
		Matrix4x4_set_Item_m27BC97EE3093FDADFE0804FB80AFF5CDB03D355B((Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 *)L_25, ((int32_t)10), ((float)il2cpp_codegen_subtract((float)L_27, (float)L_29)), /*hidden argument*/NULL);
		// projection[14] = c.w - projection[15];
		Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 * L_30 = ___projection0;
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_31 = V_1;
		float L_32 = L_31.get_w_4();
		Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 * L_33 = ___projection0;
		float L_34;
		L_34 = Matrix4x4_get_Item_mA0E634EF5A723EA9DD824391D4C62F4100C64813((Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 *)L_33, ((int32_t)15), /*hidden argument*/NULL);
		Matrix4x4_set_Item_m27BC97EE3093FDADFE0804FB80AFF5CDB03D355B((Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 *)L_30, ((int32_t)14), ((float)il2cpp_codegen_subtract((float)L_32, (float)L_34)), /*hidden argument*/NULL);
		// }
		return;
	}
}
// UnityEngine.Vector4 Portal::CameraSpacePlane(UnityEngine.Camera,UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  Portal_CameraSpacePlane_m4B47D9C3A6EE56B370AFDD6D8F2E4818175ED102 (Portal_t355BC086AE7B4F5E476064C8805CA0830E0CA48E * __this, Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * ___cam0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___pos1, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___normal2, float ___sideSign3, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  V_1;
	memset((&V_1), 0, sizeof(V_1));
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_2;
	memset((&V_2), 0, sizeof(V_2));
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_3;
	memset((&V_3), 0, sizeof(V_3));
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_4;
	memset((&V_4), 0, sizeof(V_4));
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  G_B2_0;
	memset((&G_B2_0), 0, sizeof(G_B2_0));
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  G_B2_1;
	memset((&G_B2_1), 0, sizeof(G_B2_1));
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  G_B1_0;
	memset((&G_B1_0), 0, sizeof(G_B1_0));
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  G_B1_1;
	memset((&G_B1_1), 0, sizeof(G_B1_1));
	int32_t G_B3_0 = 0;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  G_B3_1;
	memset((&G_B3_1), 0, sizeof(G_B3_1));
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  G_B3_2;
	memset((&G_B3_2), 0, sizeof(G_B3_2));
	{
		// Vector3 offsetPos = pos + normal * portalSwitchDistance * (triggerZDirection ? -1 : 1);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___pos1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1 = ___normal2;
		float L_2 = __this->get_portalSwitchDistance_26();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3;
		L_3 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_1, L_2, /*hidden argument*/NULL);
		bool L_4 = __this->get_triggerZDirection_21();
		G_B1_0 = L_3;
		G_B1_1 = L_0;
		if (L_4)
		{
			G_B2_0 = L_3;
			G_B2_1 = L_0;
			goto IL_0018;
		}
	}
	{
		G_B3_0 = 1;
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		goto IL_0019;
	}

IL_0018:
	{
		G_B3_0 = (-1);
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
	}

IL_0019:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5;
		L_5 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(G_B3_1, ((float)((float)G_B3_0)), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6;
		L_6 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(G_B3_2, L_5, /*hidden argument*/NULL);
		V_0 = L_6;
		// Matrix4x4 m = cam.worldToCameraMatrix;
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_7 = ___cam0;
		NullCheck(L_7);
		Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  L_8;
		L_8 = Camera_get_worldToCameraMatrix_m7E2B63F64437E2C91C07F7FC819C79BE2152C5F6(L_7, /*hidden argument*/NULL);
		V_1 = L_8;
		// Vector3 cpos = m.MultiplyPoint( offsetPos );
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9 = V_0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10;
		L_10 = Matrix4x4_MultiplyPoint_mE92BEE4DED3B602983C2BBE06C44AD29564EDA83((Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 *)(&V_1), L_9, /*hidden argument*/NULL);
		V_2 = L_10;
		// Vector3 cnormal = m.MultiplyVector( normal ).normalized * sideSign;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_11 = ___normal2;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12;
		L_12 = Matrix4x4_MultiplyVector_m88C4BE23EB0B45BB701514AF3E1CA5A857F8212C((Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 *)(&V_1), L_11, /*hidden argument*/NULL);
		V_4 = L_12;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13;
		L_13 = Vector3_get_normalized_m2FA6DF38F97BDA4CCBDAE12B9FE913A241DAC8D5((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&V_4), /*hidden argument*/NULL);
		float L_14 = ___sideSign3;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_15;
		L_15 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_13, L_14, /*hidden argument*/NULL);
		V_3 = L_15;
		// return new Vector4( cnormal.x, cnormal.y, cnormal.z, -Vector3.Dot(cpos,cnormal) );
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_16 = V_3;
		float L_17 = L_16.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_18 = V_3;
		float L_19 = L_18.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_20 = V_3;
		float L_21 = L_20.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_22 = V_2;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_23 = V_3;
		float L_24;
		L_24 = Vector3_Dot_mD19905B093915BA12852732EA27AA2DBE030D11F_inline(L_22, L_23, /*hidden argument*/NULL);
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_25;
		memset((&L_25), 0, sizeof(L_25));
		Vector4__ctor_mCAB598A37C4D5E80282277E828B8A3EAD936D3B2((&L_25), L_17, L_19, L_21, ((-L_24)), /*hidden argument*/NULL);
		return L_25;
	}
}
// System.Single Portal::sgn(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Portal_sgn_m18F82F51CF72ECC17A1797C75555BBC642D80692 (float ___a0, const RuntimeMethod* method)
{
	{
		// if (a > 0.0f) return 1.0f;
		float L_0 = ___a0;
		if ((!(((float)L_0) > ((float)(0.0f)))))
		{
			goto IL_000e;
		}
	}
	{
		// if (a > 0.0f) return 1.0f;
		return (1.0f);
	}

IL_000e:
	{
		// if (a < 0.0f) return -1.0f;
		float L_1 = ___a0;
		if ((!(((float)L_1) < ((float)(0.0f)))))
		{
			goto IL_001c;
		}
	}
	{
		// if (a < 0.0f) return -1.0f;
		return (-1.0f);
	}

IL_001c:
	{
		// return 0.0f;
		return (0.0f);
	}
}
// System.Void Portal::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Portal_Update_m7F394AC17F10EC147A796624F189CF4D1777F013 (Portal_t355BC086AE7B4F5E476064C8805CA0830E0CA48E * __this, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37  V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t G_B6_0 = 0;
	{
		// if (mainCamera.gameObject.layer != this.FromDimension ().layer) {
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_0 = __this->get_mainCamera_14();
		NullCheck(L_0);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1;
		L_1 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		int32_t L_2;
		L_2 = GameObject_get_layer_m9D4C23A2FD105AF9964445BF18A77E8A49012F9F(L_1, /*hidden argument*/NULL);
		Dimension_t28D074E7D31C414382BEB891CF77CF6345E04C34 * L_3;
		L_3 = Portal_FromDimension_mB4D6D1693AD5BA5303071B6E1A6FBC649757F557(__this, /*hidden argument*/NULL);
		NullCheck(L_3);
		int32_t L_4 = L_3->get_layer_5();
		if ((((int32_t)L_2) == ((int32_t)L_4)))
		{
			goto IL_001e;
		}
	}
	{
		// return;  // don't transition if we are in different worlds.
		return;
	}

IL_001e:
	{
		// Vector3 portalSize = meshFilter.mesh.bounds.size;
		MeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A * L_5 = __this->get_meshFilter_19();
		NullCheck(L_5);
		Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * L_6;
		L_6 = MeshFilter_get_mesh_mFC1DF5AFBC1E4269D08628DB83C954882FD2B417(L_5, /*hidden argument*/NULL);
		NullCheck(L_6);
		Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37  L_7;
		L_7 = Mesh_get_bounds_m8704A23E8BA2D77C89FD4BF4379238062B1BE5DF(L_6, /*hidden argument*/NULL);
		V_1 = L_7;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8;
		L_8 = Bounds_get_size_mB1C37E89879C7810BC9F4210033D9277DAFE2C14((Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37 *)(&V_1), /*hidden argument*/NULL);
		V_0 = L_8;
		// bool shouldDeform =
		//     (Mathf.Pow (transform.InverseTransformDirection (mainCamera.transform.position - this.transform.position).z, 2) <= minimumDeformRangeSquared) && // z direction is close
		//     Mathf.Abs (transform.InverseTransformDirection (mainCamera.transform.position - this.transform.position).x) <= (portalSize.x * transform.lossyScale.x) / 2f &&
		//     Mathf.Abs (transform.InverseTransformDirection (mainCamera.transform.position - this.transform.position).y) <= (portalSize.y * transform.lossyScale.y) / 2f;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_9;
		L_9 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_10 = __this->get_mainCamera_14();
		NullCheck(L_10);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_11;
		L_11 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_10, /*hidden argument*/NULL);
		NullCheck(L_11);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12;
		L_12 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_11, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_13;
		L_13 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_13);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_14;
		L_14 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_13, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_15;
		L_15 = Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline(L_12, L_14, /*hidden argument*/NULL);
		NullCheck(L_9);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_16;
		L_16 = Transform_InverseTransformDirection_m9EB6F7A2598FD8D6B52F0A6EBA96A3BAAF68D696(L_9, L_15, /*hidden argument*/NULL);
		float L_17 = L_16.get_z_4();
		float L_18;
		L_18 = powf(L_17, (2.0f));
		float L_19 = __this->get_minimumDeformRangeSquared_16();
		if ((!(((float)L_18) <= ((float)L_19))))
		{
			goto IL_0129;
		}
	}
	{
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_20;
		L_20 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_21 = __this->get_mainCamera_14();
		NullCheck(L_21);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_22;
		L_22 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_21, /*hidden argument*/NULL);
		NullCheck(L_22);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_23;
		L_23 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_22, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_24;
		L_24 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_24);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_25;
		L_25 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_24, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_26;
		L_26 = Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline(L_23, L_25, /*hidden argument*/NULL);
		NullCheck(L_20);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_27;
		L_27 = Transform_InverseTransformDirection_m9EB6F7A2598FD8D6B52F0A6EBA96A3BAAF68D696(L_20, L_26, /*hidden argument*/NULL);
		float L_28 = L_27.get_x_2();
		float L_29;
		L_29 = fabsf(L_28);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_30 = V_0;
		float L_31 = L_30.get_x_2();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_32;
		L_32 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_32);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_33;
		L_33 = Transform_get_lossyScale_m469A16F93F135C1E4D5955C7EBDB893D1892A331(L_32, /*hidden argument*/NULL);
		float L_34 = L_33.get_x_2();
		if ((!(((float)L_29) <= ((float)((float)((float)((float)il2cpp_codegen_multiply((float)L_31, (float)L_34))/(float)(2.0f)))))))
		{
			goto IL_0129;
		}
	}
	{
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_35;
		L_35 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_36 = __this->get_mainCamera_14();
		NullCheck(L_36);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_37;
		L_37 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_36, /*hidden argument*/NULL);
		NullCheck(L_37);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_38;
		L_38 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_37, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_39;
		L_39 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_39);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_40;
		L_40 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_39, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_41;
		L_41 = Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline(L_38, L_40, /*hidden argument*/NULL);
		NullCheck(L_35);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_42;
		L_42 = Transform_InverseTransformDirection_m9EB6F7A2598FD8D6B52F0A6EBA96A3BAAF68D696(L_35, L_41, /*hidden argument*/NULL);
		float L_43 = L_42.get_y_3();
		float L_44;
		L_44 = fabsf(L_43);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_45 = V_0;
		float L_46 = L_45.get_y_3();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_47;
		L_47 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_47);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_48;
		L_48 = Transform_get_lossyScale_m469A16F93F135C1E4D5955C7EBDB893D1892A331(L_47, /*hidden argument*/NULL);
		float L_49 = L_48.get_y_3();
		G_B6_0 = ((((int32_t)((!(((float)L_44) <= ((float)((float)((float)((float)il2cpp_codegen_multiply((float)L_46, (float)L_49))/(float)(2.0f))))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_012a;
	}

IL_0129:
	{
		G_B6_0 = 0;
	}

IL_012a:
	{
		// if (shouldDeform) {
		if (!G_B6_0)
		{
			goto IL_013f;
		}
	}
	{
		// DeformPortalWithTransform (mainCamera.transform);
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_50 = __this->get_mainCamera_14();
		NullCheck(L_50);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_51;
		L_51 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_50, /*hidden argument*/NULL);
		Portal_DeformPortalWithTransform_m5A2D118E678F85E1CD7E51A4FB52A6238A25DA8A(__this, L_51, /*hidden argument*/NULL);
		// } else if (isDeforming) {
		goto IL_0159;
	}

IL_013f:
	{
		// } else if (isDeforming) {
		bool L_52 = __this->get_isDeforming_17();
		if (!L_52)
		{
			goto IL_0159;
		}
	}
	{
		// isDeforming = false;
		__this->set_isDeforming_17((bool)0);
		// meshDeformer.ClearDeformingForce ();
		MeshDeformer_t552F11EC8166EE3DED6958E9B4F0050853FB31F8 * L_53 = __this->get_meshDeformer_20();
		NullCheck(L_53);
		MeshDeformer_ClearDeformingForce_mF7A576894730ABAA2AEE6491092CB13549F52B18(L_53, /*hidden argument*/NULL);
	}

IL_0159:
	{
		// CheckForTransitionObjects();
		Portal_CheckForTransitionObjects_m010243CA2F1A728821D30CF78118B1A3066DF06A(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Portal::DeformPortalWithTransform(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Portal_DeformPortalWithTransform_m5A2D118E678F85E1CD7E51A4FB52A6238A25DA8A (Portal_t355BC086AE7B4F5E476064C8805CA0830E0CA48E * __this, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___otherTransform0, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// Vector3 convertedPoint = transform.InverseTransformPoint(otherTransform.position);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0;
		L_0 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_1 = ___otherTransform0;
		NullCheck(L_1);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2;
		L_2 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_1, /*hidden argument*/NULL);
		NullCheck(L_0);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3;
		L_3 = Transform_InverseTransformPoint_m476ABC8F3F14824D7D82FE2C54CEE5A151A669B8(L_0, L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		// if ((convertedPoint.z > 0) != triggerZDirection && Mathf.Abs(convertedPoint.z) > portalSwitchDistance) {
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4 = V_0;
		float L_5 = L_4.get_z_4();
		bool L_6 = __this->get_triggerZDirection_21();
		if ((((int32_t)((((float)L_5) > ((float)(0.0f)))? 1 : 0)) == ((int32_t)L_6)))
		{
			goto IL_005b;
		}
	}
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_7 = V_0;
		float L_8 = L_7.get_z_4();
		float L_9;
		L_9 = fabsf(L_8);
		float L_10 = __this->get_portalSwitchDistance_26();
		if ((!(((float)L_9) > ((float)L_10))))
		{
			goto IL_005b;
		}
	}
	{
		// triggerZDirection = (convertedPoint.z > 0);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_11 = V_0;
		float L_12 = L_11.get_z_4();
		__this->set_triggerZDirection_21((bool)((((float)L_12) > ((float)(0.0f)))? 1 : 0));
		// if (isDeforming) {  // if we're not deforming before this, the user could have walked AROUND the portal.
		bool L_13 = __this->get_isDeforming_17();
		if (!L_13)
		{
			goto IL_005b;
		}
	}
	{
		// SwitchDimensions ();
		Portal_SwitchDimensions_m4836758D0E38C2CE972EFFCB6CC8B6C12A7A84E8(__this, /*hidden argument*/NULL);
	}

IL_005b:
	{
		// meshDeformer.AddDeformingForce (otherTransform.position, deformPower, triggerZDirection);
		MeshDeformer_t552F11EC8166EE3DED6958E9B4F0050853FB31F8 * L_14 = __this->get_meshDeformer_20();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_15 = ___otherTransform0;
		NullCheck(L_15);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_16;
		L_16 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_15, /*hidden argument*/NULL);
		float L_17 = __this->get_deformPower_8();
		bool L_18 = __this->get_triggerZDirection_21();
		NullCheck(L_14);
		VirtActionInvoker3< Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E , float, bool >::Invoke(4 /* System.Void MeshDeformer::AddDeformingForce(UnityEngine.Vector3,System.Single,System.Boolean) */, L_14, L_16, L_17, L_18);
		// isDeforming = true;
		__this->set_isDeforming_17((bool)1);
		// }
		return;
	}
}
// System.Void Portal::SwitchPortalDimensions()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Portal_SwitchPortalDimensions_m58C134865A1017CC8B8D1A5404F22B4DF2313E16 (Portal_t355BC086AE7B4F5E476064C8805CA0830E0CA48E * __this, const RuntimeMethod* method)
{
	{
		// dimensionSwitched = !dimensionSwitched;
		bool L_0;
		L_0 = Portal_get_dimensionSwitched_m3D6982DB8172F73BAC01CF743D8511BF6EAA01E3_inline(__this, /*hidden argument*/NULL);
		Portal_set_dimensionSwitched_m9498E0389F4609BD3333FBC5D6DB172660C53C94_inline(__this, (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0), /*hidden argument*/NULL);
		// gameObject.layer = FromDimension ().layer;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1;
		L_1 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		Dimension_t28D074E7D31C414382BEB891CF77CF6345E04C34 * L_2;
		L_2 = Portal_FromDimension_mB4D6D1693AD5BA5303071B6E1A6FBC649757F557(__this, /*hidden argument*/NULL);
		NullCheck(L_2);
		int32_t L_3 = L_2->get_layer_5();
		NullCheck(L_1);
		GameObject_set_layer_m2F946916ACB41A59C46346F5243F2BAC235A36A6(L_1, L_3, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Portal::CheckForTransitionObjects()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Portal_CheckForTransitionObjects_m010243CA2F1A728821D30CF78118B1A3066DF06A (Portal_t355BC086AE7B4F5E476064C8805CA0830E0CA48E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Contains_mABA385C85BB255ADA4BFE2CAD270E2D87D94963F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Remove_mC5BE819CCDA563EAFFEA9336DF45CDDF185E92BF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mB41962F6417D600544FEA4DD58B96F3B2810E572_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectsOfType_TisPortalTransitionObject_t6C6EC1877A4E2BAB5F3366A1E0B7F8C02BC133CE_m012FBA2F979CAC914747591A629AB63129A2FAB3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37  V_1;
	memset((&V_1), 0, sizeof(V_1));
	PortalTransitionObjectU5BU5D_tA3D594946282A5FE045336C6B819F2CEFA26C97A* V_2 = NULL;
	int32_t V_3 = 0;
	PortalTransitionObject_t6C6EC1877A4E2BAB5F3366A1E0B7F8C02BC133CE * V_4 = NULL;
	int32_t G_B5_0 = 0;
	{
		// Vector3 portalSize = meshFilter.mesh.bounds.size;
		MeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A * L_0 = __this->get_meshFilter_19();
		NullCheck(L_0);
		Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * L_1;
		L_1 = MeshFilter_get_mesh_mFC1DF5AFBC1E4269D08628DB83C954882FD2B417(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37  L_2;
		L_2 = Mesh_get_bounds_m8704A23E8BA2D77C89FD4BF4379238062B1BE5DF(L_1, /*hidden argument*/NULL);
		V_1 = L_2;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3;
		L_3 = Bounds_get_size_mB1C37E89879C7810BC9F4210033D9277DAFE2C14((Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37 *)(&V_1), /*hidden argument*/NULL);
		V_0 = L_3;
		// PortalTransitionObject[] objects = FindObjectsOfType<PortalTransitionObject>();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		PortalTransitionObjectU5BU5D_tA3D594946282A5FE045336C6B819F2CEFA26C97A* L_4;
		L_4 = Object_FindObjectsOfType_TisPortalTransitionObject_t6C6EC1877A4E2BAB5F3366A1E0B7F8C02BC133CE_m012FBA2F979CAC914747591A629AB63129A2FAB3(/*hidden argument*/Object_FindObjectsOfType_TisPortalTransitionObject_t6C6EC1877A4E2BAB5F3366A1E0B7F8C02BC133CE_m012FBA2F979CAC914747591A629AB63129A2FAB3_RuntimeMethod_var);
		// foreach(PortalTransitionObject obj in objects) {
		V_2 = L_4;
		V_3 = 0;
		goto IL_015f;
	}

IL_0026:
	{
		// foreach(PortalTransitionObject obj in objects) {
		PortalTransitionObjectU5BU5D_tA3D594946282A5FE045336C6B819F2CEFA26C97A* L_5 = V_2;
		int32_t L_6 = V_3;
		NullCheck(L_5);
		int32_t L_7 = L_6;
		PortalTransitionObject_t6C6EC1877A4E2BAB5F3366A1E0B7F8C02BC133CE * L_8 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		V_4 = L_8;
		// bool shouldDeform =
		//     (Mathf.Pow(transform.InverseTransformDirection(obj.transform.position - this.transform.position).z, 2) <= minimumDeformRangeSquared) && // z direction is close
		//     Mathf.Abs(transform.InverseTransformDirection(obj.transform.position - this.transform.position).x) <= (portalSize.x * transform.lossyScale.x) / 2f &&
		//     Mathf.Abs(transform.InverseTransformDirection(obj.transform.position - this.transform.position).y) <= (portalSize.y * transform.lossyScale.y) / 2f;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_9;
		L_9 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		PortalTransitionObject_t6C6EC1877A4E2BAB5F3366A1E0B7F8C02BC133CE * L_10 = V_4;
		NullCheck(L_10);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_11;
		L_11 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_10, /*hidden argument*/NULL);
		NullCheck(L_11);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12;
		L_12 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_11, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_13;
		L_13 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_13);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_14;
		L_14 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_13, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_15;
		L_15 = Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline(L_12, L_14, /*hidden argument*/NULL);
		NullCheck(L_9);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_16;
		L_16 = Transform_InverseTransformDirection_m9EB6F7A2598FD8D6B52F0A6EBA96A3BAAF68D696(L_9, L_15, /*hidden argument*/NULL);
		float L_17 = L_16.get_z_4();
		float L_18;
		L_18 = powf(L_17, (2.0f));
		float L_19 = __this->get_minimumDeformRangeSquared_16();
		if ((!(((float)L_18) <= ((float)L_19))))
		{
			goto IL_0111;
		}
	}
	{
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_20;
		L_20 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		PortalTransitionObject_t6C6EC1877A4E2BAB5F3366A1E0B7F8C02BC133CE * L_21 = V_4;
		NullCheck(L_21);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_22;
		L_22 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_21, /*hidden argument*/NULL);
		NullCheck(L_22);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_23;
		L_23 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_22, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_24;
		L_24 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_24);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_25;
		L_25 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_24, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_26;
		L_26 = Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline(L_23, L_25, /*hidden argument*/NULL);
		NullCheck(L_20);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_27;
		L_27 = Transform_InverseTransformDirection_m9EB6F7A2598FD8D6B52F0A6EBA96A3BAAF68D696(L_20, L_26, /*hidden argument*/NULL);
		float L_28 = L_27.get_x_2();
		float L_29;
		L_29 = fabsf(L_28);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_30 = V_0;
		float L_31 = L_30.get_x_2();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_32;
		L_32 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_32);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_33;
		L_33 = Transform_get_lossyScale_m469A16F93F135C1E4D5955C7EBDB893D1892A331(L_32, /*hidden argument*/NULL);
		float L_34 = L_33.get_x_2();
		if ((!(((float)L_29) <= ((float)((float)((float)((float)il2cpp_codegen_multiply((float)L_31, (float)L_34))/(float)(2.0f)))))))
		{
			goto IL_0111;
		}
	}
	{
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_35;
		L_35 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		PortalTransitionObject_t6C6EC1877A4E2BAB5F3366A1E0B7F8C02BC133CE * L_36 = V_4;
		NullCheck(L_36);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_37;
		L_37 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_36, /*hidden argument*/NULL);
		NullCheck(L_37);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_38;
		L_38 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_37, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_39;
		L_39 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_39);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_40;
		L_40 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_39, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_41;
		L_41 = Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline(L_38, L_40, /*hidden argument*/NULL);
		NullCheck(L_35);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_42;
		L_42 = Transform_InverseTransformDirection_m9EB6F7A2598FD8D6B52F0A6EBA96A3BAAF68D696(L_35, L_41, /*hidden argument*/NULL);
		float L_43 = L_42.get_y_3();
		float L_44;
		L_44 = fabsf(L_43);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_45 = V_0;
		float L_46 = L_45.get_y_3();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_47;
		L_47 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_47);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_48;
		L_48 = Transform_get_lossyScale_m469A16F93F135C1E4D5955C7EBDB893D1892A331(L_47, /*hidden argument*/NULL);
		float L_49 = L_48.get_y_3();
		G_B5_0 = ((((int32_t)((!(((float)L_44) <= ((float)((float)((float)((float)il2cpp_codegen_multiply((float)L_46, (float)L_49))/(float)(2.0f))))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0112;
	}

IL_0111:
	{
		G_B5_0 = 0;
	}

IL_0112:
	{
		// if (shouldDeform) {
		if (!G_B5_0)
		{
			goto IL_011e;
		}
	}
	{
		// HandleTransition(obj);
		PortalTransitionObject_t6C6EC1877A4E2BAB5F3366A1E0B7F8C02BC133CE * L_50 = V_4;
		Portal_HandleTransition_m5AE0FE539DCB7A9678B98DFD1B8BDA8223A1EA6E(__this, L_50, /*hidden argument*/NULL);
		// } else {
		goto IL_015b;
	}

IL_011e:
	{
		// if (this.transitionObjects.Contains(obj)) {
		List_1_t30FCDC226FA7B79EC342BC4224C0AC67A9A36807 * L_51 = __this->get_transitionObjects_22();
		PortalTransitionObject_t6C6EC1877A4E2BAB5F3366A1E0B7F8C02BC133CE * L_52 = V_4;
		NullCheck(L_51);
		bool L_53;
		L_53 = List_1_Contains_mABA385C85BB255ADA4BFE2CAD270E2D87D94963F(L_51, L_52, /*hidden argument*/List_1_Contains_mABA385C85BB255ADA4BFE2CAD270E2D87D94963F_RuntimeMethod_var);
		if (!L_53)
		{
			goto IL_015b;
		}
	}
	{
		// this.transitionObjects.Remove(obj);
		List_1_t30FCDC226FA7B79EC342BC4224C0AC67A9A36807 * L_54 = __this->get_transitionObjects_22();
		PortalTransitionObject_t6C6EC1877A4E2BAB5F3366A1E0B7F8C02BC133CE * L_55 = V_4;
		NullCheck(L_54);
		bool L_56;
		L_56 = List_1_Remove_mC5BE819CCDA563EAFFEA9336DF45CDDF185E92BF(L_54, L_55, /*hidden argument*/List_1_Remove_mC5BE819CCDA563EAFFEA9336DF45CDDF185E92BF_RuntimeMethod_var);
		// if (this.transitionObjects.Count == 0 && !isDeforming) {
		List_1_t30FCDC226FA7B79EC342BC4224C0AC67A9A36807 * L_57 = __this->get_transitionObjects_22();
		NullCheck(L_57);
		int32_t L_58;
		L_58 = List_1_get_Count_mB41962F6417D600544FEA4DD58B96F3B2810E572_inline(L_57, /*hidden argument*/List_1_get_Count_mB41962F6417D600544FEA4DD58B96F3B2810E572_RuntimeMethod_var);
		if (L_58)
		{
			goto IL_015b;
		}
	}
	{
		bool L_59 = __this->get_isDeforming_17();
		if (L_59)
		{
			goto IL_015b;
		}
	}
	{
		// meshDeformer.ClearDeformingForce();
		MeshDeformer_t552F11EC8166EE3DED6958E9B4F0050853FB31F8 * L_60 = __this->get_meshDeformer_20();
		NullCheck(L_60);
		MeshDeformer_ClearDeformingForce_mF7A576894730ABAA2AEE6491092CB13549F52B18(L_60, /*hidden argument*/NULL);
	}

IL_015b:
	{
		int32_t L_61 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_61, (int32_t)1));
	}

IL_015f:
	{
		// foreach(PortalTransitionObject obj in objects) {
		int32_t L_62 = V_3;
		PortalTransitionObjectU5BU5D_tA3D594946282A5FE045336C6B819F2CEFA26C97A* L_63 = V_2;
		NullCheck(L_63);
		if ((((int32_t)L_62) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_63)->max_length))))))
		{
			goto IL_0026;
		}
	}
	{
		// }
		return;
	}
}
// System.Void Portal::HandleTransition(PortalTransitionObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Portal_HandleTransition_m5AE0FE539DCB7A9678B98DFD1B8BDA8223A1EA6E (Portal_t355BC086AE7B4F5E476064C8805CA0830E0CA48E * __this, PortalTransitionObject_t6C6EC1877A4E2BAB5F3366A1E0B7F8C02BC133CE * ___transitionObject0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m033EECBB287C9A0E63ECF2DD02CAF24195520399_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Contains_mABA385C85BB255ADA4BFE2CAD270E2D87D94963F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_1;
	memset((&V_1), 0, sizeof(V_1));
	float G_B14_0 = 0.0f;
	float* G_B14_1 = NULL;
	float G_B13_0 = 0.0f;
	float* G_B13_1 = NULL;
	float G_B15_0 = 0.0f;
	float G_B15_1 = 0.0f;
	float* G_B15_2 = NULL;
	{
		// if (!this.transitionObjects.Contains(transitionObject)) {
		List_1_t30FCDC226FA7B79EC342BC4224C0AC67A9A36807 * L_0 = __this->get_transitionObjects_22();
		PortalTransitionObject_t6C6EC1877A4E2BAB5F3366A1E0B7F8C02BC133CE * L_1 = ___transitionObject0;
		NullCheck(L_0);
		bool L_2;
		L_2 = List_1_Contains_mABA385C85BB255ADA4BFE2CAD270E2D87D94963F(L_0, L_1, /*hidden argument*/List_1_Contains_mABA385C85BB255ADA4BFE2CAD270E2D87D94963F_RuntimeMethod_var);
		if (L_2)
		{
			goto IL_007f;
		}
	}
	{
		// if (CameraExtensions.CameraForObject(transitionObject.gameObject) != mainCamera && (ignoreRigidbodyTag == "" || !transitionObject.gameObject.CompareTag(ignoreRigidbodyTag))) {
		PortalTransitionObject_t6C6EC1877A4E2BAB5F3366A1E0B7F8C02BC133CE * L_3 = ___transitionObject0;
		NullCheck(L_3);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_4;
		L_4 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_3, /*hidden argument*/NULL);
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_5;
		L_5 = CameraExtensions_CameraForObject_mDFB14F372470D558EF73095B614ACBBFBB96EE73(L_4, /*hidden argument*/NULL);
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_6 = __this->get_mainCamera_14();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_7;
		L_7 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_5, L_6, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_007f;
		}
	}
	{
		String_t* L_8 = __this->get_ignoreRigidbodyTag_9();
		bool L_9;
		L_9 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_8, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, /*hidden argument*/NULL);
		if (L_9)
		{
			goto IL_004b;
		}
	}
	{
		PortalTransitionObject_t6C6EC1877A4E2BAB5F3366A1E0B7F8C02BC133CE * L_10 = ___transitionObject0;
		NullCheck(L_10);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_11;
		L_11 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_10, /*hidden argument*/NULL);
		String_t* L_12 = __this->get_ignoreRigidbodyTag_9();
		NullCheck(L_11);
		bool L_13;
		L_13 = GameObject_CompareTag_mA692D8508984DBE4A2FEFD19E29CB1C9D5CDE001(L_11, L_12, /*hidden argument*/NULL);
		if (L_13)
		{
			goto IL_007f;
		}
	}

IL_004b:
	{
		// transitionObject.triggerZDirection = (transform.InverseTransformPoint(transitionObject.transform.position).z > 0);
		PortalTransitionObject_t6C6EC1877A4E2BAB5F3366A1E0B7F8C02BC133CE * L_14 = ___transitionObject0;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_15;
		L_15 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		PortalTransitionObject_t6C6EC1877A4E2BAB5F3366A1E0B7F8C02BC133CE * L_16 = ___transitionObject0;
		NullCheck(L_16);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_17;
		L_17 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_16, /*hidden argument*/NULL);
		NullCheck(L_17);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_18;
		L_18 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_17, /*hidden argument*/NULL);
		NullCheck(L_15);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_19;
		L_19 = Transform_InverseTransformPoint_m476ABC8F3F14824D7D82FE2C54CEE5A151A669B8(L_15, L_18, /*hidden argument*/NULL);
		float L_20 = L_19.get_z_4();
		NullCheck(L_14);
		L_14->set_triggerZDirection_4((bool)((((float)L_20) > ((float)(0.0f)))? 1 : 0));
		// this.transitionObjects.Add(transitionObject);
		List_1_t30FCDC226FA7B79EC342BC4224C0AC67A9A36807 * L_21 = __this->get_transitionObjects_22();
		PortalTransitionObject_t6C6EC1877A4E2BAB5F3366A1E0B7F8C02BC133CE * L_22 = ___transitionObject0;
		NullCheck(L_21);
		List_1_Add_m033EECBB287C9A0E63ECF2DD02CAF24195520399(L_21, L_22, /*hidden argument*/List_1_Add_m033EECBB287C9A0E63ECF2DD02CAF24195520399_RuntimeMethod_var);
	}

IL_007f:
	{
		// Vector3 convertedPoint = transform.InverseTransformPoint(transitionObject.transform.position);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_23;
		L_23 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		PortalTransitionObject_t6C6EC1877A4E2BAB5F3366A1E0B7F8C02BC133CE * L_24 = ___transitionObject0;
		NullCheck(L_24);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_25;
		L_25 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_24, /*hidden argument*/NULL);
		NullCheck(L_25);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_26;
		L_26 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_25, /*hidden argument*/NULL);
		NullCheck(L_23);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_27;
		L_27 = Transform_InverseTransformPoint_m476ABC8F3F14824D7D82FE2C54CEE5A151A669B8(L_23, L_26, /*hidden argument*/NULL);
		V_0 = L_27;
		// if ((convertedPoint.z > 0) != transitionObject.triggerZDirection) {
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_28 = V_0;
		float L_29 = L_28.get_z_4();
		PortalTransitionObject_t6C6EC1877A4E2BAB5F3366A1E0B7F8C02BC133CE * L_30 = ___transitionObject0;
		NullCheck(L_30);
		bool L_31 = L_30->get_triggerZDirection_4();
		if ((((int32_t)((((float)L_29) > ((float)(0.0f)))? 1 : 0)) == ((int32_t)L_31)))
		{
			goto IL_0102;
		}
	}
	{
		// if (transitionObject.gameObject.layer == FromDimension().layer) {
		PortalTransitionObject_t6C6EC1877A4E2BAB5F3366A1E0B7F8C02BC133CE * L_32 = ___transitionObject0;
		NullCheck(L_32);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_33;
		L_33 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_32, /*hidden argument*/NULL);
		NullCheck(L_33);
		int32_t L_34;
		L_34 = GameObject_get_layer_m9D4C23A2FD105AF9964445BF18A77E8A49012F9F(L_33, /*hidden argument*/NULL);
		Dimension_t28D074E7D31C414382BEB891CF77CF6345E04C34 * L_35;
		L_35 = Portal_FromDimension_mB4D6D1693AD5BA5303071B6E1A6FBC649757F557(__this, /*hidden argument*/NULL);
		NullCheck(L_35);
		int32_t L_36 = L_35->get_layer_5();
		if ((!(((uint32_t)L_34) == ((uint32_t)L_36))))
		{
			goto IL_00dc;
		}
	}
	{
		// DimensionChanger.SwitchDimensions(transitionObject.gameObject, FromDimension(), ToDimension());
		PortalTransitionObject_t6C6EC1877A4E2BAB5F3366A1E0B7F8C02BC133CE * L_37 = ___transitionObject0;
		NullCheck(L_37);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_38;
		L_38 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_37, /*hidden argument*/NULL);
		Dimension_t28D074E7D31C414382BEB891CF77CF6345E04C34 * L_39;
		L_39 = Portal_FromDimension_mB4D6D1693AD5BA5303071B6E1A6FBC649757F557(__this, /*hidden argument*/NULL);
		Dimension_t28D074E7D31C414382BEB891CF77CF6345E04C34 * L_40;
		L_40 = Portal_ToDimension_mD33B18BBDBEDE671CC5737BD70C3CFD5A1738BA3(__this, /*hidden argument*/NULL);
		DimensionChanger_SwitchDimensions_m3AC33B71D55EFC5A6BA9D66B09B3A870061F1385(L_38, L_39, L_40, /*hidden argument*/NULL);
		// } else {
		goto IL_00f3;
	}

IL_00dc:
	{
		// DimensionChanger.SwitchDimensions(transitionObject.gameObject, ToDimension(), FromDimension());
		PortalTransitionObject_t6C6EC1877A4E2BAB5F3366A1E0B7F8C02BC133CE * L_41 = ___transitionObject0;
		NullCheck(L_41);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_42;
		L_42 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_41, /*hidden argument*/NULL);
		Dimension_t28D074E7D31C414382BEB891CF77CF6345E04C34 * L_43;
		L_43 = Portal_ToDimension_mD33B18BBDBEDE671CC5737BD70C3CFD5A1738BA3(__this, /*hidden argument*/NULL);
		Dimension_t28D074E7D31C414382BEB891CF77CF6345E04C34 * L_44;
		L_44 = Portal_FromDimension_mB4D6D1693AD5BA5303071B6E1A6FBC649757F557(__this, /*hidden argument*/NULL);
		DimensionChanger_SwitchDimensions_m3AC33B71D55EFC5A6BA9D66B09B3A870061F1385(L_42, L_43, L_44, /*hidden argument*/NULL);
	}

IL_00f3:
	{
		// transitionObject.triggerZDirection = !transitionObject.triggerZDirection;
		PortalTransitionObject_t6C6EC1877A4E2BAB5F3366A1E0B7F8C02BC133CE * L_45 = ___transitionObject0;
		PortalTransitionObject_t6C6EC1877A4E2BAB5F3366A1E0B7F8C02BC133CE * L_46 = ___transitionObject0;
		NullCheck(L_46);
		bool L_47 = L_46->get_triggerZDirection_4();
		NullCheck(L_45);
		L_45->set_triggerZDirection_4((bool)((((int32_t)L_47) == ((int32_t)0))? 1 : 0));
	}

IL_0102:
	{
		// if (!isDeforming) { // Only deform if the main camera isn't deforming.
		bool L_48 = __this->get_isDeforming_17();
		if (L_48)
		{
			goto IL_016a;
		}
	}
	{
		// Vector3 transformPosition = transitionObject.transform.position;
		PortalTransitionObject_t6C6EC1877A4E2BAB5F3366A1E0B7F8C02BC133CE * L_49 = ___transitionObject0;
		NullCheck(L_49);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_50;
		L_50 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_49, /*hidden argument*/NULL);
		NullCheck(L_50);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_51;
		L_51 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_50, /*hidden argument*/NULL);
		V_1 = L_51;
		// if (Mathf.Abs(convertedPoint.z) < maximumDeformRange) {
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_52 = V_0;
		float L_53 = L_52.get_z_4();
		float L_54;
		L_54 = fabsf(L_53);
		float L_55 = __this->get_maximumDeformRange_7();
		if ((!(((float)L_54) < ((float)L_55))))
		{
			goto IL_0158;
		}
	}
	{
		// convertedPoint.z += triggerZDirection ? maximumDeformRange : -maximumDeformRange;
		float* L_56 = (&V_0)->get_address_of_z_4();
		float* L_57 = L_56;
		float L_58 = *((float*)L_57);
		bool L_59 = __this->get_triggerZDirection_21();
		G_B13_0 = L_58;
		G_B13_1 = L_57;
		if (L_59)
		{
			G_B14_0 = L_58;
			G_B14_1 = L_57;
			goto IL_0143;
		}
	}
	{
		float L_60 = __this->get_maximumDeformRange_7();
		G_B15_0 = ((-L_60));
		G_B15_1 = G_B13_0;
		G_B15_2 = G_B13_1;
		goto IL_0149;
	}

IL_0143:
	{
		float L_61 = __this->get_maximumDeformRange_7();
		G_B15_0 = L_61;
		G_B15_1 = G_B14_0;
		G_B15_2 = G_B14_1;
	}

IL_0149:
	{
		*((float*)G_B15_2) = (float)((float)il2cpp_codegen_add((float)G_B15_1, (float)G_B15_0));
		// transformPosition = transform.TransformPoint(convertedPoint);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_62;
		L_62 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_63 = V_0;
		NullCheck(L_62);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_64;
		L_64 = Transform_TransformPoint_m68AF95765A9279192E601208A9C5170027A5F0D2(L_62, L_63, /*hidden argument*/NULL);
		V_1 = L_64;
	}

IL_0158:
	{
		// meshDeformer.AddDeformingForce(transformPosition, deformPower);
		MeshDeformer_t552F11EC8166EE3DED6958E9B4F0050853FB31F8 * L_65 = __this->get_meshDeformer_20();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_66 = V_1;
		float L_67 = __this->get_deformPower_8();
		NullCheck(L_65);
		MeshDeformer_AddDeformingForce_mE4BDC03DC7322C72885087E924D25CA464FEA9F0(L_65, L_66, L_67, /*hidden argument*/NULL);
	}

IL_016a:
	{
		// }
		return;
	}
}
// Dimension Portal::ToDimension()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Dimension_t28D074E7D31C414382BEB891CF77CF6345E04C34 * Portal_ToDimension_mD33B18BBDBEDE671CC5737BD70C3CFD5A1738BA3 (Portal_t355BC086AE7B4F5E476064C8805CA0830E0CA48E * __this, const RuntimeMethod* method)
{
	{
		// if (dimensionSwitched) {
		bool L_0;
		L_0 = Portal_get_dimensionSwitched_m3D6982DB8172F73BAC01CF743D8511BF6EAA01E3_inline(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_000f;
		}
	}
	{
		// return dimension1;
		Dimension_t28D074E7D31C414382BEB891CF77CF6345E04C34 * L_1 = __this->get_dimension1_4();
		return L_1;
	}

IL_000f:
	{
		// return dimension2;
		Dimension_t28D074E7D31C414382BEB891CF77CF6345E04C34 * L_2 = __this->get_dimension2_5();
		return L_2;
	}
}
// Dimension Portal::FromDimension()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Dimension_t28D074E7D31C414382BEB891CF77CF6345E04C34 * Portal_FromDimension_mB4D6D1693AD5BA5303071B6E1A6FBC649757F557 (Portal_t355BC086AE7B4F5E476064C8805CA0830E0CA48E * __this, const RuntimeMethod* method)
{
	{
		// if (dimensionSwitched) {
		bool L_0;
		L_0 = Portal_get_dimensionSwitched_m3D6982DB8172F73BAC01CF743D8511BF6EAA01E3_inline(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_000f;
		}
	}
	{
		// return dimension2;
		Dimension_t28D074E7D31C414382BEB891CF77CF6345E04C34 * L_1 = __this->get_dimension2_5();
		return L_1;
	}

IL_000f:
	{
		// return dimension1;
		Dimension_t28D074E7D31C414382BEB891CF77CF6345E04C34 * L_2 = __this->get_dimension1_4();
		return L_2;
	}
}
// System.Void Portal::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Portal__ctor_mCEDEA8F6FDFDA34792CDF3092B697B17B3D5F398 (Portal_t355BC086AE7B4F5E476064C8805CA0830E0CA48E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mA4F8E736A8FFB5EBEAD1B891DA67A42E72165F51_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t30FCDC226FA7B79EC342BC4224C0AC67A9A36807_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBBCF69B327CDBBC3FC0F8CDFFD8B395CC7699435);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public float renderQuality = 1f;
		__this->set_renderQuality_6((1.0f));
		// public float maximumDeformRange = 1f;
		__this->set_maximumDeformRange_7((1.0f));
		// public float deformPower = .5f;
		__this->set_deformPower_8((0.5f));
		// public string Notes = "Hover over each variable to get tooltips with more information on what they do. Quick Tip: " +
		//     "Don't set the visible mask to Everything. Select each option you want to be always visible.";
		__this->set_Notes_13(_stringLiteralBBCF69B327CDBBC3FC0F8CDFFD8B395CC7699435);
		// private List<PortalTransitionObject> transitionObjects = new List<PortalTransitionObject> ();
		List_1_t30FCDC226FA7B79EC342BC4224C0AC67A9A36807 * L_0 = (List_1_t30FCDC226FA7B79EC342BC4224C0AC67A9A36807 *)il2cpp_codegen_object_new(List_1_t30FCDC226FA7B79EC342BC4224C0AC67A9A36807_il2cpp_TypeInfo_var);
		List_1__ctor_mA4F8E736A8FFB5EBEAD1B891DA67A42E72165F51(L_0, /*hidden argument*/List_1__ctor_mA4F8E736A8FFB5EBEAD1B891DA67A42E72165F51_RuntimeMethod_var);
		__this->set_transitionObjects_22(L_0);
		// private float portalSwitchDistance = 0.03f;
		__this->set_portalSwitchDistance_26((0.0299999993f));
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void PortalTransitionObject::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PortalTransitionObject__ctor_m1D6B95D1066CB5F4F8454BCBC6B35E333AAD4264 (PortalTransitionObject_t6C6EC1877A4E2BAB5F3366A1E0B7F8C02BC133CE * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void SubdividedCube::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SubdividedCube_Awake_mA2B9B332B60C27255A5910E969204B06CD71DE78 (SubdividedCube_tFFFE4E2DAFE319BFFCCC128B8B956589136D74F5 * __this, const RuntimeMethod* method)
{
	{
		// RenderCube ();
		SubdividedCube_RenderCube_m26801698B0236063961ABC389B62EA4506581E80(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// UnityEngine.Vector3[] SubdividedCube::GetCorners()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* SubdividedCube_GetCorners_m8070C6DEF8434EED092BD1949915FC70FBA790C3 (SubdividedCube_tFFFE4E2DAFE319BFFCCC128B8B956589136D74F5 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Vector3[] corners = new Vector3 [5];
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_0 = (Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4*)(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4*)SZArrayNew(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4_il2cpp_TypeInfo_var, (uint32_t)5);
		// corners [0] = transform.TransformVector(new Vector3 (-0.5f, 0.5f, 0)); // bottom-left
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_1 = L_0;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_2;
		L_2 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3;
		memset((&L_3), 0, sizeof(L_3));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_3), (-0.5f), (0.5f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_2);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4;
		L_4 = Transform_TransformVector_m7C5F87858E82A686A233D1866443ACAEA296AA2B(L_2, L_3, /*hidden argument*/NULL);
		NullCheck(L_1);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )L_4);
		// corners [1] = transform.TransformPoint(new Vector3 (0.5f, 0.5f, 0));  // bottom-right
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_5 = L_1;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_6;
		L_6 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_7;
		memset((&L_7), 0, sizeof(L_7));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_7), (0.5f), (0.5f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_6);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8;
		L_8 = Transform_TransformPoint_m68AF95765A9279192E601208A9C5170027A5F0D2(L_6, L_7, /*hidden argument*/NULL);
		NullCheck(L_5);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(1), (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )L_8);
		// corners [2] = transform.TransformPoint(new Vector3 (-0.5f, -0.5f, 0));  // top-left
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_9 = L_5;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_10;
		L_10 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_11;
		memset((&L_11), 0, sizeof(L_11));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_11), (-0.5f), (-0.5f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_10);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12;
		L_12 = Transform_TransformPoint_m68AF95765A9279192E601208A9C5170027A5F0D2(L_10, L_11, /*hidden argument*/NULL);
		NullCheck(L_9);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(2), (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )L_12);
		// corners [3] = transform.TransformPoint(new Vector3 (0.5f, -0.5f, 0));   // top-right
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_13 = L_9;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_14;
		L_14 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_15;
		memset((&L_15), 0, sizeof(L_15));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_15), (0.5f), (-0.5f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_14);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_16;
		L_16 = Transform_TransformPoint_m68AF95765A9279192E601208A9C5170027A5F0D2(L_14, L_15, /*hidden argument*/NULL);
		NullCheck(L_13);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(3), (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )L_16);
		// corners [4] = transform.TransformPoint(new Vector3 (0, 0, 0));   // center
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_17 = L_13;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_18;
		L_18 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_19;
		memset((&L_19), 0, sizeof(L_19));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_19), (0.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_18);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_20;
		L_20 = Transform_TransformPoint_m68AF95765A9279192E601208A9C5170027A5F0D2(L_18, L_19, /*hidden argument*/NULL);
		NullCheck(L_17);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(4), (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )L_20);
		// return corners;
		return L_17;
	}
}
// System.Void SubdividedCube::RenderCube()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SubdividedCube_RenderCube_m26801698B0236063961ABC389B62EA4506581E80 (SubdividedCube_tFFFE4E2DAFE319BFFCCC128B8B956589136D74F5 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisMeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A_m4E31C5D3D0490AEE405B54BE9F61802EA425B9DC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	float V_4 = 0.0f;
	float V_5 = 0.0f;
	float V_6 = 0.0f;
	{
		// if (meshFilter == null) {
		MeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A * L_0 = __this->get_meshFilter_4();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0025;
		}
	}
	{
		// meshFilter = GetComponent<MeshFilter> ();
		MeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A * L_2;
		L_2 = Component_GetComponent_TisMeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A_m4E31C5D3D0490AEE405B54BE9F61802EA425B9DC(__this, /*hidden argument*/Component_GetComponent_TisMeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A_m4E31C5D3D0490AEE405B54BE9F61802EA425B9DC_RuntimeMethod_var);
		__this->set_meshFilter_4(L_2);
		// mesh = new Mesh ();
		Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * L_3 = (Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 *)il2cpp_codegen_object_new(Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6_il2cpp_TypeInfo_var);
		Mesh__ctor_mA3D8570373462201AD7B8C9586A7F9412E49C2F6(L_3, /*hidden argument*/NULL);
		__this->set_mesh_5(L_3);
	}

IL_0025:
	{
		// float sizeOfFace = 1f / (float)(divisions + 1);
		int32_t L_4 = __this->get_divisions_9();
		V_0 = ((float)((float)(1.0f)/(float)((float)((float)((int32_t)il2cpp_codegen_add((int32_t)L_4, (int32_t)1))))));
		// for (int x = 0; x < divisions + 1; x++) {
		V_1 = 0;
		goto IL_00ff;
	}

IL_003c:
	{
		// for (int y = 0; y < divisions + 1; y++) {
		V_2 = 0;
		goto IL_00ed;
	}

IL_0043:
	{
		// for (int z = 0; z < 1; z++) {
		V_3 = 0;
		goto IL_00e2;
	}

IL_004a:
	{
		// float fx = x * sizeOfFace - 0.5f;
		int32_t L_5 = V_1;
		float L_6 = V_0;
		V_4 = ((float)il2cpp_codegen_subtract((float)((float)il2cpp_codegen_multiply((float)((float)((float)L_5)), (float)L_6)), (float)(0.5f)));
		// float fy = y * sizeOfFace - 0.5f;
		int32_t L_7 = V_2;
		float L_8 = V_0;
		V_5 = ((float)il2cpp_codegen_subtract((float)((float)il2cpp_codegen_multiply((float)((float)((float)L_7)), (float)L_8)), (float)(0.5f)));
		// float fz = -sizeOfFace / 2;
		float L_9 = V_0;
		V_6 = ((float)((float)((-L_9))/(float)(2.0f)));
		// if (x == 0) {
		int32_t L_10 = V_1;
		if (L_10)
		{
			goto IL_007d;
		}
	}
	{
		// AddSquare (fx, fy, fz, sizeOfFace, Direction.West);
		float L_11 = V_4;
		float L_12 = V_5;
		float L_13 = V_6;
		float L_14 = V_0;
		SubdividedCube_AddSquare_m72504394AF49353C31F0FA3E485D35AEE5A313F4(__this, L_11, L_12, L_13, L_14, 2, /*hidden argument*/NULL);
	}

IL_007d:
	{
		// if (x == divisions) {
		int32_t L_15 = V_1;
		int32_t L_16 = __this->get_divisions_9();
		if ((!(((uint32_t)L_15) == ((uint32_t)L_16))))
		{
			goto IL_0094;
		}
	}
	{
		// AddSquare (fx, fy, fz, sizeOfFace, Direction.East);
		float L_17 = V_4;
		float L_18 = V_5;
		float L_19 = V_6;
		float L_20 = V_0;
		SubdividedCube_AddSquare_m72504394AF49353C31F0FA3E485D35AEE5A313F4(__this, L_17, L_18, L_19, L_20, 3, /*hidden argument*/NULL);
	}

IL_0094:
	{
		// if (y == 0) {
		int32_t L_21 = V_2;
		if (L_21)
		{
			goto IL_00a5;
		}
	}
	{
		// AddSquare (fx, fy, fz, sizeOfFace, Direction.Down);
		float L_22 = V_4;
		float L_23 = V_5;
		float L_24 = V_6;
		float L_25 = V_0;
		SubdividedCube_AddSquare_m72504394AF49353C31F0FA3E485D35AEE5A313F4(__this, L_22, L_23, L_24, L_25, 1, /*hidden argument*/NULL);
	}

IL_00a5:
	{
		// if (y == divisions) {
		int32_t L_26 = V_2;
		int32_t L_27 = __this->get_divisions_9();
		if ((!(((uint32_t)L_26) == ((uint32_t)L_27))))
		{
			goto IL_00bc;
		}
	}
	{
		// AddSquare (fx, fy, fz, sizeOfFace, Direction.Up);
		float L_28 = V_4;
		float L_29 = V_5;
		float L_30 = V_6;
		float L_31 = V_0;
		SubdividedCube_AddSquare_m72504394AF49353C31F0FA3E485D35AEE5A313F4(__this, L_28, L_29, L_30, L_31, 0, /*hidden argument*/NULL);
	}

IL_00bc:
	{
		// if (z == 0) {
		int32_t L_32 = V_3;
		if (L_32)
		{
			goto IL_00cd;
		}
	}
	{
		// AddSquare (fx, fy, fz, sizeOfFace, Direction.South);
		float L_33 = V_4;
		float L_34 = V_5;
		float L_35 = V_6;
		float L_36 = V_0;
		SubdividedCube_AddSquare_m72504394AF49353C31F0FA3E485D35AEE5A313F4(__this, L_33, L_34, L_35, L_36, 5, /*hidden argument*/NULL);
	}

IL_00cd:
	{
		// if (z == 0) {
		int32_t L_37 = V_3;
		if (L_37)
		{
			goto IL_00de;
		}
	}
	{
		// AddSquare (fx, fy, fz, sizeOfFace, Direction.North);
		float L_38 = V_4;
		float L_39 = V_5;
		float L_40 = V_6;
		float L_41 = V_0;
		SubdividedCube_AddSquare_m72504394AF49353C31F0FA3E485D35AEE5A313F4(__this, L_38, L_39, L_40, L_41, 4, /*hidden argument*/NULL);
	}

IL_00de:
	{
		// for (int z = 0; z < 1; z++) {
		int32_t L_42 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_42, (int32_t)1));
	}

IL_00e2:
	{
		// for (int z = 0; z < 1; z++) {
		int32_t L_43 = V_3;
		if ((((int32_t)L_43) < ((int32_t)1)))
		{
			goto IL_004a;
		}
	}
	{
		// for (int y = 0; y < divisions + 1; y++) {
		int32_t L_44 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_44, (int32_t)1));
	}

IL_00ed:
	{
		// for (int y = 0; y < divisions + 1; y++) {
		int32_t L_45 = V_2;
		int32_t L_46 = __this->get_divisions_9();
		if ((((int32_t)L_45) < ((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_46, (int32_t)1)))))
		{
			goto IL_0043;
		}
	}
	{
		// for (int x = 0; x < divisions + 1; x++) {
		int32_t L_47 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_47, (int32_t)1));
	}

IL_00ff:
	{
		// for (int x = 0; x < divisions + 1; x++) {
		int32_t L_48 = V_1;
		int32_t L_49 = __this->get_divisions_9();
		if ((((int32_t)L_48) < ((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_49, (int32_t)1)))))
		{
			goto IL_003c;
		}
	}
	{
		// UpdateMesh ();
		SubdividedCube_UpdateMesh_m9BEF3546379935CF14B6D91530326F9B3D8A51B1(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void SubdividedCube::AddSquare(System.Single,System.Single,System.Single,System.Single,Direction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SubdividedCube_AddSquare_m72504394AF49353C31F0FA3E485D35AEE5A313F4 (SubdividedCube_tFFFE4E2DAFE319BFFCCC128B8B956589136D74F5 * __this, float ___x0, float ___y1, float ___z2, float ___size3, int32_t ___direction4, const RuntimeMethod* method)
{
	{
		// if (direction == Direction.Up ||
		//     direction == Direction.Down) {
		int32_t L_0 = ___direction4;
		if (!L_0)
		{
			goto IL_0009;
		}
	}
	{
		int32_t L_1 = ___direction4;
		if ((!(((uint32_t)L_1) == ((uint32_t)1))))
		{
			goto IL_0018;
		}
	}

IL_0009:
	{
		// AddFaceForTopBottom (x, y, z, size, direction);
		float L_2 = ___x0;
		float L_3 = ___y1;
		float L_4 = ___z2;
		float L_5 = ___size3;
		int32_t L_6 = ___direction4;
		SubdividedCube_AddFaceForTopBottom_mF098D3EF4274363CCF661B32553D38A243B25785(__this, L_2, L_3, L_4, L_5, L_6, /*hidden argument*/NULL);
		// } else if (direction == Direction.North ||
		goto IL_0048;
	}

IL_0018:
	{
		// } else if (direction == Direction.North ||
		//     direction == Direction.South) {
		int32_t L_7 = ___direction4;
		if ((((int32_t)L_7) == ((int32_t)4)))
		{
			goto IL_0022;
		}
	}
	{
		int32_t L_8 = ___direction4;
		if ((!(((uint32_t)L_8) == ((uint32_t)5))))
		{
			goto IL_0031;
		}
	}

IL_0022:
	{
		// AddFaceForNorthSouth (x, y, z, size, direction);
		float L_9 = ___x0;
		float L_10 = ___y1;
		float L_11 = ___z2;
		float L_12 = ___size3;
		int32_t L_13 = ___direction4;
		SubdividedCube_AddFaceForNorthSouth_m44D6852CF0FC03A9C7D809F7EB3E7F667C5D69EC(__this, L_9, L_10, L_11, L_12, L_13, /*hidden argument*/NULL);
		// } else if (direction == Direction.West ||
		goto IL_0048;
	}

IL_0031:
	{
		// } else if (direction == Direction.West ||
		//     direction == Direction.East) {
		int32_t L_14 = ___direction4;
		if ((((int32_t)L_14) == ((int32_t)2)))
		{
			goto IL_003b;
		}
	}
	{
		int32_t L_15 = ___direction4;
		if ((!(((uint32_t)L_15) == ((uint32_t)3))))
		{
			goto IL_0048;
		}
	}

IL_003b:
	{
		// AddFaceForWestEast (x, y, z, size, direction);
		float L_16 = ___x0;
		float L_17 = ___y1;
		float L_18 = ___z2;
		float L_19 = ___size3;
		int32_t L_20 = ___direction4;
		SubdividedCube_AddFaceForWestEast_m58161C9C2B962992E22CB61C1E59E65D64209457(__this, L_16, L_17, L_18, L_19, L_20, /*hidden argument*/NULL);
	}

IL_0048:
	{
		// squareCount++;
		int32_t L_21 = __this->get_squareCount_8();
		__this->set_squareCount_8(((int32_t)il2cpp_codegen_add((int32_t)L_21, (int32_t)1)));
		// }
		return;
	}
}
// System.Void SubdividedCube::AddFaceForTopBottom(System.Single,System.Single,System.Single,System.Single,Direction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SubdividedCube_AddFaceForTopBottom_mF098D3EF4274363CCF661B32553D38A243B25785 (SubdividedCube_tFFFE4E2DAFE319BFFCCC128B8B956589136D74F5 * __this, float ___x0, float ___y1, float ___z2, float ___size3, int32_t ___direction4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mAE131B53917AD7132F6BA2C05D5D17C38C5A2E59_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (direction == Direction.Up) {
		int32_t L_0 = ___direction4;
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		// y += size;
		float L_1 = ___y1;
		float L_2 = ___size3;
		___y1 = ((float)il2cpp_codegen_add((float)L_1, (float)L_2));
	}

IL_000a:
	{
		// verticies.Add (new Vector3(x, y, z + size));
		List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * L_3 = __this->get_verticies_6();
		float L_4 = ___x0;
		float L_5 = ___y1;
		float L_6 = ___z2;
		float L_7 = ___size3;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8;
		memset((&L_8), 0, sizeof(L_8));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_8), L_4, L_5, ((float)il2cpp_codegen_add((float)L_6, (float)L_7)), /*hidden argument*/NULL);
		NullCheck(L_3);
		List_1_Add_mAE131B53917AD7132F6BA2C05D5D17C38C5A2E59(L_3, L_8, /*hidden argument*/List_1_Add_mAE131B53917AD7132F6BA2C05D5D17C38C5A2E59_RuntimeMethod_var);
		// verticies.Add (new Vector3(x + size, y , z + size));
		List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * L_9 = __this->get_verticies_6();
		float L_10 = ___x0;
		float L_11 = ___size3;
		float L_12 = ___y1;
		float L_13 = ___z2;
		float L_14 = ___size3;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_15;
		memset((&L_15), 0, sizeof(L_15));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_15), ((float)il2cpp_codegen_add((float)L_10, (float)L_11)), L_12, ((float)il2cpp_codegen_add((float)L_13, (float)L_14)), /*hidden argument*/NULL);
		NullCheck(L_9);
		List_1_Add_mAE131B53917AD7132F6BA2C05D5D17C38C5A2E59(L_9, L_15, /*hidden argument*/List_1_Add_mAE131B53917AD7132F6BA2C05D5D17C38C5A2E59_RuntimeMethod_var);
		// verticies.Add (new Vector3(x + size, y, z));
		List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * L_16 = __this->get_verticies_6();
		float L_17 = ___x0;
		float L_18 = ___size3;
		float L_19 = ___y1;
		float L_20 = ___z2;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_21;
		memset((&L_21), 0, sizeof(L_21));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_21), ((float)il2cpp_codegen_add((float)L_17, (float)L_18)), L_19, L_20, /*hidden argument*/NULL);
		NullCheck(L_16);
		List_1_Add_mAE131B53917AD7132F6BA2C05D5D17C38C5A2E59(L_16, L_21, /*hidden argument*/List_1_Add_mAE131B53917AD7132F6BA2C05D5D17C38C5A2E59_RuntimeMethod_var);
		// verticies.Add (new Vector3(x, y, z));
		List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * L_22 = __this->get_verticies_6();
		float L_23 = ___x0;
		float L_24 = ___y1;
		float L_25 = ___z2;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_26;
		memset((&L_26), 0, sizeof(L_26));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_26), L_23, L_24, L_25, /*hidden argument*/NULL);
		NullCheck(L_22);
		List_1_Add_mAE131B53917AD7132F6BA2C05D5D17C38C5A2E59(L_22, L_26, /*hidden argument*/List_1_Add_mAE131B53917AD7132F6BA2C05D5D17C38C5A2E59_RuntimeMethod_var);
		// AddLatestTriangles (direction != Direction.Up);
		int32_t L_27 = ___direction4;
		SubdividedCube_AddLatestTriangles_m101D021DA7DCB2FE27BB5F94FC4F51D6B5FF645A(__this, (bool)((!(((uint32_t)L_27) <= ((uint32_t)0)))? 1 : 0), /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void SubdividedCube::AddFaceForWestEast(System.Single,System.Single,System.Single,System.Single,Direction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SubdividedCube_AddFaceForWestEast_m58161C9C2B962992E22CB61C1E59E65D64209457 (SubdividedCube_tFFFE4E2DAFE319BFFCCC128B8B956589136D74F5 * __this, float ___x0, float ___y1, float ___z2, float ___size3, int32_t ___direction4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mAE131B53917AD7132F6BA2C05D5D17C38C5A2E59_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (direction == Direction.East) {
		int32_t L_0 = ___direction4;
		if ((!(((uint32_t)L_0) == ((uint32_t)3))))
		{
			goto IL_000b;
		}
	}
	{
		// x += size;
		float L_1 = ___x0;
		float L_2 = ___size3;
		___x0 = ((float)il2cpp_codegen_add((float)L_1, (float)L_2));
	}

IL_000b:
	{
		// verticies.Add ( new Vector3(x, y + size, z) );
		List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * L_3 = __this->get_verticies_6();
		float L_4 = ___x0;
		float L_5 = ___y1;
		float L_6 = ___size3;
		float L_7 = ___z2;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8;
		memset((&L_8), 0, sizeof(L_8));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_8), L_4, ((float)il2cpp_codegen_add((float)L_5, (float)L_6)), L_7, /*hidden argument*/NULL);
		NullCheck(L_3);
		List_1_Add_mAE131B53917AD7132F6BA2C05D5D17C38C5A2E59(L_3, L_8, /*hidden argument*/List_1_Add_mAE131B53917AD7132F6BA2C05D5D17C38C5A2E59_RuntimeMethod_var);
		// verticies.Add ( new Vector3(x, y + size, z + size));
		List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * L_9 = __this->get_verticies_6();
		float L_10 = ___x0;
		float L_11 = ___y1;
		float L_12 = ___size3;
		float L_13 = ___z2;
		float L_14 = ___size3;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_15;
		memset((&L_15), 0, sizeof(L_15));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_15), L_10, ((float)il2cpp_codegen_add((float)L_11, (float)L_12)), ((float)il2cpp_codegen_add((float)L_13, (float)L_14)), /*hidden argument*/NULL);
		NullCheck(L_9);
		List_1_Add_mAE131B53917AD7132F6BA2C05D5D17C38C5A2E59(L_9, L_15, /*hidden argument*/List_1_Add_mAE131B53917AD7132F6BA2C05D5D17C38C5A2E59_RuntimeMethod_var);
		// verticies.Add ( new Vector3(x, y, z + size));
		List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * L_16 = __this->get_verticies_6();
		float L_17 = ___x0;
		float L_18 = ___y1;
		float L_19 = ___z2;
		float L_20 = ___size3;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_21;
		memset((&L_21), 0, sizeof(L_21));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_21), L_17, L_18, ((float)il2cpp_codegen_add((float)L_19, (float)L_20)), /*hidden argument*/NULL);
		NullCheck(L_16);
		List_1_Add_mAE131B53917AD7132F6BA2C05D5D17C38C5A2E59(L_16, L_21, /*hidden argument*/List_1_Add_mAE131B53917AD7132F6BA2C05D5D17C38C5A2E59_RuntimeMethod_var);
		// verticies.Add ( new Vector3(x, y, z));
		List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * L_22 = __this->get_verticies_6();
		float L_23 = ___x0;
		float L_24 = ___y1;
		float L_25 = ___z2;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_26;
		memset((&L_26), 0, sizeof(L_26));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_26), L_23, L_24, L_25, /*hidden argument*/NULL);
		NullCheck(L_22);
		List_1_Add_mAE131B53917AD7132F6BA2C05D5D17C38C5A2E59(L_22, L_26, /*hidden argument*/List_1_Add_mAE131B53917AD7132F6BA2C05D5D17C38C5A2E59_RuntimeMethod_var);
		// AddLatestTriangles (direction != Direction.East);
		int32_t L_27 = ___direction4;
		SubdividedCube_AddLatestTriangles_m101D021DA7DCB2FE27BB5F94FC4F51D6B5FF645A(__this, (bool)((((int32_t)((((int32_t)L_27) == ((int32_t)3))? 1 : 0)) == ((int32_t)0))? 1 : 0), /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void SubdividedCube::AddFaceForNorthSouth(System.Single,System.Single,System.Single,System.Single,Direction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SubdividedCube_AddFaceForNorthSouth_m44D6852CF0FC03A9C7D809F7EB3E7F667C5D69EC (SubdividedCube_tFFFE4E2DAFE319BFFCCC128B8B956589136D74F5 * __this, float ___x0, float ___y1, float ___z2, float ___size3, int32_t ___direction4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mAE131B53917AD7132F6BA2C05D5D17C38C5A2E59_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (direction == Direction.North) {
		int32_t L_0 = ___direction4;
		if ((!(((uint32_t)L_0) == ((uint32_t)4))))
		{
			goto IL_000b;
		}
	}
	{
		// z += size;
		float L_1 = ___z2;
		float L_2 = ___size3;
		___z2 = ((float)il2cpp_codegen_add((float)L_1, (float)L_2));
	}

IL_000b:
	{
		// verticies.Add (new Vector3(x, y + size, z));
		List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * L_3 = __this->get_verticies_6();
		float L_4 = ___x0;
		float L_5 = ___y1;
		float L_6 = ___size3;
		float L_7 = ___z2;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8;
		memset((&L_8), 0, sizeof(L_8));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_8), L_4, ((float)il2cpp_codegen_add((float)L_5, (float)L_6)), L_7, /*hidden argument*/NULL);
		NullCheck(L_3);
		List_1_Add_mAE131B53917AD7132F6BA2C05D5D17C38C5A2E59(L_3, L_8, /*hidden argument*/List_1_Add_mAE131B53917AD7132F6BA2C05D5D17C38C5A2E59_RuntimeMethod_var);
		// verticies.Add (new Vector3(x + size, y + size, z));
		List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * L_9 = __this->get_verticies_6();
		float L_10 = ___x0;
		float L_11 = ___size3;
		float L_12 = ___y1;
		float L_13 = ___size3;
		float L_14 = ___z2;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_15;
		memset((&L_15), 0, sizeof(L_15));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_15), ((float)il2cpp_codegen_add((float)L_10, (float)L_11)), ((float)il2cpp_codegen_add((float)L_12, (float)L_13)), L_14, /*hidden argument*/NULL);
		NullCheck(L_9);
		List_1_Add_mAE131B53917AD7132F6BA2C05D5D17C38C5A2E59(L_9, L_15, /*hidden argument*/List_1_Add_mAE131B53917AD7132F6BA2C05D5D17C38C5A2E59_RuntimeMethod_var);
		// verticies.Add (new Vector3(x + size, y, z));
		List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * L_16 = __this->get_verticies_6();
		float L_17 = ___x0;
		float L_18 = ___size3;
		float L_19 = ___y1;
		float L_20 = ___z2;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_21;
		memset((&L_21), 0, sizeof(L_21));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_21), ((float)il2cpp_codegen_add((float)L_17, (float)L_18)), L_19, L_20, /*hidden argument*/NULL);
		NullCheck(L_16);
		List_1_Add_mAE131B53917AD7132F6BA2C05D5D17C38C5A2E59(L_16, L_21, /*hidden argument*/List_1_Add_mAE131B53917AD7132F6BA2C05D5D17C38C5A2E59_RuntimeMethod_var);
		// verticies.Add (new Vector3(x, y, z));
		List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * L_22 = __this->get_verticies_6();
		float L_23 = ___x0;
		float L_24 = ___y1;
		float L_25 = ___z2;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_26;
		memset((&L_26), 0, sizeof(L_26));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_26), L_23, L_24, L_25, /*hidden argument*/NULL);
		NullCheck(L_22);
		List_1_Add_mAE131B53917AD7132F6BA2C05D5D17C38C5A2E59(L_22, L_26, /*hidden argument*/List_1_Add_mAE131B53917AD7132F6BA2C05D5D17C38C5A2E59_RuntimeMethod_var);
		// AddLatestTriangles (direction != Direction.South);
		int32_t L_27 = ___direction4;
		SubdividedCube_AddLatestTriangles_m101D021DA7DCB2FE27BB5F94FC4F51D6B5FF645A(__this, (bool)((((int32_t)((((int32_t)L_27) == ((int32_t)5))? 1 : 0)) == ((int32_t)0))? 1 : 0), /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void SubdividedCube::AddLatestTriangles(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SubdividedCube_AddLatestTriangles_m101D021DA7DCB2FE27BB5F94FC4F51D6B5FF645A (SubdividedCube_tFFFE4E2DAFE319BFFCCC128B8B956589136D74F5 * __this, bool ___clockwise0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mEE653047BDB3486ACC2E16DC6C3422A0BA48F01F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (clockwise) {
		bool L_0 = ___clockwise0;
		if (!L_0)
		{
			goto IL_007e;
		}
	}
	{
		// triangles.Add(squareCount * 4 ); // 1
		List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * L_1 = __this->get_triangles_7();
		int32_t L_2 = __this->get_squareCount_8();
		NullCheck(L_1);
		List_1_Add_mEE653047BDB3486ACC2E16DC6C3422A0BA48F01F(L_1, ((int32_t)il2cpp_codegen_multiply((int32_t)L_2, (int32_t)4)), /*hidden argument*/List_1_Add_mEE653047BDB3486ACC2E16DC6C3422A0BA48F01F_RuntimeMethod_var);
		// triangles.Add(squareCount * 4 + 1 ); // 2
		List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * L_3 = __this->get_triangles_7();
		int32_t L_4 = __this->get_squareCount_8();
		NullCheck(L_3);
		List_1_Add_mEE653047BDB3486ACC2E16DC6C3422A0BA48F01F(L_3, ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_4, (int32_t)4)), (int32_t)1)), /*hidden argument*/List_1_Add_mEE653047BDB3486ACC2E16DC6C3422A0BA48F01F_RuntimeMethod_var);
		// triangles.Add(squareCount * 4 + 2 ); // 3
		List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * L_5 = __this->get_triangles_7();
		int32_t L_6 = __this->get_squareCount_8();
		NullCheck(L_5);
		List_1_Add_mEE653047BDB3486ACC2E16DC6C3422A0BA48F01F(L_5, ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_6, (int32_t)4)), (int32_t)2)), /*hidden argument*/List_1_Add_mEE653047BDB3486ACC2E16DC6C3422A0BA48F01F_RuntimeMethod_var);
		// triangles.Add(squareCount * 4  ); // 1
		List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * L_7 = __this->get_triangles_7();
		int32_t L_8 = __this->get_squareCount_8();
		NullCheck(L_7);
		List_1_Add_mEE653047BDB3486ACC2E16DC6C3422A0BA48F01F(L_7, ((int32_t)il2cpp_codegen_multiply((int32_t)L_8, (int32_t)4)), /*hidden argument*/List_1_Add_mEE653047BDB3486ACC2E16DC6C3422A0BA48F01F_RuntimeMethod_var);
		// triangles.Add(squareCount * 4 + 2 ); // 3
		List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * L_9 = __this->get_triangles_7();
		int32_t L_10 = __this->get_squareCount_8();
		NullCheck(L_9);
		List_1_Add_mEE653047BDB3486ACC2E16DC6C3422A0BA48F01F(L_9, ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_10, (int32_t)4)), (int32_t)2)), /*hidden argument*/List_1_Add_mEE653047BDB3486ACC2E16DC6C3422A0BA48F01F_RuntimeMethod_var);
		// triangles.Add(squareCount * 4 + 3 ); // 4
		List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * L_11 = __this->get_triangles_7();
		int32_t L_12 = __this->get_squareCount_8();
		NullCheck(L_11);
		List_1_Add_mEE653047BDB3486ACC2E16DC6C3422A0BA48F01F(L_11, ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_12, (int32_t)4)), (int32_t)3)), /*hidden argument*/List_1_Add_mEE653047BDB3486ACC2E16DC6C3422A0BA48F01F_RuntimeMethod_var);
		// } else {
		return;
	}

IL_007e:
	{
		// triangles.Add(squareCount * 4 + 2 ); // 3
		List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * L_13 = __this->get_triangles_7();
		int32_t L_14 = __this->get_squareCount_8();
		NullCheck(L_13);
		List_1_Add_mEE653047BDB3486ACC2E16DC6C3422A0BA48F01F(L_13, ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_14, (int32_t)4)), (int32_t)2)), /*hidden argument*/List_1_Add_mEE653047BDB3486ACC2E16DC6C3422A0BA48F01F_RuntimeMethod_var);
		// triangles.Add(squareCount * 4 + 1 ); // 2
		List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * L_15 = __this->get_triangles_7();
		int32_t L_16 = __this->get_squareCount_8();
		NullCheck(L_15);
		List_1_Add_mEE653047BDB3486ACC2E16DC6C3422A0BA48F01F(L_15, ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_16, (int32_t)4)), (int32_t)1)), /*hidden argument*/List_1_Add_mEE653047BDB3486ACC2E16DC6C3422A0BA48F01F_RuntimeMethod_var);
		// triangles.Add(squareCount * 4 ); // 1
		List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * L_17 = __this->get_triangles_7();
		int32_t L_18 = __this->get_squareCount_8();
		NullCheck(L_17);
		List_1_Add_mEE653047BDB3486ACC2E16DC6C3422A0BA48F01F(L_17, ((int32_t)il2cpp_codegen_multiply((int32_t)L_18, (int32_t)4)), /*hidden argument*/List_1_Add_mEE653047BDB3486ACC2E16DC6C3422A0BA48F01F_RuntimeMethod_var);
		// triangles.Add(squareCount * 4 + 3 ); // 4
		List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * L_19 = __this->get_triangles_7();
		int32_t L_20 = __this->get_squareCount_8();
		NullCheck(L_19);
		List_1_Add_mEE653047BDB3486ACC2E16DC6C3422A0BA48F01F(L_19, ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_20, (int32_t)4)), (int32_t)3)), /*hidden argument*/List_1_Add_mEE653047BDB3486ACC2E16DC6C3422A0BA48F01F_RuntimeMethod_var);
		// triangles.Add(squareCount * 4 + 2 ); // 3
		List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * L_21 = __this->get_triangles_7();
		int32_t L_22 = __this->get_squareCount_8();
		NullCheck(L_21);
		List_1_Add_mEE653047BDB3486ACC2E16DC6C3422A0BA48F01F(L_21, ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_22, (int32_t)4)), (int32_t)2)), /*hidden argument*/List_1_Add_mEE653047BDB3486ACC2E16DC6C3422A0BA48F01F_RuntimeMethod_var);
		// triangles.Add(squareCount * 4  ); // 1
		List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * L_23 = __this->get_triangles_7();
		int32_t L_24 = __this->get_squareCount_8();
		NullCheck(L_23);
		List_1_Add_mEE653047BDB3486ACC2E16DC6C3422A0BA48F01F(L_23, ((int32_t)il2cpp_codegen_multiply((int32_t)L_24, (int32_t)4)), /*hidden argument*/List_1_Add_mEE653047BDB3486ACC2E16DC6C3422A0BA48F01F_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void SubdividedCube::UpdateMesh()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SubdividedCube_UpdateMesh_m9BEF3546379935CF14B6D91530326F9B3D8A51B1 (SubdividedCube_tFFFE4E2DAFE319BFFCCC128B8B956589136D74F5 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_m508B72E5229FAE7042D99A04555F66F10C597C7A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_mE0F03A2E42E2F7F8A282AE01C12945F7379DC702_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_ToArray_mCFFA6AFA30A20FB2FFC3846AD114DF7BC21BFFBC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_ToArray_mDEFFC768D9AAD376D27FC0FC1F7B57EE2E93479F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// mesh.Clear ();
		Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * L_0 = __this->get_mesh_5();
		NullCheck(L_0);
		Mesh_Clear_m7500ECE6209E14CC750CB16B48301B8D2A57ACCE(L_0, /*hidden argument*/NULL);
		// mesh.vertices = verticies.ToArray();
		Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * L_1 = __this->get_mesh_5();
		List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * L_2 = __this->get_verticies_6();
		NullCheck(L_2);
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_3;
		L_3 = List_1_ToArray_mCFFA6AFA30A20FB2FFC3846AD114DF7BC21BFFBC(L_2, /*hidden argument*/List_1_ToArray_mCFFA6AFA30A20FB2FFC3846AD114DF7BC21BFFBC_RuntimeMethod_var);
		NullCheck(L_1);
		Mesh_set_vertices_m38F0908D0FDFE484BE19E94BE9D6176667469AAD(L_1, L_3, /*hidden argument*/NULL);
		// mesh.triangles = triangles.ToArray();
		Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * L_4 = __this->get_mesh_5();
		List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * L_5 = __this->get_triangles_7();
		NullCheck(L_5);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_6;
		L_6 = List_1_ToArray_mDEFFC768D9AAD376D27FC0FC1F7B57EE2E93479F(L_5, /*hidden argument*/List_1_ToArray_mDEFFC768D9AAD376D27FC0FC1F7B57EE2E93479F_RuntimeMethod_var);
		NullCheck(L_4);
		Mesh_set_triangles_mF1D92E67523CD5FDC66A4378FC4AD8D4AD0D5FEC(L_4, L_6, /*hidden argument*/NULL);
		// mesh.RecalculateNormals ();
		Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * L_7 = __this->get_mesh_5();
		NullCheck(L_7);
		Mesh_RecalculateNormals_mEBF9ED932D0B463E4EF3947D232CC8BEECAE1A4A(L_7, /*hidden argument*/NULL);
		// verticies.Clear();
		List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * L_8 = __this->get_verticies_6();
		NullCheck(L_8);
		List_1_Clear_mE0F03A2E42E2F7F8A282AE01C12945F7379DC702(L_8, /*hidden argument*/List_1_Clear_mE0F03A2E42E2F7F8A282AE01C12945F7379DC702_RuntimeMethod_var);
		// triangles.Clear();
		List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * L_9 = __this->get_triangles_7();
		NullCheck(L_9);
		List_1_Clear_m508B72E5229FAE7042D99A04555F66F10C597C7A(L_9, /*hidden argument*/List_1_Clear_m508B72E5229FAE7042D99A04555F66F10C597C7A_RuntimeMethod_var);
		// squareCount = 0;
		__this->set_squareCount_8(0);
		// meshFilter.sharedMesh = mesh;
		MeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A * L_10 = __this->get_meshFilter_4();
		Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * L_11 = __this->get_mesh_5();
		NullCheck(L_10);
		MeshFilter_set_sharedMesh_mC96D5F9AE4BC1D186221F568A4C3CE23572EC958(L_10, L_11, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void SubdividedCube::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SubdividedCube__ctor_m70F730660CAC2B4178C06A3A939DE63B5A25725C (SubdividedCube_tFFFE4E2DAFE319BFFCCC128B8B956589136D74F5 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m45E78772E9157F6CD684A69AAB07CE4082FE5FFD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mF8F23D572031748AD428623AE16803455997E297_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private List<Vector3> verticies = new List<Vector3>();
		List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * L_0 = (List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 *)il2cpp_codegen_object_new(List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181_il2cpp_TypeInfo_var);
		List_1__ctor_mF8F23D572031748AD428623AE16803455997E297(L_0, /*hidden argument*/List_1__ctor_mF8F23D572031748AD428623AE16803455997E297_RuntimeMethod_var);
		__this->set_verticies_6(L_0);
		// private List<int> triangles = new List<int>();
		List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * L_1 = (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 *)il2cpp_codegen_object_new(List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7_il2cpp_TypeInfo_var);
		List_1__ctor_m45E78772E9157F6CD684A69AAB07CE4082FE5FFD(L_1, /*hidden argument*/List_1__ctor_m45E78772E9157F6CD684A69AAB07CE4082FE5FFD_RuntimeMethod_var);
		__this->set_triangles_7(L_1);
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void ThrowObject::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowObject_Start_m45C8F7E874B984B0D327F48C94DC3798A2600202 (ThrowObject_t3A1DF7FE7CFED5FDA16EFB502C2127AB115D6841 * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void ThrowObject::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowObject_Update_mC44C4DAE8BDF4A304161CED83E8EB3EA5533CD9A (ThrowObject_t3A1DF7FE7CFED5FDA16EFB502C2127AB115D6841 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisRigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A_mA1779277BB07CE3D2CB8E340CEA85C40C6B52354_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if (Input.GetMouseButtonDown (0)) {
		bool L_0;
		L_0 = Input_GetMouseButtonDown_m466D81FDCC87C9CB07557B39DCB435EB691F1EF3(0, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0075;
		}
	}
	{
		// Vector3 offset = transform.TransformDirection (new Vector3 (0, 0, 2));
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_1;
		L_1 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2;
		memset((&L_2), 0, sizeof(L_2));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_2), (0.0f), (0.0f), (2.0f), /*hidden argument*/NULL);
		NullCheck(L_1);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3;
		L_3 = Transform_TransformDirection_m6B5E3F0A7C6323159DEC6D9BC035FB53ADD96E91(L_1, L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		// GameObject thrown = Instantiate (objectToThrow, transform.position + offset, Quaternion.identity);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_4 = __this->get_objectToThrow_4();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_5;
		L_5 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_5);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6;
		L_6 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_5, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_7 = V_0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8;
		L_8 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_6, L_7, /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_9;
		L_9 = Quaternion_get_identity_mF2E565DBCE793A1AE6208056D42CA7C59D83A702(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_10;
		L_10 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B(L_4, L_8, L_9, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var);
		// thrown.GetComponent<Rigidbody> ().AddForce (transform.TransformDirection (force));
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_11 = L_10;
		NullCheck(L_11);
		Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * L_12;
		L_12 = GameObject_GetComponent_TisRigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A_mA1779277BB07CE3D2CB8E340CEA85C40C6B52354(L_11, /*hidden argument*/GameObject_GetComponent_TisRigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A_mA1779277BB07CE3D2CB8E340CEA85C40C6B52354_RuntimeMethod_var);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_13;
		L_13 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_14 = __this->get_force_5();
		NullCheck(L_13);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_15;
		L_15 = Transform_TransformDirection_m6B5E3F0A7C6323159DEC6D9BC035FB53ADD96E91(L_13, L_14, /*hidden argument*/NULL);
		NullCheck(L_12);
		Rigidbody_AddForce_mDFB0D57C25682B826999B0074F5C0FD399C6401D(L_12, L_15, /*hidden argument*/NULL);
		// thrown.layer = this.gameObject.layer;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_16;
		L_16 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		NullCheck(L_16);
		int32_t L_17;
		L_17 = GameObject_get_layer_m9D4C23A2FD105AF9964445BF18A77E8A49012F9F(L_16, /*hidden argument*/NULL);
		NullCheck(L_11);
		GameObject_set_layer_m2F946916ACB41A59C46346F5243F2BAC235A36A6(L_11, L_17, /*hidden argument*/NULL);
	}

IL_0075:
	{
		// }
		return;
	}
}
// System.Void ThrowObject::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowObject__ctor_m4FAE03E41475B921E0CE58EAD6F94F4921A4A07A (ThrowObject_t3A1DF7FE7CFED5FDA16EFB502C2127AB115D6841 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityMessage::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityMessage__ctor_m31453D518E0E54753A5581B23A7ABEFD6165C537 (UnityMessage_tE42919C6EDB7FF8FF734D6E4D7246C2C457BA6AD * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
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
// System.Int32 UnityMessageManager::generateId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnityMessageManager_generateId_m044493EEA44FD0FE6040EAAC4F26AF0AA65D32B1 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityMessageManager_t4457746B746B34A7F9397BCF555A92EC97EE7831_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// ID = ID + 1;
		IL2CPP_RUNTIME_CLASS_INIT(UnityMessageManager_t4457746B746B34A7F9397BCF555A92EC97EE7831_il2cpp_TypeInfo_var);
		int32_t L_0 = ((UnityMessageManager_t4457746B746B34A7F9397BCF555A92EC97EE7831_StaticFields*)il2cpp_codegen_static_fields_for(UnityMessageManager_t4457746B746B34A7F9397BCF555A92EC97EE7831_il2cpp_TypeInfo_var))->get_ID_6();
		((UnityMessageManager_t4457746B746B34A7F9397BCF555A92EC97EE7831_StaticFields*)il2cpp_codegen_static_fields_for(UnityMessageManager_t4457746B746B34A7F9397BCF555A92EC97EE7831_il2cpp_TypeInfo_var))->set_ID_6(((int32_t)il2cpp_codegen_add((int32_t)L_0, (int32_t)1)));
		// return ID;
		int32_t L_1 = ((UnityMessageManager_t4457746B746B34A7F9397BCF555A92EC97EE7831_StaticFields*)il2cpp_codegen_static_fields_for(UnityMessageManager_t4457746B746B34A7F9397BCF555A92EC97EE7831_il2cpp_TypeInfo_var))->get_ID_6();
		return L_1;
	}
}
// System.Void UnityMessageManager::add_OnMessage(UnityMessageManager/MessageDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityMessageManager_add_OnMessage_m7F72EFB7A6934E92EE91211BE100AAFAC60F1EF8 (UnityMessageManager_t4457746B746B34A7F9397BCF555A92EC97EE7831 * __this, MessageDelegate_tDCF734AA37209CBABC24AB82639DC96812A92CD9 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MessageDelegate_tDCF734AA37209CBABC24AB82639DC96812A92CD9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	MessageDelegate_tDCF734AA37209CBABC24AB82639DC96812A92CD9 * V_0 = NULL;
	MessageDelegate_tDCF734AA37209CBABC24AB82639DC96812A92CD9 * V_1 = NULL;
	MessageDelegate_tDCF734AA37209CBABC24AB82639DC96812A92CD9 * V_2 = NULL;
	{
		MessageDelegate_tDCF734AA37209CBABC24AB82639DC96812A92CD9 * L_0 = __this->get_OnMessage_7();
		V_0 = L_0;
	}

IL_0007:
	{
		MessageDelegate_tDCF734AA37209CBABC24AB82639DC96812A92CD9 * L_1 = V_0;
		V_1 = L_1;
		MessageDelegate_tDCF734AA37209CBABC24AB82639DC96812A92CD9 * L_2 = V_1;
		MessageDelegate_tDCF734AA37209CBABC24AB82639DC96812A92CD9 * L_3 = ___value0;
		Delegate_t * L_4;
		L_4 = Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((MessageDelegate_tDCF734AA37209CBABC24AB82639DC96812A92CD9 *)CastclassSealed((RuntimeObject*)L_4, MessageDelegate_tDCF734AA37209CBABC24AB82639DC96812A92CD9_il2cpp_TypeInfo_var));
		MessageDelegate_tDCF734AA37209CBABC24AB82639DC96812A92CD9 ** L_5 = __this->get_address_of_OnMessage_7();
		MessageDelegate_tDCF734AA37209CBABC24AB82639DC96812A92CD9 * L_6 = V_2;
		MessageDelegate_tDCF734AA37209CBABC24AB82639DC96812A92CD9 * L_7 = V_1;
		MessageDelegate_tDCF734AA37209CBABC24AB82639DC96812A92CD9 * L_8;
		L_8 = InterlockedCompareExchangeImpl<MessageDelegate_tDCF734AA37209CBABC24AB82639DC96812A92CD9 *>((MessageDelegate_tDCF734AA37209CBABC24AB82639DC96812A92CD9 **)L_5, L_6, L_7);
		V_0 = L_8;
		MessageDelegate_tDCF734AA37209CBABC24AB82639DC96812A92CD9 * L_9 = V_0;
		MessageDelegate_tDCF734AA37209CBABC24AB82639DC96812A92CD9 * L_10 = V_1;
		if ((!(((RuntimeObject*)(MessageDelegate_tDCF734AA37209CBABC24AB82639DC96812A92CD9 *)L_9) == ((RuntimeObject*)(MessageDelegate_tDCF734AA37209CBABC24AB82639DC96812A92CD9 *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void UnityMessageManager::remove_OnMessage(UnityMessageManager/MessageDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityMessageManager_remove_OnMessage_mFBE226643D6E84B5D7931C507A60D9C965B8E2B0 (UnityMessageManager_t4457746B746B34A7F9397BCF555A92EC97EE7831 * __this, MessageDelegate_tDCF734AA37209CBABC24AB82639DC96812A92CD9 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MessageDelegate_tDCF734AA37209CBABC24AB82639DC96812A92CD9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	MessageDelegate_tDCF734AA37209CBABC24AB82639DC96812A92CD9 * V_0 = NULL;
	MessageDelegate_tDCF734AA37209CBABC24AB82639DC96812A92CD9 * V_1 = NULL;
	MessageDelegate_tDCF734AA37209CBABC24AB82639DC96812A92CD9 * V_2 = NULL;
	{
		MessageDelegate_tDCF734AA37209CBABC24AB82639DC96812A92CD9 * L_0 = __this->get_OnMessage_7();
		V_0 = L_0;
	}

IL_0007:
	{
		MessageDelegate_tDCF734AA37209CBABC24AB82639DC96812A92CD9 * L_1 = V_0;
		V_1 = L_1;
		MessageDelegate_tDCF734AA37209CBABC24AB82639DC96812A92CD9 * L_2 = V_1;
		MessageDelegate_tDCF734AA37209CBABC24AB82639DC96812A92CD9 * L_3 = ___value0;
		Delegate_t * L_4;
		L_4 = Delegate_Remove_m8B4AD17254118B2904720D55C9B34FB3DCCBD7D4(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((MessageDelegate_tDCF734AA37209CBABC24AB82639DC96812A92CD9 *)CastclassSealed((RuntimeObject*)L_4, MessageDelegate_tDCF734AA37209CBABC24AB82639DC96812A92CD9_il2cpp_TypeInfo_var));
		MessageDelegate_tDCF734AA37209CBABC24AB82639DC96812A92CD9 ** L_5 = __this->get_address_of_OnMessage_7();
		MessageDelegate_tDCF734AA37209CBABC24AB82639DC96812A92CD9 * L_6 = V_2;
		MessageDelegate_tDCF734AA37209CBABC24AB82639DC96812A92CD9 * L_7 = V_1;
		MessageDelegate_tDCF734AA37209CBABC24AB82639DC96812A92CD9 * L_8;
		L_8 = InterlockedCompareExchangeImpl<MessageDelegate_tDCF734AA37209CBABC24AB82639DC96812A92CD9 *>((MessageDelegate_tDCF734AA37209CBABC24AB82639DC96812A92CD9 **)L_5, L_6, L_7);
		V_0 = L_8;
		MessageDelegate_tDCF734AA37209CBABC24AB82639DC96812A92CD9 * L_9 = V_0;
		MessageDelegate_tDCF734AA37209CBABC24AB82639DC96812A92CD9 * L_10 = V_1;
		if ((!(((RuntimeObject*)(MessageDelegate_tDCF734AA37209CBABC24AB82639DC96812A92CD9 *)L_9) == ((RuntimeObject*)(MessageDelegate_tDCF734AA37209CBABC24AB82639DC96812A92CD9 *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void UnityMessageManager::add_OnFlutterMessage(UnityMessageManager/MessageHandlerDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityMessageManager_add_OnFlutterMessage_m739FF9E4E00FCB9BC32CB2D7892444941B0601AC (UnityMessageManager_t4457746B746B34A7F9397BCF555A92EC97EE7831 * __this, MessageHandlerDelegate_tC9B2C089EAB4A237AFE9F84E05D5D7B196643F28 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MessageHandlerDelegate_tC9B2C089EAB4A237AFE9F84E05D5D7B196643F28_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	MessageHandlerDelegate_tC9B2C089EAB4A237AFE9F84E05D5D7B196643F28 * V_0 = NULL;
	MessageHandlerDelegate_tC9B2C089EAB4A237AFE9F84E05D5D7B196643F28 * V_1 = NULL;
	MessageHandlerDelegate_tC9B2C089EAB4A237AFE9F84E05D5D7B196643F28 * V_2 = NULL;
	{
		MessageHandlerDelegate_tC9B2C089EAB4A237AFE9F84E05D5D7B196643F28 * L_0 = __this->get_OnFlutterMessage_8();
		V_0 = L_0;
	}

IL_0007:
	{
		MessageHandlerDelegate_tC9B2C089EAB4A237AFE9F84E05D5D7B196643F28 * L_1 = V_0;
		V_1 = L_1;
		MessageHandlerDelegate_tC9B2C089EAB4A237AFE9F84E05D5D7B196643F28 * L_2 = V_1;
		MessageHandlerDelegate_tC9B2C089EAB4A237AFE9F84E05D5D7B196643F28 * L_3 = ___value0;
		Delegate_t * L_4;
		L_4 = Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((MessageHandlerDelegate_tC9B2C089EAB4A237AFE9F84E05D5D7B196643F28 *)CastclassSealed((RuntimeObject*)L_4, MessageHandlerDelegate_tC9B2C089EAB4A237AFE9F84E05D5D7B196643F28_il2cpp_TypeInfo_var));
		MessageHandlerDelegate_tC9B2C089EAB4A237AFE9F84E05D5D7B196643F28 ** L_5 = __this->get_address_of_OnFlutterMessage_8();
		MessageHandlerDelegate_tC9B2C089EAB4A237AFE9F84E05D5D7B196643F28 * L_6 = V_2;
		MessageHandlerDelegate_tC9B2C089EAB4A237AFE9F84E05D5D7B196643F28 * L_7 = V_1;
		MessageHandlerDelegate_tC9B2C089EAB4A237AFE9F84E05D5D7B196643F28 * L_8;
		L_8 = InterlockedCompareExchangeImpl<MessageHandlerDelegate_tC9B2C089EAB4A237AFE9F84E05D5D7B196643F28 *>((MessageHandlerDelegate_tC9B2C089EAB4A237AFE9F84E05D5D7B196643F28 **)L_5, L_6, L_7);
		V_0 = L_8;
		MessageHandlerDelegate_tC9B2C089EAB4A237AFE9F84E05D5D7B196643F28 * L_9 = V_0;
		MessageHandlerDelegate_tC9B2C089EAB4A237AFE9F84E05D5D7B196643F28 * L_10 = V_1;
		if ((!(((RuntimeObject*)(MessageHandlerDelegate_tC9B2C089EAB4A237AFE9F84E05D5D7B196643F28 *)L_9) == ((RuntimeObject*)(MessageHandlerDelegate_tC9B2C089EAB4A237AFE9F84E05D5D7B196643F28 *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void UnityMessageManager::remove_OnFlutterMessage(UnityMessageManager/MessageHandlerDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityMessageManager_remove_OnFlutterMessage_m6407A819093B1AFEF9270B4453A3E479124326A5 (UnityMessageManager_t4457746B746B34A7F9397BCF555A92EC97EE7831 * __this, MessageHandlerDelegate_tC9B2C089EAB4A237AFE9F84E05D5D7B196643F28 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MessageHandlerDelegate_tC9B2C089EAB4A237AFE9F84E05D5D7B196643F28_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	MessageHandlerDelegate_tC9B2C089EAB4A237AFE9F84E05D5D7B196643F28 * V_0 = NULL;
	MessageHandlerDelegate_tC9B2C089EAB4A237AFE9F84E05D5D7B196643F28 * V_1 = NULL;
	MessageHandlerDelegate_tC9B2C089EAB4A237AFE9F84E05D5D7B196643F28 * V_2 = NULL;
	{
		MessageHandlerDelegate_tC9B2C089EAB4A237AFE9F84E05D5D7B196643F28 * L_0 = __this->get_OnFlutterMessage_8();
		V_0 = L_0;
	}

IL_0007:
	{
		MessageHandlerDelegate_tC9B2C089EAB4A237AFE9F84E05D5D7B196643F28 * L_1 = V_0;
		V_1 = L_1;
		MessageHandlerDelegate_tC9B2C089EAB4A237AFE9F84E05D5D7B196643F28 * L_2 = V_1;
		MessageHandlerDelegate_tC9B2C089EAB4A237AFE9F84E05D5D7B196643F28 * L_3 = ___value0;
		Delegate_t * L_4;
		L_4 = Delegate_Remove_m8B4AD17254118B2904720D55C9B34FB3DCCBD7D4(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((MessageHandlerDelegate_tC9B2C089EAB4A237AFE9F84E05D5D7B196643F28 *)CastclassSealed((RuntimeObject*)L_4, MessageHandlerDelegate_tC9B2C089EAB4A237AFE9F84E05D5D7B196643F28_il2cpp_TypeInfo_var));
		MessageHandlerDelegate_tC9B2C089EAB4A237AFE9F84E05D5D7B196643F28 ** L_5 = __this->get_address_of_OnFlutterMessage_8();
		MessageHandlerDelegate_tC9B2C089EAB4A237AFE9F84E05D5D7B196643F28 * L_6 = V_2;
		MessageHandlerDelegate_tC9B2C089EAB4A237AFE9F84E05D5D7B196643F28 * L_7 = V_1;
		MessageHandlerDelegate_tC9B2C089EAB4A237AFE9F84E05D5D7B196643F28 * L_8;
		L_8 = InterlockedCompareExchangeImpl<MessageHandlerDelegate_tC9B2C089EAB4A237AFE9F84E05D5D7B196643F28 *>((MessageHandlerDelegate_tC9B2C089EAB4A237AFE9F84E05D5D7B196643F28 **)L_5, L_6, L_7);
		V_0 = L_8;
		MessageHandlerDelegate_tC9B2C089EAB4A237AFE9F84E05D5D7B196643F28 * L_9 = V_0;
		MessageHandlerDelegate_tC9B2C089EAB4A237AFE9F84E05D5D7B196643F28 * L_10 = V_1;
		if ((!(((RuntimeObject*)(MessageHandlerDelegate_tC9B2C089EAB4A237AFE9F84E05D5D7B196643F28 *)L_9) == ((RuntimeObject*)(MessageHandlerDelegate_tC9B2C089EAB4A237AFE9F84E05D5D7B196643F28 *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void UnityMessageManager::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityMessageManager_Start_m366A7C3E50AE07BA45A2A49FE9382E9AA838F54B (UnityMessageManager_t4457746B746B34A7F9397BCF555A92EC97EE7831 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_2__ctor_mE0417B33CF845A6B9324E67D296ADEA562B91DE0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_2_tDEF0DD47461C853F98CD2FF3CEC4F5EE13A19906_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityMessageManager_OnSceneLoaded_mD7DA9C76ADA8D8F30198B4D274FE391150DF7192_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.sceneLoaded += OnSceneLoaded;
		UnityAction_2_tDEF0DD47461C853F98CD2FF3CEC4F5EE13A19906 * L_0 = (UnityAction_2_tDEF0DD47461C853F98CD2FF3CEC4F5EE13A19906 *)il2cpp_codegen_object_new(UnityAction_2_tDEF0DD47461C853F98CD2FF3CEC4F5EE13A19906_il2cpp_TypeInfo_var);
		UnityAction_2__ctor_mE0417B33CF845A6B9324E67D296ADEA562B91DE0(L_0, __this, (intptr_t)((intptr_t)UnityMessageManager_OnSceneLoaded_mD7DA9C76ADA8D8F30198B4D274FE391150DF7192_RuntimeMethod_var), /*hidden argument*/UnityAction_2__ctor_mE0417B33CF845A6B9324E67D296ADEA562B91DE0_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		SceneManager_add_sceneLoaded_m54990A485E2E66739E31090BDC3A4C01EF7729BA(L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityMessageManager::OnSceneLoaded(UnityEngine.SceneManagement.Scene,UnityEngine.SceneManagement.LoadSceneMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityMessageManager_OnSceneLoaded_mD7DA9C76ADA8D8F30198B4D274FE391150DF7192 (UnityMessageManager_t4457746B746B34A7F9397BCF555A92EC97EE7831 * __this, Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  ___scene0, int32_t ___mode1, const RuntimeMethod* method)
{
	{
		// NativeAPI.OnSceneLoaded(scene, mode);
		Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  L_0 = ___scene0;
		int32_t L_1 = ___mode1;
		NativeAPI_OnSceneLoaded_m3664DB25D28063B8628236EA7338D05DEB78694A(L_0, L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityMessageManager::ShowHostMainWindow()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityMessageManager_ShowHostMainWindow_m247203DD3FC1D1995A57C0302A6E23E594A927D2 (UnityMessageManager_t4457746B746B34A7F9397BCF555A92EC97EE7831 * __this, const RuntimeMethod* method)
{
	{
		// NativeAPI.ShowHostMainWindow();
		NativeAPI_ShowHostMainWindow_mF11F3AE0A8A16104D2546D5225A967CAEF20F494(/*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityMessageManager::UnloadMainWindow()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityMessageManager_UnloadMainWindow_m37214FA2AE636F567825DB030434D31C80223593 (UnityMessageManager_t4457746B746B34A7F9397BCF555A92EC97EE7831 * __this, const RuntimeMethod* method)
{
	{
		// NativeAPI.UnloadMainWindow();
		NativeAPI_UnloadMainWindow_mC078E094545CA94E5BAF399E7C8B75E39274A855(/*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityMessageManager::QuitUnityWindow()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityMessageManager_QuitUnityWindow_m08F6EEDA9F59BB793055A6101DD1ACD62F18F49F (UnityMessageManager_t4457746B746B34A7F9397BCF555A92EC97EE7831 * __this, const RuntimeMethod* method)
{
	{
		// NativeAPI.QuitUnityWindow();
		NativeAPI_QuitUnityWindow_m53C753446251C8F1D17D43FAC31BFC8DAEB12607(/*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityMessageManager::SendMessageToFlutter(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityMessageManager_SendMessageToFlutter_mABF45FAA298107DDF065EC21C6925F3C7A4C3FA7 (UnityMessageManager_t4457746B746B34A7F9397BCF555A92EC97EE7831 * __this, String_t* ___message0, const RuntimeMethod* method)
{
	{
		// NativeAPI.SendMessageToFlutter(message);
		String_t* L_0 = ___message0;
		NativeAPI_SendMessageToFlutter_m589A00F5AE6DABEECC576A5E6BC709850513AE9B(L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityMessageManager::SendMessageToFlutter(UnityMessage)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityMessageManager_SendMessageToFlutter_m72DFFAE91711298BB40833DC9C92B0D3BD778C65 (UnityMessageManager_t4457746B746B34A7F9397BCF555A92EC97EE7831 * __this, UnityMessage_tE42919C6EDB7FF8FF734D6E4D7246C2C457BA6AD * ___message0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_m2097BED9B4E3EDCC2144E58088BF028DB0B48D99_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SingletonMonoBehaviour_1_get_Instance_m2219FD0089F95EA990F58F8DC6D47F79E9FCECC2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SingletonMonoBehaviour_1_tCE345733DAFD7C69997F22704982E2372C4BFCDD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ef__AnonymousType0_4__ctor_mFFC0CC0C01AE7B3F6573354A43AFF96C09074D0F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ef__AnonymousType0_4_tDE5000E5AA6D2F551A599D76967B42844AC60EE5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityMessageManager_t4457746B746B34A7F9397BCF555A92EC97EE7831_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2AD47C03F7A83F82E3B2ADFE8A60F1727FD3BEFD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEA64C610DFA863C445196F98AE1C59C7E6F1B8EC);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	JObject_tD2FCDDA48CACDBCB702BAF49B7C649084F6FDA34 * V_1 = NULL;
	int32_t G_B4_0 = 0;
	int32_t G_B3_0 = 0;
	String_t* G_B5_0 = NULL;
	int32_t G_B5_1 = 0;
	{
		// int id = generateId();
		IL2CPP_RUNTIME_CLASS_INIT(UnityMessageManager_t4457746B746B34A7F9397BCF555A92EC97EE7831_il2cpp_TypeInfo_var);
		int32_t L_0;
		L_0 = UnityMessageManager_generateId_m044493EEA44FD0FE6040EAAC4F26AF0AA65D32B1(/*hidden argument*/NULL);
		V_0 = L_0;
		// if (message.callBack != null)
		UnityMessage_tE42919C6EDB7FF8FF734D6E4D7246C2C457BA6AD * L_1 = ___message0;
		NullCheck(L_1);
		Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * L_2 = L_1->get_callBack_2();
		if (!L_2)
		{
			goto IL_001b;
		}
	}
	{
		// waitCallbackMessageMap.Add(id, message);
		Dictionary_2_t0BC3AC5C2146DD06B35F47A5F473B1D0090A809E * L_3 = __this->get_waitCallbackMessageMap_9();
		int32_t L_4 = V_0;
		UnityMessage_tE42919C6EDB7FF8FF734D6E4D7246C2C457BA6AD * L_5 = ___message0;
		NullCheck(L_3);
		Dictionary_2_Add_m2097BED9B4E3EDCC2144E58088BF028DB0B48D99(L_3, L_4, L_5, /*hidden argument*/Dictionary_2_Add_m2097BED9B4E3EDCC2144E58088BF028DB0B48D99_RuntimeMethod_var);
	}

IL_001b:
	{
		// JObject o = JObject.FromObject(new
		// {
		//     id = id,
		//     seq = message.callBack != null ? "start" : "",
		//     name = message.name,
		//     data = message.data
		// });
		int32_t L_6 = V_0;
		UnityMessage_tE42919C6EDB7FF8FF734D6E4D7246C2C457BA6AD * L_7 = ___message0;
		NullCheck(L_7);
		Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * L_8 = L_7->get_callBack_2();
		G_B3_0 = L_6;
		if (L_8)
		{
			G_B4_0 = L_6;
			goto IL_002b;
		}
	}
	{
		G_B5_0 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		G_B5_1 = G_B3_0;
		goto IL_0030;
	}

IL_002b:
	{
		G_B5_0 = _stringLiteral2AD47C03F7A83F82E3B2ADFE8A60F1727FD3BEFD;
		G_B5_1 = G_B4_0;
	}

IL_0030:
	{
		UnityMessage_tE42919C6EDB7FF8FF734D6E4D7246C2C457BA6AD * L_9 = ___message0;
		NullCheck(L_9);
		String_t* L_10 = L_9->get_name_0();
		UnityMessage_tE42919C6EDB7FF8FF734D6E4D7246C2C457BA6AD * L_11 = ___message0;
		NullCheck(L_11);
		JObject_tD2FCDDA48CACDBCB702BAF49B7C649084F6FDA34 * L_12 = L_11->get_data_1();
		U3CU3Ef__AnonymousType0_4_tDE5000E5AA6D2F551A599D76967B42844AC60EE5 * L_13 = (U3CU3Ef__AnonymousType0_4_tDE5000E5AA6D2F551A599D76967B42844AC60EE5 *)il2cpp_codegen_object_new(U3CU3Ef__AnonymousType0_4_tDE5000E5AA6D2F551A599D76967B42844AC60EE5_il2cpp_TypeInfo_var);
		U3CU3Ef__AnonymousType0_4__ctor_mFFC0CC0C01AE7B3F6573354A43AFF96C09074D0F(L_13, G_B5_1, G_B5_0, L_10, L_12, /*hidden argument*/U3CU3Ef__AnonymousType0_4__ctor_mFFC0CC0C01AE7B3F6573354A43AFF96C09074D0F_RuntimeMethod_var);
		JObject_tD2FCDDA48CACDBCB702BAF49B7C649084F6FDA34 * L_14;
		L_14 = JObject_FromObject_m084AF0C231311BFEBCA73D333450C8413CE0C426(L_13, /*hidden argument*/NULL);
		V_1 = L_14;
		// UnityMessageManager.Instance.SendMessageToFlutter(MessagePrefix + o.ToString());
		IL2CPP_RUNTIME_CLASS_INIT(SingletonMonoBehaviour_1_tCE345733DAFD7C69997F22704982E2372C4BFCDD_il2cpp_TypeInfo_var);
		UnityMessageManager_t4457746B746B34A7F9397BCF555A92EC97EE7831 * L_15;
		L_15 = SingletonMonoBehaviour_1_get_Instance_m2219FD0089F95EA990F58F8DC6D47F79E9FCECC2(/*hidden argument*/SingletonMonoBehaviour_1_get_Instance_m2219FD0089F95EA990F58F8DC6D47F79E9FCECC2_RuntimeMethod_var);
		JObject_tD2FCDDA48CACDBCB702BAF49B7C649084F6FDA34 * L_16 = V_1;
		NullCheck(L_16);
		String_t* L_17;
		L_17 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_16);
		String_t* L_18;
		L_18 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteralEA64C610DFA863C445196F98AE1C59C7E6F1B8EC, L_17, /*hidden argument*/NULL);
		NullCheck(L_15);
		UnityMessageManager_SendMessageToFlutter_mABF45FAA298107DDF065EC21C6925F3C7A4C3FA7(L_15, L_18, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityMessageManager::onMessage(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityMessageManager_onMessage_m4D0F43F8D328F97496576D9930AAB3686E6A8558 (UnityMessageManager_t4457746B746B34A7F9397BCF555A92EC97EE7831 * __this, String_t* ___message0, const RuntimeMethod* method)
{
	{
		// if (OnMessage != null)
		MessageDelegate_tDCF734AA37209CBABC24AB82639DC96812A92CD9 * L_0 = __this->get_OnMessage_7();
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		// OnMessage(message);
		MessageDelegate_tDCF734AA37209CBABC24AB82639DC96812A92CD9 * L_1 = __this->get_OnMessage_7();
		String_t* L_2 = ___message0;
		NullCheck(L_1);
		MessageDelegate_Invoke_m38A45D4D87F60621AB4E4B6A68DDDE146B332DDD(L_1, L_2, /*hidden argument*/NULL);
	}

IL_0014:
	{
		// }
		return;
	}
}
// System.Void UnityMessageManager::onFlutterMessage(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityMessageManager_onFlutterMessage_m1A5DC207EFB4A24E9571BDA6EBD3D8E3AFBB576F (UnityMessageManager_t4457746B746B34A7F9397BCF555A92EC97EE7831 * __this, String_t* ___message0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_Invoke_m587509C88BB83721D7918D89DF07606BB752D744_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Remove_m273238F996359EBF987A2836DA52FBF359AEFB67_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_m0382483D7D84AC88696EFBBD3566B8B7B4C927D5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MessageHandler_getData_TisRuntimeObject_m4B0F54A0EA8EBDB824898342D0FB18471D377EC9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA2F4AC9DD8E1FAC5257E5F7BA5EE1C7C7E5F7AB1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEA64C610DFA863C445196F98AE1C59C7E6F1B8EC);
		s_Il2CppMethodInitialized = true;
	}
	MessageHandler_t61D3A022CD7E59124898915FB6A1EB56ACBF19B7 * V_0 = NULL;
	UnityMessage_tE42919C6EDB7FF8FF734D6E4D7246C2C457BA6AD * V_1 = NULL;
	{
		// if (message.StartsWith(MessagePrefix))
		String_t* L_0 = ___message0;
		NullCheck(L_0);
		bool L_1;
		L_1 = String_StartsWith_mDE2FF98CAFFD13F88EDEB6C40158DDF840BFCF12(L_0, _stringLiteralEA64C610DFA863C445196F98AE1C59C7E6F1B8EC, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0021;
		}
	}
	{
		// message = message.Replace(MessagePrefix, "");
		String_t* L_2 = ___message0;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = String_Replace_m98184150DC4E2FBDF13E723BF5B7353D9602AC4D(L_2, _stringLiteralEA64C610DFA863C445196F98AE1C59C7E6F1B8EC, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, /*hidden argument*/NULL);
		___message0 = L_3;
		// }
		goto IL_0022;
	}

IL_0021:
	{
		// return;
		return;
	}

IL_0022:
	{
		// MessageHandler handler = MessageHandler.Deserialize(message);
		String_t* L_4 = ___message0;
		MessageHandler_t61D3A022CD7E59124898915FB6A1EB56ACBF19B7 * L_5;
		L_5 = MessageHandler_Deserialize_mFD7001A5166EDD8386B2979B3C0FDC4544D0F123(L_4, /*hidden argument*/NULL);
		V_0 = L_5;
		// if ("end".Equals(handler.seq))
		MessageHandler_t61D3A022CD7E59124898915FB6A1EB56ACBF19B7 * L_6 = V_0;
		NullCheck(L_6);
		String_t* L_7 = L_6->get_seq_1();
		NullCheck(_stringLiteralA2F4AC9DD8E1FAC5257E5F7BA5EE1C7C7E5F7AB1);
		bool L_8;
		L_8 = String_Equals_m8A062B96B61A7D652E7D73C9B3E904F6B0E5F41D(_stringLiteralA2F4AC9DD8E1FAC5257E5F7BA5EE1C7C7E5F7AB1, L_7, /*hidden argument*/NULL);
		if (!L_8)
		{
			goto IL_007c;
		}
	}
	{
		// if (waitCallbackMessageMap.TryGetValue(handler.id, out m))
		Dictionary_2_t0BC3AC5C2146DD06B35F47A5F473B1D0090A809E * L_9 = __this->get_waitCallbackMessageMap_9();
		MessageHandler_t61D3A022CD7E59124898915FB6A1EB56ACBF19B7 * L_10 = V_0;
		NullCheck(L_10);
		int32_t L_11 = L_10->get_id_0();
		NullCheck(L_9);
		bool L_12;
		L_12 = Dictionary_2_TryGetValue_m0382483D7D84AC88696EFBBD3566B8B7B4C927D5(L_9, L_11, (UnityMessage_tE42919C6EDB7FF8FF734D6E4D7246C2C457BA6AD **)(&V_1), /*hidden argument*/Dictionary_2_TryGetValue_m0382483D7D84AC88696EFBBD3566B8B7B4C927D5_RuntimeMethod_var);
		if (!L_12)
		{
			goto IL_007b;
		}
	}
	{
		// waitCallbackMessageMap.Remove(handler.id);
		Dictionary_2_t0BC3AC5C2146DD06B35F47A5F473B1D0090A809E * L_13 = __this->get_waitCallbackMessageMap_9();
		MessageHandler_t61D3A022CD7E59124898915FB6A1EB56ACBF19B7 * L_14 = V_0;
		NullCheck(L_14);
		int32_t L_15 = L_14->get_id_0();
		NullCheck(L_13);
		bool L_16;
		L_16 = Dictionary_2_Remove_m273238F996359EBF987A2836DA52FBF359AEFB67(L_13, L_15, /*hidden argument*/Dictionary_2_Remove_m273238F996359EBF987A2836DA52FBF359AEFB67_RuntimeMethod_var);
		// if (m.callBack != null)
		UnityMessage_tE42919C6EDB7FF8FF734D6E4D7246C2C457BA6AD * L_17 = V_1;
		NullCheck(L_17);
		Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * L_18 = L_17->get_callBack_2();
		if (!L_18)
		{
			goto IL_007b;
		}
	}
	{
		// m.callBack(handler.getData<object>()); // todo
		UnityMessage_tE42919C6EDB7FF8FF734D6E4D7246C2C457BA6AD * L_19 = V_1;
		NullCheck(L_19);
		Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * L_20 = L_19->get_callBack_2();
		MessageHandler_t61D3A022CD7E59124898915FB6A1EB56ACBF19B7 * L_21 = V_0;
		NullCheck(L_21);
		RuntimeObject * L_22;
		L_22 = MessageHandler_getData_TisRuntimeObject_m4B0F54A0EA8EBDB824898342D0FB18471D377EC9(L_21, /*hidden argument*/MessageHandler_getData_TisRuntimeObject_m4B0F54A0EA8EBDB824898342D0FB18471D377EC9_RuntimeMethod_var);
		NullCheck(L_20);
		Action_1_Invoke_m587509C88BB83721D7918D89DF07606BB752D744(L_20, L_22, /*hidden argument*/Action_1_Invoke_m587509C88BB83721D7918D89DF07606BB752D744_RuntimeMethod_var);
	}

IL_007b:
	{
		// return;
		return;
	}

IL_007c:
	{
		// if (OnFlutterMessage != null)
		MessageHandlerDelegate_tC9B2C089EAB4A237AFE9F84E05D5D7B196643F28 * L_23 = __this->get_OnFlutterMessage_8();
		if (!L_23)
		{
			goto IL_0090;
		}
	}
	{
		// OnFlutterMessage(handler);
		MessageHandlerDelegate_tC9B2C089EAB4A237AFE9F84E05D5D7B196643F28 * L_24 = __this->get_OnFlutterMessage_8();
		MessageHandler_t61D3A022CD7E59124898915FB6A1EB56ACBF19B7 * L_25 = V_0;
		NullCheck(L_24);
		MessageHandlerDelegate_Invoke_m001CCB602D2B55DD220BF06E2AA4828575197FFE(L_24, L_25, /*hidden argument*/NULL);
	}

IL_0090:
	{
		// }
		return;
	}
}
// System.Void UnityMessageManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityMessageManager__ctor_m03CBB4E08C8BA079E07D430AD377D38400DB82BF (UnityMessageManager_t4457746B746B34A7F9397BCF555A92EC97EE7831 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_mCDC1ED9FB26C45BCA609A92B7AA9757038C7C147_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t0BC3AC5C2146DD06B35F47A5F473B1D0090A809E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SingletonMonoBehaviour_1__ctor_m0FD850D200F04E2F76476533783D9581729AB59F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SingletonMonoBehaviour_1_tCE345733DAFD7C69997F22704982E2372C4BFCDD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private Dictionary<int, UnityMessage> waitCallbackMessageMap = new Dictionary<int, UnityMessage>();
		Dictionary_2_t0BC3AC5C2146DD06B35F47A5F473B1D0090A809E * L_0 = (Dictionary_2_t0BC3AC5C2146DD06B35F47A5F473B1D0090A809E *)il2cpp_codegen_object_new(Dictionary_2_t0BC3AC5C2146DD06B35F47A5F473B1D0090A809E_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_mCDC1ED9FB26C45BCA609A92B7AA9757038C7C147(L_0, /*hidden argument*/Dictionary_2__ctor_mCDC1ED9FB26C45BCA609A92B7AA9757038C7C147_RuntimeMethod_var);
		__this->set_waitCallbackMessageMap_9(L_0);
		IL2CPP_RUNTIME_CLASS_INIT(SingletonMonoBehaviour_1_tCE345733DAFD7C69997F22704982E2372C4BFCDD_il2cpp_TypeInfo_var);
		SingletonMonoBehaviour_1__ctor_m0FD850D200F04E2F76476533783D9581729AB59F(__this, /*hidden argument*/SingletonMonoBehaviour_1__ctor_m0FD850D200F04E2F76476533783D9581729AB59F_RuntimeMethod_var);
		return;
	}
}
// System.Void UnityMessageManager::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityMessageManager__cctor_m89611F0C2BAAF282BE647049B11F835262EFDB73 (const RuntimeMethod* method)
{
	{
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
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_MessageDelegate_tDCF734AA37209CBABC24AB82639DC96812A92CD9 (MessageDelegate_tDCF734AA37209CBABC24AB82639DC96812A92CD9 * __this, String_t* ___message0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(char*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Marshaling of parameter '___message0' to native representation
	char* ____message0_marshaled = NULL;
	____message0_marshaled = il2cpp_codegen_marshal_string(___message0);

	// Native function invocation
	il2cppPInvokeFunc(____message0_marshaled);

	// Marshaling cleanup of parameter '___message0' native representation
	il2cpp_codegen_marshal_free(____message0_marshaled);
	____message0_marshaled = NULL;

}
// System.Void UnityMessageManager/MessageDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MessageDelegate__ctor_mABBBB0720CEC9ADB6560700A2EE640194D040EF8 (MessageDelegate_tDCF734AA37209CBABC24AB82639DC96812A92CD9 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityMessageManager/MessageDelegate::Invoke(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MessageDelegate_Invoke_m38A45D4D87F60621AB4E4B6A68DDDE146B332DDD (MessageDelegate_tDCF734AA37209CBABC24AB82639DC96812A92CD9 * __this, String_t* ___message0, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
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
			if (___parameterCount == 1)
			{
				// open
				typedef void (*FunctionPointerType) (String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___message0, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___message0, targetMethod);
			}
		}
		else if (___parameterCount != 1)
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker0::Invoke(targetMethod, ___message0);
					else
						GenericVirtActionInvoker0::Invoke(targetMethod, ___message0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___message0);
					else
						VirtActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___message0);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___message0, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< String_t* >::Invoke(targetMethod, targetThis, ___message0);
					else
						GenericVirtActionInvoker1< String_t* >::Invoke(targetMethod, targetThis, ___message0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___message0);
					else
						VirtActionInvoker1< String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___message0);
				}
			}
			else
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (String_t*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___message0, targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, String_t*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___message0, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult UnityMessageManager/MessageDelegate::BeginInvoke(System.String,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MessageDelegate_BeginInvoke_m5FD705274B59AF179AE22FF30A248A4A24B4BECA (MessageDelegate_tDCF734AA37209CBABC24AB82639DC96812A92CD9 * __this, String_t* ___message0, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___message0;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);;
}
// System.Void UnityMessageManager/MessageDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MessageDelegate_EndInvoke_m8EB1088C4795F088A729524E99334E63ED48E6B7 (MessageDelegate_tDCF734AA37209CBABC24AB82639DC96812A92CD9 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityMessageManager/MessageHandlerDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MessageHandlerDelegate__ctor_m27BFC33CA6935FF169ED735C704019CD4DF0E8C1 (MessageHandlerDelegate_tC9B2C089EAB4A237AFE9F84E05D5D7B196643F28 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityMessageManager/MessageHandlerDelegate::Invoke(MessageHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MessageHandlerDelegate_Invoke_m001CCB602D2B55DD220BF06E2AA4828575197FFE (MessageHandlerDelegate_tC9B2C089EAB4A237AFE9F84E05D5D7B196643F28 * __this, MessageHandler_t61D3A022CD7E59124898915FB6A1EB56ACBF19B7 * ___handler0, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
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
			if (___parameterCount == 1)
			{
				// open
				typedef void (*FunctionPointerType) (MessageHandler_t61D3A022CD7E59124898915FB6A1EB56ACBF19B7 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___handler0, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, MessageHandler_t61D3A022CD7E59124898915FB6A1EB56ACBF19B7 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___handler0, targetMethod);
			}
		}
		else if (___parameterCount != 1)
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker0::Invoke(targetMethod, ___handler0);
					else
						GenericVirtActionInvoker0::Invoke(targetMethod, ___handler0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___handler0);
					else
						VirtActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___handler0);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (MessageHandler_t61D3A022CD7E59124898915FB6A1EB56ACBF19B7 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___handler0, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< MessageHandler_t61D3A022CD7E59124898915FB6A1EB56ACBF19B7 * >::Invoke(targetMethod, targetThis, ___handler0);
					else
						GenericVirtActionInvoker1< MessageHandler_t61D3A022CD7E59124898915FB6A1EB56ACBF19B7 * >::Invoke(targetMethod, targetThis, ___handler0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< MessageHandler_t61D3A022CD7E59124898915FB6A1EB56ACBF19B7 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___handler0);
					else
						VirtActionInvoker1< MessageHandler_t61D3A022CD7E59124898915FB6A1EB56ACBF19B7 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___handler0);
				}
			}
			else
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (MessageHandler_t61D3A022CD7E59124898915FB6A1EB56ACBF19B7 *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___handler0, targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, MessageHandler_t61D3A022CD7E59124898915FB6A1EB56ACBF19B7 *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___handler0, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult UnityMessageManager/MessageHandlerDelegate::BeginInvoke(MessageHandler,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MessageHandlerDelegate_BeginInvoke_m6F3C7C037B912D8BD1CB2FAB6CF0E8D8CB3825BA (MessageHandlerDelegate_tC9B2C089EAB4A237AFE9F84E05D5D7B196643F28 * __this, MessageHandler_t61D3A022CD7E59124898915FB6A1EB56ACBF19B7 * ___handler0, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___handler0;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);;
}
// System.Void UnityMessageManager/MessageHandlerDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MessageHandlerDelegate_EndInvoke_mE67B6A56FC2D25FC6BAE72DF3DDA9A01260DF3D2 (MessageHandlerDelegate_tC9B2C089EAB4A237AFE9F84E05D5D7B196643F28 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method)
{
	{
		float L_0 = ___x0;
		__this->set_x_2(L_0);
		float L_1 = ___y1;
		__this->set_y_3(L_1);
		float L_2 = ___z2;
		__this->set_z_4(L_2);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * __this, float ___x0, float ___y1, const RuntimeMethod* method)
{
	{
		float L_0 = ___x0;
		__this->set_x_0(L_0);
		float L_1 = ___y1;
		__this->set_y_1(L_1);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector2_op_Implicit_m4FA146E613DBFE6C1C4B0E9B461D622E6F2FC294_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___v0, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_0 = ___v0;
		float L_1 = L_0.get_x_0();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_2 = ___v0;
		float L_3 = L_2.get_y_1();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_4), L_1, L_3, (0.0f), /*hidden argument*/NULL);
		V_0 = L_4;
		goto IL_001a;
	}

IL_001a:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___v0, const RuntimeMethod* method)
{
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___v0;
		float L_1 = L_0.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = ___v0;
		float L_3 = L_2.get_y_3();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_4), L_1, L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		goto IL_0015;
	}

IL_0015:
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___a0;
		float L_1 = L_0.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = ___b1;
		float L_3 = L_2.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4 = ___a0;
		float L_5 = L_4.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = ___b1;
		float L_7 = L_6.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8 = ___a0;
		float L_9 = L_8.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = ___b1;
		float L_11 = L_10.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_12), ((float)il2cpp_codegen_subtract((float)L_1, (float)L_3)), ((float)il2cpp_codegen_subtract((float)L_5, (float)L_7)), ((float)il2cpp_codegen_subtract((float)L_9, (float)L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, float ___d1, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___a0;
		float L_1 = L_0.get_x_2();
		float L_2 = ___d1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3 = ___a0;
		float L_4 = L_3.get_y_3();
		float L_5 = ___d1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = ___a0;
		float L_7 = L_6.get_z_4();
		float L_8 = ___d1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_9), ((float)il2cpp_codegen_multiply((float)L_1, (float)L_2)), ((float)il2cpp_codegen_multiply((float)L_4, (float)L_5)), ((float)il2cpp_codegen_multiply((float)L_7, (float)L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = V_0;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___a0;
		float L_1 = L_0.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = ___b1;
		float L_3 = L_2.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4 = ___a0;
		float L_5 = L_4.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = ___b1;
		float L_7 = L_6.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8 = ___a0;
		float L_9 = L_8.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = ___b1;
		float L_11 = L_10.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_12), ((float)il2cpp_codegen_add((float)L_1, (float)L_3)), ((float)il2cpp_codegen_add((float)L_5, (float)L_7)), ((float)il2cpp_codegen_add((float)L_9, (float)L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  Vector4_op_Multiply_m4B615DCAD6D77FE276AC56F17EA3ED0DCD942111_inline (Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___a0, float ___d1, const RuntimeMethod* method)
{
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_0 = ___a0;
		float L_1 = L_0.get_x_1();
		float L_2 = ___d1;
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_3 = ___a0;
		float L_4 = L_3.get_y_2();
		float L_5 = ___d1;
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_6 = ___a0;
		float L_7 = L_6.get_z_3();
		float L_8 = ___d1;
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_9 = ___a0;
		float L_10 = L_9.get_w_4();
		float L_11 = ___d1;
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector4__ctor_mCAB598A37C4D5E80282277E828B8A3EAD936D3B2((&L_12), ((float)il2cpp_codegen_multiply((float)L_1, (float)L_2)), ((float)il2cpp_codegen_multiply((float)L_4, (float)L_5)), ((float)il2cpp_codegen_multiply((float)L_7, (float)L_8)), ((float)il2cpp_codegen_multiply((float)L_10, (float)L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0029;
	}

IL_0029:
	{
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Dot_mD19905B093915BA12852732EA27AA2DBE030D11F_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___lhs0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___rhs1, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___lhs0;
		float L_1 = L_0.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = ___rhs1;
		float L_3 = L_2.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4 = ___lhs0;
		float L_5 = L_4.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = ___rhs1;
		float L_7 = L_6.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8 = ___lhs0;
		float L_9 = L_8.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = ___rhs1;
		float L_11 = L_10.get_z_4();
		V_0 = ((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_multiply((float)L_1, (float)L_3)), (float)((float)il2cpp_codegen_multiply((float)L_5, (float)L_7)))), (float)((float)il2cpp_codegen_multiply((float)L_9, (float)L_11))));
		goto IL_002d;
	}

IL_002d:
	{
		float L_12 = V_0;
		return L_12;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Portal_get_dimensionSwitched_m3D6982DB8172F73BAC01CF743D8511BF6EAA01E3_inline (Portal_t355BC086AE7B4F5E476064C8805CA0830E0CA48E * __this, const RuntimeMethod* method)
{
	{
		// public bool dimensionSwitched { get; private set; }
		bool L_0 = __this->get_U3CdimensionSwitchedU3Ek__BackingField_12();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Portal_set_dimensionSwitched_m9498E0389F4609BD3333FBC5D6DB172660C53C94_inline (Portal_t355BC086AE7B4F5E476064C8805CA0830E0CA48E * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool dimensionSwitched { get; private set; }
		bool L_0 = ___value0;
		__this->set_U3CdimensionSwitchedU3Ek__BackingField_12(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_mB10F8A78245EBB2F22DD22E5AC8CA7D5FDE70B88_gshared_inline (List_1_tDA68EC1B5CE9809C8709C1E58A7D0F4ACBB1252D * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get__size_2();
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ARRaycastHit_t2B16118C3B5F17B237335D69B1CA9C27474B621E  List_1_get_Item_m200A6C390D1FAEF2378D70230BD6E96D492ABE04_gshared_inline (List_1_tDA68EC1B5CE9809C8709C1E58A7D0F4ACBB1252D * __this, int32_t ___index0, const RuntimeMethod* method)
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
		ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929(/*hidden argument*/NULL);
	}

IL_000e:
	{
		ARRaycastHitU5BU5D_t8F4AFCC32363485FEBCE484011A5C258676441CA* L_2 = (ARRaycastHitU5BU5D_t8F4AFCC32363485FEBCE484011A5C258676441CA*)__this->get__items_1();
		int32_t L_3 = ___index0;
		ARRaycastHit_t2B16118C3B5F17B237335D69B1CA9C27474B621E  L_4;
		L_4 = IL2CPP_ARRAY_UNSAFE_LOAD((ARRaycastHitU5BU5D_t8F4AFCC32363485FEBCE484011A5C258676441CA*)L_2, (int32_t)L_3);
		return (ARRaycastHit_t2B16118C3B5F17B237335D69B1CA9C27474B621E )L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_gshared_inline (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_current_3();
		return (RuntimeObject *)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get__size_2();
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_gshared_inline (const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_0 = ((EmptyArray_1_tBF73225DFA890366D579424FE8F40073BF9FBAD4_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Value_0();
		return (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)L_0;
	}
}
