#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>


template <typename T1, typename T2>
struct VirtualActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R, typename T1>
struct VirtualFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};

struct ArrayPool_1_t645A9854926DCA747C654687A362AD03D55D2C07;
struct ArrayPool_1_t3CE8332C9DFE03FF160AB0CE0FF17DF7792E0E4B;
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
struct UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA;
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263;
struct ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129;
struct ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F;
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17;
struct Exception_t;
struct FormatException_tCD210E92627903FFEDAAA706C08FB6222B4D012B;
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
struct IFormatProvider_tC202922D43BFF3525109ABF3FB79625F5646AB52;
struct NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472;
struct OverflowException_t6F6AD8CACE20C37F701C05B373A215C4802FAB0C;
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
struct String_t;
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;

IL2CPP_EXTERN_C RuntimeClass* ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArrayPool_1_t3CE8332C9DFE03FF160AB0CE0FF17DF7792E0E4B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArrayPool_1_t645A9854926DCA747C654687A362AD03D55D2C07_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BigIntegerCalculator_tD707501FE6F3A13129CE42C8E75BF22C5301BE1F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FormatException_tCD210E92627903FFEDAAA706C08FB6222B4D012B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Number_t006CBC9914386BB171582F4C3A3EEB2EE404D461_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OverflowException_t6F6AD8CACE20C37F701C05B373A215C4802FAB0C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral02A7C4EF37893C2F6EC5DE096B85F28E75A99A54;
IL2CPP_EXTERN_C String_t* _stringLiteral0A559CB4D54EE486F9A4515005F1C40DE6B9EA77;
IL2CPP_EXTERN_C String_t* _stringLiteral0A5CB231DA96D87CFB74FFBAF2075ACF5ED946AC;
IL2CPP_EXTERN_C String_t* _stringLiteral0B0FEB3147CE20EB2C90076367F895C59BCD14B3;
IL2CPP_EXTERN_C String_t* _stringLiteral1649B6362D7BFE5B47AD5B0E3FF1C23199A234E7;
IL2CPP_EXTERN_C String_t* _stringLiteral18244E26F5FF2C5B45348E712BA2064897332C79;
IL2CPP_EXTERN_C String_t* _stringLiteral21AE4E4A6ECECB42D1D08C13B107CFC0DC4F744A;
IL2CPP_EXTERN_C String_t* _stringLiteral2560015662CF4CE1FBB0C239EE33C0A6BD267C34;
IL2CPP_EXTERN_C String_t* _stringLiteral323B50F239A0CEA841D1CDB6FD827C73F3DA7D58;
IL2CPP_EXTERN_C String_t* _stringLiteral3C7A831A0474AE58A1A511C0AE679EA6ACAF323B;
IL2CPP_EXTERN_C String_t* _stringLiteral3E6E3EAE051FC136B5CCFBED1CB3EB762BAE9210;
IL2CPP_EXTERN_C String_t* _stringLiteral46F273EF641E07D271D91E0DC24A4392582671F8;
IL2CPP_EXTERN_C String_t* _stringLiteral4C741498CBA8A5510C09300E9A8B8F588F5E6554;
IL2CPP_EXTERN_C String_t* _stringLiteral4DD3DE8CCECA489C7DDD3362FC292A3BE39B68F1;
IL2CPP_EXTERN_C String_t* _stringLiteral56C9B652878395853110609B8408AB9C094B096A;
IL2CPP_EXTERN_C String_t* _stringLiteral5813ADE87A3277FE8FD81CA759C1415B7C708595;
IL2CPP_EXTERN_C String_t* _stringLiteral586421FA97056FDB29C92DF11FC45E50039AF58C;
IL2CPP_EXTERN_C String_t* _stringLiteral59F5BD34B6C013DEACC784F69C67E95150033A84;
IL2CPP_EXTERN_C String_t* _stringLiteral65ECD3FE795425EDF31CE693A8E01759AC072FD6;
IL2CPP_EXTERN_C String_t* _stringLiteral66885E26C562C39DCC525798DECE3BF74488A976;
IL2CPP_EXTERN_C String_t* _stringLiteral690BF02630AC0BD6AA6BD08D2C36A28E1FC54F3E;
IL2CPP_EXTERN_C String_t* _stringLiteral6926C85E0B22B5E154849BA94F95B911D0F467AB;
IL2CPP_EXTERN_C String_t* _stringLiteral6B6E99AB68D2834E2BA881EA585508AE3BB8972B;
IL2CPP_EXTERN_C String_t* _stringLiteral71A4D286D674B387825473A6BF68FA0177EAEC37;
IL2CPP_EXTERN_C String_t* _stringLiteral7405068459969E65A509A575D3072180AB440CC4;
IL2CPP_EXTERN_C String_t* _stringLiteral7491756875CB4DEE250E72418D6CBD5E0DD81F9A;
IL2CPP_EXTERN_C String_t* _stringLiteral75024B19E3B0D929FB55D9F58FB9F2BD92238C9A;
IL2CPP_EXTERN_C String_t* _stringLiteral79C39E67CD586A3F790D4A0E38FA9F11404B5D1D;
IL2CPP_EXTERN_C String_t* _stringLiteral7A784352CB13C6A681E12F724A26B5F6FAB9A9B1;
IL2CPP_EXTERN_C String_t* _stringLiteral85DAE785199A9898AFE660853B969B9DB82D9666;
IL2CPP_EXTERN_C String_t* _stringLiteral8C9373393C312536C1D242EFF64FED26D13EC4C2;
IL2CPP_EXTERN_C String_t* _stringLiteral901CED0B08A382B88967A848ACC86064E89B6DA4;
IL2CPP_EXTERN_C String_t* _stringLiteral918D7D38C63FE5E56F05EB697A47C91549FBEDCB;
IL2CPP_EXTERN_C String_t* _stringLiteralA019FB7F17AA36A9743C530E1F11D5613B8B1158;
IL2CPP_EXTERN_C String_t* _stringLiteralAB1BFE74E7A4298B8F37FB9EB6B78547560992A2;
IL2CPP_EXTERN_C String_t* _stringLiteralACEB01644E7A4BCEFA0B7FD13C917DA74C936C31;
IL2CPP_EXTERN_C String_t* _stringLiteralACF7EBD89F85F7166021028EA7503E6D3600F722;
IL2CPP_EXTERN_C String_t* _stringLiteralB1EEC0D26B91AABE220113FD74CE99065239B040;
IL2CPP_EXTERN_C String_t* _stringLiteralBEDE0708DCC90F9E18B81ABBCC88E8AFE5F7C1E5;
IL2CPP_EXTERN_C String_t* _stringLiteralC02C28AFEBE998F767E4AF43E3BE8F5E9FA11536;
IL2CPP_EXTERN_C String_t* _stringLiteralC4BDB973AE821DEA70F0495195EF17C3A498E945;
IL2CPP_EXTERN_C String_t* _stringLiteralC4C4969CA68A212C57B6FC1FBAE5AEBACB547E07;
IL2CPP_EXTERN_C String_t* _stringLiteralC798E2ADCB059C2253762B87F88B2661EADEBEA6;
IL2CPP_EXTERN_C String_t* _stringLiteralCA04D202AC5F9C676BB75B6E26B16EE1F062729C;
IL2CPP_EXTERN_C String_t* _stringLiteralCF15E6AB986C6E1A6B9D665510A803EB2245E941;
IL2CPP_EXTERN_C String_t* _stringLiteralCF5B5845107C1302EDC696A0C7AAAC4FA03151F4;
IL2CPP_EXTERN_C String_t* _stringLiteralD25163422D668F498B77BBE8BE47AAF95218DD82;
IL2CPP_EXTERN_C String_t* _stringLiteralDC400987E5EE16841C02DE14AE43EB578A7FEAC0;
IL2CPP_EXTERN_C String_t* _stringLiteralDD1E96489DC4F60E6AB0135A5F5CDE79341D8BF7;
IL2CPP_EXTERN_C String_t* _stringLiteralED07F219A0721B30764C92E705CC226FA5B25955;
IL2CPP_EXTERN_C String_t* _stringLiteralEEECCAC246F56CB6F1028EA6BD68FFDD99972BC2;
IL2CPP_EXTERN_C String_t* _stringLiteralF8E3475A2DDD8A338B5687E45B80510D26142DC9;
IL2CPP_EXTERN_C String_t* _stringLiteralFBC759AD7743C9AB15A1D627CA2AA2D9E3D1E5B9;
IL2CPP_EXTERN_C const RuntimeMethod* ArrayPool_1_get_Shared_m59AE954C801963CBE5E506D9378429032D161C97_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ArrayPool_1_get_Shared_m8EB88B4EDF81135B55DB0F33A749B8087FE4646F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Array_Empty_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m6080CA526758F4FA182A066B2780D1761CD36ED5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BigInteger_CompareTo_mFF2E7BDB82C698B3A3BFD93FD723629F9606B33E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BigInteger_TryGetBytes_m015641ED36F51F9CA2D92665048EB5E0ED3C6DCD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BigInteger__ctor_m14A0AC47ABF1AF6DE7B653CED685D7AD11B54BE6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BigInteger__ctor_m25FA3F3C832BC621CD91ABFAC3535A2F4EE7B371_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BigInteger_op_Explicit_m381F80B7F65BFEC7F2597DCDB24622F7F32E6848_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BigNumber_FormatBigInteger_m626A9168DC2BBB348E31E47313E83D88263747AA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MemoryMarshal_GetReference_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_mE4C181D41EF4A4EC432CD3610B2969041E6F2F7A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Number_FormatFixed_m0AE79A769FD61DE736216A34F723B8D7D793C1BB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Number_NumberToString_mB02B6AFBEEF66C19BB094F00189CC8E15A16AD18_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ReadOnlySpan_1_CopyTo_m42F1668DECE40277D97A37705EA6BE27CF7D5030_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ReadOnlySpan_1_Slice_mC8B7C665F49384744642F03EA355239F0E4AF966_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ReadOnlySpan_1_TryCopyTo_m22E885FE905F1306DDE8000F155109F7F4987666_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ReadOnlySpan_1__ctor_m0152E50B40750679B83FF9F30CA539FFBB98EEE8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ReadOnlySpan_1__ctor_m1D3E8C5A560BE65D9A5C3E5D0D891C79F4895B0B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ReadOnlySpan_1__ctor_mDADE08E6B4594775C6675B389078E5FE98C745D5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ReadOnlySpan_1_get_Length_m36BD32453530B535FE60A8123643219FEAABC351_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ReadOnlySpan_1_get_Length_m54864A0BB817050A9110E85BB5FB31EF63699982_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Span_1_CopyTo_m197E47790117E2C925FE1A8E051A19AB9CF4260B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Span_1_CopyTo_m7BB0A9984004C444974C7F111CCAD6D85325A15E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Span_1_Fill_m13ADB57BBCF7684FF92630FACC729B10B9B6B254_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Span_1_Slice_m9D8BA8245B8DC9BFB4A4164759CBAAEAD1318CD6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Span_1_Slice_mDC9AA64B960B9BB8357655827A8202DF83443068_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Span_1_Slice_mEFBC3C78FD443FFE23F9E841D43B7B0271622843_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Span_1_TryCopyTo_m25ED56B31CC4F4DBC734E898741037AADC8806F8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Span_1__ctor_m31EE4A5510B5C504DB26DB281BC7D4179B859F2B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Span_1__ctor_m835590E344B05AF6AF00A78E92C4175BD781A3D2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Span_1__ctor_mE18EBB601FBFA01BA29FE353364700952A9091FE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Span_1_get_Length_m87AB3C694F2E4802F14D006F21C020816045285F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Span_1_get_Length_m8E944E4954E037877A25B9FF6B901F1F901D4769_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Span_1_get_Length_mB79622153F80AD55A805C005842AF045F4FCF992_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Span_1_op_Implicit_m03D0CEDC1BC95844236105D1DE24A702B956BFE4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Span_1_op_Implicit_m75103E0CA16D9EEB5414F2FA9611149122CF23CC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Span_1_op_Implicit_m8619157C8809464A173FF531960A75A0ACE2CE91_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Span_1_op_Implicit_mA0E9FDCF2C5113BA9F9C4964D17D8BDFBD6F3C98_RuntimeMethod_var;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
struct UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
struct U3CModuleU3E_t8BB3B0410A6FE73E075A5E8CD2F563089B45BBFC 
{
};
struct ArrayPool_1_t645A9854926DCA747C654687A362AD03D55D2C07  : public RuntimeObject
{
};
struct ArrayPool_1_t3CE8332C9DFE03FF160AB0CE0FF17DF7792E0E4B  : public RuntimeObject
{
};
struct EmptyArray_1_t7187E746F328254739F076CFBCAABB28D4B4554C  : public RuntimeObject
{
};
struct BigIntegerCalculator_tD707501FE6F3A13129CE42C8E75BF22C5301BE1F  : public RuntimeObject
{
};
struct BigNumber_t12C93976F4F3CB79D8D5C069283A73A731644E87  : public RuntimeObject
{
};
struct FormatProvider_t4FDB209C68BA0CE6E8AEF85A95F20CBA5F5688F4  : public RuntimeObject
{
};
struct NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472  : public RuntimeObject
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___numberGroupSizes_1;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___currencyGroupSizes_2;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___percentGroupSizes_3;
	String_t* ___positiveSign_4;
	String_t* ___negativeSign_5;
	String_t* ___numberDecimalSeparator_6;
	String_t* ___numberGroupSeparator_7;
	String_t* ___currencyGroupSeparator_8;
	String_t* ___currencyDecimalSeparator_9;
	String_t* ___currencySymbol_10;
	String_t* ___ansiCurrencySymbol_11;
	String_t* ___nanSymbol_12;
	String_t* ___positiveInfinitySymbol_13;
	String_t* ___negativeInfinitySymbol_14;
	String_t* ___percentDecimalSeparator_15;
	String_t* ___percentGroupSeparator_16;
	String_t* ___percentSymbol_17;
	String_t* ___perMilleSymbol_18;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___nativeDigits_19;
	int32_t ___m_dataItem_20;
	int32_t ___numberDecimalDigits_21;
	int32_t ___currencyDecimalDigits_22;
	int32_t ___currencyPositivePattern_23;
	int32_t ___currencyNegativePattern_24;
	int32_t ___numberNegativePattern_25;
	int32_t ___percentPositivePattern_26;
	int32_t ___percentNegativePattern_27;
	int32_t ___percentDecimalDigits_28;
	int32_t ___digitSubstitution_29;
	bool ___isReadOnly_30;
	bool ___m_useUserOverride_31;
	bool ___m_isInvariant_32;
	bool ___validForParseAsNumber_33;
	bool ___validForParseAsCurrency_34;
};
struct NumericsHelpers_tD53D7BC09972CEA0D205E1295EC8A69F3EA12F7B  : public RuntimeObject
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
struct Number_t006CBC9914386BB171582F4C3A3EEB2EE404D461  : public RuntimeObject
{
};
struct BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F 
{
	int32_t ____sign_0;
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ____bits_1;
};
struct BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F_marshaled_pinvoke
{
	int32_t ____sign_0;
	Il2CppSafeArray* ____bits_1;
};
struct BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F_marshaled_com
{
	int32_t ____sign_0;
	Il2CppSafeArray* ____bits_1;
};
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	bool ___m_value_0;
};
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3 
{
	uint8_t ___m_value_0;
};
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17 
{
	Il2CppChar ___m_value_0;
};
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	int32_t ___m_value_0;
};
struct Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3 
{
	int64_t ___m_value_0;
};
struct IntPtr_t 
{
	void* ___m_value_0;
};
struct UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B 
{
	uint32_t ___m_value_0;
};
struct UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF 
{
	uint64_t ___m_value_0;
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
struct NumberBuffer_t0F9FC9D15F03CFDEBA3B3F4210A2AB3B53305CDA 
{
	int32_t ___precision_0;
	int32_t ___scale_1;
	bool ___sign_2;
	Il2CppChar* ___overrideDigits_3;
};
struct NumberBuffer_t0F9FC9D15F03CFDEBA3B3F4210A2AB3B53305CDA_marshaled_pinvoke
{
	int32_t ___precision_0;
	int32_t ___scale_1;
	int32_t ___sign_2;
	Il2CppChar* ___overrideDigits_3;
};
struct NumberBuffer_t0F9FC9D15F03CFDEBA3B3F4210A2AB3B53305CDA_marshaled_com
{
	int32_t ___precision_0;
	int32_t ___scale_1;
	int32_t ___sign_2;
	Il2CppChar* ___overrideDigits_3;
};
struct ByReference_1_t9C85BCCAAF8C525B6C06B07E922D8D217BE8D6FC 
{
	intptr_t ____value_0;
};
struct ByReference_1_t7BA5A6CA164F770BC688F21C5978D368716465F5 
{
	intptr_t ____value_0;
};
struct ByReference_1_tDDF129F0BC02430629D5CD253C681112F166BAD4 
{
	intptr_t ____value_0;
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
struct RawData_t37CAF2D3F74B7723974ED7CEEE9B297D8FA64ED0  : public RuntimeObject
{
	intptr_t ___Bounds_0;
	intptr_t ___Count_1;
	uint8_t ___Data_2;
};
struct RawData_t37CAF2D3F74B7723974ED7CEEE9B297D8FA64ED0_marshaled_pinvoke
{
	intptr_t ___Bounds_0;
	intptr_t ___Count_1;
	uint8_t ___Data_2;
};
struct RawData_t37CAF2D3F74B7723974ED7CEEE9B297D8FA64ED0_marshaled_com
{
	intptr_t ___Bounds_0;
	intptr_t ___Count_1;
	uint8_t ___Data_2;
};
struct ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D 
{
	ByReference_1_t9C85BCCAAF8C525B6C06B07E922D8D217BE8D6FC ____pointer_0;
	int32_t ____length_1;
};
struct ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 
{
	ByReference_1_t7BA5A6CA164F770BC688F21C5978D368716465F5 ____pointer_0;
	int32_t ____length_1;
};
struct Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 
{
	ByReference_1_t9C85BCCAAF8C525B6C06B07E922D8D217BE8D6FC ____pointer_0;
	int32_t ____length_1;
};
struct Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D 
{
	ByReference_1_t7BA5A6CA164F770BC688F21C5978D368716465F5 ____pointer_0;
	int32_t ____length_1;
};
struct Span_1_t3C5DB525B005B1AC5A1F3BDD528900C5C7C7D316 
{
	ByReference_1_tDDF129F0BC02430629D5CD253C681112F166BAD4 ____pointer_0;
	int32_t ____length_1;
};
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
	String_t* ____paramName_18;
};
struct ArithmeticException_t07E77822D0007642BC8959A671E70D1F33C84FEA  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};
struct FormatException_tCD210E92627903FFEDAAA706C08FB6222B4D012B  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};
struct ValueStringBuilder_tEBD54C46E3AF8527BD0D234124F5C1AC14E9E251 
{
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ____arrayToReturnToPool_0;
	Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D ____chars_1;
	int32_t ____pos_2;
};
struct ValueStringBuilder_tEBD54C46E3AF8527BD0D234124F5C1AC14E9E251_marshaled_pinvoke
{
	uint8_t* ____arrayToReturnToPool_0;
	Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D ____chars_1;
	int32_t ____pos_2;
};
struct ValueStringBuilder_tEBD54C46E3AF8527BD0D234124F5C1AC14E9E251_marshaled_com
{
	uint8_t* ____arrayToReturnToPool_0;
	Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D ____chars_1;
	int32_t ____pos_2;
};
struct ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129  : public ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263
{
};
struct ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F  : public ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263
{
	RuntimeObject* ____actualValue_19;
};
struct OverflowException_t6F6AD8CACE20C37F701C05B373A215C4802FAB0C  : public ArithmeticException_t07E77822D0007642BC8959A671E70D1F33C84FEA
{
};
struct ArrayPool_1_t645A9854926DCA747C654687A362AD03D55D2C07_StaticFields
{
	ArrayPool_1_t645A9854926DCA747C654687A362AD03D55D2C07* ___U3CSharedU3Ek__BackingField_0;
};
struct ArrayPool_1_t3CE8332C9DFE03FF160AB0CE0FF17DF7792E0E4B_StaticFields
{
	ArrayPool_1_t3CE8332C9DFE03FF160AB0CE0FF17DF7792E0E4B* ___U3CSharedU3Ek__BackingField_0;
};
struct EmptyArray_1_t7187E746F328254739F076CFBCAABB28D4B4554C_StaticFields
{
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___Value_0;
};
struct BigIntegerCalculator_tD707501FE6F3A13129CE42C8E75BF22C5301BE1F_StaticFields
{
	int32_t ___ReducerThreshold_0;
	int32_t ___SquareThreshold_1;
	int32_t ___AllocationThreshold_2;
	int32_t ___MultiplyThreshold_3;
};
struct NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472_StaticFields
{
	NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* ___invariantInfo_0;
};
struct String_t_StaticFields
{
	String_t* ___Empty_6;
};
struct Number_t006CBC9914386BB171582F4C3A3EEB2EE404D461_StaticFields
{
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___s_posCurrencyFormats_0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___s_negCurrencyFormats_1;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___s_posPercentFormats_2;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___s_negPercentFormats_3;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___s_negNumberFormats_4;
	String_t* ___s_posNumberFormat_5;
};
struct BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F_StaticFields
{
	BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F ___s_bnMinInt_2;
	BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F ___s_bnOneInt_3;
	BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F ___s_bnZeroInt_4;
	BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F ___s_bnMinusOneInt_5;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___s_success_6;
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
struct Exception_t_StaticFields
{
	RuntimeObject* ___s_EDILock_0;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
struct UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA  : public RuntimeArray
{
	ALIGN_FIELD (8) uint32_t m_Items[1];

	inline uint32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint32_t value)
	{
		m_Items[index] = value;
	}
};
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031  : public RuntimeArray
{
	ALIGN_FIELD (8) uint8_t m_Items[1];

	inline uint8_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint8_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint8_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint8_t value)
	{
		m_Items[index] = value;
	}
};
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB  : public RuntimeArray
{
	ALIGN_FIELD (8) Il2CppChar m_Items[1];

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


IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_m1D3E8C5A560BE65D9A5C3E5D0D891C79F4895B0B_gshared_inline (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_array, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ReadOnlySpan_1_get_Length_m54864A0BB817050A9110E85BB5FB31EF63699982_gshared_inline (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D ReadOnlySpan_1_Slice_mC8B7C665F49384744642F03EA355239F0E4AF966_gshared_inline (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D* __this, int32_t ___0_start, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Span_1_get_Length_m8E944E4954E037877A25B9FF6B901F1F901D4769_gshared_inline (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 Span_1_op_Implicit_m8619157C8809464A173FF531960A75A0ACE2CE91_gshared (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_array, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* Array_Empty_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m6080CA526758F4FA182A066B2780D1761CD36ED5_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ReadOnlySpan_1_get_Length_m36BD32453530B535FE60A8123643219FEAABC351_gshared_inline (ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_mE18EBB601FBFA01BA29FE353364700952A9091FE_gshared_inline (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ArrayPool_1_t645A9854926DCA747C654687A362AD03D55D2C07* ArrayPool_1_get_Shared_m59AE954C801963CBE5E506D9378429032D161C97_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 Span_1_Slice_m9D8BA8245B8DC9BFB4A4164759CBAAEAD1318CD6_gshared_inline (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305* __this, int32_t ___0_start, int32_t ___1_length, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_m835590E344B05AF6AF00A78E92C4175BD781A3D2_gshared_inline (Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_mDADE08E6B4594775C6675B389078E5FE98C745D5_gshared_inline (ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1* __this, CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___0_array, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlySpan_1_TryCopyTo_m22E885FE905F1306DDE8000F155109F7F4987666_gshared (ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1* __this, Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D ___0_destination, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar* MemoryMarshal_GetReference_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_mE4C181D41EF4A4EC432CD3610B2969041E6F2F7A_gshared (ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 ___0_span, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_m31EE4A5510B5C504DB26DB281BC7D4179B859F2B_gshared_inline (Span_1_t3C5DB525B005B1AC5A1F3BDD528900C5C7C7D316* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Span_1_get_Length_m87AB3C694F2E4802F14D006F21C020816045285F_gshared_inline (Span_1_t3C5DB525B005B1AC5A1F3BDD528900C5C7C7D316* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Span_1_t3C5DB525B005B1AC5A1F3BDD528900C5C7C7D316 Span_1_op_Implicit_m75103E0CA16D9EEB5414F2FA9611149122CF23CC_gshared (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___0_array, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1_CopyTo_m197E47790117E2C925FE1A8E051A19AB9CF4260B_gshared (Span_1_t3C5DB525B005B1AC5A1F3BDD528900C5C7C7D316* __this, Span_1_t3C5DB525B005B1AC5A1F3BDD528900C5C7C7D316 ___0_destination, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D Span_1_Slice_mEFBC3C78FD443FFE23F9E841D43B7B0271622843_gshared_inline (Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D* __this, int32_t ___0_start, int32_t ___1_length, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 Span_1_op_Implicit_m03D0CEDC1BC95844236105D1DE24A702B956BFE4_gshared (Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D ___0_span, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Span_1_TryCopyTo_m25ED56B31CC4F4DBC734E898741037AADC8806F8_gshared (Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D* __this, Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D ___0_destination, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Span_1_get_Length_mB79622153F80AD55A805C005842AF045F4FCF992_gshared_inline (Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D Span_1_Slice_mDC9AA64B960B9BB8357655827A8202DF83443068_gshared_inline (Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D* __this, int32_t ___0_start, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1_CopyTo_m7BB0A9984004C444974C7F111CCAD6D85325A15E_gshared (Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D* __this, Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D ___0_destination, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1_Fill_m13ADB57BBCF7684FF92630FACC729B10B9B6B254_gshared (Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D* __this, Il2CppChar ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlySpan_1_CopyTo_m42F1668DECE40277D97A37705EA6BE27CF7D5030_gshared (ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1* __this, Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D ___0_destination, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ArrayPool_1_t3CE8332C9DFE03FF160AB0CE0FF17DF7792E0E4B* ArrayPool_1_get_Shared_m8EB88B4EDF81135B55DB0F33A749B8087FE4646F_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D Span_1_op_Implicit_mA0E9FDCF2C5113BA9F9C4964D17D8BDFBD6F3C98_gshared (CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___0_array, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_m0152E50B40750679B83FF9F30CA539FFBB98EEE8_gshared_inline (ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1* __this, Il2CppChar* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_m0FC0B92549C2968E80B5F75A85F28B96DBFCFD63_gshared_inline (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D* __this, uint8_t* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_m947BF95D54571BF3897F96822B7A8FDA5853497B_gshared_inline (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305* __this, uint8_t* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_mC9BE2938B716B46BB6B9070B94DBE5CE814BC0E2_gshared_inline (Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D* __this, Il2CppChar* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) ;

IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BigInteger__ctor_mFEDEDA4A6AFC2BA534FEEF4EB3431B9C5AC3F9D9 (BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F* __this, int32_t ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BigInteger__ctor_mA87DC2182BB2F6AA0209BD98E81C30BCE5B8BBAA (BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F* __this, int64_t ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* __this, String_t* ___0_paramName, const RuntimeMethod* method) ;
inline void ReadOnlySpan_1__ctor_m1D3E8C5A560BE65D9A5C3E5D0D891C79F4895B0B_inline (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_array, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, const RuntimeMethod*))ReadOnlySpan_1__ctor_m1D3E8C5A560BE65D9A5C3E5D0D891C79F4895B0B_gshared_inline)(__this, ___0_array, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BigInteger__ctor_mF6B2AC2AD4056AB6903913C56A92F565EB08BAFD (BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F* __this, ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D ___0_value, bool ___1_isUnsigned, bool ___2_isBigEndian, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BigInteger__ctor_m25FA3F3C832BC621CD91ABFAC3535A2F4EE7B371 (BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_value, const RuntimeMethod* method) ;
inline int32_t ReadOnlySpan_1_get_Length_m54864A0BB817050A9110E85BB5FB31EF63699982_inline (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D*, const RuntimeMethod*))ReadOnlySpan_1_get_Length_m54864A0BB817050A9110E85BB5FB31EF63699982_gshared_inline)(__this, method);
}
inline ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D ReadOnlySpan_1_Slice_mC8B7C665F49384744642F03EA355239F0E4AF966_inline (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D* __this, int32_t ___0_start, const RuntimeMethod* method)
{
	return ((  ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D (*) (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D*, int32_t, const RuntimeMethod*))ReadOnlySpan_1_Slice_mC8B7C665F49384744642F03EA355239F0E4AF966_gshared_inline)(__this, ___0_start, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NumericsHelpers_DangerousMakeTwosComplement_m4B6EED2DF0E8C7B5171CDC7BBE5A7A3D68C79D4B (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___0_d, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41 (RuntimeArray* ___0_sourceArray, int32_t ___1_sourceIndex, RuntimeArray* ___2_destinationArray, int32_t ___3_destinationIndex, int32_t ___4_length, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BigInteger__ctor_mB5E6337A77FC9888762DD29AAF54D2BBDD828D03 (BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F* __this, int32_t ___0_n, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___1_rgu, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BigInteger__ctor_m14A0AC47ABF1AF6DE7B653CED685D7AD11B54BE6 (BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F* __this, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___0_value, bool ___1_negative, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NumericsHelpers_CombineHash_m676E72BC5EC287D4C9602A8D876D24E2CBFDC776 (int32_t ___0_n1, int32_t ___1_n2, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BigInteger_GetHashCode_m2CB01C462C09EB23616010EB24E0A87A4D35D783 (BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BigInteger_Equals_m36D3C46B170C61FBA8D78C5D4D52B6627DCB2314 (BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F* __this, BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F ___0_other, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BigInteger_Equals_mC711A33C4466DC2C053785E0A8A34B49A197EA1C (BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BigInteger_GetDiffLength_m86F9E98613660CB092EA24BC931C98B60E802902 (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___0_rgu1, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___1_rgu2, int32_t ___2_cu, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BigInteger_CompareTo_m1B9ADF53CC7255B4DE59A270AA1EA854E25E7296 (BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F* __this, BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F ___0_other, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62 (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* __this, String_t* ___0_message, String_t* ___1_paramName, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BigInteger_CompareTo_mFF2E7BDB82C698B3A3BFD93FD723629F9606B33E (BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* BigInteger_TryGetBytes_m015641ED36F51F9CA2D92665048EB5E0ED3C6DCD (BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F* __this, int32_t ___0_mode, Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 ___1_destination, bool ___2_isUnsigned, bool ___3_isBigEndian, int32_t* ___4_bytesWritten, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BigInteger_TryWriteBytes_m4B86F875CA1C01790FE20D1A689DCA41D22326C0 (BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F* __this, Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 ___0_destination, int32_t* ___1_bytesWritten, bool ___2_isUnsigned, bool ___3_isBigEndian, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BigInteger_TryWriteOrCountBytes_mB22B053CE50BA54DF99F85EEAE05CA7ABDEF6441 (BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F* __this, Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 ___0_destination, int32_t* ___1_bytesWritten, bool ___2_isUnsigned, bool ___3_isBigEndian, const RuntimeMethod* method) ;
inline int32_t Span_1_get_Length_m8E944E4954E037877A25B9FF6B901F1F901D4769_inline (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305*, const RuntimeMethod*))Span_1_get_Length_m8E944E4954E037877A25B9FF6B901F1F901D4769_gshared_inline)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OverflowException__ctor_m2B99D79236B7B87C0BB6C9AB2E557DECE481C264 (OverflowException_t6F6AD8CACE20C37F701C05B373A215C4802FAB0C* __this, String_t* ___0_message, const RuntimeMethod* method) ;
inline Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 Span_1_op_Implicit_m8619157C8809464A173FF531960A75A0ACE2CE91 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_array, const RuntimeMethod* method)
{
	return ((  Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 (*) (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, const RuntimeMethod*))Span_1_op_Implicit_m8619157C8809464A173FF531960A75A0ACE2CE91_gshared)(___0_array, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* NumberFormatInfo_get_CurrentInfo_m121C9878F777AD81289C7B2BF589293E509FD9B4 (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* BigNumber_FormatBigInteger_m1C6793BBD747BBC3E729A18FDAF8A5C814C80DC4 (BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F ___0_value, String_t* ___1_format, NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* ___2_info, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* BigInteger_ToString_m6AFB0DE9CD953DA8B015C31B3CC1FEF86D98A306 (BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* NumberFormatInfo_GetInstance_m705987E5E7D3E5EC5C5DD2D088FBC9BCBA0FC31F (RuntimeObject* ___0_formatProvider, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* BigInteger_ToString_mF67077A813661D27640565FC41346D65A155B3F6 (BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F* __this, String_t* ___0_format, RuntimeObject* ___1_provider, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F BigInteger_op_Implicit_mB409693E4A4DD397B321CE56E748831FD0B67A06 (int64_t ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t NumericsHelpers_Abs_m82DD45E6FEBF5DAB9533B31E5BC62DC5EF37568A (int32_t ___0_a, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* BigIntegerCalculator_Add_m6B363515A5150645D0CAD0DDF4B04348B95C29C3 (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___0_left, uint32_t ___1_right, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* BigIntegerCalculator_Add_mE49BAD7CDF073CF2D2A2DEABCF11AEE5CC239298 (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___0_left, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___1_right, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* BigIntegerCalculator_Subtract_mB336D562EA742D2092AFD220202FC15D9A2791A7 (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___0_left, uint32_t ___1_right, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BigIntegerCalculator_Compare_mD61B527BE1032F19B97519458C7AEAD60CBB8774 (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___0_left, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___1_right, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* BigIntegerCalculator_Subtract_m8BFB5D1D8B089DA2BA5AC0EB0A45D98A6F6AC681 (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___0_left, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___1_right, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F BigInteger_op_RightShift_mE0645B6555F95B4838A8F471584DCA026848F7AB (BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F ___0_value, int32_t ___1_shift, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BigInteger_GetPartsForBitManipulation_m679473F863B7A311A59B4B58F26F1D30ADFEEADF (BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F* ___0_x, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA** ___1_xd, int32_t* ___2_xl, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F BigInteger_op_LeftShift_m9C9DD1A22775C31A01650FEB59A91D4A58B719B3 (BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F ___0_value, int32_t ___1_shift, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F BigInteger_get_MinusOne_m3FF0F44F8C3D6DFB66C00B61017E42E555585465_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F BigInteger_Subtract_mA96B4B988F08F5DCADABE0B27BA23D970EBFF88D (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___0_leftBits, int32_t ___1_leftSign, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___2_rightBits, int32_t ___3_rightSign, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F BigInteger_Add_m7544497BCCB4A4612A2CFC9F272FFA6E22F740D8 (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___0_leftBits, int32_t ___1_leftSign, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___2_rightBits, int32_t ___3_rightSign, const RuntimeMethod* method) ;
inline ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* Array_Empty_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m6080CA526758F4FA182A066B2780D1761CD36ED5_inline (const RuntimeMethod* method)
{
	return ((  ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* (*) (const RuntimeMethod*))Array_Empty_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m6080CA526758F4FA182A066B2780D1761CD36ED5_gshared_inline)(method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BigIntegerCalculator_Add_m3CB52FDB28E32D96E1400C839ED8E7F51726A814 (uint32_t* ___0_left, int32_t ___1_leftLength, uint32_t* ___2_right, int32_t ___3_rightLength, uint32_t* ___4_bits, int32_t ___5_bitsLength, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BigIntegerCalculator_Subtract_mAD5DABE3E13103E8ADCBDA013BC874F17839AC45 (uint32_t* ___0_left, int32_t ___1_leftLength, uint32_t* ___2_right, int32_t ___3_rightLength, uint32_t* ___4_bits, int32_t ___5_bitsLength, const RuntimeMethod* method) ;
inline int32_t ReadOnlySpan_1_get_Length_m36BD32453530B535FE60A8123643219FEAABC351_inline (ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1*, const RuntimeMethod*))ReadOnlySpan_1_get_Length_m36BD32453530B535FE60A8123643219FEAABC351_gshared_inline)(__this, method);
}
inline void Span_1__ctor_mE18EBB601FBFA01BA29FE353364700952A9091FE_inline (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method)
{
	((  void (*) (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305*, void*, int32_t, const RuntimeMethod*))Span_1__ctor_mE18EBB601FBFA01BA29FE353364700952A9091FE_gshared_inline)(__this, ___0_pointer, ___1_length, method);
}
inline ArrayPool_1_t645A9854926DCA747C654687A362AD03D55D2C07* ArrayPool_1_get_Shared_m59AE954C801963CBE5E506D9378429032D161C97_inline (const RuntimeMethod* method)
{
	return ((  ArrayPool_1_t645A9854926DCA747C654687A362AD03D55D2C07* (*) (const RuntimeMethod*))ArrayPool_1_get_Shared_m59AE954C801963CBE5E506D9378429032D161C97_gshared_inline)(method);
}
inline Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 Span_1_Slice_m9D8BA8245B8DC9BFB4A4164759CBAAEAD1318CD6_inline (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305* __this, int32_t ___0_start, int32_t ___1_length, const RuntimeMethod* method)
{
	return ((  Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 (*) (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305*, int32_t, int32_t, const RuntimeMethod*))Span_1_Slice_m9D8BA8245B8DC9BFB4A4164759CBAAEAD1318CD6_gshared_inline)(__this, ___0_start, ___1_length, method);
}
inline void Span_1__ctor_m835590E344B05AF6AF00A78E92C4175BD781A3D2_inline (Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method)
{
	((  void (*) (Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D*, void*, int32_t, const RuntimeMethod*))Span_1__ctor_m835590E344B05AF6AF00A78E92C4175BD781A3D2_gshared_inline)(__this, ___0_pointer, ___1_length, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueStringBuilder__ctor_m0660F060D846CA37202B1BEEE35D26DAC2B6AFF6 (ValueStringBuilder_tEBD54C46E3AF8527BD0D234124F5C1AC14E9E251* __this, Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D ___0_initialBuffer, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ValueStringBuilder_Append_mBB79BFE6EAB412D689B7D6675A6E0BC3F6FCDFCC_inline (ValueStringBuilder_tEBD54C46E3AF8527BD0D234124F5C1AC14E9E251* __this, Il2CppChar ___0_c, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D ValueStringBuilder_AppendSpan_m0D80091AA43B5BD4944DCD4D8729310FEAF11382_inline (ValueStringBuilder_tEBD54C46E3AF8527BD0D234124F5C1AC14E9E251* __this, int32_t ___0_length, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3 (String_t* __this, int32_t ___0_index, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ValueStringBuilder_get_Length_m5D0F5925DA1601B18CF1ADC62D8750F955DC3F6B_inline (ValueStringBuilder_tEBD54C46E3AF8527BD0D234124F5C1AC14E9E251* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueStringBuilder_Insert_m658B685FEAD8D7A9935D2720FAAAB05382942E2C (ValueStringBuilder_tEBD54C46E3AF8527BD0D234124F5C1AC14E9E251* __this, int32_t ___0_index, Il2CppChar ___1_value, int32_t ___2_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ValueStringBuilder_TryCopyTo_m1ADDDEC065D0CCAB6A61D871D7272522B95F801E (ValueStringBuilder_tEBD54C46E3AF8527BD0D234124F5C1AC14E9E251* __this, Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D ___0_destination, int32_t* ___1_charsWritten, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ValueStringBuilder_ToString_mAB4C26796468880783F57E543C5102DE83C10BCE (ValueStringBuilder_tEBD54C46E3AF8527BD0D234124F5C1AC14E9E251* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 String_op_Implicit_m7D7FE0449303AF92D8B2A85A06ADC6933B2ECC3A_inline (String_t* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* BigNumber_FormatBigInteger_m626A9168DC2BBB348E31E47313E83D88263747AA (bool ___0_targetSpan, BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F ___1_value, String_t* ___2_formatString, ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 ___3_formatSpan, NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* ___4_info, Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D ___5_destination, int32_t* ___6_charsWritten, bool* ___7_spanSuccess, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar BigNumber_ParseFormatSpecifier_m642DCFB18345FAC78777645E487EE8279BA17073 (ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 ___0_format, int32_t* ___1_digits, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* BigNumber_FormatBigIntegerToHex_m5BD805D186861A2FDE1CB6D7C8BF730B78B251BE (bool ___0_targetSpan, BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F ___1_value, Il2CppChar ___2_format, int32_t ___3_digits, NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* ___4_info, Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D ___5_destination, int32_t* ___6_charsWritten, bool* ___7_spanSuccess, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8 (String_t* ___0_format, RuntimeObject* ___1_arg0, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Int32_TryFormat_m09C5DAC7B8CB25D5D7FAEB7043384D0B05679A1A (int32_t* __this, Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D ___0_destination, int32_t* ___1_charsWritten, ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 ___2_format, RuntimeObject* ___3_provider, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_mE871810BC163EE4EF88E7C7682A6AD39911173B8 (int32_t* __this, String_t* ___0_format, RuntimeObject* ___1_provider, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FormatException__ctor_mE31CCFC2A6FA296CA9E9C6813112D7850FE682D4 (FormatException_tCD210E92627903FFEDAAA706C08FB6222B4D012B* __this, String_t* ___0_message, Exception_t* ___1_innerException, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t NumericsHelpers_MakeUlong_mAB879C53817E4E9BE9C649F09EEE0CB11DE53514 (uint32_t ___0_uHi, uint32_t ___1_uLo, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* NumberFormatInfo_get_NegativeSign_m7744D30B65FFC7D00CDD1CCF7E53D3722D350E7C_inline (NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FormatProvider_FormatBigInteger_m1FBB2719E6A285F3F9EE6A4EE4B95AB6C50C0BAB (ValueStringBuilder_tEBD54C46E3AF8527BD0D234124F5C1AC14E9E251* ___0_sb, int32_t ___1_precision, int32_t ___2_scale, bool ___3_sign, ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 ___4_format, NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* ___5_numberFormatInfo, CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___6_digits, int32_t ___7_startIndex, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_CreateString_mB7B3AC2AF28010538650051A9000369B1CD6BAB6 (String_t* __this, CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___0_val, int32_t ___1_startIndex, int32_t ___2_length, const RuntimeMethod* method) ;
inline void ReadOnlySpan_1__ctor_mDADE08E6B4594775C6675B389078E5FE98C745D5_inline (ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1* __this, CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___0_array, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1*, CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*, int32_t, int32_t, const RuntimeMethod*))ReadOnlySpan_1__ctor_mDADE08E6B4594775C6675B389078E5FE98C745D5_gshared_inline)(__this, ___0_array, ___1_start, ___2_length, method);
}
inline bool ReadOnlySpan_1_TryCopyTo_m22E885FE905F1306DDE8000F155109F7F4987666 (ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1* __this, Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D ___0_destination, const RuntimeMethod* method)
{
	return ((  bool (*) (ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1*, Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D, const RuntimeMethod*))ReadOnlySpan_1_TryCopyTo_m22E885FE905F1306DDE8000F155109F7F4987666_gshared)(__this, ___0_destination, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t NumericsHelpers_CombineHash_m16177FC379833624A7C14834FA38ADE527A53CCE (uint32_t ___0_u1, uint32_t ___1_u2, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar Number_ParseFormatSpecifier_mC2A7C10F8899ED9BA94E9D9EFE6FDDCADE68618A (ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 ___0_format, int32_t* ___1_digits, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Number_NumberToString_mB02B6AFBEEF66C19BB094F00189CC8E15A16AD18 (ValueStringBuilder_tEBD54C46E3AF8527BD0D234124F5C1AC14E9E251* ___0_sb, NumberBuffer_t0F9FC9D15F03CFDEBA3B3F4210A2AB3B53305CDA* ___1_number, Il2CppChar ___2_format, int32_t ___3_nMaxDigits, NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* ___4_info, bool ___5_isDecimal, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Number_NumberToStringFormat_mA407C99BE332392E17203E2A9BDC5544DDF89090 (ValueStringBuilder_tEBD54C46E3AF8527BD0D234124F5C1AC14E9E251* ___0_sb, NumberBuffer_t0F9FC9D15F03CFDEBA3B3F4210A2AB3B53305CDA* ___1_number, ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 ___2_format, NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* ___3_info, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t NumberFormatInfo_get_CurrencyDecimalDigits_m5E04D902AB388705BF7FED31630AF7730EFA34BE_inline (NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Number_RoundNumber_m4CF4E60F6BB2595CAF7D220275299620A954CAA0 (NumberBuffer_t0F9FC9D15F03CFDEBA3B3F4210A2AB3B53305CDA* ___0_number, int32_t ___1_pos, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Number_FormatCurrency_m097DB55A0D1FC114CC86AF8F08F56A8AFEDC93DD (ValueStringBuilder_tEBD54C46E3AF8527BD0D234124F5C1AC14E9E251* ___0_sb, NumberBuffer_t0F9FC9D15F03CFDEBA3B3F4210A2AB3B53305CDA* ___1_number, int32_t ___2_nMinDigits, int32_t ___3_nMaxDigits, NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* ___4_info, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t NumberFormatInfo_get_NumberDecimalDigits_m5EB881B449699981560942A65714C5D5CBA897BD_inline (NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ValueStringBuilder_Append_m4F9C03D9B78FD7AE877AAC57178D2F84AD2956CF_inline (ValueStringBuilder_tEBD54C46E3AF8527BD0D234124F5C1AC14E9E251* __this, String_t* ___0_s, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* NumberFormatInfo_get_NumberDecimalSeparator_m7413FA8739F3FA6F5D61B54331DBF3232FC6BFC7_inline (NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Number_FormatFixed_m0AE79A769FD61DE736216A34F723B8D7D793C1BB (ValueStringBuilder_tEBD54C46E3AF8527BD0D234124F5C1AC14E9E251* ___0_sb, NumberBuffer_t0F9FC9D15F03CFDEBA3B3F4210A2AB3B53305CDA* ___1_number, int32_t ___2_nMinDigits, int32_t ___3_nMaxDigits, NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* ___4_info, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___5_groupDigits, String_t* ___6_sDecimal, String_t* ___7_sGroup, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Number_FormatNumber_m24CDBE74E5644DDE85C931202384C04F91951EA6 (ValueStringBuilder_tEBD54C46E3AF8527BD0D234124F5C1AC14E9E251* ___0_sb, NumberBuffer_t0F9FC9D15F03CFDEBA3B3F4210A2AB3B53305CDA* ___1_number, int32_t ___2_nMinDigits, int32_t ___3_nMaxDigits, NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* ___4_info, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Number_FormatScientific_m2F27814915B4A407DE4F3692B2EECE8AD267C358 (ValueStringBuilder_tEBD54C46E3AF8527BD0D234124F5C1AC14E9E251* ___0_sb, NumberBuffer_t0F9FC9D15F03CFDEBA3B3F4210A2AB3B53305CDA* ___1_number, int32_t ___2_nMinDigits, int32_t ___3_nMaxDigits, NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* ___4_info, Il2CppChar ___5_expChar, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Il2CppChar* NumberBuffer_get_digits_mB2D6183F180088A57C57ED5FBA7BDD4CDF4A369A_inline (NumberBuffer_t0F9FC9D15F03CFDEBA3B3F4210A2AB3B53305CDA* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Number_FormatGeneral_m68D4F0A31B064E3FDF311EFF410D774C0D3BAF0A (ValueStringBuilder_tEBD54C46E3AF8527BD0D234124F5C1AC14E9E251* ___0_sb, NumberBuffer_t0F9FC9D15F03CFDEBA3B3F4210A2AB3B53305CDA* ___1_number, int32_t ___2_nMinDigits, int32_t ___3_nMaxDigits, NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* ___4_info, Il2CppChar ___5_expChar, bool ___6_bSuppressScientific, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t NumberFormatInfo_get_PercentDecimalDigits_m49B53E03F294674AA1B20B77C56E10721BA8643D_inline (NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Number_FormatPercent_m765FF9BE8896DA80FDBC469B9EB40732C521B85D (ValueStringBuilder_tEBD54C46E3AF8527BD0D234124F5C1AC14E9E251* ___0_sb, NumberBuffer_t0F9FC9D15F03CFDEBA3B3F4210A2AB3B53305CDA* ___1_number, int32_t ___2_nMinDigits, int32_t ___3_nMaxDigits, NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* ___4_info, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FormatException__ctor_mE04AEA59C0EEFF4BD34B7CE8601F9D331D1D473E (FormatException_tCD210E92627903FFEDAAA706C08FB6222B4D012B* __this, String_t* ___0_message, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t NumberFormatInfo_get_CurrencyPositivePattern_m253954FD1F79EB2F9B12070A348E8E1DB0E75263_inline (NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t NumberFormatInfo_get_CurrencyNegativePattern_m35EAAAC0517F13B43B444B82343F14D9B0A14FC4_inline (NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* NumberFormatInfo_get_CurrencyGroupSizes_mA65056791CE7754317B7502465C488E2126591BA (NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* NumberFormatInfo_get_CurrencyDecimalSeparator_mBAD4DAC07DC995653374C16BFB02E6CF2CA121BD_inline (NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* NumberFormatInfo_get_CurrencyGroupSeparator_mE8F7687A3D4812C75092E30554B4C15C974441BD_inline (NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* NumberFormatInfo_get_CurrencySymbol_m69E8700B6E102ADA1351AD4C6BBC7779D9F13F43_inline (NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Number_wcslen_mCD526D9E32ECC29B992889CBDBC18EFF2F3F7CC4 (Il2CppChar* ___0_s, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentOutOfRangeException__ctor_mB596C51BFA864B65C2CED275458FAE90F7CD29C9 (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueStringBuilder_Append_m58580EDC69E4BCFEFFE0A266FE36684AC660BBD6 (ValueStringBuilder_tEBD54C46E3AF8527BD0D234124F5C1AC14E9E251* __this, Il2CppChar* ___0_value, int32_t ___1_length, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Math_Min_m53C488772A34D53917BCA2A491E79A0A5356ED52 (int32_t ___0_val1, int32_t ___1_val2, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueStringBuilder_Append_m4E46E62A9444CE58033DDB6EC5D9AE7CF02B48B0 (ValueStringBuilder_tEBD54C46E3AF8527BD0D234124F5C1AC14E9E251* __this, Il2CppChar ___0_c, int32_t ___1_count, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t NumberFormatInfo_get_NumberNegativePattern_mB2D78035F14DA736695A2476B33B70A8BE3DB772_inline (NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* NumberFormatInfo_get_NumberGroupSizes_m45DE41B24561ECB99B63B5714CEEC5D101EB15D9 (NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* NumberFormatInfo_get_NumberGroupSeparator_m0556B092AA471513B1EDC31C047712226D39BEB6_inline (NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Number_FormatExponent_m2194D98B7488C2DE4AB59E0AFECDCF4D258412F1 (ValueStringBuilder_tEBD54C46E3AF8527BD0D234124F5C1AC14E9E251* ___0_sb, NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* ___1_info, int32_t ___2_value, Il2CppChar ___3_expChar, int32_t ___4_minDigits, bool ___5_positiveSign, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* NumberFormatInfo_get_PositiveSign_mEB874CC4589FD7B2F57CD3269AE6D9043A0C25EF_inline (NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Number_Int32ToDecChars_mA94E1FFBC0C831A23C6A974FC11018B9E6F9ED4E (Il2CppChar* ___0_buffer, int32_t* ___1_index, uint32_t ___2_value, int32_t ___3_digits, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t NumberFormatInfo_get_PercentPositivePattern_m2720656715E7A19D1CEAD0155412B2EE01FC68FA_inline (NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t NumberFormatInfo_get_PercentNegativePattern_m3EED4EC4B89339AA00581150F4999BCC3400CDAD_inline (NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* NumberFormatInfo_get_PercentGroupSizes_mD5EA131D12B675FE744E357934F39C373C15CD67 (NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* NumberFormatInfo_get_PercentDecimalSeparator_mB656F8F033BB700E4647AF14044C607F34634B80_inline (NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* NumberFormatInfo_get_PercentGroupSeparator_m1321ACEA2239006587D132AF6445E55D733BABF9_inline (NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* NumberFormatInfo_get_PercentSymbol_mB3F25C2B5F71574B7F4A0BEE95A7028E7A48CFC2_inline (NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* __this, const RuntimeMethod* method) ;
inline Il2CppChar* MemoryMarshal_GetReference_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_mE4C181D41EF4A4EC432CD3610B2969041E6F2F7A (ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 ___0_span, const RuntimeMethod* method)
{
	return ((  Il2CppChar* (*) (ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1, const RuntimeMethod*))MemoryMarshal_GetReference_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_mE4C181D41EF4A4EC432CD3610B2969041E6F2F7A_gshared)(___0_span, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Number_FindSection_mC2D1C69F848ACAB296ADB63DD0D87CF39C446849 (ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 ___0_format, int32_t ___1_section, const RuntimeMethod* method) ;
inline void Span_1__ctor_m31EE4A5510B5C504DB26DB281BC7D4179B859F2B_inline (Span_1_t3C5DB525B005B1AC5A1F3BDD528900C5C7C7D316* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method)
{
	((  void (*) (Span_1_t3C5DB525B005B1AC5A1F3BDD528900C5C7C7D316*, void*, int32_t, const RuntimeMethod*))Span_1__ctor_m31EE4A5510B5C504DB26DB281BC7D4179B859F2B_gshared_inline)(__this, ___0_pointer, ___1_length, method);
}
inline int32_t Span_1_get_Length_m87AB3C694F2E4802F14D006F21C020816045285F_inline (Span_1_t3C5DB525B005B1AC5A1F3BDD528900C5C7C7D316* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Span_1_t3C5DB525B005B1AC5A1F3BDD528900C5C7C7D316*, const RuntimeMethod*))Span_1_get_Length_m87AB3C694F2E4802F14D006F21C020816045285F_gshared_inline)(__this, method);
}
inline Span_1_t3C5DB525B005B1AC5A1F3BDD528900C5C7C7D316 Span_1_op_Implicit_m75103E0CA16D9EEB5414F2FA9611149122CF23CC (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___0_array, const RuntimeMethod* method)
{
	return ((  Span_1_t3C5DB525B005B1AC5A1F3BDD528900C5C7C7D316 (*) (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*, const RuntimeMethod*))Span_1_op_Implicit_m75103E0CA16D9EEB5414F2FA9611149122CF23CC_gshared)(___0_array, method);
}
inline void Span_1_CopyTo_m197E47790117E2C925FE1A8E051A19AB9CF4260B (Span_1_t3C5DB525B005B1AC5A1F3BDD528900C5C7C7D316* __this, Span_1_t3C5DB525B005B1AC5A1F3BDD528900C5C7C7D316 ___0_destination, const RuntimeMethod* method)
{
	((  void (*) (Span_1_t3C5DB525B005B1AC5A1F3BDD528900C5C7C7D316*, Span_1_t3C5DB525B005B1AC5A1F3BDD528900C5C7C7D316, const RuntimeMethod*))Span_1_CopyTo_m197E47790117E2C925FE1A8E051A19AB9CF4260B_gshared)(__this, ___0_destination, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* NumberFormatInfo_get_PerMilleSymbol_mBE43A9E5D7F05030C0258FB452BD94FD6E411533_inline (NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* __this, const RuntimeMethod* method) ;
inline Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D Span_1_Slice_mEFBC3C78FD443FFE23F9E841D43B7B0271622843_inline (Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D* __this, int32_t ___0_start, int32_t ___1_length, const RuntimeMethod* method)
{
	return ((  Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D (*) (Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D*, int32_t, int32_t, const RuntimeMethod*))Span_1_Slice_mEFBC3C78FD443FFE23F9E841D43B7B0271622843_gshared_inline)(__this, ___0_start, ___1_length, method);
}
inline ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 Span_1_op_Implicit_m03D0CEDC1BC95844236105D1DE24A702B956BFE4 (Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D ___0_span, const RuntimeMethod* method)
{
	return ((  ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 (*) (Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D, const RuntimeMethod*))Span_1_op_Implicit_m03D0CEDC1BC95844236105D1DE24A702B956BFE4_gshared)(___0_span, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_CreateString_m1618CF9F1145C9832FC830A4BD6DD96A540012F8 (String_t* __this, ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ValueStringBuilder_Dispose_m3BC81A03C95916FF7171ADB0CF6F16E2366A1392_inline (ValueStringBuilder_tEBD54C46E3AF8527BD0D234124F5C1AC14E9E251* __this, const RuntimeMethod* method) ;
inline bool Span_1_TryCopyTo_m25ED56B31CC4F4DBC734E898741037AADC8806F8 (Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D* __this, Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D ___0_destination, const RuntimeMethod* method)
{
	return ((  bool (*) (Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D*, Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D, const RuntimeMethod*))Span_1_TryCopyTo_m25ED56B31CC4F4DBC734E898741037AADC8806F8_gshared)(__this, ___0_destination, method);
}
inline int32_t Span_1_get_Length_mB79622153F80AD55A805C005842AF045F4FCF992_inline (Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D*, const RuntimeMethod*))Span_1_get_Length_mB79622153F80AD55A805C005842AF045F4FCF992_gshared_inline)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void ValueStringBuilder_Grow_m8107401166703C9CB129685FA6F78F26615FC6A9 (ValueStringBuilder_tEBD54C46E3AF8527BD0D234124F5C1AC14E9E251* __this, int32_t ___0_requiredAdditionalCapacity, const RuntimeMethod* method) ;
inline Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D Span_1_Slice_mDC9AA64B960B9BB8357655827A8202DF83443068_inline (Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D* __this, int32_t ___0_start, const RuntimeMethod* method)
{
	return ((  Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D (*) (Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D*, int32_t, const RuntimeMethod*))Span_1_Slice_mDC9AA64B960B9BB8357655827A8202DF83443068_gshared_inline)(__this, ___0_start, method);
}
inline void Span_1_CopyTo_m7BB0A9984004C444974C7F111CCAD6D85325A15E (Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D* __this, Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D ___0_destination, const RuntimeMethod* method)
{
	((  void (*) (Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D*, Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D, const RuntimeMethod*))Span_1_CopyTo_m7BB0A9984004C444974C7F111CCAD6D85325A15E_gshared)(__this, ___0_destination, method);
}
inline void Span_1_Fill_m13ADB57BBCF7684FF92630FACC729B10B9B6B254 (Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D* __this, Il2CppChar ___0_value, const RuntimeMethod* method)
{
	((  void (*) (Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D*, Il2CppChar, const RuntimeMethod*))Span_1_Fill_m13ADB57BBCF7684FF92630FACC729B10B9B6B254_gshared)(__this, ___0_value, method);
}
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void ValueStringBuilder_GrowAndAppend_mDB5F96AAA8A9CAD064B96D8A182D84C76BF24F46 (ValueStringBuilder_tEBD54C46E3AF8527BD0D234124F5C1AC14E9E251* __this, Il2CppChar ___0_c, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueStringBuilder_AppendSlow_mF1E32E44AE0CD50A28EE3E945C8CCE40FB184526 (ValueStringBuilder_tEBD54C46E3AF8527BD0D234124F5C1AC14E9E251* __this, String_t* ___0_s, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 MemoryExtensions_AsSpan_m0EB07912D71097A8B05F586158966837F5C3DB38_inline (String_t* ___0_text, const RuntimeMethod* method) ;
inline void ReadOnlySpan_1_CopyTo_m42F1668DECE40277D97A37705EA6BE27CF7D5030 (ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1* __this, Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D ___0_destination, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1*, Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D, const RuntimeMethod*))ReadOnlySpan_1_CopyTo_m42F1668DECE40277D97A37705EA6BE27CF7D5030_gshared)(__this, ___0_destination, method);
}
inline ArrayPool_1_t3CE8332C9DFE03FF160AB0CE0FF17DF7792E0E4B* ArrayPool_1_get_Shared_m8EB88B4EDF81135B55DB0F33A749B8087FE4646F_inline (const RuntimeMethod* method)
{
	return ((  ArrayPool_1_t3CE8332C9DFE03FF160AB0CE0FF17DF7792E0E4B* (*) (const RuntimeMethod*))ArrayPool_1_get_Shared_m8EB88B4EDF81135B55DB0F33A749B8087FE4646F_gshared_inline)(method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Math_Max_m530EBA549AFD98CFC2BD29FE86C6376E67DF11CF (int32_t ___0_val1, int32_t ___1_val2, const RuntimeMethod* method) ;
inline Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D Span_1_op_Implicit_mA0E9FDCF2C5113BA9F9C4964D17D8BDFBD6F3C98 (CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___0_array, const RuntimeMethod* method)
{
	return ((  Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D (*) (CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*, const RuntimeMethod*))Span_1_op_Implicit_mA0E9FDCF2C5113BA9F9C4964D17D8BDFBD6F3C98_gshared)(___0_array, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar* String_GetRawStringData_m87BC50B7B314C055E27A28032D1003D42FDE411D (String_t* __this, const RuntimeMethod* method) ;
inline void ReadOnlySpan_1__ctor_m0152E50B40750679B83FF9F30CA539FFBB98EEE8_inline (ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1* __this, Il2CppChar* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1*, Il2CppChar*, int32_t, const RuntimeMethod*))ReadOnlySpan_1__ctor_m0152E50B40750679B83FF9F30CA539FFBB98EEE8_gshared_inline)(__this, ___0_ptr, ___1_length, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint8_t* Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline (RuntimeArray* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56 (const RuntimeMethod* method) ;
inline void ReadOnlySpan_1__ctor_m0FC0B92549C2968E80B5F75A85F28B96DBFCFD63_inline (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D* __this, uint8_t* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D*, uint8_t*, int32_t, const RuntimeMethod*))ReadOnlySpan_1__ctor_m0FC0B92549C2968E80B5F75A85F28B96DBFCFD63_gshared_inline)(__this, ___0_ptr, ___1_length, method);
}
inline void Span_1__ctor_m947BF95D54571BF3897F96822B7A8FDA5853497B_inline (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305* __this, uint8_t* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method)
{
	((  void (*) (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305*, uint8_t*, int32_t, const RuntimeMethod*))Span_1__ctor_m947BF95D54571BF3897F96822B7A8FDA5853497B_gshared_inline)(__this, ___0_ptr, ___1_length, method);
}
inline void Span_1__ctor_mC9BE2938B716B46BB6B9070B94DBE5CE814BC0E2_inline (Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D* __this, Il2CppChar* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method)
{
	((  void (*) (Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D*, Il2CppChar*, int32_t, const RuntimeMethod*))Span_1__ctor_mC9BE2938B716B46BB6B9070B94DBE5CE814BC0E2_gshared_inline)(__this, ___0_ptr, ___1_length, method);
}
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
IL2CPP_EXTERN_C void BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F_marshal_pinvoke(const BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F& unmarshaled, BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F_marshaled_pinvoke& marshaled)
{
	marshaled.____sign_0 = unmarshaled.____sign_0;
	marshaled.____bits_1 = il2cpp_codegen_com_marshal_safe_array(IL2CPP_VT_UI4, unmarshaled.____bits_1);
}
IL2CPP_EXTERN_C void BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F_marshal_pinvoke_back(const BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F_marshaled_pinvoke& marshaled, BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t unmarshaled_sign_temp_0 = 0;
	unmarshaled_sign_temp_0 = marshaled.____sign_0;
	unmarshaled.____sign_0 = unmarshaled_sign_temp_0;
	unmarshaled.____bits_1 = (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)il2cpp_codegen_com_marshal_safe_array_result(IL2CPP_VT_UI4, UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_il2cpp_TypeInfo_var, marshaled.____bits_1);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.____bits_1), (void*)(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)il2cpp_codegen_com_marshal_safe_array_result(IL2CPP_VT_UI4, UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_il2cpp_TypeInfo_var, marshaled.____bits_1));
}
IL2CPP_EXTERN_C void BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F_marshal_pinvoke_cleanup(BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F_marshaled_pinvoke& marshaled)
{
	il2cpp_codegen_com_destroy_safe_array(marshaled.____bits_1);
	marshaled.____bits_1 = NULL;
}
IL2CPP_EXTERN_C void BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F_marshal_com(const BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F& unmarshaled, BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F_marshaled_com& marshaled)
{
	marshaled.____sign_0 = unmarshaled.____sign_0;
	marshaled.____bits_1 = il2cpp_codegen_com_marshal_safe_array(IL2CPP_VT_UI4, unmarshaled.____bits_1);
}
IL2CPP_EXTERN_C void BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F_marshal_com_back(const BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F_marshaled_com& marshaled, BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t unmarshaled_sign_temp_0 = 0;
	unmarshaled_sign_temp_0 = marshaled.____sign_0;
	unmarshaled.____sign_0 = unmarshaled_sign_temp_0;
	unmarshaled.____bits_1 = (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)il2cpp_codegen_com_marshal_safe_array_result(IL2CPP_VT_UI4, UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_il2cpp_TypeInfo_var, marshaled.____bits_1);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.____bits_1), (void*)(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)il2cpp_codegen_com_marshal_safe_array_result(IL2CPP_VT_UI4, UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_il2cpp_TypeInfo_var, marshaled.____bits_1));
}
IL2CPP_EXTERN_C void BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F_marshal_com_cleanup(BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F_marshaled_com& marshaled)
{
	il2cpp_codegen_com_destroy_safe_array(marshaled.____bits_1);
	marshaled.____bits_1 = NULL;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BigInteger__ctor_mFEDEDA4A6AFC2BA534FEEF4EB3431B9C5AC3F9D9 (BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___0_value;
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)-2147483648LL)))))
		{
			goto IL_0014;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F_il2cpp_TypeInfo_var);
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_1 = ((BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F_StaticFields*)il2cpp_codegen_static_fields_for(BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F_il2cpp_TypeInfo_var))->___s_bnMinInt_2;
		*(BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F*)__this = L_1;
		Il2CppCodeGenWriteBarrier((void**)&(((BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F*)__this)->____bits_1), (void*)NULL);
		return;
	}

IL_0014:
	{
		int32_t L_2 = ___0_value;
		__this->____sign_0 = L_2;
		__this->____bits_1 = (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____bits_1), (void*)(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void BigInteger__ctor_mFEDEDA4A6AFC2BA534FEEF4EB3431B9C5AC3F9D9_AdjustorThunk (RuntimeObject* __this, int32_t ___0_value, const RuntimeMethod* method)
{
	BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F*>(__this + _offset);
	BigInteger__ctor_mFEDEDA4A6AFC2BA534FEEF4EB3431B9C5AC3F9D9(_thisAdjusted, ___0_value, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BigInteger__ctor_mA87DC2182BB2F6AA0209BD98E81C30BCE5B8BBAA (BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F* __this, int64_t ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	uint64_t V_0 = 0;
	{
		int64_t L_0 = ___0_value;
		if ((((int64_t)((int64_t)((int32_t)-2147483648LL))) >= ((int64_t)L_0)))
		{
			goto IL_0022;
		}
	}
	{
		int64_t L_1 = ___0_value;
		if ((((int64_t)L_1) > ((int64_t)((int64_t)((int32_t)2147483647LL)))))
		{
			goto IL_0022;
		}
	}
	{
		int64_t L_2 = ___0_value;
		__this->____sign_0 = ((int32_t)L_2);
		__this->____bits_1 = (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____bits_1), (void*)(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)NULL);
		return;
	}

IL_0022:
	{
		int64_t L_3 = ___0_value;
		if ((!(((uint64_t)L_3) == ((uint64_t)((int64_t)((int32_t)-2147483648LL))))))
		{
			goto IL_0037;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F_il2cpp_TypeInfo_var);
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_4 = ((BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F_StaticFields*)il2cpp_codegen_static_fields_for(BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F_il2cpp_TypeInfo_var))->___s_bnMinInt_2;
		*(BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F*)__this = L_4;
		Il2CppCodeGenWriteBarrier((void**)&(((BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F*)__this)->____bits_1), (void*)NULL);
		return;
	}

IL_0037:
	{
		V_0 = ((int64_t)0);
		int64_t L_5 = ___0_value;
		if ((((int64_t)L_5) >= ((int64_t)((int64_t)0))))
		{
			goto IL_004b;
		}
	}
	{
		int64_t L_6 = ___0_value;
		V_0 = ((-L_6));
		__this->____sign_0 = (-1);
		goto IL_0054;
	}

IL_004b:
	{
		int64_t L_7 = ___0_value;
		V_0 = L_7;
		__this->____sign_0 = 1;
	}

IL_0054:
	{
		uint64_t L_8 = V_0;
		if ((!(((uint64_t)L_8) <= ((uint64_t)((int64_t)(uint64_t)((uint32_t)(-1)))))))
		{
			goto IL_0070;
		}
	}
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_9 = (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)SZArrayNew(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var, (uint32_t)1);
		__this->____bits_1 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____bits_1), (void*)L_9);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_10 = __this->____bits_1;
		uint64_t L_11 = V_0;
		NullCheck(L_10);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint32_t)((int32_t)(uint32_t)L_11));
		return;
	}

IL_0070:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_12 = (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)SZArrayNew(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var, (uint32_t)2);
		__this->____bits_1 = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____bits_1), (void*)L_12);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_13 = __this->____bits_1;
		uint64_t L_14 = V_0;
		NullCheck(L_13);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint32_t)((int32_t)(uint32_t)L_14));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_15 = __this->____bits_1;
		uint64_t L_16 = V_0;
		NullCheck(L_15);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(1), (uint32_t)((int32_t)(uint32_t)((int64_t)((uint64_t)L_16>>((int32_t)32)))));
		return;
	}
}
IL2CPP_EXTERN_C  void BigInteger__ctor_mA87DC2182BB2F6AA0209BD98E81C30BCE5B8BBAA_AdjustorThunk (RuntimeObject* __this, int64_t ___0_value, const RuntimeMethod* method)
{
	BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F*>(__this + _offset);
	BigInteger__ctor_mA87DC2182BB2F6AA0209BD98E81C30BCE5B8BBAA(_thisAdjusted, ___0_value, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BigInteger__ctor_m25FA3F3C832BC621CD91ABFAC3535A2F4EE7B371 (BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1__ctor_m1D3E8C5A560BE65D9A5C3E5D0D891C79F4895B0B_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* G_B2_0 = NULL;
	BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F* G_B2_1 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* G_B1_0 = NULL;
	BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F* G_B1_1 = NULL;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___0_value;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = L_0;
		if (L_1)
		{
			G_B2_0 = L_1;
			G_B2_1 = __this;
			goto IL_0011;
		}
		G_B1_0 = L_1;
		G_B1_1 = __this;
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_2 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral46F273EF641E07D271D91E0DC24A4392582671F8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&BigInteger__ctor_m25FA3F3C832BC621CD91ABFAC3535A2F4EE7B371_RuntimeMethod_var)));
	}

IL_0011:
	{
		ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D L_3;
		memset((&L_3), 0, sizeof(L_3));
		ReadOnlySpan_1__ctor_m1D3E8C5A560BE65D9A5C3E5D0D891C79F4895B0B_inline((&L_3), G_B2_0, ReadOnlySpan_1__ctor_m1D3E8C5A560BE65D9A5C3E5D0D891C79F4895B0B_RuntimeMethod_var);
		BigInteger__ctor_mF6B2AC2AD4056AB6903913C56A92F565EB08BAFD(G_B2_1, L_3, (bool)0, (bool)0, NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void BigInteger__ctor_m25FA3F3C832BC621CD91ABFAC3535A2F4EE7B371_AdjustorThunk (RuntimeObject* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_value, const RuntimeMethod* method)
{
	BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F*>(__this + _offset);
	BigInteger__ctor_m25FA3F3C832BC621CD91ABFAC3535A2F4EE7B371(_thisAdjusted, ___0_value, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BigInteger__ctor_mF6B2AC2AD4056AB6903913C56A92F565EB08BAFD (BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F* __this, ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D ___0_value, bool ___1_isUnsigned, bool ___2_isBigEndian, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1_Slice_mC8B7C665F49384744642F03EA355239F0E4AF966_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1_get_Length_m54864A0BB817050A9110E85BB5FB31EF63699982_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* V_7 = NULL;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	int32_t V_10 = 0;
	int32_t V_11 = 0;
	uint8_t V_12 = 0x0;
	int32_t V_13 = 0;
	uint8_t V_14 = 0x0;
	uint8_t V_15 = 0x0;
	uint8_t V_16 = 0x0;
	int32_t V_17 = 0;
	uint32_t V_18 = 0;
	int32_t G_B4_0 = 0;
	int32_t G_B6_0 = 0;
	int32_t G_B5_0 = 0;
	int32_t G_B7_0 = 0;
	int32_t G_B7_1 = 0;
	BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F* G_B25_0 = NULL;
	BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F* G_B24_0 = NULL;
	int32_t G_B26_0 = 0;
	BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F* G_B26_1 = NULL;
	int32_t G_B41_0 = 0;
	int32_t G_B40_0 = 0;
	int32_t G_B42_0 = 0;
	int32_t G_B42_1 = 0;
	int32_t G_B50_0 = 0;
	int32_t G_B50_1 = 0;
	int32_t G_B49_0 = 0;
	int32_t G_B49_1 = 0;
	int32_t G_B51_0 = 0;
	int32_t G_B51_1 = 0;
	int32_t G_B51_2 = 0;
	int32_t G_B60_0 = 0;
	int32_t G_B60_1 = 0;
	int32_t G_B59_0 = 0;
	int32_t G_B59_1 = 0;
	int32_t G_B61_0 = 0;
	int32_t G_B61_1 = 0;
	int32_t G_B61_2 = 0;
	{
		int32_t L_0;
		L_0 = ReadOnlySpan_1_get_Length_m54864A0BB817050A9110E85BB5FB31EF63699982_inline((&___0_value), ReadOnlySpan_1_get_Length_m54864A0BB817050A9110E85BB5FB31EF63699982_RuntimeMethod_var);
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_0085;
		}
	}
	{
		bool L_2 = ___2_isBigEndian;
		if (L_2)
		{
			goto IL_001c;
		}
	}
	{
		int32_t L_3 = V_0;
		uint8_t* L_4;
		L_4 = il2cpp_span_get_item((uint8_t*)((Il2CppByReference*)&(((&___0_value))->____pointer_0))->value, (((int32_t)il2cpp_codegen_subtract(L_3, 1))), ((&___0_value))->____length_1);
		int32_t L_5 = *((uint8_t*)L_4);
		G_B4_0 = L_5;
		goto IL_0025;
	}

IL_001c:
	{
		uint8_t* L_6;
		L_6 = il2cpp_span_get_item((uint8_t*)((Il2CppByReference*)&(((&___0_value))->____pointer_0))->value, (0), ((&___0_value))->____length_1);
		int32_t L_7 = *((uint8_t*)L_6);
		G_B4_0 = L_7;
	}

IL_0025:
	{
		int32_t L_8 = G_B4_0;
		if (!((int32_t)(L_8&((int32_t)128))))
		{
			G_B6_0 = L_8;
			goto IL_0034;
		}
		G_B5_0 = L_8;
	}
	{
		bool L_9 = ___1_isUnsigned;
		G_B7_0 = ((((int32_t)L_9) == ((int32_t)0))? 1 : 0);
		G_B7_1 = G_B5_0;
		goto IL_0035;
	}

IL_0034:
	{
		G_B7_0 = 0;
		G_B7_1 = G_B6_0;
	}

IL_0035:
	{
		V_1 = (bool)G_B7_0;
		if (G_B7_1)
		{
			goto IL_0087;
		}
	}
	{
		bool L_10 = ___2_isBigEndian;
		if (!L_10)
		{
			goto IL_0066;
		}
	}
	{
		V_2 = 1;
		goto IL_0043;
	}

IL_003f:
	{
		int32_t L_11 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_0043:
	{
		int32_t L_12 = V_2;
		int32_t L_13 = V_0;
		if ((((int32_t)L_12) >= ((int32_t)L_13)))
		{
			goto IL_0052;
		}
	}
	{
		int32_t L_14 = V_2;
		uint8_t* L_15;
		L_15 = il2cpp_span_get_item((uint8_t*)((Il2CppByReference*)&(((&___0_value))->____pointer_0))->value, (L_14), ((&___0_value))->____length_1);
		int32_t L_16 = *((uint8_t*)L_15);
		if (!L_16)
		{
			goto IL_003f;
		}
	}

IL_0052:
	{
		int32_t L_17 = V_2;
		ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D L_18;
		L_18 = ReadOnlySpan_1_Slice_mC8B7C665F49384744642F03EA355239F0E4AF966_inline((&___0_value), L_17, ReadOnlySpan_1_Slice_mC8B7C665F49384744642F03EA355239F0E4AF966_RuntimeMethod_var);
		___0_value = L_18;
		int32_t L_19;
		L_19 = ReadOnlySpan_1_get_Length_m54864A0BB817050A9110E85BB5FB31EF63699982_inline((&___0_value), ReadOnlySpan_1_get_Length_m54864A0BB817050A9110E85BB5FB31EF63699982_RuntimeMethod_var);
		V_0 = L_19;
		goto IL_0087;
	}

IL_0066:
	{
		int32_t L_20 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_20, 2));
		goto IL_0070;
	}

IL_006c:
	{
		int32_t L_21 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_21, 1));
	}

IL_0070:
	{
		int32_t L_22 = V_0;
		if ((((int32_t)L_22) < ((int32_t)0)))
		{
			goto IL_007f;
		}
	}
	{
		int32_t L_23 = V_0;
		uint8_t* L_24;
		L_24 = il2cpp_span_get_item((uint8_t*)((Il2CppByReference*)&(((&___0_value))->____pointer_0))->value, (L_23), ((&___0_value))->____length_1);
		int32_t L_25 = *((uint8_t*)L_24);
		if (!L_25)
		{
			goto IL_006c;
		}
	}

IL_007f:
	{
		int32_t L_26 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_26, 1));
		goto IL_0087;
	}

IL_0085:
	{
		V_1 = (bool)0;
	}

IL_0087:
	{
		int32_t L_27 = V_0;
		if (L_27)
		{
			goto IL_0099;
		}
	}
	{
		__this->____sign_0 = 0;
		__this->____bits_1 = (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____bits_1), (void*)(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)NULL);
		return;
	}

IL_0099:
	{
		int32_t L_28 = V_0;
		if ((((int32_t)L_28) > ((int32_t)4)))
		{
			goto IL_014c;
		}
	}
	{
		bool L_29 = V_1;
		if (L_29)
		{
			G_B25_0 = __this;
			goto IL_00a7;
		}
		G_B24_0 = __this;
	}
	{
		G_B26_0 = 0;
		G_B26_1 = G_B24_0;
		goto IL_00a8;
	}

IL_00a7:
	{
		G_B26_0 = (-1);
		G_B26_1 = G_B25_0;
	}

IL_00a8:
	{
		G_B26_1->____sign_0 = G_B26_0;
		bool L_30 = ___2_isBigEndian;
		if (!L_30)
		{
			goto IL_00d6;
		}
	}
	{
		V_3 = 0;
		goto IL_00d0;
	}

IL_00b4:
	{
		int32_t L_31 = __this->____sign_0;
		int32_t L_32 = V_3;
		uint8_t* L_33;
		L_33 = il2cpp_span_get_item((uint8_t*)((Il2CppByReference*)&(((&___0_value))->____pointer_0))->value, (L_32), ((&___0_value))->____length_1);
		int32_t L_34 = *((uint8_t*)L_33);
		__this->____sign_0 = ((int32_t)(((int32_t)(L_31<<8))|L_34));
		int32_t L_35 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_35, 1));
	}

IL_00d0:
	{
		int32_t L_36 = V_3;
		int32_t L_37 = V_0;
		if ((((int32_t)L_36) < ((int32_t)L_37)))
		{
			goto IL_00b4;
		}
	}
	{
		goto IL_0101;
	}

IL_00d6:
	{
		int32_t L_38 = V_0;
		V_4 = ((int32_t)il2cpp_codegen_subtract(L_38, 1));
		goto IL_00fc;
	}

IL_00dd:
	{
		int32_t L_39 = __this->____sign_0;
		int32_t L_40 = V_4;
		uint8_t* L_41;
		L_41 = il2cpp_span_get_item((uint8_t*)((Il2CppByReference*)&(((&___0_value))->____pointer_0))->value, (L_40), ((&___0_value))->____length_1);
		int32_t L_42 = *((uint8_t*)L_41);
		__this->____sign_0 = ((int32_t)(((int32_t)(L_39<<8))|L_42));
		int32_t L_43 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_subtract(L_43, 1));
	}

IL_00fc:
	{
		int32_t L_44 = V_4;
		if ((((int32_t)L_44) >= ((int32_t)0)))
		{
			goto IL_00dd;
		}
	}

IL_0101:
	{
		__this->____bits_1 = (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____bits_1), (void*)(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)NULL);
		int32_t L_45 = __this->____sign_0;
		if ((((int32_t)L_45) >= ((int32_t)0)))
		{
			goto IL_0130;
		}
	}
	{
		bool L_46 = V_1;
		if (L_46)
		{
			goto IL_0130;
		}
	}
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_47 = (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)SZArrayNew(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var, (uint32_t)1);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_48 = L_47;
		int32_t L_49 = __this->____sign_0;
		NullCheck(L_48);
		(L_48)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint32_t)L_49);
		__this->____bits_1 = L_48;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____bits_1), (void*)L_48);
		__this->____sign_0 = 1;
	}

IL_0130:
	{
		int32_t L_50 = __this->____sign_0;
		if ((!(((uint32_t)L_50) == ((uint32_t)((int32_t)-2147483648LL)))))
		{
			goto IL_0355;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F_il2cpp_TypeInfo_var);
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_51 = ((BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F_StaticFields*)il2cpp_codegen_static_fields_for(BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F_il2cpp_TypeInfo_var))->___s_bnMinInt_2;
		*(BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F*)__this = L_51;
		Il2CppCodeGenWriteBarrier((void**)&(((BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F*)__this)->____bits_1), (void*)NULL);
		return;
	}

IL_014c:
	{
		int32_t L_52 = V_0;
		V_5 = ((int32_t)(L_52%4));
		int32_t L_53 = V_0;
		int32_t L_54 = V_5;
		if (!L_54)
		{
			G_B41_0 = ((int32_t)(L_53/4));
			goto IL_015b;
		}
		G_B40_0 = ((int32_t)(L_53/4));
	}
	{
		G_B42_0 = 1;
		G_B42_1 = G_B40_0;
		goto IL_015c;
	}

IL_015b:
	{
		G_B42_0 = 0;
		G_B42_1 = G_B41_0;
	}

IL_015c:
	{
		V_6 = ((int32_t)il2cpp_codegen_add(G_B42_1, G_B42_0));
		int32_t L_55 = V_6;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_56 = (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)SZArrayNew(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var, (uint32_t)L_55);
		V_7 = L_56;
		int32_t L_57 = V_0;
		V_8 = ((int32_t)il2cpp_codegen_subtract(L_57, 1));
		bool L_58 = ___2_isBigEndian;
		if (!L_58)
		{
			goto IL_01c8;
		}
	}
	{
		int32_t L_59 = V_0;
		V_10 = ((int32_t)il2cpp_codegen_subtract(L_59, 4));
		V_9 = 0;
		goto IL_01b7;
	}

IL_017a:
	{
		V_11 = 0;
		goto IL_01a6;
	}

IL_017f:
	{
		int32_t L_60 = V_10;
		uint8_t* L_61;
		L_61 = il2cpp_span_get_item((uint8_t*)((Il2CppByReference*)&(((&___0_value))->____pointer_0))->value, (L_60), ((&___0_value))->____length_1);
		int32_t L_62 = *((uint8_t*)L_61);
		V_12 = (uint8_t)L_62;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_63 = V_7;
		int32_t L_64 = V_9;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_65 = V_7;
		int32_t L_66 = V_9;
		NullCheck(L_65);
		int32_t L_67 = L_66;
		uint32_t L_68 = (L_65)->GetAt(static_cast<il2cpp_array_size_t>(L_67));
		uint8_t L_69 = V_12;
		NullCheck(L_63);
		(L_63)->SetAt(static_cast<il2cpp_array_size_t>(L_64), (uint32_t)((int32_t)(((int32_t)((int32_t)L_68<<8))|(int32_t)L_69)));
		int32_t L_70 = V_10;
		V_10 = ((int32_t)il2cpp_codegen_add(L_70, 1));
		int32_t L_71 = V_11;
		V_11 = ((int32_t)il2cpp_codegen_add(L_71, 1));
	}

IL_01a6:
	{
		int32_t L_72 = V_11;
		if ((((int32_t)L_72) < ((int32_t)4)))
		{
			goto IL_017f;
		}
	}
	{
		int32_t L_73 = V_10;
		V_10 = ((int32_t)il2cpp_codegen_subtract(L_73, 8));
		int32_t L_74 = V_9;
		V_9 = ((int32_t)il2cpp_codegen_add(L_74, 1));
	}

IL_01b7:
	{
		int32_t L_75 = V_9;
		int32_t L_76 = V_6;
		int32_t L_77 = V_5;
		if (!L_77)
		{
			G_B50_0 = L_76;
			G_B50_1 = L_75;
			goto IL_01c2;
		}
		G_B49_0 = L_76;
		G_B49_1 = L_75;
	}
	{
		G_B51_0 = 1;
		G_B51_1 = G_B49_0;
		G_B51_2 = G_B49_1;
		goto IL_01c3;
	}

IL_01c2:
	{
		G_B51_0 = 0;
		G_B51_1 = G_B50_0;
		G_B51_2 = G_B50_1;
	}

IL_01c3:
	{
		if ((((int32_t)G_B51_2) < ((int32_t)((int32_t)il2cpp_codegen_subtract(G_B51_1, G_B51_0)))))
		{
			goto IL_017a;
		}
	}
	{
		goto IL_021c;
	}

IL_01c8:
	{
		V_10 = 3;
		V_9 = 0;
		goto IL_020d;
	}

IL_01d0:
	{
		V_13 = 0;
		goto IL_01fc;
	}

IL_01d5:
	{
		int32_t L_78 = V_10;
		uint8_t* L_79;
		L_79 = il2cpp_span_get_item((uint8_t*)((Il2CppByReference*)&(((&___0_value))->____pointer_0))->value, (L_78), ((&___0_value))->____length_1);
		int32_t L_80 = *((uint8_t*)L_79);
		V_14 = (uint8_t)L_80;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_81 = V_7;
		int32_t L_82 = V_9;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_83 = V_7;
		int32_t L_84 = V_9;
		NullCheck(L_83);
		int32_t L_85 = L_84;
		uint32_t L_86 = (L_83)->GetAt(static_cast<il2cpp_array_size_t>(L_85));
		uint8_t L_87 = V_14;
		NullCheck(L_81);
		(L_81)->SetAt(static_cast<il2cpp_array_size_t>(L_82), (uint32_t)((int32_t)(((int32_t)((int32_t)L_86<<8))|(int32_t)L_87)));
		int32_t L_88 = V_10;
		V_10 = ((int32_t)il2cpp_codegen_subtract(L_88, 1));
		int32_t L_89 = V_13;
		V_13 = ((int32_t)il2cpp_codegen_add(L_89, 1));
	}

IL_01fc:
	{
		int32_t L_90 = V_13;
		if ((((int32_t)L_90) < ((int32_t)4)))
		{
			goto IL_01d5;
		}
	}
	{
		int32_t L_91 = V_10;
		V_10 = ((int32_t)il2cpp_codegen_add(L_91, 8));
		int32_t L_92 = V_9;
		V_9 = ((int32_t)il2cpp_codegen_add(L_92, 1));
	}

IL_020d:
	{
		int32_t L_93 = V_9;
		int32_t L_94 = V_6;
		int32_t L_95 = V_5;
		if (!L_95)
		{
			G_B60_0 = L_94;
			G_B60_1 = L_93;
			goto IL_0218;
		}
		G_B59_0 = L_94;
		G_B59_1 = L_93;
	}
	{
		G_B61_0 = 1;
		G_B61_1 = G_B59_0;
		G_B61_2 = G_B59_1;
		goto IL_0219;
	}

IL_0218:
	{
		G_B61_0 = 0;
		G_B61_1 = G_B60_0;
		G_B61_2 = G_B60_1;
	}

IL_0219:
	{
		if ((((int32_t)G_B61_2) < ((int32_t)((int32_t)il2cpp_codegen_subtract(G_B61_1, G_B61_0)))))
		{
			goto IL_01d0;
		}
	}

IL_021c:
	{
		int32_t L_96 = V_5;
		if (!L_96)
		{
			goto IL_028b;
		}
	}
	{
		bool L_97 = V_1;
		if (!L_97)
		{
			goto IL_022b;
		}
	}
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_98 = V_7;
		int32_t L_99 = V_6;
		NullCheck(L_98);
		(L_98)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_subtract(L_99, 1))), (uint32_t)(-1));
	}

IL_022b:
	{
		bool L_100 = ___2_isBigEndian;
		if (!L_100)
		{
			goto IL_025c;
		}
	}
	{
		V_10 = 0;
		goto IL_0254;
	}

IL_0233:
	{
		int32_t L_101 = V_10;
		uint8_t* L_102;
		L_102 = il2cpp_span_get_item((uint8_t*)((Il2CppByReference*)&(((&___0_value))->____pointer_0))->value, (L_101), ((&___0_value))->____length_1);
		int32_t L_103 = *((uint8_t*)L_102);
		V_15 = (uint8_t)L_103;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_104 = V_7;
		int32_t L_105 = V_9;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_106 = V_7;
		int32_t L_107 = V_9;
		NullCheck(L_106);
		int32_t L_108 = L_107;
		uint32_t L_109 = (L_106)->GetAt(static_cast<il2cpp_array_size_t>(L_108));
		uint8_t L_110 = V_15;
		NullCheck(L_104);
		(L_104)->SetAt(static_cast<il2cpp_array_size_t>(L_105), (uint32_t)((int32_t)(((int32_t)((int32_t)L_109<<8))|(int32_t)L_110)));
		int32_t L_111 = V_10;
		V_10 = ((int32_t)il2cpp_codegen_add(L_111, 1));
	}

IL_0254:
	{
		int32_t L_112 = V_10;
		int32_t L_113 = V_5;
		if ((((int32_t)L_112) < ((int32_t)L_113)))
		{
			goto IL_0233;
		}
	}
	{
		goto IL_028b;
	}

IL_025c:
	{
		int32_t L_114 = V_8;
		V_10 = L_114;
		goto IL_0283;
	}

IL_0262:
	{
		int32_t L_115 = V_10;
		uint8_t* L_116;
		L_116 = il2cpp_span_get_item((uint8_t*)((Il2CppByReference*)&(((&___0_value))->____pointer_0))->value, (L_115), ((&___0_value))->____length_1);
		int32_t L_117 = *((uint8_t*)L_116);
		V_16 = (uint8_t)L_117;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_118 = V_7;
		int32_t L_119 = V_9;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_120 = V_7;
		int32_t L_121 = V_9;
		NullCheck(L_120);
		int32_t L_122 = L_121;
		uint32_t L_123 = (L_120)->GetAt(static_cast<il2cpp_array_size_t>(L_122));
		uint8_t L_124 = V_16;
		NullCheck(L_118);
		(L_118)->SetAt(static_cast<il2cpp_array_size_t>(L_119), (uint32_t)((int32_t)(((int32_t)((int32_t)L_123<<8))|(int32_t)L_124)));
		int32_t L_125 = V_10;
		V_10 = ((int32_t)il2cpp_codegen_subtract(L_125, 1));
	}

IL_0283:
	{
		int32_t L_126 = V_10;
		int32_t L_127 = V_0;
		int32_t L_128 = V_5;
		if ((((int32_t)L_126) >= ((int32_t)((int32_t)il2cpp_codegen_subtract(L_127, L_128)))))
		{
			goto IL_0262;
		}
	}

IL_028b:
	{
		bool L_129 = V_1;
		if (!L_129)
		{
			goto IL_0346;
		}
	}
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_130 = V_7;
		NumericsHelpers_DangerousMakeTwosComplement_m4B6EED2DF0E8C7B5171CDC7BBE5A7A3D68C79D4B(L_130, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_131 = V_7;
		NullCheck(L_131);
		V_17 = ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_131)->max_length)), 1));
		goto IL_02a8;
	}

IL_02a2:
	{
		int32_t L_132 = V_17;
		V_17 = ((int32_t)il2cpp_codegen_subtract(L_132, 1));
	}

IL_02a8:
	{
		int32_t L_133 = V_17;
		if ((((int32_t)L_133) < ((int32_t)0)))
		{
			goto IL_02b4;
		}
	}
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_134 = V_7;
		int32_t L_135 = V_17;
		NullCheck(L_134);
		int32_t L_136 = L_135;
		uint32_t L_137 = (L_134)->GetAt(static_cast<il2cpp_array_size_t>(L_136));
		if (!L_137)
		{
			goto IL_02a2;
		}
	}

IL_02b4:
	{
		int32_t L_138 = V_17;
		V_17 = ((int32_t)il2cpp_codegen_add(L_138, 1));
		int32_t L_139 = V_17;
		if ((!(((uint32_t)L_139) == ((uint32_t)1))))
		{
			goto IL_0308;
		}
	}
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_140 = V_7;
		NullCheck(L_140);
		int32_t L_141 = 0;
		uint32_t L_142 = (L_140)->GetAt(static_cast<il2cpp_array_size_t>(L_141));
		V_18 = L_142;
		uint32_t L_143 = V_18;
		if ((((int32_t)L_143) == ((int32_t)1)))
		{
			goto IL_02d5;
		}
	}
	{
		uint32_t L_144 = V_18;
		if ((((int32_t)L_144) == ((int32_t)((int32_t)-2147483648LL))))
		{
			goto IL_02e1;
		}
	}
	{
		goto IL_02ed;
	}

IL_02d5:
	{
		il2cpp_codegen_runtime_class_init_inline(BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F_il2cpp_TypeInfo_var);
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_145 = ((BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F_StaticFields*)il2cpp_codegen_static_fields_for(BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F_il2cpp_TypeInfo_var))->___s_bnMinusOneInt_5;
		*(BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F*)__this = L_145;
		Il2CppCodeGenWriteBarrier((void**)&(((BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F*)__this)->____bits_1), (void*)NULL);
		return;
	}

IL_02e1:
	{
		il2cpp_codegen_runtime_class_init_inline(BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F_il2cpp_TypeInfo_var);
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_146 = ((BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F_StaticFields*)il2cpp_codegen_static_fields_for(BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F_il2cpp_TypeInfo_var))->___s_bnMinInt_2;
		*(BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F*)__this = L_146;
		Il2CppCodeGenWriteBarrier((void**)&(((BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F*)__this)->____bits_1), (void*)NULL);
		return;
	}

IL_02ed:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_147 = V_7;
		NullCheck(L_147);
		int32_t L_148 = 0;
		uint32_t L_149 = (L_147)->GetAt(static_cast<il2cpp_array_size_t>(L_148));
		if ((((int32_t)L_149) <= ((int32_t)0)))
		{
			goto IL_0308;
		}
	}
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_150 = V_7;
		NullCheck(L_150);
		int32_t L_151 = 0;
		uint32_t L_152 = (L_150)->GetAt(static_cast<il2cpp_array_size_t>(L_151));
		__this->____sign_0 = ((int32_t)il2cpp_codegen_multiply((-1), (int32_t)L_152));
		__this->____bits_1 = (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____bits_1), (void*)(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)NULL);
		return;
	}

IL_0308:
	{
		int32_t L_153 = V_17;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_154 = V_7;
		NullCheck(L_154);
		if ((((int32_t)L_153) == ((int32_t)((int32_t)(((RuntimeArray*)L_154)->max_length)))))
		{
			goto IL_0336;
		}
	}
	{
		__this->____sign_0 = (-1);
		int32_t L_155 = V_17;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_156 = (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)SZArrayNew(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var, (uint32_t)L_155);
		__this->____bits_1 = L_156;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____bits_1), (void*)L_156);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_157 = V_7;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_158 = __this->____bits_1;
		int32_t L_159 = V_17;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_157, 0, (RuntimeArray*)L_158, 0, L_159, NULL);
		return;
	}

IL_0336:
	{
		__this->____sign_0 = (-1);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_160 = V_7;
		__this->____bits_1 = L_160;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____bits_1), (void*)L_160);
		return;
	}

IL_0346:
	{
		__this->____sign_0 = 1;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_161 = V_7;
		__this->____bits_1 = L_161;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____bits_1), (void*)L_161);
	}

IL_0355:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void BigInteger__ctor_mF6B2AC2AD4056AB6903913C56A92F565EB08BAFD_AdjustorThunk (RuntimeObject* __this, ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D ___0_value, bool ___1_isUnsigned, bool ___2_isBigEndian, const RuntimeMethod* method)
{
	BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F*>(__this + _offset);
	BigInteger__ctor_mF6B2AC2AD4056AB6903913C56A92F565EB08BAFD(_thisAdjusted, ___0_value, ___1_isUnsigned, ___2_isBigEndian, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BigInteger__ctor_mB5E6337A77FC9888762DD29AAF54D2BBDD828D03 (BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F* __this, int32_t ___0_n, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___1_rgu, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_n;
		__this->____sign_0 = L_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_1 = ___1_rgu;
		__this->____bits_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____bits_1), (void*)L_1);
		return;
	}
}
IL2CPP_EXTERN_C  void BigInteger__ctor_mB5E6337A77FC9888762DD29AAF54D2BBDD828D03_AdjustorThunk (RuntimeObject* __this, int32_t ___0_n, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___1_rgu, const RuntimeMethod* method)
{
	BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F*>(__this + _offset);
	BigInteger__ctor_mB5E6337A77FC9888762DD29AAF54D2BBDD828D03(_thisAdjusted, ___0_n, ___1_rgu, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BigInteger__ctor_m14A0AC47ABF1AF6DE7B653CED685D7AD11B54BE6 (BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F* __this, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___0_value, bool ___1_negative, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F* G_B12_0 = NULL;
	BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F* G_B11_0 = NULL;
	int32_t G_B13_0 = 0;
	BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F* G_B13_1 = NULL;
	BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F* G_B17_0 = NULL;
	BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F* G_B16_0 = NULL;
	int32_t G_B18_0 = 0;
	BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F* G_B18_1 = NULL;
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0 = ___0_value;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral46F273EF641E07D271D91E0DC24A4392582671F8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&BigInteger__ctor_m14A0AC47ABF1AF6DE7B653CED685D7AD11B54BE6_RuntimeMethod_var)));
	}

IL_000e:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_2 = ___0_value;
		NullCheck(L_2);
		V_0 = ((int32_t)(((RuntimeArray*)L_2)->max_length));
		goto IL_0018;
	}

IL_0014:
	{
		int32_t L_3 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_3, 1));
	}

IL_0018:
	{
		int32_t L_4 = V_0;
		if ((((int32_t)L_4) <= ((int32_t)0)))
		{
			goto IL_0023;
		}
	}
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_5 = ___0_value;
		int32_t L_6 = V_0;
		NullCheck(L_5);
		int32_t L_7 = ((int32_t)il2cpp_codegen_subtract(L_6, 1));
		uint32_t L_8 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		if (!L_8)
		{
			goto IL_0014;
		}
	}

IL_0023:
	{
		int32_t L_9 = V_0;
		if (L_9)
		{
			goto IL_0032;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F_il2cpp_TypeInfo_var);
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_10 = ((BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F_StaticFields*)il2cpp_codegen_static_fields_for(BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F_il2cpp_TypeInfo_var))->___s_bnZeroInt_4;
		*(BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F*)__this = L_10;
		Il2CppCodeGenWriteBarrier((void**)&(((BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F*)__this)->____bits_1), (void*)NULL);
		return;
	}

IL_0032:
	{
		int32_t L_11 = V_0;
		if ((!(((uint32_t)L_11) == ((uint32_t)1))))
		{
			goto IL_0072;
		}
	}
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_12 = ___0_value;
		NullCheck(L_12);
		int32_t L_13 = 0;
		uint32_t L_14 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		if ((!(((uint32_t)L_14) < ((uint32_t)((int32_t)-2147483648LL)))))
		{
			goto IL_0072;
		}
	}
	{
		bool L_15 = ___1_negative;
		if (L_15)
		{
			G_B12_0 = __this;
			goto IL_0049;
		}
		G_B11_0 = __this;
	}
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_16 = ___0_value;
		NullCheck(L_16);
		int32_t L_17 = 0;
		uint32_t L_18 = (L_16)->GetAt(static_cast<il2cpp_array_size_t>(L_17));
		G_B13_0 = ((int32_t)(L_18));
		G_B13_1 = G_B11_0;
		goto IL_004d;
	}

IL_0049:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_19 = ___0_value;
		NullCheck(L_19);
		int32_t L_20 = 0;
		uint32_t L_21 = (L_19)->GetAt(static_cast<il2cpp_array_size_t>(L_20));
		G_B13_0 = ((int32_t)(((-((int32_t)L_21)))));
		G_B13_1 = G_B12_0;
	}

IL_004d:
	{
		G_B13_1->____sign_0 = G_B13_0;
		__this->____bits_1 = (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____bits_1), (void*)(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)NULL);
		int32_t L_22 = __this->____sign_0;
		if ((!(((uint32_t)L_22) == ((uint32_t)((int32_t)-2147483648LL)))))
		{
			goto IL_009a;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F_il2cpp_TypeInfo_var);
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_23 = ((BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F_StaticFields*)il2cpp_codegen_static_fields_for(BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F_il2cpp_TypeInfo_var))->___s_bnMinInt_2;
		*(BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F*)__this = L_23;
		Il2CppCodeGenWriteBarrier((void**)&(((BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F*)__this)->____bits_1), (void*)NULL);
		return;
	}

IL_0072:
	{
		bool L_24 = ___1_negative;
		if (L_24)
		{
			G_B17_0 = __this;
			goto IL_0079;
		}
		G_B16_0 = __this;
	}
	{
		G_B18_0 = 1;
		G_B18_1 = G_B16_0;
		goto IL_007a;
	}

IL_0079:
	{
		G_B18_0 = (-1);
		G_B18_1 = G_B17_0;
	}

IL_007a:
	{
		G_B18_1->____sign_0 = G_B18_0;
		int32_t L_25 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_26 = (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)SZArrayNew(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var, (uint32_t)L_25);
		__this->____bits_1 = L_26;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____bits_1), (void*)L_26);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_27 = ___0_value;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_28 = __this->____bits_1;
		int32_t L_29 = V_0;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_27, 0, (RuntimeArray*)L_28, 0, L_29, NULL);
	}

IL_009a:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void BigInteger__ctor_m14A0AC47ABF1AF6DE7B653CED685D7AD11B54BE6_AdjustorThunk (RuntimeObject* __this, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___0_value, bool ___1_negative, const RuntimeMethod* method)
{
	BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F*>(__this + _offset);
	BigInteger__ctor_m14A0AC47ABF1AF6DE7B653CED685D7AD11B54BE6(_thisAdjusted, ___0_value, ___1_negative, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F BigInteger_get_MinusOne_m3FF0F44F8C3D6DFB66C00B61017E42E555585465 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F_il2cpp_TypeInfo_var);
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_0 = ((BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F_StaticFields*)il2cpp_codegen_static_fields_for(BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F_il2cpp_TypeInfo_var))->___s_bnMinusOneInt_5;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BigInteger_GetHashCode_m2CB01C462C09EB23616010EB24E0A87A4D35D783 (BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0 = __this->____bits_1;
		if (L_0)
		{
			goto IL_000f;
		}
	}
	{
		int32_t L_1 = __this->____sign_0;
		return L_1;
	}

IL_000f:
	{
		int32_t L_2 = __this->____sign_0;
		V_0 = L_2;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_3 = __this->____bits_1;
		NullCheck(L_3);
		V_1 = ((int32_t)(((RuntimeArray*)L_3)->max_length));
		goto IL_0030;
	}

IL_0021:
	{
		int32_t L_4 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_5 = __this->____bits_1;
		int32_t L_6 = V_1;
		NullCheck(L_5);
		int32_t L_7 = L_6;
		uint32_t L_8 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		int32_t L_9;
		L_9 = NumericsHelpers_CombineHash_m676E72BC5EC287D4C9602A8D876D24E2CBFDC776(L_4, L_8, NULL);
		V_0 = L_9;
	}

IL_0030:
	{
		int32_t L_10 = V_1;
		int32_t L_11 = ((int32_t)il2cpp_codegen_subtract(L_10, 1));
		V_1 = L_11;
		if ((((int32_t)L_11) >= ((int32_t)0)))
		{
			goto IL_0021;
		}
	}
	{
		int32_t L_12 = V_0;
		return L_12;
	}
}
IL2CPP_EXTERN_C  int32_t BigInteger_GetHashCode_m2CB01C462C09EB23616010EB24E0A87A4D35D783_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = BigInteger_GetHashCode_m2CB01C462C09EB23616010EB24E0A87A4D35D783(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BigInteger_Equals_mC711A33C4466DC2C053785E0A8A34B49A197EA1C (BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___0_obj;
		if (((RuntimeObject*)IsInstSealed((RuntimeObject*)L_0, BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F_il2cpp_TypeInfo_var)))
		{
			goto IL_000a;
		}
	}
	{
		return (bool)0;
	}

IL_000a:
	{
		RuntimeObject* L_1 = ___0_obj;
		bool L_2;
		L_2 = BigInteger_Equals_m36D3C46B170C61FBA8D78C5D4D52B6627DCB2314(__this, ((*(BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F*)((BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F*)(BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F*)UnBox(L_1, BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F_il2cpp_TypeInfo_var)))), NULL);
		return L_2;
	}
}
IL2CPP_EXTERN_C  bool BigInteger_Equals_mC711A33C4466DC2C053785E0A8A34B49A197EA1C_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method)
{
	BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F*>(__this + _offset);
	bool _returnValue;
	_returnValue = BigInteger_Equals_mC711A33C4466DC2C053785E0A8A34B49A197EA1C(_thisAdjusted, ___0_obj, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BigInteger_Equals_m36D3C46B170C61FBA8D78C5D4D52B6627DCB2314 (BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F* __this, BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F ___0_other, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->____sign_0;
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_1 = ___0_other;
		int32_t L_2 = L_1.____sign_0;
		if ((((int32_t)L_0) == ((int32_t)L_2)))
		{
			goto IL_0010;
		}
	}
	{
		return (bool)0;
	}

IL_0010:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_3 = __this->____bits_1;
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_4 = ___0_other;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_5 = L_4.____bits_1;
		if ((!(((RuntimeObject*)(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)L_3) == ((RuntimeObject*)(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)L_5))))
		{
			goto IL_0020;
		}
	}
	{
		return (bool)1;
	}

IL_0020:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_6 = __this->____bits_1;
		if (!L_6)
		{
			goto IL_0030;
		}
	}
	{
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_7 = ___0_other;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_8 = L_7.____bits_1;
		if (L_8)
		{
			goto IL_0032;
		}
	}

IL_0030:
	{
		return (bool)0;
	}

IL_0032:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_9 = __this->____bits_1;
		NullCheck(L_9);
		V_0 = ((int32_t)(((RuntimeArray*)L_9)->max_length));
		int32_t L_10 = V_0;
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_11 = ___0_other;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_12 = L_11.____bits_1;
		NullCheck(L_12);
		if ((((int32_t)L_10) == ((int32_t)((int32_t)(((RuntimeArray*)L_12)->max_length)))))
		{
			goto IL_0048;
		}
	}
	{
		return (bool)0;
	}

IL_0048:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_13 = __this->____bits_1;
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_14 = ___0_other;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_15 = L_14.____bits_1;
		int32_t L_16 = V_0;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F_il2cpp_TypeInfo_var);
		int32_t L_17;
		L_17 = BigInteger_GetDiffLength_m86F9E98613660CB092EA24BC931C98B60E802902(L_13, L_15, L_16, NULL);
		return (bool)((((int32_t)L_17) == ((int32_t)0))? 1 : 0);
	}
}
IL2CPP_EXTERN_C  bool BigInteger_Equals_m36D3C46B170C61FBA8D78C5D4D52B6627DCB2314_AdjustorThunk (RuntimeObject* __this, BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F ___0_other, const RuntimeMethod* method)
{
	BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F*>(__this + _offset);
	bool _returnValue;
	_returnValue = BigInteger_Equals_m36D3C46B170C61FBA8D78C5D4D52B6627DCB2314(_thisAdjusted, ___0_other, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BigInteger_CompareTo_m1B9ADF53CC7255B4DE59A270AA1EA854E25E7296 (BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F* __this, BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F ___0_other, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		int32_t L_0 = __this->____sign_0;
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_1 = ___0_other;
		int32_t L_2 = L_1.____sign_0;
		if ((((int32_t)((int32_t)(L_0^L_2))) >= ((int32_t)0)))
		{
			goto IL_001d;
		}
	}
	{
		int32_t L_3 = __this->____sign_0;
		if ((((int32_t)L_3) < ((int32_t)0)))
		{
			goto IL_001b;
		}
	}
	{
		return 1;
	}

IL_001b:
	{
		return (-1);
	}

IL_001d:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_4 = __this->____bits_1;
		if (L_4)
		{
			goto IL_0057;
		}
	}
	{
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_5 = ___0_other;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_6 = L_5.____bits_1;
		if (L_6)
		{
			goto IL_004f;
		}
	}
	{
		int32_t L_7 = __this->____sign_0;
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_8 = ___0_other;
		int32_t L_9 = L_8.____sign_0;
		if ((((int32_t)L_7) < ((int32_t)L_9)))
		{
			goto IL_004d;
		}
	}
	{
		int32_t L_10 = __this->____sign_0;
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_11 = ___0_other;
		int32_t L_12 = L_11.____sign_0;
		if ((((int32_t)L_10) > ((int32_t)L_12)))
		{
			goto IL_004b;
		}
	}
	{
		return 0;
	}

IL_004b:
	{
		return 1;
	}

IL_004d:
	{
		return (-1);
	}

IL_004f:
	{
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_13 = ___0_other;
		int32_t L_14 = L_13.____sign_0;
		return ((-L_14));
	}

IL_0057:
	{
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_15 = ___0_other;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_16 = L_15.____bits_1;
		if (!L_16)
		{
			goto IL_0075;
		}
	}
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_17 = __this->____bits_1;
		NullCheck(L_17);
		int32_t L_18 = ((int32_t)(((RuntimeArray*)L_17)->max_length));
		V_0 = L_18;
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_19 = ___0_other;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_20 = L_19.____bits_1;
		NullCheck(L_20);
		int32_t L_21 = ((int32_t)(((RuntimeArray*)L_20)->max_length));
		V_1 = L_21;
		if ((((int32_t)L_18) <= ((int32_t)L_21)))
		{
			goto IL_007c;
		}
	}

IL_0075:
	{
		int32_t L_22 = __this->____sign_0;
		return L_22;
	}

IL_007c:
	{
		int32_t L_23 = V_0;
		int32_t L_24 = V_1;
		if ((((int32_t)L_23) >= ((int32_t)L_24)))
		{
			goto IL_0088;
		}
	}
	{
		int32_t L_25 = __this->____sign_0;
		return ((-L_25));
	}

IL_0088:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_26 = __this->____bits_1;
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_27 = ___0_other;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_28 = L_27.____bits_1;
		int32_t L_29 = V_0;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F_il2cpp_TypeInfo_var);
		int32_t L_30;
		L_30 = BigInteger_GetDiffLength_m86F9E98613660CB092EA24BC931C98B60E802902(L_26, L_28, L_29, NULL);
		V_2 = L_30;
		int32_t L_31 = V_2;
		if (L_31)
		{
			goto IL_00a0;
		}
	}
	{
		return 0;
	}

IL_00a0:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_32 = __this->____bits_1;
		int32_t L_33 = V_2;
		NullCheck(L_32);
		int32_t L_34 = ((int32_t)il2cpp_codegen_subtract(L_33, 1));
		uint32_t L_35 = (L_32)->GetAt(static_cast<il2cpp_array_size_t>(L_34));
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_36 = ___0_other;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_37 = L_36.____bits_1;
		int32_t L_38 = V_2;
		NullCheck(L_37);
		int32_t L_39 = ((int32_t)il2cpp_codegen_subtract(L_38, 1));
		uint32_t L_40 = (L_37)->GetAt(static_cast<il2cpp_array_size_t>(L_39));
		if ((!(((uint32_t)L_35) >= ((uint32_t)L_40))))
		{
			goto IL_00bd;
		}
	}
	{
		int32_t L_41 = __this->____sign_0;
		return L_41;
	}

IL_00bd:
	{
		int32_t L_42 = __this->____sign_0;
		return ((-L_42));
	}
}
IL2CPP_EXTERN_C  int32_t BigInteger_CompareTo_m1B9ADF53CC7255B4DE59A270AA1EA854E25E7296_AdjustorThunk (RuntimeObject* __this, BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F ___0_other, const RuntimeMethod* method)
{
	BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = BigInteger_CompareTo_m1B9ADF53CC7255B4DE59A270AA1EA854E25E7296(_thisAdjusted, ___0_other, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BigInteger_CompareTo_mFF2E7BDB82C698B3A3BFD93FD723629F9606B33E (BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___0_obj;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		return 1;
	}

IL_0005:
	{
		RuntimeObject* L_1 = ___0_obj;
		if (((RuntimeObject*)IsInstSealed((RuntimeObject*)L_1, BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F_il2cpp_TypeInfo_var)))
		{
			goto IL_001d;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_2 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral85DAE785199A9898AFE660853B969B9DB82D9666)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral690BF02630AC0BD6AA6BD08D2C36A28E1FC54F3E)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&BigInteger_CompareTo_mFF2E7BDB82C698B3A3BFD93FD723629F9606B33E_RuntimeMethod_var)));
	}

IL_001d:
	{
		RuntimeObject* L_3 = ___0_obj;
		int32_t L_4;
		L_4 = BigInteger_CompareTo_m1B9ADF53CC7255B4DE59A270AA1EA854E25E7296(__this, ((*(BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F*)((BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F*)(BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F*)UnBox(L_3, BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F_il2cpp_TypeInfo_var)))), NULL);
		return L_4;
	}
}
IL2CPP_EXTERN_C  int32_t BigInteger_CompareTo_mFF2E7BDB82C698B3A3BFD93FD723629F9606B33E_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method)
{
	BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = BigInteger_CompareTo_mFF2E7BDB82C698B3A3BFD93FD723629F9606B33E(_thisAdjusted, ___0_obj, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BigInteger_TryWriteBytes_m4B86F875CA1C01790FE20D1A689DCA41D22326C0 (BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F* __this, Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 ___0_destination, int32_t* ___1_bytesWritten, bool ___2_isUnsigned, bool ___3_isBigEndian, const RuntimeMethod* method) 
{
	{
		int32_t* L_0 = ___1_bytesWritten;
		*((int32_t*)L_0) = (int32_t)0;
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_1 = ___0_destination;
		bool L_2 = ___2_isUnsigned;
		bool L_3 = ___3_isBigEndian;
		int32_t* L_4 = ___1_bytesWritten;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5;
		L_5 = BigInteger_TryGetBytes_m015641ED36F51F9CA2D92665048EB5E0ED3C6DCD(__this, 2, L_1, L_2, L_3, L_4, NULL);
		if (L_5)
		{
			goto IL_0016;
		}
	}
	{
		int32_t* L_6 = ___1_bytesWritten;
		*((int32_t*)L_6) = (int32_t)0;
		return (bool)0;
	}

IL_0016:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C  bool BigInteger_TryWriteBytes_m4B86F875CA1C01790FE20D1A689DCA41D22326C0_AdjustorThunk (RuntimeObject* __this, Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 ___0_destination, int32_t* ___1_bytesWritten, bool ___2_isUnsigned, bool ___3_isBigEndian, const RuntimeMethod* method)
{
	BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F*>(__this + _offset);
	bool _returnValue;
	_returnValue = BigInteger_TryWriteBytes_m4B86F875CA1C01790FE20D1A689DCA41D22326C0(_thisAdjusted, ___0_destination, ___1_bytesWritten, ___2_isUnsigned, ___3_isBigEndian, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BigInteger_TryWriteOrCountBytes_mB22B053CE50BA54DF99F85EEAE05CA7ABDEF6441 (BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F* __this, Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 ___0_destination, int32_t* ___1_bytesWritten, bool ___2_isUnsigned, bool ___3_isBigEndian, const RuntimeMethod* method) 
{
	{
		int32_t* L_0 = ___1_bytesWritten;
		*((int32_t*)L_0) = (int32_t)0;
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_1 = ___0_destination;
		bool L_2 = ___2_isUnsigned;
		bool L_3 = ___3_isBigEndian;
		int32_t* L_4 = ___1_bytesWritten;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5;
		L_5 = BigInteger_TryGetBytes_m015641ED36F51F9CA2D92665048EB5E0ED3C6DCD(__this, 2, L_1, L_2, L_3, L_4, NULL);
		return (bool)((!(((RuntimeObject*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)L_5) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
	}
}
IL2CPP_EXTERN_C  bool BigInteger_TryWriteOrCountBytes_mB22B053CE50BA54DF99F85EEAE05CA7ABDEF6441_AdjustorThunk (RuntimeObject* __this, Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 ___0_destination, int32_t* ___1_bytesWritten, bool ___2_isUnsigned, bool ___3_isBigEndian, const RuntimeMethod* method)
{
	BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F*>(__this + _offset);
	bool _returnValue;
	_returnValue = BigInteger_TryWriteOrCountBytes_mB22B053CE50BA54DF99F85EEAE05CA7ABDEF6441(_thisAdjusted, ___0_destination, ___1_bytesWritten, ___2_isUnsigned, ___3_isBigEndian, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* BigInteger_TryGetBytes_m015641ED36F51F9CA2D92665048EB5E0ED3C6DCD (BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F* __this, int32_t ___0_mode, Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 ___1_destination, bool ___2_isUnsigned, bool ___3_isBigEndian, int32_t* ___4_bytesWritten, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigInteger_TryGetBytes_m015641ED36F51F9CA2D92665048EB5E0ED3C6DCD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_get_Length_m8E944E4954E037877A25B9FF6B901F1F901D4769_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_op_Implicit_m8619157C8809464A173FF531960A75A0ACE2CE91_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	uint8_t V_1 = 0x0;
	int32_t V_2 = 0;
	uint32_t V_3 = 0;
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* V_4 = NULL;
	uint8_t V_5 = 0x0;
	int32_t V_6 = 0;
	bool V_7 = false;
	int32_t V_8 = 0;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_9 = NULL;
	int32_t V_10 = 0;
	int32_t V_11 = 0;
	int32_t V_12 = 0;
	uint32_t V_13 = 0;
	int32_t G_B16_0 = 0;
	int32_t G_B34_0 = 0;
	int32_t G_B36_0 = 0;
	int32_t G_B35_0 = 0;
	int32_t G_B37_0 = 0;
	int32_t G_B37_1 = 0;
	int32_t G_B50_0 = 0;
	int32_t G_B53_0 = 0;
	{
		int32_t L_0 = __this->____sign_0;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (L_1)
		{
			goto IL_003f;
		}
	}
	{
		int32_t L_2 = ___0_mode;
		if (!L_2)
		{
			goto IL_0013;
		}
	}
	{
		int32_t L_3 = ___0_mode;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_001a;
		}
	}
	{
		goto IL_0020;
	}

IL_0013:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)1);
		return L_4;
	}

IL_001a:
	{
		int32_t* L_5 = ___4_bytesWritten;
		*((int32_t*)L_5) = (int32_t)1;
		return (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)NULL;
	}

IL_0020:
	{
		int32_t* L_6 = ___4_bytesWritten;
		*((int32_t*)L_6) = (int32_t)1;
		int32_t L_7;
		L_7 = Span_1_get_Length_m8E944E4954E037877A25B9FF6B901F1F901D4769_inline((&___1_destination), Span_1_get_Length_m8E944E4954E037877A25B9FF6B901F1F901D4769_RuntimeMethod_var);
		if (!L_7)
		{
			goto IL_003d;
		}
	}
	{
		uint8_t* L_8;
		L_8 = il2cpp_span_get_item((uint8_t*)((Il2CppByReference*)&(((&___1_destination))->____pointer_0))->value, (0), ((&___1_destination))->____length_1);
		*((int8_t*)L_8) = (int8_t)0;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = ((BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F_StaticFields*)il2cpp_codegen_static_fields_for(BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F_il2cpp_TypeInfo_var))->___s_success_6;
		return L_9;
	}

IL_003d:
	{
		return (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)NULL;
	}

IL_003f:
	{
		bool L_10 = ___2_isUnsigned;
		if (!L_10)
		{
			goto IL_0051;
		}
	}
	{
		int32_t L_11 = V_0;
		if ((((int32_t)L_11) >= ((int32_t)0)))
		{
			goto IL_0051;
		}
	}
	{
		OverflowException_t6F6AD8CACE20C37F701C05B373A215C4802FAB0C* L_12 = (OverflowException_t6F6AD8CACE20C37F701C05B373A215C4802FAB0C*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&OverflowException_t6F6AD8CACE20C37F701C05B373A215C4802FAB0C_il2cpp_TypeInfo_var)));
		OverflowException__ctor_m2B99D79236B7B87C0BB6C9AB2E557DECE481C264(L_12, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC798E2ADCB059C2253762B87F88B2661EADEBEA6)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_12, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&BigInteger_TryGetBytes_m015641ED36F51F9CA2D92665048EB5E0ED3C6DCD_RuntimeMethod_var)));
	}

IL_0051:
	{
		V_2 = 0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_13 = __this->____bits_1;
		V_4 = L_13;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_14 = V_4;
		if (L_14)
		{
			goto IL_0071;
		}
	}
	{
		int32_t L_15 = V_0;
		if ((((int32_t)L_15) < ((int32_t)0)))
		{
			goto IL_0066;
		}
	}
	{
		G_B16_0 = 0;
		goto IL_006b;
	}

IL_0066:
	{
		G_B16_0 = ((int32_t)255);
	}

IL_006b:
	{
		V_1 = (uint8_t)((int32_t)(uint8_t)G_B16_0);
		int32_t L_16 = V_0;
		V_3 = L_16;
		goto IL_00ad;
	}

IL_0071:
	{
		int32_t L_17 = V_0;
		if ((!(((uint32_t)L_17) == ((uint32_t)(-1)))))
		{
			goto IL_00a1;
		}
	}
	{
		V_1 = (uint8_t)((int32_t)255);
		goto IL_0081;
	}

IL_007d:
	{
		int32_t L_18 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_18, 1));
	}

IL_0081:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_19 = V_4;
		int32_t L_20 = V_2;
		NullCheck(L_19);
		int32_t L_21 = L_20;
		uint32_t L_22 = (L_19)->GetAt(static_cast<il2cpp_array_size_t>(L_21));
		if (!L_22)
		{
			goto IL_007d;
		}
	}
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_23 = V_4;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_24 = V_4;
		NullCheck(L_24);
		NullCheck(L_23);
		int32_t L_25 = ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_24)->max_length)), 1));
		uint32_t L_26 = (L_23)->GetAt(static_cast<il2cpp_array_size_t>(L_25));
		V_3 = ((~L_26));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_27 = V_4;
		NullCheck(L_27);
		int32_t L_28 = V_2;
		if ((!(((uint32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_27)->max_length)), 1))) == ((uint32_t)L_28))))
		{
			goto IL_00ad;
		}
	}
	{
		uint32_t L_29 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_29, 1));
		goto IL_00ad;
	}

IL_00a1:
	{
		V_1 = (uint8_t)0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_30 = V_4;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_31 = V_4;
		NullCheck(L_31);
		NullCheck(L_30);
		int32_t L_32 = ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_31)->max_length)), 1));
		uint32_t L_33 = (L_30)->GetAt(static_cast<il2cpp_array_size_t>(L_32));
		V_3 = L_33;
	}

IL_00ad:
	{
		uint32_t L_34 = V_3;
		int32_t L_35 = ((int32_t)(uint8_t)((int32_t)((uint32_t)L_34>>((int32_t)24))));
		V_5 = (uint8_t)L_35;
		uint8_t L_36 = V_1;
		if ((((int32_t)L_35) == ((int32_t)L_36)))
		{
			goto IL_00bd;
		}
	}
	{
		V_6 = 3;
		goto IL_00e3;
	}

IL_00bd:
	{
		uint32_t L_37 = V_3;
		int32_t L_38 = ((int32_t)(uint8_t)((int32_t)((uint32_t)L_37>>((int32_t)16))));
		V_5 = (uint8_t)L_38;
		uint8_t L_39 = V_1;
		if ((((int32_t)L_38) == ((int32_t)L_39)))
		{
			goto IL_00cd;
		}
	}
	{
		V_6 = 2;
		goto IL_00e3;
	}

IL_00cd:
	{
		uint32_t L_40 = V_3;
		int32_t L_41 = ((int32_t)(uint8_t)((int32_t)((uint32_t)L_40>>8)));
		V_5 = (uint8_t)L_41;
		uint8_t L_42 = V_1;
		if ((((int32_t)L_41) == ((int32_t)L_42)))
		{
			goto IL_00dc;
		}
	}
	{
		V_6 = 1;
		goto IL_00e3;
	}

IL_00dc:
	{
		uint32_t L_43 = V_3;
		V_5 = (uint8_t)((int32_t)(uint8_t)L_43);
		V_6 = 0;
	}

IL_00e3:
	{
		uint8_t L_44 = V_5;
		uint8_t L_45 = V_1;
		if ((((int32_t)((int32_t)((int32_t)L_44&((int32_t)128)))) == ((int32_t)((int32_t)((int32_t)L_45&((int32_t)128))))))
		{
			goto IL_00fa;
		}
	}
	{
		bool L_46 = ___2_isUnsigned;
		G_B34_0 = ((((int32_t)L_46) == ((int32_t)0))? 1 : 0);
		goto IL_00fb;
	}

IL_00fa:
	{
		G_B34_0 = 0;
	}

IL_00fb:
	{
		V_7 = (bool)G_B34_0;
		int32_t L_47 = V_6;
		bool L_48 = V_7;
		if (L_48)
		{
			G_B36_0 = ((int32_t)il2cpp_codegen_add(L_47, 1));
			goto IL_0108;
		}
		G_B35_0 = ((int32_t)il2cpp_codegen_add(L_47, 1));
	}
	{
		G_B37_0 = 0;
		G_B37_1 = G_B35_0;
		goto IL_0109;
	}

IL_0108:
	{
		G_B37_0 = 1;
		G_B37_1 = G_B36_0;
	}

IL_0109:
	{
		V_8 = ((int32_t)il2cpp_codegen_add(G_B37_1, G_B37_0));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_49 = V_4;
		if (!L_49)
		{
			goto IL_011d;
		}
	}
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_50 = V_4;
		NullCheck(L_50);
		if (((int64_t)((int32_t)(((RuntimeArray*)L_50)->max_length)) - (int64_t)1 < (int64_t)kIl2CppInt32Min) || ((int64_t)((int32_t)(((RuntimeArray*)L_50)->max_length)) - (int64_t)1 > (int64_t)kIl2CppInt32Max))
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), BigInteger_TryGetBytes_m015641ED36F51F9CA2D92665048EB5E0ED3C6DCD_RuntimeMethod_var);
		if (((int64_t)4 * (int64_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_50)->max_length)), 1)) < (int64_t)kIl2CppInt32Min) || ((int64_t)4 * (int64_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_50)->max_length)), 1)) > (int64_t)kIl2CppInt32Max))
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), BigInteger_TryGetBytes_m015641ED36F51F9CA2D92665048EB5E0ED3C6DCD_RuntimeMethod_var);
		int32_t L_51 = V_8;
		if (((int64_t)((int32_t)il2cpp_codegen_multiply(4, ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_50)->max_length)), 1)))) + (int64_t)L_51 < (int64_t)kIl2CppInt32Min) || ((int64_t)((int32_t)il2cpp_codegen_multiply(4, ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_50)->max_length)), 1)))) + (int64_t)L_51 > (int64_t)kIl2CppInt32Max))
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), BigInteger_TryGetBytes_m015641ED36F51F9CA2D92665048EB5E0ED3C6DCD_RuntimeMethod_var);
		V_8 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(4, ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_50)->max_length)), 1)))), L_51));
	}

IL_011d:
	{
		int32_t L_52 = ___0_mode;
		if (!L_52)
		{
			goto IL_0126;
		}
	}
	{
		int32_t L_53 = ___0_mode;
		if ((((int32_t)L_53) == ((int32_t)1)))
		{
			goto IL_0139;
		}
	}
	{
		goto IL_0140;
	}

IL_0126:
	{
		int32_t L_54 = V_8;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_55 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)L_54);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_56 = L_55;
		V_9 = L_56;
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_57;
		L_57 = Span_1_op_Implicit_m8619157C8809464A173FF531960A75A0ACE2CE91(L_56, Span_1_op_Implicit_m8619157C8809464A173FF531960A75A0ACE2CE91_RuntimeMethod_var);
		___1_destination = L_57;
		goto IL_0159;
	}

IL_0139:
	{
		int32_t* L_58 = ___4_bytesWritten;
		int32_t L_59 = V_8;
		*((int32_t*)L_58) = (int32_t)L_59;
		return (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)NULL;
	}

IL_0140:
	{
		int32_t* L_60 = ___4_bytesWritten;
		int32_t L_61 = V_8;
		*((int32_t*)L_60) = (int32_t)L_61;
		int32_t L_62;
		L_62 = Span_1_get_Length_m8E944E4954E037877A25B9FF6B901F1F901D4769_inline((&___1_destination), Span_1_get_Length_m8E944E4954E037877A25B9FF6B901F1F901D4769_RuntimeMethod_var);
		int32_t L_63 = V_8;
		if ((((int32_t)L_62) >= ((int32_t)L_63)))
		{
			goto IL_0152;
		}
	}
	{
		return (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)NULL;
	}

IL_0152:
	{
		il2cpp_codegen_runtime_class_init_inline(BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_64 = ((BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F_StaticFields*)il2cpp_codegen_static_fields_for(BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F_il2cpp_TypeInfo_var))->___s_success_6;
		V_9 = L_64;
	}

IL_0159:
	{
		bool L_65 = ___3_isBigEndian;
		if (L_65)
		{
			goto IL_0160;
		}
	}
	{
		G_B50_0 = 0;
		goto IL_0164;
	}

IL_0160:
	{
		int32_t L_66 = V_8;
		G_B50_0 = ((int32_t)il2cpp_codegen_subtract(L_66, 1));
	}

IL_0164:
	{
		V_10 = G_B50_0;
		bool L_67 = ___3_isBigEndian;
		if (L_67)
		{
			goto IL_016d;
		}
	}
	{
		G_B53_0 = 1;
		goto IL_016e;
	}

IL_016d:
	{
		G_B53_0 = (-1);
	}

IL_016e:
	{
		V_11 = G_B53_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_68 = V_4;
		if (!L_68)
		{
			goto IL_0202;
		}
	}
	{
		V_12 = 0;
		goto IL_01f5;
	}

IL_017c:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_69 = V_4;
		int32_t L_70 = V_12;
		NullCheck(L_69);
		int32_t L_71 = L_70;
		uint32_t L_72 = (L_69)->GetAt(static_cast<il2cpp_array_size_t>(L_71));
		V_13 = L_72;
		int32_t L_73 = V_0;
		if ((!(((uint32_t)L_73) == ((uint32_t)(-1)))))
		{
			goto IL_0197;
		}
	}
	{
		uint32_t L_74 = V_13;
		V_13 = ((~L_74));
		int32_t L_75 = V_12;
		int32_t L_76 = V_2;
		if ((((int32_t)L_75) > ((int32_t)L_76)))
		{
			goto IL_0197;
		}
	}
	{
		uint32_t L_77 = V_13;
		V_13 = ((int32_t)il2cpp_codegen_add((int32_t)L_77, 1));
	}

IL_0197:
	{
		int32_t L_78 = V_10;
		uint8_t* L_79;
		L_79 = il2cpp_span_get_item((uint8_t*)((Il2CppByReference*)&(((&___1_destination))->____pointer_0))->value, (L_78), ((&___1_destination))->____length_1);
		uint32_t L_80 = V_13;
		*((int8_t*)L_79) = (int8_t)((int32_t)(uint8_t)L_80);
		int32_t L_81 = V_10;
		int32_t L_82 = V_11;
		V_10 = ((int32_t)il2cpp_codegen_add(L_81, L_82));
		int32_t L_83 = V_10;
		uint8_t* L_84;
		L_84 = il2cpp_span_get_item((uint8_t*)((Il2CppByReference*)&(((&___1_destination))->____pointer_0))->value, (L_83), ((&___1_destination))->____length_1);
		uint32_t L_85 = V_13;
		*((int8_t*)L_84) = (int8_t)((int32_t)(uint8_t)((int32_t)((uint32_t)L_85>>8)));
		int32_t L_86 = V_10;
		int32_t L_87 = V_11;
		V_10 = ((int32_t)il2cpp_codegen_add(L_86, L_87));
		int32_t L_88 = V_10;
		uint8_t* L_89;
		L_89 = il2cpp_span_get_item((uint8_t*)((Il2CppByReference*)&(((&___1_destination))->____pointer_0))->value, (L_88), ((&___1_destination))->____length_1);
		uint32_t L_90 = V_13;
		*((int8_t*)L_89) = (int8_t)((int32_t)(uint8_t)((int32_t)((uint32_t)L_90>>((int32_t)16))));
		int32_t L_91 = V_10;
		int32_t L_92 = V_11;
		V_10 = ((int32_t)il2cpp_codegen_add(L_91, L_92));
		int32_t L_93 = V_10;
		uint8_t* L_94;
		L_94 = il2cpp_span_get_item((uint8_t*)((Il2CppByReference*)&(((&___1_destination))->____pointer_0))->value, (L_93), ((&___1_destination))->____length_1);
		uint32_t L_95 = V_13;
		*((int8_t*)L_94) = (int8_t)((int32_t)(uint8_t)((int32_t)((uint32_t)L_95>>((int32_t)24))));
		int32_t L_96 = V_10;
		int32_t L_97 = V_11;
		V_10 = ((int32_t)il2cpp_codegen_add(L_96, L_97));
		int32_t L_98 = V_12;
		V_12 = ((int32_t)il2cpp_codegen_add(L_98, 1));
	}

IL_01f5:
	{
		int32_t L_99 = V_12;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_100 = V_4;
		NullCheck(L_100);
		if ((((int32_t)L_99) < ((int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_100)->max_length)), 1)))))
		{
			goto IL_017c;
		}
	}

IL_0202:
	{
		int32_t L_101 = V_10;
		uint8_t* L_102;
		L_102 = il2cpp_span_get_item((uint8_t*)((Il2CppByReference*)&(((&___1_destination))->____pointer_0))->value, (L_101), ((&___1_destination))->____length_1);
		uint32_t L_103 = V_3;
		*((int8_t*)L_102) = (int8_t)((int32_t)(uint8_t)L_103);
		int32_t L_104 = V_6;
		if (!L_104)
		{
			goto IL_025d;
		}
	}
	{
		int32_t L_105 = V_10;
		int32_t L_106 = V_11;
		V_10 = ((int32_t)il2cpp_codegen_add(L_105, L_106));
		int32_t L_107 = V_10;
		uint8_t* L_108;
		L_108 = il2cpp_span_get_item((uint8_t*)((Il2CppByReference*)&(((&___1_destination))->____pointer_0))->value, (L_107), ((&___1_destination))->____length_1);
		uint32_t L_109 = V_3;
		*((int8_t*)L_108) = (int8_t)((int32_t)(uint8_t)((int32_t)((uint32_t)L_109>>8)));
		int32_t L_110 = V_6;
		if ((((int32_t)L_110) == ((int32_t)1)))
		{
			goto IL_025d;
		}
	}
	{
		int32_t L_111 = V_10;
		int32_t L_112 = V_11;
		V_10 = ((int32_t)il2cpp_codegen_add(L_111, L_112));
		int32_t L_113 = V_10;
		uint8_t* L_114;
		L_114 = il2cpp_span_get_item((uint8_t*)((Il2CppByReference*)&(((&___1_destination))->____pointer_0))->value, (L_113), ((&___1_destination))->____length_1);
		uint32_t L_115 = V_3;
		*((int8_t*)L_114) = (int8_t)((int32_t)(uint8_t)((int32_t)((uint32_t)L_115>>((int32_t)16))));
		int32_t L_116 = V_6;
		if ((((int32_t)L_116) == ((int32_t)2)))
		{
			goto IL_025d;
		}
	}
	{
		int32_t L_117 = V_10;
		int32_t L_118 = V_11;
		V_10 = ((int32_t)il2cpp_codegen_add(L_117, L_118));
		int32_t L_119 = V_10;
		uint8_t* L_120;
		L_120 = il2cpp_span_get_item((uint8_t*)((Il2CppByReference*)&(((&___1_destination))->____pointer_0))->value, (L_119), ((&___1_destination))->____length_1);
		uint32_t L_121 = V_3;
		*((int8_t*)L_120) = (int8_t)((int32_t)(uint8_t)((int32_t)((uint32_t)L_121>>((int32_t)24))));
	}

IL_025d:
	{
		bool L_122 = V_7;
		if (!L_122)
		{
			goto IL_0273;
		}
	}
	{
		int32_t L_123 = V_10;
		int32_t L_124 = V_11;
		V_10 = ((int32_t)il2cpp_codegen_add(L_123, L_124));
		int32_t L_125 = V_10;
		uint8_t* L_126;
		L_126 = il2cpp_span_get_item((uint8_t*)((Il2CppByReference*)&(((&___1_destination))->____pointer_0))->value, (L_125), ((&___1_destination))->____length_1);
		uint8_t L_127 = V_1;
		*((int8_t*)L_126) = (int8_t)L_127;
	}

IL_0273:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_128 = V_9;
		return L_128;
	}
}
IL2CPP_EXTERN_C  ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* BigInteger_TryGetBytes_m015641ED36F51F9CA2D92665048EB5E0ED3C6DCD_AdjustorThunk (RuntimeObject* __this, int32_t ___0_mode, Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 ___1_destination, bool ___2_isUnsigned, bool ___3_isBigEndian, int32_t* ___4_bytesWritten, const RuntimeMethod* method)
{
	BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F*>(__this + _offset);
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* _returnValue;
	_returnValue = BigInteger_TryGetBytes_m015641ED36F51F9CA2D92665048EB5E0ED3C6DCD(_thisAdjusted, ___0_mode, ___1_destination, ___2_isUnsigned, ___3_isBigEndian, ___4_bytesWritten, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* BigInteger_ToString_m6AFB0DE9CD953DA8B015C31B3CC1FEF86D98A306 (BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F* __this, const RuntimeMethod* method) 
{
	{
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_0 = (*(BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F*)__this);
		NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* L_1;
		L_1 = NumberFormatInfo_get_CurrentInfo_m121C9878F777AD81289C7B2BF589293E509FD9B4(NULL);
		String_t* L_2;
		L_2 = BigNumber_FormatBigInteger_m1C6793BBD747BBC3E729A18FDAF8A5C814C80DC4(L_0, (String_t*)NULL, L_1, NULL);
		return L_2;
	}
}
IL2CPP_EXTERN_C  String_t* BigInteger_ToString_m6AFB0DE9CD953DA8B015C31B3CC1FEF86D98A306_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F*>(__this + _offset);
	String_t* _returnValue;
	_returnValue = BigInteger_ToString_m6AFB0DE9CD953DA8B015C31B3CC1FEF86D98A306(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* BigInteger_ToString_mF67077A813661D27640565FC41346D65A155B3F6 (BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F* __this, String_t* ___0_format, RuntimeObject* ___1_provider, const RuntimeMethod* method) 
{
	{
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_0 = (*(BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F*)__this);
		String_t* L_1 = ___0_format;
		RuntimeObject* L_2 = ___1_provider;
		NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* L_3;
		L_3 = NumberFormatInfo_GetInstance_m705987E5E7D3E5EC5C5DD2D088FBC9BCBA0FC31F(L_2, NULL);
		String_t* L_4;
		L_4 = BigNumber_FormatBigInteger_m1C6793BBD747BBC3E729A18FDAF8A5C814C80DC4(L_0, L_1, L_3, NULL);
		return L_4;
	}
}
IL2CPP_EXTERN_C  String_t* BigInteger_ToString_mF67077A813661D27640565FC41346D65A155B3F6_AdjustorThunk (RuntimeObject* __this, String_t* ___0_format, RuntimeObject* ___1_provider, const RuntimeMethod* method)
{
	BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F*>(__this + _offset);
	String_t* _returnValue;
	_returnValue = BigInteger_ToString_mF67077A813661D27640565FC41346D65A155B3F6(_thisAdjusted, ___0_format, ___1_provider, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F BigInteger_Add_m7544497BCCB4A4612A2CFC9F272FFA6E22F740D8 (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___0_leftBits, int32_t ___1_leftSign, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___2_rightBits, int32_t ___3_rightSign, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigIntegerCalculator_tD707501FE6F3A13129CE42C8E75BF22C5301BE1F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0 = ___0_leftBits;
		V_0 = (bool)((((RuntimeObject*)(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_1 = ___2_rightBits;
		V_1 = (bool)((((RuntimeObject*)(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)L_1) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_2 = V_0;
		bool L_3 = V_1;
		if (!((int32_t)((int32_t)L_2&(int32_t)L_3)))
		{
			goto IL_001a;
		}
	}
	{
		int32_t L_4 = ___1_leftSign;
		int32_t L_5 = ___3_rightSign;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F_il2cpp_TypeInfo_var);
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_6;
		L_6 = BigInteger_op_Implicit_mB409693E4A4DD397B321CE56E748831FD0B67A06(((int64_t)il2cpp_codegen_add(((int64_t)L_4), ((int64_t)L_5))), NULL);
		return L_6;
	}

IL_001a:
	{
		bool L_7 = V_0;
		if (!L_7)
		{
			goto IL_0033;
		}
	}
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_8 = ___2_rightBits;
		int32_t L_9 = ___1_leftSign;
		uint32_t L_10;
		L_10 = NumericsHelpers_Abs_m82DD45E6FEBF5DAB9533B31E5BC62DC5EF37568A(L_9, NULL);
		il2cpp_codegen_runtime_class_init_inline(BigIntegerCalculator_tD707501FE6F3A13129CE42C8E75BF22C5301BE1F_il2cpp_TypeInfo_var);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_11;
		L_11 = BigIntegerCalculator_Add_m6B363515A5150645D0CAD0DDF4B04348B95C29C3(L_8, L_10, NULL);
		int32_t L_12 = ___1_leftSign;
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_13;
		memset((&L_13), 0, sizeof(L_13));
		BigInteger__ctor_m14A0AC47ABF1AF6DE7B653CED685D7AD11B54BE6((&L_13), L_11, (bool)((((int32_t)L_12) < ((int32_t)0))? 1 : 0), NULL);
		return L_13;
	}

IL_0033:
	{
		bool L_14 = V_1;
		if (!L_14)
		{
			goto IL_004c;
		}
	}
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_15 = ___0_leftBits;
		int32_t L_16 = ___3_rightSign;
		uint32_t L_17;
		L_17 = NumericsHelpers_Abs_m82DD45E6FEBF5DAB9533B31E5BC62DC5EF37568A(L_16, NULL);
		il2cpp_codegen_runtime_class_init_inline(BigIntegerCalculator_tD707501FE6F3A13129CE42C8E75BF22C5301BE1F_il2cpp_TypeInfo_var);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_18;
		L_18 = BigIntegerCalculator_Add_m6B363515A5150645D0CAD0DDF4B04348B95C29C3(L_15, L_17, NULL);
		int32_t L_19 = ___1_leftSign;
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_20;
		memset((&L_20), 0, sizeof(L_20));
		BigInteger__ctor_m14A0AC47ABF1AF6DE7B653CED685D7AD11B54BE6((&L_20), L_18, (bool)((((int32_t)L_19) < ((int32_t)0))? 1 : 0), NULL);
		return L_20;
	}

IL_004c:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_21 = ___0_leftBits;
		NullCheck(L_21);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_22 = ___2_rightBits;
		NullCheck(L_22);
		if ((((int32_t)((int32_t)(((RuntimeArray*)L_21)->max_length))) >= ((int32_t)((int32_t)(((RuntimeArray*)L_22)->max_length)))))
		{
			goto IL_0065;
		}
	}
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_23 = ___2_rightBits;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_24 = ___0_leftBits;
		il2cpp_codegen_runtime_class_init_inline(BigIntegerCalculator_tD707501FE6F3A13129CE42C8E75BF22C5301BE1F_il2cpp_TypeInfo_var);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_25;
		L_25 = BigIntegerCalculator_Add_mE49BAD7CDF073CF2D2A2DEABCF11AEE5CC239298(L_23, L_24, NULL);
		int32_t L_26 = ___1_leftSign;
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_27;
		memset((&L_27), 0, sizeof(L_27));
		BigInteger__ctor_m14A0AC47ABF1AF6DE7B653CED685D7AD11B54BE6((&L_27), L_25, (bool)((((int32_t)L_26) < ((int32_t)0))? 1 : 0), NULL);
		return L_27;
	}

IL_0065:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_28 = ___0_leftBits;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_29 = ___2_rightBits;
		il2cpp_codegen_runtime_class_init_inline(BigIntegerCalculator_tD707501FE6F3A13129CE42C8E75BF22C5301BE1F_il2cpp_TypeInfo_var);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_30;
		L_30 = BigIntegerCalculator_Add_mE49BAD7CDF073CF2D2A2DEABCF11AEE5CC239298(L_28, L_29, NULL);
		int32_t L_31 = ___1_leftSign;
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_32;
		memset((&L_32), 0, sizeof(L_32));
		BigInteger__ctor_m14A0AC47ABF1AF6DE7B653CED685D7AD11B54BE6((&L_32), L_30, (bool)((((int32_t)L_31) < ((int32_t)0))? 1 : 0), NULL);
		return L_32;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F BigInteger_Subtract_mA96B4B988F08F5DCADABE0B27BA23D970EBFF88D (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___0_leftBits, int32_t ___1_leftSign, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___2_rightBits, int32_t ___3_rightSign, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigIntegerCalculator_tD707501FE6F3A13129CE42C8E75BF22C5301BE1F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0 = ___0_leftBits;
		V_0 = (bool)((((RuntimeObject*)(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_1 = ___2_rightBits;
		V_1 = (bool)((((RuntimeObject*)(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)L_1) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_2 = V_0;
		bool L_3 = V_1;
		if (!((int32_t)((int32_t)L_2&(int32_t)L_3)))
		{
			goto IL_001a;
		}
	}
	{
		int32_t L_4 = ___1_leftSign;
		int32_t L_5 = ___3_rightSign;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F_il2cpp_TypeInfo_var);
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_6;
		L_6 = BigInteger_op_Implicit_mB409693E4A4DD397B321CE56E748831FD0B67A06(((int64_t)il2cpp_codegen_subtract(((int64_t)L_4), ((int64_t)L_5))), NULL);
		return L_6;
	}

IL_001a:
	{
		bool L_7 = V_0;
		if (!L_7)
		{
			goto IL_0036;
		}
	}
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_8 = ___2_rightBits;
		int32_t L_9 = ___1_leftSign;
		uint32_t L_10;
		L_10 = NumericsHelpers_Abs_m82DD45E6FEBF5DAB9533B31E5BC62DC5EF37568A(L_9, NULL);
		il2cpp_codegen_runtime_class_init_inline(BigIntegerCalculator_tD707501FE6F3A13129CE42C8E75BF22C5301BE1F_il2cpp_TypeInfo_var);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_11;
		L_11 = BigIntegerCalculator_Subtract_mB336D562EA742D2092AFD220202FC15D9A2791A7(L_8, L_10, NULL);
		int32_t L_12 = ___1_leftSign;
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_13;
		memset((&L_13), 0, sizeof(L_13));
		BigInteger__ctor_m14A0AC47ABF1AF6DE7B653CED685D7AD11B54BE6((&L_13), L_11, (bool)((((int32_t)((((int32_t)L_12) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0), NULL);
		return L_13;
	}

IL_0036:
	{
		bool L_14 = V_1;
		if (!L_14)
		{
			goto IL_004f;
		}
	}
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_15 = ___0_leftBits;
		int32_t L_16 = ___3_rightSign;
		uint32_t L_17;
		L_17 = NumericsHelpers_Abs_m82DD45E6FEBF5DAB9533B31E5BC62DC5EF37568A(L_16, NULL);
		il2cpp_codegen_runtime_class_init_inline(BigIntegerCalculator_tD707501FE6F3A13129CE42C8E75BF22C5301BE1F_il2cpp_TypeInfo_var);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_18;
		L_18 = BigIntegerCalculator_Subtract_mB336D562EA742D2092AFD220202FC15D9A2791A7(L_15, L_17, NULL);
		int32_t L_19 = ___1_leftSign;
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_20;
		memset((&L_20), 0, sizeof(L_20));
		BigInteger__ctor_m14A0AC47ABF1AF6DE7B653CED685D7AD11B54BE6((&L_20), L_18, (bool)((((int32_t)L_19) < ((int32_t)0))? 1 : 0), NULL);
		return L_20;
	}

IL_004f:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_21 = ___0_leftBits;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_22 = ___2_rightBits;
		il2cpp_codegen_runtime_class_init_inline(BigIntegerCalculator_tD707501FE6F3A13129CE42C8E75BF22C5301BE1F_il2cpp_TypeInfo_var);
		int32_t L_23;
		L_23 = BigIntegerCalculator_Compare_mD61B527BE1032F19B97519458C7AEAD60CBB8774(L_21, L_22, NULL);
		if ((((int32_t)L_23) >= ((int32_t)0)))
		{
			goto IL_006d;
		}
	}
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_24 = ___2_rightBits;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_25 = ___0_leftBits;
		il2cpp_codegen_runtime_class_init_inline(BigIntegerCalculator_tD707501FE6F3A13129CE42C8E75BF22C5301BE1F_il2cpp_TypeInfo_var);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_26;
		L_26 = BigIntegerCalculator_Subtract_m8BFB5D1D8B089DA2BA5AC0EB0A45D98A6F6AC681(L_24, L_25, NULL);
		int32_t L_27 = ___1_leftSign;
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_28;
		memset((&L_28), 0, sizeof(L_28));
		BigInteger__ctor_m14A0AC47ABF1AF6DE7B653CED685D7AD11B54BE6((&L_28), L_26, (bool)((((int32_t)((((int32_t)L_27) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0), NULL);
		return L_28;
	}

IL_006d:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_29 = ___0_leftBits;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_30 = ___2_rightBits;
		il2cpp_codegen_runtime_class_init_inline(BigIntegerCalculator_tD707501FE6F3A13129CE42C8E75BF22C5301BE1F_il2cpp_TypeInfo_var);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_31;
		L_31 = BigIntegerCalculator_Subtract_m8BFB5D1D8B089DA2BA5AC0EB0A45D98A6F6AC681(L_29, L_30, NULL);
		int32_t L_32 = ___1_leftSign;
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_33;
		memset((&L_33), 0, sizeof(L_33));
		BigInteger__ctor_m14A0AC47ABF1AF6DE7B653CED685D7AD11B54BE6((&L_33), L_31, (bool)((((int32_t)L_32) < ((int32_t)0))? 1 : 0), NULL);
		return L_33;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F BigInteger_op_Implicit_m9B2DA118DD0522DFA6983787CC9C09DACDB5469B (uint8_t ___0_value, const RuntimeMethod* method) 
{
	{
		uint8_t L_0 = ___0_value;
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_1;
		memset((&L_1), 0, sizeof(L_1));
		BigInteger__ctor_mFEDEDA4A6AFC2BA534FEEF4EB3431B9C5AC3F9D9((&L_1), L_0, NULL);
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F BigInteger_op_Implicit_m0E4A1C7B1F24EB10AE57608F2EBA5B127006D850 (int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_value;
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_1;
		memset((&L_1), 0, sizeof(L_1));
		BigInteger__ctor_mFEDEDA4A6AFC2BA534FEEF4EB3431B9C5AC3F9D9((&L_1), L_0, NULL);
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F BigInteger_op_Implicit_mB409693E4A4DD397B321CE56E748831FD0B67A06 (int64_t ___0_value, const RuntimeMethod* method) 
{
	{
		int64_t L_0 = ___0_value;
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_1;
		memset((&L_1), 0, sizeof(L_1));
		BigInteger__ctor_mA87DC2182BB2F6AA0209BD98E81C30BCE5B8BBAA((&L_1), L_0, NULL);
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BigInteger_op_Explicit_m381F80B7F65BFEC7F2597DCDB24622F7F32E6848 (BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigInteger_op_Explicit_m381F80B7F65BFEC7F2597DCDB24622F7F32E6848_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_0 = ___0_value;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_1 = L_0.____bits_1;
		if (L_1)
		{
			goto IL_000f;
		}
	}
	{
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_2 = ___0_value;
		int32_t L_3 = L_2.____sign_0;
		return L_3;
	}

IL_000f:
	{
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_4 = ___0_value;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_5 = L_4.____bits_1;
		NullCheck(L_5);
		if ((((int32_t)((int32_t)(((RuntimeArray*)L_5)->max_length))) <= ((int32_t)1)))
		{
			goto IL_0025;
		}
	}
	{
		OverflowException_t6F6AD8CACE20C37F701C05B373A215C4802FAB0C* L_6 = (OverflowException_t6F6AD8CACE20C37F701C05B373A215C4802FAB0C*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&OverflowException_t6F6AD8CACE20C37F701C05B373A215C4802FAB0C_il2cpp_TypeInfo_var)));
		OverflowException__ctor_m2B99D79236B7B87C0BB6C9AB2E557DECE481C264(L_6, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral4DD3DE8CCECA489C7DDD3362FC292A3BE39B68F1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&BigInteger_op_Explicit_m381F80B7F65BFEC7F2597DCDB24622F7F32E6848_RuntimeMethod_var)));
	}

IL_0025:
	{
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_7 = ___0_value;
		int32_t L_8 = L_7.____sign_0;
		if ((((int32_t)L_8) <= ((int32_t)0)))
		{
			goto IL_0038;
		}
	}
	{
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_9 = ___0_value;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_10 = L_9.____bits_1;
		NullCheck(L_10);
		int32_t L_11 = 0;
		uint32_t L_12 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		if ((uint64_t)(L_12) > 2147483647LL) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), BigInteger_op_Explicit_m381F80B7F65BFEC7F2597DCDB24622F7F32E6848_RuntimeMethod_var);
		return ((int32_t)L_12);
	}

IL_0038:
	{
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_13 = ___0_value;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_14 = L_13.____bits_1;
		NullCheck(L_14);
		int32_t L_15 = 0;
		uint32_t L_16 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_15));
		if ((!(((uint32_t)L_16) > ((uint32_t)((int32_t)-2147483648LL)))))
		{
			goto IL_0052;
		}
	}
	{
		OverflowException_t6F6AD8CACE20C37F701C05B373A215C4802FAB0C* L_17 = (OverflowException_t6F6AD8CACE20C37F701C05B373A215C4802FAB0C*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&OverflowException_t6F6AD8CACE20C37F701C05B373A215C4802FAB0C_il2cpp_TypeInfo_var)));
		OverflowException__ctor_m2B99D79236B7B87C0BB6C9AB2E557DECE481C264(L_17, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral4DD3DE8CCECA489C7DDD3362FC292A3BE39B68F1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_17, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&BigInteger_op_Explicit_m381F80B7F65BFEC7F2597DCDB24622F7F32E6848_RuntimeMethod_var)));
	}

IL_0052:
	{
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_18 = ___0_value;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_19 = L_18.____bits_1;
		NullCheck(L_19);
		int32_t L_20 = 0;
		uint32_t L_21 = (L_19)->GetAt(static_cast<il2cpp_array_size_t>(L_20));
		return ((-((int32_t)L_21)));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F BigInteger_op_LeftShift_m9C9DD1A22775C31A01650FEB59A91D4A58B719B3 (BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F ___0_value, int32_t ___1_shift, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* V_2 = NULL;
	int32_t V_3 = 0;
	bool V_4 = false;
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* V_5 = NULL;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	uint32_t V_8 = 0;
	int32_t V_9 = 0;
	uint32_t V_10 = 0;
	{
		int32_t L_0 = ___1_shift;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_1 = ___0_value;
		return L_1;
	}

IL_0005:
	{
		int32_t L_2 = ___1_shift;
		if ((!(((uint32_t)L_2) == ((uint32_t)((int32_t)-2147483648LL)))))
		{
			goto IL_001f;
		}
	}
	{
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_3 = ___0_value;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F_il2cpp_TypeInfo_var);
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_4;
		L_4 = BigInteger_op_RightShift_mE0645B6555F95B4838A8F471584DCA026848F7AB(L_3, ((int32_t)2147483647LL), NULL);
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_5;
		L_5 = BigInteger_op_RightShift_mE0645B6555F95B4838A8F471584DCA026848F7AB(L_4, 1, NULL);
		return L_5;
	}

IL_001f:
	{
		int32_t L_6 = ___1_shift;
		if ((((int32_t)L_6) >= ((int32_t)0)))
		{
			goto IL_002c;
		}
	}
	{
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_7 = ___0_value;
		int32_t L_8 = ___1_shift;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F_il2cpp_TypeInfo_var);
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_9;
		L_9 = BigInteger_op_RightShift_mE0645B6555F95B4838A8F471584DCA026848F7AB(L_7, ((-L_8)), NULL);
		return L_9;
	}

IL_002c:
	{
		int32_t L_10 = ___1_shift;
		V_0 = ((int32_t)(L_10/((int32_t)32)));
		int32_t L_11 = ___1_shift;
		int32_t L_12 = V_0;
		V_1 = ((int32_t)il2cpp_codegen_subtract(L_11, ((int32_t)il2cpp_codegen_multiply(L_12, ((int32_t)32)))));
		il2cpp_codegen_runtime_class_init_inline(BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F_il2cpp_TypeInfo_var);
		bool L_13;
		L_13 = BigInteger_GetPartsForBitManipulation_m679473F863B7A311A59B4B58F26F1D30ADFEEADF((&___0_value), (&V_2), (&V_3), NULL);
		V_4 = L_13;
		int32_t L_14 = V_3;
		int32_t L_15 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_16 = (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)SZArrayNew(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_14, L_15)), 1)));
		V_5 = L_16;
		int32_t L_17 = V_1;
		if (L_17)
		{
			goto IL_0071;
		}
	}
	{
		V_6 = 0;
		goto IL_006a;
	}

IL_0059:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_18 = V_5;
		int32_t L_19 = V_6;
		int32_t L_20 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_21 = V_2;
		int32_t L_22 = V_6;
		NullCheck(L_21);
		int32_t L_23 = L_22;
		uint32_t L_24 = (L_21)->GetAt(static_cast<il2cpp_array_size_t>(L_23));
		NullCheck(L_18);
		(L_18)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_19, L_20))), (uint32_t)L_24);
		int32_t L_25 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add(L_25, 1));
	}

IL_006a:
	{
		int32_t L_26 = V_6;
		int32_t L_27 = V_3;
		if ((((int32_t)L_26) < ((int32_t)L_27)))
		{
			goto IL_0059;
		}
	}
	{
		goto IL_00b4;
	}

IL_0071:
	{
		int32_t L_28 = V_1;
		V_7 = ((int32_t)il2cpp_codegen_subtract(((int32_t)32), L_28));
		V_8 = 0;
		V_9 = 0;
		goto IL_00a6;
	}

IL_007f:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_29 = V_2;
		int32_t L_30 = V_9;
		NullCheck(L_29);
		int32_t L_31 = L_30;
		uint32_t L_32 = (L_29)->GetAt(static_cast<il2cpp_array_size_t>(L_31));
		V_10 = L_32;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_33 = V_5;
		int32_t L_34 = V_9;
		int32_t L_35 = V_0;
		uint32_t L_36 = V_10;
		int32_t L_37 = V_1;
		uint32_t L_38 = V_8;
		NullCheck(L_33);
		(L_33)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_34, L_35))), (uint32_t)((int32_t)(((int32_t)((int32_t)L_36<<((int32_t)(L_37&((int32_t)31)))))|(int32_t)L_38)));
		uint32_t L_39 = V_10;
		int32_t L_40 = V_7;
		V_8 = ((int32_t)((uint32_t)L_39>>((int32_t)(L_40&((int32_t)31)))));
		int32_t L_41 = V_9;
		V_9 = ((int32_t)il2cpp_codegen_add(L_41, 1));
	}

IL_00a6:
	{
		int32_t L_42 = V_9;
		int32_t L_43 = V_3;
		if ((((int32_t)L_42) < ((int32_t)L_43)))
		{
			goto IL_007f;
		}
	}
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_44 = V_5;
		int32_t L_45 = V_9;
		int32_t L_46 = V_0;
		uint32_t L_47 = V_8;
		NullCheck(L_44);
		(L_44)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_45, L_46))), (uint32_t)L_47);
	}

IL_00b4:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_48 = V_5;
		bool L_49 = V_4;
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_50;
		memset((&L_50), 0, sizeof(L_50));
		BigInteger__ctor_m14A0AC47ABF1AF6DE7B653CED685D7AD11B54BE6((&L_50), L_48, L_49, NULL);
		return L_50;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F BigInteger_op_RightShift_mE0645B6555F95B4838A8F471584DCA026848F7AB (BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F ___0_value, int32_t ___1_shift, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* V_2 = NULL;
	int32_t V_3 = 0;
	bool V_4 = false;
	int32_t V_5 = 0;
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* V_6 = NULL;
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* V_7 = NULL;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	uint32_t V_10 = 0;
	int32_t V_11 = 0;
	uint32_t V_12 = 0;
	{
		int32_t L_0 = ___1_shift;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_1 = ___0_value;
		return L_1;
	}

IL_0005:
	{
		int32_t L_2 = ___1_shift;
		if ((!(((uint32_t)L_2) == ((uint32_t)((int32_t)-2147483648LL)))))
		{
			goto IL_001f;
		}
	}
	{
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_3 = ___0_value;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F_il2cpp_TypeInfo_var);
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_4;
		L_4 = BigInteger_op_LeftShift_m9C9DD1A22775C31A01650FEB59A91D4A58B719B3(L_3, ((int32_t)2147483647LL), NULL);
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_5;
		L_5 = BigInteger_op_LeftShift_m9C9DD1A22775C31A01650FEB59A91D4A58B719B3(L_4, 1, NULL);
		return L_5;
	}

IL_001f:
	{
		int32_t L_6 = ___1_shift;
		if ((((int32_t)L_6) >= ((int32_t)0)))
		{
			goto IL_002c;
		}
	}
	{
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_7 = ___0_value;
		int32_t L_8 = ___1_shift;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F_il2cpp_TypeInfo_var);
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_9;
		L_9 = BigInteger_op_LeftShift_m9C9DD1A22775C31A01650FEB59A91D4A58B719B3(L_7, ((-L_8)), NULL);
		return L_9;
	}

IL_002c:
	{
		int32_t L_10 = ___1_shift;
		V_0 = ((int32_t)(L_10/((int32_t)32)));
		int32_t L_11 = ___1_shift;
		int32_t L_12 = V_0;
		V_1 = ((int32_t)il2cpp_codegen_subtract(L_11, ((int32_t)il2cpp_codegen_multiply(L_12, ((int32_t)32)))));
		il2cpp_codegen_runtime_class_init_inline(BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F_il2cpp_TypeInfo_var);
		bool L_13;
		L_13 = BigInteger_GetPartsForBitManipulation_m679473F863B7A311A59B4B58F26F1D30ADFEEADF((&___0_value), (&V_2), (&V_3), NULL);
		V_4 = L_13;
		bool L_14 = V_4;
		if (!L_14)
		{
			goto IL_0072;
		}
	}
	{
		int32_t L_15 = ___1_shift;
		int32_t L_16 = V_3;
		if ((((int32_t)L_15) < ((int32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)32), L_16)))))
		{
			goto IL_0056;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F_il2cpp_TypeInfo_var);
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_17;
		L_17 = BigInteger_get_MinusOne_m3FF0F44F8C3D6DFB66C00B61017E42E555585465_inline(NULL);
		return L_17;
	}

IL_0056:
	{
		int32_t L_18 = V_3;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_19 = (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)SZArrayNew(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var, (uint32_t)L_18);
		V_7 = L_19;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_20 = V_2;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_21 = V_7;
		int32_t L_22 = V_3;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_20, 0, (RuntimeArray*)L_21, 0, L_22, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_23 = V_7;
		V_2 = L_23;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_24 = V_2;
		NumericsHelpers_DangerousMakeTwosComplement_m4B6EED2DF0E8C7B5171CDC7BBE5A7A3D68C79D4B(L_24, NULL);
	}

IL_0072:
	{
		int32_t L_25 = V_3;
		int32_t L_26 = V_0;
		V_5 = ((int32_t)il2cpp_codegen_subtract(L_25, L_26));
		int32_t L_27 = V_5;
		if ((((int32_t)L_27) >= ((int32_t)0)))
		{
			goto IL_007f;
		}
	}
	{
		V_5 = 0;
	}

IL_007f:
	{
		int32_t L_28 = V_5;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_29 = (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)SZArrayNew(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var, (uint32_t)L_28);
		V_6 = L_29;
		int32_t L_30 = V_1;
		if (L_30)
		{
			goto IL_00aa;
		}
	}
	{
		int32_t L_31 = V_3;
		V_8 = ((int32_t)il2cpp_codegen_subtract(L_31, 1));
		goto IL_00a3;
	}

IL_0092:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_32 = V_6;
		int32_t L_33 = V_8;
		int32_t L_34 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_35 = V_2;
		int32_t L_36 = V_8;
		NullCheck(L_35);
		int32_t L_37 = L_36;
		uint32_t L_38 = (L_35)->GetAt(static_cast<il2cpp_array_size_t>(L_37));
		NullCheck(L_32);
		(L_32)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_subtract(L_33, L_34))), (uint32_t)L_38);
		int32_t L_39 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_subtract(L_39, 1));
	}

IL_00a3:
	{
		int32_t L_40 = V_8;
		int32_t L_41 = V_0;
		if ((((int32_t)L_40) >= ((int32_t)L_41)))
		{
			goto IL_0092;
		}
	}
	{
		goto IL_0109;
	}

IL_00aa:
	{
		int32_t L_42 = V_1;
		V_9 = ((int32_t)il2cpp_codegen_subtract(((int32_t)32), L_42));
		V_10 = 0;
		int32_t L_43 = V_3;
		V_11 = ((int32_t)il2cpp_codegen_subtract(L_43, 1));
		goto IL_0104;
	}

IL_00ba:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_44 = V_2;
		int32_t L_45 = V_11;
		NullCheck(L_44);
		int32_t L_46 = L_45;
		uint32_t L_47 = (L_44)->GetAt(static_cast<il2cpp_array_size_t>(L_46));
		V_12 = L_47;
		bool L_48 = V_4;
		if (!L_48)
		{
			goto IL_00e3;
		}
	}
	{
		int32_t L_49 = V_11;
		int32_t L_50 = V_3;
		if ((!(((uint32_t)L_49) == ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_50, 1))))))
		{
			goto IL_00e3;
		}
	}
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_51 = V_6;
		int32_t L_52 = V_11;
		int32_t L_53 = V_0;
		uint32_t L_54 = V_12;
		int32_t L_55 = V_1;
		int32_t L_56 = V_9;
		NullCheck(L_51);
		(L_51)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_subtract(L_52, L_53))), (uint32_t)((int32_t)(((int32_t)((uint32_t)L_54>>((int32_t)(L_55&((int32_t)31)))))|((int32_t)((-1)<<((int32_t)(L_56&((int32_t)31))))))));
		goto IL_00f4;
	}

IL_00e3:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_57 = V_6;
		int32_t L_58 = V_11;
		int32_t L_59 = V_0;
		uint32_t L_60 = V_12;
		int32_t L_61 = V_1;
		uint32_t L_62 = V_10;
		NullCheck(L_57);
		(L_57)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_subtract(L_58, L_59))), (uint32_t)((int32_t)(((int32_t)((uint32_t)L_60>>((int32_t)(L_61&((int32_t)31)))))|(int32_t)L_62)));
	}

IL_00f4:
	{
		uint32_t L_63 = V_12;
		int32_t L_64 = V_9;
		V_10 = ((int32_t)((int32_t)L_63<<((int32_t)(L_64&((int32_t)31)))));
		int32_t L_65 = V_11;
		V_11 = ((int32_t)il2cpp_codegen_subtract(L_65, 1));
	}

IL_0104:
	{
		int32_t L_66 = V_11;
		int32_t L_67 = V_0;
		if ((((int32_t)L_66) >= ((int32_t)L_67)))
		{
			goto IL_00ba;
		}
	}

IL_0109:
	{
		bool L_68 = V_4;
		if (!L_68)
		{
			goto IL_0114;
		}
	}
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_69 = V_6;
		NumericsHelpers_DangerousMakeTwosComplement_m4B6EED2DF0E8C7B5171CDC7BBE5A7A3D68C79D4B(L_69, NULL);
	}

IL_0114:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_70 = V_6;
		bool L_71 = V_4;
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_72;
		memset((&L_72), 0, sizeof(L_72));
		BigInteger__ctor_m14A0AC47ABF1AF6DE7B653CED685D7AD11B54BE6((&L_72), L_70, L_71, NULL);
		return L_72;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F BigInteger_op_Addition_m895A3ED96D07E1A6E4AD97483EDC256107A31B12 (BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F ___0_left, BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F ___1_right, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_0 = ___0_left;
		int32_t L_1 = L_0.____sign_0;
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_2 = ___1_right;
		int32_t L_3 = L_2.____sign_0;
		if ((((int32_t)((((int32_t)L_1) < ((int32_t)0))? 1 : 0)) == ((int32_t)((((int32_t)L_3) < ((int32_t)0))? 1 : 0))))
		{
			goto IL_0034;
		}
	}
	{
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_4 = ___0_left;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_5 = L_4.____bits_1;
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_6 = ___0_left;
		int32_t L_7 = L_6.____sign_0;
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_8 = ___1_right;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_9 = L_8.____bits_1;
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_10 = ___1_right;
		int32_t L_11 = L_10.____sign_0;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F_il2cpp_TypeInfo_var);
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_12;
		L_12 = BigInteger_Subtract_mA96B4B988F08F5DCADABE0B27BA23D970EBFF88D(L_5, L_7, L_9, ((int32_t)il2cpp_codegen_multiply((-1), L_11)), NULL);
		return L_12;
	}

IL_0034:
	{
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_13 = ___0_left;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_14 = L_13.____bits_1;
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_15 = ___0_left;
		int32_t L_16 = L_15.____sign_0;
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_17 = ___1_right;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_18 = L_17.____bits_1;
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_19 = ___1_right;
		int32_t L_20 = L_19.____sign_0;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F_il2cpp_TypeInfo_var);
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_21;
		L_21 = BigInteger_Add_m7544497BCCB4A4612A2CFC9F272FFA6E22F740D8(L_14, L_16, L_18, L_20, NULL);
		return L_21;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BigInteger_GetPartsForBitManipulation_m679473F863B7A311A59B4B58F26F1D30ADFEEADF (BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F* ___0_x, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA** ___1_xd, int32_t* ___2_xl, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t* G_B7_0 = NULL;
	int32_t* G_B6_0 = NULL;
	int32_t G_B8_0 = 0;
	int32_t* G_B8_1 = NULL;
	{
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F* L_0 = ___0_x;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_1 = L_0->____bits_1;
		if (L_1)
		{
			goto IL_0038;
		}
	}
	{
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F* L_2 = ___0_x;
		int32_t L_3 = L_2->____sign_0;
		if ((((int32_t)L_3) >= ((int32_t)0)))
		{
			goto IL_0025;
		}
	}
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA** L_4 = ___1_xd;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_5 = (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)SZArrayNew(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var, (uint32_t)1);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_6 = L_5;
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F* L_7 = ___0_x;
		int32_t L_8 = L_7->____sign_0;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint32_t)((-L_8)));
		*((RuntimeObject**)L_4) = (RuntimeObject*)L_6;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_4, (void*)(RuntimeObject*)L_6);
		goto IL_0040;
	}

IL_0025:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA** L_9 = ___1_xd;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_10 = (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)SZArrayNew(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var, (uint32_t)1);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_11 = L_10;
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F* L_12 = ___0_x;
		int32_t L_13 = L_12->____sign_0;
		NullCheck(L_11);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint32_t)L_13);
		*((RuntimeObject**)L_9) = (RuntimeObject*)L_11;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_9, (void*)(RuntimeObject*)L_11);
		goto IL_0040;
	}

IL_0038:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA** L_14 = ___1_xd;
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F* L_15 = ___0_x;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_16 = L_15->____bits_1;
		*((RuntimeObject**)L_14) = (RuntimeObject*)L_16;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_14, (void*)(RuntimeObject*)L_16);
	}

IL_0040:
	{
		int32_t* L_17 = ___2_xl;
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F* L_18 = ___0_x;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_19 = L_18->____bits_1;
		if (!L_19)
		{
			G_B7_0 = L_17;
			goto IL_0053;
		}
		G_B6_0 = L_17;
	}
	{
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F* L_20 = ___0_x;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_21 = L_20->____bits_1;
		NullCheck(L_21);
		G_B8_0 = ((int32_t)(((RuntimeArray*)L_21)->max_length));
		G_B8_1 = G_B6_0;
		goto IL_0054;
	}

IL_0053:
	{
		G_B8_0 = 1;
		G_B8_1 = G_B7_0;
	}

IL_0054:
	{
		*((int32_t*)G_B8_1) = (int32_t)G_B8_0;
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F* L_22 = ___0_x;
		int32_t L_23 = L_22->____sign_0;
		return (bool)((((int32_t)L_23) < ((int32_t)0))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BigInteger_GetDiffLength_m86F9E98613660CB092EA24BC931C98B60E802902 (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___0_rgu1, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___1_rgu2, int32_t ___2_cu, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___2_cu;
		V_0 = L_0;
		goto IL_0010;
	}

IL_0004:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_1 = ___0_rgu1;
		int32_t L_2 = V_0;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		uint32_t L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_5 = ___1_rgu2;
		int32_t L_6 = V_0;
		NullCheck(L_5);
		int32_t L_7 = L_6;
		uint32_t L_8 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		if ((((int32_t)L_4) == ((int32_t)L_8)))
		{
			goto IL_0010;
		}
	}
	{
		int32_t L_9 = V_0;
		return ((int32_t)il2cpp_codegen_add(L_9, 1));
	}

IL_0010:
	{
		int32_t L_10 = V_0;
		int32_t L_11 = ((int32_t)il2cpp_codegen_subtract(L_10, 1));
		V_0 = L_11;
		if ((((int32_t)L_11) >= ((int32_t)0)))
		{
			goto IL_0004;
		}
	}
	{
		return 0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BigInteger__cctor_mEE4D16FA07B1AD31F26502B9C54DB72DB4D1C626 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m6080CA526758F4FA182A066B2780D1761CD36ED5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0 = (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)SZArrayNew(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var, (uint32_t)1);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_1 = L_0;
		NullCheck(L_1);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint32_t)((int32_t)-2147483648LL));
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_2;
		memset((&L_2), 0, sizeof(L_2));
		BigInteger__ctor_mB5E6337A77FC9888762DD29AAF54D2BBDD828D03((&L_2), (-1), L_1, NULL);
		((BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F_StaticFields*)il2cpp_codegen_static_fields_for(BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F_il2cpp_TypeInfo_var))->___s_bnMinInt_2 = L_2;
		Il2CppCodeGenWriteBarrier((void**)&(((&((BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F_StaticFields*)il2cpp_codegen_static_fields_for(BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F_il2cpp_TypeInfo_var))->___s_bnMinInt_2))->____bits_1), (void*)NULL);
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_3;
		memset((&L_3), 0, sizeof(L_3));
		BigInteger__ctor_mFEDEDA4A6AFC2BA534FEEF4EB3431B9C5AC3F9D9((&L_3), 1, NULL);
		((BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F_StaticFields*)il2cpp_codegen_static_fields_for(BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F_il2cpp_TypeInfo_var))->___s_bnOneInt_3 = L_3;
		Il2CppCodeGenWriteBarrier((void**)&(((&((BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F_StaticFields*)il2cpp_codegen_static_fields_for(BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F_il2cpp_TypeInfo_var))->___s_bnOneInt_3))->____bits_1), (void*)NULL);
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_4;
		memset((&L_4), 0, sizeof(L_4));
		BigInteger__ctor_mFEDEDA4A6AFC2BA534FEEF4EB3431B9C5AC3F9D9((&L_4), 0, NULL);
		((BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F_StaticFields*)il2cpp_codegen_static_fields_for(BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F_il2cpp_TypeInfo_var))->___s_bnZeroInt_4 = L_4;
		Il2CppCodeGenWriteBarrier((void**)&(((&((BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F_StaticFields*)il2cpp_codegen_static_fields_for(BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F_il2cpp_TypeInfo_var))->___s_bnZeroInt_4))->____bits_1), (void*)NULL);
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_5;
		memset((&L_5), 0, sizeof(L_5));
		BigInteger__ctor_mFEDEDA4A6AFC2BA534FEEF4EB3431B9C5AC3F9D9((&L_5), (-1), NULL);
		((BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F_StaticFields*)il2cpp_codegen_static_fields_for(BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F_il2cpp_TypeInfo_var))->___s_bnMinusOneInt_5 = L_5;
		Il2CppCodeGenWriteBarrier((void**)&(((&((BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F_StaticFields*)il2cpp_codegen_static_fields_for(BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F_il2cpp_TypeInfo_var))->___s_bnMinusOneInt_5))->____bits_1), (void*)NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6;
		L_6 = Array_Empty_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m6080CA526758F4FA182A066B2780D1761CD36ED5_inline(Array_Empty_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m6080CA526758F4FA182A066B2780D1761CD36ED5_RuntimeMethod_var);
		((BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F_StaticFields*)il2cpp_codegen_static_fields_for(BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F_il2cpp_TypeInfo_var))->___s_success_6 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&((BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F_StaticFields*)il2cpp_codegen_static_fields_for(BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F_il2cpp_TypeInfo_var))->___s_success_6), (void*)L_6);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* BigIntegerCalculator_Add_m6B363515A5150645D0CAD0DDF4B04348B95C29C3 (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___0_left, uint32_t ___1_right, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* V_0 = NULL;
	int64_t V_1 = 0;
	int64_t V_2 = 0;
	int32_t V_3 = 0;
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0 = ___0_left;
		NullCheck(L_0);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_1 = (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)SZArrayNew(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_add(((int32_t)(((RuntimeArray*)L_0)->max_length)), 1)));
		V_0 = L_1;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_2 = ___0_left;
		NullCheck(L_2);
		int32_t L_3 = 0;
		uint32_t L_4 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		uint32_t L_5 = ___1_right;
		V_1 = ((int64_t)il2cpp_codegen_add(((int64_t)(uint64_t)L_4), ((int64_t)(uint64_t)L_5)));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_6 = V_0;
		int64_t L_7 = V_1;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint32_t)((int32_t)(uint32_t)L_7));
		int64_t L_8 = V_1;
		V_2 = ((int64_t)(L_8>>((int32_t)32)));
		V_3 = 1;
		goto IL_0036;
	}

IL_0021:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_9 = ___0_left;
		int32_t L_10 = V_3;
		NullCheck(L_9);
		int32_t L_11 = L_10;
		uint32_t L_12 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		int64_t L_13 = V_2;
		V_1 = ((int64_t)il2cpp_codegen_add(((int64_t)(uint64_t)L_12), L_13));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_14 = V_0;
		int32_t L_15 = V_3;
		int64_t L_16 = V_1;
		NullCheck(L_14);
		(L_14)->SetAt(static_cast<il2cpp_array_size_t>(L_15), (uint32_t)((int32_t)(uint32_t)L_16));
		int64_t L_17 = V_1;
		V_2 = ((int64_t)(L_17>>((int32_t)32)));
		int32_t L_18 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_18, 1));
	}

IL_0036:
	{
		int32_t L_19 = V_3;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_20 = ___0_left;
		NullCheck(L_20);
		if ((((int32_t)L_19) < ((int32_t)((int32_t)(((RuntimeArray*)L_20)->max_length)))))
		{
			goto IL_0021;
		}
	}
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_21 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_22 = ___0_left;
		NullCheck(L_22);
		int64_t L_23 = V_2;
		NullCheck(L_21);
		(L_21)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)(((RuntimeArray*)L_22)->max_length))), (uint32_t)((int32_t)(uint32_t)L_23));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_24 = V_0;
		return L_24;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* BigIntegerCalculator_Add_mE49BAD7CDF073CF2D2A2DEABCF11AEE5CC239298 (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___0_left, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___1_right, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigIntegerCalculator_tD707501FE6F3A13129CE42C8E75BF22C5301BE1F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* V_0 = NULL;
	uint32_t* V_1 = NULL;
	uint32_t* V_2 = NULL;
	uint32_t* V_3 = NULL;
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* V_4 = NULL;
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* V_5 = NULL;
	uint32_t* V_6 = NULL;
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0 = ___0_left;
		NullCheck(L_0);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_1 = (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)SZArrayNew(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_add(((int32_t)(((RuntimeArray*)L_0)->max_length)), 1)));
		V_0 = L_1;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_2 = ___0_left;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_3 = L_2;
		V_4 = L_3;
		if (!L_3)
		{
			goto IL_0017;
		}
	}
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_4 = V_4;
		NullCheck(L_4);
		if (((int32_t)(((RuntimeArray*)L_4)->max_length)))
		{
			goto IL_001c;
		}
	}

IL_0017:
	{
		V_1 = (uint32_t*)((uintptr_t)0);
		goto IL_0026;
	}

IL_001c:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_5 = V_4;
		NullCheck(L_5);
		V_1 = (uint32_t*)((uintptr_t)((L_5)->GetAddressAt(static_cast<il2cpp_array_size_t>(0))));
	}

IL_0026:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_6 = ___1_right;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_7 = L_6;
		V_5 = L_7;
		if (!L_7)
		{
			goto IL_0032;
		}
	}
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_8 = V_5;
		NullCheck(L_8);
		if (((int32_t)(((RuntimeArray*)L_8)->max_length)))
		{
			goto IL_0037;
		}
	}

IL_0032:
	{
		V_2 = (uint32_t*)((uintptr_t)0);
		goto IL_0041;
	}

IL_0037:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_9 = V_5;
		NullCheck(L_9);
		V_2 = (uint32_t*)((uintptr_t)((L_9)->GetAddressAt(static_cast<il2cpp_array_size_t>(0))));
	}

IL_0041:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_10 = V_0;
		NullCheck(L_10);
		V_6 = ((L_10)->GetAddressAt(static_cast<il2cpp_array_size_t>(0)));
		uint32_t* L_11 = V_6;
		V_3 = (uint32_t*)((uintptr_t)L_11);
		uint32_t* L_12 = V_1;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_13 = ___0_left;
		NullCheck(L_13);
		uint32_t* L_14 = V_2;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_15 = ___1_right;
		NullCheck(L_15);
		uint32_t* L_16 = V_3;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_17 = V_0;
		NullCheck(L_17);
		il2cpp_codegen_runtime_class_init_inline(BigIntegerCalculator_tD707501FE6F3A13129CE42C8E75BF22C5301BE1F_il2cpp_TypeInfo_var);
		BigIntegerCalculator_Add_m3CB52FDB28E32D96E1400C839ED8E7F51726A814(L_12, ((int32_t)(((RuntimeArray*)L_13)->max_length)), L_14, ((int32_t)(((RuntimeArray*)L_15)->max_length)), L_16, ((int32_t)(((RuntimeArray*)L_17)->max_length)), NULL);
		V_4 = (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)NULL;
		V_5 = (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)NULL;
		V_6 = (uint32_t*)((uintptr_t)0);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_18 = V_0;
		return L_18;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BigIntegerCalculator_Add_m3CB52FDB28E32D96E1400C839ED8E7F51726A814 (uint32_t* ___0_left, int32_t ___1_leftLength, uint32_t* ___2_right, int32_t ___3_rightLength, uint32_t* ___4_bits, int32_t ___5_bitsLength, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int64_t V_1 = 0;
	int64_t V_2 = 0;
	int64_t V_3 = 0;
	{
		V_0 = 0;
		V_1 = ((int64_t)0);
		goto IL_002e;
	}

IL_0007:
	{
		uint32_t* L_0 = ___0_left;
		int32_t L_1 = V_0;
		int32_t L_2 = *((uint32_t*)((uint32_t*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_1), 4)))));
		int64_t L_3 = V_1;
		uint32_t* L_4 = ___2_right;
		int32_t L_5 = V_0;
		int32_t L_6 = *((uint32_t*)((uint32_t*)il2cpp_codegen_add((intptr_t)L_4, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_5), 4)))));
		V_2 = ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)(uint64_t)((uint32_t)L_2)), L_3)), ((int64_t)(uint64_t)((uint32_t)L_6))));
		uint32_t* L_7 = ___4_bits;
		int32_t L_8 = V_0;
		int64_t L_9 = V_2;
		*((int32_t*)((uint32_t*)il2cpp_codegen_add((intptr_t)L_7, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_8), 4))))) = (int32_t)((int32_t)(uint32_t)L_9);
		int64_t L_10 = V_2;
		V_1 = ((int64_t)(L_10>>((int32_t)32)));
		int32_t L_11 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_002e:
	{
		int32_t L_12 = V_0;
		int32_t L_13 = ___3_rightLength;
		if ((((int32_t)L_12) < ((int32_t)L_13)))
		{
			goto IL_0007;
		}
	}
	{
		goto IL_0052;
	}

IL_0034:
	{
		uint32_t* L_14 = ___0_left;
		int32_t L_15 = V_0;
		int32_t L_16 = *((uint32_t*)((uint32_t*)il2cpp_codegen_add((intptr_t)L_14, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_15), 4)))));
		int64_t L_17 = V_1;
		V_3 = ((int64_t)il2cpp_codegen_add(((int64_t)(uint64_t)((uint32_t)L_16)), L_17));
		uint32_t* L_18 = ___4_bits;
		int32_t L_19 = V_0;
		int64_t L_20 = V_3;
		*((int32_t*)((uint32_t*)il2cpp_codegen_add((intptr_t)L_18, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_19), 4))))) = (int32_t)((int32_t)(uint32_t)L_20);
		int64_t L_21 = V_3;
		V_1 = ((int64_t)(L_21>>((int32_t)32)));
		int32_t L_22 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_22, 1));
	}

IL_0052:
	{
		int32_t L_23 = V_0;
		int32_t L_24 = ___1_leftLength;
		if ((((int32_t)L_23) < ((int32_t)L_24)))
		{
			goto IL_0034;
		}
	}
	{
		uint32_t* L_25 = ___4_bits;
		int32_t L_26 = V_0;
		int64_t L_27 = V_1;
		*((int32_t*)((uint32_t*)il2cpp_codegen_add((intptr_t)L_25, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_26), 4))))) = (int32_t)((int32_t)(uint32_t)L_27);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* BigIntegerCalculator_Subtract_mB336D562EA742D2092AFD220202FC15D9A2791A7 (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___0_left, uint32_t ___1_right, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* V_0 = NULL;
	int64_t V_1 = 0;
	int64_t V_2 = 0;
	int32_t V_3 = 0;
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0 = ___0_left;
		NullCheck(L_0);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_1 = (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)SZArrayNew(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var, (uint32_t)((int32_t)(((RuntimeArray*)L_0)->max_length)));
		V_0 = L_1;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_2 = ___0_left;
		NullCheck(L_2);
		int32_t L_3 = 0;
		uint32_t L_4 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		uint32_t L_5 = ___1_right;
		V_1 = ((int64_t)il2cpp_codegen_subtract(((int64_t)(uint64_t)L_4), ((int64_t)(uint64_t)L_5)));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_6 = V_0;
		int64_t L_7 = V_1;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint32_t)((int32_t)(uint32_t)L_7));
		int64_t L_8 = V_1;
		V_2 = ((int64_t)(L_8>>((int32_t)32)));
		V_3 = 1;
		goto IL_0034;
	}

IL_001f:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_9 = ___0_left;
		int32_t L_10 = V_3;
		NullCheck(L_9);
		int32_t L_11 = L_10;
		uint32_t L_12 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		int64_t L_13 = V_2;
		V_1 = ((int64_t)il2cpp_codegen_add(((int64_t)(uint64_t)L_12), L_13));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_14 = V_0;
		int32_t L_15 = V_3;
		int64_t L_16 = V_1;
		NullCheck(L_14);
		(L_14)->SetAt(static_cast<il2cpp_array_size_t>(L_15), (uint32_t)((int32_t)(uint32_t)L_16));
		int64_t L_17 = V_1;
		V_2 = ((int64_t)(L_17>>((int32_t)32)));
		int32_t L_18 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_18, 1));
	}

IL_0034:
	{
		int32_t L_19 = V_3;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_20 = ___0_left;
		NullCheck(L_20);
		if ((((int32_t)L_19) < ((int32_t)((int32_t)(((RuntimeArray*)L_20)->max_length)))))
		{
			goto IL_001f;
		}
	}
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_21 = V_0;
		return L_21;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* BigIntegerCalculator_Subtract_m8BFB5D1D8B089DA2BA5AC0EB0A45D98A6F6AC681 (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___0_left, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___1_right, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigIntegerCalculator_tD707501FE6F3A13129CE42C8E75BF22C5301BE1F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* V_0 = NULL;
	uint32_t* V_1 = NULL;
	uint32_t* V_2 = NULL;
	uint32_t* V_3 = NULL;
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* V_4 = NULL;
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* V_5 = NULL;
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* V_6 = NULL;
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0 = ___0_left;
		NullCheck(L_0);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_1 = (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)SZArrayNew(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var, (uint32_t)((int32_t)(((RuntimeArray*)L_0)->max_length)));
		V_0 = L_1;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_2 = ___0_left;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_3 = L_2;
		V_4 = L_3;
		if (!L_3)
		{
			goto IL_0015;
		}
	}
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_4 = V_4;
		NullCheck(L_4);
		if (((int32_t)(((RuntimeArray*)L_4)->max_length)))
		{
			goto IL_001a;
		}
	}

IL_0015:
	{
		V_1 = (uint32_t*)((uintptr_t)0);
		goto IL_0024;
	}

IL_001a:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_5 = V_4;
		NullCheck(L_5);
		V_1 = (uint32_t*)((uintptr_t)((L_5)->GetAddressAt(static_cast<il2cpp_array_size_t>(0))));
	}

IL_0024:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_6 = ___1_right;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_7 = L_6;
		V_5 = L_7;
		if (!L_7)
		{
			goto IL_0030;
		}
	}
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_8 = V_5;
		NullCheck(L_8);
		if (((int32_t)(((RuntimeArray*)L_8)->max_length)))
		{
			goto IL_0035;
		}
	}

IL_0030:
	{
		V_2 = (uint32_t*)((uintptr_t)0);
		goto IL_003f;
	}

IL_0035:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_9 = V_5;
		NullCheck(L_9);
		V_2 = (uint32_t*)((uintptr_t)((L_9)->GetAddressAt(static_cast<il2cpp_array_size_t>(0))));
	}

IL_003f:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_10 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_11 = L_10;
		V_6 = L_11;
		if (!L_11)
		{
			goto IL_004b;
		}
	}
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_12 = V_6;
		NullCheck(L_12);
		if (((int32_t)(((RuntimeArray*)L_12)->max_length)))
		{
			goto IL_0050;
		}
	}

IL_004b:
	{
		V_3 = (uint32_t*)((uintptr_t)0);
		goto IL_005a;
	}

IL_0050:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_13 = V_6;
		NullCheck(L_13);
		V_3 = (uint32_t*)((uintptr_t)((L_13)->GetAddressAt(static_cast<il2cpp_array_size_t>(0))));
	}

IL_005a:
	{
		uint32_t* L_14 = V_1;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_15 = ___0_left;
		NullCheck(L_15);
		uint32_t* L_16 = V_2;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_17 = ___1_right;
		NullCheck(L_17);
		uint32_t* L_18 = V_3;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_19 = V_0;
		NullCheck(L_19);
		il2cpp_codegen_runtime_class_init_inline(BigIntegerCalculator_tD707501FE6F3A13129CE42C8E75BF22C5301BE1F_il2cpp_TypeInfo_var);
		BigIntegerCalculator_Subtract_mAD5DABE3E13103E8ADCBDA013BC874F17839AC45(L_14, ((int32_t)(((RuntimeArray*)L_15)->max_length)), L_16, ((int32_t)(((RuntimeArray*)L_17)->max_length)), L_18, ((int32_t)(((RuntimeArray*)L_19)->max_length)), NULL);
		V_4 = (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)NULL;
		V_5 = (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)NULL;
		V_6 = (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)NULL;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_20 = V_0;
		return L_20;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BigIntegerCalculator_Subtract_mAD5DABE3E13103E8ADCBDA013BC874F17839AC45 (uint32_t* ___0_left, int32_t ___1_leftLength, uint32_t* ___2_right, int32_t ___3_rightLength, uint32_t* ___4_bits, int32_t ___5_bitsLength, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int64_t V_1 = 0;
	int64_t V_2 = 0;
	int64_t V_3 = 0;
	{
		V_0 = 0;
		V_1 = ((int64_t)0);
		goto IL_002e;
	}

IL_0007:
	{
		uint32_t* L_0 = ___0_left;
		int32_t L_1 = V_0;
		int32_t L_2 = *((uint32_t*)((uint32_t*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_1), 4)))));
		int64_t L_3 = V_1;
		uint32_t* L_4 = ___2_right;
		int32_t L_5 = V_0;
		int32_t L_6 = *((uint32_t*)((uint32_t*)il2cpp_codegen_add((intptr_t)L_4, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_5), 4)))));
		V_2 = ((int64_t)il2cpp_codegen_subtract(((int64_t)il2cpp_codegen_add(((int64_t)(uint64_t)((uint32_t)L_2)), L_3)), ((int64_t)(uint64_t)((uint32_t)L_6))));
		uint32_t* L_7 = ___4_bits;
		int32_t L_8 = V_0;
		int64_t L_9 = V_2;
		*((int32_t*)((uint32_t*)il2cpp_codegen_add((intptr_t)L_7, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_8), 4))))) = (int32_t)((int32_t)(uint32_t)L_9);
		int64_t L_10 = V_2;
		V_1 = ((int64_t)(L_10>>((int32_t)32)));
		int32_t L_11 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_002e:
	{
		int32_t L_12 = V_0;
		int32_t L_13 = ___3_rightLength;
		if ((((int32_t)L_12) < ((int32_t)L_13)))
		{
			goto IL_0007;
		}
	}
	{
		goto IL_0052;
	}

IL_0034:
	{
		uint32_t* L_14 = ___0_left;
		int32_t L_15 = V_0;
		int32_t L_16 = *((uint32_t*)((uint32_t*)il2cpp_codegen_add((intptr_t)L_14, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_15), 4)))));
		int64_t L_17 = V_1;
		V_3 = ((int64_t)il2cpp_codegen_add(((int64_t)(uint64_t)((uint32_t)L_16)), L_17));
		uint32_t* L_18 = ___4_bits;
		int32_t L_19 = V_0;
		int64_t L_20 = V_3;
		*((int32_t*)((uint32_t*)il2cpp_codegen_add((intptr_t)L_18, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_19), 4))))) = (int32_t)((int32_t)(uint32_t)L_20);
		int64_t L_21 = V_3;
		V_1 = ((int64_t)(L_21>>((int32_t)32)));
		int32_t L_22 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_22, 1));
	}

IL_0052:
	{
		int32_t L_23 = V_0;
		int32_t L_24 = ___1_leftLength;
		if ((((int32_t)L_23) < ((int32_t)L_24)))
		{
			goto IL_0034;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BigIntegerCalculator_Compare_mD61B527BE1032F19B97519458C7AEAD60CBB8774 (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___0_left, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___1_right, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0 = ___0_left;
		NullCheck(L_0);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_1 = ___1_right;
		NullCheck(L_1);
		if ((((int32_t)((int32_t)(((RuntimeArray*)L_0)->max_length))) >= ((int32_t)((int32_t)(((RuntimeArray*)L_1)->max_length)))))
		{
			goto IL_000a;
		}
	}
	{
		return (-1);
	}

IL_000a:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_2 = ___0_left;
		NullCheck(L_2);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_3 = ___1_right;
		NullCheck(L_3);
		if ((((int32_t)((int32_t)(((RuntimeArray*)L_2)->max_length))) <= ((int32_t)((int32_t)(((RuntimeArray*)L_3)->max_length)))))
		{
			goto IL_0014;
		}
	}
	{
		return 1;
	}

IL_0014:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_4 = ___0_left;
		NullCheck(L_4);
		V_0 = ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_4)->max_length)), 1));
		goto IL_0034;
	}

IL_001c:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_5 = ___0_left;
		int32_t L_6 = V_0;
		NullCheck(L_5);
		int32_t L_7 = L_6;
		uint32_t L_8 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_9 = ___1_right;
		int32_t L_10 = V_0;
		NullCheck(L_9);
		int32_t L_11 = L_10;
		uint32_t L_12 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		if ((!(((uint32_t)L_8) < ((uint32_t)L_12))))
		{
			goto IL_0026;
		}
	}
	{
		return (-1);
	}

IL_0026:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_13 = ___0_left;
		int32_t L_14 = V_0;
		NullCheck(L_13);
		int32_t L_15 = L_14;
		uint32_t L_16 = (L_13)->GetAt(static_cast<il2cpp_array_size_t>(L_15));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_17 = ___1_right;
		int32_t L_18 = V_0;
		NullCheck(L_17);
		int32_t L_19 = L_18;
		uint32_t L_20 = (L_17)->GetAt(static_cast<il2cpp_array_size_t>(L_19));
		if ((!(((uint32_t)L_16) > ((uint32_t)L_20))))
		{
			goto IL_0030;
		}
	}
	{
		return 1;
	}

IL_0030:
	{
		int32_t L_21 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_21, 1));
	}

IL_0034:
	{
		int32_t L_22 = V_0;
		if ((((int32_t)L_22) >= ((int32_t)0)))
		{
			goto IL_001c;
		}
	}
	{
		return 0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BigIntegerCalculator__cctor_mB0C09E685F08931052AF8D95CEDCCFD3D914D03B (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigIntegerCalculator_tD707501FE6F3A13129CE42C8E75BF22C5301BE1F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		((BigIntegerCalculator_tD707501FE6F3A13129CE42C8E75BF22C5301BE1F_StaticFields*)il2cpp_codegen_static_fields_for(BigIntegerCalculator_tD707501FE6F3A13129CE42C8E75BF22C5301BE1F_il2cpp_TypeInfo_var))->___ReducerThreshold_0 = ((int32_t)32);
		((BigIntegerCalculator_tD707501FE6F3A13129CE42C8E75BF22C5301BE1F_StaticFields*)il2cpp_codegen_static_fields_for(BigIntegerCalculator_tD707501FE6F3A13129CE42C8E75BF22C5301BE1F_il2cpp_TypeInfo_var))->___SquareThreshold_1 = ((int32_t)32);
		((BigIntegerCalculator_tD707501FE6F3A13129CE42C8E75BF22C5301BE1F_StaticFields*)il2cpp_codegen_static_fields_for(BigIntegerCalculator_tD707501FE6F3A13129CE42C8E75BF22C5301BE1F_il2cpp_TypeInfo_var))->___AllocationThreshold_2 = ((int32_t)256);
		((BigIntegerCalculator_tD707501FE6F3A13129CE42C8E75BF22C5301BE1F_StaticFields*)il2cpp_codegen_static_fields_for(BigIntegerCalculator_tD707501FE6F3A13129CE42C8E75BF22C5301BE1F_il2cpp_TypeInfo_var))->___MultiplyThreshold_3 = ((int32_t)32);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar BigNumber_ParseFormatSpecifier_m642DCFB18345FAC78777645E487EE8279BA17073 (ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 ___0_format, int32_t* ___1_digits, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1_get_Length_m36BD32453530B535FE60A8123643219FEAABC351_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Il2CppChar V_1 = 0x0;
	int32_t V_2 = 0;
	{
		int32_t* L_0 = ___1_digits;
		*((int32_t*)L_0) = (int32_t)(-1);
		int32_t L_1;
		L_1 = ReadOnlySpan_1_get_Length_m36BD32453530B535FE60A8123643219FEAABC351_inline((&___0_format), ReadOnlySpan_1_get_Length_m36BD32453530B535FE60A8123643219FEAABC351_RuntimeMethod_var);
		if (L_1)
		{
			goto IL_000f;
		}
	}
	{
		return ((int32_t)82);
	}

IL_000f:
	{
		V_0 = 0;
		int32_t L_2 = V_0;
		Il2CppChar* L_3;
		L_3 = il2cpp_span_get_item((Il2CppChar*)((Il2CppByReference*)&(((&___0_format))->____pointer_0))->value, (L_2), ((&___0_format))->____length_1);
		int32_t L_4 = *((uint16_t*)L_3);
		V_1 = L_4;
		Il2CppChar L_5 = V_1;
		if ((((int32_t)L_5) < ((int32_t)((int32_t)65))))
		{
			goto IL_0025;
		}
	}
	{
		Il2CppChar L_6 = V_1;
		if ((((int32_t)L_6) <= ((int32_t)((int32_t)90))))
		{
			goto IL_0035;
		}
	}

IL_0025:
	{
		Il2CppChar L_7 = V_1;
		if ((((int32_t)L_7) < ((int32_t)((int32_t)97))))
		{
			goto IL_00cb;
		}
	}
	{
		Il2CppChar L_8 = V_1;
		if ((((int32_t)L_8) > ((int32_t)((int32_t)122))))
		{
			goto IL_00cb;
		}
	}

IL_0035:
	{
		int32_t L_9 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_9, 1));
		V_2 = (-1);
		int32_t L_10 = V_0;
		int32_t L_11;
		L_11 = ReadOnlySpan_1_get_Length_m36BD32453530B535FE60A8123643219FEAABC351_inline((&___0_format), ReadOnlySpan_1_get_Length_m36BD32453530B535FE60A8123643219FEAABC351_RuntimeMethod_var);
		if ((((int32_t)L_10) >= ((int32_t)L_11)))
		{
			goto IL_00b1;
		}
	}
	{
		int32_t L_12 = V_0;
		Il2CppChar* L_13;
		L_13 = il2cpp_span_get_item((Il2CppChar*)((Il2CppByReference*)&(((&___0_format))->____pointer_0))->value, (L_12), ((&___0_format))->____length_1);
		int32_t L_14 = *((uint16_t*)L_13);
		if ((((int32_t)L_14) < ((int32_t)((int32_t)48))))
		{
			goto IL_00b1;
		}
	}
	{
		int32_t L_15 = V_0;
		Il2CppChar* L_16;
		L_16 = il2cpp_span_get_item((Il2CppChar*)((Il2CppByReference*)&(((&___0_format))->____pointer_0))->value, (L_15), ((&___0_format))->____length_1);
		int32_t L_17 = *((uint16_t*)L_16);
		if ((((int32_t)L_17) > ((int32_t)((int32_t)57))))
		{
			goto IL_00b1;
		}
	}
	{
		int32_t L_18 = V_0;
		int32_t L_19 = L_18;
		V_0 = ((int32_t)il2cpp_codegen_add(L_19, 1));
		Il2CppChar* L_20;
		L_20 = il2cpp_span_get_item((Il2CppChar*)((Il2CppByReference*)&(((&___0_format))->____pointer_0))->value, (L_19), ((&___0_format))->____length_1);
		int32_t L_21 = *((uint16_t*)L_20);
		V_2 = ((int32_t)il2cpp_codegen_subtract(L_21, ((int32_t)48)));
		goto IL_008d;
	}

IL_0072:
	{
		int32_t L_22 = V_2;
		int32_t L_23 = V_0;
		int32_t L_24 = L_23;
		V_0 = ((int32_t)il2cpp_codegen_add(L_24, 1));
		Il2CppChar* L_25;
		L_25 = il2cpp_span_get_item((Il2CppChar*)((Il2CppByReference*)&(((&___0_format))->____pointer_0))->value, (L_24), ((&___0_format))->____length_1);
		int32_t L_26 = *((uint16_t*)L_25);
		V_2 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_22, ((int32_t)10))), ((int32_t)il2cpp_codegen_subtract(L_26, ((int32_t)48)))));
		int32_t L_27 = V_2;
		if ((((int32_t)L_27) >= ((int32_t)((int32_t)10))))
		{
			goto IL_00b1;
		}
	}

IL_008d:
	{
		int32_t L_28 = V_0;
		int32_t L_29;
		L_29 = ReadOnlySpan_1_get_Length_m36BD32453530B535FE60A8123643219FEAABC351_inline((&___0_format), ReadOnlySpan_1_get_Length_m36BD32453530B535FE60A8123643219FEAABC351_RuntimeMethod_var);
		if ((((int32_t)L_28) >= ((int32_t)L_29)))
		{
			goto IL_00b1;
		}
	}
	{
		int32_t L_30 = V_0;
		Il2CppChar* L_31;
		L_31 = il2cpp_span_get_item((Il2CppChar*)((Il2CppByReference*)&(((&___0_format))->____pointer_0))->value, (L_30), ((&___0_format))->____length_1);
		int32_t L_32 = *((uint16_t*)L_31);
		if ((((int32_t)L_32) < ((int32_t)((int32_t)48))))
		{
			goto IL_00b1;
		}
	}
	{
		int32_t L_33 = V_0;
		Il2CppChar* L_34;
		L_34 = il2cpp_span_get_item((Il2CppChar*)((Il2CppByReference*)&(((&___0_format))->____pointer_0))->value, (L_33), ((&___0_format))->____length_1);
		int32_t L_35 = *((uint16_t*)L_34);
		if ((((int32_t)L_35) <= ((int32_t)((int32_t)57))))
		{
			goto IL_0072;
		}
	}

IL_00b1:
	{
		int32_t L_36 = V_0;
		int32_t L_37;
		L_37 = ReadOnlySpan_1_get_Length_m36BD32453530B535FE60A8123643219FEAABC351_inline((&___0_format), ReadOnlySpan_1_get_Length_m36BD32453530B535FE60A8123643219FEAABC351_RuntimeMethod_var);
		if ((((int32_t)L_36) >= ((int32_t)L_37)))
		{
			goto IL_00c6;
		}
	}
	{
		int32_t L_38 = V_0;
		Il2CppChar* L_39;
		L_39 = il2cpp_span_get_item((Il2CppChar*)((Il2CppByReference*)&(((&___0_format))->____pointer_0))->value, (L_38), ((&___0_format))->____length_1);
		int32_t L_40 = *((uint16_t*)L_39);
		if (L_40)
		{
			goto IL_00cb;
		}
	}

IL_00c6:
	{
		int32_t* L_41 = ___1_digits;
		int32_t L_42 = V_2;
		*((int32_t*)L_41) = (int32_t)L_42;
		Il2CppChar L_43 = V_1;
		return L_43;
	}

IL_00cb:
	{
		return 0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* BigNumber_FormatBigIntegerToHex_m5BD805D186861A2FDE1CB6D7C8BF730B78B251BE (bool ___0_targetSpan, BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F ___1_value, Il2CppChar ___2_format, int32_t ___3_digits, NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* ___4_info, Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D ___5_destination, int32_t* ___6_charsWritten, bool* ___7_spanSuccess, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArrayPool_1_get_Shared_m59AE954C801963CBE5E506D9378429032D161C97_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArrayPool_1_t645A9854926DCA747C654687A362AD03D55D2C07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_Slice_m9D8BA8245B8DC9BFB4A4164759CBAAEAD1318CD6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1__ctor_m835590E344B05AF6AF00A78E92C4175BD781A3D2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1__ctor_mE18EBB601FBFA01BA29FE353364700952A9091FE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_get_Length_m8E944E4954E037877A25B9FF6B901F1F901D4769_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_op_Implicit_m8619157C8809464A173FF531960A75A0ACE2CE91_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral59F5BD34B6C013DEACC784F69C67E95150033A84);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC02C28AFEBE998F767E4AF43E3BE8F5E9FA11536);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D V_3;
	memset((&V_3), 0, sizeof(V_3));
	ValueStringBuilder_tEBD54C46E3AF8527BD0D234124F5C1AC14E9E251 V_4;
	memset((&V_4), 0, sizeof(V_4));
	int32_t V_5 = 0;
	bool V_6 = false;
	uint8_t V_7 = 0x0;
	Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D V_8;
	memset((&V_8), 0, sizeof(V_8));
	int32_t V_9 = 0;
	String_t* V_10 = NULL;
	uint8_t V_11 = 0x0;
	ValueStringBuilder_tEBD54C46E3AF8527BD0D234124F5C1AC14E9E251* G_B10_0 = NULL;
	ValueStringBuilder_tEBD54C46E3AF8527BD0D234124F5C1AC14E9E251* G_B7_0 = NULL;
	ValueStringBuilder_tEBD54C46E3AF8527BD0D234124F5C1AC14E9E251* G_B9_0 = NULL;
	ValueStringBuilder_tEBD54C46E3AF8527BD0D234124F5C1AC14E9E251* G_B8_0 = NULL;
	int32_t G_B11_0 = 0;
	ValueStringBuilder_tEBD54C46E3AF8527BD0D234124F5C1AC14E9E251* G_B11_1 = NULL;
	String_t* G_B16_0 = NULL;
	int32_t G_B24_0 = 0;
	ValueStringBuilder_tEBD54C46E3AF8527BD0D234124F5C1AC14E9E251* G_B24_1 = NULL;
	int32_t G_B21_0 = 0;
	ValueStringBuilder_tEBD54C46E3AF8527BD0D234124F5C1AC14E9E251* G_B21_1 = NULL;
	int32_t G_B23_0 = 0;
	ValueStringBuilder_tEBD54C46E3AF8527BD0D234124F5C1AC14E9E251* G_B23_1 = NULL;
	int32_t G_B22_0 = 0;
	ValueStringBuilder_tEBD54C46E3AF8527BD0D234124F5C1AC14E9E251* G_B22_1 = NULL;
	int32_t G_B25_0 = 0;
	int32_t G_B25_1 = 0;
	ValueStringBuilder_tEBD54C46E3AF8527BD0D234124F5C1AC14E9E251* G_B25_2 = NULL;
	{
		V_0 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)NULL;
		uintptr_t L_0 = ((uintptr_t)((int32_t)64));
		int8_t* L_1 = (int8_t*) (L_0 ? alloca(L_0) : NULL);
		memset(L_1, 0, L_0);
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_2;
		memset((&L_2), 0, sizeof(L_2));
		Span_1__ctor_mE18EBB601FBFA01BA29FE353364700952A9091FE_inline((&L_2), (void*)(L_1), ((int32_t)64), Span_1__ctor_mE18EBB601FBFA01BA29FE353364700952A9091FE_RuntimeMethod_var);
		V_1 = L_2;
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_3 = V_1;
		bool L_4;
		L_4 = BigInteger_TryWriteOrCountBytes_mB22B053CE50BA54DF99F85EEAE05CA7ABDEF6441((&___1_value), L_3, (&V_2), (bool)0, (bool)0, NULL);
		if (L_4)
		{
			goto IL_003d;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(ArrayPool_1_t645A9854926DCA747C654687A362AD03D55D2C07_il2cpp_TypeInfo_var);
		ArrayPool_1_t645A9854926DCA747C654687A362AD03D55D2C07* L_5;
		L_5 = ArrayPool_1_get_Shared_m59AE954C801963CBE5E506D9378429032D161C97_inline(ArrayPool_1_get_Shared_m59AE954C801963CBE5E506D9378429032D161C97_RuntimeMethod_var);
		int32_t L_6 = V_2;
		NullCheck(L_5);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7;
		L_7 = VirtualFuncInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t >::Invoke(4, L_5, L_6);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = L_7;
		V_0 = L_8;
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_9;
		L_9 = Span_1_op_Implicit_m8619157C8809464A173FF531960A75A0ACE2CE91(L_8, Span_1_op_Implicit_m8619157C8809464A173FF531960A75A0ACE2CE91_RuntimeMethod_var);
		V_1 = L_9;
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_10 = V_1;
		bool L_11;
		L_11 = BigInteger_TryWriteBytes_m4B86F875CA1C01790FE20D1A689DCA41D22326C0((&___1_value), L_10, (&V_2), (bool)0, (bool)0, NULL);
	}

IL_003d:
	{
		int32_t L_12 = V_2;
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_13;
		L_13 = Span_1_Slice_m9D8BA8245B8DC9BFB4A4164759CBAAEAD1318CD6_inline((&V_1), 0, L_12, Span_1_Slice_m9D8BA8245B8DC9BFB4A4164759CBAAEAD1318CD6_RuntimeMethod_var);
		V_1 = L_13;
		uintptr_t L_14 = ((uintptr_t)((int32_t)256));
		int8_t* L_15 = (int8_t*) (L_14 ? alloca(L_14) : NULL);
		memset(L_15, 0, L_14);
		Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D L_16;
		memset((&L_16), 0, sizeof(L_16));
		Span_1__ctor_m835590E344B05AF6AF00A78E92C4175BD781A3D2_inline((&L_16), (void*)(L_15), ((int32_t)128), Span_1__ctor_m835590E344B05AF6AF00A78E92C4175BD781A3D2_RuntimeMethod_var);
		V_3 = L_16;
		Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D L_17 = V_3;
		ValueStringBuilder__ctor_m0660F060D846CA37202B1BEEE35D26DAC2B6AFF6((&V_4), L_17, NULL);
		int32_t L_18;
		L_18 = Span_1_get_Length_m8E944E4954E037877A25B9FF6B901F1F901D4769_inline((&V_1), Span_1_get_Length_m8E944E4954E037877A25B9FF6B901F1F901D4769_RuntimeMethod_var);
		V_5 = ((int32_t)il2cpp_codegen_subtract(L_18, 1));
		int32_t L_19 = V_5;
		if ((((int32_t)L_19) <= ((int32_t)(-1))))
		{
			goto IL_00dc;
		}
	}
	{
		V_6 = (bool)0;
		int32_t L_20 = V_5;
		uint8_t* L_21;
		L_21 = il2cpp_span_get_item((uint8_t*)((Il2CppByReference*)&(((&V_1))->____pointer_0))->value, (L_20), ((&V_1))->____length_1);
		int32_t L_22 = *((uint8_t*)L_21);
		V_7 = (uint8_t)L_22;
		uint8_t L_23 = V_7;
		if ((((int32_t)L_23) <= ((int32_t)((int32_t)247))))
		{
			goto IL_0098;
		}
	}
	{
		uint8_t L_24 = V_7;
		V_7 = (uint8_t)((int32_t)(uint8_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_24, ((int32_t)240))));
		V_6 = (bool)1;
	}

IL_0098:
	{
		uint8_t L_25 = V_7;
		bool L_26 = V_6;
		if (!((int32_t)(((((int32_t)L_25) < ((int32_t)8))? 1 : 0)|(int32_t)L_26)))
		{
			goto IL_00dc;
		}
	}
	{
		uint8_t L_27 = V_7;
		if ((((int32_t)L_27) < ((int32_t)((int32_t)10))))
		{
			G_B10_0 = (&V_4);
			goto IL_00cb;
		}
		G_B7_0 = (&V_4);
	}
	{
		Il2CppChar L_28 = ___2_format;
		if ((((int32_t)L_28) == ((int32_t)((int32_t)88))))
		{
			G_B9_0 = G_B7_0;
			goto IL_00bd;
		}
		G_B8_0 = G_B7_0;
	}
	{
		uint8_t L_29 = V_7;
		G_B11_0 = ((int32_t)(uint16_t)((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_subtract(((int32_t)((int32_t)L_29&((int32_t)15))), ((int32_t)10))), ((int32_t)97))));
		G_B11_1 = G_B8_0;
		goto IL_00d1;
	}

IL_00bd:
	{
		uint8_t L_30 = V_7;
		G_B11_0 = ((int32_t)(uint16_t)((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_subtract(((int32_t)((int32_t)L_30&((int32_t)15))), ((int32_t)10))), ((int32_t)65))));
		G_B11_1 = G_B9_0;
		goto IL_00d1;
	}

IL_00cb:
	{
		uint8_t L_31 = V_7;
		G_B11_0 = ((int32_t)(uint16_t)((int32_t)il2cpp_codegen_add((int32_t)L_31, ((int32_t)48))));
		G_B11_1 = G_B10_0;
	}

IL_00d1:
	{
		ValueStringBuilder_Append_mBB79BFE6EAB412D689B7D6675A6E0BC3F6FCDFCC_inline(G_B11_1, G_B11_0, NULL);
		int32_t L_32 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_subtract(L_32, 1));
	}

IL_00dc:
	{
		int32_t L_33 = V_5;
		if ((((int32_t)L_33) <= ((int32_t)(-1))))
		{
			goto IL_0153;
		}
	}
	{
		int32_t L_34 = V_5;
		Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D L_35;
		L_35 = ValueStringBuilder_AppendSpan_m0D80091AA43B5BD4944DCD4D8729310FEAF11382_inline((&V_4), ((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_add(L_34, 1)), 2)), NULL);
		V_8 = L_35;
		V_9 = 0;
		Il2CppChar L_36 = ___2_format;
		if ((((int32_t)L_36) == ((int32_t)((int32_t)120))))
		{
			goto IL_00ff;
		}
	}
	{
		G_B16_0 = _stringLiteral59F5BD34B6C013DEACC784F69C67E95150033A84;
		goto IL_0104;
	}

IL_00ff:
	{
		G_B16_0 = _stringLiteralC02C28AFEBE998F767E4AF43E3BE8F5E9FA11536;
	}

IL_0104:
	{
		V_10 = G_B16_0;
		goto IL_014e;
	}

IL_0108:
	{
		int32_t L_37 = V_5;
		int32_t L_38 = L_37;
		V_5 = ((int32_t)il2cpp_codegen_subtract(L_38, 1));
		uint8_t* L_39;
		L_39 = il2cpp_span_get_item((uint8_t*)((Il2CppByReference*)&(((&V_1))->____pointer_0))->value, (L_38), ((&V_1))->____length_1);
		int32_t L_40 = *((uint8_t*)L_39);
		V_11 = (uint8_t)L_40;
		int32_t L_41 = V_9;
		int32_t L_42 = L_41;
		V_9 = ((int32_t)il2cpp_codegen_add(L_42, 1));
		Il2CppChar* L_43;
		L_43 = il2cpp_span_get_item((Il2CppChar*)((Il2CppByReference*)&(((&V_8))->____pointer_0))->value, (L_42), ((&V_8))->____length_1);
		String_t* L_44 = V_10;
		uint8_t L_45 = V_11;
		NullCheck(L_44);
		Il2CppChar L_46;
		L_46 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_44, ((int32_t)((int32_t)L_45>>4)), NULL);
		*((int16_t*)L_43) = (int16_t)L_46;
		int32_t L_47 = V_9;
		int32_t L_48 = L_47;
		V_9 = ((int32_t)il2cpp_codegen_add(L_48, 1));
		Il2CppChar* L_49;
		L_49 = il2cpp_span_get_item((Il2CppChar*)((Il2CppByReference*)&(((&V_8))->____pointer_0))->value, (L_48), ((&V_8))->____length_1);
		String_t* L_50 = V_10;
		uint8_t L_51 = V_11;
		NullCheck(L_50);
		Il2CppChar L_52;
		L_52 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_50, ((int32_t)((int32_t)L_51&((int32_t)15))), NULL);
		*((int16_t*)L_49) = (int16_t)L_52;
	}

IL_014e:
	{
		int32_t L_53 = V_5;
		if ((((int32_t)L_53) > ((int32_t)(-1))))
		{
			goto IL_0108;
		}
	}

IL_0153:
	{
		int32_t L_54 = ___3_digits;
		int32_t L_55;
		L_55 = ValueStringBuilder_get_Length_m5D0F5925DA1601B18CF1ADC62D8750F955DC3F6B_inline((&V_4), NULL);
		if ((((int32_t)L_54) <= ((int32_t)L_55)))
		{
			goto IL_0186;
		}
	}
	{
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_56 = ___1_value;
		int32_t L_57 = L_56.____sign_0;
		if ((((int32_t)L_57) >= ((int32_t)0)))
		{
			G_B24_0 = 0;
			G_B24_1 = (&V_4);
			goto IL_0176;
		}
		G_B21_0 = 0;
		G_B21_1 = (&V_4);
	}
	{
		Il2CppChar L_58 = ___2_format;
		if ((((int32_t)L_58) == ((int32_t)((int32_t)120))))
		{
			G_B23_0 = G_B21_0;
			G_B23_1 = G_B21_1;
			goto IL_0172;
		}
		G_B22_0 = G_B21_0;
		G_B22_1 = G_B21_1;
	}
	{
		G_B25_0 = ((int32_t)70);
		G_B25_1 = G_B22_0;
		G_B25_2 = G_B22_1;
		goto IL_0178;
	}

IL_0172:
	{
		G_B25_0 = ((int32_t)102);
		G_B25_1 = G_B23_0;
		G_B25_2 = G_B23_1;
		goto IL_0178;
	}

IL_0176:
	{
		G_B25_0 = ((int32_t)48);
		G_B25_1 = G_B24_0;
		G_B25_2 = G_B24_1;
	}

IL_0178:
	{
		int32_t L_59 = ___3_digits;
		int32_t L_60;
		L_60 = ValueStringBuilder_get_Length_m5D0F5925DA1601B18CF1ADC62D8750F955DC3F6B_inline((&V_4), NULL);
		ValueStringBuilder_Insert_m658B685FEAD8D7A9935D2720FAAAB05382942E2C(G_B25_2, G_B25_1, G_B25_0, ((int32_t)il2cpp_codegen_subtract(L_59, L_60)), NULL);
	}

IL_0186:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_61 = V_0;
		if (!L_61)
		{
			goto IL_0195;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(ArrayPool_1_t645A9854926DCA747C654687A362AD03D55D2C07_il2cpp_TypeInfo_var);
		ArrayPool_1_t645A9854926DCA747C654687A362AD03D55D2C07* L_62;
		L_62 = ArrayPool_1_get_Shared_m59AE954C801963CBE5E506D9378429032D161C97_inline(ArrayPool_1_get_Shared_m59AE954C801963CBE5E506D9378429032D161C97_RuntimeMethod_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_63 = V_0;
		NullCheck(L_62);
		VirtualActionInvoker2< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, bool >::Invoke(5, L_62, L_63, (bool)0);
	}

IL_0195:
	{
		bool L_64 = ___0_targetSpan;
		if (!L_64)
		{
			goto IL_01a8;
		}
	}
	{
		bool* L_65 = ___7_spanSuccess;
		Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D L_66 = ___5_destination;
		int32_t* L_67 = ___6_charsWritten;
		bool L_68;
		L_68 = ValueStringBuilder_TryCopyTo_m1ADDDEC065D0CCAB6A61D871D7272522B95F801E((&V_4), L_66, L_67, NULL);
		*((int8_t*)L_65) = (int8_t)L_68;
		return (String_t*)NULL;
	}

IL_01a8:
	{
		int32_t* L_69 = ___6_charsWritten;
		*((int32_t*)L_69) = (int32_t)0;
		bool* L_70 = ___7_spanSuccess;
		*((int8_t*)L_70) = (int8_t)0;
		String_t* L_71;
		L_71 = ValueStringBuilder_ToString_mAB4C26796468880783F57E543C5102DE83C10BCE((&V_4), NULL);
		return L_71;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* BigNumber_FormatBigInteger_m1C6793BBD747BBC3E729A18FDAF8A5C814C80DC4 (BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F ___0_value, String_t* ___1_format, NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* ___2_info, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	bool V_1 = false;
	Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_0 = ___0_value;
		String_t* L_1 = ___1_format;
		String_t* L_2 = ___1_format;
		ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 L_3;
		L_3 = String_op_Implicit_m7D7FE0449303AF92D8B2A85A06ADC6933B2ECC3A_inline(L_2, NULL);
		NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* L_4 = ___2_info;
		il2cpp_codegen_initobj((&V_2), sizeof(Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D));
		Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D L_5 = V_2;
		String_t* L_6;
		L_6 = BigNumber_FormatBigInteger_m626A9168DC2BBB348E31E47313E83D88263747AA((bool)0, L_0, L_1, L_3, L_4, L_5, (&V_0), (&V_1), NULL);
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* BigNumber_FormatBigInteger_m626A9168DC2BBB348E31E47313E83D88263747AA (bool ___0_targetSpan, BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F ___1_value, String_t* ___2_formatString, ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 ___3_formatSpan, NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* ___4_info, Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D ___5_destination, int32_t* ___6_charsWritten, bool* ___7_spanSuccess, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigNumber_FormatBigInteger_m626A9168DC2BBB348E31E47313E83D88263747AA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1_TryCopyTo_m22E885FE905F1306DDE8000F155109F7F4987666_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1__ctor_mDADE08E6B4594775C6675B389078E5FE98C745D5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1__ctor_m835590E344B05AF6AF00A78E92C4175BD781A3D2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA019FB7F17AA36A9743C530E1F11D5613B8B1158);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralED07F219A0721B30764C92E705CC226FA5B25955);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Il2CppChar V_1 = 0x0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* V_4 = NULL;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	bool V_7 = false;
	int32_t V_8 = 0;
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* V_9 = NULL;
	int32_t V_10 = 0;
	int32_t V_11 = 0;
	int32_t V_12 = 0;
	OverflowException_t6F6AD8CACE20C37F701C05B373A215C4802FAB0C* V_13 = NULL;
	int32_t V_14 = 0;
	uint32_t V_15 = 0;
	int32_t V_16 = 0;
	uint64_t V_17 = 0;
	OverflowException_t6F6AD8CACE20C37F701C05B373A215C4802FAB0C* V_18 = NULL;
	OverflowException_t6F6AD8CACE20C37F701C05B373A215C4802FAB0C* V_19 = NULL;
	OverflowException_t6F6AD8CACE20C37F701C05B373A215C4802FAB0C* V_20 = NULL;
	int32_t V_21 = 0;
	uint32_t V_22 = 0;
	int32_t V_23 = 0;
	uint32_t V_24 = 0;
	bool V_25 = false;
	int32_t V_26 = 0;
	int32_t V_27 = 0;
	Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D V_28;
	memset((&V_28), 0, sizeof(V_28));
	ValueStringBuilder_tEBD54C46E3AF8527BD0D234124F5C1AC14E9E251 V_29;
	memset((&V_29), 0, sizeof(V_29));
	int32_t V_30 = 0;
	ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 V_31;
	memset((&V_31), 0, sizeof(V_31));
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	String_t* G_B11_0 = NULL;
	int32_t G_B36_0 = 0;
	{
		V_0 = 0;
		ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 L_0 = ___3_formatSpan;
		Il2CppChar L_1;
		L_1 = BigNumber_ParseFormatSpecifier_m642DCFB18345FAC78777645E487EE8279BA17073(L_0, (&V_0), NULL);
		V_1 = L_1;
		Il2CppChar L_2 = V_1;
		if ((((int32_t)L_2) == ((int32_t)((int32_t)120))))
		{
			goto IL_0015;
		}
	}
	{
		Il2CppChar L_3 = V_1;
		if ((!(((uint32_t)L_3) == ((uint32_t)((int32_t)88)))))
		{
			goto IL_0027;
		}
	}

IL_0015:
	{
		bool L_4 = ___0_targetSpan;
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_5 = ___1_value;
		Il2CppChar L_6 = V_1;
		int32_t L_7 = V_0;
		NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* L_8 = ___4_info;
		Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D L_9 = ___5_destination;
		int32_t* L_10 = ___6_charsWritten;
		bool* L_11 = ___7_spanSuccess;
		String_t* L_12;
		L_12 = BigNumber_FormatBigIntegerToHex_m5BD805D186861A2FDE1CB6D7C8BF730B78B251BE(L_4, L_5, L_6, L_7, L_8, L_9, L_10, L_11, NULL);
		return L_12;
	}

IL_0027:
	{
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_13 = ___1_value;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_14 = L_13.____bits_1;
		if (L_14)
		{
			goto IL_009b;
		}
	}
	{
		Il2CppChar L_15 = V_1;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)103))))
		{
			goto IL_0043;
		}
	}
	{
		Il2CppChar L_16 = V_1;
		if ((((int32_t)L_16) == ((int32_t)((int32_t)71))))
		{
			goto IL_0043;
		}
	}
	{
		Il2CppChar L_17 = V_1;
		if ((((int32_t)L_17) == ((int32_t)((int32_t)114))))
		{
			goto IL_0043;
		}
	}
	{
		Il2CppChar L_18 = V_1;
		if ((!(((uint32_t)L_18) == ((uint32_t)((int32_t)82)))))
		{
			goto IL_0068;
		}
	}

IL_0043:
	{
		int32_t L_19 = V_0;
		if ((((int32_t)L_19) > ((int32_t)0)))
		{
			goto IL_004e;
		}
	}
	{
		G_B11_0 = _stringLiteralA019FB7F17AA36A9743C530E1F11D5613B8B1158;
		goto IL_005e;
	}

IL_004e:
	{
		int32_t L_20 = V_0;
		int32_t L_21 = L_20;
		RuntimeObject* L_22 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_21);
		String_t* L_23;
		L_23 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(_stringLiteralED07F219A0721B30764C92E705CC226FA5B25955, L_22, NULL);
		G_B11_0 = L_23;
	}

IL_005e:
	{
		String_t* L_24 = G_B11_0;
		___2_formatString = L_24;
		ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 L_25;
		L_25 = String_op_Implicit_m7D7FE0449303AF92D8B2A85A06ADC6933B2ECC3A_inline(L_24, NULL);
		___3_formatSpan = L_25;
	}

IL_0068:
	{
		bool L_26 = ___0_targetSpan;
		if (!L_26)
		{
			goto IL_0083;
		}
	}
	{
		bool* L_27 = ___7_spanSuccess;
		int32_t* L_28 = (&(&___1_value)->____sign_0);
		Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D L_29 = ___5_destination;
		int32_t* L_30 = ___6_charsWritten;
		ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 L_31 = ___3_formatSpan;
		NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* L_32 = ___4_info;
		bool L_33;
		L_33 = Int32_TryFormat_m09C5DAC7B8CB25D5D7FAEB7043384D0B05679A1A(L_28, L_29, L_30, L_31, L_32, NULL);
		*((int8_t*)L_27) = (int8_t)L_33;
		return (String_t*)NULL;
	}

IL_0083:
	{
		int32_t* L_34 = ___6_charsWritten;
		*((int32_t*)L_34) = (int32_t)0;
		bool* L_35 = ___7_spanSuccess;
		*((int8_t*)L_35) = (int8_t)0;
		int32_t* L_36 = (&(&___1_value)->____sign_0);
		String_t* L_37 = ___2_formatString;
		NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* L_38 = ___4_info;
		String_t* L_39;
		L_39 = Int32_ToString_mE871810BC163EE4EF88E7C7682A6AD39911173B8(L_36, L_37, L_38, NULL);
		return L_39;
	}

IL_009b:
	{
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_40 = ___1_value;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_41 = L_40.____bits_1;
		NullCheck(L_41);
		V_2 = ((int32_t)(((RuntimeArray*)L_41)->max_length));
	}
	try
	{
		int32_t L_42 = V_2;
		if (((int64_t)L_42 * (int64_t)((int32_t)10) < (int64_t)kIl2CppInt32Min) || ((int64_t)L_42 * (int64_t)((int32_t)10) > (int64_t)kIl2CppInt32Max))
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), BigNumber_FormatBigInteger_m626A9168DC2BBB348E31E47313E83D88263747AA_RuntimeMethod_var);
		if (((int64_t)((int32_t)(((int32_t)il2cpp_codegen_multiply(L_42, ((int32_t)10)))/((int32_t)9))) + (int64_t)2 < (int64_t)kIl2CppInt32Min) || ((int64_t)((int32_t)(((int32_t)il2cpp_codegen_multiply(L_42, ((int32_t)10)))/((int32_t)9))) + (int64_t)2 > (int64_t)kIl2CppInt32Max))
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), BigNumber_FormatBigInteger_m626A9168DC2BBB348E31E47313E83D88263747AA_RuntimeMethod_var);
		V_3 = ((int32_t)il2cpp_codegen_add(((int32_t)(((int32_t)il2cpp_codegen_multiply(L_42, ((int32_t)10)))/((int32_t)9))), 2));
		goto IL_00bf;
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&OverflowException_t6F6AD8CACE20C37F701C05B373A215C4802FAB0C_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00b0;
		}
		throw e;
	}

CATCH_00b0:
	{
		V_13 = ((OverflowException_t6F6AD8CACE20C37F701C05B373A215C4802FAB0C*)IL2CPP_GET_ACTIVE_EXCEPTION(OverflowException_t6F6AD8CACE20C37F701C05B373A215C4802FAB0C*));
		OverflowException_t6F6AD8CACE20C37F701C05B373A215C4802FAB0C* L_43 = V_13;
		FormatException_tCD210E92627903FFEDAAA706C08FB6222B4D012B* L_44 = (FormatException_tCD210E92627903FFEDAAA706C08FB6222B4D012B*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&FormatException_tCD210E92627903FFEDAAA706C08FB6222B4D012B_il2cpp_TypeInfo_var)));
		FormatException__ctor_mE31CCFC2A6FA296CA9E9C6813112D7850FE682D4(L_44, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7491756875CB4DEE250E72418D6CBD5E0DD81F9A)), L_43, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_44, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&BigNumber_FormatBigInteger_m626A9168DC2BBB348E31E47313E83D88263747AA_RuntimeMethod_var)));
	}

IL_00bf:
	{
		int32_t L_45 = V_3;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_46 = (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)SZArrayNew(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var, (uint32_t)L_45);
		V_4 = L_46;
		V_5 = 0;
		int32_t L_47 = V_2;
		V_14 = L_47;
		goto IL_0144;
	}

IL_00cf:
	{
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_48 = ___1_value;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_49 = L_48.____bits_1;
		int32_t L_50 = V_14;
		NullCheck(L_49);
		int32_t L_51 = L_50;
		uint32_t L_52 = (L_49)->GetAt(static_cast<il2cpp_array_size_t>(L_51));
		V_15 = L_52;
		V_16 = 0;
		goto IL_010e;
	}

IL_00df:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_53 = V_4;
		int32_t L_54 = V_16;
		NullCheck(L_53);
		int32_t L_55 = L_54;
		uint32_t L_56 = (L_53)->GetAt(static_cast<il2cpp_array_size_t>(L_55));
		uint32_t L_57 = V_15;
		uint64_t L_58;
		L_58 = NumericsHelpers_MakeUlong_mAB879C53817E4E9BE9C649F09EEE0CB11DE53514(L_56, L_57, NULL);
		V_17 = L_58;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_59 = V_4;
		int32_t L_60 = V_16;
		uint64_t L_61 = V_17;
		NullCheck(L_59);
		(L_59)->SetAt(static_cast<il2cpp_array_size_t>(L_60), (uint32_t)((int32_t)(uint32_t)((int64_t)((uint64_t)(int64_t)L_61%(uint64_t)(int64_t)((int64_t)((int32_t)1000000000))))));
		uint64_t L_62 = V_17;
		V_15 = ((int32_t)(uint32_t)((int64_t)((uint64_t)(int64_t)L_62/(uint64_t)(int64_t)((int64_t)((int32_t)1000000000)))));
		int32_t L_63 = V_16;
		V_16 = ((int32_t)il2cpp_codegen_add(L_63, 1));
	}

IL_010e:
	{
		int32_t L_64 = V_16;
		int32_t L_65 = V_5;
		if ((((int32_t)L_64) < ((int32_t)L_65)))
		{
			goto IL_00df;
		}
	}
	{
		uint32_t L_66 = V_15;
		if (!L_66)
		{
			goto IL_0144;
		}
	}
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_67 = V_4;
		int32_t L_68 = V_5;
		int32_t L_69 = L_68;
		V_5 = ((int32_t)il2cpp_codegen_add(L_69, 1));
		uint32_t L_70 = V_15;
		NullCheck(L_67);
		(L_67)->SetAt(static_cast<il2cpp_array_size_t>(L_69), (uint32_t)((int32_t)((uint32_t)(int32_t)L_70%(uint32_t)(int32_t)((int32_t)1000000000))));
		uint32_t L_71 = V_15;
		V_15 = ((int32_t)((uint32_t)(int32_t)L_71/(uint32_t)(int32_t)((int32_t)1000000000)));
		uint32_t L_72 = V_15;
		if (!L_72)
		{
			goto IL_0144;
		}
	}
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_73 = V_4;
		int32_t L_74 = V_5;
		int32_t L_75 = L_74;
		V_5 = ((int32_t)il2cpp_codegen_add(L_75, 1));
		uint32_t L_76 = V_15;
		NullCheck(L_73);
		(L_73)->SetAt(static_cast<il2cpp_array_size_t>(L_75), (uint32_t)L_76);
	}

IL_0144:
	{
		int32_t L_77 = V_14;
		int32_t L_78 = ((int32_t)il2cpp_codegen_subtract(L_77, 1));
		V_14 = L_78;
		if ((((int32_t)L_78) >= ((int32_t)0)))
		{
			goto IL_00cf;
		}
	}
	{
	}
	try
	{
		int32_t L_79 = V_5;
		if (((int64_t)L_79 * (int64_t)((int32_t)9) < (int64_t)kIl2CppInt32Min) || ((int64_t)L_79 * (int64_t)((int32_t)9) > (int64_t)kIl2CppInt32Max))
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), BigNumber_FormatBigInteger_m626A9168DC2BBB348E31E47313E83D88263747AA_RuntimeMethod_var);
		V_6 = ((int32_t)il2cpp_codegen_multiply(L_79, ((int32_t)9)));
		goto IL_0167;
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&OverflowException_t6F6AD8CACE20C37F701C05B373A215C4802FAB0C_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0158;
		}
		throw e;
	}

CATCH_0158:
	{
		V_18 = ((OverflowException_t6F6AD8CACE20C37F701C05B373A215C4802FAB0C*)IL2CPP_GET_ACTIVE_EXCEPTION(OverflowException_t6F6AD8CACE20C37F701C05B373A215C4802FAB0C*));
		OverflowException_t6F6AD8CACE20C37F701C05B373A215C4802FAB0C* L_80 = V_18;
		FormatException_tCD210E92627903FFEDAAA706C08FB6222B4D012B* L_81 = (FormatException_tCD210E92627903FFEDAAA706C08FB6222B4D012B*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&FormatException_tCD210E92627903FFEDAAA706C08FB6222B4D012B_il2cpp_TypeInfo_var)));
		FormatException__ctor_mE31CCFC2A6FA296CA9E9C6813112D7850FE682D4(L_81, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7491756875CB4DEE250E72418D6CBD5E0DD81F9A)), L_80, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_81, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&BigNumber_FormatBigInteger_m626A9168DC2BBB348E31E47313E83D88263747AA_RuntimeMethod_var)));
	}

IL_0167:
	{
		Il2CppChar L_82 = V_1;
		if ((((int32_t)L_82) == ((int32_t)((int32_t)103))))
		{
			goto IL_0187;
		}
	}
	{
		Il2CppChar L_83 = V_1;
		if ((((int32_t)L_83) == ((int32_t)((int32_t)71))))
		{
			goto IL_0187;
		}
	}
	{
		Il2CppChar L_84 = V_1;
		if ((((int32_t)L_84) == ((int32_t)((int32_t)100))))
		{
			goto IL_0187;
		}
	}
	{
		Il2CppChar L_85 = V_1;
		if ((((int32_t)L_85) == ((int32_t)((int32_t)68))))
		{
			goto IL_0187;
		}
	}
	{
		Il2CppChar L_86 = V_1;
		if ((((int32_t)L_86) == ((int32_t)((int32_t)114))))
		{
			goto IL_0187;
		}
	}
	{
		Il2CppChar L_87 = V_1;
		G_B36_0 = ((((int32_t)L_87) == ((int32_t)((int32_t)82)))? 1 : 0);
		goto IL_0188;
	}

IL_0187:
	{
		G_B36_0 = 1;
	}

IL_0188:
	{
		V_7 = (bool)G_B36_0;
		bool L_88 = V_7;
		if (!L_88)
		{
			goto IL_01c5;
		}
	}
	{
		int32_t L_89 = V_0;
		if ((((int32_t)L_89) <= ((int32_t)0)))
		{
			goto IL_019a;
		}
	}
	{
		int32_t L_90 = V_0;
		int32_t L_91 = V_6;
		if ((((int32_t)L_90) <= ((int32_t)L_91)))
		{
			goto IL_019a;
		}
	}
	{
		int32_t L_92 = V_0;
		V_6 = L_92;
	}

IL_019a:
	{
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_93 = ___1_value;
		int32_t L_94 = L_93.____sign_0;
		if ((((int32_t)L_94) >= ((int32_t)0)))
		{
			goto IL_01c5;
		}
	}
	try
	{
		int32_t L_95 = V_6;
		NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* L_96 = ___4_info;
		NullCheck(L_96);
		String_t* L_97;
		L_97 = NumberFormatInfo_get_NegativeSign_m7744D30B65FFC7D00CDD1CCF7E53D3722D350E7C_inline(L_96, NULL);
		NullCheck(L_97);
		int32_t L_98;
		L_98 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_97, NULL);
		if (((int64_t)L_95 + (int64_t)L_98 < (int64_t)kIl2CppInt32Min) || ((int64_t)L_95 + (int64_t)L_98 > (int64_t)kIl2CppInt32Max))
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), BigNumber_FormatBigInteger_m626A9168DC2BBB348E31E47313E83D88263747AA_RuntimeMethod_var);
		V_6 = ((int32_t)il2cpp_codegen_add(L_95, L_98));
		goto IL_01c5;
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&OverflowException_t6F6AD8CACE20C37F701C05B373A215C4802FAB0C_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_01b6;
		}
		throw e;
	}

CATCH_01b6:
	{
		V_19 = ((OverflowException_t6F6AD8CACE20C37F701C05B373A215C4802FAB0C*)IL2CPP_GET_ACTIVE_EXCEPTION(OverflowException_t6F6AD8CACE20C37F701C05B373A215C4802FAB0C*));
		OverflowException_t6F6AD8CACE20C37F701C05B373A215C4802FAB0C* L_99 = V_19;
		FormatException_tCD210E92627903FFEDAAA706C08FB6222B4D012B* L_100 = (FormatException_tCD210E92627903FFEDAAA706C08FB6222B4D012B*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&FormatException_tCD210E92627903FFEDAAA706C08FB6222B4D012B_il2cpp_TypeInfo_var)));
		FormatException__ctor_mE31CCFC2A6FA296CA9E9C6813112D7850FE682D4(L_100, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7491756875CB4DEE250E72418D6CBD5E0DD81F9A)), L_99, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_100, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&BigNumber_FormatBigInteger_m626A9168DC2BBB348E31E47313E83D88263747AA_RuntimeMethod_var)));
	}

IL_01c5:
	{
	}
	try
	{
		int32_t L_101 = V_6;
		if (((int64_t)L_101 + (int64_t)1 < (int64_t)kIl2CppInt32Min) || ((int64_t)L_101 + (int64_t)1 > (int64_t)kIl2CppInt32Max))
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), BigNumber_FormatBigInteger_m626A9168DC2BBB348E31E47313E83D88263747AA_RuntimeMethod_var);
		V_8 = ((int32_t)il2cpp_codegen_add(L_101, 1));
		goto IL_01dd;
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&OverflowException_t6F6AD8CACE20C37F701C05B373A215C4802FAB0C_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_01ce;
		}
		throw e;
	}

CATCH_01ce:
	{
		V_20 = ((OverflowException_t6F6AD8CACE20C37F701C05B373A215C4802FAB0C*)IL2CPP_GET_ACTIVE_EXCEPTION(OverflowException_t6F6AD8CACE20C37F701C05B373A215C4802FAB0C*));
		OverflowException_t6F6AD8CACE20C37F701C05B373A215C4802FAB0C* L_102 = V_20;
		FormatException_tCD210E92627903FFEDAAA706C08FB6222B4D012B* L_103 = (FormatException_tCD210E92627903FFEDAAA706C08FB6222B4D012B*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&FormatException_tCD210E92627903FFEDAAA706C08FB6222B4D012B_il2cpp_TypeInfo_var)));
		FormatException__ctor_mE31CCFC2A6FA296CA9E9C6813112D7850FE682D4(L_103, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7491756875CB4DEE250E72418D6CBD5E0DD81F9A)), L_102, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_103, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&BigNumber_FormatBigInteger_m626A9168DC2BBB348E31E47313E83D88263747AA_RuntimeMethod_var)));
	}

IL_01dd:
	{
		int32_t L_104 = V_8;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_105 = (CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)(CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)SZArrayNew(CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_il2cpp_TypeInfo_var, (uint32_t)L_104);
		V_9 = L_105;
		int32_t L_106 = V_6;
		V_10 = L_106;
		V_21 = 0;
		goto IL_0226;
	}

IL_01ef:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_107 = V_4;
		int32_t L_108 = V_21;
		NullCheck(L_107);
		int32_t L_109 = L_108;
		uint32_t L_110 = (L_107)->GetAt(static_cast<il2cpp_array_size_t>(L_109));
		V_22 = L_110;
		V_23 = ((int32_t)9);
		goto IL_0216;
	}

IL_01fc:
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_111 = V_9;
		int32_t L_112 = V_10;
		int32_t L_113 = ((int32_t)il2cpp_codegen_subtract(L_112, 1));
		V_10 = L_113;
		uint32_t L_114 = V_22;
		NullCheck(L_111);
		(L_111)->SetAt(static_cast<il2cpp_array_size_t>(L_113), (Il2CppChar)((int32_t)(uint16_t)((int32_t)il2cpp_codegen_add(((int32_t)48), ((int32_t)((uint32_t)(int32_t)L_114%(uint32_t)(int32_t)((int32_t)10)))))));
		uint32_t L_115 = V_22;
		V_22 = ((int32_t)((uint32_t)(int32_t)L_115/(uint32_t)(int32_t)((int32_t)10)));
	}

IL_0216:
	{
		int32_t L_116 = V_23;
		int32_t L_117 = ((int32_t)il2cpp_codegen_subtract(L_116, 1));
		V_23 = L_117;
		if ((((int32_t)L_117) >= ((int32_t)0)))
		{
			goto IL_01fc;
		}
	}
	{
		int32_t L_118 = V_21;
		V_21 = ((int32_t)il2cpp_codegen_add(L_118, 1));
	}

IL_0226:
	{
		int32_t L_119 = V_21;
		int32_t L_120 = V_5;
		if ((((int32_t)L_119) < ((int32_t)((int32_t)il2cpp_codegen_subtract(L_120, 1)))))
		{
			goto IL_01ef;
		}
	}
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_121 = V_4;
		int32_t L_122 = V_5;
		NullCheck(L_121);
		int32_t L_123 = ((int32_t)il2cpp_codegen_subtract(L_122, 1));
		uint32_t L_124 = (L_121)->GetAt(static_cast<il2cpp_array_size_t>(L_123));
		V_24 = L_124;
		goto IL_0253;
	}

IL_0239:
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_125 = V_9;
		int32_t L_126 = V_10;
		int32_t L_127 = ((int32_t)il2cpp_codegen_subtract(L_126, 1));
		V_10 = L_127;
		uint32_t L_128 = V_24;
		NullCheck(L_125);
		(L_125)->SetAt(static_cast<il2cpp_array_size_t>(L_127), (Il2CppChar)((int32_t)(uint16_t)((int32_t)il2cpp_codegen_add(((int32_t)48), ((int32_t)((uint32_t)(int32_t)L_128%(uint32_t)(int32_t)((int32_t)10)))))));
		uint32_t L_129 = V_24;
		V_24 = ((int32_t)((uint32_t)(int32_t)L_129/(uint32_t)(int32_t)((int32_t)10)));
	}

IL_0253:
	{
		uint32_t L_130 = V_24;
		if (L_130)
		{
			goto IL_0239;
		}
	}
	{
		bool L_131 = V_7;
		if (L_131)
		{
			goto IL_02cb;
		}
	}
	{
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_132 = ___1_value;
		int32_t L_133 = L_132.____sign_0;
		V_25 = (bool)((((int32_t)L_133) < ((int32_t)0))? 1 : 0);
		V_26 = ((int32_t)29);
		int32_t L_134 = V_6;
		int32_t L_135 = V_10;
		V_27 = ((int32_t)il2cpp_codegen_subtract(L_134, L_135));
		uintptr_t L_136 = ((uintptr_t)((int32_t)256));
		int8_t* L_137 = (int8_t*) (L_136 ? alloca(L_136) : NULL);
		memset(L_137, 0, L_136);
		Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D L_138;
		memset((&L_138), 0, sizeof(L_138));
		Span_1__ctor_m835590E344B05AF6AF00A78E92C4175BD781A3D2_inline((&L_138), (void*)(L_137), ((int32_t)128), Span_1__ctor_m835590E344B05AF6AF00A78E92C4175BD781A3D2_RuntimeMethod_var);
		V_28 = L_138;
		Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D L_139 = V_28;
		ValueStringBuilder__ctor_m0660F060D846CA37202B1BEEE35D26DAC2B6AFF6((&V_29), L_139, NULL);
		int32_t L_140 = V_26;
		int32_t L_141 = V_27;
		bool L_142 = V_25;
		ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 L_143 = ___3_formatSpan;
		NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* L_144 = ___4_info;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_145 = V_9;
		int32_t L_146 = V_10;
		FormatProvider_FormatBigInteger_m1FBB2719E6A285F3F9EE6A4EE4B95AB6C50C0BAB((&V_29), L_140, L_141, L_142, L_143, L_144, L_145, L_146, NULL);
		bool L_147 = ___0_targetSpan;
		if (!L_147)
		{
			goto IL_02b5;
		}
	}
	{
		bool* L_148 = ___7_spanSuccess;
		Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D L_149 = ___5_destination;
		int32_t* L_150 = ___6_charsWritten;
		bool L_151;
		L_151 = ValueStringBuilder_TryCopyTo_m1ADDDEC065D0CCAB6A61D871D7272522B95F801E((&V_29), L_149, L_150, NULL);
		*((int8_t*)L_148) = (int8_t)L_151;
		return (String_t*)NULL;
	}

IL_02b5:
	{
		int32_t* L_152 = ___6_charsWritten;
		*((int32_t*)L_152) = (int32_t)0;
		bool* L_153 = ___7_spanSuccess;
		*((int8_t*)L_153) = (int8_t)0;
		String_t* L_154;
		L_154 = ValueStringBuilder_ToString_mAB4C26796468880783F57E543C5102DE83C10BCE((&V_29), NULL);
		return L_154;
	}

IL_02cb:
	{
		int32_t L_155 = V_6;
		int32_t L_156 = V_10;
		V_11 = ((int32_t)il2cpp_codegen_subtract(L_155, L_156));
		goto IL_02e4;
	}

IL_02d4:
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_157 = V_9;
		int32_t L_158 = V_10;
		int32_t L_159 = ((int32_t)il2cpp_codegen_subtract(L_158, 1));
		V_10 = L_159;
		NullCheck(L_157);
		(L_157)->SetAt(static_cast<il2cpp_array_size_t>(L_159), (Il2CppChar)((int32_t)48));
		int32_t L_160 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_160, 1));
	}

IL_02e4:
	{
		int32_t L_161 = V_0;
		if ((((int32_t)L_161) <= ((int32_t)0)))
		{
			goto IL_02ed;
		}
	}
	{
		int32_t L_162 = V_0;
		int32_t L_163 = V_11;
		if ((((int32_t)L_162) > ((int32_t)L_163)))
		{
			goto IL_02d4;
		}
	}

IL_02ed:
	{
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_164 = ___1_value;
		int32_t L_165 = L_164.____sign_0;
		if ((((int32_t)L_165) >= ((int32_t)0)))
		{
			goto IL_0333;
		}
	}
	{
		NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* L_166 = ___4_info;
		NullCheck(L_166);
		String_t* L_167;
		L_167 = NumberFormatInfo_get_NegativeSign_m7744D30B65FFC7D00CDD1CCF7E53D3722D350E7C_inline(L_166, NULL);
		NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* L_168 = ___4_info;
		NullCheck(L_168);
		String_t* L_169;
		L_169 = NumberFormatInfo_get_NegativeSign_m7744D30B65FFC7D00CDD1CCF7E53D3722D350E7C_inline(L_168, NULL);
		NullCheck(L_169);
		int32_t L_170;
		L_170 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_169, NULL);
		V_30 = ((int32_t)il2cpp_codegen_subtract(L_170, 1));
		goto IL_032e;
	}

IL_0310:
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_171 = V_9;
		int32_t L_172 = V_10;
		int32_t L_173 = ((int32_t)il2cpp_codegen_subtract(L_172, 1));
		V_10 = L_173;
		NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* L_174 = ___4_info;
		NullCheck(L_174);
		String_t* L_175;
		L_175 = NumberFormatInfo_get_NegativeSign_m7744D30B65FFC7D00CDD1CCF7E53D3722D350E7C_inline(L_174, NULL);
		int32_t L_176 = V_30;
		NullCheck(L_175);
		Il2CppChar L_177;
		L_177 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_175, L_176, NULL);
		NullCheck(L_171);
		(L_171)->SetAt(static_cast<il2cpp_array_size_t>(L_173), (Il2CppChar)L_177);
		int32_t L_178 = V_30;
		V_30 = ((int32_t)il2cpp_codegen_subtract(L_178, 1));
	}

IL_032e:
	{
		int32_t L_179 = V_30;
		if ((((int32_t)L_179) > ((int32_t)(-1))))
		{
			goto IL_0310;
		}
	}

IL_0333:
	{
		int32_t L_180 = V_6;
		int32_t L_181 = V_10;
		V_12 = ((int32_t)il2cpp_codegen_subtract(L_180, L_181));
		bool L_182 = ___0_targetSpan;
		if (L_182)
		{
			goto IL_0354;
		}
	}
	{
		int32_t* L_183 = ___6_charsWritten;
		*((int32_t*)L_183) = (int32_t)0;
		bool* L_184 = ___7_spanSuccess;
		*((int8_t*)L_184) = (int8_t)0;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_185 = V_9;
		int32_t L_186 = V_10;
		int32_t L_187 = V_6;
		int32_t L_188 = V_10;
		String_t* L_189;
		L_189 = String_CreateString_mB7B3AC2AF28010538650051A9000369B1CD6BAB6(NULL, L_185, L_186, ((int32_t)il2cpp_codegen_subtract(L_187, L_188)), NULL);
		return L_189;
	}

IL_0354:
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_190 = V_9;
		int32_t L_191 = V_10;
		int32_t L_192 = V_6;
		int32_t L_193 = V_10;
		ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 L_194;
		memset((&L_194), 0, sizeof(L_194));
		ReadOnlySpan_1__ctor_mDADE08E6B4594775C6675B389078E5FE98C745D5_inline((&L_194), L_190, L_191, ((int32_t)il2cpp_codegen_subtract(L_192, L_193)), ReadOnlySpan_1__ctor_mDADE08E6B4594775C6675B389078E5FE98C745D5_RuntimeMethod_var);
		V_31 = L_194;
		Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D L_195 = ___5_destination;
		bool L_196;
		L_196 = ReadOnlySpan_1_TryCopyTo_m22E885FE905F1306DDE8000F155109F7F4987666((&V_31), L_195, ReadOnlySpan_1_TryCopyTo_m22E885FE905F1306DDE8000F155109F7F4987666_RuntimeMethod_var);
		if (!L_196)
		{
			goto IL_037a;
		}
	}
	{
		int32_t* L_197 = ___6_charsWritten;
		int32_t L_198 = V_12;
		*((int32_t*)L_197) = (int32_t)L_198;
		bool* L_199 = ___7_spanSuccess;
		*((int8_t*)L_199) = (int8_t)1;
		return (String_t*)NULL;
	}

IL_037a:
	{
		int32_t* L_200 = ___6_charsWritten;
		*((int32_t*)L_200) = (int32_t)0;
		bool* L_201 = ___7_spanSuccess;
		*((int8_t*)L_201) = (int8_t)0;
		return (String_t*)NULL;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NumericsHelpers_DangerousMakeTwosComplement_m4B6EED2DF0E8C7B5171CDC7BBE5A7A3D68C79D4B (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___0_d, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0 = ___0_d;
		if (!L_0)
		{
			goto IL_0041;
		}
	}
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_1 = ___0_d;
		NullCheck(L_1);
		if (!(((RuntimeArray*)L_1)->max_length))
		{
			goto IL_0041;
		}
	}
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_2 = ___0_d;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_3 = ___0_d;
		NullCheck(L_3);
		int32_t L_4 = 0;
		uint32_t L_5 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		NullCheck(L_2);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint32_t)((int32_t)il2cpp_codegen_add((int32_t)((~L_5)), 1)));
		V_0 = 1;
		goto IL_0021;
	}

IL_0014:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_6 = ___0_d;
		int32_t L_7 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_8 = ___0_d;
		int32_t L_9 = V_0;
		NullCheck(L_8);
		int32_t L_10 = L_9;
		uint32_t L_11 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (uint32_t)((int32_t)il2cpp_codegen_add((int32_t)((~L_11)), 1)));
		int32_t L_12 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0021:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_13 = ___0_d;
		int32_t L_14 = V_0;
		NullCheck(L_13);
		int32_t L_15 = ((int32_t)il2cpp_codegen_subtract(L_14, 1));
		uint32_t L_16 = (L_13)->GetAt(static_cast<il2cpp_array_size_t>(L_15));
		if (L_16)
		{
			goto IL_003b;
		}
	}
	{
		int32_t L_17 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_18 = ___0_d;
		NullCheck(L_18);
		if ((((int32_t)L_17) < ((int32_t)((int32_t)(((RuntimeArray*)L_18)->max_length)))))
		{
			goto IL_0014;
		}
	}
	{
		goto IL_003b;
	}

IL_0030:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_19 = ___0_d;
		int32_t L_20 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_21 = ___0_d;
		int32_t L_22 = V_0;
		NullCheck(L_21);
		int32_t L_23 = L_22;
		uint32_t L_24 = (L_21)->GetAt(static_cast<il2cpp_array_size_t>(L_23));
		NullCheck(L_19);
		(L_19)->SetAt(static_cast<il2cpp_array_size_t>(L_20), (uint32_t)((~L_24)));
		int32_t L_25 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_25, 1));
	}

IL_003b:
	{
		int32_t L_26 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_27 = ___0_d;
		NullCheck(L_27);
		if ((((int32_t)L_26) < ((int32_t)((int32_t)(((RuntimeArray*)L_27)->max_length)))))
		{
			goto IL_0030;
		}
	}

IL_0041:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t NumericsHelpers_MakeUlong_mAB879C53817E4E9BE9C649F09EEE0CB11DE53514 (uint32_t ___0_uHi, uint32_t ___1_uLo, const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = ___0_uHi;
		uint32_t L_1 = ___1_uLo;
		return ((int64_t)(((int64_t)(((int64_t)(uint64_t)L_0)<<((int32_t)32)))|((int64_t)(uint64_t)L_1)));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t NumericsHelpers_Abs_m82DD45E6FEBF5DAB9533B31E5BC62DC5EF37568A (int32_t ___0_a, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	{
		int32_t L_0 = ___0_a;
		V_0 = ((int32_t)(L_0>>((int32_t)31)));
		int32_t L_1 = ___0_a;
		uint32_t L_2 = V_0;
		uint32_t L_3 = V_0;
		return ((int32_t)il2cpp_codegen_subtract(((int32_t)(L_1^(int32_t)L_2)), (int32_t)L_3));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t NumericsHelpers_CombineHash_m16177FC379833624A7C14834FA38ADE527A53CCE (uint32_t ___0_u1, uint32_t ___1_u2, const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = ___0_u1;
		uint32_t L_1 = ___0_u1;
		uint32_t L_2 = ___1_u2;
		return ((int32_t)(((int32_t)(((int32_t)((int32_t)L_0<<7))|((int32_t)((uint32_t)L_1>>((int32_t)25)))))^(int32_t)L_2));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NumericsHelpers_CombineHash_m676E72BC5EC287D4C9602A8D876D24E2CBFDC776 (int32_t ___0_n1, int32_t ___1_n2, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_n1;
		int32_t L_1 = ___1_n2;
		uint32_t L_2;
		L_2 = NumericsHelpers_CombineHash_m16177FC379833624A7C14834FA38ADE527A53CCE(L_0, L_1, NULL);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FormatProvider_FormatBigInteger_m1FBB2719E6A285F3F9EE6A4EE4B95AB6C50C0BAB (ValueStringBuilder_tEBD54C46E3AF8527BD0D234124F5C1AC14E9E251* ___0_sb, int32_t ___1_precision, int32_t ___2_scale, bool ___3_sign, ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 ___4_format, NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* ___5_numberFormatInfo, CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___6_digits, int32_t ___7_startIndex, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Number_t006CBC9914386BB171582F4C3A3EEB2EE404D461_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Il2CppChar* V_0 = NULL;
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* V_1 = NULL;
	NumberBuffer_t0F9FC9D15F03CFDEBA3B3F4210A2AB3B53305CDA V_2;
	memset((&V_2), 0, sizeof(V_2));
	Il2CppChar V_3 = 0x0;
	int32_t V_4 = 0;
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_0 = ___6_digits;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_1 = L_0;
		V_1 = L_1;
		if (!L_1)
		{
			goto IL_000b;
		}
	}
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_2 = V_1;
		NullCheck(L_2);
		if (((int32_t)(((RuntimeArray*)L_2)->max_length)))
		{
			goto IL_0010;
		}
	}

IL_000b:
	{
		V_0 = (Il2CppChar*)((uintptr_t)0);
		goto IL_0019;
	}

IL_0010:
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_3 = V_1;
		NullCheck(L_3);
		V_0 = (Il2CppChar*)((uintptr_t)((L_3)->GetAddressAt(static_cast<il2cpp_array_size_t>(0))));
	}

IL_0019:
	{
		il2cpp_codegen_initobj((&V_2), sizeof(NumberBuffer_t0F9FC9D15F03CFDEBA3B3F4210A2AB3B53305CDA));
		Il2CppChar* L_4 = V_0;
		int32_t L_5 = ___7_startIndex;
		(&V_2)->___overrideDigits_3 = ((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_4, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_5), 2))));
		int32_t L_6 = ___1_precision;
		(&V_2)->___precision_0 = L_6;
		int32_t L_7 = ___2_scale;
		(&V_2)->___scale_1 = L_7;
		bool L_8 = ___3_sign;
		(&V_2)->___sign_2 = L_8;
		ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 L_9 = ___4_format;
		il2cpp_codegen_runtime_class_init_inline(Number_t006CBC9914386BB171582F4C3A3EEB2EE404D461_il2cpp_TypeInfo_var);
		Il2CppChar L_10;
		L_10 = Number_ParseFormatSpecifier_mC2A7C10F8899ED9BA94E9D9EFE6FDDCADE68618A(L_9, (&V_4), NULL);
		V_3 = L_10;
		Il2CppChar L_11 = V_3;
		if (!L_11)
		{
			goto IL_0064;
		}
	}
	{
		ValueStringBuilder_tEBD54C46E3AF8527BD0D234124F5C1AC14E9E251* L_12 = ___0_sb;
		Il2CppChar L_13 = V_3;
		int32_t L_14 = V_4;
		NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* L_15 = ___5_numberFormatInfo;
		il2cpp_codegen_runtime_class_init_inline(Number_t006CBC9914386BB171582F4C3A3EEB2EE404D461_il2cpp_TypeInfo_var);
		Number_NumberToString_mB02B6AFBEEF66C19BB094F00189CC8E15A16AD18(L_12, (&V_2), L_13, L_14, L_15, (bool)0, NULL);
		goto IL_0070;
	}

IL_0064:
	{
		ValueStringBuilder_tEBD54C46E3AF8527BD0D234124F5C1AC14E9E251* L_16 = ___0_sb;
		ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 L_17 = ___4_format;
		NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* L_18 = ___5_numberFormatInfo;
		il2cpp_codegen_runtime_class_init_inline(Number_t006CBC9914386BB171582F4C3A3EEB2EE404D461_il2cpp_TypeInfo_var);
		Number_NumberToStringFormat_mA407C99BE332392E17203E2A9BDC5544DDF89090(L_16, (&V_2), L_17, L_18, NULL);
	}

IL_0070:
	{
		V_1 = (CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)NULL;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Number_Int32ToDecChars_mA94E1FFBC0C831A23C6A974FC11018B9E6F9ED4E (Il2CppChar* ___0_buffer, int32_t* ___1_index, uint32_t ___2_value, int32_t ___3_digits, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		goto IL_001f;
	}

IL_0002:
	{
		Il2CppChar* L_0 = ___0_buffer;
		int32_t* L_1 = ___1_index;
		int32_t* L_2 = ___1_index;
		int32_t L_3 = *((int32_t*)L_2);
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_3, 1));
		int32_t L_4 = V_0;
		*((int32_t*)L_1) = (int32_t)L_4;
		int32_t L_5 = V_0;
		uint32_t L_6 = ___2_value;
		*((int16_t*)((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_5), 2))))) = (int16_t)((int32_t)(uint16_t)((int32_t)il2cpp_codegen_add(((int32_t)((uint32_t)(int32_t)L_6%(uint32_t)(int32_t)((int32_t)10))), ((int32_t)48))));
		uint32_t L_7 = ___2_value;
		___2_value = ((int32_t)((uint32_t)(int32_t)L_7/(uint32_t)(int32_t)((int32_t)10)));
	}

IL_001f:
	{
		int32_t L_8 = ___3_digits;
		int32_t L_9 = ((int32_t)il2cpp_codegen_subtract(L_8, 1));
		___3_digits = L_9;
		if ((((int32_t)L_9) >= ((int32_t)0)))
		{
			goto IL_0002;
		}
	}
	{
		uint32_t L_10 = ___2_value;
		if (L_10)
		{
			goto IL_0002;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar Number_ParseFormatSpecifier_mC2A7C10F8899ED9BA94E9D9EFE6FDDCADE68618A (ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 ___0_format, int32_t* ___1_digits, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1_get_Length_m36BD32453530B535FE60A8123643219FEAABC351_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Il2CppChar V_0 = 0x0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	{
		V_0 = 0;
		int32_t L_0;
		L_0 = ReadOnlySpan_1_get_Length_m36BD32453530B535FE60A8123643219FEAABC351_inline((&___0_format), ReadOnlySpan_1_get_Length_m36BD32453530B535FE60A8123643219FEAABC351_RuntimeMethod_var);
		if ((((int32_t)L_0) <= ((int32_t)0)))
		{
			goto IL_00ef;
		}
	}
	{
		Il2CppChar* L_1;
		L_1 = il2cpp_span_get_item((Il2CppChar*)((Il2CppByReference*)&(((&___0_format))->____pointer_0))->value, (0), ((&___0_format))->____length_1);
		int32_t L_2 = *((uint16_t*)L_1);
		V_0 = L_2;
		Il2CppChar L_3 = V_0;
		if ((!(((uint32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_3, ((int32_t)65)))) > ((uint32_t)((int32_t)25)))))
		{
			goto IL_002c;
		}
	}
	{
		Il2CppChar L_4 = V_0;
		if ((!(((uint32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_4, ((int32_t)97)))) <= ((uint32_t)((int32_t)25)))))
		{
			goto IL_00ef;
		}
	}

IL_002c:
	{
		int32_t L_5;
		L_5 = ReadOnlySpan_1_get_Length_m36BD32453530B535FE60A8123643219FEAABC351_inline((&___0_format), ReadOnlySpan_1_get_Length_m36BD32453530B535FE60A8123643219FEAABC351_RuntimeMethod_var);
		if ((!(((uint32_t)L_5) == ((uint32_t)1))))
		{
			goto IL_003b;
		}
	}
	{
		int32_t* L_6 = ___1_digits;
		*((int32_t*)L_6) = (int32_t)(-1);
		Il2CppChar L_7 = V_0;
		return L_7;
	}

IL_003b:
	{
		int32_t L_8;
		L_8 = ReadOnlySpan_1_get_Length_m36BD32453530B535FE60A8123643219FEAABC351_inline((&___0_format), ReadOnlySpan_1_get_Length_m36BD32453530B535FE60A8123643219FEAABC351_RuntimeMethod_var);
		if ((!(((uint32_t)L_8) == ((uint32_t)2))))
		{
			goto IL_005c;
		}
	}
	{
		Il2CppChar* L_9;
		L_9 = il2cpp_span_get_item((Il2CppChar*)((Il2CppByReference*)&(((&___0_format))->____pointer_0))->value, (1), ((&___0_format))->____length_1);
		int32_t L_10 = *((uint16_t*)L_9);
		V_3 = ((int32_t)il2cpp_codegen_subtract(L_10, ((int32_t)48)));
		int32_t L_11 = V_3;
		if ((!(((uint32_t)L_11) < ((uint32_t)((int32_t)10)))))
		{
			goto IL_009a;
		}
	}
	{
		int32_t* L_12 = ___1_digits;
		int32_t L_13 = V_3;
		*((int32_t*)L_12) = (int32_t)L_13;
		Il2CppChar L_14 = V_0;
		return L_14;
	}

IL_005c:
	{
		int32_t L_15;
		L_15 = ReadOnlySpan_1_get_Length_m36BD32453530B535FE60A8123643219FEAABC351_inline((&___0_format), ReadOnlySpan_1_get_Length_m36BD32453530B535FE60A8123643219FEAABC351_RuntimeMethod_var);
		if ((!(((uint32_t)L_15) == ((uint32_t)3))))
		{
			goto IL_009a;
		}
	}
	{
		Il2CppChar* L_16;
		L_16 = il2cpp_span_get_item((Il2CppChar*)((Il2CppByReference*)&(((&___0_format))->____pointer_0))->value, (1), ((&___0_format))->____length_1);
		int32_t L_17 = *((uint16_t*)L_16);
		V_4 = ((int32_t)il2cpp_codegen_subtract(L_17, ((int32_t)48)));
		Il2CppChar* L_18;
		L_18 = il2cpp_span_get_item((Il2CppChar*)((Il2CppByReference*)&(((&___0_format))->____pointer_0))->value, (2), ((&___0_format))->____length_1);
		int32_t L_19 = *((uint16_t*)L_18);
		V_5 = ((int32_t)il2cpp_codegen_subtract(L_19, ((int32_t)48)));
		int32_t L_20 = V_4;
		if ((!(((uint32_t)L_20) < ((uint32_t)((int32_t)10)))))
		{
			goto IL_009a;
		}
	}
	{
		int32_t L_21 = V_5;
		if ((!(((uint32_t)L_21) < ((uint32_t)((int32_t)10)))))
		{
			goto IL_009a;
		}
	}
	{
		int32_t* L_22 = ___1_digits;
		int32_t L_23 = V_4;
		int32_t L_24 = V_5;
		*((int32_t*)L_22) = (int32_t)((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_23, ((int32_t)10))), L_24));
		Il2CppChar L_25 = V_0;
		return L_25;
	}

IL_009a:
	{
		V_1 = 0;
		V_2 = 1;
		goto IL_00b6;
	}

IL_00a0:
	{
		int32_t L_26 = V_1;
		int32_t L_27 = V_2;
		int32_t L_28 = L_27;
		V_2 = ((int32_t)il2cpp_codegen_add(L_28, 1));
		Il2CppChar* L_29;
		L_29 = il2cpp_span_get_item((Il2CppChar*)((Il2CppByReference*)&(((&___0_format))->____pointer_0))->value, (L_28), ((&___0_format))->____length_1);
		int32_t L_30 = *((uint16_t*)L_29);
		V_1 = ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_26, ((int32_t)10))), L_30)), ((int32_t)48)));
	}

IL_00b6:
	{
		int32_t L_31 = V_2;
		int32_t L_32;
		L_32 = ReadOnlySpan_1_get_Length_m36BD32453530B535FE60A8123643219FEAABC351_inline((&___0_format), ReadOnlySpan_1_get_Length_m36BD32453530B535FE60A8123643219FEAABC351_RuntimeMethod_var);
		if ((((int32_t)L_31) >= ((int32_t)L_32)))
		{
			goto IL_00d5;
		}
	}
	{
		int32_t L_33 = V_2;
		Il2CppChar* L_34;
		L_34 = il2cpp_span_get_item((Il2CppChar*)((Il2CppByReference*)&(((&___0_format))->____pointer_0))->value, (L_33), ((&___0_format))->____length_1);
		int32_t L_35 = *((uint16_t*)L_34);
		if ((!(((uint32_t)((int32_t)il2cpp_codegen_subtract(L_35, ((int32_t)48)))) < ((uint32_t)((int32_t)10)))))
		{
			goto IL_00d5;
		}
	}
	{
		int32_t L_36 = V_1;
		if ((((int32_t)L_36) < ((int32_t)((int32_t)10))))
		{
			goto IL_00a0;
		}
	}

IL_00d5:
	{
		int32_t L_37 = V_2;
		int32_t L_38;
		L_38 = ReadOnlySpan_1_get_Length_m36BD32453530B535FE60A8123643219FEAABC351_inline((&___0_format), ReadOnlySpan_1_get_Length_m36BD32453530B535FE60A8123643219FEAABC351_RuntimeMethod_var);
		if ((((int32_t)L_37) == ((int32_t)L_38)))
		{
			goto IL_00ea;
		}
	}
	{
		int32_t L_39 = V_2;
		Il2CppChar* L_40;
		L_40 = il2cpp_span_get_item((Il2CppChar*)((Il2CppByReference*)&(((&___0_format))->____pointer_0))->value, (L_39), ((&___0_format))->____length_1);
		int32_t L_41 = *((uint16_t*)L_40);
		if (L_41)
		{
			goto IL_00ef;
		}
	}

IL_00ea:
	{
		int32_t* L_42 = ___1_digits;
		int32_t L_43 = V_1;
		*((int32_t*)L_42) = (int32_t)L_43;
		Il2CppChar L_44 = V_0;
		return L_44;
	}

IL_00ef:
	{
		int32_t* L_45 = ___1_digits;
		*((int32_t*)L_45) = (int32_t)(-1);
		int32_t L_46;
		L_46 = ReadOnlySpan_1_get_Length_m36BD32453530B535FE60A8123643219FEAABC351_inline((&___0_format), ReadOnlySpan_1_get_Length_m36BD32453530B535FE60A8123643219FEAABC351_RuntimeMethod_var);
		if (!L_46)
		{
			goto IL_0100;
		}
	}
	{
		Il2CppChar L_47 = V_0;
		if (!L_47)
		{
			goto IL_0100;
		}
	}
	{
		return 0;
	}

IL_0100:
	{
		return ((int32_t)71);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Number_NumberToString_mB02B6AFBEEF66C19BB094F00189CC8E15A16AD18 (ValueStringBuilder_tEBD54C46E3AF8527BD0D234124F5C1AC14E9E251* ___0_sb, NumberBuffer_t0F9FC9D15F03CFDEBA3B3F4210A2AB3B53305CDA* ___1_number, Il2CppChar ___2_format, int32_t ___3_nMaxDigits, NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* ___4_info, bool ___5_isDecimal, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Number_t006CBC9914386BB171582F4C3A3EEB2EE404D461_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	int32_t G_B12_0 = 0;
	{
		V_0 = (-1);
		Il2CppChar L_0 = ___2_format;
		if ((!(((uint32_t)L_0) <= ((uint32_t)((int32_t)80)))))
		{
			goto IL_0039;
		}
	}
	{
		Il2CppChar L_1 = ___2_format;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_1, ((int32_t)67))))
		{
			case 0:
			{
				goto IL_006b;
			}
			case 1:
			{
				goto IL_01fb;
			}
			case 2:
			{
				goto IL_0119;
			}
			case 3:
			{
				goto IL_00a1;
			}
			case 4:
			{
				goto IL_0154;
			}
		}
	}
	{
		Il2CppChar L_2 = ___2_format;
		if ((((int32_t)L_2) == ((int32_t)((int32_t)78))))
		{
			goto IL_00ec;
		}
	}
	{
		Il2CppChar L_3 = ___2_format;
		if ((((int32_t)L_3) == ((int32_t)((int32_t)80))))
		{
			goto IL_01c3;
		}
	}
	{
		goto IL_01fb;
	}

IL_0039:
	{
		Il2CppChar L_4 = ___2_format;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_4, ((int32_t)99))))
		{
			case 0:
			{
				goto IL_006b;
			}
			case 1:
			{
				goto IL_01fb;
			}
			case 2:
			{
				goto IL_0119;
			}
			case 3:
			{
				goto IL_00a1;
			}
			case 4:
			{
				goto IL_0154;
			}
		}
	}
	{
		Il2CppChar L_5 = ___2_format;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)110))))
		{
			goto IL_00ec;
		}
	}
	{
		Il2CppChar L_6 = ___2_format;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)112))))
		{
			goto IL_01c3;
		}
	}
	{
		goto IL_01fb;
	}

IL_006b:
	{
		int32_t L_7 = ___3_nMaxDigits;
		if ((((int32_t)L_7) >= ((int32_t)0)))
		{
			goto IL_0078;
		}
	}
	{
		NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* L_8 = ___4_info;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = NumberFormatInfo_get_CurrencyDecimalDigits_m5E04D902AB388705BF7FED31630AF7730EFA34BE_inline(L_8, NULL);
		G_B12_0 = L_9;
		goto IL_0079;
	}

IL_0078:
	{
		int32_t L_10 = ___3_nMaxDigits;
		G_B12_0 = L_10;
	}

IL_0079:
	{
		V_0 = G_B12_0;
		int32_t L_11 = ___3_nMaxDigits;
		if ((((int32_t)L_11) >= ((int32_t)0)))
		{
			goto IL_0087;
		}
	}
	{
		NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* L_12 = ___4_info;
		NullCheck(L_12);
		int32_t L_13;
		L_13 = NumberFormatInfo_get_CurrencyDecimalDigits_m5E04D902AB388705BF7FED31630AF7730EFA34BE_inline(L_12, NULL);
		___3_nMaxDigits = L_13;
	}

IL_0087:
	{
		NumberBuffer_t0F9FC9D15F03CFDEBA3B3F4210A2AB3B53305CDA* L_14 = ___1_number;
		NumberBuffer_t0F9FC9D15F03CFDEBA3B3F4210A2AB3B53305CDA* L_15 = ___1_number;
		int32_t L_16 = L_15->___scale_1;
		int32_t L_17 = ___3_nMaxDigits;
		il2cpp_codegen_runtime_class_init_inline(Number_t006CBC9914386BB171582F4C3A3EEB2EE404D461_il2cpp_TypeInfo_var);
		Number_RoundNumber_m4CF4E60F6BB2595CAF7D220275299620A954CAA0(L_14, ((int32_t)il2cpp_codegen_add(L_16, L_17)), NULL);
		ValueStringBuilder_tEBD54C46E3AF8527BD0D234124F5C1AC14E9E251* L_18 = ___0_sb;
		NumberBuffer_t0F9FC9D15F03CFDEBA3B3F4210A2AB3B53305CDA* L_19 = ___1_number;
		int32_t L_20 = V_0;
		int32_t L_21 = ___3_nMaxDigits;
		NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* L_22 = ___4_info;
		Number_FormatCurrency_m097DB55A0D1FC114CC86AF8F08F56A8AFEDC93DD(L_18, L_19, L_20, L_21, L_22, NULL);
		return;
	}

IL_00a1:
	{
		int32_t L_23 = ___3_nMaxDigits;
		if ((((int32_t)L_23) >= ((int32_t)0)))
		{
			goto IL_00b2;
		}
	}
	{
		NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* L_24 = ___4_info;
		NullCheck(L_24);
		int32_t L_25;
		L_25 = NumberFormatInfo_get_NumberDecimalDigits_m5EB881B449699981560942A65714C5D5CBA897BD_inline(L_24, NULL);
		int32_t L_26 = L_25;
		V_0 = L_26;
		___3_nMaxDigits = L_26;
		goto IL_00b4;
	}

IL_00b2:
	{
		int32_t L_27 = ___3_nMaxDigits;
		V_0 = L_27;
	}

IL_00b4:
	{
		NumberBuffer_t0F9FC9D15F03CFDEBA3B3F4210A2AB3B53305CDA* L_28 = ___1_number;
		NumberBuffer_t0F9FC9D15F03CFDEBA3B3F4210A2AB3B53305CDA* L_29 = ___1_number;
		int32_t L_30 = L_29->___scale_1;
		int32_t L_31 = ___3_nMaxDigits;
		il2cpp_codegen_runtime_class_init_inline(Number_t006CBC9914386BB171582F4C3A3EEB2EE404D461_il2cpp_TypeInfo_var);
		Number_RoundNumber_m4CF4E60F6BB2595CAF7D220275299620A954CAA0(L_28, ((int32_t)il2cpp_codegen_add(L_30, L_31)), NULL);
		NumberBuffer_t0F9FC9D15F03CFDEBA3B3F4210A2AB3B53305CDA* L_32 = ___1_number;
		bool L_33 = L_32->___sign_2;
		if (!L_33)
		{
			goto IL_00d7;
		}
	}
	{
		ValueStringBuilder_tEBD54C46E3AF8527BD0D234124F5C1AC14E9E251* L_34 = ___0_sb;
		NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* L_35 = ___4_info;
		NullCheck(L_35);
		String_t* L_36;
		L_36 = NumberFormatInfo_get_NegativeSign_m7744D30B65FFC7D00CDD1CCF7E53D3722D350E7C_inline(L_35, NULL);
		ValueStringBuilder_Append_m4F9C03D9B78FD7AE877AAC57178D2F84AD2956CF_inline(L_34, L_36, NULL);
	}

IL_00d7:
	{
		ValueStringBuilder_tEBD54C46E3AF8527BD0D234124F5C1AC14E9E251* L_37 = ___0_sb;
		NumberBuffer_t0F9FC9D15F03CFDEBA3B3F4210A2AB3B53305CDA* L_38 = ___1_number;
		int32_t L_39 = V_0;
		int32_t L_40 = ___3_nMaxDigits;
		NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* L_41 = ___4_info;
		NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* L_42 = ___4_info;
		NullCheck(L_42);
		String_t* L_43;
		L_43 = NumberFormatInfo_get_NumberDecimalSeparator_m7413FA8739F3FA6F5D61B54331DBF3232FC6BFC7_inline(L_42, NULL);
		il2cpp_codegen_runtime_class_init_inline(Number_t006CBC9914386BB171582F4C3A3EEB2EE404D461_il2cpp_TypeInfo_var);
		Number_FormatFixed_m0AE79A769FD61DE736216A34F723B8D7D793C1BB(L_37, L_38, L_39, L_40, L_41, (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL, L_43, (String_t*)NULL, NULL);
		return;
	}

IL_00ec:
	{
		int32_t L_44 = ___3_nMaxDigits;
		if ((((int32_t)L_44) >= ((int32_t)0)))
		{
			goto IL_00fd;
		}
	}
	{
		NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* L_45 = ___4_info;
		NullCheck(L_45);
		int32_t L_46;
		L_46 = NumberFormatInfo_get_NumberDecimalDigits_m5EB881B449699981560942A65714C5D5CBA897BD_inline(L_45, NULL);
		int32_t L_47 = L_46;
		V_0 = L_47;
		___3_nMaxDigits = L_47;
		goto IL_00ff;
	}

IL_00fd:
	{
		int32_t L_48 = ___3_nMaxDigits;
		V_0 = L_48;
	}

IL_00ff:
	{
		NumberBuffer_t0F9FC9D15F03CFDEBA3B3F4210A2AB3B53305CDA* L_49 = ___1_number;
		NumberBuffer_t0F9FC9D15F03CFDEBA3B3F4210A2AB3B53305CDA* L_50 = ___1_number;
		int32_t L_51 = L_50->___scale_1;
		int32_t L_52 = ___3_nMaxDigits;
		il2cpp_codegen_runtime_class_init_inline(Number_t006CBC9914386BB171582F4C3A3EEB2EE404D461_il2cpp_TypeInfo_var);
		Number_RoundNumber_m4CF4E60F6BB2595CAF7D220275299620A954CAA0(L_49, ((int32_t)il2cpp_codegen_add(L_51, L_52)), NULL);
		ValueStringBuilder_tEBD54C46E3AF8527BD0D234124F5C1AC14E9E251* L_53 = ___0_sb;
		NumberBuffer_t0F9FC9D15F03CFDEBA3B3F4210A2AB3B53305CDA* L_54 = ___1_number;
		int32_t L_55 = V_0;
		int32_t L_56 = ___3_nMaxDigits;
		NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* L_57 = ___4_info;
		Number_FormatNumber_m24CDBE74E5644DDE85C931202384C04F91951EA6(L_53, L_54, L_55, L_56, L_57, NULL);
		return;
	}

IL_0119:
	{
		int32_t L_58 = ___3_nMaxDigits;
		if ((((int32_t)L_58) >= ((int32_t)0)))
		{
			goto IL_0124;
		}
	}
	{
		int32_t L_59 = 6;
		V_0 = L_59;
		___3_nMaxDigits = L_59;
		goto IL_0126;
	}

IL_0124:
	{
		int32_t L_60 = ___3_nMaxDigits;
		V_0 = L_60;
	}

IL_0126:
	{
		int32_t L_61 = ___3_nMaxDigits;
		___3_nMaxDigits = ((int32_t)il2cpp_codegen_add(L_61, 1));
		NumberBuffer_t0F9FC9D15F03CFDEBA3B3F4210A2AB3B53305CDA* L_62 = ___1_number;
		int32_t L_63 = ___3_nMaxDigits;
		il2cpp_codegen_runtime_class_init_inline(Number_t006CBC9914386BB171582F4C3A3EEB2EE404D461_il2cpp_TypeInfo_var);
		Number_RoundNumber_m4CF4E60F6BB2595CAF7D220275299620A954CAA0(L_62, L_63, NULL);
		NumberBuffer_t0F9FC9D15F03CFDEBA3B3F4210A2AB3B53305CDA* L_64 = ___1_number;
		bool L_65 = L_64->___sign_2;
		if (!L_65)
		{
			goto IL_0147;
		}
	}
	{
		ValueStringBuilder_tEBD54C46E3AF8527BD0D234124F5C1AC14E9E251* L_66 = ___0_sb;
		NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* L_67 = ___4_info;
		NullCheck(L_67);
		String_t* L_68;
		L_68 = NumberFormatInfo_get_NegativeSign_m7744D30B65FFC7D00CDD1CCF7E53D3722D350E7C_inline(L_67, NULL);
		ValueStringBuilder_Append_m4F9C03D9B78FD7AE877AAC57178D2F84AD2956CF_inline(L_66, L_68, NULL);
	}

IL_0147:
	{
		ValueStringBuilder_tEBD54C46E3AF8527BD0D234124F5C1AC14E9E251* L_69 = ___0_sb;
		NumberBuffer_t0F9FC9D15F03CFDEBA3B3F4210A2AB3B53305CDA* L_70 = ___1_number;
		int32_t L_71 = V_0;
		int32_t L_72 = ___3_nMaxDigits;
		NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* L_73 = ___4_info;
		Il2CppChar L_74 = ___2_format;
		il2cpp_codegen_runtime_class_init_inline(Number_t006CBC9914386BB171582F4C3A3EEB2EE404D461_il2cpp_TypeInfo_var);
		Number_FormatScientific_m2F27814915B4A407DE4F3692B2EECE8AD267C358(L_69, L_70, L_71, L_72, L_73, L_74, NULL);
		return;
	}

IL_0154:
	{
		V_1 = (bool)1;
		int32_t L_75 = ___3_nMaxDigits;
		if ((((int32_t)L_75) >= ((int32_t)1)))
		{
			goto IL_0178;
		}
	}
	{
		bool L_76 = ___5_isDecimal;
		if (!L_76)
		{
			goto IL_016c;
		}
	}
	{
		int32_t L_77 = ___3_nMaxDigits;
		if ((!(((uint32_t)L_77) == ((uint32_t)(-1)))))
		{
			goto IL_016c;
		}
	}
	{
		int32_t L_78 = ((int32_t)29);
		V_0 = L_78;
		___3_nMaxDigits = L_78;
		V_1 = (bool)0;
		goto IL_017a;
	}

IL_016c:
	{
		NumberBuffer_t0F9FC9D15F03CFDEBA3B3F4210A2AB3B53305CDA* L_79 = ___1_number;
		int32_t L_80 = L_79->___precision_0;
		int32_t L_81 = L_80;
		V_0 = L_81;
		___3_nMaxDigits = L_81;
		goto IL_017a;
	}

IL_0178:
	{
		int32_t L_82 = ___3_nMaxDigits;
		V_0 = L_82;
	}

IL_017a:
	{
		bool L_83 = V_1;
		if (!L_83)
		{
			goto IL_0186;
		}
	}
	{
		NumberBuffer_t0F9FC9D15F03CFDEBA3B3F4210A2AB3B53305CDA* L_84 = ___1_number;
		int32_t L_85 = ___3_nMaxDigits;
		il2cpp_codegen_runtime_class_init_inline(Number_t006CBC9914386BB171582F4C3A3EEB2EE404D461_il2cpp_TypeInfo_var);
		Number_RoundNumber_m4CF4E60F6BB2595CAF7D220275299620A954CAA0(L_84, L_85, NULL);
		goto IL_019a;
	}

IL_0186:
	{
		bool L_86 = ___5_isDecimal;
		if (!L_86)
		{
			goto IL_019a;
		}
	}
	{
		NumberBuffer_t0F9FC9D15F03CFDEBA3B3F4210A2AB3B53305CDA* L_87 = ___1_number;
		Il2CppChar* L_88;
		L_88 = NumberBuffer_get_digits_mB2D6183F180088A57C57ED5FBA7BDD4CDF4A369A_inline(L_87, NULL);
		int32_t L_89 = *((uint16_t*)L_88);
		if (L_89)
		{
			goto IL_019a;
		}
	}
	{
		NumberBuffer_t0F9FC9D15F03CFDEBA3B3F4210A2AB3B53305CDA* L_90 = ___1_number;
		L_90->___sign_2 = (bool)0;
	}

IL_019a:
	{
		NumberBuffer_t0F9FC9D15F03CFDEBA3B3F4210A2AB3B53305CDA* L_91 = ___1_number;
		bool L_92 = L_91->___sign_2;
		if (!L_92)
		{
			goto IL_01af;
		}
	}
	{
		ValueStringBuilder_tEBD54C46E3AF8527BD0D234124F5C1AC14E9E251* L_93 = ___0_sb;
		NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* L_94 = ___4_info;
		NullCheck(L_94);
		String_t* L_95;
		L_95 = NumberFormatInfo_get_NegativeSign_m7744D30B65FFC7D00CDD1CCF7E53D3722D350E7C_inline(L_94, NULL);
		ValueStringBuilder_Append_m4F9C03D9B78FD7AE877AAC57178D2F84AD2956CF_inline(L_93, L_95, NULL);
	}

IL_01af:
	{
		ValueStringBuilder_tEBD54C46E3AF8527BD0D234124F5C1AC14E9E251* L_96 = ___0_sb;
		NumberBuffer_t0F9FC9D15F03CFDEBA3B3F4210A2AB3B53305CDA* L_97 = ___1_number;
		int32_t L_98 = V_0;
		int32_t L_99 = ___3_nMaxDigits;
		NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* L_100 = ___4_info;
		Il2CppChar L_101 = ___2_format;
		bool L_102 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Number_t006CBC9914386BB171582F4C3A3EEB2EE404D461_il2cpp_TypeInfo_var);
		Number_FormatGeneral_m68D4F0A31B064E3FDF311EFF410D774C0D3BAF0A(L_96, L_97, L_98, L_99, L_100, ((int32_t)(uint16_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_101, 2))), (bool)((((int32_t)L_102) == ((int32_t)0))? 1 : 0), NULL);
		return;
	}

IL_01c3:
	{
		int32_t L_103 = ___3_nMaxDigits;
		if ((((int32_t)L_103) >= ((int32_t)0)))
		{
			goto IL_01d4;
		}
	}
	{
		NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* L_104 = ___4_info;
		NullCheck(L_104);
		int32_t L_105;
		L_105 = NumberFormatInfo_get_PercentDecimalDigits_m49B53E03F294674AA1B20B77C56E10721BA8643D_inline(L_104, NULL);
		int32_t L_106 = L_105;
		V_0 = L_106;
		___3_nMaxDigits = L_106;
		goto IL_01d6;
	}

IL_01d4:
	{
		int32_t L_107 = ___3_nMaxDigits;
		V_0 = L_107;
	}

IL_01d6:
	{
		NumberBuffer_t0F9FC9D15F03CFDEBA3B3F4210A2AB3B53305CDA* L_108 = ___1_number;
		int32_t* L_109 = (&L_108->___scale_1);
		int32_t* L_110 = L_109;
		int32_t L_111 = *((int32_t*)L_110);
		*((int32_t*)L_110) = (int32_t)((int32_t)il2cpp_codegen_add(L_111, 2));
		NumberBuffer_t0F9FC9D15F03CFDEBA3B3F4210A2AB3B53305CDA* L_112 = ___1_number;
		NumberBuffer_t0F9FC9D15F03CFDEBA3B3F4210A2AB3B53305CDA* L_113 = ___1_number;
		int32_t L_114 = L_113->___scale_1;
		int32_t L_115 = ___3_nMaxDigits;
		il2cpp_codegen_runtime_class_init_inline(Number_t006CBC9914386BB171582F4C3A3EEB2EE404D461_il2cpp_TypeInfo_var);
		Number_RoundNumber_m4CF4E60F6BB2595CAF7D220275299620A954CAA0(L_112, ((int32_t)il2cpp_codegen_add(L_114, L_115)), NULL);
		ValueStringBuilder_tEBD54C46E3AF8527BD0D234124F5C1AC14E9E251* L_116 = ___0_sb;
		NumberBuffer_t0F9FC9D15F03CFDEBA3B3F4210A2AB3B53305CDA* L_117 = ___1_number;
		int32_t L_118 = V_0;
		int32_t L_119 = ___3_nMaxDigits;
		NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* L_120 = ___4_info;
		Number_FormatPercent_m765FF9BE8896DA80FDBC469B9EB40732C521B85D(L_116, L_117, L_118, L_119, L_120, NULL);
		return;
	}

IL_01fb:
	{
		FormatException_tCD210E92627903FFEDAAA706C08FB6222B4D012B* L_121 = (FormatException_tCD210E92627903FFEDAAA706C08FB6222B4D012B*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&FormatException_tCD210E92627903FFEDAAA706C08FB6222B4D012B_il2cpp_TypeInfo_var)));
		FormatException__ctor_mE04AEA59C0EEFF4BD34B7CE8601F9D331D1D473E(L_121, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralCA04D202AC5F9C676BB75B6E26B16EE1F062729C)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_121, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Number_NumberToString_mB02B6AFBEEF66C19BB094F00189CC8E15A16AD18_RuntimeMethod_var)));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Number_FormatCurrency_m097DB55A0D1FC114CC86AF8F08F56A8AFEDC93DD (ValueStringBuilder_tEBD54C46E3AF8527BD0D234124F5C1AC14E9E251* ___0_sb, NumberBuffer_t0F9FC9D15F03CFDEBA3B3F4210A2AB3B53305CDA* ___1_number, int32_t ___2_nMinDigits, int32_t ___3_nMaxDigits, NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* ___4_info, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Number_t006CBC9914386BB171582F4C3A3EEB2EE404D461_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	int32_t V_1 = 0;
	Il2CppChar V_2 = 0x0;
	String_t* G_B3_0 = NULL;
	{
		NumberBuffer_t0F9FC9D15F03CFDEBA3B3F4210A2AB3B53305CDA* L_0 = ___1_number;
		bool L_1 = L_0->___sign_2;
		if (L_1)
		{
			goto IL_0017;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Number_t006CBC9914386BB171582F4C3A3EEB2EE404D461_il2cpp_TypeInfo_var);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_2 = ((Number_t006CBC9914386BB171582F4C3A3EEB2EE404D461_StaticFields*)il2cpp_codegen_static_fields_for(Number_t006CBC9914386BB171582F4C3A3EEB2EE404D461_il2cpp_TypeInfo_var))->___s_posCurrencyFormats_0;
		NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* L_3 = ___4_info;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = NumberFormatInfo_get_CurrencyPositivePattern_m253954FD1F79EB2F9B12070A348E8E1DB0E75263_inline(L_3, NULL);
		NullCheck(L_2);
		int32_t L_5 = L_4;
		String_t* L_6 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		G_B3_0 = L_6;
		goto IL_0024;
	}

IL_0017:
	{
		il2cpp_codegen_runtime_class_init_inline(Number_t006CBC9914386BB171582F4C3A3EEB2EE404D461_il2cpp_TypeInfo_var);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_7 = ((Number_t006CBC9914386BB171582F4C3A3EEB2EE404D461_StaticFields*)il2cpp_codegen_static_fields_for(Number_t006CBC9914386BB171582F4C3A3EEB2EE404D461_il2cpp_TypeInfo_var))->___s_negCurrencyFormats_1;
		NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* L_8 = ___4_info;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = NumberFormatInfo_get_CurrencyNegativePattern_m35EAAAC0517F13B43B444B82343F14D9B0A14FC4_inline(L_8, NULL);
		NullCheck(L_7);
		int32_t L_10 = L_9;
		String_t* L_11 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		G_B3_0 = L_11;
	}

IL_0024:
	{
		V_0 = G_B3_0;
		V_1 = 0;
		goto IL_008d;
	}

IL_0029:
	{
		String_t* L_12 = V_0;
		int32_t L_13 = V_1;
		NullCheck(L_12);
		Il2CppChar L_14;
		L_14 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_12, L_13, NULL);
		V_2 = L_14;
		Il2CppChar L_15 = V_2;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)35))))
		{
			goto IL_0042;
		}
	}
	{
		Il2CppChar L_16 = V_2;
		if ((((int32_t)L_16) == ((int32_t)((int32_t)36))))
		{
			goto IL_0073;
		}
	}
	{
		Il2CppChar L_17 = V_2;
		if ((((int32_t)L_17) == ((int32_t)((int32_t)45))))
		{
			goto IL_0064;
		}
	}
	{
		goto IL_0082;
	}

IL_0042:
	{
		ValueStringBuilder_tEBD54C46E3AF8527BD0D234124F5C1AC14E9E251* L_18 = ___0_sb;
		NumberBuffer_t0F9FC9D15F03CFDEBA3B3F4210A2AB3B53305CDA* L_19 = ___1_number;
		int32_t L_20 = ___2_nMinDigits;
		int32_t L_21 = ___3_nMaxDigits;
		NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* L_22 = ___4_info;
		NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* L_23 = ___4_info;
		NullCheck(L_23);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_24;
		L_24 = NumberFormatInfo_get_CurrencyGroupSizes_mA65056791CE7754317B7502465C488E2126591BA(L_23, NULL);
		NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* L_25 = ___4_info;
		NullCheck(L_25);
		String_t* L_26;
		L_26 = NumberFormatInfo_get_CurrencyDecimalSeparator_mBAD4DAC07DC995653374C16BFB02E6CF2CA121BD_inline(L_25, NULL);
		NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* L_27 = ___4_info;
		NullCheck(L_27);
		String_t* L_28;
		L_28 = NumberFormatInfo_get_CurrencyGroupSeparator_mE8F7687A3D4812C75092E30554B4C15C974441BD_inline(L_27, NULL);
		il2cpp_codegen_runtime_class_init_inline(Number_t006CBC9914386BB171582F4C3A3EEB2EE404D461_il2cpp_TypeInfo_var);
		Number_FormatFixed_m0AE79A769FD61DE736216A34F723B8D7D793C1BB(L_18, L_19, L_20, L_21, L_22, L_24, L_26, L_28, NULL);
		goto IL_0089;
	}

IL_0064:
	{
		ValueStringBuilder_tEBD54C46E3AF8527BD0D234124F5C1AC14E9E251* L_29 = ___0_sb;
		NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* L_30 = ___4_info;
		NullCheck(L_30);
		String_t* L_31;
		L_31 = NumberFormatInfo_get_NegativeSign_m7744D30B65FFC7D00CDD1CCF7E53D3722D350E7C_inline(L_30, NULL);
		ValueStringBuilder_Append_m4F9C03D9B78FD7AE877AAC57178D2F84AD2956CF_inline(L_29, L_31, NULL);
		goto IL_0089;
	}

IL_0073:
	{
		ValueStringBuilder_tEBD54C46E3AF8527BD0D234124F5C1AC14E9E251* L_32 = ___0_sb;
		NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* L_33 = ___4_info;
		NullCheck(L_33);
		String_t* L_34;
		L_34 = NumberFormatInfo_get_CurrencySymbol_m69E8700B6E102ADA1351AD4C6BBC7779D9F13F43_inline(L_33, NULL);
		ValueStringBuilder_Append_m4F9C03D9B78FD7AE877AAC57178D2F84AD2956CF_inline(L_32, L_34, NULL);
		goto IL_0089;
	}

IL_0082:
	{
		ValueStringBuilder_tEBD54C46E3AF8527BD0D234124F5C1AC14E9E251* L_35 = ___0_sb;
		Il2CppChar L_36 = V_2;
		ValueStringBuilder_Append_mBB79BFE6EAB412D689B7D6675A6E0BC3F6FCDFCC_inline(L_35, L_36, NULL);
	}

IL_0089:
	{
		int32_t L_37 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_37, 1));
	}

IL_008d:
	{
		int32_t L_38 = V_1;
		String_t* L_39 = V_0;
		NullCheck(L_39);
		int32_t L_40;
		L_40 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_39, NULL);
		if ((((int32_t)L_38) < ((int32_t)L_40)))
		{
			goto IL_0029;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Number_wcslen_mCD526D9E32ECC29B992889CBDBC18EFF2F3F7CC4 (Il2CppChar* ___0_s, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		V_0 = 0;
		goto IL_0008;
	}

IL_0004:
	{
		int32_t L_0 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_0, 1));
	}

IL_0008:
	{
		Il2CppChar* L_1 = ___0_s;
		Il2CppChar* L_2 = L_1;
		___0_s = ((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_2, 2));
		int32_t L_3 = *((uint16_t*)L_2);
		if (L_3)
		{
			goto IL_0004;
		}
	}
	{
		int32_t L_4 = V_0;
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Number_FormatFixed_m0AE79A769FD61DE736216A34F723B8D7D793C1BB (ValueStringBuilder_tEBD54C46E3AF8527BD0D234124F5C1AC14E9E251* ___0_sb, NumberBuffer_t0F9FC9D15F03CFDEBA3B3F4210A2AB3B53305CDA* ___1_number, int32_t ___2_nMinDigits, int32_t ___3_nMaxDigits, NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* ___4_info, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___5_groupDigits, String_t* ___6_sDecimal, String_t* ___7_sGroup, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Number_FormatFixed_m0AE79A769FD61DE736216A34F723B8D7D793C1BB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Number_t006CBC9914386BB171582F4C3A3EEB2EE404D461_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Il2CppChar* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	Il2CppChar* V_9 = NULL;
	int32_t V_10 = 0;
	int32_t V_11 = 0;
	Il2CppChar* V_12 = NULL;
	int32_t V_13 = 0;
	int32_t V_14 = 0;
	int32_t V_15 = 0;
	int32_t V_16 = 0;
	int32_t G_B17_0 = 0;
	Il2CppChar* G_B20_0 = NULL;
	Il2CppChar* G_B19_0 = NULL;
	int32_t G_B21_0 = 0;
	Il2CppChar* G_B21_1 = NULL;
	ValueStringBuilder_tEBD54C46E3AF8527BD0D234124F5C1AC14E9E251* G_B42_0 = NULL;
	ValueStringBuilder_tEBD54C46E3AF8527BD0D234124F5C1AC14E9E251* G_B41_0 = NULL;
	int32_t G_B43_0 = 0;
	ValueStringBuilder_tEBD54C46E3AF8527BD0D234124F5C1AC14E9E251* G_B43_1 = NULL;
	{
		NumberBuffer_t0F9FC9D15F03CFDEBA3B3F4210A2AB3B53305CDA* L_0 = ___1_number;
		int32_t L_1 = L_0->___scale_1;
		V_0 = L_1;
		NumberBuffer_t0F9FC9D15F03CFDEBA3B3F4210A2AB3B53305CDA* L_2 = ___1_number;
		Il2CppChar* L_3;
		L_3 = NumberBuffer_get_digits_mB2D6183F180088A57C57ED5FBA7BDD4CDF4A369A_inline(L_2, NULL);
		V_1 = L_3;
		Il2CppChar* L_4 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Number_t006CBC9914386BB171582F4C3A3EEB2EE404D461_il2cpp_TypeInfo_var);
		int32_t L_5;
		L_5 = Number_wcslen_mCD526D9E32ECC29B992889CBDBC18EFF2F3F7CC4(L_4, NULL);
		V_2 = L_5;
		int32_t L_6 = V_0;
		if ((((int32_t)L_6) <= ((int32_t)0)))
		{
			goto IL_016b;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_7 = ___5_groupDigits;
		if (!L_7)
		{
			goto IL_0140;
		}
	}
	{
		V_3 = 0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_8 = ___5_groupDigits;
		int32_t L_9 = V_3;
		NullCheck(L_8);
		int32_t L_10 = L_9;
		int32_t L_11 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		V_4 = L_11;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_12 = ___5_groupDigits;
		NullCheck(L_12);
		V_5 = ((int32_t)(((RuntimeArray*)L_12)->max_length));
		int32_t L_13 = V_0;
		V_6 = L_13;
		String_t* L_14 = ___7_sGroup;
		NullCheck(L_14);
		int32_t L_15;
		L_15 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_14, NULL);
		V_7 = L_15;
		V_8 = 0;
		int32_t L_16 = V_5;
		if (!L_16)
		{
			goto IL_008f;
		}
	}
	{
		goto IL_007b;
	}

IL_0046:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_17 = ___5_groupDigits;
		int32_t L_18 = V_3;
		NullCheck(L_17);
		int32_t L_19 = L_18;
		int32_t L_20 = (L_17)->GetAt(static_cast<il2cpp_array_size_t>(L_19));
		V_8 = L_20;
		int32_t L_21 = V_8;
		if (!L_21)
		{
			goto IL_0080;
		}
	}
	{
		int32_t L_22 = V_6;
		int32_t L_23 = V_7;
		V_6 = ((int32_t)il2cpp_codegen_add(L_22, L_23));
		int32_t L_24 = V_3;
		int32_t L_25 = V_5;
		if ((((int32_t)L_24) >= ((int32_t)((int32_t)il2cpp_codegen_subtract(L_25, 1)))))
		{
			goto IL_0062;
		}
	}
	{
		int32_t L_26 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_26, 1));
	}

IL_0062:
	{
		int32_t L_27 = V_4;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_28 = ___5_groupDigits;
		int32_t L_29 = V_3;
		NullCheck(L_28);
		int32_t L_30 = L_29;
		int32_t L_31 = (L_28)->GetAt(static_cast<il2cpp_array_size_t>(L_30));
		V_4 = ((int32_t)il2cpp_codegen_add(L_27, L_31));
		int32_t L_32 = V_4;
		if ((((int32_t)L_32) < ((int32_t)0)))
		{
			goto IL_0075;
		}
	}
	{
		int32_t L_33 = V_6;
		if ((((int32_t)L_33) >= ((int32_t)0)))
		{
			goto IL_007b;
		}
	}

IL_0075:
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_34 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mB596C51BFA864B65C2CED275458FAE90F7CD29C9(L_34, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_34, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Number_FormatFixed_m0AE79A769FD61DE736216A34F723B8D7D793C1BB_RuntimeMethod_var)));
	}

IL_007b:
	{
		int32_t L_35 = V_0;
		int32_t L_36 = V_4;
		if ((((int32_t)L_35) > ((int32_t)L_36)))
		{
			goto IL_0046;
		}
	}

IL_0080:
	{
		int32_t L_37 = V_4;
		if (L_37)
		{
			goto IL_0089;
		}
	}
	{
		V_8 = 0;
		goto IL_008f;
	}

IL_0089:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_38 = ___5_groupDigits;
		NullCheck(L_38);
		int32_t L_39 = 0;
		int32_t L_40 = (L_38)->GetAt(static_cast<il2cpp_array_size_t>(L_39));
		V_8 = L_40;
	}

IL_008f:
	{
		int32_t L_41 = V_6;
		if ((uintptr_t)((uintptr_t)L_41) * (uintptr_t)2 > (uintptr_t)kIl2CppUIntPtrMax)
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), Number_FormatFixed_m0AE79A769FD61DE736216A34F723B8D7D793C1BB_RuntimeMethod_var);
		intptr_t L_42 = ((intptr_t)il2cpp_codegen_multiply((intptr_t)((uintptr_t)L_41), 2));
		int8_t* L_43 = (int8_t*) (L_42 ? alloca(L_42) : NULL);
		memset(L_43, 0, L_42);
		V_9 = (Il2CppChar*)(L_43);
		V_3 = 0;
		V_10 = 0;
		int32_t L_44 = V_0;
		int32_t L_45 = V_2;
		if ((((int32_t)L_44) < ((int32_t)L_45)))
		{
			goto IL_00a4;
		}
	}
	{
		int32_t L_46 = V_2;
		G_B17_0 = L_46;
		goto IL_00a5;
	}

IL_00a4:
	{
		int32_t L_47 = V_0;
		G_B17_0 = L_47;
	}

IL_00a5:
	{
		V_11 = G_B17_0;
		Il2CppChar* L_48 = V_9;
		int32_t L_49 = V_6;
		V_12 = ((Il2CppChar*)il2cpp_codegen_subtract((intptr_t)((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_48, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_49), 2)))), 2));
		int32_t L_50 = V_0;
		V_13 = ((int32_t)il2cpp_codegen_subtract(L_50, 1));
		goto IL_0127;
	}

IL_00ba:
	{
		Il2CppChar* L_51 = V_12;
		Il2CppChar* L_52 = L_51;
		V_12 = ((Il2CppChar*)il2cpp_codegen_subtract((intptr_t)L_52, 2));
		int32_t L_53 = V_13;
		int32_t L_54 = V_11;
		if ((((int32_t)L_53) < ((int32_t)L_54)))
		{
			G_B20_0 = L_52;
			goto IL_00cb;
		}
		G_B19_0 = L_52;
	}
	{
		G_B21_0 = ((int32_t)48);
		G_B21_1 = G_B19_0;
		goto IL_00d3;
	}

IL_00cb:
	{
		Il2CppChar* L_55 = V_1;
		int32_t L_56 = V_13;
		int32_t L_57 = *((uint16_t*)((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_55, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_56), 2)))));
		G_B21_0 = L_57;
		G_B21_1 = G_B20_0;
	}

IL_00d3:
	{
		*((int16_t*)G_B21_1) = (int16_t)G_B21_0;
		int32_t L_58 = V_8;
		if ((((int32_t)L_58) <= ((int32_t)0)))
		{
			goto IL_0121;
		}
	}
	{
		int32_t L_59 = V_10;
		V_10 = ((int32_t)il2cpp_codegen_add(L_59, 1));
		int32_t L_60 = V_10;
		int32_t L_61 = V_8;
		if ((!(((uint32_t)L_60) == ((uint32_t)L_61))))
		{
			goto IL_0121;
		}
	}
	{
		int32_t L_62 = V_13;
		if (!L_62)
		{
			goto IL_0121;
		}
	}
	{
		int32_t L_63 = V_7;
		V_14 = ((int32_t)il2cpp_codegen_subtract(L_63, 1));
		goto IL_0108;
	}

IL_00f1:
	{
		Il2CppChar* L_64 = V_12;
		Il2CppChar* L_65 = L_64;
		V_12 = ((Il2CppChar*)il2cpp_codegen_subtract((intptr_t)L_65, 2));
		String_t* L_66 = ___7_sGroup;
		int32_t L_67 = V_14;
		NullCheck(L_66);
		Il2CppChar L_68;
		L_68 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_66, L_67, NULL);
		*((int16_t*)L_65) = (int16_t)L_68;
		int32_t L_69 = V_14;
		V_14 = ((int32_t)il2cpp_codegen_subtract(L_69, 1));
	}

IL_0108:
	{
		int32_t L_70 = V_14;
		if ((((int32_t)L_70) >= ((int32_t)0)))
		{
			goto IL_00f1;
		}
	}
	{
		int32_t L_71 = V_3;
		int32_t L_72 = V_5;
		if ((((int32_t)L_71) >= ((int32_t)((int32_t)il2cpp_codegen_subtract(L_72, 1)))))
		{
			goto IL_011e;
		}
	}
	{
		int32_t L_73 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_73, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_74 = ___5_groupDigits;
		int32_t L_75 = V_3;
		NullCheck(L_74);
		int32_t L_76 = L_75;
		int32_t L_77 = (L_74)->GetAt(static_cast<il2cpp_array_size_t>(L_76));
		V_8 = L_77;
	}

IL_011e:
	{
		V_10 = 0;
	}

IL_0121:
	{
		int32_t L_78 = V_13;
		V_13 = ((int32_t)il2cpp_codegen_subtract(L_78, 1));
	}

IL_0127:
	{
		int32_t L_79 = V_13;
		if ((((int32_t)L_79) >= ((int32_t)0)))
		{
			goto IL_00ba;
		}
	}
	{
		ValueStringBuilder_tEBD54C46E3AF8527BD0D234124F5C1AC14E9E251* L_80 = ___0_sb;
		Il2CppChar* L_81 = V_9;
		int32_t L_82 = V_6;
		ValueStringBuilder_Append_m58580EDC69E4BCFEFFE0A266FE36684AC660BBD6(L_80, L_81, L_82, NULL);
		Il2CppChar* L_83 = V_1;
		int32_t L_84 = V_11;
		V_1 = ((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_83, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_84), 2))));
		goto IL_0173;
	}

IL_0140:
	{
		int32_t L_85 = V_2;
		int32_t L_86 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		int32_t L_87;
		L_87 = Math_Min_m53C488772A34D53917BCA2A491E79A0A5356ED52(L_85, L_86, NULL);
		V_15 = L_87;
		ValueStringBuilder_tEBD54C46E3AF8527BD0D234124F5C1AC14E9E251* L_88 = ___0_sb;
		Il2CppChar* L_89 = V_1;
		int32_t L_90 = V_15;
		ValueStringBuilder_Append_m58580EDC69E4BCFEFFE0A266FE36684AC660BBD6(L_88, L_89, L_90, NULL);
		Il2CppChar* L_91 = V_1;
		int32_t L_92 = V_15;
		V_1 = ((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_91, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_92), 2))));
		int32_t L_93 = V_0;
		int32_t L_94 = V_2;
		if ((((int32_t)L_93) <= ((int32_t)L_94)))
		{
			goto IL_0173;
		}
	}
	{
		ValueStringBuilder_tEBD54C46E3AF8527BD0D234124F5C1AC14E9E251* L_95 = ___0_sb;
		int32_t L_96 = V_0;
		int32_t L_97 = V_2;
		ValueStringBuilder_Append_m4E46E62A9444CE58033DDB6EC5D9AE7CF02B48B0(L_95, ((int32_t)48), ((int32_t)il2cpp_codegen_subtract(L_96, L_97)), NULL);
		goto IL_0173;
	}

IL_016b:
	{
		ValueStringBuilder_tEBD54C46E3AF8527BD0D234124F5C1AC14E9E251* L_98 = ___0_sb;
		ValueStringBuilder_Append_mBB79BFE6EAB412D689B7D6675A6E0BC3F6FCDFCC_inline(L_98, ((int32_t)48), NULL);
	}

IL_0173:
	{
		int32_t L_99 = ___3_nMaxDigits;
		if ((((int32_t)L_99) <= ((int32_t)0)))
		{
			goto IL_01c5;
		}
	}
	{
		ValueStringBuilder_tEBD54C46E3AF8527BD0D234124F5C1AC14E9E251* L_100 = ___0_sb;
		String_t* L_101 = ___6_sDecimal;
		ValueStringBuilder_Append_m4F9C03D9B78FD7AE877AAC57178D2F84AD2956CF_inline(L_100, L_101, NULL);
		int32_t L_102 = V_0;
		if ((((int32_t)L_102) >= ((int32_t)0)))
		{
			goto IL_01c1;
		}
	}
	{
		int32_t L_103 = ___3_nMaxDigits;
		if ((((int32_t)L_103) <= ((int32_t)0)))
		{
			goto IL_01c1;
		}
	}
	{
		int32_t L_104 = V_0;
		int32_t L_105 = ___3_nMaxDigits;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		int32_t L_106;
		L_106 = Math_Min_m53C488772A34D53917BCA2A491E79A0A5356ED52(((-L_104)), L_105, NULL);
		V_16 = L_106;
		ValueStringBuilder_tEBD54C46E3AF8527BD0D234124F5C1AC14E9E251* L_107 = ___0_sb;
		int32_t L_108 = V_16;
		ValueStringBuilder_Append_m4E46E62A9444CE58033DDB6EC5D9AE7CF02B48B0(L_107, ((int32_t)48), L_108, NULL);
		int32_t L_109 = V_0;
		int32_t L_110 = V_16;
		V_0 = ((int32_t)il2cpp_codegen_add(L_109, L_110));
		int32_t L_111 = ___3_nMaxDigits;
		int32_t L_112 = V_16;
		___3_nMaxDigits = ((int32_t)il2cpp_codegen_subtract(L_111, L_112));
		goto IL_01c1;
	}

IL_01a8:
	{
		ValueStringBuilder_tEBD54C46E3AF8527BD0D234124F5C1AC14E9E251* L_113 = ___0_sb;
		Il2CppChar* L_114 = V_1;
		int32_t L_115 = *((uint16_t*)L_114);
		if (L_115)
		{
			G_B42_0 = L_113;
			goto IL_01b1;
		}
		G_B41_0 = L_113;
	}
	{
		G_B43_0 = ((int32_t)48);
		G_B43_1 = G_B41_0;
		goto IL_01b7;
	}

IL_01b1:
	{
		Il2CppChar* L_116 = V_1;
		Il2CppChar* L_117 = L_116;
		V_1 = ((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_117, 2));
		int32_t L_118 = *((uint16_t*)L_117);
		G_B43_0 = L_118;
		G_B43_1 = G_B42_0;
	}

IL_01b7:
	{
		ValueStringBuilder_Append_mBB79BFE6EAB412D689B7D6675A6E0BC3F6FCDFCC_inline(G_B43_1, G_B43_0, NULL);
		int32_t L_119 = ___3_nMaxDigits;
		___3_nMaxDigits = ((int32_t)il2cpp_codegen_subtract(L_119, 1));
	}

IL_01c1:
	{
		int32_t L_120 = ___3_nMaxDigits;
		if ((((int32_t)L_120) > ((int32_t)0)))
		{
			goto IL_01a8;
		}
	}

IL_01c5:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Number_FormatNumber_m24CDBE74E5644DDE85C931202384C04F91951EA6 (ValueStringBuilder_tEBD54C46E3AF8527BD0D234124F5C1AC14E9E251* ___0_sb, NumberBuffer_t0F9FC9D15F03CFDEBA3B3F4210A2AB3B53305CDA* ___1_number, int32_t ___2_nMinDigits, int32_t ___3_nMaxDigits, NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* ___4_info, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Number_t006CBC9914386BB171582F4C3A3EEB2EE404D461_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	int32_t V_1 = 0;
	Il2CppChar V_2 = 0x0;
	String_t* G_B3_0 = NULL;
	{
		NumberBuffer_t0F9FC9D15F03CFDEBA3B3F4210A2AB3B53305CDA* L_0 = ___1_number;
		bool L_1 = L_0->___sign_2;
		if (L_1)
		{
			goto IL_000f;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Number_t006CBC9914386BB171582F4C3A3EEB2EE404D461_il2cpp_TypeInfo_var);
		String_t* L_2 = ((Number_t006CBC9914386BB171582F4C3A3EEB2EE404D461_StaticFields*)il2cpp_codegen_static_fields_for(Number_t006CBC9914386BB171582F4C3A3EEB2EE404D461_il2cpp_TypeInfo_var))->___s_posNumberFormat_5;
		G_B3_0 = L_2;
		goto IL_001c;
	}

IL_000f:
	{
		il2cpp_codegen_runtime_class_init_inline(Number_t006CBC9914386BB171582F4C3A3EEB2EE404D461_il2cpp_TypeInfo_var);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_3 = ((Number_t006CBC9914386BB171582F4C3A3EEB2EE404D461_StaticFields*)il2cpp_codegen_static_fields_for(Number_t006CBC9914386BB171582F4C3A3EEB2EE404D461_il2cpp_TypeInfo_var))->___s_negNumberFormats_4;
		NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* L_4 = ___4_info;
		NullCheck(L_4);
		int32_t L_5;
		L_5 = NumberFormatInfo_get_NumberNegativePattern_mB2D78035F14DA736695A2476B33B70A8BE3DB772_inline(L_4, NULL);
		NullCheck(L_3);
		int32_t L_6 = L_5;
		String_t* L_7 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		G_B3_0 = L_7;
	}

IL_001c:
	{
		V_0 = G_B3_0;
		V_1 = 0;
		goto IL_0071;
	}

IL_0021:
	{
		String_t* L_8 = V_0;
		int32_t L_9 = V_1;
		NullCheck(L_8);
		Il2CppChar L_10;
		L_10 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_8, L_9, NULL);
		V_2 = L_10;
		Il2CppChar L_11 = V_2;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)35))))
		{
			goto IL_0035;
		}
	}
	{
		Il2CppChar L_12 = V_2;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)45))))
		{
			goto IL_0057;
		}
	}
	{
		goto IL_0066;
	}

IL_0035:
	{
		ValueStringBuilder_tEBD54C46E3AF8527BD0D234124F5C1AC14E9E251* L_13 = ___0_sb;
		NumberBuffer_t0F9FC9D15F03CFDEBA3B3F4210A2AB3B53305CDA* L_14 = ___1_number;
		int32_t L_15 = ___2_nMinDigits;
		int32_t L_16 = ___3_nMaxDigits;
		NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* L_17 = ___4_info;
		NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* L_18 = ___4_info;
		NullCheck(L_18);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_19;
		L_19 = NumberFormatInfo_get_NumberGroupSizes_m45DE41B24561ECB99B63B5714CEEC5D101EB15D9(L_18, NULL);
		NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* L_20 = ___4_info;
		NullCheck(L_20);
		String_t* L_21;
		L_21 = NumberFormatInfo_get_NumberDecimalSeparator_m7413FA8739F3FA6F5D61B54331DBF3232FC6BFC7_inline(L_20, NULL);
		NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* L_22 = ___4_info;
		NullCheck(L_22);
		String_t* L_23;
		L_23 = NumberFormatInfo_get_NumberGroupSeparator_m0556B092AA471513B1EDC31C047712226D39BEB6_inline(L_22, NULL);
		il2cpp_codegen_runtime_class_init_inline(Number_t006CBC9914386BB171582F4C3A3EEB2EE404D461_il2cpp_TypeInfo_var);
		Number_FormatFixed_m0AE79A769FD61DE736216A34F723B8D7D793C1BB(L_13, L_14, L_15, L_16, L_17, L_19, L_21, L_23, NULL);
		goto IL_006d;
	}

IL_0057:
	{
		ValueStringBuilder_tEBD54C46E3AF8527BD0D234124F5C1AC14E9E251* L_24 = ___0_sb;
		NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* L_25 = ___4_info;
		NullCheck(L_25);
		String_t* L_26;
		L_26 = NumberFormatInfo_get_NegativeSign_m7744D30B65FFC7D00CDD1CCF7E53D3722D350E7C_inline(L_25, NULL);
		ValueStringBuilder_Append_m4F9C03D9B78FD7AE877AAC57178D2F84AD2956CF_inline(L_24, L_26, NULL);
		goto IL_006d;
	}

IL_0066:
	{
		ValueStringBuilder_tEBD54C46E3AF8527BD0D234124F5C1AC14E9E251* L_27 = ___0_sb;
		Il2CppChar L_28 = V_2;
		ValueStringBuilder_Append_mBB79BFE6EAB412D689B7D6675A6E0BC3F6FCDFCC_inline(L_27, L_28, NULL);
	}

IL_006d:
	{
		int32_t L_29 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_29, 1));
	}

IL_0071:
	{
		int32_t L_30 = V_1;
		String_t* L_31 = V_0;
		NullCheck(L_31);
		int32_t L_32;
		L_32 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_31, NULL);
		if ((((int32_t)L_30) < ((int32_t)L_32)))
		{
			goto IL_0021;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Number_FormatScientific_m2F27814915B4A407DE4F3692B2EECE8AD267C358 (ValueStringBuilder_tEBD54C46E3AF8527BD0D234124F5C1AC14E9E251* ___0_sb, NumberBuffer_t0F9FC9D15F03CFDEBA3B3F4210A2AB3B53305CDA* ___1_number, int32_t ___2_nMinDigits, int32_t ___3_nMaxDigits, NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* ___4_info, Il2CppChar ___5_expChar, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Number_t006CBC9914386BB171582F4C3A3EEB2EE404D461_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Il2CppChar* V_0 = NULL;
	int32_t V_1 = 0;
	ValueStringBuilder_tEBD54C46E3AF8527BD0D234124F5C1AC14E9E251* G_B2_0 = NULL;
	ValueStringBuilder_tEBD54C46E3AF8527BD0D234124F5C1AC14E9E251* G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	ValueStringBuilder_tEBD54C46E3AF8527BD0D234124F5C1AC14E9E251* G_B3_1 = NULL;
	ValueStringBuilder_tEBD54C46E3AF8527BD0D234124F5C1AC14E9E251* G_B7_0 = NULL;
	ValueStringBuilder_tEBD54C46E3AF8527BD0D234124F5C1AC14E9E251* G_B6_0 = NULL;
	int32_t G_B8_0 = 0;
	ValueStringBuilder_tEBD54C46E3AF8527BD0D234124F5C1AC14E9E251* G_B8_1 = NULL;
	int32_t G_B13_0 = 0;
	{
		NumberBuffer_t0F9FC9D15F03CFDEBA3B3F4210A2AB3B53305CDA* L_0 = ___1_number;
		Il2CppChar* L_1;
		L_1 = NumberBuffer_get_digits_mB2D6183F180088A57C57ED5FBA7BDD4CDF4A369A_inline(L_0, NULL);
		V_0 = L_1;
		ValueStringBuilder_tEBD54C46E3AF8527BD0D234124F5C1AC14E9E251* L_2 = ___0_sb;
		Il2CppChar* L_3 = V_0;
		int32_t L_4 = *((uint16_t*)L_3);
		if (L_4)
		{
			G_B2_0 = L_2;
			goto IL_0010;
		}
		G_B1_0 = L_2;
	}
	{
		G_B3_0 = ((int32_t)48);
		G_B3_1 = G_B1_0;
		goto IL_0016;
	}

IL_0010:
	{
		Il2CppChar* L_5 = V_0;
		Il2CppChar* L_6 = L_5;
		V_0 = ((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_6, 2));
		int32_t L_7 = *((uint16_t*)L_6);
		G_B3_0 = L_7;
		G_B3_1 = G_B2_0;
	}

IL_0016:
	{
		ValueStringBuilder_Append_mBB79BFE6EAB412D689B7D6675A6E0BC3F6FCDFCC_inline(G_B3_1, G_B3_0, NULL);
		int32_t L_8 = ___3_nMaxDigits;
		if ((((int32_t)L_8) == ((int32_t)1)))
		{
			goto IL_0042;
		}
	}
	{
		ValueStringBuilder_tEBD54C46E3AF8527BD0D234124F5C1AC14E9E251* L_9 = ___0_sb;
		NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* L_10 = ___4_info;
		NullCheck(L_10);
		String_t* L_11;
		L_11 = NumberFormatInfo_get_NumberDecimalSeparator_m7413FA8739F3FA6F5D61B54331DBF3232FC6BFC7_inline(L_10, NULL);
		ValueStringBuilder_Append_m4F9C03D9B78FD7AE877AAC57178D2F84AD2956CF_inline(L_9, L_11, NULL);
		goto IL_0042;
	}

IL_002e:
	{
		ValueStringBuilder_tEBD54C46E3AF8527BD0D234124F5C1AC14E9E251* L_12 = ___0_sb;
		Il2CppChar* L_13 = V_0;
		int32_t L_14 = *((uint16_t*)L_13);
		if (L_14)
		{
			G_B7_0 = L_12;
			goto IL_0037;
		}
		G_B6_0 = L_12;
	}
	{
		G_B8_0 = ((int32_t)48);
		G_B8_1 = G_B6_0;
		goto IL_003d;
	}

IL_0037:
	{
		Il2CppChar* L_15 = V_0;
		Il2CppChar* L_16 = L_15;
		V_0 = ((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_16, 2));
		int32_t L_17 = *((uint16_t*)L_16);
		G_B8_0 = L_17;
		G_B8_1 = G_B7_0;
	}

IL_003d:
	{
		ValueStringBuilder_Append_mBB79BFE6EAB412D689B7D6675A6E0BC3F6FCDFCC_inline(G_B8_1, G_B8_0, NULL);
	}

IL_0042:
	{
		int32_t L_18 = ___3_nMaxDigits;
		int32_t L_19 = ((int32_t)il2cpp_codegen_subtract(L_18, 1));
		___3_nMaxDigits = L_19;
		if ((((int32_t)L_19) > ((int32_t)0)))
		{
			goto IL_002e;
		}
	}
	{
		NumberBuffer_t0F9FC9D15F03CFDEBA3B3F4210A2AB3B53305CDA* L_20 = ___1_number;
		Il2CppChar* L_21;
		L_21 = NumberBuffer_get_digits_mB2D6183F180088A57C57ED5FBA7BDD4CDF4A369A_inline(L_20, NULL);
		int32_t L_22 = *((uint16_t*)L_21);
		if (!L_22)
		{
			goto IL_005e;
		}
	}
	{
		NumberBuffer_t0F9FC9D15F03CFDEBA3B3F4210A2AB3B53305CDA* L_23 = ___1_number;
		int32_t L_24 = L_23->___scale_1;
		G_B13_0 = ((int32_t)il2cpp_codegen_subtract(L_24, 1));
		goto IL_005f;
	}

IL_005e:
	{
		G_B13_0 = 0;
	}

IL_005f:
	{
		V_1 = G_B13_0;
		ValueStringBuilder_tEBD54C46E3AF8527BD0D234124F5C1AC14E9E251* L_25 = ___0_sb;
		NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* L_26 = ___4_info;
		int32_t L_27 = V_1;
		Il2CppChar L_28 = ___5_expChar;
		il2cpp_codegen_runtime_class_init_inline(Number_t006CBC9914386BB171582F4C3A3EEB2EE404D461_il2cpp_TypeInfo_var);
		Number_FormatExponent_m2194D98B7488C2DE4AB59E0AFECDCF4D258412F1(L_25, L_26, L_27, L_28, 3, (bool)1, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Number_FormatExponent_m2194D98B7488C2DE4AB59E0AFECDCF4D258412F1 (ValueStringBuilder_tEBD54C46E3AF8527BD0D234124F5C1AC14E9E251* ___0_sb, NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* ___1_info, int32_t ___2_value, Il2CppChar ___3_expChar, int32_t ___4_minDigits, bool ___5_positiveSign, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Number_t006CBC9914386BB171582F4C3A3EEB2EE404D461_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Il2CppChar* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		ValueStringBuilder_tEBD54C46E3AF8527BD0D234124F5C1AC14E9E251* L_0 = ___0_sb;
		Il2CppChar L_1 = ___3_expChar;
		ValueStringBuilder_Append_mBB79BFE6EAB412D689B7D6675A6E0BC3F6FCDFCC_inline(L_0, L_1, NULL);
		int32_t L_2 = ___2_value;
		if ((((int32_t)L_2) >= ((int32_t)0)))
		{
			goto IL_001d;
		}
	}
	{
		ValueStringBuilder_tEBD54C46E3AF8527BD0D234124F5C1AC14E9E251* L_3 = ___0_sb;
		NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* L_4 = ___1_info;
		NullCheck(L_4);
		String_t* L_5;
		L_5 = NumberFormatInfo_get_NegativeSign_m7744D30B65FFC7D00CDD1CCF7E53D3722D350E7C_inline(L_4, NULL);
		ValueStringBuilder_Append_m4F9C03D9B78FD7AE877AAC57178D2F84AD2956CF_inline(L_3, L_5, NULL);
		int32_t L_6 = ___2_value;
		___2_value = ((-L_6));
		goto IL_002d;
	}

IL_001d:
	{
		bool L_7 = ___5_positiveSign;
		if (!L_7)
		{
			goto IL_002d;
		}
	}
	{
		ValueStringBuilder_tEBD54C46E3AF8527BD0D234124F5C1AC14E9E251* L_8 = ___0_sb;
		NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* L_9 = ___1_info;
		NullCheck(L_9);
		String_t* L_10;
		L_10 = NumberFormatInfo_get_PositiveSign_mEB874CC4589FD7B2F57CD3269AE6D9043A0C25EF_inline(L_9, NULL);
		ValueStringBuilder_Append_m4F9C03D9B78FD7AE877AAC57178D2F84AD2956CF_inline(L_8, L_10, NULL);
	}

IL_002d:
	{
		uintptr_t L_11 = ((uintptr_t)((int32_t)22));
		int8_t* L_12 = (int8_t*) (L_11 ? alloca(L_11) : NULL);
		memset(L_12, 0, L_11);
		V_0 = (Il2CppChar*)(L_12);
		V_1 = ((int32_t)10);
		Il2CppChar* L_13 = V_0;
		int32_t L_14 = ___2_value;
		int32_t L_15 = ___4_minDigits;
		il2cpp_codegen_runtime_class_init_inline(Number_t006CBC9914386BB171582F4C3A3EEB2EE404D461_il2cpp_TypeInfo_var);
		Number_Int32ToDecChars_mA94E1FFBC0C831A23C6A974FC11018B9E6F9ED4E(L_13, (&V_1), L_14, L_15, NULL);
		int32_t L_16 = V_1;
		V_2 = ((int32_t)il2cpp_codegen_subtract(((int32_t)10), L_16));
		goto IL_0059;
	}

IL_0048:
	{
		ValueStringBuilder_tEBD54C46E3AF8527BD0D234124F5C1AC14E9E251* L_17 = ___0_sb;
		Il2CppChar* L_18 = V_0;
		int32_t L_19 = V_1;
		int32_t L_20 = L_19;
		V_1 = ((int32_t)il2cpp_codegen_add(L_20, 1));
		int32_t L_21 = *((uint16_t*)((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_18, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_20), 2)))));
		ValueStringBuilder_Append_mBB79BFE6EAB412D689B7D6675A6E0BC3F6FCDFCC_inline(L_17, L_21, NULL);
	}

IL_0059:
	{
		int32_t L_22 = V_2;
		int32_t L_23 = ((int32_t)il2cpp_codegen_subtract(L_22, 1));
		V_2 = L_23;
		if ((((int32_t)L_23) >= ((int32_t)0)))
		{
			goto IL_0048;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Number_FormatGeneral_m68D4F0A31B064E3FDF311EFF410D774C0D3BAF0A (ValueStringBuilder_tEBD54C46E3AF8527BD0D234124F5C1AC14E9E251* ___0_sb, NumberBuffer_t0F9FC9D15F03CFDEBA3B3F4210A2AB3B53305CDA* ___1_number, int32_t ___2_nMinDigits, int32_t ___3_nMaxDigits, NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* ___4_info, Il2CppChar ___5_expChar, bool ___6_bSuppressScientific, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Number_t006CBC9914386BB171582F4C3A3EEB2EE404D461_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	Il2CppChar* V_2 = NULL;
	ValueStringBuilder_tEBD54C46E3AF8527BD0D234124F5C1AC14E9E251* G_B7_0 = NULL;
	ValueStringBuilder_tEBD54C46E3AF8527BD0D234124F5C1AC14E9E251* G_B6_0 = NULL;
	int32_t G_B8_0 = 0;
	ValueStringBuilder_tEBD54C46E3AF8527BD0D234124F5C1AC14E9E251* G_B8_1 = NULL;
	{
		NumberBuffer_t0F9FC9D15F03CFDEBA3B3F4210A2AB3B53305CDA* L_0 = ___1_number;
		int32_t L_1 = L_0->___scale_1;
		V_0 = L_1;
		V_1 = (bool)0;
		bool L_2 = ___6_bSuppressScientific;
		if (L_2)
		{
			goto IL_001a;
		}
	}
	{
		int32_t L_3 = V_0;
		int32_t L_4 = ___3_nMaxDigits;
		if ((((int32_t)L_3) > ((int32_t)L_4)))
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_5 = V_0;
		if ((((int32_t)L_5) >= ((int32_t)((int32_t)-3))))
		{
			goto IL_001a;
		}
	}

IL_0016:
	{
		V_0 = 1;
		V_1 = (bool)1;
	}

IL_001a:
	{
		NumberBuffer_t0F9FC9D15F03CFDEBA3B3F4210A2AB3B53305CDA* L_6 = ___1_number;
		Il2CppChar* L_7;
		L_7 = NumberBuffer_get_digits_mB2D6183F180088A57C57ED5FBA7BDD4CDF4A369A_inline(L_6, NULL);
		V_2 = L_7;
		int32_t L_8 = V_0;
		if ((((int32_t)L_8) <= ((int32_t)0)))
		{
			goto IL_0043;
		}
	}

IL_0025:
	{
		ValueStringBuilder_tEBD54C46E3AF8527BD0D234124F5C1AC14E9E251* L_9 = ___0_sb;
		Il2CppChar* L_10 = V_2;
		int32_t L_11 = *((uint16_t*)L_10);
		if (L_11)
		{
			G_B7_0 = L_9;
			goto IL_002e;
		}
		G_B6_0 = L_9;
	}
	{
		G_B8_0 = ((int32_t)48);
		G_B8_1 = G_B6_0;
		goto IL_0034;
	}

IL_002e:
	{
		Il2CppChar* L_12 = V_2;
		Il2CppChar* L_13 = L_12;
		V_2 = ((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_13, 2));
		int32_t L_14 = *((uint16_t*)L_13);
		G_B8_0 = L_14;
		G_B8_1 = G_B7_0;
	}

IL_0034:
	{
		ValueStringBuilder_Append_mBB79BFE6EAB412D689B7D6675A6E0BC3F6FCDFCC_inline(G_B8_1, G_B8_0, NULL);
		int32_t L_15 = V_0;
		int32_t L_16 = ((int32_t)il2cpp_codegen_subtract(L_15, 1));
		V_0 = L_16;
		if ((((int32_t)L_16) > ((int32_t)0)))
		{
			goto IL_0025;
		}
	}
	{
		goto IL_004b;
	}

IL_0043:
	{
		ValueStringBuilder_tEBD54C46E3AF8527BD0D234124F5C1AC14E9E251* L_17 = ___0_sb;
		ValueStringBuilder_Append_mBB79BFE6EAB412D689B7D6675A6E0BC3F6FCDFCC_inline(L_17, ((int32_t)48), NULL);
	}

IL_004b:
	{
		Il2CppChar* L_18 = V_2;
		int32_t L_19 = *((uint16_t*)L_18);
		if (L_19)
		{
			goto IL_0053;
		}
	}
	{
		int32_t L_20 = V_0;
		if ((((int32_t)L_20) >= ((int32_t)0)))
		{
			goto IL_0084;
		}
	}

IL_0053:
	{
		ValueStringBuilder_tEBD54C46E3AF8527BD0D234124F5C1AC14E9E251* L_21 = ___0_sb;
		NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* L_22 = ___4_info;
		NullCheck(L_22);
		String_t* L_23;
		L_23 = NumberFormatInfo_get_NumberDecimalSeparator_m7413FA8739F3FA6F5D61B54331DBF3232FC6BFC7_inline(L_22, NULL);
		ValueStringBuilder_Append_m4F9C03D9B78FD7AE877AAC57178D2F84AD2956CF_inline(L_21, L_23, NULL);
		goto IL_006e;
	}

IL_0062:
	{
		ValueStringBuilder_tEBD54C46E3AF8527BD0D234124F5C1AC14E9E251* L_24 = ___0_sb;
		ValueStringBuilder_Append_mBB79BFE6EAB412D689B7D6675A6E0BC3F6FCDFCC_inline(L_24, ((int32_t)48), NULL);
		int32_t L_25 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_25, 1));
	}

IL_006e:
	{
		int32_t L_26 = V_0;
		if ((((int32_t)L_26) < ((int32_t)0)))
		{
			goto IL_0062;
		}
	}
	{
		goto IL_0080;
	}

IL_0074:
	{
		ValueStringBuilder_tEBD54C46E3AF8527BD0D234124F5C1AC14E9E251* L_27 = ___0_sb;
		Il2CppChar* L_28 = V_2;
		Il2CppChar* L_29 = L_28;
		V_2 = ((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_29, 2));
		int32_t L_30 = *((uint16_t*)L_29);
		ValueStringBuilder_Append_mBB79BFE6EAB412D689B7D6675A6E0BC3F6FCDFCC_inline(L_27, L_30, NULL);
	}

IL_0080:
	{
		Il2CppChar* L_31 = V_2;
		int32_t L_32 = *((uint16_t*)L_31);
		if (L_32)
		{
			goto IL_0074;
		}
	}

IL_0084:
	{
		bool L_33 = V_1;
		if (!L_33)
		{
			goto IL_009b;
		}
	}
	{
		ValueStringBuilder_tEBD54C46E3AF8527BD0D234124F5C1AC14E9E251* L_34 = ___0_sb;
		NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* L_35 = ___4_info;
		NumberBuffer_t0F9FC9D15F03CFDEBA3B3F4210A2AB3B53305CDA* L_36 = ___1_number;
		int32_t L_37 = L_36->___scale_1;
		Il2CppChar L_38 = ___5_expChar;
		il2cpp_codegen_runtime_class_init_inline(Number_t006CBC9914386BB171582F4C3A3EEB2EE404D461_il2cpp_TypeInfo_var);
		Number_FormatExponent_m2194D98B7488C2DE4AB59E0AFECDCF4D258412F1(L_34, L_35, ((int32_t)il2cpp_codegen_subtract(L_37, 1)), L_38, 2, (bool)1, NULL);
	}

IL_009b:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Number_FormatPercent_m765FF9BE8896DA80FDBC469B9EB40732C521B85D (ValueStringBuilder_tEBD54C46E3AF8527BD0D234124F5C1AC14E9E251* ___0_sb, NumberBuffer_t0F9FC9D15F03CFDEBA3B3F4210A2AB3B53305CDA* ___1_number, int32_t ___2_nMinDigits, int32_t ___3_nMaxDigits, NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* ___4_info, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Number_t006CBC9914386BB171582F4C3A3EEB2EE404D461_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	int32_t V_1 = 0;
	Il2CppChar V_2 = 0x0;
	String_t* G_B3_0 = NULL;
	{
		NumberBuffer_t0F9FC9D15F03CFDEBA3B3F4210A2AB3B53305CDA* L_0 = ___1_number;
		bool L_1 = L_0->___sign_2;
		if (L_1)
		{
			goto IL_0017;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Number_t006CBC9914386BB171582F4C3A3EEB2EE404D461_il2cpp_TypeInfo_var);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_2 = ((Number_t006CBC9914386BB171582F4C3A3EEB2EE404D461_StaticFields*)il2cpp_codegen_static_fields_for(Number_t006CBC9914386BB171582F4C3A3EEB2EE404D461_il2cpp_TypeInfo_var))->___s_posPercentFormats_2;
		NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* L_3 = ___4_info;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = NumberFormatInfo_get_PercentPositivePattern_m2720656715E7A19D1CEAD0155412B2EE01FC68FA_inline(L_3, NULL);
		NullCheck(L_2);
		int32_t L_5 = L_4;
		String_t* L_6 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		G_B3_0 = L_6;
		goto IL_0024;
	}

IL_0017:
	{
		il2cpp_codegen_runtime_class_init_inline(Number_t006CBC9914386BB171582F4C3A3EEB2EE404D461_il2cpp_TypeInfo_var);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_7 = ((Number_t006CBC9914386BB171582F4C3A3EEB2EE404D461_StaticFields*)il2cpp_codegen_static_fields_for(Number_t006CBC9914386BB171582F4C3A3EEB2EE404D461_il2cpp_TypeInfo_var))->___s_negPercentFormats_3;
		NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* L_8 = ___4_info;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = NumberFormatInfo_get_PercentNegativePattern_m3EED4EC4B89339AA00581150F4999BCC3400CDAD_inline(L_8, NULL);
		NullCheck(L_7);
		int32_t L_10 = L_9;
		String_t* L_11 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		G_B3_0 = L_11;
	}

IL_0024:
	{
		V_0 = G_B3_0;
		V_1 = 0;
		goto IL_008d;
	}

IL_0029:
	{
		String_t* L_12 = V_0;
		int32_t L_13 = V_1;
		NullCheck(L_12);
		Il2CppChar L_14;
		L_14 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_12, L_13, NULL);
		V_2 = L_14;
		Il2CppChar L_15 = V_2;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)35))))
		{
			goto IL_0042;
		}
	}
	{
		Il2CppChar L_16 = V_2;
		if ((((int32_t)L_16) == ((int32_t)((int32_t)37))))
		{
			goto IL_0073;
		}
	}
	{
		Il2CppChar L_17 = V_2;
		if ((((int32_t)L_17) == ((int32_t)((int32_t)45))))
		{
			goto IL_0064;
		}
	}
	{
		goto IL_0082;
	}

IL_0042:
	{
		ValueStringBuilder_tEBD54C46E3AF8527BD0D234124F5C1AC14E9E251* L_18 = ___0_sb;
		NumberBuffer_t0F9FC9D15F03CFDEBA3B3F4210A2AB3B53305CDA* L_19 = ___1_number;
		int32_t L_20 = ___2_nMinDigits;
		int32_t L_21 = ___3_nMaxDigits;
		NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* L_22 = ___4_info;
		NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* L_23 = ___4_info;
		NullCheck(L_23);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_24;
		L_24 = NumberFormatInfo_get_PercentGroupSizes_mD5EA131D12B675FE744E357934F39C373C15CD67(L_23, NULL);
		NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* L_25 = ___4_info;
		NullCheck(L_25);
		String_t* L_26;
		L_26 = NumberFormatInfo_get_PercentDecimalSeparator_mB656F8F033BB700E4647AF14044C607F34634B80_inline(L_25, NULL);
		NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* L_27 = ___4_info;
		NullCheck(L_27);
		String_t* L_28;
		L_28 = NumberFormatInfo_get_PercentGroupSeparator_m1321ACEA2239006587D132AF6445E55D733BABF9_inline(L_27, NULL);
		il2cpp_codegen_runtime_class_init_inline(Number_t006CBC9914386BB171582F4C3A3EEB2EE404D461_il2cpp_TypeInfo_var);
		Number_FormatFixed_m0AE79A769FD61DE736216A34F723B8D7D793C1BB(L_18, L_19, L_20, L_21, L_22, L_24, L_26, L_28, NULL);
		goto IL_0089;
	}

IL_0064:
	{
		ValueStringBuilder_tEBD54C46E3AF8527BD0D234124F5C1AC14E9E251* L_29 = ___0_sb;
		NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* L_30 = ___4_info;
		NullCheck(L_30);
		String_t* L_31;
		L_31 = NumberFormatInfo_get_NegativeSign_m7744D30B65FFC7D00CDD1CCF7E53D3722D350E7C_inline(L_30, NULL);
		ValueStringBuilder_Append_m4F9C03D9B78FD7AE877AAC57178D2F84AD2956CF_inline(L_29, L_31, NULL);
		goto IL_0089;
	}

IL_0073:
	{
		ValueStringBuilder_tEBD54C46E3AF8527BD0D234124F5C1AC14E9E251* L_32 = ___0_sb;
		NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* L_33 = ___4_info;
		NullCheck(L_33);
		String_t* L_34;
		L_34 = NumberFormatInfo_get_PercentSymbol_mB3F25C2B5F71574B7F4A0BEE95A7028E7A48CFC2_inline(L_33, NULL);
		ValueStringBuilder_Append_m4F9C03D9B78FD7AE877AAC57178D2F84AD2956CF_inline(L_32, L_34, NULL);
		goto IL_0089;
	}

IL_0082:
	{
		ValueStringBuilder_tEBD54C46E3AF8527BD0D234124F5C1AC14E9E251* L_35 = ___0_sb;
		Il2CppChar L_36 = V_2;
		ValueStringBuilder_Append_mBB79BFE6EAB412D689B7D6675A6E0BC3F6FCDFCC_inline(L_35, L_36, NULL);
	}

IL_0089:
	{
		int32_t L_37 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_37, 1));
	}

IL_008d:
	{
		int32_t L_38 = V_1;
		String_t* L_39 = V_0;
		NullCheck(L_39);
		int32_t L_40;
		L_40 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_39, NULL);
		if ((((int32_t)L_38) < ((int32_t)L_40)))
		{
			goto IL_0029;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Number_RoundNumber_m4CF4E60F6BB2595CAF7D220275299620A954CAA0 (NumberBuffer_t0F9FC9D15F03CFDEBA3B3F4210A2AB3B53305CDA* ___0_number, int32_t ___1_pos, const RuntimeMethod* method) 
{
	Il2CppChar* V_0 = NULL;
	int32_t V_1 = 0;
	{
		NumberBuffer_t0F9FC9D15F03CFDEBA3B3F4210A2AB3B53305CDA* L_0 = ___0_number;
		Il2CppChar* L_1;
		L_1 = NumberBuffer_get_digits_mB2D6183F180088A57C57ED5FBA7BDD4CDF4A369A_inline(L_0, NULL);
		V_0 = L_1;
		V_1 = 0;
		goto IL_000f;
	}

IL_000b:
	{
		int32_t L_2 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_2, 1));
	}

IL_000f:
	{
		int32_t L_3 = V_1;
		int32_t L_4 = ___1_pos;
		if ((((int32_t)L_3) >= ((int32_t)L_4)))
		{
			goto IL_001c;
		}
	}
	{
		Il2CppChar* L_5 = V_0;
		int32_t L_6 = V_1;
		int32_t L_7 = *((uint16_t*)((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_5, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_6), 2)))));
		if (L_7)
		{
			goto IL_000b;
		}
	}

IL_001c:
	{
		int32_t L_8 = V_1;
		int32_t L_9 = ___1_pos;
		if ((!(((uint32_t)L_8) == ((uint32_t)L_9))))
		{
			goto IL_006d;
		}
	}
	{
		Il2CppChar* L_10 = V_0;
		int32_t L_11 = V_1;
		int32_t L_12 = *((uint16_t*)((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_10, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_11), 2)))));
		if ((((int32_t)L_12) < ((int32_t)((int32_t)53))))
		{
			goto IL_006d;
		}
	}
	{
		goto IL_0031;
	}

IL_002d:
	{
		int32_t L_13 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_subtract(L_13, 1));
	}

IL_0031:
	{
		int32_t L_14 = V_1;
		if ((((int32_t)L_14) <= ((int32_t)0)))
		{
			goto IL_0042;
		}
	}
	{
		Il2CppChar* L_15 = V_0;
		int32_t L_16 = V_1;
		int32_t L_17 = *((uint16_t*)((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_15, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_16, 1))), 2)))));
		if ((((int32_t)L_17) == ((int32_t)((int32_t)57))))
		{
			goto IL_002d;
		}
	}

IL_0042:
	{
		int32_t L_18 = V_1;
		if ((((int32_t)L_18) <= ((int32_t)0)))
		{
			goto IL_0056;
		}
	}
	{
		Il2CppChar* L_19 = V_0;
		int32_t L_20 = V_1;
		Il2CppChar* L_21 = ((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_19, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_20, 1))), 2))));
		int32_t L_22 = *((uint16_t*)L_21);
		*((int16_t*)L_21) = (int16_t)((int32_t)(uint16_t)((int32_t)il2cpp_codegen_add(L_22, 1)));
		goto IL_007e;
	}

IL_0056:
	{
		NumberBuffer_t0F9FC9D15F03CFDEBA3B3F4210A2AB3B53305CDA* L_23 = ___0_number;
		int32_t* L_24 = (&L_23->___scale_1);
		int32_t* L_25 = L_24;
		int32_t L_26 = *((int32_t*)L_25);
		*((int32_t*)L_25) = (int32_t)((int32_t)il2cpp_codegen_add(L_26, 1));
		Il2CppChar* L_27 = V_0;
		*((int16_t*)L_27) = (int16_t)((int32_t)49);
		V_1 = 1;
		goto IL_007e;
	}

IL_0069:
	{
		int32_t L_28 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_subtract(L_28, 1));
	}

IL_006d:
	{
		int32_t L_29 = V_1;
		if ((((int32_t)L_29) <= ((int32_t)0)))
		{
			goto IL_007e;
		}
	}
	{
		Il2CppChar* L_30 = V_0;
		int32_t L_31 = V_1;
		int32_t L_32 = *((uint16_t*)((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_30, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_31, 1))), 2)))));
		if ((((int32_t)L_32) == ((int32_t)((int32_t)48))))
		{
			goto IL_0069;
		}
	}

IL_007e:
	{
		int32_t L_33 = V_1;
		if (L_33)
		{
			goto IL_008f;
		}
	}
	{
		NumberBuffer_t0F9FC9D15F03CFDEBA3B3F4210A2AB3B53305CDA* L_34 = ___0_number;
		L_34->___scale_1 = 0;
		NumberBuffer_t0F9FC9D15F03CFDEBA3B3F4210A2AB3B53305CDA* L_35 = ___0_number;
		L_35->___sign_2 = (bool)0;
	}

IL_008f:
	{
		Il2CppChar* L_36 = V_0;
		int32_t L_37 = V_1;
		*((int16_t*)((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_36, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_37), 2))))) = (int16_t)0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Number_FindSection_mC2D1C69F848ACAB296ADB63DD0D87CF39C446849 (ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 ___0_format, int32_t ___1_section, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MemoryMarshal_GetReference_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_mE4C181D41EF4A4EC432CD3610B2969041E6F2F7A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1_get_Length_m36BD32453530B535FE60A8123643219FEAABC351_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Il2CppChar* V_0 = NULL;
	Il2CppChar* V_1 = NULL;
	int32_t V_2 = 0;
	Il2CppChar V_3 = 0x0;
	Il2CppChar V_4 = 0x0;
	{
		int32_t L_0 = ___1_section;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		return 0;
	}

IL_0005:
	{
		ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 L_1 = ___0_format;
		Il2CppChar* L_2;
		L_2 = MemoryMarshal_GetReference_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_mE4C181D41EF4A4EC432CD3610B2969041E6F2F7A(L_1, MemoryMarshal_GetReference_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_mE4C181D41EF4A4EC432CD3610B2969041E6F2F7A_RuntimeMethod_var);
		V_1 = L_2;
		Il2CppChar* L_3 = V_1;
		V_0 = (Il2CppChar*)((uintptr_t)L_3);
		V_2 = 0;
	}

IL_0011:
	{
		int32_t L_4 = V_2;
		int32_t L_5;
		L_5 = ReadOnlySpan_1_get_Length_m36BD32453530B535FE60A8123643219FEAABC351_inline((&___0_format), ReadOnlySpan_1_get_Length_m36BD32453530B535FE60A8123643219FEAABC351_RuntimeMethod_var);
		if ((((int32_t)L_4) < ((int32_t)L_5)))
		{
			goto IL_001d;
		}
	}
	{
		return 0;
	}

IL_001d:
	{
		Il2CppChar* L_6 = V_0;
		int32_t L_7 = V_2;
		int32_t L_8 = L_7;
		V_2 = ((int32_t)il2cpp_codegen_add(L_8, 1));
		int32_t L_9 = *((uint16_t*)((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_6, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_8), 2)))));
		int32_t L_10 = L_9;
		V_3 = L_10;
		V_4 = L_10;
		Il2CppChar L_11 = V_4;
		if ((!(((uint32_t)L_11) <= ((uint32_t)((int32_t)34)))))
		{
			goto IL_0041;
		}
	}
	{
		Il2CppChar L_12 = V_4;
		if (!L_12)
		{
			goto IL_00bc;
		}
	}
	{
		Il2CppChar L_13 = V_4;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)34))))
		{
			goto IL_0055;
		}
	}
	{
		goto IL_0011;
	}

IL_0041:
	{
		Il2CppChar L_14 = V_4;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)39))))
		{
			goto IL_0055;
		}
	}
	{
		Il2CppChar L_15 = V_4;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)59))))
		{
			goto IL_0091;
		}
	}
	{
		Il2CppChar L_16 = V_4;
		if ((((int32_t)L_16) == ((int32_t)((int32_t)92))))
		{
			goto IL_0078;
		}
	}
	{
		goto IL_0011;
	}

IL_0055:
	{
		int32_t L_17 = V_2;
		int32_t L_18;
		L_18 = ReadOnlySpan_1_get_Length_m36BD32453530B535FE60A8123643219FEAABC351_inline((&___0_format), ReadOnlySpan_1_get_Length_m36BD32453530B535FE60A8123643219FEAABC351_RuntimeMethod_var);
		if ((((int32_t)L_17) >= ((int32_t)L_18)))
		{
			goto IL_0011;
		}
	}
	{
		Il2CppChar* L_19 = V_0;
		int32_t L_20 = V_2;
		int32_t L_21 = *((uint16_t*)((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_19, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_20), 2)))));
		if (!L_21)
		{
			goto IL_0011;
		}
	}
	{
		Il2CppChar* L_22 = V_0;
		int32_t L_23 = V_2;
		int32_t L_24 = L_23;
		V_2 = ((int32_t)il2cpp_codegen_add(L_24, 1));
		int32_t L_25 = *((uint16_t*)((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_22, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_24), 2)))));
		Il2CppChar L_26 = V_3;
		if ((!(((uint32_t)L_25) == ((uint32_t)L_26))))
		{
			goto IL_0055;
		}
	}
	{
		goto IL_0011;
	}

IL_0078:
	{
		int32_t L_27 = V_2;
		int32_t L_28;
		L_28 = ReadOnlySpan_1_get_Length_m36BD32453530B535FE60A8123643219FEAABC351_inline((&___0_format), ReadOnlySpan_1_get_Length_m36BD32453530B535FE60A8123643219FEAABC351_RuntimeMethod_var);
		if ((((int32_t)L_27) >= ((int32_t)L_28)))
		{
			goto IL_0011;
		}
	}
	{
		Il2CppChar* L_29 = V_0;
		int32_t L_30 = V_2;
		int32_t L_31 = *((uint16_t*)((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_29, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_30), 2)))));
		if (!L_31)
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_32 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_32, 1));
		goto IL_0011;
	}

IL_0091:
	{
		int32_t L_33 = ___1_section;
		int32_t L_34 = ((int32_t)il2cpp_codegen_subtract(L_33, 1));
		___1_section = L_34;
		if (L_34)
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_35 = V_2;
		int32_t L_36;
		L_36 = ReadOnlySpan_1_get_Length_m36BD32453530B535FE60A8123643219FEAABC351_inline((&___0_format), ReadOnlySpan_1_get_Length_m36BD32453530B535FE60A8123643219FEAABC351_RuntimeMethod_var);
		if ((((int32_t)L_35) >= ((int32_t)L_36)))
		{
			goto IL_00bc;
		}
	}
	{
		Il2CppChar* L_37 = V_0;
		int32_t L_38 = V_2;
		int32_t L_39 = *((uint16_t*)((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_37, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_38), 2)))));
		if (!L_39)
		{
			goto IL_00bc;
		}
	}
	{
		Il2CppChar* L_40 = V_0;
		int32_t L_41 = V_2;
		int32_t L_42 = *((uint16_t*)((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_40, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_41), 2)))));
		if ((((int32_t)L_42) == ((int32_t)((int32_t)59))))
		{
			goto IL_00bc;
		}
	}
	{
		int32_t L_43 = V_2;
		return L_43;
	}

IL_00bc:
	{
		return 0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Number_NumberToStringFormat_mA407C99BE332392E17203E2A9BDC5544DDF89090 (ValueStringBuilder_tEBD54C46E3AF8527BD0D234124F5C1AC14E9E251* ___0_sb, NumberBuffer_t0F9FC9D15F03CFDEBA3B3F4210A2AB3B53305CDA* ___1_number, ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 ___2_format, NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* ___3_info, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MemoryMarshal_GetReference_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_mE4C181D41EF4A4EC432CD3610B2969041E6F2F7A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Number_t006CBC9914386BB171582F4C3A3EEB2EE404D461_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1_get_Length_m36BD32453530B535FE60A8123643219FEAABC351_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_CopyTo_m197E47790117E2C925FE1A8E051A19AB9CF4260B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1__ctor_m31EE4A5510B5C504DB26DB281BC7D4179B859F2B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_get_Length_m87AB3C694F2E4802F14D006F21C020816045285F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_op_Implicit_m75103E0CA16D9EEB5414F2FA9611149122CF23CC_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	bool V_5 = false;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	bool V_8 = false;
	int32_t V_9 = 0;
	int32_t V_10 = 0;
	int32_t V_11 = 0;
	int32_t V_12 = 0;
	Il2CppChar* V_13 = NULL;
	Il2CppChar V_14 = 0x0;
	Span_1_t3C5DB525B005B1AC5A1F3BDD528900C5C7C7D316 V_15;
	memset((&V_15), 0, sizeof(V_15));
	int32_t V_16 = 0;
	bool V_17 = false;
	Il2CppChar* V_18 = NULL;
	Il2CppChar* V_19 = NULL;
	int32_t V_20 = 0;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_21 = NULL;
	int32_t V_22 = 0;
	int32_t V_23 = 0;
	int32_t V_24 = 0;
	int32_t V_25 = 0;
	int32_t V_26 = 0;
	int32_t V_27 = 0;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_28 = NULL;
	Il2CppChar* V_29 = NULL;
	Il2CppChar* V_30 = NULL;
	bool V_31 = false;
	int32_t V_32 = 0;
	int32_t V_33 = 0;
	ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 G_B4_0;
	memset((&G_B4_0), 0, sizeof(G_B4_0));
	ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 G_B1_0;
	memset((&G_B1_0), 0, sizeof(G_B1_0));
	ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 G_B3_0;
	memset((&G_B3_0), 0, sizeof(G_B3_0));
	ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 G_B2_0;
	memset((&G_B2_0), 0, sizeof(G_B2_0));
	int32_t G_B5_0 = 0;
	ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 G_B5_1;
	memset((&G_B5_1), 0, sizeof(G_B5_1));
	int32_t G_B60_0 = 0;
	int32_t G_B67_0 = 0;
	int32_t G_B70_0 = 0;
	int32_t G_B75_0 = 0;
	int32_t G_B82_0 = 0;
	int32_t G_B81_0 = 0;
	int32_t G_B83_0 = 0;
	int32_t G_B83_1 = 0;
	int32_t G_B86_0 = 0;
	ValueStringBuilder_tEBD54C46E3AF8527BD0D234124F5C1AC14E9E251* G_B105_0 = NULL;
	ValueStringBuilder_tEBD54C46E3AF8527BD0D234124F5C1AC14E9E251* G_B104_0 = NULL;
	int32_t G_B106_0 = 0;
	ValueStringBuilder_tEBD54C46E3AF8527BD0D234124F5C1AC14E9E251* G_B106_1 = NULL;
	int32_t G_B126_0 = 0;
	int32_t G_B132_0 = 0;
	int32_t G_B177_0 = 0;
	{
		V_7 = 0;
		NumberBuffer_t0F9FC9D15F03CFDEBA3B3F4210A2AB3B53305CDA* L_0 = ___1_number;
		Il2CppChar* L_1;
		L_1 = NumberBuffer_get_digits_mB2D6183F180088A57C57ED5FBA7BDD4CDF4A369A_inline(L_0, NULL);
		V_13 = L_1;
		ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 L_2 = ___2_format;
		Il2CppChar* L_3 = V_13;
		int32_t L_4 = *((uint16_t*)L_3);
		if (!L_4)
		{
			G_B4_0 = L_2;
			goto IL_001f;
		}
		G_B1_0 = L_2;
	}
	{
		NumberBuffer_t0F9FC9D15F03CFDEBA3B3F4210A2AB3B53305CDA* L_5 = ___1_number;
		bool L_6 = L_5->___sign_2;
		if (L_6)
		{
			G_B3_0 = G_B1_0;
			goto IL_001c;
		}
		G_B2_0 = G_B1_0;
	}
	{
		G_B5_0 = 0;
		G_B5_1 = G_B2_0;
		goto IL_0020;
	}

IL_001c:
	{
		G_B5_0 = 1;
		G_B5_1 = G_B3_0;
		goto IL_0020;
	}

IL_001f:
	{
		G_B5_0 = 2;
		G_B5_1 = G_B4_0;
	}

IL_0020:
	{
		il2cpp_codegen_runtime_class_init_inline(Number_t006CBC9914386BB171582F4C3A3EEB2EE404D461_il2cpp_TypeInfo_var);
		int32_t L_7;
		L_7 = Number_FindSection_mC2D1C69F848ACAB296ADB63DD0D87CF39C446849(G_B5_1, G_B5_0, NULL);
		V_11 = L_7;
	}

IL_0027:
	{
		V_0 = 0;
		V_1 = (-1);
		V_2 = ((int32_t)2147483647LL);
		V_3 = 0;
		V_5 = (bool)0;
		V_6 = (-1);
		V_8 = (bool)0;
		V_9 = 0;
		int32_t L_8 = V_11;
		V_12 = L_8;
		ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 L_9 = ___2_format;
		Il2CppChar* L_10;
		L_10 = MemoryMarshal_GetReference_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_mE4C181D41EF4A4EC432CD3610B2969041E6F2F7A(L_9, MemoryMarshal_GetReference_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_mE4C181D41EF4A4EC432CD3610B2969041E6F2F7A_RuntimeMethod_var);
		V_19 = L_10;
		Il2CppChar* L_11 = V_19;
		V_18 = (Il2CppChar*)((uintptr_t)L_11);
		goto IL_01fe;
	}

IL_0055:
	{
		Il2CppChar L_12 = V_14;
		if ((!(((uint32_t)L_12) <= ((uint32_t)((int32_t)69)))))
		{
			goto IL_00a9;
		}
	}
	{
		Il2CppChar L_13 = V_14;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_13, ((int32_t)34))))
		{
			case 0:
			{
				goto IL_013c;
			}
			case 1:
			{
				goto IL_00c9;
			}
			case 2:
			{
				goto IL_01fe;
			}
			case 3:
			{
				goto IL_0126;
			}
			case 4:
			{
				goto IL_01fe;
			}
			case 5:
			{
				goto IL_013c;
			}
		}
	}
	{
		Il2CppChar L_14 = V_14;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_14, ((int32_t)44))))
		{
			case 0:
			{
				goto IL_00f5;
			}
			case 1:
			{
				goto IL_01fe;
			}
			case 2:
			{
				goto IL_00e7;
			}
			case 3:
			{
				goto IL_01fe;
			}
			case 4:
			{
				goto IL_00d2;
			}
		}
	}
	{
		Il2CppChar L_15 = V_14;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)69))))
		{
			goto IL_0190;
		}
	}
	{
		goto IL_01fe;
	}

IL_00a9:
	{
		Il2CppChar L_16 = V_14;
		if ((((int32_t)L_16) == ((int32_t)((int32_t)92))))
		{
			goto IL_016f;
		}
	}
	{
		Il2CppChar L_17 = V_14;
		if ((((int32_t)L_17) == ((int32_t)((int32_t)101))))
		{
			goto IL_0190;
		}
	}
	{
		Il2CppChar L_18 = V_14;
		if ((((int32_t)L_18) == ((int32_t)((int32_t)8240))))
		{
			goto IL_0131;
		}
	}
	{
		goto IL_01fe;
	}

IL_00c9:
	{
		int32_t L_19 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_19, 1));
		goto IL_01fe;
	}

IL_00d2:
	{
		int32_t L_20 = V_2;
		if ((!(((uint32_t)L_20) == ((uint32_t)((int32_t)2147483647LL)))))
		{
			goto IL_00dc;
		}
	}
	{
		int32_t L_21 = V_0;
		V_2 = L_21;
	}

IL_00dc:
	{
		int32_t L_22 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_22, 1));
		int32_t L_23 = V_0;
		V_3 = L_23;
		goto IL_01fe;
	}

IL_00e7:
	{
		int32_t L_24 = V_1;
		if ((((int32_t)L_24) >= ((int32_t)0)))
		{
			goto IL_01fe;
		}
	}
	{
		int32_t L_25 = V_0;
		V_1 = L_25;
		goto IL_01fe;
	}

IL_00f5:
	{
		int32_t L_26 = V_0;
		if ((((int32_t)L_26) <= ((int32_t)0)))
		{
			goto IL_01fe;
		}
	}
	{
		int32_t L_27 = V_1;
		if ((((int32_t)L_27) >= ((int32_t)0)))
		{
			goto IL_01fe;
		}
	}
	{
		int32_t L_28 = V_6;
		if ((((int32_t)L_28) < ((int32_t)0)))
		{
			goto IL_011b;
		}
	}
	{
		int32_t L_29 = V_6;
		int32_t L_30 = V_0;
		if ((!(((uint32_t)L_29) == ((uint32_t)L_30))))
		{
			goto IL_0118;
		}
	}
	{
		int32_t L_31 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add(L_31, 1));
		goto IL_01fe;
	}

IL_0118:
	{
		V_8 = (bool)1;
	}

IL_011b:
	{
		int32_t L_32 = V_0;
		V_6 = L_32;
		V_7 = 1;
		goto IL_01fe;
	}

IL_0126:
	{
		int32_t L_33 = V_9;
		V_9 = ((int32_t)il2cpp_codegen_add(L_33, 2));
		goto IL_01fe;
	}

IL_0131:
	{
		int32_t L_34 = V_9;
		V_9 = ((int32_t)il2cpp_codegen_add(L_34, 3));
		goto IL_01fe;
	}

IL_013c:
	{
		int32_t L_35 = V_12;
		int32_t L_36;
		L_36 = ReadOnlySpan_1_get_Length_m36BD32453530B535FE60A8123643219FEAABC351_inline((&___2_format), ReadOnlySpan_1_get_Length_m36BD32453530B535FE60A8123643219FEAABC351_RuntimeMethod_var);
		if ((((int32_t)L_35) >= ((int32_t)L_36)))
		{
			goto IL_01fe;
		}
	}
	{
		Il2CppChar* L_37 = V_18;
		int32_t L_38 = V_12;
		int32_t L_39 = *((uint16_t*)((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_37, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_38), 2)))));
		if (!L_39)
		{
			goto IL_01fe;
		}
	}
	{
		Il2CppChar* L_40 = V_18;
		int32_t L_41 = V_12;
		int32_t L_42 = L_41;
		V_12 = ((int32_t)il2cpp_codegen_add(L_42, 1));
		int32_t L_43 = *((uint16_t*)((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_40, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_42), 2)))));
		Il2CppChar L_44 = V_14;
		if ((!(((uint32_t)L_43) == ((uint32_t)L_44))))
		{
			goto IL_013c;
		}
	}
	{
		goto IL_01fe;
	}

IL_016f:
	{
		int32_t L_45 = V_12;
		int32_t L_46;
		L_46 = ReadOnlySpan_1_get_Length_m36BD32453530B535FE60A8123643219FEAABC351_inline((&___2_format), ReadOnlySpan_1_get_Length_m36BD32453530B535FE60A8123643219FEAABC351_RuntimeMethod_var);
		if ((((int32_t)L_45) >= ((int32_t)L_46)))
		{
			goto IL_01fe;
		}
	}
	{
		Il2CppChar* L_47 = V_18;
		int32_t L_48 = V_12;
		int32_t L_49 = *((uint16_t*)((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_47, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_48), 2)))));
		if (!L_49)
		{
			goto IL_01fe;
		}
	}
	{
		int32_t L_50 = V_12;
		V_12 = ((int32_t)il2cpp_codegen_add(L_50, 1));
		goto IL_01fe;
	}

IL_0190:
	{
		int32_t L_51 = V_12;
		int32_t L_52;
		L_52 = ReadOnlySpan_1_get_Length_m36BD32453530B535FE60A8123643219FEAABC351_inline((&___2_format), ReadOnlySpan_1_get_Length_m36BD32453530B535FE60A8123643219FEAABC351_RuntimeMethod_var);
		if ((((int32_t)L_51) >= ((int32_t)L_52)))
		{
			goto IL_01a8;
		}
	}
	{
		Il2CppChar* L_53 = V_18;
		int32_t L_54 = V_12;
		int32_t L_55 = *((uint16_t*)((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_53, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_54), 2)))));
		if ((((int32_t)L_55) == ((int32_t)((int32_t)48))))
		{
			goto IL_01de;
		}
	}

IL_01a8:
	{
		int32_t L_56 = V_12;
		int32_t L_57;
		L_57 = ReadOnlySpan_1_get_Length_m36BD32453530B535FE60A8123643219FEAABC351_inline((&___2_format), ReadOnlySpan_1_get_Length_m36BD32453530B535FE60A8123643219FEAABC351_RuntimeMethod_var);
		if ((((int32_t)((int32_t)il2cpp_codegen_add(L_56, 1))) >= ((int32_t)L_57)))
		{
			goto IL_01fe;
		}
	}
	{
		Il2CppChar* L_58 = V_18;
		int32_t L_59 = V_12;
		int32_t L_60 = *((uint16_t*)((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_58, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_59), 2)))));
		if ((((int32_t)L_60) == ((int32_t)((int32_t)43))))
		{
			goto IL_01cf;
		}
	}
	{
		Il2CppChar* L_61 = V_18;
		int32_t L_62 = V_12;
		int32_t L_63 = *((uint16_t*)((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_61, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_62), 2)))));
		if ((!(((uint32_t)L_63) == ((uint32_t)((int32_t)45)))))
		{
			goto IL_01fe;
		}
	}

IL_01cf:
	{
		Il2CppChar* L_64 = V_18;
		int32_t L_65 = V_12;
		int32_t L_66 = *((uint16_t*)((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_64, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_add(L_65, 1))), 2)))));
		if ((!(((uint32_t)L_66) == ((uint32_t)((int32_t)48)))))
		{
			goto IL_01fe;
		}
	}

IL_01de:
	{
		int32_t L_67 = V_12;
		int32_t L_68 = ((int32_t)il2cpp_codegen_add(L_67, 1));
		V_12 = L_68;
		int32_t L_69;
		L_69 = ReadOnlySpan_1_get_Length_m36BD32453530B535FE60A8123643219FEAABC351_inline((&___2_format), ReadOnlySpan_1_get_Length_m36BD32453530B535FE60A8123643219FEAABC351_RuntimeMethod_var);
		if ((((int32_t)L_68) >= ((int32_t)L_69)))
		{
			goto IL_01fb;
		}
	}
	{
		Il2CppChar* L_70 = V_18;
		int32_t L_71 = V_12;
		int32_t L_72 = *((uint16_t*)((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_70, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_71), 2)))));
		if ((((int32_t)L_72) == ((int32_t)((int32_t)48))))
		{
			goto IL_01de;
		}
	}

IL_01fb:
	{
		V_5 = (bool)1;
	}

IL_01fe:
	{
		int32_t L_73 = V_12;
		int32_t L_74;
		L_74 = ReadOnlySpan_1_get_Length_m36BD32453530B535FE60A8123643219FEAABC351_inline((&___2_format), ReadOnlySpan_1_get_Length_m36BD32453530B535FE60A8123643219FEAABC351_RuntimeMethod_var);
		if ((((int32_t)L_73) >= ((int32_t)L_74)))
		{
			goto IL_0225;
		}
	}
	{
		Il2CppChar* L_75 = V_18;
		int32_t L_76 = V_12;
		int32_t L_77 = L_76;
		V_12 = ((int32_t)il2cpp_codegen_add(L_77, 1));
		int32_t L_78 = *((uint16_t*)((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_75, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_77), 2)))));
		int32_t L_79 = L_78;
		V_14 = L_79;
		if (!L_79)
		{
			goto IL_0225;
		}
	}
	{
		Il2CppChar L_80 = V_14;
		if ((!(((uint32_t)L_80) == ((uint32_t)((int32_t)59)))))
		{
			goto IL_0055;
		}
	}

IL_0225:
	{
		V_19 = (Il2CppChar*)((uintptr_t)0);
		int32_t L_81 = V_1;
		if ((((int32_t)L_81) >= ((int32_t)0)))
		{
			goto IL_022f;
		}
	}
	{
		int32_t L_82 = V_0;
		V_1 = L_82;
	}

IL_022f:
	{
		int32_t L_83 = V_6;
		if ((((int32_t)L_83) < ((int32_t)0)))
		{
			goto IL_0247;
		}
	}
	{
		int32_t L_84 = V_6;
		int32_t L_85 = V_1;
		if ((!(((uint32_t)L_84) == ((uint32_t)L_85))))
		{
			goto IL_0244;
		}
	}
	{
		int32_t L_86 = V_9;
		int32_t L_87 = V_7;
		V_9 = ((int32_t)il2cpp_codegen_subtract(L_86, ((int32_t)il2cpp_codegen_multiply(L_87, 3))));
		goto IL_0247;
	}

IL_0244:
	{
		V_8 = (bool)1;
	}

IL_0247:
	{
		Il2CppChar* L_88 = V_13;
		int32_t L_89 = *((uint16_t*)L_88);
		if (!L_89)
		{
			goto IL_0290;
		}
	}
	{
		NumberBuffer_t0F9FC9D15F03CFDEBA3B3F4210A2AB3B53305CDA* L_90 = ___1_number;
		int32_t* L_91 = (&L_90->___scale_1);
		int32_t* L_92 = L_91;
		int32_t L_93 = *((int32_t*)L_92);
		int32_t L_94 = V_9;
		*((int32_t*)L_92) = (int32_t)((int32_t)il2cpp_codegen_add(L_93, L_94));
		bool L_95 = V_5;
		if (L_95)
		{
			goto IL_0268;
		}
	}
	{
		NumberBuffer_t0F9FC9D15F03CFDEBA3B3F4210A2AB3B53305CDA* L_96 = ___1_number;
		int32_t L_97 = L_96->___scale_1;
		int32_t L_98 = V_0;
		int32_t L_99 = V_1;
		G_B60_0 = ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_97, L_98)), L_99));
		goto IL_0269;
	}

IL_0268:
	{
		int32_t L_100 = V_0;
		G_B60_0 = L_100;
	}

IL_0269:
	{
		V_20 = G_B60_0;
		NumberBuffer_t0F9FC9D15F03CFDEBA3B3F4210A2AB3B53305CDA* L_101 = ___1_number;
		int32_t L_102 = V_20;
		il2cpp_codegen_runtime_class_init_inline(Number_t006CBC9914386BB171582F4C3A3EEB2EE404D461_il2cpp_TypeInfo_var);
		Number_RoundNumber_m4CF4E60F6BB2595CAF7D220275299620A954CAA0(L_101, L_102, NULL);
		Il2CppChar* L_103 = V_13;
		int32_t L_104 = *((uint16_t*)L_103);
		if (L_104)
		{
			goto IL_029e;
		}
	}
	{
		ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 L_105 = ___2_format;
		il2cpp_codegen_runtime_class_init_inline(Number_t006CBC9914386BB171582F4C3A3EEB2EE404D461_il2cpp_TypeInfo_var);
		int32_t L_106;
		L_106 = Number_FindSection_mC2D1C69F848ACAB296ADB63DD0D87CF39C446849(L_105, 2, NULL);
		V_12 = L_106;
		int32_t L_107 = V_12;
		int32_t L_108 = V_11;
		if ((((int32_t)L_107) == ((int32_t)L_108)))
		{
			goto IL_029e;
		}
	}
	{
		int32_t L_109 = V_12;
		V_11 = L_109;
		goto IL_0027;
	}

IL_0290:
	{
		NumberBuffer_t0F9FC9D15F03CFDEBA3B3F4210A2AB3B53305CDA* L_110 = ___1_number;
		L_110->___sign_2 = (bool)0;
		NumberBuffer_t0F9FC9D15F03CFDEBA3B3F4210A2AB3B53305CDA* L_111 = ___1_number;
		L_111->___scale_1 = 0;
	}

IL_029e:
	{
		int32_t L_112 = V_2;
		int32_t L_113 = V_1;
		if ((((int32_t)L_112) < ((int32_t)L_113)))
		{
			goto IL_02a5;
		}
	}
	{
		G_B67_0 = 0;
		goto IL_02a8;
	}

IL_02a5:
	{
		int32_t L_114 = V_1;
		int32_t L_115 = V_2;
		G_B67_0 = ((int32_t)il2cpp_codegen_subtract(L_114, L_115));
	}

IL_02a8:
	{
		V_2 = G_B67_0;
		int32_t L_116 = V_3;
		int32_t L_117 = V_1;
		if ((((int32_t)L_116) > ((int32_t)L_117)))
		{
			goto IL_02b0;
		}
	}
	{
		G_B70_0 = 0;
		goto IL_02b3;
	}

IL_02b0:
	{
		int32_t L_118 = V_1;
		int32_t L_119 = V_3;
		G_B70_0 = ((int32_t)il2cpp_codegen_subtract(L_118, L_119));
	}

IL_02b3:
	{
		V_3 = G_B70_0;
		bool L_120 = V_5;
		if (!L_120)
		{
			goto IL_02c0;
		}
	}
	{
		int32_t L_121 = V_1;
		V_4 = L_121;
		V_10 = 0;
		goto IL_02de;
	}

IL_02c0:
	{
		NumberBuffer_t0F9FC9D15F03CFDEBA3B3F4210A2AB3B53305CDA* L_122 = ___1_number;
		int32_t L_123 = L_122->___scale_1;
		int32_t L_124 = V_1;
		if ((((int32_t)L_123) > ((int32_t)L_124)))
		{
			goto IL_02cc;
		}
	}
	{
		int32_t L_125 = V_1;
		G_B75_0 = L_125;
		goto IL_02d2;
	}

IL_02cc:
	{
		NumberBuffer_t0F9FC9D15F03CFDEBA3B3F4210A2AB3B53305CDA* L_126 = ___1_number;
		int32_t L_127 = L_126->___scale_1;
		G_B75_0 = L_127;
	}

IL_02d2:
	{
		V_4 = G_B75_0;
		NumberBuffer_t0F9FC9D15F03CFDEBA3B3F4210A2AB3B53305CDA* L_128 = ___1_number;
		int32_t L_129 = L_128->___scale_1;
		int32_t L_130 = V_1;
		V_10 = ((int32_t)il2cpp_codegen_subtract(L_129, L_130));
	}

IL_02de:
	{
		int32_t L_131 = V_11;
		V_12 = L_131;
		uintptr_t L_132 = ((uintptr_t)((int32_t)16));
		int8_t* L_133 = (int8_t*) (L_132 ? alloca(L_132) : NULL);
		memset(L_133, 0, L_132);
		Span_1_t3C5DB525B005B1AC5A1F3BDD528900C5C7C7D316 L_134;
		memset((&L_134), 0, sizeof(L_134));
		Span_1__ctor_m31EE4A5510B5C504DB26DB281BC7D4179B859F2B_inline((&L_134), (void*)(L_133), 4, Span_1__ctor_m31EE4A5510B5C504DB26DB281BC7D4179B859F2B_RuntimeMethod_var);
		V_15 = L_134;
		V_16 = (-1);
		bool L_135 = V_8;
		if (!L_135)
		{
			goto IL_03b4;
		}
	}
	{
		NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* L_136 = ___3_info;
		NullCheck(L_136);
		String_t* L_137;
		L_137 = NumberFormatInfo_get_NumberGroupSeparator_m0556B092AA471513B1EDC31C047712226D39BEB6_inline(L_136, NULL);
		NullCheck(L_137);
		int32_t L_138;
		L_138 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_137, NULL);
		if ((((int32_t)L_138) <= ((int32_t)0)))
		{
			goto IL_03b4;
		}
	}
	{
		NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* L_139 = ___3_info;
		NullCheck(L_139);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_140;
		L_140 = NumberFormatInfo_get_NumberGroupSizes_m45DE41B24561ECB99B63B5714CEEC5D101EB15D9(L_139, NULL);
		V_21 = L_140;
		V_22 = 0;
		V_23 = 0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_141 = V_21;
		NullCheck(L_141);
		V_24 = ((int32_t)(((RuntimeArray*)L_141)->max_length));
		int32_t L_142 = V_24;
		if (!L_142)
		{
			goto IL_0329;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_143 = V_21;
		int32_t L_144 = V_22;
		NullCheck(L_143);
		int32_t L_145 = L_144;
		int32_t L_146 = (L_143)->GetAt(static_cast<il2cpp_array_size_t>(L_145));
		V_23 = L_146;
	}

IL_0329:
	{
		int32_t L_147 = V_23;
		V_25 = L_147;
		int32_t L_148 = V_4;
		int32_t L_149 = V_10;
		if ((((int32_t)L_149) < ((int32_t)0)))
		{
			G_B82_0 = L_148;
			goto IL_0337;
		}
		G_B81_0 = L_148;
	}
	{
		G_B83_0 = 0;
		G_B83_1 = G_B81_0;
		goto IL_0339;
	}

IL_0337:
	{
		int32_t L_150 = V_10;
		G_B83_0 = L_150;
		G_B83_1 = G_B82_0;
	}

IL_0339:
	{
		V_26 = ((int32_t)il2cpp_codegen_add(G_B83_1, G_B83_0));
		int32_t L_151 = V_2;
		int32_t L_152 = V_26;
		if ((((int32_t)L_151) > ((int32_t)L_152)))
		{
			goto IL_0345;
		}
	}
	{
		int32_t L_153 = V_26;
		G_B86_0 = L_153;
		goto IL_0346;
	}

IL_0345:
	{
		int32_t L_154 = V_2;
		G_B86_0 = L_154;
	}

IL_0346:
	{
		V_27 = G_B86_0;
		goto IL_03ae;
	}

IL_034a:
	{
		int32_t L_155 = V_25;
		if (!L_155)
		{
			goto IL_03b4;
		}
	}
	{
		int32_t L_156 = V_16;
		V_16 = ((int32_t)il2cpp_codegen_add(L_156, 1));
		int32_t L_157 = V_16;
		int32_t L_158;
		L_158 = Span_1_get_Length_m87AB3C694F2E4802F14D006F21C020816045285F_inline((&V_15), Span_1_get_Length_m87AB3C694F2E4802F14D006F21C020816045285F_RuntimeMethod_var);
		if ((((int32_t)L_157) < ((int32_t)L_158)))
		{
			goto IL_0386;
		}
	}
	{
		int32_t L_159;
		L_159 = Span_1_get_Length_m87AB3C694F2E4802F14D006F21C020816045285F_inline((&V_15), Span_1_get_Length_m87AB3C694F2E4802F14D006F21C020816045285F_RuntimeMethod_var);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_160 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_multiply(L_159, 2)));
		V_28 = L_160;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_161 = V_28;
		Span_1_t3C5DB525B005B1AC5A1F3BDD528900C5C7C7D316 L_162;
		L_162 = Span_1_op_Implicit_m75103E0CA16D9EEB5414F2FA9611149122CF23CC(L_161, Span_1_op_Implicit_m75103E0CA16D9EEB5414F2FA9611149122CF23CC_RuntimeMethod_var);
		Span_1_CopyTo_m197E47790117E2C925FE1A8E051A19AB9CF4260B((&V_15), L_162, Span_1_CopyTo_m197E47790117E2C925FE1A8E051A19AB9CF4260B_RuntimeMethod_var);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_163 = V_28;
		Span_1_t3C5DB525B005B1AC5A1F3BDD528900C5C7C7D316 L_164;
		L_164 = Span_1_op_Implicit_m75103E0CA16D9EEB5414F2FA9611149122CF23CC(L_163, Span_1_op_Implicit_m75103E0CA16D9EEB5414F2FA9611149122CF23CC_RuntimeMethod_var);
		V_15 = L_164;
	}

IL_0386:
	{
		int32_t L_165 = V_16;
		int32_t* L_166;
		L_166 = il2cpp_span_get_item((int32_t*)((Il2CppByReference*)&(((&V_15))->____pointer_0))->value, (L_165), ((&V_15))->____length_1);
		int32_t L_167 = V_23;
		*((int32_t*)L_166) = (int32_t)L_167;
		int32_t L_168 = V_22;
		int32_t L_169 = V_24;
		if ((((int32_t)L_168) >= ((int32_t)((int32_t)il2cpp_codegen_subtract(L_169, 1)))))
		{
			goto IL_03a7;
		}
	}
	{
		int32_t L_170 = V_22;
		V_22 = ((int32_t)il2cpp_codegen_add(L_170, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_171 = V_21;
		int32_t L_172 = V_22;
		NullCheck(L_171);
		int32_t L_173 = L_172;
		int32_t L_174 = (L_171)->GetAt(static_cast<il2cpp_array_size_t>(L_173));
		V_25 = L_174;
	}

IL_03a7:
	{
		int32_t L_175 = V_23;
		int32_t L_176 = V_25;
		V_23 = ((int32_t)il2cpp_codegen_add(L_175, L_176));
	}

IL_03ae:
	{
		int32_t L_177 = V_27;
		int32_t L_178 = V_23;
		if ((((int32_t)L_177) > ((int32_t)L_178)))
		{
			goto IL_034a;
		}
	}

IL_03b4:
	{
		NumberBuffer_t0F9FC9D15F03CFDEBA3B3F4210A2AB3B53305CDA* L_179 = ___1_number;
		bool L_180 = L_179->___sign_2;
		if (!L_180)
		{
			goto IL_03cc;
		}
	}
	{
		int32_t L_181 = V_11;
		if (L_181)
		{
			goto IL_03cc;
		}
	}
	{
		ValueStringBuilder_tEBD54C46E3AF8527BD0D234124F5C1AC14E9E251* L_182 = ___0_sb;
		NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* L_183 = ___3_info;
		NullCheck(L_183);
		String_t* L_184;
		L_184 = NumberFormatInfo_get_NegativeSign_m7744D30B65FFC7D00CDD1CCF7E53D3722D350E7C_inline(L_183, NULL);
		ValueStringBuilder_Append_m4F9C03D9B78FD7AE877AAC57178D2F84AD2956CF_inline(L_182, L_184, NULL);
	}

IL_03cc:
	{
		V_17 = (bool)0;
		ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 L_185 = ___2_format;
		Il2CppChar* L_186;
		L_186 = MemoryMarshal_GetReference_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_mE4C181D41EF4A4EC432CD3610B2969041E6F2F7A(L_185, MemoryMarshal_GetReference_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_mE4C181D41EF4A4EC432CD3610B2969041E6F2F7A_RuntimeMethod_var);
		V_19 = L_186;
		Il2CppChar* L_187 = V_19;
		V_29 = (Il2CppChar*)((uintptr_t)L_187);
		Il2CppChar* L_188 = V_13;
		V_30 = L_188;
		goto IL_078e;
	}

IL_03e5:
	{
		int32_t L_189 = V_10;
		if ((((int32_t)L_189) <= ((int32_t)0)))
		{
			goto IL_0456;
		}
	}
	{
		Il2CppChar L_190 = V_14;
		if ((((int32_t)L_190) == ((int32_t)((int32_t)35))))
		{
			goto IL_0451;
		}
	}
	{
		Il2CppChar L_191 = V_14;
		if ((((int32_t)L_191) == ((int32_t)((int32_t)46))))
		{
			goto IL_0451;
		}
	}
	{
		Il2CppChar L_192 = V_14;
		if ((((int32_t)L_192) == ((int32_t)((int32_t)48))))
		{
			goto IL_0451;
		}
	}
	{
		goto IL_0456;
	}

IL_03fe:
	{
		ValueStringBuilder_tEBD54C46E3AF8527BD0D234124F5C1AC14E9E251* L_193 = ___0_sb;
		Il2CppChar* L_194 = V_30;
		int32_t L_195 = *((uint16_t*)L_194);
		if (L_195)
		{
			G_B105_0 = L_193;
			goto IL_0408;
		}
		G_B104_0 = L_193;
	}
	{
		G_B106_0 = ((int32_t)48);
		G_B106_1 = G_B104_0;
		goto IL_0410;
	}

IL_0408:
	{
		Il2CppChar* L_196 = V_30;
		Il2CppChar* L_197 = L_196;
		V_30 = ((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_197, 2));
		int32_t L_198 = *((uint16_t*)L_197);
		G_B106_0 = L_198;
		G_B106_1 = G_B105_0;
	}

IL_0410:
	{
		ValueStringBuilder_Append_mBB79BFE6EAB412D689B7D6675A6E0BC3F6FCDFCC_inline(G_B106_1, G_B106_0, NULL);
		bool L_199 = V_8;
		if (!L_199)
		{
			goto IL_0445;
		}
	}
	{
		int32_t L_200 = V_4;
		if ((((int32_t)L_200) <= ((int32_t)1)))
		{
			goto IL_0445;
		}
	}
	{
		int32_t L_201 = V_16;
		if ((((int32_t)L_201) < ((int32_t)0)))
		{
			goto IL_0445;
		}
	}
	{
		int32_t L_202 = V_4;
		int32_t L_203 = V_16;
		int32_t* L_204;
		L_204 = il2cpp_span_get_item((int32_t*)((Il2CppByReference*)&(((&V_15))->____pointer_0))->value, (L_203), ((&V_15))->____length_1);
		int32_t L_205 = *((int32_t*)L_204);
		if ((!(((uint32_t)L_202) == ((uint32_t)((int32_t)il2cpp_codegen_add(L_205, 1))))))
		{
			goto IL_0445;
		}
	}
	{
		ValueStringBuilder_tEBD54C46E3AF8527BD0D234124F5C1AC14E9E251* L_206 = ___0_sb;
		NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* L_207 = ___3_info;
		NullCheck(L_207);
		String_t* L_208;
		L_208 = NumberFormatInfo_get_NumberGroupSeparator_m0556B092AA471513B1EDC31C047712226D39BEB6_inline(L_207, NULL);
		ValueStringBuilder_Append_m4F9C03D9B78FD7AE877AAC57178D2F84AD2956CF_inline(L_206, L_208, NULL);
		int32_t L_209 = V_16;
		V_16 = ((int32_t)il2cpp_codegen_subtract(L_209, 1));
	}

IL_0445:
	{
		int32_t L_210 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_subtract(L_210, 1));
		int32_t L_211 = V_10;
		V_10 = ((int32_t)il2cpp_codegen_subtract(L_211, 1));
	}

IL_0451:
	{
		int32_t L_212 = V_10;
		if ((((int32_t)L_212) > ((int32_t)0)))
		{
			goto IL_03fe;
		}
	}

IL_0456:
	{
		Il2CppChar L_213 = V_14;
		if ((!(((uint32_t)L_213) <= ((uint32_t)((int32_t)69)))))
		{
			goto IL_04aa;
		}
	}
	{
		Il2CppChar L_214 = V_14;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_214, ((int32_t)34))))
		{
			case 0:
			{
				goto IL_05b2;
			}
			case 1:
			{
				goto IL_04cd;
			}
			case 2:
			{
				goto IL_0786;
			}
			case 3:
			{
				goto IL_058d;
			}
			case 4:
			{
				goto IL_0786;
			}
			case 5:
			{
				goto IL_05b2;
			}
		}
	}
	{
		Il2CppChar L_215 = V_14;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_215, ((int32_t)44))))
		{
			case 0:
			{
				goto IL_078e;
			}
			case 1:
			{
				goto IL_0786;
			}
			case 2:
			{
				goto IL_0548;
			}
			case 3:
			{
				goto IL_0786;
			}
			case 4:
			{
				goto IL_04cd;
			}
		}
	}
	{
		Il2CppChar L_216 = V_14;
		if ((((int32_t)L_216) == ((int32_t)((int32_t)69))))
		{
			goto IL_0631;
		}
	}
	{
		goto IL_0786;
	}

IL_04aa:
	{
		Il2CppChar L_217 = V_14;
		if ((((int32_t)L_217) == ((int32_t)((int32_t)92))))
		{
			goto IL_05fc;
		}
	}
	{
		Il2CppChar L_218 = V_14;
		if ((((int32_t)L_218) == ((int32_t)((int32_t)101))))
		{
			goto IL_0631;
		}
	}
	{
		Il2CppChar L_219 = V_14;
		if ((((int32_t)L_219) == ((int32_t)((int32_t)8240))))
		{
			goto IL_057c;
		}
	}
	{
		goto IL_0786;
	}

IL_04cd:
	{
		int32_t L_220 = V_10;
		if ((((int32_t)L_220) >= ((int32_t)0)))
		{
			goto IL_04e6;
		}
	}
	{
		int32_t L_221 = V_10;
		V_10 = ((int32_t)il2cpp_codegen_add(L_221, 1));
		int32_t L_222 = V_4;
		int32_t L_223 = V_2;
		if ((((int32_t)L_222) <= ((int32_t)L_223)))
		{
			goto IL_04e0;
		}
	}
	{
		G_B126_0 = 0;
		goto IL_04e2;
	}

IL_04e0:
	{
		G_B126_0 = ((int32_t)48);
	}

IL_04e2:
	{
		V_14 = G_B126_0;
		goto IL_0501;
	}

IL_04e6:
	{
		Il2CppChar* L_224 = V_30;
		int32_t L_225 = *((uint16_t*)L_224);
		if (L_225)
		{
			goto IL_04f7;
		}
	}
	{
		int32_t L_226 = V_4;
		int32_t L_227 = V_3;
		if ((((int32_t)L_226) > ((int32_t)L_227)))
		{
			goto IL_04f3;
		}
	}
	{
		G_B132_0 = 0;
		goto IL_04ff;
	}

IL_04f3:
	{
		G_B132_0 = ((int32_t)48);
		goto IL_04ff;
	}

IL_04f7:
	{
		Il2CppChar* L_228 = V_30;
		Il2CppChar* L_229 = L_228;
		V_30 = ((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_229, 2));
		int32_t L_230 = *((uint16_t*)L_229);
		G_B132_0 = L_230;
	}

IL_04ff:
	{
		V_14 = G_B132_0;
	}

IL_0501:
	{
		Il2CppChar L_231 = V_14;
		if (!L_231)
		{
			goto IL_053d;
		}
	}
	{
		ValueStringBuilder_tEBD54C46E3AF8527BD0D234124F5C1AC14E9E251* L_232 = ___0_sb;
		Il2CppChar L_233 = V_14;
		ValueStringBuilder_Append_mBB79BFE6EAB412D689B7D6675A6E0BC3F6FCDFCC_inline(L_232, L_233, NULL);
		bool L_234 = V_8;
		if (!L_234)
		{
			goto IL_053d;
		}
	}
	{
		int32_t L_235 = V_4;
		if ((((int32_t)L_235) <= ((int32_t)1)))
		{
			goto IL_053d;
		}
	}
	{
		int32_t L_236 = V_16;
		if ((((int32_t)L_236) < ((int32_t)0)))
		{
			goto IL_053d;
		}
	}
	{
		int32_t L_237 = V_4;
		int32_t L_238 = V_16;
		int32_t* L_239;
		L_239 = il2cpp_span_get_item((int32_t*)((Il2CppByReference*)&(((&V_15))->____pointer_0))->value, (L_238), ((&V_15))->____length_1);
		int32_t L_240 = *((int32_t*)L_239);
		if ((!(((uint32_t)L_237) == ((uint32_t)((int32_t)il2cpp_codegen_add(L_240, 1))))))
		{
			goto IL_053d;
		}
	}
	{
		ValueStringBuilder_tEBD54C46E3AF8527BD0D234124F5C1AC14E9E251* L_241 = ___0_sb;
		NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* L_242 = ___3_info;
		NullCheck(L_242);
		String_t* L_243;
		L_243 = NumberFormatInfo_get_NumberGroupSeparator_m0556B092AA471513B1EDC31C047712226D39BEB6_inline(L_242, NULL);
		ValueStringBuilder_Append_m4F9C03D9B78FD7AE877AAC57178D2F84AD2956CF_inline(L_241, L_243, NULL);
		int32_t L_244 = V_16;
		V_16 = ((int32_t)il2cpp_codegen_subtract(L_244, 1));
	}

IL_053d:
	{
		int32_t L_245 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_subtract(L_245, 1));
		goto IL_078e;
	}

IL_0548:
	{
		int32_t L_246 = V_4;
		bool L_247 = V_17;
		if (((int32_t)(((!(((uint32_t)L_246) <= ((uint32_t)0)))? 1 : 0)|(int32_t)L_247)))
		{
			goto IL_078e;
		}
	}
	{
		int32_t L_248 = V_3;
		if ((((int32_t)L_248) < ((int32_t)0)))
		{
			goto IL_0568;
		}
	}
	{
		int32_t L_249 = V_1;
		int32_t L_250 = V_0;
		if ((((int32_t)L_249) >= ((int32_t)L_250)))
		{
			goto IL_078e;
		}
	}
	{
		Il2CppChar* L_251 = V_30;
		int32_t L_252 = *((uint16_t*)L_251);
		if (!L_252)
		{
			goto IL_078e;
		}
	}

IL_0568:
	{
		ValueStringBuilder_tEBD54C46E3AF8527BD0D234124F5C1AC14E9E251* L_253 = ___0_sb;
		NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* L_254 = ___3_info;
		NullCheck(L_254);
		String_t* L_255;
		L_255 = NumberFormatInfo_get_NumberDecimalSeparator_m7413FA8739F3FA6F5D61B54331DBF3232FC6BFC7_inline(L_254, NULL);
		ValueStringBuilder_Append_m4F9C03D9B78FD7AE877AAC57178D2F84AD2956CF_inline(L_253, L_255, NULL);
		V_17 = (bool)1;
		goto IL_078e;
	}

IL_057c:
	{
		ValueStringBuilder_tEBD54C46E3AF8527BD0D234124F5C1AC14E9E251* L_256 = ___0_sb;
		NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* L_257 = ___3_info;
		NullCheck(L_257);
		String_t* L_258;
		L_258 = NumberFormatInfo_get_PerMilleSymbol_mBE43A9E5D7F05030C0258FB452BD94FD6E411533_inline(L_257, NULL);
		ValueStringBuilder_Append_m4F9C03D9B78FD7AE877AAC57178D2F84AD2956CF_inline(L_256, L_258, NULL);
		goto IL_078e;
	}

IL_058d:
	{
		ValueStringBuilder_tEBD54C46E3AF8527BD0D234124F5C1AC14E9E251* L_259 = ___0_sb;
		NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* L_260 = ___3_info;
		NullCheck(L_260);
		String_t* L_261;
		L_261 = NumberFormatInfo_get_PercentSymbol_mB3F25C2B5F71574B7F4A0BEE95A7028E7A48CFC2_inline(L_260, NULL);
		ValueStringBuilder_Append_m4F9C03D9B78FD7AE877AAC57178D2F84AD2956CF_inline(L_259, L_261, NULL);
		goto IL_078e;
	}

IL_059e:
	{
		ValueStringBuilder_tEBD54C46E3AF8527BD0D234124F5C1AC14E9E251* L_262 = ___0_sb;
		Il2CppChar* L_263 = V_29;
		int32_t L_264 = V_12;
		int32_t L_265 = L_264;
		V_12 = ((int32_t)il2cpp_codegen_add(L_265, 1));
		int32_t L_266 = *((uint16_t*)((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_263, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_265), 2)))));
		ValueStringBuilder_Append_mBB79BFE6EAB412D689B7D6675A6E0BC3F6FCDFCC_inline(L_262, L_266, NULL);
	}

IL_05b2:
	{
		int32_t L_267 = V_12;
		int32_t L_268;
		L_268 = ReadOnlySpan_1_get_Length_m36BD32453530B535FE60A8123643219FEAABC351_inline((&___2_format), ReadOnlySpan_1_get_Length_m36BD32453530B535FE60A8123643219FEAABC351_RuntimeMethod_var);
		if ((((int32_t)L_267) >= ((int32_t)L_268)))
		{
			goto IL_05d5;
		}
	}
	{
		Il2CppChar* L_269 = V_29;
		int32_t L_270 = V_12;
		int32_t L_271 = *((uint16_t*)((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_269, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_270), 2)))));
		if (!L_271)
		{
			goto IL_05d5;
		}
	}
	{
		Il2CppChar* L_272 = V_29;
		int32_t L_273 = V_12;
		int32_t L_274 = *((uint16_t*)((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_272, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_273), 2)))));
		Il2CppChar L_275 = V_14;
		if ((!(((uint32_t)L_274) == ((uint32_t)L_275))))
		{
			goto IL_059e;
		}
	}

IL_05d5:
	{
		int32_t L_276 = V_12;
		int32_t L_277;
		L_277 = ReadOnlySpan_1_get_Length_m36BD32453530B535FE60A8123643219FEAABC351_inline((&___2_format), ReadOnlySpan_1_get_Length_m36BD32453530B535FE60A8123643219FEAABC351_RuntimeMethod_var);
		if ((((int32_t)L_276) >= ((int32_t)L_277)))
		{
			goto IL_078e;
		}
	}
	{
		Il2CppChar* L_278 = V_29;
		int32_t L_279 = V_12;
		int32_t L_280 = *((uint16_t*)((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_278, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_279), 2)))));
		if (!L_280)
		{
			goto IL_078e;
		}
	}
	{
		int32_t L_281 = V_12;
		V_12 = ((int32_t)il2cpp_codegen_add(L_281, 1));
		goto IL_078e;
	}

IL_05fc:
	{
		int32_t L_282 = V_12;
		int32_t L_283;
		L_283 = ReadOnlySpan_1_get_Length_m36BD32453530B535FE60A8123643219FEAABC351_inline((&___2_format), ReadOnlySpan_1_get_Length_m36BD32453530B535FE60A8123643219FEAABC351_RuntimeMethod_var);
		if ((((int32_t)L_282) >= ((int32_t)L_283)))
		{
			goto IL_078e;
		}
	}
	{
		Il2CppChar* L_284 = V_29;
		int32_t L_285 = V_12;
		int32_t L_286 = *((uint16_t*)((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_284, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_285), 2)))));
		if (!L_286)
		{
			goto IL_078e;
		}
	}
	{
		ValueStringBuilder_tEBD54C46E3AF8527BD0D234124F5C1AC14E9E251* L_287 = ___0_sb;
		Il2CppChar* L_288 = V_29;
		int32_t L_289 = V_12;
		int32_t L_290 = L_289;
		V_12 = ((int32_t)il2cpp_codegen_add(L_290, 1));
		int32_t L_291 = *((uint16_t*)((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_288, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_290), 2)))));
		ValueStringBuilder_Append_mBB79BFE6EAB412D689B7D6675A6E0BC3F6FCDFCC_inline(L_287, L_291, NULL);
		goto IL_078e;
	}

IL_0631:
	{
		V_31 = (bool)0;
		V_32 = 0;
		bool L_292 = V_5;
		if (!L_292)
		{
			goto IL_0715;
		}
	}
	{
		int32_t L_293 = V_12;
		int32_t L_294;
		L_294 = ReadOnlySpan_1_get_Length_m36BD32453530B535FE60A8123643219FEAABC351_inline((&___2_format), ReadOnlySpan_1_get_Length_m36BD32453530B535FE60A8123643219FEAABC351_RuntimeMethod_var);
		if ((((int32_t)L_293) >= ((int32_t)L_294)))
		{
			goto IL_065e;
		}
	}
	{
		Il2CppChar* L_295 = V_29;
		int32_t L_296 = V_12;
		int32_t L_297 = *((uint16_t*)((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_295, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_296), 2)))));
		if ((!(((uint32_t)L_297) == ((uint32_t)((int32_t)48)))))
		{
			goto IL_065e;
		}
	}
	{
		int32_t L_298 = V_32;
		V_32 = ((int32_t)il2cpp_codegen_add(L_298, 1));
		goto IL_06c8;
	}

IL_065e:
	{
		int32_t L_299 = V_12;
		int32_t L_300;
		L_300 = ReadOnlySpan_1_get_Length_m36BD32453530B535FE60A8123643219FEAABC351_inline((&___2_format), ReadOnlySpan_1_get_Length_m36BD32453530B535FE60A8123643219FEAABC351_RuntimeMethod_var);
		if ((((int32_t)((int32_t)il2cpp_codegen_add(L_299, 1))) >= ((int32_t)L_300)))
		{
			goto IL_068c;
		}
	}
	{
		Il2CppChar* L_301 = V_29;
		int32_t L_302 = V_12;
		int32_t L_303 = *((uint16_t*)((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_301, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_302), 2)))));
		if ((!(((uint32_t)L_303) == ((uint32_t)((int32_t)43)))))
		{
			goto IL_068c;
		}
	}
	{
		Il2CppChar* L_304 = V_29;
		int32_t L_305 = V_12;
		int32_t L_306 = *((uint16_t*)((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_304, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_add(L_305, 1))), 2)))));
		if ((!(((uint32_t)L_306) == ((uint32_t)((int32_t)48)))))
		{
			goto IL_068c;
		}
	}
	{
		V_31 = (bool)1;
		goto IL_06c8;
	}

IL_068c:
	{
		int32_t L_307 = V_12;
		int32_t L_308;
		L_308 = ReadOnlySpan_1_get_Length_m36BD32453530B535FE60A8123643219FEAABC351_inline((&___2_format), ReadOnlySpan_1_get_Length_m36BD32453530B535FE60A8123643219FEAABC351_RuntimeMethod_var);
		if ((((int32_t)((int32_t)il2cpp_codegen_add(L_307, 1))) >= ((int32_t)L_308)))
		{
			goto IL_06b5;
		}
	}
	{
		Il2CppChar* L_309 = V_29;
		int32_t L_310 = V_12;
		int32_t L_311 = *((uint16_t*)((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_309, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_310), 2)))));
		if ((!(((uint32_t)L_311) == ((uint32_t)((int32_t)45)))))
		{
			goto IL_06b5;
		}
	}
	{
		Il2CppChar* L_312 = V_29;
		int32_t L_313 = V_12;
		int32_t L_314 = *((uint16_t*)((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_312, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_add(L_313, 1))), 2)))));
		if ((((int32_t)L_314) == ((int32_t)((int32_t)48))))
		{
			goto IL_06c8;
		}
	}

IL_06b5:
	{
		ValueStringBuilder_tEBD54C46E3AF8527BD0D234124F5C1AC14E9E251* L_315 = ___0_sb;
		Il2CppChar L_316 = V_14;
		ValueStringBuilder_Append_mBB79BFE6EAB412D689B7D6675A6E0BC3F6FCDFCC_inline(L_315, L_316, NULL);
		goto IL_078e;
	}

IL_06c2:
	{
		int32_t L_317 = V_32;
		V_32 = ((int32_t)il2cpp_codegen_add(L_317, 1));
	}

IL_06c8:
	{
		int32_t L_318 = V_12;
		int32_t L_319 = ((int32_t)il2cpp_codegen_add(L_318, 1));
		V_12 = L_319;
		int32_t L_320;
		L_320 = ReadOnlySpan_1_get_Length_m36BD32453530B535FE60A8123643219FEAABC351_inline((&___2_format), ReadOnlySpan_1_get_Length_m36BD32453530B535FE60A8123643219FEAABC351_RuntimeMethod_var);
		if ((((int32_t)L_319) >= ((int32_t)L_320)))
		{
			goto IL_06e5;
		}
	}
	{
		Il2CppChar* L_321 = V_29;
		int32_t L_322 = V_12;
		int32_t L_323 = *((uint16_t*)((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_321, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_322), 2)))));
		if ((((int32_t)L_323) == ((int32_t)((int32_t)48))))
		{
			goto IL_06c2;
		}
	}

IL_06e5:
	{
		int32_t L_324 = V_32;
		if ((((int32_t)L_324) <= ((int32_t)((int32_t)10))))
		{
			goto IL_06ef;
		}
	}
	{
		V_32 = ((int32_t)10);
	}

IL_06ef:
	{
		Il2CppChar* L_325 = V_13;
		int32_t L_326 = *((uint16_t*)L_325);
		if (!L_326)
		{
			goto IL_06fe;
		}
	}
	{
		NumberBuffer_t0F9FC9D15F03CFDEBA3B3F4210A2AB3B53305CDA* L_327 = ___1_number;
		int32_t L_328 = L_327->___scale_1;
		int32_t L_329 = V_1;
		G_B177_0 = ((int32_t)il2cpp_codegen_subtract(L_328, L_329));
		goto IL_06ff;
	}

IL_06fe:
	{
		G_B177_0 = 0;
	}

IL_06ff:
	{
		V_33 = G_B177_0;
		ValueStringBuilder_tEBD54C46E3AF8527BD0D234124F5C1AC14E9E251* L_330 = ___0_sb;
		NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* L_331 = ___3_info;
		int32_t L_332 = V_33;
		Il2CppChar L_333 = V_14;
		int32_t L_334 = V_32;
		bool L_335 = V_31;
		il2cpp_codegen_runtime_class_init_inline(Number_t006CBC9914386BB171582F4C3A3EEB2EE404D461_il2cpp_TypeInfo_var);
		Number_FormatExponent_m2194D98B7488C2DE4AB59E0AFECDCF4D258412F1(L_330, L_331, L_332, L_333, L_334, L_335, NULL);
		V_5 = (bool)0;
		goto IL_078e;
	}

IL_0715:
	{
		ValueStringBuilder_tEBD54C46E3AF8527BD0D234124F5C1AC14E9E251* L_336 = ___0_sb;
		Il2CppChar L_337 = V_14;
		ValueStringBuilder_Append_mBB79BFE6EAB412D689B7D6675A6E0BC3F6FCDFCC_inline(L_336, L_337, NULL);
		int32_t L_338 = V_12;
		int32_t L_339;
		L_339 = ReadOnlySpan_1_get_Length_m36BD32453530B535FE60A8123643219FEAABC351_inline((&___2_format), ReadOnlySpan_1_get_Length_m36BD32453530B535FE60A8123643219FEAABC351_RuntimeMethod_var);
		if ((((int32_t)L_338) >= ((int32_t)L_339)))
		{
			goto IL_078e;
		}
	}
	{
		Il2CppChar* L_340 = V_29;
		int32_t L_341 = V_12;
		int32_t L_342 = *((uint16_t*)((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_340, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_341), 2)))));
		if ((((int32_t)L_342) == ((int32_t)((int32_t)43))))
		{
			goto IL_0742;
		}
	}
	{
		Il2CppChar* L_343 = V_29;
		int32_t L_344 = V_12;
		int32_t L_345 = *((uint16_t*)((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_343, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_344), 2)))));
		if ((!(((uint32_t)L_345) == ((uint32_t)((int32_t)45)))))
		{
			goto IL_076c;
		}
	}

IL_0742:
	{
		ValueStringBuilder_tEBD54C46E3AF8527BD0D234124F5C1AC14E9E251* L_346 = ___0_sb;
		Il2CppChar* L_347 = V_29;
		int32_t L_348 = V_12;
		int32_t L_349 = L_348;
		V_12 = ((int32_t)il2cpp_codegen_add(L_349, 1));
		int32_t L_350 = *((uint16_t*)((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_347, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_349), 2)))));
		ValueStringBuilder_Append_mBB79BFE6EAB412D689B7D6675A6E0BC3F6FCDFCC_inline(L_346, L_350, NULL);
		goto IL_076c;
	}

IL_0758:
	{
		ValueStringBuilder_tEBD54C46E3AF8527BD0D234124F5C1AC14E9E251* L_351 = ___0_sb;
		Il2CppChar* L_352 = V_29;
		int32_t L_353 = V_12;
		int32_t L_354 = L_353;
		V_12 = ((int32_t)il2cpp_codegen_add(L_354, 1));
		int32_t L_355 = *((uint16_t*)((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_352, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_354), 2)))));
		ValueStringBuilder_Append_mBB79BFE6EAB412D689B7D6675A6E0BC3F6FCDFCC_inline(L_351, L_355, NULL);
	}

IL_076c:
	{
		int32_t L_356 = V_12;
		int32_t L_357;
		L_357 = ReadOnlySpan_1_get_Length_m36BD32453530B535FE60A8123643219FEAABC351_inline((&___2_format), ReadOnlySpan_1_get_Length_m36BD32453530B535FE60A8123643219FEAABC351_RuntimeMethod_var);
		if ((((int32_t)L_356) >= ((int32_t)L_357)))
		{
			goto IL_078e;
		}
	}
	{
		Il2CppChar* L_358 = V_29;
		int32_t L_359 = V_12;
		int32_t L_360 = *((uint16_t*)((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_358, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_359), 2)))));
		if ((((int32_t)L_360) == ((int32_t)((int32_t)48))))
		{
			goto IL_0758;
		}
	}
	{
		goto IL_078e;
	}

IL_0786:
	{
		ValueStringBuilder_tEBD54C46E3AF8527BD0D234124F5C1AC14E9E251* L_361 = ___0_sb;
		Il2CppChar L_362 = V_14;
		ValueStringBuilder_Append_mBB79BFE6EAB412D689B7D6675A6E0BC3F6FCDFCC_inline(L_361, L_362, NULL);
	}

IL_078e:
	{
		int32_t L_363 = V_12;
		int32_t L_364;
		L_364 = ReadOnlySpan_1_get_Length_m36BD32453530B535FE60A8123643219FEAABC351_inline((&___2_format), ReadOnlySpan_1_get_Length_m36BD32453530B535FE60A8123643219FEAABC351_RuntimeMethod_var);
		if ((((int32_t)L_363) >= ((int32_t)L_364)))
		{
			goto IL_07b5;
		}
	}
	{
		Il2CppChar* L_365 = V_29;
		int32_t L_366 = V_12;
		int32_t L_367 = L_366;
		V_12 = ((int32_t)il2cpp_codegen_add(L_367, 1));
		int32_t L_368 = *((uint16_t*)((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_365, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_367), 2)))));
		int32_t L_369 = L_368;
		V_14 = L_369;
		if (!L_369)
		{
			goto IL_07b5;
		}
	}
	{
		Il2CppChar L_370 = V_14;
		if ((!(((uint32_t)L_370) == ((uint32_t)((int32_t)59)))))
		{
			goto IL_03e5;
		}
	}

IL_07b5:
	{
		V_19 = (Il2CppChar*)((uintptr_t)0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Number__cctor_m2D3E19E23CA70D2ABBB814BA5694680EE8AFE430 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Number_t006CBC9914386BB171582F4C3A3EEB2EE404D461_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral02A7C4EF37893C2F6EC5DE096B85F28E75A99A54);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0A559CB4D54EE486F9A4515005F1C40DE6B9EA77);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0A5CB231DA96D87CFB74FFBAF2075ACF5ED946AC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0B0FEB3147CE20EB2C90076367F895C59BCD14B3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1649B6362D7BFE5B47AD5B0E3FF1C23199A234E7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral18244E26F5FF2C5B45348E712BA2064897332C79);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral21AE4E4A6ECECB42D1D08C13B107CFC0DC4F744A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2560015662CF4CE1FBB0C239EE33C0A6BD267C34);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral323B50F239A0CEA841D1CDB6FD827C73F3DA7D58);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3C7A831A0474AE58A1A511C0AE679EA6ACAF323B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3E6E3EAE051FC136B5CCFBED1CB3EB762BAE9210);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4C741498CBA8A5510C09300E9A8B8F588F5E6554);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral56C9B652878395853110609B8408AB9C094B096A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5813ADE87A3277FE8FD81CA759C1415B7C708595);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral586421FA97056FDB29C92DF11FC45E50039AF58C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral65ECD3FE795425EDF31CE693A8E01759AC072FD6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral66885E26C562C39DCC525798DECE3BF74488A976);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6926C85E0B22B5E154849BA94F95B911D0F467AB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6B6E99AB68D2834E2BA881EA585508AE3BB8972B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral71A4D286D674B387825473A6BF68FA0177EAEC37);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7405068459969E65A509A575D3072180AB440CC4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral75024B19E3B0D929FB55D9F58FB9F2BD92238C9A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral79C39E67CD586A3F790D4A0E38FA9F11404B5D1D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7A784352CB13C6A681E12F724A26B5F6FAB9A9B1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8C9373393C312536C1D242EFF64FED26D13EC4C2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral901CED0B08A382B88967A848ACC86064E89B6DA4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral918D7D38C63FE5E56F05EB697A47C91549FBEDCB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAB1BFE74E7A4298B8F37FB9EB6B78547560992A2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralACEB01644E7A4BCEFA0B7FD13C917DA74C936C31);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralACF7EBD89F85F7166021028EA7503E6D3600F722);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB1EEC0D26B91AABE220113FD74CE99065239B040);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBEDE0708DCC90F9E18B81ABBCC88E8AFE5F7C1E5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC4BDB973AE821DEA70F0495195EF17C3A498E945);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC4C4969CA68A212C57B6FC1FBAE5AEBACB547E07);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCF15E6AB986C6E1A6B9D665510A803EB2245E941);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCF5B5845107C1302EDC696A0C7AAAC4FA03151F4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD25163422D668F498B77BBE8BE47AAF95218DD82);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDC400987E5EE16841C02DE14AE43EB578A7FEAC0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDD1E96489DC4F60E6AB0135A5F5CDE79341D8BF7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEEECCAC246F56CB6F1028EA6BD68FFDD99972BC2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF8E3475A2DDD8A338B5687E45B80510D26142DC9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFBC759AD7743C9AB15A1D627CA2AA2D9E3D1E5B9);
		s_Il2CppMethodInitialized = true;
	}
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)4);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_1 = L_0;
		NullCheck(L_1);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteralF8E3475A2DDD8A338B5687E45B80510D26142DC9);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_2 = L_1;
		NullCheck(L_2);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)_stringLiteral7405068459969E65A509A575D3072180AB440CC4);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_3 = L_2;
		NullCheck(L_3);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral3C7A831A0474AE58A1A511C0AE679EA6ACAF323B);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_4 = L_3;
		NullCheck(L_4);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)_stringLiteralD25163422D668F498B77BBE8BE47AAF95218DD82);
		((Number_t006CBC9914386BB171582F4C3A3EEB2EE404D461_StaticFields*)il2cpp_codegen_static_fields_for(Number_t006CBC9914386BB171582F4C3A3EEB2EE404D461_il2cpp_TypeInfo_var))->___s_posCurrencyFormats_0 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&((Number_t006CBC9914386BB171582F4C3A3EEB2EE404D461_StaticFields*)il2cpp_codegen_static_fields_for(Number_t006CBC9914386BB171582F4C3A3EEB2EE404D461_il2cpp_TypeInfo_var))->___s_posCurrencyFormats_0), (void*)L_4);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_5 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)((int32_t)16));
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_6 = L_5;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteralC4C4969CA68A212C57B6FC1FBAE5AEBACB547E07);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_7 = L_6;
		NullCheck(L_7);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)_stringLiteral2560015662CF4CE1FBB0C239EE33C0A6BD267C34);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_8 = L_7;
		NullCheck(L_8);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteralDC400987E5EE16841C02DE14AE43EB578A7FEAC0);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_9 = L_8;
		NullCheck(L_9);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)_stringLiteral71A4D286D674B387825473A6BF68FA0177EAEC37);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_10 = L_9;
		NullCheck(L_10);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteral323B50F239A0CEA841D1CDB6FD827C73F3DA7D58);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_11 = L_10;
		NullCheck(L_11);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(5), (String_t*)_stringLiteralACEB01644E7A4BCEFA0B7FD13C917DA74C936C31);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_12 = L_11;
		NullCheck(L_12);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(6), (String_t*)_stringLiteral586421FA97056FDB29C92DF11FC45E50039AF58C);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_13 = L_12;
		NullCheck(L_13);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(7), (String_t*)_stringLiteral6926C85E0B22B5E154849BA94F95B911D0F467AB);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_14 = L_13;
		NullCheck(L_14);
		(L_14)->SetAt(static_cast<il2cpp_array_size_t>(8), (String_t*)_stringLiteralC4BDB973AE821DEA70F0495195EF17C3A498E945);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_15 = L_14;
		NullCheck(L_15);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)9)), (String_t*)_stringLiteralCF15E6AB986C6E1A6B9D665510A803EB2245E941);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_16 = L_15;
		NullCheck(L_16);
		(L_16)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)10)), (String_t*)_stringLiteralDD1E96489DC4F60E6AB0135A5F5CDE79341D8BF7);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_17 = L_16;
		NullCheck(L_17);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)11)), (String_t*)_stringLiteral56C9B652878395853110609B8408AB9C094B096A);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_18 = L_17;
		NullCheck(L_18);
		(L_18)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)12)), (String_t*)_stringLiteral75024B19E3B0D929FB55D9F58FB9F2BD92238C9A);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_19 = L_18;
		NullCheck(L_19);
		(L_19)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)13)), (String_t*)_stringLiteral1649B6362D7BFE5B47AD5B0E3FF1C23199A234E7);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_20 = L_19;
		NullCheck(L_20);
		(L_20)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)14)), (String_t*)_stringLiteral6B6E99AB68D2834E2BA881EA585508AE3BB8972B);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_21 = L_20;
		NullCheck(L_21);
		(L_21)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)15)), (String_t*)_stringLiteralCF5B5845107C1302EDC696A0C7AAAC4FA03151F4);
		((Number_t006CBC9914386BB171582F4C3A3EEB2EE404D461_StaticFields*)il2cpp_codegen_static_fields_for(Number_t006CBC9914386BB171582F4C3A3EEB2EE404D461_il2cpp_TypeInfo_var))->___s_negCurrencyFormats_1 = L_21;
		Il2CppCodeGenWriteBarrier((void**)(&((Number_t006CBC9914386BB171582F4C3A3EEB2EE404D461_StaticFields*)il2cpp_codegen_static_fields_for(Number_t006CBC9914386BB171582F4C3A3EEB2EE404D461_il2cpp_TypeInfo_var))->___s_negCurrencyFormats_1), (void*)L_21);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_22 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)4);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_23 = L_22;
		NullCheck(L_23);
		(L_23)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteralBEDE0708DCC90F9E18B81ABBCC88E8AFE5F7C1E5);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_24 = L_23;
		NullCheck(L_24);
		(L_24)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)_stringLiteral3E6E3EAE051FC136B5CCFBED1CB3EB762BAE9210);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_25 = L_24;
		NullCheck(L_25);
		(L_25)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral21AE4E4A6ECECB42D1D08C13B107CFC0DC4F744A);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_26 = L_25;
		NullCheck(L_26);
		(L_26)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)_stringLiteral79C39E67CD586A3F790D4A0E38FA9F11404B5D1D);
		((Number_t006CBC9914386BB171582F4C3A3EEB2EE404D461_StaticFields*)il2cpp_codegen_static_fields_for(Number_t006CBC9914386BB171582F4C3A3EEB2EE404D461_il2cpp_TypeInfo_var))->___s_posPercentFormats_2 = L_26;
		Il2CppCodeGenWriteBarrier((void**)(&((Number_t006CBC9914386BB171582F4C3A3EEB2EE404D461_StaticFields*)il2cpp_codegen_static_fields_for(Number_t006CBC9914386BB171582F4C3A3EEB2EE404D461_il2cpp_TypeInfo_var))->___s_posPercentFormats_2), (void*)L_26);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_27 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)((int32_t)12));
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_28 = L_27;
		NullCheck(L_28);
		(L_28)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteralB1EEC0D26B91AABE220113FD74CE99065239B040);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_29 = L_28;
		NullCheck(L_29);
		(L_29)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)_stringLiteralEEECCAC246F56CB6F1028EA6BD68FFDD99972BC2);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_30 = L_29;
		NullCheck(L_30);
		(L_30)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral4C741498CBA8A5510C09300E9A8B8F588F5E6554);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_31 = L_30;
		NullCheck(L_31);
		(L_31)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)_stringLiteral02A7C4EF37893C2F6EC5DE096B85F28E75A99A54);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_32 = L_31;
		NullCheck(L_32);
		(L_32)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteral0A559CB4D54EE486F9A4515005F1C40DE6B9EA77);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_33 = L_32;
		NullCheck(L_33);
		(L_33)->SetAt(static_cast<il2cpp_array_size_t>(5), (String_t*)_stringLiteralACF7EBD89F85F7166021028EA7503E6D3600F722);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_34 = L_33;
		NullCheck(L_34);
		(L_34)->SetAt(static_cast<il2cpp_array_size_t>(6), (String_t*)_stringLiteral7A784352CB13C6A681E12F724A26B5F6FAB9A9B1);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_35 = L_34;
		NullCheck(L_35);
		(L_35)->SetAt(static_cast<il2cpp_array_size_t>(7), (String_t*)_stringLiteralAB1BFE74E7A4298B8F37FB9EB6B78547560992A2);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_36 = L_35;
		NullCheck(L_36);
		(L_36)->SetAt(static_cast<il2cpp_array_size_t>(8), (String_t*)_stringLiteral901CED0B08A382B88967A848ACC86064E89B6DA4);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_37 = L_36;
		NullCheck(L_37);
		(L_37)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)9)), (String_t*)_stringLiteral0A5CB231DA96D87CFB74FFBAF2075ACF5ED946AC);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_38 = L_37;
		NullCheck(L_38);
		(L_38)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)10)), (String_t*)_stringLiteral66885E26C562C39DCC525798DECE3BF74488A976);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_39 = L_38;
		NullCheck(L_39);
		(L_39)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)11)), (String_t*)_stringLiteral5813ADE87A3277FE8FD81CA759C1415B7C708595);
		((Number_t006CBC9914386BB171582F4C3A3EEB2EE404D461_StaticFields*)il2cpp_codegen_static_fields_for(Number_t006CBC9914386BB171582F4C3A3EEB2EE404D461_il2cpp_TypeInfo_var))->___s_negPercentFormats_3 = L_39;
		Il2CppCodeGenWriteBarrier((void**)(&((Number_t006CBC9914386BB171582F4C3A3EEB2EE404D461_StaticFields*)il2cpp_codegen_static_fields_for(Number_t006CBC9914386BB171582F4C3A3EEB2EE404D461_il2cpp_TypeInfo_var))->___s_negPercentFormats_3), (void*)L_39);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_40 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)5);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_41 = L_40;
		NullCheck(L_41);
		(L_41)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteralFBC759AD7743C9AB15A1D627CA2AA2D9E3D1E5B9);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_42 = L_41;
		NullCheck(L_42);
		(L_42)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)_stringLiteral18244E26F5FF2C5B45348E712BA2064897332C79);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_43 = L_42;
		NullCheck(L_43);
		(L_43)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral8C9373393C312536C1D242EFF64FED26D13EC4C2);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_44 = L_43;
		NullCheck(L_44);
		(L_44)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)_stringLiteral65ECD3FE795425EDF31CE693A8E01759AC072FD6);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_45 = L_44;
		NullCheck(L_45);
		(L_45)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteral918D7D38C63FE5E56F05EB697A47C91549FBEDCB);
		((Number_t006CBC9914386BB171582F4C3A3EEB2EE404D461_StaticFields*)il2cpp_codegen_static_fields_for(Number_t006CBC9914386BB171582F4C3A3EEB2EE404D461_il2cpp_TypeInfo_var))->___s_negNumberFormats_4 = L_45;
		Il2CppCodeGenWriteBarrier((void**)(&((Number_t006CBC9914386BB171582F4C3A3EEB2EE404D461_StaticFields*)il2cpp_codegen_static_fields_for(Number_t006CBC9914386BB171582F4C3A3EEB2EE404D461_il2cpp_TypeInfo_var))->___s_negNumberFormats_4), (void*)L_45);
		((Number_t006CBC9914386BB171582F4C3A3EEB2EE404D461_StaticFields*)il2cpp_codegen_static_fields_for(Number_t006CBC9914386BB171582F4C3A3EEB2EE404D461_il2cpp_TypeInfo_var))->___s_posNumberFormat_5 = _stringLiteral0B0FEB3147CE20EB2C90076367F895C59BCD14B3;
		Il2CppCodeGenWriteBarrier((void**)(&((Number_t006CBC9914386BB171582F4C3A3EEB2EE404D461_StaticFields*)il2cpp_codegen_static_fields_for(Number_t006CBC9914386BB171582F4C3A3EEB2EE404D461_il2cpp_TypeInfo_var))->___s_posNumberFormat_5), (void*)_stringLiteral0B0FEB3147CE20EB2C90076367F895C59BCD14B3);
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
IL2CPP_EXTERN_C void NumberBuffer_t0F9FC9D15F03CFDEBA3B3F4210A2AB3B53305CDA_marshal_pinvoke(const NumberBuffer_t0F9FC9D15F03CFDEBA3B3F4210A2AB3B53305CDA& unmarshaled, NumberBuffer_t0F9FC9D15F03CFDEBA3B3F4210A2AB3B53305CDA_marshaled_pinvoke& marshaled)
{
	marshaled.___precision_0 = unmarshaled.___precision_0;
	marshaled.___scale_1 = unmarshaled.___scale_1;
	marshaled.___sign_2 = static_cast<int32_t>(unmarshaled.___sign_2);
	marshaled.___overrideDigits_3 = unmarshaled.___overrideDigits_3;
}
IL2CPP_EXTERN_C void NumberBuffer_t0F9FC9D15F03CFDEBA3B3F4210A2AB3B53305CDA_marshal_pinvoke_back(const NumberBuffer_t0F9FC9D15F03CFDEBA3B3F4210A2AB3B53305CDA_marshaled_pinvoke& marshaled, NumberBuffer_t0F9FC9D15F03CFDEBA3B3F4210A2AB3B53305CDA& unmarshaled)
{
	int32_t unmarshaledprecision_temp_0 = 0;
	unmarshaledprecision_temp_0 = marshaled.___precision_0;
	unmarshaled.___precision_0 = unmarshaledprecision_temp_0;
	int32_t unmarshaledscale_temp_1 = 0;
	unmarshaledscale_temp_1 = marshaled.___scale_1;
	unmarshaled.___scale_1 = unmarshaledscale_temp_1;
	bool unmarshaledsign_temp_2 = false;
	unmarshaledsign_temp_2 = static_cast<bool>(marshaled.___sign_2);
	unmarshaled.___sign_2 = unmarshaledsign_temp_2;
	unmarshaled.___overrideDigits_3 = marshaled.___overrideDigits_3;
}
IL2CPP_EXTERN_C void NumberBuffer_t0F9FC9D15F03CFDEBA3B3F4210A2AB3B53305CDA_marshal_pinvoke_cleanup(NumberBuffer_t0F9FC9D15F03CFDEBA3B3F4210A2AB3B53305CDA_marshaled_pinvoke& marshaled)
{
}
IL2CPP_EXTERN_C void NumberBuffer_t0F9FC9D15F03CFDEBA3B3F4210A2AB3B53305CDA_marshal_com(const NumberBuffer_t0F9FC9D15F03CFDEBA3B3F4210A2AB3B53305CDA& unmarshaled, NumberBuffer_t0F9FC9D15F03CFDEBA3B3F4210A2AB3B53305CDA_marshaled_com& marshaled)
{
	marshaled.___precision_0 = unmarshaled.___precision_0;
	marshaled.___scale_1 = unmarshaled.___scale_1;
	marshaled.___sign_2 = static_cast<int32_t>(unmarshaled.___sign_2);
	marshaled.___overrideDigits_3 = unmarshaled.___overrideDigits_3;
}
IL2CPP_EXTERN_C void NumberBuffer_t0F9FC9D15F03CFDEBA3B3F4210A2AB3B53305CDA_marshal_com_back(const NumberBuffer_t0F9FC9D15F03CFDEBA3B3F4210A2AB3B53305CDA_marshaled_com& marshaled, NumberBuffer_t0F9FC9D15F03CFDEBA3B3F4210A2AB3B53305CDA& unmarshaled)
{
	int32_t unmarshaledprecision_temp_0 = 0;
	unmarshaledprecision_temp_0 = marshaled.___precision_0;
	unmarshaled.___precision_0 = unmarshaledprecision_temp_0;
	int32_t unmarshaledscale_temp_1 = 0;
	unmarshaledscale_temp_1 = marshaled.___scale_1;
	unmarshaled.___scale_1 = unmarshaledscale_temp_1;
	bool unmarshaledsign_temp_2 = false;
	unmarshaledsign_temp_2 = static_cast<bool>(marshaled.___sign_2);
	unmarshaled.___sign_2 = unmarshaledsign_temp_2;
	unmarshaled.___overrideDigits_3 = marshaled.___overrideDigits_3;
}
IL2CPP_EXTERN_C void NumberBuffer_t0F9FC9D15F03CFDEBA3B3F4210A2AB3B53305CDA_marshal_com_cleanup(NumberBuffer_t0F9FC9D15F03CFDEBA3B3F4210A2AB3B53305CDA_marshaled_com& marshaled)
{
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar* NumberBuffer_get_digits_mB2D6183F180088A57C57ED5FBA7BDD4CDF4A369A (NumberBuffer_t0F9FC9D15F03CFDEBA3B3F4210A2AB3B53305CDA* __this, const RuntimeMethod* method) 
{
	{
		Il2CppChar* L_0 = __this->___overrideDigits_3;
		return L_0;
	}
}
IL2CPP_EXTERN_C  Il2CppChar* NumberBuffer_get_digits_mB2D6183F180088A57C57ED5FBA7BDD4CDF4A369A_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	NumberBuffer_t0F9FC9D15F03CFDEBA3B3F4210A2AB3B53305CDA* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<NumberBuffer_t0F9FC9D15F03CFDEBA3B3F4210A2AB3B53305CDA*>(__this + _offset);
	Il2CppChar* _returnValue;
	_returnValue = NumberBuffer_get_digits_mB2D6183F180088A57C57ED5FBA7BDD4CDF4A369A_inline(_thisAdjusted, method);
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
IL2CPP_EXTERN_C void ValueStringBuilder_tEBD54C46E3AF8527BD0D234124F5C1AC14E9E251_marshal_pinvoke(const ValueStringBuilder_tEBD54C46E3AF8527BD0D234124F5C1AC14E9E251& unmarshaled, ValueStringBuilder_tEBD54C46E3AF8527BD0D234124F5C1AC14E9E251_marshaled_pinvoke& marshaled)
{
	if (unmarshaled.____arrayToReturnToPool_0 != NULL)
	{
		il2cpp_array_size_t _unmarshaled_arrayToReturnToPool_Length = (unmarshaled.____arrayToReturnToPool_0)->max_length;
		marshaled.____arrayToReturnToPool_0 = il2cpp_codegen_marshal_allocate_array<uint8_t>(_unmarshaled_arrayToReturnToPool_Length);
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(_unmarshaled_arrayToReturnToPool_Length); i++)
		{
			(marshaled.____arrayToReturnToPool_0)[i] = static_cast<uint8_t>((unmarshaled.____arrayToReturnToPool_0)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i)));
		}
	}
	else
	{
		marshaled.____arrayToReturnToPool_0 = NULL;
	}
	marshaled.____chars_1 = unmarshaled.____chars_1;
	marshaled.____pos_2 = unmarshaled.____pos_2;
}
IL2CPP_EXTERN_C void ValueStringBuilder_tEBD54C46E3AF8527BD0D234124F5C1AC14E9E251_marshal_pinvoke_back(const ValueStringBuilder_tEBD54C46E3AF8527BD0D234124F5C1AC14E9E251_marshaled_pinvoke& marshaled, ValueStringBuilder_tEBD54C46E3AF8527BD0D234124F5C1AC14E9E251& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	if (marshaled.____arrayToReturnToPool_0 != NULL)
	{
		if (unmarshaled.____arrayToReturnToPool_0 == NULL)
		{
			unmarshaled.____arrayToReturnToPool_0 = reinterpret_cast<CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*>((CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)SZArrayNew(CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_il2cpp_TypeInfo_var, 1));
		}
		il2cpp_array_size_t _arrayLength = (unmarshaled.____arrayToReturnToPool_0)->max_length;
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(_arrayLength); i++)
		{
			(unmarshaled.____arrayToReturnToPool_0)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(i), static_cast<Il2CppChar>((marshaled.____arrayToReturnToPool_0)[i]));
		}
	}
	Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D unmarshaled_chars_temp_1;
	memset((&unmarshaled_chars_temp_1), 0, sizeof(unmarshaled_chars_temp_1));
	unmarshaled_chars_temp_1 = marshaled.____chars_1;
	unmarshaled.____chars_1 = unmarshaled_chars_temp_1;
	int32_t unmarshaled_pos_temp_2 = 0;
	unmarshaled_pos_temp_2 = marshaled.____pos_2;
	unmarshaled.____pos_2 = unmarshaled_pos_temp_2;
}
IL2CPP_EXTERN_C void ValueStringBuilder_tEBD54C46E3AF8527BD0D234124F5C1AC14E9E251_marshal_pinvoke_cleanup(ValueStringBuilder_tEBD54C46E3AF8527BD0D234124F5C1AC14E9E251_marshaled_pinvoke& marshaled)
{
	if (marshaled.____arrayToReturnToPool_0 != NULL)
	{
		il2cpp_codegen_marshal_free(marshaled.____arrayToReturnToPool_0);
		marshaled.____arrayToReturnToPool_0 = NULL;
	}
}
IL2CPP_EXTERN_C void ValueStringBuilder_tEBD54C46E3AF8527BD0D234124F5C1AC14E9E251_marshal_com(const ValueStringBuilder_tEBD54C46E3AF8527BD0D234124F5C1AC14E9E251& unmarshaled, ValueStringBuilder_tEBD54C46E3AF8527BD0D234124F5C1AC14E9E251_marshaled_com& marshaled)
{
	if (unmarshaled.____arrayToReturnToPool_0 != NULL)
	{
		il2cpp_array_size_t _unmarshaled_arrayToReturnToPool_Length = (unmarshaled.____arrayToReturnToPool_0)->max_length;
		marshaled.____arrayToReturnToPool_0 = il2cpp_codegen_marshal_allocate_array<uint8_t>(_unmarshaled_arrayToReturnToPool_Length);
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(_unmarshaled_arrayToReturnToPool_Length); i++)
		{
			(marshaled.____arrayToReturnToPool_0)[i] = static_cast<uint8_t>((unmarshaled.____arrayToReturnToPool_0)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i)));
		}
	}
	else
	{
		marshaled.____arrayToReturnToPool_0 = NULL;
	}
	marshaled.____chars_1 = unmarshaled.____chars_1;
	marshaled.____pos_2 = unmarshaled.____pos_2;
}
IL2CPP_EXTERN_C void ValueStringBuilder_tEBD54C46E3AF8527BD0D234124F5C1AC14E9E251_marshal_com_back(const ValueStringBuilder_tEBD54C46E3AF8527BD0D234124F5C1AC14E9E251_marshaled_com& marshaled, ValueStringBuilder_tEBD54C46E3AF8527BD0D234124F5C1AC14E9E251& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	if (marshaled.____arrayToReturnToPool_0 != NULL)
	{
		if (unmarshaled.____arrayToReturnToPool_0 == NULL)
		{
			unmarshaled.____arrayToReturnToPool_0 = reinterpret_cast<CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*>((CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)SZArrayNew(CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_il2cpp_TypeInfo_var, 1));
		}
		il2cpp_array_size_t _arrayLength = (unmarshaled.____arrayToReturnToPool_0)->max_length;
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(_arrayLength); i++)
		{
			(unmarshaled.____arrayToReturnToPool_0)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(i), static_cast<Il2CppChar>((marshaled.____arrayToReturnToPool_0)[i]));
		}
	}
	Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D unmarshaled_chars_temp_1;
	memset((&unmarshaled_chars_temp_1), 0, sizeof(unmarshaled_chars_temp_1));
	unmarshaled_chars_temp_1 = marshaled.____chars_1;
	unmarshaled.____chars_1 = unmarshaled_chars_temp_1;
	int32_t unmarshaled_pos_temp_2 = 0;
	unmarshaled_pos_temp_2 = marshaled.____pos_2;
	unmarshaled.____pos_2 = unmarshaled_pos_temp_2;
}
IL2CPP_EXTERN_C void ValueStringBuilder_tEBD54C46E3AF8527BD0D234124F5C1AC14E9E251_marshal_com_cleanup(ValueStringBuilder_tEBD54C46E3AF8527BD0D234124F5C1AC14E9E251_marshaled_com& marshaled)
{
	if (marshaled.____arrayToReturnToPool_0 != NULL)
	{
		il2cpp_codegen_marshal_free(marshaled.____arrayToReturnToPool_0);
		marshaled.____arrayToReturnToPool_0 = NULL;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueStringBuilder__ctor_m0660F060D846CA37202B1BEEE35D26DAC2B6AFF6 (ValueStringBuilder_tEBD54C46E3AF8527BD0D234124F5C1AC14E9E251* __this, Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D ___0_initialBuffer, const RuntimeMethod* method) 
{
	{
		__this->____arrayToReturnToPool_0 = (CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)NULL;
		Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D L_0 = ___0_initialBuffer;
		__this->____chars_1 = L_0;
		__this->____pos_2 = 0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueStringBuilder_get_Length_m5D0F5925DA1601B18CF1ADC62D8750F955DC3F6B (ValueStringBuilder_tEBD54C46E3AF8527BD0D234124F5C1AC14E9E251* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____pos_2;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ValueStringBuilder_ToString_mAB4C26796468880783F57E543C5102DE83C10BCE (ValueStringBuilder_tEBD54C46E3AF8527BD0D234124F5C1AC14E9E251* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_Slice_mEFBC3C78FD443FFE23F9E841D43B7B0271622843_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_op_Implicit_m03D0CEDC1BC95844236105D1DE24A702B956BFE4_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D* L_0 = (&__this->____chars_1);
		int32_t L_1 = __this->____pos_2;
		Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D L_2;
		L_2 = Span_1_Slice_mEFBC3C78FD443FFE23F9E841D43B7B0271622843_inline(L_0, 0, L_1, Span_1_Slice_mEFBC3C78FD443FFE23F9E841D43B7B0271622843_RuntimeMethod_var);
		ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 L_3;
		L_3 = Span_1_op_Implicit_m03D0CEDC1BC95844236105D1DE24A702B956BFE4(L_2, Span_1_op_Implicit_m03D0CEDC1BC95844236105D1DE24A702B956BFE4_RuntimeMethod_var);
		String_t* L_4;
		L_4 = String_CreateString_m1618CF9F1145C9832FC830A4BD6DD96A540012F8(NULL, L_3, NULL);
		ValueStringBuilder_Dispose_m3BC81A03C95916FF7171ADB0CF6F16E2366A1392_inline(__this, NULL);
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ValueStringBuilder_TryCopyTo_m1ADDDEC065D0CCAB6A61D871D7272522B95F801E (ValueStringBuilder_tEBD54C46E3AF8527BD0D234124F5C1AC14E9E251* __this, Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D ___0_destination, int32_t* ___1_charsWritten, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_Slice_mEFBC3C78FD443FFE23F9E841D43B7B0271622843_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_TryCopyTo_m25ED56B31CC4F4DBC734E898741037AADC8806F8_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D* L_0 = (&__this->____chars_1);
		int32_t L_1 = __this->____pos_2;
		Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D L_2;
		L_2 = Span_1_Slice_mEFBC3C78FD443FFE23F9E841D43B7B0271622843_inline(L_0, 0, L_1, Span_1_Slice_mEFBC3C78FD443FFE23F9E841D43B7B0271622843_RuntimeMethod_var);
		V_0 = L_2;
		Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D L_3 = ___0_destination;
		bool L_4;
		L_4 = Span_1_TryCopyTo_m25ED56B31CC4F4DBC734E898741037AADC8806F8((&V_0), L_3, Span_1_TryCopyTo_m25ED56B31CC4F4DBC734E898741037AADC8806F8_RuntimeMethod_var);
		if (!L_4)
		{
			goto IL_002d;
		}
	}
	{
		int32_t* L_5 = ___1_charsWritten;
		int32_t L_6 = __this->____pos_2;
		*((int32_t*)L_5) = (int32_t)L_6;
		ValueStringBuilder_Dispose_m3BC81A03C95916FF7171ADB0CF6F16E2366A1392_inline(__this, NULL);
		return (bool)1;
	}

IL_002d:
	{
		int32_t* L_7 = ___1_charsWritten;
		*((int32_t*)L_7) = (int32_t)0;
		ValueStringBuilder_Dispose_m3BC81A03C95916FF7171ADB0CF6F16E2366A1392_inline(__this, NULL);
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueStringBuilder_Insert_m658B685FEAD8D7A9935D2720FAAAB05382942E2C (ValueStringBuilder_tEBD54C46E3AF8527BD0D234124F5C1AC14E9E251* __this, int32_t ___0_index, Il2CppChar ___1_value, int32_t ___2_count, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_CopyTo_m7BB0A9984004C444974C7F111CCAD6D85325A15E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_Fill_m13ADB57BBCF7684FF92630FACC729B10B9B6B254_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_Slice_mDC9AA64B960B9BB8357655827A8202DF83443068_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_Slice_mEFBC3C78FD443FFE23F9E841D43B7B0271622843_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_get_Length_mB79622153F80AD55A805C005842AF045F4FCF992_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		int32_t L_0 = __this->____pos_2;
		Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D* L_1 = (&__this->____chars_1);
		int32_t L_2;
		L_2 = Span_1_get_Length_mB79622153F80AD55A805C005842AF045F4FCF992_inline(L_1, Span_1_get_Length_mB79622153F80AD55A805C005842AF045F4FCF992_RuntimeMethod_var);
		int32_t L_3 = ___2_count;
		if ((((int32_t)L_0) <= ((int32_t)((int32_t)il2cpp_codegen_subtract(L_2, L_3)))))
		{
			goto IL_001c;
		}
	}
	{
		int32_t L_4 = ___2_count;
		ValueStringBuilder_Grow_m8107401166703C9CB129685FA6F78F26615FC6A9(__this, L_4, NULL);
	}

IL_001c:
	{
		int32_t L_5 = __this->____pos_2;
		int32_t L_6 = ___0_index;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_5, L_6));
		Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D* L_7 = (&__this->____chars_1);
		int32_t L_8 = ___0_index;
		int32_t L_9 = V_0;
		Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D L_10;
		L_10 = Span_1_Slice_mEFBC3C78FD443FFE23F9E841D43B7B0271622843_inline(L_7, L_8, L_9, Span_1_Slice_mEFBC3C78FD443FFE23F9E841D43B7B0271622843_RuntimeMethod_var);
		V_1 = L_10;
		Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D* L_11 = (&__this->____chars_1);
		int32_t L_12 = ___0_index;
		int32_t L_13 = ___2_count;
		Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D L_14;
		L_14 = Span_1_Slice_mDC9AA64B960B9BB8357655827A8202DF83443068_inline(L_11, ((int32_t)il2cpp_codegen_add(L_12, L_13)), Span_1_Slice_mDC9AA64B960B9BB8357655827A8202DF83443068_RuntimeMethod_var);
		Span_1_CopyTo_m7BB0A9984004C444974C7F111CCAD6D85325A15E((&V_1), L_14, Span_1_CopyTo_m7BB0A9984004C444974C7F111CCAD6D85325A15E_RuntimeMethod_var);
		Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D* L_15 = (&__this->____chars_1);
		int32_t L_16 = ___0_index;
		int32_t L_17 = ___2_count;
		Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D L_18;
		L_18 = Span_1_Slice_mEFBC3C78FD443FFE23F9E841D43B7B0271622843_inline(L_15, L_16, L_17, Span_1_Slice_mEFBC3C78FD443FFE23F9E841D43B7B0271622843_RuntimeMethod_var);
		V_1 = L_18;
		Il2CppChar L_19 = ___1_value;
		Span_1_Fill_m13ADB57BBCF7684FF92630FACC729B10B9B6B254((&V_1), L_19, Span_1_Fill_m13ADB57BBCF7684FF92630FACC729B10B9B6B254_RuntimeMethod_var);
		int32_t L_20 = __this->____pos_2;
		int32_t L_21 = ___2_count;
		__this->____pos_2 = ((int32_t)il2cpp_codegen_add(L_20, L_21));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueStringBuilder_Append_mBB79BFE6EAB412D689B7D6675A6E0BC3F6FCDFCC (ValueStringBuilder_tEBD54C46E3AF8527BD0D234124F5C1AC14E9E251* __this, Il2CppChar ___0_c, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_get_Length_mB79622153F80AD55A805C005842AF045F4FCF992_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->____pos_2;
		V_0 = L_0;
		int32_t L_1 = V_0;
		Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D* L_2 = (&__this->____chars_1);
		int32_t L_3;
		L_3 = Span_1_get_Length_mB79622153F80AD55A805C005842AF045F4FCF992_inline(L_2, Span_1_get_Length_mB79622153F80AD55A805C005842AF045F4FCF992_RuntimeMethod_var);
		if ((((int32_t)L_1) >= ((int32_t)L_3)))
		{
			goto IL_002d;
		}
	}
	{
		Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D* L_4 = (&__this->____chars_1);
		int32_t L_5 = V_0;
		Il2CppChar* L_6;
		L_6 = il2cpp_span_get_item((Il2CppChar*)((Il2CppByReference*)&((L_4)->____pointer_0))->value, (L_5), (L_4)->____length_1);
		Il2CppChar L_7 = ___0_c;
		*((int16_t*)L_6) = (int16_t)L_7;
		int32_t L_8 = V_0;
		__this->____pos_2 = ((int32_t)il2cpp_codegen_add(L_8, 1));
		return;
	}

IL_002d:
	{
		Il2CppChar L_9 = ___0_c;
		ValueStringBuilder_GrowAndAppend_mDB5F96AAA8A9CAD064B96D8A182D84C76BF24F46(__this, L_9, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueStringBuilder_Append_m4F9C03D9B78FD7AE877AAC57178D2F84AD2956CF (ValueStringBuilder_tEBD54C46E3AF8527BD0D234124F5C1AC14E9E251* __this, String_t* ___0_s, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_get_Length_mB79622153F80AD55A805C005842AF045F4FCF992_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->____pos_2;
		V_0 = L_0;
		String_t* L_1 = ___0_s;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_1, NULL);
		if ((!(((uint32_t)L_2) == ((uint32_t)1))))
		{
			goto IL_003c;
		}
	}
	{
		int32_t L_3 = V_0;
		Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D* L_4 = (&__this->____chars_1);
		int32_t L_5;
		L_5 = Span_1_get_Length_mB79622153F80AD55A805C005842AF045F4FCF992_inline(L_4, Span_1_get_Length_mB79622153F80AD55A805C005842AF045F4FCF992_RuntimeMethod_var);
		if ((((int32_t)L_3) >= ((int32_t)L_5)))
		{
			goto IL_003c;
		}
	}
	{
		Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D* L_6 = (&__this->____chars_1);
		int32_t L_7 = V_0;
		Il2CppChar* L_8;
		L_8 = il2cpp_span_get_item((Il2CppChar*)((Il2CppByReference*)&((L_6)->____pointer_0))->value, (L_7), (L_6)->____length_1);
		String_t* L_9 = ___0_s;
		NullCheck(L_9);
		Il2CppChar L_10;
		L_10 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_9, 0, NULL);
		*((int16_t*)L_8) = (int16_t)L_10;
		int32_t L_11 = V_0;
		__this->____pos_2 = ((int32_t)il2cpp_codegen_add(L_11, 1));
		return;
	}

IL_003c:
	{
		String_t* L_12 = ___0_s;
		ValueStringBuilder_AppendSlow_mF1E32E44AE0CD50A28EE3E945C8CCE40FB184526(__this, L_12, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueStringBuilder_AppendSlow_mF1E32E44AE0CD50A28EE3E945C8CCE40FB184526 (ValueStringBuilder_tEBD54C46E3AF8527BD0D234124F5C1AC14E9E251* __this, String_t* ___0_s, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1_CopyTo_m42F1668DECE40277D97A37705EA6BE27CF7D5030_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_Slice_mDC9AA64B960B9BB8357655827A8202DF83443068_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_get_Length_mB79622153F80AD55A805C005842AF045F4FCF992_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		int32_t L_0 = __this->____pos_2;
		V_0 = L_0;
		int32_t L_1 = V_0;
		Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D* L_2 = (&__this->____chars_1);
		int32_t L_3;
		L_3 = Span_1_get_Length_mB79622153F80AD55A805C005842AF045F4FCF992_inline(L_2, Span_1_get_Length_mB79622153F80AD55A805C005842AF045F4FCF992_RuntimeMethod_var);
		String_t* L_4 = ___0_s;
		NullCheck(L_4);
		int32_t L_5;
		L_5 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_4, NULL);
		if ((((int32_t)L_1) <= ((int32_t)((int32_t)il2cpp_codegen_subtract(L_3, L_5)))))
		{
			goto IL_0028;
		}
	}
	{
		String_t* L_6 = ___0_s;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_6, NULL);
		ValueStringBuilder_Grow_m8107401166703C9CB129685FA6F78F26615FC6A9(__this, L_7, NULL);
	}

IL_0028:
	{
		String_t* L_8 = ___0_s;
		ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 L_9;
		L_9 = MemoryExtensions_AsSpan_m0EB07912D71097A8B05F586158966837F5C3DB38_inline(L_8, NULL);
		V_1 = L_9;
		Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D* L_10 = (&__this->____chars_1);
		int32_t L_11 = V_0;
		Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D L_12;
		L_12 = Span_1_Slice_mDC9AA64B960B9BB8357655827A8202DF83443068_inline(L_10, L_11, Span_1_Slice_mDC9AA64B960B9BB8357655827A8202DF83443068_RuntimeMethod_var);
		ReadOnlySpan_1_CopyTo_m42F1668DECE40277D97A37705EA6BE27CF7D5030((&V_1), L_12, ReadOnlySpan_1_CopyTo_m42F1668DECE40277D97A37705EA6BE27CF7D5030_RuntimeMethod_var);
		int32_t L_13 = __this->____pos_2;
		String_t* L_14 = ___0_s;
		NullCheck(L_14);
		int32_t L_15;
		L_15 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_14, NULL);
		__this->____pos_2 = ((int32_t)il2cpp_codegen_add(L_13, L_15));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueStringBuilder_Append_m4E46E62A9444CE58033DDB6EC5D9AE7CF02B48B0 (ValueStringBuilder_tEBD54C46E3AF8527BD0D234124F5C1AC14E9E251* __this, Il2CppChar ___0_c, int32_t ___1_count, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_Slice_mEFBC3C78FD443FFE23F9E841D43B7B0271622843_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_get_Length_mB79622153F80AD55A805C005842AF045F4FCF992_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	{
		int32_t L_0 = __this->____pos_2;
		Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D* L_1 = (&__this->____chars_1);
		int32_t L_2;
		L_2 = Span_1_get_Length_mB79622153F80AD55A805C005842AF045F4FCF992_inline(L_1, Span_1_get_Length_mB79622153F80AD55A805C005842AF045F4FCF992_RuntimeMethod_var);
		int32_t L_3 = ___1_count;
		if ((((int32_t)L_0) <= ((int32_t)((int32_t)il2cpp_codegen_subtract(L_2, L_3)))))
		{
			goto IL_001c;
		}
	}
	{
		int32_t L_4 = ___1_count;
		ValueStringBuilder_Grow_m8107401166703C9CB129685FA6F78F26615FC6A9(__this, L_4, NULL);
	}

IL_001c:
	{
		Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D* L_5 = (&__this->____chars_1);
		int32_t L_6 = __this->____pos_2;
		int32_t L_7 = ___1_count;
		Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D L_8;
		L_8 = Span_1_Slice_mEFBC3C78FD443FFE23F9E841D43B7B0271622843_inline(L_5, L_6, L_7, Span_1_Slice_mEFBC3C78FD443FFE23F9E841D43B7B0271622843_RuntimeMethod_var);
		V_0 = L_8;
		V_1 = 0;
		goto IL_0041;
	}

IL_0033:
	{
		int32_t L_9 = V_1;
		Il2CppChar* L_10;
		L_10 = il2cpp_span_get_item((Il2CppChar*)((Il2CppByReference*)&(((&V_0))->____pointer_0))->value, (L_9), ((&V_0))->____length_1);
		Il2CppChar L_11 = ___0_c;
		*((int16_t*)L_10) = (int16_t)L_11;
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0041:
	{
		int32_t L_13 = V_1;
		int32_t L_14;
		L_14 = Span_1_get_Length_mB79622153F80AD55A805C005842AF045F4FCF992_inline((&V_0), Span_1_get_Length_mB79622153F80AD55A805C005842AF045F4FCF992_RuntimeMethod_var);
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_0033;
		}
	}
	{
		int32_t L_15 = __this->____pos_2;
		int32_t L_16 = ___1_count;
		__this->____pos_2 = ((int32_t)il2cpp_codegen_add(L_15, L_16));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueStringBuilder_Append_m58580EDC69E4BCFEFFE0A266FE36684AC660BBD6 (ValueStringBuilder_tEBD54C46E3AF8527BD0D234124F5C1AC14E9E251* __this, Il2CppChar* ___0_value, int32_t ___1_length, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_Slice_mEFBC3C78FD443FFE23F9E841D43B7B0271622843_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_get_Length_mB79622153F80AD55A805C005842AF045F4FCF992_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	{
		int32_t L_0 = __this->____pos_2;
		Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D* L_1 = (&__this->____chars_1);
		int32_t L_2;
		L_2 = Span_1_get_Length_mB79622153F80AD55A805C005842AF045F4FCF992_inline(L_1, Span_1_get_Length_mB79622153F80AD55A805C005842AF045F4FCF992_RuntimeMethod_var);
		int32_t L_3 = ___1_length;
		if ((((int32_t)L_0) <= ((int32_t)((int32_t)il2cpp_codegen_subtract(L_2, L_3)))))
		{
			goto IL_001c;
		}
	}
	{
		int32_t L_4 = ___1_length;
		ValueStringBuilder_Grow_m8107401166703C9CB129685FA6F78F26615FC6A9(__this, L_4, NULL);
	}

IL_001c:
	{
		Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D* L_5 = (&__this->____chars_1);
		int32_t L_6 = __this->____pos_2;
		int32_t L_7 = ___1_length;
		Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D L_8;
		L_8 = Span_1_Slice_mEFBC3C78FD443FFE23F9E841D43B7B0271622843_inline(L_5, L_6, L_7, Span_1_Slice_mEFBC3C78FD443FFE23F9E841D43B7B0271622843_RuntimeMethod_var);
		V_0 = L_8;
		V_1 = 0;
		goto IL_0047;
	}

IL_0033:
	{
		int32_t L_9 = V_1;
		Il2CppChar* L_10;
		L_10 = il2cpp_span_get_item((Il2CppChar*)((Il2CppByReference*)&(((&V_0))->____pointer_0))->value, (L_9), ((&V_0))->____length_1);
		Il2CppChar* L_11 = ___0_value;
		Il2CppChar* L_12 = L_11;
		___0_value = ((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_12, 2));
		int32_t L_13 = *((uint16_t*)L_12);
		*((int16_t*)L_10) = (int16_t)L_13;
		int32_t L_14 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_14, 1));
	}

IL_0047:
	{
		int32_t L_15 = V_1;
		int32_t L_16;
		L_16 = Span_1_get_Length_mB79622153F80AD55A805C005842AF045F4FCF992_inline((&V_0), Span_1_get_Length_mB79622153F80AD55A805C005842AF045F4FCF992_RuntimeMethod_var);
		if ((((int32_t)L_15) < ((int32_t)L_16)))
		{
			goto IL_0033;
		}
	}
	{
		int32_t L_17 = __this->____pos_2;
		int32_t L_18 = ___1_length;
		__this->____pos_2 = ((int32_t)il2cpp_codegen_add(L_17, L_18));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D ValueStringBuilder_AppendSpan_m0D80091AA43B5BD4944DCD4D8729310FEAF11382 (ValueStringBuilder_tEBD54C46E3AF8527BD0D234124F5C1AC14E9E251* __this, int32_t ___0_length, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_Slice_mEFBC3C78FD443FFE23F9E841D43B7B0271622843_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_get_Length_mB79622153F80AD55A805C005842AF045F4FCF992_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->____pos_2;
		V_0 = L_0;
		int32_t L_1 = V_0;
		Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D* L_2 = (&__this->____chars_1);
		int32_t L_3;
		L_3 = Span_1_get_Length_mB79622153F80AD55A805C005842AF045F4FCF992_inline(L_2, Span_1_get_Length_mB79622153F80AD55A805C005842AF045F4FCF992_RuntimeMethod_var);
		int32_t L_4 = ___0_length;
		if ((((int32_t)L_1) <= ((int32_t)((int32_t)il2cpp_codegen_subtract(L_3, L_4)))))
		{
			goto IL_001e;
		}
	}
	{
		int32_t L_5 = ___0_length;
		ValueStringBuilder_Grow_m8107401166703C9CB129685FA6F78F26615FC6A9(__this, L_5, NULL);
	}

IL_001e:
	{
		int32_t L_6 = V_0;
		int32_t L_7 = ___0_length;
		__this->____pos_2 = ((int32_t)il2cpp_codegen_add(L_6, L_7));
		Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D* L_8 = (&__this->____chars_1);
		int32_t L_9 = V_0;
		int32_t L_10 = ___0_length;
		Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D L_11;
		L_11 = Span_1_Slice_mEFBC3C78FD443FFE23F9E841D43B7B0271622843_inline(L_8, L_9, L_10, Span_1_Slice_mEFBC3C78FD443FFE23F9E841D43B7B0271622843_RuntimeMethod_var);
		return L_11;
	}
}
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void ValueStringBuilder_GrowAndAppend_mDB5F96AAA8A9CAD064B96D8A182D84C76BF24F46 (ValueStringBuilder_tEBD54C46E3AF8527BD0D234124F5C1AC14E9E251* __this, Il2CppChar ___0_c, const RuntimeMethod* method) 
{
	{
		ValueStringBuilder_Grow_m8107401166703C9CB129685FA6F78F26615FC6A9(__this, 1, NULL);
		Il2CppChar L_0 = ___0_c;
		ValueStringBuilder_Append_mBB79BFE6EAB412D689B7D6675A6E0BC3F6FCDFCC_inline(__this, L_0, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void ValueStringBuilder_Grow_m8107401166703C9CB129685FA6F78F26615FC6A9 (ValueStringBuilder_tEBD54C46E3AF8527BD0D234124F5C1AC14E9E251* __this, int32_t ___0_requiredAdditionalCapacity, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArrayPool_1_get_Shared_m8EB88B4EDF81135B55DB0F33A749B8087FE4646F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArrayPool_1_t3CE8332C9DFE03FF160AB0CE0FF17DF7792E0E4B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_CopyTo_m7BB0A9984004C444974C7F111CCAD6D85325A15E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_get_Length_mB79622153F80AD55A805C005842AF045F4FCF992_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_op_Implicit_mA0E9FDCF2C5113BA9F9C4964D17D8BDFBD6F3C98_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* V_0 = NULL;
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* V_1 = NULL;
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* V_2 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(ArrayPool_1_t3CE8332C9DFE03FF160AB0CE0FF17DF7792E0E4B_il2cpp_TypeInfo_var);
		ArrayPool_1_t3CE8332C9DFE03FF160AB0CE0FF17DF7792E0E4B* L_0;
		L_0 = ArrayPool_1_get_Shared_m8EB88B4EDF81135B55DB0F33A749B8087FE4646F_inline(ArrayPool_1_get_Shared_m8EB88B4EDF81135B55DB0F33A749B8087FE4646F_RuntimeMethod_var);
		int32_t L_1 = __this->____pos_2;
		int32_t L_2 = ___0_requiredAdditionalCapacity;
		Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D* L_3 = (&__this->____chars_1);
		int32_t L_4;
		L_4 = Span_1_get_Length_mB79622153F80AD55A805C005842AF045F4FCF992_inline(L_3, Span_1_get_Length_mB79622153F80AD55A805C005842AF045F4FCF992_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		int32_t L_5;
		L_5 = Math_Max_m530EBA549AFD98CFC2BD29FE86C6376E67DF11CF(((int32_t)il2cpp_codegen_add(L_1, L_2)), ((int32_t)il2cpp_codegen_multiply(L_4, 2)), NULL);
		NullCheck(L_0);
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_6;
		L_6 = VirtualFuncInvoker1< CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*, int32_t >::Invoke(4, L_0, L_5);
		V_0 = L_6;
		Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D* L_7 = (&__this->____chars_1);
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_8 = V_0;
		Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D L_9;
		L_9 = Span_1_op_Implicit_mA0E9FDCF2C5113BA9F9C4964D17D8BDFBD6F3C98(L_8, Span_1_op_Implicit_mA0E9FDCF2C5113BA9F9C4964D17D8BDFBD6F3C98_RuntimeMethod_var);
		Span_1_CopyTo_m7BB0A9984004C444974C7F111CCAD6D85325A15E(L_7, L_9, Span_1_CopyTo_m7BB0A9984004C444974C7F111CCAD6D85325A15E_RuntimeMethod_var);
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_10 = __this->____arrayToReturnToPool_0;
		V_1 = L_10;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_11 = V_0;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_12 = L_11;
		V_2 = L_12;
		__this->____arrayToReturnToPool_0 = L_12;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_13 = V_2;
		Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D L_14;
		L_14 = Span_1_op_Implicit_mA0E9FDCF2C5113BA9F9C4964D17D8BDFBD6F3C98(L_13, Span_1_op_Implicit_mA0E9FDCF2C5113BA9F9C4964D17D8BDFBD6F3C98_RuntimeMethod_var);
		__this->____chars_1 = L_14;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_15 = V_1;
		if (!L_15)
		{
			goto IL_0061;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(ArrayPool_1_t3CE8332C9DFE03FF160AB0CE0FF17DF7792E0E4B_il2cpp_TypeInfo_var);
		ArrayPool_1_t3CE8332C9DFE03FF160AB0CE0FF17DF7792E0E4B* L_16;
		L_16 = ArrayPool_1_get_Shared_m8EB88B4EDF81135B55DB0F33A749B8087FE4646F_inline(ArrayPool_1_get_Shared_m8EB88B4EDF81135B55DB0F33A749B8087FE4646F_RuntimeMethod_var);
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_17 = V_1;
		NullCheck(L_16);
		VirtualActionInvoker2< CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*, bool >::Invoke(5, L_16, L_17, (bool)0);
	}

IL_0061:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueStringBuilder_Dispose_m3BC81A03C95916FF7171ADB0CF6F16E2366A1392 (ValueStringBuilder_tEBD54C46E3AF8527BD0D234124F5C1AC14E9E251* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArrayPool_1_get_Shared_m8EB88B4EDF81135B55DB0F33A749B8087FE4646F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArrayPool_1_t3CE8332C9DFE03FF160AB0CE0FF17DF7792E0E4B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* V_0 = NULL;
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_0 = __this->____arrayToReturnToPool_0;
		V_0 = L_0;
		il2cpp_codegen_initobj(__this, sizeof(ValueStringBuilder_tEBD54C46E3AF8527BD0D234124F5C1AC14E9E251));
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_1 = V_0;
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(ArrayPool_1_t3CE8332C9DFE03FF160AB0CE0FF17DF7792E0E4B_il2cpp_TypeInfo_var);
		ArrayPool_1_t3CE8332C9DFE03FF160AB0CE0FF17DF7792E0E4B* L_2;
		L_2 = ArrayPool_1_get_Shared_m8EB88B4EDF81135B55DB0F33A749B8087FE4646F_inline(ArrayPool_1_get_Shared_m8EB88B4EDF81135B55DB0F33A749B8087FE4646F_RuntimeMethod_var);
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_3 = V_0;
		NullCheck(L_2);
		VirtualActionInvoker2< CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*, bool >::Invoke(5, L_2, L_3, (bool)0);
	}

IL_001d:
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F BigInteger_get_MinusOne_m3FF0F44F8C3D6DFB66C00B61017E42E555585465_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F_il2cpp_TypeInfo_var);
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_0 = ((BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F_StaticFields*)il2cpp_codegen_static_fields_for(BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F_il2cpp_TypeInfo_var))->___s_bnMinusOneInt_5;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ValueStringBuilder_Append_mBB79BFE6EAB412D689B7D6675A6E0BC3F6FCDFCC_inline (ValueStringBuilder_tEBD54C46E3AF8527BD0D234124F5C1AC14E9E251* __this, Il2CppChar ___0_c, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_get_Length_mB79622153F80AD55A805C005842AF045F4FCF992_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->____pos_2;
		V_0 = L_0;
		int32_t L_1 = V_0;
		Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D* L_2 = (&__this->____chars_1);
		int32_t L_3;
		L_3 = Span_1_get_Length_mB79622153F80AD55A805C005842AF045F4FCF992_inline(L_2, Span_1_get_Length_mB79622153F80AD55A805C005842AF045F4FCF992_RuntimeMethod_var);
		if ((((int32_t)L_1) >= ((int32_t)L_3)))
		{
			goto IL_002d;
		}
	}
	{
		Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D* L_4 = (&__this->____chars_1);
		int32_t L_5 = V_0;
		Il2CppChar* L_6;
		L_6 = il2cpp_span_get_item((Il2CppChar*)((Il2CppByReference*)&((L_4)->____pointer_0))->value, (L_5), (L_4)->____length_1);
		Il2CppChar L_7 = ___0_c;
		*((int16_t*)L_6) = (int16_t)L_7;
		int32_t L_8 = V_0;
		__this->____pos_2 = ((int32_t)il2cpp_codegen_add(L_8, 1));
		return;
	}

IL_002d:
	{
		Il2CppChar L_9 = ___0_c;
		ValueStringBuilder_GrowAndAppend_mDB5F96AAA8A9CAD064B96D8A182D84C76BF24F46(__this, L_9, NULL);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D ValueStringBuilder_AppendSpan_m0D80091AA43B5BD4944DCD4D8729310FEAF11382_inline (ValueStringBuilder_tEBD54C46E3AF8527BD0D234124F5C1AC14E9E251* __this, int32_t ___0_length, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_Slice_mEFBC3C78FD443FFE23F9E841D43B7B0271622843_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_get_Length_mB79622153F80AD55A805C005842AF045F4FCF992_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->____pos_2;
		V_0 = L_0;
		int32_t L_1 = V_0;
		Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D* L_2 = (&__this->____chars_1);
		int32_t L_3;
		L_3 = Span_1_get_Length_mB79622153F80AD55A805C005842AF045F4FCF992_inline(L_2, Span_1_get_Length_mB79622153F80AD55A805C005842AF045F4FCF992_RuntimeMethod_var);
		int32_t L_4 = ___0_length;
		if ((((int32_t)L_1) <= ((int32_t)((int32_t)il2cpp_codegen_subtract(L_3, L_4)))))
		{
			goto IL_001e;
		}
	}
	{
		int32_t L_5 = ___0_length;
		ValueStringBuilder_Grow_m8107401166703C9CB129685FA6F78F26615FC6A9(__this, L_5, NULL);
	}

IL_001e:
	{
		int32_t L_6 = V_0;
		int32_t L_7 = ___0_length;
		__this->____pos_2 = ((int32_t)il2cpp_codegen_add(L_6, L_7));
		Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D* L_8 = (&__this->____chars_1);
		int32_t L_9 = V_0;
		int32_t L_10 = ___0_length;
		Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D L_11;
		L_11 = Span_1_Slice_mEFBC3C78FD443FFE23F9E841D43B7B0271622843_inline(L_8, L_9, L_10, Span_1_Slice_mEFBC3C78FD443FFE23F9E841D43B7B0271622843_RuntimeMethod_var);
		return L_11;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ValueStringBuilder_get_Length_m5D0F5925DA1601B18CF1ADC62D8750F955DC3F6B_inline (ValueStringBuilder_tEBD54C46E3AF8527BD0D234124F5C1AC14E9E251* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____pos_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 String_op_Implicit_m7D7FE0449303AF92D8B2A85A06ADC6933B2ECC3A_inline (String_t* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1__ctor_m0152E50B40750679B83FF9F30CA539FFBB98EEE8_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		String_t* L_0 = ___0_value;
		if (L_0)
		{
			goto IL_000d;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1));
		ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 L_1 = V_0;
		return L_1;
	}

IL_000d:
	{
		String_t* L_2 = ___0_value;
		NullCheck(L_2);
		Il2CppChar* L_3;
		L_3 = String_GetRawStringData_m87BC50B7B314C055E27A28032D1003D42FDE411D(L_2, NULL);
		String_t* L_4 = ___0_value;
		NullCheck(L_4);
		int32_t L_5;
		L_5 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_4, NULL);
		ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 L_6;
		memset((&L_6), 0, sizeof(L_6));
		ReadOnlySpan_1__ctor_m0152E50B40750679B83FF9F30CA539FFBB98EEE8_inline((&L_6), L_3, L_5, ReadOnlySpan_1__ctor_m0152E50B40750679B83FF9F30CA539FFBB98EEE8_RuntimeMethod_var);
		return L_6;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* NumberFormatInfo_get_NegativeSign_m7744D30B65FFC7D00CDD1CCF7E53D3722D350E7C_inline (NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___negativeSign_5;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____stringLength_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t NumberFormatInfo_get_CurrencyDecimalDigits_m5E04D902AB388705BF7FED31630AF7730EFA34BE_inline (NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___currencyDecimalDigits_22;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t NumberFormatInfo_get_NumberDecimalDigits_m5EB881B449699981560942A65714C5D5CBA897BD_inline (NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___numberDecimalDigits_21;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ValueStringBuilder_Append_m4F9C03D9B78FD7AE877AAC57178D2F84AD2956CF_inline (ValueStringBuilder_tEBD54C46E3AF8527BD0D234124F5C1AC14E9E251* __this, String_t* ___0_s, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_get_Length_mB79622153F80AD55A805C005842AF045F4FCF992_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->____pos_2;
		V_0 = L_0;
		String_t* L_1 = ___0_s;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_1, NULL);
		if ((!(((uint32_t)L_2) == ((uint32_t)1))))
		{
			goto IL_003c;
		}
	}
	{
		int32_t L_3 = V_0;
		Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D* L_4 = (&__this->____chars_1);
		int32_t L_5;
		L_5 = Span_1_get_Length_mB79622153F80AD55A805C005842AF045F4FCF992_inline(L_4, Span_1_get_Length_mB79622153F80AD55A805C005842AF045F4FCF992_RuntimeMethod_var);
		if ((((int32_t)L_3) >= ((int32_t)L_5)))
		{
			goto IL_003c;
		}
	}
	{
		Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D* L_6 = (&__this->____chars_1);
		int32_t L_7 = V_0;
		Il2CppChar* L_8;
		L_8 = il2cpp_span_get_item((Il2CppChar*)((Il2CppByReference*)&((L_6)->____pointer_0))->value, (L_7), (L_6)->____length_1);
		String_t* L_9 = ___0_s;
		NullCheck(L_9);
		Il2CppChar L_10;
		L_10 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_9, 0, NULL);
		*((int16_t*)L_8) = (int16_t)L_10;
		int32_t L_11 = V_0;
		__this->____pos_2 = ((int32_t)il2cpp_codegen_add(L_11, 1));
		return;
	}

IL_003c:
	{
		String_t* L_12 = ___0_s;
		ValueStringBuilder_AppendSlow_mF1E32E44AE0CD50A28EE3E945C8CCE40FB184526(__this, L_12, NULL);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* NumberFormatInfo_get_NumberDecimalSeparator_m7413FA8739F3FA6F5D61B54331DBF3232FC6BFC7_inline (NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___numberDecimalSeparator_6;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Il2CppChar* NumberBuffer_get_digits_mB2D6183F180088A57C57ED5FBA7BDD4CDF4A369A_inline (NumberBuffer_t0F9FC9D15F03CFDEBA3B3F4210A2AB3B53305CDA* __this, const RuntimeMethod* method) 
{
	{
		Il2CppChar* L_0 = __this->___overrideDigits_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t NumberFormatInfo_get_PercentDecimalDigits_m49B53E03F294674AA1B20B77C56E10721BA8643D_inline (NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___percentDecimalDigits_28;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t NumberFormatInfo_get_CurrencyPositivePattern_m253954FD1F79EB2F9B12070A348E8E1DB0E75263_inline (NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___currencyPositivePattern_23;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t NumberFormatInfo_get_CurrencyNegativePattern_m35EAAAC0517F13B43B444B82343F14D9B0A14FC4_inline (NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___currencyNegativePattern_24;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* NumberFormatInfo_get_CurrencyDecimalSeparator_mBAD4DAC07DC995653374C16BFB02E6CF2CA121BD_inline (NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___currencyDecimalSeparator_9;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* NumberFormatInfo_get_CurrencyGroupSeparator_mE8F7687A3D4812C75092E30554B4C15C974441BD_inline (NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___currencyGroupSeparator_8;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* NumberFormatInfo_get_CurrencySymbol_m69E8700B6E102ADA1351AD4C6BBC7779D9F13F43_inline (NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___currencySymbol_10;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t NumberFormatInfo_get_NumberNegativePattern_mB2D78035F14DA736695A2476B33B70A8BE3DB772_inline (NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___numberNegativePattern_25;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* NumberFormatInfo_get_NumberGroupSeparator_m0556B092AA471513B1EDC31C047712226D39BEB6_inline (NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___numberGroupSeparator_7;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* NumberFormatInfo_get_PositiveSign_mEB874CC4589FD7B2F57CD3269AE6D9043A0C25EF_inline (NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___positiveSign_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t NumberFormatInfo_get_PercentPositivePattern_m2720656715E7A19D1CEAD0155412B2EE01FC68FA_inline (NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___percentPositivePattern_26;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t NumberFormatInfo_get_PercentNegativePattern_m3EED4EC4B89339AA00581150F4999BCC3400CDAD_inline (NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___percentNegativePattern_27;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* NumberFormatInfo_get_PercentDecimalSeparator_mB656F8F033BB700E4647AF14044C607F34634B80_inline (NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___percentDecimalSeparator_15;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* NumberFormatInfo_get_PercentGroupSeparator_m1321ACEA2239006587D132AF6445E55D733BABF9_inline (NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___percentGroupSeparator_16;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* NumberFormatInfo_get_PercentSymbol_mB3F25C2B5F71574B7F4A0BEE95A7028E7A48CFC2_inline (NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___percentSymbol_17;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* NumberFormatInfo_get_PerMilleSymbol_mBE43A9E5D7F05030C0258FB452BD94FD6E411533_inline (NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___perMilleSymbol_18;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ValueStringBuilder_Dispose_m3BC81A03C95916FF7171ADB0CF6F16E2366A1392_inline (ValueStringBuilder_tEBD54C46E3AF8527BD0D234124F5C1AC14E9E251* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArrayPool_1_get_Shared_m8EB88B4EDF81135B55DB0F33A749B8087FE4646F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArrayPool_1_t3CE8332C9DFE03FF160AB0CE0FF17DF7792E0E4B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* V_0 = NULL;
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_0 = __this->____arrayToReturnToPool_0;
		V_0 = L_0;
		il2cpp_codegen_initobj(__this, sizeof(ValueStringBuilder_tEBD54C46E3AF8527BD0D234124F5C1AC14E9E251));
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_1 = V_0;
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(ArrayPool_1_t3CE8332C9DFE03FF160AB0CE0FF17DF7792E0E4B_il2cpp_TypeInfo_var);
		ArrayPool_1_t3CE8332C9DFE03FF160AB0CE0FF17DF7792E0E4B* L_2;
		L_2 = ArrayPool_1_get_Shared_m8EB88B4EDF81135B55DB0F33A749B8087FE4646F_inline(ArrayPool_1_get_Shared_m8EB88B4EDF81135B55DB0F33A749B8087FE4646F_RuntimeMethod_var);
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_3 = V_0;
		NullCheck(L_2);
		VirtualActionInvoker2< CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*, bool >::Invoke(5, L_2, L_3, (bool)0);
	}

IL_001d:
	{
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 MemoryExtensions_AsSpan_m0EB07912D71097A8B05F586158966837F5C3DB38_inline (String_t* ___0_text, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1__ctor_m0152E50B40750679B83FF9F30CA539FFBB98EEE8_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		String_t* L_0 = ___0_text;
		if (L_0)
		{
			goto IL_000d;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1));
		ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 L_1 = V_0;
		return L_1;
	}

IL_000d:
	{
		String_t* L_2 = ___0_text;
		NullCheck(L_2);
		Il2CppChar* L_3;
		L_3 = String_GetRawStringData_m87BC50B7B314C055E27A28032D1003D42FDE411D(L_2, NULL);
		String_t* L_4 = ___0_text;
		NullCheck(L_4);
		int32_t L_5;
		L_5 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_4, NULL);
		ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 L_6;
		memset((&L_6), 0, sizeof(L_6));
		ReadOnlySpan_1__ctor_m0152E50B40750679B83FF9F30CA539FFBB98EEE8_inline((&L_6), L_3, L_5, ReadOnlySpan_1__ctor_m0152E50B40750679B83FF9F30CA539FFBB98EEE8_RuntimeMethod_var);
		return L_6;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_m1D3E8C5A560BE65D9A5C3E5D0D891C79F4895B0B_gshared_inline (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_array, const RuntimeMethod* method) 
{
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		il2cpp_codegen_initobj(__this, sizeof(ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D));
		return;
	}

IL_000b:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___0_array;
		NullCheck((RuntimeArray*)L_1);
		uint8_t* L_2;
		L_2 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_1, NULL);
		uint8_t* L_3;
		L_3 = il2cpp_unsafe_as_ref<uint8_t>(L_2);
		ByReference_1_t9C85BCCAAF8C525B6C06B07E922D8D217BE8D6FC L_4;
		memset((&L_4), 0, sizeof(L_4));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_4), L_3);
		__this->____pointer_0 = L_4;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = ___0_array;
		NullCheck(L_5);
		__this->____length_1 = ((int32_t)(((RuntimeArray*)L_5)->max_length));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ReadOnlySpan_1_get_Length_m54864A0BB817050A9110E85BB5FB31EF63699982_gshared_inline (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____length_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D ReadOnlySpan_1_Slice_mC8B7C665F49384744642F03EA355239F0E4AF966_gshared_inline (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D* __this, int32_t ___0_start, const RuntimeMethod* method) 
{
	ByReference_1_t9C85BCCAAF8C525B6C06B07E922D8D217BE8D6FC V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_start;
		int32_t L_1 = (int32_t)__this->____length_1;
		if ((!(((uint32_t)L_0) > ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		ByReference_1_t9C85BCCAAF8C525B6C06B07E922D8D217BE8D6FC L_2 = (ByReference_1_t9C85BCCAAF8C525B6C06B07E922D8D217BE8D6FC)__this->____pointer_0;
		V_0 = L_2;
		uint8_t* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(uint8_t, (Il2CppByReference*)(&V_0));
		int32_t L_4 = ___0_start;
		uint8_t* L_5;
		L_5 = il2cpp_unsafe_add<uint8_t,int32_t>(L_3, L_4);
		int32_t L_6 = (int32_t)__this->____length_1;
		int32_t L_7 = ___0_start;
		ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D L_8;
		memset((&L_8), 0, sizeof(L_8));
		ReadOnlySpan_1__ctor_m0FC0B92549C2968E80B5F75A85F28B96DBFCFD63_inline((&L_8), L_5, ((int32_t)il2cpp_codegen_subtract(L_6, L_7)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 12));
		return L_8;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Span_1_get_Length_m8E944E4954E037877A25B9FF6B901F1F901D4769_gshared_inline (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____length_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* Array_Empty_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m6080CA526758F4FA182A066B2780D1761CD36ED5_gshared_inline (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 2));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ((EmptyArray_1_t7187E746F328254739F076CFBCAABB28D4B4554C_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 2)))->___Value_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ReadOnlySpan_1_get_Length_m36BD32453530B535FE60A8123643219FEAABC351_gshared_inline (ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____length_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_mE18EBB601FBFA01BA29FE353364700952A9091FE_gshared_inline (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		goto IL_0016;
	}

IL_0016:
	{
		int32_t L_0 = ___1_length;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_001f;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_001f:
	{
		void* L_1 = ___0_pointer;
		uint8_t* L_2;
		L_2 = il2cpp_unsafe_as_ref<uint8_t>((uint8_t*)L_1);
		ByReference_1_t9C85BCCAAF8C525B6C06B07E922D8D217BE8D6FC L_3;
		memset((&L_3), 0, sizeof(L_3));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_3), L_2);
		__this->____pointer_0 = L_3;
		int32_t L_4 = ___1_length;
		__this->____length_1 = L_4;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ArrayPool_1_t645A9854926DCA747C654687A362AD03D55D2C07* ArrayPool_1_get_Shared_m59AE954C801963CBE5E506D9378429032D161C97_gshared_inline (const RuntimeMethod* method) 
{
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		ArrayPool_1_t645A9854926DCA747C654687A362AD03D55D2C07* L_0 = ((ArrayPool_1_t645A9854926DCA747C654687A362AD03D55D2C07_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->___U3CSharedU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 Span_1_Slice_m9D8BA8245B8DC9BFB4A4164759CBAAEAD1318CD6_gshared_inline (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305* __this, int32_t ___0_start, int32_t ___1_length, const RuntimeMethod* method) 
{
	ByReference_1_t9C85BCCAAF8C525B6C06B07E922D8D217BE8D6FC V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_start;
		int32_t L_1 = (int32_t)__this->____length_1;
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		int32_t L_2 = ___1_length;
		int32_t L_3 = (int32_t)__this->____length_1;
		int32_t L_4 = ___0_start;
		if ((!(((uint32_t)L_2) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_3, L_4))))))
		{
			goto IL_0019;
		}
	}

IL_0014:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0019:
	{
		ByReference_1_t9C85BCCAAF8C525B6C06B07E922D8D217BE8D6FC L_5 = (ByReference_1_t9C85BCCAAF8C525B6C06B07E922D8D217BE8D6FC)__this->____pointer_0;
		V_0 = L_5;
		uint8_t* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(uint8_t, (Il2CppByReference*)(&V_0));
		int32_t L_7 = ___0_start;
		uint8_t* L_8;
		L_8 = il2cpp_unsafe_add<uint8_t,int32_t>(L_6, L_7);
		int32_t L_9 = ___1_length;
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_10;
		memset((&L_10), 0, sizeof(L_10));
		Span_1__ctor_m947BF95D54571BF3897F96822B7A8FDA5853497B_inline((&L_10), L_8, L_9, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 16));
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_m835590E344B05AF6AF00A78E92C4175BD781A3D2_gshared_inline (Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		goto IL_0016;
	}

IL_0016:
	{
		int32_t L_0 = ___1_length;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_001f;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_001f:
	{
		void* L_1 = ___0_pointer;
		Il2CppChar* L_2;
		L_2 = il2cpp_unsafe_as_ref<Il2CppChar>((uint8_t*)L_1);
		ByReference_1_t7BA5A6CA164F770BC688F21C5978D368716465F5 L_3;
		memset((&L_3), 0, sizeof(L_3));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_3), L_2);
		__this->____pointer_0 = L_3;
		int32_t L_4 = ___1_length;
		__this->____length_1 = L_4;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_mDADE08E6B4594775C6675B389078E5FE98C745D5_gshared_inline (ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1* __this, CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___0_array, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) 
{
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_1 = ___1_start;
		if (L_1)
		{
			goto IL_0009;
		}
	}
	{
		int32_t L_2 = ___2_length;
		if (!L_2)
		{
			goto IL_000e;
		}
	}

IL_0009:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		il2cpp_codegen_initobj(__this, sizeof(ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1));
		return;
	}

IL_0016:
	{
		int32_t L_3 = ___1_start;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_4 = ___0_array;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0024;
		}
	}
	{
		int32_t L_5 = ___2_length;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_6 = ___0_array;
		NullCheck(L_6);
		int32_t L_7 = ___1_start;
		if ((!(((uint32_t)L_5) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_6)->max_length)), L_7))))))
		{
			goto IL_0029;
		}
	}

IL_0024:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0029:
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_8 = ___0_array;
		NullCheck((RuntimeArray*)L_8);
		uint8_t* L_9;
		L_9 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_8, NULL);
		Il2CppChar* L_10;
		L_10 = il2cpp_unsafe_as_ref<Il2CppChar>(L_9);
		int32_t L_11 = ___1_start;
		Il2CppChar* L_12;
		L_12 = il2cpp_unsafe_add<Il2CppChar,int32_t>(L_10, L_11);
		ByReference_1_t7BA5A6CA164F770BC688F21C5978D368716465F5 L_13;
		memset((&L_13), 0, sizeof(L_13));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_13), L_12);
		__this->____pointer_0 = L_13;
		int32_t L_14 = ___2_length;
		__this->____length_1 = L_14;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_m31EE4A5510B5C504DB26DB281BC7D4179B859F2B_gshared_inline (Span_1_t3C5DB525B005B1AC5A1F3BDD528900C5C7C7D316* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		goto IL_0016;
	}

IL_0016:
	{
		int32_t L_0 = ___1_length;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_001f;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_001f:
	{
		void* L_1 = ___0_pointer;
		int32_t* L_2;
		L_2 = il2cpp_unsafe_as_ref<int32_t>((uint8_t*)L_1);
		ByReference_1_tDDF129F0BC02430629D5CD253C681112F166BAD4 L_3;
		memset((&L_3), 0, sizeof(L_3));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_3), L_2);
		__this->____pointer_0 = L_3;
		int32_t L_4 = ___1_length;
		__this->____length_1 = L_4;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Span_1_get_Length_m87AB3C694F2E4802F14D006F21C020816045285F_gshared_inline (Span_1_t3C5DB525B005B1AC5A1F3BDD528900C5C7C7D316* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____length_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D Span_1_Slice_mEFBC3C78FD443FFE23F9E841D43B7B0271622843_gshared_inline (Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D* __this, int32_t ___0_start, int32_t ___1_length, const RuntimeMethod* method) 
{
	ByReference_1_t7BA5A6CA164F770BC688F21C5978D368716465F5 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_start;
		int32_t L_1 = (int32_t)__this->____length_1;
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		int32_t L_2 = ___1_length;
		int32_t L_3 = (int32_t)__this->____length_1;
		int32_t L_4 = ___0_start;
		if ((!(((uint32_t)L_2) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_3, L_4))))))
		{
			goto IL_0019;
		}
	}

IL_0014:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0019:
	{
		ByReference_1_t7BA5A6CA164F770BC688F21C5978D368716465F5 L_5 = (ByReference_1_t7BA5A6CA164F770BC688F21C5978D368716465F5)__this->____pointer_0;
		V_0 = L_5;
		Il2CppChar* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(Il2CppChar, (Il2CppByReference*)(&V_0));
		int32_t L_7 = ___0_start;
		Il2CppChar* L_8;
		L_8 = il2cpp_unsafe_add<Il2CppChar,int32_t>(L_6, L_7);
		int32_t L_9 = ___1_length;
		Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D L_10;
		memset((&L_10), 0, sizeof(L_10));
		Span_1__ctor_mC9BE2938B716B46BB6B9070B94DBE5CE814BC0E2_inline((&L_10), L_8, L_9, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 16));
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Span_1_get_Length_mB79622153F80AD55A805C005842AF045F4FCF992_gshared_inline (Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____length_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D Span_1_Slice_mDC9AA64B960B9BB8357655827A8202DF83443068_gshared_inline (Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D* __this, int32_t ___0_start, const RuntimeMethod* method) 
{
	ByReference_1_t7BA5A6CA164F770BC688F21C5978D368716465F5 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_start;
		int32_t L_1 = (int32_t)__this->____length_1;
		if ((!(((uint32_t)L_0) > ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		ByReference_1_t7BA5A6CA164F770BC688F21C5978D368716465F5 L_2 = (ByReference_1_t7BA5A6CA164F770BC688F21C5978D368716465F5)__this->____pointer_0;
		V_0 = L_2;
		Il2CppChar* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(Il2CppChar, (Il2CppByReference*)(&V_0));
		int32_t L_4 = ___0_start;
		Il2CppChar* L_5;
		L_5 = il2cpp_unsafe_add<Il2CppChar,int32_t>(L_3, L_4);
		int32_t L_6 = (int32_t)__this->____length_1;
		int32_t L_7 = ___0_start;
		Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D L_8;
		memset((&L_8), 0, sizeof(L_8));
		Span_1__ctor_mC9BE2938B716B46BB6B9070B94DBE5CE814BC0E2_inline((&L_8), L_5, ((int32_t)il2cpp_codegen_subtract(L_6, L_7)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 16));
		return L_8;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ArrayPool_1_t3CE8332C9DFE03FF160AB0CE0FF17DF7792E0E4B* ArrayPool_1_get_Shared_m8EB88B4EDF81135B55DB0F33A749B8087FE4646F_gshared_inline (const RuntimeMethod* method) 
{
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		ArrayPool_1_t3CE8332C9DFE03FF160AB0CE0FF17DF7792E0E4B* L_0 = ((ArrayPool_1_t3CE8332C9DFE03FF160AB0CE0FF17DF7792E0E4B_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->___U3CSharedU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint8_t* Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline (RuntimeArray* __this, const RuntimeMethod* method) 
{
	{
		RawData_t37CAF2D3F74B7723974ED7CEEE9B297D8FA64ED0* L_0;
		L_0 = il2cpp_unsafe_as<RawData_t37CAF2D3F74B7723974ED7CEEE9B297D8FA64ED0*>(__this);
		NullCheck(L_0);
		uint8_t* L_1 = (&L_0->___Data_2);
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_m0152E50B40750679B83FF9F30CA539FFBB98EEE8_gshared_inline (ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1* __this, Il2CppChar* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		Il2CppChar* L_0 = ___0_ptr;
		ByReference_1_t7BA5A6CA164F770BC688F21C5978D368716465F5 L_1;
		memset((&L_1), 0, sizeof(L_1));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_1), L_0);
		__this->____pointer_0 = L_1;
		int32_t L_2 = ___1_length;
		__this->____length_1 = L_2;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_m0FC0B92549C2968E80B5F75A85F28B96DBFCFD63_gshared_inline (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D* __this, uint8_t* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		uint8_t* L_0 = ___0_ptr;
		ByReference_1_t9C85BCCAAF8C525B6C06B07E922D8D217BE8D6FC L_1;
		memset((&L_1), 0, sizeof(L_1));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_1), L_0);
		__this->____pointer_0 = L_1;
		int32_t L_2 = ___1_length;
		__this->____length_1 = L_2;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_m947BF95D54571BF3897F96822B7A8FDA5853497B_gshared_inline (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305* __this, uint8_t* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		uint8_t* L_0 = ___0_ptr;
		ByReference_1_t9C85BCCAAF8C525B6C06B07E922D8D217BE8D6FC L_1;
		memset((&L_1), 0, sizeof(L_1));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_1), L_0);
		__this->____pointer_0 = L_1;
		int32_t L_2 = ___1_length;
		__this->____length_1 = L_2;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_mC9BE2938B716B46BB6B9070B94DBE5CE814BC0E2_gshared_inline (Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D* __this, Il2CppChar* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		Il2CppChar* L_0 = ___0_ptr;
		ByReference_1_t7BA5A6CA164F770BC688F21C5978D368716465F5 L_1;
		memset((&L_1), 0, sizeof(L_1));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_1), L_0);
		__this->____pointer_0 = L_1;
		int32_t L_2 = ___1_length;
		__this->____length_1 = L_2;
		return;
	}
}
