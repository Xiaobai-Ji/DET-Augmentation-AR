#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


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
template <typename R, typename T1>
struct VirtFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
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
template <typename T1, typename T2>
struct VirtActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
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
template <typename T1, typename T2>
struct GenericVirtActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
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
template <typename T1, typename T2>
struct InterfaceActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
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
template <typename T1, typename T2>
struct GenericInterfaceActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3, typename T4>
struct GenericInterfaceActionInvoker4
{
	typedef void (*Action)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3>
struct GenericInterfaceActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};

// System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.Object>
struct Dictionary_2_t5CBFC5625F266C256F436B045F9B0CC8B1AF1F30;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D;
// System.Collections.Generic.Dictionary`2<UnityEngine.Object,System.Int32>
struct Dictionary_2_tD6E734B76E92BDF2A5B0F137063F225B41DF9106;
// System.Collections.Generic.IEnumerable`1<Unity.Properties.IProperty`1<System.Object>>
struct IEnumerable_1_t501F268BF3C8FD743C8A95215F3D031C0E1D0328;
// System.Collections.Generic.IEnumerator`1<System.Object>
struct IEnumerator_1_t2DC97C7D486BF9E077C2BC2E517E434F393AA76E;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t1A386BEF1855064FD5CC71F340A68881A52B4932;
// Unity.Properties.IProperty`1<System.Object>
struct IProperty_1_tC0C80115007526BA9F8A7904E9EC1BADF671DFCE;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Object>
struct KeyCollection_tCA4820F8266AF4059CC5A14888D8195F0D797499;
// System.Collections.Generic.List`1<System.ValueTuple`2<UnityEngine.Component,System.Boolean>>
struct List_1_t18405655F0EAB3B03E19EE70784EEDBCBB854099;
// System.Collections.Generic.List`1<System.Attribute>
struct List_1_tD9744FC9973F836851CCD7BEBF915691AB28EC10;
// System.Collections.Generic.List`1<UnityEngine.Component>
struct List_1_tA3929E98F6AC5A6E95EF799D2E3294F214358C0F;
// System.Collections.Generic.List`1<Unity.Properties.IPropertyVisitorAdapter>
struct List_1_t02860BA6E50A9698A51974D214EB88F667A870FF;
// System.Collections.Generic.Queue`1<System.Action>
struct Queue_1_t1CEAFBBE28DBFFBB495734A06904F4783D889BD4;
// Unity.RuntimeSceneSerialization.Internal.Prefabs.RuntimePrefabPropertyOverride`1<System.Boolean>
struct RuntimePrefabPropertyOverride_1_tA69A222C9CED679F3E74FC5DC80C7EA6B851D065;
// Unity.RuntimeSceneSerialization.Internal.Prefabs.RuntimePrefabPropertyOverride`1<System.Char>
struct RuntimePrefabPropertyOverride_1_tCE24BDA19DB48FA9B5C7F2713D2FFBD20FC1D58A;
// Unity.RuntimeSceneSerialization.Internal.Prefabs.RuntimePrefabPropertyOverride`1<System.Int32>
struct RuntimePrefabPropertyOverride_1_tD95DCFBFF8375B970F83D1054F4E5979BE347115;
// Unity.RuntimeSceneSerialization.Internal.Prefabs.RuntimePrefabPropertyOverride`1<System.Int64>
struct RuntimePrefabPropertyOverride_1_t4EFDEC999C9FEA31A6FFA159A986BF456791192F;
// Unity.RuntimeSceneSerialization.Internal.Prefabs.RuntimePrefabPropertyOverride`1<System.Object>
struct RuntimePrefabPropertyOverride_1_tCC9B679BFD6A61EA312443E4355AFA1F4FDD578E;
// Unity.RuntimeSceneSerialization.Internal.Prefabs.RuntimePrefabPropertyOverride`1<System.Single>
struct RuntimePrefabPropertyOverride_1_t323D06C42CFD95426179D64B465812F43BAEA303;
// Unity.RuntimeSceneSerialization.Internal.Prefabs.RuntimePrefabPropertyOverride`1<Unity.RuntimeSceneSerialization.Internal.UnityObjectReference>
struct RuntimePrefabPropertyOverride_1_tFCA82E033FFFD653514A45EC19EADD498FC6EA7E;
// Unity.XRTools.Utils.Internal.ScriptableSettingsBase`1<System.Object>
struct ScriptableSettingsBase_1_t5A9564162EF4DA7B7F0899C607967426C8527489;
// Unity.XRTools.Utils.ScriptableSettings`1<System.Object>
struct ScriptableSettings_1_t5F2333C177F83CFEBC19E1EEC3B26A5CAC8F110F;
// System.IO.SearchResultHandler`1<System.Object>
struct SearchResultHandler_1_tB819A963B62A843474E27DDAFE239812CF70839D;
// UnityEngine.XR.ARSubsystems.SerializableDictionary`2<System.Object,System.Object>
struct SerializableDictionary_2_tEFC74430D1C2FB9383F66E41679103195F856B82;
// Unity.Properties.ReflectedMemberProperty`2/SetClassValueAction<System.Object,System.Boolean>
struct SetClassValueAction_tA86ACBC111359453B0AC204006D2F17530E676BD;
// Unity.Properties.ReflectedMemberProperty`2/SetClassValueAction<System.Object,System.Char>
struct SetClassValueAction_t3D9CA46079C933069B9EB402015DC5BE95A4F59C;
// Unity.Properties.ReflectedMemberProperty`2/SetClassValueAction<System.Object,System.Int32>
struct SetClassValueAction_t3FFAED7507894B723C6D0FC149A80B7C53DFA524;
// Unity.Properties.ReflectedMemberProperty`2/SetClassValueAction<System.Object,System.Int64>
struct SetClassValueAction_t438FA66D831BCF72E300398FC3A1F687BA8E42CD;
// Unity.Properties.ReflectedMemberProperty`2/SetClassValueAction<System.Object,System.Object>
struct SetClassValueAction_t84B2D7C930A02612CA0C81F628E16D7901AC8A4D;
// Unity.Properties.ReflectedMemberProperty`2/SetClassValueAction<System.Object,System.Single>
struct SetClassValueAction_tBF56D6D514A4C9B2E2A3B6BE3DF4700A1E46CD0D;
// Unity.Properties.ReflectedMemberProperty`2/SetClassValueAction<System.Object,Unity.RuntimeSceneSerialization.Internal.UnityObjectReference>
struct SetClassValueAction_tAA1B42C011F188EF4156FFE4D03B556AC5A5E927;
// Unity.Properties.Internal.SetElementProperty`2<System.Object,System.Object>
struct SetElementProperty_2_t2173EE7F3A6395A30AD2FBAFF46AD3E6EB6DB2EC;
// Unity.Properties.Internal.SetPropertyBag`2<System.Object,System.Object>
struct SetPropertyBag_2_tA096D93509DB8BE67130C22A47AFDD1F1362914E;
// Unity.RuntimeSceneSerialization.Internal.Prefabs.RuntimePrefabPropertyOverride`1/SetPropertyMethodFactory<System.Boolean>
struct SetPropertyMethodFactory_tE818E41EA11176698A32881E90BD13517E4515ED;
// Unity.RuntimeSceneSerialization.Internal.Prefabs.RuntimePrefabPropertyOverride`1/SetPropertyMethodFactory<System.Char>
struct SetPropertyMethodFactory_t4FB896DC1FC3CC5EA3B5DB83361872E68101D4D6;
// Unity.RuntimeSceneSerialization.Internal.Prefabs.RuntimePrefabPropertyOverride`1/SetPropertyMethodFactory<System.Int32>
struct SetPropertyMethodFactory_t6E81F0BD7791428D4C43BFFF83239F2D01A666DE;
// Unity.RuntimeSceneSerialization.Internal.Prefabs.RuntimePrefabPropertyOverride`1/SetPropertyMethodFactory<System.Int64>
struct SetPropertyMethodFactory_tF19BA07F0091FAB1F1C629792665E3CDC4FA5986;
// Unity.RuntimeSceneSerialization.Internal.Prefabs.RuntimePrefabPropertyOverride`1/SetPropertyMethodFactory<System.Object>
struct SetPropertyMethodFactory_t076B85733DE0BC9683C25A48172EF712FC67B12F;
// Unity.RuntimeSceneSerialization.Internal.Prefabs.RuntimePrefabPropertyOverride`1/SetPropertyMethodFactory<System.Single>
struct SetPropertyMethodFactory_t76CC016B18A838FAB61F2BAF991893E89B4F4A61;
// Unity.RuntimeSceneSerialization.Internal.Prefabs.RuntimePrefabPropertyOverride`1/SetPropertyMethodFactory<Unity.RuntimeSceneSerialization.Internal.UnityObjectReference>
struct SetPropertyMethodFactory_tD563D2EDD8090BD7D52A68CC483A44C9177D5078;
// Unity.RuntimeSceneSerialization.Internal.Prefabs.RuntimePrefabPropertyOverride`1/SetPropertyVisitor<System.Boolean>
struct SetPropertyVisitor_tAB9E6D250EC52B9CBDF773ECC5308C04AC3C1185;
// Unity.RuntimeSceneSerialization.Internal.Prefabs.RuntimePrefabPropertyOverride`1/SetPropertyVisitor<System.Char>
struct SetPropertyVisitor_t8FC8F94F243A9EEA94EB23E8C014D069AD240E71;
// Unity.RuntimeSceneSerialization.Internal.Prefabs.RuntimePrefabPropertyOverride`1/SetPropertyVisitor<System.Int32>
struct SetPropertyVisitor_t028928ACA5F8620E27F1B6FABF4EDB53897AB14C;
// Unity.RuntimeSceneSerialization.Internal.Prefabs.RuntimePrefabPropertyOverride`1/SetPropertyVisitor<System.Int64>
struct SetPropertyVisitor_t702230AF892AA97222526E226A3E35A75D547AE7;
// Unity.RuntimeSceneSerialization.Internal.Prefabs.RuntimePrefabPropertyOverride`1/SetPropertyVisitor<System.Object>
struct SetPropertyVisitor_t5FC9A74C2EE26B1D535533EEA5833752A875DC3E;
// Unity.RuntimeSceneSerialization.Internal.Prefabs.RuntimePrefabPropertyOverride`1/SetPropertyVisitor<System.Single>
struct SetPropertyVisitor_tE91D7EEBBF898F3EFE4FA9C7432C2E1C6C079B3D;
// Unity.RuntimeSceneSerialization.Internal.Prefabs.RuntimePrefabPropertyOverride`1/SetPropertyVisitor<Unity.RuntimeSceneSerialization.Internal.UnityObjectReference>
struct SetPropertyVisitor_t50A2DDF7DEDE96DF34D0ABD7164EA134DCCC52E9;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Object>
struct ValueCollection_t0ACCC25930444F15B1857D00E9FB6021E5842852;
// System.Collections.Generic.Dictionary`2/Entry<System.Object,System.Object>[]
struct EntryU5BU5D_tA11A27A435DD770DB701FA3C8559ACA8B4E445E7;
// UnityEngine.XR.ARSubsystems.SerializableDictionary`2/KeyValuePair<System.Object,System.Object>[]
struct KeyValuePairU5BU5D_t0355D455D8B6B5B8B4955D1528C394577E9B9C21;
// System.Byte[]
struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
// System.Int32[]
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
// System.IntPtr[]
struct IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971;
// System.String[]
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;
// System.Type[]
struct TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755;
// Unity.RuntimeSceneSerialization.AssetPack
struct AssetPack_t505BB917031CB23540515D15E47DDC43F736368E;
// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA;
// System.Reflection.Binder
struct Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288;
// System.FlagsAttribute
struct FlagsAttribute_t511C558FACEF1CC64702A8FAB67CAF3CBA65DF36;
// System.IAsyncResult
struct IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370;
// System.ICloneable
struct ICloneable_t489EBC17437D4E3C42DC8B64205C39847CA3ADB8;
// Unity.Properties.Internal.ICollectionPropertyBagVisitor
struct ICollectionPropertyBagVisitor_tE87A6266FF830930E81E4099B3670E6DD3B40B7F;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// UnityEngine.Playables.IPlayableBehaviour
struct IPlayableBehaviour_t1D6C1C5482BE0FB7B33FA9D8009958D4AB8069F5;
// Unity.Properties.Internal.ISetPropertyBagVisitor
struct ISetPropertyBagVisitor_t2FE201125AE837F1C73C5F2A5C37A6662CDF19F5;
// System.InvalidCastException
struct InvalidCastException_tD99F9FF94C3859C78E90F68C2F77A1558BCAF463;
// System.InvalidOperationException
struct InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB;
// System.Reflection.MemberFilter
struct MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81;
// System.Reflection.MemberInfo
struct MemberInfo_t;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F;
// UnityEngine.ScriptableObject
struct ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A;
// Unity.XRTools.Utils.Internal.ScriptableSettingsBase
struct ScriptableSettingsBase_t1D43764F1AA18A7DB433687E4A75AC027BCAEB45;
// Unity.RuntimeSceneSerialization.SerializationMetadata
struct SerializationMetadata_tCB3C700413EA4D79DB35199627C7DD6F8EF1ECE2;
// System.String
struct String_t;
// System.Type
struct Type_t;
// Unity.RuntimeSceneSerialization.Internal.UnityObjectPropertyVisitor
struct UnityObjectPropertyVisitor_t6D216B27CEC2B426B88BCA62A02F8A7D3BC4F14C;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;

IL2CPP_EXTERN_C RuntimeClass* Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DebugUtils_t9C2D80EB75BACF6C7328DB475074A7C11AE7F4FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ICloneable_t489EBC17437D4E3C42DC8B64205C39847CA3ADB8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidCastException_tD99F9FF94C3859C78E90F68C2F77A1558BCAF463_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ScriptableSettingsBase_t1D43764F1AA18A7DB433687E4A75AC027BCAEB45_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityObjectReference_t2A935115C47347CFB25E64F78409335605D6B054_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral0A1181D753D38A02DC44BD6DADB2AB0E89C2A576;
IL2CPP_EXTERN_C String_t* _stringLiteral478DFBA437063274793265BAAC2059B66A9789CB;
IL2CPP_EXTERN_C String_t* _stringLiteral4EE0C90481BB181B5C6AAE85820F9C472ACCC07A;
IL2CPP_EXTERN_C String_t* _stringLiteral4F7779D7284080B28F7A5CF5A87C438CBA6F6F9F;
IL2CPP_EXTERN_C String_t* _stringLiteral67A259F304E2092F70DB1D23B44E7E844A4A8365;
IL2CPP_EXTERN_C String_t* _stringLiteral9E164FB78D919258E6AAE96D9728E7A557009100;
IL2CPP_EXTERN_C String_t* _stringLiteralD3A9C9918DE608DC2A9FD4E1672DF8AB84A28E78;
IL2CPP_EXTERN_C const RuntimeMethod* CustomAttributeExtensions_GetCustomAttribute_TisFlagsAttribute_t511C558FACEF1CC64702A8FAB67CAF3CBA65DF36_m2724CDFC73603733A936D82E548753DEAD4C0363_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ScriptPlayable_1__ctor_m35E668A204B15B5AAC48A7265A4CE08F866DF5BF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SetElementProperty_2_SetValue_m8EA02FC8B86B4667B413FC29F43EF0295A0C97F7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* LazyLoadReference_1_tA48C53B4B246BEF5D956E8AB23A2EC45C6C5C36E_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* RuntimeObject_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* ScriptableSettingsPathAttribute_tEBDF53D4B522413D2C680B0EE73DF4B4E5BAAEBC_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* String_t_0_0_0_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct KeyValuePairU5BU5D_t0355D455D8B6B5B8B4955D1528C394577E9B9C21;
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object


// Unity.Properties.Internal.SetPropertyBag`2/<GetPropertiesImpl>d__2<System.Object,System.Object>
struct U3CGetPropertiesImplU3Ed__2_tDADACA76847A612A1263E89B5CB6D8393521FF75  : public RuntimeObject
{
public:
	// System.Int32 Unity.Properties.Internal.SetPropertyBag`2/<GetPropertiesImpl>d__2::<>1__state
	int32_t ___U3CU3E1__state_0;
	// Unity.Properties.IProperty`1<TSet> Unity.Properties.Internal.SetPropertyBag`2/<GetPropertiesImpl>d__2::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// System.Int32 Unity.Properties.Internal.SetPropertyBag`2/<GetPropertiesImpl>d__2::<>l__initialThreadId
	int32_t ___U3CU3El__initialThreadId_2;
	// TSet Unity.Properties.Internal.SetPropertyBag`2/<GetPropertiesImpl>d__2::container
	RuntimeObject * ___container_3;
	// TSet Unity.Properties.Internal.SetPropertyBag`2/<GetPropertiesImpl>d__2::<>3__container
	RuntimeObject * ___U3CU3E3__container_4;
	// Unity.Properties.Internal.SetPropertyBag`2<TSet,TElement> Unity.Properties.Internal.SetPropertyBag`2/<GetPropertiesImpl>d__2::<>4__this
	SetPropertyBag_2_tA096D93509DB8BE67130C22A47AFDD1F1362914E * ___U3CU3E4__this_5;
	// System.Collections.Generic.IEnumerator`1<TElement> Unity.Properties.Internal.SetPropertyBag`2/<GetPropertiesImpl>d__2::<>7__wrap1
	RuntimeObject* ___U3CU3E7__wrap1_6;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CGetPropertiesImplU3Ed__2_tDADACA76847A612A1263E89B5CB6D8393521FF75, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CGetPropertiesImplU3Ed__2_tDADACA76847A612A1263E89B5CB6D8393521FF75, ___U3CU3E2__current_1)); }
	inline RuntimeObject* get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject* value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3El__initialThreadId_2() { return static_cast<int32_t>(offsetof(U3CGetPropertiesImplU3Ed__2_tDADACA76847A612A1263E89B5CB6D8393521FF75, ___U3CU3El__initialThreadId_2)); }
	inline int32_t get_U3CU3El__initialThreadId_2() const { return ___U3CU3El__initialThreadId_2; }
	inline int32_t* get_address_of_U3CU3El__initialThreadId_2() { return &___U3CU3El__initialThreadId_2; }
	inline void set_U3CU3El__initialThreadId_2(int32_t value)
	{
		___U3CU3El__initialThreadId_2 = value;
	}

	inline static int32_t get_offset_of_container_3() { return static_cast<int32_t>(offsetof(U3CGetPropertiesImplU3Ed__2_tDADACA76847A612A1263E89B5CB6D8393521FF75, ___container_3)); }
	inline RuntimeObject * get_container_3() const { return ___container_3; }
	inline RuntimeObject ** get_address_of_container_3() { return &___container_3; }
	inline void set_container_3(RuntimeObject * value)
	{
		___container_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___container_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E3__container_4() { return static_cast<int32_t>(offsetof(U3CGetPropertiesImplU3Ed__2_tDADACA76847A612A1263E89B5CB6D8393521FF75, ___U3CU3E3__container_4)); }
	inline RuntimeObject * get_U3CU3E3__container_4() const { return ___U3CU3E3__container_4; }
	inline RuntimeObject ** get_address_of_U3CU3E3__container_4() { return &___U3CU3E3__container_4; }
	inline void set_U3CU3E3__container_4(RuntimeObject * value)
	{
		___U3CU3E3__container_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E3__container_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_5() { return static_cast<int32_t>(offsetof(U3CGetPropertiesImplU3Ed__2_tDADACA76847A612A1263E89B5CB6D8393521FF75, ___U3CU3E4__this_5)); }
	inline SetPropertyBag_2_tA096D93509DB8BE67130C22A47AFDD1F1362914E * get_U3CU3E4__this_5() const { return ___U3CU3E4__this_5; }
	inline SetPropertyBag_2_tA096D93509DB8BE67130C22A47AFDD1F1362914E ** get_address_of_U3CU3E4__this_5() { return &___U3CU3E4__this_5; }
	inline void set_U3CU3E4__this_5(SetPropertyBag_2_tA096D93509DB8BE67130C22A47AFDD1F1362914E * value)
	{
		___U3CU3E4__this_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_5), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E7__wrap1_6() { return static_cast<int32_t>(offsetof(U3CGetPropertiesImplU3Ed__2_tDADACA76847A612A1263E89B5CB6D8393521FF75, ___U3CU3E7__wrap1_6)); }
	inline RuntimeObject* get_U3CU3E7__wrap1_6() const { return ___U3CU3E7__wrap1_6; }
	inline RuntimeObject** get_address_of_U3CU3E7__wrap1_6() { return &___U3CU3E7__wrap1_6; }
	inline void set_U3CU3E7__wrap1_6(RuntimeObject* value)
	{
		___U3CU3E7__wrap1_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E7__wrap1_6), (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_tA11A27A435DD770DB701FA3C8559ACA8B4E445E7* ___entries_1;
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
	KeyCollection_tCA4820F8266AF4059CC5A14888D8195F0D797499 * ___keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_t0ACCC25930444F15B1857D00E9FB6021E5842852 * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D, ___buckets_0)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D, ___entries_1)); }
	inline EntryU5BU5D_tA11A27A435DD770DB701FA3C8559ACA8B4E445E7* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_tA11A27A435DD770DB701FA3C8559ACA8B4E445E7** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_tA11A27A435DD770DB701FA3C8559ACA8B4E445E7* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D, ___keys_7)); }
	inline KeyCollection_tCA4820F8266AF4059CC5A14888D8195F0D797499 * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_tCA4820F8266AF4059CC5A14888D8195F0D797499 ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_tCA4820F8266AF4059CC5A14888D8195F0D797499 * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D, ___values_8)); }
	inline ValueCollection_t0ACCC25930444F15B1857D00E9FB6021E5842852 * get_values_8() const { return ___values_8; }
	inline ValueCollection_t0ACCC25930444F15B1857D00E9FB6021E5842852 ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_t0ACCC25930444F15B1857D00E9FB6021E5842852 * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// Unity.Properties.PropertyBag`1<System.Object>
struct PropertyBag_1_tD150D74797315C72637E50ED3C60C5EB62AFC491  : public RuntimeObject
{
public:

public:
};


// Unity.Properties.Property`2<System.Object,System.Object>
struct Property_2_tD7C7F959BE068E5DB2625A4229EEFE1C3F3413FE  : public RuntimeObject
{
public:
	// System.Collections.Generic.List`1<System.Attribute> Unity.Properties.Property`2::m_Attributes
	List_1_tD9744FC9973F836851CCD7BEBF915691AB28EC10 * ___m_Attributes_0;

public:
	inline static int32_t get_offset_of_m_Attributes_0() { return static_cast<int32_t>(offsetof(Property_2_tD7C7F959BE068E5DB2625A4229EEFE1C3F3413FE, ___m_Attributes_0)); }
	inline List_1_tD9744FC9973F836851CCD7BEBF915691AB28EC10 * get_m_Attributes_0() const { return ___m_Attributes_0; }
	inline List_1_tD9744FC9973F836851CCD7BEBF915691AB28EC10 ** get_address_of_m_Attributes_0() { return &___m_Attributes_0; }
	inline void set_m_Attributes_0(List_1_tD9744FC9973F836851CCD7BEBF915691AB28EC10 * value)
	{
		___m_Attributes_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Attributes_0), (void*)value);
	}
};


// System.IO.SearchResultHandler`1<System.Object>
struct SearchResultHandler_1_tB819A963B62A843474E27DDAFE239812CF70839D  : public RuntimeObject
{
public:

public:
};


// UnityEngine.XR.ARSubsystems.SerializableDictionary`2<System.Object,System.Object>
struct SerializableDictionary_2_tEFC74430D1C2FB9383F66E41679103195F856B82  : public RuntimeObject
{
public:
	// System.Collections.Generic.Dictionary`2<TKey,TValue> UnityEngine.XR.ARSubsystems.SerializableDictionary`2::<dictionary>k__BackingField
	Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * ___U3CdictionaryU3Ek__BackingField_0;
	// UnityEngine.XR.ARSubsystems.SerializableDictionary`2/KeyValuePair<TKey,TValue>[] UnityEngine.XR.ARSubsystems.SerializableDictionary`2::m_Storage
	KeyValuePairU5BU5D_t0355D455D8B6B5B8B4955D1528C394577E9B9C21* ___m_Storage_1;

public:
	inline static int32_t get_offset_of_U3CdictionaryU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(SerializableDictionary_2_tEFC74430D1C2FB9383F66E41679103195F856B82, ___U3CdictionaryU3Ek__BackingField_0)); }
	inline Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * get_U3CdictionaryU3Ek__BackingField_0() const { return ___U3CdictionaryU3Ek__BackingField_0; }
	inline Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D ** get_address_of_U3CdictionaryU3Ek__BackingField_0() { return &___U3CdictionaryU3Ek__BackingField_0; }
	inline void set_U3CdictionaryU3Ek__BackingField_0(Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * value)
	{
		___U3CdictionaryU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CdictionaryU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_Storage_1() { return static_cast<int32_t>(offsetof(SerializableDictionary_2_tEFC74430D1C2FB9383F66E41679103195F856B82, ___m_Storage_1)); }
	inline KeyValuePairU5BU5D_t0355D455D8B6B5B8B4955D1528C394577E9B9C21* get_m_Storage_1() const { return ___m_Storage_1; }
	inline KeyValuePairU5BU5D_t0355D455D8B6B5B8B4955D1528C394577E9B9C21** get_address_of_m_Storage_1() { return &___m_Storage_1; }
	inline void set_m_Storage_1(KeyValuePairU5BU5D_t0355D455D8B6B5B8B4955D1528C394577E9B9C21* value)
	{
		___m_Storage_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Storage_1), (void*)value);
	}
};


// Unity.Properties.AOT/SetPropertyGenerator`3<System.Object,System.Object,System.Object>
struct SetPropertyGenerator_3_t5A0300BA5BB0EB59F77132BB4318B81C288EF45F  : public RuntimeObject
{
public:

public:
};


// Unity.RuntimeSceneSerialization.Internal.Prefabs.RuntimePrefabPropertyOverride`1/SetPropertyMethodFactory<System.Boolean>
struct SetPropertyMethodFactory_tE818E41EA11176698A32881E90BD13517E4515ED  : public RuntimeObject
{
public:
	// Unity.RuntimeSceneSerialization.Internal.Prefabs.RuntimePrefabPropertyOverride`1<TOverrideValue> Unity.RuntimeSceneSerialization.Internal.Prefabs.RuntimePrefabPropertyOverride`1/SetPropertyMethodFactory::Override
	RuntimePrefabPropertyOverride_1_tA69A222C9CED679F3E74FC5DC80C7EA6B851D065 * ___Override_0;
	// System.String Unity.RuntimeSceneSerialization.Internal.Prefabs.RuntimePrefabPropertyOverride`1/SetPropertyMethodFactory::PropertyPath
	String_t* ___PropertyPath_1;
	// Unity.RuntimeSceneSerialization.SerializationMetadata Unity.RuntimeSceneSerialization.Internal.Prefabs.RuntimePrefabPropertyOverride`1/SetPropertyMethodFactory::Metadata
	SerializationMetadata_tCB3C700413EA4D79DB35199627C7DD6F8EF1ECE2 * ___Metadata_2;

public:
	inline static int32_t get_offset_of_Override_0() { return static_cast<int32_t>(offsetof(SetPropertyMethodFactory_tE818E41EA11176698A32881E90BD13517E4515ED, ___Override_0)); }
	inline RuntimePrefabPropertyOverride_1_tA69A222C9CED679F3E74FC5DC80C7EA6B851D065 * get_Override_0() const { return ___Override_0; }
	inline RuntimePrefabPropertyOverride_1_tA69A222C9CED679F3E74FC5DC80C7EA6B851D065 ** get_address_of_Override_0() { return &___Override_0; }
	inline void set_Override_0(RuntimePrefabPropertyOverride_1_tA69A222C9CED679F3E74FC5DC80C7EA6B851D065 * value)
	{
		___Override_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Override_0), (void*)value);
	}

	inline static int32_t get_offset_of_PropertyPath_1() { return static_cast<int32_t>(offsetof(SetPropertyMethodFactory_tE818E41EA11176698A32881E90BD13517E4515ED, ___PropertyPath_1)); }
	inline String_t* get_PropertyPath_1() const { return ___PropertyPath_1; }
	inline String_t** get_address_of_PropertyPath_1() { return &___PropertyPath_1; }
	inline void set_PropertyPath_1(String_t* value)
	{
		___PropertyPath_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___PropertyPath_1), (void*)value);
	}

	inline static int32_t get_offset_of_Metadata_2() { return static_cast<int32_t>(offsetof(SetPropertyMethodFactory_tE818E41EA11176698A32881E90BD13517E4515ED, ___Metadata_2)); }
	inline SerializationMetadata_tCB3C700413EA4D79DB35199627C7DD6F8EF1ECE2 * get_Metadata_2() const { return ___Metadata_2; }
	inline SerializationMetadata_tCB3C700413EA4D79DB35199627C7DD6F8EF1ECE2 ** get_address_of_Metadata_2() { return &___Metadata_2; }
	inline void set_Metadata_2(SerializationMetadata_tCB3C700413EA4D79DB35199627C7DD6F8EF1ECE2 * value)
	{
		___Metadata_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Metadata_2), (void*)value);
	}
};


// Unity.RuntimeSceneSerialization.Internal.Prefabs.RuntimePrefabPropertyOverride`1/SetPropertyMethodFactory<System.Char>
struct SetPropertyMethodFactory_t4FB896DC1FC3CC5EA3B5DB83361872E68101D4D6  : public RuntimeObject
{
public:
	// Unity.RuntimeSceneSerialization.Internal.Prefabs.RuntimePrefabPropertyOverride`1<TOverrideValue> Unity.RuntimeSceneSerialization.Internal.Prefabs.RuntimePrefabPropertyOverride`1/SetPropertyMethodFactory::Override
	RuntimePrefabPropertyOverride_1_tCE24BDA19DB48FA9B5C7F2713D2FFBD20FC1D58A * ___Override_0;
	// System.String Unity.RuntimeSceneSerialization.Internal.Prefabs.RuntimePrefabPropertyOverride`1/SetPropertyMethodFactory::PropertyPath
	String_t* ___PropertyPath_1;
	// Unity.RuntimeSceneSerialization.SerializationMetadata Unity.RuntimeSceneSerialization.Internal.Prefabs.RuntimePrefabPropertyOverride`1/SetPropertyMethodFactory::Metadata
	SerializationMetadata_tCB3C700413EA4D79DB35199627C7DD6F8EF1ECE2 * ___Metadata_2;

public:
	inline static int32_t get_offset_of_Override_0() { return static_cast<int32_t>(offsetof(SetPropertyMethodFactory_t4FB896DC1FC3CC5EA3B5DB83361872E68101D4D6, ___Override_0)); }
	inline RuntimePrefabPropertyOverride_1_tCE24BDA19DB48FA9B5C7F2713D2FFBD20FC1D58A * get_Override_0() const { return ___Override_0; }
	inline RuntimePrefabPropertyOverride_1_tCE24BDA19DB48FA9B5C7F2713D2FFBD20FC1D58A ** get_address_of_Override_0() { return &___Override_0; }
	inline void set_Override_0(RuntimePrefabPropertyOverride_1_tCE24BDA19DB48FA9B5C7F2713D2FFBD20FC1D58A * value)
	{
		___Override_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Override_0), (void*)value);
	}

	inline static int32_t get_offset_of_PropertyPath_1() { return static_cast<int32_t>(offsetof(SetPropertyMethodFactory_t4FB896DC1FC3CC5EA3B5DB83361872E68101D4D6, ___PropertyPath_1)); }
	inline String_t* get_PropertyPath_1() const { return ___PropertyPath_1; }
	inline String_t** get_address_of_PropertyPath_1() { return &___PropertyPath_1; }
	inline void set_PropertyPath_1(String_t* value)
	{
		___PropertyPath_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___PropertyPath_1), (void*)value);
	}

	inline static int32_t get_offset_of_Metadata_2() { return static_cast<int32_t>(offsetof(SetPropertyMethodFactory_t4FB896DC1FC3CC5EA3B5DB83361872E68101D4D6, ___Metadata_2)); }
	inline SerializationMetadata_tCB3C700413EA4D79DB35199627C7DD6F8EF1ECE2 * get_Metadata_2() const { return ___Metadata_2; }
	inline SerializationMetadata_tCB3C700413EA4D79DB35199627C7DD6F8EF1ECE2 ** get_address_of_Metadata_2() { return &___Metadata_2; }
	inline void set_Metadata_2(SerializationMetadata_tCB3C700413EA4D79DB35199627C7DD6F8EF1ECE2 * value)
	{
		___Metadata_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Metadata_2), (void*)value);
	}
};


// Unity.RuntimeSceneSerialization.Internal.Prefabs.RuntimePrefabPropertyOverride`1/SetPropertyMethodFactory<System.Int32>
struct SetPropertyMethodFactory_t6E81F0BD7791428D4C43BFFF83239F2D01A666DE  : public RuntimeObject
{
public:
	// Unity.RuntimeSceneSerialization.Internal.Prefabs.RuntimePrefabPropertyOverride`1<TOverrideValue> Unity.RuntimeSceneSerialization.Internal.Prefabs.RuntimePrefabPropertyOverride`1/SetPropertyMethodFactory::Override
	RuntimePrefabPropertyOverride_1_tD95DCFBFF8375B970F83D1054F4E5979BE347115 * ___Override_0;
	// System.String Unity.RuntimeSceneSerialization.Internal.Prefabs.RuntimePrefabPropertyOverride`1/SetPropertyMethodFactory::PropertyPath
	String_t* ___PropertyPath_1;
	// Unity.RuntimeSceneSerialization.SerializationMetadata Unity.RuntimeSceneSerialization.Internal.Prefabs.RuntimePrefabPropertyOverride`1/SetPropertyMethodFactory::Metadata
	SerializationMetadata_tCB3C700413EA4D79DB35199627C7DD6F8EF1ECE2 * ___Metadata_2;

public:
	inline static int32_t get_offset_of_Override_0() { return static_cast<int32_t>(offsetof(SetPropertyMethodFactory_t6E81F0BD7791428D4C43BFFF83239F2D01A666DE, ___Override_0)); }
	inline RuntimePrefabPropertyOverride_1_tD95DCFBFF8375B970F83D1054F4E5979BE347115 * get_Override_0() const { return ___Override_0; }
	inline RuntimePrefabPropertyOverride_1_tD95DCFBFF8375B970F83D1054F4E5979BE347115 ** get_address_of_Override_0() { return &___Override_0; }
	inline void set_Override_0(RuntimePrefabPropertyOverride_1_tD95DCFBFF8375B970F83D1054F4E5979BE347115 * value)
	{
		___Override_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Override_0), (void*)value);
	}

	inline static int32_t get_offset_of_PropertyPath_1() { return static_cast<int32_t>(offsetof(SetPropertyMethodFactory_t6E81F0BD7791428D4C43BFFF83239F2D01A666DE, ___PropertyPath_1)); }
	inline String_t* get_PropertyPath_1() const { return ___PropertyPath_1; }
	inline String_t** get_address_of_PropertyPath_1() { return &___PropertyPath_1; }
	inline void set_PropertyPath_1(String_t* value)
	{
		___PropertyPath_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___PropertyPath_1), (void*)value);
	}

	inline static int32_t get_offset_of_Metadata_2() { return static_cast<int32_t>(offsetof(SetPropertyMethodFactory_t6E81F0BD7791428D4C43BFFF83239F2D01A666DE, ___Metadata_2)); }
	inline SerializationMetadata_tCB3C700413EA4D79DB35199627C7DD6F8EF1ECE2 * get_Metadata_2() const { return ___Metadata_2; }
	inline SerializationMetadata_tCB3C700413EA4D79DB35199627C7DD6F8EF1ECE2 ** get_address_of_Metadata_2() { return &___Metadata_2; }
	inline void set_Metadata_2(SerializationMetadata_tCB3C700413EA4D79DB35199627C7DD6F8EF1ECE2 * value)
	{
		___Metadata_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Metadata_2), (void*)value);
	}
};


// Unity.RuntimeSceneSerialization.Internal.Prefabs.RuntimePrefabPropertyOverride`1/SetPropertyMethodFactory<System.Int64>
struct SetPropertyMethodFactory_tF19BA07F0091FAB1F1C629792665E3CDC4FA5986  : public RuntimeObject
{
public:
	// Unity.RuntimeSceneSerialization.Internal.Prefabs.RuntimePrefabPropertyOverride`1<TOverrideValue> Unity.RuntimeSceneSerialization.Internal.Prefabs.RuntimePrefabPropertyOverride`1/SetPropertyMethodFactory::Override
	RuntimePrefabPropertyOverride_1_t4EFDEC999C9FEA31A6FFA159A986BF456791192F * ___Override_0;
	// System.String Unity.RuntimeSceneSerialization.Internal.Prefabs.RuntimePrefabPropertyOverride`1/SetPropertyMethodFactory::PropertyPath
	String_t* ___PropertyPath_1;
	// Unity.RuntimeSceneSerialization.SerializationMetadata Unity.RuntimeSceneSerialization.Internal.Prefabs.RuntimePrefabPropertyOverride`1/SetPropertyMethodFactory::Metadata
	SerializationMetadata_tCB3C700413EA4D79DB35199627C7DD6F8EF1ECE2 * ___Metadata_2;

public:
	inline static int32_t get_offset_of_Override_0() { return static_cast<int32_t>(offsetof(SetPropertyMethodFactory_tF19BA07F0091FAB1F1C629792665E3CDC4FA5986, ___Override_0)); }
	inline RuntimePrefabPropertyOverride_1_t4EFDEC999C9FEA31A6FFA159A986BF456791192F * get_Override_0() const { return ___Override_0; }
	inline RuntimePrefabPropertyOverride_1_t4EFDEC999C9FEA31A6FFA159A986BF456791192F ** get_address_of_Override_0() { return &___Override_0; }
	inline void set_Override_0(RuntimePrefabPropertyOverride_1_t4EFDEC999C9FEA31A6FFA159A986BF456791192F * value)
	{
		___Override_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Override_0), (void*)value);
	}

	inline static int32_t get_offset_of_PropertyPath_1() { return static_cast<int32_t>(offsetof(SetPropertyMethodFactory_tF19BA07F0091FAB1F1C629792665E3CDC4FA5986, ___PropertyPath_1)); }
	inline String_t* get_PropertyPath_1() const { return ___PropertyPath_1; }
	inline String_t** get_address_of_PropertyPath_1() { return &___PropertyPath_1; }
	inline void set_PropertyPath_1(String_t* value)
	{
		___PropertyPath_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___PropertyPath_1), (void*)value);
	}

	inline static int32_t get_offset_of_Metadata_2() { return static_cast<int32_t>(offsetof(SetPropertyMethodFactory_tF19BA07F0091FAB1F1C629792665E3CDC4FA5986, ___Metadata_2)); }
	inline SerializationMetadata_tCB3C700413EA4D79DB35199627C7DD6F8EF1ECE2 * get_Metadata_2() const { return ___Metadata_2; }
	inline SerializationMetadata_tCB3C700413EA4D79DB35199627C7DD6F8EF1ECE2 ** get_address_of_Metadata_2() { return &___Metadata_2; }
	inline void set_Metadata_2(SerializationMetadata_tCB3C700413EA4D79DB35199627C7DD6F8EF1ECE2 * value)
	{
		___Metadata_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Metadata_2), (void*)value);
	}
};


// Unity.RuntimeSceneSerialization.Internal.Prefabs.RuntimePrefabPropertyOverride`1/SetPropertyMethodFactory<System.Object>
struct SetPropertyMethodFactory_t076B85733DE0BC9683C25A48172EF712FC67B12F  : public RuntimeObject
{
public:
	// Unity.RuntimeSceneSerialization.Internal.Prefabs.RuntimePrefabPropertyOverride`1<TOverrideValue> Unity.RuntimeSceneSerialization.Internal.Prefabs.RuntimePrefabPropertyOverride`1/SetPropertyMethodFactory::Override
	RuntimePrefabPropertyOverride_1_tCC9B679BFD6A61EA312443E4355AFA1F4FDD578E * ___Override_0;
	// System.String Unity.RuntimeSceneSerialization.Internal.Prefabs.RuntimePrefabPropertyOverride`1/SetPropertyMethodFactory::PropertyPath
	String_t* ___PropertyPath_1;
	// Unity.RuntimeSceneSerialization.SerializationMetadata Unity.RuntimeSceneSerialization.Internal.Prefabs.RuntimePrefabPropertyOverride`1/SetPropertyMethodFactory::Metadata
	SerializationMetadata_tCB3C700413EA4D79DB35199627C7DD6F8EF1ECE2 * ___Metadata_2;

public:
	inline static int32_t get_offset_of_Override_0() { return static_cast<int32_t>(offsetof(SetPropertyMethodFactory_t076B85733DE0BC9683C25A48172EF712FC67B12F, ___Override_0)); }
	inline RuntimePrefabPropertyOverride_1_tCC9B679BFD6A61EA312443E4355AFA1F4FDD578E * get_Override_0() const { return ___Override_0; }
	inline RuntimePrefabPropertyOverride_1_tCC9B679BFD6A61EA312443E4355AFA1F4FDD578E ** get_address_of_Override_0() { return &___Override_0; }
	inline void set_Override_0(RuntimePrefabPropertyOverride_1_tCC9B679BFD6A61EA312443E4355AFA1F4FDD578E * value)
	{
		___Override_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Override_0), (void*)value);
	}

	inline static int32_t get_offset_of_PropertyPath_1() { return static_cast<int32_t>(offsetof(SetPropertyMethodFactory_t076B85733DE0BC9683C25A48172EF712FC67B12F, ___PropertyPath_1)); }
	inline String_t* get_PropertyPath_1() const { return ___PropertyPath_1; }
	inline String_t** get_address_of_PropertyPath_1() { return &___PropertyPath_1; }
	inline void set_PropertyPath_1(String_t* value)
	{
		___PropertyPath_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___PropertyPath_1), (void*)value);
	}

	inline static int32_t get_offset_of_Metadata_2() { return static_cast<int32_t>(offsetof(SetPropertyMethodFactory_t076B85733DE0BC9683C25A48172EF712FC67B12F, ___Metadata_2)); }
	inline SerializationMetadata_tCB3C700413EA4D79DB35199627C7DD6F8EF1ECE2 * get_Metadata_2() const { return ___Metadata_2; }
	inline SerializationMetadata_tCB3C700413EA4D79DB35199627C7DD6F8EF1ECE2 ** get_address_of_Metadata_2() { return &___Metadata_2; }
	inline void set_Metadata_2(SerializationMetadata_tCB3C700413EA4D79DB35199627C7DD6F8EF1ECE2 * value)
	{
		___Metadata_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Metadata_2), (void*)value);
	}
};


// Unity.RuntimeSceneSerialization.Internal.Prefabs.RuntimePrefabPropertyOverride`1/SetPropertyMethodFactory<System.Single>
struct SetPropertyMethodFactory_t76CC016B18A838FAB61F2BAF991893E89B4F4A61  : public RuntimeObject
{
public:
	// Unity.RuntimeSceneSerialization.Internal.Prefabs.RuntimePrefabPropertyOverride`1<TOverrideValue> Unity.RuntimeSceneSerialization.Internal.Prefabs.RuntimePrefabPropertyOverride`1/SetPropertyMethodFactory::Override
	RuntimePrefabPropertyOverride_1_t323D06C42CFD95426179D64B465812F43BAEA303 * ___Override_0;
	// System.String Unity.RuntimeSceneSerialization.Internal.Prefabs.RuntimePrefabPropertyOverride`1/SetPropertyMethodFactory::PropertyPath
	String_t* ___PropertyPath_1;
	// Unity.RuntimeSceneSerialization.SerializationMetadata Unity.RuntimeSceneSerialization.Internal.Prefabs.RuntimePrefabPropertyOverride`1/SetPropertyMethodFactory::Metadata
	SerializationMetadata_tCB3C700413EA4D79DB35199627C7DD6F8EF1ECE2 * ___Metadata_2;

public:
	inline static int32_t get_offset_of_Override_0() { return static_cast<int32_t>(offsetof(SetPropertyMethodFactory_t76CC016B18A838FAB61F2BAF991893E89B4F4A61, ___Override_0)); }
	inline RuntimePrefabPropertyOverride_1_t323D06C42CFD95426179D64B465812F43BAEA303 * get_Override_0() const { return ___Override_0; }
	inline RuntimePrefabPropertyOverride_1_t323D06C42CFD95426179D64B465812F43BAEA303 ** get_address_of_Override_0() { return &___Override_0; }
	inline void set_Override_0(RuntimePrefabPropertyOverride_1_t323D06C42CFD95426179D64B465812F43BAEA303 * value)
	{
		___Override_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Override_0), (void*)value);
	}

	inline static int32_t get_offset_of_PropertyPath_1() { return static_cast<int32_t>(offsetof(SetPropertyMethodFactory_t76CC016B18A838FAB61F2BAF991893E89B4F4A61, ___PropertyPath_1)); }
	inline String_t* get_PropertyPath_1() const { return ___PropertyPath_1; }
	inline String_t** get_address_of_PropertyPath_1() { return &___PropertyPath_1; }
	inline void set_PropertyPath_1(String_t* value)
	{
		___PropertyPath_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___PropertyPath_1), (void*)value);
	}

	inline static int32_t get_offset_of_Metadata_2() { return static_cast<int32_t>(offsetof(SetPropertyMethodFactory_t76CC016B18A838FAB61F2BAF991893E89B4F4A61, ___Metadata_2)); }
	inline SerializationMetadata_tCB3C700413EA4D79DB35199627C7DD6F8EF1ECE2 * get_Metadata_2() const { return ___Metadata_2; }
	inline SerializationMetadata_tCB3C700413EA4D79DB35199627C7DD6F8EF1ECE2 ** get_address_of_Metadata_2() { return &___Metadata_2; }
	inline void set_Metadata_2(SerializationMetadata_tCB3C700413EA4D79DB35199627C7DD6F8EF1ECE2 * value)
	{
		___Metadata_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Metadata_2), (void*)value);
	}
};


// Unity.RuntimeSceneSerialization.Internal.Prefabs.RuntimePrefabPropertyOverride`1/SetPropertyMethodFactory<Unity.RuntimeSceneSerialization.Internal.UnityObjectReference>
struct SetPropertyMethodFactory_tD563D2EDD8090BD7D52A68CC483A44C9177D5078  : public RuntimeObject
{
public:
	// Unity.RuntimeSceneSerialization.Internal.Prefabs.RuntimePrefabPropertyOverride`1<TOverrideValue> Unity.RuntimeSceneSerialization.Internal.Prefabs.RuntimePrefabPropertyOverride`1/SetPropertyMethodFactory::Override
	RuntimePrefabPropertyOverride_1_tFCA82E033FFFD653514A45EC19EADD498FC6EA7E * ___Override_0;
	// System.String Unity.RuntimeSceneSerialization.Internal.Prefabs.RuntimePrefabPropertyOverride`1/SetPropertyMethodFactory::PropertyPath
	String_t* ___PropertyPath_1;
	// Unity.RuntimeSceneSerialization.SerializationMetadata Unity.RuntimeSceneSerialization.Internal.Prefabs.RuntimePrefabPropertyOverride`1/SetPropertyMethodFactory::Metadata
	SerializationMetadata_tCB3C700413EA4D79DB35199627C7DD6F8EF1ECE2 * ___Metadata_2;

public:
	inline static int32_t get_offset_of_Override_0() { return static_cast<int32_t>(offsetof(SetPropertyMethodFactory_tD563D2EDD8090BD7D52A68CC483A44C9177D5078, ___Override_0)); }
	inline RuntimePrefabPropertyOverride_1_tFCA82E033FFFD653514A45EC19EADD498FC6EA7E * get_Override_0() const { return ___Override_0; }
	inline RuntimePrefabPropertyOverride_1_tFCA82E033FFFD653514A45EC19EADD498FC6EA7E ** get_address_of_Override_0() { return &___Override_0; }
	inline void set_Override_0(RuntimePrefabPropertyOverride_1_tFCA82E033FFFD653514A45EC19EADD498FC6EA7E * value)
	{
		___Override_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Override_0), (void*)value);
	}

	inline static int32_t get_offset_of_PropertyPath_1() { return static_cast<int32_t>(offsetof(SetPropertyMethodFactory_tD563D2EDD8090BD7D52A68CC483A44C9177D5078, ___PropertyPath_1)); }
	inline String_t* get_PropertyPath_1() const { return ___PropertyPath_1; }
	inline String_t** get_address_of_PropertyPath_1() { return &___PropertyPath_1; }
	inline void set_PropertyPath_1(String_t* value)
	{
		___PropertyPath_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___PropertyPath_1), (void*)value);
	}

	inline static int32_t get_offset_of_Metadata_2() { return static_cast<int32_t>(offsetof(SetPropertyMethodFactory_tD563D2EDD8090BD7D52A68CC483A44C9177D5078, ___Metadata_2)); }
	inline SerializationMetadata_tCB3C700413EA4D79DB35199627C7DD6F8EF1ECE2 * get_Metadata_2() const { return ___Metadata_2; }
	inline SerializationMetadata_tCB3C700413EA4D79DB35199627C7DD6F8EF1ECE2 ** get_address_of_Metadata_2() { return &___Metadata_2; }
	inline void set_Metadata_2(SerializationMetadata_tCB3C700413EA4D79DB35199627C7DD6F8EF1ECE2 * value)
	{
		___Metadata_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Metadata_2), (void*)value);
	}
};

struct Il2CppArrayBounds;

// System.Array


// System.Attribute
struct Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71  : public RuntimeObject
{
public:

public:
};


// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
{
public:

public:
};


// Unity.RuntimeSceneSerialization.Internal.Prefabs.RuntimePrefabPropertyOverride
struct RuntimePrefabPropertyOverride_t31453ACA5BF2DF49C2A0EB4D1F09CF70EEF4B2ED  : public RuntimeObject
{
public:
	// System.String Unity.RuntimeSceneSerialization.Internal.Prefabs.RuntimePrefabPropertyOverride::m_PropertyPath
	String_t* ___m_PropertyPath_0;
	// System.String Unity.RuntimeSceneSerialization.Internal.Prefabs.RuntimePrefabPropertyOverride::m_TransformPath
	String_t* ___m_TransformPath_1;
	// System.Int32 Unity.RuntimeSceneSerialization.Internal.Prefabs.RuntimePrefabPropertyOverride::m_ComponentIndex
	int32_t ___m_ComponentIndex_2;

public:
	inline static int32_t get_offset_of_m_PropertyPath_0() { return static_cast<int32_t>(offsetof(RuntimePrefabPropertyOverride_t31453ACA5BF2DF49C2A0EB4D1F09CF70EEF4B2ED, ___m_PropertyPath_0)); }
	inline String_t* get_m_PropertyPath_0() const { return ___m_PropertyPath_0; }
	inline String_t** get_address_of_m_PropertyPath_0() { return &___m_PropertyPath_0; }
	inline void set_m_PropertyPath_0(String_t* value)
	{
		___m_PropertyPath_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PropertyPath_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_TransformPath_1() { return static_cast<int32_t>(offsetof(RuntimePrefabPropertyOverride_t31453ACA5BF2DF49C2A0EB4D1F09CF70EEF4B2ED, ___m_TransformPath_1)); }
	inline String_t* get_m_TransformPath_1() const { return ___m_TransformPath_1; }
	inline String_t** get_address_of_m_TransformPath_1() { return &___m_TransformPath_1; }
	inline void set_m_TransformPath_1(String_t* value)
	{
		___m_TransformPath_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TransformPath_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_ComponentIndex_2() { return static_cast<int32_t>(offsetof(RuntimePrefabPropertyOverride_t31453ACA5BF2DF49C2A0EB4D1F09CF70EEF4B2ED, ___m_ComponentIndex_2)); }
	inline int32_t get_m_ComponentIndex_2() const { return ___m_ComponentIndex_2; }
	inline int32_t* get_address_of_m_ComponentIndex_2() { return &___m_ComponentIndex_2; }
	inline void set_m_ComponentIndex_2(int32_t value)
	{
		___m_ComponentIndex_2 = value;
	}
};


// Unity.RuntimeSceneSerialization.SerializationMetadata
struct SerializationMetadata_tCB3C700413EA4D79DB35199627C7DD6F8EF1ECE2  : public RuntimeObject
{
public:
	// System.Boolean Unity.RuntimeSceneSerialization.SerializationMetadata::m_SceneObjectsSetup
	bool ___m_SceneObjectsSetup_0;
	// System.Int32 Unity.RuntimeSceneSerialization.SerializationMetadata::m_SceneObjectCount
	int32_t ___m_SceneObjectCount_1;
	// System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.Object> Unity.RuntimeSceneSerialization.SerializationMetadata::k_SceneObjects
	Dictionary_2_t5CBFC5625F266C256F436B045F9B0CC8B1AF1F30 * ___k_SceneObjects_2;
	// System.Collections.Generic.Dictionary`2<UnityEngine.Object,System.Int32> Unity.RuntimeSceneSerialization.SerializationMetadata::k_SceneObjectLookupMap
	Dictionary_2_tD6E734B76E92BDF2A5B0F137063F225B41DF9106 * ___k_SceneObjectLookupMap_3;
	// Unity.RuntimeSceneSerialization.AssetPack Unity.RuntimeSceneSerialization.SerializationMetadata::m_AssetPack
	AssetPack_t505BB917031CB23540515D15E47DDC43F736368E * ___m_AssetPack_7;
	// System.Collections.Generic.Queue`1<System.Action> Unity.RuntimeSceneSerialization.SerializationMetadata::m_PostSerializationActions
	Queue_1_t1CEAFBBE28DBFFBB495734A06904F4783D889BD4 * ___m_PostSerializationActions_8;
	// System.Boolean Unity.RuntimeSceneSerialization.SerializationMetadata::m_QueueSceneReferences
	bool ___m_QueueSceneReferences_9;

public:
	inline static int32_t get_offset_of_m_SceneObjectsSetup_0() { return static_cast<int32_t>(offsetof(SerializationMetadata_tCB3C700413EA4D79DB35199627C7DD6F8EF1ECE2, ___m_SceneObjectsSetup_0)); }
	inline bool get_m_SceneObjectsSetup_0() const { return ___m_SceneObjectsSetup_0; }
	inline bool* get_address_of_m_SceneObjectsSetup_0() { return &___m_SceneObjectsSetup_0; }
	inline void set_m_SceneObjectsSetup_0(bool value)
	{
		___m_SceneObjectsSetup_0 = value;
	}

	inline static int32_t get_offset_of_m_SceneObjectCount_1() { return static_cast<int32_t>(offsetof(SerializationMetadata_tCB3C700413EA4D79DB35199627C7DD6F8EF1ECE2, ___m_SceneObjectCount_1)); }
	inline int32_t get_m_SceneObjectCount_1() const { return ___m_SceneObjectCount_1; }
	inline int32_t* get_address_of_m_SceneObjectCount_1() { return &___m_SceneObjectCount_1; }
	inline void set_m_SceneObjectCount_1(int32_t value)
	{
		___m_SceneObjectCount_1 = value;
	}

	inline static int32_t get_offset_of_k_SceneObjects_2() { return static_cast<int32_t>(offsetof(SerializationMetadata_tCB3C700413EA4D79DB35199627C7DD6F8EF1ECE2, ___k_SceneObjects_2)); }
	inline Dictionary_2_t5CBFC5625F266C256F436B045F9B0CC8B1AF1F30 * get_k_SceneObjects_2() const { return ___k_SceneObjects_2; }
	inline Dictionary_2_t5CBFC5625F266C256F436B045F9B0CC8B1AF1F30 ** get_address_of_k_SceneObjects_2() { return &___k_SceneObjects_2; }
	inline void set_k_SceneObjects_2(Dictionary_2_t5CBFC5625F266C256F436B045F9B0CC8B1AF1F30 * value)
	{
		___k_SceneObjects_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___k_SceneObjects_2), (void*)value);
	}

	inline static int32_t get_offset_of_k_SceneObjectLookupMap_3() { return static_cast<int32_t>(offsetof(SerializationMetadata_tCB3C700413EA4D79DB35199627C7DD6F8EF1ECE2, ___k_SceneObjectLookupMap_3)); }
	inline Dictionary_2_tD6E734B76E92BDF2A5B0F137063F225B41DF9106 * get_k_SceneObjectLookupMap_3() const { return ___k_SceneObjectLookupMap_3; }
	inline Dictionary_2_tD6E734B76E92BDF2A5B0F137063F225B41DF9106 ** get_address_of_k_SceneObjectLookupMap_3() { return &___k_SceneObjectLookupMap_3; }
	inline void set_k_SceneObjectLookupMap_3(Dictionary_2_tD6E734B76E92BDF2A5B0F137063F225B41DF9106 * value)
	{
		___k_SceneObjectLookupMap_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___k_SceneObjectLookupMap_3), (void*)value);
	}

	inline static int32_t get_offset_of_m_AssetPack_7() { return static_cast<int32_t>(offsetof(SerializationMetadata_tCB3C700413EA4D79DB35199627C7DD6F8EF1ECE2, ___m_AssetPack_7)); }
	inline AssetPack_t505BB917031CB23540515D15E47DDC43F736368E * get_m_AssetPack_7() const { return ___m_AssetPack_7; }
	inline AssetPack_t505BB917031CB23540515D15E47DDC43F736368E ** get_address_of_m_AssetPack_7() { return &___m_AssetPack_7; }
	inline void set_m_AssetPack_7(AssetPack_t505BB917031CB23540515D15E47DDC43F736368E * value)
	{
		___m_AssetPack_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_AssetPack_7), (void*)value);
	}

	inline static int32_t get_offset_of_m_PostSerializationActions_8() { return static_cast<int32_t>(offsetof(SerializationMetadata_tCB3C700413EA4D79DB35199627C7DD6F8EF1ECE2, ___m_PostSerializationActions_8)); }
	inline Queue_1_t1CEAFBBE28DBFFBB495734A06904F4783D889BD4 * get_m_PostSerializationActions_8() const { return ___m_PostSerializationActions_8; }
	inline Queue_1_t1CEAFBBE28DBFFBB495734A06904F4783D889BD4 ** get_address_of_m_PostSerializationActions_8() { return &___m_PostSerializationActions_8; }
	inline void set_m_PostSerializationActions_8(Queue_1_t1CEAFBBE28DBFFBB495734A06904F4783D889BD4 * value)
	{
		___m_PostSerializationActions_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PostSerializationActions_8), (void*)value);
	}

	inline static int32_t get_offset_of_m_QueueSceneReferences_9() { return static_cast<int32_t>(offsetof(SerializationMetadata_tCB3C700413EA4D79DB35199627C7DD6F8EF1ECE2, ___m_QueueSceneReferences_9)); }
	inline bool get_m_QueueSceneReferences_9() const { return ___m_QueueSceneReferences_9; }
	inline bool* get_address_of_m_QueueSceneReferences_9() { return &___m_QueueSceneReferences_9; }
	inline void set_m_QueueSceneReferences_9(bool value)
	{
		___m_QueueSceneReferences_9 = value;
	}
};

struct SerializationMetadata_tCB3C700413EA4D79DB35199627C7DD6F8EF1ECE2_StaticFields
{
public:
	// System.Collections.Generic.List`1<UnityEngine.Component> Unity.RuntimeSceneSerialization.SerializationMetadata::k_Components
	List_1_tA3929E98F6AC5A6E95EF799D2E3294F214358C0F * ___k_Components_4;
	// System.Collections.Generic.List`1<System.ValueTuple`2<UnityEngine.Component,System.Boolean>> Unity.RuntimeSceneSerialization.SerializationMetadata::k_SortedComponents
	List_1_t18405655F0EAB3B03E19EE70784EEDBCBB854099 * ___k_SortedComponents_5;
	// Unity.RuntimeSceneSerialization.SerializationMetadata Unity.RuntimeSceneSerialization.SerializationMetadata::<CurrentSerializationMetadata>k__BackingField
	SerializationMetadata_tCB3C700413EA4D79DB35199627C7DD6F8EF1ECE2 * ___U3CCurrentSerializationMetadataU3Ek__BackingField_6;

public:
	inline static int32_t get_offset_of_k_Components_4() { return static_cast<int32_t>(offsetof(SerializationMetadata_tCB3C700413EA4D79DB35199627C7DD6F8EF1ECE2_StaticFields, ___k_Components_4)); }
	inline List_1_tA3929E98F6AC5A6E95EF799D2E3294F214358C0F * get_k_Components_4() const { return ___k_Components_4; }
	inline List_1_tA3929E98F6AC5A6E95EF799D2E3294F214358C0F ** get_address_of_k_Components_4() { return &___k_Components_4; }
	inline void set_k_Components_4(List_1_tA3929E98F6AC5A6E95EF799D2E3294F214358C0F * value)
	{
		___k_Components_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___k_Components_4), (void*)value);
	}

	inline static int32_t get_offset_of_k_SortedComponents_5() { return static_cast<int32_t>(offsetof(SerializationMetadata_tCB3C700413EA4D79DB35199627C7DD6F8EF1ECE2_StaticFields, ___k_SortedComponents_5)); }
	inline List_1_t18405655F0EAB3B03E19EE70784EEDBCBB854099 * get_k_SortedComponents_5() const { return ___k_SortedComponents_5; }
	inline List_1_t18405655F0EAB3B03E19EE70784EEDBCBB854099 ** get_address_of_k_SortedComponents_5() { return &___k_SortedComponents_5; }
	inline void set_k_SortedComponents_5(List_1_t18405655F0EAB3B03E19EE70784EEDBCBB854099 * value)
	{
		___k_SortedComponents_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___k_SortedComponents_5), (void*)value);
	}

	inline static int32_t get_offset_of_U3CCurrentSerializationMetadataU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(SerializationMetadata_tCB3C700413EA4D79DB35199627C7DD6F8EF1ECE2_StaticFields, ___U3CCurrentSerializationMetadataU3Ek__BackingField_6)); }
	inline SerializationMetadata_tCB3C700413EA4D79DB35199627C7DD6F8EF1ECE2 * get_U3CCurrentSerializationMetadataU3Ek__BackingField_6() const { return ___U3CCurrentSerializationMetadataU3Ek__BackingField_6; }
	inline SerializationMetadata_tCB3C700413EA4D79DB35199627C7DD6F8EF1ECE2 ** get_address_of_U3CCurrentSerializationMetadataU3Ek__BackingField_6() { return &___U3CCurrentSerializationMetadataU3Ek__BackingField_6; }
	inline void set_U3CCurrentSerializationMetadataU3Ek__BackingField_6(SerializationMetadata_tCB3C700413EA4D79DB35199627C7DD6F8EF1ECE2 * value)
	{
		___U3CCurrentSerializationMetadataU3Ek__BackingField_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CCurrentSerializationMetadataU3Ek__BackingField_6), (void*)value);
	}
};


// System.String
struct String_t  : public RuntimeObject
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


// Unity.RuntimeSceneSerialization.Internal.UnityObjectPropertyVisitor
struct UnityObjectPropertyVisitor_t6D216B27CEC2B426B88BCA62A02F8A7D3BC4F14C  : public RuntimeObject
{
public:
	// System.Collections.Generic.List`1<Unity.Properties.IPropertyVisitorAdapter> Unity.RuntimeSceneSerialization.Internal.UnityObjectPropertyVisitor::m_Adapters
	List_1_t02860BA6E50A9698A51974D214EB88F667A870FF * ___m_Adapters_0;
	// Unity.RuntimeSceneSerialization.SerializationMetadata Unity.RuntimeSceneSerialization.Internal.UnityObjectPropertyVisitor::m_SerializationMetadata
	SerializationMetadata_tCB3C700413EA4D79DB35199627C7DD6F8EF1ECE2 * ___m_SerializationMetadata_1;

public:
	inline static int32_t get_offset_of_m_Adapters_0() { return static_cast<int32_t>(offsetof(UnityObjectPropertyVisitor_t6D216B27CEC2B426B88BCA62A02F8A7D3BC4F14C, ___m_Adapters_0)); }
	inline List_1_t02860BA6E50A9698A51974D214EB88F667A870FF * get_m_Adapters_0() const { return ___m_Adapters_0; }
	inline List_1_t02860BA6E50A9698A51974D214EB88F667A870FF ** get_address_of_m_Adapters_0() { return &___m_Adapters_0; }
	inline void set_m_Adapters_0(List_1_t02860BA6E50A9698A51974D214EB88F667A870FF * value)
	{
		___m_Adapters_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Adapters_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_SerializationMetadata_1() { return static_cast<int32_t>(offsetof(UnityObjectPropertyVisitor_t6D216B27CEC2B426B88BCA62A02F8A7D3BC4F14C, ___m_SerializationMetadata_1)); }
	inline SerializationMetadata_tCB3C700413EA4D79DB35199627C7DD6F8EF1ECE2 * get_m_SerializationMetadata_1() const { return ___m_SerializationMetadata_1; }
	inline SerializationMetadata_tCB3C700413EA4D79DB35199627C7DD6F8EF1ECE2 ** get_address_of_m_SerializationMetadata_1() { return &___m_SerializationMetadata_1; }
	inline void set_m_SerializationMetadata_1(SerializationMetadata_tCB3C700413EA4D79DB35199627C7DD6F8EF1ECE2 * value)
	{
		___m_SerializationMetadata_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SerializationMetadata_1), (void*)value);
	}
};


// System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52  : public RuntimeObject
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

// UnityEngine.XR.ARSubsystems.SerializableDictionary`2/KeyValuePair<System.Object,System.Object>
struct KeyValuePair_tDC7997A7314ED4FA7C9742BBF04107D452131A4F 
{
public:
	// TKey UnityEngine.XR.ARSubsystems.SerializableDictionary`2/KeyValuePair::key
	RuntimeObject * ___key_0;
	// TValue UnityEngine.XR.ARSubsystems.SerializableDictionary`2/KeyValuePair::value
	RuntimeObject * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_tDC7997A7314ED4FA7C9742BBF04107D452131A4F, ___key_0)); }
	inline RuntimeObject * get_key_0() const { return ___key_0; }
	inline RuntimeObject ** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(RuntimeObject * value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___key_0), (void*)value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_tDC7997A7314ED4FA7C9742BBF04107D452131A4F, ___value_1)); }
	inline RuntimeObject * get_value_1() const { return ___value_1; }
	inline RuntimeObject ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(RuntimeObject * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___value_1), (void*)value);
	}
};


// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>
struct KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	RuntimeObject * ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	RuntimeObject * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625, ___key_0)); }
	inline RuntimeObject * get_key_0() const { return ___key_0; }
	inline RuntimeObject ** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(RuntimeObject * value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___key_0), (void*)value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625, ___value_1)); }
	inline RuntimeObject * get_value_1() const { return ___value_1; }
	inline RuntimeObject ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(RuntimeObject * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___value_1), (void*)value);
	}
};


// Unity.RuntimeSceneSerialization.Internal.Prefabs.RuntimePrefabPropertyOverride`1<System.Boolean>
struct RuntimePrefabPropertyOverride_1_tA69A222C9CED679F3E74FC5DC80C7EA6B851D065  : public RuntimePrefabPropertyOverride_t31453ACA5BF2DF49C2A0EB4D1F09CF70EEF4B2ED
{
public:
	// TOverrideValue Unity.RuntimeSceneSerialization.Internal.Prefabs.RuntimePrefabPropertyOverride`1::m_Value
	bool ___m_Value_4;

public:
	inline static int32_t get_offset_of_m_Value_4() { return static_cast<int32_t>(offsetof(RuntimePrefabPropertyOverride_1_tA69A222C9CED679F3E74FC5DC80C7EA6B851D065, ___m_Value_4)); }
	inline bool get_m_Value_4() const { return ___m_Value_4; }
	inline bool* get_address_of_m_Value_4() { return &___m_Value_4; }
	inline void set_m_Value_4(bool value)
	{
		___m_Value_4 = value;
	}
};

struct RuntimePrefabPropertyOverride_1_tA69A222C9CED679F3E74FC5DC80C7EA6B851D065_StaticFields
{
public:
	// Unity.RuntimeSceneSerialization.Internal.Prefabs.RuntimePrefabPropertyOverride`1/SetPropertyMethodFactory<TOverrideValue> Unity.RuntimeSceneSerialization.Internal.Prefabs.RuntimePrefabPropertyOverride`1::k_Factory
	SetPropertyMethodFactory_tE818E41EA11176698A32881E90BD13517E4515ED * ___k_Factory_3;

public:
	inline static int32_t get_offset_of_k_Factory_3() { return static_cast<int32_t>(offsetof(RuntimePrefabPropertyOverride_1_tA69A222C9CED679F3E74FC5DC80C7EA6B851D065_StaticFields, ___k_Factory_3)); }
	inline SetPropertyMethodFactory_tE818E41EA11176698A32881E90BD13517E4515ED * get_k_Factory_3() const { return ___k_Factory_3; }
	inline SetPropertyMethodFactory_tE818E41EA11176698A32881E90BD13517E4515ED ** get_address_of_k_Factory_3() { return &___k_Factory_3; }
	inline void set_k_Factory_3(SetPropertyMethodFactory_tE818E41EA11176698A32881E90BD13517E4515ED * value)
	{
		___k_Factory_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___k_Factory_3), (void*)value);
	}
};


// Unity.RuntimeSceneSerialization.Internal.Prefabs.RuntimePrefabPropertyOverride`1<System.Char>
struct RuntimePrefabPropertyOverride_1_tCE24BDA19DB48FA9B5C7F2713D2FFBD20FC1D58A  : public RuntimePrefabPropertyOverride_t31453ACA5BF2DF49C2A0EB4D1F09CF70EEF4B2ED
{
public:
	// TOverrideValue Unity.RuntimeSceneSerialization.Internal.Prefabs.RuntimePrefabPropertyOverride`1::m_Value
	Il2CppChar ___m_Value_4;

public:
	inline static int32_t get_offset_of_m_Value_4() { return static_cast<int32_t>(offsetof(RuntimePrefabPropertyOverride_1_tCE24BDA19DB48FA9B5C7F2713D2FFBD20FC1D58A, ___m_Value_4)); }
	inline Il2CppChar get_m_Value_4() const { return ___m_Value_4; }
	inline Il2CppChar* get_address_of_m_Value_4() { return &___m_Value_4; }
	inline void set_m_Value_4(Il2CppChar value)
	{
		___m_Value_4 = value;
	}
};

struct RuntimePrefabPropertyOverride_1_tCE24BDA19DB48FA9B5C7F2713D2FFBD20FC1D58A_StaticFields
{
public:
	// Unity.RuntimeSceneSerialization.Internal.Prefabs.RuntimePrefabPropertyOverride`1/SetPropertyMethodFactory<TOverrideValue> Unity.RuntimeSceneSerialization.Internal.Prefabs.RuntimePrefabPropertyOverride`1::k_Factory
	SetPropertyMethodFactory_t4FB896DC1FC3CC5EA3B5DB83361872E68101D4D6 * ___k_Factory_3;

public:
	inline static int32_t get_offset_of_k_Factory_3() { return static_cast<int32_t>(offsetof(RuntimePrefabPropertyOverride_1_tCE24BDA19DB48FA9B5C7F2713D2FFBD20FC1D58A_StaticFields, ___k_Factory_3)); }
	inline SetPropertyMethodFactory_t4FB896DC1FC3CC5EA3B5DB83361872E68101D4D6 * get_k_Factory_3() const { return ___k_Factory_3; }
	inline SetPropertyMethodFactory_t4FB896DC1FC3CC5EA3B5DB83361872E68101D4D6 ** get_address_of_k_Factory_3() { return &___k_Factory_3; }
	inline void set_k_Factory_3(SetPropertyMethodFactory_t4FB896DC1FC3CC5EA3B5DB83361872E68101D4D6 * value)
	{
		___k_Factory_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___k_Factory_3), (void*)value);
	}
};


// Unity.RuntimeSceneSerialization.Internal.Prefabs.RuntimePrefabPropertyOverride`1<System.Int32>
struct RuntimePrefabPropertyOverride_1_tD95DCFBFF8375B970F83D1054F4E5979BE347115  : public RuntimePrefabPropertyOverride_t31453ACA5BF2DF49C2A0EB4D1F09CF70EEF4B2ED
{
public:
	// TOverrideValue Unity.RuntimeSceneSerialization.Internal.Prefabs.RuntimePrefabPropertyOverride`1::m_Value
	int32_t ___m_Value_4;

public:
	inline static int32_t get_offset_of_m_Value_4() { return static_cast<int32_t>(offsetof(RuntimePrefabPropertyOverride_1_tD95DCFBFF8375B970F83D1054F4E5979BE347115, ___m_Value_4)); }
	inline int32_t get_m_Value_4() const { return ___m_Value_4; }
	inline int32_t* get_address_of_m_Value_4() { return &___m_Value_4; }
	inline void set_m_Value_4(int32_t value)
	{
		___m_Value_4 = value;
	}
};

struct RuntimePrefabPropertyOverride_1_tD95DCFBFF8375B970F83D1054F4E5979BE347115_StaticFields
{
public:
	// Unity.RuntimeSceneSerialization.Internal.Prefabs.RuntimePrefabPropertyOverride`1/SetPropertyMethodFactory<TOverrideValue> Unity.RuntimeSceneSerialization.Internal.Prefabs.RuntimePrefabPropertyOverride`1::k_Factory
	SetPropertyMethodFactory_t6E81F0BD7791428D4C43BFFF83239F2D01A666DE * ___k_Factory_3;

public:
	inline static int32_t get_offset_of_k_Factory_3() { return static_cast<int32_t>(offsetof(RuntimePrefabPropertyOverride_1_tD95DCFBFF8375B970F83D1054F4E5979BE347115_StaticFields, ___k_Factory_3)); }
	inline SetPropertyMethodFactory_t6E81F0BD7791428D4C43BFFF83239F2D01A666DE * get_k_Factory_3() const { return ___k_Factory_3; }
	inline SetPropertyMethodFactory_t6E81F0BD7791428D4C43BFFF83239F2D01A666DE ** get_address_of_k_Factory_3() { return &___k_Factory_3; }
	inline void set_k_Factory_3(SetPropertyMethodFactory_t6E81F0BD7791428D4C43BFFF83239F2D01A666DE * value)
	{
		___k_Factory_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___k_Factory_3), (void*)value);
	}
};


// Unity.RuntimeSceneSerialization.Internal.Prefabs.RuntimePrefabPropertyOverride`1<System.Int64>
struct RuntimePrefabPropertyOverride_1_t4EFDEC999C9FEA31A6FFA159A986BF456791192F  : public RuntimePrefabPropertyOverride_t31453ACA5BF2DF49C2A0EB4D1F09CF70EEF4B2ED
{
public:
	// TOverrideValue Unity.RuntimeSceneSerialization.Internal.Prefabs.RuntimePrefabPropertyOverride`1::m_Value
	int64_t ___m_Value_4;

public:
	inline static int32_t get_offset_of_m_Value_4() { return static_cast<int32_t>(offsetof(RuntimePrefabPropertyOverride_1_t4EFDEC999C9FEA31A6FFA159A986BF456791192F, ___m_Value_4)); }
	inline int64_t get_m_Value_4() const { return ___m_Value_4; }
	inline int64_t* get_address_of_m_Value_4() { return &___m_Value_4; }
	inline void set_m_Value_4(int64_t value)
	{
		___m_Value_4 = value;
	}
};

struct RuntimePrefabPropertyOverride_1_t4EFDEC999C9FEA31A6FFA159A986BF456791192F_StaticFields
{
public:
	// Unity.RuntimeSceneSerialization.Internal.Prefabs.RuntimePrefabPropertyOverride`1/SetPropertyMethodFactory<TOverrideValue> Unity.RuntimeSceneSerialization.Internal.Prefabs.RuntimePrefabPropertyOverride`1::k_Factory
	SetPropertyMethodFactory_tF19BA07F0091FAB1F1C629792665E3CDC4FA5986 * ___k_Factory_3;

public:
	inline static int32_t get_offset_of_k_Factory_3() { return static_cast<int32_t>(offsetof(RuntimePrefabPropertyOverride_1_t4EFDEC999C9FEA31A6FFA159A986BF456791192F_StaticFields, ___k_Factory_3)); }
	inline SetPropertyMethodFactory_tF19BA07F0091FAB1F1C629792665E3CDC4FA5986 * get_k_Factory_3() const { return ___k_Factory_3; }
	inline SetPropertyMethodFactory_tF19BA07F0091FAB1F1C629792665E3CDC4FA5986 ** get_address_of_k_Factory_3() { return &___k_Factory_3; }
	inline void set_k_Factory_3(SetPropertyMethodFactory_tF19BA07F0091FAB1F1C629792665E3CDC4FA5986 * value)
	{
		___k_Factory_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___k_Factory_3), (void*)value);
	}
};


// Unity.RuntimeSceneSerialization.Internal.Prefabs.RuntimePrefabPropertyOverride`1<System.Object>
struct RuntimePrefabPropertyOverride_1_tCC9B679BFD6A61EA312443E4355AFA1F4FDD578E  : public RuntimePrefabPropertyOverride_t31453ACA5BF2DF49C2A0EB4D1F09CF70EEF4B2ED
{
public:
	// TOverrideValue Unity.RuntimeSceneSerialization.Internal.Prefabs.RuntimePrefabPropertyOverride`1::m_Value
	RuntimeObject * ___m_Value_4;

public:
	inline static int32_t get_offset_of_m_Value_4() { return static_cast<int32_t>(offsetof(RuntimePrefabPropertyOverride_1_tCC9B679BFD6A61EA312443E4355AFA1F4FDD578E, ___m_Value_4)); }
	inline RuntimeObject * get_m_Value_4() const { return ___m_Value_4; }
	inline RuntimeObject ** get_address_of_m_Value_4() { return &___m_Value_4; }
	inline void set_m_Value_4(RuntimeObject * value)
	{
		___m_Value_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Value_4), (void*)value);
	}
};

struct RuntimePrefabPropertyOverride_1_tCC9B679BFD6A61EA312443E4355AFA1F4FDD578E_StaticFields
{
public:
	// Unity.RuntimeSceneSerialization.Internal.Prefabs.RuntimePrefabPropertyOverride`1/SetPropertyMethodFactory<TOverrideValue> Unity.RuntimeSceneSerialization.Internal.Prefabs.RuntimePrefabPropertyOverride`1::k_Factory
	SetPropertyMethodFactory_t076B85733DE0BC9683C25A48172EF712FC67B12F * ___k_Factory_3;

public:
	inline static int32_t get_offset_of_k_Factory_3() { return static_cast<int32_t>(offsetof(RuntimePrefabPropertyOverride_1_tCC9B679BFD6A61EA312443E4355AFA1F4FDD578E_StaticFields, ___k_Factory_3)); }
	inline SetPropertyMethodFactory_t076B85733DE0BC9683C25A48172EF712FC67B12F * get_k_Factory_3() const { return ___k_Factory_3; }
	inline SetPropertyMethodFactory_t076B85733DE0BC9683C25A48172EF712FC67B12F ** get_address_of_k_Factory_3() { return &___k_Factory_3; }
	inline void set_k_Factory_3(SetPropertyMethodFactory_t076B85733DE0BC9683C25A48172EF712FC67B12F * value)
	{
		___k_Factory_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___k_Factory_3), (void*)value);
	}
};


// Unity.RuntimeSceneSerialization.Internal.Prefabs.RuntimePrefabPropertyOverride`1<System.Single>
struct RuntimePrefabPropertyOverride_1_t323D06C42CFD95426179D64B465812F43BAEA303  : public RuntimePrefabPropertyOverride_t31453ACA5BF2DF49C2A0EB4D1F09CF70EEF4B2ED
{
public:
	// TOverrideValue Unity.RuntimeSceneSerialization.Internal.Prefabs.RuntimePrefabPropertyOverride`1::m_Value
	float ___m_Value_4;

public:
	inline static int32_t get_offset_of_m_Value_4() { return static_cast<int32_t>(offsetof(RuntimePrefabPropertyOverride_1_t323D06C42CFD95426179D64B465812F43BAEA303, ___m_Value_4)); }
	inline float get_m_Value_4() const { return ___m_Value_4; }
	inline float* get_address_of_m_Value_4() { return &___m_Value_4; }
	inline void set_m_Value_4(float value)
	{
		___m_Value_4 = value;
	}
};

struct RuntimePrefabPropertyOverride_1_t323D06C42CFD95426179D64B465812F43BAEA303_StaticFields
{
public:
	// Unity.RuntimeSceneSerialization.Internal.Prefabs.RuntimePrefabPropertyOverride`1/SetPropertyMethodFactory<TOverrideValue> Unity.RuntimeSceneSerialization.Internal.Prefabs.RuntimePrefabPropertyOverride`1::k_Factory
	SetPropertyMethodFactory_t76CC016B18A838FAB61F2BAF991893E89B4F4A61 * ___k_Factory_3;

public:
	inline static int32_t get_offset_of_k_Factory_3() { return static_cast<int32_t>(offsetof(RuntimePrefabPropertyOverride_1_t323D06C42CFD95426179D64B465812F43BAEA303_StaticFields, ___k_Factory_3)); }
	inline SetPropertyMethodFactory_t76CC016B18A838FAB61F2BAF991893E89B4F4A61 * get_k_Factory_3() const { return ___k_Factory_3; }
	inline SetPropertyMethodFactory_t76CC016B18A838FAB61F2BAF991893E89B4F4A61 ** get_address_of_k_Factory_3() { return &___k_Factory_3; }
	inline void set_k_Factory_3(SetPropertyMethodFactory_t76CC016B18A838FAB61F2BAF991893E89B4F4A61 * value)
	{
		___k_Factory_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___k_Factory_3), (void*)value);
	}
};


// Unity.Properties.Internal.RuntimeTypeInfoCache`1<UnityEngine.BoundsInt>
struct RuntimeTypeInfoCache_1_tF08151FDB30F2267AE1E15AB784FF69BB07EB622 
{
public:
	union
	{
		struct
		{
		};
		uint8_t RuntimeTypeInfoCache_1_t30A0A6BC09AD64184AFB882CF46291A815E10EDD__padding[1];
	};

public:
};

struct RuntimeTypeInfoCache_1_tF08151FDB30F2267AE1E15AB784FF69BB07EB622_StaticFields
{
public:
	// System.Boolean Unity.Properties.Internal.RuntimeTypeInfoCache`1::IsValueType
	bool ___IsValueType_0;
	// System.Boolean Unity.Properties.Internal.RuntimeTypeInfoCache`1::IsPrimitive
	bool ___IsPrimitive_1;
	// System.Boolean Unity.Properties.Internal.RuntimeTypeInfoCache`1::IsInterface
	bool ___IsInterface_2;
	// System.Boolean Unity.Properties.Internal.RuntimeTypeInfoCache`1::IsAbstract
	bool ___IsAbstract_3;
	// System.Boolean Unity.Properties.Internal.RuntimeTypeInfoCache`1::IsArray
	bool ___IsArray_4;
	// System.Boolean Unity.Properties.Internal.RuntimeTypeInfoCache`1::IsEnum
	bool ___IsEnum_5;
	// System.Boolean Unity.Properties.Internal.RuntimeTypeInfoCache`1::IsEnumFlags
	bool ___IsEnumFlags_6;
	// System.Boolean Unity.Properties.Internal.RuntimeTypeInfoCache`1::IsNullable
	bool ___IsNullable_7;
	// System.Boolean Unity.Properties.Internal.RuntimeTypeInfoCache`1::IsObjectType
	bool ___IsObjectType_8;
	// System.Boolean Unity.Properties.Internal.RuntimeTypeInfoCache`1::IsStringType
	bool ___IsStringType_9;
	// System.Boolean Unity.Properties.Internal.RuntimeTypeInfoCache`1::IsContainerType
	bool ___IsContainerType_10;
	// System.Boolean Unity.Properties.Internal.RuntimeTypeInfoCache`1::CanBeNull
	bool ___CanBeNull_11;
	// System.Boolean Unity.Properties.Internal.RuntimeTypeInfoCache`1::IsNullableOrEnum
	bool ___IsNullableOrEnum_12;
	// System.Boolean Unity.Properties.Internal.RuntimeTypeInfoCache`1::IsPrimitiveOrString
	bool ___IsPrimitiveOrString_13;
	// System.Boolean Unity.Properties.Internal.RuntimeTypeInfoCache`1::IsAbstractOrInterface
	bool ___IsAbstractOrInterface_14;
	// System.Boolean Unity.Properties.Internal.RuntimeTypeInfoCache`1::IsLazyLoadReference
	bool ___IsLazyLoadReference_15;

public:
	inline static int32_t get_offset_of_IsValueType_0() { return static_cast<int32_t>(offsetof(RuntimeTypeInfoCache_1_tF08151FDB30F2267AE1E15AB784FF69BB07EB622_StaticFields, ___IsValueType_0)); }
	inline bool get_IsValueType_0() const { return ___IsValueType_0; }
	inline bool* get_address_of_IsValueType_0() { return &___IsValueType_0; }
	inline void set_IsValueType_0(bool value)
	{
		___IsValueType_0 = value;
	}

	inline static int32_t get_offset_of_IsPrimitive_1() { return static_cast<int32_t>(offsetof(RuntimeTypeInfoCache_1_tF08151FDB30F2267AE1E15AB784FF69BB07EB622_StaticFields, ___IsPrimitive_1)); }
	inline bool get_IsPrimitive_1() const { return ___IsPrimitive_1; }
	inline bool* get_address_of_IsPrimitive_1() { return &___IsPrimitive_1; }
	inline void set_IsPrimitive_1(bool value)
	{
		___IsPrimitive_1 = value;
	}

	inline static int32_t get_offset_of_IsInterface_2() { return static_cast<int32_t>(offsetof(RuntimeTypeInfoCache_1_tF08151FDB30F2267AE1E15AB784FF69BB07EB622_StaticFields, ___IsInterface_2)); }
	inline bool get_IsInterface_2() const { return ___IsInterface_2; }
	inline bool* get_address_of_IsInterface_2() { return &___IsInterface_2; }
	inline void set_IsInterface_2(bool value)
	{
		___IsInterface_2 = value;
	}

	inline static int32_t get_offset_of_IsAbstract_3() { return static_cast<int32_t>(offsetof(RuntimeTypeInfoCache_1_tF08151FDB30F2267AE1E15AB784FF69BB07EB622_StaticFields, ___IsAbstract_3)); }
	inline bool get_IsAbstract_3() const { return ___IsAbstract_3; }
	inline bool* get_address_of_IsAbstract_3() { return &___IsAbstract_3; }
	inline void set_IsAbstract_3(bool value)
	{
		___IsAbstract_3 = value;
	}

	inline static int32_t get_offset_of_IsArray_4() { return static_cast<int32_t>(offsetof(RuntimeTypeInfoCache_1_tF08151FDB30F2267AE1E15AB784FF69BB07EB622_StaticFields, ___IsArray_4)); }
	inline bool get_IsArray_4() const { return ___IsArray_4; }
	inline bool* get_address_of_IsArray_4() { return &___IsArray_4; }
	inline void set_IsArray_4(bool value)
	{
		___IsArray_4 = value;
	}

	inline static int32_t get_offset_of_IsEnum_5() { return static_cast<int32_t>(offsetof(RuntimeTypeInfoCache_1_tF08151FDB30F2267AE1E15AB784FF69BB07EB622_StaticFields, ___IsEnum_5)); }
	inline bool get_IsEnum_5() const { return ___IsEnum_5; }
	inline bool* get_address_of_IsEnum_5() { return &___IsEnum_5; }
	inline void set_IsEnum_5(bool value)
	{
		___IsEnum_5 = value;
	}

	inline static int32_t get_offset_of_IsEnumFlags_6() { return static_cast<int32_t>(offsetof(RuntimeTypeInfoCache_1_tF08151FDB30F2267AE1E15AB784FF69BB07EB622_StaticFields, ___IsEnumFlags_6)); }
	inline bool get_IsEnumFlags_6() const { return ___IsEnumFlags_6; }
	inline bool* get_address_of_IsEnumFlags_6() { return &___IsEnumFlags_6; }
	inline void set_IsEnumFlags_6(bool value)
	{
		___IsEnumFlags_6 = value;
	}

	inline static int32_t get_offset_of_IsNullable_7() { return static_cast<int32_t>(offsetof(RuntimeTypeInfoCache_1_tF08151FDB30F2267AE1E15AB784FF69BB07EB622_StaticFields, ___IsNullable_7)); }
	inline bool get_IsNullable_7() const { return ___IsNullable_7; }
	inline bool* get_address_of_IsNullable_7() { return &___IsNullable_7; }
	inline void set_IsNullable_7(bool value)
	{
		___IsNullable_7 = value;
	}

	inline static int32_t get_offset_of_IsObjectType_8() { return static_cast<int32_t>(offsetof(RuntimeTypeInfoCache_1_tF08151FDB30F2267AE1E15AB784FF69BB07EB622_StaticFields, ___IsObjectType_8)); }
	inline bool get_IsObjectType_8() const { return ___IsObjectType_8; }
	inline bool* get_address_of_IsObjectType_8() { return &___IsObjectType_8; }
	inline void set_IsObjectType_8(bool value)
	{
		___IsObjectType_8 = value;
	}

	inline static int32_t get_offset_of_IsStringType_9() { return static_cast<int32_t>(offsetof(RuntimeTypeInfoCache_1_tF08151FDB30F2267AE1E15AB784FF69BB07EB622_StaticFields, ___IsStringType_9)); }
	inline bool get_IsStringType_9() const { return ___IsStringType_9; }
	inline bool* get_address_of_IsStringType_9() { return &___IsStringType_9; }
	inline void set_IsStringType_9(bool value)
	{
		___IsStringType_9 = value;
	}

	inline static int32_t get_offset_of_IsContainerType_10() { return static_cast<int32_t>(offsetof(RuntimeTypeInfoCache_1_tF08151FDB30F2267AE1E15AB784FF69BB07EB622_StaticFields, ___IsContainerType_10)); }
	inline bool get_IsContainerType_10() const { return ___IsContainerType_10; }
	inline bool* get_address_of_IsContainerType_10() { return &___IsContainerType_10; }
	inline void set_IsContainerType_10(bool value)
	{
		___IsContainerType_10 = value;
	}

	inline static int32_t get_offset_of_CanBeNull_11() { return static_cast<int32_t>(offsetof(RuntimeTypeInfoCache_1_tF08151FDB30F2267AE1E15AB784FF69BB07EB622_StaticFields, ___CanBeNull_11)); }
	inline bool get_CanBeNull_11() const { return ___CanBeNull_11; }
	inline bool* get_address_of_CanBeNull_11() { return &___CanBeNull_11; }
	inline void set_CanBeNull_11(bool value)
	{
		___CanBeNull_11 = value;
	}

	inline static int32_t get_offset_of_IsNullableOrEnum_12() { return static_cast<int32_t>(offsetof(RuntimeTypeInfoCache_1_tF08151FDB30F2267AE1E15AB784FF69BB07EB622_StaticFields, ___IsNullableOrEnum_12)); }
	inline bool get_IsNullableOrEnum_12() const { return ___IsNullableOrEnum_12; }
	inline bool* get_address_of_IsNullableOrEnum_12() { return &___IsNullableOrEnum_12; }
	inline void set_IsNullableOrEnum_12(bool value)
	{
		___IsNullableOrEnum_12 = value;
	}

	inline static int32_t get_offset_of_IsPrimitiveOrString_13() { return static_cast<int32_t>(offsetof(RuntimeTypeInfoCache_1_tF08151FDB30F2267AE1E15AB784FF69BB07EB622_StaticFields, ___IsPrimitiveOrString_13)); }
	inline bool get_IsPrimitiveOrString_13() const { return ___IsPrimitiveOrString_13; }
	inline bool* get_address_of_IsPrimitiveOrString_13() { return &___IsPrimitiveOrString_13; }
	inline void set_IsPrimitiveOrString_13(bool value)
	{
		___IsPrimitiveOrString_13 = value;
	}

	inline static int32_t get_offset_of_IsAbstractOrInterface_14() { return static_cast<int32_t>(offsetof(RuntimeTypeInfoCache_1_tF08151FDB30F2267AE1E15AB784FF69BB07EB622_StaticFields, ___IsAbstractOrInterface_14)); }
	inline bool get_IsAbstractOrInterface_14() const { return ___IsAbstractOrInterface_14; }
	inline bool* get_address_of_IsAbstractOrInterface_14() { return &___IsAbstractOrInterface_14; }
	inline void set_IsAbstractOrInterface_14(bool value)
	{
		___IsAbstractOrInterface_14 = value;
	}

	inline static int32_t get_offset_of_IsLazyLoadReference_15() { return static_cast<int32_t>(offsetof(RuntimeTypeInfoCache_1_tF08151FDB30F2267AE1E15AB784FF69BB07EB622_StaticFields, ___IsLazyLoadReference_15)); }
	inline bool get_IsLazyLoadReference_15() const { return ___IsLazyLoadReference_15; }
	inline bool* get_address_of_IsLazyLoadReference_15() { return &___IsLazyLoadReference_15; }
	inline void set_IsLazyLoadReference_15(bool value)
	{
		___IsLazyLoadReference_15 = value;
	}
};


// Unity.Properties.Internal.RuntimeTypeInfoCache`1<System.Byte>
struct RuntimeTypeInfoCache_1_t15D2958D549D5150114F6EE3F459973EF7F5B273 
{
public:
	union
	{
		struct
		{
		};
		uint8_t RuntimeTypeInfoCache_1_t30A0A6BC09AD64184AFB882CF46291A815E10EDD__padding[1];
	};

public:
};

struct RuntimeTypeInfoCache_1_t15D2958D549D5150114F6EE3F459973EF7F5B273_StaticFields
{
public:
	// System.Boolean Unity.Properties.Internal.RuntimeTypeInfoCache`1::IsValueType
	bool ___IsValueType_0;
	// System.Boolean Unity.Properties.Internal.RuntimeTypeInfoCache`1::IsPrimitive
	bool ___IsPrimitive_1;
	// System.Boolean Unity.Properties.Internal.RuntimeTypeInfoCache`1::IsInterface
	bool ___IsInterface_2;
	// System.Boolean Unity.Properties.Internal.RuntimeTypeInfoCache`1::IsAbstract
	bool ___IsAbstract_3;
	// System.Boolean Unity.Properties.Internal.RuntimeTypeInfoCache`1::IsArray
	bool ___IsArray_4;
	// System.Boolean Unity.Properties.Internal.RuntimeTypeInfoCache`1::IsEnum
	bool ___IsEnum_5;
	// System.Boolean Unity.Properties.Internal.RuntimeTypeInfoCache`1::IsEnumFlags
	bool ___IsEnumFlags_6;
	// System.Boolean Unity.Properties.Internal.RuntimeTypeInfoCache`1::IsNullable
	bool ___IsNullable_7;
	// System.Boolean Unity.Properties.Internal.RuntimeTypeInfoCache`1::IsObjectType
	bool ___IsObjectType_8;
	// System.Boolean Unity.Properties.Internal.RuntimeTypeInfoCache`1::IsStringType
	bool ___IsStringType_9;
	// System.Boolean Unity.Properties.Internal.RuntimeTypeInfoCache`1::IsContainerType
	bool ___IsContainerType_10;
	// System.Boolean Unity.Properties.Internal.RuntimeTypeInfoCache`1::CanBeNull
	bool ___CanBeNull_11;
	// System.Boolean Unity.Properties.Internal.RuntimeTypeInfoCache`1::IsNullableOrEnum
	bool ___IsNullableOrEnum_12;
	// System.Boolean Unity.Properties.Internal.RuntimeTypeInfoCache`1::IsPrimitiveOrString
	bool ___IsPrimitiveOrString_13;
	// System.Boolean Unity.Properties.Internal.RuntimeTypeInfoCache`1::IsAbstractOrInterface
	bool ___IsAbstractOrInterface_14;
	// System.Boolean Unity.Properties.Internal.RuntimeTypeInfoCache`1::IsLazyLoadReference
	bool ___IsLazyLoadReference_15;

public:
	inline static int32_t get_offset_of_IsValueType_0() { return static_cast<int32_t>(offsetof(RuntimeTypeInfoCache_1_t15D2958D549D5150114F6EE3F459973EF7F5B273_StaticFields, ___IsValueType_0)); }
	inline bool get_IsValueType_0() const { return ___IsValueType_0; }
	inline bool* get_address_of_IsValueType_0() { return &___IsValueType_0; }
	inline void set_IsValueType_0(bool value)
	{
		___IsValueType_0 = value;
	}

	inline static int32_t get_offset_of_IsPrimitive_1() { return static_cast<int32_t>(offsetof(RuntimeTypeInfoCache_1_t15D2958D549D5150114F6EE3F459973EF7F5B273_StaticFields, ___IsPrimitive_1)); }
	inline bool get_IsPrimitive_1() const { return ___IsPrimitive_1; }
	inline bool* get_address_of_IsPrimitive_1() { return &___IsPrimitive_1; }
	inline void set_IsPrimitive_1(bool value)
	{
		___IsPrimitive_1 = value;
	}

	inline static int32_t get_offset_of_IsInterface_2() { return static_cast<int32_t>(offsetof(RuntimeTypeInfoCache_1_t15D2958D549D5150114F6EE3F459973EF7F5B273_StaticFields, ___IsInterface_2)); }
	inline bool get_IsInterface_2() const { return ___IsInterface_2; }
	inline bool* get_address_of_IsInterface_2() { return &___IsInterface_2; }
	inline void set_IsInterface_2(bool value)
	{
		___IsInterface_2 = value;
	}

	inline static int32_t get_offset_of_IsAbstract_3() { return static_cast<int32_t>(offsetof(RuntimeTypeInfoCache_1_t15D2958D549D5150114F6EE3F459973EF7F5B273_StaticFields, ___IsAbstract_3)); }
	inline bool get_IsAbstract_3() const { return ___IsAbstract_3; }
	inline bool* get_address_of_IsAbstract_3() { return &___IsAbstract_3; }
	inline void set_IsAbstract_3(bool value)
	{
		___IsAbstract_3 = value;
	}

	inline static int32_t get_offset_of_IsArray_4() { return static_cast<int32_t>(offsetof(RuntimeTypeInfoCache_1_t15D2958D549D5150114F6EE3F459973EF7F5B273_StaticFields, ___IsArray_4)); }
	inline bool get_IsArray_4() const { return ___IsArray_4; }
	inline bool* get_address_of_IsArray_4() { return &___IsArray_4; }
	inline void set_IsArray_4(bool value)
	{
		___IsArray_4 = value;
	}

	inline static int32_t get_offset_of_IsEnum_5() { return static_cast<int32_t>(offsetof(RuntimeTypeInfoCache_1_t15D2958D549D5150114F6EE3F459973EF7F5B273_StaticFields, ___IsEnum_5)); }
	inline bool get_IsEnum_5() const { return ___IsEnum_5; }
	inline bool* get_address_of_IsEnum_5() { return &___IsEnum_5; }
	inline void set_IsEnum_5(bool value)
	{
		___IsEnum_5 = value;
	}

	inline static int32_t get_offset_of_IsEnumFlags_6() { return static_cast<int32_t>(offsetof(RuntimeTypeInfoCache_1_t15D2958D549D5150114F6EE3F459973EF7F5B273_StaticFields, ___IsEnumFlags_6)); }
	inline bool get_IsEnumFlags_6() const { return ___IsEnumFlags_6; }
	inline bool* get_address_of_IsEnumFlags_6() { return &___IsEnumFlags_6; }
	inline void set_IsEnumFlags_6(bool value)
	{
		___IsEnumFlags_6 = value;
	}

	inline static int32_t get_offset_of_IsNullable_7() { return static_cast<int32_t>(offsetof(RuntimeTypeInfoCache_1_t15D2958D549D5150114F6EE3F459973EF7F5B273_StaticFields, ___IsNullable_7)); }
	inline bool get_IsNullable_7() const { return ___IsNullable_7; }
	inline bool* get_address_of_IsNullable_7() { return &___IsNullable_7; }
	inline void set_IsNullable_7(bool value)
	{
		___IsNullable_7 = value;
	}

	inline static int32_t get_offset_of_IsObjectType_8() { return static_cast<int32_t>(offsetof(RuntimeTypeInfoCache_1_t15D2958D549D5150114F6EE3F459973EF7F5B273_StaticFields, ___IsObjectType_8)); }
	inline bool get_IsObjectType_8() const { return ___IsObjectType_8; }
	inline bool* get_address_of_IsObjectType_8() { return &___IsObjectType_8; }
	inline void set_IsObjectType_8(bool value)
	{
		___IsObjectType_8 = value;
	}

	inline static int32_t get_offset_of_IsStringType_9() { return static_cast<int32_t>(offsetof(RuntimeTypeInfoCache_1_t15D2958D549D5150114F6EE3F459973EF7F5B273_StaticFields, ___IsStringType_9)); }
	inline bool get_IsStringType_9() const { return ___IsStringType_9; }
	inline bool* get_address_of_IsStringType_9() { return &___IsStringType_9; }
	inline void set_IsStringType_9(bool value)
	{
		___IsStringType_9 = value;
	}

	inline static int32_t get_offset_of_IsContainerType_10() { return static_cast<int32_t>(offsetof(RuntimeTypeInfoCache_1_t15D2958D549D5150114F6EE3F459973EF7F5B273_StaticFields, ___IsContainerType_10)); }
	inline bool get_IsContainerType_10() const { return ___IsContainerType_10; }
	inline bool* get_address_of_IsContainerType_10() { return &___IsContainerType_10; }
	inline void set_IsContainerType_10(bool value)
	{
		___IsContainerType_10 = value;
	}

	inline static int32_t get_offset_of_CanBeNull_11() { return static_cast<int32_t>(offsetof(RuntimeTypeInfoCache_1_t15D2958D549D5150114F6EE3F459973EF7F5B273_StaticFields, ___CanBeNull_11)); }
	inline bool get_CanBeNull_11() const { return ___CanBeNull_11; }
	inline bool* get_address_of_CanBeNull_11() { return &___CanBeNull_11; }
	inline void set_CanBeNull_11(bool value)
	{
		___CanBeNull_11 = value;
	}

	inline static int32_t get_offset_of_IsNullableOrEnum_12() { return static_cast<int32_t>(offsetof(RuntimeTypeInfoCache_1_t15D2958D549D5150114F6EE3F459973EF7F5B273_StaticFields, ___IsNullableOrEnum_12)); }
	inline bool get_IsNullableOrEnum_12() const { return ___IsNullableOrEnum_12; }
	inline bool* get_address_of_IsNullableOrEnum_12() { return &___IsNullableOrEnum_12; }
	inline void set_IsNullableOrEnum_12(bool value)
	{
		___IsNullableOrEnum_12 = value;
	}

	inline static int32_t get_offset_of_IsPrimitiveOrString_13() { return static_cast<int32_t>(offsetof(RuntimeTypeInfoCache_1_t15D2958D549D5150114F6EE3F459973EF7F5B273_StaticFields, ___IsPrimitiveOrString_13)); }
	inline bool get_IsPrimitiveOrString_13() const { return ___IsPrimitiveOrString_13; }
	inline bool* get_address_of_IsPrimitiveOrString_13() { return &___IsPrimitiveOrString_13; }
	inline void set_IsPrimitiveOrString_13(bool value)
	{
		___IsPrimitiveOrString_13 = value;
	}

	inline static int32_t get_offset_of_IsAbstractOrInterface_14() { return static_cast<int32_t>(offsetof(RuntimeTypeInfoCache_1_t15D2958D549D5150114F6EE3F459973EF7F5B273_StaticFields, ___IsAbstractOrInterface_14)); }
	inline bool get_IsAbstractOrInterface_14() const { return ___IsAbstractOrInterface_14; }
	inline bool* get_address_of_IsAbstractOrInterface_14() { return &___IsAbstractOrInterface_14; }
	inline void set_IsAbstractOrInterface_14(bool value)
	{
		___IsAbstractOrInterface_14 = value;
	}

	inline static int32_t get_offset_of_IsLazyLoadReference_15() { return static_cast<int32_t>(offsetof(RuntimeTypeInfoCache_1_t15D2958D549D5150114F6EE3F459973EF7F5B273_StaticFields, ___IsLazyLoadReference_15)); }
	inline bool get_IsLazyLoadReference_15() const { return ___IsLazyLoadReference_15; }
	inline bool* get_address_of_IsLazyLoadReference_15() { return &___IsLazyLoadReference_15; }
	inline void set_IsLazyLoadReference_15(bool value)
	{
		___IsLazyLoadReference_15 = value;
	}
};


// Unity.Properties.Internal.RuntimeTypeInfoCache`1<System.Char>
struct RuntimeTypeInfoCache_1_t9CF6C57B0806C60C2CAAAED2D7F569ED23ECA790 
{
public:
	union
	{
		struct
		{
		};
		uint8_t RuntimeTypeInfoCache_1_t30A0A6BC09AD64184AFB882CF46291A815E10EDD__padding[1];
	};

public:
};

struct RuntimeTypeInfoCache_1_t9CF6C57B0806C60C2CAAAED2D7F569ED23ECA790_StaticFields
{
public:
	// System.Boolean Unity.Properties.Internal.RuntimeTypeInfoCache`1::IsValueType
	bool ___IsValueType_0;
	// System.Boolean Unity.Properties.Internal.RuntimeTypeInfoCache`1::IsPrimitive
	bool ___IsPrimitive_1;
	// System.Boolean Unity.Properties.Internal.RuntimeTypeInfoCache`1::IsInterface
	bool ___IsInterface_2;
	// System.Boolean Unity.Properties.Internal.RuntimeTypeInfoCache`1::IsAbstract
	bool ___IsAbstract_3;
	// System.Boolean Unity.Properties.Internal.RuntimeTypeInfoCache`1::IsArray
	bool ___IsArray_4;
	// System.Boolean Unity.Properties.Internal.RuntimeTypeInfoCache`1::IsEnum
	bool ___IsEnum_5;
	// System.Boolean Unity.Properties.Internal.RuntimeTypeInfoCache`1::IsEnumFlags
	bool ___IsEnumFlags_6;
	// System.Boolean Unity.Properties.Internal.RuntimeTypeInfoCache`1::IsNullable
	bool ___IsNullable_7;
	// System.Boolean Unity.Properties.Internal.RuntimeTypeInfoCache`1::IsObjectType
	bool ___IsObjectType_8;
	// System.Boolean Unity.Properties.Internal.RuntimeTypeInfoCache`1::IsStringType
	bool ___IsStringType_9;
	// System.Boolean Unity.Properties.Internal.RuntimeTypeInfoCache`1::IsContainerType
	bool ___IsContainerType_10;
	// System.Boolean Unity.Properties.Internal.RuntimeTypeInfoCache`1::CanBeNull
	bool ___CanBeNull_11;
	// System.Boolean Unity.Properties.Internal.RuntimeTypeInfoCache`1::IsNullableOrEnum
	bool ___IsNullableOrEnum_12;
	// System.Boolean Unity.Properties.Internal.RuntimeTypeInfoCache`1::IsPrimitiveOrString
	bool ___IsPrimitiveOrString_13;
	// System.Boolean Unity.Properties.Internal.RuntimeTypeInfoCache`1::IsAbstractOrInterface
	bool ___IsAbstractOrInterface_14;
	// System.Boolean Unity.Properties.Internal.RuntimeTypeInfoCache`1::IsLazyLoadReference
	bool ___IsLazyLoadReference_15;

public:
	inline static int32_t get_offset_of_IsValueType_0() { return static_cast<int32_t>(offsetof(RuntimeTypeInfoCache_1_t9CF6C57B0806C60C2CAAAED2D7F569ED23ECA790_StaticFields, ___IsValueType_0)); }
	inline bool get_IsValueType_0() const { return ___IsValueType_0; }
	inline bool* get_address_of_IsValueType_0() { return &___IsValueType_0; }
	inline void set_IsValueType_0(bool value)
	{
		___IsValueType_0 = value;
	}

	inline static int32_t get_offset_of_IsPrimitive_1() { return static_cast<int32_t>(offsetof(RuntimeTypeInfoCache_1_t9CF6C57B0806C60C2CAAAED2D7F569ED23ECA790_StaticFields, ___IsPrimitive_1)); }
	inline bool get_IsPrimitive_1() const { return ___IsPrimitive_1; }
	inline bool* get_address_of_IsPrimitive_1() { return &___IsPrimitive_1; }
	inline void set_IsPrimitive_1(bool value)
	{
		___IsPrimitive_1 = value;
	}

	inline static int32_t get_offset_of_IsInterface_2() { return static_cast<int32_t>(offsetof(RuntimeTypeInfoCache_1_t9CF6C57B0806C60C2CAAAED2D7F569ED23ECA790_StaticFields, ___IsInterface_2)); }
	inline bool get_IsInterface_2() const { return ___IsInterface_2; }
	inline bool* get_address_of_IsInterface_2() { return &___IsInterface_2; }
	inline void set_IsInterface_2(bool value)
	{
		___IsInterface_2 = value;
	}

	inline static int32_t get_offset_of_IsAbstract_3() { return static_cast<int32_t>(offsetof(RuntimeTypeInfoCache_1_t9CF6C57B0806C60C2CAAAED2D7F569ED23ECA790_StaticFields, ___IsAbstract_3)); }
	inline bool get_IsAbstract_3() const { return ___IsAbstract_3; }
	inline bool* get_address_of_IsAbstract_3() { return &___IsAbstract_3; }
	inline void set_IsAbstract_3(bool value)
	{
		___IsAbstract_3 = value;
	}

	inline static int32_t get_offset_of_IsArray_4() { return static_cast<int32_t>(offsetof(RuntimeTypeInfoCache_1_t9CF6C57B0806C60C2CAAAED2D7F569ED23ECA790_StaticFields, ___IsArray_4)); }
	inline bool get_IsArray_4() const { return ___IsArray_4; }
	inline bool* get_address_of_IsArray_4() { return &___IsArray_4; }
	inline void set_IsArray_4(bool value)
	{
		___IsArray_4 = value;
	}

	inline static int32_t get_offset_of_IsEnum_5() { return static_cast<int32_t>(offsetof(RuntimeTypeInfoCache_1_t9CF6C57B0806C60C2CAAAED2D7F569ED23ECA790_StaticFields, ___IsEnum_5)); }
	inline bool get_IsEnum_5() const { return ___IsEnum_5; }
	inline bool* get_address_of_IsEnum_5() { return &___IsEnum_5; }
	inline void set_IsEnum_5(bool value)
	{
		___IsEnum_5 = value;
	}

	inline static int32_t get_offset_of_IsEnumFlags_6() { return static_cast<int32_t>(offsetof(RuntimeTypeInfoCache_1_t9CF6C57B0806C60C2CAAAED2D7F569ED23ECA790_StaticFields, ___IsEnumFlags_6)); }
	inline bool get_IsEnumFlags_6() const { return ___IsEnumFlags_6; }
	inline bool* get_address_of_IsEnumFlags_6() { return &___IsEnumFlags_6; }
	inline void set_IsEnumFlags_6(bool value)
	{
		___IsEnumFlags_6 = value;
	}

	inline static int32_t get_offset_of_IsNullable_7() { return static_cast<int32_t>(offsetof(RuntimeTypeInfoCache_1_t9CF6C57B0806C60C2CAAAED2D7F569ED23ECA790_StaticFields, ___IsNullable_7)); }
	inline bool get_IsNullable_7() const { return ___IsNullable_7; }
	inline bool* get_address_of_IsNullable_7() { return &___IsNullable_7; }
	inline void set_IsNullable_7(bool value)
	{
		___IsNullable_7 = value;
	}

	inline static int32_t get_offset_of_IsObjectType_8() { return static_cast<int32_t>(offsetof(RuntimeTypeInfoCache_1_t9CF6C57B0806C60C2CAAAED2D7F569ED23ECA790_StaticFields, ___IsObjectType_8)); }
	inline bool get_IsObjectType_8() const { return ___IsObjectType_8; }
	inline bool* get_address_of_IsObjectType_8() { return &___IsObjectType_8; }
	inline void set_IsObjectType_8(bool value)
	{
		___IsObjectType_8 = value;
	}

	inline static int32_t get_offset_of_IsStringType_9() { return static_cast<int32_t>(offsetof(RuntimeTypeInfoCache_1_t9CF6C57B0806C60C2CAAAED2D7F569ED23ECA790_StaticFields, ___IsStringType_9)); }
	inline bool get_IsStringType_9() const { return ___IsStringType_9; }
	inline bool* get_address_of_IsStringType_9() { return &___IsStringType_9; }
	inline void set_IsStringType_9(bool value)
	{
		___IsStringType_9 = value;
	}

	inline static int32_t get_offset_of_IsContainerType_10() { return static_cast<int32_t>(offsetof(RuntimeTypeInfoCache_1_t9CF6C57B0806C60C2CAAAED2D7F569ED23ECA790_StaticFields, ___IsContainerType_10)); }
	inline bool get_IsContainerType_10() const { return ___IsContainerType_10; }
	inline bool* get_address_of_IsContainerType_10() { return &___IsContainerType_10; }
	inline void set_IsContainerType_10(bool value)
	{
		___IsContainerType_10 = value;
	}

	inline static int32_t get_offset_of_CanBeNull_11() { return static_cast<int32_t>(offsetof(RuntimeTypeInfoCache_1_t9CF6C57B0806C60C2CAAAED2D7F569ED23ECA790_StaticFields, ___CanBeNull_11)); }
	inline bool get_CanBeNull_11() const { return ___CanBeNull_11; }
	inline bool* get_address_of_CanBeNull_11() { return &___CanBeNull_11; }
	inline void set_CanBeNull_11(bool value)
	{
		___CanBeNull_11 = value;
	}

	inline static int32_t get_offset_of_IsNullableOrEnum_12() { return static_cast<int32_t>(offsetof(RuntimeTypeInfoCache_1_t9CF6C57B0806C60C2CAAAED2D7F569ED23ECA790_StaticFields, ___IsNullableOrEnum_12)); }
	inline bool get_IsNullableOrEnum_12() const { return ___IsNullableOrEnum_12; }
	inline bool* get_address_of_IsNullableOrEnum_12() { return &___IsNullableOrEnum_12; }
	inline void set_IsNullableOrEnum_12(bool value)
	{
		___IsNullableOrEnum_12 = value;
	}

	inline static int32_t get_offset_of_IsPrimitiveOrString_13() { return static_cast<int32_t>(offsetof(RuntimeTypeInfoCache_1_t9CF6C57B0806C60C2CAAAED2D7F569ED23ECA790_StaticFields, ___IsPrimitiveOrString_13)); }
	inline bool get_IsPrimitiveOrString_13() const { return ___IsPrimitiveOrString_13; }
	inline bool* get_address_of_IsPrimitiveOrString_13() { return &___IsPrimitiveOrString_13; }
	inline void set_IsPrimitiveOrString_13(bool value)
	{
		___IsPrimitiveOrString_13 = value;
	}

	inline static int32_t get_offset_of_IsAbstractOrInterface_14() { return static_cast<int32_t>(offsetof(RuntimeTypeInfoCache_1_t9CF6C57B0806C60C2CAAAED2D7F569ED23ECA790_StaticFields, ___IsAbstractOrInterface_14)); }
	inline bool get_IsAbstractOrInterface_14() const { return ___IsAbstractOrInterface_14; }
	inline bool* get_address_of_IsAbstractOrInterface_14() { return &___IsAbstractOrInterface_14; }
	inline void set_IsAbstractOrInterface_14(bool value)
	{
		___IsAbstractOrInterface_14 = value;
	}

	inline static int32_t get_offset_of_IsLazyLoadReference_15() { return static_cast<int32_t>(offsetof(RuntimeTypeInfoCache_1_t9CF6C57B0806C60C2CAAAED2D7F569ED23ECA790_StaticFields, ___IsLazyLoadReference_15)); }
	inline bool get_IsLazyLoadReference_15() const { return ___IsLazyLoadReference_15; }
	inline bool* get_address_of_IsLazyLoadReference_15() { return &___IsLazyLoadReference_15; }
	inline void set_IsLazyLoadReference_15(bool value)
	{
		___IsLazyLoadReference_15 = value;
	}
};


// Unity.Properties.Internal.RuntimeTypeInfoCache`1<UnityEngine.Color>
struct RuntimeTypeInfoCache_1_tB4CD3C0AC4911B1D3F848D9F9BECA9CF8946BB09 
{
public:
	union
	{
		struct
		{
		};
		uint8_t RuntimeTypeInfoCache_1_t30A0A6BC09AD64184AFB882CF46291A815E10EDD__padding[1];
	};

public:
};

struct RuntimeTypeInfoCache_1_tB4CD3C0AC4911B1D3F848D9F9BECA9CF8946BB09_StaticFields
{
public:
	// System.Boolean Unity.Properties.Internal.RuntimeTypeInfoCache`1::IsValueType
	bool ___IsValueType_0;
	// System.Boolean Unity.Properties.Internal.RuntimeTypeInfoCache`1::IsPrimitive
	bool ___IsPrimitive_1;
	// System.Boolean Unity.Properties.Internal.RuntimeTypeInfoCache`1::IsInterface
	bool ___IsInterface_2;
	// System.Boolean Unity.Properties.Internal.RuntimeTypeInfoCache`1::IsAbstract
	bool ___IsAbstract_3;
	// System.Boolean Unity.Properties.Internal.RuntimeTypeInfoCache`1::IsArray
	bool ___IsArray_4;
	// System.Boolean Unity.Properties.Internal.RuntimeTypeInfoCache`1::IsEnum
	bool ___IsEnum_5;
	// System.Boolean Unity.Properties.Internal.RuntimeTypeInfoCache`1::IsEnumFlags
	bool ___IsEnumFlags_6;
	// System.Boolean Unity.Properties.Internal.RuntimeTypeInfoCache`1::IsNullable
	bool ___IsNullable_7;
	// System.Boolean Unity.Properties.Internal.RuntimeTypeInfoCache`1::IsObjectType
	bool ___IsObjectType_8;
	// System.Boolean Unity.Properties.Internal.RuntimeTypeInfoCache`1::IsStringType
	bool ___IsStringType_9;
	// System.Boolean Unity.Properties.Internal.RuntimeTypeInfoCache`1::IsContainerType
	bool ___IsContainerType_10;
	// System.Boolean Unity.Properties.Internal.RuntimeTypeInfoCache`1::CanBeNull
	bool ___CanBeNull_11;
	// System.Boolean Unity.Properties.Internal.RuntimeTypeInfoCache`1::IsNullableOrEnum
	bool ___IsNullableOrEnum_12;
	// System.Boolean Unity.Properties.Internal.RuntimeTypeInfoCache`1::IsPrimitiveOrString
	bool ___IsPrimitiveOrString_13;
	// System.Boolean Unity.Properties.Internal.RuntimeTypeInfoCache`1::IsAbstractOrInterface
	bool ___IsAbstractOrInterface_14;
	// System.Boolean Unity.Properties.Internal.RuntimeTypeInfoCache`1::IsLazyLoadReference
	bool ___IsLazyLoadReference_15;

public:
	inline static int32_t get_offset_of_IsValueType_0() { return static_cast<int32_t>(offsetof(RuntimeTypeInfoCache_1_tB4CD3C0AC4911B1D3F848D9F9BECA9CF8946BB09_StaticFields, ___IsValueType_0)); }
	inline bool get_IsValueType_0() const { return ___IsValueType_0; }
	inline bool* get_address_of_IsValueType_0() { return &___IsValueType_0; }
	inline void set_IsValueType_0(bool value)
	{
		___IsValueType_0 = value;
	}

	inline static int32_t get_offset_of_IsPrimitive_1() { return static_cast<int32_t>(offsetof(RuntimeTypeInfoCache_1_tB4CD3C0AC4911B1D3F848D9F9BECA9CF8946BB09_StaticFields, ___IsPrimitive_1)); }
	inline bool get_IsPrimitive_1() const { return ___IsPrimitive_1; }
	inline bool* get_address_of_IsPrimitive_1() { return &___IsPrimitive_1; }
	inline void set_IsPrimitive_1(bool value)
	{
		___IsPrimitive_1 = value;
	}

	inline static int32_t get_offset_of_IsInterface_2() { return static_cast<int32_t>(offsetof(RuntimeTypeInfoCache_1_tB4CD3C0AC4911B1D3F848D9F9BECA9CF8946BB09_StaticFields, ___IsInterface_2)); }
	inline bool get_IsInterface_2() const { return ___IsInterface_2; }
	inline bool* get_address_of_IsInterface_2() { return &___IsInterface_2; }
	inline void set_IsInterface_2(bool value)
	{
		___IsInterface_2 = value;
	}

	inline static int32_t get_offset_of_IsAbstract_3() { return static_cast<int32_t>(offsetof(RuntimeTypeInfoCache_1_tB4CD3C0AC4911B1D3F848D9F9BECA9CF8946BB09_StaticFields, ___IsAbstract_3)); }
	inline bool get_IsAbstract_3() const { return ___IsAbstract_3; }
	inline bool* get_address_of_IsAbstract_3() { return &___IsAbstract_3; }
	inline void set_IsAbstract_3(bool value)
	{
		___IsAbstract_3 = value;
	}

	inline static int32_t get_offset_of_IsArray_4() { return static_cast<int32_t>(offsetof(RuntimeTypeInfoCache_1_tB4CD3C0AC4911B1D3F848D9F9BECA9CF8946BB09_StaticFields, ___IsArray_4)); }
	inline bool get_IsArray_4() const { return ___IsArray_4; }
	inline bool* get_address_of_IsArray_4() { return &___IsArray_4; }
	inline void set_IsArray_4(bool value)
	{
		___IsArray_4 = value;
	}

	inline static int32_t get_offset_of_IsEnum_5() { return static_cast<int32_t>(offsetof(RuntimeTypeInfoCache_1_tB4CD3C0AC4911B1D3F848D9F9BECA9CF8946BB09_StaticFields, ___IsEnum_5)); }
	inline bool get_IsEnum_5() const { return ___IsEnum_5; }
	inline bool* get_address_of_IsEnum_5() { return &___IsEnum_5; }
	inline void set_IsEnum_5(bool value)
	{
		___IsEnum_5 = value;
	}

	inline static int32_t get_offset_of_IsEnumFlags_6() { return static_cast<int32_t>(offsetof(RuntimeTypeInfoCache_1_tB4CD3C0AC4911B1D3F848D9F9BECA9CF8946BB09_StaticFields, ___IsEnumFlags_6)); }
	inline bool get_IsEnumFlags_6() const { return ___IsEnumFlags_6; }
	inline bool* get_address_of_IsEnumFlags_6() { return &___IsEnumFlags_6; }
	inline void set_IsEnumFlags_6(bool value)
	{
		___IsEnumFlags_6 = value;
	}

	inline static int32_t get_offset_of_IsNullable_7() { return static_cast<int32_t>(offsetof(RuntimeTypeInfoCache_1_tB4CD3C0AC4911B1D3F848D9F9BECA9CF8946BB09_StaticFields, ___IsNullable_7)); }
	inline bool get_IsNullable_7() const { return ___IsNullable_7; }
	inline bool* get_address_of_IsNullable_7() { return &___IsNullable_7; }
	inline void set_IsNullable_7(bool value)
	{
		___IsNullable_7 = value;
	}

	inline static int32_t get_offset_of_IsObjectType_8() { return static_cast<int32_t>(offsetof(RuntimeTypeInfoCache_1_tB4CD3C0AC4911B1D3F848D9F9BECA9CF8946BB09_StaticFields, ___IsObjectType_8)); }
	inline bool get_IsObjectType_8() const { return ___IsObjectType_8; }
	inline bool* get_address_of_IsObjectType_8() { return &___IsObjectType_8; }
	inline void set_IsObjectType_8(bool value)
	{
		___IsObjectType_8 = value;
	}

	inline static int32_t get_offset_of_IsStringType_9() { return static_cast<int32_t>(offsetof(RuntimeTypeInfoCache_1_tB4CD3C0AC4911B1D3F848D9F9BECA9CF8946BB09_StaticFields, ___IsStringType_9)); }
	inline bool get_IsStringType_9() const { return ___IsStringType_9; }
	inline bool* get_address_of_IsStringType_9() { return &___IsStringType_9; }
	inline void set_IsStringType_9(bool value)
	{
		___IsStringType_9 = value;
	}

	inline static int32_t get_offset_of_IsContainerType_10() { return static_cast<int32_t>(offsetof(RuntimeTypeInfoCache_1_tB4CD3C0AC4911B1D3F848D9F9BECA9CF8946BB09_StaticFields, ___IsContainerType_10)); }
	inline bool get_IsContainerType_10() const { return ___IsContainerType_10; }
	inline bool* get_address_of_IsContainerType_10() { return &___IsContainerType_10; }
	inline void set_IsContainerType_10(bool value)
	{
		___IsContainerType_10 = value;
	}

	inline static int32_t get_offset_of_CanBeNull_11() { return static_cast<int32_t>(offsetof(RuntimeTypeInfoCache_1_tB4CD3C0AC4911B1D3F848D9F9BECA9CF8946BB09_StaticFields, ___CanBeNull_11)); }
	inline bool get_CanBeNull_11() const { return ___CanBeNull_11; }
	inline bool* get_address_of_CanBeNull_11() { return &___CanBeNull_11; }
	inline void set_CanBeNull_11(bool value)
	{
		___CanBeNull_11 = value;
	}

	inline static int32_t get_offset_of_IsNullableOrEnum_12() { return static_cast<int32_t>(offsetof(RuntimeTypeInfoCache_1_tB4CD3C0AC4911B1D3F848D9F9BECA9CF8946BB09_StaticFields, ___IsNullableOrEnum_12)); }
	inline bool get_IsNullableOrEnum_12() const { return ___IsNullableOrEnum_12; }
	inline bool* get_address_of_IsNullableOrEnum_12() { return &___IsNullableOrEnum_12; }
	inline void set_IsNullableOrEnum_12(bool value)
	{
		___IsNullableOrEnum_12 = value;
	}

	inline static int32_t get_offset_of_IsPrimitiveOrString_13() { return static_cast<int32_t>(offsetof(RuntimeTypeInfoCache_1_tB4CD3C0AC4911B1D3F848D9F9BECA9CF8946BB09_StaticFields, ___IsPrimitiveOrString_13)); }
	inline bool get_IsPrimitiveOrString_13() const { return ___IsPrimitiveOrString_13; }
	inline bool* get_address_of_IsPrimitiveOrString_13() { return &___IsPrimitiveOrString_13; }
	inline void set_IsPrimitiveOrString_13(bool value)
	{
		___IsPrimitiveOrString_13 = value;
	}

	inline static int32_t get_offset_of_IsAbstractOrInterface_14() { return static_cast<int32_t>(offsetof(RuntimeTypeInfoCache_1_tB4CD3C0AC4911B1D3F848D9F9BECA9CF8946BB09_StaticFields, ___IsAbstractOrInterface_14)); }
	inline bool get_IsAbstractOrInterface_14() const { return ___IsAbstractOrInterface_14; }
	inline bool* get_address_of_IsAbstractOrInterface_14() { return &___IsAbstractOrInterface_14; }
	inline void set_IsAbstractOrInterface_14(bool value)
	{
		___IsAbstractOrInterface_14 = value;
	}

	inline static int32_t get_offset_of_IsLazyLoadReference_15() { return static_cast<int32_t>(offsetof(RuntimeTypeInfoCache_1_tB4CD3C0AC4911B1D3F848D9F9BECA9CF8946BB09_StaticFields, ___IsLazyLoadReference_15)); }
	inline bool get_IsLazyLoadReference_15() const { return ___IsLazyLoadReference_15; }
	inline bool* get_address_of_IsLazyLoadReference_15() { return &___IsLazyLoadReference_15; }
	inline void set_IsLazyLoadReference_15(bool value)
	{
		___IsLazyLoadReference_15 = value;
	}
};


// Unity.Properties.Internal.RuntimeTypeInfoCache`1<System.Int16>
struct RuntimeTypeInfoCache_1_tF893180F39DD7ACEB5EE31EF4E03E47BDD482E15 
{
public:
	union
	{
		struct
		{
		};
		uint8_t RuntimeTypeInfoCache_1_t30A0A6BC09AD64184AFB882CF46291A815E10EDD__padding[1];
	};

public:
};

struct RuntimeTypeInfoCache_1_tF893180F39DD7ACEB5EE31EF4E03E47BDD482E15_StaticFields
{
public:
	// System.Boolean Unity.Properties.Internal.RuntimeTypeInfoCache`1::IsValueType
	bool ___IsValueType_0;
	// System.Boolean Unity.Properties.Internal.RuntimeTypeInfoCache`1::IsPrimitive
	bool ___IsPrimitive_1;
	// System.Boolean Unity.Properties.Internal.RuntimeTypeInfoCache`1::IsInterface
	bool ___IsInterface_2;
	// System.Boolean Unity.Properties.Internal.RuntimeTypeInfoCache`1::IsAbstract
	bool ___IsAbstract_3;
	// System.Boolean Unity.Properties.Internal.RuntimeTypeInfoCache`1::IsArray
	bool ___IsArray_4;
	// System.Boolean Unity.Properties.Internal.RuntimeTypeInfoCache`1::IsEnum
	bool ___IsEnum_5;
	// System.Boolean Unity.Properties.Internal.RuntimeTypeInfoCache`1::IsEnumFlags
	bool ___IsEnumFlags_6;
	// System.Boolean Unity.Properties.Internal.RuntimeTypeInfoCache`1::IsNullable
	bool ___IsNullable_7;
	// System.Boolean Unity.Properties.Internal.RuntimeTypeInfoCache`1::IsObjectType
	bool ___IsObjectType_8;
	// System.Boolean Unity.Properties.Internal.RuntimeTypeInfoCache`1::IsStringType
	bool ___IsStringType_9;
	// System.Boolean Unity.Properties.Internal.RuntimeTypeInfoCache`1::IsContainerType
	bool ___IsContainerType_10;
	// System.Boolean Unity.Properties.Internal.RuntimeTypeInfoCache`1::CanBeNull
	bool ___CanBeNull_11;
	// System.Boolean Unity.Properties.Internal.RuntimeTypeInfoCache`1::IsNullableOrEnum
	bool ___IsNullableOrEnum_12;
	// System.Boolean Unity.Properties.Internal.RuntimeTypeInfoCache`1::IsPrimitiveOrString
	bool ___IsPrimitiveOrString_13;
	// System.Boolean Unity.Properties.Internal.RuntimeTypeInfoCache`1::IsAbstractOrInterface
	bool ___IsAbstractOrInterface_14;
	// System.Boolean Unity.Properties.Internal.RuntimeTypeInfoCache`1::IsLazyLoadReference
	bool ___IsLazyLoadReference_15;

public:
	inline static int32_t get_offset_of_IsValueType_0() { return static_cast<int32_t>(offsetof(RuntimeTypeInfoCache_1_tF893180F39DD7ACEB5EE31EF4E03E47BDD482E15_StaticFields, ___IsValueType_0)); }
	inline bool get_IsValueType_0() const { return ___IsValueType_0; }
	inline bool* get_address_of_IsValueType_0() { return &___IsValueType_0; }
	inline void set_IsValueType_0(bool value)
	{
		___IsValueType_0 = value;
	}

	inline static int32_t get_offset_of_IsPrimitive_1() { return static_cast<int32_t>(offsetof(RuntimeTypeInfoCache_1_tF893180F39DD7ACEB5EE31EF4E03E47BDD482E15_StaticFields, ___IsPrimitive_1)); }
	inline bool get_IsPrimitive_1() const { return ___IsPrimitive_1; }
	inline bool* get_address_of_IsPrimitive_1() { return &___IsPrimitive_1; }
	inline void set_IsPrimitive_1(bool value)
	{
		___IsPrimitive_1 = value;
	}

	inline static int32_t get_offset_of_IsInterface_2() { return static_cast<int32_t>(offsetof(RuntimeTypeInfoCache_1_tF893180F39DD7ACEB5EE31EF4E03E47BDD482E15_StaticFields, ___IsInterface_2)); }
	inline bool get_IsInterface_2() const { return ___IsInterface_2; }
	inline bool* get_address_of_IsInterface_2() { return &___IsInterface_2; }
	inline void set_IsInterface_2(bool value)
	{
		___IsInterface_2 = value;
	}

	inline static int32_t get_offset_of_IsAbstract_3() { return static_cast<int32_t>(offsetof(RuntimeTypeInfoCache_1_tF893180F39DD7ACEB5EE31EF4E03E47BDD482E15_StaticFields, ___IsAbstract_3)); }
	inline bool get_IsAbstract_3() const { return ___IsAbstract_3; }
	inline bool* get_address_of_IsAbstract_3() { return &___IsAbstract_3; }
	inline void set_IsAbstract_3(bool value)
	{
		___IsAbstract_3 = value;
	}

	inline static int32_t get_offset_of_IsArray_4() { return static_cast<int32_t>(offsetof(RuntimeTypeInfoCache_1_tF893180F39DD7ACEB5EE31EF4E03E47BDD482E15_StaticFields, ___IsArray_4)); }
	inline bool get_IsArray_4() const { return ___IsArray_4; }
	inline bool* get_address_of_IsArray_4() { return &___IsArray_4; }
	inline void set_IsArray_4(bool value)
	{
		___IsArray_4 = value;
	}

	inline static int32_t get_offset_of_IsEnum_5() { return static_cast<int32_t>(offsetof(RuntimeTypeInfoCache_1_tF893180F39DD7ACEB5EE31EF4E03E47BDD482E15_StaticFields, ___IsEnum_5)); }
	inline bool get_IsEnum_5() const { return ___IsEnum_5; }
	inline bool* get_address_of_IsEnum_5() { return &___IsEnum_5; }
	inline void set_IsEnum_5(bool value)
	{
		___IsEnum_5 = value;
	}

	inline static int32_t get_offset_of_IsEnumFlags_6() { return static_cast<int32_t>(offsetof(RuntimeTypeInfoCache_1_tF893180F39DD7ACEB5EE31EF4E03E47BDD482E15_StaticFields, ___IsEnumFlags_6)); }
	inline bool get_IsEnumFlags_6() const { return ___IsEnumFlags_6; }
	inline bool* get_address_of_IsEnumFlags_6() { return &___IsEnumFlags_6; }
	inline void set_IsEnumFlags_6(bool value)
	{
		___IsEnumFlags_6 = value;
	}

	inline static int32_t get_offset_of_IsNullable_7() { return static_cast<int32_t>(offsetof(RuntimeTypeInfoCache_1_tF893180F39DD7ACEB5EE31EF4E03E47BDD482E15_StaticFields, ___IsNullable_7)); }
	inline bool get_IsNullable_7() const { return ___IsNullable_7; }
	inline bool* get_address_of_IsNullable_7() { return &___IsNullable_7; }
	inline void set_IsNullable_7(bool value)
	{
		___IsNullable_7 = value;
	}

	inline static int32_t get_offset_of_IsObjectType_8() { return static_cast<int32_t>(offsetof(RuntimeTypeInfoCache_1_tF893180F39DD7ACEB5EE31EF4E03E47BDD482E15_StaticFields, ___IsObjectType_8)); }
	inline bool get_IsObjectType_8() const { return ___IsObjectType_8; }
	inline bool* get_address_of_IsObjectType_8() { return &___IsObjectType_8; }
	inline void set_IsObjectType_8(bool value)
	{
		___IsObjectType_8 = value;
	}

	inline static int32_t get_offset_of_IsStringType_9() { return static_cast<int32_t>(offsetof(RuntimeTypeInfoCache_1_tF893180F39DD7ACEB5EE31EF4E03E47BDD482E15_StaticFields, ___IsStringType_9)); }
	inline bool get_IsStringType_9() const { return ___IsStringType_9; }
	inline bool* get_address_of_IsStringType_9() { return &___IsStringType_9; }
	inline void set_IsStringType_9(bool value)
	{
		___IsStringType_9 = value;
	}

	inline static int32_t get_offset_of_IsContainerType_10() { return static_cast<int32_t>(offsetof(RuntimeTypeInfoCache_1_tF893180F39DD7ACEB5EE31EF4E03E47BDD482E15_StaticFields, ___IsContainerType_10)); }
	inline bool get_IsContainerType_10() const { return ___IsContainerType_10; }
	inline bool* get_address_of_IsContainerType_10() { return &___IsContainerType_10; }
	inline void set_IsContainerType_10(bool value)
	{
		___IsContainerType_10 = value;
	}

	inline static int32_t get_offset_of_CanBeNull_11() { return static_cast<int32_t>(offsetof(RuntimeTypeInfoCache_1_tF893180F39DD7ACEB5EE31EF4E03E47BDD482E15_StaticFields, ___CanBeNull_11)); }
	inline bool get_CanBeNull_11() const { return ___CanBeNull_11; }
	inline bool* get_address_of_CanBeNull_11() { return &___CanBeNull_11; }
	inline void set_CanBeNull_11(bool value)
	{
		___CanBeNull_11 = value;
	}

	inline static int32_t get_offset_of_IsNullableOrEnum_12() { return static_cast<int32_t>(offsetof(RuntimeTypeInfoCache_1_tF893180F39DD7ACEB5EE31EF4E03E47BDD482E15_StaticFields, ___IsNullableOrEnum_12)); }
	inline bool get_IsNullableOrEnum_12() const { return ___IsNullableOrEnum_12; }
	inline bool* get_address_of_IsNullableOrEnum_12() { return &___IsNullableOrEnum_12; }
	inline void set_IsNullableOrEnum_12(bool value)
	{
		___IsNullableOrEnum_12 = value;
	}

	inline static int32_t get_offset_of_IsPrimitiveOrString_13() { return static_cast<int32_t>(offsetof(RuntimeTypeInfoCache_1_tF893180F39DD7ACEB5EE31EF4E03E47BDD482E15_StaticFields, ___IsPrimitiveOrString_13)); }
	inline bool get_IsPrimitiveOrString_13() const { return ___IsPrimitiveOrString_13; }
	inline bool* get_address_of_IsPrimitiveOrString_13() { return &___IsPrimitiveOrString_13; }
	inline void set_IsPrimitiveOrString_13(bool value)
	{
		___IsPrimitiveOrString_13 = value;
	}

	inline static int32_t get_offset_of_IsAbstractOrInterface_14() { return static_cast<int32_t>(offsetof(RuntimeTypeInfoCache_1_tF893180F39DD7ACEB5EE31EF4E03E47BDD482E15_StaticFields, ___IsAbstractOrInterface_14)); }
	inline bool get_IsAbstractOrInterface_14() const { return ___IsAbstractOrInterface_14; }
	inline bool* get_address_of_IsAbstractOrInterface_14() { return &___IsAbstractOrInterface_14; }
	inline void set_IsAbstractOrInterface_14(bool value)
	{
		___IsAbstractOrInterface_14 = value;
	}

	inline static int32_t get_offset_of_IsLazyLoadReference_15() { return static_cast<int32_t>(offsetof(RuntimeTypeInfoCache_1_tF893180F39DD7ACEB5EE31EF4E03E47BDD482E15_StaticFields, ___IsLazyLoadReference_15)); }
	inline bool get_IsLazyLoadReference_15() const { return ___IsLazyLoadReference_15; }
	inline bool* get_address_of_IsLazyLoadReference_15() { return &___IsLazyLoadReference_15; }
	inline void set_IsLazyLoadReference_15(bool value)
	{
		___IsLazyLoadReference_15 = value;
	}
};


// Unity.Properties.Internal.RuntimeTypeInfoCache`1<System.Int32>
struct RuntimeTypeInfoCache_1_tA5A6314A6C55EC654AB02F2D44D3AD77969D969E 
{
public:
	union
	{
		struct
		{
		};
		uint8_t RuntimeTypeInfoCache_1_t30A0A6BC09AD64184AFB882CF46291A815E10EDD__padding[1];
	};

public:
};

struct RuntimeTypeInfoCache_1_tA5A6314A6C55EC654AB02F2D44D3AD77969D969E_StaticFields
{
public:
	// System.Boolean Unity.Properties.Internal.RuntimeTypeInfoCache`1::IsValueType
	bool ___IsValueType_0;
	// System.Boolean Unity.Properties.Internal.RuntimeTypeInfoCache`1::IsPrimitive
	bool ___IsPrimitive_1;
	// System.Boolean Unity.Properties.Internal.RuntimeTypeInfoCache`1::IsInterface
	bool ___IsInterface_2;
	// System.Boolean Unity.Properties.Internal.RuntimeTypeInfoCache`1::IsAbstract
	bool ___IsAbstract_3;
	// System.Boolean Unity.Properties.Internal.RuntimeTypeInfoCache`1::IsArray
	bool ___IsArray_4;
	// System.Boolean Unity.Properties.Internal.RuntimeTypeInfoCache`1::IsEnum
	bool ___IsEnum_5;
	// System.Boolean Unity.Properties.Internal.RuntimeTypeInfoCache`1::IsEnumFlags
	bool ___IsEnumFlags_6;
	// System.Boolean Unity.Properties.Internal.RuntimeTypeInfoCache`1::IsNullable
	bool ___IsNullable_7;
	// System.Boolean Unity.Properties.Internal.RuntimeTypeInfoCache`1::IsObjectType
	bool ___IsObjectType_8;
	// System.Boolean Unity.Properties.Internal.RuntimeTypeInfoCache`1::IsStringType
	bool ___IsStringType_9;
	// System.Boolean Unity.Properties.Internal.RuntimeTypeInfoCache`1::IsContainerType
	bool ___IsContainerType_10;
	// System.Boolean Unity.Properties.Internal.RuntimeTypeInfoCache`1::CanBeNull
	bool ___CanBeNull_11;
	// System.Boolean Unity.Properties.Internal.RuntimeTypeInfoCache`1::IsNullableOrEnum
	bool ___IsNullableOrEnum_12;
	// System.Boolean Unity.Properties.Internal.RuntimeTypeInfoCache`1::IsPrimitiveOrString
	bool ___IsPrimitiveOrString_13;
	// System.Boolean Unity.Properties.Internal.RuntimeTypeInfoCache`1::IsAbstractOrInterface
	bool ___IsAbstractOrInterface_14;
	// System.Boolean Unity.Properties.Internal.RuntimeTypeInfoCache`1::IsLazyLoadReference
	bool ___IsLazyLoadReference_15;

public:
	inline static int32_t get_offset_of_IsValueType_0() { return static_cast<int32_t>(offsetof(RuntimeTypeInfoCache_1_tA5A6314A6C55EC654AB02F2D44D3AD77969D969E_StaticFields, ___IsValueType_0)); }
	inline bool get_IsValueType_0() const { return ___IsValueType_0; }
	inline bool* get_address_of_IsValueType_0() { return &___IsValueType_0; }
	inline void set_IsValueType_0(bool value)
	{
		___IsValueType_0 = value;
	}

	inline static int32_t get_offset_of_IsPrimitive_1() { return static_cast<int32_t>(offsetof(RuntimeTypeInfoCache_1_tA5A6314A6C55EC654AB02F2D44D3AD77969D969E_StaticFields, ___IsPrimitive_1)); }
	inline bool get_IsPrimitive_1() const { return ___IsPrimitive_1; }
	inline bool* get_address_of_IsPrimitive_1() { return &___IsPrimitive_1; }
	inline void set_IsPrimitive_1(bool value)
	{
		___IsPrimitive_1 = value;
	}

	inline static int32_t get_offset_of_IsInterface_2() { return static_cast<int32_t>(offsetof(RuntimeTypeInfoCache_1_tA5A6314A6C55EC654AB02F2D44D3AD77969D969E_StaticFields, ___IsInterface_2)); }
	inline bool get_IsInterface_2() const { return ___IsInterface_2; }
	inline bool* get_address_of_IsInterface_2() { return &___IsInterface_2; }
	inline void set_IsInterface_2(bool value)
	{
		___IsInterface_2 = value;
	}

	inline static int32_t get_offset_of_IsAbstract_3() { return static_cast<int32_t>(offsetof(RuntimeTypeInfoCache_1_tA5A6314A6C55EC654AB02F2D44D3AD77969D969E_StaticFields, ___IsAbstract_3)); }
	inline bool get_IsAbstract_3() const { return ___IsAbstract_3; }
	inline bool* get_address_of_IsAbstract_3() { return &___IsAbstract_3; }
	inline void set_IsAbstract_3(bool value)
	{
		___IsAbstract_3 = value;
	}

	inline static int32_t get_offset_of_IsArray_4() { return static_cast<int32_t>(offsetof(RuntimeTypeInfoCache_1_tA5A6314A6C55EC654AB02F2D44D3AD77969D969E_StaticFields, ___IsArray_4)); }
	inline bool get_IsArray_4() const { return ___IsArray_4; }
	inline bool* get_address_of_IsArray_4() { return &___IsArray_4; }
	inline void set_IsArray_4(bool value)
	{
		___IsArray_4 = value;
	}

	inline static int32_t get_offset_of_IsEnum_5() { return static_cast<int32_t>(offsetof(RuntimeTypeInfoCache_1_tA5A6314A6C55EC654AB02F2D44D3AD77969D969E_StaticFields, ___IsEnum_5)); }
	inline bool get_IsEnum_5() const { return ___IsEnum_5; }
	inline bool* get_address_of_IsEnum_5() { return &___IsEnum_5; }
	inline void set_IsEnum_5(bool value)
	{
		___IsEnum_5 = value;
	}

	inline static int32_t get_offset_of_IsEnumFlags_6() { return static_cast<int32_t>(offsetof(RuntimeTypeInfoCache_1_tA5A6314A6C55EC654AB02F2D44D3AD77969D969E_StaticFields, ___IsEnumFlags_6)); }
	inline bool get_IsEnumFlags_6() const { return ___IsEnumFlags_6; }
	inline bool* get_address_of_IsEnumFlags_6() { return &___IsEnumFlags_6; }
	inline void set_IsEnumFlags_6(bool value)
	{
		___IsEnumFlags_6 = value;
	}

	inline static int32_t get_offset_of_IsNullable_7() { return static_cast<int32_t>(offsetof(RuntimeTypeInfoCache_1_tA5A6314A6C55EC654AB02F2D44D3AD77969D969E_StaticFields, ___IsNullable_7)); }
	inline bool get_IsNullable_7() const { return ___IsNullable_7; }
	inline bool* get_address_of_IsNullable_7() { return &___IsNullable_7; }
	inline void set_IsNullable_7(bool value)
	{
		___IsNullable_7 = value;
	}

	inline static int32_t get_offset_of_IsObjectType_8() { return static_cast<int32_t>(offsetof(RuntimeTypeInfoCache_1_tA5A6314A6C55EC654AB02F2D44D3AD77969D969E_StaticFields, ___IsObjectType_8)); }
	inline bool get_IsObjectType_8() const { return ___IsObjectType_8; }
	inline bool* get_address_of_IsObjectType_8() { return &___IsObjectType_8; }
	inline void set_IsObjectType_8(bool value)
	{
		___IsObjectType_8 = value;
	}

	inline static int32_t get_offset_of_IsStringType_9() { return static_cast<int32_t>(offsetof(RuntimeTypeInfoCache_1_tA5A6314A6C55EC654AB02F2D44D3AD77969D969E_StaticFields, ___IsStringType_9)); }
	inline bool get_IsStringType_9() const { return ___IsStringType_9; }
	inline bool* get_address_of_IsStringType_9() { return &___IsStringType_9; }
	inline void set_IsStringType_9(bool value)
	{
		___IsStringType_9 = value;
	}

	inline static int32_t get_offset_of_IsContainerType_10() { return static_cast<int32_t>(offsetof(RuntimeTypeInfoCache_1_tA5A6314A6C55EC654AB02F2D44D3AD77969D969E_StaticFields, ___IsContainerType_10)); }
	inline bool get_IsContainerType_10() const { return ___IsContainerType_10; }
	inline bool* get_address_of_IsContainerType_10() { return &___IsContainerType_10; }
	inline void set_IsContainerType_10(bool value)
	{
		___IsContainerType_10 = value;
	}

	inline static int32_t get_offset_of_CanBeNull_11() { return static_cast<int32_t>(offsetof(RuntimeTypeInfoCache_1_tA5A6314A6C55EC654AB02F2D44D3AD77969D969E_StaticFields, ___CanBeNull_11)); }
	inline bool get_CanBeNull_11() const { return ___CanBeNull_11; }
	inline bool* get_address_of_CanBeNull_11() { return &___CanBeNull_11; }
	inline void set_CanBeNull_11(bool value)
	{
		___CanBeNull_11 = value;
	}

	inline static int32_t get_offset_of_IsNullableOrEnum_12() { return static_cast<int32_t>(offsetof(RuntimeTypeInfoCache_1_tA5A6314A6C55EC654AB02F2D44D3AD77969D969E_StaticFields, ___IsNullableOrEnum_12)); }
	inline bool get_IsNullableOrEnum_12() const { return ___IsNullableOrEnum_12; }
	inline bool* get_address_of_IsNullableOrEnum_12() { return &___IsNullableOrEnum_12; }
	inline void set_IsNullableOrEnum_12(bool value)
	{
		___IsNullableOrEnum_12 = value;
	}

	inline static int32_t get_offset_of_IsPrimitiveOrString_13() { return static_cast<int32_t>(offsetof(RuntimeTypeInfoCache_1_tA5A6314A6C55EC654AB02F2D44D3AD77969D969E_StaticFields, ___IsPrimitiveOrString_13)); }
	inline bool get_IsPrimitiveOrString_13() const { return ___IsPrimitiveOrString_13; }
	inline bool* get_address_of_IsPrimitiveOrString_13() { return &___IsPrimitiveOrString_13; }
	inline void set_IsPrimitiveOrString_13(bool value)
	{
		___IsPrimitiveOrString_13 = value;
	}

	inline static int32_t get_offset_of_IsAbstractOrInterface_14() { return static_cast<int32_t>(offsetof(RuntimeTypeInfoCache_1_tA5A6314A6C55EC654AB02F2D44D3AD77969D969E_StaticFields, ___IsAbstractOrInterface_14)); }
	inline bool get_IsAbstractOrInterface_14() const { return ___IsAbstractOrInterface_14; }
	inline bool* get_address_of_IsAbstractOrInterface_14() { return &___IsAbstractOrInterface_14; }
	inline void set_IsAbstractOrInterface_14(bool value)
	{
		___IsAbstractOrInterface_14 = value;
	}

	inline static int32_t get_offset_of_IsLazyLoadReference_15() { return static_cast<int32_t>(offsetof(RuntimeTypeInfoCache_1_tA5A6314A6C55EC654AB02F2D44D3AD77969D969E_StaticFields, ___IsLazyLoadReference_15)); }
	inline bool get_IsLazyLoadReference_15() const { return ___IsLazyLoadReference_15; }
	inline bool* get_address_of_IsLazyLoadReference_15() { return &___IsLazyLoadReference_15; }
	inline void set_IsLazyLoadReference_15(bool value)
	{
		___IsLazyLoadReference_15 = value;
	}
};


// Unity.Properties.Internal.RuntimeTypeInfoCache`1<System.Int32Enum>
struct RuntimeTypeInfoCache_1_t0D10B34129E83727F9FA5BC962BBA8D8201E7A1C 
{
public:
	union
	{
		struct
		{
		};
		uint8_t RuntimeTypeInfoCache_1_t30A0A6BC09AD64184AFB882CF46291A815E10EDD__padding[1];
	};

public:
};

struct RuntimeTypeInfoCache_1_t0D10B34129E83727F9FA5BC962BBA8D8201E7A1C_StaticFields
{
public:
	// System.Boolean Unity.Properties.Internal.RuntimeTypeInfoCache`1::IsValueType
	bool ___IsValueType_0;
	// System.Boolean Unity.Properties.Internal.RuntimeTypeInfoCache`1::IsPrimitive
	bool ___IsPrimitive_1;
	// System.Boolean Unity.Properties.Internal.RuntimeTypeInfoCache`1::IsInterface
	bool ___IsInterface_2;
	// System.Boolean Unity.Properties.Internal.RuntimeTypeInfoCache`1::IsAbstract
	bool ___IsAbstract_3;
	// System.Boolean Unity.Properties.Internal.RuntimeTypeInfoCache`1::IsArray
	bool ___IsArray_4;
	// System.Boolean Unity.Properties.Internal.RuntimeTypeInfoCache`1::IsEnum
	bool ___IsEnum_5;
	// System.Boolean Unity.Properties.Internal.RuntimeTypeInfoCache`1::IsEnumFlags
	bool ___IsEnumFlags_6;
	// System.Boolean Unity.Properties.Internal.RuntimeTypeInfoCache`1::IsNullable
	bool ___IsNullable_7;
	// System.Boolean Unity.Properties.Internal.RuntimeTypeInfoCache`1::IsObjectType
	bool ___IsObjectType_8;
	// System.Boolean Unity.Properties.Internal.RuntimeTypeInfoCache`1::IsStringType
	bool ___IsStringType_9;
	// System.Boolean Unity.Properties.Internal.RuntimeTypeInfoCache`1::IsContainerType
	bool ___IsContainerType_10;
	// System.Boolean Unity.Properties.Internal.RuntimeTypeInfoCache`1::CanBeNull
	bool ___CanBeNull_11;
	// System.Boolean Unity.Properties.Internal.RuntimeTypeInfoCache`1::IsNullableOrEnum
	bool ___IsNullableOrEnum_12;
	// System.Boolean Unity.Properties.Internal.RuntimeTypeInfoCache`1::IsPrimitiveOrString
	bool ___IsPrimitiveOrString_13;
	// System.Boolean Unity.Properties.Internal.RuntimeTypeInfoCache`1::IsAbstractOrInterface
	bool ___IsAbstractOrInterface_14;
	// System.Boolean Unity.Properties.Internal.RuntimeTypeInfoCache`1::IsLazyLoadReference
	bool ___IsLazyLoadReference_15;

public:
	inline static int32_t get_offset_of_IsValueType_0() { return static_cast<int32_t>(offsetof(RuntimeTypeInfoCache_1_t0D10B34129E83727F9FA5BC962BBA8D8201E7A1C_StaticFields, ___IsValueType_0)); }
	inline bool get_IsValueType_0() const { return ___IsValueType_0; }
	inline bool* get_address_of_IsValueType_0() { return &___IsValueType_0; }
	inline void set_IsValueType_0(bool value)
	{
		___IsValueType_0 = value;
	}

	inline static int32_t get_offset_of_IsPrimitive_1() { return static_cast<int32_t>(offsetof(RuntimeTypeInfoCache_1_t0D10B34129E83727F9FA5BC962BBA8D8201E7A1C_StaticFields, ___IsPrimitive_1)); }
	inline bool get_IsPrimitive_1() const { return ___IsPrimitive_1; }
	inline bool* get_address_of_IsPrimitive_1() { return &___IsPrimitive_1; }
	inline void set_IsPrimitive_1(bool value)
	{
		___IsPrimitive_1 = value;
	}

	inline static int32_t get_offset_of_IsInterface_2() { return static_cast<int32_t>(offsetof(RuntimeTypeInfoCache_1_t0D10B34129E83727F9FA5BC962BBA8D8201E7A1C_StaticFields, ___IsInterface_2)); }
	inline bool get_IsInterface_2() const { return ___IsInterface_2; }
	inline bool* get_address_of_IsInterface_2() { return &___IsInterface_2; }
	inline void set_IsInterface_2(bool value)
	{
		___IsInterface_2 = value;
	}

	inline static int32_t get_offset_of_IsAbstract_3() { return static_cast<int32_t>(offsetof(RuntimeTypeInfoCache_1_t0D10B34129E83727F9FA5BC962BBA8D8201E7A1C_StaticFields, ___IsAbstract_3)); }
	inline bool get_IsAbstract_3() const { return ___IsAbstract_3; }
	inline bool* get_address_of_IsAbstract_3() { return &___IsAbstract_3; }
	inline void set_IsAbstract_3(bool value)
	{
		___IsAbstract_3 = value;
	}

	inline static int32_t get_offset_of_IsArray_4() { return static_cast<int32_t>(offsetof(RuntimeTypeInfoCache_1_t0D10B34129E83727F9FA5BC962BBA8D8201E7A1C_StaticFields, ___IsArray_4)); }
	inline bool get_IsArray_4() const { return ___IsArray_4; }
	inline bool* get_address_of_IsArray_4() { return &___IsArray_4; }
	inline void set_IsArray_4(bool value)
	{
		___IsArray_4 = value;
	}

	inline static int32_t get_offset_of_IsEnum_5() { return static_cast<int32_t>(offsetof(RuntimeTypeInfoCache_1_t0D10B34129E83727F9FA5BC962BBA8D8201E7A1C_StaticFields, ___IsEnum_5)); }
	inline bool get_IsEnum_5() const { return ___IsEnum_5; }
	inline bool* get_address_of_IsEnum_5() { return &___IsEnum_5; }
	inline void set_IsEnum_5(bool value)
	{
		___IsEnum_5 = value;
	}

	inline static int32_t get_offset_of_IsEnumFlags_6() { return static_cast<int32_t>(offsetof(RuntimeTypeInfoCache_1_t0D10B34129E83727F9FA5BC962BBA8D8201E7A1C_StaticFields, ___IsEnumFlags_6)); }
	inline bool get_IsEnumFlags_6() const { return ___IsEnumFlags_6; }
	inline bool* get_address_of_IsEnumFlags_6() { return &___IsEnumFlags_6; }
	inline void set_IsEnumFlags_6(bool value)
	{
		___IsEnumFlags_6 = value;
	}

	inline static int32_t get_offset_of_IsNullable_7() { return static_cast<int32_t>(offsetof(RuntimeTypeInfoCache_1_t0D10B34129E83727F9FA5BC962BBA8D8201E7A1C_StaticFields, ___IsNullable_7)); }
	inline bool get_IsNullable_7() const { return ___IsNullable_7; }
	inline bool* get_address_of_IsNullable_7() { return &___IsNullable_7; }
	inline void set_IsNullable_7(bool value)
	{
		___IsNullable_7 = value;
	}

	inline static int32_t get_offset_of_IsObjectType_8() { return static_cast<int32_t>(offsetof(RuntimeTypeInfoCache_1_t0D10B34129E83727F9FA5BC962BBA8D8201E7A1C_StaticFields, ___IsObjectType_8)); }
	inline bool get_IsObjectType_8() const { return ___IsObjectType_8; }
	inline bool* get_address_of_IsObjectType_8() { return &___IsObjectType_8; }
	inline void set_IsObjectType_8(bool value)
	{
		___IsObjectType_8 = value;
	}

	inline static int32_t get_offset_of_IsStringType_9() { return static_cast<int32_t>(offsetof(RuntimeTypeInfoCache_1_t0D10B34129E83727F9FA5BC962BBA8D8201E7A1C_StaticFields, ___IsStringType_9)); }
	inline bool get_IsStringType_9() const { return ___IsStringType_9; }
	inline bool* get_address_of_IsStringType_9() { return &___IsStringType_9; }
	inline void set_IsStringType_9(bool value)
	{
		___IsStringType_9 = value;
	}

	inline static int32_t get_offset_of_IsContainerType_10() { return static_cast<int32_t>(offsetof(RuntimeTypeInfoCache_1_t0D10B34129E83727F9FA5BC962BBA8D8201E7A1C_StaticFields, ___IsContainerType_10)); }
	inline bool get_IsContainerType_10() const { return ___IsContainerType_10; }
	inline bool* get_address_of_IsContainerType_10() { return &___IsContainerType_10; }
	inline void set_IsContainerType_10(bool value)
	{
		___IsContainerType_10 = value;
	}

	inline static int32_t get_offset_of_CanBeNull_11() { return static_cast<int32_t>(offsetof(RuntimeTypeInfoCache_1_t0D10B34129E83727F9FA5BC962BBA8D8201E7A1C_StaticFields, ___CanBeNull_11)); }
	inline bool get_CanBeNull_11() const { return ___CanBeNull_11; }
	inline bool* get_address_of_CanBeNull_11() { return &___CanBeNull_11; }
	inline void set_CanBeNull_11(bool value)
	{
		___CanBeNull_11 = value;
	}

	inline static int32_t get_offset_of_IsNullableOrEnum_12() { return static_cast<int32_t>(offsetof(RuntimeTypeInfoCache_1_t0D10B34129E83727F9FA5BC962BBA8D8201E7A1C_StaticFields, ___IsNullableOrEnum_12)); }
	inline bool get_IsNullableOrEnum_12() const { return ___IsNullableOrEnum_12; }
	inline bool* get_address_of_IsNullableOrEnum_12() { return &___IsNullableOrEnum_12; }
	inline void set_IsNullableOrEnum_12(bool value)
	{
		___IsNullableOrEnum_12 = value;
	}

	inline static int32_t get_offset_of_IsPrimitiveOrString_13() { return static_cast<int32_t>(offsetof(RuntimeTypeInfoCache_1_t0D10B34129E83727F9FA5BC962BBA8D8201E7A1C_StaticFields, ___IsPrimitiveOrString_13)); }
	inline bool get_IsPrimitiveOrString_13() const { return ___IsPrimitiveOrString_13; }
	inline bool* get_address_of_IsPrimitiveOrString_13() { return &___IsPrimitiveOrString_13; }
	inline void set_IsPrimitiveOrString_13(bool value)
	{
		___IsPrimitiveOrString_13 = value;
	}

	inline static int32_t get_offset_of_IsAbstractOrInterface_14() { return static_cast<int32_t>(offsetof(RuntimeTypeInfoCache_1_t0D10B34129E83727F9FA5BC962BBA8D8201E7A1C_StaticFields, ___IsAbstractOrInterface_14)); }
	inline bool get_IsAbstractOrInterface_14() const { return ___IsAbstractOrInterface_14; }
	inline bool* get_address_of_IsAbstractOrInterface_14() { return &___IsAbstractOrInterface_14; }
	inline void set_IsAbstractOrInterface_14(bool value)
	{
		___IsAbstractOrInterface_14 = value;
	}

	inline static int32_t get_offset_of_IsLazyLoadReference_15() { return static_cast<int32_t>(offsetof(RuntimeTypeInfoCache_1_t0D10B34129E83727F9FA5BC962BBA8D8201E7A1C_StaticFields, ___IsLazyLoadReference_15)); }
	inline bool get_IsLazyLoadReference_15() const { return ___IsLazyLoadReference_15; }
	inline bool* get_address_of_IsLazyLoadReference_15() { return &___IsLazyLoadReference_15; }
	inline void set_IsLazyLoadReference_15(bool value)
	{
		___IsLazyLoadReference_15 = value;
	}
};


// Unity.Properties.Internal.RuntimeTypeInfoCache`1<System.Int64>
struct RuntimeTypeInfoCache_1_t5CBAC9F2F1CBAD357A91B8C9DAE468017A978451 
{
public:
	union
	{
		struct
		{
		};
		uint8_t RuntimeTypeInfoCache_1_t30A0A6BC09AD64184AFB882CF46291A815E10EDD__padding[1];
	};

public:
};

struct RuntimeTypeInfoCache_1_t5CBAC9F2F1CBAD357A91B8C9DAE468017A978451_StaticFields
{
public:
	// System.Boolean Unity.Properties.Internal.RuntimeTypeInfoCache`1::IsValueType
	bool ___IsValueType_0;
	// System.Boolean Unity.Properties.Internal.RuntimeTypeInfoCache`1::IsPrimitive
	bool ___IsPrimitive_1;
	// System.Boolean Unity.Properties.Internal.RuntimeTypeInfoCache`1::IsInterface
	bool ___IsInterface_2;
	// System.Boolean Unity.Properties.Internal.RuntimeTypeInfoCache`1::IsAbstract
	bool ___IsAbstract_3;
	// System.Boolean Unity.Properties.Internal.RuntimeTypeInfoCache`1::IsArray
	bool ___IsArray_4;
	// System.Boolean Unity.Properties.Internal.RuntimeTypeInfoCache`1::IsEnum
	bool ___IsEnum_5;
	// System.Boolean Unity.Properties.Internal.RuntimeTypeInfoCache`1::IsEnumFlags
	bool ___IsEnumFlags_6;
	// System.Boolean Unity.Properties.Internal.RuntimeTypeInfoCache`1::IsNullable
	bool ___IsNullable_7;
	// System.Boolean Unity.Properties.Internal.RuntimeTypeInfoCache`1::IsObjectType
	bool ___IsObjectType_8;
	// System.Boolean Unity.Properties.Internal.RuntimeTypeInfoCache`1::IsStringType
	bool ___IsStringType_9;
	// System.Boolean Unity.Properties.Internal.RuntimeTypeInfoCache`1::IsContainerType
	bool ___IsContainerType_10;
	// System.Boolean Unity.Properties.Internal.RuntimeTypeInfoCache`1::CanBeNull
	bool ___CanBeNull_11;
	// System.Boolean Unity.Properties.Internal.RuntimeTypeInfoCache`1::IsNullableOrEnum
	bool ___IsNullableOrEnum_12;
	// System.Boolean Unity.Properties.Internal.RuntimeTypeInfoCache`1::IsPrimitiveOrString
	bool ___IsPrimitiveOrString_13;
	// System.Boolean Unity.Properties.Internal.RuntimeTypeInfoCache`1::IsAbstractOrInterface
	bool ___IsAbstractOrInterface_14;
	// System.Boolean Unity.Properties.Internal.RuntimeTypeInfoCache`1::IsLazyLoadReference
	bool ___IsLazyLoadReference_15;

public:
	inline static int32_t get_offset_of_IsValueType_0() { return static_cast<int32_t>(offsetof(RuntimeTypeInfoCache_1_t5CBAC9F2F1CBAD357A91B8C9DAE468017A978451_StaticFields, ___IsValueType_0)); }
	inline bool get_IsValueType_0() const { return ___IsValueType_0; }
	inline bool* get_address_of_IsValueType_0() { return &___IsValueType_0; }
	inline void set_IsValueType_0(bool value)
	{
		___IsValueType_0 = value;
	}

	inline static int32_t get_offset_of_IsPrimitive_1() { return static_cast<int32_t>(offsetof(RuntimeTypeInfoCache_1_t5CBAC9F2F1CBAD357A91B8C9DAE468017A978451_StaticFields, ___IsPrimitive_1)); }
	inline bool get_IsPrimitive_1() const { return ___IsPrimitive_1; }
	inline bool* get_address_of_IsPrimitive_1() { return &___IsPrimitive_1; }
	inline void set_IsPrimitive_1(bool value)
	{
		___IsPrimitive_1 = value;
	}

	inline static int32_t get_offset_of_IsInterface_2() { return static_cast<int32_t>(offsetof(RuntimeTypeInfoCache_1_t5CBAC9F2F1CBAD357A91B8C9DAE468017A978451_StaticFields, ___IsInterface_2)); }
	inline bool get_IsInterface_2() const { return ___IsInterface_2; }
	inline bool* get_address_of_IsInterface_2() { return &___IsInterface_2; }
	inline void set_IsInterface_2(bool value)
	{
		___IsInterface_2 = value;
	}

	inline static int32_t get_offset_of_IsAbstract_3() { return static_cast<int32_t>(offsetof(RuntimeTypeInfoCache_1_t5CBAC9F2F1CBAD357A91B8C9DAE468017A978451_StaticFields, ___IsAbstract_3)); }
	inline bool get_IsAbstract_3() const { return ___IsAbstract_3; }
	inline bool* get_address_of_IsAbstract_3() { return &___IsAbstract_3; }
	inline void set_IsAbstract_3(bool value)
	{
		___IsAbstract_3 = value;
	}

	inline static int32_t get_offset_of_IsArray_4() { return static_cast<int32_t>(offsetof(RuntimeTypeInfoCache_1_t5CBAC9F2F1CBAD357A91B8C9DAE468017A978451_StaticFields, ___IsArray_4)); }
	inline bool get_IsArray_4() const { return ___IsArray_4; }
	inline bool* get_address_of_IsArray_4() { return &___IsArray_4; }
	inline void set_IsArray_4(bool value)
	{
		___IsArray_4 = value;
	}

	inline static int32_t get_offset_of_IsEnum_5() { return static_cast<int32_t>(offsetof(RuntimeTypeInfoCache_1_t5CBAC9F2F1CBAD357A91B8C9DAE468017A978451_StaticFields, ___IsEnum_5)); }
	inline bool get_IsEnum_5() const { return ___IsEnum_5; }
	inline bool* get_address_of_IsEnum_5() { return &___IsEnum_5; }
	inline void set_IsEnum_5(bool value)
	{
		___IsEnum_5 = value;
	}

	inline static int32_t get_offset_of_IsEnumFlags_6() { return static_cast<int32_t>(offsetof(RuntimeTypeInfoCache_1_t5CBAC9F2F1CBAD357A91B8C9DAE468017A978451_StaticFields, ___IsEnumFlags_6)); }
	inline bool get_IsEnumFlags_6() const { return ___IsEnumFlags_6; }
	inline bool* get_address_of_IsEnumFlags_6() { return &___IsEnumFlags_6; }
	inline void set_IsEnumFlags_6(bool value)
	{
		___IsEnumFlags_6 = value;
	}

	inline static int32_t get_offset_of_IsNullable_7() { return static_cast<int32_t>(offsetof(RuntimeTypeInfoCache_1_t5CBAC9F2F1CBAD357A91B8C9DAE468017A978451_StaticFields, ___IsNullable_7)); }
	inline bool get_IsNullable_7() const { return ___IsNullable_7; }
	inline bool* get_address_of_IsNullable_7() { return &___IsNullable_7; }
	inline void set_IsNullable_7(bool value)
	{
		___IsNullable_7 = value;
	}

	inline static int32_t get_offset_of_IsObjectType_8() { return static_cast<int32_t>(offsetof(RuntimeTypeInfoCache_1_t5CBAC9F2F1CBAD357A91B8C9DAE468017A978451_StaticFields, ___IsObjectType_8)); }
	inline bool get_IsObjectType_8() const { return ___IsObjectType_8; }
	inline bool* get_address_of_IsObjectType_8() { return &___IsObjectType_8; }
	inline void set_IsObjectType_8(bool value)
	{
		___IsObjectType_8 = value;
	}

	inline static int32_t get_offset_of_IsStringType_9() { return static_cast<int32_t>(offsetof(RuntimeTypeInfoCache_1_t5CBAC9F2F1CBAD357A91B8C9DAE468017A978451_StaticFields, ___IsStringType_9)); }
	inline bool get_IsStringType_9() const { return ___IsStringType_9; }
	inline bool* get_address_of_IsStringType_9() { return &___IsStringType_9; }
	inline void set_IsStringType_9(bool value)
	{
		___IsStringType_9 = value;
	}

	inline static int32_t get_offset_of_IsContainerType_10() { return static_cast<int32_t>(offsetof(RuntimeTypeInfoCache_1_t5CBAC9F2F1CBAD357A91B8C9DAE468017A978451_StaticFields, ___IsContainerType_10)); }
	inline bool get_IsContainerType_10() const { return ___IsContainerType_10; }
	inline bool* get_address_of_IsContainerType_10() { return &___IsContainerType_10; }
	inline void set_IsContainerType_10(bool value)
	{
		___IsContainerType_10 = value;
	}

	inline static int32_t get_offset_of_CanBeNull_11() { return static_cast<int32_t>(offsetof(RuntimeTypeInfoCache_1_t5CBAC9F2F1CBAD357A91B8C9DAE468017A978451_StaticFields, ___CanBeNull_11)); }
	inline bool get_CanBeNull_11() const { return ___CanBeNull_11; }
	inline bool* get_address_of_CanBeNull_11() { return &___CanBeNull_11; }
	inline void set_CanBeNull_11(bool value)
	{
		___CanBeNull_11 = value;
	}

	inline static int32_t get_offset_of_IsNullableOrEnum_12() { return static_cast<int32_t>(offsetof(RuntimeTypeInfoCache_1_t5CBAC9F2F1CBAD357A91B8C9DAE468017A978451_StaticFields, ___IsNullableOrEnum_12)); }
	inline bool get_IsNullableOrEnum_12() const { return ___IsNullableOrEnum_12; }
	inline bool* get_address_of_IsNullableOrEnum_12() { return &___IsNullableOrEnum_12; }
	inline void set_IsNullableOrEnum_12(bool value)
	{
		___IsNullableOrEnum_12 = value;
	}

	inline static int32_t get_offset_of_IsPrimitiveOrString_13() { return static_cast<int32_t>(offsetof(RuntimeTypeInfoCache_1_t5CBAC9F2F1CBAD357A91B8C9DAE468017A978451_StaticFields, ___IsPrimitiveOrString_13)); }
	inline bool get_IsPrimitiveOrString_13() const { return ___IsPrimitiveOrString_13; }
	inline bool* get_address_of_IsPrimitiveOrString_13() { return &___IsPrimitiveOrString_13; }
	inline void set_IsPrimitiveOrString_13(bool value)
	{
		___IsPrimitiveOrString_13 = value;
	}

	inline static int32_t get_offset_of_IsAbstractOrInterface_14() { return static_cast<int32_t>(offsetof(RuntimeTypeInfoCache_1_t5CBAC9F2F1CBAD357A91B8C9DAE468017A978451_StaticFields, ___IsAbstractOrInterface_14)); }
	inline bool get_IsAbstractOrInterface_14() const { return ___IsAbstractOrInterface_14; }
	inline bool* get_address_of_IsAbstractOrInterface_14() { return &___IsAbstractOrInterface_14; }
	inline void set_IsAbstractOrInterface_14(bool value)
	{
		___IsAbstractOrInterface_14 = value;
	}

	inline static int32_t get_offset_of_IsLazyLoadReference_15() { return static_cast<int32_t>(offsetof(RuntimeTypeInfoCache_1_t5CBAC9F2F1CBAD357A91B8C9DAE468017A978451_StaticFields, ___IsLazyLoadReference_15)); }
	inline bool get_IsLazyLoadReference_15() const { return ___IsLazyLoadReference_15; }
	inline bool* get_address_of_IsLazyLoadReference_15() { return &___IsLazyLoadReference_15; }
	inline void set_IsLazyLoadReference_15(bool value)
	{
		___IsLazyLoadReference_15 = value;
	}
};


// Unity.Properties.Internal.RuntimeTypeInfoCache`1<UnityEngine.Keyframe>
struct RuntimeTypeInfoCache_1_tD340DDBB5C3590BF74E151146C0973C71819F96F 
{
public:
	union
	{
		struct
		{
		};
		uint8_t RuntimeTypeInfoCache_1_t30A0A6BC09AD64184AFB882CF46291A815E10EDD__padding[1];
	};

public:
};

struct RuntimeTypeInfoCache_1_tD340DDBB5C3590BF74E151146C0973C71819F96F_StaticFields
{
public:
	// System.Boolean Unity.Properties.Internal.RuntimeTypeInfoCache`1::IsValueType
	bool ___IsValueType_0;
	// System.Boolean Unity.Properties.Internal.RuntimeTypeInfoCache`1::IsPrimitive
	bool ___IsPrimitive_1;
	// System.Boolean Unity.Properties.Internal.RuntimeTypeInfoCache`1::IsInterface
	bool ___IsInterface_2;
	// System.Boolean Unity.Properties.Internal.RuntimeTypeInfoCache`1::IsAbstract
	bool ___IsAbstract_3;
	// System.Boolean Unity.Properties.Internal.RuntimeTypeInfoCache`1::IsArray
	bool ___IsArray_4;
	// System.Boolean Unity.Properties.Internal.RuntimeTypeInfoCache`1::IsEnum
	bool ___IsEnum_5;
	// System.Boolean Unity.Properties.Internal.RuntimeTypeInfoCache`1::IsEnumFlags
	bool ___IsEnumFlags_6;
	// System.Boolean Unity.Properties.Internal.RuntimeTypeInfoCache`1::IsNullable
	bool ___IsNullable_7;
	// System.Boolean Unity.Properties.Internal.RuntimeTypeInfoCache`1::IsObjectType
	bool ___IsObjectType_8;
	// System.Boolean Unity.Properties.Internal.RuntimeTypeInfoCache`1::IsStringType
	bool ___IsStringType_9;
	// System.Boolean Unity.Properties.Internal.RuntimeTypeInfoCache`1::IsContainerType
	bool ___IsContainerType_10;
	// System.Boolean Unity.Properties.Internal.RuntimeTypeInfoCache`1::CanBeNull
	bool ___CanBeNull_11;
	// System.Boolean Unity.Properties.Internal.RuntimeTypeInfoCache`1::IsNullableOrEnum
	bool ___IsNullableOrEnum_12;
	// System.Boolean Unity.Properties.Internal.RuntimeTypeInfoCache`1::IsPrimitiveOrString
	bool ___IsPrimitiveOrString_13;
	// System.Boolean Unity.Properties.Internal.RuntimeTypeInfoCache`1::IsAbstractOrInterface
	bool ___IsAbstractOrInterface_14;
	// System.Boolean Unity.Properties.Internal.RuntimeTypeInfoCache`1::IsLazyLoadReference
	bool ___IsLazyLoadReference_15;

public:
	inline static int32_t get_offset_of_IsValueType_0() { return static_cast<int32_t>(offsetof(RuntimeTypeInfoCache_1_tD340DDBB5C3590BF74E151146C0973C71819F96F_StaticFields, ___IsValueType_0)); }
	inline bool get_IsValueType_0() const { return ___IsValueType_0; }
	inline bool* get_address_of_IsValueType_0() { return &___IsValueType_0; }
	inline void set_IsValueType_0(bool value)
	{
		___IsValueType_0 = value;
	}

	inline static int32_t get_offset_of_IsPrimitive_1() { return static_cast<int32_t>(offsetof(RuntimeTypeInfoCache_1_tD340DDBB5C3590BF74E151146C0973C71819F96F_StaticFields, ___IsPrimitive_1)); }
	inline bool get_IsPrimitive_1() const { return ___IsPrimitive_1; }
	inline bool* get_address_of_IsPrimitive_1() { return &___IsPrimitive_1; }
	inline void set_IsPrimitive_1(bool value)
	{
		___IsPrimitive_1 = value;
	}

	inline static int32_t get_offset_of_IsInterface_2() { return static_cast<int32_t>(offsetof(RuntimeTypeInfoCache_1_tD340DDBB5C3590BF74E151146C0973C71819F96F_StaticFields, ___IsInterface_2)); }
	inline bool get_IsInterface_2() const { return ___IsInterface_2; }
	inline bool* get_address_of_IsInterface_2() { return &___IsInterface_2; }
	inline void set_IsInterface_2(bool value)
	{
		___IsInterface_2 = value;
	}

	inline static int32_t get_offset_of_IsAbstract_3() { return static_cast<int32_t>(offsetof(RuntimeTypeInfoCache_1_tD340DDBB5C3590BF74E151146C0973C71819F96F_StaticFields, ___IsAbstract_3)); }
	inline bool get_IsAbstract_3() const { return ___IsAbstract_3; }
	inline bool* get_address_of_IsAbstract_3() { return &___IsAbstract_3; }
	inline void set_IsAbstract_3(bool value)
	{
		___IsAbstract_3 = value;
	}

	inline static int32_t get_offset_of_IsArray_4() { return static_cast<int32_t>(offsetof(RuntimeTypeInfoCache_1_tD340DDBB5C3590BF74E151146C0973C71819F96F_StaticFields, ___IsArray_4)); }
	inline bool get_IsArray_4() const { return ___IsArray_4; }
	inline bool* get_address_of_IsArray_4() { return &___IsArray_4; }
	inline void set_IsArray_4(bool value)
	{
		___IsArray_4 = value;
	}

	inline static int32_t get_offset_of_IsEnum_5() { return static_cast<int32_t>(offsetof(RuntimeTypeInfoCache_1_tD340DDBB5C3590BF74E151146C0973C71819F96F_StaticFields, ___IsEnum_5)); }
	inline bool get_IsEnum_5() const { return ___IsEnum_5; }
	inline bool* get_address_of_IsEnum_5() { return &___IsEnum_5; }
	inline void set_IsEnum_5(bool value)
	{
		___IsEnum_5 = value;
	}

	inline static int32_t get_offset_of_IsEnumFlags_6() { return static_cast<int32_t>(offsetof(RuntimeTypeInfoCache_1_tD340DDBB5C3590BF74E151146C0973C71819F96F_StaticFields, ___IsEnumFlags_6)); }
	inline bool get_IsEnumFlags_6() const { return ___IsEnumFlags_6; }
	inline bool* get_address_of_IsEnumFlags_6() { return &___IsEnumFlags_6; }
	inline void set_IsEnumFlags_6(bool value)
	{
		___IsEnumFlags_6 = value;
	}

	inline static int32_t get_offset_of_IsNullable_7() { return static_cast<int32_t>(offsetof(RuntimeTypeInfoCache_1_tD340DDBB5C3590BF74E151146C0973C71819F96F_StaticFields, ___IsNullable_7)); }
	inline bool get_IsNullable_7() const { return ___IsNullable_7; }
	inline bool* get_address_of_IsNullable_7() { return &___IsNullable_7; }
	inline void set_IsNullable_7(bool value)
	{
		___IsNullable_7 = value;
	}

	inline static int32_t get_offset_of_IsObjectType_8() { return static_cast<int32_t>(offsetof(RuntimeTypeInfoCache_1_tD340DDBB5C3590BF74E151146C0973C71819F96F_StaticFields, ___IsObjectType_8)); }
	inline bool get_IsObjectType_8() const { return ___IsObjectType_8; }
	inline bool* get_address_of_IsObjectType_8() { return &___IsObjectType_8; }
	inline void set_IsObjectType_8(bool value)
	{
		___IsObjectType_8 = value;
	}

	inline static int32_t get_offset_of_IsStringType_9() { return static_cast<int32_t>(offsetof(RuntimeTypeInfoCache_1_tD340DDBB5C3590BF74E151146C0973C71819F96F_StaticFields, ___IsStringType_9)); }
	inline bool get_IsStringType_9() const { return ___IsStringType_9; }
	inline bool* get_address_of_IsStringType_9() { return &___IsStringType_9; }
	inline void set_IsStringType_9(bool value)
	{
		___IsStringType_9 = value;
	}

	inline static int32_t get_offset_of_IsContainerType_10() { return static_cast<int32_t>(offsetof(RuntimeTypeInfoCache_1_tD340DDBB5C3590BF74E151146C0973C71819F96F_StaticFields, ___IsContainerType_10)); }
	inline bool get_IsContainerType_10() const { return ___IsContainerType_10; }
	inline bool* get_address_of_IsContainerType_10() { return &___IsContainerType_10; }
	inline void set_IsContainerType_10(bool value)
	{
		___IsContainerType_10 = value;
	}

	inline static int32_t get_offset_of_CanBeNull_11() { return static_cast<int32_t>(offsetof(RuntimeTypeInfoCache_1_tD340DDBB5C3590BF74E151146C0973C71819F96F_StaticFields, ___CanBeNull_11)); }
	inline bool get_CanBeNull_11() const { return ___CanBeNull_11; }
	inline bool* get_address_of_CanBeNull_11() { return &___CanBeNull_11; }
	inline void set_CanBeNull_11(bool value)
	{
		___CanBeNull_11 = value;
	}

	inline static int32_t get_offset_of_IsNullableOrEnum_12() { return static_cast<int32_t>(offsetof(RuntimeTypeInfoCache_1_tD340DDBB5C3590BF74E151146C0973C71819F96F_StaticFields, ___IsNullableOrEnum_12)); }
	inline bool get_IsNullableOrEnum_12() const { return ___IsNullableOrEnum_12; }
	inline bool* get_address_of_IsNullableOrEnum_12() { return &___IsNullableOrEnum_12; }
	inline void set_IsNullableOrEnum_12(bool value)
	{
		___IsNullableOrEnum_12 = value;
	}

	inline static int32_t get_offset_of_IsPrimitiveOrString_13() { return static_cast<int32_t>(offsetof(RuntimeTypeInfoCache_1_tD340DDBB5C3590BF74E151146C0973C71819F96F_StaticFields, ___IsPrimitiveOrString_13)); }
	inline bool get_IsPrimitiveOrString_13() const { return ___IsPrimitiveOrString_13; }
	inline bool* get_address_of_IsPrimitiveOrString_13() { return &___IsPrimitiveOrString_13; }
	inline void set_IsPrimitiveOrString_13(bool value)
	{
		___IsPrimitiveOrString_13 = value;
	}

	inline static int32_t get_offset_of_IsAbstractOrInterface_14() { return static_cast<int32_t>(offsetof(RuntimeTypeInfoCache_1_tD340DDBB5C3590BF74E151146C0973C71819F96F_StaticFields, ___IsAbstractOrInterface_14)); }
	inline bool get_IsAbstractOrInterface_14() const { return ___IsAbstractOrInterface_14; }
	inline bool* get_address_of_IsAbstractOrInterface_14() { return &___IsAbstractOrInterface_14; }
	inline void set_IsAbstractOrInterface_14(bool value)
	{
		___IsAbstractOrInterface_14 = value;
	}

	inline static int32_t get_offset_of_IsLazyLoadReference_15() { return static_cast<int32_t>(offsetof(RuntimeTypeInfoCache_1_tD340DDBB5C3590BF74E151146C0973C71819F96F_StaticFields, ___IsLazyLoadReference_15)); }
	inline bool get_IsLazyLoadReference_15() const { return ___IsLazyLoadReference_15; }
	inline bool* get_address_of_IsLazyLoadReference_15() { return &___IsLazyLoadReference_15; }
	inline void set_IsLazyLoadReference_15(bool value)
	{
		___IsLazyLoadReference_15 = value;
	}
};


// Unity.Properties.Internal.RuntimeTypeInfoCache`1<System.Object>
struct RuntimeTypeInfoCache_1_t430C5AE51D5242025852D50EAACE8D8C6DC453C8 
{
public:
	union
	{
		struct
		{
		};
		uint8_t RuntimeTypeInfoCache_1_t30A0A6BC09AD64184AFB882CF46291A815E10EDD__padding[1];
	};

public:
};

struct RuntimeTypeInfoCache_1_t430C5AE51D5242025852D50EAACE8D8C6DC453C8_StaticFields
{
public:
	// System.Boolean Unity.Properties.Internal.RuntimeTypeInfoCache`1::IsValueType
	bool ___IsValueType_0;
	// System.Boolean Unity.Properties.Internal.RuntimeTypeInfoCache`1::IsPrimitive
	bool ___IsPrimitive_1;
	// System.Boolean Unity.Properties.Internal.RuntimeTypeInfoCache`1::IsInterface
	bool ___IsInterface_2;
	// System.Boolean Unity.Properties.Internal.RuntimeTypeInfoCache`1::IsAbstract
	bool ___IsAbstract_3;
	// System.Boolean Unity.Properties.Internal.RuntimeTypeInfoCache`1::IsArray
	bool ___IsArray_4;
	// System.Boolean Unity.Properties.Internal.RuntimeTypeInfoCache`1::IsEnum
	bool ___IsEnum_5;
	// System.Boolean Unity.Properties.Internal.RuntimeTypeInfoCache`1::IsEnumFlags
	bool ___IsEnumFlags_6;
	// System.Boolean Unity.Properties.Internal.RuntimeTypeInfoCache`1::IsNullable
	bool ___IsNullable_7;
	// System.Boolean Unity.Properties.Internal.RuntimeTypeInfoCache`1::IsObjectType
	bool ___IsObjectType_8;
	// System.Boolean Unity.Properties.Internal.RuntimeTypeInfoCache`1::IsStringType
	bool ___IsStringType_9;
	// System.Boolean Unity.Properties.Internal.RuntimeTypeInfoCache`1::IsContainerType
	bool ___IsContainerType_10;
	// System.Boolean Unity.Properties.Internal.RuntimeTypeInfoCache`1::CanBeNull
	bool ___CanBeNull_11;
	// System.Boolean Unity.Properties.Internal.RuntimeTypeInfoCache`1::IsNullableOrEnum
	bool ___IsNullableOrEnum_12;
	// System.Boolean Unity.Properties.Internal.RuntimeTypeInfoCache`1::IsPrimitiveOrString
	bool ___IsPrimitiveOrString_13;
	// System.Boolean Unity.Properties.Internal.RuntimeTypeInfoCache`1::IsAbstractOrInterface
	bool ___IsAbstractOrInterface_14;
	// System.Boolean Unity.Properties.Internal.RuntimeTypeInfoCache`1::IsLazyLoadReference
	bool ___IsLazyLoadReference_15;

public:
	inline static int32_t get_offset_of_IsValueType_0() { return static_cast<int32_t>(offsetof(RuntimeTypeInfoCache_1_t430C5AE51D5242025852D50EAACE8D8C6DC453C8_StaticFields, ___IsValueType_0)); }
	inline bool get_IsValueType_0() const { return ___IsValueType_0; }
	inline bool* get_address_of_IsValueType_0() { return &___IsValueType_0; }
	inline void set_IsValueType_0(bool value)
	{
		___IsValueType_0 = value;
	}

	inline static int32_t get_offset_of_IsPrimitive_1() { return static_cast<int32_t>(offsetof(RuntimeTypeInfoCache_1_t430C5AE51D5242025852D50EAACE8D8C6DC453C8_StaticFields, ___IsPrimitive_1)); }
	inline bool get_IsPrimitive_1() const { return ___IsPrimitive_1; }
	inline bool* get_address_of_IsPrimitive_1() { return &___IsPrimitive_1; }
	inline void set_IsPrimitive_1(bool value)
	{
		___IsPrimitive_1 = value;
	}

	inline static int32_t get_offset_of_IsInterface_2() { return static_cast<int32_t>(offsetof(RuntimeTypeInfoCache_1_t430C5AE51D5242025852D50EAACE8D8C6DC453C8_StaticFields, ___IsInterface_2)); }
	inline bool get_IsInterface_2() const { return ___IsInterface_2; }
	inline bool* get_address_of_IsInterface_2() { return &___IsInterface_2; }
	inline void set_IsInterface_2(bool value)
	{
		___IsInterface_2 = value;
	}

	inline static int32_t get_offset_of_IsAbstract_3() { return static_cast<int32_t>(offsetof(RuntimeTypeInfoCache_1_t430C5AE51D5242025852D50EAACE8D8C6DC453C8_StaticFields, ___IsAbstract_3)); }
	inline bool get_IsAbstract_3() const { return ___IsAbstract_3; }
	inline bool* get_address_of_IsAbstract_3() { return &___IsAbstract_3; }
	inline void set_IsAbstract_3(bool value)
	{
		___IsAbstract_3 = value;
	}

	inline static int32_t get_offset_of_IsArray_4() { return static_cast<int32_t>(offsetof(RuntimeTypeInfoCache_1_t430C5AE51D5242025852D50EAACE8D8C6DC453C8_StaticFields, ___IsArray_4)); }
	inline bool get_IsArray_4() const { return ___IsArray_4; }
	inline bool* get_address_of_IsArray_4() { return &___IsArray_4; }
	inline void set_IsArray_4(bool value)
	{
		___IsArray_4 = value;
	}

	inline static int32_t get_offset_of_IsEnum_5() { return static_cast<int32_t>(offsetof(RuntimeTypeInfoCache_1_t430C5AE51D5242025852D50EAACE8D8C6DC453C8_StaticFields, ___IsEnum_5)); }
	inline bool get_IsEnum_5() const { return ___IsEnum_5; }
	inline bool* get_address_of_IsEnum_5() { return &___IsEnum_5; }
	inline void set_IsEnum_5(bool value)
	{
		___IsEnum_5 = value;
	}

	inline static int32_t get_offset_of_IsEnumFlags_6() { return static_cast<int32_t>(offsetof(RuntimeTypeInfoCache_1_t430C5AE51D5242025852D50EAACE8D8C6DC453C8_StaticFields, ___IsEnumFlags_6)); }
	inline bool get_IsEnumFlags_6() const { return ___IsEnumFlags_6; }
	inline bool* get_address_of_IsEnumFlags_6() { return &___IsEnumFlags_6; }
	inline void set_IsEnumFlags_6(bool value)
	{
		___IsEnumFlags_6 = value;
	}

	inline static int32_t get_offset_of_IsNullable_7() { return static_cast<int32_t>(offsetof(RuntimeTypeInfoCache_1_t430C5AE51D5242025852D50EAACE8D8C6DC453C8_StaticFields, ___IsNullable_7)); }
	inline bool get_IsNullable_7() const { return ___IsNullable_7; }
	inline bool* get_address_of_IsNullable_7() { return &___IsNullable_7; }
	inline void set_IsNullable_7(bool value)
	{
		___IsNullable_7 = value;
	}

	inline static int32_t get_offset_of_IsObjectType_8() { return static_cast<int32_t>(offsetof(RuntimeTypeInfoCache_1_t430C5AE51D5242025852D50EAACE8D8C6DC453C8_StaticFields, ___IsObjectType_8)); }
	inline bool get_IsObjectType_8() const { return ___IsObjectType_8; }
	inline bool* get_address_of_IsObjectType_8() { return &___IsObjectType_8; }
	inline void set_IsObjectType_8(bool value)
	{
		___IsObjectType_8 = value;
	}

	inline static int32_t get_offset_of_IsStringType_9() { return static_cast<int32_t>(offsetof(RuntimeTypeInfoCache_1_t430C5AE51D5242025852D50EAACE8D8C6DC453C8_StaticFields, ___IsStringType_9)); }
	inline bool get_IsStringType_9() const { return ___IsStringType_9; }
	inline bool* get_address_of_IsStringType_9() { return &___IsStringType_9; }
	inline void set_IsStringType_9(bool value)
	{
		___IsStringType_9 = value;
	}

	inline static int32_t get_offset_of_IsContainerType_10() { return static_cast<int32_t>(offsetof(RuntimeTypeInfoCache_1_t430C5AE51D5242025852D50EAACE8D8C6DC453C8_StaticFields, ___IsContainerType_10)); }
	inline bool get_IsContainerType_10() const { return ___IsContainerType_10; }
	inline bool* get_address_of_IsContainerType_10() { return &___IsContainerType_10; }
	inline void set_IsContainerType_10(bool value)
	{
		___IsContainerType_10 = value;
	}

	inline static int32_t get_offset_of_CanBeNull_11() { return static_cast<int32_t>(offsetof(RuntimeTypeInfoCache_1_t430C5AE51D5242025852D50EAACE8D8C6DC453C8_StaticFields, ___CanBeNull_11)); }
	inline bool get_CanBeNull_11() const { return ___CanBeNull_11; }
	inline bool* get_address_of_CanBeNull_11() { return &___CanBeNull_11; }
	inline void set_CanBeNull_11(bool value)
	{
		___CanBeNull_11 = value;
	}

	inline static int32_t get_offset_of_IsNullableOrEnum_12() { return static_cast<int32_t>(offsetof(RuntimeTypeInfoCache_1_t430C5AE51D5242025852D50EAACE8D8C6DC453C8_StaticFields, ___IsNullableOrEnum_12)); }
	inline bool get_IsNullableOrEnum_12() const { return ___IsNullableOrEnum_12; }
	inline bool* get_address_of_IsNullableOrEnum_12() { return &___IsNullableOrEnum_12; }
	inline void set_IsNullableOrEnum_12(bool value)
	{
		___IsNullableOrEnum_12 = value;
	}

	inline static int32_t get_offset_of_IsPrimitiveOrString_13() { return static_cast<int32_t>(offsetof(RuntimeTypeInfoCache_1_t430C5AE51D5242025852D50EAACE8D8C6DC453C8_StaticFields, ___IsPrimitiveOrString_13)); }
	inline bool get_IsPrimitiveOrString_13() const { return ___IsPrimitiveOrString_13; }
	inline bool* get_address_of_IsPrimitiveOrString_13() { return &___IsPrimitiveOrString_13; }
	inline void set_IsPrimitiveOrString_13(bool value)
	{
		___IsPrimitiveOrString_13 = value;
	}

	inline static int32_t get_offset_of_IsAbstractOrInterface_14() { return static_cast<int32_t>(offsetof(RuntimeTypeInfoCache_1_t430C5AE51D5242025852D50EAACE8D8C6DC453C8_StaticFields, ___IsAbstractOrInterface_14)); }
	inline bool get_IsAbstractOrInterface_14() const { return ___IsAbstractOrInterface_14; }
	inline bool* get_address_of_IsAbstractOrInterface_14() { return &___IsAbstractOrInterface_14; }
	inline void set_IsAbstractOrInterface_14(bool value)
	{
		___IsAbstractOrInterface_14 = value;
	}

	inline static int32_t get_offset_of_IsLazyLoadReference_15() { return static_cast<int32_t>(offsetof(RuntimeTypeInfoCache_1_t430C5AE51D5242025852D50EAACE8D8C6DC453C8_StaticFields, ___IsLazyLoadReference_15)); }
	inline bool get_IsLazyLoadReference_15() const { return ___IsLazyLoadReference_15; }
	inline bool* get_address_of_IsLazyLoadReference_15() { return &___IsLazyLoadReference_15; }
	inline void set_IsLazyLoadReference_15(bool value)
	{
		___IsLazyLoadReference_15 = value;
	}
};


// Unity.Properties.Internal.RuntimeTypeInfoCache`1<UnityEngine.Rect>
struct RuntimeTypeInfoCache_1_tDEA5BCF1CBB2F6FFCCC32DB58E3DB05C14F211CC 
{
public:
	union
	{
		struct
		{
		};
		uint8_t RuntimeTypeInfoCache_1_t30A0A6BC09AD64184AFB882CF46291A815E10EDD__padding[1];
	};

public:
};

struct RuntimeTypeInfoCache_1_tDEA5BCF1CBB2F6FFCCC32DB58E3DB05C14F211CC_StaticFields
{
public:
	// System.Boolean Unity.Properties.Internal.RuntimeTypeInfoCache`1::IsValueType
	bool ___IsValueType_0;
	// System.Boolean Unity.Properties.Internal.RuntimeTypeInfoCache`1::IsPrimitive
	bool ___IsPrimitive_1;
	// System.Boolean Unity.Properties.Internal.RuntimeTypeInfoCache`1::IsInterface
	bool ___IsInterface_2;
	// System.Boolean Unity.Properties.Internal.RuntimeTypeInfoCache`1::IsAbstract
	bool ___IsAbstract_3;
	// System.Boolean Unity.Properties.Internal.RuntimeTypeInfoCache`1::IsArray
	bool ___IsArray_4;
	// System.Boolean Unity.Properties.Internal.RuntimeTypeInfoCache`1::IsEnum
	bool ___IsEnum_5;
	// System.Boolean Unity.Properties.Internal.RuntimeTypeInfoCache`1::IsEnumFlags
	bool ___IsEnumFlags_6;
	// System.Boolean Unity.Properties.Internal.RuntimeTypeInfoCache`1::IsNullable
	bool ___IsNullable_7;
	// System.Boolean Unity.Properties.Internal.RuntimeTypeInfoCache`1::IsObjectType
	bool ___IsObjectType_8;
	// System.Boolean Unity.Properties.Internal.RuntimeTypeInfoCache`1::IsStringType
	bool ___IsStringType_9;
	// System.Boolean Unity.Properties.Internal.RuntimeTypeInfoCache`1::IsContainerType
	bool ___IsContainerType_10;
	// System.Boolean Unity.Properties.Internal.RuntimeTypeInfoCache`1::CanBeNull
	bool ___CanBeNull_11;
	// System.Boolean Unity.Properties.Internal.RuntimeTypeInfoCache`1::IsNullableOrEnum
	bool ___IsNullableOrEnum_12;
	// System.Boolean Unity.Properties.Internal.RuntimeTypeInfoCache`1::IsPrimitiveOrString
	bool ___IsPrimitiveOrString_13;
	// System.Boolean Unity.Properties.Internal.RuntimeTypeInfoCache`1::IsAbstractOrInterface
	bool ___IsAbstractOrInterface_14;
	// System.Boolean Unity.Properties.Internal.RuntimeTypeInfoCache`1::IsLazyLoadReference
	bool ___IsLazyLoadReference_15;

public:
	inline static int32_t get_offset_of_IsValueType_0() { return static_cast<int32_t>(offsetof(RuntimeTypeInfoCache_1_tDEA5BCF1CBB2F6FFCCC32DB58E3DB05C14F211CC_StaticFields, ___IsValueType_0)); }
	inline bool get_IsValueType_0() const { return ___IsValueType_0; }
	inline bool* get_address_of_IsValueType_0() { return &___IsValueType_0; }
	inline void set_IsValueType_0(bool value)
	{
		___IsValueType_0 = value;
	}

	inline static int32_t get_offset_of_IsPrimitive_1() { return static_cast<int32_t>(offsetof(RuntimeTypeInfoCache_1_tDEA5BCF1CBB2F6FFCCC32DB58E3DB05C14F211CC_StaticFields, ___IsPrimitive_1)); }
	inline bool get_IsPrimitive_1() const { return ___IsPrimitive_1; }
	inline bool* get_address_of_IsPrimitive_1() { return &___IsPrimitive_1; }
	inline void set_IsPrimitive_1(bool value)
	{
		___IsPrimitive_1 = value;
	}

	inline static int32_t get_offset_of_IsInterface_2() { return static_cast<int32_t>(offsetof(RuntimeTypeInfoCache_1_tDEA5BCF1CBB2F6FFCCC32DB58E3DB05C14F211CC_StaticFields, ___IsInterface_2)); }
	inline bool get_IsInterface_2() const { return ___IsInterface_2; }
	inline bool* get_address_of_IsInterface_2() { return &___IsInterface_2; }
	inline void set_IsInterface_2(bool value)
	{
		___IsInterface_2 = value;
	}

	inline static int32_t get_offset_of_IsAbstract_3() { return static_cast<int32_t>(offsetof(RuntimeTypeInfoCache_1_tDEA5BCF1CBB2F6FFCCC32DB58E3DB05C14F211CC_StaticFields, ___IsAbstract_3)); }
	inline bool get_IsAbstract_3() const { return ___IsAbstract_3; }
	inline bool* get_address_of_IsAbstract_3() { return &___IsAbstract_3; }
	inline void set_IsAbstract_3(bool value)
	{
		___IsAbstract_3 = value;
	}

	inline static int32_t get_offset_of_IsArray_4() { return static_cast<int32_t>(offsetof(RuntimeTypeInfoCache_1_tDEA5BCF1CBB2F6FFCCC32DB58E3DB05C14F211CC_StaticFields, ___IsArray_4)); }
	inline bool get_IsArray_4() const { return ___IsArray_4; }
	inline bool* get_address_of_IsArray_4() { return &___IsArray_4; }
	inline void set_IsArray_4(bool value)
	{
		___IsArray_4 = value;
	}

	inline static int32_t get_offset_of_IsEnum_5() { return static_cast<int32_t>(offsetof(RuntimeTypeInfoCache_1_tDEA5BCF1CBB2F6FFCCC32DB58E3DB05C14F211CC_StaticFields, ___IsEnum_5)); }
	inline bool get_IsEnum_5() const { return ___IsEnum_5; }
	inline bool* get_address_of_IsEnum_5() { return &___IsEnum_5; }
	inline void set_IsEnum_5(bool value)
	{
		___IsEnum_5 = value;
	}

	inline static int32_t get_offset_of_IsEnumFlags_6() { return static_cast<int32_t>(offsetof(RuntimeTypeInfoCache_1_tDEA5BCF1CBB2F6FFCCC32DB58E3DB05C14F211CC_StaticFields, ___IsEnumFlags_6)); }
	inline bool get_IsEnumFlags_6() const { return ___IsEnumFlags_6; }
	inline bool* get_address_of_IsEnumFlags_6() { return &___IsEnumFlags_6; }
	inline void set_IsEnumFlags_6(bool value)
	{
		___IsEnumFlags_6 = value;
	}

	inline static int32_t get_offset_of_IsNullable_7() { return static_cast<int32_t>(offsetof(RuntimeTypeInfoCache_1_tDEA5BCF1CBB2F6FFCCC32DB58E3DB05C14F211CC_StaticFields, ___IsNullable_7)); }
	inline bool get_IsNullable_7() const { return ___IsNullable_7; }
	inline bool* get_address_of_IsNullable_7() { return &___IsNullable_7; }
	inline void set_IsNullable_7(bool value)
	{
		___IsNullable_7 = value;
	}

	inline static int32_t get_offset_of_IsObjectType_8() { return static_cast<int32_t>(offsetof(RuntimeTypeInfoCache_1_tDEA5BCF1CBB2F6FFCCC32DB58E3DB05C14F211CC_StaticFields, ___IsObjectType_8)); }
	inline bool get_IsObjectType_8() const { return ___IsObjectType_8; }
	inline bool* get_address_of_IsObjectType_8() { return &___IsObjectType_8; }
	inline void set_IsObjectType_8(bool value)
	{
		___IsObjectType_8 = value;
	}

	inline static int32_t get_offset_of_IsStringType_9() { return static_cast<int32_t>(offsetof(RuntimeTypeInfoCache_1_tDEA5BCF1CBB2F6FFCCC32DB58E3DB05C14F211CC_StaticFields, ___IsStringType_9)); }
	inline bool get_IsStringType_9() const { return ___IsStringType_9; }
	inline bool* get_address_of_IsStringType_9() { return &___IsStringType_9; }
	inline void set_IsStringType_9(bool value)
	{
		___IsStringType_9 = value;
	}

	inline static int32_t get_offset_of_IsContainerType_10() { return static_cast<int32_t>(offsetof(RuntimeTypeInfoCache_1_tDEA5BCF1CBB2F6FFCCC32DB58E3DB05C14F211CC_StaticFields, ___IsContainerType_10)); }
	inline bool get_IsContainerType_10() const { return ___IsContainerType_10; }
	inline bool* get_address_of_IsContainerType_10() { return &___IsContainerType_10; }
	inline void set_IsContainerType_10(bool value)
	{
		___IsContainerType_10 = value;
	}

	inline static int32_t get_offset_of_CanBeNull_11() { return static_cast<int32_t>(offsetof(RuntimeTypeInfoCache_1_tDEA5BCF1CBB2F6FFCCC32DB58E3DB05C14F211CC_StaticFields, ___CanBeNull_11)); }
	inline bool get_CanBeNull_11() const { return ___CanBeNull_11; }
	inline bool* get_address_of_CanBeNull_11() { return &___CanBeNull_11; }
	inline void set_CanBeNull_11(bool value)
	{
		___CanBeNull_11 = value;
	}

	inline static int32_t get_offset_of_IsNullableOrEnum_12() { return static_cast<int32_t>(offsetof(RuntimeTypeInfoCache_1_tDEA5BCF1CBB2F6FFCCC32DB58E3DB05C14F211CC_StaticFields, ___IsNullableOrEnum_12)); }
	inline bool get_IsNullableOrEnum_12() const { return ___IsNullableOrEnum_12; }
	inline bool* get_address_of_IsNullableOrEnum_12() { return &___IsNullableOrEnum_12; }
	inline void set_IsNullableOrEnum_12(bool value)
	{
		___IsNullableOrEnum_12 = value;
	}

	inline static int32_t get_offset_of_IsPrimitiveOrString_13() { return static_cast<int32_t>(offsetof(RuntimeTypeInfoCache_1_tDEA5BCF1CBB2F6FFCCC32DB58E3DB05C14F211CC_StaticFields, ___IsPrimitiveOrString_13)); }
	inline bool get_IsPrimitiveOrString_13() const { return ___IsPrimitiveOrString_13; }
	inline bool* get_address_of_IsPrimitiveOrString_13() { return &___IsPrimitiveOrString_13; }
	inline void set_IsPrimitiveOrString_13(bool value)
	{
		___IsPrimitiveOrString_13 = value;
	}

	inline static int32_t get_offset_of_IsAbstractOrInterface_14() { return static_cast<int32_t>(offsetof(RuntimeTypeInfoCache_1_tDEA5BCF1CBB2F6FFCCC32DB58E3DB05C14F211CC_StaticFields, ___IsAbstractOrInterface_14)); }
	inline bool get_IsAbstractOrInterface_14() const { return ___IsAbstractOrInterface_14; }
	inline bool* get_address_of_IsAbstractOrInterface_14() { return &___IsAbstractOrInterface_14; }
	inline void set_IsAbstractOrInterface_14(bool value)
	{
		___IsAbstractOrInterface_14 = value;
	}

	inline static int32_t get_offset_of_IsLazyLoadReference_15() { return static_cast<int32_t>(offsetof(RuntimeTypeInfoCache_1_tDEA5BCF1CBB2F6FFCCC32DB58E3DB05C14F211CC_StaticFields, ___IsLazyLoadReference_15)); }
	inline bool get_IsLazyLoadReference_15() const { return ___IsLazyLoadReference_15; }
	inline bool* get_address_of_IsLazyLoadReference_15() { return &___IsLazyLoadReference_15; }
	inline void set_IsLazyLoadReference_15(bool value)
	{
		___IsLazyLoadReference_15 = value;
	}
};


// Unity.Properties.Internal.RuntimeTypeInfoCache`1<UnityEngine.RectInt>
struct RuntimeTypeInfoCache_1_tCD8F6087609BE80511DC89FA27BB42860F87EF26 
{
public:
	union
	{
		struct
		{
		};
		uint8_t RuntimeTypeInfoCache_1_t30A0A6BC09AD64184AFB882CF46291A815E10EDD__padding[1];
	};

public:
};

struct RuntimeTypeInfoCache_1_tCD8F6087609BE80511DC89FA27BB42860F87EF26_StaticFields
{
public:
	// System.Boolean Unity.Properties.Internal.RuntimeTypeInfoCache`1::IsValueType
	bool ___IsValueType_0;
	// System.Boolean Unity.Properties.Internal.RuntimeTypeInfoCache`1::IsPrimitive
	bool ___IsPrimitive_1;
	// System.Boolean Unity.Properties.Internal.RuntimeTypeInfoCache`1::IsInterface
	bool ___IsInterface_2;
	// System.Boolean Unity.Properties.Internal.RuntimeTypeInfoCache`1::IsAbstract
	bool ___IsAbstract_3;
	// System.Boolean Unity.Properties.Internal.RuntimeTypeInfoCache`1::IsArray
	bool ___IsArray_4;
	// System.Boolean Unity.Properties.Internal.RuntimeTypeInfoCache`1::IsEnum
	bool ___IsEnum_5;
	// System.Boolean Unity.Properties.Internal.RuntimeTypeInfoCache`1::IsEnumFlags
	bool ___IsEnumFlags_6;
	// System.Boolean Unity.Properties.Internal.RuntimeTypeInfoCache`1::IsNullable
	bool ___IsNullable_7;
	// System.Boolean Unity.Properties.Internal.RuntimeTypeInfoCache`1::IsObjectType
	bool ___IsObjectType_8;
	// System.Boolean Unity.Properties.Internal.RuntimeTypeInfoCache`1::IsStringType
	bool ___IsStringType_9;
	// System.Boolean Unity.Properties.Internal.RuntimeTypeInfoCache`1::IsContainerType
	bool ___IsContainerType_10;
	// System.Boolean Unity.Properties.Internal.RuntimeTypeInfoCache`1::CanBeNull
	bool ___CanBeNull_11;
	// System.Boolean Unity.Properties.Internal.RuntimeTypeInfoCache`1::IsNullableOrEnum
	bool ___IsNullableOrEnum_12;
	// System.Boolean Unity.Properties.Internal.RuntimeTypeInfoCache`1::IsPrimitiveOrString
	bool ___IsPrimitiveOrString_13;
	// System.Boolean Unity.Properties.Internal.RuntimeTypeInfoCache`1::IsAbstractOrInterface
	bool ___IsAbstractOrInterface_14;
	// System.Boolean Unity.Properties.Internal.RuntimeTypeInfoCache`1::IsLazyLoadReference
	bool ___IsLazyLoadReference_15;

public:
	inline static int32_t get_offset_of_IsValueType_0() { return static_cast<int32_t>(offsetof(RuntimeTypeInfoCache_1_tCD8F6087609BE80511DC89FA27BB42860F87EF26_StaticFields, ___IsValueType_0)); }
	inline bool get_IsValueType_0() const { return ___IsValueType_0; }
	inline bool* get_address_of_IsValueType_0() { return &___IsValueType_0; }
	inline void set_IsValueType_0(bool value)
	{
		___IsValueType_0 = value;
	}

	inline static int32_t get_offset_of_IsPrimitive_1() { return static_cast<int32_t>(offsetof(RuntimeTypeInfoCache_1_tCD8F6087609BE80511DC89FA27BB42860F87EF26_StaticFields, ___IsPrimitive_1)); }
	inline bool get_IsPrimitive_1() const { return ___IsPrimitive_1; }
	inline bool* get_address_of_IsPrimitive_1() { return &___IsPrimitive_1; }
	inline void set_IsPrimitive_1(bool value)
	{
		___IsPrimitive_1 = value;
	}

	inline static int32_t get_offset_of_IsInterface_2() { return static_cast<int32_t>(offsetof(RuntimeTypeInfoCache_1_tCD8F6087609BE80511DC89FA27BB42860F87EF26_StaticFields, ___IsInterface_2)); }
	inline bool get_IsInterface_2() const { return ___IsInterface_2; }
	inline bool* get_address_of_IsInterface_2() { return &___IsInterface_2; }
	inline void set_IsInterface_2(bool value)
	{
		___IsInterface_2 = value;
	}

	inline static int32_t get_offset_of_IsAbstract_3() { return static_cast<int32_t>(offsetof(RuntimeTypeInfoCache_1_tCD8F6087609BE80511DC89FA27BB42860F87EF26_StaticFields, ___IsAbstract_3)); }
	inline bool get_IsAbstract_3() const { return ___IsAbstract_3; }
	inline bool* get_address_of_IsAbstract_3() { return &___IsAbstract_3; }
	inline void set_IsAbstract_3(bool value)
	{
		___IsAbstract_3 = value;
	}

	inline static int32_t get_offset_of_IsArray_4() { return static_cast<int32_t>(offsetof(RuntimeTypeInfoCache_1_tCD8F6087609BE80511DC89FA27BB42860F87EF26_StaticFields, ___IsArray_4)); }
	inline bool get_IsArray_4() const { return ___IsArray_4; }
	inline bool* get_address_of_IsArray_4() { return &___IsArray_4; }
	inline void set_IsArray_4(bool value)
	{
		___IsArray_4 = value;
	}

	inline static int32_t get_offset_of_IsEnum_5() { return static_cast<int32_t>(offsetof(RuntimeTypeInfoCache_1_tCD8F6087609BE80511DC89FA27BB42860F87EF26_StaticFields, ___IsEnum_5)); }
	inline bool get_IsEnum_5() const { return ___IsEnum_5; }
	inline bool* get_address_of_IsEnum_5() { return &___IsEnum_5; }
	inline void set_IsEnum_5(bool value)
	{
		___IsEnum_5 = value;
	}

	inline static int32_t get_offset_of_IsEnumFlags_6() { return static_cast<int32_t>(offsetof(RuntimeTypeInfoCache_1_tCD8F6087609BE80511DC89FA27BB42860F87EF26_StaticFields, ___IsEnumFlags_6)); }
	inline bool get_IsEnumFlags_6() const { return ___IsEnumFlags_6; }
	inline bool* get_address_of_IsEnumFlags_6() { return &___IsEnumFlags_6; }
	inline void set_IsEnumFlags_6(bool value)
	{
		___IsEnumFlags_6 = value;
	}

	inline static int32_t get_offset_of_IsNullable_7() { return static_cast<int32_t>(offsetof(RuntimeTypeInfoCache_1_tCD8F6087609BE80511DC89FA27BB42860F87EF26_StaticFields, ___IsNullable_7)); }
	inline bool get_IsNullable_7() const { return ___IsNullable_7; }
	inline bool* get_address_of_IsNullable_7() { return &___IsNullable_7; }
	inline void set_IsNullable_7(bool value)
	{
		___IsNullable_7 = value;
	}

	inline static int32_t get_offset_of_IsObjectType_8() { return static_cast<int32_t>(offsetof(RuntimeTypeInfoCache_1_tCD8F6087609BE80511DC89FA27BB42860F87EF26_StaticFields, ___IsObjectType_8)); }
	inline bool get_IsObjectType_8() const { return ___IsObjectType_8; }
	inline bool* get_address_of_IsObjectType_8() { return &___IsObjectType_8; }
	inline void set_IsObjectType_8(bool value)
	{
		___IsObjectType_8 = value;
	}

	inline static int32_t get_offset_of_IsStringType_9() { return static_cast<int32_t>(offsetof(RuntimeTypeInfoCache_1_tCD8F6087609BE80511DC89FA27BB42860F87EF26_StaticFields, ___IsStringType_9)); }
	inline bool get_IsStringType_9() const { return ___IsStringType_9; }
	inline bool* get_address_of_IsStringType_9() { return &___IsStringType_9; }
	inline void set_IsStringType_9(bool value)
	{
		___IsStringType_9 = value;
	}

	inline static int32_t get_offset_of_IsContainerType_10() { return static_cast<int32_t>(offsetof(RuntimeTypeInfoCache_1_tCD8F6087609BE80511DC89FA27BB42860F87EF26_StaticFields, ___IsContainerType_10)); }
	inline bool get_IsContainerType_10() const { return ___IsContainerType_10; }
	inline bool* get_address_of_IsContainerType_10() { return &___IsContainerType_10; }
	inline void set_IsContainerType_10(bool value)
	{
		___IsContainerType_10 = value;
	}

	inline static int32_t get_offset_of_CanBeNull_11() { return static_cast<int32_t>(offsetof(RuntimeTypeInfoCache_1_tCD8F6087609BE80511DC89FA27BB42860F87EF26_StaticFields, ___CanBeNull_11)); }
	inline bool get_CanBeNull_11() const { return ___CanBeNull_11; }
	inline bool* get_address_of_CanBeNull_11() { return &___CanBeNull_11; }
	inline void set_CanBeNull_11(bool value)
	{
		___CanBeNull_11 = value;
	}

	inline static int32_t get_offset_of_IsNullableOrEnum_12() { return static_cast<int32_t>(offsetof(RuntimeTypeInfoCache_1_tCD8F6087609BE80511DC89FA27BB42860F87EF26_StaticFields, ___IsNullableOrEnum_12)); }
	inline bool get_IsNullableOrEnum_12() const { return ___IsNullableOrEnum_12; }
	inline bool* get_address_of_IsNullableOrEnum_12() { return &___IsNullableOrEnum_12; }
	inline void set_IsNullableOrEnum_12(bool value)
	{
		___IsNullableOrEnum_12 = value;
	}

	inline static int32_t get_offset_of_IsPrimitiveOrString_13() { return static_cast<int32_t>(offsetof(RuntimeTypeInfoCache_1_tCD8F6087609BE80511DC89FA27BB42860F87EF26_StaticFields, ___IsPrimitiveOrString_13)); }
	inline bool get_IsPrimitiveOrString_13() const { return ___IsPrimitiveOrString_13; }
	inline bool* get_address_of_IsPrimitiveOrString_13() { return &___IsPrimitiveOrString_13; }
	inline void set_IsPrimitiveOrString_13(bool value)
	{
		___IsPrimitiveOrString_13 = value;
	}

	inline static int32_t get_offset_of_IsAbstractOrInterface_14() { return static_cast<int32_t>(offsetof(RuntimeTypeInfoCache_1_tCD8F6087609BE80511DC89FA27BB42860F87EF26_StaticFields, ___IsAbstractOrInterface_14)); }
	inline bool get_IsAbstractOrInterface_14() const { return ___IsAbstractOrInterface_14; }
	inline bool* get_address_of_IsAbstractOrInterface_14() { return &___IsAbstractOrInterface_14; }
	inline void set_IsAbstractOrInterface_14(bool value)
	{
		___IsAbstractOrInterface_14 = value;
	}

	inline static int32_t get_offset_of_IsLazyLoadReference_15() { return static_cast<int32_t>(offsetof(RuntimeTypeInfoCache_1_tCD8F6087609BE80511DC89FA27BB42860F87EF26_StaticFields, ___IsLazyLoadReference_15)); }
	inline bool get_IsLazyLoadReference_15() const { return ___IsLazyLoadReference_15; }
	inline bool* get_address_of_IsLazyLoadReference_15() { return &___IsLazyLoadReference_15; }
	inline void set_IsLazyLoadReference_15(bool value)
	{
		___IsLazyLoadReference_15 = value;
	}
};


// Unity.Properties.Internal.RuntimeTypeInfoCache`1<System.SByte>
struct RuntimeTypeInfoCache_1_t3E32375AC17FC261A60528D693133C55E99BF752 
{
public:
	union
	{
		struct
		{
		};
		uint8_t RuntimeTypeInfoCache_1_t30A0A6BC09AD64184AFB882CF46291A815E10EDD__padding[1];
	};

public:
};

struct RuntimeTypeInfoCache_1_t3E32375AC17FC261A60528D693133C55E99BF752_StaticFields
{
public:
	// System.Boolean Unity.Properties.Internal.RuntimeTypeInfoCache`1::IsValueType
	bool ___IsValueType_0;
	// System.Boolean Unity.Properties.Internal.RuntimeTypeInfoCache`1::IsPrimitive
	bool ___IsPrimitive_1;
	// System.Boolean Unity.Properties.Internal.RuntimeTypeInfoCache`1::IsInterface
	bool ___IsInterface_2;
	// System.Boolean Unity.Properties.Internal.RuntimeTypeInfoCache`1::IsAbstract
	bool ___IsAbstract_3;
	// System.Boolean Unity.Properties.Internal.RuntimeTypeInfoCache`1::IsArray
	bool ___IsArray_4;
	// System.Boolean Unity.Properties.Internal.RuntimeTypeInfoCache`1::IsEnum
	bool ___IsEnum_5;
	// System.Boolean Unity.Properties.Internal.RuntimeTypeInfoCache`1::IsEnumFlags
	bool ___IsEnumFlags_6;
	// System.Boolean Unity.Properties.Internal.RuntimeTypeInfoCache`1::IsNullable
	bool ___IsNullable_7;
	// System.Boolean Unity.Properties.Internal.RuntimeTypeInfoCache`1::IsObjectType
	bool ___IsObjectType_8;
	// System.Boolean Unity.Properties.Internal.RuntimeTypeInfoCache`1::IsStringType
	bool ___IsStringType_9;
	// System.Boolean Unity.Properties.Internal.RuntimeTypeInfoCache`1::IsContainerType
	bool ___IsContainerType_10;
	// System.Boolean Unity.Properties.Internal.RuntimeTypeInfoCache`1::CanBeNull
	bool ___CanBeNull_11;
	// System.Boolean Unity.Properties.Internal.RuntimeTypeInfoCache`1::IsNullableOrEnum
	bool ___IsNullableOrEnum_12;
	// System.Boolean Unity.Properties.Internal.RuntimeTypeInfoCache`1::IsPrimitiveOrString
	bool ___IsPrimitiveOrString_13;
	// System.Boolean Unity.Properties.Internal.RuntimeTypeInfoCache`1::IsAbstractOrInterface
	bool ___IsAbstractOrInterface_14;
	// System.Boolean Unity.Properties.Internal.RuntimeTypeInfoCache`1::IsLazyLoadReference
	bool ___IsLazyLoadReference_15;

public:
	inline static int32_t get_offset_of_IsValueType_0() { return static_cast<int32_t>(offsetof(RuntimeTypeInfoCache_1_t3E32375AC17FC261A60528D693133C55E99BF752_StaticFields, ___IsValueType_0)); }
	inline bool get_IsValueType_0() const { return ___IsValueType_0; }
	inline bool* get_address_of_IsValueType_0() { return &___IsValueType_0; }
	inline void set_IsValueType_0(bool value)
	{
		___IsValueType_0 = value;
	}

	inline static int32_t get_offset_of_IsPrimitive_1() { return static_cast<int32_t>(offsetof(RuntimeTypeInfoCache_1_t3E32375AC17FC261A60528D693133C55E99BF752_StaticFields, ___IsPrimitive_1)); }
	inline bool get_IsPrimitive_1() const { return ___IsPrimitive_1; }
	inline bool* get_address_of_IsPrimitive_1() { return &___IsPrimitive_1; }
	inline void set_IsPrimitive_1(bool value)
	{
		___IsPrimitive_1 = value;
	}

	inline static int32_t get_offset_of_IsInterface_2() { return static_cast<int32_t>(offsetof(RuntimeTypeInfoCache_1_t3E32375AC17FC261A60528D693133C55E99BF752_StaticFields, ___IsInterface_2)); }
	inline bool get_IsInterface_2() const { return ___IsInterface_2; }
	inline bool* get_address_of_IsInterface_2() { return &___IsInterface_2; }
	inline void set_IsInterface_2(bool value)
	{
		___IsInterface_2 = value;
	}

	inline static int32_t get_offset_of_IsAbstract_3() { return static_cast<int32_t>(offsetof(RuntimeTypeInfoCache_1_t3E32375AC17FC261A60528D693133C55E99BF752_StaticFields, ___IsAbstract_3)); }
	inline bool get_IsAbstract_3() const { return ___IsAbstract_3; }
	inline bool* get_address_of_IsAbstract_3() { return &___IsAbstract_3; }
	inline void set_IsAbstract_3(bool value)
	{
		___IsAbstract_3 = value;
	}

	inline static int32_t get_offset_of_IsArray_4() { return static_cast<int32_t>(offsetof(RuntimeTypeInfoCache_1_t3E32375AC17FC261A60528D693133C55E99BF752_StaticFields, ___IsArray_4)); }
	inline bool get_IsArray_4() const { return ___IsArray_4; }
	inline bool* get_address_of_IsArray_4() { return &___IsArray_4; }
	inline void set_IsArray_4(bool value)
	{
		___IsArray_4 = value;
	}

	inline static int32_t get_offset_of_IsEnum_5() { return static_cast<int32_t>(offsetof(RuntimeTypeInfoCache_1_t3E32375AC17FC261A60528D693133C55E99BF752_StaticFields, ___IsEnum_5)); }
	inline bool get_IsEnum_5() const { return ___IsEnum_5; }
	inline bool* get_address_of_IsEnum_5() { return &___IsEnum_5; }
	inline void set_IsEnum_5(bool value)
	{
		___IsEnum_5 = value;
	}

	inline static int32_t get_offset_of_IsEnumFlags_6() { return static_cast<int32_t>(offsetof(RuntimeTypeInfoCache_1_t3E32375AC17FC261A60528D693133C55E99BF752_StaticFields, ___IsEnumFlags_6)); }
	inline bool get_IsEnumFlags_6() const { return ___IsEnumFlags_6; }
	inline bool* get_address_of_IsEnumFlags_6() { return &___IsEnumFlags_6; }
	inline void set_IsEnumFlags_6(bool value)
	{
		___IsEnumFlags_6 = value;
	}

	inline static int32_t get_offset_of_IsNullable_7() { return static_cast<int32_t>(offsetof(RuntimeTypeInfoCache_1_t3E32375AC17FC261A60528D693133C55E99BF752_StaticFields, ___IsNullable_7)); }
	inline bool get_IsNullable_7() const { return ___IsNullable_7; }
	inline bool* get_address_of_IsNullable_7() { return &___IsNullable_7; }
	inline void set_IsNullable_7(bool value)
	{
		___IsNullable_7 = value;
	}

	inline static int32_t get_offset_of_IsObjectType_8() { return static_cast<int32_t>(offsetof(RuntimeTypeInfoCache_1_t3E32375AC17FC261A60528D693133C55E99BF752_StaticFields, ___IsObjectType_8)); }
	inline bool get_IsObjectType_8() const { return ___IsObjectType_8; }
	inline bool* get_address_of_IsObjectType_8() { return &___IsObjectType_8; }
	inline void set_IsObjectType_8(bool value)
	{
		___IsObjectType_8 = value;
	}

	inline static int32_t get_offset_of_IsStringType_9() { return static_cast<int32_t>(offsetof(RuntimeTypeInfoCache_1_t3E32375AC17FC261A60528D693133C55E99BF752_StaticFields, ___IsStringType_9)); }
	inline bool get_IsStringType_9() const { return ___IsStringType_9; }
	inline bool* get_address_of_IsStringType_9() { return &___IsStringType_9; }
	inline void set_IsStringType_9(bool value)
	{
		___IsStringType_9 = value;
	}

	inline static int32_t get_offset_of_IsContainerType_10() { return static_cast<int32_t>(offsetof(RuntimeTypeInfoCache_1_t3E32375AC17FC261A60528D693133C55E99BF752_StaticFields, ___IsContainerType_10)); }
	inline bool get_IsContainerType_10() const { return ___IsContainerType_10; }
	inline bool* get_address_of_IsContainerType_10() { return &___IsContainerType_10; }
	inline void set_IsContainerType_10(bool value)
	{
		___IsContainerType_10 = value;
	}

	inline static int32_t get_offset_of_CanBeNull_11() { return static_cast<int32_t>(offsetof(RuntimeTypeInfoCache_1_t3E32375AC17FC261A60528D693133C55E99BF752_StaticFields, ___CanBeNull_11)); }
	inline bool get_CanBeNull_11() const { return ___CanBeNull_11; }
	inline bool* get_address_of_CanBeNull_11() { return &___CanBeNull_11; }
	inline void set_CanBeNull_11(bool value)
	{
		___CanBeNull_11 = value;
	}

	inline static int32_t get_offset_of_IsNullableOrEnum_12() { return static_cast<int32_t>(offsetof(RuntimeTypeInfoCache_1_t3E32375AC17FC261A60528D693133C55E99BF752_StaticFields, ___IsNullableOrEnum_12)); }
	inline bool get_IsNullableOrEnum_12() const { return ___IsNullableOrEnum_12; }
	inline bool* get_address_of_IsNullableOrEnum_12() { return &___IsNullableOrEnum_12; }
	inline void set_IsNullableOrEnum_12(bool value)
	{
		___IsNullableOrEnum_12 = value;
	}

	inline static int32_t get_offset_of_IsPrimitiveOrString_13() { return static_cast<int32_t>(offsetof(RuntimeTypeInfoCache_1_t3E32375AC17FC261A60528D693133C55E99BF752_StaticFields, ___IsPrimitiveOrString_13)); }
	inline bool get_IsPrimitiveOrString_13() const { return ___IsPrimitiveOrString_13; }
	inline bool* get_address_of_IsPrimitiveOrString_13() { return &___IsPrimitiveOrString_13; }
	inline void set_IsPrimitiveOrString_13(bool value)
	{
		___IsPrimitiveOrString_13 = value;
	}

	inline static int32_t get_offset_of_IsAbstractOrInterface_14() { return static_cast<int32_t>(offsetof(RuntimeTypeInfoCache_1_t3E32375AC17FC261A60528D693133C55E99BF752_StaticFields, ___IsAbstractOrInterface_14)); }
	inline bool get_IsAbstractOrInterface_14() const { return ___IsAbstractOrInterface_14; }
	inline bool* get_address_of_IsAbstractOrInterface_14() { return &___IsAbstractOrInterface_14; }
	inline void set_IsAbstractOrInterface_14(bool value)
	{
		___IsAbstractOrInterface_14 = value;
	}

	inline static int32_t get_offset_of_IsLazyLoadReference_15() { return static_cast<int32_t>(offsetof(RuntimeTypeInfoCache_1_t3E32375AC17FC261A60528D693133C55E99BF752_StaticFields, ___IsLazyLoadReference_15)); }
	inline bool get_IsLazyLoadReference_15() const { return ___IsLazyLoadReference_15; }
	inline bool* get_address_of_IsLazyLoadReference_15() { return &___IsLazyLoadReference_15; }
	inline void set_IsLazyLoadReference_15(bool value)
	{
		___IsLazyLoadReference_15 = value;
	}
};


// Unity.Properties.Internal.RuntimeTypeInfoCache`1<System.Single>
struct RuntimeTypeInfoCache_1_tA9FD23B4AECF85CEF1CA99871D7A54952239E24A 
{
public:
	union
	{
		struct
		{
		};
		uint8_t RuntimeTypeInfoCache_1_t30A0A6BC09AD64184AFB882CF46291A815E10EDD__padding[1];
	};

public:
};

struct RuntimeTypeInfoCache_1_tA9FD23B4AECF85CEF1CA99871D7A54952239E24A_StaticFields
{
public:
	// System.Boolean Unity.Properties.Internal.RuntimeTypeInfoCache`1::IsValueType
	bool ___IsValueType_0;
	// System.Boolean Unity.Properties.Internal.RuntimeTypeInfoCache`1::IsPrimitive
	bool ___IsPrimitive_1;
	// System.Boolean Unity.Properties.Internal.RuntimeTypeInfoCache`1::IsInterface
	bool ___IsInterface_2;
	// System.Boolean Unity.Properties.Internal.RuntimeTypeInfoCache`1::IsAbstract
	bool ___IsAbstract_3;
	// System.Boolean Unity.Properties.Internal.RuntimeTypeInfoCache`1::IsArray
	bool ___IsArray_4;
	// System.Boolean Unity.Properties.Internal.RuntimeTypeInfoCache`1::IsEnum
	bool ___IsEnum_5;
	// System.Boolean Unity.Properties.Internal.RuntimeTypeInfoCache`1::IsEnumFlags
	bool ___IsEnumFlags_6;
	// System.Boolean Unity.Properties.Internal.RuntimeTypeInfoCache`1::IsNullable
	bool ___IsNullable_7;
	// System.Boolean Unity.Properties.Internal.RuntimeTypeInfoCache`1::IsObjectType
	bool ___IsObjectType_8;
	// System.Boolean Unity.Properties.Internal.RuntimeTypeInfoCache`1::IsStringType
	bool ___IsStringType_9;
	// System.Boolean Unity.Properties.Internal.RuntimeTypeInfoCache`1::IsContainerType
	bool ___IsContainerType_10;
	// System.Boolean Unity.Properties.Internal.RuntimeTypeInfoCache`1::CanBeNull
	bool ___CanBeNull_11;
	// System.Boolean Unity.Properties.Internal.RuntimeTypeInfoCache`1::IsNullableOrEnum
	bool ___IsNullableOrEnum_12;
	// System.Boolean Unity.Properties.Internal.RuntimeTypeInfoCache`1::IsPrimitiveOrString
	bool ___IsPrimitiveOrString_13;
	// System.Boolean Unity.Properties.Internal.RuntimeTypeInfoCache`1::IsAbstractOrInterface
	bool ___IsAbstractOrInterface_14;
	// System.Boolean Unity.Properties.Internal.RuntimeTypeInfoCache`1::IsLazyLoadReference
	bool ___IsLazyLoadReference_15;

public:
	inline static int32_t get_offset_of_IsValueType_0() { return static_cast<int32_t>(offsetof(RuntimeTypeInfoCache_1_tA9FD23B4AECF85CEF1CA99871D7A54952239E24A_StaticFields, ___IsValueType_0)); }
	inline bool get_IsValueType_0() const { return ___IsValueType_0; }
	inline bool* get_address_of_IsValueType_0() { return &___IsValueType_0; }
	inline void set_IsValueType_0(bool value)
	{
		___IsValueType_0 = value;
	}

	inline static int32_t get_offset_of_IsPrimitive_1() { return static_cast<int32_t>(offsetof(RuntimeTypeInfoCache_1_tA9FD23B4AECF85CEF1CA99871D7A54952239E24A_StaticFields, ___IsPrimitive_1)); }
	inline bool get_IsPrimitive_1() const { return ___IsPrimitive_1; }
	inline bool* get_address_of_IsPrimitive_1() { return &___IsPrimitive_1; }
	inline void set_IsPrimitive_1(bool value)
	{
		___IsPrimitive_1 = value;
	}

	inline static int32_t get_offset_of_IsInterface_2() { return static_cast<int32_t>(offsetof(RuntimeTypeInfoCache_1_tA9FD23B4AECF85CEF1CA99871D7A54952239E24A_StaticFields, ___IsInterface_2)); }
	inline bool get_IsInterface_2() const { return ___IsInterface_2; }
	inline bool* get_address_of_IsInterface_2() { return &___IsInterface_2; }
	inline void set_IsInterface_2(bool value)
	{
		___IsInterface_2 = value;
	}

	inline static int32_t get_offset_of_IsAbstract_3() { return static_cast<int32_t>(offsetof(RuntimeTypeInfoCache_1_tA9FD23B4AECF85CEF1CA99871D7A54952239E24A_StaticFields, ___IsAbstract_3)); }
	inline bool get_IsAbstract_3() const { return ___IsAbstract_3; }
	inline bool* get_address_of_IsAbstract_3() { return &___IsAbstract_3; }
	inline void set_IsAbstract_3(bool value)
	{
		___IsAbstract_3 = value;
	}

	inline static int32_t get_offset_of_IsArray_4() { return static_cast<int32_t>(offsetof(RuntimeTypeInfoCache_1_tA9FD23B4AECF85CEF1CA99871D7A54952239E24A_StaticFields, ___IsArray_4)); }
	inline bool get_IsArray_4() const { return ___IsArray_4; }
	inline bool* get_address_of_IsArray_4() { return &___IsArray_4; }
	inline void set_IsArray_4(bool value)
	{
		___IsArray_4 = value;
	}

	inline static int32_t get_offset_of_IsEnum_5() { return static_cast<int32_t>(offsetof(RuntimeTypeInfoCache_1_tA9FD23B4AECF85CEF1CA99871D7A54952239E24A_StaticFields, ___IsEnum_5)); }
	inline bool get_IsEnum_5() const { return ___IsEnum_5; }
	inline bool* get_address_of_IsEnum_5() { return &___IsEnum_5; }
	inline void set_IsEnum_5(bool value)
	{
		___IsEnum_5 = value;
	}

	inline static int32_t get_offset_of_IsEnumFlags_6() { return static_cast<int32_t>(offsetof(RuntimeTypeInfoCache_1_tA9FD23B4AECF85CEF1CA99871D7A54952239E24A_StaticFields, ___IsEnumFlags_6)); }
	inline bool get_IsEnumFlags_6() const { return ___IsEnumFlags_6; }
	inline bool* get_address_of_IsEnumFlags_6() { return &___IsEnumFlags_6; }
	inline void set_IsEnumFlags_6(bool value)
	{
		___IsEnumFlags_6 = value;
	}

	inline static int32_t get_offset_of_IsNullable_7() { return static_cast<int32_t>(offsetof(RuntimeTypeInfoCache_1_tA9FD23B4AECF85CEF1CA99871D7A54952239E24A_StaticFields, ___IsNullable_7)); }
	inline bool get_IsNullable_7() const { return ___IsNullable_7; }
	inline bool* get_address_of_IsNullable_7() { return &___IsNullable_7; }
	inline void set_IsNullable_7(bool value)
	{
		___IsNullable_7 = value;
	}

	inline static int32_t get_offset_of_IsObjectType_8() { return static_cast<int32_t>(offsetof(RuntimeTypeInfoCache_1_tA9FD23B4AECF85CEF1CA99871D7A54952239E24A_StaticFields, ___IsObjectType_8)); }
	inline bool get_IsObjectType_8() const { return ___IsObjectType_8; }
	inline bool* get_address_of_IsObjectType_8() { return &___IsObjectType_8; }
	inline void set_IsObjectType_8(bool value)
	{
		___IsObjectType_8 = value;
	}

	inline static int32_t get_offset_of_IsStringType_9() { return static_cast<int32_t>(offsetof(RuntimeTypeInfoCache_1_tA9FD23B4AECF85CEF1CA99871D7A54952239E24A_StaticFields, ___IsStringType_9)); }
	inline bool get_IsStringType_9() const { return ___IsStringType_9; }
	inline bool* get_address_of_IsStringType_9() { return &___IsStringType_9; }
	inline void set_IsStringType_9(bool value)
	{
		___IsStringType_9 = value;
	}

	inline static int32_t get_offset_of_IsContainerType_10() { return static_cast<int32_t>(offsetof(RuntimeTypeInfoCache_1_tA9FD23B4AECF85CEF1CA99871D7A54952239E24A_StaticFields, ___IsContainerType_10)); }
	inline bool get_IsContainerType_10() const { return ___IsContainerType_10; }
	inline bool* get_address_of_IsContainerType_10() { return &___IsContainerType_10; }
	inline void set_IsContainerType_10(bool value)
	{
		___IsContainerType_10 = value;
	}

	inline static int32_t get_offset_of_CanBeNull_11() { return static_cast<int32_t>(offsetof(RuntimeTypeInfoCache_1_tA9FD23B4AECF85CEF1CA99871D7A54952239E24A_StaticFields, ___CanBeNull_11)); }
	inline bool get_CanBeNull_11() const { return ___CanBeNull_11; }
	inline bool* get_address_of_CanBeNull_11() { return &___CanBeNull_11; }
	inline void set_CanBeNull_11(bool value)
	{
		___CanBeNull_11 = value;
	}

	inline static int32_t get_offset_of_IsNullableOrEnum_12() { return static_cast<int32_t>(offsetof(RuntimeTypeInfoCache_1_tA9FD23B4AECF85CEF1CA99871D7A54952239E24A_StaticFields, ___IsNullableOrEnum_12)); }
	inline bool get_IsNullableOrEnum_12() const { return ___IsNullableOrEnum_12; }
	inline bool* get_address_of_IsNullableOrEnum_12() { return &___IsNullableOrEnum_12; }
	inline void set_IsNullableOrEnum_12(bool value)
	{
		___IsNullableOrEnum_12 = value;
	}

	inline static int32_t get_offset_of_IsPrimitiveOrString_13() { return static_cast<int32_t>(offsetof(RuntimeTypeInfoCache_1_tA9FD23B4AECF85CEF1CA99871D7A54952239E24A_StaticFields, ___IsPrimitiveOrString_13)); }
	inline bool get_IsPrimitiveOrString_13() const { return ___IsPrimitiveOrString_13; }
	inline bool* get_address_of_IsPrimitiveOrString_13() { return &___IsPrimitiveOrString_13; }
	inline void set_IsPrimitiveOrString_13(bool value)
	{
		___IsPrimitiveOrString_13 = value;
	}

	inline static int32_t get_offset_of_IsAbstractOrInterface_14() { return static_cast<int32_t>(offsetof(RuntimeTypeInfoCache_1_tA9FD23B4AECF85CEF1CA99871D7A54952239E24A_StaticFields, ___IsAbstractOrInterface_14)); }
	inline bool get_IsAbstractOrInterface_14() const { return ___IsAbstractOrInterface_14; }
	inline bool* get_address_of_IsAbstractOrInterface_14() { return &___IsAbstractOrInterface_14; }
	inline void set_IsAbstractOrInterface_14(bool value)
	{
		___IsAbstractOrInterface_14 = value;
	}

	inline static int32_t get_offset_of_IsLazyLoadReference_15() { return static_cast<int32_t>(offsetof(RuntimeTypeInfoCache_1_tA9FD23B4AECF85CEF1CA99871D7A54952239E24A_StaticFields, ___IsLazyLoadReference_15)); }
	inline bool get_IsLazyLoadReference_15() const { return ___IsLazyLoadReference_15; }
	inline bool* get_address_of_IsLazyLoadReference_15() { return &___IsLazyLoadReference_15; }
	inline void set_IsLazyLoadReference_15(bool value)
	{
		___IsLazyLoadReference_15 = value;
	}
};


// Unity.Properties.Internal.RuntimeTypeInfoCache`1<System.UInt16>
struct RuntimeTypeInfoCache_1_t87B88DEC770D4A09F7ABB17948676B0508444464 
{
public:
	union
	{
		struct
		{
		};
		uint8_t RuntimeTypeInfoCache_1_t30A0A6BC09AD64184AFB882CF46291A815E10EDD__padding[1];
	};

public:
};

struct RuntimeTypeInfoCache_1_t87B88DEC770D4A09F7ABB17948676B0508444464_StaticFields
{
public:
	// System.Boolean Unity.Properties.Internal.RuntimeTypeInfoCache`1::IsValueType
	bool ___IsValueType_0;
	// System.Boolean Unity.Properties.Internal.RuntimeTypeInfoCache`1::IsPrimitive
	bool ___IsPrimitive_1;
	// System.Boolean Unity.Properties.Internal.RuntimeTypeInfoCache`1::IsInterface
	bool ___IsInterface_2;
	// System.Boolean Unity.Properties.Internal.RuntimeTypeInfoCache`1::IsAbstract
	bool ___IsAbstract_3;
	// System.Boolean Unity.Properties.Internal.RuntimeTypeInfoCache`1::IsArray
	bool ___IsArray_4;
	// System.Boolean Unity.Properties.Internal.RuntimeTypeInfoCache`1::IsEnum
	bool ___IsEnum_5;
	// System.Boolean Unity.Properties.Internal.RuntimeTypeInfoCache`1::IsEnumFlags
	bool ___IsEnumFlags_6;
	// System.Boolean Unity.Properties.Internal.RuntimeTypeInfoCache`1::IsNullable
	bool ___IsNullable_7;
	// System.Boolean Unity.Properties.Internal.RuntimeTypeInfoCache`1::IsObjectType
	bool ___IsObjectType_8;
	// System.Boolean Unity.Properties.Internal.RuntimeTypeInfoCache`1::IsStringType
	bool ___IsStringType_9;
	// System.Boolean Unity.Properties.Internal.RuntimeTypeInfoCache`1::IsContainerType
	bool ___IsContainerType_10;
	// System.Boolean Unity.Properties.Internal.RuntimeTypeInfoCache`1::CanBeNull
	bool ___CanBeNull_11;
	// System.Boolean Unity.Properties.Internal.RuntimeTypeInfoCache`1::IsNullableOrEnum
	bool ___IsNullableOrEnum_12;
	// System.Boolean Unity.Properties.Internal.RuntimeTypeInfoCache`1::IsPrimitiveOrString
	bool ___IsPrimitiveOrString_13;
	// System.Boolean Unity.Properties.Internal.RuntimeTypeInfoCache`1::IsAbstractOrInterface
	bool ___IsAbstractOrInterface_14;
	// System.Boolean Unity.Properties.Internal.RuntimeTypeInfoCache`1::IsLazyLoadReference
	bool ___IsLazyLoadReference_15;

public:
	inline static int32_t get_offset_of_IsValueType_0() { return static_cast<int32_t>(offsetof(RuntimeTypeInfoCache_1_t87B88DEC770D4A09F7ABB17948676B0508444464_StaticFields, ___IsValueType_0)); }
	inline bool get_IsValueType_0() const { return ___IsValueType_0; }
	inline bool* get_address_of_IsValueType_0() { return &___IsValueType_0; }
	inline void set_IsValueType_0(bool value)
	{
		___IsValueType_0 = value;
	}

	inline static int32_t get_offset_of_IsPrimitive_1() { return static_cast<int32_t>(offsetof(RuntimeTypeInfoCache_1_t87B88DEC770D4A09F7ABB17948676B0508444464_StaticFields, ___IsPrimitive_1)); }
	inline bool get_IsPrimitive_1() const { return ___IsPrimitive_1; }
	inline bool* get_address_of_IsPrimitive_1() { return &___IsPrimitive_1; }
	inline void set_IsPrimitive_1(bool value)
	{
		___IsPrimitive_1 = value;
	}

	inline static int32_t get_offset_of_IsInterface_2() { return static_cast<int32_t>(offsetof(RuntimeTypeInfoCache_1_t87B88DEC770D4A09F7ABB17948676B0508444464_StaticFields, ___IsInterface_2)); }
	inline bool get_IsInterface_2() const { return ___IsInterface_2; }
	inline bool* get_address_of_IsInterface_2() { return &___IsInterface_2; }
	inline void set_IsInterface_2(bool value)
	{
		___IsInterface_2 = value;
	}

	inline static int32_t get_offset_of_IsAbstract_3() { return static_cast<int32_t>(offsetof(RuntimeTypeInfoCache_1_t87B88DEC770D4A09F7ABB17948676B0508444464_StaticFields, ___IsAbstract_3)); }
	inline bool get_IsAbstract_3() const { return ___IsAbstract_3; }
	inline bool* get_address_of_IsAbstract_3() { return &___IsAbstract_3; }
	inline void set_IsAbstract_3(bool value)
	{
		___IsAbstract_3 = value;
	}

	inline static int32_t get_offset_of_IsArray_4() { return static_cast<int32_t>(offsetof(RuntimeTypeInfoCache_1_t87B88DEC770D4A09F7ABB17948676B0508444464_StaticFields, ___IsArray_4)); }
	inline bool get_IsArray_4() const { return ___IsArray_4; }
	inline bool* get_address_of_IsArray_4() { return &___IsArray_4; }
	inline void set_IsArray_4(bool value)
	{
		___IsArray_4 = value;
	}

	inline static int32_t get_offset_of_IsEnum_5() { return static_cast<int32_t>(offsetof(RuntimeTypeInfoCache_1_t87B88DEC770D4A09F7ABB17948676B0508444464_StaticFields, ___IsEnum_5)); }
	inline bool get_IsEnum_5() const { return ___IsEnum_5; }
	inline bool* get_address_of_IsEnum_5() { return &___IsEnum_5; }
	inline void set_IsEnum_5(bool value)
	{
		___IsEnum_5 = value;
	}

	inline static int32_t get_offset_of_IsEnumFlags_6() { return static_cast<int32_t>(offsetof(RuntimeTypeInfoCache_1_t87B88DEC770D4A09F7ABB17948676B0508444464_StaticFields, ___IsEnumFlags_6)); }
	inline bool get_IsEnumFlags_6() const { return ___IsEnumFlags_6; }
	inline bool* get_address_of_IsEnumFlags_6() { return &___IsEnumFlags_6; }
	inline void set_IsEnumFlags_6(bool value)
	{
		___IsEnumFlags_6 = value;
	}

	inline static int32_t get_offset_of_IsNullable_7() { return static_cast<int32_t>(offsetof(RuntimeTypeInfoCache_1_t87B88DEC770D4A09F7ABB17948676B0508444464_StaticFields, ___IsNullable_7)); }
	inline bool get_IsNullable_7() const { return ___IsNullable_7; }
	inline bool* get_address_of_IsNullable_7() { return &___IsNullable_7; }
	inline void set_IsNullable_7(bool value)
	{
		___IsNullable_7 = value;
	}

	inline static int32_t get_offset_of_IsObjectType_8() { return static_cast<int32_t>(offsetof(RuntimeTypeInfoCache_1_t87B88DEC770D4A09F7ABB17948676B0508444464_StaticFields, ___IsObjectType_8)); }
	inline bool get_IsObjectType_8() const { return ___IsObjectType_8; }
	inline bool* get_address_of_IsObjectType_8() { return &___IsObjectType_8; }
	inline void set_IsObjectType_8(bool value)
	{
		___IsObjectType_8 = value;
	}

	inline static int32_t get_offset_of_IsStringType_9() { return static_cast<int32_t>(offsetof(RuntimeTypeInfoCache_1_t87B88DEC770D4A09F7ABB17948676B0508444464_StaticFields, ___IsStringType_9)); }
	inline bool get_IsStringType_9() const { return ___IsStringType_9; }
	inline bool* get_address_of_IsStringType_9() { return &___IsStringType_9; }
	inline void set_IsStringType_9(bool value)
	{
		___IsStringType_9 = value;
	}

	inline static int32_t get_offset_of_IsContainerType_10() { return static_cast<int32_t>(offsetof(RuntimeTypeInfoCache_1_t87B88DEC770D4A09F7ABB17948676B0508444464_StaticFields, ___IsContainerType_10)); }
	inline bool get_IsContainerType_10() const { return ___IsContainerType_10; }
	inline bool* get_address_of_IsContainerType_10() { return &___IsContainerType_10; }
	inline void set_IsContainerType_10(bool value)
	{
		___IsContainerType_10 = value;
	}

	inline static int32_t get_offset_of_CanBeNull_11() { return static_cast<int32_t>(offsetof(RuntimeTypeInfoCache_1_t87B88DEC770D4A09F7ABB17948676B0508444464_StaticFields, ___CanBeNull_11)); }
	inline bool get_CanBeNull_11() const { return ___CanBeNull_11; }
	inline bool* get_address_of_CanBeNull_11() { return &___CanBeNull_11; }
	inline void set_CanBeNull_11(bool value)
	{
		___CanBeNull_11 = value;
	}

	inline static int32_t get_offset_of_IsNullableOrEnum_12() { return static_cast<int32_t>(offsetof(RuntimeTypeInfoCache_1_t87B88DEC770D4A09F7ABB17948676B0508444464_StaticFields, ___IsNullableOrEnum_12)); }
	inline bool get_IsNullableOrEnum_12() const { return ___IsNullableOrEnum_12; }
	inline bool* get_address_of_IsNullableOrEnum_12() { return &___IsNullableOrEnum_12; }
	inline void set_IsNullableOrEnum_12(bool value)
	{
		___IsNullableOrEnum_12 = value;
	}

	inline static int32_t get_offset_of_IsPrimitiveOrString_13() { return static_cast<int32_t>(offsetof(RuntimeTypeInfoCache_1_t87B88DEC770D4A09F7ABB17948676B0508444464_StaticFields, ___IsPrimitiveOrString_13)); }
	inline bool get_IsPrimitiveOrString_13() const { return ___IsPrimitiveOrString_13; }
	inline bool* get_address_of_IsPrimitiveOrString_13() { return &___IsPrimitiveOrString_13; }
	inline void set_IsPrimitiveOrString_13(bool value)
	{
		___IsPrimitiveOrString_13 = value;
	}

	inline static int32_t get_offset_of_IsAbstractOrInterface_14() { return static_cast<int32_t>(offsetof(RuntimeTypeInfoCache_1_t87B88DEC770D4A09F7ABB17948676B0508444464_StaticFields, ___IsAbstractOrInterface_14)); }
	inline bool get_IsAbstractOrInterface_14() const { return ___IsAbstractOrInterface_14; }
	inline bool* get_address_of_IsAbstractOrInterface_14() { return &___IsAbstractOrInterface_14; }
	inline void set_IsAbstractOrInterface_14(bool value)
	{
		___IsAbstractOrInterface_14 = value;
	}

	inline static int32_t get_offset_of_IsLazyLoadReference_15() { return static_cast<int32_t>(offsetof(RuntimeTypeInfoCache_1_t87B88DEC770D4A09F7ABB17948676B0508444464_StaticFields, ___IsLazyLoadReference_15)); }
	inline bool get_IsLazyLoadReference_15() const { return ___IsLazyLoadReference_15; }
	inline bool* get_address_of_IsLazyLoadReference_15() { return &___IsLazyLoadReference_15; }
	inline void set_IsLazyLoadReference_15(bool value)
	{
		___IsLazyLoadReference_15 = value;
	}
};


// Unity.Properties.Internal.RuntimeTypeInfoCache`1<System.UInt32>
struct RuntimeTypeInfoCache_1_t81281AE3AA18B64964EF639A13EC764ADCB87A74 
{
public:
	union
	{
		struct
		{
		};
		uint8_t RuntimeTypeInfoCache_1_t30A0A6BC09AD64184AFB882CF46291A815E10EDD__padding[1];
	};

public:
};

struct RuntimeTypeInfoCache_1_t81281AE3AA18B64964EF639A13EC764ADCB87A74_StaticFields
{
public:
	// System.Boolean Unity.Properties.Internal.RuntimeTypeInfoCache`1::IsValueType
	bool ___IsValueType_0;
	// System.Boolean Unity.Properties.Internal.RuntimeTypeInfoCache`1::IsPrimitive
	bool ___IsPrimitive_1;
	// System.Boolean Unity.Properties.Internal.RuntimeTypeInfoCache`1::IsInterface
	bool ___IsInterface_2;
	// System.Boolean Unity.Properties.Internal.RuntimeTypeInfoCache`1::IsAbstract
	bool ___IsAbstract_3;
	// System.Boolean Unity.Properties.Internal.RuntimeTypeInfoCache`1::IsArray
	bool ___IsArray_4;
	// System.Boolean Unity.Properties.Internal.RuntimeTypeInfoCache`1::IsEnum
	bool ___IsEnum_5;
	// System.Boolean Unity.Properties.Internal.RuntimeTypeInfoCache`1::IsEnumFlags
	bool ___IsEnumFlags_6;
	// System.Boolean Unity.Properties.Internal.RuntimeTypeInfoCache`1::IsNullable
	bool ___IsNullable_7;
	// System.Boolean Unity.Properties.Internal.RuntimeTypeInfoCache`1::IsObjectType
	bool ___IsObjectType_8;
	// System.Boolean Unity.Properties.Internal.RuntimeTypeInfoCache`1::IsStringType
	bool ___IsStringType_9;
	// System.Boolean Unity.Properties.Internal.RuntimeTypeInfoCache`1::IsContainerType
	bool ___IsContainerType_10;
	// System.Boolean Unity.Properties.Internal.RuntimeTypeInfoCache`1::CanBeNull
	bool ___CanBeNull_11;
	// System.Boolean Unity.Properties.Internal.RuntimeTypeInfoCache`1::IsNullableOrEnum
	bool ___IsNullableOrEnum_12;
	// System.Boolean Unity.Properties.Internal.RuntimeTypeInfoCache`1::IsPrimitiveOrString
	bool ___IsPrimitiveOrString_13;
	// System.Boolean Unity.Properties.Internal.RuntimeTypeInfoCache`1::IsAbstractOrInterface
	bool ___IsAbstractOrInterface_14;
	// System.Boolean Unity.Properties.Internal.RuntimeTypeInfoCache`1::IsLazyLoadReference
	bool ___IsLazyLoadReference_15;

public:
	inline static int32_t get_offset_of_IsValueType_0() { return static_cast<int32_t>(offsetof(RuntimeTypeInfoCache_1_t81281AE3AA18B64964EF639A13EC764ADCB87A74_StaticFields, ___IsValueType_0)); }
	inline bool get_IsValueType_0() const { return ___IsValueType_0; }
	inline bool* get_address_of_IsValueType_0() { return &___IsValueType_0; }
	inline void set_IsValueType_0(bool value)
	{
		___IsValueType_0 = value;
	}

	inline static int32_t get_offset_of_IsPrimitive_1() { return static_cast<int32_t>(offsetof(RuntimeTypeInfoCache_1_t81281AE3AA18B64964EF639A13EC764ADCB87A74_StaticFields, ___IsPrimitive_1)); }
	inline bool get_IsPrimitive_1() const { return ___IsPrimitive_1; }
	inline bool* get_address_of_IsPrimitive_1() { return &___IsPrimitive_1; }
	inline void set_IsPrimitive_1(bool value)
	{
		___IsPrimitive_1 = value;
	}

	inline static int32_t get_offset_of_IsInterface_2() { return static_cast<int32_t>(offsetof(RuntimeTypeInfoCache_1_t81281AE3AA18B64964EF639A13EC764ADCB87A74_StaticFields, ___IsInterface_2)); }
	inline bool get_IsInterface_2() const { return ___IsInterface_2; }
	inline bool* get_address_of_IsInterface_2() { return &___IsInterface_2; }
	inline void set_IsInterface_2(bool value)
	{
		___IsInterface_2 = value;
	}

	inline static int32_t get_offset_of_IsAbstract_3() { return static_cast<int32_t>(offsetof(RuntimeTypeInfoCache_1_t81281AE3AA18B64964EF639A13EC764ADCB87A74_StaticFields, ___IsAbstract_3)); }
	inline bool get_IsAbstract_3() const { return ___IsAbstract_3; }
	inline bool* get_address_of_IsAbstract_3() { return &___IsAbstract_3; }
	inline void set_IsAbstract_3(bool value)
	{
		___IsAbstract_3 = value;
	}

	inline static int32_t get_offset_of_IsArray_4() { return static_cast<int32_t>(offsetof(RuntimeTypeInfoCache_1_t81281AE3AA18B64964EF639A13EC764ADCB87A74_StaticFields, ___IsArray_4)); }
	inline bool get_IsArray_4() const { return ___IsArray_4; }
	inline bool* get_address_of_IsArray_4() { return &___IsArray_4; }
	inline void set_IsArray_4(bool value)
	{
		___IsArray_4 = value;
	}

	inline static int32_t get_offset_of_IsEnum_5() { return static_cast<int32_t>(offsetof(RuntimeTypeInfoCache_1_t81281AE3AA18B64964EF639A13EC764ADCB87A74_StaticFields, ___IsEnum_5)); }
	inline bool get_IsEnum_5() const { return ___IsEnum_5; }
	inline bool* get_address_of_IsEnum_5() { return &___IsEnum_5; }
	inline void set_IsEnum_5(bool value)
	{
		___IsEnum_5 = value;
	}

	inline static int32_t get_offset_of_IsEnumFlags_6() { return static_cast<int32_t>(offsetof(RuntimeTypeInfoCache_1_t81281AE3AA18B64964EF639A13EC764ADCB87A74_StaticFields, ___IsEnumFlags_6)); }
	inline bool get_IsEnumFlags_6() const { return ___IsEnumFlags_6; }
	inline bool* get_address_of_IsEnumFlags_6() { return &___IsEnumFlags_6; }
	inline void set_IsEnumFlags_6(bool value)
	{
		___IsEnumFlags_6 = value;
	}

	inline static int32_t get_offset_of_IsNullable_7() { return static_cast<int32_t>(offsetof(RuntimeTypeInfoCache_1_t81281AE3AA18B64964EF639A13EC764ADCB87A74_StaticFields, ___IsNullable_7)); }
	inline bool get_IsNullable_7() const { return ___IsNullable_7; }
	inline bool* get_address_of_IsNullable_7() { return &___IsNullable_7; }
	inline void set_IsNullable_7(bool value)
	{
		___IsNullable_7 = value;
	}

	inline static int32_t get_offset_of_IsObjectType_8() { return static_cast<int32_t>(offsetof(RuntimeTypeInfoCache_1_t81281AE3AA18B64964EF639A13EC764ADCB87A74_StaticFields, ___IsObjectType_8)); }
	inline bool get_IsObjectType_8() const { return ___IsObjectType_8; }
	inline bool* get_address_of_IsObjectType_8() { return &___IsObjectType_8; }
	inline void set_IsObjectType_8(bool value)
	{
		___IsObjectType_8 = value;
	}

	inline static int32_t get_offset_of_IsStringType_9() { return static_cast<int32_t>(offsetof(RuntimeTypeInfoCache_1_t81281AE3AA18B64964EF639A13EC764ADCB87A74_StaticFields, ___IsStringType_9)); }
	inline bool get_IsStringType_9() const { return ___IsStringType_9; }
	inline bool* get_address_of_IsStringType_9() { return &___IsStringType_9; }
	inline void set_IsStringType_9(bool value)
	{
		___IsStringType_9 = value;
	}

	inline static int32_t get_offset_of_IsContainerType_10() { return static_cast<int32_t>(offsetof(RuntimeTypeInfoCache_1_t81281AE3AA18B64964EF639A13EC764ADCB87A74_StaticFields, ___IsContainerType_10)); }
	inline bool get_IsContainerType_10() const { return ___IsContainerType_10; }
	inline bool* get_address_of_IsContainerType_10() { return &___IsContainerType_10; }
	inline void set_IsContainerType_10(bool value)
	{
		___IsContainerType_10 = value;
	}

	inline static int32_t get_offset_of_CanBeNull_11() { return static_cast<int32_t>(offsetof(RuntimeTypeInfoCache_1_t81281AE3AA18B64964EF639A13EC764ADCB87A74_StaticFields, ___CanBeNull_11)); }
	inline bool get_CanBeNull_11() const { return ___CanBeNull_11; }
	inline bool* get_address_of_CanBeNull_11() { return &___CanBeNull_11; }
	inline void set_CanBeNull_11(bool value)
	{
		___CanBeNull_11 = value;
	}

	inline static int32_t get_offset_of_IsNullableOrEnum_12() { return static_cast<int32_t>(offsetof(RuntimeTypeInfoCache_1_t81281AE3AA18B64964EF639A13EC764ADCB87A74_StaticFields, ___IsNullableOrEnum_12)); }
	inline bool get_IsNullableOrEnum_12() const { return ___IsNullableOrEnum_12; }
	inline bool* get_address_of_IsNullableOrEnum_12() { return &___IsNullableOrEnum_12; }
	inline void set_IsNullableOrEnum_12(bool value)
	{
		___IsNullableOrEnum_12 = value;
	}

	inline static int32_t get_offset_of_IsPrimitiveOrString_13() { return static_cast<int32_t>(offsetof(RuntimeTypeInfoCache_1_t81281AE3AA18B64964EF639A13EC764ADCB87A74_StaticFields, ___IsPrimitiveOrString_13)); }
	inline bool get_IsPrimitiveOrString_13() const { return ___IsPrimitiveOrString_13; }
	inline bool* get_address_of_IsPrimitiveOrString_13() { return &___IsPrimitiveOrString_13; }
	inline void set_IsPrimitiveOrString_13(bool value)
	{
		___IsPrimitiveOrString_13 = value;
	}

	inline static int32_t get_offset_of_IsAbstractOrInterface_14() { return static_cast<int32_t>(offsetof(RuntimeTypeInfoCache_1_t81281AE3AA18B64964EF639A13EC764ADCB87A74_StaticFields, ___IsAbstractOrInterface_14)); }
	inline bool get_IsAbstractOrInterface_14() const { return ___IsAbstractOrInterface_14; }
	inline bool* get_address_of_IsAbstractOrInterface_14() { return &___IsAbstractOrInterface_14; }
	inline void set_IsAbstractOrInterface_14(bool value)
	{
		___IsAbstractOrInterface_14 = value;
	}

	inline static int32_t get_offset_of_IsLazyLoadReference_15() { return static_cast<int32_t>(offsetof(RuntimeTypeInfoCache_1_t81281AE3AA18B64964EF639A13EC764ADCB87A74_StaticFields, ___IsLazyLoadReference_15)); }
	inline bool get_IsLazyLoadReference_15() const { return ___IsLazyLoadReference_15; }
	inline bool* get_address_of_IsLazyLoadReference_15() { return &___IsLazyLoadReference_15; }
	inline void set_IsLazyLoadReference_15(bool value)
	{
		___IsLazyLoadReference_15 = value;
	}
};


// Unity.Properties.Internal.RuntimeTypeInfoCache`1<System.UInt64>
struct RuntimeTypeInfoCache_1_tBD3586BA31C268FB05454355306A1AFA1E9FA4E6 
{
public:
	union
	{
		struct
		{
		};
		uint8_t RuntimeTypeInfoCache_1_t30A0A6BC09AD64184AFB882CF46291A815E10EDD__padding[1];
	};

public:
};

struct RuntimeTypeInfoCache_1_tBD3586BA31C268FB05454355306A1AFA1E9FA4E6_StaticFields
{
public:
	// System.Boolean Unity.Properties.Internal.RuntimeTypeInfoCache`1::IsValueType
	bool ___IsValueType_0;
	// System.Boolean Unity.Properties.Internal.RuntimeTypeInfoCache`1::IsPrimitive
	bool ___IsPrimitive_1;
	// System.Boolean Unity.Properties.Internal.RuntimeTypeInfoCache`1::IsInterface
	bool ___IsInterface_2;
	// System.Boolean Unity.Properties.Internal.RuntimeTypeInfoCache`1::IsAbstract
	bool ___IsAbstract_3;
	// System.Boolean Unity.Properties.Internal.RuntimeTypeInfoCache`1::IsArray
	bool ___IsArray_4;
	// System.Boolean Unity.Properties.Internal.RuntimeTypeInfoCache`1::IsEnum
	bool ___IsEnum_5;
	// System.Boolean Unity.Properties.Internal.RuntimeTypeInfoCache`1::IsEnumFlags
	bool ___IsEnumFlags_6;
	// System.Boolean Unity.Properties.Internal.RuntimeTypeInfoCache`1::IsNullable
	bool ___IsNullable_7;
	// System.Boolean Unity.Properties.Internal.RuntimeTypeInfoCache`1::IsObjectType
	bool ___IsObjectType_8;
	// System.Boolean Unity.Properties.Internal.RuntimeTypeInfoCache`1::IsStringType
	bool ___IsStringType_9;
	// System.Boolean Unity.Properties.Internal.RuntimeTypeInfoCache`1::IsContainerType
	bool ___IsContainerType_10;
	// System.Boolean Unity.Properties.Internal.RuntimeTypeInfoCache`1::CanBeNull
	bool ___CanBeNull_11;
	// System.Boolean Unity.Properties.Internal.RuntimeTypeInfoCache`1::IsNullableOrEnum
	bool ___IsNullableOrEnum_12;
	// System.Boolean Unity.Properties.Internal.RuntimeTypeInfoCache`1::IsPrimitiveOrString
	bool ___IsPrimitiveOrString_13;
	// System.Boolean Unity.Properties.Internal.RuntimeTypeInfoCache`1::IsAbstractOrInterface
	bool ___IsAbstractOrInterface_14;
	// System.Boolean Unity.Properties.Internal.RuntimeTypeInfoCache`1::IsLazyLoadReference
	bool ___IsLazyLoadReference_15;

public:
	inline static int32_t get_offset_of_IsValueType_0() { return static_cast<int32_t>(offsetof(RuntimeTypeInfoCache_1_tBD3586BA31C268FB05454355306A1AFA1E9FA4E6_StaticFields, ___IsValueType_0)); }
	inline bool get_IsValueType_0() const { return ___IsValueType_0; }
	inline bool* get_address_of_IsValueType_0() { return &___IsValueType_0; }
	inline void set_IsValueType_0(bool value)
	{
		___IsValueType_0 = value;
	}

	inline static int32_t get_offset_of_IsPrimitive_1() { return static_cast<int32_t>(offsetof(RuntimeTypeInfoCache_1_tBD3586BA31C268FB05454355306A1AFA1E9FA4E6_StaticFields, ___IsPrimitive_1)); }
	inline bool get_IsPrimitive_1() const { return ___IsPrimitive_1; }
	inline bool* get_address_of_IsPrimitive_1() { return &___IsPrimitive_1; }
	inline void set_IsPrimitive_1(bool value)
	{
		___IsPrimitive_1 = value;
	}

	inline static int32_t get_offset_of_IsInterface_2() { return static_cast<int32_t>(offsetof(RuntimeTypeInfoCache_1_tBD3586BA31C268FB05454355306A1AFA1E9FA4E6_StaticFields, ___IsInterface_2)); }
	inline bool get_IsInterface_2() const { return ___IsInterface_2; }
	inline bool* get_address_of_IsInterface_2() { return &___IsInterface_2; }
	inline void set_IsInterface_2(bool value)
	{
		___IsInterface_2 = value;
	}

	inline static int32_t get_offset_of_IsAbstract_3() { return static_cast<int32_t>(offsetof(RuntimeTypeInfoCache_1_tBD3586BA31C268FB05454355306A1AFA1E9FA4E6_StaticFields, ___IsAbstract_3)); }
	inline bool get_IsAbstract_3() const { return ___IsAbstract_3; }
	inline bool* get_address_of_IsAbstract_3() { return &___IsAbstract_3; }
	inline void set_IsAbstract_3(bool value)
	{
		___IsAbstract_3 = value;
	}

	inline static int32_t get_offset_of_IsArray_4() { return static_cast<int32_t>(offsetof(RuntimeTypeInfoCache_1_tBD3586BA31C268FB05454355306A1AFA1E9FA4E6_StaticFields, ___IsArray_4)); }
	inline bool get_IsArray_4() const { return ___IsArray_4; }
	inline bool* get_address_of_IsArray_4() { return &___IsArray_4; }
	inline void set_IsArray_4(bool value)
	{
		___IsArray_4 = value;
	}

	inline static int32_t get_offset_of_IsEnum_5() { return static_cast<int32_t>(offsetof(RuntimeTypeInfoCache_1_tBD3586BA31C268FB05454355306A1AFA1E9FA4E6_StaticFields, ___IsEnum_5)); }
	inline bool get_IsEnum_5() const { return ___IsEnum_5; }
	inline bool* get_address_of_IsEnum_5() { return &___IsEnum_5; }
	inline void set_IsEnum_5(bool value)
	{
		___IsEnum_5 = value;
	}

	inline static int32_t get_offset_of_IsEnumFlags_6() { return static_cast<int32_t>(offsetof(RuntimeTypeInfoCache_1_tBD3586BA31C268FB05454355306A1AFA1E9FA4E6_StaticFields, ___IsEnumFlags_6)); }
	inline bool get_IsEnumFlags_6() const { return ___IsEnumFlags_6; }
	inline bool* get_address_of_IsEnumFlags_6() { return &___IsEnumFlags_6; }
	inline void set_IsEnumFlags_6(bool value)
	{
		___IsEnumFlags_6 = value;
	}

	inline static int32_t get_offset_of_IsNullable_7() { return static_cast<int32_t>(offsetof(RuntimeTypeInfoCache_1_tBD3586BA31C268FB05454355306A1AFA1E9FA4E6_StaticFields, ___IsNullable_7)); }
	inline bool get_IsNullable_7() const { return ___IsNullable_7; }
	inline bool* get_address_of_IsNullable_7() { return &___IsNullable_7; }
	inline void set_IsNullable_7(bool value)
	{
		___IsNullable_7 = value;
	}

	inline static int32_t get_offset_of_IsObjectType_8() { return static_cast<int32_t>(offsetof(RuntimeTypeInfoCache_1_tBD3586BA31C268FB05454355306A1AFA1E9FA4E6_StaticFields, ___IsObjectType_8)); }
	inline bool get_IsObjectType_8() const { return ___IsObjectType_8; }
	inline bool* get_address_of_IsObjectType_8() { return &___IsObjectType_8; }
	inline void set_IsObjectType_8(bool value)
	{
		___IsObjectType_8 = value;
	}

	inline static int32_t get_offset_of_IsStringType_9() { return static_cast<int32_t>(offsetof(RuntimeTypeInfoCache_1_tBD3586BA31C268FB05454355306A1AFA1E9FA4E6_StaticFields, ___IsStringType_9)); }
	inline bool get_IsStringType_9() const { return ___IsStringType_9; }
	inline bool* get_address_of_IsStringType_9() { return &___IsStringType_9; }
	inline void set_IsStringType_9(bool value)
	{
		___IsStringType_9 = value;
	}

	inline static int32_t get_offset_of_IsContainerType_10() { return static_cast<int32_t>(offsetof(RuntimeTypeInfoCache_1_tBD3586BA31C268FB05454355306A1AFA1E9FA4E6_StaticFields, ___IsContainerType_10)); }
	inline bool get_IsContainerType_10() const { return ___IsContainerType_10; }
	inline bool* get_address_of_IsContainerType_10() { return &___IsContainerType_10; }
	inline void set_IsContainerType_10(bool value)
	{
		___IsContainerType_10 = value;
	}

	inline static int32_t get_offset_of_CanBeNull_11() { return static_cast<int32_t>(offsetof(RuntimeTypeInfoCache_1_tBD3586BA31C268FB05454355306A1AFA1E9FA4E6_StaticFields, ___CanBeNull_11)); }
	inline bool get_CanBeNull_11() const { return ___CanBeNull_11; }
	inline bool* get_address_of_CanBeNull_11() { return &___CanBeNull_11; }
	inline void set_CanBeNull_11(bool value)
	{
		___CanBeNull_11 = value;
	}

	inline static int32_t get_offset_of_IsNullableOrEnum_12() { return static_cast<int32_t>(offsetof(RuntimeTypeInfoCache_1_tBD3586BA31C268FB05454355306A1AFA1E9FA4E6_StaticFields, ___IsNullableOrEnum_12)); }
	inline bool get_IsNullableOrEnum_12() const { return ___IsNullableOrEnum_12; }
	inline bool* get_address_of_IsNullableOrEnum_12() { return &___IsNullableOrEnum_12; }
	inline void set_IsNullableOrEnum_12(bool value)
	{
		___IsNullableOrEnum_12 = value;
	}

	inline static int32_t get_offset_of_IsPrimitiveOrString_13() { return static_cast<int32_t>(offsetof(RuntimeTypeInfoCache_1_tBD3586BA31C268FB05454355306A1AFA1E9FA4E6_StaticFields, ___IsPrimitiveOrString_13)); }
	inline bool get_IsPrimitiveOrString_13() const { return ___IsPrimitiveOrString_13; }
	inline bool* get_address_of_IsPrimitiveOrString_13() { return &___IsPrimitiveOrString_13; }
	inline void set_IsPrimitiveOrString_13(bool value)
	{
		___IsPrimitiveOrString_13 = value;
	}

	inline static int32_t get_offset_of_IsAbstractOrInterface_14() { return static_cast<int32_t>(offsetof(RuntimeTypeInfoCache_1_tBD3586BA31C268FB05454355306A1AFA1E9FA4E6_StaticFields, ___IsAbstractOrInterface_14)); }
	inline bool get_IsAbstractOrInterface_14() const { return ___IsAbstractOrInterface_14; }
	inline bool* get_address_of_IsAbstractOrInterface_14() { return &___IsAbstractOrInterface_14; }
	inline void set_IsAbstractOrInterface_14(bool value)
	{
		___IsAbstractOrInterface_14 = value;
	}

	inline static int32_t get_offset_of_IsLazyLoadReference_15() { return static_cast<int32_t>(offsetof(RuntimeTypeInfoCache_1_tBD3586BA31C268FB05454355306A1AFA1E9FA4E6_StaticFields, ___IsLazyLoadReference_15)); }
	inline bool get_IsLazyLoadReference_15() const { return ___IsLazyLoadReference_15; }
	inline bool* get_address_of_IsLazyLoadReference_15() { return &___IsLazyLoadReference_15; }
	inline void set_IsLazyLoadReference_15(bool value)
	{
		___IsLazyLoadReference_15 = value;
	}
};


// Unity.Properties.Internal.RuntimeTypeInfoCache`1<Unity.RuntimeSceneSerialization.Internal.UnityObjectReference>
struct RuntimeTypeInfoCache_1_t591D3790D133FE872CF36B41FC2EFD65B0A7D60F 
{
public:
	union
	{
		struct
		{
		};
		uint8_t RuntimeTypeInfoCache_1_t30A0A6BC09AD64184AFB882CF46291A815E10EDD__padding[1];
	};

public:
};

struct RuntimeTypeInfoCache_1_t591D3790D133FE872CF36B41FC2EFD65B0A7D60F_StaticFields
{
public:
	// System.Boolean Unity.Properties.Internal.RuntimeTypeInfoCache`1::IsValueType
	bool ___IsValueType_0;
	// System.Boolean Unity.Properties.Internal.RuntimeTypeInfoCache`1::IsPrimitive
	bool ___IsPrimitive_1;
	// System.Boolean Unity.Properties.Internal.RuntimeTypeInfoCache`1::IsInterface
	bool ___IsInterface_2;
	// System.Boolean Unity.Properties.Internal.RuntimeTypeInfoCache`1::IsAbstract
	bool ___IsAbstract_3;
	// System.Boolean Unity.Properties.Internal.RuntimeTypeInfoCache`1::IsArray
	bool ___IsArray_4;
	// System.Boolean Unity.Properties.Internal.RuntimeTypeInfoCache`1::IsEnum
	bool ___IsEnum_5;
	// System.Boolean Unity.Properties.Internal.RuntimeTypeInfoCache`1::IsEnumFlags
	bool ___IsEnumFlags_6;
	// System.Boolean Unity.Properties.Internal.RuntimeTypeInfoCache`1::IsNullable
	bool ___IsNullable_7;
	// System.Boolean Unity.Properties.Internal.RuntimeTypeInfoCache`1::IsObjectType
	bool ___IsObjectType_8;
	// System.Boolean Unity.Properties.Internal.RuntimeTypeInfoCache`1::IsStringType
	bool ___IsStringType_9;
	// System.Boolean Unity.Properties.Internal.RuntimeTypeInfoCache`1::IsContainerType
	bool ___IsContainerType_10;
	// System.Boolean Unity.Properties.Internal.RuntimeTypeInfoCache`1::CanBeNull
	bool ___CanBeNull_11;
	// System.Boolean Unity.Properties.Internal.RuntimeTypeInfoCache`1::IsNullableOrEnum
	bool ___IsNullableOrEnum_12;
	// System.Boolean Unity.Properties.Internal.RuntimeTypeInfoCache`1::IsPrimitiveOrString
	bool ___IsPrimitiveOrString_13;
	// System.Boolean Unity.Properties.Internal.RuntimeTypeInfoCache`1::IsAbstractOrInterface
	bool ___IsAbstractOrInterface_14;
	// System.Boolean Unity.Properties.Internal.RuntimeTypeInfoCache`1::IsLazyLoadReference
	bool ___IsLazyLoadReference_15;

public:
	inline static int32_t get_offset_of_IsValueType_0() { return static_cast<int32_t>(offsetof(RuntimeTypeInfoCache_1_t591D3790D133FE872CF36B41FC2EFD65B0A7D60F_StaticFields, ___IsValueType_0)); }
	inline bool get_IsValueType_0() const { return ___IsValueType_0; }
	inline bool* get_address_of_IsValueType_0() { return &___IsValueType_0; }
	inline void set_IsValueType_0(bool value)
	{
		___IsValueType_0 = value;
	}

	inline static int32_t get_offset_of_IsPrimitive_1() { return static_cast<int32_t>(offsetof(RuntimeTypeInfoCache_1_t591D3790D133FE872CF36B41FC2EFD65B0A7D60F_StaticFields, ___IsPrimitive_1)); }
	inline bool get_IsPrimitive_1() const { return ___IsPrimitive_1; }
	inline bool* get_address_of_IsPrimitive_1() { return &___IsPrimitive_1; }
	inline void set_IsPrimitive_1(bool value)
	{
		___IsPrimitive_1 = value;
	}

	inline static int32_t get_offset_of_IsInterface_2() { return static_cast<int32_t>(offsetof(RuntimeTypeInfoCache_1_t591D3790D133FE872CF36B41FC2EFD65B0A7D60F_StaticFields, ___IsInterface_2)); }
	inline bool get_IsInterface_2() const { return ___IsInterface_2; }
	inline bool* get_address_of_IsInterface_2() { return &___IsInterface_2; }
	inline void set_IsInterface_2(bool value)
	{
		___IsInterface_2 = value;
	}

	inline static int32_t get_offset_of_IsAbstract_3() { return static_cast<int32_t>(offsetof(RuntimeTypeInfoCache_1_t591D3790D133FE872CF36B41FC2EFD65B0A7D60F_StaticFields, ___IsAbstract_3)); }
	inline bool get_IsAbstract_3() const { return ___IsAbstract_3; }
	inline bool* get_address_of_IsAbstract_3() { return &___IsAbstract_3; }
	inline void set_IsAbstract_3(bool value)
	{
		___IsAbstract_3 = value;
	}

	inline static int32_t get_offset_of_IsArray_4() { return static_cast<int32_t>(offsetof(RuntimeTypeInfoCache_1_t591D3790D133FE872CF36B41FC2EFD65B0A7D60F_StaticFields, ___IsArray_4)); }
	inline bool get_IsArray_4() const { return ___IsArray_4; }
	inline bool* get_address_of_IsArray_4() { return &___IsArray_4; }
	inline void set_IsArray_4(bool value)
	{
		___IsArray_4 = value;
	}

	inline static int32_t get_offset_of_IsEnum_5() { return static_cast<int32_t>(offsetof(RuntimeTypeInfoCache_1_t591D3790D133FE872CF36B41FC2EFD65B0A7D60F_StaticFields, ___IsEnum_5)); }
	inline bool get_IsEnum_5() const { return ___IsEnum_5; }
	inline bool* get_address_of_IsEnum_5() { return &___IsEnum_5; }
	inline void set_IsEnum_5(bool value)
	{
		___IsEnum_5 = value;
	}

	inline static int32_t get_offset_of_IsEnumFlags_6() { return static_cast<int32_t>(offsetof(RuntimeTypeInfoCache_1_t591D3790D133FE872CF36B41FC2EFD65B0A7D60F_StaticFields, ___IsEnumFlags_6)); }
	inline bool get_IsEnumFlags_6() const { return ___IsEnumFlags_6; }
	inline bool* get_address_of_IsEnumFlags_6() { return &___IsEnumFlags_6; }
	inline void set_IsEnumFlags_6(bool value)
	{
		___IsEnumFlags_6 = value;
	}

	inline static int32_t get_offset_of_IsNullable_7() { return static_cast<int32_t>(offsetof(RuntimeTypeInfoCache_1_t591D3790D133FE872CF36B41FC2EFD65B0A7D60F_StaticFields, ___IsNullable_7)); }
	inline bool get_IsNullable_7() const { return ___IsNullable_7; }
	inline bool* get_address_of_IsNullable_7() { return &___IsNullable_7; }
	inline void set_IsNullable_7(bool value)
	{
		___IsNullable_7 = value;
	}

	inline static int32_t get_offset_of_IsObjectType_8() { return static_cast<int32_t>(offsetof(RuntimeTypeInfoCache_1_t591D3790D133FE872CF36B41FC2EFD65B0A7D60F_StaticFields, ___IsObjectType_8)); }
	inline bool get_IsObjectType_8() const { return ___IsObjectType_8; }
	inline bool* get_address_of_IsObjectType_8() { return &___IsObjectType_8; }
	inline void set_IsObjectType_8(bool value)
	{
		___IsObjectType_8 = value;
	}

	inline static int32_t get_offset_of_IsStringType_9() { return static_cast<int32_t>(offsetof(RuntimeTypeInfoCache_1_t591D3790D133FE872CF36B41FC2EFD65B0A7D60F_StaticFields, ___IsStringType_9)); }
	inline bool get_IsStringType_9() const { return ___IsStringType_9; }
	inline bool* get_address_of_IsStringType_9() { return &___IsStringType_9; }
	inline void set_IsStringType_9(bool value)
	{
		___IsStringType_9 = value;
	}

	inline static int32_t get_offset_of_IsContainerType_10() { return static_cast<int32_t>(offsetof(RuntimeTypeInfoCache_1_t591D3790D133FE872CF36B41FC2EFD65B0A7D60F_StaticFields, ___IsContainerType_10)); }
	inline bool get_IsContainerType_10() const { return ___IsContainerType_10; }
	inline bool* get_address_of_IsContainerType_10() { return &___IsContainerType_10; }
	inline void set_IsContainerType_10(bool value)
	{
		___IsContainerType_10 = value;
	}

	inline static int32_t get_offset_of_CanBeNull_11() { return static_cast<int32_t>(offsetof(RuntimeTypeInfoCache_1_t591D3790D133FE872CF36B41FC2EFD65B0A7D60F_StaticFields, ___CanBeNull_11)); }
	inline bool get_CanBeNull_11() const { return ___CanBeNull_11; }
	inline bool* get_address_of_CanBeNull_11() { return &___CanBeNull_11; }
	inline void set_CanBeNull_11(bool value)
	{
		___CanBeNull_11 = value;
	}

	inline static int32_t get_offset_of_IsNullableOrEnum_12() { return static_cast<int32_t>(offsetof(RuntimeTypeInfoCache_1_t591D3790D133FE872CF36B41FC2EFD65B0A7D60F_StaticFields, ___IsNullableOrEnum_12)); }
	inline bool get_IsNullableOrEnum_12() const { return ___IsNullableOrEnum_12; }
	inline bool* get_address_of_IsNullableOrEnum_12() { return &___IsNullableOrEnum_12; }
	inline void set_IsNullableOrEnum_12(bool value)
	{
		___IsNullableOrEnum_12 = value;
	}

	inline static int32_t get_offset_of_IsPrimitiveOrString_13() { return static_cast<int32_t>(offsetof(RuntimeTypeInfoCache_1_t591D3790D133FE872CF36B41FC2EFD65B0A7D60F_StaticFields, ___IsPrimitiveOrString_13)); }
	inline bool get_IsPrimitiveOrString_13() const { return ___IsPrimitiveOrString_13; }
	inline bool* get_address_of_IsPrimitiveOrString_13() { return &___IsPrimitiveOrString_13; }
	inline void set_IsPrimitiveOrString_13(bool value)
	{
		___IsPrimitiveOrString_13 = value;
	}

	inline static int32_t get_offset_of_IsAbstractOrInterface_14() { return static_cast<int32_t>(offsetof(RuntimeTypeInfoCache_1_t591D3790D133FE872CF36B41FC2EFD65B0A7D60F_StaticFields, ___IsAbstractOrInterface_14)); }
	inline bool get_IsAbstractOrInterface_14() const { return ___IsAbstractOrInterface_14; }
	inline bool* get_address_of_IsAbstractOrInterface_14() { return &___IsAbstractOrInterface_14; }
	inline void set_IsAbstractOrInterface_14(bool value)
	{
		___IsAbstractOrInterface_14 = value;
	}

	inline static int32_t get_offset_of_IsLazyLoadReference_15() { return static_cast<int32_t>(offsetof(RuntimeTypeInfoCache_1_t591D3790D133FE872CF36B41FC2EFD65B0A7D60F_StaticFields, ___IsLazyLoadReference_15)); }
	inline bool get_IsLazyLoadReference_15() const { return ___IsLazyLoadReference_15; }
	inline bool* get_address_of_IsLazyLoadReference_15() { return &___IsLazyLoadReference_15; }
	inline void set_IsLazyLoadReference_15(bool value)
	{
		___IsLazyLoadReference_15 = value;
	}
};


// Unity.Properties.Internal.RuntimeTypeInfoCache`1<UnityEngine.Vector2Int>
struct RuntimeTypeInfoCache_1_t1B08456904CD0261F0E186560AC497F2929F40AF 
{
public:
	union
	{
		struct
		{
		};
		uint8_t RuntimeTypeInfoCache_1_t30A0A6BC09AD64184AFB882CF46291A815E10EDD__padding[1];
	};

public:
};

struct RuntimeTypeInfoCache_1_t1B08456904CD0261F0E186560AC497F2929F40AF_StaticFields
{
public:
	// System.Boolean Unity.Properties.Internal.RuntimeTypeInfoCache`1::IsValueType
	bool ___IsValueType_0;
	// System.Boolean Unity.Properties.Internal.RuntimeTypeInfoCache`1::IsPrimitive
	bool ___IsPrimitive_1;
	// System.Boolean Unity.Properties.Internal.RuntimeTypeInfoCache`1::IsInterface
	bool ___IsInterface_2;
	// System.Boolean Unity.Properties.Internal.RuntimeTypeInfoCache`1::IsAbstract
	bool ___IsAbstract_3;
	// System.Boolean Unity.Properties.Internal.RuntimeTypeInfoCache`1::IsArray
	bool ___IsArray_4;
	// System.Boolean Unity.Properties.Internal.RuntimeTypeInfoCache`1::IsEnum
	bool ___IsEnum_5;
	// System.Boolean Unity.Properties.Internal.RuntimeTypeInfoCache`1::IsEnumFlags
	bool ___IsEnumFlags_6;
	// System.Boolean Unity.Properties.Internal.RuntimeTypeInfoCache`1::IsNullable
	bool ___IsNullable_7;
	// System.Boolean Unity.Properties.Internal.RuntimeTypeInfoCache`1::IsObjectType
	bool ___IsObjectType_8;
	// System.Boolean Unity.Properties.Internal.RuntimeTypeInfoCache`1::IsStringType
	bool ___IsStringType_9;
	// System.Boolean Unity.Properties.Internal.RuntimeTypeInfoCache`1::IsContainerType
	bool ___IsContainerType_10;
	// System.Boolean Unity.Properties.Internal.RuntimeTypeInfoCache`1::CanBeNull
	bool ___CanBeNull_11;
	// System.Boolean Unity.Properties.Internal.RuntimeTypeInfoCache`1::IsNullableOrEnum
	bool ___IsNullableOrEnum_12;
	// System.Boolean Unity.Properties.Internal.RuntimeTypeInfoCache`1::IsPrimitiveOrString
	bool ___IsPrimitiveOrString_13;
	// System.Boolean Unity.Properties.Internal.RuntimeTypeInfoCache`1::IsAbstractOrInterface
	bool ___IsAbstractOrInterface_14;
	// System.Boolean Unity.Properties.Internal.RuntimeTypeInfoCache`1::IsLazyLoadReference
	bool ___IsLazyLoadReference_15;

public:
	inline static int32_t get_offset_of_IsValueType_0() { return static_cast<int32_t>(offsetof(RuntimeTypeInfoCache_1_t1B08456904CD0261F0E186560AC497F2929F40AF_StaticFields, ___IsValueType_0)); }
	inline bool get_IsValueType_0() const { return ___IsValueType_0; }
	inline bool* get_address_of_IsValueType_0() { return &___IsValueType_0; }
	inline void set_IsValueType_0(bool value)
	{
		___IsValueType_0 = value;
	}

	inline static int32_t get_offset_of_IsPrimitive_1() { return static_cast<int32_t>(offsetof(RuntimeTypeInfoCache_1_t1B08456904CD0261F0E186560AC497F2929F40AF_StaticFields, ___IsPrimitive_1)); }
	inline bool get_IsPrimitive_1() const { return ___IsPrimitive_1; }
	inline bool* get_address_of_IsPrimitive_1() { return &___IsPrimitive_1; }
	inline void set_IsPrimitive_1(bool value)
	{
		___IsPrimitive_1 = value;
	}

	inline static int32_t get_offset_of_IsInterface_2() { return static_cast<int32_t>(offsetof(RuntimeTypeInfoCache_1_t1B08456904CD0261F0E186560AC497F2929F40AF_StaticFields, ___IsInterface_2)); }
	inline bool get_IsInterface_2() const { return ___IsInterface_2; }
	inline bool* get_address_of_IsInterface_2() { return &___IsInterface_2; }
	inline void set_IsInterface_2(bool value)
	{
		___IsInterface_2 = value;
	}

	inline static int32_t get_offset_of_IsAbstract_3() { return static_cast<int32_t>(offsetof(RuntimeTypeInfoCache_1_t1B08456904CD0261F0E186560AC497F2929F40AF_StaticFields, ___IsAbstract_3)); }
	inline bool get_IsAbstract_3() const { return ___IsAbstract_3; }
	inline bool* get_address_of_IsAbstract_3() { return &___IsAbstract_3; }
	inline void set_IsAbstract_3(bool value)
	{
		___IsAbstract_3 = value;
	}

	inline static int32_t get_offset_of_IsArray_4() { return static_cast<int32_t>(offsetof(RuntimeTypeInfoCache_1_t1B08456904CD0261F0E186560AC497F2929F40AF_StaticFields, ___IsArray_4)); }
	inline bool get_IsArray_4() const { return ___IsArray_4; }
	inline bool* get_address_of_IsArray_4() { return &___IsArray_4; }
	inline void set_IsArray_4(bool value)
	{
		___IsArray_4 = value;
	}

	inline static int32_t get_offset_of_IsEnum_5() { return static_cast<int32_t>(offsetof(RuntimeTypeInfoCache_1_t1B08456904CD0261F0E186560AC497F2929F40AF_StaticFields, ___IsEnum_5)); }
	inline bool get_IsEnum_5() const { return ___IsEnum_5; }
	inline bool* get_address_of_IsEnum_5() { return &___IsEnum_5; }
	inline void set_IsEnum_5(bool value)
	{
		___IsEnum_5 = value;
	}

	inline static int32_t get_offset_of_IsEnumFlags_6() { return static_cast<int32_t>(offsetof(RuntimeTypeInfoCache_1_t1B08456904CD0261F0E186560AC497F2929F40AF_StaticFields, ___IsEnumFlags_6)); }
	inline bool get_IsEnumFlags_6() const { return ___IsEnumFlags_6; }
	inline bool* get_address_of_IsEnumFlags_6() { return &___IsEnumFlags_6; }
	inline void set_IsEnumFlags_6(bool value)
	{
		___IsEnumFlags_6 = value;
	}

	inline static int32_t get_offset_of_IsNullable_7() { return static_cast<int32_t>(offsetof(RuntimeTypeInfoCache_1_t1B08456904CD0261F0E186560AC497F2929F40AF_StaticFields, ___IsNullable_7)); }
	inline bool get_IsNullable_7() const { return ___IsNullable_7; }
	inline bool* get_address_of_IsNullable_7() { return &___IsNullable_7; }
	inline void set_IsNullable_7(bool value)
	{
		___IsNullable_7 = value;
	}

	inline static int32_t get_offset_of_IsObjectType_8() { return static_cast<int32_t>(offsetof(RuntimeTypeInfoCache_1_t1B08456904CD0261F0E186560AC497F2929F40AF_StaticFields, ___IsObjectType_8)); }
	inline bool get_IsObjectType_8() const { return ___IsObjectType_8; }
	inline bool* get_address_of_IsObjectType_8() { return &___IsObjectType_8; }
	inline void set_IsObjectType_8(bool value)
	{
		___IsObjectType_8 = value;
	}

	inline static int32_t get_offset_of_IsStringType_9() { return static_cast<int32_t>(offsetof(RuntimeTypeInfoCache_1_t1B08456904CD0261F0E186560AC497F2929F40AF_StaticFields, ___IsStringType_9)); }
	inline bool get_IsStringType_9() const { return ___IsStringType_9; }
	inline bool* get_address_of_IsStringType_9() { return &___IsStringType_9; }
	inline void set_IsStringType_9(bool value)
	{
		___IsStringType_9 = value;
	}

	inline static int32_t get_offset_of_IsContainerType_10() { return static_cast<int32_t>(offsetof(RuntimeTypeInfoCache_1_t1B08456904CD0261F0E186560AC497F2929F40AF_StaticFields, ___IsContainerType_10)); }
	inline bool get_IsContainerType_10() const { return ___IsContainerType_10; }
	inline bool* get_address_of_IsContainerType_10() { return &___IsContainerType_10; }
	inline void set_IsContainerType_10(bool value)
	{
		___IsContainerType_10 = value;
	}

	inline static int32_t get_offset_of_CanBeNull_11() { return static_cast<int32_t>(offsetof(RuntimeTypeInfoCache_1_t1B08456904CD0261F0E186560AC497F2929F40AF_StaticFields, ___CanBeNull_11)); }
	inline bool get_CanBeNull_11() const { return ___CanBeNull_11; }
	inline bool* get_address_of_CanBeNull_11() { return &___CanBeNull_11; }
	inline void set_CanBeNull_11(bool value)
	{
		___CanBeNull_11 = value;
	}

	inline static int32_t get_offset_of_IsNullableOrEnum_12() { return static_cast<int32_t>(offsetof(RuntimeTypeInfoCache_1_t1B08456904CD0261F0E186560AC497F2929F40AF_StaticFields, ___IsNullableOrEnum_12)); }
	inline bool get_IsNullableOrEnum_12() const { return ___IsNullableOrEnum_12; }
	inline bool* get_address_of_IsNullableOrEnum_12() { return &___IsNullableOrEnum_12; }
	inline void set_IsNullableOrEnum_12(bool value)
	{
		___IsNullableOrEnum_12 = value;
	}

	inline static int32_t get_offset_of_IsPrimitiveOrString_13() { return static_cast<int32_t>(offsetof(RuntimeTypeInfoCache_1_t1B08456904CD0261F0E186560AC497F2929F40AF_StaticFields, ___IsPrimitiveOrString_13)); }
	inline bool get_IsPrimitiveOrString_13() const { return ___IsPrimitiveOrString_13; }
	inline bool* get_address_of_IsPrimitiveOrString_13() { return &___IsPrimitiveOrString_13; }
	inline void set_IsPrimitiveOrString_13(bool value)
	{
		___IsPrimitiveOrString_13 = value;
	}

	inline static int32_t get_offset_of_IsAbstractOrInterface_14() { return static_cast<int32_t>(offsetof(RuntimeTypeInfoCache_1_t1B08456904CD0261F0E186560AC497F2929F40AF_StaticFields, ___IsAbstractOrInterface_14)); }
	inline bool get_IsAbstractOrInterface_14() const { return ___IsAbstractOrInterface_14; }
	inline bool* get_address_of_IsAbstractOrInterface_14() { return &___IsAbstractOrInterface_14; }
	inline void set_IsAbstractOrInterface_14(bool value)
	{
		___IsAbstractOrInterface_14 = value;
	}

	inline static int32_t get_offset_of_IsLazyLoadReference_15() { return static_cast<int32_t>(offsetof(RuntimeTypeInfoCache_1_t1B08456904CD0261F0E186560AC497F2929F40AF_StaticFields, ___IsLazyLoadReference_15)); }
	inline bool get_IsLazyLoadReference_15() const { return ___IsLazyLoadReference_15; }
	inline bool* get_address_of_IsLazyLoadReference_15() { return &___IsLazyLoadReference_15; }
	inline void set_IsLazyLoadReference_15(bool value)
	{
		___IsLazyLoadReference_15 = value;
	}
};


// Unity.Properties.Internal.RuntimeTypeInfoCache`1<UnityEngine.Vector3>
struct RuntimeTypeInfoCache_1_t15EBBC0C1A5785754449EF41C13129587F6AB1E0 
{
public:
	union
	{
		struct
		{
		};
		uint8_t RuntimeTypeInfoCache_1_t30A0A6BC09AD64184AFB882CF46291A815E10EDD__padding[1];
	};

public:
};

struct RuntimeTypeInfoCache_1_t15EBBC0C1A5785754449EF41C13129587F6AB1E0_StaticFields
{
public:
	// System.Boolean Unity.Properties.Internal.RuntimeTypeInfoCache`1::IsValueType
	bool ___IsValueType_0;
	// System.Boolean Unity.Properties.Internal.RuntimeTypeInfoCache`1::IsPrimitive
	bool ___IsPrimitive_1;
	// System.Boolean Unity.Properties.Internal.RuntimeTypeInfoCache`1::IsInterface
	bool ___IsInterface_2;
	// System.Boolean Unity.Properties.Internal.RuntimeTypeInfoCache`1::IsAbstract
	bool ___IsAbstract_3;
	// System.Boolean Unity.Properties.Internal.RuntimeTypeInfoCache`1::IsArray
	bool ___IsArray_4;
	// System.Boolean Unity.Properties.Internal.RuntimeTypeInfoCache`1::IsEnum
	bool ___IsEnum_5;
	// System.Boolean Unity.Properties.Internal.RuntimeTypeInfoCache`1::IsEnumFlags
	bool ___IsEnumFlags_6;
	// System.Boolean Unity.Properties.Internal.RuntimeTypeInfoCache`1::IsNullable
	bool ___IsNullable_7;
	// System.Boolean Unity.Properties.Internal.RuntimeTypeInfoCache`1::IsObjectType
	bool ___IsObjectType_8;
	// System.Boolean Unity.Properties.Internal.RuntimeTypeInfoCache`1::IsStringType
	bool ___IsStringType_9;
	// System.Boolean Unity.Properties.Internal.RuntimeTypeInfoCache`1::IsContainerType
	bool ___IsContainerType_10;
	// System.Boolean Unity.Properties.Internal.RuntimeTypeInfoCache`1::CanBeNull
	bool ___CanBeNull_11;
	// System.Boolean Unity.Properties.Internal.RuntimeTypeInfoCache`1::IsNullableOrEnum
	bool ___IsNullableOrEnum_12;
	// System.Boolean Unity.Properties.Internal.RuntimeTypeInfoCache`1::IsPrimitiveOrString
	bool ___IsPrimitiveOrString_13;
	// System.Boolean Unity.Properties.Internal.RuntimeTypeInfoCache`1::IsAbstractOrInterface
	bool ___IsAbstractOrInterface_14;
	// System.Boolean Unity.Properties.Internal.RuntimeTypeInfoCache`1::IsLazyLoadReference
	bool ___IsLazyLoadReference_15;

public:
	inline static int32_t get_offset_of_IsValueType_0() { return static_cast<int32_t>(offsetof(RuntimeTypeInfoCache_1_t15EBBC0C1A5785754449EF41C13129587F6AB1E0_StaticFields, ___IsValueType_0)); }
	inline bool get_IsValueType_0() const { return ___IsValueType_0; }
	inline bool* get_address_of_IsValueType_0() { return &___IsValueType_0; }
	inline void set_IsValueType_0(bool value)
	{
		___IsValueType_0 = value;
	}

	inline static int32_t get_offset_of_IsPrimitive_1() { return static_cast<int32_t>(offsetof(RuntimeTypeInfoCache_1_t15EBBC0C1A5785754449EF41C13129587F6AB1E0_StaticFields, ___IsPrimitive_1)); }
	inline bool get_IsPrimitive_1() const { return ___IsPrimitive_1; }
	inline bool* get_address_of_IsPrimitive_1() { return &___IsPrimitive_1; }
	inline void set_IsPrimitive_1(bool value)
	{
		___IsPrimitive_1 = value;
	}

	inline static int32_t get_offset_of_IsInterface_2() { return static_cast<int32_t>(offsetof(RuntimeTypeInfoCache_1_t15EBBC0C1A5785754449EF41C13129587F6AB1E0_StaticFields, ___IsInterface_2)); }
	inline bool get_IsInterface_2() const { return ___IsInterface_2; }
	inline bool* get_address_of_IsInterface_2() { return &___IsInterface_2; }
	inline void set_IsInterface_2(bool value)
	{
		___IsInterface_2 = value;
	}

	inline static int32_t get_offset_of_IsAbstract_3() { return static_cast<int32_t>(offsetof(RuntimeTypeInfoCache_1_t15EBBC0C1A5785754449EF41C13129587F6AB1E0_StaticFields, ___IsAbstract_3)); }
	inline bool get_IsAbstract_3() const { return ___IsAbstract_3; }
	inline bool* get_address_of_IsAbstract_3() { return &___IsAbstract_3; }
	inline void set_IsAbstract_3(bool value)
	{
		___IsAbstract_3 = value;
	}

	inline static int32_t get_offset_of_IsArray_4() { return static_cast<int32_t>(offsetof(RuntimeTypeInfoCache_1_t15EBBC0C1A5785754449EF41C13129587F6AB1E0_StaticFields, ___IsArray_4)); }
	inline bool get_IsArray_4() const { return ___IsArray_4; }
	inline bool* get_address_of_IsArray_4() { return &___IsArray_4; }
	inline void set_IsArray_4(bool value)
	{
		___IsArray_4 = value;
	}

	inline static int32_t get_offset_of_IsEnum_5() { return static_cast<int32_t>(offsetof(RuntimeTypeInfoCache_1_t15EBBC0C1A5785754449EF41C13129587F6AB1E0_StaticFields, ___IsEnum_5)); }
	inline bool get_IsEnum_5() const { return ___IsEnum_5; }
	inline bool* get_address_of_IsEnum_5() { return &___IsEnum_5; }
	inline void set_IsEnum_5(bool value)
	{
		___IsEnum_5 = value;
	}

	inline static int32_t get_offset_of_IsEnumFlags_6() { return static_cast<int32_t>(offsetof(RuntimeTypeInfoCache_1_t15EBBC0C1A5785754449EF41C13129587F6AB1E0_StaticFields, ___IsEnumFlags_6)); }
	inline bool get_IsEnumFlags_6() const { return ___IsEnumFlags_6; }
	inline bool* get_address_of_IsEnumFlags_6() { return &___IsEnumFlags_6; }
	inline void set_IsEnumFlags_6(bool value)
	{
		___IsEnumFlags_6 = value;
	}

	inline static int32_t get_offset_of_IsNullable_7() { return static_cast<int32_t>(offsetof(RuntimeTypeInfoCache_1_t15EBBC0C1A5785754449EF41C13129587F6AB1E0_StaticFields, ___IsNullable_7)); }
	inline bool get_IsNullable_7() const { return ___IsNullable_7; }
	inline bool* get_address_of_IsNullable_7() { return &___IsNullable_7; }
	inline void set_IsNullable_7(bool value)
	{
		___IsNullable_7 = value;
	}

	inline static int32_t get_offset_of_IsObjectType_8() { return static_cast<int32_t>(offsetof(RuntimeTypeInfoCache_1_t15EBBC0C1A5785754449EF41C13129587F6AB1E0_StaticFields, ___IsObjectType_8)); }
	inline bool get_IsObjectType_8() const { return ___IsObjectType_8; }
	inline bool* get_address_of_IsObjectType_8() { return &___IsObjectType_8; }
	inline void set_IsObjectType_8(bool value)
	{
		___IsObjectType_8 = value;
	}

	inline static int32_t get_offset_of_IsStringType_9() { return static_cast<int32_t>(offsetof(RuntimeTypeInfoCache_1_t15EBBC0C1A5785754449EF41C13129587F6AB1E0_StaticFields, ___IsStringType_9)); }
	inline bool get_IsStringType_9() const { return ___IsStringType_9; }
	inline bool* get_address_of_IsStringType_9() { return &___IsStringType_9; }
	inline void set_IsStringType_9(bool value)
	{
		___IsStringType_9 = value;
	}

	inline static int32_t get_offset_of_IsContainerType_10() { return static_cast<int32_t>(offsetof(RuntimeTypeInfoCache_1_t15EBBC0C1A5785754449EF41C13129587F6AB1E0_StaticFields, ___IsContainerType_10)); }
	inline bool get_IsContainerType_10() const { return ___IsContainerType_10; }
	inline bool* get_address_of_IsContainerType_10() { return &___IsContainerType_10; }
	inline void set_IsContainerType_10(bool value)
	{
		___IsContainerType_10 = value;
	}

	inline static int32_t get_offset_of_CanBeNull_11() { return static_cast<int32_t>(offsetof(RuntimeTypeInfoCache_1_t15EBBC0C1A5785754449EF41C13129587F6AB1E0_StaticFields, ___CanBeNull_11)); }
	inline bool get_CanBeNull_11() const { return ___CanBeNull_11; }
	inline bool* get_address_of_CanBeNull_11() { return &___CanBeNull_11; }
	inline void set_CanBeNull_11(bool value)
	{
		___CanBeNull_11 = value;
	}

	inline static int32_t get_offset_of_IsNullableOrEnum_12() { return static_cast<int32_t>(offsetof(RuntimeTypeInfoCache_1_t15EBBC0C1A5785754449EF41C13129587F6AB1E0_StaticFields, ___IsNullableOrEnum_12)); }
	inline bool get_IsNullableOrEnum_12() const { return ___IsNullableOrEnum_12; }
	inline bool* get_address_of_IsNullableOrEnum_12() { return &___IsNullableOrEnum_12; }
	inline void set_IsNullableOrEnum_12(bool value)
	{
		___IsNullableOrEnum_12 = value;
	}

	inline static int32_t get_offset_of_IsPrimitiveOrString_13() { return static_cast<int32_t>(offsetof(RuntimeTypeInfoCache_1_t15EBBC0C1A5785754449EF41C13129587F6AB1E0_StaticFields, ___IsPrimitiveOrString_13)); }
	inline bool get_IsPrimitiveOrString_13() const { return ___IsPrimitiveOrString_13; }
	inline bool* get_address_of_IsPrimitiveOrString_13() { return &___IsPrimitiveOrString_13; }
	inline void set_IsPrimitiveOrString_13(bool value)
	{
		___IsPrimitiveOrString_13 = value;
	}

	inline static int32_t get_offset_of_IsAbstractOrInterface_14() { return static_cast<int32_t>(offsetof(RuntimeTypeInfoCache_1_t15EBBC0C1A5785754449EF41C13129587F6AB1E0_StaticFields, ___IsAbstractOrInterface_14)); }
	inline bool get_IsAbstractOrInterface_14() const { return ___IsAbstractOrInterface_14; }
	inline bool* get_address_of_IsAbstractOrInterface_14() { return &___IsAbstractOrInterface_14; }
	inline void set_IsAbstractOrInterface_14(bool value)
	{
		___IsAbstractOrInterface_14 = value;
	}

	inline static int32_t get_offset_of_IsLazyLoadReference_15() { return static_cast<int32_t>(offsetof(RuntimeTypeInfoCache_1_t15EBBC0C1A5785754449EF41C13129587F6AB1E0_StaticFields, ___IsLazyLoadReference_15)); }
	inline bool get_IsLazyLoadReference_15() const { return ___IsLazyLoadReference_15; }
	inline bool* get_address_of_IsLazyLoadReference_15() { return &___IsLazyLoadReference_15; }
	inline void set_IsLazyLoadReference_15(bool value)
	{
		___IsLazyLoadReference_15 = value;
	}
};


// Unity.Properties.Internal.RuntimeTypeInfoCache`1<UnityEngine.Vector3Int>
struct RuntimeTypeInfoCache_1_tCD8F19191F9C5C2460B8B66CC3208CFFE9F5EFA6 
{
public:
	union
	{
		struct
		{
		};
		uint8_t RuntimeTypeInfoCache_1_t30A0A6BC09AD64184AFB882CF46291A815E10EDD__padding[1];
	};

public:
};

struct RuntimeTypeInfoCache_1_tCD8F19191F9C5C2460B8B66CC3208CFFE9F5EFA6_StaticFields
{
public:
	// System.Boolean Unity.Properties.Internal.RuntimeTypeInfoCache`1::IsValueType
	bool ___IsValueType_0;
	// System.Boolean Unity.Properties.Internal.RuntimeTypeInfoCache`1::IsPrimitive
	bool ___IsPrimitive_1;
	// System.Boolean Unity.Properties.Internal.RuntimeTypeInfoCache`1::IsInterface
	bool ___IsInterface_2;
	// System.Boolean Unity.Properties.Internal.RuntimeTypeInfoCache`1::IsAbstract
	bool ___IsAbstract_3;
	// System.Boolean Unity.Properties.Internal.RuntimeTypeInfoCache`1::IsArray
	bool ___IsArray_4;
	// System.Boolean Unity.Properties.Internal.RuntimeTypeInfoCache`1::IsEnum
	bool ___IsEnum_5;
	// System.Boolean Unity.Properties.Internal.RuntimeTypeInfoCache`1::IsEnumFlags
	bool ___IsEnumFlags_6;
	// System.Boolean Unity.Properties.Internal.RuntimeTypeInfoCache`1::IsNullable
	bool ___IsNullable_7;
	// System.Boolean Unity.Properties.Internal.RuntimeTypeInfoCache`1::IsObjectType
	bool ___IsObjectType_8;
	// System.Boolean Unity.Properties.Internal.RuntimeTypeInfoCache`1::IsStringType
	bool ___IsStringType_9;
	// System.Boolean Unity.Properties.Internal.RuntimeTypeInfoCache`1::IsContainerType
	bool ___IsContainerType_10;
	// System.Boolean Unity.Properties.Internal.RuntimeTypeInfoCache`1::CanBeNull
	bool ___CanBeNull_11;
	// System.Boolean Unity.Properties.Internal.RuntimeTypeInfoCache`1::IsNullableOrEnum
	bool ___IsNullableOrEnum_12;
	// System.Boolean Unity.Properties.Internal.RuntimeTypeInfoCache`1::IsPrimitiveOrString
	bool ___IsPrimitiveOrString_13;
	// System.Boolean Unity.Properties.Internal.RuntimeTypeInfoCache`1::IsAbstractOrInterface
	bool ___IsAbstractOrInterface_14;
	// System.Boolean Unity.Properties.Internal.RuntimeTypeInfoCache`1::IsLazyLoadReference
	bool ___IsLazyLoadReference_15;

public:
	inline static int32_t get_offset_of_IsValueType_0() { return static_cast<int32_t>(offsetof(RuntimeTypeInfoCache_1_tCD8F19191F9C5C2460B8B66CC3208CFFE9F5EFA6_StaticFields, ___IsValueType_0)); }
	inline bool get_IsValueType_0() const { return ___IsValueType_0; }
	inline bool* get_address_of_IsValueType_0() { return &___IsValueType_0; }
	inline void set_IsValueType_0(bool value)
	{
		___IsValueType_0 = value;
	}

	inline static int32_t get_offset_of_IsPrimitive_1() { return static_cast<int32_t>(offsetof(RuntimeTypeInfoCache_1_tCD8F19191F9C5C2460B8B66CC3208CFFE9F5EFA6_StaticFields, ___IsPrimitive_1)); }
	inline bool get_IsPrimitive_1() const { return ___IsPrimitive_1; }
	inline bool* get_address_of_IsPrimitive_1() { return &___IsPrimitive_1; }
	inline void set_IsPrimitive_1(bool value)
	{
		___IsPrimitive_1 = value;
	}

	inline static int32_t get_offset_of_IsInterface_2() { return static_cast<int32_t>(offsetof(RuntimeTypeInfoCache_1_tCD8F19191F9C5C2460B8B66CC3208CFFE9F5EFA6_StaticFields, ___IsInterface_2)); }
	inline bool get_IsInterface_2() const { return ___IsInterface_2; }
	inline bool* get_address_of_IsInterface_2() { return &___IsInterface_2; }
	inline void set_IsInterface_2(bool value)
	{
		___IsInterface_2 = value;
	}

	inline static int32_t get_offset_of_IsAbstract_3() { return static_cast<int32_t>(offsetof(RuntimeTypeInfoCache_1_tCD8F19191F9C5C2460B8B66CC3208CFFE9F5EFA6_StaticFields, ___IsAbstract_3)); }
	inline bool get_IsAbstract_3() const { return ___IsAbstract_3; }
	inline bool* get_address_of_IsAbstract_3() { return &___IsAbstract_3; }
	inline void set_IsAbstract_3(bool value)
	{
		___IsAbstract_3 = value;
	}

	inline static int32_t get_offset_of_IsArray_4() { return static_cast<int32_t>(offsetof(RuntimeTypeInfoCache_1_tCD8F19191F9C5C2460B8B66CC3208CFFE9F5EFA6_StaticFields, ___IsArray_4)); }
	inline bool get_IsArray_4() const { return ___IsArray_4; }
	inline bool* get_address_of_IsArray_4() { return &___IsArray_4; }
	inline void set_IsArray_4(bool value)
	{
		___IsArray_4 = value;
	}

	inline static int32_t get_offset_of_IsEnum_5() { return static_cast<int32_t>(offsetof(RuntimeTypeInfoCache_1_tCD8F19191F9C5C2460B8B66CC3208CFFE9F5EFA6_StaticFields, ___IsEnum_5)); }
	inline bool get_IsEnum_5() const { return ___IsEnum_5; }
	inline bool* get_address_of_IsEnum_5() { return &___IsEnum_5; }
	inline void set_IsEnum_5(bool value)
	{
		___IsEnum_5 = value;
	}

	inline static int32_t get_offset_of_IsEnumFlags_6() { return static_cast<int32_t>(offsetof(RuntimeTypeInfoCache_1_tCD8F19191F9C5C2460B8B66CC3208CFFE9F5EFA6_StaticFields, ___IsEnumFlags_6)); }
	inline bool get_IsEnumFlags_6() const { return ___IsEnumFlags_6; }
	inline bool* get_address_of_IsEnumFlags_6() { return &___IsEnumFlags_6; }
	inline void set_IsEnumFlags_6(bool value)
	{
		___IsEnumFlags_6 = value;
	}

	inline static int32_t get_offset_of_IsNullable_7() { return static_cast<int32_t>(offsetof(RuntimeTypeInfoCache_1_tCD8F19191F9C5C2460B8B66CC3208CFFE9F5EFA6_StaticFields, ___IsNullable_7)); }
	inline bool get_IsNullable_7() const { return ___IsNullable_7; }
	inline bool* get_address_of_IsNullable_7() { return &___IsNullable_7; }
	inline void set_IsNullable_7(bool value)
	{
		___IsNullable_7 = value;
	}

	inline static int32_t get_offset_of_IsObjectType_8() { return static_cast<int32_t>(offsetof(RuntimeTypeInfoCache_1_tCD8F19191F9C5C2460B8B66CC3208CFFE9F5EFA6_StaticFields, ___IsObjectType_8)); }
	inline bool get_IsObjectType_8() const { return ___IsObjectType_8; }
	inline bool* get_address_of_IsObjectType_8() { return &___IsObjectType_8; }
	inline void set_IsObjectType_8(bool value)
	{
		___IsObjectType_8 = value;
	}

	inline static int32_t get_offset_of_IsStringType_9() { return static_cast<int32_t>(offsetof(RuntimeTypeInfoCache_1_tCD8F19191F9C5C2460B8B66CC3208CFFE9F5EFA6_StaticFields, ___IsStringType_9)); }
	inline bool get_IsStringType_9() const { return ___IsStringType_9; }
	inline bool* get_address_of_IsStringType_9() { return &___IsStringType_9; }
	inline void set_IsStringType_9(bool value)
	{
		___IsStringType_9 = value;
	}

	inline static int32_t get_offset_of_IsContainerType_10() { return static_cast<int32_t>(offsetof(RuntimeTypeInfoCache_1_tCD8F19191F9C5C2460B8B66CC3208CFFE9F5EFA6_StaticFields, ___IsContainerType_10)); }
	inline bool get_IsContainerType_10() const { return ___IsContainerType_10; }
	inline bool* get_address_of_IsContainerType_10() { return &___IsContainerType_10; }
	inline void set_IsContainerType_10(bool value)
	{
		___IsContainerType_10 = value;
	}

	inline static int32_t get_offset_of_CanBeNull_11() { return static_cast<int32_t>(offsetof(RuntimeTypeInfoCache_1_tCD8F19191F9C5C2460B8B66CC3208CFFE9F5EFA6_StaticFields, ___CanBeNull_11)); }
	inline bool get_CanBeNull_11() const { return ___CanBeNull_11; }
	inline bool* get_address_of_CanBeNull_11() { return &___CanBeNull_11; }
	inline void set_CanBeNull_11(bool value)
	{
		___CanBeNull_11 = value;
	}

	inline static int32_t get_offset_of_IsNullableOrEnum_12() { return static_cast<int32_t>(offsetof(RuntimeTypeInfoCache_1_tCD8F19191F9C5C2460B8B66CC3208CFFE9F5EFA6_StaticFields, ___IsNullableOrEnum_12)); }
	inline bool get_IsNullableOrEnum_12() const { return ___IsNullableOrEnum_12; }
	inline bool* get_address_of_IsNullableOrEnum_12() { return &___IsNullableOrEnum_12; }
	inline void set_IsNullableOrEnum_12(bool value)
	{
		___IsNullableOrEnum_12 = value;
	}

	inline static int32_t get_offset_of_IsPrimitiveOrString_13() { return static_cast<int32_t>(offsetof(RuntimeTypeInfoCache_1_tCD8F19191F9C5C2460B8B66CC3208CFFE9F5EFA6_StaticFields, ___IsPrimitiveOrString_13)); }
	inline bool get_IsPrimitiveOrString_13() const { return ___IsPrimitiveOrString_13; }
	inline bool* get_address_of_IsPrimitiveOrString_13() { return &___IsPrimitiveOrString_13; }
	inline void set_IsPrimitiveOrString_13(bool value)
	{
		___IsPrimitiveOrString_13 = value;
	}

	inline static int32_t get_offset_of_IsAbstractOrInterface_14() { return static_cast<int32_t>(offsetof(RuntimeTypeInfoCache_1_tCD8F19191F9C5C2460B8B66CC3208CFFE9F5EFA6_StaticFields, ___IsAbstractOrInterface_14)); }
	inline bool get_IsAbstractOrInterface_14() const { return ___IsAbstractOrInterface_14; }
	inline bool* get_address_of_IsAbstractOrInterface_14() { return &___IsAbstractOrInterface_14; }
	inline void set_IsAbstractOrInterface_14(bool value)
	{
		___IsAbstractOrInterface_14 = value;
	}

	inline static int32_t get_offset_of_IsLazyLoadReference_15() { return static_cast<int32_t>(offsetof(RuntimeTypeInfoCache_1_tCD8F19191F9C5C2460B8B66CC3208CFFE9F5EFA6_StaticFields, ___IsLazyLoadReference_15)); }
	inline bool get_IsLazyLoadReference_15() const { return ___IsLazyLoadReference_15; }
	inline bool* get_address_of_IsLazyLoadReference_15() { return &___IsLazyLoadReference_15; }
	inline void set_IsLazyLoadReference_15(bool value)
	{
		___IsLazyLoadReference_15 = value;
	}
};


// Unity.Properties.Internal.RuntimeTypeInfoCache`1<Unity.MARS.Companion.Core.CompanionDataRecordingUtils/CameraPathRecording>
struct RuntimeTypeInfoCache_1_t2771EEEA6D087119F546F59F2D8F445E76C2E47D 
{
public:
	union
	{
		struct
		{
		};
		uint8_t RuntimeTypeInfoCache_1_t30A0A6BC09AD64184AFB882CF46291A815E10EDD__padding[1];
	};

public:
};

struct RuntimeTypeInfoCache_1_t2771EEEA6D087119F546F59F2D8F445E76C2E47D_StaticFields
{
public:
	// System.Boolean Unity.Properties.Internal.RuntimeTypeInfoCache`1::IsValueType
	bool ___IsValueType_0;
	// System.Boolean Unity.Properties.Internal.RuntimeTypeInfoCache`1::IsPrimitive
	bool ___IsPrimitive_1;
	// System.Boolean Unity.Properties.Internal.RuntimeTypeInfoCache`1::IsInterface
	bool ___IsInterface_2;
	// System.Boolean Unity.Properties.Internal.RuntimeTypeInfoCache`1::IsAbstract
	bool ___IsAbstract_3;
	// System.Boolean Unity.Properties.Internal.RuntimeTypeInfoCache`1::IsArray
	bool ___IsArray_4;
	// System.Boolean Unity.Properties.Internal.RuntimeTypeInfoCache`1::IsEnum
	bool ___IsEnum_5;
	// System.Boolean Unity.Properties.Internal.RuntimeTypeInfoCache`1::IsEnumFlags
	bool ___IsEnumFlags_6;
	// System.Boolean Unity.Properties.Internal.RuntimeTypeInfoCache`1::IsNullable
	bool ___IsNullable_7;
	// System.Boolean Unity.Properties.Internal.RuntimeTypeInfoCache`1::IsObjectType
	bool ___IsObjectType_8;
	// System.Boolean Unity.Properties.Internal.RuntimeTypeInfoCache`1::IsStringType
	bool ___IsStringType_9;
	// System.Boolean Unity.Properties.Internal.RuntimeTypeInfoCache`1::IsContainerType
	bool ___IsContainerType_10;
	// System.Boolean Unity.Properties.Internal.RuntimeTypeInfoCache`1::CanBeNull
	bool ___CanBeNull_11;
	// System.Boolean Unity.Properties.Internal.RuntimeTypeInfoCache`1::IsNullableOrEnum
	bool ___IsNullableOrEnum_12;
	// System.Boolean Unity.Properties.Internal.RuntimeTypeInfoCache`1::IsPrimitiveOrString
	bool ___IsPrimitiveOrString_13;
	// System.Boolean Unity.Properties.Internal.RuntimeTypeInfoCache`1::IsAbstractOrInterface
	bool ___IsAbstractOrInterface_14;
	// System.Boolean Unity.Properties.Internal.RuntimeTypeInfoCache`1::IsLazyLoadReference
	bool ___IsLazyLoadReference_15;

public:
	inline static int32_t get_offset_of_IsValueType_0() { return static_cast<int32_t>(offsetof(RuntimeTypeInfoCache_1_t2771EEEA6D087119F546F59F2D8F445E76C2E47D_StaticFields, ___IsValueType_0)); }
	inline bool get_IsValueType_0() const { return ___IsValueType_0; }
	inline bool* get_address_of_IsValueType_0() { return &___IsValueType_0; }
	inline void set_IsValueType_0(bool value)
	{
		___IsValueType_0 = value;
	}

	inline static int32_t get_offset_of_IsPrimitive_1() { return static_cast<int32_t>(offsetof(RuntimeTypeInfoCache_1_t2771EEEA6D087119F546F59F2D8F445E76C2E47D_StaticFields, ___IsPrimitive_1)); }
	inline bool get_IsPrimitive_1() const { return ___IsPrimitive_1; }
	inline bool* get_address_of_IsPrimitive_1() { return &___IsPrimitive_1; }
	inline void set_IsPrimitive_1(bool value)
	{
		___IsPrimitive_1 = value;
	}

	inline static int32_t get_offset_of_IsInterface_2() { return static_cast<int32_t>(offsetof(RuntimeTypeInfoCache_1_t2771EEEA6D087119F546F59F2D8F445E76C2E47D_StaticFields, ___IsInterface_2)); }
	inline bool get_IsInterface_2() const { return ___IsInterface_2; }
	inline bool* get_address_of_IsInterface_2() { return &___IsInterface_2; }
	inline void set_IsInterface_2(bool value)
	{
		___IsInterface_2 = value;
	}

	inline static int32_t get_offset_of_IsAbstract_3() { return static_cast<int32_t>(offsetof(RuntimeTypeInfoCache_1_t2771EEEA6D087119F546F59F2D8F445E76C2E47D_StaticFields, ___IsAbstract_3)); }
	inline bool get_IsAbstract_3() const { return ___IsAbstract_3; }
	inline bool* get_address_of_IsAbstract_3() { return &___IsAbstract_3; }
	inline void set_IsAbstract_3(bool value)
	{
		___IsAbstract_3 = value;
	}

	inline static int32_t get_offset_of_IsArray_4() { return static_cast<int32_t>(offsetof(RuntimeTypeInfoCache_1_t2771EEEA6D087119F546F59F2D8F445E76C2E47D_StaticFields, ___IsArray_4)); }
	inline bool get_IsArray_4() const { return ___IsArray_4; }
	inline bool* get_address_of_IsArray_4() { return &___IsArray_4; }
	inline void set_IsArray_4(bool value)
	{
		___IsArray_4 = value;
	}

	inline static int32_t get_offset_of_IsEnum_5() { return static_cast<int32_t>(offsetof(RuntimeTypeInfoCache_1_t2771EEEA6D087119F546F59F2D8F445E76C2E47D_StaticFields, ___IsEnum_5)); }
	inline bool get_IsEnum_5() const { return ___IsEnum_5; }
	inline bool* get_address_of_IsEnum_5() { return &___IsEnum_5; }
	inline void set_IsEnum_5(bool value)
	{
		___IsEnum_5 = value;
	}

	inline static int32_t get_offset_of_IsEnumFlags_6() { return static_cast<int32_t>(offsetof(RuntimeTypeInfoCache_1_t2771EEEA6D087119F546F59F2D8F445E76C2E47D_StaticFields, ___IsEnumFlags_6)); }
	inline bool get_IsEnumFlags_6() const { return ___IsEnumFlags_6; }
	inline bool* get_address_of_IsEnumFlags_6() { return &___IsEnumFlags_6; }
	inline void set_IsEnumFlags_6(bool value)
	{
		___IsEnumFlags_6 = value;
	}

	inline static int32_t get_offset_of_IsNullable_7() { return static_cast<int32_t>(offsetof(RuntimeTypeInfoCache_1_t2771EEEA6D087119F546F59F2D8F445E76C2E47D_StaticFields, ___IsNullable_7)); }
	inline bool get_IsNullable_7() const { return ___IsNullable_7; }
	inline bool* get_address_of_IsNullable_7() { return &___IsNullable_7; }
	inline void set_IsNullable_7(bool value)
	{
		___IsNullable_7 = value;
	}

	inline static int32_t get_offset_of_IsObjectType_8() { return static_cast<int32_t>(offsetof(RuntimeTypeInfoCache_1_t2771EEEA6D087119F546F59F2D8F445E76C2E47D_StaticFields, ___IsObjectType_8)); }
	inline bool get_IsObjectType_8() const { return ___IsObjectType_8; }
	inline bool* get_address_of_IsObjectType_8() { return &___IsObjectType_8; }
	inline void set_IsObjectType_8(bool value)
	{
		___IsObjectType_8 = value;
	}

	inline static int32_t get_offset_of_IsStringType_9() { return static_cast<int32_t>(offsetof(RuntimeTypeInfoCache_1_t2771EEEA6D087119F546F59F2D8F445E76C2E47D_StaticFields, ___IsStringType_9)); }
	inline bool get_IsStringType_9() const { return ___IsStringType_9; }
	inline bool* get_address_of_IsStringType_9() { return &___IsStringType_9; }
	inline void set_IsStringType_9(bool value)
	{
		___IsStringType_9 = value;
	}

	inline static int32_t get_offset_of_IsContainerType_10() { return static_cast<int32_t>(offsetof(RuntimeTypeInfoCache_1_t2771EEEA6D087119F546F59F2D8F445E76C2E47D_StaticFields, ___IsContainerType_10)); }
	inline bool get_IsContainerType_10() const { return ___IsContainerType_10; }
	inline bool* get_address_of_IsContainerType_10() { return &___IsContainerType_10; }
	inline void set_IsContainerType_10(bool value)
	{
		___IsContainerType_10 = value;
	}

	inline static int32_t get_offset_of_CanBeNull_11() { return static_cast<int32_t>(offsetof(RuntimeTypeInfoCache_1_t2771EEEA6D087119F546F59F2D8F445E76C2E47D_StaticFields, ___CanBeNull_11)); }
	inline bool get_CanBeNull_11() const { return ___CanBeNull_11; }
	inline bool* get_address_of_CanBeNull_11() { return &___CanBeNull_11; }
	inline void set_CanBeNull_11(bool value)
	{
		___CanBeNull_11 = value;
	}

	inline static int32_t get_offset_of_IsNullableOrEnum_12() { return static_cast<int32_t>(offsetof(RuntimeTypeInfoCache_1_t2771EEEA6D087119F546F59F2D8F445E76C2E47D_StaticFields, ___IsNullableOrEnum_12)); }
	inline bool get_IsNullableOrEnum_12() const { return ___IsNullableOrEnum_12; }
	inline bool* get_address_of_IsNullableOrEnum_12() { return &___IsNullableOrEnum_12; }
	inline void set_IsNullableOrEnum_12(bool value)
	{
		___IsNullableOrEnum_12 = value;
	}

	inline static int32_t get_offset_of_IsPrimitiveOrString_13() { return static_cast<int32_t>(offsetof(RuntimeTypeInfoCache_1_t2771EEEA6D087119F546F59F2D8F445E76C2E47D_StaticFields, ___IsPrimitiveOrString_13)); }
	inline bool get_IsPrimitiveOrString_13() const { return ___IsPrimitiveOrString_13; }
	inline bool* get_address_of_IsPrimitiveOrString_13() { return &___IsPrimitiveOrString_13; }
	inline void set_IsPrimitiveOrString_13(bool value)
	{
		___IsPrimitiveOrString_13 = value;
	}

	inline static int32_t get_offset_of_IsAbstractOrInterface_14() { return static_cast<int32_t>(offsetof(RuntimeTypeInfoCache_1_t2771EEEA6D087119F546F59F2D8F445E76C2E47D_StaticFields, ___IsAbstractOrInterface_14)); }
	inline bool get_IsAbstractOrInterface_14() const { return ___IsAbstractOrInterface_14; }
	inline bool* get_address_of_IsAbstractOrInterface_14() { return &___IsAbstractOrInterface_14; }
	inline void set_IsAbstractOrInterface_14(bool value)
	{
		___IsAbstractOrInterface_14 = value;
	}

	inline static int32_t get_offset_of_IsLazyLoadReference_15() { return static_cast<int32_t>(offsetof(RuntimeTypeInfoCache_1_t2771EEEA6D087119F546F59F2D8F445E76C2E47D_StaticFields, ___IsLazyLoadReference_15)); }
	inline bool get_IsLazyLoadReference_15() const { return ___IsLazyLoadReference_15; }
	inline bool* get_address_of_IsLazyLoadReference_15() { return &___IsLazyLoadReference_15; }
	inline void set_IsLazyLoadReference_15(bool value)
	{
		___IsLazyLoadReference_15 = value;
	}
};


// Unity.Properties.Internal.RuntimeTypeInfoCache`1<Unity.MARS.Companion.Core.CompanionDataRecordingUtils/PlaneDataRecording>
struct RuntimeTypeInfoCache_1_tBCE33614A1A2D6EF394ADF44898864DE0DABCBF4 
{
public:
	union
	{
		struct
		{
		};
		uint8_t RuntimeTypeInfoCache_1_t30A0A6BC09AD64184AFB882CF46291A815E10EDD__padding[1];
	};

public:
};

struct RuntimeTypeInfoCache_1_tBCE33614A1A2D6EF394ADF44898864DE0DABCBF4_StaticFields
{
public:
	// System.Boolean Unity.Properties.Internal.RuntimeTypeInfoCache`1::IsValueType
	bool ___IsValueType_0;
	// System.Boolean Unity.Properties.Internal.RuntimeTypeInfoCache`1::IsPrimitive
	bool ___IsPrimitive_1;
	// System.Boolean Unity.Properties.Internal.RuntimeTypeInfoCache`1::IsInterface
	bool ___IsInterface_2;
	// System.Boolean Unity.Properties.Internal.RuntimeTypeInfoCache`1::IsAbstract
	bool ___IsAbstract_3;
	// System.Boolean Unity.Properties.Internal.RuntimeTypeInfoCache`1::IsArray
	bool ___IsArray_4;
	// System.Boolean Unity.Properties.Internal.RuntimeTypeInfoCache`1::IsEnum
	bool ___IsEnum_5;
	// System.Boolean Unity.Properties.Internal.RuntimeTypeInfoCache`1::IsEnumFlags
	bool ___IsEnumFlags_6;
	// System.Boolean Unity.Properties.Internal.RuntimeTypeInfoCache`1::IsNullable
	bool ___IsNullable_7;
	// System.Boolean Unity.Properties.Internal.RuntimeTypeInfoCache`1::IsObjectType
	bool ___IsObjectType_8;
	// System.Boolean Unity.Properties.Internal.RuntimeTypeInfoCache`1::IsStringType
	bool ___IsStringType_9;
	// System.Boolean Unity.Properties.Internal.RuntimeTypeInfoCache`1::IsContainerType
	bool ___IsContainerType_10;
	// System.Boolean Unity.Properties.Internal.RuntimeTypeInfoCache`1::CanBeNull
	bool ___CanBeNull_11;
	// System.Boolean Unity.Properties.Internal.RuntimeTypeInfoCache`1::IsNullableOrEnum
	bool ___IsNullableOrEnum_12;
	// System.Boolean Unity.Properties.Internal.RuntimeTypeInfoCache`1::IsPrimitiveOrString
	bool ___IsPrimitiveOrString_13;
	// System.Boolean Unity.Properties.Internal.RuntimeTypeInfoCache`1::IsAbstractOrInterface
	bool ___IsAbstractOrInterface_14;
	// System.Boolean Unity.Properties.Internal.RuntimeTypeInfoCache`1::IsLazyLoadReference
	bool ___IsLazyLoadReference_15;

public:
	inline static int32_t get_offset_of_IsValueType_0() { return static_cast<int32_t>(offsetof(RuntimeTypeInfoCache_1_tBCE33614A1A2D6EF394ADF44898864DE0DABCBF4_StaticFields, ___IsValueType_0)); }
	inline bool get_IsValueType_0() const { return ___IsValueType_0; }
	inline bool* get_address_of_IsValueType_0() { return &___IsValueType_0; }
	inline void set_IsValueType_0(bool value)
	{
		___IsValueType_0 = value;
	}

	inline static int32_t get_offset_of_IsPrimitive_1() { return static_cast<int32_t>(offsetof(RuntimeTypeInfoCache_1_tBCE33614A1A2D6EF394ADF44898864DE0DABCBF4_StaticFields, ___IsPrimitive_1)); }
	inline bool get_IsPrimitive_1() const { return ___IsPrimitive_1; }
	inline bool* get_address_of_IsPrimitive_1() { return &___IsPrimitive_1; }
	inline void set_IsPrimitive_1(bool value)
	{
		___IsPrimitive_1 = value;
	}

	inline static int32_t get_offset_of_IsInterface_2() { return static_cast<int32_t>(offsetof(RuntimeTypeInfoCache_1_tBCE33614A1A2D6EF394ADF44898864DE0DABCBF4_StaticFields, ___IsInterface_2)); }
	inline bool get_IsInterface_2() const { return ___IsInterface_2; }
	inline bool* get_address_of_IsInterface_2() { return &___IsInterface_2; }
	inline void set_IsInterface_2(bool value)
	{
		___IsInterface_2 = value;
	}

	inline static int32_t get_offset_of_IsAbstract_3() { return static_cast<int32_t>(offsetof(RuntimeTypeInfoCache_1_tBCE33614A1A2D6EF394ADF44898864DE0DABCBF4_StaticFields, ___IsAbstract_3)); }
	inline bool get_IsAbstract_3() const { return ___IsAbstract_3; }
	inline bool* get_address_of_IsAbstract_3() { return &___IsAbstract_3; }
	inline void set_IsAbstract_3(bool value)
	{
		___IsAbstract_3 = value;
	}

	inline static int32_t get_offset_of_IsArray_4() { return static_cast<int32_t>(offsetof(RuntimeTypeInfoCache_1_tBCE33614A1A2D6EF394ADF44898864DE0DABCBF4_StaticFields, ___IsArray_4)); }
	inline bool get_IsArray_4() const { return ___IsArray_4; }
	inline bool* get_address_of_IsArray_4() { return &___IsArray_4; }
	inline void set_IsArray_4(bool value)
	{
		___IsArray_4 = value;
	}

	inline static int32_t get_offset_of_IsEnum_5() { return static_cast<int32_t>(offsetof(RuntimeTypeInfoCache_1_tBCE33614A1A2D6EF394ADF44898864DE0DABCBF4_StaticFields, ___IsEnum_5)); }
	inline bool get_IsEnum_5() const { return ___IsEnum_5; }
	inline bool* get_address_of_IsEnum_5() { return &___IsEnum_5; }
	inline void set_IsEnum_5(bool value)
	{
		___IsEnum_5 = value;
	}

	inline static int32_t get_offset_of_IsEnumFlags_6() { return static_cast<int32_t>(offsetof(RuntimeTypeInfoCache_1_tBCE33614A1A2D6EF394ADF44898864DE0DABCBF4_StaticFields, ___IsEnumFlags_6)); }
	inline bool get_IsEnumFlags_6() const { return ___IsEnumFlags_6; }
	inline bool* get_address_of_IsEnumFlags_6() { return &___IsEnumFlags_6; }
	inline void set_IsEnumFlags_6(bool value)
	{
		___IsEnumFlags_6 = value;
	}

	inline static int32_t get_offset_of_IsNullable_7() { return static_cast<int32_t>(offsetof(RuntimeTypeInfoCache_1_tBCE33614A1A2D6EF394ADF44898864DE0DABCBF4_StaticFields, ___IsNullable_7)); }
	inline bool get_IsNullable_7() const { return ___IsNullable_7; }
	inline bool* get_address_of_IsNullable_7() { return &___IsNullable_7; }
	inline void set_IsNullable_7(bool value)
	{
		___IsNullable_7 = value;
	}

	inline static int32_t get_offset_of_IsObjectType_8() { return static_cast<int32_t>(offsetof(RuntimeTypeInfoCache_1_tBCE33614A1A2D6EF394ADF44898864DE0DABCBF4_StaticFields, ___IsObjectType_8)); }
	inline bool get_IsObjectType_8() const { return ___IsObjectType_8; }
	inline bool* get_address_of_IsObjectType_8() { return &___IsObjectType_8; }
	inline void set_IsObjectType_8(bool value)
	{
		___IsObjectType_8 = value;
	}

	inline static int32_t get_offset_of_IsStringType_9() { return static_cast<int32_t>(offsetof(RuntimeTypeInfoCache_1_tBCE33614A1A2D6EF394ADF44898864DE0DABCBF4_StaticFields, ___IsStringType_9)); }
	inline bool get_IsStringType_9() const { return ___IsStringType_9; }
	inline bool* get_address_of_IsStringType_9() { return &___IsStringType_9; }
	inline void set_IsStringType_9(bool value)
	{
		___IsStringType_9 = value;
	}

	inline static int32_t get_offset_of_IsContainerType_10() { return static_cast<int32_t>(offsetof(RuntimeTypeInfoCache_1_tBCE33614A1A2D6EF394ADF44898864DE0DABCBF4_StaticFields, ___IsContainerType_10)); }
	inline bool get_IsContainerType_10() const { return ___IsContainerType_10; }
	inline bool* get_address_of_IsContainerType_10() { return &___IsContainerType_10; }
	inline void set_IsContainerType_10(bool value)
	{
		___IsContainerType_10 = value;
	}

	inline static int32_t get_offset_of_CanBeNull_11() { return static_cast<int32_t>(offsetof(RuntimeTypeInfoCache_1_tBCE33614A1A2D6EF394ADF44898864DE0DABCBF4_StaticFields, ___CanBeNull_11)); }
	inline bool get_CanBeNull_11() const { return ___CanBeNull_11; }
	inline bool* get_address_of_CanBeNull_11() { return &___CanBeNull_11; }
	inline void set_CanBeNull_11(bool value)
	{
		___CanBeNull_11 = value;
	}

	inline static int32_t get_offset_of_IsNullableOrEnum_12() { return static_cast<int32_t>(offsetof(RuntimeTypeInfoCache_1_tBCE33614A1A2D6EF394ADF44898864DE0DABCBF4_StaticFields, ___IsNullableOrEnum_12)); }
	inline bool get_IsNullableOrEnum_12() const { return ___IsNullableOrEnum_12; }
	inline bool* get_address_of_IsNullableOrEnum_12() { return &___IsNullableOrEnum_12; }
	inline void set_IsNullableOrEnum_12(bool value)
	{
		___IsNullableOrEnum_12 = value;
	}

	inline static int32_t get_offset_of_IsPrimitiveOrString_13() { return static_cast<int32_t>(offsetof(RuntimeTypeInfoCache_1_tBCE33614A1A2D6EF394ADF44898864DE0DABCBF4_StaticFields, ___IsPrimitiveOrString_13)); }
	inline bool get_IsPrimitiveOrString_13() const { return ___IsPrimitiveOrString_13; }
	inline bool* get_address_of_IsPrimitiveOrString_13() { return &___IsPrimitiveOrString_13; }
	inline void set_IsPrimitiveOrString_13(bool value)
	{
		___IsPrimitiveOrString_13 = value;
	}

	inline static int32_t get_offset_of_IsAbstractOrInterface_14() { return static_cast<int32_t>(offsetof(RuntimeTypeInfoCache_1_tBCE33614A1A2D6EF394ADF44898864DE0DABCBF4_StaticFields, ___IsAbstractOrInterface_14)); }
	inline bool get_IsAbstractOrInterface_14() const { return ___IsAbstractOrInterface_14; }
	inline bool* get_address_of_IsAbstractOrInterface_14() { return &___IsAbstractOrInterface_14; }
	inline void set_IsAbstractOrInterface_14(bool value)
	{
		___IsAbstractOrInterface_14 = value;
	}

	inline static int32_t get_offset_of_IsLazyLoadReference_15() { return static_cast<int32_t>(offsetof(RuntimeTypeInfoCache_1_tBCE33614A1A2D6EF394ADF44898864DE0DABCBF4_StaticFields, ___IsLazyLoadReference_15)); }
	inline bool get_IsLazyLoadReference_15() const { return ___IsLazyLoadReference_15; }
	inline bool* get_address_of_IsLazyLoadReference_15() { return &___IsLazyLoadReference_15; }
	inline void set_IsLazyLoadReference_15(bool value)
	{
		___IsLazyLoadReference_15 = value;
	}
};


// Unity.Properties.Internal.RuntimeTypeInfoCache`1<Unity.MARS.Companion.Core.CompanionDataRecordingUtils/PointCloudRecording>
struct RuntimeTypeInfoCache_1_t1CB03B7A3BAD29F1FEF115D7B99203758D9F897B 
{
public:
	union
	{
		struct
		{
		};
		uint8_t RuntimeTypeInfoCache_1_t30A0A6BC09AD64184AFB882CF46291A815E10EDD__padding[1];
	};

public:
};

struct RuntimeTypeInfoCache_1_t1CB03B7A3BAD29F1FEF115D7B99203758D9F897B_StaticFields
{
public:
	// System.Boolean Unity.Properties.Internal.RuntimeTypeInfoCache`1::IsValueType
	bool ___IsValueType_0;
	// System.Boolean Unity.Properties.Internal.RuntimeTypeInfoCache`1::IsPrimitive
	bool ___IsPrimitive_1;
	// System.Boolean Unity.Properties.Internal.RuntimeTypeInfoCache`1::IsInterface
	bool ___IsInterface_2;
	// System.Boolean Unity.Properties.Internal.RuntimeTypeInfoCache`1::IsAbstract
	bool ___IsAbstract_3;
	// System.Boolean Unity.Properties.Internal.RuntimeTypeInfoCache`1::IsArray
	bool ___IsArray_4;
	// System.Boolean Unity.Properties.Internal.RuntimeTypeInfoCache`1::IsEnum
	bool ___IsEnum_5;
	// System.Boolean Unity.Properties.Internal.RuntimeTypeInfoCache`1::IsEnumFlags
	bool ___IsEnumFlags_6;
	// System.Boolean Unity.Properties.Internal.RuntimeTypeInfoCache`1::IsNullable
	bool ___IsNullable_7;
	// System.Boolean Unity.Properties.Internal.RuntimeTypeInfoCache`1::IsObjectType
	bool ___IsObjectType_8;
	// System.Boolean Unity.Properties.Internal.RuntimeTypeInfoCache`1::IsStringType
	bool ___IsStringType_9;
	// System.Boolean Unity.Properties.Internal.RuntimeTypeInfoCache`1::IsContainerType
	bool ___IsContainerType_10;
	// System.Boolean Unity.Properties.Internal.RuntimeTypeInfoCache`1::CanBeNull
	bool ___CanBeNull_11;
	// System.Boolean Unity.Properties.Internal.RuntimeTypeInfoCache`1::IsNullableOrEnum
	bool ___IsNullableOrEnum_12;
	// System.Boolean Unity.Properties.Internal.RuntimeTypeInfoCache`1::IsPrimitiveOrString
	bool ___IsPrimitiveOrString_13;
	// System.Boolean Unity.Properties.Internal.RuntimeTypeInfoCache`1::IsAbstractOrInterface
	bool ___IsAbstractOrInterface_14;
	// System.Boolean Unity.Properties.Internal.RuntimeTypeInfoCache`1::IsLazyLoadReference
	bool ___IsLazyLoadReference_15;

public:
	inline static int32_t get_offset_of_IsValueType_0() { return static_cast<int32_t>(offsetof(RuntimeTypeInfoCache_1_t1CB03B7A3BAD29F1FEF115D7B99203758D9F897B_StaticFields, ___IsValueType_0)); }
	inline bool get_IsValueType_0() const { return ___IsValueType_0; }
	inline bool* get_address_of_IsValueType_0() { return &___IsValueType_0; }
	inline void set_IsValueType_0(bool value)
	{
		___IsValueType_0 = value;
	}

	inline static int32_t get_offset_of_IsPrimitive_1() { return static_cast<int32_t>(offsetof(RuntimeTypeInfoCache_1_t1CB03B7A3BAD29F1FEF115D7B99203758D9F897B_StaticFields, ___IsPrimitive_1)); }
	inline bool get_IsPrimitive_1() const { return ___IsPrimitive_1; }
	inline bool* get_address_of_IsPrimitive_1() { return &___IsPrimitive_1; }
	inline void set_IsPrimitive_1(bool value)
	{
		___IsPrimitive_1 = value;
	}

	inline static int32_t get_offset_of_IsInterface_2() { return static_cast<int32_t>(offsetof(RuntimeTypeInfoCache_1_t1CB03B7A3BAD29F1FEF115D7B99203758D9F897B_StaticFields, ___IsInterface_2)); }
	inline bool get_IsInterface_2() const { return ___IsInterface_2; }
	inline bool* get_address_of_IsInterface_2() { return &___IsInterface_2; }
	inline void set_IsInterface_2(bool value)
	{
		___IsInterface_2 = value;
	}

	inline static int32_t get_offset_of_IsAbstract_3() { return static_cast<int32_t>(offsetof(RuntimeTypeInfoCache_1_t1CB03B7A3BAD29F1FEF115D7B99203758D9F897B_StaticFields, ___IsAbstract_3)); }
	inline bool get_IsAbstract_3() const { return ___IsAbstract_3; }
	inline bool* get_address_of_IsAbstract_3() { return &___IsAbstract_3; }
	inline void set_IsAbstract_3(bool value)
	{
		___IsAbstract_3 = value;
	}

	inline static int32_t get_offset_of_IsArray_4() { return static_cast<int32_t>(offsetof(RuntimeTypeInfoCache_1_t1CB03B7A3BAD29F1FEF115D7B99203758D9F897B_StaticFields, ___IsArray_4)); }
	inline bool get_IsArray_4() const { return ___IsArray_4; }
	inline bool* get_address_of_IsArray_4() { return &___IsArray_4; }
	inline void set_IsArray_4(bool value)
	{
		___IsArray_4 = value;
	}

	inline static int32_t get_offset_of_IsEnum_5() { return static_cast<int32_t>(offsetof(RuntimeTypeInfoCache_1_t1CB03B7A3BAD29F1FEF115D7B99203758D9F897B_StaticFields, ___IsEnum_5)); }
	inline bool get_IsEnum_5() const { return ___IsEnum_5; }
	inline bool* get_address_of_IsEnum_5() { return &___IsEnum_5; }
	inline void set_IsEnum_5(bool value)
	{
		___IsEnum_5 = value;
	}

	inline static int32_t get_offset_of_IsEnumFlags_6() { return static_cast<int32_t>(offsetof(RuntimeTypeInfoCache_1_t1CB03B7A3BAD29F1FEF115D7B99203758D9F897B_StaticFields, ___IsEnumFlags_6)); }
	inline bool get_IsEnumFlags_6() const { return ___IsEnumFlags_6; }
	inline bool* get_address_of_IsEnumFlags_6() { return &___IsEnumFlags_6; }
	inline void set_IsEnumFlags_6(bool value)
	{
		___IsEnumFlags_6 = value;
	}

	inline static int32_t get_offset_of_IsNullable_7() { return static_cast<int32_t>(offsetof(RuntimeTypeInfoCache_1_t1CB03B7A3BAD29F1FEF115D7B99203758D9F897B_StaticFields, ___IsNullable_7)); }
	inline bool get_IsNullable_7() const { return ___IsNullable_7; }
	inline bool* get_address_of_IsNullable_7() { return &___IsNullable_7; }
	inline void set_IsNullable_7(bool value)
	{
		___IsNullable_7 = value;
	}

	inline static int32_t get_offset_of_IsObjectType_8() { return static_cast<int32_t>(offsetof(RuntimeTypeInfoCache_1_t1CB03B7A3BAD29F1FEF115D7B99203758D9F897B_StaticFields, ___IsObjectType_8)); }
	inline bool get_IsObjectType_8() const { return ___IsObjectType_8; }
	inline bool* get_address_of_IsObjectType_8() { return &___IsObjectType_8; }
	inline void set_IsObjectType_8(bool value)
	{
		___IsObjectType_8 = value;
	}

	inline static int32_t get_offset_of_IsStringType_9() { return static_cast<int32_t>(offsetof(RuntimeTypeInfoCache_1_t1CB03B7A3BAD29F1FEF115D7B99203758D9F897B_StaticFields, ___IsStringType_9)); }
	inline bool get_IsStringType_9() const { return ___IsStringType_9; }
	inline bool* get_address_of_IsStringType_9() { return &___IsStringType_9; }
	inline void set_IsStringType_9(bool value)
	{
		___IsStringType_9 = value;
	}

	inline static int32_t get_offset_of_IsContainerType_10() { return static_cast<int32_t>(offsetof(RuntimeTypeInfoCache_1_t1CB03B7A3BAD29F1FEF115D7B99203758D9F897B_StaticFields, ___IsContainerType_10)); }
	inline bool get_IsContainerType_10() const { return ___IsContainerType_10; }
	inline bool* get_address_of_IsContainerType_10() { return &___IsContainerType_10; }
	inline void set_IsContainerType_10(bool value)
	{
		___IsContainerType_10 = value;
	}

	inline static int32_t get_offset_of_CanBeNull_11() { return static_cast<int32_t>(offsetof(RuntimeTypeInfoCache_1_t1CB03B7A3BAD29F1FEF115D7B99203758D9F897B_StaticFields, ___CanBeNull_11)); }
	inline bool get_CanBeNull_11() const { return ___CanBeNull_11; }
	inline bool* get_address_of_CanBeNull_11() { return &___CanBeNull_11; }
	inline void set_CanBeNull_11(bool value)
	{
		___CanBeNull_11 = value;
	}

	inline static int32_t get_offset_of_IsNullableOrEnum_12() { return static_cast<int32_t>(offsetof(RuntimeTypeInfoCache_1_t1CB03B7A3BAD29F1FEF115D7B99203758D9F897B_StaticFields, ___IsNullableOrEnum_12)); }
	inline bool get_IsNullableOrEnum_12() const { return ___IsNullableOrEnum_12; }
	inline bool* get_address_of_IsNullableOrEnum_12() { return &___IsNullableOrEnum_12; }
	inline void set_IsNullableOrEnum_12(bool value)
	{
		___IsNullableOrEnum_12 = value;
	}

	inline static int32_t get_offset_of_IsPrimitiveOrString_13() { return static_cast<int32_t>(offsetof(RuntimeTypeInfoCache_1_t1CB03B7A3BAD29F1FEF115D7B99203758D9F897B_StaticFields, ___IsPrimitiveOrString_13)); }
	inline bool get_IsPrimitiveOrString_13() const { return ___IsPrimitiveOrString_13; }
	inline bool* get_address_of_IsPrimitiveOrString_13() { return &___IsPrimitiveOrString_13; }
	inline void set_IsPrimitiveOrString_13(bool value)
	{
		___IsPrimitiveOrString_13 = value;
	}

	inline static int32_t get_offset_of_IsAbstractOrInterface_14() { return static_cast<int32_t>(offsetof(RuntimeTypeInfoCache_1_t1CB03B7A3BAD29F1FEF115D7B99203758D9F897B_StaticFields, ___IsAbstractOrInterface_14)); }
	inline bool get_IsAbstractOrInterface_14() const { return ___IsAbstractOrInterface_14; }
	inline bool* get_address_of_IsAbstractOrInterface_14() { return &___IsAbstractOrInterface_14; }
	inline void set_IsAbstractOrInterface_14(bool value)
	{
		___IsAbstractOrInterface_14 = value;
	}

	inline static int32_t get_offset_of_IsLazyLoadReference_15() { return static_cast<int32_t>(offsetof(RuntimeTypeInfoCache_1_t1CB03B7A3BAD29F1FEF115D7B99203758D9F897B_StaticFields, ___IsLazyLoadReference_15)); }
	inline bool get_IsLazyLoadReference_15() const { return ___IsLazyLoadReference_15; }
	inline bool* get_address_of_IsLazyLoadReference_15() { return &___IsLazyLoadReference_15; }
	inline void set_IsLazyLoadReference_15(bool value)
	{
		___IsLazyLoadReference_15 = value;
	}
};


// Unity.Properties.Internal.SetElementProperty`2<System.Object,System.Object>
struct SetElementProperty_2_t2173EE7F3A6395A30AD2FBAFF46AD3E6EB6DB2EC  : public Property_2_tD7C7F959BE068E5DB2625A4229EEFE1C3F3413FE
{
public:
	// TValue Unity.Properties.Internal.SetElementProperty`2::m_Value
	RuntimeObject * ___m_Value_1;

public:
	inline static int32_t get_offset_of_m_Value_1() { return static_cast<int32_t>(offsetof(SetElementProperty_2_t2173EE7F3A6395A30AD2FBAFF46AD3E6EB6DB2EC, ___m_Value_1)); }
	inline RuntimeObject * get_m_Value_1() const { return ___m_Value_1; }
	inline RuntimeObject ** get_address_of_m_Value_1() { return &___m_Value_1; }
	inline void set_m_Value_1(RuntimeObject * value)
	{
		___m_Value_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Value_1), (void*)value);
	}
};


// Unity.Properties.Internal.SetPropertyBag`2<System.Object,System.Object>
struct SetPropertyBag_2_tA096D93509DB8BE67130C22A47AFDD1F1362914E  : public PropertyBag_1_tD150D74797315C72637E50ED3C60C5EB62AFC491
{
public:
	// Unity.Properties.Internal.SetElementProperty`2<TSet,TElement> Unity.Properties.Internal.SetPropertyBag`2::m_Property
	SetElementProperty_2_t2173EE7F3A6395A30AD2FBAFF46AD3E6EB6DB2EC * ___m_Property_0;

public:
	inline static int32_t get_offset_of_m_Property_0() { return static_cast<int32_t>(offsetof(SetPropertyBag_2_tA096D93509DB8BE67130C22A47AFDD1F1362914E, ___m_Property_0)); }
	inline SetElementProperty_2_t2173EE7F3A6395A30AD2FBAFF46AD3E6EB6DB2EC * get_m_Property_0() const { return ___m_Property_0; }
	inline SetElementProperty_2_t2173EE7F3A6395A30AD2FBAFF46AD3E6EB6DB2EC ** get_address_of_m_Property_0() { return &___m_Property_0; }
	inline void set_m_Property_0(SetElementProperty_2_t2173EE7F3A6395A30AD2FBAFF46AD3E6EB6DB2EC * value)
	{
		___m_Property_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Property_0), (void*)value);
	}
};


// Unity.RuntimeSceneSerialization.Internal.Prefabs.RuntimePrefabPropertyOverride`1/SetPropertyVisitor<System.Boolean>
struct SetPropertyVisitor_tAB9E6D250EC52B9CBDF773ECC5308C04AC3C1185  : public UnityObjectPropertyVisitor_t6D216B27CEC2B426B88BCA62A02F8A7D3BC4F14C
{
public:
	// Unity.RuntimeSceneSerialization.Internal.Prefabs.RuntimePrefabPropertyOverride`1<TOverrideValue> Unity.RuntimeSceneSerialization.Internal.Prefabs.RuntimePrefabPropertyOverride`1/SetPropertyVisitor::m_PrefabOverride
	RuntimePrefabPropertyOverride_1_tA69A222C9CED679F3E74FC5DC80C7EA6B851D065 * ___m_PrefabOverride_2;
	// System.String Unity.RuntimeSceneSerialization.Internal.Prefabs.RuntimePrefabPropertyOverride`1/SetPropertyVisitor::m_PropertyPath
	String_t* ___m_PropertyPath_3;
	// System.String Unity.RuntimeSceneSerialization.Internal.Prefabs.RuntimePrefabPropertyOverride`1/SetPropertyVisitor::m_FirstProperty
	String_t* ___m_FirstProperty_4;

public:
	inline static int32_t get_offset_of_m_PrefabOverride_2() { return static_cast<int32_t>(offsetof(SetPropertyVisitor_tAB9E6D250EC52B9CBDF773ECC5308C04AC3C1185, ___m_PrefabOverride_2)); }
	inline RuntimePrefabPropertyOverride_1_tA69A222C9CED679F3E74FC5DC80C7EA6B851D065 * get_m_PrefabOverride_2() const { return ___m_PrefabOverride_2; }
	inline RuntimePrefabPropertyOverride_1_tA69A222C9CED679F3E74FC5DC80C7EA6B851D065 ** get_address_of_m_PrefabOverride_2() { return &___m_PrefabOverride_2; }
	inline void set_m_PrefabOverride_2(RuntimePrefabPropertyOverride_1_tA69A222C9CED679F3E74FC5DC80C7EA6B851D065 * value)
	{
		___m_PrefabOverride_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PrefabOverride_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_PropertyPath_3() { return static_cast<int32_t>(offsetof(SetPropertyVisitor_tAB9E6D250EC52B9CBDF773ECC5308C04AC3C1185, ___m_PropertyPath_3)); }
	inline String_t* get_m_PropertyPath_3() const { return ___m_PropertyPath_3; }
	inline String_t** get_address_of_m_PropertyPath_3() { return &___m_PropertyPath_3; }
	inline void set_m_PropertyPath_3(String_t* value)
	{
		___m_PropertyPath_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PropertyPath_3), (void*)value);
	}

	inline static int32_t get_offset_of_m_FirstProperty_4() { return static_cast<int32_t>(offsetof(SetPropertyVisitor_tAB9E6D250EC52B9CBDF773ECC5308C04AC3C1185, ___m_FirstProperty_4)); }
	inline String_t* get_m_FirstProperty_4() const { return ___m_FirstProperty_4; }
	inline String_t** get_address_of_m_FirstProperty_4() { return &___m_FirstProperty_4; }
	inline void set_m_FirstProperty_4(String_t* value)
	{
		___m_FirstProperty_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_FirstProperty_4), (void*)value);
	}
};


// Unity.RuntimeSceneSerialization.Internal.Prefabs.RuntimePrefabPropertyOverride`1/SetPropertyVisitor<System.Char>
struct SetPropertyVisitor_t8FC8F94F243A9EEA94EB23E8C014D069AD240E71  : public UnityObjectPropertyVisitor_t6D216B27CEC2B426B88BCA62A02F8A7D3BC4F14C
{
public:
	// Unity.RuntimeSceneSerialization.Internal.Prefabs.RuntimePrefabPropertyOverride`1<TOverrideValue> Unity.RuntimeSceneSerialization.Internal.Prefabs.RuntimePrefabPropertyOverride`1/SetPropertyVisitor::m_PrefabOverride
	RuntimePrefabPropertyOverride_1_tCE24BDA19DB48FA9B5C7F2713D2FFBD20FC1D58A * ___m_PrefabOverride_2;
	// System.String Unity.RuntimeSceneSerialization.Internal.Prefabs.RuntimePrefabPropertyOverride`1/SetPropertyVisitor::m_PropertyPath
	String_t* ___m_PropertyPath_3;
	// System.String Unity.RuntimeSceneSerialization.Internal.Prefabs.RuntimePrefabPropertyOverride`1/SetPropertyVisitor::m_FirstProperty
	String_t* ___m_FirstProperty_4;

public:
	inline static int32_t get_offset_of_m_PrefabOverride_2() { return static_cast<int32_t>(offsetof(SetPropertyVisitor_t8FC8F94F243A9EEA94EB23E8C014D069AD240E71, ___m_PrefabOverride_2)); }
	inline RuntimePrefabPropertyOverride_1_tCE24BDA19DB48FA9B5C7F2713D2FFBD20FC1D58A * get_m_PrefabOverride_2() const { return ___m_PrefabOverride_2; }
	inline RuntimePrefabPropertyOverride_1_tCE24BDA19DB48FA9B5C7F2713D2FFBD20FC1D58A ** get_address_of_m_PrefabOverride_2() { return &___m_PrefabOverride_2; }
	inline void set_m_PrefabOverride_2(RuntimePrefabPropertyOverride_1_tCE24BDA19DB48FA9B5C7F2713D2FFBD20FC1D58A * value)
	{
		___m_PrefabOverride_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PrefabOverride_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_PropertyPath_3() { return static_cast<int32_t>(offsetof(SetPropertyVisitor_t8FC8F94F243A9EEA94EB23E8C014D069AD240E71, ___m_PropertyPath_3)); }
	inline String_t* get_m_PropertyPath_3() const { return ___m_PropertyPath_3; }
	inline String_t** get_address_of_m_PropertyPath_3() { return &___m_PropertyPath_3; }
	inline void set_m_PropertyPath_3(String_t* value)
	{
		___m_PropertyPath_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PropertyPath_3), (void*)value);
	}

	inline static int32_t get_offset_of_m_FirstProperty_4() { return static_cast<int32_t>(offsetof(SetPropertyVisitor_t8FC8F94F243A9EEA94EB23E8C014D069AD240E71, ___m_FirstProperty_4)); }
	inline String_t* get_m_FirstProperty_4() const { return ___m_FirstProperty_4; }
	inline String_t** get_address_of_m_FirstProperty_4() { return &___m_FirstProperty_4; }
	inline void set_m_FirstProperty_4(String_t* value)
	{
		___m_FirstProperty_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_FirstProperty_4), (void*)value);
	}
};


// Unity.RuntimeSceneSerialization.Internal.Prefabs.RuntimePrefabPropertyOverride`1/SetPropertyVisitor<System.Int32>
struct SetPropertyVisitor_t028928ACA5F8620E27F1B6FABF4EDB53897AB14C  : public UnityObjectPropertyVisitor_t6D216B27CEC2B426B88BCA62A02F8A7D3BC4F14C
{
public:
	// Unity.RuntimeSceneSerialization.Internal.Prefabs.RuntimePrefabPropertyOverride`1<TOverrideValue> Unity.RuntimeSceneSerialization.Internal.Prefabs.RuntimePrefabPropertyOverride`1/SetPropertyVisitor::m_PrefabOverride
	RuntimePrefabPropertyOverride_1_tD95DCFBFF8375B970F83D1054F4E5979BE347115 * ___m_PrefabOverride_2;
	// System.String Unity.RuntimeSceneSerialization.Internal.Prefabs.RuntimePrefabPropertyOverride`1/SetPropertyVisitor::m_PropertyPath
	String_t* ___m_PropertyPath_3;
	// System.String Unity.RuntimeSceneSerialization.Internal.Prefabs.RuntimePrefabPropertyOverride`1/SetPropertyVisitor::m_FirstProperty
	String_t* ___m_FirstProperty_4;

public:
	inline static int32_t get_offset_of_m_PrefabOverride_2() { return static_cast<int32_t>(offsetof(SetPropertyVisitor_t028928ACA5F8620E27F1B6FABF4EDB53897AB14C, ___m_PrefabOverride_2)); }
	inline RuntimePrefabPropertyOverride_1_tD95DCFBFF8375B970F83D1054F4E5979BE347115 * get_m_PrefabOverride_2() const { return ___m_PrefabOverride_2; }
	inline RuntimePrefabPropertyOverride_1_tD95DCFBFF8375B970F83D1054F4E5979BE347115 ** get_address_of_m_PrefabOverride_2() { return &___m_PrefabOverride_2; }
	inline void set_m_PrefabOverride_2(RuntimePrefabPropertyOverride_1_tD95DCFBFF8375B970F83D1054F4E5979BE347115 * value)
	{
		___m_PrefabOverride_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PrefabOverride_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_PropertyPath_3() { return static_cast<int32_t>(offsetof(SetPropertyVisitor_t028928ACA5F8620E27F1B6FABF4EDB53897AB14C, ___m_PropertyPath_3)); }
	inline String_t* get_m_PropertyPath_3() const { return ___m_PropertyPath_3; }
	inline String_t** get_address_of_m_PropertyPath_3() { return &___m_PropertyPath_3; }
	inline void set_m_PropertyPath_3(String_t* value)
	{
		___m_PropertyPath_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PropertyPath_3), (void*)value);
	}

	inline static int32_t get_offset_of_m_FirstProperty_4() { return static_cast<int32_t>(offsetof(SetPropertyVisitor_t028928ACA5F8620E27F1B6FABF4EDB53897AB14C, ___m_FirstProperty_4)); }
	inline String_t* get_m_FirstProperty_4() const { return ___m_FirstProperty_4; }
	inline String_t** get_address_of_m_FirstProperty_4() { return &___m_FirstProperty_4; }
	inline void set_m_FirstProperty_4(String_t* value)
	{
		___m_FirstProperty_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_FirstProperty_4), (void*)value);
	}
};


// Unity.RuntimeSceneSerialization.Internal.Prefabs.RuntimePrefabPropertyOverride`1/SetPropertyVisitor<System.Int64>
struct SetPropertyVisitor_t702230AF892AA97222526E226A3E35A75D547AE7  : public UnityObjectPropertyVisitor_t6D216B27CEC2B426B88BCA62A02F8A7D3BC4F14C
{
public:
	// Unity.RuntimeSceneSerialization.Internal.Prefabs.RuntimePrefabPropertyOverride`1<TOverrideValue> Unity.RuntimeSceneSerialization.Internal.Prefabs.RuntimePrefabPropertyOverride`1/SetPropertyVisitor::m_PrefabOverride
	RuntimePrefabPropertyOverride_1_t4EFDEC999C9FEA31A6FFA159A986BF456791192F * ___m_PrefabOverride_2;
	// System.String Unity.RuntimeSceneSerialization.Internal.Prefabs.RuntimePrefabPropertyOverride`1/SetPropertyVisitor::m_PropertyPath
	String_t* ___m_PropertyPath_3;
	// System.String Unity.RuntimeSceneSerialization.Internal.Prefabs.RuntimePrefabPropertyOverride`1/SetPropertyVisitor::m_FirstProperty
	String_t* ___m_FirstProperty_4;

public:
	inline static int32_t get_offset_of_m_PrefabOverride_2() { return static_cast<int32_t>(offsetof(SetPropertyVisitor_t702230AF892AA97222526E226A3E35A75D547AE7, ___m_PrefabOverride_2)); }
	inline RuntimePrefabPropertyOverride_1_t4EFDEC999C9FEA31A6FFA159A986BF456791192F * get_m_PrefabOverride_2() const { return ___m_PrefabOverride_2; }
	inline RuntimePrefabPropertyOverride_1_t4EFDEC999C9FEA31A6FFA159A986BF456791192F ** get_address_of_m_PrefabOverride_2() { return &___m_PrefabOverride_2; }
	inline void set_m_PrefabOverride_2(RuntimePrefabPropertyOverride_1_t4EFDEC999C9FEA31A6FFA159A986BF456791192F * value)
	{
		___m_PrefabOverride_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PrefabOverride_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_PropertyPath_3() { return static_cast<int32_t>(offsetof(SetPropertyVisitor_t702230AF892AA97222526E226A3E35A75D547AE7, ___m_PropertyPath_3)); }
	inline String_t* get_m_PropertyPath_3() const { return ___m_PropertyPath_3; }
	inline String_t** get_address_of_m_PropertyPath_3() { return &___m_PropertyPath_3; }
	inline void set_m_PropertyPath_3(String_t* value)
	{
		___m_PropertyPath_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PropertyPath_3), (void*)value);
	}

	inline static int32_t get_offset_of_m_FirstProperty_4() { return static_cast<int32_t>(offsetof(SetPropertyVisitor_t702230AF892AA97222526E226A3E35A75D547AE7, ___m_FirstProperty_4)); }
	inline String_t* get_m_FirstProperty_4() const { return ___m_FirstProperty_4; }
	inline String_t** get_address_of_m_FirstProperty_4() { return &___m_FirstProperty_4; }
	inline void set_m_FirstProperty_4(String_t* value)
	{
		___m_FirstProperty_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_FirstProperty_4), (void*)value);
	}
};


// Unity.RuntimeSceneSerialization.Internal.Prefabs.RuntimePrefabPropertyOverride`1/SetPropertyVisitor<System.Object>
struct SetPropertyVisitor_t5FC9A74C2EE26B1D535533EEA5833752A875DC3E  : public UnityObjectPropertyVisitor_t6D216B27CEC2B426B88BCA62A02F8A7D3BC4F14C
{
public:
	// Unity.RuntimeSceneSerialization.Internal.Prefabs.RuntimePrefabPropertyOverride`1<TOverrideValue> Unity.RuntimeSceneSerialization.Internal.Prefabs.RuntimePrefabPropertyOverride`1/SetPropertyVisitor::m_PrefabOverride
	RuntimePrefabPropertyOverride_1_tCC9B679BFD6A61EA312443E4355AFA1F4FDD578E * ___m_PrefabOverride_2;
	// System.String Unity.RuntimeSceneSerialization.Internal.Prefabs.RuntimePrefabPropertyOverride`1/SetPropertyVisitor::m_PropertyPath
	String_t* ___m_PropertyPath_3;
	// System.String Unity.RuntimeSceneSerialization.Internal.Prefabs.RuntimePrefabPropertyOverride`1/SetPropertyVisitor::m_FirstProperty
	String_t* ___m_FirstProperty_4;

public:
	inline static int32_t get_offset_of_m_PrefabOverride_2() { return static_cast<int32_t>(offsetof(SetPropertyVisitor_t5FC9A74C2EE26B1D535533EEA5833752A875DC3E, ___m_PrefabOverride_2)); }
	inline RuntimePrefabPropertyOverride_1_tCC9B679BFD6A61EA312443E4355AFA1F4FDD578E * get_m_PrefabOverride_2() const { return ___m_PrefabOverride_2; }
	inline RuntimePrefabPropertyOverride_1_tCC9B679BFD6A61EA312443E4355AFA1F4FDD578E ** get_address_of_m_PrefabOverride_2() { return &___m_PrefabOverride_2; }
	inline void set_m_PrefabOverride_2(RuntimePrefabPropertyOverride_1_tCC9B679BFD6A61EA312443E4355AFA1F4FDD578E * value)
	{
		___m_PrefabOverride_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PrefabOverride_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_PropertyPath_3() { return static_cast<int32_t>(offsetof(SetPropertyVisitor_t5FC9A74C2EE26B1D535533EEA5833752A875DC3E, ___m_PropertyPath_3)); }
	inline String_t* get_m_PropertyPath_3() const { return ___m_PropertyPath_3; }
	inline String_t** get_address_of_m_PropertyPath_3() { return &___m_PropertyPath_3; }
	inline void set_m_PropertyPath_3(String_t* value)
	{
		___m_PropertyPath_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PropertyPath_3), (void*)value);
	}

	inline static int32_t get_offset_of_m_FirstProperty_4() { return static_cast<int32_t>(offsetof(SetPropertyVisitor_t5FC9A74C2EE26B1D535533EEA5833752A875DC3E, ___m_FirstProperty_4)); }
	inline String_t* get_m_FirstProperty_4() const { return ___m_FirstProperty_4; }
	inline String_t** get_address_of_m_FirstProperty_4() { return &___m_FirstProperty_4; }
	inline void set_m_FirstProperty_4(String_t* value)
	{
		___m_FirstProperty_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_FirstProperty_4), (void*)value);
	}
};


// Unity.RuntimeSceneSerialization.Internal.Prefabs.RuntimePrefabPropertyOverride`1/SetPropertyVisitor<System.Single>
struct SetPropertyVisitor_tE91D7EEBBF898F3EFE4FA9C7432C2E1C6C079B3D  : public UnityObjectPropertyVisitor_t6D216B27CEC2B426B88BCA62A02F8A7D3BC4F14C
{
public:
	// Unity.RuntimeSceneSerialization.Internal.Prefabs.RuntimePrefabPropertyOverride`1<TOverrideValue> Unity.RuntimeSceneSerialization.Internal.Prefabs.RuntimePrefabPropertyOverride`1/SetPropertyVisitor::m_PrefabOverride
	RuntimePrefabPropertyOverride_1_t323D06C42CFD95426179D64B465812F43BAEA303 * ___m_PrefabOverride_2;
	// System.String Unity.RuntimeSceneSerialization.Internal.Prefabs.RuntimePrefabPropertyOverride`1/SetPropertyVisitor::m_PropertyPath
	String_t* ___m_PropertyPath_3;
	// System.String Unity.RuntimeSceneSerialization.Internal.Prefabs.RuntimePrefabPropertyOverride`1/SetPropertyVisitor::m_FirstProperty
	String_t* ___m_FirstProperty_4;

public:
	inline static int32_t get_offset_of_m_PrefabOverride_2() { return static_cast<int32_t>(offsetof(SetPropertyVisitor_tE91D7EEBBF898F3EFE4FA9C7432C2E1C6C079B3D, ___m_PrefabOverride_2)); }
	inline RuntimePrefabPropertyOverride_1_t323D06C42CFD95426179D64B465812F43BAEA303 * get_m_PrefabOverride_2() const { return ___m_PrefabOverride_2; }
	inline RuntimePrefabPropertyOverride_1_t323D06C42CFD95426179D64B465812F43BAEA303 ** get_address_of_m_PrefabOverride_2() { return &___m_PrefabOverride_2; }
	inline void set_m_PrefabOverride_2(RuntimePrefabPropertyOverride_1_t323D06C42CFD95426179D64B465812F43BAEA303 * value)
	{
		___m_PrefabOverride_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PrefabOverride_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_PropertyPath_3() { return static_cast<int32_t>(offsetof(SetPropertyVisitor_tE91D7EEBBF898F3EFE4FA9C7432C2E1C6C079B3D, ___m_PropertyPath_3)); }
	inline String_t* get_m_PropertyPath_3() const { return ___m_PropertyPath_3; }
	inline String_t** get_address_of_m_PropertyPath_3() { return &___m_PropertyPath_3; }
	inline void set_m_PropertyPath_3(String_t* value)
	{
		___m_PropertyPath_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PropertyPath_3), (void*)value);
	}

	inline static int32_t get_offset_of_m_FirstProperty_4() { return static_cast<int32_t>(offsetof(SetPropertyVisitor_tE91D7EEBBF898F3EFE4FA9C7432C2E1C6C079B3D, ___m_FirstProperty_4)); }
	inline String_t* get_m_FirstProperty_4() const { return ___m_FirstProperty_4; }
	inline String_t** get_address_of_m_FirstProperty_4() { return &___m_FirstProperty_4; }
	inline void set_m_FirstProperty_4(String_t* value)
	{
		___m_FirstProperty_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_FirstProperty_4), (void*)value);
	}
};


// Unity.RuntimeSceneSerialization.Internal.Prefabs.RuntimePrefabPropertyOverride`1/SetPropertyVisitor<Unity.RuntimeSceneSerialization.Internal.UnityObjectReference>
struct SetPropertyVisitor_t50A2DDF7DEDE96DF34D0ABD7164EA134DCCC52E9  : public UnityObjectPropertyVisitor_t6D216B27CEC2B426B88BCA62A02F8A7D3BC4F14C
{
public:
	// Unity.RuntimeSceneSerialization.Internal.Prefabs.RuntimePrefabPropertyOverride`1<TOverrideValue> Unity.RuntimeSceneSerialization.Internal.Prefabs.RuntimePrefabPropertyOverride`1/SetPropertyVisitor::m_PrefabOverride
	RuntimePrefabPropertyOverride_1_tFCA82E033FFFD653514A45EC19EADD498FC6EA7E * ___m_PrefabOverride_2;
	// System.String Unity.RuntimeSceneSerialization.Internal.Prefabs.RuntimePrefabPropertyOverride`1/SetPropertyVisitor::m_PropertyPath
	String_t* ___m_PropertyPath_3;
	// System.String Unity.RuntimeSceneSerialization.Internal.Prefabs.RuntimePrefabPropertyOverride`1/SetPropertyVisitor::m_FirstProperty
	String_t* ___m_FirstProperty_4;

public:
	inline static int32_t get_offset_of_m_PrefabOverride_2() { return static_cast<int32_t>(offsetof(SetPropertyVisitor_t50A2DDF7DEDE96DF34D0ABD7164EA134DCCC52E9, ___m_PrefabOverride_2)); }
	inline RuntimePrefabPropertyOverride_1_tFCA82E033FFFD653514A45EC19EADD498FC6EA7E * get_m_PrefabOverride_2() const { return ___m_PrefabOverride_2; }
	inline RuntimePrefabPropertyOverride_1_tFCA82E033FFFD653514A45EC19EADD498FC6EA7E ** get_address_of_m_PrefabOverride_2() { return &___m_PrefabOverride_2; }
	inline void set_m_PrefabOverride_2(RuntimePrefabPropertyOverride_1_tFCA82E033FFFD653514A45EC19EADD498FC6EA7E * value)
	{
		___m_PrefabOverride_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PrefabOverride_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_PropertyPath_3() { return static_cast<int32_t>(offsetof(SetPropertyVisitor_t50A2DDF7DEDE96DF34D0ABD7164EA134DCCC52E9, ___m_PropertyPath_3)); }
	inline String_t* get_m_PropertyPath_3() const { return ___m_PropertyPath_3; }
	inline String_t** get_address_of_m_PropertyPath_3() { return &___m_PropertyPath_3; }
	inline void set_m_PropertyPath_3(String_t* value)
	{
		___m_PropertyPath_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PropertyPath_3), (void*)value);
	}

	inline static int32_t get_offset_of_m_FirstProperty_4() { return static_cast<int32_t>(offsetof(SetPropertyVisitor_t50A2DDF7DEDE96DF34D0ABD7164EA134DCCC52E9, ___m_FirstProperty_4)); }
	inline String_t* get_m_FirstProperty_4() const { return ___m_FirstProperty_4; }
	inline String_t** get_address_of_m_FirstProperty_4() { return &___m_FirstProperty_4; }
	inline void set_m_FirstProperty_4(String_t* value)
	{
		___m_FirstProperty_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_FirstProperty_4), (void*)value);
	}
};


// System.Boolean
struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37 
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


// System.Char
struct Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14 
{
public:
	// System.Char System.Char::m_value
	Il2CppChar ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14, ___m_value_0)); }
	inline Il2CppChar get_m_value_0() const { return ___m_value_0; }
	inline Il2CppChar* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(Il2CppChar value)
	{
		___m_value_0 = value;
	}
};

struct Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_StaticFields
{
public:
	// System.Byte[] System.Char::categoryForLatin1
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___categoryForLatin1_3;

public:
	inline static int32_t get_offset_of_categoryForLatin1_3() { return static_cast<int32_t>(offsetof(Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_StaticFields, ___categoryForLatin1_3)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_categoryForLatin1_3() const { return ___categoryForLatin1_3; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_categoryForLatin1_3() { return &___categoryForLatin1_3; }
	inline void set_categoryForLatin1_3(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___categoryForLatin1_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___categoryForLatin1_3), (void*)value);
	}
};


// System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA  : public ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52
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

// System.FlagsAttribute
struct FlagsAttribute_t511C558FACEF1CC64702A8FAB67CAF3CBA65DF36  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:

public:
};


// System.Int32
struct Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046 
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


// System.Int64
struct Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3 
{
public:
	// System.Int64 System.Int64::m_value
	int64_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3, ___m_value_0)); }
	inline int64_t get_m_value_0() const { return ___m_value_0; }
	inline int64_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int64_t value)
	{
		___m_value_0 = value;
	}
};


// System.IntPtr
struct IntPtr_t 
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


// System.Single
struct Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E 
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


// Unity.RuntimeSceneSerialization.Internal.UnityObjectReference
struct UnityObjectReference_t2A935115C47347CFB25E64F78409335605D6B054 
{
public:
	// System.Int32 Unity.RuntimeSceneSerialization.Internal.UnityObjectReference::sceneID
	int32_t ___sceneID_4;
	// System.String Unity.RuntimeSceneSerialization.Internal.UnityObjectReference::guid
	String_t* ___guid_5;
	// System.Int64 Unity.RuntimeSceneSerialization.Internal.UnityObjectReference::fileId
	int64_t ___fileId_6;

public:
	inline static int32_t get_offset_of_sceneID_4() { return static_cast<int32_t>(offsetof(UnityObjectReference_t2A935115C47347CFB25E64F78409335605D6B054, ___sceneID_4)); }
	inline int32_t get_sceneID_4() const { return ___sceneID_4; }
	inline int32_t* get_address_of_sceneID_4() { return &___sceneID_4; }
	inline void set_sceneID_4(int32_t value)
	{
		___sceneID_4 = value;
	}

	inline static int32_t get_offset_of_guid_5() { return static_cast<int32_t>(offsetof(UnityObjectReference_t2A935115C47347CFB25E64F78409335605D6B054, ___guid_5)); }
	inline String_t* get_guid_5() const { return ___guid_5; }
	inline String_t** get_address_of_guid_5() { return &___guid_5; }
	inline void set_guid_5(String_t* value)
	{
		___guid_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___guid_5), (void*)value);
	}

	inline static int32_t get_offset_of_fileId_6() { return static_cast<int32_t>(offsetof(UnityObjectReference_t2A935115C47347CFB25E64F78409335605D6B054, ___fileId_6)); }
	inline int64_t get_fileId_6() const { return ___fileId_6; }
	inline int64_t* get_address_of_fileId_6() { return &___fileId_6; }
	inline void set_fileId_6(int64_t value)
	{
		___fileId_6 = value;
	}
};

struct UnityObjectReference_t2A935115C47347CFB25E64F78409335605D6B054_StaticFields
{
public:
	// System.Reflection.MethodInfo Unity.RuntimeSceneSerialization.Internal.UnityObjectReference::CreateValueMethod
	MethodInfo_t * ___CreateValueMethod_0;
	// System.Reflection.MethodInfo Unity.RuntimeSceneSerialization.Internal.UnityObjectReference::CreateArrayMethod
	MethodInfo_t * ___CreateArrayMethod_1;
	// System.Reflection.MethodInfo Unity.RuntimeSceneSerialization.Internal.UnityObjectReference::CreateListMethod
	MethodInfo_t * ___CreateListMethod_2;
	// Unity.RuntimeSceneSerialization.Internal.UnityObjectReference Unity.RuntimeSceneSerialization.Internal.UnityObjectReference::NullObjectReference
	UnityObjectReference_t2A935115C47347CFB25E64F78409335605D6B054  ___NullObjectReference_3;

public:
	inline static int32_t get_offset_of_CreateValueMethod_0() { return static_cast<int32_t>(offsetof(UnityObjectReference_t2A935115C47347CFB25E64F78409335605D6B054_StaticFields, ___CreateValueMethod_0)); }
	inline MethodInfo_t * get_CreateValueMethod_0() const { return ___CreateValueMethod_0; }
	inline MethodInfo_t ** get_address_of_CreateValueMethod_0() { return &___CreateValueMethod_0; }
	inline void set_CreateValueMethod_0(MethodInfo_t * value)
	{
		___CreateValueMethod_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CreateValueMethod_0), (void*)value);
	}

	inline static int32_t get_offset_of_CreateArrayMethod_1() { return static_cast<int32_t>(offsetof(UnityObjectReference_t2A935115C47347CFB25E64F78409335605D6B054_StaticFields, ___CreateArrayMethod_1)); }
	inline MethodInfo_t * get_CreateArrayMethod_1() const { return ___CreateArrayMethod_1; }
	inline MethodInfo_t ** get_address_of_CreateArrayMethod_1() { return &___CreateArrayMethod_1; }
	inline void set_CreateArrayMethod_1(MethodInfo_t * value)
	{
		___CreateArrayMethod_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CreateArrayMethod_1), (void*)value);
	}

	inline static int32_t get_offset_of_CreateListMethod_2() { return static_cast<int32_t>(offsetof(UnityObjectReference_t2A935115C47347CFB25E64F78409335605D6B054_StaticFields, ___CreateListMethod_2)); }
	inline MethodInfo_t * get_CreateListMethod_2() const { return ___CreateListMethod_2; }
	inline MethodInfo_t ** get_address_of_CreateListMethod_2() { return &___CreateListMethod_2; }
	inline void set_CreateListMethod_2(MethodInfo_t * value)
	{
		___CreateListMethod_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CreateListMethod_2), (void*)value);
	}

	inline static int32_t get_offset_of_NullObjectReference_3() { return static_cast<int32_t>(offsetof(UnityObjectReference_t2A935115C47347CFB25E64F78409335605D6B054_StaticFields, ___NullObjectReference_3)); }
	inline UnityObjectReference_t2A935115C47347CFB25E64F78409335605D6B054  get_NullObjectReference_3() const { return ___NullObjectReference_3; }
	inline UnityObjectReference_t2A935115C47347CFB25E64F78409335605D6B054 * get_address_of_NullObjectReference_3() { return &___NullObjectReference_3; }
	inline void set_NullObjectReference_3(UnityObjectReference_t2A935115C47347CFB25E64F78409335605D6B054  value)
	{
		___NullObjectReference_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___NullObjectReference_3))->___guid_5), (void*)NULL);
	}
};

// Native definition for P/Invoke marshalling of Unity.RuntimeSceneSerialization.Internal.UnityObjectReference
struct UnityObjectReference_t2A935115C47347CFB25E64F78409335605D6B054_marshaled_pinvoke
{
	int32_t ___sceneID_4;
	char* ___guid_5;
	int64_t ___fileId_6;
};
// Native definition for COM marshalling of Unity.RuntimeSceneSerialization.Internal.UnityObjectReference
struct UnityObjectReference_t2A935115C47347CFB25E64F78409335605D6B054_marshaled_com
{
	int32_t ___sceneID_4;
	Il2CppChar* ___guid_5;
	int64_t ___fileId_6;
};

// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5 
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


// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>
struct Enumerator_tE4E91EE5578038530CF0C46227953BA787E7A0A0 
{
public:
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::dictionary
	Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * ___dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::version
	int32_t ___version_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::index
	int32_t ___index_2;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::current
	KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  ___current_3;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::getEnumeratorRetType
	int32_t ___getEnumeratorRetType_4;

public:
	inline static int32_t get_offset_of_dictionary_0() { return static_cast<int32_t>(offsetof(Enumerator_tE4E91EE5578038530CF0C46227953BA787E7A0A0, ___dictionary_0)); }
	inline Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * get_dictionary_0() const { return ___dictionary_0; }
	inline Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D ** get_address_of_dictionary_0() { return &___dictionary_0; }
	inline void set_dictionary_0(Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * value)
	{
		___dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dictionary_0), (void*)value);
	}

	inline static int32_t get_offset_of_version_1() { return static_cast<int32_t>(offsetof(Enumerator_tE4E91EE5578038530CF0C46227953BA787E7A0A0, ___version_1)); }
	inline int32_t get_version_1() const { return ___version_1; }
	inline int32_t* get_address_of_version_1() { return &___version_1; }
	inline void set_version_1(int32_t value)
	{
		___version_1 = value;
	}

	inline static int32_t get_offset_of_index_2() { return static_cast<int32_t>(offsetof(Enumerator_tE4E91EE5578038530CF0C46227953BA787E7A0A0, ___index_2)); }
	inline int32_t get_index_2() const { return ___index_2; }
	inline int32_t* get_address_of_index_2() { return &___index_2; }
	inline void set_index_2(int32_t value)
	{
		___index_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_tE4E91EE5578038530CF0C46227953BA787E7A0A0, ___current_3)); }
	inline KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  get_current_3() const { return ___current_3; }
	inline KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 * get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___current_3))->___key_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___current_3))->___value_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_getEnumeratorRetType_4() { return static_cast<int32_t>(offsetof(Enumerator_tE4E91EE5578038530CF0C46227953BA787E7A0A0, ___getEnumeratorRetType_4)); }
	inline int32_t get_getEnumeratorRetType_4() const { return ___getEnumeratorRetType_4; }
	inline int32_t* get_address_of_getEnumeratorRetType_4() { return &___getEnumeratorRetType_4; }
	inline void set_getEnumeratorRetType_4(int32_t value)
	{
		___getEnumeratorRetType_4 = value;
	}
};


// Unity.RuntimeSceneSerialization.Internal.Prefabs.RuntimePrefabPropertyOverride`1<Unity.RuntimeSceneSerialization.Internal.UnityObjectReference>
struct RuntimePrefabPropertyOverride_1_tFCA82E033FFFD653514A45EC19EADD498FC6EA7E  : public RuntimePrefabPropertyOverride_t31453ACA5BF2DF49C2A0EB4D1F09CF70EEF4B2ED
{
public:
	// TOverrideValue Unity.RuntimeSceneSerialization.Internal.Prefabs.RuntimePrefabPropertyOverride`1::m_Value
	UnityObjectReference_t2A935115C47347CFB25E64F78409335605D6B054  ___m_Value_4;

public:
	inline static int32_t get_offset_of_m_Value_4() { return static_cast<int32_t>(offsetof(RuntimePrefabPropertyOverride_1_tFCA82E033FFFD653514A45EC19EADD498FC6EA7E, ___m_Value_4)); }
	inline UnityObjectReference_t2A935115C47347CFB25E64F78409335605D6B054  get_m_Value_4() const { return ___m_Value_4; }
	inline UnityObjectReference_t2A935115C47347CFB25E64F78409335605D6B054 * get_address_of_m_Value_4() { return &___m_Value_4; }
	inline void set_m_Value_4(UnityObjectReference_t2A935115C47347CFB25E64F78409335605D6B054  value)
	{
		___m_Value_4 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Value_4))->___guid_5), (void*)NULL);
	}
};

struct RuntimePrefabPropertyOverride_1_tFCA82E033FFFD653514A45EC19EADD498FC6EA7E_StaticFields
{
public:
	// Unity.RuntimeSceneSerialization.Internal.Prefabs.RuntimePrefabPropertyOverride`1/SetPropertyMethodFactory<TOverrideValue> Unity.RuntimeSceneSerialization.Internal.Prefabs.RuntimePrefabPropertyOverride`1::k_Factory
	SetPropertyMethodFactory_tD563D2EDD8090BD7D52A68CC483A44C9177D5078 * ___k_Factory_3;

public:
	inline static int32_t get_offset_of_k_Factory_3() { return static_cast<int32_t>(offsetof(RuntimePrefabPropertyOverride_1_tFCA82E033FFFD653514A45EC19EADD498FC6EA7E_StaticFields, ___k_Factory_3)); }
	inline SetPropertyMethodFactory_tD563D2EDD8090BD7D52A68CC483A44C9177D5078 * get_k_Factory_3() const { return ___k_Factory_3; }
	inline SetPropertyMethodFactory_tD563D2EDD8090BD7D52A68CC483A44C9177D5078 ** get_address_of_k_Factory_3() { return &___k_Factory_3; }
	inline void set_k_Factory_3(SetPropertyMethodFactory_tD563D2EDD8090BD7D52A68CC483A44C9177D5078 * value)
	{
		___k_Factory_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___k_Factory_3), (void*)value);
	}
};


// System.Reflection.BindingFlags
struct BindingFlags_tAAAB07D9AC588F0D55D844E51D7035E96DF94733 
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


// System.Delegate
struct Delegate_t  : public RuntimeObject
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

// System.Exception
struct Exception_t  : public RuntimeObject
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
struct HideFlags_tDC64149E37544FF83B2B4222D3E9DC8188766A12 
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


// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A  : public RuntimeObject
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

// UnityEngine.Playables.PlayableGraph
struct PlayableGraph_t2D5083CFACB413FA1BB13FF054BE09A5A55A205A 
{
public:
	// System.IntPtr UnityEngine.Playables.PlayableGraph::m_Handle
	intptr_t ___m_Handle_0;
	// System.UInt32 UnityEngine.Playables.PlayableGraph::m_Version
	uint32_t ___m_Version_1;

public:
	inline static int32_t get_offset_of_m_Handle_0() { return static_cast<int32_t>(offsetof(PlayableGraph_t2D5083CFACB413FA1BB13FF054BE09A5A55A205A, ___m_Handle_0)); }
	inline intptr_t get_m_Handle_0() const { return ___m_Handle_0; }
	inline intptr_t* get_address_of_m_Handle_0() { return &___m_Handle_0; }
	inline void set_m_Handle_0(intptr_t value)
	{
		___m_Handle_0 = value;
	}

	inline static int32_t get_offset_of_m_Version_1() { return static_cast<int32_t>(offsetof(PlayableGraph_t2D5083CFACB413FA1BB13FF054BE09A5A55A205A, ___m_Version_1)); }
	inline uint32_t get_m_Version_1() const { return ___m_Version_1; }
	inline uint32_t* get_address_of_m_Version_1() { return &___m_Version_1; }
	inline void set_m_Version_1(uint32_t value)
	{
		___m_Version_1 = value;
	}
};


// UnityEngine.Playables.PlayableHandle
struct PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A 
{
public:
	// System.IntPtr UnityEngine.Playables.PlayableHandle::m_Handle
	intptr_t ___m_Handle_0;
	// System.UInt32 UnityEngine.Playables.PlayableHandle::m_Version
	uint32_t ___m_Version_1;

public:
	inline static int32_t get_offset_of_m_Handle_0() { return static_cast<int32_t>(offsetof(PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A, ___m_Handle_0)); }
	inline intptr_t get_m_Handle_0() const { return ___m_Handle_0; }
	inline intptr_t* get_address_of_m_Handle_0() { return &___m_Handle_0; }
	inline void set_m_Handle_0(intptr_t value)
	{
		___m_Handle_0 = value;
	}

	inline static int32_t get_offset_of_m_Version_1() { return static_cast<int32_t>(offsetof(PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A, ___m_Version_1)); }
	inline uint32_t get_m_Version_1() const { return ___m_Version_1; }
	inline uint32_t* get_address_of_m_Version_1() { return &___m_Version_1; }
	inline void set_m_Version_1(uint32_t value)
	{
		___m_Version_1 = value;
	}
};

struct PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A_StaticFields
{
public:
	// UnityEngine.Playables.PlayableHandle UnityEngine.Playables.PlayableHandle::m_Null
	PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  ___m_Null_2;

public:
	inline static int32_t get_offset_of_m_Null_2() { return static_cast<int32_t>(offsetof(PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A_StaticFields, ___m_Null_2)); }
	inline PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  get_m_Null_2() const { return ___m_Null_2; }
	inline PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A * get_address_of_m_Null_2() { return &___m_Null_2; }
	inline void set_m_Null_2(PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  value)
	{
		___m_Null_2 = value;
	}
};


// System.RuntimeTypeHandle
struct RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 
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


// UnityEngine.Playables.ScriptPlayable`1<System.Object>
struct ScriptPlayable_1_t7495DFF84B5233AF863183881C3C7D626F65C266 
{
public:
	// UnityEngine.Playables.PlayableHandle UnityEngine.Playables.ScriptPlayable`1::m_Handle
	PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  ___m_Handle_0;

public:
	inline static int32_t get_offset_of_m_Handle_0() { return static_cast<int32_t>(offsetof(ScriptPlayable_1_t7495DFF84B5233AF863183881C3C7D626F65C266, ___m_Handle_0)); }
	inline PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  get_m_Handle_0() const { return ___m_Handle_0; }
	inline PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A * get_address_of_m_Handle_0() { return &___m_Handle_0; }
	inline void set_m_Handle_0(PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  value)
	{
		___m_Handle_0 = value;
	}
};

struct ScriptPlayable_1_t7495DFF84B5233AF863183881C3C7D626F65C266_StaticFields
{
public:
	// UnityEngine.Playables.ScriptPlayable`1<T> UnityEngine.Playables.ScriptPlayable`1::m_NullPlayable
	ScriptPlayable_1_t7495DFF84B5233AF863183881C3C7D626F65C266  ___m_NullPlayable_1;

public:
	inline static int32_t get_offset_of_m_NullPlayable_1() { return static_cast<int32_t>(offsetof(ScriptPlayable_1_t7495DFF84B5233AF863183881C3C7D626F65C266_StaticFields, ___m_NullPlayable_1)); }
	inline ScriptPlayable_1_t7495DFF84B5233AF863183881C3C7D626F65C266  get_m_NullPlayable_1() const { return ___m_NullPlayable_1; }
	inline ScriptPlayable_1_t7495DFF84B5233AF863183881C3C7D626F65C266 * get_address_of_m_NullPlayable_1() { return &___m_NullPlayable_1; }
	inline void set_m_NullPlayable_1(ScriptPlayable_1_t7495DFF84B5233AF863183881C3C7D626F65C266  value)
	{
		___m_NullPlayable_1 = value;
	}
};


// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
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

// UnityEngine.Playables.Playable
struct Playable_tC24692CDD1DD8F1D5C646035A76D2830A70214E2 
{
public:
	// UnityEngine.Playables.PlayableHandle UnityEngine.Playables.Playable::m_Handle
	PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  ___m_Handle_0;

public:
	inline static int32_t get_offset_of_m_Handle_0() { return static_cast<int32_t>(offsetof(Playable_tC24692CDD1DD8F1D5C646035A76D2830A70214E2, ___m_Handle_0)); }
	inline PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  get_m_Handle_0() const { return ___m_Handle_0; }
	inline PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A * get_address_of_m_Handle_0() { return &___m_Handle_0; }
	inline void set_m_Handle_0(PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  value)
	{
		___m_Handle_0 = value;
	}
};

struct Playable_tC24692CDD1DD8F1D5C646035A76D2830A70214E2_StaticFields
{
public:
	// UnityEngine.Playables.Playable UnityEngine.Playables.Playable::m_NullPlayable
	Playable_tC24692CDD1DD8F1D5C646035A76D2830A70214E2  ___m_NullPlayable_1;

public:
	inline static int32_t get_offset_of_m_NullPlayable_1() { return static_cast<int32_t>(offsetof(Playable_tC24692CDD1DD8F1D5C646035A76D2830A70214E2_StaticFields, ___m_NullPlayable_1)); }
	inline Playable_tC24692CDD1DD8F1D5C646035A76D2830A70214E2  get_m_NullPlayable_1() const { return ___m_NullPlayable_1; }
	inline Playable_tC24692CDD1DD8F1D5C646035A76D2830A70214E2 * get_address_of_m_NullPlayable_1() { return &___m_NullPlayable_1; }
	inline void set_m_NullPlayable_1(Playable_tC24692CDD1DD8F1D5C646035A76D2830A70214E2  value)
	{
		___m_NullPlayable_1 = value;
	}
};


// UnityEngine.ScriptableObject
struct ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};

// Native definition for P/Invoke marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A_marshaled_pinvoke : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A_marshaled_com : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_com
{
};

// System.SystemException
struct SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62  : public Exception_t
{
public:

public:
};


// System.Type
struct Type_t  : public MemberInfo_t
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


// Unity.Properties.ReflectedMemberProperty`2/SetClassValueAction<System.Object,System.Boolean>
struct SetClassValueAction_tA86ACBC111359453B0AC204006D2F17530E676BD  : public MulticastDelegate_t
{
public:

public:
};


// Unity.Properties.ReflectedMemberProperty`2/SetClassValueAction<System.Object,System.Char>
struct SetClassValueAction_t3D9CA46079C933069B9EB402015DC5BE95A4F59C  : public MulticastDelegate_t
{
public:

public:
};


// Unity.Properties.ReflectedMemberProperty`2/SetClassValueAction<System.Object,System.Int32>
struct SetClassValueAction_t3FFAED7507894B723C6D0FC149A80B7C53DFA524  : public MulticastDelegate_t
{
public:

public:
};


// Unity.Properties.ReflectedMemberProperty`2/SetClassValueAction<System.Object,System.Int64>
struct SetClassValueAction_t438FA66D831BCF72E300398FC3A1F687BA8E42CD  : public MulticastDelegate_t
{
public:

public:
};


// Unity.Properties.ReflectedMemberProperty`2/SetClassValueAction<System.Object,System.Object>
struct SetClassValueAction_t84B2D7C930A02612CA0C81F628E16D7901AC8A4D  : public MulticastDelegate_t
{
public:

public:
};


// Unity.Properties.ReflectedMemberProperty`2/SetClassValueAction<System.Object,System.Single>
struct SetClassValueAction_tBF56D6D514A4C9B2E2A3B6BE3DF4700A1E46CD0D  : public MulticastDelegate_t
{
public:

public:
};


// Unity.Properties.ReflectedMemberProperty`2/SetClassValueAction<System.Object,Unity.RuntimeSceneSerialization.Internal.UnityObjectReference>
struct SetClassValueAction_tAA1B42C011F188EF4156FFE4D03B556AC5A5E927  : public MulticastDelegate_t
{
public:

public:
};


// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA  : public MulticastDelegate_t
{
public:

public:
};


// System.InvalidCastException
struct InvalidCastException_tD99F9FF94C3859C78E90F68C2F77A1558BCAF463  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:

public:
};


// System.InvalidOperationException
struct InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:

public:
};


// Unity.XRTools.Utils.Internal.ScriptableSettingsBase
struct ScriptableSettingsBase_t1D43764F1AA18A7DB433687E4A75AC027BCAEB45  : public ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A
{
public:

public:
};

struct ScriptableSettingsBase_t1D43764F1AA18A7DB433687E4A75AC027BCAEB45_StaticFields
{
public:
	// System.Char[] Unity.XRTools.Utils.Internal.ScriptableSettingsBase::k_PathTrimChars
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___k_PathTrimChars_9;
	// System.Char[] Unity.XRTools.Utils.Internal.ScriptableSettingsBase::k_InvalidCharacters
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___k_InvalidCharacters_10;
	// System.String[] Unity.XRTools.Utils.Internal.ScriptableSettingsBase::k_InvalidStrings
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___k_InvalidStrings_11;

public:
	inline static int32_t get_offset_of_k_PathTrimChars_9() { return static_cast<int32_t>(offsetof(ScriptableSettingsBase_t1D43764F1AA18A7DB433687E4A75AC027BCAEB45_StaticFields, ___k_PathTrimChars_9)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_k_PathTrimChars_9() const { return ___k_PathTrimChars_9; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_k_PathTrimChars_9() { return &___k_PathTrimChars_9; }
	inline void set_k_PathTrimChars_9(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___k_PathTrimChars_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___k_PathTrimChars_9), (void*)value);
	}

	inline static int32_t get_offset_of_k_InvalidCharacters_10() { return static_cast<int32_t>(offsetof(ScriptableSettingsBase_t1D43764F1AA18A7DB433687E4A75AC027BCAEB45_StaticFields, ___k_InvalidCharacters_10)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_k_InvalidCharacters_10() const { return ___k_InvalidCharacters_10; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_k_InvalidCharacters_10() { return &___k_InvalidCharacters_10; }
	inline void set_k_InvalidCharacters_10(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___k_InvalidCharacters_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___k_InvalidCharacters_10), (void*)value);
	}

	inline static int32_t get_offset_of_k_InvalidStrings_11() { return static_cast<int32_t>(offsetof(ScriptableSettingsBase_t1D43764F1AA18A7DB433687E4A75AC027BCAEB45_StaticFields, ___k_InvalidStrings_11)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get_k_InvalidStrings_11() const { return ___k_InvalidStrings_11; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of_k_InvalidStrings_11() { return &___k_InvalidStrings_11; }
	inline void set_k_InvalidStrings_11(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		___k_InvalidStrings_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___k_InvalidStrings_11), (void*)value);
	}
};


// Unity.XRTools.Utils.Internal.ScriptableSettingsBase`1<System.Object>
struct ScriptableSettingsBase_1_t5A9564162EF4DA7B7F0899C607967426C8527489  : public ScriptableSettingsBase_t1D43764F1AA18A7DB433687E4A75AC027BCAEB45
{
public:

public:
};

struct ScriptableSettingsBase_1_t5A9564162EF4DA7B7F0899C607967426C8527489_StaticFields
{
public:
	// System.Boolean Unity.XRTools.Utils.Internal.ScriptableSettingsBase`1::k_HasCustomPath
	bool ___k_HasCustomPath_12;
	// T Unity.XRTools.Utils.Internal.ScriptableSettingsBase`1::s_Instance
	RuntimeObject * ___s_Instance_13;

public:
	inline static int32_t get_offset_of_k_HasCustomPath_12() { return static_cast<int32_t>(offsetof(ScriptableSettingsBase_1_t5A9564162EF4DA7B7F0899C607967426C8527489_StaticFields, ___k_HasCustomPath_12)); }
	inline bool get_k_HasCustomPath_12() const { return ___k_HasCustomPath_12; }
	inline bool* get_address_of_k_HasCustomPath_12() { return &___k_HasCustomPath_12; }
	inline void set_k_HasCustomPath_12(bool value)
	{
		___k_HasCustomPath_12 = value;
	}

	inline static int32_t get_offset_of_s_Instance_13() { return static_cast<int32_t>(offsetof(ScriptableSettingsBase_1_t5A9564162EF4DA7B7F0899C607967426C8527489_StaticFields, ___s_Instance_13)); }
	inline RuntimeObject * get_s_Instance_13() const { return ___s_Instance_13; }
	inline RuntimeObject ** get_address_of_s_Instance_13() { return &___s_Instance_13; }
	inline void set_s_Instance_13(RuntimeObject * value)
	{
		___s_Instance_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Instance_13), (void*)value);
	}
};


// Unity.XRTools.Utils.ScriptableSettings`1<System.Object>
struct ScriptableSettings_1_t5F2333C177F83CFEBC19E1EEC3B26A5CAC8F110F  : public ScriptableSettingsBase_1_t5A9564162EF4DA7B7F0899C607967426C8527489
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// UnityEngine.XR.ARSubsystems.SerializableDictionary`2/KeyValuePair<System.Object,System.Object>[]
struct KeyValuePairU5BU5D_t0355D455D8B6B5B8B4955D1528C394577E9B9C21  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) KeyValuePair_tDC7997A7314ED4FA7C9742BBF04107D452131A4F  m_Items[1];

public:
	inline KeyValuePair_tDC7997A7314ED4FA7C9742BBF04107D452131A4F  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline KeyValuePair_tDC7997A7314ED4FA7C9742BBF04107D452131A4F * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, KeyValuePair_tDC7997A7314ED4FA7C9742BBF04107D452131A4F  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___key_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___value_1), (void*)NULL);
		#endif
	}
	inline KeyValuePair_tDC7997A7314ED4FA7C9742BBF04107D452131A4F  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline KeyValuePair_tDC7997A7314ED4FA7C9742BBF04107D452131A4F * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, KeyValuePair_tDC7997A7314ED4FA7C9742BBF04107D452131A4F  value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___key_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___value_1), (void*)NULL);
		#endif
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
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Il2CppChar m_Items[1];

public:
	inline Il2CppChar GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Il2CppChar* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Il2CppChar value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Il2CppChar GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Il2CppChar* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Il2CppChar value)
	{
		m_Items[index] = value;
	}
};
// System.String[]
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) String_t* m_Items[1];

public:
	inline String_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline String_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, String_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline String_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline String_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, String_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// !!0 System.Reflection.CustomAttributeExtensions::GetCustomAttribute<System.Object>(System.Reflection.MemberInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * CustomAttributeExtensions_GetCustomAttribute_TisRuntimeObject_mCFC7690084D2E45FB609A39D2DD9C11B0195D052_gshared (MemberInfo_t * ___element0, const RuntimeMethod* method);
// System.Void UnityEngine.Playables.ScriptPlayable`1<System.Object>::.ctor(UnityEngine.Playables.PlayableHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScriptPlayable_1__ctor_m35E668A204B15B5AAC48A7265A4CE08F866DF5BF_gshared (ScriptPlayable_1_t7495DFF84B5233AF863183881C3C7D626F65C266 * __this, PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  ___handle0, const RuntimeMethod* method);
// UnityEngine.Playables.PlayableHandle UnityEngine.Playables.ScriptPlayable`1<System.Object>::GetHandle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  ScriptPlayable_1_GetHandle_m65BABE7B2DF1994C8A908D1B87BABC926648109B_gshared (ScriptPlayable_1_t7495DFF84B5233AF863183881C3C7D626F65C266 * __this, const RuntimeMethod* method);
// T UnityEngine.Playables.PlayableHandle::GetObject<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * PlayableHandle_GetObject_TisRuntimeObject_mF33505C32B01896DADE2E6295F7FA71E8563508B_gshared (PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A * __this, const RuntimeMethod* method);
// T UnityEngine.Playables.ScriptPlayable`1<System.Object>::GetBehaviour()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * ScriptPlayable_1_GetBehaviour_mAAB5A26737D268B878D5CDCF0888FC9B738C09F9_gshared (ScriptPlayable_1_t7495DFF84B5233AF863183881C3C7D626F65C266 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Playables.ScriptPlayable`1<System.Object>::Equals(UnityEngine.Playables.ScriptPlayable`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ScriptPlayable_1_Equals_m72468FB4D96A9940F432654856653DFF5D0F3A78_gshared (ScriptPlayable_1_t7495DFF84B5233AF863183881C3C7D626F65C266 * __this, ScriptPlayable_1_t7495DFF84B5233AF863183881C3C7D626F65C266  ___other0, const RuntimeMethod* method);
// System.Collections.Generic.KeyValuePair`2<!0,!1> System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  Enumerator_get_Current_m17E1C36ECBB09CC2AB892710866F8655D83A6048_gshared_inline (Enumerator_tE4E91EE5578038530CF0C46227953BA787E7A0A0 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::get_Key()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * KeyValuePair_2_get_Key_mCAD7B121DB998D7C56EB0281215A860EFE9DCD95_gshared_inline (KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 * __this, const RuntimeMethod* method);
// !1 System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::get_Value()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * KeyValuePair_2_get_Value_m622223593F7461E7812C581DDB145270016ED303_gshared_inline (KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mCAD84084129516BD41DE5CC3E1FABA5A8DF836D0_gshared (Enumerator_tE4E91EE5578038530CF0C46227953BA787E7A0A0 * __this, const RuntimeMethod* method);

// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E (RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  ___handle0, const RuntimeMethod* method);
// System.Boolean System.Type::get_IsValueType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_get_IsValueType_m9CCCB4759C2D5A890096F8DBA66DAAEFE9D913FB (Type_t * __this, const RuntimeMethod* method);
// System.Boolean System.Type::get_IsPrimitive()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_get_IsPrimitive_m43E50D507C45CE3BD51C0DC07C8AB061AFD6B3C3 (Type_t * __this, const RuntimeMethod* method);
// System.Boolean System.Type::get_IsInterface()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_get_IsInterface_mB10C34DEE8B22E1597C813211BBED17DD724FC07 (Type_t * __this, const RuntimeMethod* method);
// System.Boolean System.Type::get_IsAbstract()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_get_IsAbstract_mB16DB56FCABF55740019D32C5286F38E30CAA19F (Type_t * __this, const RuntimeMethod* method);
// System.Boolean System.Type::get_IsArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_get_IsArray_m15FE83DD8FAF090F9BDA924753C7750AAEA7CFD1 (Type_t * __this, const RuntimeMethod* method);
// !!0 System.Reflection.CustomAttributeExtensions::GetCustomAttribute<System.FlagsAttribute>(System.Reflection.MemberInfo)
inline FlagsAttribute_t511C558FACEF1CC64702A8FAB67CAF3CBA65DF36 * CustomAttributeExtensions_GetCustomAttribute_TisFlagsAttribute_t511C558FACEF1CC64702A8FAB67CAF3CBA65DF36_m2724CDFC73603733A936D82E548753DEAD4C0363 (MemberInfo_t * ___element0, const RuntimeMethod* method)
{
	return ((  FlagsAttribute_t511C558FACEF1CC64702A8FAB67CAF3CBA65DF36 * (*) (MemberInfo_t *, const RuntimeMethod*))CustomAttributeExtensions_GetCustomAttribute_TisRuntimeObject_mCFC7690084D2E45FB609A39D2DD9C11B0195D052_gshared)(___element0, method);
}
// System.Type System.Nullable::GetUnderlyingType(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * Nullable_GetUnderlyingType_mC5699E7E11E1AFE25365CAB564A48F0193318629 (Type_t * ___nullableType0, const RuntimeMethod* method);
// System.Boolean System.Type::op_Inequality(System.Type,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_op_Inequality_m6DDC5E923203A79BF505F9275B694AD3FAA36DB0 (Type_t * ___left0, Type_t * ___right1, const RuntimeMethod* method);
// System.Boolean System.Type::op_Equality(System.Type,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_op_Equality_mA438719A1FDF103C7BBBB08AEF564E7FAEEA0046 (Type_t * ___left0, Type_t * ___right1, const RuntimeMethod* method);
// System.Boolean Unity.Properties.Internal.RuntimeTypeInfoCache::IsContainerType(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RuntimeTypeInfoCache_IsContainerType_m83F2173E5EB11D908CC3BA99C89B4B65B64EAA96 (Type_t * ___type0, const RuntimeMethod* method);
// System.Void UnityEngine.Playables.ScriptPlayable`1<System.Object>::.ctor(UnityEngine.Playables.PlayableHandle)
inline void ScriptPlayable_1__ctor_m35E668A204B15B5AAC48A7265A4CE08F866DF5BF (ScriptPlayable_1_t7495DFF84B5233AF863183881C3C7D626F65C266 * __this, PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  ___handle0, const RuntimeMethod* method)
{
	((  void (*) (ScriptPlayable_1_t7495DFF84B5233AF863183881C3C7D626F65C266 *, PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A , const RuntimeMethod*))ScriptPlayable_1__ctor_m35E668A204B15B5AAC48A7265A4CE08F866DF5BF_gshared)(__this, ___handle0, method);
}
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::LogError(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_m8850D65592770A364D494025FF3A73E8D4D70485 (RuntimeObject * ___message0, const RuntimeMethod* method);
// UnityEngine.Playables.PlayableHandle UnityEngine.Playables.PlayableHandle::get_Null()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  PlayableHandle_get_Null_mD1C6FC2D7F6A7A23955ACDD87BE934B75463E612 (const RuntimeMethod* method);
// UnityEngine.Playables.PlayableHandle UnityEngine.Playables.PlayableGraph::CreatePlayableHandle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  PlayableGraph_CreatePlayableHandle_m85B440E4F66392BA77EDA22CEA513EDA27F2C2BC (PlayableGraph_t2D5083CFACB413FA1BB13FF054BE09A5A55A205A * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Playables.PlayableHandle::IsValid()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayableHandle_IsValid_m237A5E7818768641BAC928BD08EC0AB439E3DAF6 (PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Playables.PlayableHandle::SetInputCount(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayableHandle_SetInputCount_mF476D7A0B1D1086914BB87ABF80D478740A97E8E (PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Playables.PlayableHandle::SetScriptInstance(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayableHandle_SetScriptInstance_mE1394E51BA433BE85C4E7A59274C9C25E24FB410 (PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A * __this, RuntimeObject * ___scriptInstance0, const RuntimeMethod* method);
// UnityEngine.ScriptableObject UnityEngine.ScriptableObject::CreateInstance(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A * ScriptableObject_CreateInstance_m5371BDC0B4F60FE15914A7BB3FBE07D0ACA0A8D4 (Type_t * ___type0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___x0, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___y1, const RuntimeMethod* method);
// UnityEngine.Object UnityEngine.Object::Instantiate(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * Object_Instantiate_m565A02EA45AEA7442E19FDC8E82695491938CB5A (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___original0, const RuntimeMethod* method);
// UnityEngine.HideFlags UnityEngine.Object::get_hideFlags()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Object_get_hideFlags_m0F6495E1FB440A08314B7D74CCA99C897FAC05D1 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Object::set_hideFlags(UnityEngine.HideFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_set_hideFlags_m7DE229AF60B92F0C68819F77FEB27D775E66F3AC (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Type UnityEngine.Playables.PlayableHandle::GetPlayableType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * PlayableHandle_GetPlayableType_m5E523E4DA00DF2FAB2E209B0B43FD5AA430AE84F (PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A * __this, const RuntimeMethod* method);
// System.String System.String::Format(System.String,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m8D1CB0410C35E052A53AE957C914C841E54BAB66 (String_t* ___format0, RuntimeObject * ___arg01, RuntimeObject * ___arg12, const RuntimeMethod* method);
// System.Void System.InvalidCastException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidCastException__ctor_m50103CBF0C211B93BF46697875413A10B5A5C5A3 (InvalidCastException_tD99F9FF94C3859C78E90F68C2F77A1558BCAF463 * __this, String_t* ___message0, const RuntimeMethod* method);
// UnityEngine.Playables.PlayableHandle UnityEngine.Playables.ScriptPlayable`1<System.Object>::GetHandle()
inline PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  ScriptPlayable_1_GetHandle_m65BABE7B2DF1994C8A908D1B87BABC926648109B (ScriptPlayable_1_t7495DFF84B5233AF863183881C3C7D626F65C266 * __this, const RuntimeMethod* method)
{
	return ((  PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  (*) (ScriptPlayable_1_t7495DFF84B5233AF863183881C3C7D626F65C266 *, const RuntimeMethod*))ScriptPlayable_1_GetHandle_m65BABE7B2DF1994C8A908D1B87BABC926648109B_gshared)(__this, method);
}
// T UnityEngine.Playables.PlayableHandle::GetObject<System.Object>()
inline RuntimeObject * PlayableHandle_GetObject_TisRuntimeObject_mF33505C32B01896DADE2E6295F7FA71E8563508B (PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A * __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject * (*) (PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A *, const RuntimeMethod*))PlayableHandle_GetObject_TisRuntimeObject_mF33505C32B01896DADE2E6295F7FA71E8563508B_gshared)(__this, method);
}
// T UnityEngine.Playables.ScriptPlayable`1<System.Object>::GetBehaviour()
inline RuntimeObject * ScriptPlayable_1_GetBehaviour_mAAB5A26737D268B878D5CDCF0888FC9B738C09F9 (ScriptPlayable_1_t7495DFF84B5233AF863183881C3C7D626F65C266 * __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject * (*) (ScriptPlayable_1_t7495DFF84B5233AF863183881C3C7D626F65C266 *, const RuntimeMethod*))ScriptPlayable_1_GetBehaviour_mAAB5A26737D268B878D5CDCF0888FC9B738C09F9_gshared)(__this, method);
}
// System.Void UnityEngine.Playables.Playable::.ctor(UnityEngine.Playables.PlayableHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Playable__ctor_m4B5AC727703A68C00773F99DE1C711EFC973DCA8 (Playable_tC24692CDD1DD8F1D5C646035A76D2830A70214E2 * __this, PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  ___handle0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Playables.PlayableHandle::op_Equality(UnityEngine.Playables.PlayableHandle,UnityEngine.Playables.PlayableHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayableHandle_op_Equality_mFD26CFA8ECF2B622B1A3D4117066CAE965C9F704 (PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  ___x0, PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  ___y1, const RuntimeMethod* method);
// System.Boolean UnityEngine.Playables.ScriptPlayable`1<System.Object>::Equals(UnityEngine.Playables.ScriptPlayable`1<T>)
inline bool ScriptPlayable_1_Equals_m72468FB4D96A9940F432654856653DFF5D0F3A78 (ScriptPlayable_1_t7495DFF84B5233AF863183881C3C7D626F65C266 * __this, ScriptPlayable_1_t7495DFF84B5233AF863183881C3C7D626F65C266  ___other0, const RuntimeMethod* method)
{
	return ((  bool (*) (ScriptPlayable_1_t7495DFF84B5233AF863183881C3C7D626F65C266 *, ScriptPlayable_1_t7495DFF84B5233AF863183881C3C7D626F65C266 , const RuntimeMethod*))ScriptPlayable_1_Equals_m72468FB4D96A9940F432654856653DFF5D0F3A78_gshared)(__this, ___other0, method);
}
// System.Void Unity.XRTools.Utils.Internal.ScriptableSettingsBase::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScriptableSettingsBase__ctor_m88791CF2587FAD6F03DC724B9113B9E736394CCE (ScriptableSettingsBase_t1D43764F1AA18A7DB433687E4A75AC027BCAEB45 * __this, const RuntimeMethod* method);
// System.String System.String::Format(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mB3D38E5238C3164DB4D7D29339D9E225A4496D17 (String_t* ___format0, RuntimeObject * ___arg01, const RuntimeMethod* method);
// System.Void Unity.XRTools.Utils.DebugUtils::LogError(System.String,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DebugUtils_LogError_m785FC45D5BBC64A5AF38B7CF64D117CAE21C2C90 (String_t* ___message0, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___context1, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___x0, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___y1, const RuntimeMethod* method);
// UnityEngine.Object UnityEngine.Resources::Load(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * Resources_Load_m011631B3740AFD38D496838F10D3DA635A061120 (String_t* ___path0, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Collections.Generic.KeyValuePair`2<!0,!1> System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::get_Current()
inline KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  Enumerator_get_Current_m17E1C36ECBB09CC2AB892710866F8655D83A6048_inline (Enumerator_tE4E91EE5578038530CF0C46227953BA787E7A0A0 * __this, const RuntimeMethod* method)
{
	return ((  KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  (*) (Enumerator_tE4E91EE5578038530CF0C46227953BA787E7A0A0 *, const RuntimeMethod*))Enumerator_get_Current_m17E1C36ECBB09CC2AB892710866F8655D83A6048_gshared_inline)(__this, method);
}
// !0 System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::get_Key()
inline RuntimeObject * KeyValuePair_2_get_Key_mCAD7B121DB998D7C56EB0281215A860EFE9DCD95_inline (KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 * __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject * (*) (KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 *, const RuntimeMethod*))KeyValuePair_2_get_Key_mCAD7B121DB998D7C56EB0281215A860EFE9DCD95_gshared_inline)(__this, method);
}
// !1 System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::get_Value()
inline RuntimeObject * KeyValuePair_2_get_Value_m622223593F7461E7812C581DDB145270016ED303_inline (KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 * __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject * (*) (KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 *, const RuntimeMethod*))KeyValuePair_2_get_Value_m622223593F7461E7812C581DDB145270016ED303_gshared_inline)(__this, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::MoveNext()
inline bool Enumerator_MoveNext_mCAD84084129516BD41DE5CC3E1FABA5A8DF836D0 (Enumerator_tE4E91EE5578038530CF0C46227953BA787E7A0A0 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tE4E91EE5578038530CF0C46227953BA787E7A0A0 *, const RuntimeMethod*))Enumerator_MoveNext_mCAD84084129516BD41DE5CC3E1FABA5A8DF836D0_gshared)(__this, method);
}
// System.Void System.InvalidOperationException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidOperationException__ctor_mC012CE552988309733C896F3FEA8249171E4402E (InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB * __this, String_t* ___message0, const RuntimeMethod* method);
// System.Void Unity.RuntimeSceneSerialization.Internal.UnityObjectPropertyVisitor::.ctor(Unity.RuntimeSceneSerialization.SerializationMetadata)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityObjectPropertyVisitor__ctor_mA6738B2407BE150DC4C6E74204B0BAD7B1E493AE (UnityObjectPropertyVisitor_t6D216B27CEC2B426B88BCA62A02F8A7D3BC4F14C * __this, SerializationMetadata_tCB3C700413EA4D79DB35199627C7DD6F8EF1ECE2 * ___metadata0, const RuntimeMethod* method);
// System.String[] System.String::Split(System.Char[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* String_Split_m2C74DC2B85B322998094BEDE787C378822E1F28B (String_t* __this, CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___separator0, const RuntimeMethod* method);
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method);
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Unity.Properties.Internal.RuntimeTypeInfoCache`1<UnityEngine.BoundsInt>::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RuntimeTypeInfoCache_1__cctor_mAA66DC47C2AEE350D1D9CE43B48E388DE7248EEA_gshared (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CustomAttributeExtensions_GetCustomAttribute_TisFlagsAttribute_t511C558FACEF1CC64702A8FAB67CAF3CBA65DF36_m2724CDFC73603733A936D82E548753DEAD4C0363_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LazyLoadReference_1_tA48C53B4B246BEF5D956E8AB23A2EC45C6C5C36E_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Type_t * V_0 = NULL;
	int32_t G_B3_0 = 0;
	int32_t G_B6_0 = 0;
	int32_t G_B9_0 = 0;
	int32_t G_B12_0 = 0;
	{
		// var type = typeof(T);
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_0 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->klass)->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1;
		L_1 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_0, /*hidden argument*/NULL);
		V_0 = (Type_t *)L_1;
		// IsValueType = type.IsValueType;
		Type_t * L_2 = V_0;
		NullCheck((Type_t *)L_2);
		bool L_3;
		L_3 = Type_get_IsValueType_m9CCCB4759C2D5A890096F8DBA66DAAEFE9D913FB((Type_t *)L_2, /*hidden argument*/NULL);
		((RuntimeTypeInfoCache_1_tF08151FDB30F2267AE1E15AB784FF69BB07EB622_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->set_IsValueType_0(L_3);
		// IsPrimitive = type.IsPrimitive;
		Type_t * L_4 = V_0;
		NullCheck((Type_t *)L_4);
		bool L_5;
		L_5 = Type_get_IsPrimitive_m43E50D507C45CE3BD51C0DC07C8AB061AFD6B3C3((Type_t *)L_4, /*hidden argument*/NULL);
		((RuntimeTypeInfoCache_1_tF08151FDB30F2267AE1E15AB784FF69BB07EB622_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->set_IsPrimitive_1(L_5);
		// IsInterface = type.IsInterface;
		Type_t * L_6 = V_0;
		NullCheck((Type_t *)L_6);
		bool L_7;
		L_7 = Type_get_IsInterface_mB10C34DEE8B22E1597C813211BBED17DD724FC07((Type_t *)L_6, /*hidden argument*/NULL);
		((RuntimeTypeInfoCache_1_tF08151FDB30F2267AE1E15AB784FF69BB07EB622_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->set_IsInterface_2(L_7);
		// IsAbstract = type.IsAbstract;
		Type_t * L_8 = V_0;
		NullCheck((Type_t *)L_8);
		bool L_9;
		L_9 = Type_get_IsAbstract_mB16DB56FCABF55740019D32C5286F38E30CAA19F((Type_t *)L_8, /*hidden argument*/NULL);
		((RuntimeTypeInfoCache_1_tF08151FDB30F2267AE1E15AB784FF69BB07EB622_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->set_IsAbstract_3(L_9);
		// IsArray = type.IsArray;
		Type_t * L_10 = V_0;
		NullCheck((Type_t *)L_10);
		bool L_11;
		L_11 = Type_get_IsArray_m15FE83DD8FAF090F9BDA924753C7750AAEA7CFD1((Type_t *)L_10, /*hidden argument*/NULL);
		((RuntimeTypeInfoCache_1_tF08151FDB30F2267AE1E15AB784FF69BB07EB622_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->set_IsArray_4(L_11);
		// IsEnum = type.IsEnum;
		Type_t * L_12 = V_0;
		NullCheck((Type_t *)L_12);
		bool L_13;
		L_13 = VirtFuncInvoker0< bool >::Invoke(67 /* System.Boolean System.Type::get_IsEnum() */, (Type_t *)L_12);
		((RuntimeTypeInfoCache_1_tF08151FDB30F2267AE1E15AB784FF69BB07EB622_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->set_IsEnum_5(L_13);
		// IsEnumFlags = IsEnum && null != type.GetCustomAttribute<FlagsAttribute>();
		bool L_14 = ((RuntimeTypeInfoCache_1_tF08151FDB30F2267AE1E15AB784FF69BB07EB622_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->get_IsEnum_5();
		if (!L_14)
		{
			goto IL_005f;
		}
	}
	{
		Type_t * L_15 = V_0;
		FlagsAttribute_t511C558FACEF1CC64702A8FAB67CAF3CBA65DF36 * L_16;
		L_16 = CustomAttributeExtensions_GetCustomAttribute_TisFlagsAttribute_t511C558FACEF1CC64702A8FAB67CAF3CBA65DF36_m2724CDFC73603733A936D82E548753DEAD4C0363((MemberInfo_t *)L_15, /*hidden argument*/CustomAttributeExtensions_GetCustomAttribute_TisFlagsAttribute_t511C558FACEF1CC64702A8FAB67CAF3CBA65DF36_m2724CDFC73603733A936D82E548753DEAD4C0363_RuntimeMethod_var);
		G_B3_0 = ((!(((RuntimeObject*)(FlagsAttribute_t511C558FACEF1CC64702A8FAB67CAF3CBA65DF36 *)L_16) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		goto IL_0060;
	}

IL_005f:
	{
		G_B3_0 = 0;
	}

IL_0060:
	{
		((RuntimeTypeInfoCache_1_tF08151FDB30F2267AE1E15AB784FF69BB07EB622_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->set_IsEnumFlags_6((bool)G_B3_0);
		// IsNullable = Nullable.GetUnderlyingType(typeof(T)) != null;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_17 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->klass)->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_18;
		L_18 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_17, /*hidden argument*/NULL);
		Type_t * L_19;
		L_19 = Nullable_GetUnderlyingType_mC5699E7E11E1AFE25365CAB564A48F0193318629((Type_t *)L_18, /*hidden argument*/NULL);
		bool L_20;
		L_20 = Type_op_Inequality_m6DDC5E923203A79BF505F9275B694AD3FAA36DB0((Type_t *)L_19, (Type_t *)NULL, /*hidden argument*/NULL);
		((RuntimeTypeInfoCache_1_tF08151FDB30F2267AE1E15AB784FF69BB07EB622_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->set_IsNullable_7(L_20);
		// IsObjectType = type == typeof(object);
		Type_t * L_21 = V_0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_22 = { reinterpret_cast<intptr_t> (RuntimeObject_0_0_0_var) };
		Type_t * L_23;
		L_23 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_22, /*hidden argument*/NULL);
		bool L_24;
		L_24 = Type_op_Equality_mA438719A1FDF103C7BBBB08AEF564E7FAEEA0046((Type_t *)L_21, (Type_t *)L_23, /*hidden argument*/NULL);
		((RuntimeTypeInfoCache_1_tF08151FDB30F2267AE1E15AB784FF69BB07EB622_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->set_IsObjectType_8(L_24);
		// IsStringType = type == typeof(string);
		Type_t * L_25 = V_0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_26 = { reinterpret_cast<intptr_t> (String_t_0_0_0_var) };
		Type_t * L_27;
		L_27 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_26, /*hidden argument*/NULL);
		bool L_28;
		L_28 = Type_op_Equality_mA438719A1FDF103C7BBBB08AEF564E7FAEEA0046((Type_t *)L_25, (Type_t *)L_27, /*hidden argument*/NULL);
		((RuntimeTypeInfoCache_1_tF08151FDB30F2267AE1E15AB784FF69BB07EB622_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->set_IsStringType_9(L_28);
		// IsContainerType = RuntimeTypeInfoCache.IsContainerType(type);
		Type_t * L_29 = V_0;
		bool L_30;
		L_30 = RuntimeTypeInfoCache_IsContainerType_m83F2173E5EB11D908CC3BA99C89B4B65B64EAA96((Type_t *)L_29, /*hidden argument*/NULL);
		((RuntimeTypeInfoCache_1_tF08151FDB30F2267AE1E15AB784FF69BB07EB622_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->set_IsContainerType_10(L_30);
		// CanBeNull = !IsValueType;
		bool L_31 = ((RuntimeTypeInfoCache_1_tF08151FDB30F2267AE1E15AB784FF69BB07EB622_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->get_IsValueType_0();
		((RuntimeTypeInfoCache_1_tF08151FDB30F2267AE1E15AB784FF69BB07EB622_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->set_CanBeNull_11((bool)((((int32_t)L_31) == ((int32_t)0))? 1 : 0));
		// IsNullableOrEnum = IsEnum;
		bool L_32 = ((RuntimeTypeInfoCache_1_tF08151FDB30F2267AE1E15AB784FF69BB07EB622_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->get_IsEnum_5();
		((RuntimeTypeInfoCache_1_tF08151FDB30F2267AE1E15AB784FF69BB07EB622_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->set_IsNullableOrEnum_12(L_32);
		// IsPrimitiveOrString = IsPrimitive || IsStringType;
		bool L_33 = ((RuntimeTypeInfoCache_1_tF08151FDB30F2267AE1E15AB784FF69BB07EB622_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->get_IsPrimitive_1();
		if (L_33)
		{
			goto IL_00d9;
		}
	}
	{
		bool L_34 = ((RuntimeTypeInfoCache_1_tF08151FDB30F2267AE1E15AB784FF69BB07EB622_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->get_IsStringType_9();
		G_B6_0 = ((int32_t)(L_34));
		goto IL_00da;
	}

IL_00d9:
	{
		G_B6_0 = 1;
	}

IL_00da:
	{
		((RuntimeTypeInfoCache_1_tF08151FDB30F2267AE1E15AB784FF69BB07EB622_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->set_IsPrimitiveOrString_13((bool)G_B6_0);
		// IsAbstractOrInterface = IsAbstract || IsInterface;
		bool L_35 = ((RuntimeTypeInfoCache_1_tF08151FDB30F2267AE1E15AB784FF69BB07EB622_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->get_IsAbstract_3();
		if (L_35)
		{
			goto IL_00ed;
		}
	}
	{
		bool L_36 = ((RuntimeTypeInfoCache_1_tF08151FDB30F2267AE1E15AB784FF69BB07EB622_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->get_IsInterface_2();
		G_B9_0 = ((int32_t)(L_36));
		goto IL_00ee;
	}

IL_00ed:
	{
		G_B9_0 = 1;
	}

IL_00ee:
	{
		((RuntimeTypeInfoCache_1_tF08151FDB30F2267AE1E15AB784FF69BB07EB622_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->set_IsAbstractOrInterface_14((bool)G_B9_0);
		// CanBeNull |= IsNullable;
		bool L_37 = ((RuntimeTypeInfoCache_1_tF08151FDB30F2267AE1E15AB784FF69BB07EB622_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->get_CanBeNull_11();
		bool L_38 = ((RuntimeTypeInfoCache_1_tF08151FDB30F2267AE1E15AB784FF69BB07EB622_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->get_IsNullable_7();
		((RuntimeTypeInfoCache_1_tF08151FDB30F2267AE1E15AB784FF69BB07EB622_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->set_CanBeNull_11((bool)((int32_t)((int32_t)L_37|(int32_t)L_38)));
		// IsNullableOrEnum |= IsNullable;
		bool L_39 = ((RuntimeTypeInfoCache_1_tF08151FDB30F2267AE1E15AB784FF69BB07EB622_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->get_IsNullableOrEnum_12();
		bool L_40 = ((RuntimeTypeInfoCache_1_tF08151FDB30F2267AE1E15AB784FF69BB07EB622_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->get_IsNullable_7();
		((RuntimeTypeInfoCache_1_tF08151FDB30F2267AE1E15AB784FF69BB07EB622_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->set_IsNullableOrEnum_12((bool)((int32_t)((int32_t)L_39|(int32_t)L_40)));
		// IsLazyLoadReference = type.IsGenericType && type.GetGenericTypeDefinition() == typeof(UnityEngine.LazyLoadReference<>);
		Type_t * L_41 = V_0;
		NullCheck((Type_t *)L_41);
		bool L_42;
		L_42 = VirtFuncInvoker0< bool >::Invoke(71 /* System.Boolean System.Type::get_IsGenericType() */, (Type_t *)L_41);
		if (!L_42)
		{
			goto IL_0132;
		}
	}
	{
		Type_t * L_43 = V_0;
		NullCheck((Type_t *)L_43);
		Type_t * L_44;
		L_44 = VirtFuncInvoker0< Type_t * >::Invoke(96 /* System.Type System.Type::GetGenericTypeDefinition() */, (Type_t *)L_43);
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_45 = { reinterpret_cast<intptr_t> (LazyLoadReference_1_tA48C53B4B246BEF5D956E8AB23A2EC45C6C5C36E_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_46;
		L_46 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_45, /*hidden argument*/NULL);
		bool L_47;
		L_47 = Type_op_Equality_mA438719A1FDF103C7BBBB08AEF564E7FAEEA0046((Type_t *)L_44, (Type_t *)L_46, /*hidden argument*/NULL);
		G_B12_0 = ((int32_t)(L_47));
		goto IL_0133;
	}

IL_0132:
	{
		G_B12_0 = 0;
	}

IL_0133:
	{
		((RuntimeTypeInfoCache_1_tF08151FDB30F2267AE1E15AB784FF69BB07EB622_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->set_IsLazyLoadReference_15((bool)G_B12_0);
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
// System.Void Unity.Properties.Internal.RuntimeTypeInfoCache`1<System.Byte>::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RuntimeTypeInfoCache_1__cctor_mF85E47A52F415732016885E2DCD117990F86A090_gshared (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CustomAttributeExtensions_GetCustomAttribute_TisFlagsAttribute_t511C558FACEF1CC64702A8FAB67CAF3CBA65DF36_m2724CDFC73603733A936D82E548753DEAD4C0363_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LazyLoadReference_1_tA48C53B4B246BEF5D956E8AB23A2EC45C6C5C36E_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Type_t * V_0 = NULL;
	int32_t G_B3_0 = 0;
	int32_t G_B6_0 = 0;
	int32_t G_B9_0 = 0;
	int32_t G_B12_0 = 0;
	{
		// var type = typeof(T);
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_0 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->klass)->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1;
		L_1 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_0, /*hidden argument*/NULL);
		V_0 = (Type_t *)L_1;
		// IsValueType = type.IsValueType;
		Type_t * L_2 = V_0;
		NullCheck((Type_t *)L_2);
		bool L_3;
		L_3 = Type_get_IsValueType_m9CCCB4759C2D5A890096F8DBA66DAAEFE9D913FB((Type_t *)L_2, /*hidden argument*/NULL);
		((RuntimeTypeInfoCache_1_t15D2958D549D5150114F6EE3F459973EF7F5B273_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->set_IsValueType_0(L_3);
		// IsPrimitive = type.IsPrimitive;
		Type_t * L_4 = V_0;
		NullCheck((Type_t *)L_4);
		bool L_5;
		L_5 = Type_get_IsPrimitive_m43E50D507C45CE3BD51C0DC07C8AB061AFD6B3C3((Type_t *)L_4, /*hidden argument*/NULL);
		((RuntimeTypeInfoCache_1_t15D2958D549D5150114F6EE3F459973EF7F5B273_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->set_IsPrimitive_1(L_5);
		// IsInterface = type.IsInterface;
		Type_t * L_6 = V_0;
		NullCheck((Type_t *)L_6);
		bool L_7;
		L_7 = Type_get_IsInterface_mB10C34DEE8B22E1597C813211BBED17DD724FC07((Type_t *)L_6, /*hidden argument*/NULL);
		((RuntimeTypeInfoCache_1_t15D2958D549D5150114F6EE3F459973EF7F5B273_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->set_IsInterface_2(L_7);
		// IsAbstract = type.IsAbstract;
		Type_t * L_8 = V_0;
		NullCheck((Type_t *)L_8);
		bool L_9;
		L_9 = Type_get_IsAbstract_mB16DB56FCABF55740019D32C5286F38E30CAA19F((Type_t *)L_8, /*hidden argument*/NULL);
		((RuntimeTypeInfoCache_1_t15D2958D549D5150114F6EE3F459973EF7F5B273_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->set_IsAbstract_3(L_9);
		// IsArray = type.IsArray;
		Type_t * L_10 = V_0;
		NullCheck((Type_t *)L_10);
		bool L_11;
		L_11 = Type_get_IsArray_m15FE83DD8FAF090F9BDA924753C7750AAEA7CFD1((Type_t *)L_10, /*hidden argument*/NULL);
		((RuntimeTypeInfoCache_1_t15D2958D549D5150114F6EE3F459973EF7F5B273_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->set_IsArray_4(L_11);
		// IsEnum = type.IsEnum;
		Type_t * L_12 = V_0;
		NullCheck((Type_t *)L_12);
		bool L_13;
		L_13 = VirtFuncInvoker0< bool >::Invoke(67 /* System.Boolean System.Type::get_IsEnum() */, (Type_t *)L_12);
		((RuntimeTypeInfoCache_1_t15D2958D549D5150114F6EE3F459973EF7F5B273_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->set_IsEnum_5(L_13);
		// IsEnumFlags = IsEnum && null != type.GetCustomAttribute<FlagsAttribute>();
		bool L_14 = ((RuntimeTypeInfoCache_1_t15D2958D549D5150114F6EE3F459973EF7F5B273_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->get_IsEnum_5();
		if (!L_14)
		{
			goto IL_005f;
		}
	}
	{
		Type_t * L_15 = V_0;
		FlagsAttribute_t511C558FACEF1CC64702A8FAB67CAF3CBA65DF36 * L_16;
		L_16 = CustomAttributeExtensions_GetCustomAttribute_TisFlagsAttribute_t511C558FACEF1CC64702A8FAB67CAF3CBA65DF36_m2724CDFC73603733A936D82E548753DEAD4C0363((MemberInfo_t *)L_15, /*hidden argument*/CustomAttributeExtensions_GetCustomAttribute_TisFlagsAttribute_t511C558FACEF1CC64702A8FAB67CAF3CBA65DF36_m2724CDFC73603733A936D82E548753DEAD4C0363_RuntimeMethod_var);
		G_B3_0 = ((!(((RuntimeObject*)(FlagsAttribute_t511C558FACEF1CC64702A8FAB67CAF3CBA65DF36 *)L_16) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		goto IL_0060;
	}

IL_005f:
	{
		G_B3_0 = 0;
	}

IL_0060:
	{
		((RuntimeTypeInfoCache_1_t15D2958D549D5150114F6EE3F459973EF7F5B273_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->set_IsEnumFlags_6((bool)G_B3_0);
		// IsNullable = Nullable.GetUnderlyingType(typeof(T)) != null;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_17 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->klass)->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_18;
		L_18 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_17, /*hidden argument*/NULL);
		Type_t * L_19;
		L_19 = Nullable_GetUnderlyingType_mC5699E7E11E1AFE25365CAB564A48F0193318629((Type_t *)L_18, /*hidden argument*/NULL);
		bool L_20;
		L_20 = Type_op_Inequality_m6DDC5E923203A79BF505F9275B694AD3FAA36DB0((Type_t *)L_19, (Type_t *)NULL, /*hidden argument*/NULL);
		((RuntimeTypeInfoCache_1_t15D2958D549D5150114F6EE3F459973EF7F5B273_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->set_IsNullable_7(L_20);
		// IsObjectType = type == typeof(object);
		Type_t * L_21 = V_0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_22 = { reinterpret_cast<intptr_t> (RuntimeObject_0_0_0_var) };
		Type_t * L_23;
		L_23 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_22, /*hidden argument*/NULL);
		bool L_24;
		L_24 = Type_op_Equality_mA438719A1FDF103C7BBBB08AEF564E7FAEEA0046((Type_t *)L_21, (Type_t *)L_23, /*hidden argument*/NULL);
		((RuntimeTypeInfoCache_1_t15D2958D549D5150114F6EE3F459973EF7F5B273_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->set_IsObjectType_8(L_24);
		// IsStringType = type == typeof(string);
		Type_t * L_25 = V_0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_26 = { reinterpret_cast<intptr_t> (String_t_0_0_0_var) };
		Type_t * L_27;
		L_27 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_26, /*hidden argument*/NULL);
		bool L_28;
		L_28 = Type_op_Equality_mA438719A1FDF103C7BBBB08AEF564E7FAEEA0046((Type_t *)L_25, (Type_t *)L_27, /*hidden argument*/NULL);
		((RuntimeTypeInfoCache_1_t15D2958D549D5150114F6EE3F459973EF7F5B273_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->set_IsStringType_9(L_28);
		// IsContainerType = RuntimeTypeInfoCache.IsContainerType(type);
		Type_t * L_29 = V_0;
		bool L_30;
		L_30 = RuntimeTypeInfoCache_IsContainerType_m83F2173E5EB11D908CC3BA99C89B4B65B64EAA96((Type_t *)L_29, /*hidden argument*/NULL);
		((RuntimeTypeInfoCache_1_t15D2958D549D5150114F6EE3F459973EF7F5B273_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->set_IsContainerType_10(L_30);
		// CanBeNull = !IsValueType;
		bool L_31 = ((RuntimeTypeInfoCache_1_t15D2958D549D5150114F6EE3F459973EF7F5B273_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->get_IsValueType_0();
		((RuntimeTypeInfoCache_1_t15D2958D549D5150114F6EE3F459973EF7F5B273_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->set_CanBeNull_11((bool)((((int32_t)L_31) == ((int32_t)0))? 1 : 0));
		// IsNullableOrEnum = IsEnum;
		bool L_32 = ((RuntimeTypeInfoCache_1_t15D2958D549D5150114F6EE3F459973EF7F5B273_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->get_IsEnum_5();
		((RuntimeTypeInfoCache_1_t15D2958D549D5150114F6EE3F459973EF7F5B273_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->set_IsNullableOrEnum_12(L_32);
		// IsPrimitiveOrString = IsPrimitive || IsStringType;
		bool L_33 = ((RuntimeTypeInfoCache_1_t15D2958D549D5150114F6EE3F459973EF7F5B273_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->get_IsPrimitive_1();
		if (L_33)
		{
			goto IL_00d9;
		}
	}
	{
		bool L_34 = ((RuntimeTypeInfoCache_1_t15D2958D549D5150114F6EE3F459973EF7F5B273_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->get_IsStringType_9();
		G_B6_0 = ((int32_t)(L_34));
		goto IL_00da;
	}

IL_00d9:
	{
		G_B6_0 = 1;
	}

IL_00da:
	{
		((RuntimeTypeInfoCache_1_t15D2958D549D5150114F6EE3F459973EF7F5B273_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->set_IsPrimitiveOrString_13((bool)G_B6_0);
		// IsAbstractOrInterface = IsAbstract || IsInterface;
		bool L_35 = ((RuntimeTypeInfoCache_1_t15D2958D549D5150114F6EE3F459973EF7F5B273_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->get_IsAbstract_3();
		if (L_35)
		{
			goto IL_00ed;
		}
	}
	{
		bool L_36 = ((RuntimeTypeInfoCache_1_t15D2958D549D5150114F6EE3F459973EF7F5B273_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->get_IsInterface_2();
		G_B9_0 = ((int32_t)(L_36));
		goto IL_00ee;
	}

IL_00ed:
	{
		G_B9_0 = 1;
	}

IL_00ee:
	{
		((RuntimeTypeInfoCache_1_t15D2958D549D5150114F6EE3F459973EF7F5B273_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->set_IsAbstractOrInterface_14((bool)G_B9_0);
		// CanBeNull |= IsNullable;
		bool L_37 = ((RuntimeTypeInfoCache_1_t15D2958D549D5150114F6EE3F459973EF7F5B273_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->get_CanBeNull_11();
		bool L_38 = ((RuntimeTypeInfoCache_1_t15D2958D549D5150114F6EE3F459973EF7F5B273_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->get_IsNullable_7();
		((RuntimeTypeInfoCache_1_t15D2958D549D5150114F6EE3F459973EF7F5B273_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->set_CanBeNull_11((bool)((int32_t)((int32_t)L_37|(int32_t)L_38)));
		// IsNullableOrEnum |= IsNullable;
		bool L_39 = ((RuntimeTypeInfoCache_1_t15D2958D549D5150114F6EE3F459973EF7F5B273_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->get_IsNullableOrEnum_12();
		bool L_40 = ((RuntimeTypeInfoCache_1_t15D2958D549D5150114F6EE3F459973EF7F5B273_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->get_IsNullable_7();
		((RuntimeTypeInfoCache_1_t15D2958D549D5150114F6EE3F459973EF7F5B273_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->set_IsNullableOrEnum_12((bool)((int32_t)((int32_t)L_39|(int32_t)L_40)));
		// IsLazyLoadReference = type.IsGenericType && type.GetGenericTypeDefinition() == typeof(UnityEngine.LazyLoadReference<>);
		Type_t * L_41 = V_0;
		NullCheck((Type_t *)L_41);
		bool L_42;
		L_42 = VirtFuncInvoker0< bool >::Invoke(71 /* System.Boolean System.Type::get_IsGenericType() */, (Type_t *)L_41);
		if (!L_42)
		{
			goto IL_0132;
		}
	}
	{
		Type_t * L_43 = V_0;
		NullCheck((Type_t *)L_43);
		Type_t * L_44;
		L_44 = VirtFuncInvoker0< Type_t * >::Invoke(96 /* System.Type System.Type::GetGenericTypeDefinition() */, (Type_t *)L_43);
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_45 = { reinterpret_cast<intptr_t> (LazyLoadReference_1_tA48C53B4B246BEF5D956E8AB23A2EC45C6C5C36E_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_46;
		L_46 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_45, /*hidden argument*/NULL);
		bool L_47;
		L_47 = Type_op_Equality_mA438719A1FDF103C7BBBB08AEF564E7FAEEA0046((Type_t *)L_44, (Type_t *)L_46, /*hidden argument*/NULL);
		G_B12_0 = ((int32_t)(L_47));
		goto IL_0133;
	}

IL_0132:
	{
		G_B12_0 = 0;
	}

IL_0133:
	{
		((RuntimeTypeInfoCache_1_t15D2958D549D5150114F6EE3F459973EF7F5B273_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->set_IsLazyLoadReference_15((bool)G_B12_0);
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
// System.Void Unity.Properties.Internal.RuntimeTypeInfoCache`1<System.Char>::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RuntimeTypeInfoCache_1__cctor_mCA090CB2D9E5FC198EF75D6F1CAE08C68DE8442C_gshared (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CustomAttributeExtensions_GetCustomAttribute_TisFlagsAttribute_t511C558FACEF1CC64702A8FAB67CAF3CBA65DF36_m2724CDFC73603733A936D82E548753DEAD4C0363_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LazyLoadReference_1_tA48C53B4B246BEF5D956E8AB23A2EC45C6C5C36E_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Type_t * V_0 = NULL;
	int32_t G_B3_0 = 0;
	int32_t G_B6_0 = 0;
	int32_t G_B9_0 = 0;
	int32_t G_B12_0 = 0;
	{
		// var type = typeof(T);
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_0 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->klass)->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1;
		L_1 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_0, /*hidden argument*/NULL);
		V_0 = (Type_t *)L_1;
		// IsValueType = type.IsValueType;
		Type_t * L_2 = V_0;
		NullCheck((Type_t *)L_2);
		bool L_3;
		L_3 = Type_get_IsValueType_m9CCCB4759C2D5A890096F8DBA66DAAEFE9D913FB((Type_t *)L_2, /*hidden argument*/NULL);
		((RuntimeTypeInfoCache_1_t9CF6C57B0806C60C2CAAAED2D7F569ED23ECA790_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->set_IsValueType_0(L_3);
		// IsPrimitive = type.IsPrimitive;
		Type_t * L_4 = V_0;
		NullCheck((Type_t *)L_4);
		bool L_5;
		L_5 = Type_get_IsPrimitive_m43E50D507C45CE3BD51C0DC07C8AB061AFD6B3C3((Type_t *)L_4, /*hidden argument*/NULL);
		((RuntimeTypeInfoCache_1_t9CF6C57B0806C60C2CAAAED2D7F569ED23ECA790_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->set_IsPrimitive_1(L_5);
		// IsInterface = type.IsInterface;
		Type_t * L_6 = V_0;
		NullCheck((Type_t *)L_6);
		bool L_7;
		L_7 = Type_get_IsInterface_mB10C34DEE8B22E1597C813211BBED17DD724FC07((Type_t *)L_6, /*hidden argument*/NULL);
		((RuntimeTypeInfoCache_1_t9CF6C57B0806C60C2CAAAED2D7F569ED23ECA790_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->set_IsInterface_2(L_7);
		// IsAbstract = type.IsAbstract;
		Type_t * L_8 = V_0;
		NullCheck((Type_t *)L_8);
		bool L_9;
		L_9 = Type_get_IsAbstract_mB16DB56FCABF55740019D32C5286F38E30CAA19F((Type_t *)L_8, /*hidden argument*/NULL);
		((RuntimeTypeInfoCache_1_t9CF6C57B0806C60C2CAAAED2D7F569ED23ECA790_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->set_IsAbstract_3(L_9);
		// IsArray = type.IsArray;
		Type_t * L_10 = V_0;
		NullCheck((Type_t *)L_10);
		bool L_11;
		L_11 = Type_get_IsArray_m15FE83DD8FAF090F9BDA924753C7750AAEA7CFD1((Type_t *)L_10, /*hidden argument*/NULL);
		((RuntimeTypeInfoCache_1_t9CF6C57B0806C60C2CAAAED2D7F569ED23ECA790_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->set_IsArray_4(L_11);
		// IsEnum = type.IsEnum;
		Type_t * L_12 = V_0;
		NullCheck((Type_t *)L_12);
		bool L_13;
		L_13 = VirtFuncInvoker0< bool >::Invoke(67 /* System.Boolean System.Type::get_IsEnum() */, (Type_t *)L_12);
		((RuntimeTypeInfoCache_1_t9CF6C57B0806C60C2CAAAED2D7F569ED23ECA790_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->set_IsEnum_5(L_13);
		// IsEnumFlags = IsEnum && null != type.GetCustomAttribute<FlagsAttribute>();
		bool L_14 = ((RuntimeTypeInfoCache_1_t9CF6C57B0806C60C2CAAAED2D7F569ED23ECA790_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->get_IsEnum_5();
		if (!L_14)
		{
			goto IL_005f;
		}
	}
	{
		Type_t * L_15 = V_0;
		FlagsAttribute_t511C558FACEF1CC64702A8FAB67CAF3CBA65DF36 * L_16;
		L_16 = CustomAttributeExtensions_GetCustomAttribute_TisFlagsAttribute_t511C558FACEF1CC64702A8FAB67CAF3CBA65DF36_m2724CDFC73603733A936D82E548753DEAD4C0363((MemberInfo_t *)L_15, /*hidden argument*/CustomAttributeExtensions_GetCustomAttribute_TisFlagsAttribute_t511C558FACEF1CC64702A8FAB67CAF3CBA65DF36_m2724CDFC73603733A936D82E548753DEAD4C0363_RuntimeMethod_var);
		G_B3_0 = ((!(((RuntimeObject*)(FlagsAttribute_t511C558FACEF1CC64702A8FAB67CAF3CBA65DF36 *)L_16) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		goto IL_0060;
	}

IL_005f:
	{
		G_B3_0 = 0;
	}

IL_0060:
	{
		((RuntimeTypeInfoCache_1_t9CF6C57B0806C60C2CAAAED2D7F569ED23ECA790_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->set_IsEnumFlags_6((bool)G_B3_0);
		// IsNullable = Nullable.GetUnderlyingType(typeof(T)) != null;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_17 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->klass)->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_18;
		L_18 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_17, /*hidden argument*/NULL);
		Type_t * L_19;
		L_19 = Nullable_GetUnderlyingType_mC5699E7E11E1AFE25365CAB564A48F0193318629((Type_t *)L_18, /*hidden argument*/NULL);
		bool L_20;
		L_20 = Type_op_Inequality_m6DDC5E923203A79BF505F9275B694AD3FAA36DB0((Type_t *)L_19, (Type_t *)NULL, /*hidden argument*/NULL);
		((RuntimeTypeInfoCache_1_t9CF6C57B0806C60C2CAAAED2D7F569ED23ECA790_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->set_IsNullable_7(L_20);
		// IsObjectType = type == typeof(object);
		Type_t * L_21 = V_0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_22 = { reinterpret_cast<intptr_t> (RuntimeObject_0_0_0_var) };
		Type_t * L_23;
		L_23 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_22, /*hidden argument*/NULL);
		bool L_24;
		L_24 = Type_op_Equality_mA438719A1FDF103C7BBBB08AEF564E7FAEEA0046((Type_t *)L_21, (Type_t *)L_23, /*hidden argument*/NULL);
		((RuntimeTypeInfoCache_1_t9CF6C57B0806C60C2CAAAED2D7F569ED23ECA790_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->set_IsObjectType_8(L_24);
		// IsStringType = type == typeof(string);
		Type_t * L_25 = V_0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_26 = { reinterpret_cast<intptr_t> (String_t_0_0_0_var) };
		Type_t * L_27;
		L_27 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_26, /*hidden argument*/NULL);
		bool L_28;
		L_28 = Type_op_Equality_mA438719A1FDF103C7BBBB08AEF564E7FAEEA0046((Type_t *)L_25, (Type_t *)L_27, /*hidden argument*/NULL);
		((RuntimeTypeInfoCache_1_t9CF6C57B0806C60C2CAAAED2D7F569ED23ECA790_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->set_IsStringType_9(L_28);
		// IsContainerType = RuntimeTypeInfoCache.IsContainerType(type);
		Type_t * L_29 = V_0;
		bool L_30;
		L_30 = RuntimeTypeInfoCache_IsContainerType_m83F2173E5EB11D908CC3BA99C89B4B65B64EAA96((Type_t *)L_29, /*hidden argument*/NULL);
		((RuntimeTypeInfoCache_1_t9CF6C57B0806C60C2CAAAED2D7F569ED23ECA790_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->set_IsContainerType_10(L_30);
		// CanBeNull = !IsValueType;
		bool L_31 = ((RuntimeTypeInfoCache_1_t9CF6C57B0806C60C2CAAAED2D7F569ED23ECA790_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->get_IsValueType_0();
		((RuntimeTypeInfoCache_1_t9CF6C57B0806C60C2CAAAED2D7F569ED23ECA790_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->set_CanBeNull_11((bool)((((int32_t)L_31) == ((int32_t)0))? 1 : 0));
		// IsNullableOrEnum = IsEnum;
		bool L_32 = ((RuntimeTypeInfoCache_1_t9CF6C57B0806C60C2CAAAED2D7F569ED23ECA790_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->get_IsEnum_5();
		((RuntimeTypeInfoCache_1_t9CF6C57B0806C60C2CAAAED2D7F569ED23ECA790_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->set_IsNullableOrEnum_12(L_32);
		// IsPrimitiveOrString = IsPrimitive || IsStringType;
		bool L_33 = ((RuntimeTypeInfoCache_1_t9CF6C57B0806C60C2CAAAED2D7F569ED23ECA790_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->get_IsPrimitive_1();
		if (L_33)
		{
			goto IL_00d9;
		}
	}
	{
		bool L_34 = ((RuntimeTypeInfoCache_1_t9CF6C57B0806C60C2CAAAED2D7F569ED23ECA790_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->get_IsStringType_9();
		G_B6_0 = ((int32_t)(L_34));
		goto IL_00da;
	}

IL_00d9:
	{
		G_B6_0 = 1;
	}

IL_00da:
	{
		((RuntimeTypeInfoCache_1_t9CF6C57B0806C60C2CAAAED2D7F569ED23ECA790_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->set_IsPrimitiveOrString_13((bool)G_B6_0);
		// IsAbstractOrInterface = IsAbstract || IsInterface;
		bool L_35 = ((RuntimeTypeInfoCache_1_t9CF6C57B0806C60C2CAAAED2D7F569ED23ECA790_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->get_IsAbstract_3();
		if (L_35)
		{
			goto IL_00ed;
		}
	}
	{
		bool L_36 = ((RuntimeTypeInfoCache_1_t9CF6C57B0806C60C2CAAAED2D7F569ED23ECA790_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->get_IsInterface_2();
		G_B9_0 = ((int32_t)(L_36));
		goto IL_00ee;
	}

IL_00ed:
	{
		G_B9_0 = 1;
	}

IL_00ee:
	{
		((RuntimeTypeInfoCache_1_t9CF6C57B0806C60C2CAAAED2D7F569ED23ECA790_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->set_IsAbstractOrInterface_14((bool)G_B9_0);
		// CanBeNull |= IsNullable;
		bool L_37 = ((RuntimeTypeInfoCache_1_t9CF6C57B0806C60C2CAAAED2D7F569ED23ECA790_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->get_CanBeNull_11();
		bool L_38 = ((RuntimeTypeInfoCache_1_t9CF6C57B0806C60C2CAAAED2D7F569ED23ECA790_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->get_IsNullable_7();
		((RuntimeTypeInfoCache_1_t9CF6C57B0806C60C2CAAAED2D7F569ED23ECA790_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->set_CanBeNull_11((bool)((int32_t)((int32_t)L_37|(int32_t)L_38)));
		// IsNullableOrEnum |= IsNullable;
		bool L_39 = ((RuntimeTypeInfoCache_1_t9CF6C57B0806C60C2CAAAED2D7F569ED23ECA790_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->get_IsNullableOrEnum_12();
		bool L_40 = ((RuntimeTypeInfoCache_1_t9CF6C57B0806C60C2CAAAED2D7F569ED23ECA790_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->get_IsNullable_7();
		((RuntimeTypeInfoCache_1_t9CF6C57B0806C60C2CAAAED2D7F569ED23ECA790_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->set_IsNullableOrEnum_12((bool)((int32_t)((int32_t)L_39|(int32_t)L_40)));
		// IsLazyLoadReference = type.IsGenericType && type.GetGenericTypeDefinition() == typeof(UnityEngine.LazyLoadReference<>);
		Type_t * L_41 = V_0;
		NullCheck((Type_t *)L_41);
		bool L_42;
		L_42 = VirtFuncInvoker0< bool >::Invoke(71 /* System.Boolean System.Type::get_IsGenericType() */, (Type_t *)L_41);
		if (!L_42)
		{
			goto IL_0132;
		}
	}
	{
		Type_t * L_43 = V_0;
		NullCheck((Type_t *)L_43);
		Type_t * L_44;
		L_44 = VirtFuncInvoker0< Type_t * >::Invoke(96 /* System.Type System.Type::GetGenericTypeDefinition() */, (Type_t *)L_43);
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_45 = { reinterpret_cast<intptr_t> (LazyLoadReference_1_tA48C53B4B246BEF5D956E8AB23A2EC45C6C5C36E_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_46;
		L_46 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_45, /*hidden argument*/NULL);
		bool L_47;
		L_47 = Type_op_Equality_mA438719A1FDF103C7BBBB08AEF564E7FAEEA0046((Type_t *)L_44, (Type_t *)L_46, /*hidden argument*/NULL);
		G_B12_0 = ((int32_t)(L_47));
		goto IL_0133;
	}

IL_0132:
	{
		G_B12_0 = 0;
	}

IL_0133:
	{
		((RuntimeTypeInfoCache_1_t9CF6C57B0806C60C2CAAAED2D7F569ED23ECA790_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->set_IsLazyLoadReference_15((bool)G_B12_0);
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
// System.Void Unity.Properties.Internal.RuntimeTypeInfoCache`1<UnityEngine.Color>::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RuntimeTypeInfoCache_1__cctor_m6A4CBDDAF27A7BE00612A1B925C1463D862160CE_gshared (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CustomAttributeExtensions_GetCustomAttribute_TisFlagsAttribute_t511C558FACEF1CC64702A8FAB67CAF3CBA65DF36_m2724CDFC73603733A936D82E548753DEAD4C0363_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LazyLoadReference_1_tA48C53B4B246BEF5D956E8AB23A2EC45C6C5C36E_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Type_t * V_0 = NULL;
	int32_t G_B3_0 = 0;
	int32_t G_B6_0 = 0;
	int32_t G_B9_0 = 0;
	int32_t G_B12_0 = 0;
	{
		// var type = typeof(T);
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_0 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->klass)->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1;
		L_1 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_0, /*hidden argument*/NULL);
		V_0 = (Type_t *)L_1;
		// IsValueType = type.IsValueType;
		Type_t * L_2 = V_0;
		NullCheck((Type_t *)L_2);
		bool L_3;
		L_3 = Type_get_IsValueType_m9CCCB4759C2D5A890096F8DBA66DAAEFE9D913FB((Type_t *)L_2, /*hidden argument*/NULL);
		((RuntimeTypeInfoCache_1_tB4CD3C0AC4911B1D3F848D9F9BECA9CF8946BB09_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->set_IsValueType_0(L_3);
		// IsPrimitive = type.IsPrimitive;
		Type_t * L_4 = V_0;
		NullCheck((Type_t *)L_4);
		bool L_5;
		L_5 = Type_get_IsPrimitive_m43E50D507C45CE3BD51C0DC07C8AB061AFD6B3C3((Type_t *)L_4, /*hidden argument*/NULL);
		((RuntimeTypeInfoCache_1_tB4CD3C0AC4911B1D3F848D9F9BECA9CF8946BB09_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->set_IsPrimitive_1(L_5);
		// IsInterface = type.IsInterface;
		Type_t * L_6 = V_0;
		NullCheck((Type_t *)L_6);
		bool L_7;
		L_7 = Type_get_IsInterface_mB10C34DEE8B22E1597C813211BBED17DD724FC07((Type_t *)L_6, /*hidden argument*/NULL);
		((RuntimeTypeInfoCache_1_tB4CD3C0AC4911B1D3F848D9F9BECA9CF8946BB09_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->set_IsInterface_2(L_7);
		// IsAbstract = type.IsAbstract;
		Type_t * L_8 = V_0;
		NullCheck((Type_t *)L_8);
		bool L_9;
		L_9 = Type_get_IsAbstract_mB16DB56FCABF55740019D32C5286F38E30CAA19F((Type_t *)L_8, /*hidden argument*/NULL);
		((RuntimeTypeInfoCache_1_tB4CD3C0AC4911B1D3F848D9F9BECA9CF8946BB09_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->set_IsAbstract_3(L_9);
		// IsArray = type.IsArray;
		Type_t * L_10 = V_0;
		NullCheck((Type_t *)L_10);
		bool L_11;
		L_11 = Type_get_IsArray_m15FE83DD8FAF090F9BDA924753C7750AAEA7CFD1((Type_t *)L_10, /*hidden argument*/NULL);
		((RuntimeTypeInfoCache_1_tB4CD3C0AC4911B1D3F848D9F9BECA9CF8946BB09_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->set_IsArray_4(L_11);
		// IsEnum = type.IsEnum;
		Type_t * L_12 = V_0;
		NullCheck((Type_t *)L_12);
		bool L_13;
		L_13 = VirtFuncInvoker0< bool >::Invoke(67 /* System.Boolean System.Type::get_IsEnum() */, (Type_t *)L_12);
		((RuntimeTypeInfoCache_1_tB4CD3C0AC4911B1D3F848D9F9BECA9CF8946BB09_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->set_IsEnum_5(L_13);
		// IsEnumFlags = IsEnum && null != type.GetCustomAttribute<FlagsAttribute>();
		bool L_14 = ((RuntimeTypeInfoCache_1_tB4CD3C0AC4911B1D3F848D9F9BECA9CF8946BB09_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->get_IsEnum_5();
		if (!L_14)
		{
			goto IL_005f;
		}
	}
	{
		Type_t * L_15 = V_0;
		FlagsAttribute_t511C558FACEF1CC64702A8FAB67CAF3CBA65DF36 * L_16;
		L_16 = CustomAttributeExtensions_GetCustomAttribute_TisFlagsAttribute_t511C558FACEF1CC64702A8FAB67CAF3CBA65DF36_m2724CDFC73603733A936D82E548753DEAD4C0363((MemberInfo_t *)L_15, /*hidden argument*/CustomAttributeExtensions_GetCustomAttribute_TisFlagsAttribute_t511C558FACEF1CC64702A8FAB67CAF3CBA65DF36_m2724CDFC73603733A936D82E548753DEAD4C0363_RuntimeMethod_var);
		G_B3_0 = ((!(((RuntimeObject*)(FlagsAttribute_t511C558FACEF1CC64702A8FAB67CAF3CBA65DF36 *)L_16) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		goto IL_0060;
	}

IL_005f:
	{
		G_B3_0 = 0;
	}

IL_0060:
	{
		((RuntimeTypeInfoCache_1_tB4CD3C0AC4911B1D3F848D9F9BECA9CF8946BB09_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->set_IsEnumFlags_6((bool)G_B3_0);
		// IsNullable = Nullable.GetUnderlyingType(typeof(T)) != null;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_17 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->klass)->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_18;
		L_18 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_17, /*hidden argument*/NULL);
		Type_t * L_19;
		L_19 = Nullable_GetUnderlyingType_mC5699E7E11E1AFE25365CAB564A48F0193318629((Type_t *)L_18, /*hidden argument*/NULL);
		bool L_20;
		L_20 = Type_op_Inequality_m6DDC5E923203A79BF505F9275B694AD3FAA36DB0((Type_t *)L_19, (Type_t *)NULL, /*hidden argument*/NULL);
		((RuntimeTypeInfoCache_1_tB4CD3C0AC4911B1D3F848D9F9BECA9CF8946BB09_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->set_IsNullable_7(L_20);
		// IsObjectType = type == typeof(object);
		Type_t * L_21 = V_0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_22 = { reinterpret_cast<intptr_t> (RuntimeObject_0_0_0_var) };
		Type_t * L_23;
		L_23 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_22, /*hidden argument*/NULL);
		bool L_24;
		L_24 = Type_op_Equality_mA438719A1FDF103C7BBBB08AEF564E7FAEEA0046((Type_t *)L_21, (Type_t *)L_23, /*hidden argument*/NULL);
		((RuntimeTypeInfoCache_1_tB4CD3C0AC4911B1D3F848D9F9BECA9CF8946BB09_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->set_IsObjectType_8(L_24);
		// IsStringType = type == typeof(string);
		Type_t * L_25 = V_0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_26 = { reinterpret_cast<intptr_t> (String_t_0_0_0_var) };
		Type_t * L_27;
		L_27 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_26, /*hidden argument*/NULL);
		bool L_28;
		L_28 = Type_op_Equality_mA438719A1FDF103C7BBBB08AEF564E7FAEEA0046((Type_t *)L_25, (Type_t *)L_27, /*hidden argument*/NULL);
		((RuntimeTypeInfoCache_1_tB4CD3C0AC4911B1D3F848D9F9BECA9CF8946BB09_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->set_IsStringType_9(L_28);
		// IsContainerType = RuntimeTypeInfoCache.IsContainerType(type);
		Type_t * L_29 = V_0;
		bool L_30;
		L_30 = RuntimeTypeInfoCache_IsContainerType_m83F2173E5EB11D908CC3BA99C89B4B65B64EAA96((Type_t *)L_29, /*hidden argument*/NULL);
		((RuntimeTypeInfoCache_1_tB4CD3C0AC4911B1D3F848D9F9BECA9CF8946BB09_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->set_IsContainerType_10(L_30);
		// CanBeNull = !IsValueType;
		bool L_31 = ((RuntimeTypeInfoCache_1_tB4CD3C0AC4911B1D3F848D9F9BECA9CF8946BB09_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->get_IsValueType_0();
		((RuntimeTypeInfoCache_1_tB4CD3C0AC4911B1D3F848D9F9BECA9CF8946BB09_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->set_CanBeNull_11((bool)((((int32_t)L_31) == ((int32_t)0))? 1 : 0));
		// IsNullableOrEnum = IsEnum;
		bool L_32 = ((RuntimeTypeInfoCache_1_tB4CD3C0AC4911B1D3F848D9F9BECA9CF8946BB09_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->get_IsEnum_5();
		((RuntimeTypeInfoCache_1_tB4CD3C0AC4911B1D3F848D9F9BECA9CF8946BB09_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->set_IsNullableOrEnum_12(L_32);
		// IsPrimitiveOrString = IsPrimitive || IsStringType;
		bool L_33 = ((RuntimeTypeInfoCache_1_tB4CD3C0AC4911B1D3F848D9F9BECA9CF8946BB09_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->get_IsPrimitive_1();
		if (L_33)
		{
			goto IL_00d9;
		}
	}
	{
		bool L_34 = ((RuntimeTypeInfoCache_1_tB4CD3C0AC4911B1D3F848D9F9BECA9CF8946BB09_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->get_IsStringType_9();
		G_B6_0 = ((int32_t)(L_34));
		goto IL_00da;
	}

IL_00d9:
	{
		G_B6_0 = 1;
	}

IL_00da:
	{
		((RuntimeTypeInfoCache_1_tB4CD3C0AC4911B1D3F848D9F9BECA9CF8946BB09_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->set_IsPrimitiveOrString_13((bool)G_B6_0);
		// IsAbstractOrInterface = IsAbstract || IsInterface;
		bool L_35 = ((RuntimeTypeInfoCache_1_tB4CD3C0AC4911B1D3F848D9F9BECA9CF8946BB09_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->get_IsAbstract_3();
		if (L_35)
		{
			goto IL_00ed;
		}
	}
	{
		bool L_36 = ((RuntimeTypeInfoCache_1_tB4CD3C0AC4911B1D3F848D9F9BECA9CF8946BB09_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->get_IsInterface_2();
		G_B9_0 = ((int32_t)(L_36));
		goto IL_00ee;
	}

IL_00ed:
	{
		G_B9_0 = 1;
	}

IL_00ee:
	{
		((RuntimeTypeInfoCache_1_tB4CD3C0AC4911B1D3F848D9F9BECA9CF8946BB09_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->set_IsAbstractOrInterface_14((bool)G_B9_0);
		// CanBeNull |= IsNullable;
		bool L_37 = ((RuntimeTypeInfoCache_1_tB4CD3C0AC4911B1D3F848D9F9BECA9CF8946BB09_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->get_CanBeNull_11();
		bool L_38 = ((RuntimeTypeInfoCache_1_tB4CD3C0AC4911B1D3F848D9F9BECA9CF8946BB09_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->get_IsNullable_7();
		((RuntimeTypeInfoCache_1_tB4CD3C0AC4911B1D3F848D9F9BECA9CF8946BB09_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->set_CanBeNull_11((bool)((int32_t)((int32_t)L_37|(int32_t)L_38)));
		// IsNullableOrEnum |= IsNullable;
		bool L_39 = ((RuntimeTypeInfoCache_1_tB4CD3C0AC4911B1D3F848D9F9BECA9CF8946BB09_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->get_IsNullableOrEnum_12();
		bool L_40 = ((RuntimeTypeInfoCache_1_tB4CD3C0AC4911B1D3F848D9F9BECA9CF8946BB09_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->get_IsNullable_7();
		((RuntimeTypeInfoCache_1_tB4CD3C0AC4911B1D3F848D9F9BECA9CF8946BB09_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->set_IsNullableOrEnum_12((bool)((int32_t)((int32_t)L_39|(int32_t)L_40)));
		// IsLazyLoadReference = type.IsGenericType && type.GetGenericTypeDefinition() == typeof(UnityEngine.LazyLoadReference<>);
		Type_t * L_41 = V_0;
		NullCheck((Type_t *)L_41);
		bool L_42;
		L_42 = VirtFuncInvoker0< bool >::Invoke(71 /* System.Boolean System.Type::get_IsGenericType() */, (Type_t *)L_41);
		if (!L_42)
		{
			goto IL_0132;
		}
	}
	{
		Type_t * L_43 = V_0;
		NullCheck((Type_t *)L_43);
		Type_t * L_44;
		L_44 = VirtFuncInvoker0< Type_t * >::Invoke(96 /* System.Type System.Type::GetGenericTypeDefinition() */, (Type_t *)L_43);
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_45 = { reinterpret_cast<intptr_t> (LazyLoadReference_1_tA48C53B4B246BEF5D956E8AB23A2EC45C6C5C36E_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_46;
		L_46 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_45, /*hidden argument*/NULL);
		bool L_47;
		L_47 = Type_op_Equality_mA438719A1FDF103C7BBBB08AEF564E7FAEEA0046((Type_t *)L_44, (Type_t *)L_46, /*hidden argument*/NULL);
		G_B12_0 = ((int32_t)(L_47));
		goto IL_0133;
	}

IL_0132:
	{
		G_B12_0 = 0;
	}

IL_0133:
	{
		((RuntimeTypeInfoCache_1_tB4CD3C0AC4911B1D3F848D9F9BECA9CF8946BB09_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->set_IsLazyLoadReference_15((bool)G_B12_0);
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
// System.Void Unity.Properties.Internal.RuntimeTypeInfoCache`1<System.Int16>::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RuntimeTypeInfoCache_1__cctor_m730EAD55D78735B898053D03440BF5DCD607EE71_gshared (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CustomAttributeExtensions_GetCustomAttribute_TisFlagsAttribute_t511C558FACEF1CC64702A8FAB67CAF3CBA65DF36_m2724CDFC73603733A936D82E548753DEAD4C0363_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LazyLoadReference_1_tA48C53B4B246BEF5D956E8AB23A2EC45C6C5C36E_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Type_t * V_0 = NULL;
	int32_t G_B3_0 = 0;
	int32_t G_B6_0 = 0;
	int32_t G_B9_0 = 0;
	int32_t G_B12_0 = 0;
	{
		// var type = typeof(T);
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_0 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->klass)->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1;
		L_1 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_0, /*hidden argument*/NULL);
		V_0 = (Type_t *)L_1;
		// IsValueType = type.IsValueType;
		Type_t * L_2 = V_0;
		NullCheck((Type_t *)L_2);
		bool L_3;
		L_3 = Type_get_IsValueType_m9CCCB4759C2D5A890096F8DBA66DAAEFE9D913FB((Type_t *)L_2, /*hidden argument*/NULL);
		((RuntimeTypeInfoCache_1_tF893180F39DD7ACEB5EE31EF4E03E47BDD482E15_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->set_IsValueType_0(L_3);
		// IsPrimitive = type.IsPrimitive;
		Type_t * L_4 = V_0;
		NullCheck((Type_t *)L_4);
		bool L_5;
		L_5 = Type_get_IsPrimitive_m43E50D507C45CE3BD51C0DC07C8AB061AFD6B3C3((Type_t *)L_4, /*hidden argument*/NULL);
		((RuntimeTypeInfoCache_1_tF893180F39DD7ACEB5EE31EF4E03E47BDD482E15_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->set_IsPrimitive_1(L_5);
		// IsInterface = type.IsInterface;
		Type_t * L_6 = V_0;
		NullCheck((Type_t *)L_6);
		bool L_7;
		L_7 = Type_get_IsInterface_mB10C34DEE8B22E1597C813211BBED17DD724FC07((Type_t *)L_6, /*hidden argument*/NULL);
		((RuntimeTypeInfoCache_1_tF893180F39DD7ACEB5EE31EF4E03E47BDD482E15_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->set_IsInterface_2(L_7);
		// IsAbstract = type.IsAbstract;
		Type_t * L_8 = V_0;
		NullCheck((Type_t *)L_8);
		bool L_9;
		L_9 = Type_get_IsAbstract_mB16DB56FCABF55740019D32C5286F38E30CAA19F((Type_t *)L_8, /*hidden argument*/NULL);
		((RuntimeTypeInfoCache_1_tF893180F39DD7ACEB5EE31EF4E03E47BDD482E15_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->set_IsAbstract_3(L_9);
		// IsArray = type.IsArray;
		Type_t * L_10 = V_0;
		NullCheck((Type_t *)L_10);
		bool L_11;
		L_11 = Type_get_IsArray_m15FE83DD8FAF090F9BDA924753C7750AAEA7CFD1((Type_t *)L_10, /*hidden argument*/NULL);
		((RuntimeTypeInfoCache_1_tF893180F39DD7ACEB5EE31EF4E03E47BDD482E15_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->set_IsArray_4(L_11);
		// IsEnum = type.IsEnum;
		Type_t * L_12 = V_0;
		NullCheck((Type_t *)L_12);
		bool L_13;
		L_13 = VirtFuncInvoker0< bool >::Invoke(67 /* System.Boolean System.Type::get_IsEnum() */, (Type_t *)L_12);
		((RuntimeTypeInfoCache_1_tF893180F39DD7ACEB5EE31EF4E03E47BDD482E15_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->set_IsEnum_5(L_13);
		// IsEnumFlags = IsEnum && null != type.GetCustomAttribute<FlagsAttribute>();
		bool L_14 = ((RuntimeTypeInfoCache_1_tF893180F39DD7ACEB5EE31EF4E03E47BDD482E15_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->get_IsEnum_5();
		if (!L_14)
		{
			goto IL_005f;
		}
	}
	{
		Type_t * L_15 = V_0;
		FlagsAttribute_t511C558FACEF1CC64702A8FAB67CAF3CBA65DF36 * L_16;
		L_16 = CustomAttributeExtensions_GetCustomAttribute_TisFlagsAttribute_t511C558FACEF1CC64702A8FAB67CAF3CBA65DF36_m2724CDFC73603733A936D82E548753DEAD4C0363((MemberInfo_t *)L_15, /*hidden argument*/CustomAttributeExtensions_GetCustomAttribute_TisFlagsAttribute_t511C558FACEF1CC64702A8FAB67CAF3CBA65DF36_m2724CDFC73603733A936D82E548753DEAD4C0363_RuntimeMethod_var);
		G_B3_0 = ((!(((RuntimeObject*)(FlagsAttribute_t511C558FACEF1CC64702A8FAB67CAF3CBA65DF36 *)L_16) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		goto IL_0060;
	}

IL_005f:
	{
		G_B3_0 = 0;
	}

IL_0060:
	{
		((RuntimeTypeInfoCache_1_tF893180F39DD7ACEB5EE31EF4E03E47BDD482E15_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->set_IsEnumFlags_6((bool)G_B3_0);
		// IsNullable = Nullable.GetUnderlyingType(typeof(T)) != null;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_17 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->klass)->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_18;
		L_18 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_17, /*hidden argument*/NULL);
		Type_t * L_19;
		L_19 = Nullable_GetUnderlyingType_mC5699E7E11E1AFE25365CAB564A48F0193318629((Type_t *)L_18, /*hidden argument*/NULL);
		bool L_20;
		L_20 = Type_op_Inequality_m6DDC5E923203A79BF505F9275B694AD3FAA36DB0((Type_t *)L_19, (Type_t *)NULL, /*hidden argument*/NULL);
		((RuntimeTypeInfoCache_1_tF893180F39DD7ACEB5EE31EF4E03E47BDD482E15_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->set_IsNullable_7(L_20);
		// IsObjectType = type == typeof(object);
		Type_t * L_21 = V_0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_22 = { reinterpret_cast<intptr_t> (RuntimeObject_0_0_0_var) };
		Type_t * L_23;
		L_23 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_22, /*hidden argument*/NULL);
		bool L_24;
		L_24 = Type_op_Equality_mA438719A1FDF103C7BBBB08AEF564E7FAEEA0046((Type_t *)L_21, (Type_t *)L_23, /*hidden argument*/NULL);
		((RuntimeTypeInfoCache_1_tF893180F39DD7ACEB5EE31EF4E03E47BDD482E15_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->set_IsObjectType_8(L_24);
		// IsStringType = type == typeof(string);
		Type_t * L_25 = V_0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_26 = { reinterpret_cast<intptr_t> (String_t_0_0_0_var) };
		Type_t * L_27;
		L_27 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_26, /*hidden argument*/NULL);
		bool L_28;
		L_28 = Type_op_Equality_mA438719A1FDF103C7BBBB08AEF564E7FAEEA0046((Type_t *)L_25, (Type_t *)L_27, /*hidden argument*/NULL);
		((RuntimeTypeInfoCache_1_tF893180F39DD7ACEB5EE31EF4E03E47BDD482E15_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->set_IsStringType_9(L_28);
		// IsContainerType = RuntimeTypeInfoCache.IsContainerType(type);
		Type_t * L_29 = V_0;
		bool L_30;
		L_30 = RuntimeTypeInfoCache_IsContainerType_m83F2173E5EB11D908CC3BA99C89B4B65B64EAA96((Type_t *)L_29, /*hidden argument*/NULL);
		((RuntimeTypeInfoCache_1_tF893180F39DD7ACEB5EE31EF4E03E47BDD482E15_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->set_IsContainerType_10(L_30);
		// CanBeNull = !IsValueType;
		bool L_31 = ((RuntimeTypeInfoCache_1_tF893180F39DD7ACEB5EE31EF4E03E47BDD482E15_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->get_IsValueType_0();
		((RuntimeTypeInfoCache_1_tF893180F39DD7ACEB5EE31EF4E03E47BDD482E15_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->set_CanBeNull_11((bool)((((int32_t)L_31) == ((int32_t)0))? 1 : 0));
		// IsNullableOrEnum = IsEnum;
		bool L_32 = ((RuntimeTypeInfoCache_1_tF893180F39DD7ACEB5EE31EF4E03E47BDD482E15_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->get_IsEnum_5();
		((RuntimeTypeInfoCache_1_tF893180F39DD7ACEB5EE31EF4E03E47BDD482E15_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->set_IsNullableOrEnum_12(L_32);
		// IsPrimitiveOrString = IsPrimitive || IsStringType;
		bool L_33 = ((RuntimeTypeInfoCache_1_tF893180F39DD7ACEB5EE31EF4E03E47BDD482E15_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->get_IsPrimitive_1();
		if (L_33)
		{
			goto IL_00d9;
		}
	}
	{
		bool L_34 = ((RuntimeTypeInfoCache_1_tF893180F39DD7ACEB5EE31EF4E03E47BDD482E15_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->get_IsStringType_9();
		G_B6_0 = ((int32_t)(L_34));
		goto IL_00da;
	}

IL_00d9:
	{
		G_B6_0 = 1;
	}

IL_00da:
	{
		((RuntimeTypeInfoCache_1_tF893180F39DD7ACEB5EE31EF4E03E47BDD482E15_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->set_IsPrimitiveOrString_13((bool)G_B6_0);
		// IsAbstractOrInterface = IsAbstract || IsInterface;
		bool L_35 = ((RuntimeTypeInfoCache_1_tF893180F39DD7ACEB5EE31EF4E03E47BDD482E15_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->get_IsAbstract_3();
		if (L_35)
		{
			goto IL_00ed;
		}
	}
	{
		bool L_36 = ((RuntimeTypeInfoCache_1_tF893180F39DD7ACEB5EE31EF4E03E47BDD482E15_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->get_IsInterface_2();
		G_B9_0 = ((int32_t)(L_36));
		goto IL_00ee;
	}

IL_00ed:
	{
		G_B9_0 = 1;
	}

IL_00ee:
	{
		((RuntimeTypeInfoCache_1_tF893180F39DD7ACEB5EE31EF4E03E47BDD482E15_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->set_IsAbstractOrInterface_14((bool)G_B9_0);
		// CanBeNull |= IsNullable;
		bool L_37 = ((RuntimeTypeInfoCache_1_tF893180F39DD7ACEB5EE31EF4E03E47BDD482E15_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->get_CanBeNull_11();
		bool L_38 = ((RuntimeTypeInfoCache_1_tF893180F39DD7ACEB5EE31EF4E03E47BDD482E15_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->get_IsNullable_7();
		((RuntimeTypeInfoCache_1_tF893180F39DD7ACEB5EE31EF4E03E47BDD482E15_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->set_CanBeNull_11((bool)((int32_t)((int32_t)L_37|(int32_t)L_38)));
		// IsNullableOrEnum |= IsNullable;
		bool L_39 = ((RuntimeTypeInfoCache_1_tF893180F39DD7ACEB5EE31EF4E03E47BDD482E15_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->get_IsNullableOrEnum_12();
		bool L_40 = ((RuntimeTypeInfoCache_1_tF893180F39DD7ACEB5EE31EF4E03E47BDD482E15_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->get_IsNullable_7();
		((RuntimeTypeInfoCache_1_tF893180F39DD7ACEB5EE31EF4E03E47BDD482E15_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->set_IsNullableOrEnum_12((bool)((int32_t)((int32_t)L_39|(int32_t)L_40)));
		// IsLazyLoadReference = type.IsGenericType && type.GetGenericTypeDefinition() == typeof(UnityEngine.LazyLoadReference<>);
		Type_t * L_41 = V_0;
		NullCheck((Type_t *)L_41);
		bool L_42;
		L_42 = VirtFuncInvoker0< bool >::Invoke(71 /* System.Boolean System.Type::get_IsGenericType() */, (Type_t *)L_41);
		if (!L_42)
		{
			goto IL_0132;
		}
	}
	{
		Type_t * L_43 = V_0;
		NullCheck((Type_t *)L_43);
		Type_t * L_44;
		L_44 = VirtFuncInvoker0< Type_t * >::Invoke(96 /* System.Type System.Type::GetGenericTypeDefinition() */, (Type_t *)L_43);
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_45 = { reinterpret_cast<intptr_t> (LazyLoadReference_1_tA48C53B4B246BEF5D956E8AB23A2EC45C6C5C36E_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_46;
		L_46 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_45, /*hidden argument*/NULL);
		bool L_47;
		L_47 = Type_op_Equality_mA438719A1FDF103C7BBBB08AEF564E7FAEEA0046((Type_t *)L_44, (Type_t *)L_46, /*hidden argument*/NULL);
		G_B12_0 = ((int32_t)(L_47));
		goto IL_0133;
	}

IL_0132:
	{
		G_B12_0 = 0;
	}

IL_0133:
	{
		((RuntimeTypeInfoCache_1_tF893180F39DD7ACEB5EE31EF4E03E47BDD482E15_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->set_IsLazyLoadReference_15((bool)G_B12_0);
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
// System.Void Unity.Properties.Internal.RuntimeTypeInfoCache`1<System.Int32>::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RuntimeTypeInfoCache_1__cctor_mE2DE810691ABED52B280CFEB5AB860EE0C9AAED6_gshared (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CustomAttributeExtensions_GetCustomAttribute_TisFlagsAttribute_t511C558FACEF1CC64702A8FAB67CAF3CBA65DF36_m2724CDFC73603733A936D82E548753DEAD4C0363_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LazyLoadReference_1_tA48C53B4B246BEF5D956E8AB23A2EC45C6C5C36E_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Type_t * V_0 = NULL;
	int32_t G_B3_0 = 0;
	int32_t G_B6_0 = 0;
	int32_t G_B9_0 = 0;
	int32_t G_B12_0 = 0;
	{
		// var type = typeof(T);
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_0 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->klass)->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1;
		L_1 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_0, /*hidden argument*/NULL);
		V_0 = (Type_t *)L_1;
		// IsValueType = type.IsValueType;
		Type_t * L_2 = V_0;
		NullCheck((Type_t *)L_2);
		bool L_3;
		L_3 = Type_get_IsValueType_m9CCCB4759C2D5A890096F8DBA66DAAEFE9D913FB((Type_t *)L_2, /*hidden argument*/NULL);
		((RuntimeTypeInfoCache_1_tA5A6314A6C55EC654AB02F2D44D3AD77969D969E_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->set_IsValueType_0(L_3);
		// IsPrimitive = type.IsPrimitive;
		Type_t * L_4 = V_0;
		NullCheck((Type_t *)L_4);
		bool L_5;
		L_5 = Type_get_IsPrimitive_m43E50D507C45CE3BD51C0DC07C8AB061AFD6B3C3((Type_t *)L_4, /*hidden argument*/NULL);
		((RuntimeTypeInfoCache_1_tA5A6314A6C55EC654AB02F2D44D3AD77969D969E_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->set_IsPrimitive_1(L_5);
		// IsInterface = type.IsInterface;
		Type_t * L_6 = V_0;
		NullCheck((Type_t *)L_6);
		bool L_7;
		L_7 = Type_get_IsInterface_mB10C34DEE8B22E1597C813211BBED17DD724FC07((Type_t *)L_6, /*hidden argument*/NULL);
		((RuntimeTypeInfoCache_1_tA5A6314A6C55EC654AB02F2D44D3AD77969D969E_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->set_IsInterface_2(L_7);
		// IsAbstract = type.IsAbstract;
		Type_t * L_8 = V_0;
		NullCheck((Type_t *)L_8);
		bool L_9;
		L_9 = Type_get_IsAbstract_mB16DB56FCABF55740019D32C5286F38E30CAA19F((Type_t *)L_8, /*hidden argument*/NULL);
		((RuntimeTypeInfoCache_1_tA5A6314A6C55EC654AB02F2D44D3AD77969D969E_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->set_IsAbstract_3(L_9);
		// IsArray = type.IsArray;
		Type_t * L_10 = V_0;
		NullCheck((Type_t *)L_10);
		bool L_11;
		L_11 = Type_get_IsArray_m15FE83DD8FAF090F9BDA924753C7750AAEA7CFD1((Type_t *)L_10, /*hidden argument*/NULL);
		((RuntimeTypeInfoCache_1_tA5A6314A6C55EC654AB02F2D44D3AD77969D969E_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->set_IsArray_4(L_11);
		// IsEnum = type.IsEnum;
		Type_t * L_12 = V_0;
		NullCheck((Type_t *)L_12);
		bool L_13;
		L_13 = VirtFuncInvoker0< bool >::Invoke(67 /* System.Boolean System.Type::get_IsEnum() */, (Type_t *)L_12);
		((RuntimeTypeInfoCache_1_tA5A6314A6C55EC654AB02F2D44D3AD77969D969E_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->set_IsEnum_5(L_13);
		// IsEnumFlags = IsEnum && null != type.GetCustomAttribute<FlagsAttribute>();
		bool L_14 = ((RuntimeTypeInfoCache_1_tA5A6314A6C55EC654AB02F2D44D3AD77969D969E_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->get_IsEnum_5();
		if (!L_14)
		{
			goto IL_005f;
		}
	}
	{
		Type_t * L_15 = V_0;
		FlagsAttribute_t511C558FACEF1CC64702A8FAB67CAF3CBA65DF36 * L_16;
		L_16 = CustomAttributeExtensions_GetCustomAttribute_TisFlagsAttribute_t511C558FACEF1CC64702A8FAB67CAF3CBA65DF36_m2724CDFC73603733A936D82E548753DEAD4C0363((MemberInfo_t *)L_15, /*hidden argument*/CustomAttributeExtensions_GetCustomAttribute_TisFlagsAttribute_t511C558FACEF1CC64702A8FAB67CAF3CBA65DF36_m2724CDFC73603733A936D82E548753DEAD4C0363_RuntimeMethod_var);
		G_B3_0 = ((!(((RuntimeObject*)(FlagsAttribute_t511C558FACEF1CC64702A8FAB67CAF3CBA65DF36 *)L_16) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		goto IL_0060;
	}

IL_005f:
	{
		G_B3_0 = 0;
	}

IL_0060:
	{
		((RuntimeTypeInfoCache_1_tA5A6314A6C55EC654AB02F2D44D3AD77969D969E_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->set_IsEnumFlags_6((bool)G_B3_0);
		// IsNullable = Nullable.GetUnderlyingType(typeof(T)) != null;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_17 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->klass)->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_18;
		L_18 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_17, /*hidden argument*/NULL);
		Type_t * L_19;
		L_19 = Nullable_GetUnderlyingType_mC5699E7E11E1AFE25365CAB564A48F0193318629((Type_t *)L_18, /*hidden argument*/NULL);
		bool L_20;
		L_20 = Type_op_Inequality_m6DDC5E923203A79BF505F9275B694AD3FAA36DB0((Type_t *)L_19, (Type_t *)NULL, /*hidden argument*/NULL);
		((RuntimeTypeInfoCache_1_tA5A6314A6C55EC654AB02F2D44D3AD77969D969E_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->set_IsNullable_7(L_20);
		// IsObjectType = type == typeof(object);
		Type_t * L_21 = V_0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_22 = { reinterpret_cast<intptr_t> (RuntimeObject_0_0_0_var) };
		Type_t * L_23;
		L_23 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_22, /*hidden argument*/NULL);
		bool L_24;
		L_24 = Type_op_Equality_mA438719A1FDF103C7BBBB08AEF564E7FAEEA0046((Type_t *)L_21, (Type_t *)L_23, /*hidden argument*/NULL);
		((RuntimeTypeInfoCache_1_tA5A6314A6C55EC654AB02F2D44D3AD77969D969E_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->set_IsObjectType_8(L_24);
		// IsStringType = type == typeof(string);
		Type_t * L_25 = V_0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_26 = { reinterpret_cast<intptr_t> (String_t_0_0_0_var) };
		Type_t * L_27;
		L_27 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_26, /*hidden argument*/NULL);
		bool L_28;
		L_28 = Type_op_Equality_mA438719A1FDF103C7BBBB08AEF564E7FAEEA0046((Type_t *)L_25, (Type_t *)L_27, /*hidden argument*/NULL);
		((RuntimeTypeInfoCache_1_tA5A6314A6C55EC654AB02F2D44D3AD77969D969E_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->set_IsStringType_9(L_28);
		// IsContainerType = RuntimeTypeInfoCache.IsContainerType(type);
		Type_t * L_29 = V_0;
		bool L_30;
		L_30 = RuntimeTypeInfoCache_IsContainerType_m83F2173E5EB11D908CC3BA99C89B4B65B64EAA96((Type_t *)L_29, /*hidden argument*/NULL);
		((RuntimeTypeInfoCache_1_tA5A6314A6C55EC654AB02F2D44D3AD77969D969E_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->set_IsContainerType_10(L_30);
		// CanBeNull = !IsValueType;
		bool L_31 = ((RuntimeTypeInfoCache_1_tA5A6314A6C55EC654AB02F2D44D3AD77969D969E_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->get_IsValueType_0();
		((RuntimeTypeInfoCache_1_tA5A6314A6C55EC654AB02F2D44D3AD77969D969E_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->set_CanBeNull_11((bool)((((int32_t)L_31) == ((int32_t)0))? 1 : 0));
		// IsNullableOrEnum = IsEnum;
		bool L_32 = ((RuntimeTypeInfoCache_1_tA5A6314A6C55EC654AB02F2D44D3AD77969D969E_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->get_IsEnum_5();
		((RuntimeTypeInfoCache_1_tA5A6314A6C55EC654AB02F2D44D3AD77969D969E_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->set_IsNullableOrEnum_12(L_32);
		// IsPrimitiveOrString = IsPrimitive || IsStringType;
		bool L_33 = ((RuntimeTypeInfoCache_1_tA5A6314A6C55EC654AB02F2D44D3AD77969D969E_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->get_IsPrimitive_1();
		if (L_33)
		{
			goto IL_00d9;
		}
	}
	{
		bool L_34 = ((RuntimeTypeInfoCache_1_tA5A6314A6C55EC654AB02F2D44D3AD77969D969E_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->get_IsStringType_9();
		G_B6_0 = ((int32_t)(L_34));
		goto IL_00da;
	}

IL_00d9:
	{
		G_B6_0 = 1;
	}

IL_00da:
	{
		((RuntimeTypeInfoCache_1_tA5A6314A6C55EC654AB02F2D44D3AD77969D969E_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->set_IsPrimitiveOrString_13((bool)G_B6_0);
		// IsAbstractOrInterface = IsAbstract || IsInterface;
		bool L_35 = ((RuntimeTypeInfoCache_1_tA5A6314A6C55EC654AB02F2D44D3AD77969D969E_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->get_IsAbstract_3();
		if (L_35)
		{
			goto IL_00ed;
		}
	}
	{
		bool L_36 = ((RuntimeTypeInfoCache_1_tA5A6314A6C55EC654AB02F2D44D3AD77969D969E_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->get_IsInterface_2();
		G_B9_0 = ((int32_t)(L_36));
		goto IL_00ee;
	}

IL_00ed:
	{
		G_B9_0 = 1;
	}

IL_00ee:
	{
		((RuntimeTypeInfoCache_1_tA5A6314A6C55EC654AB02F2D44D3AD77969D969E_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->set_IsAbstractOrInterface_14((bool)G_B9_0);
		// CanBeNull |= IsNullable;
		bool L_37 = ((RuntimeTypeInfoCache_1_tA5A6314A6C55EC654AB02F2D44D3AD77969D969E_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->get_CanBeNull_11();
		bool L_38 = ((RuntimeTypeInfoCache_1_tA5A6314A6C55EC654AB02F2D44D3AD77969D969E_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->get_IsNullable_7();
		((RuntimeTypeInfoCache_1_tA5A6314A6C55EC654AB02F2D44D3AD77969D969E_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->set_CanBeNull_11((bool)((int32_t)((int32_t)L_37|(int32_t)L_38)));
		// IsNullableOrEnum |= IsNullable;
		bool L_39 = ((RuntimeTypeInfoCache_1_tA5A6314A6C55EC654AB02F2D44D3AD77969D969E_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->get_IsNullableOrEnum_12();
		bool L_40 = ((RuntimeTypeInfoCache_1_tA5A6314A6C55EC654AB02F2D44D3AD77969D969E_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->get_IsNullable_7();
		((RuntimeTypeInfoCache_1_tA5A6314A6C55EC654AB02F2D44D3AD77969D969E_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->set_IsNullableOrEnum_12((bool)((int32_t)((int32_t)L_39|(int32_t)L_40)));
		// IsLazyLoadReference = type.IsGenericType && type.GetGenericTypeDefinition() == typeof(UnityEngine.LazyLoadReference<>);
		Type_t * L_41 = V_0;
		NullCheck((Type_t *)L_41);
		bool L_42;
		L_42 = VirtFuncInvoker0< bool >::Invoke(71 /* System.Boolean System.Type::get_IsGenericType() */, (Type_t *)L_41);
		if (!L_42)
		{
			goto IL_0132;
		}
	}
	{
		Type_t * L_43 = V_0;
		NullCheck((Type_t *)L_43);
		Type_t * L_44;
		L_44 = VirtFuncInvoker0< Type_t * >::Invoke(96 /* System.Type System.Type::GetGenericTypeDefinition() */, (Type_t *)L_43);
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_45 = { reinterpret_cast<intptr_t> (LazyLoadReference_1_tA48C53B4B246BEF5D956E8AB23A2EC45C6C5C36E_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_46;
		L_46 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_45, /*hidden argument*/NULL);
		bool L_47;
		L_47 = Type_op_Equality_mA438719A1FDF103C7BBBB08AEF564E7FAEEA0046((Type_t *)L_44, (Type_t *)L_46, /*hidden argument*/NULL);
		G_B12_0 = ((int32_t)(L_47));
		goto IL_0133;
	}

IL_0132:
	{
		G_B12_0 = 0;
	}

IL_0133:
	{
		((RuntimeTypeInfoCache_1_tA5A6314A6C55EC654AB02F2D44D3AD77969D969E_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->set_IsLazyLoadReference_15((bool)G_B12_0);
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
// System.Void Unity.Properties.Internal.RuntimeTypeInfoCache`1<System.Int32Enum>::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RuntimeTypeInfoCache_1__cctor_m0C662C83F5015116D5E2EED59EB7B10B9A6E5FDF_gshared (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CustomAttributeExtensions_GetCustomAttribute_TisFlagsAttribute_t511C558FACEF1CC64702A8FAB67CAF3CBA65DF36_m2724CDFC73603733A936D82E548753DEAD4C0363_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LazyLoadReference_1_tA48C53B4B246BEF5D956E8AB23A2EC45C6C5C36E_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Type_t * V_0 = NULL;
	int32_t G_B3_0 = 0;
	int32_t G_B6_0 = 0;
	int32_t G_B9_0 = 0;
	int32_t G_B12_0 = 0;
	{
		// var type = typeof(T);
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_0 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->klass)->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1;
		L_1 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_0, /*hidden argument*/NULL);
		V_0 = (Type_t *)L_1;
		// IsValueType = type.IsValueType;
		Type_t * L_2 = V_0;
		NullCheck((Type_t *)L_2);
		bool L_3;
		L_3 = Type_get_IsValueType_m9CCCB4759C2D5A890096F8DBA66DAAEFE9D913FB((Type_t *)L_2, /*hidden argument*/NULL);
		((RuntimeTypeInfoCache_1_t0D10B34129E83727F9FA5BC962BBA8D8201E7A1C_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->set_IsValueType_0(L_3);
		// IsPrimitive = type.IsPrimitive;
		Type_t * L_4 = V_0;
		NullCheck((Type_t *)L_4);
		bool L_5;
		L_5 = Type_get_IsPrimitive_m43E50D507C45CE3BD51C0DC07C8AB061AFD6B3C3((Type_t *)L_4, /*hidden argument*/NULL);
		((RuntimeTypeInfoCache_1_t0D10B34129E83727F9FA5BC962BBA8D8201E7A1C_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->set_IsPrimitive_1(L_5);
		// IsInterface = type.IsInterface;
		Type_t * L_6 = V_0;
		NullCheck((Type_t *)L_6);
		bool L_7;
		L_7 = Type_get_IsInterface_mB10C34DEE8B22E1597C813211BBED17DD724FC07((Type_t *)L_6, /*hidden argument*/NULL);
		((RuntimeTypeInfoCache_1_t0D10B34129E83727F9FA5BC962BBA8D8201E7A1C_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->set_IsInterface_2(L_7);
		// IsAbstract = type.IsAbstract;
		Type_t * L_8 = V_0;
		NullCheck((Type_t *)L_8);
		bool L_9;
		L_9 = Type_get_IsAbstract_mB16DB56FCABF55740019D32C5286F38E30CAA19F((Type_t *)L_8, /*hidden argument*/NULL);
		((RuntimeTypeInfoCache_1_t0D10B34129E83727F9FA5BC962BBA8D8201E7A1C_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->set_IsAbstract_3(L_9);
		// IsArray = type.IsArray;
		Type_t * L_10 = V_0;
		NullCheck((Type_t *)L_10);
		bool L_11;
		L_11 = Type_get_IsArray_m15FE83DD8FAF090F9BDA924753C7750AAEA7CFD1((Type_t *)L_10, /*hidden argument*/NULL);
		((RuntimeTypeInfoCache_1_t0D10B34129E83727F9FA5BC962BBA8D8201E7A1C_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->set_IsArray_4(L_11);
		// IsEnum = type.IsEnum;
		Type_t * L_12 = V_0;
		NullCheck((Type_t *)L_12);
		bool L_13;
		L_13 = VirtFuncInvoker0< bool >::Invoke(67 /* System.Boolean System.Type::get_IsEnum() */, (Type_t *)L_12);
		((RuntimeTypeInfoCache_1_t0D10B34129E83727F9FA5BC962BBA8D8201E7A1C_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->set_IsEnum_5(L_13);
		// IsEnumFlags = IsEnum && null != type.GetCustomAttribute<FlagsAttribute>();
		bool L_14 = ((RuntimeTypeInfoCache_1_t0D10B34129E83727F9FA5BC962BBA8D8201E7A1C_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->get_IsEnum_5();
		if (!L_14)
		{
			goto IL_005f;
		}
	}
	{
		Type_t * L_15 = V_0;
		FlagsAttribute_t511C558FACEF1CC64702A8FAB67CAF3CBA65DF36 * L_16;
		L_16 = CustomAttributeExtensions_GetCustomAttribute_TisFlagsAttribute_t511C558FACEF1CC64702A8FAB67CAF3CBA65DF36_m2724CDFC73603733A936D82E548753DEAD4C0363((MemberInfo_t *)L_15, /*hidden argument*/CustomAttributeExtensions_GetCustomAttribute_TisFlagsAttribute_t511C558FACEF1CC64702A8FAB67CAF3CBA65DF36_m2724CDFC73603733A936D82E548753DEAD4C0363_RuntimeMethod_var);
		G_B3_0 = ((!(((RuntimeObject*)(FlagsAttribute_t511C558FACEF1CC64702A8FAB67CAF3CBA65DF36 *)L_16) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		goto IL_0060;
	}

IL_005f:
	{
		G_B3_0 = 0;
	}

IL_0060:
	{
		((RuntimeTypeInfoCache_1_t0D10B34129E83727F9FA5BC962BBA8D8201E7A1C_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->set_IsEnumFlags_6((bool)G_B3_0);
		// IsNullable = Nullable.GetUnderlyingType(typeof(T)) != null;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_17 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->klass)->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_18;
		L_18 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_17, /*hidden argument*/NULL);
		Type_t * L_19;
		L_19 = Nullable_GetUnderlyingType_mC5699E7E11E1AFE25365CAB564A48F0193318629((Type_t *)L_18, /*hidden argument*/NULL);
		bool L_20;
		L_20 = Type_op_Inequality_m6DDC5E923203A79BF505F9275B694AD3FAA36DB0((Type_t *)L_19, (Type_t *)NULL, /*hidden argument*/NULL);
		((RuntimeTypeInfoCache_1_t0D10B34129E83727F9FA5BC962BBA8D8201E7A1C_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->set_IsNullable_7(L_20);
		// IsObjectType = type == typeof(object);
		Type_t * L_21 = V_0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_22 = { reinterpret_cast<intptr_t> (RuntimeObject_0_0_0_var) };
		Type_t * L_23;
		L_23 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_22, /*hidden argument*/NULL);
		bool L_24;
		L_24 = Type_op_Equality_mA438719A1FDF103C7BBBB08AEF564E7FAEEA0046((Type_t *)L_21, (Type_t *)L_23, /*hidden argument*/NULL);
		((RuntimeTypeInfoCache_1_t0D10B34129E83727F9FA5BC962BBA8D8201E7A1C_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->set_IsObjectType_8(L_24);
		// IsStringType = type == typeof(string);
		Type_t * L_25 = V_0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_26 = { reinterpret_cast<intptr_t> (String_t_0_0_0_var) };
		Type_t * L_27;
		L_27 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_26, /*hidden argument*/NULL);
		bool L_28;
		L_28 = Type_op_Equality_mA438719A1FDF103C7BBBB08AEF564E7FAEEA0046((Type_t *)L_25, (Type_t *)L_27, /*hidden argument*/NULL);
		((RuntimeTypeInfoCache_1_t0D10B34129E83727F9FA5BC962BBA8D8201E7A1C_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->set_IsStringType_9(L_28);
		// IsContainerType = RuntimeTypeInfoCache.IsContainerType(type);
		Type_t * L_29 = V_0;
		bool L_30;
		L_30 = RuntimeTypeInfoCache_IsContainerType_m83F2173E5EB11D908CC3BA99C89B4B65B64EAA96((Type_t *)L_29, /*hidden argument*/NULL);
		((RuntimeTypeInfoCache_1_t0D10B34129E83727F9FA5BC962BBA8D8201E7A1C_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->set_IsContainerType_10(L_30);
		// CanBeNull = !IsValueType;
		bool L_31 = ((RuntimeTypeInfoCache_1_t0D10B34129E83727F9FA5BC962BBA8D8201E7A1C_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->get_IsValueType_0();
		((RuntimeTypeInfoCache_1_t0D10B34129E83727F9FA5BC962BBA8D8201E7A1C_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->set_CanBeNull_11((bool)((((int32_t)L_31) == ((int32_t)0))? 1 : 0));
		// IsNullableOrEnum = IsEnum;
		bool L_32 = ((RuntimeTypeInfoCache_1_t0D10B34129E83727F9FA5BC962BBA8D8201E7A1C_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->get_IsEnum_5();
		((RuntimeTypeInfoCache_1_t0D10B34129E83727F9FA5BC962BBA8D8201E7A1C_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->set_IsNullableOrEnum_12(L_32);
		// IsPrimitiveOrString = IsPrimitive || IsStringType;
		bool L_33 = ((RuntimeTypeInfoCache_1_t0D10B34129E83727F9FA5BC962BBA8D8201E7A1C_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->get_IsPrimitive_1();
		if (L_33)
		{
			goto IL_00d9;
		}
	}
	{
		bool L_34 = ((RuntimeTypeInfoCache_1_t0D10B34129E83727F9FA5BC962BBA8D8201E7A1C_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->get_IsStringType_9();
		G_B6_0 = ((int32_t)(L_34));
		goto IL_00da;
	}

IL_00d9:
	{
		G_B6_0 = 1;
	}

IL_00da:
	{
		((RuntimeTypeInfoCache_1_t0D10B34129E83727F9FA5BC962BBA8D8201E7A1C_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->set_IsPrimitiveOrString_13((bool)G_B6_0);
		// IsAbstractOrInterface = IsAbstract || IsInterface;
		bool L_35 = ((RuntimeTypeInfoCache_1_t0D10B34129E83727F9FA5BC962BBA8D8201E7A1C_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->get_IsAbstract_3();
		if (L_35)
		{
			goto IL_00ed;
		}
	}
	{
		bool L_36 = ((RuntimeTypeInfoCache_1_t0D10B34129E83727F9FA5BC962BBA8D8201E7A1C_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->get_IsInterface_2();
		G_B9_0 = ((int32_t)(L_36));
		goto IL_00ee;
	}

IL_00ed:
	{
		G_B9_0 = 1;
	}

IL_00ee:
	{
		((RuntimeTypeInfoCache_1_t0D10B34129E83727F9FA5BC962BBA8D8201E7A1C_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->set_IsAbstractOrInterface_14((bool)G_B9_0);
		// CanBeNull |= IsNullable;
		bool L_37 = ((RuntimeTypeInfoCache_1_t0D10B34129E83727F9FA5BC962BBA8D8201E7A1C_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->get_CanBeNull_11();
		bool L_38 = ((RuntimeTypeInfoCache_1_t0D10B34129E83727F9FA5BC962BBA8D8201E7A1C_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->get_IsNullable_7();
		((RuntimeTypeInfoCache_1_t0D10B34129E83727F9FA5BC962BBA8D8201E7A1C_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->set_CanBeNull_11((bool)((int32_t)((int32_t)L_37|(int32_t)L_38)));
		// IsNullableOrEnum |= IsNullable;
		bool L_39 = ((RuntimeTypeInfoCache_1_t0D10B34129E83727F9FA5BC962BBA8D8201E7A1C_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->get_IsNullableOrEnum_12();
		bool L_40 = ((RuntimeTypeInfoCache_1_t0D10B34129E83727F9FA5BC962BBA8D8201E7A1C_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->get_IsNullable_7();
		((RuntimeTypeInfoCache_1_t0D10B34129E83727F9FA5BC962BBA8D8201E7A1C_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->set_IsNullableOrEnum_12((bool)((int32_t)((int32_t)L_39|(int32_t)L_40)));
		// IsLazyLoadReference = type.IsGenericType && type.GetGenericTypeDefinition() == typeof(UnityEngine.LazyLoadReference<>);
		Type_t * L_41 = V_0;
		NullCheck((Type_t *)L_41);
		bool L_42;
		L_42 = VirtFuncInvoker0< bool >::Invoke(71 /* System.Boolean System.Type::get_IsGenericType() */, (Type_t *)L_41);
		if (!L_42)
		{
			goto IL_0132;
		}
	}
	{
		Type_t * L_43 = V_0;
		NullCheck((Type_t *)L_43);
		Type_t * L_44;
		L_44 = VirtFuncInvoker0< Type_t * >::Invoke(96 /* System.Type System.Type::GetGenericTypeDefinition() */, (Type_t *)L_43);
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_45 = { reinterpret_cast<intptr_t> (LazyLoadReference_1_tA48C53B4B246BEF5D956E8AB23A2EC45C6C5C36E_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_46;
		L_46 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_45, /*hidden argument*/NULL);
		bool L_47;
		L_47 = Type_op_Equality_mA438719A1FDF103C7BBBB08AEF564E7FAEEA0046((Type_t *)L_44, (Type_t *)L_46, /*hidden argument*/NULL);
		G_B12_0 = ((int32_t)(L_47));
		goto IL_0133;
	}

IL_0132:
	{
		G_B12_0 = 0;
	}

IL_0133:
	{
		((RuntimeTypeInfoCache_1_t0D10B34129E83727F9FA5BC962BBA8D8201E7A1C_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->set_IsLazyLoadReference_15((bool)G_B12_0);
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
// System.Void Unity.Properties.Internal.RuntimeTypeInfoCache`1<System.Int64>::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RuntimeTypeInfoCache_1__cctor_m369754A3C6B5C68A83581C5AD787D7BB0E22C1CD_gshared (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CustomAttributeExtensions_GetCustomAttribute_TisFlagsAttribute_t511C558FACEF1CC64702A8FAB67CAF3CBA65DF36_m2724CDFC73603733A936D82E548753DEAD4C0363_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LazyLoadReference_1_tA48C53B4B246BEF5D956E8AB23A2EC45C6C5C36E_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Type_t * V_0 = NULL;
	int32_t G_B3_0 = 0;
	int32_t G_B6_0 = 0;
	int32_t G_B9_0 = 0;
	int32_t G_B12_0 = 0;
	{
		// var type = typeof(T);
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_0 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->klass)->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1;
		L_1 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_0, /*hidden argument*/NULL);
		V_0 = (Type_t *)L_1;
		// IsValueType = type.IsValueType;
		Type_t * L_2 = V_0;
		NullCheck((Type_t *)L_2);
		bool L_3;
		L_3 = Type_get_IsValueType_m9CCCB4759C2D5A890096F8DBA66DAAEFE9D913FB((Type_t *)L_2, /*hidden argument*/NULL);
		((RuntimeTypeInfoCache_1_t5CBAC9F2F1CBAD357A91B8C9DAE468017A978451_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->set_IsValueType_0(L_3);
		// IsPrimitive = type.IsPrimitive;
		Type_t * L_4 = V_0;
		NullCheck((Type_t *)L_4);
		bool L_5;
		L_5 = Type_get_IsPrimitive_m43E50D507C45CE3BD51C0DC07C8AB061AFD6B3C3((Type_t *)L_4, /*hidden argument*/NULL);
		((RuntimeTypeInfoCache_1_t5CBAC9F2F1CBAD357A91B8C9DAE468017A978451_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->set_IsPrimitive_1(L_5);
		// IsInterface = type.IsInterface;
		Type_t * L_6 = V_0;
		NullCheck((Type_t *)L_6);
		bool L_7;
		L_7 = Type_get_IsInterface_mB10C34DEE8B22E1597C813211BBED17DD724FC07((Type_t *)L_6, /*hidden argument*/NULL);
		((RuntimeTypeInfoCache_1_t5CBAC9F2F1CBAD357A91B8C9DAE468017A978451_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->set_IsInterface_2(L_7);
		// IsAbstract = type.IsAbstract;
		Type_t * L_8 = V_0;
		NullCheck((Type_t *)L_8);
		bool L_9;
		L_9 = Type_get_IsAbstract_mB16DB56FCABF55740019D32C5286F38E30CAA19F((Type_t *)L_8, /*hidden argument*/NULL);
		((RuntimeTypeInfoCache_1_t5CBAC9F2F1CBAD357A91B8C9DAE468017A978451_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->set_IsAbstract_3(L_9);
		// IsArray = type.IsArray;
		Type_t * L_10 = V_0;
		NullCheck((Type_t *)L_10);
		bool L_11;
		L_11 = Type_get_IsArray_m15FE83DD8FAF090F9BDA924753C7750AAEA7CFD1((Type_t *)L_10, /*hidden argument*/NULL);
		((RuntimeTypeInfoCache_1_t5CBAC9F2F1CBAD357A91B8C9DAE468017A978451_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->set_IsArray_4(L_11);
		// IsEnum = type.IsEnum;
		Type_t * L_12 = V_0;
		NullCheck((Type_t *)L_12);
		bool L_13;
		L_13 = VirtFuncInvoker0< bool >::Invoke(67 /* System.Boolean System.Type::get_IsEnum() */, (Type_t *)L_12);
		((RuntimeTypeInfoCache_1_t5CBAC9F2F1CBAD357A91B8C9DAE468017A978451_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->set_IsEnum_5(L_13);
		// IsEnumFlags = IsEnum && null != type.GetCustomAttribute<FlagsAttribute>();
		bool L_14 = ((RuntimeTypeInfoCache_1_t5CBAC9F2F1CBAD357A91B8C9DAE468017A978451_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->get_IsEnum_5();
		if (!L_14)
		{
			goto IL_005f;
		}
	}
	{
		Type_t * L_15 = V_0;
		FlagsAttribute_t511C558FACEF1CC64702A8FAB67CAF3CBA65DF36 * L_16;
		L_16 = CustomAttributeExtensions_GetCustomAttribute_TisFlagsAttribute_t511C558FACEF1CC64702A8FAB67CAF3CBA65DF36_m2724CDFC73603733A936D82E548753DEAD4C0363((MemberInfo_t *)L_15, /*hidden argument*/CustomAttributeExtensions_GetCustomAttribute_TisFlagsAttribute_t511C558FACEF1CC64702A8FAB67CAF3CBA65DF36_m2724CDFC73603733A936D82E548753DEAD4C0363_RuntimeMethod_var);
		G_B3_0 = ((!(((RuntimeObject*)(FlagsAttribute_t511C558FACEF1CC64702A8FAB67CAF3CBA65DF36 *)L_16) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		goto IL_0060;
	}

IL_005f:
	{
		G_B3_0 = 0;
	}

IL_0060:
	{
		((RuntimeTypeInfoCache_1_t5CBAC9F2F1CBAD357A91B8C9DAE468017A978451_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->set_IsEnumFlags_6((bool)G_B3_0);
		// IsNullable = Nullable.GetUnderlyingType(typeof(T)) != null;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_17 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->klass)->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_18;
		L_18 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_17, /*hidden argument*/NULL);
		Type_t * L_19;
		L_19 = Nullable_GetUnderlyingType_mC5699E7E11E1AFE25365CAB564A48F0193318629((Type_t *)L_18, /*hidden argument*/NULL);
		bool L_20;
		L_20 = Type_op_Inequality_m6DDC5E923203A79BF505F9275B694AD3FAA36DB0((Type_t *)L_19, (Type_t *)NULL, /*hidden argument*/NULL);
		((RuntimeTypeInfoCache_1_t5CBAC9F2F1CBAD357A91B8C9DAE468017A978451_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->set_IsNullable_7(L_20);
		// IsObjectType = type == typeof(object);
		Type_t * L_21 = V_0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_22 = { reinterpret_cast<intptr_t> (RuntimeObject_0_0_0_var) };
		Type_t * L_23;
		L_23 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_22, /*hidden argument*/NULL);
		bool L_24;
		L_24 = Type_op_Equality_mA438719A1FDF103C7BBBB08AEF564E7FAEEA0046((Type_t *)L_21, (Type_t *)L_23, /*hidden argument*/NULL);
		((RuntimeTypeInfoCache_1_t5CBAC9F2F1CBAD357A91B8C9DAE468017A978451_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->set_IsObjectType_8(L_24);
		// IsStringType = type == typeof(string);
		Type_t * L_25 = V_0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_26 = { reinterpret_cast<intptr_t> (String_t_0_0_0_var) };
		Type_t * L_27;
		L_27 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_26, /*hidden argument*/NULL);
		bool L_28;
		L_28 = Type_op_Equality_mA438719A1FDF103C7BBBB08AEF564E7FAEEA0046((Type_t *)L_25, (Type_t *)L_27, /*hidden argument*/NULL);
		((RuntimeTypeInfoCache_1_t5CBAC9F2F1CBAD357A91B8C9DAE468017A978451_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->set_IsStringType_9(L_28);
		// IsContainerType = RuntimeTypeInfoCache.IsContainerType(type);
		Type_t * L_29 = V_0;
		bool L_30;
		L_30 = RuntimeTypeInfoCache_IsContainerType_m83F2173E5EB11D908CC3BA99C89B4B65B64EAA96((Type_t *)L_29, /*hidden argument*/NULL);
		((RuntimeTypeInfoCache_1_t5CBAC9F2F1CBAD357A91B8C9DAE468017A978451_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->set_IsContainerType_10(L_30);
		// CanBeNull = !IsValueType;
		bool L_31 = ((RuntimeTypeInfoCache_1_t5CBAC9F2F1CBAD357A91B8C9DAE468017A978451_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->get_IsValueType_0();
		((RuntimeTypeInfoCache_1_t5CBAC9F2F1CBAD357A91B8C9DAE468017A978451_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->set_CanBeNull_11((bool)((((int32_t)L_31) == ((int32_t)0))? 1 : 0));
		// IsNullableOrEnum = IsEnum;
		bool L_32 = ((RuntimeTypeInfoCache_1_t5CBAC9F2F1CBAD357A91B8C9DAE468017A978451_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->get_IsEnum_5();
		((RuntimeTypeInfoCache_1_t5CBAC9F2F1CBAD357A91B8C9DAE468017A978451_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->set_IsNullableOrEnum_12(L_32);
		// IsPrimitiveOrString = IsPrimitive || IsStringType;
		bool L_33 = ((RuntimeTypeInfoCache_1_t5CBAC9F2F1CBAD357A91B8C9DAE468017A978451_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->get_IsPrimitive_1();
		if (L_33)
		{
			goto IL_00d9;
		}
	}
	{
		bool L_34 = ((RuntimeTypeInfoCache_1_t5CBAC9F2F1CBAD357A91B8C9DAE468017A978451_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->get_IsStringType_9();
		G_B6_0 = ((int32_t)(L_34));
		goto IL_00da;
	}

IL_00d9:
	{
		G_B6_0 = 1;
	}

IL_00da:
	{
		((RuntimeTypeInfoCache_1_t5CBAC9F2F1CBAD357A91B8C9DAE468017A978451_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->set_IsPrimitiveOrString_13((bool)G_B6_0);
		// IsAbstractOrInterface = IsAbstract || IsInterface;
		bool L_35 = ((RuntimeTypeInfoCache_1_t5CBAC9F2F1CBAD357A91B8C9DAE468017A978451_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->get_IsAbstract_3();
		if (L_35)
		{
			goto IL_00ed;
		}
	}
	{
		bool L_36 = ((RuntimeTypeInfoCache_1_t5CBAC9F2F1CBAD357A91B8C9DAE468017A978451_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->get_IsInterface_2();
		G_B9_0 = ((int32_t)(L_36));
		goto IL_00ee;
	}

IL_00ed:
	{
		G_B9_0 = 1;
	}

IL_00ee:
	{
		((RuntimeTypeInfoCache_1_t5CBAC9F2F1CBAD357A91B8C9DAE468017A978451_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->set_IsAbstractOrInterface_14((bool)G_B9_0);
		// CanBeNull |= IsNullable;
		bool L_37 = ((RuntimeTypeInfoCache_1_t5CBAC9F2F1CBAD357A91B8C9DAE468017A978451_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->get_CanBeNull_11();
		bool L_38 = ((RuntimeTypeInfoCache_1_t5CBAC9F2F1CBAD357A91B8C9DAE468017A978451_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->get_IsNullable_7();
		((RuntimeTypeInfoCache_1_t5CBAC9F2F1CBAD357A91B8C9DAE468017A978451_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->set_CanBeNull_11((bool)((int32_t)((int32_t)L_37|(int32_t)L_38)));
		// IsNullableOrEnum |= IsNullable;
		bool L_39 = ((RuntimeTypeInfoCache_1_t5CBAC9F2F1CBAD357A91B8C9DAE468017A978451_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->get_IsNullableOrEnum_12();
		bool L_40 = ((RuntimeTypeInfoCache_1_t5CBAC9F2F1CBAD357A91B8C9DAE468017A978451_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->get_IsNullable_7();
		((RuntimeTypeInfoCache_1_t5CBAC9F2F1CBAD357A91B8C9DAE468017A978451_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->set_IsNullableOrEnum_12((bool)((int32_t)((int32_t)L_39|(int32_t)L_40)));
		// IsLazyLoadReference = type.IsGenericType && type.GetGenericTypeDefinition() == typeof(UnityEngine.LazyLoadReference<>);
		Type_t * L_41 = V_0;
		NullCheck((Type_t *)L_41);
		bool L_42;
		L_42 = VirtFuncInvoker0< bool >::Invoke(71 /* System.Boolean System.Type::get_IsGenericType() */, (Type_t *)L_41);
		if (!L_42)
		{
			goto IL_0132;
		}
	}
	{
		Type_t * L_43 = V_0;
		NullCheck((Type_t *)L_43);
		Type_t * L_44;
		L_44 = VirtFuncInvoker0< Type_t * >::Invoke(96 /* System.Type System.Type::GetGenericTypeDefinition() */, (Type_t *)L_43);
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_45 = { reinterpret_cast<intptr_t> (LazyLoadReference_1_tA48C53B4B246BEF5D956E8AB23A2EC45C6C5C36E_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_46;
		L_46 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_45, /*hidden argument*/NULL);
		bool L_47;
		L_47 = Type_op_Equality_mA438719A1FDF103C7BBBB08AEF564E7FAEEA0046((Type_t *)L_44, (Type_t *)L_46, /*hidden argument*/NULL);
		G_B12_0 = ((int32_t)(L_47));
		goto IL_0133;
	}

IL_0132:
	{
		G_B12_0 = 0;
	}

IL_0133:
	{
		((RuntimeTypeInfoCache_1_t5CBAC9F2F1CBAD357A91B8C9DAE468017A978451_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->set_IsLazyLoadReference_15((bool)G_B12_0);
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
// System.Void Unity.Properties.Internal.RuntimeTypeInfoCache`1<UnityEngine.Keyframe>::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RuntimeTypeInfoCache_1__cctor_m228548CFF53B9348AACFB5D90782B797D8C3FE89_gshared (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CustomAttributeExtensions_GetCustomAttribute_TisFlagsAttribute_t511C558FACEF1CC64702A8FAB67CAF3CBA65DF36_m2724CDFC73603733A936D82E548753DEAD4C0363_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LazyLoadReference_1_tA48C53B4B246BEF5D956E8AB23A2EC45C6C5C36E_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Type_t * V_0 = NULL;
	int32_t G_B3_0 = 0;
	int32_t G_B6_0 = 0;
	int32_t G_B9_0 = 0;
	int32_t G_B12_0 = 0;
	{
		// var type = typeof(T);
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_0 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->klass)->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1;
		L_1 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_0, /*hidden argument*/NULL);
		V_0 = (Type_t *)L_1;
		// IsValueType = type.IsValueType;
		Type_t * L_2 = V_0;
		NullCheck((Type_t *)L_2);
		bool L_3;
		L_3 = Type_get_IsValueType_m9CCCB4759C2D5A890096F8DBA66DAAEFE9D913FB((Type_t *)L_2, /*hidden argument*/NULL);
		((RuntimeTypeInfoCache_1_tD340DDBB5C3590BF74E151146C0973C71819F96F_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->set_IsValueType_0(L_3);
		// IsPrimitive = type.IsPrimitive;
		Type_t * L_4 = V_0;
		NullCheck((Type_t *)L_4);
		bool L_5;
		L_5 = Type_get_IsPrimitive_m43E50D507C45CE3BD51C0DC07C8AB061AFD6B3C3((Type_t *)L_4, /*hidden argument*/NULL);
		((RuntimeTypeInfoCache_1_tD340DDBB5C3590BF74E151146C0973C71819F96F_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->set_IsPrimitive_1(L_5);
		// IsInterface = type.IsInterface;
		Type_t * L_6 = V_0;
		NullCheck((Type_t *)L_6);
		bool L_7;
		L_7 = Type_get_IsInterface_mB10C34DEE8B22E1597C813211BBED17DD724FC07((Type_t *)L_6, /*hidden argument*/NULL);
		((RuntimeTypeInfoCache_1_tD340DDBB5C3590BF74E151146C0973C71819F96F_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->set_IsInterface_2(L_7);
		// IsAbstract = type.IsAbstract;
		Type_t * L_8 = V_0;
		NullCheck((Type_t *)L_8);
		bool L_9;
		L_9 = Type_get_IsAbstract_mB16DB56FCABF55740019D32C5286F38E30CAA19F((Type_t *)L_8, /*hidden argument*/NULL);
		((RuntimeTypeInfoCache_1_tD340DDBB5C3590BF74E151146C0973C71819F96F_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->set_IsAbstract_3(L_9);
		// IsArray = type.IsArray;
		Type_t * L_10 = V_0;
		NullCheck((Type_t *)L_10);
		bool L_11;
		L_11 = Type_get_IsArray_m15FE83DD8FAF090F9BDA924753C7750AAEA7CFD1((Type_t *)L_10, /*hidden argument*/NULL);
		((RuntimeTypeInfoCache_1_tD340DDBB5C3590BF74E151146C0973C71819F96F_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->set_IsArray_4(L_11);
		// IsEnum = type.IsEnum;
		Type_t * L_12 = V_0;
		NullCheck((Type_t *)L_12);
		bool L_13;
		L_13 = VirtFuncInvoker0< bool >::Invoke(67 /* System.Boolean System.Type::get_IsEnum() */, (Type_t *)L_12);
		((RuntimeTypeInfoCache_1_tD340DDBB5C3590BF74E151146C0973C71819F96F_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->set_IsEnum_5(L_13);
		// IsEnumFlags = IsEnum && null != type.GetCustomAttribute<FlagsAttribute>();
		bool L_14 = ((RuntimeTypeInfoCache_1_tD340DDBB5C3590BF74E151146C0973C71819F96F_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->get_IsEnum_5();
		if (!L_14)
		{
			goto IL_005f;
		}
	}
	{
		Type_t * L_15 = V_0;
		FlagsAttribute_t511C558FACEF1CC64702A8FAB67CAF3CBA65DF36 * L_16;
		L_16 = CustomAttributeExtensions_GetCustomAttribute_TisFlagsAttribute_t511C558FACEF1CC64702A8FAB67CAF3CBA65DF36_m2724CDFC73603733A936D82E548753DEAD4C0363((MemberInfo_t *)L_15, /*hidden argument*/CustomAttributeExtensions_GetCustomAttribute_TisFlagsAttribute_t511C558FACEF1CC64702A8FAB67CAF3CBA65DF36_m2724CDFC73603733A936D82E548753DEAD4C0363_RuntimeMethod_var);
		G_B3_0 = ((!(((RuntimeObject*)(FlagsAttribute_t511C558FACEF1CC64702A8FAB67CAF3CBA65DF36 *)L_16) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		goto IL_0060;
	}

IL_005f:
	{
		G_B3_0 = 0;
	}

IL_0060:
	{
		((RuntimeTypeInfoCache_1_tD340DDBB5C3590BF74E151146C0973C71819F96F_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->set_IsEnumFlags_6((bool)G_B3_0);
		// IsNullable = Nullable.GetUnderlyingType(typeof(T)) != null;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_17 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->klass)->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_18;
		L_18 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_17, /*hidden argument*/NULL);
		Type_t * L_19;
		L_19 = Nullable_GetUnderlyingType_mC5699E7E11E1AFE25365CAB564A48F0193318629((Type_t *)L_18, /*hidden argument*/NULL);
		bool L_20;
		L_20 = Type_op_Inequality_m6DDC5E923203A79BF505F9275B694AD3FAA36DB0((Type_t *)L_19, (Type_t *)NULL, /*hidden argument*/NULL);
		((RuntimeTypeInfoCache_1_tD340DDBB5C3590BF74E151146C0973C71819F96F_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->set_IsNullable_7(L_20);
		// IsObjectType = type == typeof(object);
		Type_t * L_21 = V_0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_22 = { reinterpret_cast<intptr_t> (RuntimeObject_0_0_0_var) };
		Type_t * L_23;
		L_23 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_22, /*hidden argument*/NULL);
		bool L_24;
		L_24 = Type_op_Equality_mA438719A1FDF103C7BBBB08AEF564E7FAEEA0046((Type_t *)L_21, (Type_t *)L_23, /*hidden argument*/NULL);
		((RuntimeTypeInfoCache_1_tD340DDBB5C3590BF74E151146C0973C71819F96F_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->set_IsObjectType_8(L_24);
		// IsStringType = type == typeof(string);
		Type_t * L_25 = V_0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_26 = { reinterpret_cast<intptr_t> (String_t_0_0_0_var) };
		Type_t * L_27;
		L_27 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_26, /*hidden argument*/NULL);
		bool L_28;
		L_28 = Type_op_Equality_mA438719A1FDF103C7BBBB08AEF564E7FAEEA0046((Type_t *)L_25, (Type_t *)L_27, /*hidden argument*/NULL);
		((RuntimeTypeInfoCache_1_tD340DDBB5C3590BF74E151146C0973C71819F96F_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->set_IsStringType_9(L_28);
		// IsContainerType = RuntimeTypeInfoCache.IsContainerType(type);
		Type_t * L_29 = V_0;
		bool L_30;
		L_30 = RuntimeTypeInfoCache_IsContainerType_m83F2173E5EB11D908CC3BA99C89B4B65B64EAA96((Type_t *)L_29, /*hidden argument*/NULL);
		((RuntimeTypeInfoCache_1_tD340DDBB5C3590BF74E151146C0973C71819F96F_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->set_IsContainerType_10(L_30);
		// CanBeNull = !IsValueType;
		bool L_31 = ((RuntimeTypeInfoCache_1_tD340DDBB5C3590BF74E151146C0973C71819F96F_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->get_IsValueType_0();
		((RuntimeTypeInfoCache_1_tD340DDBB5C3590BF74E151146C0973C71819F96F_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->set_CanBeNull_11((bool)((((int32_t)L_31) == ((int32_t)0))? 1 : 0));
		// IsNullableOrEnum = IsEnum;
		bool L_32 = ((RuntimeTypeInfoCache_1_tD340DDBB5C3590BF74E151146C0973C71819F96F_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->get_IsEnum_5();
		((RuntimeTypeInfoCache_1_tD340DDBB5C3590BF74E151146C0973C71819F96F_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->set_IsNullableOrEnum_12(L_32);
		// IsPrimitiveOrString = IsPrimitive || IsStringType;
		bool L_33 = ((RuntimeTypeInfoCache_1_tD340DDBB5C3590BF74E151146C0973C71819F96F_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->get_IsPrimitive_1();
		if (L_33)
		{
			goto IL_00d9;
		}
	}
	{
		bool L_34 = ((RuntimeTypeInfoCache_1_tD340DDBB5C3590BF74E151146C0973C71819F96F_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->get_IsStringType_9();
		G_B6_0 = ((int32_t)(L_34));
		goto IL_00da;
	}

IL_00d9:
	{
		G_B6_0 = 1;
	}

IL_00da:
	{
		((RuntimeTypeInfoCache_1_tD340DDBB5C3590BF74E151146C0973C71819F96F_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->set_IsPrimitiveOrString_13((bool)G_B6_0);
		// IsAbstractOrInterface = IsAbstract || IsInterface;
		bool L_35 = ((RuntimeTypeInfoCache_1_tD340DDBB5C3590BF74E151146C0973C71819F96F_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->get_IsAbstract_3();
		if (L_35)
		{
			goto IL_00ed;
		}
	}
	{
		bool L_36 = ((RuntimeTypeInfoCache_1_tD340DDBB5C3590BF74E151146C0973C71819F96F_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->get_IsInterface_2();
		G_B9_0 = ((int32_t)(L_36));
		goto IL_00ee;
	}

IL_00ed:
	{
		G_B9_0 = 1;
	}

IL_00ee:
	{
		((RuntimeTypeInfoCache_1_tD340DDBB5C3590BF74E151146C0973C71819F96F_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->set_IsAbstractOrInterface_14((bool)G_B9_0);
		// CanBeNull |= IsNullable;
		bool L_37 = ((RuntimeTypeInfoCache_1_tD340DDBB5C3590BF74E151146C0973C71819F96F_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->get_CanBeNull_11();
		bool L_38 = ((RuntimeTypeInfoCache_1_tD340DDBB5C3590BF74E151146C0973C71819F96F_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->get_IsNullable_7();
		((RuntimeTypeInfoCache_1_tD340DDBB5C3590BF74E151146C0973C71819F96F_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->set_CanBeNull_11((bool)((int32_t)((int32_t)L_37|(int32_t)L_38)));
		// IsNullableOrEnum |= IsNullable;
		bool L_39 = ((RuntimeTypeInfoCache_1_tD340DDBB5C3590BF74E151146C0973C71819F96F_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->get_IsNullableOrEnum_12();
		bool L_40 = ((RuntimeTypeInfoCache_1_tD340DDBB5C3590BF74E151146C0973C71819F96F_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->get_IsNullable_7();
		((RuntimeTypeInfoCache_1_tD340DDBB5C3590BF74E151146C0973C71819F96F_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->set_IsNullableOrEnum_12((bool)((int32_t)((int32_t)L_39|(int32_t)L_40)));
		// IsLazyLoadReference = type.IsGenericType && type.GetGenericTypeDefinition() == typeof(UnityEngine.LazyLoadReference<>);
		Type_t * L_41 = V_0;
		NullCheck((Type_t *)L_41);
		bool L_42;
		L_42 = VirtFuncInvoker0< bool >::Invoke(71 /* System.Boolean System.Type::get_IsGenericType() */, (Type_t *)L_41);
		if (!L_42)
		{
			goto IL_0132;
		}
	}
	{
		Type_t * L_43 = V_0;
		NullCheck((Type_t *)L_43);
		Type_t * L_44;
		L_44 = VirtFuncInvoker0< Type_t * >::Invoke(96 /* System.Type System.Type::GetGenericTypeDefinition() */, (Type_t *)L_43);
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_45 = { reinterpret_cast<intptr_t> (LazyLoadReference_1_tA48C53B4B246BEF5D956E8AB23A2EC45C6C5C36E_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_46;
		L_46 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_45, /*hidden argument*/NULL);
		bool L_47;
		L_47 = Type_op_Equality_mA438719A1FDF103C7BBBB08AEF564E7FAEEA0046((Type_t *)L_44, (Type_t *)L_46, /*hidden argument*/NULL);
		G_B12_0 = ((int32_t)(L_47));
		goto IL_0133;
	}

IL_0132:
	{
		G_B12_0 = 0;
	}

IL_0133:
	{
		((RuntimeTypeInfoCache_1_tD340DDBB5C3590BF74E151146C0973C71819F96F_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->set_IsLazyLoadReference_15((bool)G_B12_0);
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
// System.Void Unity.Properties.Internal.RuntimeTypeInfoCache`1<System.Object>::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RuntimeTypeInfoCache_1__cctor_m2634F0CD2A6F28D1A1FAE9AA8109E0C5285FEF9C_gshared (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CustomAttributeExtensions_GetCustomAttribute_TisFlagsAttribute_t511C558FACEF1CC64702A8FAB67CAF3CBA65DF36_m2724CDFC73603733A936D82E548753DEAD4C0363_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LazyLoadReference_1_tA48C53B4B246BEF5D956E8AB23A2EC45C6C5C36E_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Type_t * V_0 = NULL;
	int32_t G_B3_0 = 0;
	int32_t G_B6_0 = 0;
	int32_t G_B9_0 = 0;
	int32_t G_B12_0 = 0;
	{
		// var type = typeof(T);
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_0 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->klass)->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1;
		L_1 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_0, /*hidden argument*/NULL);
		V_0 = (Type_t *)L_1;
		// IsValueType = type.IsValueType;
		Type_t * L_2 = V_0;
		NullCheck((Type_t *)L_2);
		bool L_3;
		L_3 = Type_get_IsValueType_m9CCCB4759C2D5A890096F8DBA66DAAEFE9D913FB((Type_t *)L_2, /*hidden argument*/NULL);
		((RuntimeTypeInfoCache_1_t430C5AE51D5242025852D50EAACE8D8C6DC453C8_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->set_IsValueType_0(L_3);
		// IsPrimitive = type.IsPrimitive;
		Type_t * L_4 = V_0;
		NullCheck((Type_t *)L_4);
		bool L_5;
		L_5 = Type_get_IsPrimitive_m43E50D507C45CE3BD51C0DC07C8AB061AFD6B3C3((Type_t *)L_4, /*hidden argument*/NULL);
		((RuntimeTypeInfoCache_1_t430C5AE51D5242025852D50EAACE8D8C6DC453C8_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->set_IsPrimitive_1(L_5);
		// IsInterface = type.IsInterface;
		Type_t * L_6 = V_0;
		NullCheck((Type_t *)L_6);
		bool L_7;
		L_7 = Type_get_IsInterface_mB10C34DEE8B22E1597C813211BBED17DD724FC07((Type_t *)L_6, /*hidden argument*/NULL);
		((RuntimeTypeInfoCache_1_t430C5AE51D5242025852D50EAACE8D8C6DC453C8_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->set_IsInterface_2(L_7);
		// IsAbstract = type.IsAbstract;
		Type_t * L_8 = V_0;
		NullCheck((Type_t *)L_8);
		bool L_9;
		L_9 = Type_get_IsAbstract_mB16DB56FCABF55740019D32C5286F38E30CAA19F((Type_t *)L_8, /*hidden argument*/NULL);
		((RuntimeTypeInfoCache_1_t430C5AE51D5242025852D50EAACE8D8C6DC453C8_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->set_IsAbstract_3(L_9);
		// IsArray = type.IsArray;
		Type_t * L_10 = V_0;
		NullCheck((Type_t *)L_10);
		bool L_11;
		L_11 = Type_get_IsArray_m15FE83DD8FAF090F9BDA924753C7750AAEA7CFD1((Type_t *)L_10, /*hidden argument*/NULL);
		((RuntimeTypeInfoCache_1_t430C5AE51D5242025852D50EAACE8D8C6DC453C8_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->set_IsArray_4(L_11);
		// IsEnum = type.IsEnum;
		Type_t * L_12 = V_0;
		NullCheck((Type_t *)L_12);
		bool L_13;
		L_13 = VirtFuncInvoker0< bool >::Invoke(67 /* System.Boolean System.Type::get_IsEnum() */, (Type_t *)L_12);
		((RuntimeTypeInfoCache_1_t430C5AE51D5242025852D50EAACE8D8C6DC453C8_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->set_IsEnum_5(L_13);
		// IsEnumFlags = IsEnum && null != type.GetCustomAttribute<FlagsAttribute>();
		bool L_14 = ((RuntimeTypeInfoCache_1_t430C5AE51D5242025852D50EAACE8D8C6DC453C8_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->get_IsEnum_5();
		if (!L_14)
		{
			goto IL_005f;
		}
	}
	{
		Type_t * L_15 = V_0;
		FlagsAttribute_t511C558FACEF1CC64702A8FAB67CAF3CBA65DF36 * L_16;
		L_16 = CustomAttributeExtensions_GetCustomAttribute_TisFlagsAttribute_t511C558FACEF1CC64702A8FAB67CAF3CBA65DF36_m2724CDFC73603733A936D82E548753DEAD4C0363((MemberInfo_t *)L_15, /*hidden argument*/CustomAttributeExtensions_GetCustomAttribute_TisFlagsAttribute_t511C558FACEF1CC64702A8FAB67CAF3CBA65DF36_m2724CDFC73603733A936D82E548753DEAD4C0363_RuntimeMethod_var);
		G_B3_0 = ((!(((RuntimeObject*)(FlagsAttribute_t511C558FACEF1CC64702A8FAB67CAF3CBA65DF36 *)L_16) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		goto IL_0060;
	}

IL_005f:
	{
		G_B3_0 = 0;
	}

IL_0060:
	{
		((RuntimeTypeInfoCache_1_t430C5AE51D5242025852D50EAACE8D8C6DC453C8_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->set_IsEnumFlags_6((bool)G_B3_0);
		// IsNullable = Nullable.GetUnderlyingType(typeof(T)) != null;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_17 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->klass)->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_18;
		L_18 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_17, /*hidden argument*/NULL);
		Type_t * L_19;
		L_19 = Nullable_GetUnderlyingType_mC5699E7E11E1AFE25365CAB564A48F0193318629((Type_t *)L_18, /*hidden argument*/NULL);
		bool L_20;
		L_20 = Type_op_Inequality_m6DDC5E923203A79BF505F9275B694AD3FAA36DB0((Type_t *)L_19, (Type_t *)NULL, /*hidden argument*/NULL);
		((RuntimeTypeInfoCache_1_t430C5AE51D5242025852D50EAACE8D8C6DC453C8_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->set_IsNullable_7(L_20);
		// IsObjectType = type == typeof(object);
		Type_t * L_21 = V_0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_22 = { reinterpret_cast<intptr_t> (RuntimeObject_0_0_0_var) };
		Type_t * L_23;
		L_23 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_22, /*hidden argument*/NULL);
		bool L_24;
		L_24 = Type_op_Equality_mA438719A1FDF103C7BBBB08AEF564E7FAEEA0046((Type_t *)L_21, (Type_t *)L_23, /*hidden argument*/NULL);
		((RuntimeTypeInfoCache_1_t430C5AE51D5242025852D50EAACE8D8C6DC453C8_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->set_IsObjectType_8(L_24);
		// IsStringType = type == typeof(string);
		Type_t * L_25 = V_0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_26 = { reinterpret_cast<intptr_t> (String_t_0_0_0_var) };
		Type_t * L_27;
		L_27 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_26, /*hidden argument*/NULL);
		bool L_28;
		L_28 = Type_op_Equality_mA438719A1FDF103C7BBBB08AEF564E7FAEEA0046((Type_t *)L_25, (Type_t *)L_27, /*hidden argument*/NULL);
		((RuntimeTypeInfoCache_1_t430C5AE51D5242025852D50EAACE8D8C6DC453C8_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->set_IsStringType_9(L_28);
		// IsContainerType = RuntimeTypeInfoCache.IsContainerType(type);
		Type_t * L_29 = V_0;
		bool L_30;
		L_30 = RuntimeTypeInfoCache_IsContainerType_m83F2173E5EB11D908CC3BA99C89B4B65B64EAA96((Type_t *)L_29, /*hidden argument*/NULL);
		((RuntimeTypeInfoCache_1_t430C5AE51D5242025852D50EAACE8D8C6DC453C8_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->set_IsContainerType_10(L_30);
		// CanBeNull = !IsValueType;
		bool L_31 = ((RuntimeTypeInfoCache_1_t430C5AE51D5242025852D50EAACE8D8C6DC453C8_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->get_IsValueType_0();
		((RuntimeTypeInfoCache_1_t430C5AE51D5242025852D50EAACE8D8C6DC453C8_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->set_CanBeNull_11((bool)((((int32_t)L_31) == ((int32_t)0))? 1 : 0));
		// IsNullableOrEnum = IsEnum;
		bool L_32 = ((RuntimeTypeInfoCache_1_t430C5AE51D5242025852D50EAACE8D8C6DC453C8_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->get_IsEnum_5();
		((RuntimeTypeInfoCache_1_t430C5AE51D5242025852D50EAACE8D8C6DC453C8_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->set_IsNullableOrEnum_12(L_32);
		// IsPrimitiveOrString = IsPrimitive || IsStringType;
		bool L_33 = ((RuntimeTypeInfoCache_1_t430C5AE51D5242025852D50EAACE8D8C6DC453C8_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->get_IsPrimitive_1();
		if (L_33)
		{
			goto IL_00d9;
		}
	}
	{
		bool L_34 = ((RuntimeTypeInfoCache_1_t430C5AE51D5242025852D50EAACE8D8C6DC453C8_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->get_IsStringType_9();
		G_B6_0 = ((int32_t)(L_34));
		goto IL_00da;
	}

IL_00d9:
	{
		G_B6_0 = 1;
	}

IL_00da:
	{
		((RuntimeTypeInfoCache_1_t430C5AE51D5242025852D50EAACE8D8C6DC453C8_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->set_IsPrimitiveOrString_13((bool)G_B6_0);
		// IsAbstractOrInterface = IsAbstract || IsInterface;
		bool L_35 = ((RuntimeTypeInfoCache_1_t430C5AE51D5242025852D50EAACE8D8C6DC453C8_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->get_IsAbstract_3();
		if (L_35)
		{
			goto IL_00ed;
		}
	}
	{
		bool L_36 = ((RuntimeTypeInfoCache_1_t430C5AE51D5242025852D50EAACE8D8C6DC453C8_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->get_IsInterface_2();
		G_B9_0 = ((int32_t)(L_36));
		goto IL_00ee;
	}

IL_00ed:
	{
		G_B9_0 = 1;
	}

IL_00ee:
	{
		((RuntimeTypeInfoCache_1_t430C5AE51D5242025852D50EAACE8D8C6DC453C8_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->set_IsAbstractOrInterface_14((bool)G_B9_0);
		// CanBeNull |= IsNullable;
		bool L_37 = ((RuntimeTypeInfoCache_1_t430C5AE51D5242025852D50EAACE8D8C6DC453C8_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->get_CanBeNull_11();
		bool L_38 = ((RuntimeTypeInfoCache_1_t430C5AE51D5242025852D50EAACE8D8C6DC453C8_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->get_IsNullable_7();
		((RuntimeTypeInfoCache_1_t430C5AE51D5242025852D50EAACE8D8C6DC453C8_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->set_CanBeNull_11((bool)((int32_t)((int32_t)L_37|(int32_t)L_38)));
		// IsNullableOrEnum |= IsNullable;
		bool L_39 = ((RuntimeTypeInfoCache_1_t430C5AE51D5242025852D50EAACE8D8C6DC453C8_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->get_IsNullableOrEnum_12();
		bool L_40 = ((RuntimeTypeInfoCache_1_t430C5AE51D5242025852D50EAACE8D8C6DC453C8_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->get_IsNullable_7();
		((RuntimeTypeInfoCache_1_t430C5AE51D5242025852D50EAACE8D8C6DC453C8_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->set_IsNullableOrEnum_12((bool)((int32_t)((int32_t)L_39|(int32_t)L_40)));
		// IsLazyLoadReference = type.IsGenericType && type.GetGenericTypeDefinition() == typeof(UnityEngine.LazyLoadReference<>);
		Type_t * L_41 = V_0;
		NullCheck((Type_t *)L_41);
		bool L_42;
		L_42 = VirtFuncInvoker0< bool >::Invoke(71 /* System.Boolean System.Type::get_IsGenericType() */, (Type_t *)L_41);
		if (!L_42)
		{
			goto IL_0132;
		}
	}
	{
		Type_t * L_43 = V_0;
		NullCheck((Type_t *)L_43);
		Type_t * L_44;
		L_44 = VirtFuncInvoker0< Type_t * >::Invoke(96 /* System.Type System.Type::GetGenericTypeDefinition() */, (Type_t *)L_43);
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_45 = { reinterpret_cast<intptr_t> (LazyLoadReference_1_tA48C53B4B246BEF5D956E8AB23A2EC45C6C5C36E_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_46;
		L_46 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_45, /*hidden argument*/NULL);
		bool L_47;
		L_47 = Type_op_Equality_mA438719A1FDF103C7BBBB08AEF564E7FAEEA0046((Type_t *)L_44, (Type_t *)L_46, /*hidden argument*/NULL);
		G_B12_0 = ((int32_t)(L_47));
		goto IL_0133;
	}

IL_0132:
	{
		G_B12_0 = 0;
	}

IL_0133:
	{
		((RuntimeTypeInfoCache_1_t430C5AE51D5242025852D50EAACE8D8C6DC453C8_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->set_IsLazyLoadReference_15((bool)G_B12_0);
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
// System.Void Unity.Properties.Internal.RuntimeTypeInfoCache`1<UnityEngine.Rect>::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RuntimeTypeInfoCache_1__cctor_mF3D70A19CDD7E108BEDBB0BE1E3F546A3055F5F9_gshared (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CustomAttributeExtensions_GetCustomAttribute_TisFlagsAttribute_t511C558FACEF1CC64702A8FAB67CAF3CBA65DF36_m2724CDFC73603733A936D82E548753DEAD4C0363_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LazyLoadReference_1_tA48C53B4B246BEF5D956E8AB23A2EC45C6C5C36E_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Type_t * V_0 = NULL;
	int32_t G_B3_0 = 0;
	int32_t G_B6_0 = 0;
	int32_t G_B9_0 = 0;
	int32_t G_B12_0 = 0;
	{
		// var type = typeof(T);
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_0 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->klass)->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1;
		L_1 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_0, /*hidden argument*/NULL);
		V_0 = (Type_t *)L_1;
		// IsValueType = type.IsValueType;
		Type_t * L_2 = V_0;
		NullCheck((Type_t *)L_2);
		bool L_3;
		L_3 = Type_get_IsValueType_m9CCCB4759C2D5A890096F8DBA66DAAEFE9D913FB((Type_t *)L_2, /*hidden argument*/NULL);
		((RuntimeTypeInfoCache_1_tDEA5BCF1CBB2F6FFCCC32DB58E3DB05C14F211CC_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->set_IsValueType_0(L_3);
		// IsPrimitive = type.IsPrimitive;
		Type_t * L_4 = V_0;
		NullCheck((Type_t *)L_4);
		bool L_5;
		L_5 = Type_get_IsPrimitive_m43E50D507C45CE3BD51C0DC07C8AB061AFD6B3C3((Type_t *)L_4, /*hidden argument*/NULL);
		((RuntimeTypeInfoCache_1_tDEA5BCF1CBB2F6FFCCC32DB58E3DB05C14F211CC_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->set_IsPrimitive_1(L_5);
		// IsInterface = type.IsInterface;
		Type_t * L_6 = V_0;
		NullCheck((Type_t *)L_6);
		bool L_7;
		L_7 = Type_get_IsInterface_mB10C34DEE8B22E1597C813211BBED17DD724FC07((Type_t *)L_6, /*hidden argument*/NULL);
		((RuntimeTypeInfoCache_1_tDEA5BCF1CBB2F6FFCCC32DB58E3DB05C14F211CC_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->set_IsInterface_2(L_7);
		// IsAbstract = type.IsAbstract;
		Type_t * L_8 = V_0;
		NullCheck((Type_t *)L_8);
		bool L_9;
		L_9 = Type_get_IsAbstract_mB16DB56FCABF55740019D32C5286F38E30CAA19F((Type_t *)L_8, /*hidden argument*/NULL);
		((RuntimeTypeInfoCache_1_tDEA5BCF1CBB2F6FFCCC32DB58E3DB05C14F211CC_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->set_IsAbstract_3(L_9);
		// IsArray = type.IsArray;
		Type_t * L_10 = V_0;
		NullCheck((Type_t *)L_10);
		bool L_11;
		L_11 = Type_get_IsArray_m15FE83DD8FAF090F9BDA924753C7750AAEA7CFD1((Type_t *)L_10, /*hidden argument*/NULL);
		((RuntimeTypeInfoCache_1_tDEA5BCF1CBB2F6FFCCC32DB58E3DB05C14F211CC_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->set_IsArray_4(L_11);
		// IsEnum = type.IsEnum;
		Type_t * L_12 = V_0;
		NullCheck((Type_t *)L_12);
		bool L_13;
		L_13 = VirtFuncInvoker0< bool >::Invoke(67 /* System.Boolean System.Type::get_IsEnum() */, (Type_t *)L_12);
		((RuntimeTypeInfoCache_1_tDEA5BCF1CBB2F6FFCCC32DB58E3DB05C14F211CC_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->set_IsEnum_5(L_13);
		// IsEnumFlags = IsEnum && null != type.GetCustomAttribute<FlagsAttribute>();
		bool L_14 = ((RuntimeTypeInfoCache_1_tDEA5BCF1CBB2F6FFCCC32DB58E3DB05C14F211CC_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->get_IsEnum_5();
		if (!L_14)
		{
			goto IL_005f;
		}
	}
	{
		Type_t * L_15 = V_0;
		FlagsAttribute_t511C558FACEF1CC64702A8FAB67CAF3CBA65DF36 * L_16;
		L_16 = CustomAttributeExtensions_GetCustomAttribute_TisFlagsAttribute_t511C558FACEF1CC64702A8FAB67CAF3CBA65DF36_m2724CDFC73603733A936D82E548753DEAD4C0363((MemberInfo_t *)L_15, /*hidden argument*/CustomAttributeExtensions_GetCustomAttribute_TisFlagsAttribute_t511C558FACEF1CC64702A8FAB67CAF3CBA65DF36_m2724CDFC73603733A936D82E548753DEAD4C0363_RuntimeMethod_var);
		G_B3_0 = ((!(((RuntimeObject*)(FlagsAttribute_t511C558FACEF1CC64702A8FAB67CAF3CBA65DF36 *)L_16) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		goto IL_0060;
	}

IL_005f:
	{
		G_B3_0 = 0;
	}

IL_0060:
	{
		((RuntimeTypeInfoCache_1_tDEA5BCF1CBB2F6FFCCC32DB58E3DB05C14F211CC_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->set_IsEnumFlags_6((bool)G_B3_0);
		// IsNullable = Nullable.GetUnderlyingType(typeof(T)) != null;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_17 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->klass)->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_18;
		L_18 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_17, /*hidden argument*/NULL);
		Type_t * L_19;
		L_19 = Nullable_GetUnderlyingType_mC5699E7E11E1AFE25365CAB564A48F0193318629((Type_t *)L_18, /*hidden argument*/NULL);
		bool L_20;
		L_20 = Type_op_Inequality_m6DDC5E923203A79BF505F9275B694AD3FAA36DB0((Type_t *)L_19, (Type_t *)NULL, /*hidden argument*/NULL);
		((RuntimeTypeInfoCache_1_tDEA5BCF1CBB2F6FFCCC32DB58E3DB05C14F211CC_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->set_IsNullable_7(L_20);
		// IsObjectType = type == typeof(object);
		Type_t * L_21 = V_0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_22 = { reinterpret_cast<intptr_t> (RuntimeObject_0_0_0_var) };
		Type_t * L_23;
		L_23 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_22, /*hidden argument*/NULL);
		bool L_24;
		L_24 = Type_op_Equality_mA438719A1FDF103C7BBBB08AEF564E7FAEEA0046((Type_t *)L_21, (Type_t *)L_23, /*hidden argument*/NULL);
		((RuntimeTypeInfoCache_1_tDEA5BCF1CBB2F6FFCCC32DB58E3DB05C14F211CC_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->set_IsObjectType_8(L_24);
		// IsStringType = type == typeof(string);
		Type_t * L_25 = V_0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_26 = { reinterpret_cast<intptr_t> (String_t_0_0_0_var) };
		Type_t * L_27;
		L_27 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_26, /*hidden argument*/NULL);
		bool L_28;
		L_28 = Type_op_Equality_mA438719A1FDF103C7BBBB08AEF564E7FAEEA0046((Type_t *)L_25, (Type_t *)L_27, /*hidden argument*/NULL);
		((RuntimeTypeInfoCache_1_tDEA5BCF1CBB2F6FFCCC32DB58E3DB05C14F211CC_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->set_IsStringType_9(L_28);
		// IsContainerType = RuntimeTypeInfoCache.IsContainerType(type);
		Type_t * L_29 = V_0;
		bool L_30;
		L_30 = RuntimeTypeInfoCache_IsContainerType_m83F2173E5EB11D908CC3BA99C89B4B65B64EAA96((Type_t *)L_29, /*hidden argument*/NULL);
		((RuntimeTypeInfoCache_1_tDEA5BCF1CBB2F6FFCCC32DB58E3DB05C14F211CC_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->set_IsContainerType_10(L_30);
		// CanBeNull = !IsValueType;
		bool L_31 = ((RuntimeTypeInfoCache_1_tDEA5BCF1CBB2F6FFCCC32DB58E3DB05C14F211CC_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->get_IsValueType_0();
		((RuntimeTypeInfoCache_1_tDEA5BCF1CBB2F6FFCCC32DB58E3DB05C14F211CC_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->set_CanBeNull_11((bool)((((int32_t)L_31) == ((int32_t)0))? 1 : 0));
		// IsNullableOrEnum = IsEnum;
		bool L_32 = ((RuntimeTypeInfoCache_1_tDEA5BCF1CBB2F6FFCCC32DB58E3DB05C14F211CC_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->get_IsEnum_5();
		((RuntimeTypeInfoCache_1_tDEA5BCF1CBB2F6FFCCC32DB58E3DB05C14F211CC_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->set_IsNullableOrEnum_12(L_32);
		// IsPrimitiveOrString = IsPrimitive || IsStringType;
		bool L_33 = ((RuntimeTypeInfoCache_1_tDEA5BCF1CBB2F6FFCCC32DB58E3DB05C14F211CC_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->get_IsPrimitive_1();
		if (L_33)
		{
			goto IL_00d9;
		}
	}
	{
		bool L_34 = ((RuntimeTypeInfoCache_1_tDEA5BCF1CBB2F6FFCCC32DB58E3DB05C14F211CC_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->get_IsStringType_9();
		G_B6_0 = ((int32_t)(L_34));
		goto IL_00da;
	}

IL_00d9:
	{
		G_B6_0 = 1;
	}

IL_00da:
	{
		((RuntimeTypeInfoCache_1_tDEA5BCF1CBB2F6FFCCC32DB58E3DB05C14F211CC_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->set_IsPrimitiveOrString_13((bool)G_B6_0);
		// IsAbstractOrInterface = IsAbstract || IsInterface;
		bool L_35 = ((RuntimeTypeInfoCache_1_tDEA5BCF1CBB2F6FFCCC32DB58E3DB05C14F211CC_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->get_IsAbstract_3();
		if (L_35)
		{
			goto IL_00ed;
		}
	}
	{
		bool L_36 = ((RuntimeTypeInfoCache_1_tDEA5BCF1CBB2F6FFCCC32DB58E3DB05C14F211CC_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->get_IsInterface_2();
		G_B9_0 = ((int32_t)(L_36));
		goto IL_00ee;
	}

IL_00ed:
	{
		G_B9_0 = 1;
	}

IL_00ee:
	{
		((RuntimeTypeInfoCache_1_tDEA5BCF1CBB2F6FFCCC32DB58E3DB05C14F211CC_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->set_IsAbstractOrInterface_14((bool)G_B9_0);
		// CanBeNull |= IsNullable;
		bool L_37 = ((RuntimeTypeInfoCache_1_tDEA5BCF1CBB2F6FFCCC32DB58E3DB05C14F211CC_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->get_CanBeNull_11();
		bool L_38 = ((RuntimeTypeInfoCache_1_tDEA5BCF1CBB2F6FFCCC32DB58E3DB05C14F211CC_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->get_IsNullable_7();
		((RuntimeTypeInfoCache_1_tDEA5BCF1CBB2F6FFCCC32DB58E3DB05C14F211CC_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->set_CanBeNull_11((bool)((int32_t)((int32_t)L_37|(int32_t)L_38)));
		// IsNullableOrEnum |= IsNullable;
		bool L_39 = ((RuntimeTypeInfoCache_1_tDEA5BCF1CBB2F6FFCCC32DB58E3DB05C14F211CC_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->get_IsNullableOrEnum_12();
		bool L_40 = ((RuntimeTypeInfoCache_1_tDEA5BCF1CBB2F6FFCCC32DB58E3DB05C14F211CC_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->get_IsNullable_7();
		((RuntimeTypeInfoCache_1_tDEA5BCF1CBB2F6FFCCC32DB58E3DB05C14F211CC_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->set_IsNullableOrEnum_12((bool)((int32_t)((int32_t)L_39|(int32_t)L_40)));
		// IsLazyLoadReference = type.IsGenericType && type.GetGenericTypeDefinition() == typeof(UnityEngine.LazyLoadReference<>);
		Type_t * L_41 = V_0;
		NullCheck((Type_t *)L_41);
		bool L_42;
		L_42 = VirtFuncInvoker0< bool >::Invoke(71 /* System.Boolean System.Type::get_IsGenericType() */, (Type_t *)L_41);
		if (!L_42)
		{
			goto IL_0132;
		}
	}
	{
		Type_t * L_43 = V_0;
		NullCheck((Type_t *)L_43);
		Type_t * L_44;
		L_44 = VirtFuncInvoker0< Type_t * >::Invoke(96 /* System.Type System.Type::GetGenericTypeDefinition() */, (Type_t *)L_43);
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_45 = { reinterpret_cast<intptr_t> (LazyLoadReference_1_tA48C53B4B246BEF5D956E8AB23A2EC45C6C5C36E_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_46;
		L_46 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_45, /*hidden argument*/NULL);
		bool L_47;
		L_47 = Type_op_Equality_mA438719A1FDF103C7BBBB08AEF564E7FAEEA0046((Type_t *)L_44, (Type_t *)L_46, /*hidden argument*/NULL);
		G_B12_0 = ((int32_t)(L_47));
		goto IL_0133;
	}

IL_0132:
	{
		G_B12_0 = 0;
	}

IL_0133:
	{
		((RuntimeTypeInfoCache_1_tDEA5BCF1CBB2F6FFCCC32DB58E3DB05C14F211CC_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->set_IsLazyLoadReference_15((bool)G_B12_0);
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
// System.Void Unity.Properties.Internal.RuntimeTypeInfoCache`1<UnityEngine.RectInt>::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RuntimeTypeInfoCache_1__cctor_mE007B614A9EE4614E8D61FCB3F61E9E9A6F061C6_gshared (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CustomAttributeExtensions_GetCustomAttribute_TisFlagsAttribute_t511C558FACEF1CC64702A8FAB67CAF3CBA65DF36_m2724CDFC73603733A936D82E548753DEAD4C0363_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LazyLoadReference_1_tA48C53B4B246BEF5D956E8AB23A2EC45C6C5C36E_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Type_t * V_0 = NULL;
	int32_t G_B3_0 = 0;
	int32_t G_B6_0 = 0;
	int32_t G_B9_0 = 0;
	int32_t G_B12_0 = 0;
	{
		// var type = typeof(T);
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_0 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->klass)->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1;
		L_1 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_0, /*hidden argument*/NULL);
		V_0 = (Type_t *)L_1;
		// IsValueType = type.IsValueType;
		Type_t * L_2 = V_0;
		NullCheck((Type_t *)L_2);
		bool L_3;
		L_3 = Type_get_IsValueType_m9CCCB4759C2D5A890096F8DBA66DAAEFE9D913FB((Type_t *)L_2, /*hidden argument*/NULL);
		((RuntimeTypeInfoCache_1_tCD8F6087609BE80511DC89FA27BB42860F87EF26_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->set_IsValueType_0(L_3);
		// IsPrimitive = type.IsPrimitive;
		Type_t * L_4 = V_0;
		NullCheck((Type_t *)L_4);
		bool L_5;
		L_5 = Type_get_IsPrimitive_m43E50D507C45CE3BD51C0DC07C8AB061AFD6B3C3((Type_t *)L_4, /*hidden argument*/NULL);
		((RuntimeTypeInfoCache_1_tCD8F6087609BE80511DC89FA27BB42860F87EF26_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->set_IsPrimitive_1(L_5);
		// IsInterface = type.IsInterface;
		Type_t * L_6 = V_0;
		NullCheck((Type_t *)L_6);
		bool L_7;
		L_7 = Type_get_IsInterface_mB10C34DEE8B22E1597C813211BBED17DD724FC07((Type_t *)L_6, /*hidden argument*/NULL);
		((RuntimeTypeInfoCache_1_tCD8F6087609BE80511DC89FA27BB42860F87EF26_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->set_IsInterface_2(L_7);
		// IsAbstract = type.IsAbstract;
		Type_t * L_8 = V_0;
		NullCheck((Type_t *)L_8);
		bool L_9;
		L_9 = Type_get_IsAbstract_mB16DB56FCABF55740019D32C5286F38E30CAA19F((Type_t *)L_8, /*hidden argument*/NULL);
		((RuntimeTypeInfoCache_1_tCD8F6087609BE80511DC89FA27BB42860F87EF26_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->set_IsAbstract_3(L_9);
		// IsArray = type.IsArray;
		Type_t * L_10 = V_0;
		NullCheck((Type_t *)L_10);
		bool L_11;
		L_11 = Type_get_IsArray_m15FE83DD8FAF090F9BDA924753C7750AAEA7CFD1((Type_t *)L_10, /*hidden argument*/NULL);
		((RuntimeTypeInfoCache_1_tCD8F6087609BE80511DC89FA27BB42860F87EF26_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->set_IsArray_4(L_11);
		// IsEnum = type.IsEnum;
		Type_t * L_12 = V_0;
		NullCheck((Type_t *)L_12);
		bool L_13;
		L_13 = VirtFuncInvoker0< bool >::Invoke(67 /* System.Boolean System.Type::get_IsEnum() */, (Type_t *)L_12);
		((RuntimeTypeInfoCache_1_tCD8F6087609BE80511DC89FA27BB42860F87EF26_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->set_IsEnum_5(L_13);
		// IsEnumFlags = IsEnum && null != type.GetCustomAttribute<FlagsAttribute>();
		bool L_14 = ((RuntimeTypeInfoCache_1_tCD8F6087609BE80511DC89FA27BB42860F87EF26_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->get_IsEnum_5();
		if (!L_14)
		{
			goto IL_005f;
		}
	}
	{
		Type_t * L_15 = V_0;
		FlagsAttribute_t511C558FACEF1CC64702A8FAB67CAF3CBA65DF36 * L_16;
		L_16 = CustomAttributeExtensions_GetCustomAttribute_TisFlagsAttribute_t511C558FACEF1CC64702A8FAB67CAF3CBA65DF36_m2724CDFC73603733A936D82E548753DEAD4C0363((MemberInfo_t *)L_15, /*hidden argument*/CustomAttributeExtensions_GetCustomAttribute_TisFlagsAttribute_t511C558FACEF1CC64702A8FAB67CAF3CBA65DF36_m2724CDFC73603733A936D82E548753DEAD4C0363_RuntimeMethod_var);
		G_B3_0 = ((!(((RuntimeObject*)(FlagsAttribute_t511C558FACEF1CC64702A8FAB67CAF3CBA65DF36 *)L_16) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		goto IL_0060;
	}

IL_005f:
	{
		G_B3_0 = 0;
	}

IL_0060:
	{
		((RuntimeTypeInfoCache_1_tCD8F6087609BE80511DC89FA27BB42860F87EF26_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->set_IsEnumFlags_6((bool)G_B3_0);
		// IsNullable = Nullable.GetUnderlyingType(typeof(T)) != null;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_17 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->klass)->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_18;
		L_18 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_17, /*hidden argument*/NULL);
		Type_t * L_19;
		L_19 = Nullable_GetUnderlyingType_mC5699E7E11E1AFE25365CAB564A48F0193318629((Type_t *)L_18, /*hidden argument*/NULL);
		bool L_20;
		L_20 = Type_op_Inequality_m6DDC5E923203A79BF505F9275B694AD3FAA36DB0((Type_t *)L_19, (Type_t *)NULL, /*hidden argument*/NULL);
		((RuntimeTypeInfoCache_1_tCD8F6087609BE80511DC89FA27BB42860F87EF26_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->set_IsNullable_7(L_20);
		// IsObjectType = type == typeof(object);
		Type_t * L_21 = V_0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_22 = { reinterpret_cast<intptr_t> (RuntimeObject_0_0_0_var) };
		Type_t * L_23;
		L_23 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_22, /*hidden argument*/NULL);
		bool L_24;
		L_24 = Type_op_Equality_mA438719A1FDF103C7BBBB08AEF564E7FAEEA0046((Type_t *)L_21, (Type_t *)L_23, /*hidden argument*/NULL);
		((RuntimeTypeInfoCache_1_tCD8F6087609BE80511DC89FA27BB42860F87EF26_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->set_IsObjectType_8(L_24);
		// IsStringType = type == typeof(string);
		Type_t * L_25 = V_0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_26 = { reinterpret_cast<intptr_t> (String_t_0_0_0_var) };
		Type_t * L_27;
		L_27 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_26, /*hidden argument*/NULL);
		bool L_28;
		L_28 = Type_op_Equality_mA438719A1FDF103C7BBBB08AEF564E7FAEEA0046((Type_t *)L_25, (Type_t *)L_27, /*hidden argument*/NULL);
		((RuntimeTypeInfoCache_1_tCD8F6087609BE80511DC89FA27BB42860F87EF26_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->set_IsStringType_9(L_28);
		// IsContainerType = RuntimeTypeInfoCache.IsContainerType(type);
		Type_t * L_29 = V_0;
		bool L_30;
		L_30 = RuntimeTypeInfoCache_IsContainerType_m83F2173E5EB11D908CC3BA99C89B4B65B64EAA96((Type_t *)L_29, /*hidden argument*/NULL);
		((RuntimeTypeInfoCache_1_tCD8F6087609BE80511DC89FA27BB42860F87EF26_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->set_IsContainerType_10(L_30);
		// CanBeNull = !IsValueType;
		bool L_31 = ((RuntimeTypeInfoCache_1_tCD8F6087609BE80511DC89FA27BB42860F87EF26_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->get_IsValueType_0();
		((RuntimeTypeInfoCache_1_tCD8F6087609BE80511DC89FA27BB42860F87EF26_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->set_CanBeNull_11((bool)((((int32_t)L_31) == ((int32_t)0))? 1 : 0));
		// IsNullableOrEnum = IsEnum;
		bool L_32 = ((RuntimeTypeInfoCache_1_tCD8F6087609BE80511DC89FA27BB42860F87EF26_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->get_IsEnum_5();
		((RuntimeTypeInfoCache_1_tCD8F6087609BE80511DC89FA27BB42860F87EF26_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->set_IsNullableOrEnum_12(L_32);
		// IsPrimitiveOrString = IsPrimitive || IsStringType;
		bool L_33 = ((RuntimeTypeInfoCache_1_tCD8F6087609BE80511DC89FA27BB42860F87EF26_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->get_IsPrimitive_1();
		if (L_33)
		{
			goto IL_00d9;
		}
	}
	{
		bool L_34 = ((RuntimeTypeInfoCache_1_tCD8F6087609BE80511DC89FA27BB42860F87EF26_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->get_IsStringType_9();
		G_B6_0 = ((int32_t)(L_34));
		goto IL_00da;
	}

IL_00d9:
	{
		G_B6_0 = 1;
	}

IL_00da:
	{
		((RuntimeTypeInfoCache_1_tCD8F6087609BE80511DC89FA27BB42860F87EF26_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->set_IsPrimitiveOrString_13((bool)G_B6_0);
		// IsAbstractOrInterface = IsAbstract || IsInterface;
		bool L_35 = ((RuntimeTypeInfoCache_1_tCD8F6087609BE80511DC89FA27BB42860F87EF26_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->get_IsAbstract_3();
		if (L_35)
		{
			goto IL_00ed;
		}
	}
	{
		bool L_36 = ((RuntimeTypeInfoCache_1_tCD8F6087609BE80511DC89FA27BB42860F87EF26_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->get_IsInterface_2();
		G_B9_0 = ((int32_t)(L_36));
		goto IL_00ee;
	}

IL_00ed:
	{
		G_B9_0 = 1;
	}

IL_00ee:
	{
		((RuntimeTypeInfoCache_1_tCD8F6087609BE80511DC89FA27BB42860F87EF26_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->set_IsAbstractOrInterface_14((bool)G_B9_0);
		// CanBeNull |= IsNullable;
		bool L_37 = ((RuntimeTypeInfoCache_1_tCD8F6087609BE80511DC89FA27BB42860F87EF26_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->get_CanBeNull_11();
		bool L_38 = ((RuntimeTypeInfoCache_1_tCD8F6087609BE80511DC89FA27BB42860F87EF26_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->get_IsNullable_7();
		((RuntimeTypeInfoCache_1_tCD8F6087609BE80511DC89FA27BB42860F87EF26_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->set_CanBeNull_11((bool)((int32_t)((int32_t)L_37|(int32_t)L_38)));
		// IsNullableOrEnum |= IsNullable;
		bool L_39 = ((RuntimeTypeInfoCache_1_tCD8F6087609BE80511DC89FA27BB42860F87EF26_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->get_IsNullableOrEnum_12();
		bool L_40 = ((RuntimeTypeInfoCache_1_tCD8F6087609BE80511DC89FA27BB42860F87EF26_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->get_IsNullable_7();
		((RuntimeTypeInfoCache_1_tCD8F6087609BE80511DC89FA27BB42860F87EF26_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->set_IsNullableOrEnum_12((bool)((int32_t)((int32_t)L_39|(int32_t)L_40)));
		// IsLazyLoadReference = type.IsGenericType && type.GetGenericTypeDefinition() == typeof(UnityEngine.LazyLoadReference<>);
		Type_t * L_41 = V_0;
		NullCheck((Type_t *)L_41);
		bool L_42;
		L_42 = VirtFuncInvoker0< bool >::Invoke(71 /* System.Boolean System.Type::get_IsGenericType() */, (Type_t *)L_41);
		if (!L_42)
		{
			goto IL_0132;
		}
	}
	{
		Type_t * L_43 = V_0;
		NullCheck((Type_t *)L_43);
		Type_t * L_44;
		L_44 = VirtFuncInvoker0< Type_t * >::Invoke(96 /* System.Type System.Type::GetGenericTypeDefinition() */, (Type_t *)L_43);
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_45 = { reinterpret_cast<intptr_t> (LazyLoadReference_1_tA48C53B4B246BEF5D956E8AB23A2EC45C6C5C36E_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_46;
		L_46 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_45, /*hidden argument*/NULL);
		bool L_47;
		L_47 = Type_op_Equality_mA438719A1FDF103C7BBBB08AEF564E7FAEEA0046((Type_t *)L_44, (Type_t *)L_46, /*hidden argument*/NULL);
		G_B12_0 = ((int32_t)(L_47));
		goto IL_0133;
	}

IL_0132:
	{
		G_B12_0 = 0;
	}

IL_0133:
	{
		((RuntimeTypeInfoCache_1_tCD8F6087609BE80511DC89FA27BB42860F87EF26_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->set_IsLazyLoadReference_15((bool)G_B12_0);
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
// System.Void Unity.Properties.Internal.RuntimeTypeInfoCache`1<System.SByte>::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RuntimeTypeInfoCache_1__cctor_mBA4A5BCB20574146311726F63DDC255CD6EEC929_gshared (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CustomAttributeExtensions_GetCustomAttribute_TisFlagsAttribute_t511C558FACEF1CC64702A8FAB67CAF3CBA65DF36_m2724CDFC73603733A936D82E548753DEAD4C0363_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LazyLoadReference_1_tA48C53B4B246BEF5D956E8AB23A2EC45C6C5C36E_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Type_t * V_0 = NULL;
	int32_t G_B3_0 = 0;
	int32_t G_B6_0 = 0;
	int32_t G_B9_0 = 0;
	int32_t G_B12_0 = 0;
	{
		// var type = typeof(T);
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_0 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->klass)->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1;
		L_1 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_0, /*hidden argument*/NULL);
		V_0 = (Type_t *)L_1;
		// IsValueType = type.IsValueType;
		Type_t * L_2 = V_0;
		NullCheck((Type_t *)L_2);
		bool L_3;
		L_3 = Type_get_IsValueType_m9CCCB4759C2D5A890096F8DBA66DAAEFE9D913FB((Type_t *)L_2, /*hidden argument*/NULL);
		((RuntimeTypeInfoCache_1_t3E32375AC17FC261A60528D693133C55E99BF752_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->set_IsValueType_0(L_3);
		// IsPrimitive = type.IsPrimitive;
		Type_t * L_4 = V_0;
		NullCheck((Type_t *)L_4);
		bool L_5;
		L_5 = Type_get_IsPrimitive_m43E50D507C45CE3BD51C0DC07C8AB061AFD6B3C3((Type_t *)L_4, /*hidden argument*/NULL);
		((RuntimeTypeInfoCache_1_t3E32375AC17FC261A60528D693133C55E99BF752_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->set_IsPrimitive_1(L_5);
		// IsInterface = type.IsInterface;
		Type_t * L_6 = V_0;
		NullCheck((Type_t *)L_6);
		bool L_7;
		L_7 = Type_get_IsInterface_mB10C34DEE8B22E1597C813211BBED17DD724FC07((Type_t *)L_6, /*hidden argument*/NULL);
		((RuntimeTypeInfoCache_1_t3E32375AC17FC261A60528D693133C55E99BF752_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->set_IsInterface_2(L_7);
		// IsAbstract = type.IsAbstract;
		Type_t * L_8 = V_0;
		NullCheck((Type_t *)L_8);
		bool L_9;
		L_9 = Type_get_IsAbstract_mB16DB56FCABF55740019D32C5286F38E30CAA19F((Type_t *)L_8, /*hidden argument*/NULL);
		((RuntimeTypeInfoCache_1_t3E32375AC17FC261A60528D693133C55E99BF752_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->set_IsAbstract_3(L_9);
		// IsArray = type.IsArray;
		Type_t * L_10 = V_0;
		NullCheck((Type_t *)L_10);
		bool L_11;
		L_11 = Type_get_IsArray_m15FE83DD8FAF090F9BDA924753C7750AAEA7CFD1((Type_t *)L_10, /*hidden argument*/NULL);
		((RuntimeTypeInfoCache_1_t3E32375AC17FC261A60528D693133C55E99BF752_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->set_IsArray_4(L_11);
		// IsEnum = type.IsEnum;
		Type_t * L_12 = V_0;
		NullCheck((Type_t *)L_12);
		bool L_13;
		L_13 = VirtFuncInvoker0< bool >::Invoke(67 /* System.Boolean System.Type::get_IsEnum() */, (Type_t *)L_12);
		((RuntimeTypeInfoCache_1_t3E32375AC17FC261A60528D693133C55E99BF752_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->set_IsEnum_5(L_13);
		// IsEnumFlags = IsEnum && null != type.GetCustomAttribute<FlagsAttribute>();
		bool L_14 = ((RuntimeTypeInfoCache_1_t3E32375AC17FC261A60528D693133C55E99BF752_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->get_IsEnum_5();
		if (!L_14)
		{
			goto IL_005f;
		}
	}
	{
		Type_t * L_15 = V_0;
		FlagsAttribute_t511C558FACEF1CC64702A8FAB67CAF3CBA65DF36 * L_16;
		L_16 = CustomAttributeExtensions_GetCustomAttribute_TisFlagsAttribute_t511C558FACEF1CC64702A8FAB67CAF3CBA65DF36_m2724CDFC73603733A936D82E548753DEAD4C0363((MemberInfo_t *)L_15, /*hidden argument*/CustomAttributeExtensions_GetCustomAttribute_TisFlagsAttribute_t511C558FACEF1CC64702A8FAB67CAF3CBA65DF36_m2724CDFC73603733A936D82E548753DEAD4C0363_RuntimeMethod_var);
		G_B3_0 = ((!(((RuntimeObject*)(FlagsAttribute_t511C558FACEF1CC64702A8FAB67CAF3CBA65DF36 *)L_16) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		goto IL_0060;
	}

IL_005f:
	{
		G_B3_0 = 0;
	}

IL_0060:
	{
		((RuntimeTypeInfoCache_1_t3E32375AC17FC261A60528D693133C55E99BF752_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->set_IsEnumFlags_6((bool)G_B3_0);
		// IsNullable = Nullable.GetUnderlyingType(typeof(T)) != null;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_17 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->klass)->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_18;
		L_18 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_17, /*hidden argument*/NULL);
		Type_t * L_19;
		L_19 = Nullable_GetUnderlyingType_mC5699E7E11E1AFE25365CAB564A48F0193318629((Type_t *)L_18, /*hidden argument*/NULL);
		bool L_20;
		L_20 = Type_op_Inequality_m6DDC5E923203A79BF505F9275B694AD3FAA36DB0((Type_t *)L_19, (Type_t *)NULL, /*hidden argument*/NULL);
		((RuntimeTypeInfoCache_1_t3E32375AC17FC261A60528D693133C55E99BF752_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->set_IsNullable_7(L_20);
		// IsObjectType = type == typeof(object);
		Type_t * L_21 = V_0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_22 = { reinterpret_cast<intptr_t> (RuntimeObject_0_0_0_var) };
		Type_t * L_23;
		L_23 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_22, /*hidden argument*/NULL);
		bool L_24;
		L_24 = Type_op_Equality_mA438719A1FDF103C7BBBB08AEF564E7FAEEA0046((Type_t *)L_21, (Type_t *)L_23, /*hidden argument*/NULL);
		((RuntimeTypeInfoCache_1_t3E32375AC17FC261A60528D693133C55E99BF752_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->set_IsObjectType_8(L_24);
		// IsStringType = type == typeof(string);
		Type_t * L_25 = V_0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_26 = { reinterpret_cast<intptr_t> (String_t_0_0_0_var) };
		Type_t * L_27;
		L_27 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_26, /*hidden argument*/NULL);
		bool L_28;
		L_28 = Type_op_Equality_mA438719A1FDF103C7BBBB08AEF564E7FAEEA0046((Type_t *)L_25, (Type_t *)L_27, /*hidden argument*/NULL);
		((RuntimeTypeInfoCache_1_t3E32375AC17FC261A60528D693133C55E99BF752_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->set_IsStringType_9(L_28);
		// IsContainerType = RuntimeTypeInfoCache.IsContainerType(type);
		Type_t * L_29 = V_0;
		bool L_30;
		L_30 = RuntimeTypeInfoCache_IsContainerType_m83F2173E5EB11D908CC3BA99C89B4B65B64EAA96((Type_t *)L_29, /*hidden argument*/NULL);
		((RuntimeTypeInfoCache_1_t3E32375AC17FC261A60528D693133C55E99BF752_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->set_IsContainerType_10(L_30);
		// CanBeNull = !IsValueType;
		bool L_31 = ((RuntimeTypeInfoCache_1_t3E32375AC17FC261A60528D693133C55E99BF752_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->get_IsValueType_0();
		((RuntimeTypeInfoCache_1_t3E32375AC17FC261A60528D693133C55E99BF752_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->set_CanBeNull_11((bool)((((int32_t)L_31) == ((int32_t)0))? 1 : 0));
		// IsNullableOrEnum = IsEnum;
		bool L_32 = ((RuntimeTypeInfoCache_1_t3E32375AC17FC261A60528D693133C55E99BF752_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->get_IsEnum_5();
		((RuntimeTypeInfoCache_1_t3E32375AC17FC261A60528D693133C55E99BF752_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->set_IsNullableOrEnum_12(L_32);
		// IsPrimitiveOrString = IsPrimitive || IsStringType;
		bool L_33 = ((RuntimeTypeInfoCache_1_t3E32375AC17FC261A60528D693133C55E99BF752_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->get_IsPrimitive_1();
		if (L_33)
		{
			goto IL_00d9;
		}
	}
	{
		bool L_34 = ((RuntimeTypeInfoCache_1_t3E32375AC17FC261A60528D693133C55E99BF752_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->get_IsStringType_9();
		G_B6_0 = ((int32_t)(L_34));
		goto IL_00da;
	}

IL_00d9:
	{
		G_B6_0 = 1;
	}

IL_00da:
	{
		((RuntimeTypeInfoCache_1_t3E32375AC17FC261A60528D693133C55E99BF752_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->set_IsPrimitiveOrString_13((bool)G_B6_0);
		// IsAbstractOrInterface = IsAbstract || IsInterface;
		bool L_35 = ((RuntimeTypeInfoCache_1_t3E32375AC17FC261A60528D693133C55E99BF752_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->get_IsAbstract_3();
		if (L_35)
		{
			goto IL_00ed;
		}
	}
	{
		bool L_36 = ((RuntimeTypeInfoCache_1_t3E32375AC17FC261A60528D693133C55E99BF752_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->get_IsInterface_2();
		G_B9_0 = ((int32_t)(L_36));
		goto IL_00ee;
	}

IL_00ed:
	{
		G_B9_0 = 1;
	}

IL_00ee:
	{
		((RuntimeTypeInfoCache_1_t3E32375AC17FC261A60528D693133C55E99BF752_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->set_IsAbstractOrInterface_14((bool)G_B9_0);
		// CanBeNull |= IsNullable;
		bool L_37 = ((RuntimeTypeInfoCache_1_t3E32375AC17FC261A60528D693133C55E99BF752_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->get_CanBeNull_11();
		bool L_38 = ((RuntimeTypeInfoCache_1_t3E32375AC17FC261A60528D693133C55E99BF752_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->get_IsNullable_7();
		((RuntimeTypeInfoCache_1_t3E32375AC17FC261A60528D693133C55E99BF752_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->set_CanBeNull_11((bool)((int32_t)((int32_t)L_37|(int32_t)L_38)));
		// IsNullableOrEnum |= IsNullable;
		bool L_39 = ((RuntimeTypeInfoCache_1_t3E32375AC17FC261A60528D693133C55E99BF752_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->get_IsNullableOrEnum_12();
		bool L_40 = ((RuntimeTypeInfoCache_1_t3E32375AC17FC261A60528D693133C55E99BF752_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->get_IsNullable_7();
		((RuntimeTypeInfoCache_1_t3E32375AC17FC261A60528D693133C55E99BF752_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->set_IsNullableOrEnum_12((bool)((int32_t)((int32_t)L_39|(int32_t)L_40)));
		// IsLazyLoadReference = type.IsGenericType && type.GetGenericTypeDefinition() == typeof(UnityEngine.LazyLoadReference<>);
		Type_t * L_41 = V_0;
		NullCheck((Type_t *)L_41);
		bool L_42;
		L_42 = VirtFuncInvoker0< bool >::Invoke(71 /* System.Boolean System.Type::get_IsGenericType() */, (Type_t *)L_41);
		if (!L_42)
		{
			goto IL_0132;
		}
	}
	{
		Type_t * L_43 = V_0;
		NullCheck((Type_t *)L_43);
		Type_t * L_44;
		L_44 = VirtFuncInvoker0< Type_t * >::Invoke(96 /* System.Type System.Type::GetGenericTypeDefinition() */, (Type_t *)L_43);
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_45 = { reinterpret_cast<intptr_t> (LazyLoadReference_1_tA48C53B4B246BEF5D956E8AB23A2EC45C6C5C36E_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_46;
		L_46 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_45, /*hidden argument*/NULL);
		bool L_47;
		L_47 = Type_op_Equality_mA438719A1FDF103C7BBBB08AEF564E7FAEEA0046((Type_t *)L_44, (Type_t *)L_46, /*hidden argument*/NULL);
		G_B12_0 = ((int32_t)(L_47));
		goto IL_0133;
	}

IL_0132:
	{
		G_B12_0 = 0;
	}

IL_0133:
	{
		((RuntimeTypeInfoCache_1_t3E32375AC17FC261A60528D693133C55E99BF752_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->set_IsLazyLoadReference_15((bool)G_B12_0);
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
// System.Void Unity.Properties.Internal.RuntimeTypeInfoCache`1<System.Single>::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RuntimeTypeInfoCache_1__cctor_m88BDFBE6951973156ADADA9ACE54BEA0D4344780_gshared (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CustomAttributeExtensions_GetCustomAttribute_TisFlagsAttribute_t511C558FACEF1CC64702A8FAB67CAF3CBA65DF36_m2724CDFC73603733A936D82E548753DEAD4C0363_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LazyLoadReference_1_tA48C53B4B246BEF5D956E8AB23A2EC45C6C5C36E_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Type_t * V_0 = NULL;
	int32_t G_B3_0 = 0;
	int32_t G_B6_0 = 0;
	int32_t G_B9_0 = 0;
	int32_t G_B12_0 = 0;
	{
		// var type = typeof(T);
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_0 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->klass)->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1;
		L_1 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_0, /*hidden argument*/NULL);
		V_0 = (Type_t *)L_1;
		// IsValueType = type.IsValueType;
		Type_t * L_2 = V_0;
		NullCheck((Type_t *)L_2);
		bool L_3;
		L_3 = Type_get_IsValueType_m9CCCB4759C2D5A890096F8DBA66DAAEFE9D913FB((Type_t *)L_2, /*hidden argument*/NULL);
		((RuntimeTypeInfoCache_1_tA9FD23B4AECF85CEF1CA99871D7A54952239E24A_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->set_IsValueType_0(L_3);
		// IsPrimitive = type.IsPrimitive;
		Type_t * L_4 = V_0;
		NullCheck((Type_t *)L_4);
		bool L_5;
		L_5 = Type_get_IsPrimitive_m43E50D507C45CE3BD51C0DC07C8AB061AFD6B3C3((Type_t *)L_4, /*hidden argument*/NULL);
		((RuntimeTypeInfoCache_1_tA9FD23B4AECF85CEF1CA99871D7A54952239E24A_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->set_IsPrimitive_1(L_5);
		// IsInterface = type.IsInterface;
		Type_t * L_6 = V_0;
		NullCheck((Type_t *)L_6);
		bool L_7;
		L_7 = Type_get_IsInterface_mB10C34DEE8B22E1597C813211BBED17DD724FC07((Type_t *)L_6, /*hidden argument*/NULL);
		((RuntimeTypeInfoCache_1_tA9FD23B4AECF85CEF1CA99871D7A54952239E24A_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->set_IsInterface_2(L_7);
		// IsAbstract = type.IsAbstract;
		Type_t * L_8 = V_0;
		NullCheck((Type_t *)L_8);
		bool L_9;
		L_9 = Type_get_IsAbstract_mB16DB56FCABF55740019D32C5286F38E30CAA19F((Type_t *)L_8, /*hidden argument*/NULL);
		((RuntimeTypeInfoCache_1_tA9FD23B4AECF85CEF1CA99871D7A54952239E24A_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->set_IsAbstract_3(L_9);
		// IsArray = type.IsArray;
		Type_t * L_10 = V_0;
		NullCheck((Type_t *)L_10);
		bool L_11;
		L_11 = Type_get_IsArray_m15FE83DD8FAF090F9BDA924753C7750AAEA7CFD1((Type_t *)L_10, /*hidden argument*/NULL);
		((RuntimeTypeInfoCache_1_tA9FD23B4AECF85CEF1CA99871D7A54952239E24A_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->set_IsArray_4(L_11);
		// IsEnum = type.IsEnum;
		Type_t * L_12 = V_0;
		NullCheck((Type_t *)L_12);
		bool L_13;
		L_13 = VirtFuncInvoker0< bool >::Invoke(67 /* System.Boolean System.Type::get_IsEnum() */, (Type_t *)L_12);
		((RuntimeTypeInfoCache_1_tA9FD23B4AECF85CEF1CA99871D7A54952239E24A_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->set_IsEnum_5(L_13);
		// IsEnumFlags = IsEnum && null != type.GetCustomAttribute<FlagsAttribute>();
		bool L_14 = ((RuntimeTypeInfoCache_1_tA9FD23B4AECF85CEF1CA99871D7A54952239E24A_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->get_IsEnum_5();
		if (!L_14)
		{
			goto IL_005f;
		}
	}
	{
		Type_t * L_15 = V_0;
		FlagsAttribute_t511C558FACEF1CC64702A8FAB67CAF3CBA65DF36 * L_16;
		L_16 = CustomAttributeExtensions_GetCustomAttribute_TisFlagsAttribute_t511C558FACEF1CC64702A8FAB67CAF3CBA65DF36_m2724CDFC73603733A936D82E548753DEAD4C0363((MemberInfo_t *)L_15, /*hidden argument*/CustomAttributeExtensions_GetCustomAttribute_TisFlagsAttribute_t511C558FACEF1CC64702A8FAB67CAF3CBA65DF36_m2724CDFC73603733A936D82E548753DEAD4C0363_RuntimeMethod_var);
		G_B3_0 = ((!(((RuntimeObject*)(FlagsAttribute_t511C558FACEF1CC64702A8FAB67CAF3CBA65DF36 *)L_16) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		goto IL_0060;
	}

IL_005f:
	{
		G_B3_0 = 0;
	}

IL_0060:
	{
		((RuntimeTypeInfoCache_1_tA9FD23B4AECF85CEF1CA99871D7A54952239E24A_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->set_IsEnumFlags_6((bool)G_B3_0);
		// IsNullable = Nullable.GetUnderlyingType(typeof(T)) != null;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_17 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->klass)->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_18;
		L_18 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_17, /*hidden argument*/NULL);
		Type_t * L_19;
		L_19 = Nullable_GetUnderlyingType_mC5699E7E11E1AFE25365CAB564A48F0193318629((Type_t *)L_18, /*hidden argument*/NULL);
		bool L_20;
		L_20 = Type_op_Inequality_m6DDC5E923203A79BF505F9275B694AD3FAA36DB0((Type_t *)L_19, (Type_t *)NULL, /*hidden argument*/NULL);
		((RuntimeTypeInfoCache_1_tA9FD23B4AECF85CEF1CA99871D7A54952239E24A_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->set_IsNullable_7(L_20);
		// IsObjectType = type == typeof(object);
		Type_t * L_21 = V_0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_22 = { reinterpret_cast<intptr_t> (RuntimeObject_0_0_0_var) };
		Type_t * L_23;
		L_23 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_22, /*hidden argument*/NULL);
		bool L_24;
		L_24 = Type_op_Equality_mA438719A1FDF103C7BBBB08AEF564E7FAEEA0046((Type_t *)L_21, (Type_t *)L_23, /*hidden argument*/NULL);
		((RuntimeTypeInfoCache_1_tA9FD23B4AECF85CEF1CA99871D7A54952239E24A_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->set_IsObjectType_8(L_24);
		// IsStringType = type == typeof(string);
		Type_t * L_25 = V_0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_26 = { reinterpret_cast<intptr_t> (String_t_0_0_0_var) };
		Type_t * L_27;
		L_27 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_26, /*hidden argument*/NULL);
		bool L_28;
		L_28 = Type_op_Equality_mA438719A1FDF103C7BBBB08AEF564E7FAEEA0046((Type_t *)L_25, (Type_t *)L_27, /*hidden argument*/NULL);
		((RuntimeTypeInfoCache_1_tA9FD23B4AECF85CEF1CA99871D7A54952239E24A_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->set_IsStringType_9(L_28);
		// IsContainerType = RuntimeTypeInfoCache.IsContainerType(type);
		Type_t * L_29 = V_0;
		bool L_30;
		L_30 = RuntimeTypeInfoCache_IsContainerType_m83F2173E5EB11D908CC3BA99C89B4B65B64EAA96((Type_t *)L_29, /*hidden argument*/NULL);
		((RuntimeTypeInfoCache_1_tA9FD23B4AECF85CEF1CA99871D7A54952239E24A_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->set_IsContainerType_10(L_30);
		// CanBeNull = !IsValueType;
		bool L_31 = ((RuntimeTypeInfoCache_1_tA9FD23B4AECF85CEF1CA99871D7A54952239E24A_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->get_IsValueType_0();
		((RuntimeTypeInfoCache_1_tA9FD23B4AECF85CEF1CA99871D7A54952239E24A_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->set_CanBeNull_11((bool)((((int32_t)L_31) == ((int32_t)0))? 1 : 0));
		// IsNullableOrEnum = IsEnum;
		bool L_32 = ((RuntimeTypeInfoCache_1_tA9FD23B4AECF85CEF1CA99871D7A54952239E24A_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->get_IsEnum_5();
		((RuntimeTypeInfoCache_1_tA9FD23B4AECF85CEF1CA99871D7A54952239E24A_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->set_IsNullableOrEnum_12(L_32);
		// IsPrimitiveOrString = IsPrimitive || IsStringType;
		bool L_33 = ((RuntimeTypeInfoCache_1_tA9FD23B4AECF85CEF1CA99871D7A54952239E24A_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->get_IsPrimitive_1();
		if (L_33)
		{
			goto IL_00d9;
		}
	}
	{
		bool L_34 = ((RuntimeTypeInfoCache_1_tA9FD23B4AECF85CEF1CA99871D7A54952239E24A_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->get_IsStringType_9();
		G_B6_0 = ((int32_t)(L_34));
		goto IL_00da;
	}

IL_00d9:
	{
		G_B6_0 = 1;
	}

IL_00da:
	{
		((RuntimeTypeInfoCache_1_tA9FD23B4AECF85CEF1CA99871D7A54952239E24A_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->set_IsPrimitiveOrString_13((bool)G_B6_0);
		// IsAbstractOrInterface = IsAbstract || IsInterface;
		bool L_35 = ((RuntimeTypeInfoCache_1_tA9FD23B4AECF85CEF1CA99871D7A54952239E24A_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->get_IsAbstract_3();
		if (L_35)
		{
			goto IL_00ed;
		}
	}
	{
		bool L_36 = ((RuntimeTypeInfoCache_1_tA9FD23B4AECF85CEF1CA99871D7A54952239E24A_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->get_IsInterface_2();
		G_B9_0 = ((int32_t)(L_36));
		goto IL_00ee;
	}

IL_00ed:
	{
		G_B9_0 = 1;
	}

IL_00ee:
	{
		((RuntimeTypeInfoCache_1_tA9FD23B4AECF85CEF1CA99871D7A54952239E24A_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->set_IsAbstractOrInterface_14((bool)G_B9_0);
		// CanBeNull |= IsNullable;
		bool L_37 = ((RuntimeTypeInfoCache_1_tA9FD23B4AECF85CEF1CA99871D7A54952239E24A_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->get_CanBeNull_11();
		bool L_38 = ((RuntimeTypeInfoCache_1_tA9FD23B4AECF85CEF1CA99871D7A54952239E24A_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->get_IsNullable_7();
		((RuntimeTypeInfoCache_1_tA9FD23B4AECF85CEF1CA99871D7A54952239E24A_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->set_CanBeNull_11((bool)((int32_t)((int32_t)L_37|(int32_t)L_38)));
		// IsNullableOrEnum |= IsNullable;
		bool L_39 = ((RuntimeTypeInfoCache_1_tA9FD23B4AECF85CEF1CA99871D7A54952239E24A_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->get_IsNullableOrEnum_12();
		bool L_40 = ((RuntimeTypeInfoCache_1_tA9FD23B4AECF85CEF1CA99871D7A54952239E24A_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->get_IsNullable_7();
		((RuntimeTypeInfoCache_1_tA9FD23B4AECF85CEF1CA99871D7A54952239E24A_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->set_IsNullableOrEnum_12((bool)((int32_t)((int32_t)L_39|(int32_t)L_40)));
		// IsLazyLoadReference = type.IsGenericType && type.GetGenericTypeDefinition() == typeof(UnityEngine.LazyLoadReference<>);
		Type_t * L_41 = V_0;
		NullCheck((Type_t *)L_41);
		bool L_42;
		L_42 = VirtFuncInvoker0< bool >::Invoke(71 /* System.Boolean System.Type::get_IsGenericType() */, (Type_t *)L_41);
		if (!L_42)
		{
			goto IL_0132;
		}
	}
	{
		Type_t * L_43 = V_0;
		NullCheck((Type_t *)L_43);
		Type_t * L_44;
		L_44 = VirtFuncInvoker0< Type_t * >::Invoke(96 /* System.Type System.Type::GetGenericTypeDefinition() */, (Type_t *)L_43);
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_45 = { reinterpret_cast<intptr_t> (LazyLoadReference_1_tA48C53B4B246BEF5D956E8AB23A2EC45C6C5C36E_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_46;
		L_46 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_45, /*hidden argument*/NULL);
		bool L_47;
		L_47 = Type_op_Equality_mA438719A1FDF103C7BBBB08AEF564E7FAEEA0046((Type_t *)L_44, (Type_t *)L_46, /*hidden argument*/NULL);
		G_B12_0 = ((int32_t)(L_47));
		goto IL_0133;
	}

IL_0132:
	{
		G_B12_0 = 0;
	}

IL_0133:
	{
		((RuntimeTypeInfoCache_1_tA9FD23B4AECF85CEF1CA99871D7A54952239E24A_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->set_IsLazyLoadReference_15((bool)G_B12_0);
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
// System.Void Unity.Properties.Internal.RuntimeTypeInfoCache`1<System.UInt16>::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RuntimeTypeInfoCache_1__cctor_mC914E3CE9153339FE96A8898B08D11B1F1E530FD_gshared (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CustomAttributeExtensions_GetCustomAttribute_TisFlagsAttribute_t511C558FACEF1CC64702A8FAB67CAF3CBA65DF36_m2724CDFC73603733A936D82E548753DEAD4C0363_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LazyLoadReference_1_tA48C53B4B246BEF5D956E8AB23A2EC45C6C5C36E_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Type_t * V_0 = NULL;
	int32_t G_B3_0 = 0;
	int32_t G_B6_0 = 0;
	int32_t G_B9_0 = 0;
	int32_t G_B12_0 = 0;
	{
		// var type = typeof(T);
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_0 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->klass)->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1;
		L_1 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_0, /*hidden argument*/NULL);
		V_0 = (Type_t *)L_1;
		// IsValueType = type.IsValueType;
		Type_t * L_2 = V_0;
		NullCheck((Type_t *)L_2);
		bool L_3;
		L_3 = Type_get_IsValueType_m9CCCB4759C2D5A890096F8DBA66DAAEFE9D913FB((Type_t *)L_2, /*hidden argument*/NULL);
		((RuntimeTypeInfoCache_1_t87B88DEC770D4A09F7ABB17948676B0508444464_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->set_IsValueType_0(L_3);
		// IsPrimitive = type.IsPrimitive;
		Type_t * L_4 = V_0;
		NullCheck((Type_t *)L_4);
		bool L_5;
		L_5 = Type_get_IsPrimitive_m43E50D507C45CE3BD51C0DC07C8AB061AFD6B3C3((Type_t *)L_4, /*hidden argument*/NULL);
		((RuntimeTypeInfoCache_1_t87B88DEC770D4A09F7ABB17948676B0508444464_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->set_IsPrimitive_1(L_5);
		// IsInterface = type.IsInterface;
		Type_t * L_6 = V_0;
		NullCheck((Type_t *)L_6);
		bool L_7;
		L_7 = Type_get_IsInterface_mB10C34DEE8B22E1597C813211BBED17DD724FC07((Type_t *)L_6, /*hidden argument*/NULL);
		((RuntimeTypeInfoCache_1_t87B88DEC770D4A09F7ABB17948676B0508444464_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->set_IsInterface_2(L_7);
		// IsAbstract = type.IsAbstract;
		Type_t * L_8 = V_0;
		NullCheck((Type_t *)L_8);
		bool L_9;
		L_9 = Type_get_IsAbstract_mB16DB56FCABF55740019D32C5286F38E30CAA19F((Type_t *)L_8, /*hidden argument*/NULL);
		((RuntimeTypeInfoCache_1_t87B88DEC770D4A09F7ABB17948676B0508444464_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->set_IsAbstract_3(L_9);
		// IsArray = type.IsArray;
		Type_t * L_10 = V_0;
		NullCheck((Type_t *)L_10);
		bool L_11;
		L_11 = Type_get_IsArray_m15FE83DD8FAF090F9BDA924753C7750AAEA7CFD1((Type_t *)L_10, /*hidden argument*/NULL);
		((RuntimeTypeInfoCache_1_t87B88DEC770D4A09F7ABB17948676B0508444464_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->set_IsArray_4(L_11);
		// IsEnum = type.IsEnum;
		Type_t * L_12 = V_0;
		NullCheck((Type_t *)L_12);
		bool L_13;
		L_13 = VirtFuncInvoker0< bool >::Invoke(67 /* System.Boolean System.Type::get_IsEnum() */, (Type_t *)L_12);
		((RuntimeTypeInfoCache_1_t87B88DEC770D4A09F7ABB17948676B0508444464_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->set_IsEnum_5(L_13);
		// IsEnumFlags = IsEnum && null != type.GetCustomAttribute<FlagsAttribute>();
		bool L_14 = ((RuntimeTypeInfoCache_1_t87B88DEC770D4A09F7ABB17948676B0508444464_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->get_IsEnum_5();
		if (!L_14)
		{
			goto IL_005f;
		}
	}
	{
		Type_t * L_15 = V_0;
		FlagsAttribute_t511C558FACEF1CC64702A8FAB67CAF3CBA65DF36 * L_16;
		L_16 = CustomAttributeExtensions_GetCustomAttribute_TisFlagsAttribute_t511C558FACEF1CC64702A8FAB67CAF3CBA65DF36_m2724CDFC73603733A936D82E548753DEAD4C0363((MemberInfo_t *)L_15, /*hidden argument*/CustomAttributeExtensions_GetCustomAttribute_TisFlagsAttribute_t511C558FACEF1CC64702A8FAB67CAF3CBA65DF36_m2724CDFC73603733A936D82E548753DEAD4C0363_RuntimeMethod_var);
		G_B3_0 = ((!(((RuntimeObject*)(FlagsAttribute_t511C558FACEF1CC64702A8FAB67CAF3CBA65DF36 *)L_16) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		goto IL_0060;
	}

IL_005f:
	{
		G_B3_0 = 0;
	}

IL_0060:
	{
		((RuntimeTypeInfoCache_1_t87B88DEC770D4A09F7ABB17948676B0508444464_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->set_IsEnumFlags_6((bool)G_B3_0);
		// IsNullable = Nullable.GetUnderlyingType(typeof(T)) != null;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_17 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->klass)->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_18;
		L_18 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_17, /*hidden argument*/NULL);
		Type_t * L_19;
		L_19 = Nullable_GetUnderlyingType_mC5699E7E11E1AFE25365CAB564A48F0193318629((Type_t *)L_18, /*hidden argument*/NULL);
		bool L_20;
		L_20 = Type_op_Inequality_m6DDC5E923203A79BF505F9275B694AD3FAA36DB0((Type_t *)L_19, (Type_t *)NULL, /*hidden argument*/NULL);
		((RuntimeTypeInfoCache_1_t87B88DEC770D4A09F7ABB17948676B0508444464_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->set_IsNullable_7(L_20);
		// IsObjectType = type == typeof(object);
		Type_t * L_21 = V_0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_22 = { reinterpret_cast<intptr_t> (RuntimeObject_0_0_0_var) };
		Type_t * L_23;
		L_23 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_22, /*hidden argument*/NULL);
		bool L_24;
		L_24 = Type_op_Equality_mA438719A1FDF103C7BBBB08AEF564E7FAEEA0046((Type_t *)L_21, (Type_t *)L_23, /*hidden argument*/NULL);
		((RuntimeTypeInfoCache_1_t87B88DEC770D4A09F7ABB17948676B0508444464_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->set_IsObjectType_8(L_24);
		// IsStringType = type == typeof(string);
		Type_t * L_25 = V_0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_26 = { reinterpret_cast<intptr_t> (String_t_0_0_0_var) };
		Type_t * L_27;
		L_27 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_26, /*hidden argument*/NULL);
		bool L_28;
		L_28 = Type_op_Equality_mA438719A1FDF103C7BBBB08AEF564E7FAEEA0046((Type_t *)L_25, (Type_t *)L_27, /*hidden argument*/NULL);
		((RuntimeTypeInfoCache_1_t87B88DEC770D4A09F7ABB17948676B0508444464_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->set_IsStringType_9(L_28);
		// IsContainerType = RuntimeTypeInfoCache.IsContainerType(type);
		Type_t * L_29 = V_0;
		bool L_30;
		L_30 = RuntimeTypeInfoCache_IsContainerType_m83F2173E5EB11D908CC3BA99C89B4B65B64EAA96((Type_t *)L_29, /*hidden argument*/NULL);
		((RuntimeTypeInfoCache_1_t87B88DEC770D4A09F7ABB17948676B0508444464_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->set_IsContainerType_10(L_30);
		// CanBeNull = !IsValueType;
		bool L_31 = ((RuntimeTypeInfoCache_1_t87B88DEC770D4A09F7ABB17948676B0508444464_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->get_IsValueType_0();
		((RuntimeTypeInfoCache_1_t87B88DEC770D4A09F7ABB17948676B0508444464_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->set_CanBeNull_11((bool)((((int32_t)L_31) == ((int32_t)0))? 1 : 0));
		// IsNullableOrEnum = IsEnum;
		bool L_32 = ((RuntimeTypeInfoCache_1_t87B88DEC770D4A09F7ABB17948676B0508444464_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->get_IsEnum_5();
		((RuntimeTypeInfoCache_1_t87B88DEC770D4A09F7ABB17948676B0508444464_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->set_IsNullableOrEnum_12(L_32);
		// IsPrimitiveOrString = IsPrimitive || IsStringType;
		bool L_33 = ((RuntimeTypeInfoCache_1_t87B88DEC770D4A09F7ABB17948676B0508444464_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->get_IsPrimitive_1();
		if (L_33)
		{
			goto IL_00d9;
		}
	}
	{
		bool L_34 = ((RuntimeTypeInfoCache_1_t87B88DEC770D4A09F7ABB17948676B0508444464_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->get_IsStringType_9();
		G_B6_0 = ((int32_t)(L_34));
		goto IL_00da;
	}

IL_00d9:
	{
		G_B6_0 = 1;
	}

IL_00da:
	{
		((RuntimeTypeInfoCache_1_t87B88DEC770D4A09F7ABB17948676B0508444464_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->set_IsPrimitiveOrString_13((bool)G_B6_0);
		// IsAbstractOrInterface = IsAbstract || IsInterface;
		bool L_35 = ((RuntimeTypeInfoCache_1_t87B88DEC770D4A09F7ABB17948676B0508444464_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->get_IsAbstract_3();
		if (L_35)
		{
			goto IL_00ed;
		}
	}
	{
		bool L_36 = ((RuntimeTypeInfoCache_1_t87B88DEC770D4A09F7ABB17948676B0508444464_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->get_IsInterface_2();
		G_B9_0 = ((int32_t)(L_36));
		goto IL_00ee;
	}

IL_00ed:
	{
		G_B9_0 = 1;
	}

IL_00ee:
	{
		((RuntimeTypeInfoCache_1_t87B88DEC770D4A09F7ABB17948676B0508444464_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->set_IsAbstractOrInterface_14((bool)G_B9_0);
		// CanBeNull |= IsNullable;
		bool L_37 = ((RuntimeTypeInfoCache_1_t87B88DEC770D4A09F7ABB17948676B0508444464_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->get_CanBeNull_11();
		bool L_38 = ((RuntimeTypeInfoCache_1_t87B88DEC770D4A09F7ABB17948676B0508444464_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->get_IsNullable_7();
		((RuntimeTypeInfoCache_1_t87B88DEC770D4A09F7ABB17948676B0508444464_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->set_CanBeNull_11((bool)((int32_t)((int32_t)L_37|(int32_t)L_38)));
		// IsNullableOrEnum |= IsNullable;
		bool L_39 = ((RuntimeTypeInfoCache_1_t87B88DEC770D4A09F7ABB17948676B0508444464_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->get_IsNullableOrEnum_12();
		bool L_40 = ((RuntimeTypeInfoCache_1_t87B88DEC770D4A09F7ABB17948676B0508444464_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->get_IsNullable_7();
		((RuntimeTypeInfoCache_1_t87B88DEC770D4A09F7ABB17948676B0508444464_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->set_IsNullableOrEnum_12((bool)((int32_t)((int32_t)L_39|(int32_t)L_40)));
		// IsLazyLoadReference = type.IsGenericType && type.GetGenericTypeDefinition() == typeof(UnityEngine.LazyLoadReference<>);
		Type_t * L_41 = V_0;
		NullCheck((Type_t *)L_41);
		bool L_42;
		L_42 = VirtFuncInvoker0< bool >::Invoke(71 /* System.Boolean System.Type::get_IsGenericType() */, (Type_t *)L_41);
		if (!L_42)
		{
			goto IL_0132;
		}
	}
	{
		Type_t * L_43 = V_0;
		NullCheck((Type_t *)L_43);
		Type_t * L_44;
		L_44 = VirtFuncInvoker0< Type_t * >::Invoke(96 /* System.Type System.Type::GetGenericTypeDefinition() */, (Type_t *)L_43);
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_45 = { reinterpret_cast<intptr_t> (LazyLoadReference_1_tA48C53B4B246BEF5D956E8AB23A2EC45C6C5C36E_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_46;
		L_46 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_45, /*hidden argument*/NULL);
		bool L_47;
		L_47 = Type_op_Equality_mA438719A1FDF103C7BBBB08AEF564E7FAEEA0046((Type_t *)L_44, (Type_t *)L_46, /*hidden argument*/NULL);
		G_B12_0 = ((int32_t)(L_47));
		goto IL_0133;
	}

IL_0132:
	{
		G_B12_0 = 0;
	}

IL_0133:
	{
		((RuntimeTypeInfoCache_1_t87B88DEC770D4A09F7ABB17948676B0508444464_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->set_IsLazyLoadReference_15((bool)G_B12_0);
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
// System.Void Unity.Properties.Internal.RuntimeTypeInfoCache`1<System.UInt32>::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RuntimeTypeInfoCache_1__cctor_m494BB76F9332D78A229D5D341DA3DD7C5F82D8C9_gshared (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CustomAttributeExtensions_GetCustomAttribute_TisFlagsAttribute_t511C558FACEF1CC64702A8FAB67CAF3CBA65DF36_m2724CDFC73603733A936D82E548753DEAD4C0363_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LazyLoadReference_1_tA48C53B4B246BEF5D956E8AB23A2EC45C6C5C36E_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Type_t * V_0 = NULL;
	int32_t G_B3_0 = 0;
	int32_t G_B6_0 = 0;
	int32_t G_B9_0 = 0;
	int32_t G_B12_0 = 0;
	{
		// var type = typeof(T);
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_0 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->klass)->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1;
		L_1 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_0, /*hidden argument*/NULL);
		V_0 = (Type_t *)L_1;
		// IsValueType = type.IsValueType;
		Type_t * L_2 = V_0;
		NullCheck((Type_t *)L_2);
		bool L_3;
		L_3 = Type_get_IsValueType_m9CCCB4759C2D5A890096F8DBA66DAAEFE9D913FB((Type_t *)L_2, /*hidden argument*/NULL);
		((RuntimeTypeInfoCache_1_t81281AE3AA18B64964EF639A13EC764ADCB87A74_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->set_IsValueType_0(L_3);
		// IsPrimitive = type.IsPrimitive;
		Type_t * L_4 = V_0;
		NullCheck((Type_t *)L_4);
		bool L_5;
		L_5 = Type_get_IsPrimitive_m43E50D507C45CE3BD51C0DC07C8AB061AFD6B3C3((Type_t *)L_4, /*hidden argument*/NULL);
		((RuntimeTypeInfoCache_1_t81281AE3AA18B64964EF639A13EC764ADCB87A74_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->set_IsPrimitive_1(L_5);
		// IsInterface = type.IsInterface;
		Type_t * L_6 = V_0;
		NullCheck((Type_t *)L_6);
		bool L_7;
		L_7 = Type_get_IsInterface_mB10C34DEE8B22E1597C813211BBED17DD724FC07((Type_t *)L_6, /*hidden argument*/NULL);
		((RuntimeTypeInfoCache_1_t81281AE3AA18B64964EF639A13EC764ADCB87A74_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->set_IsInterface_2(L_7);
		// IsAbstract = type.IsAbstract;
		Type_t * L_8 = V_0;
		NullCheck((Type_t *)L_8);
		bool L_9;
		L_9 = Type_get_IsAbstract_mB16DB56FCABF55740019D32C5286F38E30CAA19F((Type_t *)L_8, /*hidden argument*/NULL);
		((RuntimeTypeInfoCache_1_t81281AE3AA18B64964EF639A13EC764ADCB87A74_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->set_IsAbstract_3(L_9);
		// IsArray = type.IsArray;
		Type_t * L_10 = V_0;
		NullCheck((Type_t *)L_10);
		bool L_11;
		L_11 = Type_get_IsArray_m15FE83DD8FAF090F9BDA924753C7750AAEA7CFD1((Type_t *)L_10, /*hidden argument*/NULL);
		((RuntimeTypeInfoCache_1_t81281AE3AA18B64964EF639A13EC764ADCB87A74_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->set_IsArray_4(L_11);
		// IsEnum = type.IsEnum;
		Type_t * L_12 = V_0;
		NullCheck((Type_t *)L_12);
		bool L_13;
		L_13 = VirtFuncInvoker0< bool >::Invoke(67 /* System.Boolean System.Type::get_IsEnum() */, (Type_t *)L_12);
		((RuntimeTypeInfoCache_1_t81281AE3AA18B64964EF639A13EC764ADCB87A74_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->set_IsEnum_5(L_13);
		// IsEnumFlags = IsEnum && null != type.GetCustomAttribute<FlagsAttribute>();
		bool L_14 = ((RuntimeTypeInfoCache_1_t81281AE3AA18B64964EF639A13EC764ADCB87A74_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->get_IsEnum_5();
		if (!L_14)
		{
			goto IL_005f;
		}
	}
	{
		Type_t * L_15 = V_0;
		FlagsAttribute_t511C558FACEF1CC64702A8FAB67CAF3CBA65DF36 * L_16;
		L_16 = CustomAttributeExtensions_GetCustomAttribute_TisFlagsAttribute_t511C558FACEF1CC64702A8FAB67CAF3CBA65DF36_m2724CDFC73603733A936D82E548753DEAD4C0363((MemberInfo_t *)L_15, /*hidden argument*/CustomAttributeExtensions_GetCustomAttribute_TisFlagsAttribute_t511C558FACEF1CC64702A8FAB67CAF3CBA65DF36_m2724CDFC73603733A936D82E548753DEAD4C0363_RuntimeMethod_var);
		G_B3_0 = ((!(((RuntimeObject*)(FlagsAttribute_t511C558FACEF1CC64702A8FAB67CAF3CBA65DF36 *)L_16) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		goto IL_0060;
	}

IL_005f:
	{
		G_B3_0 = 0;
	}

IL_0060:
	{
		((RuntimeTypeInfoCache_1_t81281AE3AA18B64964EF639A13EC764ADCB87A74_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->set_IsEnumFlags_6((bool)G_B3_0);
		// IsNullable = Nullable.GetUnderlyingType(typeof(T)) != null;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_17 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->klass)->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_18;
		L_18 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_17, /*hidden argument*/NULL);
		Type_t * L_19;
		L_19 = Nullable_GetUnderlyingType_mC5699E7E11E1AFE25365CAB564A48F0193318629((Type_t *)L_18, /*hidden argument*/NULL);
		bool L_20;
		L_20 = Type_op_Inequality_m6DDC5E923203A79BF505F9275B694AD3FAA36DB0((Type_t *)L_19, (Type_t *)NULL, /*hidden argument*/NULL);
		((RuntimeTypeInfoCache_1_t81281AE3AA18B64964EF639A13EC764ADCB87A74_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->set_IsNullable_7(L_20);
		// IsObjectType = type == typeof(object);
		Type_t * L_21 = V_0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_22 = { reinterpret_cast<intptr_t> (RuntimeObject_0_0_0_var) };
		Type_t * L_23;
		L_23 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_22, /*hidden argument*/NULL);
		bool L_24;
		L_24 = Type_op_Equality_mA438719A1FDF103C7BBBB08AEF564E7FAEEA0046((Type_t *)L_21, (Type_t *)L_23, /*hidden argument*/NULL);
		((RuntimeTypeInfoCache_1_t81281AE3AA18B64964EF639A13EC764ADCB87A74_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->set_IsObjectType_8(L_24);
		// IsStringType = type == typeof(string);
		Type_t * L_25 = V_0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_26 = { reinterpret_cast<intptr_t> (String_t_0_0_0_var) };
		Type_t * L_27;
		L_27 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_26, /*hidden argument*/NULL);
		bool L_28;
		L_28 = Type_op_Equality_mA438719A1FDF103C7BBBB08AEF564E7FAEEA0046((Type_t *)L_25, (Type_t *)L_27, /*hidden argument*/NULL);
		((RuntimeTypeInfoCache_1_t81281AE3AA18B64964EF639A13EC764ADCB87A74_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->set_IsStringType_9(L_28);
		// IsContainerType = RuntimeTypeInfoCache.IsContainerType(type);
		Type_t * L_29 = V_0;
		bool L_30;
		L_30 = RuntimeTypeInfoCache_IsContainerType_m83F2173E5EB11D908CC3BA99C89B4B65B64EAA96((Type_t *)L_29, /*hidden argument*/NULL);
		((RuntimeTypeInfoCache_1_t81281AE3AA18B64964EF639A13EC764ADCB87A74_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->set_IsContainerType_10(L_30);
		// CanBeNull = !IsValueType;
		bool L_31 = ((RuntimeTypeInfoCache_1_t81281AE3AA18B64964EF639A13EC764ADCB87A74_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->get_IsValueType_0();
		((RuntimeTypeInfoCache_1_t81281AE3AA18B64964EF639A13EC764ADCB87A74_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->set_CanBeNull_11((bool)((((int32_t)L_31) == ((int32_t)0))? 1 : 0));
		// IsNullableOrEnum = IsEnum;
		bool L_32 = ((RuntimeTypeInfoCache_1_t81281AE3AA18B64964EF639A13EC764ADCB87A74_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->get_IsEnum_5();
		((RuntimeTypeInfoCache_1_t81281AE3AA18B64964EF639A13EC764ADCB87A74_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->set_IsNullableOrEnum_12(L_32);
		// IsPrimitiveOrString = IsPrimitive || IsStringType;
		bool L_33 = ((RuntimeTypeInfoCache_1_t81281AE3AA18B64964EF639A13EC764ADCB87A74_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->get_IsPrimitive_1();
		if (L_33)
		{
			goto IL_00d9;
		}
	}
	{
		bool L_34 = ((RuntimeTypeInfoCache_1_t81281AE3AA18B64964EF639A13EC764ADCB87A74_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->get_IsStringType_9();
		G_B6_0 = ((int32_t)(L_34));
		goto IL_00da;
	}

IL_00d9:
	{
		G_B6_0 = 1;
	}

IL_00da:
	{
		((RuntimeTypeInfoCache_1_t81281AE3AA18B64964EF639A13EC764ADCB87A74_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->set_IsPrimitiveOrString_13((bool)G_B6_0);
		// IsAbstractOrInterface = IsAbstract || IsInterface;
		bool L_35 = ((RuntimeTypeInfoCache_1_t81281AE3AA18B64964EF639A13EC764ADCB87A74_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->get_IsAbstract_3();
		if (L_35)
		{
			goto IL_00ed;
		}
	}
	{
		bool L_36 = ((RuntimeTypeInfoCache_1_t81281AE3AA18B64964EF639A13EC764ADCB87A74_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->get_IsInterface_2();
		G_B9_0 = ((int32_t)(L_36));
		goto IL_00ee;
	}

IL_00ed:
	{
		G_B9_0 = 1;
	}

IL_00ee:
	{
		((RuntimeTypeInfoCache_1_t81281AE3AA18B64964EF639A13EC764ADCB87A74_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->set_IsAbstractOrInterface_14((bool)G_B9_0);
		// CanBeNull |= IsNullable;
		bool L_37 = ((RuntimeTypeInfoCache_1_t81281AE3AA18B64964EF639A13EC764ADCB87A74_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->get_CanBeNull_11();
		bool L_38 = ((RuntimeTypeInfoCache_1_t81281AE3AA18B64964EF639A13EC764ADCB87A74_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->get_IsNullable_7();
		((RuntimeTypeInfoCache_1_t81281AE3AA18B64964EF639A13EC764ADCB87A74_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->set_CanBeNull_11((bool)((int32_t)((int32_t)L_37|(int32_t)L_38)));
		// IsNullableOrEnum |= IsNullable;
		bool L_39 = ((RuntimeTypeInfoCache_1_t81281AE3AA18B64964EF639A13EC764ADCB87A74_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->get_IsNullableOrEnum_12();
		bool L_40 = ((RuntimeTypeInfoCache_1_t81281AE3AA18B64964EF639A13EC764ADCB87A74_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->get_IsNullable_7();
		((RuntimeTypeInfoCache_1_t81281AE3AA18B64964EF639A13EC764ADCB87A74_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->set_IsNullableOrEnum_12((bool)((int32_t)((int32_t)L_39|(int32_t)L_40)));
		// IsLazyLoadReference = type.IsGenericType && type.GetGenericTypeDefinition() == typeof(UnityEngine.LazyLoadReference<>);
		Type_t * L_41 = V_0;
		NullCheck((Type_t *)L_41);
		bool L_42;
		L_42 = VirtFuncInvoker0< bool >::Invoke(71 /* System.Boolean System.Type::get_IsGenericType() */, (Type_t *)L_41);
		if (!L_42)
		{
			goto IL_0132;
		}
	}
	{
		Type_t * L_43 = V_0;
		NullCheck((Type_t *)L_43);
		Type_t * L_44;
		L_44 = VirtFuncInvoker0< Type_t * >::Invoke(96 /* System.Type System.Type::GetGenericTypeDefinition() */, (Type_t *)L_43);
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_45 = { reinterpret_cast<intptr_t> (LazyLoadReference_1_tA48C53B4B246BEF5D956E8AB23A2EC45C6C5C36E_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_46;
		L_46 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_45, /*hidden argument*/NULL);
		bool L_47;
		L_47 = Type_op_Equality_mA438719A1FDF103C7BBBB08AEF564E7FAEEA0046((Type_t *)L_44, (Type_t *)L_46, /*hidden argument*/NULL);
		G_B12_0 = ((int32_t)(L_47));
		goto IL_0133;
	}

IL_0132:
	{
		G_B12_0 = 0;
	}

IL_0133:
	{
		((RuntimeTypeInfoCache_1_t81281AE3AA18B64964EF639A13EC764ADCB87A74_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->set_IsLazyLoadReference_15((bool)G_B12_0);
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
// System.Void Unity.Properties.Internal.RuntimeTypeInfoCache`1<System.UInt64>::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RuntimeTypeInfoCache_1__cctor_mAC93DE7B78958B4B0319D26FE9428A0F49415A7C_gshared (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CustomAttributeExtensions_GetCustomAttribute_TisFlagsAttribute_t511C558FACEF1CC64702A8FAB67CAF3CBA65DF36_m2724CDFC73603733A936D82E548753DEAD4C0363_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LazyLoadReference_1_tA48C53B4B246BEF5D956E8AB23A2EC45C6C5C36E_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Type_t * V_0 = NULL;
	int32_t G_B3_0 = 0;
	int32_t G_B6_0 = 0;
	int32_t G_B9_0 = 0;
	int32_t G_B12_0 = 0;
	{
		// var type = typeof(T);
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_0 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->klass)->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1;
		L_1 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_0, /*hidden argument*/NULL);
		V_0 = (Type_t *)L_1;
		// IsValueType = type.IsValueType;
		Type_t * L_2 = V_0;
		NullCheck((Type_t *)L_2);
		bool L_3;
		L_3 = Type_get_IsValueType_m9CCCB4759C2D5A890096F8DBA66DAAEFE9D913FB((Type_t *)L_2, /*hidden argument*/NULL);
		((RuntimeTypeInfoCache_1_tBD3586BA31C268FB05454355306A1AFA1E9FA4E6_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->set_IsValueType_0(L_3);
		// IsPrimitive = type.IsPrimitive;
		Type_t * L_4 = V_0;
		NullCheck((Type_t *)L_4);
		bool L_5;
		L_5 = Type_get_IsPrimitive_m43E50D507C45CE3BD51C0DC07C8AB061AFD6B3C3((Type_t *)L_4, /*hidden argument*/NULL);
		((RuntimeTypeInfoCache_1_tBD3586BA31C268FB05454355306A1AFA1E9FA4E6_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->set_IsPrimitive_1(L_5);
		// IsInterface = type.IsInterface;
		Type_t * L_6 = V_0;
		NullCheck((Type_t *)L_6);
		bool L_7;
		L_7 = Type_get_IsInterface_mB10C34DEE8B22E1597C813211BBED17DD724FC07((Type_t *)L_6, /*hidden argument*/NULL);
		((RuntimeTypeInfoCache_1_tBD3586BA31C268FB05454355306A1AFA1E9FA4E6_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->set_IsInterface_2(L_7);
		// IsAbstract = type.IsAbstract;
		Type_t * L_8 = V_0;
		NullCheck((Type_t *)L_8);
		bool L_9;
		L_9 = Type_get_IsAbstract_mB16DB56FCABF55740019D32C5286F38E30CAA19F((Type_t *)L_8, /*hidden argument*/NULL);
		((RuntimeTypeInfoCache_1_tBD3586BA31C268FB05454355306A1AFA1E9FA4E6_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->set_IsAbstract_3(L_9);
		// IsArray = type.IsArray;
		Type_t * L_10 = V_0;
		NullCheck((Type_t *)L_10);
		bool L_11;
		L_11 = Type_get_IsArray_m15FE83DD8FAF090F9BDA924753C7750AAEA7CFD1((Type_t *)L_10, /*hidden argument*/NULL);
		((RuntimeTypeInfoCache_1_tBD3586BA31C268FB05454355306A1AFA1E9FA4E6_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->set_IsArray_4(L_11);
		// IsEnum = type.IsEnum;
		Type_t * L_12 = V_0;
		NullCheck((Type_t *)L_12);
		bool L_13;
		L_13 = VirtFuncInvoker0< bool >::Invoke(67 /* System.Boolean System.Type::get_IsEnum() */, (Type_t *)L_12);
		((RuntimeTypeInfoCache_1_tBD3586BA31C268FB05454355306A1AFA1E9FA4E6_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->set_IsEnum_5(L_13);
		// IsEnumFlags = IsEnum && null != type.GetCustomAttribute<FlagsAttribute>();
		bool L_14 = ((RuntimeTypeInfoCache_1_tBD3586BA31C268FB05454355306A1AFA1E9FA4E6_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->get_IsEnum_5();
		if (!L_14)
		{
			goto IL_005f;
		}
	}
	{
		Type_t * L_15 = V_0;
		FlagsAttribute_t511C558FACEF1CC64702A8FAB67CAF3CBA65DF36 * L_16;
		L_16 = CustomAttributeExtensions_GetCustomAttribute_TisFlagsAttribute_t511C558FACEF1CC64702A8FAB67CAF3CBA65DF36_m2724CDFC73603733A936D82E548753DEAD4C0363((MemberInfo_t *)L_15, /*hidden argument*/CustomAttributeExtensions_GetCustomAttribute_TisFlagsAttribute_t511C558FACEF1CC64702A8FAB67CAF3CBA65DF36_m2724CDFC73603733A936D82E548753DEAD4C0363_RuntimeMethod_var);
		G_B3_0 = ((!(((RuntimeObject*)(FlagsAttribute_t511C558FACEF1CC64702A8FAB67CAF3CBA65DF36 *)L_16) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		goto IL_0060;
	}

IL_005f:
	{
		G_B3_0 = 0;
	}

IL_0060:
	{
		((RuntimeTypeInfoCache_1_tBD3586BA31C268FB05454355306A1AFA1E9FA4E6_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->set_IsEnumFlags_6((bool)G_B3_0);
		// IsNullable = Nullable.GetUnderlyingType(typeof(T)) != null;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_17 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->klass)->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_18;
		L_18 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_17, /*hidden argument*/NULL);
		Type_t * L_19;
		L_19 = Nullable_GetUnderlyingType_mC5699E7E11E1AFE25365CAB564A48F0193318629((Type_t *)L_18, /*hidden argument*/NULL);
		bool L_20;
		L_20 = Type_op_Inequality_m6DDC5E923203A79BF505F9275B694AD3FAA36DB0((Type_t *)L_19, (Type_t *)NULL, /*hidden argument*/NULL);
		((RuntimeTypeInfoCache_1_tBD3586BA31C268FB05454355306A1AFA1E9FA4E6_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->set_IsNullable_7(L_20);
		// IsObjectType = type == typeof(object);
		Type_t * L_21 = V_0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_22 = { reinterpret_cast<intptr_t> (RuntimeObject_0_0_0_var) };
		Type_t * L_23;
		L_23 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_22, /*hidden argument*/NULL);
		bool L_24;
		L_24 = Type_op_Equality_mA438719A1FDF103C7BBBB08AEF564E7FAEEA0046((Type_t *)L_21, (Type_t *)L_23, /*hidden argument*/NULL);
		((RuntimeTypeInfoCache_1_tBD3586BA31C268FB05454355306A1AFA1E9FA4E6_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->set_IsObjectType_8(L_24);
		// IsStringType = type == typeof(string);
		Type_t * L_25 = V_0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_26 = { reinterpret_cast<intptr_t> (String_t_0_0_0_var) };
		Type_t * L_27;
		L_27 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_26, /*hidden argument*/NULL);
		bool L_28;
		L_28 = Type_op_Equality_mA438719A1FDF103C7BBBB08AEF564E7FAEEA0046((Type_t *)L_25, (Type_t *)L_27, /*hidden argument*/NULL);
		((RuntimeTypeInfoCache_1_tBD3586BA31C268FB05454355306A1AFA1E9FA4E6_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->set_IsStringType_9(L_28);
		// IsContainerType = RuntimeTypeInfoCache.IsContainerType(type);
		Type_t * L_29 = V_0;
		bool L_30;
		L_30 = RuntimeTypeInfoCache_IsContainerType_m83F2173E5EB11D908CC3BA99C89B4B65B64EAA96((Type_t *)L_29, /*hidden argument*/NULL);
		((RuntimeTypeInfoCache_1_tBD3586BA31C268FB05454355306A1AFA1E9FA4E6_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->set_IsContainerType_10(L_30);
		// CanBeNull = !IsValueType;
		bool L_31 = ((RuntimeTypeInfoCache_1_tBD3586BA31C268FB05454355306A1AFA1E9FA4E6_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->get_IsValueType_0();
		((RuntimeTypeInfoCache_1_tBD3586BA31C268FB05454355306A1AFA1E9FA4E6_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->set_CanBeNull_11((bool)((((int32_t)L_31) == ((int32_t)0))? 1 : 0));
		// IsNullableOrEnum = IsEnum;
		bool L_32 = ((RuntimeTypeInfoCache_1_tBD3586BA31C268FB05454355306A1AFA1E9FA4E6_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->get_IsEnum_5();
		((RuntimeTypeInfoCache_1_tBD3586BA31C268FB05454355306A1AFA1E9FA4E6_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->set_IsNullableOrEnum_12(L_32);
		// IsPrimitiveOrString = IsPrimitive || IsStringType;
		bool L_33 = ((RuntimeTypeInfoCache_1_tBD3586BA31C268FB05454355306A1AFA1E9FA4E6_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->get_IsPrimitive_1();
		if (L_33)
		{
			goto IL_00d9;
		}
	}
	{
		bool L_34 = ((RuntimeTypeInfoCache_1_tBD3586BA31C268FB05454355306A1AFA1E9FA4E6_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->get_IsStringType_9();
		G_B6_0 = ((int32_t)(L_34));
		goto IL_00da;
	}

IL_00d9:
	{
		G_B6_0 = 1;
	}

IL_00da:
	{
		((RuntimeTypeInfoCache_1_tBD3586BA31C268FB05454355306A1AFA1E9FA4E6_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->set_IsPrimitiveOrString_13((bool)G_B6_0);
		// IsAbstractOrInterface = IsAbstract || IsInterface;
		bool L_35 = ((RuntimeTypeInfoCache_1_tBD3586BA31C268FB05454355306A1AFA1E9FA4E6_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->get_IsAbstract_3();
		if (L_35)
		{
			goto IL_00ed;
		}
	}
	{
		bool L_36 = ((RuntimeTypeInfoCache_1_tBD3586BA31C268FB05454355306A1AFA1E9FA4E6_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->get_IsInterface_2();
		G_B9_0 = ((int32_t)(L_36));
		goto IL_00ee;
	}

IL_00ed:
	{
		G_B9_0 = 1;
	}

IL_00ee:
	{
		((RuntimeTypeInfoCache_1_tBD3586BA31C268FB05454355306A1AFA1E9FA4E6_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->set_IsAbstractOrInterface_14((bool)G_B9_0);
		// CanBeNull |= IsNullable;
		bool L_37 = ((RuntimeTypeInfoCache_1_tBD3586BA31C268FB05454355306A1AFA1E9FA4E6_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->get_CanBeNull_11();
		bool L_38 = ((RuntimeTypeInfoCache_1_tBD3586BA31C268FB05454355306A1AFA1E9FA4E6_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->get_IsNullable_7();
		((RuntimeTypeInfoCache_1_tBD3586BA31C268FB05454355306A1AFA1E9FA4E6_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->set_CanBeNull_11((bool)((int32_t)((int32_t)L_37|(int32_t)L_38)));
		// IsNullableOrEnum |= IsNullable;
		bool L_39 = ((RuntimeTypeInfoCache_1_tBD3586BA31C268FB05454355306A1AFA1E9FA4E6_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->get_IsNullableOrEnum_12();
		bool L_40 = ((RuntimeTypeInfoCache_1_tBD3586BA31C268FB05454355306A1AFA1E9FA4E6_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->get_IsNullable_7();
		((RuntimeTypeInfoCache_1_tBD3586BA31C268FB05454355306A1AFA1E9FA4E6_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->set_IsNullableOrEnum_12((bool)((int32_t)((int32_t)L_39|(int32_t)L_40)));
		// IsLazyLoadReference = type.IsGenericType && type.GetGenericTypeDefinition() == typeof(UnityEngine.LazyLoadReference<>);
		Type_t * L_41 = V_0;
		NullCheck((Type_t *)L_41);
		bool L_42;
		L_42 = VirtFuncInvoker0< bool >::Invoke(71 /* System.Boolean System.Type::get_IsGenericType() */, (Type_t *)L_41);
		if (!L_42)
		{
			goto IL_0132;
		}
	}
	{
		Type_t * L_43 = V_0;
		NullCheck((Type_t *)L_43);
		Type_t * L_44;
		L_44 = VirtFuncInvoker0< Type_t * >::Invoke(96 /* System.Type System.Type::GetGenericTypeDefinition() */, (Type_t *)L_43);
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_45 = { reinterpret_cast<intptr_t> (LazyLoadReference_1_tA48C53B4B246BEF5D956E8AB23A2EC45C6C5C36E_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_46;
		L_46 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_45, /*hidden argument*/NULL);
		bool L_47;
		L_47 = Type_op_Equality_mA438719A1FDF103C7BBBB08AEF564E7FAEEA0046((Type_t *)L_44, (Type_t *)L_46, /*hidden argument*/NULL);
		G_B12_0 = ((int32_t)(L_47));
		goto IL_0133;
	}

IL_0132:
	{
		G_B12_0 = 0;
	}

IL_0133:
	{
		((RuntimeTypeInfoCache_1_tBD3586BA31C268FB05454355306A1AFA1E9FA4E6_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->set_IsLazyLoadReference_15((bool)G_B12_0);
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
// System.Void Unity.Properties.Internal.RuntimeTypeInfoCache`1<Unity.RuntimeSceneSerialization.Internal.UnityObjectReference>::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RuntimeTypeInfoCache_1__cctor_m2A7F0AADD6B98B2C9598A5030D89464BE618DCDB_gshared (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CustomAttributeExtensions_GetCustomAttribute_TisFlagsAttribute_t511C558FACEF1CC64702A8FAB67CAF3CBA65DF36_m2724CDFC73603733A936D82E548753DEAD4C0363_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LazyLoadReference_1_tA48C53B4B246BEF5D956E8AB23A2EC45C6C5C36E_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Type_t * V_0 = NULL;
	int32_t G_B3_0 = 0;
	int32_t G_B6_0 = 0;
	int32_t G_B9_0 = 0;
	int32_t G_B12_0 = 0;
	{
		// var type = typeof(T);
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_0 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->klass)->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1;
		L_1 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_0, /*hidden argument*/NULL);
		V_0 = (Type_t *)L_1;
		// IsValueType = type.IsValueType;
		Type_t * L_2 = V_0;
		NullCheck((Type_t *)L_2);
		bool L_3;
		L_3 = Type_get_IsValueType_m9CCCB4759C2D5A890096F8DBA66DAAEFE9D913FB((Type_t *)L_2, /*hidden argument*/NULL);
		((RuntimeTypeInfoCache_1_t591D3790D133FE872CF36B41FC2EFD65B0A7D60F_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->set_IsValueType_0(L_3);
		// IsPrimitive = type.IsPrimitive;
		Type_t * L_4 = V_0;
		NullCheck((Type_t *)L_4);
		bool L_5;
		L_5 = Type_get_IsPrimitive_m43E50D507C45CE3BD51C0DC07C8AB061AFD6B3C3((Type_t *)L_4, /*hidden argument*/NULL);
		((RuntimeTypeInfoCache_1_t591D3790D133FE872CF36B41FC2EFD65B0A7D60F_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->set_IsPrimitive_1(L_5);
		// IsInterface = type.IsInterface;
		Type_t * L_6 = V_0;
		NullCheck((Type_t *)L_6);
		bool L_7;
		L_7 = Type_get_IsInterface_mB10C34DEE8B22E1597C813211BBED17DD724FC07((Type_t *)L_6, /*hidden argument*/NULL);
		((RuntimeTypeInfoCache_1_t591D3790D133FE872CF36B41FC2EFD65B0A7D60F_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->set_IsInterface_2(L_7);
		// IsAbstract = type.IsAbstract;
		Type_t * L_8 = V_0;
		NullCheck((Type_t *)L_8);
		bool L_9;
		L_9 = Type_get_IsAbstract_mB16DB56FCABF55740019D32C5286F38E30CAA19F((Type_t *)L_8, /*hidden argument*/NULL);
		((RuntimeTypeInfoCache_1_t591D3790D133FE872CF36B41FC2EFD65B0A7D60F_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->set_IsAbstract_3(L_9);
		// IsArray = type.IsArray;
		Type_t * L_10 = V_0;
		NullCheck((Type_t *)L_10);
		bool L_11;
		L_11 = Type_get_IsArray_m15FE83DD8FAF090F9BDA924753C7750AAEA7CFD1((Type_t *)L_10, /*hidden argument*/NULL);
		((RuntimeTypeInfoCache_1_t591D3790D133FE872CF36B41FC2EFD65B0A7D60F_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->set_IsArray_4(L_11);
		// IsEnum = type.IsEnum;
		Type_t * L_12 = V_0;
		NullCheck((Type_t *)L_12);
		bool L_13;
		L_13 = VirtFuncInvoker0< bool >::Invoke(67 /* System.Boolean System.Type::get_IsEnum() */, (Type_t *)L_12);
		((RuntimeTypeInfoCache_1_t591D3790D133FE872CF36B41FC2EFD65B0A7D60F_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->set_IsEnum_5(L_13);
		// IsEnumFlags = IsEnum && null != type.GetCustomAttribute<FlagsAttribute>();
		bool L_14 = ((RuntimeTypeInfoCache_1_t591D3790D133FE872CF36B41FC2EFD65B0A7D60F_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->get_IsEnum_5();
		if (!L_14)
		{
			goto IL_005f;
		}
	}
	{
		Type_t * L_15 = V_0;
		FlagsAttribute_t511C558FACEF1CC64702A8FAB67CAF3CBA65DF36 * L_16;
		L_16 = CustomAttributeExtensions_GetCustomAttribute_TisFlagsAttribute_t511C558FACEF1CC64702A8FAB67CAF3CBA65DF36_m2724CDFC73603733A936D82E548753DEAD4C0363((MemberInfo_t *)L_15, /*hidden argument*/CustomAttributeExtensions_GetCustomAttribute_TisFlagsAttribute_t511C558FACEF1CC64702A8FAB67CAF3CBA65DF36_m2724CDFC73603733A936D82E548753DEAD4C0363_RuntimeMethod_var);
		G_B3_0 = ((!(((RuntimeObject*)(FlagsAttribute_t511C558FACEF1CC64702A8FAB67CAF3CBA65DF36 *)L_16) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		goto IL_0060;
	}

IL_005f:
	{
		G_B3_0 = 0;
	}

IL_0060:
	{
		((RuntimeTypeInfoCache_1_t591D3790D133FE872CF36B41FC2EFD65B0A7D60F_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->set_IsEnumFlags_6((bool)G_B3_0);
		// IsNullable = Nullable.GetUnderlyingType(typeof(T)) != null;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_17 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->klass)->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_18;
		L_18 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_17, /*hidden argument*/NULL);
		Type_t * L_19;
		L_19 = Nullable_GetUnderlyingType_mC5699E7E11E1AFE25365CAB564A48F0193318629((Type_t *)L_18, /*hidden argument*/NULL);
		bool L_20;
		L_20 = Type_op_Inequality_m6DDC5E923203A79BF505F9275B694AD3FAA36DB0((Type_t *)L_19, (Type_t *)NULL, /*hidden argument*/NULL);
		((RuntimeTypeInfoCache_1_t591D3790D133FE872CF36B41FC2EFD65B0A7D60F_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->set_IsNullable_7(L_20);
		// IsObjectType = type == typeof(object);
		Type_t * L_21 = V_0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_22 = { reinterpret_cast<intptr_t> (RuntimeObject_0_0_0_var) };
		Type_t * L_23;
		L_23 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_22, /*hidden argument*/NULL);
		bool L_24;
		L_24 = Type_op_Equality_mA438719A1FDF103C7BBBB08AEF564E7FAEEA0046((Type_t *)L_21, (Type_t *)L_23, /*hidden argument*/NULL);
		((RuntimeTypeInfoCache_1_t591D3790D133FE872CF36B41FC2EFD65B0A7D60F_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->set_IsObjectType_8(L_24);
		// IsStringType = type == typeof(string);
		Type_t * L_25 = V_0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_26 = { reinterpret_cast<intptr_t> (String_t_0_0_0_var) };
		Type_t * L_27;
		L_27 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_26, /*hidden argument*/NULL);
		bool L_28;
		L_28 = Type_op_Equality_mA438719A1FDF103C7BBBB08AEF564E7FAEEA0046((Type_t *)L_25, (Type_t *)L_27, /*hidden argument*/NULL);
		((RuntimeTypeInfoCache_1_t591D3790D133FE872CF36B41FC2EFD65B0A7D60F_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->set_IsStringType_9(L_28);
		// IsContainerType = RuntimeTypeInfoCache.IsContainerType(type);
		Type_t * L_29 = V_0;
		bool L_30;
		L_30 = RuntimeTypeInfoCache_IsContainerType_m83F2173E5EB11D908CC3BA99C89B4B65B64EAA96((Type_t *)L_29, /*hidden argument*/NULL);
		((RuntimeTypeInfoCache_1_t591D3790D133FE872CF36B41FC2EFD65B0A7D60F_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->set_IsContainerType_10(L_30);
		// CanBeNull = !IsValueType;
		bool L_31 = ((RuntimeTypeInfoCache_1_t591D3790D133FE872CF36B41FC2EFD65B0A7D60F_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->get_IsValueType_0();
		((RuntimeTypeInfoCache_1_t591D3790D133FE872CF36B41FC2EFD65B0A7D60F_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->set_CanBeNull_11((bool)((((int32_t)L_31) == ((int32_t)0))? 1 : 0));
		// IsNullableOrEnum = IsEnum;
		bool L_32 = ((RuntimeTypeInfoCache_1_t591D3790D133FE872CF36B41FC2EFD65B0A7D60F_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->get_IsEnum_5();
		((RuntimeTypeInfoCache_1_t591D3790D133FE872CF36B41FC2EFD65B0A7D60F_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->set_IsNullableOrEnum_12(L_32);
		// IsPrimitiveOrString = IsPrimitive || IsStringType;
		bool L_33 = ((RuntimeTypeInfoCache_1_t591D3790D133FE872CF36B41FC2EFD65B0A7D60F_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->get_IsPrimitive_1();
		if (L_33)
		{
			goto IL_00d9;
		}
	}
	{
		bool L_34 = ((RuntimeTypeInfoCache_1_t591D3790D133FE872CF36B41FC2EFD65B0A7D60F_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->get_IsStringType_9();
		G_B6_0 = ((int32_t)(L_34));
		goto IL_00da;
	}

IL_00d9:
	{
		G_B6_0 = 1;
	}

IL_00da:
	{
		((RuntimeTypeInfoCache_1_t591D3790D133FE872CF36B41FC2EFD65B0A7D60F_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->set_IsPrimitiveOrString_13((bool)G_B6_0);
		// IsAbstractOrInterface = IsAbstract || IsInterface;
		bool L_35 = ((RuntimeTypeInfoCache_1_t591D3790D133FE872CF36B41FC2EFD65B0A7D60F_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->get_IsAbstract_3();
		if (L_35)
		{
			goto IL_00ed;
		}
	}
	{
		bool L_36 = ((RuntimeTypeInfoCache_1_t591D3790D133FE872CF36B41FC2EFD65B0A7D60F_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->get_IsInterface_2();
		G_B9_0 = ((int32_t)(L_36));
		goto IL_00ee;
	}

IL_00ed:
	{
		G_B9_0 = 1;
	}

IL_00ee:
	{
		((RuntimeTypeInfoCache_1_t591D3790D133FE872CF36B41FC2EFD65B0A7D60F_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->set_IsAbstractOrInterface_14((bool)G_B9_0);
		// CanBeNull |= IsNullable;
		bool L_37 = ((RuntimeTypeInfoCache_1_t591D3790D133FE872CF36B41FC2EFD65B0A7D60F_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->get_CanBeNull_11();
		bool L_38 = ((RuntimeTypeInfoCache_1_t591D3790D133FE872CF36B41FC2EFD65B0A7D60F_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->get_IsNullable_7();
		((RuntimeTypeInfoCache_1_t591D3790D133FE872CF36B41FC2EFD65B0A7D60F_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->set_CanBeNull_11((bool)((int32_t)((int32_t)L_37|(int32_t)L_38)));
		// IsNullableOrEnum |= IsNullable;
		bool L_39 = ((RuntimeTypeInfoCache_1_t591D3790D133FE872CF36B41FC2EFD65B0A7D60F_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->get_IsNullableOrEnum_12();
		bool L_40 = ((RuntimeTypeInfoCache_1_t591D3790D133FE872CF36B41FC2EFD65B0A7D60F_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->get_IsNullable_7();
		((RuntimeTypeInfoCache_1_t591D3790D133FE872CF36B41FC2EFD65B0A7D60F_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->set_IsNullableOrEnum_12((bool)((int32_t)((int32_t)L_39|(int32_t)L_40)));
		// IsLazyLoadReference = type.IsGenericType && type.GetGenericTypeDefinition() == typeof(UnityEngine.LazyLoadReference<>);
		Type_t * L_41 = V_0;
		NullCheck((Type_t *)L_41);
		bool L_42;
		L_42 = VirtFuncInvoker0< bool >::Invoke(71 /* System.Boolean System.Type::get_IsGenericType() */, (Type_t *)L_41);
		if (!L_42)
		{
			goto IL_0132;
		}
	}
	{
		Type_t * L_43 = V_0;
		NullCheck((Type_t *)L_43);
		Type_t * L_44;
		L_44 = VirtFuncInvoker0< Type_t * >::Invoke(96 /* System.Type System.Type::GetGenericTypeDefinition() */, (Type_t *)L_43);
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_45 = { reinterpret_cast<intptr_t> (LazyLoadReference_1_tA48C53B4B246BEF5D956E8AB23A2EC45C6C5C36E_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_46;
		L_46 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_45, /*hidden argument*/NULL);
		bool L_47;
		L_47 = Type_op_Equality_mA438719A1FDF103C7BBBB08AEF564E7FAEEA0046((Type_t *)L_44, (Type_t *)L_46, /*hidden argument*/NULL);
		G_B12_0 = ((int32_t)(L_47));
		goto IL_0133;
	}

IL_0132:
	{
		G_B12_0 = 0;
	}

IL_0133:
	{
		((RuntimeTypeInfoCache_1_t591D3790D133FE872CF36B41FC2EFD65B0A7D60F_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->set_IsLazyLoadReference_15((bool)G_B12_0);
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
// System.Void Unity.Properties.Internal.RuntimeTypeInfoCache`1<UnityEngine.Vector2Int>::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RuntimeTypeInfoCache_1__cctor_mF958013DC34EBCE495987C70FE6D560169D41228_gshared (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CustomAttributeExtensions_GetCustomAttribute_TisFlagsAttribute_t511C558FACEF1CC64702A8FAB67CAF3CBA65DF36_m2724CDFC73603733A936D82E548753DEAD4C0363_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LazyLoadReference_1_tA48C53B4B246BEF5D956E8AB23A2EC45C6C5C36E_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Type_t * V_0 = NULL;
	int32_t G_B3_0 = 0;
	int32_t G_B6_0 = 0;
	int32_t G_B9_0 = 0;
	int32_t G_B12_0 = 0;
	{
		// var type = typeof(T);
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_0 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->klass)->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1;
		L_1 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_0, /*hidden argument*/NULL);
		V_0 = (Type_t *)L_1;
		// IsValueType = type.IsValueType;
		Type_t * L_2 = V_0;
		NullCheck((Type_t *)L_2);
		bool L_3;
		L_3 = Type_get_IsValueType_m9CCCB4759C2D5A890096F8DBA66DAAEFE9D913FB((Type_t *)L_2, /*hidden argument*/NULL);
		((RuntimeTypeInfoCache_1_t1B08456904CD0261F0E186560AC497F2929F40AF_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->set_IsValueType_0(L_3);
		// IsPrimitive = type.IsPrimitive;
		Type_t * L_4 = V_0;
		NullCheck((Type_t *)L_4);
		bool L_5;
		L_5 = Type_get_IsPrimitive_m43E50D507C45CE3BD51C0DC07C8AB061AFD6B3C3((Type_t *)L_4, /*hidden argument*/NULL);
		((RuntimeTypeInfoCache_1_t1B08456904CD0261F0E186560AC497F2929F40AF_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->set_IsPrimitive_1(L_5);
		// IsInterface = type.IsInterface;
		Type_t * L_6 = V_0;
		NullCheck((Type_t *)L_6);
		bool L_7;
		L_7 = Type_get_IsInterface_mB10C34DEE8B22E1597C813211BBED17DD724FC07((Type_t *)L_6, /*hidden argument*/NULL);
		((RuntimeTypeInfoCache_1_t1B08456904CD0261F0E186560AC497F2929F40AF_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->set_IsInterface_2(L_7);
		// IsAbstract = type.IsAbstract;
		Type_t * L_8 = V_0;
		NullCheck((Type_t *)L_8);
		bool L_9;
		L_9 = Type_get_IsAbstract_mB16DB56FCABF55740019D32C5286F38E30CAA19F((Type_t *)L_8, /*hidden argument*/NULL);
		((RuntimeTypeInfoCache_1_t1B08456904CD0261F0E186560AC497F2929F40AF_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->set_IsAbstract_3(L_9);
		// IsArray = type.IsArray;
		Type_t * L_10 = V_0;
		NullCheck((Type_t *)L_10);
		bool L_11;
		L_11 = Type_get_IsArray_m15FE83DD8FAF090F9BDA924753C7750AAEA7CFD1((Type_t *)L_10, /*hidden argument*/NULL);
		((RuntimeTypeInfoCache_1_t1B08456904CD0261F0E186560AC497F2929F40AF_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->set_IsArray_4(L_11);
		// IsEnum = type.IsEnum;
		Type_t * L_12 = V_0;
		NullCheck((Type_t *)L_12);
		bool L_13;
		L_13 = VirtFuncInvoker0< bool >::Invoke(67 /* System.Boolean System.Type::get_IsEnum() */, (Type_t *)L_12);
		((RuntimeTypeInfoCache_1_t1B08456904CD0261F0E186560AC497F2929F40AF_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->set_IsEnum_5(L_13);
		// IsEnumFlags = IsEnum && null != type.GetCustomAttribute<FlagsAttribute>();
		bool L_14 = ((RuntimeTypeInfoCache_1_t1B08456904CD0261F0E186560AC497F2929F40AF_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->get_IsEnum_5();
		if (!L_14)
		{
			goto IL_005f;
		}
	}
	{
		Type_t * L_15 = V_0;
		FlagsAttribute_t511C558FACEF1CC64702A8FAB67CAF3CBA65DF36 * L_16;
		L_16 = CustomAttributeExtensions_GetCustomAttribute_TisFlagsAttribute_t511C558FACEF1CC64702A8FAB67CAF3CBA65DF36_m2724CDFC73603733A936D82E548753DEAD4C0363((MemberInfo_t *)L_15, /*hidden argument*/CustomAttributeExtensions_GetCustomAttribute_TisFlagsAttribute_t511C558FACEF1CC64702A8FAB67CAF3CBA65DF36_m2724CDFC73603733A936D82E548753DEAD4C0363_RuntimeMethod_var);
		G_B3_0 = ((!(((RuntimeObject*)(FlagsAttribute_t511C558FACEF1CC64702A8FAB67CAF3CBA65DF36 *)L_16) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		goto IL_0060;
	}

IL_005f:
	{
		G_B3_0 = 0;
	}

IL_0060:
	{
		((RuntimeTypeInfoCache_1_t1B08456904CD0261F0E186560AC497F2929F40AF_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->set_IsEnumFlags_6((bool)G_B3_0);
		// IsNullable = Nullable.GetUnderlyingType(typeof(T)) != null;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_17 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->klass)->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_18;
		L_18 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_17, /*hidden argument*/NULL);
		Type_t * L_19;
		L_19 = Nullable_GetUnderlyingType_mC5699E7E11E1AFE25365CAB564A48F0193318629((Type_t *)L_18, /*hidden argument*/NULL);
		bool L_20;
		L_20 = Type_op_Inequality_m6DDC5E923203A79BF505F9275B694AD3FAA36DB0((Type_t *)L_19, (Type_t *)NULL, /*hidden argument*/NULL);
		((RuntimeTypeInfoCache_1_t1B08456904CD0261F0E186560AC497F2929F40AF_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->set_IsNullable_7(L_20);
		// IsObjectType = type == typeof(object);
		Type_t * L_21 = V_0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_22 = { reinterpret_cast<intptr_t> (RuntimeObject_0_0_0_var) };
		Type_t * L_23;
		L_23 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_22, /*hidden argument*/NULL);
		bool L_24;
		L_24 = Type_op_Equality_mA438719A1FDF103C7BBBB08AEF564E7FAEEA0046((Type_t *)L_21, (Type_t *)L_23, /*hidden argument*/NULL);
		((RuntimeTypeInfoCache_1_t1B08456904CD0261F0E186560AC497F2929F40AF_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->set_IsObjectType_8(L_24);
		// IsStringType = type == typeof(string);
		Type_t * L_25 = V_0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_26 = { reinterpret_cast<intptr_t> (String_t_0_0_0_var) };
		Type_t * L_27;
		L_27 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_26, /*hidden argument*/NULL);
		bool L_28;
		L_28 = Type_op_Equality_mA438719A1FDF103C7BBBB08AEF564E7FAEEA0046((Type_t *)L_25, (Type_t *)L_27, /*hidden argument*/NULL);
		((RuntimeTypeInfoCache_1_t1B08456904CD0261F0E186560AC497F2929F40AF_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->set_IsStringType_9(L_28);
		// IsContainerType = RuntimeTypeInfoCache.IsContainerType(type);
		Type_t * L_29 = V_0;
		bool L_30;
		L_30 = RuntimeTypeInfoCache_IsContainerType_m83F2173E5EB11D908CC3BA99C89B4B65B64EAA96((Type_t *)L_29, /*hidden argument*/NULL);
		((RuntimeTypeInfoCache_1_t1B08456904CD0261F0E186560AC497F2929F40AF_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->set_IsContainerType_10(L_30);
		// CanBeNull = !IsValueType;
		bool L_31 = ((RuntimeTypeInfoCache_1_t1B08456904CD0261F0E186560AC497F2929F40AF_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->get_IsValueType_0();
		((RuntimeTypeInfoCache_1_t1B08456904CD0261F0E186560AC497F2929F40AF_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->set_CanBeNull_11((bool)((((int32_t)L_31) == ((int32_t)0))? 1 : 0));
		// IsNullableOrEnum = IsEnum;
		bool L_32 = ((RuntimeTypeInfoCache_1_t1B08456904CD0261F0E186560AC497F2929F40AF_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->get_IsEnum_5();
		((RuntimeTypeInfoCache_1_t1B08456904CD0261F0E186560AC497F2929F40AF_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->set_IsNullableOrEnum_12(L_32);
		// IsPrimitiveOrString = IsPrimitive || IsStringType;
		bool L_33 = ((RuntimeTypeInfoCache_1_t1B08456904CD0261F0E186560AC497F2929F40AF_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->get_IsPrimitive_1();
		if (L_33)
		{
			goto IL_00d9;
		}
	}
	{
		bool L_34 = ((RuntimeTypeInfoCache_1_t1B08456904CD0261F0E186560AC497F2929F40AF_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->get_IsStringType_9();
		G_B6_0 = ((int32_t)(L_34));
		goto IL_00da;
	}

IL_00d9:
	{
		G_B6_0 = 1;
	}

IL_00da:
	{
		((RuntimeTypeInfoCache_1_t1B08456904CD0261F0E186560AC497F2929F40AF_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->set_IsPrimitiveOrString_13((bool)G_B6_0);
		// IsAbstractOrInterface = IsAbstract || IsInterface;
		bool L_35 = ((RuntimeTypeInfoCache_1_t1B08456904CD0261F0E186560AC497F2929F40AF_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->get_IsAbstract_3();
		if (L_35)
		{
			goto IL_00ed;
		}
	}
	{
		bool L_36 = ((RuntimeTypeInfoCache_1_t1B08456904CD0261F0E186560AC497F2929F40AF_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->get_IsInterface_2();
		G_B9_0 = ((int32_t)(L_36));
		goto IL_00ee;
	}

IL_00ed:
	{
		G_B9_0 = 1;
	}

IL_00ee:
	{
		((RuntimeTypeInfoCache_1_t1B08456904CD0261F0E186560AC497F2929F40AF_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->set_IsAbstractOrInterface_14((bool)G_B9_0);
		// CanBeNull |= IsNullable;
		bool L_37 = ((RuntimeTypeInfoCache_1_t1B08456904CD0261F0E186560AC497F2929F40AF_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->get_CanBeNull_11();
		bool L_38 = ((RuntimeTypeInfoCache_1_t1B08456904CD0261F0E186560AC497F2929F40AF_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->get_IsNullable_7();
		((RuntimeTypeInfoCache_1_t1B08456904CD0261F0E186560AC497F2929F40AF_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->set_CanBeNull_11((bool)((int32_t)((int32_t)L_37|(int32_t)L_38)));
		// IsNullableOrEnum |= IsNullable;
		bool L_39 = ((RuntimeTypeInfoCache_1_t1B08456904CD0261F0E186560AC497F2929F40AF_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->get_IsNullableOrEnum_12();
		bool L_40 = ((RuntimeTypeInfoCache_1_t1B08456904CD0261F0E186560AC497F2929F40AF_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->get_IsNullable_7();
		((RuntimeTypeInfoCache_1_t1B08456904CD0261F0E186560AC497F2929F40AF_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->set_IsNullableOrEnum_12((bool)((int32_t)((int32_t)L_39|(int32_t)L_40)));
		// IsLazyLoadReference = type.IsGenericType && type.GetGenericTypeDefinition() == typeof(UnityEngine.LazyLoadReference<>);
		Type_t * L_41 = V_0;
		NullCheck((Type_t *)L_41);
		bool L_42;
		L_42 = VirtFuncInvoker0< bool >::Invoke(71 /* System.Boolean System.Type::get_IsGenericType() */, (Type_t *)L_41);
		if (!L_42)
		{
			goto IL_0132;
		}
	}
	{
		Type_t * L_43 = V_0;
		NullCheck((Type_t *)L_43);
		Type_t * L_44;
		L_44 = VirtFuncInvoker0< Type_t * >::Invoke(96 /* System.Type System.Type::GetGenericTypeDefinition() */, (Type_t *)L_43);
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_45 = { reinterpret_cast<intptr_t> (LazyLoadReference_1_tA48C53B4B246BEF5D956E8AB23A2EC45C6C5C36E_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_46;
		L_46 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_45, /*hidden argument*/NULL);
		bool L_47;
		L_47 = Type_op_Equality_mA438719A1FDF103C7BBBB08AEF564E7FAEEA0046((Type_t *)L_44, (Type_t *)L_46, /*hidden argument*/NULL);
		G_B12_0 = ((int32_t)(L_47));
		goto IL_0133;
	}

IL_0132:
	{
		G_B12_0 = 0;
	}

IL_0133:
	{
		((RuntimeTypeInfoCache_1_t1B08456904CD0261F0E186560AC497F2929F40AF_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->set_IsLazyLoadReference_15((bool)G_B12_0);
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
// System.Void Unity.Properties.Internal.RuntimeTypeInfoCache`1<UnityEngine.Vector3>::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RuntimeTypeInfoCache_1__cctor_mBE986FE02674B5706B978A402EFFBF1865DC867E_gshared (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CustomAttributeExtensions_GetCustomAttribute_TisFlagsAttribute_t511C558FACEF1CC64702A8FAB67CAF3CBA65DF36_m2724CDFC73603733A936D82E548753DEAD4C0363_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LazyLoadReference_1_tA48C53B4B246BEF5D956E8AB23A2EC45C6C5C36E_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Type_t * V_0 = NULL;
	int32_t G_B3_0 = 0;
	int32_t G_B6_0 = 0;
	int32_t G_B9_0 = 0;
	int32_t G_B12_0 = 0;
	{
		// var type = typeof(T);
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_0 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->klass)->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1;
		L_1 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_0, /*hidden argument*/NULL);
		V_0 = (Type_t *)L_1;
		// IsValueType = type.IsValueType;
		Type_t * L_2 = V_0;
		NullCheck((Type_t *)L_2);
		bool L_3;
		L_3 = Type_get_IsValueType_m9CCCB4759C2D5A890096F8DBA66DAAEFE9D913FB((Type_t *)L_2, /*hidden argument*/NULL);
		((RuntimeTypeInfoCache_1_t15EBBC0C1A5785754449EF41C13129587F6AB1E0_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->set_IsValueType_0(L_3);
		// IsPrimitive = type.IsPrimitive;
		Type_t * L_4 = V_0;
		NullCheck((Type_t *)L_4);
		bool L_5;
		L_5 = Type_get_IsPrimitive_m43E50D507C45CE3BD51C0DC07C8AB061AFD6B3C3((Type_t *)L_4, /*hidden argument*/NULL);
		((RuntimeTypeInfoCache_1_t15EBBC0C1A5785754449EF41C13129587F6AB1E0_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->set_IsPrimitive_1(L_5);
		// IsInterface = type.IsInterface;
		Type_t * L_6 = V_0;
		NullCheck((Type_t *)L_6);
		bool L_7;
		L_7 = Type_get_IsInterface_mB10C34DEE8B22E1597C813211BBED17DD724FC07((Type_t *)L_6, /*hidden argument*/NULL);
		((RuntimeTypeInfoCache_1_t15EBBC0C1A5785754449EF41C13129587F6AB1E0_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->set_IsInterface_2(L_7);
		// IsAbstract = type.IsAbstract;
		Type_t * L_8 = V_0;
		NullCheck((Type_t *)L_8);
		bool L_9;
		L_9 = Type_get_IsAbstract_mB16DB56FCABF55740019D32C5286F38E30CAA19F((Type_t *)L_8, /*hidden argument*/NULL);
		((RuntimeTypeInfoCache_1_t15EBBC0C1A5785754449EF41C13129587F6AB1E0_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->set_IsAbstract_3(L_9);
		// IsArray = type.IsArray;
		Type_t * L_10 = V_0;
		NullCheck((Type_t *)L_10);
		bool L_11;
		L_11 = Type_get_IsArray_m15FE83DD8FAF090F9BDA924753C7750AAEA7CFD1((Type_t *)L_10, /*hidden argument*/NULL);
		((RuntimeTypeInfoCache_1_t15EBBC0C1A5785754449EF41C13129587F6AB1E0_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->set_IsArray_4(L_11);
		// IsEnum = type.IsEnum;
		Type_t * L_12 = V_0;
		NullCheck((Type_t *)L_12);
		bool L_13;
		L_13 = VirtFuncInvoker0< bool >::Invoke(67 /* System.Boolean System.Type::get_IsEnum() */, (Type_t *)L_12);
		((RuntimeTypeInfoCache_1_t15EBBC0C1A5785754449EF41C13129587F6AB1E0_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->set_IsEnum_5(L_13);
		// IsEnumFlags = IsEnum && null != type.GetCustomAttribute<FlagsAttribute>();
		bool L_14 = ((RuntimeTypeInfoCache_1_t15EBBC0C1A5785754449EF41C13129587F6AB1E0_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->get_IsEnum_5();
		if (!L_14)
		{
			goto IL_005f;
		}
	}
	{
		Type_t * L_15 = V_0;
		FlagsAttribute_t511C558FACEF1CC64702A8FAB67CAF3CBA65DF36 * L_16;
		L_16 = CustomAttributeExtensions_GetCustomAttribute_TisFlagsAttribute_t511C558FACEF1CC64702A8FAB67CAF3CBA65DF36_m2724CDFC73603733A936D82E548753DEAD4C0363((MemberInfo_t *)L_15, /*hidden argument*/CustomAttributeExtensions_GetCustomAttribute_TisFlagsAttribute_t511C558FACEF1CC64702A8FAB67CAF3CBA65DF36_m2724CDFC73603733A936D82E548753DEAD4C0363_RuntimeMethod_var);
		G_B3_0 = ((!(((RuntimeObject*)(FlagsAttribute_t511C558FACEF1CC64702A8FAB67CAF3CBA65DF36 *)L_16) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		goto IL_0060;
	}

IL_005f:
	{
		G_B3_0 = 0;
	}

IL_0060:
	{
		((RuntimeTypeInfoCache_1_t15EBBC0C1A5785754449EF41C13129587F6AB1E0_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->set_IsEnumFlags_6((bool)G_B3_0);
		// IsNullable = Nullable.GetUnderlyingType(typeof(T)) != null;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_17 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->klass)->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_18;
		L_18 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_17, /*hidden argument*/NULL);
		Type_t * L_19;
		L_19 = Nullable_GetUnderlyingType_mC5699E7E11E1AFE25365CAB564A48F0193318629((Type_t *)L_18, /*hidden argument*/NULL);
		bool L_20;
		L_20 = Type_op_Inequality_m6DDC5E923203A79BF505F9275B694AD3FAA36DB0((Type_t *)L_19, (Type_t *)NULL, /*hidden argument*/NULL);
		((RuntimeTypeInfoCache_1_t15EBBC0C1A5785754449EF41C13129587F6AB1E0_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->set_IsNullable_7(L_20);
		// IsObjectType = type == typeof(object);
		Type_t * L_21 = V_0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_22 = { reinterpret_cast<intptr_t> (RuntimeObject_0_0_0_var) };
		Type_t * L_23;
		L_23 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_22, /*hidden argument*/NULL);
		bool L_24;
		L_24 = Type_op_Equality_mA438719A1FDF103C7BBBB08AEF564E7FAEEA0046((Type_t *)L_21, (Type_t *)L_23, /*hidden argument*/NULL);
		((RuntimeTypeInfoCache_1_t15EBBC0C1A5785754449EF41C13129587F6AB1E0_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->set_IsObjectType_8(L_24);
		// IsStringType = type == typeof(string);
		Type_t * L_25 = V_0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_26 = { reinterpret_cast<intptr_t> (String_t_0_0_0_var) };
		Type_t * L_27;
		L_27 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_26, /*hidden argument*/NULL);
		bool L_28;
		L_28 = Type_op_Equality_mA438719A1FDF103C7BBBB08AEF564E7FAEEA0046((Type_t *)L_25, (Type_t *)L_27, /*hidden argument*/NULL);
		((RuntimeTypeInfoCache_1_t15EBBC0C1A5785754449EF41C13129587F6AB1E0_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->set_IsStringType_9(L_28);
		// IsContainerType = RuntimeTypeInfoCache.IsContainerType(type);
		Type_t * L_29 = V_0;
		bool L_30;
		L_30 = RuntimeTypeInfoCache_IsContainerType_m83F2173E5EB11D908CC3BA99C89B4B65B64EAA96((Type_t *)L_29, /*hidden argument*/NULL);
		((RuntimeTypeInfoCache_1_t15EBBC0C1A5785754449EF41C13129587F6AB1E0_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->set_IsContainerType_10(L_30);
		// CanBeNull = !IsValueType;
		bool L_31 = ((RuntimeTypeInfoCache_1_t15EBBC0C1A5785754449EF41C13129587F6AB1E0_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->get_IsValueType_0();
		((RuntimeTypeInfoCache_1_t15EBBC0C1A5785754449EF41C13129587F6AB1E0_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->set_CanBeNull_11((bool)((((int32_t)L_31) == ((int32_t)0))? 1 : 0));
		// IsNullableOrEnum = IsEnum;
		bool L_32 = ((RuntimeTypeInfoCache_1_t15EBBC0C1A5785754449EF41C13129587F6AB1E0_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->get_IsEnum_5();
		((RuntimeTypeInfoCache_1_t15EBBC0C1A5785754449EF41C13129587F6AB1E0_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->set_IsNullableOrEnum_12(L_32);
		// IsPrimitiveOrString = IsPrimitive || IsStringType;
		bool L_33 = ((RuntimeTypeInfoCache_1_t15EBBC0C1A5785754449EF41C13129587F6AB1E0_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->get_IsPrimitive_1();
		if (L_33)
		{
			goto IL_00d9;
		}
	}
	{
		bool L_34 = ((RuntimeTypeInfoCache_1_t15EBBC0C1A5785754449EF41C13129587F6AB1E0_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->get_IsStringType_9();
		G_B6_0 = ((int32_t)(L_34));
		goto IL_00da;
	}

IL_00d9:
	{
		G_B6_0 = 1;
	}

IL_00da:
	{
		((RuntimeTypeInfoCache_1_t15EBBC0C1A5785754449EF41C13129587F6AB1E0_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->set_IsPrimitiveOrString_13((bool)G_B6_0);
		// IsAbstractOrInterface = IsAbstract || IsInterface;
		bool L_35 = ((RuntimeTypeInfoCache_1_t15EBBC0C1A5785754449EF41C13129587F6AB1E0_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->get_IsAbstract_3();
		if (L_35)
		{
			goto IL_00ed;
		}
	}
	{
		bool L_36 = ((RuntimeTypeInfoCache_1_t15EBBC0C1A5785754449EF41C13129587F6AB1E0_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->get_IsInterface_2();
		G_B9_0 = ((int32_t)(L_36));
		goto IL_00ee;
	}

IL_00ed:
	{
		G_B9_0 = 1;
	}

IL_00ee:
	{
		((RuntimeTypeInfoCache_1_t15EBBC0C1A5785754449EF41C13129587F6AB1E0_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->set_IsAbstractOrInterface_14((bool)G_B9_0);
		// CanBeNull |= IsNullable;
		bool L_37 = ((RuntimeTypeInfoCache_1_t15EBBC0C1A5785754449EF41C13129587F6AB1E0_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->get_CanBeNull_11();
		bool L_38 = ((RuntimeTypeInfoCache_1_t15EBBC0C1A5785754449EF41C13129587F6AB1E0_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->get_IsNullable_7();
		((RuntimeTypeInfoCache_1_t15EBBC0C1A5785754449EF41C13129587F6AB1E0_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->set_CanBeNull_11((bool)((int32_t)((int32_t)L_37|(int32_t)L_38)));
		// IsNullableOrEnum |= IsNullable;
		bool L_39 = ((RuntimeTypeInfoCache_1_t15EBBC0C1A5785754449EF41C13129587F6AB1E0_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->get_IsNullableOrEnum_12();
		bool L_40 = ((RuntimeTypeInfoCache_1_t15EBBC0C1A5785754449EF41C13129587F6AB1E0_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->get_IsNullable_7();
		((RuntimeTypeInfoCache_1_t15EBBC0C1A5785754449EF41C13129587F6AB1E0_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->set_IsNullableOrEnum_12((bool)((int32_t)((int32_t)L_39|(int32_t)L_40)));
		// IsLazyLoadReference = type.IsGenericType && type.GetGenericTypeDefinition() == typeof(UnityEngine.LazyLoadReference<>);
		Type_t * L_41 = V_0;
		NullCheck((Type_t *)L_41);
		bool L_42;
		L_42 = VirtFuncInvoker0< bool >::Invoke(71 /* System.Boolean System.Type::get_IsGenericType() */, (Type_t *)L_41);
		if (!L_42)
		{
			goto IL_0132;
		}
	}
	{
		Type_t * L_43 = V_0;
		NullCheck((Type_t *)L_43);
		Type_t * L_44;
		L_44 = VirtFuncInvoker0< Type_t * >::Invoke(96 /* System.Type System.Type::GetGenericTypeDefinition() */, (Type_t *)L_43);
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_45 = { reinterpret_cast<intptr_t> (LazyLoadReference_1_tA48C53B4B246BEF5D956E8AB23A2EC45C6C5C36E_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_46;
		L_46 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_45, /*hidden argument*/NULL);
		bool L_47;
		L_47 = Type_op_Equality_mA438719A1FDF103C7BBBB08AEF564E7FAEEA0046((Type_t *)L_44, (Type_t *)L_46, /*hidden argument*/NULL);
		G_B12_0 = ((int32_t)(L_47));
		goto IL_0133;
	}

IL_0132:
	{
		G_B12_0 = 0;
	}

IL_0133:
	{
		((RuntimeTypeInfoCache_1_t15EBBC0C1A5785754449EF41C13129587F6AB1E0_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->set_IsLazyLoadReference_15((bool)G_B12_0);
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
// System.Void Unity.Properties.Internal.RuntimeTypeInfoCache`1<UnityEngine.Vector3Int>::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RuntimeTypeInfoCache_1__cctor_mCBEBFC819A4EE589E49CD9176367FB9109682374_gshared (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CustomAttributeExtensions_GetCustomAttribute_TisFlagsAttribute_t511C558FACEF1CC64702A8FAB67CAF3CBA65DF36_m2724CDFC73603733A936D82E548753DEAD4C0363_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LazyLoadReference_1_tA48C53B4B246BEF5D956E8AB23A2EC45C6C5C36E_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Type_t * V_0 = NULL;
	int32_t G_B3_0 = 0;
	int32_t G_B6_0 = 0;
	int32_t G_B9_0 = 0;
	int32_t G_B12_0 = 0;
	{
		// var type = typeof(T);
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_0 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->klass)->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1;
		L_1 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_0, /*hidden argument*/NULL);
		V_0 = (Type_t *)L_1;
		// IsValueType = type.IsValueType;
		Type_t * L_2 = V_0;
		NullCheck((Type_t *)L_2);
		bool L_3;
		L_3 = Type_get_IsValueType_m9CCCB4759C2D5A890096F8DBA66DAAEFE9D913FB((Type_t *)L_2, /*hidden argument*/NULL);
		((RuntimeTypeInfoCache_1_tCD8F19191F9C5C2460B8B66CC3208CFFE9F5EFA6_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->set_IsValueType_0(L_3);
		// IsPrimitive = type.IsPrimitive;
		Type_t * L_4 = V_0;
		NullCheck((Type_t *)L_4);
		bool L_5;
		L_5 = Type_get_IsPrimitive_m43E50D507C45CE3BD51C0DC07C8AB061AFD6B3C3((Type_t *)L_4, /*hidden argument*/NULL);
		((RuntimeTypeInfoCache_1_tCD8F19191F9C5C2460B8B66CC3208CFFE9F5EFA6_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->set_IsPrimitive_1(L_5);
		// IsInterface = type.IsInterface;
		Type_t * L_6 = V_0;
		NullCheck((Type_t *)L_6);
		bool L_7;
		L_7 = Type_get_IsInterface_mB10C34DEE8B22E1597C813211BBED17DD724FC07((Type_t *)L_6, /*hidden argument*/NULL);
		((RuntimeTypeInfoCache_1_tCD8F19191F9C5C2460B8B66CC3208CFFE9F5EFA6_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->set_IsInterface_2(L_7);
		// IsAbstract = type.IsAbstract;
		Type_t * L_8 = V_0;
		NullCheck((Type_t *)L_8);
		bool L_9;
		L_9 = Type_get_IsAbstract_mB16DB56FCABF55740019D32C5286F38E30CAA19F((Type_t *)L_8, /*hidden argument*/NULL);
		((RuntimeTypeInfoCache_1_tCD8F19191F9C5C2460B8B66CC3208CFFE9F5EFA6_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->set_IsAbstract_3(L_9);
		// IsArray = type.IsArray;
		Type_t * L_10 = V_0;
		NullCheck((Type_t *)L_10);
		bool L_11;
		L_11 = Type_get_IsArray_m15FE83DD8FAF090F9BDA924753C7750AAEA7CFD1((Type_t *)L_10, /*hidden argument*/NULL);
		((RuntimeTypeInfoCache_1_tCD8F19191F9C5C2460B8B66CC3208CFFE9F5EFA6_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->set_IsArray_4(L_11);
		// IsEnum = type.IsEnum;
		Type_t * L_12 = V_0;
		NullCheck((Type_t *)L_12);
		bool L_13;
		L_13 = VirtFuncInvoker0< bool >::Invoke(67 /* System.Boolean System.Type::get_IsEnum() */, (Type_t *)L_12);
		((RuntimeTypeInfoCache_1_tCD8F19191F9C5C2460B8B66CC3208CFFE9F5EFA6_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->set_IsEnum_5(L_13);
		// IsEnumFlags = IsEnum && null != type.GetCustomAttribute<FlagsAttribute>();
		bool L_14 = ((RuntimeTypeInfoCache_1_tCD8F19191F9C5C2460B8B66CC3208CFFE9F5EFA6_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->get_IsEnum_5();
		if (!L_14)
		{
			goto IL_005f;
		}
	}
	{
		Type_t * L_15 = V_0;
		FlagsAttribute_t511C558FACEF1CC64702A8FAB67CAF3CBA65DF36 * L_16;
		L_16 = CustomAttributeExtensions_GetCustomAttribute_TisFlagsAttribute_t511C558FACEF1CC64702A8FAB67CAF3CBA65DF36_m2724CDFC73603733A936D82E548753DEAD4C0363((MemberInfo_t *)L_15, /*hidden argument*/CustomAttributeExtensions_GetCustomAttribute_TisFlagsAttribute_t511C558FACEF1CC64702A8FAB67CAF3CBA65DF36_m2724CDFC73603733A936D82E548753DEAD4C0363_RuntimeMethod_var);
		G_B3_0 = ((!(((RuntimeObject*)(FlagsAttribute_t511C558FACEF1CC64702A8FAB67CAF3CBA65DF36 *)L_16) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		goto IL_0060;
	}

IL_005f:
	{
		G_B3_0 = 0;
	}

IL_0060:
	{
		((RuntimeTypeInfoCache_1_tCD8F19191F9C5C2460B8B66CC3208CFFE9F5EFA6_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->set_IsEnumFlags_6((bool)G_B3_0);
		// IsNullable = Nullable.GetUnderlyingType(typeof(T)) != null;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_17 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->klass)->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_18;
		L_18 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_17, /*hidden argument*/NULL);
		Type_t * L_19;
		L_19 = Nullable_GetUnderlyingType_mC5699E7E11E1AFE25365CAB564A48F0193318629((Type_t *)L_18, /*hidden argument*/NULL);
		bool L_20;
		L_20 = Type_op_Inequality_m6DDC5E923203A79BF505F9275B694AD3FAA36DB0((Type_t *)L_19, (Type_t *)NULL, /*hidden argument*/NULL);
		((RuntimeTypeInfoCache_1_tCD8F19191F9C5C2460B8B66CC3208CFFE9F5EFA6_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->set_IsNullable_7(L_20);
		// IsObjectType = type == typeof(object);
		Type_t * L_21 = V_0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_22 = { reinterpret_cast<intptr_t> (RuntimeObject_0_0_0_var) };
		Type_t * L_23;
		L_23 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_22, /*hidden argument*/NULL);
		bool L_24;
		L_24 = Type_op_Equality_mA438719A1FDF103C7BBBB08AEF564E7FAEEA0046((Type_t *)L_21, (Type_t *)L_23, /*hidden argument*/NULL);
		((RuntimeTypeInfoCache_1_tCD8F19191F9C5C2460B8B66CC3208CFFE9F5EFA6_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->set_IsObjectType_8(L_24);
		// IsStringType = type == typeof(string);
		Type_t * L_25 = V_0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_26 = { reinterpret_cast<intptr_t> (String_t_0_0_0_var) };
		Type_t * L_27;
		L_27 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_26, /*hidden argument*/NULL);
		bool L_28;
		L_28 = Type_op_Equality_mA438719A1FDF103C7BBBB08AEF564E7FAEEA0046((Type_t *)L_25, (Type_t *)L_27, /*hidden argument*/NULL);
		((RuntimeTypeInfoCache_1_tCD8F19191F9C5C2460B8B66CC3208CFFE9F5EFA6_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->set_IsStringType_9(L_28);
		// IsContainerType = RuntimeTypeInfoCache.IsContainerType(type);
		Type_t * L_29 = V_0;
		bool L_30;
		L_30 = RuntimeTypeInfoCache_IsContainerType_m83F2173E5EB11D908CC3BA99C89B4B65B64EAA96((Type_t *)L_29, /*hidden argument*/NULL);
		((RuntimeTypeInfoCache_1_tCD8F19191F9C5C2460B8B66CC3208CFFE9F5EFA6_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->set_IsContainerType_10(L_30);
		// CanBeNull = !IsValueType;
		bool L_31 = ((RuntimeTypeInfoCache_1_tCD8F19191F9C5C2460B8B66CC3208CFFE9F5EFA6_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->get_IsValueType_0();
		((RuntimeTypeInfoCache_1_tCD8F19191F9C5C2460B8B66CC3208CFFE9F5EFA6_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->set_CanBeNull_11((bool)((((int32_t)L_31) == ((int32_t)0))? 1 : 0));
		// IsNullableOrEnum = IsEnum;
		bool L_32 = ((RuntimeTypeInfoCache_1_tCD8F19191F9C5C2460B8B66CC3208CFFE9F5EFA6_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->get_IsEnum_5();
		((RuntimeTypeInfoCache_1_tCD8F19191F9C5C2460B8B66CC3208CFFE9F5EFA6_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->set_IsNullableOrEnum_12(L_32);
		// IsPrimitiveOrString = IsPrimitive || IsStringType;
		bool L_33 = ((RuntimeTypeInfoCache_1_tCD8F19191F9C5C2460B8B66CC3208CFFE9F5EFA6_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->get_IsPrimitive_1();
		if (L_33)
		{
			goto IL_00d9;
		}
	}
	{
		bool L_34 = ((RuntimeTypeInfoCache_1_tCD8F19191F9C5C2460B8B66CC3208CFFE9F5EFA6_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->get_IsStringType_9();
		G_B6_0 = ((int32_t)(L_34));
		goto IL_00da;
	}

IL_00d9:
	{
		G_B6_0 = 1;
	}

IL_00da:
	{
		((RuntimeTypeInfoCache_1_tCD8F19191F9C5C2460B8B66CC3208CFFE9F5EFA6_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->set_IsPrimitiveOrString_13((bool)G_B6_0);
		// IsAbstractOrInterface = IsAbstract || IsInterface;
		bool L_35 = ((RuntimeTypeInfoCache_1_tCD8F19191F9C5C2460B8B66CC3208CFFE9F5EFA6_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->get_IsAbstract_3();
		if (L_35)
		{
			goto IL_00ed;
		}
	}
	{
		bool L_36 = ((RuntimeTypeInfoCache_1_tCD8F19191F9C5C2460B8B66CC3208CFFE9F5EFA6_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->get_IsInterface_2();
		G_B9_0 = ((int32_t)(L_36));
		goto IL_00ee;
	}

IL_00ed:
	{
		G_B9_0 = 1;
	}

IL_00ee:
	{
		((RuntimeTypeInfoCache_1_tCD8F19191F9C5C2460B8B66CC3208CFFE9F5EFA6_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->set_IsAbstractOrInterface_14((bool)G_B9_0);
		// CanBeNull |= IsNullable;
		bool L_37 = ((RuntimeTypeInfoCache_1_tCD8F19191F9C5C2460B8B66CC3208CFFE9F5EFA6_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->get_CanBeNull_11();
		bool L_38 = ((RuntimeTypeInfoCache_1_tCD8F19191F9C5C2460B8B66CC3208CFFE9F5EFA6_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->get_IsNullable_7();
		((RuntimeTypeInfoCache_1_tCD8F19191F9C5C2460B8B66CC3208CFFE9F5EFA6_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->set_CanBeNull_11((bool)((int32_t)((int32_t)L_37|(int32_t)L_38)));
		// IsNullableOrEnum |= IsNullable;
		bool L_39 = ((RuntimeTypeInfoCache_1_tCD8F19191F9C5C2460B8B66CC3208CFFE9F5EFA6_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->get_IsNullableOrEnum_12();
		bool L_40 = ((RuntimeTypeInfoCache_1_tCD8F19191F9C5C2460B8B66CC3208CFFE9F5EFA6_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->get_IsNullable_7();
		((RuntimeTypeInfoCache_1_tCD8F19191F9C5C2460B8B66CC3208CFFE9F5EFA6_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->set_IsNullableOrEnum_12((bool)((int32_t)((int32_t)L_39|(int32_t)L_40)));
		// IsLazyLoadReference = type.IsGenericType && type.GetGenericTypeDefinition() == typeof(UnityEngine.LazyLoadReference<>);
		Type_t * L_41 = V_0;
		NullCheck((Type_t *)L_41);
		bool L_42;
		L_42 = VirtFuncInvoker0< bool >::Invoke(71 /* System.Boolean System.Type::get_IsGenericType() */, (Type_t *)L_41);
		if (!L_42)
		{
			goto IL_0132;
		}
	}
	{
		Type_t * L_43 = V_0;
		NullCheck((Type_t *)L_43);
		Type_t * L_44;
		L_44 = VirtFuncInvoker0< Type_t * >::Invoke(96 /* System.Type System.Type::GetGenericTypeDefinition() */, (Type_t *)L_43);
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_45 = { reinterpret_cast<intptr_t> (LazyLoadReference_1_tA48C53B4B246BEF5D956E8AB23A2EC45C6C5C36E_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_46;
		L_46 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_45, /*hidden argument*/NULL);
		bool L_47;
		L_47 = Type_op_Equality_mA438719A1FDF103C7BBBB08AEF564E7FAEEA0046((Type_t *)L_44, (Type_t *)L_46, /*hidden argument*/NULL);
		G_B12_0 = ((int32_t)(L_47));
		goto IL_0133;
	}

IL_0132:
	{
		G_B12_0 = 0;
	}

IL_0133:
	{
		((RuntimeTypeInfoCache_1_tCD8F19191F9C5C2460B8B66CC3208CFFE9F5EFA6_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->set_IsLazyLoadReference_15((bool)G_B12_0);
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
// System.Void Unity.Properties.Internal.RuntimeTypeInfoCache`1<Unity.MARS.Companion.Core.CompanionDataRecordingUtils/CameraPathRecording>::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RuntimeTypeInfoCache_1__cctor_m00A50FB72A2F6AFF34D9017FC95E1702D45FCFB0_gshared (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CustomAttributeExtensions_GetCustomAttribute_TisFlagsAttribute_t511C558FACEF1CC64702A8FAB67CAF3CBA65DF36_m2724CDFC73603733A936D82E548753DEAD4C0363_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LazyLoadReference_1_tA48C53B4B246BEF5D956E8AB23A2EC45C6C5C36E_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Type_t * V_0 = NULL;
	int32_t G_B3_0 = 0;
	int32_t G_B6_0 = 0;
	int32_t G_B9_0 = 0;
	int32_t G_B12_0 = 0;
	{
		// var type = typeof(T);
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_0 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->klass)->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1;
		L_1 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_0, /*hidden argument*/NULL);
		V_0 = (Type_t *)L_1;
		// IsValueType = type.IsValueType;
		Type_t * L_2 = V_0;
		NullCheck((Type_t *)L_2);
		bool L_3;
		L_3 = Type_get_IsValueType_m9CCCB4759C2D5A890096F8DBA66DAAEFE9D913FB((Type_t *)L_2, /*hidden argument*/NULL);
		((RuntimeTypeInfoCache_1_t2771EEEA6D087119F546F59F2D8F445E76C2E47D_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->set_IsValueType_0(L_3);
		// IsPrimitive = type.IsPrimitive;
		Type_t * L_4 = V_0;
		NullCheck((Type_t *)L_4);
		bool L_5;
		L_5 = Type_get_IsPrimitive_m43E50D507C45CE3BD51C0DC07C8AB061AFD6B3C3((Type_t *)L_4, /*hidden argument*/NULL);
		((RuntimeTypeInfoCache_1_t2771EEEA6D087119F546F59F2D8F445E76C2E47D_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->set_IsPrimitive_1(L_5);
		// IsInterface = type.IsInterface;
		Type_t * L_6 = V_0;
		NullCheck((Type_t *)L_6);
		bool L_7;
		L_7 = Type_get_IsInterface_mB10C34DEE8B22E1597C813211BBED17DD724FC07((Type_t *)L_6, /*hidden argument*/NULL);
		((RuntimeTypeInfoCache_1_t2771EEEA6D087119F546F59F2D8F445E76C2E47D_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->set_IsInterface_2(L_7);
		// IsAbstract = type.IsAbstract;
		Type_t * L_8 = V_0;
		NullCheck((Type_t *)L_8);
		bool L_9;
		L_9 = Type_get_IsAbstract_mB16DB56FCABF55740019D32C5286F38E30CAA19F((Type_t *)L_8, /*hidden argument*/NULL);
		((RuntimeTypeInfoCache_1_t2771EEEA6D087119F546F59F2D8F445E76C2E47D_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->set_IsAbstract_3(L_9);
		// IsArray = type.IsArray;
		Type_t * L_10 = V_0;
		NullCheck((Type_t *)L_10);
		bool L_11;
		L_11 = Type_get_IsArray_m15FE83DD8FAF090F9BDA924753C7750AAEA7CFD1((Type_t *)L_10, /*hidden argument*/NULL);
		((RuntimeTypeInfoCache_1_t2771EEEA6D087119F546F59F2D8F445E76C2E47D_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->set_IsArray_4(L_11);
		// IsEnum = type.IsEnum;
		Type_t * L_12 = V_0;
		NullCheck((Type_t *)L_12);
		bool L_13;
		L_13 = VirtFuncInvoker0< bool >::Invoke(67 /* System.Boolean System.Type::get_IsEnum() */, (Type_t *)L_12);
		((RuntimeTypeInfoCache_1_t2771EEEA6D087119F546F59F2D8F445E76C2E47D_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->set_IsEnum_5(L_13);
		// IsEnumFlags = IsEnum && null != type.GetCustomAttribute<FlagsAttribute>();
		bool L_14 = ((RuntimeTypeInfoCache_1_t2771EEEA6D087119F546F59F2D8F445E76C2E47D_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->get_IsEnum_5();
		if (!L_14)
		{
			goto IL_005f;
		}
	}
	{
		Type_t * L_15 = V_0;
		FlagsAttribute_t511C558FACEF1CC64702A8FAB67CAF3CBA65DF36 * L_16;
		L_16 = CustomAttributeExtensions_GetCustomAttribute_TisFlagsAttribute_t511C558FACEF1CC64702A8FAB67CAF3CBA65DF36_m2724CDFC73603733A936D82E548753DEAD4C0363((MemberInfo_t *)L_15, /*hidden argument*/CustomAttributeExtensions_GetCustomAttribute_TisFlagsAttribute_t511C558FACEF1CC64702A8FAB67CAF3CBA65DF36_m2724CDFC73603733A936D82E548753DEAD4C0363_RuntimeMethod_var);
		G_B3_0 = ((!(((RuntimeObject*)(FlagsAttribute_t511C558FACEF1CC64702A8FAB67CAF3CBA65DF36 *)L_16) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		goto IL_0060;
	}

IL_005f:
	{
		G_B3_0 = 0;
	}

IL_0060:
	{
		((RuntimeTypeInfoCache_1_t2771EEEA6D087119F546F59F2D8F445E76C2E47D_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->set_IsEnumFlags_6((bool)G_B3_0);
		// IsNullable = Nullable.GetUnderlyingType(typeof(T)) != null;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_17 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->klass)->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_18;
		L_18 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_17, /*hidden argument*/NULL);
		Type_t * L_19;
		L_19 = Nullable_GetUnderlyingType_mC5699E7E11E1AFE25365CAB564A48F0193318629((Type_t *)L_18, /*hidden argument*/NULL);
		bool L_20;
		L_20 = Type_op_Inequality_m6DDC5E923203A79BF505F9275B694AD3FAA36DB0((Type_t *)L_19, (Type_t *)NULL, /*hidden argument*/NULL);
		((RuntimeTypeInfoCache_1_t2771EEEA6D087119F546F59F2D8F445E76C2E47D_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->set_IsNullable_7(L_20);
		// IsObjectType = type == typeof(object);
		Type_t * L_21 = V_0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_22 = { reinterpret_cast<intptr_t> (RuntimeObject_0_0_0_var) };
		Type_t * L_23;
		L_23 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_22, /*hidden argument*/NULL);
		bool L_24;
		L_24 = Type_op_Equality_mA438719A1FDF103C7BBBB08AEF564E7FAEEA0046((Type_t *)L_21, (Type_t *)L_23, /*hidden argument*/NULL);
		((RuntimeTypeInfoCache_1_t2771EEEA6D087119F546F59F2D8F445E76C2E47D_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->set_IsObjectType_8(L_24);
		// IsStringType = type == typeof(string);
		Type_t * L_25 = V_0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_26 = { reinterpret_cast<intptr_t> (String_t_0_0_0_var) };
		Type_t * L_27;
		L_27 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_26, /*hidden argument*/NULL);
		bool L_28;
		L_28 = Type_op_Equality_mA438719A1FDF103C7BBBB08AEF564E7FAEEA0046((Type_t *)L_25, (Type_t *)L_27, /*hidden argument*/NULL);
		((RuntimeTypeInfoCache_1_t2771EEEA6D087119F546F59F2D8F445E76C2E47D_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->set_IsStringType_9(L_28);
		// IsContainerType = RuntimeTypeInfoCache.IsContainerType(type);
		Type_t * L_29 = V_0;
		bool L_30;
		L_30 = RuntimeTypeInfoCache_IsContainerType_m83F2173E5EB11D908CC3BA99C89B4B65B64EAA96((Type_t *)L_29, /*hidden argument*/NULL);
		((RuntimeTypeInfoCache_1_t2771EEEA6D087119F546F59F2D8F445E76C2E47D_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->set_IsContainerType_10(L_30);
		// CanBeNull = !IsValueType;
		bool L_31 = ((RuntimeTypeInfoCache_1_t2771EEEA6D087119F546F59F2D8F445E76C2E47D_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->get_IsValueType_0();
		((RuntimeTypeInfoCache_1_t2771EEEA6D087119F546F59F2D8F445E76C2E47D_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->set_CanBeNull_11((bool)((((int32_t)L_31) == ((int32_t)0))? 1 : 0));
		// IsNullableOrEnum = IsEnum;
		bool L_32 = ((RuntimeTypeInfoCache_1_t2771EEEA6D087119F546F59F2D8F445E76C2E47D_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->get_IsEnum_5();
		((RuntimeTypeInfoCache_1_t2771EEEA6D087119F546F59F2D8F445E76C2E47D_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->set_IsNullableOrEnum_12(L_32);
		// IsPrimitiveOrString = IsPrimitive || IsStringType;
		bool L_33 = ((RuntimeTypeInfoCache_1_t2771EEEA6D087119F546F59F2D8F445E76C2E47D_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->get_IsPrimitive_1();
		if (L_33)
		{
			goto IL_00d9;
		}
	}
	{
		bool L_34 = ((RuntimeTypeInfoCache_1_t2771EEEA6D087119F546F59F2D8F445E76C2E47D_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->get_IsStringType_9();
		G_B6_0 = ((int32_t)(L_34));
		goto IL_00da;
	}

IL_00d9:
	{
		G_B6_0 = 1;
	}

IL_00da:
	{
		((RuntimeTypeInfoCache_1_t2771EEEA6D087119F546F59F2D8F445E76C2E47D_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->set_IsPrimitiveOrString_13((bool)G_B6_0);
		// IsAbstractOrInterface = IsAbstract || IsInterface;
		bool L_35 = ((RuntimeTypeInfoCache_1_t2771EEEA6D087119F546F59F2D8F445E76C2E47D_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->get_IsAbstract_3();
		if (L_35)
		{
			goto IL_00ed;
		}
	}
	{
		bool L_36 = ((RuntimeTypeInfoCache_1_t2771EEEA6D087119F546F59F2D8F445E76C2E47D_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->get_IsInterface_2();
		G_B9_0 = ((int32_t)(L_36));
		goto IL_00ee;
	}

IL_00ed:
	{
		G_B9_0 = 1;
	}

IL_00ee:
	{
		((RuntimeTypeInfoCache_1_t2771EEEA6D087119F546F59F2D8F445E76C2E47D_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->set_IsAbstractOrInterface_14((bool)G_B9_0);
		// CanBeNull |= IsNullable;
		bool L_37 = ((RuntimeTypeInfoCache_1_t2771EEEA6D087119F546F59F2D8F445E76C2E47D_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->get_CanBeNull_11();
		bool L_38 = ((RuntimeTypeInfoCache_1_t2771EEEA6D087119F546F59F2D8F445E76C2E47D_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->get_IsNullable_7();
		((RuntimeTypeInfoCache_1_t2771EEEA6D087119F546F59F2D8F445E76C2E47D_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->set_CanBeNull_11((bool)((int32_t)((int32_t)L_37|(int32_t)L_38)));
		// IsNullableOrEnum |= IsNullable;
		bool L_39 = ((RuntimeTypeInfoCache_1_t2771EEEA6D087119F546F59F2D8F445E76C2E47D_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->get_IsNullableOrEnum_12();
		bool L_40 = ((RuntimeTypeInfoCache_1_t2771EEEA6D087119F546F59F2D8F445E76C2E47D_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->get_IsNullable_7();
		((RuntimeTypeInfoCache_1_t2771EEEA6D087119F546F59F2D8F445E76C2E47D_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->set_IsNullableOrEnum_12((bool)((int32_t)((int32_t)L_39|(int32_t)L_40)));
		// IsLazyLoadReference = type.IsGenericType && type.GetGenericTypeDefinition() == typeof(UnityEngine.LazyLoadReference<>);
		Type_t * L_41 = V_0;
		NullCheck((Type_t *)L_41);
		bool L_42;
		L_42 = VirtFuncInvoker0< bool >::Invoke(71 /* System.Boolean System.Type::get_IsGenericType() */, (Type_t *)L_41);
		if (!L_42)
		{
			goto IL_0132;
		}
	}
	{
		Type_t * L_43 = V_0;
		NullCheck((Type_t *)L_43);
		Type_t * L_44;
		L_44 = VirtFuncInvoker0< Type_t * >::Invoke(96 /* System.Type System.Type::GetGenericTypeDefinition() */, (Type_t *)L_43);
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_45 = { reinterpret_cast<intptr_t> (LazyLoadReference_1_tA48C53B4B246BEF5D956E8AB23A2EC45C6C5C36E_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_46;
		L_46 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_45, /*hidden argument*/NULL);
		bool L_47;
		L_47 = Type_op_Equality_mA438719A1FDF103C7BBBB08AEF564E7FAEEA0046((Type_t *)L_44, (Type_t *)L_46, /*hidden argument*/NULL);
		G_B12_0 = ((int32_t)(L_47));
		goto IL_0133;
	}

IL_0132:
	{
		G_B12_0 = 0;
	}

IL_0133:
	{
		((RuntimeTypeInfoCache_1_t2771EEEA6D087119F546F59F2D8F445E76C2E47D_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->set_IsLazyLoadReference_15((bool)G_B12_0);
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
// System.Void Unity.Properties.Internal.RuntimeTypeInfoCache`1<Unity.MARS.Companion.Core.CompanionDataRecordingUtils/PlaneDataRecording>::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RuntimeTypeInfoCache_1__cctor_mE95EA66058E66DE7256C1C7611B8451D23E7EBE8_gshared (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CustomAttributeExtensions_GetCustomAttribute_TisFlagsAttribute_t511C558FACEF1CC64702A8FAB67CAF3CBA65DF36_m2724CDFC73603733A936D82E548753DEAD4C0363_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LazyLoadReference_1_tA48C53B4B246BEF5D956E8AB23A2EC45C6C5C36E_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Type_t * V_0 = NULL;
	int32_t G_B3_0 = 0;
	int32_t G_B6_0 = 0;
	int32_t G_B9_0 = 0;
	int32_t G_B12_0 = 0;
	{
		// var type = typeof(T);
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_0 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->klass)->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1;
		L_1 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_0, /*hidden argument*/NULL);
		V_0 = (Type_t *)L_1;
		// IsValueType = type.IsValueType;
		Type_t * L_2 = V_0;
		NullCheck((Type_t *)L_2);
		bool L_3;
		L_3 = Type_get_IsValueType_m9CCCB4759C2D5A890096F8DBA66DAAEFE9D913FB((Type_t *)L_2, /*hidden argument*/NULL);
		((RuntimeTypeInfoCache_1_tBCE33614A1A2D6EF394ADF44898864DE0DABCBF4_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->set_IsValueType_0(L_3);
		// IsPrimitive = type.IsPrimitive;
		Type_t * L_4 = V_0;
		NullCheck((Type_t *)L_4);
		bool L_5;
		L_5 = Type_get_IsPrimitive_m43E50D507C45CE3BD51C0DC07C8AB061AFD6B3C3((Type_t *)L_4, /*hidden argument*/NULL);
		((RuntimeTypeInfoCache_1_tBCE33614A1A2D6EF394ADF44898864DE0DABCBF4_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->set_IsPrimitive_1(L_5);
		// IsInterface = type.IsInterface;
		Type_t * L_6 = V_0;
		NullCheck((Type_t *)L_6);
		bool L_7;
		L_7 = Type_get_IsInterface_mB10C34DEE8B22E1597C813211BBED17DD724FC07((Type_t *)L_6, /*hidden argument*/NULL);
		((RuntimeTypeInfoCache_1_tBCE33614A1A2D6EF394ADF44898864DE0DABCBF4_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->set_IsInterface_2(L_7);
		// IsAbstract = type.IsAbstract;
		Type_t * L_8 = V_0;
		NullCheck((Type_t *)L_8);
		bool L_9;
		L_9 = Type_get_IsAbstract_mB16DB56FCABF55740019D32C5286F38E30CAA19F((Type_t *)L_8, /*hidden argument*/NULL);
		((RuntimeTypeInfoCache_1_tBCE33614A1A2D6EF394ADF44898864DE0DABCBF4_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->set_IsAbstract_3(L_9);
		// IsArray = type.IsArray;
		Type_t * L_10 = V_0;
		NullCheck((Type_t *)L_10);
		bool L_11;
		L_11 = Type_get_IsArray_m15FE83DD8FAF090F9BDA924753C7750AAEA7CFD1((Type_t *)L_10, /*hidden argument*/NULL);
		((RuntimeTypeInfoCache_1_tBCE33614A1A2D6EF394ADF44898864DE0DABCBF4_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->set_IsArray_4(L_11);
		// IsEnum = type.IsEnum;
		Type_t * L_12 = V_0;
		NullCheck((Type_t *)L_12);
		bool L_13;
		L_13 = VirtFuncInvoker0< bool >::Invoke(67 /* System.Boolean System.Type::get_IsEnum() */, (Type_t *)L_12);
		((RuntimeTypeInfoCache_1_tBCE33614A1A2D6EF394ADF44898864DE0DABCBF4_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->set_IsEnum_5(L_13);
		// IsEnumFlags = IsEnum && null != type.GetCustomAttribute<FlagsAttribute>();
		bool L_14 = ((RuntimeTypeInfoCache_1_tBCE33614A1A2D6EF394ADF44898864DE0DABCBF4_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->get_IsEnum_5();
		if (!L_14)
		{
			goto IL_005f;
		}
	}
	{
		Type_t * L_15 = V_0;
		FlagsAttribute_t511C558FACEF1CC64702A8FAB67CAF3CBA65DF36 * L_16;
		L_16 = CustomAttributeExtensions_GetCustomAttribute_TisFlagsAttribute_t511C558FACEF1CC64702A8FAB67CAF3CBA65DF36_m2724CDFC73603733A936D82E548753DEAD4C0363((MemberInfo_t *)L_15, /*hidden argument*/CustomAttributeExtensions_GetCustomAttribute_TisFlagsAttribute_t511C558FACEF1CC64702A8FAB67CAF3CBA65DF36_m2724CDFC73603733A936D82E548753DEAD4C0363_RuntimeMethod_var);
		G_B3_0 = ((!(((RuntimeObject*)(FlagsAttribute_t511C558FACEF1CC64702A8FAB67CAF3CBA65DF36 *)L_16) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		goto IL_0060;
	}

IL_005f:
	{
		G_B3_0 = 0;
	}

IL_0060:
	{
		((RuntimeTypeInfoCache_1_tBCE33614A1A2D6EF394ADF44898864DE0DABCBF4_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->set_IsEnumFlags_6((bool)G_B3_0);
		// IsNullable = Nullable.GetUnderlyingType(typeof(T)) != null;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_17 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->klass)->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_18;
		L_18 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_17, /*hidden argument*/NULL);
		Type_t * L_19;
		L_19 = Nullable_GetUnderlyingType_mC5699E7E11E1AFE25365CAB564A48F0193318629((Type_t *)L_18, /*hidden argument*/NULL);
		bool L_20;
		L_20 = Type_op_Inequality_m6DDC5E923203A79BF505F9275B694AD3FAA36DB0((Type_t *)L_19, (Type_t *)NULL, /*hidden argument*/NULL);
		((RuntimeTypeInfoCache_1_tBCE33614A1A2D6EF394ADF44898864DE0DABCBF4_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->set_IsNullable_7(L_20);
		// IsObjectType = type == typeof(object);
		Type_t * L_21 = V_0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_22 = { reinterpret_cast<intptr_t> (RuntimeObject_0_0_0_var) };
		Type_t * L_23;
		L_23 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_22, /*hidden argument*/NULL);
		bool L_24;
		L_24 = Type_op_Equality_mA438719A1FDF103C7BBBB08AEF564E7FAEEA0046((Type_t *)L_21, (Type_t *)L_23, /*hidden argument*/NULL);
		((RuntimeTypeInfoCache_1_tBCE33614A1A2D6EF394ADF44898864DE0DABCBF4_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->set_IsObjectType_8(L_24);
		// IsStringType = type == typeof(string);
		Type_t * L_25 = V_0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_26 = { reinterpret_cast<intptr_t> (String_t_0_0_0_var) };
		Type_t * L_27;
		L_27 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_26, /*hidden argument*/NULL);
		bool L_28;
		L_28 = Type_op_Equality_mA438719A1FDF103C7BBBB08AEF564E7FAEEA0046((Type_t *)L_25, (Type_t *)L_27, /*hidden argument*/NULL);
		((RuntimeTypeInfoCache_1_tBCE33614A1A2D6EF394ADF44898864DE0DABCBF4_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->set_IsStringType_9(L_28);
		// IsContainerType = RuntimeTypeInfoCache.IsContainerType(type);
		Type_t * L_29 = V_0;
		bool L_30;
		L_30 = RuntimeTypeInfoCache_IsContainerType_m83F2173E5EB11D908CC3BA99C89B4B65B64EAA96((Type_t *)L_29, /*hidden argument*/NULL);
		((RuntimeTypeInfoCache_1_tBCE33614A1A2D6EF394ADF44898864DE0DABCBF4_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->set_IsContainerType_10(L_30);
		// CanBeNull = !IsValueType;
		bool L_31 = ((RuntimeTypeInfoCache_1_tBCE33614A1A2D6EF394ADF44898864DE0DABCBF4_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->get_IsValueType_0();
		((RuntimeTypeInfoCache_1_tBCE33614A1A2D6EF394ADF44898864DE0DABCBF4_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->set_CanBeNull_11((bool)((((int32_t)L_31) == ((int32_t)0))? 1 : 0));
		// IsNullableOrEnum = IsEnum;
		bool L_32 = ((RuntimeTypeInfoCache_1_tBCE33614A1A2D6EF394ADF44898864DE0DABCBF4_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->get_IsEnum_5();
		((RuntimeTypeInfoCache_1_tBCE33614A1A2D6EF394ADF44898864DE0DABCBF4_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->set_IsNullableOrEnum_12(L_32);
		// IsPrimitiveOrString = IsPrimitive || IsStringType;
		bool L_33 = ((RuntimeTypeInfoCache_1_tBCE33614A1A2D6EF394ADF44898864DE0DABCBF4_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->get_IsPrimitive_1();
		if (L_33)
		{
			goto IL_00d9;
		}
	}
	{
		bool L_34 = ((RuntimeTypeInfoCache_1_tBCE33614A1A2D6EF394ADF44898864DE0DABCBF4_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->get_IsStringType_9();
		G_B6_0 = ((int32_t)(L_34));
		goto IL_00da;
	}

IL_00d9:
	{
		G_B6_0 = 1;
	}

IL_00da:
	{
		((RuntimeTypeInfoCache_1_tBCE33614A1A2D6EF394ADF44898864DE0DABCBF4_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->set_IsPrimitiveOrString_13((bool)G_B6_0);
		// IsAbstractOrInterface = IsAbstract || IsInterface;
		bool L_35 = ((RuntimeTypeInfoCache_1_tBCE33614A1A2D6EF394ADF44898864DE0DABCBF4_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->get_IsAbstract_3();
		if (L_35)
		{
			goto IL_00ed;
		}
	}
	{
		bool L_36 = ((RuntimeTypeInfoCache_1_tBCE33614A1A2D6EF394ADF44898864DE0DABCBF4_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->get_IsInterface_2();
		G_B9_0 = ((int32_t)(L_36));
		goto IL_00ee;
	}

IL_00ed:
	{
		G_B9_0 = 1;
	}

IL_00ee:
	{
		((RuntimeTypeInfoCache_1_tBCE33614A1A2D6EF394ADF44898864DE0DABCBF4_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->set_IsAbstractOrInterface_14((bool)G_B9_0);
		// CanBeNull |= IsNullable;
		bool L_37 = ((RuntimeTypeInfoCache_1_tBCE33614A1A2D6EF394ADF44898864DE0DABCBF4_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->get_CanBeNull_11();
		bool L_38 = ((RuntimeTypeInfoCache_1_tBCE33614A1A2D6EF394ADF44898864DE0DABCBF4_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->get_IsNullable_7();
		((RuntimeTypeInfoCache_1_tBCE33614A1A2D6EF394ADF44898864DE0DABCBF4_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->set_CanBeNull_11((bool)((int32_t)((int32_t)L_37|(int32_t)L_38)));
		// IsNullableOrEnum |= IsNullable;
		bool L_39 = ((RuntimeTypeInfoCache_1_tBCE33614A1A2D6EF394ADF44898864DE0DABCBF4_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->get_IsNullableOrEnum_12();
		bool L_40 = ((RuntimeTypeInfoCache_1_tBCE33614A1A2D6EF394ADF44898864DE0DABCBF4_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->get_IsNullable_7();
		((RuntimeTypeInfoCache_1_tBCE33614A1A2D6EF394ADF44898864DE0DABCBF4_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->set_IsNullableOrEnum_12((bool)((int32_t)((int32_t)L_39|(int32_t)L_40)));
		// IsLazyLoadReference = type.IsGenericType && type.GetGenericTypeDefinition() == typeof(UnityEngine.LazyLoadReference<>);
		Type_t * L_41 = V_0;
		NullCheck((Type_t *)L_41);
		bool L_42;
		L_42 = VirtFuncInvoker0< bool >::Invoke(71 /* System.Boolean System.Type::get_IsGenericType() */, (Type_t *)L_41);
		if (!L_42)
		{
			goto IL_0132;
		}
	}
	{
		Type_t * L_43 = V_0;
		NullCheck((Type_t *)L_43);
		Type_t * L_44;
		L_44 = VirtFuncInvoker0< Type_t * >::Invoke(96 /* System.Type System.Type::GetGenericTypeDefinition() */, (Type_t *)L_43);
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_45 = { reinterpret_cast<intptr_t> (LazyLoadReference_1_tA48C53B4B246BEF5D956E8AB23A2EC45C6C5C36E_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_46;
		L_46 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_45, /*hidden argument*/NULL);
		bool L_47;
		L_47 = Type_op_Equality_mA438719A1FDF103C7BBBB08AEF564E7FAEEA0046((Type_t *)L_44, (Type_t *)L_46, /*hidden argument*/NULL);
		G_B12_0 = ((int32_t)(L_47));
		goto IL_0133;
	}

IL_0132:
	{
		G_B12_0 = 0;
	}

IL_0133:
	{
		((RuntimeTypeInfoCache_1_tBCE33614A1A2D6EF394ADF44898864DE0DABCBF4_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->set_IsLazyLoadReference_15((bool)G_B12_0);
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
// System.Void Unity.Properties.Internal.RuntimeTypeInfoCache`1<Unity.MARS.Companion.Core.CompanionDataRecordingUtils/PointCloudRecording>::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RuntimeTypeInfoCache_1__cctor_mB6FC7FFD06F3F8F6E60B4A6998910800389A9539_gshared (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CustomAttributeExtensions_GetCustomAttribute_TisFlagsAttribute_t511C558FACEF1CC64702A8FAB67CAF3CBA65DF36_m2724CDFC73603733A936D82E548753DEAD4C0363_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LazyLoadReference_1_tA48C53B4B246BEF5D956E8AB23A2EC45C6C5C36E_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Type_t * V_0 = NULL;
	int32_t G_B3_0 = 0;
	int32_t G_B6_0 = 0;
	int32_t G_B9_0 = 0;
	int32_t G_B12_0 = 0;
	{
		// var type = typeof(T);
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_0 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->klass)->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1;
		L_1 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_0, /*hidden argument*/NULL);
		V_0 = (Type_t *)L_1;
		// IsValueType = type.IsValueType;
		Type_t * L_2 = V_0;
		NullCheck((Type_t *)L_2);
		bool L_3;
		L_3 = Type_get_IsValueType_m9CCCB4759C2D5A890096F8DBA66DAAEFE9D913FB((Type_t *)L_2, /*hidden argument*/NULL);
		((RuntimeTypeInfoCache_1_t1CB03B7A3BAD29F1FEF115D7B99203758D9F897B_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->set_IsValueType_0(L_3);
		// IsPrimitive = type.IsPrimitive;
		Type_t * L_4 = V_0;
		NullCheck((Type_t *)L_4);
		bool L_5;
		L_5 = Type_get_IsPrimitive_m43E50D507C45CE3BD51C0DC07C8AB061AFD6B3C3((Type_t *)L_4, /*hidden argument*/NULL);
		((RuntimeTypeInfoCache_1_t1CB03B7A3BAD29F1FEF115D7B99203758D9F897B_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->set_IsPrimitive_1(L_5);
		// IsInterface = type.IsInterface;
		Type_t * L_6 = V_0;
		NullCheck((Type_t *)L_6);
		bool L_7;
		L_7 = Type_get_IsInterface_mB10C34DEE8B22E1597C813211BBED17DD724FC07((Type_t *)L_6, /*hidden argument*/NULL);
		((RuntimeTypeInfoCache_1_t1CB03B7A3BAD29F1FEF115D7B99203758D9F897B_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->set_IsInterface_2(L_7);
		// IsAbstract = type.IsAbstract;
		Type_t * L_8 = V_0;
		NullCheck((Type_t *)L_8);
		bool L_9;
		L_9 = Type_get_IsAbstract_mB16DB56FCABF55740019D32C5286F38E30CAA19F((Type_t *)L_8, /*hidden argument*/NULL);
		((RuntimeTypeInfoCache_1_t1CB03B7A3BAD29F1FEF115D7B99203758D9F897B_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->set_IsAbstract_3(L_9);
		// IsArray = type.IsArray;
		Type_t * L_10 = V_0;
		NullCheck((Type_t *)L_10);
		bool L_11;
		L_11 = Type_get_IsArray_m15FE83DD8FAF090F9BDA924753C7750AAEA7CFD1((Type_t *)L_10, /*hidden argument*/NULL);
		((RuntimeTypeInfoCache_1_t1CB03B7A3BAD29F1FEF115D7B99203758D9F897B_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->set_IsArray_4(L_11);
		// IsEnum = type.IsEnum;
		Type_t * L_12 = V_0;
		NullCheck((Type_t *)L_12);
		bool L_13;
		L_13 = VirtFuncInvoker0< bool >::Invoke(67 /* System.Boolean System.Type::get_IsEnum() */, (Type_t *)L_12);
		((RuntimeTypeInfoCache_1_t1CB03B7A3BAD29F1FEF115D7B99203758D9F897B_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->set_IsEnum_5(L_13);
		// IsEnumFlags = IsEnum && null != type.GetCustomAttribute<FlagsAttribute>();
		bool L_14 = ((RuntimeTypeInfoCache_1_t1CB03B7A3BAD29F1FEF115D7B99203758D9F897B_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->get_IsEnum_5();
		if (!L_14)
		{
			goto IL_005f;
		}
	}
	{
		Type_t * L_15 = V_0;
		FlagsAttribute_t511C558FACEF1CC64702A8FAB67CAF3CBA65DF36 * L_16;
		L_16 = CustomAttributeExtensions_GetCustomAttribute_TisFlagsAttribute_t511C558FACEF1CC64702A8FAB67CAF3CBA65DF36_m2724CDFC73603733A936D82E548753DEAD4C0363((MemberInfo_t *)L_15, /*hidden argument*/CustomAttributeExtensions_GetCustomAttribute_TisFlagsAttribute_t511C558FACEF1CC64702A8FAB67CAF3CBA65DF36_m2724CDFC73603733A936D82E548753DEAD4C0363_RuntimeMethod_var);
		G_B3_0 = ((!(((RuntimeObject*)(FlagsAttribute_t511C558FACEF1CC64702A8FAB67CAF3CBA65DF36 *)L_16) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		goto IL_0060;
	}

IL_005f:
	{
		G_B3_0 = 0;
	}

IL_0060:
	{
		((RuntimeTypeInfoCache_1_t1CB03B7A3BAD29F1FEF115D7B99203758D9F897B_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->set_IsEnumFlags_6((bool)G_B3_0);
		// IsNullable = Nullable.GetUnderlyingType(typeof(T)) != null;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_17 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->klass)->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_18;
		L_18 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_17, /*hidden argument*/NULL);
		Type_t * L_19;
		L_19 = Nullable_GetUnderlyingType_mC5699E7E11E1AFE25365CAB564A48F0193318629((Type_t *)L_18, /*hidden argument*/NULL);
		bool L_20;
		L_20 = Type_op_Inequality_m6DDC5E923203A79BF505F9275B694AD3FAA36DB0((Type_t *)L_19, (Type_t *)NULL, /*hidden argument*/NULL);
		((RuntimeTypeInfoCache_1_t1CB03B7A3BAD29F1FEF115D7B99203758D9F897B_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->set_IsNullable_7(L_20);
		// IsObjectType = type == typeof(object);
		Type_t * L_21 = V_0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_22 = { reinterpret_cast<intptr_t> (RuntimeObject_0_0_0_var) };
		Type_t * L_23;
		L_23 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_22, /*hidden argument*/NULL);
		bool L_24;
		L_24 = Type_op_Equality_mA438719A1FDF103C7BBBB08AEF564E7FAEEA0046((Type_t *)L_21, (Type_t *)L_23, /*hidden argument*/NULL);
		((RuntimeTypeInfoCache_1_t1CB03B7A3BAD29F1FEF115D7B99203758D9F897B_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->set_IsObjectType_8(L_24);
		// IsStringType = type == typeof(string);
		Type_t * L_25 = V_0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_26 = { reinterpret_cast<intptr_t> (String_t_0_0_0_var) };
		Type_t * L_27;
		L_27 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_26, /*hidden argument*/NULL);
		bool L_28;
		L_28 = Type_op_Equality_mA438719A1FDF103C7BBBB08AEF564E7FAEEA0046((Type_t *)L_25, (Type_t *)L_27, /*hidden argument*/NULL);
		((RuntimeTypeInfoCache_1_t1CB03B7A3BAD29F1FEF115D7B99203758D9F897B_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->set_IsStringType_9(L_28);
		// IsContainerType = RuntimeTypeInfoCache.IsContainerType(type);
		Type_t * L_29 = V_0;
		bool L_30;
		L_30 = RuntimeTypeInfoCache_IsContainerType_m83F2173E5EB11D908CC3BA99C89B4B65B64EAA96((Type_t *)L_29, /*hidden argument*/NULL);
		((RuntimeTypeInfoCache_1_t1CB03B7A3BAD29F1FEF115D7B99203758D9F897B_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->set_IsContainerType_10(L_30);
		// CanBeNull = !IsValueType;
		bool L_31 = ((RuntimeTypeInfoCache_1_t1CB03B7A3BAD29F1FEF115D7B99203758D9F897B_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->get_IsValueType_0();
		((RuntimeTypeInfoCache_1_t1CB03B7A3BAD29F1FEF115D7B99203758D9F897B_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->set_CanBeNull_11((bool)((((int32_t)L_31) == ((int32_t)0))? 1 : 0));
		// IsNullableOrEnum = IsEnum;
		bool L_32 = ((RuntimeTypeInfoCache_1_t1CB03B7A3BAD29F1FEF115D7B99203758D9F897B_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->get_IsEnum_5();
		((RuntimeTypeInfoCache_1_t1CB03B7A3BAD29F1FEF115D7B99203758D9F897B_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->set_IsNullableOrEnum_12(L_32);
		// IsPrimitiveOrString = IsPrimitive || IsStringType;
		bool L_33 = ((RuntimeTypeInfoCache_1_t1CB03B7A3BAD29F1FEF115D7B99203758D9F897B_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->get_IsPrimitive_1();
		if (L_33)
		{
			goto IL_00d9;
		}
	}
	{
		bool L_34 = ((RuntimeTypeInfoCache_1_t1CB03B7A3BAD29F1FEF115D7B99203758D9F897B_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->get_IsStringType_9();
		G_B6_0 = ((int32_t)(L_34));
		goto IL_00da;
	}

IL_00d9:
	{
		G_B6_0 = 1;
	}

IL_00da:
	{
		((RuntimeTypeInfoCache_1_t1CB03B7A3BAD29F1FEF115D7B99203758D9F897B_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->set_IsPrimitiveOrString_13((bool)G_B6_0);
		// IsAbstractOrInterface = IsAbstract || IsInterface;
		bool L_35 = ((RuntimeTypeInfoCache_1_t1CB03B7A3BAD29F1FEF115D7B99203758D9F897B_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->get_IsAbstract_3();
		if (L_35)
		{
			goto IL_00ed;
		}
	}
	{
		bool L_36 = ((RuntimeTypeInfoCache_1_t1CB03B7A3BAD29F1FEF115D7B99203758D9F897B_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->get_IsInterface_2();
		G_B9_0 = ((int32_t)(L_36));
		goto IL_00ee;
	}

IL_00ed:
	{
		G_B9_0 = 1;
	}

IL_00ee:
	{
		((RuntimeTypeInfoCache_1_t1CB03B7A3BAD29F1FEF115D7B99203758D9F897B_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->set_IsAbstractOrInterface_14((bool)G_B9_0);
		// CanBeNull |= IsNullable;
		bool L_37 = ((RuntimeTypeInfoCache_1_t1CB03B7A3BAD29F1FEF115D7B99203758D9F897B_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->get_CanBeNull_11();
		bool L_38 = ((RuntimeTypeInfoCache_1_t1CB03B7A3BAD29F1FEF115D7B99203758D9F897B_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->get_IsNullable_7();
		((RuntimeTypeInfoCache_1_t1CB03B7A3BAD29F1FEF115D7B99203758D9F897B_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->set_CanBeNull_11((bool)((int32_t)((int32_t)L_37|(int32_t)L_38)));
		// IsNullableOrEnum |= IsNullable;
		bool L_39 = ((RuntimeTypeInfoCache_1_t1CB03B7A3BAD29F1FEF115D7B99203758D9F897B_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->get_IsNullableOrEnum_12();
		bool L_40 = ((RuntimeTypeInfoCache_1_t1CB03B7A3BAD29F1FEF115D7B99203758D9F897B_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->get_IsNullable_7();
		((RuntimeTypeInfoCache_1_t1CB03B7A3BAD29F1FEF115D7B99203758D9F897B_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->set_IsNullableOrEnum_12((bool)((int32_t)((int32_t)L_39|(int32_t)L_40)));
		// IsLazyLoadReference = type.IsGenericType && type.GetGenericTypeDefinition() == typeof(UnityEngine.LazyLoadReference<>);
		Type_t * L_41 = V_0;
		NullCheck((Type_t *)L_41);
		bool L_42;
		L_42 = VirtFuncInvoker0< bool >::Invoke(71 /* System.Boolean System.Type::get_IsGenericType() */, (Type_t *)L_41);
		if (!L_42)
		{
			goto IL_0132;
		}
	}
	{
		Type_t * L_43 = V_0;
		NullCheck((Type_t *)L_43);
		Type_t * L_44;
		L_44 = VirtFuncInvoker0< Type_t * >::Invoke(96 /* System.Type System.Type::GetGenericTypeDefinition() */, (Type_t *)L_43);
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_45 = { reinterpret_cast<intptr_t> (LazyLoadReference_1_tA48C53B4B246BEF5D956E8AB23A2EC45C6C5C36E_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_46;
		L_46 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_45, /*hidden argument*/NULL);
		bool L_47;
		L_47 = Type_op_Equality_mA438719A1FDF103C7BBBB08AEF564E7FAEEA0046((Type_t *)L_44, (Type_t *)L_46, /*hidden argument*/NULL);
		G_B12_0 = ((int32_t)(L_47));
		goto IL_0133;
	}

IL_0132:
	{
		G_B12_0 = 0;
	}

IL_0133:
	{
		((RuntimeTypeInfoCache_1_t1CB03B7A3BAD29F1FEF115D7B99203758D9F897B_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->set_IsLazyLoadReference_15((bool)G_B12_0);
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
// UnityEngine.Playables.ScriptPlayable`1<T> UnityEngine.Playables.ScriptPlayable`1<System.Object>::get_Null()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ScriptPlayable_1_t7495DFF84B5233AF863183881C3C7D626F65C266  ScriptPlayable_1_get_Null_m4C7DAD5A6141B2F2A562F9A1357644CF733EF371_gshared (const RuntimeMethod* method)
{
	ScriptPlayable_1_t7495DFF84B5233AF863183881C3C7D626F65C266  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 0));
		ScriptPlayable_1_t7495DFF84B5233AF863183881C3C7D626F65C266  L_0 = ((ScriptPlayable_1_t7495DFF84B5233AF863183881C3C7D626F65C266_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 0)))->get_m_NullPlayable_1();
		V_0 = (ScriptPlayable_1_t7495DFF84B5233AF863183881C3C7D626F65C266 )L_0;
		goto IL_0009;
	}

IL_0009:
	{
		ScriptPlayable_1_t7495DFF84B5233AF863183881C3C7D626F65C266  L_1 = V_0;
		return (ScriptPlayable_1_t7495DFF84B5233AF863183881C3C7D626F65C266 )L_1;
	}
}
// UnityEngine.Playables.ScriptPlayable`1<T> UnityEngine.Playables.ScriptPlayable`1<System.Object>::Create(UnityEngine.Playables.PlayableGraph,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ScriptPlayable_1_t7495DFF84B5233AF863183881C3C7D626F65C266  ScriptPlayable_1_Create_m2B1A44D92EE622A223556375D244F514B431A617_gshared (PlayableGraph_t2D5083CFACB413FA1BB13FF054BE09A5A55A205A  ___graph0, int32_t ___inputCount1, const RuntimeMethod* method)
{
	PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  V_0;
	memset((&V_0), 0, sizeof(V_0));
	RuntimeObject * V_1 = NULL;
	ScriptPlayable_1_t7495DFF84B5233AF863183881C3C7D626F65C266  V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		PlayableGraph_t2D5083CFACB413FA1BB13FF054BE09A5A55A205A  L_0 = ___graph0;
		il2cpp_codegen_initobj((&V_1), sizeof(RuntimeObject *));
		RuntimeObject * L_1 = V_1;
		int32_t L_2 = ___inputCount1;
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 0));
		PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  L_3;
		L_3 = ((  PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  (*) (PlayableGraph_t2D5083CFACB413FA1BB13FF054BE09A5A55A205A , RuntimeObject *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 1)->methodPointer)((PlayableGraph_t2D5083CFACB413FA1BB13FF054BE09A5A55A205A )L_0, (RuntimeObject *)L_1, (int32_t)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		V_0 = (PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A )L_3;
		PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  L_4 = V_0;
		ScriptPlayable_1_t7495DFF84B5233AF863183881C3C7D626F65C266  L_5;
		memset((&L_5), 0, sizeof(L_5));
		ScriptPlayable_1__ctor_m35E668A204B15B5AAC48A7265A4CE08F866DF5BF((&L_5), (PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A )L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		V_2 = (ScriptPlayable_1_t7495DFF84B5233AF863183881C3C7D626F65C266 )L_5;
		goto IL_001b;
	}

IL_001b:
	{
		ScriptPlayable_1_t7495DFF84B5233AF863183881C3C7D626F65C266  L_6 = V_2;
		return (ScriptPlayable_1_t7495DFF84B5233AF863183881C3C7D626F65C266 )L_6;
	}
}
// UnityEngine.Playables.ScriptPlayable`1<T> UnityEngine.Playables.ScriptPlayable`1<System.Object>::Create(UnityEngine.Playables.PlayableGraph,T,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ScriptPlayable_1_t7495DFF84B5233AF863183881C3C7D626F65C266  ScriptPlayable_1_Create_mB185CE384B12D64228DA44E8A7179370DA090DCE_gshared (PlayableGraph_t2D5083CFACB413FA1BB13FF054BE09A5A55A205A  ___graph0, RuntimeObject * ___template1, int32_t ___inputCount2, const RuntimeMethod* method)
{
	PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  V_0;
	memset((&V_0), 0, sizeof(V_0));
	ScriptPlayable_1_t7495DFF84B5233AF863183881C3C7D626F65C266  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		PlayableGraph_t2D5083CFACB413FA1BB13FF054BE09A5A55A205A  L_0 = ___graph0;
		RuntimeObject * L_1 = ___template1;
		int32_t L_2 = ___inputCount2;
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 0));
		PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  L_3;
		L_3 = ((  PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  (*) (PlayableGraph_t2D5083CFACB413FA1BB13FF054BE09A5A55A205A , RuntimeObject *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 1)->methodPointer)((PlayableGraph_t2D5083CFACB413FA1BB13FF054BE09A5A55A205A )L_0, (RuntimeObject *)L_1, (int32_t)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		V_0 = (PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A )L_3;
		PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  L_4 = V_0;
		ScriptPlayable_1_t7495DFF84B5233AF863183881C3C7D626F65C266  L_5;
		memset((&L_5), 0, sizeof(L_5));
		ScriptPlayable_1__ctor_m35E668A204B15B5AAC48A7265A4CE08F866DF5BF((&L_5), (PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A )L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		V_1 = (ScriptPlayable_1_t7495DFF84B5233AF863183881C3C7D626F65C266 )L_5;
		goto IL_0013;
	}

IL_0013:
	{
		ScriptPlayable_1_t7495DFF84B5233AF863183881C3C7D626F65C266  L_6 = V_1;
		return (ScriptPlayable_1_t7495DFF84B5233AF863183881C3C7D626F65C266 )L_6;
	}
}
// UnityEngine.Playables.PlayableHandle UnityEngine.Playables.ScriptPlayable`1<System.Object>::CreateHandle(UnityEngine.Playables.PlayableGraph,T,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  ScriptPlayable_1_CreateHandle_m3E646F8FCEBF5A1437A60C6A108A0CA045313500_gshared (PlayableGraph_t2D5083CFACB413FA1BB13FF054BE09A5A55A205A  ___graph0, RuntimeObject * ___template1, int32_t ___inputCount2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0A1181D753D38A02DC44BD6DADB2AB0E89C2A576);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	bool V_3 = false;
	PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  V_4;
	memset((&V_4), 0, sizeof(V_4));
	bool V_5 = false;
	Type_t * G_B6_0 = NULL;
	String_t* G_B6_1 = NULL;
	Type_t * G_B5_0 = NULL;
	String_t* G_B5_1 = NULL;
	String_t* G_B7_0 = NULL;
	String_t* G_B7_1 = NULL;
	{
		V_0 = (RuntimeObject *)NULL;
		RuntimeObject * L_0 = ___template1;
		V_2 = (bool)((((RuntimeObject*)(RuntimeObject *)L_0) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		bool L_1 = V_2;
		if (!L_1)
		{
			goto IL_001a;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 0));
		RuntimeObject * L_2;
		L_2 = ((  RuntimeObject * (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 5)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		V_0 = (RuntimeObject *)L_2;
		goto IL_0028;
	}

IL_001a:
	{
		RuntimeObject * L_3 = ___template1;
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 0));
		RuntimeObject * L_4;
		L_4 = ((  RuntimeObject * (*) (RuntimeObject*, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 6)->methodPointer)((RuntimeObject*)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 6));
		V_0 = (RuntimeObject *)L_4;
	}

IL_0028:
	{
		RuntimeObject * L_5 = V_0;
		V_3 = (bool)((((RuntimeObject*)(RuntimeObject *)L_5) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		bool L_6 = V_3;
		if (!L_6)
		{
			goto IL_0060;
		}
	}
	{
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_7 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->klass)->rgctx_data, 7)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_8;
		L_8 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_7, /*hidden argument*/NULL);
		Type_t * L_9 = (Type_t *)L_8;
		G_B5_0 = L_9;
		G_B5_1 = _stringLiteral0A1181D753D38A02DC44BD6DADB2AB0E89C2A576;
		if (L_9)
		{
			G_B6_0 = L_9;
			G_B6_1 = _stringLiteral0A1181D753D38A02DC44BD6DADB2AB0E89C2A576;
			goto IL_0047;
		}
	}
	{
		G_B7_0 = ((String_t*)(NULL));
		G_B7_1 = G_B5_1;
		goto IL_004c;
	}

IL_0047:
	{
		NullCheck((RuntimeObject *)G_B6_0);
		String_t* L_10;
		L_10 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject *)G_B6_0);
		G_B7_0 = L_10;
		G_B7_1 = G_B6_1;
	}

IL_004c:
	{
		String_t* L_11;
		L_11 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B((String_t*)G_B7_1, (String_t*)G_B7_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogError_m8850D65592770A364D494025FF3A73E8D4D70485((RuntimeObject *)L_11, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A_il2cpp_TypeInfo_var);
		PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  L_12;
		L_12 = PlayableHandle_get_Null_mD1C6FC2D7F6A7A23955ACDD87BE934B75463E612(/*hidden argument*/NULL);
		V_4 = (PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A )L_12;
		goto IL_0098;
	}

IL_0060:
	{
		PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  L_13;
		L_13 = PlayableGraph_CreatePlayableHandle_m85B440E4F66392BA77EDA22CEA513EDA27F2C2BC((PlayableGraph_t2D5083CFACB413FA1BB13FF054BE09A5A55A205A *)(PlayableGraph_t2D5083CFACB413FA1BB13FF054BE09A5A55A205A *)(&___graph0), /*hidden argument*/NULL);
		V_1 = (PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A )L_13;
		bool L_14;
		L_14 = PlayableHandle_IsValid_m237A5E7818768641BAC928BD08EC0AB439E3DAF6((PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A *)(PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A *)(&V_1), /*hidden argument*/NULL);
		V_5 = (bool)((((int32_t)L_14) == ((int32_t)0))? 1 : 0);
		bool L_15 = V_5;
		if (!L_15)
		{
			goto IL_0081;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A_il2cpp_TypeInfo_var);
		PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  L_16;
		L_16 = PlayableHandle_get_Null_mD1C6FC2D7F6A7A23955ACDD87BE934B75463E612(/*hidden argument*/NULL);
		V_4 = (PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A )L_16;
		goto IL_0098;
	}

IL_0081:
	{
		int32_t L_17 = ___inputCount2;
		PlayableHandle_SetInputCount_mF476D7A0B1D1086914BB87ABF80D478740A97E8E((PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A *)(PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A *)(&V_1), (int32_t)L_17, /*hidden argument*/NULL);
		RuntimeObject * L_18 = V_0;
		PlayableHandle_SetScriptInstance_mE1394E51BA433BE85C4E7A59274C9C25E24FB410((PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A *)(PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A *)(&V_1), (RuntimeObject *)L_18, /*hidden argument*/NULL);
		PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  L_19 = V_1;
		V_4 = (PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A )L_19;
		goto IL_0098;
	}

IL_0098:
	{
		PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  L_20 = V_4;
		return (PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A )L_20;
	}
}
// System.Object UnityEngine.Playables.ScriptPlayable`1<System.Object>::CreateScriptInstance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * ScriptPlayable_1_CreateScriptInstance_m284A74D9D70A200D1F9BA6B531292072F31B77D5_gshared (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	RuntimeObject * V_2 = NULL;
	{
		V_0 = (RuntimeObject*)NULL;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_0 = { reinterpret_cast<intptr_t> (ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1;
		L_1 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_0, /*hidden argument*/NULL);
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_2 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->klass)->rgctx_data, 7)) };
		Type_t * L_3;
		L_3 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_2, /*hidden argument*/NULL);
		NullCheck((Type_t *)L_1);
		bool L_4;
		L_4 = VirtFuncInvoker1< bool, Type_t * >::Invoke(106 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, (Type_t *)L_1, (Type_t *)L_3);
		V_1 = (bool)L_4;
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0041;
		}
	}
	{
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_6 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->klass)->rgctx_data, 7)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_7;
		L_7 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_6, /*hidden argument*/NULL);
		ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A * L_8;
		L_8 = ScriptableObject_CreateInstance_m5371BDC0B4F60FE15914A7BB3FBE07D0ACA0A8D4((Type_t *)L_7, /*hidden argument*/NULL);
		V_0 = (RuntimeObject*)((RuntimeObject *)Castclass((RuntimeObject*)((RuntimeObject *)IsInst((RuntimeObject*)L_8, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 4))), IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 4)));
		goto IL_004c;
	}

IL_0041:
	{
		RuntimeObject * L_9;
		L_9 = ((  RuntimeObject * (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 8)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 8));
		V_0 = (RuntimeObject*)L_9;
	}

IL_004c:
	{
		RuntimeObject* L_10 = V_0;
		V_2 = (RuntimeObject *)L_10;
		goto IL_0050;
	}

IL_0050:
	{
		RuntimeObject * L_11 = V_2;
		return (RuntimeObject *)L_11;
	}
}
// System.Object UnityEngine.Playables.ScriptPlayable`1<System.Object>::CloneScriptInstance(UnityEngine.Playables.IPlayableBehaviour)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * ScriptPlayable_1_CloneScriptInstance_m8D086A12987FE622A296EA62032FF624891EDC48_gshared (RuntimeObject* ___source0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICloneable_t489EBC17437D4E3C42DC8B64205C39847CA3ADB8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	bool V_2 = false;
	RuntimeObject * V_3 = NULL;
	bool V_4 = false;
	{
		RuntimeObject* L_0 = ___source0;
		V_0 = (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)((Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)IsInst((RuntimeObject*)L_0, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var));
		Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * L_1 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90((Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)L_1, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		V_2 = (bool)L_2;
		bool L_3 = V_2;
		if (!L_3)
		{
			goto IL_001c;
		}
	}
	{
		Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * L_4 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 0));
		RuntimeObject * L_5;
		L_5 = ((  RuntimeObject * (*) (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 9)->methodPointer)((Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 9));
		V_3 = (RuntimeObject *)L_5;
		goto IL_003a;
	}

IL_001c:
	{
		RuntimeObject* L_6 = ___source0;
		V_1 = (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_6, ICloneable_t489EBC17437D4E3C42DC8B64205C39847CA3ADB8_il2cpp_TypeInfo_var));
		RuntimeObject* L_7 = V_1;
		V_4 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_7) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_8 = V_4;
		if (!L_8)
		{
			goto IL_0036;
		}
	}
	{
		RuntimeObject* L_9 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 0));
		RuntimeObject * L_10;
		L_10 = ((  RuntimeObject * (*) (RuntimeObject*, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 10)->methodPointer)((RuntimeObject*)L_9, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 10));
		V_3 = (RuntimeObject *)L_10;
		goto IL_003a;
	}

IL_0036:
	{
		V_3 = (RuntimeObject *)NULL;
		goto IL_003a;
	}

IL_003a:
	{
		RuntimeObject * L_11 = V_3;
		return (RuntimeObject *)L_11;
	}
}
// System.Object UnityEngine.Playables.ScriptPlayable`1<System.Object>::CloneScriptInstanceFromEngineObject(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * ScriptPlayable_1_CloneScriptInstanceFromEngineObject_m8E72BF6F07E8DF4AB1EC2044D8FEA80F571AD3D8_gshared (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___source0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * V_0 = NULL;
	bool V_1 = false;
	RuntimeObject * V_2 = NULL;
	{
		Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * L_0 = ___source0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * L_1;
		L_1 = Object_Instantiate_m565A02EA45AEA7442E19FDC8E82695491938CB5A((Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)L_0, /*hidden argument*/NULL);
		V_0 = (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)L_1;
		Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * L_2 = V_0;
		bool L_3;
		L_3 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90((Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)L_2, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		V_1 = (bool)L_3;
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_0025;
		}
	}
	{
		Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * L_5 = V_0;
		Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * L_6 = (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)L_5;
		NullCheck((Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)L_6);
		int32_t L_7;
		L_7 = Object_get_hideFlags_m0F6495E1FB440A08314B7D74CCA99C897FAC05D1((Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)L_6, /*hidden argument*/NULL);
		NullCheck((Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)L_6);
		Object_set_hideFlags_m7DE229AF60B92F0C68819F77FEB27D775E66F3AC((Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)L_6, (int32_t)((int32_t)((int32_t)L_7|(int32_t)((int32_t)52))), /*hidden argument*/NULL);
	}

IL_0025:
	{
		Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * L_8 = V_0;
		V_2 = (RuntimeObject *)L_8;
		goto IL_0029;
	}

IL_0029:
	{
		RuntimeObject * L_9 = V_2;
		return (RuntimeObject *)L_9;
	}
}
// System.Object UnityEngine.Playables.ScriptPlayable`1<System.Object>::CloneScriptInstanceFromIClonable(System.ICloneable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * ScriptPlayable_1_CloneScriptInstanceFromIClonable_m485EA2FB0780415FA761B373539D373E628278B9_gshared (RuntimeObject* ___source0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICloneable_t489EBC17437D4E3C42DC8B64205C39847CA3ADB8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	{
		RuntimeObject* L_0 = ___source0;
		NullCheck((RuntimeObject*)L_0);
		RuntimeObject * L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(0 /* System.Object System.ICloneable::Clone() */, ICloneable_t489EBC17437D4E3C42DC8B64205C39847CA3ADB8_il2cpp_TypeInfo_var, (RuntimeObject*)L_0);
		V_0 = (RuntimeObject *)L_1;
		goto IL_000a;
	}

IL_000a:
	{
		RuntimeObject * L_2 = V_0;
		return (RuntimeObject *)L_2;
	}
}
// System.Void UnityEngine.Playables.ScriptPlayable`1<System.Object>::.ctor(UnityEngine.Playables.PlayableHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScriptPlayable_1__ctor_m35E668A204B15B5AAC48A7265A4CE08F866DF5BF_gshared (ScriptPlayable_1_t7495DFF84B5233AF863183881C3C7D626F65C266 * __this, PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  ___handle0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		bool L_0;
		L_0 = PlayableHandle_IsValid_m237A5E7818768641BAC928BD08EC0AB439E3DAF6((PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A *)(PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A *)(&___handle0), /*hidden argument*/NULL);
		V_0 = (bool)L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_004c;
		}
	}
	{
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_2 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->klass)->rgctx_data, 7)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_3;
		L_3 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_2, /*hidden argument*/NULL);
		Type_t * L_4;
		L_4 = PlayableHandle_GetPlayableType_m5E523E4DA00DF2FAB2E209B0B43FD5AA430AE84F((PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A *)(PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A *)(&___handle0), /*hidden argument*/NULL);
		NullCheck((Type_t *)L_3);
		bool L_5;
		L_5 = VirtFuncInvoker1< bool, Type_t * >::Invoke(106 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, (Type_t *)L_3, (Type_t *)L_4);
		V_1 = (bool)((((int32_t)L_5) == ((int32_t)0))? 1 : 0);
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_004b;
		}
	}
	{
		Type_t * L_7;
		L_7 = PlayableHandle_GetPlayableType_m5E523E4DA00DF2FAB2E209B0B43FD5AA430AE84F((PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A *)(PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A *)(&___handle0), /*hidden argument*/NULL);
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_8 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->klass)->rgctx_data, 7)) };
		IL2CPP_RUNTIME_CLASS_INIT(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
		Type_t * L_9;
		L_9 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_8, /*hidden argument*/NULL);
		String_t* L_10;
		L_10 = String_Format_m8D1CB0410C35E052A53AE957C914C841E54BAB66((String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral4F7779D7284080B28F7A5CF5A87C438CBA6F6F9F)), (RuntimeObject *)L_7, (RuntimeObject *)L_9, /*hidden argument*/NULL);
		InvalidCastException_tD99F9FF94C3859C78E90F68C2F77A1558BCAF463 * L_11 = (InvalidCastException_tD99F9FF94C3859C78E90F68C2F77A1558BCAF463 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_tD99F9FF94C3859C78E90F68C2F77A1558BCAF463_il2cpp_TypeInfo_var)));
		InvalidCastException__ctor_m50103CBF0C211B93BF46697875413A10B5A5C5A3(L_11, (String_t*)L_10, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_11, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ScriptPlayable_1__ctor_m35E668A204B15B5AAC48A7265A4CE08F866DF5BF_RuntimeMethod_var)));
	}

IL_004b:
	{
	}

IL_004c:
	{
		PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  L_12 = ___handle0;
		__this->set_m_Handle_0(L_12);
		return;
	}
}
IL2CPP_EXTERN_C  void ScriptPlayable_1__ctor_m35E668A204B15B5AAC48A7265A4CE08F866DF5BF_AdjustorThunk (RuntimeObject * __this, PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  ___handle0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	ScriptPlayable_1_t7495DFF84B5233AF863183881C3C7D626F65C266 * _thisAdjusted = reinterpret_cast<ScriptPlayable_1_t7495DFF84B5233AF863183881C3C7D626F65C266 *>(__this + _offset);
	ScriptPlayable_1__ctor_m35E668A204B15B5AAC48A7265A4CE08F866DF5BF(_thisAdjusted, ___handle0, method);
}
// UnityEngine.Playables.PlayableHandle UnityEngine.Playables.ScriptPlayable`1<System.Object>::GetHandle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  ScriptPlayable_1_GetHandle_m65BABE7B2DF1994C8A908D1B87BABC926648109B_gshared (ScriptPlayable_1_t7495DFF84B5233AF863183881C3C7D626F65C266 * __this, const RuntimeMethod* method)
{
	PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  L_0 = (PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A )__this->get_m_Handle_0();
		V_0 = (PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A )L_0;
		goto IL_000a;
	}

IL_000a:
	{
		PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  L_1 = V_0;
		return (PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A )L_1;
	}
}
IL2CPP_EXTERN_C  PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  ScriptPlayable_1_GetHandle_m65BABE7B2DF1994C8A908D1B87BABC926648109B_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	ScriptPlayable_1_t7495DFF84B5233AF863183881C3C7D626F65C266 * _thisAdjusted = reinterpret_cast<ScriptPlayable_1_t7495DFF84B5233AF863183881C3C7D626F65C266 *>(__this + _offset);
	PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  _returnValue;
	_returnValue = ScriptPlayable_1_GetHandle_m65BABE7B2DF1994C8A908D1B87BABC926648109B(_thisAdjusted, method);
	return _returnValue;
}
// T UnityEngine.Playables.ScriptPlayable`1<System.Object>::GetBehaviour()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * ScriptPlayable_1_GetBehaviour_mAAB5A26737D268B878D5CDCF0888FC9B738C09F9_gshared (ScriptPlayable_1_t7495DFF84B5233AF863183881C3C7D626F65C266 * __this, const RuntimeMethod* method)
{
	RuntimeObject * V_0 = NULL;
	{
		PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A * L_0 = (PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A *)__this->get_address_of_m_Handle_0();
		RuntimeObject * L_1;
		L_1 = PlayableHandle_GetObject_TisRuntimeObject_mF33505C32B01896DADE2E6295F7FA71E8563508B((PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A *)(PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 11));
		V_0 = (RuntimeObject *)L_1;
		goto IL_000f;
	}

IL_000f:
	{
		RuntimeObject * L_2 = V_0;
		return (RuntimeObject *)L_2;
	}
}
IL2CPP_EXTERN_C  RuntimeObject * ScriptPlayable_1_GetBehaviour_mAAB5A26737D268B878D5CDCF0888FC9B738C09F9_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	ScriptPlayable_1_t7495DFF84B5233AF863183881C3C7D626F65C266 * _thisAdjusted = reinterpret_cast<ScriptPlayable_1_t7495DFF84B5233AF863183881C3C7D626F65C266 *>(__this + _offset);
	RuntimeObject * _returnValue;
	_returnValue = ScriptPlayable_1_GetBehaviour_mAAB5A26737D268B878D5CDCF0888FC9B738C09F9(_thisAdjusted, method);
	return _returnValue;
}
// UnityEngine.Playables.Playable UnityEngine.Playables.ScriptPlayable`1<System.Object>::op_Implicit(UnityEngine.Playables.ScriptPlayable`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Playable_tC24692CDD1DD8F1D5C646035A76D2830A70214E2  ScriptPlayable_1_op_Implicit_m93B777FC690A8A1700ADEC08D20C44C8AF93A1E8_gshared (ScriptPlayable_1_t7495DFF84B5233AF863183881C3C7D626F65C266  ___playable0, const RuntimeMethod* method)
{
	Playable_tC24692CDD1DD8F1D5C646035A76D2830A70214E2  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  L_0;
		L_0 = ScriptPlayable_1_GetHandle_m65BABE7B2DF1994C8A908D1B87BABC926648109B((ScriptPlayable_1_t7495DFF84B5233AF863183881C3C7D626F65C266 *)(ScriptPlayable_1_t7495DFF84B5233AF863183881C3C7D626F65C266 *)(&___playable0), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 12));
		Playable_tC24692CDD1DD8F1D5C646035A76D2830A70214E2  L_1;
		memset((&L_1), 0, sizeof(L_1));
		Playable__ctor_m4B5AC727703A68C00773F99DE1C711EFC973DCA8((&L_1), (PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A )L_0, /*hidden argument*/NULL);
		V_0 = (Playable_tC24692CDD1DD8F1D5C646035A76D2830A70214E2 )L_1;
		goto IL_0010;
	}

IL_0010:
	{
		Playable_tC24692CDD1DD8F1D5C646035A76D2830A70214E2  L_2 = V_0;
		return (Playable_tC24692CDD1DD8F1D5C646035A76D2830A70214E2 )L_2;
	}
}
// System.Boolean UnityEngine.Playables.ScriptPlayable`1<System.Object>::Equals(UnityEngine.Playables.ScriptPlayable`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ScriptPlayable_1_Equals_m72468FB4D96A9940F432654856653DFF5D0F3A78_gshared (ScriptPlayable_1_t7495DFF84B5233AF863183881C3C7D626F65C266 * __this, ScriptPlayable_1_t7495DFF84B5233AF863183881C3C7D626F65C266  ___other0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  L_0;
		L_0 = ScriptPlayable_1_GetHandle_m65BABE7B2DF1994C8A908D1B87BABC926648109B((ScriptPlayable_1_t7495DFF84B5233AF863183881C3C7D626F65C266 *)(ScriptPlayable_1_t7495DFF84B5233AF863183881C3C7D626F65C266 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 12));
		PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  L_1;
		L_1 = ScriptPlayable_1_GetHandle_m65BABE7B2DF1994C8A908D1B87BABC926648109B((ScriptPlayable_1_t7495DFF84B5233AF863183881C3C7D626F65C266 *)(ScriptPlayable_1_t7495DFF84B5233AF863183881C3C7D626F65C266 *)(&___other0), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 12));
		IL2CPP_RUNTIME_CLASS_INIT(PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = PlayableHandle_op_Equality_mFD26CFA8ECF2B622B1A3D4117066CAE965C9F704((PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A )L_0, (PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A )L_1, /*hidden argument*/NULL);
		V_0 = (bool)L_2;
		goto IL_0016;
	}

IL_0016:
	{
		bool L_3 = V_0;
		return (bool)L_3;
	}
}
IL2CPP_EXTERN_C  bool ScriptPlayable_1_Equals_m72468FB4D96A9940F432654856653DFF5D0F3A78_AdjustorThunk (RuntimeObject * __this, ScriptPlayable_1_t7495DFF84B5233AF863183881C3C7D626F65C266  ___other0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	ScriptPlayable_1_t7495DFF84B5233AF863183881C3C7D626F65C266 * _thisAdjusted = reinterpret_cast<ScriptPlayable_1_t7495DFF84B5233AF863183881C3C7D626F65C266 *>(__this + _offset);
	bool _returnValue;
	_returnValue = ScriptPlayable_1_Equals_m72468FB4D96A9940F432654856653DFF5D0F3A78(_thisAdjusted, ___other0, method);
	return _returnValue;
}
// System.Void UnityEngine.Playables.ScriptPlayable`1<System.Object>::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScriptPlayable_1__cctor_mE4F651D0DD0AF0FAC37E9E781BB5329142BABB02_gshared (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A_il2cpp_TypeInfo_var);
		PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  L_0;
		L_0 = PlayableHandle_get_Null_mD1C6FC2D7F6A7A23955ACDD87BE934B75463E612(/*hidden argument*/NULL);
		ScriptPlayable_1_t7495DFF84B5233AF863183881C3C7D626F65C266  L_1;
		memset((&L_1), 0, sizeof(L_1));
		ScriptPlayable_1__ctor_m35E668A204B15B5AAC48A7265A4CE08F866DF5BF((&L_1), (PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A )L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		((ScriptPlayable_1_t7495DFF84B5233AF863183881C3C7D626F65C266_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 0)))->set_m_NullPlayable_1(L_1);
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
// System.Void Unity.XRTools.Utils.Internal.ScriptableSettingsBase`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScriptableSettingsBase_1__ctor_m8B1FAE8D8890451444CA371615670AF7040414F8_gshared (ScriptableSettingsBase_1_t5A9564162EF4DA7B7F0899C607967426C8527489 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DebugUtils_t9C2D80EB75BACF6C7328DB475074A7C11AE7F4FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ScriptableSettingsBase_t1D43764F1AA18A7DB433687E4A75AC027BCAEB45_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4EE0C90481BB181B5C6AAE85820F9C472ACCC07A);
		s_Il2CppMethodInitialized = true;
	}
	{
		// protected ScriptableSettingsBase()
		NullCheck((ScriptableSettingsBase_t1D43764F1AA18A7DB433687E4A75AC027BCAEB45 *)__this);
		IL2CPP_RUNTIME_CLASS_INIT(ScriptableSettingsBase_t1D43764F1AA18A7DB433687E4A75AC027BCAEB45_il2cpp_TypeInfo_var);
		ScriptableSettingsBase__ctor_m88791CF2587FAD6F03DC724B9113B9E736394CCE((ScriptableSettingsBase_t1D43764F1AA18A7DB433687E4A75AC027BCAEB45 *)__this, /*hidden argument*/NULL);
		// if (s_Instance != null)
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 0));
		RuntimeObject * L_0 = ((ScriptableSettingsBase_1_t5A9564162EF4DA7B7F0899C607967426C8527489_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 0)))->get_s_Instance_13();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90((Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_003b;
		}
	}
	{
		// DebugUtils.LogError(string.Format("ScriptableSingleton {0} already exists. This can happen if there are " +
		//     "two copies of the asset or if you query the singleton in a constructor.", typeof(T)), s_Instance);
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_2 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->klass->rgctx_data, 2)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_3;
		L_3 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_2, /*hidden argument*/NULL);
		String_t* L_4;
		L_4 = String_Format_mB3D38E5238C3164DB4D7D29339D9E225A4496D17((String_t*)_stringLiteral4EE0C90481BB181B5C6AAE85820F9C472ACCC07A, (RuntimeObject *)L_3, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 0));
		RuntimeObject * L_5 = ((ScriptableSettingsBase_1_t5A9564162EF4DA7B7F0899C607967426C8527489_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 0)))->get_s_Instance_13();
		IL2CPP_RUNTIME_CLASS_INIT(DebugUtils_t9C2D80EB75BACF6C7328DB475074A7C11AE7F4FA_il2cpp_TypeInfo_var);
		DebugUtils_LogError_m785FC45D5BBC64A5AF38B7CF64D117CAE21C2C90((String_t*)L_4, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)L_5, /*hidden argument*/NULL);
	}

IL_003b:
	{
		// }
		return;
	}
}
// System.Void Unity.XRTools.Utils.Internal.ScriptableSettingsBase`1<System.Object>::Save(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScriptableSettingsBase_1_Save_mA26FB94770CA2EA98E79A6A6A266B81F5E147C40_gshared (String_t* ___savePathFormat0, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.String Unity.XRTools.Utils.Internal.ScriptableSettingsBase`1<System.Object>::GetFilePath()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ScriptableSettingsBase_1_GetFilePath_mA9C5543C76590ECC0FDBA98033263B613E5345DF_gshared (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// var type = typeof(T);
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_0 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->klass)->rgctx_data, 2)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1;
		L_1 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_0, /*hidden argument*/NULL);
		// return type.Name;
		NullCheck((MemberInfo_t *)L_1);
		String_t* L_2;
		L_2 = VirtFuncInvoker0< String_t* >::Invoke(7 /* System.String System.Reflection.MemberInfo::get_Name() */, (MemberInfo_t *)L_1);
		return (String_t*)L_2;
	}
}
// System.Void Unity.XRTools.Utils.Internal.ScriptableSettingsBase`1<System.Object>::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScriptableSettingsBase_1__cctor_m2B8C80E14411012EC02662EB326466E081FD070F_gshared (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ScriptableSettingsPathAttribute_tEBDF53D4B522413D2C680B0EE73DF4B4E5BAAEBC_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// protected static readonly bool k_HasCustomPath = typeof(T).IsDefined(typeof(ScriptableSettingsPathAttribute), true);
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_0 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->klass)->rgctx_data, 2)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1;
		L_1 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_0, /*hidden argument*/NULL);
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_2 = { reinterpret_cast<intptr_t> (ScriptableSettingsPathAttribute_tEBDF53D4B522413D2C680B0EE73DF4B4E5BAAEBC_0_0_0_var) };
		Type_t * L_3;
		L_3 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_2, /*hidden argument*/NULL);
		NullCheck((MemberInfo_t *)L_1);
		bool L_4;
		L_4 = VirtFuncInvoker2< bool, Type_t *, bool >::Invoke(12 /* System.Boolean System.Reflection.MemberInfo::IsDefined(System.Type,System.Boolean) */, (MemberInfo_t *)L_1, (Type_t *)L_3, (bool)1);
		((ScriptableSettingsBase_1_t5A9564162EF4DA7B7F0899C607967426C8527489_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 0)))->set_k_HasCustomPath_12(L_4);
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
// T Unity.XRTools.Utils.ScriptableSettings`1<System.Object>::get_instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * ScriptableSettings_1_get_instance_m18284A12BAAFA4D0E2F0104B7F0BE5B4A680135A_gshared (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (s_Instance == null)
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 0));
		RuntimeObject * L_0 = ((ScriptableSettingsBase_1_t5A9564162EF4DA7B7F0899C607967426C8527489_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 0)))->get_s_Instance_13();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54((Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0018;
		}
	}
	{
		// CreateAndLoad();
		RuntimeObject * L_2;
		L_2 = ((  RuntimeObject * (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 2)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 2));
	}

IL_0018:
	{
		// return s_Instance;
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 0));
		RuntimeObject * L_3 = ((ScriptableSettingsBase_1_t5A9564162EF4DA7B7F0899C607967426C8527489_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 0)))->get_s_Instance_13();
		return (RuntimeObject *)L_3;
	}
}
// T Unity.XRTools.Utils.ScriptableSettings`1<System.Object>::CreateAndLoad()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * ScriptableSettings_1_CreateAndLoad_mA916211FBC8A3AC2C0E90D730E833BF59B99E41B_gshared (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral478DFBA437063274793265BAAC2059B66A9789CB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9E164FB78D919258E6AAE96D9728E7A557009100);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD3A9C9918DE608DC2A9FD4E1672DF8AB84A28E78);
		s_Il2CppMethodInitialized = true;
	}
	String_t* G_B3_0 = NULL;
	String_t* G_B7_0 = NULL;
	{
		// var path = k_HasCustomPath ? GetFilePath() : string.Format(k_LoadPathFormat, GetFilePath());
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 0));
		bool L_0 = ((ScriptableSettingsBase_1_t5A9564162EF4DA7B7F0899C607967426C8527489_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 0)))->get_k_HasCustomPath_12();
		if (L_0)
		{
			goto IL_0018;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 0));
		String_t* L_1;
		L_1 = ((  String_t* (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 4)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 4));
		String_t* L_2;
		L_2 = String_Format_mB3D38E5238C3164DB4D7D29339D9E225A4496D17((String_t*)_stringLiteralD3A9C9918DE608DC2A9FD4E1672DF8AB84A28E78, (RuntimeObject *)L_1, /*hidden argument*/NULL);
		G_B3_0 = L_2;
		goto IL_001d;
	}

IL_0018:
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 0));
		String_t* L_3;
		L_3 = ((  String_t* (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 4)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 4));
		G_B3_0 = L_3;
	}

IL_001d:
	{
		// s_Instance = Resources.Load(path) as T;
		Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * L_4;
		L_4 = Resources_Load_m011631B3740AFD38D496838F10D3DA635A061120((String_t*)G_B3_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 0));
		((ScriptableSettingsBase_1_t5A9564162EF4DA7B7F0899C607967426C8527489_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 0)))->set_s_Instance_13(((RuntimeObject *)Castclass((RuntimeObject*)((RuntimeObject *)IsInst((RuntimeObject*)L_4, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1))), IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1))));
		// if (s_Instance == null)
		RuntimeObject * L_5 = ((ScriptableSettingsBase_1_t5A9564162EF4DA7B7F0899C607967426C8527489_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 0)))->get_s_Instance_13();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_6;
		L_6 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54((Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)L_5, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_0065;
		}
	}
	{
		// s_Instance = CreateInstance<T>();
		RuntimeObject * L_7;
		L_7 = ((  RuntimeObject * (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 5)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 0));
		((ScriptableSettingsBase_1_t5A9564162EF4DA7B7F0899C607967426C8527489_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 0)))->set_s_Instance_13(L_7);
		// Save(k_HasCustomPath ? k_CustomSavePathFormat : k_SavePathFormat);
		bool L_8 = ((ScriptableSettingsBase_1_t5A9564162EF4DA7B7F0899C607967426C8527489_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 0)))->get_k_HasCustomPath_12();
		if (L_8)
		{
			goto IL_005b;
		}
	}
	{
		G_B7_0 = _stringLiteral478DFBA437063274793265BAAC2059B66A9789CB;
		goto IL_0060;
	}

IL_005b:
	{
		G_B7_0 = _stringLiteral9E164FB78D919258E6AAE96D9728E7A557009100;
	}

IL_0060:
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 0));
		((  void (*) (String_t*, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 6)->methodPointer)((String_t*)G_B7_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 6));
	}

IL_0065:
	{
		// return s_Instance;
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 0));
		RuntimeObject * L_9 = ((ScriptableSettingsBase_1_t5A9564162EF4DA7B7F0899C607967426C8527489_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 0)))->get_s_Instance_13();
		return (RuntimeObject *)L_9;
	}
}
// System.Void Unity.XRTools.Utils.ScriptableSettings`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScriptableSettings_1__ctor_m688A55EDC6CEC80EF080A4060DC8EDC5F2B2C107_gshared (ScriptableSettings_1_t5F2333C177F83CFEBC19E1EEC3B26A5CAC8F110F * __this, const RuntimeMethod* method)
{
	{
		NullCheck((ScriptableSettingsBase_1_t5A9564162EF4DA7B7F0899C607967426C8527489 *)__this);
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 0));
		((  void (*) (ScriptableSettingsBase_1_t5A9564162EF4DA7B7F0899C607967426C8527489 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7)->methodPointer)((ScriptableSettingsBase_1_t5A9564162EF4DA7B7F0899C607967426C8527489 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7));
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
// System.Void System.IO.SearchResultHandler`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SearchResultHandler_1__ctor_m1287C307D907806F0E375E508CF4313F47C63340_gshared (SearchResultHandler_1_tB819A963B62A843474E27DDAFE239812CF70839D * __this, const RuntimeMethod* method)
{
	{
		NullCheck((RuntimeObject *)__this);
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405((RuntimeObject *)__this, /*hidden argument*/NULL);
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
// System.Collections.Generic.Dictionary`2<TKey,TValue> UnityEngine.XR.ARSubsystems.SerializableDictionary`2<System.Object,System.Object>::get_dictionary()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * SerializableDictionary_2_get_dictionary_m467DD0E74C49BC87F272D294F8EB87B8FEF7BBB4_gshared (SerializableDictionary_2_tEFC74430D1C2FB9383F66E41679103195F856B82 * __this, const RuntimeMethod* method)
{
	{
		// public Dictionary<TKey, TValue> dictionary { get; } = new Dictionary<TKey, TValue>();
		Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * L_0 = (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D *)__this->get_U3CdictionaryU3Ek__BackingField_0();
		return (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D *)L_0;
	}
}
// System.Void UnityEngine.XR.ARSubsystems.SerializableDictionary`2<System.Object,System.Object>::Serialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerializableDictionary_2_Serialize_mEF63C5819594FA8B27F76D2E6FD3F68A3BF54EA0_gshared (SerializableDictionary_2_tEFC74430D1C2FB9383F66E41679103195F856B82 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Enumerator_tE4E91EE5578038530CF0C46227953BA787E7A0A0  V_1;
	memset((&V_1), 0, sizeof(V_1));
	KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  V_2;
	memset((&V_2), 0, sizeof(V_2));
	KeyValuePair_tDC7997A7314ED4FA7C9742BBF04107D452131A4F  V_3;
	memset((&V_3), 0, sizeof(V_3));
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		// m_Storage = new KeyValuePair[dictionary.Count];
		NullCheck((SerializableDictionary_2_tEFC74430D1C2FB9383F66E41679103195F856B82 *)__this);
		Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * L_0;
		L_0 = ((  Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * (*) (SerializableDictionary_2_tEFC74430D1C2FB9383F66E41679103195F856B82 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((SerializableDictionary_2_tEFC74430D1C2FB9383F66E41679103195F856B82 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		NullCheck((Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D *)L_0);
		int32_t L_1;
		L_1 = ((  int32_t (*) (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1)->methodPointer)((Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1));
		KeyValuePairU5BU5D_t0355D455D8B6B5B8B4955D1528C394577E9B9C21* L_2 = (KeyValuePairU5BU5D_t0355D455D8B6B5B8B4955D1528C394577E9B9C21*)(KeyValuePairU5BU5D_t0355D455D8B6B5B8B4955D1528C394577E9B9C21*)SZArrayNew(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2), (uint32_t)L_1);
		__this->set_m_Storage_1(L_2);
		// var index = 0;
		V_0 = (int32_t)0;
		// foreach (var pair in dictionary)
		NullCheck((SerializableDictionary_2_tEFC74430D1C2FB9383F66E41679103195F856B82 *)__this);
		Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * L_3;
		L_3 = ((  Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * (*) (SerializableDictionary_2_tEFC74430D1C2FB9383F66E41679103195F856B82 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((SerializableDictionary_2_tEFC74430D1C2FB9383F66E41679103195F856B82 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		NullCheck((Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D *)L_3);
		Enumerator_tE4E91EE5578038530CF0C46227953BA787E7A0A0  L_4;
		L_4 = ((  Enumerator_tE4E91EE5578038530CF0C46227953BA787E7A0A0  (*) (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)((Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D *)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		V_1 = (Enumerator_tE4E91EE5578038530CF0C46227953BA787E7A0A0 )L_4;
	}

IL_0024:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0063;
		}

IL_0026:
		{
			// foreach (var pair in dictionary)
			KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  L_5;
			L_5 = Enumerator_get_Current_m17E1C36ECBB09CC2AB892710866F8655D83A6048_inline((Enumerator_tE4E91EE5578038530CF0C46227953BA787E7A0A0 *)(Enumerator_tE4E91EE5578038530CF0C46227953BA787E7A0A0 *)(&V_1), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
			V_2 = (KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 )L_5;
			// m_Storage[index++] = new KeyValuePair
			// {
			//     key = pair.Key,
			//     value = pair.Value
			// };
			KeyValuePairU5BU5D_t0355D455D8B6B5B8B4955D1528C394577E9B9C21* L_6 = (KeyValuePairU5BU5D_t0355D455D8B6B5B8B4955D1528C394577E9B9C21*)__this->get_m_Storage_1();
			int32_t L_7 = V_0;
			int32_t L_8 = (int32_t)L_7;
			V_0 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_8, (int32_t)1));
			il2cpp_codegen_initobj((&V_3), sizeof(KeyValuePair_tDC7997A7314ED4FA7C9742BBF04107D452131A4F ));
			RuntimeObject * L_9;
			L_9 = KeyValuePair_2_get_Key_mCAD7B121DB998D7C56EB0281215A860EFE9DCD95_inline((KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 *)(KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 *)(&V_2), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5));
			(&V_3)->set_key_0(L_9);
			RuntimeObject * L_10;
			L_10 = KeyValuePair_2_get_Value_m622223593F7461E7812C581DDB145270016ED303_inline((KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 *)(KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 *)(&V_2), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6));
			(&V_3)->set_value_1(L_10);
			KeyValuePair_tDC7997A7314ED4FA7C9742BBF04107D452131A4F  L_11 = V_3;
			NullCheck(L_6);
			(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_8), (KeyValuePair_tDC7997A7314ED4FA7C9742BBF04107D452131A4F )L_11);
		}

IL_0063:
		{
			// foreach (var pair in dictionary)
			bool L_12;
			L_12 = Enumerator_MoveNext_mCAD84084129516BD41DE5CC3E1FABA5A8DF836D0((Enumerator_tE4E91EE5578038530CF0C46227953BA787E7A0A0 *)(Enumerator_tE4E91EE5578038530CF0C46227953BA787E7A0A0 *)(&V_1), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7));
			if (L_12)
			{
				goto IL_0026;
			}
		}

IL_006c:
		{
			IL2CPP_LEAVE(0x7C, FINALLY_006e);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_006e;
	}

FINALLY_006e:
	{ // begin finally (depth: 1)
		Il2CppFakeBox<Enumerator_tE4E91EE5578038530CF0C46227953BA787E7A0A0 > L_13(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 8), (&V_1));
		const VirtualInvokeData& il2cpp_virtual_invoke_data__118 = il2cpp_codegen_get_interface_invoke_data(0, (&L_13), IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		((  void (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_virtual_invoke_data__118.methodPtr)((RuntimeObject*)(&L_13), /*hidden argument*/il2cpp_virtual_invoke_data__118.method);
		V_1 = L_13.m_Value;
		IL2CPP_END_FINALLY(110)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(110)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x7C, IL_007c)
	}

IL_007c:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.XR.ARSubsystems.SerializableDictionary`2<System.Object,System.Object>::Deserialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerializableDictionary_2_Deserialize_m47BE0D9F819A3AA4F32BFE0CA5487BB568498897_gshared (SerializableDictionary_2_tEFC74430D1C2FB9383F66E41679103195F856B82 * __this, const RuntimeMethod* method)
{
	KeyValuePairU5BU5D_t0355D455D8B6B5B8B4955D1528C394577E9B9C21* V_0 = NULL;
	int32_t V_1 = 0;
	KeyValuePair_tDC7997A7314ED4FA7C9742BBF04107D452131A4F  V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		// dictionary.Clear();
		NullCheck((SerializableDictionary_2_tEFC74430D1C2FB9383F66E41679103195F856B82 *)__this);
		Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * L_0;
		L_0 = ((  Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * (*) (SerializableDictionary_2_tEFC74430D1C2FB9383F66E41679103195F856B82 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((SerializableDictionary_2_tEFC74430D1C2FB9383F66E41679103195F856B82 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		NullCheck((Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D *)L_0);
		((  void (*) (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 9)->methodPointer)((Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 9));
		// if (m_Storage == null)
		KeyValuePairU5BU5D_t0355D455D8B6B5B8B4955D1528C394577E9B9C21* L_1 = (KeyValuePairU5BU5D_t0355D455D8B6B5B8B4955D1528C394577E9B9C21*)__this->get_m_Storage_1();
		if (L_1)
		{
			goto IL_0014;
		}
	}
	{
		// return;
		return;
	}

IL_0014:
	{
		// foreach (var pair in m_Storage)
		KeyValuePairU5BU5D_t0355D455D8B6B5B8B4955D1528C394577E9B9C21* L_2 = (KeyValuePairU5BU5D_t0355D455D8B6B5B8B4955D1528C394577E9B9C21*)__this->get_m_Storage_1();
		V_0 = (KeyValuePairU5BU5D_t0355D455D8B6B5B8B4955D1528C394577E9B9C21*)L_2;
		V_1 = (int32_t)0;
		goto IL_0042;
	}

IL_001f:
	{
		// foreach (var pair in m_Storage)
		KeyValuePairU5BU5D_t0355D455D8B6B5B8B4955D1528C394577E9B9C21* L_3 = V_0;
		int32_t L_4 = V_1;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		KeyValuePair_tDC7997A7314ED4FA7C9742BBF04107D452131A4F  L_6 = (KeyValuePair_tDC7997A7314ED4FA7C9742BBF04107D452131A4F )(L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		V_2 = (KeyValuePair_tDC7997A7314ED4FA7C9742BBF04107D452131A4F )L_6;
		// dictionary.Add(pair.key, pair.value);
		NullCheck((SerializableDictionary_2_tEFC74430D1C2FB9383F66E41679103195F856B82 *)__this);
		Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * L_7;
		L_7 = ((  Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * (*) (SerializableDictionary_2_tEFC74430D1C2FB9383F66E41679103195F856B82 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((SerializableDictionary_2_tEFC74430D1C2FB9383F66E41679103195F856B82 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		KeyValuePair_tDC7997A7314ED4FA7C9742BBF04107D452131A4F  L_8 = V_2;
		RuntimeObject * L_9 = (RuntimeObject *)L_8.get_key_0();
		KeyValuePair_tDC7997A7314ED4FA7C9742BBF04107D452131A4F  L_10 = V_2;
		RuntimeObject * L_11 = (RuntimeObject *)L_10.get_value_1();
		NullCheck((Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D *)L_7);
		((  void (*) (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D *, RuntimeObject *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 10)->methodPointer)((Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D *)L_7, (RuntimeObject *)L_9, (RuntimeObject *)L_11, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 10));
		int32_t L_12 = V_1;
		V_1 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_12, (int32_t)1));
	}

IL_0042:
	{
		// foreach (var pair in m_Storage)
		int32_t L_13 = V_1;
		KeyValuePairU5BU5D_t0355D455D8B6B5B8B4955D1528C394577E9B9C21* L_14 = V_0;
		NullCheck(L_14);
		if ((((int32_t)L_13) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_14)->max_length))))))
		{
			goto IL_001f;
		}
	}
	{
		// }
		return;
	}
}
// System.Void UnityEngine.XR.ARSubsystems.SerializableDictionary`2<System.Object,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerializableDictionary_2__ctor_mB49337B34D03521AA4DA345413B3EE3B24C08236_gshared (SerializableDictionary_2_tEFC74430D1C2FB9383F66E41679103195F856B82 * __this, const RuntimeMethod* method)
{
	{
		// public Dictionary<TKey, TValue> dictionary { get; } = new Dictionary<TKey, TValue>();
		Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * L_0 = (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 11));
		((  void (*) (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 12)->methodPointer)(L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 12));
		__this->set_U3CdictionaryU3Ek__BackingField_0(L_0);
		NullCheck((RuntimeObject *)__this);
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405((RuntimeObject *)__this, /*hidden argument*/NULL);
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
// System.Void Unity.Properties.ReflectedMemberProperty`2/SetClassValueAction<System.Object,System.Boolean>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SetClassValueAction__ctor_mF4D4BF8A1A05477CA23BC11AC70A437831099562_gshared (SetClassValueAction_tA86ACBC111359453B0AC204006D2F17530E676BD * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void Unity.Properties.ReflectedMemberProperty`2/SetClassValueAction<System.Object,System.Boolean>::Invoke(TContainer,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SetClassValueAction_Invoke_m7F5931726034F01F9B5E847A2330751A66908E4C_gshared (SetClassValueAction_tA86ACBC111359453B0AC204006D2F17530E676BD * __this, RuntimeObject * ___container0, bool ___value1, const RuntimeMethod* method)
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
			if (___parameterCount == 2)
			{
				// open
				typedef void (*FunctionPointerType) (RuntimeObject *, bool, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___container0, ___value1, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, RuntimeObject *, bool, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___container0, ___value1, targetMethod);
			}
		}
		else if (___parameterCount != 2)
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< bool >::Invoke(targetMethod, ___container0, ___value1);
					else
						GenericVirtActionInvoker1< bool >::Invoke(targetMethod, ___container0, ___value1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< bool >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___container0, ___value1);
					else
						VirtActionInvoker1< bool >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___container0, ___value1);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (RuntimeObject *, bool, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___container0, ___value1, targetMethod);
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
						GenericInterfaceActionInvoker2< RuntimeObject *, bool >::Invoke(targetMethod, targetThis, ___container0, ___value1);
					else
						GenericVirtActionInvoker2< RuntimeObject *, bool >::Invoke(targetMethod, targetThis, ___container0, ___value1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker2< RuntimeObject *, bool >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___container0, ___value1);
					else
						VirtActionInvoker2< RuntimeObject *, bool >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___container0, ___value1);
				}
			}
			else
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (RuntimeObject *, bool, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___container0, ___value1, targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, RuntimeObject *, bool, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___container0, ___value1, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult Unity.Properties.ReflectedMemberProperty`2/SetClassValueAction<System.Object,System.Boolean>::BeginInvoke(TContainer,TValue,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SetClassValueAction_BeginInvoke_m798D90FCF267605DEAAC3A3855EED9FC4AC73A05_gshared (SetClassValueAction_tA86ACBC111359453B0AC204006D2F17530E676BD * __this, RuntimeObject * ___container0, bool ___value1, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = ___container0;
	__d_args[1] = Box(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var, &___value1);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);;
}
// System.Void Unity.Properties.ReflectedMemberProperty`2/SetClassValueAction<System.Object,System.Boolean>::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SetClassValueAction_EndInvoke_mB33CF0896E7CF32EFB6729B23D7D34089B4FBC5E_gshared (SetClassValueAction_tA86ACBC111359453B0AC204006D2F17530E676BD * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
// System.Void Unity.Properties.ReflectedMemberProperty`2/SetClassValueAction<System.Object,System.Char>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SetClassValueAction__ctor_m7CC50EA511AB5FEA126A32BB279B0EFE89627578_gshared (SetClassValueAction_t3D9CA46079C933069B9EB402015DC5BE95A4F59C * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void Unity.Properties.ReflectedMemberProperty`2/SetClassValueAction<System.Object,System.Char>::Invoke(TContainer,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SetClassValueAction_Invoke_m2CE513CBA9B9DA19CD010B7601E558E119F41A04_gshared (SetClassValueAction_t3D9CA46079C933069B9EB402015DC5BE95A4F59C * __this, RuntimeObject * ___container0, Il2CppChar ___value1, const RuntimeMethod* method)
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
			if (___parameterCount == 2)
			{
				// open
				typedef void (*FunctionPointerType) (RuntimeObject *, Il2CppChar, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___container0, ___value1, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, RuntimeObject *, Il2CppChar, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___container0, ___value1, targetMethod);
			}
		}
		else if (___parameterCount != 2)
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< Il2CppChar >::Invoke(targetMethod, ___container0, ___value1);
					else
						GenericVirtActionInvoker1< Il2CppChar >::Invoke(targetMethod, ___container0, ___value1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< Il2CppChar >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___container0, ___value1);
					else
						VirtActionInvoker1< Il2CppChar >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___container0, ___value1);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (RuntimeObject *, Il2CppChar, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___container0, ___value1, targetMethod);
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
						GenericInterfaceActionInvoker2< RuntimeObject *, Il2CppChar >::Invoke(targetMethod, targetThis, ___container0, ___value1);
					else
						GenericVirtActionInvoker2< RuntimeObject *, Il2CppChar >::Invoke(targetMethod, targetThis, ___container0, ___value1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker2< RuntimeObject *, Il2CppChar >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___container0, ___value1);
					else
						VirtActionInvoker2< RuntimeObject *, Il2CppChar >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___container0, ___value1);
				}
			}
			else
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (RuntimeObject *, Il2CppChar, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___container0, ___value1, targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, RuntimeObject *, Il2CppChar, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___container0, ___value1, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult Unity.Properties.ReflectedMemberProperty`2/SetClassValueAction<System.Object,System.Char>::BeginInvoke(TContainer,TValue,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SetClassValueAction_BeginInvoke_m22A47632C3E56758F4685AB979A6000967BB5B12_gshared (SetClassValueAction_t3D9CA46079C933069B9EB402015DC5BE95A4F59C * __this, RuntimeObject * ___container0, Il2CppChar ___value1, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = ___container0;
	__d_args[1] = Box(Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_il2cpp_TypeInfo_var, &___value1);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);;
}
// System.Void Unity.Properties.ReflectedMemberProperty`2/SetClassValueAction<System.Object,System.Char>::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SetClassValueAction_EndInvoke_m919A6CB536C7C4D68006E25F98D8AA0EB5F4A244_gshared (SetClassValueAction_t3D9CA46079C933069B9EB402015DC5BE95A4F59C * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
// System.Void Unity.Properties.ReflectedMemberProperty`2/SetClassValueAction<System.Object,System.Int32>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SetClassValueAction__ctor_m2DBCF81CBC6DBD4EAD738E1F0ACA64173D7C7537_gshared (SetClassValueAction_t3FFAED7507894B723C6D0FC149A80B7C53DFA524 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void Unity.Properties.ReflectedMemberProperty`2/SetClassValueAction<System.Object,System.Int32>::Invoke(TContainer,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SetClassValueAction_Invoke_mB849FA75CC8E46E5D216BEEB589C0F66885D90B3_gshared (SetClassValueAction_t3FFAED7507894B723C6D0FC149A80B7C53DFA524 * __this, RuntimeObject * ___container0, int32_t ___value1, const RuntimeMethod* method)
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
			if (___parameterCount == 2)
			{
				// open
				typedef void (*FunctionPointerType) (RuntimeObject *, int32_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___container0, ___value1, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, RuntimeObject *, int32_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___container0, ___value1, targetMethod);
			}
		}
		else if (___parameterCount != 2)
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< int32_t >::Invoke(targetMethod, ___container0, ___value1);
					else
						GenericVirtActionInvoker1< int32_t >::Invoke(targetMethod, ___container0, ___value1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___container0, ___value1);
					else
						VirtActionInvoker1< int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___container0, ___value1);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (RuntimeObject *, int32_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___container0, ___value1, targetMethod);
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
						GenericInterfaceActionInvoker2< RuntimeObject *, int32_t >::Invoke(targetMethod, targetThis, ___container0, ___value1);
					else
						GenericVirtActionInvoker2< RuntimeObject *, int32_t >::Invoke(targetMethod, targetThis, ___container0, ___value1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker2< RuntimeObject *, int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___container0, ___value1);
					else
						VirtActionInvoker2< RuntimeObject *, int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___container0, ___value1);
				}
			}
			else
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (RuntimeObject *, int32_t, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___container0, ___value1, targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, RuntimeObject *, int32_t, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___container0, ___value1, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult Unity.Properties.ReflectedMemberProperty`2/SetClassValueAction<System.Object,System.Int32>::BeginInvoke(TContainer,TValue,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SetClassValueAction_BeginInvoke_mE420A3679EA1458A41AC2E285412320DFDF39251_gshared (SetClassValueAction_t3FFAED7507894B723C6D0FC149A80B7C53DFA524 * __this, RuntimeObject * ___container0, int32_t ___value1, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = ___container0;
	__d_args[1] = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &___value1);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);;
}
// System.Void Unity.Properties.ReflectedMemberProperty`2/SetClassValueAction<System.Object,System.Int32>::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SetClassValueAction_EndInvoke_mFE56900905FA35BD643EA65049FCEF7E114A90AC_gshared (SetClassValueAction_t3FFAED7507894B723C6D0FC149A80B7C53DFA524 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
// System.Void Unity.Properties.ReflectedMemberProperty`2/SetClassValueAction<System.Object,System.Int64>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SetClassValueAction__ctor_m864A221C000F8BC9886FFCE35288A19A190300FF_gshared (SetClassValueAction_t438FA66D831BCF72E300398FC3A1F687BA8E42CD * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void Unity.Properties.ReflectedMemberProperty`2/SetClassValueAction<System.Object,System.Int64>::Invoke(TContainer,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SetClassValueAction_Invoke_m66B57CFD766DB98B088D05D99CC1ACCE47BF36BE_gshared (SetClassValueAction_t438FA66D831BCF72E300398FC3A1F687BA8E42CD * __this, RuntimeObject * ___container0, int64_t ___value1, const RuntimeMethod* method)
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
			if (___parameterCount == 2)
			{
				// open
				typedef void (*FunctionPointerType) (RuntimeObject *, int64_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___container0, ___value1, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, RuntimeObject *, int64_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___container0, ___value1, targetMethod);
			}
		}
		else if (___parameterCount != 2)
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< int64_t >::Invoke(targetMethod, ___container0, ___value1);
					else
						GenericVirtActionInvoker1< int64_t >::Invoke(targetMethod, ___container0, ___value1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< int64_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___container0, ___value1);
					else
						VirtActionInvoker1< int64_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___container0, ___value1);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (RuntimeObject *, int64_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___container0, ___value1, targetMethod);
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
						GenericInterfaceActionInvoker2< RuntimeObject *, int64_t >::Invoke(targetMethod, targetThis, ___container0, ___value1);
					else
						GenericVirtActionInvoker2< RuntimeObject *, int64_t >::Invoke(targetMethod, targetThis, ___container0, ___value1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker2< RuntimeObject *, int64_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___container0, ___value1);
					else
						VirtActionInvoker2< RuntimeObject *, int64_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___container0, ___value1);
				}
			}
			else
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (RuntimeObject *, int64_t, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___container0, ___value1, targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, RuntimeObject *, int64_t, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___container0, ___value1, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult Unity.Properties.ReflectedMemberProperty`2/SetClassValueAction<System.Object,System.Int64>::BeginInvoke(TContainer,TValue,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SetClassValueAction_BeginInvoke_m685BE71ECD0D7B9DC94D4869FDB8A7448D35266B_gshared (SetClassValueAction_t438FA66D831BCF72E300398FC3A1F687BA8E42CD * __this, RuntimeObject * ___container0, int64_t ___value1, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = ___container0;
	__d_args[1] = Box(Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_il2cpp_TypeInfo_var, &___value1);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);;
}
// System.Void Unity.Properties.ReflectedMemberProperty`2/SetClassValueAction<System.Object,System.Int64>::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SetClassValueAction_EndInvoke_m45E5A40067528D510FF2362924BEC2BF4C7BA0BC_gshared (SetClassValueAction_t438FA66D831BCF72E300398FC3A1F687BA8E42CD * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
// System.Void Unity.Properties.ReflectedMemberProperty`2/SetClassValueAction<System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SetClassValueAction__ctor_m1FFC68412F8C72DBE592FB62B7E6DC1A2D1A41D0_gshared (SetClassValueAction_t84B2D7C930A02612CA0C81F628E16D7901AC8A4D * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void Unity.Properties.ReflectedMemberProperty`2/SetClassValueAction<System.Object,System.Object>::Invoke(TContainer,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SetClassValueAction_Invoke_mF27CFC8316BFE46DAFA180BCA532C25C3DDDA4F4_gshared (SetClassValueAction_t84B2D7C930A02612CA0C81F628E16D7901AC8A4D * __this, RuntimeObject * ___container0, RuntimeObject * ___value1, const RuntimeMethod* method)
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
			if (___parameterCount == 2)
			{
				// open
				typedef void (*FunctionPointerType) (RuntimeObject *, RuntimeObject *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___container0, ___value1, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, RuntimeObject *, RuntimeObject *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___container0, ___value1, targetMethod);
			}
		}
		else if (___parameterCount != 2)
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< RuntimeObject * >::Invoke(targetMethod, ___container0, ___value1);
					else
						GenericVirtActionInvoker1< RuntimeObject * >::Invoke(targetMethod, ___container0, ___value1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< RuntimeObject * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___container0, ___value1);
					else
						VirtActionInvoker1< RuntimeObject * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___container0, ___value1);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (RuntimeObject *, RuntimeObject *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___container0, ___value1, targetMethod);
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
						GenericInterfaceActionInvoker2< RuntimeObject *, RuntimeObject * >::Invoke(targetMethod, targetThis, ___container0, ___value1);
					else
						GenericVirtActionInvoker2< RuntimeObject *, RuntimeObject * >::Invoke(targetMethod, targetThis, ___container0, ___value1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker2< RuntimeObject *, RuntimeObject * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___container0, ___value1);
					else
						VirtActionInvoker2< RuntimeObject *, RuntimeObject * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___container0, ___value1);
				}
			}
			else
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (RuntimeObject *, RuntimeObject *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___container0, ___value1, targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, RuntimeObject *, RuntimeObject *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___container0, ___value1, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult Unity.Properties.ReflectedMemberProperty`2/SetClassValueAction<System.Object,System.Object>::BeginInvoke(TContainer,TValue,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SetClassValueAction_BeginInvoke_mC5B46EB918C5ABCF6EB0A2733EBFB750E00378B7_gshared (SetClassValueAction_t84B2D7C930A02612CA0C81F628E16D7901AC8A4D * __this, RuntimeObject * ___container0, RuntimeObject * ___value1, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	void *__d_args[3] = {0};
	__d_args[0] = ___container0;
	__d_args[1] = ___value1;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);;
}
// System.Void Unity.Properties.ReflectedMemberProperty`2/SetClassValueAction<System.Object,System.Object>::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SetClassValueAction_EndInvoke_m0B98F67280DD9B72DE1EEE39BEF96CC713624BA2_gshared (SetClassValueAction_t84B2D7C930A02612CA0C81F628E16D7901AC8A4D * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
// System.Void Unity.Properties.ReflectedMemberProperty`2/SetClassValueAction<System.Object,System.Single>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SetClassValueAction__ctor_m35F26D0C31C7EE4CC9B79269AD6E31E47A2CEFAB_gshared (SetClassValueAction_tBF56D6D514A4C9B2E2A3B6BE3DF4700A1E46CD0D * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void Unity.Properties.ReflectedMemberProperty`2/SetClassValueAction<System.Object,System.Single>::Invoke(TContainer,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SetClassValueAction_Invoke_mC4DA8574D6C26AB8400D11E3808F84DB8FF0D469_gshared (SetClassValueAction_tBF56D6D514A4C9B2E2A3B6BE3DF4700A1E46CD0D * __this, RuntimeObject * ___container0, float ___value1, const RuntimeMethod* method)
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
			if (___parameterCount == 2)
			{
				// open
				typedef void (*FunctionPointerType) (RuntimeObject *, float, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___container0, ___value1, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, RuntimeObject *, float, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___container0, ___value1, targetMethod);
			}
		}
		else if (___parameterCount != 2)
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< float >::Invoke(targetMethod, ___container0, ___value1);
					else
						GenericVirtActionInvoker1< float >::Invoke(targetMethod, ___container0, ___value1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< float >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___container0, ___value1);
					else
						VirtActionInvoker1< float >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___container0, ___value1);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (RuntimeObject *, float, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___container0, ___value1, targetMethod);
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
						GenericInterfaceActionInvoker2< RuntimeObject *, float >::Invoke(targetMethod, targetThis, ___container0, ___value1);
					else
						GenericVirtActionInvoker2< RuntimeObject *, float >::Invoke(targetMethod, targetThis, ___container0, ___value1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker2< RuntimeObject *, float >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___container0, ___value1);
					else
						VirtActionInvoker2< RuntimeObject *, float >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___container0, ___value1);
				}
			}
			else
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (RuntimeObject *, float, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___container0, ___value1, targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, RuntimeObject *, float, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___container0, ___value1, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult Unity.Properties.ReflectedMemberProperty`2/SetClassValueAction<System.Object,System.Single>::BeginInvoke(TContainer,TValue,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SetClassValueAction_BeginInvoke_mD395DC606A081867F40FDF512134BBB571751289_gshared (SetClassValueAction_tBF56D6D514A4C9B2E2A3B6BE3DF4700A1E46CD0D * __this, RuntimeObject * ___container0, float ___value1, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = ___container0;
	__d_args[1] = Box(Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var, &___value1);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);;
}
// System.Void Unity.Properties.ReflectedMemberProperty`2/SetClassValueAction<System.Object,System.Single>::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SetClassValueAction_EndInvoke_m87984C36251D66A6144AD5BA9FB9314381635B26_gshared (SetClassValueAction_tBF56D6D514A4C9B2E2A3B6BE3DF4700A1E46CD0D * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
// System.Void Unity.Properties.ReflectedMemberProperty`2/SetClassValueAction<System.Object,Unity.RuntimeSceneSerialization.Internal.UnityObjectReference>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SetClassValueAction__ctor_m7A273848F1E2EF8E4C9431B7CBAA74991226A36D_gshared (SetClassValueAction_tAA1B42C011F188EF4156FFE4D03B556AC5A5E927 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void Unity.Properties.ReflectedMemberProperty`2/SetClassValueAction<System.Object,Unity.RuntimeSceneSerialization.Internal.UnityObjectReference>::Invoke(TContainer,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SetClassValueAction_Invoke_mAB3A29A129B5C1A251C8C3623EAF093DF78DEB3D_gshared (SetClassValueAction_tAA1B42C011F188EF4156FFE4D03B556AC5A5E927 * __this, RuntimeObject * ___container0, UnityObjectReference_t2A935115C47347CFB25E64F78409335605D6B054  ___value1, const RuntimeMethod* method)
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
			if (___parameterCount == 2)
			{
				// open
				typedef void (*FunctionPointerType) (RuntimeObject *, UnityObjectReference_t2A935115C47347CFB25E64F78409335605D6B054 , const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___container0, ___value1, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, RuntimeObject *, UnityObjectReference_t2A935115C47347CFB25E64F78409335605D6B054 , const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___container0, ___value1, targetMethod);
			}
		}
		else if (___parameterCount != 2)
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< UnityObjectReference_t2A935115C47347CFB25E64F78409335605D6B054  >::Invoke(targetMethod, ___container0, ___value1);
					else
						GenericVirtActionInvoker1< UnityObjectReference_t2A935115C47347CFB25E64F78409335605D6B054  >::Invoke(targetMethod, ___container0, ___value1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< UnityObjectReference_t2A935115C47347CFB25E64F78409335605D6B054  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___container0, ___value1);
					else
						VirtActionInvoker1< UnityObjectReference_t2A935115C47347CFB25E64F78409335605D6B054  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___container0, ___value1);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (RuntimeObject *, UnityObjectReference_t2A935115C47347CFB25E64F78409335605D6B054 , const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___container0, ___value1, targetMethod);
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
						GenericInterfaceActionInvoker2< RuntimeObject *, UnityObjectReference_t2A935115C47347CFB25E64F78409335605D6B054  >::Invoke(targetMethod, targetThis, ___container0, ___value1);
					else
						GenericVirtActionInvoker2< RuntimeObject *, UnityObjectReference_t2A935115C47347CFB25E64F78409335605D6B054  >::Invoke(targetMethod, targetThis, ___container0, ___value1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker2< RuntimeObject *, UnityObjectReference_t2A935115C47347CFB25E64F78409335605D6B054  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___container0, ___value1);
					else
						VirtActionInvoker2< RuntimeObject *, UnityObjectReference_t2A935115C47347CFB25E64F78409335605D6B054  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___container0, ___value1);
				}
			}
			else
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (RuntimeObject *, UnityObjectReference_t2A935115C47347CFB25E64F78409335605D6B054 , const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___container0, ___value1, targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, RuntimeObject *, UnityObjectReference_t2A935115C47347CFB25E64F78409335605D6B054 , const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___container0, ___value1, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult Unity.Properties.ReflectedMemberProperty`2/SetClassValueAction<System.Object,Unity.RuntimeSceneSerialization.Internal.UnityObjectReference>::BeginInvoke(TContainer,TValue,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SetClassValueAction_BeginInvoke_mEEF4B26E73CC22E7D9D8530F538C438424F43111_gshared (SetClassValueAction_tAA1B42C011F188EF4156FFE4D03B556AC5A5E927 * __this, RuntimeObject * ___container0, UnityObjectReference_t2A935115C47347CFB25E64F78409335605D6B054  ___value1, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityObjectReference_t2A935115C47347CFB25E64F78409335605D6B054_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = ___container0;
	__d_args[1] = Box(UnityObjectReference_t2A935115C47347CFB25E64F78409335605D6B054_il2cpp_TypeInfo_var, &___value1);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);;
}
// System.Void Unity.Properties.ReflectedMemberProperty`2/SetClassValueAction<System.Object,Unity.RuntimeSceneSerialization.Internal.UnityObjectReference>::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SetClassValueAction_EndInvoke_mD48F822E033559B31839FE81AF4B4142AE6C9840_gshared (SetClassValueAction_tAA1B42C011F188EF4156FFE4D03B556AC5A5E927 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
// System.String Unity.Properties.Internal.SetElementProperty`2<System.Object,System.Object>::get_Name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SetElementProperty_2_get_Name_m8753A85DCB046F586E985545B6339CF1BB951A94_gshared (SetElementProperty_2_t2173EE7F3A6395A30AD2FBAFF46AD3E6EB6DB2EC * __this, const RuntimeMethod* method)
{
	{
		// public override string Name => m_Value.ToString();
		RuntimeObject ** L_0 = (RuntimeObject **)__this->get_address_of_m_Value_1();
		NullCheck((RuntimeObject *)(*L_0));
		String_t* L_1;
		L_1 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject *)(*L_0));
		return (String_t*)L_1;
	}
}
// System.Boolean Unity.Properties.Internal.SetElementProperty`2<System.Object,System.Object>::get_IsReadOnly()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SetElementProperty_2_get_IsReadOnly_m2D6B97713536E284ADF75D78516EACFCA034B183_gshared (SetElementProperty_2_t2173EE7F3A6395A30AD2FBAFF46AD3E6EB6DB2EC * __this, const RuntimeMethod* method)
{
	{
		// public override bool IsReadOnly => true;
		return (bool)1;
	}
}
// TValue Unity.Properties.Internal.SetElementProperty`2<System.Object,System.Object>::GetValue(TSet&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * SetElementProperty_2_GetValue_m5902BDE504C00D441DAF40F908B6D047ECD55F65_gshared (SetElementProperty_2_t2173EE7F3A6395A30AD2FBAFF46AD3E6EB6DB2EC * __this, RuntimeObject ** ___container0, const RuntimeMethod* method)
{
	{
		// public override TValue GetValue(ref TSet container) => m_Value;
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_m_Value_1();
		return (RuntimeObject *)L_0;
	}
}
// System.Void Unity.Properties.Internal.SetElementProperty`2<System.Object,System.Object>::SetValue(TSet&,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SetElementProperty_2_SetValue_m8EA02FC8B86B4667B413FC29F43EF0295A0C97F7_gshared (SetElementProperty_2_t2173EE7F3A6395A30AD2FBAFF46AD3E6EB6DB2EC * __this, RuntimeObject ** ___container0, RuntimeObject * ___value1, const RuntimeMethod* method)
{
	{
		// public override void SetValue(ref TSet container, TValue value) => throw new InvalidOperationException("Property is ReadOnly.");
		InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB * L_0 = (InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mC012CE552988309733C896F3FEA8249171E4402E(L_0, (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral67A259F304E2092F70DB1D23B44E7E844A4A8365)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SetElementProperty_2_SetValue_m8EA02FC8B86B4667B413FC29F43EF0295A0C97F7_RuntimeMethod_var)));
	}
}
// System.Void Unity.Properties.Internal.SetElementProperty`2<System.Object,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SetElementProperty_2__ctor_mEA3F553063E715D66D5D42F8865CB6AFB412D660_gshared (SetElementProperty_2_t2173EE7F3A6395A30AD2FBAFF46AD3E6EB6DB2EC * __this, const RuntimeMethod* method)
{
	{
		NullCheck((Property_2_tD7C7F959BE068E5DB2625A4229EEFE1C3F3413FE *)__this);
		((  void (*) (Property_2_tD7C7F959BE068E5DB2625A4229EEFE1C3F3413FE *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1)->methodPointer)((Property_2_tD7C7F959BE068E5DB2625A4229EEFE1C3F3413FE *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1));
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
// System.Collections.Generic.IEnumerable`1<Unity.Properties.IProperty`1<TSet>> Unity.Properties.Internal.SetPropertyBag`2<System.Object,System.Object>::GetProperties(TSet&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SetPropertyBag_2_GetProperties_m3B65F8A343E3BC3AEBE9D2B249956CA05FE3B70F_gshared (SetPropertyBag_2_tA096D93509DB8BE67130C22A47AFDD1F1362914E * __this, RuntimeObject ** ___container0, const RuntimeMethod* method)
{
	{
		// return GetPropertiesImpl(container);
		RuntimeObject ** L_0 = ___container0;
		RuntimeObject * L_1 = (*(RuntimeObject **)L_0);
		NullCheck((SetPropertyBag_2_tA096D93509DB8BE67130C22A47AFDD1F1362914E *)__this);
		RuntimeObject* L_2;
		L_2 = ((  RuntimeObject* (*) (SetPropertyBag_2_tA096D93509DB8BE67130C22A47AFDD1F1362914E *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((SetPropertyBag_2_tA096D93509DB8BE67130C22A47AFDD1F1362914E *)__this, (RuntimeObject *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		return (RuntimeObject*)L_2;
	}
}
// System.Collections.Generic.IEnumerable`1<Unity.Properties.IProperty`1<TSet>> Unity.Properties.Internal.SetPropertyBag`2<System.Object,System.Object>::GetPropertiesImpl(TSet)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SetPropertyBag_2_GetPropertiesImpl_m656C409F1EE09B2A0C93D285BE4BFC7BA5E03A70_gshared (SetPropertyBag_2_tA096D93509DB8BE67130C22A47AFDD1F1362914E * __this, RuntimeObject * ___container0, const RuntimeMethod* method)
{
	{
		U3CGetPropertiesImplU3Ed__2_tDADACA76847A612A1263E89B5CB6D8393521FF75 * L_0 = (U3CGetPropertiesImplU3Ed__2_tDADACA76847A612A1263E89B5CB6D8393521FF75 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 1));
		((  void (*) (U3CGetPropertiesImplU3Ed__2_tDADACA76847A612A1263E89B5CB6D8393521FF75 *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2)->methodPointer)(L_0, (int32_t)((int32_t)-2), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2));
		U3CGetPropertiesImplU3Ed__2_tDADACA76847A612A1263E89B5CB6D8393521FF75 * L_1 = (U3CGetPropertiesImplU3Ed__2_tDADACA76847A612A1263E89B5CB6D8393521FF75 *)L_0;
		NullCheck(L_1);
		L_1->set_U3CU3E4__this_5(__this);
		U3CGetPropertiesImplU3Ed__2_tDADACA76847A612A1263E89B5CB6D8393521FF75 * L_2 = (U3CGetPropertiesImplU3Ed__2_tDADACA76847A612A1263E89B5CB6D8393521FF75 *)L_1;
		RuntimeObject * L_3 = ___container0;
		NullCheck(L_2);
		L_2->set_U3CU3E3__container_4(L_3);
		return (RuntimeObject*)L_2;
	}
}
// System.Void Unity.Properties.Internal.SetPropertyBag`2<System.Object,System.Object>::Unity.Properties.Internal.ICollectionPropertyBagAccept<TSet>.Accept(Unity.Properties.Internal.ICollectionPropertyBagVisitor,TSet&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SetPropertyBag_2_Unity_Properties_Internal_ICollectionPropertyBagAcceptU3CTSetU3E_Accept_mE92A34DAEB4E1003C3208916ECE409681B00C15E_gshared (SetPropertyBag_2_tA096D93509DB8BE67130C22A47AFDD1F1362914E * __this, RuntimeObject* ___visitor0, RuntimeObject ** ___container1, const RuntimeMethod* method)
{
	{
		// visitor.Visit(this, ref container);
		RuntimeObject* L_0 = ___visitor0;
		RuntimeObject ** L_1 = ___container1;
		NullCheck((RuntimeObject*)L_0);
		GenericInterfaceActionInvoker2< RuntimeObject*, RuntimeObject ** >::Invoke(IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3), (RuntimeObject*)L_0, (RuntimeObject*)__this, (RuntimeObject **)(RuntimeObject **)L_1);
		// }
		return;
	}
}
// System.Void Unity.Properties.Internal.SetPropertyBag`2<System.Object,System.Object>::Unity.Properties.Internal.ISetPropertyBagAccept<TSet>.Accept(Unity.Properties.Internal.ISetPropertyBagVisitor,TSet&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SetPropertyBag_2_Unity_Properties_Internal_ISetPropertyBagAcceptU3CTSetU3E_Accept_mE74EA3E71A6DCC367DF8494C5653594F036DC55F_gshared (SetPropertyBag_2_tA096D93509DB8BE67130C22A47AFDD1F1362914E * __this, RuntimeObject* ___visitor0, RuntimeObject ** ___container1, const RuntimeMethod* method)
{
	{
		// visitor.Visit(this, ref container);
		RuntimeObject* L_0 = ___visitor0;
		RuntimeObject ** L_1 = ___container1;
		NullCheck((RuntimeObject*)L_0);
		GenericInterfaceActionInvoker2< RuntimeObject*, RuntimeObject ** >::Invoke(IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4), (RuntimeObject*)L_0, (RuntimeObject*)__this, (RuntimeObject **)(RuntimeObject **)L_1);
		// }
		return;
	}
}
// System.Boolean Unity.Properties.Internal.SetPropertyBag`2<System.Object,System.Object>::TryGetProperty(TSet&,System.Object,Unity.Properties.IProperty`1<TSet>&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SetPropertyBag_2_TryGetProperty_mFD7ACC0353A64B83FE3DBBBADDFC136C4A06DCB8_gshared (SetPropertyBag_2_tA096D93509DB8BE67130C22A47AFDD1F1362914E * __this, RuntimeObject ** ___container0, RuntimeObject * ___key1, RuntimeObject** ___property2, const RuntimeMethod* method)
{
	{
		// if (container.Contains((TElement) key))
		RuntimeObject ** L_0 = ___container0;
		RuntimeObject * L_1 = ___key1;
		NullCheck((RuntimeObject*)(*L_0));
		bool L_2;
		L_2 = InterfaceFuncInvoker1< bool, RuntimeObject * >::Invoke(4 /* System.Boolean System.Collections.Generic.ICollection`1<System.Object>::Contains(!0) */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 7), (RuntimeObject*)(*L_0), (RuntimeObject *)((RuntimeObject *)Castclass((RuntimeObject*)L_1, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 5))));
		if (!L_2)
		{
			goto IL_0029;
		}
	}
	{
		// property = new SetElementProperty<TSet, TElement> {m_Value = (TElement) key};
		RuntimeObject** L_3 = ___property2;
		SetElementProperty_2_t2173EE7F3A6395A30AD2FBAFF46AD3E6EB6DB2EC * L_4 = (SetElementProperty_2_t2173EE7F3A6395A30AD2FBAFF46AD3E6EB6DB2EC *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 9));
		((  void (*) (SetElementProperty_2_t2173EE7F3A6395A30AD2FBAFF46AD3E6EB6DB2EC *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 10)->methodPointer)(L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 10));
		SetElementProperty_2_t2173EE7F3A6395A30AD2FBAFF46AD3E6EB6DB2EC * L_5 = (SetElementProperty_2_t2173EE7F3A6395A30AD2FBAFF46AD3E6EB6DB2EC *)L_4;
		RuntimeObject * L_6 = ___key1;
		NullCheck(L_5);
		L_5->set_m_Value_1(((RuntimeObject *)Castclass((RuntimeObject*)L_6, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 5))));
		*((RuntimeObject **)L_3) = (RuntimeObject *)L_5;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject **)L_3, (void*)(RuntimeObject *)L_5);
		// return true;
		return (bool)1;
	}

IL_0029:
	{
		// property = default;
		RuntimeObject** L_7 = ___property2;
		*((RuntimeObject **)L_7) = (RuntimeObject *)NULL;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject **)L_7, (void*)(RuntimeObject *)NULL);
		// return false;
		return (bool)0;
	}
}
// System.Void Unity.Properties.Internal.SetPropertyBag`2<System.Object,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SetPropertyBag_2__ctor_mAD246CF6D1987724DB319E091238E941CA1EED24_gshared (SetPropertyBag_2_tA096D93509DB8BE67130C22A47AFDD1F1362914E * __this, const RuntimeMethod* method)
{
	{
		// readonly SetElementProperty<TSet, TElement> m_Property = new SetElementProperty<TSet, TElement>();
		SetElementProperty_2_t2173EE7F3A6395A30AD2FBAFF46AD3E6EB6DB2EC * L_0 = (SetElementProperty_2_t2173EE7F3A6395A30AD2FBAFF46AD3E6EB6DB2EC *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 9));
		((  void (*) (SetElementProperty_2_t2173EE7F3A6395A30AD2FBAFF46AD3E6EB6DB2EC *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 10)->methodPointer)(L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 10));
		__this->set_m_Property_0(L_0);
		NullCheck((PropertyBag_1_tD150D74797315C72637E50ED3C60C5EB62AFC491 *)__this);
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 12));
		((  void (*) (PropertyBag_1_tD150D74797315C72637E50ED3C60C5EB62AFC491 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 11)->methodPointer)((PropertyBag_1_tD150D74797315C72637E50ED3C60C5EB62AFC491 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 11));
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
// System.Void Unity.Properties.AOT/SetPropertyGenerator`3<System.Object,System.Object,System.Object>::Generate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SetPropertyGenerator_3_Generate_mD5AE7948B55AC6B9364BE2EB2C032D88CC6A2D44_gshared (const RuntimeMethod* method)
{
	RuntimeObject * V_0 = NULL;
	RuntimeObject * V_1 = NULL;
	RuntimeObject * V_2 = NULL;
	RuntimeObject * V_3 = NULL;
	{
		// PropertyGenerator<TContainer, TSet>.Preserve();
		((  void (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 0)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 0));
		// PropertyVisitor.AOT.RegisterCollection<TContainer, TSet, TValue>();
		il2cpp_codegen_initobj((&V_2), sizeof(RuntimeObject *));
		RuntimeObject * L_0 = V_2;
		il2cpp_codegen_initobj((&V_3), sizeof(RuntimeObject *));
		RuntimeObject * L_1 = V_3;
		((  void (*) (Property_2_tD7C7F959BE068E5DB2625A4229EEFE1C3F3413FE *, RuntimeObject *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 2)->methodPointer)((Property_2_tD7C7F959BE068E5DB2625A4229EEFE1C3F3413FE *)NULL, (RuntimeObject *)L_0, (RuntimeObject *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 2));
		// PropertyVisitor.AOT.RegisterSet<TContainer, TSet, TValue>();
		il2cpp_codegen_initobj((&V_2), sizeof(RuntimeObject *));
		RuntimeObject * L_2 = V_2;
		il2cpp_codegen_initobj((&V_3), sizeof(RuntimeObject *));
		RuntimeObject * L_3 = V_3;
		((  void (*) (Property_2_tD7C7F959BE068E5DB2625A4229EEFE1C3F3413FE *, RuntimeObject *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 3)->methodPointer)((Property_2_tD7C7F959BE068E5DB2625A4229EEFE1C3F3413FE *)NULL, (RuntimeObject *)L_2, (RuntimeObject *)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		// var container = default(TContainer);
		il2cpp_codegen_initobj((&V_0), sizeof(RuntimeObject *));
		// var list = default(TSet);
		il2cpp_codegen_initobj((&V_1), sizeof(RuntimeObject *));
		// default(ISetPropertyAccept<TSet>).Accept(default, default, ref container, ref list);
		NullCheck((RuntimeObject*)NULL);
		GenericInterfaceActionInvoker4< RuntimeObject*, Property_2_tD7C7F959BE068E5DB2625A4229EEFE1C3F3413FE *, RuntimeObject **, RuntimeObject ** >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 4), (RuntimeObject*)NULL, (RuntimeObject*)NULL, (Property_2_tD7C7F959BE068E5DB2625A4229EEFE1C3F3413FE *)NULL, (RuntimeObject **)(RuntimeObject **)(&V_0), (RuntimeObject **)(RuntimeObject **)(&V_1));
		// default(ISetPropertyVisitor).Visit<TContainer, TSet, TValue>(default, ref container, ref list);
		NullCheck((RuntimeObject*)NULL);
		GenericInterfaceActionInvoker3< Property_2_tD7C7F959BE068E5DB2625A4229EEFE1C3F3413FE *, RuntimeObject **, RuntimeObject ** >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 5), (RuntimeObject*)NULL, (Property_2_tD7C7F959BE068E5DB2625A4229EEFE1C3F3413FE *)NULL, (RuntimeObject **)(RuntimeObject **)(&V_0), (RuntimeObject **)(RuntimeObject **)(&V_1));
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
// System.Void Unity.RuntimeSceneSerialization.Internal.Prefabs.RuntimePrefabPropertyOverride`1/SetPropertyMethodFactory<System.Boolean>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SetPropertyMethodFactory__ctor_mA8C72B3A7052BEC63C795F8BAA99707BDD80C874_gshared (SetPropertyMethodFactory_tE818E41EA11176698A32881E90BD13517E4515ED * __this, const RuntimeMethod* method)
{
	{
		NullCheck((RuntimeObject *)__this);
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405((RuntimeObject *)__this, /*hidden argument*/NULL);
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
// System.Void Unity.RuntimeSceneSerialization.Internal.Prefabs.RuntimePrefabPropertyOverride`1/SetPropertyMethodFactory<System.Char>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SetPropertyMethodFactory__ctor_m04B8DD9CE7CD9C62838C1F1AA62C55F3A2EBDD5F_gshared (SetPropertyMethodFactory_t4FB896DC1FC3CC5EA3B5DB83361872E68101D4D6 * __this, const RuntimeMethod* method)
{
	{
		NullCheck((RuntimeObject *)__this);
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405((RuntimeObject *)__this, /*hidden argument*/NULL);
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
// System.Void Unity.RuntimeSceneSerialization.Internal.Prefabs.RuntimePrefabPropertyOverride`1/SetPropertyMethodFactory<System.Int32>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SetPropertyMethodFactory__ctor_mFEA888CED3F1876A4B23B20E02930A0D208A019D_gshared (SetPropertyMethodFactory_t6E81F0BD7791428D4C43BFFF83239F2D01A666DE * __this, const RuntimeMethod* method)
{
	{
		NullCheck((RuntimeObject *)__this);
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405((RuntimeObject *)__this, /*hidden argument*/NULL);
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
// System.Void Unity.RuntimeSceneSerialization.Internal.Prefabs.RuntimePrefabPropertyOverride`1/SetPropertyMethodFactory<System.Int64>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SetPropertyMethodFactory__ctor_m9CAD4398DCD164AF293B9B0EF34557EBAFEB7EA5_gshared (SetPropertyMethodFactory_tF19BA07F0091FAB1F1C629792665E3CDC4FA5986 * __this, const RuntimeMethod* method)
{
	{
		NullCheck((RuntimeObject *)__this);
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405((RuntimeObject *)__this, /*hidden argument*/NULL);
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
// System.Void Unity.RuntimeSceneSerialization.Internal.Prefabs.RuntimePrefabPropertyOverride`1/SetPropertyMethodFactory<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SetPropertyMethodFactory__ctor_m3580E32350524CA50D170442512089C4A8A97434_gshared (SetPropertyMethodFactory_t076B85733DE0BC9683C25A48172EF712FC67B12F * __this, const RuntimeMethod* method)
{
	{
		NullCheck((RuntimeObject *)__this);
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405((RuntimeObject *)__this, /*hidden argument*/NULL);
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
// System.Void Unity.RuntimeSceneSerialization.Internal.Prefabs.RuntimePrefabPropertyOverride`1/SetPropertyMethodFactory<System.Single>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SetPropertyMethodFactory__ctor_mC67D9DF4EFD13EEAA8B8279B4D606DD32C219D85_gshared (SetPropertyMethodFactory_t76CC016B18A838FAB61F2BAF991893E89B4F4A61 * __this, const RuntimeMethod* method)
{
	{
		NullCheck((RuntimeObject *)__this);
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405((RuntimeObject *)__this, /*hidden argument*/NULL);
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
// System.Void Unity.RuntimeSceneSerialization.Internal.Prefabs.RuntimePrefabPropertyOverride`1/SetPropertyMethodFactory<Unity.RuntimeSceneSerialization.Internal.UnityObjectReference>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SetPropertyMethodFactory__ctor_m9ADDE07B644160434BAFC613C2E5719180AEE4E8_gshared (SetPropertyMethodFactory_tD563D2EDD8090BD7D52A68CC483A44C9177D5078 * __this, const RuntimeMethod* method)
{
	{
		NullCheck((RuntimeObject *)__this);
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405((RuntimeObject *)__this, /*hidden argument*/NULL);
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
// System.Void Unity.RuntimeSceneSerialization.Internal.Prefabs.RuntimePrefabPropertyOverride`1/SetPropertyVisitor<System.Boolean>::.ctor(Unity.RuntimeSceneSerialization.Internal.Prefabs.RuntimePrefabPropertyOverride`1<TOverrideValue>,System.String,Unity.RuntimeSceneSerialization.SerializationMetadata)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SetPropertyVisitor__ctor_m150C7DC8C3AF47E8203CDE75288D488766B821F4_gshared (SetPropertyVisitor_tAB9E6D250EC52B9CBDF773ECC5308C04AC3C1185 * __this, RuntimePrefabPropertyOverride_1_tA69A222C9CED679F3E74FC5DC80C7EA6B851D065 * ___prefabOverride0, String_t* ___propertyPath1, SerializationMetadata_tCB3C700413EA4D79DB35199627C7DD6F8EF1ECE2 * ___metadata2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SerializationMetadata metadata) : base(metadata)
		SerializationMetadata_tCB3C700413EA4D79DB35199627C7DD6F8EF1ECE2 * L_0 = ___metadata2;
		NullCheck((UnityObjectPropertyVisitor_t6D216B27CEC2B426B88BCA62A02F8A7D3BC4F14C *)__this);
		UnityObjectPropertyVisitor__ctor_mA6738B2407BE150DC4C6E74204B0BAD7B1E493AE((UnityObjectPropertyVisitor_t6D216B27CEC2B426B88BCA62A02F8A7D3BC4F14C *)__this, (SerializationMetadata_tCB3C700413EA4D79DB35199627C7DD6F8EF1ECE2 *)L_0, /*hidden argument*/NULL);
		// m_PrefabOverride = prefabOverride;
		RuntimePrefabPropertyOverride_1_tA69A222C9CED679F3E74FC5DC80C7EA6B851D065 * L_1 = ___prefabOverride0;
		__this->set_m_PrefabOverride_2(L_1);
		// m_PropertyPath = propertyPath;
		String_t* L_2 = ___propertyPath1;
		__this->set_m_PropertyPath_3(L_2);
		// m_FirstProperty = propertyPath.Split('.')[0];
		String_t* L_3 = ___propertyPath1;
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_4 = (CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*)(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*)SZArrayNew(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34_il2cpp_TypeInfo_var, (uint32_t)1);
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_5 = (CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*)L_4;
		NullCheck(L_5);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(0), (Il2CppChar)((int32_t)46));
		NullCheck((String_t*)L_3);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_6;
		L_6 = String_Split_m2C74DC2B85B322998094BEDE787C378822E1F28B((String_t*)L_3, (CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*)L_5, /*hidden argument*/NULL);
		NullCheck(L_6);
		int32_t L_7 = 0;
		String_t* L_8 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		__this->set_m_FirstProperty_4(L_8);
		// }
		return;
	}
}
// System.Boolean Unity.RuntimeSceneSerialization.Internal.Prefabs.RuntimePrefabPropertyOverride`1/SetPropertyVisitor<System.Boolean>::IsFirstProperty(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SetPropertyVisitor_IsFirstProperty_m4E2C74D97403A0867D2F5E60C5D5756DCDD87C0C_gshared (SetPropertyVisitor_tAB9E6D250EC52B9CBDF773ECC5308C04AC3C1185 * __this, String_t* ___propertyName0, const RuntimeMethod* method)
{
	{
		// return m_FirstProperty == propertyName || m_FirstProperty == GetAlternateName(propertyName);
		String_t* L_0 = (String_t*)__this->get_m_FirstProperty_4();
		String_t* L_1 = ___propertyName0;
		bool L_2;
		L_2 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB((String_t*)L_0, (String_t*)L_1, /*hidden argument*/NULL);
		if (L_2)
		{
			goto IL_0020;
		}
	}
	{
		String_t* L_3 = (String_t*)__this->get_m_FirstProperty_4();
		String_t* L_4 = ___propertyName0;
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 4));
		String_t* L_5;
		L_5 = ((  String_t* (*) (String_t*, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5)->methodPointer)((String_t*)L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5));
		bool L_6;
		L_6 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB((String_t*)L_3, (String_t*)L_5, /*hidden argument*/NULL);
		return (bool)L_6;
	}

IL_0020:
	{
		return (bool)1;
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
// System.Void Unity.RuntimeSceneSerialization.Internal.Prefabs.RuntimePrefabPropertyOverride`1/SetPropertyVisitor<System.Char>::.ctor(Unity.RuntimeSceneSerialization.Internal.Prefabs.RuntimePrefabPropertyOverride`1<TOverrideValue>,System.String,Unity.RuntimeSceneSerialization.SerializationMetadata)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SetPropertyVisitor__ctor_m1A63BA45E115AE799436856206A0F2E2E94E8010_gshared (SetPropertyVisitor_t8FC8F94F243A9EEA94EB23E8C014D069AD240E71 * __this, RuntimePrefabPropertyOverride_1_tCE24BDA19DB48FA9B5C7F2713D2FFBD20FC1D58A * ___prefabOverride0, String_t* ___propertyPath1, SerializationMetadata_tCB3C700413EA4D79DB35199627C7DD6F8EF1ECE2 * ___metadata2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SerializationMetadata metadata) : base(metadata)
		SerializationMetadata_tCB3C700413EA4D79DB35199627C7DD6F8EF1ECE2 * L_0 = ___metadata2;
		NullCheck((UnityObjectPropertyVisitor_t6D216B27CEC2B426B88BCA62A02F8A7D3BC4F14C *)__this);
		UnityObjectPropertyVisitor__ctor_mA6738B2407BE150DC4C6E74204B0BAD7B1E493AE((UnityObjectPropertyVisitor_t6D216B27CEC2B426B88BCA62A02F8A7D3BC4F14C *)__this, (SerializationMetadata_tCB3C700413EA4D79DB35199627C7DD6F8EF1ECE2 *)L_0, /*hidden argument*/NULL);
		// m_PrefabOverride = prefabOverride;
		RuntimePrefabPropertyOverride_1_tCE24BDA19DB48FA9B5C7F2713D2FFBD20FC1D58A * L_1 = ___prefabOverride0;
		__this->set_m_PrefabOverride_2(L_1);
		// m_PropertyPath = propertyPath;
		String_t* L_2 = ___propertyPath1;
		__this->set_m_PropertyPath_3(L_2);
		// m_FirstProperty = propertyPath.Split('.')[0];
		String_t* L_3 = ___propertyPath1;
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_4 = (CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*)(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*)SZArrayNew(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34_il2cpp_TypeInfo_var, (uint32_t)1);
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_5 = (CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*)L_4;
		NullCheck(L_5);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(0), (Il2CppChar)((int32_t)46));
		NullCheck((String_t*)L_3);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_6;
		L_6 = String_Split_m2C74DC2B85B322998094BEDE787C378822E1F28B((String_t*)L_3, (CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*)L_5, /*hidden argument*/NULL);
		NullCheck(L_6);
		int32_t L_7 = 0;
		String_t* L_8 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		__this->set_m_FirstProperty_4(L_8);
		// }
		return;
	}
}
// System.Boolean Unity.RuntimeSceneSerialization.Internal.Prefabs.RuntimePrefabPropertyOverride`1/SetPropertyVisitor<System.Char>::IsFirstProperty(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SetPropertyVisitor_IsFirstProperty_m850F6C9D9550901CECB6DF3A3B786B9DD2993CD2_gshared (SetPropertyVisitor_t8FC8F94F243A9EEA94EB23E8C014D069AD240E71 * __this, String_t* ___propertyName0, const RuntimeMethod* method)
{
	{
		// return m_FirstProperty == propertyName || m_FirstProperty == GetAlternateName(propertyName);
		String_t* L_0 = (String_t*)__this->get_m_FirstProperty_4();
		String_t* L_1 = ___propertyName0;
		bool L_2;
		L_2 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB((String_t*)L_0, (String_t*)L_1, /*hidden argument*/NULL);
		if (L_2)
		{
			goto IL_0020;
		}
	}
	{
		String_t* L_3 = (String_t*)__this->get_m_FirstProperty_4();
		String_t* L_4 = ___propertyName0;
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 4));
		String_t* L_5;
		L_5 = ((  String_t* (*) (String_t*, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5)->methodPointer)((String_t*)L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5));
		bool L_6;
		L_6 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB((String_t*)L_3, (String_t*)L_5, /*hidden argument*/NULL);
		return (bool)L_6;
	}

IL_0020:
	{
		return (bool)1;
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
// System.Void Unity.RuntimeSceneSerialization.Internal.Prefabs.RuntimePrefabPropertyOverride`1/SetPropertyVisitor<System.Int32>::.ctor(Unity.RuntimeSceneSerialization.Internal.Prefabs.RuntimePrefabPropertyOverride`1<TOverrideValue>,System.String,Unity.RuntimeSceneSerialization.SerializationMetadata)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SetPropertyVisitor__ctor_m2D07CFD2FB421BF0E98675C888CD489B30E5978F_gshared (SetPropertyVisitor_t028928ACA5F8620E27F1B6FABF4EDB53897AB14C * __this, RuntimePrefabPropertyOverride_1_tD95DCFBFF8375B970F83D1054F4E5979BE347115 * ___prefabOverride0, String_t* ___propertyPath1, SerializationMetadata_tCB3C700413EA4D79DB35199627C7DD6F8EF1ECE2 * ___metadata2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SerializationMetadata metadata) : base(metadata)
		SerializationMetadata_tCB3C700413EA4D79DB35199627C7DD6F8EF1ECE2 * L_0 = ___metadata2;
		NullCheck((UnityObjectPropertyVisitor_t6D216B27CEC2B426B88BCA62A02F8A7D3BC4F14C *)__this);
		UnityObjectPropertyVisitor__ctor_mA6738B2407BE150DC4C6E74204B0BAD7B1E493AE((UnityObjectPropertyVisitor_t6D216B27CEC2B426B88BCA62A02F8A7D3BC4F14C *)__this, (SerializationMetadata_tCB3C700413EA4D79DB35199627C7DD6F8EF1ECE2 *)L_0, /*hidden argument*/NULL);
		// m_PrefabOverride = prefabOverride;
		RuntimePrefabPropertyOverride_1_tD95DCFBFF8375B970F83D1054F4E5979BE347115 * L_1 = ___prefabOverride0;
		__this->set_m_PrefabOverride_2(L_1);
		// m_PropertyPath = propertyPath;
		String_t* L_2 = ___propertyPath1;
		__this->set_m_PropertyPath_3(L_2);
		// m_FirstProperty = propertyPath.Split('.')[0];
		String_t* L_3 = ___propertyPath1;
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_4 = (CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*)(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*)SZArrayNew(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34_il2cpp_TypeInfo_var, (uint32_t)1);
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_5 = (CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*)L_4;
		NullCheck(L_5);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(0), (Il2CppChar)((int32_t)46));
		NullCheck((String_t*)L_3);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_6;
		L_6 = String_Split_m2C74DC2B85B322998094BEDE787C378822E1F28B((String_t*)L_3, (CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*)L_5, /*hidden argument*/NULL);
		NullCheck(L_6);
		int32_t L_7 = 0;
		String_t* L_8 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		__this->set_m_FirstProperty_4(L_8);
		// }
		return;
	}
}
// System.Boolean Unity.RuntimeSceneSerialization.Internal.Prefabs.RuntimePrefabPropertyOverride`1/SetPropertyVisitor<System.Int32>::IsFirstProperty(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SetPropertyVisitor_IsFirstProperty_m8233C6325849E9E3B815D9743233040318702BBF_gshared (SetPropertyVisitor_t028928ACA5F8620E27F1B6FABF4EDB53897AB14C * __this, String_t* ___propertyName0, const RuntimeMethod* method)
{
	{
		// return m_FirstProperty == propertyName || m_FirstProperty == GetAlternateName(propertyName);
		String_t* L_0 = (String_t*)__this->get_m_FirstProperty_4();
		String_t* L_1 = ___propertyName0;
		bool L_2;
		L_2 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB((String_t*)L_0, (String_t*)L_1, /*hidden argument*/NULL);
		if (L_2)
		{
			goto IL_0020;
		}
	}
	{
		String_t* L_3 = (String_t*)__this->get_m_FirstProperty_4();
		String_t* L_4 = ___propertyName0;
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 4));
		String_t* L_5;
		L_5 = ((  String_t* (*) (String_t*, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5)->methodPointer)((String_t*)L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5));
		bool L_6;
		L_6 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB((String_t*)L_3, (String_t*)L_5, /*hidden argument*/NULL);
		return (bool)L_6;
	}

IL_0020:
	{
		return (bool)1;
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
// System.Void Unity.RuntimeSceneSerialization.Internal.Prefabs.RuntimePrefabPropertyOverride`1/SetPropertyVisitor<System.Int64>::.ctor(Unity.RuntimeSceneSerialization.Internal.Prefabs.RuntimePrefabPropertyOverride`1<TOverrideValue>,System.String,Unity.RuntimeSceneSerialization.SerializationMetadata)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SetPropertyVisitor__ctor_m6520CF6F7E007BBA1A551961C512A8A59D39BF72_gshared (SetPropertyVisitor_t702230AF892AA97222526E226A3E35A75D547AE7 * __this, RuntimePrefabPropertyOverride_1_t4EFDEC999C9FEA31A6FFA159A986BF456791192F * ___prefabOverride0, String_t* ___propertyPath1, SerializationMetadata_tCB3C700413EA4D79DB35199627C7DD6F8EF1ECE2 * ___metadata2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SerializationMetadata metadata) : base(metadata)
		SerializationMetadata_tCB3C700413EA4D79DB35199627C7DD6F8EF1ECE2 * L_0 = ___metadata2;
		NullCheck((UnityObjectPropertyVisitor_t6D216B27CEC2B426B88BCA62A02F8A7D3BC4F14C *)__this);
		UnityObjectPropertyVisitor__ctor_mA6738B2407BE150DC4C6E74204B0BAD7B1E493AE((UnityObjectPropertyVisitor_t6D216B27CEC2B426B88BCA62A02F8A7D3BC4F14C *)__this, (SerializationMetadata_tCB3C700413EA4D79DB35199627C7DD6F8EF1ECE2 *)L_0, /*hidden argument*/NULL);
		// m_PrefabOverride = prefabOverride;
		RuntimePrefabPropertyOverride_1_t4EFDEC999C9FEA31A6FFA159A986BF456791192F * L_1 = ___prefabOverride0;
		__this->set_m_PrefabOverride_2(L_1);
		// m_PropertyPath = propertyPath;
		String_t* L_2 = ___propertyPath1;
		__this->set_m_PropertyPath_3(L_2);
		// m_FirstProperty = propertyPath.Split('.')[0];
		String_t* L_3 = ___propertyPath1;
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_4 = (CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*)(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*)SZArrayNew(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34_il2cpp_TypeInfo_var, (uint32_t)1);
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_5 = (CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*)L_4;
		NullCheck(L_5);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(0), (Il2CppChar)((int32_t)46));
		NullCheck((String_t*)L_3);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_6;
		L_6 = String_Split_m2C74DC2B85B322998094BEDE787C378822E1F28B((String_t*)L_3, (CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*)L_5, /*hidden argument*/NULL);
		NullCheck(L_6);
		int32_t L_7 = 0;
		String_t* L_8 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		__this->set_m_FirstProperty_4(L_8);
		// }
		return;
	}
}
// System.Boolean Unity.RuntimeSceneSerialization.Internal.Prefabs.RuntimePrefabPropertyOverride`1/SetPropertyVisitor<System.Int64>::IsFirstProperty(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SetPropertyVisitor_IsFirstProperty_mA26FE6E65FB36FDA65D6698530C7710ACC3EF842_gshared (SetPropertyVisitor_t702230AF892AA97222526E226A3E35A75D547AE7 * __this, String_t* ___propertyName0, const RuntimeMethod* method)
{
	{
		// return m_FirstProperty == propertyName || m_FirstProperty == GetAlternateName(propertyName);
		String_t* L_0 = (String_t*)__this->get_m_FirstProperty_4();
		String_t* L_1 = ___propertyName0;
		bool L_2;
		L_2 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB((String_t*)L_0, (String_t*)L_1, /*hidden argument*/NULL);
		if (L_2)
		{
			goto IL_0020;
		}
	}
	{
		String_t* L_3 = (String_t*)__this->get_m_FirstProperty_4();
		String_t* L_4 = ___propertyName0;
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 4));
		String_t* L_5;
		L_5 = ((  String_t* (*) (String_t*, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5)->methodPointer)((String_t*)L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5));
		bool L_6;
		L_6 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB((String_t*)L_3, (String_t*)L_5, /*hidden argument*/NULL);
		return (bool)L_6;
	}

IL_0020:
	{
		return (bool)1;
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
// System.Void Unity.RuntimeSceneSerialization.Internal.Prefabs.RuntimePrefabPropertyOverride`1/SetPropertyVisitor<System.Object>::.ctor(Unity.RuntimeSceneSerialization.Internal.Prefabs.RuntimePrefabPropertyOverride`1<TOverrideValue>,System.String,Unity.RuntimeSceneSerialization.SerializationMetadata)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SetPropertyVisitor__ctor_m1A2ED0206D14E094ADDB3ED58AE1E1324AB92597_gshared (SetPropertyVisitor_t5FC9A74C2EE26B1D535533EEA5833752A875DC3E * __this, RuntimePrefabPropertyOverride_1_tCC9B679BFD6A61EA312443E4355AFA1F4FDD578E * ___prefabOverride0, String_t* ___propertyPath1, SerializationMetadata_tCB3C700413EA4D79DB35199627C7DD6F8EF1ECE2 * ___metadata2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SerializationMetadata metadata) : base(metadata)
		SerializationMetadata_tCB3C700413EA4D79DB35199627C7DD6F8EF1ECE2 * L_0 = ___metadata2;
		NullCheck((UnityObjectPropertyVisitor_t6D216B27CEC2B426B88BCA62A02F8A7D3BC4F14C *)__this);
		UnityObjectPropertyVisitor__ctor_mA6738B2407BE150DC4C6E74204B0BAD7B1E493AE((UnityObjectPropertyVisitor_t6D216B27CEC2B426B88BCA62A02F8A7D3BC4F14C *)__this, (SerializationMetadata_tCB3C700413EA4D79DB35199627C7DD6F8EF1ECE2 *)L_0, /*hidden argument*/NULL);
		// m_PrefabOverride = prefabOverride;
		RuntimePrefabPropertyOverride_1_tCC9B679BFD6A61EA312443E4355AFA1F4FDD578E * L_1 = ___prefabOverride0;
		__this->set_m_PrefabOverride_2(L_1);
		// m_PropertyPath = propertyPath;
		String_t* L_2 = ___propertyPath1;
		__this->set_m_PropertyPath_3(L_2);
		// m_FirstProperty = propertyPath.Split('.')[0];
		String_t* L_3 = ___propertyPath1;
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_4 = (CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*)(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*)SZArrayNew(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34_il2cpp_TypeInfo_var, (uint32_t)1);
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_5 = (CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*)L_4;
		NullCheck(L_5);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(0), (Il2CppChar)((int32_t)46));
		NullCheck((String_t*)L_3);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_6;
		L_6 = String_Split_m2C74DC2B85B322998094BEDE787C378822E1F28B((String_t*)L_3, (CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*)L_5, /*hidden argument*/NULL);
		NullCheck(L_6);
		int32_t L_7 = 0;
		String_t* L_8 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		__this->set_m_FirstProperty_4(L_8);
		// }
		return;
	}
}
// System.Boolean Unity.RuntimeSceneSerialization.Internal.Prefabs.RuntimePrefabPropertyOverride`1/SetPropertyVisitor<System.Object>::IsFirstProperty(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SetPropertyVisitor_IsFirstProperty_m1D9018C79289036E1C10A43B179965CD400BA7DA_gshared (SetPropertyVisitor_t5FC9A74C2EE26B1D535533EEA5833752A875DC3E * __this, String_t* ___propertyName0, const RuntimeMethod* method)
{
	{
		// return m_FirstProperty == propertyName || m_FirstProperty == GetAlternateName(propertyName);
		String_t* L_0 = (String_t*)__this->get_m_FirstProperty_4();
		String_t* L_1 = ___propertyName0;
		bool L_2;
		L_2 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB((String_t*)L_0, (String_t*)L_1, /*hidden argument*/NULL);
		if (L_2)
		{
			goto IL_0020;
		}
	}
	{
		String_t* L_3 = (String_t*)__this->get_m_FirstProperty_4();
		String_t* L_4 = ___propertyName0;
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 4));
		String_t* L_5;
		L_5 = ((  String_t* (*) (String_t*, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5)->methodPointer)((String_t*)L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5));
		bool L_6;
		L_6 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB((String_t*)L_3, (String_t*)L_5, /*hidden argument*/NULL);
		return (bool)L_6;
	}

IL_0020:
	{
		return (bool)1;
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
// System.Void Unity.RuntimeSceneSerialization.Internal.Prefabs.RuntimePrefabPropertyOverride`1/SetPropertyVisitor<System.Single>::.ctor(Unity.RuntimeSceneSerialization.Internal.Prefabs.RuntimePrefabPropertyOverride`1<TOverrideValue>,System.String,Unity.RuntimeSceneSerialization.SerializationMetadata)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SetPropertyVisitor__ctor_mF5B9FBFF4A3DE47CB0DC66A27A026EBD82C84856_gshared (SetPropertyVisitor_tE91D7EEBBF898F3EFE4FA9C7432C2E1C6C079B3D * __this, RuntimePrefabPropertyOverride_1_t323D06C42CFD95426179D64B465812F43BAEA303 * ___prefabOverride0, String_t* ___propertyPath1, SerializationMetadata_tCB3C700413EA4D79DB35199627C7DD6F8EF1ECE2 * ___metadata2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SerializationMetadata metadata) : base(metadata)
		SerializationMetadata_tCB3C700413EA4D79DB35199627C7DD6F8EF1ECE2 * L_0 = ___metadata2;
		NullCheck((UnityObjectPropertyVisitor_t6D216B27CEC2B426B88BCA62A02F8A7D3BC4F14C *)__this);
		UnityObjectPropertyVisitor__ctor_mA6738B2407BE150DC4C6E74204B0BAD7B1E493AE((UnityObjectPropertyVisitor_t6D216B27CEC2B426B88BCA62A02F8A7D3BC4F14C *)__this, (SerializationMetadata_tCB3C700413EA4D79DB35199627C7DD6F8EF1ECE2 *)L_0, /*hidden argument*/NULL);
		// m_PrefabOverride = prefabOverride;
		RuntimePrefabPropertyOverride_1_t323D06C42CFD95426179D64B465812F43BAEA303 * L_1 = ___prefabOverride0;
		__this->set_m_PrefabOverride_2(L_1);
		// m_PropertyPath = propertyPath;
		String_t* L_2 = ___propertyPath1;
		__this->set_m_PropertyPath_3(L_2);
		// m_FirstProperty = propertyPath.Split('.')[0];
		String_t* L_3 = ___propertyPath1;
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_4 = (CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*)(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*)SZArrayNew(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34_il2cpp_TypeInfo_var, (uint32_t)1);
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_5 = (CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*)L_4;
		NullCheck(L_5);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(0), (Il2CppChar)((int32_t)46));
		NullCheck((String_t*)L_3);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_6;
		L_6 = String_Split_m2C74DC2B85B322998094BEDE787C378822E1F28B((String_t*)L_3, (CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*)L_5, /*hidden argument*/NULL);
		NullCheck(L_6);
		int32_t L_7 = 0;
		String_t* L_8 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		__this->set_m_FirstProperty_4(L_8);
		// }
		return;
	}
}
// System.Boolean Unity.RuntimeSceneSerialization.Internal.Prefabs.RuntimePrefabPropertyOverride`1/SetPropertyVisitor<System.Single>::IsFirstProperty(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SetPropertyVisitor_IsFirstProperty_m9261411DBFB5D05572CE6CE51460009B7B19D3C1_gshared (SetPropertyVisitor_tE91D7EEBBF898F3EFE4FA9C7432C2E1C6C079B3D * __this, String_t* ___propertyName0, const RuntimeMethod* method)
{
	{
		// return m_FirstProperty == propertyName || m_FirstProperty == GetAlternateName(propertyName);
		String_t* L_0 = (String_t*)__this->get_m_FirstProperty_4();
		String_t* L_1 = ___propertyName0;
		bool L_2;
		L_2 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB((String_t*)L_0, (String_t*)L_1, /*hidden argument*/NULL);
		if (L_2)
		{
			goto IL_0020;
		}
	}
	{
		String_t* L_3 = (String_t*)__this->get_m_FirstProperty_4();
		String_t* L_4 = ___propertyName0;
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 4));
		String_t* L_5;
		L_5 = ((  String_t* (*) (String_t*, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5)->methodPointer)((String_t*)L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5));
		bool L_6;
		L_6 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB((String_t*)L_3, (String_t*)L_5, /*hidden argument*/NULL);
		return (bool)L_6;
	}

IL_0020:
	{
		return (bool)1;
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
// System.Void Unity.RuntimeSceneSerialization.Internal.Prefabs.RuntimePrefabPropertyOverride`1/SetPropertyVisitor<Unity.RuntimeSceneSerialization.Internal.UnityObjectReference>::.ctor(Unity.RuntimeSceneSerialization.Internal.Prefabs.RuntimePrefabPropertyOverride`1<TOverrideValue>,System.String,Unity.RuntimeSceneSerialization.SerializationMetadata)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SetPropertyVisitor__ctor_mD9413DF54B85FC52065CCD9CC63943B74E962029_gshared (SetPropertyVisitor_t50A2DDF7DEDE96DF34D0ABD7164EA134DCCC52E9 * __this, RuntimePrefabPropertyOverride_1_tFCA82E033FFFD653514A45EC19EADD498FC6EA7E * ___prefabOverride0, String_t* ___propertyPath1, SerializationMetadata_tCB3C700413EA4D79DB35199627C7DD6F8EF1ECE2 * ___metadata2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SerializationMetadata metadata) : base(metadata)
		SerializationMetadata_tCB3C700413EA4D79DB35199627C7DD6F8EF1ECE2 * L_0 = ___metadata2;
		NullCheck((UnityObjectPropertyVisitor_t6D216B27CEC2B426B88BCA62A02F8A7D3BC4F14C *)__this);
		UnityObjectPropertyVisitor__ctor_mA6738B2407BE150DC4C6E74204B0BAD7B1E493AE((UnityObjectPropertyVisitor_t6D216B27CEC2B426B88BCA62A02F8A7D3BC4F14C *)__this, (SerializationMetadata_tCB3C700413EA4D79DB35199627C7DD6F8EF1ECE2 *)L_0, /*hidden argument*/NULL);
		// m_PrefabOverride = prefabOverride;
		RuntimePrefabPropertyOverride_1_tFCA82E033FFFD653514A45EC19EADD498FC6EA7E * L_1 = ___prefabOverride0;
		__this->set_m_PrefabOverride_2(L_1);
		// m_PropertyPath = propertyPath;
		String_t* L_2 = ___propertyPath1;
		__this->set_m_PropertyPath_3(L_2);
		// m_FirstProperty = propertyPath.Split('.')[0];
		String_t* L_3 = ___propertyPath1;
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_4 = (CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*)(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*)SZArrayNew(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34_il2cpp_TypeInfo_var, (uint32_t)1);
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_5 = (CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*)L_4;
		NullCheck(L_5);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(0), (Il2CppChar)((int32_t)46));
		NullCheck((String_t*)L_3);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_6;
		L_6 = String_Split_m2C74DC2B85B322998094BEDE787C378822E1F28B((String_t*)L_3, (CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*)L_5, /*hidden argument*/NULL);
		NullCheck(L_6);
		int32_t L_7 = 0;
		String_t* L_8 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		__this->set_m_FirstProperty_4(L_8);
		// }
		return;
	}
}
// System.Boolean Unity.RuntimeSceneSerialization.Internal.Prefabs.RuntimePrefabPropertyOverride`1/SetPropertyVisitor<Unity.RuntimeSceneSerialization.Internal.UnityObjectReference>::IsFirstProperty(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SetPropertyVisitor_IsFirstProperty_m84949053354BE489C2246827C8714B51ECC21839_gshared (SetPropertyVisitor_t50A2DDF7DEDE96DF34D0ABD7164EA134DCCC52E9 * __this, String_t* ___propertyName0, const RuntimeMethod* method)
{
	{
		// return m_FirstProperty == propertyName || m_FirstProperty == GetAlternateName(propertyName);
		String_t* L_0 = (String_t*)__this->get_m_FirstProperty_4();
		String_t* L_1 = ___propertyName0;
		bool L_2;
		L_2 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB((String_t*)L_0, (String_t*)L_1, /*hidden argument*/NULL);
		if (L_2)
		{
			goto IL_0020;
		}
	}
	{
		String_t* L_3 = (String_t*)__this->get_m_FirstProperty_4();
		String_t* L_4 = ___propertyName0;
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 4));
		String_t* L_5;
		L_5 = ((  String_t* (*) (String_t*, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5)->methodPointer)((String_t*)L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5));
		bool L_6;
		L_6 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB((String_t*)L_3, (String_t*)L_5, /*hidden argument*/NULL);
		return (bool)L_6;
	}

IL_0020:
	{
		return (bool)1;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  Enumerator_get_Current_m17E1C36ECBB09CC2AB892710866F8655D83A6048_gshared_inline (Enumerator_tE4E91EE5578038530CF0C46227953BA787E7A0A0 * __this, const RuntimeMethod* method)
{
	{
		KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  L_0 = (KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 )__this->get_current_3();
		return (KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 )L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * KeyValuePair_2_get_Key_mCAD7B121DB998D7C56EB0281215A860EFE9DCD95_gshared_inline (KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_key_0();
		return (RuntimeObject *)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * KeyValuePair_2_get_Value_m622223593F7461E7812C581DDB145270016ED303_gshared_inline (KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_value_1();
		return (RuntimeObject *)L_0;
	}
}
