#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif




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
template <typename R, typename T1>
struct ConstrainedFuncInvoker1;
template <typename R, typename T1>
struct ConstrainedFuncInvoker1<R, T1*>
{
	static inline R Invoke (RuntimeClass* type, const RuntimeMethod* constrainedMethod, void* boxBuffer, void* obj, T1* p1)
	{
		R ret;
		void* params[1] = { p1 };
		il2cpp_codegen_runtime_constrained_call(type, constrainedMethod, boxBuffer, obj, params, &ret);
		return ret;
	}
};

struct Dictionary_2_t645C7B1DAE2D839B52A5E387C165CE13D5465B00;
struct FeatureStateProvider_2_t7473B268F0B5C2B630842C429A5C740B0C685793;
struct Func_2_t2A7432CC4F64D0DF6D8629208B154CF139B39AF2;
struct IEnumerable_1_tCE758D940790D6D0D56B457E522C195F8C413AF2;
struct IList_1_t3C981BB2E5E26A467A42AF86513CF54136025701;
struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD;
struct List_1_t2F88DEA9F62FDBA84CCE0AC7F9551BF5BB75F360;
struct Queue_1_t488F4FFC87B785BACAAF18A6B2E9307E5451DF68;
struct RefCounted_t6B975CD3D06E8D955346FC0D66E8F6E449D49A44;
struct RefCounted_t0E133AD36715877AE1CE72539A0199B4D3AA8CD1;
struct RefCounted_t81BCBAE57D930C934CF7A439452D65303AC6A8CD;
struct RefCounted_t78303B1CD3D08C664ABB15EBD7C882DA3E06CF7D;
struct RefCounted_tA9FB4D63A1064BD322AFDFCD70319CB384C057D9;
struct RefCounted_t812D790A2C787F18230F9234F6C9B84D4AC1A85A;
struct BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4;
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
struct Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259;
struct ComputedTransitionPropertyU5BU5D_t25B9E78F5276CDA297C8215C316452CAB8219E82;
struct EnumU5BU5D_t6106A94708E3435454078BF14FA50152B7301912;
struct FontWeightU5BU5D_t2A406B5BAB0DD0F06E7F1773DB062E4AF98067BA;
struct HighlightStateU5BU5D_tA878A0AF1F4F52882ACD29515AADC277EE135622;
struct HighlightStateU5BU5D_tCF5677B4773947CE4C64B938B12AC50DDA347435;
struct HorizontalAlignmentOptionsU5BU5D_t4D185662282BFB910D8B9A8199E91578E9422658;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
struct MaterialReferenceU5BU5D_t7491D335AB3E3E13CE9C0F5E931F396F6A02E1F2;
struct MaterialReferenceU5BU5D_t4A9B88114E223BD96CE5121053664023CE2DE07E;
struct MeshU5BU5D_t178CA36422FC397211E68FB7E39C5B2F95619689;
struct ONSPPropagationMaterialU5BU5D_t09366E3A22D05CEBD56F798F10E24B4E0126FE57;
struct PlayableBindingU5BU5D_tC50C3F27A8E4246488F7A5998CAABAC4811A92CD;
struct PlayerLoopSystemU5BU5D_t07C04E53AAC3CDA17603E8BA1B41D7E1AC083C6D;
struct RendererU5BU5D_t32FDD782F67917B2291EA4FF242719877440A02A;
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C;
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
struct StyleValueHandleU5BU5D_t66B7732469E9E30B1FB9A6E386315DAB36914ADE;
struct TMP_ColorGradientU5BU5D_t2F65E8C42F268DFF33BB1392D94BCF5B5087308A;
struct TextAlignmentU5BU5D_t756DC2D672145699CB9718DDBA5982ED51A95F49;
struct TextColorGradientU5BU5D_tA27A5E49640CF01334A10DBDBC959903AFBD941A;
struct TextFontWeightU5BU5D_t3DE32809AEE657255C8333897D61F2EA5279D43F;
struct TextureU5BU5D_t0C3F884241E8243E791A31B920CAA89212888E46;
struct UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA;
struct Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA;
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;
struct Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD;
struct WitEntityKeywordInfoU5BU5D_tF62D7B36A857239604E3BF89B6088F63129EF811;
struct WitEntityRoleInfoU5BU5D_t04D4D146ECDA2EF9AB18EF592F203AE0463E1A3C;
struct WitIntentEntityInfoU5BU5D_tB13EBD648934DAC59EB3E49DE2C783E6919B7318;
struct AudioMixerSnapshot_tB9A62E6CFA52643B938E4FBFFAE1A5ED30907781;
struct BaseRaycaster_t7DC8158FD3CA0193455344379DD5FF7CD5F1F832;
struct BatchDrawCommand_t9DAB9B739DA9EBC6B1BB0D2DD51AF65B12F66BF0;
struct BatchDrawRange_t736D745E918A629658B80A0F7D2D17DAFBA6172F;
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2;
struct EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C;
struct FingerFeatureStateThresholds_t459407C9E4AC8B709598B5705F5DE1AB87F31324;
struct Focusable_t39F2BAF0AF6CA465BC2BEDAF9B5B2CF379B846D0;
struct Font_tC95270EA3198038970422D78B74A7F2E218A96B6;
struct FontAsset_t61A6446D934E582651044E33D250EA8D306AB958;
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
struct Glyph_t700CF8EBE04ED4AEAB520885AAA1B309E02A103F;
struct HandGrabInteractable_tAA4FA87F97EBE085B00C9989B64494E72E717127;
struct HandPose_t0B0F57FC79F74C9D20E54C6999A45D59FDDAC733;
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
struct IPanel_tAD0F3807B6DE2ECA557380E7DB5F3A179BE5A7A5;
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C;
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3;
struct MemberInfo_t;
struct Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4;
struct MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5;
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
struct RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA;
struct RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27;
struct Rigidbody_t268697F5A994213ED97393309870968BC1C7393C;
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712;
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C;
struct SortColumnDescription_t278A693B84340D73A6FADCFB1521E313A80F9C37;
struct Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99;
struct SpriteAsset_t1D3CF1D9DC350A4690CB09DE228A8B59F2F02313;
struct String_t;
struct StyleComplexSelector_tE46C29F65FDBA48D3152781187401C8B55B7D8AD;
struct StyleSheet_t6FAF43FCDB45BC6BED0522A222FD4C1A9BB10428;
struct TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB;
struct TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160;
struct TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39;
struct TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9;
struct TMP_TextElement_t262A55214F712D4274485ABE5676E5254B84D0A5;
struct TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D;
struct Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667;
struct TextColorGradient_t22D94E441E8E8CD772B966C167E5C0AEB0919D70;
struct TextElement_tCEF567A8810788262275B39DC39CBA6EBE7472DA;
struct TextInfo_t27E58E62A7552C66D38C175AF9D22622365F5D09;
struct Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700;
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4;
struct Type_t;
struct UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7;
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F;
struct VectorImage_t7BD8CE948377FFE95FCA0C48014ACDFC13B8F8FC;
struct VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115;
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
struct YogaNode_t9EE7C2B7C0BD1299C28837B1A66CF4660E724C8B;
struct CreateOutputMethod_tD18AFE3B69E6DDD913D82D5FA1D5D909CEEC8509;
struct UpdateFunction_t1C48B7EECBE47AC123A9D9D7D9D2A9EE951C56C4;

IL2CPP_EXTERN_C RuntimeClass* BoundsInt_t4E757DE5EFF9FCB42000F173360DDC63B5585485_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Color_tD001788D726C3A7F1379BEED0260B9591F440C1F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1;
struct Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B;
struct ComputedTransitionProperty_tD8E4D8EB5DD69E063944F27A48D9263F4F1354E1_marshaled_com;
struct ComputedTransitionProperty_tD8E4D8EB5DD69E063944F27A48D9263F4F1354E1_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;
struct Glyph_t700CF8EBE04ED4AEAB520885AAA1B309E02A103F_marshaled_com;
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com;
struct PlayerLoopSystem_t8AED6BF1C8A309CAA6FF71AC91DD33BDDFF7CF1F_marshaled_com;
struct PlayerLoopSystem_t8AED6BF1C8A309CAA6FF71AC91DD33BDDFF7CF1F_marshaled_pinvoke;
struct StyleValueHandle_t5831643AAA7AD8C5C43A4498C5E0A2545F78227D;
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7;
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2;
struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3;
struct WitEntityKeywordInfo_tE0A290B8BFF00EF007649834C336D5DD48DA445B_marshaled_com;
struct WitEntityKeywordInfo_tE0A290B8BFF00EF007649834C336D5DD48DA445B_marshaled_pinvoke;
struct WitEntityRoleInfo_t444B640CBDE235AB703A9C4AE80477D9AF548C67_marshaled_com;
struct WitEntityRoleInfo_t444B640CBDE235AB703A9C4AE80477D9AF548C67_marshaled_pinvoke;
struct WitIntentEntityInfo_tCFB51DC37AF74C46DA5C1C16FF165B8011B20074_marshaled_com;
struct WitIntentEntityInfo_tCFB51DC37AF74C46DA5C1C16FF165B8011B20074_marshaled_pinvoke;


IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
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
struct StyleDataRef_1_tBB9987581539847AE5CCA2EA2349E05CDC9127FA 
{
	RefCounted_t6B975CD3D06E8D955346FC0D66E8F6E449D49A44* ___m_Ref_0;
};
struct StyleDataRef_1_t5330A6F4EAC0EAB88E3B9849D866AA23BB6BE5F4 
{
	RefCounted_t0E133AD36715877AE1CE72539A0199B4D3AA8CD1* ___m_Ref_0;
};
struct StyleDataRef_1_tF773E9CBC6DC0FEB38DF95A6F3F47AC49AE045B3 
{
	RefCounted_t81BCBAE57D930C934CF7A439452D65303AC6A8CD* ___m_Ref_0;
};
struct StyleDataRef_1_t1D59CCAB740BE6B330D5B5FDA9F67391800200B3 
{
	RefCounted_t78303B1CD3D08C664ABB15EBD7C882DA3E06CF7D* ___m_Ref_0;
};
struct StyleDataRef_1_t6A7B146DD79EDF7F42CD8CCF3E411B40AA729B8E 
{
	RefCounted_tA9FB4D63A1064BD322AFDFCD70319CB384C057D9* ___m_Ref_0;
};
struct StyleDataRef_1_t9CB834B90E638D92A3BE5123B0D3989697AA87FC 
{
	RefCounted_t812D790A2C787F18230F9234F6C9B84D4AC1A85A* ___m_Ref_0;
};
struct TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 
{
	FontWeightU5BU5D_t2A406B5BAB0DD0F06E7F1773DB062E4AF98067BA* ___itemStack_0;
	int32_t ___index_1;
	int32_t ___m_DefaultItem_2;
	int32_t ___m_Capacity_3;
	int32_t ___m_RolloverSize_4;
	int32_t ___m_Count_5;
};
struct TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 
{
	HorizontalAlignmentOptionsU5BU5D_t4D185662282BFB910D8B9A8199E91578E9422658* ___itemStack_0;
	int32_t ___index_1;
	int32_t ___m_DefaultItem_2;
	int32_t ___m_Capacity_3;
	int32_t ___m_RolloverSize_4;
	int32_t ___m_Count_5;
};
struct TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C 
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___itemStack_0;
	int32_t ___index_1;
	int32_t ___m_DefaultItem_2;
	int32_t ___m_Capacity_3;
	int32_t ___m_RolloverSize_4;
	int32_t ___m_Count_5;
};
struct TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 
{
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___itemStack_0;
	int32_t ___index_1;
	float ___m_DefaultItem_2;
	int32_t ___m_Capacity_3;
	int32_t ___m_RolloverSize_4;
	int32_t ___m_Count_5;
};
struct TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C 
{
	TMP_ColorGradientU5BU5D_t2F65E8C42F268DFF33BB1392D94BCF5B5087308A* ___itemStack_0;
	int32_t ___index_1;
	TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB* ___m_DefaultItem_2;
	int32_t ___m_Capacity_3;
	int32_t ___m_RolloverSize_4;
	int32_t ___m_Count_5;
};
struct TextProcessingStack_1_t27834AAB14D26DC6519558C4C2574BA9C190D8E8 
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___itemStack_0;
	int32_t ___index_1;
	int32_t ___m_DefaultItem_2;
	int32_t ___m_Capacity_3;
	int32_t ___m_RolloverSize_4;
	int32_t ___m_Count_5;
};
struct TextProcessingStack_1_t9FC06E35259ADD291ED640FE7554D8C03EA5F555 
{
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___itemStack_0;
	int32_t ___index_1;
	float ___m_DefaultItem_2;
	int32_t ___m_Capacity_3;
	int32_t ___m_RolloverSize_4;
	int32_t ___m_Count_5;
};
struct TextProcessingStack_1_tE63296B08A4C34E38D7EF3FFFA3470076B9E3A0F 
{
	TextAlignmentU5BU5D_t756DC2D672145699CB9718DDBA5982ED51A95F49* ___itemStack_0;
	int32_t ___index_1;
	int32_t ___m_DefaultItem_2;
	int32_t ___m_Capacity_3;
	int32_t ___m_RolloverSize_4;
	int32_t ___m_Count_5;
};
struct TextProcessingStack_1_t0F39F088E8F8F6E18C3C463B2998ADC5B7A0513E 
{
	TextColorGradientU5BU5D_tA27A5E49640CF01334A10DBDBC959903AFBD941A* ___itemStack_0;
	int32_t ___index_1;
	TextColorGradient_t22D94E441E8E8CD772B966C167E5C0AEB0919D70* ___m_DefaultItem_2;
	int32_t ___m_Capacity_3;
	int32_t ___m_RolloverSize_4;
	int32_t ___m_Count_5;
};
struct TextProcessingStack_1_t698B87CDD968C2046F57134BB3AB807EBFFD7790 
{
	TextFontWeightU5BU5D_t3DE32809AEE657255C8333897D61F2EA5279D43F* ___itemStack_0;
	int32_t ___index_1;
	int32_t ___m_DefaultItem_2;
	int32_t ___m_Capacity_3;
	int32_t ___m_RolloverSize_4;
	int32_t ___m_Count_5;
};
struct TimingData_t450BF01CAD1A7E919F8D4B1A54453DBF72EFB1AF 
{
	int64_t ___startTimeMs_0;
	int32_t ___durationMs_1;
	Func_2_t2A7432CC4F64D0DF6D8629208B154CF139B39AF2* ___easingCurve_2;
	float ___easedProgress_3;
	float ___reversingShorteningFactor_4;
	bool ___isStarted_5;
	int32_t ___delayMs_6;
};
struct TimingData_tB9F07E55FE507E685F5E816A57949C38DCD6E263 
{
	int64_t ___startTimeMs_0;
	int32_t ___durationMs_1;
	Func_2_t2A7432CC4F64D0DF6D8629208B154CF139B39AF2* ___easingCurve_2;
	float ___easedProgress_3;
	float ___reversingShorteningFactor_4;
	bool ___isStarted_5;
	int32_t ___delayMs_6;
};
struct TimingData_t9FA7CAC423BACD236FBF49326BDD83D06DF44288 
{
	int64_t ___startTimeMs_0;
	int32_t ___durationMs_1;
	Func_2_t2A7432CC4F64D0DF6D8629208B154CF139B39AF2* ___easingCurve_2;
	float ___easedProgress_3;
	float ___reversingShorteningFactor_4;
	bool ___isStarted_5;
	int32_t ___delayMs_6;
};
struct TimingData_tAC897652D090176D4DE63A3E05988D165A785F09 
{
	int64_t ___startTimeMs_0;
	int32_t ___durationMs_1;
	Func_2_t2A7432CC4F64D0DF6D8629208B154CF139B39AF2* ___easingCurve_2;
	float ___easedProgress_3;
	float ___reversingShorteningFactor_4;
	bool ___isStarted_5;
	int32_t ___delayMs_6;
};
struct TimingData_t9F5BE2ECB5F5FDBD04072B4459F64CB033858F11 
{
	int64_t ___startTimeMs_0;
	int32_t ___durationMs_1;
	Func_2_t2A7432CC4F64D0DF6D8629208B154CF139B39AF2* ___easingCurve_2;
	float ___easedProgress_3;
	float ___reversingShorteningFactor_4;
	bool ___isStarted_5;
	int32_t ___delayMs_6;
};
struct TimingData_t098AB9F533C2FCADF814F88C5A5C79F7AF2FCF49 
{
	int64_t ___startTimeMs_0;
	int32_t ___durationMs_1;
	Func_2_t2A7432CC4F64D0DF6D8629208B154CF139B39AF2* ___easingCurve_2;
	float ___easedProgress_3;
	float ___reversingShorteningFactor_4;
	bool ___isStarted_5;
	int32_t ___delayMs_6;
};
struct TimingData_t7E5D81E44DD38F0BFB0350F529E539BB94000C7A 
{
	int64_t ___startTimeMs_0;
	int32_t ___durationMs_1;
	Func_2_t2A7432CC4F64D0DF6D8629208B154CF139B39AF2* ___easingCurve_2;
	float ___easedProgress_3;
	float ___reversingShorteningFactor_4;
	bool ___isStarted_5;
	int32_t ___delayMs_6;
};
struct TimingData_t70F8D4FF0A51972717A1ED53525241240EF457FE 
{
	int64_t ___startTimeMs_0;
	int32_t ___durationMs_1;
	Func_2_t2A7432CC4F64D0DF6D8629208B154CF139B39AF2* ___easingCurve_2;
	float ___easedProgress_3;
	float ___reversingShorteningFactor_4;
	bool ___isStarted_5;
	int32_t ___delayMs_6;
};
struct TimingData_t0F88AE7B3D3525F39CAAED92C1983CCCF4961B92 
{
	int64_t ___startTimeMs_0;
	int32_t ___durationMs_1;
	Func_2_t2A7432CC4F64D0DF6D8629208B154CF139B39AF2* ___easingCurve_2;
	float ___easedProgress_3;
	float ___reversingShorteningFactor_4;
	bool ___isStarted_5;
	int32_t ___delayMs_6;
};
struct TimingData_tD402D38A47B4E24DECDDD6B9725E579AD10131F3 
{
	int64_t ___startTimeMs_0;
	int32_t ___durationMs_1;
	Func_2_t2A7432CC4F64D0DF6D8629208B154CF139B39AF2* ___easingCurve_2;
	float ___easedProgress_3;
	float ___reversingShorteningFactor_4;
	bool ___isStarted_5;
	int32_t ___delayMs_6;
};
struct TreeViewItemData_1_t95D9721135F40D0DB3D221F8EB2543C396D350F4 
{
	int32_t ___U3CidU3Ek__BackingField_0;
	RuntimeObject* ___m_Data_1;
	RuntimeObject* ___m_Children_2;
};
struct ValueTuple_1_tBFF71B8F72F9D197DB09CFE88F0C8C7FE97CEF75 
{
	bool ___Item1_0;
};
struct ValueTuple_2_tBC19AE73793D615D180F320AB46A541EF61AFBF9 
{
	int32_t ___Item1_0;
	RuntimeObject* ___Item2_1;
};
struct ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A 
{
	RuntimeObject* ___Item1_0;
	RuntimeObject* ___Item2_1;
};
struct ValueTuple_3_tC9C1846E6BD237797AE9B56D5138EE67C1B5FA01 
{
	RuntimeObject* ___Item1_0;
	RuntimeObject* ___Item2_1;
	RuntimeObject* ___Item3_2;
};
struct Angle_t0229F612898D65B3CC646C40A32D93D8A33C1DFC 
{
	float ___m_Value_0;
	int32_t ___m_Unit_1;
};
struct Background_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8 
{
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___m_Texture_0;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_Sprite_1;
	RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___m_RenderTexture_2;
	VectorImage_t7BD8CE948377FFE95FCA0C48014ACDFC13B8F8FC* ___m_VectorImage_3;
};
struct Background_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8_marshaled_pinvoke
{
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___m_Texture_0;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_Sprite_1;
	RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___m_RenderTexture_2;
	VectorImage_t7BD8CE948377FFE95FCA0C48014ACDFC13B8F8FC* ___m_VectorImage_3;
};
struct Background_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8_marshaled_com
{
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___m_Texture_0;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_Sprite_1;
	RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___m_RenderTexture_2;
	VectorImage_t7BD8CE948377FFE95FCA0C48014ACDFC13B8F8FC* ___m_VectorImage_3;
};
struct BackgroundRepeat_t446EC7315DED2C6822F1047B7587C3018BFB277F 
{
	int32_t ___x_0;
	int32_t ___y_1;
};
struct BatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D 
{
	BatchDrawCommand_t9DAB9B739DA9EBC6B1BB0D2DD51AF65B12F66BF0* ___drawCommands_0;
	int32_t* ___visibleInstances_1;
	BatchDrawRange_t736D745E918A629658B80A0F7D2D17DAFBA6172F* ___drawRanges_2;
	float* ___instanceSortingPositions_3;
	int32_t* ___drawCommandPickingInstanceIDs_4;
	int32_t ___drawCommandCount_5;
	int32_t ___visibleInstanceCount_6;
	int32_t ___drawRangeCount_7;
	int32_t ___instanceSortingPositionFloatCount_8;
};
struct BoneWeight_t7E7DACA0D0F56698E05EBBD839D1D343502EA11F 
{
	float ___m_Weight0_0;
	float ___m_Weight1_1;
	float ___m_Weight2_2;
	float ___m_Weight3_3;
	int32_t ___m_BoneIndex0_4;
	int32_t ___m_BoneIndex1_5;
	int32_t ___m_BoneIndex2_6;
	int32_t ___m_BoneIndex3_7;
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
struct Color_tD001788D726C3A7F1379BEED0260B9591F440C1F 
{
	float ___r_0;
	float ___g_1;
	float ___b_2;
	float ___a_3;
};
struct Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B 
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			int32_t ___rgba_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___rgba_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			uint8_t ___r_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint8_t ___r_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___g_2_OffsetPadding[1];
			uint8_t ___g_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___g_2_OffsetPadding_forAlignmentOnly[1];
			uint8_t ___g_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___b_3_OffsetPadding[2];
			uint8_t ___b_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___b_3_OffsetPadding_forAlignmentOnly[2];
			uint8_t ___b_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___a_4_OffsetPadding[3];
			uint8_t ___a_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___a_4_OffsetPadding_forAlignmentOnly[3];
			uint8_t ___a_4_forAlignmentOnly;
		};
	};
};
struct ComputedTransitionProperty_tD8E4D8EB5DD69E063944F27A48D9263F4F1354E1 
{
	int32_t ___id_0;
	int32_t ___durationMs_1;
	int32_t ___delayMs_2;
	Func_2_t2A7432CC4F64D0DF6D8629208B154CF139B39AF2* ___easingCurve_3;
};
struct ComputedTransitionProperty_tD8E4D8EB5DD69E063944F27A48D9263F4F1354E1_marshaled_pinvoke
{
	int32_t ___id_0;
	int32_t ___durationMs_1;
	int32_t ___delayMs_2;
	Il2CppMethodPointer ___easingCurve_3;
};
struct ComputedTransitionProperty_tD8E4D8EB5DD69E063944F27A48D9263F4F1354E1_marshaled_com
{
	int32_t ___id_0;
	int32_t ___durationMs_1;
	int32_t ___delayMs_2;
	Il2CppMethodPointer ___easingCurve_3;
};
struct ConduitParameterValue_tE37668E05BA646C0E83D7D8EFA5E486D534D8A3A 
{
	RuntimeObject* ___Value_0;
	Type_t* ___DataType_1;
};
struct ConduitParameterValue_tE37668E05BA646C0E83D7D8EFA5E486D534D8A3A_marshaled_pinvoke
{
	Il2CppIUnknown* ___Value_0;
	Type_t* ___DataType_1;
};
struct ConduitParameterValue_tE37668E05BA646C0E83D7D8EFA5E486D534D8A3A_marshaled_com
{
	Il2CppIUnknown* ___Value_0;
	Type_t* ___DataType_1;
};
struct CustomAttributeTypedArgument_tAAA19ADE66B16A67D030C8C67D7ADB29A7BEC75F 
{
	Type_t* ___U3CArgumentTypeU3Ek__BackingField_0;
	RuntimeObject* ___U3CValueU3Ek__BackingField_1;
};
struct CustomAttributeTypedArgument_tAAA19ADE66B16A67D030C8C67D7ADB29A7BEC75F_marshaled_pinvoke
{
	Type_t* ___U3CArgumentTypeU3Ek__BackingField_0;
	Il2CppIUnknown* ___U3CValueU3Ek__BackingField_1;
};
struct CustomAttributeTypedArgument_tAAA19ADE66B16A67D030C8C67D7ADB29A7BEC75F_marshaled_com
{
	Type_t* ___U3CArgumentTypeU3Ek__BackingField_0;
	Il2CppIUnknown* ___U3CValueU3Ek__BackingField_1;
};
struct DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D 
{
	uint64_t ____dateData_46;
};
struct Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F 
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			int32_t ___flags_8;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___flags_8_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___hi_9_OffsetPadding[4];
			int32_t ___hi_9;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___hi_9_OffsetPadding_forAlignmentOnly[4];
			int32_t ___hi_9_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___lo_10_OffsetPadding[8];
			int32_t ___lo_10;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___lo_10_OffsetPadding_forAlignmentOnly[8];
			int32_t ___lo_10_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___mid_11_OffsetPadding[12];
			int32_t ___mid_11;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___mid_11_OffsetPadding_forAlignmentOnly[12];
			int32_t ___mid_11_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___ulomidLE_12_OffsetPadding[8];
			uint64_t ___ulomidLE_12;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___ulomidLE_12_OffsetPadding_forAlignmentOnly[8];
			uint64_t ___ulomidLE_12_forAlignmentOnly;
		};
	};
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
struct Dimension_t5B1EAB500AE32C3789A2BCC4D43F7A29996DF3F8 
{
	int32_t ___unit_0;
	float ___value_1;
};
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	double ___m_value_0;
};
struct DrawBufferRange_t289089F19A7539FDA77D3E63416BAFBA0955E2D5 
{
	int32_t ___firstIndex_0;
	int32_t ___indexCount_1;
	int32_t ___minIndexVal_2;
	int32_t ___vertsReferenced_3;
};
struct EasingFunction_t5197D3B06056326A8B5C96032CDEBD5D3BDCA7A4 
{
	int32_t ___m_Mode_0;
};
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2  : public ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F
{
};
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_pinvoke
{
};
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_com
{
};
struct EnumData_tB9520C9179D9D6C57B2BF70E76FE4EB4DC94A6F8 
{
	EnumU5BU5D_t6106A94708E3435454078BF14FA50152B7301912* ___values_0;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___flagValues_1;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___displayNames_2;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___names_3;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___tooltip_4;
	bool ___flags_5;
	Type_t* ___underlyingType_6;
	bool ___unsigned_7;
	bool ___serializable_8;
};
struct EnumData_tB9520C9179D9D6C57B2BF70E76FE4EB4DC94A6F8_marshaled_pinvoke
{
	EnumU5BU5D_t6106A94708E3435454078BF14FA50152B7301912* ___values_0;
	Il2CppSafeArray* ___flagValues_1;
	char** ___displayNames_2;
	char** ___names_3;
	char** ___tooltip_4;
	int32_t ___flags_5;
	Type_t* ___underlyingType_6;
	int32_t ___unsigned_7;
	int32_t ___serializable_8;
};
struct EnumData_tB9520C9179D9D6C57B2BF70E76FE4EB4DC94A6F8_marshaled_com
{
	EnumU5BU5D_t6106A94708E3435454078BF14FA50152B7301912* ___values_0;
	Il2CppSafeArray* ___flagValues_1;
	Il2CppChar** ___displayNames_2;
	Il2CppChar** ___names_3;
	Il2CppChar** ___tooltip_4;
	int32_t ___flags_5;
	Type_t* ___underlyingType_6;
	int32_t ___unsigned_7;
	int32_t ___serializable_8;
};
struct Ephemeron_t74F279F5E7CF4A0CFC21C822431DD840572C6DA2 
{
	RuntimeObject* ___key_0;
	RuntimeObject* ___value_1;
};
struct Ephemeron_t74F279F5E7CF4A0CFC21C822431DD840572C6DA2_marshaled_pinvoke
{
	Il2CppIUnknown* ___key_0;
	Il2CppIUnknown* ___value_1;
};
struct Ephemeron_t74F279F5E7CF4A0CFC21C822431DD840572C6DA2_marshaled_com
{
	Il2CppIUnknown* ___key_0;
	Il2CppIUnknown* ___value_1;
};
struct FontDefinition_t65281B0E106365C28AD3F2525DE148719AEEA30C 
{
	Font_tC95270EA3198038970422D78B74A7F2E218A96B6* ___m_Font_0;
	FontAsset_t61A6446D934E582651044E33D250EA8D306AB958* ___m_FontAsset_1;
};
struct FontDefinition_t65281B0E106365C28AD3F2525DE148719AEEA30C_marshaled_pinvoke
{
	Font_tC95270EA3198038970422D78B74A7F2E218A96B6* ___m_Font_0;
	FontAsset_t61A6446D934E582651044E33D250EA8D306AB958* ___m_FontAsset_1;
};
struct FontDefinition_t65281B0E106365C28AD3F2525DE148719AEEA30C_marshaled_com
{
	Font_tC95270EA3198038970422D78B74A7F2E218A96B6* ___m_Font_0;
	FontAsset_t61A6446D934E582651044E33D250EA8D306AB958* ___m_FontAsset_1;
};
struct FontStyleStack_t63C77495F068E6DF762D6AF063A817E3709659A7 
{
	uint8_t ___bold_0;
	uint8_t ___italic_1;
	uint8_t ___underline_2;
	uint8_t ___strikethrough_3;
	uint8_t ___highlight_4;
	uint8_t ___superscript_5;
	uint8_t ___subscript_6;
	uint8_t ___uppercase_7;
	uint8_t ___lowercase_8;
	uint8_t ___smallcaps_9;
};
struct FontWeightPair_tB94169BD86D0DFC25D651F890B15991A3E0ADA42 
{
	FontAsset_t61A6446D934E582651044E33D250EA8D306AB958* ___regularTypeface_0;
	FontAsset_t61A6446D934E582651044E33D250EA8D306AB958* ___italicTypeface_1;
};
struct FontWeightPair_tB94169BD86D0DFC25D651F890B15991A3E0ADA42_marshaled_pinvoke
{
	FontAsset_t61A6446D934E582651044E33D250EA8D306AB958* ___regularTypeface_0;
	FontAsset_t61A6446D934E582651044E33D250EA8D306AB958* ___italicTypeface_1;
};
struct FontWeightPair_tB94169BD86D0DFC25D651F890B15991A3E0ADA42_marshaled_com
{
	FontAsset_t61A6446D934E582651044E33D250EA8D306AB958* ___regularTypeface_0;
	FontAsset_t61A6446D934E582651044E33D250EA8D306AB958* ___italicTypeface_1;
};
struct GlyphAnchorPoint_t581FDCAD5A1D0F3B129968FAEF20C113AAB0BC08 
{
	float ___m_XCoordinate_0;
	float ___m_YCoordinate_1;
};
struct GlyphMetrics_t6C1C65A891A6279A0EE807C436436B1E44F7AF1A 
{
	float ___m_Width_0;
	float ___m_Height_1;
	float ___m_HorizontalBearingX_2;
	float ___m_HorizontalBearingY_3;
	float ___m_HorizontalAdvance_4;
};
struct GlyphRect_tB6D225B9318A527A1CBC1B4078EB923398EB808D 
{
	int32_t ___m_X_0;
	int32_t ___m_Y_1;
	int32_t ___m_Width_2;
	int32_t ___m_Height_3;
};
struct GlyphValueRecord_t780927A39D46924E0D546A2AE5DDF1BB2B5A9C8E 
{
	float ___m_XPlacement_0;
	float ___m_YPlacement_1;
	float ___m_XAdvance_2;
	float ___m_YAdvance_3;
};
struct GrabbingRule_tBFBDE400621FCCCEB23EF9A44E42B11AE7DBF27D 
{
	int32_t ____thumbRequirement_0;
	int32_t ____indexRequirement_1;
	int32_t ____middleRequirement_2;
	int32_t ____ringRequirement_3;
	int32_t ____pinkyRequirement_4;
	int32_t ____unselectMode_5;
};
struct GradientAlphaKey_tF469955E4BBAF1044320D956CD8D990F1A26EAA0 
{
	float ___alpha_0;
	float ___time_1;
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
struct Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40 
{
	uint64_t ___u64_0_0;
	uint64_t ___u64_1_1;
};
struct HeaderVariantInfo_t99223ED0C557730FBD8AA572065B994254F3386A 
{
	String_t* ___m_name_0;
	int32_t ___m_variant_1;
};
struct HeaderVariantInfo_t99223ED0C557730FBD8AA572065B994254F3386A_marshaled_pinvoke
{
	char* ___m_name_0;
	int32_t ___m_variant_1;
};
struct HeaderVariantInfo_t99223ED0C557730FBD8AA572065B994254F3386A_marshaled_com
{
	Il2CppChar* ___m_name_0;
	int32_t ___m_variant_1;
};
struct HmdMatrix34_t_t63D86814DA8F9D9DC7AA3143CE8C95454D5709F9 
{
	float ___m0_0;
	float ___m1_1;
	float ___m2_2;
	float ___m3_3;
	float ___m4_4;
	float ___m5_5;
	float ___m6_6;
	float ___m7_7;
	float ___m8_8;
	float ___m9_9;
	float ___m10_10;
	float ___m11_11;
};
struct HmdQuaternionf_t_t1C095CC1795A944384A381576561B2C53F1744D4 
{
	float ___w_0;
	float ___x_1;
	float ___y_2;
	float ___z_3;
};
struct HmdVector3_t_tFE918AC51C0144DDA4C272AC67A8FF05052A4B2C 
{
	float ___v0_0;
	float ___v1_1;
	float ___v2_2;
};
struct HmdVector4_t_t7A9046D98A4A0BED4F1CB6A80C69A26D0DA3A2F2 
{
	float ___v0_0;
	float ___v1_1;
	float ___v2_2;
	float ___v3_3;
};
struct InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD 
{
	uint64_t ___m_DeviceId_0;
	bool ___m_Initialized_1;
};
struct InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD_marshaled_pinvoke
{
	uint64_t ___m_DeviceId_0;
	int32_t ___m_Initialized_1;
};
struct InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD_marshaled_com
{
	uint64_t ___m_DeviceId_0;
	int32_t ___m_Initialized_1;
};
struct Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175 
{
	int16_t ___m_value_0;
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
struct InternalCodePageDataItem_t6B4913D6507B26FFAE0B805874644D3DBE78F316 
{
	uint16_t ___codePage_0;
	uint16_t ___uiFamilyCodePage_1;
	uint32_t ___flags_2;
	String_t* ___Names_3;
};
struct InternalCodePageDataItem_t6B4913D6507B26FFAE0B805874644D3DBE78F316_marshaled_pinvoke
{
	uint16_t ___codePage_0;
	uint16_t ___uiFamilyCodePage_1;
	uint32_t ___flags_2;
	char* ___Names_3;
};
struct InternalCodePageDataItem_t6B4913D6507B26FFAE0B805874644D3DBE78F316_marshaled_com
{
	uint16_t ___codePage_0;
	uint16_t ___uiFamilyCodePage_1;
	uint32_t ___flags_2;
	Il2CppChar* ___Names_3;
};
struct InternalEncodingDataItem_t1D6DA6BCE8389C12ECC229A644D2CA45A86C06EB 
{
	String_t* ___webName_0;
	uint16_t ___codePage_1;
};
struct InternalEncodingDataItem_t1D6DA6BCE8389C12ECC229A644D2CA45A86C06EB_marshaled_pinvoke
{
	char* ___webName_0;
	uint16_t ___codePage_1;
};
struct InternalEncodingDataItem_t1D6DA6BCE8389C12ECC229A644D2CA45A86C06EB_marshaled_com
{
	Il2CppChar* ___webName_0;
	uint16_t ___codePage_1;
};
struct JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 
{
	uint64_t ___jobGroup_0;
	int32_t ___version_1;
};
struct Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0 
{
	float ___m_Time_0;
	float ___m_Value_1;
	float ___m_InTangent_2;
	float ___m_OutTangent_3;
	int32_t ___m_WeightedMode_4;
	float ___m_InWeight_5;
	float ___m_OutWeight_6;
};
struct LOD_tFCD9DABCBBA65A45D48B82EBDC65162CDC719741 
{
	float ___screenRelativeTransitionHeight_0;
	float ___fadeTransitionWidth_1;
	RendererU5BU5D_t32FDD782F67917B2291EA4FF242719877440A02A* ___renderers_2;
};
struct LOD_tFCD9DABCBBA65A45D48B82EBDC65162CDC719741_marshaled_pinvoke
{
	float ___screenRelativeTransitionHeight_0;
	float ___fadeTransitionWidth_1;
	RendererU5BU5D_t32FDD782F67917B2291EA4FF242719877440A02A* ___renderers_2;
};
struct LOD_tFCD9DABCBBA65A45D48B82EBDC65162CDC719741_marshaled_com
{
	float ___screenRelativeTransitionHeight_0;
	float ___fadeTransitionWidth_1;
	RendererU5BU5D_t32FDD782F67917B2291EA4FF242719877440A02A* ___renderers_2;
};
struct Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256 
{
	float ___m_Value_1;
	int32_t ___m_Unit_2;
};
struct LigatureSubstitutionRecord_t8660DC6B1D65C655D698216F72BFB3C85DDCAB94 
{
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___m_ComponentGlyphIDs_0;
	uint32_t ___m_LigatureGlyphID_1;
};
struct LigatureSubstitutionRecord_t8660DC6B1D65C655D698216F72BFB3C85DDCAB94_marshaled_pinvoke
{
	Il2CppSafeArray* ___m_ComponentGlyphIDs_0;
	uint32_t ___m_LigatureGlyphID_1;
};
struct LigatureSubstitutionRecord_t8660DC6B1D65C655D698216F72BFB3C85DDCAB94_marshaled_com
{
	Il2CppSafeArray* ___m_ComponentGlyphIDs_0;
	uint32_t ___m_LigatureGlyphID_1;
};
struct LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 
{
	float ___m_red_0;
	float ___m_green_1;
	float ___m_blue_2;
	float ___m_intensity_3;
};
struct LinkInfo_tE85DDAFDFBDA635E6405C88EE4FD5941A9243DD8 
{
	int32_t ___hashCode_0;
	int32_t ___linkIdFirstCharacterIndex_1;
	int32_t ___linkIdLength_2;
	int32_t ___linkTextfirstCharacterIndex_3;
	int32_t ___linkTextLength_4;
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___linkId_5;
	String_t* ___m_LinkIdString_6;
	String_t* ___m_LinkTextString_7;
};
struct LinkInfo_tE85DDAFDFBDA635E6405C88EE4FD5941A9243DD8_marshaled_pinvoke
{
	int32_t ___hashCode_0;
	int32_t ___linkIdFirstCharacterIndex_1;
	int32_t ___linkIdLength_2;
	int32_t ___linkTextfirstCharacterIndex_3;
	int32_t ___linkTextLength_4;
	uint8_t* ___linkId_5;
	char* ___m_LinkIdString_6;
	char* ___m_LinkTextString_7;
};
struct LinkInfo_tE85DDAFDFBDA635E6405C88EE4FD5941A9243DD8_marshaled_com
{
	int32_t ___hashCode_0;
	int32_t ___linkIdFirstCharacterIndex_1;
	int32_t ___linkIdLength_2;
	int32_t ___linkTextfirstCharacterIndex_3;
	int32_t ___linkTextLength_4;
	uint8_t* ___linkId_5;
	Il2CppChar* ___m_LinkIdString_6;
	Il2CppChar* ___m_LinkTextString_7;
};
struct ManipulatorActivationFilter_t866A0295DA75EA271B30BDC1F9EEA2C4FDEB1A81 
{
	int32_t ___U3CbuttonU3Ek__BackingField_0;
	int32_t ___U3CmodifiersU3Ek__BackingField_1;
	int32_t ___U3CclickCountU3Ek__BackingField_2;
};
struct MarkPositionAdjustment_t2523798D56F14A93A080D9D1298498325A51F436 
{
	float ___m_XPositionAdjustment_0;
	float ___m_YPositionAdjustment_1;
};
struct MaterialPropertyFloat_t04D58C5C07D33383B57D7BEFD0074EB4F621366A 
{
	String_t* ___name_0;
	float ___value_1;
};
struct MaterialPropertyFloat_t04D58C5C07D33383B57D7BEFD0074EB4F621366A_marshaled_pinvoke
{
	char* ___name_0;
	float ___value_1;
};
struct MaterialPropertyFloat_t04D58C5C07D33383B57D7BEFD0074EB4F621366A_marshaled_com
{
	Il2CppChar* ___name_0;
	float ___value_1;
};
struct MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B 
{
	int32_t ___index_0;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___spriteAsset_2;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_3;
	bool ___isDefaultMaterial_4;
	bool ___isFallbackMaterial_5;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___fallbackMaterial_6;
	float ___padding_7;
	int32_t ___referenceCount_8;
};
struct MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B_marshaled_pinvoke
{
	int32_t ___index_0;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___spriteAsset_2;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_3;
	int32_t ___isDefaultMaterial_4;
	int32_t ___isFallbackMaterial_5;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___fallbackMaterial_6;
	float ___padding_7;
	int32_t ___referenceCount_8;
};
struct MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B_marshaled_com
{
	int32_t ___index_0;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___spriteAsset_2;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_3;
	int32_t ___isDefaultMaterial_4;
	int32_t ___isFallbackMaterial_5;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___fallbackMaterial_6;
	float ___padding_7;
	int32_t ___referenceCount_8;
};
struct MaterialReference_t86DB0799D5C82869D4FF0A4F59624AED6910FD26 
{
	int32_t ___index_0;
	FontAsset_t61A6446D934E582651044E33D250EA8D306AB958* ___fontAsset_1;
	SpriteAsset_t1D3CF1D9DC350A4690CB09DE228A8B59F2F02313* ___spriteAsset_2;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_3;
	bool ___isDefaultMaterial_4;
	bool ___isFallbackMaterial_5;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___fallbackMaterial_6;
	float ___padding_7;
	int32_t ___referenceCount_8;
};
struct MaterialReference_t86DB0799D5C82869D4FF0A4F59624AED6910FD26_marshaled_pinvoke
{
	int32_t ___index_0;
	FontAsset_t61A6446D934E582651044E33D250EA8D306AB958* ___fontAsset_1;
	SpriteAsset_t1D3CF1D9DC350A4690CB09DE228A8B59F2F02313* ___spriteAsset_2;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_3;
	int32_t ___isDefaultMaterial_4;
	int32_t ___isFallbackMaterial_5;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___fallbackMaterial_6;
	float ___padding_7;
	int32_t ___referenceCount_8;
};
struct MaterialReference_t86DB0799D5C82869D4FF0A4F59624AED6910FD26_marshaled_com
{
	int32_t ___index_0;
	FontAsset_t61A6446D934E582651044E33D250EA8D306AB958* ___fontAsset_1;
	SpriteAsset_t1D3CF1D9DC350A4690CB09DE228A8B59F2F02313* ___spriteAsset_2;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_3;
	int32_t ___isDefaultMaterial_4;
	int32_t ___isFallbackMaterial_5;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___fallbackMaterial_6;
	float ___padding_7;
	int32_t ___referenceCount_8;
};
struct Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 
{
	float ___m00_0;
	float ___m10_1;
	float ___m20_2;
	float ___m30_3;
	float ___m01_4;
	float ___m11_5;
	float ___m21_6;
	float ___m31_7;
	float ___m02_8;
	float ___m12_9;
	float ___m22_10;
	float ___m32_11;
	float ___m03_12;
	float ___m13_13;
	float ___m23_14;
	float ___m33_15;
};
struct MultipleSubstitutionRecord_t668A640AFADBD46E3D4EC3A8417D0A02764DF87B 
{
	uint32_t ___m_TargetGlyphID_0;
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___m_SubstituteGlyphIDs_1;
};
struct MultipleSubstitutionRecord_t668A640AFADBD46E3D4EC3A8417D0A02764DF87B_marshaled_pinvoke
{
	uint32_t ___m_TargetGlyphID_0;
	Il2CppSafeArray* ___m_SubstituteGlyphIDs_1;
};
struct MultipleSubstitutionRecord_t668A640AFADBD46E3D4EC3A8417D0A02764DF87B_marshaled_com
{
	uint32_t ___m_TargetGlyphID_0;
	Il2CppSafeArray* ___m_SubstituteGlyphIDs_1;
};
struct Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C 
{
	int32_t ___m_Mode_0;
	bool ___m_WrapAround_1;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnUp_2;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnDown_3;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnLeft_4;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnRight_5;
};
struct Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C_marshaled_pinvoke
{
	int32_t ___m_Mode_0;
	int32_t ___m_WrapAround_1;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnUp_2;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnDown_3;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnLeft_4;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnRight_5;
};
struct Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C_marshaled_com
{
	int32_t ___m_Mode_0;
	int32_t ___m_WrapAround_1;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnUp_2;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnDown_3;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnLeft_4;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnRight_5;
};
struct OVRSpace_tDA5A6DB241624CD5712AC4A71E565BA171985B4D 
{
	uint64_t ___U3CHandleU3Ek__BackingField_0;
};
struct OVRSpaceUser_tF145982B655F69985F22D9AB527F17FC76CDC90F 
{
	uint64_t ____handle_0;
};
struct Offset_tF4AF8F62C21FD6DCB5255F705A59CC10583E22C4 
{
	float ___m_Left_0;
	float ___m_Right_1;
	float ___m_Top_2;
	float ___m_Bottom_3;
};
struct PageInfo_tFFF6B289E9A37E4D69353B32F941421180DA5909 
{
	int32_t ___firstCharacterIndex_0;
	int32_t ___lastCharacterIndex_1;
	float ___ascender_2;
	float ___baseLine_3;
	float ___descender_4;
};
struct ParameterModifier_t75F1AF13B2AD5EDBD3A3579FD337D0A66E3FF510 
{
	BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* ____byRef_0;
};
struct ParameterModifier_t75F1AF13B2AD5EDBD3A3579FD337D0A66E3FF510_marshaled_pinvoke
{
	int32_t* ____byRef_0;
};
struct ParameterModifier_t75F1AF13B2AD5EDBD3A3579FD337D0A66E3FF510_marshaled_com
{
	int32_t* ____byRef_0;
};
struct PoseMeasureParameters_t93F958B174ABC0A954B8A6B9B3DFA73DFE894363 
{
	float ____positionRotationWeight_0;
};
struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 
{
	float ___x_0;
	float ___y_1;
	float ___z_2;
	float ___w_3;
};
struct Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D 
{
	float ___m_XMin_0;
	float ___m_YMin_1;
	float ___m_Width_2;
	float ___m_Height_3;
};
struct RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8 
{
	int32_t ___m_XMin_0;
	int32_t ___m_YMin_1;
	int32_t ___m_Width_2;
	int32_t ___m_Height_3;
};
struct ReflectionSnapshot_t361A95030CF97B83EE143D43465E30A2CCDD8122 
{
	AudioMixerSnapshot_tB9A62E6CFA52643B938E4FBFFAE1A5ED30907781* ___mixerSnapshot_0;
	float ___fadeTime_1;
};
struct ReflectionSnapshot_t361A95030CF97B83EE143D43465E30A2CCDD8122_marshaled_pinvoke
{
	AudioMixerSnapshot_tB9A62E6CFA52643B938E4FBFFAE1A5ED30907781* ___mixerSnapshot_0;
	float ___fadeTime_1;
};
struct ReflectionSnapshot_t361A95030CF97B83EE143D43465E30A2CCDD8122_marshaled_com
{
	AudioMixerSnapshot_tB9A62E6CFA52643B938E4FBFFAE1A5ED30907781* ___mixerSnapshot_0;
	float ___fadeTime_1;
};
struct ResourceLocator_t84F68A0DD2AA185761938E49BBE9B2C46A47E122 
{
	RuntimeObject* ____value_0;
	int32_t ____dataPos_1;
};
struct ResourceLocator_t84F68A0DD2AA185761938E49BBE9B2C46A47E122_marshaled_pinvoke
{
	Il2CppIUnknown* ____value_0;
	int32_t ____dataPos_1;
};
struct ResourceLocator_t84F68A0DD2AA185761938E49BBE9B2C46A47E122_marshaled_com
{
	Il2CppIUnknown* ____value_0;
	int32_t ____dataPos_1;
};
struct RichTextTagAttribute_t1BB51A8FD6C14746D177D8E84E281A4FD4A720E0 
{
	int32_t ___nameHashCode_0;
	int32_t ___valueHashCode_1;
	int32_t ___valueType_2;
	int32_t ___valueStartIndex_3;
	int32_t ___valueLength_4;
	int32_t ___unitType_5;
};
struct RichTextTagAttribute_t0600951F833208392F1D8EE3E6A58AD5C797F9DA 
{
	int32_t ___nameHashCode_0;
	int32_t ___valueHashCode_1;
	int32_t ___valueType_2;
	int32_t ___valueStartIndex_3;
	int32_t ___valueLength_4;
	int32_t ___unitType_5;
};
struct RuleMatcher_t327CFEB02C81AA20E639DE949DCBBAB5E92FF28E 
{
	StyleSheet_t6FAF43FCDB45BC6BED0522A222FD4C1A9BB10428* ___sheet_0;
	StyleComplexSelector_tE46C29F65FDBA48D3152781187401C8B55B7D8AD* ___complexSelector_1;
};
struct RuleMatcher_t327CFEB02C81AA20E639DE949DCBBAB5E92FF28E_marshaled_pinvoke
{
	StyleSheet_t6FAF43FCDB45BC6BED0522A222FD4C1A9BB10428* ___sheet_0;
	StyleComplexSelector_tE46C29F65FDBA48D3152781187401C8B55B7D8AD* ___complexSelector_1;
};
struct RuleMatcher_t327CFEB02C81AA20E639DE949DCBBAB5E92FF28E_marshaled_com
{
	StyleSheet_t6FAF43FCDB45BC6BED0522A222FD4C1A9BB10428* ___sheet_0;
	StyleComplexSelector_tE46C29F65FDBA48D3152781187401C8B55B7D8AD* ___complexSelector_1;
};
struct SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5 
{
	int8_t ___m_value_0;
};
struct ScalableImage_t64F0F6F75D1099EF5D595E70CA1A2A7B9914E80F 
{
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___normalImage_0;
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___highResolutionImage_1;
};
struct ScalableImage_t64F0F6F75D1099EF5D595E70CA1A2A7B9914E80F_marshaled_pinvoke
{
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___normalImage_0;
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___highResolutionImage_1;
};
struct ScalableImage_t64F0F6F75D1099EF5D595E70CA1A2A7B9914E80F_marshaled_com
{
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___normalImage_0;
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___highResolutionImage_1;
};
struct SelectorMatchRecord_t1E93CDB54312CFB4A67768BB25ABB9AFB31BC5D7 
{
	StyleSheet_t6FAF43FCDB45BC6BED0522A222FD4C1A9BB10428* ___sheet_0;
	int32_t ___styleSheetIndexInStack_1;
	StyleComplexSelector_tE46C29F65FDBA48D3152781187401C8B55B7D8AD* ___complexSelector_2;
};
struct SelectorMatchRecord_t1E93CDB54312CFB4A67768BB25ABB9AFB31BC5D7_marshaled_pinvoke
{
	StyleSheet_t6FAF43FCDB45BC6BED0522A222FD4C1A9BB10428* ___sheet_0;
	int32_t ___styleSheetIndexInStack_1;
	StyleComplexSelector_tE46C29F65FDBA48D3152781187401C8B55B7D8AD* ___complexSelector_2;
};
struct SelectorMatchRecord_t1E93CDB54312CFB4A67768BB25ABB9AFB31BC5D7_marshaled_com
{
	StyleSheet_t6FAF43FCDB45BC6BED0522A222FD4C1A9BB10428* ___sheet_0;
	int32_t ___styleSheetIndexInStack_1;
	StyleComplexSelector_tE46C29F65FDBA48D3152781187401C8B55B7D8AD* ___complexSelector_2;
};
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	float ___m_value_0;
};
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD 
{
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite_0;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite_1;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite_2;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite_3;
};
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD_marshaled_pinvoke
{
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite_0;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite_1;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite_2;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite_3;
};
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD_marshaled_com
{
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite_0;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite_1;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite_2;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite_3;
};
struct StylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF 
{
	int32_t ___U3CidU3Ek__BackingField_0;
	String_t* ___U3CnameU3Ek__BackingField_1;
};
struct StylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF_marshaled_pinvoke
{
	int32_t ___U3CidU3Ek__BackingField_0;
	char* ___U3CnameU3Ek__BackingField_1;
};
struct StylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF_marshaled_com
{
	int32_t ___U3CidU3Ek__BackingField_0;
	Il2CppChar* ___U3CnameU3Ek__BackingField_1;
};
struct StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470 
{
	String_t* ___m_Value_0;
	int32_t ___m_Type_1;
	RuntimeObject* ___tempData_2;
};
struct StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470_marshaled_pinvoke
{
	char* ___m_Value_0;
	int32_t ___m_Type_1;
	Il2CppIUnknown* ___tempData_2;
};
struct StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470_marshaled_com
{
	Il2CppChar* ___m_Value_0;
	int32_t ___m_Type_1;
	Il2CppIUnknown* ___tempData_2;
};
struct StyleSyntaxToken_tE4474F86F800F298F966FFDE947528453E769E0C 
{
	int32_t ___type_0;
	String_t* ___text_1;
	int32_t ___number_2;
};
struct StyleSyntaxToken_tE4474F86F800F298F966FFDE947528453E769E0C_marshaled_pinvoke
{
	int32_t ___type_0;
	char* ___text_1;
	int32_t ___number_2;
};
struct StyleSyntaxToken_tE4474F86F800F298F966FFDE947528453E769E0C_marshaled_com
{
	int32_t ___type_0;
	Il2CppChar* ___text_1;
	int32_t ___number_2;
};
struct StyleValueHandle_t5831643AAA7AD8C5C43A4498C5E0A2545F78227D 
{
	int32_t ___m_ValueType_0;
	int32_t ___valueIndex_1;
};
struct StyleValueManaged_t68DFBEC1594279E4DC56634FD5092318D1E9A5F4 
{
	int32_t ___id_0;
	int32_t ___keyword_1;
	RuntimeObject* ___value_2;
};
struct StyleValueManaged_t68DFBEC1594279E4DC56634FD5092318D1E9A5F4_marshaled_pinvoke
{
	int32_t ___id_0;
	int32_t ___keyword_1;
	Il2CppIUnknown* ___value_2;
};
struct StyleValueManaged_t68DFBEC1594279E4DC56634FD5092318D1E9A5F4_marshaled_com
{
	int32_t ___id_0;
	int32_t ___keyword_1;
	Il2CppIUnknown* ___value_2;
};
struct StyleVariable_t5D4DEC936102A13961F4F2C6214B83D6CDC56269 
{
	String_t* ___name_0;
	StyleSheet_t6FAF43FCDB45BC6BED0522A222FD4C1A9BB10428* ___sheet_1;
	StyleValueHandleU5BU5D_t66B7732469E9E30B1FB9A6E386315DAB36914ADE* ___handles_2;
};
struct StyleVariable_t5D4DEC936102A13961F4F2C6214B83D6CDC56269_marshaled_pinvoke
{
	char* ___name_0;
	StyleSheet_t6FAF43FCDB45BC6BED0522A222FD4C1A9BB10428* ___sheet_1;
	StyleValueHandle_t5831643AAA7AD8C5C43A4498C5E0A2545F78227D* ___handles_2;
};
struct StyleVariable_t5D4DEC936102A13961F4F2C6214B83D6CDC56269_marshaled_com
{
	Il2CppChar* ___name_0;
	StyleSheet_t6FAF43FCDB45BC6BED0522A222FD4C1A9BB10428* ___sheet_1;
	StyleValueHandle_t5831643AAA7AD8C5C43A4498C5E0A2545F78227D* ___handles_2;
};
struct TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC 
{
	uint8_t ___bold_0;
	uint8_t ___italic_1;
	uint8_t ___underline_2;
	uint8_t ___strikethrough_3;
	uint8_t ___highlight_4;
	uint8_t ___superscript_5;
	uint8_t ___subscript_6;
	uint8_t ___uppercase_7;
	uint8_t ___lowercase_8;
	uint8_t ___smallcaps_9;
};
struct TMP_FontWeightPair_t2835DA6BF1309AC6C817ECF878232CCF9DDB703E 
{
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___regularTypeface_0;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___italicTypeface_1;
};
struct TMP_FontWeightPair_t2835DA6BF1309AC6C817ECF878232CCF9DDB703E_marshaled_pinvoke
{
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___regularTypeface_0;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___italicTypeface_1;
};
struct TMP_FontWeightPair_t2835DA6BF1309AC6C817ECF878232CCF9DDB703E_marshaled_com
{
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___regularTypeface_0;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___italicTypeface_1;
};
struct TMP_LinkInfo_t9DC08E8BF8C5E8094AFF8C9FB3C251AF88B92DA6 
{
	TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ___textComponent_0;
	int32_t ___hashCode_1;
	int32_t ___linkIdFirstCharacterIndex_2;
	int32_t ___linkIdLength_3;
	int32_t ___linkTextfirstCharacterIndex_4;
	int32_t ___linkTextLength_5;
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___linkID_6;
};
struct TMP_LinkInfo_t9DC08E8BF8C5E8094AFF8C9FB3C251AF88B92DA6_marshaled_pinvoke
{
	TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ___textComponent_0;
	int32_t ___hashCode_1;
	int32_t ___linkIdFirstCharacterIndex_2;
	int32_t ___linkIdLength_3;
	int32_t ___linkTextfirstCharacterIndex_4;
	int32_t ___linkTextLength_5;
	uint8_t* ___linkID_6;
};
struct TMP_LinkInfo_t9DC08E8BF8C5E8094AFF8C9FB3C251AF88B92DA6_marshaled_com
{
	TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ___textComponent_0;
	int32_t ___hashCode_1;
	int32_t ___linkIdFirstCharacterIndex_2;
	int32_t ___linkIdLength_3;
	int32_t ___linkTextfirstCharacterIndex_4;
	int32_t ___linkTextLength_5;
	uint8_t* ___linkID_6;
};
struct TMP_Offset_t2262BE4E87D9662487777FF8FFE1B17B0E4438C6 
{
	float ___m_Left_0;
	float ___m_Right_1;
	float ___m_Top_2;
	float ___m_Bottom_3;
};
struct TMP_PageInfo_t062E56948480FAB066C168E14DC79CC83CC369B4 
{
	int32_t ___firstCharacterIndex_0;
	int32_t ___lastCharacterIndex_1;
	float ___ascender_2;
	float ___baseLine_3;
	float ___descender_4;
};
struct TMP_WordInfo_t825112AF0B76E4461F9C7DD336A02CC6A090A983 
{
	TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ___textComponent_0;
	int32_t ___firstCharacterIndex_1;
	int32_t ___lastCharacterIndex_2;
	int32_t ___characterCount_3;
};
struct TMP_WordInfo_t825112AF0B76E4461F9C7DD336A02CC6A090A983_marshaled_pinvoke
{
	TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ___textComponent_0;
	int32_t ___firstCharacterIndex_1;
	int32_t ___lastCharacterIndex_2;
	int32_t ___characterCount_3;
};
struct TMP_WordInfo_t825112AF0B76E4461F9C7DD336A02CC6A090A983_marshaled_com
{
	TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ___textComponent_0;
	int32_t ___firstCharacterIndex_1;
	int32_t ___lastCharacterIndex_2;
	int32_t ___characterCount_3;
};
struct TerrainTileCoord_t2181DDF40A8A428A84817957CB7FB19A314F4F09 
{
	int32_t ___tileX_0;
	int32_t ___tileZ_1;
};
struct TextProcessingElement_tDCD1EAF9D54829E796F4F9726D63B205344C7698 
{
	int32_t ___elementType_0;
	uint32_t ___unicode_1;
	int32_t ___stringIndex_2;
	int32_t ___length_3;
};
struct TextureId_tFF4B4AAE53408AB10B0B89CCA5F7B50CF2535E58 
{
	int32_t ___m_Index_0;
};
struct TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A 
{
	int64_t ____ticks_22;
};
struct TimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E 
{
	float ___m_Value_0;
	int32_t ___m_Unit_1;
};
struct TreeItem_t6B0F84E487FB869A51E1DA4987183127271F4F90 
{
	int32_t ___U3CidU3Ek__BackingField_0;
	int32_t ___U3CparentIdU3Ek__BackingField_1;
	RuntimeObject* ___U3CchildrenIdsU3Ek__BackingField_2;
};
struct TreeItem_t6B0F84E487FB869A51E1DA4987183127271F4F90_marshaled_pinvoke
{
	int32_t ___U3CidU3Ek__BackingField_0;
	int32_t ___U3CparentIdU3Ek__BackingField_1;
	RuntimeObject* ___U3CchildrenIdsU3Ek__BackingField_2;
};
struct TreeItem_t6B0F84E487FB869A51E1DA4987183127271F4F90_marshaled_com
{
	int32_t ___U3CidU3Ek__BackingField_0;
	int32_t ___U3CparentIdU3Ek__BackingField_1;
	RuntimeObject* ___U3CchildrenIdsU3Ek__BackingField_2;
};
struct UILineInfo_tC6FF4F85BD2316FADA2148A1789B3FF0B05A6CAC 
{
	int32_t ___startCharIdx_0;
	int32_t ___height_1;
	float ___topY_2;
	float ___leading_3;
};
struct UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455 
{
	uint16_t ___m_value_0;
};
struct UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B 
{
	uint32_t ___m_value_0;
};
struct UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF 
{
	uint64_t ___m_value_0;
};
struct UIntPtr_t 
{
	void* ____pointer_1;
};
struct UsageMapping_t8FC44EC8053F0AEDE686EC2C57944F0A6A3CE5DB 
{
	int32_t ___U3CUsageU3Ek__BackingField_0;
	int32_t ___U3CTouchU3Ek__BackingField_1;
	int32_t ___U3CButtonU3Ek__BackingField_2;
};
struct VRActiveActionSet_t_t75460FB6AD162CEE3E823907F444059DB792837C 
{
	uint64_t ___ulActionSet_0;
	uint64_t ___ulRestrictedToDevice_1;
	uint64_t ___ulSecondaryActionSet_2;
	uint32_t ___unPadding_3;
	int32_t ___nPriority_4;
};
struct VRControllerAxis_t_t7A458D676363300CD993C97644DD786720A9C7E4 
{
	float ___x_0;
	float ___y_1;
};
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 
{
	float ___x_0;
	float ___y_1;
};
struct Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A 
{
	int32_t ___m_X_0;
	int32_t ___m_Y_1;
};
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 
{
	float ___x_2;
	float ___y_3;
	float ___z_4;
};
struct Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 
{
	int32_t ___m_X_0;
	int32_t ___m_Y_1;
	int32_t ___m_Z_2;
};
struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 
{
	float ___x_1;
	float ___y_2;
	float ___z_3;
	float ___w_4;
};
struct VertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76 
{
	int32_t ___U3CattributeU3Ek__BackingField_0;
	int32_t ___U3CformatU3Ek__BackingField_1;
	int32_t ___U3CdimensionU3Ek__BackingField_2;
	int32_t ___U3CstreamU3Ek__BackingField_3;
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
struct WitEntityInfo_t9715AD316420F516F56031342F3AC0E665C2CB62 
{
	String_t* ___name_0;
	String_t* ___id_1;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___lookups_2;
	WitEntityRoleInfoU5BU5D_t04D4D146ECDA2EF9AB18EF592F203AE0463E1A3C* ___roles_3;
	WitEntityKeywordInfoU5BU5D_tF62D7B36A857239604E3BF89B6088F63129EF811* ___keywords_4;
};
struct WitEntityInfo_t9715AD316420F516F56031342F3AC0E665C2CB62_marshaled_pinvoke
{
	char* ___name_0;
	char* ___id_1;
	char** ___lookups_2;
	WitEntityRoleInfo_t444B640CBDE235AB703A9C4AE80477D9AF548C67_marshaled_pinvoke* ___roles_3;
	WitEntityKeywordInfo_tE0A290B8BFF00EF007649834C336D5DD48DA445B_marshaled_pinvoke* ___keywords_4;
};
struct WitEntityInfo_t9715AD316420F516F56031342F3AC0E665C2CB62_marshaled_com
{
	Il2CppChar* ___name_0;
	Il2CppChar* ___id_1;
	Il2CppChar** ___lookups_2;
	WitEntityRoleInfo_t444B640CBDE235AB703A9C4AE80477D9AF548C67_marshaled_com* ___roles_3;
	WitEntityKeywordInfo_tE0A290B8BFF00EF007649834C336D5DD48DA445B_marshaled_com* ___keywords_4;
};
struct WitEntityKeywordInfo_tE0A290B8BFF00EF007649834C336D5DD48DA445B 
{
	String_t* ___keyword_0;
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___synonyms_1;
};
struct WitEntityKeywordInfo_tE0A290B8BFF00EF007649834C336D5DD48DA445B_marshaled_pinvoke
{
	char* ___keyword_0;
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___synonyms_1;
};
struct WitEntityKeywordInfo_tE0A290B8BFF00EF007649834C336D5DD48DA445B_marshaled_com
{
	Il2CppChar* ___keyword_0;
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___synonyms_1;
};
struct WitEntityRoleInfo_t444B640CBDE235AB703A9C4AE80477D9AF548C67 
{
	String_t* ___name_0;
	String_t* ___id_1;
};
struct WitEntityRoleInfo_t444B640CBDE235AB703A9C4AE80477D9AF548C67_marshaled_pinvoke
{
	char* ___name_0;
	char* ___id_1;
};
struct WitEntityRoleInfo_t444B640CBDE235AB703A9C4AE80477D9AF548C67_marshaled_com
{
	Il2CppChar* ___name_0;
	Il2CppChar* ___id_1;
};
struct WitIntentEntityInfo_tCFB51DC37AF74C46DA5C1C16FF165B8011B20074 
{
	String_t* ___name_0;
	String_t* ___id_1;
};
struct WitIntentEntityInfo_tCFB51DC37AF74C46DA5C1C16FF165B8011B20074_marshaled_pinvoke
{
	char* ___name_0;
	char* ___id_1;
};
struct WitIntentEntityInfo_tCFB51DC37AF74C46DA5C1C16FF165B8011B20074_marshaled_com
{
	Il2CppChar* ___name_0;
	Il2CppChar* ___id_1;
};
struct WitIntentInfo_tB428004D9EC2F2E6130328B64B9F673EF7ACCA3D 
{
	String_t* ___id_0;
	String_t* ___name_1;
	WitIntentEntityInfoU5BU5D_tB13EBD648934DAC59EB3E49DE2C783E6919B7318* ___entities_2;
};
struct WitIntentInfo_tB428004D9EC2F2E6130328B64B9F673EF7ACCA3D_marshaled_pinvoke
{
	char* ___id_0;
	char* ___name_1;
	WitIntentEntityInfo_tCFB51DC37AF74C46DA5C1C16FF165B8011B20074_marshaled_pinvoke* ___entities_2;
};
struct WitIntentInfo_tB428004D9EC2F2E6130328B64B9F673EF7ACCA3D_marshaled_com
{
	Il2CppChar* ___id_0;
	Il2CppChar* ___name_1;
	WitIntentEntityInfo_tCFB51DC37AF74C46DA5C1C16FF165B8011B20074_marshaled_com* ___entities_2;
};
struct WitTraitValueInfo_t5757B1AD95655FB5A9A9CE8BCDA527DDCAB94397 
{
	String_t* ___id_0;
	String_t* ___value_1;
};
struct WitTraitValueInfo_t5757B1AD95655FB5A9A9CE8BCDA527DDCAB94397_marshaled_pinvoke
{
	char* ___id_0;
	char* ___value_1;
};
struct WitTraitValueInfo_t5757B1AD95655FB5A9A9CE8BCDA527DDCAB94397_marshaled_com
{
	Il2CppChar* ___id_0;
	Il2CppChar* ___value_1;
};
struct WitVoiceInfo_t87CF0A90E6DF0CB0CDD2B7F148C2975BFBDB1C6E 
{
	String_t* ___name_0;
	String_t* ___locale_1;
	String_t* ___gender_2;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___styles_3;
};
struct WitVoiceInfo_t87CF0A90E6DF0CB0CDD2B7F148C2975BFBDB1C6E_marshaled_pinvoke
{
	char* ___name_0;
	char* ___locale_1;
	char* ___gender_2;
	char** ___styles_3;
};
struct WitVoiceInfo_t87CF0A90E6DF0CB0CDD2B7F148C2975BFBDB1C6E_marshaled_com
{
	Il2CppChar* ___name_0;
	Il2CppChar* ___locale_1;
	Il2CppChar* ___gender_2;
	Il2CppChar** ___styles_3;
};
struct WordInfo_tA466206097891A5A2590896EE164AFC406EB060D 
{
	int32_t ___firstCharacterIndex_0;
	int32_t ___lastCharacterIndex_1;
	int32_t ___characterCount_2;
};
struct X509ChainStatus_t5A57DDA24AA1FCA9F2B8D70B767CDDF388E4A80D 
{
	int32_t ___status_0;
	String_t* ___info_1;
};
struct X509ChainStatus_t5A57DDA24AA1FCA9F2B8D70B767CDDF388E4A80D_marshaled_pinvoke
{
	int32_t ___status_0;
	char* ___info_1;
};
struct X509ChainStatus_t5A57DDA24AA1FCA9F2B8D70B767CDDF388E4A80D_marshaled_com
{
	int32_t ___status_0;
	Il2CppChar* ___info_1;
};
struct MatchContext_t04110FFA271D89A23BC1918BE657634A7DC06253 
{
	int32_t ___valueIndex_0;
	int32_t ___matchedVariableCount_1;
};
struct OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837 
{
	int32_t ___order_0;
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___callback_1;
};
struct OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837_marshaled_pinvoke
{
	int32_t ___order_0;
	Il2CppMethodPointer ___callback_1;
};
struct OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837_marshaled_com
{
	int32_t ___order_0;
	Il2CppMethodPointer ___callback_1;
};
struct Page_t04FE552A388BF55B12C8868E19589136957E00A5 
{
	uint16_t ___x_0;
	uint16_t ___y_1;
	int32_t ___freeSlots_2;
};
struct ovrKeyValuePair_t50C9F41DCEE0339FFEF82707DCE6CDBAF0BC18A2 
{
	String_t* ___key__0;
	int32_t ___valueType__1;
	String_t* ___stringValue__2;
	int32_t ___intValue__3;
	double ___doubleValue__4;
};
struct ovrKeyValuePair_t50C9F41DCEE0339FFEF82707DCE6CDBAF0BC18A2_marshaled_pinvoke
{
	char* ___key__0;
	int32_t ___valueType__1;
	char* ___stringValue__2;
	int32_t ___intValue__3;
	double ___doubleValue__4;
};
struct ovrKeyValuePair_t50C9F41DCEE0339FFEF82707DCE6CDBAF0BC18A2_marshaled_com
{
	Il2CppChar* ___key__0;
	int32_t ___valueType__1;
	Il2CppChar* ___stringValue__2;
	int32_t ___intValue__3;
	double ___doubleValue__4;
};
struct TableRange_tD242F3D62C818E84B6903C18A6CE33399672B497 
{
	int32_t ___Start_0;
	int32_t ___End_1;
	int32_t ___Count_2;
	int32_t ___IndexStart_3;
	int32_t ___IndexEnd_4;
};
struct RecognizedAttribute_t67AAD871D05C66CFF976B98E4492B979993FB7D3 
{
	String_t* ___m_name_0;
	int32_t ___m_token_1;
};
struct RecognizedAttribute_t67AAD871D05C66CFF976B98E4492B979993FB7D3_marshaled_pinvoke
{
	char* ___m_name_0;
	int32_t ___m_token_1;
};
struct RecognizedAttribute_t67AAD871D05C66CFF976B98E4492B979993FB7D3_marshaled_com
{
	Il2CppChar* ___m_name_0;
	int32_t ___m_token_1;
};
struct DispatchContext_tFA37790A5FF30508B0146B79E4FF1880EB82E455 
{
	uint32_t ___m_GateCount_0;
	Queue_1_t488F4FFC87B785BACAAF18A6B2E9307E5451DF68* ___m_Queue_1;
};
struct DispatchContext_tFA37790A5FF30508B0146B79E4FF1880EB82E455_marshaled_pinvoke
{
	uint32_t ___m_GateCount_0;
	Queue_1_t488F4FFC87B785BACAAF18A6B2E9307E5451DF68* ___m_Queue_1;
};
struct DispatchContext_tFA37790A5FF30508B0146B79E4FF1880EB82E455_marshaled_com
{
	uint32_t ___m_GateCount_0;
	Queue_1_t488F4FFC87B785BACAAF18A6B2E9307E5451DF68* ___m_Queue_1;
};
struct EventRecord_tEC2901C48A23F5AFE20A9E8D4F05F3799EA62BF2 
{
	EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C* ___m_Event_0;
	RuntimeObject* ___m_Panel_1;
};
struct EventRecord_tEC2901C48A23F5AFE20A9E8D4F05F3799EA62BF2_marshaled_pinvoke
{
	EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C* ___m_Event_0;
	RuntimeObject* ___m_Panel_1;
};
struct EventRecord_tEC2901C48A23F5AFE20A9E8D4F05F3799EA62BF2_marshaled_com
{
	EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C* ___m_Event_0;
	RuntimeObject* ___m_Panel_1;
};
struct DefaultEventInterests_tF62D361FCDFA26C0E0A55ECCD8C20A64B3F2D8F0 
{
	int32_t ___DefaultActionCategories_0;
	int32_t ___DefaultActionAtTargetCategories_1;
};
struct HandFingerState_tCD368E158E7154AEA9FA90A70EBE14F6F9B47821 
{
	FeatureStateProvider_2_t7473B268F0B5C2B630842C429A5C740B0C685793* ___StateProvider_0;
};
struct HandFingerState_tCD368E158E7154AEA9FA90A70EBE14F6F9B47821_marshaled_pinvoke
{
	FeatureStateProvider_2_t7473B268F0B5C2B630842C429A5C740B0C685793* ___StateProvider_0;
};
struct HandFingerState_tCD368E158E7154AEA9FA90A70EBE14F6F9B47821_marshaled_com
{
	FeatureStateProvider_2_t7473B268F0B5C2B630842C429A5C740B0C685793* ___StateProvider_0;
};
struct FingerStateThresholds_t0068D86C9EDCC20595DEA9A87E56581A39B520F6 
{
	int32_t ___Finger_0;
	FingerFeatureStateThresholds_t459407C9E4AC8B709598B5705F5DE1AB87F31324* ___StateThresholds_1;
};
struct FingerStateThresholds_t0068D86C9EDCC20595DEA9A87E56581A39B520F6_marshaled_pinvoke
{
	int32_t ___Finger_0;
	FingerFeatureStateThresholds_t459407C9E4AC8B709598B5705F5DE1AB87F31324* ___StateThresholds_1;
};
struct FingerStateThresholds_t0068D86C9EDCC20595DEA9A87E56581A39B520F6_marshaled_com
{
	int32_t ___Finger_0;
	FingerFeatureStateThresholds_t459407C9E4AC8B709598B5705F5DE1AB87F31324* ___StateThresholds_1;
};
struct FocusedElement_t1EE083A1C5276213C533A38C6B5DC02E9DE5CBEF 
{
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___m_SubTreeRoot_0;
	Focusable_t39F2BAF0AF6CA465BC2BEDAF9B5B2CF379B846D0* ___m_FocusedElement_1;
};
struct FocusedElement_t1EE083A1C5276213C533A38C6B5DC02E9DE5CBEF_marshaled_pinvoke
{
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___m_SubTreeRoot_0;
	Focusable_t39F2BAF0AF6CA465BC2BEDAF9B5B2CF379B846D0* ___m_FocusedElement_1;
};
struct FocusedElement_t1EE083A1C5276213C533A38C6B5DC02E9DE5CBEF_marshaled_com
{
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___m_SubTreeRoot_0;
	Focusable_t39F2BAF0AF6CA465BC2BEDAF9B5B2CF379B846D0* ___m_FocusedElement_1;
};
struct PositionInfo_tE11EBB7037E8A1793414D764D4E30414CFFADF07 
{
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___piece_0;
	int32_t ___pieceOwner_1;
	int32_t ___powerPieceOwner_2;
};
struct PositionInfo_tE11EBB7037E8A1793414D764D4E30414CFFADF07_marshaled_pinvoke
{
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___piece_0;
	int32_t ___pieceOwner_1;
	int32_t ___powerPieceOwner_2;
};
struct PositionInfo_tE11EBB7037E8A1793414D764D4E30414CFFADF07_marshaled_com
{
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___piece_0;
	int32_t ___pieceOwner_1;
	int32_t ___powerPieceOwner_2;
};
struct WeightedJoint_t3D198447BE932DA429537A3E7722D427D1ACE2A8 
{
	int32_t ___handJointId_0;
	float ___weight_1;
};
struct bucket_t3217998B0CD54EA2DEDD93DEF8556E72602C7D4E 
{
	RuntimeObject* ___key_0;
	RuntimeObject* ___val_1;
	int32_t ___hash_coll_2;
};
struct bucket_t3217998B0CD54EA2DEDD93DEF8556E72602C7D4E_marshaled_pinvoke
{
	Il2CppIUnknown* ___key_0;
	Il2CppIUnknown* ___val_1;
	int32_t ___hash_coll_2;
};
struct bucket_t3217998B0CD54EA2DEDD93DEF8556E72602C7D4E_marshaled_com
{
	Il2CppIUnknown* ___key_0;
	Il2CppIUnknown* ___val_1;
	int32_t ___hash_coll_2;
};
struct HebrewValue_tC21FD2DC21D49A9CC5EBCB7895A9431A5DF0801C 
{
	int16_t ___token_0;
	int16_t ___value_1;
};
struct InteractableLimits_tCD552ECEEB1DA33B43FBF90845969EE5CD5E9F50 
{
	int32_t ___MaxInteractors_0;
	int32_t ___MaxSelectingInteractors_1;
};
struct SortedColumnState_t24958C451ECBAA5C6C868EA4881A27E45DEEA1AA 
{
	SortColumnDescription_t278A693B84340D73A6FADCFB1521E313A80F9C37* ___columnDesc_0;
	int32_t ___direction_1;
};
struct SortedColumnState_t24958C451ECBAA5C6C868EA4881A27E45DEEA1AA_marshaled_pinvoke
{
	SortColumnDescription_t278A693B84340D73A6FADCFB1521E313A80F9C37* ___columnDesc_0;
	int32_t ___direction_1;
};
struct SortedColumnState_t24958C451ECBAA5C6C868EA4881A27E45DEEA1AA_marshaled_com
{
	SortColumnDescription_t278A693B84340D73A6FADCFB1521E313A80F9C37* ___columnDesc_0;
	int32_t ___direction_1;
};
struct MeshMaterial_t52CF0208BCA9BCF6873521E070104191B8C9FECF 
{
	MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* ___meshFilter_0;
	ONSPPropagationMaterialU5BU5D_t09366E3A22D05CEBD56F798F10E24B4E0126FE57* ___materials_1;
};
struct MeshMaterial_t52CF0208BCA9BCF6873521E070104191B8C9FECF_marshaled_pinvoke
{
	MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* ___meshFilter_0;
	ONSPPropagationMaterialU5BU5D_t09366E3A22D05CEBD56F798F10E24B4E0126FE57* ___materials_1;
};
struct MeshMaterial_t52CF0208BCA9BCF6873521E070104191B8C9FECF_marshaled_com
{
	MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* ___meshFilter_0;
	ONSPPropagationMaterialU5BU5D_t09366E3A22D05CEBD56F798F10E24B4E0126FE57* ___materials_1;
};
struct TerrainMaterial_tFCF08D696C9AD3BF9F739C43F453DEBD4A81E7D3 
{
	Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* ___terrain_0;
	ONSPPropagationMaterialU5BU5D_t09366E3A22D05CEBD56F798F10E24B4E0126FE57* ___materials_1;
	MeshU5BU5D_t178CA36422FC397211E68FB7E39C5B2F95619689* ___treePrototypeMeshes_2;
};
struct TerrainMaterial_tFCF08D696C9AD3BF9F739C43F453DEBD4A81E7D3_marshaled_pinvoke
{
	Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* ___terrain_0;
	ONSPPropagationMaterialU5BU5D_t09366E3A22D05CEBD56F798F10E24B4E0126FE57* ___materials_1;
	MeshU5BU5D_t178CA36422FC397211E68FB7E39C5B2F95619689* ___treePrototypeMeshes_2;
};
struct TerrainMaterial_tFCF08D696C9AD3BF9F739C43F453DEBD4A81E7D3_marshaled_com
{
	Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* ___terrain_0;
	ONSPPropagationMaterialU5BU5D_t09366E3A22D05CEBD56F798F10E24B4E0126FE57* ___materials_1;
	MeshU5BU5D_t178CA36422FC397211E68FB7E39C5B2F95619689* ___treePrototypeMeshes_2;
};
struct EyeFov_t8368071A02E61C883A69B780C84FF2EA8ECAAE03 
{
	float ___UpFov_0;
	float ___DownFov_1;
	float ___LeftFov_2;
	float ___RightFov_3;
};
struct DeferredPassthroughMeshAddition_t1619270756CACB83697DC5C91C352EEFE40ACB59 
{
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___gameObject_0;
	bool ___updateTransform_1;
};
struct DeferredPassthroughMeshAddition_t1619270756CACB83697DC5C91C352EEFE40ACB59_marshaled_pinvoke
{
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___gameObject_0;
	int32_t ___updateTransform_1;
};
struct DeferredPassthroughMeshAddition_t1619270756CACB83697DC5C91C352EEFE40ACB59_marshaled_com
{
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___gameObject_0;
	int32_t ___updateTransform_1;
};
struct TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 
{
	Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* ___itemStack_0;
	int32_t ___index_1;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_DefaultItem_2;
	int32_t ___m_Capacity_3;
	int32_t ___m_RolloverSize_4;
	int32_t ___m_Count_5;
};
struct TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 
{
	MaterialReferenceU5BU5D_t7491D335AB3E3E13CE9C0F5E931F396F6A02E1F2* ___itemStack_0;
	int32_t ___index_1;
	MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B ___m_DefaultItem_2;
	int32_t ___m_Capacity_3;
	int32_t ___m_RolloverSize_4;
	int32_t ___m_Count_5;
};
struct TextProcessingStack_1_t7868E818AC1E1B5FED21B76D5C309C9A04380B63 
{
	Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* ___itemStack_0;
	int32_t ___index_1;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_DefaultItem_2;
	int32_t ___m_Capacity_3;
	int32_t ___m_RolloverSize_4;
	int32_t ___m_Count_5;
};
struct TextProcessingStack_1_t0C74606C1B6C7817CA95F0DCA46B219CF6FB35CA 
{
	MaterialReferenceU5BU5D_t4A9B88114E223BD96CE5121053664023CE2DE07E* ___itemStack_0;
	int32_t ___index_1;
	MaterialReference_t86DB0799D5C82869D4FF0A4F59624AED6910FD26 ___m_DefaultItem_2;
	int32_t ___m_Capacity_3;
	int32_t ___m_RolloverSize_4;
	int32_t ___m_Count_5;
};
struct AppOverrideKeys_t_tF12972ED3C1C43982F75A38068EBB2460FCC870B 
{
	intptr_t ___pchKey_0;
	intptr_t ___pchValue_1;
};
struct BackgroundPosition_tF0822B29FC27A67205A9893EBE03D03B799B8B56 
{
	int32_t ___keyword_0;
	Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256 ___offset_1;
};
struct BackgroundSize_t809883E2D7BB1D8D85B4C3E1DBE189F187DB25E7 
{
	int32_t ___m_SizeType_0;
	Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256 ___m_X_1;
	Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256 ___m_Y_2;
};
struct Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Center_0;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Extents_1;
};
struct BoundsInt_t4E757DE5EFF9FCB42000F173360DDC63B5585485 
{
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___m_Position_0;
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___m_Size_1;
};
struct ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_NormalColor_0;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_HighlightedColor_1;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_PressedColor_2;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_SelectedColor_3;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_DisabledColor_4;
	float ___m_ColorMultiplier_5;
	float ___m_FadeDuration_6;
};
struct ColorOverride_t2C7C1E71F0FF6811037F06ABDA9717D5CCE03FC8 
{
	String_t* ___colorID_0;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___color_1;
};
struct ColorOverride_t2C7C1E71F0FF6811037F06ABDA9717D5CCE03FC8_marshaled_pinvoke
{
	char* ___colorID_0;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___color_1;
};
struct ColorOverride_t2C7C1E71F0FF6811037F06ABDA9717D5CCE03FC8_marshaled_com
{
	Il2CppChar* ___colorID_0;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___color_1;
};
struct ComputedStyle_t8B08CCCEE20525528B3FFDAC6D3F58F101AAF54C 
{
	StyleDataRef_1_tBB9987581539847AE5CCA2EA2349E05CDC9127FA ___inheritedData_0;
	StyleDataRef_1_t5330A6F4EAC0EAB88E3B9849D866AA23BB6BE5F4 ___layoutData_1;
	StyleDataRef_1_tF773E9CBC6DC0FEB38DF95A6F3F47AC49AE045B3 ___rareData_2;
	StyleDataRef_1_t1D59CCAB740BE6B330D5B5FDA9F67391800200B3 ___transformData_3;
	StyleDataRef_1_t6A7B146DD79EDF7F42CD8CCF3E411B40AA729B8E ___transitionData_4;
	StyleDataRef_1_t9CB834B90E638D92A3BE5123B0D3989697AA87FC ___visualData_5;
	YogaNode_t9EE7C2B7C0BD1299C28837B1A66CF4660E724C8B* ___yogaNode_6;
	Dictionary_2_t645C7B1DAE2D839B52A5E387C165CE13D5465B00* ___customProperties_7;
	int64_t ___matchingRulesHash_8;
	float ___dpiScaling_9;
	ComputedTransitionPropertyU5BU5D_t25B9E78F5276CDA297C8215C316452CAB8219E82* ___computedTransitions_10;
};
struct ComputedStyle_t8B08CCCEE20525528B3FFDAC6D3F58F101AAF54C_marshaled_pinvoke
{
	StyleDataRef_1_tBB9987581539847AE5CCA2EA2349E05CDC9127FA ___inheritedData_0;
	StyleDataRef_1_t5330A6F4EAC0EAB88E3B9849D866AA23BB6BE5F4 ___layoutData_1;
	StyleDataRef_1_tF773E9CBC6DC0FEB38DF95A6F3F47AC49AE045B3 ___rareData_2;
	StyleDataRef_1_t1D59CCAB740BE6B330D5B5FDA9F67391800200B3 ___transformData_3;
	StyleDataRef_1_t6A7B146DD79EDF7F42CD8CCF3E411B40AA729B8E ___transitionData_4;
	StyleDataRef_1_t9CB834B90E638D92A3BE5123B0D3989697AA87FC ___visualData_5;
	YogaNode_t9EE7C2B7C0BD1299C28837B1A66CF4660E724C8B* ___yogaNode_6;
	Dictionary_2_t645C7B1DAE2D839B52A5E387C165CE13D5465B00* ___customProperties_7;
	int64_t ___matchingRulesHash_8;
	float ___dpiScaling_9;
	ComputedTransitionProperty_tD8E4D8EB5DD69E063944F27A48D9263F4F1354E1_marshaled_pinvoke* ___computedTransitions_10;
};
struct ComputedStyle_t8B08CCCEE20525528B3FFDAC6D3F58F101AAF54C_marshaled_com
{
	StyleDataRef_1_tBB9987581539847AE5CCA2EA2349E05CDC9127FA ___inheritedData_0;
	StyleDataRef_1_t5330A6F4EAC0EAB88E3B9849D866AA23BB6BE5F4 ___layoutData_1;
	StyleDataRef_1_tF773E9CBC6DC0FEB38DF95A6F3F47AC49AE045B3 ___rareData_2;
	StyleDataRef_1_t1D59CCAB740BE6B330D5B5FDA9F67391800200B3 ___transformData_3;
	StyleDataRef_1_t6A7B146DD79EDF7F42CD8CCF3E411B40AA729B8E ___transitionData_4;
	StyleDataRef_1_t9CB834B90E638D92A3BE5123B0D3989697AA87FC ___visualData_5;
	YogaNode_t9EE7C2B7C0BD1299C28837B1A66CF4660E724C8B* ___yogaNode_6;
	Dictionary_2_t645C7B1DAE2D839B52A5E387C165CE13D5465B00* ___customProperties_7;
	int64_t ___matchingRulesHash_8;
	float ___dpiScaling_9;
	ComputedTransitionProperty_tD8E4D8EB5DD69E063944F27A48D9263F4F1354E1_marshaled_com* ___computedTransitions_10;
};
struct ContactPairHeader_tA8C64AAEEF017149E77A6600B10A10F1A1C5648B 
{
	int32_t ___m_BodyID_0;
	int32_t ___m_OtherBodyID_1;
	intptr_t ___m_StartPtr_2;
	uint32_t ___m_NbPairs_3;
	uint16_t ___m_Flags_4;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_RelativeVelocity_5;
};
struct ContactPoint_t241857959C0D517C21F541BB04B63FA6C1EAB3F9 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Point_0;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Normal_1;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Impulse_2;
	int32_t ___m_ThisColliderInstanceID_3;
	int32_t ___m_OtherColliderInstanceID_4;
	float ___m_Separation_5;
};
struct ContactPoint2D_t16A7EE2DDFB4FA3A09C6554E11F30CEDAEBFA801 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_Point_0;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_Normal_1;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_RelativeVelocity_2;
	float ___m_Separation_3;
	float ___m_NormalImpulse_4;
	float ___m_TangentImpulse_5;
	int32_t ___m_Collider_6;
	int32_t ___m_OtherCollider_7;
	int32_t ___m_Rigidbody_8;
	int32_t ___m_OtherRigidbody_9;
	int32_t ___m_Enabled_10;
};
struct ConvertMeshJobData_t35F3B601671C4880929BC30A858410B14459E3B1 
{
	intptr_t ___vertSrc_0;
	intptr_t ___vertDst_1;
	int32_t ___vertCount_2;
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___transform_3;
	int32_t ___transformUVs_4;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___xformClipPages_5;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___ids_6;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___addFlags_7;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___opacityPage_8;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___textCoreSettingsPage_9;
	int32_t ___isText_10;
	float ___textureId_11;
	intptr_t ___indexSrc_12;
	intptr_t ___indexDst_13;
	int32_t ___indexCount_14;
	int32_t ___indexOffset_15;
	int32_t ___flipIndices_16;
};
struct CopyClosingMeshJobData_t92845C1341A518A8D05CD9DCE53496BD70CF2044 
{
	intptr_t ___vertSrc_0;
	intptr_t ___vertDst_1;
	int32_t ___vertCount_2;
	intptr_t ___indexSrc_3;
	intptr_t ___indexDst_4;
	int32_t ___indexCount_5;
	int32_t ___indexOffset_6;
};
struct CullingSplit_tA645AE6542408220387BA7188513D7FEDBC1CAC0 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___sphereCenter_0;
	float ___sphereRadius_1;
	int32_t ___cullingPlaneOffset_2;
	int32_t ___cullingPlaneCount_3;
	float ___cascadeBlendCullingFactor_4;
	float ___nearPlane_5;
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___cullingMatrix_6;
};
struct CustomAttributeNamedArgument_t4EC1C2BB9943BEB7E77AC0870BE2A899E23B4E02 
{
	CustomAttributeTypedArgument_tAAA19ADE66B16A67D030C8C67D7ADB29A7BEC75F ___U3CTypedValueU3Ek__BackingField_0;
	bool ___U3CIsFieldU3Ek__BackingField_1;
	String_t* ___U3CMemberNameU3Ek__BackingField_2;
	Type_t* ____attributeType_3;
	MemberInfo_t* ____lazyMemberInfo_4;
};
struct CustomAttributeNamedArgument_t4EC1C2BB9943BEB7E77AC0870BE2A899E23B4E02_marshaled_pinvoke
{
	CustomAttributeTypedArgument_tAAA19ADE66B16A67D030C8C67D7ADB29A7BEC75F_marshaled_pinvoke ___U3CTypedValueU3Ek__BackingField_0;
	int32_t ___U3CIsFieldU3Ek__BackingField_1;
	char* ___U3CMemberNameU3Ek__BackingField_2;
	Type_t* ____attributeType_3;
	MemberInfo_t* ____lazyMemberInfo_4;
};
struct CustomAttributeNamedArgument_t4EC1C2BB9943BEB7E77AC0870BE2A899E23B4E02_marshaled_com
{
	CustomAttributeTypedArgument_tAAA19ADE66B16A67D030C8C67D7ADB29A7BEC75F_marshaled_com ___U3CTypedValueU3Ek__BackingField_0;
	int32_t ___U3CIsFieldU3Ek__BackingField_1;
	Il2CppChar* ___U3CMemberNameU3Ek__BackingField_2;
	Type_t* ____attributeType_3;
	MemberInfo_t* ____lazyMemberInfo_4;
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
struct Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___min_2;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___max_3;
};
struct Extents_t369FB2B84521A0229C2FA3D4C8592B14E07CEFE6 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___min_0;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___max_1;
};
struct GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC 
{
	intptr_t ___handle_0;
};
struct GfxUpdateBufferRange_t2991435FD0E056C19D7E3D4E524C13493F244B4C 
{
	uint32_t ___offsetFromWriteStart_0;
	uint32_t ___size_1;
	uintptr_t ___source_2;
};
struct Glyph_t700CF8EBE04ED4AEAB520885AAA1B309E02A103F  : public RuntimeObject
{
	uint32_t ___m_Index_0;
	GlyphMetrics_t6C1C65A891A6279A0EE807C436436B1E44F7AF1A ___m_Metrics_1;
	GlyphRect_tB6D225B9318A527A1CBC1B4078EB923398EB808D ___m_GlyphRect_2;
	float ___m_Scale_3;
	int32_t ___m_AtlasIndex_4;
	int32_t ___m_ClassDefinitionType_5;
};
struct Glyph_t700CF8EBE04ED4AEAB520885AAA1B309E02A103F_marshaled_pinvoke
{
	uint32_t ___m_Index_0;
	GlyphMetrics_t6C1C65A891A6279A0EE807C436436B1E44F7AF1A ___m_Metrics_1;
	GlyphRect_tB6D225B9318A527A1CBC1B4078EB923398EB808D ___m_GlyphRect_2;
	float ___m_Scale_3;
	int32_t ___m_AtlasIndex_4;
	int32_t ___m_ClassDefinitionType_5;
};
struct Glyph_t700CF8EBE04ED4AEAB520885AAA1B309E02A103F_marshaled_com
{
	uint32_t ___m_Index_0;
	GlyphMetrics_t6C1C65A891A6279A0EE807C436436B1E44F7AF1A ___m_Metrics_1;
	GlyphRect_tB6D225B9318A527A1CBC1B4078EB923398EB808D ___m_GlyphRect_2;
	float ___m_Scale_3;
	int32_t ___m_AtlasIndex_4;
	int32_t ___m_ClassDefinitionType_5;
};
struct GlyphAdjustmentRecord_tC7A1B2E0AC7C4ED9CDB8E95E48790A46B6F315F7 
{
	uint32_t ___m_GlyphIndex_0;
	GlyphValueRecord_t780927A39D46924E0D546A2AE5DDF1BB2B5A9C8E ___m_GlyphValueRecord_1;
};
struct GlyphMarshallingStruct_tB45F92185E1A4A7880004B36591D7C73E4A2B87C 
{
	uint32_t ___index_0;
	GlyphMetrics_t6C1C65A891A6279A0EE807C436436B1E44F7AF1A ___metrics_1;
	GlyphRect_tB6D225B9318A527A1CBC1B4078EB923398EB808D ___glyphRect_2;
	float ___scale_3;
	int32_t ___atlasIndex_4;
	int32_t ___classDefinitionType_5;
};
struct GradientColorKey_tBD03A613338639E3774A10265CC5F3619C13421A 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___color_0;
	float ___time_1;
};
struct GradientSettings_tADA3CAA17319C58811DE187298039CC950FBAAF3 
{
	int32_t ___gradientType_0;
	int32_t ___addressMode_1;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___radialFocus_2;
	RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8 ___location_3;
};
struct HandSphere_t0AFFAA1835C82924D0655FFF245620C2D055A994 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CPositionU3Ek__BackingField_0;
	float ___U3CRadiusU3Ek__BackingField_1;
	int32_t ___U3CJointU3Ek__BackingField_2;
};
struct HighlightState_tE4F50287E5E2E91D42AB77DEA281D88D3AD6A28B 
{
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___color_0;
	TMP_Offset_t2262BE4E87D9662487777FF8FFE1B17B0E4438C6 ___padding_1;
};
struct HighlightState_tFF5FE9065990F04A37FEC545A0024047F0ABD740 
{
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___color_0;
	Offset_tF4AF8F62C21FD6DCB5255F705A59CC10583E22C4 ___padding_1;
};
struct HmdQuad_t_t024B6D746F2FF3C1609895FB111FE853CBF7C78A 
{
	HmdVector3_t_tFE918AC51C0144DDA4C272AC67A8FF05052A4B2C ___vCorners0_0;
	HmdVector3_t_tFE918AC51C0144DDA4C272AC67A8FF05052A4B2C ___vCorners1_1;
	HmdVector3_t_tFE918AC51C0144DDA4C272AC67A8FF05052A4B2C ___vCorners2_2;
	HmdVector3_t_tFE918AC51C0144DDA4C272AC67A8FF05052A4B2C ___vCorners3_3;
};
struct JNINativeMethod_t92A9F760CD913D55613C0CD5A8CB4CB3F4722F59 
{
	String_t* ___name_0;
	String_t* ___signature_1;
	intptr_t ___fnPtr_2;
};
struct JNINativeMethod_t92A9F760CD913D55613C0CD5A8CB4CB3F4722F59_marshaled_pinvoke
{
	char* ___name_0;
	char* ___signature_1;
	intptr_t ___fnPtr_2;
};
struct JNINativeMethod_t92A9F760CD913D55613C0CD5A8CB4CB3F4722F59_marshaled_com
{
	Il2CppChar* ___name_0;
	Il2CppChar* ___signature_1;
	intptr_t ___fnPtr_2;
};
struct LightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21 
{
	int32_t ___instanceID_0;
	int32_t ___cookieID_1;
	float ___cookieScale_2;
	LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 ___color_3;
	LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 ___indirectColor_4;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___orientation_5;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position_6;
	float ___range_7;
	float ___coneAngle_8;
	float ___innerConeAngle_9;
	float ___shape0_10;
	float ___shape1_11;
	uint8_t ___type_12;
	uint8_t ___mode_13;
	uint8_t ___shadow_14;
	uint8_t ___falloff_15;
};
struct MarkToBaseAdjustmentRecord_t4BE0F5A88932146F70A2B521176BDA91A20D8607 
{
	uint32_t ___m_BaseGlyphID_0;
	GlyphAnchorPoint_t581FDCAD5A1D0F3B129968FAEF20C113AAB0BC08 ___m_BaseGlyphAnchorPoint_1;
	uint32_t ___m_MarkGlyphID_2;
	MarkPositionAdjustment_t2523798D56F14A93A080D9D1298498325A51F436 ___m_MarkPositionAdjustment_3;
};
struct MarkToMarkAdjustmentRecord_tD53618A3728435D5C904857DAC644EE27640807C 
{
	uint32_t ___m_BaseMarkGlyphID_0;
	GlyphAnchorPoint_t581FDCAD5A1D0F3B129968FAEF20C113AAB0BC08 ___m_BaseMarkGlyphAnchorPoint_1;
	uint32_t ___m_CombiningMarkGlyphID_2;
	MarkPositionAdjustment_t2523798D56F14A93A080D9D1298498325A51F436 ___m_CombiningMarkPositionAdjustment_3;
};
struct MaterialPropertyColor_t89BBD20BA93BE7FC0411AEFCBFA51EF1F166CE58 
{
	String_t* ___name_0;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___value_1;
};
struct MaterialPropertyColor_t89BBD20BA93BE7FC0411AEFCBFA51EF1F166CE58_marshaled_pinvoke
{
	char* ___name_0;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___value_1;
};
struct MaterialPropertyColor_t89BBD20BA93BE7FC0411AEFCBFA51EF1F166CE58_marshaled_com
{
	Il2CppChar* ___name_0;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___value_1;
};
struct MaterialPropertyVector_tA04CB61F4FFA72951DF8E545BDC4C3DFD93D816F 
{
	String_t* ___name_0;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___value_1;
};
struct MaterialPropertyVector_tA04CB61F4FFA72951DF8E545BDC4C3DFD93D816F_marshaled_pinvoke
{
	char* ___name_0;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___value_1;
};
struct MaterialPropertyVector_tA04CB61F4FFA72951DF8E545BDC4C3DFD93D816F_marshaled_com
{
	Il2CppChar* ___name_0;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___value_1;
};
#pragma pack(push, tp, 1)
struct MeshGroup_t91DC966DBE4224D95C2E8CC34761A45FD75F5856 
{
	uintptr_t ___indexOffset_0;
	uintptr_t ___faceCount_1;
	uint32_t ___faceType_2;
	intptr_t ___material_3;
};
#pragma pack(pop, tp)
struct ModifiableContactPair_t8D3CA3E20AF1718A5421A6098D633DDA67399960 
{
	intptr_t ___actor_0;
	intptr_t ___otherActor_1;
	intptr_t ___shape_2;
	intptr_t ___otherShape_3;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation_4;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position_5;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___otherRotation_6;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___otherPosition_7;
	int32_t ___numContacts_8;
	intptr_t ___contacts_9;
};
struct NudgeJobData_tC303DCF7D6A8683AA414D05AA13CB6FAD4BB4022 
{
	intptr_t ___src_0;
	intptr_t ___dst_1;
	int32_t ___count_2;
	intptr_t ___closingSrc_3;
	intptr_t ___closingDst_4;
	int32_t ___closingCount_5;
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___transform_6;
	int32_t ___vertsBeforeUVDisplacement_7;
	int32_t ___vertsAfterUVDisplacement_8;
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
struct Plane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Normal_1;
	float ___m_Distance_2;
};
struct PlayerLoopSystem_t8AED6BF1C8A309CAA6FF71AC91DD33BDDFF7CF1F 
{
	Type_t* ___type_0;
	PlayerLoopSystemU5BU5D_t07C04E53AAC3CDA17603E8BA1B41D7E1AC083C6D* ___subSystemList_1;
	UpdateFunction_t1C48B7EECBE47AC123A9D9D7D9D2A9EE951C56C4* ___updateDelegate_2;
	intptr_t ___updateFunction_3;
	intptr_t ___loopConditionFunction_4;
};
struct PlayerLoopSystem_t8AED6BF1C8A309CAA6FF71AC91DD33BDDFF7CF1F_marshaled_pinvoke
{
	Type_t* ___type_0;
	PlayerLoopSystem_t8AED6BF1C8A309CAA6FF71AC91DD33BDDFF7CF1F_marshaled_pinvoke* ___subSystemList_1;
	Il2CppMethodPointer ___updateDelegate_2;
	intptr_t ___updateFunction_3;
	intptr_t ___loopConditionFunction_4;
};
struct PlayerLoopSystem_t8AED6BF1C8A309CAA6FF71AC91DD33BDDFF7CF1F_marshaled_com
{
	Type_t* ___type_0;
	PlayerLoopSystem_t8AED6BF1C8A309CAA6FF71AC91DD33BDDFF7CF1F_marshaled_com* ___subSystemList_1;
	Il2CppMethodPointer ___updateDelegate_2;
	intptr_t ___updateFunction_3;
	intptr_t ___loopConditionFunction_4;
};
struct Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position_0;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation_1;
};
struct RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Point_0;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Normal_1;
	uint32_t ___m_FaceID_2;
	float ___m_Distance_3;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_UV_4;
	int32_t ___m_Collider_5;
};
struct RaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_Centroid_0;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_Point_1;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_Normal_2;
	float ___m_Distance_3;
	float ___m_Fraction_4;
	int32_t ___m_Collider_5;
};
struct RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023 
{
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_GameObject_0;
	BaseRaycaster_t7DC8158FD3CA0193455344379DD5FF7CD5F1F832* ___module_1;
	float ___distance_2;
	float ___index_3;
	int32_t ___depth_4;
	int32_t ___sortingGroupID_5;
	int32_t ___sortingGroupOrder_6;
	int32_t ___sortingLayer_7;
	int32_t ___sortingOrder_8;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldPosition_9;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldNormal_10;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___screenPosition_11;
	int32_t ___displayIndex_12;
};
struct RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023_marshaled_pinvoke
{
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_GameObject_0;
	BaseRaycaster_t7DC8158FD3CA0193455344379DD5FF7CD5F1F832* ___module_1;
	float ___distance_2;
	float ___index_3;
	int32_t ___depth_4;
	int32_t ___sortingGroupID_5;
	int32_t ___sortingGroupOrder_6;
	int32_t ___sortingLayer_7;
	int32_t ___sortingOrder_8;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldPosition_9;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldNormal_10;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___screenPosition_11;
	int32_t ___displayIndex_12;
};
struct RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023_marshaled_com
{
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_GameObject_0;
	BaseRaycaster_t7DC8158FD3CA0193455344379DD5FF7CD5F1F832* ___module_1;
	float ___distance_2;
	float ___index_3;
	int32_t ___depth_4;
	int32_t ___sortingGroupID_5;
	int32_t ___sortingGroupOrder_6;
	int32_t ___sortingLayer_7;
	int32_t ___sortingOrder_8;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldPosition_9;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldNormal_10;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___screenPosition_11;
	int32_t ___displayIndex_12;
};
struct ReleaseVelocityInformation_t70EFA79B39A6D6D6B6C771E9E043F61F13B0287D 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___LinearVelocity_0;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___AngularVelocity_1;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___Origin_2;
	bool ___IsSelectedVelocity_3;
};
struct ReleaseVelocityInformation_t70EFA79B39A6D6D6B6C771E9E043F61F13B0287D_marshaled_pinvoke
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___LinearVelocity_0;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___AngularVelocity_1;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___Origin_2;
	int32_t ___IsSelectedVelocity_3;
};
struct ReleaseVelocityInformation_t70EFA79B39A6D6D6B6C771E9E043F61F13B0287D_marshaled_com
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___LinearVelocity_0;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___AngularVelocity_1;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___Origin_2;
	int32_t ___IsSelectedVelocity_3;
};
struct Rotate_tE965CA0281A547AB38B881A3416FF97756D3F4D7 
{
	Angle_t0229F612898D65B3CC646C40A32D93D8A33C1DFC ___m_Angle_0;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Axis_1;
	bool ___m_IsNone_2;
};
struct Rotate_tE965CA0281A547AB38B881A3416FF97756D3F4D7_marshaled_pinvoke
{
	Angle_t0229F612898D65B3CC646C40A32D93D8A33C1DFC ___m_Angle_0;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Axis_1;
	int32_t ___m_IsNone_2;
};
struct Rotate_tE965CA0281A547AB38B881A3416FF97756D3F4D7_marshaled_com
{
	Angle_t0229F612898D65B3CC646C40A32D93D8A33C1DFC ___m_Angle_0;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Axis_1;
	int32_t ___m_IsNone_2;
};
struct Scale_t5594C69C1AC9398B57ABF6C4FA0D4E791B7A4DC7 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Scale_0;
	bool ___m_IsNone_1;
};
struct Scale_t5594C69C1AC9398B57ABF6C4FA0D4E791B7A4DC7_marshaled_pinvoke
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Scale_0;
	int32_t ___m_IsNone_1;
};
struct Scale_t5594C69C1AC9398B57ABF6C4FA0D4E791B7A4DC7_marshaled_com
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Scale_0;
	int32_t ___m_IsNone_1;
};
struct StylePropertyValue_tED32F617FABE99611B213BFCF9D1D909E7F141C2 
{
	StyleSheet_t6FAF43FCDB45BC6BED0522A222FD4C1A9BB10428* ___sheet_0;
	StyleValueHandle_t5831643AAA7AD8C5C43A4498C5E0A2545F78227D ___handle_1;
};
struct StylePropertyValue_tED32F617FABE99611B213BFCF9D1D909E7F141C2_marshaled_pinvoke
{
	StyleSheet_t6FAF43FCDB45BC6BED0522A222FD4C1A9BB10428* ___sheet_0;
	StyleValueHandle_t5831643AAA7AD8C5C43A4498C5E0A2545F78227D ___handle_1;
};
struct StylePropertyValue_tED32F617FABE99611B213BFCF9D1D909E7F141C2_marshaled_com
{
	StyleSheet_t6FAF43FCDB45BC6BED0522A222FD4C1A9BB10428* ___sheet_0;
	StyleValueHandle_t5831643AAA7AD8C5C43A4498C5E0A2545F78227D ___handle_1;
};
struct TMP_Vertex_t0FD80AE2515219689310A8F619A265667B530E1A 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position_0;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___uv_1;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___uv2_2;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___uv4_3;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___color_4;
};
struct TextShadow_t6BADF37AB90ABCB63859A225B58AC5A580950A05 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___offset_0;
	float ___blurRadius_1;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___color_2;
};
struct TextVertex_tF030A16DC67EAF3F6C9C9C0564D4B88758B173A9 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position_0;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___uv_1;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___uv2_2;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___color_3;
};
struct Texture_t_tFB45C121EC1C6016549D7A8194F11C1338E42196 
{
	intptr_t ___handle_0;
	int32_t ___eType_1;
	int32_t ___eColorSpace_2;
};
struct TrackedDevicePose_t_tEA070E1560BC50A88F8237D1DB91D90A91A02259 
{
	HmdMatrix34_t_t63D86814DA8F9D9DC7AA3143CE8C95454D5709F9 ___mDeviceToAbsoluteTracking_0;
	HmdVector3_t_tFE918AC51C0144DDA4C272AC67A8FF05052A4B2C ___vVelocity_1;
	HmdVector3_t_tFE918AC51C0144DDA4C272AC67A8FF05052A4B2C ___vAngularVelocity_2;
	int32_t ___eTrackingResult_3;
	bool ___bPoseIsValid_4;
	bool ___bDeviceIsConnected_5;
};
struct Transform3x4_t9F79FC0112A00D3FFD7AFAD2D10AD22DF929052F 
{
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___v0_0;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___v1_1;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___v2_2;
};
struct TransformOrigin_tD11A368A96C0771398EBB4E6D435318AC0EF8502 
{
	Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256 ___m_X_0;
	Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256 ___m_Y_1;
	float ___m_Z_2;
};
struct Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E 
{
	Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256 ___m_X_0;
	Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256 ___m_Y_1;
	float ___m_Z_2;
	bool ___m_isNone_3;
};
struct Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E_marshaled_pinvoke
{
	Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256 ___m_X_0;
	Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256 ___m_Y_1;
	float ___m_Z_2;
	int32_t ___m_isNone_3;
};
struct Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E_marshaled_com
{
	Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256 ___m_X_0;
	Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256 ___m_Y_1;
	float ___m_Z_2;
	int32_t ___m_isNone_3;
};
struct TreeInstance_t382B018173ED020660D262061EA9424682614F50 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position_0;
	float ___widthScale_1;
	float ___heightScale_2;
	float ___rotation_3;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___color_4;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___lightmapColor_5;
	int32_t ___prototypeIndex_6;
	float ___temporaryDistance_7;
};
struct TreeViewItemWrapper_t4475B9923345B2D51C29E1E5285A4F92FA65C839 
{
	TreeItem_t6B0F84E487FB869A51E1DA4987183127271F4F90 ___item_0;
	int32_t ___depth_1;
};
struct TreeViewItemWrapper_t4475B9923345B2D51C29E1E5285A4F92FA65C839_marshaled_pinvoke
{
	TreeItem_t6B0F84E487FB869A51E1DA4987183127271F4F90_marshaled_pinvoke ___item_0;
	int32_t ___depth_1;
};
struct TreeViewItemWrapper_t4475B9923345B2D51C29E1E5285A4F92FA65C839_marshaled_com
{
	TreeItem_t6B0F84E487FB869A51E1DA4987183127271F4F90_marshaled_com ___item_0;
	int32_t ___depth_1;
};
struct TubePoint_t0763BD8380C0EB98C229BA646C7116006FE0C33B 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position_0;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___direction_1;
	float ___relativeLength_2;
};
struct UICharInfo_t24C2EA0F2F3A938100C271891D9DEB015ABA5FBD 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___cursorPos_0;
	float ___charWidth_1;
};
struct UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position_0;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___normal_1;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___tangent_2;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___color_3;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___uv0_4;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___uv1_5;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___uv2_6;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___uv3_7;
};
struct VRBoneTransform_t_t6E518B1C0D77961AB6C91EC6F3A954B78570C094 
{
	HmdVector4_t_t7A9046D98A4A0BED4F1CB6A80C69A26D0DA3A2F2 ___position_0;
	HmdQuaternionf_t_t1C095CC1795A944384A381576561B2C53F1744D4 ___orientation_1;
};
struct VRControllerState_t_t50475AF703AB39117DE2C6CE266154309CD9BD4D 
{
	uint32_t ___unPacketNum_0;
	uint64_t ___ulButtonPressed_1;
	uint64_t ___ulButtonTouched_2;
	VRControllerAxis_t_t7A458D676363300CD993C97644DD786720A9C7E4 ___rAxis0_3;
	VRControllerAxis_t_t7A458D676363300CD993C97644DD786720A9C7E4 ___rAxis1_4;
	VRControllerAxis_t_t7A458D676363300CD993C97644DD786720A9C7E4 ___rAxis2_5;
	VRControllerAxis_t_t7A458D676363300CD993C97644DD786720A9C7E4 ___rAxis3_6;
	VRControllerAxis_t_t7A458D676363300CD993C97644DD786720A9C7E4 ___rAxis4_7;
};
struct VectorImageVertex_t9D42377517CC059BD40E2A626ECEBE0C94CA0948 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position_0;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___tint_1;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___uv_2;
	uint32_t ___settingIndex_3;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___flags_4;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___circle_5;
};
struct Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position_1;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___tint_2;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___uv_3;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___xformClipPages_4;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___ids_5;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___flags_6;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___opacityColorPages_7;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___settingIndex_8;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___circle_9;
	float ___textureId_10;
};
struct XRNodeState_t683158812A1D80A6BC73DB97405BB0B795A9111A 
{
	int32_t ___m_Type_0;
	int32_t ___m_AvailableFields_1;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Position_2;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___m_Rotation_3;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Velocity_4;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_AngularVelocity_5;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Acceleration_6;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_AngularAcceleration_7;
	int32_t ___m_Tracked_8;
	uint64_t ___m_UniqueID_9;
};
struct jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225 
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			bool ___z_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			bool ___z_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			int8_t ___b_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			int8_t ___b_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			Il2CppChar ___c_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			Il2CppChar ___c_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			int16_t ___s_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			int16_t ___s_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			int32_t ___i_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___i_4_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			int64_t ___j_5;
		};
		#pragma pack(pop, tp)
		struct
		{
			int64_t ___j_5_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			float ___f_6;
		};
		#pragma pack(pop, tp)
		struct
		{
			float ___f_6_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			double ___d_7;
		};
		#pragma pack(pop, tp)
		struct
		{
			double ___d_7_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			intptr_t ___l_8;
		};
		#pragma pack(pop, tp)
		struct
		{
			intptr_t ___l_8_forAlignmentOnly;
		};
	};
};
struct jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225_marshaled_pinvoke
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			int32_t ___z_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___z_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			int8_t ___b_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			int8_t ___b_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			uint8_t ___c_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint8_t ___c_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			int16_t ___s_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			int16_t ___s_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			int32_t ___i_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___i_4_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			int64_t ___j_5;
		};
		#pragma pack(pop, tp)
		struct
		{
			int64_t ___j_5_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			float ___f_6;
		};
		#pragma pack(pop, tp)
		struct
		{
			float ___f_6_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			double ___d_7;
		};
		#pragma pack(pop, tp)
		struct
		{
			double ___d_7_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			intptr_t ___l_8;
		};
		#pragma pack(pop, tp)
		struct
		{
			intptr_t ___l_8_forAlignmentOnly;
		};
	};
};
struct jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225_marshaled_com
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			int32_t ___z_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___z_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			int8_t ___b_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			int8_t ___b_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			uint8_t ___c_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint8_t ___c_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			int16_t ___s_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			int16_t ___s_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			int32_t ___i_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___i_4_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			int64_t ___j_5;
		};
		#pragma pack(pop, tp)
		struct
		{
			int64_t ___j_5_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			float ___f_6;
		};
		#pragma pack(pop, tp)
		struct
		{
			float ___f_6_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			double ___d_7;
		};
		#pragma pack(pop, tp)
		struct
		{
			double ___d_7_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			intptr_t ___l_8;
		};
		#pragma pack(pop, tp)
		struct
		{
			intptr_t ___l_8_forAlignmentOnly;
		};
	};
};
struct ovrMatchmakingCriterion_t321F40408551C625DC554D1389B354B9FC3B944C 
{
	String_t* ___key__0;
	int32_t ___importance__1;
	intptr_t ___parameterArray_2;
	uint32_t ___parameterArrayCount_3;
};
struct ovrMatchmakingCriterion_t321F40408551C625DC554D1389B354B9FC3B944C_marshaled_pinvoke
{
	char* ___key__0;
	int32_t ___importance__1;
	intptr_t ___parameterArray_2;
	uint32_t ___parameterArrayCount_3;
};
struct ovrMatchmakingCriterion_t321F40408551C625DC554D1389B354B9FC3B944C_marshaled_com
{
	Il2CppChar* ___key__0;
	int32_t ___importance__1;
	intptr_t ___parameterArray_2;
	uint32_t ___parameterArrayCount_3;
};
struct HandGrabInteractableData_t88B84E54A4502164521D6259F58E5909F700214F 
{
	List_1_t2F88DEA9F62FDBA84CCE0AC7F9551BF5BB75F360* ___poses_0;
	int32_t ___grabType_1;
	int32_t ___handAlignment_2;
	PoseMeasureParameters_t93F958B174ABC0A954B8A6B9B3DFA73DFE894363 ___scoringModifier_3;
	GrabbingRule_tBFBDE400621FCCCEB23EF9A44E42B11AE7DBF27D ___pinchGrabRules_4;
	GrabbingRule_tBFBDE400621FCCCEB23EF9A44E42B11AE7DBF27D ___palmGrabRules_5;
};
struct HandGrabInteractableData_t88B84E54A4502164521D6259F58E5909F700214F_marshaled_pinvoke
{
	List_1_t2F88DEA9F62FDBA84CCE0AC7F9551BF5BB75F360* ___poses_0;
	int32_t ___grabType_1;
	int32_t ___handAlignment_2;
	PoseMeasureParameters_t93F958B174ABC0A954B8A6B9B3DFA73DFE894363 ___scoringModifier_3;
	GrabbingRule_tBFBDE400621FCCCEB23EF9A44E42B11AE7DBF27D ___pinchGrabRules_4;
	GrabbingRule_tBFBDE400621FCCCEB23EF9A44E42B11AE7DBF27D ___palmGrabRules_5;
};
struct HandGrabInteractableData_t88B84E54A4502164521D6259F58E5909F700214F_marshaled_com
{
	List_1_t2F88DEA9F62FDBA84CCE0AC7F9551BF5BB75F360* ___poses_0;
	int32_t ___grabType_1;
	int32_t ___handAlignment_2;
	PoseMeasureParameters_t93F958B174ABC0A954B8A6B9B3DFA73DFE894363 ___scoringModifier_3;
	GrabbingRule_tBFBDE400621FCCCEB23EF9A44E42B11AE7DBF27D ___pinchGrabRules_4;
	GrabbingRule_tBFBDE400621FCCCEB23EF9A44E42B11AE7DBF27D ___palmGrabRules_5;
};
struct JointRotationFeatureState_t293BD5640481C36FBD0E01AB30998C1D1C1D5ADE 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___TargetAxis_0;
	float ___Amount_1;
};
struct JointVelocityFeatureState_tA17C290CDFB76352D9CEFC3E7B790E0CAEF22105 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___TargetVector_0;
	float ___Amount_1;
};
struct EyeRenderDesc_tBD4945227CDFEDEA8EF80B44FD8254E7727E4534 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___resolution_0;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___fov_1;
	EyeFov_t8368071A02E61C883A69B780C84FF2EA8ECAAE03 ___fullFov_2;
};
struct LayerTexture_tC30AD562815BEE6F403127387361FEC5154AD813 
{
	Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___appTexture_0;
	intptr_t ___appTexturePtr_1;
	TextureU5BU5D_t0C3F884241E8243E791A31B920CAA89212888E46* ___swapChain_2;
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___swapChainPtr_3;
};
struct LayerTexture_tC30AD562815BEE6F403127387361FEC5154AD813_marshaled_pinvoke
{
	Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___appTexture_0;
	intptr_t ___appTexturePtr_1;
	TextureU5BU5D_t0C3F884241E8243E791A31B920CAA89212888E46* ___swapChain_2;
	Il2CppSafeArray* ___swapChainPtr_3;
};
struct LayerTexture_tC30AD562815BEE6F403127387361FEC5154AD813_marshaled_com
{
	Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___appTexture_0;
	intptr_t ___appTexturePtr_1;
	TextureU5BU5D_t0C3F884241E8243E791A31B920CAA89212888E46* ___swapChain_2;
	Il2CppSafeArray* ___swapChainPtr_3;
};
struct TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D 
{
	HighlightStateU5BU5D_tA878A0AF1F4F52882ACD29515AADC277EE135622* ___itemStack_0;
	int32_t ___index_1;
	HighlightState_tE4F50287E5E2E91D42AB77DEA281D88D3AD6A28B ___m_DefaultItem_2;
	int32_t ___m_Capacity_3;
	int32_t ___m_RolloverSize_4;
	int32_t ___m_Count_5;
};
struct TextProcessingStack_1_tF3616757510D9631241E95596F10A4139420DA16 
{
	HighlightStateU5BU5D_tCF5677B4773947CE4C64B938B12AC50DDA347435* ___itemStack_0;
	int32_t ___index_1;
	HighlightState_tFF5FE9065990F04A37FEC545A0024047F0ABD740 ___m_DefaultItem_2;
	int32_t ___m_Capacity_3;
	int32_t ___m_RolloverSize_4;
	int32_t ___m_Count_5;
};
struct BezierControlPoint_tEB839A219399D39791E1DBA363249EB163EF2006 
{
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___pose_0;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___tangentPoint_1;
	bool ___disconnected_2;
};
struct BezierControlPoint_tEB839A219399D39791E1DBA363249EB163EF2006_marshaled_pinvoke
{
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___pose_0;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___tangentPoint_1;
	int32_t ___disconnected_2;
};
struct BezierControlPoint_tEB839A219399D39791E1DBA363249EB163EF2006_marshaled_com
{
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___pose_0;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___tangentPoint_1;
	int32_t ___disconnected_2;
};
struct GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E 
{
	GlyphAdjustmentRecord_tC7A1B2E0AC7C4ED9CDB8E95E48790A46B6F315F7 ___m_FirstAdjustmentRecord_0;
	GlyphAdjustmentRecord_tC7A1B2E0AC7C4ED9CDB8E95E48790A46B6F315F7 ___m_SecondAdjustmentRecord_1;
	int32_t ___m_FeatureLookupFlags_2;
};
struct HandSkeletonJoint_t3120B3D1CBB219AF904F1E0C239D0F4E3699DF50 
{
	int32_t ___parent_0;
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___pose_1;
	float ___radius_2;
};
struct LineInfo_t2BBD461B330C46ACA45596A8E72FEA4172F88CF5 
{
	int32_t ___controlCharacterCount_0;
	int32_t ___characterCount_1;
	int32_t ___visibleCharacterCount_2;
	int32_t ___spaceCount_3;
	int32_t ___visibleSpaceCount_4;
	int32_t ___wordCount_5;
	int32_t ___firstCharacterIndex_6;
	int32_t ___firstVisibleCharacterIndex_7;
	int32_t ___lastCharacterIndex_8;
	int32_t ___lastVisibleCharacterIndex_9;
	float ___length_10;
	float ___lineHeight_11;
	float ___ascender_12;
	float ___baseline_13;
	float ___descender_14;
	float ___maxAdvance_15;
	float ___width_16;
	float ___marginLeft_17;
	float ___marginRight_18;
	int32_t ___alignment_19;
	Extents_t369FB2B84521A0229C2FA3D4C8592B14E07CEFE6 ___lineExtents_20;
};
struct LocomotionEvent_tECDD51A234545203F40F068C91D2745873285642 
{
	int32_t ___U3CIdentifierU3Ek__BackingField_0;
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___U3CPoseU3Ek__BackingField_1;
	int32_t ___U3CTranslationU3Ek__BackingField_2;
	int32_t ___U3CRotationU3Ek__BackingField_3;
};
struct MeshInfo_tE55C4A8846CC2C399CCC3FE989476D987B86AB2F 
{
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___mesh_4;
	int32_t ___vertexCount_5;
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___vertices_6;
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___normals_7;
	Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* ___tangents_8;
	Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* ___uvs0_9;
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___uvs2_10;
	Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* ___colors32_11;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___triangles_12;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_13;
};
struct MeshInfo_tE55C4A8846CC2C399CCC3FE989476D987B86AB2F_marshaled_pinvoke
{
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___mesh_4;
	int32_t ___vertexCount_5;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___vertices_6;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___normals_7;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* ___tangents_8;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* ___uvs0_9;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* ___uvs2_10;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B* ___colors32_11;
	Il2CppSafeArray* ___triangles_12;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_13;
};
struct MeshInfo_tE55C4A8846CC2C399CCC3FE989476D987B86AB2F_marshaled_com
{
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___mesh_4;
	int32_t ___vertexCount_5;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___vertices_6;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___normals_7;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* ___tangents_8;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* ___uvs0_9;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* ___uvs2_10;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B* ___colors32_11;
	Il2CppSafeArray* ___triangles_12;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_13;
};
struct PlayableBinding_tB68B3BAC47F4F4C559640472174D5BEF93CB6AB4 
{
	String_t* ___m_StreamName_0;
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___m_SourceObject_1;
	Type_t* ___m_SourceBindingType_2;
	CreateOutputMethod_tD18AFE3B69E6DDD913D82D5FA1D5D909CEEC8509* ___m_CreateOutputMethod_3;
};
struct PlayableBinding_tB68B3BAC47F4F4C559640472174D5BEF93CB6AB4_marshaled_pinvoke
{
	char* ___m_StreamName_0;
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke ___m_SourceObject_1;
	Type_t* ___m_SourceBindingType_2;
	Il2CppMethodPointer ___m_CreateOutputMethod_3;
};
struct PlayableBinding_tB68B3BAC47F4F4C559640472174D5BEF93CB6AB4_marshaled_com
{
	Il2CppChar* ___m_StreamName_0;
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com* ___m_SourceObject_1;
	Type_t* ___m_SourceBindingType_2;
	Il2CppMethodPointer ___m_CreateOutputMethod_3;
};
struct StyleValue_t56307594EC04E04EFBCC3220595B4AAD66FF93C5 
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			int32_t ___id_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___id_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___keyword_1_OffsetPadding[4];
			int32_t ___keyword_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___keyword_1_OffsetPadding_forAlignmentOnly[4];
			int32_t ___keyword_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___number_2_OffsetPadding[8];
			float ___number_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___number_2_OffsetPadding_forAlignmentOnly[8];
			float ___number_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___length_3_OffsetPadding[8];
			Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256 ___length_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___length_3_OffsetPadding_forAlignmentOnly[8];
			Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256 ___length_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___color_4_OffsetPadding[8];
			Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___color_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___color_4_OffsetPadding_forAlignmentOnly[8];
			Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___color_4_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___resource_5_OffsetPadding[8];
			GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC ___resource_5;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___resource_5_OffsetPadding_forAlignmentOnly[8];
			GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC ___resource_5_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___position_6_OffsetPadding[8];
			BackgroundPosition_tF0822B29FC27A67205A9893EBE03D03B799B8B56 ___position_6;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___position_6_OffsetPadding_forAlignmentOnly[8];
			BackgroundPosition_tF0822B29FC27A67205A9893EBE03D03B799B8B56 ___position_6_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___repeat_7_OffsetPadding[8];
			BackgroundRepeat_t446EC7315DED2C6822F1047B7587C3018BFB277F ___repeat_7;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___repeat_7_OffsetPadding_forAlignmentOnly[8];
			BackgroundRepeat_t446EC7315DED2C6822F1047B7587C3018BFB277F ___repeat_7_forAlignmentOnly;
		};
	};
};
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};
struct TMP_CharacterInfo_t8B8FF32D6AACE251F2E7835AA5BC6608D535D9F8 
{
	Il2CppChar ___character_0;
	int32_t ___index_1;
	int32_t ___stringLength_2;
	int32_t ___elementType_3;
	TMP_TextElement_t262A55214F712D4274485ABE5676E5254B84D0A5* ___textElement_4;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_5;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___spriteAsset_6;
	int32_t ___spriteIndex_7;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_8;
	int32_t ___materialReferenceIndex_9;
	bool ___isUsingAlternateTypeface_10;
	float ___pointSize_11;
	int32_t ___lineNumber_12;
	int32_t ___pageNumber_13;
	int32_t ___vertexIndex_14;
	TMP_Vertex_t0FD80AE2515219689310A8F619A265667B530E1A ___vertex_BL_15;
	TMP_Vertex_t0FD80AE2515219689310A8F619A265667B530E1A ___vertex_TL_16;
	TMP_Vertex_t0FD80AE2515219689310A8F619A265667B530E1A ___vertex_TR_17;
	TMP_Vertex_t0FD80AE2515219689310A8F619A265667B530E1A ___vertex_BR_18;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___topLeft_19;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___bottomLeft_20;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___topRight_21;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___bottomRight_22;
	float ___origin_23;
	float ___xAdvance_24;
	float ___ascender_25;
	float ___baseLine_26;
	float ___descender_27;
	float ___adjustedAscender_28;
	float ___adjustedDescender_29;
	float ___aspectRatio_30;
	float ___scale_31;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___color_32;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___underlineColor_33;
	int32_t ___underlineVertexIndex_34;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___strikethroughColor_35;
	int32_t ___strikethroughVertexIndex_36;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___highlightColor_37;
	HighlightState_tE4F50287E5E2E91D42AB77DEA281D88D3AD6A28B ___highlightState_38;
	int32_t ___style_39;
	bool ___isVisible_40;
};
struct TMP_CharacterInfo_t8B8FF32D6AACE251F2E7835AA5BC6608D535D9F8_marshaled_pinvoke
{
	uint8_t ___character_0;
	int32_t ___index_1;
	int32_t ___stringLength_2;
	int32_t ___elementType_3;
	TMP_TextElement_t262A55214F712D4274485ABE5676E5254B84D0A5* ___textElement_4;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_5;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___spriteAsset_6;
	int32_t ___spriteIndex_7;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_8;
	int32_t ___materialReferenceIndex_9;
	int32_t ___isUsingAlternateTypeface_10;
	float ___pointSize_11;
	int32_t ___lineNumber_12;
	int32_t ___pageNumber_13;
	int32_t ___vertexIndex_14;
	TMP_Vertex_t0FD80AE2515219689310A8F619A265667B530E1A ___vertex_BL_15;
	TMP_Vertex_t0FD80AE2515219689310A8F619A265667B530E1A ___vertex_TL_16;
	TMP_Vertex_t0FD80AE2515219689310A8F619A265667B530E1A ___vertex_TR_17;
	TMP_Vertex_t0FD80AE2515219689310A8F619A265667B530E1A ___vertex_BR_18;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___topLeft_19;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___bottomLeft_20;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___topRight_21;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___bottomRight_22;
	float ___origin_23;
	float ___xAdvance_24;
	float ___ascender_25;
	float ___baseLine_26;
	float ___descender_27;
	float ___adjustedAscender_28;
	float ___adjustedDescender_29;
	float ___aspectRatio_30;
	float ___scale_31;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___color_32;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___underlineColor_33;
	int32_t ___underlineVertexIndex_34;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___strikethroughColor_35;
	int32_t ___strikethroughVertexIndex_36;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___highlightColor_37;
	HighlightState_tE4F50287E5E2E91D42AB77DEA281D88D3AD6A28B ___highlightState_38;
	int32_t ___style_39;
	int32_t ___isVisible_40;
};
struct TMP_CharacterInfo_t8B8FF32D6AACE251F2E7835AA5BC6608D535D9F8_marshaled_com
{
	uint8_t ___character_0;
	int32_t ___index_1;
	int32_t ___stringLength_2;
	int32_t ___elementType_3;
	TMP_TextElement_t262A55214F712D4274485ABE5676E5254B84D0A5* ___textElement_4;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_5;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___spriteAsset_6;
	int32_t ___spriteIndex_7;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_8;
	int32_t ___materialReferenceIndex_9;
	int32_t ___isUsingAlternateTypeface_10;
	float ___pointSize_11;
	int32_t ___lineNumber_12;
	int32_t ___pageNumber_13;
	int32_t ___vertexIndex_14;
	TMP_Vertex_t0FD80AE2515219689310A8F619A265667B530E1A ___vertex_BL_15;
	TMP_Vertex_t0FD80AE2515219689310A8F619A265667B530E1A ___vertex_TL_16;
	TMP_Vertex_t0FD80AE2515219689310A8F619A265667B530E1A ___vertex_TR_17;
	TMP_Vertex_t0FD80AE2515219689310A8F619A265667B530E1A ___vertex_BR_18;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___topLeft_19;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___bottomLeft_20;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___topRight_21;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___bottomRight_22;
	float ___origin_23;
	float ___xAdvance_24;
	float ___ascender_25;
	float ___baseLine_26;
	float ___descender_27;
	float ___adjustedAscender_28;
	float ___adjustedDescender_29;
	float ___aspectRatio_30;
	float ___scale_31;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___color_32;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___underlineColor_33;
	int32_t ___underlineVertexIndex_34;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___strikethroughColor_35;
	int32_t ___strikethroughVertexIndex_36;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___highlightColor_37;
	HighlightState_tE4F50287E5E2E91D42AB77DEA281D88D3AD6A28B ___highlightState_38;
	int32_t ___style_39;
	int32_t ___isVisible_40;
};
struct TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 
{
	int32_t ___controlCharacterCount_0;
	int32_t ___characterCount_1;
	int32_t ___visibleCharacterCount_2;
	int32_t ___spaceCount_3;
	int32_t ___wordCount_4;
	int32_t ___firstCharacterIndex_5;
	int32_t ___firstVisibleCharacterIndex_6;
	int32_t ___lastCharacterIndex_7;
	int32_t ___lastVisibleCharacterIndex_8;
	float ___length_9;
	float ___lineHeight_10;
	float ___ascender_11;
	float ___baseline_12;
	float ___descender_13;
	float ___maxAdvance_14;
	float ___width_15;
	float ___marginLeft_16;
	float ___marginRight_17;
	int32_t ___alignment_18;
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___lineExtents_19;
};
struct TMP_MeshInfo_t320C52212E9D672EBB5F5C18C3E0700AA33DD76B 
{
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___mesh_4;
	int32_t ___vertexCount_5;
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___vertices_6;
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___normals_7;
	Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* ___tangents_8;
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___uvs0_9;
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___uvs2_10;
	Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* ___colors32_11;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___triangles_12;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_13;
};
struct TMP_MeshInfo_t320C52212E9D672EBB5F5C18C3E0700AA33DD76B_marshaled_pinvoke
{
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___mesh_4;
	int32_t ___vertexCount_5;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___vertices_6;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___normals_7;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* ___tangents_8;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* ___uvs0_9;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* ___uvs2_10;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B* ___colors32_11;
	Il2CppSafeArray* ___triangles_12;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_13;
};
struct TMP_MeshInfo_t320C52212E9D672EBB5F5C18C3E0700AA33DD76B_marshaled_com
{
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___mesh_4;
	int32_t ___vertexCount_5;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___vertices_6;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___normals_7;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* ___tangents_8;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* ___uvs0_9;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* ___uvs2_10;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B* ___colors32_11;
	Il2CppSafeArray* ___triangles_12;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_13;
};
struct TextElementInfo_tDD7A12E319505510E0B350E342BD55F32AB5F976 
{
	Il2CppChar ___character_0;
	int32_t ___index_1;
	uint8_t ___elementType_2;
	int32_t ___stringLength_3;
	TextElement_tCEF567A8810788262275B39DC39CBA6EBE7472DA* ___textElement_4;
	Glyph_t700CF8EBE04ED4AEAB520885AAA1B309E02A103F* ___alternativeGlyph_5;
	FontAsset_t61A6446D934E582651044E33D250EA8D306AB958* ___fontAsset_6;
	SpriteAsset_t1D3CF1D9DC350A4690CB09DE228A8B59F2F02313* ___spriteAsset_7;
	int32_t ___spriteIndex_8;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_9;
	int32_t ___materialReferenceIndex_10;
	bool ___isUsingAlternateTypeface_11;
	float ___pointSize_12;
	int32_t ___lineNumber_13;
	int32_t ___pageNumber_14;
	int32_t ___vertexIndex_15;
	TextVertex_tF030A16DC67EAF3F6C9C9C0564D4B88758B173A9 ___vertexTopLeft_16;
	TextVertex_tF030A16DC67EAF3F6C9C9C0564D4B88758B173A9 ___vertexBottomLeft_17;
	TextVertex_tF030A16DC67EAF3F6C9C9C0564D4B88758B173A9 ___vertexTopRight_18;
	TextVertex_tF030A16DC67EAF3F6C9C9C0564D4B88758B173A9 ___vertexBottomRight_19;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___topLeft_20;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___bottomLeft_21;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___topRight_22;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___bottomRight_23;
	float ___origin_24;
	float ___ascender_25;
	float ___baseLine_26;
	float ___descender_27;
	float ___adjustedAscender_28;
	float ___adjustedDescender_29;
	float ___adjustedHorizontalAdvance_30;
	float ___xAdvance_31;
	float ___aspectRatio_32;
	float ___scale_33;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___color_34;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___underlineColor_35;
	int32_t ___underlineVertexIndex_36;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___strikethroughColor_37;
	int32_t ___strikethroughVertexIndex_38;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___highlightColor_39;
	HighlightState_tFF5FE9065990F04A37FEC545A0024047F0ABD740 ___highlightState_40;
	int32_t ___style_41;
	bool ___isVisible_42;
};
struct TextElementInfo_tDD7A12E319505510E0B350E342BD55F32AB5F976_marshaled_pinvoke
{
	uint8_t ___character_0;
	int32_t ___index_1;
	uint8_t ___elementType_2;
	int32_t ___stringLength_3;
	TextElement_tCEF567A8810788262275B39DC39CBA6EBE7472DA* ___textElement_4;
	Glyph_t700CF8EBE04ED4AEAB520885AAA1B309E02A103F_marshaled_pinvoke ___alternativeGlyph_5;
	FontAsset_t61A6446D934E582651044E33D250EA8D306AB958* ___fontAsset_6;
	SpriteAsset_t1D3CF1D9DC350A4690CB09DE228A8B59F2F02313* ___spriteAsset_7;
	int32_t ___spriteIndex_8;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_9;
	int32_t ___materialReferenceIndex_10;
	int32_t ___isUsingAlternateTypeface_11;
	float ___pointSize_12;
	int32_t ___lineNumber_13;
	int32_t ___pageNumber_14;
	int32_t ___vertexIndex_15;
	TextVertex_tF030A16DC67EAF3F6C9C9C0564D4B88758B173A9 ___vertexTopLeft_16;
	TextVertex_tF030A16DC67EAF3F6C9C9C0564D4B88758B173A9 ___vertexBottomLeft_17;
	TextVertex_tF030A16DC67EAF3F6C9C9C0564D4B88758B173A9 ___vertexTopRight_18;
	TextVertex_tF030A16DC67EAF3F6C9C9C0564D4B88758B173A9 ___vertexBottomRight_19;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___topLeft_20;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___bottomLeft_21;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___topRight_22;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___bottomRight_23;
	float ___origin_24;
	float ___ascender_25;
	float ___baseLine_26;
	float ___descender_27;
	float ___adjustedAscender_28;
	float ___adjustedDescender_29;
	float ___adjustedHorizontalAdvance_30;
	float ___xAdvance_31;
	float ___aspectRatio_32;
	float ___scale_33;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___color_34;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___underlineColor_35;
	int32_t ___underlineVertexIndex_36;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___strikethroughColor_37;
	int32_t ___strikethroughVertexIndex_38;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___highlightColor_39;
	HighlightState_tFF5FE9065990F04A37FEC545A0024047F0ABD740 ___highlightState_40;
	int32_t ___style_41;
	int32_t ___isVisible_42;
};
struct TextElementInfo_tDD7A12E319505510E0B350E342BD55F32AB5F976_marshaled_com
{
	uint8_t ___character_0;
	int32_t ___index_1;
	uint8_t ___elementType_2;
	int32_t ___stringLength_3;
	TextElement_tCEF567A8810788262275B39DC39CBA6EBE7472DA* ___textElement_4;
	Glyph_t700CF8EBE04ED4AEAB520885AAA1B309E02A103F_marshaled_com* ___alternativeGlyph_5;
	FontAsset_t61A6446D934E582651044E33D250EA8D306AB958* ___fontAsset_6;
	SpriteAsset_t1D3CF1D9DC350A4690CB09DE228A8B59F2F02313* ___spriteAsset_7;
	int32_t ___spriteIndex_8;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_9;
	int32_t ___materialReferenceIndex_10;
	int32_t ___isUsingAlternateTypeface_11;
	float ___pointSize_12;
	int32_t ___lineNumber_13;
	int32_t ___pageNumber_14;
	int32_t ___vertexIndex_15;
	TextVertex_tF030A16DC67EAF3F6C9C9C0564D4B88758B173A9 ___vertexTopLeft_16;
	TextVertex_tF030A16DC67EAF3F6C9C9C0564D4B88758B173A9 ___vertexBottomLeft_17;
	TextVertex_tF030A16DC67EAF3F6C9C9C0564D4B88758B173A9 ___vertexTopRight_18;
	TextVertex_tF030A16DC67EAF3F6C9C9C0564D4B88758B173A9 ___vertexBottomRight_19;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___topLeft_20;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___bottomLeft_21;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___topRight_22;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___bottomRight_23;
	float ___origin_24;
	float ___ascender_25;
	float ___baseLine_26;
	float ___descender_27;
	float ___adjustedAscender_28;
	float ___adjustedDescender_29;
	float ___adjustedHorizontalAdvance_30;
	float ___xAdvance_31;
	float ___aspectRatio_32;
	float ___scale_33;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___color_34;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___underlineColor_35;
	int32_t ___underlineVertexIndex_36;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___strikethroughColor_37;
	int32_t ___strikethroughVertexIndex_38;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___highlightColor_39;
	HighlightState_tFF5FE9065990F04A37FEC545A0024047F0ABD740 ___highlightState_40;
	int32_t ___style_41;
	int32_t ___isVisible_42;
};
struct RecorderStep_tBBC5B8F23E25DB03C112159F790737E94FC9D049 
{
	HandPose_t0B0F57FC79F74C9D20E54C6999A45D59FDDAC733* ___U3CRawHandPoseU3Ek__BackingField_0;
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___U3CGrabPointU3Ek__BackingField_1;
	Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* ___U3CItemU3Ek__BackingField_2;
	HandGrabInteractable_tAA4FA87F97EBE085B00C9989B64494E72E717127* ___interactable_3;
};
struct RecorderStep_tBBC5B8F23E25DB03C112159F790737E94FC9D049_marshaled_pinvoke
{
	HandPose_t0B0F57FC79F74C9D20E54C6999A45D59FDDAC733* ___U3CRawHandPoseU3Ek__BackingField_0;
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___U3CGrabPointU3Ek__BackingField_1;
	Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* ___U3CItemU3Ek__BackingField_2;
	HandGrabInteractable_tAA4FA87F97EBE085B00C9989B64494E72E717127* ___interactable_3;
};
struct RecorderStep_tBBC5B8F23E25DB03C112159F790737E94FC9D049_marshaled_com
{
	HandPose_t0B0F57FC79F74C9D20E54C6999A45D59FDDAC733* ___U3CRawHandPoseU3Ek__BackingField_0;
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___U3CGrabPointU3Ek__BackingField_1;
	Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* ___U3CItemU3Ek__BackingField_2;
	HandGrabInteractable_tAA4FA87F97EBE085B00C9989B64494E72E717127* ___interactable_3;
};
struct HandGrabPoseData_t11F9BA5BBF7956582AAB161FB4E982533FCC9B74 
{
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___gripPose_0;
	HandPose_t0B0F57FC79F74C9D20E54C6999A45D59FDDAC733* ___handPose_1;
	float ___scale_2;
};
struct HandGrabPoseData_t11F9BA5BBF7956582AAB161FB4E982533FCC9B74_marshaled_pinvoke
{
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___gripPose_0;
	HandPose_t0B0F57FC79F74C9D20E54C6999A45D59FDDAC733* ___handPose_1;
	float ___scale_2;
};
struct HandGrabPoseData_t11F9BA5BBF7956582AAB161FB4E982533FCC9B74_marshaled_com
{
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___gripPose_0;
	HandPose_t0B0F57FC79F74C9D20E54C6999A45D59FDDAC733* ___handPose_1;
	float ___scale_2;
};
struct OpenVRControllerDetails_t4828A712824373E205C1770EF9779F43484DBF0E 
{
	VRControllerState_t_t50475AF703AB39117DE2C6CE266154309CD9BD4D ___state_0;
	uint64_t ___controllerType_1;
	uint32_t ___deviceID_2;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___localPosition_3;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___localOrientation_4;
};
struct RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};
struct WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A 
{
	int32_t ___previous_WordBreak_0;
	int32_t ___total_CharacterCount_1;
	int32_t ___visible_CharacterCount_2;
	int32_t ___visible_SpriteCount_3;
	int32_t ___visible_LinkCount_4;
	int32_t ___firstCharacterIndex_5;
	int32_t ___firstVisibleCharacterIndex_6;
	int32_t ___lastCharacterIndex_7;
	int32_t ___lastVisibleCharIndex_8;
	int32_t ___lineNumber_9;
	float ___maxCapHeight_10;
	float ___maxAscender_11;
	float ___maxDescender_12;
	float ___startOfLineAscender_13;
	float ___maxLineAscender_14;
	float ___maxLineDescender_15;
	float ___pageAscender_16;
	int32_t ___horizontalAlignment_17;
	float ___marginLeft_18;
	float ___marginRight_19;
	float ___xAdvance_20;
	float ___preferredWidth_21;
	float ___preferredHeight_22;
	float ___previousLineScale_23;
	int32_t ___wordCount_24;
	int32_t ___fontStyle_25;
	int32_t ___italicAngle_26;
	float ___fontScaleMultiplier_27;
	float ___currentFontSize_28;
	float ___baselineOffset_29;
	float ___lineOffset_30;
	bool ___isDrivenLineSpacing_31;
	float ___glyphHorizontalAdvanceAdjustment_32;
	float ___cSpace_33;
	float ___mSpace_34;
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___textInfo_35;
	TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 ___lineInfo_36;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___vertexColor_37;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___underlineColor_38;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___strikethroughColor_39;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___highlightColor_40;
	TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC ___basicStyleStack_41;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___italicAngleStack_42;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___colorStack_43;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___underlineColorStack_44;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___strikethroughColorStack_45;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___highlightColorStack_46;
	TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D ___highlightStateStack_47;
	TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C ___colorGradientStack_48;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___sizeStack_49;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___indentStack_50;
	TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 ___fontWeightStack_51;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___styleStack_52;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___baselineStack_53;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___actionStack_54;
	TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 ___materialReferenceStack_55;
	TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 ___lineJustificationStack_56;
	int32_t ___spriteAnimationID_57;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___currentFontAsset_58;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___currentSpriteAsset_59;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___currentMaterial_60;
	int32_t ___currentMaterialIndex_61;
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___meshExtents_62;
	bool ___tagNoParsing_63;
	bool ___isNonBreakingSpace_64;
};
struct WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A_marshaled_pinvoke
{
	int32_t ___previous_WordBreak_0;
	int32_t ___total_CharacterCount_1;
	int32_t ___visible_CharacterCount_2;
	int32_t ___visible_SpriteCount_3;
	int32_t ___visible_LinkCount_4;
	int32_t ___firstCharacterIndex_5;
	int32_t ___firstVisibleCharacterIndex_6;
	int32_t ___lastCharacterIndex_7;
	int32_t ___lastVisibleCharIndex_8;
	int32_t ___lineNumber_9;
	float ___maxCapHeight_10;
	float ___maxAscender_11;
	float ___maxDescender_12;
	float ___startOfLineAscender_13;
	float ___maxLineAscender_14;
	float ___maxLineDescender_15;
	float ___pageAscender_16;
	int32_t ___horizontalAlignment_17;
	float ___marginLeft_18;
	float ___marginRight_19;
	float ___xAdvance_20;
	float ___preferredWidth_21;
	float ___preferredHeight_22;
	float ___previousLineScale_23;
	int32_t ___wordCount_24;
	int32_t ___fontStyle_25;
	int32_t ___italicAngle_26;
	float ___fontScaleMultiplier_27;
	float ___currentFontSize_28;
	float ___baselineOffset_29;
	float ___lineOffset_30;
	int32_t ___isDrivenLineSpacing_31;
	float ___glyphHorizontalAdvanceAdjustment_32;
	float ___cSpace_33;
	float ___mSpace_34;
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___textInfo_35;
	TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 ___lineInfo_36;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___vertexColor_37;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___underlineColor_38;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___strikethroughColor_39;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___highlightColor_40;
	TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC ___basicStyleStack_41;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___italicAngleStack_42;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___colorStack_43;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___underlineColorStack_44;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___strikethroughColorStack_45;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___highlightColorStack_46;
	TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D ___highlightStateStack_47;
	TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C ___colorGradientStack_48;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___sizeStack_49;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___indentStack_50;
	TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 ___fontWeightStack_51;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___styleStack_52;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___baselineStack_53;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___actionStack_54;
	TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 ___materialReferenceStack_55;
	TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 ___lineJustificationStack_56;
	int32_t ___spriteAnimationID_57;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___currentFontAsset_58;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___currentSpriteAsset_59;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___currentMaterial_60;
	int32_t ___currentMaterialIndex_61;
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___meshExtents_62;
	int32_t ___tagNoParsing_63;
	int32_t ___isNonBreakingSpace_64;
};
struct WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A_marshaled_com
{
	int32_t ___previous_WordBreak_0;
	int32_t ___total_CharacterCount_1;
	int32_t ___visible_CharacterCount_2;
	int32_t ___visible_SpriteCount_3;
	int32_t ___visible_LinkCount_4;
	int32_t ___firstCharacterIndex_5;
	int32_t ___firstVisibleCharacterIndex_6;
	int32_t ___lastCharacterIndex_7;
	int32_t ___lastVisibleCharIndex_8;
	int32_t ___lineNumber_9;
	float ___maxCapHeight_10;
	float ___maxAscender_11;
	float ___maxDescender_12;
	float ___startOfLineAscender_13;
	float ___maxLineAscender_14;
	float ___maxLineDescender_15;
	float ___pageAscender_16;
	int32_t ___horizontalAlignment_17;
	float ___marginLeft_18;
	float ___marginRight_19;
	float ___xAdvance_20;
	float ___preferredWidth_21;
	float ___preferredHeight_22;
	float ___previousLineScale_23;
	int32_t ___wordCount_24;
	int32_t ___fontStyle_25;
	int32_t ___italicAngle_26;
	float ___fontScaleMultiplier_27;
	float ___currentFontSize_28;
	float ___baselineOffset_29;
	float ___lineOffset_30;
	int32_t ___isDrivenLineSpacing_31;
	float ___glyphHorizontalAdvanceAdjustment_32;
	float ___cSpace_33;
	float ___mSpace_34;
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___textInfo_35;
	TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 ___lineInfo_36;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___vertexColor_37;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___underlineColor_38;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___strikethroughColor_39;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___highlightColor_40;
	TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC ___basicStyleStack_41;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___italicAngleStack_42;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___colorStack_43;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___underlineColorStack_44;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___strikethroughColorStack_45;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___highlightColorStack_46;
	TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D ___highlightStateStack_47;
	TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C ___colorGradientStack_48;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___sizeStack_49;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___indentStack_50;
	TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 ___fontWeightStack_51;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___styleStack_52;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___baselineStack_53;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___actionStack_54;
	TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 ___materialReferenceStack_55;
	TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 ___lineJustificationStack_56;
	int32_t ___spriteAnimationID_57;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___currentFontAsset_58;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___currentSpriteAsset_59;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___currentMaterial_60;
	int32_t ___currentMaterialIndex_61;
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___meshExtents_62;
	int32_t ___tagNoParsing_63;
	int32_t ___isNonBreakingSpace_64;
};
struct WordWrapState_tD71131CF008362DB9562FB9794AE9D9225D8F123 
{
	int32_t ___previousWordBreak_0;
	int32_t ___totalCharacterCount_1;
	int32_t ___visibleCharacterCount_2;
	int32_t ___visibleSpaceCount_3;
	int32_t ___visibleSpriteCount_4;
	int32_t ___visibleLinkCount_5;
	int32_t ___firstCharacterIndex_6;
	int32_t ___firstVisibleCharacterIndex_7;
	int32_t ___lastCharacterIndex_8;
	int32_t ___lastVisibleCharIndex_9;
	int32_t ___lineNumber_10;
	float ___maxCapHeight_11;
	float ___maxAscender_12;
	float ___maxDescender_13;
	float ___maxLineAscender_14;
	float ___maxLineDescender_15;
	float ___startOfLineAscender_16;
	float ___xAdvance_17;
	float ___preferredWidth_18;
	float ___preferredHeight_19;
	float ___previousLineScale_20;
	float ___pageAscender_21;
	int32_t ___wordCount_22;
	int32_t ___fontStyle_23;
	float ___fontScale_24;
	float ___fontScaleMultiplier_25;
	int32_t ___italicAngle_26;
	float ___currentFontSize_27;
	float ___baselineOffset_28;
	float ___lineOffset_29;
	TextInfo_t27E58E62A7552C66D38C175AF9D22622365F5D09* ___textInfo_30;
	LineInfo_t2BBD461B330C46ACA45596A8E72FEA4172F88CF5 ___lineInfo_31;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___vertexColor_32;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___underlineColor_33;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___strikethroughColor_34;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___highlightColor_35;
	HighlightState_tFF5FE9065990F04A37FEC545A0024047F0ABD740 ___highlightState_36;
	FontStyleStack_t63C77495F068E6DF762D6AF063A817E3709659A7 ___basicStyleStack_37;
	TextProcessingStack_1_t27834AAB14D26DC6519558C4C2574BA9C190D8E8 ___italicAngleStack_38;
	TextProcessingStack_1_t7868E818AC1E1B5FED21B76D5C309C9A04380B63 ___colorStack_39;
	TextProcessingStack_1_t7868E818AC1E1B5FED21B76D5C309C9A04380B63 ___underlineColorStack_40;
	TextProcessingStack_1_t7868E818AC1E1B5FED21B76D5C309C9A04380B63 ___strikethroughColorStack_41;
	TextProcessingStack_1_t7868E818AC1E1B5FED21B76D5C309C9A04380B63 ___highlightColorStack_42;
	TextProcessingStack_1_tF3616757510D9631241E95596F10A4139420DA16 ___highlightStateStack_43;
	TextProcessingStack_1_t0F39F088E8F8F6E18C3C463B2998ADC5B7A0513E ___colorGradientStack_44;
	TextProcessingStack_1_t9FC06E35259ADD291ED640FE7554D8C03EA5F555 ___sizeStack_45;
	TextProcessingStack_1_t9FC06E35259ADD291ED640FE7554D8C03EA5F555 ___indentStack_46;
	TextProcessingStack_1_t698B87CDD968C2046F57134BB3AB807EBFFD7790 ___fontWeightStack_47;
	TextProcessingStack_1_t27834AAB14D26DC6519558C4C2574BA9C190D8E8 ___styleStack_48;
	TextProcessingStack_1_t9FC06E35259ADD291ED640FE7554D8C03EA5F555 ___baselineStack_49;
	TextProcessingStack_1_t27834AAB14D26DC6519558C4C2574BA9C190D8E8 ___actionStack_50;
	TextProcessingStack_1_t0C74606C1B6C7817CA95F0DCA46B219CF6FB35CA ___materialReferenceStack_51;
	TextProcessingStack_1_tE63296B08A4C34E38D7EF3FFFA3470076B9E3A0F ___lineJustificationStack_52;
	int32_t ___lastBaseGlyphIndex_53;
	int32_t ___spriteAnimationId_54;
	FontAsset_t61A6446D934E582651044E33D250EA8D306AB958* ___currentFontAsset_55;
	SpriteAsset_t1D3CF1D9DC350A4690CB09DE228A8B59F2F02313* ___currentSpriteAsset_56;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___currentMaterial_57;
	int32_t ___currentMaterialIndex_58;
	Extents_t369FB2B84521A0229C2FA3D4C8592B14E07CEFE6 ___meshExtents_59;
	bool ___tagNoParsing_60;
	bool ___isNonBreakingSpace_61;
	bool ___isDrivenLineSpacing_62;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___fxScale_63;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___fxRotation_64;
};
struct WordWrapState_tD71131CF008362DB9562FB9794AE9D9225D8F123_marshaled_pinvoke
{
	int32_t ___previousWordBreak_0;
	int32_t ___totalCharacterCount_1;
	int32_t ___visibleCharacterCount_2;
	int32_t ___visibleSpaceCount_3;
	int32_t ___visibleSpriteCount_4;
	int32_t ___visibleLinkCount_5;
	int32_t ___firstCharacterIndex_6;
	int32_t ___firstVisibleCharacterIndex_7;
	int32_t ___lastCharacterIndex_8;
	int32_t ___lastVisibleCharIndex_9;
	int32_t ___lineNumber_10;
	float ___maxCapHeight_11;
	float ___maxAscender_12;
	float ___maxDescender_13;
	float ___maxLineAscender_14;
	float ___maxLineDescender_15;
	float ___startOfLineAscender_16;
	float ___xAdvance_17;
	float ___preferredWidth_18;
	float ___preferredHeight_19;
	float ___previousLineScale_20;
	float ___pageAscender_21;
	int32_t ___wordCount_22;
	int32_t ___fontStyle_23;
	float ___fontScale_24;
	float ___fontScaleMultiplier_25;
	int32_t ___italicAngle_26;
	float ___currentFontSize_27;
	float ___baselineOffset_28;
	float ___lineOffset_29;
	TextInfo_t27E58E62A7552C66D38C175AF9D22622365F5D09* ___textInfo_30;
	LineInfo_t2BBD461B330C46ACA45596A8E72FEA4172F88CF5 ___lineInfo_31;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___vertexColor_32;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___underlineColor_33;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___strikethroughColor_34;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___highlightColor_35;
	HighlightState_tFF5FE9065990F04A37FEC545A0024047F0ABD740 ___highlightState_36;
	FontStyleStack_t63C77495F068E6DF762D6AF063A817E3709659A7 ___basicStyleStack_37;
	TextProcessingStack_1_t27834AAB14D26DC6519558C4C2574BA9C190D8E8 ___italicAngleStack_38;
	TextProcessingStack_1_t7868E818AC1E1B5FED21B76D5C309C9A04380B63 ___colorStack_39;
	TextProcessingStack_1_t7868E818AC1E1B5FED21B76D5C309C9A04380B63 ___underlineColorStack_40;
	TextProcessingStack_1_t7868E818AC1E1B5FED21B76D5C309C9A04380B63 ___strikethroughColorStack_41;
	TextProcessingStack_1_t7868E818AC1E1B5FED21B76D5C309C9A04380B63 ___highlightColorStack_42;
	TextProcessingStack_1_tF3616757510D9631241E95596F10A4139420DA16 ___highlightStateStack_43;
	TextProcessingStack_1_t0F39F088E8F8F6E18C3C463B2998ADC5B7A0513E ___colorGradientStack_44;
	TextProcessingStack_1_t9FC06E35259ADD291ED640FE7554D8C03EA5F555 ___sizeStack_45;
	TextProcessingStack_1_t9FC06E35259ADD291ED640FE7554D8C03EA5F555 ___indentStack_46;
	TextProcessingStack_1_t698B87CDD968C2046F57134BB3AB807EBFFD7790 ___fontWeightStack_47;
	TextProcessingStack_1_t27834AAB14D26DC6519558C4C2574BA9C190D8E8 ___styleStack_48;
	TextProcessingStack_1_t9FC06E35259ADD291ED640FE7554D8C03EA5F555 ___baselineStack_49;
	TextProcessingStack_1_t27834AAB14D26DC6519558C4C2574BA9C190D8E8 ___actionStack_50;
	TextProcessingStack_1_t0C74606C1B6C7817CA95F0DCA46B219CF6FB35CA ___materialReferenceStack_51;
	TextProcessingStack_1_tE63296B08A4C34E38D7EF3FFFA3470076B9E3A0F ___lineJustificationStack_52;
	int32_t ___lastBaseGlyphIndex_53;
	int32_t ___spriteAnimationId_54;
	FontAsset_t61A6446D934E582651044E33D250EA8D306AB958* ___currentFontAsset_55;
	SpriteAsset_t1D3CF1D9DC350A4690CB09DE228A8B59F2F02313* ___currentSpriteAsset_56;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___currentMaterial_57;
	int32_t ___currentMaterialIndex_58;
	Extents_t369FB2B84521A0229C2FA3D4C8592B14E07CEFE6 ___meshExtents_59;
	int32_t ___tagNoParsing_60;
	int32_t ___isNonBreakingSpace_61;
	int32_t ___isDrivenLineSpacing_62;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___fxScale_63;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___fxRotation_64;
};
struct WordWrapState_tD71131CF008362DB9562FB9794AE9D9225D8F123_marshaled_com
{
	int32_t ___previousWordBreak_0;
	int32_t ___totalCharacterCount_1;
	int32_t ___visibleCharacterCount_2;
	int32_t ___visibleSpaceCount_3;
	int32_t ___visibleSpriteCount_4;
	int32_t ___visibleLinkCount_5;
	int32_t ___firstCharacterIndex_6;
	int32_t ___firstVisibleCharacterIndex_7;
	int32_t ___lastCharacterIndex_8;
	int32_t ___lastVisibleCharIndex_9;
	int32_t ___lineNumber_10;
	float ___maxCapHeight_11;
	float ___maxAscender_12;
	float ___maxDescender_13;
	float ___maxLineAscender_14;
	float ___maxLineDescender_15;
	float ___startOfLineAscender_16;
	float ___xAdvance_17;
	float ___preferredWidth_18;
	float ___preferredHeight_19;
	float ___previousLineScale_20;
	float ___pageAscender_21;
	int32_t ___wordCount_22;
	int32_t ___fontStyle_23;
	float ___fontScale_24;
	float ___fontScaleMultiplier_25;
	int32_t ___italicAngle_26;
	float ___currentFontSize_27;
	float ___baselineOffset_28;
	float ___lineOffset_29;
	TextInfo_t27E58E62A7552C66D38C175AF9D22622365F5D09* ___textInfo_30;
	LineInfo_t2BBD461B330C46ACA45596A8E72FEA4172F88CF5 ___lineInfo_31;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___vertexColor_32;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___underlineColor_33;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___strikethroughColor_34;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___highlightColor_35;
	HighlightState_tFF5FE9065990F04A37FEC545A0024047F0ABD740 ___highlightState_36;
	FontStyleStack_t63C77495F068E6DF762D6AF063A817E3709659A7 ___basicStyleStack_37;
	TextProcessingStack_1_t27834AAB14D26DC6519558C4C2574BA9C190D8E8 ___italicAngleStack_38;
	TextProcessingStack_1_t7868E818AC1E1B5FED21B76D5C309C9A04380B63 ___colorStack_39;
	TextProcessingStack_1_t7868E818AC1E1B5FED21B76D5C309C9A04380B63 ___underlineColorStack_40;
	TextProcessingStack_1_t7868E818AC1E1B5FED21B76D5C309C9A04380B63 ___strikethroughColorStack_41;
	TextProcessingStack_1_t7868E818AC1E1B5FED21B76D5C309C9A04380B63 ___highlightColorStack_42;
	TextProcessingStack_1_tF3616757510D9631241E95596F10A4139420DA16 ___highlightStateStack_43;
	TextProcessingStack_1_t0F39F088E8F8F6E18C3C463B2998ADC5B7A0513E ___colorGradientStack_44;
	TextProcessingStack_1_t9FC06E35259ADD291ED640FE7554D8C03EA5F555 ___sizeStack_45;
	TextProcessingStack_1_t9FC06E35259ADD291ED640FE7554D8C03EA5F555 ___indentStack_46;
	TextProcessingStack_1_t698B87CDD968C2046F57134BB3AB807EBFFD7790 ___fontWeightStack_47;
	TextProcessingStack_1_t27834AAB14D26DC6519558C4C2574BA9C190D8E8 ___styleStack_48;
	TextProcessingStack_1_t9FC06E35259ADD291ED640FE7554D8C03EA5F555 ___baselineStack_49;
	TextProcessingStack_1_t27834AAB14D26DC6519558C4C2574BA9C190D8E8 ___actionStack_50;
	TextProcessingStack_1_t0C74606C1B6C7817CA95F0DCA46B219CF6FB35CA ___materialReferenceStack_51;
	TextProcessingStack_1_tE63296B08A4C34E38D7EF3FFFA3470076B9E3A0F ___lineJustificationStack_52;
	int32_t ___lastBaseGlyphIndex_53;
	int32_t ___spriteAnimationId_54;
	FontAsset_t61A6446D934E582651044E33D250EA8D306AB958* ___currentFontAsset_55;
	SpriteAsset_t1D3CF1D9DC350A4690CB09DE228A8B59F2F02313* ___currentSpriteAsset_56;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___currentMaterial_57;
	int32_t ___currentMaterialIndex_58;
	Extents_t369FB2B84521A0229C2FA3D4C8592B14E07CEFE6 ___meshExtents_59;
	int32_t ___tagNoParsing_60;
	int32_t ___isNonBreakingSpace_61;
	int32_t ___isDrivenLineSpacing_62;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___fxScale_63;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___fxRotation_64;
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
struct DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_StaticFields
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___s_daysToMonth365_30;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___s_daysToMonth366_31;
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___MinValue_32;
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___MaxValue_33;
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___UnixEpoch_34;
};
struct Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_StaticFields
{
	Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___Zero_3;
	Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___One_4;
	Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___MinusOne_5;
	Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___MaxValue_6;
	Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___MinValue_7;
};
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_StaticFields
{
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___enumSeperatorCharArray_0;
};
struct GlyphRect_tB6D225B9318A527A1CBC1B4078EB923398EB808D_StaticFields
{
	GlyphRect_tB6D225B9318A527A1CBC1B4078EB923398EB808D ___s_ZeroGlyphRect_4;
};
struct Guid_t_StaticFields
{
	Guid_t ___Empty_0;
};
struct IntPtr_t_StaticFields
{
	intptr_t ___Zero_1;
};
struct Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_StaticFields
{
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___zeroMatrix_16;
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___identityMatrix_17;
};
struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_StaticFields
{
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___identityQuaternion_4;
};
struct TextureId_tFF4B4AAE53408AB10B0B89CCA5F7B50CF2535E58_StaticFields
{
	TextureId_tFF4B4AAE53408AB10B0B89CCA5F7B50CF2535E58 ___invalid_1;
};
struct TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_StaticFields
{
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___Zero_19;
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___MaxValue_20;
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___MinValue_21;
};
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___zeroVector_2;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___oneVector_3;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___upVector_4;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___downVector_5;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___leftVector_6;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___rightVector_7;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___positiveInfinityVector_8;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___negativeInfinityVector_9;
};
struct Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A_StaticFields
{
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___s_Zero_2;
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___s_One_3;
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___s_Up_4;
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___s_Down_5;
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___s_Left_6;
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___s_Right_7;
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
struct Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376_StaticFields
{
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___s_Zero_3;
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___s_One_4;
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___s_Up_5;
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___s_Down_6;
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___s_Left_7;
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___s_Right_8;
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___s_Forward_9;
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___s_Back_10;
};
struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_StaticFields
{
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___zeroVector_5;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___oneVector_6;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___positiveInfinityVector_7;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___negativeInfinityVector_8;
};
struct ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11_StaticFields
{
	ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 ___defaultColorBlock_7;
};
struct Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971_StaticFields
{
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___k_Identity_2;
};
struct UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207_StaticFields
{
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___s_DefaultColor_8;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___s_DefaultTangent_9;
	UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 ___simpleVert_10;
};
struct Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7_StaticFields
{
	float ___nearZ_0;
};
struct BezierControlPoint_tEB839A219399D39791E1DBA363249EB163EF2006_StaticFields
{
	BezierControlPoint_tEB839A219399D39791E1DBA363249EB163EF2006 ___DEFAULT_3;
};
struct MeshInfo_tE55C4A8846CC2C399CCC3FE989476D987B86AB2F_StaticFields
{
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___k_DefaultColor_0;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___k_DefaultNormal_1;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___k_DefaultTangent_2;
	Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 ___k_DefaultBounds_3;
};
struct PlayableBinding_tB68B3BAC47F4F4C559640472174D5BEF93CB6AB4_StaticFields
{
	PlayableBindingU5BU5D_tC50C3F27A8E4246488F7A5998CAABAC4811A92CD* ___None_4;
	double ___DefaultDuration_5;
};
struct TMP_MeshInfo_t320C52212E9D672EBB5F5C18C3E0700AA33DD76B_StaticFields
{
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___s_DefaultColor_0;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___s_DefaultNormal_1;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___s_DefaultTangent_2;
	Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 ___s_DefaultBounds_3;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif


IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ValueTuple_1_Equals_m4FDEAD4312CAE7423D5776C206910CCE04FD4EBF_gshared (ValueTuple_1_tBFF71B8F72F9D197DB09CFE88F0C8C7FE97CEF75* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ValueTuple_2_Equals_m261C495464AEFA4B590990E73EFA633AF5E10F2D_gshared (ValueTuple_2_tBC19AE73793D615D180F320AB46A541EF61AFBF9* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ValueTuple_2_Equals_m7FCB36270690D2C049E6E5AB2447ECBFA5EEA200_gshared (ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ValueTuple_3_Equals_m6DFA3503CF648A2897E38F729D5824BC36B560EC_gshared (ValueTuple_3_tC9C1846E6BD237797AE9B56D5138EE67C1B5FA01* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) ;

IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F (RuntimeArray* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* __this, String_t* ___0_message, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57 (RuntimeArray* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D (RuntimeObject* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC (RuntimeArray* __this, int32_t ___0_dimension, const RuntimeMethod* method) ;
inline bool ValueTuple_1_Equals_m4FDEAD4312CAE7423D5776C206910CCE04FD4EBF (ValueTuple_1_tBFF71B8F72F9D197DB09CFE88F0C8C7FE97CEF75* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method)
{
	return ((  bool (*) (ValueTuple_1_tBFF71B8F72F9D197DB09CFE88F0C8C7FE97CEF75*, RuntimeObject*, const RuntimeMethod*))ValueTuple_1_Equals_m4FDEAD4312CAE7423D5776C206910CCE04FD4EBF_gshared)(__this, ___0_obj, method);
}
inline bool ValueTuple_2_Equals_m261C495464AEFA4B590990E73EFA633AF5E10F2D (ValueTuple_2_tBC19AE73793D615D180F320AB46A541EF61AFBF9* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method)
{
	return ((  bool (*) (ValueTuple_2_tBC19AE73793D615D180F320AB46A541EF61AFBF9*, RuntimeObject*, const RuntimeMethod*))ValueTuple_2_Equals_m261C495464AEFA4B590990E73EFA633AF5E10F2D_gshared)(__this, ___0_obj, method);
}
inline bool ValueTuple_2_Equals_m7FCB36270690D2C049E6E5AB2447ECBFA5EEA200 (ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method)
{
	return ((  bool (*) (ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A*, RuntimeObject*, const RuntimeMethod*))ValueTuple_2_Equals_m7FCB36270690D2C049E6E5AB2447ECBFA5EEA200_gshared)(__this, ___0_obj, method);
}
inline bool ValueTuple_3_Equals_m6DFA3503CF648A2897E38F729D5824BC36B560EC (ValueTuple_3_tC9C1846E6BD237797AE9B56D5138EE67C1B5FA01* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method)
{
	return ((  bool (*) (ValueTuple_3_tC9C1846E6BD237797AE9B56D5138EE67C1B5FA01*, RuntimeObject*, const RuntimeMethod*))ValueTuple_3_Equals_m6DFA3503CF648A2897E38F729D5824BC36B560EC_gshared)(__this, ___0_obj, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Background_Equals_m4509BE1AEE0BDA35CA6D13D3DF5143B983A112F4 (Background_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BackgroundPosition_Equals_mDD3B816D0B5D8E7CA71656B6355AF31202C8BF15 (BackgroundPosition_tF0822B29FC27A67205A9893EBE03D03B799B8B56* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BackgroundRepeat_Equals_m6D8E3DFBF98F542791C89AEE086F8D27F5005294 (BackgroundRepeat_t446EC7315DED2C6822F1047B7587C3018BFB277F* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BackgroundSize_Equals_m5E49DFE8611E3DE6380DBD84ABDAF94073E8DDD2 (BackgroundSize_t809883E2D7BB1D8D85B4C3E1DBE189F187DB25E7* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BoneWeight_Equals_m854F30571680D394953146256B0245F294536B7B (BoneWeight_t7E7DACA0D0F56698E05EBBD839D1D343502EA11F* __this, RuntimeObject* ___0_other, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Boolean_Equals_m09E29FD8CDADF609FD8CF4145BFD4843174569A1 (bool* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Bounds_Equals_m93E0B9D24C73E57A6FABB9D312101D48183C88CC_inline (Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* __this, RuntimeObject* ___0_other, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool BoundsInt_Equals_m4C99DB2D3AD7DD9E0A75562F0AE24A14AE63587D_inline (BoundsInt_t4E757DE5EFF9FCB42000F173360DDC63B5585485* __this, RuntimeObject* ___0_other, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Byte_Equals_m07028241299798697EB8ECAD879B956B0C6F406C (uint8_t* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enum_Equals_m96B1058BA6312E23F31A5FBF594E96EB692EAF4E (RuntimeObject* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Char_Equals_mE997ECE5A71CDA6C3C9AFA6EF22EE50BED8EE8E0 (Il2CppChar* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Color_Equals_m24E409BF329F25774C6577F18EFD3DE1253684D6_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, RuntimeObject* ___0_other, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ColorBlock_Equals_m20D958BB28F6FDC12D612279AF6B50679C0C1E67 (ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CustomAttributeNamedArgument_Equals_mB1743B7F2494519A511010F4CB52FC26DF692151 (CustomAttributeNamedArgument_t4EC1C2BB9943BEB7E77AC0870BE2A899E23B4E02* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CustomAttributeTypedArgument_Equals_m88F54FC46D513F75E9C932B5AB529E7C3895D917 (CustomAttributeTypedArgument_tAAA19ADE66B16A67D030C8C67D7ADB29A7BEC75F* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DateTime_Equals_m0EF1F769B475D00BB907072ED7585E6A6ECAB133 (DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Decimal_Equals_mD06AE5E80DBE3651F359FA951A93B7EACAB1A4D8 (Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dimension_Equals_m4D328F20818BA59A8984495E22DE4CDEE086CC1D (Dimension_t5B1EAB500AE32C3789A2BCC4D43F7A29996DF3F8* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Double_Equals_m342E8F178661ABF8306D58D5F2130C58E0601DA3 (double* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool EasingFunction_Equals_m0EE1C44C3557C069C5AAFEBFC9877D1D37250873 (EasingFunction_t5197D3B06056326A8B5C96032CDEBD5D3BDCA7A4* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FontDefinition_Equals_m11510FB12876FE932360D45761D07A87E8494AF8 (FontDefinition_t65281B0E106365C28AD3F2525DE148719AEEA30C* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GCHandle_Equals_m27E0A4AD1CA71DA8071F816D6BFCD7556BC3E015 (GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC* __this, RuntimeObject* ___0_o, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GlyphPairAdjustmentRecord_Equals_m0F49F5D76C114BB660B7619A93247591AE323CFD (GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GlyphRect_Equals_mF3BA7FD405AFCEA9E2A6ED2423C27CC023A1289B (GlyphRect_tB6D225B9318A527A1CBC1B4078EB923398EB808D* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Guid_Equals_mC7349E47BF1CBCBFB4C9032C050DE54AAC10000B (Guid_t* __this, RuntimeObject* ___0_o, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Hash128_Equals_m28FADCC2F9A565AF152A53BCEEF88F798716B104 (Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HighlightState_Equals_m0317881F19561A64B9016A27C306FDB77460D165 (HighlightState_tE4F50287E5E2E91D42AB77DEA281D88D3AD6A28B* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HighlightState_Equals_mE0643D119E2942355F5FFED759BC329326E0C849 (HighlightState_tFF5FE9065990F04A37FEC545A0024047F0ABD740* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InputDevice_Equals_m206193EDB0C7A69C0BDFC821CE87B887C7BE0CAC (InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Int16_Equals_m4F5EDE255F1646CAF6CFD5052D80D56AAECB0512 (int16_t* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Int32_Equals_m089564150E8AF7C63B419427E2E57E3420659B1B (int32_t* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Int64_Equals_mDA5711B3D23B8CB282F34F73F1D7C0726D042FE8 (int64_t* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IntPtr_Equals_m0F39AB64A7BBD67190E745FF8334A5FC766CB26E (intptr_t* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Length_Equals_mFFEB4478ADE2C602ED8006F4043022862D677F82 (Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ManipulatorActivationFilter_Equals_m5BE53154869F0B26619DB5EEE913398BE351483E (ManipulatorActivationFilter_t866A0295DA75EA271B30BDC1F9EEA2C4FDEB1A81* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Matrix4x4_Equals_m35CFC5F304BB40EFFE011B92AA87B77CD8FF8F74_inline (Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* __this, RuntimeObject* ___0_other, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool OVRSpace_Equals_mC2BD02F8187F62CC9BD585105F927A2BEC24E8BA (OVRSpace_tDA5A6DB241624CD5712AC4A71E565BA171985B4D* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Pose_Equals_mE6D1524E4DDAAF86BF685A00FE9DCE0908A2A9D6 (Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Quaternion_Equals_mCF93B00BA4FCDDE6100918451343DB9A0583A0A0_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* __this, RuntimeObject* ___0_other, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Rect_Equals_mD7EB2046512E4A46524A7ED929F1C38A32C408F8_inline (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, RuntimeObject* ___0_other, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Rotate_Equals_m49F7E80F31B6317836CA1628FAA1D2194B5B6165 (Rotate_tE965CA0281A547AB38B881A3416FF97756D3F4D7* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SByte_Equals_m2436A58AA51169044BB6FAB4F3924C06037C34EF (int8_t* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Scale_Equals_mBC77FF15A4E956C17CECA719B2BF64C0F38B24FA (Scale_t5594C69C1AC9398B57ABF6C4FA0D4E791B7A4DC7* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Single_Equals_mC2B8FFE9D39B98FA2108771CCAFEC580873D054F (float* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool StylePropertyName_Equals_m189314376AD8AD19270E89E0402E6A378DAD0F56 (StylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF* __this, RuntimeObject* ___0_other, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TextShadow_Equals_m0BC39E39C12D4D49BC554184C02CC78B417289BE (TextShadow_t6BADF37AB90ABCB63859A225B58AC5A580950A05* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TextureId_Equals_m455DF7673CD85DCDDAA9AAC0F888DA8F8488081D (TextureId_tFF4B4AAE53408AB10B0B89CCA5F7B50CF2535E58* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TimeSpan_Equals_mFE37205C5F1295DD799B0EE207142BFA4222D47A (TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TimeValue_Equals_mA581A2F3D44993E0C780E6BC36C355875CDAB513 (TimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TransformOrigin_Equals_m1BB998DC4BF023074E997BDF9FFBB477B8D8C542 (TransformOrigin_tD11A368A96C0771398EBB4E6D435318AC0EF8502* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Translate_Equals_mEE5D86BA4C5C8C65EC0F226E081F49BA891792E1 (Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UInt16_Equals_mA21E8831A57BC983311BFEE7023615002FC50207 (uint16_t* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UInt32_Equals_mC516812849D8243A72D34D830D840A1F1E32795E (uint32_t* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UInt64_Equals_m175E7A6F2A4606A94579529400854317542648A9 (uint64_t* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector2_Equals_mA4E81D6FCE503DBD502BA499708344410F60DA4E_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, RuntimeObject* ___0_other, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector2Int_Equals_m6D91EFAA6B3254334436BD262A4547EA08281BA3_inline (Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A* __this, RuntimeObject* ___0_other, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector3_Equals_mB4BE43D5986864F5C22B919F2957E0309F10E3B4_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, RuntimeObject* ___0_other, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector3Int_Equals_m419967067E76BF0381E4CD8FE14DF5ED46ACFB02_inline (Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* __this, RuntimeObject* ___0_other, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector4_Equals_mC2596CA0F441D25DE7A9419BE66A8FA2DA355CB9_inline (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* __this, RuntimeObject* ___0_other, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VertexAttributeDescriptor_Equals_m6FBFEE42E1BAAAC2D38434EDF0906C5B76D56BE5 (VertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76* __this, RuntimeObject* ___0_other, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WitEntityInfo_Equals_m4CE8855D9523C6F2B2B5718A63E3E4C2AE580212 (WitEntityInfo_t9715AD316420F516F56031342F3AC0E665C2CB62* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WitEntityKeywordInfo_Equals_mE64ACAA27AC5ECB36A5C85BF91F96B72689EDAC6 (WitEntityKeywordInfo_tE0A290B8BFF00EF007649834C336D5DD48DA445B* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Bounds_Equals_m615135524315743D29633C33B6C8B16B754266DB_inline (Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* __this, Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 ___0_other, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool BoundsInt_Equals_m143E0673DA604FDEBBF40115D50BE078E343F1E6_inline (BoundsInt_t4E757DE5EFF9FCB42000F173360DDC63B5585485* __this, BoundsInt_t4E757DE5EFF9FCB42000F173360DDC63B5585485 ___0_other, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Color_Equals_mD297CAFFEBE9352C940873862FDF9A28F1F02435_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___0_other, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Matrix4x4_Equals_mDB0C4CCC58BE3E108F1A40BE8DBDCD62E284CC51_inline (Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* __this, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___0_other, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Quaternion_Equals_m25B95D8412B79CC7F8B34062BFAE662BD99578BE_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___0_other, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Rect_Equals_mE725DE506D3F1DB92F58B876BDA42AACD4D991B5_inline (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___0_other, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector2_Equals_mDF84D5ED14E018609C6A9C9BAE016C1B33BCFF4C_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_other, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector2Int_Equals_m32811BA0576C096D5EB5C0CFD8231478F17229A6_inline (Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A* __this, Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___0_other, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector3_Equals_mEDEAF86793D229455BBF9BA5B30DDF438D6CABC1_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_other, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector3Int_Equals_mE4D179C5001B77DE05E3E4BC39DC9F6AE441EBD8_inline (Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* __this, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___0_other, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector4_Equals_m73FAA65A1A565EE28D6C9385603829894B7D4392_inline (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* __this, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___0_other, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Bounds_get_center_m5B05F81CB835EB6DD8628FDA24B638F477984DC3_inline (Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Bounds_get_extents_mFE6DC407FCE2341BE2C750CB554055D211281D25_inline (Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Single_Equals_m97C79E2B80F39214DB3F7E714FF2BCA45A0A8BF9 (float* __this, float ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 Matrix4x4_GetColumn_m5CE079D7A69DE70E3144BADD20A1651C73A8D118 (Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* __this, int32_t ___0_index, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Rect_get_x_mB267B718E0D067F2BAE31BA477647FBF964916EB_inline (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Rect_get_y_mC733E8D49F3CE21B2A3D40A1B72D687F22C97F49_inline (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Rect_get_width_m620D67551372073C9C32C4C4624C2A5713F7F9A9_inline (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Rect_get_height_mE1AA6C6C725CCD2D317BD2157396D3CF7D47C9D8_inline (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Vector2Int_get_x_mA2CACB1B6E6B5AD0CCC32B2CD2EDCE3ECEB50576_inline (Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Vector2Int_get_y_m48454163ECF0B463FB5A16A0C4FC4B14DB0768B3_inline (Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector3Int_op_Equality_mB10073AF3B08421C46BF678C8FF64AAD62C83617_inline (Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___0_lhs, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___1_rhs, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Vector3Int_get_x_m21C268D2AA4C03CE35AA49DF6155347C9748054C_inline (Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Vector3Int_get_y_m42F43000F85D356557CAF03442273E7AA08F7F72_inline (Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Vector3Int_get_z_m96E180F866145E373F42358F2371EFF446F08AED_inline (Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisTimingData_t450BF01CAD1A7E919F8D4B1A54453DBF72EFB1AF_mF5EFCC2C05BE76573B7C2C10119129A2A2EFC3BF_gshared (RuntimeArray* __this, TimingData_t450BF01CAD1A7E919F8D4B1A54453DBF72EFB1AF ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	TimingData_t450BF01CAD1A7E919F8D4B1A54453DBF72EFB1AF V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		TimingData_t450BF01CAD1A7E919F8D4B1A54453DBF72EFB1AF L_5 = ___0_item;
		TimingData_t450BF01CAD1A7E919F8D4B1A54453DBF72EFB1AF L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<TimingData_t450BF01CAD1A7E919F8D4B1A54453DBF72EFB1AF> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisTimingData_tB9F07E55FE507E685F5E816A57949C38DCD6E263_mBBFA30A56BBA9862ABF5CE10045F25E637ABE522_gshared (RuntimeArray* __this, TimingData_tB9F07E55FE507E685F5E816A57949C38DCD6E263 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	TimingData_tB9F07E55FE507E685F5E816A57949C38DCD6E263 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		TimingData_tB9F07E55FE507E685F5E816A57949C38DCD6E263 L_5 = ___0_item;
		TimingData_tB9F07E55FE507E685F5E816A57949C38DCD6E263 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<TimingData_tB9F07E55FE507E685F5E816A57949C38DCD6E263> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisTimingData_t9FA7CAC423BACD236FBF49326BDD83D06DF44288_mCAFF84BAC5755FF64277F8411BC619490927707A_gshared (RuntimeArray* __this, TimingData_t9FA7CAC423BACD236FBF49326BDD83D06DF44288 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	TimingData_t9FA7CAC423BACD236FBF49326BDD83D06DF44288 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		TimingData_t9FA7CAC423BACD236FBF49326BDD83D06DF44288 L_5 = ___0_item;
		TimingData_t9FA7CAC423BACD236FBF49326BDD83D06DF44288 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<TimingData_t9FA7CAC423BACD236FBF49326BDD83D06DF44288> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisTimingData_tAC897652D090176D4DE63A3E05988D165A785F09_m6A452B953A2ECB8A5715F9E7C79CE6C504BAF236_gshared (RuntimeArray* __this, TimingData_tAC897652D090176D4DE63A3E05988D165A785F09 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	TimingData_tAC897652D090176D4DE63A3E05988D165A785F09 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		TimingData_tAC897652D090176D4DE63A3E05988D165A785F09 L_5 = ___0_item;
		TimingData_tAC897652D090176D4DE63A3E05988D165A785F09 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<TimingData_tAC897652D090176D4DE63A3E05988D165A785F09> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisTimingData_t9F5BE2ECB5F5FDBD04072B4459F64CB033858F11_m7E40E8E47583FFAAB4EAADF3CD1633DC3E6BDF93_gshared (RuntimeArray* __this, TimingData_t9F5BE2ECB5F5FDBD04072B4459F64CB033858F11 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	TimingData_t9F5BE2ECB5F5FDBD04072B4459F64CB033858F11 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		TimingData_t9F5BE2ECB5F5FDBD04072B4459F64CB033858F11 L_5 = ___0_item;
		TimingData_t9F5BE2ECB5F5FDBD04072B4459F64CB033858F11 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<TimingData_t9F5BE2ECB5F5FDBD04072B4459F64CB033858F11> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisTimingData_t098AB9F533C2FCADF814F88C5A5C79F7AF2FCF49_mFD2CA4C589760733FCAE4E4041FD5ED86B4DCC86_gshared (RuntimeArray* __this, TimingData_t098AB9F533C2FCADF814F88C5A5C79F7AF2FCF49 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	TimingData_t098AB9F533C2FCADF814F88C5A5C79F7AF2FCF49 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		TimingData_t098AB9F533C2FCADF814F88C5A5C79F7AF2FCF49 L_5 = ___0_item;
		TimingData_t098AB9F533C2FCADF814F88C5A5C79F7AF2FCF49 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<TimingData_t098AB9F533C2FCADF814F88C5A5C79F7AF2FCF49> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisTimingData_t7E5D81E44DD38F0BFB0350F529E539BB94000C7A_m3D117B6B1BD66D3CACBD5BBECA21BBECD2440646_gshared (RuntimeArray* __this, TimingData_t7E5D81E44DD38F0BFB0350F529E539BB94000C7A ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	TimingData_t7E5D81E44DD38F0BFB0350F529E539BB94000C7A V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		TimingData_t7E5D81E44DD38F0BFB0350F529E539BB94000C7A L_5 = ___0_item;
		TimingData_t7E5D81E44DD38F0BFB0350F529E539BB94000C7A L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<TimingData_t7E5D81E44DD38F0BFB0350F529E539BB94000C7A> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisTimingData_t70F8D4FF0A51972717A1ED53525241240EF457FE_mE05BFCE75C9BB1893E107F0E5E12872BA906C1FA_gshared (RuntimeArray* __this, TimingData_t70F8D4FF0A51972717A1ED53525241240EF457FE ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	TimingData_t70F8D4FF0A51972717A1ED53525241240EF457FE V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		TimingData_t70F8D4FF0A51972717A1ED53525241240EF457FE L_5 = ___0_item;
		TimingData_t70F8D4FF0A51972717A1ED53525241240EF457FE L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<TimingData_t70F8D4FF0A51972717A1ED53525241240EF457FE> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisTimingData_t0F88AE7B3D3525F39CAAED92C1983CCCF4961B92_mC907AFD87DA7051005DC4588BCBDCDF35779D183_gshared (RuntimeArray* __this, TimingData_t0F88AE7B3D3525F39CAAED92C1983CCCF4961B92 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	TimingData_t0F88AE7B3D3525F39CAAED92C1983CCCF4961B92 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		TimingData_t0F88AE7B3D3525F39CAAED92C1983CCCF4961B92 L_5 = ___0_item;
		TimingData_t0F88AE7B3D3525F39CAAED92C1983CCCF4961B92 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<TimingData_t0F88AE7B3D3525F39CAAED92C1983CCCF4961B92> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisTimingData_tD402D38A47B4E24DECDDD6B9725E579AD10131F3_mB249BD4E8699CC512780ED782971E812A1FCE96F_gshared (RuntimeArray* __this, TimingData_tD402D38A47B4E24DECDDD6B9725E579AD10131F3 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	TimingData_tD402D38A47B4E24DECDDD6B9725E579AD10131F3 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		TimingData_tD402D38A47B4E24DECDDD6B9725E579AD10131F3 L_5 = ___0_item;
		TimingData_tD402D38A47B4E24DECDDD6B9725E579AD10131F3 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<TimingData_tD402D38A47B4E24DECDDD6B9725E579AD10131F3> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisTreeViewItemData_1_t95D9721135F40D0DB3D221F8EB2543C396D350F4_mCDDC7CB553F6EAA6AB53D1A4ED6D7F9143D93B9B_gshared (RuntimeArray* __this, TreeViewItemData_1_t95D9721135F40D0DB3D221F8EB2543C396D350F4 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	TreeViewItemData_1_t95D9721135F40D0DB3D221F8EB2543C396D350F4 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		TreeViewItemData_1_t95D9721135F40D0DB3D221F8EB2543C396D350F4 L_5 = ___0_item;
		TreeViewItemData_1_t95D9721135F40D0DB3D221F8EB2543C396D350F4 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<TreeViewItemData_1_t95D9721135F40D0DB3D221F8EB2543C396D350F4> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisValueTuple_1_tBFF71B8F72F9D197DB09CFE88F0C8C7FE97CEF75_m6AFE4D60D9257F8D4716509A39FB315E1CD0C6E8_gshared (RuntimeArray* __this, ValueTuple_1_tBFF71B8F72F9D197DB09CFE88F0C8C7FE97CEF75 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	ValueTuple_1_tBFF71B8F72F9D197DB09CFE88F0C8C7FE97CEF75 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		ValueTuple_1_tBFF71B8F72F9D197DB09CFE88F0C8C7FE97CEF75 L_5 = ___0_item;
		ValueTuple_1_tBFF71B8F72F9D197DB09CFE88F0C8C7FE97CEF75 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		bool L_8;
		L_8 = ValueTuple_1_Equals_m4FDEAD4312CAE7423D5776C206910CCE04FD4EBF((&V_2), L_7, il2cpp_rgctx_method(method->rgctx_data, 2));
		if (!L_8)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_9 = V_1;
		int32_t L_10;
		L_10 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_9, L_10));
	}

IL_0061:
	{
		int32_t L_11 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_0065:
	{
		int32_t L_12 = V_1;
		int32_t L_13 = V_0;
		if ((((int32_t)L_12) < ((int32_t)L_13)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_14;
		L_14 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_14, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisValueTuple_2_tBC19AE73793D615D180F320AB46A541EF61AFBF9_m6C23FB75E551D59D0EF609989DA8F247284571BA_gshared (RuntimeArray* __this, ValueTuple_2_tBC19AE73793D615D180F320AB46A541EF61AFBF9 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	ValueTuple_2_tBC19AE73793D615D180F320AB46A541EF61AFBF9 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		ValueTuple_2_tBC19AE73793D615D180F320AB46A541EF61AFBF9 L_5 = ___0_item;
		ValueTuple_2_tBC19AE73793D615D180F320AB46A541EF61AFBF9 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		bool L_8;
		L_8 = ValueTuple_2_Equals_m261C495464AEFA4B590990E73EFA633AF5E10F2D((&V_2), L_7, il2cpp_rgctx_method(method->rgctx_data, 2));
		if (!L_8)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_9 = V_1;
		int32_t L_10;
		L_10 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_9, L_10));
	}

IL_0061:
	{
		int32_t L_11 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_0065:
	{
		int32_t L_12 = V_1;
		int32_t L_13 = V_0;
		if ((((int32_t)L_12) < ((int32_t)L_13)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_14;
		L_14 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_14, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A_m75F529A4B8E28B5BD04A45DADC69555B38D9976B_gshared (RuntimeArray* __this, ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A L_5 = ___0_item;
		ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		bool L_8;
		L_8 = ValueTuple_2_Equals_m7FCB36270690D2C049E6E5AB2447ECBFA5EEA200((&V_2), L_7, il2cpp_rgctx_method(method->rgctx_data, 2));
		if (!L_8)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_9 = V_1;
		int32_t L_10;
		L_10 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_9, L_10));
	}

IL_0061:
	{
		int32_t L_11 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_0065:
	{
		int32_t L_12 = V_1;
		int32_t L_13 = V_0;
		if ((((int32_t)L_12) < ((int32_t)L_13)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_14;
		L_14 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_14, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisValueTuple_3_tC9C1846E6BD237797AE9B56D5138EE67C1B5FA01_m545D87B975EB0F07BF00EA0A40B3BCD801DADF35_gshared (RuntimeArray* __this, ValueTuple_3_tC9C1846E6BD237797AE9B56D5138EE67C1B5FA01 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	ValueTuple_3_tC9C1846E6BD237797AE9B56D5138EE67C1B5FA01 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		ValueTuple_3_tC9C1846E6BD237797AE9B56D5138EE67C1B5FA01 L_5 = ___0_item;
		ValueTuple_3_tC9C1846E6BD237797AE9B56D5138EE67C1B5FA01 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		bool L_8;
		L_8 = ValueTuple_3_Equals_m6DFA3503CF648A2897E38F729D5824BC36B560EC((&V_2), L_7, il2cpp_rgctx_method(method->rgctx_data, 2));
		if (!L_8)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_9 = V_1;
		int32_t L_10;
		L_10 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_9, L_10));
	}

IL_0061:
	{
		int32_t L_11 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_0065:
	{
		int32_t L_12 = V_1;
		int32_t L_13 = V_0;
		if ((((int32_t)L_12) < ((int32_t)L_13)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_14;
		L_14 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_14, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisAppOverrideKeys_t_tF12972ED3C1C43982F75A38068EBB2460FCC870B_m276FFD9B06E00AEFDA9CA70B966E92EF91577AFC_gshared (RuntimeArray* __this, AppOverrideKeys_t_tF12972ED3C1C43982F75A38068EBB2460FCC870B ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	AppOverrideKeys_t_tF12972ED3C1C43982F75A38068EBB2460FCC870B V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		AppOverrideKeys_t_tF12972ED3C1C43982F75A38068EBB2460FCC870B L_5 = ___0_item;
		AppOverrideKeys_t_tF12972ED3C1C43982F75A38068EBB2460FCC870B L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<AppOverrideKeys_t_tF12972ED3C1C43982F75A38068EBB2460FCC870B> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisBackground_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8_m8358C92C1450D72177E531730283D7CE13675CF0_gshared (RuntimeArray* __this, Background_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Background_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		Background_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8 L_5 = ___0_item;
		Background_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		bool L_8;
		L_8 = Background_Equals_m4509BE1AEE0BDA35CA6D13D3DF5143B983A112F4((&V_2), L_7, il2cpp_rgctx_method(method->rgctx_data, 2));
		if (!L_8)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_9 = V_1;
		int32_t L_10;
		L_10 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_9, L_10));
	}

IL_0061:
	{
		int32_t L_11 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_0065:
	{
		int32_t L_12 = V_1;
		int32_t L_13 = V_0;
		if ((((int32_t)L_12) < ((int32_t)L_13)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_14;
		L_14 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_14, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisBackgroundPosition_tF0822B29FC27A67205A9893EBE03D03B799B8B56_m4A0E1A319B5EF579A016D751D8194EF0EDFE20F5_gshared (RuntimeArray* __this, BackgroundPosition_tF0822B29FC27A67205A9893EBE03D03B799B8B56 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	BackgroundPosition_tF0822B29FC27A67205A9893EBE03D03B799B8B56 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		BackgroundPosition_tF0822B29FC27A67205A9893EBE03D03B799B8B56 L_5 = ___0_item;
		BackgroundPosition_tF0822B29FC27A67205A9893EBE03D03B799B8B56 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		bool L_8;
		L_8 = BackgroundPosition_Equals_mDD3B816D0B5D8E7CA71656B6355AF31202C8BF15((&V_2), L_7, il2cpp_rgctx_method(method->rgctx_data, 2));
		if (!L_8)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_9 = V_1;
		int32_t L_10;
		L_10 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_9, L_10));
	}

IL_0061:
	{
		int32_t L_11 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_0065:
	{
		int32_t L_12 = V_1;
		int32_t L_13 = V_0;
		if ((((int32_t)L_12) < ((int32_t)L_13)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_14;
		L_14 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_14, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisBackgroundRepeat_t446EC7315DED2C6822F1047B7587C3018BFB277F_m99AA104AFBEC5480C517E7C3892857CD68150100_gshared (RuntimeArray* __this, BackgroundRepeat_t446EC7315DED2C6822F1047B7587C3018BFB277F ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	BackgroundRepeat_t446EC7315DED2C6822F1047B7587C3018BFB277F V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		BackgroundRepeat_t446EC7315DED2C6822F1047B7587C3018BFB277F L_5 = ___0_item;
		BackgroundRepeat_t446EC7315DED2C6822F1047B7587C3018BFB277F L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		bool L_8;
		L_8 = BackgroundRepeat_Equals_m6D8E3DFBF98F542791C89AEE086F8D27F5005294((&V_2), L_7, il2cpp_rgctx_method(method->rgctx_data, 2));
		if (!L_8)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_9 = V_1;
		int32_t L_10;
		L_10 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_9, L_10));
	}

IL_0061:
	{
		int32_t L_11 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_0065:
	{
		int32_t L_12 = V_1;
		int32_t L_13 = V_0;
		if ((((int32_t)L_12) < ((int32_t)L_13)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_14;
		L_14 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_14, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisBackgroundSize_t809883E2D7BB1D8D85B4C3E1DBE189F187DB25E7_mD5F5334D694E05EF096DC8AE5B3CBE6A0D866DEF_gshared (RuntimeArray* __this, BackgroundSize_t809883E2D7BB1D8D85B4C3E1DBE189F187DB25E7 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	BackgroundSize_t809883E2D7BB1D8D85B4C3E1DBE189F187DB25E7 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		BackgroundSize_t809883E2D7BB1D8D85B4C3E1DBE189F187DB25E7 L_5 = ___0_item;
		BackgroundSize_t809883E2D7BB1D8D85B4C3E1DBE189F187DB25E7 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		bool L_8;
		L_8 = BackgroundSize_Equals_m5E49DFE8611E3DE6380DBD84ABDAF94073E8DDD2((&V_2), L_7, il2cpp_rgctx_method(method->rgctx_data, 2));
		if (!L_8)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_9 = V_1;
		int32_t L_10;
		L_10 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_9, L_10));
	}

IL_0061:
	{
		int32_t L_11 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_0065:
	{
		int32_t L_12 = V_1;
		int32_t L_13 = V_0;
		if ((((int32_t)L_12) < ((int32_t)L_13)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_14;
		L_14 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_14, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisBatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D_m8066D444535E7D0C633FC4F74A356EEB2247CE84_gshared (RuntimeArray* __this, BatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	BatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		BatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D L_5 = ___0_item;
		BatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<BatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisBezierControlPoint_tEB839A219399D39791E1DBA363249EB163EF2006_mAEDF5662731B1A1811A43CFB1D8D81BB3DA3EFB9_gshared (RuntimeArray* __this, BezierControlPoint_tEB839A219399D39791E1DBA363249EB163EF2006 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	BezierControlPoint_tEB839A219399D39791E1DBA363249EB163EF2006 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		BezierControlPoint_tEB839A219399D39791E1DBA363249EB163EF2006 L_5 = ___0_item;
		BezierControlPoint_tEB839A219399D39791E1DBA363249EB163EF2006 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<BezierControlPoint_tEB839A219399D39791E1DBA363249EB163EF2006> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisBoneWeight_t7E7DACA0D0F56698E05EBBD839D1D343502EA11F_mE35F6CCBF1A3230CDBA811C855E559D310135A18_gshared (RuntimeArray* __this, BoneWeight_t7E7DACA0D0F56698E05EBBD839D1D343502EA11F ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	BoneWeight_t7E7DACA0D0F56698E05EBBD839D1D343502EA11F V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		BoneWeight_t7E7DACA0D0F56698E05EBBD839D1D343502EA11F L_5 = ___0_item;
		BoneWeight_t7E7DACA0D0F56698E05EBBD839D1D343502EA11F L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		bool L_8;
		L_8 = BoneWeight_Equals_m854F30571680D394953146256B0245F294536B7B((&V_2), L_7, il2cpp_rgctx_method(method->rgctx_data, 2));
		if (!L_8)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_9 = V_1;
		int32_t L_10;
		L_10 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_9, L_10));
	}

IL_0061:
	{
		int32_t L_11 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_0065:
	{
		int32_t L_12 = V_1;
		int32_t L_13 = V_0;
		if ((((int32_t)L_12) < ((int32_t)L_13)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_14;
		L_14 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_14, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC87E769305079EFCC983039A0E39CA9A04AEAC5E_gshared (RuntimeArray* __this, bool ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	bool V_2 = false;
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		bool L_5 = ___0_item;
		bool L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		bool L_8;
		L_8 = Boolean_Equals_m09E29FD8CDADF609FD8CF4145BFD4843174569A1((&V_2), L_7, il2cpp_rgctx_method(method->rgctx_data, 2));
		if (!L_8)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_9 = V_1;
		int32_t L_10;
		L_10 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_9, L_10));
	}

IL_0061:
	{
		int32_t L_11 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_0065:
	{
		int32_t L_12 = V_1;
		int32_t L_13 = V_0;
		if ((((int32_t)L_12) < ((int32_t)L_13)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_14;
		L_14 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_14, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisBounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3_mAB391D213B14F0106F9BDE45BA698F13D7EFC4BE_gshared (RuntimeArray* __this, Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 L_5 = ___0_item;
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		bool L_8;
		L_8 = Bounds_Equals_m93E0B9D24C73E57A6FABB9D312101D48183C88CC_inline((&V_2), L_7, il2cpp_rgctx_method(method->rgctx_data, 2));
		if (!L_8)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_9 = V_1;
		int32_t L_10;
		L_10 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_9, L_10));
	}

IL_0061:
	{
		int32_t L_11 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_0065:
	{
		int32_t L_12 = V_1;
		int32_t L_13 = V_0;
		if ((((int32_t)L_12) < ((int32_t)L_13)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_14;
		L_14 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_14, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisBoundsInt_t4E757DE5EFF9FCB42000F173360DDC63B5585485_mFA573FBB5F4BB83E8648BA3DE4633B0E8608FC21_gshared (RuntimeArray* __this, BoundsInt_t4E757DE5EFF9FCB42000F173360DDC63B5585485 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	BoundsInt_t4E757DE5EFF9FCB42000F173360DDC63B5585485 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		BoundsInt_t4E757DE5EFF9FCB42000F173360DDC63B5585485 L_5 = ___0_item;
		BoundsInt_t4E757DE5EFF9FCB42000F173360DDC63B5585485 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		bool L_8;
		L_8 = BoundsInt_Equals_m4C99DB2D3AD7DD9E0A75562F0AE24A14AE63587D_inline((&V_2), L_7, il2cpp_rgctx_method(method->rgctx_data, 2));
		if (!L_8)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_9 = V_1;
		int32_t L_10;
		L_10 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_9, L_10));
	}

IL_0061:
	{
		int32_t L_11 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_0065:
	{
		int32_t L_12 = V_1;
		int32_t L_13 = V_0;
		if ((((int32_t)L_12) < ((int32_t)L_13)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_14;
		L_14 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_14, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mCE10D1839B9BE00B7B1C67213057C3713F96C18D_gshared (RuntimeArray* __this, uint8_t ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	uint8_t V_2 = 0x0;
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		uint8_t L_5 = ___0_item;
		uint8_t L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		bool L_8;
		L_8 = Byte_Equals_m07028241299798697EB8ECAD879B956B0C6F406C((&V_2), L_7, il2cpp_rgctx_method(method->rgctx_data, 2));
		if (!L_8)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_9 = V_1;
		int32_t L_10;
		L_10 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_9, L_10));
	}

IL_0061:
	{
		int32_t L_11 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_0065:
	{
		int32_t L_12 = V_1;
		int32_t L_13 = V_0;
		if ((((int32_t)L_12) < ((int32_t)L_13)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_14;
		L_14 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_14, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisByteEnum_t2A464EF5EC59CBA8ED5E194537D5832168B1A692_m14BB1D757BB9803B3AAB68675A3DE7D612EA6C5A_gshared (RuntimeArray* __this, uint8_t ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	uint8_t V_2 = 0;
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		uint8_t L_5 = ___0_item;
		uint8_t L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<uint8_t> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = Enum_Equals_m96B1058BA6312E23F31A5FBF594E96EB692EAF4E((Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m1FCCCB520F96D3EB6C8B78C972942A981F26491F_gshared (RuntimeArray* __this, Il2CppChar ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Il2CppChar V_2 = 0x0;
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		Il2CppChar L_5 = ___0_item;
		Il2CppChar L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		bool L_8;
		L_8 = Char_Equals_mE997ECE5A71CDA6C3C9AFA6EF22EE50BED8EE8E0((&V_2), L_7, il2cpp_rgctx_method(method->rgctx_data, 2));
		if (!L_8)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_9 = V_1;
		int32_t L_10;
		L_10 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_9, L_10));
	}

IL_0061:
	{
		int32_t L_11 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_0065:
	{
		int32_t L_12 = V_1;
		int32_t L_13 = V_0;
		if ((((int32_t)L_12) < ((int32_t)L_13)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_14;
		L_14 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_14, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_mA4A2D5387CB383C0815A199D02EFDA6BDF5293A7_gshared (RuntimeArray* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_5 = ___0_item;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		bool L_8;
		L_8 = Color_Equals_m24E409BF329F25774C6577F18EFD3DE1253684D6_inline((&V_2), L_7, il2cpp_rgctx_method(method->rgctx_data, 2));
		if (!L_8)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_9 = V_1;
		int32_t L_10;
		L_10 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_9, L_10));
	}

IL_0061:
	{
		int32_t L_11 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_0065:
	{
		int32_t L_12 = V_1;
		int32_t L_13 = V_0;
		if ((((int32_t)L_12) < ((int32_t)L_13)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_14;
		L_14 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_14, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisColor32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B_mF0CD7DE60413D7DC7C9EF72CB1348574A13D395A_gshared (RuntimeArray* __this, Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_5 = ___0_item;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11_mA7D6BA1885234CA0F1EA11E39C566D0FE523C202_gshared (RuntimeArray* __this, ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 L_5 = ___0_item;
		ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		bool L_8;
		L_8 = ColorBlock_Equals_m20D958BB28F6FDC12D612279AF6B50679C0C1E67((&V_2), L_7, il2cpp_rgctx_method(method->rgctx_data, 2));
		if (!L_8)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_9 = V_1;
		int32_t L_10;
		L_10 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_9, L_10));
	}

IL_0061:
	{
		int32_t L_11 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_0065:
	{
		int32_t L_12 = V_1;
		int32_t L_13 = V_0;
		if ((((int32_t)L_12) < ((int32_t)L_13)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_14;
		L_14 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_14, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisColorOverride_t2C7C1E71F0FF6811037F06ABDA9717D5CCE03FC8_m8E66CAFC002C8E6F66F9117F33C153EEBD334BA8_gshared (RuntimeArray* __this, ColorOverride_t2C7C1E71F0FF6811037F06ABDA9717D5CCE03FC8 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	ColorOverride_t2C7C1E71F0FF6811037F06ABDA9717D5CCE03FC8 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		ColorOverride_t2C7C1E71F0FF6811037F06ABDA9717D5CCE03FC8 L_5 = ___0_item;
		ColorOverride_t2C7C1E71F0FF6811037F06ABDA9717D5CCE03FC8 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<ColorOverride_t2C7C1E71F0FF6811037F06ABDA9717D5CCE03FC8> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisComputedStyle_t8B08CCCEE20525528B3FFDAC6D3F58F101AAF54C_mAC5FA40615A7F63E3E94E19C609901F755C87619_gshared (RuntimeArray* __this, ComputedStyle_t8B08CCCEE20525528B3FFDAC6D3F58F101AAF54C ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	ComputedStyle_t8B08CCCEE20525528B3FFDAC6D3F58F101AAF54C V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		ComputedStyle_t8B08CCCEE20525528B3FFDAC6D3F58F101AAF54C L_5 = ___0_item;
		ComputedStyle_t8B08CCCEE20525528B3FFDAC6D3F58F101AAF54C L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<ComputedStyle_t8B08CCCEE20525528B3FFDAC6D3F58F101AAF54C> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisComputedTransitionProperty_tD8E4D8EB5DD69E063944F27A48D9263F4F1354E1_m094CA25EC3A394BB5AFB72EE50B6B62CCF0D9CC6_gshared (RuntimeArray* __this, ComputedTransitionProperty_tD8E4D8EB5DD69E063944F27A48D9263F4F1354E1 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	ComputedTransitionProperty_tD8E4D8EB5DD69E063944F27A48D9263F4F1354E1 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		ComputedTransitionProperty_tD8E4D8EB5DD69E063944F27A48D9263F4F1354E1 L_5 = ___0_item;
		ComputedTransitionProperty_tD8E4D8EB5DD69E063944F27A48D9263F4F1354E1 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<ComputedTransitionProperty_tD8E4D8EB5DD69E063944F27A48D9263F4F1354E1> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisConduitParameterValue_tE37668E05BA646C0E83D7D8EFA5E486D534D8A3A_m185EB4FBFB58E782ED8D7E421345286F65B30F57_gshared (RuntimeArray* __this, ConduitParameterValue_tE37668E05BA646C0E83D7D8EFA5E486D534D8A3A ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	ConduitParameterValue_tE37668E05BA646C0E83D7D8EFA5E486D534D8A3A V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		ConduitParameterValue_tE37668E05BA646C0E83D7D8EFA5E486D534D8A3A L_5 = ___0_item;
		ConduitParameterValue_tE37668E05BA646C0E83D7D8EFA5E486D534D8A3A L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<ConduitParameterValue_tE37668E05BA646C0E83D7D8EFA5E486D534D8A3A> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisContactPairHeader_tA8C64AAEEF017149E77A6600B10A10F1A1C5648B_m3324522D767F31B8542615CEF755DBB55B2E7611_gshared (RuntimeArray* __this, ContactPairHeader_tA8C64AAEEF017149E77A6600B10A10F1A1C5648B ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	ContactPairHeader_tA8C64AAEEF017149E77A6600B10A10F1A1C5648B V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		ContactPairHeader_tA8C64AAEEF017149E77A6600B10A10F1A1C5648B L_5 = ___0_item;
		ContactPairHeader_tA8C64AAEEF017149E77A6600B10A10F1A1C5648B L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<ContactPairHeader_tA8C64AAEEF017149E77A6600B10A10F1A1C5648B> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisContactPoint_t241857959C0D517C21F541BB04B63FA6C1EAB3F9_mEBEA3BF95A800DC0EA6B5E5814EB8DE894FC7A87_gshared (RuntimeArray* __this, ContactPoint_t241857959C0D517C21F541BB04B63FA6C1EAB3F9 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	ContactPoint_t241857959C0D517C21F541BB04B63FA6C1EAB3F9 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		ContactPoint_t241857959C0D517C21F541BB04B63FA6C1EAB3F9 L_5 = ___0_item;
		ContactPoint_t241857959C0D517C21F541BB04B63FA6C1EAB3F9 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<ContactPoint_t241857959C0D517C21F541BB04B63FA6C1EAB3F9> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisContactPoint2D_t16A7EE2DDFB4FA3A09C6554E11F30CEDAEBFA801_m522EC045E8841406451241E51E2D2F14B319A365_gshared (RuntimeArray* __this, ContactPoint2D_t16A7EE2DDFB4FA3A09C6554E11F30CEDAEBFA801 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	ContactPoint2D_t16A7EE2DDFB4FA3A09C6554E11F30CEDAEBFA801 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		ContactPoint2D_t16A7EE2DDFB4FA3A09C6554E11F30CEDAEBFA801 L_5 = ___0_item;
		ContactPoint2D_t16A7EE2DDFB4FA3A09C6554E11F30CEDAEBFA801 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<ContactPoint2D_t16A7EE2DDFB4FA3A09C6554E11F30CEDAEBFA801> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisConvertMeshJobData_t35F3B601671C4880929BC30A858410B14459E3B1_mBA54820034289A3BBACAF81B4C94A731D36698E4_gshared (RuntimeArray* __this, ConvertMeshJobData_t35F3B601671C4880929BC30A858410B14459E3B1 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	ConvertMeshJobData_t35F3B601671C4880929BC30A858410B14459E3B1 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		ConvertMeshJobData_t35F3B601671C4880929BC30A858410B14459E3B1 L_5 = ___0_item;
		ConvertMeshJobData_t35F3B601671C4880929BC30A858410B14459E3B1 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<ConvertMeshJobData_t35F3B601671C4880929BC30A858410B14459E3B1> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisCopyClosingMeshJobData_t92845C1341A518A8D05CD9DCE53496BD70CF2044_mAA87A179C5F6E76986354068975C0F0D37CB1381_gshared (RuntimeArray* __this, CopyClosingMeshJobData_t92845C1341A518A8D05CD9DCE53496BD70CF2044 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	CopyClosingMeshJobData_t92845C1341A518A8D05CD9DCE53496BD70CF2044 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		CopyClosingMeshJobData_t92845C1341A518A8D05CD9DCE53496BD70CF2044 L_5 = ___0_item;
		CopyClosingMeshJobData_t92845C1341A518A8D05CD9DCE53496BD70CF2044 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<CopyClosingMeshJobData_t92845C1341A518A8D05CD9DCE53496BD70CF2044> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisCullingSplit_tA645AE6542408220387BA7188513D7FEDBC1CAC0_m9A037364CE9AA095B44157F42D0807B4E0BD025A_gshared (RuntimeArray* __this, CullingSplit_tA645AE6542408220387BA7188513D7FEDBC1CAC0 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	CullingSplit_tA645AE6542408220387BA7188513D7FEDBC1CAC0 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		CullingSplit_tA645AE6542408220387BA7188513D7FEDBC1CAC0 L_5 = ___0_item;
		CullingSplit_tA645AE6542408220387BA7188513D7FEDBC1CAC0 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<CullingSplit_tA645AE6542408220387BA7188513D7FEDBC1CAC0> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisCustomAttributeNamedArgument_t4EC1C2BB9943BEB7E77AC0870BE2A899E23B4E02_mD3E24B9801A8512DF810E3B118E624FDA13CB2E6_gshared (RuntimeArray* __this, CustomAttributeNamedArgument_t4EC1C2BB9943BEB7E77AC0870BE2A899E23B4E02 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	CustomAttributeNamedArgument_t4EC1C2BB9943BEB7E77AC0870BE2A899E23B4E02 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		CustomAttributeNamedArgument_t4EC1C2BB9943BEB7E77AC0870BE2A899E23B4E02 L_5 = ___0_item;
		CustomAttributeNamedArgument_t4EC1C2BB9943BEB7E77AC0870BE2A899E23B4E02 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		bool L_8;
		L_8 = CustomAttributeNamedArgument_Equals_mB1743B7F2494519A511010F4CB52FC26DF692151((&V_2), L_7, il2cpp_rgctx_method(method->rgctx_data, 2));
		if (!L_8)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_9 = V_1;
		int32_t L_10;
		L_10 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_9, L_10));
	}

IL_0061:
	{
		int32_t L_11 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_0065:
	{
		int32_t L_12 = V_1;
		int32_t L_13 = V_0;
		if ((((int32_t)L_12) < ((int32_t)L_13)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_14;
		L_14 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_14, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisCustomAttributeTypedArgument_tAAA19ADE66B16A67D030C8C67D7ADB29A7BEC75F_m673CB2669FC29055C0A5FD321754D3F407A5FD1F_gshared (RuntimeArray* __this, CustomAttributeTypedArgument_tAAA19ADE66B16A67D030C8C67D7ADB29A7BEC75F ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	CustomAttributeTypedArgument_tAAA19ADE66B16A67D030C8C67D7ADB29A7BEC75F V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		CustomAttributeTypedArgument_tAAA19ADE66B16A67D030C8C67D7ADB29A7BEC75F L_5 = ___0_item;
		CustomAttributeTypedArgument_tAAA19ADE66B16A67D030C8C67D7ADB29A7BEC75F L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		bool L_8;
		L_8 = CustomAttributeTypedArgument_Equals_m88F54FC46D513F75E9C932B5AB529E7C3895D917((&V_2), L_7, il2cpp_rgctx_method(method->rgctx_data, 2));
		if (!L_8)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_9 = V_1;
		int32_t L_10;
		L_10 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_9, L_10));
	}

IL_0061:
	{
		int32_t L_11 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_0065:
	{
		int32_t L_12 = V_1;
		int32_t L_13 = V_0;
		if ((((int32_t)L_12) < ((int32_t)L_13)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_14;
		L_14 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_14, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisDateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_m93BD1CEE03A45DD70720992CA7CBFB6A7041A9A7_gshared (RuntimeArray* __this, DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_5 = ___0_item;
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		bool L_8;
		L_8 = DateTime_Equals_m0EF1F769B475D00BB907072ED7585E6A6ECAB133((&V_2), L_7, il2cpp_rgctx_method(method->rgctx_data, 2));
		if (!L_8)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_9 = V_1;
		int32_t L_10;
		L_10 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_9, L_10));
	}

IL_0061:
	{
		int32_t L_11 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_0065:
	{
		int32_t L_12 = V_1;
		int32_t L_13 = V_0;
		if ((((int32_t)L_12) < ((int32_t)L_13)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_14;
		L_14 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_14, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisDecimal_tDA6C877282B2D789CF97C0949661CC11D643969F_m423663E3431022BABB5E33B8E49FBEF4FF9963BB_gshared (RuntimeArray* __this, Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_5 = ___0_item;
		Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		bool L_8;
		L_8 = Decimal_Equals_mD06AE5E80DBE3651F359FA951A93B7EACAB1A4D8((&V_2), L_7, il2cpp_rgctx_method(method->rgctx_data, 2));
		if (!L_8)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_9 = V_1;
		int32_t L_10;
		L_10 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_9, L_10));
	}

IL_0061:
	{
		int32_t L_11 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_0065:
	{
		int32_t L_12 = V_1;
		int32_t L_13 = V_0;
		if ((((int32_t)L_12) < ((int32_t)L_13)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_14;
		L_14 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_14, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisDictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB_m2917987ABA3EDCA1951D4FEE3836D6EF7E2CF165_gshared (RuntimeArray* __this, DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB L_5 = ___0_item;
		DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisDimension_t5B1EAB500AE32C3789A2BCC4D43F7A29996DF3F8_mB05ABA1864A539A11137DDDB9488ED0DCAC87E78_gshared (RuntimeArray* __this, Dimension_t5B1EAB500AE32C3789A2BCC4D43F7A29996DF3F8 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Dimension_t5B1EAB500AE32C3789A2BCC4D43F7A29996DF3F8 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		Dimension_t5B1EAB500AE32C3789A2BCC4D43F7A29996DF3F8 L_5 = ___0_item;
		Dimension_t5B1EAB500AE32C3789A2BCC4D43F7A29996DF3F8 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		bool L_8;
		L_8 = Dimension_Equals_m4D328F20818BA59A8984495E22DE4CDEE086CC1D((&V_2), L_7, il2cpp_rgctx_method(method->rgctx_data, 2));
		if (!L_8)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_9 = V_1;
		int32_t L_10;
		L_10 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_9, L_10));
	}

IL_0061:
	{
		int32_t L_11 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_0065:
	{
		int32_t L_12 = V_1;
		int32_t L_13 = V_0;
		if ((((int32_t)L_12) < ((int32_t)L_13)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_14;
		L_14 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_14, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_mEBA37CCA2EF9D990F9564FFFE57EDD25D70DD51C_gshared (RuntimeArray* __this, double ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	double V_2 = 0.0;
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		double L_5 = ___0_item;
		double L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		bool L_8;
		L_8 = Double_Equals_m342E8F178661ABF8306D58D5F2130C58E0601DA3((&V_2), L_7, il2cpp_rgctx_method(method->rgctx_data, 2));
		if (!L_8)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_9 = V_1;
		int32_t L_10;
		L_10 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_9, L_10));
	}

IL_0061:
	{
		int32_t L_11 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_0065:
	{
		int32_t L_12 = V_1;
		int32_t L_13 = V_0;
		if ((((int32_t)L_12) < ((int32_t)L_13)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_14;
		L_14 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_14, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisDrawBufferRange_t289089F19A7539FDA77D3E63416BAFBA0955E2D5_m29511B6472011004281AC3E81E15FE2DED76C458_gshared (RuntimeArray* __this, DrawBufferRange_t289089F19A7539FDA77D3E63416BAFBA0955E2D5 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	DrawBufferRange_t289089F19A7539FDA77D3E63416BAFBA0955E2D5 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		DrawBufferRange_t289089F19A7539FDA77D3E63416BAFBA0955E2D5 L_5 = ___0_item;
		DrawBufferRange_t289089F19A7539FDA77D3E63416BAFBA0955E2D5 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<DrawBufferRange_t289089F19A7539FDA77D3E63416BAFBA0955E2D5> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisEasingFunction_t5197D3B06056326A8B5C96032CDEBD5D3BDCA7A4_m636C004C0711569B7B1D0668E3C43FD8648DD167_gshared (RuntimeArray* __this, EasingFunction_t5197D3B06056326A8B5C96032CDEBD5D3BDCA7A4 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	EasingFunction_t5197D3B06056326A8B5C96032CDEBD5D3BDCA7A4 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		EasingFunction_t5197D3B06056326A8B5C96032CDEBD5D3BDCA7A4 L_5 = ___0_item;
		EasingFunction_t5197D3B06056326A8B5C96032CDEBD5D3BDCA7A4 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		bool L_8;
		L_8 = EasingFunction_Equals_m0EE1C44C3557C069C5AAFEBFC9877D1D37250873((&V_2), L_7, il2cpp_rgctx_method(method->rgctx_data, 2));
		if (!L_8)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_9 = V_1;
		int32_t L_10;
		L_10 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_9, L_10));
	}

IL_0061:
	{
		int32_t L_11 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_0065:
	{
		int32_t L_12 = V_1;
		int32_t L_13 = V_0;
		if ((((int32_t)L_12) < ((int32_t)L_13)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_14;
		L_14 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_14, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisEnumData_tB9520C9179D9D6C57B2BF70E76FE4EB4DC94A6F8_m2AAD48B4FC2BCAD22DA44A9F379CC46CC1A64918_gshared (RuntimeArray* __this, EnumData_tB9520C9179D9D6C57B2BF70E76FE4EB4DC94A6F8 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	EnumData_tB9520C9179D9D6C57B2BF70E76FE4EB4DC94A6F8 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		EnumData_tB9520C9179D9D6C57B2BF70E76FE4EB4DC94A6F8 L_5 = ___0_item;
		EnumData_tB9520C9179D9D6C57B2BF70E76FE4EB4DC94A6F8 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<EnumData_tB9520C9179D9D6C57B2BF70E76FE4EB4DC94A6F8> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisEphemeron_t74F279F5E7CF4A0CFC21C822431DD840572C6DA2_mD5D52BBB5E96012B01E02D0A92D4A46C5F2A21E6_gshared (RuntimeArray* __this, Ephemeron_t74F279F5E7CF4A0CFC21C822431DD840572C6DA2 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Ephemeron_t74F279F5E7CF4A0CFC21C822431DD840572C6DA2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		Ephemeron_t74F279F5E7CF4A0CFC21C822431DD840572C6DA2 L_5 = ___0_item;
		Ephemeron_t74F279F5E7CF4A0CFC21C822431DD840572C6DA2 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<Ephemeron_t74F279F5E7CF4A0CFC21C822431DD840572C6DA2> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisFontDefinition_t65281B0E106365C28AD3F2525DE148719AEEA30C_m005FE2EF9FA8601960890004CF9DCF7EFC7BDCD8_gshared (RuntimeArray* __this, FontDefinition_t65281B0E106365C28AD3F2525DE148719AEEA30C ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	FontDefinition_t65281B0E106365C28AD3F2525DE148719AEEA30C V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		FontDefinition_t65281B0E106365C28AD3F2525DE148719AEEA30C L_5 = ___0_item;
		FontDefinition_t65281B0E106365C28AD3F2525DE148719AEEA30C L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		bool L_8;
		L_8 = FontDefinition_Equals_m11510FB12876FE932360D45761D07A87E8494AF8((&V_2), L_7, il2cpp_rgctx_method(method->rgctx_data, 2));
		if (!L_8)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_9 = V_1;
		int32_t L_10;
		L_10 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_9, L_10));
	}

IL_0061:
	{
		int32_t L_11 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_0065:
	{
		int32_t L_12 = V_1;
		int32_t L_13 = V_0;
		if ((((int32_t)L_12) < ((int32_t)L_13)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_14;
		L_14 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_14, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisFontWeightPair_tB94169BD86D0DFC25D651F890B15991A3E0ADA42_mC95B4A0C3455162D7345093A2C3D78CAE2E2D1CA_gshared (RuntimeArray* __this, FontWeightPair_tB94169BD86D0DFC25D651F890B15991A3E0ADA42 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	FontWeightPair_tB94169BD86D0DFC25D651F890B15991A3E0ADA42 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		FontWeightPair_tB94169BD86D0DFC25D651F890B15991A3E0ADA42 L_5 = ___0_item;
		FontWeightPair_tB94169BD86D0DFC25D651F890B15991A3E0ADA42 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<FontWeightPair_tB94169BD86D0DFC25D651F890B15991A3E0ADA42> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisGCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC_m38EBA1948795C4EDDBDD60B9213F9A253CCAA5AE_gshared (RuntimeArray* __this, GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC L_5 = ___0_item;
		GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		bool L_8;
		L_8 = GCHandle_Equals_m27E0A4AD1CA71DA8071F816D6BFCD7556BC3E015((&V_2), L_7, il2cpp_rgctx_method(method->rgctx_data, 2));
		if (!L_8)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_9 = V_1;
		int32_t L_10;
		L_10 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_9, L_10));
	}

IL_0061:
	{
		int32_t L_11 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_0065:
	{
		int32_t L_12 = V_1;
		int32_t L_13 = V_0;
		if ((((int32_t)L_12) < ((int32_t)L_13)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_14;
		L_14 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_14, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisGfxUpdateBufferRange_t2991435FD0E056C19D7E3D4E524C13493F244B4C_m86CD46BDB1189224595C51C839BAA6035064D542_gshared (RuntimeArray* __this, GfxUpdateBufferRange_t2991435FD0E056C19D7E3D4E524C13493F244B4C ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	GfxUpdateBufferRange_t2991435FD0E056C19D7E3D4E524C13493F244B4C V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		GfxUpdateBufferRange_t2991435FD0E056C19D7E3D4E524C13493F244B4C L_5 = ___0_item;
		GfxUpdateBufferRange_t2991435FD0E056C19D7E3D4E524C13493F244B4C L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<GfxUpdateBufferRange_t2991435FD0E056C19D7E3D4E524C13493F244B4C> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisGlyphMarshallingStruct_tB45F92185E1A4A7880004B36591D7C73E4A2B87C_m997D69C6D1F72CE61DE44D33ACAA16B60E64164C_gshared (RuntimeArray* __this, GlyphMarshallingStruct_tB45F92185E1A4A7880004B36591D7C73E4A2B87C ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	GlyphMarshallingStruct_tB45F92185E1A4A7880004B36591D7C73E4A2B87C V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		GlyphMarshallingStruct_tB45F92185E1A4A7880004B36591D7C73E4A2B87C L_5 = ___0_item;
		GlyphMarshallingStruct_tB45F92185E1A4A7880004B36591D7C73E4A2B87C L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<GlyphMarshallingStruct_tB45F92185E1A4A7880004B36591D7C73E4A2B87C> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisGlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E_mCCC6CA49A4906B89D60B978E48B12DD640D52E93_gshared (RuntimeArray* __this, GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E L_5 = ___0_item;
		GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		bool L_8;
		L_8 = GlyphPairAdjustmentRecord_Equals_m0F49F5D76C114BB660B7619A93247591AE323CFD((&V_2), L_7, il2cpp_rgctx_method(method->rgctx_data, 2));
		if (!L_8)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_9 = V_1;
		int32_t L_10;
		L_10 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_9, L_10));
	}

IL_0061:
	{
		int32_t L_11 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_0065:
	{
		int32_t L_12 = V_1;
		int32_t L_13 = V_0;
		if ((((int32_t)L_12) < ((int32_t)L_13)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_14;
		L_14 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_14, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisGlyphRect_tB6D225B9318A527A1CBC1B4078EB923398EB808D_mFD5D0357B2AC1FFDA46A3340BE33A258FD89CA3E_gshared (RuntimeArray* __this, GlyphRect_tB6D225B9318A527A1CBC1B4078EB923398EB808D ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	GlyphRect_tB6D225B9318A527A1CBC1B4078EB923398EB808D V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		GlyphRect_tB6D225B9318A527A1CBC1B4078EB923398EB808D L_5 = ___0_item;
		GlyphRect_tB6D225B9318A527A1CBC1B4078EB923398EB808D L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		bool L_8;
		L_8 = GlyphRect_Equals_mF3BA7FD405AFCEA9E2A6ED2423C27CC023A1289B((&V_2), L_7, il2cpp_rgctx_method(method->rgctx_data, 2));
		if (!L_8)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_9 = V_1;
		int32_t L_10;
		L_10 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_9, L_10));
	}

IL_0061:
	{
		int32_t L_11 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_0065:
	{
		int32_t L_12 = V_1;
		int32_t L_13 = V_0;
		if ((((int32_t)L_12) < ((int32_t)L_13)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_14;
		L_14 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_14, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisGradientAlphaKey_tF469955E4BBAF1044320D956CD8D990F1A26EAA0_mCEB2EF9DB77C20D4D6A3A9F8AD474AAF3D32517A_gshared (RuntimeArray* __this, GradientAlphaKey_tF469955E4BBAF1044320D956CD8D990F1A26EAA0 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	GradientAlphaKey_tF469955E4BBAF1044320D956CD8D990F1A26EAA0 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		GradientAlphaKey_tF469955E4BBAF1044320D956CD8D990F1A26EAA0 L_5 = ___0_item;
		GradientAlphaKey_tF469955E4BBAF1044320D956CD8D990F1A26EAA0 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<GradientAlphaKey_tF469955E4BBAF1044320D956CD8D990F1A26EAA0> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisGradientColorKey_tBD03A613338639E3774A10265CC5F3619C13421A_m6382E1CF80C8C70E5742197440CDB60B6D8F3111_gshared (RuntimeArray* __this, GradientColorKey_tBD03A613338639E3774A10265CC5F3619C13421A ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	GradientColorKey_tBD03A613338639E3774A10265CC5F3619C13421A V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		GradientColorKey_tBD03A613338639E3774A10265CC5F3619C13421A L_5 = ___0_item;
		GradientColorKey_tBD03A613338639E3774A10265CC5F3619C13421A L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<GradientColorKey_tBD03A613338639E3774A10265CC5F3619C13421A> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisGradientSettings_tADA3CAA17319C58811DE187298039CC950FBAAF3_m0D7446166C4D690A1036D6345809F74A63B9D7FB_gshared (RuntimeArray* __this, GradientSettings_tADA3CAA17319C58811DE187298039CC950FBAAF3 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	GradientSettings_tADA3CAA17319C58811DE187298039CC950FBAAF3 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		GradientSettings_tADA3CAA17319C58811DE187298039CC950FBAAF3 L_5 = ___0_item;
		GradientSettings_tADA3CAA17319C58811DE187298039CC950FBAAF3 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<GradientSettings_tADA3CAA17319C58811DE187298039CC950FBAAF3> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisGuid_t_mD4F9B0C298AD4272EDD7A3862BD59B8E783854D6_gshared (RuntimeArray* __this, Guid_t ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Guid_t V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		Guid_t L_5 = ___0_item;
		Guid_t L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		bool L_8;
		L_8 = Guid_Equals_mC7349E47BF1CBCBFB4C9032C050DE54AAC10000B((&V_2), L_7, il2cpp_rgctx_method(method->rgctx_data, 2));
		if (!L_8)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_9 = V_1;
		int32_t L_10;
		L_10 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_9, L_10));
	}

IL_0061:
	{
		int32_t L_11 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_0065:
	{
		int32_t L_12 = V_1;
		int32_t L_13 = V_0;
		if ((((int32_t)L_12) < ((int32_t)L_13)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_14;
		L_14 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_14, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisHandSkeletonJoint_t3120B3D1CBB219AF904F1E0C239D0F4E3699DF50_m872F25F9873A27E93D8FA67FF1C87DF929B3222E_gshared (RuntimeArray* __this, HandSkeletonJoint_t3120B3D1CBB219AF904F1E0C239D0F4E3699DF50 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	HandSkeletonJoint_t3120B3D1CBB219AF904F1E0C239D0F4E3699DF50 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		HandSkeletonJoint_t3120B3D1CBB219AF904F1E0C239D0F4E3699DF50 L_5 = ___0_item;
		HandSkeletonJoint_t3120B3D1CBB219AF904F1E0C239D0F4E3699DF50 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<HandSkeletonJoint_t3120B3D1CBB219AF904F1E0C239D0F4E3699DF50> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisHandSphere_t0AFFAA1835C82924D0655FFF245620C2D055A994_m4D7C1118B29CA73C91374D870C956CDFEC7251B7_gshared (RuntimeArray* __this, HandSphere_t0AFFAA1835C82924D0655FFF245620C2D055A994 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	HandSphere_t0AFFAA1835C82924D0655FFF245620C2D055A994 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		HandSphere_t0AFFAA1835C82924D0655FFF245620C2D055A994 L_5 = ___0_item;
		HandSphere_t0AFFAA1835C82924D0655FFF245620C2D055A994 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<HandSphere_t0AFFAA1835C82924D0655FFF245620C2D055A994> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisHash128_t93367F504B687578F893CDBCD13FB95AC8A87A40_m07974CDBB8C530F47E39530685738B035D343228_gshared (RuntimeArray* __this, Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40 L_5 = ___0_item;
		Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		bool L_8;
		L_8 = Hash128_Equals_m28FADCC2F9A565AF152A53BCEEF88F798716B104((&V_2), L_7, il2cpp_rgctx_method(method->rgctx_data, 2));
		if (!L_8)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_9 = V_1;
		int32_t L_10;
		L_10 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_9, L_10));
	}

IL_0061:
	{
		int32_t L_11 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_0065:
	{
		int32_t L_12 = V_1;
		int32_t L_13 = V_0;
		if ((((int32_t)L_12) < ((int32_t)L_13)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_14;
		L_14 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_14, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisHeaderVariantInfo_t99223ED0C557730FBD8AA572065B994254F3386A_m2A29434467150807637820C95958D10DBD4543EF_gshared (RuntimeArray* __this, HeaderVariantInfo_t99223ED0C557730FBD8AA572065B994254F3386A ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	HeaderVariantInfo_t99223ED0C557730FBD8AA572065B994254F3386A V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		HeaderVariantInfo_t99223ED0C557730FBD8AA572065B994254F3386A L_5 = ___0_item;
		HeaderVariantInfo_t99223ED0C557730FBD8AA572065B994254F3386A L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<HeaderVariantInfo_t99223ED0C557730FBD8AA572065B994254F3386A> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisHighlightState_tE4F50287E5E2E91D42AB77DEA281D88D3AD6A28B_mA7AE6D32E4FFB5480185398E9C4848B47B36B9CD_gshared (RuntimeArray* __this, HighlightState_tE4F50287E5E2E91D42AB77DEA281D88D3AD6A28B ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	HighlightState_tE4F50287E5E2E91D42AB77DEA281D88D3AD6A28B V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		HighlightState_tE4F50287E5E2E91D42AB77DEA281D88D3AD6A28B L_5 = ___0_item;
		HighlightState_tE4F50287E5E2E91D42AB77DEA281D88D3AD6A28B L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		bool L_8;
		L_8 = HighlightState_Equals_m0317881F19561A64B9016A27C306FDB77460D165((&V_2), L_7, il2cpp_rgctx_method(method->rgctx_data, 2));
		if (!L_8)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_9 = V_1;
		int32_t L_10;
		L_10 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_9, L_10));
	}

IL_0061:
	{
		int32_t L_11 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_0065:
	{
		int32_t L_12 = V_1;
		int32_t L_13 = V_0;
		if ((((int32_t)L_12) < ((int32_t)L_13)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_14;
		L_14 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_14, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisHighlightState_tFF5FE9065990F04A37FEC545A0024047F0ABD740_m69CE7171D6EF855F4D87D5CDAC11ACE78BF5B8C9_gshared (RuntimeArray* __this, HighlightState_tFF5FE9065990F04A37FEC545A0024047F0ABD740 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	HighlightState_tFF5FE9065990F04A37FEC545A0024047F0ABD740 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		HighlightState_tFF5FE9065990F04A37FEC545A0024047F0ABD740 L_5 = ___0_item;
		HighlightState_tFF5FE9065990F04A37FEC545A0024047F0ABD740 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		bool L_8;
		L_8 = HighlightState_Equals_mE0643D119E2942355F5FFED759BC329326E0C849((&V_2), L_7, il2cpp_rgctx_method(method->rgctx_data, 2));
		if (!L_8)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_9 = V_1;
		int32_t L_10;
		L_10 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_9, L_10));
	}

IL_0061:
	{
		int32_t L_11 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_0065:
	{
		int32_t L_12 = V_1;
		int32_t L_13 = V_0;
		if ((((int32_t)L_12) < ((int32_t)L_13)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_14;
		L_14 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_14, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisHmdQuad_t_t024B6D746F2FF3C1609895FB111FE853CBF7C78A_mC57525EF5AAD1386DECDF2CF35BAE3ED9DF6310A_gshared (RuntimeArray* __this, HmdQuad_t_t024B6D746F2FF3C1609895FB111FE853CBF7C78A ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	HmdQuad_t_t024B6D746F2FF3C1609895FB111FE853CBF7C78A V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		HmdQuad_t_t024B6D746F2FF3C1609895FB111FE853CBF7C78A L_5 = ___0_item;
		HmdQuad_t_t024B6D746F2FF3C1609895FB111FE853CBF7C78A L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<HmdQuad_t_t024B6D746F2FF3C1609895FB111FE853CBF7C78A> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisInputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD_m58EC1C69E3B056E32D9EF7885441673C1B7A6E13_gshared (RuntimeArray* __this, InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD L_5 = ___0_item;
		InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		bool L_8;
		L_8 = InputDevice_Equals_m206193EDB0C7A69C0BDFC821CE87B887C7BE0CAC((&V_2), L_7, il2cpp_rgctx_method(method->rgctx_data, 2));
		if (!L_8)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_9 = V_1;
		int32_t L_10;
		L_10 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_9, L_10));
	}

IL_0061:
	{
		int32_t L_11 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_0065:
	{
		int32_t L_12 = V_1;
		int32_t L_13 = V_0;
		if ((((int32_t)L_12) < ((int32_t)L_13)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_14;
		L_14 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_14, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_m4637ED8C7B26207F4B594A78C78AB69320981AAB_gshared (RuntimeArray* __this, int16_t ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int16_t V_2 = 0;
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		int16_t L_5 = ___0_item;
		int16_t L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		bool L_8;
		L_8 = Int16_Equals_m4F5EDE255F1646CAF6CFD5052D80D56AAECB0512((&V_2), L_7, il2cpp_rgctx_method(method->rgctx_data, 2));
		if (!L_8)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_9 = V_1;
		int32_t L_10;
		L_10 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_9, L_10));
	}

IL_0061:
	{
		int32_t L_11 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_0065:
	{
		int32_t L_12 = V_1;
		int32_t L_13 = V_0;
		if ((((int32_t)L_12) < ((int32_t)L_13)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_14;
		L_14 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_14, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mB8A5DF381EE5B33D70109CF43C474562787F47F3_gshared (RuntimeArray* __this, int32_t ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		int32_t L_5 = ___0_item;
		int32_t L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		bool L_8;
		L_8 = Int32_Equals_m089564150E8AF7C63B419427E2E57E3420659B1B((&V_2), L_7, il2cpp_rgctx_method(method->rgctx_data, 2));
		if (!L_8)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_9 = V_1;
		int32_t L_10;
		L_10 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_9, L_10));
	}

IL_0061:
	{
		int32_t L_11 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_0065:
	{
		int32_t L_12 = V_1;
		int32_t L_13 = V_0;
		if ((((int32_t)L_12) < ((int32_t)L_13)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_14;
		L_14 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_14, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisInt32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C_mFB8E06F0A66EF6F488C6B316898FD9AD0C5FEB53_gshared (RuntimeArray* __this, int32_t ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		int32_t L_5 = ___0_item;
		int32_t L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<int32_t> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = Enum_Equals_m96B1058BA6312E23F31A5FBF594E96EB692EAF4E((Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_m42E1B788D9D42F476F885509E89F98C456187473_gshared (RuntimeArray* __this, int64_t ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int64_t V_2 = 0;
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		int64_t L_5 = ___0_item;
		int64_t L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		bool L_8;
		L_8 = Int64_Equals_mDA5711B3D23B8CB282F34F73F1D7C0726D042FE8((&V_2), L_7, il2cpp_rgctx_method(method->rgctx_data, 2));
		if (!L_8)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_9 = V_1;
		int32_t L_10;
		L_10 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_9, L_10));
	}

IL_0061:
	{
		int32_t L_11 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_0065:
	{
		int32_t L_12 = V_1;
		int32_t L_13 = V_0;
		if ((((int32_t)L_12) < ((int32_t)L_13)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_14;
		L_14 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_14, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisIntPtr_t_m5A28F4B453C06806055184E166C5DF13EF74BD31_gshared (RuntimeArray* __this, intptr_t ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	intptr_t V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		intptr_t L_5 = ___0_item;
		intptr_t L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		bool L_8;
		L_8 = IntPtr_Equals_m0F39AB64A7BBD67190E745FF8334A5FC766CB26E((&V_2), L_7, il2cpp_rgctx_method(method->rgctx_data, 2));
		if (!L_8)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_9 = V_1;
		int32_t L_10;
		L_10 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_9, L_10));
	}

IL_0061:
	{
		int32_t L_11 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_0065:
	{
		int32_t L_12 = V_1;
		int32_t L_13 = V_0;
		if ((((int32_t)L_12) < ((int32_t)L_13)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_14;
		L_14 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_14, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisInternalCodePageDataItem_t6B4913D6507B26FFAE0B805874644D3DBE78F316_mC85641F765237F54D5AC2B7C7B8E94AE88AB96ED_gshared (RuntimeArray* __this, InternalCodePageDataItem_t6B4913D6507B26FFAE0B805874644D3DBE78F316 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	InternalCodePageDataItem_t6B4913D6507B26FFAE0B805874644D3DBE78F316 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		InternalCodePageDataItem_t6B4913D6507B26FFAE0B805874644D3DBE78F316 L_5 = ___0_item;
		InternalCodePageDataItem_t6B4913D6507B26FFAE0B805874644D3DBE78F316 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<InternalCodePageDataItem_t6B4913D6507B26FFAE0B805874644D3DBE78F316> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisInternalEncodingDataItem_t1D6DA6BCE8389C12ECC229A644D2CA45A86C06EB_m8C5A3DEA7DDF3981F0EEF7F208AD7C17D76E9934_gshared (RuntimeArray* __this, InternalEncodingDataItem_t1D6DA6BCE8389C12ECC229A644D2CA45A86C06EB ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	InternalEncodingDataItem_t1D6DA6BCE8389C12ECC229A644D2CA45A86C06EB V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		InternalEncodingDataItem_t1D6DA6BCE8389C12ECC229A644D2CA45A86C06EB L_5 = ___0_item;
		InternalEncodingDataItem_t1D6DA6BCE8389C12ECC229A644D2CA45A86C06EB L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<InternalEncodingDataItem_t1D6DA6BCE8389C12ECC229A644D2CA45A86C06EB> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisJNINativeMethod_t92A9F760CD913D55613C0CD5A8CB4CB3F4722F59_mD1B868F1E2EF996555A43553D31D86E46C3651A4_gshared (RuntimeArray* __this, JNINativeMethod_t92A9F760CD913D55613C0CD5A8CB4CB3F4722F59 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	JNINativeMethod_t92A9F760CD913D55613C0CD5A8CB4CB3F4722F59 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		JNINativeMethod_t92A9F760CD913D55613C0CD5A8CB4CB3F4722F59 L_5 = ___0_item;
		JNINativeMethod_t92A9F760CD913D55613C0CD5A8CB4CB3F4722F59 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<JNINativeMethod_t92A9F760CD913D55613C0CD5A8CB4CB3F4722F59> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisJobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08_m87EDBEAAF216F4F27B5CD37FFBE545599654A8FB_gshared (RuntimeArray* __this, JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 L_5 = ___0_item;
		JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisKeyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0_m89ADC7FAC382CA6363999CE7F86BC2D210EADC27_gshared (RuntimeArray* __this, Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0 L_5 = ___0_item;
		Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisLOD_tFCD9DABCBBA65A45D48B82EBDC65162CDC719741_m99D1D9B972208AE7637B2EE5C0C05A0CB62F415D_gshared (RuntimeArray* __this, LOD_tFCD9DABCBBA65A45D48B82EBDC65162CDC719741 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	LOD_tFCD9DABCBBA65A45D48B82EBDC65162CDC719741 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		LOD_tFCD9DABCBBA65A45D48B82EBDC65162CDC719741 L_5 = ___0_item;
		LOD_tFCD9DABCBBA65A45D48B82EBDC65162CDC719741 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<LOD_tFCD9DABCBBA65A45D48B82EBDC65162CDC719741> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisLength_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256_m4BCF42DBDE660B19E76C621B3F42EBE1EBEF9F10_gshared (RuntimeArray* __this, Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256 L_5 = ___0_item;
		Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		bool L_8;
		L_8 = Length_Equals_mFFEB4478ADE2C602ED8006F4043022862D677F82((&V_2), L_7, il2cpp_rgctx_method(method->rgctx_data, 2));
		if (!L_8)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_9 = V_1;
		int32_t L_10;
		L_10 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_9, L_10));
	}

IL_0061:
	{
		int32_t L_11 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_0065:
	{
		int32_t L_12 = V_1;
		int32_t L_13 = V_0;
		if ((((int32_t)L_12) < ((int32_t)L_13)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_14;
		L_14 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_14, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisLigatureSubstitutionRecord_t8660DC6B1D65C655D698216F72BFB3C85DDCAB94_m7F032B05983D4A6D78183CF33D81DB79F7B37F96_gshared (RuntimeArray* __this, LigatureSubstitutionRecord_t8660DC6B1D65C655D698216F72BFB3C85DDCAB94 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	LigatureSubstitutionRecord_t8660DC6B1D65C655D698216F72BFB3C85DDCAB94 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		LigatureSubstitutionRecord_t8660DC6B1D65C655D698216F72BFB3C85DDCAB94 L_5 = ___0_item;
		LigatureSubstitutionRecord_t8660DC6B1D65C655D698216F72BFB3C85DDCAB94 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<LigatureSubstitutionRecord_t8660DC6B1D65C655D698216F72BFB3C85DDCAB94> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisLightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21_m0A39432BD935B48292A59A9D21AEB7CAA904B871_gshared (RuntimeArray* __this, LightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	LightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		LightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21 L_5 = ___0_item;
		LightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<LightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisLineInfo_t2BBD461B330C46ACA45596A8E72FEA4172F88CF5_mFB9700AD672A8C042C75BE0E28EAB8A9F377F174_gshared (RuntimeArray* __this, LineInfo_t2BBD461B330C46ACA45596A8E72FEA4172F88CF5 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	LineInfo_t2BBD461B330C46ACA45596A8E72FEA4172F88CF5 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		LineInfo_t2BBD461B330C46ACA45596A8E72FEA4172F88CF5 L_5 = ___0_item;
		LineInfo_t2BBD461B330C46ACA45596A8E72FEA4172F88CF5 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<LineInfo_t2BBD461B330C46ACA45596A8E72FEA4172F88CF5> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisLinkInfo_tE85DDAFDFBDA635E6405C88EE4FD5941A9243DD8_mA4A16B365195AC1B343A7BF38E650C36C672C709_gshared (RuntimeArray* __this, LinkInfo_tE85DDAFDFBDA635E6405C88EE4FD5941A9243DD8 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	LinkInfo_tE85DDAFDFBDA635E6405C88EE4FD5941A9243DD8 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		LinkInfo_tE85DDAFDFBDA635E6405C88EE4FD5941A9243DD8 L_5 = ___0_item;
		LinkInfo_tE85DDAFDFBDA635E6405C88EE4FD5941A9243DD8 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<LinkInfo_tE85DDAFDFBDA635E6405C88EE4FD5941A9243DD8> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisLocomotionEvent_tECDD51A234545203F40F068C91D2745873285642_m95668D59A6BD5B6FCD0CD5159DFCA5244A2729E0_gshared (RuntimeArray* __this, LocomotionEvent_tECDD51A234545203F40F068C91D2745873285642 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	LocomotionEvent_tECDD51A234545203F40F068C91D2745873285642 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		LocomotionEvent_tECDD51A234545203F40F068C91D2745873285642 L_5 = ___0_item;
		LocomotionEvent_tECDD51A234545203F40F068C91D2745873285642 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<LocomotionEvent_tECDD51A234545203F40F068C91D2745873285642> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisManipulatorActivationFilter_t866A0295DA75EA271B30BDC1F9EEA2C4FDEB1A81_m19B2C753952877754F2B1821CA75F7D0A5CFDF6B_gshared (RuntimeArray* __this, ManipulatorActivationFilter_t866A0295DA75EA271B30BDC1F9EEA2C4FDEB1A81 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	ManipulatorActivationFilter_t866A0295DA75EA271B30BDC1F9EEA2C4FDEB1A81 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		ManipulatorActivationFilter_t866A0295DA75EA271B30BDC1F9EEA2C4FDEB1A81 L_5 = ___0_item;
		ManipulatorActivationFilter_t866A0295DA75EA271B30BDC1F9EEA2C4FDEB1A81 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		bool L_8;
		L_8 = ManipulatorActivationFilter_Equals_m5BE53154869F0B26619DB5EEE913398BE351483E((&V_2), L_7, il2cpp_rgctx_method(method->rgctx_data, 2));
		if (!L_8)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_9 = V_1;
		int32_t L_10;
		L_10 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_9, L_10));
	}

IL_0061:
	{
		int32_t L_11 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_0065:
	{
		int32_t L_12 = V_1;
		int32_t L_13 = V_0;
		if ((((int32_t)L_12) < ((int32_t)L_13)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_14;
		L_14 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_14, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisMarkToBaseAdjustmentRecord_t4BE0F5A88932146F70A2B521176BDA91A20D8607_m1D89F64EA20A42199A5513F479D388124DA5E22C_gshared (RuntimeArray* __this, MarkToBaseAdjustmentRecord_t4BE0F5A88932146F70A2B521176BDA91A20D8607 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	MarkToBaseAdjustmentRecord_t4BE0F5A88932146F70A2B521176BDA91A20D8607 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		MarkToBaseAdjustmentRecord_t4BE0F5A88932146F70A2B521176BDA91A20D8607 L_5 = ___0_item;
		MarkToBaseAdjustmentRecord_t4BE0F5A88932146F70A2B521176BDA91A20D8607 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<MarkToBaseAdjustmentRecord_t4BE0F5A88932146F70A2B521176BDA91A20D8607> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisMarkToMarkAdjustmentRecord_tD53618A3728435D5C904857DAC644EE27640807C_m10901F405A85BDC2B3D4D9A4A7ED7721A6F61275_gshared (RuntimeArray* __this, MarkToMarkAdjustmentRecord_tD53618A3728435D5C904857DAC644EE27640807C ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	MarkToMarkAdjustmentRecord_tD53618A3728435D5C904857DAC644EE27640807C V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		MarkToMarkAdjustmentRecord_tD53618A3728435D5C904857DAC644EE27640807C L_5 = ___0_item;
		MarkToMarkAdjustmentRecord_tD53618A3728435D5C904857DAC644EE27640807C L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<MarkToMarkAdjustmentRecord_tD53618A3728435D5C904857DAC644EE27640807C> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisMaterialPropertyColor_t89BBD20BA93BE7FC0411AEFCBFA51EF1F166CE58_m538C55EC79952BBE81CA55D9994B0C78037A214E_gshared (RuntimeArray* __this, MaterialPropertyColor_t89BBD20BA93BE7FC0411AEFCBFA51EF1F166CE58 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	MaterialPropertyColor_t89BBD20BA93BE7FC0411AEFCBFA51EF1F166CE58 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		MaterialPropertyColor_t89BBD20BA93BE7FC0411AEFCBFA51EF1F166CE58 L_5 = ___0_item;
		MaterialPropertyColor_t89BBD20BA93BE7FC0411AEFCBFA51EF1F166CE58 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<MaterialPropertyColor_t89BBD20BA93BE7FC0411AEFCBFA51EF1F166CE58> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisMaterialPropertyFloat_t04D58C5C07D33383B57D7BEFD0074EB4F621366A_m783F22D40B664D5036B48F2B519347FE93C5D4D6_gshared (RuntimeArray* __this, MaterialPropertyFloat_t04D58C5C07D33383B57D7BEFD0074EB4F621366A ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	MaterialPropertyFloat_t04D58C5C07D33383B57D7BEFD0074EB4F621366A V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		MaterialPropertyFloat_t04D58C5C07D33383B57D7BEFD0074EB4F621366A L_5 = ___0_item;
		MaterialPropertyFloat_t04D58C5C07D33383B57D7BEFD0074EB4F621366A L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<MaterialPropertyFloat_t04D58C5C07D33383B57D7BEFD0074EB4F621366A> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisMaterialPropertyVector_tA04CB61F4FFA72951DF8E545BDC4C3DFD93D816F_m44D699F93EDF6E799AC6E23ABA0B1795C8F8EB8F_gshared (RuntimeArray* __this, MaterialPropertyVector_tA04CB61F4FFA72951DF8E545BDC4C3DFD93D816F ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	MaterialPropertyVector_tA04CB61F4FFA72951DF8E545BDC4C3DFD93D816F V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		MaterialPropertyVector_tA04CB61F4FFA72951DF8E545BDC4C3DFD93D816F L_5 = ___0_item;
		MaterialPropertyVector_tA04CB61F4FFA72951DF8E545BDC4C3DFD93D816F L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<MaterialPropertyVector_tA04CB61F4FFA72951DF8E545BDC4C3DFD93D816F> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisMaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B_mECFD2D51888AA4698B38DAF9A3BE274399BE6873_gshared (RuntimeArray* __this, MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B L_5 = ___0_item;
		MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisMaterialReference_t86DB0799D5C82869D4FF0A4F59624AED6910FD26_mAD3A4A5EFA4EF4C701CEEE077DE28DDCB4938D57_gshared (RuntimeArray* __this, MaterialReference_t86DB0799D5C82869D4FF0A4F59624AED6910FD26 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	MaterialReference_t86DB0799D5C82869D4FF0A4F59624AED6910FD26 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		MaterialReference_t86DB0799D5C82869D4FF0A4F59624AED6910FD26 L_5 = ___0_item;
		MaterialReference_t86DB0799D5C82869D4FF0A4F59624AED6910FD26 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<MaterialReference_t86DB0799D5C82869D4FF0A4F59624AED6910FD26> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisMatrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_mE246A2B75AE51A282DD762C380EDC9C5859CDC00_gshared (RuntimeArray* __this, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_5 = ___0_item;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		bool L_8;
		L_8 = Matrix4x4_Equals_m35CFC5F304BB40EFFE011B92AA87B77CD8FF8F74_inline((&V_2), L_7, il2cpp_rgctx_method(method->rgctx_data, 2));
		if (!L_8)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_9 = V_1;
		int32_t L_10;
		L_10 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_9, L_10));
	}

IL_0061:
	{
		int32_t L_11 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_0065:
	{
		int32_t L_12 = V_1;
		int32_t L_13 = V_0;
		if ((((int32_t)L_12) < ((int32_t)L_13)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_14;
		L_14 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_14, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisMeshGroup_t91DC966DBE4224D95C2E8CC34761A45FD75F5856_m9A0851CB3A5980AD035312D91A244C0BAF297B1B_gshared (RuntimeArray* __this, MeshGroup_t91DC966DBE4224D95C2E8CC34761A45FD75F5856 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	MeshGroup_t91DC966DBE4224D95C2E8CC34761A45FD75F5856 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		MeshGroup_t91DC966DBE4224D95C2E8CC34761A45FD75F5856 L_5 = ___0_item;
		MeshGroup_t91DC966DBE4224D95C2E8CC34761A45FD75F5856 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<MeshGroup_t91DC966DBE4224D95C2E8CC34761A45FD75F5856> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisMeshInfo_tE55C4A8846CC2C399CCC3FE989476D987B86AB2F_mA94D1455E2B27F3027C0A8A0F07FA6916BCF5824_gshared (RuntimeArray* __this, MeshInfo_tE55C4A8846CC2C399CCC3FE989476D987B86AB2F ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	MeshInfo_tE55C4A8846CC2C399CCC3FE989476D987B86AB2F V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		MeshInfo_tE55C4A8846CC2C399CCC3FE989476D987B86AB2F L_5 = ___0_item;
		MeshInfo_tE55C4A8846CC2C399CCC3FE989476D987B86AB2F L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<MeshInfo_tE55C4A8846CC2C399CCC3FE989476D987B86AB2F> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisModifiableContactPair_t8D3CA3E20AF1718A5421A6098D633DDA67399960_m3C6E1EC9FC0A577B89960EC760879B1D112B7DE8_gshared (RuntimeArray* __this, ModifiableContactPair_t8D3CA3E20AF1718A5421A6098D633DDA67399960 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	ModifiableContactPair_t8D3CA3E20AF1718A5421A6098D633DDA67399960 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		ModifiableContactPair_t8D3CA3E20AF1718A5421A6098D633DDA67399960 L_5 = ___0_item;
		ModifiableContactPair_t8D3CA3E20AF1718A5421A6098D633DDA67399960 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<ModifiableContactPair_t8D3CA3E20AF1718A5421A6098D633DDA67399960> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisMultipleSubstitutionRecord_t668A640AFADBD46E3D4EC3A8417D0A02764DF87B_m4F90F971CA49FEBD0CD999D2AC32A3EF1D569314_gshared (RuntimeArray* __this, MultipleSubstitutionRecord_t668A640AFADBD46E3D4EC3A8417D0A02764DF87B ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	MultipleSubstitutionRecord_t668A640AFADBD46E3D4EC3A8417D0A02764DF87B V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		MultipleSubstitutionRecord_t668A640AFADBD46E3D4EC3A8417D0A02764DF87B L_5 = ___0_item;
		MultipleSubstitutionRecord_t668A640AFADBD46E3D4EC3A8417D0A02764DF87B L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<MultipleSubstitutionRecord_t668A640AFADBD46E3D4EC3A8417D0A02764DF87B> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisNavigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C_mE14CB8A32BF000DBB8591B244EF1A5DFB5B10B97_gshared (RuntimeArray* __this, Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C L_5 = ___0_item;
		Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisNudgeJobData_tC303DCF7D6A8683AA414D05AA13CB6FAD4BB4022_m36BC6C2B4A8A4E698845343664BBD6013AE10F00_gshared (RuntimeArray* __this, NudgeJobData_tC303DCF7D6A8683AA414D05AA13CB6FAD4BB4022 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	NudgeJobData_tC303DCF7D6A8683AA414D05AA13CB6FAD4BB4022 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		NudgeJobData_tC303DCF7D6A8683AA414D05AA13CB6FAD4BB4022 L_5 = ___0_item;
		NudgeJobData_tC303DCF7D6A8683AA414D05AA13CB6FAD4BB4022 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<NudgeJobData_tC303DCF7D6A8683AA414D05AA13CB6FAD4BB4022> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisOVRSpace_tDA5A6DB241624CD5712AC4A71E565BA171985B4D_m7F9EDC6D06C80A4B5FCE8680E0B9E8036F214209_gshared (RuntimeArray* __this, OVRSpace_tDA5A6DB241624CD5712AC4A71E565BA171985B4D ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	OVRSpace_tDA5A6DB241624CD5712AC4A71E565BA171985B4D V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		OVRSpace_tDA5A6DB241624CD5712AC4A71E565BA171985B4D L_5 = ___0_item;
		OVRSpace_tDA5A6DB241624CD5712AC4A71E565BA171985B4D L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		bool L_8;
		L_8 = OVRSpace_Equals_mC2BD02F8187F62CC9BD585105F927A2BEC24E8BA((&V_2), L_7, il2cpp_rgctx_method(method->rgctx_data, 2));
		if (!L_8)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_9 = V_1;
		int32_t L_10;
		L_10 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_9, L_10));
	}

IL_0061:
	{
		int32_t L_11 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_0065:
	{
		int32_t L_12 = V_1;
		int32_t L_13 = V_0;
		if ((((int32_t)L_12) < ((int32_t)L_13)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_14;
		L_14 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_14, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisOVRSpaceUser_tF145982B655F69985F22D9AB527F17FC76CDC90F_m940D594E66EDD412A11A967FECC2C3BD9953BD39_gshared (RuntimeArray* __this, OVRSpaceUser_tF145982B655F69985F22D9AB527F17FC76CDC90F ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	OVRSpaceUser_tF145982B655F69985F22D9AB527F17FC76CDC90F V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		OVRSpaceUser_tF145982B655F69985F22D9AB527F17FC76CDC90F L_5 = ___0_item;
		OVRSpaceUser_tF145982B655F69985F22D9AB527F17FC76CDC90F L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<OVRSpaceUser_tF145982B655F69985F22D9AB527F17FC76CDC90F> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisRuntimeObject_m2ACF92B2E545054F7EC393728A9F67D7C637E9E1_gshared (RuntimeArray* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	RuntimeObject* V_2 = NULL;
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		RuntimeObject* L_4 = ___0_item;
		if (L_4)
		{
			goto IL_0042;
		}
	}
	{
		RuntimeObject* L_5 = V_2;
		if (L_5)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_6 = V_1;
		int32_t L_7;
		L_7 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_6, L_7));
	}

IL_0042:
	{
		RuntimeObject* L_8 = ___0_item;
		NullCheck((V_2));
		bool L_9;
		L_9 = VirtualFuncInvoker1< bool, RuntimeObject* >::Invoke(0, (V_2), L_8);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisPageInfo_tFFF6B289E9A37E4D69353B32F941421180DA5909_m23FE007F587EC62C7E3FB6C58DC5DF7A994C4961_gshared (RuntimeArray* __this, PageInfo_tFFF6B289E9A37E4D69353B32F941421180DA5909 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	PageInfo_tFFF6B289E9A37E4D69353B32F941421180DA5909 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		PageInfo_tFFF6B289E9A37E4D69353B32F941421180DA5909 L_5 = ___0_item;
		PageInfo_tFFF6B289E9A37E4D69353B32F941421180DA5909 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<PageInfo_tFFF6B289E9A37E4D69353B32F941421180DA5909> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisParameterModifier_t75F1AF13B2AD5EDBD3A3579FD337D0A66E3FF510_m405902A5D0BB3DB3BF6EA0679825BFAE3F05B40A_gshared (RuntimeArray* __this, ParameterModifier_t75F1AF13B2AD5EDBD3A3579FD337D0A66E3FF510 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	ParameterModifier_t75F1AF13B2AD5EDBD3A3579FD337D0A66E3FF510 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		ParameterModifier_t75F1AF13B2AD5EDBD3A3579FD337D0A66E3FF510 L_5 = ___0_item;
		ParameterModifier_t75F1AF13B2AD5EDBD3A3579FD337D0A66E3FF510 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<ParameterModifier_t75F1AF13B2AD5EDBD3A3579FD337D0A66E3FF510> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisPlane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C_mE82CD18353D85357C7E26AABE291A38FAB26F3B9_gshared (RuntimeArray* __this, Plane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Plane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		Plane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C L_5 = ___0_item;
		Plane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<Plane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisPlayableBinding_tB68B3BAC47F4F4C559640472174D5BEF93CB6AB4_m7210EE9AA7B07231147EFA265B4892258A208A62_gshared (RuntimeArray* __this, PlayableBinding_tB68B3BAC47F4F4C559640472174D5BEF93CB6AB4 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	PlayableBinding_tB68B3BAC47F4F4C559640472174D5BEF93CB6AB4 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		PlayableBinding_tB68B3BAC47F4F4C559640472174D5BEF93CB6AB4 L_5 = ___0_item;
		PlayableBinding_tB68B3BAC47F4F4C559640472174D5BEF93CB6AB4 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<PlayableBinding_tB68B3BAC47F4F4C559640472174D5BEF93CB6AB4> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisPlayerLoopSystem_t8AED6BF1C8A309CAA6FF71AC91DD33BDDFF7CF1F_m9DE12A772CEF1018402AF2EDAFF3030F36D4B450_gshared (RuntimeArray* __this, PlayerLoopSystem_t8AED6BF1C8A309CAA6FF71AC91DD33BDDFF7CF1F ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	PlayerLoopSystem_t8AED6BF1C8A309CAA6FF71AC91DD33BDDFF7CF1F V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		PlayerLoopSystem_t8AED6BF1C8A309CAA6FF71AC91DD33BDDFF7CF1F L_5 = ___0_item;
		PlayerLoopSystem_t8AED6BF1C8A309CAA6FF71AC91DD33BDDFF7CF1F L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<PlayerLoopSystem_t8AED6BF1C8A309CAA6FF71AC91DD33BDDFF7CF1F> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisPose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971_mDF412F33A099F74B4C8327E6A3ECD7A5FEB34A25_gshared (RuntimeArray* __this, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_5 = ___0_item;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		bool L_8;
		L_8 = Pose_Equals_mE6D1524E4DDAAF86BF685A00FE9DCE0908A2A9D6((&V_2), L_7, il2cpp_rgctx_method(method->rgctx_data, 2));
		if (!L_8)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_9 = V_1;
		int32_t L_10;
		L_10 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_9, L_10));
	}

IL_0061:
	{
		int32_t L_11 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_0065:
	{
		int32_t L_12 = V_1;
		int32_t L_13 = V_0;
		if ((((int32_t)L_12) < ((int32_t)L_13)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_14;
		L_14 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_14, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisQuaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_m623EB934C6F75D0C45C7147730F129C9E70B72A1_gshared (RuntimeArray* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_5 = ___0_item;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		bool L_8;
		L_8 = Quaternion_Equals_mCF93B00BA4FCDDE6100918451343DB9A0583A0A0_inline((&V_2), L_7, il2cpp_rgctx_method(method->rgctx_data, 2));
		if (!L_8)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_9 = V_1;
		int32_t L_10;
		L_10 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_9, L_10));
	}

IL_0061:
	{
		int32_t L_11 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_0065:
	{
		int32_t L_12 = V_1;
		int32_t L_13 = V_0;
		if ((((int32_t)L_12) < ((int32_t)L_13)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_14;
		L_14 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_14, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisRaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5_mE0AAD68A5E718CF3985CB05CFAAF75152CDADC12_gshared (RuntimeArray* __this, RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 L_5 = ___0_item;
		RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisRaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA_m8C714CB25E06D3C0E0FAD4E70587CC72E6F32EDE_gshared (RuntimeArray* __this, RaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	RaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		RaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA L_5 = ___0_item;
		RaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<RaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisRaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023_m050FD80019BE8A49BF55A02C11C998D3CC4A5708_gshared (RuntimeArray* __this, RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023 L_5 = ___0_item;
		RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisRect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D_mA05583BDB32D3CF683ED9DF737760ABD2F877515_gshared (RuntimeArray* __this, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_5 = ___0_item;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		bool L_8;
		L_8 = Rect_Equals_mD7EB2046512E4A46524A7ED929F1C38A32C408F8_inline((&V_2), L_7, il2cpp_rgctx_method(method->rgctx_data, 2));
		if (!L_8)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_9 = V_1;
		int32_t L_10;
		L_10 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_9, L_10));
	}

IL_0061:
	{
		int32_t L_11 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_0065:
	{
		int32_t L_12 = V_1;
		int32_t L_13 = V_0;
		if ((((int32_t)L_12) < ((int32_t)L_13)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_14;
		L_14 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_14, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisRectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8_mC6F53A684E81523AE59FAE3FB99401B15F9179A8_gshared (RuntimeArray* __this, RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8 L_5 = ___0_item;
		RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisReflectionSnapshot_t361A95030CF97B83EE143D43465E30A2CCDD8122_m62EFEE2DC7E56D7A36685964E1CD56774211F9DE_gshared (RuntimeArray* __this, ReflectionSnapshot_t361A95030CF97B83EE143D43465E30A2CCDD8122 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	ReflectionSnapshot_t361A95030CF97B83EE143D43465E30A2CCDD8122 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		ReflectionSnapshot_t361A95030CF97B83EE143D43465E30A2CCDD8122 L_5 = ___0_item;
		ReflectionSnapshot_t361A95030CF97B83EE143D43465E30A2CCDD8122 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<ReflectionSnapshot_t361A95030CF97B83EE143D43465E30A2CCDD8122> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisReleaseVelocityInformation_t70EFA79B39A6D6D6B6C771E9E043F61F13B0287D_mD3632F6A1073A09304FD21F1CC4DE8F627C8C0A6_gshared (RuntimeArray* __this, ReleaseVelocityInformation_t70EFA79B39A6D6D6B6C771E9E043F61F13B0287D ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	ReleaseVelocityInformation_t70EFA79B39A6D6D6B6C771E9E043F61F13B0287D V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		ReleaseVelocityInformation_t70EFA79B39A6D6D6B6C771E9E043F61F13B0287D L_5 = ___0_item;
		ReleaseVelocityInformation_t70EFA79B39A6D6D6B6C771E9E043F61F13B0287D L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<ReleaseVelocityInformation_t70EFA79B39A6D6D6B6C771E9E043F61F13B0287D> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisResourceLocator_t84F68A0DD2AA185761938E49BBE9B2C46A47E122_mA4775F05AB1ADF639D37D4DE616045B23B60BD80_gshared (RuntimeArray* __this, ResourceLocator_t84F68A0DD2AA185761938E49BBE9B2C46A47E122 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	ResourceLocator_t84F68A0DD2AA185761938E49BBE9B2C46A47E122 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		ResourceLocator_t84F68A0DD2AA185761938E49BBE9B2C46A47E122 L_5 = ___0_item;
		ResourceLocator_t84F68A0DD2AA185761938E49BBE9B2C46A47E122 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<ResourceLocator_t84F68A0DD2AA185761938E49BBE9B2C46A47E122> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisRichTextTagAttribute_t1BB51A8FD6C14746D177D8E84E281A4FD4A720E0_m3496BAA90E73606F94504CA4DA983DD46F4C079D_gshared (RuntimeArray* __this, RichTextTagAttribute_t1BB51A8FD6C14746D177D8E84E281A4FD4A720E0 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	RichTextTagAttribute_t1BB51A8FD6C14746D177D8E84E281A4FD4A720E0 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		RichTextTagAttribute_t1BB51A8FD6C14746D177D8E84E281A4FD4A720E0 L_5 = ___0_item;
		RichTextTagAttribute_t1BB51A8FD6C14746D177D8E84E281A4FD4A720E0 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<RichTextTagAttribute_t1BB51A8FD6C14746D177D8E84E281A4FD4A720E0> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisRichTextTagAttribute_t0600951F833208392F1D8EE3E6A58AD5C797F9DA_mB06ED6A0BB0F690F66143226C308BD775F7F789B_gshared (RuntimeArray* __this, RichTextTagAttribute_t0600951F833208392F1D8EE3E6A58AD5C797F9DA ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	RichTextTagAttribute_t0600951F833208392F1D8EE3E6A58AD5C797F9DA V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		RichTextTagAttribute_t0600951F833208392F1D8EE3E6A58AD5C797F9DA L_5 = ___0_item;
		RichTextTagAttribute_t0600951F833208392F1D8EE3E6A58AD5C797F9DA L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<RichTextTagAttribute_t0600951F833208392F1D8EE3E6A58AD5C797F9DA> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisRotate_tE965CA0281A547AB38B881A3416FF97756D3F4D7_m27C16E0F22210505E3573BDB51703B24D2E898D2_gshared (RuntimeArray* __this, Rotate_tE965CA0281A547AB38B881A3416FF97756D3F4D7 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Rotate_tE965CA0281A547AB38B881A3416FF97756D3F4D7 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		Rotate_tE965CA0281A547AB38B881A3416FF97756D3F4D7 L_5 = ___0_item;
		Rotate_tE965CA0281A547AB38B881A3416FF97756D3F4D7 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		bool L_8;
		L_8 = Rotate_Equals_m49F7E80F31B6317836CA1628FAA1D2194B5B6165((&V_2), L_7, il2cpp_rgctx_method(method->rgctx_data, 2));
		if (!L_8)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_9 = V_1;
		int32_t L_10;
		L_10 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_9, L_10));
	}

IL_0061:
	{
		int32_t L_11 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_0065:
	{
		int32_t L_12 = V_1;
		int32_t L_13 = V_0;
		if ((((int32_t)L_12) < ((int32_t)L_13)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_14;
		L_14 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_14, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisRuleMatcher_t327CFEB02C81AA20E639DE949DCBBAB5E92FF28E_m6B2540F279BFC4E7C7E85CFF8E4B648F89DD1F27_gshared (RuntimeArray* __this, RuleMatcher_t327CFEB02C81AA20E639DE949DCBBAB5E92FF28E ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	RuleMatcher_t327CFEB02C81AA20E639DE949DCBBAB5E92FF28E V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		RuleMatcher_t327CFEB02C81AA20E639DE949DCBBAB5E92FF28E L_5 = ___0_item;
		RuleMatcher_t327CFEB02C81AA20E639DE949DCBBAB5E92FF28E L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<RuleMatcher_t327CFEB02C81AA20E639DE949DCBBAB5E92FF28E> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_mB2AA4BB897B74FFCDA94131C354F02D705EE5644_gshared (RuntimeArray* __this, int8_t ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int8_t V_2 = 0x0;
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		int8_t L_5 = ___0_item;
		int8_t L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		bool L_8;
		L_8 = SByte_Equals_m2436A58AA51169044BB6FAB4F3924C06037C34EF((&V_2), L_7, il2cpp_rgctx_method(method->rgctx_data, 2));
		if (!L_8)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_9 = V_1;
		int32_t L_10;
		L_10 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_9, L_10));
	}

IL_0061:
	{
		int32_t L_11 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_0065:
	{
		int32_t L_12 = V_1;
		int32_t L_13 = V_0;
		if ((((int32_t)L_12) < ((int32_t)L_13)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_14;
		L_14 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_14, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisSByteEnum_t0782AA0EFC5D1042A39675F37D7DD7C098781DD9_mC60E978D6C4273F147ED3DA4830ADE9FA2C7BEDC_gshared (RuntimeArray* __this, int8_t ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int8_t V_2 = 0;
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		int8_t L_5 = ___0_item;
		int8_t L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<int8_t> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = Enum_Equals_m96B1058BA6312E23F31A5FBF594E96EB692EAF4E((Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisScalableImage_t64F0F6F75D1099EF5D595E70CA1A2A7B9914E80F_m187E21402F56E971AC84ECBA0203534817675780_gshared (RuntimeArray* __this, ScalableImage_t64F0F6F75D1099EF5D595E70CA1A2A7B9914E80F ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	ScalableImage_t64F0F6F75D1099EF5D595E70CA1A2A7B9914E80F V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		ScalableImage_t64F0F6F75D1099EF5D595E70CA1A2A7B9914E80F L_5 = ___0_item;
		ScalableImage_t64F0F6F75D1099EF5D595E70CA1A2A7B9914E80F L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<ScalableImage_t64F0F6F75D1099EF5D595E70CA1A2A7B9914E80F> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisScale_t5594C69C1AC9398B57ABF6C4FA0D4E791B7A4DC7_mB661B122232D8A20E79A56CF8E5BD581BC078949_gshared (RuntimeArray* __this, Scale_t5594C69C1AC9398B57ABF6C4FA0D4E791B7A4DC7 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Scale_t5594C69C1AC9398B57ABF6C4FA0D4E791B7A4DC7 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		Scale_t5594C69C1AC9398B57ABF6C4FA0D4E791B7A4DC7 L_5 = ___0_item;
		Scale_t5594C69C1AC9398B57ABF6C4FA0D4E791B7A4DC7 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		bool L_8;
		L_8 = Scale_Equals_mBC77FF15A4E956C17CECA719B2BF64C0F38B24FA((&V_2), L_7, il2cpp_rgctx_method(method->rgctx_data, 2));
		if (!L_8)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_9 = V_1;
		int32_t L_10;
		L_10 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_9, L_10));
	}

IL_0061:
	{
		int32_t L_11 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_0065:
	{
		int32_t L_12 = V_1;
		int32_t L_13 = V_0;
		if ((((int32_t)L_12) < ((int32_t)L_13)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_14;
		L_14 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_14, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisSelectorMatchRecord_t1E93CDB54312CFB4A67768BB25ABB9AFB31BC5D7_m169DFC7B0F329ADE2464D267127E2CC850E6893F_gshared (RuntimeArray* __this, SelectorMatchRecord_t1E93CDB54312CFB4A67768BB25ABB9AFB31BC5D7 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	SelectorMatchRecord_t1E93CDB54312CFB4A67768BB25ABB9AFB31BC5D7 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		SelectorMatchRecord_t1E93CDB54312CFB4A67768BB25ABB9AFB31BC5D7 L_5 = ___0_item;
		SelectorMatchRecord_t1E93CDB54312CFB4A67768BB25ABB9AFB31BC5D7 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<SelectorMatchRecord_t1E93CDB54312CFB4A67768BB25ABB9AFB31BC5D7> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m6F76A005551D0A7DF82E09005AC4BE373BA2A332_gshared (RuntimeArray* __this, float ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	float V_2 = 0.0f;
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		float L_5 = ___0_item;
		float L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		bool L_8;
		L_8 = Single_Equals_mC2B8FFE9D39B98FA2108771CCAFEC580873D054F((&V_2), L_7, il2cpp_rgctx_method(method->rgctx_data, 2));
		if (!L_8)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_9 = V_1;
		int32_t L_10;
		L_10 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_9, L_10));
	}

IL_0061:
	{
		int32_t L_11 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_0065:
	{
		int32_t L_12 = V_1;
		int32_t L_13 = V_0;
		if ((((int32_t)L_12) < ((int32_t)L_13)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_14;
		L_14 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_14, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisSpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD_m99AC9A97CF6364ED89D7590778FCCC540DBA5C81_gshared (RuntimeArray* __this, SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD L_5 = ___0_item;
		SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisStylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF_mCE7BC23788E7F15F43638C1A8983A435F687E76D_gshared (RuntimeArray* __this, StylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	StylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		StylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF L_5 = ___0_item;
		StylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		bool L_8;
		L_8 = StylePropertyName_Equals_m189314376AD8AD19270E89E0402E6A378DAD0F56((&V_2), L_7, il2cpp_rgctx_method(method->rgctx_data, 2));
		if (!L_8)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_9 = V_1;
		int32_t L_10;
		L_10 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_9, L_10));
	}

IL_0061:
	{
		int32_t L_11 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_0065:
	{
		int32_t L_12 = V_1;
		int32_t L_13 = V_0;
		if ((((int32_t)L_12) < ((int32_t)L_13)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_14;
		L_14 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_14, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisStylePropertyValue_tED32F617FABE99611B213BFCF9D1D909E7F141C2_m4939804C4869C1637C8EBD6289F4A04A955DEEF0_gshared (RuntimeArray* __this, StylePropertyValue_tED32F617FABE99611B213BFCF9D1D909E7F141C2 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	StylePropertyValue_tED32F617FABE99611B213BFCF9D1D909E7F141C2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		StylePropertyValue_tED32F617FABE99611B213BFCF9D1D909E7F141C2 L_5 = ___0_item;
		StylePropertyValue_tED32F617FABE99611B213BFCF9D1D909E7F141C2 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<StylePropertyValue_tED32F617FABE99611B213BFCF9D1D909E7F141C2> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisStyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470_m89069EFB7471D51AC8781DF56A790A822276D84A_gshared (RuntimeArray* __this, StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470 L_5 = ___0_item;
		StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisStyleSyntaxToken_tE4474F86F800F298F966FFDE947528453E769E0C_mF6C8B24E91A41F1889B140E3F722AC2813D621EB_gshared (RuntimeArray* __this, StyleSyntaxToken_tE4474F86F800F298F966FFDE947528453E769E0C ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	StyleSyntaxToken_tE4474F86F800F298F966FFDE947528453E769E0C V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		StyleSyntaxToken_tE4474F86F800F298F966FFDE947528453E769E0C L_5 = ___0_item;
		StyleSyntaxToken_tE4474F86F800F298F966FFDE947528453E769E0C L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<StyleSyntaxToken_tE4474F86F800F298F966FFDE947528453E769E0C> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisStyleValue_t56307594EC04E04EFBCC3220595B4AAD66FF93C5_m5E9CE1A1E136ABAF9DDD1BB318E0A258615FFB3D_gshared (RuntimeArray* __this, StyleValue_t56307594EC04E04EFBCC3220595B4AAD66FF93C5 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	StyleValue_t56307594EC04E04EFBCC3220595B4AAD66FF93C5 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		StyleValue_t56307594EC04E04EFBCC3220595B4AAD66FF93C5 L_5 = ___0_item;
		StyleValue_t56307594EC04E04EFBCC3220595B4AAD66FF93C5 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<StyleValue_t56307594EC04E04EFBCC3220595B4AAD66FF93C5> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisStyleValueHandle_t5831643AAA7AD8C5C43A4498C5E0A2545F78227D_m6A60BA59A14CC6C84BEFC28A116D78CA34F6C53E_gshared (RuntimeArray* __this, StyleValueHandle_t5831643AAA7AD8C5C43A4498C5E0A2545F78227D ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	StyleValueHandle_t5831643AAA7AD8C5C43A4498C5E0A2545F78227D V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		StyleValueHandle_t5831643AAA7AD8C5C43A4498C5E0A2545F78227D L_5 = ___0_item;
		StyleValueHandle_t5831643AAA7AD8C5C43A4498C5E0A2545F78227D L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<StyleValueHandle_t5831643AAA7AD8C5C43A4498C5E0A2545F78227D> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisStyleValueManaged_t68DFBEC1594279E4DC56634FD5092318D1E9A5F4_mAAC3E8B444FC24F045831AB04FBA809647A811B0_gshared (RuntimeArray* __this, StyleValueManaged_t68DFBEC1594279E4DC56634FD5092318D1E9A5F4 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	StyleValueManaged_t68DFBEC1594279E4DC56634FD5092318D1E9A5F4 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		StyleValueManaged_t68DFBEC1594279E4DC56634FD5092318D1E9A5F4 L_5 = ___0_item;
		StyleValueManaged_t68DFBEC1594279E4DC56634FD5092318D1E9A5F4 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<StyleValueManaged_t68DFBEC1594279E4DC56634FD5092318D1E9A5F4> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisStyleVariable_t5D4DEC936102A13961F4F2C6214B83D6CDC56269_mE7C67D3A64A9EA91E59814675FE77AF014BD741C_gshared (RuntimeArray* __this, StyleVariable_t5D4DEC936102A13961F4F2C6214B83D6CDC56269 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	StyleVariable_t5D4DEC936102A13961F4F2C6214B83D6CDC56269 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		StyleVariable_t5D4DEC936102A13961F4F2C6214B83D6CDC56269 L_5 = ___0_item;
		StyleVariable_t5D4DEC936102A13961F4F2C6214B83D6CDC56269 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<StyleVariable_t5D4DEC936102A13961F4F2C6214B83D6CDC56269> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisTMP_CharacterInfo_t8B8FF32D6AACE251F2E7835AA5BC6608D535D9F8_m0ADB6D6A9047D4D9793E95CFD4F4D869279C300B_gshared (RuntimeArray* __this, TMP_CharacterInfo_t8B8FF32D6AACE251F2E7835AA5BC6608D535D9F8 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	TMP_CharacterInfo_t8B8FF32D6AACE251F2E7835AA5BC6608D535D9F8 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		TMP_CharacterInfo_t8B8FF32D6AACE251F2E7835AA5BC6608D535D9F8 L_5 = ___0_item;
		TMP_CharacterInfo_t8B8FF32D6AACE251F2E7835AA5BC6608D535D9F8 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<TMP_CharacterInfo_t8B8FF32D6AACE251F2E7835AA5BC6608D535D9F8> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisTMP_FontWeightPair_t2835DA6BF1309AC6C817ECF878232CCF9DDB703E_mD1BFC17D538BACE8AA608BDE2A1F77624EC7C9EC_gshared (RuntimeArray* __this, TMP_FontWeightPair_t2835DA6BF1309AC6C817ECF878232CCF9DDB703E ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	TMP_FontWeightPair_t2835DA6BF1309AC6C817ECF878232CCF9DDB703E V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		TMP_FontWeightPair_t2835DA6BF1309AC6C817ECF878232CCF9DDB703E L_5 = ___0_item;
		TMP_FontWeightPair_t2835DA6BF1309AC6C817ECF878232CCF9DDB703E L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<TMP_FontWeightPair_t2835DA6BF1309AC6C817ECF878232CCF9DDB703E> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisTMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3_m14F7606EC51A453CC171070F99F3600D7F5199E8_gshared (RuntimeArray* __this, TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 L_5 = ___0_item;
		TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisTMP_LinkInfo_t9DC08E8BF8C5E8094AFF8C9FB3C251AF88B92DA6_m759CE7FC65C1724844494E1A379CBF87C062FE0D_gshared (RuntimeArray* __this, TMP_LinkInfo_t9DC08E8BF8C5E8094AFF8C9FB3C251AF88B92DA6 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	TMP_LinkInfo_t9DC08E8BF8C5E8094AFF8C9FB3C251AF88B92DA6 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		TMP_LinkInfo_t9DC08E8BF8C5E8094AFF8C9FB3C251AF88B92DA6 L_5 = ___0_item;
		TMP_LinkInfo_t9DC08E8BF8C5E8094AFF8C9FB3C251AF88B92DA6 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<TMP_LinkInfo_t9DC08E8BF8C5E8094AFF8C9FB3C251AF88B92DA6> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisTMP_MeshInfo_t320C52212E9D672EBB5F5C18C3E0700AA33DD76B_mE7EA828B70A23EAE4CFFC5739FA1F68500F95E88_gshared (RuntimeArray* __this, TMP_MeshInfo_t320C52212E9D672EBB5F5C18C3E0700AA33DD76B ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	TMP_MeshInfo_t320C52212E9D672EBB5F5C18C3E0700AA33DD76B V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		TMP_MeshInfo_t320C52212E9D672EBB5F5C18C3E0700AA33DD76B L_5 = ___0_item;
		TMP_MeshInfo_t320C52212E9D672EBB5F5C18C3E0700AA33DD76B L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<TMP_MeshInfo_t320C52212E9D672EBB5F5C18C3E0700AA33DD76B> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisTMP_PageInfo_t062E56948480FAB066C168E14DC79CC83CC369B4_mCF53BCF46A5799A7BD7A0323ACAB479B9AD2BF7B_gshared (RuntimeArray* __this, TMP_PageInfo_t062E56948480FAB066C168E14DC79CC83CC369B4 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	TMP_PageInfo_t062E56948480FAB066C168E14DC79CC83CC369B4 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		TMP_PageInfo_t062E56948480FAB066C168E14DC79CC83CC369B4 L_5 = ___0_item;
		TMP_PageInfo_t062E56948480FAB066C168E14DC79CC83CC369B4 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<TMP_PageInfo_t062E56948480FAB066C168E14DC79CC83CC369B4> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisTMP_WordInfo_t825112AF0B76E4461F9C7DD336A02CC6A090A983_m3EE8DE28347106EB2057702E21F1C186D13B04CC_gshared (RuntimeArray* __this, TMP_WordInfo_t825112AF0B76E4461F9C7DD336A02CC6A090A983 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	TMP_WordInfo_t825112AF0B76E4461F9C7DD336A02CC6A090A983 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		TMP_WordInfo_t825112AF0B76E4461F9C7DD336A02CC6A090A983 L_5 = ___0_item;
		TMP_WordInfo_t825112AF0B76E4461F9C7DD336A02CC6A090A983 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<TMP_WordInfo_t825112AF0B76E4461F9C7DD336A02CC6A090A983> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisTerrainTileCoord_t2181DDF40A8A428A84817957CB7FB19A314F4F09_mB661ACBA1E3BC0BAF84ADBEA8095B520D6974B81_gshared (RuntimeArray* __this, TerrainTileCoord_t2181DDF40A8A428A84817957CB7FB19A314F4F09 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	TerrainTileCoord_t2181DDF40A8A428A84817957CB7FB19A314F4F09 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		TerrainTileCoord_t2181DDF40A8A428A84817957CB7FB19A314F4F09 L_5 = ___0_item;
		TerrainTileCoord_t2181DDF40A8A428A84817957CB7FB19A314F4F09 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<TerrainTileCoord_t2181DDF40A8A428A84817957CB7FB19A314F4F09> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisTextElementInfo_tDD7A12E319505510E0B350E342BD55F32AB5F976_mFDD67809E3FFFD139EC58C81A847C702AE44D118_gshared (RuntimeArray* __this, TextElementInfo_tDD7A12E319505510E0B350E342BD55F32AB5F976 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	TextElementInfo_tDD7A12E319505510E0B350E342BD55F32AB5F976 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		TextElementInfo_tDD7A12E319505510E0B350E342BD55F32AB5F976 L_5 = ___0_item;
		TextElementInfo_tDD7A12E319505510E0B350E342BD55F32AB5F976 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<TextElementInfo_tDD7A12E319505510E0B350E342BD55F32AB5F976> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisTextProcessingElement_tDCD1EAF9D54829E796F4F9726D63B205344C7698_m4958221170E9B6C17D17FF122C170483D13BFC81_gshared (RuntimeArray* __this, TextProcessingElement_tDCD1EAF9D54829E796F4F9726D63B205344C7698 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	TextProcessingElement_tDCD1EAF9D54829E796F4F9726D63B205344C7698 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		TextProcessingElement_tDCD1EAF9D54829E796F4F9726D63B205344C7698 L_5 = ___0_item;
		TextProcessingElement_tDCD1EAF9D54829E796F4F9726D63B205344C7698 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<TextProcessingElement_tDCD1EAF9D54829E796F4F9726D63B205344C7698> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisTextShadow_t6BADF37AB90ABCB63859A225B58AC5A580950A05_m96055287EA58BB7BB935E09901AE543461B68B93_gshared (RuntimeArray* __this, TextShadow_t6BADF37AB90ABCB63859A225B58AC5A580950A05 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	TextShadow_t6BADF37AB90ABCB63859A225B58AC5A580950A05 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		TextShadow_t6BADF37AB90ABCB63859A225B58AC5A580950A05 L_5 = ___0_item;
		TextShadow_t6BADF37AB90ABCB63859A225B58AC5A580950A05 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		bool L_8;
		L_8 = TextShadow_Equals_m0BC39E39C12D4D49BC554184C02CC78B417289BE((&V_2), L_7, il2cpp_rgctx_method(method->rgctx_data, 2));
		if (!L_8)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_9 = V_1;
		int32_t L_10;
		L_10 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_9, L_10));
	}

IL_0061:
	{
		int32_t L_11 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_0065:
	{
		int32_t L_12 = V_1;
		int32_t L_13 = V_0;
		if ((((int32_t)L_12) < ((int32_t)L_13)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_14;
		L_14 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_14, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisTextureId_tFF4B4AAE53408AB10B0B89CCA5F7B50CF2535E58_m2FC884E165EE4B43098763FEE1BC5986740406BC_gshared (RuntimeArray* __this, TextureId_tFF4B4AAE53408AB10B0B89CCA5F7B50CF2535E58 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	TextureId_tFF4B4AAE53408AB10B0B89CCA5F7B50CF2535E58 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		TextureId_tFF4B4AAE53408AB10B0B89CCA5F7B50CF2535E58 L_5 = ___0_item;
		TextureId_tFF4B4AAE53408AB10B0B89CCA5F7B50CF2535E58 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		bool L_8;
		L_8 = TextureId_Equals_m455DF7673CD85DCDDAA9AAC0F888DA8F8488081D((&V_2), L_7, il2cpp_rgctx_method(method->rgctx_data, 2));
		if (!L_8)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_9 = V_1;
		int32_t L_10;
		L_10 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_9, L_10));
	}

IL_0061:
	{
		int32_t L_11 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_0065:
	{
		int32_t L_12 = V_1;
		int32_t L_13 = V_0;
		if ((((int32_t)L_12) < ((int32_t)L_13)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_14;
		L_14 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_14, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisTexture_t_tFB45C121EC1C6016549D7A8194F11C1338E42196_mA2A8448BB056BC018339E7B26270C243FDFA5D96_gshared (RuntimeArray* __this, Texture_t_tFB45C121EC1C6016549D7A8194F11C1338E42196 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Texture_t_tFB45C121EC1C6016549D7A8194F11C1338E42196 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		Texture_t_tFB45C121EC1C6016549D7A8194F11C1338E42196 L_5 = ___0_item;
		Texture_t_tFB45C121EC1C6016549D7A8194F11C1338E42196 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<Texture_t_tFB45C121EC1C6016549D7A8194F11C1338E42196> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisTimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_mDD6859DC3C38CEF85D1A4F2CCF59DFD0C2FF03BF_gshared (RuntimeArray* __this, TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A L_5 = ___0_item;
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		bool L_8;
		L_8 = TimeSpan_Equals_mFE37205C5F1295DD799B0EE207142BFA4222D47A((&V_2), L_7, il2cpp_rgctx_method(method->rgctx_data, 2));
		if (!L_8)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_9 = V_1;
		int32_t L_10;
		L_10 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_9, L_10));
	}

IL_0061:
	{
		int32_t L_11 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_0065:
	{
		int32_t L_12 = V_1;
		int32_t L_13 = V_0;
		if ((((int32_t)L_12) < ((int32_t)L_13)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_14;
		L_14 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_14, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisTimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E_mB6428BA9D2752F1D6F67040206CCAC2D3E0C9F19_gshared (RuntimeArray* __this, TimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	TimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		TimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E L_5 = ___0_item;
		TimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		bool L_8;
		L_8 = TimeValue_Equals_mA581A2F3D44993E0C780E6BC36C355875CDAB513((&V_2), L_7, il2cpp_rgctx_method(method->rgctx_data, 2));
		if (!L_8)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_9 = V_1;
		int32_t L_10;
		L_10 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_9, L_10));
	}

IL_0061:
	{
		int32_t L_11 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_0065:
	{
		int32_t L_12 = V_1;
		int32_t L_13 = V_0;
		if ((((int32_t)L_12) < ((int32_t)L_13)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_14;
		L_14 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_14, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisTrackedDevicePose_t_tEA070E1560BC50A88F8237D1DB91D90A91A02259_m9233B5CFDA790EDF9CBAB07B66FE2416875D82AE_gshared (RuntimeArray* __this, TrackedDevicePose_t_tEA070E1560BC50A88F8237D1DB91D90A91A02259 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	TrackedDevicePose_t_tEA070E1560BC50A88F8237D1DB91D90A91A02259 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		TrackedDevicePose_t_tEA070E1560BC50A88F8237D1DB91D90A91A02259 L_5 = ___0_item;
		TrackedDevicePose_t_tEA070E1560BC50A88F8237D1DB91D90A91A02259 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<TrackedDevicePose_t_tEA070E1560BC50A88F8237D1DB91D90A91A02259> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisTransform3x4_t9F79FC0112A00D3FFD7AFAD2D10AD22DF929052F_m7725BC6CF93C53C14FF6BFD1E968924AB49634A3_gshared (RuntimeArray* __this, Transform3x4_t9F79FC0112A00D3FFD7AFAD2D10AD22DF929052F ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Transform3x4_t9F79FC0112A00D3FFD7AFAD2D10AD22DF929052F V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		Transform3x4_t9F79FC0112A00D3FFD7AFAD2D10AD22DF929052F L_5 = ___0_item;
		Transform3x4_t9F79FC0112A00D3FFD7AFAD2D10AD22DF929052F L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<Transform3x4_t9F79FC0112A00D3FFD7AFAD2D10AD22DF929052F> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisTransformOrigin_tD11A368A96C0771398EBB4E6D435318AC0EF8502_m91441AC13CA557709F36FFB581B7F329416A4AB6_gshared (RuntimeArray* __this, TransformOrigin_tD11A368A96C0771398EBB4E6D435318AC0EF8502 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	TransformOrigin_tD11A368A96C0771398EBB4E6D435318AC0EF8502 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		TransformOrigin_tD11A368A96C0771398EBB4E6D435318AC0EF8502 L_5 = ___0_item;
		TransformOrigin_tD11A368A96C0771398EBB4E6D435318AC0EF8502 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		bool L_8;
		L_8 = TransformOrigin_Equals_m1BB998DC4BF023074E997BDF9FFBB477B8D8C542((&V_2), L_7, il2cpp_rgctx_method(method->rgctx_data, 2));
		if (!L_8)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_9 = V_1;
		int32_t L_10;
		L_10 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_9, L_10));
	}

IL_0061:
	{
		int32_t L_11 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_0065:
	{
		int32_t L_12 = V_1;
		int32_t L_13 = V_0;
		if ((((int32_t)L_12) < ((int32_t)L_13)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_14;
		L_14 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_14, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisTranslate_t494F6E802F8A640D67819C9D26BE62DED1218A8E_m1188AC264C6F52FFC8B15FF46B5835FBD6666597_gshared (RuntimeArray* __this, Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E L_5 = ___0_item;
		Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		bool L_8;
		L_8 = Translate_Equals_mEE5D86BA4C5C8C65EC0F226E081F49BA891792E1((&V_2), L_7, il2cpp_rgctx_method(method->rgctx_data, 2));
		if (!L_8)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_9 = V_1;
		int32_t L_10;
		L_10 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_9, L_10));
	}

IL_0061:
	{
		int32_t L_11 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_0065:
	{
		int32_t L_12 = V_1;
		int32_t L_13 = V_0;
		if ((((int32_t)L_12) < ((int32_t)L_13)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_14;
		L_14 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_14, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisTreeInstance_t382B018173ED020660D262061EA9424682614F50_m629ABD15017D249BDEB09CDBA676F45CD932DB82_gshared (RuntimeArray* __this, TreeInstance_t382B018173ED020660D262061EA9424682614F50 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	TreeInstance_t382B018173ED020660D262061EA9424682614F50 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		TreeInstance_t382B018173ED020660D262061EA9424682614F50 L_5 = ___0_item;
		TreeInstance_t382B018173ED020660D262061EA9424682614F50 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<TreeInstance_t382B018173ED020660D262061EA9424682614F50> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisTreeItem_t6B0F84E487FB869A51E1DA4987183127271F4F90_m356DFBA857F5BC428F0D9CB8D3B31A4094BB6450_gshared (RuntimeArray* __this, TreeItem_t6B0F84E487FB869A51E1DA4987183127271F4F90 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	TreeItem_t6B0F84E487FB869A51E1DA4987183127271F4F90 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		TreeItem_t6B0F84E487FB869A51E1DA4987183127271F4F90 L_5 = ___0_item;
		TreeItem_t6B0F84E487FB869A51E1DA4987183127271F4F90 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<TreeItem_t6B0F84E487FB869A51E1DA4987183127271F4F90> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisTreeViewItemWrapper_t4475B9923345B2D51C29E1E5285A4F92FA65C839_m188EBA3F38115E56A9F30557A0DB503CEB1DAA85_gshared (RuntimeArray* __this, TreeViewItemWrapper_t4475B9923345B2D51C29E1E5285A4F92FA65C839 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	TreeViewItemWrapper_t4475B9923345B2D51C29E1E5285A4F92FA65C839 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		TreeViewItemWrapper_t4475B9923345B2D51C29E1E5285A4F92FA65C839 L_5 = ___0_item;
		TreeViewItemWrapper_t4475B9923345B2D51C29E1E5285A4F92FA65C839 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<TreeViewItemWrapper_t4475B9923345B2D51C29E1E5285A4F92FA65C839> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisTubePoint_t0763BD8380C0EB98C229BA646C7116006FE0C33B_mEB87629DB67FCD1C7724643433E83D4DFFB61C45_gshared (RuntimeArray* __this, TubePoint_t0763BD8380C0EB98C229BA646C7116006FE0C33B ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	TubePoint_t0763BD8380C0EB98C229BA646C7116006FE0C33B V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		TubePoint_t0763BD8380C0EB98C229BA646C7116006FE0C33B L_5 = ___0_item;
		TubePoint_t0763BD8380C0EB98C229BA646C7116006FE0C33B L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<TubePoint_t0763BD8380C0EB98C229BA646C7116006FE0C33B> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisUICharInfo_t24C2EA0F2F3A938100C271891D9DEB015ABA5FBD_m9725D9CD37131942A5ADE8E695BBB953127D84F5_gshared (RuntimeArray* __this, UICharInfo_t24C2EA0F2F3A938100C271891D9DEB015ABA5FBD ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	UICharInfo_t24C2EA0F2F3A938100C271891D9DEB015ABA5FBD V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		UICharInfo_t24C2EA0F2F3A938100C271891D9DEB015ABA5FBD L_5 = ___0_item;
		UICharInfo_t24C2EA0F2F3A938100C271891D9DEB015ABA5FBD L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<UICharInfo_t24C2EA0F2F3A938100C271891D9DEB015ABA5FBD> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisUILineInfo_tC6FF4F85BD2316FADA2148A1789B3FF0B05A6CAC_m512D2B29B566823033FC9A99CC7EBA4FA84C13FD_gshared (RuntimeArray* __this, UILineInfo_tC6FF4F85BD2316FADA2148A1789B3FF0B05A6CAC ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	UILineInfo_tC6FF4F85BD2316FADA2148A1789B3FF0B05A6CAC V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		UILineInfo_tC6FF4F85BD2316FADA2148A1789B3FF0B05A6CAC L_5 = ___0_item;
		UILineInfo_tC6FF4F85BD2316FADA2148A1789B3FF0B05A6CAC L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<UILineInfo_tC6FF4F85BD2316FADA2148A1789B3FF0B05A6CAC> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisUIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207_mDC042F93AA9594EB642017B564DDE1F6395897CB_gshared (RuntimeArray* __this, UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_5 = ___0_item;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_mEC06E99986937CFA12CBFE4F7212619918ADE33E_gshared (RuntimeArray* __this, uint16_t ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	uint16_t V_2 = 0;
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		uint16_t L_5 = ___0_item;
		uint16_t L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		bool L_8;
		L_8 = UInt16_Equals_mA21E8831A57BC983311BFEE7023615002FC50207((&V_2), L_7, il2cpp_rgctx_method(method->rgctx_data, 2));
		if (!L_8)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_9 = V_1;
		int32_t L_10;
		L_10 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_9, L_10));
	}

IL_0061:
	{
		int32_t L_11 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_0065:
	{
		int32_t L_12 = V_1;
		int32_t L_13 = V_0;
		if ((((int32_t)L_12) < ((int32_t)L_13)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_14;
		L_14 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_14, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisUInt16Enum_t481D129F5FAE551E8684190D640F0FAEFB237CF8_m96155B7525A4A8B332E7093F12E6C4889CB9677E_gshared (RuntimeArray* __this, uint16_t ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	uint16_t V_2 = 0;
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		uint16_t L_5 = ___0_item;
		uint16_t L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<uint16_t> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = Enum_Equals_m96B1058BA6312E23F31A5FBF594E96EB692EAF4E((Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_mB598970CC4AFA95A38D6DBDE6CB0D4043C1F5A64_gshared (RuntimeArray* __this, uint32_t ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	uint32_t V_2 = 0;
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		uint32_t L_5 = ___0_item;
		uint32_t L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		bool L_8;
		L_8 = UInt32_Equals_mC516812849D8243A72D34D830D840A1F1E32795E((&V_2), L_7, il2cpp_rgctx_method(method->rgctx_data, 2));
		if (!L_8)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_9 = V_1;
		int32_t L_10;
		L_10 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_9, L_10));
	}

IL_0061:
	{
		int32_t L_11 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_0065:
	{
		int32_t L_12 = V_1;
		int32_t L_13 = V_0;
		if ((((int32_t)L_12) < ((int32_t)L_13)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_14;
		L_14 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_14, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisUInt32Enum_t7B4F5C6C14D2C4B2A5927C59620BE3868714DACF_m4F30BDE21238E1F62BB09B6AD0780CEE39424C89_gshared (RuntimeArray* __this, uint32_t ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	uint32_t V_2 = 0;
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		uint32_t L_5 = ___0_item;
		uint32_t L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<uint32_t> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = Enum_Equals_m96B1058BA6312E23F31A5FBF594E96EB692EAF4E((Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_mF41FACACB76BF1E2A384B990A17AD895AF3AB357_gshared (RuntimeArray* __this, uint64_t ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	uint64_t V_2 = 0;
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		uint64_t L_5 = ___0_item;
		uint64_t L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		bool L_8;
		L_8 = UInt64_Equals_m175E7A6F2A4606A94579529400854317542648A9((&V_2), L_7, il2cpp_rgctx_method(method->rgctx_data, 2));
		if (!L_8)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_9 = V_1;
		int32_t L_10;
		L_10 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_9, L_10));
	}

IL_0061:
	{
		int32_t L_11 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_0065:
	{
		int32_t L_12 = V_1;
		int32_t L_13 = V_0;
		if ((((int32_t)L_12) < ((int32_t)L_13)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_14;
		L_14 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_14, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisUsageMapping_t8FC44EC8053F0AEDE686EC2C57944F0A6A3CE5DB_mC3C030D56C79BF9B1E921C3DB6D9656B14FD3090_gshared (RuntimeArray* __this, UsageMapping_t8FC44EC8053F0AEDE686EC2C57944F0A6A3CE5DB ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	UsageMapping_t8FC44EC8053F0AEDE686EC2C57944F0A6A3CE5DB V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		UsageMapping_t8FC44EC8053F0AEDE686EC2C57944F0A6A3CE5DB L_5 = ___0_item;
		UsageMapping_t8FC44EC8053F0AEDE686EC2C57944F0A6A3CE5DB L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<UsageMapping_t8FC44EC8053F0AEDE686EC2C57944F0A6A3CE5DB> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisVRActiveActionSet_t_t75460FB6AD162CEE3E823907F444059DB792837C_m879ACA9DEAF1A3D68A99ABCD9916ED359EA0A48E_gshared (RuntimeArray* __this, VRActiveActionSet_t_t75460FB6AD162CEE3E823907F444059DB792837C ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	VRActiveActionSet_t_t75460FB6AD162CEE3E823907F444059DB792837C V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		VRActiveActionSet_t_t75460FB6AD162CEE3E823907F444059DB792837C L_5 = ___0_item;
		VRActiveActionSet_t_t75460FB6AD162CEE3E823907F444059DB792837C L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<VRActiveActionSet_t_t75460FB6AD162CEE3E823907F444059DB792837C> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisVRBoneTransform_t_t6E518B1C0D77961AB6C91EC6F3A954B78570C094_mE82ABF3B884A9F2C8BC3ADB71F6F193BA980707B_gshared (RuntimeArray* __this, VRBoneTransform_t_t6E518B1C0D77961AB6C91EC6F3A954B78570C094 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	VRBoneTransform_t_t6E518B1C0D77961AB6C91EC6F3A954B78570C094 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		VRBoneTransform_t_t6E518B1C0D77961AB6C91EC6F3A954B78570C094 L_5 = ___0_item;
		VRBoneTransform_t_t6E518B1C0D77961AB6C91EC6F3A954B78570C094 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<VRBoneTransform_t_t6E518B1C0D77961AB6C91EC6F3A954B78570C094> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m01C8456C1A7B1A78BE016ED5248D83A0748A2C5C_gshared (RuntimeArray* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5 = ___0_item;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		bool L_8;
		L_8 = Vector2_Equals_mA4E81D6FCE503DBD502BA499708344410F60DA4E_inline((&V_2), L_7, il2cpp_rgctx_method(method->rgctx_data, 2));
		if (!L_8)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_9 = V_1;
		int32_t L_10;
		L_10 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_9, L_10));
	}

IL_0061:
	{
		int32_t L_11 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_0065:
	{
		int32_t L_12 = V_1;
		int32_t L_13 = V_0;
		if ((((int32_t)L_12) < ((int32_t)L_13)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_14;
		L_14 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_14, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisVector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A_mF92CB1A90C96594B6A67E7E2680C004FAD67913E_gshared (RuntimeArray* __this, Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A L_5 = ___0_item;
		Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		bool L_8;
		L_8 = Vector2Int_Equals_m6D91EFAA6B3254334436BD262A4547EA08281BA3_inline((&V_2), L_7, il2cpp_rgctx_method(method->rgctx_data, 2));
		if (!L_8)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_9 = V_1;
		int32_t L_10;
		L_10 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_9, L_10));
	}

IL_0061:
	{
		int32_t L_11 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_0065:
	{
		int32_t L_12 = V_1;
		int32_t L_13 = V_0;
		if ((((int32_t)L_12) < ((int32_t)L_13)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_14;
		L_14 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_14, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m8607C92881A800B10A96D62148CE7A750E62640E_gshared (RuntimeArray* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = ___0_item;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		bool L_8;
		L_8 = Vector3_Equals_mB4BE43D5986864F5C22B919F2957E0309F10E3B4_inline((&V_2), L_7, il2cpp_rgctx_method(method->rgctx_data, 2));
		if (!L_8)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_9 = V_1;
		int32_t L_10;
		L_10 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_9, L_10));
	}

IL_0061:
	{
		int32_t L_11 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_0065:
	{
		int32_t L_12 = V_1;
		int32_t L_13 = V_0;
		if ((((int32_t)L_12) < ((int32_t)L_13)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_14;
		L_14 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_14, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisVector3Int_t65CB06F557251D18A37BD71F3655BA836A357376_m2050E232F77364815777E995C96FC9E41E98C582_gshared (RuntimeArray* __this, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 L_5 = ___0_item;
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		bool L_8;
		L_8 = Vector3Int_Equals_m419967067E76BF0381E4CD8FE14DF5ED46ACFB02_inline((&V_2), L_7, il2cpp_rgctx_method(method->rgctx_data, 2));
		if (!L_8)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_9 = V_1;
		int32_t L_10;
		L_10 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_9, L_10));
	}

IL_0061:
	{
		int32_t L_11 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_0065:
	{
		int32_t L_12 = V_1;
		int32_t L_13 = V_0;
		if ((((int32_t)L_12) < ((int32_t)L_13)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_14;
		L_14 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_14, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mF072B5964F42AC3B28463A6572BBB5E3E8A89AC1_gshared (RuntimeArray* __this, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_5 = ___0_item;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		bool L_8;
		L_8 = Vector4_Equals_mC2596CA0F441D25DE7A9419BE66A8FA2DA355CB9_inline((&V_2), L_7, il2cpp_rgctx_method(method->rgctx_data, 2));
		if (!L_8)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_9 = V_1;
		int32_t L_10;
		L_10 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_9, L_10));
	}

IL_0061:
	{
		int32_t L_11 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_0065:
	{
		int32_t L_12 = V_1;
		int32_t L_13 = V_0;
		if ((((int32_t)L_12) < ((int32_t)L_13)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_14;
		L_14 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_14, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisVectorImageVertex_t9D42377517CC059BD40E2A626ECEBE0C94CA0948_mD4D910CB0A446EB60AB4A2DC996822EAAC33B519_gshared (RuntimeArray* __this, VectorImageVertex_t9D42377517CC059BD40E2A626ECEBE0C94CA0948 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	VectorImageVertex_t9D42377517CC059BD40E2A626ECEBE0C94CA0948 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		VectorImageVertex_t9D42377517CC059BD40E2A626ECEBE0C94CA0948 L_5 = ___0_item;
		VectorImageVertex_t9D42377517CC059BD40E2A626ECEBE0C94CA0948 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<VectorImageVertex_t9D42377517CC059BD40E2A626ECEBE0C94CA0948> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisVertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7_m4E4CB613B2606CD31E2057AC9E443B271954A42C_gshared (RuntimeArray* __this, Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7 L_5 = ___0_item;
		Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisVertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76_mBB7A6225A160ECD0FBE13434056C573C2F22718E_gshared (RuntimeArray* __this, VertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	VertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		VertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76 L_5 = ___0_item;
		VertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		bool L_8;
		L_8 = VertexAttributeDescriptor_Equals_m6FBFEE42E1BAAAC2D38434EDF0906C5B76D56BE5((&V_2), L_7, il2cpp_rgctx_method(method->rgctx_data, 2));
		if (!L_8)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_9 = V_1;
		int32_t L_10;
		L_10 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_9, L_10));
	}

IL_0061:
	{
		int32_t L_11 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_0065:
	{
		int32_t L_12 = V_1;
		int32_t L_13 = V_0;
		if ((((int32_t)L_12) < ((int32_t)L_13)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_14;
		L_14 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_14, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisWitEntityInfo_t9715AD316420F516F56031342F3AC0E665C2CB62_m5C2474FB04768E24FD1232E955FC08226C4D5B39_gshared (RuntimeArray* __this, WitEntityInfo_t9715AD316420F516F56031342F3AC0E665C2CB62 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	WitEntityInfo_t9715AD316420F516F56031342F3AC0E665C2CB62 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		WitEntityInfo_t9715AD316420F516F56031342F3AC0E665C2CB62 L_5 = ___0_item;
		WitEntityInfo_t9715AD316420F516F56031342F3AC0E665C2CB62 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		bool L_8;
		L_8 = WitEntityInfo_Equals_m4CE8855D9523C6F2B2B5718A63E3E4C2AE580212((&V_2), L_7, il2cpp_rgctx_method(method->rgctx_data, 2));
		if (!L_8)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_9 = V_1;
		int32_t L_10;
		L_10 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_9, L_10));
	}

IL_0061:
	{
		int32_t L_11 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_0065:
	{
		int32_t L_12 = V_1;
		int32_t L_13 = V_0;
		if ((((int32_t)L_12) < ((int32_t)L_13)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_14;
		L_14 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_14, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisWitEntityKeywordInfo_tE0A290B8BFF00EF007649834C336D5DD48DA445B_m96B25B19A5526FB9F9FA5F6120D6D844FBB19793_gshared (RuntimeArray* __this, WitEntityKeywordInfo_tE0A290B8BFF00EF007649834C336D5DD48DA445B ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	WitEntityKeywordInfo_tE0A290B8BFF00EF007649834C336D5DD48DA445B V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		WitEntityKeywordInfo_tE0A290B8BFF00EF007649834C336D5DD48DA445B L_5 = ___0_item;
		WitEntityKeywordInfo_tE0A290B8BFF00EF007649834C336D5DD48DA445B L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		bool L_8;
		L_8 = WitEntityKeywordInfo_Equals_mE64ACAA27AC5ECB36A5C85BF91F96B72689EDAC6((&V_2), L_7, il2cpp_rgctx_method(method->rgctx_data, 2));
		if (!L_8)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_9 = V_1;
		int32_t L_10;
		L_10 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_9, L_10));
	}

IL_0061:
	{
		int32_t L_11 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_0065:
	{
		int32_t L_12 = V_1;
		int32_t L_13 = V_0;
		if ((((int32_t)L_12) < ((int32_t)L_13)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_14;
		L_14 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_14, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisWitEntityRoleInfo_t444B640CBDE235AB703A9C4AE80477D9AF548C67_mCE69634FBE1A0F41A9BA3FB2B6BAF249228C5A5F_gshared (RuntimeArray* __this, WitEntityRoleInfo_t444B640CBDE235AB703A9C4AE80477D9AF548C67 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	WitEntityRoleInfo_t444B640CBDE235AB703A9C4AE80477D9AF548C67 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		WitEntityRoleInfo_t444B640CBDE235AB703A9C4AE80477D9AF548C67 L_5 = ___0_item;
		WitEntityRoleInfo_t444B640CBDE235AB703A9C4AE80477D9AF548C67 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<WitEntityRoleInfo_t444B640CBDE235AB703A9C4AE80477D9AF548C67> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisWitIntentEntityInfo_tCFB51DC37AF74C46DA5C1C16FF165B8011B20074_mD4C41BE08F267E0C491E3C0ADD2376E8C6F98DA4_gshared (RuntimeArray* __this, WitIntentEntityInfo_tCFB51DC37AF74C46DA5C1C16FF165B8011B20074 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	WitIntentEntityInfo_tCFB51DC37AF74C46DA5C1C16FF165B8011B20074 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		WitIntentEntityInfo_tCFB51DC37AF74C46DA5C1C16FF165B8011B20074 L_5 = ___0_item;
		WitIntentEntityInfo_tCFB51DC37AF74C46DA5C1C16FF165B8011B20074 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<WitIntentEntityInfo_tCFB51DC37AF74C46DA5C1C16FF165B8011B20074> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisWitIntentInfo_tB428004D9EC2F2E6130328B64B9F673EF7ACCA3D_mF85D9F4AF48CEBB4B41433C299031A20C912CE1C_gshared (RuntimeArray* __this, WitIntentInfo_tB428004D9EC2F2E6130328B64B9F673EF7ACCA3D ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	WitIntentInfo_tB428004D9EC2F2E6130328B64B9F673EF7ACCA3D V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		WitIntentInfo_tB428004D9EC2F2E6130328B64B9F673EF7ACCA3D L_5 = ___0_item;
		WitIntentInfo_tB428004D9EC2F2E6130328B64B9F673EF7ACCA3D L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<WitIntentInfo_tB428004D9EC2F2E6130328B64B9F673EF7ACCA3D> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisWitTraitValueInfo_t5757B1AD95655FB5A9A9CE8BCDA527DDCAB94397_m5831F3C2CE069510235AC3362F9CC7301D0CDF04_gshared (RuntimeArray* __this, WitTraitValueInfo_t5757B1AD95655FB5A9A9CE8BCDA527DDCAB94397 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	WitTraitValueInfo_t5757B1AD95655FB5A9A9CE8BCDA527DDCAB94397 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		WitTraitValueInfo_t5757B1AD95655FB5A9A9CE8BCDA527DDCAB94397 L_5 = ___0_item;
		WitTraitValueInfo_t5757B1AD95655FB5A9A9CE8BCDA527DDCAB94397 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<WitTraitValueInfo_t5757B1AD95655FB5A9A9CE8BCDA527DDCAB94397> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisWitVoiceInfo_t87CF0A90E6DF0CB0CDD2B7F148C2975BFBDB1C6E_m4AF823566291ED738528EFC8217C275B9F68058D_gshared (RuntimeArray* __this, WitVoiceInfo_t87CF0A90E6DF0CB0CDD2B7F148C2975BFBDB1C6E ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	WitVoiceInfo_t87CF0A90E6DF0CB0CDD2B7F148C2975BFBDB1C6E V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		WitVoiceInfo_t87CF0A90E6DF0CB0CDD2B7F148C2975BFBDB1C6E L_5 = ___0_item;
		WitVoiceInfo_t87CF0A90E6DF0CB0CDD2B7F148C2975BFBDB1C6E L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<WitVoiceInfo_t87CF0A90E6DF0CB0CDD2B7F148C2975BFBDB1C6E> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisWordInfo_tA466206097891A5A2590896EE164AFC406EB060D_m8A974827B6ED52B570A43AB71D2EA251B552CC33_gshared (RuntimeArray* __this, WordInfo_tA466206097891A5A2590896EE164AFC406EB060D ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	WordInfo_tA466206097891A5A2590896EE164AFC406EB060D V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		WordInfo_tA466206097891A5A2590896EE164AFC406EB060D L_5 = ___0_item;
		WordInfo_tA466206097891A5A2590896EE164AFC406EB060D L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<WordInfo_tA466206097891A5A2590896EE164AFC406EB060D> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisWordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A_m638C56CD91A3E5CE706043D796606C529D2CB119_gshared (RuntimeArray* __this, WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A L_5 = ___0_item;
		WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisWordWrapState_tD71131CF008362DB9562FB9794AE9D9225D8F123_mED6789E3761D6FA098C8691795306CD85349365B_gshared (RuntimeArray* __this, WordWrapState_tD71131CF008362DB9562FB9794AE9D9225D8F123 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	WordWrapState_tD71131CF008362DB9562FB9794AE9D9225D8F123 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		WordWrapState_tD71131CF008362DB9562FB9794AE9D9225D8F123 L_5 = ___0_item;
		WordWrapState_tD71131CF008362DB9562FB9794AE9D9225D8F123 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<WordWrapState_tD71131CF008362DB9562FB9794AE9D9225D8F123> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisX509ChainStatus_t5A57DDA24AA1FCA9F2B8D70B767CDDF388E4A80D_m0C5C554BB812EDD8F79E40C669E95F95EC6160F9_gshared (RuntimeArray* __this, X509ChainStatus_t5A57DDA24AA1FCA9F2B8D70B767CDDF388E4A80D ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	X509ChainStatus_t5A57DDA24AA1FCA9F2B8D70B767CDDF388E4A80D V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		X509ChainStatus_t5A57DDA24AA1FCA9F2B8D70B767CDDF388E4A80D L_5 = ___0_item;
		X509ChainStatus_t5A57DDA24AA1FCA9F2B8D70B767CDDF388E4A80D L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<X509ChainStatus_t5A57DDA24AA1FCA9F2B8D70B767CDDF388E4A80D> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisXRNodeState_t683158812A1D80A6BC73DB97405BB0B795A9111A_mFF8AE41F64A612EDEDF6ADBBB92712EDF0155A80_gshared (RuntimeArray* __this, XRNodeState_t683158812A1D80A6BC73DB97405BB0B795A9111A ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	XRNodeState_t683158812A1D80A6BC73DB97405BB0B795A9111A V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		XRNodeState_t683158812A1D80A6BC73DB97405BB0B795A9111A L_5 = ___0_item;
		XRNodeState_t683158812A1D80A6BC73DB97405BB0B795A9111A L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<XRNodeState_t683158812A1D80A6BC73DB97405BB0B795A9111A> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisIl2CppFullySharedGenericAny_m8B7CCAC86F27AB5C27D0AB84D823D11D11013D25_gshared (RuntimeArray* __this, Il2CppFullySharedGenericAny ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_T_tCF2F275D8C8C55C55C2E8D4C4B513FF0766ABE6B = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
	void* L_12 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->rgctx_data, 1)));
	const Il2CppFullySharedGenericAny L_4 = alloca(SizeOf_T_tCF2F275D8C8C55C55C2E8D4C4B513FF0766ABE6B);
	const Il2CppFullySharedGenericAny L_6 = L_4;
	const Il2CppFullySharedGenericAny L_10 = L_4;
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Il2CppFullySharedGenericAny V_2 = alloca(SizeOf_T_tCF2F275D8C8C55C55C2E8D4C4B513FF0766ABE6B);
	memset(V_2, 0, SizeOf_T_tCF2F275D8C8C55C55C2E8D4C4B513FF0766ABE6B);
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (Il2CppFullySharedGenericAny*)V_2);
		il2cpp_codegen_memcpy(L_4, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 1)) ? ___0_item : &___0_item), SizeOf_T_tCF2F275D8C8C55C55C2E8D4C4B513FF0766ABE6B);
		bool L_5 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), L_4);
		if (L_5)
		{
			goto IL_0042;
		}
	}
	{
		il2cpp_codegen_memcpy(L_6, V_2, SizeOf_T_tCF2F275D8C8C55C55C2E8D4C4B513FF0766ABE6B);
		bool L_7 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), L_6);
		if (L_7)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_8 = V_1;
		int32_t L_9;
		L_9 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_8, L_9));
	}

IL_0042:
	{
		il2cpp_codegen_memcpy(L_10, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 1)) ? ___0_item : &___0_item), SizeOf_T_tCF2F275D8C8C55C55C2E8D4C4B513FF0766ABE6B);
		RuntimeObject* L_11 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), L_10);
		bool L_13;
		L_13 = ConstrainedFuncInvoker1< bool, RuntimeObject* >::Invoke(il2cpp_rgctx_data(method->rgctx_data, 1), il2cpp_rgctx_method(method->rgctx_data, 2), L_12, (void*)(Il2CppFullySharedGenericAny*)V_2, L_11);
		if (!L_13)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_14 = V_1;
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_14, L_15));
	}

IL_0061:
	{
		int32_t L_16 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_16, 1));
	}

IL_0065:
	{
		int32_t L_17 = V_1;
		int32_t L_18 = V_0;
		if ((((int32_t)L_17) < ((int32_t)L_18)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_19;
		L_19 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_19, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_Tisjvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225_mED8E439E04FB9F91B7180387B5CF3635FE8D9AC6_gshared (RuntimeArray* __this, jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225 L_5 = ___0_item;
		jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisMatchContext_t04110FFA271D89A23BC1918BE657634A7DC06253_m42022C48B079C10FB78D4C9AD7B18FBB1AB42B33_gshared (RuntimeArray* __this, MatchContext_t04110FFA271D89A23BC1918BE657634A7DC06253 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	MatchContext_t04110FFA271D89A23BC1918BE657634A7DC06253 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		MatchContext_t04110FFA271D89A23BC1918BE657634A7DC06253 L_5 = ___0_item;
		MatchContext_t04110FFA271D89A23BC1918BE657634A7DC06253 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<MatchContext_t04110FFA271D89A23BC1918BE657634A7DC06253> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisOrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837_mDBD0FB46B01ABF3DDAF2B784A3A3E91CC16C998F_gshared (RuntimeArray* __this, OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837 L_5 = ___0_item;
		OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisPage_t04FE552A388BF55B12C8868E19589136957E00A5_m2326940FBBFF6C4D56FA7B8FC99DDF815289E2F9_gshared (RuntimeArray* __this, Page_t04FE552A388BF55B12C8868E19589136957E00A5 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Page_t04FE552A388BF55B12C8868E19589136957E00A5 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		Page_t04FE552A388BF55B12C8868E19589136957E00A5 L_5 = ___0_item;
		Page_t04FE552A388BF55B12C8868E19589136957E00A5 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<Page_t04FE552A388BF55B12C8868E19589136957E00A5> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisovrKeyValuePair_t50C9F41DCEE0339FFEF82707DCE6CDBAF0BC18A2_m0A0EE2C4C5F47B027B53098213A02153FD63B679_gshared (RuntimeArray* __this, ovrKeyValuePair_t50C9F41DCEE0339FFEF82707DCE6CDBAF0BC18A2 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	ovrKeyValuePair_t50C9F41DCEE0339FFEF82707DCE6CDBAF0BC18A2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		ovrKeyValuePair_t50C9F41DCEE0339FFEF82707DCE6CDBAF0BC18A2 L_5 = ___0_item;
		ovrKeyValuePair_t50C9F41DCEE0339FFEF82707DCE6CDBAF0BC18A2 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<ovrKeyValuePair_t50C9F41DCEE0339FFEF82707DCE6CDBAF0BC18A2> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisovrMatchmakingCriterion_t321F40408551C625DC554D1389B354B9FC3B944C_mF240E0BC2F93871905FFE16C31E5F4E37E5170EA_gshared (RuntimeArray* __this, ovrMatchmakingCriterion_t321F40408551C625DC554D1389B354B9FC3B944C ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	ovrMatchmakingCriterion_t321F40408551C625DC554D1389B354B9FC3B944C V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		ovrMatchmakingCriterion_t321F40408551C625DC554D1389B354B9FC3B944C L_5 = ___0_item;
		ovrMatchmakingCriterion_t321F40408551C625DC554D1389B354B9FC3B944C L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<ovrMatchmakingCriterion_t321F40408551C625DC554D1389B354B9FC3B944C> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisTableRange_tD242F3D62C818E84B6903C18A6CE33399672B497_m3BAEFC9B5542B6A887B221028FD733779E8F23EB_gshared (RuntimeArray* __this, TableRange_tD242F3D62C818E84B6903C18A6CE33399672B497 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	TableRange_tD242F3D62C818E84B6903C18A6CE33399672B497 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		TableRange_tD242F3D62C818E84B6903C18A6CE33399672B497 L_5 = ___0_item;
		TableRange_tD242F3D62C818E84B6903C18A6CE33399672B497 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<TableRange_tD242F3D62C818E84B6903C18A6CE33399672B497> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisRecognizedAttribute_t67AAD871D05C66CFF976B98E4492B979993FB7D3_mD628D4BC3DE15A6E96F72EE8FDAF3BC8DFFBBD87_gshared (RuntimeArray* __this, RecognizedAttribute_t67AAD871D05C66CFF976B98E4492B979993FB7D3 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	RecognizedAttribute_t67AAD871D05C66CFF976B98E4492B979993FB7D3 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		RecognizedAttribute_t67AAD871D05C66CFF976B98E4492B979993FB7D3 L_5 = ___0_item;
		RecognizedAttribute_t67AAD871D05C66CFF976B98E4492B979993FB7D3 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<RecognizedAttribute_t67AAD871D05C66CFF976B98E4492B979993FB7D3> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisDispatchContext_tFA37790A5FF30508B0146B79E4FF1880EB82E455_m8D42839F5033101608759246007E834BB78F5A34_gshared (RuntimeArray* __this, DispatchContext_tFA37790A5FF30508B0146B79E4FF1880EB82E455 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	DispatchContext_tFA37790A5FF30508B0146B79E4FF1880EB82E455 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		DispatchContext_tFA37790A5FF30508B0146B79E4FF1880EB82E455 L_5 = ___0_item;
		DispatchContext_tFA37790A5FF30508B0146B79E4FF1880EB82E455 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<DispatchContext_tFA37790A5FF30508B0146B79E4FF1880EB82E455> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisEventRecord_tEC2901C48A23F5AFE20A9E8D4F05F3799EA62BF2_mE6AB4B39A9EE3036CD5E36258643D4B14B560F99_gshared (RuntimeArray* __this, EventRecord_tEC2901C48A23F5AFE20A9E8D4F05F3799EA62BF2 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	EventRecord_tEC2901C48A23F5AFE20A9E8D4F05F3799EA62BF2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		EventRecord_tEC2901C48A23F5AFE20A9E8D4F05F3799EA62BF2 L_5 = ___0_item;
		EventRecord_tEC2901C48A23F5AFE20A9E8D4F05F3799EA62BF2 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<EventRecord_tEC2901C48A23F5AFE20A9E8D4F05F3799EA62BF2> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisDefaultEventInterests_tF62D361FCDFA26C0E0A55ECCD8C20A64B3F2D8F0_mE744B04BFFAF70A4E1BF0B373F6B725B4242B832_gshared (RuntimeArray* __this, DefaultEventInterests_tF62D361FCDFA26C0E0A55ECCD8C20A64B3F2D8F0 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	DefaultEventInterests_tF62D361FCDFA26C0E0A55ECCD8C20A64B3F2D8F0 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		DefaultEventInterests_tF62D361FCDFA26C0E0A55ECCD8C20A64B3F2D8F0 L_5 = ___0_item;
		DefaultEventInterests_tF62D361FCDFA26C0E0A55ECCD8C20A64B3F2D8F0 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<DefaultEventInterests_tF62D361FCDFA26C0E0A55ECCD8C20A64B3F2D8F0> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisHandFingerState_tCD368E158E7154AEA9FA90A70EBE14F6F9B47821_mAE986629EE44613F04154059E473B4DB4A426372_gshared (RuntimeArray* __this, HandFingerState_tCD368E158E7154AEA9FA90A70EBE14F6F9B47821 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	HandFingerState_tCD368E158E7154AEA9FA90A70EBE14F6F9B47821 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		HandFingerState_tCD368E158E7154AEA9FA90A70EBE14F6F9B47821 L_5 = ___0_item;
		HandFingerState_tCD368E158E7154AEA9FA90A70EBE14F6F9B47821 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<HandFingerState_tCD368E158E7154AEA9FA90A70EBE14F6F9B47821> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisFingerStateThresholds_t0068D86C9EDCC20595DEA9A87E56581A39B520F6_m5A857F1D649A0C8E464A20DCD602DD708E0B8846_gshared (RuntimeArray* __this, FingerStateThresholds_t0068D86C9EDCC20595DEA9A87E56581A39B520F6 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	FingerStateThresholds_t0068D86C9EDCC20595DEA9A87E56581A39B520F6 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		FingerStateThresholds_t0068D86C9EDCC20595DEA9A87E56581A39B520F6 L_5 = ___0_item;
		FingerStateThresholds_t0068D86C9EDCC20595DEA9A87E56581A39B520F6 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<FingerStateThresholds_t0068D86C9EDCC20595DEA9A87E56581A39B520F6> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisFocusedElement_t1EE083A1C5276213C533A38C6B5DC02E9DE5CBEF_m3046D7DEC9CED9D96EE064B1862594C6EC755E41_gshared (RuntimeArray* __this, FocusedElement_t1EE083A1C5276213C533A38C6B5DC02E9DE5CBEF ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	FocusedElement_t1EE083A1C5276213C533A38C6B5DC02E9DE5CBEF V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		FocusedElement_t1EE083A1C5276213C533A38C6B5DC02E9DE5CBEF L_5 = ___0_item;
		FocusedElement_t1EE083A1C5276213C533A38C6B5DC02E9DE5CBEF L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<FocusedElement_t1EE083A1C5276213C533A38C6B5DC02E9DE5CBEF> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisPositionInfo_tE11EBB7037E8A1793414D764D4E30414CFFADF07_mA5C46C0363CF7E8D1F91C143E3579954D3A787B6_gshared (RuntimeArray* __this, PositionInfo_tE11EBB7037E8A1793414D764D4E30414CFFADF07 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	PositionInfo_tE11EBB7037E8A1793414D764D4E30414CFFADF07 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		PositionInfo_tE11EBB7037E8A1793414D764D4E30414CFFADF07 L_5 = ___0_item;
		PositionInfo_tE11EBB7037E8A1793414D764D4E30414CFFADF07 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<PositionInfo_tE11EBB7037E8A1793414D764D4E30414CFFADF07> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisRecorderStep_tBBC5B8F23E25DB03C112159F790737E94FC9D049_m7A557A126327F36DFBADAA481C8016FEB2D6FC75_gshared (RuntimeArray* __this, RecorderStep_tBBC5B8F23E25DB03C112159F790737E94FC9D049 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	RecorderStep_tBBC5B8F23E25DB03C112159F790737E94FC9D049 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		RecorderStep_tBBC5B8F23E25DB03C112159F790737E94FC9D049 L_5 = ___0_item;
		RecorderStep_tBBC5B8F23E25DB03C112159F790737E94FC9D049 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<RecorderStep_tBBC5B8F23E25DB03C112159F790737E94FC9D049> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisHandGrabInteractableData_t88B84E54A4502164521D6259F58E5909F700214F_mC7FC06B98E84BF1340E1AC0DD349E07D04C72632_gshared (RuntimeArray* __this, HandGrabInteractableData_t88B84E54A4502164521D6259F58E5909F700214F ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	HandGrabInteractableData_t88B84E54A4502164521D6259F58E5909F700214F V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		HandGrabInteractableData_t88B84E54A4502164521D6259F58E5909F700214F L_5 = ___0_item;
		HandGrabInteractableData_t88B84E54A4502164521D6259F58E5909F700214F L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<HandGrabInteractableData_t88B84E54A4502164521D6259F58E5909F700214F> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisHandGrabPoseData_t11F9BA5BBF7956582AAB161FB4E982533FCC9B74_m3EB6DD9EF80EB156F23DE3710831DCE12A7C585D_gshared (RuntimeArray* __this, HandGrabPoseData_t11F9BA5BBF7956582AAB161FB4E982533FCC9B74 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	HandGrabPoseData_t11F9BA5BBF7956582AAB161FB4E982533FCC9B74 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		HandGrabPoseData_t11F9BA5BBF7956582AAB161FB4E982533FCC9B74 L_5 = ___0_item;
		HandGrabPoseData_t11F9BA5BBF7956582AAB161FB4E982533FCC9B74 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<HandGrabPoseData_t11F9BA5BBF7956582AAB161FB4E982533FCC9B74> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisWeightedJoint_t3D198447BE932DA429537A3E7722D427D1ACE2A8_mEC5ED0E1AF8186045E4B9F630A9BFC2085F28A55_gshared (RuntimeArray* __this, WeightedJoint_t3D198447BE932DA429537A3E7722D427D1ACE2A8 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	WeightedJoint_t3D198447BE932DA429537A3E7722D427D1ACE2A8 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		WeightedJoint_t3D198447BE932DA429537A3E7722D427D1ACE2A8 L_5 = ___0_item;
		WeightedJoint_t3D198447BE932DA429537A3E7722D427D1ACE2A8 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<WeightedJoint_t3D198447BE932DA429537A3E7722D427D1ACE2A8> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_Tisbucket_t3217998B0CD54EA2DEDD93DEF8556E72602C7D4E_mA601AC1A9209505C75ABCBE3D5DFBA677221EAE0_gshared (RuntimeArray* __this, bucket_t3217998B0CD54EA2DEDD93DEF8556E72602C7D4E ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	bucket_t3217998B0CD54EA2DEDD93DEF8556E72602C7D4E V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		bucket_t3217998B0CD54EA2DEDD93DEF8556E72602C7D4E L_5 = ___0_item;
		bucket_t3217998B0CD54EA2DEDD93DEF8556E72602C7D4E L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<bucket_t3217998B0CD54EA2DEDD93DEF8556E72602C7D4E> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisHebrewValue_tC21FD2DC21D49A9CC5EBCB7895A9431A5DF0801C_m2B1D94AA92AE385E5FCEDD0B5113118ABDDFF90B_gshared (RuntimeArray* __this, HebrewValue_tC21FD2DC21D49A9CC5EBCB7895A9431A5DF0801C ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	HebrewValue_tC21FD2DC21D49A9CC5EBCB7895A9431A5DF0801C V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		HebrewValue_tC21FD2DC21D49A9CC5EBCB7895A9431A5DF0801C L_5 = ___0_item;
		HebrewValue_tC21FD2DC21D49A9CC5EBCB7895A9431A5DF0801C L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<HebrewValue_tC21FD2DC21D49A9CC5EBCB7895A9431A5DF0801C> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisInteractableLimits_tCD552ECEEB1DA33B43FBF90845969EE5CD5E9F50_m02E69118B33C001AF8EDDF8E96E44474C8EBC030_gshared (RuntimeArray* __this, InteractableLimits_tCD552ECEEB1DA33B43FBF90845969EE5CD5E9F50 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	InteractableLimits_tCD552ECEEB1DA33B43FBF90845969EE5CD5E9F50 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		InteractableLimits_tCD552ECEEB1DA33B43FBF90845969EE5CD5E9F50 L_5 = ___0_item;
		InteractableLimits_tCD552ECEEB1DA33B43FBF90845969EE5CD5E9F50 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<InteractableLimits_tCD552ECEEB1DA33B43FBF90845969EE5CD5E9F50> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisJointRotationFeatureState_t293BD5640481C36FBD0E01AB30998C1D1C1D5ADE_mC522E658DFC089A9F97E6C8F2D1502D6F1129064_gshared (RuntimeArray* __this, JointRotationFeatureState_t293BD5640481C36FBD0E01AB30998C1D1C1D5ADE ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	JointRotationFeatureState_t293BD5640481C36FBD0E01AB30998C1D1C1D5ADE V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		JointRotationFeatureState_t293BD5640481C36FBD0E01AB30998C1D1C1D5ADE L_5 = ___0_item;
		JointRotationFeatureState_t293BD5640481C36FBD0E01AB30998C1D1C1D5ADE L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<JointRotationFeatureState_t293BD5640481C36FBD0E01AB30998C1D1C1D5ADE> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisJointVelocityFeatureState_tA17C290CDFB76352D9CEFC3E7B790E0CAEF22105_m1A26ED25E16D9E446CD194755883D3928030C83D_gshared (RuntimeArray* __this, JointVelocityFeatureState_tA17C290CDFB76352D9CEFC3E7B790E0CAEF22105 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	JointVelocityFeatureState_tA17C290CDFB76352D9CEFC3E7B790E0CAEF22105 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		JointVelocityFeatureState_tA17C290CDFB76352D9CEFC3E7B790E0CAEF22105 L_5 = ___0_item;
		JointVelocityFeatureState_tA17C290CDFB76352D9CEFC3E7B790E0CAEF22105 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<JointVelocityFeatureState_tA17C290CDFB76352D9CEFC3E7B790E0CAEF22105> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisSortedColumnState_t24958C451ECBAA5C6C868EA4881A27E45DEEA1AA_mD69603BF7C970A53FCD893F6706E0C1405D95A75_gshared (RuntimeArray* __this, SortedColumnState_t24958C451ECBAA5C6C868EA4881A27E45DEEA1AA ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	SortedColumnState_t24958C451ECBAA5C6C868EA4881A27E45DEEA1AA V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		SortedColumnState_t24958C451ECBAA5C6C868EA4881A27E45DEEA1AA L_5 = ___0_item;
		SortedColumnState_t24958C451ECBAA5C6C868EA4881A27E45DEEA1AA L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<SortedColumnState_t24958C451ECBAA5C6C868EA4881A27E45DEEA1AA> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisMeshMaterial_t52CF0208BCA9BCF6873521E070104191B8C9FECF_m28F6974ADE9087398160FA436802AD1E46AF532A_gshared (RuntimeArray* __this, MeshMaterial_t52CF0208BCA9BCF6873521E070104191B8C9FECF ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	MeshMaterial_t52CF0208BCA9BCF6873521E070104191B8C9FECF V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		MeshMaterial_t52CF0208BCA9BCF6873521E070104191B8C9FECF L_5 = ___0_item;
		MeshMaterial_t52CF0208BCA9BCF6873521E070104191B8C9FECF L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<MeshMaterial_t52CF0208BCA9BCF6873521E070104191B8C9FECF> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisTerrainMaterial_tFCF08D696C9AD3BF9F739C43F453DEBD4A81E7D3_m23E3B447220E7709C3B7B6E4330235E4946E5FBD_gshared (RuntimeArray* __this, TerrainMaterial_tFCF08D696C9AD3BF9F739C43F453DEBD4A81E7D3 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	TerrainMaterial_tFCF08D696C9AD3BF9F739C43F453DEBD4A81E7D3 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		TerrainMaterial_tFCF08D696C9AD3BF9F739C43F453DEBD4A81E7D3 L_5 = ___0_item;
		TerrainMaterial_tFCF08D696C9AD3BF9F739C43F453DEBD4A81E7D3 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<TerrainMaterial_tFCF08D696C9AD3BF9F739C43F453DEBD4A81E7D3> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisEyeRenderDesc_tBD4945227CDFEDEA8EF80B44FD8254E7727E4534_mEC9CC1C0775B851990DC520372AC2A519B9F97AC_gshared (RuntimeArray* __this, EyeRenderDesc_tBD4945227CDFEDEA8EF80B44FD8254E7727E4534 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	EyeRenderDesc_tBD4945227CDFEDEA8EF80B44FD8254E7727E4534 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		EyeRenderDesc_tBD4945227CDFEDEA8EF80B44FD8254E7727E4534 L_5 = ___0_item;
		EyeRenderDesc_tBD4945227CDFEDEA8EF80B44FD8254E7727E4534 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<EyeRenderDesc_tBD4945227CDFEDEA8EF80B44FD8254E7727E4534> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisOpenVRControllerDetails_t4828A712824373E205C1770EF9779F43484DBF0E_mC82D74CF30DAD6D135531F936C0FC5B69AAC9D18_gshared (RuntimeArray* __this, OpenVRControllerDetails_t4828A712824373E205C1770EF9779F43484DBF0E ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	OpenVRControllerDetails_t4828A712824373E205C1770EF9779F43484DBF0E V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		OpenVRControllerDetails_t4828A712824373E205C1770EF9779F43484DBF0E L_5 = ___0_item;
		OpenVRControllerDetails_t4828A712824373E205C1770EF9779F43484DBF0E L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<OpenVRControllerDetails_t4828A712824373E205C1770EF9779F43484DBF0E> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisLayerTexture_tC30AD562815BEE6F403127387361FEC5154AD813_m2A6530D3F52D99053CF08137D462AC0EF09FA502_gshared (RuntimeArray* __this, LayerTexture_tC30AD562815BEE6F403127387361FEC5154AD813 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	LayerTexture_tC30AD562815BEE6F403127387361FEC5154AD813 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		LayerTexture_tC30AD562815BEE6F403127387361FEC5154AD813 L_5 = ___0_item;
		LayerTexture_tC30AD562815BEE6F403127387361FEC5154AD813 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<LayerTexture_tC30AD562815BEE6F403127387361FEC5154AD813> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisDeferredPassthroughMeshAddition_t1619270756CACB83697DC5C91C352EEFE40ACB59_m4FC50192995B192F173AE97398E5BE4141B916DD_gshared (RuntimeArray* __this, DeferredPassthroughMeshAddition_t1619270756CACB83697DC5C91C352EEFE40ACB59 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	DeferredPassthroughMeshAddition_t1619270756CACB83697DC5C91C352EEFE40ACB59 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		DeferredPassthroughMeshAddition_t1619270756CACB83697DC5C91C352EEFE40ACB59 L_5 = ___0_item;
		DeferredPassthroughMeshAddition_t1619270756CACB83697DC5C91C352EEFE40ACB59 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<DeferredPassthroughMeshAddition_t1619270756CACB83697DC5C91C352EEFE40ACB59> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Bounds_Equals_m93E0B9D24C73E57A6FABB9D312101D48183C88CC_inline (Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* __this, RuntimeObject* ___0_other, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		RuntimeObject* L_0 = ___0_other;
		V_0 = (bool)((((int32_t)((!(((RuntimeObject*)(RuntimeObject*)((RuntimeObject*)IsInstSealed((RuntimeObject*)L_0, Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		V_1 = (bool)0;
		goto IL_0024;
	}

IL_0015:
	{
		RuntimeObject* L_2 = ___0_other;
		bool L_3;
		L_3 = Bounds_Equals_m615135524315743D29633C33B6C8B16B754266DB_inline(__this, ((*(Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3*)((Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3*)(Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3*)UnBox(L_2, Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3_il2cpp_TypeInfo_var)))), NULL);
		V_1 = L_3;
		goto IL_0024;
	}

IL_0024:
	{
		bool L_4 = V_1;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool BoundsInt_Equals_m4C99DB2D3AD7DD9E0A75562F0AE24A14AE63587D_inline (BoundsInt_t4E757DE5EFF9FCB42000F173360DDC63B5585485* __this, RuntimeObject* ___0_other, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BoundsInt_t4E757DE5EFF9FCB42000F173360DDC63B5585485_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		RuntimeObject* L_0 = ___0_other;
		V_0 = (bool)((((int32_t)((!(((RuntimeObject*)(RuntimeObject*)((RuntimeObject*)IsInstSealed((RuntimeObject*)L_0, BoundsInt_t4E757DE5EFF9FCB42000F173360DDC63B5585485_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		V_1 = (bool)0;
		goto IL_0024;
	}

IL_0015:
	{
		RuntimeObject* L_2 = ___0_other;
		bool L_3;
		L_3 = BoundsInt_Equals_m143E0673DA604FDEBBF40115D50BE078E343F1E6_inline(__this, ((*(BoundsInt_t4E757DE5EFF9FCB42000F173360DDC63B5585485*)((BoundsInt_t4E757DE5EFF9FCB42000F173360DDC63B5585485*)(BoundsInt_t4E757DE5EFF9FCB42000F173360DDC63B5585485*)UnBox(L_2, BoundsInt_t4E757DE5EFF9FCB42000F173360DDC63B5585485_il2cpp_TypeInfo_var)))), NULL);
		V_1 = L_3;
		goto IL_0024;
	}

IL_0024:
	{
		bool L_4 = V_1;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Color_Equals_m24E409BF329F25774C6577F18EFD3DE1253684D6_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, RuntimeObject* ___0_other, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Color_tD001788D726C3A7F1379BEED0260B9591F440C1F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		RuntimeObject* L_0 = ___0_other;
		V_0 = (bool)((((int32_t)((!(((RuntimeObject*)(RuntimeObject*)((RuntimeObject*)IsInstSealed((RuntimeObject*)L_0, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		V_1 = (bool)0;
		goto IL_0024;
	}

IL_0015:
	{
		RuntimeObject* L_2 = ___0_other;
		bool L_3;
		L_3 = Color_Equals_mD297CAFFEBE9352C940873862FDF9A28F1F02435_inline(__this, ((*(Color_tD001788D726C3A7F1379BEED0260B9591F440C1F*)((Color_tD001788D726C3A7F1379BEED0260B9591F440C1F*)(Color_tD001788D726C3A7F1379BEED0260B9591F440C1F*)UnBox(L_2, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F_il2cpp_TypeInfo_var)))), NULL);
		V_1 = L_3;
		goto IL_0024;
	}

IL_0024:
	{
		bool L_4 = V_1;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Matrix4x4_Equals_m35CFC5F304BB40EFFE011B92AA87B77CD8FF8F74_inline (Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* __this, RuntimeObject* ___0_other, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		RuntimeObject* L_0 = ___0_other;
		V_0 = (bool)((((int32_t)((!(((RuntimeObject*)(RuntimeObject*)((RuntimeObject*)IsInstSealed((RuntimeObject*)L_0, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		V_1 = (bool)0;
		goto IL_0024;
	}

IL_0015:
	{
		RuntimeObject* L_2 = ___0_other;
		bool L_3;
		L_3 = Matrix4x4_Equals_mDB0C4CCC58BE3E108F1A40BE8DBDCD62E284CC51_inline(__this, ((*(Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6*)((Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6*)(Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6*)UnBox(L_2, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_il2cpp_TypeInfo_var)))), NULL);
		V_1 = L_3;
		goto IL_0024;
	}

IL_0024:
	{
		bool L_4 = V_1;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Quaternion_Equals_mCF93B00BA4FCDDE6100918451343DB9A0583A0A0_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* __this, RuntimeObject* ___0_other, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		RuntimeObject* L_0 = ___0_other;
		V_0 = (bool)((((int32_t)((!(((RuntimeObject*)(RuntimeObject*)((RuntimeObject*)IsInstSealed((RuntimeObject*)L_0, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		V_1 = (bool)0;
		goto IL_0024;
	}

IL_0015:
	{
		RuntimeObject* L_2 = ___0_other;
		bool L_3;
		L_3 = Quaternion_Equals_m25B95D8412B79CC7F8B34062BFAE662BD99578BE_inline(__this, ((*(Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974*)((Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974*)(Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974*)UnBox(L_2, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var)))), NULL);
		V_1 = L_3;
		goto IL_0024;
	}

IL_0024:
	{
		bool L_4 = V_1;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Rect_Equals_mD7EB2046512E4A46524A7ED929F1C38A32C408F8_inline (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, RuntimeObject* ___0_other, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		RuntimeObject* L_0 = ___0_other;
		V_0 = (bool)((((int32_t)((!(((RuntimeObject*)(RuntimeObject*)((RuntimeObject*)IsInstSealed((RuntimeObject*)L_0, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		V_1 = (bool)0;
		goto IL_0024;
	}

IL_0015:
	{
		RuntimeObject* L_2 = ___0_other;
		bool L_3;
		L_3 = Rect_Equals_mE725DE506D3F1DB92F58B876BDA42AACD4D991B5_inline(__this, ((*(Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D*)((Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D*)(Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D*)UnBox(L_2, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D_il2cpp_TypeInfo_var)))), NULL);
		V_1 = L_3;
		goto IL_0024;
	}

IL_0024:
	{
		bool L_4 = V_1;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector2_Equals_mA4E81D6FCE503DBD502BA499708344410F60DA4E_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, RuntimeObject* ___0_other, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		RuntimeObject* L_0 = ___0_other;
		V_0 = (bool)((((int32_t)((!(((RuntimeObject*)(RuntimeObject*)((RuntimeObject*)IsInstSealed((RuntimeObject*)L_0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		V_1 = (bool)0;
		goto IL_0024;
	}

IL_0015:
	{
		RuntimeObject* L_2 = ___0_other;
		bool L_3;
		L_3 = Vector2_Equals_mDF84D5ED14E018609C6A9C9BAE016C1B33BCFF4C_inline(__this, ((*(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*)((Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*)(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*)UnBox(L_2, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var)))), NULL);
		V_1 = L_3;
		goto IL_0024;
	}

IL_0024:
	{
		bool L_4 = V_1;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector2Int_Equals_m6D91EFAA6B3254334436BD262A4547EA08281BA3_inline (Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A* __this, RuntimeObject* ___0_other, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		RuntimeObject* L_0 = ___0_other;
		V_0 = (bool)((((int32_t)((!(((RuntimeObject*)(RuntimeObject*)((RuntimeObject*)IsInstSealed((RuntimeObject*)L_0, Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		V_1 = (bool)0;
		goto IL_0024;
	}

IL_0015:
	{
		RuntimeObject* L_2 = ___0_other;
		bool L_3;
		L_3 = Vector2Int_Equals_m32811BA0576C096D5EB5C0CFD8231478F17229A6_inline(__this, ((*(Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A*)((Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A*)(Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A*)UnBox(L_2, Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A_il2cpp_TypeInfo_var)))), NULL);
		V_1 = L_3;
		goto IL_0024;
	}

IL_0024:
	{
		bool L_4 = V_1;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector3_Equals_mB4BE43D5986864F5C22B919F2957E0309F10E3B4_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, RuntimeObject* ___0_other, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		RuntimeObject* L_0 = ___0_other;
		V_0 = (bool)((((int32_t)((!(((RuntimeObject*)(RuntimeObject*)((RuntimeObject*)IsInstSealed((RuntimeObject*)L_0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		V_1 = (bool)0;
		goto IL_0024;
	}

IL_0015:
	{
		RuntimeObject* L_2 = ___0_other;
		bool L_3;
		L_3 = Vector3_Equals_mEDEAF86793D229455BBF9BA5B30DDF438D6CABC1_inline(__this, ((*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)UnBox(L_2, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var)))), NULL);
		V_1 = L_3;
		goto IL_0024;
	}

IL_0024:
	{
		bool L_4 = V_1;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector3Int_Equals_m419967067E76BF0381E4CD8FE14DF5ED46ACFB02_inline (Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* __this, RuntimeObject* ___0_other, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		RuntimeObject* L_0 = ___0_other;
		V_0 = (bool)((((int32_t)((!(((RuntimeObject*)(RuntimeObject*)((RuntimeObject*)IsInstSealed((RuntimeObject*)L_0, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		V_1 = (bool)0;
		goto IL_0024;
	}

IL_0015:
	{
		RuntimeObject* L_2 = ___0_other;
		bool L_3;
		L_3 = Vector3Int_Equals_mE4D179C5001B77DE05E3E4BC39DC9F6AE441EBD8_inline(__this, ((*(Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376*)((Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376*)(Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376*)UnBox(L_2, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376_il2cpp_TypeInfo_var)))), NULL);
		V_1 = L_3;
		goto IL_0024;
	}

IL_0024:
	{
		bool L_4 = V_1;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector4_Equals_mC2596CA0F441D25DE7A9419BE66A8FA2DA355CB9_inline (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* __this, RuntimeObject* ___0_other, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		RuntimeObject* L_0 = ___0_other;
		V_0 = (bool)((((int32_t)((!(((RuntimeObject*)(RuntimeObject*)((RuntimeObject*)IsInstSealed((RuntimeObject*)L_0, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		V_1 = (bool)0;
		goto IL_0024;
	}

IL_0015:
	{
		RuntimeObject* L_2 = ___0_other;
		bool L_3;
		L_3 = Vector4_Equals_m73FAA65A1A565EE28D6C9385603829894B7D4392_inline(__this, ((*(Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3*)((Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3*)(Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3*)UnBox(L_2, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_il2cpp_TypeInfo_var)))), NULL);
		V_1 = L_3;
		goto IL_0024;
	}

IL_0024:
	{
		bool L_4 = V_1;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Bounds_Equals_m615135524315743D29633C33B6C8B16B754266DB_inline (Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* __this, Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 ___0_other, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	int32_t G_B3_0 = 0;
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0;
		L_0 = Bounds_get_center_m5B05F81CB835EB6DD8628FDA24B638F477984DC3_inline(__this, NULL);
		V_0 = L_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Bounds_get_center_m5B05F81CB835EB6DD8628FDA24B638F477984DC3_inline((&___0_other), NULL);
		bool L_2;
		L_2 = Vector3_Equals_mEDEAF86793D229455BBF9BA5B30DDF438D6CABC1_inline((&V_0), L_1, NULL);
		if (!L_2)
		{
			goto IL_002f;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Bounds_get_extents_mFE6DC407FCE2341BE2C750CB554055D211281D25_inline(__this, NULL);
		V_0 = L_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Bounds_get_extents_mFE6DC407FCE2341BE2C750CB554055D211281D25_inline((&___0_other), NULL);
		bool L_5;
		L_5 = Vector3_Equals_mEDEAF86793D229455BBF9BA5B30DDF438D6CABC1_inline((&V_0), L_4, NULL);
		G_B3_0 = ((int32_t)(L_5));
		goto IL_0030;
	}

IL_002f:
	{
		G_B3_0 = 0;
	}

IL_0030:
	{
		V_1 = (bool)G_B3_0;
		goto IL_0033;
	}

IL_0033:
	{
		bool L_6 = V_1;
		return L_6;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool BoundsInt_Equals_m143E0673DA604FDEBBF40115D50BE078E343F1E6_inline (BoundsInt_t4E757DE5EFF9FCB42000F173360DDC63B5585485* __this, BoundsInt_t4E757DE5EFF9FCB42000F173360DDC63B5585485 ___0_other, const RuntimeMethod* method) 
{
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* L_0 = (&__this->___m_Position_0);
		BoundsInt_t4E757DE5EFF9FCB42000F173360DDC63B5585485 L_1 = ___0_other;
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 L_2 = L_1.___m_Position_0;
		bool L_3;
		L_3 = Vector3Int_Equals_mE4D179C5001B77DE05E3E4BC39DC9F6AE441EBD8_inline(L_0, L_2, NULL);
		if (!L_3)
		{
			goto IL_0027;
		}
	}
	{
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* L_4 = (&__this->___m_Size_1);
		BoundsInt_t4E757DE5EFF9FCB42000F173360DDC63B5585485 L_5 = ___0_other;
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 L_6 = L_5.___m_Size_1;
		bool L_7;
		L_7 = Vector3Int_Equals_mE4D179C5001B77DE05E3E4BC39DC9F6AE441EBD8_inline(L_4, L_6, NULL);
		G_B3_0 = ((int32_t)(L_7));
		goto IL_0028;
	}

IL_0027:
	{
		G_B3_0 = 0;
	}

IL_0028:
	{
		V_0 = (bool)G_B3_0;
		goto IL_002b;
	}

IL_002b:
	{
		bool L_8 = V_0;
		return L_8;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Color_Equals_mD297CAFFEBE9352C940873862FDF9A28F1F02435_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___0_other, const RuntimeMethod* method) 
{
	bool V_0 = false;
	int32_t G_B5_0 = 0;
	{
		float* L_0 = (&__this->___r_0);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = ___0_other;
		float L_2 = L_1.___r_0;
		bool L_3;
		L_3 = Single_Equals_m97C79E2B80F39214DB3F7E714FF2BCA45A0A8BF9(L_0, L_2, NULL);
		if (!L_3)
		{
			goto IL_004d;
		}
	}
	{
		float* L_4 = (&__this->___g_1);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_5 = ___0_other;
		float L_6 = L_5.___g_1;
		bool L_7;
		L_7 = Single_Equals_m97C79E2B80F39214DB3F7E714FF2BCA45A0A8BF9(L_4, L_6, NULL);
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		float* L_8 = (&__this->___b_2);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_9 = ___0_other;
		float L_10 = L_9.___b_2;
		bool L_11;
		L_11 = Single_Equals_m97C79E2B80F39214DB3F7E714FF2BCA45A0A8BF9(L_8, L_10, NULL);
		if (!L_11)
		{
			goto IL_004d;
		}
	}
	{
		float* L_12 = (&__this->___a_3);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_13 = ___0_other;
		float L_14 = L_13.___a_3;
		bool L_15;
		L_15 = Single_Equals_m97C79E2B80F39214DB3F7E714FF2BCA45A0A8BF9(L_12, L_14, NULL);
		G_B5_0 = ((int32_t)(L_15));
		goto IL_004e;
	}

IL_004d:
	{
		G_B5_0 = 0;
	}

IL_004e:
	{
		V_0 = (bool)G_B5_0;
		goto IL_0051;
	}

IL_0051:
	{
		bool L_16 = V_0;
		return L_16;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Matrix4x4_Equals_mDB0C4CCC58BE3E108F1A40BE8DBDCD62E284CC51_inline (Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* __this, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___0_other, const RuntimeMethod* method) 
{
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	int32_t G_B5_0 = 0;
	{
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_0;
		L_0 = Matrix4x4_GetColumn_m5CE079D7A69DE70E3144BADD20A1651C73A8D118(__this, 0, NULL);
		V_0 = L_0;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_1;
		L_1 = Matrix4x4_GetColumn_m5CE079D7A69DE70E3144BADD20A1651C73A8D118((&___0_other), 0, NULL);
		bool L_2;
		L_2 = Vector4_Equals_m73FAA65A1A565EE28D6C9385603829894B7D4392_inline((&V_0), L_1, NULL);
		if (!L_2)
		{
			goto IL_0065;
		}
	}
	{
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_3;
		L_3 = Matrix4x4_GetColumn_m5CE079D7A69DE70E3144BADD20A1651C73A8D118(__this, 1, NULL);
		V_0 = L_3;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_4;
		L_4 = Matrix4x4_GetColumn_m5CE079D7A69DE70E3144BADD20A1651C73A8D118((&___0_other), 1, NULL);
		bool L_5;
		L_5 = Vector4_Equals_m73FAA65A1A565EE28D6C9385603829894B7D4392_inline((&V_0), L_4, NULL);
		if (!L_5)
		{
			goto IL_0065;
		}
	}
	{
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_6;
		L_6 = Matrix4x4_GetColumn_m5CE079D7A69DE70E3144BADD20A1651C73A8D118(__this, 2, NULL);
		V_0 = L_6;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_7;
		L_7 = Matrix4x4_GetColumn_m5CE079D7A69DE70E3144BADD20A1651C73A8D118((&___0_other), 2, NULL);
		bool L_8;
		L_8 = Vector4_Equals_m73FAA65A1A565EE28D6C9385603829894B7D4392_inline((&V_0), L_7, NULL);
		if (!L_8)
		{
			goto IL_0065;
		}
	}
	{
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_9;
		L_9 = Matrix4x4_GetColumn_m5CE079D7A69DE70E3144BADD20A1651C73A8D118(__this, 3, NULL);
		V_0 = L_9;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_10;
		L_10 = Matrix4x4_GetColumn_m5CE079D7A69DE70E3144BADD20A1651C73A8D118((&___0_other), 3, NULL);
		bool L_11;
		L_11 = Vector4_Equals_m73FAA65A1A565EE28D6C9385603829894B7D4392_inline((&V_0), L_10, NULL);
		G_B5_0 = ((int32_t)(L_11));
		goto IL_0066;
	}

IL_0065:
	{
		G_B5_0 = 0;
	}

IL_0066:
	{
		V_1 = (bool)G_B5_0;
		goto IL_0069;
	}

IL_0069:
	{
		bool L_12 = V_1;
		return L_12;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Quaternion_Equals_m25B95D8412B79CC7F8B34062BFAE662BD99578BE_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___0_other, const RuntimeMethod* method) 
{
	bool V_0 = false;
	int32_t G_B5_0 = 0;
	{
		float* L_0 = (&__this->___x_0);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_1 = ___0_other;
		float L_2 = L_1.___x_0;
		bool L_3;
		L_3 = Single_Equals_m97C79E2B80F39214DB3F7E714FF2BCA45A0A8BF9(L_0, L_2, NULL);
		if (!L_3)
		{
			goto IL_004d;
		}
	}
	{
		float* L_4 = (&__this->___y_1);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_5 = ___0_other;
		float L_6 = L_5.___y_1;
		bool L_7;
		L_7 = Single_Equals_m97C79E2B80F39214DB3F7E714FF2BCA45A0A8BF9(L_4, L_6, NULL);
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		float* L_8 = (&__this->___z_2);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_9 = ___0_other;
		float L_10 = L_9.___z_2;
		bool L_11;
		L_11 = Single_Equals_m97C79E2B80F39214DB3F7E714FF2BCA45A0A8BF9(L_8, L_10, NULL);
		if (!L_11)
		{
			goto IL_004d;
		}
	}
	{
		float* L_12 = (&__this->___w_3);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_13 = ___0_other;
		float L_14 = L_13.___w_3;
		bool L_15;
		L_15 = Single_Equals_m97C79E2B80F39214DB3F7E714FF2BCA45A0A8BF9(L_12, L_14, NULL);
		G_B5_0 = ((int32_t)(L_15));
		goto IL_004e;
	}

IL_004d:
	{
		G_B5_0 = 0;
	}

IL_004e:
	{
		V_0 = (bool)G_B5_0;
		goto IL_0051;
	}

IL_0051:
	{
		bool L_16 = V_0;
		return L_16;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Rect_Equals_mE725DE506D3F1DB92F58B876BDA42AACD4D991B5_inline (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___0_other, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	bool V_1 = false;
	int32_t G_B5_0 = 0;
	{
		float L_0;
		L_0 = Rect_get_x_mB267B718E0D067F2BAE31BA477647FBF964916EB_inline(__this, NULL);
		V_0 = L_0;
		float L_1;
		L_1 = Rect_get_x_mB267B718E0D067F2BAE31BA477647FBF964916EB_inline((&___0_other), NULL);
		bool L_2;
		L_2 = Single_Equals_m97C79E2B80F39214DB3F7E714FF2BCA45A0A8BF9((&V_0), L_1, NULL);
		if (!L_2)
		{
			goto IL_005d;
		}
	}
	{
		float L_3;
		L_3 = Rect_get_y_mC733E8D49F3CE21B2A3D40A1B72D687F22C97F49_inline(__this, NULL);
		V_0 = L_3;
		float L_4;
		L_4 = Rect_get_y_mC733E8D49F3CE21B2A3D40A1B72D687F22C97F49_inline((&___0_other), NULL);
		bool L_5;
		L_5 = Single_Equals_m97C79E2B80F39214DB3F7E714FF2BCA45A0A8BF9((&V_0), L_4, NULL);
		if (!L_5)
		{
			goto IL_005d;
		}
	}
	{
		float L_6;
		L_6 = Rect_get_width_m620D67551372073C9C32C4C4624C2A5713F7F9A9_inline(__this, NULL);
		V_0 = L_6;
		float L_7;
		L_7 = Rect_get_width_m620D67551372073C9C32C4C4624C2A5713F7F9A9_inline((&___0_other), NULL);
		bool L_8;
		L_8 = Single_Equals_m97C79E2B80F39214DB3F7E714FF2BCA45A0A8BF9((&V_0), L_7, NULL);
		if (!L_8)
		{
			goto IL_005d;
		}
	}
	{
		float L_9;
		L_9 = Rect_get_height_mE1AA6C6C725CCD2D317BD2157396D3CF7D47C9D8_inline(__this, NULL);
		V_0 = L_9;
		float L_10;
		L_10 = Rect_get_height_mE1AA6C6C725CCD2D317BD2157396D3CF7D47C9D8_inline((&___0_other), NULL);
		bool L_11;
		L_11 = Single_Equals_m97C79E2B80F39214DB3F7E714FF2BCA45A0A8BF9((&V_0), L_10, NULL);
		G_B5_0 = ((int32_t)(L_11));
		goto IL_005e;
	}

IL_005d:
	{
		G_B5_0 = 0;
	}

IL_005e:
	{
		V_1 = (bool)G_B5_0;
		goto IL_0061;
	}

IL_0061:
	{
		bool L_12 = V_1;
		return L_12;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector2_Equals_mDF84D5ED14E018609C6A9C9BAE016C1B33BCFF4C_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_other, const RuntimeMethod* method) 
{
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		float L_0 = __this->___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1 = ___0_other;
		float L_2 = L_1.___x_0;
		if ((!(((float)L_0) == ((float)L_2))))
		{
			goto IL_001f;
		}
	}
	{
		float L_3 = __this->___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4 = ___0_other;
		float L_5 = L_4.___y_1;
		G_B3_0 = ((((float)L_3) == ((float)L_5))? 1 : 0);
		goto IL_0020;
	}

IL_001f:
	{
		G_B3_0 = 0;
	}

IL_0020:
	{
		V_0 = (bool)G_B3_0;
		goto IL_0023;
	}

IL_0023:
	{
		bool L_6 = V_0;
		return L_6;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector2Int_Equals_m32811BA0576C096D5EB5C0CFD8231478F17229A6_inline (Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A* __this, Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___0_other, const RuntimeMethod* method) 
{
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		int32_t L_0;
		L_0 = Vector2Int_get_x_mA2CACB1B6E6B5AD0CCC32B2CD2EDCE3ECEB50576_inline(__this, NULL);
		int32_t L_1;
		L_1 = Vector2Int_get_x_mA2CACB1B6E6B5AD0CCC32B2CD2EDCE3ECEB50576_inline((&___0_other), NULL);
		if ((!(((uint32_t)L_0) == ((uint32_t)L_1))))
		{
			goto IL_0021;
		}
	}
	{
		int32_t L_2;
		L_2 = Vector2Int_get_y_m48454163ECF0B463FB5A16A0C4FC4B14DB0768B3_inline(__this, NULL);
		int32_t L_3;
		L_3 = Vector2Int_get_y_m48454163ECF0B463FB5A16A0C4FC4B14DB0768B3_inline((&___0_other), NULL);
		G_B3_0 = ((((int32_t)L_2) == ((int32_t)L_3))? 1 : 0);
		goto IL_0022;
	}

IL_0021:
	{
		G_B3_0 = 0;
	}

IL_0022:
	{
		V_0 = (bool)G_B3_0;
		goto IL_0025;
	}

IL_0025:
	{
		bool L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector3_Equals_mEDEAF86793D229455BBF9BA5B30DDF438D6CABC1_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_other, const RuntimeMethod* method) 
{
	bool V_0 = false;
	int32_t G_B4_0 = 0;
	{
		float L_0 = __this->___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = ___0_other;
		float L_2 = L_1.___x_2;
		if ((!(((float)L_0) == ((float)L_2))))
		{
			goto IL_002d;
		}
	}
	{
		float L_3 = __this->___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___0_other;
		float L_5 = L_4.___y_3;
		if ((!(((float)L_3) == ((float)L_5))))
		{
			goto IL_002d;
		}
	}
	{
		float L_6 = __this->___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7 = ___0_other;
		float L_8 = L_7.___z_4;
		G_B4_0 = ((((float)L_6) == ((float)L_8))? 1 : 0);
		goto IL_002e;
	}

IL_002d:
	{
		G_B4_0 = 0;
	}

IL_002e:
	{
		V_0 = (bool)G_B4_0;
		goto IL_0031;
	}

IL_0031:
	{
		bool L_9 = V_0;
		return L_9;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector3Int_Equals_mE4D179C5001B77DE05E3E4BC39DC9F6AE441EBD8_inline (Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* __this, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___0_other, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 L_0 = (*(Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376*)__this);
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 L_1 = ___0_other;
		bool L_2;
		L_2 = Vector3Int_op_Equality_mB10073AF3B08421C46BF678C8FF64AAD62C83617_inline(L_0, L_1, NULL);
		V_0 = L_2;
		goto IL_0010;
	}

IL_0010:
	{
		bool L_3 = V_0;
		return L_3;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector4_Equals_m73FAA65A1A565EE28D6C9385603829894B7D4392_inline (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* __this, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___0_other, const RuntimeMethod* method) 
{
	bool V_0 = false;
	int32_t G_B5_0 = 0;
	{
		float L_0 = __this->___x_1;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_1 = ___0_other;
		float L_2 = L_1.___x_1;
		if ((!(((float)L_0) == ((float)L_2))))
		{
			goto IL_003b;
		}
	}
	{
		float L_3 = __this->___y_2;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_4 = ___0_other;
		float L_5 = L_4.___y_2;
		if ((!(((float)L_3) == ((float)L_5))))
		{
			goto IL_003b;
		}
	}
	{
		float L_6 = __this->___z_3;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_7 = ___0_other;
		float L_8 = L_7.___z_3;
		if ((!(((float)L_6) == ((float)L_8))))
		{
			goto IL_003b;
		}
	}
	{
		float L_9 = __this->___w_4;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_10 = ___0_other;
		float L_11 = L_10.___w_4;
		G_B5_0 = ((((float)L_9) == ((float)L_11))? 1 : 0);
		goto IL_003c;
	}

IL_003b:
	{
		G_B5_0 = 0;
	}

IL_003c:
	{
		V_0 = (bool)G_B5_0;
		goto IL_003f;
	}

IL_003f:
	{
		bool L_12 = V_0;
		return L_12;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Bounds_get_center_m5B05F81CB835EB6DD8628FDA24B638F477984DC3_inline (Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* __this, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = __this->___m_Center_0;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Bounds_get_extents_mFE6DC407FCE2341BE2C750CB554055D211281D25_inline (Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* __this, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = __this->___m_Extents_1;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Rect_get_x_mB267B718E0D067F2BAE31BA477647FBF964916EB_inline (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		float L_0 = __this->___m_XMin_0;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		float L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Rect_get_y_mC733E8D49F3CE21B2A3D40A1B72D687F22C97F49_inline (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		float L_0 = __this->___m_YMin_1;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		float L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Rect_get_width_m620D67551372073C9C32C4C4624C2A5713F7F9A9_inline (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		float L_0 = __this->___m_Width_2;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		float L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Rect_get_height_mE1AA6C6C725CCD2D317BD2157396D3CF7D47C9D8_inline (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		float L_0 = __this->___m_Height_3;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		float L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Vector2Int_get_x_mA2CACB1B6E6B5AD0CCC32B2CD2EDCE3ECEB50576_inline (Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___m_X_0;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Vector2Int_get_y_m48454163ECF0B463FB5A16A0C4FC4B14DB0768B3_inline (Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___m_Y_1;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector3Int_op_Equality_mB10073AF3B08421C46BF678C8FF64AAD62C83617_inline (Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___0_lhs, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___1_rhs, const RuntimeMethod* method) 
{
	bool V_0 = false;
	int32_t G_B4_0 = 0;
	{
		int32_t L_0;
		L_0 = Vector3Int_get_x_m21C268D2AA4C03CE35AA49DF6155347C9748054C_inline((&___0_lhs), NULL);
		int32_t L_1;
		L_1 = Vector3Int_get_x_m21C268D2AA4C03CE35AA49DF6155347C9748054C_inline((&___1_rhs), NULL);
		if ((!(((uint32_t)L_0) == ((uint32_t)L_1))))
		{
			goto IL_0033;
		}
	}
	{
		int32_t L_2;
		L_2 = Vector3Int_get_y_m42F43000F85D356557CAF03442273E7AA08F7F72_inline((&___0_lhs), NULL);
		int32_t L_3;
		L_3 = Vector3Int_get_y_m42F43000F85D356557CAF03442273E7AA08F7F72_inline((&___1_rhs), NULL);
		if ((!(((uint32_t)L_2) == ((uint32_t)L_3))))
		{
			goto IL_0033;
		}
	}
	{
		int32_t L_4;
		L_4 = Vector3Int_get_z_m96E180F866145E373F42358F2371EFF446F08AED_inline((&___0_lhs), NULL);
		int32_t L_5;
		L_5 = Vector3Int_get_z_m96E180F866145E373F42358F2371EFF446F08AED_inline((&___1_rhs), NULL);
		G_B4_0 = ((((int32_t)L_4) == ((int32_t)L_5))? 1 : 0);
		goto IL_0034;
	}

IL_0033:
	{
		G_B4_0 = 0;
	}

IL_0034:
	{
		V_0 = (bool)G_B4_0;
		goto IL_0037;
	}

IL_0037:
	{
		bool L_6 = V_0;
		return L_6;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Vector3Int_get_x_m21C268D2AA4C03CE35AA49DF6155347C9748054C_inline (Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___m_X_0;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Vector3Int_get_y_m42F43000F85D356557CAF03442273E7AA08F7F72_inline (Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___m_Y_1;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Vector3Int_get_z_m96E180F866145E373F42358F2371EFF446F08AED_inline (Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___m_Z_2;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
