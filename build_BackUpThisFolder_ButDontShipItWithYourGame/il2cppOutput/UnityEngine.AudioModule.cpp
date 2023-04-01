#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>


template <typename T1>
struct VirtualActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1>
struct GenericVirtualActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
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

struct Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C;
struct AudioMixerSnapshotU5BU5D_tD41A94680B8A241063054F1931BDDC8B997D8382;
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C;
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07;
struct AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354;
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263;
struct AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20;
struct AudioMixer_tE2E8D79241711CDF9AB428C7FB96A35D80E40B04;
struct AudioMixerGroup_tD29AC8336F7425DF007944F8195CEABF34FC3311;
struct AudioMixerSnapshot_tB9A62E6CFA52643B938E4FBFFAE1A5ED30907781;
struct AudioSampleProvider_t602353124A2F6F2AEC38E56C3C21932344F712E2;
struct AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299;
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
struct Delegate_t;
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
struct MethodInfo_t;
struct NullReferenceException_tBDE63A6D24569B964908408389070C6A9F5005BB;
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
struct String_t;
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
struct Type_t;
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
struct PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E;
struct PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072;
struct SampleFramesHandler_tFE84FF9BBCEFB880D46227188F375BEF680AAA30;
struct AudioConfigurationChangeHandler_tE071B0CBA3B3A77D3E41F5FCB65B4017885B3177;

IL2CPP_EXTERN_C RuntimeClass* ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AudioSettings_t66C4BCA1E463B061E2EC9063FB882ACED20D47BD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Mobile_t304A73480DF447472BDB16BA19A9E4FE2C8CB2DD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NullReferenceException_tBDE63A6D24569B964908408389070C6A9F5005BB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral0ED72C9B4D0AB21E88D08F74AC73C6C8CEC4B7DF;
IL2CPP_EXTERN_C String_t* _stringLiteral2186DB8EA3F0EBBFF4B670DC1B315D485E2F447B;
IL2CPP_EXTERN_C String_t* _stringLiteral42646B33B50B6AA15E22733C8900716F0FE19E1D;
IL2CPP_EXTERN_C String_t* _stringLiteral49403A17E8D32B35CB5B66AB1A2651A7EEAD1B00;
IL2CPP_EXTERN_C String_t* _stringLiteral5633EC5A323E76AB2DB48162D296F674B1A4AE13;
IL2CPP_EXTERN_C String_t* _stringLiteral67DB02F1FABDC6C47E8B1ED9A9ADC8E17845BD4F;
IL2CPP_EXTERN_C String_t* _stringLiteral747CA643504D60A83574C1454D344DADB4D2BA17;
IL2CPP_EXTERN_C String_t* _stringLiteral75DC747EA24DB7802D5E580A86C87FFCD3EA69B0;
IL2CPP_EXTERN_C String_t* _stringLiteral7F33A83E7C1398BEA9BE2EB876FECFEF16BCCDBD;
IL2CPP_EXTERN_C String_t* _stringLiteral8C53570A90E7EFA87FDB7F0DCC0EE1FCC019E426;
IL2CPP_EXTERN_C String_t* _stringLiteral9EAFE4F84FECC3407E28F6C22DC663D4A31C78D0;
IL2CPP_EXTERN_C String_t* _stringLiteralA69BE8EF0F1482795ABF1CC395A765AA747ECD85;
IL2CPP_EXTERN_C String_t* _stringLiteralB1FAE4F904170535BC9DC23FF347B1D0603313EA;
IL2CPP_EXTERN_C String_t* _stringLiteralB7ED4706BFE5D072AD3E5A0F26644FF44E847682;
IL2CPP_EXTERN_C String_t* _stringLiteralB9ACF8E6DF73A863387F2ABAD61D84C3197C6B01;
IL2CPP_EXTERN_C String_t* _stringLiteralC01DE08865A1C5D9A0B7F1023D8CD55C8685904B;
IL2CPP_EXTERN_C String_t* _stringLiteralC563ED6549A22286FAAA38A5D49C5B247A52C622;
IL2CPP_EXTERN_C String_t* _stringLiteralCAEF26BE398F51129C4063A43AD4BF947AC128D6;
IL2CPP_EXTERN_C String_t* _stringLiteralCC867B94415511BD48E92E3242D7EDA425D20035;
IL2CPP_EXTERN_C String_t* _stringLiteralF52B980B71426E2D226C2ED5B2045868E72F85FF;
IL2CPP_EXTERN_C const RuntimeMethod* AudioClip_Create_m988FEB04BC74440E65C3CF07414E4867AAE737F8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AudioClip_SetData_m7B473C614C11953D746770F4F89B44600B5A6AF3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AudioMixer_TransitionToSnapshot_m308E8D50A4573EFDD381ED7DEC23162F8CD0EB5D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Microphone_Start_mDA38C5376D122F27D9DEFD2AE811BAE460F2242E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_0_0_0_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct AudioMixerSnapshotU5BU5D_tD41A94680B8A241063054F1931BDDC8B997D8382;
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
struct U3CModuleU3E_t462BCCFB9B78348533823E0754F65F52A5348F89 
{
};
struct AudioSampleProvider_t602353124A2F6F2AEC38E56C3C21932344F712E2  : public RuntimeObject
{
	SampleFramesHandler_tFE84FF9BBCEFB880D46227188F375BEF680AAA30* ___sampleFramesAvailable_0;
	SampleFramesHandler_tFE84FF9BBCEFB880D46227188F375BEF680AAA30* ___sampleFramesOverflow_1;
};
struct AudioSettings_t66C4BCA1E463B061E2EC9063FB882ACED20D47BD  : public RuntimeObject
{
};
struct MemberInfo_t  : public RuntimeObject
{
};
struct Microphone_tC7BC94B89C5C1409E8F2C532B7EBEF7F23989AB8  : public RuntimeObject
{
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
struct Mobile_t304A73480DF447472BDB16BA19A9E4FE2C8CB2DD  : public RuntimeObject
{
};
struct AudioConfiguration_t4C8585EA98B6559B306B6FAD6A68088555394A5D 
{
	int32_t ___speakerMode_0;
	int32_t ___dspBufferSize_1;
	int32_t ___sampleRate_2;
	int32_t ___numRealVoices_3;
	int32_t ___numVirtualVoices_4;
};
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	bool ___m_value_0;
};
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	double ___m_value_0;
};
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	int32_t ___m_value_0;
};
struct IntPtr_t 
{
	void* ___m_value_0;
};
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	float ___m_value_0;
};
struct UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B 
{
	uint32_t ___m_value_0;
};
struct UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF 
{
	uint64_t ___m_value_0;
};
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 
{
	float ___x_2;
	float ___y_3;
	float ___z_4;
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
struct AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354  : public RuntimeObject
{
	intptr_t ___m_Ptr_0;
};
struct AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
struct AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_marshaled_com
{
	intptr_t ___m_Ptr_0;
};
struct Delegate_t  : public RuntimeObject
{
	Il2CppMethodPointer ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	RuntimeObject* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	bool ___method_is_virtual_12;
};
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
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
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C  : public RuntimeObject
{
	intptr_t ___m_CachedPtr_0;
};
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};
struct PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 
{
	intptr_t ___m_Handle_0;
	uint32_t ___m_Version_1;
};
struct PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883 
{
	intptr_t ___m_Handle_0;
	uint32_t ___m_Version_1;
};
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	intptr_t ___value_0;
};
struct AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
	PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E* ___m_PCMReaderCallback_4;
	PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072* ___m_PCMSetPositionCallback_5;
};
struct AudioClipPlayable_tD4B758E68CAE03CB0CD31F90C8A3E603B97143A0 
{
	PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 ___m_Handle_0;
};
struct AudioMixer_tE2E8D79241711CDF9AB428C7FB96A35D80E40B04  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};
struct AudioMixerGroup_tD29AC8336F7425DF007944F8195CEABF34FC3311  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};
struct AudioMixerPlayable_t6AADDF0C53DF1B4C17969EC24B3B4E4975F3A56C 
{
	PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 ___m_Handle_0;
};
struct AudioMixerSnapshot_tB9A62E6CFA52643B938E4FBFFAE1A5ED30907781  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};
struct AudioPlayableOutput_tC3DFF8095F429D90129A367EAB98A24F6D6ADF20 
{
	PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883 ___m_Handle_0;
};
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};
struct MulticastDelegate_t  : public Delegate_t
{
	DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771* ___delegates_13;
};
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_13;
};
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_13;
};
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};
struct Type_t  : public MemberInfo_t
{
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ____impl_8;
};
struct Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C  : public MulticastDelegate_t
{
};
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07  : public MulticastDelegate_t
{
};
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
	String_t* ____paramName_18;
};
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};
struct NullReferenceException_tBDE63A6D24569B964908408389070C6A9F5005BB  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};
struct PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E  : public MulticastDelegate_t
{
};
struct PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072  : public MulticastDelegate_t
{
};
struct SampleFramesHandler_tFE84FF9BBCEFB880D46227188F375BEF680AAA30  : public MulticastDelegate_t
{
};
struct AudioConfigurationChangeHandler_tE071B0CBA3B3A77D3E41F5FCB65B4017885B3177  : public MulticastDelegate_t
{
};
struct AudioBehaviour_t2DC0BEF7B020C952F3D2DA5AAAC88501C7EEB941  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};
struct AudioListener_t1D629CE9BC079C8ECDE8F822616E8A8E319EAE35  : public AudioBehaviour_t2DC0BEF7B020C952F3D2DA5AAAC88501C7EEB941
{
};
struct AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299  : public AudioBehaviour_t2DC0BEF7B020C952F3D2DA5AAAC88501C7EEB941
{
};
struct AudioSettings_t66C4BCA1E463B061E2EC9063FB882ACED20D47BD_StaticFields
{
	AudioConfigurationChangeHandler_tE071B0CBA3B3A77D3E41F5FCB65B4017885B3177* ___OnAudioConfigurationChanged_0;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___OnAudioSystemShuttingDown_1;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___OnAudioSystemStartedUp_2;
};
struct String_t_StaticFields
{
	String_t* ___Empty_6;
};
struct Mobile_t304A73480DF447472BDB16BA19A9E4FE2C8CB2DD_StaticFields
{
	bool ___U3CmuteStateU3Ek__BackingField_0;
	bool ____stopAudioOutputOnMute_1;
	Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* ___OnMuteStateChanged_2;
};
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	String_t* ___TrueString_5;
	String_t* ___FalseString_6;
};
struct IntPtr_t_StaticFields
{
	intptr_t ___Zero_1;
};
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___zeroVector_5;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___oneVector_6;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___upVector_7;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___downVector_8;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___leftVector_9;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rightVector_10;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___forwardVector_11;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___backVector_12;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___positiveInfinityVector_13;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___negativeInfinityVector_14;
};
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;
};
struct PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4_StaticFields
{
	PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 ___m_Null_2;
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
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771  : public RuntimeArray
{
	ALIGN_FIELD (8) Delegate_t* m_Items[1];

	inline Delegate_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Delegate_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Delegate_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Delegate_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Delegate_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Delegate_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C  : public RuntimeArray
{
	ALIGN_FIELD (8) float m_Items[1];

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
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248  : public RuntimeArray
{
	ALIGN_FIELD (8) String_t* m_Items[1];

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
struct AudioMixerSnapshotU5BU5D_tD41A94680B8A241063054F1931BDDC8B997D8382  : public RuntimeArray
{
	ALIGN_FIELD (8) AudioMixerSnapshot_tB9A62E6CFA52643B938E4FBFFAE1A5ED30907781* m_Items[1];

	inline AudioMixerSnapshot_tB9A62E6CFA52643B938E4FBFFAE1A5ED30907781* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline AudioMixerSnapshot_tB9A62E6CFA52643B938E4FBFFAE1A5ED30907781** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, AudioMixerSnapshot_tB9A62E6CFA52643B938E4FBFFAE1A5ED30907781* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline AudioMixerSnapshot_tB9A62E6CFA52643B938E4FBFFAE1A5ED30907781* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline AudioMixerSnapshot_tB9A62E6CFA52643B938E4FBFFAE1A5ED30907781** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, AudioMixerSnapshot_tB9A62E6CFA52643B938E4FBFFAE1A5ED30907781* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_m69C8773D6967F3B224777183E24EA621CE056F8F_gshared_inline (Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* __this, bool ___0_obj, const RuntimeMethod* method) ;

IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AudioSettings_GetSampleRate_mF571145D34E609D5F0F8C232FB9FDCCCC521F2A5 (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSettings_GetConfiguration_Injected_m74228B679C071A70B4C5F7C46A88AFC046B9F8DA (AudioConfiguration_t4C8585EA98B6559B306B6FAD6A68088555394A5D* ___0_ret, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AudioConfigurationChangeHandler_Invoke_m4DC27DD11512481B60071B20284E6886DAE54DE2_inline (AudioConfigurationChangeHandler_tE071B0CBA3B3A77D3E41F5FCB65B4017885B3177* __this, bool ___0_deviceWasChanged, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Mobile_get_muteState_m64C1E8C61537317A7F153E1A72F7D39D85DA684D_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Mobile_set_muteState_m7C9A464BCA3762330E18CCAD79AF6C47B863CA02_inline (bool ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Mobile_get_stopAudioOutputOnMute_m43EC82258D38C418353DFE19F32B51B64B18DCCA (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mobile_StopAudioOutput_m10B8CEF668EE4967D0AD1D6741B6A37540C28A46 (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mobile_StartAudioOutput_m731D1EEEE7A0D56BAADD571BA0FCAC13FB071223 (const RuntimeMethod* method) ;
inline void Action_1_Invoke_m69C8773D6967F3B224777183E24EA621CE056F8F_inline (Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* __this, bool ___0_obj, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C*, bool, const RuntimeMethod*))Action_1_Invoke_m69C8773D6967F3B224777183E24EA621CE056F8F_gshared_inline)(__this, ___0_obj, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AudioSettings_StartAudioOutput_mB04D851DD0E6115DEEFB55779F880146263C67BE (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AudioSettings_StopAudioOutput_m3FE7A8EADAB2FB570BB05F7C353E25E15885D1CB (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m2149FA40CEC8D82AC20D3508AB40C0D8EFEF68E6 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AudioClip_get_channels_mFEECF5D6389D196BA5102EB79257298B9FDC9F84 (AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AudioClip_GetName_m561BBA037957E25D5BC5A962A1AA0C789895C9D1 (AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B (String_t* ___0_str0, String_t* ___1_str1, String_t* ___2_str2, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB (RuntimeObject* ___0_message, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AudioClip_GetData_mBDEFD7D7C8E5DEA3CCEE2D7DB406DBB0C244924E (AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___0_clip, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___1_data, int32_t ___2_numSamples, int32_t ___3_samplesOffset, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AudioClip_get_samples_mDEA01CA75E7DEA0F8D480E4AF97FB96085BCF38E (AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465 (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* __this, String_t* ___0_message, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AudioClip_SetData_mB49A9BC4639C62B9C8B22319D33D46AAD176BC3B (AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___0_clip, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___1_data, int32_t ___2_numsamples, int32_t ___3_samplesOffset, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* AudioClip_Create_m988FEB04BC74440E65C3CF07414E4867AAE737F8 (String_t* ___0_name, int32_t ___1_lengthSamples, int32_t ___2_channels, int32_t ___3_frequency, bool ___4_stream, PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E* ___5_pcmreadercallback, PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072* ___6_pcmsetpositioncallback, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NullReferenceException__ctor_mD26D62094A5E49C18D817817E17FDFBC1D3BD752 (NullReferenceException_tBDE63A6D24569B964908408389070C6A9F5005BB* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* AudioClip_Construct_Internal_m88BC07CE3F412DDB62820F9430D1D52DA42A26F6 (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioClip_add_m_PCMReaderCallback_mA226EA143D90E04117A740FC9FA9F1111346CA83 (AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* __this, PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioClip_add_m_PCMSetPositionCallback_mB280AD93A847C65F536D846FECC7DCBE9266C37F (AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* __this, PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioClip_CreateUserSound_m34DA102DD6848D555D4A9D45AFAA9D3E5574BC45 (AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* __this, String_t* ___0_name, int32_t ___1_lengthSamples, int32_t ___2_channels, int32_t ___3_frequency, bool ___4_stream, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t* Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00 (Delegate_t* ___0_a, Delegate_t* ___1_b, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t* Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3 (Delegate_t* ___0_source, Delegate_t* ___1_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PCMReaderCallback_Invoke_m76784C690C36B513E2AA5B0E4FD9831B2C7E5152_inline (PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E* __this, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___0_data, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PCMSetPositionCallback_Invoke_m434D4F02FA25F91DF6199EC5A799C551C7F93702_inline (PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072* __this, int32_t ___0_position, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AudioSource_GetPitch_m80F6D2BAF966F669253E9231AFCFFC303779913D (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ___0_source, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_SetPitch_mE75DEDF8F37301BDA63E0F545A7A00850C24F53E (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ___0_source, float ___1_pitch, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_PlayHelper_m4DE8C48925C3548BED306DAB9F87939F24A46960 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ___0_source, uint64_t ___1_delay, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_Play_m10DB5ACD1CC32EE433DBC10416B1450A30DE5F16 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, double ___0_delay, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_PlayOneShot_mF6FE95C58996B38EF6E7F7482F95F5E15E0AB30B (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___0_clip, float ___1_volumeScale, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_x, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___1_y, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9 (RuntimeObject* ___0_message, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_PlayOneShotHelper_mD110EAF42353687BD0B1190EEF30F0C65A4CF265 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ___0_source, AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___1_clip, float ___2_volumeScale, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_Stop_m8A4872F0A2680798CD28894DD28609445C4783F5 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, bool ___0_stopOneShots, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_PlayClipAtPoint_mF9D129487C356127ADA3AB5C0A67C7D00F26E3DD (AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___0_clip, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_position, float ___2_volume, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject__ctor_m37D512B05D292F954792225E6C6EEE95293A9B88 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, String_t* ___0_name, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57 (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___0_handle, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* GameObject_AddComponent_mDF246771EC34613FA6AF0C98D443368FB43E9F36 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, Type_t* ___0_componentType, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_set_clip_mFF441895E274286C88D9C75ED5CA1B1B39528D70 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_set_spatialBlend_mCEE7A3E87A8C146E048B2CA3413FDC7BDB7BE001 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, float ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_set_volume_mD902BBDBBDE0E3C148609BF3C05096148E90F2C0 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, float ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_Play_m95DF07111C61D0E0F00257A00384D31531D590C3 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AudioClip_get_length_m6102CB29AF65988797452E4D6E43D4788303873D (AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_timeScale_m1F45A413D4EEA08B1E0988022512C137F6C1E616 (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_m064F2A066491D2DC4FFCFBDBE5FCFFB807A04436 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_obj, float ___1_t, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_SetCustomCurveHelper_m3921C8867C4075133FEF2629601FF44400BA86E9 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ___0_source, int32_t ___1_type, AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* ___2_curve, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Microphone_GetMicrophoneDeviceIDFromName_mD33349A5B41E037F04802638690FBA891035C238 (String_t* ___0_name, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9E3155FB84015C823606188F53B47CB44C444991 (String_t* ___0_str0, String_t* ___1_str1, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5 (int32_t* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* Microphone_StartRecord_m561E1A2B878937E556D6FCABC3FE735CB818D897 (int32_t ___0_deviceID, bool ___1_loop, float ___2_lengthSec, int32_t ___3_frequency, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Microphone_EndRecord_m6F4983F3A002DA6F07F979D42D0750A1C3D16156 (int32_t ___0_deviceID, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Microphone_IsRecording_m59B6BAF774312891C815FCC4D0304256FDC93CB0 (int32_t ___0_deviceID, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Microphone_GetRecordPosition_m73C6D07638BD2BB56C6FA91FF19AAE591A2782C6 (int32_t ___0_deviceID, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Microphone_GetDeviceCaps_mEE44F844E84A87EE9B8CB7F241DB365309CC80AC (int32_t ___0_deviceID, int32_t* ___1_minFreq, int32_t* ___2_maxFreq, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 AudioClipPlayable_GetHandle_mEA1D664328FF9B08E4F7D5EBCD4B51A754D97C44 (AudioClipPlayable_tD4B758E68CAE03CB0CD31F90C8A3E603B97143A0* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayableHandle_op_Equality_m0E6C48A28F75A870AC22ADE3BD42F7F70A43C99C (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 ___0_x, PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 ___1_y, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AudioClipPlayable_Equals_m9C1C75ACBB74FE06AD02BE4643F6EB39413EFF83 (AudioClipPlayable_tD4B758E68CAE03CB0CD31F90C8A3E603B97143A0* __this, AudioClipPlayable_tD4B758E68CAE03CB0CD31F90C8A3E603B97143A0 ___0_other, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AudioMixer_tE2E8D79241711CDF9AB428C7FB96A35D80E40B04* AudioMixerSnapshot_get_audioMixer_mCC13199F7F9EBB2C5510DFA750A501747229CBF5 (AudioMixerSnapshot_tB9A62E6CFA52643B938E4FBFFAE1A5ED30907781* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_x, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___1_y, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m647EBF831F54B6DF7D5AFA5FD012CF4EE7571B6A (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___0_values, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioMixer_TransitionToSnapshotInternal_m9D07330A3EF997CC4BB165829D8D2AD6187A8DD0 (AudioMixer_tE2E8D79241711CDF9AB428C7FB96A35D80E40B04* __this, AudioMixerSnapshot_tB9A62E6CFA52643B938E4FBFFAE1A5ED30907781* ___0_snapshot, float ___1_timeToReach, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 AudioMixerPlayable_GetHandle_m6C182D9794E901D123223BB57738A302BEAB41FD (AudioMixerPlayable_t6AADDF0C53DF1B4C17969EC24B3B4E4975F3A56C* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AudioMixerPlayable_Equals_mDFB945EB48199A338BAD00D40FB8EEC34CF64D57 (AudioMixerPlayable_t6AADDF0C53DF1B4C17969EC24B3B4E4975F3A56C* __this, AudioMixerPlayable_t6AADDF0C53DF1B4C17969EC24B3B4E4975F3A56C ___0_other, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioMixer_TransitionToSnapshot_m308E8D50A4573EFDD381ED7DEC23162F8CD0EB5D (AudioMixer_tE2E8D79241711CDF9AB428C7FB96A35D80E40B04* __this, AudioMixerSnapshot_tB9A62E6CFA52643B938E4FBFFAE1A5ED30907781* ___0_snapshot, float ___1_timeToReach, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SampleFramesHandler_Invoke_m478D5645634B8C734E58B59CF7750797FC54F1BC_inline (SampleFramesHandler_tFE84FF9BBCEFB880D46227188F375BEF680AAA30* __this, AudioSampleProvider_t602353124A2F6F2AEC38E56C3C21932344F712E2* ___0_provider, uint32_t ___1_sampleFrameCount, const RuntimeMethod* method) ;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AudioSettings_GetSampleRate_mF571145D34E609D5F0F8C232FB9FDCCCC521F2A5 (const RuntimeMethod* method) 
{
	typedef int32_t (*AudioSettings_GetSampleRate_mF571145D34E609D5F0F8C232FB9FDCCCC521F2A5_ftn) ();
	static AudioSettings_GetSampleRate_mF571145D34E609D5F0F8C232FB9FDCCCC521F2A5_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioSettings_GetSampleRate_mF571145D34E609D5F0F8C232FB9FDCCCC521F2A5_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioSettings::GetSampleRate()");
	int32_t icallRetVal = _il2cpp_icall_func();
	return icallRetVal;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double AudioSettings_get_dspTime_m246053C21870BC68BF7BBC5C5AC1B8F25337AEEA (const RuntimeMethod* method) 
{
	typedef double (*AudioSettings_get_dspTime_m246053C21870BC68BF7BBC5C5AC1B8F25337AEEA_ftn) ();
	static AudioSettings_get_dspTime_m246053C21870BC68BF7BBC5C5AC1B8F25337AEEA_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioSettings_get_dspTime_m246053C21870BC68BF7BBC5C5AC1B8F25337AEEA_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioSettings::get_dspTime()");
	double icallRetVal = _il2cpp_icall_func();
	return icallRetVal;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AudioSettings_get_outputSampleRate_mEACF8FD7BFDFBD76EB8FC7E438B3AF19DB57BC6D (const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0;
		L_0 = AudioSettings_GetSampleRate_mF571145D34E609D5F0F8C232FB9FDCCCC521F2A5(NULL);
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSettings_GetDSPBufferSize_mA02A8E7960F597D6F6CE6402B59410B51EC32F59 (int32_t* ___0_bufferLength, int32_t* ___1_numBuffers, const RuntimeMethod* method) 
{
	typedef void (*AudioSettings_GetDSPBufferSize_mA02A8E7960F597D6F6CE6402B59410B51EC32F59_ftn) (int32_t*, int32_t*);
	static AudioSettings_GetDSPBufferSize_mA02A8E7960F597D6F6CE6402B59410B51EC32F59_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioSettings_GetDSPBufferSize_mA02A8E7960F597D6F6CE6402B59410B51EC32F59_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioSettings::GetDSPBufferSize(System.Int32&,System.Int32&)");
	_il2cpp_icall_func(___0_bufferLength, ___1_numBuffers);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AudioConfiguration_t4C8585EA98B6559B306B6FAD6A68088555394A5D AudioSettings_GetConfiguration_mDA005BAD9577EBBE375F6D6C040D7F110508C910 (const RuntimeMethod* method) 
{
	AudioConfiguration_t4C8585EA98B6559B306B6FAD6A68088555394A5D V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		AudioSettings_GetConfiguration_Injected_m74228B679C071A70B4C5F7C46A88AFC046B9F8DA((&V_0), NULL);
		AudioConfiguration_t4C8585EA98B6559B306B6FAD6A68088555394A5D L_0 = V_0;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSettings_InvokeOnAudioConfigurationChanged_m8273D3AEB24F4C3E374238B6F699BE6696808E85 (bool ___0_deviceWasChanged, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AudioSettings_t66C4BCA1E463B061E2EC9063FB882ACED20D47BD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		AudioConfigurationChangeHandler_tE071B0CBA3B3A77D3E41F5FCB65B4017885B3177* L_0 = ((AudioSettings_t66C4BCA1E463B061E2EC9063FB882ACED20D47BD_StaticFields*)il2cpp_codegen_static_fields_for(AudioSettings_t66C4BCA1E463B061E2EC9063FB882ACED20D47BD_il2cpp_TypeInfo_var))->___OnAudioConfigurationChanged_0;
		V_0 = (bool)((!(((RuntimeObject*)(AudioConfigurationChangeHandler_tE071B0CBA3B3A77D3E41F5FCB65B4017885B3177*)L_0) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		AudioConfigurationChangeHandler_tE071B0CBA3B3A77D3E41F5FCB65B4017885B3177* L_2 = ((AudioSettings_t66C4BCA1E463B061E2EC9063FB882ACED20D47BD_StaticFields*)il2cpp_codegen_static_fields_for(AudioSettings_t66C4BCA1E463B061E2EC9063FB882ACED20D47BD_il2cpp_TypeInfo_var))->___OnAudioConfigurationChanged_0;
		bool L_3 = ___0_deviceWasChanged;
		NullCheck(L_2);
		AudioConfigurationChangeHandler_Invoke_m4DC27DD11512481B60071B20284E6886DAE54DE2_inline(L_2, L_3, NULL);
	}

IL_0019:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSettings_InvokeOnAudioSystemShuttingDown_m1B9895D60B3267EBDEC69B9169730DBAD8325E90 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AudioSettings_t66C4BCA1E463B061E2EC9063FB882ACED20D47BD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* G_B2_0 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* G_B1_0 = NULL;
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_0 = ((AudioSettings_t66C4BCA1E463B061E2EC9063FB882ACED20D47BD_StaticFields*)il2cpp_codegen_static_fields_for(AudioSettings_t66C4BCA1E463B061E2EC9063FB882ACED20D47BD_il2cpp_TypeInfo_var))->___OnAudioSystemShuttingDown_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_1 = L_0;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000b;
		}
		G_B1_0 = L_1;
	}
	{
		goto IL_0011;
	}

IL_000b:
	{
		NullCheck(G_B2_0);
		Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline(G_B2_0, NULL);
	}

IL_0011:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSettings_InvokeOnAudioSystemStartedUp_m7FE042936237E5BDCB20299D8C4CF583B661468C (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AudioSettings_t66C4BCA1E463B061E2EC9063FB882ACED20D47BD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* G_B2_0 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* G_B1_0 = NULL;
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_0 = ((AudioSettings_t66C4BCA1E463B061E2EC9063FB882ACED20D47BD_StaticFields*)il2cpp_codegen_static_fields_for(AudioSettings_t66C4BCA1E463B061E2EC9063FB882ACED20D47BD_il2cpp_TypeInfo_var))->___OnAudioSystemStartedUp_2;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_1 = L_0;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000b;
		}
		G_B1_0 = L_1;
	}
	{
		goto IL_0011;
	}

IL_000b:
	{
		NullCheck(G_B2_0);
		Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline(G_B2_0, NULL);
	}

IL_0011:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AudioSettings_StartAudioOutput_mB04D851DD0E6115DEEFB55779F880146263C67BE (const RuntimeMethod* method) 
{
	typedef bool (*AudioSettings_StartAudioOutput_mB04D851DD0E6115DEEFB55779F880146263C67BE_ftn) ();
	static AudioSettings_StartAudioOutput_mB04D851DD0E6115DEEFB55779F880146263C67BE_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioSettings_StartAudioOutput_mB04D851DD0E6115DEEFB55779F880146263C67BE_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioSettings::StartAudioOutput()");
	bool icallRetVal = _il2cpp_icall_func();
	return icallRetVal;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AudioSettings_StopAudioOutput_m3FE7A8EADAB2FB570BB05F7C353E25E15885D1CB (const RuntimeMethod* method) 
{
	typedef bool (*AudioSettings_StopAudioOutput_m3FE7A8EADAB2FB570BB05F7C353E25E15885D1CB_ftn) ();
	static AudioSettings_StopAudioOutput_m3FE7A8EADAB2FB570BB05F7C353E25E15885D1CB_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioSettings_StopAudioOutput_m3FE7A8EADAB2FB570BB05F7C353E25E15885D1CB_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioSettings::StopAudioOutput()");
	bool icallRetVal = _il2cpp_icall_func();
	return icallRetVal;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSettings_GetConfiguration_Injected_m74228B679C071A70B4C5F7C46A88AFC046B9F8DA (AudioConfiguration_t4C8585EA98B6559B306B6FAD6A68088555394A5D* ___0_ret, const RuntimeMethod* method) 
{
	typedef void (*AudioSettings_GetConfiguration_Injected_m74228B679C071A70B4C5F7C46A88AFC046B9F8DA_ftn) (AudioConfiguration_t4C8585EA98B6559B306B6FAD6A68088555394A5D*);
	static AudioSettings_GetConfiguration_Injected_m74228B679C071A70B4C5F7C46A88AFC046B9F8DA_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioSettings_GetConfiguration_Injected_m74228B679C071A70B4C5F7C46A88AFC046B9F8DA_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioSettings::GetConfiguration_Injected(UnityEngine.AudioConfiguration&)");
	_il2cpp_icall_func(___0_ret);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void AudioConfigurationChangeHandler_Invoke_m4DC27DD11512481B60071B20284E6886DAE54DE2_Multicast(AudioConfigurationChangeHandler_tE071B0CBA3B3A77D3E41F5FCB65B4017885B3177* __this, bool ___0_deviceWasChanged, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		AudioConfigurationChangeHandler_tE071B0CBA3B3A77D3E41F5FCB65B4017885B3177* currentDelegate = reinterpret_cast<AudioConfigurationChangeHandler_tE071B0CBA3B3A77D3E41F5FCB65B4017885B3177*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, bool, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___0_deviceWasChanged, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void AudioConfigurationChangeHandler_Invoke_m4DC27DD11512481B60071B20284E6886DAE54DE2_OpenInst(AudioConfigurationChangeHandler_tE071B0CBA3B3A77D3E41F5FCB65B4017885B3177* __this, bool ___0_deviceWasChanged, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (bool, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_deviceWasChanged, method);
}
void AudioConfigurationChangeHandler_Invoke_m4DC27DD11512481B60071B20284E6886DAE54DE2_OpenStatic(AudioConfigurationChangeHandler_tE071B0CBA3B3A77D3E41F5FCB65B4017885B3177* __this, bool ___0_deviceWasChanged, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (bool, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_deviceWasChanged, method);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_AudioConfigurationChangeHandler_tE071B0CBA3B3A77D3E41F5FCB65B4017885B3177 (AudioConfigurationChangeHandler_tE071B0CBA3B3A77D3E41F5FCB65B4017885B3177* __this, bool ___0_deviceWasChanged, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(int32_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	il2cppPInvokeFunc(static_cast<int32_t>(___0_deviceWasChanged));

}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioConfigurationChangeHandler__ctor_mA9827AB9472EC8EE0A0F0FC24EBC06B4740DD944 (AudioConfigurationChangeHandler_tE071B0CBA3B3A77D3E41F5FCB65B4017885B3177* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_method_pointer((RuntimeMethod*)___1_method);
	__this->___method_3 = ___1_method;
	__this->___m_target_2 = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 1;
		if (isOpen)
			__this->___invoke_impl_1 = (intptr_t)&AudioConfigurationChangeHandler_Invoke_m4DC27DD11512481B60071B20284E6886DAE54DE2_OpenStatic;
		else
			{
				__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
				__this->___method_code_6 = (intptr_t)__this->___m_target_2;
			}
	}
	else
	{
		if (___0_object == NULL)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
		__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
		__this->___method_code_6 = (intptr_t)__this->___m_target_2;
	}
	__this->___extra_arg_5 = (intptr_t)&AudioConfigurationChangeHandler_Invoke_m4DC27DD11512481B60071B20284E6886DAE54DE2_Multicast;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioConfigurationChangeHandler_Invoke_m4DC27DD11512481B60071B20284E6886DAE54DE2 (AudioConfigurationChangeHandler_tE071B0CBA3B3A77D3E41F5FCB65B4017885B3177* __this, bool ___0_deviceWasChanged, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, bool, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_deviceWasChanged, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Mobile_get_muteState_m64C1E8C61537317A7F153E1A72F7D39D85DA684D (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Mobile_t304A73480DF447472BDB16BA19A9E4FE2C8CB2DD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = ((Mobile_t304A73480DF447472BDB16BA19A9E4FE2C8CB2DD_StaticFields*)il2cpp_codegen_static_fields_for(Mobile_t304A73480DF447472BDB16BA19A9E4FE2C8CB2DD_il2cpp_TypeInfo_var))->___U3CmuteStateU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mobile_set_muteState_m7C9A464BCA3762330E18CCAD79AF6C47B863CA02 (bool ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Mobile_t304A73480DF447472BDB16BA19A9E4FE2C8CB2DD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = ___0_value;
		((Mobile_t304A73480DF447472BDB16BA19A9E4FE2C8CB2DD_StaticFields*)il2cpp_codegen_static_fields_for(Mobile_t304A73480DF447472BDB16BA19A9E4FE2C8CB2DD_il2cpp_TypeInfo_var))->___U3CmuteStateU3Ek__BackingField_0 = L_0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Mobile_get_stopAudioOutputOnMute_m43EC82258D38C418353DFE19F32B51B64B18DCCA (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Mobile_t304A73480DF447472BDB16BA19A9E4FE2C8CB2DD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		bool L_0 = ((Mobile_t304A73480DF447472BDB16BA19A9E4FE2C8CB2DD_StaticFields*)il2cpp_codegen_static_fields_for(Mobile_t304A73480DF447472BDB16BA19A9E4FE2C8CB2DD_il2cpp_TypeInfo_var))->____stopAudioOutputOnMute_1;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		bool L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mobile_InvokeOnMuteStateChanged_mE5242862F948BA9FBB013A2B45F645B6A21E6198 (bool ___0_mute, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Mobile_t304A73480DF447472BDB16BA19A9E4FE2C8CB2DD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	{
		bool L_0 = ___0_mute;
		bool L_1;
		L_1 = Mobile_get_muteState_m64C1E8C61537317A7F153E1A72F7D39D85DA684D_inline(NULL);
		V_0 = (bool)((((int32_t)((((int32_t)L_0) == ((int32_t)L_1))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0053;
		}
	}
	{
		bool L_3 = ___0_mute;
		Mobile_set_muteState_m7C9A464BCA3762330E18CCAD79AF6C47B863CA02_inline(L_3, NULL);
		bool L_4;
		L_4 = Mobile_get_stopAudioOutputOnMute_m43EC82258D38C418353DFE19F32B51B64B18DCCA(NULL);
		V_1 = L_4;
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_003a;
		}
	}
	{
		bool L_6;
		L_6 = Mobile_get_muteState_m64C1E8C61537317A7F153E1A72F7D39D85DA684D_inline(NULL);
		V_2 = L_6;
		bool L_7 = V_2;
		if (!L_7)
		{
			goto IL_0033;
		}
	}
	{
		Mobile_StopAudioOutput_m10B8CEF668EE4967D0AD1D6741B6A37540C28A46(NULL);
		goto IL_0039;
	}

IL_0033:
	{
		Mobile_StartAudioOutput_m731D1EEEE7A0D56BAADD571BA0FCAC13FB071223(NULL);
	}

IL_0039:
	{
	}

IL_003a:
	{
		Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* L_8 = ((Mobile_t304A73480DF447472BDB16BA19A9E4FE2C8CB2DD_StaticFields*)il2cpp_codegen_static_fields_for(Mobile_t304A73480DF447472BDB16BA19A9E4FE2C8CB2DD_il2cpp_TypeInfo_var))->___OnMuteStateChanged_2;
		V_3 = (bool)((!(((RuntimeObject*)(Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C*)L_8) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_9 = V_3;
		if (!L_9)
		{
			goto IL_0052;
		}
	}
	{
		Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* L_10 = ((Mobile_t304A73480DF447472BDB16BA19A9E4FE2C8CB2DD_StaticFields*)il2cpp_codegen_static_fields_for(Mobile_t304A73480DF447472BDB16BA19A9E4FE2C8CB2DD_il2cpp_TypeInfo_var))->___OnMuteStateChanged_2;
		bool L_11 = ___0_mute;
		NullCheck(L_10);
		Action_1_Invoke_m69C8773D6967F3B224777183E24EA621CE056F8F_inline(L_10, L_11, NULL);
	}

IL_0052:
	{
	}

IL_0053:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Mobile_InvokeIsStopAudioOutputOnMuteEnabled_m854CB455C7BE7ADC06BABCB9AA24F60309AE7ED1 (const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		bool L_0;
		L_0 = Mobile_get_stopAudioOutputOnMute_m43EC82258D38C418353DFE19F32B51B64B18DCCA(NULL);
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		bool L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mobile_StartAudioOutput_m731D1EEEE7A0D56BAADD571BA0FCAC13FB071223 (const RuntimeMethod* method) 
{
	{
		bool L_0;
		L_0 = AudioSettings_StartAudioOutput_mB04D851DD0E6115DEEFB55779F880146263C67BE(NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mobile_StopAudioOutput_m10B8CEF668EE4967D0AD1D6741B6A37540C28A46 (const RuntimeMethod* method) 
{
	{
		bool L_0;
		L_0 = AudioSettings_StopAudioOutput_m3FE7A8EADAB2FB570BB05F7C353E25E15885D1CB(NULL);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioClip__ctor_m038DA97CB07076D1D9391E1E103F0F41D3622F89 (AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->___m_PCMReaderCallback_4 = (PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_PCMReaderCallback_4), (void*)(PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E*)NULL);
		__this->___m_PCMSetPositionCallback_5 = (PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_PCMSetPositionCallback_5), (void*)(PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072*)NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object__ctor_m2149FA40CEC8D82AC20D3508AB40C0D8EFEF68E6(__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AudioClip_GetData_mBDEFD7D7C8E5DEA3CCEE2D7DB406DBB0C244924E (AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___0_clip, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___1_data, int32_t ___2_numSamples, int32_t ___3_samplesOffset, const RuntimeMethod* method) 
{
	typedef bool (*AudioClip_GetData_mBDEFD7D7C8E5DEA3CCEE2D7DB406DBB0C244924E_ftn) (AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20*, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*, int32_t, int32_t);
	static AudioClip_GetData_mBDEFD7D7C8E5DEA3CCEE2D7DB406DBB0C244924E_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioClip_GetData_mBDEFD7D7C8E5DEA3CCEE2D7DB406DBB0C244924E_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioClip::GetData(UnityEngine.AudioClip,System.Single[],System.Int32,System.Int32)");
	bool icallRetVal = _il2cpp_icall_func(___0_clip, ___1_data, ___2_numSamples, ___3_samplesOffset);
	return icallRetVal;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AudioClip_SetData_mB49A9BC4639C62B9C8B22319D33D46AAD176BC3B (AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___0_clip, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___1_data, int32_t ___2_numsamples, int32_t ___3_samplesOffset, const RuntimeMethod* method) 
{
	typedef bool (*AudioClip_SetData_mB49A9BC4639C62B9C8B22319D33D46AAD176BC3B_ftn) (AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20*, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*, int32_t, int32_t);
	static AudioClip_SetData_mB49A9BC4639C62B9C8B22319D33D46AAD176BC3B_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioClip_SetData_mB49A9BC4639C62B9C8B22319D33D46AAD176BC3B_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioClip::SetData(UnityEngine.AudioClip,System.Single[],System.Int32,System.Int32)");
	bool icallRetVal = _il2cpp_icall_func(___0_clip, ___1_data, ___2_numsamples, ___3_samplesOffset);
	return icallRetVal;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* AudioClip_Construct_Internal_m88BC07CE3F412DDB62820F9430D1D52DA42A26F6 (const RuntimeMethod* method) 
{
	typedef AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* (*AudioClip_Construct_Internal_m88BC07CE3F412DDB62820F9430D1D52DA42A26F6_ftn) ();
	static AudioClip_Construct_Internal_m88BC07CE3F412DDB62820F9430D1D52DA42A26F6_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioClip_Construct_Internal_m88BC07CE3F412DDB62820F9430D1D52DA42A26F6_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioClip::Construct_Internal()");
	AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* icallRetVal = _il2cpp_icall_func();
	return icallRetVal;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AudioClip_GetName_m561BBA037957E25D5BC5A962A1AA0C789895C9D1 (AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* __this, const RuntimeMethod* method) 
{
	typedef String_t* (*AudioClip_GetName_m561BBA037957E25D5BC5A962A1AA0C789895C9D1_ftn) (AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20*);
	static AudioClip_GetName_m561BBA037957E25D5BC5A962A1AA0C789895C9D1_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioClip_GetName_m561BBA037957E25D5BC5A962A1AA0C789895C9D1_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioClip::GetName()");
	String_t* icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioClip_CreateUserSound_m34DA102DD6848D555D4A9D45AFAA9D3E5574BC45 (AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* __this, String_t* ___0_name, int32_t ___1_lengthSamples, int32_t ___2_channels, int32_t ___3_frequency, bool ___4_stream, const RuntimeMethod* method) 
{
	typedef void (*AudioClip_CreateUserSound_m34DA102DD6848D555D4A9D45AFAA9D3E5574BC45_ftn) (AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20*, String_t*, int32_t, int32_t, int32_t, bool);
	static AudioClip_CreateUserSound_m34DA102DD6848D555D4A9D45AFAA9D3E5574BC45_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioClip_CreateUserSound_m34DA102DD6848D555D4A9D45AFAA9D3E5574BC45_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioClip::CreateUserSound(System.String,System.Int32,System.Int32,System.Int32,System.Boolean)");
	_il2cpp_icall_func(__this, ___0_name, ___1_lengthSamples, ___2_channels, ___3_frequency, ___4_stream);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AudioClip_get_length_m6102CB29AF65988797452E4D6E43D4788303873D (AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* __this, const RuntimeMethod* method) 
{
	typedef float (*AudioClip_get_length_m6102CB29AF65988797452E4D6E43D4788303873D_ftn) (AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20*);
	static AudioClip_get_length_m6102CB29AF65988797452E4D6E43D4788303873D_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioClip_get_length_m6102CB29AF65988797452E4D6E43D4788303873D_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioClip::get_length()");
	float icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AudioClip_get_samples_mDEA01CA75E7DEA0F8D480E4AF97FB96085BCF38E (AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* __this, const RuntimeMethod* method) 
{
	typedef int32_t (*AudioClip_get_samples_mDEA01CA75E7DEA0F8D480E4AF97FB96085BCF38E_ftn) (AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20*);
	static AudioClip_get_samples_mDEA01CA75E7DEA0F8D480E4AF97FB96085BCF38E_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioClip_get_samples_mDEA01CA75E7DEA0F8D480E4AF97FB96085BCF38E_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioClip::get_samples()");
	int32_t icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AudioClip_get_channels_mFEECF5D6389D196BA5102EB79257298B9FDC9F84 (AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* __this, const RuntimeMethod* method) 
{
	typedef int32_t (*AudioClip_get_channels_mFEECF5D6389D196BA5102EB79257298B9FDC9F84_ftn) (AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20*);
	static AudioClip_get_channels_mFEECF5D6389D196BA5102EB79257298B9FDC9F84_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioClip_get_channels_mFEECF5D6389D196BA5102EB79257298B9FDC9F84_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioClip::get_channels()");
	int32_t icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AudioClip_get_frequency_m6647E10F4B2B1335187B0066E82468CCCF19647B (AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* __this, const RuntimeMethod* method) 
{
	typedef int32_t (*AudioClip_get_frequency_m6647E10F4B2B1335187B0066E82468CCCF19647B_ftn) (AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20*);
	static AudioClip_get_frequency_m6647E10F4B2B1335187B0066E82468CCCF19647B_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioClip_get_frequency_m6647E10F4B2B1335187B0066E82468CCCF19647B_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioClip::get_frequency()");
	int32_t icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AudioClip_GetData_m1F6480FFDA2E354A7D8C8DE40F61AAB5AF6B4A1D (AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* __this, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___0_data, int32_t ___1_offsetSamples, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8C53570A90E7EFA87FDB7F0DCC0EE1FCC019E426);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF52B980B71426E2D226C2ED5B2045868E72F85FF);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	bool V_2 = false;
	int32_t G_B5_0 = 0;
	{
		int32_t L_0;
		L_0 = AudioClip_get_channels_mFEECF5D6389D196BA5102EB79257298B9FDC9F84(__this, NULL);
		V_1 = (bool)((((int32_t)((((int32_t)L_0) > ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_0031;
		}
	}
	{
		String_t* L_2;
		L_2 = AudioClip_GetName_m561BBA037957E25D5BC5A962A1AA0C789895C9D1(__this, NULL);
		String_t* L_3;
		L_3 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(_stringLiteralF52B980B71426E2D226C2ED5B2045868E72F85FF, L_2, _stringLiteral8C53570A90E7EFA87FDB7F0DCC0EE1FCC019E426, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_3, NULL);
		V_2 = (bool)0;
		goto IL_004e;
	}

IL_0031:
	{
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_4 = ___0_data;
		if (L_4)
		{
			goto IL_0037;
		}
	}
	{
		G_B5_0 = 0;
		goto IL_0041;
	}

IL_0037:
	{
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_5 = ___0_data;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = AudioClip_get_channels_mFEECF5D6389D196BA5102EB79257298B9FDC9F84(__this, NULL);
		G_B5_0 = ((int32_t)(((int32_t)(((RuntimeArray*)L_5)->max_length))/L_6));
	}

IL_0041:
	{
		V_0 = G_B5_0;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_7 = ___0_data;
		int32_t L_8 = V_0;
		int32_t L_9 = ___1_offsetSamples;
		bool L_10;
		L_10 = AudioClip_GetData_mBDEFD7D7C8E5DEA3CCEE2D7DB406DBB0C244924E(__this, L_7, L_8, L_9, NULL);
		V_2 = L_10;
		goto IL_004e;
	}

IL_004e:
	{
		bool L_11 = V_2;
		return L_11;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AudioClip_SetData_m7B473C614C11953D746770F4F89B44600B5A6AF3 (AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* __this, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___0_data, int32_t ___1_offsetSamples, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5633EC5A323E76AB2DB48162D296F674B1A4AE13);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8C53570A90E7EFA87FDB7F0DCC0EE1FCC019E426);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	int32_t G_B5_0 = 0;
	int32_t G_B10_0 = 0;
	{
		int32_t L_0;
		L_0 = AudioClip_get_channels_mFEECF5D6389D196BA5102EB79257298B9FDC9F84(__this, NULL);
		V_0 = (bool)((((int32_t)((((int32_t)L_0) > ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0031;
		}
	}
	{
		String_t* L_2;
		L_2 = AudioClip_GetName_m561BBA037957E25D5BC5A962A1AA0C789895C9D1(__this, NULL);
		String_t* L_3;
		L_3 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(_stringLiteral5633EC5A323E76AB2DB48162D296F674B1A4AE13, L_2, _stringLiteral8C53570A90E7EFA87FDB7F0DCC0EE1FCC019E426, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_3, NULL);
		V_1 = (bool)0;
		goto IL_0082;
	}

IL_0031:
	{
		int32_t L_4 = ___1_offsetSamples;
		if ((((int32_t)L_4) < ((int32_t)0)))
		{
			goto IL_0043;
		}
	}
	{
		int32_t L_5 = ___1_offsetSamples;
		int32_t L_6;
		L_6 = AudioClip_get_samples_mDEA01CA75E7DEA0F8D480E4AF97FB96085BCF38E(__this, NULL);
		G_B5_0 = ((((int32_t)((((int32_t)L_5) < ((int32_t)L_6))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0044;
	}

IL_0043:
	{
		G_B5_0 = 1;
	}

IL_0044:
	{
		V_2 = (bool)G_B5_0;
		bool L_7 = V_2;
		if (!L_7)
		{
			goto IL_0053;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_8 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_8, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralA69BE8EF0F1482795ABF1CC395A765AA747ECD85)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_8, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AudioClip_SetData_m7B473C614C11953D746770F4F89B44600B5A6AF3_RuntimeMethod_var)));
	}

IL_0053:
	{
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_9 = ___0_data;
		if (!L_9)
		{
			goto IL_005d;
		}
	}
	{
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_10 = ___0_data;
		NullCheck(L_10);
		G_B10_0 = ((((int32_t)(((RuntimeArray*)L_10)->max_length)) == ((int32_t)0))? 1 : 0);
		goto IL_005e;
	}

IL_005d:
	{
		G_B10_0 = 1;
	}

IL_005e:
	{
		V_3 = (bool)G_B10_0;
		bool L_11 = V_3;
		if (!L_11)
		{
			goto IL_006d;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_12 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_12, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral747CA643504D60A83574C1454D344DADB4D2BA17)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_12, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AudioClip_SetData_m7B473C614C11953D746770F4F89B44600B5A6AF3_RuntimeMethod_var)));
	}

IL_006d:
	{
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_13 = ___0_data;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_14 = ___0_data;
		NullCheck(L_14);
		int32_t L_15;
		L_15 = AudioClip_get_channels_mFEECF5D6389D196BA5102EB79257298B9FDC9F84(__this, NULL);
		int32_t L_16 = ___1_offsetSamples;
		bool L_17;
		L_17 = AudioClip_SetData_mB49A9BC4639C62B9C8B22319D33D46AAD176BC3B(__this, L_13, ((int32_t)(((int32_t)(((RuntimeArray*)L_14)->max_length))/L_15)), L_16, NULL);
		V_1 = L_17;
		goto IL_0082;
	}

IL_0082:
	{
		bool L_18 = V_1;
		return L_18;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* AudioClip_Create_mE8111F06981E42666B6A9A59D0A3EBE002D2CDFB (String_t* ___0_name, int32_t ___1_lengthSamples, int32_t ___2_channels, int32_t ___3_frequency, bool ___4_stream, const RuntimeMethod* method) 
{
	AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* V_0 = NULL;
	AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* V_1 = NULL;
	{
		String_t* L_0 = ___0_name;
		int32_t L_1 = ___1_lengthSamples;
		int32_t L_2 = ___2_channels;
		int32_t L_3 = ___3_frequency;
		bool L_4 = ___4_stream;
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_5;
		L_5 = AudioClip_Create_m988FEB04BC74440E65C3CF07414E4867AAE737F8(L_0, L_1, L_2, L_3, L_4, (PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E*)NULL, (PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072*)NULL, NULL);
		V_0 = L_5;
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_6 = V_0;
		V_1 = L_6;
		goto IL_0013;
	}

IL_0013:
	{
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_7 = V_1;
		return L_7;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* AudioClip_Create_m988FEB04BC74440E65C3CF07414E4867AAE737F8 (String_t* ___0_name, int32_t ___1_lengthSamples, int32_t ___2_channels, int32_t ___3_frequency, bool ___4_stream, PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E* ___5_pcmreadercallback, PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072* ___6_pcmsetpositioncallback, const RuntimeMethod* method) 
{
	AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* V_7 = NULL;
	{
		String_t* L_0 = ___0_name;
		V_1 = (bool)((((RuntimeObject*)(String_t*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_000f;
		}
	}
	{
		NullReferenceException_tBDE63A6D24569B964908408389070C6A9F5005BB* L_2 = (NullReferenceException_tBDE63A6D24569B964908408389070C6A9F5005BB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NullReferenceException_tBDE63A6D24569B964908408389070C6A9F5005BB_il2cpp_TypeInfo_var)));
		NullReferenceException__ctor_mD26D62094A5E49C18D817817E17FDFBC1D3BD752(L_2, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AudioClip_Create_m988FEB04BC74440E65C3CF07414E4867AAE737F8_RuntimeMethod_var)));
	}

IL_000f:
	{
		int32_t L_3 = ___1_lengthSamples;
		V_2 = (bool)((((int32_t)((((int32_t)L_3) > ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_4 = V_2;
		if (!L_4)
		{
			goto IL_0025;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_5 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_5, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC563ED6549A22286FAAA38A5D49C5B247A52C622)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AudioClip_Create_m988FEB04BC74440E65C3CF07414E4867AAE737F8_RuntimeMethod_var)));
	}

IL_0025:
	{
		int32_t L_6 = ___2_channels;
		V_3 = (bool)((((int32_t)((((int32_t)L_6) > ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_7 = V_3;
		if (!L_7)
		{
			goto IL_003b;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_8 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_8, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB9ACF8E6DF73A863387F2ABAD61D84C3197C6B01)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_8, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AudioClip_Create_m988FEB04BC74440E65C3CF07414E4867AAE737F8_RuntimeMethod_var)));
	}

IL_003b:
	{
		int32_t L_9 = ___3_frequency;
		V_4 = (bool)((((int32_t)((((int32_t)L_9) > ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_10 = V_4;
		if (!L_10)
		{
			goto IL_0053;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_11 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_11, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralCC867B94415511BD48E92E3242D7EDA425D20035)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_11, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AudioClip_Create_m988FEB04BC74440E65C3CF07414E4867AAE737F8_RuntimeMethod_var)));
	}

IL_0053:
	{
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_12;
		L_12 = AudioClip_Construct_Internal_m88BC07CE3F412DDB62820F9430D1D52DA42A26F6(NULL);
		V_0 = L_12;
		PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E* L_13 = ___5_pcmreadercallback;
		V_5 = (bool)((!(((RuntimeObject*)(PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E*)L_13) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_14 = V_5;
		if (!L_14)
		{
			goto IL_006d;
		}
	}
	{
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_15 = V_0;
		PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E* L_16 = ___5_pcmreadercallback;
		NullCheck(L_15);
		AudioClip_add_m_PCMReaderCallback_mA226EA143D90E04117A740FC9FA9F1111346CA83(L_15, L_16, NULL);
	}

IL_006d:
	{
		PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072* L_17 = ___6_pcmsetpositioncallback;
		V_6 = (bool)((!(((RuntimeObject*)(PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072*)L_17) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_18 = V_6;
		if (!L_18)
		{
			goto IL_0081;
		}
	}
	{
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_19 = V_0;
		PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072* L_20 = ___6_pcmsetpositioncallback;
		NullCheck(L_19);
		AudioClip_add_m_PCMSetPositionCallback_mB280AD93A847C65F536D846FECC7DCBE9266C37F(L_19, L_20, NULL);
	}

IL_0081:
	{
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_21 = V_0;
		String_t* L_22 = ___0_name;
		int32_t L_23 = ___1_lengthSamples;
		int32_t L_24 = ___2_channels;
		int32_t L_25 = ___3_frequency;
		bool L_26 = ___4_stream;
		NullCheck(L_21);
		AudioClip_CreateUserSound_m34DA102DD6848D555D4A9D45AFAA9D3E5574BC45(L_21, L_22, L_23, L_24, L_25, L_26, NULL);
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_27 = V_0;
		V_7 = L_27;
		goto IL_0093;
	}

IL_0093:
	{
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_28 = V_7;
		return L_28;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioClip_add_m_PCMReaderCallback_mA226EA143D90E04117A740FC9FA9F1111346CA83 (AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* __this, PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E* V_0 = NULL;
	PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E* V_1 = NULL;
	PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E* V_2 = NULL;
	{
		PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E* L_0 = __this->___m_PCMReaderCallback_4;
		V_0 = L_0;
	}

IL_0007:
	{
		PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E* L_1 = V_0;
		V_1 = L_1;
		PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E* L_2 = V_1;
		PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_2, L_3, NULL);
		V_2 = ((PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E*)CastclassSealed((RuntimeObject*)L_4, PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E_il2cpp_TypeInfo_var));
		PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E** L_5 = (&__this->___m_PCMReaderCallback_4);
		PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E* L_6 = V_2;
		PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E* L_7 = V_1;
		PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E* L_8;
		L_8 = InterlockedCompareExchangeImpl<PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E*>(L_5, L_6, L_7);
		V_0 = L_8;
		PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E* L_9 = V_0;
		PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E* L_10 = V_1;
		if ((!(((RuntimeObject*)(PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E*)L_9) == ((RuntimeObject*)(PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioClip_remove_m_PCMReaderCallback_m3258A455005F4A94570B4F8FE28A5EDA91A88412 (AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* __this, PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E* V_0 = NULL;
	PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E* V_1 = NULL;
	PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E* V_2 = NULL;
	{
		PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E* L_0 = __this->___m_PCMReaderCallback_4;
		V_0 = L_0;
	}

IL_0007:
	{
		PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E* L_1 = V_0;
		V_1 = L_1;
		PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E* L_2 = V_1;
		PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_2, L_3, NULL);
		V_2 = ((PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E*)CastclassSealed((RuntimeObject*)L_4, PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E_il2cpp_TypeInfo_var));
		PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E** L_5 = (&__this->___m_PCMReaderCallback_4);
		PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E* L_6 = V_2;
		PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E* L_7 = V_1;
		PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E* L_8;
		L_8 = InterlockedCompareExchangeImpl<PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E*>(L_5, L_6, L_7);
		V_0 = L_8;
		PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E* L_9 = V_0;
		PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E* L_10 = V_1;
		if ((!(((RuntimeObject*)(PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E*)L_9) == ((RuntimeObject*)(PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioClip_add_m_PCMSetPositionCallback_mB280AD93A847C65F536D846FECC7DCBE9266C37F (AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* __this, PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072* V_0 = NULL;
	PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072* V_1 = NULL;
	PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072* V_2 = NULL;
	{
		PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072* L_0 = __this->___m_PCMSetPositionCallback_5;
		V_0 = L_0;
	}

IL_0007:
	{
		PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072* L_1 = V_0;
		V_1 = L_1;
		PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072* L_2 = V_1;
		PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_2, L_3, NULL);
		V_2 = ((PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072*)CastclassSealed((RuntimeObject*)L_4, PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072_il2cpp_TypeInfo_var));
		PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072** L_5 = (&__this->___m_PCMSetPositionCallback_5);
		PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072* L_6 = V_2;
		PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072* L_7 = V_1;
		PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072* L_8;
		L_8 = InterlockedCompareExchangeImpl<PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072*>(L_5, L_6, L_7);
		V_0 = L_8;
		PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072* L_9 = V_0;
		PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072* L_10 = V_1;
		if ((!(((RuntimeObject*)(PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072*)L_9) == ((RuntimeObject*)(PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioClip_remove_m_PCMSetPositionCallback_m39598139640580138742F129E0510917DF2E233C (AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* __this, PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072* V_0 = NULL;
	PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072* V_1 = NULL;
	PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072* V_2 = NULL;
	{
		PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072* L_0 = __this->___m_PCMSetPositionCallback_5;
		V_0 = L_0;
	}

IL_0007:
	{
		PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072* L_1 = V_0;
		V_1 = L_1;
		PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072* L_2 = V_1;
		PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_2, L_3, NULL);
		V_2 = ((PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072*)CastclassSealed((RuntimeObject*)L_4, PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072_il2cpp_TypeInfo_var));
		PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072** L_5 = (&__this->___m_PCMSetPositionCallback_5);
		PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072* L_6 = V_2;
		PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072* L_7 = V_1;
		PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072* L_8;
		L_8 = InterlockedCompareExchangeImpl<PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072*>(L_5, L_6, L_7);
		V_0 = L_8;
		PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072* L_9 = V_0;
		PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072* L_10 = V_1;
		if ((!(((RuntimeObject*)(PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072*)L_9) == ((RuntimeObject*)(PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioClip_InvokePCMReaderCallback_Internal_m766E5705AB5AE16F5F142867CC3758ABE4BF462C (AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* __this, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___0_data, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E* L_0 = __this->___m_PCMReaderCallback_4;
		V_0 = (bool)((!(((RuntimeObject*)(PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E*)L_0) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_001b;
		}
	}
	{
		PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E* L_2 = __this->___m_PCMReaderCallback_4;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_3 = ___0_data;
		NullCheck(L_2);
		PCMReaderCallback_Invoke_m76784C690C36B513E2AA5B0E4FD9831B2C7E5152_inline(L_2, L_3, NULL);
	}

IL_001b:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioClip_InvokePCMSetPositionCallback_Internal_m986EF703B7DDE42343730DE93A095D05B9F4DBB8 (AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* __this, int32_t ___0_position, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072* L_0 = __this->___m_PCMSetPositionCallback_5;
		V_0 = (bool)((!(((RuntimeObject*)(PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072*)L_0) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_001b;
		}
	}
	{
		PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072* L_2 = __this->___m_PCMSetPositionCallback_5;
		int32_t L_3 = ___0_position;
		NullCheck(L_2);
		PCMSetPositionCallback_Invoke_m434D4F02FA25F91DF6199EC5A799C551C7F93702_inline(L_2, L_3, NULL);
	}

IL_001b:
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
void PCMReaderCallback_Invoke_m76784C690C36B513E2AA5B0E4FD9831B2C7E5152_Multicast(PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E* __this, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___0_data, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E* currentDelegate = reinterpret_cast<PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___0_data, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void PCMReaderCallback_Invoke_m76784C690C36B513E2AA5B0E4FD9831B2C7E5152_OpenInst(PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E* __this, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___0_data, const RuntimeMethod* method)
{
	NullCheck(___0_data);
	typedef void (*FunctionPointerType) (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_data, method);
}
void PCMReaderCallback_Invoke_m76784C690C36B513E2AA5B0E4FD9831B2C7E5152_OpenStatic(PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E* __this, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___0_data, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_data, method);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E (PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E* __this, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___0_data, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(float*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	float* ____0_data_marshaled = NULL;
	if (___0_data != NULL)
	{
		____0_data_marshaled = reinterpret_cast<float*>((___0_data)->GetAddressAtUnchecked(0));
	}

	il2cppPInvokeFunc(____0_data_marshaled);

}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PCMReaderCallback__ctor_mF621B6CC1A4BA6525190C5037401CF2FD5C0CF28 (PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_method_pointer((RuntimeMethod*)___1_method);
	__this->___method_3 = ___1_method;
	__this->___m_target_2 = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 1;
		if (isOpen)
			__this->___invoke_impl_1 = (intptr_t)&PCMReaderCallback_Invoke_m76784C690C36B513E2AA5B0E4FD9831B2C7E5152_OpenStatic;
		else
			{
				__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
				__this->___method_code_6 = (intptr_t)__this->___m_target_2;
			}
	}
	else
	{
		bool isOpen = parameterCount == 0;
		if (isOpen)
		{
			__this->___invoke_impl_1 = (intptr_t)&PCMReaderCallback_Invoke_m76784C690C36B513E2AA5B0E4FD9831B2C7E5152_OpenInst;
		}
		else
		{
			if (___0_object == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&PCMReaderCallback_Invoke_m76784C690C36B513E2AA5B0E4FD9831B2C7E5152_Multicast;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PCMReaderCallback_Invoke_m76784C690C36B513E2AA5B0E4FD9831B2C7E5152 (PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E* __this, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___0_data, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_data, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void PCMSetPositionCallback_Invoke_m434D4F02FA25F91DF6199EC5A799C551C7F93702_Multicast(PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072* __this, int32_t ___0_position, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072* currentDelegate = reinterpret_cast<PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, int32_t, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___0_position, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void PCMSetPositionCallback_Invoke_m434D4F02FA25F91DF6199EC5A799C551C7F93702_OpenInst(PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072* __this, int32_t ___0_position, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_position, method);
}
void PCMSetPositionCallback_Invoke_m434D4F02FA25F91DF6199EC5A799C551C7F93702_OpenStatic(PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072* __this, int32_t ___0_position, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_position, method);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072 (PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072* __this, int32_t ___0_position, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(int32_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	il2cppPInvokeFunc(___0_position);

}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PCMSetPositionCallback__ctor_mD16F77DDB552EB69BB3F5EF39420B2F09F95455B (PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_method_pointer((RuntimeMethod*)___1_method);
	__this->___method_3 = ___1_method;
	__this->___m_target_2 = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 1;
		if (isOpen)
			__this->___invoke_impl_1 = (intptr_t)&PCMSetPositionCallback_Invoke_m434D4F02FA25F91DF6199EC5A799C551C7F93702_OpenStatic;
		else
			{
				__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
				__this->___method_code_6 = (intptr_t)__this->___m_target_2;
			}
	}
	else
	{
		if (___0_object == NULL)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
		__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
		__this->___method_code_6 = (intptr_t)__this->___m_target_2;
	}
	__this->___extra_arg_5 = (intptr_t)&PCMSetPositionCallback_Invoke_m434D4F02FA25F91DF6199EC5A799C551C7F93702_Multicast;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PCMSetPositionCallback_Invoke_m434D4F02FA25F91DF6199EC5A799C551C7F93702 (PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072* __this, int32_t ___0_position, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_position, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AudioListener_get_pause_mD5DE01AAFDE5CB1F747762091F18FF95963FF473 (const RuntimeMethod* method) 
{
	typedef bool (*AudioListener_get_pause_mD5DE01AAFDE5CB1F747762091F18FF95963FF473_ftn) ();
	static AudioListener_get_pause_mD5DE01AAFDE5CB1F747762091F18FF95963FF473_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioListener_get_pause_mD5DE01AAFDE5CB1F747762091F18FF95963FF473_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioListener::get_pause()");
	bool icallRetVal = _il2cpp_icall_func();
	return icallRetVal;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AudioSource_GetPitch_m80F6D2BAF966F669253E9231AFCFFC303779913D (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ___0_source, const RuntimeMethod* method) 
{
	typedef float (*AudioSource_GetPitch_m80F6D2BAF966F669253E9231AFCFFC303779913D_ftn) (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299*);
	static AudioSource_GetPitch_m80F6D2BAF966F669253E9231AFCFFC303779913D_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioSource_GetPitch_m80F6D2BAF966F669253E9231AFCFFC303779913D_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioSource::GetPitch(UnityEngine.AudioSource)");
	float icallRetVal = _il2cpp_icall_func(___0_source);
	return icallRetVal;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_SetPitch_mE75DEDF8F37301BDA63E0F545A7A00850C24F53E (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ___0_source, float ___1_pitch, const RuntimeMethod* method) 
{
	typedef void (*AudioSource_SetPitch_mE75DEDF8F37301BDA63E0F545A7A00850C24F53E_ftn) (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299*, float);
	static AudioSource_SetPitch_mE75DEDF8F37301BDA63E0F545A7A00850C24F53E_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioSource_SetPitch_mE75DEDF8F37301BDA63E0F545A7A00850C24F53E_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioSource::SetPitch(UnityEngine.AudioSource,System.Single)");
	_il2cpp_icall_func(___0_source, ___1_pitch);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_PlayHelper_m4DE8C48925C3548BED306DAB9F87939F24A46960 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ___0_source, uint64_t ___1_delay, const RuntimeMethod* method) 
{
	typedef void (*AudioSource_PlayHelper_m4DE8C48925C3548BED306DAB9F87939F24A46960_ftn) (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299*, uint64_t);
	static AudioSource_PlayHelper_m4DE8C48925C3548BED306DAB9F87939F24A46960_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioSource_PlayHelper_m4DE8C48925C3548BED306DAB9F87939F24A46960_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioSource::PlayHelper(UnityEngine.AudioSource,System.UInt64)");
	_il2cpp_icall_func(___0_source, ___1_delay);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_Play_m10DB5ACD1CC32EE433DBC10416B1450A30DE5F16 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, double ___0_delay, const RuntimeMethod* method) 
{
	typedef void (*AudioSource_Play_m10DB5ACD1CC32EE433DBC10416B1450A30DE5F16_ftn) (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299*, double);
	static AudioSource_Play_m10DB5ACD1CC32EE433DBC10416B1450A30DE5F16_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioSource_Play_m10DB5ACD1CC32EE433DBC10416B1450A30DE5F16_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioSource::Play(System.Double)");
	_il2cpp_icall_func(__this, ___0_delay);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_PlayOneShotHelper_mD110EAF42353687BD0B1190EEF30F0C65A4CF265 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ___0_source, AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___1_clip, float ___2_volumeScale, const RuntimeMethod* method) 
{
	typedef void (*AudioSource_PlayOneShotHelper_mD110EAF42353687BD0B1190EEF30F0C65A4CF265_ftn) (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299*, AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20*, float);
	static AudioSource_PlayOneShotHelper_mD110EAF42353687BD0B1190EEF30F0C65A4CF265_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioSource_PlayOneShotHelper_mD110EAF42353687BD0B1190EEF30F0C65A4CF265_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioSource::PlayOneShotHelper(UnityEngine.AudioSource,UnityEngine.AudioClip,System.Single)");
	_il2cpp_icall_func(___0_source, ___1_clip, ___2_volumeScale);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_Stop_m8A4872F0A2680798CD28894DD28609445C4783F5 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, bool ___0_stopOneShots, const RuntimeMethod* method) 
{
	typedef void (*AudioSource_Stop_m8A4872F0A2680798CD28894DD28609445C4783F5_ftn) (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299*, bool);
	static AudioSource_Stop_m8A4872F0A2680798CD28894DD28609445C4783F5_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioSource_Stop_m8A4872F0A2680798CD28894DD28609445C4783F5_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioSource::Stop(System.Boolean)");
	_il2cpp_icall_func(__this, ___0_stopOneShots);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_SetCustomCurveHelper_m3921C8867C4075133FEF2629601FF44400BA86E9 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ___0_source, int32_t ___1_type, AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* ___2_curve, const RuntimeMethod* method) 
{
	typedef void (*AudioSource_SetCustomCurveHelper_m3921C8867C4075133FEF2629601FF44400BA86E9_ftn) (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299*, int32_t, AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*);
	static AudioSource_SetCustomCurveHelper_m3921C8867C4075133FEF2629601FF44400BA86E9_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioSource_SetCustomCurveHelper_m3921C8867C4075133FEF2629601FF44400BA86E9_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioSource::SetCustomCurveHelper(UnityEngine.AudioSource,UnityEngine.AudioSourceCurveType,UnityEngine.AnimationCurve)");
	_il2cpp_icall_func(___0_source, ___1_type, ___2_curve);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AudioSource_get_volume_m9CCF33BC636562EA282FDE07463B547D70134EE3 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, const RuntimeMethod* method) 
{
	typedef float (*AudioSource_get_volume_m9CCF33BC636562EA282FDE07463B547D70134EE3_ftn) (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299*);
	static AudioSource_get_volume_m9CCF33BC636562EA282FDE07463B547D70134EE3_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioSource_get_volume_m9CCF33BC636562EA282FDE07463B547D70134EE3_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioSource::get_volume()");
	float icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_set_volume_mD902BBDBBDE0E3C148609BF3C05096148E90F2C0 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, float ___0_value, const RuntimeMethod* method) 
{
	typedef void (*AudioSource_set_volume_mD902BBDBBDE0E3C148609BF3C05096148E90F2C0_ftn) (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299*, float);
	static AudioSource_set_volume_mD902BBDBBDE0E3C148609BF3C05096148E90F2C0_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioSource_set_volume_mD902BBDBBDE0E3C148609BF3C05096148E90F2C0_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioSource::set_volume(System.Single)");
	_il2cpp_icall_func(__this, ___0_value);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AudioSource_get_pitch_mB1B0B8A52400B5C798BF1E644FE1C2FFA20A9863 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		float L_0;
		L_0 = AudioSource_GetPitch_m80F6D2BAF966F669253E9231AFCFFC303779913D(__this, NULL);
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		float L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_set_pitch_mD14631FC99BF38AAFB356D9C45546BC16CF9E811 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, float ___0_value, const RuntimeMethod* method) 
{
	{
		float L_0 = ___0_value;
		AudioSource_SetPitch_mE75DEDF8F37301BDA63E0F545A7A00850C24F53E(__this, L_0, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AudioSource_get_time_m130D08644F36736115FE082DAA2ED5E2C9D97A93 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, const RuntimeMethod* method) 
{
	typedef float (*AudioSource_get_time_m130D08644F36736115FE082DAA2ED5E2C9D97A93_ftn) (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299*);
	static AudioSource_get_time_m130D08644F36736115FE082DAA2ED5E2C9D97A93_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioSource_get_time_m130D08644F36736115FE082DAA2ED5E2C9D97A93_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioSource::get_time()");
	float icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_set_time_m6670372FD9C494978B7B3E01B7F4D220616F6204 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, float ___0_value, const RuntimeMethod* method) 
{
	typedef void (*AudioSource_set_time_m6670372FD9C494978B7B3E01B7F4D220616F6204_ftn) (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299*, float);
	static AudioSource_set_time_m6670372FD9C494978B7B3E01B7F4D220616F6204_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioSource_set_time_m6670372FD9C494978B7B3E01B7F4D220616F6204_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioSource::set_time(System.Single)");
	_il2cpp_icall_func(__this, ___0_value);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AudioSource_get_timeSamples_mF230FF8ABBD5A5250CBC487D0E0FCE286BA95B82 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, const RuntimeMethod* method) 
{
	typedef int32_t (*AudioSource_get_timeSamples_mF230FF8ABBD5A5250CBC487D0E0FCE286BA95B82_ftn) (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299*);
	static AudioSource_get_timeSamples_mF230FF8ABBD5A5250CBC487D0E0FCE286BA95B82_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioSource_get_timeSamples_mF230FF8ABBD5A5250CBC487D0E0FCE286BA95B82_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioSource::get_timeSamples()");
	int32_t icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_set_timeSamples_mAC3793C13390C591E4995A88A2CE90E26BBDA6BE (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	typedef void (*AudioSource_set_timeSamples_mAC3793C13390C591E4995A88A2CE90E26BBDA6BE_ftn) (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299*, int32_t);
	static AudioSource_set_timeSamples_mAC3793C13390C591E4995A88A2CE90E26BBDA6BE_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioSource_set_timeSamples_mAC3793C13390C591E4995A88A2CE90E26BBDA6BE_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioSource::set_timeSamples(System.Int32)");
	_il2cpp_icall_func(__this, ___0_value);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* AudioSource_get_clip_m4F5027066F9FC44B44192713142B0C277BB418FE (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, const RuntimeMethod* method) 
{
	typedef AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* (*AudioSource_get_clip_m4F5027066F9FC44B44192713142B0C277BB418FE_ftn) (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299*);
	static AudioSource_get_clip_m4F5027066F9FC44B44192713142B0C277BB418FE_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioSource_get_clip_m4F5027066F9FC44B44192713142B0C277BB418FE_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioSource::get_clip()");
	AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_set_clip_mFF441895E274286C88D9C75ED5CA1B1B39528D70 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___0_value, const RuntimeMethod* method) 
{
	typedef void (*AudioSource_set_clip_mFF441895E274286C88D9C75ED5CA1B1B39528D70_ftn) (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299*, AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20*);
	static AudioSource_set_clip_mFF441895E274286C88D9C75ED5CA1B1B39528D70_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioSource_set_clip_mFF441895E274286C88D9C75ED5CA1B1B39528D70_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioSource::set_clip(UnityEngine.AudioClip)");
	_il2cpp_icall_func(__this, ___0_value);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_set_outputAudioMixerGroup_m10D0A0EAE270424CD2F3BB960CFAA158D9FC24CF (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, AudioMixerGroup_tD29AC8336F7425DF007944F8195CEABF34FC3311* ___0_value, const RuntimeMethod* method) 
{
	typedef void (*AudioSource_set_outputAudioMixerGroup_m10D0A0EAE270424CD2F3BB960CFAA158D9FC24CF_ftn) (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299*, AudioMixerGroup_tD29AC8336F7425DF007944F8195CEABF34FC3311*);
	static AudioSource_set_outputAudioMixerGroup_m10D0A0EAE270424CD2F3BB960CFAA158D9FC24CF_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioSource_set_outputAudioMixerGroup_m10D0A0EAE270424CD2F3BB960CFAA158D9FC24CF_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioSource::set_outputAudioMixerGroup(UnityEngine.Audio.AudioMixerGroup)");
	_il2cpp_icall_func(__this, ___0_value);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_Play_m95DF07111C61D0E0F00257A00384D31531D590C3 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, const RuntimeMethod* method) 
{
	{
		AudioSource_PlayHelper_m4DE8C48925C3548BED306DAB9F87939F24A46960(__this, ((int64_t)0), NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_PlayDelayed_m6A4992F1A010DC12906C6002B22F19082967770E (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, float ___0_delay, const RuntimeMethod* method) 
{
	AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* G_B2_0 = NULL;
	AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* G_B1_0 = NULL;
	double G_B3_0 = 0.0;
	AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* G_B3_1 = NULL;
	{
		float L_0 = ___0_delay;
		if ((((float)L_0) < ((float)(0.0f))))
		{
			G_B2_0 = __this;
			goto IL_000f;
		}
		G_B1_0 = __this;
	}
	{
		float L_1 = ___0_delay;
		G_B3_0 = ((-((double)L_1)));
		G_B3_1 = G_B1_0;
		goto IL_0018;
	}

IL_000f:
	{
		G_B3_0 = (0.0);
		G_B3_1 = G_B2_0;
	}

IL_0018:
	{
		NullCheck(G_B3_1);
		AudioSource_Play_m10DB5ACD1CC32EE433DBC10416B1450A30DE5F16(G_B3_1, G_B3_0, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_PlayOneShot_m098BCAE084AABB128BB19ED805D2D985E7B75112 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___0_clip, const RuntimeMethod* method) 
{
	{
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_0 = ___0_clip;
		AudioSource_PlayOneShot_mF6FE95C58996B38EF6E7F7482F95F5E15E0AB30B(__this, L_0, (1.0f), NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_PlayOneShot_mF6FE95C58996B38EF6E7F7482F95F5E15E0AB30B (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___0_clip, float ___1_volumeScale, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral49403A17E8D32B35CB5B66AB1A2651A7EEAD1B00);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_0 = ___0_clip;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_001a;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9(_stringLiteral49403A17E8D32B35CB5B66AB1A2651A7EEAD1B00, NULL);
		goto IL_0023;
	}

IL_001a:
	{
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_3 = ___0_clip;
		float L_4 = ___1_volumeScale;
		AudioSource_PlayOneShotHelper_mD110EAF42353687BD0B1190EEF30F0C65A4CF265(__this, L_3, L_4, NULL);
	}

IL_0023:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_Stop_m318F17F17A147C77FF6E0A5A7A6BE057DB90F537 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, const RuntimeMethod* method) 
{
	{
		AudioSource_Stop_m8A4872F0A2680798CD28894DD28609445C4783F5(__this, (bool)1, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_Pause_m2C2A09359E8AA924FEADECC1AFEA519B3C915B26 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, const RuntimeMethod* method) 
{
	typedef void (*AudioSource_Pause_m2C2A09359E8AA924FEADECC1AFEA519B3C915B26_ftn) (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299*);
	static AudioSource_Pause_m2C2A09359E8AA924FEADECC1AFEA519B3C915B26_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioSource_Pause_m2C2A09359E8AA924FEADECC1AFEA519B3C915B26_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioSource::Pause()");
	_il2cpp_icall_func(__this);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AudioSource_get_isPlaying_mC203303F2F7146B2C056CB47B9391463FDF408FC (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, const RuntimeMethod* method) 
{
	typedef bool (*AudioSource_get_isPlaying_mC203303F2F7146B2C056CB47B9391463FDF408FC_ftn) (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299*);
	static AudioSource_get_isPlaying_mC203303F2F7146B2C056CB47B9391463FDF408FC_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioSource_get_isPlaying_mC203303F2F7146B2C056CB47B9391463FDF408FC_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioSource::get_isPlaying()");
	bool icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_PlayClipAtPoint_mA78328A70D3F1088B588EF6F811AAD6577F2B7BF (AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___0_clip, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_position, const RuntimeMethod* method) 
{
	{
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_0 = ___0_clip;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = ___1_position;
		AudioSource_PlayClipAtPoint_mF9D129487C356127ADA3AB5C0A67C7D00F26E3DD(L_0, L_1, (1.0f), NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_PlayClipAtPoint_mF9D129487C356127ADA3AB5C0A67C7D00F26E3DD (AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___0_clip, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_position, float ___2_volume, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2186DB8EA3F0EBBFF4B670DC1B315D485E2F447B);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_0 = NULL;
	AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* V_1 = NULL;
	float G_B2_0 = 0.0f;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* G_B2_1 = NULL;
	float G_B1_0 = 0.0f;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* G_B1_1 = NULL;
	float G_B3_0 = 0.0f;
	float G_B3_1 = 0.0f;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* G_B3_2 = NULL;
	{
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)il2cpp_codegen_object_new(GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		GameObject__ctor_m37D512B05D292F954792225E6C6EEE95293A9B88(L_0, _stringLiteral2186DB8EA3F0EBBFF4B670DC1B315D485E2F447B, NULL);
		V_0 = L_0;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = V_0;
		NullCheck(L_1);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_1, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___1_position;
		NullCheck(L_2);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_2, L_3, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_5 = { reinterpret_cast<intptr_t> (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_6;
		L_6 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_5, NULL);
		NullCheck(L_4);
		Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* L_7;
		L_7 = GameObject_AddComponent_mDF246771EC34613FA6AF0C98D443368FB43E9F36(L_4, L_6, NULL);
		V_1 = ((AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299*)CastclassSealed((RuntimeObject*)L_7, AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_il2cpp_TypeInfo_var));
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_8 = V_1;
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_9 = ___0_clip;
		NullCheck(L_8);
		AudioSource_set_clip_mFF441895E274286C88D9C75ED5CA1B1B39528D70(L_8, L_9, NULL);
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_10 = V_1;
		NullCheck(L_10);
		AudioSource_set_spatialBlend_mCEE7A3E87A8C146E048B2CA3413FDC7BDB7BE001(L_10, (1.0f), NULL);
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_11 = V_1;
		float L_12 = ___2_volume;
		NullCheck(L_11);
		AudioSource_set_volume_mD902BBDBBDE0E3C148609BF3C05096148E90F2C0(L_11, L_12, NULL);
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_13 = V_1;
		NullCheck(L_13);
		AudioSource_Play_m95DF07111C61D0E0F00257A00384D31531D590C3(L_13, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_14 = V_0;
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_15 = ___0_clip;
		NullCheck(L_15);
		float L_16;
		L_16 = AudioClip_get_length_m6102CB29AF65988797452E4D6E43D4788303873D(L_15, NULL);
		float L_17;
		L_17 = Time_get_timeScale_m1F45A413D4EEA08B1E0988022512C137F6C1E616(NULL);
		if ((((float)L_17) < ((float)(0.00999999978f))))
		{
			G_B2_0 = L_16;
			G_B2_1 = L_14;
			goto IL_006c;
		}
		G_B1_0 = L_16;
		G_B1_1 = L_14;
	}
	{
		float L_18;
		L_18 = Time_get_timeScale_m1F45A413D4EEA08B1E0988022512C137F6C1E616(NULL);
		G_B3_0 = L_18;
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		goto IL_0071;
	}

IL_006c:
	{
		G_B3_0 = (0.00999999978f);
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
	}

IL_0071:
	{
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_m064F2A066491D2DC4FFCFBDBE5FCFFB807A04436(G_B3_2, ((float)il2cpp_codegen_multiply(G_B3_1, G_B3_0)), NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AudioSource_get_loop_m2D83BF58E1BD1BEE4CC80413C12E761D3310FC2C (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, const RuntimeMethod* method) 
{
	typedef bool (*AudioSource_get_loop_m2D83BF58E1BD1BEE4CC80413C12E761D3310FC2C_ftn) (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299*);
	static AudioSource_get_loop_m2D83BF58E1BD1BEE4CC80413C12E761D3310FC2C_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioSource_get_loop_m2D83BF58E1BD1BEE4CC80413C12E761D3310FC2C_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioSource::get_loop()");
	bool icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_set_loop_m834A590939D8456008C0F897FD80B0ECFFB7FE56 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, bool ___0_value, const RuntimeMethod* method) 
{
	typedef void (*AudioSource_set_loop_m834A590939D8456008C0F897FD80B0ECFFB7FE56_ftn) (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299*, bool);
	static AudioSource_set_loop_m834A590939D8456008C0F897FD80B0ECFFB7FE56_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioSource_set_loop_m834A590939D8456008C0F897FD80B0ECFFB7FE56_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioSource::set_loop(System.Boolean)");
	_il2cpp_icall_func(__this, ___0_value);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_set_playOnAwake_m7EACC6ECEF12D7BA86A4E5A53603F1C8F9E11949 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, bool ___0_value, const RuntimeMethod* method) 
{
	typedef void (*AudioSource_set_playOnAwake_m7EACC6ECEF12D7BA86A4E5A53603F1C8F9E11949_ftn) (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299*, bool);
	static AudioSource_set_playOnAwake_m7EACC6ECEF12D7BA86A4E5A53603F1C8F9E11949_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioSource_set_playOnAwake_m7EACC6ECEF12D7BA86A4E5A53603F1C8F9E11949_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioSource::set_playOnAwake(System.Boolean)");
	_il2cpp_icall_func(__this, ___0_value);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AudioSource_get_velocityUpdateMode_mEFF48403F8A591A14927408F806E0603391E153B (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, const RuntimeMethod* method) 
{
	typedef int32_t (*AudioSource_get_velocityUpdateMode_mEFF48403F8A591A14927408F806E0603391E153B_ftn) (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299*);
	static AudioSource_get_velocityUpdateMode_mEFF48403F8A591A14927408F806E0603391E153B_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioSource_get_velocityUpdateMode_mEFF48403F8A591A14927408F806E0603391E153B_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioSource::get_velocityUpdateMode()");
	int32_t icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_set_velocityUpdateMode_m379F5704F12211BFB9AF3E3DE6647A6B057C7426 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	typedef void (*AudioSource_set_velocityUpdateMode_m379F5704F12211BFB9AF3E3DE6647A6B057C7426_ftn) (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299*, int32_t);
	static AudioSource_set_velocityUpdateMode_m379F5704F12211BFB9AF3E3DE6647A6B057C7426_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioSource_set_velocityUpdateMode_m379F5704F12211BFB9AF3E3DE6647A6B057C7426_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioSource::set_velocityUpdateMode(UnityEngine.AudioVelocityUpdateMode)");
	_il2cpp_icall_func(__this, ___0_value);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_set_panStereo_mE3BA673B5F93F731114E8901355A63F07C8A54DF (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, float ___0_value, const RuntimeMethod* method) 
{
	typedef void (*AudioSource_set_panStereo_mE3BA673B5F93F731114E8901355A63F07C8A54DF_ftn) (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299*, float);
	static AudioSource_set_panStereo_mE3BA673B5F93F731114E8901355A63F07C8A54DF_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioSource_set_panStereo_mE3BA673B5F93F731114E8901355A63F07C8A54DF_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioSource::set_panStereo(System.Single)");
	_il2cpp_icall_func(__this, ___0_value);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_set_spatialBlend_mCEE7A3E87A8C146E048B2CA3413FDC7BDB7BE001 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, float ___0_value, const RuntimeMethod* method) 
{
	typedef void (*AudioSource_set_spatialBlend_mCEE7A3E87A8C146E048B2CA3413FDC7BDB7BE001_ftn) (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299*, float);
	static AudioSource_set_spatialBlend_mCEE7A3E87A8C146E048B2CA3413FDC7BDB7BE001_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioSource_set_spatialBlend_mCEE7A3E87A8C146E048B2CA3413FDC7BDB7BE001_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioSource::set_spatialBlend(System.Single)");
	_il2cpp_icall_func(__this, ___0_value);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AudioSource_get_spatialize_m5CA89537077D4BB8DBAABFD8EB36D0B89BA8DACB (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, const RuntimeMethod* method) 
{
	typedef bool (*AudioSource_get_spatialize_m5CA89537077D4BB8DBAABFD8EB36D0B89BA8DACB_ftn) (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299*);
	static AudioSource_get_spatialize_m5CA89537077D4BB8DBAABFD8EB36D0B89BA8DACB_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioSource_get_spatialize_m5CA89537077D4BB8DBAABFD8EB36D0B89BA8DACB_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioSource::get_spatialize()");
	bool icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_set_spatialize_mDFA357EDCB0C59EF11F53C845F7ACBF6BF7F7B3C (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, bool ___0_value, const RuntimeMethod* method) 
{
	typedef void (*AudioSource_set_spatialize_mDFA357EDCB0C59EF11F53C845F7ACBF6BF7F7B3C_ftn) (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299*, bool);
	static AudioSource_set_spatialize_mDFA357EDCB0C59EF11F53C845F7ACBF6BF7F7B3C_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioSource_set_spatialize_mDFA357EDCB0C59EF11F53C845F7ACBF6BF7F7B3C_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioSource::set_spatialize(System.Boolean)");
	_il2cpp_icall_func(__this, ___0_value);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_SetCustomCurve_m6597C180AE2DD79DA663ABD76FC26AC816CB7CFB (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, int32_t ___0_type, AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* ___1_curve, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_type;
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_1 = ___1_curve;
		AudioSource_SetCustomCurveHelper_m3921C8867C4075133FEF2629601FF44400BA86E9(__this, L_0, L_1, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_set_dopplerLevel_mB9AC5164E5AF16ACECA3B8E29F5C8573C37E40D6 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, float ___0_value, const RuntimeMethod* method) 
{
	typedef void (*AudioSource_set_dopplerLevel_mB9AC5164E5AF16ACECA3B8E29F5C8573C37E40D6_ftn) (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299*, float);
	static AudioSource_set_dopplerLevel_mB9AC5164E5AF16ACECA3B8E29F5C8573C37E40D6_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioSource_set_dopplerLevel_mB9AC5164E5AF16ACECA3B8E29F5C8573C37E40D6_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioSource::set_dopplerLevel(System.Single)");
	_il2cpp_icall_func(__this, ___0_value);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_set_spread_mDFBC1BF11837C26EF9763A8DEEFC56AF95F6E83F (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, float ___0_value, const RuntimeMethod* method) 
{
	typedef void (*AudioSource_set_spread_mDFBC1BF11837C26EF9763A8DEEFC56AF95F6E83F_ftn) (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299*, float);
	static AudioSource_set_spread_mDFBC1BF11837C26EF9763A8DEEFC56AF95F6E83F_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioSource_set_spread_mDFBC1BF11837C26EF9763A8DEEFC56AF95F6E83F_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioSource::set_spread(System.Single)");
	_il2cpp_icall_func(__this, ___0_value);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AudioSource_get_mute_mE23745FC15F1105556CB7590CA651628FC562DBD (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, const RuntimeMethod* method) 
{
	typedef bool (*AudioSource_get_mute_mE23745FC15F1105556CB7590CA651628FC562DBD_ftn) (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299*);
	static AudioSource_get_mute_mE23745FC15F1105556CB7590CA651628FC562DBD_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioSource_get_mute_mE23745FC15F1105556CB7590CA651628FC562DBD_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioSource::get_mute()");
	bool icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_set_mute_m6407E0AEE7F088AC69BD8C1D270C2B2049769B09 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, bool ___0_value, const RuntimeMethod* method) 
{
	typedef void (*AudioSource_set_mute_m6407E0AEE7F088AC69BD8C1D270C2B2049769B09_ftn) (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299*, bool);
	static AudioSource_set_mute_m6407E0AEE7F088AC69BD8C1D270C2B2049769B09_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioSource_set_mute_m6407E0AEE7F088AC69BD8C1D270C2B2049769B09_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioSource::set_mute(System.Boolean)");
	_il2cpp_icall_func(__this, ___0_value);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_set_minDistance_m6CBE3A60C03C0F179192FBDD62095B2E9D717690 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, float ___0_value, const RuntimeMethod* method) 
{
	typedef void (*AudioSource_set_minDistance_m6CBE3A60C03C0F179192FBDD62095B2E9D717690_ftn) (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299*, float);
	static AudioSource_set_minDistance_m6CBE3A60C03C0F179192FBDD62095B2E9D717690_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioSource_set_minDistance_m6CBE3A60C03C0F179192FBDD62095B2E9D717690_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioSource::set_minDistance(System.Single)");
	_il2cpp_icall_func(__this, ___0_value);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_set_maxDistance_m4BF310D54761500A77A6C4841A0BBDBD09225813 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, float ___0_value, const RuntimeMethod* method) 
{
	typedef void (*AudioSource_set_maxDistance_m4BF310D54761500A77A6C4841A0BBDBD09225813_ftn) (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299*, float);
	static AudioSource_set_maxDistance_m4BF310D54761500A77A6C4841A0BBDBD09225813_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioSource_set_maxDistance_m4BF310D54761500A77A6C4841A0BBDBD09225813_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioSource::set_maxDistance(System.Single)");
	_il2cpp_icall_func(__this, ___0_value);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_set_rolloffMode_m441D9552D8648D6040E66EE2C2650A79DC5E6FB4 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	typedef void (*AudioSource_set_rolloffMode_m441D9552D8648D6040E66EE2C2650A79DC5E6FB4_ftn) (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299*, int32_t);
	static AudioSource_set_rolloffMode_m441D9552D8648D6040E66EE2C2650A79DC5E6FB4_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioSource_set_rolloffMode_m441D9552D8648D6040E66EE2C2650A79DC5E6FB4_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioSource::set_rolloffMode(UnityEngine.AudioRolloffMode)");
	_il2cpp_icall_func(__this, ___0_value);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AudioSource_SetSpatializerFloat_m124ADF8D1FB75E1677A8891D9BF7138FD8398ADB (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, int32_t ___0_index, float ___1_value, const RuntimeMethod* method) 
{
	typedef bool (*AudioSource_SetSpatializerFloat_m124ADF8D1FB75E1677A8891D9BF7138FD8398ADB_ftn) (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299*, int32_t, float);
	static AudioSource_SetSpatializerFloat_m124ADF8D1FB75E1677A8891D9BF7138FD8398ADB_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioSource_SetSpatializerFloat_m124ADF8D1FB75E1677A8891D9BF7138FD8398ADB_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioSource::SetSpatializerFloat(System.Int32,System.Single)");
	bool icallRetVal = _il2cpp_icall_func(__this, ___0_index, ___1_value);
	return icallRetVal;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AudioSource_GetAmbisonicDecoderFloat_m2223F72DBFC57C4E9EEE3465325702ADB728D059 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, int32_t ___0_index, float* ___1_value, const RuntimeMethod* method) 
{
	typedef bool (*AudioSource_GetAmbisonicDecoderFloat_m2223F72DBFC57C4E9EEE3465325702ADB728D059_ftn) (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299*, int32_t, float*);
	static AudioSource_GetAmbisonicDecoderFloat_m2223F72DBFC57C4E9EEE3465325702ADB728D059_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioSource_GetAmbisonicDecoderFloat_m2223F72DBFC57C4E9EEE3465325702ADB728D059_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioSource::GetAmbisonicDecoderFloat(System.Int32,System.Single&)");
	bool icallRetVal = _il2cpp_icall_func(__this, ___0_index, ___1_value);
	return icallRetVal;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Microphone_GetMicrophoneDeviceIDFromName_mD33349A5B41E037F04802638690FBA891035C238 (String_t* ___0_name, const RuntimeMethod* method) 
{
	typedef int32_t (*Microphone_GetMicrophoneDeviceIDFromName_mD33349A5B41E037F04802638690FBA891035C238_ftn) (String_t*);
	static Microphone_GetMicrophoneDeviceIDFromName_mD33349A5B41E037F04802638690FBA891035C238_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Microphone_GetMicrophoneDeviceIDFromName_mD33349A5B41E037F04802638690FBA891035C238_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Microphone::GetMicrophoneDeviceIDFromName(System.String)");
	int32_t icallRetVal = _il2cpp_icall_func(___0_name);
	return icallRetVal;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* Microphone_StartRecord_m561E1A2B878937E556D6FCABC3FE735CB818D897 (int32_t ___0_deviceID, bool ___1_loop, float ___2_lengthSec, int32_t ___3_frequency, const RuntimeMethod* method) 
{
	typedef AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* (*Microphone_StartRecord_m561E1A2B878937E556D6FCABC3FE735CB818D897_ftn) (int32_t, bool, float, int32_t);
	static Microphone_StartRecord_m561E1A2B878937E556D6FCABC3FE735CB818D897_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Microphone_StartRecord_m561E1A2B878937E556D6FCABC3FE735CB818D897_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Microphone::StartRecord(System.Int32,System.Boolean,System.Single,System.Int32)");
	AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* icallRetVal = _il2cpp_icall_func(___0_deviceID, ___1_loop, ___2_lengthSec, ___3_frequency);
	return icallRetVal;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Microphone_EndRecord_m6F4983F3A002DA6F07F979D42D0750A1C3D16156 (int32_t ___0_deviceID, const RuntimeMethod* method) 
{
	typedef void (*Microphone_EndRecord_m6F4983F3A002DA6F07F979D42D0750A1C3D16156_ftn) (int32_t);
	static Microphone_EndRecord_m6F4983F3A002DA6F07F979D42D0750A1C3D16156_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Microphone_EndRecord_m6F4983F3A002DA6F07F979D42D0750A1C3D16156_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Microphone::EndRecord(System.Int32)");
	_il2cpp_icall_func(___0_deviceID);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Microphone_IsRecording_m59B6BAF774312891C815FCC4D0304256FDC93CB0 (int32_t ___0_deviceID, const RuntimeMethod* method) 
{
	typedef bool (*Microphone_IsRecording_m59B6BAF774312891C815FCC4D0304256FDC93CB0_ftn) (int32_t);
	static Microphone_IsRecording_m59B6BAF774312891C815FCC4D0304256FDC93CB0_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Microphone_IsRecording_m59B6BAF774312891C815FCC4D0304256FDC93CB0_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Microphone::IsRecording(System.Int32)");
	bool icallRetVal = _il2cpp_icall_func(___0_deviceID);
	return icallRetVal;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Microphone_GetRecordPosition_m73C6D07638BD2BB56C6FA91FF19AAE591A2782C6 (int32_t ___0_deviceID, const RuntimeMethod* method) 
{
	typedef int32_t (*Microphone_GetRecordPosition_m73C6D07638BD2BB56C6FA91FF19AAE591A2782C6_ftn) (int32_t);
	static Microphone_GetRecordPosition_m73C6D07638BD2BB56C6FA91FF19AAE591A2782C6_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Microphone_GetRecordPosition_m73C6D07638BD2BB56C6FA91FF19AAE591A2782C6_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Microphone::GetRecordPosition(System.Int32)");
	int32_t icallRetVal = _il2cpp_icall_func(___0_deviceID);
	return icallRetVal;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Microphone_GetDeviceCaps_mEE44F844E84A87EE9B8CB7F241DB365309CC80AC (int32_t ___0_deviceID, int32_t* ___1_minFreq, int32_t* ___2_maxFreq, const RuntimeMethod* method) 
{
	typedef void (*Microphone_GetDeviceCaps_mEE44F844E84A87EE9B8CB7F241DB365309CC80AC_ftn) (int32_t, int32_t*, int32_t*);
	static Microphone_GetDeviceCaps_mEE44F844E84A87EE9B8CB7F241DB365309CC80AC_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Microphone_GetDeviceCaps_mEE44F844E84A87EE9B8CB7F241DB365309CC80AC_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Microphone::GetDeviceCaps(System.Int32,System.Int32&,System.Int32&)");
	_il2cpp_icall_func(___0_deviceID, ___1_minFreq, ___2_maxFreq);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* Microphone_Start_mDA38C5376D122F27D9DEFD2AE811BAE460F2242E (String_t* ___0_deviceName, bool ___1_loop, int32_t ___2_lengthSec, int32_t ___3_frequency, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* V_5 = NULL;
	{
		String_t* L_0 = ___0_deviceName;
		int32_t L_1;
		L_1 = Microphone_GetMicrophoneDeviceIDFromName_mD33349A5B41E037F04802638690FBA891035C238(L_0, NULL);
		V_0 = L_1;
		int32_t L_2 = V_0;
		V_1 = (bool)((((int32_t)L_2) == ((int32_t)(-1)))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_0021;
		}
	}
	{
		String_t* L_4 = ___0_deviceName;
		String_t* L_5;
		L_5 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB7ED4706BFE5D072AD3E5A0F26644FF44E847682)), L_4, NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_6 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_6, L_5, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Microphone_Start_mDA38C5376D122F27D9DEFD2AE811BAE460F2242E_RuntimeMethod_var)));
	}

IL_0021:
	{
		int32_t L_7 = ___2_lengthSec;
		V_2 = (bool)((((int32_t)((((int32_t)L_7) > ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_8 = V_2;
		if (!L_8)
		{
			goto IL_0048;
		}
	}
	{
		String_t* L_9;
		L_9 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&___2_lengthSec), NULL);
		String_t* L_10;
		L_10 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral67DB02F1FABDC6C47E8B1ED9A9ADC8E17845BD4F)), L_9, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral0ED72C9B4D0AB21E88D08F74AC73C6C8CEC4B7DF)), NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_11 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_11, L_10, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_11, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Microphone_Start_mDA38C5376D122F27D9DEFD2AE811BAE460F2242E_RuntimeMethod_var)));
	}

IL_0048:
	{
		int32_t L_12 = ___2_lengthSec;
		V_3 = (bool)((((int32_t)L_12) > ((int32_t)((int32_t)3600)))? 1 : 0);
		bool L_13 = V_3;
		if (!L_13)
		{
			goto IL_0070;
		}
	}
	{
		String_t* L_14;
		L_14 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&___2_lengthSec), NULL);
		String_t* L_15;
		L_15 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7F33A83E7C1398BEA9BE2EB876FECFEF16BCCDBD)), L_14, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral0ED72C9B4D0AB21E88D08F74AC73C6C8CEC4B7DF)), NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_16 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_16, L_15, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_16, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Microphone_Start_mDA38C5376D122F27D9DEFD2AE811BAE460F2242E_RuntimeMethod_var)));
	}

IL_0070:
	{
		int32_t L_17 = ___3_frequency;
		V_4 = (bool)((((int32_t)((((int32_t)L_17) > ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_18 = V_4;
		if (!L_18)
		{
			goto IL_0099;
		}
	}
	{
		String_t* L_19;
		L_19 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&___3_frequency), NULL);
		String_t* L_20;
		L_20 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral75DC747EA24DB7802D5E580A86C87FFCD3EA69B0)), L_19, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralCAEF26BE398F51129C4063A43AD4BF947AC128D6)), NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_21 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_21, L_20, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_21, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Microphone_Start_mDA38C5376D122F27D9DEFD2AE811BAE460F2242E_RuntimeMethod_var)));
	}

IL_0099:
	{
		int32_t L_22 = V_0;
		bool L_23 = ___1_loop;
		int32_t L_24 = ___2_lengthSec;
		int32_t L_25 = ___3_frequency;
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_26;
		L_26 = Microphone_StartRecord_m561E1A2B878937E556D6FCABC3FE735CB818D897(L_22, L_23, ((float)L_24), L_25, NULL);
		V_5 = L_26;
		goto IL_00a7;
	}

IL_00a7:
	{
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_27 = V_5;
		return L_27;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Microphone_End_mB368877FCC9EA1522914006671E637848A0F7CC6 (String_t* ___0_deviceName, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	bool V_1 = false;
	{
		String_t* L_0 = ___0_deviceName;
		int32_t L_1;
		L_1 = Microphone_GetMicrophoneDeviceIDFromName_mD33349A5B41E037F04802638690FBA891035C238(L_0, NULL);
		V_0 = L_1;
		int32_t L_2 = V_0;
		V_1 = (bool)((((int32_t)L_2) == ((int32_t)(-1)))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_0012;
		}
	}
	{
		goto IL_0019;
	}

IL_0012:
	{
		int32_t L_4 = V_0;
		Microphone_EndRecord_m6F4983F3A002DA6F07F979D42D0750A1C3D16156(L_4, NULL);
	}

IL_0019:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* Microphone_get_devices_mC2821E200C36C599DDC37927DEC9EA725240812D (const RuntimeMethod* method) 
{
	typedef StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* (*Microphone_get_devices_mC2821E200C36C599DDC37927DEC9EA725240812D_ftn) ();
	static Microphone_get_devices_mC2821E200C36C599DDC37927DEC9EA725240812D_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Microphone_get_devices_mC2821E200C36C599DDC37927DEC9EA725240812D_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Microphone::get_devices()");
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* icallRetVal = _il2cpp_icall_func();
	return icallRetVal;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Microphone_IsRecording_m93CA54969E12BF2083326E43794D71F0FED5D653 (String_t* ___0_deviceName, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	bool V_1 = false;
	bool V_2 = false;
	{
		String_t* L_0 = ___0_deviceName;
		int32_t L_1;
		L_1 = Microphone_GetMicrophoneDeviceIDFromName_mD33349A5B41E037F04802638690FBA891035C238(L_0, NULL);
		V_0 = L_1;
		int32_t L_2 = V_0;
		V_1 = (bool)((((int32_t)L_2) == ((int32_t)(-1)))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_0014;
		}
	}
	{
		V_2 = (bool)0;
		goto IL_001d;
	}

IL_0014:
	{
		int32_t L_4 = V_0;
		bool L_5;
		L_5 = Microphone_IsRecording_m59B6BAF774312891C815FCC4D0304256FDC93CB0(L_4, NULL);
		V_2 = L_5;
		goto IL_001d;
	}

IL_001d:
	{
		bool L_6 = V_2;
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Microphone_GetPosition_m13F4C8EBE8536893D9AD8388B0E5B46D62E6A459 (String_t* ___0_deviceName, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	bool V_1 = false;
	int32_t V_2 = 0;
	{
		String_t* L_0 = ___0_deviceName;
		int32_t L_1;
		L_1 = Microphone_GetMicrophoneDeviceIDFromName_mD33349A5B41E037F04802638690FBA891035C238(L_0, NULL);
		V_0 = L_1;
		int32_t L_2 = V_0;
		V_1 = (bool)((((int32_t)L_2) == ((int32_t)(-1)))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_0014;
		}
	}
	{
		V_2 = 0;
		goto IL_001d;
	}

IL_0014:
	{
		int32_t L_4 = V_0;
		int32_t L_5;
		L_5 = Microphone_GetRecordPosition_m73C6D07638BD2BB56C6FA91FF19AAE591A2782C6(L_4, NULL);
		V_2 = L_5;
		goto IL_001d;
	}

IL_001d:
	{
		int32_t L_6 = V_2;
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Microphone_GetDeviceCaps_m8C443A4C8FDA86E23E2C5556C4E3AAA6FD181454 (String_t* ___0_deviceName, int32_t* ___1_minFreq, int32_t* ___2_maxFreq, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	bool V_1 = false;
	{
		int32_t* L_0 = ___1_minFreq;
		*((int32_t*)L_0) = (int32_t)0;
		int32_t* L_1 = ___2_maxFreq;
		*((int32_t*)L_1) = (int32_t)0;
		String_t* L_2 = ___0_deviceName;
		int32_t L_3;
		L_3 = Microphone_GetMicrophoneDeviceIDFromName_mD33349A5B41E037F04802638690FBA891035C238(L_2, NULL);
		V_0 = L_3;
		int32_t L_4 = V_0;
		V_1 = (bool)((((int32_t)L_4) == ((int32_t)(-1)))? 1 : 0);
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0018;
		}
	}
	{
		goto IL_0021;
	}

IL_0018:
	{
		int32_t L_6 = V_0;
		int32_t* L_7 = ___1_minFreq;
		int32_t* L_8 = ___2_maxFreq;
		Microphone_GetDeviceCaps_mEE44F844E84A87EE9B8CB7F241DB365309CC80AC(L_6, L_7, L_8, NULL);
	}

IL_0021:
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 AudioClipPlayable_GetHandle_mEA1D664328FF9B08E4F7D5EBCD4B51A754D97C44 (AudioClipPlayable_tD4B758E68CAE03CB0CD31F90C8A3E603B97143A0* __this, const RuntimeMethod* method) 
{
	PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_0 = __this->___m_Handle_0;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 AudioClipPlayable_GetHandle_mEA1D664328FF9B08E4F7D5EBCD4B51A754D97C44_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	AudioClipPlayable_tD4B758E68CAE03CB0CD31F90C8A3E603B97143A0* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AudioClipPlayable_tD4B758E68CAE03CB0CD31F90C8A3E603B97143A0*>(__this + _offset);
	PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 _returnValue;
	_returnValue = AudioClipPlayable_GetHandle_mEA1D664328FF9B08E4F7D5EBCD4B51A754D97C44(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AudioClipPlayable_Equals_m9C1C75ACBB74FE06AD02BE4643F6EB39413EFF83 (AudioClipPlayable_tD4B758E68CAE03CB0CD31F90C8A3E603B97143A0* __this, AudioClipPlayable_tD4B758E68CAE03CB0CD31F90C8A3E603B97143A0 ___0_other, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_0;
		L_0 = AudioClipPlayable_GetHandle_mEA1D664328FF9B08E4F7D5EBCD4B51A754D97C44(__this, NULL);
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_1;
		L_1 = AudioClipPlayable_GetHandle_mEA1D664328FF9B08E4F7D5EBCD4B51A754D97C44((&___0_other), NULL);
		il2cpp_codegen_runtime_class_init_inline(PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = PlayableHandle_op_Equality_m0E6C48A28F75A870AC22ADE3BD42F7F70A43C99C(L_0, L_1, NULL);
		V_0 = L_2;
		goto IL_0016;
	}

IL_0016:
	{
		bool L_3 = V_0;
		return L_3;
	}
}
IL2CPP_EXTERN_C  bool AudioClipPlayable_Equals_m9C1C75ACBB74FE06AD02BE4643F6EB39413EFF83_AdjustorThunk (RuntimeObject* __this, AudioClipPlayable_tD4B758E68CAE03CB0CD31F90C8A3E603B97143A0 ___0_other, const RuntimeMethod* method)
{
	AudioClipPlayable_tD4B758E68CAE03CB0CD31F90C8A3E603B97143A0* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AudioClipPlayable_tD4B758E68CAE03CB0CD31F90C8A3E603B97143A0*>(__this + _offset);
	bool _returnValue;
	_returnValue = AudioClipPlayable_Equals_m9C1C75ACBB74FE06AD02BE4643F6EB39413EFF83(_thisAdjusted, ___0_other, method);
	return _returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioMixer__ctor_m8BB9BFC96DB436EE4CECE0BECECD5DFC7559058D (AudioMixer_tE2E8D79241711CDF9AB428C7FB96A35D80E40B04* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object__ctor_m2149FA40CEC8D82AC20D3508AB40C0D8EFEF68E6(__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioMixer_TransitionToSnapshot_m308E8D50A4573EFDD381ED7DEC23162F8CD0EB5D (AudioMixer_tE2E8D79241711CDF9AB428C7FB96A35D80E40B04* __this, AudioMixerSnapshot_tB9A62E6CFA52643B938E4FBFFAE1A5ED30907781* ___0_snapshot, float ___1_timeToReach, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		AudioMixerSnapshot_tB9A62E6CFA52643B938E4FBFFAE1A5ED30907781* L_0 = ___0_snapshot;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0027;
		}
	}
	{
		String_t* L_3;
		L_3 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(__this, NULL);
		String_t* L_4;
		L_4 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral9EAFE4F84FECC3407E28F6C22DC663D4A31C78D0)), L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral42646B33B50B6AA15E22733C8900716F0FE19E1D)), NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_5 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_5, L_4, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AudioMixer_TransitionToSnapshot_m308E8D50A4573EFDD381ED7DEC23162F8CD0EB5D_RuntimeMethod_var)));
	}

IL_0027:
	{
		AudioMixerSnapshot_tB9A62E6CFA52643B938E4FBFFAE1A5ED30907781* L_6 = ___0_snapshot;
		NullCheck(L_6);
		AudioMixer_tE2E8D79241711CDF9AB428C7FB96A35D80E40B04* L_7;
		L_7 = AudioMixerSnapshot_get_audioMixer_mCC13199F7F9EBB2C5510DFA750A501747229CBF5(L_6, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_8;
		L_8 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_7, __this, NULL);
		V_1 = L_8;
		bool L_9 = V_1;
		if (!L_9)
		{
			goto IL_0072;
		}
	}
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_10 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var)), (uint32_t)5);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_11 = L_10;
		NullCheck(L_11);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC01DE08865A1C5D9A0B7F1023D8CD55C8685904B)));
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_12 = L_11;
		AudioMixerSnapshot_tB9A62E6CFA52643B938E4FBFFAE1A5ED30907781* L_13 = ___0_snapshot;
		NullCheck(L_13);
		String_t* L_14;
		L_14 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_13, NULL);
		NullCheck(L_12);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)L_14);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_15 = L_12;
		NullCheck(L_15);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB1FAE4F904170535BC9DC23FF347B1D0603313EA)));
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_16 = L_15;
		String_t* L_17;
		L_17 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(__this, NULL);
		NullCheck(L_16);
		(L_16)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)L_17);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_18 = L_16;
		NullCheck(L_18);
		(L_18)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral42646B33B50B6AA15E22733C8900716F0FE19E1D)));
		String_t* L_19;
		L_19 = String_Concat_m647EBF831F54B6DF7D5AFA5FD012CF4EE7571B6A(L_18, NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_20 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_20, L_19, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_20, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AudioMixer_TransitionToSnapshot_m308E8D50A4573EFDD381ED7DEC23162F8CD0EB5D_RuntimeMethod_var)));
	}

IL_0072:
	{
		AudioMixerSnapshot_tB9A62E6CFA52643B938E4FBFFAE1A5ED30907781* L_21 = ___0_snapshot;
		float L_22 = ___1_timeToReach;
		AudioMixer_TransitionToSnapshotInternal_m9D07330A3EF997CC4BB165829D8D2AD6187A8DD0(__this, L_21, L_22, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioMixer_TransitionToSnapshotInternal_m9D07330A3EF997CC4BB165829D8D2AD6187A8DD0 (AudioMixer_tE2E8D79241711CDF9AB428C7FB96A35D80E40B04* __this, AudioMixerSnapshot_tB9A62E6CFA52643B938E4FBFFAE1A5ED30907781* ___0_snapshot, float ___1_timeToReach, const RuntimeMethod* method) 
{
	typedef void (*AudioMixer_TransitionToSnapshotInternal_m9D07330A3EF997CC4BB165829D8D2AD6187A8DD0_ftn) (AudioMixer_tE2E8D79241711CDF9AB428C7FB96A35D80E40B04*, AudioMixerSnapshot_tB9A62E6CFA52643B938E4FBFFAE1A5ED30907781*, float);
	static AudioMixer_TransitionToSnapshotInternal_m9D07330A3EF997CC4BB165829D8D2AD6187A8DD0_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioMixer_TransitionToSnapshotInternal_m9D07330A3EF997CC4BB165829D8D2AD6187A8DD0_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Audio.AudioMixer::TransitionToSnapshotInternal(UnityEngine.Audio.AudioMixerSnapshot,System.Single)");
	_il2cpp_icall_func(__this, ___0_snapshot, ___1_timeToReach);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioMixer_TransitionToSnapshots_m87D4E352A2696F6BF945EB1A519888A9B38BF7C6 (AudioMixer_tE2E8D79241711CDF9AB428C7FB96A35D80E40B04* __this, AudioMixerSnapshotU5BU5D_tD41A94680B8A241063054F1931BDDC8B997D8382* ___0_snapshots, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___1_weights, float ___2_timeToReach, const RuntimeMethod* method) 
{
	typedef void (*AudioMixer_TransitionToSnapshots_m87D4E352A2696F6BF945EB1A519888A9B38BF7C6_ftn) (AudioMixer_tE2E8D79241711CDF9AB428C7FB96A35D80E40B04*, AudioMixerSnapshotU5BU5D_tD41A94680B8A241063054F1931BDDC8B997D8382*, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*, float);
	static AudioMixer_TransitionToSnapshots_m87D4E352A2696F6BF945EB1A519888A9B38BF7C6_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioMixer_TransitionToSnapshots_m87D4E352A2696F6BF945EB1A519888A9B38BF7C6_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Audio.AudioMixer::TransitionToSnapshots(UnityEngine.Audio.AudioMixerSnapshot[],System.Single[],System.Single)");
	_il2cpp_icall_func(__this, ___0_snapshots, ___1_weights, ___2_timeToReach);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 AudioMixerPlayable_GetHandle_m6C182D9794E901D123223BB57738A302BEAB41FD (AudioMixerPlayable_t6AADDF0C53DF1B4C17969EC24B3B4E4975F3A56C* __this, const RuntimeMethod* method) 
{
	PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_0 = __this->___m_Handle_0;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 AudioMixerPlayable_GetHandle_m6C182D9794E901D123223BB57738A302BEAB41FD_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	AudioMixerPlayable_t6AADDF0C53DF1B4C17969EC24B3B4E4975F3A56C* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AudioMixerPlayable_t6AADDF0C53DF1B4C17969EC24B3B4E4975F3A56C*>(__this + _offset);
	PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 _returnValue;
	_returnValue = AudioMixerPlayable_GetHandle_m6C182D9794E901D123223BB57738A302BEAB41FD(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AudioMixerPlayable_Equals_mDFB945EB48199A338BAD00D40FB8EEC34CF64D57 (AudioMixerPlayable_t6AADDF0C53DF1B4C17969EC24B3B4E4975F3A56C* __this, AudioMixerPlayable_t6AADDF0C53DF1B4C17969EC24B3B4E4975F3A56C ___0_other, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_0;
		L_0 = AudioMixerPlayable_GetHandle_m6C182D9794E901D123223BB57738A302BEAB41FD(__this, NULL);
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_1;
		L_1 = AudioMixerPlayable_GetHandle_m6C182D9794E901D123223BB57738A302BEAB41FD((&___0_other), NULL);
		il2cpp_codegen_runtime_class_init_inline(PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = PlayableHandle_op_Equality_m0E6C48A28F75A870AC22ADE3BD42F7F70A43C99C(L_0, L_1, NULL);
		V_0 = L_2;
		goto IL_0016;
	}

IL_0016:
	{
		bool L_3 = V_0;
		return L_3;
	}
}
IL2CPP_EXTERN_C  bool AudioMixerPlayable_Equals_mDFB945EB48199A338BAD00D40FB8EEC34CF64D57_AdjustorThunk (RuntimeObject* __this, AudioMixerPlayable_t6AADDF0C53DF1B4C17969EC24B3B4E4975F3A56C ___0_other, const RuntimeMethod* method)
{
	AudioMixerPlayable_t6AADDF0C53DF1B4C17969EC24B3B4E4975F3A56C* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AudioMixerPlayable_t6AADDF0C53DF1B4C17969EC24B3B4E4975F3A56C*>(__this + _offset);
	bool _returnValue;
	_returnValue = AudioMixerPlayable_Equals_mDFB945EB48199A338BAD00D40FB8EEC34CF64D57(_thisAdjusted, ___0_other, method);
	return _returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AudioMixer_tE2E8D79241711CDF9AB428C7FB96A35D80E40B04* AudioMixerSnapshot_get_audioMixer_mCC13199F7F9EBB2C5510DFA750A501747229CBF5 (AudioMixerSnapshot_tB9A62E6CFA52643B938E4FBFFAE1A5ED30907781* __this, const RuntimeMethod* method) 
{
	typedef AudioMixer_tE2E8D79241711CDF9AB428C7FB96A35D80E40B04* (*AudioMixerSnapshot_get_audioMixer_mCC13199F7F9EBB2C5510DFA750A501747229CBF5_ftn) (AudioMixerSnapshot_tB9A62E6CFA52643B938E4FBFFAE1A5ED30907781*);
	static AudioMixerSnapshot_get_audioMixer_mCC13199F7F9EBB2C5510DFA750A501747229CBF5_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioMixerSnapshot_get_audioMixer_mCC13199F7F9EBB2C5510DFA750A501747229CBF5_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Audio.AudioMixerSnapshot::get_audioMixer()");
	AudioMixer_tE2E8D79241711CDF9AB428C7FB96A35D80E40B04* icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioMixerSnapshot_TransitionTo_mABDDC418B89323A930A900E55336B5989CFD4AC8 (AudioMixerSnapshot_tB9A62E6CFA52643B938E4FBFFAE1A5ED30907781* __this, float ___0_timeToReach, const RuntimeMethod* method) 
{
	{
		AudioMixer_tE2E8D79241711CDF9AB428C7FB96A35D80E40B04* L_0;
		L_0 = AudioMixerSnapshot_get_audioMixer_mCC13199F7F9EBB2C5510DFA750A501747229CBF5(__this, NULL);
		float L_1 = ___0_timeToReach;
		NullCheck(L_0);
		AudioMixer_TransitionToSnapshot_m308E8D50A4573EFDD381ED7DEC23162F8CD0EB5D(L_0, __this, L_1, NULL);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSampleProvider_InvokeSampleFramesAvailable_mEB16F7230AB65A3576BF053AC5719F8E134FBCD4 (AudioSampleProvider_t602353124A2F6F2AEC38E56C3C21932344F712E2* __this, int32_t ___0_sampleFrameCount, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		SampleFramesHandler_tFE84FF9BBCEFB880D46227188F375BEF680AAA30* L_0 = __this->___sampleFramesAvailable_0;
		V_0 = (bool)((!(((RuntimeObject*)(SampleFramesHandler_tFE84FF9BBCEFB880D46227188F375BEF680AAA30*)L_0) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_001c;
		}
	}
	{
		SampleFramesHandler_tFE84FF9BBCEFB880D46227188F375BEF680AAA30* L_2 = __this->___sampleFramesAvailable_0;
		int32_t L_3 = ___0_sampleFrameCount;
		NullCheck(L_2);
		SampleFramesHandler_Invoke_m478D5645634B8C734E58B59CF7750797FC54F1BC_inline(L_2, __this, L_3, NULL);
	}

IL_001c:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSampleProvider_InvokeSampleFramesOverflow_m66593173A527981F5EB2A5EF77B0C9119DAB5E15 (AudioSampleProvider_t602353124A2F6F2AEC38E56C3C21932344F712E2* __this, int32_t ___0_droppedSampleFrameCount, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		SampleFramesHandler_tFE84FF9BBCEFB880D46227188F375BEF680AAA30* L_0 = __this->___sampleFramesOverflow_1;
		V_0 = (bool)((!(((RuntimeObject*)(SampleFramesHandler_tFE84FF9BBCEFB880D46227188F375BEF680AAA30*)L_0) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_001c;
		}
	}
	{
		SampleFramesHandler_tFE84FF9BBCEFB880D46227188F375BEF680AAA30* L_2 = __this->___sampleFramesOverflow_1;
		int32_t L_3 = ___0_droppedSampleFrameCount;
		NullCheck(L_2);
		SampleFramesHandler_Invoke_m478D5645634B8C734E58B59CF7750797FC54F1BC_inline(L_2, __this, L_3, NULL);
	}

IL_001c:
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
void SampleFramesHandler_Invoke_m478D5645634B8C734E58B59CF7750797FC54F1BC_Multicast(SampleFramesHandler_tFE84FF9BBCEFB880D46227188F375BEF680AAA30* __this, AudioSampleProvider_t602353124A2F6F2AEC38E56C3C21932344F712E2* ___0_provider, uint32_t ___1_sampleFrameCount, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		SampleFramesHandler_tFE84FF9BBCEFB880D46227188F375BEF680AAA30* currentDelegate = reinterpret_cast<SampleFramesHandler_tFE84FF9BBCEFB880D46227188F375BEF680AAA30*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, AudioSampleProvider_t602353124A2F6F2AEC38E56C3C21932344F712E2*, uint32_t, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___0_provider, ___1_sampleFrameCount, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void SampleFramesHandler_Invoke_m478D5645634B8C734E58B59CF7750797FC54F1BC_OpenInst(SampleFramesHandler_tFE84FF9BBCEFB880D46227188F375BEF680AAA30* __this, AudioSampleProvider_t602353124A2F6F2AEC38E56C3C21932344F712E2* ___0_provider, uint32_t ___1_sampleFrameCount, const RuntimeMethod* method)
{
	NullCheck(___0_provider);
	typedef void (*FunctionPointerType) (AudioSampleProvider_t602353124A2F6F2AEC38E56C3C21932344F712E2*, uint32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_provider, ___1_sampleFrameCount, method);
}
void SampleFramesHandler_Invoke_m478D5645634B8C734E58B59CF7750797FC54F1BC_OpenStatic(SampleFramesHandler_tFE84FF9BBCEFB880D46227188F375BEF680AAA30* __this, AudioSampleProvider_t602353124A2F6F2AEC38E56C3C21932344F712E2* ___0_provider, uint32_t ___1_sampleFrameCount, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (AudioSampleProvider_t602353124A2F6F2AEC38E56C3C21932344F712E2*, uint32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_provider, ___1_sampleFrameCount, method);
}
void SampleFramesHandler_Invoke_m478D5645634B8C734E58B59CF7750797FC54F1BC_OpenVirtual(SampleFramesHandler_tFE84FF9BBCEFB880D46227188F375BEF680AAA30* __this, AudioSampleProvider_t602353124A2F6F2AEC38E56C3C21932344F712E2* ___0_provider, uint32_t ___1_sampleFrameCount, const RuntimeMethod* method)
{
	NullCheck(___0_provider);
	VirtualActionInvoker1< uint32_t >::Invoke(il2cpp_codegen_method_get_slot(method), ___0_provider, ___1_sampleFrameCount);
}
void SampleFramesHandler_Invoke_m478D5645634B8C734E58B59CF7750797FC54F1BC_OpenInterface(SampleFramesHandler_tFE84FF9BBCEFB880D46227188F375BEF680AAA30* __this, AudioSampleProvider_t602353124A2F6F2AEC38E56C3C21932344F712E2* ___0_provider, uint32_t ___1_sampleFrameCount, const RuntimeMethod* method)
{
	NullCheck(___0_provider);
	InterfaceActionInvoker1< uint32_t >::Invoke(il2cpp_codegen_method_get_slot(method), il2cpp_codegen_method_get_declaring_type(method), ___0_provider, ___1_sampleFrameCount);
}
void SampleFramesHandler_Invoke_m478D5645634B8C734E58B59CF7750797FC54F1BC_OpenGenericVirtual(SampleFramesHandler_tFE84FF9BBCEFB880D46227188F375BEF680AAA30* __this, AudioSampleProvider_t602353124A2F6F2AEC38E56C3C21932344F712E2* ___0_provider, uint32_t ___1_sampleFrameCount, const RuntimeMethod* method)
{
	NullCheck(___0_provider);
	GenericVirtualActionInvoker1< uint32_t >::Invoke(method, ___0_provider, ___1_sampleFrameCount);
}
void SampleFramesHandler_Invoke_m478D5645634B8C734E58B59CF7750797FC54F1BC_OpenGenericInterface(SampleFramesHandler_tFE84FF9BBCEFB880D46227188F375BEF680AAA30* __this, AudioSampleProvider_t602353124A2F6F2AEC38E56C3C21932344F712E2* ___0_provider, uint32_t ___1_sampleFrameCount, const RuntimeMethod* method)
{
	NullCheck(___0_provider);
	GenericInterfaceActionInvoker1< uint32_t >::Invoke(method, ___0_provider, ___1_sampleFrameCount);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SampleFramesHandler__ctor_m7DDE0BAD439CD80791140C7D42D661B598A7663A (SampleFramesHandler_tFE84FF9BBCEFB880D46227188F375BEF680AAA30* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_method_pointer((RuntimeMethod*)___1_method);
	__this->___method_3 = ___1_method;
	__this->___m_target_2 = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 2;
		if (isOpen)
			__this->___invoke_impl_1 = (intptr_t)&SampleFramesHandler_Invoke_m478D5645634B8C734E58B59CF7750797FC54F1BC_OpenStatic;
		else
			{
				__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
				__this->___method_code_6 = (intptr_t)__this->___m_target_2;
			}
	}
	else
	{
		bool isOpen = parameterCount == 1;
		if (isOpen)
		{
			if (__this->___method_is_virtual_12)
			{
				if (il2cpp_codegen_method_is_generic_instance_method((RuntimeMethod*)___1_method))
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___1_method))
						__this->___invoke_impl_1 = (intptr_t)&SampleFramesHandler_Invoke_m478D5645634B8C734E58B59CF7750797FC54F1BC_OpenGenericInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&SampleFramesHandler_Invoke_m478D5645634B8C734E58B59CF7750797FC54F1BC_OpenGenericVirtual;
				else
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___1_method))
						__this->___invoke_impl_1 = (intptr_t)&SampleFramesHandler_Invoke_m478D5645634B8C734E58B59CF7750797FC54F1BC_OpenInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&SampleFramesHandler_Invoke_m478D5645634B8C734E58B59CF7750797FC54F1BC_OpenVirtual;
			}
			else
			{
				__this->___invoke_impl_1 = (intptr_t)&SampleFramesHandler_Invoke_m478D5645634B8C734E58B59CF7750797FC54F1BC_OpenInst;
			}
		}
		else
		{
			if (___0_object == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&SampleFramesHandler_Invoke_m478D5645634B8C734E58B59CF7750797FC54F1BC_Multicast;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SampleFramesHandler_Invoke_m478D5645634B8C734E58B59CF7750797FC54F1BC (SampleFramesHandler_tFE84FF9BBCEFB880D46227188F375BEF680AAA30* __this, AudioSampleProvider_t602353124A2F6F2AEC38E56C3C21932344F712E2* ___0_provider, uint32_t ___1_sampleFrameCount, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, AudioSampleProvider_t602353124A2F6F2AEC38E56C3C21932344F712E2*, uint32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_provider, ___1_sampleFrameCount, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AudioConfigurationChangeHandler_Invoke_m4DC27DD11512481B60071B20284E6886DAE54DE2_inline (AudioConfigurationChangeHandler_tE071B0CBA3B3A77D3E41F5FCB65B4017885B3177* __this, bool ___0_deviceWasChanged, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, bool, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_deviceWasChanged, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* __this, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Mobile_get_muteState_m64C1E8C61537317A7F153E1A72F7D39D85DA684D_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Mobile_t304A73480DF447472BDB16BA19A9E4FE2C8CB2DD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = ((Mobile_t304A73480DF447472BDB16BA19A9E4FE2C8CB2DD_StaticFields*)il2cpp_codegen_static_fields_for(Mobile_t304A73480DF447472BDB16BA19A9E4FE2C8CB2DD_il2cpp_TypeInfo_var))->___U3CmuteStateU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Mobile_set_muteState_m7C9A464BCA3762330E18CCAD79AF6C47B863CA02_inline (bool ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Mobile_t304A73480DF447472BDB16BA19A9E4FE2C8CB2DD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = ___0_value;
		((Mobile_t304A73480DF447472BDB16BA19A9E4FE2C8CB2DD_StaticFields*)il2cpp_codegen_static_fields_for(Mobile_t304A73480DF447472BDB16BA19A9E4FE2C8CB2DD_il2cpp_TypeInfo_var))->___U3CmuteStateU3Ek__BackingField_0 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PCMReaderCallback_Invoke_m76784C690C36B513E2AA5B0E4FD9831B2C7E5152_inline (PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E* __this, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___0_data, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_data, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PCMSetPositionCallback_Invoke_m434D4F02FA25F91DF6199EC5A799C551C7F93702_inline (PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072* __this, int32_t ___0_position, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_position, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SampleFramesHandler_Invoke_m478D5645634B8C734E58B59CF7750797FC54F1BC_inline (SampleFramesHandler_tFE84FF9BBCEFB880D46227188F375BEF680AAA30* __this, AudioSampleProvider_t602353124A2F6F2AEC38E56C3C21932344F712E2* ___0_provider, uint32_t ___1_sampleFrameCount, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, AudioSampleProvider_t602353124A2F6F2AEC38E56C3C21932344F712E2*, uint32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_provider, ___1_sampleFrameCount, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_m69C8773D6967F3B224777183E24EA621CE056F8F_gshared_inline (Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* __this, bool ___0_obj, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, bool, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_obj, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
