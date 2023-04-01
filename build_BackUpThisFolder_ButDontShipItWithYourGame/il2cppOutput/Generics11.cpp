#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>


template <typename R, typename T1, typename T2>
struct VirtualFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
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
struct InterfaceActionInvoker1Invoker;
template <typename T1>
struct InterfaceActionInvoker1Invoker<T1*>
{
	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1* p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		void* params[1] = { p1 };
		invokeData.method->invoker_method(il2cpp_codegen_get_method_pointer(invokeData.method), invokeData.method, obj, params, params[0]);
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
template <typename T1>
struct InvokerActionInvoker1;
template <typename T1>
struct InvokerActionInvoker1<T1*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1)
	{
		void* params[1] = { p1 };
		method->invoker_method(methodPtr, method, obj, params, params[0]);
	}
};
template <typename T1, typename T2>
struct InvokerActionInvoker2;
template <typename T1, typename T2>
struct InvokerActionInvoker2<T1*, T2*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2)
	{
		void* params[2] = { p1, p2 };
		method->invoker_method(methodPtr, method, obj, params, params[1]);
	}
};
template <typename R, typename T1>
struct InvokerFuncInvoker1;
template <typename R, typename T1>
struct InvokerFuncInvoker1<R, T1*>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1)
	{
		R ret;
		void* params[1] = { p1 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1, typename T2>
struct InvokerFuncInvoker2;
template <typename R, typename T1, typename T2>
struct InvokerFuncInvoker2<R, T1*, T2*>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2)
	{
		R ret;
		void* params[2] = { p1, p2 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};

struct ConcurrentDictionary_2_t6DF554984593E2F9932FAFBF9E1AFD30D1ED0812;
struct ConditionalWeakTable_2_t87BE12792DC61EC9AE17609EC1ACA0671B3F5605;
struct ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858;
struct DictionaryEnumerator_t50968DBECB732082714E6294722DC51777C8A22A;
struct DictionaryList_2_t482ED02756A61A932B8B20ABAE5B6FA2F9260992;
struct DictionaryList_2_t620EEEAEC8816E3C2F0E68BFAE56F9F81D91E229;
struct DictionaryPropertyBag_2_tB597C417CF7505B25BF7B87BA095BDE4F999B934;
struct Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27;
struct Dictionary_2_tA59FCDC7016E38E9B9B393997928B8B73460F4DF;
struct Dictionary_2_t9283A2526EFCCE82F0B8EBAF55887B5456F4480A;
struct Dictionary_2_t4D7978E5F7E236382AF32684305AC72452D49043;
struct Dictionary_2_tC44035903CD447F30151D3470629A0598D22856F;
struct Dictionary_2_t01224C8DBCCFE276E97D2BF52F4D7B10D3642682;
struct Dictionary_2_t760E9A9490B53715AE11CA76450386C19A39A0C8;
struct Dictionary_2_t07F043B93235170E47B40DB71B2E46256D11FD3A;
struct Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA;
struct Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588;
struct Dictionary_2_t23FAF4248F9B379520F4956DE1E5CB2F186F7214;
struct Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E;
struct EqualityComparer_1_t8EE005CC277EC77E0AFAB9930C9285E3DE4C677B;
struct EqualityComparer_1_t8DFD15807C95203DA08FAD2838BD16CE1C70A17E;
struct EqualityComparer_1_t39F37BD252745ACD048E411385EBDFBABD5BBFAE;
struct EqualityComparer_1_t97160852989689D9543E2E1EA7D7196DBEA5AEE4;
struct EqualityComparer_1_tCAA8B21BC7E1029BB1288DEAE6D8ACB730BC5D4B;
struct EqualityComparer_1_tAAD1A76C30594C4D736E586B3D77281A53A27399;
struct EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC;
struct EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2;
struct IDictionary_2_tA2330C7C8777A06DFEF91DA17F3C4618D7F1FA63;
struct IDictionary_2_t6DC67749C843C62CDE58E46343BEA6C993649880;
struct IDictionary_2_t77967A5C4235DD5F80D644F16C0E5C66C87B5FF2;
struct IDictionary_2_t6C47FFA616EC558C022681513B6F3E26A16EE312;
struct IDictionary_2_tD4F1A0DA52352F71837E0D8C20BBAD6C552AC1ED;
struct IDictionary_2_t751349E8A218198172AA25D9ED27B4CDCC17CE50;
struct IDictionary_2_t50E952B66B1D4ACB4AE37421BADA8F877603E4C8;
struct IEnumerator_1_tAA9E173D47F9A415DBE8F74E8C3F53E27F513950;
struct IEnumerator_1_t23EED83EA12FB94661929E2FC73F97CA59D36B9C;
struct IEnumerator_1_t624E4ACED0595D86B82D760C85467E4E14C56461;
struct IEnumerator_1_tA0A2C7BBDB4802D2AFF0ECD6A1020DB449D91FCB;
struct IEnumerator_1_t9A8C78329AA40049674038374240306FDCB5663E;
struct IEnumerator_1_tFD827CF8F93411879A9A270098B457F6F4A61173;
struct IEnumerator_1_t2EA3AC13270BB56026B7097A0024DD3CCA3CF9EC;
struct IEnumerator_1_tFABD3B897F1296469E9A2DB9BCF6C89439049208;
struct IEqualityComparer_1_tDACC7D28FFD11A83A9FC39CC18863F52A3E7E88F;
struct IEqualityComparer_1_t0706C8CEAD5235F761D9A8DB3AC57BA61E96F1C9;
struct IEqualityComparer_1_tDBFC8496F14612776AF930DBF84AFE7D06D1F0E9;
struct IEqualityComparer_1_t2CA7720C7ADCCDECD3B02E45878B4478619D5347;
struct IEqualityComparer_1_t47CC0B235E693652D181B679FF6D61A469ECC122;
struct IList_1_t3C981BB2E5E26A467A42AF86513CF54136025701;
struct KeyCollection_t90C2F9D22B44E6B189DB7B61265585A859F93123;
struct KeyCollection_t3230D276D9625DB17B194F08DFA6BF3606BE6267;
struct KeyCollection_t9DE8CFDEB3353C5383DB324226EACA5D0B37AA8E;
struct KeyCollection_t1C0270D8CA819EF870A1AB2BDF71FF7D9967AC6C;
struct KeyCollection_t27A4E9C75C7D4062FA62AB82C4F9EBE443BD465A;
struct KeyCollection_t66E188B36DF8E1A23EBDA7253CDCE978CD3EF298;
struct KeyCollection_t3E33C2EB31F1F1EF4ADE3FFFBB7D11E563134D04;
struct KeyCollection_tEACE8F2615D283A94FE4279152C1C1857A5CD594;
struct KeyCollection_t548FF35C9AB95FA760EAA205B55BF5215DCD02B2;
struct KeyCollection_tB792ACBAE0B99278B0B7B0F7440B4788E98F0D55;
struct KeyValuePairProperty_tE883A6048C21550261A3176050C59520BBE08A85;
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
struct List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A;
struct Tables_tD895B223685217918C345ED5D52074F7E29E5F95;
struct ValueCollection_t5221C67954BD6EEB65BAE1FFD366E7538FDA0E1F;
struct ValueCollection_tF196B3CD364A680EF74D9FA64A62B0A043188D5A;
struct ValueCollection_tDDD3D21DE247A37B6EFC39326193FCD731A2E296;
struct ValueCollection_t1A840A8972E8AE9C8564CF9D1EEC5519261BAFA9;
struct ValueCollection_t155E307D9195A7BE8C4DE53C867A8CEBA24805BF;
struct ValueCollection_t95D69F17F87935E5166EE0E3C174BB8A8F051F5B;
struct ValueCollection_tDBED056C1C402E2288827E2C0299F425713D8171;
struct ValueCollection_t0E753798189D869CDC4CEBE3697A16DC15B323E8;
struct ValueCollection_t656DCDFFCB65DD611BE40C1A8D81E51DAC758369;
struct ValueCollection_tC492596681BD51AB34FC76FA76C15C9B3FFB7B40;
struct EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9;
struct EntryU5BU5D_t2FA9EF95EBAB729FEB4F9541CAC889E13FC7202B;
struct EntryU5BU5D_tE0A05522E3E044A0A153A33D678D14E918FFAD4F;
struct EntryU5BU5D_t103180204D286AA5897443F7674A3782622F8744;
struct EntryU5BU5D_tD89AF257A311DB3C41DA1BEE9D8F0B2E5EA7E86E;
struct EntryU5BU5D_t6E8F51999B5C2D1A5E09B1963CF042E7B5CAA500;
struct EntryU5BU5D_t74939D41FA6DAF2CD4F7462D8AD016D48B99B8B7;
struct EntryU5BU5D_tF5C7725AC5610BAAE7F6CC3B047760CD1EBCBC14;
struct EntryU5BU5D_tA99E9BD6C2AC45605C47C5A603ABD986F1FE2CF9;
struct EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3;
struct KeyValuePair_2U5BU5D_tF0A0AABC82DE189C18BE91E0D9CC0C01C2449460;
struct KeyValuePair_2U5BU5D_tE363BCACDAADBB4644E128BD0356204665EDF9C8;
struct KeyValuePair_2U5BU5D_t6E8559F0FEDC952C1C97D197BC8286FDA93AB882;
struct KeyValuePair_2U5BU5D_t65371EF32BF577225115397A64E346AE93FE927C;
struct KeyValuePair_2U5BU5D_t4A52453D810EE41FD9E873C0FA5C9F4500832CAC;
struct KeyValuePair_2U5BU5D_t00F1189D6659F8334E1D51B328A743FBD809CFB6;
struct KeyValuePair_2U5BU5D_t185EF1C22979145FBA3233EFBDF557ECDC08113C;
struct KeyValuePair_2U5BU5D_t885F2E060B0261B18E97D336746D53BA61338F57;
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct EphemeronU5BU5D_t4F80428A1142C3102C946127F8190063001742E8;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
struct __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC;
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
struct ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E;
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
struct IDictionaryEnumerator_tE129D608FCDB7207E0F0ECE33473CC950A83AD16;
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
struct IFormatterConverter_t726606DAC82C384B08C82471313C340968DDB609;
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
struct SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37;
struct String_t;
struct Type_t;
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;

IL2CPP_EXTERN_C RuntimeClass* ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RuntimeObject_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69;
IL2CPP_EXTERN_C String_t* _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9;
IL2CPP_EXTERN_C String_t* _stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A;
IL2CPP_EXTERN_C String_t* _stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1;
IL2CPP_EXTERN_C const RuntimeMethod* ConditionalWeakTable_2_Add_mF98A2811734A37D856C622E7783FD7502AA7F0B7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ConditionalWeakTable_2_Remove_mEA61545EA43662F3718895F4E435A1F3EFB9756E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ConditionalWeakTable_2_TryGetValue_m8AB467BA44D1FF9EBDB9735CED88B0D67AC6403F_RuntimeMethod_var;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9;
struct EntryU5BU5D_t2FA9EF95EBAB729FEB4F9541CAC889E13FC7202B;
struct EntryU5BU5D_tE0A05522E3E044A0A153A33D678D14E918FFAD4F;
struct EntryU5BU5D_t103180204D286AA5897443F7674A3782622F8744;
struct EntryU5BU5D_tD89AF257A311DB3C41DA1BEE9D8F0B2E5EA7E86E;
struct EntryU5BU5D_t6E8F51999B5C2D1A5E09B1963CF042E7B5CAA500;
struct EntryU5BU5D_t74939D41FA6DAF2CD4F7462D8AD016D48B99B8B7;
struct KeyValuePair_2U5BU5D_tF0A0AABC82DE189C18BE91E0D9CC0C01C2449460;
struct KeyValuePair_2U5BU5D_tE363BCACDAADBB4644E128BD0356204665EDF9C8;
struct KeyValuePair_2U5BU5D_t6E8559F0FEDC952C1C97D197BC8286FDA93AB882;
struct KeyValuePair_2U5BU5D_t65371EF32BF577225115397A64E346AE93FE927C;
struct KeyValuePair_2U5BU5D_t4A52453D810EE41FD9E873C0FA5C9F4500832CAC;
struct KeyValuePair_2U5BU5D_t00F1189D6659F8334E1D51B328A743FBD809CFB6;
struct KeyValuePair_2U5BU5D_t185EF1C22979145FBA3233EFBDF557ECDC08113C;
struct DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
struct ConcurrentDictionary_2_t6DF554984593E2F9932FAFBF9E1AFD30D1ED0812  : public RuntimeObject
{
	Tables_tD895B223685217918C345ED5D52074F7E29E5F95* ____tables_0;
	RuntimeObject* ____comparer_1;
	bool ____growLockArray_2;
	int32_t ____budget_3;
	KeyValuePair_2U5BU5D_t885F2E060B0261B18E97D336746D53BA61338F57* ____serializationArray_4;
	int32_t ____serializationConcurrencyLevel_5;
	int32_t ____serializationCapacity_6;
};
struct ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858  : public RuntimeObject
{
	EphemeronU5BU5D_t4F80428A1142C3102C946127F8190063001742E8* ___data_4;
	RuntimeObject* ____lock_5;
	int32_t ___size_6;
};
struct DictionaryEnumerator_t50968DBECB732082714E6294722DC51777C8A22A  : public RuntimeObject
{
	RuntimeObject* ____enumerator_0;
};
struct DictionaryKeyCollectionDebugView_2_t11025E5862E2C4D0FD8923B7995FF3CA72AEC4B1  : public RuntimeObject
{
};
struct DictionaryKeyCollectionDebugView_2_tA967A5CC2E1F95032AE886F39B1005E56173D9D2  : public RuntimeObject
{
};
struct DictionaryList_2_t482ED02756A61A932B8B20ABAE5B6FA2F9260992  : public RuntimeObject
{
	Dictionary_2_t07F043B93235170E47B40DB71B2E46256D11FD3A* ___dictionary_0;
};
struct DictionaryList_2_t620EEEAEC8816E3C2F0E68BFAE56F9F81D91E229  : public RuntimeObject
{
	Dictionary_2_t23FAF4248F9B379520F4956DE1E5CB2F186F7214* ___dictionary_0;
};
struct DictionaryValueCollectionDebugView_2_t6086817CC98620510D98FB742382358DA92C2D4C  : public RuntimeObject
{
};
struct DictionaryValueCollectionDebugView_2_tE2C8C453C326A08B63223B59D5D010EFFE30BEF3  : public RuntimeObject
{
};
struct Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27  : public RuntimeObject
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* ____entries_1;
	int32_t ____count_2;
	int32_t ____freeList_3;
	int32_t ____freeCount_4;
	int32_t ____version_5;
	RuntimeObject* ____comparer_6;
	KeyCollection_t90C2F9D22B44E6B189DB7B61265585A859F93123* ____keys_7;
	ValueCollection_t5221C67954BD6EEB65BAE1FFD366E7538FDA0E1F* ____values_8;
	RuntimeObject* ____syncRoot_9;
};
struct Dictionary_2_tA59FCDC7016E38E9B9B393997928B8B73460F4DF  : public RuntimeObject
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	EntryU5BU5D_t2FA9EF95EBAB729FEB4F9541CAC889E13FC7202B* ____entries_1;
	int32_t ____count_2;
	int32_t ____freeList_3;
	int32_t ____freeCount_4;
	int32_t ____version_5;
	RuntimeObject* ____comparer_6;
	KeyCollection_t3230D276D9625DB17B194F08DFA6BF3606BE6267* ____keys_7;
	ValueCollection_tF196B3CD364A680EF74D9FA64A62B0A043188D5A* ____values_8;
	RuntimeObject* ____syncRoot_9;
};
struct Dictionary_2_t9283A2526EFCCE82F0B8EBAF55887B5456F4480A  : public RuntimeObject
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	EntryU5BU5D_tE0A05522E3E044A0A153A33D678D14E918FFAD4F* ____entries_1;
	int32_t ____count_2;
	int32_t ____freeList_3;
	int32_t ____freeCount_4;
	int32_t ____version_5;
	RuntimeObject* ____comparer_6;
	KeyCollection_t9DE8CFDEB3353C5383DB324226EACA5D0B37AA8E* ____keys_7;
	ValueCollection_tDDD3D21DE247A37B6EFC39326193FCD731A2E296* ____values_8;
	RuntimeObject* ____syncRoot_9;
};
struct Dictionary_2_t4D7978E5F7E236382AF32684305AC72452D49043  : public RuntimeObject
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	EntryU5BU5D_t103180204D286AA5897443F7674A3782622F8744* ____entries_1;
	int32_t ____count_2;
	int32_t ____freeList_3;
	int32_t ____freeCount_4;
	int32_t ____version_5;
	RuntimeObject* ____comparer_6;
	KeyCollection_t1C0270D8CA819EF870A1AB2BDF71FF7D9967AC6C* ____keys_7;
	ValueCollection_t1A840A8972E8AE9C8564CF9D1EEC5519261BAFA9* ____values_8;
	RuntimeObject* ____syncRoot_9;
};
struct Dictionary_2_tC44035903CD447F30151D3470629A0598D22856F  : public RuntimeObject
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	EntryU5BU5D_tD89AF257A311DB3C41DA1BEE9D8F0B2E5EA7E86E* ____entries_1;
	int32_t ____count_2;
	int32_t ____freeList_3;
	int32_t ____freeCount_4;
	int32_t ____version_5;
	RuntimeObject* ____comparer_6;
	KeyCollection_t27A4E9C75C7D4062FA62AB82C4F9EBE443BD465A* ____keys_7;
	ValueCollection_t155E307D9195A7BE8C4DE53C867A8CEBA24805BF* ____values_8;
	RuntimeObject* ____syncRoot_9;
};
struct Dictionary_2_t01224C8DBCCFE276E97D2BF52F4D7B10D3642682  : public RuntimeObject
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	EntryU5BU5D_t6E8F51999B5C2D1A5E09B1963CF042E7B5CAA500* ____entries_1;
	int32_t ____count_2;
	int32_t ____freeList_3;
	int32_t ____freeCount_4;
	int32_t ____version_5;
	RuntimeObject* ____comparer_6;
	KeyCollection_t66E188B36DF8E1A23EBDA7253CDCE978CD3EF298* ____keys_7;
	ValueCollection_t95D69F17F87935E5166EE0E3C174BB8A8F051F5B* ____values_8;
	RuntimeObject* ____syncRoot_9;
};
struct Dictionary_2_t760E9A9490B53715AE11CA76450386C19A39A0C8  : public RuntimeObject
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	EntryU5BU5D_t74939D41FA6DAF2CD4F7462D8AD016D48B99B8B7* ____entries_1;
	int32_t ____count_2;
	int32_t ____freeList_3;
	int32_t ____freeCount_4;
	int32_t ____version_5;
	RuntimeObject* ____comparer_6;
	KeyCollection_t3E33C2EB31F1F1EF4ADE3FFFBB7D11E563134D04* ____keys_7;
	ValueCollection_tDBED056C1C402E2288827E2C0299F425713D8171* ____values_8;
	RuntimeObject* ____syncRoot_9;
};
struct Dictionary_2_t07F043B93235170E47B40DB71B2E46256D11FD3A  : public RuntimeObject
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	EntryU5BU5D_tF5C7725AC5610BAAE7F6CC3B047760CD1EBCBC14* ____entries_1;
	int32_t ____count_2;
	int32_t ____freeList_3;
	int32_t ____freeCount_4;
	int32_t ____version_5;
	RuntimeObject* ____comparer_6;
	KeyCollection_tEACE8F2615D283A94FE4279152C1C1857A5CD594* ____keys_7;
	ValueCollection_t0E753798189D869CDC4CEBE3697A16DC15B323E8* ____values_8;
	RuntimeObject* ____syncRoot_9;
};
struct Dictionary_2_t23FAF4248F9B379520F4956DE1E5CB2F186F7214  : public RuntimeObject
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	EntryU5BU5D_tA99E9BD6C2AC45605C47C5A603ABD986F1FE2CF9* ____entries_1;
	int32_t ____count_2;
	int32_t ____freeList_3;
	int32_t ____freeCount_4;
	int32_t ____version_5;
	RuntimeObject* ____comparer_6;
	KeyCollection_t548FF35C9AB95FA760EAA205B55BF5215DCD02B2* ____keys_7;
	ValueCollection_t656DCDFFCB65DD611BE40C1A8D81E51DAC758369* ____values_8;
	RuntimeObject* ____syncRoot_9;
};
struct Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E  : public RuntimeObject
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* ____entries_1;
	int32_t ____count_2;
	int32_t ____freeList_3;
	int32_t ____freeCount_4;
	int32_t ____version_5;
	RuntimeObject* ____comparer_6;
	KeyCollection_tB792ACBAE0B99278B0B7B0F7440B4788E98F0D55* ____keys_7;
	ValueCollection_tC492596681BD51AB34FC76FA76C15C9B3FFB7B40* ____values_8;
	RuntimeObject* ____syncRoot_9;
};
struct EqualityComparer_1_t8EE005CC277EC77E0AFAB9930C9285E3DE4C677B  : public RuntimeObject
{
};
struct EqualityComparer_1_t8DFD15807C95203DA08FAD2838BD16CE1C70A17E  : public RuntimeObject
{
};
struct EqualityComparer_1_t39F37BD252745ACD048E411385EBDFBABD5BBFAE  : public RuntimeObject
{
};
struct EqualityComparer_1_t97160852989689D9543E2E1EA7D7196DBEA5AEE4  : public RuntimeObject
{
};
struct EqualityComparer_1_tCAA8B21BC7E1029BB1288DEAE6D8ACB730BC5D4B  : public RuntimeObject
{
};
struct EqualityComparer_1_tAAD1A76C30594C4D736E586B3D77281A53A27399  : public RuntimeObject
{
};
struct EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC  : public RuntimeObject
{
};
struct EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2  : public RuntimeObject
{
};
struct KeyCollection_t90C2F9D22B44E6B189DB7B61265585A859F93123  : public RuntimeObject
{
	Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* ____dictionary_0;
};
struct KeyCollection_t3230D276D9625DB17B194F08DFA6BF3606BE6267  : public RuntimeObject
{
	Dictionary_2_tA59FCDC7016E38E9B9B393997928B8B73460F4DF* ____dictionary_0;
};
struct KeyCollection_t9DE8CFDEB3353C5383DB324226EACA5D0B37AA8E  : public RuntimeObject
{
	Dictionary_2_t9283A2526EFCCE82F0B8EBAF55887B5456F4480A* ____dictionary_0;
};
struct KeyCollection_t1C0270D8CA819EF870A1AB2BDF71FF7D9967AC6C  : public RuntimeObject
{
	Dictionary_2_t4D7978E5F7E236382AF32684305AC72452D49043* ____dictionary_0;
};
struct KeyCollection_t27A4E9C75C7D4062FA62AB82C4F9EBE443BD465A  : public RuntimeObject
{
	Dictionary_2_tC44035903CD447F30151D3470629A0598D22856F* ____dictionary_0;
};
struct KeyCollection_t66E188B36DF8E1A23EBDA7253CDCE978CD3EF298  : public RuntimeObject
{
	Dictionary_2_t01224C8DBCCFE276E97D2BF52F4D7B10D3642682* ____dictionary_0;
};
struct KeyCollection_t3E33C2EB31F1F1EF4ADE3FFFBB7D11E563134D04  : public RuntimeObject
{
	Dictionary_2_t760E9A9490B53715AE11CA76450386C19A39A0C8* ____dictionary_0;
};
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D  : public RuntimeObject
{
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ____items_1;
	int32_t ____size_2;
	int32_t ____version_3;
	RuntimeObject* ____syncRoot_4;
};
struct List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A  : public RuntimeObject
{
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ____items_1;
	int32_t ____size_2;
	int32_t ____version_3;
	RuntimeObject* ____syncRoot_4;
};
struct PropertyBag_1_tEB280A6B1E6B2014C69D7F69938160F85728FAB1  : public RuntimeObject
{
	int32_t ___U3CInstantiationKindU3Ek__BackingField_0;
};
struct ValueCollection_t5221C67954BD6EEB65BAE1FFD366E7538FDA0E1F  : public RuntimeObject
{
	Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* ____dictionary_0;
};
struct ValueCollection_tF196B3CD364A680EF74D9FA64A62B0A043188D5A  : public RuntimeObject
{
	Dictionary_2_tA59FCDC7016E38E9B9B393997928B8B73460F4DF* ____dictionary_0;
};
struct ValueCollection_tDDD3D21DE247A37B6EFC39326193FCD731A2E296  : public RuntimeObject
{
	Dictionary_2_t9283A2526EFCCE82F0B8EBAF55887B5456F4480A* ____dictionary_0;
};
struct ValueCollection_t1A840A8972E8AE9C8564CF9D1EEC5519261BAFA9  : public RuntimeObject
{
	Dictionary_2_t4D7978E5F7E236382AF32684305AC72452D49043* ____dictionary_0;
};
struct ValueCollection_t155E307D9195A7BE8C4DE53C867A8CEBA24805BF  : public RuntimeObject
{
	Dictionary_2_tC44035903CD447F30151D3470629A0598D22856F* ____dictionary_0;
};
struct ValueCollection_t95D69F17F87935E5166EE0E3C174BB8A8F051F5B  : public RuntimeObject
{
	Dictionary_2_t01224C8DBCCFE276E97D2BF52F4D7B10D3642682* ____dictionary_0;
};
struct ValueCollection_tDBED056C1C402E2288827E2C0299F425713D8171  : public RuntimeObject
{
	Dictionary_2_t760E9A9490B53715AE11CA76450386C19A39A0C8* ____dictionary_0;
};
struct MemberInfo_t  : public RuntimeObject
{
};
struct SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37  : public RuntimeObject
{
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___m_members_3;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_data_4;
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___m_types_5;
	Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588* ___m_nameToIndex_6;
	int32_t ___m_currMember_7;
	RuntimeObject* ___m_converter_8;
	String_t* ___m_fullTypeName_9;
	String_t* ___m_assemName_10;
	Type_t* ___objectType_11;
	bool ___isFullTypeNameSetExplicit_12;
	bool ___isAssemblyNameSetExplicit_13;
	bool ___requireSameTokenInPartialTrust_14;
};
struct String_t  : public RuntimeObject
{
	int32_t ____stringLength_4;
	Il2CppChar ____firstChar_5;
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};
struct ContentHeightCacheInfo_tA616347D46981FC5684B6268FC7035C431E99FBC 
{
	float ___sum_0;
	int32_t ___count_1;
};
struct Entry_t740F919D5BA6D1FE201C58777E6EB966B35EE2EE 
{
	int32_t ___hashCode_0;
	int32_t ___next_1;
	int32_t ___key_2;
	bool ___value_3;
};
struct Entry_t5A1DD43C826878A3853C7DF32E971C3D19805227 
{
	int32_t ___hashCode_0;
	int32_t ___next_1;
	int32_t ___key_2;
	Il2CppChar ___value_3;
};
struct KeyValueCollectionPropertyBag_3_t5E0DC90A64EA0D5A2ECA5F96F46C708F625A8D08  : public PropertyBag_1_tEB280A6B1E6B2014C69D7F69938160F85728FAB1
{
	KeyValuePairProperty_tE883A6048C21550261A3176050C59520BBE08A85* ___m_KeyValuePairProperty_1;
};
struct KeyValuePair_2_t0EAC8DA2D95957AFA60DD198D013622384C0D213 
{
	int32_t ___key_0;
	bool ___value_1;
};
struct KeyValuePair_2_t25871D01DA51BBB8CEF1F27E727B5D3A545FD4EF 
{
	int32_t ___key_0;
	Il2CppChar ___value_1;
};
typedef Il2CppFullySharedGenericStruct KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669;
struct TreeViewItemData_1_t95D9721135F40D0DB3D221F8EB2543C396D350F4 
{
	int32_t ___U3CidU3Ek__BackingField_0;
	RuntimeObject* ___m_Data_1;
	RuntimeObject* ___m_Children_2;
};
struct ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A 
{
	RuntimeObject* ___Item1_0;
	RuntimeObject* ___Item2_1;
};
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	bool ___m_value_0;
};
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17 
{
	Il2CppChar ___m_value_0;
};
struct DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB 
{
	RuntimeObject* ____key_0;
	RuntimeObject* ____value_1;
};
struct DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB_marshaled_pinvoke
{
	Il2CppIUnknown* ____key_0;
	Il2CppIUnknown* ____value_1;
};
struct DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB_marshaled_com
{
	Il2CppIUnknown* ____key_0;
	Il2CppIUnknown* ____value_1;
};
struct Guid_t 
{
	int32_t ____a_1;
	int16_t ____b_2;
	int16_t ____c_3;
	uint8_t ____d_4;
	uint8_t ____e_5;
	uint8_t ____f_6;
	uint8_t ____g_7;
	uint8_t ____h_8;
	uint8_t ____i_9;
	uint8_t ____j_10;
	uint8_t ____k_11;
};
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	int32_t ___m_value_0;
};
struct IntPtr_t 
{
	void* ___m_value_0;
};
struct StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 
{
	RuntimeObject* ___m_additionalContext_0;
	int32_t ___m_state_1;
};
struct StreamingContext_t56760522A751890146EE45F82F866B55B7E33677_marshaled_pinvoke
{
	Il2CppIUnknown* ___m_additionalContext_0;
	int32_t ___m_state_1;
};
struct StreamingContext_t56760522A751890146EE45F82F866B55B7E33677_marshaled_com
{
	Il2CppIUnknown* ___m_additionalContext_0;
	int32_t ___m_state_1;
};
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915 
{
	union
	{
		struct
		{
		};
		uint8_t Void_t4861ACF8F4594C3437BB48B6E56783494B843915__padding[1];
	};
};
struct DictionaryPropertyBag_2_tB597C417CF7505B25BF7B87BA095BDE4F999B934  : public KeyValueCollectionPropertyBag_3_t5E0DC90A64EA0D5A2ECA5F96F46C708F625A8D08
{
};
struct Entry_t9E54CCBCBF389A3EB228FFF39B2963CCB6661448 
{
	int32_t ___hashCode_0;
	int32_t ___next_1;
	ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A ___key_2;
	RuntimeObject* ___value_3;
};
struct Entry_t6593783EEB8286F7D80364808975FF6902726398 
{
	int32_t ___hashCode_0;
	int32_t ___next_1;
	Guid_t ___key_2;
	int32_t ___value_3;
};
struct Entry_t4BAC0D992203B05A8D2645406D4CF9E24E0F5BEF 
{
	int32_t ___hashCode_0;
	int32_t ___next_1;
	Guid_t ___key_2;
	RuntimeObject* ___value_3;
};
struct Entry_t36D828B685CBBFA5F4D6FBBA12A076C10A21AB3C 
{
	int32_t ___hashCode_0;
	int32_t ___next_1;
	int32_t ___key_2;
	ContentHeightCacheInfo_tA616347D46981FC5684B6268FC7035C431E99FBC ___value_3;
};
struct Entry_t3C43C931209AE339471E46F5C5C78DFFAD543BC9 
{
	int32_t ___hashCode_0;
	int32_t ___next_1;
	int32_t ___key_2;
	TreeViewItemData_1_t95D9721135F40D0DB3D221F8EB2543C396D350F4 ___value_3;
};
struct Enumerator_t06874F6DC6BF37190C0F4C5F3BB89A8F4D960969 
{
	Dictionary_2_t01224C8DBCCFE276E97D2BF52F4D7B10D3642682* ____dictionary_0;
	int32_t ____version_1;
	int32_t ____index_2;
	KeyValuePair_2_t0EAC8DA2D95957AFA60DD198D013622384C0D213 ____current_3;
	int32_t ____getEnumeratorRetType_4;
};
struct Enumerator_tCC8CFFFAC493A1DF0C77EE34CD9E2F5A669A0D88 
{
	Dictionary_2_t760E9A9490B53715AE11CA76450386C19A39A0C8* ____dictionary_0;
	int32_t ____version_1;
	int32_t ____index_2;
	KeyValuePair_2_t25871D01DA51BBB8CEF1F27E727B5D3A545FD4EF ____current_3;
	int32_t ____getEnumeratorRetType_4;
};
struct KeyValuePair_2_t2A9D1B7DEBB99A68011F37B017FDD44CFE5AEC14 
{
	ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A ___key_0;
	RuntimeObject* ___value_1;
};
struct KeyValuePair_2_t103EED32AF196D79C0FCDE0CE9C589258217044B 
{
	Guid_t ___key_0;
	int32_t ___value_1;
};
struct KeyValuePair_2_t669A5BAF37ED0ABC96A30943A6E7D0442310B936 
{
	Guid_t ___key_0;
	RuntimeObject* ___value_1;
};
struct KeyValuePair_2_tE3EA5100FA35C94F54D8D5F93B806E7614C34DBD 
{
	int32_t ___key_0;
	ContentHeightCacheInfo_tA616347D46981FC5684B6268FC7035C431E99FBC ___value_1;
};
struct KeyValuePair_2_tCA9456FCC0FBD03E0C9FF69F0B168B558FD2A5ED 
{
	int32_t ___key_0;
	TreeViewItemData_1_t95D9721135F40D0DB3D221F8EB2543C396D350F4 ___value_1;
};
struct Exception_t  : public RuntimeObject
{
	String_t* ____className_1;
	String_t* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t* ____innerException_4;
	String_t* ____helpURL_5;
	RuntimeObject* ____stackTrace_6;
	String_t* ____stackTraceString_7;
	String_t* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	RuntimeObject* ____dynamicMethods_10;
	int32_t ____HResult_11;
	String_t* ____source_12;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};
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
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};
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
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	intptr_t ___value_0;
};
struct Enumerator_t4C98DC0014F7B9B79F0AE8FCB4EC3987119C58D9 
{
	Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* ____dictionary_0;
	int32_t ____version_1;
	int32_t ____index_2;
	KeyValuePair_2_t2A9D1B7DEBB99A68011F37B017FDD44CFE5AEC14 ____current_3;
	int32_t ____getEnumeratorRetType_4;
};
struct Enumerator_tCEDFFFDD2C31A66EC221FED52938C50D01A8ECEF 
{
	Dictionary_2_tA59FCDC7016E38E9B9B393997928B8B73460F4DF* ____dictionary_0;
	int32_t ____version_1;
	int32_t ____index_2;
	KeyValuePair_2_t103EED32AF196D79C0FCDE0CE9C589258217044B ____current_3;
	int32_t ____getEnumeratorRetType_4;
};
struct Enumerator_t9FEF2496FA5DE5237C8DA17926FD4D968D685AB3 
{
	Dictionary_2_t9283A2526EFCCE82F0B8EBAF55887B5456F4480A* ____dictionary_0;
	int32_t ____version_1;
	int32_t ____index_2;
	KeyValuePair_2_t669A5BAF37ED0ABC96A30943A6E7D0442310B936 ____current_3;
	int32_t ____getEnumeratorRetType_4;
};
struct Enumerator_tB7C64CFA6D1E8072BF063A54A9F6CB6B8021170F 
{
	Dictionary_2_t4D7978E5F7E236382AF32684305AC72452D49043* ____dictionary_0;
	int32_t ____version_1;
	int32_t ____index_2;
	KeyValuePair_2_tE3EA5100FA35C94F54D8D5F93B806E7614C34DBD ____current_3;
	int32_t ____getEnumeratorRetType_4;
};
struct Enumerator_t0BE77930571D15651FEF9D9D38DBD8CCC82633B9 
{
	Dictionary_2_tC44035903CD447F30151D3470629A0598D22856F* ____dictionary_0;
	int32_t ____version_1;
	int32_t ____index_2;
	KeyValuePair_2_tCA9456FCC0FBD03E0C9FF69F0B168B558FD2A5ED ____current_3;
	int32_t ____getEnumeratorRetType_4;
};
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};
struct Type_t  : public MemberInfo_t
{
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ____impl_8;
};
struct ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};
struct InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};
struct ConcurrentDictionary_2_t6DF554984593E2F9932FAFBF9E1AFD30D1ED0812_StaticFields
{
	bool ___s_isValueWriteAtomic_7;
};
struct EqualityComparer_1_t8EE005CC277EC77E0AFAB9930C9285E3DE4C677B_StaticFields
{
	EqualityComparer_1_t8EE005CC277EC77E0AFAB9930C9285E3DE4C677B* ___defaultComparer_0;
};
struct EqualityComparer_1_t8DFD15807C95203DA08FAD2838BD16CE1C70A17E_StaticFields
{
	EqualityComparer_1_t8DFD15807C95203DA08FAD2838BD16CE1C70A17E* ___defaultComparer_0;
};
struct EqualityComparer_1_t39F37BD252745ACD048E411385EBDFBABD5BBFAE_StaticFields
{
	EqualityComparer_1_t39F37BD252745ACD048E411385EBDFBABD5BBFAE* ___defaultComparer_0;
};
struct EqualityComparer_1_t97160852989689D9543E2E1EA7D7196DBEA5AEE4_StaticFields
{
	EqualityComparer_1_t97160852989689D9543E2E1EA7D7196DBEA5AEE4* ___defaultComparer_0;
};
struct EqualityComparer_1_tCAA8B21BC7E1029BB1288DEAE6D8ACB730BC5D4B_StaticFields
{
	EqualityComparer_1_tCAA8B21BC7E1029BB1288DEAE6D8ACB730BC5D4B* ___defaultComparer_0;
};
struct EqualityComparer_1_tAAD1A76C30594C4D736E586B3D77281A53A27399_StaticFields
{
	EqualityComparer_1_tAAD1A76C30594C4D736E586B3D77281A53A27399* ___defaultComparer_0;
};
struct EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC_StaticFields
{
	EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* ___defaultComparer_0;
};
struct EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2_StaticFields
{
	EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* ___defaultComparer_0;
};
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_StaticFields
{
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___s_emptyArray_5;
};
struct List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A_StaticFields
{
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___s_emptyArray_5;
};
struct String_t_StaticFields
{
	String_t* ___Empty_6;
};
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	String_t* ___TrueString_5;
	String_t* ___FalseString_6;
};
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17_StaticFields
{
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___s_categoryForLatin1_3;
};
struct Guid_t_StaticFields
{
	Guid_t ___Empty_0;
};
struct Type_t_StaticFields
{
	Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235* ___s_defaultBinder_0;
	Il2CppChar ___Delimiter_1;
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___EmptyTypes_2;
	RuntimeObject* ___Missing_3;
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterAttribute_4;
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterName_5;
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterNameIgnoreCase_6;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
struct EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9  : public RuntimeArray
{
	ALIGN_FIELD (8) Entry_t9E54CCBCBF389A3EB228FFF39B2963CCB6661448 m_Items[1];

	inline Entry_t9E54CCBCBF389A3EB228FFF39B2963CCB6661448 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Entry_t9E54CCBCBF389A3EB228FFF39B2963CCB6661448* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Entry_t9E54CCBCBF389A3EB228FFF39B2963CCB6661448 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___key_2))->___Item1_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___key_2))->___Item2_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___value_3), (void*)NULL);
		#endif
	}
	inline Entry_t9E54CCBCBF389A3EB228FFF39B2963CCB6661448 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Entry_t9E54CCBCBF389A3EB228FFF39B2963CCB6661448* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Entry_t9E54CCBCBF389A3EB228FFF39B2963CCB6661448 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___key_2))->___Item1_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___key_2))->___Item2_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___value_3), (void*)NULL);
		#endif
	}
};
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C  : public RuntimeArray
{
	ALIGN_FIELD (8) int32_t m_Items[1];

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
struct KeyValuePair_2U5BU5D_tF0A0AABC82DE189C18BE91E0D9CC0C01C2449460  : public RuntimeArray
{
	ALIGN_FIELD (8) KeyValuePair_2_t2A9D1B7DEBB99A68011F37B017FDD44CFE5AEC14 m_Items[1];

	inline KeyValuePair_2_t2A9D1B7DEBB99A68011F37B017FDD44CFE5AEC14 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline KeyValuePair_2_t2A9D1B7DEBB99A68011F37B017FDD44CFE5AEC14* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, KeyValuePair_2_t2A9D1B7DEBB99A68011F37B017FDD44CFE5AEC14 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___key_0))->___Item1_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___key_0))->___Item2_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___value_1), (void*)NULL);
		#endif
	}
	inline KeyValuePair_2_t2A9D1B7DEBB99A68011F37B017FDD44CFE5AEC14 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline KeyValuePair_2_t2A9D1B7DEBB99A68011F37B017FDD44CFE5AEC14* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, KeyValuePair_2_t2A9D1B7DEBB99A68011F37B017FDD44CFE5AEC14 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___key_0))->___Item1_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___key_0))->___Item2_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___value_1), (void*)NULL);
		#endif
	}
};
struct DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533  : public RuntimeArray
{
	ALIGN_FIELD (8) DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB m_Items[1];

	inline DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->____key_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->____value_1), (void*)NULL);
		#endif
	}
	inline DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->____key_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->____value_1), (void*)NULL);
		#endif
	}
};
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918  : public RuntimeArray
{
	ALIGN_FIELD (8) RuntimeObject* m_Items[1];

	inline RuntimeObject* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
struct EntryU5BU5D_t2FA9EF95EBAB729FEB4F9541CAC889E13FC7202B  : public RuntimeArray
{
	ALIGN_FIELD (8) Entry_t6593783EEB8286F7D80364808975FF6902726398 m_Items[1];

	inline Entry_t6593783EEB8286F7D80364808975FF6902726398 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Entry_t6593783EEB8286F7D80364808975FF6902726398* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Entry_t6593783EEB8286F7D80364808975FF6902726398 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Entry_t6593783EEB8286F7D80364808975FF6902726398 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Entry_t6593783EEB8286F7D80364808975FF6902726398* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Entry_t6593783EEB8286F7D80364808975FF6902726398 value)
	{
		m_Items[index] = value;
	}
};
struct KeyValuePair_2U5BU5D_tE363BCACDAADBB4644E128BD0356204665EDF9C8  : public RuntimeArray
{
	ALIGN_FIELD (8) KeyValuePair_2_t103EED32AF196D79C0FCDE0CE9C589258217044B m_Items[1];

	inline KeyValuePair_2_t103EED32AF196D79C0FCDE0CE9C589258217044B GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline KeyValuePair_2_t103EED32AF196D79C0FCDE0CE9C589258217044B* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, KeyValuePair_2_t103EED32AF196D79C0FCDE0CE9C589258217044B value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline KeyValuePair_2_t103EED32AF196D79C0FCDE0CE9C589258217044B GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline KeyValuePair_2_t103EED32AF196D79C0FCDE0CE9C589258217044B* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, KeyValuePair_2_t103EED32AF196D79C0FCDE0CE9C589258217044B value)
	{
		m_Items[index] = value;
	}
};
struct EntryU5BU5D_tE0A05522E3E044A0A153A33D678D14E918FFAD4F  : public RuntimeArray
{
	ALIGN_FIELD (8) Entry_t4BAC0D992203B05A8D2645406D4CF9E24E0F5BEF m_Items[1];

	inline Entry_t4BAC0D992203B05A8D2645406D4CF9E24E0F5BEF GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Entry_t4BAC0D992203B05A8D2645406D4CF9E24E0F5BEF* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Entry_t4BAC0D992203B05A8D2645406D4CF9E24E0F5BEF value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___value_3), (void*)NULL);
	}
	inline Entry_t4BAC0D992203B05A8D2645406D4CF9E24E0F5BEF GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Entry_t4BAC0D992203B05A8D2645406D4CF9E24E0F5BEF* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Entry_t4BAC0D992203B05A8D2645406D4CF9E24E0F5BEF value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___value_3), (void*)NULL);
	}
};
struct KeyValuePair_2U5BU5D_t6E8559F0FEDC952C1C97D197BC8286FDA93AB882  : public RuntimeArray
{
	ALIGN_FIELD (8) KeyValuePair_2_t669A5BAF37ED0ABC96A30943A6E7D0442310B936 m_Items[1];

	inline KeyValuePair_2_t669A5BAF37ED0ABC96A30943A6E7D0442310B936 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline KeyValuePair_2_t669A5BAF37ED0ABC96A30943A6E7D0442310B936* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, KeyValuePair_2_t669A5BAF37ED0ABC96A30943A6E7D0442310B936 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___value_1), (void*)NULL);
	}
	inline KeyValuePair_2_t669A5BAF37ED0ABC96A30943A6E7D0442310B936 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline KeyValuePair_2_t669A5BAF37ED0ABC96A30943A6E7D0442310B936* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, KeyValuePair_2_t669A5BAF37ED0ABC96A30943A6E7D0442310B936 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___value_1), (void*)NULL);
	}
};
struct EntryU5BU5D_t103180204D286AA5897443F7674A3782622F8744  : public RuntimeArray
{
	ALIGN_FIELD (8) Entry_t36D828B685CBBFA5F4D6FBBA12A076C10A21AB3C m_Items[1];

	inline Entry_t36D828B685CBBFA5F4D6FBBA12A076C10A21AB3C GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Entry_t36D828B685CBBFA5F4D6FBBA12A076C10A21AB3C* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Entry_t36D828B685CBBFA5F4D6FBBA12A076C10A21AB3C value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Entry_t36D828B685CBBFA5F4D6FBBA12A076C10A21AB3C GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Entry_t36D828B685CBBFA5F4D6FBBA12A076C10A21AB3C* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Entry_t36D828B685CBBFA5F4D6FBBA12A076C10A21AB3C value)
	{
		m_Items[index] = value;
	}
};
struct KeyValuePair_2U5BU5D_t65371EF32BF577225115397A64E346AE93FE927C  : public RuntimeArray
{
	ALIGN_FIELD (8) KeyValuePair_2_tE3EA5100FA35C94F54D8D5F93B806E7614C34DBD m_Items[1];

	inline KeyValuePair_2_tE3EA5100FA35C94F54D8D5F93B806E7614C34DBD GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline KeyValuePair_2_tE3EA5100FA35C94F54D8D5F93B806E7614C34DBD* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, KeyValuePair_2_tE3EA5100FA35C94F54D8D5F93B806E7614C34DBD value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline KeyValuePair_2_tE3EA5100FA35C94F54D8D5F93B806E7614C34DBD GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline KeyValuePair_2_tE3EA5100FA35C94F54D8D5F93B806E7614C34DBD* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, KeyValuePair_2_tE3EA5100FA35C94F54D8D5F93B806E7614C34DBD value)
	{
		m_Items[index] = value;
	}
};
struct EntryU5BU5D_tD89AF257A311DB3C41DA1BEE9D8F0B2E5EA7E86E  : public RuntimeArray
{
	ALIGN_FIELD (8) Entry_t3C43C931209AE339471E46F5C5C78DFFAD543BC9 m_Items[1];

	inline Entry_t3C43C931209AE339471E46F5C5C78DFFAD543BC9 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Entry_t3C43C931209AE339471E46F5C5C78DFFAD543BC9* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Entry_t3C43C931209AE339471E46F5C5C78DFFAD543BC9 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___value_3))->___m_Data_1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___value_3))->___m_Children_2), (void*)NULL);
		#endif
	}
	inline Entry_t3C43C931209AE339471E46F5C5C78DFFAD543BC9 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Entry_t3C43C931209AE339471E46F5C5C78DFFAD543BC9* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Entry_t3C43C931209AE339471E46F5C5C78DFFAD543BC9 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___value_3))->___m_Data_1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___value_3))->___m_Children_2), (void*)NULL);
		#endif
	}
};
struct KeyValuePair_2U5BU5D_t4A52453D810EE41FD9E873C0FA5C9F4500832CAC  : public RuntimeArray
{
	ALIGN_FIELD (8) KeyValuePair_2_tCA9456FCC0FBD03E0C9FF69F0B168B558FD2A5ED m_Items[1];

	inline KeyValuePair_2_tCA9456FCC0FBD03E0C9FF69F0B168B558FD2A5ED GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline KeyValuePair_2_tCA9456FCC0FBD03E0C9FF69F0B168B558FD2A5ED* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, KeyValuePair_2_tCA9456FCC0FBD03E0C9FF69F0B168B558FD2A5ED value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___value_1))->___m_Data_1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___value_1))->___m_Children_2), (void*)NULL);
		#endif
	}
	inline KeyValuePair_2_tCA9456FCC0FBD03E0C9FF69F0B168B558FD2A5ED GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline KeyValuePair_2_tCA9456FCC0FBD03E0C9FF69F0B168B558FD2A5ED* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, KeyValuePair_2_tCA9456FCC0FBD03E0C9FF69F0B168B558FD2A5ED value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___value_1))->___m_Data_1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___value_1))->___m_Children_2), (void*)NULL);
		#endif
	}
};
struct EntryU5BU5D_t6E8F51999B5C2D1A5E09B1963CF042E7B5CAA500  : public RuntimeArray
{
	ALIGN_FIELD (8) Entry_t740F919D5BA6D1FE201C58777E6EB966B35EE2EE m_Items[1];

	inline Entry_t740F919D5BA6D1FE201C58777E6EB966B35EE2EE GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Entry_t740F919D5BA6D1FE201C58777E6EB966B35EE2EE* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Entry_t740F919D5BA6D1FE201C58777E6EB966B35EE2EE value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Entry_t740F919D5BA6D1FE201C58777E6EB966B35EE2EE GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Entry_t740F919D5BA6D1FE201C58777E6EB966B35EE2EE* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Entry_t740F919D5BA6D1FE201C58777E6EB966B35EE2EE value)
	{
		m_Items[index] = value;
	}
};
struct KeyValuePair_2U5BU5D_t00F1189D6659F8334E1D51B328A743FBD809CFB6  : public RuntimeArray
{
	ALIGN_FIELD (8) KeyValuePair_2_t0EAC8DA2D95957AFA60DD198D013622384C0D213 m_Items[1];

	inline KeyValuePair_2_t0EAC8DA2D95957AFA60DD198D013622384C0D213 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline KeyValuePair_2_t0EAC8DA2D95957AFA60DD198D013622384C0D213* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, KeyValuePair_2_t0EAC8DA2D95957AFA60DD198D013622384C0D213 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline KeyValuePair_2_t0EAC8DA2D95957AFA60DD198D013622384C0D213 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline KeyValuePair_2_t0EAC8DA2D95957AFA60DD198D013622384C0D213* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, KeyValuePair_2_t0EAC8DA2D95957AFA60DD198D013622384C0D213 value)
	{
		m_Items[index] = value;
	}
};
struct EntryU5BU5D_t74939D41FA6DAF2CD4F7462D8AD016D48B99B8B7  : public RuntimeArray
{
	ALIGN_FIELD (8) Entry_t5A1DD43C826878A3853C7DF32E971C3D19805227 m_Items[1];

	inline Entry_t5A1DD43C826878A3853C7DF32E971C3D19805227 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Entry_t5A1DD43C826878A3853C7DF32E971C3D19805227* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Entry_t5A1DD43C826878A3853C7DF32E971C3D19805227 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Entry_t5A1DD43C826878A3853C7DF32E971C3D19805227 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Entry_t5A1DD43C826878A3853C7DF32E971C3D19805227* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Entry_t5A1DD43C826878A3853C7DF32E971C3D19805227 value)
	{
		m_Items[index] = value;
	}
};
struct KeyValuePair_2U5BU5D_t185EF1C22979145FBA3233EFBDF557ECDC08113C  : public RuntimeArray
{
	ALIGN_FIELD (8) KeyValuePair_2_t25871D01DA51BBB8CEF1F27E727B5D3A545FD4EF m_Items[1];

	inline KeyValuePair_2_t25871D01DA51BBB8CEF1F27E727B5D3A545FD4EF GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline KeyValuePair_2_t25871D01DA51BBB8CEF1F27E727B5D3A545FD4EF* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, KeyValuePair_2_t25871D01DA51BBB8CEF1F27E727B5D3A545FD4EF value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline KeyValuePair_2_t25871D01DA51BBB8CEF1F27E727B5D3A545FD4EF GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline KeyValuePair_2_t25871D01DA51BBB8CEF1F27E727B5D3A545FD4EF* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, KeyValuePair_2_t25871D01DA51BBB8CEF1F27E727B5D3A545FD4EF value)
	{
		m_Items[index] = value;
	}
};


IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DictionaryList_2_TryGetValue_m7583F8110805F5B5CB43FE5A2DD49108DF4B2D22_gshared (DictionaryList_2_t482ED02756A61A932B8B20ABAE5B6FA2F9260992* __this, RuntimeObject* ___0_key, List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D** ___1_values, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_m1A840355E8EDAECEA9D0C6F5E51B248FAA449CBD_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_RemoveAt_m54F62297ADEE4D4FDA697F49ED807BF901201B54_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___0_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Remove_m4DFA48F4CEB9169601E75FC28517C5C06EFA5AD7_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_mD15380A4ED7CDEE99EA45881577D26BA9CE1B849_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___0_key, RuntimeObject** ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m18EC2EB0F8F881C57774CFDDE6414E33F26F1539_gshared (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* __this, int32_t ___0_capacity, RuntimeObject* ___1_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_Initialize_m7165BFCECD406FEF2F6EA0DCDDF34B2450CA12E4_gshared (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* __this, int32_t ___0_capacity, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_t39F37BD252745ACD048E411385EBDFBABD5BBFAE* EqualityComparer_1_get_Default_m337E4360DF25127CED0E5DEC4827A905E8EBA5E0_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m7A61548B3B1ACAA1527C5C5E21965656EA2C14B5_gshared (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* __this, RuntimeObject* ___0_dictionary, RuntimeObject* ___1_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_mDD9B32011F99913F7C26C8CE44D64E35574D047E_gshared (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* __this, ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A KeyValuePair_2_get_Key_m31FF72E7D6E74CE5DB2E5B3B8FC6B66B7A452210_gshared_inline (KeyValuePair_2_t2A9D1B7DEBB99A68011F37B017FDD44CFE5AEC14* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* KeyValuePair_2_get_Value_mD933B25C1491C37A3BE3B1E709D8C1C02408E76C_gshared_inline (KeyValuePair_2_t2A9D1B7DEBB99A68011F37B017FDD44CFE5AEC14* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConditionalWeakTable_2_Add_mA45BB747BEE445F5A6D5ABC32B2070CAF5E9BE44_gshared (ConditionalWeakTable_2_t87BE12792DC61EC9AE17609EC1ACA0671B3F5605* __this, RuntimeObject* ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyCollection__ctor_mEFFF76B810FF7EC07A4071049F088B68FFD484C6_gshared (KeyCollection_t90C2F9D22B44E6B189DB7B61265585A859F93123* __this, Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* ___0_dictionary, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueCollection__ctor_m1B8096B8C7A5D20948283B1AD3A1C2B6032B93B7_gshared (ValueCollection_t5221C67954BD6EEB65BAE1FFD366E7538FDA0E1F* __this, Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* ___0_dictionary, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_FindEntry_m934C298F9973F16F2A755D65E374A6EE37302D63_gshared (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* __this, ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A ___0_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryInsert_mC32565FBB5F884CC065F1EE7E2BE4F250DF6AECD_gshared (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* __this, ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A ___0_key, RuntimeObject* ___1_value, uint8_t ___2_behavior, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* EqualityComparer_1_get_Default_mA2AD755281D23F496A2579884B39E30C13C208B3_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_m955C32400B1E624FFFA1E18F46FFBBB5963705B9_gshared (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* __this, ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A ___0_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_get_Count_mC9C0153BE4100526AEB467BE880EFBD8FB00D56F_gshared (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyValuePair_2__ctor_m7D13D8559B135D9A99FBA279CF4C2BDCB990CCF1_gshared (KeyValuePair_2_t2A9D1B7DEBB99A68011F37B017FDD44CFE5AEC14* __this, ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_m283889D2E2926F56ECD2EEA3767F2A21F0488164_gshared (Enumerator_t4C98DC0014F7B9B79F0AE8FCB4EC3987119C58D9* __this, Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* ___0_dictionary, int32_t ___1_getEnumeratorRetType, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_CopyTo_m154D895C0AEC517A3F2A7C886C23633368AFCFC3_gshared (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* __this, KeyValuePair_2U5BU5D_tF0A0AABC82DE189C18BE91E0D9CC0C01C2449460* ___0_array, int32_t ___1_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_2_GetHashCode_m02C84696292D14B993EDCDED373702CF8E5DB5F7_gshared (ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_m9C011EE1497A08BE38724E92602B8E81D73D2212_gshared (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ConditionalWeakTable_2_TryGetValue_mA6697354DA1D2A76999FFDCC072C62AC5C364124_gshared (ConditionalWeakTable_2_t87BE12792DC61EC9AE17609EC1ACA0671B3F5605* __this, RuntimeObject* ___0_key, RuntimeObject** ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ConditionalWeakTable_2_Remove_m51E45FAFE5B1D6E9FDA123477422367F1F215DE6_gshared (ConditionalWeakTable_2_t87BE12792DC61EC9AE17609EC1ACA0671B3F5605* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_m2D68A88747287ED742784209B25878766AF538DB_gshared (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* __this, int32_t ___0_newSize, bool ___1_forceNewHashCodes, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyCollection_t90C2F9D22B44E6B189DB7B61265585A859F93123* Dictionary_2_get_Keys_m48AD1CD8EB0B41F2D58FDFA10B92A85DB9933FF2_gshared (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_IsCompatibleKey_mBADA2F1594D5A4B02B457440963FC7AFCDCB6861_gshared (RuntimeObject* ___0_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisRuntimeObject_m27E41ACCEE817CDFBB9616ED62F233A4EA0D8A49_gshared (RuntimeObject* ___0_value, int32_t ___1_argName, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_m4C8CF6E01F44588133C83CC2DF0C9F47F1644BD0_gshared (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* __this, ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_m784FD7E9B0EA6F7F56F90480CDDE24E7FFBBC46D_gshared (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* __this, ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A ___0_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m1619CE263514C42D17636C8161035E73F3C84AB4_gshared (Dictionary_2_tA59FCDC7016E38E9B9B393997928B8B73460F4DF* __this, int32_t ___0_capacity, RuntimeObject* ___1_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_Initialize_m31D87D4F7A8DCFAAFFFF6A52E0591C0B731F1260_gshared (Dictionary_2_tA59FCDC7016E38E9B9B393997928B8B73460F4DF* __this, int32_t ___0_capacity, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_tAAD1A76C30594C4D736E586B3D77281A53A27399* EqualityComparer_1_get_Default_m5DCC393F5D59545D96AF9FF747F17C72EABB5D3B_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m9E2BEA796ED0C27EC6012E75B29E4D24D9DA5829_gshared (Dictionary_2_tA59FCDC7016E38E9B9B393997928B8B73460F4DF* __this, RuntimeObject* ___0_dictionary, RuntimeObject* ___1_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_m8D4CBB16CCDD13C30903509F4791575E70E33EE1_gshared (Dictionary_2_tA59FCDC7016E38E9B9B393997928B8B73460F4DF* __this, Guid_t ___0_key, int32_t ___1_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Guid_t KeyValuePair_2_get_Key_m190F16A3EFBED6D9959367C13683CCE34C111E13_gshared_inline (KeyValuePair_2_t103EED32AF196D79C0FCDE0CE9C589258217044B* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t KeyValuePair_2_get_Value_m165045D6956E45F7B10F7F2DFCD7A97140F887C2_gshared_inline (KeyValuePair_2_t103EED32AF196D79C0FCDE0CE9C589258217044B* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyCollection__ctor_m3EA02809C20A79E9A5401CA7CE99079BC321F53D_gshared (KeyCollection_t3230D276D9625DB17B194F08DFA6BF3606BE6267* __this, Dictionary_2_tA59FCDC7016E38E9B9B393997928B8B73460F4DF* ___0_dictionary, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueCollection__ctor_m12DA5B7C21992011B17AA4B0F6E5C33BE116B887_gshared (ValueCollection_tF196B3CD364A680EF74D9FA64A62B0A043188D5A* __this, Dictionary_2_tA59FCDC7016E38E9B9B393997928B8B73460F4DF* ___0_dictionary, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_FindEntry_m1EEF386C2CD5E506570FE2E3437136B78014BB5C_gshared (Dictionary_2_tA59FCDC7016E38E9B9B393997928B8B73460F4DF* __this, Guid_t ___0_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryInsert_mE55551BDAABAA23D3D45EFE2629ABC9B2AAE0AC6_gshared (Dictionary_2_tA59FCDC7016E38E9B9B393997928B8B73460F4DF* __this, Guid_t ___0_key, int32_t ___1_value, uint8_t ___2_behavior, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* EqualityComparer_1_get_Default_mF70F6C11A35B420DFA4628EE316B087F2DCB280C_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_m550226BFF4FEDC1F8755A47ECC4A463F36916411_gshared (Dictionary_2_tA59FCDC7016E38E9B9B393997928B8B73460F4DF* __this, Guid_t ___0_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_get_Count_m5E06E62014099F11845EDFAA7B53B04132BF73AC_gshared (Dictionary_2_tA59FCDC7016E38E9B9B393997928B8B73460F4DF* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyValuePair_2__ctor_m702C85B3C4B7309A5497C9FE8D3BE839467D0252_gshared (KeyValuePair_2_t103EED32AF196D79C0FCDE0CE9C589258217044B* __this, Guid_t ___0_key, int32_t ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_m1324FEBE39A953DCC364D370AD55281BB4C9478B_gshared (Enumerator_tCEDFFFDD2C31A66EC221FED52938C50D01A8ECEF* __this, Dictionary_2_tA59FCDC7016E38E9B9B393997928B8B73460F4DF* ___0_dictionary, int32_t ___1_getEnumeratorRetType, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_CopyTo_mF234D8B48C7D6488AF17560AFE447DD5E408B150_gshared (Dictionary_2_tA59FCDC7016E38E9B9B393997928B8B73460F4DF* __this, KeyValuePair_2U5BU5D_tE363BCACDAADBB4644E128BD0356204665EDF9C8* ___0_array, int32_t ___1_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_mDCE56449549A246DAE247AFB788D542BAE1B16FC_gshared (Dictionary_2_tA59FCDC7016E38E9B9B393997928B8B73460F4DF* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_mA763DBF0294B3CAA798AE0A737BA8D58FF462C96_gshared (Dictionary_2_tA59FCDC7016E38E9B9B393997928B8B73460F4DF* __this, int32_t ___0_newSize, bool ___1_forceNewHashCodes, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyCollection_t3230D276D9625DB17B194F08DFA6BF3606BE6267* Dictionary_2_get_Keys_mA894636E6D02C26187EC6BF2336CE2CFBFBCA71D_gshared (Dictionary_2_tA59FCDC7016E38E9B9B393997928B8B73460F4DF* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_IsCompatibleKey_mECCB826358789D5702F2260976F43907F8F934BC_gshared (RuntimeObject* ___0_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m0F7A078274F301B83DFC51191B3AFC763DE9C4D0_gshared (RuntimeObject* ___0_value, int32_t ___1_argName, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_m55BD33C380C42B78092B07D419F79D396A06AC80_gshared (Dictionary_2_tA59FCDC7016E38E9B9B393997928B8B73460F4DF* __this, Guid_t ___0_key, int32_t ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_m4595C29799CCA36600C8079DF01F40844CF933A6_gshared (Dictionary_2_tA59FCDC7016E38E9B9B393997928B8B73460F4DF* __this, Guid_t ___0_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mA7B8F56A2AD68581CBDCC5075D78B02A11435CDA_gshared (Dictionary_2_t9283A2526EFCCE82F0B8EBAF55887B5456F4480A* __this, int32_t ___0_capacity, RuntimeObject* ___1_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_Initialize_m6AB20947E419AA18B5C62E707D43A250FEDE0897_gshared (Dictionary_2_t9283A2526EFCCE82F0B8EBAF55887B5456F4480A* __this, int32_t ___0_capacity, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m79933243916DED9394A47C1F990E1F286F108101_gshared (Dictionary_2_t9283A2526EFCCE82F0B8EBAF55887B5456F4480A* __this, RuntimeObject* ___0_dictionary, RuntimeObject* ___1_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_m33B42C2DBAD6AA659C75AE78EB373B8577F9710B_gshared (Dictionary_2_t9283A2526EFCCE82F0B8EBAF55887B5456F4480A* __this, Guid_t ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Guid_t KeyValuePair_2_get_Key_mF91DB02B44EED18B0673E6F2CA20021DF3055E1F_gshared_inline (KeyValuePair_2_t669A5BAF37ED0ABC96A30943A6E7D0442310B936* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* KeyValuePair_2_get_Value_m2A56B01BF54F80055FA9D4B744AD9DBDC6EAE22D_gshared_inline (KeyValuePair_2_t669A5BAF37ED0ABC96A30943A6E7D0442310B936* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyCollection__ctor_m9D62A90356F2F0DD69A413279F538A225588C099_gshared (KeyCollection_t9DE8CFDEB3353C5383DB324226EACA5D0B37AA8E* __this, Dictionary_2_t9283A2526EFCCE82F0B8EBAF55887B5456F4480A* ___0_dictionary, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueCollection__ctor_m1C59220A433AAF467F2345DD5A30962774691151_gshared (ValueCollection_tDDD3D21DE247A37B6EFC39326193FCD731A2E296* __this, Dictionary_2_t9283A2526EFCCE82F0B8EBAF55887B5456F4480A* ___0_dictionary, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_FindEntry_mFAC5E9BB05EFD8B896D7B1EE3745B9141BC26025_gshared (Dictionary_2_t9283A2526EFCCE82F0B8EBAF55887B5456F4480A* __this, Guid_t ___0_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryInsert_mF645474D42EF0AB95FED32388F31D297085C2832_gshared (Dictionary_2_t9283A2526EFCCE82F0B8EBAF55887B5456F4480A* __this, Guid_t ___0_key, RuntimeObject* ___1_value, uint8_t ___2_behavior, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_mF52F83A179ACE0E308B993508A68C35895ED5D8F_gshared (Dictionary_2_t9283A2526EFCCE82F0B8EBAF55887B5456F4480A* __this, Guid_t ___0_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_get_Count_mF6D5ED77BA9FBAAD59EF5BAF8999C13EAB376006_gshared (Dictionary_2_t9283A2526EFCCE82F0B8EBAF55887B5456F4480A* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyValuePair_2__ctor_mAC13FF83E9E4285FF12BC8F080E0A84C51480735_gshared (KeyValuePair_2_t669A5BAF37ED0ABC96A30943A6E7D0442310B936* __this, Guid_t ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_m3FCE0E08BC1DB64AF0CC89FE635B29EEE5E82F04_gshared (Enumerator_t9FEF2496FA5DE5237C8DA17926FD4D968D685AB3* __this, Dictionary_2_t9283A2526EFCCE82F0B8EBAF55887B5456F4480A* ___0_dictionary, int32_t ___1_getEnumeratorRetType, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_CopyTo_m1062474EEC0D394425E27C1869DEA2BB8DF92B41_gshared (Dictionary_2_t9283A2526EFCCE82F0B8EBAF55887B5456F4480A* __this, KeyValuePair_2U5BU5D_t6E8559F0FEDC952C1C97D197BC8286FDA93AB882* ___0_array, int32_t ___1_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_mD0ED6CF807DB5F81267858F36B29C1A2C58C1173_gshared (Dictionary_2_t9283A2526EFCCE82F0B8EBAF55887B5456F4480A* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_mDB466CFDC6255A9CEE96C543CA0886C1D5D53CFB_gshared (Dictionary_2_t9283A2526EFCCE82F0B8EBAF55887B5456F4480A* __this, int32_t ___0_newSize, bool ___1_forceNewHashCodes, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyCollection_t9DE8CFDEB3353C5383DB324226EACA5D0B37AA8E* Dictionary_2_get_Keys_mFA34236E56D4ADBE51E2D5FA82DF698DA9A972FB_gshared (Dictionary_2_t9283A2526EFCCE82F0B8EBAF55887B5456F4480A* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_IsCompatibleKey_mEF045703C8867C43360D1550A1169ABB26E2F13B_gshared (RuntimeObject* ___0_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_m5C6C0F6A08D2742138B08FB9B91FA19B58F1F5D3_gshared (Dictionary_2_t9283A2526EFCCE82F0B8EBAF55887B5456F4480A* __this, Guid_t ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_mADEF13A6F00847BA930B57377C0F34719842FE6A_gshared (Dictionary_2_t9283A2526EFCCE82F0B8EBAF55887B5456F4480A* __this, Guid_t ___0_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m6289671CF9C2AE755A8ED3278FE9CA56171DEF17_gshared (Dictionary_2_t4D7978E5F7E236382AF32684305AC72452D49043* __this, int32_t ___0_capacity, RuntimeObject* ___1_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_Initialize_mA242B14841D13E405394EAB63CE60D83F0F5251B_gshared (Dictionary_2_t4D7978E5F7E236382AF32684305AC72452D49043* __this, int32_t ___0_capacity, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m87DBF533B1BCFEEA84EE0190E70277BFA1854B74_gshared (Dictionary_2_t4D7978E5F7E236382AF32684305AC72452D49043* __this, RuntimeObject* ___0_dictionary, RuntimeObject* ___1_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_m2E83AB53AA4F67FD870D568B7E0F5269F3C9EF2F_gshared (Dictionary_2_t4D7978E5F7E236382AF32684305AC72452D49043* __this, int32_t ___0_key, ContentHeightCacheInfo_tA616347D46981FC5684B6268FC7035C431E99FBC ___1_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t KeyValuePair_2_get_Key_mA7C09E323BC8D58366E676F2135E5B976A40E152_gshared_inline (KeyValuePair_2_tE3EA5100FA35C94F54D8D5F93B806E7614C34DBD* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ContentHeightCacheInfo_tA616347D46981FC5684B6268FC7035C431E99FBC KeyValuePair_2_get_Value_m3418A391AB44E3DC55D9F6B456C7E6E694A45062_gshared_inline (KeyValuePair_2_tE3EA5100FA35C94F54D8D5F93B806E7614C34DBD* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyCollection__ctor_m04155234C1C90297F973F2DD3B892015CF860306_gshared (KeyCollection_t1C0270D8CA819EF870A1AB2BDF71FF7D9967AC6C* __this, Dictionary_2_t4D7978E5F7E236382AF32684305AC72452D49043* ___0_dictionary, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueCollection__ctor_m6F4F3F916020065EFA67C145A6EDA70F624A5384_gshared (ValueCollection_t1A840A8972E8AE9C8564CF9D1EEC5519261BAFA9* __this, Dictionary_2_t4D7978E5F7E236382AF32684305AC72452D49043* ___0_dictionary, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_FindEntry_mD8B748D3A92124B5F9D01A9C0557BEEB772BD673_gshared (Dictionary_2_t4D7978E5F7E236382AF32684305AC72452D49043* __this, int32_t ___0_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryInsert_m099201DE2E21B09B51345FF7EF0960AC8BD70E0E_gshared (Dictionary_2_t4D7978E5F7E236382AF32684305AC72452D49043* __this, int32_t ___0_key, ContentHeightCacheInfo_tA616347D46981FC5684B6268FC7035C431E99FBC ___1_value, uint8_t ___2_behavior, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_t8EE005CC277EC77E0AFAB9930C9285E3DE4C677B* EqualityComparer_1_get_Default_mB3E88E8F0749A37FC3E4007A3F3142E8DE546515_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_m7EF408E5FE0D4F747EC426DE23450F54F779E67A_gshared (Dictionary_2_t4D7978E5F7E236382AF32684305AC72452D49043* __this, int32_t ___0_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_get_Count_m4816BCB730A3F3AF171687270CB4619FB3C44E1C_gshared (Dictionary_2_t4D7978E5F7E236382AF32684305AC72452D49043* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyValuePair_2__ctor_mE1295E1EB09A4C3624F079C94EE6A9ED1D66EE26_gshared (KeyValuePair_2_tE3EA5100FA35C94F54D8D5F93B806E7614C34DBD* __this, int32_t ___0_key, ContentHeightCacheInfo_tA616347D46981FC5684B6268FC7035C431E99FBC ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_m31B9A15C37D5A017654810B5B55B5C415CBAF885_gshared (Enumerator_tB7C64CFA6D1E8072BF063A54A9F6CB6B8021170F* __this, Dictionary_2_t4D7978E5F7E236382AF32684305AC72452D49043* ___0_dictionary, int32_t ___1_getEnumeratorRetType, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_CopyTo_m99769053B2973A908BB5E1F3B7547EA43A30C52B_gshared (Dictionary_2_t4D7978E5F7E236382AF32684305AC72452D49043* __this, KeyValuePair_2U5BU5D_t65371EF32BF577225115397A64E346AE93FE927C* ___0_array, int32_t ___1_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_m49A6E36229F30CC88FA8BD6C75190330D88E7D7D_gshared (Dictionary_2_t4D7978E5F7E236382AF32684305AC72452D49043* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_mD4C4C781B27ECB1928BEBC290BFC10D191798670_gshared (Dictionary_2_t4D7978E5F7E236382AF32684305AC72452D49043* __this, int32_t ___0_newSize, bool ___1_forceNewHashCodes, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyCollection_t1C0270D8CA819EF870A1AB2BDF71FF7D9967AC6C* Dictionary_2_get_Keys_m51677F3B9C4444ABDCE7161B61DB5210D2378079_gshared (Dictionary_2_t4D7978E5F7E236382AF32684305AC72452D49043* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_IsCompatibleKey_m078096C30896035127EB311E1323AD6D04F7B024_gshared (RuntimeObject* ___0_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisContentHeightCacheInfo_tA616347D46981FC5684B6268FC7035C431E99FBC_m1CB4F3E56295F4B5567E64280A4ACECF3FC671D6_gshared (RuntimeObject* ___0_value, int32_t ___1_argName, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_mA2D31862FA96D8794126CAA7B1E178B08B6BB566_gshared (Dictionary_2_t4D7978E5F7E236382AF32684305AC72452D49043* __this, int32_t ___0_key, ContentHeightCacheInfo_tA616347D46981FC5684B6268FC7035C431E99FBC ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_m39C81870CD15FA7F0BD586D3BCF55C5B1D7D4005_gshared (Dictionary_2_t4D7978E5F7E236382AF32684305AC72452D49043* __this, int32_t ___0_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mEDCF6D7DF49A4332BEC24CFBE3157E2598FC54F5_gshared (Dictionary_2_tC44035903CD447F30151D3470629A0598D22856F* __this, int32_t ___0_capacity, RuntimeObject* ___1_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_Initialize_m55DBA94CA01715093AF33B0FF44EB7AFD5AEAB36_gshared (Dictionary_2_tC44035903CD447F30151D3470629A0598D22856F* __this, int32_t ___0_capacity, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m2A43B8E808B5C24C12C2DAA6EF9747BB2AE8787B_gshared (Dictionary_2_tC44035903CD447F30151D3470629A0598D22856F* __this, RuntimeObject* ___0_dictionary, RuntimeObject* ___1_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_mFE603469AB888F7C8EF9DE3392E9461867390BDC_gshared (Dictionary_2_tC44035903CD447F30151D3470629A0598D22856F* __this, int32_t ___0_key, TreeViewItemData_1_t95D9721135F40D0DB3D221F8EB2543C396D350F4 ___1_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t KeyValuePair_2_get_Key_mD6A5670D5DD71BBE95D274ADC916CFD0F5E3FAA6_gshared_inline (KeyValuePair_2_tCA9456FCC0FBD03E0C9FF69F0B168B558FD2A5ED* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR TreeViewItemData_1_t95D9721135F40D0DB3D221F8EB2543C396D350F4 KeyValuePair_2_get_Value_m658D03DA62B8E16BD8C96D037C38C9AC87442BAF_gshared_inline (KeyValuePair_2_tCA9456FCC0FBD03E0C9FF69F0B168B558FD2A5ED* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyCollection__ctor_m6454D86CFBA0EE602C78B5A4BB6612FE16D59D00_gshared (KeyCollection_t27A4E9C75C7D4062FA62AB82C4F9EBE443BD465A* __this, Dictionary_2_tC44035903CD447F30151D3470629A0598D22856F* ___0_dictionary, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueCollection__ctor_m6BB7131D664E022D2E39E555E28E3E1E6675325F_gshared (ValueCollection_t155E307D9195A7BE8C4DE53C867A8CEBA24805BF* __this, Dictionary_2_tC44035903CD447F30151D3470629A0598D22856F* ___0_dictionary, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_FindEntry_mB1F48D02466EA489E158922AAE99F45DB56C9FB9_gshared (Dictionary_2_tC44035903CD447F30151D3470629A0598D22856F* __this, int32_t ___0_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryInsert_mAC235DEF75BD8560A1598E0744B7CC55359D6B4B_gshared (Dictionary_2_tC44035903CD447F30151D3470629A0598D22856F* __this, int32_t ___0_key, TreeViewItemData_1_t95D9721135F40D0DB3D221F8EB2543C396D350F4 ___1_value, uint8_t ___2_behavior, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_t8DFD15807C95203DA08FAD2838BD16CE1C70A17E* EqualityComparer_1_get_Default_m36D51346E7AD3770CF007C780BD7F59736E21F77_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_m0ABB3BBBBDA393DEDC19A0F0943D8AF9E58F785B_gshared (Dictionary_2_tC44035903CD447F30151D3470629A0598D22856F* __this, int32_t ___0_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_get_Count_mB6EB1F2269F19C3B1119FD6DDA8B51155F7BE2E3_gshared (Dictionary_2_tC44035903CD447F30151D3470629A0598D22856F* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyValuePair_2__ctor_mFF17374CE90C7FE231E65EAFF2287053FA1C9AC3_gshared (KeyValuePair_2_tCA9456FCC0FBD03E0C9FF69F0B168B558FD2A5ED* __this, int32_t ___0_key, TreeViewItemData_1_t95D9721135F40D0DB3D221F8EB2543C396D350F4 ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_m05BF5395EAD892FD0CB4F3C6C33C783FEBD9F063_gshared (Enumerator_t0BE77930571D15651FEF9D9D38DBD8CCC82633B9* __this, Dictionary_2_tC44035903CD447F30151D3470629A0598D22856F* ___0_dictionary, int32_t ___1_getEnumeratorRetType, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_CopyTo_mB0FEE83321F8E70FC1A5D1847B0EBFA5507A67E1_gshared (Dictionary_2_tC44035903CD447F30151D3470629A0598D22856F* __this, KeyValuePair_2U5BU5D_t4A52453D810EE41FD9E873C0FA5C9F4500832CAC* ___0_array, int32_t ___1_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_m6D62C4293D7571986913FF1E505B0090DF1D96B8_gshared (Dictionary_2_tC44035903CD447F30151D3470629A0598D22856F* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_mDA2C2B2AA9D036744EA1510458F902ACF49E6658_gshared (Dictionary_2_tC44035903CD447F30151D3470629A0598D22856F* __this, int32_t ___0_newSize, bool ___1_forceNewHashCodes, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyCollection_t27A4E9C75C7D4062FA62AB82C4F9EBE443BD465A* Dictionary_2_get_Keys_mCA75818A897B564BAA7874AA2D7F8E257A06BF0B_gshared (Dictionary_2_tC44035903CD447F30151D3470629A0598D22856F* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_IsCompatibleKey_mF8A281EB724D891BD9DF117DFFE2CC104420759C_gshared (RuntimeObject* ___0_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisTreeViewItemData_1_t95D9721135F40D0DB3D221F8EB2543C396D350F4_m66F50948C6CBCA9CDB992356871C2622CA4ED150_gshared (RuntimeObject* ___0_value, int32_t ___1_argName, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_m6ACCDAA15A3D3B734405727DF8AD5AD09BA14333_gshared (Dictionary_2_tC44035903CD447F30151D3470629A0598D22856F* __this, int32_t ___0_key, TreeViewItemData_1_t95D9721135F40D0DB3D221F8EB2543C396D350F4 ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_m66D807D27A003B8D2BAC644F46131821F92790CE_gshared (Dictionary_2_tC44035903CD447F30151D3470629A0598D22856F* __this, int32_t ___0_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mB9E422F28BC7E8D1302E87AA7D8AC6CFC64950EF_gshared (Dictionary_2_t01224C8DBCCFE276E97D2BF52F4D7B10D3642682* __this, int32_t ___0_capacity, RuntimeObject* ___1_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_Initialize_m94BC29643E386903C4BD1E14BFA63BE82988EE68_gshared (Dictionary_2_t01224C8DBCCFE276E97D2BF52F4D7B10D3642682* __this, int32_t ___0_capacity, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mC11BF75E2F3DCB9A0411B7ED8F06942BA0E86A29_gshared (Dictionary_2_t01224C8DBCCFE276E97D2BF52F4D7B10D3642682* __this, RuntimeObject* ___0_dictionary, RuntimeObject* ___1_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_m15404AE1ED9C4C7CF89DAEAB8C5F3280C7D115EB_gshared (Dictionary_2_t01224C8DBCCFE276E97D2BF52F4D7B10D3642682* __this, int32_t ___0_key, bool ___1_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t KeyValuePair_2_get_Key_m671CD723515F42017EA4D2DB01691D13288970A9_gshared_inline (KeyValuePair_2_t0EAC8DA2D95957AFA60DD198D013622384C0D213* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool KeyValuePair_2_get_Value_m00849F341D41ABD55D72D0701342145724AC3A9F_gshared_inline (KeyValuePair_2_t0EAC8DA2D95957AFA60DD198D013622384C0D213* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyCollection__ctor_m40D5DDD959361A7EBD659D91722CA5F015FDB893_gshared (KeyCollection_t66E188B36DF8E1A23EBDA7253CDCE978CD3EF298* __this, Dictionary_2_t01224C8DBCCFE276E97D2BF52F4D7B10D3642682* ___0_dictionary, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueCollection__ctor_m0031187CE28F9C4C0F5A5253924C7F751164DFA8_gshared (ValueCollection_t95D69F17F87935E5166EE0E3C174BB8A8F051F5B* __this, Dictionary_2_t01224C8DBCCFE276E97D2BF52F4D7B10D3642682* ___0_dictionary, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_FindEntry_mE1DD9E6586FB9B0C19DFB7EE7A3A9D8386D5D5D1_gshared (Dictionary_2_t01224C8DBCCFE276E97D2BF52F4D7B10D3642682* __this, int32_t ___0_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryInsert_mA1983D94216DE51D98CCD30629282266CCAFE97E_gshared (Dictionary_2_t01224C8DBCCFE276E97D2BF52F4D7B10D3642682* __this, int32_t ___0_key, bool ___1_value, uint8_t ___2_behavior, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_t97160852989689D9543E2E1EA7D7196DBEA5AEE4* EqualityComparer_1_get_Default_mBB75BC0723DFD7850F43E72E34026DD070CF5932_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_m516AA9DF9B695BC792DA56C301B4B069DE8E8F9E_gshared (Dictionary_2_t01224C8DBCCFE276E97D2BF52F4D7B10D3642682* __this, int32_t ___0_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_get_Count_mC916574C49D9A72EAB6F28C2C25FDB0614CE1C5E_gshared (Dictionary_2_t01224C8DBCCFE276E97D2BF52F4D7B10D3642682* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyValuePair_2__ctor_m593E407EEF9038F9C3E26BBE93DD316684F8BC7E_gshared (KeyValuePair_2_t0EAC8DA2D95957AFA60DD198D013622384C0D213* __this, int32_t ___0_key, bool ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_m2F677A930996556C63EB1D62D1929C1CF70BC4ED_gshared (Enumerator_t06874F6DC6BF37190C0F4C5F3BB89A8F4D960969* __this, Dictionary_2_t01224C8DBCCFE276E97D2BF52F4D7B10D3642682* ___0_dictionary, int32_t ___1_getEnumeratorRetType, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_CopyTo_m4E3689D9CDB6B183A42A99057BD45A0337224455_gshared (Dictionary_2_t01224C8DBCCFE276E97D2BF52F4D7B10D3642682* __this, KeyValuePair_2U5BU5D_t00F1189D6659F8334E1D51B328A743FBD809CFB6* ___0_array, int32_t ___1_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_m42FE4F09323494303E7B94C675C478CDCD657809_gshared (Dictionary_2_t01224C8DBCCFE276E97D2BF52F4D7B10D3642682* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_m8D3990FBC5AE9011BF34BCC6E1CC7C4AF00A84E4_gshared (Dictionary_2_t01224C8DBCCFE276E97D2BF52F4D7B10D3642682* __this, int32_t ___0_newSize, bool ___1_forceNewHashCodes, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyCollection_t66E188B36DF8E1A23EBDA7253CDCE978CD3EF298* Dictionary_2_get_Keys_mEDBAB5200E3CD3202D5F94E16F4DABEFF601DE5F_gshared (Dictionary_2_t01224C8DBCCFE276E97D2BF52F4D7B10D3642682* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_IsCompatibleKey_m93B719F22129BB5DA700F0F45427E1B8AD39C562_gshared (RuntimeObject* ___0_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m92ED6D35EB625EDC96D474780EA2DBE2E0A38D3B_gshared (RuntimeObject* ___0_value, int32_t ___1_argName, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_m266E81996A1E6BFCB7C91E78EC0DB1253655AD48_gshared (Dictionary_2_t01224C8DBCCFE276E97D2BF52F4D7B10D3642682* __this, int32_t ___0_key, bool ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_m5A6361833F0EDADF18530A95D2CF315A0319D8E0_gshared (Dictionary_2_t01224C8DBCCFE276E97D2BF52F4D7B10D3642682* __this, int32_t ___0_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mC6F01298B65357F322BEE96EE6AF4DC68C22B832_gshared (Dictionary_2_t760E9A9490B53715AE11CA76450386C19A39A0C8* __this, int32_t ___0_capacity, RuntimeObject* ___1_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_Initialize_m6E2468392BEC356F498A9CC84BE3FEBCC80DBF0C_gshared (Dictionary_2_t760E9A9490B53715AE11CA76450386C19A39A0C8* __this, int32_t ___0_capacity, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m2FBD8737309023A68D2E75E7E10381889E294752_gshared (Dictionary_2_t760E9A9490B53715AE11CA76450386C19A39A0C8* __this, RuntimeObject* ___0_dictionary, RuntimeObject* ___1_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_m65C453F1100868C469A8E4794AE6DCD76F6AA1A4_gshared (Dictionary_2_t760E9A9490B53715AE11CA76450386C19A39A0C8* __this, int32_t ___0_key, Il2CppChar ___1_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t KeyValuePair_2_get_Key_m8862066C052557662F7CFB385CBA6E42C8C92454_gshared_inline (KeyValuePair_2_t25871D01DA51BBB8CEF1F27E727B5D3A545FD4EF* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Il2CppChar KeyValuePair_2_get_Value_m6E082F30B5B753C3131FCA1A488A0963333AFD04_gshared_inline (KeyValuePair_2_t25871D01DA51BBB8CEF1F27E727B5D3A545FD4EF* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyCollection__ctor_m757446853A294CCE931D15B5EB195BB85CBA306B_gshared (KeyCollection_t3E33C2EB31F1F1EF4ADE3FFFBB7D11E563134D04* __this, Dictionary_2_t760E9A9490B53715AE11CA76450386C19A39A0C8* ___0_dictionary, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueCollection__ctor_mE012744172537231AC72E669D4FACA17961169E9_gshared (ValueCollection_tDBED056C1C402E2288827E2C0299F425713D8171* __this, Dictionary_2_t760E9A9490B53715AE11CA76450386C19A39A0C8* ___0_dictionary, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_FindEntry_m58E23BFC0BDBD1CC8AC1AD38C4A42190F024EF62_gshared (Dictionary_2_t760E9A9490B53715AE11CA76450386C19A39A0C8* __this, int32_t ___0_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryInsert_mE950A0E7B2E2D06C4599AB4713A970E9CF17C711_gshared (Dictionary_2_t760E9A9490B53715AE11CA76450386C19A39A0C8* __this, int32_t ___0_key, Il2CppChar ___1_value, uint8_t ___2_behavior, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_tCAA8B21BC7E1029BB1288DEAE6D8ACB730BC5D4B* EqualityComparer_1_get_Default_m1D7CFB300C5D4CDC1A3E2D90C684F5AD4C98B8CB_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_m3AF2AA4CD90907190268440760E0B2BBF55FAD21_gshared (Dictionary_2_t760E9A9490B53715AE11CA76450386C19A39A0C8* __this, int32_t ___0_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_get_Count_mF62BC02D0DF4F1E37D59F0D850131620B1FC4EEE_gshared (Dictionary_2_t760E9A9490B53715AE11CA76450386C19A39A0C8* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyValuePair_2__ctor_mF66F658CB0111305E284C4FD64B6FC4AD62EB5E3_gshared (KeyValuePair_2_t25871D01DA51BBB8CEF1F27E727B5D3A545FD4EF* __this, int32_t ___0_key, Il2CppChar ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_m06C5648CD941BE733FD754C942F410D9C85C3583_gshared (Enumerator_tCC8CFFFAC493A1DF0C77EE34CD9E2F5A669A0D88* __this, Dictionary_2_t760E9A9490B53715AE11CA76450386C19A39A0C8* ___0_dictionary, int32_t ___1_getEnumeratorRetType, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_CopyTo_m4D5CDF938A4188C7DC837512841EF76830A24F2A_gshared (Dictionary_2_t760E9A9490B53715AE11CA76450386C19A39A0C8* __this, KeyValuePair_2U5BU5D_t185EF1C22979145FBA3233EFBDF557ECDC08113C* ___0_array, int32_t ___1_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_mA87ED035CFF022A4C8B2B4E6D720EEB965ACE893_gshared (Dictionary_2_t760E9A9490B53715AE11CA76450386C19A39A0C8* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_mAA34C20A111880E1891639C7022D73FED4DCE18B_gshared (Dictionary_2_t760E9A9490B53715AE11CA76450386C19A39A0C8* __this, int32_t ___0_newSize, bool ___1_forceNewHashCodes, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyCollection_t3E33C2EB31F1F1EF4ADE3FFFBB7D11E563134D04* Dictionary_2_get_Keys_m28C150C463713CAC4B143915504A3B0597A68CDC_gshared (Dictionary_2_t760E9A9490B53715AE11CA76450386C19A39A0C8* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_IsCompatibleKey_mEA7DD561D5EC989C7D6E52D8242DAA108CC884CA_gshared (RuntimeObject* ___0_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m824F1B8830C5D9946D6CDF297C66FABC7E1A94F2_gshared (RuntimeObject* ___0_value, int32_t ___1_argName, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_mCDEFF5FEE05146FB5547F35FA1AC420B6E750E5F_gshared (Dictionary_2_t760E9A9490B53715AE11CA76450386C19A39A0C8* __this, int32_t ___0_key, Il2CppChar ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_mFEF31529C09939D463552C900419ABCC2B05B354_gshared (Dictionary_2_t760E9A9490B53715AE11CA76450386C19A39A0C8* __this, int32_t ___0_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void List_1_AddWithResize_m79A9BF770BEF9C06BE40D5401E55E375F2726CC4_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EqualityComparer_1_t39F37BD252745ACD048E411385EBDFBABD5BBFAE* EqualityComparer_1_CreateComparer_mE9DC7CAF58EE3B2D235851CCFF895CD1C51F3E6B_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* EqualityComparer_1_CreateComparer_mD2FA619307513193746FBEB5AE522FB54E21B634_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EqualityComparer_1_tAAD1A76C30594C4D736E586B3D77281A53A27399* EqualityComparer_1_CreateComparer_mD3D60BAB4A1E7DF8FDC8779F5A1A3104CAD5202A_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* EqualityComparer_1_CreateComparer_m432C82F7354C37E610794C1DA866DFA7DAC9C35E_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EqualityComparer_1_t8EE005CC277EC77E0AFAB9930C9285E3DE4C677B* EqualityComparer_1_CreateComparer_mCF9A6FD34089F19E4321806469AE45B2618C11CE_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EqualityComparer_1_t8DFD15807C95203DA08FAD2838BD16CE1C70A17E* EqualityComparer_1_CreateComparer_m41D90357AC3F6FAA8367BD3AC2D49DE5CD85ECC9_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EqualityComparer_1_t97160852989689D9543E2E1EA7D7196DBEA5AEE4* EqualityComparer_1_CreateComparer_m3BD7BED1F69ABEE55E320BA9CCFBB473E9F57C66_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EqualityComparer_1_tCAA8B21BC7E1029BB1288DEAE6D8ACB730BC5D4B* EqualityComparer_1_CreateComparer_m8D41903BD474DD9CEBD9B11C2D89FF5798C63F93_gshared (const RuntimeMethod* method) ;

IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DictionaryEntry__ctor_m2768353E53A75C4860E34B37DAF1342120C5D1EA (DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB* __this, RuntimeObject* ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) ;
inline bool DictionaryList_2_TryGetValue_m7583F8110805F5B5CB43FE5A2DD49108DF4B2D22 (DictionaryList_2_t482ED02756A61A932B8B20ABAE5B6FA2F9260992* __this, RuntimeObject* ___0_key, List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D** ___1_values, const RuntimeMethod* method)
{
	return ((  bool (*) (DictionaryList_2_t482ED02756A61A932B8B20ABAE5B6FA2F9260992*, RuntimeObject*, List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D**, const RuntimeMethod*))DictionaryList_2_TryGetValue_m7583F8110805F5B5CB43FE5A2DD49108DF4B2D22_gshared)(__this, ___0_key, ___1_values, method);
}
inline void Dictionary_2_set_Item_m735DCEC880A3C4930D44557AF9F397BD37AE875F (Dictionary_2_t07F043B93235170E47B40DB71B2E46256D11FD3A* __this, RuntimeObject* ___0_key, List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* ___1_value, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t07F043B93235170E47B40DB71B2E46256D11FD3A*, RuntimeObject*, List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, const RuntimeMethod*))Dictionary_2_set_Item_m1A840355E8EDAECEA9D0C6F5E51B248FAA449CBD_gshared)(__this, ___0_key, ___1_value, method);
}
inline void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, RuntimeObject*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___0_item, method);
}
inline void List_1_RemoveAt_m54F62297ADEE4D4FDA697F49ED807BF901201B54 (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	((  void (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, int32_t, const RuntimeMethod*))List_1_RemoveAt_m54F62297ADEE4D4FDA697F49ED807BF901201B54_gshared)(__this, ___0_index, method);
}
inline bool List_1_Remove_m4DFA48F4CEB9169601E75FC28517C5C06EFA5AD7 (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_item, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, RuntimeObject*, const RuntimeMethod*))List_1_Remove_m4DFA48F4CEB9169601E75FC28517C5C06EFA5AD7_gshared)(__this, ___0_item, method);
}
inline void List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690 (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
inline bool Dictionary_2_TryGetValue_m6ABC1A4567E6D66B97940C521E2070C885D0FA5C (Dictionary_2_t07F043B93235170E47B40DB71B2E46256D11FD3A* __this, RuntimeObject* ___0_key, List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D** ___1_value, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t07F043B93235170E47B40DB71B2E46256D11FD3A*, RuntimeObject*, List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D**, const RuntimeMethod*))Dictionary_2_TryGetValue_mD15380A4ED7CDEE99EA45881577D26BA9CE1B849_gshared)(__this, ___0_key, ___1_value, method);
}
inline void Dictionary_2__ctor_mF0CA0EA171277C940A07AC9D79E05452F1F806B7 (Dictionary_2_t07F043B93235170E47B40DB71B2E46256D11FD3A* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t07F043B93235170E47B40DB71B2E46256D11FD3A*, const RuntimeMethod*))Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared)(__this, method);
}
inline void Dictionary_2__ctor_m18EC2EB0F8F881C57774CFDDE6414E33F26F1539 (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* __this, int32_t ___0_capacity, RuntimeObject* ___1_comparer, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27*, int32_t, RuntimeObject*, const RuntimeMethod*))Dictionary_2__ctor_m18EC2EB0F8F881C57774CFDDE6414E33F26F1539_gshared)(__this, ___0_capacity, ___1_comparer, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentOutOfRangeException_m9B335696876184D17D1F8D7AF94C1B5B0869AA97 (int32_t ___0_argument, const RuntimeMethod* method) ;
inline int32_t Dictionary_2_Initialize_m7165BFCECD406FEF2F6EA0DCDDF34B2450CA12E4 (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* __this, int32_t ___0_capacity, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27*, int32_t, const RuntimeMethod*))Dictionary_2_Initialize_m7165BFCECD406FEF2F6EA0DCDDF34B2450CA12E4_gshared)(__this, ___0_capacity, method);
}
inline EqualityComparer_1_t39F37BD252745ACD048E411385EBDFBABD5BBFAE* EqualityComparer_1_get_Default_m337E4360DF25127CED0E5DEC4827A905E8EBA5E0_inline (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_t39F37BD252745ACD048E411385EBDFBABD5BBFAE* (*) (const RuntimeMethod*))EqualityComparer_1_get_Default_m337E4360DF25127CED0E5DEC4827A905E8EBA5E0_gshared_inline)(method);
}
inline void Dictionary_2__ctor_m7A61548B3B1ACAA1527C5C5E21965656EA2C14B5 (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* __this, RuntimeObject* ___0_dictionary, RuntimeObject* ___1_comparer, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*))Dictionary_2__ctor_m7A61548B3B1ACAA1527C5C5E21965656EA2C14B5_gshared)(__this, ___0_dictionary, ___1_comparer, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC (int32_t ___0_argument, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3 (RuntimeObject* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57 (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___0_handle, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC (Type_t* ___0_left, Type_t* ___1_right, const RuntimeMethod* method) ;
inline void Dictionary_2_Add_mDD9B32011F99913F7C26C8CE44D64E35574D047E (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* __this, ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27*, ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A, RuntimeObject*, const RuntimeMethod*))Dictionary_2_Add_mDD9B32011F99913F7C26C8CE44D64E35574D047E_gshared)(__this, ___0_key, ___1_value, method);
}
inline ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A KeyValuePair_2_get_Key_m31FF72E7D6E74CE5DB2E5B3B8FC6B66B7A452210_inline (KeyValuePair_2_t2A9D1B7DEBB99A68011F37B017FDD44CFE5AEC14* __this, const RuntimeMethod* method)
{
	return ((  ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A (*) (KeyValuePair_2_t2A9D1B7DEBB99A68011F37B017FDD44CFE5AEC14*, const RuntimeMethod*))KeyValuePair_2_get_Key_m31FF72E7D6E74CE5DB2E5B3B8FC6B66B7A452210_gshared_inline)(__this, method);
}
inline RuntimeObject* KeyValuePair_2_get_Value_mD933B25C1491C37A3BE3B1E709D8C1C02408E76C_inline (KeyValuePair_2_t2A9D1B7DEBB99A68011F37B017FDD44CFE5AEC14* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (KeyValuePair_2_t2A9D1B7DEBB99A68011F37B017FDD44CFE5AEC14*, const RuntimeMethod*))KeyValuePair_2_get_Value_mD933B25C1491C37A3BE3B1E709D8C1C02408E76C_gshared_inline)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* HashHelpers_get_SerializationInfoTable_m8C17D5483B39B68897AEFFD14A9E139AF858222F (const RuntimeMethod* method) ;
inline void ConditionalWeakTable_2_Add_mF98A2811734A37D856C622E7783FD7502AA7F0B7 (ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* __this, RuntimeObject* ___0_key, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___1_value, const RuntimeMethod* method)
{
	((  void (*) (ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858*, RuntimeObject*, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37*, const RuntimeMethod*))ConditionalWeakTable_2_Add_mA45BB747BEE445F5A6D5ABC32B2070CAF5E9BE44_gshared)(__this, ___0_key, ___1_value, method);
}
inline void KeyCollection__ctor_mEFFF76B810FF7EC07A4071049F088B68FFD484C6 (KeyCollection_t90C2F9D22B44E6B189DB7B61265585A859F93123* __this, Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* ___0_dictionary, const RuntimeMethod* method)
{
	((  void (*) (KeyCollection_t90C2F9D22B44E6B189DB7B61265585A859F93123*, Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27*, const RuntimeMethod*))KeyCollection__ctor_mEFFF76B810FF7EC07A4071049F088B68FFD484C6_gshared)(__this, ___0_dictionary, method);
}
inline void ValueCollection__ctor_m1B8096B8C7A5D20948283B1AD3A1C2B6032B93B7 (ValueCollection_t5221C67954BD6EEB65BAE1FFD366E7538FDA0E1F* __this, Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* ___0_dictionary, const RuntimeMethod* method)
{
	((  void (*) (ValueCollection_t5221C67954BD6EEB65BAE1FFD366E7538FDA0E1F*, Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27*, const RuntimeMethod*))ValueCollection__ctor_m1B8096B8C7A5D20948283B1AD3A1C2B6032B93B7_gshared)(__this, ___0_dictionary, method);
}
inline int32_t Dictionary_2_FindEntry_m934C298F9973F16F2A755D65E374A6EE37302D63 (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* __this, ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A ___0_key, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27*, ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A, const RuntimeMethod*))Dictionary_2_FindEntry_m934C298F9973F16F2A755D65E374A6EE37302D63_gshared)(__this, ___0_key, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowKeyNotFoundException_m6A17735FA486AD43F2488DE39B755AC60BC99CE7 (RuntimeObject* ___0_key, const RuntimeMethod* method) ;
inline bool Dictionary_2_TryInsert_mC32565FBB5F884CC065F1EE7E2BE4F250DF6AECD (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* __this, ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A ___0_key, RuntimeObject* ___1_value, uint8_t ___2_behavior, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27*, ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A, RuntimeObject*, uint8_t, const RuntimeMethod*))Dictionary_2_TryInsert_mC32565FBB5F884CC065F1EE7E2BE4F250DF6AECD_gshared)(__this, ___0_key, ___1_value, ___2_behavior, method);
}
inline EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* EqualityComparer_1_get_Default_mA2AD755281D23F496A2579884B39E30C13C208B3_inline (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* (*) (const RuntimeMethod*))EqualityComparer_1_get_Default_mA2AD755281D23F496A2579884B39E30C13C208B3_gshared_inline)(method);
}
inline bool Dictionary_2_Remove_m955C32400B1E624FFFA1E18F46FFBBB5963705B9 (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* __this, ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A ___0_key, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27*, ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A, const RuntimeMethod*))Dictionary_2_Remove_m955C32400B1E624FFFA1E18F46FFBBB5963705B9_gshared)(__this, ___0_key, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB (RuntimeArray* ___0_array, int32_t ___1_index, int32_t ___2_length, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F (const RuntimeMethod* method) ;
inline int32_t Dictionary_2_get_Count_mC9C0153BE4100526AEB467BE880EFBD8FB00D56F (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27*, const RuntimeMethod*))Dictionary_2_get_Count_mC9C0153BE4100526AEB467BE880EFBD8FB00D56F_gshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA (int32_t ___0_resource, const RuntimeMethod* method) ;
inline void KeyValuePair_2__ctor_m7D13D8559B135D9A99FBA279CF4C2BDCB990CCF1 (KeyValuePair_2_t2A9D1B7DEBB99A68011F37B017FDD44CFE5AEC14* __this, ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method)
{
	((  void (*) (KeyValuePair_2_t2A9D1B7DEBB99A68011F37B017FDD44CFE5AEC14*, ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A, RuntimeObject*, const RuntimeMethod*))KeyValuePair_2__ctor_m7D13D8559B135D9A99FBA279CF4C2BDCB990CCF1_gshared)(__this, ___0_key, ___1_value, method);
}
inline void Enumerator__ctor_m283889D2E2926F56ECD2EEA3767F2A21F0488164 (Enumerator_t4C98DC0014F7B9B79F0AE8FCB4EC3987119C58D9* __this, Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* ___0_dictionary, int32_t ___1_getEnumeratorRetType, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t4C98DC0014F7B9B79F0AE8FCB4EC3987119C58D9*, Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27*, int32_t, const RuntimeMethod*))Enumerator__ctor_m283889D2E2926F56ECD2EEA3767F2A21F0488164_gshared)(__this, ___0_dictionary, ___1_getEnumeratorRetType, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerializationInfo_AddValue_m9D6ADD10966D1FE8D19050F3A269747C23FE9FC4 (SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* __this, String_t* ___0_name, int32_t ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerializationInfo_AddValue_m1AD59BBF8C3129142943D3F298ADF09FF123C199 (SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* __this, String_t* ___0_name, RuntimeObject* ___1_value, Type_t* ___2_type, const RuntimeMethod* method) ;
inline void Dictionary_2_CopyTo_m154D895C0AEC517A3F2A7C886C23633368AFCFC3 (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* __this, KeyValuePair_2U5BU5D_tF0A0AABC82DE189C18BE91E0D9CC0C01C2449460* ___0_array, int32_t ___1_index, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27*, KeyValuePair_2U5BU5D_tF0A0AABC82DE189C18BE91E0D9CC0C01C2449460*, int32_t, const RuntimeMethod*))Dictionary_2_CopyTo_m154D895C0AEC517A3F2A7C886C23633368AFCFC3_gshared)(__this, ___0_array, ___1_index, method);
}
inline int32_t ValueTuple_2_GetHashCode_m02C84696292D14B993EDCDED373702CF8E5DB5F7 (ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A*, const RuntimeMethod*))ValueTuple_2_GetHashCode_m02C84696292D14B993EDCDED373702CF8E5DB5F7_gshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0 (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HashHelpers_GetPrime_m5B7AE10D5E76267579296C8F2CB8464AC2DE8472 (int32_t ___0_min, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowAddingDuplicateWithKeyArgumentException_m013C856C16A63018719A6096727CB43E1918CDE5 (RuntimeObject* ___0_key, const RuntimeMethod* method) ;
inline void Dictionary_2_Resize_m9C011EE1497A08BE38724E92602B8E81D73D2212 (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27*, const RuntimeMethod*))Dictionary_2_Resize_m9C011EE1497A08BE38724E92602B8E81D73D2212_gshared)(__this, method);
}
inline bool ConditionalWeakTable_2_TryGetValue_m8AB467BA44D1FF9EBDB9735CED88B0D67AC6403F (ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* __this, RuntimeObject* ___0_key, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37** ___1_value, const RuntimeMethod* method)
{
	return ((  bool (*) (ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858*, RuntimeObject*, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37**, const RuntimeMethod*))ConditionalWeakTable_2_TryGetValue_mA6697354DA1D2A76999FFDCC072C62AC5C364124_gshared)(__this, ___0_key, ___1_value, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SerializationInfo_GetInt32_m7731402825C7FC8D0673F7610D555615F95E4FB5 (SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* __this, String_t* ___0_name, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SerializationInfo_GetValue_mE6091C2E906E113455D05E734C86F43B8E1D1034 (SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* __this, String_t* ___0_name, Type_t* ___1_type, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowSerializationException_m03BE2B48CD3617C32FBCEE16030F7C5563E04E16 (int32_t ___0_resource, const RuntimeMethod* method) ;
inline bool ConditionalWeakTable_2_Remove_mEA61545EA43662F3718895F4E435A1F3EFB9756E (ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* __this, RuntimeObject* ___0_key, const RuntimeMethod* method)
{
	return ((  bool (*) (ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858*, RuntimeObject*, const RuntimeMethod*))ConditionalWeakTable_2_Remove_m51E45FAFE5B1D6E9FDA123477422367F1F215DE6_gshared)(__this, ___0_key, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HashHelpers_ExpandPrime_m9A35EC171AA0EA16F7C9F71EE6FAD5A82565ADB9 (int32_t ___0_oldSize, const RuntimeMethod* method) ;
inline void Dictionary_2_Resize_m2D68A88747287ED742784209B25878766AF538DB (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* __this, int32_t ___0_newSize, bool ___1_forceNewHashCodes, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27*, int32_t, bool, const RuntimeMethod*))Dictionary_2_Resize_m2D68A88747287ED742784209B25878766AF538DB_gshared)(__this, ___0_newSize, ___1_forceNewHashCodes, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41 (RuntimeArray* ___0_sourceArray, int32_t ___1_sourceIndex, RuntimeArray* ___2_destinationArray, int32_t ___3_destinationIndex, int32_t ___4_length, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F (RuntimeArray* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC (RuntimeArray* __this, int32_t ___0_dimension, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57 (RuntimeArray* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58 (const RuntimeMethod* method) ;
inline KeyCollection_t90C2F9D22B44E6B189DB7B61265585A859F93123* Dictionary_2_get_Keys_m48AD1CD8EB0B41F2D58FDFA10B92A85DB9933FF2 (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* __this, const RuntimeMethod* method)
{
	return ((  KeyCollection_t90C2F9D22B44E6B189DB7B61265585A859F93123* (*) (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27*, const RuntimeMethod*))Dictionary_2_get_Keys_m48AD1CD8EB0B41F2D58FDFA10B92A85DB9933FF2_gshared)(__this, method);
}
inline bool Dictionary_2_IsCompatibleKey_mBADA2F1594D5A4B02B457440963FC7AFCDCB6861 (RuntimeObject* ___0_key, const RuntimeMethod* method)
{
	return ((  bool (*) (RuntimeObject*, const RuntimeMethod*))Dictionary_2_IsCompatibleKey_mBADA2F1594D5A4B02B457440963FC7AFCDCB6861_gshared)(___0_key, method);
}
inline void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisRuntimeObject_m27E41ACCEE817CDFBB9616ED62F233A4EA0D8A49 (RuntimeObject* ___0_value, int32_t ___1_argName, const RuntimeMethod* method)
{
	((  void (*) (RuntimeObject*, int32_t, const RuntimeMethod*))ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisRuntimeObject_m27E41ACCEE817CDFBB9616ED62F233A4EA0D8A49_gshared)(___0_value, ___1_argName, method);
}
inline void Dictionary_2_set_Item_m4C8CF6E01F44588133C83CC2DF0C9F47F1644BD0 (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* __this, ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27*, ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A, RuntimeObject*, const RuntimeMethod*))Dictionary_2_set_Item_m4C8CF6E01F44588133C83CC2DF0C9F47F1644BD0_gshared)(__this, ___0_key, ___1_value, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowWrongValueTypeArgumentException_mC1A6BBE43C360583C1E2C463D5B0AADF1E3E1910 (RuntimeObject* ___0_value, Type_t* ___1_targetType, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowWrongKeyTypeArgumentException_m90E5BCE2CB10EEC16F254C237121C6816C4D6982 (RuntimeObject* ___0_key, Type_t* ___1_targetType, const RuntimeMethod* method) ;
inline bool Dictionary_2_ContainsKey_m784FD7E9B0EA6F7F56F90480CDDE24E7FFBBC46D (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* __this, ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A ___0_key, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27*, ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A, const RuntimeMethod*))Dictionary_2_ContainsKey_m784FD7E9B0EA6F7F56F90480CDDE24E7FFBBC46D_gshared)(__this, ___0_key, method);
}
inline void Dictionary_2__ctor_m1619CE263514C42D17636C8161035E73F3C84AB4 (Dictionary_2_tA59FCDC7016E38E9B9B393997928B8B73460F4DF* __this, int32_t ___0_capacity, RuntimeObject* ___1_comparer, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tA59FCDC7016E38E9B9B393997928B8B73460F4DF*, int32_t, RuntimeObject*, const RuntimeMethod*))Dictionary_2__ctor_m1619CE263514C42D17636C8161035E73F3C84AB4_gshared)(__this, ___0_capacity, ___1_comparer, method);
}
inline int32_t Dictionary_2_Initialize_m31D87D4F7A8DCFAAFFFF6A52E0591C0B731F1260 (Dictionary_2_tA59FCDC7016E38E9B9B393997928B8B73460F4DF* __this, int32_t ___0_capacity, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Dictionary_2_tA59FCDC7016E38E9B9B393997928B8B73460F4DF*, int32_t, const RuntimeMethod*))Dictionary_2_Initialize_m31D87D4F7A8DCFAAFFFF6A52E0591C0B731F1260_gshared)(__this, ___0_capacity, method);
}
inline EqualityComparer_1_tAAD1A76C30594C4D736E586B3D77281A53A27399* EqualityComparer_1_get_Default_m5DCC393F5D59545D96AF9FF747F17C72EABB5D3B_inline (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_tAAD1A76C30594C4D736E586B3D77281A53A27399* (*) (const RuntimeMethod*))EqualityComparer_1_get_Default_m5DCC393F5D59545D96AF9FF747F17C72EABB5D3B_gshared_inline)(method);
}
inline void Dictionary_2__ctor_m9E2BEA796ED0C27EC6012E75B29E4D24D9DA5829 (Dictionary_2_tA59FCDC7016E38E9B9B393997928B8B73460F4DF* __this, RuntimeObject* ___0_dictionary, RuntimeObject* ___1_comparer, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tA59FCDC7016E38E9B9B393997928B8B73460F4DF*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*))Dictionary_2__ctor_m9E2BEA796ED0C27EC6012E75B29E4D24D9DA5829_gshared)(__this, ___0_dictionary, ___1_comparer, method);
}
inline void Dictionary_2_Add_m8D4CBB16CCDD13C30903509F4791575E70E33EE1 (Dictionary_2_tA59FCDC7016E38E9B9B393997928B8B73460F4DF* __this, Guid_t ___0_key, int32_t ___1_value, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tA59FCDC7016E38E9B9B393997928B8B73460F4DF*, Guid_t, int32_t, const RuntimeMethod*))Dictionary_2_Add_m8D4CBB16CCDD13C30903509F4791575E70E33EE1_gshared)(__this, ___0_key, ___1_value, method);
}
inline Guid_t KeyValuePair_2_get_Key_m190F16A3EFBED6D9959367C13683CCE34C111E13_inline (KeyValuePair_2_t103EED32AF196D79C0FCDE0CE9C589258217044B* __this, const RuntimeMethod* method)
{
	return ((  Guid_t (*) (KeyValuePair_2_t103EED32AF196D79C0FCDE0CE9C589258217044B*, const RuntimeMethod*))KeyValuePair_2_get_Key_m190F16A3EFBED6D9959367C13683CCE34C111E13_gshared_inline)(__this, method);
}
inline int32_t KeyValuePair_2_get_Value_m165045D6956E45F7B10F7F2DFCD7A97140F887C2_inline (KeyValuePair_2_t103EED32AF196D79C0FCDE0CE9C589258217044B* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (KeyValuePair_2_t103EED32AF196D79C0FCDE0CE9C589258217044B*, const RuntimeMethod*))KeyValuePair_2_get_Value_m165045D6956E45F7B10F7F2DFCD7A97140F887C2_gshared_inline)(__this, method);
}
inline void KeyCollection__ctor_m3EA02809C20A79E9A5401CA7CE99079BC321F53D (KeyCollection_t3230D276D9625DB17B194F08DFA6BF3606BE6267* __this, Dictionary_2_tA59FCDC7016E38E9B9B393997928B8B73460F4DF* ___0_dictionary, const RuntimeMethod* method)
{
	((  void (*) (KeyCollection_t3230D276D9625DB17B194F08DFA6BF3606BE6267*, Dictionary_2_tA59FCDC7016E38E9B9B393997928B8B73460F4DF*, const RuntimeMethod*))KeyCollection__ctor_m3EA02809C20A79E9A5401CA7CE99079BC321F53D_gshared)(__this, ___0_dictionary, method);
}
inline void ValueCollection__ctor_m12DA5B7C21992011B17AA4B0F6E5C33BE116B887 (ValueCollection_tF196B3CD364A680EF74D9FA64A62B0A043188D5A* __this, Dictionary_2_tA59FCDC7016E38E9B9B393997928B8B73460F4DF* ___0_dictionary, const RuntimeMethod* method)
{
	((  void (*) (ValueCollection_tF196B3CD364A680EF74D9FA64A62B0A043188D5A*, Dictionary_2_tA59FCDC7016E38E9B9B393997928B8B73460F4DF*, const RuntimeMethod*))ValueCollection__ctor_m12DA5B7C21992011B17AA4B0F6E5C33BE116B887_gshared)(__this, ___0_dictionary, method);
}
inline int32_t Dictionary_2_FindEntry_m1EEF386C2CD5E506570FE2E3437136B78014BB5C (Dictionary_2_tA59FCDC7016E38E9B9B393997928B8B73460F4DF* __this, Guid_t ___0_key, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Dictionary_2_tA59FCDC7016E38E9B9B393997928B8B73460F4DF*, Guid_t, const RuntimeMethod*))Dictionary_2_FindEntry_m1EEF386C2CD5E506570FE2E3437136B78014BB5C_gshared)(__this, ___0_key, method);
}
inline bool Dictionary_2_TryInsert_mE55551BDAABAA23D3D45EFE2629ABC9B2AAE0AC6 (Dictionary_2_tA59FCDC7016E38E9B9B393997928B8B73460F4DF* __this, Guid_t ___0_key, int32_t ___1_value, uint8_t ___2_behavior, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_tA59FCDC7016E38E9B9B393997928B8B73460F4DF*, Guid_t, int32_t, uint8_t, const RuntimeMethod*))Dictionary_2_TryInsert_mE55551BDAABAA23D3D45EFE2629ABC9B2AAE0AC6_gshared)(__this, ___0_key, ___1_value, ___2_behavior, method);
}
inline EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* EqualityComparer_1_get_Default_mF70F6C11A35B420DFA4628EE316B087F2DCB280C_inline (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* (*) (const RuntimeMethod*))EqualityComparer_1_get_Default_mF70F6C11A35B420DFA4628EE316B087F2DCB280C_gshared_inline)(method);
}
inline bool Dictionary_2_Remove_m550226BFF4FEDC1F8755A47ECC4A463F36916411 (Dictionary_2_tA59FCDC7016E38E9B9B393997928B8B73460F4DF* __this, Guid_t ___0_key, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_tA59FCDC7016E38E9B9B393997928B8B73460F4DF*, Guid_t, const RuntimeMethod*))Dictionary_2_Remove_m550226BFF4FEDC1F8755A47ECC4A463F36916411_gshared)(__this, ___0_key, method);
}
inline int32_t Dictionary_2_get_Count_m5E06E62014099F11845EDFAA7B53B04132BF73AC (Dictionary_2_tA59FCDC7016E38E9B9B393997928B8B73460F4DF* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Dictionary_2_tA59FCDC7016E38E9B9B393997928B8B73460F4DF*, const RuntimeMethod*))Dictionary_2_get_Count_m5E06E62014099F11845EDFAA7B53B04132BF73AC_gshared)(__this, method);
}
inline void KeyValuePair_2__ctor_m702C85B3C4B7309A5497C9FE8D3BE839467D0252 (KeyValuePair_2_t103EED32AF196D79C0FCDE0CE9C589258217044B* __this, Guid_t ___0_key, int32_t ___1_value, const RuntimeMethod* method)
{
	((  void (*) (KeyValuePair_2_t103EED32AF196D79C0FCDE0CE9C589258217044B*, Guid_t, int32_t, const RuntimeMethod*))KeyValuePair_2__ctor_m702C85B3C4B7309A5497C9FE8D3BE839467D0252_gshared)(__this, ___0_key, ___1_value, method);
}
inline void Enumerator__ctor_m1324FEBE39A953DCC364D370AD55281BB4C9478B (Enumerator_tCEDFFFDD2C31A66EC221FED52938C50D01A8ECEF* __this, Dictionary_2_tA59FCDC7016E38E9B9B393997928B8B73460F4DF* ___0_dictionary, int32_t ___1_getEnumeratorRetType, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tCEDFFFDD2C31A66EC221FED52938C50D01A8ECEF*, Dictionary_2_tA59FCDC7016E38E9B9B393997928B8B73460F4DF*, int32_t, const RuntimeMethod*))Enumerator__ctor_m1324FEBE39A953DCC364D370AD55281BB4C9478B_gshared)(__this, ___0_dictionary, ___1_getEnumeratorRetType, method);
}
inline void Dictionary_2_CopyTo_mF234D8B48C7D6488AF17560AFE447DD5E408B150 (Dictionary_2_tA59FCDC7016E38E9B9B393997928B8B73460F4DF* __this, KeyValuePair_2U5BU5D_tE363BCACDAADBB4644E128BD0356204665EDF9C8* ___0_array, int32_t ___1_index, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tA59FCDC7016E38E9B9B393997928B8B73460F4DF*, KeyValuePair_2U5BU5D_tE363BCACDAADBB4644E128BD0356204665EDF9C8*, int32_t, const RuntimeMethod*))Dictionary_2_CopyTo_mF234D8B48C7D6488AF17560AFE447DD5E408B150_gshared)(__this, ___0_array, ___1_index, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Guid_GetHashCode_m239B7679BB9ED5A207B3D2F858B5F30FFC455408 (Guid_t* __this, const RuntimeMethod* method) ;
inline void Dictionary_2_Resize_mDCE56449549A246DAE247AFB788D542BAE1B16FC (Dictionary_2_tA59FCDC7016E38E9B9B393997928B8B73460F4DF* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tA59FCDC7016E38E9B9B393997928B8B73460F4DF*, const RuntimeMethod*))Dictionary_2_Resize_mDCE56449549A246DAE247AFB788D542BAE1B16FC_gshared)(__this, method);
}
inline void Dictionary_2_Resize_mA763DBF0294B3CAA798AE0A737BA8D58FF462C96 (Dictionary_2_tA59FCDC7016E38E9B9B393997928B8B73460F4DF* __this, int32_t ___0_newSize, bool ___1_forceNewHashCodes, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tA59FCDC7016E38E9B9B393997928B8B73460F4DF*, int32_t, bool, const RuntimeMethod*))Dictionary_2_Resize_mA763DBF0294B3CAA798AE0A737BA8D58FF462C96_gshared)(__this, ___0_newSize, ___1_forceNewHashCodes, method);
}
inline KeyCollection_t3230D276D9625DB17B194F08DFA6BF3606BE6267* Dictionary_2_get_Keys_mA894636E6D02C26187EC6BF2336CE2CFBFBCA71D (Dictionary_2_tA59FCDC7016E38E9B9B393997928B8B73460F4DF* __this, const RuntimeMethod* method)
{
	return ((  KeyCollection_t3230D276D9625DB17B194F08DFA6BF3606BE6267* (*) (Dictionary_2_tA59FCDC7016E38E9B9B393997928B8B73460F4DF*, const RuntimeMethod*))Dictionary_2_get_Keys_mA894636E6D02C26187EC6BF2336CE2CFBFBCA71D_gshared)(__this, method);
}
inline bool Dictionary_2_IsCompatibleKey_mECCB826358789D5702F2260976F43907F8F934BC (RuntimeObject* ___0_key, const RuntimeMethod* method)
{
	return ((  bool (*) (RuntimeObject*, const RuntimeMethod*))Dictionary_2_IsCompatibleKey_mECCB826358789D5702F2260976F43907F8F934BC_gshared)(___0_key, method);
}
inline void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m0F7A078274F301B83DFC51191B3AFC763DE9C4D0 (RuntimeObject* ___0_value, int32_t ___1_argName, const RuntimeMethod* method)
{
	((  void (*) (RuntimeObject*, int32_t, const RuntimeMethod*))ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m0F7A078274F301B83DFC51191B3AFC763DE9C4D0_gshared)(___0_value, ___1_argName, method);
}
inline void Dictionary_2_set_Item_m55BD33C380C42B78092B07D419F79D396A06AC80 (Dictionary_2_tA59FCDC7016E38E9B9B393997928B8B73460F4DF* __this, Guid_t ___0_key, int32_t ___1_value, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tA59FCDC7016E38E9B9B393997928B8B73460F4DF*, Guid_t, int32_t, const RuntimeMethod*))Dictionary_2_set_Item_m55BD33C380C42B78092B07D419F79D396A06AC80_gshared)(__this, ___0_key, ___1_value, method);
}
inline bool Dictionary_2_ContainsKey_m4595C29799CCA36600C8079DF01F40844CF933A6 (Dictionary_2_tA59FCDC7016E38E9B9B393997928B8B73460F4DF* __this, Guid_t ___0_key, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_tA59FCDC7016E38E9B9B393997928B8B73460F4DF*, Guid_t, const RuntimeMethod*))Dictionary_2_ContainsKey_m4595C29799CCA36600C8079DF01F40844CF933A6_gshared)(__this, ___0_key, method);
}
inline void Dictionary_2__ctor_mA7B8F56A2AD68581CBDCC5075D78B02A11435CDA (Dictionary_2_t9283A2526EFCCE82F0B8EBAF55887B5456F4480A* __this, int32_t ___0_capacity, RuntimeObject* ___1_comparer, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t9283A2526EFCCE82F0B8EBAF55887B5456F4480A*, int32_t, RuntimeObject*, const RuntimeMethod*))Dictionary_2__ctor_mA7B8F56A2AD68581CBDCC5075D78B02A11435CDA_gshared)(__this, ___0_capacity, ___1_comparer, method);
}
inline int32_t Dictionary_2_Initialize_m6AB20947E419AA18B5C62E707D43A250FEDE0897 (Dictionary_2_t9283A2526EFCCE82F0B8EBAF55887B5456F4480A* __this, int32_t ___0_capacity, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Dictionary_2_t9283A2526EFCCE82F0B8EBAF55887B5456F4480A*, int32_t, const RuntimeMethod*))Dictionary_2_Initialize_m6AB20947E419AA18B5C62E707D43A250FEDE0897_gshared)(__this, ___0_capacity, method);
}
inline void Dictionary_2__ctor_m79933243916DED9394A47C1F990E1F286F108101 (Dictionary_2_t9283A2526EFCCE82F0B8EBAF55887B5456F4480A* __this, RuntimeObject* ___0_dictionary, RuntimeObject* ___1_comparer, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t9283A2526EFCCE82F0B8EBAF55887B5456F4480A*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*))Dictionary_2__ctor_m79933243916DED9394A47C1F990E1F286F108101_gshared)(__this, ___0_dictionary, ___1_comparer, method);
}
inline void Dictionary_2_Add_m33B42C2DBAD6AA659C75AE78EB373B8577F9710B (Dictionary_2_t9283A2526EFCCE82F0B8EBAF55887B5456F4480A* __this, Guid_t ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t9283A2526EFCCE82F0B8EBAF55887B5456F4480A*, Guid_t, RuntimeObject*, const RuntimeMethod*))Dictionary_2_Add_m33B42C2DBAD6AA659C75AE78EB373B8577F9710B_gshared)(__this, ___0_key, ___1_value, method);
}
inline Guid_t KeyValuePair_2_get_Key_mF91DB02B44EED18B0673E6F2CA20021DF3055E1F_inline (KeyValuePair_2_t669A5BAF37ED0ABC96A30943A6E7D0442310B936* __this, const RuntimeMethod* method)
{
	return ((  Guid_t (*) (KeyValuePair_2_t669A5BAF37ED0ABC96A30943A6E7D0442310B936*, const RuntimeMethod*))KeyValuePair_2_get_Key_mF91DB02B44EED18B0673E6F2CA20021DF3055E1F_gshared_inline)(__this, method);
}
inline RuntimeObject* KeyValuePair_2_get_Value_m2A56B01BF54F80055FA9D4B744AD9DBDC6EAE22D_inline (KeyValuePair_2_t669A5BAF37ED0ABC96A30943A6E7D0442310B936* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (KeyValuePair_2_t669A5BAF37ED0ABC96A30943A6E7D0442310B936*, const RuntimeMethod*))KeyValuePair_2_get_Value_m2A56B01BF54F80055FA9D4B744AD9DBDC6EAE22D_gshared_inline)(__this, method);
}
inline void KeyCollection__ctor_m9D62A90356F2F0DD69A413279F538A225588C099 (KeyCollection_t9DE8CFDEB3353C5383DB324226EACA5D0B37AA8E* __this, Dictionary_2_t9283A2526EFCCE82F0B8EBAF55887B5456F4480A* ___0_dictionary, const RuntimeMethod* method)
{
	((  void (*) (KeyCollection_t9DE8CFDEB3353C5383DB324226EACA5D0B37AA8E*, Dictionary_2_t9283A2526EFCCE82F0B8EBAF55887B5456F4480A*, const RuntimeMethod*))KeyCollection__ctor_m9D62A90356F2F0DD69A413279F538A225588C099_gshared)(__this, ___0_dictionary, method);
}
inline void ValueCollection__ctor_m1C59220A433AAF467F2345DD5A30962774691151 (ValueCollection_tDDD3D21DE247A37B6EFC39326193FCD731A2E296* __this, Dictionary_2_t9283A2526EFCCE82F0B8EBAF55887B5456F4480A* ___0_dictionary, const RuntimeMethod* method)
{
	((  void (*) (ValueCollection_tDDD3D21DE247A37B6EFC39326193FCD731A2E296*, Dictionary_2_t9283A2526EFCCE82F0B8EBAF55887B5456F4480A*, const RuntimeMethod*))ValueCollection__ctor_m1C59220A433AAF467F2345DD5A30962774691151_gshared)(__this, ___0_dictionary, method);
}
inline int32_t Dictionary_2_FindEntry_mFAC5E9BB05EFD8B896D7B1EE3745B9141BC26025 (Dictionary_2_t9283A2526EFCCE82F0B8EBAF55887B5456F4480A* __this, Guid_t ___0_key, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Dictionary_2_t9283A2526EFCCE82F0B8EBAF55887B5456F4480A*, Guid_t, const RuntimeMethod*))Dictionary_2_FindEntry_mFAC5E9BB05EFD8B896D7B1EE3745B9141BC26025_gshared)(__this, ___0_key, method);
}
inline bool Dictionary_2_TryInsert_mF645474D42EF0AB95FED32388F31D297085C2832 (Dictionary_2_t9283A2526EFCCE82F0B8EBAF55887B5456F4480A* __this, Guid_t ___0_key, RuntimeObject* ___1_value, uint8_t ___2_behavior, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t9283A2526EFCCE82F0B8EBAF55887B5456F4480A*, Guid_t, RuntimeObject*, uint8_t, const RuntimeMethod*))Dictionary_2_TryInsert_mF645474D42EF0AB95FED32388F31D297085C2832_gshared)(__this, ___0_key, ___1_value, ___2_behavior, method);
}
inline bool Dictionary_2_Remove_mF52F83A179ACE0E308B993508A68C35895ED5D8F (Dictionary_2_t9283A2526EFCCE82F0B8EBAF55887B5456F4480A* __this, Guid_t ___0_key, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t9283A2526EFCCE82F0B8EBAF55887B5456F4480A*, Guid_t, const RuntimeMethod*))Dictionary_2_Remove_mF52F83A179ACE0E308B993508A68C35895ED5D8F_gshared)(__this, ___0_key, method);
}
inline int32_t Dictionary_2_get_Count_mF6D5ED77BA9FBAAD59EF5BAF8999C13EAB376006 (Dictionary_2_t9283A2526EFCCE82F0B8EBAF55887B5456F4480A* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Dictionary_2_t9283A2526EFCCE82F0B8EBAF55887B5456F4480A*, const RuntimeMethod*))Dictionary_2_get_Count_mF6D5ED77BA9FBAAD59EF5BAF8999C13EAB376006_gshared)(__this, method);
}
inline void KeyValuePair_2__ctor_mAC13FF83E9E4285FF12BC8F080E0A84C51480735 (KeyValuePair_2_t669A5BAF37ED0ABC96A30943A6E7D0442310B936* __this, Guid_t ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method)
{
	((  void (*) (KeyValuePair_2_t669A5BAF37ED0ABC96A30943A6E7D0442310B936*, Guid_t, RuntimeObject*, const RuntimeMethod*))KeyValuePair_2__ctor_mAC13FF83E9E4285FF12BC8F080E0A84C51480735_gshared)(__this, ___0_key, ___1_value, method);
}
inline void Enumerator__ctor_m3FCE0E08BC1DB64AF0CC89FE635B29EEE5E82F04 (Enumerator_t9FEF2496FA5DE5237C8DA17926FD4D968D685AB3* __this, Dictionary_2_t9283A2526EFCCE82F0B8EBAF55887B5456F4480A* ___0_dictionary, int32_t ___1_getEnumeratorRetType, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t9FEF2496FA5DE5237C8DA17926FD4D968D685AB3*, Dictionary_2_t9283A2526EFCCE82F0B8EBAF55887B5456F4480A*, int32_t, const RuntimeMethod*))Enumerator__ctor_m3FCE0E08BC1DB64AF0CC89FE635B29EEE5E82F04_gshared)(__this, ___0_dictionary, ___1_getEnumeratorRetType, method);
}
inline void Dictionary_2_CopyTo_m1062474EEC0D394425E27C1869DEA2BB8DF92B41 (Dictionary_2_t9283A2526EFCCE82F0B8EBAF55887B5456F4480A* __this, KeyValuePair_2U5BU5D_t6E8559F0FEDC952C1C97D197BC8286FDA93AB882* ___0_array, int32_t ___1_index, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t9283A2526EFCCE82F0B8EBAF55887B5456F4480A*, KeyValuePair_2U5BU5D_t6E8559F0FEDC952C1C97D197BC8286FDA93AB882*, int32_t, const RuntimeMethod*))Dictionary_2_CopyTo_m1062474EEC0D394425E27C1869DEA2BB8DF92B41_gshared)(__this, ___0_array, ___1_index, method);
}
inline void Dictionary_2_Resize_mD0ED6CF807DB5F81267858F36B29C1A2C58C1173 (Dictionary_2_t9283A2526EFCCE82F0B8EBAF55887B5456F4480A* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t9283A2526EFCCE82F0B8EBAF55887B5456F4480A*, const RuntimeMethod*))Dictionary_2_Resize_mD0ED6CF807DB5F81267858F36B29C1A2C58C1173_gshared)(__this, method);
}
inline void Dictionary_2_Resize_mDB466CFDC6255A9CEE96C543CA0886C1D5D53CFB (Dictionary_2_t9283A2526EFCCE82F0B8EBAF55887B5456F4480A* __this, int32_t ___0_newSize, bool ___1_forceNewHashCodes, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t9283A2526EFCCE82F0B8EBAF55887B5456F4480A*, int32_t, bool, const RuntimeMethod*))Dictionary_2_Resize_mDB466CFDC6255A9CEE96C543CA0886C1D5D53CFB_gshared)(__this, ___0_newSize, ___1_forceNewHashCodes, method);
}
inline KeyCollection_t9DE8CFDEB3353C5383DB324226EACA5D0B37AA8E* Dictionary_2_get_Keys_mFA34236E56D4ADBE51E2D5FA82DF698DA9A972FB (Dictionary_2_t9283A2526EFCCE82F0B8EBAF55887B5456F4480A* __this, const RuntimeMethod* method)
{
	return ((  KeyCollection_t9DE8CFDEB3353C5383DB324226EACA5D0B37AA8E* (*) (Dictionary_2_t9283A2526EFCCE82F0B8EBAF55887B5456F4480A*, const RuntimeMethod*))Dictionary_2_get_Keys_mFA34236E56D4ADBE51E2D5FA82DF698DA9A972FB_gshared)(__this, method);
}
inline bool Dictionary_2_IsCompatibleKey_mEF045703C8867C43360D1550A1169ABB26E2F13B (RuntimeObject* ___0_key, const RuntimeMethod* method)
{
	return ((  bool (*) (RuntimeObject*, const RuntimeMethod*))Dictionary_2_IsCompatibleKey_mEF045703C8867C43360D1550A1169ABB26E2F13B_gshared)(___0_key, method);
}
inline void Dictionary_2_set_Item_m5C6C0F6A08D2742138B08FB9B91FA19B58F1F5D3 (Dictionary_2_t9283A2526EFCCE82F0B8EBAF55887B5456F4480A* __this, Guid_t ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t9283A2526EFCCE82F0B8EBAF55887B5456F4480A*, Guid_t, RuntimeObject*, const RuntimeMethod*))Dictionary_2_set_Item_m5C6C0F6A08D2742138B08FB9B91FA19B58F1F5D3_gshared)(__this, ___0_key, ___1_value, method);
}
inline bool Dictionary_2_ContainsKey_mADEF13A6F00847BA930B57377C0F34719842FE6A (Dictionary_2_t9283A2526EFCCE82F0B8EBAF55887B5456F4480A* __this, Guid_t ___0_key, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t9283A2526EFCCE82F0B8EBAF55887B5456F4480A*, Guid_t, const RuntimeMethod*))Dictionary_2_ContainsKey_mADEF13A6F00847BA930B57377C0F34719842FE6A_gshared)(__this, ___0_key, method);
}
inline void Dictionary_2__ctor_m6289671CF9C2AE755A8ED3278FE9CA56171DEF17 (Dictionary_2_t4D7978E5F7E236382AF32684305AC72452D49043* __this, int32_t ___0_capacity, RuntimeObject* ___1_comparer, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t4D7978E5F7E236382AF32684305AC72452D49043*, int32_t, RuntimeObject*, const RuntimeMethod*))Dictionary_2__ctor_m6289671CF9C2AE755A8ED3278FE9CA56171DEF17_gshared)(__this, ___0_capacity, ___1_comparer, method);
}
inline int32_t Dictionary_2_Initialize_mA242B14841D13E405394EAB63CE60D83F0F5251B (Dictionary_2_t4D7978E5F7E236382AF32684305AC72452D49043* __this, int32_t ___0_capacity, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Dictionary_2_t4D7978E5F7E236382AF32684305AC72452D49043*, int32_t, const RuntimeMethod*))Dictionary_2_Initialize_mA242B14841D13E405394EAB63CE60D83F0F5251B_gshared)(__this, ___0_capacity, method);
}
inline void Dictionary_2__ctor_m87DBF533B1BCFEEA84EE0190E70277BFA1854B74 (Dictionary_2_t4D7978E5F7E236382AF32684305AC72452D49043* __this, RuntimeObject* ___0_dictionary, RuntimeObject* ___1_comparer, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t4D7978E5F7E236382AF32684305AC72452D49043*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*))Dictionary_2__ctor_m87DBF533B1BCFEEA84EE0190E70277BFA1854B74_gshared)(__this, ___0_dictionary, ___1_comparer, method);
}
inline void Dictionary_2_Add_m2E83AB53AA4F67FD870D568B7E0F5269F3C9EF2F (Dictionary_2_t4D7978E5F7E236382AF32684305AC72452D49043* __this, int32_t ___0_key, ContentHeightCacheInfo_tA616347D46981FC5684B6268FC7035C431E99FBC ___1_value, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t4D7978E5F7E236382AF32684305AC72452D49043*, int32_t, ContentHeightCacheInfo_tA616347D46981FC5684B6268FC7035C431E99FBC, const RuntimeMethod*))Dictionary_2_Add_m2E83AB53AA4F67FD870D568B7E0F5269F3C9EF2F_gshared)(__this, ___0_key, ___1_value, method);
}
inline int32_t KeyValuePair_2_get_Key_mA7C09E323BC8D58366E676F2135E5B976A40E152_inline (KeyValuePair_2_tE3EA5100FA35C94F54D8D5F93B806E7614C34DBD* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (KeyValuePair_2_tE3EA5100FA35C94F54D8D5F93B806E7614C34DBD*, const RuntimeMethod*))KeyValuePair_2_get_Key_mA7C09E323BC8D58366E676F2135E5B976A40E152_gshared_inline)(__this, method);
}
inline ContentHeightCacheInfo_tA616347D46981FC5684B6268FC7035C431E99FBC KeyValuePair_2_get_Value_m3418A391AB44E3DC55D9F6B456C7E6E694A45062_inline (KeyValuePair_2_tE3EA5100FA35C94F54D8D5F93B806E7614C34DBD* __this, const RuntimeMethod* method)
{
	return ((  ContentHeightCacheInfo_tA616347D46981FC5684B6268FC7035C431E99FBC (*) (KeyValuePair_2_tE3EA5100FA35C94F54D8D5F93B806E7614C34DBD*, const RuntimeMethod*))KeyValuePair_2_get_Value_m3418A391AB44E3DC55D9F6B456C7E6E694A45062_gshared_inline)(__this, method);
}
inline void KeyCollection__ctor_m04155234C1C90297F973F2DD3B892015CF860306 (KeyCollection_t1C0270D8CA819EF870A1AB2BDF71FF7D9967AC6C* __this, Dictionary_2_t4D7978E5F7E236382AF32684305AC72452D49043* ___0_dictionary, const RuntimeMethod* method)
{
	((  void (*) (KeyCollection_t1C0270D8CA819EF870A1AB2BDF71FF7D9967AC6C*, Dictionary_2_t4D7978E5F7E236382AF32684305AC72452D49043*, const RuntimeMethod*))KeyCollection__ctor_m04155234C1C90297F973F2DD3B892015CF860306_gshared)(__this, ___0_dictionary, method);
}
inline void ValueCollection__ctor_m6F4F3F916020065EFA67C145A6EDA70F624A5384 (ValueCollection_t1A840A8972E8AE9C8564CF9D1EEC5519261BAFA9* __this, Dictionary_2_t4D7978E5F7E236382AF32684305AC72452D49043* ___0_dictionary, const RuntimeMethod* method)
{
	((  void (*) (ValueCollection_t1A840A8972E8AE9C8564CF9D1EEC5519261BAFA9*, Dictionary_2_t4D7978E5F7E236382AF32684305AC72452D49043*, const RuntimeMethod*))ValueCollection__ctor_m6F4F3F916020065EFA67C145A6EDA70F624A5384_gshared)(__this, ___0_dictionary, method);
}
inline int32_t Dictionary_2_FindEntry_mD8B748D3A92124B5F9D01A9C0557BEEB772BD673 (Dictionary_2_t4D7978E5F7E236382AF32684305AC72452D49043* __this, int32_t ___0_key, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Dictionary_2_t4D7978E5F7E236382AF32684305AC72452D49043*, int32_t, const RuntimeMethod*))Dictionary_2_FindEntry_mD8B748D3A92124B5F9D01A9C0557BEEB772BD673_gshared)(__this, ___0_key, method);
}
inline bool Dictionary_2_TryInsert_m099201DE2E21B09B51345FF7EF0960AC8BD70E0E (Dictionary_2_t4D7978E5F7E236382AF32684305AC72452D49043* __this, int32_t ___0_key, ContentHeightCacheInfo_tA616347D46981FC5684B6268FC7035C431E99FBC ___1_value, uint8_t ___2_behavior, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t4D7978E5F7E236382AF32684305AC72452D49043*, int32_t, ContentHeightCacheInfo_tA616347D46981FC5684B6268FC7035C431E99FBC, uint8_t, const RuntimeMethod*))Dictionary_2_TryInsert_m099201DE2E21B09B51345FF7EF0960AC8BD70E0E_gshared)(__this, ___0_key, ___1_value, ___2_behavior, method);
}
inline EqualityComparer_1_t8EE005CC277EC77E0AFAB9930C9285E3DE4C677B* EqualityComparer_1_get_Default_mB3E88E8F0749A37FC3E4007A3F3142E8DE546515_inline (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_t8EE005CC277EC77E0AFAB9930C9285E3DE4C677B* (*) (const RuntimeMethod*))EqualityComparer_1_get_Default_mB3E88E8F0749A37FC3E4007A3F3142E8DE546515_gshared_inline)(method);
}
inline bool Dictionary_2_Remove_m7EF408E5FE0D4F747EC426DE23450F54F779E67A (Dictionary_2_t4D7978E5F7E236382AF32684305AC72452D49043* __this, int32_t ___0_key, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t4D7978E5F7E236382AF32684305AC72452D49043*, int32_t, const RuntimeMethod*))Dictionary_2_Remove_m7EF408E5FE0D4F747EC426DE23450F54F779E67A_gshared)(__this, ___0_key, method);
}
inline int32_t Dictionary_2_get_Count_m4816BCB730A3F3AF171687270CB4619FB3C44E1C (Dictionary_2_t4D7978E5F7E236382AF32684305AC72452D49043* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Dictionary_2_t4D7978E5F7E236382AF32684305AC72452D49043*, const RuntimeMethod*))Dictionary_2_get_Count_m4816BCB730A3F3AF171687270CB4619FB3C44E1C_gshared)(__this, method);
}
inline void KeyValuePair_2__ctor_mE1295E1EB09A4C3624F079C94EE6A9ED1D66EE26 (KeyValuePair_2_tE3EA5100FA35C94F54D8D5F93B806E7614C34DBD* __this, int32_t ___0_key, ContentHeightCacheInfo_tA616347D46981FC5684B6268FC7035C431E99FBC ___1_value, const RuntimeMethod* method)
{
	((  void (*) (KeyValuePair_2_tE3EA5100FA35C94F54D8D5F93B806E7614C34DBD*, int32_t, ContentHeightCacheInfo_tA616347D46981FC5684B6268FC7035C431E99FBC, const RuntimeMethod*))KeyValuePair_2__ctor_mE1295E1EB09A4C3624F079C94EE6A9ED1D66EE26_gshared)(__this, ___0_key, ___1_value, method);
}
inline void Enumerator__ctor_m31B9A15C37D5A017654810B5B55B5C415CBAF885 (Enumerator_tB7C64CFA6D1E8072BF063A54A9F6CB6B8021170F* __this, Dictionary_2_t4D7978E5F7E236382AF32684305AC72452D49043* ___0_dictionary, int32_t ___1_getEnumeratorRetType, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tB7C64CFA6D1E8072BF063A54A9F6CB6B8021170F*, Dictionary_2_t4D7978E5F7E236382AF32684305AC72452D49043*, int32_t, const RuntimeMethod*))Enumerator__ctor_m31B9A15C37D5A017654810B5B55B5C415CBAF885_gshared)(__this, ___0_dictionary, ___1_getEnumeratorRetType, method);
}
inline void Dictionary_2_CopyTo_m99769053B2973A908BB5E1F3B7547EA43A30C52B (Dictionary_2_t4D7978E5F7E236382AF32684305AC72452D49043* __this, KeyValuePair_2U5BU5D_t65371EF32BF577225115397A64E346AE93FE927C* ___0_array, int32_t ___1_index, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t4D7978E5F7E236382AF32684305AC72452D49043*, KeyValuePair_2U5BU5D_t65371EF32BF577225115397A64E346AE93FE927C*, int32_t, const RuntimeMethod*))Dictionary_2_CopyTo_m99769053B2973A908BB5E1F3B7547EA43A30C52B_gshared)(__this, ___0_array, ___1_index, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Int32_GetHashCode_m253D60FF7527A483E91004B7A2366F13E225E295 (int32_t* __this, const RuntimeMethod* method) ;
inline void Dictionary_2_Resize_m49A6E36229F30CC88FA8BD6C75190330D88E7D7D (Dictionary_2_t4D7978E5F7E236382AF32684305AC72452D49043* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t4D7978E5F7E236382AF32684305AC72452D49043*, const RuntimeMethod*))Dictionary_2_Resize_m49A6E36229F30CC88FA8BD6C75190330D88E7D7D_gshared)(__this, method);
}
inline void Dictionary_2_Resize_mD4C4C781B27ECB1928BEBC290BFC10D191798670 (Dictionary_2_t4D7978E5F7E236382AF32684305AC72452D49043* __this, int32_t ___0_newSize, bool ___1_forceNewHashCodes, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t4D7978E5F7E236382AF32684305AC72452D49043*, int32_t, bool, const RuntimeMethod*))Dictionary_2_Resize_mD4C4C781B27ECB1928BEBC290BFC10D191798670_gshared)(__this, ___0_newSize, ___1_forceNewHashCodes, method);
}
inline KeyCollection_t1C0270D8CA819EF870A1AB2BDF71FF7D9967AC6C* Dictionary_2_get_Keys_m51677F3B9C4444ABDCE7161B61DB5210D2378079 (Dictionary_2_t4D7978E5F7E236382AF32684305AC72452D49043* __this, const RuntimeMethod* method)
{
	return ((  KeyCollection_t1C0270D8CA819EF870A1AB2BDF71FF7D9967AC6C* (*) (Dictionary_2_t4D7978E5F7E236382AF32684305AC72452D49043*, const RuntimeMethod*))Dictionary_2_get_Keys_m51677F3B9C4444ABDCE7161B61DB5210D2378079_gshared)(__this, method);
}
inline bool Dictionary_2_IsCompatibleKey_m078096C30896035127EB311E1323AD6D04F7B024 (RuntimeObject* ___0_key, const RuntimeMethod* method)
{
	return ((  bool (*) (RuntimeObject*, const RuntimeMethod*))Dictionary_2_IsCompatibleKey_m078096C30896035127EB311E1323AD6D04F7B024_gshared)(___0_key, method);
}
inline void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisContentHeightCacheInfo_tA616347D46981FC5684B6268FC7035C431E99FBC_m1CB4F3E56295F4B5567E64280A4ACECF3FC671D6 (RuntimeObject* ___0_value, int32_t ___1_argName, const RuntimeMethod* method)
{
	((  void (*) (RuntimeObject*, int32_t, const RuntimeMethod*))ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisContentHeightCacheInfo_tA616347D46981FC5684B6268FC7035C431E99FBC_m1CB4F3E56295F4B5567E64280A4ACECF3FC671D6_gshared)(___0_value, ___1_argName, method);
}
inline void Dictionary_2_set_Item_mA2D31862FA96D8794126CAA7B1E178B08B6BB566 (Dictionary_2_t4D7978E5F7E236382AF32684305AC72452D49043* __this, int32_t ___0_key, ContentHeightCacheInfo_tA616347D46981FC5684B6268FC7035C431E99FBC ___1_value, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t4D7978E5F7E236382AF32684305AC72452D49043*, int32_t, ContentHeightCacheInfo_tA616347D46981FC5684B6268FC7035C431E99FBC, const RuntimeMethod*))Dictionary_2_set_Item_mA2D31862FA96D8794126CAA7B1E178B08B6BB566_gshared)(__this, ___0_key, ___1_value, method);
}
inline bool Dictionary_2_ContainsKey_m39C81870CD15FA7F0BD586D3BCF55C5B1D7D4005 (Dictionary_2_t4D7978E5F7E236382AF32684305AC72452D49043* __this, int32_t ___0_key, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t4D7978E5F7E236382AF32684305AC72452D49043*, int32_t, const RuntimeMethod*))Dictionary_2_ContainsKey_m39C81870CD15FA7F0BD586D3BCF55C5B1D7D4005_gshared)(__this, ___0_key, method);
}
inline void Dictionary_2__ctor_mEDCF6D7DF49A4332BEC24CFBE3157E2598FC54F5 (Dictionary_2_tC44035903CD447F30151D3470629A0598D22856F* __this, int32_t ___0_capacity, RuntimeObject* ___1_comparer, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tC44035903CD447F30151D3470629A0598D22856F*, int32_t, RuntimeObject*, const RuntimeMethod*))Dictionary_2__ctor_mEDCF6D7DF49A4332BEC24CFBE3157E2598FC54F5_gshared)(__this, ___0_capacity, ___1_comparer, method);
}
inline int32_t Dictionary_2_Initialize_m55DBA94CA01715093AF33B0FF44EB7AFD5AEAB36 (Dictionary_2_tC44035903CD447F30151D3470629A0598D22856F* __this, int32_t ___0_capacity, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Dictionary_2_tC44035903CD447F30151D3470629A0598D22856F*, int32_t, const RuntimeMethod*))Dictionary_2_Initialize_m55DBA94CA01715093AF33B0FF44EB7AFD5AEAB36_gshared)(__this, ___0_capacity, method);
}
inline void Dictionary_2__ctor_m2A43B8E808B5C24C12C2DAA6EF9747BB2AE8787B (Dictionary_2_tC44035903CD447F30151D3470629A0598D22856F* __this, RuntimeObject* ___0_dictionary, RuntimeObject* ___1_comparer, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tC44035903CD447F30151D3470629A0598D22856F*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*))Dictionary_2__ctor_m2A43B8E808B5C24C12C2DAA6EF9747BB2AE8787B_gshared)(__this, ___0_dictionary, ___1_comparer, method);
}
inline void Dictionary_2_Add_mFE603469AB888F7C8EF9DE3392E9461867390BDC (Dictionary_2_tC44035903CD447F30151D3470629A0598D22856F* __this, int32_t ___0_key, TreeViewItemData_1_t95D9721135F40D0DB3D221F8EB2543C396D350F4 ___1_value, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tC44035903CD447F30151D3470629A0598D22856F*, int32_t, TreeViewItemData_1_t95D9721135F40D0DB3D221F8EB2543C396D350F4, const RuntimeMethod*))Dictionary_2_Add_mFE603469AB888F7C8EF9DE3392E9461867390BDC_gshared)(__this, ___0_key, ___1_value, method);
}
inline int32_t KeyValuePair_2_get_Key_mD6A5670D5DD71BBE95D274ADC916CFD0F5E3FAA6_inline (KeyValuePair_2_tCA9456FCC0FBD03E0C9FF69F0B168B558FD2A5ED* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (KeyValuePair_2_tCA9456FCC0FBD03E0C9FF69F0B168B558FD2A5ED*, const RuntimeMethod*))KeyValuePair_2_get_Key_mD6A5670D5DD71BBE95D274ADC916CFD0F5E3FAA6_gshared_inline)(__this, method);
}
inline TreeViewItemData_1_t95D9721135F40D0DB3D221F8EB2543C396D350F4 KeyValuePair_2_get_Value_m658D03DA62B8E16BD8C96D037C38C9AC87442BAF_inline (KeyValuePair_2_tCA9456FCC0FBD03E0C9FF69F0B168B558FD2A5ED* __this, const RuntimeMethod* method)
{
	return ((  TreeViewItemData_1_t95D9721135F40D0DB3D221F8EB2543C396D350F4 (*) (KeyValuePair_2_tCA9456FCC0FBD03E0C9FF69F0B168B558FD2A5ED*, const RuntimeMethod*))KeyValuePair_2_get_Value_m658D03DA62B8E16BD8C96D037C38C9AC87442BAF_gshared_inline)(__this, method);
}
inline void KeyCollection__ctor_m6454D86CFBA0EE602C78B5A4BB6612FE16D59D00 (KeyCollection_t27A4E9C75C7D4062FA62AB82C4F9EBE443BD465A* __this, Dictionary_2_tC44035903CD447F30151D3470629A0598D22856F* ___0_dictionary, const RuntimeMethod* method)
{
	((  void (*) (KeyCollection_t27A4E9C75C7D4062FA62AB82C4F9EBE443BD465A*, Dictionary_2_tC44035903CD447F30151D3470629A0598D22856F*, const RuntimeMethod*))KeyCollection__ctor_m6454D86CFBA0EE602C78B5A4BB6612FE16D59D00_gshared)(__this, ___0_dictionary, method);
}
inline void ValueCollection__ctor_m6BB7131D664E022D2E39E555E28E3E1E6675325F (ValueCollection_t155E307D9195A7BE8C4DE53C867A8CEBA24805BF* __this, Dictionary_2_tC44035903CD447F30151D3470629A0598D22856F* ___0_dictionary, const RuntimeMethod* method)
{
	((  void (*) (ValueCollection_t155E307D9195A7BE8C4DE53C867A8CEBA24805BF*, Dictionary_2_tC44035903CD447F30151D3470629A0598D22856F*, const RuntimeMethod*))ValueCollection__ctor_m6BB7131D664E022D2E39E555E28E3E1E6675325F_gshared)(__this, ___0_dictionary, method);
}
inline int32_t Dictionary_2_FindEntry_mB1F48D02466EA489E158922AAE99F45DB56C9FB9 (Dictionary_2_tC44035903CD447F30151D3470629A0598D22856F* __this, int32_t ___0_key, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Dictionary_2_tC44035903CD447F30151D3470629A0598D22856F*, int32_t, const RuntimeMethod*))Dictionary_2_FindEntry_mB1F48D02466EA489E158922AAE99F45DB56C9FB9_gshared)(__this, ___0_key, method);
}
inline bool Dictionary_2_TryInsert_mAC235DEF75BD8560A1598E0744B7CC55359D6B4B (Dictionary_2_tC44035903CD447F30151D3470629A0598D22856F* __this, int32_t ___0_key, TreeViewItemData_1_t95D9721135F40D0DB3D221F8EB2543C396D350F4 ___1_value, uint8_t ___2_behavior, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_tC44035903CD447F30151D3470629A0598D22856F*, int32_t, TreeViewItemData_1_t95D9721135F40D0DB3D221F8EB2543C396D350F4, uint8_t, const RuntimeMethod*))Dictionary_2_TryInsert_mAC235DEF75BD8560A1598E0744B7CC55359D6B4B_gshared)(__this, ___0_key, ___1_value, ___2_behavior, method);
}
inline EqualityComparer_1_t8DFD15807C95203DA08FAD2838BD16CE1C70A17E* EqualityComparer_1_get_Default_m36D51346E7AD3770CF007C780BD7F59736E21F77_inline (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_t8DFD15807C95203DA08FAD2838BD16CE1C70A17E* (*) (const RuntimeMethod*))EqualityComparer_1_get_Default_m36D51346E7AD3770CF007C780BD7F59736E21F77_gshared_inline)(method);
}
inline bool Dictionary_2_Remove_m0ABB3BBBBDA393DEDC19A0F0943D8AF9E58F785B (Dictionary_2_tC44035903CD447F30151D3470629A0598D22856F* __this, int32_t ___0_key, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_tC44035903CD447F30151D3470629A0598D22856F*, int32_t, const RuntimeMethod*))Dictionary_2_Remove_m0ABB3BBBBDA393DEDC19A0F0943D8AF9E58F785B_gshared)(__this, ___0_key, method);
}
inline int32_t Dictionary_2_get_Count_mB6EB1F2269F19C3B1119FD6DDA8B51155F7BE2E3 (Dictionary_2_tC44035903CD447F30151D3470629A0598D22856F* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Dictionary_2_tC44035903CD447F30151D3470629A0598D22856F*, const RuntimeMethod*))Dictionary_2_get_Count_mB6EB1F2269F19C3B1119FD6DDA8B51155F7BE2E3_gshared)(__this, method);
}
inline void KeyValuePair_2__ctor_mFF17374CE90C7FE231E65EAFF2287053FA1C9AC3 (KeyValuePair_2_tCA9456FCC0FBD03E0C9FF69F0B168B558FD2A5ED* __this, int32_t ___0_key, TreeViewItemData_1_t95D9721135F40D0DB3D221F8EB2543C396D350F4 ___1_value, const RuntimeMethod* method)
{
	((  void (*) (KeyValuePair_2_tCA9456FCC0FBD03E0C9FF69F0B168B558FD2A5ED*, int32_t, TreeViewItemData_1_t95D9721135F40D0DB3D221F8EB2543C396D350F4, const RuntimeMethod*))KeyValuePair_2__ctor_mFF17374CE90C7FE231E65EAFF2287053FA1C9AC3_gshared)(__this, ___0_key, ___1_value, method);
}
inline void Enumerator__ctor_m05BF5395EAD892FD0CB4F3C6C33C783FEBD9F063 (Enumerator_t0BE77930571D15651FEF9D9D38DBD8CCC82633B9* __this, Dictionary_2_tC44035903CD447F30151D3470629A0598D22856F* ___0_dictionary, int32_t ___1_getEnumeratorRetType, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t0BE77930571D15651FEF9D9D38DBD8CCC82633B9*, Dictionary_2_tC44035903CD447F30151D3470629A0598D22856F*, int32_t, const RuntimeMethod*))Enumerator__ctor_m05BF5395EAD892FD0CB4F3C6C33C783FEBD9F063_gshared)(__this, ___0_dictionary, ___1_getEnumeratorRetType, method);
}
inline void Dictionary_2_CopyTo_mB0FEE83321F8E70FC1A5D1847B0EBFA5507A67E1 (Dictionary_2_tC44035903CD447F30151D3470629A0598D22856F* __this, KeyValuePair_2U5BU5D_t4A52453D810EE41FD9E873C0FA5C9F4500832CAC* ___0_array, int32_t ___1_index, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tC44035903CD447F30151D3470629A0598D22856F*, KeyValuePair_2U5BU5D_t4A52453D810EE41FD9E873C0FA5C9F4500832CAC*, int32_t, const RuntimeMethod*))Dictionary_2_CopyTo_mB0FEE83321F8E70FC1A5D1847B0EBFA5507A67E1_gshared)(__this, ___0_array, ___1_index, method);
}
inline void Dictionary_2_Resize_m6D62C4293D7571986913FF1E505B0090DF1D96B8 (Dictionary_2_tC44035903CD447F30151D3470629A0598D22856F* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tC44035903CD447F30151D3470629A0598D22856F*, const RuntimeMethod*))Dictionary_2_Resize_m6D62C4293D7571986913FF1E505B0090DF1D96B8_gshared)(__this, method);
}
inline void Dictionary_2_Resize_mDA2C2B2AA9D036744EA1510458F902ACF49E6658 (Dictionary_2_tC44035903CD447F30151D3470629A0598D22856F* __this, int32_t ___0_newSize, bool ___1_forceNewHashCodes, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tC44035903CD447F30151D3470629A0598D22856F*, int32_t, bool, const RuntimeMethod*))Dictionary_2_Resize_mDA2C2B2AA9D036744EA1510458F902ACF49E6658_gshared)(__this, ___0_newSize, ___1_forceNewHashCodes, method);
}
inline KeyCollection_t27A4E9C75C7D4062FA62AB82C4F9EBE443BD465A* Dictionary_2_get_Keys_mCA75818A897B564BAA7874AA2D7F8E257A06BF0B (Dictionary_2_tC44035903CD447F30151D3470629A0598D22856F* __this, const RuntimeMethod* method)
{
	return ((  KeyCollection_t27A4E9C75C7D4062FA62AB82C4F9EBE443BD465A* (*) (Dictionary_2_tC44035903CD447F30151D3470629A0598D22856F*, const RuntimeMethod*))Dictionary_2_get_Keys_mCA75818A897B564BAA7874AA2D7F8E257A06BF0B_gshared)(__this, method);
}
inline bool Dictionary_2_IsCompatibleKey_mF8A281EB724D891BD9DF117DFFE2CC104420759C (RuntimeObject* ___0_key, const RuntimeMethod* method)
{
	return ((  bool (*) (RuntimeObject*, const RuntimeMethod*))Dictionary_2_IsCompatibleKey_mF8A281EB724D891BD9DF117DFFE2CC104420759C_gshared)(___0_key, method);
}
inline void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisTreeViewItemData_1_t95D9721135F40D0DB3D221F8EB2543C396D350F4_m66F50948C6CBCA9CDB992356871C2622CA4ED150 (RuntimeObject* ___0_value, int32_t ___1_argName, const RuntimeMethod* method)
{
	((  void (*) (RuntimeObject*, int32_t, const RuntimeMethod*))ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisTreeViewItemData_1_t95D9721135F40D0DB3D221F8EB2543C396D350F4_m66F50948C6CBCA9CDB992356871C2622CA4ED150_gshared)(___0_value, ___1_argName, method);
}
inline void Dictionary_2_set_Item_m6ACCDAA15A3D3B734405727DF8AD5AD09BA14333 (Dictionary_2_tC44035903CD447F30151D3470629A0598D22856F* __this, int32_t ___0_key, TreeViewItemData_1_t95D9721135F40D0DB3D221F8EB2543C396D350F4 ___1_value, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tC44035903CD447F30151D3470629A0598D22856F*, int32_t, TreeViewItemData_1_t95D9721135F40D0DB3D221F8EB2543C396D350F4, const RuntimeMethod*))Dictionary_2_set_Item_m6ACCDAA15A3D3B734405727DF8AD5AD09BA14333_gshared)(__this, ___0_key, ___1_value, method);
}
inline bool Dictionary_2_ContainsKey_m66D807D27A003B8D2BAC644F46131821F92790CE (Dictionary_2_tC44035903CD447F30151D3470629A0598D22856F* __this, int32_t ___0_key, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_tC44035903CD447F30151D3470629A0598D22856F*, int32_t, const RuntimeMethod*))Dictionary_2_ContainsKey_m66D807D27A003B8D2BAC644F46131821F92790CE_gshared)(__this, ___0_key, method);
}
inline void Dictionary_2__ctor_mB9E422F28BC7E8D1302E87AA7D8AC6CFC64950EF (Dictionary_2_t01224C8DBCCFE276E97D2BF52F4D7B10D3642682* __this, int32_t ___0_capacity, RuntimeObject* ___1_comparer, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t01224C8DBCCFE276E97D2BF52F4D7B10D3642682*, int32_t, RuntimeObject*, const RuntimeMethod*))Dictionary_2__ctor_mB9E422F28BC7E8D1302E87AA7D8AC6CFC64950EF_gshared)(__this, ___0_capacity, ___1_comparer, method);
}
inline int32_t Dictionary_2_Initialize_m94BC29643E386903C4BD1E14BFA63BE82988EE68 (Dictionary_2_t01224C8DBCCFE276E97D2BF52F4D7B10D3642682* __this, int32_t ___0_capacity, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Dictionary_2_t01224C8DBCCFE276E97D2BF52F4D7B10D3642682*, int32_t, const RuntimeMethod*))Dictionary_2_Initialize_m94BC29643E386903C4BD1E14BFA63BE82988EE68_gshared)(__this, ___0_capacity, method);
}
inline void Dictionary_2__ctor_mC11BF75E2F3DCB9A0411B7ED8F06942BA0E86A29 (Dictionary_2_t01224C8DBCCFE276E97D2BF52F4D7B10D3642682* __this, RuntimeObject* ___0_dictionary, RuntimeObject* ___1_comparer, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t01224C8DBCCFE276E97D2BF52F4D7B10D3642682*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*))Dictionary_2__ctor_mC11BF75E2F3DCB9A0411B7ED8F06942BA0E86A29_gshared)(__this, ___0_dictionary, ___1_comparer, method);
}
inline void Dictionary_2_Add_m15404AE1ED9C4C7CF89DAEAB8C5F3280C7D115EB (Dictionary_2_t01224C8DBCCFE276E97D2BF52F4D7B10D3642682* __this, int32_t ___0_key, bool ___1_value, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t01224C8DBCCFE276E97D2BF52F4D7B10D3642682*, int32_t, bool, const RuntimeMethod*))Dictionary_2_Add_m15404AE1ED9C4C7CF89DAEAB8C5F3280C7D115EB_gshared)(__this, ___0_key, ___1_value, method);
}
inline int32_t KeyValuePair_2_get_Key_m671CD723515F42017EA4D2DB01691D13288970A9_inline (KeyValuePair_2_t0EAC8DA2D95957AFA60DD198D013622384C0D213* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (KeyValuePair_2_t0EAC8DA2D95957AFA60DD198D013622384C0D213*, const RuntimeMethod*))KeyValuePair_2_get_Key_m671CD723515F42017EA4D2DB01691D13288970A9_gshared_inline)(__this, method);
}
inline bool KeyValuePair_2_get_Value_m00849F341D41ABD55D72D0701342145724AC3A9F_inline (KeyValuePair_2_t0EAC8DA2D95957AFA60DD198D013622384C0D213* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (KeyValuePair_2_t0EAC8DA2D95957AFA60DD198D013622384C0D213*, const RuntimeMethod*))KeyValuePair_2_get_Value_m00849F341D41ABD55D72D0701342145724AC3A9F_gshared_inline)(__this, method);
}
inline void KeyCollection__ctor_m40D5DDD959361A7EBD659D91722CA5F015FDB893 (KeyCollection_t66E188B36DF8E1A23EBDA7253CDCE978CD3EF298* __this, Dictionary_2_t01224C8DBCCFE276E97D2BF52F4D7B10D3642682* ___0_dictionary, const RuntimeMethod* method)
{
	((  void (*) (KeyCollection_t66E188B36DF8E1A23EBDA7253CDCE978CD3EF298*, Dictionary_2_t01224C8DBCCFE276E97D2BF52F4D7B10D3642682*, const RuntimeMethod*))KeyCollection__ctor_m40D5DDD959361A7EBD659D91722CA5F015FDB893_gshared)(__this, ___0_dictionary, method);
}
inline void ValueCollection__ctor_m0031187CE28F9C4C0F5A5253924C7F751164DFA8 (ValueCollection_t95D69F17F87935E5166EE0E3C174BB8A8F051F5B* __this, Dictionary_2_t01224C8DBCCFE276E97D2BF52F4D7B10D3642682* ___0_dictionary, const RuntimeMethod* method)
{
	((  void (*) (ValueCollection_t95D69F17F87935E5166EE0E3C174BB8A8F051F5B*, Dictionary_2_t01224C8DBCCFE276E97D2BF52F4D7B10D3642682*, const RuntimeMethod*))ValueCollection__ctor_m0031187CE28F9C4C0F5A5253924C7F751164DFA8_gshared)(__this, ___0_dictionary, method);
}
inline int32_t Dictionary_2_FindEntry_mE1DD9E6586FB9B0C19DFB7EE7A3A9D8386D5D5D1 (Dictionary_2_t01224C8DBCCFE276E97D2BF52F4D7B10D3642682* __this, int32_t ___0_key, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Dictionary_2_t01224C8DBCCFE276E97D2BF52F4D7B10D3642682*, int32_t, const RuntimeMethod*))Dictionary_2_FindEntry_mE1DD9E6586FB9B0C19DFB7EE7A3A9D8386D5D5D1_gshared)(__this, ___0_key, method);
}
inline bool Dictionary_2_TryInsert_mA1983D94216DE51D98CCD30629282266CCAFE97E (Dictionary_2_t01224C8DBCCFE276E97D2BF52F4D7B10D3642682* __this, int32_t ___0_key, bool ___1_value, uint8_t ___2_behavior, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t01224C8DBCCFE276E97D2BF52F4D7B10D3642682*, int32_t, bool, uint8_t, const RuntimeMethod*))Dictionary_2_TryInsert_mA1983D94216DE51D98CCD30629282266CCAFE97E_gshared)(__this, ___0_key, ___1_value, ___2_behavior, method);
}
inline EqualityComparer_1_t97160852989689D9543E2E1EA7D7196DBEA5AEE4* EqualityComparer_1_get_Default_mBB75BC0723DFD7850F43E72E34026DD070CF5932_inline (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_t97160852989689D9543E2E1EA7D7196DBEA5AEE4* (*) (const RuntimeMethod*))EqualityComparer_1_get_Default_mBB75BC0723DFD7850F43E72E34026DD070CF5932_gshared_inline)(method);
}
inline bool Dictionary_2_Remove_m516AA9DF9B695BC792DA56C301B4B069DE8E8F9E (Dictionary_2_t01224C8DBCCFE276E97D2BF52F4D7B10D3642682* __this, int32_t ___0_key, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t01224C8DBCCFE276E97D2BF52F4D7B10D3642682*, int32_t, const RuntimeMethod*))Dictionary_2_Remove_m516AA9DF9B695BC792DA56C301B4B069DE8E8F9E_gshared)(__this, ___0_key, method);
}
inline int32_t Dictionary_2_get_Count_mC916574C49D9A72EAB6F28C2C25FDB0614CE1C5E (Dictionary_2_t01224C8DBCCFE276E97D2BF52F4D7B10D3642682* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Dictionary_2_t01224C8DBCCFE276E97D2BF52F4D7B10D3642682*, const RuntimeMethod*))Dictionary_2_get_Count_mC916574C49D9A72EAB6F28C2C25FDB0614CE1C5E_gshared)(__this, method);
}
inline void KeyValuePair_2__ctor_m593E407EEF9038F9C3E26BBE93DD316684F8BC7E (KeyValuePair_2_t0EAC8DA2D95957AFA60DD198D013622384C0D213* __this, int32_t ___0_key, bool ___1_value, const RuntimeMethod* method)
{
	((  void (*) (KeyValuePair_2_t0EAC8DA2D95957AFA60DD198D013622384C0D213*, int32_t, bool, const RuntimeMethod*))KeyValuePair_2__ctor_m593E407EEF9038F9C3E26BBE93DD316684F8BC7E_gshared)(__this, ___0_key, ___1_value, method);
}
inline void Enumerator__ctor_m2F677A930996556C63EB1D62D1929C1CF70BC4ED (Enumerator_t06874F6DC6BF37190C0F4C5F3BB89A8F4D960969* __this, Dictionary_2_t01224C8DBCCFE276E97D2BF52F4D7B10D3642682* ___0_dictionary, int32_t ___1_getEnumeratorRetType, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t06874F6DC6BF37190C0F4C5F3BB89A8F4D960969*, Dictionary_2_t01224C8DBCCFE276E97D2BF52F4D7B10D3642682*, int32_t, const RuntimeMethod*))Enumerator__ctor_m2F677A930996556C63EB1D62D1929C1CF70BC4ED_gshared)(__this, ___0_dictionary, ___1_getEnumeratorRetType, method);
}
inline void Dictionary_2_CopyTo_m4E3689D9CDB6B183A42A99057BD45A0337224455 (Dictionary_2_t01224C8DBCCFE276E97D2BF52F4D7B10D3642682* __this, KeyValuePair_2U5BU5D_t00F1189D6659F8334E1D51B328A743FBD809CFB6* ___0_array, int32_t ___1_index, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t01224C8DBCCFE276E97D2BF52F4D7B10D3642682*, KeyValuePair_2U5BU5D_t00F1189D6659F8334E1D51B328A743FBD809CFB6*, int32_t, const RuntimeMethod*))Dictionary_2_CopyTo_m4E3689D9CDB6B183A42A99057BD45A0337224455_gshared)(__this, ___0_array, ___1_index, method);
}
inline void Dictionary_2_Resize_m42FE4F09323494303E7B94C675C478CDCD657809 (Dictionary_2_t01224C8DBCCFE276E97D2BF52F4D7B10D3642682* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t01224C8DBCCFE276E97D2BF52F4D7B10D3642682*, const RuntimeMethod*))Dictionary_2_Resize_m42FE4F09323494303E7B94C675C478CDCD657809_gshared)(__this, method);
}
inline void Dictionary_2_Resize_m8D3990FBC5AE9011BF34BCC6E1CC7C4AF00A84E4 (Dictionary_2_t01224C8DBCCFE276E97D2BF52F4D7B10D3642682* __this, int32_t ___0_newSize, bool ___1_forceNewHashCodes, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t01224C8DBCCFE276E97D2BF52F4D7B10D3642682*, int32_t, bool, const RuntimeMethod*))Dictionary_2_Resize_m8D3990FBC5AE9011BF34BCC6E1CC7C4AF00A84E4_gshared)(__this, ___0_newSize, ___1_forceNewHashCodes, method);
}
inline KeyCollection_t66E188B36DF8E1A23EBDA7253CDCE978CD3EF298* Dictionary_2_get_Keys_mEDBAB5200E3CD3202D5F94E16F4DABEFF601DE5F (Dictionary_2_t01224C8DBCCFE276E97D2BF52F4D7B10D3642682* __this, const RuntimeMethod* method)
{
	return ((  KeyCollection_t66E188B36DF8E1A23EBDA7253CDCE978CD3EF298* (*) (Dictionary_2_t01224C8DBCCFE276E97D2BF52F4D7B10D3642682*, const RuntimeMethod*))Dictionary_2_get_Keys_mEDBAB5200E3CD3202D5F94E16F4DABEFF601DE5F_gshared)(__this, method);
}
inline bool Dictionary_2_IsCompatibleKey_m93B719F22129BB5DA700F0F45427E1B8AD39C562 (RuntimeObject* ___0_key, const RuntimeMethod* method)
{
	return ((  bool (*) (RuntimeObject*, const RuntimeMethod*))Dictionary_2_IsCompatibleKey_m93B719F22129BB5DA700F0F45427E1B8AD39C562_gshared)(___0_key, method);
}
inline void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m92ED6D35EB625EDC96D474780EA2DBE2E0A38D3B (RuntimeObject* ___0_value, int32_t ___1_argName, const RuntimeMethod* method)
{
	((  void (*) (RuntimeObject*, int32_t, const RuntimeMethod*))ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m92ED6D35EB625EDC96D474780EA2DBE2E0A38D3B_gshared)(___0_value, ___1_argName, method);
}
inline void Dictionary_2_set_Item_m266E81996A1E6BFCB7C91E78EC0DB1253655AD48 (Dictionary_2_t01224C8DBCCFE276E97D2BF52F4D7B10D3642682* __this, int32_t ___0_key, bool ___1_value, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t01224C8DBCCFE276E97D2BF52F4D7B10D3642682*, int32_t, bool, const RuntimeMethod*))Dictionary_2_set_Item_m266E81996A1E6BFCB7C91E78EC0DB1253655AD48_gshared)(__this, ___0_key, ___1_value, method);
}
inline bool Dictionary_2_ContainsKey_m5A6361833F0EDADF18530A95D2CF315A0319D8E0 (Dictionary_2_t01224C8DBCCFE276E97D2BF52F4D7B10D3642682* __this, int32_t ___0_key, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t01224C8DBCCFE276E97D2BF52F4D7B10D3642682*, int32_t, const RuntimeMethod*))Dictionary_2_ContainsKey_m5A6361833F0EDADF18530A95D2CF315A0319D8E0_gshared)(__this, ___0_key, method);
}
inline void Dictionary_2__ctor_mC6F01298B65357F322BEE96EE6AF4DC68C22B832 (Dictionary_2_t760E9A9490B53715AE11CA76450386C19A39A0C8* __this, int32_t ___0_capacity, RuntimeObject* ___1_comparer, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t760E9A9490B53715AE11CA76450386C19A39A0C8*, int32_t, RuntimeObject*, const RuntimeMethod*))Dictionary_2__ctor_mC6F01298B65357F322BEE96EE6AF4DC68C22B832_gshared)(__this, ___0_capacity, ___1_comparer, method);
}
inline int32_t Dictionary_2_Initialize_m6E2468392BEC356F498A9CC84BE3FEBCC80DBF0C (Dictionary_2_t760E9A9490B53715AE11CA76450386C19A39A0C8* __this, int32_t ___0_capacity, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Dictionary_2_t760E9A9490B53715AE11CA76450386C19A39A0C8*, int32_t, const RuntimeMethod*))Dictionary_2_Initialize_m6E2468392BEC356F498A9CC84BE3FEBCC80DBF0C_gshared)(__this, ___0_capacity, method);
}
inline void Dictionary_2__ctor_m2FBD8737309023A68D2E75E7E10381889E294752 (Dictionary_2_t760E9A9490B53715AE11CA76450386C19A39A0C8* __this, RuntimeObject* ___0_dictionary, RuntimeObject* ___1_comparer, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t760E9A9490B53715AE11CA76450386C19A39A0C8*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*))Dictionary_2__ctor_m2FBD8737309023A68D2E75E7E10381889E294752_gshared)(__this, ___0_dictionary, ___1_comparer, method);
}
inline void Dictionary_2_Add_m65C453F1100868C469A8E4794AE6DCD76F6AA1A4 (Dictionary_2_t760E9A9490B53715AE11CA76450386C19A39A0C8* __this, int32_t ___0_key, Il2CppChar ___1_value, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t760E9A9490B53715AE11CA76450386C19A39A0C8*, int32_t, Il2CppChar, const RuntimeMethod*))Dictionary_2_Add_m65C453F1100868C469A8E4794AE6DCD76F6AA1A4_gshared)(__this, ___0_key, ___1_value, method);
}
inline int32_t KeyValuePair_2_get_Key_m8862066C052557662F7CFB385CBA6E42C8C92454_inline (KeyValuePair_2_t25871D01DA51BBB8CEF1F27E727B5D3A545FD4EF* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (KeyValuePair_2_t25871D01DA51BBB8CEF1F27E727B5D3A545FD4EF*, const RuntimeMethod*))KeyValuePair_2_get_Key_m8862066C052557662F7CFB385CBA6E42C8C92454_gshared_inline)(__this, method);
}
inline Il2CppChar KeyValuePair_2_get_Value_m6E082F30B5B753C3131FCA1A488A0963333AFD04_inline (KeyValuePair_2_t25871D01DA51BBB8CEF1F27E727B5D3A545FD4EF* __this, const RuntimeMethod* method)
{
	return ((  Il2CppChar (*) (KeyValuePair_2_t25871D01DA51BBB8CEF1F27E727B5D3A545FD4EF*, const RuntimeMethod*))KeyValuePair_2_get_Value_m6E082F30B5B753C3131FCA1A488A0963333AFD04_gshared_inline)(__this, method);
}
inline void KeyCollection__ctor_m757446853A294CCE931D15B5EB195BB85CBA306B (KeyCollection_t3E33C2EB31F1F1EF4ADE3FFFBB7D11E563134D04* __this, Dictionary_2_t760E9A9490B53715AE11CA76450386C19A39A0C8* ___0_dictionary, const RuntimeMethod* method)
{
	((  void (*) (KeyCollection_t3E33C2EB31F1F1EF4ADE3FFFBB7D11E563134D04*, Dictionary_2_t760E9A9490B53715AE11CA76450386C19A39A0C8*, const RuntimeMethod*))KeyCollection__ctor_m757446853A294CCE931D15B5EB195BB85CBA306B_gshared)(__this, ___0_dictionary, method);
}
inline void ValueCollection__ctor_mE012744172537231AC72E669D4FACA17961169E9 (ValueCollection_tDBED056C1C402E2288827E2C0299F425713D8171* __this, Dictionary_2_t760E9A9490B53715AE11CA76450386C19A39A0C8* ___0_dictionary, const RuntimeMethod* method)
{
	((  void (*) (ValueCollection_tDBED056C1C402E2288827E2C0299F425713D8171*, Dictionary_2_t760E9A9490B53715AE11CA76450386C19A39A0C8*, const RuntimeMethod*))ValueCollection__ctor_mE012744172537231AC72E669D4FACA17961169E9_gshared)(__this, ___0_dictionary, method);
}
inline int32_t Dictionary_2_FindEntry_m58E23BFC0BDBD1CC8AC1AD38C4A42190F024EF62 (Dictionary_2_t760E9A9490B53715AE11CA76450386C19A39A0C8* __this, int32_t ___0_key, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Dictionary_2_t760E9A9490B53715AE11CA76450386C19A39A0C8*, int32_t, const RuntimeMethod*))Dictionary_2_FindEntry_m58E23BFC0BDBD1CC8AC1AD38C4A42190F024EF62_gshared)(__this, ___0_key, method);
}
inline bool Dictionary_2_TryInsert_mE950A0E7B2E2D06C4599AB4713A970E9CF17C711 (Dictionary_2_t760E9A9490B53715AE11CA76450386C19A39A0C8* __this, int32_t ___0_key, Il2CppChar ___1_value, uint8_t ___2_behavior, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t760E9A9490B53715AE11CA76450386C19A39A0C8*, int32_t, Il2CppChar, uint8_t, const RuntimeMethod*))Dictionary_2_TryInsert_mE950A0E7B2E2D06C4599AB4713A970E9CF17C711_gshared)(__this, ___0_key, ___1_value, ___2_behavior, method);
}
inline EqualityComparer_1_tCAA8B21BC7E1029BB1288DEAE6D8ACB730BC5D4B* EqualityComparer_1_get_Default_m1D7CFB300C5D4CDC1A3E2D90C684F5AD4C98B8CB_inline (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_tCAA8B21BC7E1029BB1288DEAE6D8ACB730BC5D4B* (*) (const RuntimeMethod*))EqualityComparer_1_get_Default_m1D7CFB300C5D4CDC1A3E2D90C684F5AD4C98B8CB_gshared_inline)(method);
}
inline bool Dictionary_2_Remove_m3AF2AA4CD90907190268440760E0B2BBF55FAD21 (Dictionary_2_t760E9A9490B53715AE11CA76450386C19A39A0C8* __this, int32_t ___0_key, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t760E9A9490B53715AE11CA76450386C19A39A0C8*, int32_t, const RuntimeMethod*))Dictionary_2_Remove_m3AF2AA4CD90907190268440760E0B2BBF55FAD21_gshared)(__this, ___0_key, method);
}
inline int32_t Dictionary_2_get_Count_mF62BC02D0DF4F1E37D59F0D850131620B1FC4EEE (Dictionary_2_t760E9A9490B53715AE11CA76450386C19A39A0C8* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Dictionary_2_t760E9A9490B53715AE11CA76450386C19A39A0C8*, const RuntimeMethod*))Dictionary_2_get_Count_mF62BC02D0DF4F1E37D59F0D850131620B1FC4EEE_gshared)(__this, method);
}
inline void KeyValuePair_2__ctor_mF66F658CB0111305E284C4FD64B6FC4AD62EB5E3 (KeyValuePair_2_t25871D01DA51BBB8CEF1F27E727B5D3A545FD4EF* __this, int32_t ___0_key, Il2CppChar ___1_value, const RuntimeMethod* method)
{
	((  void (*) (KeyValuePair_2_t25871D01DA51BBB8CEF1F27E727B5D3A545FD4EF*, int32_t, Il2CppChar, const RuntimeMethod*))KeyValuePair_2__ctor_mF66F658CB0111305E284C4FD64B6FC4AD62EB5E3_gshared)(__this, ___0_key, ___1_value, method);
}
inline void Enumerator__ctor_m06C5648CD941BE733FD754C942F410D9C85C3583 (Enumerator_tCC8CFFFAC493A1DF0C77EE34CD9E2F5A669A0D88* __this, Dictionary_2_t760E9A9490B53715AE11CA76450386C19A39A0C8* ___0_dictionary, int32_t ___1_getEnumeratorRetType, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tCC8CFFFAC493A1DF0C77EE34CD9E2F5A669A0D88*, Dictionary_2_t760E9A9490B53715AE11CA76450386C19A39A0C8*, int32_t, const RuntimeMethod*))Enumerator__ctor_m06C5648CD941BE733FD754C942F410D9C85C3583_gshared)(__this, ___0_dictionary, ___1_getEnumeratorRetType, method);
}
inline void Dictionary_2_CopyTo_m4D5CDF938A4188C7DC837512841EF76830A24F2A (Dictionary_2_t760E9A9490B53715AE11CA76450386C19A39A0C8* __this, KeyValuePair_2U5BU5D_t185EF1C22979145FBA3233EFBDF557ECDC08113C* ___0_array, int32_t ___1_index, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t760E9A9490B53715AE11CA76450386C19A39A0C8*, KeyValuePair_2U5BU5D_t185EF1C22979145FBA3233EFBDF557ECDC08113C*, int32_t, const RuntimeMethod*))Dictionary_2_CopyTo_m4D5CDF938A4188C7DC837512841EF76830A24F2A_gshared)(__this, ___0_array, ___1_index, method);
}
inline void Dictionary_2_Resize_mA87ED035CFF022A4C8B2B4E6D720EEB965ACE893 (Dictionary_2_t760E9A9490B53715AE11CA76450386C19A39A0C8* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t760E9A9490B53715AE11CA76450386C19A39A0C8*, const RuntimeMethod*))Dictionary_2_Resize_mA87ED035CFF022A4C8B2B4E6D720EEB965ACE893_gshared)(__this, method);
}
inline void Dictionary_2_Resize_mAA34C20A111880E1891639C7022D73FED4DCE18B (Dictionary_2_t760E9A9490B53715AE11CA76450386C19A39A0C8* __this, int32_t ___0_newSize, bool ___1_forceNewHashCodes, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t760E9A9490B53715AE11CA76450386C19A39A0C8*, int32_t, bool, const RuntimeMethod*))Dictionary_2_Resize_mAA34C20A111880E1891639C7022D73FED4DCE18B_gshared)(__this, ___0_newSize, ___1_forceNewHashCodes, method);
}
inline KeyCollection_t3E33C2EB31F1F1EF4ADE3FFFBB7D11E563134D04* Dictionary_2_get_Keys_m28C150C463713CAC4B143915504A3B0597A68CDC (Dictionary_2_t760E9A9490B53715AE11CA76450386C19A39A0C8* __this, const RuntimeMethod* method)
{
	return ((  KeyCollection_t3E33C2EB31F1F1EF4ADE3FFFBB7D11E563134D04* (*) (Dictionary_2_t760E9A9490B53715AE11CA76450386C19A39A0C8*, const RuntimeMethod*))Dictionary_2_get_Keys_m28C150C463713CAC4B143915504A3B0597A68CDC_gshared)(__this, method);
}
inline bool Dictionary_2_IsCompatibleKey_mEA7DD561D5EC989C7D6E52D8242DAA108CC884CA (RuntimeObject* ___0_key, const RuntimeMethod* method)
{
	return ((  bool (*) (RuntimeObject*, const RuntimeMethod*))Dictionary_2_IsCompatibleKey_mEA7DD561D5EC989C7D6E52D8242DAA108CC884CA_gshared)(___0_key, method);
}
inline void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m824F1B8830C5D9946D6CDF297C66FABC7E1A94F2 (RuntimeObject* ___0_value, int32_t ___1_argName, const RuntimeMethod* method)
{
	((  void (*) (RuntimeObject*, int32_t, const RuntimeMethod*))ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m824F1B8830C5D9946D6CDF297C66FABC7E1A94F2_gshared)(___0_value, ___1_argName, method);
}
inline void Dictionary_2_set_Item_mCDEFF5FEE05146FB5547F35FA1AC420B6E750E5F (Dictionary_2_t760E9A9490B53715AE11CA76450386C19A39A0C8* __this, int32_t ___0_key, Il2CppChar ___1_value, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t760E9A9490B53715AE11CA76450386C19A39A0C8*, int32_t, Il2CppChar, const RuntimeMethod*))Dictionary_2_set_Item_mCDEFF5FEE05146FB5547F35FA1AC420B6E750E5F_gshared)(__this, ___0_key, ___1_value, method);
}
inline bool Dictionary_2_ContainsKey_mFEF31529C09939D463552C900419ABCC2B05B354 (Dictionary_2_t760E9A9490B53715AE11CA76450386C19A39A0C8* __this, int32_t ___0_key, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t760E9A9490B53715AE11CA76450386C19A39A0C8*, int32_t, const RuntimeMethod*))Dictionary_2_ContainsKey_mFEF31529C09939D463552C900419ABCC2B05B354_gshared)(__this, ___0_key, method);
}
inline void List_1_AddWithResize_m79A9BF770BEF9C06BE40D5401E55E375F2726CC4 (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, RuntimeObject*, const RuntimeMethod*))List_1_AddWithResize_m79A9BF770BEF9C06BE40D5401E55E375F2726CC4_gshared)(__this, ___0_item, method);
}
inline EqualityComparer_1_t39F37BD252745ACD048E411385EBDFBABD5BBFAE* EqualityComparer_1_CreateComparer_mE9DC7CAF58EE3B2D235851CCFF895CD1C51F3E6B (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_t39F37BD252745ACD048E411385EBDFBABD5BBFAE* (*) (const RuntimeMethod*))EqualityComparer_1_CreateComparer_mE9DC7CAF58EE3B2D235851CCFF895CD1C51F3E6B_gshared)(method);
}
inline EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* EqualityComparer_1_CreateComparer_mD2FA619307513193746FBEB5AE522FB54E21B634 (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* (*) (const RuntimeMethod*))EqualityComparer_1_CreateComparer_mD2FA619307513193746FBEB5AE522FB54E21B634_gshared)(method);
}
inline EqualityComparer_1_tAAD1A76C30594C4D736E586B3D77281A53A27399* EqualityComparer_1_CreateComparer_mD3D60BAB4A1E7DF8FDC8779F5A1A3104CAD5202A (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_tAAD1A76C30594C4D736E586B3D77281A53A27399* (*) (const RuntimeMethod*))EqualityComparer_1_CreateComparer_mD3D60BAB4A1E7DF8FDC8779F5A1A3104CAD5202A_gshared)(method);
}
inline EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* EqualityComparer_1_CreateComparer_m432C82F7354C37E610794C1DA866DFA7DAC9C35E (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* (*) (const RuntimeMethod*))EqualityComparer_1_CreateComparer_m432C82F7354C37E610794C1DA866DFA7DAC9C35E_gshared)(method);
}
inline EqualityComparer_1_t8EE005CC277EC77E0AFAB9930C9285E3DE4C677B* EqualityComparer_1_CreateComparer_mCF9A6FD34089F19E4321806469AE45B2618C11CE (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_t8EE005CC277EC77E0AFAB9930C9285E3DE4C677B* (*) (const RuntimeMethod*))EqualityComparer_1_CreateComparer_mCF9A6FD34089F19E4321806469AE45B2618C11CE_gshared)(method);
}
inline EqualityComparer_1_t8DFD15807C95203DA08FAD2838BD16CE1C70A17E* EqualityComparer_1_CreateComparer_m41D90357AC3F6FAA8367BD3AC2D49DE5CD85ECC9 (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_t8DFD15807C95203DA08FAD2838BD16CE1C70A17E* (*) (const RuntimeMethod*))EqualityComparer_1_CreateComparer_m41D90357AC3F6FAA8367BD3AC2D49DE5CD85ECC9_gshared)(method);
}
inline EqualityComparer_1_t97160852989689D9543E2E1EA7D7196DBEA5AEE4* EqualityComparer_1_CreateComparer_m3BD7BED1F69ABEE55E320BA9CCFBB473E9F57C66 (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_t97160852989689D9543E2E1EA7D7196DBEA5AEE4* (*) (const RuntimeMethod*))EqualityComparer_1_CreateComparer_m3BD7BED1F69ABEE55E320BA9CCFBB473E9F57C66_gshared)(method);
}
inline EqualityComparer_1_tCAA8B21BC7E1029BB1288DEAE6D8ACB730BC5D4B* EqualityComparer_1_CreateComparer_m8D41903BD474DD9CEBD9B11C2D89FF5798C63F93 (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_tCAA8B21BC7E1029BB1288DEAE6D8ACB730BC5D4B* (*) (const RuntimeMethod*))EqualityComparer_1_CreateComparer_m8D41903BD474DD9CEBD9B11C2D89FF5798C63F93_gshared)(method);
}
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DictionaryEnumerator__ctor_mE63FC46E53E46535C7DD59172E65E42BD570D5F3_gshared (DictionaryEnumerator_t50968DBECB732082714E6294722DC51777C8A22A* __this, ConcurrentDictionary_2_t6DF554984593E2F9932FAFBF9E1AFD30D1ED0812* ___0_dictionary, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		ConcurrentDictionary_2_t6DF554984593E2F9932FAFBF9E1AFD30D1ED0812* L_0 = ___0_dictionary;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = ((  RuntimeObject* (*) (ConcurrentDictionary_2_t6DF554984593E2F9932FAFBF9E1AFD30D1ED0812*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 1)))(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 1));
		__this->____enumerator_0 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____enumerator_0), (void*)L_1);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB DictionaryEnumerator_get_Entry_m6EB9062A7B59C89B18B6B61214B707BE4AA44086_gshared (DictionaryEnumerator_t50968DBECB732082714E6294722DC51777C8A22A* __this, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_KeyValuePair_2_t7B799B8ED9C86E8E9BC5354DE4FDABD0184FF6B7 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 5));
	const uint32_t SizeOf_TKey_t41C513A174F5F1C2B7E599C2ECFAF69540C6C9C7 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 7));
	const Il2CppFullySharedGenericAny L_2 = alloca(SizeOf_TKey_t41C513A174F5F1C2B7E599C2ECFAF69540C6C9C7);
	const uint32_t SizeOf_TValue_t9F4D688327705ABBE7AC2FE14F9F923B56192632 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9));
	const Il2CppFullySharedGenericAny L_6 = alloca(SizeOf_TValue_t9F4D688327705ABBE7AC2FE14F9F923B56192632);
	const KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669 L_1 = alloca(SizeOf_KeyValuePair_2_t7B799B8ED9C86E8E9BC5354DE4FDABD0184FF6B7);
	const KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669 L_5 = alloca(SizeOf_KeyValuePair_2_t7B799B8ED9C86E8E9BC5354DE4FDABD0184FF6B7);
	KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669 V_0 = alloca(SizeOf_KeyValuePair_2_t7B799B8ED9C86E8E9BC5354DE4FDABD0184FF6B7);
	memset(V_0, 0, SizeOf_KeyValuePair_2_t7B799B8ED9C86E8E9BC5354DE4FDABD0184FF6B7);
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->____enumerator_0;
		NullCheck(L_0);
		InterfaceActionInvoker1Invoker< KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 2), L_0, (KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669*)L_1);
		il2cpp_codegen_memcpy(V_0, L_1, SizeOf_KeyValuePair_2_t7B799B8ED9C86E8E9BC5354DE4FDABD0184FF6B7);
		InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 6)), il2cpp_rgctx_method(method->klass->rgctx_data, 6), (KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669*)V_0, (Il2CppFullySharedGenericAny*)L_2);
		RuntimeObject* L_3 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 7), L_2);
		RuntimeObject* L_4 = (RuntimeObject*)__this->____enumerator_0;
		NullCheck(L_4);
		InterfaceActionInvoker1Invoker< KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 2), L_4, (KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669*)L_5);
		il2cpp_codegen_memcpy(V_0, L_5, SizeOf_KeyValuePair_2_t7B799B8ED9C86E8E9BC5354DE4FDABD0184FF6B7);
		InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)), il2cpp_rgctx_method(method->klass->rgctx_data, 8), (KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669*)V_0, (Il2CppFullySharedGenericAny*)L_6);
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9), L_6);
		DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB L_8;
		memset((&L_8), 0, sizeof(L_8));
		DictionaryEntry__ctor_m2768353E53A75C4860E34B37DAF1342120C5D1EA((&L_8), L_3, L_7, NULL);
		return L_8;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DictionaryEnumerator_get_Key_m0990C99F94EA95C5392CA5485B4BFD344BAED6FE_gshared (DictionaryEnumerator_t50968DBECB732082714E6294722DC51777C8A22A* __this, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_KeyValuePair_2_t7B799B8ED9C86E8E9BC5354DE4FDABD0184FF6B7 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 5));
	const uint32_t SizeOf_TKey_t41C513A174F5F1C2B7E599C2ECFAF69540C6C9C7 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 7));
	const Il2CppFullySharedGenericAny L_2 = alloca(SizeOf_TKey_t41C513A174F5F1C2B7E599C2ECFAF69540C6C9C7);
	const KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669 L_1 = alloca(SizeOf_KeyValuePair_2_t7B799B8ED9C86E8E9BC5354DE4FDABD0184FF6B7);
	KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669 V_0 = alloca(SizeOf_KeyValuePair_2_t7B799B8ED9C86E8E9BC5354DE4FDABD0184FF6B7);
	memset(V_0, 0, SizeOf_KeyValuePair_2_t7B799B8ED9C86E8E9BC5354DE4FDABD0184FF6B7);
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->____enumerator_0;
		NullCheck(L_0);
		InterfaceActionInvoker1Invoker< KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 2), L_0, (KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669*)L_1);
		il2cpp_codegen_memcpy(V_0, L_1, SizeOf_KeyValuePair_2_t7B799B8ED9C86E8E9BC5354DE4FDABD0184FF6B7);
		InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 6)), il2cpp_rgctx_method(method->klass->rgctx_data, 6), (KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669*)V_0, (Il2CppFullySharedGenericAny*)L_2);
		RuntimeObject* L_3 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 7), L_2);
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DictionaryEnumerator_get_Value_mD790494FF5E50257030CC045B516A70513EE98A8_gshared (DictionaryEnumerator_t50968DBECB732082714E6294722DC51777C8A22A* __this, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_KeyValuePair_2_t7B799B8ED9C86E8E9BC5354DE4FDABD0184FF6B7 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 5));
	const uint32_t SizeOf_TValue_t9F4D688327705ABBE7AC2FE14F9F923B56192632 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9));
	const Il2CppFullySharedGenericAny L_2 = alloca(SizeOf_TValue_t9F4D688327705ABBE7AC2FE14F9F923B56192632);
	const KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669 L_1 = alloca(SizeOf_KeyValuePair_2_t7B799B8ED9C86E8E9BC5354DE4FDABD0184FF6B7);
	KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669 V_0 = alloca(SizeOf_KeyValuePair_2_t7B799B8ED9C86E8E9BC5354DE4FDABD0184FF6B7);
	memset(V_0, 0, SizeOf_KeyValuePair_2_t7B799B8ED9C86E8E9BC5354DE4FDABD0184FF6B7);
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->____enumerator_0;
		NullCheck(L_0);
		InterfaceActionInvoker1Invoker< KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 2), L_0, (KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669*)L_1);
		il2cpp_codegen_memcpy(V_0, L_1, SizeOf_KeyValuePair_2_t7B799B8ED9C86E8E9BC5354DE4FDABD0184FF6B7);
		InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)), il2cpp_rgctx_method(method->klass->rgctx_data, 8), (KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669*)V_0, (Il2CppFullySharedGenericAny*)L_2);
		RuntimeObject* L_3 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9), L_2);
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DictionaryEnumerator_get_Current_m84A050320869FF83584304FF56D3BA05368095F2_gshared (DictionaryEnumerator_t50968DBECB732082714E6294722DC51777C8A22A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB L_0;
		L_0 = ((  DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB (*) (DictionaryEnumerator_t50968DBECB732082714E6294722DC51777C8A22A*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 10)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB L_1 = L_0;
		RuntimeObject* L_2 = Box(DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB_il2cpp_TypeInfo_var, &L_1);
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DictionaryEnumerator_MoveNext_mCD670B5AE8886409051790844BF74853977F5846_gshared (DictionaryEnumerator_t50968DBECB732082714E6294722DC51777C8A22A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->____enumerator_0;
		NullCheck((RuntimeObject*)L_0);
		bool L_1;
		L_1 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_0);
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DictionaryEnumerator_Reset_mBAC7702D03B6B7A6496AA713EC06CE6162127B2C_gshared (DictionaryEnumerator_t50968DBECB732082714E6294722DC51777C8A22A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->____enumerator_0;
		NullCheck((RuntimeObject*)L_0);
		InterfaceActionInvoker0::Invoke(2, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_0);
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DictionaryList_2_Add_m28EF491B51308ED9ABA85B0705E06602FC809DD1_gshared (DictionaryList_2_t482ED02756A61A932B8B20ABAE5B6FA2F9260992* __this, RuntimeObject* ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) 
{
	List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* V_0 = NULL;
	{
		RuntimeObject* L_0 = ___0_key;
		bool L_1;
		L_1 = DictionaryList_2_TryGetValue_m7583F8110805F5B5CB43FE5A2DD49108DF4B2D22(__this, L_0, (&V_0), il2cpp_rgctx_method(method->klass->rgctx_data, 1));
		if (L_1)
		{
			goto IL_0018;
		}
	}
	{
		Dictionary_2_t07F043B93235170E47B40DB71B2E46256D11FD3A* L_2 = (Dictionary_2_t07F043B93235170E47B40DB71B2E46256D11FD3A*)__this->___dictionary_0;
		RuntimeObject* L_3 = ___0_key;
		List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* L_4 = V_0;
		NullCheck(L_2);
		Dictionary_2_set_Item_m735DCEC880A3C4930D44557AF9F397BD37AE875F(L_2, L_3, L_4, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
	}

IL_0018:
	{
		List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* L_5 = V_0;
		RuntimeObject* L_6 = ___1_value;
		NullCheck(L_5);
		List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_inline(L_5, L_6, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DictionaryList_2_RemoveAt_mD0314F91FB65553E615D0D6DB9E96991CF37D9F4_gshared (DictionaryList_2_t482ED02756A61A932B8B20ABAE5B6FA2F9260992* __this, RuntimeObject* ___0_key, int32_t ___1_index, const RuntimeMethod* method) 
{
	List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* V_0 = NULL;
	{
		RuntimeObject* L_0 = ___0_key;
		bool L_1;
		L_1 = DictionaryList_2_TryGetValue_m7583F8110805F5B5CB43FE5A2DD49108DF4B2D22(__this, L_0, (&V_0), il2cpp_rgctx_method(method->klass->rgctx_data, 1));
		if (!L_1)
		{
			goto IL_0012;
		}
	}
	{
		List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* L_2 = V_0;
		int32_t L_3 = ___1_index;
		NullCheck(L_2);
		List_1_RemoveAt_m54F62297ADEE4D4FDA697F49ED807BF901201B54(L_2, L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
	}

IL_0012:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DictionaryList_2_Remove_m9E661627635A1A899B8B99AD330F3C50959FD8DE_gshared (DictionaryList_2_t482ED02756A61A932B8B20ABAE5B6FA2F9260992* __this, RuntimeObject* ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) 
{
	List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* V_0 = NULL;
	{
		RuntimeObject* L_0 = ___0_key;
		bool L_1;
		L_1 = DictionaryList_2_TryGetValue_m7583F8110805F5B5CB43FE5A2DD49108DF4B2D22(__this, L_0, (&V_0), il2cpp_rgctx_method(method->klass->rgctx_data, 1));
		if (!L_1)
		{
			goto IL_0013;
		}
	}
	{
		List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* L_2 = V_0;
		RuntimeObject* L_3 = ___1_value;
		NullCheck(L_2);
		bool L_4;
		L_4 = List_1_Remove_m4DFA48F4CEB9169601E75FC28517C5C06EFA5AD7(L_2, L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
	}

IL_0013:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* DictionaryList_2_get_Item_mDAE645E8F06B21E4712E51D89DA26072A1598735_gshared (DictionaryList_2_t482ED02756A61A932B8B20ABAE5B6FA2F9260992* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) 
{
	List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* V_0 = NULL;
	{
		RuntimeObject* L_0 = ___0_key;
		bool L_1;
		L_1 = DictionaryList_2_TryGetValue_m7583F8110805F5B5CB43FE5A2DD49108DF4B2D22(__this, L_0, (&V_0), il2cpp_rgctx_method(method->klass->rgctx_data, 1));
		if (L_1)
		{
			goto IL_001e;
		}
	}
	{
		List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* L_2 = (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 6));
		List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690(L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		V_0 = L_2;
		Dictionary_2_t07F043B93235170E47B40DB71B2E46256D11FD3A* L_3 = (Dictionary_2_t07F043B93235170E47B40DB71B2E46256D11FD3A*)__this->___dictionary_0;
		RuntimeObject* L_4 = ___0_key;
		List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* L_5 = V_0;
		NullCheck(L_3);
		Dictionary_2_set_Item_m735DCEC880A3C4930D44557AF9F397BD37AE875F(L_3, L_4, L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
	}

IL_001e:
	{
		List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* L_6 = V_0;
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DictionaryList_2_set_Item_mCAEA2514C2C5AFED97E6F26B375D8AFF96EF86AC_gshared (DictionaryList_2_t482ED02756A61A932B8B20ABAE5B6FA2F9260992* __this, RuntimeObject* ___0_key, List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* ___1_value, const RuntimeMethod* method) 
{
	{
		Dictionary_2_t07F043B93235170E47B40DB71B2E46256D11FD3A* L_0 = (Dictionary_2_t07F043B93235170E47B40DB71B2E46256D11FD3A*)__this->___dictionary_0;
		RuntimeObject* L_1 = ___0_key;
		List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* L_2 = ___1_value;
		NullCheck(L_0);
		Dictionary_2_set_Item_m735DCEC880A3C4930D44557AF9F397BD37AE875F(L_0, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DictionaryList_2_TryGetValue_m7583F8110805F5B5CB43FE5A2DD49108DF4B2D22_gshared (DictionaryList_2_t482ED02756A61A932B8B20ABAE5B6FA2F9260992* __this, RuntimeObject* ___0_key, List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D** ___1_values, const RuntimeMethod* method) 
{
	{
		Dictionary_2_t07F043B93235170E47B40DB71B2E46256D11FD3A* L_0 = (Dictionary_2_t07F043B93235170E47B40DB71B2E46256D11FD3A*)__this->___dictionary_0;
		RuntimeObject* L_1 = ___0_key;
		List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D** L_2 = ___1_values;
		NullCheck(L_0);
		bool L_3;
		L_3 = Dictionary_2_TryGetValue_m6ABC1A4567E6D66B97940C521E2070C885D0FA5C(L_0, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		if (L_3)
		{
			goto IL_0018;
		}
	}
	{
		List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D** L_4 = ___1_values;
		List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* L_5 = (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 6));
		List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690(L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		*((RuntimeObject**)L_4) = (RuntimeObject*)L_5;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_4, (void*)(RuntimeObject*)L_5);
		return (bool)0;
	}

IL_0018:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DictionaryList_2__ctor_m53645E19A2365F4398503BDA2082D7F172A54049_gshared (DictionaryList_2_t482ED02756A61A932B8B20ABAE5B6FA2F9260992* __this, const RuntimeMethod* method) 
{
	{
		Dictionary_2_t07F043B93235170E47B40DB71B2E46256D11FD3A* L_0 = (Dictionary_2_t07F043B93235170E47B40DB71B2E46256D11FD3A*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 4));
		Dictionary_2__ctor_mF0CA0EA171277C940A07AC9D79E05452F1F806B7(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 13));
		__this->___dictionary_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___dictionary_0), (void*)L_0);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DictionaryList_2_Add_m2C4B64A2E3A9B45CD882A11771030D32DB63610D_gshared (DictionaryList_2_t620EEEAEC8816E3C2F0E68BFAE56F9F81D91E229* __this, Il2CppFullySharedGenericAny ___0_key, Il2CppFullySharedGenericAny ___1_value, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_t40563C917D321D0AA56985166E110726B8DA80E1 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0));
	const uint32_t SizeOf_U_t1525747CA2D14854008D8F3552AE5A9758532EE8 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 7));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_T_t40563C917D321D0AA56985166E110726B8DA80E1);
	const Il2CppFullySharedGenericAny L_3 = L_0;
	const Il2CppFullySharedGenericAny L_6 = alloca(SizeOf_U_t1525747CA2D14854008D8F3552AE5A9758532EE8);
	List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* V_0 = NULL;
	{
		il2cpp_codegen_memcpy(L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0)) ? ___0_key : &___0_key), SizeOf_T_t40563C917D321D0AA56985166E110726B8DA80E1);
		bool L_1;
		L_1 = InvokerFuncInvoker2< bool, Il2CppFullySharedGenericAny, List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A** >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 1)), il2cpp_rgctx_method(method->klass->rgctx_data, 1), __this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0)) ? L_0: *(void**)L_0), (&V_0));
		if (L_1)
		{
			goto IL_0018;
		}
	}
	{
		Dictionary_2_t23FAF4248F9B379520F4956DE1E5CB2F186F7214* L_2 = (Dictionary_2_t23FAF4248F9B379520F4956DE1E5CB2F186F7214*)__this->___dictionary_0;
		il2cpp_codegen_memcpy(L_3, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0)) ? ___0_key : &___0_key), SizeOf_T_t40563C917D321D0AA56985166E110726B8DA80E1);
		List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* L_4 = V_0;
		NullCheck(L_2);
		InvokerActionInvoker2< Il2CppFullySharedGenericAny, List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 5)), il2cpp_rgctx_method(method->klass->rgctx_data, 5), L_2, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0)) ? L_3: *(void**)L_3), L_4);
	}

IL_0018:
	{
		List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* L_5 = V_0;
		il2cpp_codegen_memcpy(L_6, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 7)) ? ___1_value : &___1_value), SizeOf_U_t1525747CA2D14854008D8F3552AE5A9758532EE8);
		NullCheck(L_5);
		InvokerActionInvoker1< Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)), il2cpp_rgctx_method(method->klass->rgctx_data, 8), L_5, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 7)) ? L_6: *(void**)L_6));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DictionaryList_2_RemoveAt_m027C9B0BB36281A6FFC59CA981FC6058D4DF007E_gshared (DictionaryList_2_t620EEEAEC8816E3C2F0E68BFAE56F9F81D91E229* __this, Il2CppFullySharedGenericAny ___0_key, int32_t ___1_index, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_t40563C917D321D0AA56985166E110726B8DA80E1 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_T_t40563C917D321D0AA56985166E110726B8DA80E1);
	List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* V_0 = NULL;
	{
		il2cpp_codegen_memcpy(L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0)) ? ___0_key : &___0_key), SizeOf_T_t40563C917D321D0AA56985166E110726B8DA80E1);
		bool L_1;
		L_1 = InvokerFuncInvoker2< bool, Il2CppFullySharedGenericAny, List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A** >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 1)), il2cpp_rgctx_method(method->klass->rgctx_data, 1), __this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0)) ? L_0: *(void**)L_0), (&V_0));
		if (!L_1)
		{
			goto IL_0012;
		}
	}
	{
		List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* L_2 = V_0;
		int32_t L_3 = ___1_index;
		NullCheck(L_2);
		((  void (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 9)))(L_2, L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
	}

IL_0012:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DictionaryList_2_Remove_mAFF0CFAD718414751FD5D73ABE2188F693886DD6_gshared (DictionaryList_2_t620EEEAEC8816E3C2F0E68BFAE56F9F81D91E229* __this, Il2CppFullySharedGenericAny ___0_key, Il2CppFullySharedGenericAny ___1_value, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_t40563C917D321D0AA56985166E110726B8DA80E1 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0));
	const uint32_t SizeOf_U_t1525747CA2D14854008D8F3552AE5A9758532EE8 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 7));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_T_t40563C917D321D0AA56985166E110726B8DA80E1);
	const Il2CppFullySharedGenericAny L_3 = alloca(SizeOf_U_t1525747CA2D14854008D8F3552AE5A9758532EE8);
	List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* V_0 = NULL;
	{
		il2cpp_codegen_memcpy(L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0)) ? ___0_key : &___0_key), SizeOf_T_t40563C917D321D0AA56985166E110726B8DA80E1);
		bool L_1;
		L_1 = InvokerFuncInvoker2< bool, Il2CppFullySharedGenericAny, List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A** >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 1)), il2cpp_rgctx_method(method->klass->rgctx_data, 1), __this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0)) ? L_0: *(void**)L_0), (&V_0));
		if (!L_1)
		{
			goto IL_0013;
		}
	}
	{
		List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* L_2 = V_0;
		il2cpp_codegen_memcpy(L_3, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 7)) ? ___1_value : &___1_value), SizeOf_U_t1525747CA2D14854008D8F3552AE5A9758532EE8);
		NullCheck(L_2);
		bool L_4;
		L_4 = InvokerFuncInvoker1< bool, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 10)), il2cpp_rgctx_method(method->klass->rgctx_data, 10), L_2, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 7)) ? L_3: *(void**)L_3));
	}

IL_0013:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* DictionaryList_2_get_Item_m5D4ECD64E0681469232425D6A4AF1161DAA72DB9_gshared (DictionaryList_2_t620EEEAEC8816E3C2F0E68BFAE56F9F81D91E229* __this, Il2CppFullySharedGenericAny ___0_key, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_t40563C917D321D0AA56985166E110726B8DA80E1 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_T_t40563C917D321D0AA56985166E110726B8DA80E1);
	const Il2CppFullySharedGenericAny L_4 = L_0;
	List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* V_0 = NULL;
	{
		il2cpp_codegen_memcpy(L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0)) ? ___0_key : &___0_key), SizeOf_T_t40563C917D321D0AA56985166E110726B8DA80E1);
		bool L_1;
		L_1 = InvokerFuncInvoker2< bool, Il2CppFullySharedGenericAny, List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A** >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 1)), il2cpp_rgctx_method(method->klass->rgctx_data, 1), __this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0)) ? L_0: *(void**)L_0), (&V_0));
		if (L_1)
		{
			goto IL_001e;
		}
	}
	{
		List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* L_2 = (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 6));
		((  void (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		V_0 = L_2;
		Dictionary_2_t23FAF4248F9B379520F4956DE1E5CB2F186F7214* L_3 = (Dictionary_2_t23FAF4248F9B379520F4956DE1E5CB2F186F7214*)__this->___dictionary_0;
		il2cpp_codegen_memcpy(L_4, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0)) ? ___0_key : &___0_key), SizeOf_T_t40563C917D321D0AA56985166E110726B8DA80E1);
		List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* L_5 = V_0;
		NullCheck(L_3);
		InvokerActionInvoker2< Il2CppFullySharedGenericAny, List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 5)), il2cpp_rgctx_method(method->klass->rgctx_data, 5), L_3, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0)) ? L_4: *(void**)L_4), L_5);
	}

IL_001e:
	{
		List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* L_6 = V_0;
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DictionaryList_2_set_Item_m19F39264557DC86C9A98F5BC339B3D0A4BDA617F_gshared (DictionaryList_2_t620EEEAEC8816E3C2F0E68BFAE56F9F81D91E229* __this, Il2CppFullySharedGenericAny ___0_key, List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* ___1_value, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_t40563C917D321D0AA56985166E110726B8DA80E1 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0));
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_T_t40563C917D321D0AA56985166E110726B8DA80E1);
	{
		Dictionary_2_t23FAF4248F9B379520F4956DE1E5CB2F186F7214* L_0 = (Dictionary_2_t23FAF4248F9B379520F4956DE1E5CB2F186F7214*)__this->___dictionary_0;
		il2cpp_codegen_memcpy(L_1, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0)) ? ___0_key : &___0_key), SizeOf_T_t40563C917D321D0AA56985166E110726B8DA80E1);
		List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* L_2 = ___1_value;
		NullCheck(L_0);
		InvokerActionInvoker2< Il2CppFullySharedGenericAny, List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 5)), il2cpp_rgctx_method(method->klass->rgctx_data, 5), L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0)) ? L_1: *(void**)L_1), L_2);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DictionaryList_2_TryGetValue_m9597EFD161A235E307E87DF92C98B77CC53208B6_gshared (DictionaryList_2_t620EEEAEC8816E3C2F0E68BFAE56F9F81D91E229* __this, Il2CppFullySharedGenericAny ___0_key, List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A** ___1_values, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_t40563C917D321D0AA56985166E110726B8DA80E1 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0));
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_T_t40563C917D321D0AA56985166E110726B8DA80E1);
	{
		Dictionary_2_t23FAF4248F9B379520F4956DE1E5CB2F186F7214* L_0 = (Dictionary_2_t23FAF4248F9B379520F4956DE1E5CB2F186F7214*)__this->___dictionary_0;
		il2cpp_codegen_memcpy(L_1, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0)) ? ___0_key : &___0_key), SizeOf_T_t40563C917D321D0AA56985166E110726B8DA80E1);
		List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A** L_2 = ___1_values;
		NullCheck(L_0);
		bool L_3;
		L_3 = InvokerFuncInvoker2< bool, Il2CppFullySharedGenericAny, List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A** >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 12)), il2cpp_rgctx_method(method->klass->rgctx_data, 12), L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0)) ? L_1: *(void**)L_1), L_2);
		if (L_3)
		{
			goto IL_0018;
		}
	}
	{
		List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A** L_4 = ___1_values;
		List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* L_5 = (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 6));
		((  void (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		*((RuntimeObject**)L_4) = (RuntimeObject*)L_5;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_4, (void*)(RuntimeObject*)L_5);
		return (bool)0;
	}

IL_0018:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DictionaryList_2__ctor_m3D82FFF488B04B172B461899E899417CC349D560_gshared (DictionaryList_2_t620EEEAEC8816E3C2F0E68BFAE56F9F81D91E229* __this, const RuntimeMethod* method) 
{
	{
		Dictionary_2_t23FAF4248F9B379520F4956DE1E5CB2F186F7214* L_0 = (Dictionary_2_t23FAF4248F9B379520F4956DE1E5CB2F186F7214*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 4));
		((  void (*) (Dictionary_2_t23FAF4248F9B379520F4956DE1E5CB2F186F7214*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 13)))(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 13));
		__this->___dictionary_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___dictionary_0), (void*)L_0);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DictionaryPropertyBag_2_get_InstantiationKind_m641573CD1323CD15A7F099323BA1B2546F063182_gshared (DictionaryPropertyBag_2_tB597C417CF7505B25BF7B87BA095BDE4F999B934* __this, const RuntimeMethod* method) 
{
	{
		return (int32_t)(1);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* DictionaryPropertyBag_2_Instantiate_m7778199CDF045586687AB5A9F377D8FB3786C1E0_gshared (DictionaryPropertyBag_2_tB597C417CF7505B25BF7B87BA095BDE4F999B934* __this, const RuntimeMethod* method) 
{
	{
		Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* L_0 = (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 0));
		((  void (*) (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 1)))(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 1));
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DictionaryPropertyBag_2__ctor_m8FC636BBC54135160381FA25CF825CCC925E5E33_gshared (DictionaryPropertyBag_2_tB597C417CF7505B25BF7B87BA095BDE4F999B934* __this, const RuntimeMethod* method) 
{
	{
		((  void (*) (KeyValueCollectionPropertyBag_3_t5E0DC90A64EA0D5A2ECA5F96F46C708F625A8D08*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))((KeyValueCollectionPropertyBag_3_t5E0DC90A64EA0D5A2ECA5F96F46C708F625A8D08*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mC25FF6793652922985BFAA4DC8F11A4B0B090CF8_gshared (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* __this, const RuntimeMethod* method) 
{
	{
		Dictionary_2__ctor_m18EC2EB0F8F881C57774CFDDE6414E33F26F1539(__this, 0, (RuntimeObject*)NULL, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mA647361FB5882A25C765F596760030CB84824C97_gshared (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_capacity;
		Dictionary_2__ctor_m18EC2EB0F8F881C57774CFDDE6414E33F26F1539(__this, L_0, (RuntimeObject*)NULL, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mF092F25D416129BCC755E245CEC88345A7E17540_gshared (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_comparer;
		Dictionary_2__ctor_m18EC2EB0F8F881C57774CFDDE6414E33F26F1539(__this, 0, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m18EC2EB0F8F881C57774CFDDE6414E33F26F1539_gshared (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* __this, int32_t ___0_capacity, RuntimeObject* ___1_comparer, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		int32_t L_0 = ___0_capacity;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0011;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m9B335696876184D17D1F8D7AF94C1B5B0869AA97((int32_t)((int32_t)12), NULL);
	}

IL_0011:
	{
		int32_t L_1 = ___0_capacity;
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_001d;
		}
	}
	{
		int32_t L_2 = ___0_capacity;
		int32_t L_3;
		L_3 = Dictionary_2_Initialize_m7165BFCECD406FEF2F6EA0DCDDF34B2450CA12E4(__this, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
	}

IL_001d:
	{
		RuntimeObject* L_4 = ___1_comparer;
		EqualityComparer_1_t39F37BD252745ACD048E411385EBDFBABD5BBFAE* L_5;
		L_5 = EqualityComparer_1_get_Default_m337E4360DF25127CED0E5DEC4827A905E8EBA5E0_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		if ((((RuntimeObject*)(RuntimeObject*)L_4) == ((RuntimeObject*)(EqualityComparer_1_t39F37BD252745ACD048E411385EBDFBABD5BBFAE*)L_5)))
		{
			goto IL_002c;
		}
	}
	{
		RuntimeObject* L_6 = ___1_comparer;
		__this->____comparer_6 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____comparer_6), (void*)L_6);
	}

IL_002c:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mD64AC3C289EB7ACAB466AD0B5341F3609CB55199_gshared (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* __this, RuntimeObject* ___0_dictionary, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_dictionary;
		Dictionary_2__ctor_m7A61548B3B1ACAA1527C5C5E21965656EA2C14B5(__this, L_0, (RuntimeObject*)NULL, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m7A61548B3B1ACAA1527C5C5E21965656EA2C14B5_gshared (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* __this, RuntimeObject* ___0_dictionary, RuntimeObject* ___1_comparer, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* V_1 = NULL;
	int32_t V_2 = 0;
	RuntimeObject* V_3 = NULL;
	KeyValuePair_2_t2A9D1B7DEBB99A68011F37B017FDD44CFE5AEC14 V_4;
	memset((&V_4), 0, sizeof(V_4));
	Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* G_B2_0 = NULL;
	Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* G_B3_1 = NULL;
	{
		RuntimeObject* L_0 = ___0_dictionary;
		if (L_0)
		{
			G_B2_0 = __this;
			goto IL_0007;
		}
		G_B1_0 = __this;
	}
	{
		G_B3_0 = 0;
		G_B3_1 = G_B1_0;
		goto IL_000d;
	}

IL_0007:
	{
		RuntimeObject* L_1 = ___0_dictionary;
		NullCheck((RuntimeObject*)L_1);
		int32_t L_2;
		L_2 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 9), (RuntimeObject*)L_1);
		G_B3_0 = L_2;
		G_B3_1 = G_B2_0;
	}

IL_000d:
	{
		RuntimeObject* L_3 = ___1_comparer;
		Dictionary_2__ctor_m18EC2EB0F8F881C57774CFDDE6414E33F26F1539(G_B3_1, G_B3_0, L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		RuntimeObject* L_4 = ___0_dictionary;
		if (L_4)
		{
			goto IL_001c;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)1, NULL);
	}

IL_001c:
	{
		RuntimeObject* L_5 = ___0_dictionary;
		NullCheck((RuntimeObject*)L_5);
		Type_t* L_6;
		L_6 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3((RuntimeObject*)L_5, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 11)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		bool L_9;
		L_9 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_6, L_8, NULL);
		if (!L_9)
		{
			goto IL_0080;
		}
	}
	{
		RuntimeObject* L_10 = ___0_dictionary;
		Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* L_11 = ((Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27*)CastclassClass((RuntimeObject*)L_10, il2cpp_rgctx_data(method->klass->rgctx_data, 6)));
		NullCheck(L_11);
		int32_t L_12 = (int32_t)L_11->____count_2;
		V_0 = L_12;
		NullCheck(L_11);
		EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* L_13 = (EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9*)L_11->____entries_1;
		V_1 = L_13;
		V_2 = 0;
		goto IL_007b;
	}

IL_004a:
	{
		EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* L_14 = V_1;
		int32_t L_15 = V_2;
		NullCheck(L_14);
		int32_t L_16 = (int32_t)((L_14)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_15)))->___hashCode_0;
		if ((((int32_t)L_16) < ((int32_t)0)))
		{
			goto IL_0077;
		}
	}
	{
		EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* L_17 = V_1;
		int32_t L_18 = V_2;
		NullCheck(L_17);
		ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A L_19 = (ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A)((L_17)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_18)))->___key_2;
		EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* L_20 = V_1;
		int32_t L_21 = V_2;
		NullCheck(L_20);
		RuntimeObject* L_22 = (RuntimeObject*)((L_20)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_21)))->___value_3;
		Dictionary_2_Add_mDD9B32011F99913F7C26C8CE44D64E35574D047E(__this, L_19, L_22, il2cpp_rgctx_method(method->klass->rgctx_data, 16));
	}

IL_0077:
	{
		int32_t L_23 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_23, 1));
	}

IL_007b:
	{
		int32_t L_24 = V_2;
		int32_t L_25 = V_0;
		if ((((int32_t)L_24) < ((int32_t)L_25)))
		{
			goto IL_004a;
		}
	}
	{
		return;
	}

IL_0080:
	{
		RuntimeObject* L_26 = ___0_dictionary;
		NullCheck((RuntimeObject*)L_26);
		RuntimeObject* L_27;
		L_27 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 17), (RuntimeObject*)L_26);
		V_3 = L_27;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00af:
			{
				{
					RuntimeObject* L_28 = V_3;
					if (!L_28)
					{
						goto IL_00b8;
					}
				}
				{
					RuntimeObject* L_29 = V_3;
					NullCheck((RuntimeObject*)L_29);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_29);
				}

IL_00b8:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_00a5_1;
			}

IL_0089_1:
			{
				RuntimeObject* L_30 = V_3;
				NullCheck(L_30);
				KeyValuePair_2_t2A9D1B7DEBB99A68011F37B017FDD44CFE5AEC14 L_31;
				L_31 = InterfaceFuncInvoker0< KeyValuePair_2_t2A9D1B7DEBB99A68011F37B017FDD44CFE5AEC14 >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 19), L_30);
				V_4 = L_31;
				ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A L_32;
				L_32 = KeyValuePair_2_get_Key_m31FF72E7D6E74CE5DB2E5B3B8FC6B66B7A452210_inline((&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 22));
				RuntimeObject* L_33;
				L_33 = KeyValuePair_2_get_Value_mD933B25C1491C37A3BE3B1E709D8C1C02408E76C_inline((&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 23));
				Dictionary_2_Add_mDD9B32011F99913F7C26C8CE44D64E35574D047E(__this, L_32, L_33, il2cpp_rgctx_method(method->klass->rgctx_data, 16));
			}

IL_00a5_1:
			{
				RuntimeObject* L_34 = V_3;
				NullCheck((RuntimeObject*)L_34);
				bool L_35;
				L_35 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_34);
				if (L_35)
				{
					goto IL_0089_1;
				}
			}
			{
				goto IL_00b9;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00b9:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m1E17FF0178C889BBACDC95DECEB4EF50BB31F65F_gshared (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* __this, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___0_info, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___1_context, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConditionalWeakTable_2_Add_mF98A2811734A37D856C622E7783FD7502AA7F0B7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* L_0;
		L_0 = HashHelpers_get_SerializationInfoTable_m8C17D5483B39B68897AEFFD14A9E139AF858222F(NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_1 = ___0_info;
		NullCheck(L_0);
		ConditionalWeakTable_2_Add_mF98A2811734A37D856C622E7783FD7502AA7F0B7(L_0, (RuntimeObject*)__this, L_1, ConditionalWeakTable_2_Add_mF98A2811734A37D856C622E7783FD7502AA7F0B7_RuntimeMethod_var);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_get_Count_mC9C0153BE4100526AEB467BE880EFBD8FB00D56F_gshared (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____count_2;
		int32_t L_1 = (int32_t)__this->____freeCount_4;
		return ((int32_t)il2cpp_codegen_subtract(L_0, L_1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyCollection_t90C2F9D22B44E6B189DB7B61265585A859F93123* Dictionary_2_get_Keys_m48AD1CD8EB0B41F2D58FDFA10B92A85DB9933FF2_gshared (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* __this, const RuntimeMethod* method) 
{
	{
		KeyCollection_t90C2F9D22B44E6B189DB7B61265585A859F93123* L_0 = (KeyCollection_t90C2F9D22B44E6B189DB7B61265585A859F93123*)__this->____keys_7;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		KeyCollection_t90C2F9D22B44E6B189DB7B61265585A859F93123* L_1 = (KeyCollection_t90C2F9D22B44E6B189DB7B61265585A859F93123*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 24));
		KeyCollection__ctor_mEFFF76B810FF7EC07A4071049F088B68FFD484C6(L_1, __this, il2cpp_rgctx_method(method->klass->rgctx_data, 25));
		__this->____keys_7 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____keys_7), (void*)L_1);
	}

IL_0014:
	{
		KeyCollection_t90C2F9D22B44E6B189DB7B61265585A859F93123* L_2 = (KeyCollection_t90C2F9D22B44E6B189DB7B61265585A859F93123*)__this->____keys_7;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueCollection_t5221C67954BD6EEB65BAE1FFD366E7538FDA0E1F* Dictionary_2_get_Values_mC54912268568667F725754EBE2356518610AE832_gshared (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* __this, const RuntimeMethod* method) 
{
	{
		ValueCollection_t5221C67954BD6EEB65BAE1FFD366E7538FDA0E1F* L_0 = (ValueCollection_t5221C67954BD6EEB65BAE1FFD366E7538FDA0E1F*)__this->____values_8;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ValueCollection_t5221C67954BD6EEB65BAE1FFD366E7538FDA0E1F* L_1 = (ValueCollection_t5221C67954BD6EEB65BAE1FFD366E7538FDA0E1F*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 26));
		ValueCollection__ctor_m1B8096B8C7A5D20948283B1AD3A1C2B6032B93B7(L_1, __this, il2cpp_rgctx_method(method->klass->rgctx_data, 27));
		__this->____values_8 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____values_8), (void*)L_1);
	}

IL_0014:
	{
		ValueCollection_t5221C67954BD6EEB65BAE1FFD366E7538FDA0E1F* L_2 = (ValueCollection_t5221C67954BD6EEB65BAE1FFD366E7538FDA0E1F*)__this->____values_8;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_get_Item_m04A4017ED4A293A5D3A2164CBCD6A6CB8BCCA116_gshared (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* __this, ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A ___0_key, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	RuntimeObject* V_1 = NULL;
	{
		ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A L_0 = ___0_key;
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_m934C298F9973F16F2A755D65E374A6EE37302D63(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 28));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_001e;
		}
	}
	{
		EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* L_3 = (EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9*)__this->____entries_1;
		int32_t L_4 = V_0;
		NullCheck(L_3);
		RuntimeObject* L_5 = (RuntimeObject*)((L_3)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_4)))->___value_3;
		return L_5;
	}

IL_001e:
	{
		ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A L_6 = ___0_key;
		ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A L_7 = L_6;
		RuntimeObject* L_8 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14), &L_7);
		ThrowHelper_ThrowKeyNotFoundException_m6A17735FA486AD43F2488DE39B755AC60BC99CE7(L_8, NULL);
		il2cpp_codegen_initobj((&V_1), sizeof(RuntimeObject*));
		RuntimeObject* L_9 = V_1;
		return L_9;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_m4C8CF6E01F44588133C83CC2DF0C9F47F1644BD0_gshared (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* __this, ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) 
{
	{
		ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A L_0 = ___0_key;
		RuntimeObject* L_1 = ___1_value;
		bool L_2;
		L_2 = Dictionary_2_TryInsert_mC32565FBB5F884CC065F1EE7E2BE4F250DF6AECD(__this, L_0, L_1, (uint8_t)1, il2cpp_rgctx_method(method->klass->rgctx_data, 29));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_mDD9B32011F99913F7C26C8CE44D64E35574D047E_gshared (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* __this, ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) 
{
	{
		ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A L_0 = ___0_key;
		RuntimeObject* L_1 = ___1_value;
		bool L_2;
		L_2 = Dictionary_2_TryInsert_mC32565FBB5F884CC065F1EE7E2BE4F250DF6AECD(__this, L_0, L_1, (uint8_t)2, il2cpp_rgctx_method(method->klass->rgctx_data, 29));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m4EEACDC46AD23A0E7FA39004DBEDA017B8687FAF_gshared (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* __this, KeyValuePair_2_t2A9D1B7DEBB99A68011F37B017FDD44CFE5AEC14 ___0_keyValuePair, const RuntimeMethod* method) 
{
	{
		ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A L_0;
		L_0 = KeyValuePair_2_get_Key_m31FF72E7D6E74CE5DB2E5B3B8FC6B66B7A452210_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		RuntimeObject* L_1;
		L_1 = KeyValuePair_2_get_Value_mD933B25C1491C37A3BE3B1E709D8C1C02408E76C_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		Dictionary_2_Add_mDD9B32011F99913F7C26C8CE44D64E35574D047E(__this, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 16));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_mA39A0BE52118902D1EC9ED983321B0D8B415DF24_gshared (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* __this, KeyValuePair_2_t2A9D1B7DEBB99A68011F37B017FDD44CFE5AEC14 ___0_keyValuePair, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A L_0;
		L_0 = KeyValuePair_2_get_Key_m31FF72E7D6E74CE5DB2E5B3B8FC6B66B7A452210_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_m934C298F9973F16F2A755D65E374A6EE37302D63(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 28));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0038;
		}
	}
	{
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_3;
		L_3 = EqualityComparer_1_get_Default_mA2AD755281D23F496A2579884B39E30C13C208B3_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 30));
		EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* L_4 = (EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9*)__this->____entries_1;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		RuntimeObject* L_6 = (RuntimeObject*)((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)))->___value_3;
		RuntimeObject* L_7;
		L_7 = KeyValuePair_2_get_Value_mD933B25C1491C37A3BE3B1E709D8C1C02408E76C_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		NullCheck(L_3);
		bool L_8;
		L_8 = VirtualFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(8, L_3, L_6, L_7);
		if (!L_8)
		{
			goto IL_0038;
		}
	}
	{
		return (bool)1;
	}

IL_0038:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m4DB7A9F0B32B7B8DD0D41B3F6611E7B03B9436CA_gshared (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* __this, KeyValuePair_2_t2A9D1B7DEBB99A68011F37B017FDD44CFE5AEC14 ___0_keyValuePair, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A L_0;
		L_0 = KeyValuePair_2_get_Key_m31FF72E7D6E74CE5DB2E5B3B8FC6B66B7A452210_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_m934C298F9973F16F2A755D65E374A6EE37302D63(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 28));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0046;
		}
	}
	{
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_3;
		L_3 = EqualityComparer_1_get_Default_mA2AD755281D23F496A2579884B39E30C13C208B3_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 30));
		EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* L_4 = (EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9*)__this->____entries_1;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		RuntimeObject* L_6 = (RuntimeObject*)((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)))->___value_3;
		RuntimeObject* L_7;
		L_7 = KeyValuePair_2_get_Value_mD933B25C1491C37A3BE3B1E709D8C1C02408E76C_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		NullCheck(L_3);
		bool L_8;
		L_8 = VirtualFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(8, L_3, L_6, L_7);
		if (!L_8)
		{
			goto IL_0046;
		}
	}
	{
		ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A L_9;
		L_9 = KeyValuePair_2_get_Key_m31FF72E7D6E74CE5DB2E5B3B8FC6B66B7A452210_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		bool L_10;
		L_10 = Dictionary_2_Remove_m955C32400B1E624FFFA1E18F46FFBBB5963705B9(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 34));
		return (bool)1;
	}

IL_0046:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Clear_m07051E2711DEDC818DC462838A3D89CDD0959D9A_gshared (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = (int32_t)__this->____count_2;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_0041;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		NullCheck(L_3);
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_2, 0, ((int32_t)(((RuntimeArray*)L_3)->max_length)), NULL);
		__this->____count_2 = 0;
		__this->____freeList_3 = (-1);
		__this->____freeCount_4 = 0;
		EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* L_4 = (EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9*)__this->____entries_1;
		int32_t L_5 = V_0;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_4, 0, L_5, NULL);
	}

IL_0041:
	{
		int32_t L_6 = (int32_t)__this->____version_5;
		__this->____version_5 = ((int32_t)il2cpp_codegen_add(L_6, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_m784FD7E9B0EA6F7F56F90480CDDE24E7FFBBC46D_gshared (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* __this, ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A ___0_key, const RuntimeMethod* method) 
{
	{
		ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A L_0 = ___0_key;
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_m934C298F9973F16F2A755D65E374A6EE37302D63(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 28));
		return (bool)((((int32_t)((((int32_t)L_1) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsValue_m2E1A55234F27A4F98C337C2202E8241F8E42ED04_gshared (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* V_0 = NULL;
	int32_t V_1 = 0;
	RuntimeObject* V_2 = NULL;
	int32_t V_3 = 0;
	EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* V_4 = NULL;
	int32_t V_5 = 0;
	{
		EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* L_0 = (EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9*)__this->____entries_1;
		V_0 = L_0;
		RuntimeObject* L_1 = ___0_value;
		if (L_1)
		{
			goto IL_0049;
		}
	}
	{
		V_1 = 0;
		goto IL_003b;
	}

IL_0013:
	{
		EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* L_2 = V_0;
		int32_t L_3 = V_1;
		NullCheck(L_2);
		int32_t L_4 = (int32_t)((L_2)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_3)))->___hashCode_0;
		if ((((int32_t)L_4) < ((int32_t)0)))
		{
			goto IL_0037;
		}
	}
	{
		EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* L_5 = V_0;
		int32_t L_6 = V_1;
		NullCheck(L_5);
		RuntimeObject* L_7 = (RuntimeObject*)((L_5)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_6)))->___value_3;
		if (L_7)
		{
			goto IL_0037;
		}
	}
	{
		return (bool)1;
	}

IL_0037:
	{
		int32_t L_8 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_8, 1));
	}

IL_003b:
	{
		int32_t L_9 = V_1;
		int32_t L_10 = (int32_t)__this->____count_2;
		if ((((int32_t)L_9) < ((int32_t)L_10)))
		{
			goto IL_0013;
		}
	}
	{
		goto IL_00db;
	}

IL_0049:
	{
		il2cpp_codegen_initobj((&V_2), sizeof(RuntimeObject*));
		RuntimeObject* L_11 = V_2;
		if (!L_11)
		{
			goto IL_0096;
		}
	}
	{
		V_3 = 0;
		goto IL_008b;
	}

IL_005d:
	{
		EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* L_12 = V_0;
		int32_t L_13 = V_3;
		NullCheck(L_12);
		int32_t L_14 = (int32_t)((L_12)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_13)))->___hashCode_0;
		if ((((int32_t)L_14) < ((int32_t)0)))
		{
			goto IL_0087;
		}
	}
	{
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_15;
		L_15 = EqualityComparer_1_get_Default_mA2AD755281D23F496A2579884B39E30C13C208B3_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 30));
		EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* L_16 = V_0;
		int32_t L_17 = V_3;
		NullCheck(L_16);
		RuntimeObject* L_18 = (RuntimeObject*)((L_16)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_17)))->___value_3;
		RuntimeObject* L_19 = ___0_value;
		NullCheck(L_15);
		bool L_20;
		L_20 = VirtualFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(8, L_15, L_18, L_19);
		if (!L_20)
		{
			goto IL_0087;
		}
	}
	{
		return (bool)1;
	}

IL_0087:
	{
		int32_t L_21 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_21, 1));
	}

IL_008b:
	{
		int32_t L_22 = V_3;
		int32_t L_23 = (int32_t)__this->____count_2;
		if ((((int32_t)L_22) < ((int32_t)L_23)))
		{
			goto IL_005d;
		}
	}
	{
		goto IL_00db;
	}

IL_0096:
	{
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_24;
		L_24 = EqualityComparer_1_get_Default_mA2AD755281D23F496A2579884B39E30C13C208B3_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 30));
		V_4 = L_24;
		V_5 = 0;
		goto IL_00d1;
	}

IL_00a2:
	{
		EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* L_25 = V_0;
		int32_t L_26 = V_5;
		NullCheck(L_25);
		int32_t L_27 = (int32_t)((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___hashCode_0;
		if ((((int32_t)L_27) < ((int32_t)0)))
		{
			goto IL_00cb;
		}
	}
	{
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_28 = V_4;
		EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* L_29 = V_0;
		int32_t L_30 = V_5;
		NullCheck(L_29);
		RuntimeObject* L_31 = (RuntimeObject*)((L_29)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_30)))->___value_3;
		RuntimeObject* L_32 = ___0_value;
		NullCheck(L_28);
		bool L_33;
		L_33 = VirtualFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(8, L_28, L_31, L_32);
		if (!L_33)
		{
			goto IL_00cb;
		}
	}
	{
		return (bool)1;
	}

IL_00cb:
	{
		int32_t L_34 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_34, 1));
	}

IL_00d1:
	{
		int32_t L_35 = V_5;
		int32_t L_36 = (int32_t)__this->____count_2;
		if ((((int32_t)L_35) < ((int32_t)L_36)))
		{
			goto IL_00a2;
		}
	}

IL_00db:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_CopyTo_m154D895C0AEC517A3F2A7C886C23633368AFCFC3_gshared (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* __this, KeyValuePair_2U5BU5D_tF0A0AABC82DE189C18BE91E0D9CC0C01C2449460* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* V_1 = NULL;
	int32_t V_2 = 0;
	{
		KeyValuePair_2U5BU5D_tF0A0AABC82DE189C18BE91E0D9CC0C01C2449460* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)3, NULL);
	}

IL_0009:
	{
		int32_t L_1 = ___1_index;
		KeyValuePair_2U5BU5D_tF0A0AABC82DE189C18BE91E0D9CC0C01C2449460* L_2 = ___0_array;
		NullCheck(L_2);
		if ((!(((uint32_t)L_1) > ((uint32_t)((int32_t)(((RuntimeArray*)L_2)->max_length))))))
		{
			goto IL_0014;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0014:
	{
		KeyValuePair_2U5BU5D_tF0A0AABC82DE189C18BE91E0D9CC0C01C2449460* L_3 = ___0_array;
		NullCheck(L_3);
		int32_t L_4 = ___1_index;
		int32_t L_5;
		L_5 = Dictionary_2_get_Count_mC9C0153BE4100526AEB467BE880EFBD8FB00D56F(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 36));
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_3)->max_length)), L_4))) >= ((int32_t)L_5)))
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)5, NULL);
	}

IL_0027:
	{
		int32_t L_6 = (int32_t)__this->____count_2;
		V_0 = L_6;
		EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* L_7 = (EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9*)__this->____entries_1;
		V_1 = L_7;
		V_2 = 0;
		goto IL_0075;
	}

IL_0039:
	{
		EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* L_8 = V_1;
		int32_t L_9 = V_2;
		NullCheck(L_8);
		int32_t L_10 = (int32_t)((L_8)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_9)))->___hashCode_0;
		if ((((int32_t)L_10) < ((int32_t)0)))
		{
			goto IL_0071;
		}
	}
	{
		KeyValuePair_2U5BU5D_tF0A0AABC82DE189C18BE91E0D9CC0C01C2449460* L_11 = ___0_array;
		int32_t L_12 = ___1_index;
		int32_t L_13 = L_12;
		___1_index = ((int32_t)il2cpp_codegen_add(L_13, 1));
		EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* L_14 = V_1;
		int32_t L_15 = V_2;
		NullCheck(L_14);
		ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A L_16 = (ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A)((L_14)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_15)))->___key_2;
		EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* L_17 = V_1;
		int32_t L_18 = V_2;
		NullCheck(L_17);
		RuntimeObject* L_19 = (RuntimeObject*)((L_17)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_18)))->___value_3;
		KeyValuePair_2_t2A9D1B7DEBB99A68011F37B017FDD44CFE5AEC14 L_20;
		memset((&L_20), 0, sizeof(L_20));
		KeyValuePair_2__ctor_m7D13D8559B135D9A99FBA279CF4C2BDCB990CCF1((&L_20), L_16, L_19, il2cpp_rgctx_method(method->klass->rgctx_data, 37));
		NullCheck(L_11);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(L_13), (KeyValuePair_2_t2A9D1B7DEBB99A68011F37B017FDD44CFE5AEC14)L_20);
	}

IL_0071:
	{
		int32_t L_21 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_21, 1));
	}

IL_0075:
	{
		int32_t L_22 = V_2;
		int32_t L_23 = V_0;
		if ((((int32_t)L_22) < ((int32_t)L_23)))
		{
			goto IL_0039;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t4C98DC0014F7B9B79F0AE8FCB4EC3987119C58D9 Dictionary_2_GetEnumerator_m1C2674F51BACC5E23084DA0374A70B0EBB20CB1F_gshared (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t4C98DC0014F7B9B79F0AE8FCB4EC3987119C58D9 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m283889D2E2926F56ECD2EEA3767F2A21F0488164((&L_0), __this, 2, il2cpp_rgctx_method(method->klass->rgctx_data, 39));
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_mF90BAD88410B5EEFD79B8D5A86638D03C61B08AC_gshared (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t4C98DC0014F7B9B79F0AE8FCB4EC3987119C58D9 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m283889D2E2926F56ECD2EEA3767F2A21F0488164((&L_0), __this, 2, il2cpp_rgctx_method(method->klass->rgctx_data, 39));
		Enumerator_t4C98DC0014F7B9B79F0AE8FCB4EC3987119C58D9 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 38), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_GetObjectData_mE2783EE614A6743CAC1102BE510AF8978CE8C547_gshared (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* __this, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___0_info, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___1_context, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1);
		s_Il2CppMethodInitialized = true;
	}
	KeyValuePair_2U5BU5D_tF0A0AABC82DE189C18BE91E0D9CC0C01C2449460* V_0 = NULL;
	RuntimeObject* G_B4_0 = NULL;
	String_t* G_B4_1 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B4_2 = NULL;
	RuntimeObject* G_B3_0 = NULL;
	String_t* G_B3_1 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B3_2 = NULL;
	String_t* G_B6_0 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B6_1 = NULL;
	String_t* G_B5_0 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B5_1 = NULL;
	int32_t G_B7_0 = 0;
	String_t* G_B7_1 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B7_2 = NULL;
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_0 = ___0_info;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)4, NULL);
	}

IL_0009:
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_1 = ___0_info;
		int32_t L_2 = (int32_t)__this->____version_5;
		NullCheck(L_1);
		SerializationInfo_AddValue_m9D6ADD10966D1FE8D19050F3A269747C23FE9FC4(L_1, _stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1, L_2, NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_3 = ___0_info;
		RuntimeObject* L_4 = (RuntimeObject*)__this->____comparer_6;
		RuntimeObject* L_5 = L_4;
		if (L_5)
		{
			G_B4_0 = L_5;
			G_B4_1 = _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9;
			G_B4_2 = L_3;
			goto IL_002f;
		}
		G_B3_0 = L_5;
		G_B3_1 = _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9;
		G_B3_2 = L_3;
	}
	{
		EqualityComparer_1_t39F37BD252745ACD048E411385EBDFBABD5BBFAE* L_6;
		L_6 = EqualityComparer_1_get_Default_m337E4360DF25127CED0E5DEC4827A905E8EBA5E0_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		G_B4_0 = ((RuntimeObject*)(L_6));
		G_B4_1 = G_B3_1;
		G_B4_2 = G_B3_2;
	}

IL_002f:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 40)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		NullCheck(G_B4_2);
		SerializationInfo_AddValue_m1AD59BBF8C3129142943D3F298ADF09FF123C199(G_B4_2, G_B4_1, (RuntimeObject*)G_B4_0, L_8, NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_9 = ___0_info;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_10 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		if (!L_10)
		{
			G_B6_0 = _stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69;
			G_B6_1 = L_9;
			goto IL_0056;
		}
		G_B5_0 = _stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69;
		G_B5_1 = L_9;
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		NullCheck(L_11);
		G_B7_0 = ((int32_t)(((RuntimeArray*)L_11)->max_length));
		G_B7_1 = G_B5_0;
		G_B7_2 = G_B5_1;
		goto IL_0057;
	}

IL_0056:
	{
		G_B7_0 = 0;
		G_B7_1 = G_B6_0;
		G_B7_2 = G_B6_1;
	}

IL_0057:
	{
		NullCheck(G_B7_2);
		SerializationInfo_AddValue_m9D6ADD10966D1FE8D19050F3A269747C23FE9FC4(G_B7_2, G_B7_1, G_B7_0, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_12 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		if (!L_12)
		{
			goto IL_008e;
		}
	}
	{
		int32_t L_13;
		L_13 = Dictionary_2_get_Count_mC9C0153BE4100526AEB467BE880EFBD8FB00D56F(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 36));
		KeyValuePair_2U5BU5D_tF0A0AABC82DE189C18BE91E0D9CC0C01C2449460* L_14 = (KeyValuePair_2U5BU5D_tF0A0AABC82DE189C18BE91E0D9CC0C01C2449460*)(KeyValuePair_2U5BU5D_tF0A0AABC82DE189C18BE91E0D9CC0C01C2449460*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 41), (uint32_t)L_13);
		V_0 = L_14;
		KeyValuePair_2U5BU5D_tF0A0AABC82DE189C18BE91E0D9CC0C01C2449460* L_15 = V_0;
		Dictionary_2_CopyTo_m154D895C0AEC517A3F2A7C886C23633368AFCFC3(__this, L_15, 0, il2cpp_rgctx_method(method->klass->rgctx_data, 42));
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_16 = ___0_info;
		KeyValuePair_2U5BU5D_tF0A0AABC82DE189C18BE91E0D9CC0C01C2449460* L_17 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 43)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		NullCheck(L_16);
		SerializationInfo_AddValue_m1AD59BBF8C3129142943D3F298ADF09FF123C199(L_16, _stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A, (RuntimeObject*)L_17, L_19, NULL);
	}

IL_008e:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_FindEntry_m934C298F9973F16F2A755D65E374A6EE37302D63_gshared (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* __this, ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A ___0_key, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_1 = NULL;
	EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* V_2 = NULL;
	int32_t V_3 = 0;
	RuntimeObject* V_4 = NULL;
	int32_t V_5 = 0;
	ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A V_6;
	memset((&V_6), 0, sizeof(V_6));
	EqualityComparer_1_t39F37BD252745ACD048E411385EBDFBABD5BBFAE* V_7 = NULL;
	int32_t V_8 = 0;
	{
		goto IL_000e;
	}

IL_000e:
	{
		V_0 = (-1);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		V_1 = L_1;
		EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* L_2 = (EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9*)__this->____entries_1;
		V_2 = L_2;
		V_3 = 0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = V_1;
		if (!L_3)
		{
			goto IL_0175;
		}
	}
	{
		RuntimeObject* L_4 = (RuntimeObject*)__this->____comparer_6;
		V_4 = L_4;
		RuntimeObject* L_5 = V_4;
		if (L_5)
		{
			goto IL_0110;
		}
	}
	{
		int32_t L_6;
		L_6 = ValueTuple_2_GetHashCode_m02C84696292D14B993EDCDED373702CF8E5DB5F7((&___0_key), il2cpp_rgctx_method(method->klass->rgctx_data, 44));
		V_5 = ((int32_t)(L_6&((int32_t)2147483647LL)));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_7 = V_1;
		int32_t L_8 = V_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = V_1;
		NullCheck(L_9);
		NullCheck(L_7);
		int32_t L_10 = ((int32_t)(L_8%((int32_t)(((RuntimeArray*)L_9)->max_length))));
		int32_t L_11 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_11, 1));
		il2cpp_codegen_initobj((&V_6), sizeof(ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A));
	}

IL_0066:
	{
		int32_t L_13 = V_0;
		EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* L_14 = V_2;
		NullCheck(L_14);
		if ((!(((uint32_t)L_13) < ((uint32_t)((int32_t)(((RuntimeArray*)L_14)->max_length))))))
		{
			goto IL_0175;
		}
	}
	{
		EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* L_15 = V_2;
		int32_t L_16 = V_0;
		NullCheck(L_15);
		int32_t L_17 = (int32_t)((L_15)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_16)))->___hashCode_0;
		int32_t L_18 = V_5;
		if ((!(((uint32_t)L_17) == ((uint32_t)L_18))))
		{
			goto IL_009b;
		}
	}
	{
		EqualityComparer_1_t39F37BD252745ACD048E411385EBDFBABD5BBFAE* L_19;
		L_19 = EqualityComparer_1_get_Default_m337E4360DF25127CED0E5DEC4827A905E8EBA5E0_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* L_20 = V_2;
		int32_t L_21 = V_0;
		NullCheck(L_20);
		ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A L_22 = (ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A)((L_20)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_21)))->___key_2;
		ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A L_23 = ___0_key;
		NullCheck(L_19);
		bool L_24;
		L_24 = VirtualFuncInvoker2< bool, ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A, ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A >::Invoke(8, L_19, L_22, L_23);
		if (L_24)
		{
			goto IL_0175;
		}
	}

IL_009b:
	{
		EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* L_25 = V_2;
		int32_t L_26 = V_0;
		NullCheck(L_25);
		int32_t L_27 = (int32_t)((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___next_1;
		V_0 = L_27;
		int32_t L_28 = V_3;
		EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* L_29 = V_2;
		NullCheck(L_29);
		if ((((int32_t)L_28) < ((int32_t)((int32_t)(((RuntimeArray*)L_29)->max_length)))))
		{
			goto IL_00b3;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_00b3:
	{
		int32_t L_30 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_30, 1));
		goto IL_0066;
	}

IL_0110:
	{
		RuntimeObject* L_31 = V_4;
		ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A L_32 = ___0_key;
		NullCheck(L_31);
		int32_t L_33;
		L_33 = InterfaceFuncInvoker1< int32_t, ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_31, L_32);
		V_8 = ((int32_t)(L_33&((int32_t)2147483647LL)));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_34 = V_1;
		int32_t L_35 = V_8;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_36 = V_1;
		NullCheck(L_36);
		NullCheck(L_34);
		int32_t L_37 = ((int32_t)(L_35%((int32_t)(((RuntimeArray*)L_36)->max_length))));
		int32_t L_38 = (L_34)->GetAt(static_cast<il2cpp_array_size_t>(L_37));
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_38, 1));
	}

IL_012b:
	{
		int32_t L_39 = V_0;
		EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* L_40 = V_2;
		NullCheck(L_40);
		if ((!(((uint32_t)L_39) < ((uint32_t)((int32_t)(((RuntimeArray*)L_40)->max_length))))))
		{
			goto IL_0175;
		}
	}
	{
		EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* L_41 = V_2;
		int32_t L_42 = V_0;
		NullCheck(L_41);
		int32_t L_43 = (int32_t)((L_41)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_42)))->___hashCode_0;
		int32_t L_44 = V_8;
		if ((!(((uint32_t)L_43) == ((uint32_t)L_44))))
		{
			goto IL_0157;
		}
	}
	{
		RuntimeObject* L_45 = V_4;
		EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* L_46 = V_2;
		int32_t L_47 = V_0;
		NullCheck(L_46);
		ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A L_48 = (ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A)((L_46)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_47)))->___key_2;
		ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A L_49 = ___0_key;
		NullCheck(L_45);
		bool L_50;
		L_50 = InterfaceFuncInvoker2< bool, ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A, ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_45, L_48, L_49);
		if (L_50)
		{
			goto IL_0175;
		}
	}

IL_0157:
	{
		EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* L_51 = V_2;
		int32_t L_52 = V_0;
		NullCheck(L_51);
		int32_t L_53 = (int32_t)((L_51)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_52)))->___next_1;
		V_0 = L_53;
		int32_t L_54 = V_3;
		EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* L_55 = V_2;
		NullCheck(L_55);
		if ((((int32_t)L_54) < ((int32_t)((int32_t)(((RuntimeArray*)L_55)->max_length)))))
		{
			goto IL_016f;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_016f:
	{
		int32_t L_56 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_56, 1));
		goto IL_012b;
	}

IL_0175:
	{
		int32_t L_57 = V_0;
		return L_57;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_Initialize_m7165BFCECD406FEF2F6EA0DCDDF34B2450CA12E4_gshared (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___0_capacity;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = HashHelpers_GetPrime_m5B7AE10D5E76267579296C8F2CB8464AC2DE8472(L_0, NULL);
		V_0 = L_1;
		__this->____freeList_3 = (-1);
		int32_t L_2 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_2);
		__this->____buckets_0 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets_0), (void*)L_3);
		int32_t L_4 = V_0;
		EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* L_5 = (EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9*)(EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 48), (uint32_t)L_4);
		__this->____entries_1 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____entries_1), (void*)L_5);
		int32_t L_6 = V_0;
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryInsert_mC32565FBB5F884CC065F1EE7E2BE4F250DF6AECD_gshared (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* __this, ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A ___0_key, RuntimeObject* ___1_value, uint8_t ___2_behavior, const RuntimeMethod* method) 
{
	EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t* V_4 = NULL;
	int32_t V_5 = 0;
	bool V_6 = false;
	bool V_7 = false;
	int32_t V_8 = 0;
	int32_t* V_9 = NULL;
	Entry_t9E54CCBCBF389A3EB228FFF39B2963CCB6661448* V_10 = NULL;
	ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A V_11;
	memset((&V_11), 0, sizeof(V_11));
	EqualityComparer_1_t39F37BD252745ACD048E411385EBDFBABD5BBFAE* V_12 = NULL;
	int32_t V_13 = 0;
	int32_t G_B7_0 = 0;
	int32_t* G_B51_0 = NULL;
	{
		goto IL_000e;
	}

IL_000e:
	{
		int32_t L_1 = (int32_t)__this->____version_5;
		__this->____version_5 = ((int32_t)il2cpp_codegen_add(L_1, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		if (L_2)
		{
			goto IL_002c;
		}
	}
	{
		int32_t L_3;
		L_3 = Dictionary_2_Initialize_m7165BFCECD406FEF2F6EA0DCDDF34B2450CA12E4(__this, 0, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
	}

IL_002c:
	{
		EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* L_4 = (EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9*)__this->____entries_1;
		V_0 = L_4;
		RuntimeObject* L_5 = (RuntimeObject*)__this->____comparer_6;
		V_1 = L_5;
		RuntimeObject* L_6 = V_1;
		if (!L_6)
		{
			goto IL_0046;
		}
	}
	{
		RuntimeObject* L_7 = V_1;
		ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A L_8 = ___0_key;
		NullCheck(L_7);
		int32_t L_9;
		L_9 = InterfaceFuncInvoker1< int32_t, ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_7, L_8);
		G_B7_0 = L_9;
		goto IL_0053;
	}

IL_0046:
	{
		int32_t L_10;
		L_10 = ValueTuple_2_GetHashCode_m02C84696292D14B993EDCDED373702CF8E5DB5F7((&___0_key), il2cpp_rgctx_method(method->klass->rgctx_data, 44));
		G_B7_0 = L_10;
	}

IL_0053:
	{
		V_2 = ((int32_t)(G_B7_0&((int32_t)2147483647LL)));
		V_3 = 0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		int32_t L_12 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_13 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		NullCheck(L_13);
		NullCheck(L_11);
		V_4 = ((L_11)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_12%((int32_t)(((RuntimeArray*)L_13)->max_length)))))));
		int32_t* L_14 = V_4;
		int32_t L_15 = *((int32_t*)L_14);
		V_5 = ((int32_t)il2cpp_codegen_subtract(L_15, 1));
		RuntimeObject* L_16 = V_1;
		if (L_16)
		{
			goto IL_0187;
		}
	}
	{
		il2cpp_codegen_initobj((&V_11), sizeof(ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A));
	}

IL_0091:
	{
		int32_t L_18 = V_5;
		EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* L_19 = V_0;
		NullCheck(L_19);
		if ((!(((uint32_t)L_18) < ((uint32_t)((int32_t)(((RuntimeArray*)L_19)->max_length))))))
		{
			goto IL_01f9;
		}
	}
	{
		EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* L_20 = V_0;
		int32_t L_21 = V_5;
		NullCheck(L_20);
		int32_t L_22 = (int32_t)((L_20)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_21)))->___hashCode_0;
		int32_t L_23 = V_2;
		if ((!(((uint32_t)L_22) == ((uint32_t)L_23))))
		{
			goto IL_00ea;
		}
	}
	{
		EqualityComparer_1_t39F37BD252745ACD048E411385EBDFBABD5BBFAE* L_24;
		L_24 = EqualityComparer_1_get_Default_m337E4360DF25127CED0E5DEC4827A905E8EBA5E0_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* L_25 = V_0;
		int32_t L_26 = V_5;
		NullCheck(L_25);
		ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A L_27 = (ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A)((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___key_2;
		ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A L_28 = ___0_key;
		NullCheck(L_24);
		bool L_29;
		L_29 = VirtualFuncInvoker2< bool, ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A, ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A >::Invoke(8, L_24, L_27, L_28);
		if (!L_29)
		{
			goto IL_00ea;
		}
	}
	{
		uint8_t L_30 = ___2_behavior;
		if ((!(((uint32_t)L_30) == ((uint32_t)1))))
		{
			goto IL_00d9;
		}
	}
	{
		EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* L_31 = V_0;
		int32_t L_32 = V_5;
		NullCheck(L_31);
		RuntimeObject* L_33 = ___1_value;
		((L_31)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_32)))->___value_3 = L_33;
		Il2CppCodeGenWriteBarrier((void**)(&((L_31)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_32)))->___value_3), (void*)L_33);
		return (bool)1;
	}

IL_00d9:
	{
		uint8_t L_34 = ___2_behavior;
		if ((!(((uint32_t)L_34) == ((uint32_t)2))))
		{
			goto IL_00e8;
		}
	}
	{
		ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A L_35 = ___0_key;
		ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A L_36 = L_35;
		RuntimeObject* L_37 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14), &L_36);
		ThrowHelper_ThrowAddingDuplicateWithKeyArgumentException_m013C856C16A63018719A6096727CB43E1918CDE5(L_37, NULL);
	}

IL_00e8:
	{
		return (bool)0;
	}

IL_00ea:
	{
		EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* L_38 = V_0;
		int32_t L_39 = V_5;
		NullCheck(L_38);
		int32_t L_40 = (int32_t)((L_38)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_39)))->___next_1;
		V_5 = L_40;
		int32_t L_41 = V_3;
		EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* L_42 = V_0;
		NullCheck(L_42);
		if ((((int32_t)L_41) < ((int32_t)((int32_t)(((RuntimeArray*)L_42)->max_length)))))
		{
			goto IL_0104;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_0104:
	{
		int32_t L_43 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_43, 1));
		goto IL_0091;
	}

IL_0187:
	{
		int32_t L_44 = V_5;
		EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* L_45 = V_0;
		NullCheck(L_45);
		if ((!(((uint32_t)L_44) < ((uint32_t)((int32_t)(((RuntimeArray*)L_45)->max_length))))))
		{
			goto IL_01f9;
		}
	}
	{
		EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* L_46 = V_0;
		int32_t L_47 = V_5;
		NullCheck(L_46);
		int32_t L_48 = (int32_t)((L_46)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_47)))->___hashCode_0;
		int32_t L_49 = V_2;
		if ((!(((uint32_t)L_48) == ((uint32_t)L_49))))
		{
			goto IL_01d9;
		}
	}
	{
		RuntimeObject* L_50 = V_1;
		EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* L_51 = V_0;
		int32_t L_52 = V_5;
		NullCheck(L_51);
		ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A L_53 = (ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A)((L_51)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_52)))->___key_2;
		ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A L_54 = ___0_key;
		NullCheck(L_50);
		bool L_55;
		L_55 = InterfaceFuncInvoker2< bool, ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A, ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_50, L_53, L_54);
		if (!L_55)
		{
			goto IL_01d9;
		}
	}
	{
		uint8_t L_56 = ___2_behavior;
		if ((!(((uint32_t)L_56) == ((uint32_t)1))))
		{
			goto IL_01c8;
		}
	}
	{
		EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* L_57 = V_0;
		int32_t L_58 = V_5;
		NullCheck(L_57);
		RuntimeObject* L_59 = ___1_value;
		((L_57)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_58)))->___value_3 = L_59;
		Il2CppCodeGenWriteBarrier((void**)(&((L_57)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_58)))->___value_3), (void*)L_59);
		return (bool)1;
	}

IL_01c8:
	{
		uint8_t L_60 = ___2_behavior;
		if ((!(((uint32_t)L_60) == ((uint32_t)2))))
		{
			goto IL_01d7;
		}
	}
	{
		ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A L_61 = ___0_key;
		ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A L_62 = L_61;
		RuntimeObject* L_63 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14), &L_62);
		ThrowHelper_ThrowAddingDuplicateWithKeyArgumentException_m013C856C16A63018719A6096727CB43E1918CDE5(L_63, NULL);
	}

IL_01d7:
	{
		return (bool)0;
	}

IL_01d9:
	{
		EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* L_64 = V_0;
		int32_t L_65 = V_5;
		NullCheck(L_64);
		int32_t L_66 = (int32_t)((L_64)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_65)))->___next_1;
		V_5 = L_66;
		int32_t L_67 = V_3;
		EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* L_68 = V_0;
		NullCheck(L_68);
		if ((((int32_t)L_67) < ((int32_t)((int32_t)(((RuntimeArray*)L_68)->max_length)))))
		{
			goto IL_01f3;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_01f3:
	{
		int32_t L_69 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_69, 1));
		goto IL_0187;
	}

IL_01f9:
	{
		V_6 = (bool)0;
		V_7 = (bool)0;
		int32_t L_70 = (int32_t)__this->____freeCount_4;
		if ((((int32_t)L_70) <= ((int32_t)0)))
		{
			goto IL_0223;
		}
	}
	{
		int32_t L_71 = (int32_t)__this->____freeList_3;
		V_8 = L_71;
		V_7 = (bool)1;
		int32_t L_72 = (int32_t)__this->____freeCount_4;
		__this->____freeCount_4 = ((int32_t)il2cpp_codegen_subtract(L_72, 1));
		goto IL_0250;
	}

IL_0223:
	{
		int32_t L_73 = (int32_t)__this->____count_2;
		V_13 = L_73;
		int32_t L_74 = V_13;
		EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* L_75 = V_0;
		NullCheck(L_75);
		if ((!(((uint32_t)L_74) == ((uint32_t)((int32_t)(((RuntimeArray*)L_75)->max_length))))))
		{
			goto IL_023b;
		}
	}
	{
		Dictionary_2_Resize_m9C011EE1497A08BE38724E92602B8E81D73D2212(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 49));
		V_6 = (bool)1;
	}

IL_023b:
	{
		int32_t L_76 = V_13;
		V_8 = L_76;
		int32_t L_77 = V_13;
		__this->____count_2 = ((int32_t)il2cpp_codegen_add(L_77, 1));
		EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* L_78 = (EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9*)__this->____entries_1;
		V_0 = L_78;
	}

IL_0250:
	{
		bool L_79 = V_6;
		if (L_79)
		{
			goto IL_0258;
		}
	}
	{
		int32_t* L_80 = V_4;
		G_B51_0 = L_80;
		goto IL_026d;
	}

IL_0258:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_81 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		int32_t L_82 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_83 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		NullCheck(L_83);
		NullCheck(L_81);
		G_B51_0 = ((L_81)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_82%((int32_t)(((RuntimeArray*)L_83)->max_length)))))));
	}

IL_026d:
	{
		V_9 = G_B51_0;
		EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* L_84 = V_0;
		int32_t L_85 = V_8;
		NullCheck(L_84);
		V_10 = ((L_84)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_85)));
		bool L_86 = V_7;
		if (!L_86)
		{
			goto IL_028a;
		}
	}
	{
		Entry_t9E54CCBCBF389A3EB228FFF39B2963CCB6661448* L_87 = V_10;
		int32_t L_88 = (int32_t)L_87->___next_1;
		__this->____freeList_3 = L_88;
	}

IL_028a:
	{
		Entry_t9E54CCBCBF389A3EB228FFF39B2963CCB6661448* L_89 = V_10;
		int32_t L_90 = V_2;
		L_89->___hashCode_0 = L_90;
		Entry_t9E54CCBCBF389A3EB228FFF39B2963CCB6661448* L_91 = V_10;
		int32_t* L_92 = V_9;
		int32_t L_93 = *((int32_t*)L_92);
		L_91->___next_1 = ((int32_t)il2cpp_codegen_subtract(L_93, 1));
		Entry_t9E54CCBCBF389A3EB228FFF39B2963CCB6661448* L_94 = V_10;
		ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A L_95 = ___0_key;
		L_94->___key_2 = L_95;
		Il2CppCodeGenWriteBarrier((void**)&(((&L_94->___key_2))->___Item1_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&L_94->___key_2))->___Item2_1), (void*)NULL);
		#endif
		Entry_t9E54CCBCBF389A3EB228FFF39B2963CCB6661448* L_96 = V_10;
		RuntimeObject* L_97 = ___1_value;
		L_96->___value_3 = L_97;
		Il2CppCodeGenWriteBarrier((void**)(&L_96->___value_3), (void*)L_97);
		int32_t* L_98 = V_9;
		int32_t L_99 = V_8;
		*((int32_t*)L_98) = (int32_t)((int32_t)il2cpp_codegen_add(L_99, 1));
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_OnDeserialization_m40CC8AF5495433361FFFBAE6BF3EB27D6A9C9E05_gshared (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* __this, RuntimeObject* ___0_sender, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConditionalWeakTable_2_Remove_mEA61545EA43662F3718895F4E435A1F3EFB9756E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConditionalWeakTable_2_TryGetValue_m8AB467BA44D1FF9EBDB9735CED88B0D67AC6403F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1);
		s_Il2CppMethodInitialized = true;
	}
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	KeyValuePair_2U5BU5D_tF0A0AABC82DE189C18BE91E0D9CC0C01C2449460* V_3 = NULL;
	int32_t V_4 = 0;
	{
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* L_0;
		L_0 = HashHelpers_get_SerializationInfoTable_m8C17D5483B39B68897AEFFD14A9E139AF858222F(NULL);
		NullCheck(L_0);
		bool L_1;
		L_1 = ConditionalWeakTable_2_TryGetValue_m8AB467BA44D1FF9EBDB9735CED88B0D67AC6403F(L_0, (RuntimeObject*)__this, (&V_0), ConditionalWeakTable_2_TryGetValue_m8AB467BA44D1FF9EBDB9735CED88B0D67AC6403F_RuntimeMethod_var);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_2 = V_0;
		if (L_2)
		{
			goto IL_0012;
		}
	}
	{
		return;
	}

IL_0012:
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_3 = V_0;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = SerializationInfo_GetInt32_m7731402825C7FC8D0673F7610D555615F95E4FB5(L_3, _stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1, NULL);
		V_1 = L_4;
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_5 = V_0;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = SerializationInfo_GetInt32_m7731402825C7FC8D0673F7610D555615F95E4FB5(L_5, _stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69, NULL);
		V_2 = L_6;
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_7 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 40)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		NullCheck(L_7);
		RuntimeObject* L_10;
		L_10 = SerializationInfo_GetValue_mE6091C2E906E113455D05E734C86F43B8E1D1034(L_7, _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9, L_9, NULL);
		__this->____comparer_6 = ((RuntimeObject*)Castclass((RuntimeObject*)L_10, il2cpp_rgctx_data(method->klass->rgctx_data, 1)));
		Il2CppCodeGenWriteBarrier((void**)(&__this->____comparer_6), (void*)((RuntimeObject*)Castclass((RuntimeObject*)L_10, il2cpp_rgctx_data(method->klass->rgctx_data, 1))));
		int32_t L_11 = V_2;
		if (!L_11)
		{
			goto IL_00c9;
		}
	}
	{
		int32_t L_12 = V_2;
		int32_t L_13;
		L_13 = Dictionary_2_Initialize_m7165BFCECD406FEF2F6EA0DCDDF34B2450CA12E4(__this, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_14 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_15 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 43)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_16;
		L_16 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_15, NULL);
		NullCheck(L_14);
		RuntimeObject* L_17;
		L_17 = SerializationInfo_GetValue_mE6091C2E906E113455D05E734C86F43B8E1D1034(L_14, _stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A, L_16, NULL);
		V_3 = ((KeyValuePair_2U5BU5D_tF0A0AABC82DE189C18BE91E0D9CC0C01C2449460*)Castclass((RuntimeObject*)L_17, il2cpp_rgctx_data(method->klass->rgctx_data, 35)));
		KeyValuePair_2U5BU5D_tF0A0AABC82DE189C18BE91E0D9CC0C01C2449460* L_18 = V_3;
		if (L_18)
		{
			goto IL_007a;
		}
	}
	{
		ThrowHelper_ThrowSerializationException_m03BE2B48CD3617C32FBCEE16030F7C5563E04E16((int32_t)((int32_t)16), NULL);
	}

IL_007a:
	{
		V_4 = 0;
		goto IL_00c0;
	}

IL_007f:
	{
		KeyValuePair_2U5BU5D_tF0A0AABC82DE189C18BE91E0D9CC0C01C2449460* L_19 = V_3;
		int32_t L_20 = V_4;
		NullCheck(L_19);
		ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A L_21;
		L_21 = KeyValuePair_2_get_Key_m31FF72E7D6E74CE5DB2E5B3B8FC6B66B7A452210_inline(((L_19)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_20))), il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		goto IL_009a;
	}

IL_009a:
	{
		KeyValuePair_2U5BU5D_tF0A0AABC82DE189C18BE91E0D9CC0C01C2449460* L_22 = V_3;
		int32_t L_23 = V_4;
		NullCheck(L_22);
		ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A L_24;
		L_24 = KeyValuePair_2_get_Key_m31FF72E7D6E74CE5DB2E5B3B8FC6B66B7A452210_inline(((L_22)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_23))), il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		KeyValuePair_2U5BU5D_tF0A0AABC82DE189C18BE91E0D9CC0C01C2449460* L_25 = V_3;
		int32_t L_26 = V_4;
		NullCheck(L_25);
		RuntimeObject* L_27;
		L_27 = KeyValuePair_2_get_Value_mD933B25C1491C37A3BE3B1E709D8C1C02408E76C_inline(((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26))), il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		Dictionary_2_Add_mDD9B32011F99913F7C26C8CE44D64E35574D047E(__this, L_24, L_27, il2cpp_rgctx_method(method->klass->rgctx_data, 16));
		int32_t L_28 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_28, 1));
	}

IL_00c0:
	{
		int32_t L_29 = V_4;
		KeyValuePair_2U5BU5D_tF0A0AABC82DE189C18BE91E0D9CC0C01C2449460* L_30 = V_3;
		NullCheck(L_30);
		if ((((int32_t)L_29) < ((int32_t)((int32_t)(((RuntimeArray*)L_30)->max_length)))))
		{
			goto IL_007f;
		}
	}
	{
		goto IL_00d0;
	}

IL_00c9:
	{
		__this->____buckets_0 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets_0), (void*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL);
	}

IL_00d0:
	{
		int32_t L_31 = V_1;
		__this->____version_5 = L_31;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* L_32;
		L_32 = HashHelpers_get_SerializationInfoTable_m8C17D5483B39B68897AEFFD14A9E139AF858222F(NULL);
		NullCheck(L_32);
		bool L_33;
		L_33 = ConditionalWeakTable_2_Remove_mEA61545EA43662F3718895F4E435A1F3EFB9756E(L_32, (RuntimeObject*)__this, ConditionalWeakTable_2_Remove_mEA61545EA43662F3718895F4E435A1F3EFB9756E_RuntimeMethod_var);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_m9C011EE1497A08BE38724E92602B8E81D73D2212_gshared (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = (int32_t)__this->____count_2;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = HashHelpers_ExpandPrime_m9A35EC171AA0EA16F7C9F71EE6FAD5A82565ADB9(L_0, NULL);
		Dictionary_2_Resize_m2D68A88747287ED742784209B25878766AF538DB(__this, L_1, (bool)0, il2cpp_rgctx_method(method->klass->rgctx_data, 51));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_m2D68A88747287ED742784209B25878766AF538DB_gshared (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* __this, int32_t ___0_newSize, bool ___1_forceNewHashCodes, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_0 = NULL;
	EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* V_1 = NULL;
	int32_t V_2 = 0;
	ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A V_3;
	memset((&V_3), 0, sizeof(V_3));
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	{
		int32_t L_0 = ___0_newSize;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_0);
		V_0 = L_1;
		int32_t L_2 = ___0_newSize;
		EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* L_3 = (EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9*)(EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 48), (uint32_t)L_2);
		V_1 = L_3;
		int32_t L_4 = (int32_t)__this->____count_2;
		V_2 = L_4;
		EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* L_5 = (EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9*)__this->____entries_1;
		EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* L_6 = V_1;
		int32_t L_7 = V_2;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_5, 0, (RuntimeArray*)L_6, 0, L_7, NULL);
		il2cpp_codegen_initobj((&V_3), sizeof(ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A));
		ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A L_8 = V_3;
		bool L_9 = ___1_forceNewHashCodes;
		if (!((int32_t)((int32_t)false&(int32_t)L_9)))
		{
			goto IL_0084;
		}
	}
	{
		V_4 = 0;
		goto IL_007f;
	}

IL_003e:
	{
		EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* L_10 = V_1;
		int32_t L_11 = V_4;
		NullCheck(L_10);
		int32_t L_12 = (int32_t)((L_10)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_11)))->___hashCode_0;
		if ((((int32_t)L_12) < ((int32_t)0)))
		{
			goto IL_0079;
		}
	}
	{
		EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* L_13 = V_1;
		int32_t L_14 = V_4;
		NullCheck(L_13);
		EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* L_15 = V_1;
		int32_t L_16 = V_4;
		NullCheck(L_15);
		ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A* L_17 = (ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A*)(&((L_15)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_16)))->___key_2);
		int32_t L_18;
		L_18 = ValueTuple_2_GetHashCode_m02C84696292D14B993EDCDED373702CF8E5DB5F7(L_17, il2cpp_rgctx_method(method->klass->rgctx_data, 44));
		((L_13)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_14)))->___hashCode_0 = ((int32_t)(L_18&((int32_t)2147483647LL)));
	}

IL_0079:
	{
		int32_t L_19 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_19, 1));
	}

IL_007f:
	{
		int32_t L_20 = V_4;
		int32_t L_21 = V_2;
		if ((((int32_t)L_20) < ((int32_t)L_21)))
		{
			goto IL_003e;
		}
	}

IL_0084:
	{
		V_5 = 0;
		goto IL_00cb;
	}

IL_0089:
	{
		EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* L_22 = V_1;
		int32_t L_23 = V_5;
		NullCheck(L_22);
		int32_t L_24 = (int32_t)((L_22)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_23)))->___hashCode_0;
		if ((((int32_t)L_24) < ((int32_t)0)))
		{
			goto IL_00c5;
		}
	}
	{
		EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* L_25 = V_1;
		int32_t L_26 = V_5;
		NullCheck(L_25);
		int32_t L_27 = (int32_t)((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___hashCode_0;
		int32_t L_28 = ___0_newSize;
		V_6 = ((int32_t)(L_27%L_28));
		EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* L_29 = V_1;
		int32_t L_30 = V_5;
		NullCheck(L_29);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_31 = V_0;
		int32_t L_32 = V_6;
		NullCheck(L_31);
		int32_t L_33 = L_32;
		int32_t L_34 = (L_31)->GetAt(static_cast<il2cpp_array_size_t>(L_33));
		((L_29)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_30)))->___next_1 = ((int32_t)il2cpp_codegen_subtract(L_34, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_35 = V_0;
		int32_t L_36 = V_6;
		int32_t L_37 = V_5;
		NullCheck(L_35);
		(L_35)->SetAt(static_cast<il2cpp_array_size_t>(L_36), (int32_t)((int32_t)il2cpp_codegen_add(L_37, 1)));
	}

IL_00c5:
	{
		int32_t L_38 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_38, 1));
	}

IL_00cb:
	{
		int32_t L_39 = V_5;
		int32_t L_40 = V_2;
		if ((((int32_t)L_39) < ((int32_t)L_40)))
		{
			goto IL_0089;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_41 = V_0;
		__this->____buckets_0 = L_41;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets_0), (void*)L_41);
		EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* L_42 = V_1;
		__this->____entries_1 = L_42;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____entries_1), (void*)L_42);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_m955C32400B1E624FFFA1E18F46FFBBB5963705B9_gshared (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* __this, ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A ___0_key, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	Entry_t9E54CCBCBF389A3EB228FFF39B2963CCB6661448* V_4 = NULL;
	RuntimeObject* G_B5_0 = NULL;
	RuntimeObject* G_B4_0 = NULL;
	int32_t G_B6_0 = 0;
	RuntimeObject* G_B10_0 = NULL;
	RuntimeObject* G_B9_0 = NULL;
	bool G_B11_0 = false;
	{
		goto IL_000e;
	}

IL_000e:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		if (!L_1)
		{
			goto IL_0149;
		}
	}
	{
		RuntimeObject* L_2 = (RuntimeObject*)__this->____comparer_6;
		RuntimeObject* L_3 = L_2;
		if (L_3)
		{
			G_B5_0 = L_3;
			goto IL_0032;
		}
		G_B4_0 = L_3;
	}
	{
		int32_t L_4;
		L_4 = ValueTuple_2_GetHashCode_m02C84696292D14B993EDCDED373702CF8E5DB5F7((&___0_key), il2cpp_rgctx_method(method->klass->rgctx_data, 44));
		G_B6_0 = L_4;
		goto IL_0038;
	}

IL_0032:
	{
		ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A L_5 = ___0_key;
		NullCheck(G_B5_0);
		int32_t L_6;
		L_6 = InterfaceFuncInvoker1< int32_t, ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 1), G_B5_0, L_5);
		G_B6_0 = L_6;
	}

IL_0038:
	{
		V_0 = ((int32_t)(G_B6_0&((int32_t)2147483647LL)));
		int32_t L_7 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_8 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		NullCheck(L_8);
		V_1 = ((int32_t)(L_7%((int32_t)(((RuntimeArray*)L_8)->max_length))));
		V_2 = (-1);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		int32_t L_10 = V_1;
		NullCheck(L_9);
		int32_t L_11 = L_10;
		int32_t L_12 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		V_3 = ((int32_t)il2cpp_codegen_subtract(L_12, 1));
		goto IL_0142;
	}

IL_005c:
	{
		EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* L_13 = (EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9*)__this->____entries_1;
		int32_t L_14 = V_3;
		NullCheck(L_13);
		V_4 = ((L_13)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_14)));
		Entry_t9E54CCBCBF389A3EB228FFF39B2963CCB6661448* L_15 = V_4;
		int32_t L_16 = (int32_t)L_15->___hashCode_0;
		int32_t L_17 = V_0;
		if ((!(((uint32_t)L_16) == ((uint32_t)L_17))))
		{
			goto IL_0138;
		}
	}
	{
		RuntimeObject* L_18 = (RuntimeObject*)__this->____comparer_6;
		RuntimeObject* L_19 = L_18;
		if (L_19)
		{
			G_B10_0 = L_19;
			goto IL_0095;
		}
		G_B9_0 = L_19;
	}
	{
		EqualityComparer_1_t39F37BD252745ACD048E411385EBDFBABD5BBFAE* L_20;
		L_20 = EqualityComparer_1_get_Default_m337E4360DF25127CED0E5DEC4827A905E8EBA5E0_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		Entry_t9E54CCBCBF389A3EB228FFF39B2963CCB6661448* L_21 = V_4;
		ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A L_22 = (ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A)L_21->___key_2;
		ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A L_23 = ___0_key;
		NullCheck(L_20);
		bool L_24;
		L_24 = VirtualFuncInvoker2< bool, ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A, ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A >::Invoke(8, L_20, L_22, L_23);
		G_B11_0 = L_24;
		goto IL_00a2;
	}

IL_0095:
	{
		Entry_t9E54CCBCBF389A3EB228FFF39B2963CCB6661448* L_25 = V_4;
		ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A L_26 = (ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A)L_25->___key_2;
		ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A L_27 = ___0_key;
		NullCheck(G_B10_0);
		bool L_28;
		L_28 = InterfaceFuncInvoker2< bool, ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A, ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 1), G_B10_0, L_26, L_27);
		G_B11_0 = L_28;
	}

IL_00a2:
	{
		if (!G_B11_0)
		{
			goto IL_0138;
		}
	}
	{
		int32_t L_29 = V_2;
		if ((((int32_t)L_29) >= ((int32_t)0)))
		{
			goto IL_00be;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_30 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		int32_t L_31 = V_1;
		Entry_t9E54CCBCBF389A3EB228FFF39B2963CCB6661448* L_32 = V_4;
		int32_t L_33 = (int32_t)L_32->___next_1;
		NullCheck(L_30);
		(L_30)->SetAt(static_cast<il2cpp_array_size_t>(L_31), (int32_t)((int32_t)il2cpp_codegen_add(L_33, 1)));
		goto IL_00d6;
	}

IL_00be:
	{
		EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* L_34 = (EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9*)__this->____entries_1;
		int32_t L_35 = V_2;
		NullCheck(L_34);
		Entry_t9E54CCBCBF389A3EB228FFF39B2963CCB6661448* L_36 = V_4;
		int32_t L_37 = (int32_t)L_36->___next_1;
		((L_34)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_35)))->___next_1 = L_37;
	}

IL_00d6:
	{
		Entry_t9E54CCBCBF389A3EB228FFF39B2963CCB6661448* L_38 = V_4;
		L_38->___hashCode_0 = (-1);
		Entry_t9E54CCBCBF389A3EB228FFF39B2963CCB6661448* L_39 = V_4;
		int32_t L_40 = (int32_t)__this->____freeList_3;
		L_39->___next_1 = L_40;
	}
	{
		Entry_t9E54CCBCBF389A3EB228FFF39B2963CCB6661448* L_41 = V_4;
		ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A* L_42 = (ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A*)(&L_41->___key_2);
		il2cpp_codegen_initobj(L_42, sizeof(ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A));
	}

IL_00ff:
	{
	}
	{
		Entry_t9E54CCBCBF389A3EB228FFF39B2963CCB6661448* L_43 = V_4;
		RuntimeObject** L_44 = (RuntimeObject**)(&L_43->___value_3);
		il2cpp_codegen_initobj(L_44, sizeof(RuntimeObject*));
	}

IL_0113:
	{
		int32_t L_45 = V_3;
		__this->____freeList_3 = L_45;
		int32_t L_46 = (int32_t)__this->____freeCount_4;
		__this->____freeCount_4 = ((int32_t)il2cpp_codegen_add(L_46, 1));
		int32_t L_47 = (int32_t)__this->____version_5;
		__this->____version_5 = ((int32_t)il2cpp_codegen_add(L_47, 1));
		return (bool)1;
	}

IL_0138:
	{
		int32_t L_48 = V_3;
		V_2 = L_48;
		Entry_t9E54CCBCBF389A3EB228FFF39B2963CCB6661448* L_49 = V_4;
		int32_t L_50 = (int32_t)L_49->___next_1;
		V_3 = L_50;
	}

IL_0142:
	{
		int32_t L_51 = V_3;
		if ((((int32_t)L_51) >= ((int32_t)0)))
		{
			goto IL_005c;
		}
	}

IL_0149:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_m65316B5BBBCA1E7FA03561A97E22F2860B92FDF5_gshared (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* __this, ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A ___0_key, RuntimeObject** ___1_value, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A L_0 = ___0_key;
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_m934C298F9973F16F2A755D65E374A6EE37302D63(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 28));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0025;
		}
	}
	{
		RuntimeObject** L_3 = ___1_value;
		EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* L_4 = (EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9*)__this->____entries_1;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		RuntimeObject* L_6 = (RuntimeObject*)((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)))->___value_3;
		*(RuntimeObject**)L_3 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_3, (void*)L_6);
		return (bool)1;
	}

IL_0025:
	{
		RuntimeObject** L_7 = ___1_value;
		il2cpp_codegen_initobj(L_7, sizeof(RuntimeObject*));
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryAdd_mCFE3B0F6F63ADFF26FB4623C8EAB4B8920D257EB_gshared (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* __this, ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) 
{
	{
		ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A L_0 = ___0_key;
		RuntimeObject* L_1 = ___1_value;
		bool L_2;
		L_2 = Dictionary_2_TryInsert_mC32565FBB5F884CC065F1EE7E2BE4F250DF6AECD(__this, L_0, L_1, (uint8_t)0, il2cpp_rgctx_method(method->klass->rgctx_data, 29));
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m08F8980BA41D175D9D5755E520ECEC499FAECF65_gshared (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m8B6070F6B012031518CAF9D85C4AA0880199C5E9_gshared (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* __this, KeyValuePair_2U5BU5D_tF0A0AABC82DE189C18BE91E0D9CC0C01C2449460* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		KeyValuePair_2U5BU5D_tF0A0AABC82DE189C18BE91E0D9CC0C01C2449460* L_0 = ___0_array;
		int32_t L_1 = ___1_index;
		Dictionary_2_CopyTo_m154D895C0AEC517A3F2A7C886C23633368AFCFC3(__this, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 42));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_ICollection_CopyTo_m3F00D474C864259E96AE8A127C47D3AA12CBC787_gshared (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* __this, RuntimeArray* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	KeyValuePair_2U5BU5D_tF0A0AABC82DE189C18BE91E0D9CC0C01C2449460* V_0 = NULL;
	DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533* V_1 = NULL;
	EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* V_2 = NULL;
	int32_t V_3 = 0;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_4 = NULL;
	int32_t V_5 = 0;
	EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* V_6 = NULL;
	int32_t V_7 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeArray* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)3, NULL);
	}

IL_0009:
	{
		RuntimeArray* L_1 = ___0_array;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(L_1, NULL);
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0018;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)7, NULL);
	}

IL_0018:
	{
		RuntimeArray* L_3 = ___0_array;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(L_3, 0, NULL);
		if (!L_4)
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)6, NULL);
	}

IL_0027:
	{
		int32_t L_5 = ___1_index;
		RuntimeArray* L_6 = ___0_array;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(L_6, NULL);
		if ((!(((uint32_t)L_5) > ((uint32_t)L_7))))
		{
			goto IL_0035;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0035:
	{
		RuntimeArray* L_8 = ___0_array;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(L_8, NULL);
		int32_t L_10 = ___1_index;
		int32_t L_11;
		L_11 = Dictionary_2_get_Count_mC9C0153BE4100526AEB467BE880EFBD8FB00D56F(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 36));
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_9, L_10))) >= ((int32_t)L_11)))
		{
			goto IL_004b;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)5, NULL);
	}

IL_004b:
	{
		RuntimeArray* L_12 = ___0_array;
		V_0 = ((KeyValuePair_2U5BU5D_tF0A0AABC82DE189C18BE91E0D9CC0C01C2449460*)IsInst((RuntimeObject*)L_12, il2cpp_rgctx_data(method->klass->rgctx_data, 35)));
		KeyValuePair_2U5BU5D_tF0A0AABC82DE189C18BE91E0D9CC0C01C2449460* L_13 = V_0;
		if (!L_13)
		{
			goto IL_005e;
		}
	}
	{
		KeyValuePair_2U5BU5D_tF0A0AABC82DE189C18BE91E0D9CC0C01C2449460* L_14 = V_0;
		int32_t L_15 = ___1_index;
		Dictionary_2_CopyTo_m154D895C0AEC517A3F2A7C886C23633368AFCFC3(__this, L_14, L_15, il2cpp_rgctx_method(method->klass->rgctx_data, 42));
		return;
	}

IL_005e:
	{
		RuntimeArray* L_16 = ___0_array;
		V_1 = ((DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533*)IsInst((RuntimeObject*)L_16, DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533_il2cpp_TypeInfo_var));
		DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533* L_17 = V_1;
		if (!L_17)
		{
			goto IL_00c3;
		}
	}
	{
		EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* L_18 = (EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9*)__this->____entries_1;
		V_2 = L_18;
		V_3 = 0;
		goto IL_00b9;
	}

IL_0073:
	{
		EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* L_19 = V_2;
		int32_t L_20 = V_3;
		NullCheck(L_19);
		int32_t L_21 = (int32_t)((L_19)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_20)))->___hashCode_0;
		if ((((int32_t)L_21) < ((int32_t)0)))
		{
			goto IL_00b5;
		}
	}
	{
		DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533* L_22 = V_1;
		int32_t L_23 = ___1_index;
		int32_t L_24 = L_23;
		___1_index = ((int32_t)il2cpp_codegen_add(L_24, 1));
		EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* L_25 = V_2;
		int32_t L_26 = V_3;
		NullCheck(L_25);
		ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A L_27 = (ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A)((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___key_2;
		ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A L_28 = L_27;
		RuntimeObject* L_29 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14), &L_28);
		EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* L_30 = V_2;
		int32_t L_31 = V_3;
		NullCheck(L_30);
		RuntimeObject* L_32 = (RuntimeObject*)((L_30)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_31)))->___value_3;
		DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB L_33;
		memset((&L_33), 0, sizeof(L_33));
		DictionaryEntry__ctor_m2768353E53A75C4860E34B37DAF1342120C5D1EA((&L_33), L_29, L_32, NULL);
		NullCheck(L_22);
		(L_22)->SetAt(static_cast<il2cpp_array_size_t>(L_24), (DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB)L_33);
	}

IL_00b5:
	{
		int32_t L_34 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_34, 1));
	}

IL_00b9:
	{
		int32_t L_35 = V_3;
		int32_t L_36 = (int32_t)__this->____count_2;
		if ((((int32_t)L_35) < ((int32_t)L_36)))
		{
			goto IL_0073;
		}
	}
	{
		return;
	}

IL_00c3:
	{
		RuntimeArray* L_37 = ___0_array;
		V_4 = ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)IsInst((RuntimeObject*)L_37, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_38 = V_4;
		if (L_38)
		{
			goto IL_00d4;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
	}

IL_00d4:
	{
	}
	try
	{
		{
			int32_t L_39 = (int32_t)__this->____count_2;
			V_5 = L_39;
			EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* L_40 = (EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9*)__this->____entries_1;
			V_6 = L_40;
			V_7 = 0;
			goto IL_0130_1;
		}

IL_00ea_1:
		{
			EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* L_41 = V_6;
			int32_t L_42 = V_7;
			NullCheck(L_41);
			int32_t L_43 = (int32_t)((L_41)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_42)))->___hashCode_0;
			if ((((int32_t)L_43) < ((int32_t)0)))
			{
				goto IL_012a_1;
			}
		}
		{
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_44 = V_4;
			int32_t L_45 = ___1_index;
			int32_t L_46 = L_45;
			___1_index = ((int32_t)il2cpp_codegen_add(L_46, 1));
			EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* L_47 = V_6;
			int32_t L_48 = V_7;
			NullCheck(L_47);
			ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A L_49 = (ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A)((L_47)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_48)))->___key_2;
			EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* L_50 = V_6;
			int32_t L_51 = V_7;
			NullCheck(L_50);
			RuntimeObject* L_52 = (RuntimeObject*)((L_50)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_51)))->___value_3;
			KeyValuePair_2_t2A9D1B7DEBB99A68011F37B017FDD44CFE5AEC14 L_53;
			memset((&L_53), 0, sizeof(L_53));
			KeyValuePair_2__ctor_m7D13D8559B135D9A99FBA279CF4C2BDCB990CCF1((&L_53), L_49, L_52, il2cpp_rgctx_method(method->klass->rgctx_data, 37));
			KeyValuePair_2_t2A9D1B7DEBB99A68011F37B017FDD44CFE5AEC14 L_54 = L_53;
			RuntimeObject* L_55 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 21), &L_54);
			NullCheck(L_44);
			ArrayElementTypeCheck (L_44, L_55);
			(L_44)->SetAt(static_cast<il2cpp_array_size_t>(L_46), (RuntimeObject*)L_55);
		}

IL_012a_1:
		{
			int32_t L_56 = V_7;
			V_7 = ((int32_t)il2cpp_codegen_add(L_56, 1));
		}

IL_0130_1:
		{
			int32_t L_57 = V_7;
			int32_t L_58 = V_5;
			if ((((int32_t)L_57) < ((int32_t)L_58)))
			{
				goto IL_00ea_1;
			}
		}
		{
			goto IL_0140;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0138;
		}
		throw e;
	}

CATCH_0138:
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0140;
	}

IL_0140:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m904B76BE6F9CA0FC90A3E300E03FACB2CD5C8BDE_gshared (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t4C98DC0014F7B9B79F0AE8FCB4EC3987119C58D9 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m283889D2E2926F56ECD2EEA3767F2A21F0488164((&L_0), __this, 2, il2cpp_rgctx_method(method->klass->rgctx_data, 39));
		Enumerator_t4C98DC0014F7B9B79F0AE8FCB4EC3987119C58D9 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 38), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_ICollection_get_SyncRoot_m106E312F89A7FF2E8CF9BF88DA09FD2AD89E9652_gshared (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->____syncRoot_9;
		if (L_0)
		{
			goto IL_001a;
		}
	}
	{
		RuntimeObject** L_1 = (RuntimeObject**)(&__this->____syncRoot_9);
		RuntimeObject* L_2 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_2, NULL);
		RuntimeObject* L_3;
		L_3 = InterlockedCompareExchangeImpl<RuntimeObject*>(L_1, L_2, NULL);
	}

IL_001a:
	{
		RuntimeObject* L_4 = (RuntimeObject*)__this->____syncRoot_9;
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IDictionary_get_Keys_mCF2A0CFD03E10AF1611AD3E394F340A2A7BEB016_gshared (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* __this, const RuntimeMethod* method) 
{
	{
		KeyCollection_t90C2F9D22B44E6B189DB7B61265585A859F93123* L_0;
		L_0 = Dictionary_2_get_Keys_m48AD1CD8EB0B41F2D58FDFA10B92A85DB9933FF2(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 55));
		return (RuntimeObject*)L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IDictionary_get_Item_m578F26947EC223AF042037DF6D88F725A17C1CD4_gshared (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		RuntimeObject* L_0 = ___0_key;
		bool L_1;
		L_1 = Dictionary_2_IsCompatibleKey_mBADA2F1594D5A4B02B457440963FC7AFCDCB6861(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 56));
		if (!L_1)
		{
			goto IL_0030;
		}
	}
	{
		RuntimeObject* L_2 = ___0_key;
		int32_t L_3;
		L_3 = Dictionary_2_FindEntry_m934C298F9973F16F2A755D65E374A6EE37302D63(__this, ((*(ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A*)((ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A*)(ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 14))))), il2cpp_rgctx_method(method->klass->rgctx_data, 28));
		V_0 = L_3;
		int32_t L_4 = V_0;
		if ((((int32_t)L_4) < ((int32_t)0)))
		{
			goto IL_0030;
		}
	}
	{
		EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* L_5 = (EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9*)__this->____entries_1;
		int32_t L_6 = V_0;
		NullCheck(L_5);
		RuntimeObject* L_7 = (RuntimeObject*)((L_5)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_6)))->___value_3;
		return L_7;
	}

IL_0030:
	{
		return NULL;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_IDictionary_set_Item_m36BF55AAF072CC8471B04911DF96474EA3BC8825_gshared (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* __this, RuntimeObject* ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) 
{
	ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A V_0;
	memset((&V_0), 0, sizeof(V_0));
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 2> __active_exceptions;
	{
		RuntimeObject* L_0 = ___0_key;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)5, NULL);
	}

IL_0009:
	{
		RuntimeObject* L_1 = ___1_value;
		ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisRuntimeObject_m27E41ACCEE817CDFBB9616ED62F233A4EA0D8A49(L_1, (int32_t)((int32_t)15), il2cpp_rgctx_method(method->klass->rgctx_data, 58));
	}
	try
	{
		{
			RuntimeObject* L_2 = ___0_key;
			V_0 = ((*(ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A*)((ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A*)(ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 14)))));
		}
		try
		{
			ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A L_3 = V_0;
			RuntimeObject* L_4 = ___1_value;
			Dictionary_2_set_Item_m4C8CF6E01F44588133C83CC2DF0C9F47F1644BD0(__this, L_3, ((RuntimeObject*)Castclass((RuntimeObject*)L_4, il2cpp_rgctx_data(method->klass->rgctx_data, 15))), il2cpp_rgctx_method(method->klass->rgctx_data, 59));
			goto IL_003a_1;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_0027_1;
			}
			throw e;
		}

CATCH_0027_1:
		{
			RuntimeObject* L_5 = ___1_value;
			RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 60)) };
			il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
			Type_t* L_7;
			L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
			ThrowHelper_ThrowWrongValueTypeArgumentException_mC1A6BBE43C360583C1E2C463D5B0AADF1E3E1910(L_5, L_7, NULL);
			IL2CPP_POP_ACTIVE_EXCEPTION();
			goto IL_003a_1;
		}

IL_003a_1:
		{
			goto IL_004f;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_003c;
		}
		throw e;
	}

CATCH_003c:
	{
		RuntimeObject* L_8 = ___0_key;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_9 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 61)) };
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
		Type_t* L_10;
		L_10 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_9, NULL);
		ThrowHelper_ThrowWrongKeyTypeArgumentException_m90E5BCE2CB10EEC16F254C237121C6816C4D6982(L_8, L_10, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_004f;
	}

IL_004f:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_IsCompatibleKey_mBADA2F1594D5A4B02B457440963FC7AFCDCB6861_gshared (RuntimeObject* ___0_key, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_key;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)5, NULL);
	}

IL_0009:
	{
		RuntimeObject* L_1 = ___0_key;
		return (bool)((!(((RuntimeObject*)(RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_1, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 14)))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_IDictionary_Contains_mAA97B6F0E3AA42F45BBCE847BCADC2D626F21112_gshared (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_key;
		bool L_1;
		L_1 = Dictionary_2_IsCompatibleKey_mBADA2F1594D5A4B02B457440963FC7AFCDCB6861(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 56));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_key;
		bool L_3;
		L_3 = Dictionary_2_ContainsKey_m784FD7E9B0EA6F7F56F90480CDDE24E7FFBBC46D(__this, ((*(ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A*)((ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A*)(ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 14))))), il2cpp_rgctx_method(method->klass->rgctx_data, 62));
		return L_3;
	}

IL_0015:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IDictionary_GetEnumerator_mE7E563DCFA8A83D43D1077B358C6DC613F78738B_gshared (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t4C98DC0014F7B9B79F0AE8FCB4EC3987119C58D9 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m283889D2E2926F56ECD2EEA3767F2A21F0488164((&L_0), __this, 1, il2cpp_rgctx_method(method->klass->rgctx_data, 39));
		Enumerator_t4C98DC0014F7B9B79F0AE8FCB4EC3987119C58D9 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 38), &L_1);
		return (RuntimeObject*)L_2;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m64823F7A890B59D56F3BA39E142EF54BA7D389E8_gshared (Dictionary_2_tA59FCDC7016E38E9B9B393997928B8B73460F4DF* __this, const RuntimeMethod* method) 
{
	{
		Dictionary_2__ctor_m1619CE263514C42D17636C8161035E73F3C84AB4(__this, 0, (RuntimeObject*)NULL, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m41B6E325F50354704C9D975CA2431DCAFED9820C_gshared (Dictionary_2_tA59FCDC7016E38E9B9B393997928B8B73460F4DF* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_capacity;
		Dictionary_2__ctor_m1619CE263514C42D17636C8161035E73F3C84AB4(__this, L_0, (RuntimeObject*)NULL, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m3802C61481ECC787C19469E22078C342CE105980_gshared (Dictionary_2_tA59FCDC7016E38E9B9B393997928B8B73460F4DF* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_comparer;
		Dictionary_2__ctor_m1619CE263514C42D17636C8161035E73F3C84AB4(__this, 0, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m1619CE263514C42D17636C8161035E73F3C84AB4_gshared (Dictionary_2_tA59FCDC7016E38E9B9B393997928B8B73460F4DF* __this, int32_t ___0_capacity, RuntimeObject* ___1_comparer, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		int32_t L_0 = ___0_capacity;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0011;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m9B335696876184D17D1F8D7AF94C1B5B0869AA97((int32_t)((int32_t)12), NULL);
	}

IL_0011:
	{
		int32_t L_1 = ___0_capacity;
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_001d;
		}
	}
	{
		int32_t L_2 = ___0_capacity;
		int32_t L_3;
		L_3 = Dictionary_2_Initialize_m31D87D4F7A8DCFAAFFFF6A52E0591C0B731F1260(__this, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
	}

IL_001d:
	{
		RuntimeObject* L_4 = ___1_comparer;
		EqualityComparer_1_tAAD1A76C30594C4D736E586B3D77281A53A27399* L_5;
		L_5 = EqualityComparer_1_get_Default_m5DCC393F5D59545D96AF9FF747F17C72EABB5D3B_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		if ((((RuntimeObject*)(RuntimeObject*)L_4) == ((RuntimeObject*)(EqualityComparer_1_tAAD1A76C30594C4D736E586B3D77281A53A27399*)L_5)))
		{
			goto IL_002c;
		}
	}
	{
		RuntimeObject* L_6 = ___1_comparer;
		__this->____comparer_6 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____comparer_6), (void*)L_6);
	}

IL_002c:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m1065636509C766F4B777CE00FEA5A52906C0034A_gshared (Dictionary_2_tA59FCDC7016E38E9B9B393997928B8B73460F4DF* __this, RuntimeObject* ___0_dictionary, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_dictionary;
		Dictionary_2__ctor_m9E2BEA796ED0C27EC6012E75B29E4D24D9DA5829(__this, L_0, (RuntimeObject*)NULL, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m9E2BEA796ED0C27EC6012E75B29E4D24D9DA5829_gshared (Dictionary_2_tA59FCDC7016E38E9B9B393997928B8B73460F4DF* __this, RuntimeObject* ___0_dictionary, RuntimeObject* ___1_comparer, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	EntryU5BU5D_t2FA9EF95EBAB729FEB4F9541CAC889E13FC7202B* V_1 = NULL;
	int32_t V_2 = 0;
	RuntimeObject* V_3 = NULL;
	KeyValuePair_2_t103EED32AF196D79C0FCDE0CE9C589258217044B V_4;
	memset((&V_4), 0, sizeof(V_4));
	Dictionary_2_tA59FCDC7016E38E9B9B393997928B8B73460F4DF* G_B2_0 = NULL;
	Dictionary_2_tA59FCDC7016E38E9B9B393997928B8B73460F4DF* G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	Dictionary_2_tA59FCDC7016E38E9B9B393997928B8B73460F4DF* G_B3_1 = NULL;
	{
		RuntimeObject* L_0 = ___0_dictionary;
		if (L_0)
		{
			G_B2_0 = __this;
			goto IL_0007;
		}
		G_B1_0 = __this;
	}
	{
		G_B3_0 = 0;
		G_B3_1 = G_B1_0;
		goto IL_000d;
	}

IL_0007:
	{
		RuntimeObject* L_1 = ___0_dictionary;
		NullCheck((RuntimeObject*)L_1);
		int32_t L_2;
		L_2 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 9), (RuntimeObject*)L_1);
		G_B3_0 = L_2;
		G_B3_1 = G_B2_0;
	}

IL_000d:
	{
		RuntimeObject* L_3 = ___1_comparer;
		Dictionary_2__ctor_m1619CE263514C42D17636C8161035E73F3C84AB4(G_B3_1, G_B3_0, L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		RuntimeObject* L_4 = ___0_dictionary;
		if (L_4)
		{
			goto IL_001c;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)1, NULL);
	}

IL_001c:
	{
		RuntimeObject* L_5 = ___0_dictionary;
		NullCheck((RuntimeObject*)L_5);
		Type_t* L_6;
		L_6 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3((RuntimeObject*)L_5, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 11)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		bool L_9;
		L_9 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_6, L_8, NULL);
		if (!L_9)
		{
			goto IL_0080;
		}
	}
	{
		RuntimeObject* L_10 = ___0_dictionary;
		Dictionary_2_tA59FCDC7016E38E9B9B393997928B8B73460F4DF* L_11 = ((Dictionary_2_tA59FCDC7016E38E9B9B393997928B8B73460F4DF*)CastclassClass((RuntimeObject*)L_10, il2cpp_rgctx_data(method->klass->rgctx_data, 6)));
		NullCheck(L_11);
		int32_t L_12 = (int32_t)L_11->____count_2;
		V_0 = L_12;
		NullCheck(L_11);
		EntryU5BU5D_t2FA9EF95EBAB729FEB4F9541CAC889E13FC7202B* L_13 = (EntryU5BU5D_t2FA9EF95EBAB729FEB4F9541CAC889E13FC7202B*)L_11->____entries_1;
		V_1 = L_13;
		V_2 = 0;
		goto IL_007b;
	}

IL_004a:
	{
		EntryU5BU5D_t2FA9EF95EBAB729FEB4F9541CAC889E13FC7202B* L_14 = V_1;
		int32_t L_15 = V_2;
		NullCheck(L_14);
		int32_t L_16 = (int32_t)((L_14)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_15)))->___hashCode_0;
		if ((((int32_t)L_16) < ((int32_t)0)))
		{
			goto IL_0077;
		}
	}
	{
		EntryU5BU5D_t2FA9EF95EBAB729FEB4F9541CAC889E13FC7202B* L_17 = V_1;
		int32_t L_18 = V_2;
		NullCheck(L_17);
		Guid_t L_19 = (Guid_t)((L_17)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_18)))->___key_2;
		EntryU5BU5D_t2FA9EF95EBAB729FEB4F9541CAC889E13FC7202B* L_20 = V_1;
		int32_t L_21 = V_2;
		NullCheck(L_20);
		int32_t L_22 = (int32_t)((L_20)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_21)))->___value_3;
		Dictionary_2_Add_m8D4CBB16CCDD13C30903509F4791575E70E33EE1(__this, L_19, L_22, il2cpp_rgctx_method(method->klass->rgctx_data, 16));
	}

IL_0077:
	{
		int32_t L_23 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_23, 1));
	}

IL_007b:
	{
		int32_t L_24 = V_2;
		int32_t L_25 = V_0;
		if ((((int32_t)L_24) < ((int32_t)L_25)))
		{
			goto IL_004a;
		}
	}
	{
		return;
	}

IL_0080:
	{
		RuntimeObject* L_26 = ___0_dictionary;
		NullCheck((RuntimeObject*)L_26);
		RuntimeObject* L_27;
		L_27 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 17), (RuntimeObject*)L_26);
		V_3 = L_27;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00af:
			{
				{
					RuntimeObject* L_28 = V_3;
					if (!L_28)
					{
						goto IL_00b8;
					}
				}
				{
					RuntimeObject* L_29 = V_3;
					NullCheck((RuntimeObject*)L_29);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_29);
				}

IL_00b8:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_00a5_1;
			}

IL_0089_1:
			{
				RuntimeObject* L_30 = V_3;
				NullCheck(L_30);
				KeyValuePair_2_t103EED32AF196D79C0FCDE0CE9C589258217044B L_31;
				L_31 = InterfaceFuncInvoker0< KeyValuePair_2_t103EED32AF196D79C0FCDE0CE9C589258217044B >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 19), L_30);
				V_4 = L_31;
				Guid_t L_32;
				L_32 = KeyValuePair_2_get_Key_m190F16A3EFBED6D9959367C13683CCE34C111E13_inline((&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 22));
				int32_t L_33;
				L_33 = KeyValuePair_2_get_Value_m165045D6956E45F7B10F7F2DFCD7A97140F887C2_inline((&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 23));
				Dictionary_2_Add_m8D4CBB16CCDD13C30903509F4791575E70E33EE1(__this, L_32, L_33, il2cpp_rgctx_method(method->klass->rgctx_data, 16));
			}

IL_00a5_1:
			{
				RuntimeObject* L_34 = V_3;
				NullCheck((RuntimeObject*)L_34);
				bool L_35;
				L_35 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_34);
				if (L_35)
				{
					goto IL_0089_1;
				}
			}
			{
				goto IL_00b9;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00b9:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mEBE7589C03CBE889857C3B9CBF001F4940939A92_gshared (Dictionary_2_tA59FCDC7016E38E9B9B393997928B8B73460F4DF* __this, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___0_info, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___1_context, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConditionalWeakTable_2_Add_mF98A2811734A37D856C622E7783FD7502AA7F0B7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* L_0;
		L_0 = HashHelpers_get_SerializationInfoTable_m8C17D5483B39B68897AEFFD14A9E139AF858222F(NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_1 = ___0_info;
		NullCheck(L_0);
		ConditionalWeakTable_2_Add_mF98A2811734A37D856C622E7783FD7502AA7F0B7(L_0, (RuntimeObject*)__this, L_1, ConditionalWeakTable_2_Add_mF98A2811734A37D856C622E7783FD7502AA7F0B7_RuntimeMethod_var);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_get_Count_m5E06E62014099F11845EDFAA7B53B04132BF73AC_gshared (Dictionary_2_tA59FCDC7016E38E9B9B393997928B8B73460F4DF* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____count_2;
		int32_t L_1 = (int32_t)__this->____freeCount_4;
		return ((int32_t)il2cpp_codegen_subtract(L_0, L_1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyCollection_t3230D276D9625DB17B194F08DFA6BF3606BE6267* Dictionary_2_get_Keys_mA894636E6D02C26187EC6BF2336CE2CFBFBCA71D_gshared (Dictionary_2_tA59FCDC7016E38E9B9B393997928B8B73460F4DF* __this, const RuntimeMethod* method) 
{
	{
		KeyCollection_t3230D276D9625DB17B194F08DFA6BF3606BE6267* L_0 = (KeyCollection_t3230D276D9625DB17B194F08DFA6BF3606BE6267*)__this->____keys_7;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		KeyCollection_t3230D276D9625DB17B194F08DFA6BF3606BE6267* L_1 = (KeyCollection_t3230D276D9625DB17B194F08DFA6BF3606BE6267*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 24));
		KeyCollection__ctor_m3EA02809C20A79E9A5401CA7CE99079BC321F53D(L_1, __this, il2cpp_rgctx_method(method->klass->rgctx_data, 25));
		__this->____keys_7 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____keys_7), (void*)L_1);
	}

IL_0014:
	{
		KeyCollection_t3230D276D9625DB17B194F08DFA6BF3606BE6267* L_2 = (KeyCollection_t3230D276D9625DB17B194F08DFA6BF3606BE6267*)__this->____keys_7;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueCollection_tF196B3CD364A680EF74D9FA64A62B0A043188D5A* Dictionary_2_get_Values_mC2A1199E90623091B937C80E4F7EB495F7456219_gshared (Dictionary_2_tA59FCDC7016E38E9B9B393997928B8B73460F4DF* __this, const RuntimeMethod* method) 
{
	{
		ValueCollection_tF196B3CD364A680EF74D9FA64A62B0A043188D5A* L_0 = (ValueCollection_tF196B3CD364A680EF74D9FA64A62B0A043188D5A*)__this->____values_8;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ValueCollection_tF196B3CD364A680EF74D9FA64A62B0A043188D5A* L_1 = (ValueCollection_tF196B3CD364A680EF74D9FA64A62B0A043188D5A*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 26));
		ValueCollection__ctor_m12DA5B7C21992011B17AA4B0F6E5C33BE116B887(L_1, __this, il2cpp_rgctx_method(method->klass->rgctx_data, 27));
		__this->____values_8 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____values_8), (void*)L_1);
	}

IL_0014:
	{
		ValueCollection_tF196B3CD364A680EF74D9FA64A62B0A043188D5A* L_2 = (ValueCollection_tF196B3CD364A680EF74D9FA64A62B0A043188D5A*)__this->____values_8;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_get_Item_mD220097B6B01BB8B63B9FBAFDB217F47158BE571_gshared (Dictionary_2_tA59FCDC7016E38E9B9B393997928B8B73460F4DF* __this, Guid_t ___0_key, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		Guid_t L_0 = ___0_key;
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_m1EEF386C2CD5E506570FE2E3437136B78014BB5C(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 28));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_001e;
		}
	}
	{
		EntryU5BU5D_t2FA9EF95EBAB729FEB4F9541CAC889E13FC7202B* L_3 = (EntryU5BU5D_t2FA9EF95EBAB729FEB4F9541CAC889E13FC7202B*)__this->____entries_1;
		int32_t L_4 = V_0;
		NullCheck(L_3);
		int32_t L_5 = (int32_t)((L_3)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_4)))->___value_3;
		return L_5;
	}

IL_001e:
	{
		Guid_t L_6 = ___0_key;
		Guid_t L_7 = L_6;
		RuntimeObject* L_8 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14), &L_7);
		ThrowHelper_ThrowKeyNotFoundException_m6A17735FA486AD43F2488DE39B755AC60BC99CE7(L_8, NULL);
		il2cpp_codegen_initobj((&V_1), sizeof(int32_t));
		int32_t L_9 = V_1;
		return L_9;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_m55BD33C380C42B78092B07D419F79D396A06AC80_gshared (Dictionary_2_tA59FCDC7016E38E9B9B393997928B8B73460F4DF* __this, Guid_t ___0_key, int32_t ___1_value, const RuntimeMethod* method) 
{
	{
		Guid_t L_0 = ___0_key;
		int32_t L_1 = ___1_value;
		bool L_2;
		L_2 = Dictionary_2_TryInsert_mE55551BDAABAA23D3D45EFE2629ABC9B2AAE0AC6(__this, L_0, L_1, (uint8_t)1, il2cpp_rgctx_method(method->klass->rgctx_data, 29));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_m8D4CBB16CCDD13C30903509F4791575E70E33EE1_gshared (Dictionary_2_tA59FCDC7016E38E9B9B393997928B8B73460F4DF* __this, Guid_t ___0_key, int32_t ___1_value, const RuntimeMethod* method) 
{
	{
		Guid_t L_0 = ___0_key;
		int32_t L_1 = ___1_value;
		bool L_2;
		L_2 = Dictionary_2_TryInsert_mE55551BDAABAA23D3D45EFE2629ABC9B2AAE0AC6(__this, L_0, L_1, (uint8_t)2, il2cpp_rgctx_method(method->klass->rgctx_data, 29));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_mBFB715207D70197FC809DD9A6B3C01E601150C06_gshared (Dictionary_2_tA59FCDC7016E38E9B9B393997928B8B73460F4DF* __this, KeyValuePair_2_t103EED32AF196D79C0FCDE0CE9C589258217044B ___0_keyValuePair, const RuntimeMethod* method) 
{
	{
		Guid_t L_0;
		L_0 = KeyValuePair_2_get_Key_m190F16A3EFBED6D9959367C13683CCE34C111E13_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		int32_t L_1;
		L_1 = KeyValuePair_2_get_Value_m165045D6956E45F7B10F7F2DFCD7A97140F887C2_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		Dictionary_2_Add_m8D4CBB16CCDD13C30903509F4791575E70E33EE1(__this, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 16));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m5C8ACE7B33D723396582DC105FD4DE06311F3020_gshared (Dictionary_2_tA59FCDC7016E38E9B9B393997928B8B73460F4DF* __this, KeyValuePair_2_t103EED32AF196D79C0FCDE0CE9C589258217044B ___0_keyValuePair, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		Guid_t L_0;
		L_0 = KeyValuePair_2_get_Key_m190F16A3EFBED6D9959367C13683CCE34C111E13_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_m1EEF386C2CD5E506570FE2E3437136B78014BB5C(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 28));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0038;
		}
	}
	{
		EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* L_3;
		L_3 = EqualityComparer_1_get_Default_mF70F6C11A35B420DFA4628EE316B087F2DCB280C_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 30));
		EntryU5BU5D_t2FA9EF95EBAB729FEB4F9541CAC889E13FC7202B* L_4 = (EntryU5BU5D_t2FA9EF95EBAB729FEB4F9541CAC889E13FC7202B*)__this->____entries_1;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		int32_t L_6 = (int32_t)((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)))->___value_3;
		int32_t L_7;
		L_7 = KeyValuePair_2_get_Value_m165045D6956E45F7B10F7F2DFCD7A97140F887C2_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		NullCheck(L_3);
		bool L_8;
		L_8 = VirtualFuncInvoker2< bool, int32_t, int32_t >::Invoke(8, L_3, L_6, L_7);
		if (!L_8)
		{
			goto IL_0038;
		}
	}
	{
		return (bool)1;
	}

IL_0038:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_mDCF4FD3020DC7B37629A5527D12E50D39EF66A05_gshared (Dictionary_2_tA59FCDC7016E38E9B9B393997928B8B73460F4DF* __this, KeyValuePair_2_t103EED32AF196D79C0FCDE0CE9C589258217044B ___0_keyValuePair, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		Guid_t L_0;
		L_0 = KeyValuePair_2_get_Key_m190F16A3EFBED6D9959367C13683CCE34C111E13_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_m1EEF386C2CD5E506570FE2E3437136B78014BB5C(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 28));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0046;
		}
	}
	{
		EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* L_3;
		L_3 = EqualityComparer_1_get_Default_mF70F6C11A35B420DFA4628EE316B087F2DCB280C_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 30));
		EntryU5BU5D_t2FA9EF95EBAB729FEB4F9541CAC889E13FC7202B* L_4 = (EntryU5BU5D_t2FA9EF95EBAB729FEB4F9541CAC889E13FC7202B*)__this->____entries_1;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		int32_t L_6 = (int32_t)((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)))->___value_3;
		int32_t L_7;
		L_7 = KeyValuePair_2_get_Value_m165045D6956E45F7B10F7F2DFCD7A97140F887C2_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		NullCheck(L_3);
		bool L_8;
		L_8 = VirtualFuncInvoker2< bool, int32_t, int32_t >::Invoke(8, L_3, L_6, L_7);
		if (!L_8)
		{
			goto IL_0046;
		}
	}
	{
		Guid_t L_9;
		L_9 = KeyValuePair_2_get_Key_m190F16A3EFBED6D9959367C13683CCE34C111E13_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		bool L_10;
		L_10 = Dictionary_2_Remove_m550226BFF4FEDC1F8755A47ECC4A463F36916411(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 34));
		return (bool)1;
	}

IL_0046:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Clear_m80C3842848BE6C2010ED05EF270FFBA6DB3E1384_gshared (Dictionary_2_tA59FCDC7016E38E9B9B393997928B8B73460F4DF* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = (int32_t)__this->____count_2;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_0041;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		NullCheck(L_3);
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_2, 0, ((int32_t)(((RuntimeArray*)L_3)->max_length)), NULL);
		__this->____count_2 = 0;
		__this->____freeList_3 = (-1);
		__this->____freeCount_4 = 0;
		EntryU5BU5D_t2FA9EF95EBAB729FEB4F9541CAC889E13FC7202B* L_4 = (EntryU5BU5D_t2FA9EF95EBAB729FEB4F9541CAC889E13FC7202B*)__this->____entries_1;
		int32_t L_5 = V_0;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_4, 0, L_5, NULL);
	}

IL_0041:
	{
		int32_t L_6 = (int32_t)__this->____version_5;
		__this->____version_5 = ((int32_t)il2cpp_codegen_add(L_6, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_m4595C29799CCA36600C8079DF01F40844CF933A6_gshared (Dictionary_2_tA59FCDC7016E38E9B9B393997928B8B73460F4DF* __this, Guid_t ___0_key, const RuntimeMethod* method) 
{
	{
		Guid_t L_0 = ___0_key;
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_m1EEF386C2CD5E506570FE2E3437136B78014BB5C(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 28));
		return (bool)((((int32_t)((((int32_t)L_1) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsValue_m2876CE5FBEA5D462CE1E3C7825024E132BC2FE78_gshared (Dictionary_2_tA59FCDC7016E38E9B9B393997928B8B73460F4DF* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	EntryU5BU5D_t2FA9EF95EBAB729FEB4F9541CAC889E13FC7202B* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* V_4 = NULL;
	int32_t V_5 = 0;
	{
		EntryU5BU5D_t2FA9EF95EBAB729FEB4F9541CAC889E13FC7202B* L_0 = (EntryU5BU5D_t2FA9EF95EBAB729FEB4F9541CAC889E13FC7202B*)__this->____entries_1;
		V_0 = L_0;
		goto IL_0049;
	}

IL_0049:
	{
		il2cpp_codegen_initobj((&V_2), sizeof(int32_t));
	}
	{
		V_3 = 0;
		goto IL_008b;
	}

IL_005d:
	{
		EntryU5BU5D_t2FA9EF95EBAB729FEB4F9541CAC889E13FC7202B* L_3 = V_0;
		int32_t L_4 = V_3;
		NullCheck(L_3);
		int32_t L_5 = (int32_t)((L_3)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_4)))->___hashCode_0;
		if ((((int32_t)L_5) < ((int32_t)0)))
		{
			goto IL_0087;
		}
	}
	{
		EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* L_6;
		L_6 = EqualityComparer_1_get_Default_mF70F6C11A35B420DFA4628EE316B087F2DCB280C_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 30));
		EntryU5BU5D_t2FA9EF95EBAB729FEB4F9541CAC889E13FC7202B* L_7 = V_0;
		int32_t L_8 = V_3;
		NullCheck(L_7);
		int32_t L_9 = (int32_t)((L_7)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_8)))->___value_3;
		int32_t L_10 = ___0_value;
		NullCheck(L_6);
		bool L_11;
		L_11 = VirtualFuncInvoker2< bool, int32_t, int32_t >::Invoke(8, L_6, L_9, L_10);
		if (!L_11)
		{
			goto IL_0087;
		}
	}
	{
		return (bool)1;
	}

IL_0087:
	{
		int32_t L_12 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_008b:
	{
		int32_t L_13 = V_3;
		int32_t L_14 = (int32_t)__this->____count_2;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_005d;
		}
	}
	{
		goto IL_00db;
	}

IL_00db:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_CopyTo_mF234D8B48C7D6488AF17560AFE447DD5E408B150_gshared (Dictionary_2_tA59FCDC7016E38E9B9B393997928B8B73460F4DF* __this, KeyValuePair_2U5BU5D_tE363BCACDAADBB4644E128BD0356204665EDF9C8* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	EntryU5BU5D_t2FA9EF95EBAB729FEB4F9541CAC889E13FC7202B* V_1 = NULL;
	int32_t V_2 = 0;
	{
		KeyValuePair_2U5BU5D_tE363BCACDAADBB4644E128BD0356204665EDF9C8* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)3, NULL);
	}

IL_0009:
	{
		int32_t L_1 = ___1_index;
		KeyValuePair_2U5BU5D_tE363BCACDAADBB4644E128BD0356204665EDF9C8* L_2 = ___0_array;
		NullCheck(L_2);
		if ((!(((uint32_t)L_1) > ((uint32_t)((int32_t)(((RuntimeArray*)L_2)->max_length))))))
		{
			goto IL_0014;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0014:
	{
		KeyValuePair_2U5BU5D_tE363BCACDAADBB4644E128BD0356204665EDF9C8* L_3 = ___0_array;
		NullCheck(L_3);
		int32_t L_4 = ___1_index;
		int32_t L_5;
		L_5 = Dictionary_2_get_Count_m5E06E62014099F11845EDFAA7B53B04132BF73AC(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 36));
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_3)->max_length)), L_4))) >= ((int32_t)L_5)))
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)5, NULL);
	}

IL_0027:
	{
		int32_t L_6 = (int32_t)__this->____count_2;
		V_0 = L_6;
		EntryU5BU5D_t2FA9EF95EBAB729FEB4F9541CAC889E13FC7202B* L_7 = (EntryU5BU5D_t2FA9EF95EBAB729FEB4F9541CAC889E13FC7202B*)__this->____entries_1;
		V_1 = L_7;
		V_2 = 0;
		goto IL_0075;
	}

IL_0039:
	{
		EntryU5BU5D_t2FA9EF95EBAB729FEB4F9541CAC889E13FC7202B* L_8 = V_1;
		int32_t L_9 = V_2;
		NullCheck(L_8);
		int32_t L_10 = (int32_t)((L_8)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_9)))->___hashCode_0;
		if ((((int32_t)L_10) < ((int32_t)0)))
		{
			goto IL_0071;
		}
	}
	{
		KeyValuePair_2U5BU5D_tE363BCACDAADBB4644E128BD0356204665EDF9C8* L_11 = ___0_array;
		int32_t L_12 = ___1_index;
		int32_t L_13 = L_12;
		___1_index = ((int32_t)il2cpp_codegen_add(L_13, 1));
		EntryU5BU5D_t2FA9EF95EBAB729FEB4F9541CAC889E13FC7202B* L_14 = V_1;
		int32_t L_15 = V_2;
		NullCheck(L_14);
		Guid_t L_16 = (Guid_t)((L_14)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_15)))->___key_2;
		EntryU5BU5D_t2FA9EF95EBAB729FEB4F9541CAC889E13FC7202B* L_17 = V_1;
		int32_t L_18 = V_2;
		NullCheck(L_17);
		int32_t L_19 = (int32_t)((L_17)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_18)))->___value_3;
		KeyValuePair_2_t103EED32AF196D79C0FCDE0CE9C589258217044B L_20;
		memset((&L_20), 0, sizeof(L_20));
		KeyValuePair_2__ctor_m702C85B3C4B7309A5497C9FE8D3BE839467D0252((&L_20), L_16, L_19, il2cpp_rgctx_method(method->klass->rgctx_data, 37));
		NullCheck(L_11);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(L_13), (KeyValuePair_2_t103EED32AF196D79C0FCDE0CE9C589258217044B)L_20);
	}

IL_0071:
	{
		int32_t L_21 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_21, 1));
	}

IL_0075:
	{
		int32_t L_22 = V_2;
		int32_t L_23 = V_0;
		if ((((int32_t)L_22) < ((int32_t)L_23)))
		{
			goto IL_0039;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tCEDFFFDD2C31A66EC221FED52938C50D01A8ECEF Dictionary_2_GetEnumerator_mDBAB6C4F1E4E6139CA096F0205141350C5CB924D_gshared (Dictionary_2_tA59FCDC7016E38E9B9B393997928B8B73460F4DF* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_tCEDFFFDD2C31A66EC221FED52938C50D01A8ECEF L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m1324FEBE39A953DCC364D370AD55281BB4C9478B((&L_0), __this, 2, il2cpp_rgctx_method(method->klass->rgctx_data, 39));
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m1CA78F038668C1BF9571904C063D844C7E873442_gshared (Dictionary_2_tA59FCDC7016E38E9B9B393997928B8B73460F4DF* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_tCEDFFFDD2C31A66EC221FED52938C50D01A8ECEF L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m1324FEBE39A953DCC364D370AD55281BB4C9478B((&L_0), __this, 2, il2cpp_rgctx_method(method->klass->rgctx_data, 39));
		Enumerator_tCEDFFFDD2C31A66EC221FED52938C50D01A8ECEF L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 38), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_GetObjectData_mDF6DF8BD1CE8DE6ECF044B46D674D87EE9686794_gshared (Dictionary_2_tA59FCDC7016E38E9B9B393997928B8B73460F4DF* __this, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___0_info, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___1_context, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1);
		s_Il2CppMethodInitialized = true;
	}
	KeyValuePair_2U5BU5D_tE363BCACDAADBB4644E128BD0356204665EDF9C8* V_0 = NULL;
	RuntimeObject* G_B4_0 = NULL;
	String_t* G_B4_1 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B4_2 = NULL;
	RuntimeObject* G_B3_0 = NULL;
	String_t* G_B3_1 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B3_2 = NULL;
	String_t* G_B6_0 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B6_1 = NULL;
	String_t* G_B5_0 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B5_1 = NULL;
	int32_t G_B7_0 = 0;
	String_t* G_B7_1 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B7_2 = NULL;
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_0 = ___0_info;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)4, NULL);
	}

IL_0009:
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_1 = ___0_info;
		int32_t L_2 = (int32_t)__this->____version_5;
		NullCheck(L_1);
		SerializationInfo_AddValue_m9D6ADD10966D1FE8D19050F3A269747C23FE9FC4(L_1, _stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1, L_2, NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_3 = ___0_info;
		RuntimeObject* L_4 = (RuntimeObject*)__this->____comparer_6;
		RuntimeObject* L_5 = L_4;
		if (L_5)
		{
			G_B4_0 = L_5;
			G_B4_1 = _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9;
			G_B4_2 = L_3;
			goto IL_002f;
		}
		G_B3_0 = L_5;
		G_B3_1 = _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9;
		G_B3_2 = L_3;
	}
	{
		EqualityComparer_1_tAAD1A76C30594C4D736E586B3D77281A53A27399* L_6;
		L_6 = EqualityComparer_1_get_Default_m5DCC393F5D59545D96AF9FF747F17C72EABB5D3B_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		G_B4_0 = ((RuntimeObject*)(L_6));
		G_B4_1 = G_B3_1;
		G_B4_2 = G_B3_2;
	}

IL_002f:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 40)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		NullCheck(G_B4_2);
		SerializationInfo_AddValue_m1AD59BBF8C3129142943D3F298ADF09FF123C199(G_B4_2, G_B4_1, (RuntimeObject*)G_B4_0, L_8, NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_9 = ___0_info;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_10 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		if (!L_10)
		{
			G_B6_0 = _stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69;
			G_B6_1 = L_9;
			goto IL_0056;
		}
		G_B5_0 = _stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69;
		G_B5_1 = L_9;
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		NullCheck(L_11);
		G_B7_0 = ((int32_t)(((RuntimeArray*)L_11)->max_length));
		G_B7_1 = G_B5_0;
		G_B7_2 = G_B5_1;
		goto IL_0057;
	}

IL_0056:
	{
		G_B7_0 = 0;
		G_B7_1 = G_B6_0;
		G_B7_2 = G_B6_1;
	}

IL_0057:
	{
		NullCheck(G_B7_2);
		SerializationInfo_AddValue_m9D6ADD10966D1FE8D19050F3A269747C23FE9FC4(G_B7_2, G_B7_1, G_B7_0, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_12 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		if (!L_12)
		{
			goto IL_008e;
		}
	}
	{
		int32_t L_13;
		L_13 = Dictionary_2_get_Count_m5E06E62014099F11845EDFAA7B53B04132BF73AC(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 36));
		KeyValuePair_2U5BU5D_tE363BCACDAADBB4644E128BD0356204665EDF9C8* L_14 = (KeyValuePair_2U5BU5D_tE363BCACDAADBB4644E128BD0356204665EDF9C8*)(KeyValuePair_2U5BU5D_tE363BCACDAADBB4644E128BD0356204665EDF9C8*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 41), (uint32_t)L_13);
		V_0 = L_14;
		KeyValuePair_2U5BU5D_tE363BCACDAADBB4644E128BD0356204665EDF9C8* L_15 = V_0;
		Dictionary_2_CopyTo_mF234D8B48C7D6488AF17560AFE447DD5E408B150(__this, L_15, 0, il2cpp_rgctx_method(method->klass->rgctx_data, 42));
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_16 = ___0_info;
		KeyValuePair_2U5BU5D_tE363BCACDAADBB4644E128BD0356204665EDF9C8* L_17 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 43)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		NullCheck(L_16);
		SerializationInfo_AddValue_m1AD59BBF8C3129142943D3F298ADF09FF123C199(L_16, _stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A, (RuntimeObject*)L_17, L_19, NULL);
	}

IL_008e:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_FindEntry_m1EEF386C2CD5E506570FE2E3437136B78014BB5C_gshared (Dictionary_2_tA59FCDC7016E38E9B9B393997928B8B73460F4DF* __this, Guid_t ___0_key, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_1 = NULL;
	EntryU5BU5D_t2FA9EF95EBAB729FEB4F9541CAC889E13FC7202B* V_2 = NULL;
	int32_t V_3 = 0;
	RuntimeObject* V_4 = NULL;
	int32_t V_5 = 0;
	Guid_t V_6;
	memset((&V_6), 0, sizeof(V_6));
	EqualityComparer_1_tAAD1A76C30594C4D736E586B3D77281A53A27399* V_7 = NULL;
	int32_t V_8 = 0;
	{
		goto IL_000e;
	}

IL_000e:
	{
		V_0 = (-1);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		V_1 = L_1;
		EntryU5BU5D_t2FA9EF95EBAB729FEB4F9541CAC889E13FC7202B* L_2 = (EntryU5BU5D_t2FA9EF95EBAB729FEB4F9541CAC889E13FC7202B*)__this->____entries_1;
		V_2 = L_2;
		V_3 = 0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = V_1;
		if (!L_3)
		{
			goto IL_0175;
		}
	}
	{
		RuntimeObject* L_4 = (RuntimeObject*)__this->____comparer_6;
		V_4 = L_4;
		RuntimeObject* L_5 = V_4;
		if (L_5)
		{
			goto IL_0110;
		}
	}
	{
		int32_t L_6;
		L_6 = Guid_GetHashCode_m239B7679BB9ED5A207B3D2F858B5F30FFC455408((&___0_key), il2cpp_rgctx_method(method->klass->rgctx_data, 44));
		V_5 = ((int32_t)(L_6&((int32_t)2147483647LL)));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_7 = V_1;
		int32_t L_8 = V_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = V_1;
		NullCheck(L_9);
		NullCheck(L_7);
		int32_t L_10 = ((int32_t)(L_8%((int32_t)(((RuntimeArray*)L_9)->max_length))));
		int32_t L_11 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_11, 1));
		il2cpp_codegen_initobj((&V_6), sizeof(Guid_t));
	}

IL_0066:
	{
		int32_t L_13 = V_0;
		EntryU5BU5D_t2FA9EF95EBAB729FEB4F9541CAC889E13FC7202B* L_14 = V_2;
		NullCheck(L_14);
		if ((!(((uint32_t)L_13) < ((uint32_t)((int32_t)(((RuntimeArray*)L_14)->max_length))))))
		{
			goto IL_0175;
		}
	}
	{
		EntryU5BU5D_t2FA9EF95EBAB729FEB4F9541CAC889E13FC7202B* L_15 = V_2;
		int32_t L_16 = V_0;
		NullCheck(L_15);
		int32_t L_17 = (int32_t)((L_15)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_16)))->___hashCode_0;
		int32_t L_18 = V_5;
		if ((!(((uint32_t)L_17) == ((uint32_t)L_18))))
		{
			goto IL_009b;
		}
	}
	{
		EqualityComparer_1_tAAD1A76C30594C4D736E586B3D77281A53A27399* L_19;
		L_19 = EqualityComparer_1_get_Default_m5DCC393F5D59545D96AF9FF747F17C72EABB5D3B_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		EntryU5BU5D_t2FA9EF95EBAB729FEB4F9541CAC889E13FC7202B* L_20 = V_2;
		int32_t L_21 = V_0;
		NullCheck(L_20);
		Guid_t L_22 = (Guid_t)((L_20)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_21)))->___key_2;
		Guid_t L_23 = ___0_key;
		NullCheck(L_19);
		bool L_24;
		L_24 = VirtualFuncInvoker2< bool, Guid_t, Guid_t >::Invoke(8, L_19, L_22, L_23);
		if (L_24)
		{
			goto IL_0175;
		}
	}

IL_009b:
	{
		EntryU5BU5D_t2FA9EF95EBAB729FEB4F9541CAC889E13FC7202B* L_25 = V_2;
		int32_t L_26 = V_0;
		NullCheck(L_25);
		int32_t L_27 = (int32_t)((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___next_1;
		V_0 = L_27;
		int32_t L_28 = V_3;
		EntryU5BU5D_t2FA9EF95EBAB729FEB4F9541CAC889E13FC7202B* L_29 = V_2;
		NullCheck(L_29);
		if ((((int32_t)L_28) < ((int32_t)((int32_t)(((RuntimeArray*)L_29)->max_length)))))
		{
			goto IL_00b3;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_00b3:
	{
		int32_t L_30 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_30, 1));
		goto IL_0066;
	}

IL_0110:
	{
		RuntimeObject* L_31 = V_4;
		Guid_t L_32 = ___0_key;
		NullCheck(L_31);
		int32_t L_33;
		L_33 = InterfaceFuncInvoker1< int32_t, Guid_t >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_31, L_32);
		V_8 = ((int32_t)(L_33&((int32_t)2147483647LL)));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_34 = V_1;
		int32_t L_35 = V_8;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_36 = V_1;
		NullCheck(L_36);
		NullCheck(L_34);
		int32_t L_37 = ((int32_t)(L_35%((int32_t)(((RuntimeArray*)L_36)->max_length))));
		int32_t L_38 = (L_34)->GetAt(static_cast<il2cpp_array_size_t>(L_37));
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_38, 1));
	}

IL_012b:
	{
		int32_t L_39 = V_0;
		EntryU5BU5D_t2FA9EF95EBAB729FEB4F9541CAC889E13FC7202B* L_40 = V_2;
		NullCheck(L_40);
		if ((!(((uint32_t)L_39) < ((uint32_t)((int32_t)(((RuntimeArray*)L_40)->max_length))))))
		{
			goto IL_0175;
		}
	}
	{
		EntryU5BU5D_t2FA9EF95EBAB729FEB4F9541CAC889E13FC7202B* L_41 = V_2;
		int32_t L_42 = V_0;
		NullCheck(L_41);
		int32_t L_43 = (int32_t)((L_41)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_42)))->___hashCode_0;
		int32_t L_44 = V_8;
		if ((!(((uint32_t)L_43) == ((uint32_t)L_44))))
		{
			goto IL_0157;
		}
	}
	{
		RuntimeObject* L_45 = V_4;
		EntryU5BU5D_t2FA9EF95EBAB729FEB4F9541CAC889E13FC7202B* L_46 = V_2;
		int32_t L_47 = V_0;
		NullCheck(L_46);
		Guid_t L_48 = (Guid_t)((L_46)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_47)))->___key_2;
		Guid_t L_49 = ___0_key;
		NullCheck(L_45);
		bool L_50;
		L_50 = InterfaceFuncInvoker2< bool, Guid_t, Guid_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_45, L_48, L_49);
		if (L_50)
		{
			goto IL_0175;
		}
	}

IL_0157:
	{
		EntryU5BU5D_t2FA9EF95EBAB729FEB4F9541CAC889E13FC7202B* L_51 = V_2;
		int32_t L_52 = V_0;
		NullCheck(L_51);
		int32_t L_53 = (int32_t)((L_51)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_52)))->___next_1;
		V_0 = L_53;
		int32_t L_54 = V_3;
		EntryU5BU5D_t2FA9EF95EBAB729FEB4F9541CAC889E13FC7202B* L_55 = V_2;
		NullCheck(L_55);
		if ((((int32_t)L_54) < ((int32_t)((int32_t)(((RuntimeArray*)L_55)->max_length)))))
		{
			goto IL_016f;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_016f:
	{
		int32_t L_56 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_56, 1));
		goto IL_012b;
	}

IL_0175:
	{
		int32_t L_57 = V_0;
		return L_57;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_Initialize_m31D87D4F7A8DCFAAFFFF6A52E0591C0B731F1260_gshared (Dictionary_2_tA59FCDC7016E38E9B9B393997928B8B73460F4DF* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___0_capacity;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = HashHelpers_GetPrime_m5B7AE10D5E76267579296C8F2CB8464AC2DE8472(L_0, NULL);
		V_0 = L_1;
		__this->____freeList_3 = (-1);
		int32_t L_2 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_2);
		__this->____buckets_0 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets_0), (void*)L_3);
		int32_t L_4 = V_0;
		EntryU5BU5D_t2FA9EF95EBAB729FEB4F9541CAC889E13FC7202B* L_5 = (EntryU5BU5D_t2FA9EF95EBAB729FEB4F9541CAC889E13FC7202B*)(EntryU5BU5D_t2FA9EF95EBAB729FEB4F9541CAC889E13FC7202B*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 48), (uint32_t)L_4);
		__this->____entries_1 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____entries_1), (void*)L_5);
		int32_t L_6 = V_0;
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryInsert_mE55551BDAABAA23D3D45EFE2629ABC9B2AAE0AC6_gshared (Dictionary_2_tA59FCDC7016E38E9B9B393997928B8B73460F4DF* __this, Guid_t ___0_key, int32_t ___1_value, uint8_t ___2_behavior, const RuntimeMethod* method) 
{
	EntryU5BU5D_t2FA9EF95EBAB729FEB4F9541CAC889E13FC7202B* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t* V_4 = NULL;
	int32_t V_5 = 0;
	bool V_6 = false;
	bool V_7 = false;
	int32_t V_8 = 0;
	int32_t* V_9 = NULL;
	Entry_t6593783EEB8286F7D80364808975FF6902726398* V_10 = NULL;
	Guid_t V_11;
	memset((&V_11), 0, sizeof(V_11));
	EqualityComparer_1_tAAD1A76C30594C4D736E586B3D77281A53A27399* V_12 = NULL;
	int32_t V_13 = 0;
	int32_t G_B7_0 = 0;
	int32_t* G_B51_0 = NULL;
	{
		goto IL_000e;
	}

IL_000e:
	{
		int32_t L_1 = (int32_t)__this->____version_5;
		__this->____version_5 = ((int32_t)il2cpp_codegen_add(L_1, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		if (L_2)
		{
			goto IL_002c;
		}
	}
	{
		int32_t L_3;
		L_3 = Dictionary_2_Initialize_m31D87D4F7A8DCFAAFFFF6A52E0591C0B731F1260(__this, 0, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
	}

IL_002c:
	{
		EntryU5BU5D_t2FA9EF95EBAB729FEB4F9541CAC889E13FC7202B* L_4 = (EntryU5BU5D_t2FA9EF95EBAB729FEB4F9541CAC889E13FC7202B*)__this->____entries_1;
		V_0 = L_4;
		RuntimeObject* L_5 = (RuntimeObject*)__this->____comparer_6;
		V_1 = L_5;
		RuntimeObject* L_6 = V_1;
		if (!L_6)
		{
			goto IL_0046;
		}
	}
	{
		RuntimeObject* L_7 = V_1;
		Guid_t L_8 = ___0_key;
		NullCheck(L_7);
		int32_t L_9;
		L_9 = InterfaceFuncInvoker1< int32_t, Guid_t >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_7, L_8);
		G_B7_0 = L_9;
		goto IL_0053;
	}

IL_0046:
	{
		int32_t L_10;
		L_10 = Guid_GetHashCode_m239B7679BB9ED5A207B3D2F858B5F30FFC455408((&___0_key), il2cpp_rgctx_method(method->klass->rgctx_data, 44));
		G_B7_0 = L_10;
	}

IL_0053:
	{
		V_2 = ((int32_t)(G_B7_0&((int32_t)2147483647LL)));
		V_3 = 0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		int32_t L_12 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_13 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		NullCheck(L_13);
		NullCheck(L_11);
		V_4 = ((L_11)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_12%((int32_t)(((RuntimeArray*)L_13)->max_length)))))));
		int32_t* L_14 = V_4;
		int32_t L_15 = *((int32_t*)L_14);
		V_5 = ((int32_t)il2cpp_codegen_subtract(L_15, 1));
		RuntimeObject* L_16 = V_1;
		if (L_16)
		{
			goto IL_0187;
		}
	}
	{
		il2cpp_codegen_initobj((&V_11), sizeof(Guid_t));
	}

IL_0091:
	{
		int32_t L_18 = V_5;
		EntryU5BU5D_t2FA9EF95EBAB729FEB4F9541CAC889E13FC7202B* L_19 = V_0;
		NullCheck(L_19);
		if ((!(((uint32_t)L_18) < ((uint32_t)((int32_t)(((RuntimeArray*)L_19)->max_length))))))
		{
			goto IL_01f9;
		}
	}
	{
		EntryU5BU5D_t2FA9EF95EBAB729FEB4F9541CAC889E13FC7202B* L_20 = V_0;
		int32_t L_21 = V_5;
		NullCheck(L_20);
		int32_t L_22 = (int32_t)((L_20)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_21)))->___hashCode_0;
		int32_t L_23 = V_2;
		if ((!(((uint32_t)L_22) == ((uint32_t)L_23))))
		{
			goto IL_00ea;
		}
	}
	{
		EqualityComparer_1_tAAD1A76C30594C4D736E586B3D77281A53A27399* L_24;
		L_24 = EqualityComparer_1_get_Default_m5DCC393F5D59545D96AF9FF747F17C72EABB5D3B_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		EntryU5BU5D_t2FA9EF95EBAB729FEB4F9541CAC889E13FC7202B* L_25 = V_0;
		int32_t L_26 = V_5;
		NullCheck(L_25);
		Guid_t L_27 = (Guid_t)((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___key_2;
		Guid_t L_28 = ___0_key;
		NullCheck(L_24);
		bool L_29;
		L_29 = VirtualFuncInvoker2< bool, Guid_t, Guid_t >::Invoke(8, L_24, L_27, L_28);
		if (!L_29)
		{
			goto IL_00ea;
		}
	}
	{
		uint8_t L_30 = ___2_behavior;
		if ((!(((uint32_t)L_30) == ((uint32_t)1))))
		{
			goto IL_00d9;
		}
	}
	{
		EntryU5BU5D_t2FA9EF95EBAB729FEB4F9541CAC889E13FC7202B* L_31 = V_0;
		int32_t L_32 = V_5;
		NullCheck(L_31);
		int32_t L_33 = ___1_value;
		((L_31)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_32)))->___value_3 = L_33;
		return (bool)1;
	}

IL_00d9:
	{
		uint8_t L_34 = ___2_behavior;
		if ((!(((uint32_t)L_34) == ((uint32_t)2))))
		{
			goto IL_00e8;
		}
	}
	{
		Guid_t L_35 = ___0_key;
		Guid_t L_36 = L_35;
		RuntimeObject* L_37 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14), &L_36);
		ThrowHelper_ThrowAddingDuplicateWithKeyArgumentException_m013C856C16A63018719A6096727CB43E1918CDE5(L_37, NULL);
	}

IL_00e8:
	{
		return (bool)0;
	}

IL_00ea:
	{
		EntryU5BU5D_t2FA9EF95EBAB729FEB4F9541CAC889E13FC7202B* L_38 = V_0;
		int32_t L_39 = V_5;
		NullCheck(L_38);
		int32_t L_40 = (int32_t)((L_38)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_39)))->___next_1;
		V_5 = L_40;
		int32_t L_41 = V_3;
		EntryU5BU5D_t2FA9EF95EBAB729FEB4F9541CAC889E13FC7202B* L_42 = V_0;
		NullCheck(L_42);
		if ((((int32_t)L_41) < ((int32_t)((int32_t)(((RuntimeArray*)L_42)->max_length)))))
		{
			goto IL_0104;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_0104:
	{
		int32_t L_43 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_43, 1));
		goto IL_0091;
	}

IL_0187:
	{
		int32_t L_44 = V_5;
		EntryU5BU5D_t2FA9EF95EBAB729FEB4F9541CAC889E13FC7202B* L_45 = V_0;
		NullCheck(L_45);
		if ((!(((uint32_t)L_44) < ((uint32_t)((int32_t)(((RuntimeArray*)L_45)->max_length))))))
		{
			goto IL_01f9;
		}
	}
	{
		EntryU5BU5D_t2FA9EF95EBAB729FEB4F9541CAC889E13FC7202B* L_46 = V_0;
		int32_t L_47 = V_5;
		NullCheck(L_46);
		int32_t L_48 = (int32_t)((L_46)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_47)))->___hashCode_0;
		int32_t L_49 = V_2;
		if ((!(((uint32_t)L_48) == ((uint32_t)L_49))))
		{
			goto IL_01d9;
		}
	}
	{
		RuntimeObject* L_50 = V_1;
		EntryU5BU5D_t2FA9EF95EBAB729FEB4F9541CAC889E13FC7202B* L_51 = V_0;
		int32_t L_52 = V_5;
		NullCheck(L_51);
		Guid_t L_53 = (Guid_t)((L_51)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_52)))->___key_2;
		Guid_t L_54 = ___0_key;
		NullCheck(L_50);
		bool L_55;
		L_55 = InterfaceFuncInvoker2< bool, Guid_t, Guid_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_50, L_53, L_54);
		if (!L_55)
		{
			goto IL_01d9;
		}
	}
	{
		uint8_t L_56 = ___2_behavior;
		if ((!(((uint32_t)L_56) == ((uint32_t)1))))
		{
			goto IL_01c8;
		}
	}
	{
		EntryU5BU5D_t2FA9EF95EBAB729FEB4F9541CAC889E13FC7202B* L_57 = V_0;
		int32_t L_58 = V_5;
		NullCheck(L_57);
		int32_t L_59 = ___1_value;
		((L_57)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_58)))->___value_3 = L_59;
		return (bool)1;
	}

IL_01c8:
	{
		uint8_t L_60 = ___2_behavior;
		if ((!(((uint32_t)L_60) == ((uint32_t)2))))
		{
			goto IL_01d7;
		}
	}
	{
		Guid_t L_61 = ___0_key;
		Guid_t L_62 = L_61;
		RuntimeObject* L_63 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14), &L_62);
		ThrowHelper_ThrowAddingDuplicateWithKeyArgumentException_m013C856C16A63018719A6096727CB43E1918CDE5(L_63, NULL);
	}

IL_01d7:
	{
		return (bool)0;
	}

IL_01d9:
	{
		EntryU5BU5D_t2FA9EF95EBAB729FEB4F9541CAC889E13FC7202B* L_64 = V_0;
		int32_t L_65 = V_5;
		NullCheck(L_64);
		int32_t L_66 = (int32_t)((L_64)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_65)))->___next_1;
		V_5 = L_66;
		int32_t L_67 = V_3;
		EntryU5BU5D_t2FA9EF95EBAB729FEB4F9541CAC889E13FC7202B* L_68 = V_0;
		NullCheck(L_68);
		if ((((int32_t)L_67) < ((int32_t)((int32_t)(((RuntimeArray*)L_68)->max_length)))))
		{
			goto IL_01f3;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_01f3:
	{
		int32_t L_69 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_69, 1));
		goto IL_0187;
	}

IL_01f9:
	{
		V_6 = (bool)0;
		V_7 = (bool)0;
		int32_t L_70 = (int32_t)__this->____freeCount_4;
		if ((((int32_t)L_70) <= ((int32_t)0)))
		{
			goto IL_0223;
		}
	}
	{
		int32_t L_71 = (int32_t)__this->____freeList_3;
		V_8 = L_71;
		V_7 = (bool)1;
		int32_t L_72 = (int32_t)__this->____freeCount_4;
		__this->____freeCount_4 = ((int32_t)il2cpp_codegen_subtract(L_72, 1));
		goto IL_0250;
	}

IL_0223:
	{
		int32_t L_73 = (int32_t)__this->____count_2;
		V_13 = L_73;
		int32_t L_74 = V_13;
		EntryU5BU5D_t2FA9EF95EBAB729FEB4F9541CAC889E13FC7202B* L_75 = V_0;
		NullCheck(L_75);
		if ((!(((uint32_t)L_74) == ((uint32_t)((int32_t)(((RuntimeArray*)L_75)->max_length))))))
		{
			goto IL_023b;
		}
	}
	{
		Dictionary_2_Resize_mDCE56449549A246DAE247AFB788D542BAE1B16FC(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 49));
		V_6 = (bool)1;
	}

IL_023b:
	{
		int32_t L_76 = V_13;
		V_8 = L_76;
		int32_t L_77 = V_13;
		__this->____count_2 = ((int32_t)il2cpp_codegen_add(L_77, 1));
		EntryU5BU5D_t2FA9EF95EBAB729FEB4F9541CAC889E13FC7202B* L_78 = (EntryU5BU5D_t2FA9EF95EBAB729FEB4F9541CAC889E13FC7202B*)__this->____entries_1;
		V_0 = L_78;
	}

IL_0250:
	{
		bool L_79 = V_6;
		if (L_79)
		{
			goto IL_0258;
		}
	}
	{
		int32_t* L_80 = V_4;
		G_B51_0 = L_80;
		goto IL_026d;
	}

IL_0258:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_81 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		int32_t L_82 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_83 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		NullCheck(L_83);
		NullCheck(L_81);
		G_B51_0 = ((L_81)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_82%((int32_t)(((RuntimeArray*)L_83)->max_length)))))));
	}

IL_026d:
	{
		V_9 = G_B51_0;
		EntryU5BU5D_t2FA9EF95EBAB729FEB4F9541CAC889E13FC7202B* L_84 = V_0;
		int32_t L_85 = V_8;
		NullCheck(L_84);
		V_10 = ((L_84)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_85)));
		bool L_86 = V_7;
		if (!L_86)
		{
			goto IL_028a;
		}
	}
	{
		Entry_t6593783EEB8286F7D80364808975FF6902726398* L_87 = V_10;
		int32_t L_88 = (int32_t)L_87->___next_1;
		__this->____freeList_3 = L_88;
	}

IL_028a:
	{
		Entry_t6593783EEB8286F7D80364808975FF6902726398* L_89 = V_10;
		int32_t L_90 = V_2;
		L_89->___hashCode_0 = L_90;
		Entry_t6593783EEB8286F7D80364808975FF6902726398* L_91 = V_10;
		int32_t* L_92 = V_9;
		int32_t L_93 = *((int32_t*)L_92);
		L_91->___next_1 = ((int32_t)il2cpp_codegen_subtract(L_93, 1));
		Entry_t6593783EEB8286F7D80364808975FF6902726398* L_94 = V_10;
		Guid_t L_95 = ___0_key;
		L_94->___key_2 = L_95;
		Entry_t6593783EEB8286F7D80364808975FF6902726398* L_96 = V_10;
		int32_t L_97 = ___1_value;
		L_96->___value_3 = L_97;
		int32_t* L_98 = V_9;
		int32_t L_99 = V_8;
		*((int32_t*)L_98) = (int32_t)((int32_t)il2cpp_codegen_add(L_99, 1));
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_OnDeserialization_m81E31A5F26A5640B7A44453052293665DE15D790_gshared (Dictionary_2_tA59FCDC7016E38E9B9B393997928B8B73460F4DF* __this, RuntimeObject* ___0_sender, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConditionalWeakTable_2_Remove_mEA61545EA43662F3718895F4E435A1F3EFB9756E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConditionalWeakTable_2_TryGetValue_m8AB467BA44D1FF9EBDB9735CED88B0D67AC6403F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1);
		s_Il2CppMethodInitialized = true;
	}
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	KeyValuePair_2U5BU5D_tE363BCACDAADBB4644E128BD0356204665EDF9C8* V_3 = NULL;
	int32_t V_4 = 0;
	{
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* L_0;
		L_0 = HashHelpers_get_SerializationInfoTable_m8C17D5483B39B68897AEFFD14A9E139AF858222F(NULL);
		NullCheck(L_0);
		bool L_1;
		L_1 = ConditionalWeakTable_2_TryGetValue_m8AB467BA44D1FF9EBDB9735CED88B0D67AC6403F(L_0, (RuntimeObject*)__this, (&V_0), ConditionalWeakTable_2_TryGetValue_m8AB467BA44D1FF9EBDB9735CED88B0D67AC6403F_RuntimeMethod_var);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_2 = V_0;
		if (L_2)
		{
			goto IL_0012;
		}
	}
	{
		return;
	}

IL_0012:
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_3 = V_0;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = SerializationInfo_GetInt32_m7731402825C7FC8D0673F7610D555615F95E4FB5(L_3, _stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1, NULL);
		V_1 = L_4;
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_5 = V_0;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = SerializationInfo_GetInt32_m7731402825C7FC8D0673F7610D555615F95E4FB5(L_5, _stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69, NULL);
		V_2 = L_6;
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_7 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 40)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		NullCheck(L_7);
		RuntimeObject* L_10;
		L_10 = SerializationInfo_GetValue_mE6091C2E906E113455D05E734C86F43B8E1D1034(L_7, _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9, L_9, NULL);
		__this->____comparer_6 = ((RuntimeObject*)Castclass((RuntimeObject*)L_10, il2cpp_rgctx_data(method->klass->rgctx_data, 1)));
		Il2CppCodeGenWriteBarrier((void**)(&__this->____comparer_6), (void*)((RuntimeObject*)Castclass((RuntimeObject*)L_10, il2cpp_rgctx_data(method->klass->rgctx_data, 1))));
		int32_t L_11 = V_2;
		if (!L_11)
		{
			goto IL_00c9;
		}
	}
	{
		int32_t L_12 = V_2;
		int32_t L_13;
		L_13 = Dictionary_2_Initialize_m31D87D4F7A8DCFAAFFFF6A52E0591C0B731F1260(__this, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_14 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_15 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 43)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_16;
		L_16 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_15, NULL);
		NullCheck(L_14);
		RuntimeObject* L_17;
		L_17 = SerializationInfo_GetValue_mE6091C2E906E113455D05E734C86F43B8E1D1034(L_14, _stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A, L_16, NULL);
		V_3 = ((KeyValuePair_2U5BU5D_tE363BCACDAADBB4644E128BD0356204665EDF9C8*)Castclass((RuntimeObject*)L_17, il2cpp_rgctx_data(method->klass->rgctx_data, 35)));
		KeyValuePair_2U5BU5D_tE363BCACDAADBB4644E128BD0356204665EDF9C8* L_18 = V_3;
		if (L_18)
		{
			goto IL_007a;
		}
	}
	{
		ThrowHelper_ThrowSerializationException_m03BE2B48CD3617C32FBCEE16030F7C5563E04E16((int32_t)((int32_t)16), NULL);
	}

IL_007a:
	{
		V_4 = 0;
		goto IL_00c0;
	}

IL_007f:
	{
		KeyValuePair_2U5BU5D_tE363BCACDAADBB4644E128BD0356204665EDF9C8* L_19 = V_3;
		int32_t L_20 = V_4;
		NullCheck(L_19);
		Guid_t L_21;
		L_21 = KeyValuePair_2_get_Key_m190F16A3EFBED6D9959367C13683CCE34C111E13_inline(((L_19)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_20))), il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		goto IL_009a;
	}

IL_009a:
	{
		KeyValuePair_2U5BU5D_tE363BCACDAADBB4644E128BD0356204665EDF9C8* L_22 = V_3;
		int32_t L_23 = V_4;
		NullCheck(L_22);
		Guid_t L_24;
		L_24 = KeyValuePair_2_get_Key_m190F16A3EFBED6D9959367C13683CCE34C111E13_inline(((L_22)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_23))), il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		KeyValuePair_2U5BU5D_tE363BCACDAADBB4644E128BD0356204665EDF9C8* L_25 = V_3;
		int32_t L_26 = V_4;
		NullCheck(L_25);
		int32_t L_27;
		L_27 = KeyValuePair_2_get_Value_m165045D6956E45F7B10F7F2DFCD7A97140F887C2_inline(((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26))), il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		Dictionary_2_Add_m8D4CBB16CCDD13C30903509F4791575E70E33EE1(__this, L_24, L_27, il2cpp_rgctx_method(method->klass->rgctx_data, 16));
		int32_t L_28 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_28, 1));
	}

IL_00c0:
	{
		int32_t L_29 = V_4;
		KeyValuePair_2U5BU5D_tE363BCACDAADBB4644E128BD0356204665EDF9C8* L_30 = V_3;
		NullCheck(L_30);
		if ((((int32_t)L_29) < ((int32_t)((int32_t)(((RuntimeArray*)L_30)->max_length)))))
		{
			goto IL_007f;
		}
	}
	{
		goto IL_00d0;
	}

IL_00c9:
	{
		__this->____buckets_0 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets_0), (void*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL);
	}

IL_00d0:
	{
		int32_t L_31 = V_1;
		__this->____version_5 = L_31;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* L_32;
		L_32 = HashHelpers_get_SerializationInfoTable_m8C17D5483B39B68897AEFFD14A9E139AF858222F(NULL);
		NullCheck(L_32);
		bool L_33;
		L_33 = ConditionalWeakTable_2_Remove_mEA61545EA43662F3718895F4E435A1F3EFB9756E(L_32, (RuntimeObject*)__this, ConditionalWeakTable_2_Remove_mEA61545EA43662F3718895F4E435A1F3EFB9756E_RuntimeMethod_var);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_mDCE56449549A246DAE247AFB788D542BAE1B16FC_gshared (Dictionary_2_tA59FCDC7016E38E9B9B393997928B8B73460F4DF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = (int32_t)__this->____count_2;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = HashHelpers_ExpandPrime_m9A35EC171AA0EA16F7C9F71EE6FAD5A82565ADB9(L_0, NULL);
		Dictionary_2_Resize_mA763DBF0294B3CAA798AE0A737BA8D58FF462C96(__this, L_1, (bool)0, il2cpp_rgctx_method(method->klass->rgctx_data, 51));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_mA763DBF0294B3CAA798AE0A737BA8D58FF462C96_gshared (Dictionary_2_tA59FCDC7016E38E9B9B393997928B8B73460F4DF* __this, int32_t ___0_newSize, bool ___1_forceNewHashCodes, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_0 = NULL;
	EntryU5BU5D_t2FA9EF95EBAB729FEB4F9541CAC889E13FC7202B* V_1 = NULL;
	int32_t V_2 = 0;
	Guid_t V_3;
	memset((&V_3), 0, sizeof(V_3));
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	{
		int32_t L_0 = ___0_newSize;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_0);
		V_0 = L_1;
		int32_t L_2 = ___0_newSize;
		EntryU5BU5D_t2FA9EF95EBAB729FEB4F9541CAC889E13FC7202B* L_3 = (EntryU5BU5D_t2FA9EF95EBAB729FEB4F9541CAC889E13FC7202B*)(EntryU5BU5D_t2FA9EF95EBAB729FEB4F9541CAC889E13FC7202B*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 48), (uint32_t)L_2);
		V_1 = L_3;
		int32_t L_4 = (int32_t)__this->____count_2;
		V_2 = L_4;
		EntryU5BU5D_t2FA9EF95EBAB729FEB4F9541CAC889E13FC7202B* L_5 = (EntryU5BU5D_t2FA9EF95EBAB729FEB4F9541CAC889E13FC7202B*)__this->____entries_1;
		EntryU5BU5D_t2FA9EF95EBAB729FEB4F9541CAC889E13FC7202B* L_6 = V_1;
		int32_t L_7 = V_2;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_5, 0, (RuntimeArray*)L_6, 0, L_7, NULL);
		il2cpp_codegen_initobj((&V_3), sizeof(Guid_t));
		Guid_t L_8 = V_3;
		bool L_9 = ___1_forceNewHashCodes;
		if (!((int32_t)((int32_t)false&(int32_t)L_9)))
		{
			goto IL_0084;
		}
	}
	{
		V_4 = 0;
		goto IL_007f;
	}

IL_003e:
	{
		EntryU5BU5D_t2FA9EF95EBAB729FEB4F9541CAC889E13FC7202B* L_10 = V_1;
		int32_t L_11 = V_4;
		NullCheck(L_10);
		int32_t L_12 = (int32_t)((L_10)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_11)))->___hashCode_0;
		if ((((int32_t)L_12) < ((int32_t)0)))
		{
			goto IL_0079;
		}
	}
	{
		EntryU5BU5D_t2FA9EF95EBAB729FEB4F9541CAC889E13FC7202B* L_13 = V_1;
		int32_t L_14 = V_4;
		NullCheck(L_13);
		EntryU5BU5D_t2FA9EF95EBAB729FEB4F9541CAC889E13FC7202B* L_15 = V_1;
		int32_t L_16 = V_4;
		NullCheck(L_15);
		Guid_t* L_17 = (Guid_t*)(&((L_15)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_16)))->___key_2);
		int32_t L_18;
		L_18 = Guid_GetHashCode_m239B7679BB9ED5A207B3D2F858B5F30FFC455408(L_17, il2cpp_rgctx_method(method->klass->rgctx_data, 44));
		((L_13)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_14)))->___hashCode_0 = ((int32_t)(L_18&((int32_t)2147483647LL)));
	}

IL_0079:
	{
		int32_t L_19 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_19, 1));
	}

IL_007f:
	{
		int32_t L_20 = V_4;
		int32_t L_21 = V_2;
		if ((((int32_t)L_20) < ((int32_t)L_21)))
		{
			goto IL_003e;
		}
	}

IL_0084:
	{
		V_5 = 0;
		goto IL_00cb;
	}

IL_0089:
	{
		EntryU5BU5D_t2FA9EF95EBAB729FEB4F9541CAC889E13FC7202B* L_22 = V_1;
		int32_t L_23 = V_5;
		NullCheck(L_22);
		int32_t L_24 = (int32_t)((L_22)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_23)))->___hashCode_0;
		if ((((int32_t)L_24) < ((int32_t)0)))
		{
			goto IL_00c5;
		}
	}
	{
		EntryU5BU5D_t2FA9EF95EBAB729FEB4F9541CAC889E13FC7202B* L_25 = V_1;
		int32_t L_26 = V_5;
		NullCheck(L_25);
		int32_t L_27 = (int32_t)((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___hashCode_0;
		int32_t L_28 = ___0_newSize;
		V_6 = ((int32_t)(L_27%L_28));
		EntryU5BU5D_t2FA9EF95EBAB729FEB4F9541CAC889E13FC7202B* L_29 = V_1;
		int32_t L_30 = V_5;
		NullCheck(L_29);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_31 = V_0;
		int32_t L_32 = V_6;
		NullCheck(L_31);
		int32_t L_33 = L_32;
		int32_t L_34 = (L_31)->GetAt(static_cast<il2cpp_array_size_t>(L_33));
		((L_29)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_30)))->___next_1 = ((int32_t)il2cpp_codegen_subtract(L_34, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_35 = V_0;
		int32_t L_36 = V_6;
		int32_t L_37 = V_5;
		NullCheck(L_35);
		(L_35)->SetAt(static_cast<il2cpp_array_size_t>(L_36), (int32_t)((int32_t)il2cpp_codegen_add(L_37, 1)));
	}

IL_00c5:
	{
		int32_t L_38 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_38, 1));
	}

IL_00cb:
	{
		int32_t L_39 = V_5;
		int32_t L_40 = V_2;
		if ((((int32_t)L_39) < ((int32_t)L_40)))
		{
			goto IL_0089;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_41 = V_0;
		__this->____buckets_0 = L_41;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets_0), (void*)L_41);
		EntryU5BU5D_t2FA9EF95EBAB729FEB4F9541CAC889E13FC7202B* L_42 = V_1;
		__this->____entries_1 = L_42;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____entries_1), (void*)L_42);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_m550226BFF4FEDC1F8755A47ECC4A463F36916411_gshared (Dictionary_2_tA59FCDC7016E38E9B9B393997928B8B73460F4DF* __this, Guid_t ___0_key, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	Entry_t6593783EEB8286F7D80364808975FF6902726398* V_4 = NULL;
	RuntimeObject* G_B5_0 = NULL;
	RuntimeObject* G_B4_0 = NULL;
	int32_t G_B6_0 = 0;
	RuntimeObject* G_B10_0 = NULL;
	RuntimeObject* G_B9_0 = NULL;
	bool G_B11_0 = false;
	{
		goto IL_000e;
	}

IL_000e:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		if (!L_1)
		{
			goto IL_0149;
		}
	}
	{
		RuntimeObject* L_2 = (RuntimeObject*)__this->____comparer_6;
		RuntimeObject* L_3 = L_2;
		if (L_3)
		{
			G_B5_0 = L_3;
			goto IL_0032;
		}
		G_B4_0 = L_3;
	}
	{
		int32_t L_4;
		L_4 = Guid_GetHashCode_m239B7679BB9ED5A207B3D2F858B5F30FFC455408((&___0_key), il2cpp_rgctx_method(method->klass->rgctx_data, 44));
		G_B6_0 = L_4;
		goto IL_0038;
	}

IL_0032:
	{
		Guid_t L_5 = ___0_key;
		NullCheck(G_B5_0);
		int32_t L_6;
		L_6 = InterfaceFuncInvoker1< int32_t, Guid_t >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 1), G_B5_0, L_5);
		G_B6_0 = L_6;
	}

IL_0038:
	{
		V_0 = ((int32_t)(G_B6_0&((int32_t)2147483647LL)));
		int32_t L_7 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_8 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		NullCheck(L_8);
		V_1 = ((int32_t)(L_7%((int32_t)(((RuntimeArray*)L_8)->max_length))));
		V_2 = (-1);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		int32_t L_10 = V_1;
		NullCheck(L_9);
		int32_t L_11 = L_10;
		int32_t L_12 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		V_3 = ((int32_t)il2cpp_codegen_subtract(L_12, 1));
		goto IL_0142;
	}

IL_005c:
	{
		EntryU5BU5D_t2FA9EF95EBAB729FEB4F9541CAC889E13FC7202B* L_13 = (EntryU5BU5D_t2FA9EF95EBAB729FEB4F9541CAC889E13FC7202B*)__this->____entries_1;
		int32_t L_14 = V_3;
		NullCheck(L_13);
		V_4 = ((L_13)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_14)));
		Entry_t6593783EEB8286F7D80364808975FF6902726398* L_15 = V_4;
		int32_t L_16 = (int32_t)L_15->___hashCode_0;
		int32_t L_17 = V_0;
		if ((!(((uint32_t)L_16) == ((uint32_t)L_17))))
		{
			goto IL_0138;
		}
	}
	{
		RuntimeObject* L_18 = (RuntimeObject*)__this->____comparer_6;
		RuntimeObject* L_19 = L_18;
		if (L_19)
		{
			G_B10_0 = L_19;
			goto IL_0095;
		}
		G_B9_0 = L_19;
	}
	{
		EqualityComparer_1_tAAD1A76C30594C4D736E586B3D77281A53A27399* L_20;
		L_20 = EqualityComparer_1_get_Default_m5DCC393F5D59545D96AF9FF747F17C72EABB5D3B_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		Entry_t6593783EEB8286F7D80364808975FF6902726398* L_21 = V_4;
		Guid_t L_22 = (Guid_t)L_21->___key_2;
		Guid_t L_23 = ___0_key;
		NullCheck(L_20);
		bool L_24;
		L_24 = VirtualFuncInvoker2< bool, Guid_t, Guid_t >::Invoke(8, L_20, L_22, L_23);
		G_B11_0 = L_24;
		goto IL_00a2;
	}

IL_0095:
	{
		Entry_t6593783EEB8286F7D80364808975FF6902726398* L_25 = V_4;
		Guid_t L_26 = (Guid_t)L_25->___key_2;
		Guid_t L_27 = ___0_key;
		NullCheck(G_B10_0);
		bool L_28;
		L_28 = InterfaceFuncInvoker2< bool, Guid_t, Guid_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 1), G_B10_0, L_26, L_27);
		G_B11_0 = L_28;
	}

IL_00a2:
	{
		if (!G_B11_0)
		{
			goto IL_0138;
		}
	}
	{
		int32_t L_29 = V_2;
		if ((((int32_t)L_29) >= ((int32_t)0)))
		{
			goto IL_00be;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_30 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		int32_t L_31 = V_1;
		Entry_t6593783EEB8286F7D80364808975FF6902726398* L_32 = V_4;
		int32_t L_33 = (int32_t)L_32->___next_1;
		NullCheck(L_30);
		(L_30)->SetAt(static_cast<il2cpp_array_size_t>(L_31), (int32_t)((int32_t)il2cpp_codegen_add(L_33, 1)));
		goto IL_00d6;
	}

IL_00be:
	{
		EntryU5BU5D_t2FA9EF95EBAB729FEB4F9541CAC889E13FC7202B* L_34 = (EntryU5BU5D_t2FA9EF95EBAB729FEB4F9541CAC889E13FC7202B*)__this->____entries_1;
		int32_t L_35 = V_2;
		NullCheck(L_34);
		Entry_t6593783EEB8286F7D80364808975FF6902726398* L_36 = V_4;
		int32_t L_37 = (int32_t)L_36->___next_1;
		((L_34)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_35)))->___next_1 = L_37;
	}

IL_00d6:
	{
		Entry_t6593783EEB8286F7D80364808975FF6902726398* L_38 = V_4;
		L_38->___hashCode_0 = (-1);
		Entry_t6593783EEB8286F7D80364808975FF6902726398* L_39 = V_4;
		int32_t L_40 = (int32_t)__this->____freeList_3;
		L_39->___next_1 = L_40;
		goto IL_00ff;
	}

IL_00ff:
	{
		goto IL_0113;
	}

IL_0113:
	{
		int32_t L_41 = V_3;
		__this->____freeList_3 = L_41;
		int32_t L_42 = (int32_t)__this->____freeCount_4;
		__this->____freeCount_4 = ((int32_t)il2cpp_codegen_add(L_42, 1));
		int32_t L_43 = (int32_t)__this->____version_5;
		__this->____version_5 = ((int32_t)il2cpp_codegen_add(L_43, 1));
		return (bool)1;
	}

IL_0138:
	{
		int32_t L_44 = V_3;
		V_2 = L_44;
		Entry_t6593783EEB8286F7D80364808975FF6902726398* L_45 = V_4;
		int32_t L_46 = (int32_t)L_45->___next_1;
		V_3 = L_46;
	}

IL_0142:
	{
		int32_t L_47 = V_3;
		if ((((int32_t)L_47) >= ((int32_t)0)))
		{
			goto IL_005c;
		}
	}

IL_0149:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_m5BDCE9366E4154EF735D914466B5BF2ADD49C286_gshared (Dictionary_2_tA59FCDC7016E38E9B9B393997928B8B73460F4DF* __this, Guid_t ___0_key, int32_t* ___1_value, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		Guid_t L_0 = ___0_key;
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_m1EEF386C2CD5E506570FE2E3437136B78014BB5C(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 28));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0025;
		}
	}
	{
		int32_t* L_3 = ___1_value;
		EntryU5BU5D_t2FA9EF95EBAB729FEB4F9541CAC889E13FC7202B* L_4 = (EntryU5BU5D_t2FA9EF95EBAB729FEB4F9541CAC889E13FC7202B*)__this->____entries_1;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		int32_t L_6 = (int32_t)((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)))->___value_3;
		*(int32_t*)L_3 = L_6;
		return (bool)1;
	}

IL_0025:
	{
		int32_t* L_7 = ___1_value;
		il2cpp_codegen_initobj(L_7, sizeof(int32_t));
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryAdd_m5771432D92A613D9FDA84D719094765B26C0F6A6_gshared (Dictionary_2_tA59FCDC7016E38E9B9B393997928B8B73460F4DF* __this, Guid_t ___0_key, int32_t ___1_value, const RuntimeMethod* method) 
{
	{
		Guid_t L_0 = ___0_key;
		int32_t L_1 = ___1_value;
		bool L_2;
		L_2 = Dictionary_2_TryInsert_mE55551BDAABAA23D3D45EFE2629ABC9B2AAE0AC6(__this, L_0, L_1, (uint8_t)0, il2cpp_rgctx_method(method->klass->rgctx_data, 29));
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m9E81BAA10780509FEC75881CFF4D778A75A2A595_gshared (Dictionary_2_tA59FCDC7016E38E9B9B393997928B8B73460F4DF* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m6BDDA2FBB4CE6B919AB004C5017962E363B06979_gshared (Dictionary_2_tA59FCDC7016E38E9B9B393997928B8B73460F4DF* __this, KeyValuePair_2U5BU5D_tE363BCACDAADBB4644E128BD0356204665EDF9C8* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		KeyValuePair_2U5BU5D_tE363BCACDAADBB4644E128BD0356204665EDF9C8* L_0 = ___0_array;
		int32_t L_1 = ___1_index;
		Dictionary_2_CopyTo_mF234D8B48C7D6488AF17560AFE447DD5E408B150(__this, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 42));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_ICollection_CopyTo_m177DD9DFA0CF499E7CEDE4CA270E6B5F59C89BB0_gshared (Dictionary_2_tA59FCDC7016E38E9B9B393997928B8B73460F4DF* __this, RuntimeArray* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	KeyValuePair_2U5BU5D_tE363BCACDAADBB4644E128BD0356204665EDF9C8* V_0 = NULL;
	DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533* V_1 = NULL;
	EntryU5BU5D_t2FA9EF95EBAB729FEB4F9541CAC889E13FC7202B* V_2 = NULL;
	int32_t V_3 = 0;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_4 = NULL;
	int32_t V_5 = 0;
	EntryU5BU5D_t2FA9EF95EBAB729FEB4F9541CAC889E13FC7202B* V_6 = NULL;
	int32_t V_7 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeArray* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)3, NULL);
	}

IL_0009:
	{
		RuntimeArray* L_1 = ___0_array;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(L_1, NULL);
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0018;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)7, NULL);
	}

IL_0018:
	{
		RuntimeArray* L_3 = ___0_array;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(L_3, 0, NULL);
		if (!L_4)
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)6, NULL);
	}

IL_0027:
	{
		int32_t L_5 = ___1_index;
		RuntimeArray* L_6 = ___0_array;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(L_6, NULL);
		if ((!(((uint32_t)L_5) > ((uint32_t)L_7))))
		{
			goto IL_0035;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0035:
	{
		RuntimeArray* L_8 = ___0_array;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(L_8, NULL);
		int32_t L_10 = ___1_index;
		int32_t L_11;
		L_11 = Dictionary_2_get_Count_m5E06E62014099F11845EDFAA7B53B04132BF73AC(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 36));
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_9, L_10))) >= ((int32_t)L_11)))
		{
			goto IL_004b;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)5, NULL);
	}

IL_004b:
	{
		RuntimeArray* L_12 = ___0_array;
		V_0 = ((KeyValuePair_2U5BU5D_tE363BCACDAADBB4644E128BD0356204665EDF9C8*)IsInst((RuntimeObject*)L_12, il2cpp_rgctx_data(method->klass->rgctx_data, 35)));
		KeyValuePair_2U5BU5D_tE363BCACDAADBB4644E128BD0356204665EDF9C8* L_13 = V_0;
		if (!L_13)
		{
			goto IL_005e;
		}
	}
	{
		KeyValuePair_2U5BU5D_tE363BCACDAADBB4644E128BD0356204665EDF9C8* L_14 = V_0;
		int32_t L_15 = ___1_index;
		Dictionary_2_CopyTo_mF234D8B48C7D6488AF17560AFE447DD5E408B150(__this, L_14, L_15, il2cpp_rgctx_method(method->klass->rgctx_data, 42));
		return;
	}

IL_005e:
	{
		RuntimeArray* L_16 = ___0_array;
		V_1 = ((DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533*)IsInst((RuntimeObject*)L_16, DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533_il2cpp_TypeInfo_var));
		DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533* L_17 = V_1;
		if (!L_17)
		{
			goto IL_00c3;
		}
	}
	{
		EntryU5BU5D_t2FA9EF95EBAB729FEB4F9541CAC889E13FC7202B* L_18 = (EntryU5BU5D_t2FA9EF95EBAB729FEB4F9541CAC889E13FC7202B*)__this->____entries_1;
		V_2 = L_18;
		V_3 = 0;
		goto IL_00b9;
	}

IL_0073:
	{
		EntryU5BU5D_t2FA9EF95EBAB729FEB4F9541CAC889E13FC7202B* L_19 = V_2;
		int32_t L_20 = V_3;
		NullCheck(L_19);
		int32_t L_21 = (int32_t)((L_19)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_20)))->___hashCode_0;
		if ((((int32_t)L_21) < ((int32_t)0)))
		{
			goto IL_00b5;
		}
	}
	{
		DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533* L_22 = V_1;
		int32_t L_23 = ___1_index;
		int32_t L_24 = L_23;
		___1_index = ((int32_t)il2cpp_codegen_add(L_24, 1));
		EntryU5BU5D_t2FA9EF95EBAB729FEB4F9541CAC889E13FC7202B* L_25 = V_2;
		int32_t L_26 = V_3;
		NullCheck(L_25);
		Guid_t L_27 = (Guid_t)((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___key_2;
		Guid_t L_28 = L_27;
		RuntimeObject* L_29 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14), &L_28);
		EntryU5BU5D_t2FA9EF95EBAB729FEB4F9541CAC889E13FC7202B* L_30 = V_2;
		int32_t L_31 = V_3;
		NullCheck(L_30);
		int32_t L_32 = (int32_t)((L_30)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_31)))->___value_3;
		int32_t L_33 = L_32;
		RuntimeObject* L_34 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15), &L_33);
		DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB L_35;
		memset((&L_35), 0, sizeof(L_35));
		DictionaryEntry__ctor_m2768353E53A75C4860E34B37DAF1342120C5D1EA((&L_35), L_29, L_34, NULL);
		NullCheck(L_22);
		(L_22)->SetAt(static_cast<il2cpp_array_size_t>(L_24), (DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB)L_35);
	}

IL_00b5:
	{
		int32_t L_36 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_36, 1));
	}

IL_00b9:
	{
		int32_t L_37 = V_3;
		int32_t L_38 = (int32_t)__this->____count_2;
		if ((((int32_t)L_37) < ((int32_t)L_38)))
		{
			goto IL_0073;
		}
	}
	{
		return;
	}

IL_00c3:
	{
		RuntimeArray* L_39 = ___0_array;
		V_4 = ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)IsInst((RuntimeObject*)L_39, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_40 = V_4;
		if (L_40)
		{
			goto IL_00d4;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
	}

IL_00d4:
	{
	}
	try
	{
		{
			int32_t L_41 = (int32_t)__this->____count_2;
			V_5 = L_41;
			EntryU5BU5D_t2FA9EF95EBAB729FEB4F9541CAC889E13FC7202B* L_42 = (EntryU5BU5D_t2FA9EF95EBAB729FEB4F9541CAC889E13FC7202B*)__this->____entries_1;
			V_6 = L_42;
			V_7 = 0;
			goto IL_0130_1;
		}

IL_00ea_1:
		{
			EntryU5BU5D_t2FA9EF95EBAB729FEB4F9541CAC889E13FC7202B* L_43 = V_6;
			int32_t L_44 = V_7;
			NullCheck(L_43);
			int32_t L_45 = (int32_t)((L_43)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_44)))->___hashCode_0;
			if ((((int32_t)L_45) < ((int32_t)0)))
			{
				goto IL_012a_1;
			}
		}
		{
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_46 = V_4;
			int32_t L_47 = ___1_index;
			int32_t L_48 = L_47;
			___1_index = ((int32_t)il2cpp_codegen_add(L_48, 1));
			EntryU5BU5D_t2FA9EF95EBAB729FEB4F9541CAC889E13FC7202B* L_49 = V_6;
			int32_t L_50 = V_7;
			NullCheck(L_49);
			Guid_t L_51 = (Guid_t)((L_49)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_50)))->___key_2;
			EntryU5BU5D_t2FA9EF95EBAB729FEB4F9541CAC889E13FC7202B* L_52 = V_6;
			int32_t L_53 = V_7;
			NullCheck(L_52);
			int32_t L_54 = (int32_t)((L_52)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_53)))->___value_3;
			KeyValuePair_2_t103EED32AF196D79C0FCDE0CE9C589258217044B L_55;
			memset((&L_55), 0, sizeof(L_55));
			KeyValuePair_2__ctor_m702C85B3C4B7309A5497C9FE8D3BE839467D0252((&L_55), L_51, L_54, il2cpp_rgctx_method(method->klass->rgctx_data, 37));
			KeyValuePair_2_t103EED32AF196D79C0FCDE0CE9C589258217044B L_56 = L_55;
			RuntimeObject* L_57 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 21), &L_56);
			NullCheck(L_46);
			ArrayElementTypeCheck (L_46, L_57);
			(L_46)->SetAt(static_cast<il2cpp_array_size_t>(L_48), (RuntimeObject*)L_57);
		}

IL_012a_1:
		{
			int32_t L_58 = V_7;
			V_7 = ((int32_t)il2cpp_codegen_add(L_58, 1));
		}

IL_0130_1:
		{
			int32_t L_59 = V_7;
			int32_t L_60 = V_5;
			if ((((int32_t)L_59) < ((int32_t)L_60)))
			{
				goto IL_00ea_1;
			}
		}
		{
			goto IL_0140;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0138;
		}
		throw e;
	}

CATCH_0138:
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0140;
	}

IL_0140:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m8BBDCED746E81F690B7FAA197627A5DE3D9BE738_gshared (Dictionary_2_tA59FCDC7016E38E9B9B393997928B8B73460F4DF* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_tCEDFFFDD2C31A66EC221FED52938C50D01A8ECEF L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m1324FEBE39A953DCC364D370AD55281BB4C9478B((&L_0), __this, 2, il2cpp_rgctx_method(method->klass->rgctx_data, 39));
		Enumerator_tCEDFFFDD2C31A66EC221FED52938C50D01A8ECEF L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 38), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_ICollection_get_SyncRoot_m875E44B62AFB5ADFC6275DAE7834C54CA7CEE389_gshared (Dictionary_2_tA59FCDC7016E38E9B9B393997928B8B73460F4DF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->____syncRoot_9;
		if (L_0)
		{
			goto IL_001a;
		}
	}
	{
		RuntimeObject** L_1 = (RuntimeObject**)(&__this->____syncRoot_9);
		RuntimeObject* L_2 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_2, NULL);
		RuntimeObject* L_3;
		L_3 = InterlockedCompareExchangeImpl<RuntimeObject*>(L_1, L_2, NULL);
	}

IL_001a:
	{
		RuntimeObject* L_4 = (RuntimeObject*)__this->____syncRoot_9;
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IDictionary_get_Keys_m0D8EA9A1E78F51DA5FFD255DFD617BB19AC6DF83_gshared (Dictionary_2_tA59FCDC7016E38E9B9B393997928B8B73460F4DF* __this, const RuntimeMethod* method) 
{
	{
		KeyCollection_t3230D276D9625DB17B194F08DFA6BF3606BE6267* L_0;
		L_0 = Dictionary_2_get_Keys_mA894636E6D02C26187EC6BF2336CE2CFBFBCA71D(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 55));
		return (RuntimeObject*)L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IDictionary_get_Item_m2BAEB00807E43786A9DC3E33A26727B388A80737_gshared (Dictionary_2_tA59FCDC7016E38E9B9B393997928B8B73460F4DF* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		RuntimeObject* L_0 = ___0_key;
		bool L_1;
		L_1 = Dictionary_2_IsCompatibleKey_mECCB826358789D5702F2260976F43907F8F934BC(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 56));
		if (!L_1)
		{
			goto IL_0030;
		}
	}
	{
		RuntimeObject* L_2 = ___0_key;
		int32_t L_3;
		L_3 = Dictionary_2_FindEntry_m1EEF386C2CD5E506570FE2E3437136B78014BB5C(__this, ((*(Guid_t*)((Guid_t*)(Guid_t*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 14))))), il2cpp_rgctx_method(method->klass->rgctx_data, 28));
		V_0 = L_3;
		int32_t L_4 = V_0;
		if ((((int32_t)L_4) < ((int32_t)0)))
		{
			goto IL_0030;
		}
	}
	{
		EntryU5BU5D_t2FA9EF95EBAB729FEB4F9541CAC889E13FC7202B* L_5 = (EntryU5BU5D_t2FA9EF95EBAB729FEB4F9541CAC889E13FC7202B*)__this->____entries_1;
		int32_t L_6 = V_0;
		NullCheck(L_5);
		int32_t L_7 = (int32_t)((L_5)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_6)))->___value_3;
		int32_t L_8 = L_7;
		RuntimeObject* L_9 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15), &L_8);
		return L_9;
	}

IL_0030:
	{
		return NULL;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_IDictionary_set_Item_m0A7D52A26B70BC6DC9916C6C092A801A064CBEEA_gshared (Dictionary_2_tA59FCDC7016E38E9B9B393997928B8B73460F4DF* __this, RuntimeObject* ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) 
{
	Guid_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 2> __active_exceptions;
	{
		RuntimeObject* L_0 = ___0_key;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)5, NULL);
	}

IL_0009:
	{
		RuntimeObject* L_1 = ___1_value;
		ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m0F7A078274F301B83DFC51191B3AFC763DE9C4D0(L_1, (int32_t)((int32_t)15), il2cpp_rgctx_method(method->klass->rgctx_data, 58));
	}
	try
	{
		{
			RuntimeObject* L_2 = ___0_key;
			V_0 = ((*(Guid_t*)((Guid_t*)(Guid_t*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 14)))));
		}
		try
		{
			Guid_t L_3 = V_0;
			RuntimeObject* L_4 = ___1_value;
			Dictionary_2_set_Item_m55BD33C380C42B78092B07D419F79D396A06AC80(__this, L_3, ((*(int32_t*)((int32_t*)(int32_t*)UnBox(L_4, il2cpp_rgctx_data(method->klass->rgctx_data, 15))))), il2cpp_rgctx_method(method->klass->rgctx_data, 59));
			goto IL_003a_1;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_0027_1;
			}
			throw e;
		}

CATCH_0027_1:
		{
			RuntimeObject* L_5 = ___1_value;
			RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 60)) };
			il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
			Type_t* L_7;
			L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
			ThrowHelper_ThrowWrongValueTypeArgumentException_mC1A6BBE43C360583C1E2C463D5B0AADF1E3E1910(L_5, L_7, NULL);
			IL2CPP_POP_ACTIVE_EXCEPTION();
			goto IL_003a_1;
		}

IL_003a_1:
		{
			goto IL_004f;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_003c;
		}
		throw e;
	}

CATCH_003c:
	{
		RuntimeObject* L_8 = ___0_key;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_9 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 61)) };
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
		Type_t* L_10;
		L_10 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_9, NULL);
		ThrowHelper_ThrowWrongKeyTypeArgumentException_m90E5BCE2CB10EEC16F254C237121C6816C4D6982(L_8, L_10, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_004f;
	}

IL_004f:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_IsCompatibleKey_mECCB826358789D5702F2260976F43907F8F934BC_gshared (RuntimeObject* ___0_key, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_key;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)5, NULL);
	}

IL_0009:
	{
		RuntimeObject* L_1 = ___0_key;
		return (bool)((!(((RuntimeObject*)(RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_1, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 14)))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_IDictionary_Contains_mCAF00E2DEE23C62B0200E299E30C0DA9D83E3ED8_gshared (Dictionary_2_tA59FCDC7016E38E9B9B393997928B8B73460F4DF* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_key;
		bool L_1;
		L_1 = Dictionary_2_IsCompatibleKey_mECCB826358789D5702F2260976F43907F8F934BC(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 56));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_key;
		bool L_3;
		L_3 = Dictionary_2_ContainsKey_m4595C29799CCA36600C8079DF01F40844CF933A6(__this, ((*(Guid_t*)((Guid_t*)(Guid_t*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 14))))), il2cpp_rgctx_method(method->klass->rgctx_data, 62));
		return L_3;
	}

IL_0015:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IDictionary_GetEnumerator_mAB83B6865B010DEBB5E867B31363A1D1ABF90068_gshared (Dictionary_2_tA59FCDC7016E38E9B9B393997928B8B73460F4DF* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_tCEDFFFDD2C31A66EC221FED52938C50D01A8ECEF L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m1324FEBE39A953DCC364D370AD55281BB4C9478B((&L_0), __this, 1, il2cpp_rgctx_method(method->klass->rgctx_data, 39));
		Enumerator_tCEDFFFDD2C31A66EC221FED52938C50D01A8ECEF L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 38), &L_1);
		return (RuntimeObject*)L_2;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m47DD6DE10DF49155FCF329CC0B0FC21C23EDA26A_gshared (Dictionary_2_t9283A2526EFCCE82F0B8EBAF55887B5456F4480A* __this, const RuntimeMethod* method) 
{
	{
		Dictionary_2__ctor_mA7B8F56A2AD68581CBDCC5075D78B02A11435CDA(__this, 0, (RuntimeObject*)NULL, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mB65CCEDF960EE9D8391AA8F0971D86B37F0F29E5_gshared (Dictionary_2_t9283A2526EFCCE82F0B8EBAF55887B5456F4480A* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_capacity;
		Dictionary_2__ctor_mA7B8F56A2AD68581CBDCC5075D78B02A11435CDA(__this, L_0, (RuntimeObject*)NULL, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m2DDA1EA81F9824843DABB904C47C685B3925A13E_gshared (Dictionary_2_t9283A2526EFCCE82F0B8EBAF55887B5456F4480A* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_comparer;
		Dictionary_2__ctor_mA7B8F56A2AD68581CBDCC5075D78B02A11435CDA(__this, 0, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mA7B8F56A2AD68581CBDCC5075D78B02A11435CDA_gshared (Dictionary_2_t9283A2526EFCCE82F0B8EBAF55887B5456F4480A* __this, int32_t ___0_capacity, RuntimeObject* ___1_comparer, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		int32_t L_0 = ___0_capacity;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0011;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m9B335696876184D17D1F8D7AF94C1B5B0869AA97((int32_t)((int32_t)12), NULL);
	}

IL_0011:
	{
		int32_t L_1 = ___0_capacity;
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_001d;
		}
	}
	{
		int32_t L_2 = ___0_capacity;
		int32_t L_3;
		L_3 = Dictionary_2_Initialize_m6AB20947E419AA18B5C62E707D43A250FEDE0897(__this, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
	}

IL_001d:
	{
		RuntimeObject* L_4 = ___1_comparer;
		EqualityComparer_1_tAAD1A76C30594C4D736E586B3D77281A53A27399* L_5;
		L_5 = EqualityComparer_1_get_Default_m5DCC393F5D59545D96AF9FF747F17C72EABB5D3B_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		if ((((RuntimeObject*)(RuntimeObject*)L_4) == ((RuntimeObject*)(EqualityComparer_1_tAAD1A76C30594C4D736E586B3D77281A53A27399*)L_5)))
		{
			goto IL_002c;
		}
	}
	{
		RuntimeObject* L_6 = ___1_comparer;
		__this->____comparer_6 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____comparer_6), (void*)L_6);
	}

IL_002c:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mBD802685557CC0B3A7340AE228EB50C5E09358DA_gshared (Dictionary_2_t9283A2526EFCCE82F0B8EBAF55887B5456F4480A* __this, RuntimeObject* ___0_dictionary, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_dictionary;
		Dictionary_2__ctor_m79933243916DED9394A47C1F990E1F286F108101(__this, L_0, (RuntimeObject*)NULL, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m79933243916DED9394A47C1F990E1F286F108101_gshared (Dictionary_2_t9283A2526EFCCE82F0B8EBAF55887B5456F4480A* __this, RuntimeObject* ___0_dictionary, RuntimeObject* ___1_comparer, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	EntryU5BU5D_tE0A05522E3E044A0A153A33D678D14E918FFAD4F* V_1 = NULL;
	int32_t V_2 = 0;
	RuntimeObject* V_3 = NULL;
	KeyValuePair_2_t669A5BAF37ED0ABC96A30943A6E7D0442310B936 V_4;
	memset((&V_4), 0, sizeof(V_4));
	Dictionary_2_t9283A2526EFCCE82F0B8EBAF55887B5456F4480A* G_B2_0 = NULL;
	Dictionary_2_t9283A2526EFCCE82F0B8EBAF55887B5456F4480A* G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	Dictionary_2_t9283A2526EFCCE82F0B8EBAF55887B5456F4480A* G_B3_1 = NULL;
	{
		RuntimeObject* L_0 = ___0_dictionary;
		if (L_0)
		{
			G_B2_0 = __this;
			goto IL_0007;
		}
		G_B1_0 = __this;
	}
	{
		G_B3_0 = 0;
		G_B3_1 = G_B1_0;
		goto IL_000d;
	}

IL_0007:
	{
		RuntimeObject* L_1 = ___0_dictionary;
		NullCheck((RuntimeObject*)L_1);
		int32_t L_2;
		L_2 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 9), (RuntimeObject*)L_1);
		G_B3_0 = L_2;
		G_B3_1 = G_B2_0;
	}

IL_000d:
	{
		RuntimeObject* L_3 = ___1_comparer;
		Dictionary_2__ctor_mA7B8F56A2AD68581CBDCC5075D78B02A11435CDA(G_B3_1, G_B3_0, L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		RuntimeObject* L_4 = ___0_dictionary;
		if (L_4)
		{
			goto IL_001c;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)1, NULL);
	}

IL_001c:
	{
		RuntimeObject* L_5 = ___0_dictionary;
		NullCheck((RuntimeObject*)L_5);
		Type_t* L_6;
		L_6 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3((RuntimeObject*)L_5, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 11)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		bool L_9;
		L_9 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_6, L_8, NULL);
		if (!L_9)
		{
			goto IL_0080;
		}
	}
	{
		RuntimeObject* L_10 = ___0_dictionary;
		Dictionary_2_t9283A2526EFCCE82F0B8EBAF55887B5456F4480A* L_11 = ((Dictionary_2_t9283A2526EFCCE82F0B8EBAF55887B5456F4480A*)CastclassClass((RuntimeObject*)L_10, il2cpp_rgctx_data(method->klass->rgctx_data, 6)));
		NullCheck(L_11);
		int32_t L_12 = (int32_t)L_11->____count_2;
		V_0 = L_12;
		NullCheck(L_11);
		EntryU5BU5D_tE0A05522E3E044A0A153A33D678D14E918FFAD4F* L_13 = (EntryU5BU5D_tE0A05522E3E044A0A153A33D678D14E918FFAD4F*)L_11->____entries_1;
		V_1 = L_13;
		V_2 = 0;
		goto IL_007b;
	}

IL_004a:
	{
		EntryU5BU5D_tE0A05522E3E044A0A153A33D678D14E918FFAD4F* L_14 = V_1;
		int32_t L_15 = V_2;
		NullCheck(L_14);
		int32_t L_16 = (int32_t)((L_14)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_15)))->___hashCode_0;
		if ((((int32_t)L_16) < ((int32_t)0)))
		{
			goto IL_0077;
		}
	}
	{
		EntryU5BU5D_tE0A05522E3E044A0A153A33D678D14E918FFAD4F* L_17 = V_1;
		int32_t L_18 = V_2;
		NullCheck(L_17);
		Guid_t L_19 = (Guid_t)((L_17)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_18)))->___key_2;
		EntryU5BU5D_tE0A05522E3E044A0A153A33D678D14E918FFAD4F* L_20 = V_1;
		int32_t L_21 = V_2;
		NullCheck(L_20);
		RuntimeObject* L_22 = (RuntimeObject*)((L_20)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_21)))->___value_3;
		Dictionary_2_Add_m33B42C2DBAD6AA659C75AE78EB373B8577F9710B(__this, L_19, L_22, il2cpp_rgctx_method(method->klass->rgctx_data, 16));
	}

IL_0077:
	{
		int32_t L_23 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_23, 1));
	}

IL_007b:
	{
		int32_t L_24 = V_2;
		int32_t L_25 = V_0;
		if ((((int32_t)L_24) < ((int32_t)L_25)))
		{
			goto IL_004a;
		}
	}
	{
		return;
	}

IL_0080:
	{
		RuntimeObject* L_26 = ___0_dictionary;
		NullCheck((RuntimeObject*)L_26);
		RuntimeObject* L_27;
		L_27 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 17), (RuntimeObject*)L_26);
		V_3 = L_27;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00af:
			{
				{
					RuntimeObject* L_28 = V_3;
					if (!L_28)
					{
						goto IL_00b8;
					}
				}
				{
					RuntimeObject* L_29 = V_3;
					NullCheck((RuntimeObject*)L_29);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_29);
				}

IL_00b8:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_00a5_1;
			}

IL_0089_1:
			{
				RuntimeObject* L_30 = V_3;
				NullCheck(L_30);
				KeyValuePair_2_t669A5BAF37ED0ABC96A30943A6E7D0442310B936 L_31;
				L_31 = InterfaceFuncInvoker0< KeyValuePair_2_t669A5BAF37ED0ABC96A30943A6E7D0442310B936 >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 19), L_30);
				V_4 = L_31;
				Guid_t L_32;
				L_32 = KeyValuePair_2_get_Key_mF91DB02B44EED18B0673E6F2CA20021DF3055E1F_inline((&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 22));
				RuntimeObject* L_33;
				L_33 = KeyValuePair_2_get_Value_m2A56B01BF54F80055FA9D4B744AD9DBDC6EAE22D_inline((&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 23));
				Dictionary_2_Add_m33B42C2DBAD6AA659C75AE78EB373B8577F9710B(__this, L_32, L_33, il2cpp_rgctx_method(method->klass->rgctx_data, 16));
			}

IL_00a5_1:
			{
				RuntimeObject* L_34 = V_3;
				NullCheck((RuntimeObject*)L_34);
				bool L_35;
				L_35 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_34);
				if (L_35)
				{
					goto IL_0089_1;
				}
			}
			{
				goto IL_00b9;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00b9:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mB6DD7072D886C1EEBE6D007CE3865F76B2D5A2C5_gshared (Dictionary_2_t9283A2526EFCCE82F0B8EBAF55887B5456F4480A* __this, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___0_info, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___1_context, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConditionalWeakTable_2_Add_mF98A2811734A37D856C622E7783FD7502AA7F0B7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* L_0;
		L_0 = HashHelpers_get_SerializationInfoTable_m8C17D5483B39B68897AEFFD14A9E139AF858222F(NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_1 = ___0_info;
		NullCheck(L_0);
		ConditionalWeakTable_2_Add_mF98A2811734A37D856C622E7783FD7502AA7F0B7(L_0, (RuntimeObject*)__this, L_1, ConditionalWeakTable_2_Add_mF98A2811734A37D856C622E7783FD7502AA7F0B7_RuntimeMethod_var);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_get_Count_mF6D5ED77BA9FBAAD59EF5BAF8999C13EAB376006_gshared (Dictionary_2_t9283A2526EFCCE82F0B8EBAF55887B5456F4480A* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____count_2;
		int32_t L_1 = (int32_t)__this->____freeCount_4;
		return ((int32_t)il2cpp_codegen_subtract(L_0, L_1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyCollection_t9DE8CFDEB3353C5383DB324226EACA5D0B37AA8E* Dictionary_2_get_Keys_mFA34236E56D4ADBE51E2D5FA82DF698DA9A972FB_gshared (Dictionary_2_t9283A2526EFCCE82F0B8EBAF55887B5456F4480A* __this, const RuntimeMethod* method) 
{
	{
		KeyCollection_t9DE8CFDEB3353C5383DB324226EACA5D0B37AA8E* L_0 = (KeyCollection_t9DE8CFDEB3353C5383DB324226EACA5D0B37AA8E*)__this->____keys_7;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		KeyCollection_t9DE8CFDEB3353C5383DB324226EACA5D0B37AA8E* L_1 = (KeyCollection_t9DE8CFDEB3353C5383DB324226EACA5D0B37AA8E*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 24));
		KeyCollection__ctor_m9D62A90356F2F0DD69A413279F538A225588C099(L_1, __this, il2cpp_rgctx_method(method->klass->rgctx_data, 25));
		__this->____keys_7 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____keys_7), (void*)L_1);
	}

IL_0014:
	{
		KeyCollection_t9DE8CFDEB3353C5383DB324226EACA5D0B37AA8E* L_2 = (KeyCollection_t9DE8CFDEB3353C5383DB324226EACA5D0B37AA8E*)__this->____keys_7;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueCollection_tDDD3D21DE247A37B6EFC39326193FCD731A2E296* Dictionary_2_get_Values_m2A497B1A3A2856303D35DC5C7172B6CC06BBF5AE_gshared (Dictionary_2_t9283A2526EFCCE82F0B8EBAF55887B5456F4480A* __this, const RuntimeMethod* method) 
{
	{
		ValueCollection_tDDD3D21DE247A37B6EFC39326193FCD731A2E296* L_0 = (ValueCollection_tDDD3D21DE247A37B6EFC39326193FCD731A2E296*)__this->____values_8;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ValueCollection_tDDD3D21DE247A37B6EFC39326193FCD731A2E296* L_1 = (ValueCollection_tDDD3D21DE247A37B6EFC39326193FCD731A2E296*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 26));
		ValueCollection__ctor_m1C59220A433AAF467F2345DD5A30962774691151(L_1, __this, il2cpp_rgctx_method(method->klass->rgctx_data, 27));
		__this->____values_8 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____values_8), (void*)L_1);
	}

IL_0014:
	{
		ValueCollection_tDDD3D21DE247A37B6EFC39326193FCD731A2E296* L_2 = (ValueCollection_tDDD3D21DE247A37B6EFC39326193FCD731A2E296*)__this->____values_8;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_get_Item_m387DE0E7090B01FCF6F61CF76D8FADF7EC1DF151_gshared (Dictionary_2_t9283A2526EFCCE82F0B8EBAF55887B5456F4480A* __this, Guid_t ___0_key, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	RuntimeObject* V_1 = NULL;
	{
		Guid_t L_0 = ___0_key;
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_mFAC5E9BB05EFD8B896D7B1EE3745B9141BC26025(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 28));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_001e;
		}
	}
	{
		EntryU5BU5D_tE0A05522E3E044A0A153A33D678D14E918FFAD4F* L_3 = (EntryU5BU5D_tE0A05522E3E044A0A153A33D678D14E918FFAD4F*)__this->____entries_1;
		int32_t L_4 = V_0;
		NullCheck(L_3);
		RuntimeObject* L_5 = (RuntimeObject*)((L_3)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_4)))->___value_3;
		return L_5;
	}

IL_001e:
	{
		Guid_t L_6 = ___0_key;
		Guid_t L_7 = L_6;
		RuntimeObject* L_8 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14), &L_7);
		ThrowHelper_ThrowKeyNotFoundException_m6A17735FA486AD43F2488DE39B755AC60BC99CE7(L_8, NULL);
		il2cpp_codegen_initobj((&V_1), sizeof(RuntimeObject*));
		RuntimeObject* L_9 = V_1;
		return L_9;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_m5C6C0F6A08D2742138B08FB9B91FA19B58F1F5D3_gshared (Dictionary_2_t9283A2526EFCCE82F0B8EBAF55887B5456F4480A* __this, Guid_t ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) 
{
	{
		Guid_t L_0 = ___0_key;
		RuntimeObject* L_1 = ___1_value;
		bool L_2;
		L_2 = Dictionary_2_TryInsert_mF645474D42EF0AB95FED32388F31D297085C2832(__this, L_0, L_1, (uint8_t)1, il2cpp_rgctx_method(method->klass->rgctx_data, 29));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_m33B42C2DBAD6AA659C75AE78EB373B8577F9710B_gshared (Dictionary_2_t9283A2526EFCCE82F0B8EBAF55887B5456F4480A* __this, Guid_t ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) 
{
	{
		Guid_t L_0 = ___0_key;
		RuntimeObject* L_1 = ___1_value;
		bool L_2;
		L_2 = Dictionary_2_TryInsert_mF645474D42EF0AB95FED32388F31D297085C2832(__this, L_0, L_1, (uint8_t)2, il2cpp_rgctx_method(method->klass->rgctx_data, 29));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m41E4CC0CF7BE97652891C6BC6FA884369C69A76E_gshared (Dictionary_2_t9283A2526EFCCE82F0B8EBAF55887B5456F4480A* __this, KeyValuePair_2_t669A5BAF37ED0ABC96A30943A6E7D0442310B936 ___0_keyValuePair, const RuntimeMethod* method) 
{
	{
		Guid_t L_0;
		L_0 = KeyValuePair_2_get_Key_mF91DB02B44EED18B0673E6F2CA20021DF3055E1F_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		RuntimeObject* L_1;
		L_1 = KeyValuePair_2_get_Value_m2A56B01BF54F80055FA9D4B744AD9DBDC6EAE22D_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		Dictionary_2_Add_m33B42C2DBAD6AA659C75AE78EB373B8577F9710B(__this, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 16));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_mE25BB7ED6D03A0CFC6882B6E87536A7992141FEF_gshared (Dictionary_2_t9283A2526EFCCE82F0B8EBAF55887B5456F4480A* __this, KeyValuePair_2_t669A5BAF37ED0ABC96A30943A6E7D0442310B936 ___0_keyValuePair, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		Guid_t L_0;
		L_0 = KeyValuePair_2_get_Key_mF91DB02B44EED18B0673E6F2CA20021DF3055E1F_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_mFAC5E9BB05EFD8B896D7B1EE3745B9141BC26025(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 28));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0038;
		}
	}
	{
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_3;
		L_3 = EqualityComparer_1_get_Default_mA2AD755281D23F496A2579884B39E30C13C208B3_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 30));
		EntryU5BU5D_tE0A05522E3E044A0A153A33D678D14E918FFAD4F* L_4 = (EntryU5BU5D_tE0A05522E3E044A0A153A33D678D14E918FFAD4F*)__this->____entries_1;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		RuntimeObject* L_6 = (RuntimeObject*)((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)))->___value_3;
		RuntimeObject* L_7;
		L_7 = KeyValuePair_2_get_Value_m2A56B01BF54F80055FA9D4B744AD9DBDC6EAE22D_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		NullCheck(L_3);
		bool L_8;
		L_8 = VirtualFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(8, L_3, L_6, L_7);
		if (!L_8)
		{
			goto IL_0038;
		}
	}
	{
		return (bool)1;
	}

IL_0038:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m2179BEB0D08DADAC45D5BDB012B57A89D6E842B6_gshared (Dictionary_2_t9283A2526EFCCE82F0B8EBAF55887B5456F4480A* __this, KeyValuePair_2_t669A5BAF37ED0ABC96A30943A6E7D0442310B936 ___0_keyValuePair, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		Guid_t L_0;
		L_0 = KeyValuePair_2_get_Key_mF91DB02B44EED18B0673E6F2CA20021DF3055E1F_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_mFAC5E9BB05EFD8B896D7B1EE3745B9141BC26025(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 28));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0046;
		}
	}
	{
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_3;
		L_3 = EqualityComparer_1_get_Default_mA2AD755281D23F496A2579884B39E30C13C208B3_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 30));
		EntryU5BU5D_tE0A05522E3E044A0A153A33D678D14E918FFAD4F* L_4 = (EntryU5BU5D_tE0A05522E3E044A0A153A33D678D14E918FFAD4F*)__this->____entries_1;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		RuntimeObject* L_6 = (RuntimeObject*)((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)))->___value_3;
		RuntimeObject* L_7;
		L_7 = KeyValuePair_2_get_Value_m2A56B01BF54F80055FA9D4B744AD9DBDC6EAE22D_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		NullCheck(L_3);
		bool L_8;
		L_8 = VirtualFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(8, L_3, L_6, L_7);
		if (!L_8)
		{
			goto IL_0046;
		}
	}
	{
		Guid_t L_9;
		L_9 = KeyValuePair_2_get_Key_mF91DB02B44EED18B0673E6F2CA20021DF3055E1F_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		bool L_10;
		L_10 = Dictionary_2_Remove_mF52F83A179ACE0E308B993508A68C35895ED5D8F(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 34));
		return (bool)1;
	}

IL_0046:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Clear_m5BB7F76414590352F287EA41F9AB910EE48E7956_gshared (Dictionary_2_t9283A2526EFCCE82F0B8EBAF55887B5456F4480A* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = (int32_t)__this->____count_2;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_0041;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		NullCheck(L_3);
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_2, 0, ((int32_t)(((RuntimeArray*)L_3)->max_length)), NULL);
		__this->____count_2 = 0;
		__this->____freeList_3 = (-1);
		__this->____freeCount_4 = 0;
		EntryU5BU5D_tE0A05522E3E044A0A153A33D678D14E918FFAD4F* L_4 = (EntryU5BU5D_tE0A05522E3E044A0A153A33D678D14E918FFAD4F*)__this->____entries_1;
		int32_t L_5 = V_0;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_4, 0, L_5, NULL);
	}

IL_0041:
	{
		int32_t L_6 = (int32_t)__this->____version_5;
		__this->____version_5 = ((int32_t)il2cpp_codegen_add(L_6, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_mADEF13A6F00847BA930B57377C0F34719842FE6A_gshared (Dictionary_2_t9283A2526EFCCE82F0B8EBAF55887B5456F4480A* __this, Guid_t ___0_key, const RuntimeMethod* method) 
{
	{
		Guid_t L_0 = ___0_key;
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_mFAC5E9BB05EFD8B896D7B1EE3745B9141BC26025(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 28));
		return (bool)((((int32_t)((((int32_t)L_1) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsValue_mB750373BEEE4DFFD9E7F77DFF7A0C4FF9186BBA5_gshared (Dictionary_2_t9283A2526EFCCE82F0B8EBAF55887B5456F4480A* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	EntryU5BU5D_tE0A05522E3E044A0A153A33D678D14E918FFAD4F* V_0 = NULL;
	int32_t V_1 = 0;
	RuntimeObject* V_2 = NULL;
	int32_t V_3 = 0;
	EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* V_4 = NULL;
	int32_t V_5 = 0;
	{
		EntryU5BU5D_tE0A05522E3E044A0A153A33D678D14E918FFAD4F* L_0 = (EntryU5BU5D_tE0A05522E3E044A0A153A33D678D14E918FFAD4F*)__this->____entries_1;
		V_0 = L_0;
		RuntimeObject* L_1 = ___0_value;
		if (L_1)
		{
			goto IL_0049;
		}
	}
	{
		V_1 = 0;
		goto IL_003b;
	}

IL_0013:
	{
		EntryU5BU5D_tE0A05522E3E044A0A153A33D678D14E918FFAD4F* L_2 = V_0;
		int32_t L_3 = V_1;
		NullCheck(L_2);
		int32_t L_4 = (int32_t)((L_2)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_3)))->___hashCode_0;
		if ((((int32_t)L_4) < ((int32_t)0)))
		{
			goto IL_0037;
		}
	}
	{
		EntryU5BU5D_tE0A05522E3E044A0A153A33D678D14E918FFAD4F* L_5 = V_0;
		int32_t L_6 = V_1;
		NullCheck(L_5);
		RuntimeObject* L_7 = (RuntimeObject*)((L_5)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_6)))->___value_3;
		if (L_7)
		{
			goto IL_0037;
		}
	}
	{
		return (bool)1;
	}

IL_0037:
	{
		int32_t L_8 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_8, 1));
	}

IL_003b:
	{
		int32_t L_9 = V_1;
		int32_t L_10 = (int32_t)__this->____count_2;
		if ((((int32_t)L_9) < ((int32_t)L_10)))
		{
			goto IL_0013;
		}
	}
	{
		goto IL_00db;
	}

IL_0049:
	{
		il2cpp_codegen_initobj((&V_2), sizeof(RuntimeObject*));
		RuntimeObject* L_11 = V_2;
		if (!L_11)
		{
			goto IL_0096;
		}
	}
	{
		V_3 = 0;
		goto IL_008b;
	}

IL_005d:
	{
		EntryU5BU5D_tE0A05522E3E044A0A153A33D678D14E918FFAD4F* L_12 = V_0;
		int32_t L_13 = V_3;
		NullCheck(L_12);
		int32_t L_14 = (int32_t)((L_12)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_13)))->___hashCode_0;
		if ((((int32_t)L_14) < ((int32_t)0)))
		{
			goto IL_0087;
		}
	}
	{
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_15;
		L_15 = EqualityComparer_1_get_Default_mA2AD755281D23F496A2579884B39E30C13C208B3_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 30));
		EntryU5BU5D_tE0A05522E3E044A0A153A33D678D14E918FFAD4F* L_16 = V_0;
		int32_t L_17 = V_3;
		NullCheck(L_16);
		RuntimeObject* L_18 = (RuntimeObject*)((L_16)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_17)))->___value_3;
		RuntimeObject* L_19 = ___0_value;
		NullCheck(L_15);
		bool L_20;
		L_20 = VirtualFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(8, L_15, L_18, L_19);
		if (!L_20)
		{
			goto IL_0087;
		}
	}
	{
		return (bool)1;
	}

IL_0087:
	{
		int32_t L_21 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_21, 1));
	}

IL_008b:
	{
		int32_t L_22 = V_3;
		int32_t L_23 = (int32_t)__this->____count_2;
		if ((((int32_t)L_22) < ((int32_t)L_23)))
		{
			goto IL_005d;
		}
	}
	{
		goto IL_00db;
	}

IL_0096:
	{
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_24;
		L_24 = EqualityComparer_1_get_Default_mA2AD755281D23F496A2579884B39E30C13C208B3_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 30));
		V_4 = L_24;
		V_5 = 0;
		goto IL_00d1;
	}

IL_00a2:
	{
		EntryU5BU5D_tE0A05522E3E044A0A153A33D678D14E918FFAD4F* L_25 = V_0;
		int32_t L_26 = V_5;
		NullCheck(L_25);
		int32_t L_27 = (int32_t)((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___hashCode_0;
		if ((((int32_t)L_27) < ((int32_t)0)))
		{
			goto IL_00cb;
		}
	}
	{
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_28 = V_4;
		EntryU5BU5D_tE0A05522E3E044A0A153A33D678D14E918FFAD4F* L_29 = V_0;
		int32_t L_30 = V_5;
		NullCheck(L_29);
		RuntimeObject* L_31 = (RuntimeObject*)((L_29)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_30)))->___value_3;
		RuntimeObject* L_32 = ___0_value;
		NullCheck(L_28);
		bool L_33;
		L_33 = VirtualFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(8, L_28, L_31, L_32);
		if (!L_33)
		{
			goto IL_00cb;
		}
	}
	{
		return (bool)1;
	}

IL_00cb:
	{
		int32_t L_34 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_34, 1));
	}

IL_00d1:
	{
		int32_t L_35 = V_5;
		int32_t L_36 = (int32_t)__this->____count_2;
		if ((((int32_t)L_35) < ((int32_t)L_36)))
		{
			goto IL_00a2;
		}
	}

IL_00db:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_CopyTo_m1062474EEC0D394425E27C1869DEA2BB8DF92B41_gshared (Dictionary_2_t9283A2526EFCCE82F0B8EBAF55887B5456F4480A* __this, KeyValuePair_2U5BU5D_t6E8559F0FEDC952C1C97D197BC8286FDA93AB882* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	EntryU5BU5D_tE0A05522E3E044A0A153A33D678D14E918FFAD4F* V_1 = NULL;
	int32_t V_2 = 0;
	{
		KeyValuePair_2U5BU5D_t6E8559F0FEDC952C1C97D197BC8286FDA93AB882* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)3, NULL);
	}

IL_0009:
	{
		int32_t L_1 = ___1_index;
		KeyValuePair_2U5BU5D_t6E8559F0FEDC952C1C97D197BC8286FDA93AB882* L_2 = ___0_array;
		NullCheck(L_2);
		if ((!(((uint32_t)L_1) > ((uint32_t)((int32_t)(((RuntimeArray*)L_2)->max_length))))))
		{
			goto IL_0014;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0014:
	{
		KeyValuePair_2U5BU5D_t6E8559F0FEDC952C1C97D197BC8286FDA93AB882* L_3 = ___0_array;
		NullCheck(L_3);
		int32_t L_4 = ___1_index;
		int32_t L_5;
		L_5 = Dictionary_2_get_Count_mF6D5ED77BA9FBAAD59EF5BAF8999C13EAB376006(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 36));
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_3)->max_length)), L_4))) >= ((int32_t)L_5)))
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)5, NULL);
	}

IL_0027:
	{
		int32_t L_6 = (int32_t)__this->____count_2;
		V_0 = L_6;
		EntryU5BU5D_tE0A05522E3E044A0A153A33D678D14E918FFAD4F* L_7 = (EntryU5BU5D_tE0A05522E3E044A0A153A33D678D14E918FFAD4F*)__this->____entries_1;
		V_1 = L_7;
		V_2 = 0;
		goto IL_0075;
	}

IL_0039:
	{
		EntryU5BU5D_tE0A05522E3E044A0A153A33D678D14E918FFAD4F* L_8 = V_1;
		int32_t L_9 = V_2;
		NullCheck(L_8);
		int32_t L_10 = (int32_t)((L_8)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_9)))->___hashCode_0;
		if ((((int32_t)L_10) < ((int32_t)0)))
		{
			goto IL_0071;
		}
	}
	{
		KeyValuePair_2U5BU5D_t6E8559F0FEDC952C1C97D197BC8286FDA93AB882* L_11 = ___0_array;
		int32_t L_12 = ___1_index;
		int32_t L_13 = L_12;
		___1_index = ((int32_t)il2cpp_codegen_add(L_13, 1));
		EntryU5BU5D_tE0A05522E3E044A0A153A33D678D14E918FFAD4F* L_14 = V_1;
		int32_t L_15 = V_2;
		NullCheck(L_14);
		Guid_t L_16 = (Guid_t)((L_14)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_15)))->___key_2;
		EntryU5BU5D_tE0A05522E3E044A0A153A33D678D14E918FFAD4F* L_17 = V_1;
		int32_t L_18 = V_2;
		NullCheck(L_17);
		RuntimeObject* L_19 = (RuntimeObject*)((L_17)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_18)))->___value_3;
		KeyValuePair_2_t669A5BAF37ED0ABC96A30943A6E7D0442310B936 L_20;
		memset((&L_20), 0, sizeof(L_20));
		KeyValuePair_2__ctor_mAC13FF83E9E4285FF12BC8F080E0A84C51480735((&L_20), L_16, L_19, il2cpp_rgctx_method(method->klass->rgctx_data, 37));
		NullCheck(L_11);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(L_13), (KeyValuePair_2_t669A5BAF37ED0ABC96A30943A6E7D0442310B936)L_20);
	}

IL_0071:
	{
		int32_t L_21 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_21, 1));
	}

IL_0075:
	{
		int32_t L_22 = V_2;
		int32_t L_23 = V_0;
		if ((((int32_t)L_22) < ((int32_t)L_23)))
		{
			goto IL_0039;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t9FEF2496FA5DE5237C8DA17926FD4D968D685AB3 Dictionary_2_GetEnumerator_mB49B0C517100C32E16F152131A91071EB3428CBB_gshared (Dictionary_2_t9283A2526EFCCE82F0B8EBAF55887B5456F4480A* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t9FEF2496FA5DE5237C8DA17926FD4D968D685AB3 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m3FCE0E08BC1DB64AF0CC89FE635B29EEE5E82F04((&L_0), __this, 2, il2cpp_rgctx_method(method->klass->rgctx_data, 39));
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_mE07B909A881695E09C09EC90D5C1279DDE8FAC55_gshared (Dictionary_2_t9283A2526EFCCE82F0B8EBAF55887B5456F4480A* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t9FEF2496FA5DE5237C8DA17926FD4D968D685AB3 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m3FCE0E08BC1DB64AF0CC89FE635B29EEE5E82F04((&L_0), __this, 2, il2cpp_rgctx_method(method->klass->rgctx_data, 39));
		Enumerator_t9FEF2496FA5DE5237C8DA17926FD4D968D685AB3 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 38), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_GetObjectData_m53B9D88C0609A756597AC3EADC5D36215A599D2C_gshared (Dictionary_2_t9283A2526EFCCE82F0B8EBAF55887B5456F4480A* __this, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___0_info, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___1_context, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1);
		s_Il2CppMethodInitialized = true;
	}
	KeyValuePair_2U5BU5D_t6E8559F0FEDC952C1C97D197BC8286FDA93AB882* V_0 = NULL;
	RuntimeObject* G_B4_0 = NULL;
	String_t* G_B4_1 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B4_2 = NULL;
	RuntimeObject* G_B3_0 = NULL;
	String_t* G_B3_1 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B3_2 = NULL;
	String_t* G_B6_0 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B6_1 = NULL;
	String_t* G_B5_0 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B5_1 = NULL;
	int32_t G_B7_0 = 0;
	String_t* G_B7_1 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B7_2 = NULL;
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_0 = ___0_info;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)4, NULL);
	}

IL_0009:
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_1 = ___0_info;
		int32_t L_2 = (int32_t)__this->____version_5;
		NullCheck(L_1);
		SerializationInfo_AddValue_m9D6ADD10966D1FE8D19050F3A269747C23FE9FC4(L_1, _stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1, L_2, NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_3 = ___0_info;
		RuntimeObject* L_4 = (RuntimeObject*)__this->____comparer_6;
		RuntimeObject* L_5 = L_4;
		if (L_5)
		{
			G_B4_0 = L_5;
			G_B4_1 = _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9;
			G_B4_2 = L_3;
			goto IL_002f;
		}
		G_B3_0 = L_5;
		G_B3_1 = _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9;
		G_B3_2 = L_3;
	}
	{
		EqualityComparer_1_tAAD1A76C30594C4D736E586B3D77281A53A27399* L_6;
		L_6 = EqualityComparer_1_get_Default_m5DCC393F5D59545D96AF9FF747F17C72EABB5D3B_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		G_B4_0 = ((RuntimeObject*)(L_6));
		G_B4_1 = G_B3_1;
		G_B4_2 = G_B3_2;
	}

IL_002f:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 40)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		NullCheck(G_B4_2);
		SerializationInfo_AddValue_m1AD59BBF8C3129142943D3F298ADF09FF123C199(G_B4_2, G_B4_1, (RuntimeObject*)G_B4_0, L_8, NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_9 = ___0_info;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_10 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		if (!L_10)
		{
			G_B6_0 = _stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69;
			G_B6_1 = L_9;
			goto IL_0056;
		}
		G_B5_0 = _stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69;
		G_B5_1 = L_9;
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		NullCheck(L_11);
		G_B7_0 = ((int32_t)(((RuntimeArray*)L_11)->max_length));
		G_B7_1 = G_B5_0;
		G_B7_2 = G_B5_1;
		goto IL_0057;
	}

IL_0056:
	{
		G_B7_0 = 0;
		G_B7_1 = G_B6_0;
		G_B7_2 = G_B6_1;
	}

IL_0057:
	{
		NullCheck(G_B7_2);
		SerializationInfo_AddValue_m9D6ADD10966D1FE8D19050F3A269747C23FE9FC4(G_B7_2, G_B7_1, G_B7_0, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_12 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		if (!L_12)
		{
			goto IL_008e;
		}
	}
	{
		int32_t L_13;
		L_13 = Dictionary_2_get_Count_mF6D5ED77BA9FBAAD59EF5BAF8999C13EAB376006(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 36));
		KeyValuePair_2U5BU5D_t6E8559F0FEDC952C1C97D197BC8286FDA93AB882* L_14 = (KeyValuePair_2U5BU5D_t6E8559F0FEDC952C1C97D197BC8286FDA93AB882*)(KeyValuePair_2U5BU5D_t6E8559F0FEDC952C1C97D197BC8286FDA93AB882*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 41), (uint32_t)L_13);
		V_0 = L_14;
		KeyValuePair_2U5BU5D_t6E8559F0FEDC952C1C97D197BC8286FDA93AB882* L_15 = V_0;
		Dictionary_2_CopyTo_m1062474EEC0D394425E27C1869DEA2BB8DF92B41(__this, L_15, 0, il2cpp_rgctx_method(method->klass->rgctx_data, 42));
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_16 = ___0_info;
		KeyValuePair_2U5BU5D_t6E8559F0FEDC952C1C97D197BC8286FDA93AB882* L_17 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 43)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		NullCheck(L_16);
		SerializationInfo_AddValue_m1AD59BBF8C3129142943D3F298ADF09FF123C199(L_16, _stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A, (RuntimeObject*)L_17, L_19, NULL);
	}

IL_008e:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_FindEntry_mFAC5E9BB05EFD8B896D7B1EE3745B9141BC26025_gshared (Dictionary_2_t9283A2526EFCCE82F0B8EBAF55887B5456F4480A* __this, Guid_t ___0_key, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_1 = NULL;
	EntryU5BU5D_tE0A05522E3E044A0A153A33D678D14E918FFAD4F* V_2 = NULL;
	int32_t V_3 = 0;
	RuntimeObject* V_4 = NULL;
	int32_t V_5 = 0;
	Guid_t V_6;
	memset((&V_6), 0, sizeof(V_6));
	EqualityComparer_1_tAAD1A76C30594C4D736E586B3D77281A53A27399* V_7 = NULL;
	int32_t V_8 = 0;
	{
		goto IL_000e;
	}

IL_000e:
	{
		V_0 = (-1);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		V_1 = L_1;
		EntryU5BU5D_tE0A05522E3E044A0A153A33D678D14E918FFAD4F* L_2 = (EntryU5BU5D_tE0A05522E3E044A0A153A33D678D14E918FFAD4F*)__this->____entries_1;
		V_2 = L_2;
		V_3 = 0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = V_1;
		if (!L_3)
		{
			goto IL_0175;
		}
	}
	{
		RuntimeObject* L_4 = (RuntimeObject*)__this->____comparer_6;
		V_4 = L_4;
		RuntimeObject* L_5 = V_4;
		if (L_5)
		{
			goto IL_0110;
		}
	}
	{
		int32_t L_6;
		L_6 = Guid_GetHashCode_m239B7679BB9ED5A207B3D2F858B5F30FFC455408((&___0_key), il2cpp_rgctx_method(method->klass->rgctx_data, 44));
		V_5 = ((int32_t)(L_6&((int32_t)2147483647LL)));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_7 = V_1;
		int32_t L_8 = V_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = V_1;
		NullCheck(L_9);
		NullCheck(L_7);
		int32_t L_10 = ((int32_t)(L_8%((int32_t)(((RuntimeArray*)L_9)->max_length))));
		int32_t L_11 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_11, 1));
		il2cpp_codegen_initobj((&V_6), sizeof(Guid_t));
	}

IL_0066:
	{
		int32_t L_13 = V_0;
		EntryU5BU5D_tE0A05522E3E044A0A153A33D678D14E918FFAD4F* L_14 = V_2;
		NullCheck(L_14);
		if ((!(((uint32_t)L_13) < ((uint32_t)((int32_t)(((RuntimeArray*)L_14)->max_length))))))
		{
			goto IL_0175;
		}
	}
	{
		EntryU5BU5D_tE0A05522E3E044A0A153A33D678D14E918FFAD4F* L_15 = V_2;
		int32_t L_16 = V_0;
		NullCheck(L_15);
		int32_t L_17 = (int32_t)((L_15)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_16)))->___hashCode_0;
		int32_t L_18 = V_5;
		if ((!(((uint32_t)L_17) == ((uint32_t)L_18))))
		{
			goto IL_009b;
		}
	}
	{
		EqualityComparer_1_tAAD1A76C30594C4D736E586B3D77281A53A27399* L_19;
		L_19 = EqualityComparer_1_get_Default_m5DCC393F5D59545D96AF9FF747F17C72EABB5D3B_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		EntryU5BU5D_tE0A05522E3E044A0A153A33D678D14E918FFAD4F* L_20 = V_2;
		int32_t L_21 = V_0;
		NullCheck(L_20);
		Guid_t L_22 = (Guid_t)((L_20)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_21)))->___key_2;
		Guid_t L_23 = ___0_key;
		NullCheck(L_19);
		bool L_24;
		L_24 = VirtualFuncInvoker2< bool, Guid_t, Guid_t >::Invoke(8, L_19, L_22, L_23);
		if (L_24)
		{
			goto IL_0175;
		}
	}

IL_009b:
	{
		EntryU5BU5D_tE0A05522E3E044A0A153A33D678D14E918FFAD4F* L_25 = V_2;
		int32_t L_26 = V_0;
		NullCheck(L_25);
		int32_t L_27 = (int32_t)((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___next_1;
		V_0 = L_27;
		int32_t L_28 = V_3;
		EntryU5BU5D_tE0A05522E3E044A0A153A33D678D14E918FFAD4F* L_29 = V_2;
		NullCheck(L_29);
		if ((((int32_t)L_28) < ((int32_t)((int32_t)(((RuntimeArray*)L_29)->max_length)))))
		{
			goto IL_00b3;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_00b3:
	{
		int32_t L_30 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_30, 1));
		goto IL_0066;
	}

IL_0110:
	{
		RuntimeObject* L_31 = V_4;
		Guid_t L_32 = ___0_key;
		NullCheck(L_31);
		int32_t L_33;
		L_33 = InterfaceFuncInvoker1< int32_t, Guid_t >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_31, L_32);
		V_8 = ((int32_t)(L_33&((int32_t)2147483647LL)));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_34 = V_1;
		int32_t L_35 = V_8;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_36 = V_1;
		NullCheck(L_36);
		NullCheck(L_34);
		int32_t L_37 = ((int32_t)(L_35%((int32_t)(((RuntimeArray*)L_36)->max_length))));
		int32_t L_38 = (L_34)->GetAt(static_cast<il2cpp_array_size_t>(L_37));
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_38, 1));
	}

IL_012b:
	{
		int32_t L_39 = V_0;
		EntryU5BU5D_tE0A05522E3E044A0A153A33D678D14E918FFAD4F* L_40 = V_2;
		NullCheck(L_40);
		if ((!(((uint32_t)L_39) < ((uint32_t)((int32_t)(((RuntimeArray*)L_40)->max_length))))))
		{
			goto IL_0175;
		}
	}
	{
		EntryU5BU5D_tE0A05522E3E044A0A153A33D678D14E918FFAD4F* L_41 = V_2;
		int32_t L_42 = V_0;
		NullCheck(L_41);
		int32_t L_43 = (int32_t)((L_41)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_42)))->___hashCode_0;
		int32_t L_44 = V_8;
		if ((!(((uint32_t)L_43) == ((uint32_t)L_44))))
		{
			goto IL_0157;
		}
	}
	{
		RuntimeObject* L_45 = V_4;
		EntryU5BU5D_tE0A05522E3E044A0A153A33D678D14E918FFAD4F* L_46 = V_2;
		int32_t L_47 = V_0;
		NullCheck(L_46);
		Guid_t L_48 = (Guid_t)((L_46)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_47)))->___key_2;
		Guid_t L_49 = ___0_key;
		NullCheck(L_45);
		bool L_50;
		L_50 = InterfaceFuncInvoker2< bool, Guid_t, Guid_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_45, L_48, L_49);
		if (L_50)
		{
			goto IL_0175;
		}
	}

IL_0157:
	{
		EntryU5BU5D_tE0A05522E3E044A0A153A33D678D14E918FFAD4F* L_51 = V_2;
		int32_t L_52 = V_0;
		NullCheck(L_51);
		int32_t L_53 = (int32_t)((L_51)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_52)))->___next_1;
		V_0 = L_53;
		int32_t L_54 = V_3;
		EntryU5BU5D_tE0A05522E3E044A0A153A33D678D14E918FFAD4F* L_55 = V_2;
		NullCheck(L_55);
		if ((((int32_t)L_54) < ((int32_t)((int32_t)(((RuntimeArray*)L_55)->max_length)))))
		{
			goto IL_016f;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_016f:
	{
		int32_t L_56 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_56, 1));
		goto IL_012b;
	}

IL_0175:
	{
		int32_t L_57 = V_0;
		return L_57;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_Initialize_m6AB20947E419AA18B5C62E707D43A250FEDE0897_gshared (Dictionary_2_t9283A2526EFCCE82F0B8EBAF55887B5456F4480A* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___0_capacity;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = HashHelpers_GetPrime_m5B7AE10D5E76267579296C8F2CB8464AC2DE8472(L_0, NULL);
		V_0 = L_1;
		__this->____freeList_3 = (-1);
		int32_t L_2 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_2);
		__this->____buckets_0 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets_0), (void*)L_3);
		int32_t L_4 = V_0;
		EntryU5BU5D_tE0A05522E3E044A0A153A33D678D14E918FFAD4F* L_5 = (EntryU5BU5D_tE0A05522E3E044A0A153A33D678D14E918FFAD4F*)(EntryU5BU5D_tE0A05522E3E044A0A153A33D678D14E918FFAD4F*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 48), (uint32_t)L_4);
		__this->____entries_1 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____entries_1), (void*)L_5);
		int32_t L_6 = V_0;
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryInsert_mF645474D42EF0AB95FED32388F31D297085C2832_gshared (Dictionary_2_t9283A2526EFCCE82F0B8EBAF55887B5456F4480A* __this, Guid_t ___0_key, RuntimeObject* ___1_value, uint8_t ___2_behavior, const RuntimeMethod* method) 
{
	EntryU5BU5D_tE0A05522E3E044A0A153A33D678D14E918FFAD4F* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t* V_4 = NULL;
	int32_t V_5 = 0;
	bool V_6 = false;
	bool V_7 = false;
	int32_t V_8 = 0;
	int32_t* V_9 = NULL;
	Entry_t4BAC0D992203B05A8D2645406D4CF9E24E0F5BEF* V_10 = NULL;
	Guid_t V_11;
	memset((&V_11), 0, sizeof(V_11));
	EqualityComparer_1_tAAD1A76C30594C4D736E586B3D77281A53A27399* V_12 = NULL;
	int32_t V_13 = 0;
	int32_t G_B7_0 = 0;
	int32_t* G_B51_0 = NULL;
	{
		goto IL_000e;
	}

IL_000e:
	{
		int32_t L_1 = (int32_t)__this->____version_5;
		__this->____version_5 = ((int32_t)il2cpp_codegen_add(L_1, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		if (L_2)
		{
			goto IL_002c;
		}
	}
	{
		int32_t L_3;
		L_3 = Dictionary_2_Initialize_m6AB20947E419AA18B5C62E707D43A250FEDE0897(__this, 0, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
	}

IL_002c:
	{
		EntryU5BU5D_tE0A05522E3E044A0A153A33D678D14E918FFAD4F* L_4 = (EntryU5BU5D_tE0A05522E3E044A0A153A33D678D14E918FFAD4F*)__this->____entries_1;
		V_0 = L_4;
		RuntimeObject* L_5 = (RuntimeObject*)__this->____comparer_6;
		V_1 = L_5;
		RuntimeObject* L_6 = V_1;
		if (!L_6)
		{
			goto IL_0046;
		}
	}
	{
		RuntimeObject* L_7 = V_1;
		Guid_t L_8 = ___0_key;
		NullCheck(L_7);
		int32_t L_9;
		L_9 = InterfaceFuncInvoker1< int32_t, Guid_t >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_7, L_8);
		G_B7_0 = L_9;
		goto IL_0053;
	}

IL_0046:
	{
		int32_t L_10;
		L_10 = Guid_GetHashCode_m239B7679BB9ED5A207B3D2F858B5F30FFC455408((&___0_key), il2cpp_rgctx_method(method->klass->rgctx_data, 44));
		G_B7_0 = L_10;
	}

IL_0053:
	{
		V_2 = ((int32_t)(G_B7_0&((int32_t)2147483647LL)));
		V_3 = 0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		int32_t L_12 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_13 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		NullCheck(L_13);
		NullCheck(L_11);
		V_4 = ((L_11)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_12%((int32_t)(((RuntimeArray*)L_13)->max_length)))))));
		int32_t* L_14 = V_4;
		int32_t L_15 = *((int32_t*)L_14);
		V_5 = ((int32_t)il2cpp_codegen_subtract(L_15, 1));
		RuntimeObject* L_16 = V_1;
		if (L_16)
		{
			goto IL_0187;
		}
	}
	{
		il2cpp_codegen_initobj((&V_11), sizeof(Guid_t));
	}

IL_0091:
	{
		int32_t L_18 = V_5;
		EntryU5BU5D_tE0A05522E3E044A0A153A33D678D14E918FFAD4F* L_19 = V_0;
		NullCheck(L_19);
		if ((!(((uint32_t)L_18) < ((uint32_t)((int32_t)(((RuntimeArray*)L_19)->max_length))))))
		{
			goto IL_01f9;
		}
	}
	{
		EntryU5BU5D_tE0A05522E3E044A0A153A33D678D14E918FFAD4F* L_20 = V_0;
		int32_t L_21 = V_5;
		NullCheck(L_20);
		int32_t L_22 = (int32_t)((L_20)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_21)))->___hashCode_0;
		int32_t L_23 = V_2;
		if ((!(((uint32_t)L_22) == ((uint32_t)L_23))))
		{
			goto IL_00ea;
		}
	}
	{
		EqualityComparer_1_tAAD1A76C30594C4D736E586B3D77281A53A27399* L_24;
		L_24 = EqualityComparer_1_get_Default_m5DCC393F5D59545D96AF9FF747F17C72EABB5D3B_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		EntryU5BU5D_tE0A05522E3E044A0A153A33D678D14E918FFAD4F* L_25 = V_0;
		int32_t L_26 = V_5;
		NullCheck(L_25);
		Guid_t L_27 = (Guid_t)((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___key_2;
		Guid_t L_28 = ___0_key;
		NullCheck(L_24);
		bool L_29;
		L_29 = VirtualFuncInvoker2< bool, Guid_t, Guid_t >::Invoke(8, L_24, L_27, L_28);
		if (!L_29)
		{
			goto IL_00ea;
		}
	}
	{
		uint8_t L_30 = ___2_behavior;
		if ((!(((uint32_t)L_30) == ((uint32_t)1))))
		{
			goto IL_00d9;
		}
	}
	{
		EntryU5BU5D_tE0A05522E3E044A0A153A33D678D14E918FFAD4F* L_31 = V_0;
		int32_t L_32 = V_5;
		NullCheck(L_31);
		RuntimeObject* L_33 = ___1_value;
		((L_31)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_32)))->___value_3 = L_33;
		Il2CppCodeGenWriteBarrier((void**)(&((L_31)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_32)))->___value_3), (void*)L_33);
		return (bool)1;
	}

IL_00d9:
	{
		uint8_t L_34 = ___2_behavior;
		if ((!(((uint32_t)L_34) == ((uint32_t)2))))
		{
			goto IL_00e8;
		}
	}
	{
		Guid_t L_35 = ___0_key;
		Guid_t L_36 = L_35;
		RuntimeObject* L_37 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14), &L_36);
		ThrowHelper_ThrowAddingDuplicateWithKeyArgumentException_m013C856C16A63018719A6096727CB43E1918CDE5(L_37, NULL);
	}

IL_00e8:
	{
		return (bool)0;
	}

IL_00ea:
	{
		EntryU5BU5D_tE0A05522E3E044A0A153A33D678D14E918FFAD4F* L_38 = V_0;
		int32_t L_39 = V_5;
		NullCheck(L_38);
		int32_t L_40 = (int32_t)((L_38)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_39)))->___next_1;
		V_5 = L_40;
		int32_t L_41 = V_3;
		EntryU5BU5D_tE0A05522E3E044A0A153A33D678D14E918FFAD4F* L_42 = V_0;
		NullCheck(L_42);
		if ((((int32_t)L_41) < ((int32_t)((int32_t)(((RuntimeArray*)L_42)->max_length)))))
		{
			goto IL_0104;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_0104:
	{
		int32_t L_43 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_43, 1));
		goto IL_0091;
	}

IL_0187:
	{
		int32_t L_44 = V_5;
		EntryU5BU5D_tE0A05522E3E044A0A153A33D678D14E918FFAD4F* L_45 = V_0;
		NullCheck(L_45);
		if ((!(((uint32_t)L_44) < ((uint32_t)((int32_t)(((RuntimeArray*)L_45)->max_length))))))
		{
			goto IL_01f9;
		}
	}
	{
		EntryU5BU5D_tE0A05522E3E044A0A153A33D678D14E918FFAD4F* L_46 = V_0;
		int32_t L_47 = V_5;
		NullCheck(L_46);
		int32_t L_48 = (int32_t)((L_46)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_47)))->___hashCode_0;
		int32_t L_49 = V_2;
		if ((!(((uint32_t)L_48) == ((uint32_t)L_49))))
		{
			goto IL_01d9;
		}
	}
	{
		RuntimeObject* L_50 = V_1;
		EntryU5BU5D_tE0A05522E3E044A0A153A33D678D14E918FFAD4F* L_51 = V_0;
		int32_t L_52 = V_5;
		NullCheck(L_51);
		Guid_t L_53 = (Guid_t)((L_51)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_52)))->___key_2;
		Guid_t L_54 = ___0_key;
		NullCheck(L_50);
		bool L_55;
		L_55 = InterfaceFuncInvoker2< bool, Guid_t, Guid_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_50, L_53, L_54);
		if (!L_55)
		{
			goto IL_01d9;
		}
	}
	{
		uint8_t L_56 = ___2_behavior;
		if ((!(((uint32_t)L_56) == ((uint32_t)1))))
		{
			goto IL_01c8;
		}
	}
	{
		EntryU5BU5D_tE0A05522E3E044A0A153A33D678D14E918FFAD4F* L_57 = V_0;
		int32_t L_58 = V_5;
		NullCheck(L_57);
		RuntimeObject* L_59 = ___1_value;
		((L_57)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_58)))->___value_3 = L_59;
		Il2CppCodeGenWriteBarrier((void**)(&((L_57)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_58)))->___value_3), (void*)L_59);
		return (bool)1;
	}

IL_01c8:
	{
		uint8_t L_60 = ___2_behavior;
		if ((!(((uint32_t)L_60) == ((uint32_t)2))))
		{
			goto IL_01d7;
		}
	}
	{
		Guid_t L_61 = ___0_key;
		Guid_t L_62 = L_61;
		RuntimeObject* L_63 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14), &L_62);
		ThrowHelper_ThrowAddingDuplicateWithKeyArgumentException_m013C856C16A63018719A6096727CB43E1918CDE5(L_63, NULL);
	}

IL_01d7:
	{
		return (bool)0;
	}

IL_01d9:
	{
		EntryU5BU5D_tE0A05522E3E044A0A153A33D678D14E918FFAD4F* L_64 = V_0;
		int32_t L_65 = V_5;
		NullCheck(L_64);
		int32_t L_66 = (int32_t)((L_64)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_65)))->___next_1;
		V_5 = L_66;
		int32_t L_67 = V_3;
		EntryU5BU5D_tE0A05522E3E044A0A153A33D678D14E918FFAD4F* L_68 = V_0;
		NullCheck(L_68);
		if ((((int32_t)L_67) < ((int32_t)((int32_t)(((RuntimeArray*)L_68)->max_length)))))
		{
			goto IL_01f3;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_01f3:
	{
		int32_t L_69 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_69, 1));
		goto IL_0187;
	}

IL_01f9:
	{
		V_6 = (bool)0;
		V_7 = (bool)0;
		int32_t L_70 = (int32_t)__this->____freeCount_4;
		if ((((int32_t)L_70) <= ((int32_t)0)))
		{
			goto IL_0223;
		}
	}
	{
		int32_t L_71 = (int32_t)__this->____freeList_3;
		V_8 = L_71;
		V_7 = (bool)1;
		int32_t L_72 = (int32_t)__this->____freeCount_4;
		__this->____freeCount_4 = ((int32_t)il2cpp_codegen_subtract(L_72, 1));
		goto IL_0250;
	}

IL_0223:
	{
		int32_t L_73 = (int32_t)__this->____count_2;
		V_13 = L_73;
		int32_t L_74 = V_13;
		EntryU5BU5D_tE0A05522E3E044A0A153A33D678D14E918FFAD4F* L_75 = V_0;
		NullCheck(L_75);
		if ((!(((uint32_t)L_74) == ((uint32_t)((int32_t)(((RuntimeArray*)L_75)->max_length))))))
		{
			goto IL_023b;
		}
	}
	{
		Dictionary_2_Resize_mD0ED6CF807DB5F81267858F36B29C1A2C58C1173(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 49));
		V_6 = (bool)1;
	}

IL_023b:
	{
		int32_t L_76 = V_13;
		V_8 = L_76;
		int32_t L_77 = V_13;
		__this->____count_2 = ((int32_t)il2cpp_codegen_add(L_77, 1));
		EntryU5BU5D_tE0A05522E3E044A0A153A33D678D14E918FFAD4F* L_78 = (EntryU5BU5D_tE0A05522E3E044A0A153A33D678D14E918FFAD4F*)__this->____entries_1;
		V_0 = L_78;
	}

IL_0250:
	{
		bool L_79 = V_6;
		if (L_79)
		{
			goto IL_0258;
		}
	}
	{
		int32_t* L_80 = V_4;
		G_B51_0 = L_80;
		goto IL_026d;
	}

IL_0258:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_81 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		int32_t L_82 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_83 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		NullCheck(L_83);
		NullCheck(L_81);
		G_B51_0 = ((L_81)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_82%((int32_t)(((RuntimeArray*)L_83)->max_length)))))));
	}

IL_026d:
	{
		V_9 = G_B51_0;
		EntryU5BU5D_tE0A05522E3E044A0A153A33D678D14E918FFAD4F* L_84 = V_0;
		int32_t L_85 = V_8;
		NullCheck(L_84);
		V_10 = ((L_84)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_85)));
		bool L_86 = V_7;
		if (!L_86)
		{
			goto IL_028a;
		}
	}
	{
		Entry_t4BAC0D992203B05A8D2645406D4CF9E24E0F5BEF* L_87 = V_10;
		int32_t L_88 = (int32_t)L_87->___next_1;
		__this->____freeList_3 = L_88;
	}

IL_028a:
	{
		Entry_t4BAC0D992203B05A8D2645406D4CF9E24E0F5BEF* L_89 = V_10;
		int32_t L_90 = V_2;
		L_89->___hashCode_0 = L_90;
		Entry_t4BAC0D992203B05A8D2645406D4CF9E24E0F5BEF* L_91 = V_10;
		int32_t* L_92 = V_9;
		int32_t L_93 = *((int32_t*)L_92);
		L_91->___next_1 = ((int32_t)il2cpp_codegen_subtract(L_93, 1));
		Entry_t4BAC0D992203B05A8D2645406D4CF9E24E0F5BEF* L_94 = V_10;
		Guid_t L_95 = ___0_key;
		L_94->___key_2 = L_95;
		Entry_t4BAC0D992203B05A8D2645406D4CF9E24E0F5BEF* L_96 = V_10;
		RuntimeObject* L_97 = ___1_value;
		L_96->___value_3 = L_97;
		Il2CppCodeGenWriteBarrier((void**)(&L_96->___value_3), (void*)L_97);
		int32_t* L_98 = V_9;
		int32_t L_99 = V_8;
		*((int32_t*)L_98) = (int32_t)((int32_t)il2cpp_codegen_add(L_99, 1));
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_OnDeserialization_m051818947173E0A850B7869E4F474BB63C24DC75_gshared (Dictionary_2_t9283A2526EFCCE82F0B8EBAF55887B5456F4480A* __this, RuntimeObject* ___0_sender, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConditionalWeakTable_2_Remove_mEA61545EA43662F3718895F4E435A1F3EFB9756E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConditionalWeakTable_2_TryGetValue_m8AB467BA44D1FF9EBDB9735CED88B0D67AC6403F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1);
		s_Il2CppMethodInitialized = true;
	}
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	KeyValuePair_2U5BU5D_t6E8559F0FEDC952C1C97D197BC8286FDA93AB882* V_3 = NULL;
	int32_t V_4 = 0;
	{
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* L_0;
		L_0 = HashHelpers_get_SerializationInfoTable_m8C17D5483B39B68897AEFFD14A9E139AF858222F(NULL);
		NullCheck(L_0);
		bool L_1;
		L_1 = ConditionalWeakTable_2_TryGetValue_m8AB467BA44D1FF9EBDB9735CED88B0D67AC6403F(L_0, (RuntimeObject*)__this, (&V_0), ConditionalWeakTable_2_TryGetValue_m8AB467BA44D1FF9EBDB9735CED88B0D67AC6403F_RuntimeMethod_var);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_2 = V_0;
		if (L_2)
		{
			goto IL_0012;
		}
	}
	{
		return;
	}

IL_0012:
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_3 = V_0;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = SerializationInfo_GetInt32_m7731402825C7FC8D0673F7610D555615F95E4FB5(L_3, _stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1, NULL);
		V_1 = L_4;
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_5 = V_0;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = SerializationInfo_GetInt32_m7731402825C7FC8D0673F7610D555615F95E4FB5(L_5, _stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69, NULL);
		V_2 = L_6;
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_7 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 40)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		NullCheck(L_7);
		RuntimeObject* L_10;
		L_10 = SerializationInfo_GetValue_mE6091C2E906E113455D05E734C86F43B8E1D1034(L_7, _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9, L_9, NULL);
		__this->____comparer_6 = ((RuntimeObject*)Castclass((RuntimeObject*)L_10, il2cpp_rgctx_data(method->klass->rgctx_data, 1)));
		Il2CppCodeGenWriteBarrier((void**)(&__this->____comparer_6), (void*)((RuntimeObject*)Castclass((RuntimeObject*)L_10, il2cpp_rgctx_data(method->klass->rgctx_data, 1))));
		int32_t L_11 = V_2;
		if (!L_11)
		{
			goto IL_00c9;
		}
	}
	{
		int32_t L_12 = V_2;
		int32_t L_13;
		L_13 = Dictionary_2_Initialize_m6AB20947E419AA18B5C62E707D43A250FEDE0897(__this, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_14 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_15 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 43)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_16;
		L_16 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_15, NULL);
		NullCheck(L_14);
		RuntimeObject* L_17;
		L_17 = SerializationInfo_GetValue_mE6091C2E906E113455D05E734C86F43B8E1D1034(L_14, _stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A, L_16, NULL);
		V_3 = ((KeyValuePair_2U5BU5D_t6E8559F0FEDC952C1C97D197BC8286FDA93AB882*)Castclass((RuntimeObject*)L_17, il2cpp_rgctx_data(method->klass->rgctx_data, 35)));
		KeyValuePair_2U5BU5D_t6E8559F0FEDC952C1C97D197BC8286FDA93AB882* L_18 = V_3;
		if (L_18)
		{
			goto IL_007a;
		}
	}
	{
		ThrowHelper_ThrowSerializationException_m03BE2B48CD3617C32FBCEE16030F7C5563E04E16((int32_t)((int32_t)16), NULL);
	}

IL_007a:
	{
		V_4 = 0;
		goto IL_00c0;
	}

IL_007f:
	{
		KeyValuePair_2U5BU5D_t6E8559F0FEDC952C1C97D197BC8286FDA93AB882* L_19 = V_3;
		int32_t L_20 = V_4;
		NullCheck(L_19);
		Guid_t L_21;
		L_21 = KeyValuePair_2_get_Key_mF91DB02B44EED18B0673E6F2CA20021DF3055E1F_inline(((L_19)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_20))), il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		goto IL_009a;
	}

IL_009a:
	{
		KeyValuePair_2U5BU5D_t6E8559F0FEDC952C1C97D197BC8286FDA93AB882* L_22 = V_3;
		int32_t L_23 = V_4;
		NullCheck(L_22);
		Guid_t L_24;
		L_24 = KeyValuePair_2_get_Key_mF91DB02B44EED18B0673E6F2CA20021DF3055E1F_inline(((L_22)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_23))), il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		KeyValuePair_2U5BU5D_t6E8559F0FEDC952C1C97D197BC8286FDA93AB882* L_25 = V_3;
		int32_t L_26 = V_4;
		NullCheck(L_25);
		RuntimeObject* L_27;
		L_27 = KeyValuePair_2_get_Value_m2A56B01BF54F80055FA9D4B744AD9DBDC6EAE22D_inline(((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26))), il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		Dictionary_2_Add_m33B42C2DBAD6AA659C75AE78EB373B8577F9710B(__this, L_24, L_27, il2cpp_rgctx_method(method->klass->rgctx_data, 16));
		int32_t L_28 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_28, 1));
	}

IL_00c0:
	{
		int32_t L_29 = V_4;
		KeyValuePair_2U5BU5D_t6E8559F0FEDC952C1C97D197BC8286FDA93AB882* L_30 = V_3;
		NullCheck(L_30);
		if ((((int32_t)L_29) < ((int32_t)((int32_t)(((RuntimeArray*)L_30)->max_length)))))
		{
			goto IL_007f;
		}
	}
	{
		goto IL_00d0;
	}

IL_00c9:
	{
		__this->____buckets_0 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets_0), (void*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL);
	}

IL_00d0:
	{
		int32_t L_31 = V_1;
		__this->____version_5 = L_31;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* L_32;
		L_32 = HashHelpers_get_SerializationInfoTable_m8C17D5483B39B68897AEFFD14A9E139AF858222F(NULL);
		NullCheck(L_32);
		bool L_33;
		L_33 = ConditionalWeakTable_2_Remove_mEA61545EA43662F3718895F4E435A1F3EFB9756E(L_32, (RuntimeObject*)__this, ConditionalWeakTable_2_Remove_mEA61545EA43662F3718895F4E435A1F3EFB9756E_RuntimeMethod_var);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_mD0ED6CF807DB5F81267858F36B29C1A2C58C1173_gshared (Dictionary_2_t9283A2526EFCCE82F0B8EBAF55887B5456F4480A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = (int32_t)__this->____count_2;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = HashHelpers_ExpandPrime_m9A35EC171AA0EA16F7C9F71EE6FAD5A82565ADB9(L_0, NULL);
		Dictionary_2_Resize_mDB466CFDC6255A9CEE96C543CA0886C1D5D53CFB(__this, L_1, (bool)0, il2cpp_rgctx_method(method->klass->rgctx_data, 51));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_mDB466CFDC6255A9CEE96C543CA0886C1D5D53CFB_gshared (Dictionary_2_t9283A2526EFCCE82F0B8EBAF55887B5456F4480A* __this, int32_t ___0_newSize, bool ___1_forceNewHashCodes, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_0 = NULL;
	EntryU5BU5D_tE0A05522E3E044A0A153A33D678D14E918FFAD4F* V_1 = NULL;
	int32_t V_2 = 0;
	Guid_t V_3;
	memset((&V_3), 0, sizeof(V_3));
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	{
		int32_t L_0 = ___0_newSize;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_0);
		V_0 = L_1;
		int32_t L_2 = ___0_newSize;
		EntryU5BU5D_tE0A05522E3E044A0A153A33D678D14E918FFAD4F* L_3 = (EntryU5BU5D_tE0A05522E3E044A0A153A33D678D14E918FFAD4F*)(EntryU5BU5D_tE0A05522E3E044A0A153A33D678D14E918FFAD4F*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 48), (uint32_t)L_2);
		V_1 = L_3;
		int32_t L_4 = (int32_t)__this->____count_2;
		V_2 = L_4;
		EntryU5BU5D_tE0A05522E3E044A0A153A33D678D14E918FFAD4F* L_5 = (EntryU5BU5D_tE0A05522E3E044A0A153A33D678D14E918FFAD4F*)__this->____entries_1;
		EntryU5BU5D_tE0A05522E3E044A0A153A33D678D14E918FFAD4F* L_6 = V_1;
		int32_t L_7 = V_2;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_5, 0, (RuntimeArray*)L_6, 0, L_7, NULL);
		il2cpp_codegen_initobj((&V_3), sizeof(Guid_t));
		Guid_t L_8 = V_3;
		bool L_9 = ___1_forceNewHashCodes;
		if (!((int32_t)((int32_t)false&(int32_t)L_9)))
		{
			goto IL_0084;
		}
	}
	{
		V_4 = 0;
		goto IL_007f;
	}

IL_003e:
	{
		EntryU5BU5D_tE0A05522E3E044A0A153A33D678D14E918FFAD4F* L_10 = V_1;
		int32_t L_11 = V_4;
		NullCheck(L_10);
		int32_t L_12 = (int32_t)((L_10)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_11)))->___hashCode_0;
		if ((((int32_t)L_12) < ((int32_t)0)))
		{
			goto IL_0079;
		}
	}
	{
		EntryU5BU5D_tE0A05522E3E044A0A153A33D678D14E918FFAD4F* L_13 = V_1;
		int32_t L_14 = V_4;
		NullCheck(L_13);
		EntryU5BU5D_tE0A05522E3E044A0A153A33D678D14E918FFAD4F* L_15 = V_1;
		int32_t L_16 = V_4;
		NullCheck(L_15);
		Guid_t* L_17 = (Guid_t*)(&((L_15)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_16)))->___key_2);
		int32_t L_18;
		L_18 = Guid_GetHashCode_m239B7679BB9ED5A207B3D2F858B5F30FFC455408(L_17, il2cpp_rgctx_method(method->klass->rgctx_data, 44));
		((L_13)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_14)))->___hashCode_0 = ((int32_t)(L_18&((int32_t)2147483647LL)));
	}

IL_0079:
	{
		int32_t L_19 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_19, 1));
	}

IL_007f:
	{
		int32_t L_20 = V_4;
		int32_t L_21 = V_2;
		if ((((int32_t)L_20) < ((int32_t)L_21)))
		{
			goto IL_003e;
		}
	}

IL_0084:
	{
		V_5 = 0;
		goto IL_00cb;
	}

IL_0089:
	{
		EntryU5BU5D_tE0A05522E3E044A0A153A33D678D14E918FFAD4F* L_22 = V_1;
		int32_t L_23 = V_5;
		NullCheck(L_22);
		int32_t L_24 = (int32_t)((L_22)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_23)))->___hashCode_0;
		if ((((int32_t)L_24) < ((int32_t)0)))
		{
			goto IL_00c5;
		}
	}
	{
		EntryU5BU5D_tE0A05522E3E044A0A153A33D678D14E918FFAD4F* L_25 = V_1;
		int32_t L_26 = V_5;
		NullCheck(L_25);
		int32_t L_27 = (int32_t)((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___hashCode_0;
		int32_t L_28 = ___0_newSize;
		V_6 = ((int32_t)(L_27%L_28));
		EntryU5BU5D_tE0A05522E3E044A0A153A33D678D14E918FFAD4F* L_29 = V_1;
		int32_t L_30 = V_5;
		NullCheck(L_29);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_31 = V_0;
		int32_t L_32 = V_6;
		NullCheck(L_31);
		int32_t L_33 = L_32;
		int32_t L_34 = (L_31)->GetAt(static_cast<il2cpp_array_size_t>(L_33));
		((L_29)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_30)))->___next_1 = ((int32_t)il2cpp_codegen_subtract(L_34, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_35 = V_0;
		int32_t L_36 = V_6;
		int32_t L_37 = V_5;
		NullCheck(L_35);
		(L_35)->SetAt(static_cast<il2cpp_array_size_t>(L_36), (int32_t)((int32_t)il2cpp_codegen_add(L_37, 1)));
	}

IL_00c5:
	{
		int32_t L_38 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_38, 1));
	}

IL_00cb:
	{
		int32_t L_39 = V_5;
		int32_t L_40 = V_2;
		if ((((int32_t)L_39) < ((int32_t)L_40)))
		{
			goto IL_0089;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_41 = V_0;
		__this->____buckets_0 = L_41;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets_0), (void*)L_41);
		EntryU5BU5D_tE0A05522E3E044A0A153A33D678D14E918FFAD4F* L_42 = V_1;
		__this->____entries_1 = L_42;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____entries_1), (void*)L_42);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_mF52F83A179ACE0E308B993508A68C35895ED5D8F_gshared (Dictionary_2_t9283A2526EFCCE82F0B8EBAF55887B5456F4480A* __this, Guid_t ___0_key, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	Entry_t4BAC0D992203B05A8D2645406D4CF9E24E0F5BEF* V_4 = NULL;
	RuntimeObject* G_B5_0 = NULL;
	RuntimeObject* G_B4_0 = NULL;
	int32_t G_B6_0 = 0;
	RuntimeObject* G_B10_0 = NULL;
	RuntimeObject* G_B9_0 = NULL;
	bool G_B11_0 = false;
	{
		goto IL_000e;
	}

IL_000e:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		if (!L_1)
		{
			goto IL_0149;
		}
	}
	{
		RuntimeObject* L_2 = (RuntimeObject*)__this->____comparer_6;
		RuntimeObject* L_3 = L_2;
		if (L_3)
		{
			G_B5_0 = L_3;
			goto IL_0032;
		}
		G_B4_0 = L_3;
	}
	{
		int32_t L_4;
		L_4 = Guid_GetHashCode_m239B7679BB9ED5A207B3D2F858B5F30FFC455408((&___0_key), il2cpp_rgctx_method(method->klass->rgctx_data, 44));
		G_B6_0 = L_4;
		goto IL_0038;
	}

IL_0032:
	{
		Guid_t L_5 = ___0_key;
		NullCheck(G_B5_0);
		int32_t L_6;
		L_6 = InterfaceFuncInvoker1< int32_t, Guid_t >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 1), G_B5_0, L_5);
		G_B6_0 = L_6;
	}

IL_0038:
	{
		V_0 = ((int32_t)(G_B6_0&((int32_t)2147483647LL)));
		int32_t L_7 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_8 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		NullCheck(L_8);
		V_1 = ((int32_t)(L_7%((int32_t)(((RuntimeArray*)L_8)->max_length))));
		V_2 = (-1);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		int32_t L_10 = V_1;
		NullCheck(L_9);
		int32_t L_11 = L_10;
		int32_t L_12 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		V_3 = ((int32_t)il2cpp_codegen_subtract(L_12, 1));
		goto IL_0142;
	}

IL_005c:
	{
		EntryU5BU5D_tE0A05522E3E044A0A153A33D678D14E918FFAD4F* L_13 = (EntryU5BU5D_tE0A05522E3E044A0A153A33D678D14E918FFAD4F*)__this->____entries_1;
		int32_t L_14 = V_3;
		NullCheck(L_13);
		V_4 = ((L_13)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_14)));
		Entry_t4BAC0D992203B05A8D2645406D4CF9E24E0F5BEF* L_15 = V_4;
		int32_t L_16 = (int32_t)L_15->___hashCode_0;
		int32_t L_17 = V_0;
		if ((!(((uint32_t)L_16) == ((uint32_t)L_17))))
		{
			goto IL_0138;
		}
	}
	{
		RuntimeObject* L_18 = (RuntimeObject*)__this->____comparer_6;
		RuntimeObject* L_19 = L_18;
		if (L_19)
		{
			G_B10_0 = L_19;
			goto IL_0095;
		}
		G_B9_0 = L_19;
	}
	{
		EqualityComparer_1_tAAD1A76C30594C4D736E586B3D77281A53A27399* L_20;
		L_20 = EqualityComparer_1_get_Default_m5DCC393F5D59545D96AF9FF747F17C72EABB5D3B_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		Entry_t4BAC0D992203B05A8D2645406D4CF9E24E0F5BEF* L_21 = V_4;
		Guid_t L_22 = (Guid_t)L_21->___key_2;
		Guid_t L_23 = ___0_key;
		NullCheck(L_20);
		bool L_24;
		L_24 = VirtualFuncInvoker2< bool, Guid_t, Guid_t >::Invoke(8, L_20, L_22, L_23);
		G_B11_0 = L_24;
		goto IL_00a2;
	}

IL_0095:
	{
		Entry_t4BAC0D992203B05A8D2645406D4CF9E24E0F5BEF* L_25 = V_4;
		Guid_t L_26 = (Guid_t)L_25->___key_2;
		Guid_t L_27 = ___0_key;
		NullCheck(G_B10_0);
		bool L_28;
		L_28 = InterfaceFuncInvoker2< bool, Guid_t, Guid_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 1), G_B10_0, L_26, L_27);
		G_B11_0 = L_28;
	}

IL_00a2:
	{
		if (!G_B11_0)
		{
			goto IL_0138;
		}
	}
	{
		int32_t L_29 = V_2;
		if ((((int32_t)L_29) >= ((int32_t)0)))
		{
			goto IL_00be;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_30 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		int32_t L_31 = V_1;
		Entry_t4BAC0D992203B05A8D2645406D4CF9E24E0F5BEF* L_32 = V_4;
		int32_t L_33 = (int32_t)L_32->___next_1;
		NullCheck(L_30);
		(L_30)->SetAt(static_cast<il2cpp_array_size_t>(L_31), (int32_t)((int32_t)il2cpp_codegen_add(L_33, 1)));
		goto IL_00d6;
	}

IL_00be:
	{
		EntryU5BU5D_tE0A05522E3E044A0A153A33D678D14E918FFAD4F* L_34 = (EntryU5BU5D_tE0A05522E3E044A0A153A33D678D14E918FFAD4F*)__this->____entries_1;
		int32_t L_35 = V_2;
		NullCheck(L_34);
		Entry_t4BAC0D992203B05A8D2645406D4CF9E24E0F5BEF* L_36 = V_4;
		int32_t L_37 = (int32_t)L_36->___next_1;
		((L_34)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_35)))->___next_1 = L_37;
	}

IL_00d6:
	{
		Entry_t4BAC0D992203B05A8D2645406D4CF9E24E0F5BEF* L_38 = V_4;
		L_38->___hashCode_0 = (-1);
		Entry_t4BAC0D992203B05A8D2645406D4CF9E24E0F5BEF* L_39 = V_4;
		int32_t L_40 = (int32_t)__this->____freeList_3;
		L_39->___next_1 = L_40;
		goto IL_00ff;
	}

IL_00ff:
	{
	}
	{
		Entry_t4BAC0D992203B05A8D2645406D4CF9E24E0F5BEF* L_41 = V_4;
		RuntimeObject** L_42 = (RuntimeObject**)(&L_41->___value_3);
		il2cpp_codegen_initobj(L_42, sizeof(RuntimeObject*));
	}

IL_0113:
	{
		int32_t L_43 = V_3;
		__this->____freeList_3 = L_43;
		int32_t L_44 = (int32_t)__this->____freeCount_4;
		__this->____freeCount_4 = ((int32_t)il2cpp_codegen_add(L_44, 1));
		int32_t L_45 = (int32_t)__this->____version_5;
		__this->____version_5 = ((int32_t)il2cpp_codegen_add(L_45, 1));
		return (bool)1;
	}

IL_0138:
	{
		int32_t L_46 = V_3;
		V_2 = L_46;
		Entry_t4BAC0D992203B05A8D2645406D4CF9E24E0F5BEF* L_47 = V_4;
		int32_t L_48 = (int32_t)L_47->___next_1;
		V_3 = L_48;
	}

IL_0142:
	{
		int32_t L_49 = V_3;
		if ((((int32_t)L_49) >= ((int32_t)0)))
		{
			goto IL_005c;
		}
	}

IL_0149:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_mE1D4EB8E35047347D05CF24CE7482F447D77EB9D_gshared (Dictionary_2_t9283A2526EFCCE82F0B8EBAF55887B5456F4480A* __this, Guid_t ___0_key, RuntimeObject** ___1_value, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		Guid_t L_0 = ___0_key;
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_mFAC5E9BB05EFD8B896D7B1EE3745B9141BC26025(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 28));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0025;
		}
	}
	{
		RuntimeObject** L_3 = ___1_value;
		EntryU5BU5D_tE0A05522E3E044A0A153A33D678D14E918FFAD4F* L_4 = (EntryU5BU5D_tE0A05522E3E044A0A153A33D678D14E918FFAD4F*)__this->____entries_1;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		RuntimeObject* L_6 = (RuntimeObject*)((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)))->___value_3;
		*(RuntimeObject**)L_3 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_3, (void*)L_6);
		return (bool)1;
	}

IL_0025:
	{
		RuntimeObject** L_7 = ___1_value;
		il2cpp_codegen_initobj(L_7, sizeof(RuntimeObject*));
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryAdd_mE24F2E023FDF3302DE11198EE0F1FFBBC38914B0_gshared (Dictionary_2_t9283A2526EFCCE82F0B8EBAF55887B5456F4480A* __this, Guid_t ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) 
{
	{
		Guid_t L_0 = ___0_key;
		RuntimeObject* L_1 = ___1_value;
		bool L_2;
		L_2 = Dictionary_2_TryInsert_mF645474D42EF0AB95FED32388F31D297085C2832(__this, L_0, L_1, (uint8_t)0, il2cpp_rgctx_method(method->klass->rgctx_data, 29));
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m53D479673B12CABA10E9FD2982CEB1F4B1E76607_gshared (Dictionary_2_t9283A2526EFCCE82F0B8EBAF55887B5456F4480A* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m489459537D6AB7DC238E46ADF1DC0401D1071E24_gshared (Dictionary_2_t9283A2526EFCCE82F0B8EBAF55887B5456F4480A* __this, KeyValuePair_2U5BU5D_t6E8559F0FEDC952C1C97D197BC8286FDA93AB882* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		KeyValuePair_2U5BU5D_t6E8559F0FEDC952C1C97D197BC8286FDA93AB882* L_0 = ___0_array;
		int32_t L_1 = ___1_index;
		Dictionary_2_CopyTo_m1062474EEC0D394425E27C1869DEA2BB8DF92B41(__this, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 42));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_ICollection_CopyTo_mE41BC526507334B879A4BA1905150F48214A37F5_gshared (Dictionary_2_t9283A2526EFCCE82F0B8EBAF55887B5456F4480A* __this, RuntimeArray* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	KeyValuePair_2U5BU5D_t6E8559F0FEDC952C1C97D197BC8286FDA93AB882* V_0 = NULL;
	DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533* V_1 = NULL;
	EntryU5BU5D_tE0A05522E3E044A0A153A33D678D14E918FFAD4F* V_2 = NULL;
	int32_t V_3 = 0;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_4 = NULL;
	int32_t V_5 = 0;
	EntryU5BU5D_tE0A05522E3E044A0A153A33D678D14E918FFAD4F* V_6 = NULL;
	int32_t V_7 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeArray* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)3, NULL);
	}

IL_0009:
	{
		RuntimeArray* L_1 = ___0_array;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(L_1, NULL);
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0018;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)7, NULL);
	}

IL_0018:
	{
		RuntimeArray* L_3 = ___0_array;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(L_3, 0, NULL);
		if (!L_4)
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)6, NULL);
	}

IL_0027:
	{
		int32_t L_5 = ___1_index;
		RuntimeArray* L_6 = ___0_array;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(L_6, NULL);
		if ((!(((uint32_t)L_5) > ((uint32_t)L_7))))
		{
			goto IL_0035;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0035:
	{
		RuntimeArray* L_8 = ___0_array;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(L_8, NULL);
		int32_t L_10 = ___1_index;
		int32_t L_11;
		L_11 = Dictionary_2_get_Count_mF6D5ED77BA9FBAAD59EF5BAF8999C13EAB376006(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 36));
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_9, L_10))) >= ((int32_t)L_11)))
		{
			goto IL_004b;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)5, NULL);
	}

IL_004b:
	{
		RuntimeArray* L_12 = ___0_array;
		V_0 = ((KeyValuePair_2U5BU5D_t6E8559F0FEDC952C1C97D197BC8286FDA93AB882*)IsInst((RuntimeObject*)L_12, il2cpp_rgctx_data(method->klass->rgctx_data, 35)));
		KeyValuePair_2U5BU5D_t6E8559F0FEDC952C1C97D197BC8286FDA93AB882* L_13 = V_0;
		if (!L_13)
		{
			goto IL_005e;
		}
	}
	{
		KeyValuePair_2U5BU5D_t6E8559F0FEDC952C1C97D197BC8286FDA93AB882* L_14 = V_0;
		int32_t L_15 = ___1_index;
		Dictionary_2_CopyTo_m1062474EEC0D394425E27C1869DEA2BB8DF92B41(__this, L_14, L_15, il2cpp_rgctx_method(method->klass->rgctx_data, 42));
		return;
	}

IL_005e:
	{
		RuntimeArray* L_16 = ___0_array;
		V_1 = ((DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533*)IsInst((RuntimeObject*)L_16, DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533_il2cpp_TypeInfo_var));
		DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533* L_17 = V_1;
		if (!L_17)
		{
			goto IL_00c3;
		}
	}
	{
		EntryU5BU5D_tE0A05522E3E044A0A153A33D678D14E918FFAD4F* L_18 = (EntryU5BU5D_tE0A05522E3E044A0A153A33D678D14E918FFAD4F*)__this->____entries_1;
		V_2 = L_18;
		V_3 = 0;
		goto IL_00b9;
	}

IL_0073:
	{
		EntryU5BU5D_tE0A05522E3E044A0A153A33D678D14E918FFAD4F* L_19 = V_2;
		int32_t L_20 = V_3;
		NullCheck(L_19);
		int32_t L_21 = (int32_t)((L_19)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_20)))->___hashCode_0;
		if ((((int32_t)L_21) < ((int32_t)0)))
		{
			goto IL_00b5;
		}
	}
	{
		DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533* L_22 = V_1;
		int32_t L_23 = ___1_index;
		int32_t L_24 = L_23;
		___1_index = ((int32_t)il2cpp_codegen_add(L_24, 1));
		EntryU5BU5D_tE0A05522E3E044A0A153A33D678D14E918FFAD4F* L_25 = V_2;
		int32_t L_26 = V_3;
		NullCheck(L_25);
		Guid_t L_27 = (Guid_t)((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___key_2;
		Guid_t L_28 = L_27;
		RuntimeObject* L_29 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14), &L_28);
		EntryU5BU5D_tE0A05522E3E044A0A153A33D678D14E918FFAD4F* L_30 = V_2;
		int32_t L_31 = V_3;
		NullCheck(L_30);
		RuntimeObject* L_32 = (RuntimeObject*)((L_30)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_31)))->___value_3;
		DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB L_33;
		memset((&L_33), 0, sizeof(L_33));
		DictionaryEntry__ctor_m2768353E53A75C4860E34B37DAF1342120C5D1EA((&L_33), L_29, L_32, NULL);
		NullCheck(L_22);
		(L_22)->SetAt(static_cast<il2cpp_array_size_t>(L_24), (DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB)L_33);
	}

IL_00b5:
	{
		int32_t L_34 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_34, 1));
	}

IL_00b9:
	{
		int32_t L_35 = V_3;
		int32_t L_36 = (int32_t)__this->____count_2;
		if ((((int32_t)L_35) < ((int32_t)L_36)))
		{
			goto IL_0073;
		}
	}
	{
		return;
	}

IL_00c3:
	{
		RuntimeArray* L_37 = ___0_array;
		V_4 = ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)IsInst((RuntimeObject*)L_37, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_38 = V_4;
		if (L_38)
		{
			goto IL_00d4;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
	}

IL_00d4:
	{
	}
	try
	{
		{
			int32_t L_39 = (int32_t)__this->____count_2;
			V_5 = L_39;
			EntryU5BU5D_tE0A05522E3E044A0A153A33D678D14E918FFAD4F* L_40 = (EntryU5BU5D_tE0A05522E3E044A0A153A33D678D14E918FFAD4F*)__this->____entries_1;
			V_6 = L_40;
			V_7 = 0;
			goto IL_0130_1;
		}

IL_00ea_1:
		{
			EntryU5BU5D_tE0A05522E3E044A0A153A33D678D14E918FFAD4F* L_41 = V_6;
			int32_t L_42 = V_7;
			NullCheck(L_41);
			int32_t L_43 = (int32_t)((L_41)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_42)))->___hashCode_0;
			if ((((int32_t)L_43) < ((int32_t)0)))
			{
				goto IL_012a_1;
			}
		}
		{
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_44 = V_4;
			int32_t L_45 = ___1_index;
			int32_t L_46 = L_45;
			___1_index = ((int32_t)il2cpp_codegen_add(L_46, 1));
			EntryU5BU5D_tE0A05522E3E044A0A153A33D678D14E918FFAD4F* L_47 = V_6;
			int32_t L_48 = V_7;
			NullCheck(L_47);
			Guid_t L_49 = (Guid_t)((L_47)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_48)))->___key_2;
			EntryU5BU5D_tE0A05522E3E044A0A153A33D678D14E918FFAD4F* L_50 = V_6;
			int32_t L_51 = V_7;
			NullCheck(L_50);
			RuntimeObject* L_52 = (RuntimeObject*)((L_50)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_51)))->___value_3;
			KeyValuePair_2_t669A5BAF37ED0ABC96A30943A6E7D0442310B936 L_53;
			memset((&L_53), 0, sizeof(L_53));
			KeyValuePair_2__ctor_mAC13FF83E9E4285FF12BC8F080E0A84C51480735((&L_53), L_49, L_52, il2cpp_rgctx_method(method->klass->rgctx_data, 37));
			KeyValuePair_2_t669A5BAF37ED0ABC96A30943A6E7D0442310B936 L_54 = L_53;
			RuntimeObject* L_55 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 21), &L_54);
			NullCheck(L_44);
			ArrayElementTypeCheck (L_44, L_55);
			(L_44)->SetAt(static_cast<il2cpp_array_size_t>(L_46), (RuntimeObject*)L_55);
		}

IL_012a_1:
		{
			int32_t L_56 = V_7;
			V_7 = ((int32_t)il2cpp_codegen_add(L_56, 1));
		}

IL_0130_1:
		{
			int32_t L_57 = V_7;
			int32_t L_58 = V_5;
			if ((((int32_t)L_57) < ((int32_t)L_58)))
			{
				goto IL_00ea_1;
			}
		}
		{
			goto IL_0140;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0138;
		}
		throw e;
	}

CATCH_0138:
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0140;
	}

IL_0140:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m6BA0DEFE7CA62EF49A19CEEE61B3646585681E3A_gshared (Dictionary_2_t9283A2526EFCCE82F0B8EBAF55887B5456F4480A* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t9FEF2496FA5DE5237C8DA17926FD4D968D685AB3 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m3FCE0E08BC1DB64AF0CC89FE635B29EEE5E82F04((&L_0), __this, 2, il2cpp_rgctx_method(method->klass->rgctx_data, 39));
		Enumerator_t9FEF2496FA5DE5237C8DA17926FD4D968D685AB3 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 38), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_ICollection_get_SyncRoot_m71280C48B029B2F5A5F41F0D4DC0D72842BD1A7F_gshared (Dictionary_2_t9283A2526EFCCE82F0B8EBAF55887B5456F4480A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->____syncRoot_9;
		if (L_0)
		{
			goto IL_001a;
		}
	}
	{
		RuntimeObject** L_1 = (RuntimeObject**)(&__this->____syncRoot_9);
		RuntimeObject* L_2 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_2, NULL);
		RuntimeObject* L_3;
		L_3 = InterlockedCompareExchangeImpl<RuntimeObject*>(L_1, L_2, NULL);
	}

IL_001a:
	{
		RuntimeObject* L_4 = (RuntimeObject*)__this->____syncRoot_9;
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IDictionary_get_Keys_m2123DC6B6ECCCA4CD6B3C5AED915A4B09FA54C42_gshared (Dictionary_2_t9283A2526EFCCE82F0B8EBAF55887B5456F4480A* __this, const RuntimeMethod* method) 
{
	{
		KeyCollection_t9DE8CFDEB3353C5383DB324226EACA5D0B37AA8E* L_0;
		L_0 = Dictionary_2_get_Keys_mFA34236E56D4ADBE51E2D5FA82DF698DA9A972FB(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 55));
		return (RuntimeObject*)L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IDictionary_get_Item_m7F72782D71BEAC62EC52B60E2855D514D61C1C0F_gshared (Dictionary_2_t9283A2526EFCCE82F0B8EBAF55887B5456F4480A* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		RuntimeObject* L_0 = ___0_key;
		bool L_1;
		L_1 = Dictionary_2_IsCompatibleKey_mEF045703C8867C43360D1550A1169ABB26E2F13B(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 56));
		if (!L_1)
		{
			goto IL_0030;
		}
	}
	{
		RuntimeObject* L_2 = ___0_key;
		int32_t L_3;
		L_3 = Dictionary_2_FindEntry_mFAC5E9BB05EFD8B896D7B1EE3745B9141BC26025(__this, ((*(Guid_t*)((Guid_t*)(Guid_t*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 14))))), il2cpp_rgctx_method(method->klass->rgctx_data, 28));
		V_0 = L_3;
		int32_t L_4 = V_0;
		if ((((int32_t)L_4) < ((int32_t)0)))
		{
			goto IL_0030;
		}
	}
	{
		EntryU5BU5D_tE0A05522E3E044A0A153A33D678D14E918FFAD4F* L_5 = (EntryU5BU5D_tE0A05522E3E044A0A153A33D678D14E918FFAD4F*)__this->____entries_1;
		int32_t L_6 = V_0;
		NullCheck(L_5);
		RuntimeObject* L_7 = (RuntimeObject*)((L_5)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_6)))->___value_3;
		return L_7;
	}

IL_0030:
	{
		return NULL;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_IDictionary_set_Item_mFA133F727981BA04B848134106BD99FB8AD2919E_gshared (Dictionary_2_t9283A2526EFCCE82F0B8EBAF55887B5456F4480A* __this, RuntimeObject* ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) 
{
	Guid_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 2> __active_exceptions;
	{
		RuntimeObject* L_0 = ___0_key;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)5, NULL);
	}

IL_0009:
	{
		RuntimeObject* L_1 = ___1_value;
		ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisRuntimeObject_m27E41ACCEE817CDFBB9616ED62F233A4EA0D8A49(L_1, (int32_t)((int32_t)15), il2cpp_rgctx_method(method->klass->rgctx_data, 58));
	}
	try
	{
		{
			RuntimeObject* L_2 = ___0_key;
			V_0 = ((*(Guid_t*)((Guid_t*)(Guid_t*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 14)))));
		}
		try
		{
			Guid_t L_3 = V_0;
			RuntimeObject* L_4 = ___1_value;
			Dictionary_2_set_Item_m5C6C0F6A08D2742138B08FB9B91FA19B58F1F5D3(__this, L_3, ((RuntimeObject*)Castclass((RuntimeObject*)L_4, il2cpp_rgctx_data(method->klass->rgctx_data, 15))), il2cpp_rgctx_method(method->klass->rgctx_data, 59));
			goto IL_003a_1;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_0027_1;
			}
			throw e;
		}

CATCH_0027_1:
		{
			RuntimeObject* L_5 = ___1_value;
			RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 60)) };
			il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
			Type_t* L_7;
			L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
			ThrowHelper_ThrowWrongValueTypeArgumentException_mC1A6BBE43C360583C1E2C463D5B0AADF1E3E1910(L_5, L_7, NULL);
			IL2CPP_POP_ACTIVE_EXCEPTION();
			goto IL_003a_1;
		}

IL_003a_1:
		{
			goto IL_004f;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_003c;
		}
		throw e;
	}

CATCH_003c:
	{
		RuntimeObject* L_8 = ___0_key;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_9 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 61)) };
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
		Type_t* L_10;
		L_10 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_9, NULL);
		ThrowHelper_ThrowWrongKeyTypeArgumentException_m90E5BCE2CB10EEC16F254C237121C6816C4D6982(L_8, L_10, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_004f;
	}

IL_004f:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_IsCompatibleKey_mEF045703C8867C43360D1550A1169ABB26E2F13B_gshared (RuntimeObject* ___0_key, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_key;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)5, NULL);
	}

IL_0009:
	{
		RuntimeObject* L_1 = ___0_key;
		return (bool)((!(((RuntimeObject*)(RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_1, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 14)))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_IDictionary_Contains_mA60792F19496344A4EEC113EF66C4D1642608C2D_gshared (Dictionary_2_t9283A2526EFCCE82F0B8EBAF55887B5456F4480A* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_key;
		bool L_1;
		L_1 = Dictionary_2_IsCompatibleKey_mEF045703C8867C43360D1550A1169ABB26E2F13B(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 56));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_key;
		bool L_3;
		L_3 = Dictionary_2_ContainsKey_mADEF13A6F00847BA930B57377C0F34719842FE6A(__this, ((*(Guid_t*)((Guid_t*)(Guid_t*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 14))))), il2cpp_rgctx_method(method->klass->rgctx_data, 62));
		return L_3;
	}

IL_0015:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IDictionary_GetEnumerator_m7B750EDF5B330E2F1AF473D3C8A69E1EF2C0116A_gshared (Dictionary_2_t9283A2526EFCCE82F0B8EBAF55887B5456F4480A* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t9FEF2496FA5DE5237C8DA17926FD4D968D685AB3 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m3FCE0E08BC1DB64AF0CC89FE635B29EEE5E82F04((&L_0), __this, 1, il2cpp_rgctx_method(method->klass->rgctx_data, 39));
		Enumerator_t9FEF2496FA5DE5237C8DA17926FD4D968D685AB3 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 38), &L_1);
		return (RuntimeObject*)L_2;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m59A7EFBF7B0FC8B63DBAC6B03A6CB6E57A5F87A9_gshared (Dictionary_2_t4D7978E5F7E236382AF32684305AC72452D49043* __this, const RuntimeMethod* method) 
{
	{
		Dictionary_2__ctor_m6289671CF9C2AE755A8ED3278FE9CA56171DEF17(__this, 0, (RuntimeObject*)NULL, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m0F1AB56ECA1606FE8A53BC82796BD02C02AA1E34_gshared (Dictionary_2_t4D7978E5F7E236382AF32684305AC72452D49043* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_capacity;
		Dictionary_2__ctor_m6289671CF9C2AE755A8ED3278FE9CA56171DEF17(__this, L_0, (RuntimeObject*)NULL, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mF0A2E435DFBAD656D52EE8728441B6C97D43F2D9_gshared (Dictionary_2_t4D7978E5F7E236382AF32684305AC72452D49043* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_comparer;
		Dictionary_2__ctor_m6289671CF9C2AE755A8ED3278FE9CA56171DEF17(__this, 0, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m6289671CF9C2AE755A8ED3278FE9CA56171DEF17_gshared (Dictionary_2_t4D7978E5F7E236382AF32684305AC72452D49043* __this, int32_t ___0_capacity, RuntimeObject* ___1_comparer, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		int32_t L_0 = ___0_capacity;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0011;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m9B335696876184D17D1F8D7AF94C1B5B0869AA97((int32_t)((int32_t)12), NULL);
	}

IL_0011:
	{
		int32_t L_1 = ___0_capacity;
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_001d;
		}
	}
	{
		int32_t L_2 = ___0_capacity;
		int32_t L_3;
		L_3 = Dictionary_2_Initialize_mA242B14841D13E405394EAB63CE60D83F0F5251B(__this, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
	}

IL_001d:
	{
		RuntimeObject* L_4 = ___1_comparer;
		EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* L_5;
		L_5 = EqualityComparer_1_get_Default_mF70F6C11A35B420DFA4628EE316B087F2DCB280C_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		if ((((RuntimeObject*)(RuntimeObject*)L_4) == ((RuntimeObject*)(EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC*)L_5)))
		{
			goto IL_002c;
		}
	}
	{
		RuntimeObject* L_6 = ___1_comparer;
		__this->____comparer_6 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____comparer_6), (void*)L_6);
	}

IL_002c:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mBCF15C729D14DE8DC440BF6FC001B2EFB48EF044_gshared (Dictionary_2_t4D7978E5F7E236382AF32684305AC72452D49043* __this, RuntimeObject* ___0_dictionary, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_dictionary;
		Dictionary_2__ctor_m87DBF533B1BCFEEA84EE0190E70277BFA1854B74(__this, L_0, (RuntimeObject*)NULL, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m87DBF533B1BCFEEA84EE0190E70277BFA1854B74_gshared (Dictionary_2_t4D7978E5F7E236382AF32684305AC72452D49043* __this, RuntimeObject* ___0_dictionary, RuntimeObject* ___1_comparer, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	EntryU5BU5D_t103180204D286AA5897443F7674A3782622F8744* V_1 = NULL;
	int32_t V_2 = 0;
	RuntimeObject* V_3 = NULL;
	KeyValuePair_2_tE3EA5100FA35C94F54D8D5F93B806E7614C34DBD V_4;
	memset((&V_4), 0, sizeof(V_4));
	Dictionary_2_t4D7978E5F7E236382AF32684305AC72452D49043* G_B2_0 = NULL;
	Dictionary_2_t4D7978E5F7E236382AF32684305AC72452D49043* G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	Dictionary_2_t4D7978E5F7E236382AF32684305AC72452D49043* G_B3_1 = NULL;
	{
		RuntimeObject* L_0 = ___0_dictionary;
		if (L_0)
		{
			G_B2_0 = __this;
			goto IL_0007;
		}
		G_B1_0 = __this;
	}
	{
		G_B3_0 = 0;
		G_B3_1 = G_B1_0;
		goto IL_000d;
	}

IL_0007:
	{
		RuntimeObject* L_1 = ___0_dictionary;
		NullCheck((RuntimeObject*)L_1);
		int32_t L_2;
		L_2 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 9), (RuntimeObject*)L_1);
		G_B3_0 = L_2;
		G_B3_1 = G_B2_0;
	}

IL_000d:
	{
		RuntimeObject* L_3 = ___1_comparer;
		Dictionary_2__ctor_m6289671CF9C2AE755A8ED3278FE9CA56171DEF17(G_B3_1, G_B3_0, L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		RuntimeObject* L_4 = ___0_dictionary;
		if (L_4)
		{
			goto IL_001c;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)1, NULL);
	}

IL_001c:
	{
		RuntimeObject* L_5 = ___0_dictionary;
		NullCheck((RuntimeObject*)L_5);
		Type_t* L_6;
		L_6 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3((RuntimeObject*)L_5, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 11)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		bool L_9;
		L_9 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_6, L_8, NULL);
		if (!L_9)
		{
			goto IL_0080;
		}
	}
	{
		RuntimeObject* L_10 = ___0_dictionary;
		Dictionary_2_t4D7978E5F7E236382AF32684305AC72452D49043* L_11 = ((Dictionary_2_t4D7978E5F7E236382AF32684305AC72452D49043*)CastclassClass((RuntimeObject*)L_10, il2cpp_rgctx_data(method->klass->rgctx_data, 6)));
		NullCheck(L_11);
		int32_t L_12 = (int32_t)L_11->____count_2;
		V_0 = L_12;
		NullCheck(L_11);
		EntryU5BU5D_t103180204D286AA5897443F7674A3782622F8744* L_13 = (EntryU5BU5D_t103180204D286AA5897443F7674A3782622F8744*)L_11->____entries_1;
		V_1 = L_13;
		V_2 = 0;
		goto IL_007b;
	}

IL_004a:
	{
		EntryU5BU5D_t103180204D286AA5897443F7674A3782622F8744* L_14 = V_1;
		int32_t L_15 = V_2;
		NullCheck(L_14);
		int32_t L_16 = (int32_t)((L_14)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_15)))->___hashCode_0;
		if ((((int32_t)L_16) < ((int32_t)0)))
		{
			goto IL_0077;
		}
	}
	{
		EntryU5BU5D_t103180204D286AA5897443F7674A3782622F8744* L_17 = V_1;
		int32_t L_18 = V_2;
		NullCheck(L_17);
		int32_t L_19 = (int32_t)((L_17)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_18)))->___key_2;
		EntryU5BU5D_t103180204D286AA5897443F7674A3782622F8744* L_20 = V_1;
		int32_t L_21 = V_2;
		NullCheck(L_20);
		ContentHeightCacheInfo_tA616347D46981FC5684B6268FC7035C431E99FBC L_22 = (ContentHeightCacheInfo_tA616347D46981FC5684B6268FC7035C431E99FBC)((L_20)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_21)))->___value_3;
		Dictionary_2_Add_m2E83AB53AA4F67FD870D568B7E0F5269F3C9EF2F(__this, L_19, L_22, il2cpp_rgctx_method(method->klass->rgctx_data, 16));
	}

IL_0077:
	{
		int32_t L_23 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_23, 1));
	}

IL_007b:
	{
		int32_t L_24 = V_2;
		int32_t L_25 = V_0;
		if ((((int32_t)L_24) < ((int32_t)L_25)))
		{
			goto IL_004a;
		}
	}
	{
		return;
	}

IL_0080:
	{
		RuntimeObject* L_26 = ___0_dictionary;
		NullCheck((RuntimeObject*)L_26);
		RuntimeObject* L_27;
		L_27 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 17), (RuntimeObject*)L_26);
		V_3 = L_27;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00af:
			{
				{
					RuntimeObject* L_28 = V_3;
					if (!L_28)
					{
						goto IL_00b8;
					}
				}
				{
					RuntimeObject* L_29 = V_3;
					NullCheck((RuntimeObject*)L_29);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_29);
				}

IL_00b8:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_00a5_1;
			}

IL_0089_1:
			{
				RuntimeObject* L_30 = V_3;
				NullCheck(L_30);
				KeyValuePair_2_tE3EA5100FA35C94F54D8D5F93B806E7614C34DBD L_31;
				L_31 = InterfaceFuncInvoker0< KeyValuePair_2_tE3EA5100FA35C94F54D8D5F93B806E7614C34DBD >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 19), L_30);
				V_4 = L_31;
				int32_t L_32;
				L_32 = KeyValuePair_2_get_Key_mA7C09E323BC8D58366E676F2135E5B976A40E152_inline((&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 22));
				ContentHeightCacheInfo_tA616347D46981FC5684B6268FC7035C431E99FBC L_33;
				L_33 = KeyValuePair_2_get_Value_m3418A391AB44E3DC55D9F6B456C7E6E694A45062_inline((&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 23));
				Dictionary_2_Add_m2E83AB53AA4F67FD870D568B7E0F5269F3C9EF2F(__this, L_32, L_33, il2cpp_rgctx_method(method->klass->rgctx_data, 16));
			}

IL_00a5_1:
			{
				RuntimeObject* L_34 = V_3;
				NullCheck((RuntimeObject*)L_34);
				bool L_35;
				L_35 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_34);
				if (L_35)
				{
					goto IL_0089_1;
				}
			}
			{
				goto IL_00b9;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00b9:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m8144453FACA7DFE3A4D1B31C9F87598477D841EB_gshared (Dictionary_2_t4D7978E5F7E236382AF32684305AC72452D49043* __this, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___0_info, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___1_context, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConditionalWeakTable_2_Add_mF98A2811734A37D856C622E7783FD7502AA7F0B7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* L_0;
		L_0 = HashHelpers_get_SerializationInfoTable_m8C17D5483B39B68897AEFFD14A9E139AF858222F(NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_1 = ___0_info;
		NullCheck(L_0);
		ConditionalWeakTable_2_Add_mF98A2811734A37D856C622E7783FD7502AA7F0B7(L_0, (RuntimeObject*)__this, L_1, ConditionalWeakTable_2_Add_mF98A2811734A37D856C622E7783FD7502AA7F0B7_RuntimeMethod_var);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_get_Count_m4816BCB730A3F3AF171687270CB4619FB3C44E1C_gshared (Dictionary_2_t4D7978E5F7E236382AF32684305AC72452D49043* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____count_2;
		int32_t L_1 = (int32_t)__this->____freeCount_4;
		return ((int32_t)il2cpp_codegen_subtract(L_0, L_1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyCollection_t1C0270D8CA819EF870A1AB2BDF71FF7D9967AC6C* Dictionary_2_get_Keys_m51677F3B9C4444ABDCE7161B61DB5210D2378079_gshared (Dictionary_2_t4D7978E5F7E236382AF32684305AC72452D49043* __this, const RuntimeMethod* method) 
{
	{
		KeyCollection_t1C0270D8CA819EF870A1AB2BDF71FF7D9967AC6C* L_0 = (KeyCollection_t1C0270D8CA819EF870A1AB2BDF71FF7D9967AC6C*)__this->____keys_7;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		KeyCollection_t1C0270D8CA819EF870A1AB2BDF71FF7D9967AC6C* L_1 = (KeyCollection_t1C0270D8CA819EF870A1AB2BDF71FF7D9967AC6C*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 24));
		KeyCollection__ctor_m04155234C1C90297F973F2DD3B892015CF860306(L_1, __this, il2cpp_rgctx_method(method->klass->rgctx_data, 25));
		__this->____keys_7 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____keys_7), (void*)L_1);
	}

IL_0014:
	{
		KeyCollection_t1C0270D8CA819EF870A1AB2BDF71FF7D9967AC6C* L_2 = (KeyCollection_t1C0270D8CA819EF870A1AB2BDF71FF7D9967AC6C*)__this->____keys_7;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueCollection_t1A840A8972E8AE9C8564CF9D1EEC5519261BAFA9* Dictionary_2_get_Values_m74C6223AC7113C9B84D4B02CA148920B7DC43C69_gshared (Dictionary_2_t4D7978E5F7E236382AF32684305AC72452D49043* __this, const RuntimeMethod* method) 
{
	{
		ValueCollection_t1A840A8972E8AE9C8564CF9D1EEC5519261BAFA9* L_0 = (ValueCollection_t1A840A8972E8AE9C8564CF9D1EEC5519261BAFA9*)__this->____values_8;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ValueCollection_t1A840A8972E8AE9C8564CF9D1EEC5519261BAFA9* L_1 = (ValueCollection_t1A840A8972E8AE9C8564CF9D1EEC5519261BAFA9*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 26));
		ValueCollection__ctor_m6F4F3F916020065EFA67C145A6EDA70F624A5384(L_1, __this, il2cpp_rgctx_method(method->klass->rgctx_data, 27));
		__this->____values_8 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____values_8), (void*)L_1);
	}

IL_0014:
	{
		ValueCollection_t1A840A8972E8AE9C8564CF9D1EEC5519261BAFA9* L_2 = (ValueCollection_t1A840A8972E8AE9C8564CF9D1EEC5519261BAFA9*)__this->____values_8;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ContentHeightCacheInfo_tA616347D46981FC5684B6268FC7035C431E99FBC Dictionary_2_get_Item_m7FE06CA7DF0622D9DEE2DCA26996DE20D0746105_gshared (Dictionary_2_t4D7978E5F7E236382AF32684305AC72452D49043* __this, int32_t ___0_key, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	ContentHeightCacheInfo_tA616347D46981FC5684B6268FC7035C431E99FBC V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		int32_t L_0 = ___0_key;
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_mD8B748D3A92124B5F9D01A9C0557BEEB772BD673(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 28));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_001e;
		}
	}
	{
		EntryU5BU5D_t103180204D286AA5897443F7674A3782622F8744* L_3 = (EntryU5BU5D_t103180204D286AA5897443F7674A3782622F8744*)__this->____entries_1;
		int32_t L_4 = V_0;
		NullCheck(L_3);
		ContentHeightCacheInfo_tA616347D46981FC5684B6268FC7035C431E99FBC L_5 = (ContentHeightCacheInfo_tA616347D46981FC5684B6268FC7035C431E99FBC)((L_3)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_4)))->___value_3;
		return L_5;
	}

IL_001e:
	{
		int32_t L_6 = ___0_key;
		int32_t L_7 = L_6;
		RuntimeObject* L_8 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14), &L_7);
		ThrowHelper_ThrowKeyNotFoundException_m6A17735FA486AD43F2488DE39B755AC60BC99CE7(L_8, NULL);
		il2cpp_codegen_initobj((&V_1), sizeof(ContentHeightCacheInfo_tA616347D46981FC5684B6268FC7035C431E99FBC));
		ContentHeightCacheInfo_tA616347D46981FC5684B6268FC7035C431E99FBC L_9 = V_1;
		return L_9;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_mA2D31862FA96D8794126CAA7B1E178B08B6BB566_gshared (Dictionary_2_t4D7978E5F7E236382AF32684305AC72452D49043* __this, int32_t ___0_key, ContentHeightCacheInfo_tA616347D46981FC5684B6268FC7035C431E99FBC ___1_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_key;
		ContentHeightCacheInfo_tA616347D46981FC5684B6268FC7035C431E99FBC L_1 = ___1_value;
		bool L_2;
		L_2 = Dictionary_2_TryInsert_m099201DE2E21B09B51345FF7EF0960AC8BD70E0E(__this, L_0, L_1, (uint8_t)1, il2cpp_rgctx_method(method->klass->rgctx_data, 29));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_m2E83AB53AA4F67FD870D568B7E0F5269F3C9EF2F_gshared (Dictionary_2_t4D7978E5F7E236382AF32684305AC72452D49043* __this, int32_t ___0_key, ContentHeightCacheInfo_tA616347D46981FC5684B6268FC7035C431E99FBC ___1_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_key;
		ContentHeightCacheInfo_tA616347D46981FC5684B6268FC7035C431E99FBC L_1 = ___1_value;
		bool L_2;
		L_2 = Dictionary_2_TryInsert_m099201DE2E21B09B51345FF7EF0960AC8BD70E0E(__this, L_0, L_1, (uint8_t)2, il2cpp_rgctx_method(method->klass->rgctx_data, 29));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_mE31EBE06CE0AB7973D3FF1BBEF932B812E71F03A_gshared (Dictionary_2_t4D7978E5F7E236382AF32684305AC72452D49043* __this, KeyValuePair_2_tE3EA5100FA35C94F54D8D5F93B806E7614C34DBD ___0_keyValuePair, const RuntimeMethod* method) 
{
	{
		int32_t L_0;
		L_0 = KeyValuePair_2_get_Key_mA7C09E323BC8D58366E676F2135E5B976A40E152_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		ContentHeightCacheInfo_tA616347D46981FC5684B6268FC7035C431E99FBC L_1;
		L_1 = KeyValuePair_2_get_Value_m3418A391AB44E3DC55D9F6B456C7E6E694A45062_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		Dictionary_2_Add_m2E83AB53AA4F67FD870D568B7E0F5269F3C9EF2F(__this, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 16));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m614BE4328C148EBAC4896C3D75540A989D0DE9F2_gshared (Dictionary_2_t4D7978E5F7E236382AF32684305AC72452D49043* __this, KeyValuePair_2_tE3EA5100FA35C94F54D8D5F93B806E7614C34DBD ___0_keyValuePair, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0;
		L_0 = KeyValuePair_2_get_Key_mA7C09E323BC8D58366E676F2135E5B976A40E152_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_mD8B748D3A92124B5F9D01A9C0557BEEB772BD673(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 28));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0038;
		}
	}
	{
		EqualityComparer_1_t8EE005CC277EC77E0AFAB9930C9285E3DE4C677B* L_3;
		L_3 = EqualityComparer_1_get_Default_mB3E88E8F0749A37FC3E4007A3F3142E8DE546515_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 30));
		EntryU5BU5D_t103180204D286AA5897443F7674A3782622F8744* L_4 = (EntryU5BU5D_t103180204D286AA5897443F7674A3782622F8744*)__this->____entries_1;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		ContentHeightCacheInfo_tA616347D46981FC5684B6268FC7035C431E99FBC L_6 = (ContentHeightCacheInfo_tA616347D46981FC5684B6268FC7035C431E99FBC)((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)))->___value_3;
		ContentHeightCacheInfo_tA616347D46981FC5684B6268FC7035C431E99FBC L_7;
		L_7 = KeyValuePair_2_get_Value_m3418A391AB44E3DC55D9F6B456C7E6E694A45062_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		NullCheck(L_3);
		bool L_8;
		L_8 = VirtualFuncInvoker2< bool, ContentHeightCacheInfo_tA616347D46981FC5684B6268FC7035C431E99FBC, ContentHeightCacheInfo_tA616347D46981FC5684B6268FC7035C431E99FBC >::Invoke(8, L_3, L_6, L_7);
		if (!L_8)
		{
			goto IL_0038;
		}
	}
	{
		return (bool)1;
	}

IL_0038:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_mC6F5CA7050C579B5D38CE75E318EC4F2DEE960C1_gshared (Dictionary_2_t4D7978E5F7E236382AF32684305AC72452D49043* __this, KeyValuePair_2_tE3EA5100FA35C94F54D8D5F93B806E7614C34DBD ___0_keyValuePair, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0;
		L_0 = KeyValuePair_2_get_Key_mA7C09E323BC8D58366E676F2135E5B976A40E152_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_mD8B748D3A92124B5F9D01A9C0557BEEB772BD673(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 28));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0046;
		}
	}
	{
		EqualityComparer_1_t8EE005CC277EC77E0AFAB9930C9285E3DE4C677B* L_3;
		L_3 = EqualityComparer_1_get_Default_mB3E88E8F0749A37FC3E4007A3F3142E8DE546515_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 30));
		EntryU5BU5D_t103180204D286AA5897443F7674A3782622F8744* L_4 = (EntryU5BU5D_t103180204D286AA5897443F7674A3782622F8744*)__this->____entries_1;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		ContentHeightCacheInfo_tA616347D46981FC5684B6268FC7035C431E99FBC L_6 = (ContentHeightCacheInfo_tA616347D46981FC5684B6268FC7035C431E99FBC)((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)))->___value_3;
		ContentHeightCacheInfo_tA616347D46981FC5684B6268FC7035C431E99FBC L_7;
		L_7 = KeyValuePair_2_get_Value_m3418A391AB44E3DC55D9F6B456C7E6E694A45062_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		NullCheck(L_3);
		bool L_8;
		L_8 = VirtualFuncInvoker2< bool, ContentHeightCacheInfo_tA616347D46981FC5684B6268FC7035C431E99FBC, ContentHeightCacheInfo_tA616347D46981FC5684B6268FC7035C431E99FBC >::Invoke(8, L_3, L_6, L_7);
		if (!L_8)
		{
			goto IL_0046;
		}
	}
	{
		int32_t L_9;
		L_9 = KeyValuePair_2_get_Key_mA7C09E323BC8D58366E676F2135E5B976A40E152_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		bool L_10;
		L_10 = Dictionary_2_Remove_m7EF408E5FE0D4F747EC426DE23450F54F779E67A(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 34));
		return (bool)1;
	}

IL_0046:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Clear_m2693A3949C762703B337E2BC4BE5CC025D849694_gshared (Dictionary_2_t4D7978E5F7E236382AF32684305AC72452D49043* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = (int32_t)__this->____count_2;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_0041;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		NullCheck(L_3);
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_2, 0, ((int32_t)(((RuntimeArray*)L_3)->max_length)), NULL);
		__this->____count_2 = 0;
		__this->____freeList_3 = (-1);
		__this->____freeCount_4 = 0;
		EntryU5BU5D_t103180204D286AA5897443F7674A3782622F8744* L_4 = (EntryU5BU5D_t103180204D286AA5897443F7674A3782622F8744*)__this->____entries_1;
		int32_t L_5 = V_0;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_4, 0, L_5, NULL);
	}

IL_0041:
	{
		int32_t L_6 = (int32_t)__this->____version_5;
		__this->____version_5 = ((int32_t)il2cpp_codegen_add(L_6, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_m39C81870CD15FA7F0BD586D3BCF55C5B1D7D4005_gshared (Dictionary_2_t4D7978E5F7E236382AF32684305AC72452D49043* __this, int32_t ___0_key, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_key;
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_mD8B748D3A92124B5F9D01A9C0557BEEB772BD673(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 28));
		return (bool)((((int32_t)((((int32_t)L_1) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsValue_mE6119A0F542C166EC5BE4529BF6098117D5CF8DD_gshared (Dictionary_2_t4D7978E5F7E236382AF32684305AC72452D49043* __this, ContentHeightCacheInfo_tA616347D46981FC5684B6268FC7035C431E99FBC ___0_value, const RuntimeMethod* method) 
{
	EntryU5BU5D_t103180204D286AA5897443F7674A3782622F8744* V_0 = NULL;
	int32_t V_1 = 0;
	ContentHeightCacheInfo_tA616347D46981FC5684B6268FC7035C431E99FBC V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	EqualityComparer_1_t8EE005CC277EC77E0AFAB9930C9285E3DE4C677B* V_4 = NULL;
	int32_t V_5 = 0;
	{
		EntryU5BU5D_t103180204D286AA5897443F7674A3782622F8744* L_0 = (EntryU5BU5D_t103180204D286AA5897443F7674A3782622F8744*)__this->____entries_1;
		V_0 = L_0;
		goto IL_0049;
	}

IL_0049:
	{
		il2cpp_codegen_initobj((&V_2), sizeof(ContentHeightCacheInfo_tA616347D46981FC5684B6268FC7035C431E99FBC));
	}
	{
		V_3 = 0;
		goto IL_008b;
	}

IL_005d:
	{
		EntryU5BU5D_t103180204D286AA5897443F7674A3782622F8744* L_3 = V_0;
		int32_t L_4 = V_3;
		NullCheck(L_3);
		int32_t L_5 = (int32_t)((L_3)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_4)))->___hashCode_0;
		if ((((int32_t)L_5) < ((int32_t)0)))
		{
			goto IL_0087;
		}
	}
	{
		EqualityComparer_1_t8EE005CC277EC77E0AFAB9930C9285E3DE4C677B* L_6;
		L_6 = EqualityComparer_1_get_Default_mB3E88E8F0749A37FC3E4007A3F3142E8DE546515_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 30));
		EntryU5BU5D_t103180204D286AA5897443F7674A3782622F8744* L_7 = V_0;
		int32_t L_8 = V_3;
		NullCheck(L_7);
		ContentHeightCacheInfo_tA616347D46981FC5684B6268FC7035C431E99FBC L_9 = (ContentHeightCacheInfo_tA616347D46981FC5684B6268FC7035C431E99FBC)((L_7)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_8)))->___value_3;
		ContentHeightCacheInfo_tA616347D46981FC5684B6268FC7035C431E99FBC L_10 = ___0_value;
		NullCheck(L_6);
		bool L_11;
		L_11 = VirtualFuncInvoker2< bool, ContentHeightCacheInfo_tA616347D46981FC5684B6268FC7035C431E99FBC, ContentHeightCacheInfo_tA616347D46981FC5684B6268FC7035C431E99FBC >::Invoke(8, L_6, L_9, L_10);
		if (!L_11)
		{
			goto IL_0087;
		}
	}
	{
		return (bool)1;
	}

IL_0087:
	{
		int32_t L_12 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_008b:
	{
		int32_t L_13 = V_3;
		int32_t L_14 = (int32_t)__this->____count_2;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_005d;
		}
	}
	{
		goto IL_00db;
	}

IL_00db:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_CopyTo_m99769053B2973A908BB5E1F3B7547EA43A30C52B_gshared (Dictionary_2_t4D7978E5F7E236382AF32684305AC72452D49043* __this, KeyValuePair_2U5BU5D_t65371EF32BF577225115397A64E346AE93FE927C* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	EntryU5BU5D_t103180204D286AA5897443F7674A3782622F8744* V_1 = NULL;
	int32_t V_2 = 0;
	{
		KeyValuePair_2U5BU5D_t65371EF32BF577225115397A64E346AE93FE927C* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)3, NULL);
	}

IL_0009:
	{
		int32_t L_1 = ___1_index;
		KeyValuePair_2U5BU5D_t65371EF32BF577225115397A64E346AE93FE927C* L_2 = ___0_array;
		NullCheck(L_2);
		if ((!(((uint32_t)L_1) > ((uint32_t)((int32_t)(((RuntimeArray*)L_2)->max_length))))))
		{
			goto IL_0014;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0014:
	{
		KeyValuePair_2U5BU5D_t65371EF32BF577225115397A64E346AE93FE927C* L_3 = ___0_array;
		NullCheck(L_3);
		int32_t L_4 = ___1_index;
		int32_t L_5;
		L_5 = Dictionary_2_get_Count_m4816BCB730A3F3AF171687270CB4619FB3C44E1C(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 36));
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_3)->max_length)), L_4))) >= ((int32_t)L_5)))
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)5, NULL);
	}

IL_0027:
	{
		int32_t L_6 = (int32_t)__this->____count_2;
		V_0 = L_6;
		EntryU5BU5D_t103180204D286AA5897443F7674A3782622F8744* L_7 = (EntryU5BU5D_t103180204D286AA5897443F7674A3782622F8744*)__this->____entries_1;
		V_1 = L_7;
		V_2 = 0;
		goto IL_0075;
	}

IL_0039:
	{
		EntryU5BU5D_t103180204D286AA5897443F7674A3782622F8744* L_8 = V_1;
		int32_t L_9 = V_2;
		NullCheck(L_8);
		int32_t L_10 = (int32_t)((L_8)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_9)))->___hashCode_0;
		if ((((int32_t)L_10) < ((int32_t)0)))
		{
			goto IL_0071;
		}
	}
	{
		KeyValuePair_2U5BU5D_t65371EF32BF577225115397A64E346AE93FE927C* L_11 = ___0_array;
		int32_t L_12 = ___1_index;
		int32_t L_13 = L_12;
		___1_index = ((int32_t)il2cpp_codegen_add(L_13, 1));
		EntryU5BU5D_t103180204D286AA5897443F7674A3782622F8744* L_14 = V_1;
		int32_t L_15 = V_2;
		NullCheck(L_14);
		int32_t L_16 = (int32_t)((L_14)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_15)))->___key_2;
		EntryU5BU5D_t103180204D286AA5897443F7674A3782622F8744* L_17 = V_1;
		int32_t L_18 = V_2;
		NullCheck(L_17);
		ContentHeightCacheInfo_tA616347D46981FC5684B6268FC7035C431E99FBC L_19 = (ContentHeightCacheInfo_tA616347D46981FC5684B6268FC7035C431E99FBC)((L_17)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_18)))->___value_3;
		KeyValuePair_2_tE3EA5100FA35C94F54D8D5F93B806E7614C34DBD L_20;
		memset((&L_20), 0, sizeof(L_20));
		KeyValuePair_2__ctor_mE1295E1EB09A4C3624F079C94EE6A9ED1D66EE26((&L_20), L_16, L_19, il2cpp_rgctx_method(method->klass->rgctx_data, 37));
		NullCheck(L_11);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(L_13), (KeyValuePair_2_tE3EA5100FA35C94F54D8D5F93B806E7614C34DBD)L_20);
	}

IL_0071:
	{
		int32_t L_21 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_21, 1));
	}

IL_0075:
	{
		int32_t L_22 = V_2;
		int32_t L_23 = V_0;
		if ((((int32_t)L_22) < ((int32_t)L_23)))
		{
			goto IL_0039;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tB7C64CFA6D1E8072BF063A54A9F6CB6B8021170F Dictionary_2_GetEnumerator_m22DA3CD90EB07F7C718497BBFF48C1FA052D9D55_gshared (Dictionary_2_t4D7978E5F7E236382AF32684305AC72452D49043* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_tB7C64CFA6D1E8072BF063A54A9F6CB6B8021170F L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m31B9A15C37D5A017654810B5B55B5C415CBAF885((&L_0), __this, 2, il2cpp_rgctx_method(method->klass->rgctx_data, 39));
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m7B8442FC6D45FEA025D708CAC58C738960F22E82_gshared (Dictionary_2_t4D7978E5F7E236382AF32684305AC72452D49043* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_tB7C64CFA6D1E8072BF063A54A9F6CB6B8021170F L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m31B9A15C37D5A017654810B5B55B5C415CBAF885((&L_0), __this, 2, il2cpp_rgctx_method(method->klass->rgctx_data, 39));
		Enumerator_tB7C64CFA6D1E8072BF063A54A9F6CB6B8021170F L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 38), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_GetObjectData_m8F154E032EE72EE0A36FE4E0496905346CF80430_gshared (Dictionary_2_t4D7978E5F7E236382AF32684305AC72452D49043* __this, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___0_info, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___1_context, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1);
		s_Il2CppMethodInitialized = true;
	}
	KeyValuePair_2U5BU5D_t65371EF32BF577225115397A64E346AE93FE927C* V_0 = NULL;
	RuntimeObject* G_B4_0 = NULL;
	String_t* G_B4_1 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B4_2 = NULL;
	RuntimeObject* G_B3_0 = NULL;
	String_t* G_B3_1 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B3_2 = NULL;
	String_t* G_B6_0 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B6_1 = NULL;
	String_t* G_B5_0 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B5_1 = NULL;
	int32_t G_B7_0 = 0;
	String_t* G_B7_1 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B7_2 = NULL;
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_0 = ___0_info;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)4, NULL);
	}

IL_0009:
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_1 = ___0_info;
		int32_t L_2 = (int32_t)__this->____version_5;
		NullCheck(L_1);
		SerializationInfo_AddValue_m9D6ADD10966D1FE8D19050F3A269747C23FE9FC4(L_1, _stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1, L_2, NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_3 = ___0_info;
		RuntimeObject* L_4 = (RuntimeObject*)__this->____comparer_6;
		RuntimeObject* L_5 = L_4;
		if (L_5)
		{
			G_B4_0 = L_5;
			G_B4_1 = _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9;
			G_B4_2 = L_3;
			goto IL_002f;
		}
		G_B3_0 = L_5;
		G_B3_1 = _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9;
		G_B3_2 = L_3;
	}
	{
		EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* L_6;
		L_6 = EqualityComparer_1_get_Default_mF70F6C11A35B420DFA4628EE316B087F2DCB280C_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		G_B4_0 = ((RuntimeObject*)(L_6));
		G_B4_1 = G_B3_1;
		G_B4_2 = G_B3_2;
	}

IL_002f:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 40)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		NullCheck(G_B4_2);
		SerializationInfo_AddValue_m1AD59BBF8C3129142943D3F298ADF09FF123C199(G_B4_2, G_B4_1, (RuntimeObject*)G_B4_0, L_8, NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_9 = ___0_info;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_10 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		if (!L_10)
		{
			G_B6_0 = _stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69;
			G_B6_1 = L_9;
			goto IL_0056;
		}
		G_B5_0 = _stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69;
		G_B5_1 = L_9;
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		NullCheck(L_11);
		G_B7_0 = ((int32_t)(((RuntimeArray*)L_11)->max_length));
		G_B7_1 = G_B5_0;
		G_B7_2 = G_B5_1;
		goto IL_0057;
	}

IL_0056:
	{
		G_B7_0 = 0;
		G_B7_1 = G_B6_0;
		G_B7_2 = G_B6_1;
	}

IL_0057:
	{
		NullCheck(G_B7_2);
		SerializationInfo_AddValue_m9D6ADD10966D1FE8D19050F3A269747C23FE9FC4(G_B7_2, G_B7_1, G_B7_0, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_12 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		if (!L_12)
		{
			goto IL_008e;
		}
	}
	{
		int32_t L_13;
		L_13 = Dictionary_2_get_Count_m4816BCB730A3F3AF171687270CB4619FB3C44E1C(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 36));
		KeyValuePair_2U5BU5D_t65371EF32BF577225115397A64E346AE93FE927C* L_14 = (KeyValuePair_2U5BU5D_t65371EF32BF577225115397A64E346AE93FE927C*)(KeyValuePair_2U5BU5D_t65371EF32BF577225115397A64E346AE93FE927C*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 41), (uint32_t)L_13);
		V_0 = L_14;
		KeyValuePair_2U5BU5D_t65371EF32BF577225115397A64E346AE93FE927C* L_15 = V_0;
		Dictionary_2_CopyTo_m99769053B2973A908BB5E1F3B7547EA43A30C52B(__this, L_15, 0, il2cpp_rgctx_method(method->klass->rgctx_data, 42));
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_16 = ___0_info;
		KeyValuePair_2U5BU5D_t65371EF32BF577225115397A64E346AE93FE927C* L_17 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 43)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		NullCheck(L_16);
		SerializationInfo_AddValue_m1AD59BBF8C3129142943D3F298ADF09FF123C199(L_16, _stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A, (RuntimeObject*)L_17, L_19, NULL);
	}

IL_008e:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_FindEntry_mD8B748D3A92124B5F9D01A9C0557BEEB772BD673_gshared (Dictionary_2_t4D7978E5F7E236382AF32684305AC72452D49043* __this, int32_t ___0_key, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_1 = NULL;
	EntryU5BU5D_t103180204D286AA5897443F7674A3782622F8744* V_2 = NULL;
	int32_t V_3 = 0;
	RuntimeObject* V_4 = NULL;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* V_7 = NULL;
	int32_t V_8 = 0;
	{
		goto IL_000e;
	}

IL_000e:
	{
		V_0 = (-1);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		V_1 = L_1;
		EntryU5BU5D_t103180204D286AA5897443F7674A3782622F8744* L_2 = (EntryU5BU5D_t103180204D286AA5897443F7674A3782622F8744*)__this->____entries_1;
		V_2 = L_2;
		V_3 = 0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = V_1;
		if (!L_3)
		{
			goto IL_0175;
		}
	}
	{
		RuntimeObject* L_4 = (RuntimeObject*)__this->____comparer_6;
		V_4 = L_4;
		RuntimeObject* L_5 = V_4;
		if (L_5)
		{
			goto IL_0110;
		}
	}
	{
		int32_t L_6;
		L_6 = Int32_GetHashCode_m253D60FF7527A483E91004B7A2366F13E225E295((&___0_key), il2cpp_rgctx_method(method->klass->rgctx_data, 44));
		V_5 = ((int32_t)(L_6&((int32_t)2147483647LL)));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_7 = V_1;
		int32_t L_8 = V_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = V_1;
		NullCheck(L_9);
		NullCheck(L_7);
		int32_t L_10 = ((int32_t)(L_8%((int32_t)(((RuntimeArray*)L_9)->max_length))));
		int32_t L_11 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_11, 1));
		il2cpp_codegen_initobj((&V_6), sizeof(int32_t));
	}

IL_0066:
	{
		int32_t L_13 = V_0;
		EntryU5BU5D_t103180204D286AA5897443F7674A3782622F8744* L_14 = V_2;
		NullCheck(L_14);
		if ((!(((uint32_t)L_13) < ((uint32_t)((int32_t)(((RuntimeArray*)L_14)->max_length))))))
		{
			goto IL_0175;
		}
	}
	{
		EntryU5BU5D_t103180204D286AA5897443F7674A3782622F8744* L_15 = V_2;
		int32_t L_16 = V_0;
		NullCheck(L_15);
		int32_t L_17 = (int32_t)((L_15)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_16)))->___hashCode_0;
		int32_t L_18 = V_5;
		if ((!(((uint32_t)L_17) == ((uint32_t)L_18))))
		{
			goto IL_009b;
		}
	}
	{
		EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* L_19;
		L_19 = EqualityComparer_1_get_Default_mF70F6C11A35B420DFA4628EE316B087F2DCB280C_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		EntryU5BU5D_t103180204D286AA5897443F7674A3782622F8744* L_20 = V_2;
		int32_t L_21 = V_0;
		NullCheck(L_20);
		int32_t L_22 = (int32_t)((L_20)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_21)))->___key_2;
		int32_t L_23 = ___0_key;
		NullCheck(L_19);
		bool L_24;
		L_24 = VirtualFuncInvoker2< bool, int32_t, int32_t >::Invoke(8, L_19, L_22, L_23);
		if (L_24)
		{
			goto IL_0175;
		}
	}

IL_009b:
	{
		EntryU5BU5D_t103180204D286AA5897443F7674A3782622F8744* L_25 = V_2;
		int32_t L_26 = V_0;
		NullCheck(L_25);
		int32_t L_27 = (int32_t)((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___next_1;
		V_0 = L_27;
		int32_t L_28 = V_3;
		EntryU5BU5D_t103180204D286AA5897443F7674A3782622F8744* L_29 = V_2;
		NullCheck(L_29);
		if ((((int32_t)L_28) < ((int32_t)((int32_t)(((RuntimeArray*)L_29)->max_length)))))
		{
			goto IL_00b3;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_00b3:
	{
		int32_t L_30 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_30, 1));
		goto IL_0066;
	}

IL_0110:
	{
		RuntimeObject* L_31 = V_4;
		int32_t L_32 = ___0_key;
		NullCheck(L_31);
		int32_t L_33;
		L_33 = InterfaceFuncInvoker1< int32_t, int32_t >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_31, L_32);
		V_8 = ((int32_t)(L_33&((int32_t)2147483647LL)));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_34 = V_1;
		int32_t L_35 = V_8;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_36 = V_1;
		NullCheck(L_36);
		NullCheck(L_34);
		int32_t L_37 = ((int32_t)(L_35%((int32_t)(((RuntimeArray*)L_36)->max_length))));
		int32_t L_38 = (L_34)->GetAt(static_cast<il2cpp_array_size_t>(L_37));
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_38, 1));
	}

IL_012b:
	{
		int32_t L_39 = V_0;
		EntryU5BU5D_t103180204D286AA5897443F7674A3782622F8744* L_40 = V_2;
		NullCheck(L_40);
		if ((!(((uint32_t)L_39) < ((uint32_t)((int32_t)(((RuntimeArray*)L_40)->max_length))))))
		{
			goto IL_0175;
		}
	}
	{
		EntryU5BU5D_t103180204D286AA5897443F7674A3782622F8744* L_41 = V_2;
		int32_t L_42 = V_0;
		NullCheck(L_41);
		int32_t L_43 = (int32_t)((L_41)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_42)))->___hashCode_0;
		int32_t L_44 = V_8;
		if ((!(((uint32_t)L_43) == ((uint32_t)L_44))))
		{
			goto IL_0157;
		}
	}
	{
		RuntimeObject* L_45 = V_4;
		EntryU5BU5D_t103180204D286AA5897443F7674A3782622F8744* L_46 = V_2;
		int32_t L_47 = V_0;
		NullCheck(L_46);
		int32_t L_48 = (int32_t)((L_46)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_47)))->___key_2;
		int32_t L_49 = ___0_key;
		NullCheck(L_45);
		bool L_50;
		L_50 = InterfaceFuncInvoker2< bool, int32_t, int32_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_45, L_48, L_49);
		if (L_50)
		{
			goto IL_0175;
		}
	}

IL_0157:
	{
		EntryU5BU5D_t103180204D286AA5897443F7674A3782622F8744* L_51 = V_2;
		int32_t L_52 = V_0;
		NullCheck(L_51);
		int32_t L_53 = (int32_t)((L_51)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_52)))->___next_1;
		V_0 = L_53;
		int32_t L_54 = V_3;
		EntryU5BU5D_t103180204D286AA5897443F7674A3782622F8744* L_55 = V_2;
		NullCheck(L_55);
		if ((((int32_t)L_54) < ((int32_t)((int32_t)(((RuntimeArray*)L_55)->max_length)))))
		{
			goto IL_016f;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_016f:
	{
		int32_t L_56 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_56, 1));
		goto IL_012b;
	}

IL_0175:
	{
		int32_t L_57 = V_0;
		return L_57;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_Initialize_mA242B14841D13E405394EAB63CE60D83F0F5251B_gshared (Dictionary_2_t4D7978E5F7E236382AF32684305AC72452D49043* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___0_capacity;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = HashHelpers_GetPrime_m5B7AE10D5E76267579296C8F2CB8464AC2DE8472(L_0, NULL);
		V_0 = L_1;
		__this->____freeList_3 = (-1);
		int32_t L_2 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_2);
		__this->____buckets_0 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets_0), (void*)L_3);
		int32_t L_4 = V_0;
		EntryU5BU5D_t103180204D286AA5897443F7674A3782622F8744* L_5 = (EntryU5BU5D_t103180204D286AA5897443F7674A3782622F8744*)(EntryU5BU5D_t103180204D286AA5897443F7674A3782622F8744*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 48), (uint32_t)L_4);
		__this->____entries_1 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____entries_1), (void*)L_5);
		int32_t L_6 = V_0;
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryInsert_m099201DE2E21B09B51345FF7EF0960AC8BD70E0E_gshared (Dictionary_2_t4D7978E5F7E236382AF32684305AC72452D49043* __this, int32_t ___0_key, ContentHeightCacheInfo_tA616347D46981FC5684B6268FC7035C431E99FBC ___1_value, uint8_t ___2_behavior, const RuntimeMethod* method) 
{
	EntryU5BU5D_t103180204D286AA5897443F7674A3782622F8744* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t* V_4 = NULL;
	int32_t V_5 = 0;
	bool V_6 = false;
	bool V_7 = false;
	int32_t V_8 = 0;
	int32_t* V_9 = NULL;
	Entry_t36D828B685CBBFA5F4D6FBBA12A076C10A21AB3C* V_10 = NULL;
	int32_t V_11 = 0;
	EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* V_12 = NULL;
	int32_t V_13 = 0;
	int32_t G_B7_0 = 0;
	int32_t* G_B51_0 = NULL;
	{
		goto IL_000e;
	}

IL_000e:
	{
		int32_t L_1 = (int32_t)__this->____version_5;
		__this->____version_5 = ((int32_t)il2cpp_codegen_add(L_1, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		if (L_2)
		{
			goto IL_002c;
		}
	}
	{
		int32_t L_3;
		L_3 = Dictionary_2_Initialize_mA242B14841D13E405394EAB63CE60D83F0F5251B(__this, 0, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
	}

IL_002c:
	{
		EntryU5BU5D_t103180204D286AA5897443F7674A3782622F8744* L_4 = (EntryU5BU5D_t103180204D286AA5897443F7674A3782622F8744*)__this->____entries_1;
		V_0 = L_4;
		RuntimeObject* L_5 = (RuntimeObject*)__this->____comparer_6;
		V_1 = L_5;
		RuntimeObject* L_6 = V_1;
		if (!L_6)
		{
			goto IL_0046;
		}
	}
	{
		RuntimeObject* L_7 = V_1;
		int32_t L_8 = ___0_key;
		NullCheck(L_7);
		int32_t L_9;
		L_9 = InterfaceFuncInvoker1< int32_t, int32_t >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_7, L_8);
		G_B7_0 = L_9;
		goto IL_0053;
	}

IL_0046:
	{
		int32_t L_10;
		L_10 = Int32_GetHashCode_m253D60FF7527A483E91004B7A2366F13E225E295((&___0_key), il2cpp_rgctx_method(method->klass->rgctx_data, 44));
		G_B7_0 = L_10;
	}

IL_0053:
	{
		V_2 = ((int32_t)(G_B7_0&((int32_t)2147483647LL)));
		V_3 = 0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		int32_t L_12 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_13 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		NullCheck(L_13);
		NullCheck(L_11);
		V_4 = ((L_11)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_12%((int32_t)(((RuntimeArray*)L_13)->max_length)))))));
		int32_t* L_14 = V_4;
		int32_t L_15 = *((int32_t*)L_14);
		V_5 = ((int32_t)il2cpp_codegen_subtract(L_15, 1));
		RuntimeObject* L_16 = V_1;
		if (L_16)
		{
			goto IL_0187;
		}
	}
	{
		il2cpp_codegen_initobj((&V_11), sizeof(int32_t));
	}

IL_0091:
	{
		int32_t L_18 = V_5;
		EntryU5BU5D_t103180204D286AA5897443F7674A3782622F8744* L_19 = V_0;
		NullCheck(L_19);
		if ((!(((uint32_t)L_18) < ((uint32_t)((int32_t)(((RuntimeArray*)L_19)->max_length))))))
		{
			goto IL_01f9;
		}
	}
	{
		EntryU5BU5D_t103180204D286AA5897443F7674A3782622F8744* L_20 = V_0;
		int32_t L_21 = V_5;
		NullCheck(L_20);
		int32_t L_22 = (int32_t)((L_20)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_21)))->___hashCode_0;
		int32_t L_23 = V_2;
		if ((!(((uint32_t)L_22) == ((uint32_t)L_23))))
		{
			goto IL_00ea;
		}
	}
	{
		EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* L_24;
		L_24 = EqualityComparer_1_get_Default_mF70F6C11A35B420DFA4628EE316B087F2DCB280C_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		EntryU5BU5D_t103180204D286AA5897443F7674A3782622F8744* L_25 = V_0;
		int32_t L_26 = V_5;
		NullCheck(L_25);
		int32_t L_27 = (int32_t)((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___key_2;
		int32_t L_28 = ___0_key;
		NullCheck(L_24);
		bool L_29;
		L_29 = VirtualFuncInvoker2< bool, int32_t, int32_t >::Invoke(8, L_24, L_27, L_28);
		if (!L_29)
		{
			goto IL_00ea;
		}
	}
	{
		uint8_t L_30 = ___2_behavior;
		if ((!(((uint32_t)L_30) == ((uint32_t)1))))
		{
			goto IL_00d9;
		}
	}
	{
		EntryU5BU5D_t103180204D286AA5897443F7674A3782622F8744* L_31 = V_0;
		int32_t L_32 = V_5;
		NullCheck(L_31);
		ContentHeightCacheInfo_tA616347D46981FC5684B6268FC7035C431E99FBC L_33 = ___1_value;
		((L_31)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_32)))->___value_3 = L_33;
		return (bool)1;
	}

IL_00d9:
	{
		uint8_t L_34 = ___2_behavior;
		if ((!(((uint32_t)L_34) == ((uint32_t)2))))
		{
			goto IL_00e8;
		}
	}
	{
		int32_t L_35 = ___0_key;
		int32_t L_36 = L_35;
		RuntimeObject* L_37 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14), &L_36);
		ThrowHelper_ThrowAddingDuplicateWithKeyArgumentException_m013C856C16A63018719A6096727CB43E1918CDE5(L_37, NULL);
	}

IL_00e8:
	{
		return (bool)0;
	}

IL_00ea:
	{
		EntryU5BU5D_t103180204D286AA5897443F7674A3782622F8744* L_38 = V_0;
		int32_t L_39 = V_5;
		NullCheck(L_38);
		int32_t L_40 = (int32_t)((L_38)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_39)))->___next_1;
		V_5 = L_40;
		int32_t L_41 = V_3;
		EntryU5BU5D_t103180204D286AA5897443F7674A3782622F8744* L_42 = V_0;
		NullCheck(L_42);
		if ((((int32_t)L_41) < ((int32_t)((int32_t)(((RuntimeArray*)L_42)->max_length)))))
		{
			goto IL_0104;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_0104:
	{
		int32_t L_43 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_43, 1));
		goto IL_0091;
	}

IL_0187:
	{
		int32_t L_44 = V_5;
		EntryU5BU5D_t103180204D286AA5897443F7674A3782622F8744* L_45 = V_0;
		NullCheck(L_45);
		if ((!(((uint32_t)L_44) < ((uint32_t)((int32_t)(((RuntimeArray*)L_45)->max_length))))))
		{
			goto IL_01f9;
		}
	}
	{
		EntryU5BU5D_t103180204D286AA5897443F7674A3782622F8744* L_46 = V_0;
		int32_t L_47 = V_5;
		NullCheck(L_46);
		int32_t L_48 = (int32_t)((L_46)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_47)))->___hashCode_0;
		int32_t L_49 = V_2;
		if ((!(((uint32_t)L_48) == ((uint32_t)L_49))))
		{
			goto IL_01d9;
		}
	}
	{
		RuntimeObject* L_50 = V_1;
		EntryU5BU5D_t103180204D286AA5897443F7674A3782622F8744* L_51 = V_0;
		int32_t L_52 = V_5;
		NullCheck(L_51);
		int32_t L_53 = (int32_t)((L_51)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_52)))->___key_2;
		int32_t L_54 = ___0_key;
		NullCheck(L_50);
		bool L_55;
		L_55 = InterfaceFuncInvoker2< bool, int32_t, int32_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_50, L_53, L_54);
		if (!L_55)
		{
			goto IL_01d9;
		}
	}
	{
		uint8_t L_56 = ___2_behavior;
		if ((!(((uint32_t)L_56) == ((uint32_t)1))))
		{
			goto IL_01c8;
		}
	}
	{
		EntryU5BU5D_t103180204D286AA5897443F7674A3782622F8744* L_57 = V_0;
		int32_t L_58 = V_5;
		NullCheck(L_57);
		ContentHeightCacheInfo_tA616347D46981FC5684B6268FC7035C431E99FBC L_59 = ___1_value;
		((L_57)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_58)))->___value_3 = L_59;
		return (bool)1;
	}

IL_01c8:
	{
		uint8_t L_60 = ___2_behavior;
		if ((!(((uint32_t)L_60) == ((uint32_t)2))))
		{
			goto IL_01d7;
		}
	}
	{
		int32_t L_61 = ___0_key;
		int32_t L_62 = L_61;
		RuntimeObject* L_63 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14), &L_62);
		ThrowHelper_ThrowAddingDuplicateWithKeyArgumentException_m013C856C16A63018719A6096727CB43E1918CDE5(L_63, NULL);
	}

IL_01d7:
	{
		return (bool)0;
	}

IL_01d9:
	{
		EntryU5BU5D_t103180204D286AA5897443F7674A3782622F8744* L_64 = V_0;
		int32_t L_65 = V_5;
		NullCheck(L_64);
		int32_t L_66 = (int32_t)((L_64)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_65)))->___next_1;
		V_5 = L_66;
		int32_t L_67 = V_3;
		EntryU5BU5D_t103180204D286AA5897443F7674A3782622F8744* L_68 = V_0;
		NullCheck(L_68);
		if ((((int32_t)L_67) < ((int32_t)((int32_t)(((RuntimeArray*)L_68)->max_length)))))
		{
			goto IL_01f3;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_01f3:
	{
		int32_t L_69 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_69, 1));
		goto IL_0187;
	}

IL_01f9:
	{
		V_6 = (bool)0;
		V_7 = (bool)0;
		int32_t L_70 = (int32_t)__this->____freeCount_4;
		if ((((int32_t)L_70) <= ((int32_t)0)))
		{
			goto IL_0223;
		}
	}
	{
		int32_t L_71 = (int32_t)__this->____freeList_3;
		V_8 = L_71;
		V_7 = (bool)1;
		int32_t L_72 = (int32_t)__this->____freeCount_4;
		__this->____freeCount_4 = ((int32_t)il2cpp_codegen_subtract(L_72, 1));
		goto IL_0250;
	}

IL_0223:
	{
		int32_t L_73 = (int32_t)__this->____count_2;
		V_13 = L_73;
		int32_t L_74 = V_13;
		EntryU5BU5D_t103180204D286AA5897443F7674A3782622F8744* L_75 = V_0;
		NullCheck(L_75);
		if ((!(((uint32_t)L_74) == ((uint32_t)((int32_t)(((RuntimeArray*)L_75)->max_length))))))
		{
			goto IL_023b;
		}
	}
	{
		Dictionary_2_Resize_m49A6E36229F30CC88FA8BD6C75190330D88E7D7D(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 49));
		V_6 = (bool)1;
	}

IL_023b:
	{
		int32_t L_76 = V_13;
		V_8 = L_76;
		int32_t L_77 = V_13;
		__this->____count_2 = ((int32_t)il2cpp_codegen_add(L_77, 1));
		EntryU5BU5D_t103180204D286AA5897443F7674A3782622F8744* L_78 = (EntryU5BU5D_t103180204D286AA5897443F7674A3782622F8744*)__this->____entries_1;
		V_0 = L_78;
	}

IL_0250:
	{
		bool L_79 = V_6;
		if (L_79)
		{
			goto IL_0258;
		}
	}
	{
		int32_t* L_80 = V_4;
		G_B51_0 = L_80;
		goto IL_026d;
	}

IL_0258:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_81 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		int32_t L_82 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_83 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		NullCheck(L_83);
		NullCheck(L_81);
		G_B51_0 = ((L_81)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_82%((int32_t)(((RuntimeArray*)L_83)->max_length)))))));
	}

IL_026d:
	{
		V_9 = G_B51_0;
		EntryU5BU5D_t103180204D286AA5897443F7674A3782622F8744* L_84 = V_0;
		int32_t L_85 = V_8;
		NullCheck(L_84);
		V_10 = ((L_84)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_85)));
		bool L_86 = V_7;
		if (!L_86)
		{
			goto IL_028a;
		}
	}
	{
		Entry_t36D828B685CBBFA5F4D6FBBA12A076C10A21AB3C* L_87 = V_10;
		int32_t L_88 = (int32_t)L_87->___next_1;
		__this->____freeList_3 = L_88;
	}

IL_028a:
	{
		Entry_t36D828B685CBBFA5F4D6FBBA12A076C10A21AB3C* L_89 = V_10;
		int32_t L_90 = V_2;
		L_89->___hashCode_0 = L_90;
		Entry_t36D828B685CBBFA5F4D6FBBA12A076C10A21AB3C* L_91 = V_10;
		int32_t* L_92 = V_9;
		int32_t L_93 = *((int32_t*)L_92);
		L_91->___next_1 = ((int32_t)il2cpp_codegen_subtract(L_93, 1));
		Entry_t36D828B685CBBFA5F4D6FBBA12A076C10A21AB3C* L_94 = V_10;
		int32_t L_95 = ___0_key;
		L_94->___key_2 = L_95;
		Entry_t36D828B685CBBFA5F4D6FBBA12A076C10A21AB3C* L_96 = V_10;
		ContentHeightCacheInfo_tA616347D46981FC5684B6268FC7035C431E99FBC L_97 = ___1_value;
		L_96->___value_3 = L_97;
		int32_t* L_98 = V_9;
		int32_t L_99 = V_8;
		*((int32_t*)L_98) = (int32_t)((int32_t)il2cpp_codegen_add(L_99, 1));
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_OnDeserialization_m4E0339D1C754720275A6A4934959C5A5CC367387_gshared (Dictionary_2_t4D7978E5F7E236382AF32684305AC72452D49043* __this, RuntimeObject* ___0_sender, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConditionalWeakTable_2_Remove_mEA61545EA43662F3718895F4E435A1F3EFB9756E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConditionalWeakTable_2_TryGetValue_m8AB467BA44D1FF9EBDB9735CED88B0D67AC6403F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1);
		s_Il2CppMethodInitialized = true;
	}
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	KeyValuePair_2U5BU5D_t65371EF32BF577225115397A64E346AE93FE927C* V_3 = NULL;
	int32_t V_4 = 0;
	{
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* L_0;
		L_0 = HashHelpers_get_SerializationInfoTable_m8C17D5483B39B68897AEFFD14A9E139AF858222F(NULL);
		NullCheck(L_0);
		bool L_1;
		L_1 = ConditionalWeakTable_2_TryGetValue_m8AB467BA44D1FF9EBDB9735CED88B0D67AC6403F(L_0, (RuntimeObject*)__this, (&V_0), ConditionalWeakTable_2_TryGetValue_m8AB467BA44D1FF9EBDB9735CED88B0D67AC6403F_RuntimeMethod_var);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_2 = V_0;
		if (L_2)
		{
			goto IL_0012;
		}
	}
	{
		return;
	}

IL_0012:
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_3 = V_0;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = SerializationInfo_GetInt32_m7731402825C7FC8D0673F7610D555615F95E4FB5(L_3, _stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1, NULL);
		V_1 = L_4;
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_5 = V_0;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = SerializationInfo_GetInt32_m7731402825C7FC8D0673F7610D555615F95E4FB5(L_5, _stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69, NULL);
		V_2 = L_6;
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_7 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 40)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		NullCheck(L_7);
		RuntimeObject* L_10;
		L_10 = SerializationInfo_GetValue_mE6091C2E906E113455D05E734C86F43B8E1D1034(L_7, _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9, L_9, NULL);
		__this->____comparer_6 = ((RuntimeObject*)Castclass((RuntimeObject*)L_10, il2cpp_rgctx_data(method->klass->rgctx_data, 1)));
		Il2CppCodeGenWriteBarrier((void**)(&__this->____comparer_6), (void*)((RuntimeObject*)Castclass((RuntimeObject*)L_10, il2cpp_rgctx_data(method->klass->rgctx_data, 1))));
		int32_t L_11 = V_2;
		if (!L_11)
		{
			goto IL_00c9;
		}
	}
	{
		int32_t L_12 = V_2;
		int32_t L_13;
		L_13 = Dictionary_2_Initialize_mA242B14841D13E405394EAB63CE60D83F0F5251B(__this, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_14 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_15 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 43)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_16;
		L_16 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_15, NULL);
		NullCheck(L_14);
		RuntimeObject* L_17;
		L_17 = SerializationInfo_GetValue_mE6091C2E906E113455D05E734C86F43B8E1D1034(L_14, _stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A, L_16, NULL);
		V_3 = ((KeyValuePair_2U5BU5D_t65371EF32BF577225115397A64E346AE93FE927C*)Castclass((RuntimeObject*)L_17, il2cpp_rgctx_data(method->klass->rgctx_data, 35)));
		KeyValuePair_2U5BU5D_t65371EF32BF577225115397A64E346AE93FE927C* L_18 = V_3;
		if (L_18)
		{
			goto IL_007a;
		}
	}
	{
		ThrowHelper_ThrowSerializationException_m03BE2B48CD3617C32FBCEE16030F7C5563E04E16((int32_t)((int32_t)16), NULL);
	}

IL_007a:
	{
		V_4 = 0;
		goto IL_00c0;
	}

IL_007f:
	{
		KeyValuePair_2U5BU5D_t65371EF32BF577225115397A64E346AE93FE927C* L_19 = V_3;
		int32_t L_20 = V_4;
		NullCheck(L_19);
		int32_t L_21;
		L_21 = KeyValuePair_2_get_Key_mA7C09E323BC8D58366E676F2135E5B976A40E152_inline(((L_19)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_20))), il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		goto IL_009a;
	}

IL_009a:
	{
		KeyValuePair_2U5BU5D_t65371EF32BF577225115397A64E346AE93FE927C* L_22 = V_3;
		int32_t L_23 = V_4;
		NullCheck(L_22);
		int32_t L_24;
		L_24 = KeyValuePair_2_get_Key_mA7C09E323BC8D58366E676F2135E5B976A40E152_inline(((L_22)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_23))), il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		KeyValuePair_2U5BU5D_t65371EF32BF577225115397A64E346AE93FE927C* L_25 = V_3;
		int32_t L_26 = V_4;
		NullCheck(L_25);
		ContentHeightCacheInfo_tA616347D46981FC5684B6268FC7035C431E99FBC L_27;
		L_27 = KeyValuePair_2_get_Value_m3418A391AB44E3DC55D9F6B456C7E6E694A45062_inline(((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26))), il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		Dictionary_2_Add_m2E83AB53AA4F67FD870D568B7E0F5269F3C9EF2F(__this, L_24, L_27, il2cpp_rgctx_method(method->klass->rgctx_data, 16));
		int32_t L_28 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_28, 1));
	}

IL_00c0:
	{
		int32_t L_29 = V_4;
		KeyValuePair_2U5BU5D_t65371EF32BF577225115397A64E346AE93FE927C* L_30 = V_3;
		NullCheck(L_30);
		if ((((int32_t)L_29) < ((int32_t)((int32_t)(((RuntimeArray*)L_30)->max_length)))))
		{
			goto IL_007f;
		}
	}
	{
		goto IL_00d0;
	}

IL_00c9:
	{
		__this->____buckets_0 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets_0), (void*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL);
	}

IL_00d0:
	{
		int32_t L_31 = V_1;
		__this->____version_5 = L_31;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* L_32;
		L_32 = HashHelpers_get_SerializationInfoTable_m8C17D5483B39B68897AEFFD14A9E139AF858222F(NULL);
		NullCheck(L_32);
		bool L_33;
		L_33 = ConditionalWeakTable_2_Remove_mEA61545EA43662F3718895F4E435A1F3EFB9756E(L_32, (RuntimeObject*)__this, ConditionalWeakTable_2_Remove_mEA61545EA43662F3718895F4E435A1F3EFB9756E_RuntimeMethod_var);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_m49A6E36229F30CC88FA8BD6C75190330D88E7D7D_gshared (Dictionary_2_t4D7978E5F7E236382AF32684305AC72452D49043* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = (int32_t)__this->____count_2;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = HashHelpers_ExpandPrime_m9A35EC171AA0EA16F7C9F71EE6FAD5A82565ADB9(L_0, NULL);
		Dictionary_2_Resize_mD4C4C781B27ECB1928BEBC290BFC10D191798670(__this, L_1, (bool)0, il2cpp_rgctx_method(method->klass->rgctx_data, 51));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_mD4C4C781B27ECB1928BEBC290BFC10D191798670_gshared (Dictionary_2_t4D7978E5F7E236382AF32684305AC72452D49043* __this, int32_t ___0_newSize, bool ___1_forceNewHashCodes, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_0 = NULL;
	EntryU5BU5D_t103180204D286AA5897443F7674A3782622F8744* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	{
		int32_t L_0 = ___0_newSize;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_0);
		V_0 = L_1;
		int32_t L_2 = ___0_newSize;
		EntryU5BU5D_t103180204D286AA5897443F7674A3782622F8744* L_3 = (EntryU5BU5D_t103180204D286AA5897443F7674A3782622F8744*)(EntryU5BU5D_t103180204D286AA5897443F7674A3782622F8744*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 48), (uint32_t)L_2);
		V_1 = L_3;
		int32_t L_4 = (int32_t)__this->____count_2;
		V_2 = L_4;
		EntryU5BU5D_t103180204D286AA5897443F7674A3782622F8744* L_5 = (EntryU5BU5D_t103180204D286AA5897443F7674A3782622F8744*)__this->____entries_1;
		EntryU5BU5D_t103180204D286AA5897443F7674A3782622F8744* L_6 = V_1;
		int32_t L_7 = V_2;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_5, 0, (RuntimeArray*)L_6, 0, L_7, NULL);
		il2cpp_codegen_initobj((&V_3), sizeof(int32_t));
		int32_t L_8 = V_3;
		bool L_9 = ___1_forceNewHashCodes;
		if (!((int32_t)((int32_t)false&(int32_t)L_9)))
		{
			goto IL_0084;
		}
	}
	{
		V_4 = 0;
		goto IL_007f;
	}

IL_003e:
	{
		EntryU5BU5D_t103180204D286AA5897443F7674A3782622F8744* L_10 = V_1;
		int32_t L_11 = V_4;
		NullCheck(L_10);
		int32_t L_12 = (int32_t)((L_10)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_11)))->___hashCode_0;
		if ((((int32_t)L_12) < ((int32_t)0)))
		{
			goto IL_0079;
		}
	}
	{
		EntryU5BU5D_t103180204D286AA5897443F7674A3782622F8744* L_13 = V_1;
		int32_t L_14 = V_4;
		NullCheck(L_13);
		EntryU5BU5D_t103180204D286AA5897443F7674A3782622F8744* L_15 = V_1;
		int32_t L_16 = V_4;
		NullCheck(L_15);
		int32_t* L_17 = (int32_t*)(&((L_15)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_16)))->___key_2);
		int32_t L_18;
		L_18 = Int32_GetHashCode_m253D60FF7527A483E91004B7A2366F13E225E295(L_17, il2cpp_rgctx_method(method->klass->rgctx_data, 44));
		((L_13)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_14)))->___hashCode_0 = ((int32_t)(L_18&((int32_t)2147483647LL)));
	}

IL_0079:
	{
		int32_t L_19 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_19, 1));
	}

IL_007f:
	{
		int32_t L_20 = V_4;
		int32_t L_21 = V_2;
		if ((((int32_t)L_20) < ((int32_t)L_21)))
		{
			goto IL_003e;
		}
	}

IL_0084:
	{
		V_5 = 0;
		goto IL_00cb;
	}

IL_0089:
	{
		EntryU5BU5D_t103180204D286AA5897443F7674A3782622F8744* L_22 = V_1;
		int32_t L_23 = V_5;
		NullCheck(L_22);
		int32_t L_24 = (int32_t)((L_22)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_23)))->___hashCode_0;
		if ((((int32_t)L_24) < ((int32_t)0)))
		{
			goto IL_00c5;
		}
	}
	{
		EntryU5BU5D_t103180204D286AA5897443F7674A3782622F8744* L_25 = V_1;
		int32_t L_26 = V_5;
		NullCheck(L_25);
		int32_t L_27 = (int32_t)((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___hashCode_0;
		int32_t L_28 = ___0_newSize;
		V_6 = ((int32_t)(L_27%L_28));
		EntryU5BU5D_t103180204D286AA5897443F7674A3782622F8744* L_29 = V_1;
		int32_t L_30 = V_5;
		NullCheck(L_29);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_31 = V_0;
		int32_t L_32 = V_6;
		NullCheck(L_31);
		int32_t L_33 = L_32;
		int32_t L_34 = (L_31)->GetAt(static_cast<il2cpp_array_size_t>(L_33));
		((L_29)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_30)))->___next_1 = ((int32_t)il2cpp_codegen_subtract(L_34, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_35 = V_0;
		int32_t L_36 = V_6;
		int32_t L_37 = V_5;
		NullCheck(L_35);
		(L_35)->SetAt(static_cast<il2cpp_array_size_t>(L_36), (int32_t)((int32_t)il2cpp_codegen_add(L_37, 1)));
	}

IL_00c5:
	{
		int32_t L_38 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_38, 1));
	}

IL_00cb:
	{
		int32_t L_39 = V_5;
		int32_t L_40 = V_2;
		if ((((int32_t)L_39) < ((int32_t)L_40)))
		{
			goto IL_0089;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_41 = V_0;
		__this->____buckets_0 = L_41;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets_0), (void*)L_41);
		EntryU5BU5D_t103180204D286AA5897443F7674A3782622F8744* L_42 = V_1;
		__this->____entries_1 = L_42;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____entries_1), (void*)L_42);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_m7EF408E5FE0D4F747EC426DE23450F54F779E67A_gshared (Dictionary_2_t4D7978E5F7E236382AF32684305AC72452D49043* __this, int32_t ___0_key, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	Entry_t36D828B685CBBFA5F4D6FBBA12A076C10A21AB3C* V_4 = NULL;
	RuntimeObject* G_B5_0 = NULL;
	RuntimeObject* G_B4_0 = NULL;
	int32_t G_B6_0 = 0;
	RuntimeObject* G_B10_0 = NULL;
	RuntimeObject* G_B9_0 = NULL;
	bool G_B11_0 = false;
	{
		goto IL_000e;
	}

IL_000e:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		if (!L_1)
		{
			goto IL_0149;
		}
	}
	{
		RuntimeObject* L_2 = (RuntimeObject*)__this->____comparer_6;
		RuntimeObject* L_3 = L_2;
		if (L_3)
		{
			G_B5_0 = L_3;
			goto IL_0032;
		}
		G_B4_0 = L_3;
	}
	{
		int32_t L_4;
		L_4 = Int32_GetHashCode_m253D60FF7527A483E91004B7A2366F13E225E295((&___0_key), il2cpp_rgctx_method(method->klass->rgctx_data, 44));
		G_B6_0 = L_4;
		goto IL_0038;
	}

IL_0032:
	{
		int32_t L_5 = ___0_key;
		NullCheck(G_B5_0);
		int32_t L_6;
		L_6 = InterfaceFuncInvoker1< int32_t, int32_t >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 1), G_B5_0, L_5);
		G_B6_0 = L_6;
	}

IL_0038:
	{
		V_0 = ((int32_t)(G_B6_0&((int32_t)2147483647LL)));
		int32_t L_7 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_8 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		NullCheck(L_8);
		V_1 = ((int32_t)(L_7%((int32_t)(((RuntimeArray*)L_8)->max_length))));
		V_2 = (-1);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		int32_t L_10 = V_1;
		NullCheck(L_9);
		int32_t L_11 = L_10;
		int32_t L_12 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		V_3 = ((int32_t)il2cpp_codegen_subtract(L_12, 1));
		goto IL_0142;
	}

IL_005c:
	{
		EntryU5BU5D_t103180204D286AA5897443F7674A3782622F8744* L_13 = (EntryU5BU5D_t103180204D286AA5897443F7674A3782622F8744*)__this->____entries_1;
		int32_t L_14 = V_3;
		NullCheck(L_13);
		V_4 = ((L_13)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_14)));
		Entry_t36D828B685CBBFA5F4D6FBBA12A076C10A21AB3C* L_15 = V_4;
		int32_t L_16 = (int32_t)L_15->___hashCode_0;
		int32_t L_17 = V_0;
		if ((!(((uint32_t)L_16) == ((uint32_t)L_17))))
		{
			goto IL_0138;
		}
	}
	{
		RuntimeObject* L_18 = (RuntimeObject*)__this->____comparer_6;
		RuntimeObject* L_19 = L_18;
		if (L_19)
		{
			G_B10_0 = L_19;
			goto IL_0095;
		}
		G_B9_0 = L_19;
	}
	{
		EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* L_20;
		L_20 = EqualityComparer_1_get_Default_mF70F6C11A35B420DFA4628EE316B087F2DCB280C_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		Entry_t36D828B685CBBFA5F4D6FBBA12A076C10A21AB3C* L_21 = V_4;
		int32_t L_22 = (int32_t)L_21->___key_2;
		int32_t L_23 = ___0_key;
		NullCheck(L_20);
		bool L_24;
		L_24 = VirtualFuncInvoker2< bool, int32_t, int32_t >::Invoke(8, L_20, L_22, L_23);
		G_B11_0 = L_24;
		goto IL_00a2;
	}

IL_0095:
	{
		Entry_t36D828B685CBBFA5F4D6FBBA12A076C10A21AB3C* L_25 = V_4;
		int32_t L_26 = (int32_t)L_25->___key_2;
		int32_t L_27 = ___0_key;
		NullCheck(G_B10_0);
		bool L_28;
		L_28 = InterfaceFuncInvoker2< bool, int32_t, int32_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 1), G_B10_0, L_26, L_27);
		G_B11_0 = L_28;
	}

IL_00a2:
	{
		if (!G_B11_0)
		{
			goto IL_0138;
		}
	}
	{
		int32_t L_29 = V_2;
		if ((((int32_t)L_29) >= ((int32_t)0)))
		{
			goto IL_00be;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_30 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		int32_t L_31 = V_1;
		Entry_t36D828B685CBBFA5F4D6FBBA12A076C10A21AB3C* L_32 = V_4;
		int32_t L_33 = (int32_t)L_32->___next_1;
		NullCheck(L_30);
		(L_30)->SetAt(static_cast<il2cpp_array_size_t>(L_31), (int32_t)((int32_t)il2cpp_codegen_add(L_33, 1)));
		goto IL_00d6;
	}

IL_00be:
	{
		EntryU5BU5D_t103180204D286AA5897443F7674A3782622F8744* L_34 = (EntryU5BU5D_t103180204D286AA5897443F7674A3782622F8744*)__this->____entries_1;
		int32_t L_35 = V_2;
		NullCheck(L_34);
		Entry_t36D828B685CBBFA5F4D6FBBA12A076C10A21AB3C* L_36 = V_4;
		int32_t L_37 = (int32_t)L_36->___next_1;
		((L_34)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_35)))->___next_1 = L_37;
	}

IL_00d6:
	{
		Entry_t36D828B685CBBFA5F4D6FBBA12A076C10A21AB3C* L_38 = V_4;
		L_38->___hashCode_0 = (-1);
		Entry_t36D828B685CBBFA5F4D6FBBA12A076C10A21AB3C* L_39 = V_4;
		int32_t L_40 = (int32_t)__this->____freeList_3;
		L_39->___next_1 = L_40;
		goto IL_00ff;
	}

IL_00ff:
	{
		goto IL_0113;
	}

IL_0113:
	{
		int32_t L_41 = V_3;
		__this->____freeList_3 = L_41;
		int32_t L_42 = (int32_t)__this->____freeCount_4;
		__this->____freeCount_4 = ((int32_t)il2cpp_codegen_add(L_42, 1));
		int32_t L_43 = (int32_t)__this->____version_5;
		__this->____version_5 = ((int32_t)il2cpp_codegen_add(L_43, 1));
		return (bool)1;
	}

IL_0138:
	{
		int32_t L_44 = V_3;
		V_2 = L_44;
		Entry_t36D828B685CBBFA5F4D6FBBA12A076C10A21AB3C* L_45 = V_4;
		int32_t L_46 = (int32_t)L_45->___next_1;
		V_3 = L_46;
	}

IL_0142:
	{
		int32_t L_47 = V_3;
		if ((((int32_t)L_47) >= ((int32_t)0)))
		{
			goto IL_005c;
		}
	}

IL_0149:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_m860D445B386D5BA2AE21A6B60439EFC39B9E2A07_gshared (Dictionary_2_t4D7978E5F7E236382AF32684305AC72452D49043* __this, int32_t ___0_key, ContentHeightCacheInfo_tA616347D46981FC5684B6268FC7035C431E99FBC* ___1_value, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___0_key;
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_mD8B748D3A92124B5F9D01A9C0557BEEB772BD673(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 28));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0025;
		}
	}
	{
		ContentHeightCacheInfo_tA616347D46981FC5684B6268FC7035C431E99FBC* L_3 = ___1_value;
		EntryU5BU5D_t103180204D286AA5897443F7674A3782622F8744* L_4 = (EntryU5BU5D_t103180204D286AA5897443F7674A3782622F8744*)__this->____entries_1;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		ContentHeightCacheInfo_tA616347D46981FC5684B6268FC7035C431E99FBC L_6 = (ContentHeightCacheInfo_tA616347D46981FC5684B6268FC7035C431E99FBC)((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)))->___value_3;
		*(ContentHeightCacheInfo_tA616347D46981FC5684B6268FC7035C431E99FBC*)L_3 = L_6;
		return (bool)1;
	}

IL_0025:
	{
		ContentHeightCacheInfo_tA616347D46981FC5684B6268FC7035C431E99FBC* L_7 = ___1_value;
		il2cpp_codegen_initobj(L_7, sizeof(ContentHeightCacheInfo_tA616347D46981FC5684B6268FC7035C431E99FBC));
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryAdd_mF4B8E73BB789A5AB56B8BEDA4F33674B52C332A8_gshared (Dictionary_2_t4D7978E5F7E236382AF32684305AC72452D49043* __this, int32_t ___0_key, ContentHeightCacheInfo_tA616347D46981FC5684B6268FC7035C431E99FBC ___1_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_key;
		ContentHeightCacheInfo_tA616347D46981FC5684B6268FC7035C431E99FBC L_1 = ___1_value;
		bool L_2;
		L_2 = Dictionary_2_TryInsert_m099201DE2E21B09B51345FF7EF0960AC8BD70E0E(__this, L_0, L_1, (uint8_t)0, il2cpp_rgctx_method(method->klass->rgctx_data, 29));
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m30E4598809515FAF33D59BC09883EAB82AAD1DAE_gshared (Dictionary_2_t4D7978E5F7E236382AF32684305AC72452D49043* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m137070BEE38BF2BABE2721EFDFDE3A71F36D31DE_gshared (Dictionary_2_t4D7978E5F7E236382AF32684305AC72452D49043* __this, KeyValuePair_2U5BU5D_t65371EF32BF577225115397A64E346AE93FE927C* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		KeyValuePair_2U5BU5D_t65371EF32BF577225115397A64E346AE93FE927C* L_0 = ___0_array;
		int32_t L_1 = ___1_index;
		Dictionary_2_CopyTo_m99769053B2973A908BB5E1F3B7547EA43A30C52B(__this, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 42));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_ICollection_CopyTo_m400327205767918A55B346926B0A0E2DF6C80F55_gshared (Dictionary_2_t4D7978E5F7E236382AF32684305AC72452D49043* __this, RuntimeArray* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	KeyValuePair_2U5BU5D_t65371EF32BF577225115397A64E346AE93FE927C* V_0 = NULL;
	DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533* V_1 = NULL;
	EntryU5BU5D_t103180204D286AA5897443F7674A3782622F8744* V_2 = NULL;
	int32_t V_3 = 0;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_4 = NULL;
	int32_t V_5 = 0;
	EntryU5BU5D_t103180204D286AA5897443F7674A3782622F8744* V_6 = NULL;
	int32_t V_7 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeArray* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)3, NULL);
	}

IL_0009:
	{
		RuntimeArray* L_1 = ___0_array;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(L_1, NULL);
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0018;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)7, NULL);
	}

IL_0018:
	{
		RuntimeArray* L_3 = ___0_array;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(L_3, 0, NULL);
		if (!L_4)
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)6, NULL);
	}

IL_0027:
	{
		int32_t L_5 = ___1_index;
		RuntimeArray* L_6 = ___0_array;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(L_6, NULL);
		if ((!(((uint32_t)L_5) > ((uint32_t)L_7))))
		{
			goto IL_0035;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0035:
	{
		RuntimeArray* L_8 = ___0_array;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(L_8, NULL);
		int32_t L_10 = ___1_index;
		int32_t L_11;
		L_11 = Dictionary_2_get_Count_m4816BCB730A3F3AF171687270CB4619FB3C44E1C(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 36));
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_9, L_10))) >= ((int32_t)L_11)))
		{
			goto IL_004b;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)5, NULL);
	}

IL_004b:
	{
		RuntimeArray* L_12 = ___0_array;
		V_0 = ((KeyValuePair_2U5BU5D_t65371EF32BF577225115397A64E346AE93FE927C*)IsInst((RuntimeObject*)L_12, il2cpp_rgctx_data(method->klass->rgctx_data, 35)));
		KeyValuePair_2U5BU5D_t65371EF32BF577225115397A64E346AE93FE927C* L_13 = V_0;
		if (!L_13)
		{
			goto IL_005e;
		}
	}
	{
		KeyValuePair_2U5BU5D_t65371EF32BF577225115397A64E346AE93FE927C* L_14 = V_0;
		int32_t L_15 = ___1_index;
		Dictionary_2_CopyTo_m99769053B2973A908BB5E1F3B7547EA43A30C52B(__this, L_14, L_15, il2cpp_rgctx_method(method->klass->rgctx_data, 42));
		return;
	}

IL_005e:
	{
		RuntimeArray* L_16 = ___0_array;
		V_1 = ((DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533*)IsInst((RuntimeObject*)L_16, DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533_il2cpp_TypeInfo_var));
		DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533* L_17 = V_1;
		if (!L_17)
		{
			goto IL_00c3;
		}
	}
	{
		EntryU5BU5D_t103180204D286AA5897443F7674A3782622F8744* L_18 = (EntryU5BU5D_t103180204D286AA5897443F7674A3782622F8744*)__this->____entries_1;
		V_2 = L_18;
		V_3 = 0;
		goto IL_00b9;
	}

IL_0073:
	{
		EntryU5BU5D_t103180204D286AA5897443F7674A3782622F8744* L_19 = V_2;
		int32_t L_20 = V_3;
		NullCheck(L_19);
		int32_t L_21 = (int32_t)((L_19)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_20)))->___hashCode_0;
		if ((((int32_t)L_21) < ((int32_t)0)))
		{
			goto IL_00b5;
		}
	}
	{
		DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533* L_22 = V_1;
		int32_t L_23 = ___1_index;
		int32_t L_24 = L_23;
		___1_index = ((int32_t)il2cpp_codegen_add(L_24, 1));
		EntryU5BU5D_t103180204D286AA5897443F7674A3782622F8744* L_25 = V_2;
		int32_t L_26 = V_3;
		NullCheck(L_25);
		int32_t L_27 = (int32_t)((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___key_2;
		int32_t L_28 = L_27;
		RuntimeObject* L_29 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14), &L_28);
		EntryU5BU5D_t103180204D286AA5897443F7674A3782622F8744* L_30 = V_2;
		int32_t L_31 = V_3;
		NullCheck(L_30);
		ContentHeightCacheInfo_tA616347D46981FC5684B6268FC7035C431E99FBC L_32 = (ContentHeightCacheInfo_tA616347D46981FC5684B6268FC7035C431E99FBC)((L_30)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_31)))->___value_3;
		ContentHeightCacheInfo_tA616347D46981FC5684B6268FC7035C431E99FBC L_33 = L_32;
		RuntimeObject* L_34 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15), &L_33);
		DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB L_35;
		memset((&L_35), 0, sizeof(L_35));
		DictionaryEntry__ctor_m2768353E53A75C4860E34B37DAF1342120C5D1EA((&L_35), L_29, L_34, NULL);
		NullCheck(L_22);
		(L_22)->SetAt(static_cast<il2cpp_array_size_t>(L_24), (DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB)L_35);
	}

IL_00b5:
	{
		int32_t L_36 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_36, 1));
	}

IL_00b9:
	{
		int32_t L_37 = V_3;
		int32_t L_38 = (int32_t)__this->____count_2;
		if ((((int32_t)L_37) < ((int32_t)L_38)))
		{
			goto IL_0073;
		}
	}
	{
		return;
	}

IL_00c3:
	{
		RuntimeArray* L_39 = ___0_array;
		V_4 = ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)IsInst((RuntimeObject*)L_39, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_40 = V_4;
		if (L_40)
		{
			goto IL_00d4;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
	}

IL_00d4:
	{
	}
	try
	{
		{
			int32_t L_41 = (int32_t)__this->____count_2;
			V_5 = L_41;
			EntryU5BU5D_t103180204D286AA5897443F7674A3782622F8744* L_42 = (EntryU5BU5D_t103180204D286AA5897443F7674A3782622F8744*)__this->____entries_1;
			V_6 = L_42;
			V_7 = 0;
			goto IL_0130_1;
		}

IL_00ea_1:
		{
			EntryU5BU5D_t103180204D286AA5897443F7674A3782622F8744* L_43 = V_6;
			int32_t L_44 = V_7;
			NullCheck(L_43);
			int32_t L_45 = (int32_t)((L_43)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_44)))->___hashCode_0;
			if ((((int32_t)L_45) < ((int32_t)0)))
			{
				goto IL_012a_1;
			}
		}
		{
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_46 = V_4;
			int32_t L_47 = ___1_index;
			int32_t L_48 = L_47;
			___1_index = ((int32_t)il2cpp_codegen_add(L_48, 1));
			EntryU5BU5D_t103180204D286AA5897443F7674A3782622F8744* L_49 = V_6;
			int32_t L_50 = V_7;
			NullCheck(L_49);
			int32_t L_51 = (int32_t)((L_49)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_50)))->___key_2;
			EntryU5BU5D_t103180204D286AA5897443F7674A3782622F8744* L_52 = V_6;
			int32_t L_53 = V_7;
			NullCheck(L_52);
			ContentHeightCacheInfo_tA616347D46981FC5684B6268FC7035C431E99FBC L_54 = (ContentHeightCacheInfo_tA616347D46981FC5684B6268FC7035C431E99FBC)((L_52)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_53)))->___value_3;
			KeyValuePair_2_tE3EA5100FA35C94F54D8D5F93B806E7614C34DBD L_55;
			memset((&L_55), 0, sizeof(L_55));
			KeyValuePair_2__ctor_mE1295E1EB09A4C3624F079C94EE6A9ED1D66EE26((&L_55), L_51, L_54, il2cpp_rgctx_method(method->klass->rgctx_data, 37));
			KeyValuePair_2_tE3EA5100FA35C94F54D8D5F93B806E7614C34DBD L_56 = L_55;
			RuntimeObject* L_57 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 21), &L_56);
			NullCheck(L_46);
			ArrayElementTypeCheck (L_46, L_57);
			(L_46)->SetAt(static_cast<il2cpp_array_size_t>(L_48), (RuntimeObject*)L_57);
		}

IL_012a_1:
		{
			int32_t L_58 = V_7;
			V_7 = ((int32_t)il2cpp_codegen_add(L_58, 1));
		}

IL_0130_1:
		{
			int32_t L_59 = V_7;
			int32_t L_60 = V_5;
			if ((((int32_t)L_59) < ((int32_t)L_60)))
			{
				goto IL_00ea_1;
			}
		}
		{
			goto IL_0140;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0138;
		}
		throw e;
	}

CATCH_0138:
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0140;
	}

IL_0140:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IEnumerable_GetEnumerator_mCF29C2218E6DE77AB4C54CD3B862EEC5AED93582_gshared (Dictionary_2_t4D7978E5F7E236382AF32684305AC72452D49043* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_tB7C64CFA6D1E8072BF063A54A9F6CB6B8021170F L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m31B9A15C37D5A017654810B5B55B5C415CBAF885((&L_0), __this, 2, il2cpp_rgctx_method(method->klass->rgctx_data, 39));
		Enumerator_tB7C64CFA6D1E8072BF063A54A9F6CB6B8021170F L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 38), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_ICollection_get_SyncRoot_m79A9BCF1D58852835CD84DC50F7B19104B5FD0D0_gshared (Dictionary_2_t4D7978E5F7E236382AF32684305AC72452D49043* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->____syncRoot_9;
		if (L_0)
		{
			goto IL_001a;
		}
	}
	{
		RuntimeObject** L_1 = (RuntimeObject**)(&__this->____syncRoot_9);
		RuntimeObject* L_2 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_2, NULL);
		RuntimeObject* L_3;
		L_3 = InterlockedCompareExchangeImpl<RuntimeObject*>(L_1, L_2, NULL);
	}

IL_001a:
	{
		RuntimeObject* L_4 = (RuntimeObject*)__this->____syncRoot_9;
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IDictionary_get_Keys_m2F5C9103543CA85F69ACB7A2D55C821FA4F58542_gshared (Dictionary_2_t4D7978E5F7E236382AF32684305AC72452D49043* __this, const RuntimeMethod* method) 
{
	{
		KeyCollection_t1C0270D8CA819EF870A1AB2BDF71FF7D9967AC6C* L_0;
		L_0 = Dictionary_2_get_Keys_m51677F3B9C4444ABDCE7161B61DB5210D2378079(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 55));
		return (RuntimeObject*)L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IDictionary_get_Item_m233C2AF87E76D637D1BCCC2496D9C58FFCDD4781_gshared (Dictionary_2_t4D7978E5F7E236382AF32684305AC72452D49043* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		RuntimeObject* L_0 = ___0_key;
		bool L_1;
		L_1 = Dictionary_2_IsCompatibleKey_m078096C30896035127EB311E1323AD6D04F7B024(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 56));
		if (!L_1)
		{
			goto IL_0030;
		}
	}
	{
		RuntimeObject* L_2 = ___0_key;
		int32_t L_3;
		L_3 = Dictionary_2_FindEntry_mD8B748D3A92124B5F9D01A9C0557BEEB772BD673(__this, ((*(int32_t*)((int32_t*)(int32_t*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 14))))), il2cpp_rgctx_method(method->klass->rgctx_data, 28));
		V_0 = L_3;
		int32_t L_4 = V_0;
		if ((((int32_t)L_4) < ((int32_t)0)))
		{
			goto IL_0030;
		}
	}
	{
		EntryU5BU5D_t103180204D286AA5897443F7674A3782622F8744* L_5 = (EntryU5BU5D_t103180204D286AA5897443F7674A3782622F8744*)__this->____entries_1;
		int32_t L_6 = V_0;
		NullCheck(L_5);
		ContentHeightCacheInfo_tA616347D46981FC5684B6268FC7035C431E99FBC L_7 = (ContentHeightCacheInfo_tA616347D46981FC5684B6268FC7035C431E99FBC)((L_5)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_6)))->___value_3;
		ContentHeightCacheInfo_tA616347D46981FC5684B6268FC7035C431E99FBC L_8 = L_7;
		RuntimeObject* L_9 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15), &L_8);
		return L_9;
	}

IL_0030:
	{
		return NULL;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_IDictionary_set_Item_m583833307F5DED869F8195A64580CD04EAA71510_gshared (Dictionary_2_t4D7978E5F7E236382AF32684305AC72452D49043* __this, RuntimeObject* ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 2> __active_exceptions;
	{
		RuntimeObject* L_0 = ___0_key;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)5, NULL);
	}

IL_0009:
	{
		RuntimeObject* L_1 = ___1_value;
		ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisContentHeightCacheInfo_tA616347D46981FC5684B6268FC7035C431E99FBC_m1CB4F3E56295F4B5567E64280A4ACECF3FC671D6(L_1, (int32_t)((int32_t)15), il2cpp_rgctx_method(method->klass->rgctx_data, 58));
	}
	try
	{
		{
			RuntimeObject* L_2 = ___0_key;
			V_0 = ((*(int32_t*)((int32_t*)(int32_t*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 14)))));
		}
		try
		{
			int32_t L_3 = V_0;
			RuntimeObject* L_4 = ___1_value;
			Dictionary_2_set_Item_mA2D31862FA96D8794126CAA7B1E178B08B6BB566(__this, L_3, ((*(ContentHeightCacheInfo_tA616347D46981FC5684B6268FC7035C431E99FBC*)((ContentHeightCacheInfo_tA616347D46981FC5684B6268FC7035C431E99FBC*)(ContentHeightCacheInfo_tA616347D46981FC5684B6268FC7035C431E99FBC*)UnBox(L_4, il2cpp_rgctx_data(method->klass->rgctx_data, 15))))), il2cpp_rgctx_method(method->klass->rgctx_data, 59));
			goto IL_003a_1;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_0027_1;
			}
			throw e;
		}

CATCH_0027_1:
		{
			RuntimeObject* L_5 = ___1_value;
			RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 60)) };
			il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
			Type_t* L_7;
			L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
			ThrowHelper_ThrowWrongValueTypeArgumentException_mC1A6BBE43C360583C1E2C463D5B0AADF1E3E1910(L_5, L_7, NULL);
			IL2CPP_POP_ACTIVE_EXCEPTION();
			goto IL_003a_1;
		}

IL_003a_1:
		{
			goto IL_004f;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_003c;
		}
		throw e;
	}

CATCH_003c:
	{
		RuntimeObject* L_8 = ___0_key;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_9 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 61)) };
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
		Type_t* L_10;
		L_10 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_9, NULL);
		ThrowHelper_ThrowWrongKeyTypeArgumentException_m90E5BCE2CB10EEC16F254C237121C6816C4D6982(L_8, L_10, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_004f;
	}

IL_004f:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_IsCompatibleKey_m078096C30896035127EB311E1323AD6D04F7B024_gshared (RuntimeObject* ___0_key, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_key;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)5, NULL);
	}

IL_0009:
	{
		RuntimeObject* L_1 = ___0_key;
		return (bool)((!(((RuntimeObject*)(RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_1, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 14)))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_IDictionary_Contains_mCA0B5A2672FEA304CD418B553276B650FDC7D015_gshared (Dictionary_2_t4D7978E5F7E236382AF32684305AC72452D49043* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_key;
		bool L_1;
		L_1 = Dictionary_2_IsCompatibleKey_m078096C30896035127EB311E1323AD6D04F7B024(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 56));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_key;
		bool L_3;
		L_3 = Dictionary_2_ContainsKey_m39C81870CD15FA7F0BD586D3BCF55C5B1D7D4005(__this, ((*(int32_t*)((int32_t*)(int32_t*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 14))))), il2cpp_rgctx_method(method->klass->rgctx_data, 62));
		return L_3;
	}

IL_0015:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IDictionary_GetEnumerator_m0B0ACC95E2DC87125EFA4C17CD2F32454F489864_gshared (Dictionary_2_t4D7978E5F7E236382AF32684305AC72452D49043* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_tB7C64CFA6D1E8072BF063A54A9F6CB6B8021170F L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m31B9A15C37D5A017654810B5B55B5C415CBAF885((&L_0), __this, 1, il2cpp_rgctx_method(method->klass->rgctx_data, 39));
		Enumerator_tB7C64CFA6D1E8072BF063A54A9F6CB6B8021170F L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 38), &L_1);
		return (RuntimeObject*)L_2;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mAF44352189C213E301670BCDA03E8864D98CBC16_gshared (Dictionary_2_tC44035903CD447F30151D3470629A0598D22856F* __this, const RuntimeMethod* method) 
{
	{
		Dictionary_2__ctor_mEDCF6D7DF49A4332BEC24CFBE3157E2598FC54F5(__this, 0, (RuntimeObject*)NULL, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m88A9D12036C80CB033298F11A288715B9127F81A_gshared (Dictionary_2_tC44035903CD447F30151D3470629A0598D22856F* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_capacity;
		Dictionary_2__ctor_mEDCF6D7DF49A4332BEC24CFBE3157E2598FC54F5(__this, L_0, (RuntimeObject*)NULL, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m7B9030C930A4ACE472083DEEF86A3CF0CA37D40F_gshared (Dictionary_2_tC44035903CD447F30151D3470629A0598D22856F* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_comparer;
		Dictionary_2__ctor_mEDCF6D7DF49A4332BEC24CFBE3157E2598FC54F5(__this, 0, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mEDCF6D7DF49A4332BEC24CFBE3157E2598FC54F5_gshared (Dictionary_2_tC44035903CD447F30151D3470629A0598D22856F* __this, int32_t ___0_capacity, RuntimeObject* ___1_comparer, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		int32_t L_0 = ___0_capacity;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0011;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m9B335696876184D17D1F8D7AF94C1B5B0869AA97((int32_t)((int32_t)12), NULL);
	}

IL_0011:
	{
		int32_t L_1 = ___0_capacity;
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_001d;
		}
	}
	{
		int32_t L_2 = ___0_capacity;
		int32_t L_3;
		L_3 = Dictionary_2_Initialize_m55DBA94CA01715093AF33B0FF44EB7AFD5AEAB36(__this, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
	}

IL_001d:
	{
		RuntimeObject* L_4 = ___1_comparer;
		EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* L_5;
		L_5 = EqualityComparer_1_get_Default_mF70F6C11A35B420DFA4628EE316B087F2DCB280C_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		if ((((RuntimeObject*)(RuntimeObject*)L_4) == ((RuntimeObject*)(EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC*)L_5)))
		{
			goto IL_002c;
		}
	}
	{
		RuntimeObject* L_6 = ___1_comparer;
		__this->____comparer_6 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____comparer_6), (void*)L_6);
	}

IL_002c:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m5600602C1A2561132C033A4C251B2E544430267D_gshared (Dictionary_2_tC44035903CD447F30151D3470629A0598D22856F* __this, RuntimeObject* ___0_dictionary, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_dictionary;
		Dictionary_2__ctor_m2A43B8E808B5C24C12C2DAA6EF9747BB2AE8787B(__this, L_0, (RuntimeObject*)NULL, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m2A43B8E808B5C24C12C2DAA6EF9747BB2AE8787B_gshared (Dictionary_2_tC44035903CD447F30151D3470629A0598D22856F* __this, RuntimeObject* ___0_dictionary, RuntimeObject* ___1_comparer, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	EntryU5BU5D_tD89AF257A311DB3C41DA1BEE9D8F0B2E5EA7E86E* V_1 = NULL;
	int32_t V_2 = 0;
	RuntimeObject* V_3 = NULL;
	KeyValuePair_2_tCA9456FCC0FBD03E0C9FF69F0B168B558FD2A5ED V_4;
	memset((&V_4), 0, sizeof(V_4));
	Dictionary_2_tC44035903CD447F30151D3470629A0598D22856F* G_B2_0 = NULL;
	Dictionary_2_tC44035903CD447F30151D3470629A0598D22856F* G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	Dictionary_2_tC44035903CD447F30151D3470629A0598D22856F* G_B3_1 = NULL;
	{
		RuntimeObject* L_0 = ___0_dictionary;
		if (L_0)
		{
			G_B2_0 = __this;
			goto IL_0007;
		}
		G_B1_0 = __this;
	}
	{
		G_B3_0 = 0;
		G_B3_1 = G_B1_0;
		goto IL_000d;
	}

IL_0007:
	{
		RuntimeObject* L_1 = ___0_dictionary;
		NullCheck((RuntimeObject*)L_1);
		int32_t L_2;
		L_2 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 9), (RuntimeObject*)L_1);
		G_B3_0 = L_2;
		G_B3_1 = G_B2_0;
	}

IL_000d:
	{
		RuntimeObject* L_3 = ___1_comparer;
		Dictionary_2__ctor_mEDCF6D7DF49A4332BEC24CFBE3157E2598FC54F5(G_B3_1, G_B3_0, L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		RuntimeObject* L_4 = ___0_dictionary;
		if (L_4)
		{
			goto IL_001c;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)1, NULL);
	}

IL_001c:
	{
		RuntimeObject* L_5 = ___0_dictionary;
		NullCheck((RuntimeObject*)L_5);
		Type_t* L_6;
		L_6 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3((RuntimeObject*)L_5, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 11)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		bool L_9;
		L_9 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_6, L_8, NULL);
		if (!L_9)
		{
			goto IL_0080;
		}
	}
	{
		RuntimeObject* L_10 = ___0_dictionary;
		Dictionary_2_tC44035903CD447F30151D3470629A0598D22856F* L_11 = ((Dictionary_2_tC44035903CD447F30151D3470629A0598D22856F*)CastclassClass((RuntimeObject*)L_10, il2cpp_rgctx_data(method->klass->rgctx_data, 6)));
		NullCheck(L_11);
		int32_t L_12 = (int32_t)L_11->____count_2;
		V_0 = L_12;
		NullCheck(L_11);
		EntryU5BU5D_tD89AF257A311DB3C41DA1BEE9D8F0B2E5EA7E86E* L_13 = (EntryU5BU5D_tD89AF257A311DB3C41DA1BEE9D8F0B2E5EA7E86E*)L_11->____entries_1;
		V_1 = L_13;
		V_2 = 0;
		goto IL_007b;
	}

IL_004a:
	{
		EntryU5BU5D_tD89AF257A311DB3C41DA1BEE9D8F0B2E5EA7E86E* L_14 = V_1;
		int32_t L_15 = V_2;
		NullCheck(L_14);
		int32_t L_16 = (int32_t)((L_14)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_15)))->___hashCode_0;
		if ((((int32_t)L_16) < ((int32_t)0)))
		{
			goto IL_0077;
		}
	}
	{
		EntryU5BU5D_tD89AF257A311DB3C41DA1BEE9D8F0B2E5EA7E86E* L_17 = V_1;
		int32_t L_18 = V_2;
		NullCheck(L_17);
		int32_t L_19 = (int32_t)((L_17)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_18)))->___key_2;
		EntryU5BU5D_tD89AF257A311DB3C41DA1BEE9D8F0B2E5EA7E86E* L_20 = V_1;
		int32_t L_21 = V_2;
		NullCheck(L_20);
		TreeViewItemData_1_t95D9721135F40D0DB3D221F8EB2543C396D350F4 L_22 = (TreeViewItemData_1_t95D9721135F40D0DB3D221F8EB2543C396D350F4)((L_20)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_21)))->___value_3;
		Dictionary_2_Add_mFE603469AB888F7C8EF9DE3392E9461867390BDC(__this, L_19, L_22, il2cpp_rgctx_method(method->klass->rgctx_data, 16));
	}

IL_0077:
	{
		int32_t L_23 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_23, 1));
	}

IL_007b:
	{
		int32_t L_24 = V_2;
		int32_t L_25 = V_0;
		if ((((int32_t)L_24) < ((int32_t)L_25)))
		{
			goto IL_004a;
		}
	}
	{
		return;
	}

IL_0080:
	{
		RuntimeObject* L_26 = ___0_dictionary;
		NullCheck((RuntimeObject*)L_26);
		RuntimeObject* L_27;
		L_27 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 17), (RuntimeObject*)L_26);
		V_3 = L_27;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00af:
			{
				{
					RuntimeObject* L_28 = V_3;
					if (!L_28)
					{
						goto IL_00b8;
					}
				}
				{
					RuntimeObject* L_29 = V_3;
					NullCheck((RuntimeObject*)L_29);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_29);
				}

IL_00b8:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_00a5_1;
			}

IL_0089_1:
			{
				RuntimeObject* L_30 = V_3;
				NullCheck(L_30);
				KeyValuePair_2_tCA9456FCC0FBD03E0C9FF69F0B168B558FD2A5ED L_31;
				L_31 = InterfaceFuncInvoker0< KeyValuePair_2_tCA9456FCC0FBD03E0C9FF69F0B168B558FD2A5ED >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 19), L_30);
				V_4 = L_31;
				int32_t L_32;
				L_32 = KeyValuePair_2_get_Key_mD6A5670D5DD71BBE95D274ADC916CFD0F5E3FAA6_inline((&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 22));
				TreeViewItemData_1_t95D9721135F40D0DB3D221F8EB2543C396D350F4 L_33;
				L_33 = KeyValuePair_2_get_Value_m658D03DA62B8E16BD8C96D037C38C9AC87442BAF_inline((&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 23));
				Dictionary_2_Add_mFE603469AB888F7C8EF9DE3392E9461867390BDC(__this, L_32, L_33, il2cpp_rgctx_method(method->klass->rgctx_data, 16));
			}

IL_00a5_1:
			{
				RuntimeObject* L_34 = V_3;
				NullCheck((RuntimeObject*)L_34);
				bool L_35;
				L_35 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_34);
				if (L_35)
				{
					goto IL_0089_1;
				}
			}
			{
				goto IL_00b9;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00b9:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m779242666134EFB1D49EC3D16454815C845F0917_gshared (Dictionary_2_tC44035903CD447F30151D3470629A0598D22856F* __this, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___0_info, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___1_context, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConditionalWeakTable_2_Add_mF98A2811734A37D856C622E7783FD7502AA7F0B7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* L_0;
		L_0 = HashHelpers_get_SerializationInfoTable_m8C17D5483B39B68897AEFFD14A9E139AF858222F(NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_1 = ___0_info;
		NullCheck(L_0);
		ConditionalWeakTable_2_Add_mF98A2811734A37D856C622E7783FD7502AA7F0B7(L_0, (RuntimeObject*)__this, L_1, ConditionalWeakTable_2_Add_mF98A2811734A37D856C622E7783FD7502AA7F0B7_RuntimeMethod_var);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_get_Count_mB6EB1F2269F19C3B1119FD6DDA8B51155F7BE2E3_gshared (Dictionary_2_tC44035903CD447F30151D3470629A0598D22856F* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____count_2;
		int32_t L_1 = (int32_t)__this->____freeCount_4;
		return ((int32_t)il2cpp_codegen_subtract(L_0, L_1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyCollection_t27A4E9C75C7D4062FA62AB82C4F9EBE443BD465A* Dictionary_2_get_Keys_mCA75818A897B564BAA7874AA2D7F8E257A06BF0B_gshared (Dictionary_2_tC44035903CD447F30151D3470629A0598D22856F* __this, const RuntimeMethod* method) 
{
	{
		KeyCollection_t27A4E9C75C7D4062FA62AB82C4F9EBE443BD465A* L_0 = (KeyCollection_t27A4E9C75C7D4062FA62AB82C4F9EBE443BD465A*)__this->____keys_7;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		KeyCollection_t27A4E9C75C7D4062FA62AB82C4F9EBE443BD465A* L_1 = (KeyCollection_t27A4E9C75C7D4062FA62AB82C4F9EBE443BD465A*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 24));
		KeyCollection__ctor_m6454D86CFBA0EE602C78B5A4BB6612FE16D59D00(L_1, __this, il2cpp_rgctx_method(method->klass->rgctx_data, 25));
		__this->____keys_7 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____keys_7), (void*)L_1);
	}

IL_0014:
	{
		KeyCollection_t27A4E9C75C7D4062FA62AB82C4F9EBE443BD465A* L_2 = (KeyCollection_t27A4E9C75C7D4062FA62AB82C4F9EBE443BD465A*)__this->____keys_7;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueCollection_t155E307D9195A7BE8C4DE53C867A8CEBA24805BF* Dictionary_2_get_Values_mA9AAA6A442AC42421A6D1627081EC9886220C9B2_gshared (Dictionary_2_tC44035903CD447F30151D3470629A0598D22856F* __this, const RuntimeMethod* method) 
{
	{
		ValueCollection_t155E307D9195A7BE8C4DE53C867A8CEBA24805BF* L_0 = (ValueCollection_t155E307D9195A7BE8C4DE53C867A8CEBA24805BF*)__this->____values_8;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ValueCollection_t155E307D9195A7BE8C4DE53C867A8CEBA24805BF* L_1 = (ValueCollection_t155E307D9195A7BE8C4DE53C867A8CEBA24805BF*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 26));
		ValueCollection__ctor_m6BB7131D664E022D2E39E555E28E3E1E6675325F(L_1, __this, il2cpp_rgctx_method(method->klass->rgctx_data, 27));
		__this->____values_8 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____values_8), (void*)L_1);
	}

IL_0014:
	{
		ValueCollection_t155E307D9195A7BE8C4DE53C867A8CEBA24805BF* L_2 = (ValueCollection_t155E307D9195A7BE8C4DE53C867A8CEBA24805BF*)__this->____values_8;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TreeViewItemData_1_t95D9721135F40D0DB3D221F8EB2543C396D350F4 Dictionary_2_get_Item_mDBD227A6DCB15DFCFCE56FF91917592519DC25EE_gshared (Dictionary_2_tC44035903CD447F30151D3470629A0598D22856F* __this, int32_t ___0_key, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	TreeViewItemData_1_t95D9721135F40D0DB3D221F8EB2543C396D350F4 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		int32_t L_0 = ___0_key;
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_mB1F48D02466EA489E158922AAE99F45DB56C9FB9(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 28));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_001e;
		}
	}
	{
		EntryU5BU5D_tD89AF257A311DB3C41DA1BEE9D8F0B2E5EA7E86E* L_3 = (EntryU5BU5D_tD89AF257A311DB3C41DA1BEE9D8F0B2E5EA7E86E*)__this->____entries_1;
		int32_t L_4 = V_0;
		NullCheck(L_3);
		TreeViewItemData_1_t95D9721135F40D0DB3D221F8EB2543C396D350F4 L_5 = (TreeViewItemData_1_t95D9721135F40D0DB3D221F8EB2543C396D350F4)((L_3)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_4)))->___value_3;
		return L_5;
	}

IL_001e:
	{
		int32_t L_6 = ___0_key;
		int32_t L_7 = L_6;
		RuntimeObject* L_8 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14), &L_7);
		ThrowHelper_ThrowKeyNotFoundException_m6A17735FA486AD43F2488DE39B755AC60BC99CE7(L_8, NULL);
		il2cpp_codegen_initobj((&V_1), sizeof(TreeViewItemData_1_t95D9721135F40D0DB3D221F8EB2543C396D350F4));
		TreeViewItemData_1_t95D9721135F40D0DB3D221F8EB2543C396D350F4 L_9 = V_1;
		return L_9;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_m6ACCDAA15A3D3B734405727DF8AD5AD09BA14333_gshared (Dictionary_2_tC44035903CD447F30151D3470629A0598D22856F* __this, int32_t ___0_key, TreeViewItemData_1_t95D9721135F40D0DB3D221F8EB2543C396D350F4 ___1_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_key;
		TreeViewItemData_1_t95D9721135F40D0DB3D221F8EB2543C396D350F4 L_1 = ___1_value;
		bool L_2;
		L_2 = Dictionary_2_TryInsert_mAC235DEF75BD8560A1598E0744B7CC55359D6B4B(__this, L_0, L_1, (uint8_t)1, il2cpp_rgctx_method(method->klass->rgctx_data, 29));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_mFE603469AB888F7C8EF9DE3392E9461867390BDC_gshared (Dictionary_2_tC44035903CD447F30151D3470629A0598D22856F* __this, int32_t ___0_key, TreeViewItemData_1_t95D9721135F40D0DB3D221F8EB2543C396D350F4 ___1_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_key;
		TreeViewItemData_1_t95D9721135F40D0DB3D221F8EB2543C396D350F4 L_1 = ___1_value;
		bool L_2;
		L_2 = Dictionary_2_TryInsert_mAC235DEF75BD8560A1598E0744B7CC55359D6B4B(__this, L_0, L_1, (uint8_t)2, il2cpp_rgctx_method(method->klass->rgctx_data, 29));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m91ED4428222F628232971AF05FB7F78EC3F046EB_gshared (Dictionary_2_tC44035903CD447F30151D3470629A0598D22856F* __this, KeyValuePair_2_tCA9456FCC0FBD03E0C9FF69F0B168B558FD2A5ED ___0_keyValuePair, const RuntimeMethod* method) 
{
	{
		int32_t L_0;
		L_0 = KeyValuePair_2_get_Key_mD6A5670D5DD71BBE95D274ADC916CFD0F5E3FAA6_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		TreeViewItemData_1_t95D9721135F40D0DB3D221F8EB2543C396D350F4 L_1;
		L_1 = KeyValuePair_2_get_Value_m658D03DA62B8E16BD8C96D037C38C9AC87442BAF_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		Dictionary_2_Add_mFE603469AB888F7C8EF9DE3392E9461867390BDC(__this, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 16));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m41A535BB3AA16BE4EB22975CF60C24CFD322A6A7_gshared (Dictionary_2_tC44035903CD447F30151D3470629A0598D22856F* __this, KeyValuePair_2_tCA9456FCC0FBD03E0C9FF69F0B168B558FD2A5ED ___0_keyValuePair, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0;
		L_0 = KeyValuePair_2_get_Key_mD6A5670D5DD71BBE95D274ADC916CFD0F5E3FAA6_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_mB1F48D02466EA489E158922AAE99F45DB56C9FB9(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 28));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0038;
		}
	}
	{
		EqualityComparer_1_t8DFD15807C95203DA08FAD2838BD16CE1C70A17E* L_3;
		L_3 = EqualityComparer_1_get_Default_m36D51346E7AD3770CF007C780BD7F59736E21F77_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 30));
		EntryU5BU5D_tD89AF257A311DB3C41DA1BEE9D8F0B2E5EA7E86E* L_4 = (EntryU5BU5D_tD89AF257A311DB3C41DA1BEE9D8F0B2E5EA7E86E*)__this->____entries_1;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		TreeViewItemData_1_t95D9721135F40D0DB3D221F8EB2543C396D350F4 L_6 = (TreeViewItemData_1_t95D9721135F40D0DB3D221F8EB2543C396D350F4)((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)))->___value_3;
		TreeViewItemData_1_t95D9721135F40D0DB3D221F8EB2543C396D350F4 L_7;
		L_7 = KeyValuePair_2_get_Value_m658D03DA62B8E16BD8C96D037C38C9AC87442BAF_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		NullCheck(L_3);
		bool L_8;
		L_8 = VirtualFuncInvoker2< bool, TreeViewItemData_1_t95D9721135F40D0DB3D221F8EB2543C396D350F4, TreeViewItemData_1_t95D9721135F40D0DB3D221F8EB2543C396D350F4 >::Invoke(8, L_3, L_6, L_7);
		if (!L_8)
		{
			goto IL_0038;
		}
	}
	{
		return (bool)1;
	}

IL_0038:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_mA2362FD46C17F2D1A4B93EB8AB3DD739C1289011_gshared (Dictionary_2_tC44035903CD447F30151D3470629A0598D22856F* __this, KeyValuePair_2_tCA9456FCC0FBD03E0C9FF69F0B168B558FD2A5ED ___0_keyValuePair, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0;
		L_0 = KeyValuePair_2_get_Key_mD6A5670D5DD71BBE95D274ADC916CFD0F5E3FAA6_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_mB1F48D02466EA489E158922AAE99F45DB56C9FB9(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 28));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0046;
		}
	}
	{
		EqualityComparer_1_t8DFD15807C95203DA08FAD2838BD16CE1C70A17E* L_3;
		L_3 = EqualityComparer_1_get_Default_m36D51346E7AD3770CF007C780BD7F59736E21F77_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 30));
		EntryU5BU5D_tD89AF257A311DB3C41DA1BEE9D8F0B2E5EA7E86E* L_4 = (EntryU5BU5D_tD89AF257A311DB3C41DA1BEE9D8F0B2E5EA7E86E*)__this->____entries_1;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		TreeViewItemData_1_t95D9721135F40D0DB3D221F8EB2543C396D350F4 L_6 = (TreeViewItemData_1_t95D9721135F40D0DB3D221F8EB2543C396D350F4)((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)))->___value_3;
		TreeViewItemData_1_t95D9721135F40D0DB3D221F8EB2543C396D350F4 L_7;
		L_7 = KeyValuePair_2_get_Value_m658D03DA62B8E16BD8C96D037C38C9AC87442BAF_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		NullCheck(L_3);
		bool L_8;
		L_8 = VirtualFuncInvoker2< bool, TreeViewItemData_1_t95D9721135F40D0DB3D221F8EB2543C396D350F4, TreeViewItemData_1_t95D9721135F40D0DB3D221F8EB2543C396D350F4 >::Invoke(8, L_3, L_6, L_7);
		if (!L_8)
		{
			goto IL_0046;
		}
	}
	{
		int32_t L_9;
		L_9 = KeyValuePair_2_get_Key_mD6A5670D5DD71BBE95D274ADC916CFD0F5E3FAA6_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		bool L_10;
		L_10 = Dictionary_2_Remove_m0ABB3BBBBDA393DEDC19A0F0943D8AF9E58F785B(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 34));
		return (bool)1;
	}

IL_0046:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Clear_m43644FC8C5F85236223BAB42745A03B62371A088_gshared (Dictionary_2_tC44035903CD447F30151D3470629A0598D22856F* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = (int32_t)__this->____count_2;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_0041;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		NullCheck(L_3);
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_2, 0, ((int32_t)(((RuntimeArray*)L_3)->max_length)), NULL);
		__this->____count_2 = 0;
		__this->____freeList_3 = (-1);
		__this->____freeCount_4 = 0;
		EntryU5BU5D_tD89AF257A311DB3C41DA1BEE9D8F0B2E5EA7E86E* L_4 = (EntryU5BU5D_tD89AF257A311DB3C41DA1BEE9D8F0B2E5EA7E86E*)__this->____entries_1;
		int32_t L_5 = V_0;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_4, 0, L_5, NULL);
	}

IL_0041:
	{
		int32_t L_6 = (int32_t)__this->____version_5;
		__this->____version_5 = ((int32_t)il2cpp_codegen_add(L_6, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_m66D807D27A003B8D2BAC644F46131821F92790CE_gshared (Dictionary_2_tC44035903CD447F30151D3470629A0598D22856F* __this, int32_t ___0_key, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_key;
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_mB1F48D02466EA489E158922AAE99F45DB56C9FB9(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 28));
		return (bool)((((int32_t)((((int32_t)L_1) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsValue_m7BB14CD563E10A97497C49F092CC2D3E530F43D9_gshared (Dictionary_2_tC44035903CD447F30151D3470629A0598D22856F* __this, TreeViewItemData_1_t95D9721135F40D0DB3D221F8EB2543C396D350F4 ___0_value, const RuntimeMethod* method) 
{
	EntryU5BU5D_tD89AF257A311DB3C41DA1BEE9D8F0B2E5EA7E86E* V_0 = NULL;
	int32_t V_1 = 0;
	TreeViewItemData_1_t95D9721135F40D0DB3D221F8EB2543C396D350F4 V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	EqualityComparer_1_t8DFD15807C95203DA08FAD2838BD16CE1C70A17E* V_4 = NULL;
	int32_t V_5 = 0;
	{
		EntryU5BU5D_tD89AF257A311DB3C41DA1BEE9D8F0B2E5EA7E86E* L_0 = (EntryU5BU5D_tD89AF257A311DB3C41DA1BEE9D8F0B2E5EA7E86E*)__this->____entries_1;
		V_0 = L_0;
		goto IL_0049;
	}

IL_0049:
	{
		il2cpp_codegen_initobj((&V_2), sizeof(TreeViewItemData_1_t95D9721135F40D0DB3D221F8EB2543C396D350F4));
	}
	{
		V_3 = 0;
		goto IL_008b;
	}

IL_005d:
	{
		EntryU5BU5D_tD89AF257A311DB3C41DA1BEE9D8F0B2E5EA7E86E* L_3 = V_0;
		int32_t L_4 = V_3;
		NullCheck(L_3);
		int32_t L_5 = (int32_t)((L_3)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_4)))->___hashCode_0;
		if ((((int32_t)L_5) < ((int32_t)0)))
		{
			goto IL_0087;
		}
	}
	{
		EqualityComparer_1_t8DFD15807C95203DA08FAD2838BD16CE1C70A17E* L_6;
		L_6 = EqualityComparer_1_get_Default_m36D51346E7AD3770CF007C780BD7F59736E21F77_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 30));
		EntryU5BU5D_tD89AF257A311DB3C41DA1BEE9D8F0B2E5EA7E86E* L_7 = V_0;
		int32_t L_8 = V_3;
		NullCheck(L_7);
		TreeViewItemData_1_t95D9721135F40D0DB3D221F8EB2543C396D350F4 L_9 = (TreeViewItemData_1_t95D9721135F40D0DB3D221F8EB2543C396D350F4)((L_7)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_8)))->___value_3;
		TreeViewItemData_1_t95D9721135F40D0DB3D221F8EB2543C396D350F4 L_10 = ___0_value;
		NullCheck(L_6);
		bool L_11;
		L_11 = VirtualFuncInvoker2< bool, TreeViewItemData_1_t95D9721135F40D0DB3D221F8EB2543C396D350F4, TreeViewItemData_1_t95D9721135F40D0DB3D221F8EB2543C396D350F4 >::Invoke(8, L_6, L_9, L_10);
		if (!L_11)
		{
			goto IL_0087;
		}
	}
	{
		return (bool)1;
	}

IL_0087:
	{
		int32_t L_12 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_008b:
	{
		int32_t L_13 = V_3;
		int32_t L_14 = (int32_t)__this->____count_2;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_005d;
		}
	}
	{
		goto IL_00db;
	}

IL_00db:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_CopyTo_mB0FEE83321F8E70FC1A5D1847B0EBFA5507A67E1_gshared (Dictionary_2_tC44035903CD447F30151D3470629A0598D22856F* __this, KeyValuePair_2U5BU5D_t4A52453D810EE41FD9E873C0FA5C9F4500832CAC* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	EntryU5BU5D_tD89AF257A311DB3C41DA1BEE9D8F0B2E5EA7E86E* V_1 = NULL;
	int32_t V_2 = 0;
	{
		KeyValuePair_2U5BU5D_t4A52453D810EE41FD9E873C0FA5C9F4500832CAC* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)3, NULL);
	}

IL_0009:
	{
		int32_t L_1 = ___1_index;
		KeyValuePair_2U5BU5D_t4A52453D810EE41FD9E873C0FA5C9F4500832CAC* L_2 = ___0_array;
		NullCheck(L_2);
		if ((!(((uint32_t)L_1) > ((uint32_t)((int32_t)(((RuntimeArray*)L_2)->max_length))))))
		{
			goto IL_0014;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0014:
	{
		KeyValuePair_2U5BU5D_t4A52453D810EE41FD9E873C0FA5C9F4500832CAC* L_3 = ___0_array;
		NullCheck(L_3);
		int32_t L_4 = ___1_index;
		int32_t L_5;
		L_5 = Dictionary_2_get_Count_mB6EB1F2269F19C3B1119FD6DDA8B51155F7BE2E3(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 36));
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_3)->max_length)), L_4))) >= ((int32_t)L_5)))
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)5, NULL);
	}

IL_0027:
	{
		int32_t L_6 = (int32_t)__this->____count_2;
		V_0 = L_6;
		EntryU5BU5D_tD89AF257A311DB3C41DA1BEE9D8F0B2E5EA7E86E* L_7 = (EntryU5BU5D_tD89AF257A311DB3C41DA1BEE9D8F0B2E5EA7E86E*)__this->____entries_1;
		V_1 = L_7;
		V_2 = 0;
		goto IL_0075;
	}

IL_0039:
	{
		EntryU5BU5D_tD89AF257A311DB3C41DA1BEE9D8F0B2E5EA7E86E* L_8 = V_1;
		int32_t L_9 = V_2;
		NullCheck(L_8);
		int32_t L_10 = (int32_t)((L_8)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_9)))->___hashCode_0;
		if ((((int32_t)L_10) < ((int32_t)0)))
		{
			goto IL_0071;
		}
	}
	{
		KeyValuePair_2U5BU5D_t4A52453D810EE41FD9E873C0FA5C9F4500832CAC* L_11 = ___0_array;
		int32_t L_12 = ___1_index;
		int32_t L_13 = L_12;
		___1_index = ((int32_t)il2cpp_codegen_add(L_13, 1));
		EntryU5BU5D_tD89AF257A311DB3C41DA1BEE9D8F0B2E5EA7E86E* L_14 = V_1;
		int32_t L_15 = V_2;
		NullCheck(L_14);
		int32_t L_16 = (int32_t)((L_14)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_15)))->___key_2;
		EntryU5BU5D_tD89AF257A311DB3C41DA1BEE9D8F0B2E5EA7E86E* L_17 = V_1;
		int32_t L_18 = V_2;
		NullCheck(L_17);
		TreeViewItemData_1_t95D9721135F40D0DB3D221F8EB2543C396D350F4 L_19 = (TreeViewItemData_1_t95D9721135F40D0DB3D221F8EB2543C396D350F4)((L_17)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_18)))->___value_3;
		KeyValuePair_2_tCA9456FCC0FBD03E0C9FF69F0B168B558FD2A5ED L_20;
		memset((&L_20), 0, sizeof(L_20));
		KeyValuePair_2__ctor_mFF17374CE90C7FE231E65EAFF2287053FA1C9AC3((&L_20), L_16, L_19, il2cpp_rgctx_method(method->klass->rgctx_data, 37));
		NullCheck(L_11);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(L_13), (KeyValuePair_2_tCA9456FCC0FBD03E0C9FF69F0B168B558FD2A5ED)L_20);
	}

IL_0071:
	{
		int32_t L_21 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_21, 1));
	}

IL_0075:
	{
		int32_t L_22 = V_2;
		int32_t L_23 = V_0;
		if ((((int32_t)L_22) < ((int32_t)L_23)))
		{
			goto IL_0039;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t0BE77930571D15651FEF9D9D38DBD8CCC82633B9 Dictionary_2_GetEnumerator_m20680CE0696850F2F87A0FE24A96103B26B64EB1_gshared (Dictionary_2_tC44035903CD447F30151D3470629A0598D22856F* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t0BE77930571D15651FEF9D9D38DBD8CCC82633B9 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m05BF5395EAD892FD0CB4F3C6C33C783FEBD9F063((&L_0), __this, 2, il2cpp_rgctx_method(method->klass->rgctx_data, 39));
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m8A3103D106B48F543372C608E0E88A902B490D92_gshared (Dictionary_2_tC44035903CD447F30151D3470629A0598D22856F* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t0BE77930571D15651FEF9D9D38DBD8CCC82633B9 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m05BF5395EAD892FD0CB4F3C6C33C783FEBD9F063((&L_0), __this, 2, il2cpp_rgctx_method(method->klass->rgctx_data, 39));
		Enumerator_t0BE77930571D15651FEF9D9D38DBD8CCC82633B9 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 38), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_GetObjectData_m2B5803060A3008B1796980A1AD7EEFBD957D4C0B_gshared (Dictionary_2_tC44035903CD447F30151D3470629A0598D22856F* __this, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___0_info, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___1_context, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1);
		s_Il2CppMethodInitialized = true;
	}
	KeyValuePair_2U5BU5D_t4A52453D810EE41FD9E873C0FA5C9F4500832CAC* V_0 = NULL;
	RuntimeObject* G_B4_0 = NULL;
	String_t* G_B4_1 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B4_2 = NULL;
	RuntimeObject* G_B3_0 = NULL;
	String_t* G_B3_1 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B3_2 = NULL;
	String_t* G_B6_0 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B6_1 = NULL;
	String_t* G_B5_0 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B5_1 = NULL;
	int32_t G_B7_0 = 0;
	String_t* G_B7_1 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B7_2 = NULL;
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_0 = ___0_info;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)4, NULL);
	}

IL_0009:
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_1 = ___0_info;
		int32_t L_2 = (int32_t)__this->____version_5;
		NullCheck(L_1);
		SerializationInfo_AddValue_m9D6ADD10966D1FE8D19050F3A269747C23FE9FC4(L_1, _stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1, L_2, NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_3 = ___0_info;
		RuntimeObject* L_4 = (RuntimeObject*)__this->____comparer_6;
		RuntimeObject* L_5 = L_4;
		if (L_5)
		{
			G_B4_0 = L_5;
			G_B4_1 = _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9;
			G_B4_2 = L_3;
			goto IL_002f;
		}
		G_B3_0 = L_5;
		G_B3_1 = _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9;
		G_B3_2 = L_3;
	}
	{
		EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* L_6;
		L_6 = EqualityComparer_1_get_Default_mF70F6C11A35B420DFA4628EE316B087F2DCB280C_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		G_B4_0 = ((RuntimeObject*)(L_6));
		G_B4_1 = G_B3_1;
		G_B4_2 = G_B3_2;
	}

IL_002f:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 40)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		NullCheck(G_B4_2);
		SerializationInfo_AddValue_m1AD59BBF8C3129142943D3F298ADF09FF123C199(G_B4_2, G_B4_1, (RuntimeObject*)G_B4_0, L_8, NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_9 = ___0_info;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_10 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		if (!L_10)
		{
			G_B6_0 = _stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69;
			G_B6_1 = L_9;
			goto IL_0056;
		}
		G_B5_0 = _stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69;
		G_B5_1 = L_9;
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		NullCheck(L_11);
		G_B7_0 = ((int32_t)(((RuntimeArray*)L_11)->max_length));
		G_B7_1 = G_B5_0;
		G_B7_2 = G_B5_1;
		goto IL_0057;
	}

IL_0056:
	{
		G_B7_0 = 0;
		G_B7_1 = G_B6_0;
		G_B7_2 = G_B6_1;
	}

IL_0057:
	{
		NullCheck(G_B7_2);
		SerializationInfo_AddValue_m9D6ADD10966D1FE8D19050F3A269747C23FE9FC4(G_B7_2, G_B7_1, G_B7_0, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_12 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		if (!L_12)
		{
			goto IL_008e;
		}
	}
	{
		int32_t L_13;
		L_13 = Dictionary_2_get_Count_mB6EB1F2269F19C3B1119FD6DDA8B51155F7BE2E3(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 36));
		KeyValuePair_2U5BU5D_t4A52453D810EE41FD9E873C0FA5C9F4500832CAC* L_14 = (KeyValuePair_2U5BU5D_t4A52453D810EE41FD9E873C0FA5C9F4500832CAC*)(KeyValuePair_2U5BU5D_t4A52453D810EE41FD9E873C0FA5C9F4500832CAC*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 41), (uint32_t)L_13);
		V_0 = L_14;
		KeyValuePair_2U5BU5D_t4A52453D810EE41FD9E873C0FA5C9F4500832CAC* L_15 = V_0;
		Dictionary_2_CopyTo_mB0FEE83321F8E70FC1A5D1847B0EBFA5507A67E1(__this, L_15, 0, il2cpp_rgctx_method(method->klass->rgctx_data, 42));
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_16 = ___0_info;
		KeyValuePair_2U5BU5D_t4A52453D810EE41FD9E873C0FA5C9F4500832CAC* L_17 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 43)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		NullCheck(L_16);
		SerializationInfo_AddValue_m1AD59BBF8C3129142943D3F298ADF09FF123C199(L_16, _stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A, (RuntimeObject*)L_17, L_19, NULL);
	}

IL_008e:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_FindEntry_mB1F48D02466EA489E158922AAE99F45DB56C9FB9_gshared (Dictionary_2_tC44035903CD447F30151D3470629A0598D22856F* __this, int32_t ___0_key, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_1 = NULL;
	EntryU5BU5D_tD89AF257A311DB3C41DA1BEE9D8F0B2E5EA7E86E* V_2 = NULL;
	int32_t V_3 = 0;
	RuntimeObject* V_4 = NULL;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* V_7 = NULL;
	int32_t V_8 = 0;
	{
		goto IL_000e;
	}

IL_000e:
	{
		V_0 = (-1);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		V_1 = L_1;
		EntryU5BU5D_tD89AF257A311DB3C41DA1BEE9D8F0B2E5EA7E86E* L_2 = (EntryU5BU5D_tD89AF257A311DB3C41DA1BEE9D8F0B2E5EA7E86E*)__this->____entries_1;
		V_2 = L_2;
		V_3 = 0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = V_1;
		if (!L_3)
		{
			goto IL_0175;
		}
	}
	{
		RuntimeObject* L_4 = (RuntimeObject*)__this->____comparer_6;
		V_4 = L_4;
		RuntimeObject* L_5 = V_4;
		if (L_5)
		{
			goto IL_0110;
		}
	}
	{
		int32_t L_6;
		L_6 = Int32_GetHashCode_m253D60FF7527A483E91004B7A2366F13E225E295((&___0_key), il2cpp_rgctx_method(method->klass->rgctx_data, 44));
		V_5 = ((int32_t)(L_6&((int32_t)2147483647LL)));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_7 = V_1;
		int32_t L_8 = V_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = V_1;
		NullCheck(L_9);
		NullCheck(L_7);
		int32_t L_10 = ((int32_t)(L_8%((int32_t)(((RuntimeArray*)L_9)->max_length))));
		int32_t L_11 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_11, 1));
		il2cpp_codegen_initobj((&V_6), sizeof(int32_t));
	}

IL_0066:
	{
		int32_t L_13 = V_0;
		EntryU5BU5D_tD89AF257A311DB3C41DA1BEE9D8F0B2E5EA7E86E* L_14 = V_2;
		NullCheck(L_14);
		if ((!(((uint32_t)L_13) < ((uint32_t)((int32_t)(((RuntimeArray*)L_14)->max_length))))))
		{
			goto IL_0175;
		}
	}
	{
		EntryU5BU5D_tD89AF257A311DB3C41DA1BEE9D8F0B2E5EA7E86E* L_15 = V_2;
		int32_t L_16 = V_0;
		NullCheck(L_15);
		int32_t L_17 = (int32_t)((L_15)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_16)))->___hashCode_0;
		int32_t L_18 = V_5;
		if ((!(((uint32_t)L_17) == ((uint32_t)L_18))))
		{
			goto IL_009b;
		}
	}
	{
		EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* L_19;
		L_19 = EqualityComparer_1_get_Default_mF70F6C11A35B420DFA4628EE316B087F2DCB280C_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		EntryU5BU5D_tD89AF257A311DB3C41DA1BEE9D8F0B2E5EA7E86E* L_20 = V_2;
		int32_t L_21 = V_0;
		NullCheck(L_20);
		int32_t L_22 = (int32_t)((L_20)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_21)))->___key_2;
		int32_t L_23 = ___0_key;
		NullCheck(L_19);
		bool L_24;
		L_24 = VirtualFuncInvoker2< bool, int32_t, int32_t >::Invoke(8, L_19, L_22, L_23);
		if (L_24)
		{
			goto IL_0175;
		}
	}

IL_009b:
	{
		EntryU5BU5D_tD89AF257A311DB3C41DA1BEE9D8F0B2E5EA7E86E* L_25 = V_2;
		int32_t L_26 = V_0;
		NullCheck(L_25);
		int32_t L_27 = (int32_t)((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___next_1;
		V_0 = L_27;
		int32_t L_28 = V_3;
		EntryU5BU5D_tD89AF257A311DB3C41DA1BEE9D8F0B2E5EA7E86E* L_29 = V_2;
		NullCheck(L_29);
		if ((((int32_t)L_28) < ((int32_t)((int32_t)(((RuntimeArray*)L_29)->max_length)))))
		{
			goto IL_00b3;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_00b3:
	{
		int32_t L_30 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_30, 1));
		goto IL_0066;
	}

IL_0110:
	{
		RuntimeObject* L_31 = V_4;
		int32_t L_32 = ___0_key;
		NullCheck(L_31);
		int32_t L_33;
		L_33 = InterfaceFuncInvoker1< int32_t, int32_t >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_31, L_32);
		V_8 = ((int32_t)(L_33&((int32_t)2147483647LL)));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_34 = V_1;
		int32_t L_35 = V_8;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_36 = V_1;
		NullCheck(L_36);
		NullCheck(L_34);
		int32_t L_37 = ((int32_t)(L_35%((int32_t)(((RuntimeArray*)L_36)->max_length))));
		int32_t L_38 = (L_34)->GetAt(static_cast<il2cpp_array_size_t>(L_37));
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_38, 1));
	}

IL_012b:
	{
		int32_t L_39 = V_0;
		EntryU5BU5D_tD89AF257A311DB3C41DA1BEE9D8F0B2E5EA7E86E* L_40 = V_2;
		NullCheck(L_40);
		if ((!(((uint32_t)L_39) < ((uint32_t)((int32_t)(((RuntimeArray*)L_40)->max_length))))))
		{
			goto IL_0175;
		}
	}
	{
		EntryU5BU5D_tD89AF257A311DB3C41DA1BEE9D8F0B2E5EA7E86E* L_41 = V_2;
		int32_t L_42 = V_0;
		NullCheck(L_41);
		int32_t L_43 = (int32_t)((L_41)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_42)))->___hashCode_0;
		int32_t L_44 = V_8;
		if ((!(((uint32_t)L_43) == ((uint32_t)L_44))))
		{
			goto IL_0157;
		}
	}
	{
		RuntimeObject* L_45 = V_4;
		EntryU5BU5D_tD89AF257A311DB3C41DA1BEE9D8F0B2E5EA7E86E* L_46 = V_2;
		int32_t L_47 = V_0;
		NullCheck(L_46);
		int32_t L_48 = (int32_t)((L_46)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_47)))->___key_2;
		int32_t L_49 = ___0_key;
		NullCheck(L_45);
		bool L_50;
		L_50 = InterfaceFuncInvoker2< bool, int32_t, int32_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_45, L_48, L_49);
		if (L_50)
		{
			goto IL_0175;
		}
	}

IL_0157:
	{
		EntryU5BU5D_tD89AF257A311DB3C41DA1BEE9D8F0B2E5EA7E86E* L_51 = V_2;
		int32_t L_52 = V_0;
		NullCheck(L_51);
		int32_t L_53 = (int32_t)((L_51)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_52)))->___next_1;
		V_0 = L_53;
		int32_t L_54 = V_3;
		EntryU5BU5D_tD89AF257A311DB3C41DA1BEE9D8F0B2E5EA7E86E* L_55 = V_2;
		NullCheck(L_55);
		if ((((int32_t)L_54) < ((int32_t)((int32_t)(((RuntimeArray*)L_55)->max_length)))))
		{
			goto IL_016f;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_016f:
	{
		int32_t L_56 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_56, 1));
		goto IL_012b;
	}

IL_0175:
	{
		int32_t L_57 = V_0;
		return L_57;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_Initialize_m55DBA94CA01715093AF33B0FF44EB7AFD5AEAB36_gshared (Dictionary_2_tC44035903CD447F30151D3470629A0598D22856F* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___0_capacity;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = HashHelpers_GetPrime_m5B7AE10D5E76267579296C8F2CB8464AC2DE8472(L_0, NULL);
		V_0 = L_1;
		__this->____freeList_3 = (-1);
		int32_t L_2 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_2);
		__this->____buckets_0 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets_0), (void*)L_3);
		int32_t L_4 = V_0;
		EntryU5BU5D_tD89AF257A311DB3C41DA1BEE9D8F0B2E5EA7E86E* L_5 = (EntryU5BU5D_tD89AF257A311DB3C41DA1BEE9D8F0B2E5EA7E86E*)(EntryU5BU5D_tD89AF257A311DB3C41DA1BEE9D8F0B2E5EA7E86E*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 48), (uint32_t)L_4);
		__this->____entries_1 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____entries_1), (void*)L_5);
		int32_t L_6 = V_0;
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryInsert_mAC235DEF75BD8560A1598E0744B7CC55359D6B4B_gshared (Dictionary_2_tC44035903CD447F30151D3470629A0598D22856F* __this, int32_t ___0_key, TreeViewItemData_1_t95D9721135F40D0DB3D221F8EB2543C396D350F4 ___1_value, uint8_t ___2_behavior, const RuntimeMethod* method) 
{
	EntryU5BU5D_tD89AF257A311DB3C41DA1BEE9D8F0B2E5EA7E86E* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t* V_4 = NULL;
	int32_t V_5 = 0;
	bool V_6 = false;
	bool V_7 = false;
	int32_t V_8 = 0;
	int32_t* V_9 = NULL;
	Entry_t3C43C931209AE339471E46F5C5C78DFFAD543BC9* V_10 = NULL;
	int32_t V_11 = 0;
	EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* V_12 = NULL;
	int32_t V_13 = 0;
	int32_t G_B7_0 = 0;
	int32_t* G_B51_0 = NULL;
	{
		goto IL_000e;
	}

IL_000e:
	{
		int32_t L_1 = (int32_t)__this->____version_5;
		__this->____version_5 = ((int32_t)il2cpp_codegen_add(L_1, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		if (L_2)
		{
			goto IL_002c;
		}
	}
	{
		int32_t L_3;
		L_3 = Dictionary_2_Initialize_m55DBA94CA01715093AF33B0FF44EB7AFD5AEAB36(__this, 0, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
	}

IL_002c:
	{
		EntryU5BU5D_tD89AF257A311DB3C41DA1BEE9D8F0B2E5EA7E86E* L_4 = (EntryU5BU5D_tD89AF257A311DB3C41DA1BEE9D8F0B2E5EA7E86E*)__this->____entries_1;
		V_0 = L_4;
		RuntimeObject* L_5 = (RuntimeObject*)__this->____comparer_6;
		V_1 = L_5;
		RuntimeObject* L_6 = V_1;
		if (!L_6)
		{
			goto IL_0046;
		}
	}
	{
		RuntimeObject* L_7 = V_1;
		int32_t L_8 = ___0_key;
		NullCheck(L_7);
		int32_t L_9;
		L_9 = InterfaceFuncInvoker1< int32_t, int32_t >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_7, L_8);
		G_B7_0 = L_9;
		goto IL_0053;
	}

IL_0046:
	{
		int32_t L_10;
		L_10 = Int32_GetHashCode_m253D60FF7527A483E91004B7A2366F13E225E295((&___0_key), il2cpp_rgctx_method(method->klass->rgctx_data, 44));
		G_B7_0 = L_10;
	}

IL_0053:
	{
		V_2 = ((int32_t)(G_B7_0&((int32_t)2147483647LL)));
		V_3 = 0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		int32_t L_12 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_13 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		NullCheck(L_13);
		NullCheck(L_11);
		V_4 = ((L_11)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_12%((int32_t)(((RuntimeArray*)L_13)->max_length)))))));
		int32_t* L_14 = V_4;
		int32_t L_15 = *((int32_t*)L_14);
		V_5 = ((int32_t)il2cpp_codegen_subtract(L_15, 1));
		RuntimeObject* L_16 = V_1;
		if (L_16)
		{
			goto IL_0187;
		}
	}
	{
		il2cpp_codegen_initobj((&V_11), sizeof(int32_t));
	}

IL_0091:
	{
		int32_t L_18 = V_5;
		EntryU5BU5D_tD89AF257A311DB3C41DA1BEE9D8F0B2E5EA7E86E* L_19 = V_0;
		NullCheck(L_19);
		if ((!(((uint32_t)L_18) < ((uint32_t)((int32_t)(((RuntimeArray*)L_19)->max_length))))))
		{
			goto IL_01f9;
		}
	}
	{
		EntryU5BU5D_tD89AF257A311DB3C41DA1BEE9D8F0B2E5EA7E86E* L_20 = V_0;
		int32_t L_21 = V_5;
		NullCheck(L_20);
		int32_t L_22 = (int32_t)((L_20)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_21)))->___hashCode_0;
		int32_t L_23 = V_2;
		if ((!(((uint32_t)L_22) == ((uint32_t)L_23))))
		{
			goto IL_00ea;
		}
	}
	{
		EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* L_24;
		L_24 = EqualityComparer_1_get_Default_mF70F6C11A35B420DFA4628EE316B087F2DCB280C_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		EntryU5BU5D_tD89AF257A311DB3C41DA1BEE9D8F0B2E5EA7E86E* L_25 = V_0;
		int32_t L_26 = V_5;
		NullCheck(L_25);
		int32_t L_27 = (int32_t)((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___key_2;
		int32_t L_28 = ___0_key;
		NullCheck(L_24);
		bool L_29;
		L_29 = VirtualFuncInvoker2< bool, int32_t, int32_t >::Invoke(8, L_24, L_27, L_28);
		if (!L_29)
		{
			goto IL_00ea;
		}
	}
	{
		uint8_t L_30 = ___2_behavior;
		if ((!(((uint32_t)L_30) == ((uint32_t)1))))
		{
			goto IL_00d9;
		}
	}
	{
		EntryU5BU5D_tD89AF257A311DB3C41DA1BEE9D8F0B2E5EA7E86E* L_31 = V_0;
		int32_t L_32 = V_5;
		NullCheck(L_31);
		TreeViewItemData_1_t95D9721135F40D0DB3D221F8EB2543C396D350F4 L_33 = ___1_value;
		((L_31)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_32)))->___value_3 = L_33;
		Il2CppCodeGenWriteBarrier((void**)&(((&((L_31)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_32)))->___value_3))->___m_Data_1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&((L_31)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_32)))->___value_3))->___m_Children_2), (void*)NULL);
		#endif
		return (bool)1;
	}

IL_00d9:
	{
		uint8_t L_34 = ___2_behavior;
		if ((!(((uint32_t)L_34) == ((uint32_t)2))))
		{
			goto IL_00e8;
		}
	}
	{
		int32_t L_35 = ___0_key;
		int32_t L_36 = L_35;
		RuntimeObject* L_37 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14), &L_36);
		ThrowHelper_ThrowAddingDuplicateWithKeyArgumentException_m013C856C16A63018719A6096727CB43E1918CDE5(L_37, NULL);
	}

IL_00e8:
	{
		return (bool)0;
	}

IL_00ea:
	{
		EntryU5BU5D_tD89AF257A311DB3C41DA1BEE9D8F0B2E5EA7E86E* L_38 = V_0;
		int32_t L_39 = V_5;
		NullCheck(L_38);
		int32_t L_40 = (int32_t)((L_38)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_39)))->___next_1;
		V_5 = L_40;
		int32_t L_41 = V_3;
		EntryU5BU5D_tD89AF257A311DB3C41DA1BEE9D8F0B2E5EA7E86E* L_42 = V_0;
		NullCheck(L_42);
		if ((((int32_t)L_41) < ((int32_t)((int32_t)(((RuntimeArray*)L_42)->max_length)))))
		{
			goto IL_0104;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_0104:
	{
		int32_t L_43 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_43, 1));
		goto IL_0091;
	}

IL_0187:
	{
		int32_t L_44 = V_5;
		EntryU5BU5D_tD89AF257A311DB3C41DA1BEE9D8F0B2E5EA7E86E* L_45 = V_0;
		NullCheck(L_45);
		if ((!(((uint32_t)L_44) < ((uint32_t)((int32_t)(((RuntimeArray*)L_45)->max_length))))))
		{
			goto IL_01f9;
		}
	}
	{
		EntryU5BU5D_tD89AF257A311DB3C41DA1BEE9D8F0B2E5EA7E86E* L_46 = V_0;
		int32_t L_47 = V_5;
		NullCheck(L_46);
		int32_t L_48 = (int32_t)((L_46)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_47)))->___hashCode_0;
		int32_t L_49 = V_2;
		if ((!(((uint32_t)L_48) == ((uint32_t)L_49))))
		{
			goto IL_01d9;
		}
	}
	{
		RuntimeObject* L_50 = V_1;
		EntryU5BU5D_tD89AF257A311DB3C41DA1BEE9D8F0B2E5EA7E86E* L_51 = V_0;
		int32_t L_52 = V_5;
		NullCheck(L_51);
		int32_t L_53 = (int32_t)((L_51)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_52)))->___key_2;
		int32_t L_54 = ___0_key;
		NullCheck(L_50);
		bool L_55;
		L_55 = InterfaceFuncInvoker2< bool, int32_t, int32_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_50, L_53, L_54);
		if (!L_55)
		{
			goto IL_01d9;
		}
	}
	{
		uint8_t L_56 = ___2_behavior;
		if ((!(((uint32_t)L_56) == ((uint32_t)1))))
		{
			goto IL_01c8;
		}
	}
	{
		EntryU5BU5D_tD89AF257A311DB3C41DA1BEE9D8F0B2E5EA7E86E* L_57 = V_0;
		int32_t L_58 = V_5;
		NullCheck(L_57);
		TreeViewItemData_1_t95D9721135F40D0DB3D221F8EB2543C396D350F4 L_59 = ___1_value;
		((L_57)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_58)))->___value_3 = L_59;
		Il2CppCodeGenWriteBarrier((void**)&(((&((L_57)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_58)))->___value_3))->___m_Data_1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&((L_57)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_58)))->___value_3))->___m_Children_2), (void*)NULL);
		#endif
		return (bool)1;
	}

IL_01c8:
	{
		uint8_t L_60 = ___2_behavior;
		if ((!(((uint32_t)L_60) == ((uint32_t)2))))
		{
			goto IL_01d7;
		}
	}
	{
		int32_t L_61 = ___0_key;
		int32_t L_62 = L_61;
		RuntimeObject* L_63 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14), &L_62);
		ThrowHelper_ThrowAddingDuplicateWithKeyArgumentException_m013C856C16A63018719A6096727CB43E1918CDE5(L_63, NULL);
	}

IL_01d7:
	{
		return (bool)0;
	}

IL_01d9:
	{
		EntryU5BU5D_tD89AF257A311DB3C41DA1BEE9D8F0B2E5EA7E86E* L_64 = V_0;
		int32_t L_65 = V_5;
		NullCheck(L_64);
		int32_t L_66 = (int32_t)((L_64)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_65)))->___next_1;
		V_5 = L_66;
		int32_t L_67 = V_3;
		EntryU5BU5D_tD89AF257A311DB3C41DA1BEE9D8F0B2E5EA7E86E* L_68 = V_0;
		NullCheck(L_68);
		if ((((int32_t)L_67) < ((int32_t)((int32_t)(((RuntimeArray*)L_68)->max_length)))))
		{
			goto IL_01f3;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_01f3:
	{
		int32_t L_69 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_69, 1));
		goto IL_0187;
	}

IL_01f9:
	{
		V_6 = (bool)0;
		V_7 = (bool)0;
		int32_t L_70 = (int32_t)__this->____freeCount_4;
		if ((((int32_t)L_70) <= ((int32_t)0)))
		{
			goto IL_0223;
		}
	}
	{
		int32_t L_71 = (int32_t)__this->____freeList_3;
		V_8 = L_71;
		V_7 = (bool)1;
		int32_t L_72 = (int32_t)__this->____freeCount_4;
		__this->____freeCount_4 = ((int32_t)il2cpp_codegen_subtract(L_72, 1));
		goto IL_0250;
	}

IL_0223:
	{
		int32_t L_73 = (int32_t)__this->____count_2;
		V_13 = L_73;
		int32_t L_74 = V_13;
		EntryU5BU5D_tD89AF257A311DB3C41DA1BEE9D8F0B2E5EA7E86E* L_75 = V_0;
		NullCheck(L_75);
		if ((!(((uint32_t)L_74) == ((uint32_t)((int32_t)(((RuntimeArray*)L_75)->max_length))))))
		{
			goto IL_023b;
		}
	}
	{
		Dictionary_2_Resize_m6D62C4293D7571986913FF1E505B0090DF1D96B8(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 49));
		V_6 = (bool)1;
	}

IL_023b:
	{
		int32_t L_76 = V_13;
		V_8 = L_76;
		int32_t L_77 = V_13;
		__this->____count_2 = ((int32_t)il2cpp_codegen_add(L_77, 1));
		EntryU5BU5D_tD89AF257A311DB3C41DA1BEE9D8F0B2E5EA7E86E* L_78 = (EntryU5BU5D_tD89AF257A311DB3C41DA1BEE9D8F0B2E5EA7E86E*)__this->____entries_1;
		V_0 = L_78;
	}

IL_0250:
	{
		bool L_79 = V_6;
		if (L_79)
		{
			goto IL_0258;
		}
	}
	{
		int32_t* L_80 = V_4;
		G_B51_0 = L_80;
		goto IL_026d;
	}

IL_0258:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_81 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		int32_t L_82 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_83 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		NullCheck(L_83);
		NullCheck(L_81);
		G_B51_0 = ((L_81)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_82%((int32_t)(((RuntimeArray*)L_83)->max_length)))))));
	}

IL_026d:
	{
		V_9 = G_B51_0;
		EntryU5BU5D_tD89AF257A311DB3C41DA1BEE9D8F0B2E5EA7E86E* L_84 = V_0;
		int32_t L_85 = V_8;
		NullCheck(L_84);
		V_10 = ((L_84)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_85)));
		bool L_86 = V_7;
		if (!L_86)
		{
			goto IL_028a;
		}
	}
	{
		Entry_t3C43C931209AE339471E46F5C5C78DFFAD543BC9* L_87 = V_10;
		int32_t L_88 = (int32_t)L_87->___next_1;
		__this->____freeList_3 = L_88;
	}

IL_028a:
	{
		Entry_t3C43C931209AE339471E46F5C5C78DFFAD543BC9* L_89 = V_10;
		int32_t L_90 = V_2;
		L_89->___hashCode_0 = L_90;
		Entry_t3C43C931209AE339471E46F5C5C78DFFAD543BC9* L_91 = V_10;
		int32_t* L_92 = V_9;
		int32_t L_93 = *((int32_t*)L_92);
		L_91->___next_1 = ((int32_t)il2cpp_codegen_subtract(L_93, 1));
		Entry_t3C43C931209AE339471E46F5C5C78DFFAD543BC9* L_94 = V_10;
		int32_t L_95 = ___0_key;
		L_94->___key_2 = L_95;
		Entry_t3C43C931209AE339471E46F5C5C78DFFAD543BC9* L_96 = V_10;
		TreeViewItemData_1_t95D9721135F40D0DB3D221F8EB2543C396D350F4 L_97 = ___1_value;
		L_96->___value_3 = L_97;
		Il2CppCodeGenWriteBarrier((void**)&(((&L_96->___value_3))->___m_Data_1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&L_96->___value_3))->___m_Children_2), (void*)NULL);
		#endif
		int32_t* L_98 = V_9;
		int32_t L_99 = V_8;
		*((int32_t*)L_98) = (int32_t)((int32_t)il2cpp_codegen_add(L_99, 1));
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_OnDeserialization_mA10B2AAFE70FC180E181DB8C4AA07AD2015F2B5B_gshared (Dictionary_2_tC44035903CD447F30151D3470629A0598D22856F* __this, RuntimeObject* ___0_sender, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConditionalWeakTable_2_Remove_mEA61545EA43662F3718895F4E435A1F3EFB9756E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConditionalWeakTable_2_TryGetValue_m8AB467BA44D1FF9EBDB9735CED88B0D67AC6403F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1);
		s_Il2CppMethodInitialized = true;
	}
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	KeyValuePair_2U5BU5D_t4A52453D810EE41FD9E873C0FA5C9F4500832CAC* V_3 = NULL;
	int32_t V_4 = 0;
	{
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* L_0;
		L_0 = HashHelpers_get_SerializationInfoTable_m8C17D5483B39B68897AEFFD14A9E139AF858222F(NULL);
		NullCheck(L_0);
		bool L_1;
		L_1 = ConditionalWeakTable_2_TryGetValue_m8AB467BA44D1FF9EBDB9735CED88B0D67AC6403F(L_0, (RuntimeObject*)__this, (&V_0), ConditionalWeakTable_2_TryGetValue_m8AB467BA44D1FF9EBDB9735CED88B0D67AC6403F_RuntimeMethod_var);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_2 = V_0;
		if (L_2)
		{
			goto IL_0012;
		}
	}
	{
		return;
	}

IL_0012:
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_3 = V_0;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = SerializationInfo_GetInt32_m7731402825C7FC8D0673F7610D555615F95E4FB5(L_3, _stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1, NULL);
		V_1 = L_4;
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_5 = V_0;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = SerializationInfo_GetInt32_m7731402825C7FC8D0673F7610D555615F95E4FB5(L_5, _stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69, NULL);
		V_2 = L_6;
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_7 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 40)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		NullCheck(L_7);
		RuntimeObject* L_10;
		L_10 = SerializationInfo_GetValue_mE6091C2E906E113455D05E734C86F43B8E1D1034(L_7, _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9, L_9, NULL);
		__this->____comparer_6 = ((RuntimeObject*)Castclass((RuntimeObject*)L_10, il2cpp_rgctx_data(method->klass->rgctx_data, 1)));
		Il2CppCodeGenWriteBarrier((void**)(&__this->____comparer_6), (void*)((RuntimeObject*)Castclass((RuntimeObject*)L_10, il2cpp_rgctx_data(method->klass->rgctx_data, 1))));
		int32_t L_11 = V_2;
		if (!L_11)
		{
			goto IL_00c9;
		}
	}
	{
		int32_t L_12 = V_2;
		int32_t L_13;
		L_13 = Dictionary_2_Initialize_m55DBA94CA01715093AF33B0FF44EB7AFD5AEAB36(__this, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_14 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_15 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 43)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_16;
		L_16 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_15, NULL);
		NullCheck(L_14);
		RuntimeObject* L_17;
		L_17 = SerializationInfo_GetValue_mE6091C2E906E113455D05E734C86F43B8E1D1034(L_14, _stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A, L_16, NULL);
		V_3 = ((KeyValuePair_2U5BU5D_t4A52453D810EE41FD9E873C0FA5C9F4500832CAC*)Castclass((RuntimeObject*)L_17, il2cpp_rgctx_data(method->klass->rgctx_data, 35)));
		KeyValuePair_2U5BU5D_t4A52453D810EE41FD9E873C0FA5C9F4500832CAC* L_18 = V_3;
		if (L_18)
		{
			goto IL_007a;
		}
	}
	{
		ThrowHelper_ThrowSerializationException_m03BE2B48CD3617C32FBCEE16030F7C5563E04E16((int32_t)((int32_t)16), NULL);
	}

IL_007a:
	{
		V_4 = 0;
		goto IL_00c0;
	}

IL_007f:
	{
		KeyValuePair_2U5BU5D_t4A52453D810EE41FD9E873C0FA5C9F4500832CAC* L_19 = V_3;
		int32_t L_20 = V_4;
		NullCheck(L_19);
		int32_t L_21;
		L_21 = KeyValuePair_2_get_Key_mD6A5670D5DD71BBE95D274ADC916CFD0F5E3FAA6_inline(((L_19)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_20))), il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		goto IL_009a;
	}

IL_009a:
	{
		KeyValuePair_2U5BU5D_t4A52453D810EE41FD9E873C0FA5C9F4500832CAC* L_22 = V_3;
		int32_t L_23 = V_4;
		NullCheck(L_22);
		int32_t L_24;
		L_24 = KeyValuePair_2_get_Key_mD6A5670D5DD71BBE95D274ADC916CFD0F5E3FAA6_inline(((L_22)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_23))), il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		KeyValuePair_2U5BU5D_t4A52453D810EE41FD9E873C0FA5C9F4500832CAC* L_25 = V_3;
		int32_t L_26 = V_4;
		NullCheck(L_25);
		TreeViewItemData_1_t95D9721135F40D0DB3D221F8EB2543C396D350F4 L_27;
		L_27 = KeyValuePair_2_get_Value_m658D03DA62B8E16BD8C96D037C38C9AC87442BAF_inline(((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26))), il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		Dictionary_2_Add_mFE603469AB888F7C8EF9DE3392E9461867390BDC(__this, L_24, L_27, il2cpp_rgctx_method(method->klass->rgctx_data, 16));
		int32_t L_28 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_28, 1));
	}

IL_00c0:
	{
		int32_t L_29 = V_4;
		KeyValuePair_2U5BU5D_t4A52453D810EE41FD9E873C0FA5C9F4500832CAC* L_30 = V_3;
		NullCheck(L_30);
		if ((((int32_t)L_29) < ((int32_t)((int32_t)(((RuntimeArray*)L_30)->max_length)))))
		{
			goto IL_007f;
		}
	}
	{
		goto IL_00d0;
	}

IL_00c9:
	{
		__this->____buckets_0 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets_0), (void*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL);
	}

IL_00d0:
	{
		int32_t L_31 = V_1;
		__this->____version_5 = L_31;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* L_32;
		L_32 = HashHelpers_get_SerializationInfoTable_m8C17D5483B39B68897AEFFD14A9E139AF858222F(NULL);
		NullCheck(L_32);
		bool L_33;
		L_33 = ConditionalWeakTable_2_Remove_mEA61545EA43662F3718895F4E435A1F3EFB9756E(L_32, (RuntimeObject*)__this, ConditionalWeakTable_2_Remove_mEA61545EA43662F3718895F4E435A1F3EFB9756E_RuntimeMethod_var);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_m6D62C4293D7571986913FF1E505B0090DF1D96B8_gshared (Dictionary_2_tC44035903CD447F30151D3470629A0598D22856F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = (int32_t)__this->____count_2;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = HashHelpers_ExpandPrime_m9A35EC171AA0EA16F7C9F71EE6FAD5A82565ADB9(L_0, NULL);
		Dictionary_2_Resize_mDA2C2B2AA9D036744EA1510458F902ACF49E6658(__this, L_1, (bool)0, il2cpp_rgctx_method(method->klass->rgctx_data, 51));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_mDA2C2B2AA9D036744EA1510458F902ACF49E6658_gshared (Dictionary_2_tC44035903CD447F30151D3470629A0598D22856F* __this, int32_t ___0_newSize, bool ___1_forceNewHashCodes, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_0 = NULL;
	EntryU5BU5D_tD89AF257A311DB3C41DA1BEE9D8F0B2E5EA7E86E* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	{
		int32_t L_0 = ___0_newSize;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_0);
		V_0 = L_1;
		int32_t L_2 = ___0_newSize;
		EntryU5BU5D_tD89AF257A311DB3C41DA1BEE9D8F0B2E5EA7E86E* L_3 = (EntryU5BU5D_tD89AF257A311DB3C41DA1BEE9D8F0B2E5EA7E86E*)(EntryU5BU5D_tD89AF257A311DB3C41DA1BEE9D8F0B2E5EA7E86E*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 48), (uint32_t)L_2);
		V_1 = L_3;
		int32_t L_4 = (int32_t)__this->____count_2;
		V_2 = L_4;
		EntryU5BU5D_tD89AF257A311DB3C41DA1BEE9D8F0B2E5EA7E86E* L_5 = (EntryU5BU5D_tD89AF257A311DB3C41DA1BEE9D8F0B2E5EA7E86E*)__this->____entries_1;
		EntryU5BU5D_tD89AF257A311DB3C41DA1BEE9D8F0B2E5EA7E86E* L_6 = V_1;
		int32_t L_7 = V_2;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_5, 0, (RuntimeArray*)L_6, 0, L_7, NULL);
		il2cpp_codegen_initobj((&V_3), sizeof(int32_t));
		int32_t L_8 = V_3;
		bool L_9 = ___1_forceNewHashCodes;
		if (!((int32_t)((int32_t)false&(int32_t)L_9)))
		{
			goto IL_0084;
		}
	}
	{
		V_4 = 0;
		goto IL_007f;
	}

IL_003e:
	{
		EntryU5BU5D_tD89AF257A311DB3C41DA1BEE9D8F0B2E5EA7E86E* L_10 = V_1;
		int32_t L_11 = V_4;
		NullCheck(L_10);
		int32_t L_12 = (int32_t)((L_10)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_11)))->___hashCode_0;
		if ((((int32_t)L_12) < ((int32_t)0)))
		{
			goto IL_0079;
		}
	}
	{
		EntryU5BU5D_tD89AF257A311DB3C41DA1BEE9D8F0B2E5EA7E86E* L_13 = V_1;
		int32_t L_14 = V_4;
		NullCheck(L_13);
		EntryU5BU5D_tD89AF257A311DB3C41DA1BEE9D8F0B2E5EA7E86E* L_15 = V_1;
		int32_t L_16 = V_4;
		NullCheck(L_15);
		int32_t* L_17 = (int32_t*)(&((L_15)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_16)))->___key_2);
		int32_t L_18;
		L_18 = Int32_GetHashCode_m253D60FF7527A483E91004B7A2366F13E225E295(L_17, il2cpp_rgctx_method(method->klass->rgctx_data, 44));
		((L_13)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_14)))->___hashCode_0 = ((int32_t)(L_18&((int32_t)2147483647LL)));
	}

IL_0079:
	{
		int32_t L_19 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_19, 1));
	}

IL_007f:
	{
		int32_t L_20 = V_4;
		int32_t L_21 = V_2;
		if ((((int32_t)L_20) < ((int32_t)L_21)))
		{
			goto IL_003e;
		}
	}

IL_0084:
	{
		V_5 = 0;
		goto IL_00cb;
	}

IL_0089:
	{
		EntryU5BU5D_tD89AF257A311DB3C41DA1BEE9D8F0B2E5EA7E86E* L_22 = V_1;
		int32_t L_23 = V_5;
		NullCheck(L_22);
		int32_t L_24 = (int32_t)((L_22)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_23)))->___hashCode_0;
		if ((((int32_t)L_24) < ((int32_t)0)))
		{
			goto IL_00c5;
		}
	}
	{
		EntryU5BU5D_tD89AF257A311DB3C41DA1BEE9D8F0B2E5EA7E86E* L_25 = V_1;
		int32_t L_26 = V_5;
		NullCheck(L_25);
		int32_t L_27 = (int32_t)((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___hashCode_0;
		int32_t L_28 = ___0_newSize;
		V_6 = ((int32_t)(L_27%L_28));
		EntryU5BU5D_tD89AF257A311DB3C41DA1BEE9D8F0B2E5EA7E86E* L_29 = V_1;
		int32_t L_30 = V_5;
		NullCheck(L_29);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_31 = V_0;
		int32_t L_32 = V_6;
		NullCheck(L_31);
		int32_t L_33 = L_32;
		int32_t L_34 = (L_31)->GetAt(static_cast<il2cpp_array_size_t>(L_33));
		((L_29)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_30)))->___next_1 = ((int32_t)il2cpp_codegen_subtract(L_34, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_35 = V_0;
		int32_t L_36 = V_6;
		int32_t L_37 = V_5;
		NullCheck(L_35);
		(L_35)->SetAt(static_cast<il2cpp_array_size_t>(L_36), (int32_t)((int32_t)il2cpp_codegen_add(L_37, 1)));
	}

IL_00c5:
	{
		int32_t L_38 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_38, 1));
	}

IL_00cb:
	{
		int32_t L_39 = V_5;
		int32_t L_40 = V_2;
		if ((((int32_t)L_39) < ((int32_t)L_40)))
		{
			goto IL_0089;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_41 = V_0;
		__this->____buckets_0 = L_41;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets_0), (void*)L_41);
		EntryU5BU5D_tD89AF257A311DB3C41DA1BEE9D8F0B2E5EA7E86E* L_42 = V_1;
		__this->____entries_1 = L_42;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____entries_1), (void*)L_42);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_m0ABB3BBBBDA393DEDC19A0F0943D8AF9E58F785B_gshared (Dictionary_2_tC44035903CD447F30151D3470629A0598D22856F* __this, int32_t ___0_key, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	Entry_t3C43C931209AE339471E46F5C5C78DFFAD543BC9* V_4 = NULL;
	RuntimeObject* G_B5_0 = NULL;
	RuntimeObject* G_B4_0 = NULL;
	int32_t G_B6_0 = 0;
	RuntimeObject* G_B10_0 = NULL;
	RuntimeObject* G_B9_0 = NULL;
	bool G_B11_0 = false;
	{
		goto IL_000e;
	}

IL_000e:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		if (!L_1)
		{
			goto IL_0149;
		}
	}
	{
		RuntimeObject* L_2 = (RuntimeObject*)__this->____comparer_6;
		RuntimeObject* L_3 = L_2;
		if (L_3)
		{
			G_B5_0 = L_3;
			goto IL_0032;
		}
		G_B4_0 = L_3;
	}
	{
		int32_t L_4;
		L_4 = Int32_GetHashCode_m253D60FF7527A483E91004B7A2366F13E225E295((&___0_key), il2cpp_rgctx_method(method->klass->rgctx_data, 44));
		G_B6_0 = L_4;
		goto IL_0038;
	}

IL_0032:
	{
		int32_t L_5 = ___0_key;
		NullCheck(G_B5_0);
		int32_t L_6;
		L_6 = InterfaceFuncInvoker1< int32_t, int32_t >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 1), G_B5_0, L_5);
		G_B6_0 = L_6;
	}

IL_0038:
	{
		V_0 = ((int32_t)(G_B6_0&((int32_t)2147483647LL)));
		int32_t L_7 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_8 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		NullCheck(L_8);
		V_1 = ((int32_t)(L_7%((int32_t)(((RuntimeArray*)L_8)->max_length))));
		V_2 = (-1);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		int32_t L_10 = V_1;
		NullCheck(L_9);
		int32_t L_11 = L_10;
		int32_t L_12 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		V_3 = ((int32_t)il2cpp_codegen_subtract(L_12, 1));
		goto IL_0142;
	}

IL_005c:
	{
		EntryU5BU5D_tD89AF257A311DB3C41DA1BEE9D8F0B2E5EA7E86E* L_13 = (EntryU5BU5D_tD89AF257A311DB3C41DA1BEE9D8F0B2E5EA7E86E*)__this->____entries_1;
		int32_t L_14 = V_3;
		NullCheck(L_13);
		V_4 = ((L_13)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_14)));
		Entry_t3C43C931209AE339471E46F5C5C78DFFAD543BC9* L_15 = V_4;
		int32_t L_16 = (int32_t)L_15->___hashCode_0;
		int32_t L_17 = V_0;
		if ((!(((uint32_t)L_16) == ((uint32_t)L_17))))
		{
			goto IL_0138;
		}
	}
	{
		RuntimeObject* L_18 = (RuntimeObject*)__this->____comparer_6;
		RuntimeObject* L_19 = L_18;
		if (L_19)
		{
			G_B10_0 = L_19;
			goto IL_0095;
		}
		G_B9_0 = L_19;
	}
	{
		EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* L_20;
		L_20 = EqualityComparer_1_get_Default_mF70F6C11A35B420DFA4628EE316B087F2DCB280C_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		Entry_t3C43C931209AE339471E46F5C5C78DFFAD543BC9* L_21 = V_4;
		int32_t L_22 = (int32_t)L_21->___key_2;
		int32_t L_23 = ___0_key;
		NullCheck(L_20);
		bool L_24;
		L_24 = VirtualFuncInvoker2< bool, int32_t, int32_t >::Invoke(8, L_20, L_22, L_23);
		G_B11_0 = L_24;
		goto IL_00a2;
	}

IL_0095:
	{
		Entry_t3C43C931209AE339471E46F5C5C78DFFAD543BC9* L_25 = V_4;
		int32_t L_26 = (int32_t)L_25->___key_2;
		int32_t L_27 = ___0_key;
		NullCheck(G_B10_0);
		bool L_28;
		L_28 = InterfaceFuncInvoker2< bool, int32_t, int32_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 1), G_B10_0, L_26, L_27);
		G_B11_0 = L_28;
	}

IL_00a2:
	{
		if (!G_B11_0)
		{
			goto IL_0138;
		}
	}
	{
		int32_t L_29 = V_2;
		if ((((int32_t)L_29) >= ((int32_t)0)))
		{
			goto IL_00be;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_30 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		int32_t L_31 = V_1;
		Entry_t3C43C931209AE339471E46F5C5C78DFFAD543BC9* L_32 = V_4;
		int32_t L_33 = (int32_t)L_32->___next_1;
		NullCheck(L_30);
		(L_30)->SetAt(static_cast<il2cpp_array_size_t>(L_31), (int32_t)((int32_t)il2cpp_codegen_add(L_33, 1)));
		goto IL_00d6;
	}

IL_00be:
	{
		EntryU5BU5D_tD89AF257A311DB3C41DA1BEE9D8F0B2E5EA7E86E* L_34 = (EntryU5BU5D_tD89AF257A311DB3C41DA1BEE9D8F0B2E5EA7E86E*)__this->____entries_1;
		int32_t L_35 = V_2;
		NullCheck(L_34);
		Entry_t3C43C931209AE339471E46F5C5C78DFFAD543BC9* L_36 = V_4;
		int32_t L_37 = (int32_t)L_36->___next_1;
		((L_34)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_35)))->___next_1 = L_37;
	}

IL_00d6:
	{
		Entry_t3C43C931209AE339471E46F5C5C78DFFAD543BC9* L_38 = V_4;
		L_38->___hashCode_0 = (-1);
		Entry_t3C43C931209AE339471E46F5C5C78DFFAD543BC9* L_39 = V_4;
		int32_t L_40 = (int32_t)__this->____freeList_3;
		L_39->___next_1 = L_40;
		goto IL_00ff;
	}

IL_00ff:
	{
	}
	{
		Entry_t3C43C931209AE339471E46F5C5C78DFFAD543BC9* L_41 = V_4;
		TreeViewItemData_1_t95D9721135F40D0DB3D221F8EB2543C396D350F4* L_42 = (TreeViewItemData_1_t95D9721135F40D0DB3D221F8EB2543C396D350F4*)(&L_41->___value_3);
		il2cpp_codegen_initobj(L_42, sizeof(TreeViewItemData_1_t95D9721135F40D0DB3D221F8EB2543C396D350F4));
	}

IL_0113:
	{
		int32_t L_43 = V_3;
		__this->____freeList_3 = L_43;
		int32_t L_44 = (int32_t)__this->____freeCount_4;
		__this->____freeCount_4 = ((int32_t)il2cpp_codegen_add(L_44, 1));
		int32_t L_45 = (int32_t)__this->____version_5;
		__this->____version_5 = ((int32_t)il2cpp_codegen_add(L_45, 1));
		return (bool)1;
	}

IL_0138:
	{
		int32_t L_46 = V_3;
		V_2 = L_46;
		Entry_t3C43C931209AE339471E46F5C5C78DFFAD543BC9* L_47 = V_4;
		int32_t L_48 = (int32_t)L_47->___next_1;
		V_3 = L_48;
	}

IL_0142:
	{
		int32_t L_49 = V_3;
		if ((((int32_t)L_49) >= ((int32_t)0)))
		{
			goto IL_005c;
		}
	}

IL_0149:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_m9A36DBD18366FC1E845B485401B66A846B96103E_gshared (Dictionary_2_tC44035903CD447F30151D3470629A0598D22856F* __this, int32_t ___0_key, TreeViewItemData_1_t95D9721135F40D0DB3D221F8EB2543C396D350F4* ___1_value, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___0_key;
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_mB1F48D02466EA489E158922AAE99F45DB56C9FB9(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 28));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0025;
		}
	}
	{
		TreeViewItemData_1_t95D9721135F40D0DB3D221F8EB2543C396D350F4* L_3 = ___1_value;
		EntryU5BU5D_tD89AF257A311DB3C41DA1BEE9D8F0B2E5EA7E86E* L_4 = (EntryU5BU5D_tD89AF257A311DB3C41DA1BEE9D8F0B2E5EA7E86E*)__this->____entries_1;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		TreeViewItemData_1_t95D9721135F40D0DB3D221F8EB2543C396D350F4 L_6 = (TreeViewItemData_1_t95D9721135F40D0DB3D221F8EB2543C396D350F4)((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)))->___value_3;
		*(TreeViewItemData_1_t95D9721135F40D0DB3D221F8EB2543C396D350F4*)L_3 = L_6;
		Il2CppCodeGenWriteBarrier((void**)&(((TreeViewItemData_1_t95D9721135F40D0DB3D221F8EB2543C396D350F4*)L_3)->___m_Data_1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((TreeViewItemData_1_t95D9721135F40D0DB3D221F8EB2543C396D350F4*)L_3)->___m_Children_2), (void*)NULL);
		#endif
		return (bool)1;
	}

IL_0025:
	{
		TreeViewItemData_1_t95D9721135F40D0DB3D221F8EB2543C396D350F4* L_7 = ___1_value;
		il2cpp_codegen_initobj(L_7, sizeof(TreeViewItemData_1_t95D9721135F40D0DB3D221F8EB2543C396D350F4));
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryAdd_m6D4D58FA2DCDB91F5AD8AA61953D28DBD73E1DF5_gshared (Dictionary_2_tC44035903CD447F30151D3470629A0598D22856F* __this, int32_t ___0_key, TreeViewItemData_1_t95D9721135F40D0DB3D221F8EB2543C396D350F4 ___1_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_key;
		TreeViewItemData_1_t95D9721135F40D0DB3D221F8EB2543C396D350F4 L_1 = ___1_value;
		bool L_2;
		L_2 = Dictionary_2_TryInsert_mAC235DEF75BD8560A1598E0744B7CC55359D6B4B(__this, L_0, L_1, (uint8_t)0, il2cpp_rgctx_method(method->klass->rgctx_data, 29));
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_mE5A34ADBCA667FAE11A0320D4EF6D33BC9FD40F7_gshared (Dictionary_2_tC44035903CD447F30151D3470629A0598D22856F* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_mEDAEFB5BC29EE059E6ABB1181415F84B5DB54299_gshared (Dictionary_2_tC44035903CD447F30151D3470629A0598D22856F* __this, KeyValuePair_2U5BU5D_t4A52453D810EE41FD9E873C0FA5C9F4500832CAC* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		KeyValuePair_2U5BU5D_t4A52453D810EE41FD9E873C0FA5C9F4500832CAC* L_0 = ___0_array;
		int32_t L_1 = ___1_index;
		Dictionary_2_CopyTo_mB0FEE83321F8E70FC1A5D1847B0EBFA5507A67E1(__this, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 42));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_ICollection_CopyTo_mC89F377B9C22C4689FA374FB2F766DDD27DBC42B_gshared (Dictionary_2_tC44035903CD447F30151D3470629A0598D22856F* __this, RuntimeArray* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	KeyValuePair_2U5BU5D_t4A52453D810EE41FD9E873C0FA5C9F4500832CAC* V_0 = NULL;
	DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533* V_1 = NULL;
	EntryU5BU5D_tD89AF257A311DB3C41DA1BEE9D8F0B2E5EA7E86E* V_2 = NULL;
	int32_t V_3 = 0;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_4 = NULL;
	int32_t V_5 = 0;
	EntryU5BU5D_tD89AF257A311DB3C41DA1BEE9D8F0B2E5EA7E86E* V_6 = NULL;
	int32_t V_7 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeArray* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)3, NULL);
	}

IL_0009:
	{
		RuntimeArray* L_1 = ___0_array;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(L_1, NULL);
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0018;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)7, NULL);
	}

IL_0018:
	{
		RuntimeArray* L_3 = ___0_array;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(L_3, 0, NULL);
		if (!L_4)
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)6, NULL);
	}

IL_0027:
	{
		int32_t L_5 = ___1_index;
		RuntimeArray* L_6 = ___0_array;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(L_6, NULL);
		if ((!(((uint32_t)L_5) > ((uint32_t)L_7))))
		{
			goto IL_0035;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0035:
	{
		RuntimeArray* L_8 = ___0_array;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(L_8, NULL);
		int32_t L_10 = ___1_index;
		int32_t L_11;
		L_11 = Dictionary_2_get_Count_mB6EB1F2269F19C3B1119FD6DDA8B51155F7BE2E3(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 36));
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_9, L_10))) >= ((int32_t)L_11)))
		{
			goto IL_004b;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)5, NULL);
	}

IL_004b:
	{
		RuntimeArray* L_12 = ___0_array;
		V_0 = ((KeyValuePair_2U5BU5D_t4A52453D810EE41FD9E873C0FA5C9F4500832CAC*)IsInst((RuntimeObject*)L_12, il2cpp_rgctx_data(method->klass->rgctx_data, 35)));
		KeyValuePair_2U5BU5D_t4A52453D810EE41FD9E873C0FA5C9F4500832CAC* L_13 = V_0;
		if (!L_13)
		{
			goto IL_005e;
		}
	}
	{
		KeyValuePair_2U5BU5D_t4A52453D810EE41FD9E873C0FA5C9F4500832CAC* L_14 = V_0;
		int32_t L_15 = ___1_index;
		Dictionary_2_CopyTo_mB0FEE83321F8E70FC1A5D1847B0EBFA5507A67E1(__this, L_14, L_15, il2cpp_rgctx_method(method->klass->rgctx_data, 42));
		return;
	}

IL_005e:
	{
		RuntimeArray* L_16 = ___0_array;
		V_1 = ((DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533*)IsInst((RuntimeObject*)L_16, DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533_il2cpp_TypeInfo_var));
		DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533* L_17 = V_1;
		if (!L_17)
		{
			goto IL_00c3;
		}
	}
	{
		EntryU5BU5D_tD89AF257A311DB3C41DA1BEE9D8F0B2E5EA7E86E* L_18 = (EntryU5BU5D_tD89AF257A311DB3C41DA1BEE9D8F0B2E5EA7E86E*)__this->____entries_1;
		V_2 = L_18;
		V_3 = 0;
		goto IL_00b9;
	}

IL_0073:
	{
		EntryU5BU5D_tD89AF257A311DB3C41DA1BEE9D8F0B2E5EA7E86E* L_19 = V_2;
		int32_t L_20 = V_3;
		NullCheck(L_19);
		int32_t L_21 = (int32_t)((L_19)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_20)))->___hashCode_0;
		if ((((int32_t)L_21) < ((int32_t)0)))
		{
			goto IL_00b5;
		}
	}
	{
		DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533* L_22 = V_1;
		int32_t L_23 = ___1_index;
		int32_t L_24 = L_23;
		___1_index = ((int32_t)il2cpp_codegen_add(L_24, 1));
		EntryU5BU5D_tD89AF257A311DB3C41DA1BEE9D8F0B2E5EA7E86E* L_25 = V_2;
		int32_t L_26 = V_3;
		NullCheck(L_25);
		int32_t L_27 = (int32_t)((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___key_2;
		int32_t L_28 = L_27;
		RuntimeObject* L_29 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14), &L_28);
		EntryU5BU5D_tD89AF257A311DB3C41DA1BEE9D8F0B2E5EA7E86E* L_30 = V_2;
		int32_t L_31 = V_3;
		NullCheck(L_30);
		TreeViewItemData_1_t95D9721135F40D0DB3D221F8EB2543C396D350F4 L_32 = (TreeViewItemData_1_t95D9721135F40D0DB3D221F8EB2543C396D350F4)((L_30)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_31)))->___value_3;
		TreeViewItemData_1_t95D9721135F40D0DB3D221F8EB2543C396D350F4 L_33 = L_32;
		RuntimeObject* L_34 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15), &L_33);
		DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB L_35;
		memset((&L_35), 0, sizeof(L_35));
		DictionaryEntry__ctor_m2768353E53A75C4860E34B37DAF1342120C5D1EA((&L_35), L_29, L_34, NULL);
		NullCheck(L_22);
		(L_22)->SetAt(static_cast<il2cpp_array_size_t>(L_24), (DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB)L_35);
	}

IL_00b5:
	{
		int32_t L_36 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_36, 1));
	}

IL_00b9:
	{
		int32_t L_37 = V_3;
		int32_t L_38 = (int32_t)__this->____count_2;
		if ((((int32_t)L_37) < ((int32_t)L_38)))
		{
			goto IL_0073;
		}
	}
	{
		return;
	}

IL_00c3:
	{
		RuntimeArray* L_39 = ___0_array;
		V_4 = ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)IsInst((RuntimeObject*)L_39, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_40 = V_4;
		if (L_40)
		{
			goto IL_00d4;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
	}

IL_00d4:
	{
	}
	try
	{
		{
			int32_t L_41 = (int32_t)__this->____count_2;
			V_5 = L_41;
			EntryU5BU5D_tD89AF257A311DB3C41DA1BEE9D8F0B2E5EA7E86E* L_42 = (EntryU5BU5D_tD89AF257A311DB3C41DA1BEE9D8F0B2E5EA7E86E*)__this->____entries_1;
			V_6 = L_42;
			V_7 = 0;
			goto IL_0130_1;
		}

IL_00ea_1:
		{
			EntryU5BU5D_tD89AF257A311DB3C41DA1BEE9D8F0B2E5EA7E86E* L_43 = V_6;
			int32_t L_44 = V_7;
			NullCheck(L_43);
			int32_t L_45 = (int32_t)((L_43)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_44)))->___hashCode_0;
			if ((((int32_t)L_45) < ((int32_t)0)))
			{
				goto IL_012a_1;
			}
		}
		{
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_46 = V_4;
			int32_t L_47 = ___1_index;
			int32_t L_48 = L_47;
			___1_index = ((int32_t)il2cpp_codegen_add(L_48, 1));
			EntryU5BU5D_tD89AF257A311DB3C41DA1BEE9D8F0B2E5EA7E86E* L_49 = V_6;
			int32_t L_50 = V_7;
			NullCheck(L_49);
			int32_t L_51 = (int32_t)((L_49)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_50)))->___key_2;
			EntryU5BU5D_tD89AF257A311DB3C41DA1BEE9D8F0B2E5EA7E86E* L_52 = V_6;
			int32_t L_53 = V_7;
			NullCheck(L_52);
			TreeViewItemData_1_t95D9721135F40D0DB3D221F8EB2543C396D350F4 L_54 = (TreeViewItemData_1_t95D9721135F40D0DB3D221F8EB2543C396D350F4)((L_52)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_53)))->___value_3;
			KeyValuePair_2_tCA9456FCC0FBD03E0C9FF69F0B168B558FD2A5ED L_55;
			memset((&L_55), 0, sizeof(L_55));
			KeyValuePair_2__ctor_mFF17374CE90C7FE231E65EAFF2287053FA1C9AC3((&L_55), L_51, L_54, il2cpp_rgctx_method(method->klass->rgctx_data, 37));
			KeyValuePair_2_tCA9456FCC0FBD03E0C9FF69F0B168B558FD2A5ED L_56 = L_55;
			RuntimeObject* L_57 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 21), &L_56);
			NullCheck(L_46);
			ArrayElementTypeCheck (L_46, L_57);
			(L_46)->SetAt(static_cast<il2cpp_array_size_t>(L_48), (RuntimeObject*)L_57);
		}

IL_012a_1:
		{
			int32_t L_58 = V_7;
			V_7 = ((int32_t)il2cpp_codegen_add(L_58, 1));
		}

IL_0130_1:
		{
			int32_t L_59 = V_7;
			int32_t L_60 = V_5;
			if ((((int32_t)L_59) < ((int32_t)L_60)))
			{
				goto IL_00ea_1;
			}
		}
		{
			goto IL_0140;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0138;
		}
		throw e;
	}

CATCH_0138:
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0140;
	}

IL_0140:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m01BDFC129DFFBB226B2FA7677A55FA3AE7541DD4_gshared (Dictionary_2_tC44035903CD447F30151D3470629A0598D22856F* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t0BE77930571D15651FEF9D9D38DBD8CCC82633B9 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m05BF5395EAD892FD0CB4F3C6C33C783FEBD9F063((&L_0), __this, 2, il2cpp_rgctx_method(method->klass->rgctx_data, 39));
		Enumerator_t0BE77930571D15651FEF9D9D38DBD8CCC82633B9 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 38), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_ICollection_get_SyncRoot_mB8233567B1913DB15FF31976DD4C98D1A6381809_gshared (Dictionary_2_tC44035903CD447F30151D3470629A0598D22856F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->____syncRoot_9;
		if (L_0)
		{
			goto IL_001a;
		}
	}
	{
		RuntimeObject** L_1 = (RuntimeObject**)(&__this->____syncRoot_9);
		RuntimeObject* L_2 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_2, NULL);
		RuntimeObject* L_3;
		L_3 = InterlockedCompareExchangeImpl<RuntimeObject*>(L_1, L_2, NULL);
	}

IL_001a:
	{
		RuntimeObject* L_4 = (RuntimeObject*)__this->____syncRoot_9;
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IDictionary_get_Keys_m91BE7261CAE2F016B570D19D07A009E63A596B79_gshared (Dictionary_2_tC44035903CD447F30151D3470629A0598D22856F* __this, const RuntimeMethod* method) 
{
	{
		KeyCollection_t27A4E9C75C7D4062FA62AB82C4F9EBE443BD465A* L_0;
		L_0 = Dictionary_2_get_Keys_mCA75818A897B564BAA7874AA2D7F8E257A06BF0B(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 55));
		return (RuntimeObject*)L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IDictionary_get_Item_m0AEC2FDE585FCD73D60143064015E7347EAF13B8_gshared (Dictionary_2_tC44035903CD447F30151D3470629A0598D22856F* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		RuntimeObject* L_0 = ___0_key;
		bool L_1;
		L_1 = Dictionary_2_IsCompatibleKey_mF8A281EB724D891BD9DF117DFFE2CC104420759C(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 56));
		if (!L_1)
		{
			goto IL_0030;
		}
	}
	{
		RuntimeObject* L_2 = ___0_key;
		int32_t L_3;
		L_3 = Dictionary_2_FindEntry_mB1F48D02466EA489E158922AAE99F45DB56C9FB9(__this, ((*(int32_t*)((int32_t*)(int32_t*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 14))))), il2cpp_rgctx_method(method->klass->rgctx_data, 28));
		V_0 = L_3;
		int32_t L_4 = V_0;
		if ((((int32_t)L_4) < ((int32_t)0)))
		{
			goto IL_0030;
		}
	}
	{
		EntryU5BU5D_tD89AF257A311DB3C41DA1BEE9D8F0B2E5EA7E86E* L_5 = (EntryU5BU5D_tD89AF257A311DB3C41DA1BEE9D8F0B2E5EA7E86E*)__this->____entries_1;
		int32_t L_6 = V_0;
		NullCheck(L_5);
		TreeViewItemData_1_t95D9721135F40D0DB3D221F8EB2543C396D350F4 L_7 = (TreeViewItemData_1_t95D9721135F40D0DB3D221F8EB2543C396D350F4)((L_5)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_6)))->___value_3;
		TreeViewItemData_1_t95D9721135F40D0DB3D221F8EB2543C396D350F4 L_8 = L_7;
		RuntimeObject* L_9 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15), &L_8);
		return L_9;
	}

IL_0030:
	{
		return NULL;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_IDictionary_set_Item_mAF23364001EC1FD490C24A65A8E74F5BBC523DC6_gshared (Dictionary_2_tC44035903CD447F30151D3470629A0598D22856F* __this, RuntimeObject* ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 2> __active_exceptions;
	{
		RuntimeObject* L_0 = ___0_key;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)5, NULL);
	}

IL_0009:
	{
		RuntimeObject* L_1 = ___1_value;
		ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisTreeViewItemData_1_t95D9721135F40D0DB3D221F8EB2543C396D350F4_m66F50948C6CBCA9CDB992356871C2622CA4ED150(L_1, (int32_t)((int32_t)15), il2cpp_rgctx_method(method->klass->rgctx_data, 58));
	}
	try
	{
		{
			RuntimeObject* L_2 = ___0_key;
			V_0 = ((*(int32_t*)((int32_t*)(int32_t*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 14)))));
		}
		try
		{
			int32_t L_3 = V_0;
			RuntimeObject* L_4 = ___1_value;
			Dictionary_2_set_Item_m6ACCDAA15A3D3B734405727DF8AD5AD09BA14333(__this, L_3, ((*(TreeViewItemData_1_t95D9721135F40D0DB3D221F8EB2543C396D350F4*)((TreeViewItemData_1_t95D9721135F40D0DB3D221F8EB2543C396D350F4*)(TreeViewItemData_1_t95D9721135F40D0DB3D221F8EB2543C396D350F4*)UnBox(L_4, il2cpp_rgctx_data(method->klass->rgctx_data, 15))))), il2cpp_rgctx_method(method->klass->rgctx_data, 59));
			goto IL_003a_1;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_0027_1;
			}
			throw e;
		}

CATCH_0027_1:
		{
			RuntimeObject* L_5 = ___1_value;
			RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 60)) };
			il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
			Type_t* L_7;
			L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
			ThrowHelper_ThrowWrongValueTypeArgumentException_mC1A6BBE43C360583C1E2C463D5B0AADF1E3E1910(L_5, L_7, NULL);
			IL2CPP_POP_ACTIVE_EXCEPTION();
			goto IL_003a_1;
		}

IL_003a_1:
		{
			goto IL_004f;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_003c;
		}
		throw e;
	}

CATCH_003c:
	{
		RuntimeObject* L_8 = ___0_key;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_9 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 61)) };
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
		Type_t* L_10;
		L_10 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_9, NULL);
		ThrowHelper_ThrowWrongKeyTypeArgumentException_m90E5BCE2CB10EEC16F254C237121C6816C4D6982(L_8, L_10, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_004f;
	}

IL_004f:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_IsCompatibleKey_mF8A281EB724D891BD9DF117DFFE2CC104420759C_gshared (RuntimeObject* ___0_key, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_key;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)5, NULL);
	}

IL_0009:
	{
		RuntimeObject* L_1 = ___0_key;
		return (bool)((!(((RuntimeObject*)(RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_1, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 14)))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_IDictionary_Contains_m7342F42FE0F456A0479060BFF4C6C3DDC10A790C_gshared (Dictionary_2_tC44035903CD447F30151D3470629A0598D22856F* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_key;
		bool L_1;
		L_1 = Dictionary_2_IsCompatibleKey_mF8A281EB724D891BD9DF117DFFE2CC104420759C(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 56));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_key;
		bool L_3;
		L_3 = Dictionary_2_ContainsKey_m66D807D27A003B8D2BAC644F46131821F92790CE(__this, ((*(int32_t*)((int32_t*)(int32_t*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 14))))), il2cpp_rgctx_method(method->klass->rgctx_data, 62));
		return L_3;
	}

IL_0015:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IDictionary_GetEnumerator_m51499F5113E0BB3E02B497BF3D3ED1809AB53B81_gshared (Dictionary_2_tC44035903CD447F30151D3470629A0598D22856F* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t0BE77930571D15651FEF9D9D38DBD8CCC82633B9 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m05BF5395EAD892FD0CB4F3C6C33C783FEBD9F063((&L_0), __this, 1, il2cpp_rgctx_method(method->klass->rgctx_data, 39));
		Enumerator_t0BE77930571D15651FEF9D9D38DBD8CCC82633B9 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 38), &L_1);
		return (RuntimeObject*)L_2;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m1AE7A14FE6CF65276434BAC094AE2F7269D06024_gshared (Dictionary_2_t01224C8DBCCFE276E97D2BF52F4D7B10D3642682* __this, const RuntimeMethod* method) 
{
	{
		Dictionary_2__ctor_mB9E422F28BC7E8D1302E87AA7D8AC6CFC64950EF(__this, 0, (RuntimeObject*)NULL, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m06B53BFC9A627FEE633CC1D4E73314B2CFF4B48B_gshared (Dictionary_2_t01224C8DBCCFE276E97D2BF52F4D7B10D3642682* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_capacity;
		Dictionary_2__ctor_mB9E422F28BC7E8D1302E87AA7D8AC6CFC64950EF(__this, L_0, (RuntimeObject*)NULL, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mABB854F1C48C5B03B68B0A413FFB9656F9153025_gshared (Dictionary_2_t01224C8DBCCFE276E97D2BF52F4D7B10D3642682* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_comparer;
		Dictionary_2__ctor_mB9E422F28BC7E8D1302E87AA7D8AC6CFC64950EF(__this, 0, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mB9E422F28BC7E8D1302E87AA7D8AC6CFC64950EF_gshared (Dictionary_2_t01224C8DBCCFE276E97D2BF52F4D7B10D3642682* __this, int32_t ___0_capacity, RuntimeObject* ___1_comparer, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		int32_t L_0 = ___0_capacity;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0011;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m9B335696876184D17D1F8D7AF94C1B5B0869AA97((int32_t)((int32_t)12), NULL);
	}

IL_0011:
	{
		int32_t L_1 = ___0_capacity;
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_001d;
		}
	}
	{
		int32_t L_2 = ___0_capacity;
		int32_t L_3;
		L_3 = Dictionary_2_Initialize_m94BC29643E386903C4BD1E14BFA63BE82988EE68(__this, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
	}

IL_001d:
	{
		RuntimeObject* L_4 = ___1_comparer;
		EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* L_5;
		L_5 = EqualityComparer_1_get_Default_mF70F6C11A35B420DFA4628EE316B087F2DCB280C_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		if ((((RuntimeObject*)(RuntimeObject*)L_4) == ((RuntimeObject*)(EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC*)L_5)))
		{
			goto IL_002c;
		}
	}
	{
		RuntimeObject* L_6 = ___1_comparer;
		__this->____comparer_6 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____comparer_6), (void*)L_6);
	}

IL_002c:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mE84BE58C018F881F5FF432C8895A962670F5B3F6_gshared (Dictionary_2_t01224C8DBCCFE276E97D2BF52F4D7B10D3642682* __this, RuntimeObject* ___0_dictionary, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_dictionary;
		Dictionary_2__ctor_mC11BF75E2F3DCB9A0411B7ED8F06942BA0E86A29(__this, L_0, (RuntimeObject*)NULL, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mC11BF75E2F3DCB9A0411B7ED8F06942BA0E86A29_gshared (Dictionary_2_t01224C8DBCCFE276E97D2BF52F4D7B10D3642682* __this, RuntimeObject* ___0_dictionary, RuntimeObject* ___1_comparer, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	EntryU5BU5D_t6E8F51999B5C2D1A5E09B1963CF042E7B5CAA500* V_1 = NULL;
	int32_t V_2 = 0;
	RuntimeObject* V_3 = NULL;
	KeyValuePair_2_t0EAC8DA2D95957AFA60DD198D013622384C0D213 V_4;
	memset((&V_4), 0, sizeof(V_4));
	Dictionary_2_t01224C8DBCCFE276E97D2BF52F4D7B10D3642682* G_B2_0 = NULL;
	Dictionary_2_t01224C8DBCCFE276E97D2BF52F4D7B10D3642682* G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	Dictionary_2_t01224C8DBCCFE276E97D2BF52F4D7B10D3642682* G_B3_1 = NULL;
	{
		RuntimeObject* L_0 = ___0_dictionary;
		if (L_0)
		{
			G_B2_0 = __this;
			goto IL_0007;
		}
		G_B1_0 = __this;
	}
	{
		G_B3_0 = 0;
		G_B3_1 = G_B1_0;
		goto IL_000d;
	}

IL_0007:
	{
		RuntimeObject* L_1 = ___0_dictionary;
		NullCheck((RuntimeObject*)L_1);
		int32_t L_2;
		L_2 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 9), (RuntimeObject*)L_1);
		G_B3_0 = L_2;
		G_B3_1 = G_B2_0;
	}

IL_000d:
	{
		RuntimeObject* L_3 = ___1_comparer;
		Dictionary_2__ctor_mB9E422F28BC7E8D1302E87AA7D8AC6CFC64950EF(G_B3_1, G_B3_0, L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		RuntimeObject* L_4 = ___0_dictionary;
		if (L_4)
		{
			goto IL_001c;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)1, NULL);
	}

IL_001c:
	{
		RuntimeObject* L_5 = ___0_dictionary;
		NullCheck((RuntimeObject*)L_5);
		Type_t* L_6;
		L_6 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3((RuntimeObject*)L_5, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 11)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		bool L_9;
		L_9 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_6, L_8, NULL);
		if (!L_9)
		{
			goto IL_0080;
		}
	}
	{
		RuntimeObject* L_10 = ___0_dictionary;
		Dictionary_2_t01224C8DBCCFE276E97D2BF52F4D7B10D3642682* L_11 = ((Dictionary_2_t01224C8DBCCFE276E97D2BF52F4D7B10D3642682*)CastclassClass((RuntimeObject*)L_10, il2cpp_rgctx_data(method->klass->rgctx_data, 6)));
		NullCheck(L_11);
		int32_t L_12 = (int32_t)L_11->____count_2;
		V_0 = L_12;
		NullCheck(L_11);
		EntryU5BU5D_t6E8F51999B5C2D1A5E09B1963CF042E7B5CAA500* L_13 = (EntryU5BU5D_t6E8F51999B5C2D1A5E09B1963CF042E7B5CAA500*)L_11->____entries_1;
		V_1 = L_13;
		V_2 = 0;
		goto IL_007b;
	}

IL_004a:
	{
		EntryU5BU5D_t6E8F51999B5C2D1A5E09B1963CF042E7B5CAA500* L_14 = V_1;
		int32_t L_15 = V_2;
		NullCheck(L_14);
		int32_t L_16 = (int32_t)((L_14)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_15)))->___hashCode_0;
		if ((((int32_t)L_16) < ((int32_t)0)))
		{
			goto IL_0077;
		}
	}
	{
		EntryU5BU5D_t6E8F51999B5C2D1A5E09B1963CF042E7B5CAA500* L_17 = V_1;
		int32_t L_18 = V_2;
		NullCheck(L_17);
		int32_t L_19 = (int32_t)((L_17)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_18)))->___key_2;
		EntryU5BU5D_t6E8F51999B5C2D1A5E09B1963CF042E7B5CAA500* L_20 = V_1;
		int32_t L_21 = V_2;
		NullCheck(L_20);
		bool L_22 = (bool)((L_20)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_21)))->___value_3;
		Dictionary_2_Add_m15404AE1ED9C4C7CF89DAEAB8C5F3280C7D115EB(__this, L_19, L_22, il2cpp_rgctx_method(method->klass->rgctx_data, 16));
	}

IL_0077:
	{
		int32_t L_23 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_23, 1));
	}

IL_007b:
	{
		int32_t L_24 = V_2;
		int32_t L_25 = V_0;
		if ((((int32_t)L_24) < ((int32_t)L_25)))
		{
			goto IL_004a;
		}
	}
	{
		return;
	}

IL_0080:
	{
		RuntimeObject* L_26 = ___0_dictionary;
		NullCheck((RuntimeObject*)L_26);
		RuntimeObject* L_27;
		L_27 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 17), (RuntimeObject*)L_26);
		V_3 = L_27;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00af:
			{
				{
					RuntimeObject* L_28 = V_3;
					if (!L_28)
					{
						goto IL_00b8;
					}
				}
				{
					RuntimeObject* L_29 = V_3;
					NullCheck((RuntimeObject*)L_29);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_29);
				}

IL_00b8:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_00a5_1;
			}

IL_0089_1:
			{
				RuntimeObject* L_30 = V_3;
				NullCheck(L_30);
				KeyValuePair_2_t0EAC8DA2D95957AFA60DD198D013622384C0D213 L_31;
				L_31 = InterfaceFuncInvoker0< KeyValuePair_2_t0EAC8DA2D95957AFA60DD198D013622384C0D213 >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 19), L_30);
				V_4 = L_31;
				int32_t L_32;
				L_32 = KeyValuePair_2_get_Key_m671CD723515F42017EA4D2DB01691D13288970A9_inline((&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 22));
				bool L_33;
				L_33 = KeyValuePair_2_get_Value_m00849F341D41ABD55D72D0701342145724AC3A9F_inline((&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 23));
				Dictionary_2_Add_m15404AE1ED9C4C7CF89DAEAB8C5F3280C7D115EB(__this, L_32, L_33, il2cpp_rgctx_method(method->klass->rgctx_data, 16));
			}

IL_00a5_1:
			{
				RuntimeObject* L_34 = V_3;
				NullCheck((RuntimeObject*)L_34);
				bool L_35;
				L_35 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_34);
				if (L_35)
				{
					goto IL_0089_1;
				}
			}
			{
				goto IL_00b9;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00b9:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m2D9BC134A4251C2BCCD1C4F37FB14A2797C464AC_gshared (Dictionary_2_t01224C8DBCCFE276E97D2BF52F4D7B10D3642682* __this, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___0_info, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___1_context, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConditionalWeakTable_2_Add_mF98A2811734A37D856C622E7783FD7502AA7F0B7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* L_0;
		L_0 = HashHelpers_get_SerializationInfoTable_m8C17D5483B39B68897AEFFD14A9E139AF858222F(NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_1 = ___0_info;
		NullCheck(L_0);
		ConditionalWeakTable_2_Add_mF98A2811734A37D856C622E7783FD7502AA7F0B7(L_0, (RuntimeObject*)__this, L_1, ConditionalWeakTable_2_Add_mF98A2811734A37D856C622E7783FD7502AA7F0B7_RuntimeMethod_var);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_get_Count_mC916574C49D9A72EAB6F28C2C25FDB0614CE1C5E_gshared (Dictionary_2_t01224C8DBCCFE276E97D2BF52F4D7B10D3642682* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____count_2;
		int32_t L_1 = (int32_t)__this->____freeCount_4;
		return ((int32_t)il2cpp_codegen_subtract(L_0, L_1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyCollection_t66E188B36DF8E1A23EBDA7253CDCE978CD3EF298* Dictionary_2_get_Keys_mEDBAB5200E3CD3202D5F94E16F4DABEFF601DE5F_gshared (Dictionary_2_t01224C8DBCCFE276E97D2BF52F4D7B10D3642682* __this, const RuntimeMethod* method) 
{
	{
		KeyCollection_t66E188B36DF8E1A23EBDA7253CDCE978CD3EF298* L_0 = (KeyCollection_t66E188B36DF8E1A23EBDA7253CDCE978CD3EF298*)__this->____keys_7;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		KeyCollection_t66E188B36DF8E1A23EBDA7253CDCE978CD3EF298* L_1 = (KeyCollection_t66E188B36DF8E1A23EBDA7253CDCE978CD3EF298*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 24));
		KeyCollection__ctor_m40D5DDD959361A7EBD659D91722CA5F015FDB893(L_1, __this, il2cpp_rgctx_method(method->klass->rgctx_data, 25));
		__this->____keys_7 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____keys_7), (void*)L_1);
	}

IL_0014:
	{
		KeyCollection_t66E188B36DF8E1A23EBDA7253CDCE978CD3EF298* L_2 = (KeyCollection_t66E188B36DF8E1A23EBDA7253CDCE978CD3EF298*)__this->____keys_7;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueCollection_t95D69F17F87935E5166EE0E3C174BB8A8F051F5B* Dictionary_2_get_Values_mD84044BD83C2E0E89780F9F680E6EAEAADE6C21B_gshared (Dictionary_2_t01224C8DBCCFE276E97D2BF52F4D7B10D3642682* __this, const RuntimeMethod* method) 
{
	{
		ValueCollection_t95D69F17F87935E5166EE0E3C174BB8A8F051F5B* L_0 = (ValueCollection_t95D69F17F87935E5166EE0E3C174BB8A8F051F5B*)__this->____values_8;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ValueCollection_t95D69F17F87935E5166EE0E3C174BB8A8F051F5B* L_1 = (ValueCollection_t95D69F17F87935E5166EE0E3C174BB8A8F051F5B*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 26));
		ValueCollection__ctor_m0031187CE28F9C4C0F5A5253924C7F751164DFA8(L_1, __this, il2cpp_rgctx_method(method->klass->rgctx_data, 27));
		__this->____values_8 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____values_8), (void*)L_1);
	}

IL_0014:
	{
		ValueCollection_t95D69F17F87935E5166EE0E3C174BB8A8F051F5B* L_2 = (ValueCollection_t95D69F17F87935E5166EE0E3C174BB8A8F051F5B*)__this->____values_8;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_get_Item_mFEABB1F5BA99558C75E330D9F550473FD42C4DFD_gshared (Dictionary_2_t01224C8DBCCFE276E97D2BF52F4D7B10D3642682* __this, int32_t ___0_key, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	bool V_1 = false;
	{
		int32_t L_0 = ___0_key;
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_mE1DD9E6586FB9B0C19DFB7EE7A3A9D8386D5D5D1(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 28));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_001e;
		}
	}
	{
		EntryU5BU5D_t6E8F51999B5C2D1A5E09B1963CF042E7B5CAA500* L_3 = (EntryU5BU5D_t6E8F51999B5C2D1A5E09B1963CF042E7B5CAA500*)__this->____entries_1;
		int32_t L_4 = V_0;
		NullCheck(L_3);
		bool L_5 = (bool)((L_3)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_4)))->___value_3;
		return L_5;
	}

IL_001e:
	{
		int32_t L_6 = ___0_key;
		int32_t L_7 = L_6;
		RuntimeObject* L_8 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14), &L_7);
		ThrowHelper_ThrowKeyNotFoundException_m6A17735FA486AD43F2488DE39B755AC60BC99CE7(L_8, NULL);
		il2cpp_codegen_initobj((&V_1), sizeof(bool));
		bool L_9 = V_1;
		return L_9;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_m266E81996A1E6BFCB7C91E78EC0DB1253655AD48_gshared (Dictionary_2_t01224C8DBCCFE276E97D2BF52F4D7B10D3642682* __this, int32_t ___0_key, bool ___1_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_key;
		bool L_1 = ___1_value;
		bool L_2;
		L_2 = Dictionary_2_TryInsert_mA1983D94216DE51D98CCD30629282266CCAFE97E(__this, L_0, L_1, (uint8_t)1, il2cpp_rgctx_method(method->klass->rgctx_data, 29));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_m15404AE1ED9C4C7CF89DAEAB8C5F3280C7D115EB_gshared (Dictionary_2_t01224C8DBCCFE276E97D2BF52F4D7B10D3642682* __this, int32_t ___0_key, bool ___1_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_key;
		bool L_1 = ___1_value;
		bool L_2;
		L_2 = Dictionary_2_TryInsert_mA1983D94216DE51D98CCD30629282266CCAFE97E(__this, L_0, L_1, (uint8_t)2, il2cpp_rgctx_method(method->klass->rgctx_data, 29));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m88AD79C266834E07C99A1DE00A3297F9CD2B82EF_gshared (Dictionary_2_t01224C8DBCCFE276E97D2BF52F4D7B10D3642682* __this, KeyValuePair_2_t0EAC8DA2D95957AFA60DD198D013622384C0D213 ___0_keyValuePair, const RuntimeMethod* method) 
{
	{
		int32_t L_0;
		L_0 = KeyValuePair_2_get_Key_m671CD723515F42017EA4D2DB01691D13288970A9_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		bool L_1;
		L_1 = KeyValuePair_2_get_Value_m00849F341D41ABD55D72D0701342145724AC3A9F_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		Dictionary_2_Add_m15404AE1ED9C4C7CF89DAEAB8C5F3280C7D115EB(__this, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 16));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m4462F865217031D600D34D4B5E5D0FA1BA7BDD7D_gshared (Dictionary_2_t01224C8DBCCFE276E97D2BF52F4D7B10D3642682* __this, KeyValuePair_2_t0EAC8DA2D95957AFA60DD198D013622384C0D213 ___0_keyValuePair, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0;
		L_0 = KeyValuePair_2_get_Key_m671CD723515F42017EA4D2DB01691D13288970A9_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_mE1DD9E6586FB9B0C19DFB7EE7A3A9D8386D5D5D1(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 28));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0038;
		}
	}
	{
		EqualityComparer_1_t97160852989689D9543E2E1EA7D7196DBEA5AEE4* L_3;
		L_3 = EqualityComparer_1_get_Default_mBB75BC0723DFD7850F43E72E34026DD070CF5932_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 30));
		EntryU5BU5D_t6E8F51999B5C2D1A5E09B1963CF042E7B5CAA500* L_4 = (EntryU5BU5D_t6E8F51999B5C2D1A5E09B1963CF042E7B5CAA500*)__this->____entries_1;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		bool L_6 = (bool)((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)))->___value_3;
		bool L_7;
		L_7 = KeyValuePair_2_get_Value_m00849F341D41ABD55D72D0701342145724AC3A9F_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		NullCheck(L_3);
		bool L_8;
		L_8 = VirtualFuncInvoker2< bool, bool, bool >::Invoke(8, L_3, L_6, L_7);
		if (!L_8)
		{
			goto IL_0038;
		}
	}
	{
		return (bool)1;
	}

IL_0038:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m20A4B81A426018B486687D643DC8F024F7761D1B_gshared (Dictionary_2_t01224C8DBCCFE276E97D2BF52F4D7B10D3642682* __this, KeyValuePair_2_t0EAC8DA2D95957AFA60DD198D013622384C0D213 ___0_keyValuePair, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0;
		L_0 = KeyValuePair_2_get_Key_m671CD723515F42017EA4D2DB01691D13288970A9_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_mE1DD9E6586FB9B0C19DFB7EE7A3A9D8386D5D5D1(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 28));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0046;
		}
	}
	{
		EqualityComparer_1_t97160852989689D9543E2E1EA7D7196DBEA5AEE4* L_3;
		L_3 = EqualityComparer_1_get_Default_mBB75BC0723DFD7850F43E72E34026DD070CF5932_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 30));
		EntryU5BU5D_t6E8F51999B5C2D1A5E09B1963CF042E7B5CAA500* L_4 = (EntryU5BU5D_t6E8F51999B5C2D1A5E09B1963CF042E7B5CAA500*)__this->____entries_1;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		bool L_6 = (bool)((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)))->___value_3;
		bool L_7;
		L_7 = KeyValuePair_2_get_Value_m00849F341D41ABD55D72D0701342145724AC3A9F_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		NullCheck(L_3);
		bool L_8;
		L_8 = VirtualFuncInvoker2< bool, bool, bool >::Invoke(8, L_3, L_6, L_7);
		if (!L_8)
		{
			goto IL_0046;
		}
	}
	{
		int32_t L_9;
		L_9 = KeyValuePair_2_get_Key_m671CD723515F42017EA4D2DB01691D13288970A9_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		bool L_10;
		L_10 = Dictionary_2_Remove_m516AA9DF9B695BC792DA56C301B4B069DE8E8F9E(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 34));
		return (bool)1;
	}

IL_0046:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Clear_mE2925B42DE92CB95771AB4BADE479B7701671EB8_gshared (Dictionary_2_t01224C8DBCCFE276E97D2BF52F4D7B10D3642682* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = (int32_t)__this->____count_2;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_0041;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		NullCheck(L_3);
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_2, 0, ((int32_t)(((RuntimeArray*)L_3)->max_length)), NULL);
		__this->____count_2 = 0;
		__this->____freeList_3 = (-1);
		__this->____freeCount_4 = 0;
		EntryU5BU5D_t6E8F51999B5C2D1A5E09B1963CF042E7B5CAA500* L_4 = (EntryU5BU5D_t6E8F51999B5C2D1A5E09B1963CF042E7B5CAA500*)__this->____entries_1;
		int32_t L_5 = V_0;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_4, 0, L_5, NULL);
	}

IL_0041:
	{
		int32_t L_6 = (int32_t)__this->____version_5;
		__this->____version_5 = ((int32_t)il2cpp_codegen_add(L_6, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_m5A6361833F0EDADF18530A95D2CF315A0319D8E0_gshared (Dictionary_2_t01224C8DBCCFE276E97D2BF52F4D7B10D3642682* __this, int32_t ___0_key, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_key;
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_mE1DD9E6586FB9B0C19DFB7EE7A3A9D8386D5D5D1(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 28));
		return (bool)((((int32_t)((((int32_t)L_1) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsValue_mFCD8AD6170953392F984E4F03BF8DDF3A9EF11BD_gshared (Dictionary_2_t01224C8DBCCFE276E97D2BF52F4D7B10D3642682* __this, bool ___0_value, const RuntimeMethod* method) 
{
	EntryU5BU5D_t6E8F51999B5C2D1A5E09B1963CF042E7B5CAA500* V_0 = NULL;
	int32_t V_1 = 0;
	bool V_2 = false;
	int32_t V_3 = 0;
	EqualityComparer_1_t97160852989689D9543E2E1EA7D7196DBEA5AEE4* V_4 = NULL;
	int32_t V_5 = 0;
	{
		EntryU5BU5D_t6E8F51999B5C2D1A5E09B1963CF042E7B5CAA500* L_0 = (EntryU5BU5D_t6E8F51999B5C2D1A5E09B1963CF042E7B5CAA500*)__this->____entries_1;
		V_0 = L_0;
		goto IL_0049;
	}

IL_0049:
	{
		il2cpp_codegen_initobj((&V_2), sizeof(bool));
	}
	{
		V_3 = 0;
		goto IL_008b;
	}

IL_005d:
	{
		EntryU5BU5D_t6E8F51999B5C2D1A5E09B1963CF042E7B5CAA500* L_3 = V_0;
		int32_t L_4 = V_3;
		NullCheck(L_3);
		int32_t L_5 = (int32_t)((L_3)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_4)))->___hashCode_0;
		if ((((int32_t)L_5) < ((int32_t)0)))
		{
			goto IL_0087;
		}
	}
	{
		EqualityComparer_1_t97160852989689D9543E2E1EA7D7196DBEA5AEE4* L_6;
		L_6 = EqualityComparer_1_get_Default_mBB75BC0723DFD7850F43E72E34026DD070CF5932_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 30));
		EntryU5BU5D_t6E8F51999B5C2D1A5E09B1963CF042E7B5CAA500* L_7 = V_0;
		int32_t L_8 = V_3;
		NullCheck(L_7);
		bool L_9 = (bool)((L_7)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_8)))->___value_3;
		bool L_10 = ___0_value;
		NullCheck(L_6);
		bool L_11;
		L_11 = VirtualFuncInvoker2< bool, bool, bool >::Invoke(8, L_6, L_9, L_10);
		if (!L_11)
		{
			goto IL_0087;
		}
	}
	{
		return (bool)1;
	}

IL_0087:
	{
		int32_t L_12 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_008b:
	{
		int32_t L_13 = V_3;
		int32_t L_14 = (int32_t)__this->____count_2;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_005d;
		}
	}
	{
		goto IL_00db;
	}

IL_00db:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_CopyTo_m4E3689D9CDB6B183A42A99057BD45A0337224455_gshared (Dictionary_2_t01224C8DBCCFE276E97D2BF52F4D7B10D3642682* __this, KeyValuePair_2U5BU5D_t00F1189D6659F8334E1D51B328A743FBD809CFB6* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	EntryU5BU5D_t6E8F51999B5C2D1A5E09B1963CF042E7B5CAA500* V_1 = NULL;
	int32_t V_2 = 0;
	{
		KeyValuePair_2U5BU5D_t00F1189D6659F8334E1D51B328A743FBD809CFB6* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)3, NULL);
	}

IL_0009:
	{
		int32_t L_1 = ___1_index;
		KeyValuePair_2U5BU5D_t00F1189D6659F8334E1D51B328A743FBD809CFB6* L_2 = ___0_array;
		NullCheck(L_2);
		if ((!(((uint32_t)L_1) > ((uint32_t)((int32_t)(((RuntimeArray*)L_2)->max_length))))))
		{
			goto IL_0014;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0014:
	{
		KeyValuePair_2U5BU5D_t00F1189D6659F8334E1D51B328A743FBD809CFB6* L_3 = ___0_array;
		NullCheck(L_3);
		int32_t L_4 = ___1_index;
		int32_t L_5;
		L_5 = Dictionary_2_get_Count_mC916574C49D9A72EAB6F28C2C25FDB0614CE1C5E(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 36));
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_3)->max_length)), L_4))) >= ((int32_t)L_5)))
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)5, NULL);
	}

IL_0027:
	{
		int32_t L_6 = (int32_t)__this->____count_2;
		V_0 = L_6;
		EntryU5BU5D_t6E8F51999B5C2D1A5E09B1963CF042E7B5CAA500* L_7 = (EntryU5BU5D_t6E8F51999B5C2D1A5E09B1963CF042E7B5CAA500*)__this->____entries_1;
		V_1 = L_7;
		V_2 = 0;
		goto IL_0075;
	}

IL_0039:
	{
		EntryU5BU5D_t6E8F51999B5C2D1A5E09B1963CF042E7B5CAA500* L_8 = V_1;
		int32_t L_9 = V_2;
		NullCheck(L_8);
		int32_t L_10 = (int32_t)((L_8)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_9)))->___hashCode_0;
		if ((((int32_t)L_10) < ((int32_t)0)))
		{
			goto IL_0071;
		}
	}
	{
		KeyValuePair_2U5BU5D_t00F1189D6659F8334E1D51B328A743FBD809CFB6* L_11 = ___0_array;
		int32_t L_12 = ___1_index;
		int32_t L_13 = L_12;
		___1_index = ((int32_t)il2cpp_codegen_add(L_13, 1));
		EntryU5BU5D_t6E8F51999B5C2D1A5E09B1963CF042E7B5CAA500* L_14 = V_1;
		int32_t L_15 = V_2;
		NullCheck(L_14);
		int32_t L_16 = (int32_t)((L_14)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_15)))->___key_2;
		EntryU5BU5D_t6E8F51999B5C2D1A5E09B1963CF042E7B5CAA500* L_17 = V_1;
		int32_t L_18 = V_2;
		NullCheck(L_17);
		bool L_19 = (bool)((L_17)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_18)))->___value_3;
		KeyValuePair_2_t0EAC8DA2D95957AFA60DD198D013622384C0D213 L_20;
		memset((&L_20), 0, sizeof(L_20));
		KeyValuePair_2__ctor_m593E407EEF9038F9C3E26BBE93DD316684F8BC7E((&L_20), L_16, L_19, il2cpp_rgctx_method(method->klass->rgctx_data, 37));
		NullCheck(L_11);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(L_13), (KeyValuePair_2_t0EAC8DA2D95957AFA60DD198D013622384C0D213)L_20);
	}

IL_0071:
	{
		int32_t L_21 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_21, 1));
	}

IL_0075:
	{
		int32_t L_22 = V_2;
		int32_t L_23 = V_0;
		if ((((int32_t)L_22) < ((int32_t)L_23)))
		{
			goto IL_0039;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t06874F6DC6BF37190C0F4C5F3BB89A8F4D960969 Dictionary_2_GetEnumerator_mF19575B85A328947B27BABD4D104052B8F97FAC7_gshared (Dictionary_2_t01224C8DBCCFE276E97D2BF52F4D7B10D3642682* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t06874F6DC6BF37190C0F4C5F3BB89A8F4D960969 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m2F677A930996556C63EB1D62D1929C1CF70BC4ED((&L_0), __this, 2, il2cpp_rgctx_method(method->klass->rgctx_data, 39));
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m550E8A7B8C25429EBEA96D1DD7A0059CC7CB6CEC_gshared (Dictionary_2_t01224C8DBCCFE276E97D2BF52F4D7B10D3642682* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t06874F6DC6BF37190C0F4C5F3BB89A8F4D960969 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m2F677A930996556C63EB1D62D1929C1CF70BC4ED((&L_0), __this, 2, il2cpp_rgctx_method(method->klass->rgctx_data, 39));
		Enumerator_t06874F6DC6BF37190C0F4C5F3BB89A8F4D960969 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 38), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_GetObjectData_m851F69AFEAA2AC71E6B21B50C7449A9D238049C8_gshared (Dictionary_2_t01224C8DBCCFE276E97D2BF52F4D7B10D3642682* __this, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___0_info, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___1_context, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1);
		s_Il2CppMethodInitialized = true;
	}
	KeyValuePair_2U5BU5D_t00F1189D6659F8334E1D51B328A743FBD809CFB6* V_0 = NULL;
	RuntimeObject* G_B4_0 = NULL;
	String_t* G_B4_1 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B4_2 = NULL;
	RuntimeObject* G_B3_0 = NULL;
	String_t* G_B3_1 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B3_2 = NULL;
	String_t* G_B6_0 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B6_1 = NULL;
	String_t* G_B5_0 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B5_1 = NULL;
	int32_t G_B7_0 = 0;
	String_t* G_B7_1 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B7_2 = NULL;
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_0 = ___0_info;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)4, NULL);
	}

IL_0009:
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_1 = ___0_info;
		int32_t L_2 = (int32_t)__this->____version_5;
		NullCheck(L_1);
		SerializationInfo_AddValue_m9D6ADD10966D1FE8D19050F3A269747C23FE9FC4(L_1, _stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1, L_2, NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_3 = ___0_info;
		RuntimeObject* L_4 = (RuntimeObject*)__this->____comparer_6;
		RuntimeObject* L_5 = L_4;
		if (L_5)
		{
			G_B4_0 = L_5;
			G_B4_1 = _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9;
			G_B4_2 = L_3;
			goto IL_002f;
		}
		G_B3_0 = L_5;
		G_B3_1 = _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9;
		G_B3_2 = L_3;
	}
	{
		EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* L_6;
		L_6 = EqualityComparer_1_get_Default_mF70F6C11A35B420DFA4628EE316B087F2DCB280C_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		G_B4_0 = ((RuntimeObject*)(L_6));
		G_B4_1 = G_B3_1;
		G_B4_2 = G_B3_2;
	}

IL_002f:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 40)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		NullCheck(G_B4_2);
		SerializationInfo_AddValue_m1AD59BBF8C3129142943D3F298ADF09FF123C199(G_B4_2, G_B4_1, (RuntimeObject*)G_B4_0, L_8, NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_9 = ___0_info;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_10 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		if (!L_10)
		{
			G_B6_0 = _stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69;
			G_B6_1 = L_9;
			goto IL_0056;
		}
		G_B5_0 = _stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69;
		G_B5_1 = L_9;
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		NullCheck(L_11);
		G_B7_0 = ((int32_t)(((RuntimeArray*)L_11)->max_length));
		G_B7_1 = G_B5_0;
		G_B7_2 = G_B5_1;
		goto IL_0057;
	}

IL_0056:
	{
		G_B7_0 = 0;
		G_B7_1 = G_B6_0;
		G_B7_2 = G_B6_1;
	}

IL_0057:
	{
		NullCheck(G_B7_2);
		SerializationInfo_AddValue_m9D6ADD10966D1FE8D19050F3A269747C23FE9FC4(G_B7_2, G_B7_1, G_B7_0, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_12 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		if (!L_12)
		{
			goto IL_008e;
		}
	}
	{
		int32_t L_13;
		L_13 = Dictionary_2_get_Count_mC916574C49D9A72EAB6F28C2C25FDB0614CE1C5E(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 36));
		KeyValuePair_2U5BU5D_t00F1189D6659F8334E1D51B328A743FBD809CFB6* L_14 = (KeyValuePair_2U5BU5D_t00F1189D6659F8334E1D51B328A743FBD809CFB6*)(KeyValuePair_2U5BU5D_t00F1189D6659F8334E1D51B328A743FBD809CFB6*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 41), (uint32_t)L_13);
		V_0 = L_14;
		KeyValuePair_2U5BU5D_t00F1189D6659F8334E1D51B328A743FBD809CFB6* L_15 = V_0;
		Dictionary_2_CopyTo_m4E3689D9CDB6B183A42A99057BD45A0337224455(__this, L_15, 0, il2cpp_rgctx_method(method->klass->rgctx_data, 42));
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_16 = ___0_info;
		KeyValuePair_2U5BU5D_t00F1189D6659F8334E1D51B328A743FBD809CFB6* L_17 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 43)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		NullCheck(L_16);
		SerializationInfo_AddValue_m1AD59BBF8C3129142943D3F298ADF09FF123C199(L_16, _stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A, (RuntimeObject*)L_17, L_19, NULL);
	}

IL_008e:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_FindEntry_mE1DD9E6586FB9B0C19DFB7EE7A3A9D8386D5D5D1_gshared (Dictionary_2_t01224C8DBCCFE276E97D2BF52F4D7B10D3642682* __this, int32_t ___0_key, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_1 = NULL;
	EntryU5BU5D_t6E8F51999B5C2D1A5E09B1963CF042E7B5CAA500* V_2 = NULL;
	int32_t V_3 = 0;
	RuntimeObject* V_4 = NULL;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* V_7 = NULL;
	int32_t V_8 = 0;
	{
		goto IL_000e;
	}

IL_000e:
	{
		V_0 = (-1);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		V_1 = L_1;
		EntryU5BU5D_t6E8F51999B5C2D1A5E09B1963CF042E7B5CAA500* L_2 = (EntryU5BU5D_t6E8F51999B5C2D1A5E09B1963CF042E7B5CAA500*)__this->____entries_1;
		V_2 = L_2;
		V_3 = 0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = V_1;
		if (!L_3)
		{
			goto IL_0175;
		}
	}
	{
		RuntimeObject* L_4 = (RuntimeObject*)__this->____comparer_6;
		V_4 = L_4;
		RuntimeObject* L_5 = V_4;
		if (L_5)
		{
			goto IL_0110;
		}
	}
	{
		int32_t L_6;
		L_6 = Int32_GetHashCode_m253D60FF7527A483E91004B7A2366F13E225E295((&___0_key), il2cpp_rgctx_method(method->klass->rgctx_data, 44));
		V_5 = ((int32_t)(L_6&((int32_t)2147483647LL)));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_7 = V_1;
		int32_t L_8 = V_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = V_1;
		NullCheck(L_9);
		NullCheck(L_7);
		int32_t L_10 = ((int32_t)(L_8%((int32_t)(((RuntimeArray*)L_9)->max_length))));
		int32_t L_11 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_11, 1));
		il2cpp_codegen_initobj((&V_6), sizeof(int32_t));
	}

IL_0066:
	{
		int32_t L_13 = V_0;
		EntryU5BU5D_t6E8F51999B5C2D1A5E09B1963CF042E7B5CAA500* L_14 = V_2;
		NullCheck(L_14);
		if ((!(((uint32_t)L_13) < ((uint32_t)((int32_t)(((RuntimeArray*)L_14)->max_length))))))
		{
			goto IL_0175;
		}
	}
	{
		EntryU5BU5D_t6E8F51999B5C2D1A5E09B1963CF042E7B5CAA500* L_15 = V_2;
		int32_t L_16 = V_0;
		NullCheck(L_15);
		int32_t L_17 = (int32_t)((L_15)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_16)))->___hashCode_0;
		int32_t L_18 = V_5;
		if ((!(((uint32_t)L_17) == ((uint32_t)L_18))))
		{
			goto IL_009b;
		}
	}
	{
		EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* L_19;
		L_19 = EqualityComparer_1_get_Default_mF70F6C11A35B420DFA4628EE316B087F2DCB280C_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		EntryU5BU5D_t6E8F51999B5C2D1A5E09B1963CF042E7B5CAA500* L_20 = V_2;
		int32_t L_21 = V_0;
		NullCheck(L_20);
		int32_t L_22 = (int32_t)((L_20)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_21)))->___key_2;
		int32_t L_23 = ___0_key;
		NullCheck(L_19);
		bool L_24;
		L_24 = VirtualFuncInvoker2< bool, int32_t, int32_t >::Invoke(8, L_19, L_22, L_23);
		if (L_24)
		{
			goto IL_0175;
		}
	}

IL_009b:
	{
		EntryU5BU5D_t6E8F51999B5C2D1A5E09B1963CF042E7B5CAA500* L_25 = V_2;
		int32_t L_26 = V_0;
		NullCheck(L_25);
		int32_t L_27 = (int32_t)((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___next_1;
		V_0 = L_27;
		int32_t L_28 = V_3;
		EntryU5BU5D_t6E8F51999B5C2D1A5E09B1963CF042E7B5CAA500* L_29 = V_2;
		NullCheck(L_29);
		if ((((int32_t)L_28) < ((int32_t)((int32_t)(((RuntimeArray*)L_29)->max_length)))))
		{
			goto IL_00b3;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_00b3:
	{
		int32_t L_30 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_30, 1));
		goto IL_0066;
	}

IL_0110:
	{
		RuntimeObject* L_31 = V_4;
		int32_t L_32 = ___0_key;
		NullCheck(L_31);
		int32_t L_33;
		L_33 = InterfaceFuncInvoker1< int32_t, int32_t >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_31, L_32);
		V_8 = ((int32_t)(L_33&((int32_t)2147483647LL)));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_34 = V_1;
		int32_t L_35 = V_8;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_36 = V_1;
		NullCheck(L_36);
		NullCheck(L_34);
		int32_t L_37 = ((int32_t)(L_35%((int32_t)(((RuntimeArray*)L_36)->max_length))));
		int32_t L_38 = (L_34)->GetAt(static_cast<il2cpp_array_size_t>(L_37));
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_38, 1));
	}

IL_012b:
	{
		int32_t L_39 = V_0;
		EntryU5BU5D_t6E8F51999B5C2D1A5E09B1963CF042E7B5CAA500* L_40 = V_2;
		NullCheck(L_40);
		if ((!(((uint32_t)L_39) < ((uint32_t)((int32_t)(((RuntimeArray*)L_40)->max_length))))))
		{
			goto IL_0175;
		}
	}
	{
		EntryU5BU5D_t6E8F51999B5C2D1A5E09B1963CF042E7B5CAA500* L_41 = V_2;
		int32_t L_42 = V_0;
		NullCheck(L_41);
		int32_t L_43 = (int32_t)((L_41)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_42)))->___hashCode_0;
		int32_t L_44 = V_8;
		if ((!(((uint32_t)L_43) == ((uint32_t)L_44))))
		{
			goto IL_0157;
		}
	}
	{
		RuntimeObject* L_45 = V_4;
		EntryU5BU5D_t6E8F51999B5C2D1A5E09B1963CF042E7B5CAA500* L_46 = V_2;
		int32_t L_47 = V_0;
		NullCheck(L_46);
		int32_t L_48 = (int32_t)((L_46)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_47)))->___key_2;
		int32_t L_49 = ___0_key;
		NullCheck(L_45);
		bool L_50;
		L_50 = InterfaceFuncInvoker2< bool, int32_t, int32_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_45, L_48, L_49);
		if (L_50)
		{
			goto IL_0175;
		}
	}

IL_0157:
	{
		EntryU5BU5D_t6E8F51999B5C2D1A5E09B1963CF042E7B5CAA500* L_51 = V_2;
		int32_t L_52 = V_0;
		NullCheck(L_51);
		int32_t L_53 = (int32_t)((L_51)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_52)))->___next_1;
		V_0 = L_53;
		int32_t L_54 = V_3;
		EntryU5BU5D_t6E8F51999B5C2D1A5E09B1963CF042E7B5CAA500* L_55 = V_2;
		NullCheck(L_55);
		if ((((int32_t)L_54) < ((int32_t)((int32_t)(((RuntimeArray*)L_55)->max_length)))))
		{
			goto IL_016f;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_016f:
	{
		int32_t L_56 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_56, 1));
		goto IL_012b;
	}

IL_0175:
	{
		int32_t L_57 = V_0;
		return L_57;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_Initialize_m94BC29643E386903C4BD1E14BFA63BE82988EE68_gshared (Dictionary_2_t01224C8DBCCFE276E97D2BF52F4D7B10D3642682* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___0_capacity;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = HashHelpers_GetPrime_m5B7AE10D5E76267579296C8F2CB8464AC2DE8472(L_0, NULL);
		V_0 = L_1;
		__this->____freeList_3 = (-1);
		int32_t L_2 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_2);
		__this->____buckets_0 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets_0), (void*)L_3);
		int32_t L_4 = V_0;
		EntryU5BU5D_t6E8F51999B5C2D1A5E09B1963CF042E7B5CAA500* L_5 = (EntryU5BU5D_t6E8F51999B5C2D1A5E09B1963CF042E7B5CAA500*)(EntryU5BU5D_t6E8F51999B5C2D1A5E09B1963CF042E7B5CAA500*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 48), (uint32_t)L_4);
		__this->____entries_1 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____entries_1), (void*)L_5);
		int32_t L_6 = V_0;
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryInsert_mA1983D94216DE51D98CCD30629282266CCAFE97E_gshared (Dictionary_2_t01224C8DBCCFE276E97D2BF52F4D7B10D3642682* __this, int32_t ___0_key, bool ___1_value, uint8_t ___2_behavior, const RuntimeMethod* method) 
{
	EntryU5BU5D_t6E8F51999B5C2D1A5E09B1963CF042E7B5CAA500* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t* V_4 = NULL;
	int32_t V_5 = 0;
	bool V_6 = false;
	bool V_7 = false;
	int32_t V_8 = 0;
	int32_t* V_9 = NULL;
	Entry_t740F919D5BA6D1FE201C58777E6EB966B35EE2EE* V_10 = NULL;
	int32_t V_11 = 0;
	EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* V_12 = NULL;
	int32_t V_13 = 0;
	int32_t G_B7_0 = 0;
	int32_t* G_B51_0 = NULL;
	{
		goto IL_000e;
	}

IL_000e:
	{
		int32_t L_1 = (int32_t)__this->____version_5;
		__this->____version_5 = ((int32_t)il2cpp_codegen_add(L_1, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		if (L_2)
		{
			goto IL_002c;
		}
	}
	{
		int32_t L_3;
		L_3 = Dictionary_2_Initialize_m94BC29643E386903C4BD1E14BFA63BE82988EE68(__this, 0, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
	}

IL_002c:
	{
		EntryU5BU5D_t6E8F51999B5C2D1A5E09B1963CF042E7B5CAA500* L_4 = (EntryU5BU5D_t6E8F51999B5C2D1A5E09B1963CF042E7B5CAA500*)__this->____entries_1;
		V_0 = L_4;
		RuntimeObject* L_5 = (RuntimeObject*)__this->____comparer_6;
		V_1 = L_5;
		RuntimeObject* L_6 = V_1;
		if (!L_6)
		{
			goto IL_0046;
		}
	}
	{
		RuntimeObject* L_7 = V_1;
		int32_t L_8 = ___0_key;
		NullCheck(L_7);
		int32_t L_9;
		L_9 = InterfaceFuncInvoker1< int32_t, int32_t >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_7, L_8);
		G_B7_0 = L_9;
		goto IL_0053;
	}

IL_0046:
	{
		int32_t L_10;
		L_10 = Int32_GetHashCode_m253D60FF7527A483E91004B7A2366F13E225E295((&___0_key), il2cpp_rgctx_method(method->klass->rgctx_data, 44));
		G_B7_0 = L_10;
	}

IL_0053:
	{
		V_2 = ((int32_t)(G_B7_0&((int32_t)2147483647LL)));
		V_3 = 0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		int32_t L_12 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_13 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		NullCheck(L_13);
		NullCheck(L_11);
		V_4 = ((L_11)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_12%((int32_t)(((RuntimeArray*)L_13)->max_length)))))));
		int32_t* L_14 = V_4;
		int32_t L_15 = *((int32_t*)L_14);
		V_5 = ((int32_t)il2cpp_codegen_subtract(L_15, 1));
		RuntimeObject* L_16 = V_1;
		if (L_16)
		{
			goto IL_0187;
		}
	}
	{
		il2cpp_codegen_initobj((&V_11), sizeof(int32_t));
	}

IL_0091:
	{
		int32_t L_18 = V_5;
		EntryU5BU5D_t6E8F51999B5C2D1A5E09B1963CF042E7B5CAA500* L_19 = V_0;
		NullCheck(L_19);
		if ((!(((uint32_t)L_18) < ((uint32_t)((int32_t)(((RuntimeArray*)L_19)->max_length))))))
		{
			goto IL_01f9;
		}
	}
	{
		EntryU5BU5D_t6E8F51999B5C2D1A5E09B1963CF042E7B5CAA500* L_20 = V_0;
		int32_t L_21 = V_5;
		NullCheck(L_20);
		int32_t L_22 = (int32_t)((L_20)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_21)))->___hashCode_0;
		int32_t L_23 = V_2;
		if ((!(((uint32_t)L_22) == ((uint32_t)L_23))))
		{
			goto IL_00ea;
		}
	}
	{
		EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* L_24;
		L_24 = EqualityComparer_1_get_Default_mF70F6C11A35B420DFA4628EE316B087F2DCB280C_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		EntryU5BU5D_t6E8F51999B5C2D1A5E09B1963CF042E7B5CAA500* L_25 = V_0;
		int32_t L_26 = V_5;
		NullCheck(L_25);
		int32_t L_27 = (int32_t)((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___key_2;
		int32_t L_28 = ___0_key;
		NullCheck(L_24);
		bool L_29;
		L_29 = VirtualFuncInvoker2< bool, int32_t, int32_t >::Invoke(8, L_24, L_27, L_28);
		if (!L_29)
		{
			goto IL_00ea;
		}
	}
	{
		uint8_t L_30 = ___2_behavior;
		if ((!(((uint32_t)L_30) == ((uint32_t)1))))
		{
			goto IL_00d9;
		}
	}
	{
		EntryU5BU5D_t6E8F51999B5C2D1A5E09B1963CF042E7B5CAA500* L_31 = V_0;
		int32_t L_32 = V_5;
		NullCheck(L_31);
		bool L_33 = ___1_value;
		((L_31)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_32)))->___value_3 = L_33;
		return (bool)1;
	}

IL_00d9:
	{
		uint8_t L_34 = ___2_behavior;
		if ((!(((uint32_t)L_34) == ((uint32_t)2))))
		{
			goto IL_00e8;
		}
	}
	{
		int32_t L_35 = ___0_key;
		int32_t L_36 = L_35;
		RuntimeObject* L_37 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14), &L_36);
		ThrowHelper_ThrowAddingDuplicateWithKeyArgumentException_m013C856C16A63018719A6096727CB43E1918CDE5(L_37, NULL);
	}

IL_00e8:
	{
		return (bool)0;
	}

IL_00ea:
	{
		EntryU5BU5D_t6E8F51999B5C2D1A5E09B1963CF042E7B5CAA500* L_38 = V_0;
		int32_t L_39 = V_5;
		NullCheck(L_38);
		int32_t L_40 = (int32_t)((L_38)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_39)))->___next_1;
		V_5 = L_40;
		int32_t L_41 = V_3;
		EntryU5BU5D_t6E8F51999B5C2D1A5E09B1963CF042E7B5CAA500* L_42 = V_0;
		NullCheck(L_42);
		if ((((int32_t)L_41) < ((int32_t)((int32_t)(((RuntimeArray*)L_42)->max_length)))))
		{
			goto IL_0104;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_0104:
	{
		int32_t L_43 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_43, 1));
		goto IL_0091;
	}

IL_0187:
	{
		int32_t L_44 = V_5;
		EntryU5BU5D_t6E8F51999B5C2D1A5E09B1963CF042E7B5CAA500* L_45 = V_0;
		NullCheck(L_45);
		if ((!(((uint32_t)L_44) < ((uint32_t)((int32_t)(((RuntimeArray*)L_45)->max_length))))))
		{
			goto IL_01f9;
		}
	}
	{
		EntryU5BU5D_t6E8F51999B5C2D1A5E09B1963CF042E7B5CAA500* L_46 = V_0;
		int32_t L_47 = V_5;
		NullCheck(L_46);
		int32_t L_48 = (int32_t)((L_46)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_47)))->___hashCode_0;
		int32_t L_49 = V_2;
		if ((!(((uint32_t)L_48) == ((uint32_t)L_49))))
		{
			goto IL_01d9;
		}
	}
	{
		RuntimeObject* L_50 = V_1;
		EntryU5BU5D_t6E8F51999B5C2D1A5E09B1963CF042E7B5CAA500* L_51 = V_0;
		int32_t L_52 = V_5;
		NullCheck(L_51);
		int32_t L_53 = (int32_t)((L_51)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_52)))->___key_2;
		int32_t L_54 = ___0_key;
		NullCheck(L_50);
		bool L_55;
		L_55 = InterfaceFuncInvoker2< bool, int32_t, int32_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_50, L_53, L_54);
		if (!L_55)
		{
			goto IL_01d9;
		}
	}
	{
		uint8_t L_56 = ___2_behavior;
		if ((!(((uint32_t)L_56) == ((uint32_t)1))))
		{
			goto IL_01c8;
		}
	}
	{
		EntryU5BU5D_t6E8F51999B5C2D1A5E09B1963CF042E7B5CAA500* L_57 = V_0;
		int32_t L_58 = V_5;
		NullCheck(L_57);
		bool L_59 = ___1_value;
		((L_57)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_58)))->___value_3 = L_59;
		return (bool)1;
	}

IL_01c8:
	{
		uint8_t L_60 = ___2_behavior;
		if ((!(((uint32_t)L_60) == ((uint32_t)2))))
		{
			goto IL_01d7;
		}
	}
	{
		int32_t L_61 = ___0_key;
		int32_t L_62 = L_61;
		RuntimeObject* L_63 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14), &L_62);
		ThrowHelper_ThrowAddingDuplicateWithKeyArgumentException_m013C856C16A63018719A6096727CB43E1918CDE5(L_63, NULL);
	}

IL_01d7:
	{
		return (bool)0;
	}

IL_01d9:
	{
		EntryU5BU5D_t6E8F51999B5C2D1A5E09B1963CF042E7B5CAA500* L_64 = V_0;
		int32_t L_65 = V_5;
		NullCheck(L_64);
		int32_t L_66 = (int32_t)((L_64)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_65)))->___next_1;
		V_5 = L_66;
		int32_t L_67 = V_3;
		EntryU5BU5D_t6E8F51999B5C2D1A5E09B1963CF042E7B5CAA500* L_68 = V_0;
		NullCheck(L_68);
		if ((((int32_t)L_67) < ((int32_t)((int32_t)(((RuntimeArray*)L_68)->max_length)))))
		{
			goto IL_01f3;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_01f3:
	{
		int32_t L_69 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_69, 1));
		goto IL_0187;
	}

IL_01f9:
	{
		V_6 = (bool)0;
		V_7 = (bool)0;
		int32_t L_70 = (int32_t)__this->____freeCount_4;
		if ((((int32_t)L_70) <= ((int32_t)0)))
		{
			goto IL_0223;
		}
	}
	{
		int32_t L_71 = (int32_t)__this->____freeList_3;
		V_8 = L_71;
		V_7 = (bool)1;
		int32_t L_72 = (int32_t)__this->____freeCount_4;
		__this->____freeCount_4 = ((int32_t)il2cpp_codegen_subtract(L_72, 1));
		goto IL_0250;
	}

IL_0223:
	{
		int32_t L_73 = (int32_t)__this->____count_2;
		V_13 = L_73;
		int32_t L_74 = V_13;
		EntryU5BU5D_t6E8F51999B5C2D1A5E09B1963CF042E7B5CAA500* L_75 = V_0;
		NullCheck(L_75);
		if ((!(((uint32_t)L_74) == ((uint32_t)((int32_t)(((RuntimeArray*)L_75)->max_length))))))
		{
			goto IL_023b;
		}
	}
	{
		Dictionary_2_Resize_m42FE4F09323494303E7B94C675C478CDCD657809(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 49));
		V_6 = (bool)1;
	}

IL_023b:
	{
		int32_t L_76 = V_13;
		V_8 = L_76;
		int32_t L_77 = V_13;
		__this->____count_2 = ((int32_t)il2cpp_codegen_add(L_77, 1));
		EntryU5BU5D_t6E8F51999B5C2D1A5E09B1963CF042E7B5CAA500* L_78 = (EntryU5BU5D_t6E8F51999B5C2D1A5E09B1963CF042E7B5CAA500*)__this->____entries_1;
		V_0 = L_78;
	}

IL_0250:
	{
		bool L_79 = V_6;
		if (L_79)
		{
			goto IL_0258;
		}
	}
	{
		int32_t* L_80 = V_4;
		G_B51_0 = L_80;
		goto IL_026d;
	}

IL_0258:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_81 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		int32_t L_82 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_83 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		NullCheck(L_83);
		NullCheck(L_81);
		G_B51_0 = ((L_81)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_82%((int32_t)(((RuntimeArray*)L_83)->max_length)))))));
	}

IL_026d:
	{
		V_9 = G_B51_0;
		EntryU5BU5D_t6E8F51999B5C2D1A5E09B1963CF042E7B5CAA500* L_84 = V_0;
		int32_t L_85 = V_8;
		NullCheck(L_84);
		V_10 = ((L_84)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_85)));
		bool L_86 = V_7;
		if (!L_86)
		{
			goto IL_028a;
		}
	}
	{
		Entry_t740F919D5BA6D1FE201C58777E6EB966B35EE2EE* L_87 = V_10;
		int32_t L_88 = (int32_t)L_87->___next_1;
		__this->____freeList_3 = L_88;
	}

IL_028a:
	{
		Entry_t740F919D5BA6D1FE201C58777E6EB966B35EE2EE* L_89 = V_10;
		int32_t L_90 = V_2;
		L_89->___hashCode_0 = L_90;
		Entry_t740F919D5BA6D1FE201C58777E6EB966B35EE2EE* L_91 = V_10;
		int32_t* L_92 = V_9;
		int32_t L_93 = *((int32_t*)L_92);
		L_91->___next_1 = ((int32_t)il2cpp_codegen_subtract(L_93, 1));
		Entry_t740F919D5BA6D1FE201C58777E6EB966B35EE2EE* L_94 = V_10;
		int32_t L_95 = ___0_key;
		L_94->___key_2 = L_95;
		Entry_t740F919D5BA6D1FE201C58777E6EB966B35EE2EE* L_96 = V_10;
		bool L_97 = ___1_value;
		L_96->___value_3 = L_97;
		int32_t* L_98 = V_9;
		int32_t L_99 = V_8;
		*((int32_t*)L_98) = (int32_t)((int32_t)il2cpp_codegen_add(L_99, 1));
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_OnDeserialization_m1838CBCE52011AAC0D92A0DED3DC325ABC7EDCC2_gshared (Dictionary_2_t01224C8DBCCFE276E97D2BF52F4D7B10D3642682* __this, RuntimeObject* ___0_sender, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConditionalWeakTable_2_Remove_mEA61545EA43662F3718895F4E435A1F3EFB9756E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConditionalWeakTable_2_TryGetValue_m8AB467BA44D1FF9EBDB9735CED88B0D67AC6403F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1);
		s_Il2CppMethodInitialized = true;
	}
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	KeyValuePair_2U5BU5D_t00F1189D6659F8334E1D51B328A743FBD809CFB6* V_3 = NULL;
	int32_t V_4 = 0;
	{
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* L_0;
		L_0 = HashHelpers_get_SerializationInfoTable_m8C17D5483B39B68897AEFFD14A9E139AF858222F(NULL);
		NullCheck(L_0);
		bool L_1;
		L_1 = ConditionalWeakTable_2_TryGetValue_m8AB467BA44D1FF9EBDB9735CED88B0D67AC6403F(L_0, (RuntimeObject*)__this, (&V_0), ConditionalWeakTable_2_TryGetValue_m8AB467BA44D1FF9EBDB9735CED88B0D67AC6403F_RuntimeMethod_var);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_2 = V_0;
		if (L_2)
		{
			goto IL_0012;
		}
	}
	{
		return;
	}

IL_0012:
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_3 = V_0;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = SerializationInfo_GetInt32_m7731402825C7FC8D0673F7610D555615F95E4FB5(L_3, _stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1, NULL);
		V_1 = L_4;
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_5 = V_0;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = SerializationInfo_GetInt32_m7731402825C7FC8D0673F7610D555615F95E4FB5(L_5, _stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69, NULL);
		V_2 = L_6;
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_7 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 40)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		NullCheck(L_7);
		RuntimeObject* L_10;
		L_10 = SerializationInfo_GetValue_mE6091C2E906E113455D05E734C86F43B8E1D1034(L_7, _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9, L_9, NULL);
		__this->____comparer_6 = ((RuntimeObject*)Castclass((RuntimeObject*)L_10, il2cpp_rgctx_data(method->klass->rgctx_data, 1)));
		Il2CppCodeGenWriteBarrier((void**)(&__this->____comparer_6), (void*)((RuntimeObject*)Castclass((RuntimeObject*)L_10, il2cpp_rgctx_data(method->klass->rgctx_data, 1))));
		int32_t L_11 = V_2;
		if (!L_11)
		{
			goto IL_00c9;
		}
	}
	{
		int32_t L_12 = V_2;
		int32_t L_13;
		L_13 = Dictionary_2_Initialize_m94BC29643E386903C4BD1E14BFA63BE82988EE68(__this, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_14 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_15 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 43)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_16;
		L_16 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_15, NULL);
		NullCheck(L_14);
		RuntimeObject* L_17;
		L_17 = SerializationInfo_GetValue_mE6091C2E906E113455D05E734C86F43B8E1D1034(L_14, _stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A, L_16, NULL);
		V_3 = ((KeyValuePair_2U5BU5D_t00F1189D6659F8334E1D51B328A743FBD809CFB6*)Castclass((RuntimeObject*)L_17, il2cpp_rgctx_data(method->klass->rgctx_data, 35)));
		KeyValuePair_2U5BU5D_t00F1189D6659F8334E1D51B328A743FBD809CFB6* L_18 = V_3;
		if (L_18)
		{
			goto IL_007a;
		}
	}
	{
		ThrowHelper_ThrowSerializationException_m03BE2B48CD3617C32FBCEE16030F7C5563E04E16((int32_t)((int32_t)16), NULL);
	}

IL_007a:
	{
		V_4 = 0;
		goto IL_00c0;
	}

IL_007f:
	{
		KeyValuePair_2U5BU5D_t00F1189D6659F8334E1D51B328A743FBD809CFB6* L_19 = V_3;
		int32_t L_20 = V_4;
		NullCheck(L_19);
		int32_t L_21;
		L_21 = KeyValuePair_2_get_Key_m671CD723515F42017EA4D2DB01691D13288970A9_inline(((L_19)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_20))), il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		goto IL_009a;
	}

IL_009a:
	{
		KeyValuePair_2U5BU5D_t00F1189D6659F8334E1D51B328A743FBD809CFB6* L_22 = V_3;
		int32_t L_23 = V_4;
		NullCheck(L_22);
		int32_t L_24;
		L_24 = KeyValuePair_2_get_Key_m671CD723515F42017EA4D2DB01691D13288970A9_inline(((L_22)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_23))), il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		KeyValuePair_2U5BU5D_t00F1189D6659F8334E1D51B328A743FBD809CFB6* L_25 = V_3;
		int32_t L_26 = V_4;
		NullCheck(L_25);
		bool L_27;
		L_27 = KeyValuePair_2_get_Value_m00849F341D41ABD55D72D0701342145724AC3A9F_inline(((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26))), il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		Dictionary_2_Add_m15404AE1ED9C4C7CF89DAEAB8C5F3280C7D115EB(__this, L_24, L_27, il2cpp_rgctx_method(method->klass->rgctx_data, 16));
		int32_t L_28 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_28, 1));
	}

IL_00c0:
	{
		int32_t L_29 = V_4;
		KeyValuePair_2U5BU5D_t00F1189D6659F8334E1D51B328A743FBD809CFB6* L_30 = V_3;
		NullCheck(L_30);
		if ((((int32_t)L_29) < ((int32_t)((int32_t)(((RuntimeArray*)L_30)->max_length)))))
		{
			goto IL_007f;
		}
	}
	{
		goto IL_00d0;
	}

IL_00c9:
	{
		__this->____buckets_0 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets_0), (void*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL);
	}

IL_00d0:
	{
		int32_t L_31 = V_1;
		__this->____version_5 = L_31;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* L_32;
		L_32 = HashHelpers_get_SerializationInfoTable_m8C17D5483B39B68897AEFFD14A9E139AF858222F(NULL);
		NullCheck(L_32);
		bool L_33;
		L_33 = ConditionalWeakTable_2_Remove_mEA61545EA43662F3718895F4E435A1F3EFB9756E(L_32, (RuntimeObject*)__this, ConditionalWeakTable_2_Remove_mEA61545EA43662F3718895F4E435A1F3EFB9756E_RuntimeMethod_var);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_m42FE4F09323494303E7B94C675C478CDCD657809_gshared (Dictionary_2_t01224C8DBCCFE276E97D2BF52F4D7B10D3642682* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = (int32_t)__this->____count_2;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = HashHelpers_ExpandPrime_m9A35EC171AA0EA16F7C9F71EE6FAD5A82565ADB9(L_0, NULL);
		Dictionary_2_Resize_m8D3990FBC5AE9011BF34BCC6E1CC7C4AF00A84E4(__this, L_1, (bool)0, il2cpp_rgctx_method(method->klass->rgctx_data, 51));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_m8D3990FBC5AE9011BF34BCC6E1CC7C4AF00A84E4_gshared (Dictionary_2_t01224C8DBCCFE276E97D2BF52F4D7B10D3642682* __this, int32_t ___0_newSize, bool ___1_forceNewHashCodes, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_0 = NULL;
	EntryU5BU5D_t6E8F51999B5C2D1A5E09B1963CF042E7B5CAA500* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	{
		int32_t L_0 = ___0_newSize;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_0);
		V_0 = L_1;
		int32_t L_2 = ___0_newSize;
		EntryU5BU5D_t6E8F51999B5C2D1A5E09B1963CF042E7B5CAA500* L_3 = (EntryU5BU5D_t6E8F51999B5C2D1A5E09B1963CF042E7B5CAA500*)(EntryU5BU5D_t6E8F51999B5C2D1A5E09B1963CF042E7B5CAA500*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 48), (uint32_t)L_2);
		V_1 = L_3;
		int32_t L_4 = (int32_t)__this->____count_2;
		V_2 = L_4;
		EntryU5BU5D_t6E8F51999B5C2D1A5E09B1963CF042E7B5CAA500* L_5 = (EntryU5BU5D_t6E8F51999B5C2D1A5E09B1963CF042E7B5CAA500*)__this->____entries_1;
		EntryU5BU5D_t6E8F51999B5C2D1A5E09B1963CF042E7B5CAA500* L_6 = V_1;
		int32_t L_7 = V_2;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_5, 0, (RuntimeArray*)L_6, 0, L_7, NULL);
		il2cpp_codegen_initobj((&V_3), sizeof(int32_t));
		int32_t L_8 = V_3;
		bool L_9 = ___1_forceNewHashCodes;
		if (!((int32_t)((int32_t)false&(int32_t)L_9)))
		{
			goto IL_0084;
		}
	}
	{
		V_4 = 0;
		goto IL_007f;
	}

IL_003e:
	{
		EntryU5BU5D_t6E8F51999B5C2D1A5E09B1963CF042E7B5CAA500* L_10 = V_1;
		int32_t L_11 = V_4;
		NullCheck(L_10);
		int32_t L_12 = (int32_t)((L_10)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_11)))->___hashCode_0;
		if ((((int32_t)L_12) < ((int32_t)0)))
		{
			goto IL_0079;
		}
	}
	{
		EntryU5BU5D_t6E8F51999B5C2D1A5E09B1963CF042E7B5CAA500* L_13 = V_1;
		int32_t L_14 = V_4;
		NullCheck(L_13);
		EntryU5BU5D_t6E8F51999B5C2D1A5E09B1963CF042E7B5CAA500* L_15 = V_1;
		int32_t L_16 = V_4;
		NullCheck(L_15);
		int32_t* L_17 = (int32_t*)(&((L_15)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_16)))->___key_2);
		int32_t L_18;
		L_18 = Int32_GetHashCode_m253D60FF7527A483E91004B7A2366F13E225E295(L_17, il2cpp_rgctx_method(method->klass->rgctx_data, 44));
		((L_13)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_14)))->___hashCode_0 = ((int32_t)(L_18&((int32_t)2147483647LL)));
	}

IL_0079:
	{
		int32_t L_19 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_19, 1));
	}

IL_007f:
	{
		int32_t L_20 = V_4;
		int32_t L_21 = V_2;
		if ((((int32_t)L_20) < ((int32_t)L_21)))
		{
			goto IL_003e;
		}
	}

IL_0084:
	{
		V_5 = 0;
		goto IL_00cb;
	}

IL_0089:
	{
		EntryU5BU5D_t6E8F51999B5C2D1A5E09B1963CF042E7B5CAA500* L_22 = V_1;
		int32_t L_23 = V_5;
		NullCheck(L_22);
		int32_t L_24 = (int32_t)((L_22)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_23)))->___hashCode_0;
		if ((((int32_t)L_24) < ((int32_t)0)))
		{
			goto IL_00c5;
		}
	}
	{
		EntryU5BU5D_t6E8F51999B5C2D1A5E09B1963CF042E7B5CAA500* L_25 = V_1;
		int32_t L_26 = V_5;
		NullCheck(L_25);
		int32_t L_27 = (int32_t)((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___hashCode_0;
		int32_t L_28 = ___0_newSize;
		V_6 = ((int32_t)(L_27%L_28));
		EntryU5BU5D_t6E8F51999B5C2D1A5E09B1963CF042E7B5CAA500* L_29 = V_1;
		int32_t L_30 = V_5;
		NullCheck(L_29);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_31 = V_0;
		int32_t L_32 = V_6;
		NullCheck(L_31);
		int32_t L_33 = L_32;
		int32_t L_34 = (L_31)->GetAt(static_cast<il2cpp_array_size_t>(L_33));
		((L_29)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_30)))->___next_1 = ((int32_t)il2cpp_codegen_subtract(L_34, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_35 = V_0;
		int32_t L_36 = V_6;
		int32_t L_37 = V_5;
		NullCheck(L_35);
		(L_35)->SetAt(static_cast<il2cpp_array_size_t>(L_36), (int32_t)((int32_t)il2cpp_codegen_add(L_37, 1)));
	}

IL_00c5:
	{
		int32_t L_38 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_38, 1));
	}

IL_00cb:
	{
		int32_t L_39 = V_5;
		int32_t L_40 = V_2;
		if ((((int32_t)L_39) < ((int32_t)L_40)))
		{
			goto IL_0089;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_41 = V_0;
		__this->____buckets_0 = L_41;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets_0), (void*)L_41);
		EntryU5BU5D_t6E8F51999B5C2D1A5E09B1963CF042E7B5CAA500* L_42 = V_1;
		__this->____entries_1 = L_42;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____entries_1), (void*)L_42);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_m516AA9DF9B695BC792DA56C301B4B069DE8E8F9E_gshared (Dictionary_2_t01224C8DBCCFE276E97D2BF52F4D7B10D3642682* __this, int32_t ___0_key, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	Entry_t740F919D5BA6D1FE201C58777E6EB966B35EE2EE* V_4 = NULL;
	RuntimeObject* G_B5_0 = NULL;
	RuntimeObject* G_B4_0 = NULL;
	int32_t G_B6_0 = 0;
	RuntimeObject* G_B10_0 = NULL;
	RuntimeObject* G_B9_0 = NULL;
	bool G_B11_0 = false;
	{
		goto IL_000e;
	}

IL_000e:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		if (!L_1)
		{
			goto IL_0149;
		}
	}
	{
		RuntimeObject* L_2 = (RuntimeObject*)__this->____comparer_6;
		RuntimeObject* L_3 = L_2;
		if (L_3)
		{
			G_B5_0 = L_3;
			goto IL_0032;
		}
		G_B4_0 = L_3;
	}
	{
		int32_t L_4;
		L_4 = Int32_GetHashCode_m253D60FF7527A483E91004B7A2366F13E225E295((&___0_key), il2cpp_rgctx_method(method->klass->rgctx_data, 44));
		G_B6_0 = L_4;
		goto IL_0038;
	}

IL_0032:
	{
		int32_t L_5 = ___0_key;
		NullCheck(G_B5_0);
		int32_t L_6;
		L_6 = InterfaceFuncInvoker1< int32_t, int32_t >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 1), G_B5_0, L_5);
		G_B6_0 = L_6;
	}

IL_0038:
	{
		V_0 = ((int32_t)(G_B6_0&((int32_t)2147483647LL)));
		int32_t L_7 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_8 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		NullCheck(L_8);
		V_1 = ((int32_t)(L_7%((int32_t)(((RuntimeArray*)L_8)->max_length))));
		V_2 = (-1);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		int32_t L_10 = V_1;
		NullCheck(L_9);
		int32_t L_11 = L_10;
		int32_t L_12 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		V_3 = ((int32_t)il2cpp_codegen_subtract(L_12, 1));
		goto IL_0142;
	}

IL_005c:
	{
		EntryU5BU5D_t6E8F51999B5C2D1A5E09B1963CF042E7B5CAA500* L_13 = (EntryU5BU5D_t6E8F51999B5C2D1A5E09B1963CF042E7B5CAA500*)__this->____entries_1;
		int32_t L_14 = V_3;
		NullCheck(L_13);
		V_4 = ((L_13)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_14)));
		Entry_t740F919D5BA6D1FE201C58777E6EB966B35EE2EE* L_15 = V_4;
		int32_t L_16 = (int32_t)L_15->___hashCode_0;
		int32_t L_17 = V_0;
		if ((!(((uint32_t)L_16) == ((uint32_t)L_17))))
		{
			goto IL_0138;
		}
	}
	{
		RuntimeObject* L_18 = (RuntimeObject*)__this->____comparer_6;
		RuntimeObject* L_19 = L_18;
		if (L_19)
		{
			G_B10_0 = L_19;
			goto IL_0095;
		}
		G_B9_0 = L_19;
	}
	{
		EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* L_20;
		L_20 = EqualityComparer_1_get_Default_mF70F6C11A35B420DFA4628EE316B087F2DCB280C_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		Entry_t740F919D5BA6D1FE201C58777E6EB966B35EE2EE* L_21 = V_4;
		int32_t L_22 = (int32_t)L_21->___key_2;
		int32_t L_23 = ___0_key;
		NullCheck(L_20);
		bool L_24;
		L_24 = VirtualFuncInvoker2< bool, int32_t, int32_t >::Invoke(8, L_20, L_22, L_23);
		G_B11_0 = L_24;
		goto IL_00a2;
	}

IL_0095:
	{
		Entry_t740F919D5BA6D1FE201C58777E6EB966B35EE2EE* L_25 = V_4;
		int32_t L_26 = (int32_t)L_25->___key_2;
		int32_t L_27 = ___0_key;
		NullCheck(G_B10_0);
		bool L_28;
		L_28 = InterfaceFuncInvoker2< bool, int32_t, int32_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 1), G_B10_0, L_26, L_27);
		G_B11_0 = L_28;
	}

IL_00a2:
	{
		if (!G_B11_0)
		{
			goto IL_0138;
		}
	}
	{
		int32_t L_29 = V_2;
		if ((((int32_t)L_29) >= ((int32_t)0)))
		{
			goto IL_00be;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_30 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		int32_t L_31 = V_1;
		Entry_t740F919D5BA6D1FE201C58777E6EB966B35EE2EE* L_32 = V_4;
		int32_t L_33 = (int32_t)L_32->___next_1;
		NullCheck(L_30);
		(L_30)->SetAt(static_cast<il2cpp_array_size_t>(L_31), (int32_t)((int32_t)il2cpp_codegen_add(L_33, 1)));
		goto IL_00d6;
	}

IL_00be:
	{
		EntryU5BU5D_t6E8F51999B5C2D1A5E09B1963CF042E7B5CAA500* L_34 = (EntryU5BU5D_t6E8F51999B5C2D1A5E09B1963CF042E7B5CAA500*)__this->____entries_1;
		int32_t L_35 = V_2;
		NullCheck(L_34);
		Entry_t740F919D5BA6D1FE201C58777E6EB966B35EE2EE* L_36 = V_4;
		int32_t L_37 = (int32_t)L_36->___next_1;
		((L_34)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_35)))->___next_1 = L_37;
	}

IL_00d6:
	{
		Entry_t740F919D5BA6D1FE201C58777E6EB966B35EE2EE* L_38 = V_4;
		L_38->___hashCode_0 = (-1);
		Entry_t740F919D5BA6D1FE201C58777E6EB966B35EE2EE* L_39 = V_4;
		int32_t L_40 = (int32_t)__this->____freeList_3;
		L_39->___next_1 = L_40;
		goto IL_00ff;
	}

IL_00ff:
	{
		goto IL_0113;
	}

IL_0113:
	{
		int32_t L_41 = V_3;
		__this->____freeList_3 = L_41;
		int32_t L_42 = (int32_t)__this->____freeCount_4;
		__this->____freeCount_4 = ((int32_t)il2cpp_codegen_add(L_42, 1));
		int32_t L_43 = (int32_t)__this->____version_5;
		__this->____version_5 = ((int32_t)il2cpp_codegen_add(L_43, 1));
		return (bool)1;
	}

IL_0138:
	{
		int32_t L_44 = V_3;
		V_2 = L_44;
		Entry_t740F919D5BA6D1FE201C58777E6EB966B35EE2EE* L_45 = V_4;
		int32_t L_46 = (int32_t)L_45->___next_1;
		V_3 = L_46;
	}

IL_0142:
	{
		int32_t L_47 = V_3;
		if ((((int32_t)L_47) >= ((int32_t)0)))
		{
			goto IL_005c;
		}
	}

IL_0149:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_mB76129E352C910CA78BB17FF72AA4864B1A385CF_gshared (Dictionary_2_t01224C8DBCCFE276E97D2BF52F4D7B10D3642682* __this, int32_t ___0_key, bool* ___1_value, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___0_key;
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_mE1DD9E6586FB9B0C19DFB7EE7A3A9D8386D5D5D1(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 28));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0025;
		}
	}
	{
		bool* L_3 = ___1_value;
		EntryU5BU5D_t6E8F51999B5C2D1A5E09B1963CF042E7B5CAA500* L_4 = (EntryU5BU5D_t6E8F51999B5C2D1A5E09B1963CF042E7B5CAA500*)__this->____entries_1;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		bool L_6 = (bool)((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)))->___value_3;
		*(bool*)L_3 = L_6;
		return (bool)1;
	}

IL_0025:
	{
		bool* L_7 = ___1_value;
		il2cpp_codegen_initobj(L_7, sizeof(bool));
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryAdd_m6F6DB11A61412ED7F25E26A206C82AC9AA051756_gshared (Dictionary_2_t01224C8DBCCFE276E97D2BF52F4D7B10D3642682* __this, int32_t ___0_key, bool ___1_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_key;
		bool L_1 = ___1_value;
		bool L_2;
		L_2 = Dictionary_2_TryInsert_mA1983D94216DE51D98CCD30629282266CCAFE97E(__this, L_0, L_1, (uint8_t)0, il2cpp_rgctx_method(method->klass->rgctx_data, 29));
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m61FB537A534F56E61FCCFA872BC66EE438782242_gshared (Dictionary_2_t01224C8DBCCFE276E97D2BF52F4D7B10D3642682* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_mF13795C1185ADAB240A05D015AECD78F34E7AE00_gshared (Dictionary_2_t01224C8DBCCFE276E97D2BF52F4D7B10D3642682* __this, KeyValuePair_2U5BU5D_t00F1189D6659F8334E1D51B328A743FBD809CFB6* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		KeyValuePair_2U5BU5D_t00F1189D6659F8334E1D51B328A743FBD809CFB6* L_0 = ___0_array;
		int32_t L_1 = ___1_index;
		Dictionary_2_CopyTo_m4E3689D9CDB6B183A42A99057BD45A0337224455(__this, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 42));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_ICollection_CopyTo_mBA9A0E8FB559E2D0FABD8C7A67552B9B885D383B_gshared (Dictionary_2_t01224C8DBCCFE276E97D2BF52F4D7B10D3642682* __this, RuntimeArray* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	KeyValuePair_2U5BU5D_t00F1189D6659F8334E1D51B328A743FBD809CFB6* V_0 = NULL;
	DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533* V_1 = NULL;
	EntryU5BU5D_t6E8F51999B5C2D1A5E09B1963CF042E7B5CAA500* V_2 = NULL;
	int32_t V_3 = 0;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_4 = NULL;
	int32_t V_5 = 0;
	EntryU5BU5D_t6E8F51999B5C2D1A5E09B1963CF042E7B5CAA500* V_6 = NULL;
	int32_t V_7 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeArray* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)3, NULL);
	}

IL_0009:
	{
		RuntimeArray* L_1 = ___0_array;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(L_1, NULL);
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0018;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)7, NULL);
	}

IL_0018:
	{
		RuntimeArray* L_3 = ___0_array;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(L_3, 0, NULL);
		if (!L_4)
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)6, NULL);
	}

IL_0027:
	{
		int32_t L_5 = ___1_index;
		RuntimeArray* L_6 = ___0_array;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(L_6, NULL);
		if ((!(((uint32_t)L_5) > ((uint32_t)L_7))))
		{
			goto IL_0035;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0035:
	{
		RuntimeArray* L_8 = ___0_array;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(L_8, NULL);
		int32_t L_10 = ___1_index;
		int32_t L_11;
		L_11 = Dictionary_2_get_Count_mC916574C49D9A72EAB6F28C2C25FDB0614CE1C5E(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 36));
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_9, L_10))) >= ((int32_t)L_11)))
		{
			goto IL_004b;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)5, NULL);
	}

IL_004b:
	{
		RuntimeArray* L_12 = ___0_array;
		V_0 = ((KeyValuePair_2U5BU5D_t00F1189D6659F8334E1D51B328A743FBD809CFB6*)IsInst((RuntimeObject*)L_12, il2cpp_rgctx_data(method->klass->rgctx_data, 35)));
		KeyValuePair_2U5BU5D_t00F1189D6659F8334E1D51B328A743FBD809CFB6* L_13 = V_0;
		if (!L_13)
		{
			goto IL_005e;
		}
	}
	{
		KeyValuePair_2U5BU5D_t00F1189D6659F8334E1D51B328A743FBD809CFB6* L_14 = V_0;
		int32_t L_15 = ___1_index;
		Dictionary_2_CopyTo_m4E3689D9CDB6B183A42A99057BD45A0337224455(__this, L_14, L_15, il2cpp_rgctx_method(method->klass->rgctx_data, 42));
		return;
	}

IL_005e:
	{
		RuntimeArray* L_16 = ___0_array;
		V_1 = ((DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533*)IsInst((RuntimeObject*)L_16, DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533_il2cpp_TypeInfo_var));
		DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533* L_17 = V_1;
		if (!L_17)
		{
			goto IL_00c3;
		}
	}
	{
		EntryU5BU5D_t6E8F51999B5C2D1A5E09B1963CF042E7B5CAA500* L_18 = (EntryU5BU5D_t6E8F51999B5C2D1A5E09B1963CF042E7B5CAA500*)__this->____entries_1;
		V_2 = L_18;
		V_3 = 0;
		goto IL_00b9;
	}

IL_0073:
	{
		EntryU5BU5D_t6E8F51999B5C2D1A5E09B1963CF042E7B5CAA500* L_19 = V_2;
		int32_t L_20 = V_3;
		NullCheck(L_19);
		int32_t L_21 = (int32_t)((L_19)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_20)))->___hashCode_0;
		if ((((int32_t)L_21) < ((int32_t)0)))
		{
			goto IL_00b5;
		}
	}
	{
		DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533* L_22 = V_1;
		int32_t L_23 = ___1_index;
		int32_t L_24 = L_23;
		___1_index = ((int32_t)il2cpp_codegen_add(L_24, 1));
		EntryU5BU5D_t6E8F51999B5C2D1A5E09B1963CF042E7B5CAA500* L_25 = V_2;
		int32_t L_26 = V_3;
		NullCheck(L_25);
		int32_t L_27 = (int32_t)((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___key_2;
		int32_t L_28 = L_27;
		RuntimeObject* L_29 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14), &L_28);
		EntryU5BU5D_t6E8F51999B5C2D1A5E09B1963CF042E7B5CAA500* L_30 = V_2;
		int32_t L_31 = V_3;
		NullCheck(L_30);
		bool L_32 = (bool)((L_30)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_31)))->___value_3;
		bool L_33 = L_32;
		RuntimeObject* L_34 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15), &L_33);
		DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB L_35;
		memset((&L_35), 0, sizeof(L_35));
		DictionaryEntry__ctor_m2768353E53A75C4860E34B37DAF1342120C5D1EA((&L_35), L_29, L_34, NULL);
		NullCheck(L_22);
		(L_22)->SetAt(static_cast<il2cpp_array_size_t>(L_24), (DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB)L_35);
	}

IL_00b5:
	{
		int32_t L_36 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_36, 1));
	}

IL_00b9:
	{
		int32_t L_37 = V_3;
		int32_t L_38 = (int32_t)__this->____count_2;
		if ((((int32_t)L_37) < ((int32_t)L_38)))
		{
			goto IL_0073;
		}
	}
	{
		return;
	}

IL_00c3:
	{
		RuntimeArray* L_39 = ___0_array;
		V_4 = ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)IsInst((RuntimeObject*)L_39, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_40 = V_4;
		if (L_40)
		{
			goto IL_00d4;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
	}

IL_00d4:
	{
	}
	try
	{
		{
			int32_t L_41 = (int32_t)__this->____count_2;
			V_5 = L_41;
			EntryU5BU5D_t6E8F51999B5C2D1A5E09B1963CF042E7B5CAA500* L_42 = (EntryU5BU5D_t6E8F51999B5C2D1A5E09B1963CF042E7B5CAA500*)__this->____entries_1;
			V_6 = L_42;
			V_7 = 0;
			goto IL_0130_1;
		}

IL_00ea_1:
		{
			EntryU5BU5D_t6E8F51999B5C2D1A5E09B1963CF042E7B5CAA500* L_43 = V_6;
			int32_t L_44 = V_7;
			NullCheck(L_43);
			int32_t L_45 = (int32_t)((L_43)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_44)))->___hashCode_0;
			if ((((int32_t)L_45) < ((int32_t)0)))
			{
				goto IL_012a_1;
			}
		}
		{
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_46 = V_4;
			int32_t L_47 = ___1_index;
			int32_t L_48 = L_47;
			___1_index = ((int32_t)il2cpp_codegen_add(L_48, 1));
			EntryU5BU5D_t6E8F51999B5C2D1A5E09B1963CF042E7B5CAA500* L_49 = V_6;
			int32_t L_50 = V_7;
			NullCheck(L_49);
			int32_t L_51 = (int32_t)((L_49)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_50)))->___key_2;
			EntryU5BU5D_t6E8F51999B5C2D1A5E09B1963CF042E7B5CAA500* L_52 = V_6;
			int32_t L_53 = V_7;
			NullCheck(L_52);
			bool L_54 = (bool)((L_52)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_53)))->___value_3;
			KeyValuePair_2_t0EAC8DA2D95957AFA60DD198D013622384C0D213 L_55;
			memset((&L_55), 0, sizeof(L_55));
			KeyValuePair_2__ctor_m593E407EEF9038F9C3E26BBE93DD316684F8BC7E((&L_55), L_51, L_54, il2cpp_rgctx_method(method->klass->rgctx_data, 37));
			KeyValuePair_2_t0EAC8DA2D95957AFA60DD198D013622384C0D213 L_56 = L_55;
			RuntimeObject* L_57 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 21), &L_56);
			NullCheck(L_46);
			ArrayElementTypeCheck (L_46, L_57);
			(L_46)->SetAt(static_cast<il2cpp_array_size_t>(L_48), (RuntimeObject*)L_57);
		}

IL_012a_1:
		{
			int32_t L_58 = V_7;
			V_7 = ((int32_t)il2cpp_codegen_add(L_58, 1));
		}

IL_0130_1:
		{
			int32_t L_59 = V_7;
			int32_t L_60 = V_5;
			if ((((int32_t)L_59) < ((int32_t)L_60)))
			{
				goto IL_00ea_1;
			}
		}
		{
			goto IL_0140;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0138;
		}
		throw e;
	}

CATCH_0138:
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0140;
	}

IL_0140:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m4A26B359A35B4E503C91AE2CAFB686510830C118_gshared (Dictionary_2_t01224C8DBCCFE276E97D2BF52F4D7B10D3642682* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t06874F6DC6BF37190C0F4C5F3BB89A8F4D960969 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m2F677A930996556C63EB1D62D1929C1CF70BC4ED((&L_0), __this, 2, il2cpp_rgctx_method(method->klass->rgctx_data, 39));
		Enumerator_t06874F6DC6BF37190C0F4C5F3BB89A8F4D960969 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 38), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_ICollection_get_SyncRoot_m34240AA3DCE5F7E234EA8F837E60359527F0FFBA_gshared (Dictionary_2_t01224C8DBCCFE276E97D2BF52F4D7B10D3642682* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->____syncRoot_9;
		if (L_0)
		{
			goto IL_001a;
		}
	}
	{
		RuntimeObject** L_1 = (RuntimeObject**)(&__this->____syncRoot_9);
		RuntimeObject* L_2 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_2, NULL);
		RuntimeObject* L_3;
		L_3 = InterlockedCompareExchangeImpl<RuntimeObject*>(L_1, L_2, NULL);
	}

IL_001a:
	{
		RuntimeObject* L_4 = (RuntimeObject*)__this->____syncRoot_9;
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IDictionary_get_Keys_mBC62720AFF5E1DF9941CFB12A48EBA5BD2768A70_gshared (Dictionary_2_t01224C8DBCCFE276E97D2BF52F4D7B10D3642682* __this, const RuntimeMethod* method) 
{
	{
		KeyCollection_t66E188B36DF8E1A23EBDA7253CDCE978CD3EF298* L_0;
		L_0 = Dictionary_2_get_Keys_mEDBAB5200E3CD3202D5F94E16F4DABEFF601DE5F(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 55));
		return (RuntimeObject*)L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IDictionary_get_Item_m1934F06A0FDFB3B728445676E52E60E2DD61EF26_gshared (Dictionary_2_t01224C8DBCCFE276E97D2BF52F4D7B10D3642682* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		RuntimeObject* L_0 = ___0_key;
		bool L_1;
		L_1 = Dictionary_2_IsCompatibleKey_m93B719F22129BB5DA700F0F45427E1B8AD39C562(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 56));
		if (!L_1)
		{
			goto IL_0030;
		}
	}
	{
		RuntimeObject* L_2 = ___0_key;
		int32_t L_3;
		L_3 = Dictionary_2_FindEntry_mE1DD9E6586FB9B0C19DFB7EE7A3A9D8386D5D5D1(__this, ((*(int32_t*)((int32_t*)(int32_t*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 14))))), il2cpp_rgctx_method(method->klass->rgctx_data, 28));
		V_0 = L_3;
		int32_t L_4 = V_0;
		if ((((int32_t)L_4) < ((int32_t)0)))
		{
			goto IL_0030;
		}
	}
	{
		EntryU5BU5D_t6E8F51999B5C2D1A5E09B1963CF042E7B5CAA500* L_5 = (EntryU5BU5D_t6E8F51999B5C2D1A5E09B1963CF042E7B5CAA500*)__this->____entries_1;
		int32_t L_6 = V_0;
		NullCheck(L_5);
		bool L_7 = (bool)((L_5)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_6)))->___value_3;
		bool L_8 = L_7;
		RuntimeObject* L_9 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15), &L_8);
		return L_9;
	}

IL_0030:
	{
		return NULL;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_IDictionary_set_Item_mD38B5DA87751A8D7F05EEB6939B74A8B202D60FC_gshared (Dictionary_2_t01224C8DBCCFE276E97D2BF52F4D7B10D3642682* __this, RuntimeObject* ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 2> __active_exceptions;
	{
		RuntimeObject* L_0 = ___0_key;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)5, NULL);
	}

IL_0009:
	{
		RuntimeObject* L_1 = ___1_value;
		ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m92ED6D35EB625EDC96D474780EA2DBE2E0A38D3B(L_1, (int32_t)((int32_t)15), il2cpp_rgctx_method(method->klass->rgctx_data, 58));
	}
	try
	{
		{
			RuntimeObject* L_2 = ___0_key;
			V_0 = ((*(int32_t*)((int32_t*)(int32_t*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 14)))));
		}
		try
		{
			int32_t L_3 = V_0;
			RuntimeObject* L_4 = ___1_value;
			Dictionary_2_set_Item_m266E81996A1E6BFCB7C91E78EC0DB1253655AD48(__this, L_3, ((*(bool*)((bool*)(bool*)UnBox(L_4, il2cpp_rgctx_data(method->klass->rgctx_data, 15))))), il2cpp_rgctx_method(method->klass->rgctx_data, 59));
			goto IL_003a_1;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_0027_1;
			}
			throw e;
		}

CATCH_0027_1:
		{
			RuntimeObject* L_5 = ___1_value;
			RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 60)) };
			il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
			Type_t* L_7;
			L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
			ThrowHelper_ThrowWrongValueTypeArgumentException_mC1A6BBE43C360583C1E2C463D5B0AADF1E3E1910(L_5, L_7, NULL);
			IL2CPP_POP_ACTIVE_EXCEPTION();
			goto IL_003a_1;
		}

IL_003a_1:
		{
			goto IL_004f;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_003c;
		}
		throw e;
	}

CATCH_003c:
	{
		RuntimeObject* L_8 = ___0_key;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_9 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 61)) };
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
		Type_t* L_10;
		L_10 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_9, NULL);
		ThrowHelper_ThrowWrongKeyTypeArgumentException_m90E5BCE2CB10EEC16F254C237121C6816C4D6982(L_8, L_10, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_004f;
	}

IL_004f:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_IsCompatibleKey_m93B719F22129BB5DA700F0F45427E1B8AD39C562_gshared (RuntimeObject* ___0_key, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_key;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)5, NULL);
	}

IL_0009:
	{
		RuntimeObject* L_1 = ___0_key;
		return (bool)((!(((RuntimeObject*)(RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_1, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 14)))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_IDictionary_Contains_m2A20A4DC1297F17CA75CE556E9478BDCD7A24E97_gshared (Dictionary_2_t01224C8DBCCFE276E97D2BF52F4D7B10D3642682* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_key;
		bool L_1;
		L_1 = Dictionary_2_IsCompatibleKey_m93B719F22129BB5DA700F0F45427E1B8AD39C562(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 56));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_key;
		bool L_3;
		L_3 = Dictionary_2_ContainsKey_m5A6361833F0EDADF18530A95D2CF315A0319D8E0(__this, ((*(int32_t*)((int32_t*)(int32_t*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 14))))), il2cpp_rgctx_method(method->klass->rgctx_data, 62));
		return L_3;
	}

IL_0015:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IDictionary_GetEnumerator_m4747AFBC242472C9FA82C860560FF507CC992117_gshared (Dictionary_2_t01224C8DBCCFE276E97D2BF52F4D7B10D3642682* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t06874F6DC6BF37190C0F4C5F3BB89A8F4D960969 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m2F677A930996556C63EB1D62D1929C1CF70BC4ED((&L_0), __this, 1, il2cpp_rgctx_method(method->klass->rgctx_data, 39));
		Enumerator_t06874F6DC6BF37190C0F4C5F3BB89A8F4D960969 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 38), &L_1);
		return (RuntimeObject*)L_2;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mAD0F72A65D09EB22E0C7720CD0E099163B97AA00_gshared (Dictionary_2_t760E9A9490B53715AE11CA76450386C19A39A0C8* __this, const RuntimeMethod* method) 
{
	{
		Dictionary_2__ctor_mC6F01298B65357F322BEE96EE6AF4DC68C22B832(__this, 0, (RuntimeObject*)NULL, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mAF2BA68FB228BDE702DC230A810FDA729A76D4F3_gshared (Dictionary_2_t760E9A9490B53715AE11CA76450386C19A39A0C8* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_capacity;
		Dictionary_2__ctor_mC6F01298B65357F322BEE96EE6AF4DC68C22B832(__this, L_0, (RuntimeObject*)NULL, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mB13762744A0270086CAF9AB771351442D4224E28_gshared (Dictionary_2_t760E9A9490B53715AE11CA76450386C19A39A0C8* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_comparer;
		Dictionary_2__ctor_mC6F01298B65357F322BEE96EE6AF4DC68C22B832(__this, 0, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mC6F01298B65357F322BEE96EE6AF4DC68C22B832_gshared (Dictionary_2_t760E9A9490B53715AE11CA76450386C19A39A0C8* __this, int32_t ___0_capacity, RuntimeObject* ___1_comparer, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		int32_t L_0 = ___0_capacity;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0011;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m9B335696876184D17D1F8D7AF94C1B5B0869AA97((int32_t)((int32_t)12), NULL);
	}

IL_0011:
	{
		int32_t L_1 = ___0_capacity;
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_001d;
		}
	}
	{
		int32_t L_2 = ___0_capacity;
		int32_t L_3;
		L_3 = Dictionary_2_Initialize_m6E2468392BEC356F498A9CC84BE3FEBCC80DBF0C(__this, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
	}

IL_001d:
	{
		RuntimeObject* L_4 = ___1_comparer;
		EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* L_5;
		L_5 = EqualityComparer_1_get_Default_mF70F6C11A35B420DFA4628EE316B087F2DCB280C_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		if ((((RuntimeObject*)(RuntimeObject*)L_4) == ((RuntimeObject*)(EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC*)L_5)))
		{
			goto IL_002c;
		}
	}
	{
		RuntimeObject* L_6 = ___1_comparer;
		__this->____comparer_6 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____comparer_6), (void*)L_6);
	}

IL_002c:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mEBB8CA1381EE46CC59DDFF2626EC37E721FE52DD_gshared (Dictionary_2_t760E9A9490B53715AE11CA76450386C19A39A0C8* __this, RuntimeObject* ___0_dictionary, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_dictionary;
		Dictionary_2__ctor_m2FBD8737309023A68D2E75E7E10381889E294752(__this, L_0, (RuntimeObject*)NULL, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m2FBD8737309023A68D2E75E7E10381889E294752_gshared (Dictionary_2_t760E9A9490B53715AE11CA76450386C19A39A0C8* __this, RuntimeObject* ___0_dictionary, RuntimeObject* ___1_comparer, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	EntryU5BU5D_t74939D41FA6DAF2CD4F7462D8AD016D48B99B8B7* V_1 = NULL;
	int32_t V_2 = 0;
	RuntimeObject* V_3 = NULL;
	KeyValuePair_2_t25871D01DA51BBB8CEF1F27E727B5D3A545FD4EF V_4;
	memset((&V_4), 0, sizeof(V_4));
	Dictionary_2_t760E9A9490B53715AE11CA76450386C19A39A0C8* G_B2_0 = NULL;
	Dictionary_2_t760E9A9490B53715AE11CA76450386C19A39A0C8* G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	Dictionary_2_t760E9A9490B53715AE11CA76450386C19A39A0C8* G_B3_1 = NULL;
	{
		RuntimeObject* L_0 = ___0_dictionary;
		if (L_0)
		{
			G_B2_0 = __this;
			goto IL_0007;
		}
		G_B1_0 = __this;
	}
	{
		G_B3_0 = 0;
		G_B3_1 = G_B1_0;
		goto IL_000d;
	}

IL_0007:
	{
		RuntimeObject* L_1 = ___0_dictionary;
		NullCheck((RuntimeObject*)L_1);
		int32_t L_2;
		L_2 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 9), (RuntimeObject*)L_1);
		G_B3_0 = L_2;
		G_B3_1 = G_B2_0;
	}

IL_000d:
	{
		RuntimeObject* L_3 = ___1_comparer;
		Dictionary_2__ctor_mC6F01298B65357F322BEE96EE6AF4DC68C22B832(G_B3_1, G_B3_0, L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		RuntimeObject* L_4 = ___0_dictionary;
		if (L_4)
		{
			goto IL_001c;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)1, NULL);
	}

IL_001c:
	{
		RuntimeObject* L_5 = ___0_dictionary;
		NullCheck((RuntimeObject*)L_5);
		Type_t* L_6;
		L_6 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3((RuntimeObject*)L_5, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 11)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		bool L_9;
		L_9 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_6, L_8, NULL);
		if (!L_9)
		{
			goto IL_0080;
		}
	}
	{
		RuntimeObject* L_10 = ___0_dictionary;
		Dictionary_2_t760E9A9490B53715AE11CA76450386C19A39A0C8* L_11 = ((Dictionary_2_t760E9A9490B53715AE11CA76450386C19A39A0C8*)CastclassClass((RuntimeObject*)L_10, il2cpp_rgctx_data(method->klass->rgctx_data, 6)));
		NullCheck(L_11);
		int32_t L_12 = (int32_t)L_11->____count_2;
		V_0 = L_12;
		NullCheck(L_11);
		EntryU5BU5D_t74939D41FA6DAF2CD4F7462D8AD016D48B99B8B7* L_13 = (EntryU5BU5D_t74939D41FA6DAF2CD4F7462D8AD016D48B99B8B7*)L_11->____entries_1;
		V_1 = L_13;
		V_2 = 0;
		goto IL_007b;
	}

IL_004a:
	{
		EntryU5BU5D_t74939D41FA6DAF2CD4F7462D8AD016D48B99B8B7* L_14 = V_1;
		int32_t L_15 = V_2;
		NullCheck(L_14);
		int32_t L_16 = (int32_t)((L_14)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_15)))->___hashCode_0;
		if ((((int32_t)L_16) < ((int32_t)0)))
		{
			goto IL_0077;
		}
	}
	{
		EntryU5BU5D_t74939D41FA6DAF2CD4F7462D8AD016D48B99B8B7* L_17 = V_1;
		int32_t L_18 = V_2;
		NullCheck(L_17);
		int32_t L_19 = (int32_t)((L_17)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_18)))->___key_2;
		EntryU5BU5D_t74939D41FA6DAF2CD4F7462D8AD016D48B99B8B7* L_20 = V_1;
		int32_t L_21 = V_2;
		NullCheck(L_20);
		Il2CppChar L_22 = (Il2CppChar)((L_20)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_21)))->___value_3;
		Dictionary_2_Add_m65C453F1100868C469A8E4794AE6DCD76F6AA1A4(__this, L_19, L_22, il2cpp_rgctx_method(method->klass->rgctx_data, 16));
	}

IL_0077:
	{
		int32_t L_23 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_23, 1));
	}

IL_007b:
	{
		int32_t L_24 = V_2;
		int32_t L_25 = V_0;
		if ((((int32_t)L_24) < ((int32_t)L_25)))
		{
			goto IL_004a;
		}
	}
	{
		return;
	}

IL_0080:
	{
		RuntimeObject* L_26 = ___0_dictionary;
		NullCheck((RuntimeObject*)L_26);
		RuntimeObject* L_27;
		L_27 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 17), (RuntimeObject*)L_26);
		V_3 = L_27;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00af:
			{
				{
					RuntimeObject* L_28 = V_3;
					if (!L_28)
					{
						goto IL_00b8;
					}
				}
				{
					RuntimeObject* L_29 = V_3;
					NullCheck((RuntimeObject*)L_29);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_29);
				}

IL_00b8:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_00a5_1;
			}

IL_0089_1:
			{
				RuntimeObject* L_30 = V_3;
				NullCheck(L_30);
				KeyValuePair_2_t25871D01DA51BBB8CEF1F27E727B5D3A545FD4EF L_31;
				L_31 = InterfaceFuncInvoker0< KeyValuePair_2_t25871D01DA51BBB8CEF1F27E727B5D3A545FD4EF >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 19), L_30);
				V_4 = L_31;
				int32_t L_32;
				L_32 = KeyValuePair_2_get_Key_m8862066C052557662F7CFB385CBA6E42C8C92454_inline((&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 22));
				Il2CppChar L_33;
				L_33 = KeyValuePair_2_get_Value_m6E082F30B5B753C3131FCA1A488A0963333AFD04_inline((&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 23));
				Dictionary_2_Add_m65C453F1100868C469A8E4794AE6DCD76F6AA1A4(__this, L_32, L_33, il2cpp_rgctx_method(method->klass->rgctx_data, 16));
			}

IL_00a5_1:
			{
				RuntimeObject* L_34 = V_3;
				NullCheck((RuntimeObject*)L_34);
				bool L_35;
				L_35 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_34);
				if (L_35)
				{
					goto IL_0089_1;
				}
			}
			{
				goto IL_00b9;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00b9:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m9E8599FAC86967646C846E377B65E99DACA301F4_gshared (Dictionary_2_t760E9A9490B53715AE11CA76450386C19A39A0C8* __this, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___0_info, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___1_context, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConditionalWeakTable_2_Add_mF98A2811734A37D856C622E7783FD7502AA7F0B7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* L_0;
		L_0 = HashHelpers_get_SerializationInfoTable_m8C17D5483B39B68897AEFFD14A9E139AF858222F(NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_1 = ___0_info;
		NullCheck(L_0);
		ConditionalWeakTable_2_Add_mF98A2811734A37D856C622E7783FD7502AA7F0B7(L_0, (RuntimeObject*)__this, L_1, ConditionalWeakTable_2_Add_mF98A2811734A37D856C622E7783FD7502AA7F0B7_RuntimeMethod_var);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_get_Count_mF62BC02D0DF4F1E37D59F0D850131620B1FC4EEE_gshared (Dictionary_2_t760E9A9490B53715AE11CA76450386C19A39A0C8* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____count_2;
		int32_t L_1 = (int32_t)__this->____freeCount_4;
		return ((int32_t)il2cpp_codegen_subtract(L_0, L_1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyCollection_t3E33C2EB31F1F1EF4ADE3FFFBB7D11E563134D04* Dictionary_2_get_Keys_m28C150C463713CAC4B143915504A3B0597A68CDC_gshared (Dictionary_2_t760E9A9490B53715AE11CA76450386C19A39A0C8* __this, const RuntimeMethod* method) 
{
	{
		KeyCollection_t3E33C2EB31F1F1EF4ADE3FFFBB7D11E563134D04* L_0 = (KeyCollection_t3E33C2EB31F1F1EF4ADE3FFFBB7D11E563134D04*)__this->____keys_7;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		KeyCollection_t3E33C2EB31F1F1EF4ADE3FFFBB7D11E563134D04* L_1 = (KeyCollection_t3E33C2EB31F1F1EF4ADE3FFFBB7D11E563134D04*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 24));
		KeyCollection__ctor_m757446853A294CCE931D15B5EB195BB85CBA306B(L_1, __this, il2cpp_rgctx_method(method->klass->rgctx_data, 25));
		__this->____keys_7 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____keys_7), (void*)L_1);
	}

IL_0014:
	{
		KeyCollection_t3E33C2EB31F1F1EF4ADE3FFFBB7D11E563134D04* L_2 = (KeyCollection_t3E33C2EB31F1F1EF4ADE3FFFBB7D11E563134D04*)__this->____keys_7;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueCollection_tDBED056C1C402E2288827E2C0299F425713D8171* Dictionary_2_get_Values_m689FE14DC17D484526F45F974E8DAE9122B08CCF_gshared (Dictionary_2_t760E9A9490B53715AE11CA76450386C19A39A0C8* __this, const RuntimeMethod* method) 
{
	{
		ValueCollection_tDBED056C1C402E2288827E2C0299F425713D8171* L_0 = (ValueCollection_tDBED056C1C402E2288827E2C0299F425713D8171*)__this->____values_8;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ValueCollection_tDBED056C1C402E2288827E2C0299F425713D8171* L_1 = (ValueCollection_tDBED056C1C402E2288827E2C0299F425713D8171*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 26));
		ValueCollection__ctor_mE012744172537231AC72E669D4FACA17961169E9(L_1, __this, il2cpp_rgctx_method(method->klass->rgctx_data, 27));
		__this->____values_8 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____values_8), (void*)L_1);
	}

IL_0014:
	{
		ValueCollection_tDBED056C1C402E2288827E2C0299F425713D8171* L_2 = (ValueCollection_tDBED056C1C402E2288827E2C0299F425713D8171*)__this->____values_8;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar Dictionary_2_get_Item_m49A20DF302FC15423AC5B1A834A2E2D66A4D1FC3_gshared (Dictionary_2_t760E9A9490B53715AE11CA76450386C19A39A0C8* __this, int32_t ___0_key, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	Il2CppChar V_1 = 0x0;
	{
		int32_t L_0 = ___0_key;
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_m58E23BFC0BDBD1CC8AC1AD38C4A42190F024EF62(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 28));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_001e;
		}
	}
	{
		EntryU5BU5D_t74939D41FA6DAF2CD4F7462D8AD016D48B99B8B7* L_3 = (EntryU5BU5D_t74939D41FA6DAF2CD4F7462D8AD016D48B99B8B7*)__this->____entries_1;
		int32_t L_4 = V_0;
		NullCheck(L_3);
		Il2CppChar L_5 = (Il2CppChar)((L_3)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_4)))->___value_3;
		return L_5;
	}

IL_001e:
	{
		int32_t L_6 = ___0_key;
		int32_t L_7 = L_6;
		RuntimeObject* L_8 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14), &L_7);
		ThrowHelper_ThrowKeyNotFoundException_m6A17735FA486AD43F2488DE39B755AC60BC99CE7(L_8, NULL);
		il2cpp_codegen_initobj((&V_1), sizeof(Il2CppChar));
		Il2CppChar L_9 = V_1;
		return L_9;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_mCDEFF5FEE05146FB5547F35FA1AC420B6E750E5F_gshared (Dictionary_2_t760E9A9490B53715AE11CA76450386C19A39A0C8* __this, int32_t ___0_key, Il2CppChar ___1_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_key;
		Il2CppChar L_1 = ___1_value;
		bool L_2;
		L_2 = Dictionary_2_TryInsert_mE950A0E7B2E2D06C4599AB4713A970E9CF17C711(__this, L_0, L_1, (uint8_t)1, il2cpp_rgctx_method(method->klass->rgctx_data, 29));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_m65C453F1100868C469A8E4794AE6DCD76F6AA1A4_gshared (Dictionary_2_t760E9A9490B53715AE11CA76450386C19A39A0C8* __this, int32_t ___0_key, Il2CppChar ___1_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_key;
		Il2CppChar L_1 = ___1_value;
		bool L_2;
		L_2 = Dictionary_2_TryInsert_mE950A0E7B2E2D06C4599AB4713A970E9CF17C711(__this, L_0, L_1, (uint8_t)2, il2cpp_rgctx_method(method->klass->rgctx_data, 29));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_mCE1006F57A966B17A3F965FFBCC7544CEF873CE9_gshared (Dictionary_2_t760E9A9490B53715AE11CA76450386C19A39A0C8* __this, KeyValuePair_2_t25871D01DA51BBB8CEF1F27E727B5D3A545FD4EF ___0_keyValuePair, const RuntimeMethod* method) 
{
	{
		int32_t L_0;
		L_0 = KeyValuePair_2_get_Key_m8862066C052557662F7CFB385CBA6E42C8C92454_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		Il2CppChar L_1;
		L_1 = KeyValuePair_2_get_Value_m6E082F30B5B753C3131FCA1A488A0963333AFD04_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		Dictionary_2_Add_m65C453F1100868C469A8E4794AE6DCD76F6AA1A4(__this, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 16));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m8139B845362053338B95E27DF5BBEF984CC85CA8_gshared (Dictionary_2_t760E9A9490B53715AE11CA76450386C19A39A0C8* __this, KeyValuePair_2_t25871D01DA51BBB8CEF1F27E727B5D3A545FD4EF ___0_keyValuePair, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0;
		L_0 = KeyValuePair_2_get_Key_m8862066C052557662F7CFB385CBA6E42C8C92454_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_m58E23BFC0BDBD1CC8AC1AD38C4A42190F024EF62(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 28));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0038;
		}
	}
	{
		EqualityComparer_1_tCAA8B21BC7E1029BB1288DEAE6D8ACB730BC5D4B* L_3;
		L_3 = EqualityComparer_1_get_Default_m1D7CFB300C5D4CDC1A3E2D90C684F5AD4C98B8CB_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 30));
		EntryU5BU5D_t74939D41FA6DAF2CD4F7462D8AD016D48B99B8B7* L_4 = (EntryU5BU5D_t74939D41FA6DAF2CD4F7462D8AD016D48B99B8B7*)__this->____entries_1;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		Il2CppChar L_6 = (Il2CppChar)((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)))->___value_3;
		Il2CppChar L_7;
		L_7 = KeyValuePair_2_get_Value_m6E082F30B5B753C3131FCA1A488A0963333AFD04_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		NullCheck(L_3);
		bool L_8;
		L_8 = VirtualFuncInvoker2< bool, Il2CppChar, Il2CppChar >::Invoke(8, L_3, L_6, L_7);
		if (!L_8)
		{
			goto IL_0038;
		}
	}
	{
		return (bool)1;
	}

IL_0038:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_mCA71989B1F1402CF8B643015618FC85D45343133_gshared (Dictionary_2_t760E9A9490B53715AE11CA76450386C19A39A0C8* __this, KeyValuePair_2_t25871D01DA51BBB8CEF1F27E727B5D3A545FD4EF ___0_keyValuePair, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0;
		L_0 = KeyValuePair_2_get_Key_m8862066C052557662F7CFB385CBA6E42C8C92454_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_m58E23BFC0BDBD1CC8AC1AD38C4A42190F024EF62(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 28));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0046;
		}
	}
	{
		EqualityComparer_1_tCAA8B21BC7E1029BB1288DEAE6D8ACB730BC5D4B* L_3;
		L_3 = EqualityComparer_1_get_Default_m1D7CFB300C5D4CDC1A3E2D90C684F5AD4C98B8CB_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 30));
		EntryU5BU5D_t74939D41FA6DAF2CD4F7462D8AD016D48B99B8B7* L_4 = (EntryU5BU5D_t74939D41FA6DAF2CD4F7462D8AD016D48B99B8B7*)__this->____entries_1;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		Il2CppChar L_6 = (Il2CppChar)((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)))->___value_3;
		Il2CppChar L_7;
		L_7 = KeyValuePair_2_get_Value_m6E082F30B5B753C3131FCA1A488A0963333AFD04_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		NullCheck(L_3);
		bool L_8;
		L_8 = VirtualFuncInvoker2< bool, Il2CppChar, Il2CppChar >::Invoke(8, L_3, L_6, L_7);
		if (!L_8)
		{
			goto IL_0046;
		}
	}
	{
		int32_t L_9;
		L_9 = KeyValuePair_2_get_Key_m8862066C052557662F7CFB385CBA6E42C8C92454_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		bool L_10;
		L_10 = Dictionary_2_Remove_m3AF2AA4CD90907190268440760E0B2BBF55FAD21(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 34));
		return (bool)1;
	}

IL_0046:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Clear_m6BDE066E698E26ADC17687AFDD39842931DD0964_gshared (Dictionary_2_t760E9A9490B53715AE11CA76450386C19A39A0C8* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = (int32_t)__this->____count_2;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_0041;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		NullCheck(L_3);
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_2, 0, ((int32_t)(((RuntimeArray*)L_3)->max_length)), NULL);
		__this->____count_2 = 0;
		__this->____freeList_3 = (-1);
		__this->____freeCount_4 = 0;
		EntryU5BU5D_t74939D41FA6DAF2CD4F7462D8AD016D48B99B8B7* L_4 = (EntryU5BU5D_t74939D41FA6DAF2CD4F7462D8AD016D48B99B8B7*)__this->____entries_1;
		int32_t L_5 = V_0;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_4, 0, L_5, NULL);
	}

IL_0041:
	{
		int32_t L_6 = (int32_t)__this->____version_5;
		__this->____version_5 = ((int32_t)il2cpp_codegen_add(L_6, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_mFEF31529C09939D463552C900419ABCC2B05B354_gshared (Dictionary_2_t760E9A9490B53715AE11CA76450386C19A39A0C8* __this, int32_t ___0_key, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_key;
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_m58E23BFC0BDBD1CC8AC1AD38C4A42190F024EF62(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 28));
		return (bool)((((int32_t)((((int32_t)L_1) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsValue_m7263044603C4DEE99F08FA1E6F44FF03B507DB97_gshared (Dictionary_2_t760E9A9490B53715AE11CA76450386C19A39A0C8* __this, Il2CppChar ___0_value, const RuntimeMethod* method) 
{
	EntryU5BU5D_t74939D41FA6DAF2CD4F7462D8AD016D48B99B8B7* V_0 = NULL;
	int32_t V_1 = 0;
	Il2CppChar V_2 = 0x0;
	int32_t V_3 = 0;
	EqualityComparer_1_tCAA8B21BC7E1029BB1288DEAE6D8ACB730BC5D4B* V_4 = NULL;
	int32_t V_5 = 0;
	{
		EntryU5BU5D_t74939D41FA6DAF2CD4F7462D8AD016D48B99B8B7* L_0 = (EntryU5BU5D_t74939D41FA6DAF2CD4F7462D8AD016D48B99B8B7*)__this->____entries_1;
		V_0 = L_0;
		goto IL_0049;
	}

IL_0049:
	{
		il2cpp_codegen_initobj((&V_2), sizeof(Il2CppChar));
	}
	{
		V_3 = 0;
		goto IL_008b;
	}

IL_005d:
	{
		EntryU5BU5D_t74939D41FA6DAF2CD4F7462D8AD016D48B99B8B7* L_3 = V_0;
		int32_t L_4 = V_3;
		NullCheck(L_3);
		int32_t L_5 = (int32_t)((L_3)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_4)))->___hashCode_0;
		if ((((int32_t)L_5) < ((int32_t)0)))
		{
			goto IL_0087;
		}
	}
	{
		EqualityComparer_1_tCAA8B21BC7E1029BB1288DEAE6D8ACB730BC5D4B* L_6;
		L_6 = EqualityComparer_1_get_Default_m1D7CFB300C5D4CDC1A3E2D90C684F5AD4C98B8CB_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 30));
		EntryU5BU5D_t74939D41FA6DAF2CD4F7462D8AD016D48B99B8B7* L_7 = V_0;
		int32_t L_8 = V_3;
		NullCheck(L_7);
		Il2CppChar L_9 = (Il2CppChar)((L_7)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_8)))->___value_3;
		Il2CppChar L_10 = ___0_value;
		NullCheck(L_6);
		bool L_11;
		L_11 = VirtualFuncInvoker2< bool, Il2CppChar, Il2CppChar >::Invoke(8, L_6, L_9, L_10);
		if (!L_11)
		{
			goto IL_0087;
		}
	}
	{
		return (bool)1;
	}

IL_0087:
	{
		int32_t L_12 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_008b:
	{
		int32_t L_13 = V_3;
		int32_t L_14 = (int32_t)__this->____count_2;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_005d;
		}
	}
	{
		goto IL_00db;
	}

IL_00db:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_CopyTo_m4D5CDF938A4188C7DC837512841EF76830A24F2A_gshared (Dictionary_2_t760E9A9490B53715AE11CA76450386C19A39A0C8* __this, KeyValuePair_2U5BU5D_t185EF1C22979145FBA3233EFBDF557ECDC08113C* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	EntryU5BU5D_t74939D41FA6DAF2CD4F7462D8AD016D48B99B8B7* V_1 = NULL;
	int32_t V_2 = 0;
	{
		KeyValuePair_2U5BU5D_t185EF1C22979145FBA3233EFBDF557ECDC08113C* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)3, NULL);
	}

IL_0009:
	{
		int32_t L_1 = ___1_index;
		KeyValuePair_2U5BU5D_t185EF1C22979145FBA3233EFBDF557ECDC08113C* L_2 = ___0_array;
		NullCheck(L_2);
		if ((!(((uint32_t)L_1) > ((uint32_t)((int32_t)(((RuntimeArray*)L_2)->max_length))))))
		{
			goto IL_0014;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0014:
	{
		KeyValuePair_2U5BU5D_t185EF1C22979145FBA3233EFBDF557ECDC08113C* L_3 = ___0_array;
		NullCheck(L_3);
		int32_t L_4 = ___1_index;
		int32_t L_5;
		L_5 = Dictionary_2_get_Count_mF62BC02D0DF4F1E37D59F0D850131620B1FC4EEE(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 36));
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_3)->max_length)), L_4))) >= ((int32_t)L_5)))
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)5, NULL);
	}

IL_0027:
	{
		int32_t L_6 = (int32_t)__this->____count_2;
		V_0 = L_6;
		EntryU5BU5D_t74939D41FA6DAF2CD4F7462D8AD016D48B99B8B7* L_7 = (EntryU5BU5D_t74939D41FA6DAF2CD4F7462D8AD016D48B99B8B7*)__this->____entries_1;
		V_1 = L_7;
		V_2 = 0;
		goto IL_0075;
	}

IL_0039:
	{
		EntryU5BU5D_t74939D41FA6DAF2CD4F7462D8AD016D48B99B8B7* L_8 = V_1;
		int32_t L_9 = V_2;
		NullCheck(L_8);
		int32_t L_10 = (int32_t)((L_8)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_9)))->___hashCode_0;
		if ((((int32_t)L_10) < ((int32_t)0)))
		{
			goto IL_0071;
		}
	}
	{
		KeyValuePair_2U5BU5D_t185EF1C22979145FBA3233EFBDF557ECDC08113C* L_11 = ___0_array;
		int32_t L_12 = ___1_index;
		int32_t L_13 = L_12;
		___1_index = ((int32_t)il2cpp_codegen_add(L_13, 1));
		EntryU5BU5D_t74939D41FA6DAF2CD4F7462D8AD016D48B99B8B7* L_14 = V_1;
		int32_t L_15 = V_2;
		NullCheck(L_14);
		int32_t L_16 = (int32_t)((L_14)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_15)))->___key_2;
		EntryU5BU5D_t74939D41FA6DAF2CD4F7462D8AD016D48B99B8B7* L_17 = V_1;
		int32_t L_18 = V_2;
		NullCheck(L_17);
		Il2CppChar L_19 = (Il2CppChar)((L_17)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_18)))->___value_3;
		KeyValuePair_2_t25871D01DA51BBB8CEF1F27E727B5D3A545FD4EF L_20;
		memset((&L_20), 0, sizeof(L_20));
		KeyValuePair_2__ctor_mF66F658CB0111305E284C4FD64B6FC4AD62EB5E3((&L_20), L_16, L_19, il2cpp_rgctx_method(method->klass->rgctx_data, 37));
		NullCheck(L_11);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(L_13), (KeyValuePair_2_t25871D01DA51BBB8CEF1F27E727B5D3A545FD4EF)L_20);
	}

IL_0071:
	{
		int32_t L_21 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_21, 1));
	}

IL_0075:
	{
		int32_t L_22 = V_2;
		int32_t L_23 = V_0;
		if ((((int32_t)L_22) < ((int32_t)L_23)))
		{
			goto IL_0039;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tCC8CFFFAC493A1DF0C77EE34CD9E2F5A669A0D88 Dictionary_2_GetEnumerator_m6AB3286FC3E7FC8009B0AB9A451197694FAA20D6_gshared (Dictionary_2_t760E9A9490B53715AE11CA76450386C19A39A0C8* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_tCC8CFFFAC493A1DF0C77EE34CD9E2F5A669A0D88 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m06C5648CD941BE733FD754C942F410D9C85C3583((&L_0), __this, 2, il2cpp_rgctx_method(method->klass->rgctx_data, 39));
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m0D14665D7E84AE8738DB040BE859821315EC5CBF_gshared (Dictionary_2_t760E9A9490B53715AE11CA76450386C19A39A0C8* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_tCC8CFFFAC493A1DF0C77EE34CD9E2F5A669A0D88 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m06C5648CD941BE733FD754C942F410D9C85C3583((&L_0), __this, 2, il2cpp_rgctx_method(method->klass->rgctx_data, 39));
		Enumerator_tCC8CFFFAC493A1DF0C77EE34CD9E2F5A669A0D88 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 38), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_GetObjectData_m23E18C07EB51B0FD2C6FEDF9F5F447D11A9BB07B_gshared (Dictionary_2_t760E9A9490B53715AE11CA76450386C19A39A0C8* __this, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___0_info, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___1_context, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1);
		s_Il2CppMethodInitialized = true;
	}
	KeyValuePair_2U5BU5D_t185EF1C22979145FBA3233EFBDF557ECDC08113C* V_0 = NULL;
	RuntimeObject* G_B4_0 = NULL;
	String_t* G_B4_1 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B4_2 = NULL;
	RuntimeObject* G_B3_0 = NULL;
	String_t* G_B3_1 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B3_2 = NULL;
	String_t* G_B6_0 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B6_1 = NULL;
	String_t* G_B5_0 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B5_1 = NULL;
	int32_t G_B7_0 = 0;
	String_t* G_B7_1 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B7_2 = NULL;
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_0 = ___0_info;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)4, NULL);
	}

IL_0009:
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_1 = ___0_info;
		int32_t L_2 = (int32_t)__this->____version_5;
		NullCheck(L_1);
		SerializationInfo_AddValue_m9D6ADD10966D1FE8D19050F3A269747C23FE9FC4(L_1, _stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1, L_2, NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_3 = ___0_info;
		RuntimeObject* L_4 = (RuntimeObject*)__this->____comparer_6;
		RuntimeObject* L_5 = L_4;
		if (L_5)
		{
			G_B4_0 = L_5;
			G_B4_1 = _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9;
			G_B4_2 = L_3;
			goto IL_002f;
		}
		G_B3_0 = L_5;
		G_B3_1 = _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9;
		G_B3_2 = L_3;
	}
	{
		EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* L_6;
		L_6 = EqualityComparer_1_get_Default_mF70F6C11A35B420DFA4628EE316B087F2DCB280C_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		G_B4_0 = ((RuntimeObject*)(L_6));
		G_B4_1 = G_B3_1;
		G_B4_2 = G_B3_2;
	}

IL_002f:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 40)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		NullCheck(G_B4_2);
		SerializationInfo_AddValue_m1AD59BBF8C3129142943D3F298ADF09FF123C199(G_B4_2, G_B4_1, (RuntimeObject*)G_B4_0, L_8, NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_9 = ___0_info;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_10 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		if (!L_10)
		{
			G_B6_0 = _stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69;
			G_B6_1 = L_9;
			goto IL_0056;
		}
		G_B5_0 = _stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69;
		G_B5_1 = L_9;
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		NullCheck(L_11);
		G_B7_0 = ((int32_t)(((RuntimeArray*)L_11)->max_length));
		G_B7_1 = G_B5_0;
		G_B7_2 = G_B5_1;
		goto IL_0057;
	}

IL_0056:
	{
		G_B7_0 = 0;
		G_B7_1 = G_B6_0;
		G_B7_2 = G_B6_1;
	}

IL_0057:
	{
		NullCheck(G_B7_2);
		SerializationInfo_AddValue_m9D6ADD10966D1FE8D19050F3A269747C23FE9FC4(G_B7_2, G_B7_1, G_B7_0, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_12 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		if (!L_12)
		{
			goto IL_008e;
		}
	}
	{
		int32_t L_13;
		L_13 = Dictionary_2_get_Count_mF62BC02D0DF4F1E37D59F0D850131620B1FC4EEE(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 36));
		KeyValuePair_2U5BU5D_t185EF1C22979145FBA3233EFBDF557ECDC08113C* L_14 = (KeyValuePair_2U5BU5D_t185EF1C22979145FBA3233EFBDF557ECDC08113C*)(KeyValuePair_2U5BU5D_t185EF1C22979145FBA3233EFBDF557ECDC08113C*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 41), (uint32_t)L_13);
		V_0 = L_14;
		KeyValuePair_2U5BU5D_t185EF1C22979145FBA3233EFBDF557ECDC08113C* L_15 = V_0;
		Dictionary_2_CopyTo_m4D5CDF938A4188C7DC837512841EF76830A24F2A(__this, L_15, 0, il2cpp_rgctx_method(method->klass->rgctx_data, 42));
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_16 = ___0_info;
		KeyValuePair_2U5BU5D_t185EF1C22979145FBA3233EFBDF557ECDC08113C* L_17 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 43)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		NullCheck(L_16);
		SerializationInfo_AddValue_m1AD59BBF8C3129142943D3F298ADF09FF123C199(L_16, _stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A, (RuntimeObject*)L_17, L_19, NULL);
	}

IL_008e:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_FindEntry_m58E23BFC0BDBD1CC8AC1AD38C4A42190F024EF62_gshared (Dictionary_2_t760E9A9490B53715AE11CA76450386C19A39A0C8* __this, int32_t ___0_key, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_1 = NULL;
	EntryU5BU5D_t74939D41FA6DAF2CD4F7462D8AD016D48B99B8B7* V_2 = NULL;
	int32_t V_3 = 0;
	RuntimeObject* V_4 = NULL;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* V_7 = NULL;
	int32_t V_8 = 0;
	{
		goto IL_000e;
	}

IL_000e:
	{
		V_0 = (-1);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		V_1 = L_1;
		EntryU5BU5D_t74939D41FA6DAF2CD4F7462D8AD016D48B99B8B7* L_2 = (EntryU5BU5D_t74939D41FA6DAF2CD4F7462D8AD016D48B99B8B7*)__this->____entries_1;
		V_2 = L_2;
		V_3 = 0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = V_1;
		if (!L_3)
		{
			goto IL_0175;
		}
	}
	{
		RuntimeObject* L_4 = (RuntimeObject*)__this->____comparer_6;
		V_4 = L_4;
		RuntimeObject* L_5 = V_4;
		if (L_5)
		{
			goto IL_0110;
		}
	}
	{
		int32_t L_6;
		L_6 = Int32_GetHashCode_m253D60FF7527A483E91004B7A2366F13E225E295((&___0_key), il2cpp_rgctx_method(method->klass->rgctx_data, 44));
		V_5 = ((int32_t)(L_6&((int32_t)2147483647LL)));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_7 = V_1;
		int32_t L_8 = V_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = V_1;
		NullCheck(L_9);
		NullCheck(L_7);
		int32_t L_10 = ((int32_t)(L_8%((int32_t)(((RuntimeArray*)L_9)->max_length))));
		int32_t L_11 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_11, 1));
		il2cpp_codegen_initobj((&V_6), sizeof(int32_t));
	}

IL_0066:
	{
		int32_t L_13 = V_0;
		EntryU5BU5D_t74939D41FA6DAF2CD4F7462D8AD016D48B99B8B7* L_14 = V_2;
		NullCheck(L_14);
		if ((!(((uint32_t)L_13) < ((uint32_t)((int32_t)(((RuntimeArray*)L_14)->max_length))))))
		{
			goto IL_0175;
		}
	}
	{
		EntryU5BU5D_t74939D41FA6DAF2CD4F7462D8AD016D48B99B8B7* L_15 = V_2;
		int32_t L_16 = V_0;
		NullCheck(L_15);
		int32_t L_17 = (int32_t)((L_15)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_16)))->___hashCode_0;
		int32_t L_18 = V_5;
		if ((!(((uint32_t)L_17) == ((uint32_t)L_18))))
		{
			goto IL_009b;
		}
	}
	{
		EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* L_19;
		L_19 = EqualityComparer_1_get_Default_mF70F6C11A35B420DFA4628EE316B087F2DCB280C_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		EntryU5BU5D_t74939D41FA6DAF2CD4F7462D8AD016D48B99B8B7* L_20 = V_2;
		int32_t L_21 = V_0;
		NullCheck(L_20);
		int32_t L_22 = (int32_t)((L_20)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_21)))->___key_2;
		int32_t L_23 = ___0_key;
		NullCheck(L_19);
		bool L_24;
		L_24 = VirtualFuncInvoker2< bool, int32_t, int32_t >::Invoke(8, L_19, L_22, L_23);
		if (L_24)
		{
			goto IL_0175;
		}
	}

IL_009b:
	{
		EntryU5BU5D_t74939D41FA6DAF2CD4F7462D8AD016D48B99B8B7* L_25 = V_2;
		int32_t L_26 = V_0;
		NullCheck(L_25);
		int32_t L_27 = (int32_t)((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___next_1;
		V_0 = L_27;
		int32_t L_28 = V_3;
		EntryU5BU5D_t74939D41FA6DAF2CD4F7462D8AD016D48B99B8B7* L_29 = V_2;
		NullCheck(L_29);
		if ((((int32_t)L_28) < ((int32_t)((int32_t)(((RuntimeArray*)L_29)->max_length)))))
		{
			goto IL_00b3;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_00b3:
	{
		int32_t L_30 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_30, 1));
		goto IL_0066;
	}

IL_0110:
	{
		RuntimeObject* L_31 = V_4;
		int32_t L_32 = ___0_key;
		NullCheck(L_31);
		int32_t L_33;
		L_33 = InterfaceFuncInvoker1< int32_t, int32_t >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_31, L_32);
		V_8 = ((int32_t)(L_33&((int32_t)2147483647LL)));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_34 = V_1;
		int32_t L_35 = V_8;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_36 = V_1;
		NullCheck(L_36);
		NullCheck(L_34);
		int32_t L_37 = ((int32_t)(L_35%((int32_t)(((RuntimeArray*)L_36)->max_length))));
		int32_t L_38 = (L_34)->GetAt(static_cast<il2cpp_array_size_t>(L_37));
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_38, 1));
	}

IL_012b:
	{
		int32_t L_39 = V_0;
		EntryU5BU5D_t74939D41FA6DAF2CD4F7462D8AD016D48B99B8B7* L_40 = V_2;
		NullCheck(L_40);
		if ((!(((uint32_t)L_39) < ((uint32_t)((int32_t)(((RuntimeArray*)L_40)->max_length))))))
		{
			goto IL_0175;
		}
	}
	{
		EntryU5BU5D_t74939D41FA6DAF2CD4F7462D8AD016D48B99B8B7* L_41 = V_2;
		int32_t L_42 = V_0;
		NullCheck(L_41);
		int32_t L_43 = (int32_t)((L_41)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_42)))->___hashCode_0;
		int32_t L_44 = V_8;
		if ((!(((uint32_t)L_43) == ((uint32_t)L_44))))
		{
			goto IL_0157;
		}
	}
	{
		RuntimeObject* L_45 = V_4;
		EntryU5BU5D_t74939D41FA6DAF2CD4F7462D8AD016D48B99B8B7* L_46 = V_2;
		int32_t L_47 = V_0;
		NullCheck(L_46);
		int32_t L_48 = (int32_t)((L_46)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_47)))->___key_2;
		int32_t L_49 = ___0_key;
		NullCheck(L_45);
		bool L_50;
		L_50 = InterfaceFuncInvoker2< bool, int32_t, int32_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_45, L_48, L_49);
		if (L_50)
		{
			goto IL_0175;
		}
	}

IL_0157:
	{
		EntryU5BU5D_t74939D41FA6DAF2CD4F7462D8AD016D48B99B8B7* L_51 = V_2;
		int32_t L_52 = V_0;
		NullCheck(L_51);
		int32_t L_53 = (int32_t)((L_51)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_52)))->___next_1;
		V_0 = L_53;
		int32_t L_54 = V_3;
		EntryU5BU5D_t74939D41FA6DAF2CD4F7462D8AD016D48B99B8B7* L_55 = V_2;
		NullCheck(L_55);
		if ((((int32_t)L_54) < ((int32_t)((int32_t)(((RuntimeArray*)L_55)->max_length)))))
		{
			goto IL_016f;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_016f:
	{
		int32_t L_56 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_56, 1));
		goto IL_012b;
	}

IL_0175:
	{
		int32_t L_57 = V_0;
		return L_57;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_Initialize_m6E2468392BEC356F498A9CC84BE3FEBCC80DBF0C_gshared (Dictionary_2_t760E9A9490B53715AE11CA76450386C19A39A0C8* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___0_capacity;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = HashHelpers_GetPrime_m5B7AE10D5E76267579296C8F2CB8464AC2DE8472(L_0, NULL);
		V_0 = L_1;
		__this->____freeList_3 = (-1);
		int32_t L_2 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_2);
		__this->____buckets_0 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets_0), (void*)L_3);
		int32_t L_4 = V_0;
		EntryU5BU5D_t74939D41FA6DAF2CD4F7462D8AD016D48B99B8B7* L_5 = (EntryU5BU5D_t74939D41FA6DAF2CD4F7462D8AD016D48B99B8B7*)(EntryU5BU5D_t74939D41FA6DAF2CD4F7462D8AD016D48B99B8B7*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 48), (uint32_t)L_4);
		__this->____entries_1 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____entries_1), (void*)L_5);
		int32_t L_6 = V_0;
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryInsert_mE950A0E7B2E2D06C4599AB4713A970E9CF17C711_gshared (Dictionary_2_t760E9A9490B53715AE11CA76450386C19A39A0C8* __this, int32_t ___0_key, Il2CppChar ___1_value, uint8_t ___2_behavior, const RuntimeMethod* method) 
{
	EntryU5BU5D_t74939D41FA6DAF2CD4F7462D8AD016D48B99B8B7* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t* V_4 = NULL;
	int32_t V_5 = 0;
	bool V_6 = false;
	bool V_7 = false;
	int32_t V_8 = 0;
	int32_t* V_9 = NULL;
	Entry_t5A1DD43C826878A3853C7DF32E971C3D19805227* V_10 = NULL;
	int32_t V_11 = 0;
	EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* V_12 = NULL;
	int32_t V_13 = 0;
	int32_t G_B7_0 = 0;
	int32_t* G_B51_0 = NULL;
	{
		goto IL_000e;
	}

IL_000e:
	{
		int32_t L_1 = (int32_t)__this->____version_5;
		__this->____version_5 = ((int32_t)il2cpp_codegen_add(L_1, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		if (L_2)
		{
			goto IL_002c;
		}
	}
	{
		int32_t L_3;
		L_3 = Dictionary_2_Initialize_m6E2468392BEC356F498A9CC84BE3FEBCC80DBF0C(__this, 0, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
	}

IL_002c:
	{
		EntryU5BU5D_t74939D41FA6DAF2CD4F7462D8AD016D48B99B8B7* L_4 = (EntryU5BU5D_t74939D41FA6DAF2CD4F7462D8AD016D48B99B8B7*)__this->____entries_1;
		V_0 = L_4;
		RuntimeObject* L_5 = (RuntimeObject*)__this->____comparer_6;
		V_1 = L_5;
		RuntimeObject* L_6 = V_1;
		if (!L_6)
		{
			goto IL_0046;
		}
	}
	{
		RuntimeObject* L_7 = V_1;
		int32_t L_8 = ___0_key;
		NullCheck(L_7);
		int32_t L_9;
		L_9 = InterfaceFuncInvoker1< int32_t, int32_t >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_7, L_8);
		G_B7_0 = L_9;
		goto IL_0053;
	}

IL_0046:
	{
		int32_t L_10;
		L_10 = Int32_GetHashCode_m253D60FF7527A483E91004B7A2366F13E225E295((&___0_key), il2cpp_rgctx_method(method->klass->rgctx_data, 44));
		G_B7_0 = L_10;
	}

IL_0053:
	{
		V_2 = ((int32_t)(G_B7_0&((int32_t)2147483647LL)));
		V_3 = 0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		int32_t L_12 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_13 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		NullCheck(L_13);
		NullCheck(L_11);
		V_4 = ((L_11)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_12%((int32_t)(((RuntimeArray*)L_13)->max_length)))))));
		int32_t* L_14 = V_4;
		int32_t L_15 = *((int32_t*)L_14);
		V_5 = ((int32_t)il2cpp_codegen_subtract(L_15, 1));
		RuntimeObject* L_16 = V_1;
		if (L_16)
		{
			goto IL_0187;
		}
	}
	{
		il2cpp_codegen_initobj((&V_11), sizeof(int32_t));
	}

IL_0091:
	{
		int32_t L_18 = V_5;
		EntryU5BU5D_t74939D41FA6DAF2CD4F7462D8AD016D48B99B8B7* L_19 = V_0;
		NullCheck(L_19);
		if ((!(((uint32_t)L_18) < ((uint32_t)((int32_t)(((RuntimeArray*)L_19)->max_length))))))
		{
			goto IL_01f9;
		}
	}
	{
		EntryU5BU5D_t74939D41FA6DAF2CD4F7462D8AD016D48B99B8B7* L_20 = V_0;
		int32_t L_21 = V_5;
		NullCheck(L_20);
		int32_t L_22 = (int32_t)((L_20)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_21)))->___hashCode_0;
		int32_t L_23 = V_2;
		if ((!(((uint32_t)L_22) == ((uint32_t)L_23))))
		{
			goto IL_00ea;
		}
	}
	{
		EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* L_24;
		L_24 = EqualityComparer_1_get_Default_mF70F6C11A35B420DFA4628EE316B087F2DCB280C_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		EntryU5BU5D_t74939D41FA6DAF2CD4F7462D8AD016D48B99B8B7* L_25 = V_0;
		int32_t L_26 = V_5;
		NullCheck(L_25);
		int32_t L_27 = (int32_t)((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___key_2;
		int32_t L_28 = ___0_key;
		NullCheck(L_24);
		bool L_29;
		L_29 = VirtualFuncInvoker2< bool, int32_t, int32_t >::Invoke(8, L_24, L_27, L_28);
		if (!L_29)
		{
			goto IL_00ea;
		}
	}
	{
		uint8_t L_30 = ___2_behavior;
		if ((!(((uint32_t)L_30) == ((uint32_t)1))))
		{
			goto IL_00d9;
		}
	}
	{
		EntryU5BU5D_t74939D41FA6DAF2CD4F7462D8AD016D48B99B8B7* L_31 = V_0;
		int32_t L_32 = V_5;
		NullCheck(L_31);
		Il2CppChar L_33 = ___1_value;
		((L_31)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_32)))->___value_3 = L_33;
		return (bool)1;
	}

IL_00d9:
	{
		uint8_t L_34 = ___2_behavior;
		if ((!(((uint32_t)L_34) == ((uint32_t)2))))
		{
			goto IL_00e8;
		}
	}
	{
		int32_t L_35 = ___0_key;
		int32_t L_36 = L_35;
		RuntimeObject* L_37 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14), &L_36);
		ThrowHelper_ThrowAddingDuplicateWithKeyArgumentException_m013C856C16A63018719A6096727CB43E1918CDE5(L_37, NULL);
	}

IL_00e8:
	{
		return (bool)0;
	}

IL_00ea:
	{
		EntryU5BU5D_t74939D41FA6DAF2CD4F7462D8AD016D48B99B8B7* L_38 = V_0;
		int32_t L_39 = V_5;
		NullCheck(L_38);
		int32_t L_40 = (int32_t)((L_38)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_39)))->___next_1;
		V_5 = L_40;
		int32_t L_41 = V_3;
		EntryU5BU5D_t74939D41FA6DAF2CD4F7462D8AD016D48B99B8B7* L_42 = V_0;
		NullCheck(L_42);
		if ((((int32_t)L_41) < ((int32_t)((int32_t)(((RuntimeArray*)L_42)->max_length)))))
		{
			goto IL_0104;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_0104:
	{
		int32_t L_43 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_43, 1));
		goto IL_0091;
	}

IL_0187:
	{
		int32_t L_44 = V_5;
		EntryU5BU5D_t74939D41FA6DAF2CD4F7462D8AD016D48B99B8B7* L_45 = V_0;
		NullCheck(L_45);
		if ((!(((uint32_t)L_44) < ((uint32_t)((int32_t)(((RuntimeArray*)L_45)->max_length))))))
		{
			goto IL_01f9;
		}
	}
	{
		EntryU5BU5D_t74939D41FA6DAF2CD4F7462D8AD016D48B99B8B7* L_46 = V_0;
		int32_t L_47 = V_5;
		NullCheck(L_46);
		int32_t L_48 = (int32_t)((L_46)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_47)))->___hashCode_0;
		int32_t L_49 = V_2;
		if ((!(((uint32_t)L_48) == ((uint32_t)L_49))))
		{
			goto IL_01d9;
		}
	}
	{
		RuntimeObject* L_50 = V_1;
		EntryU5BU5D_t74939D41FA6DAF2CD4F7462D8AD016D48B99B8B7* L_51 = V_0;
		int32_t L_52 = V_5;
		NullCheck(L_51);
		int32_t L_53 = (int32_t)((L_51)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_52)))->___key_2;
		int32_t L_54 = ___0_key;
		NullCheck(L_50);
		bool L_55;
		L_55 = InterfaceFuncInvoker2< bool, int32_t, int32_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_50, L_53, L_54);
		if (!L_55)
		{
			goto IL_01d9;
		}
	}
	{
		uint8_t L_56 = ___2_behavior;
		if ((!(((uint32_t)L_56) == ((uint32_t)1))))
		{
			goto IL_01c8;
		}
	}
	{
		EntryU5BU5D_t74939D41FA6DAF2CD4F7462D8AD016D48B99B8B7* L_57 = V_0;
		int32_t L_58 = V_5;
		NullCheck(L_57);
		Il2CppChar L_59 = ___1_value;
		((L_57)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_58)))->___value_3 = L_59;
		return (bool)1;
	}

IL_01c8:
	{
		uint8_t L_60 = ___2_behavior;
		if ((!(((uint32_t)L_60) == ((uint32_t)2))))
		{
			goto IL_01d7;
		}
	}
	{
		int32_t L_61 = ___0_key;
		int32_t L_62 = L_61;
		RuntimeObject* L_63 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14), &L_62);
		ThrowHelper_ThrowAddingDuplicateWithKeyArgumentException_m013C856C16A63018719A6096727CB43E1918CDE5(L_63, NULL);
	}

IL_01d7:
	{
		return (bool)0;
	}

IL_01d9:
	{
		EntryU5BU5D_t74939D41FA6DAF2CD4F7462D8AD016D48B99B8B7* L_64 = V_0;
		int32_t L_65 = V_5;
		NullCheck(L_64);
		int32_t L_66 = (int32_t)((L_64)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_65)))->___next_1;
		V_5 = L_66;
		int32_t L_67 = V_3;
		EntryU5BU5D_t74939D41FA6DAF2CD4F7462D8AD016D48B99B8B7* L_68 = V_0;
		NullCheck(L_68);
		if ((((int32_t)L_67) < ((int32_t)((int32_t)(((RuntimeArray*)L_68)->max_length)))))
		{
			goto IL_01f3;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_01f3:
	{
		int32_t L_69 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_69, 1));
		goto IL_0187;
	}

IL_01f9:
	{
		V_6 = (bool)0;
		V_7 = (bool)0;
		int32_t L_70 = (int32_t)__this->____freeCount_4;
		if ((((int32_t)L_70) <= ((int32_t)0)))
		{
			goto IL_0223;
		}
	}
	{
		int32_t L_71 = (int32_t)__this->____freeList_3;
		V_8 = L_71;
		V_7 = (bool)1;
		int32_t L_72 = (int32_t)__this->____freeCount_4;
		__this->____freeCount_4 = ((int32_t)il2cpp_codegen_subtract(L_72, 1));
		goto IL_0250;
	}

IL_0223:
	{
		int32_t L_73 = (int32_t)__this->____count_2;
		V_13 = L_73;
		int32_t L_74 = V_13;
		EntryU5BU5D_t74939D41FA6DAF2CD4F7462D8AD016D48B99B8B7* L_75 = V_0;
		NullCheck(L_75);
		if ((!(((uint32_t)L_74) == ((uint32_t)((int32_t)(((RuntimeArray*)L_75)->max_length))))))
		{
			goto IL_023b;
		}
	}
	{
		Dictionary_2_Resize_mA87ED035CFF022A4C8B2B4E6D720EEB965ACE893(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 49));
		V_6 = (bool)1;
	}

IL_023b:
	{
		int32_t L_76 = V_13;
		V_8 = L_76;
		int32_t L_77 = V_13;
		__this->____count_2 = ((int32_t)il2cpp_codegen_add(L_77, 1));
		EntryU5BU5D_t74939D41FA6DAF2CD4F7462D8AD016D48B99B8B7* L_78 = (EntryU5BU5D_t74939D41FA6DAF2CD4F7462D8AD016D48B99B8B7*)__this->____entries_1;
		V_0 = L_78;
	}

IL_0250:
	{
		bool L_79 = V_6;
		if (L_79)
		{
			goto IL_0258;
		}
	}
	{
		int32_t* L_80 = V_4;
		G_B51_0 = L_80;
		goto IL_026d;
	}

IL_0258:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_81 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		int32_t L_82 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_83 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		NullCheck(L_83);
		NullCheck(L_81);
		G_B51_0 = ((L_81)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_82%((int32_t)(((RuntimeArray*)L_83)->max_length)))))));
	}

IL_026d:
	{
		V_9 = G_B51_0;
		EntryU5BU5D_t74939D41FA6DAF2CD4F7462D8AD016D48B99B8B7* L_84 = V_0;
		int32_t L_85 = V_8;
		NullCheck(L_84);
		V_10 = ((L_84)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_85)));
		bool L_86 = V_7;
		if (!L_86)
		{
			goto IL_028a;
		}
	}
	{
		Entry_t5A1DD43C826878A3853C7DF32E971C3D19805227* L_87 = V_10;
		int32_t L_88 = (int32_t)L_87->___next_1;
		__this->____freeList_3 = L_88;
	}

IL_028a:
	{
		Entry_t5A1DD43C826878A3853C7DF32E971C3D19805227* L_89 = V_10;
		int32_t L_90 = V_2;
		L_89->___hashCode_0 = L_90;
		Entry_t5A1DD43C826878A3853C7DF32E971C3D19805227* L_91 = V_10;
		int32_t* L_92 = V_9;
		int32_t L_93 = *((int32_t*)L_92);
		L_91->___next_1 = ((int32_t)il2cpp_codegen_subtract(L_93, 1));
		Entry_t5A1DD43C826878A3853C7DF32E971C3D19805227* L_94 = V_10;
		int32_t L_95 = ___0_key;
		L_94->___key_2 = L_95;
		Entry_t5A1DD43C826878A3853C7DF32E971C3D19805227* L_96 = V_10;
		Il2CppChar L_97 = ___1_value;
		L_96->___value_3 = L_97;
		int32_t* L_98 = V_9;
		int32_t L_99 = V_8;
		*((int32_t*)L_98) = (int32_t)((int32_t)il2cpp_codegen_add(L_99, 1));
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_OnDeserialization_mEF8ECAF59AA42CE3D3A269911284B63EF9DFF37B_gshared (Dictionary_2_t760E9A9490B53715AE11CA76450386C19A39A0C8* __this, RuntimeObject* ___0_sender, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConditionalWeakTable_2_Remove_mEA61545EA43662F3718895F4E435A1F3EFB9756E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConditionalWeakTable_2_TryGetValue_m8AB467BA44D1FF9EBDB9735CED88B0D67AC6403F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1);
		s_Il2CppMethodInitialized = true;
	}
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	KeyValuePair_2U5BU5D_t185EF1C22979145FBA3233EFBDF557ECDC08113C* V_3 = NULL;
	int32_t V_4 = 0;
	{
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* L_0;
		L_0 = HashHelpers_get_SerializationInfoTable_m8C17D5483B39B68897AEFFD14A9E139AF858222F(NULL);
		NullCheck(L_0);
		bool L_1;
		L_1 = ConditionalWeakTable_2_TryGetValue_m8AB467BA44D1FF9EBDB9735CED88B0D67AC6403F(L_0, (RuntimeObject*)__this, (&V_0), ConditionalWeakTable_2_TryGetValue_m8AB467BA44D1FF9EBDB9735CED88B0D67AC6403F_RuntimeMethod_var);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_2 = V_0;
		if (L_2)
		{
			goto IL_0012;
		}
	}
	{
		return;
	}

IL_0012:
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_3 = V_0;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = SerializationInfo_GetInt32_m7731402825C7FC8D0673F7610D555615F95E4FB5(L_3, _stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1, NULL);
		V_1 = L_4;
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_5 = V_0;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = SerializationInfo_GetInt32_m7731402825C7FC8D0673F7610D555615F95E4FB5(L_5, _stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69, NULL);
		V_2 = L_6;
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_7 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 40)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		NullCheck(L_7);
		RuntimeObject* L_10;
		L_10 = SerializationInfo_GetValue_mE6091C2E906E113455D05E734C86F43B8E1D1034(L_7, _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9, L_9, NULL);
		__this->____comparer_6 = ((RuntimeObject*)Castclass((RuntimeObject*)L_10, il2cpp_rgctx_data(method->klass->rgctx_data, 1)));
		Il2CppCodeGenWriteBarrier((void**)(&__this->____comparer_6), (void*)((RuntimeObject*)Castclass((RuntimeObject*)L_10, il2cpp_rgctx_data(method->klass->rgctx_data, 1))));
		int32_t L_11 = V_2;
		if (!L_11)
		{
			goto IL_00c9;
		}
	}
	{
		int32_t L_12 = V_2;
		int32_t L_13;
		L_13 = Dictionary_2_Initialize_m6E2468392BEC356F498A9CC84BE3FEBCC80DBF0C(__this, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_14 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_15 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 43)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_16;
		L_16 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_15, NULL);
		NullCheck(L_14);
		RuntimeObject* L_17;
		L_17 = SerializationInfo_GetValue_mE6091C2E906E113455D05E734C86F43B8E1D1034(L_14, _stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A, L_16, NULL);
		V_3 = ((KeyValuePair_2U5BU5D_t185EF1C22979145FBA3233EFBDF557ECDC08113C*)Castclass((RuntimeObject*)L_17, il2cpp_rgctx_data(method->klass->rgctx_data, 35)));
		KeyValuePair_2U5BU5D_t185EF1C22979145FBA3233EFBDF557ECDC08113C* L_18 = V_3;
		if (L_18)
		{
			goto IL_007a;
		}
	}
	{
		ThrowHelper_ThrowSerializationException_m03BE2B48CD3617C32FBCEE16030F7C5563E04E16((int32_t)((int32_t)16), NULL);
	}

IL_007a:
	{
		V_4 = 0;
		goto IL_00c0;
	}

IL_007f:
	{
		KeyValuePair_2U5BU5D_t185EF1C22979145FBA3233EFBDF557ECDC08113C* L_19 = V_3;
		int32_t L_20 = V_4;
		NullCheck(L_19);
		int32_t L_21;
		L_21 = KeyValuePair_2_get_Key_m8862066C052557662F7CFB385CBA6E42C8C92454_inline(((L_19)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_20))), il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		goto IL_009a;
	}

IL_009a:
	{
		KeyValuePair_2U5BU5D_t185EF1C22979145FBA3233EFBDF557ECDC08113C* L_22 = V_3;
		int32_t L_23 = V_4;
		NullCheck(L_22);
		int32_t L_24;
		L_24 = KeyValuePair_2_get_Key_m8862066C052557662F7CFB385CBA6E42C8C92454_inline(((L_22)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_23))), il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		KeyValuePair_2U5BU5D_t185EF1C22979145FBA3233EFBDF557ECDC08113C* L_25 = V_3;
		int32_t L_26 = V_4;
		NullCheck(L_25);
		Il2CppChar L_27;
		L_27 = KeyValuePair_2_get_Value_m6E082F30B5B753C3131FCA1A488A0963333AFD04_inline(((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26))), il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		Dictionary_2_Add_m65C453F1100868C469A8E4794AE6DCD76F6AA1A4(__this, L_24, L_27, il2cpp_rgctx_method(method->klass->rgctx_data, 16));
		int32_t L_28 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_28, 1));
	}

IL_00c0:
	{
		int32_t L_29 = V_4;
		KeyValuePair_2U5BU5D_t185EF1C22979145FBA3233EFBDF557ECDC08113C* L_30 = V_3;
		NullCheck(L_30);
		if ((((int32_t)L_29) < ((int32_t)((int32_t)(((RuntimeArray*)L_30)->max_length)))))
		{
			goto IL_007f;
		}
	}
	{
		goto IL_00d0;
	}

IL_00c9:
	{
		__this->____buckets_0 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets_0), (void*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL);
	}

IL_00d0:
	{
		int32_t L_31 = V_1;
		__this->____version_5 = L_31;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* L_32;
		L_32 = HashHelpers_get_SerializationInfoTable_m8C17D5483B39B68897AEFFD14A9E139AF858222F(NULL);
		NullCheck(L_32);
		bool L_33;
		L_33 = ConditionalWeakTable_2_Remove_mEA61545EA43662F3718895F4E435A1F3EFB9756E(L_32, (RuntimeObject*)__this, ConditionalWeakTable_2_Remove_mEA61545EA43662F3718895F4E435A1F3EFB9756E_RuntimeMethod_var);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_mA87ED035CFF022A4C8B2B4E6D720EEB965ACE893_gshared (Dictionary_2_t760E9A9490B53715AE11CA76450386C19A39A0C8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = (int32_t)__this->____count_2;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = HashHelpers_ExpandPrime_m9A35EC171AA0EA16F7C9F71EE6FAD5A82565ADB9(L_0, NULL);
		Dictionary_2_Resize_mAA34C20A111880E1891639C7022D73FED4DCE18B(__this, L_1, (bool)0, il2cpp_rgctx_method(method->klass->rgctx_data, 51));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_mAA34C20A111880E1891639C7022D73FED4DCE18B_gshared (Dictionary_2_t760E9A9490B53715AE11CA76450386C19A39A0C8* __this, int32_t ___0_newSize, bool ___1_forceNewHashCodes, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_0 = NULL;
	EntryU5BU5D_t74939D41FA6DAF2CD4F7462D8AD016D48B99B8B7* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	{
		int32_t L_0 = ___0_newSize;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_0);
		V_0 = L_1;
		int32_t L_2 = ___0_newSize;
		EntryU5BU5D_t74939D41FA6DAF2CD4F7462D8AD016D48B99B8B7* L_3 = (EntryU5BU5D_t74939D41FA6DAF2CD4F7462D8AD016D48B99B8B7*)(EntryU5BU5D_t74939D41FA6DAF2CD4F7462D8AD016D48B99B8B7*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 48), (uint32_t)L_2);
		V_1 = L_3;
		int32_t L_4 = (int32_t)__this->____count_2;
		V_2 = L_4;
		EntryU5BU5D_t74939D41FA6DAF2CD4F7462D8AD016D48B99B8B7* L_5 = (EntryU5BU5D_t74939D41FA6DAF2CD4F7462D8AD016D48B99B8B7*)__this->____entries_1;
		EntryU5BU5D_t74939D41FA6DAF2CD4F7462D8AD016D48B99B8B7* L_6 = V_1;
		int32_t L_7 = V_2;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_5, 0, (RuntimeArray*)L_6, 0, L_7, NULL);
		il2cpp_codegen_initobj((&V_3), sizeof(int32_t));
		int32_t L_8 = V_3;
		bool L_9 = ___1_forceNewHashCodes;
		if (!((int32_t)((int32_t)false&(int32_t)L_9)))
		{
			goto IL_0084;
		}
	}
	{
		V_4 = 0;
		goto IL_007f;
	}

IL_003e:
	{
		EntryU5BU5D_t74939D41FA6DAF2CD4F7462D8AD016D48B99B8B7* L_10 = V_1;
		int32_t L_11 = V_4;
		NullCheck(L_10);
		int32_t L_12 = (int32_t)((L_10)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_11)))->___hashCode_0;
		if ((((int32_t)L_12) < ((int32_t)0)))
		{
			goto IL_0079;
		}
	}
	{
		EntryU5BU5D_t74939D41FA6DAF2CD4F7462D8AD016D48B99B8B7* L_13 = V_1;
		int32_t L_14 = V_4;
		NullCheck(L_13);
		EntryU5BU5D_t74939D41FA6DAF2CD4F7462D8AD016D48B99B8B7* L_15 = V_1;
		int32_t L_16 = V_4;
		NullCheck(L_15);
		int32_t* L_17 = (int32_t*)(&((L_15)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_16)))->___key_2);
		int32_t L_18;
		L_18 = Int32_GetHashCode_m253D60FF7527A483E91004B7A2366F13E225E295(L_17, il2cpp_rgctx_method(method->klass->rgctx_data, 44));
		((L_13)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_14)))->___hashCode_0 = ((int32_t)(L_18&((int32_t)2147483647LL)));
	}

IL_0079:
	{
		int32_t L_19 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_19, 1));
	}

IL_007f:
	{
		int32_t L_20 = V_4;
		int32_t L_21 = V_2;
		if ((((int32_t)L_20) < ((int32_t)L_21)))
		{
			goto IL_003e;
		}
	}

IL_0084:
	{
		V_5 = 0;
		goto IL_00cb;
	}

IL_0089:
	{
		EntryU5BU5D_t74939D41FA6DAF2CD4F7462D8AD016D48B99B8B7* L_22 = V_1;
		int32_t L_23 = V_5;
		NullCheck(L_22);
		int32_t L_24 = (int32_t)((L_22)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_23)))->___hashCode_0;
		if ((((int32_t)L_24) < ((int32_t)0)))
		{
			goto IL_00c5;
		}
	}
	{
		EntryU5BU5D_t74939D41FA6DAF2CD4F7462D8AD016D48B99B8B7* L_25 = V_1;
		int32_t L_26 = V_5;
		NullCheck(L_25);
		int32_t L_27 = (int32_t)((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___hashCode_0;
		int32_t L_28 = ___0_newSize;
		V_6 = ((int32_t)(L_27%L_28));
		EntryU5BU5D_t74939D41FA6DAF2CD4F7462D8AD016D48B99B8B7* L_29 = V_1;
		int32_t L_30 = V_5;
		NullCheck(L_29);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_31 = V_0;
		int32_t L_32 = V_6;
		NullCheck(L_31);
		int32_t L_33 = L_32;
		int32_t L_34 = (L_31)->GetAt(static_cast<il2cpp_array_size_t>(L_33));
		((L_29)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_30)))->___next_1 = ((int32_t)il2cpp_codegen_subtract(L_34, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_35 = V_0;
		int32_t L_36 = V_6;
		int32_t L_37 = V_5;
		NullCheck(L_35);
		(L_35)->SetAt(static_cast<il2cpp_array_size_t>(L_36), (int32_t)((int32_t)il2cpp_codegen_add(L_37, 1)));
	}

IL_00c5:
	{
		int32_t L_38 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_38, 1));
	}

IL_00cb:
	{
		int32_t L_39 = V_5;
		int32_t L_40 = V_2;
		if ((((int32_t)L_39) < ((int32_t)L_40)))
		{
			goto IL_0089;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_41 = V_0;
		__this->____buckets_0 = L_41;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets_0), (void*)L_41);
		EntryU5BU5D_t74939D41FA6DAF2CD4F7462D8AD016D48B99B8B7* L_42 = V_1;
		__this->____entries_1 = L_42;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____entries_1), (void*)L_42);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_m3AF2AA4CD90907190268440760E0B2BBF55FAD21_gshared (Dictionary_2_t760E9A9490B53715AE11CA76450386C19A39A0C8* __this, int32_t ___0_key, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	Entry_t5A1DD43C826878A3853C7DF32E971C3D19805227* V_4 = NULL;
	RuntimeObject* G_B5_0 = NULL;
	RuntimeObject* G_B4_0 = NULL;
	int32_t G_B6_0 = 0;
	RuntimeObject* G_B10_0 = NULL;
	RuntimeObject* G_B9_0 = NULL;
	bool G_B11_0 = false;
	{
		goto IL_000e;
	}

IL_000e:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		if (!L_1)
		{
			goto IL_0149;
		}
	}
	{
		RuntimeObject* L_2 = (RuntimeObject*)__this->____comparer_6;
		RuntimeObject* L_3 = L_2;
		if (L_3)
		{
			G_B5_0 = L_3;
			goto IL_0032;
		}
		G_B4_0 = L_3;
	}
	{
		int32_t L_4;
		L_4 = Int32_GetHashCode_m253D60FF7527A483E91004B7A2366F13E225E295((&___0_key), il2cpp_rgctx_method(method->klass->rgctx_data, 44));
		G_B6_0 = L_4;
		goto IL_0038;
	}

IL_0032:
	{
		int32_t L_5 = ___0_key;
		NullCheck(G_B5_0);
		int32_t L_6;
		L_6 = InterfaceFuncInvoker1< int32_t, int32_t >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 1), G_B5_0, L_5);
		G_B6_0 = L_6;
	}

IL_0038:
	{
		V_0 = ((int32_t)(G_B6_0&((int32_t)2147483647LL)));
		int32_t L_7 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_8 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		NullCheck(L_8);
		V_1 = ((int32_t)(L_7%((int32_t)(((RuntimeArray*)L_8)->max_length))));
		V_2 = (-1);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		int32_t L_10 = V_1;
		NullCheck(L_9);
		int32_t L_11 = L_10;
		int32_t L_12 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		V_3 = ((int32_t)il2cpp_codegen_subtract(L_12, 1));
		goto IL_0142;
	}

IL_005c:
	{
		EntryU5BU5D_t74939D41FA6DAF2CD4F7462D8AD016D48B99B8B7* L_13 = (EntryU5BU5D_t74939D41FA6DAF2CD4F7462D8AD016D48B99B8B7*)__this->____entries_1;
		int32_t L_14 = V_3;
		NullCheck(L_13);
		V_4 = ((L_13)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_14)));
		Entry_t5A1DD43C826878A3853C7DF32E971C3D19805227* L_15 = V_4;
		int32_t L_16 = (int32_t)L_15->___hashCode_0;
		int32_t L_17 = V_0;
		if ((!(((uint32_t)L_16) == ((uint32_t)L_17))))
		{
			goto IL_0138;
		}
	}
	{
		RuntimeObject* L_18 = (RuntimeObject*)__this->____comparer_6;
		RuntimeObject* L_19 = L_18;
		if (L_19)
		{
			G_B10_0 = L_19;
			goto IL_0095;
		}
		G_B9_0 = L_19;
	}
	{
		EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* L_20;
		L_20 = EqualityComparer_1_get_Default_mF70F6C11A35B420DFA4628EE316B087F2DCB280C_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		Entry_t5A1DD43C826878A3853C7DF32E971C3D19805227* L_21 = V_4;
		int32_t L_22 = (int32_t)L_21->___key_2;
		int32_t L_23 = ___0_key;
		NullCheck(L_20);
		bool L_24;
		L_24 = VirtualFuncInvoker2< bool, int32_t, int32_t >::Invoke(8, L_20, L_22, L_23);
		G_B11_0 = L_24;
		goto IL_00a2;
	}

IL_0095:
	{
		Entry_t5A1DD43C826878A3853C7DF32E971C3D19805227* L_25 = V_4;
		int32_t L_26 = (int32_t)L_25->___key_2;
		int32_t L_27 = ___0_key;
		NullCheck(G_B10_0);
		bool L_28;
		L_28 = InterfaceFuncInvoker2< bool, int32_t, int32_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 1), G_B10_0, L_26, L_27);
		G_B11_0 = L_28;
	}

IL_00a2:
	{
		if (!G_B11_0)
		{
			goto IL_0138;
		}
	}
	{
		int32_t L_29 = V_2;
		if ((((int32_t)L_29) >= ((int32_t)0)))
		{
			goto IL_00be;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_30 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		int32_t L_31 = V_1;
		Entry_t5A1DD43C826878A3853C7DF32E971C3D19805227* L_32 = V_4;
		int32_t L_33 = (int32_t)L_32->___next_1;
		NullCheck(L_30);
		(L_30)->SetAt(static_cast<il2cpp_array_size_t>(L_31), (int32_t)((int32_t)il2cpp_codegen_add(L_33, 1)));
		goto IL_00d6;
	}

IL_00be:
	{
		EntryU5BU5D_t74939D41FA6DAF2CD4F7462D8AD016D48B99B8B7* L_34 = (EntryU5BU5D_t74939D41FA6DAF2CD4F7462D8AD016D48B99B8B7*)__this->____entries_1;
		int32_t L_35 = V_2;
		NullCheck(L_34);
		Entry_t5A1DD43C826878A3853C7DF32E971C3D19805227* L_36 = V_4;
		int32_t L_37 = (int32_t)L_36->___next_1;
		((L_34)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_35)))->___next_1 = L_37;
	}

IL_00d6:
	{
		Entry_t5A1DD43C826878A3853C7DF32E971C3D19805227* L_38 = V_4;
		L_38->___hashCode_0 = (-1);
		Entry_t5A1DD43C826878A3853C7DF32E971C3D19805227* L_39 = V_4;
		int32_t L_40 = (int32_t)__this->____freeList_3;
		L_39->___next_1 = L_40;
		goto IL_00ff;
	}

IL_00ff:
	{
		goto IL_0113;
	}

IL_0113:
	{
		int32_t L_41 = V_3;
		__this->____freeList_3 = L_41;
		int32_t L_42 = (int32_t)__this->____freeCount_4;
		__this->____freeCount_4 = ((int32_t)il2cpp_codegen_add(L_42, 1));
		int32_t L_43 = (int32_t)__this->____version_5;
		__this->____version_5 = ((int32_t)il2cpp_codegen_add(L_43, 1));
		return (bool)1;
	}

IL_0138:
	{
		int32_t L_44 = V_3;
		V_2 = L_44;
		Entry_t5A1DD43C826878A3853C7DF32E971C3D19805227* L_45 = V_4;
		int32_t L_46 = (int32_t)L_45->___next_1;
		V_3 = L_46;
	}

IL_0142:
	{
		int32_t L_47 = V_3;
		if ((((int32_t)L_47) >= ((int32_t)0)))
		{
			goto IL_005c;
		}
	}

IL_0149:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_mD7A8027D1603995D29CED33BA6D2744225ACE8D9_gshared (Dictionary_2_t760E9A9490B53715AE11CA76450386C19A39A0C8* __this, int32_t ___0_key, Il2CppChar* ___1_value, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___0_key;
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_m58E23BFC0BDBD1CC8AC1AD38C4A42190F024EF62(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 28));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0025;
		}
	}
	{
		Il2CppChar* L_3 = ___1_value;
		EntryU5BU5D_t74939D41FA6DAF2CD4F7462D8AD016D48B99B8B7* L_4 = (EntryU5BU5D_t74939D41FA6DAF2CD4F7462D8AD016D48B99B8B7*)__this->____entries_1;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		Il2CppChar L_6 = (Il2CppChar)((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)))->___value_3;
		*(Il2CppChar*)L_3 = L_6;
		return (bool)1;
	}

IL_0025:
	{
		Il2CppChar* L_7 = ___1_value;
		il2cpp_codegen_initobj(L_7, sizeof(Il2CppChar));
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryAdd_m5B32E99FB1B38FF9D422591B53CA714C9BCAD75F_gshared (Dictionary_2_t760E9A9490B53715AE11CA76450386C19A39A0C8* __this, int32_t ___0_key, Il2CppChar ___1_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_key;
		Il2CppChar L_1 = ___1_value;
		bool L_2;
		L_2 = Dictionary_2_TryInsert_mE950A0E7B2E2D06C4599AB4713A970E9CF17C711(__this, L_0, L_1, (uint8_t)0, il2cpp_rgctx_method(method->klass->rgctx_data, 29));
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_mD2EA2825812C20B3E1BA7FE2E75A258CCBF36788_gshared (Dictionary_2_t760E9A9490B53715AE11CA76450386C19A39A0C8* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m856951A0B56F903C9592D3087A585CE09AE94D1C_gshared (Dictionary_2_t760E9A9490B53715AE11CA76450386C19A39A0C8* __this, KeyValuePair_2U5BU5D_t185EF1C22979145FBA3233EFBDF557ECDC08113C* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		KeyValuePair_2U5BU5D_t185EF1C22979145FBA3233EFBDF557ECDC08113C* L_0 = ___0_array;
		int32_t L_1 = ___1_index;
		Dictionary_2_CopyTo_m4D5CDF938A4188C7DC837512841EF76830A24F2A(__this, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 42));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_ICollection_CopyTo_m973C3365D2059E55538E47CD0395CF7A0EBE24F5_gshared (Dictionary_2_t760E9A9490B53715AE11CA76450386C19A39A0C8* __this, RuntimeArray* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	KeyValuePair_2U5BU5D_t185EF1C22979145FBA3233EFBDF557ECDC08113C* V_0 = NULL;
	DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533* V_1 = NULL;
	EntryU5BU5D_t74939D41FA6DAF2CD4F7462D8AD016D48B99B8B7* V_2 = NULL;
	int32_t V_3 = 0;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_4 = NULL;
	int32_t V_5 = 0;
	EntryU5BU5D_t74939D41FA6DAF2CD4F7462D8AD016D48B99B8B7* V_6 = NULL;
	int32_t V_7 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeArray* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)3, NULL);
	}

IL_0009:
	{
		RuntimeArray* L_1 = ___0_array;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(L_1, NULL);
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0018;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)7, NULL);
	}

IL_0018:
	{
		RuntimeArray* L_3 = ___0_array;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(L_3, 0, NULL);
		if (!L_4)
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)6, NULL);
	}

IL_0027:
	{
		int32_t L_5 = ___1_index;
		RuntimeArray* L_6 = ___0_array;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(L_6, NULL);
		if ((!(((uint32_t)L_5) > ((uint32_t)L_7))))
		{
			goto IL_0035;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0035:
	{
		RuntimeArray* L_8 = ___0_array;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(L_8, NULL);
		int32_t L_10 = ___1_index;
		int32_t L_11;
		L_11 = Dictionary_2_get_Count_mF62BC02D0DF4F1E37D59F0D850131620B1FC4EEE(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 36));
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_9, L_10))) >= ((int32_t)L_11)))
		{
			goto IL_004b;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)5, NULL);
	}

IL_004b:
	{
		RuntimeArray* L_12 = ___0_array;
		V_0 = ((KeyValuePair_2U5BU5D_t185EF1C22979145FBA3233EFBDF557ECDC08113C*)IsInst((RuntimeObject*)L_12, il2cpp_rgctx_data(method->klass->rgctx_data, 35)));
		KeyValuePair_2U5BU5D_t185EF1C22979145FBA3233EFBDF557ECDC08113C* L_13 = V_0;
		if (!L_13)
		{
			goto IL_005e;
		}
	}
	{
		KeyValuePair_2U5BU5D_t185EF1C22979145FBA3233EFBDF557ECDC08113C* L_14 = V_0;
		int32_t L_15 = ___1_index;
		Dictionary_2_CopyTo_m4D5CDF938A4188C7DC837512841EF76830A24F2A(__this, L_14, L_15, il2cpp_rgctx_method(method->klass->rgctx_data, 42));
		return;
	}

IL_005e:
	{
		RuntimeArray* L_16 = ___0_array;
		V_1 = ((DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533*)IsInst((RuntimeObject*)L_16, DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533_il2cpp_TypeInfo_var));
		DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533* L_17 = V_1;
		if (!L_17)
		{
			goto IL_00c3;
		}
	}
	{
		EntryU5BU5D_t74939D41FA6DAF2CD4F7462D8AD016D48B99B8B7* L_18 = (EntryU5BU5D_t74939D41FA6DAF2CD4F7462D8AD016D48B99B8B7*)__this->____entries_1;
		V_2 = L_18;
		V_3 = 0;
		goto IL_00b9;
	}

IL_0073:
	{
		EntryU5BU5D_t74939D41FA6DAF2CD4F7462D8AD016D48B99B8B7* L_19 = V_2;
		int32_t L_20 = V_3;
		NullCheck(L_19);
		int32_t L_21 = (int32_t)((L_19)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_20)))->___hashCode_0;
		if ((((int32_t)L_21) < ((int32_t)0)))
		{
			goto IL_00b5;
		}
	}
	{
		DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533* L_22 = V_1;
		int32_t L_23 = ___1_index;
		int32_t L_24 = L_23;
		___1_index = ((int32_t)il2cpp_codegen_add(L_24, 1));
		EntryU5BU5D_t74939D41FA6DAF2CD4F7462D8AD016D48B99B8B7* L_25 = V_2;
		int32_t L_26 = V_3;
		NullCheck(L_25);
		int32_t L_27 = (int32_t)((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___key_2;
		int32_t L_28 = L_27;
		RuntimeObject* L_29 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14), &L_28);
		EntryU5BU5D_t74939D41FA6DAF2CD4F7462D8AD016D48B99B8B7* L_30 = V_2;
		int32_t L_31 = V_3;
		NullCheck(L_30);
		Il2CppChar L_32 = (Il2CppChar)((L_30)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_31)))->___value_3;
		Il2CppChar L_33 = L_32;
		RuntimeObject* L_34 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15), &L_33);
		DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB L_35;
		memset((&L_35), 0, sizeof(L_35));
		DictionaryEntry__ctor_m2768353E53A75C4860E34B37DAF1342120C5D1EA((&L_35), L_29, L_34, NULL);
		NullCheck(L_22);
		(L_22)->SetAt(static_cast<il2cpp_array_size_t>(L_24), (DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB)L_35);
	}

IL_00b5:
	{
		int32_t L_36 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_36, 1));
	}

IL_00b9:
	{
		int32_t L_37 = V_3;
		int32_t L_38 = (int32_t)__this->____count_2;
		if ((((int32_t)L_37) < ((int32_t)L_38)))
		{
			goto IL_0073;
		}
	}
	{
		return;
	}

IL_00c3:
	{
		RuntimeArray* L_39 = ___0_array;
		V_4 = ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)IsInst((RuntimeObject*)L_39, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_40 = V_4;
		if (L_40)
		{
			goto IL_00d4;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
	}

IL_00d4:
	{
	}
	try
	{
		{
			int32_t L_41 = (int32_t)__this->____count_2;
			V_5 = L_41;
			EntryU5BU5D_t74939D41FA6DAF2CD4F7462D8AD016D48B99B8B7* L_42 = (EntryU5BU5D_t74939D41FA6DAF2CD4F7462D8AD016D48B99B8B7*)__this->____entries_1;
			V_6 = L_42;
			V_7 = 0;
			goto IL_0130_1;
		}

IL_00ea_1:
		{
			EntryU5BU5D_t74939D41FA6DAF2CD4F7462D8AD016D48B99B8B7* L_43 = V_6;
			int32_t L_44 = V_7;
			NullCheck(L_43);
			int32_t L_45 = (int32_t)((L_43)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_44)))->___hashCode_0;
			if ((((int32_t)L_45) < ((int32_t)0)))
			{
				goto IL_012a_1;
			}
		}
		{
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_46 = V_4;
			int32_t L_47 = ___1_index;
			int32_t L_48 = L_47;
			___1_index = ((int32_t)il2cpp_codegen_add(L_48, 1));
			EntryU5BU5D_t74939D41FA6DAF2CD4F7462D8AD016D48B99B8B7* L_49 = V_6;
			int32_t L_50 = V_7;
			NullCheck(L_49);
			int32_t L_51 = (int32_t)((L_49)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_50)))->___key_2;
			EntryU5BU5D_t74939D41FA6DAF2CD4F7462D8AD016D48B99B8B7* L_52 = V_6;
			int32_t L_53 = V_7;
			NullCheck(L_52);
			Il2CppChar L_54 = (Il2CppChar)((L_52)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_53)))->___value_3;
			KeyValuePair_2_t25871D01DA51BBB8CEF1F27E727B5D3A545FD4EF L_55;
			memset((&L_55), 0, sizeof(L_55));
			KeyValuePair_2__ctor_mF66F658CB0111305E284C4FD64B6FC4AD62EB5E3((&L_55), L_51, L_54, il2cpp_rgctx_method(method->klass->rgctx_data, 37));
			KeyValuePair_2_t25871D01DA51BBB8CEF1F27E727B5D3A545FD4EF L_56 = L_55;
			RuntimeObject* L_57 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 21), &L_56);
			NullCheck(L_46);
			ArrayElementTypeCheck (L_46, L_57);
			(L_46)->SetAt(static_cast<il2cpp_array_size_t>(L_48), (RuntimeObject*)L_57);
		}

IL_012a_1:
		{
			int32_t L_58 = V_7;
			V_7 = ((int32_t)il2cpp_codegen_add(L_58, 1));
		}

IL_0130_1:
		{
			int32_t L_59 = V_7;
			int32_t L_60 = V_5;
			if ((((int32_t)L_59) < ((int32_t)L_60)))
			{
				goto IL_00ea_1;
			}
		}
		{
			goto IL_0140;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0138;
		}
		throw e;
	}

CATCH_0138:
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0140;
	}

IL_0140:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m89815F8FD7028F44F17A4A2DAF3443B5A497CC49_gshared (Dictionary_2_t760E9A9490B53715AE11CA76450386C19A39A0C8* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_tCC8CFFFAC493A1DF0C77EE34CD9E2F5A669A0D88 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m06C5648CD941BE733FD754C942F410D9C85C3583((&L_0), __this, 2, il2cpp_rgctx_method(method->klass->rgctx_data, 39));
		Enumerator_tCC8CFFFAC493A1DF0C77EE34CD9E2F5A669A0D88 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 38), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_ICollection_get_SyncRoot_mE6A186CA8935AD82FF029A56322475E1152ED441_gshared (Dictionary_2_t760E9A9490B53715AE11CA76450386C19A39A0C8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->____syncRoot_9;
		if (L_0)
		{
			goto IL_001a;
		}
	}
	{
		RuntimeObject** L_1 = (RuntimeObject**)(&__this->____syncRoot_9);
		RuntimeObject* L_2 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_2, NULL);
		RuntimeObject* L_3;
		L_3 = InterlockedCompareExchangeImpl<RuntimeObject*>(L_1, L_2, NULL);
	}

IL_001a:
	{
		RuntimeObject* L_4 = (RuntimeObject*)__this->____syncRoot_9;
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IDictionary_get_Keys_mB4DD42C166B75C2AB2FD7600BD5C0388AFFF2B12_gshared (Dictionary_2_t760E9A9490B53715AE11CA76450386C19A39A0C8* __this, const RuntimeMethod* method) 
{
	{
		KeyCollection_t3E33C2EB31F1F1EF4ADE3FFFBB7D11E563134D04* L_0;
		L_0 = Dictionary_2_get_Keys_m28C150C463713CAC4B143915504A3B0597A68CDC(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 55));
		return (RuntimeObject*)L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IDictionary_get_Item_m3332DFAD89172F54DB55CE3C425F875B65298BAF_gshared (Dictionary_2_t760E9A9490B53715AE11CA76450386C19A39A0C8* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		RuntimeObject* L_0 = ___0_key;
		bool L_1;
		L_1 = Dictionary_2_IsCompatibleKey_mEA7DD561D5EC989C7D6E52D8242DAA108CC884CA(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 56));
		if (!L_1)
		{
			goto IL_0030;
		}
	}
	{
		RuntimeObject* L_2 = ___0_key;
		int32_t L_3;
		L_3 = Dictionary_2_FindEntry_m58E23BFC0BDBD1CC8AC1AD38C4A42190F024EF62(__this, ((*(int32_t*)((int32_t*)(int32_t*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 14))))), il2cpp_rgctx_method(method->klass->rgctx_data, 28));
		V_0 = L_3;
		int32_t L_4 = V_0;
		if ((((int32_t)L_4) < ((int32_t)0)))
		{
			goto IL_0030;
		}
	}
	{
		EntryU5BU5D_t74939D41FA6DAF2CD4F7462D8AD016D48B99B8B7* L_5 = (EntryU5BU5D_t74939D41FA6DAF2CD4F7462D8AD016D48B99B8B7*)__this->____entries_1;
		int32_t L_6 = V_0;
		NullCheck(L_5);
		Il2CppChar L_7 = (Il2CppChar)((L_5)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_6)))->___value_3;
		Il2CppChar L_8 = L_7;
		RuntimeObject* L_9 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15), &L_8);
		return L_9;
	}

IL_0030:
	{
		return NULL;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_IDictionary_set_Item_m318AA83F8C30DDFD88939DFB6B0496BDF2C4B66E_gshared (Dictionary_2_t760E9A9490B53715AE11CA76450386C19A39A0C8* __this, RuntimeObject* ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 2> __active_exceptions;
	{
		RuntimeObject* L_0 = ___0_key;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)5, NULL);
	}

IL_0009:
	{
		RuntimeObject* L_1 = ___1_value;
		ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m824F1B8830C5D9946D6CDF297C66FABC7E1A94F2(L_1, (int32_t)((int32_t)15), il2cpp_rgctx_method(method->klass->rgctx_data, 58));
	}
	try
	{
		{
			RuntimeObject* L_2 = ___0_key;
			V_0 = ((*(int32_t*)((int32_t*)(int32_t*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 14)))));
		}
		try
		{
			int32_t L_3 = V_0;
			RuntimeObject* L_4 = ___1_value;
			Dictionary_2_set_Item_mCDEFF5FEE05146FB5547F35FA1AC420B6E750E5F(__this, L_3, ((*(Il2CppChar*)((Il2CppChar*)(Il2CppChar*)UnBox(L_4, il2cpp_rgctx_data(method->klass->rgctx_data, 15))))), il2cpp_rgctx_method(method->klass->rgctx_data, 59));
			goto IL_003a_1;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_0027_1;
			}
			throw e;
		}

CATCH_0027_1:
		{
			RuntimeObject* L_5 = ___1_value;
			RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 60)) };
			il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
			Type_t* L_7;
			L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
			ThrowHelper_ThrowWrongValueTypeArgumentException_mC1A6BBE43C360583C1E2C463D5B0AADF1E3E1910(L_5, L_7, NULL);
			IL2CPP_POP_ACTIVE_EXCEPTION();
			goto IL_003a_1;
		}

IL_003a_1:
		{
			goto IL_004f;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_003c;
		}
		throw e;
	}

CATCH_003c:
	{
		RuntimeObject* L_8 = ___0_key;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_9 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 61)) };
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
		Type_t* L_10;
		L_10 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_9, NULL);
		ThrowHelper_ThrowWrongKeyTypeArgumentException_m90E5BCE2CB10EEC16F254C237121C6816C4D6982(L_8, L_10, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_004f;
	}

IL_004f:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_IsCompatibleKey_mEA7DD561D5EC989C7D6E52D8242DAA108CC884CA_gshared (RuntimeObject* ___0_key, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_key;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)5, NULL);
	}

IL_0009:
	{
		RuntimeObject* L_1 = ___0_key;
		return (bool)((!(((RuntimeObject*)(RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_1, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 14)))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_IDictionary_Contains_mBB1A1F78009CC0D30B633824428CA3BD1A3FEF7E_gshared (Dictionary_2_t760E9A9490B53715AE11CA76450386C19A39A0C8* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_key;
		bool L_1;
		L_1 = Dictionary_2_IsCompatibleKey_mEA7DD561D5EC989C7D6E52D8242DAA108CC884CA(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 56));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_key;
		bool L_3;
		L_3 = Dictionary_2_ContainsKey_mFEF31529C09939D463552C900419ABCC2B05B354(__this, ((*(int32_t*)((int32_t*)(int32_t*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 14))))), il2cpp_rgctx_method(method->klass->rgctx_data, 62));
		return L_3;
	}

IL_0015:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IDictionary_GetEnumerator_mE5CA18A4E6E24CC24BDA5CFD2CADA8E274315655_gshared (Dictionary_2_t760E9A9490B53715AE11CA76450386C19A39A0C8* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_tCC8CFFFAC493A1DF0C77EE34CD9E2F5A669A0D88 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m06C5648CD941BE733FD754C942F410D9C85C3583((&L_0), __this, 1, il2cpp_rgctx_method(method->klass->rgctx_data, 39));
		Enumerator_tCC8CFFFAC493A1DF0C77EE34CD9E2F5A669A0D88 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 38), &L_1);
		return (RuntimeObject*)L_2;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) 
{
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)__this->____items_1;
		V_0 = L_1;
		int32_t L_2 = (int32_t)__this->____size_2;
		V_1 = L_2;
		int32_t L_3 = V_1;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = V_0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size_2 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = V_0;
		int32_t L_7 = V_1;
		RuntimeObject* L_8 = ___0_item;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (RuntimeObject*)L_8);
		return;
	}

IL_0034:
	{
		RuntimeObject* L_9 = ___0_item;
		List_1_AddWithResize_m79A9BF770BEF9C06BE40D5401E55E375F2726CC4(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_t39F37BD252745ACD048E411385EBDFBABD5BBFAE* EqualityComparer_1_get_Default_m337E4360DF25127CED0E5DEC4827A905E8EBA5E0_gshared_inline (const RuntimeMethod* method) 
{
	EqualityComparer_1_t39F37BD252745ACD048E411385EBDFBABD5BBFAE* V_0 = NULL;
	{
		EqualityComparer_1_t39F37BD252745ACD048E411385EBDFBABD5BBFAE* L_0 = ((EqualityComparer_1_t39F37BD252745ACD048E411385EBDFBABD5BBFAE_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer_0;
		il2cpp_codegen_memory_barrier();
		V_0 = L_0;
		EqualityComparer_1_t39F37BD252745ACD048E411385EBDFBABD5BBFAE* L_1 = V_0;
		if (L_1)
		{
			goto IL_0019;
		}
	}
	{
		EqualityComparer_1_t39F37BD252745ACD048E411385EBDFBABD5BBFAE* L_2;
		L_2 = EqualityComparer_1_CreateComparer_mE9DC7CAF58EE3B2D235851CCFF895CD1C51F3E6B(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		V_0 = L_2;
		EqualityComparer_1_t39F37BD252745ACD048E411385EBDFBABD5BBFAE* L_3 = V_0;
		il2cpp_codegen_memory_barrier();
		((EqualityComparer_1_t39F37BD252745ACD048E411385EBDFBABD5BBFAE_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer_0 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((EqualityComparer_1_t39F37BD252745ACD048E411385EBDFBABD5BBFAE_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer_0), (void*)L_3);
	}

IL_0019:
	{
		EqualityComparer_1_t39F37BD252745ACD048E411385EBDFBABD5BBFAE* L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A KeyValuePair_2_get_Key_m31FF72E7D6E74CE5DB2E5B3B8FC6B66B7A452210_gshared_inline (KeyValuePair_2_t2A9D1B7DEBB99A68011F37B017FDD44CFE5AEC14* __this, const RuntimeMethod* method) 
{
	{
		ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A L_0 = (ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A)__this->___key_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* KeyValuePair_2_get_Value_mD933B25C1491C37A3BE3B1E709D8C1C02408E76C_gshared_inline (KeyValuePair_2_t2A9D1B7DEBB99A68011F37B017FDD44CFE5AEC14* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->___value_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* EqualityComparer_1_get_Default_mA2AD755281D23F496A2579884B39E30C13C208B3_gshared_inline (const RuntimeMethod* method) 
{
	EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* V_0 = NULL;
	{
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_0 = ((EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer_0;
		il2cpp_codegen_memory_barrier();
		V_0 = L_0;
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_1 = V_0;
		if (L_1)
		{
			goto IL_0019;
		}
	}
	{
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_2;
		L_2 = EqualityComparer_1_CreateComparer_mD2FA619307513193746FBEB5AE522FB54E21B634(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		V_0 = L_2;
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_3 = V_0;
		il2cpp_codegen_memory_barrier();
		((EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer_0 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer_0), (void*)L_3);
	}

IL_0019:
	{
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_tAAD1A76C30594C4D736E586B3D77281A53A27399* EqualityComparer_1_get_Default_m5DCC393F5D59545D96AF9FF747F17C72EABB5D3B_gshared_inline (const RuntimeMethod* method) 
{
	EqualityComparer_1_tAAD1A76C30594C4D736E586B3D77281A53A27399* V_0 = NULL;
	{
		EqualityComparer_1_tAAD1A76C30594C4D736E586B3D77281A53A27399* L_0 = ((EqualityComparer_1_tAAD1A76C30594C4D736E586B3D77281A53A27399_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer_0;
		il2cpp_codegen_memory_barrier();
		V_0 = L_0;
		EqualityComparer_1_tAAD1A76C30594C4D736E586B3D77281A53A27399* L_1 = V_0;
		if (L_1)
		{
			goto IL_0019;
		}
	}
	{
		EqualityComparer_1_tAAD1A76C30594C4D736E586B3D77281A53A27399* L_2;
		L_2 = EqualityComparer_1_CreateComparer_mD3D60BAB4A1E7DF8FDC8779F5A1A3104CAD5202A(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		V_0 = L_2;
		EqualityComparer_1_tAAD1A76C30594C4D736E586B3D77281A53A27399* L_3 = V_0;
		il2cpp_codegen_memory_barrier();
		((EqualityComparer_1_tAAD1A76C30594C4D736E586B3D77281A53A27399_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer_0 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((EqualityComparer_1_tAAD1A76C30594C4D736E586B3D77281A53A27399_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer_0), (void*)L_3);
	}

IL_0019:
	{
		EqualityComparer_1_tAAD1A76C30594C4D736E586B3D77281A53A27399* L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Guid_t KeyValuePair_2_get_Key_m190F16A3EFBED6D9959367C13683CCE34C111E13_gshared_inline (KeyValuePair_2_t103EED32AF196D79C0FCDE0CE9C589258217044B* __this, const RuntimeMethod* method) 
{
	{
		Guid_t L_0 = (Guid_t)__this->___key_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t KeyValuePair_2_get_Value_m165045D6956E45F7B10F7F2DFCD7A97140F887C2_gshared_inline (KeyValuePair_2_t103EED32AF196D79C0FCDE0CE9C589258217044B* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->___value_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* EqualityComparer_1_get_Default_mF70F6C11A35B420DFA4628EE316B087F2DCB280C_gshared_inline (const RuntimeMethod* method) 
{
	EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* V_0 = NULL;
	{
		EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* L_0 = ((EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer_0;
		il2cpp_codegen_memory_barrier();
		V_0 = L_0;
		EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* L_1 = V_0;
		if (L_1)
		{
			goto IL_0019;
		}
	}
	{
		EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* L_2;
		L_2 = EqualityComparer_1_CreateComparer_m432C82F7354C37E610794C1DA866DFA7DAC9C35E(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		V_0 = L_2;
		EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* L_3 = V_0;
		il2cpp_codegen_memory_barrier();
		((EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer_0 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer_0), (void*)L_3);
	}

IL_0019:
	{
		EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Guid_t KeyValuePair_2_get_Key_mF91DB02B44EED18B0673E6F2CA20021DF3055E1F_gshared_inline (KeyValuePair_2_t669A5BAF37ED0ABC96A30943A6E7D0442310B936* __this, const RuntimeMethod* method) 
{
	{
		Guid_t L_0 = (Guid_t)__this->___key_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* KeyValuePair_2_get_Value_m2A56B01BF54F80055FA9D4B744AD9DBDC6EAE22D_gshared_inline (KeyValuePair_2_t669A5BAF37ED0ABC96A30943A6E7D0442310B936* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->___value_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t KeyValuePair_2_get_Key_mA7C09E323BC8D58366E676F2135E5B976A40E152_gshared_inline (KeyValuePair_2_tE3EA5100FA35C94F54D8D5F93B806E7614C34DBD* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->___key_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ContentHeightCacheInfo_tA616347D46981FC5684B6268FC7035C431E99FBC KeyValuePair_2_get_Value_m3418A391AB44E3DC55D9F6B456C7E6E694A45062_gshared_inline (KeyValuePair_2_tE3EA5100FA35C94F54D8D5F93B806E7614C34DBD* __this, const RuntimeMethod* method) 
{
	{
		ContentHeightCacheInfo_tA616347D46981FC5684B6268FC7035C431E99FBC L_0 = (ContentHeightCacheInfo_tA616347D46981FC5684B6268FC7035C431E99FBC)__this->___value_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_t8EE005CC277EC77E0AFAB9930C9285E3DE4C677B* EqualityComparer_1_get_Default_mB3E88E8F0749A37FC3E4007A3F3142E8DE546515_gshared_inline (const RuntimeMethod* method) 
{
	EqualityComparer_1_t8EE005CC277EC77E0AFAB9930C9285E3DE4C677B* V_0 = NULL;
	{
		EqualityComparer_1_t8EE005CC277EC77E0AFAB9930C9285E3DE4C677B* L_0 = ((EqualityComparer_1_t8EE005CC277EC77E0AFAB9930C9285E3DE4C677B_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer_0;
		il2cpp_codegen_memory_barrier();
		V_0 = L_0;
		EqualityComparer_1_t8EE005CC277EC77E0AFAB9930C9285E3DE4C677B* L_1 = V_0;
		if (L_1)
		{
			goto IL_0019;
		}
	}
	{
		EqualityComparer_1_t8EE005CC277EC77E0AFAB9930C9285E3DE4C677B* L_2;
		L_2 = EqualityComparer_1_CreateComparer_mCF9A6FD34089F19E4321806469AE45B2618C11CE(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		V_0 = L_2;
		EqualityComparer_1_t8EE005CC277EC77E0AFAB9930C9285E3DE4C677B* L_3 = V_0;
		il2cpp_codegen_memory_barrier();
		((EqualityComparer_1_t8EE005CC277EC77E0AFAB9930C9285E3DE4C677B_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer_0 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((EqualityComparer_1_t8EE005CC277EC77E0AFAB9930C9285E3DE4C677B_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer_0), (void*)L_3);
	}

IL_0019:
	{
		EqualityComparer_1_t8EE005CC277EC77E0AFAB9930C9285E3DE4C677B* L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t KeyValuePair_2_get_Key_mD6A5670D5DD71BBE95D274ADC916CFD0F5E3FAA6_gshared_inline (KeyValuePair_2_tCA9456FCC0FBD03E0C9FF69F0B168B558FD2A5ED* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->___key_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR TreeViewItemData_1_t95D9721135F40D0DB3D221F8EB2543C396D350F4 KeyValuePair_2_get_Value_m658D03DA62B8E16BD8C96D037C38C9AC87442BAF_gshared_inline (KeyValuePair_2_tCA9456FCC0FBD03E0C9FF69F0B168B558FD2A5ED* __this, const RuntimeMethod* method) 
{
	{
		TreeViewItemData_1_t95D9721135F40D0DB3D221F8EB2543C396D350F4 L_0 = (TreeViewItemData_1_t95D9721135F40D0DB3D221F8EB2543C396D350F4)__this->___value_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_t8DFD15807C95203DA08FAD2838BD16CE1C70A17E* EqualityComparer_1_get_Default_m36D51346E7AD3770CF007C780BD7F59736E21F77_gshared_inline (const RuntimeMethod* method) 
{
	EqualityComparer_1_t8DFD15807C95203DA08FAD2838BD16CE1C70A17E* V_0 = NULL;
	{
		EqualityComparer_1_t8DFD15807C95203DA08FAD2838BD16CE1C70A17E* L_0 = ((EqualityComparer_1_t8DFD15807C95203DA08FAD2838BD16CE1C70A17E_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer_0;
		il2cpp_codegen_memory_barrier();
		V_0 = L_0;
		EqualityComparer_1_t8DFD15807C95203DA08FAD2838BD16CE1C70A17E* L_1 = V_0;
		if (L_1)
		{
			goto IL_0019;
		}
	}
	{
		EqualityComparer_1_t8DFD15807C95203DA08FAD2838BD16CE1C70A17E* L_2;
		L_2 = EqualityComparer_1_CreateComparer_m41D90357AC3F6FAA8367BD3AC2D49DE5CD85ECC9(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		V_0 = L_2;
		EqualityComparer_1_t8DFD15807C95203DA08FAD2838BD16CE1C70A17E* L_3 = V_0;
		il2cpp_codegen_memory_barrier();
		((EqualityComparer_1_t8DFD15807C95203DA08FAD2838BD16CE1C70A17E_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer_0 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((EqualityComparer_1_t8DFD15807C95203DA08FAD2838BD16CE1C70A17E_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer_0), (void*)L_3);
	}

IL_0019:
	{
		EqualityComparer_1_t8DFD15807C95203DA08FAD2838BD16CE1C70A17E* L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t KeyValuePair_2_get_Key_m671CD723515F42017EA4D2DB01691D13288970A9_gshared_inline (KeyValuePair_2_t0EAC8DA2D95957AFA60DD198D013622384C0D213* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->___key_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool KeyValuePair_2_get_Value_m00849F341D41ABD55D72D0701342145724AC3A9F_gshared_inline (KeyValuePair_2_t0EAC8DA2D95957AFA60DD198D013622384C0D213* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = (bool)__this->___value_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_t97160852989689D9543E2E1EA7D7196DBEA5AEE4* EqualityComparer_1_get_Default_mBB75BC0723DFD7850F43E72E34026DD070CF5932_gshared_inline (const RuntimeMethod* method) 
{
	EqualityComparer_1_t97160852989689D9543E2E1EA7D7196DBEA5AEE4* V_0 = NULL;
	{
		EqualityComparer_1_t97160852989689D9543E2E1EA7D7196DBEA5AEE4* L_0 = ((EqualityComparer_1_t97160852989689D9543E2E1EA7D7196DBEA5AEE4_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer_0;
		il2cpp_codegen_memory_barrier();
		V_0 = L_0;
		EqualityComparer_1_t97160852989689D9543E2E1EA7D7196DBEA5AEE4* L_1 = V_0;
		if (L_1)
		{
			goto IL_0019;
		}
	}
	{
		EqualityComparer_1_t97160852989689D9543E2E1EA7D7196DBEA5AEE4* L_2;
		L_2 = EqualityComparer_1_CreateComparer_m3BD7BED1F69ABEE55E320BA9CCFBB473E9F57C66(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		V_0 = L_2;
		EqualityComparer_1_t97160852989689D9543E2E1EA7D7196DBEA5AEE4* L_3 = V_0;
		il2cpp_codegen_memory_barrier();
		((EqualityComparer_1_t97160852989689D9543E2E1EA7D7196DBEA5AEE4_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer_0 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((EqualityComparer_1_t97160852989689D9543E2E1EA7D7196DBEA5AEE4_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer_0), (void*)L_3);
	}

IL_0019:
	{
		EqualityComparer_1_t97160852989689D9543E2E1EA7D7196DBEA5AEE4* L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t KeyValuePair_2_get_Key_m8862066C052557662F7CFB385CBA6E42C8C92454_gshared_inline (KeyValuePair_2_t25871D01DA51BBB8CEF1F27E727B5D3A545FD4EF* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->___key_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Il2CppChar KeyValuePair_2_get_Value_m6E082F30B5B753C3131FCA1A488A0963333AFD04_gshared_inline (KeyValuePair_2_t25871D01DA51BBB8CEF1F27E727B5D3A545FD4EF* __this, const RuntimeMethod* method) 
{
	{
		Il2CppChar L_0 = (Il2CppChar)__this->___value_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_tCAA8B21BC7E1029BB1288DEAE6D8ACB730BC5D4B* EqualityComparer_1_get_Default_m1D7CFB300C5D4CDC1A3E2D90C684F5AD4C98B8CB_gshared_inline (const RuntimeMethod* method) 
{
	EqualityComparer_1_tCAA8B21BC7E1029BB1288DEAE6D8ACB730BC5D4B* V_0 = NULL;
	{
		EqualityComparer_1_tCAA8B21BC7E1029BB1288DEAE6D8ACB730BC5D4B* L_0 = ((EqualityComparer_1_tCAA8B21BC7E1029BB1288DEAE6D8ACB730BC5D4B_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer_0;
		il2cpp_codegen_memory_barrier();
		V_0 = L_0;
		EqualityComparer_1_tCAA8B21BC7E1029BB1288DEAE6D8ACB730BC5D4B* L_1 = V_0;
		if (L_1)
		{
			goto IL_0019;
		}
	}
	{
		EqualityComparer_1_tCAA8B21BC7E1029BB1288DEAE6D8ACB730BC5D4B* L_2;
		L_2 = EqualityComparer_1_CreateComparer_m8D41903BD474DD9CEBD9B11C2D89FF5798C63F93(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		V_0 = L_2;
		EqualityComparer_1_tCAA8B21BC7E1029BB1288DEAE6D8ACB730BC5D4B* L_3 = V_0;
		il2cpp_codegen_memory_barrier();
		((EqualityComparer_1_tCAA8B21BC7E1029BB1288DEAE6D8ACB730BC5D4B_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer_0 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((EqualityComparer_1_tCAA8B21BC7E1029BB1288DEAE6D8ACB730BC5D4B_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer_0), (void*)L_3);
	}

IL_0019:
	{
		EqualityComparer_1_tCAA8B21BC7E1029BB1288DEAE6D8ACB730BC5D4B* L_4 = V_0;
		return L_4;
	}
}
