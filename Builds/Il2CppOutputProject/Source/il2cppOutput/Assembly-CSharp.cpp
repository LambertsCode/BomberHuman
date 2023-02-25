#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


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

// System.Collections.Generic.Dictionary`2<UnityEngine.Vector3,Block>
struct Dictionary_2_t59B878E4ADB9CCE44F927CD5EC3591A0975741BD;
// System.Collections.Generic.Dictionary`2<UnityEngine.Vector3,System.Object>
struct Dictionary_2_t7D0F7C573BC40A0B5C2CAA7DC2B196CD332BAEBE;
// System.Collections.Generic.IEqualityComparer`1<UnityEngine.Vector3>
struct IEqualityComparer_1_t4572A7803D2D5D43767F2FE56C21EB1B4366EF54;
// System.Collections.Generic.Dictionary`2/KeyCollection<UnityEngine.Vector3,Block>
struct KeyCollection_t4C1D9702B41CD29BF4DAA7EBBDB919E5232956D3;
// System.Collections.Generic.List`1<Block>
struct List_1_tAD0608C1B7CF36F477E8A550815A288D56656DFF;
// System.Collections.Generic.List`1<Bomb>
struct List_1_tDB3AB8389E177E6FC35B0AD539765C2EF7334450;
// System.Collections.Generic.List`1<Enemy>
struct List_1_tC094F21B05965C2E6F7256CF752F1F5ACEE0518C;
// System.Collections.Generic.List`1<CoffeeTools.Events.GameEventListener>
struct List_1_tD5261AAFAEBC43CA1ABF9DED36961E42BF380A18;
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3;
// System.Collections.Generic.Dictionary`2/ValueCollection<UnityEngine.Vector3,Block>
struct ValueCollection_t6BE2CADC37C0DDCA56DDAF888BC60D4B7AF56F47;
// System.Collections.Generic.Dictionary`2/Entry<UnityEngine.Vector3,Block>[]
struct EntryU5BU5D_t6D65D3CDF3EFDD1AF6389D422D9BE66291B84D09;
// Block[]
struct BlockU5BU5D_t7F30D6F4DF60899D9D94ED09854E161EBCD983CA;
// Bomb[]
struct BombU5BU5D_t94C111A82B492A03FD6A20421DA70AA9614ABD59;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// UnityEngine.ContactPoint[]
struct ContactPointU5BU5D_t1ACD262B1EA44CD48E2039381DE96847F203E62B;
// Enemy[]
struct EnemyU5BU5D_t180C2C49BE2837412479DBB2D25E1D9C57C21CB0;
// CoffeeTools.Events.GameEventListener[]
struct GameEventListenerU5BU5D_t377EECB3FA8215D9AA7E6126EABCE698D28C06C1;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642;
// System.Int32[]
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4;
// UnityEngine.AnimationCurve
struct AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03;
// UnityEngine.Animator
struct Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149;
// UnityEngine.AudioClip
struct AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE;
// UnityEngine.AudioSource
struct AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B;
// UnityEngine.Behaviour
struct Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9;
// Block
struct Block_tD1B94B0BEA1476ED81C42F0F6E53EFBF129FF3A6;
// BlockManager
struct BlockManager_t9C5AF5A177FFEEBD9C3968E47D9D4F272EAC5414;
// Bomb
struct Bomb_t2F20FE59E0B0F4EE5ED5E76D2DD8406D9487CCC5;
// BoolVariable
struct BoolVariable_tEFB0BF7AE2B3698759030E79911DCB694CB00B5E;
// UnityEngine.Canvas
struct Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E;
// UnityEngine.Collider
struct Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02;
// UnityEngine.Collision
struct Collision_tDC11F9B3834FD25DEB8C7DD1C51B635D240BBBF0;
// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684;
// Enemy
struct Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627;
// EnemyManager
struct EnemyManager_t0C705BD8A8A466A5681EA2FD18CB057B361036E1;
// FloatToTextSetter
struct FloatToTextSetter_tC5A1D0787A5F3D2B2AB00A294EFFC7F65FA5A21E;
// FloatVariable
struct FloatVariable_t54F75E496629023CDD9A6E3ADC14072AB3C2E275;
// UnityEngine.UI.FontData
struct FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738;
// CoffeeTools.Events.GameEvent
struct GameEvent_tFC086B6DBF978FD9C391C201595AA84D9981B491;
// CoffeeTools.Events.GameEventListener
struct GameEventListener_t9EA3000DEE17ADBCD810A15E9E8A2830A3AE478E;
// GameManager
struct GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1;
// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319;
// UnityEngine.Events.InvokableCallList
struct InvokableCallList_tB7C66AA0C00F9C102C8BDC17A144E569AC7527A9;
// UnityEngine.Light
struct Light_tA2F349FE839781469A0344CF6039B51512394275;
// UnityEngine.Material
struct Material_t8927C00353A72755313F046D0CE85178AE8218EE;
// UnityEngine.Mesh
struct Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A;
// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A;
// UnityEngine.ParticleSystem
struct ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E;
// UnityEngine.Events.PersistentCallGroup
struct PersistentCallGroup_t9A1D83DA2BA3118C103FA87D93CE92557A956FDC;
// Player
struct Player_t5689617909B48F7640EA0892D85C92C13CC22C6F;
// PlayerBrain
struct PlayerBrain_t8E1560D2B1590AF0ABC355B852E846F3FC4A0A47;
// ReadmeScriptableObject
struct ReadmeScriptableObject_tD2811D928B11625AAC13E8C0614E4D2AB51E2058;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15;
// UnityEngine.RectTransform
struct RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072;
// UnityEngine.Rigidbody
struct Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A;
// UnityEngine.ScriptableObject
struct ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A;
// StateManager
struct StateManager_tDAE60D3E07D8A34DE82EF3FC439FB2968C4ACB47;
// System.String
struct String_t;
// CoffeeTools.Variables.StringVariable
struct StringVariable_tF722B8C57C7554A75D23379E070F3FA0F90ADCDD;
// UnityEngine.UI.Text
struct Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1;
// UnityEngine.TextGenerator
struct TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70;
// CoffeeTools.Variables.TextReplacer
struct TextReplacer_tEB5F8E2E5604F8D25348A4FEE3D3BA4A7AE5164C;
// UnityEngine.Texture2D
struct Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF;
// UnityEngine.Transform
struct Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1;
// UnityEngine.Events.UnityAction
struct UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099;
// UnityEngine.Events.UnityEvent
struct UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4;
// CoffeeTools.Variables.UnityEventRaiser
struct UnityEventRaiser_t8A2370C1EF0BEB4644C43A193EF511F369C797BF;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// UnityEngine.AudioClip/PCMReaderCallback
struct PCMReaderCallback_t9CA1437D36509A9FAC5EDD8FF2BC3259C24D0E0B;
// UnityEngine.AudioClip/PCMSetPositionCallback
struct PCMSetPositionCallback_tBDD99E7C0697687F1E7B06CDD5DE444A3709CF4C;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4;
// UnityEngine.RectTransform/ReapplyDrivenProperties
struct ReapplyDrivenProperties_t1441259DADA8FE33A95334AC24C017DFA3DEB4CE;

IL2CPP_EXTERN_C RuntimeClass* Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t59B878E4ADB9CCE44F927CD5EC3591A0975741BD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tAD0608C1B7CF36F477E8A550815A288D56656DFF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tC094F21B05965C2E6F7256CF752F1F5ACEE0518C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tD5261AAFAEBC43CA1ABF9DED36961E42BF380A18_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tDB3AB8389E177E6FC35B0AD539765C2EF7334450_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral133F94980A656A5ECC30EDEB5CC8C9310F41F269;
IL2CPP_EXTERN_C String_t* _stringLiteral13965FD064A482BC7D172918DF467212E8EAF0D3;
IL2CPP_EXTERN_C String_t* _stringLiteral2793A6051169D45EEECDDCE436FCA27B04441758;
IL2CPP_EXTERN_C String_t* _stringLiteral2918B2F21831E0CDD79E134CC1384ECDC0E2916C;
IL2CPP_EXTERN_C String_t* _stringLiteral3260331AF5DA53ABC7CA7BAF659CF8D9FC93DEC7;
IL2CPP_EXTERN_C String_t* _stringLiteral457CB937B2FD4136CDABEDDA634357F603F8954F;
IL2CPP_EXTERN_C String_t* _stringLiteral4FFF1C5F85164FDC6302BBAC4585F9DA653EDB21;
IL2CPP_EXTERN_C String_t* _stringLiteralA19526466B6903289E8D3A7D74C59E27E9EF33F3;
IL2CPP_EXTERN_C String_t* _stringLiteralC3BE03E13939D9A99F2B1AD5A66AF496693ACC60;
IL2CPP_EXTERN_C String_t* _stringLiteralC8E73DC4EDC0AEBC71ACEDC10E8B5EF7D26C8764;
IL2CPP_EXTERN_C String_t* _stringLiteralC94C3D52342E881447C30F182FF41AE786365EA6;
IL2CPP_EXTERN_C String_t* _stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C String_t* _stringLiteralDDFD700AA70AA21B276AAE3418D534581DA8347E;
IL2CPP_EXTERN_C String_t* _stringLiteralFBB454E8FC78090D2E89ED6B3050A97A01FB8613;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisPlayer_t5689617909B48F7640EA0892D85C92C13CC22C6F_m1BED3A96709F9A68D06117FAAE2AE1456F74CE7B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_mDF1BC098939CA3E6A7E2DB5214AA20BE3C9F9EE4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_ContainsKey_mE3E143158029D6ADAC5A00E68CE1DEAE2BED1ED0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Remove_m712AFC412D263F92EFE2BDBA48C2954FE17B720F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_mA7073B6B388A401394DC6B4E2ED10C462F5CF4C4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisPlayer_t5689617909B48F7640EA0892D85C92C13CC22C6F_m82212DD756C5F3A2B4844722FD1EE504E9AAD906_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m4A165BE358C78F8844421B2A513B00E626F4B86A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m51152AE1B99DCCA528E426B5AB47C84CA9CE03BC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mAE5430B0B373666980F3A3357A1DC7298D6D53C7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mBE339A0D5D8A8E1458C669CBACB51BFC70412C4A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Contains_m2D3953DEB84CD5622D7FBE02FB7EAFD31276450B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Contains_m4434AEB6DFA466908E59044F4FAF32B233CE7A9C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Contains_mDD3B3320E8F04D5683767102003DCC1A646F24D2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Remove_m279C015886B9A5635C788A2ABDB7325CEE8652C4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Remove_mA5CF7C12D59438DFD44792765E09BE018434E254_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Remove_mBF46B164D2FF404408FFA5A6BBF8AB1F95C1EEDA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Remove_mD7F5C17066228C9B8BD4714896533104B05A67A9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m264424C12AE2901EAD718720F579BDA200FCC721_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m43564A2A81100BA2236FA4C9DEF90E313664CD0E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m82F63E44C145FD28D830D98EEEB43159B62433E5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m859B0EE8491FDDEB1A3F7115D334B863E025BBC8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mB499F4BB9B012EBA8F228DB7760F6BC6D7717512_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m6206A8F48C7A98B9CFC23A13548CB215717573BD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m6C3B4446020715A887B6977BDBB20AC8EE2ADF16_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m92F22AFC554852703FDEBB541CD7A42F52B20C05_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m99FAEDD9C024582566F281EF9D4051695FBDB0A5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m3E90AE762FA32F7597154FA3C1E3F8FE491C51AD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m836169963115FD20D6888445536301674670247A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var;
struct ContactPoint_tC179732A8E0014F5EFF5977ED1ADF12CF14A9017 ;

struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tFDCAFCBB4B3431CFF2DC4D3E03FBFDF54EFF7E9A 
{
public:

public:
};


// System.Object


// System.Collections.Generic.Dictionary`2<UnityEngine.Vector3,Block>
struct Dictionary_2_t59B878E4ADB9CCE44F927CD5EC3591A0975741BD  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_t6D65D3CDF3EFDD1AF6389D422D9BE66291B84D09* ___entries_1;
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
	KeyCollection_t4C1D9702B41CD29BF4DAA7EBBDB919E5232956D3 * ___keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_t6BE2CADC37C0DDCA56DDAF888BC60D4B7AF56F47 * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_t59B878E4ADB9CCE44F927CD5EC3591A0975741BD, ___buckets_0)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_t59B878E4ADB9CCE44F927CD5EC3591A0975741BD, ___entries_1)); }
	inline EntryU5BU5D_t6D65D3CDF3EFDD1AF6389D422D9BE66291B84D09* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_t6D65D3CDF3EFDD1AF6389D422D9BE66291B84D09** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_t6D65D3CDF3EFDD1AF6389D422D9BE66291B84D09* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_t59B878E4ADB9CCE44F927CD5EC3591A0975741BD, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_t59B878E4ADB9CCE44F927CD5EC3591A0975741BD, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t59B878E4ADB9CCE44F927CD5EC3591A0975741BD, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t59B878E4ADB9CCE44F927CD5EC3591A0975741BD, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t59B878E4ADB9CCE44F927CD5EC3591A0975741BD, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t59B878E4ADB9CCE44F927CD5EC3591A0975741BD, ___keys_7)); }
	inline KeyCollection_t4C1D9702B41CD29BF4DAA7EBBDB919E5232956D3 * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_t4C1D9702B41CD29BF4DAA7EBBDB919E5232956D3 ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_t4C1D9702B41CD29BF4DAA7EBBDB919E5232956D3 * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t59B878E4ADB9CCE44F927CD5EC3591A0975741BD, ___values_8)); }
	inline ValueCollection_t6BE2CADC37C0DDCA56DDAF888BC60D4B7AF56F47 * get_values_8() const { return ___values_8; }
	inline ValueCollection_t6BE2CADC37C0DDCA56DDAF888BC60D4B7AF56F47 ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_t6BE2CADC37C0DDCA56DDAF888BC60D4B7AF56F47 * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t59B878E4ADB9CCE44F927CD5EC3591A0975741BD, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Collections.Generic.List`1<Block>
struct List_1_tAD0608C1B7CF36F477E8A550815A288D56656DFF  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	BlockU5BU5D_t7F30D6F4DF60899D9D94ED09854E161EBCD983CA* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_tAD0608C1B7CF36F477E8A550815A288D56656DFF, ____items_1)); }
	inline BlockU5BU5D_t7F30D6F4DF60899D9D94ED09854E161EBCD983CA* get__items_1() const { return ____items_1; }
	inline BlockU5BU5D_t7F30D6F4DF60899D9D94ED09854E161EBCD983CA** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(BlockU5BU5D_t7F30D6F4DF60899D9D94ED09854E161EBCD983CA* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_tAD0608C1B7CF36F477E8A550815A288D56656DFF, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_tAD0608C1B7CF36F477E8A550815A288D56656DFF, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_tAD0608C1B7CF36F477E8A550815A288D56656DFF, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_tAD0608C1B7CF36F477E8A550815A288D56656DFF_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	BlockU5BU5D_t7F30D6F4DF60899D9D94ED09854E161EBCD983CA* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_tAD0608C1B7CF36F477E8A550815A288D56656DFF_StaticFields, ____emptyArray_5)); }
	inline BlockU5BU5D_t7F30D6F4DF60899D9D94ED09854E161EBCD983CA* get__emptyArray_5() const { return ____emptyArray_5; }
	inline BlockU5BU5D_t7F30D6F4DF60899D9D94ED09854E161EBCD983CA** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(BlockU5BU5D_t7F30D6F4DF60899D9D94ED09854E161EBCD983CA* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<Bomb>
struct List_1_tDB3AB8389E177E6FC35B0AD539765C2EF7334450  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	BombU5BU5D_t94C111A82B492A03FD6A20421DA70AA9614ABD59* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_tDB3AB8389E177E6FC35B0AD539765C2EF7334450, ____items_1)); }
	inline BombU5BU5D_t94C111A82B492A03FD6A20421DA70AA9614ABD59* get__items_1() const { return ____items_1; }
	inline BombU5BU5D_t94C111A82B492A03FD6A20421DA70AA9614ABD59** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(BombU5BU5D_t94C111A82B492A03FD6A20421DA70AA9614ABD59* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_tDB3AB8389E177E6FC35B0AD539765C2EF7334450, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_tDB3AB8389E177E6FC35B0AD539765C2EF7334450, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_tDB3AB8389E177E6FC35B0AD539765C2EF7334450, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_tDB3AB8389E177E6FC35B0AD539765C2EF7334450_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	BombU5BU5D_t94C111A82B492A03FD6A20421DA70AA9614ABD59* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_tDB3AB8389E177E6FC35B0AD539765C2EF7334450_StaticFields, ____emptyArray_5)); }
	inline BombU5BU5D_t94C111A82B492A03FD6A20421DA70AA9614ABD59* get__emptyArray_5() const { return ____emptyArray_5; }
	inline BombU5BU5D_t94C111A82B492A03FD6A20421DA70AA9614ABD59** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(BombU5BU5D_t94C111A82B492A03FD6A20421DA70AA9614ABD59* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<Enemy>
struct List_1_tC094F21B05965C2E6F7256CF752F1F5ACEE0518C  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	EnemyU5BU5D_t180C2C49BE2837412479DBB2D25E1D9C57C21CB0* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_tC094F21B05965C2E6F7256CF752F1F5ACEE0518C, ____items_1)); }
	inline EnemyU5BU5D_t180C2C49BE2837412479DBB2D25E1D9C57C21CB0* get__items_1() const { return ____items_1; }
	inline EnemyU5BU5D_t180C2C49BE2837412479DBB2D25E1D9C57C21CB0** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(EnemyU5BU5D_t180C2C49BE2837412479DBB2D25E1D9C57C21CB0* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_tC094F21B05965C2E6F7256CF752F1F5ACEE0518C, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_tC094F21B05965C2E6F7256CF752F1F5ACEE0518C, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_tC094F21B05965C2E6F7256CF752F1F5ACEE0518C, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_tC094F21B05965C2E6F7256CF752F1F5ACEE0518C_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	EnemyU5BU5D_t180C2C49BE2837412479DBB2D25E1D9C57C21CB0* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_tC094F21B05965C2E6F7256CF752F1F5ACEE0518C_StaticFields, ____emptyArray_5)); }
	inline EnemyU5BU5D_t180C2C49BE2837412479DBB2D25E1D9C57C21CB0* get__emptyArray_5() const { return ____emptyArray_5; }
	inline EnemyU5BU5D_t180C2C49BE2837412479DBB2D25E1D9C57C21CB0** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(EnemyU5BU5D_t180C2C49BE2837412479DBB2D25E1D9C57C21CB0* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<CoffeeTools.Events.GameEventListener>
struct List_1_tD5261AAFAEBC43CA1ABF9DED36961E42BF380A18  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	GameEventListenerU5BU5D_t377EECB3FA8215D9AA7E6126EABCE698D28C06C1* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_tD5261AAFAEBC43CA1ABF9DED36961E42BF380A18, ____items_1)); }
	inline GameEventListenerU5BU5D_t377EECB3FA8215D9AA7E6126EABCE698D28C06C1* get__items_1() const { return ____items_1; }
	inline GameEventListenerU5BU5D_t377EECB3FA8215D9AA7E6126EABCE698D28C06C1** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(GameEventListenerU5BU5D_t377EECB3FA8215D9AA7E6126EABCE698D28C06C1* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_tD5261AAFAEBC43CA1ABF9DED36961E42BF380A18, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_tD5261AAFAEBC43CA1ABF9DED36961E42BF380A18, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_tD5261AAFAEBC43CA1ABF9DED36961E42BF380A18, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_tD5261AAFAEBC43CA1ABF9DED36961E42BF380A18_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	GameEventListenerU5BU5D_t377EECB3FA8215D9AA7E6126EABCE698D28C06C1* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_tD5261AAFAEBC43CA1ABF9DED36961E42BF380A18_StaticFields, ____emptyArray_5)); }
	inline GameEventListenerU5BU5D_t377EECB3FA8215D9AA7E6126EABCE698D28C06C1* get__emptyArray_5() const { return ____emptyArray_5; }
	inline GameEventListenerU5BU5D_t377EECB3FA8215D9AA7E6126EABCE698D28C06C1** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(GameEventListenerU5BU5D_t377EECB3FA8215D9AA7E6126EABCE698D28C06C1* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5, ____items_1)); }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* get__items_1() const { return ____items_1; }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5_StaticFields, ____emptyArray_5)); }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* get__emptyArray_5() const { return ____emptyArray_5; }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<System.Object>
struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5  : public RuntimeObject
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

struct Il2CppArrayBounds;

// System.Array


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


// UnityEngine.Events.UnityEventBase
struct UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB  : public RuntimeObject
{
public:
	// UnityEngine.Events.InvokableCallList UnityEngine.Events.UnityEventBase::m_Calls
	InvokableCallList_tB7C66AA0C00F9C102C8BDC17A144E569AC7527A9 * ___m_Calls_0;
	// UnityEngine.Events.PersistentCallGroup UnityEngine.Events.UnityEventBase::m_PersistentCalls
	PersistentCallGroup_t9A1D83DA2BA3118C103FA87D93CE92557A956FDC * ___m_PersistentCalls_1;
	// System.Boolean UnityEngine.Events.UnityEventBase::m_CallsDirty
	bool ___m_CallsDirty_2;

public:
	inline static int32_t get_offset_of_m_Calls_0() { return static_cast<int32_t>(offsetof(UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB, ___m_Calls_0)); }
	inline InvokableCallList_tB7C66AA0C00F9C102C8BDC17A144E569AC7527A9 * get_m_Calls_0() const { return ___m_Calls_0; }
	inline InvokableCallList_tB7C66AA0C00F9C102C8BDC17A144E569AC7527A9 ** get_address_of_m_Calls_0() { return &___m_Calls_0; }
	inline void set_m_Calls_0(InvokableCallList_tB7C66AA0C00F9C102C8BDC17A144E569AC7527A9 * value)
	{
		___m_Calls_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Calls_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_PersistentCalls_1() { return static_cast<int32_t>(offsetof(UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB, ___m_PersistentCalls_1)); }
	inline PersistentCallGroup_t9A1D83DA2BA3118C103FA87D93CE92557A956FDC * get_m_PersistentCalls_1() const { return ___m_PersistentCalls_1; }
	inline PersistentCallGroup_t9A1D83DA2BA3118C103FA87D93CE92557A956FDC ** get_address_of_m_PersistentCalls_1() { return &___m_PersistentCalls_1; }
	inline void set_m_PersistentCalls_1(PersistentCallGroup_t9A1D83DA2BA3118C103FA87D93CE92557A956FDC * value)
	{
		___m_PersistentCalls_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PersistentCalls_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_CallsDirty_2() { return static_cast<int32_t>(offsetof(UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB, ___m_CallsDirty_2)); }
	inline bool get_m_CallsDirty_2() const { return ___m_CallsDirty_2; }
	inline bool* get_address_of_m_CallsDirty_2() { return &___m_CallsDirty_2; }
	inline void set_m_CallsDirty_2(bool value)
	{
		___m_CallsDirty_2 = value;
	}
};


// Utils
struct Utils_tB7E464340F21C3BC9E90CD7C3670828A951C212E  : public RuntimeObject
{
public:

public:
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


// UnityEngine.Color
struct Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 
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
	inline static int32_t get_offset_of_r_0() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___r_0)); }
	inline float get_r_0() const { return ___r_0; }
	inline float* get_address_of_r_0() { return &___r_0; }
	inline void set_r_0(float value)
	{
		___r_0 = value;
	}

	inline static int32_t get_offset_of_g_1() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___g_1)); }
	inline float get_g_1() const { return ___g_1; }
	inline float* get_address_of_g_1() { return &___g_1; }
	inline void set_g_1(float value)
	{
		___g_1 = value;
	}

	inline static int32_t get_offset_of_b_2() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___b_2)); }
	inline float get_b_2() const { return ___b_2; }
	inline float* get_address_of_b_2() { return &___b_2; }
	inline void set_b_2(float value)
	{
		___b_2 = value;
	}

	inline static int32_t get_offset_of_a_3() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___a_3)); }
	inline float get_a_3() const { return ___a_3; }
	inline float* get_address_of_a_3() { return &___a_3; }
	inline void set_a_3(float value)
	{
		___a_3 = value;
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


// UnityEngine.Quaternion
struct Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 
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
struct Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE 
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


// UnityEngine.Events.UnityEvent
struct UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4  : public UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB
{
public:
	// System.Object[] UnityEngine.Events.UnityEvent::m_InvokeArray
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___m_InvokeArray_3;

public:
	inline static int32_t get_offset_of_m_InvokeArray_3() { return static_cast<int32_t>(offsetof(UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4, ___m_InvokeArray_3)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get_m_InvokeArray_3() const { return ___m_InvokeArray_3; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of_m_InvokeArray_3() { return &___m_InvokeArray_3; }
	inline void set_m_InvokeArray_3(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		___m_InvokeArray_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_InvokeArray_3), (void*)value);
	}
};


// UnityEngine.Vector2
struct Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 
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
struct Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E 
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
struct Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 
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


// UnityEngine.ParticleSystem/MainModule
struct MainModule_t671F49558CB1A3CFAAD637A7927C076EC2E61F0B 
{
public:
	// UnityEngine.ParticleSystem UnityEngine.ParticleSystem/MainModule::m_ParticleSystem
	ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * ___m_ParticleSystem_0;

public:
	inline static int32_t get_offset_of_m_ParticleSystem_0() { return static_cast<int32_t>(offsetof(MainModule_t671F49558CB1A3CFAAD637A7927C076EC2E61F0B, ___m_ParticleSystem_0)); }
	inline ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * get_m_ParticleSystem_0() const { return ___m_ParticleSystem_0; }
	inline ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E ** get_address_of_m_ParticleSystem_0() { return &___m_ParticleSystem_0; }
	inline void set_m_ParticleSystem_0(ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * value)
	{
		___m_ParticleSystem_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ParticleSystem_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.ParticleSystem/MainModule
struct MainModule_t671F49558CB1A3CFAAD637A7927C076EC2E61F0B_marshaled_pinvoke
{
	ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * ___m_ParticleSystem_0;
};
// Native definition for COM marshalling of UnityEngine.ParticleSystem/MainModule
struct MainModule_t671F49558CB1A3CFAAD637A7927C076EC2E61F0B_marshaled_com
{
	ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * ___m_ParticleSystem_0;
};

// UnityEngine.ParticleSystem/SubEmittersModule
struct SubEmittersModule_t0336A6F2B5D3339D93468AED015E2356FBE9E61C 
{
public:
	// UnityEngine.ParticleSystem UnityEngine.ParticleSystem/SubEmittersModule::m_ParticleSystem
	ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * ___m_ParticleSystem_0;

public:
	inline static int32_t get_offset_of_m_ParticleSystem_0() { return static_cast<int32_t>(offsetof(SubEmittersModule_t0336A6F2B5D3339D93468AED015E2356FBE9E61C, ___m_ParticleSystem_0)); }
	inline ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * get_m_ParticleSystem_0() const { return ___m_ParticleSystem_0; }
	inline ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E ** get_address_of_m_ParticleSystem_0() { return &___m_ParticleSystem_0; }
	inline void set_m_ParticleSystem_0(ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * value)
	{
		___m_ParticleSystem_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ParticleSystem_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.ParticleSystem/SubEmittersModule
struct SubEmittersModule_t0336A6F2B5D3339D93468AED015E2356FBE9E61C_marshaled_pinvoke
{
	ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * ___m_ParticleSystem_0;
};
// Native definition for COM marshalling of UnityEngine.ParticleSystem/SubEmittersModule
struct SubEmittersModule_t0336A6F2B5D3339D93468AED015E2356FBE9E61C_marshaled_com
{
	ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * ___m_ParticleSystem_0;
};

// UnityEngine.Collision
struct Collision_tDC11F9B3834FD25DEB8C7DD1C51B635D240BBBF0  : public RuntimeObject
{
public:
	// UnityEngine.Vector3 UnityEngine.Collision::m_Impulse
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_Impulse_0;
	// UnityEngine.Vector3 UnityEngine.Collision::m_RelativeVelocity
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_RelativeVelocity_1;
	// UnityEngine.Rigidbody UnityEngine.Collision::m_Rigidbody
	Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * ___m_Rigidbody_2;
	// UnityEngine.Collider UnityEngine.Collision::m_Collider
	Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * ___m_Collider_3;
	// System.Int32 UnityEngine.Collision::m_ContactCount
	int32_t ___m_ContactCount_4;
	// UnityEngine.ContactPoint[] UnityEngine.Collision::m_ReusedContacts
	ContactPointU5BU5D_t1ACD262B1EA44CD48E2039381DE96847F203E62B* ___m_ReusedContacts_5;
	// UnityEngine.ContactPoint[] UnityEngine.Collision::m_LegacyContacts
	ContactPointU5BU5D_t1ACD262B1EA44CD48E2039381DE96847F203E62B* ___m_LegacyContacts_6;

public:
	inline static int32_t get_offset_of_m_Impulse_0() { return static_cast<int32_t>(offsetof(Collision_tDC11F9B3834FD25DEB8C7DD1C51B635D240BBBF0, ___m_Impulse_0)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_Impulse_0() const { return ___m_Impulse_0; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_Impulse_0() { return &___m_Impulse_0; }
	inline void set_m_Impulse_0(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_Impulse_0 = value;
	}

	inline static int32_t get_offset_of_m_RelativeVelocity_1() { return static_cast<int32_t>(offsetof(Collision_tDC11F9B3834FD25DEB8C7DD1C51B635D240BBBF0, ___m_RelativeVelocity_1)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_RelativeVelocity_1() const { return ___m_RelativeVelocity_1; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_RelativeVelocity_1() { return &___m_RelativeVelocity_1; }
	inline void set_m_RelativeVelocity_1(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_RelativeVelocity_1 = value;
	}

	inline static int32_t get_offset_of_m_Rigidbody_2() { return static_cast<int32_t>(offsetof(Collision_tDC11F9B3834FD25DEB8C7DD1C51B635D240BBBF0, ___m_Rigidbody_2)); }
	inline Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * get_m_Rigidbody_2() const { return ___m_Rigidbody_2; }
	inline Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A ** get_address_of_m_Rigidbody_2() { return &___m_Rigidbody_2; }
	inline void set_m_Rigidbody_2(Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * value)
	{
		___m_Rigidbody_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Rigidbody_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_Collider_3() { return static_cast<int32_t>(offsetof(Collision_tDC11F9B3834FD25DEB8C7DD1C51B635D240BBBF0, ___m_Collider_3)); }
	inline Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * get_m_Collider_3() const { return ___m_Collider_3; }
	inline Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 ** get_address_of_m_Collider_3() { return &___m_Collider_3; }
	inline void set_m_Collider_3(Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * value)
	{
		___m_Collider_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Collider_3), (void*)value);
	}

	inline static int32_t get_offset_of_m_ContactCount_4() { return static_cast<int32_t>(offsetof(Collision_tDC11F9B3834FD25DEB8C7DD1C51B635D240BBBF0, ___m_ContactCount_4)); }
	inline int32_t get_m_ContactCount_4() const { return ___m_ContactCount_4; }
	inline int32_t* get_address_of_m_ContactCount_4() { return &___m_ContactCount_4; }
	inline void set_m_ContactCount_4(int32_t value)
	{
		___m_ContactCount_4 = value;
	}

	inline static int32_t get_offset_of_m_ReusedContacts_5() { return static_cast<int32_t>(offsetof(Collision_tDC11F9B3834FD25DEB8C7DD1C51B635D240BBBF0, ___m_ReusedContacts_5)); }
	inline ContactPointU5BU5D_t1ACD262B1EA44CD48E2039381DE96847F203E62B* get_m_ReusedContacts_5() const { return ___m_ReusedContacts_5; }
	inline ContactPointU5BU5D_t1ACD262B1EA44CD48E2039381DE96847F203E62B** get_address_of_m_ReusedContacts_5() { return &___m_ReusedContacts_5; }
	inline void set_m_ReusedContacts_5(ContactPointU5BU5D_t1ACD262B1EA44CD48E2039381DE96847F203E62B* value)
	{
		___m_ReusedContacts_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ReusedContacts_5), (void*)value);
	}

	inline static int32_t get_offset_of_m_LegacyContacts_6() { return static_cast<int32_t>(offsetof(Collision_tDC11F9B3834FD25DEB8C7DD1C51B635D240BBBF0, ___m_LegacyContacts_6)); }
	inline ContactPointU5BU5D_t1ACD262B1EA44CD48E2039381DE96847F203E62B* get_m_LegacyContacts_6() const { return ___m_LegacyContacts_6; }
	inline ContactPointU5BU5D_t1ACD262B1EA44CD48E2039381DE96847F203E62B** get_address_of_m_LegacyContacts_6() { return &___m_LegacyContacts_6; }
	inline void set_m_LegacyContacts_6(ContactPointU5BU5D_t1ACD262B1EA44CD48E2039381DE96847F203E62B* value)
	{
		___m_LegacyContacts_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_LegacyContacts_6), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Collision
struct Collision_tDC11F9B3834FD25DEB8C7DD1C51B635D240BBBF0_marshaled_pinvoke
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_Impulse_0;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_RelativeVelocity_1;
	Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * ___m_Rigidbody_2;
	Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * ___m_Collider_3;
	int32_t ___m_ContactCount_4;
	ContactPoint_tC179732A8E0014F5EFF5977ED1ADF12CF14A9017 * ___m_ReusedContacts_5;
	ContactPoint_tC179732A8E0014F5EFF5977ED1ADF12CF14A9017 * ___m_LegacyContacts_6;
};
// Native definition for COM marshalling of UnityEngine.Collision
struct Collision_tDC11F9B3834FD25DEB8C7DD1C51B635D240BBBF0_marshaled_com
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_Impulse_0;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_RelativeVelocity_1;
	Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * ___m_Rigidbody_2;
	Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * ___m_Collider_3;
	int32_t ___m_ContactCount_4;
	ContactPoint_tC179732A8E0014F5EFF5977ED1ADF12CF14A9017 * ___m_ReusedContacts_5;
	ContactPoint_tC179732A8E0014F5EFF5977ED1ADF12CF14A9017 * ___m_LegacyContacts_6;
};

// GameMode
struct GameMode_t3635427B8DF6A50F9EAE8955955887AD0D098C82 
{
public:
	// System.Int32 GameMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(GameMode_t3635427B8DF6A50F9EAE8955955887AD0D098C82, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// GameState
struct GameState_t220CA73AF42CC54408408696DBFFAB424F309FAE 
{
public:
	// System.Int32 GameState::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(GameState_t220CA73AF42CC54408408696DBFFAB424F309FAE, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.KeyCode
struct KeyCode_t1D303F7D061BF4429872E9F109ADDBCB431671F4 
{
public:
	// System.Int32 UnityEngine.KeyCode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(KeyCode_t1D303F7D061BF4429872E9F109ADDBCB431671F4, ___value___2)); }
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

// UnityEngine.ParticleSystemCurveMode
struct ParticleSystemCurveMode_t1B9D50590BC22BDD142A21664B8E2F9475409342 
{
public:
	// System.Int32 UnityEngine.ParticleSystemCurveMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ParticleSystemCurveMode_t1B9D50590BC22BDD142A21664B8E2F9475409342, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.QueryTriggerInteraction
struct QueryTriggerInteraction_t9B82FB8CCAF559F47B6B8C0ECE197515ABFA96B0 
{
public:
	// System.Int32 UnityEngine.QueryTriggerInteraction::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(QueryTriggerInteraction_t9B82FB8CCAF559F47B6B8C0ECE197515ABFA96B0, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.RaycastHit
struct RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89 
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


// UnityEngine.AudioClip
struct AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:
	// UnityEngine.AudioClip/PCMReaderCallback UnityEngine.AudioClip::m_PCMReaderCallback
	PCMReaderCallback_t9CA1437D36509A9FAC5EDD8FF2BC3259C24D0E0B * ___m_PCMReaderCallback_4;
	// UnityEngine.AudioClip/PCMSetPositionCallback UnityEngine.AudioClip::m_PCMSetPositionCallback
	PCMSetPositionCallback_tBDD99E7C0697687F1E7B06CDD5DE444A3709CF4C * ___m_PCMSetPositionCallback_5;

public:
	inline static int32_t get_offset_of_m_PCMReaderCallback_4() { return static_cast<int32_t>(offsetof(AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE, ___m_PCMReaderCallback_4)); }
	inline PCMReaderCallback_t9CA1437D36509A9FAC5EDD8FF2BC3259C24D0E0B * get_m_PCMReaderCallback_4() const { return ___m_PCMReaderCallback_4; }
	inline PCMReaderCallback_t9CA1437D36509A9FAC5EDD8FF2BC3259C24D0E0B ** get_address_of_m_PCMReaderCallback_4() { return &___m_PCMReaderCallback_4; }
	inline void set_m_PCMReaderCallback_4(PCMReaderCallback_t9CA1437D36509A9FAC5EDD8FF2BC3259C24D0E0B * value)
	{
		___m_PCMReaderCallback_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PCMReaderCallback_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_PCMSetPositionCallback_5() { return static_cast<int32_t>(offsetof(AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE, ___m_PCMSetPositionCallback_5)); }
	inline PCMSetPositionCallback_tBDD99E7C0697687F1E7B06CDD5DE444A3709CF4C * get_m_PCMSetPositionCallback_5() const { return ___m_PCMSetPositionCallback_5; }
	inline PCMSetPositionCallback_tBDD99E7C0697687F1E7B06CDD5DE444A3709CF4C ** get_address_of_m_PCMSetPositionCallback_5() { return &___m_PCMSetPositionCallback_5; }
	inline void set_m_PCMSetPositionCallback_5(PCMSetPositionCallback_tBDD99E7C0697687F1E7B06CDD5DE444A3709CF4C * value)
	{
		___m_PCMSetPositionCallback_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PCMSetPositionCallback_5), (void*)value);
	}
};


// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
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

// UnityEngine.ParticleSystem/MinMaxCurve
struct MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD 
{
public:
	// UnityEngine.ParticleSystemCurveMode UnityEngine.ParticleSystem/MinMaxCurve::m_Mode
	int32_t ___m_Mode_0;
	// System.Single UnityEngine.ParticleSystem/MinMaxCurve::m_CurveMultiplier
	float ___m_CurveMultiplier_1;
	// UnityEngine.AnimationCurve UnityEngine.ParticleSystem/MinMaxCurve::m_CurveMin
	AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * ___m_CurveMin_2;
	// UnityEngine.AnimationCurve UnityEngine.ParticleSystem/MinMaxCurve::m_CurveMax
	AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * ___m_CurveMax_3;
	// System.Single UnityEngine.ParticleSystem/MinMaxCurve::m_ConstantMin
	float ___m_ConstantMin_4;
	// System.Single UnityEngine.ParticleSystem/MinMaxCurve::m_ConstantMax
	float ___m_ConstantMax_5;

public:
	inline static int32_t get_offset_of_m_Mode_0() { return static_cast<int32_t>(offsetof(MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD, ___m_Mode_0)); }
	inline int32_t get_m_Mode_0() const { return ___m_Mode_0; }
	inline int32_t* get_address_of_m_Mode_0() { return &___m_Mode_0; }
	inline void set_m_Mode_0(int32_t value)
	{
		___m_Mode_0 = value;
	}

	inline static int32_t get_offset_of_m_CurveMultiplier_1() { return static_cast<int32_t>(offsetof(MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD, ___m_CurveMultiplier_1)); }
	inline float get_m_CurveMultiplier_1() const { return ___m_CurveMultiplier_1; }
	inline float* get_address_of_m_CurveMultiplier_1() { return &___m_CurveMultiplier_1; }
	inline void set_m_CurveMultiplier_1(float value)
	{
		___m_CurveMultiplier_1 = value;
	}

	inline static int32_t get_offset_of_m_CurveMin_2() { return static_cast<int32_t>(offsetof(MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD, ___m_CurveMin_2)); }
	inline AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * get_m_CurveMin_2() const { return ___m_CurveMin_2; }
	inline AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 ** get_address_of_m_CurveMin_2() { return &___m_CurveMin_2; }
	inline void set_m_CurveMin_2(AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * value)
	{
		___m_CurveMin_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CurveMin_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_CurveMax_3() { return static_cast<int32_t>(offsetof(MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD, ___m_CurveMax_3)); }
	inline AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * get_m_CurveMax_3() const { return ___m_CurveMax_3; }
	inline AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 ** get_address_of_m_CurveMax_3() { return &___m_CurveMax_3; }
	inline void set_m_CurveMax_3(AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * value)
	{
		___m_CurveMax_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CurveMax_3), (void*)value);
	}

	inline static int32_t get_offset_of_m_ConstantMin_4() { return static_cast<int32_t>(offsetof(MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD, ___m_ConstantMin_4)); }
	inline float get_m_ConstantMin_4() const { return ___m_ConstantMin_4; }
	inline float* get_address_of_m_ConstantMin_4() { return &___m_ConstantMin_4; }
	inline void set_m_ConstantMin_4(float value)
	{
		___m_ConstantMin_4 = value;
	}

	inline static int32_t get_offset_of_m_ConstantMax_5() { return static_cast<int32_t>(offsetof(MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD, ___m_ConstantMax_5)); }
	inline float get_m_ConstantMax_5() const { return ___m_ConstantMax_5; }
	inline float* get_address_of_m_ConstantMax_5() { return &___m_ConstantMax_5; }
	inline void set_m_ConstantMax_5(float value)
	{
		___m_ConstantMax_5 = value;
	}
};


// UnityEngine.Behaviour
struct Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// BlockManager
struct BlockManager_t9C5AF5A177FFEEBD9C3968E47D9D4F272EAC5414  : public ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A
{
public:
	// System.Collections.Generic.List`1<Block> BlockManager::activeBlocks
	List_1_tAD0608C1B7CF36F477E8A550815A288D56656DFF * ___activeBlocks_4;
	// UnityEngine.GameObject BlockManager::breakableBlockPrefab
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___breakableBlockPrefab_5;
	// System.Collections.Generic.Dictionary`2<UnityEngine.Vector3,Block> BlockManager::activeBlocksDictionary
	Dictionary_2_t59B878E4ADB9CCE44F927CD5EC3591A0975741BD * ___activeBlocksDictionary_6;
	// UnityEngine.Vector2 BlockManager::maxBlock
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___maxBlock_7;
	// UnityEngine.Vector2 BlockManager::minBlock
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___minBlock_8;

public:
	inline static int32_t get_offset_of_activeBlocks_4() { return static_cast<int32_t>(offsetof(BlockManager_t9C5AF5A177FFEEBD9C3968E47D9D4F272EAC5414, ___activeBlocks_4)); }
	inline List_1_tAD0608C1B7CF36F477E8A550815A288D56656DFF * get_activeBlocks_4() const { return ___activeBlocks_4; }
	inline List_1_tAD0608C1B7CF36F477E8A550815A288D56656DFF ** get_address_of_activeBlocks_4() { return &___activeBlocks_4; }
	inline void set_activeBlocks_4(List_1_tAD0608C1B7CF36F477E8A550815A288D56656DFF * value)
	{
		___activeBlocks_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___activeBlocks_4), (void*)value);
	}

	inline static int32_t get_offset_of_breakableBlockPrefab_5() { return static_cast<int32_t>(offsetof(BlockManager_t9C5AF5A177FFEEBD9C3968E47D9D4F272EAC5414, ___breakableBlockPrefab_5)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_breakableBlockPrefab_5() const { return ___breakableBlockPrefab_5; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_breakableBlockPrefab_5() { return &___breakableBlockPrefab_5; }
	inline void set_breakableBlockPrefab_5(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___breakableBlockPrefab_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___breakableBlockPrefab_5), (void*)value);
	}

	inline static int32_t get_offset_of_activeBlocksDictionary_6() { return static_cast<int32_t>(offsetof(BlockManager_t9C5AF5A177FFEEBD9C3968E47D9D4F272EAC5414, ___activeBlocksDictionary_6)); }
	inline Dictionary_2_t59B878E4ADB9CCE44F927CD5EC3591A0975741BD * get_activeBlocksDictionary_6() const { return ___activeBlocksDictionary_6; }
	inline Dictionary_2_t59B878E4ADB9CCE44F927CD5EC3591A0975741BD ** get_address_of_activeBlocksDictionary_6() { return &___activeBlocksDictionary_6; }
	inline void set_activeBlocksDictionary_6(Dictionary_2_t59B878E4ADB9CCE44F927CD5EC3591A0975741BD * value)
	{
		___activeBlocksDictionary_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___activeBlocksDictionary_6), (void*)value);
	}

	inline static int32_t get_offset_of_maxBlock_7() { return static_cast<int32_t>(offsetof(BlockManager_t9C5AF5A177FFEEBD9C3968E47D9D4F272EAC5414, ___maxBlock_7)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_maxBlock_7() const { return ___maxBlock_7; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_maxBlock_7() { return &___maxBlock_7; }
	inline void set_maxBlock_7(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___maxBlock_7 = value;
	}

	inline static int32_t get_offset_of_minBlock_8() { return static_cast<int32_t>(offsetof(BlockManager_t9C5AF5A177FFEEBD9C3968E47D9D4F272EAC5414, ___minBlock_8)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_minBlock_8() const { return ___minBlock_8; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_minBlock_8() { return &___minBlock_8; }
	inline void set_minBlock_8(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___minBlock_8 = value;
	}
};


// BoolVariable
struct BoolVariable_tEFB0BF7AE2B3698759030E79911DCB694CB00B5E  : public ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A
{
public:
	// System.Boolean BoolVariable::_value
	bool ____value_4;

public:
	inline static int32_t get_offset_of__value_4() { return static_cast<int32_t>(offsetof(BoolVariable_tEFB0BF7AE2B3698759030E79911DCB694CB00B5E, ____value_4)); }
	inline bool get__value_4() const { return ____value_4; }
	inline bool* get_address_of__value_4() { return &____value_4; }
	inline void set__value_4(bool value)
	{
		____value_4 = value;
	}
};


// UnityEngine.Collider
struct Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// EnemyManager
struct EnemyManager_t0C705BD8A8A466A5681EA2FD18CB057B361036E1  : public ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A
{
public:
	// System.Collections.Generic.List`1<UnityEngine.GameObject> EnemyManager::enemyTypes
	List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * ___enemyTypes_4;
	// System.Collections.Generic.List`1<Enemy> EnemyManager::spawnedEnemies
	List_1_tC094F21B05965C2E6F7256CF752F1F5ACEE0518C * ___spawnedEnemies_5;

public:
	inline static int32_t get_offset_of_enemyTypes_4() { return static_cast<int32_t>(offsetof(EnemyManager_t0C705BD8A8A466A5681EA2FD18CB057B361036E1, ___enemyTypes_4)); }
	inline List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * get_enemyTypes_4() const { return ___enemyTypes_4; }
	inline List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 ** get_address_of_enemyTypes_4() { return &___enemyTypes_4; }
	inline void set_enemyTypes_4(List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * value)
	{
		___enemyTypes_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enemyTypes_4), (void*)value);
	}

	inline static int32_t get_offset_of_spawnedEnemies_5() { return static_cast<int32_t>(offsetof(EnemyManager_t0C705BD8A8A466A5681EA2FD18CB057B361036E1, ___spawnedEnemies_5)); }
	inline List_1_tC094F21B05965C2E6F7256CF752F1F5ACEE0518C * get_spawnedEnemies_5() const { return ___spawnedEnemies_5; }
	inline List_1_tC094F21B05965C2E6F7256CF752F1F5ACEE0518C ** get_address_of_spawnedEnemies_5() { return &___spawnedEnemies_5; }
	inline void set_spawnedEnemies_5(List_1_tC094F21B05965C2E6F7256CF752F1F5ACEE0518C * value)
	{
		___spawnedEnemies_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___spawnedEnemies_5), (void*)value);
	}
};


// FloatVariable
struct FloatVariable_t54F75E496629023CDD9A6E3ADC14072AB3C2E275  : public ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A
{
public:
	// System.Single FloatVariable::value
	float ___value_4;

public:
	inline static int32_t get_offset_of_value_4() { return static_cast<int32_t>(offsetof(FloatVariable_t54F75E496629023CDD9A6E3ADC14072AB3C2E275, ___value_4)); }
	inline float get_value_4() const { return ___value_4; }
	inline float* get_address_of_value_4() { return &___value_4; }
	inline void set_value_4(float value)
	{
		___value_4 = value;
	}
};


// CoffeeTools.Events.GameEvent
struct GameEvent_tFC086B6DBF978FD9C391C201595AA84D9981B491  : public ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A
{
public:
	// System.Collections.Generic.List`1<CoffeeTools.Events.GameEventListener> CoffeeTools.Events.GameEvent::eventListeners
	List_1_tD5261AAFAEBC43CA1ABF9DED36961E42BF380A18 * ___eventListeners_4;

public:
	inline static int32_t get_offset_of_eventListeners_4() { return static_cast<int32_t>(offsetof(GameEvent_tFC086B6DBF978FD9C391C201595AA84D9981B491, ___eventListeners_4)); }
	inline List_1_tD5261AAFAEBC43CA1ABF9DED36961E42BF380A18 * get_eventListeners_4() const { return ___eventListeners_4; }
	inline List_1_tD5261AAFAEBC43CA1ABF9DED36961E42BF380A18 ** get_address_of_eventListeners_4() { return &___eventListeners_4; }
	inline void set_eventListeners_4(List_1_tD5261AAFAEBC43CA1ABF9DED36961E42BF380A18 * value)
	{
		___eventListeners_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___eventListeners_4), (void*)value);
	}
};


// UnityEngine.ParticleSystem
struct ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// PlayerBrain
struct PlayerBrain_t8E1560D2B1590AF0ABC355B852E846F3FC4A0A47  : public ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A
{
public:
	// GameManager PlayerBrain::gameManager
	GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * ___gameManager_4;
	// System.Int32 PlayerBrain::playerNumber
	int32_t ___playerNumber_5;
	// UnityEngine.GameObject PlayerBrain::playerGO
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___playerGO_6;
	// FloatVariable PlayerBrain::playerScore
	FloatVariable_t54F75E496629023CDD9A6E3ADC14072AB3C2E275 * ___playerScore_7;
	// FloatVariable PlayerBrain::maxActiveBombs
	FloatVariable_t54F75E496629023CDD9A6E3ADC14072AB3C2E275 * ___maxActiveBombs_8;
	// UnityEngine.KeyCode PlayerBrain::upKey
	int32_t ___upKey_9;
	// UnityEngine.KeyCode PlayerBrain::downKey
	int32_t ___downKey_10;
	// UnityEngine.KeyCode PlayerBrain::leftKey
	int32_t ___leftKey_11;
	// UnityEngine.KeyCode PlayerBrain::rightKey
	int32_t ___rightKey_12;
	// UnityEngine.KeyCode PlayerBrain::bombKey
	int32_t ___bombKey_13;
	// System.Boolean PlayerBrain::ready
	bool ___ready_14;
	// UnityEngine.Color PlayerBrain::lightColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___lightColor_15;
	// FloatVariable PlayerBrain::movementSpeed
	FloatVariable_t54F75E496629023CDD9A6E3ADC14072AB3C2E275 * ___movementSpeed_16;
	// UnityEngine.GameObject PlayerBrain::bombPrefab
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___bombPrefab_17;
	// FloatVariable PlayerBrain::bombPlacementDelay
	FloatVariable_t54F75E496629023CDD9A6E3ADC14072AB3C2E275 * ___bombPlacementDelay_18;
	// System.Single PlayerBrain::nextBombTime
	float ___nextBombTime_19;
	// System.Collections.Generic.List`1<Bomb> PlayerBrain::activeBombs
	List_1_tDB3AB8389E177E6FC35B0AD539765C2EF7334450 * ___activeBombs_20;

public:
	inline static int32_t get_offset_of_gameManager_4() { return static_cast<int32_t>(offsetof(PlayerBrain_t8E1560D2B1590AF0ABC355B852E846F3FC4A0A47, ___gameManager_4)); }
	inline GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * get_gameManager_4() const { return ___gameManager_4; }
	inline GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 ** get_address_of_gameManager_4() { return &___gameManager_4; }
	inline void set_gameManager_4(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * value)
	{
		___gameManager_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___gameManager_4), (void*)value);
	}

	inline static int32_t get_offset_of_playerNumber_5() { return static_cast<int32_t>(offsetof(PlayerBrain_t8E1560D2B1590AF0ABC355B852E846F3FC4A0A47, ___playerNumber_5)); }
	inline int32_t get_playerNumber_5() const { return ___playerNumber_5; }
	inline int32_t* get_address_of_playerNumber_5() { return &___playerNumber_5; }
	inline void set_playerNumber_5(int32_t value)
	{
		___playerNumber_5 = value;
	}

	inline static int32_t get_offset_of_playerGO_6() { return static_cast<int32_t>(offsetof(PlayerBrain_t8E1560D2B1590AF0ABC355B852E846F3FC4A0A47, ___playerGO_6)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_playerGO_6() const { return ___playerGO_6; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_playerGO_6() { return &___playerGO_6; }
	inline void set_playerGO_6(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___playerGO_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___playerGO_6), (void*)value);
	}

	inline static int32_t get_offset_of_playerScore_7() { return static_cast<int32_t>(offsetof(PlayerBrain_t8E1560D2B1590AF0ABC355B852E846F3FC4A0A47, ___playerScore_7)); }
	inline FloatVariable_t54F75E496629023CDD9A6E3ADC14072AB3C2E275 * get_playerScore_7() const { return ___playerScore_7; }
	inline FloatVariable_t54F75E496629023CDD9A6E3ADC14072AB3C2E275 ** get_address_of_playerScore_7() { return &___playerScore_7; }
	inline void set_playerScore_7(FloatVariable_t54F75E496629023CDD9A6E3ADC14072AB3C2E275 * value)
	{
		___playerScore_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___playerScore_7), (void*)value);
	}

	inline static int32_t get_offset_of_maxActiveBombs_8() { return static_cast<int32_t>(offsetof(PlayerBrain_t8E1560D2B1590AF0ABC355B852E846F3FC4A0A47, ___maxActiveBombs_8)); }
	inline FloatVariable_t54F75E496629023CDD9A6E3ADC14072AB3C2E275 * get_maxActiveBombs_8() const { return ___maxActiveBombs_8; }
	inline FloatVariable_t54F75E496629023CDD9A6E3ADC14072AB3C2E275 ** get_address_of_maxActiveBombs_8() { return &___maxActiveBombs_8; }
	inline void set_maxActiveBombs_8(FloatVariable_t54F75E496629023CDD9A6E3ADC14072AB3C2E275 * value)
	{
		___maxActiveBombs_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___maxActiveBombs_8), (void*)value);
	}

	inline static int32_t get_offset_of_upKey_9() { return static_cast<int32_t>(offsetof(PlayerBrain_t8E1560D2B1590AF0ABC355B852E846F3FC4A0A47, ___upKey_9)); }
	inline int32_t get_upKey_9() const { return ___upKey_9; }
	inline int32_t* get_address_of_upKey_9() { return &___upKey_9; }
	inline void set_upKey_9(int32_t value)
	{
		___upKey_9 = value;
	}

	inline static int32_t get_offset_of_downKey_10() { return static_cast<int32_t>(offsetof(PlayerBrain_t8E1560D2B1590AF0ABC355B852E846F3FC4A0A47, ___downKey_10)); }
	inline int32_t get_downKey_10() const { return ___downKey_10; }
	inline int32_t* get_address_of_downKey_10() { return &___downKey_10; }
	inline void set_downKey_10(int32_t value)
	{
		___downKey_10 = value;
	}

	inline static int32_t get_offset_of_leftKey_11() { return static_cast<int32_t>(offsetof(PlayerBrain_t8E1560D2B1590AF0ABC355B852E846F3FC4A0A47, ___leftKey_11)); }
	inline int32_t get_leftKey_11() const { return ___leftKey_11; }
	inline int32_t* get_address_of_leftKey_11() { return &___leftKey_11; }
	inline void set_leftKey_11(int32_t value)
	{
		___leftKey_11 = value;
	}

	inline static int32_t get_offset_of_rightKey_12() { return static_cast<int32_t>(offsetof(PlayerBrain_t8E1560D2B1590AF0ABC355B852E846F3FC4A0A47, ___rightKey_12)); }
	inline int32_t get_rightKey_12() const { return ___rightKey_12; }
	inline int32_t* get_address_of_rightKey_12() { return &___rightKey_12; }
	inline void set_rightKey_12(int32_t value)
	{
		___rightKey_12 = value;
	}

	inline static int32_t get_offset_of_bombKey_13() { return static_cast<int32_t>(offsetof(PlayerBrain_t8E1560D2B1590AF0ABC355B852E846F3FC4A0A47, ___bombKey_13)); }
	inline int32_t get_bombKey_13() const { return ___bombKey_13; }
	inline int32_t* get_address_of_bombKey_13() { return &___bombKey_13; }
	inline void set_bombKey_13(int32_t value)
	{
		___bombKey_13 = value;
	}

	inline static int32_t get_offset_of_ready_14() { return static_cast<int32_t>(offsetof(PlayerBrain_t8E1560D2B1590AF0ABC355B852E846F3FC4A0A47, ___ready_14)); }
	inline bool get_ready_14() const { return ___ready_14; }
	inline bool* get_address_of_ready_14() { return &___ready_14; }
	inline void set_ready_14(bool value)
	{
		___ready_14 = value;
	}

	inline static int32_t get_offset_of_lightColor_15() { return static_cast<int32_t>(offsetof(PlayerBrain_t8E1560D2B1590AF0ABC355B852E846F3FC4A0A47, ___lightColor_15)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_lightColor_15() const { return ___lightColor_15; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_lightColor_15() { return &___lightColor_15; }
	inline void set_lightColor_15(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___lightColor_15 = value;
	}

	inline static int32_t get_offset_of_movementSpeed_16() { return static_cast<int32_t>(offsetof(PlayerBrain_t8E1560D2B1590AF0ABC355B852E846F3FC4A0A47, ___movementSpeed_16)); }
	inline FloatVariable_t54F75E496629023CDD9A6E3ADC14072AB3C2E275 * get_movementSpeed_16() const { return ___movementSpeed_16; }
	inline FloatVariable_t54F75E496629023CDD9A6E3ADC14072AB3C2E275 ** get_address_of_movementSpeed_16() { return &___movementSpeed_16; }
	inline void set_movementSpeed_16(FloatVariable_t54F75E496629023CDD9A6E3ADC14072AB3C2E275 * value)
	{
		___movementSpeed_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___movementSpeed_16), (void*)value);
	}

	inline static int32_t get_offset_of_bombPrefab_17() { return static_cast<int32_t>(offsetof(PlayerBrain_t8E1560D2B1590AF0ABC355B852E846F3FC4A0A47, ___bombPrefab_17)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_bombPrefab_17() const { return ___bombPrefab_17; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_bombPrefab_17() { return &___bombPrefab_17; }
	inline void set_bombPrefab_17(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___bombPrefab_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___bombPrefab_17), (void*)value);
	}

	inline static int32_t get_offset_of_bombPlacementDelay_18() { return static_cast<int32_t>(offsetof(PlayerBrain_t8E1560D2B1590AF0ABC355B852E846F3FC4A0A47, ___bombPlacementDelay_18)); }
	inline FloatVariable_t54F75E496629023CDD9A6E3ADC14072AB3C2E275 * get_bombPlacementDelay_18() const { return ___bombPlacementDelay_18; }
	inline FloatVariable_t54F75E496629023CDD9A6E3ADC14072AB3C2E275 ** get_address_of_bombPlacementDelay_18() { return &___bombPlacementDelay_18; }
	inline void set_bombPlacementDelay_18(FloatVariable_t54F75E496629023CDD9A6E3ADC14072AB3C2E275 * value)
	{
		___bombPlacementDelay_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___bombPlacementDelay_18), (void*)value);
	}

	inline static int32_t get_offset_of_nextBombTime_19() { return static_cast<int32_t>(offsetof(PlayerBrain_t8E1560D2B1590AF0ABC355B852E846F3FC4A0A47, ___nextBombTime_19)); }
	inline float get_nextBombTime_19() const { return ___nextBombTime_19; }
	inline float* get_address_of_nextBombTime_19() { return &___nextBombTime_19; }
	inline void set_nextBombTime_19(float value)
	{
		___nextBombTime_19 = value;
	}

	inline static int32_t get_offset_of_activeBombs_20() { return static_cast<int32_t>(offsetof(PlayerBrain_t8E1560D2B1590AF0ABC355B852E846F3FC4A0A47, ___activeBombs_20)); }
	inline List_1_tDB3AB8389E177E6FC35B0AD539765C2EF7334450 * get_activeBombs_20() const { return ___activeBombs_20; }
	inline List_1_tDB3AB8389E177E6FC35B0AD539765C2EF7334450 ** get_address_of_activeBombs_20() { return &___activeBombs_20; }
	inline void set_activeBombs_20(List_1_tDB3AB8389E177E6FC35B0AD539765C2EF7334450 * value)
	{
		___activeBombs_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___activeBombs_20), (void*)value);
	}
};


// ReadmeScriptableObject
struct ReadmeScriptableObject_tD2811D928B11625AAC13E8C0614E4D2AB51E2058  : public ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A
{
public:

public:
};


// UnityEngine.Rigidbody
struct Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// StateManager
struct StateManager_tDAE60D3E07D8A34DE82EF3FC439FB2968C4ACB47  : public ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A
{
public:
	// GameManager StateManager::gameManager
	GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * ___gameManager_4;
	// GameState StateManager::currentGameState
	int32_t ___currentGameState_5;
	// GameMode StateManager::currentGameMode
	int32_t ___currentGameMode_6;

public:
	inline static int32_t get_offset_of_gameManager_4() { return static_cast<int32_t>(offsetof(StateManager_tDAE60D3E07D8A34DE82EF3FC439FB2968C4ACB47, ___gameManager_4)); }
	inline GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * get_gameManager_4() const { return ___gameManager_4; }
	inline GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 ** get_address_of_gameManager_4() { return &___gameManager_4; }
	inline void set_gameManager_4(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * value)
	{
		___gameManager_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___gameManager_4), (void*)value);
	}

	inline static int32_t get_offset_of_currentGameState_5() { return static_cast<int32_t>(offsetof(StateManager_tDAE60D3E07D8A34DE82EF3FC439FB2968C4ACB47, ___currentGameState_5)); }
	inline int32_t get_currentGameState_5() const { return ___currentGameState_5; }
	inline int32_t* get_address_of_currentGameState_5() { return &___currentGameState_5; }
	inline void set_currentGameState_5(int32_t value)
	{
		___currentGameState_5 = value;
	}

	inline static int32_t get_offset_of_currentGameMode_6() { return static_cast<int32_t>(offsetof(StateManager_tDAE60D3E07D8A34DE82EF3FC439FB2968C4ACB47, ___currentGameMode_6)); }
	inline int32_t get_currentGameMode_6() const { return ___currentGameMode_6; }
	inline int32_t* get_address_of_currentGameMode_6() { return &___currentGameMode_6; }
	inline void set_currentGameMode_6(int32_t value)
	{
		___currentGameMode_6 = value;
	}
};


// CoffeeTools.Variables.StringVariable
struct StringVariable_tF722B8C57C7554A75D23379E070F3FA0F90ADCDD  : public ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A
{
public:
	// System.String CoffeeTools.Variables.StringVariable::value
	String_t* ___value_4;

public:
	inline static int32_t get_offset_of_value_4() { return static_cast<int32_t>(offsetof(StringVariable_tF722B8C57C7554A75D23379E070F3FA0F90ADCDD, ___value_4)); }
	inline String_t* get_value_4() const { return ___value_4; }
	inline String_t** get_address_of_value_4() { return &___value_4; }
	inline void set_value_4(String_t* value)
	{
		___value_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___value_4), (void*)value);
	}
};


// UnityEngine.Transform
struct Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.Animator
struct Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// UnityEngine.AudioBehaviour
struct AudioBehaviour_tB44966D47AD43C50C7294AEE9B57574E55AACA4A  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// UnityEngine.Light
struct Light_tA2F349FE839781469A0344CF6039B51512394275  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
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


// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// UnityEngine.RectTransform
struct RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072  : public Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1
{
public:

public:
};

struct RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_StaticFields
{
public:
	// UnityEngine.RectTransform/ReapplyDrivenProperties UnityEngine.RectTransform::reapplyDrivenProperties
	ReapplyDrivenProperties_t1441259DADA8FE33A95334AC24C017DFA3DEB4CE * ___reapplyDrivenProperties_4;

public:
	inline static int32_t get_offset_of_reapplyDrivenProperties_4() { return static_cast<int32_t>(offsetof(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_StaticFields, ___reapplyDrivenProperties_4)); }
	inline ReapplyDrivenProperties_t1441259DADA8FE33A95334AC24C017DFA3DEB4CE * get_reapplyDrivenProperties_4() const { return ___reapplyDrivenProperties_4; }
	inline ReapplyDrivenProperties_t1441259DADA8FE33A95334AC24C017DFA3DEB4CE ** get_address_of_reapplyDrivenProperties_4() { return &___reapplyDrivenProperties_4; }
	inline void set_reapplyDrivenProperties_4(ReapplyDrivenProperties_t1441259DADA8FE33A95334AC24C017DFA3DEB4CE * value)
	{
		___reapplyDrivenProperties_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___reapplyDrivenProperties_4), (void*)value);
	}
};


// UnityEngine.AudioSource
struct AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B  : public AudioBehaviour_tB44966D47AD43C50C7294AEE9B57574E55AACA4A
{
public:

public:
};


// Block
struct Block_tD1B94B0BEA1476ED81C42F0F6E53EFBF129FF3A6  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// BlockManager Block::blockManager
	BlockManager_t9C5AF5A177FFEEBD9C3968E47D9D4F272EAC5414 * ___blockManager_4;

public:
	inline static int32_t get_offset_of_blockManager_4() { return static_cast<int32_t>(offsetof(Block_tD1B94B0BEA1476ED81C42F0F6E53EFBF129FF3A6, ___blockManager_4)); }
	inline BlockManager_t9C5AF5A177FFEEBD9C3968E47D9D4F272EAC5414 * get_blockManager_4() const { return ___blockManager_4; }
	inline BlockManager_t9C5AF5A177FFEEBD9C3968E47D9D4F272EAC5414 ** get_address_of_blockManager_4() { return &___blockManager_4; }
	inline void set_blockManager_4(BlockManager_t9C5AF5A177FFEEBD9C3968E47D9D4F272EAC5414 * value)
	{
		___blockManager_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___blockManager_4), (void*)value);
	}
};


// Bomb
struct Bomb_t2F20FE59E0B0F4EE5ED5E76D2DD8406D9487CCC5  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.ParticleSystem Bomb::mainPartical
	ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * ___mainPartical_4;
	// PlayerBrain Bomb::ownerBrain
	PlayerBrain_t8E1560D2B1590AF0ABC355B852E846F3FC4A0A47 * ___ownerBrain_5;
	// GameManager Bomb::gameManager
	GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * ___gameManager_6;
	// StateManager Bomb::stateManager
	StateManager_tDAE60D3E07D8A34DE82EF3FC439FB2968C4ACB47 * ___stateManager_7;
	// FloatVariable Bomb::bombTimerLength
	FloatVariable_t54F75E496629023CDD9A6E3ADC14072AB3C2E275 * ___bombTimerLength_8;
	// System.Single Bomb::explosionTick
	float ___explosionTick_9;
	// System.Boolean Bomb::exploded
	bool ___exploded_10;
	// UnityEngine.AudioSource Bomb::audioSource
	AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * ___audioSource_11;
	// UnityEngine.AudioClip Bomb::beepingSound
	AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * ___beepingSound_12;
	// UnityEngine.AudioClip Bomb::explosionSound
	AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * ___explosionSound_13;

public:
	inline static int32_t get_offset_of_mainPartical_4() { return static_cast<int32_t>(offsetof(Bomb_t2F20FE59E0B0F4EE5ED5E76D2DD8406D9487CCC5, ___mainPartical_4)); }
	inline ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * get_mainPartical_4() const { return ___mainPartical_4; }
	inline ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E ** get_address_of_mainPartical_4() { return &___mainPartical_4; }
	inline void set_mainPartical_4(ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * value)
	{
		___mainPartical_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mainPartical_4), (void*)value);
	}

	inline static int32_t get_offset_of_ownerBrain_5() { return static_cast<int32_t>(offsetof(Bomb_t2F20FE59E0B0F4EE5ED5E76D2DD8406D9487CCC5, ___ownerBrain_5)); }
	inline PlayerBrain_t8E1560D2B1590AF0ABC355B852E846F3FC4A0A47 * get_ownerBrain_5() const { return ___ownerBrain_5; }
	inline PlayerBrain_t8E1560D2B1590AF0ABC355B852E846F3FC4A0A47 ** get_address_of_ownerBrain_5() { return &___ownerBrain_5; }
	inline void set_ownerBrain_5(PlayerBrain_t8E1560D2B1590AF0ABC355B852E846F3FC4A0A47 * value)
	{
		___ownerBrain_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ownerBrain_5), (void*)value);
	}

	inline static int32_t get_offset_of_gameManager_6() { return static_cast<int32_t>(offsetof(Bomb_t2F20FE59E0B0F4EE5ED5E76D2DD8406D9487CCC5, ___gameManager_6)); }
	inline GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * get_gameManager_6() const { return ___gameManager_6; }
	inline GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 ** get_address_of_gameManager_6() { return &___gameManager_6; }
	inline void set_gameManager_6(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * value)
	{
		___gameManager_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___gameManager_6), (void*)value);
	}

	inline static int32_t get_offset_of_stateManager_7() { return static_cast<int32_t>(offsetof(Bomb_t2F20FE59E0B0F4EE5ED5E76D2DD8406D9487CCC5, ___stateManager_7)); }
	inline StateManager_tDAE60D3E07D8A34DE82EF3FC439FB2968C4ACB47 * get_stateManager_7() const { return ___stateManager_7; }
	inline StateManager_tDAE60D3E07D8A34DE82EF3FC439FB2968C4ACB47 ** get_address_of_stateManager_7() { return &___stateManager_7; }
	inline void set_stateManager_7(StateManager_tDAE60D3E07D8A34DE82EF3FC439FB2968C4ACB47 * value)
	{
		___stateManager_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___stateManager_7), (void*)value);
	}

	inline static int32_t get_offset_of_bombTimerLength_8() { return static_cast<int32_t>(offsetof(Bomb_t2F20FE59E0B0F4EE5ED5E76D2DD8406D9487CCC5, ___bombTimerLength_8)); }
	inline FloatVariable_t54F75E496629023CDD9A6E3ADC14072AB3C2E275 * get_bombTimerLength_8() const { return ___bombTimerLength_8; }
	inline FloatVariable_t54F75E496629023CDD9A6E3ADC14072AB3C2E275 ** get_address_of_bombTimerLength_8() { return &___bombTimerLength_8; }
	inline void set_bombTimerLength_8(FloatVariable_t54F75E496629023CDD9A6E3ADC14072AB3C2E275 * value)
	{
		___bombTimerLength_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___bombTimerLength_8), (void*)value);
	}

	inline static int32_t get_offset_of_explosionTick_9() { return static_cast<int32_t>(offsetof(Bomb_t2F20FE59E0B0F4EE5ED5E76D2DD8406D9487CCC5, ___explosionTick_9)); }
	inline float get_explosionTick_9() const { return ___explosionTick_9; }
	inline float* get_address_of_explosionTick_9() { return &___explosionTick_9; }
	inline void set_explosionTick_9(float value)
	{
		___explosionTick_9 = value;
	}

	inline static int32_t get_offset_of_exploded_10() { return static_cast<int32_t>(offsetof(Bomb_t2F20FE59E0B0F4EE5ED5E76D2DD8406D9487CCC5, ___exploded_10)); }
	inline bool get_exploded_10() const { return ___exploded_10; }
	inline bool* get_address_of_exploded_10() { return &___exploded_10; }
	inline void set_exploded_10(bool value)
	{
		___exploded_10 = value;
	}

	inline static int32_t get_offset_of_audioSource_11() { return static_cast<int32_t>(offsetof(Bomb_t2F20FE59E0B0F4EE5ED5E76D2DD8406D9487CCC5, ___audioSource_11)); }
	inline AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * get_audioSource_11() const { return ___audioSource_11; }
	inline AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B ** get_address_of_audioSource_11() { return &___audioSource_11; }
	inline void set_audioSource_11(AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * value)
	{
		___audioSource_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___audioSource_11), (void*)value);
	}

	inline static int32_t get_offset_of_beepingSound_12() { return static_cast<int32_t>(offsetof(Bomb_t2F20FE59E0B0F4EE5ED5E76D2DD8406D9487CCC5, ___beepingSound_12)); }
	inline AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * get_beepingSound_12() const { return ___beepingSound_12; }
	inline AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE ** get_address_of_beepingSound_12() { return &___beepingSound_12; }
	inline void set_beepingSound_12(AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * value)
	{
		___beepingSound_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___beepingSound_12), (void*)value);
	}

	inline static int32_t get_offset_of_explosionSound_13() { return static_cast<int32_t>(offsetof(Bomb_t2F20FE59E0B0F4EE5ED5E76D2DD8406D9487CCC5, ___explosionSound_13)); }
	inline AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * get_explosionSound_13() const { return ___explosionSound_13; }
	inline AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE ** get_address_of_explosionSound_13() { return &___explosionSound_13; }
	inline void set_explosionSound_13(AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * value)
	{
		___explosionSound_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___explosionSound_13), (void*)value);
	}
};


// Enemy
struct Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// StateManager Enemy::stateManager
	StateManager_tDAE60D3E07D8A34DE82EF3FC439FB2968C4ACB47 * ___stateManager_4;
	// EnemyManager Enemy::enemyManager
	EnemyManager_t0C705BD8A8A466A5681EA2FD18CB057B361036E1 * ___enemyManager_5;
	// UnityEngine.Animator Enemy::animator
	Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * ___animator_6;
	// UnityEngine.Rigidbody Enemy::rigidbody
	Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * ___rigidbody_7;
	// UnityEngine.Light Enemy::light
	Light_tA2F349FE839781469A0344CF6039B51512394275 * ___light_8;
	// System.Single Enemy::speed
	float ___speed_9;
	// System.Single Enemy::spawnTime
	float ___spawnTime_10;
	// System.Single Enemy::timeToSpawn
	float ___timeToSpawn_11;
	// System.Boolean Enemy::spawnTimerStarted
	bool ___spawnTimerStarted_12;
	// System.Boolean Enemy::ready
	bool ___ready_13;

public:
	inline static int32_t get_offset_of_stateManager_4() { return static_cast<int32_t>(offsetof(Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627, ___stateManager_4)); }
	inline StateManager_tDAE60D3E07D8A34DE82EF3FC439FB2968C4ACB47 * get_stateManager_4() const { return ___stateManager_4; }
	inline StateManager_tDAE60D3E07D8A34DE82EF3FC439FB2968C4ACB47 ** get_address_of_stateManager_4() { return &___stateManager_4; }
	inline void set_stateManager_4(StateManager_tDAE60D3E07D8A34DE82EF3FC439FB2968C4ACB47 * value)
	{
		___stateManager_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___stateManager_4), (void*)value);
	}

	inline static int32_t get_offset_of_enemyManager_5() { return static_cast<int32_t>(offsetof(Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627, ___enemyManager_5)); }
	inline EnemyManager_t0C705BD8A8A466A5681EA2FD18CB057B361036E1 * get_enemyManager_5() const { return ___enemyManager_5; }
	inline EnemyManager_t0C705BD8A8A466A5681EA2FD18CB057B361036E1 ** get_address_of_enemyManager_5() { return &___enemyManager_5; }
	inline void set_enemyManager_5(EnemyManager_t0C705BD8A8A466A5681EA2FD18CB057B361036E1 * value)
	{
		___enemyManager_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enemyManager_5), (void*)value);
	}

	inline static int32_t get_offset_of_animator_6() { return static_cast<int32_t>(offsetof(Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627, ___animator_6)); }
	inline Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * get_animator_6() const { return ___animator_6; }
	inline Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 ** get_address_of_animator_6() { return &___animator_6; }
	inline void set_animator_6(Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * value)
	{
		___animator_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___animator_6), (void*)value);
	}

	inline static int32_t get_offset_of_rigidbody_7() { return static_cast<int32_t>(offsetof(Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627, ___rigidbody_7)); }
	inline Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * get_rigidbody_7() const { return ___rigidbody_7; }
	inline Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A ** get_address_of_rigidbody_7() { return &___rigidbody_7; }
	inline void set_rigidbody_7(Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * value)
	{
		___rigidbody_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___rigidbody_7), (void*)value);
	}

	inline static int32_t get_offset_of_light_8() { return static_cast<int32_t>(offsetof(Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627, ___light_8)); }
	inline Light_tA2F349FE839781469A0344CF6039B51512394275 * get_light_8() const { return ___light_8; }
	inline Light_tA2F349FE839781469A0344CF6039B51512394275 ** get_address_of_light_8() { return &___light_8; }
	inline void set_light_8(Light_tA2F349FE839781469A0344CF6039B51512394275 * value)
	{
		___light_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___light_8), (void*)value);
	}

	inline static int32_t get_offset_of_speed_9() { return static_cast<int32_t>(offsetof(Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627, ___speed_9)); }
	inline float get_speed_9() const { return ___speed_9; }
	inline float* get_address_of_speed_9() { return &___speed_9; }
	inline void set_speed_9(float value)
	{
		___speed_9 = value;
	}

	inline static int32_t get_offset_of_spawnTime_10() { return static_cast<int32_t>(offsetof(Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627, ___spawnTime_10)); }
	inline float get_spawnTime_10() const { return ___spawnTime_10; }
	inline float* get_address_of_spawnTime_10() { return &___spawnTime_10; }
	inline void set_spawnTime_10(float value)
	{
		___spawnTime_10 = value;
	}

	inline static int32_t get_offset_of_timeToSpawn_11() { return static_cast<int32_t>(offsetof(Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627, ___timeToSpawn_11)); }
	inline float get_timeToSpawn_11() const { return ___timeToSpawn_11; }
	inline float* get_address_of_timeToSpawn_11() { return &___timeToSpawn_11; }
	inline void set_timeToSpawn_11(float value)
	{
		___timeToSpawn_11 = value;
	}

	inline static int32_t get_offset_of_spawnTimerStarted_12() { return static_cast<int32_t>(offsetof(Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627, ___spawnTimerStarted_12)); }
	inline bool get_spawnTimerStarted_12() const { return ___spawnTimerStarted_12; }
	inline bool* get_address_of_spawnTimerStarted_12() { return &___spawnTimerStarted_12; }
	inline void set_spawnTimerStarted_12(bool value)
	{
		___spawnTimerStarted_12 = value;
	}

	inline static int32_t get_offset_of_ready_13() { return static_cast<int32_t>(offsetof(Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627, ___ready_13)); }
	inline bool get_ready_13() const { return ___ready_13; }
	inline bool* get_address_of_ready_13() { return &___ready_13; }
	inline void set_ready_13(bool value)
	{
		___ready_13 = value;
	}
};


// FloatToTextSetter
struct FloatToTextSetter_tC5A1D0787A5F3D2B2AB00A294EFFC7F65FA5A21E  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.UI.Text FloatToTextSetter::Text
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___Text_4;
	// FloatVariable FloatToTextSetter::Variable
	FloatVariable_t54F75E496629023CDD9A6E3ADC14072AB3C2E275 * ___Variable_5;
	// System.Boolean FloatToTextSetter::AlwaysUpdate
	bool ___AlwaysUpdate_6;

public:
	inline static int32_t get_offset_of_Text_4() { return static_cast<int32_t>(offsetof(FloatToTextSetter_tC5A1D0787A5F3D2B2AB00A294EFFC7F65FA5A21E, ___Text_4)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_Text_4() const { return ___Text_4; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_Text_4() { return &___Text_4; }
	inline void set_Text_4(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___Text_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Text_4), (void*)value);
	}

	inline static int32_t get_offset_of_Variable_5() { return static_cast<int32_t>(offsetof(FloatToTextSetter_tC5A1D0787A5F3D2B2AB00A294EFFC7F65FA5A21E, ___Variable_5)); }
	inline FloatVariable_t54F75E496629023CDD9A6E3ADC14072AB3C2E275 * get_Variable_5() const { return ___Variable_5; }
	inline FloatVariable_t54F75E496629023CDD9A6E3ADC14072AB3C2E275 ** get_address_of_Variable_5() { return &___Variable_5; }
	inline void set_Variable_5(FloatVariable_t54F75E496629023CDD9A6E3ADC14072AB3C2E275 * value)
	{
		___Variable_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Variable_5), (void*)value);
	}

	inline static int32_t get_offset_of_AlwaysUpdate_6() { return static_cast<int32_t>(offsetof(FloatToTextSetter_tC5A1D0787A5F3D2B2AB00A294EFFC7F65FA5A21E, ___AlwaysUpdate_6)); }
	inline bool get_AlwaysUpdate_6() const { return ___AlwaysUpdate_6; }
	inline bool* get_address_of_AlwaysUpdate_6() { return &___AlwaysUpdate_6; }
	inline void set_AlwaysUpdate_6(bool value)
	{
		___AlwaysUpdate_6 = value;
	}
};


// CoffeeTools.Events.GameEventListener
struct GameEventListener_t9EA3000DEE17ADBCD810A15E9E8A2830A3AE478E  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// CoffeeTools.Events.GameEvent CoffeeTools.Events.GameEventListener::Event
	GameEvent_tFC086B6DBF978FD9C391C201595AA84D9981B491 * ___Event_4;
	// UnityEngine.Events.UnityEvent CoffeeTools.Events.GameEventListener::Response
	UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * ___Response_5;

public:
	inline static int32_t get_offset_of_Event_4() { return static_cast<int32_t>(offsetof(GameEventListener_t9EA3000DEE17ADBCD810A15E9E8A2830A3AE478E, ___Event_4)); }
	inline GameEvent_tFC086B6DBF978FD9C391C201595AA84D9981B491 * get_Event_4() const { return ___Event_4; }
	inline GameEvent_tFC086B6DBF978FD9C391C201595AA84D9981B491 ** get_address_of_Event_4() { return &___Event_4; }
	inline void set_Event_4(GameEvent_tFC086B6DBF978FD9C391C201595AA84D9981B491 * value)
	{
		___Event_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Event_4), (void*)value);
	}

	inline static int32_t get_offset_of_Response_5() { return static_cast<int32_t>(offsetof(GameEventListener_t9EA3000DEE17ADBCD810A15E9E8A2830A3AE478E, ___Response_5)); }
	inline UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * get_Response_5() const { return ___Response_5; }
	inline UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 ** get_address_of_Response_5() { return &___Response_5; }
	inline void set_Response_5(UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * value)
	{
		___Response_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Response_5), (void*)value);
	}
};


// GameManager
struct GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// PlayerBrain GameManager::player1
	PlayerBrain_t8E1560D2B1590AF0ABC355B852E846F3FC4A0A47 * ___player1_4;
	// PlayerBrain GameManager::player2
	PlayerBrain_t8E1560D2B1590AF0ABC355B852E846F3FC4A0A47 * ___player2_5;
	// StateManager GameManager::stateManager
	StateManager_tDAE60D3E07D8A34DE82EF3FC439FB2968C4ACB47 * ___stateManager_6;
	// BlockManager GameManager::blockManager
	BlockManager_t9C5AF5A177FFEEBD9C3968E47D9D4F272EAC5414 * ___blockManager_7;
	// EnemyManager GameManager::enemyManager
	EnemyManager_t0C705BD8A8A466A5681EA2FD18CB057B361036E1 * ___enemyManager_8;
	// UnityEngine.RectTransform GameManager::gameStatusText
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___gameStatusText_9;
	// UnityEngine.UI.Text GameManager::countdownTimerText
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___countdownTimerText_10;
	// System.Int32 GameManager::countdownTimer
	int32_t ___countdownTimer_11;
	// System.Single GameManager::nextCountdownTick
	float ___nextCountdownTick_12;
	// UnityEngine.AudioSource GameManager::audioSource
	AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * ___audioSource_13;
	// UnityEngine.AudioClip GameManager::countdownTick
	AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * ___countdownTick_14;
	// UnityEngine.AudioClip GameManager::countdownEnd
	AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * ___countdownEnd_15;
	// UnityEngine.AudioClip GameManager::music
	AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * ___music_16;
	// System.Single GameManager::roundStartTime
	float ___roundStartTime_17;
	// FloatVariable GameManager::roundTimer
	FloatVariable_t54F75E496629023CDD9A6E3ADC14072AB3C2E275 * ___roundTimer_18;
	// GameMode GameManager::gameMode
	int32_t ___gameMode_19;
	// System.Single GameManager::startingRandomizedBlocks
	float ___startingRandomizedBlocks_20;
	// System.Single GameManager::escalationStartTime
	float ___escalationStartTime_21;
	// System.Single GameManager::escalationFrequency
	float ___escalationFrequency_22;
	// System.Single GameManager::nextEscalationTick
	float ___nextEscalationTick_23;
	// FloatVariable GameManager::escalationTier
	FloatVariable_t54F75E496629023CDD9A6E3ADC14072AB3C2E275 * ___escalationTier_24;
	// UnityEngine.GameObject GameManager::neutralBomb
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___neutralBomb_25;

public:
	inline static int32_t get_offset_of_player1_4() { return static_cast<int32_t>(offsetof(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1, ___player1_4)); }
	inline PlayerBrain_t8E1560D2B1590AF0ABC355B852E846F3FC4A0A47 * get_player1_4() const { return ___player1_4; }
	inline PlayerBrain_t8E1560D2B1590AF0ABC355B852E846F3FC4A0A47 ** get_address_of_player1_4() { return &___player1_4; }
	inline void set_player1_4(PlayerBrain_t8E1560D2B1590AF0ABC355B852E846F3FC4A0A47 * value)
	{
		___player1_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___player1_4), (void*)value);
	}

	inline static int32_t get_offset_of_player2_5() { return static_cast<int32_t>(offsetof(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1, ___player2_5)); }
	inline PlayerBrain_t8E1560D2B1590AF0ABC355B852E846F3FC4A0A47 * get_player2_5() const { return ___player2_5; }
	inline PlayerBrain_t8E1560D2B1590AF0ABC355B852E846F3FC4A0A47 ** get_address_of_player2_5() { return &___player2_5; }
	inline void set_player2_5(PlayerBrain_t8E1560D2B1590AF0ABC355B852E846F3FC4A0A47 * value)
	{
		___player2_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___player2_5), (void*)value);
	}

	inline static int32_t get_offset_of_stateManager_6() { return static_cast<int32_t>(offsetof(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1, ___stateManager_6)); }
	inline StateManager_tDAE60D3E07D8A34DE82EF3FC439FB2968C4ACB47 * get_stateManager_6() const { return ___stateManager_6; }
	inline StateManager_tDAE60D3E07D8A34DE82EF3FC439FB2968C4ACB47 ** get_address_of_stateManager_6() { return &___stateManager_6; }
	inline void set_stateManager_6(StateManager_tDAE60D3E07D8A34DE82EF3FC439FB2968C4ACB47 * value)
	{
		___stateManager_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___stateManager_6), (void*)value);
	}

	inline static int32_t get_offset_of_blockManager_7() { return static_cast<int32_t>(offsetof(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1, ___blockManager_7)); }
	inline BlockManager_t9C5AF5A177FFEEBD9C3968E47D9D4F272EAC5414 * get_blockManager_7() const { return ___blockManager_7; }
	inline BlockManager_t9C5AF5A177FFEEBD9C3968E47D9D4F272EAC5414 ** get_address_of_blockManager_7() { return &___blockManager_7; }
	inline void set_blockManager_7(BlockManager_t9C5AF5A177FFEEBD9C3968E47D9D4F272EAC5414 * value)
	{
		___blockManager_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___blockManager_7), (void*)value);
	}

	inline static int32_t get_offset_of_enemyManager_8() { return static_cast<int32_t>(offsetof(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1, ___enemyManager_8)); }
	inline EnemyManager_t0C705BD8A8A466A5681EA2FD18CB057B361036E1 * get_enemyManager_8() const { return ___enemyManager_8; }
	inline EnemyManager_t0C705BD8A8A466A5681EA2FD18CB057B361036E1 ** get_address_of_enemyManager_8() { return &___enemyManager_8; }
	inline void set_enemyManager_8(EnemyManager_t0C705BD8A8A466A5681EA2FD18CB057B361036E1 * value)
	{
		___enemyManager_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enemyManager_8), (void*)value);
	}

	inline static int32_t get_offset_of_gameStatusText_9() { return static_cast<int32_t>(offsetof(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1, ___gameStatusText_9)); }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * get_gameStatusText_9() const { return ___gameStatusText_9; }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 ** get_address_of_gameStatusText_9() { return &___gameStatusText_9; }
	inline void set_gameStatusText_9(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * value)
	{
		___gameStatusText_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___gameStatusText_9), (void*)value);
	}

	inline static int32_t get_offset_of_countdownTimerText_10() { return static_cast<int32_t>(offsetof(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1, ___countdownTimerText_10)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_countdownTimerText_10() const { return ___countdownTimerText_10; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_countdownTimerText_10() { return &___countdownTimerText_10; }
	inline void set_countdownTimerText_10(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___countdownTimerText_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___countdownTimerText_10), (void*)value);
	}

	inline static int32_t get_offset_of_countdownTimer_11() { return static_cast<int32_t>(offsetof(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1, ___countdownTimer_11)); }
	inline int32_t get_countdownTimer_11() const { return ___countdownTimer_11; }
	inline int32_t* get_address_of_countdownTimer_11() { return &___countdownTimer_11; }
	inline void set_countdownTimer_11(int32_t value)
	{
		___countdownTimer_11 = value;
	}

	inline static int32_t get_offset_of_nextCountdownTick_12() { return static_cast<int32_t>(offsetof(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1, ___nextCountdownTick_12)); }
	inline float get_nextCountdownTick_12() const { return ___nextCountdownTick_12; }
	inline float* get_address_of_nextCountdownTick_12() { return &___nextCountdownTick_12; }
	inline void set_nextCountdownTick_12(float value)
	{
		___nextCountdownTick_12 = value;
	}

	inline static int32_t get_offset_of_audioSource_13() { return static_cast<int32_t>(offsetof(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1, ___audioSource_13)); }
	inline AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * get_audioSource_13() const { return ___audioSource_13; }
	inline AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B ** get_address_of_audioSource_13() { return &___audioSource_13; }
	inline void set_audioSource_13(AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * value)
	{
		___audioSource_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___audioSource_13), (void*)value);
	}

	inline static int32_t get_offset_of_countdownTick_14() { return static_cast<int32_t>(offsetof(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1, ___countdownTick_14)); }
	inline AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * get_countdownTick_14() const { return ___countdownTick_14; }
	inline AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE ** get_address_of_countdownTick_14() { return &___countdownTick_14; }
	inline void set_countdownTick_14(AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * value)
	{
		___countdownTick_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___countdownTick_14), (void*)value);
	}

	inline static int32_t get_offset_of_countdownEnd_15() { return static_cast<int32_t>(offsetof(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1, ___countdownEnd_15)); }
	inline AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * get_countdownEnd_15() const { return ___countdownEnd_15; }
	inline AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE ** get_address_of_countdownEnd_15() { return &___countdownEnd_15; }
	inline void set_countdownEnd_15(AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * value)
	{
		___countdownEnd_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___countdownEnd_15), (void*)value);
	}

	inline static int32_t get_offset_of_music_16() { return static_cast<int32_t>(offsetof(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1, ___music_16)); }
	inline AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * get_music_16() const { return ___music_16; }
	inline AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE ** get_address_of_music_16() { return &___music_16; }
	inline void set_music_16(AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * value)
	{
		___music_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___music_16), (void*)value);
	}

	inline static int32_t get_offset_of_roundStartTime_17() { return static_cast<int32_t>(offsetof(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1, ___roundStartTime_17)); }
	inline float get_roundStartTime_17() const { return ___roundStartTime_17; }
	inline float* get_address_of_roundStartTime_17() { return &___roundStartTime_17; }
	inline void set_roundStartTime_17(float value)
	{
		___roundStartTime_17 = value;
	}

	inline static int32_t get_offset_of_roundTimer_18() { return static_cast<int32_t>(offsetof(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1, ___roundTimer_18)); }
	inline FloatVariable_t54F75E496629023CDD9A6E3ADC14072AB3C2E275 * get_roundTimer_18() const { return ___roundTimer_18; }
	inline FloatVariable_t54F75E496629023CDD9A6E3ADC14072AB3C2E275 ** get_address_of_roundTimer_18() { return &___roundTimer_18; }
	inline void set_roundTimer_18(FloatVariable_t54F75E496629023CDD9A6E3ADC14072AB3C2E275 * value)
	{
		___roundTimer_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___roundTimer_18), (void*)value);
	}

	inline static int32_t get_offset_of_gameMode_19() { return static_cast<int32_t>(offsetof(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1, ___gameMode_19)); }
	inline int32_t get_gameMode_19() const { return ___gameMode_19; }
	inline int32_t* get_address_of_gameMode_19() { return &___gameMode_19; }
	inline void set_gameMode_19(int32_t value)
	{
		___gameMode_19 = value;
	}

	inline static int32_t get_offset_of_startingRandomizedBlocks_20() { return static_cast<int32_t>(offsetof(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1, ___startingRandomizedBlocks_20)); }
	inline float get_startingRandomizedBlocks_20() const { return ___startingRandomizedBlocks_20; }
	inline float* get_address_of_startingRandomizedBlocks_20() { return &___startingRandomizedBlocks_20; }
	inline void set_startingRandomizedBlocks_20(float value)
	{
		___startingRandomizedBlocks_20 = value;
	}

	inline static int32_t get_offset_of_escalationStartTime_21() { return static_cast<int32_t>(offsetof(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1, ___escalationStartTime_21)); }
	inline float get_escalationStartTime_21() const { return ___escalationStartTime_21; }
	inline float* get_address_of_escalationStartTime_21() { return &___escalationStartTime_21; }
	inline void set_escalationStartTime_21(float value)
	{
		___escalationStartTime_21 = value;
	}

	inline static int32_t get_offset_of_escalationFrequency_22() { return static_cast<int32_t>(offsetof(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1, ___escalationFrequency_22)); }
	inline float get_escalationFrequency_22() const { return ___escalationFrequency_22; }
	inline float* get_address_of_escalationFrequency_22() { return &___escalationFrequency_22; }
	inline void set_escalationFrequency_22(float value)
	{
		___escalationFrequency_22 = value;
	}

	inline static int32_t get_offset_of_nextEscalationTick_23() { return static_cast<int32_t>(offsetof(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1, ___nextEscalationTick_23)); }
	inline float get_nextEscalationTick_23() const { return ___nextEscalationTick_23; }
	inline float* get_address_of_nextEscalationTick_23() { return &___nextEscalationTick_23; }
	inline void set_nextEscalationTick_23(float value)
	{
		___nextEscalationTick_23 = value;
	}

	inline static int32_t get_offset_of_escalationTier_24() { return static_cast<int32_t>(offsetof(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1, ___escalationTier_24)); }
	inline FloatVariable_t54F75E496629023CDD9A6E3ADC14072AB3C2E275 * get_escalationTier_24() const { return ___escalationTier_24; }
	inline FloatVariable_t54F75E496629023CDD9A6E3ADC14072AB3C2E275 ** get_address_of_escalationTier_24() { return &___escalationTier_24; }
	inline void set_escalationTier_24(FloatVariable_t54F75E496629023CDD9A6E3ADC14072AB3C2E275 * value)
	{
		___escalationTier_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___escalationTier_24), (void*)value);
	}

	inline static int32_t get_offset_of_neutralBomb_25() { return static_cast<int32_t>(offsetof(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1, ___neutralBomb_25)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_neutralBomb_25() const { return ___neutralBomb_25; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_neutralBomb_25() { return &___neutralBomb_25; }
	inline void set_neutralBomb_25(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___neutralBomb_25 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___neutralBomb_25), (void*)value);
	}
};


// Player
struct Player_t5689617909B48F7640EA0892D85C92C13CC22C6F  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.Rigidbody Player::ridgedBody
	Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * ___ridgedBody_4;
	// PlayerBrain Player::playerBrain
	PlayerBrain_t8E1560D2B1590AF0ABC355B852E846F3FC4A0A47 * ___playerBrain_5;
	// StateManager Player::stateManager
	StateManager_tDAE60D3E07D8A34DE82EF3FC439FB2968C4ACB47 * ___stateManager_6;
	// UnityEngine.Quaternion Player::newRotation
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___newRotation_7;
	// UnityEngine.Vector3 Player::newVelocity
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___newVelocity_8;
	// UnityEngine.Animator Player::animator
	Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * ___animator_9;
	// UnityEngine.Light Player::playerLight
	Light_tA2F349FE839781469A0344CF6039B51512394275 * ___playerLight_10;

public:
	inline static int32_t get_offset_of_ridgedBody_4() { return static_cast<int32_t>(offsetof(Player_t5689617909B48F7640EA0892D85C92C13CC22C6F, ___ridgedBody_4)); }
	inline Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * get_ridgedBody_4() const { return ___ridgedBody_4; }
	inline Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A ** get_address_of_ridgedBody_4() { return &___ridgedBody_4; }
	inline void set_ridgedBody_4(Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * value)
	{
		___ridgedBody_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ridgedBody_4), (void*)value);
	}

	inline static int32_t get_offset_of_playerBrain_5() { return static_cast<int32_t>(offsetof(Player_t5689617909B48F7640EA0892D85C92C13CC22C6F, ___playerBrain_5)); }
	inline PlayerBrain_t8E1560D2B1590AF0ABC355B852E846F3FC4A0A47 * get_playerBrain_5() const { return ___playerBrain_5; }
	inline PlayerBrain_t8E1560D2B1590AF0ABC355B852E846F3FC4A0A47 ** get_address_of_playerBrain_5() { return &___playerBrain_5; }
	inline void set_playerBrain_5(PlayerBrain_t8E1560D2B1590AF0ABC355B852E846F3FC4A0A47 * value)
	{
		___playerBrain_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___playerBrain_5), (void*)value);
	}

	inline static int32_t get_offset_of_stateManager_6() { return static_cast<int32_t>(offsetof(Player_t5689617909B48F7640EA0892D85C92C13CC22C6F, ___stateManager_6)); }
	inline StateManager_tDAE60D3E07D8A34DE82EF3FC439FB2968C4ACB47 * get_stateManager_6() const { return ___stateManager_6; }
	inline StateManager_tDAE60D3E07D8A34DE82EF3FC439FB2968C4ACB47 ** get_address_of_stateManager_6() { return &___stateManager_6; }
	inline void set_stateManager_6(StateManager_tDAE60D3E07D8A34DE82EF3FC439FB2968C4ACB47 * value)
	{
		___stateManager_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___stateManager_6), (void*)value);
	}

	inline static int32_t get_offset_of_newRotation_7() { return static_cast<int32_t>(offsetof(Player_t5689617909B48F7640EA0892D85C92C13CC22C6F, ___newRotation_7)); }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  get_newRotation_7() const { return ___newRotation_7; }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * get_address_of_newRotation_7() { return &___newRotation_7; }
	inline void set_newRotation_7(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  value)
	{
		___newRotation_7 = value;
	}

	inline static int32_t get_offset_of_newVelocity_8() { return static_cast<int32_t>(offsetof(Player_t5689617909B48F7640EA0892D85C92C13CC22C6F, ___newVelocity_8)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_newVelocity_8() const { return ___newVelocity_8; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_newVelocity_8() { return &___newVelocity_8; }
	inline void set_newVelocity_8(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___newVelocity_8 = value;
	}

	inline static int32_t get_offset_of_animator_9() { return static_cast<int32_t>(offsetof(Player_t5689617909B48F7640EA0892D85C92C13CC22C6F, ___animator_9)); }
	inline Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * get_animator_9() const { return ___animator_9; }
	inline Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 ** get_address_of_animator_9() { return &___animator_9; }
	inline void set_animator_9(Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * value)
	{
		___animator_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___animator_9), (void*)value);
	}

	inline static int32_t get_offset_of_playerLight_10() { return static_cast<int32_t>(offsetof(Player_t5689617909B48F7640EA0892D85C92C13CC22C6F, ___playerLight_10)); }
	inline Light_tA2F349FE839781469A0344CF6039B51512394275 * get_playerLight_10() const { return ___playerLight_10; }
	inline Light_tA2F349FE839781469A0344CF6039B51512394275 ** get_address_of_playerLight_10() { return &___playerLight_10; }
	inline void set_playerLight_10(Light_tA2F349FE839781469A0344CF6039B51512394275 * value)
	{
		___playerLight_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___playerLight_10), (void*)value);
	}
};


// CoffeeTools.Variables.TextReplacer
struct TextReplacer_tEB5F8E2E5604F8D25348A4FEE3D3BA4A7AE5164C  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.UI.Text CoffeeTools.Variables.TextReplacer::Text
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___Text_4;
	// CoffeeTools.Variables.StringVariable CoffeeTools.Variables.TextReplacer::Variable
	StringVariable_tF722B8C57C7554A75D23379E070F3FA0F90ADCDD * ___Variable_5;
	// System.Boolean CoffeeTools.Variables.TextReplacer::AlwaysUpdate
	bool ___AlwaysUpdate_6;

public:
	inline static int32_t get_offset_of_Text_4() { return static_cast<int32_t>(offsetof(TextReplacer_tEB5F8E2E5604F8D25348A4FEE3D3BA4A7AE5164C, ___Text_4)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_Text_4() const { return ___Text_4; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_Text_4() { return &___Text_4; }
	inline void set_Text_4(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___Text_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Text_4), (void*)value);
	}

	inline static int32_t get_offset_of_Variable_5() { return static_cast<int32_t>(offsetof(TextReplacer_tEB5F8E2E5604F8D25348A4FEE3D3BA4A7AE5164C, ___Variable_5)); }
	inline StringVariable_tF722B8C57C7554A75D23379E070F3FA0F90ADCDD * get_Variable_5() const { return ___Variable_5; }
	inline StringVariable_tF722B8C57C7554A75D23379E070F3FA0F90ADCDD ** get_address_of_Variable_5() { return &___Variable_5; }
	inline void set_Variable_5(StringVariable_tF722B8C57C7554A75D23379E070F3FA0F90ADCDD * value)
	{
		___Variable_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Variable_5), (void*)value);
	}

	inline static int32_t get_offset_of_AlwaysUpdate_6() { return static_cast<int32_t>(offsetof(TextReplacer_tEB5F8E2E5604F8D25348A4FEE3D3BA4A7AE5164C, ___AlwaysUpdate_6)); }
	inline bool get_AlwaysUpdate_6() const { return ___AlwaysUpdate_6; }
	inline bool* get_address_of_AlwaysUpdate_6() { return &___AlwaysUpdate_6; }
	inline void set_AlwaysUpdate_6(bool value)
	{
		___AlwaysUpdate_6 = value;
	}
};


// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// CoffeeTools.Variables.UnityEventRaiser
struct UnityEventRaiser_t8A2370C1EF0BEB4644C43A193EF511F369C797BF  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.Events.UnityEvent CoffeeTools.Variables.UnityEventRaiser::OnEnableEvent
	UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * ___OnEnableEvent_4;

public:
	inline static int32_t get_offset_of_OnEnableEvent_4() { return static_cast<int32_t>(offsetof(UnityEventRaiser_t8A2370C1EF0BEB4644C43A193EF511F369C797BF, ___OnEnableEvent_4)); }
	inline UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * get_OnEnableEvent_4() const { return ___OnEnableEvent_4; }
	inline UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 ** get_address_of_OnEnableEvent_4() { return &___OnEnableEvent_4; }
	inline void set_OnEnableEvent_4(UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * value)
	{
		___OnEnableEvent_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnEnableEvent_4), (void*)value);
	}
};


// UnityEngine.UI.Graphic
struct Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24  : public UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E
{
public:
	// UnityEngine.Material UnityEngine.UI.Graphic::m_Material
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___m_Material_6;
	// UnityEngine.Color UnityEngine.UI.Graphic::m_Color
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_Color_7;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipLayoutUpdate
	bool ___m_SkipLayoutUpdate_8;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipMaterialUpdate
	bool ___m_SkipMaterialUpdate_9;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTarget
	bool ___m_RaycastTarget_10;
	// UnityEngine.Vector4 UnityEngine.UI.Graphic::m_RaycastPadding
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___m_RaycastPadding_11;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___m_RectTransform_12;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRenderer
	CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * ___m_CanvasRenderer_13;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * ___m_Canvas_14;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_15;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_16;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___m_OnDirtyLayoutCallback_17;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___m_OnDirtyVertsCallback_18;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___m_OnDirtyMaterialCallback_19;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::m_CachedMesh
	Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * ___m_CachedMesh_22;
	// UnityEngine.Vector2[] UnityEngine.UI.Graphic::m_CachedUvs
	Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* ___m_CachedUvs_23;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 * ___m_ColorTweenRunner_24;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25;

public:
	inline static int32_t get_offset_of_m_Material_6() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_Material_6)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_m_Material_6() const { return ___m_Material_6; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_m_Material_6() { return &___m_Material_6; }
	inline void set_m_Material_6(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___m_Material_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Material_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_Color_7() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_Color_7)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_Color_7() const { return ___m_Color_7; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_Color_7() { return &___m_Color_7; }
	inline void set_m_Color_7(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_Color_7 = value;
	}

	inline static int32_t get_offset_of_m_SkipLayoutUpdate_8() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_SkipLayoutUpdate_8)); }
	inline bool get_m_SkipLayoutUpdate_8() const { return ___m_SkipLayoutUpdate_8; }
	inline bool* get_address_of_m_SkipLayoutUpdate_8() { return &___m_SkipLayoutUpdate_8; }
	inline void set_m_SkipLayoutUpdate_8(bool value)
	{
		___m_SkipLayoutUpdate_8 = value;
	}

	inline static int32_t get_offset_of_m_SkipMaterialUpdate_9() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_SkipMaterialUpdate_9)); }
	inline bool get_m_SkipMaterialUpdate_9() const { return ___m_SkipMaterialUpdate_9; }
	inline bool* get_address_of_m_SkipMaterialUpdate_9() { return &___m_SkipMaterialUpdate_9; }
	inline void set_m_SkipMaterialUpdate_9(bool value)
	{
		___m_SkipMaterialUpdate_9 = value;
	}

	inline static int32_t get_offset_of_m_RaycastTarget_10() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_RaycastTarget_10)); }
	inline bool get_m_RaycastTarget_10() const { return ___m_RaycastTarget_10; }
	inline bool* get_address_of_m_RaycastTarget_10() { return &___m_RaycastTarget_10; }
	inline void set_m_RaycastTarget_10(bool value)
	{
		___m_RaycastTarget_10 = value;
	}

	inline static int32_t get_offset_of_m_RaycastPadding_11() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_RaycastPadding_11)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_m_RaycastPadding_11() const { return ___m_RaycastPadding_11; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_m_RaycastPadding_11() { return &___m_RaycastPadding_11; }
	inline void set_m_RaycastPadding_11(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___m_RaycastPadding_11 = value;
	}

	inline static int32_t get_offset_of_m_RectTransform_12() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_RectTransform_12)); }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * get_m_RectTransform_12() const { return ___m_RectTransform_12; }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 ** get_address_of_m_RectTransform_12() { return &___m_RectTransform_12; }
	inline void set_m_RectTransform_12(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * value)
	{
		___m_RectTransform_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_RectTransform_12), (void*)value);
	}

	inline static int32_t get_offset_of_m_CanvasRenderer_13() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_CanvasRenderer_13)); }
	inline CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * get_m_CanvasRenderer_13() const { return ___m_CanvasRenderer_13; }
	inline CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E ** get_address_of_m_CanvasRenderer_13() { return &___m_CanvasRenderer_13; }
	inline void set_m_CanvasRenderer_13(CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * value)
	{
		___m_CanvasRenderer_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CanvasRenderer_13), (void*)value);
	}

	inline static int32_t get_offset_of_m_Canvas_14() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_Canvas_14)); }
	inline Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * get_m_Canvas_14() const { return ___m_Canvas_14; }
	inline Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA ** get_address_of_m_Canvas_14() { return &___m_Canvas_14; }
	inline void set_m_Canvas_14(Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * value)
	{
		___m_Canvas_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Canvas_14), (void*)value);
	}

	inline static int32_t get_offset_of_m_VertsDirty_15() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_VertsDirty_15)); }
	inline bool get_m_VertsDirty_15() const { return ___m_VertsDirty_15; }
	inline bool* get_address_of_m_VertsDirty_15() { return &___m_VertsDirty_15; }
	inline void set_m_VertsDirty_15(bool value)
	{
		___m_VertsDirty_15 = value;
	}

	inline static int32_t get_offset_of_m_MaterialDirty_16() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_MaterialDirty_16)); }
	inline bool get_m_MaterialDirty_16() const { return ___m_MaterialDirty_16; }
	inline bool* get_address_of_m_MaterialDirty_16() { return &___m_MaterialDirty_16; }
	inline void set_m_MaterialDirty_16(bool value)
	{
		___m_MaterialDirty_16 = value;
	}

	inline static int32_t get_offset_of_m_OnDirtyLayoutCallback_17() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_OnDirtyLayoutCallback_17)); }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * get_m_OnDirtyLayoutCallback_17() const { return ___m_OnDirtyLayoutCallback_17; }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 ** get_address_of_m_OnDirtyLayoutCallback_17() { return &___m_OnDirtyLayoutCallback_17; }
	inline void set_m_OnDirtyLayoutCallback_17(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * value)
	{
		___m_OnDirtyLayoutCallback_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyLayoutCallback_17), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnDirtyVertsCallback_18() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_OnDirtyVertsCallback_18)); }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * get_m_OnDirtyVertsCallback_18() const { return ___m_OnDirtyVertsCallback_18; }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 ** get_address_of_m_OnDirtyVertsCallback_18() { return &___m_OnDirtyVertsCallback_18; }
	inline void set_m_OnDirtyVertsCallback_18(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * value)
	{
		___m_OnDirtyVertsCallback_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyVertsCallback_18), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnDirtyMaterialCallback_19() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_OnDirtyMaterialCallback_19)); }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * get_m_OnDirtyMaterialCallback_19() const { return ___m_OnDirtyMaterialCallback_19; }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 ** get_address_of_m_OnDirtyMaterialCallback_19() { return &___m_OnDirtyMaterialCallback_19; }
	inline void set_m_OnDirtyMaterialCallback_19(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * value)
	{
		___m_OnDirtyMaterialCallback_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyMaterialCallback_19), (void*)value);
	}

	inline static int32_t get_offset_of_m_CachedMesh_22() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_CachedMesh_22)); }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * get_m_CachedMesh_22() const { return ___m_CachedMesh_22; }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 ** get_address_of_m_CachedMesh_22() { return &___m_CachedMesh_22; }
	inline void set_m_CachedMesh_22(Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * value)
	{
		___m_CachedMesh_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CachedMesh_22), (void*)value);
	}

	inline static int32_t get_offset_of_m_CachedUvs_23() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_CachedUvs_23)); }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* get_m_CachedUvs_23() const { return ___m_CachedUvs_23; }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA** get_address_of_m_CachedUvs_23() { return &___m_CachedUvs_23; }
	inline void set_m_CachedUvs_23(Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* value)
	{
		___m_CachedUvs_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CachedUvs_23), (void*)value);
	}

	inline static int32_t get_offset_of_m_ColorTweenRunner_24() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_ColorTweenRunner_24)); }
	inline TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 * get_m_ColorTweenRunner_24() const { return ___m_ColorTweenRunner_24; }
	inline TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 ** get_address_of_m_ColorTweenRunner_24() { return &___m_ColorTweenRunner_24; }
	inline void set_m_ColorTweenRunner_24(TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 * value)
	{
		___m_ColorTweenRunner_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ColorTweenRunner_24), (void*)value);
	}

	inline static int32_t get_offset_of_U3CuseLegacyMeshGenerationU3Ek__BackingField_25() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25)); }
	inline bool get_U3CuseLegacyMeshGenerationU3Ek__BackingField_25() const { return ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25; }
	inline bool* get_address_of_U3CuseLegacyMeshGenerationU3Ek__BackingField_25() { return &___U3CuseLegacyMeshGenerationU3Ek__BackingField_25; }
	inline void set_U3CuseLegacyMeshGenerationU3Ek__BackingField_25(bool value)
	{
		___U3CuseLegacyMeshGenerationU3Ek__BackingField_25 = value;
	}
};

struct Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Graphic::s_DefaultUI
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___s_DefaultUI_4;
	// UnityEngine.Texture2D UnityEngine.UI.Graphic::s_WhiteTexture
	Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ___s_WhiteTexture_5;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::s_Mesh
	Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * ___s_Mesh_20;
	// UnityEngine.UI.VertexHelper UnityEngine.UI.Graphic::s_VertexHelper
	VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * ___s_VertexHelper_21;

public:
	inline static int32_t get_offset_of_s_DefaultUI_4() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_DefaultUI_4)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_s_DefaultUI_4() const { return ___s_DefaultUI_4; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_s_DefaultUI_4() { return &___s_DefaultUI_4; }
	inline void set_s_DefaultUI_4(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___s_DefaultUI_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DefaultUI_4), (void*)value);
	}

	inline static int32_t get_offset_of_s_WhiteTexture_5() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_WhiteTexture_5)); }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * get_s_WhiteTexture_5() const { return ___s_WhiteTexture_5; }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF ** get_address_of_s_WhiteTexture_5() { return &___s_WhiteTexture_5; }
	inline void set_s_WhiteTexture_5(Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * value)
	{
		___s_WhiteTexture_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_WhiteTexture_5), (void*)value);
	}

	inline static int32_t get_offset_of_s_Mesh_20() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_Mesh_20)); }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * get_s_Mesh_20() const { return ___s_Mesh_20; }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 ** get_address_of_s_Mesh_20() { return &___s_Mesh_20; }
	inline void set_s_Mesh_20(Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * value)
	{
		___s_Mesh_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Mesh_20), (void*)value);
	}

	inline static int32_t get_offset_of_s_VertexHelper_21() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_VertexHelper_21)); }
	inline VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * get_s_VertexHelper_21() const { return ___s_VertexHelper_21; }
	inline VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 ** get_address_of_s_VertexHelper_21() { return &___s_VertexHelper_21; }
	inline void set_s_VertexHelper_21(VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * value)
	{
		___s_VertexHelper_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_VertexHelper_21), (void*)value);
	}
};


// UnityEngine.UI.MaskableGraphic
struct MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE  : public Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24
{
public:
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculateStencil
	bool ___m_ShouldRecalculateStencil_26;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___m_MaskMaterial_27;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 * ___m_ParentMask_28;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_29;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IsMaskingGraphic
	bool ___m_IsMaskingGraphic_30;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_31;
	// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 * ___m_OnCullStateChanged_32;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_33;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_34;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___m_Corners_35;

public:
	inline static int32_t get_offset_of_m_ShouldRecalculateStencil_26() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_ShouldRecalculateStencil_26)); }
	inline bool get_m_ShouldRecalculateStencil_26() const { return ___m_ShouldRecalculateStencil_26; }
	inline bool* get_address_of_m_ShouldRecalculateStencil_26() { return &___m_ShouldRecalculateStencil_26; }
	inline void set_m_ShouldRecalculateStencil_26(bool value)
	{
		___m_ShouldRecalculateStencil_26 = value;
	}

	inline static int32_t get_offset_of_m_MaskMaterial_27() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_MaskMaterial_27)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_m_MaskMaterial_27() const { return ___m_MaskMaterial_27; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_m_MaskMaterial_27() { return &___m_MaskMaterial_27; }
	inline void set_m_MaskMaterial_27(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___m_MaskMaterial_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_MaskMaterial_27), (void*)value);
	}

	inline static int32_t get_offset_of_m_ParentMask_28() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_ParentMask_28)); }
	inline RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 * get_m_ParentMask_28() const { return ___m_ParentMask_28; }
	inline RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 ** get_address_of_m_ParentMask_28() { return &___m_ParentMask_28; }
	inline void set_m_ParentMask_28(RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 * value)
	{
		___m_ParentMask_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ParentMask_28), (void*)value);
	}

	inline static int32_t get_offset_of_m_Maskable_29() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_Maskable_29)); }
	inline bool get_m_Maskable_29() const { return ___m_Maskable_29; }
	inline bool* get_address_of_m_Maskable_29() { return &___m_Maskable_29; }
	inline void set_m_Maskable_29(bool value)
	{
		___m_Maskable_29 = value;
	}

	inline static int32_t get_offset_of_m_IsMaskingGraphic_30() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_IsMaskingGraphic_30)); }
	inline bool get_m_IsMaskingGraphic_30() const { return ___m_IsMaskingGraphic_30; }
	inline bool* get_address_of_m_IsMaskingGraphic_30() { return &___m_IsMaskingGraphic_30; }
	inline void set_m_IsMaskingGraphic_30(bool value)
	{
		___m_IsMaskingGraphic_30 = value;
	}

	inline static int32_t get_offset_of_m_IncludeForMasking_31() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_IncludeForMasking_31)); }
	inline bool get_m_IncludeForMasking_31() const { return ___m_IncludeForMasking_31; }
	inline bool* get_address_of_m_IncludeForMasking_31() { return &___m_IncludeForMasking_31; }
	inline void set_m_IncludeForMasking_31(bool value)
	{
		___m_IncludeForMasking_31 = value;
	}

	inline static int32_t get_offset_of_m_OnCullStateChanged_32() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_OnCullStateChanged_32)); }
	inline CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 * get_m_OnCullStateChanged_32() const { return ___m_OnCullStateChanged_32; }
	inline CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 ** get_address_of_m_OnCullStateChanged_32() { return &___m_OnCullStateChanged_32; }
	inline void set_m_OnCullStateChanged_32(CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 * value)
	{
		___m_OnCullStateChanged_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnCullStateChanged_32), (void*)value);
	}

	inline static int32_t get_offset_of_m_ShouldRecalculate_33() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_ShouldRecalculate_33)); }
	inline bool get_m_ShouldRecalculate_33() const { return ___m_ShouldRecalculate_33; }
	inline bool* get_address_of_m_ShouldRecalculate_33() { return &___m_ShouldRecalculate_33; }
	inline void set_m_ShouldRecalculate_33(bool value)
	{
		___m_ShouldRecalculate_33 = value;
	}

	inline static int32_t get_offset_of_m_StencilValue_34() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_StencilValue_34)); }
	inline int32_t get_m_StencilValue_34() const { return ___m_StencilValue_34; }
	inline int32_t* get_address_of_m_StencilValue_34() { return &___m_StencilValue_34; }
	inline void set_m_StencilValue_34(int32_t value)
	{
		___m_StencilValue_34 = value;
	}

	inline static int32_t get_offset_of_m_Corners_35() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_Corners_35)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get_m_Corners_35() const { return ___m_Corners_35; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of_m_Corners_35() { return &___m_Corners_35; }
	inline void set_m_Corners_35(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		___m_Corners_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Corners_35), (void*)value);
	}
};


// UnityEngine.UI.Text
struct Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1  : public MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE
{
public:
	// UnityEngine.UI.FontData UnityEngine.UI.Text::m_FontData
	FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 * ___m_FontData_36;
	// System.String UnityEngine.UI.Text::m_Text
	String_t* ___m_Text_37;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCache
	TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * ___m_TextCache_38;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCacheForLayout
	TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * ___m_TextCacheForLayout_39;
	// System.Boolean UnityEngine.UI.Text::m_DisableFontTextureRebuiltCallback
	bool ___m_DisableFontTextureRebuiltCallback_41;
	// UnityEngine.UIVertex[] UnityEngine.UI.Text::m_TempVerts
	UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A* ___m_TempVerts_42;

public:
	inline static int32_t get_offset_of_m_FontData_36() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_FontData_36)); }
	inline FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 * get_m_FontData_36() const { return ___m_FontData_36; }
	inline FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 ** get_address_of_m_FontData_36() { return &___m_FontData_36; }
	inline void set_m_FontData_36(FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 * value)
	{
		___m_FontData_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_FontData_36), (void*)value);
	}

	inline static int32_t get_offset_of_m_Text_37() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_Text_37)); }
	inline String_t* get_m_Text_37() const { return ___m_Text_37; }
	inline String_t** get_address_of_m_Text_37() { return &___m_Text_37; }
	inline void set_m_Text_37(String_t* value)
	{
		___m_Text_37 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Text_37), (void*)value);
	}

	inline static int32_t get_offset_of_m_TextCache_38() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_TextCache_38)); }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * get_m_TextCache_38() const { return ___m_TextCache_38; }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 ** get_address_of_m_TextCache_38() { return &___m_TextCache_38; }
	inline void set_m_TextCache_38(TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * value)
	{
		___m_TextCache_38 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TextCache_38), (void*)value);
	}

	inline static int32_t get_offset_of_m_TextCacheForLayout_39() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_TextCacheForLayout_39)); }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * get_m_TextCacheForLayout_39() const { return ___m_TextCacheForLayout_39; }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 ** get_address_of_m_TextCacheForLayout_39() { return &___m_TextCacheForLayout_39; }
	inline void set_m_TextCacheForLayout_39(TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * value)
	{
		___m_TextCacheForLayout_39 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TextCacheForLayout_39), (void*)value);
	}

	inline static int32_t get_offset_of_m_DisableFontTextureRebuiltCallback_41() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_DisableFontTextureRebuiltCallback_41)); }
	inline bool get_m_DisableFontTextureRebuiltCallback_41() const { return ___m_DisableFontTextureRebuiltCallback_41; }
	inline bool* get_address_of_m_DisableFontTextureRebuiltCallback_41() { return &___m_DisableFontTextureRebuiltCallback_41; }
	inline void set_m_DisableFontTextureRebuiltCallback_41(bool value)
	{
		___m_DisableFontTextureRebuiltCallback_41 = value;
	}

	inline static int32_t get_offset_of_m_TempVerts_42() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_TempVerts_42)); }
	inline UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A* get_m_TempVerts_42() const { return ___m_TempVerts_42; }
	inline UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A** get_address_of_m_TempVerts_42() { return &___m_TempVerts_42; }
	inline void set_m_TempVerts_42(UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A* value)
	{
		___m_TempVerts_42 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TempVerts_42), (void*)value);
	}
};

struct Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Text::s_DefaultText
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___s_DefaultText_40;

public:
	inline static int32_t get_offset_of_s_DefaultText_40() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_StaticFields, ___s_DefaultText_40)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_s_DefaultText_40() const { return ___s_DefaultText_40; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_s_DefaultText_40() { return &___s_DefaultText_40; }
	inline void set_s_DefaultText_40(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___s_DefaultText_40 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DefaultText_40), (void*)value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
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


// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.Vector3,System.Object>::ContainsKey(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_mBDDE2D0B0673647CD988687C11F2546FFF74C693_gshared (Dictionary_2_t7D0F7C573BC40A0B5C2CAA7DC2B196CD332BAEBE * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___key0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Add(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, RuntimeObject * ___item0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Vector3,System.Object>::Add(!0,!1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_m997A676F7F2365CE5742E154CDADDB2BAA49E4C5_gshared (Dictionary_2_t7D0F7C573BC40A0B5C2CAA7DC2B196CD332BAEBE * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___key0, RuntimeObject * ___value1, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1<System.Object>::Remove(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Remove_m753F7B4281CC4D02C07AE90726F51EF34B588DF7_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, RuntimeObject * ___item0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.Vector3,System.Object>::Remove(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_m51077F3BAF2CD25CF54979D5877F86DF75D8E344_gshared (Dictionary_2_t7D0F7C573BC40A0B5C2CAA7DC2B196CD332BAEBE * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___key0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Vector3,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m4D8438B7584EB5EAC0518317388E1ED13AC9F959_gshared (Dictionary_2_t7D0F7C573BC40A0B5C2CAA7DC2B196CD332BAEBE * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, int32_t ___index0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1<System.Object>::Contains(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Contains_m99C700668AC6D272188471D2D6B784A2B5636C8E_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, RuntimeObject * ___item0, const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<System.Object>(!!0,UnityEngine.Vector3,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Object_Instantiate_TisRuntimeObject_mB05DEC51C29EF5BB8BD17D055E80217F11E571AA_gshared (RuntimeObject * ___original0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position1, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___rotation2, const RuntimeMethod* method);

// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// System.Void BlockManager::SetActiveBlock(Block,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BlockManager_SetActiveBlock_m5F71F087A7A4AAF6AF335F6C54E66D555FF47754 (BlockManager_t9C5AF5A177FFEEBD9C3968E47D9D4F272EAC5414 * __this, Block_tD1B94B0BEA1476ED81C42F0F6E53EFBF129FF3A6 * ___block0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position1, const RuntimeMethod* method);
// System.Void BlockManager::RemoveBlock(Block,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BlockManager_RemoveBlock_mDDA7066EC997DA4ADE2071C51A885F27C92AC767 (BlockManager_t9C5AF5A177FFEEBD9C3968E47D9D4F272EAC5414 * __this, Block_tD1B94B0BEA1476ED81C42F0F6E53EFBF129FF3A6 * ___block0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position1, const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.Vector3,Block>::ContainsKey(!0)
inline bool Dictionary_2_ContainsKey_mE3E143158029D6ADAC5A00E68CE1DEAE2BED1ED0 (Dictionary_2_t59B878E4ADB9CCE44F927CD5EC3591A0975741BD * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t59B878E4ADB9CCE44F927CD5EC3591A0975741BD *, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E , const RuntimeMethod*))Dictionary_2_ContainsKey_mBDDE2D0B0673647CD988687C11F2546FFF74C693_gshared)(__this, ___key0, method);
}
// System.Void System.Collections.Generic.List`1<Block>::Add(!0)
inline void List_1_Add_mAE5430B0B373666980F3A3357A1DC7298D6D53C7 (List_1_tAD0608C1B7CF36F477E8A550815A288D56656DFF * __this, Block_tD1B94B0BEA1476ED81C42F0F6E53EFBF129FF3A6 * ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tAD0608C1B7CF36F477E8A550815A288D56656DFF *, Block_tD1B94B0BEA1476ED81C42F0F6E53EFBF129FF3A6 *, const RuntimeMethod*))List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared)(__this, ___item0, method);
}
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Vector3,Block>::Add(!0,!1)
inline void Dictionary_2_Add_mDF1BC098939CA3E6A7E2DB5214AA20BE3C9F9EE4 (Dictionary_2_t59B878E4ADB9CCE44F927CD5EC3591A0975741BD * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___key0, Block_tD1B94B0BEA1476ED81C42F0F6E53EFBF129FF3A6 * ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t59B878E4ADB9CCE44F927CD5EC3591A0975741BD *, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E , Block_tD1B94B0BEA1476ED81C42F0F6E53EFBF129FF3A6 *, const RuntimeMethod*))Dictionary_2_Add_m997A676F7F2365CE5742E154CDADDB2BAA49E4C5_gshared)(__this, ___key0, ___value1, method);
}
// System.Boolean System.Collections.Generic.List`1<Block>::Remove(!0)
inline bool List_1_Remove_mD7F5C17066228C9B8BD4714896533104B05A67A9 (List_1_tAD0608C1B7CF36F477E8A550815A288D56656DFF * __this, Block_tD1B94B0BEA1476ED81C42F0F6E53EFBF129FF3A6 * ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_tAD0608C1B7CF36F477E8A550815A288D56656DFF *, Block_tD1B94B0BEA1476ED81C42F0F6E53EFBF129FF3A6 *, const RuntimeMethod*))List_1_Remove_m753F7B4281CC4D02C07AE90726F51EF34B588DF7_gshared)(__this, ___item0, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.Vector3,Block>::Remove(!0)
inline bool Dictionary_2_Remove_m712AFC412D263F92EFE2BDBA48C2954FE17B720F (Dictionary_2_t59B878E4ADB9CCE44F927CD5EC3591A0975741BD * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t59B878E4ADB9CCE44F927CD5EC3591A0975741BD *, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E , const RuntimeMethod*))Dictionary_2_Remove_m51077F3BAF2CD25CF54979D5877F86DF75D8E344_gshared)(__this, ___key0, method);
}
// System.Void System.Collections.Generic.List`1<Block>::.ctor()
inline void List_1__ctor_m43564A2A81100BA2236FA4C9DEF90E313664CD0E (List_1_tAD0608C1B7CF36F477E8A550815A288D56656DFF * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tAD0608C1B7CF36F477E8A550815A288D56656DFF *, const RuntimeMethod*))List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Vector3,Block>::.ctor()
inline void Dictionary_2__ctor_mA7073B6B388A401394DC6B4E2ED10C462F5CF4C4 (Dictionary_2_t59B878E4ADB9CCE44F927CD5EC3591A0975741BD * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t59B878E4ADB9CCE44F927CD5EC3591A0975741BD *, const RuntimeMethod*))Dictionary_2__ctor_m4D8438B7584EB5EAC0518317388E1ED13AC9F959_gshared)(__this, method);
}
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_mF7FCDE24496D619F4BB1A0BA44AF17DCB5D697FF_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, float ___x0, float ___y1, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___v0, const RuntimeMethod* method);
// System.Void UnityEngine.ScriptableObject::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScriptableObject__ctor_m8DAE6CDCFA34E16F2543B02CC3669669FF203063 (ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Time::get_time()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_time_m1A186074B1FCD448AB13A4B9D715AB9ED0B40844 (const RuntimeMethod* method);
// UnityEngine.ParticleSystem/MainModule UnityEngine.ParticleSystem::get_main()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MainModule_t671F49558CB1A3CFAAD637A7927C076EC2E61F0B  ParticleSystem_get_main_m8F17DCC63679B15CE548BE83332FDB6635AE74A0 (ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * __this, const RuntimeMethod* method);
// UnityEngine.ParticleSystem/SubEmittersModule UnityEngine.ParticleSystem::get_subEmitters()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SubEmittersModule_t0336A6F2B5D3339D93468AED015E2356FBE9E61C  ParticleSystem_get_subEmitters_mCFE3CAEF76ADEAF3754210EC731A54A9DA836428 (ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * __this, const RuntimeMethod* method);
// UnityEngine.ParticleSystem/MinMaxCurve UnityEngine.ParticleSystem/MinMaxCurve::op_Implicit(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD  MinMaxCurve_op_Implicit_m8D746D40E6CCBF5E8C4CE39F23A45712BFC372F5 (float ___constant0, const RuntimeMethod* method);
// System.Void UnityEngine.ParticleSystem/MainModule::set_startLifetime(UnityEngine.ParticleSystem/MinMaxCurve)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainModule_set_startLifetime_mDBE408AFE7F159812D2B95F8504208F730BC8690 (MainModule_t671F49558CB1A3CFAAD637A7927C076EC2E61F0B * __this, MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD  ___value0, const RuntimeMethod* method);
// UnityEngine.ParticleSystem UnityEngine.ParticleSystem/SubEmittersModule::GetSubEmitterSystem(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * SubEmittersModule_GetSubEmitterSystem_mCA305D63E8C211511FFD3DDF518785E3156C1C43 (SubEmittersModule_t0336A6F2B5D3339D93468AED015E2356FBE9E61C * __this, int32_t ___index0, const RuntimeMethod* method);
// System.Void UnityEngine.ParticleSystem/MainModule::set_startDelay(UnityEngine.ParticleSystem/MinMaxCurve)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainModule_set_startDelay_m95CEAEE97E462DEAF4787B9C6AD6389D9912F93A (MainModule_t671F49558CB1A3CFAAD637A7927C076EC2E61F0B * __this, MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD  ___value0, const RuntimeMethod* method);
// System.Int32 UnityEngine.ParticleSystem/SubEmittersModule::get_subEmittersCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SubEmittersModule_get_subEmittersCount_m8057267DA0DFFF2470BBF681C960C78F45949196 (SubEmittersModule_t0336A6F2B5D3339D93468AED015E2356FBE9E61C * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Implicit(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___exists0, const RuntimeMethod* method);
// System.Void PlayerBrain::AddActiveBomb(Bomb)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerBrain_AddActiveBomb_m6E65E76F249D3A20F5D894CC76462E169E6D74A4 (PlayerBrain_t8E1560D2B1590AF0ABC355B852E846F3FC4A0A47 * __this, Bomb_t2F20FE59E0B0F4EE5ED5E76D2DD8406D9487CCC5 * ___bomb0, const RuntimeMethod* method);
// System.Void Bomb::HandleExplosion()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Bomb_HandleExplosion_mC5377F9F9731941DF14EDFEAC57E71BECC7C20B3 (Bomb_t2F20FE59E0B0F4EE5ED5E76D2DD8406D9487CCC5 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8 (RuntimeObject * ___message0, const RuntimeMethod* method);
// System.Void UnityEngine.AudioSource::PlayOneShot(UnityEngine.AudioClip)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_PlayOneShot_mA90B136041A61C30909301D45D0315088CA7D796 (AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * __this, AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * ___clip0, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 Utils::RoundedVector3(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Utils_RoundedVector3_m33B329BD79A6C03D660C9D59FBF2F24B1DA4D8F9 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___pos0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Vector3::op_Equality(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Vector3_op_Equality_m8A98C7F38641110A2F90445EF8E98ECE14B08296 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___lhs0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___rhs1, const RuntimeMethod* method);
// System.Void GameManager::OnPlayerKilled(PlayerBrain)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_OnPlayerKilled_mF13E0E5918806D9F9D5518A07014B2E8ACC59043 (GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * __this, PlayerBrain_t8E1560D2B1590AF0ABC355B852E846F3FC4A0A47 * ___playerKilled0, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<Enemy>::get_Item(System.Int32)
inline Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627 * List_1_get_Item_m3E90AE762FA32F7597154FA3C1E3F8FE491C51AD_inline (List_1_tC094F21B05965C2E6F7256CF752F1F5ACEE0518C * __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627 * (*) (List_1_tC094F21B05965C2E6F7256CF752F1F5ACEE0518C *, int32_t, const RuntimeMethod*))List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_gshared_inline)(__this, ___index0, method);
}
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___obj0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<Enemy>::get_Count()
inline int32_t List_1_get_Count_m99FAEDD9C024582566F281EF9D4051695FBDB0A5_inline (List_1_tC094F21B05965C2E6F7256CF752F1F5ACEE0518C * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tC094F21B05965C2E6F7256CF752F1F5ACEE0518C *, const RuntimeMethod*))List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline)(__this, method);
}
// UnityEngine.Quaternion UnityEngine.Quaternion::Euler(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  Quaternion_Euler_m37BF99FFFA09F4B3F83DC066641B82C59B19A9C3 (float ___x0, float ___y1, float ___z2, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_rotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_rotation_m1B5F3D4CE984AB31254615C9C71B0E54978583B4 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___value0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_forward()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_get_forward_mD850B9ECF892009E3485408DC0D375165B7BF053 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, float ___d1, const RuntimeMethod* method);
// UnityEngine.Color UnityEngine.Color::get_red()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  Color_get_red_m9BD55EBF7A74A515330FA5F7AC7A67C8A8913DD8 (const RuntimeMethod* method);
// System.Void UnityEngine.Debug::DrawRay(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Color,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_DrawRay_m3954B3FFA675C0660ED438E8B705B45EDE393C60 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___start0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___dir1, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___color2, float ___duration3, const RuntimeMethod* method);
// System.Boolean UnityEngine.Physics::Raycast(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.RaycastHit&,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Physics_Raycast_m18E12C65F127D1AA50D196623F04F81CB138FD12 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___origin0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___direction1, RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89 * ___hitInfo2, float ___maxDistance3, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.RaycastHit::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * RaycastHit_get_transform_m2DD983DBD3602DE848DE287EE5233FD02EEC608D (RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89 * __this, const RuntimeMethod* method);
// System.String UnityEngine.Object::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * __this, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method);
// System.String UnityEngine.Component::get_tag()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Component_get_tag_m77B4A7356E58F985216CC53966F7A9699454803E (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<Player>()
inline Player_t5689617909B48F7640EA0892D85C92C13CC22C6F * Component_GetComponent_TisPlayer_t5689617909B48F7640EA0892D85C92C13CC22C6F_m1BED3A96709F9A68D06117FAAE2AE1456F74CE7B (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  Player_t5689617909B48F7640EA0892D85C92C13CC22C6F * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_mAAAA103F4911E9FA18634BF9605C28559F5E2AC7 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___obj0, float ___t1, const RuntimeMethod* method);
// System.Void PlayerBrain::RemoveBomb(Bomb)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerBrain_RemoveBomb_mFE5171474DFEB338E8DEBFCD61280DA02E505C9C (PlayerBrain_t8E1560D2B1590AF0ABC355B852E846F3FC4A0A47 * __this, Bomb_t2F20FE59E0B0F4EE5ED5E76D2DD8406D9487CCC5 * ___bomb0, const RuntimeMethod* method);
// System.Void EnemyManager::AddEnemy(Enemy)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemyManager_AddEnemy_mC3C2806EF32629BC37416428812D1EB9993E88EF (EnemyManager_t0C705BD8A8A466A5681EA2FD18CB057B361036E1 * __this, Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627 * ___enemy0, const RuntimeMethod* method);
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void Enemy::HandleMovement()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enemy_HandleMovement_m6376AE4694DA3DA4A81163F692BF5BB05D72B975 (Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Behaviour::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32 (Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Animator::SetBool(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetBool_m34E2E9785A47A3AE94E804004425C333C36CCD43 (Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * __this, String_t* ___name0, bool ___value1, const RuntimeMethod* method);
// System.Void UnityEngine.Rigidbody::set_velocity(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody_set_velocity_m8DC0988916EB38DFD7D4584830B41D79140BF18D (Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Physics::Raycast(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.RaycastHit&,System.Single,System.Int32,UnityEngine.QueryTriggerInteraction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Physics_Raycast_m2EA572B4613E1BD7DBAA299511CFD2DBA179A163 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___origin0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___direction1, RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89 * ___hitInfo2, float ___maxDistance3, int32_t ___layerMask4, int32_t ___queryTriggerInteraction5, const RuntimeMethod* method);
// System.Single UnityEngine.RaycastHit::get_distance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float RaycastHit_get_distance_m85FCA98D7957C3BF1D449CA1B48C116CCD6226FA (RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89 * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.Random::Range(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Random_Range_m4B3A0037ACA057F33C94508F908546B9317D996A (int32_t ___minInclusive0, int32_t ___maxExclusive1, const RuntimeMethod* method);
// System.Int32 Utils::RoundToInt(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Utils_RoundToInt_m1CC53FAE2287620FB71F7DD6F6B4E9E75F3D514F (float ___f0, const RuntimeMethod* method);
// UnityEngine.Collider UnityEngine.Collision::get_collider()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * Collision_get_collider_m0AC4446E6B9168A0FB19DA376559C812E43779F8 (Collision_tDC11F9B3834FD25DEB8C7DD1C51B635D240BBBF0 * __this, const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.Collision::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * Collision_get_gameObject_m5682F872FD28419AA36F0651CE8B19825A21859D (Collision_tDC11F9B3834FD25DEB8C7DD1C51B635D240BBBF0 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<Player>()
inline Player_t5689617909B48F7640EA0892D85C92C13CC22C6F * GameObject_GetComponent_TisPlayer_t5689617909B48F7640EA0892D85C92C13CC22C6F_m82212DD756C5F3A2B4844722FD1EE504E9AAD906 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  Player_t5689617909B48F7640EA0892D85C92C13CC22C6F * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// System.Void EnemyManager::RemoveEnemy(Enemy)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemyManager_RemoveEnemy_m7DF5FE498182D20BC2D2AD14364BEC1042130B25 (EnemyManager_t0C705BD8A8A466A5681EA2FD18CB057B361036E1 * __this, Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627 * ___enemy0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1<Enemy>::Contains(!0)
inline bool List_1_Contains_m2D3953DEB84CD5622D7FBE02FB7EAFD31276450B (List_1_tC094F21B05965C2E6F7256CF752F1F5ACEE0518C * __this, Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627 * ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_tC094F21B05965C2E6F7256CF752F1F5ACEE0518C *, Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627 *, const RuntimeMethod*))List_1_Contains_m99C700668AC6D272188471D2D6B784A2B5636C8E_gshared)(__this, ___item0, method);
}
// System.Void System.Collections.Generic.List`1<Enemy>::Add(!0)
inline void List_1_Add_m51152AE1B99DCCA528E426B5AB47C84CA9CE03BC (List_1_tC094F21B05965C2E6F7256CF752F1F5ACEE0518C * __this, Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627 * ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tC094F21B05965C2E6F7256CF752F1F5ACEE0518C *, Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627 *, const RuntimeMethod*))List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared)(__this, ___item0, method);
}
// System.Boolean System.Collections.Generic.List`1<Enemy>::Remove(!0)
inline bool List_1_Remove_m279C015886B9A5635C788A2ABDB7325CEE8652C4 (List_1_tC094F21B05965C2E6F7256CF752F1F5ACEE0518C * __this, Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627 * ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_tC094F21B05965C2E6F7256CF752F1F5ACEE0518C *, Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627 *, const RuntimeMethod*))List_1_Remove_m753F7B4281CC4D02C07AE90726F51EF34B588DF7_gshared)(__this, ___item0, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::.ctor()
inline void List_1__ctor_m859B0EE8491FDDEB1A3F7115D334B863E025BBC8 (List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 *, const RuntimeMethod*))List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<Enemy>::.ctor()
inline void List_1__ctor_m264424C12AE2901EAD718720F579BDA200FCC721 (List_1_tC094F21B05965C2E6F7256CF752F1F5ACEE0518C * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tC094F21B05965C2E6F7256CF752F1F5ACEE0518C *, const RuntimeMethod*))List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared)(__this, method);
}
// System.String System.Single::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Single_ToString_m80E7ABED4F4D73F2BE19DDB80D3D92FCD8DFA010 (float* __this, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<CoffeeTools.Events.GameEventListener>::get_Count()
inline int32_t List_1_get_Count_m92F22AFC554852703FDEBB541CD7A42F52B20C05_inline (List_1_tD5261AAFAEBC43CA1ABF9DED36961E42BF380A18 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tD5261AAFAEBC43CA1ABF9DED36961E42BF380A18 *, const RuntimeMethod*))List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline)(__this, method);
}
// !0 System.Collections.Generic.List`1<CoffeeTools.Events.GameEventListener>::get_Item(System.Int32)
inline GameEventListener_t9EA3000DEE17ADBCD810A15E9E8A2830A3AE478E * List_1_get_Item_m836169963115FD20D6888445536301674670247A_inline (List_1_tD5261AAFAEBC43CA1ABF9DED36961E42BF380A18 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  GameEventListener_t9EA3000DEE17ADBCD810A15E9E8A2830A3AE478E * (*) (List_1_tD5261AAFAEBC43CA1ABF9DED36961E42BF380A18 *, int32_t, const RuntimeMethod*))List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_gshared_inline)(__this, ___index0, method);
}
// System.Void CoffeeTools.Events.GameEventListener::OnEventRaised()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameEventListener_OnEventRaised_mF6F71FDB444EFE995876993ABA75D487C82E6BBB (GameEventListener_t9EA3000DEE17ADBCD810A15E9E8A2830A3AE478E * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1<CoffeeTools.Events.GameEventListener>::Contains(!0)
inline bool List_1_Contains_m4434AEB6DFA466908E59044F4FAF32B233CE7A9C (List_1_tD5261AAFAEBC43CA1ABF9DED36961E42BF380A18 * __this, GameEventListener_t9EA3000DEE17ADBCD810A15E9E8A2830A3AE478E * ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_tD5261AAFAEBC43CA1ABF9DED36961E42BF380A18 *, GameEventListener_t9EA3000DEE17ADBCD810A15E9E8A2830A3AE478E *, const RuntimeMethod*))List_1_Contains_m99C700668AC6D272188471D2D6B784A2B5636C8E_gshared)(__this, ___item0, method);
}
// System.Void System.Collections.Generic.List`1<CoffeeTools.Events.GameEventListener>::Add(!0)
inline void List_1_Add_m4A165BE358C78F8844421B2A513B00E626F4B86A (List_1_tD5261AAFAEBC43CA1ABF9DED36961E42BF380A18 * __this, GameEventListener_t9EA3000DEE17ADBCD810A15E9E8A2830A3AE478E * ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tD5261AAFAEBC43CA1ABF9DED36961E42BF380A18 *, GameEventListener_t9EA3000DEE17ADBCD810A15E9E8A2830A3AE478E *, const RuntimeMethod*))List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared)(__this, ___item0, method);
}
// System.Boolean System.Collections.Generic.List`1<CoffeeTools.Events.GameEventListener>::Remove(!0)
inline bool List_1_Remove_mBF46B164D2FF404408FFA5A6BBF8AB1F95C1EEDA (List_1_tD5261AAFAEBC43CA1ABF9DED36961E42BF380A18 * __this, GameEventListener_t9EA3000DEE17ADBCD810A15E9E8A2830A3AE478E * ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_tD5261AAFAEBC43CA1ABF9DED36961E42BF380A18 *, GameEventListener_t9EA3000DEE17ADBCD810A15E9E8A2830A3AE478E *, const RuntimeMethod*))List_1_Remove_m753F7B4281CC4D02C07AE90726F51EF34B588DF7_gshared)(__this, ___item0, method);
}
// System.Void System.Collections.Generic.List`1<CoffeeTools.Events.GameEventListener>::.ctor()
inline void List_1__ctor_m82F63E44C145FD28D830D98EEEB43159B62433E5 (List_1_tD5261AAFAEBC43CA1ABF9DED36961E42BF380A18 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tD5261AAFAEBC43CA1ABF9DED36961E42BF380A18 *, const RuntimeMethod*))List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared)(__this, method);
}
// System.Void CoffeeTools.Events.GameEvent::RegisterListener(CoffeeTools.Events.GameEventListener)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameEvent_RegisterListener_m7659A9EC2EDE20955FDC2D7B9D9DB51D35681A61 (GameEvent_tFC086B6DBF978FD9C391C201595AA84D9981B491 * __this, GameEventListener_t9EA3000DEE17ADBCD810A15E9E8A2830A3AE478E * ___listener0, const RuntimeMethod* method);
// System.Void CoffeeTools.Events.GameEvent::UnregisterListener(CoffeeTools.Events.GameEventListener)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameEvent_UnregisterListener_m1DFC2392313AEC08E9F38DC56C9AA6FC651D1F28 (GameEvent_tFC086B6DBF978FD9C391C201595AA84D9981B491 * __this, GameEventListener_t9EA3000DEE17ADBCD810A15E9E8A2830A3AE478E * ___listener0, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityEvent::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_Invoke_mDA46AA9786AD4C34211C6C6ADFB0963DFF430AF5 (UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * __this, const RuntimeMethod* method);
// System.Void GameManager::SpawnRandomBlocks(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_SpawnRandomBlocks_mDE809BEAC1E59B316DA317409745FD80F778B83D (GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * __this, float ___count0, const RuntimeMethod* method);
// System.Boolean GameManager::PlayersReady()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GameManager_PlayersReady_m27A793AE3C1C0C6B30920678BC47ADBE9AAA2F0A (GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * __this, const RuntimeMethod* method);
// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411 (int32_t* __this, const RuntimeMethod* method);
// System.Void GameManager::CountdownTick()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_CountdownTick_m6A8EB3E91153AEC2B5BF2CC95D9E098FAF7DA2CD (GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * __this, const RuntimeMethod* method);
// System.Void GameManager::TriggerEscalation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_TriggerEscalation_m5725A441EA85CE35F5218F67934498330526B0AD (GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Input::GetKey(UnityEngine.KeyCode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetKey_mFDD450A4C61F2930928B12287FFBD1ACCB71E429 (int32_t ___key0, const RuntimeMethod* method);
// UnityEngine.SceneManagement.Scene UnityEngine.SceneManagement.SceneManager::GetActiveScene()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  SceneManager_GetActiveScene_mB9A5037FFB576B2432D0BFEF6A161B7C4C1921A4 (const RuntimeMethod* method);
// System.Int32 UnityEngine.SceneManagement.Scene::get_buildIndex()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Scene_get_buildIndex_mE32CE766EA0790E4636A351BA353A7FD71A11DA4 (Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE * __this, const RuntimeMethod* method);
// System.Void UnityEngine.SceneManagement.SceneManager::LoadScene(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneManager_LoadScene_m5550E6368A6D0E37DACEDA3C5E4BA331836BC3C5 (int32_t ___sceneBuildIndex0, const RuntimeMethod* method);
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method);
// System.Boolean GameManager::PositionIsOpen(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GameManager_PositionIsOpen_mEF759380AEB144BFC1D0CBF00183E39A59D57B68 (GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position0, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::get_identity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  Quaternion_get_identity_mF2E565DBCE793A1AE6208056D42CA7C59D83A702 (const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<UnityEngine.GameObject>(!!0,UnityEngine.Vector3,UnityEngine.Quaternion)
inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___original0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position1, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___rotation2, const RuntimeMethod* method)
{
	return ((  GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E , Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 , const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_mB05DEC51C29EF5BB8BD17D055E80217F11E571AA_gshared)(___original0, ___position1, ___rotation2, method);
}
// System.Int32 System.Collections.Generic.List`1<UnityEngine.GameObject>::get_Count()
inline int32_t List_1_get_Count_m6206A8F48C7A98B9CFC23A13548CB215717573BD_inline (List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 *, const RuntimeMethod*))List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline)(__this, method);
}
// !0 System.Collections.Generic.List`1<UnityEngine.GameObject>::get_Item(System.Int32)
inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_inline (List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * (*) (List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 *, int32_t, const RuntimeMethod*))List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_gshared_inline)(__this, ___index0, method);
}
// System.Void UnityEngine.AudioSource::set_clip(UnityEngine.AudioClip)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_set_clip_mD1F50F7BA6EA3AF25B4922473352C5180CFF7B2B (AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * __this, AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.AudioSource::set_loop(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_set_loop_mDD9FB746D8A7392472E5484EEF8D0A667993E3E0 (AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * __this, bool ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.AudioSource::Play()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_Play_mED16664B8F8F3E4D68785C8C00FC96C4DF053AE1 (AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___x0, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___y1, const RuntimeMethod* method);
// System.Void UnityEngine.UI.Text::set_fontSize(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Text_set_fontSize_m0D32489043916BCE64E51E0BDFCC12AC1B829411 (Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.SceneManagement.SceneManager::LoadScene(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneManager_LoadScene_m7DAF30213E99396ECBDB1BD40CC34CCF36902092 (String_t* ___sceneName0, const RuntimeMethod* method);
// System.Void UnityEngine.Light::set_color(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Light_set_color_mB33E961A7CF25D0EBE410EE22444B4B8D4317C6C (Light_tA2F349FE839781469A0344CF6039B51512394275 * __this, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___value0, const RuntimeMethod* method);
// System.Void Player::DropBomb()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player_DropBomb_m89F9FF5D6E8CAC1FDB8633207D8612E5BF52EA26 (Player_t5689617909B48F7640EA0892D85C92C13CC22C6F * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_get_zero_m1A8F7993167785F750B6B01762D22C2597C84EF6 (const RuntimeMethod* method);
// System.Boolean UnityEngine.Vector3::op_Inequality(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Vector3_op_Inequality_m15190A795B416EB699E69E6190DE6F1C1F208710 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___lhs0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___rhs1, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<Bomb>::get_Count()
inline int32_t List_1_get_Count_m6C3B4446020715A887B6977BDBB20AC8EE2ADF16_inline (List_1_tDB3AB8389E177E6FC35B0AD539765C2EF7334450 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tDB3AB8389E177E6FC35B0AD539765C2EF7334450 *, const RuntimeMethod*))List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline)(__this, method);
}
// System.Boolean System.Collections.Generic.List`1<Bomb>::Contains(!0)
inline bool List_1_Contains_mDD3B3320E8F04D5683767102003DCC1A646F24D2 (List_1_tDB3AB8389E177E6FC35B0AD539765C2EF7334450 * __this, Bomb_t2F20FE59E0B0F4EE5ED5E76D2DD8406D9487CCC5 * ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_tDB3AB8389E177E6FC35B0AD539765C2EF7334450 *, Bomb_t2F20FE59E0B0F4EE5ED5E76D2DD8406D9487CCC5 *, const RuntimeMethod*))List_1_Contains_m99C700668AC6D272188471D2D6B784A2B5636C8E_gshared)(__this, ___item0, method);
}
// System.Void System.Collections.Generic.List`1<Bomb>::Add(!0)
inline void List_1_Add_mBE339A0D5D8A8E1458C669CBACB51BFC70412C4A (List_1_tDB3AB8389E177E6FC35B0AD539765C2EF7334450 * __this, Bomb_t2F20FE59E0B0F4EE5ED5E76D2DD8406D9487CCC5 * ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tDB3AB8389E177E6FC35B0AD539765C2EF7334450 *, Bomb_t2F20FE59E0B0F4EE5ED5E76D2DD8406D9487CCC5 *, const RuntimeMethod*))List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared)(__this, ___item0, method);
}
// System.Boolean System.Collections.Generic.List`1<Bomb>::Remove(!0)
inline bool List_1_Remove_mA5CF7C12D59438DFD44792765E09BE018434E254 (List_1_tDB3AB8389E177E6FC35B0AD539765C2EF7334450 * __this, Bomb_t2F20FE59E0B0F4EE5ED5E76D2DD8406D9487CCC5 * ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_tDB3AB8389E177E6FC35B0AD539765C2EF7334450 *, Bomb_t2F20FE59E0B0F4EE5ED5E76D2DD8406D9487CCC5 *, const RuntimeMethod*))List_1_Remove_m753F7B4281CC4D02C07AE90726F51EF34B588DF7_gshared)(__this, ___item0, method);
}
// UnityEngine.Color UnityEngine.Color::get_green()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  Color_get_green_mFF9BD42534D385A0717B1EAD083ADF08712984B9 (const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<Bomb>::.ctor()
inline void List_1__ctor_mB499F4BB9B012EBA8F228DB7760F6BC6D7717512 (List_1_tDB3AB8389E177E6FC35B0AD539765C2EF7334450 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tDB3AB8389E177E6FC35B0AD539765C2EF7334450 *, const RuntimeMethod*))List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared)(__this, method);
}
// System.String CoffeeTools.Variables.StringVariable::get_Value()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* StringVariable_get_Value_m86BE4BD992C393488BF564E562F5FEA0F4718631_inline (StringVariable_tF722B8C57C7554A75D23379E070F3FA0F90ADCDD * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.Mathf::RoundToInt(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Mathf_RoundToInt_m56850BDF60FF9E3441CE57E5EFEFEF36EDCDE6DD (float ___f0, const RuntimeMethod* method);
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * __this, float ___x0, float ___y1, const RuntimeMethod* method);
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
// System.Void Block::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Block_Awake_m3FFA03EDF1326E6B15CF4B3BF65A8183B17883B3 (Block_tD1B94B0BEA1476ED81C42F0F6E53EFBF129FF3A6 * __this, const RuntimeMethod* method)
{
	{
		// blockManager.SetActiveBlock(this, transform.position);
		BlockManager_t9C5AF5A177FFEEBD9C3968E47D9D4F272EAC5414 * L_0 = __this->get_blockManager_4();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_1;
		L_1 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2;
		L_2 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_1, /*hidden argument*/NULL);
		NullCheck(L_0);
		BlockManager_SetActiveBlock_m5F71F087A7A4AAF6AF335F6C54E66D555FF47754(L_0, __this, L_2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Block::OnDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Block_OnDestroy_m77111AEF6B89147EC234228F545DFE1CC0B50994 (Block_tD1B94B0BEA1476ED81C42F0F6E53EFBF129FF3A6 * __this, const RuntimeMethod* method)
{
	{
		// blockManager.RemoveBlock(this, transform.position);
		BlockManager_t9C5AF5A177FFEEBD9C3968E47D9D4F272EAC5414 * L_0 = __this->get_blockManager_4();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_1;
		L_1 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2;
		L_2 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_1, /*hidden argument*/NULL);
		NullCheck(L_0);
		BlockManager_RemoveBlock_mDDA7066EC997DA4ADE2071C51A885F27C92AC767(L_0, __this, L_2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Block::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Block__ctor_m2AD58504FC354294167EDD7C1B386C108FF1BCAE (Block_tD1B94B0BEA1476ED81C42F0F6E53EFBF129FF3A6 * __this, const RuntimeMethod* method)
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
// System.Void BlockManager::SetActiveBlock(Block,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BlockManager_SetActiveBlock_m5F71F087A7A4AAF6AF335F6C54E66D555FF47754 (BlockManager_t9C5AF5A177FFEEBD9C3968E47D9D4F272EAC5414 * __this, Block_tD1B94B0BEA1476ED81C42F0F6E53EFBF129FF3A6 * ___block0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_mDF1BC098939CA3E6A7E2DB5214AA20BE3C9F9EE4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_mE3E143158029D6ADAC5A00E68CE1DEAE2BED1ED0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mAE5430B0B373666980F3A3357A1DC7298D6D53C7_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!activeBlocksDictionary.ContainsKey(position))
		Dictionary_2_t59B878E4ADB9CCE44F927CD5EC3591A0975741BD * L_0 = __this->get_activeBlocksDictionary_6();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1 = ___position1;
		NullCheck(L_0);
		bool L_2;
		L_2 = Dictionary_2_ContainsKey_mE3E143158029D6ADAC5A00E68CE1DEAE2BED1ED0(L_0, L_1, /*hidden argument*/Dictionary_2_ContainsKey_mE3E143158029D6ADAC5A00E68CE1DEAE2BED1ED0_RuntimeMethod_var);
		if (L_2)
		{
			goto IL_0027;
		}
	}
	{
		// activeBlocks.Add(block);
		List_1_tAD0608C1B7CF36F477E8A550815A288D56656DFF * L_3 = __this->get_activeBlocks_4();
		Block_tD1B94B0BEA1476ED81C42F0F6E53EFBF129FF3A6 * L_4 = ___block0;
		NullCheck(L_3);
		List_1_Add_mAE5430B0B373666980F3A3357A1DC7298D6D53C7(L_3, L_4, /*hidden argument*/List_1_Add_mAE5430B0B373666980F3A3357A1DC7298D6D53C7_RuntimeMethod_var);
		// activeBlocksDictionary.Add(position, block);
		Dictionary_2_t59B878E4ADB9CCE44F927CD5EC3591A0975741BD * L_5 = __this->get_activeBlocksDictionary_6();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = ___position1;
		Block_tD1B94B0BEA1476ED81C42F0F6E53EFBF129FF3A6 * L_7 = ___block0;
		NullCheck(L_5);
		Dictionary_2_Add_mDF1BC098939CA3E6A7E2DB5214AA20BE3C9F9EE4(L_5, L_6, L_7, /*hidden argument*/Dictionary_2_Add_mDF1BC098939CA3E6A7E2DB5214AA20BE3C9F9EE4_RuntimeMethod_var);
	}

IL_0027:
	{
		// }
		return;
	}
}
// System.Void BlockManager::RemoveBlock(Block,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BlockManager_RemoveBlock_mDDA7066EC997DA4ADE2071C51A885F27C92AC767 (BlockManager_t9C5AF5A177FFEEBD9C3968E47D9D4F272EAC5414 * __this, Block_tD1B94B0BEA1476ED81C42F0F6E53EFBF129FF3A6 * ___block0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_mE3E143158029D6ADAC5A00E68CE1DEAE2BED1ED0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Remove_m712AFC412D263F92EFE2BDBA48C2954FE17B720F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Remove_mD7F5C17066228C9B8BD4714896533104B05A67A9_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (activeBlocksDictionary.ContainsKey(position))
		Dictionary_2_t59B878E4ADB9CCE44F927CD5EC3591A0975741BD * L_0 = __this->get_activeBlocksDictionary_6();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1 = ___position1;
		NullCheck(L_0);
		bool L_2;
		L_2 = Dictionary_2_ContainsKey_mE3E143158029D6ADAC5A00E68CE1DEAE2BED1ED0(L_0, L_1, /*hidden argument*/Dictionary_2_ContainsKey_mE3E143158029D6ADAC5A00E68CE1DEAE2BED1ED0_RuntimeMethod_var);
		if (!L_2)
		{
			goto IL_0028;
		}
	}
	{
		// activeBlocks.Remove(block);
		List_1_tAD0608C1B7CF36F477E8A550815A288D56656DFF * L_3 = __this->get_activeBlocks_4();
		Block_tD1B94B0BEA1476ED81C42F0F6E53EFBF129FF3A6 * L_4 = ___block0;
		NullCheck(L_3);
		bool L_5;
		L_5 = List_1_Remove_mD7F5C17066228C9B8BD4714896533104B05A67A9(L_3, L_4, /*hidden argument*/List_1_Remove_mD7F5C17066228C9B8BD4714896533104B05A67A9_RuntimeMethod_var);
		// activeBlocksDictionary.Remove(position);
		Dictionary_2_t59B878E4ADB9CCE44F927CD5EC3591A0975741BD * L_6 = __this->get_activeBlocksDictionary_6();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_7 = ___position1;
		NullCheck(L_6);
		bool L_8;
		L_8 = Dictionary_2_Remove_m712AFC412D263F92EFE2BDBA48C2954FE17B720F(L_6, L_7, /*hidden argument*/Dictionary_2_Remove_m712AFC412D263F92EFE2BDBA48C2954FE17B720F_RuntimeMethod_var);
	}

IL_0028:
	{
		// }
		return;
	}
}
// System.Void BlockManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BlockManager__ctor_mDF012B9ABCF15AE0C533B65266F5AF301B608FD0 (BlockManager_t9C5AF5A177FFEEBD9C3968E47D9D4F272EAC5414 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_mA7073B6B388A401394DC6B4E2ED10C462F5CF4C4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t59B878E4ADB9CCE44F927CD5EC3591A0975741BD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m43564A2A81100BA2236FA4C9DEF90E313664CD0E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tAD0608C1B7CF36F477E8A550815A288D56656DFF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public List<Block> activeBlocks = new List<Block>();
		List_1_tAD0608C1B7CF36F477E8A550815A288D56656DFF * L_0 = (List_1_tAD0608C1B7CF36F477E8A550815A288D56656DFF *)il2cpp_codegen_object_new(List_1_tAD0608C1B7CF36F477E8A550815A288D56656DFF_il2cpp_TypeInfo_var);
		List_1__ctor_m43564A2A81100BA2236FA4C9DEF90E313664CD0E(L_0, /*hidden argument*/List_1__ctor_m43564A2A81100BA2236FA4C9DEF90E313664CD0E_RuntimeMethod_var);
		__this->set_activeBlocks_4(L_0);
		// public Dictionary<Vector3, Block> activeBlocksDictionary = new Dictionary<Vector3, Block>();
		Dictionary_2_t59B878E4ADB9CCE44F927CD5EC3591A0975741BD * L_1 = (Dictionary_2_t59B878E4ADB9CCE44F927CD5EC3591A0975741BD *)il2cpp_codegen_object_new(Dictionary_2_t59B878E4ADB9CCE44F927CD5EC3591A0975741BD_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_mA7073B6B388A401394DC6B4E2ED10C462F5CF4C4(L_1, /*hidden argument*/Dictionary_2__ctor_mA7073B6B388A401394DC6B4E2ED10C462F5CF4C4_RuntimeMethod_var);
		__this->set_activeBlocksDictionary_6(L_1);
		// public Vector2 maxBlock = new Vector3(3, 4);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2;
		memset((&L_2), 0, sizeof(L_2));
		Vector3__ctor_mF7FCDE24496D619F4BB1A0BA44AF17DCB5D697FF_inline((&L_2), (3.0f), (4.0f), /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_3;
		L_3 = Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline(L_2, /*hidden argument*/NULL);
		__this->set_maxBlock_7(L_3);
		// public Vector2 minBlock = new Vector3(-3, -2);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector3__ctor_mF7FCDE24496D619F4BB1A0BA44AF17DCB5D697FF_inline((&L_4), (-3.0f), (-2.0f), /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_5;
		L_5 = Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline(L_4, /*hidden argument*/NULL);
		__this->set_minBlock_8(L_5);
		ScriptableObject__ctor_m8DAE6CDCFA34E16F2543B02CC3669669FF203063(__this, /*hidden argument*/NULL);
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
// System.Void Bomb::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Bomb_OnEnable_m958CE4A6DEFF85ACDBFBEBDA11597CA4390ED6DE (Bomb_t2F20FE59E0B0F4EE5ED5E76D2DD8406D9487CCC5 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	MainModule_t671F49558CB1A3CFAAD637A7927C076EC2E61F0B  V_0;
	memset((&V_0), 0, sizeof(V_0));
	SubEmittersModule_t0336A6F2B5D3339D93468AED015E2356FBE9E61C  V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	MainModule_t671F49558CB1A3CFAAD637A7927C076EC2E61F0B  V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		// gameManager = stateManager.gameManager;
		StateManager_tDAE60D3E07D8A34DE82EF3FC439FB2968C4ACB47 * L_0 = __this->get_stateManager_7();
		NullCheck(L_0);
		GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * L_1 = L_0->get_gameManager_4();
		__this->set_gameManager_6(L_1);
		// explosionTick = Time.time + bombTimerLength.value;
		float L_2;
		L_2 = Time_get_time_m1A186074B1FCD448AB13A4B9D715AB9ED0B40844(/*hidden argument*/NULL);
		FloatVariable_t54F75E496629023CDD9A6E3ADC14072AB3C2E275 * L_3 = __this->get_bombTimerLength_8();
		NullCheck(L_3);
		float L_4 = L_3->get_value_4();
		__this->set_explosionTick_9(((float)il2cpp_codegen_add((float)L_2, (float)L_4)));
		// var particle = mainPartical.main;
		ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * L_5 = __this->get_mainPartical_4();
		NullCheck(L_5);
		MainModule_t671F49558CB1A3CFAAD637A7927C076EC2E61F0B  L_6;
		L_6 = ParticleSystem_get_main_m8F17DCC63679B15CE548BE83332FDB6635AE74A0(L_5, /*hidden argument*/NULL);
		V_0 = L_6;
		// var particles = mainPartical.subEmitters;
		ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * L_7 = __this->get_mainPartical_4();
		NullCheck(L_7);
		SubEmittersModule_t0336A6F2B5D3339D93468AED015E2356FBE9E61C  L_8;
		L_8 = ParticleSystem_get_subEmitters_mCFE3CAEF76ADEAF3754210EC731A54A9DA836428(L_7, /*hidden argument*/NULL);
		V_1 = L_8;
		// particle.startLifetime = bombTimerLength.value;
		FloatVariable_t54F75E496629023CDD9A6E3ADC14072AB3C2E275 * L_9 = __this->get_bombTimerLength_8();
		NullCheck(L_9);
		float L_10 = L_9->get_value_4();
		MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD  L_11;
		L_11 = MinMaxCurve_op_Implicit_m8D746D40E6CCBF5E8C4CE39F23A45712BFC372F5(L_10, /*hidden argument*/NULL);
		MainModule_set_startLifetime_mDBE408AFE7F159812D2B95F8504208F730BC8690((MainModule_t671F49558CB1A3CFAAD637A7927C076EC2E61F0B *)(&V_0), L_11, /*hidden argument*/NULL);
		// for(int i=0; i<particles.subEmittersCount; i++)
		V_2 = 0;
		goto IL_0084;
	}

IL_005b:
	{
		// var emitter = particles.GetSubEmitterSystem(i).main;
		int32_t L_12 = V_2;
		ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * L_13;
		L_13 = SubEmittersModule_GetSubEmitterSystem_mCA305D63E8C211511FFD3DDF518785E3156C1C43((SubEmittersModule_t0336A6F2B5D3339D93468AED015E2356FBE9E61C *)(&V_1), L_12, /*hidden argument*/NULL);
		NullCheck(L_13);
		MainModule_t671F49558CB1A3CFAAD637A7927C076EC2E61F0B  L_14;
		L_14 = ParticleSystem_get_main_m8F17DCC63679B15CE548BE83332FDB6635AE74A0(L_13, /*hidden argument*/NULL);
		V_3 = L_14;
		// emitter.startDelay = bombTimerLength.value;
		FloatVariable_t54F75E496629023CDD9A6E3ADC14072AB3C2E275 * L_15 = __this->get_bombTimerLength_8();
		NullCheck(L_15);
		float L_16 = L_15->get_value_4();
		MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD  L_17;
		L_17 = MinMaxCurve_op_Implicit_m8D746D40E6CCBF5E8C4CE39F23A45712BFC372F5(L_16, /*hidden argument*/NULL);
		MainModule_set_startDelay_m95CEAEE97E462DEAF4787B9C6AD6389D9912F93A((MainModule_t671F49558CB1A3CFAAD637A7927C076EC2E61F0B *)(&V_3), L_17, /*hidden argument*/NULL);
		// for(int i=0; i<particles.subEmittersCount; i++)
		int32_t L_18 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_18, (int32_t)1));
	}

IL_0084:
	{
		// for(int i=0; i<particles.subEmittersCount; i++)
		int32_t L_19 = V_2;
		int32_t L_20;
		L_20 = SubEmittersModule_get_subEmittersCount_m8057267DA0DFFF2470BBF681C960C78F45949196((SubEmittersModule_t0336A6F2B5D3339D93468AED015E2356FBE9E61C *)(&V_1), /*hidden argument*/NULL);
		if ((((int32_t)L_19) < ((int32_t)L_20)))
		{
			goto IL_005b;
		}
	}
	{
		// exploded = false;
		__this->set_exploded_10((bool)0);
		// if (ownerBrain)
		PlayerBrain_t8E1560D2B1590AF0ABC355B852E846F3FC4A0A47 * L_21 = __this->get_ownerBrain_5();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_22;
		L_22 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499(L_21, /*hidden argument*/NULL);
		if (!L_22)
		{
			goto IL_00ae;
		}
	}
	{
		// ownerBrain.AddActiveBomb(this);
		PlayerBrain_t8E1560D2B1590AF0ABC355B852E846F3FC4A0A47 * L_23 = __this->get_ownerBrain_5();
		NullCheck(L_23);
		PlayerBrain_AddActiveBomb_m6E65E76F249D3A20F5D894CC76462E169E6D74A4(L_23, __this, /*hidden argument*/NULL);
	}

IL_00ae:
	{
		// }
		return;
	}
}
// System.Void Bomb::FixedUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Bomb_FixedUpdate_m2EC422F95936E625C857D7080AF14B88F583F39D (Bomb_t2F20FE59E0B0F4EE5ED5E76D2DD8406D9487CCC5 * __this, const RuntimeMethod* method)
{
	{
		// if(!exploded && Time.time > explosionTick)
		bool L_0 = __this->get_exploded_10();
		if (L_0)
		{
			goto IL_0022;
		}
	}
	{
		float L_1;
		L_1 = Time_get_time_m1A186074B1FCD448AB13A4B9D715AB9ED0B40844(/*hidden argument*/NULL);
		float L_2 = __this->get_explosionTick_9();
		if ((!(((float)L_1) > ((float)L_2))))
		{
			goto IL_0022;
		}
	}
	{
		// exploded = true;
		__this->set_exploded_10((bool)1);
		// HandleExplosion();
		Bomb_HandleExplosion_mC5377F9F9731941DF14EDFEAC57E71BECC7C20B3(__this, /*hidden argument*/NULL);
	}

IL_0022:
	{
		// }
		return;
	}
}
// System.Void Bomb::HandleExplosion()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Bomb_HandleExplosion_mC5377F9F9731941DF14EDFEAC57E71BECC7C20B3 (Bomb_t2F20FE59E0B0F4EE5ED5E76D2DD8406D9487CCC5 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisPlayer_t5689617909B48F7640EA0892D85C92C13CC22C6F_m1BED3A96709F9A68D06117FAAE2AE1456F74CE7B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m99FAEDD9C024582566F281EF9D4051695FBDB0A5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m3E90AE762FA32F7597154FA3C1E3F8FE491C51AD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral133F94980A656A5ECC30EDEB5CC8C9310F41F269);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3260331AF5DA53ABC7CA7BAF659CF8D9FC93DEC7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC3BE03E13939D9A99F2B1AD5A66AF496693ACC60);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDDFD700AA70AA21B276AAE3418D534581DA8347E);
		s_Il2CppMethodInitialized = true;
	}
	RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89  V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		// Debug.Log("Exploding!");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteralDDFD700AA70AA21B276AAE3418D534581DA8347E, /*hidden argument*/NULL);
		// audioSource.PlayOneShot(explosionSound);
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_0 = __this->get_audioSource_11();
		AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * L_1 = __this->get_explosionSound_13();
		NullCheck(L_0);
		AudioSource_PlayOneShot_mA90B136041A61C30909301D45D0315088CA7D796(L_0, L_1, /*hidden argument*/NULL);
		// if (Utils.RoundedVector3(gameManager.player1.playerGO.transform.position) == transform.position)
		GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * L_2 = __this->get_gameManager_6();
		NullCheck(L_2);
		PlayerBrain_t8E1560D2B1590AF0ABC355B852E846F3FC4A0A47 * L_3 = L_2->get_player1_4();
		NullCheck(L_3);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_4 = L_3->get_playerGO_6();
		NullCheck(L_4);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_5;
		L_5 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_4, /*hidden argument*/NULL);
		NullCheck(L_5);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6;
		L_6 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_5, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_7;
		L_7 = Utils_RoundedVector3_m33B329BD79A6C03D660C9D59FBF2F24B1DA4D8F9(L_6, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_8;
		L_8 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_8);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9;
		L_9 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_8, /*hidden argument*/NULL);
		bool L_10;
		L_10 = Vector3_op_Equality_m8A98C7F38641110A2F90445EF8E98ECE14B08296(L_7, L_9, /*hidden argument*/NULL);
		if (!L_10)
		{
			goto IL_0062;
		}
	}
	{
		// gameManager.OnPlayerKilled(gameManager.player1);
		GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * L_11 = __this->get_gameManager_6();
		GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * L_12 = __this->get_gameManager_6();
		NullCheck(L_12);
		PlayerBrain_t8E1560D2B1590AF0ABC355B852E846F3FC4A0A47 * L_13 = L_12->get_player1_4();
		NullCheck(L_11);
		GameManager_OnPlayerKilled_mF13E0E5918806D9F9D5518A07014B2E8ACC59043(L_11, L_13, /*hidden argument*/NULL);
	}

IL_0062:
	{
		// if (gameManager.player2.playerGO && Utils.RoundedVector3(gameManager.player2.playerGO.transform.position) == transform.position)
		GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * L_14 = __this->get_gameManager_6();
		NullCheck(L_14);
		PlayerBrain_t8E1560D2B1590AF0ABC355B852E846F3FC4A0A47 * L_15 = L_14->get_player2_5();
		NullCheck(L_15);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_16 = L_15->get_playerGO_6();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_17;
		L_17 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499(L_16, /*hidden argument*/NULL);
		if (!L_17)
		{
			goto IL_00c0;
		}
	}
	{
		GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * L_18 = __this->get_gameManager_6();
		NullCheck(L_18);
		PlayerBrain_t8E1560D2B1590AF0ABC355B852E846F3FC4A0A47 * L_19 = L_18->get_player2_5();
		NullCheck(L_19);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_20 = L_19->get_playerGO_6();
		NullCheck(L_20);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_21;
		L_21 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_20, /*hidden argument*/NULL);
		NullCheck(L_21);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_22;
		L_22 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_21, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_23;
		L_23 = Utils_RoundedVector3_m33B329BD79A6C03D660C9D59FBF2F24B1DA4D8F9(L_22, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_24;
		L_24 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_24);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_25;
		L_25 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_24, /*hidden argument*/NULL);
		bool L_26;
		L_26 = Vector3_op_Equality_m8A98C7F38641110A2F90445EF8E98ECE14B08296(L_23, L_25, /*hidden argument*/NULL);
		if (!L_26)
		{
			goto IL_00c0;
		}
	}
	{
		// gameManager.OnPlayerKilled(gameManager.player2);
		GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * L_27 = __this->get_gameManager_6();
		GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * L_28 = __this->get_gameManager_6();
		NullCheck(L_28);
		PlayerBrain_t8E1560D2B1590AF0ABC355B852E846F3FC4A0A47 * L_29 = L_28->get_player2_5();
		NullCheck(L_27);
		GameManager_OnPlayerKilled_mF13E0E5918806D9F9D5518A07014B2E8ACC59043(L_27, L_29, /*hidden argument*/NULL);
	}

IL_00c0:
	{
		// for (int i = 0; i < gameManager.enemyManager.spawnedEnemies.Count; i++)
		V_1 = 0;
		goto IL_011f;
	}

IL_00c4:
	{
		// if(Utils.RoundedVector3(gameManager.enemyManager.spawnedEnemies[i].transform.position) == transform.position)
		GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * L_30 = __this->get_gameManager_6();
		NullCheck(L_30);
		EnemyManager_t0C705BD8A8A466A5681EA2FD18CB057B361036E1 * L_31 = L_30->get_enemyManager_8();
		NullCheck(L_31);
		List_1_tC094F21B05965C2E6F7256CF752F1F5ACEE0518C * L_32 = L_31->get_spawnedEnemies_5();
		int32_t L_33 = V_1;
		NullCheck(L_32);
		Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627 * L_34;
		L_34 = List_1_get_Item_m3E90AE762FA32F7597154FA3C1E3F8FE491C51AD_inline(L_32, L_33, /*hidden argument*/List_1_get_Item_m3E90AE762FA32F7597154FA3C1E3F8FE491C51AD_RuntimeMethod_var);
		NullCheck(L_34);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_35;
		L_35 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_34, /*hidden argument*/NULL);
		NullCheck(L_35);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_36;
		L_36 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_35, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_37;
		L_37 = Utils_RoundedVector3_m33B329BD79A6C03D660C9D59FBF2F24B1DA4D8F9(L_36, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_38;
		L_38 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_38);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_39;
		L_39 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_38, /*hidden argument*/NULL);
		bool L_40;
		L_40 = Vector3_op_Equality_m8A98C7F38641110A2F90445EF8E98ECE14B08296(L_37, L_39, /*hidden argument*/NULL);
		if (!L_40)
		{
			goto IL_011b;
		}
	}
	{
		// Destroy(gameManager.enemyManager.spawnedEnemies[i].gameObject);
		GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * L_41 = __this->get_gameManager_6();
		NullCheck(L_41);
		EnemyManager_t0C705BD8A8A466A5681EA2FD18CB057B361036E1 * L_42 = L_41->get_enemyManager_8();
		NullCheck(L_42);
		List_1_tC094F21B05965C2E6F7256CF752F1F5ACEE0518C * L_43 = L_42->get_spawnedEnemies_5();
		int32_t L_44 = V_1;
		NullCheck(L_43);
		Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627 * L_45;
		L_45 = List_1_get_Item_m3E90AE762FA32F7597154FA3C1E3F8FE491C51AD_inline(L_43, L_44, /*hidden argument*/List_1_get_Item_m3E90AE762FA32F7597154FA3C1E3F8FE491C51AD_RuntimeMethod_var);
		NullCheck(L_45);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_46;
		L_46 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_45, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(L_46, /*hidden argument*/NULL);
	}

IL_011b:
	{
		// for (int i = 0; i < gameManager.enemyManager.spawnedEnemies.Count; i++)
		int32_t L_47 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_47, (int32_t)1));
	}

IL_011f:
	{
		// for (int i = 0; i < gameManager.enemyManager.spawnedEnemies.Count; i++)
		int32_t L_48 = V_1;
		GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * L_49 = __this->get_gameManager_6();
		NullCheck(L_49);
		EnemyManager_t0C705BD8A8A466A5681EA2FD18CB057B361036E1 * L_50 = L_49->get_enemyManager_8();
		NullCheck(L_50);
		List_1_tC094F21B05965C2E6F7256CF752F1F5ACEE0518C * L_51 = L_50->get_spawnedEnemies_5();
		NullCheck(L_51);
		int32_t L_52;
		L_52 = List_1_get_Count_m99FAEDD9C024582566F281EF9D4051695FBDB0A5_inline(L_51, /*hidden argument*/List_1_get_Count_m99FAEDD9C024582566F281EF9D4051695FBDB0A5_RuntimeMethod_var);
		if ((((int32_t)L_48) < ((int32_t)L_52)))
		{
			goto IL_00c4;
		}
	}
	{
		// for (int i = 0; i < 4; i++){
		V_2 = 0;
		goto IL_025c;
	}

IL_013e:
	{
		// transform.rotation = Quaternion.Euler(0, 90 * i, 0);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_53;
		L_53 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		int32_t L_54 = V_2;
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_55;
		L_55 = Quaternion_Euler_m37BF99FFFA09F4B3F83DC066641B82C59B19A9C3((0.0f), ((float)((float)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)90), (int32_t)L_54)))), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_53);
		Transform_set_rotation_m1B5F3D4CE984AB31254615C9C71B0E54978583B4(L_53, L_55, /*hidden argument*/NULL);
		// Debug.DrawRay(transform.position, transform.forward * 2f, Color.red, 60f);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_56;
		L_56 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_56);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_57;
		L_57 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_56, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_58;
		L_58 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_58);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_59;
		L_59 = Transform_get_forward_mD850B9ECF892009E3485408DC0D375165B7BF053(L_58, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_60;
		L_60 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_59, (2.0f), /*hidden argument*/NULL);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_61;
		L_61 = Color_get_red_m9BD55EBF7A74A515330FA5F7AC7A67C8A8913DD8(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_DrawRay_m3954B3FFA675C0660ED438E8B705B45EDE393C60(L_57, L_60, L_61, (60.0f), /*hidden argument*/NULL);
		// if (Physics.Raycast(transform.position, transform.forward, out hit, 2f))
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_62;
		L_62 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_62);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_63;
		L_63 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_62, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_64;
		L_64 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_64);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_65;
		L_65 = Transform_get_forward_mD850B9ECF892009E3485408DC0D375165B7BF053(L_64, /*hidden argument*/NULL);
		bool L_66;
		L_66 = Physics_Raycast_m18E12C65F127D1AA50D196623F04F81CB138FD12(L_63, L_65, (RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89 *)(&V_0), (2.0f), /*hidden argument*/NULL);
		if (!L_66)
		{
			goto IL_0258;
		}
	}
	{
		// Debug.Log("I hit " + hit.transform.name);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_67;
		L_67 = RaycastHit_get_transform_m2DD983DBD3602DE848DE287EE5233FD02EEC608D((RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89 *)(&V_0), /*hidden argument*/NULL);
		NullCheck(L_67);
		String_t* L_68;
		L_68 = Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB(L_67, /*hidden argument*/NULL);
		String_t* L_69;
		L_69 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteralC3BE03E13939D9A99F2B1AD5A66AF496693ACC60, L_68, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_69, /*hidden argument*/NULL);
		// if (hit.transform.tag == "Player")
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_70;
		L_70 = RaycastHit_get_transform_m2DD983DBD3602DE848DE287EE5233FD02EEC608D((RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89 *)(&V_0), /*hidden argument*/NULL);
		NullCheck(L_70);
		String_t* L_71;
		L_71 = Component_get_tag_m77B4A7356E58F985216CC53966F7A9699454803E(L_70, /*hidden argument*/NULL);
		bool L_72;
		L_72 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_71, _stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70, /*hidden argument*/NULL);
		if (!L_72)
		{
			goto IL_0204;
		}
	}
	{
		// gameManager.OnPlayerKilled(hit.transform.GetComponent<Player>().playerBrain);
		GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * L_73 = __this->get_gameManager_6();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_74;
		L_74 = RaycastHit_get_transform_m2DD983DBD3602DE848DE287EE5233FD02EEC608D((RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89 *)(&V_0), /*hidden argument*/NULL);
		NullCheck(L_74);
		Player_t5689617909B48F7640EA0892D85C92C13CC22C6F * L_75;
		L_75 = Component_GetComponent_TisPlayer_t5689617909B48F7640EA0892D85C92C13CC22C6F_m1BED3A96709F9A68D06117FAAE2AE1456F74CE7B(L_74, /*hidden argument*/Component_GetComponent_TisPlayer_t5689617909B48F7640EA0892D85C92C13CC22C6F_m1BED3A96709F9A68D06117FAAE2AE1456F74CE7B_RuntimeMethod_var);
		NullCheck(L_75);
		PlayerBrain_t8E1560D2B1590AF0ABC355B852E846F3FC4A0A47 * L_76 = L_75->get_playerBrain_5();
		NullCheck(L_73);
		GameManager_OnPlayerKilled_mF13E0E5918806D9F9D5518A07014B2E8ACC59043(L_73, L_76, /*hidden argument*/NULL);
		// }
		goto IL_0258;
	}

IL_0204:
	{
		// else if (hit.transform.tag == "BreakableBlock")
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_77;
		L_77 = RaycastHit_get_transform_m2DD983DBD3602DE848DE287EE5233FD02EEC608D((RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89 *)(&V_0), /*hidden argument*/NULL);
		NullCheck(L_77);
		String_t* L_78;
		L_78 = Component_get_tag_m77B4A7356E58F985216CC53966F7A9699454803E(L_77, /*hidden argument*/NULL);
		bool L_79;
		L_79 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_78, _stringLiteral133F94980A656A5ECC30EDEB5CC8C9310F41F269, /*hidden argument*/NULL);
		if (!L_79)
		{
			goto IL_022f;
		}
	}
	{
		// Destroy(hit.transform.gameObject);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_80;
		L_80 = RaycastHit_get_transform_m2DD983DBD3602DE848DE287EE5233FD02EEC608D((RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89 *)(&V_0), /*hidden argument*/NULL);
		NullCheck(L_80);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_81;
		L_81 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_80, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(L_81, /*hidden argument*/NULL);
		// }
		goto IL_0258;
	}

IL_022f:
	{
		// else if(hit.transform.tag == "Enemy")
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_82;
		L_82 = RaycastHit_get_transform_m2DD983DBD3602DE848DE287EE5233FD02EEC608D((RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89 *)(&V_0), /*hidden argument*/NULL);
		NullCheck(L_82);
		String_t* L_83;
		L_83 = Component_get_tag_m77B4A7356E58F985216CC53966F7A9699454803E(L_82, /*hidden argument*/NULL);
		bool L_84;
		L_84 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_83, _stringLiteral3260331AF5DA53ABC7CA7BAF659CF8D9FC93DEC7, /*hidden argument*/NULL);
		if (!L_84)
		{
			goto IL_0258;
		}
	}
	{
		// Destroy(hit.transform.gameObject);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_85;
		L_85 = RaycastHit_get_transform_m2DD983DBD3602DE848DE287EE5233FD02EEC608D((RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89 *)(&V_0), /*hidden argument*/NULL);
		NullCheck(L_85);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_86;
		L_86 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_85, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(L_86, /*hidden argument*/NULL);
	}

IL_0258:
	{
		// for (int i = 0; i < 4; i++){
		int32_t L_87 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_87, (int32_t)1));
	}

IL_025c:
	{
		// for (int i = 0; i < 4; i++){
		int32_t L_88 = V_2;
		if ((((int32_t)L_88) < ((int32_t)4)))
		{
			goto IL_013e;
		}
	}
	{
		// Destroy(gameObject, 0.6f);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_89;
		L_89 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_mAAAA103F4911E9FA18634BF9605C28559F5E2AC7(L_89, (0.600000024f), /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Bomb::OnDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Bomb_OnDestroy_mC2EF02EA70C0F490AAD1BD85DCD0A4341CF54F24 (Bomb_t2F20FE59E0B0F4EE5ED5E76D2DD8406D9487CCC5 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (ownerBrain)
		PlayerBrain_t8E1560D2B1590AF0ABC355B852E846F3FC4A0A47 * L_0 = __this->get_ownerBrain_5();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499(L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		// ownerBrain.RemoveBomb(this);
		PlayerBrain_t8E1560D2B1590AF0ABC355B852E846F3FC4A0A47 * L_2 = __this->get_ownerBrain_5();
		NullCheck(L_2);
		PlayerBrain_RemoveBomb_mFE5171474DFEB338E8DEBFCD61280DA02E505C9C(L_2, __this, /*hidden argument*/NULL);
	}

IL_0019:
	{
		// }
		return;
	}
}
// System.Void Bomb::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Bomb__ctor_mB4A4B674437E391EA003374752A044DD5E539C46 (Bomb_t2F20FE59E0B0F4EE5ED5E76D2DD8406D9487CCC5 * __this, const RuntimeMethod* method)
{
	{
		// bool exploded = true;
		__this->set_exploded_10((bool)1);
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
// System.Boolean BoolVariable::get_value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BoolVariable_get_value_m2229E1DFB977430A5A59CABDE46DAAFDA23B9595 (BoolVariable_tEFB0BF7AE2B3698759030E79911DCB694CB00B5E * __this, const RuntimeMethod* method)
{
	{
		// get { return _value; }
		bool L_0 = __this->get__value_4();
		return L_0;
	}
}
// System.Void BoolVariable::set_value(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoolVariable_set_value_m840FD8DBC707C97B27649C5A558E7591CBAD36A9 (BoolVariable_tEFB0BF7AE2B3698759030E79911DCB694CB00B5E * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// set { _value = value; }
		bool L_0 = ___value0;
		__this->set__value_4(L_0);
		// set { _value = value; }
		return;
	}
}
// System.Void BoolVariable::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoolVariable__ctor_m3A9E719DC3E7579E5E333F5E7E2A671808B3C185 (BoolVariable_tEFB0BF7AE2B3698759030E79911DCB694CB00B5E * __this, const RuntimeMethod* method)
{
	{
		// private bool _value = true;
		__this->set__value_4((bool)1);
		ScriptableObject__ctor_m8DAE6CDCFA34E16F2543B02CC3669669FF203063(__this, /*hidden argument*/NULL);
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
// System.Void Enemy::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enemy_Awake_mF268033197059561A4A0BC3E5F6B83B50D29C861 (Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627 * __this, const RuntimeMethod* method)
{
	{
		// enemyManager.AddEnemy(this);
		EnemyManager_t0C705BD8A8A466A5681EA2FD18CB057B361036E1 * L_0 = __this->get_enemyManager_5();
		NullCheck(L_0);
		EnemyManager_AddEnemy_mC3C2806EF32629BC37416428812D1EB9993E88EF(L_0, __this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Enemy::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enemy_Start_m9FA35B427F2B9FDFD390E9812C2556775C62CB02 (Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627 * __this, const RuntimeMethod* method)
{
	{
		// if(stateManager.currentGameState == GameState.PreGame)
		StateManager_tDAE60D3E07D8A34DE82EF3FC439FB2968C4ACB47 * L_0 = __this->get_stateManager_4();
		NullCheck(L_0);
		int32_t L_1 = L_0->get_currentGameState_5();
		if (L_1)
		{
			goto IL_0025;
		}
	}
	{
		// ready = true;
		__this->set_ready_13((bool)1);
		// light.gameObject.SetActive(true);
		Light_tA2F349FE839781469A0344CF6039B51512394275 * L_2 = __this->get_light_8();
		NullCheck(L_2);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_3;
		L_3 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_2, /*hidden argument*/NULL);
		NullCheck(L_3);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_3, (bool)1, /*hidden argument*/NULL);
	}

IL_0025:
	{
		// }
		return;
	}
}
// System.Void Enemy::FixedUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enemy_FixedUpdate_m66DA7C35B28A130AF6359CE888D789DC85FF18FE (Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627 * __this, const RuntimeMethod* method)
{
	{
		// if (stateManager.currentGameState == GameState.GameActive)
		StateManager_tDAE60D3E07D8A34DE82EF3FC439FB2968C4ACB47 * L_0 = __this->get_stateManager_4();
		NullCheck(L_0);
		int32_t L_1 = L_0->get_currentGameState_5();
		if ((!(((uint32_t)L_1) == ((uint32_t)2))))
		{
			goto IL_005f;
		}
	}
	{
		// if(ready)
		bool L_2 = __this->get_ready_13();
		if (!L_2)
		{
			goto IL_001d;
		}
	}
	{
		// HandleMovement();
		Enemy_HandleMovement_m6376AE4694DA3DA4A81163F692BF5BB05D72B975(__this, /*hidden argument*/NULL);
		// }
		return;
	}

IL_001d:
	{
		// if (!spawnTimerStarted)
		bool L_3 = __this->get_spawnTimerStarted_12();
		if (L_3)
		{
			goto IL_003f;
		}
	}
	{
		// spawnTimerStarted = true;
		__this->set_spawnTimerStarted_12((bool)1);
		// timeToSpawn = Time.time + spawnTime;
		float L_4;
		L_4 = Time_get_time_m1A186074B1FCD448AB13A4B9D715AB9ED0B40844(/*hidden argument*/NULL);
		float L_5 = __this->get_spawnTime_10();
		__this->set_timeToSpawn_11(((float)il2cpp_codegen_add((float)L_4, (float)L_5)));
		// }
		return;
	}

IL_003f:
	{
		// if (Time.time >= timeToSpawn)
		float L_6;
		L_6 = Time_get_time_m1A186074B1FCD448AB13A4B9D715AB9ED0B40844(/*hidden argument*/NULL);
		float L_7 = __this->get_timeToSpawn_11();
		if ((!(((float)L_6) >= ((float)L_7))))
		{
			goto IL_005f;
		}
	}
	{
		// ready = true;
		__this->set_ready_13((bool)1);
		// light.enabled = true;
		Light_tA2F349FE839781469A0344CF6039B51512394275 * L_8 = __this->get_light_8();
		NullCheck(L_8);
		Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32(L_8, (bool)1, /*hidden argument*/NULL);
	}

IL_005f:
	{
		// }
		return;
	}
}
// System.Void Enemy::HandleMovement()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enemy_HandleMovement_m6376AE4694DA3DA4A81163F692BF5BB05D72B975 (Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC8E73DC4EDC0AEBC71ACEDC10E8B5EF7D26C8764);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70);
		s_Il2CppMethodInitialized = true;
	}
	RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89  V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		// animator.SetBool("moving", true);
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_0 = __this->get_animator_6();
		NullCheck(L_0);
		Animator_SetBool_m34E2E9785A47A3AE94E804004425C333C36CCD43(L_0, _stringLiteralC8E73DC4EDC0AEBC71ACEDC10E8B5EF7D26C8764, (bool)1, /*hidden argument*/NULL);
		// rigidbody.velocity = transform.forward * speed;
		Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * L_1 = __this->get_rigidbody_7();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_2;
		L_2 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_2);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3;
		L_3 = Transform_get_forward_mD850B9ECF892009E3485408DC0D375165B7BF053(L_2, /*hidden argument*/NULL);
		float L_4 = __this->get_speed_9();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5;
		L_5 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_3, L_4, /*hidden argument*/NULL);
		NullCheck(L_1);
		Rigidbody_set_velocity_m8DC0988916EB38DFD7D4584830B41D79140BF18D(L_1, L_5, /*hidden argument*/NULL);
		// if(Physics.Raycast(transform.position, transform.forward, out hit, 6f, ~0, QueryTriggerInteraction.Ignore))
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_6;
		L_6 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_6);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_7;
		L_7 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_6, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_8;
		L_8 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_8);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9;
		L_9 = Transform_get_forward_mD850B9ECF892009E3485408DC0D375165B7BF053(L_8, /*hidden argument*/NULL);
		bool L_10;
		L_10 = Physics_Raycast_m2EA572B4613E1BD7DBAA299511CFD2DBA179A163(L_7, L_9, (RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89 *)(&V_0), (6.0f), (-1), 1, /*hidden argument*/NULL);
		if (!L_10)
		{
			goto IL_00fa;
		}
	}
	{
		// if (hit.transform.tag == "Player")
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_11;
		L_11 = RaycastHit_get_transform_m2DD983DBD3602DE848DE287EE5233FD02EEC608D((RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89 *)(&V_0), /*hidden argument*/NULL);
		NullCheck(L_11);
		String_t* L_12;
		L_12 = Component_get_tag_m77B4A7356E58F985216CC53966F7A9699454803E(L_11, /*hidden argument*/NULL);
		bool L_13;
		L_13 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_12, _stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70, /*hidden argument*/NULL);
		if (L_13)
		{
			goto IL_00fa;
		}
	}
	{
		// else if (hit.distance < 0.55f)
		float L_14;
		L_14 = RaycastHit_get_distance_m85FCA98D7957C3BF1D449CA1B48C116CCD6226FA((RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89 *)(&V_0), /*hidden argument*/NULL);
		if ((!(((float)L_14) < ((float)(0.550000012f)))))
		{
			goto IL_00ac;
		}
	}
	{
		// int turnAmount = UnityEngine.Random.Range(1, 5);
		int32_t L_15;
		L_15 = Random_Range_m4B3A0037ACA057F33C94508F908546B9317D996A(1, 5, /*hidden argument*/NULL);
		V_1 = L_15;
		// transform.rotation = Quaternion.Euler(0, 90 * turnAmount, 0);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_16;
		L_16 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		int32_t L_17 = V_1;
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_18;
		L_18 = Quaternion_Euler_m37BF99FFFA09F4B3F83DC066641B82C59B19A9C3((0.0f), ((float)((float)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)90), (int32_t)L_17)))), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_16);
		Transform_set_rotation_m1B5F3D4CE984AB31254615C9C71B0E54978583B4(L_16, L_18, /*hidden argument*/NULL);
		// }
		return;
	}

IL_00ac:
	{
		// else if (hit.distance - Utils.RoundToInt(hit.distance) <= 0.005f)
		float L_19;
		L_19 = RaycastHit_get_distance_m85FCA98D7957C3BF1D449CA1B48C116CCD6226FA((RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89 *)(&V_0), /*hidden argument*/NULL);
		float L_20;
		L_20 = RaycastHit_get_distance_m85FCA98D7957C3BF1D449CA1B48C116CCD6226FA((RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89 *)(&V_0), /*hidden argument*/NULL);
		int32_t L_21;
		L_21 = Utils_RoundToInt_m1CC53FAE2287620FB71F7DD6F6B4E9E75F3D514F(L_20, /*hidden argument*/NULL);
		if ((!(((float)((float)il2cpp_codegen_subtract((float)L_19, (float)((float)((float)L_21))))) <= ((float)(0.00499999989f)))))
		{
			goto IL_00fa;
		}
	}
	{
		// int chance = UnityEngine.Random.Range(1, 100);
		int32_t L_22;
		L_22 = Random_Range_m4B3A0037ACA057F33C94508F908546B9317D996A(1, ((int32_t)100), /*hidden argument*/NULL);
		// if (chance <= 5)
		if ((((int32_t)L_22) > ((int32_t)5)))
		{
			goto IL_00fa;
		}
	}
	{
		// int turnAmount = UnityEngine.Random.Range(1, 5);
		int32_t L_23;
		L_23 = Random_Range_m4B3A0037ACA057F33C94508F908546B9317D996A(1, 5, /*hidden argument*/NULL);
		V_2 = L_23;
		// transform.rotation = Quaternion.Euler(0, 90 * turnAmount, 0);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_24;
		L_24 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		int32_t L_25 = V_2;
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_26;
		L_26 = Quaternion_Euler_m37BF99FFFA09F4B3F83DC066641B82C59B19A9C3((0.0f), ((float)((float)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)90), (int32_t)L_25)))), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_24);
		Transform_set_rotation_m1B5F3D4CE984AB31254615C9C71B0E54978583B4(L_24, L_26, /*hidden argument*/NULL);
	}

IL_00fa:
	{
		// }
		return;
	}
}
// System.Void Enemy::OnCollisionEnter(UnityEngine.Collision)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enemy_OnCollisionEnter_mE8D80BA64A59FF9208672564BF6E8414505C9E35 (Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627 * __this, Collision_tDC11F9B3834FD25DEB8C7DD1C51B635D240BBBF0 * ___collision0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisPlayer_t5689617909B48F7640EA0892D85C92C13CC22C6F_m82212DD756C5F3A2B4844722FD1EE504E9AAD906_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC8E73DC4EDC0AEBC71ACEDC10E8B5EF7D26C8764);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(collision.collider.tag == "Player" && ready)
		Collision_tDC11F9B3834FD25DEB8C7DD1C51B635D240BBBF0 * L_0 = ___collision0;
		NullCheck(L_0);
		Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * L_1;
		L_1 = Collision_get_collider_m0AC4446E6B9168A0FB19DA376559C812E43779F8(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		String_t* L_2;
		L_2 = Component_get_tag_m77B4A7356E58F985216CC53966F7A9699454803E(L_1, /*hidden argument*/NULL);
		bool L_3;
		L_3 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_2, _stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0050;
		}
	}
	{
		bool L_4 = __this->get_ready_13();
		if (!L_4)
		{
			goto IL_0050;
		}
	}
	{
		// stateManager.gameManager.OnPlayerKilled(collision.gameObject.GetComponent<Player>().playerBrain);
		StateManager_tDAE60D3E07D8A34DE82EF3FC439FB2968C4ACB47 * L_5 = __this->get_stateManager_4();
		NullCheck(L_5);
		GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * L_6 = L_5->get_gameManager_4();
		Collision_tDC11F9B3834FD25DEB8C7DD1C51B635D240BBBF0 * L_7 = ___collision0;
		NullCheck(L_7);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_8;
		L_8 = Collision_get_gameObject_m5682F872FD28419AA36F0651CE8B19825A21859D(L_7, /*hidden argument*/NULL);
		NullCheck(L_8);
		Player_t5689617909B48F7640EA0892D85C92C13CC22C6F * L_9;
		L_9 = GameObject_GetComponent_TisPlayer_t5689617909B48F7640EA0892D85C92C13CC22C6F_m82212DD756C5F3A2B4844722FD1EE504E9AAD906(L_8, /*hidden argument*/GameObject_GetComponent_TisPlayer_t5689617909B48F7640EA0892D85C92C13CC22C6F_m82212DD756C5F3A2B4844722FD1EE504E9AAD906_RuntimeMethod_var);
		NullCheck(L_9);
		PlayerBrain_t8E1560D2B1590AF0ABC355B852E846F3FC4A0A47 * L_10 = L_9->get_playerBrain_5();
		NullCheck(L_6);
		GameManager_OnPlayerKilled_mF13E0E5918806D9F9D5518A07014B2E8ACC59043(L_6, L_10, /*hidden argument*/NULL);
		// animator.SetBool("moving", false);
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_11 = __this->get_animator_6();
		NullCheck(L_11);
		Animator_SetBool_m34E2E9785A47A3AE94E804004425C333C36CCD43(L_11, _stringLiteralC8E73DC4EDC0AEBC71ACEDC10E8B5EF7D26C8764, (bool)0, /*hidden argument*/NULL);
	}

IL_0050:
	{
		// }
		return;
	}
}
// System.Void Enemy::OnDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enemy_OnDestroy_mDCB05B4A7AE80D98E9F99470CAEFBB13F2BC6A94 (Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627 * __this, const RuntimeMethod* method)
{
	{
		// enemyManager.RemoveEnemy(this);
		EnemyManager_t0C705BD8A8A466A5681EA2FD18CB057B361036E1 * L_0 = __this->get_enemyManager_5();
		NullCheck(L_0);
		EnemyManager_RemoveEnemy_m7DF5FE498182D20BC2D2AD14364BEC1042130B25(L_0, __this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Enemy::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enemy__ctor_m3C82F8269DE4132408E15B523907244771640734 (Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627 * __this, const RuntimeMethod* method)
{
	{
		// public float speed = 2f;
		__this->set_speed_9((2.0f));
		// public float spawnTime = 3f;
		__this->set_spawnTime_10((3.0f));
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
// System.Void EnemyManager::AddEnemy(Enemy)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemyManager_AddEnemy_mC3C2806EF32629BC37416428812D1EB9993E88EF (EnemyManager_t0C705BD8A8A466A5681EA2FD18CB057B361036E1 * __this, Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627 * ___enemy0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m51152AE1B99DCCA528E426B5AB47C84CA9CE03BC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Contains_m2D3953DEB84CD5622D7FBE02FB7EAFD31276450B_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!spawnedEnemies.Contains(enemy))
		List_1_tC094F21B05965C2E6F7256CF752F1F5ACEE0518C * L_0 = __this->get_spawnedEnemies_5();
		Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627 * L_1 = ___enemy0;
		NullCheck(L_0);
		bool L_2;
		L_2 = List_1_Contains_m2D3953DEB84CD5622D7FBE02FB7EAFD31276450B(L_0, L_1, /*hidden argument*/List_1_Contains_m2D3953DEB84CD5622D7FBE02FB7EAFD31276450B_RuntimeMethod_var);
		if (L_2)
		{
			goto IL_001a;
		}
	}
	{
		// spawnedEnemies.Add(enemy);
		List_1_tC094F21B05965C2E6F7256CF752F1F5ACEE0518C * L_3 = __this->get_spawnedEnemies_5();
		Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627 * L_4 = ___enemy0;
		NullCheck(L_3);
		List_1_Add_m51152AE1B99DCCA528E426B5AB47C84CA9CE03BC(L_3, L_4, /*hidden argument*/List_1_Add_m51152AE1B99DCCA528E426B5AB47C84CA9CE03BC_RuntimeMethod_var);
	}

IL_001a:
	{
		// }
		return;
	}
}
// System.Void EnemyManager::RemoveEnemy(Enemy)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemyManager_RemoveEnemy_m7DF5FE498182D20BC2D2AD14364BEC1042130B25 (EnemyManager_t0C705BD8A8A466A5681EA2FD18CB057B361036E1 * __this, Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627 * ___enemy0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Contains_m2D3953DEB84CD5622D7FBE02FB7EAFD31276450B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Remove_m279C015886B9A5635C788A2ABDB7325CEE8652C4_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (spawnedEnemies.Contains(enemy))
		List_1_tC094F21B05965C2E6F7256CF752F1F5ACEE0518C * L_0 = __this->get_spawnedEnemies_5();
		Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627 * L_1 = ___enemy0;
		NullCheck(L_0);
		bool L_2;
		L_2 = List_1_Contains_m2D3953DEB84CD5622D7FBE02FB7EAFD31276450B(L_0, L_1, /*hidden argument*/List_1_Contains_m2D3953DEB84CD5622D7FBE02FB7EAFD31276450B_RuntimeMethod_var);
		if (!L_2)
		{
			goto IL_001b;
		}
	}
	{
		// spawnedEnemies.Remove(enemy);
		List_1_tC094F21B05965C2E6F7256CF752F1F5ACEE0518C * L_3 = __this->get_spawnedEnemies_5();
		Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627 * L_4 = ___enemy0;
		NullCheck(L_3);
		bool L_5;
		L_5 = List_1_Remove_m279C015886B9A5635C788A2ABDB7325CEE8652C4(L_3, L_4, /*hidden argument*/List_1_Remove_m279C015886B9A5635C788A2ABDB7325CEE8652C4_RuntimeMethod_var);
	}

IL_001b:
	{
		// }
		return;
	}
}
// System.Void EnemyManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemyManager__ctor_mBDFE0474595BA9BB75EA8A31AD431DD91E7EB250 (EnemyManager_t0C705BD8A8A466A5681EA2FD18CB057B361036E1 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m264424C12AE2901EAD718720F579BDA200FCC721_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m859B0EE8491FDDEB1A3F7115D334B863E025BBC8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tC094F21B05965C2E6F7256CF752F1F5ACEE0518C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public List<GameObject> enemyTypes = new List<GameObject>();
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_0 = (List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 *)il2cpp_codegen_object_new(List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5_il2cpp_TypeInfo_var);
		List_1__ctor_m859B0EE8491FDDEB1A3F7115D334B863E025BBC8(L_0, /*hidden argument*/List_1__ctor_m859B0EE8491FDDEB1A3F7115D334B863E025BBC8_RuntimeMethod_var);
		__this->set_enemyTypes_4(L_0);
		// public List<Enemy> spawnedEnemies = new List<Enemy>();
		List_1_tC094F21B05965C2E6F7256CF752F1F5ACEE0518C * L_1 = (List_1_tC094F21B05965C2E6F7256CF752F1F5ACEE0518C *)il2cpp_codegen_object_new(List_1_tC094F21B05965C2E6F7256CF752F1F5ACEE0518C_il2cpp_TypeInfo_var);
		List_1__ctor_m264424C12AE2901EAD718720F579BDA200FCC721(L_1, /*hidden argument*/List_1__ctor_m264424C12AE2901EAD718720F579BDA200FCC721_RuntimeMethod_var);
		__this->set_spawnedEnemies_5(L_1);
		ScriptableObject__ctor_m8DAE6CDCFA34E16F2543B02CC3669669FF203063(__this, /*hidden argument*/NULL);
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
// System.Void FloatToTextSetter::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FloatToTextSetter_OnEnable_mE2AD76A3607031EFB44F18FD818BF6B5BF359D99 (FloatToTextSetter_tC5A1D0787A5F3D2B2AB00A294EFFC7F65FA5A21E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	String_t* G_B2_0 = NULL;
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * G_B2_1 = NULL;
	String_t* G_B1_0 = NULL;
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * G_B1_1 = NULL;
	{
		// Text.text = Variable.value + "";
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_0 = __this->get_Text_4();
		FloatVariable_t54F75E496629023CDD9A6E3ADC14072AB3C2E275 * L_1 = __this->get_Variable_5();
		NullCheck(L_1);
		float* L_2 = L_1->get_address_of_value_4();
		String_t* L_3;
		L_3 = Single_ToString_m80E7ABED4F4D73F2BE19DDB80D3D92FCD8DFA010((float*)L_2, /*hidden argument*/NULL);
		String_t* L_4 = L_3;
		G_B1_0 = L_4;
		G_B1_1 = L_0;
		if (L_4)
		{
			G_B2_0 = L_4;
			G_B2_1 = L_0;
			goto IL_001f;
		}
	}
	{
		G_B2_0 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		G_B2_1 = G_B1_1;
	}

IL_001f:
	{
		NullCheck(G_B2_1);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, G_B2_1, G_B2_0);
		// }
		return;
	}
}
// System.Void FloatToTextSetter::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FloatToTextSetter_Update_m6AAAE2EB2B5F89227FC4E16BB22BAEEA394551E9 (FloatToTextSetter_tC5A1D0787A5F3D2B2AB00A294EFFC7F65FA5A21E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	String_t* G_B4_0 = NULL;
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * G_B4_1 = NULL;
	String_t* G_B3_0 = NULL;
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * G_B3_1 = NULL;
	{
		// if (AlwaysUpdate && Variable)
		bool L_0 = __this->get_AlwaysUpdate_6();
		if (!L_0)
		{
			goto IL_0039;
		}
	}
	{
		FloatVariable_t54F75E496629023CDD9A6E3ADC14072AB3C2E275 * L_1 = __this->get_Variable_5();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499(L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0039;
		}
	}
	{
		// Text.text = Variable.value + "";
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_3 = __this->get_Text_4();
		FloatVariable_t54F75E496629023CDD9A6E3ADC14072AB3C2E275 * L_4 = __this->get_Variable_5();
		NullCheck(L_4);
		float* L_5 = L_4->get_address_of_value_4();
		String_t* L_6;
		L_6 = Single_ToString_m80E7ABED4F4D73F2BE19DDB80D3D92FCD8DFA010((float*)L_5, /*hidden argument*/NULL);
		String_t* L_7 = L_6;
		G_B3_0 = L_7;
		G_B3_1 = L_3;
		if (L_7)
		{
			G_B4_0 = L_7;
			G_B4_1 = L_3;
			goto IL_0034;
		}
	}
	{
		G_B4_0 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		G_B4_1 = G_B3_1;
	}

IL_0034:
	{
		NullCheck(G_B4_1);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, G_B4_1, G_B4_0);
	}

IL_0039:
	{
		// }
		return;
	}
}
// System.Void FloatToTextSetter::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FloatToTextSetter__ctor_m2637FE120B1CC8B4DA96FD11025754ED32566F38 (FloatToTextSetter_tC5A1D0787A5F3D2B2AB00A294EFFC7F65FA5A21E * __this, const RuntimeMethod* method)
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
// System.Void FloatVariable::SetValue(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FloatVariable_SetValue_mCBD8E63F7CFA5969C1D0214CFAC72DE5EE245096 (FloatVariable_t54F75E496629023CDD9A6E3ADC14072AB3C2E275 * __this, float ____value0, const RuntimeMethod* method)
{
	{
		// value = _value;
		float L_0 = ____value0;
		__this->set_value_4(L_0);
		// }
		return;
	}
}
// System.Void FloatVariable::SetValue(FloatVariable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FloatVariable_SetValue_mE613D5DCC021B5E2056980A29527A3F83D7E6183 (FloatVariable_t54F75E496629023CDD9A6E3ADC14072AB3C2E275 * __this, FloatVariable_t54F75E496629023CDD9A6E3ADC14072AB3C2E275 * ____value0, const RuntimeMethod* method)
{
	{
		// value = _value.value;
		FloatVariable_t54F75E496629023CDD9A6E3ADC14072AB3C2E275 * L_0 = ____value0;
		NullCheck(L_0);
		float L_1 = L_0->get_value_4();
		__this->set_value_4(L_1);
		// }
		return;
	}
}
// System.Void FloatVariable::ApplyChange(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FloatVariable_ApplyChange_m7D1FE476C3A61911A3B4889AD47F91F2E6C696E6 (FloatVariable_t54F75E496629023CDD9A6E3ADC14072AB3C2E275 * __this, float ___amount0, const RuntimeMethod* method)
{
	{
		// value += amount;
		float L_0 = __this->get_value_4();
		float L_1 = ___amount0;
		__this->set_value_4(((float)il2cpp_codegen_add((float)L_0, (float)L_1)));
		// }
		return;
	}
}
// System.Void FloatVariable::ApplyChange(FloatVariable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FloatVariable_ApplyChange_m3B3E3684E787747CEFDDCD6869854381D435EBCA (FloatVariable_t54F75E496629023CDD9A6E3ADC14072AB3C2E275 * __this, FloatVariable_t54F75E496629023CDD9A6E3ADC14072AB3C2E275 * ___amount0, const RuntimeMethod* method)
{
	{
		// value += amount.value;
		float L_0 = __this->get_value_4();
		FloatVariable_t54F75E496629023CDD9A6E3ADC14072AB3C2E275 * L_1 = ___amount0;
		NullCheck(L_1);
		float L_2 = L_1->get_value_4();
		__this->set_value_4(((float)il2cpp_codegen_add((float)L_0, (float)L_2)));
		// }
		return;
	}
}
// System.Void FloatVariable::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FloatVariable__ctor_m43C6695EAFD390CC34D2E37C1844AF71E378BC71 (FloatVariable_t54F75E496629023CDD9A6E3ADC14072AB3C2E275 * __this, const RuntimeMethod* method)
{
	{
		ScriptableObject__ctor_m8DAE6CDCFA34E16F2543B02CC3669669FF203063(__this, /*hidden argument*/NULL);
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
// System.Void CoffeeTools.Events.GameEvent::Raise()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameEvent_Raise_m311FA505C84F4ADB96991CC522B5AA85BED59966 (GameEvent_tFC086B6DBF978FD9C391C201595AA84D9981B491 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m92F22AFC554852703FDEBB541CD7A42F52B20C05_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m836169963115FD20D6888445536301674670247A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// for(int i = eventListeners.Count -1; i >= 0; i--)
		List_1_tD5261AAFAEBC43CA1ABF9DED36961E42BF380A18 * L_0 = __this->get_eventListeners_4();
		NullCheck(L_0);
		int32_t L_1;
		L_1 = List_1_get_Count_m92F22AFC554852703FDEBB541CD7A42F52B20C05_inline(L_0, /*hidden argument*/List_1_get_Count_m92F22AFC554852703FDEBB541CD7A42F52B20C05_RuntimeMethod_var);
		V_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_1, (int32_t)1));
		goto IL_0025;
	}

IL_0010:
	{
		// eventListeners[i].OnEventRaised();
		List_1_tD5261AAFAEBC43CA1ABF9DED36961E42BF380A18 * L_2 = __this->get_eventListeners_4();
		int32_t L_3 = V_0;
		NullCheck(L_2);
		GameEventListener_t9EA3000DEE17ADBCD810A15E9E8A2830A3AE478E * L_4;
		L_4 = List_1_get_Item_m836169963115FD20D6888445536301674670247A_inline(L_2, L_3, /*hidden argument*/List_1_get_Item_m836169963115FD20D6888445536301674670247A_RuntimeMethod_var);
		NullCheck(L_4);
		GameEventListener_OnEventRaised_mF6F71FDB444EFE995876993ABA75D487C82E6BBB(L_4, /*hidden argument*/NULL);
		// for(int i = eventListeners.Count -1; i >= 0; i--)
		int32_t L_5 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_5, (int32_t)1));
	}

IL_0025:
	{
		// for(int i = eventListeners.Count -1; i >= 0; i--)
		int32_t L_6 = V_0;
		if ((((int32_t)L_6) >= ((int32_t)0)))
		{
			goto IL_0010;
		}
	}
	{
		// }
		return;
	}
}
// System.Void CoffeeTools.Events.GameEvent::RegisterListener(CoffeeTools.Events.GameEventListener)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameEvent_RegisterListener_m7659A9EC2EDE20955FDC2D7B9D9DB51D35681A61 (GameEvent_tFC086B6DBF978FD9C391C201595AA84D9981B491 * __this, GameEventListener_t9EA3000DEE17ADBCD810A15E9E8A2830A3AE478E * ___listener0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m4A165BE358C78F8844421B2A513B00E626F4B86A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Contains_m4434AEB6DFA466908E59044F4FAF32B233CE7A9C_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!eventListeners.Contains(listener))
		List_1_tD5261AAFAEBC43CA1ABF9DED36961E42BF380A18 * L_0 = __this->get_eventListeners_4();
		GameEventListener_t9EA3000DEE17ADBCD810A15E9E8A2830A3AE478E * L_1 = ___listener0;
		NullCheck(L_0);
		bool L_2;
		L_2 = List_1_Contains_m4434AEB6DFA466908E59044F4FAF32B233CE7A9C(L_0, L_1, /*hidden argument*/List_1_Contains_m4434AEB6DFA466908E59044F4FAF32B233CE7A9C_RuntimeMethod_var);
		if (L_2)
		{
			goto IL_001a;
		}
	}
	{
		// eventListeners.Add(listener);
		List_1_tD5261AAFAEBC43CA1ABF9DED36961E42BF380A18 * L_3 = __this->get_eventListeners_4();
		GameEventListener_t9EA3000DEE17ADBCD810A15E9E8A2830A3AE478E * L_4 = ___listener0;
		NullCheck(L_3);
		List_1_Add_m4A165BE358C78F8844421B2A513B00E626F4B86A(L_3, L_4, /*hidden argument*/List_1_Add_m4A165BE358C78F8844421B2A513B00E626F4B86A_RuntimeMethod_var);
	}

IL_001a:
	{
		// }
		return;
	}
}
// System.Void CoffeeTools.Events.GameEvent::UnregisterListener(CoffeeTools.Events.GameEventListener)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameEvent_UnregisterListener_m1DFC2392313AEC08E9F38DC56C9AA6FC651D1F28 (GameEvent_tFC086B6DBF978FD9C391C201595AA84D9981B491 * __this, GameEventListener_t9EA3000DEE17ADBCD810A15E9E8A2830A3AE478E * ___listener0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Contains_m4434AEB6DFA466908E59044F4FAF32B233CE7A9C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Remove_mBF46B164D2FF404408FFA5A6BBF8AB1F95C1EEDA_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (eventListeners.Contains(listener))
		List_1_tD5261AAFAEBC43CA1ABF9DED36961E42BF380A18 * L_0 = __this->get_eventListeners_4();
		GameEventListener_t9EA3000DEE17ADBCD810A15E9E8A2830A3AE478E * L_1 = ___listener0;
		NullCheck(L_0);
		bool L_2;
		L_2 = List_1_Contains_m4434AEB6DFA466908E59044F4FAF32B233CE7A9C(L_0, L_1, /*hidden argument*/List_1_Contains_m4434AEB6DFA466908E59044F4FAF32B233CE7A9C_RuntimeMethod_var);
		if (!L_2)
		{
			goto IL_001b;
		}
	}
	{
		// eventListeners.Remove(listener);
		List_1_tD5261AAFAEBC43CA1ABF9DED36961E42BF380A18 * L_3 = __this->get_eventListeners_4();
		GameEventListener_t9EA3000DEE17ADBCD810A15E9E8A2830A3AE478E * L_4 = ___listener0;
		NullCheck(L_3);
		bool L_5;
		L_5 = List_1_Remove_mBF46B164D2FF404408FFA5A6BBF8AB1F95C1EEDA(L_3, L_4, /*hidden argument*/List_1_Remove_mBF46B164D2FF404408FFA5A6BBF8AB1F95C1EEDA_RuntimeMethod_var);
	}

IL_001b:
	{
		// }
		return;
	}
}
// System.Void CoffeeTools.Events.GameEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameEvent__ctor_m56D4423FB43A64991B8E781A235F15FDAA56FB74 (GameEvent_tFC086B6DBF978FD9C391C201595AA84D9981B491 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m82F63E44C145FD28D830D98EEEB43159B62433E5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tD5261AAFAEBC43CA1ABF9DED36961E42BF380A18_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private readonly List<GameEventListener> eventListeners =
		//     new List<GameEventListener>();
		List_1_tD5261AAFAEBC43CA1ABF9DED36961E42BF380A18 * L_0 = (List_1_tD5261AAFAEBC43CA1ABF9DED36961E42BF380A18 *)il2cpp_codegen_object_new(List_1_tD5261AAFAEBC43CA1ABF9DED36961E42BF380A18_il2cpp_TypeInfo_var);
		List_1__ctor_m82F63E44C145FD28D830D98EEEB43159B62433E5(L_0, /*hidden argument*/List_1__ctor_m82F63E44C145FD28D830D98EEEB43159B62433E5_RuntimeMethod_var);
		__this->set_eventListeners_4(L_0);
		ScriptableObject__ctor_m8DAE6CDCFA34E16F2543B02CC3669669FF203063(__this, /*hidden argument*/NULL);
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
// System.Void CoffeeTools.Events.GameEventListener::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameEventListener_OnEnable_m8FA69C7571D82C39B73AAE727F2418D901A88580 (GameEventListener_t9EA3000DEE17ADBCD810A15E9E8A2830A3AE478E * __this, const RuntimeMethod* method)
{
	{
		// Event.RegisterListener(this);
		GameEvent_tFC086B6DBF978FD9C391C201595AA84D9981B491 * L_0 = __this->get_Event_4();
		NullCheck(L_0);
		GameEvent_RegisterListener_m7659A9EC2EDE20955FDC2D7B9D9DB51D35681A61(L_0, __this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void CoffeeTools.Events.GameEventListener::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameEventListener_OnDisable_m623321370266D9B93B60872E39A15319C60991CE (GameEventListener_t9EA3000DEE17ADBCD810A15E9E8A2830A3AE478E * __this, const RuntimeMethod* method)
{
	{
		// Event.UnregisterListener(this);
		GameEvent_tFC086B6DBF978FD9C391C201595AA84D9981B491 * L_0 = __this->get_Event_4();
		NullCheck(L_0);
		GameEvent_UnregisterListener_m1DFC2392313AEC08E9F38DC56C9AA6FC651D1F28(L_0, __this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void CoffeeTools.Events.GameEventListener::OnEventRaised()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameEventListener_OnEventRaised_mF6F71FDB444EFE995876993ABA75D487C82E6BBB (GameEventListener_t9EA3000DEE17ADBCD810A15E9E8A2830A3AE478E * __this, const RuntimeMethod* method)
{
	{
		// Response.Invoke();
		UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * L_0 = __this->get_Response_5();
		NullCheck(L_0);
		UnityEvent_Invoke_mDA46AA9786AD4C34211C6C6ADFB0963DFF430AF5(L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void CoffeeTools.Events.GameEventListener::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameEventListener__ctor_m498C07AA43534B11F96D92CA46750DE55BA7CC0A (GameEventListener_t9EA3000DEE17ADBCD810A15E9E8A2830A3AE478E * __this, const RuntimeMethod* method)
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
// System.Void GameManager::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_Awake_m22F42B2A82708B10F652CAD8F2E0A4767110FF30 (GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * __this, const RuntimeMethod* method)
{
	{
		// player1.gameManager = this;
		PlayerBrain_t8E1560D2B1590AF0ABC355B852E846F3FC4A0A47 * L_0 = __this->get_player1_4();
		NullCheck(L_0);
		L_0->set_gameManager_4(__this);
		// player2.gameManager = this;
		PlayerBrain_t8E1560D2B1590AF0ABC355B852E846F3FC4A0A47 * L_1 = __this->get_player2_5();
		NullCheck(L_1);
		L_1->set_gameManager_4(__this);
		// stateManager.gameManager = this;
		StateManager_tDAE60D3E07D8A34DE82EF3FC439FB2968C4ACB47 * L_2 = __this->get_stateManager_6();
		NullCheck(L_2);
		L_2->set_gameManager_4(__this);
		// stateManager.currentGameState = GameState.PreGame;
		StateManager_tDAE60D3E07D8A34DE82EF3FC439FB2968C4ACB47 * L_3 = __this->get_stateManager_6();
		NullCheck(L_3);
		L_3->set_currentGameState_5(0);
		// roundTimer.value = 0;
		FloatVariable_t54F75E496629023CDD9A6E3ADC14072AB3C2E275 * L_4 = __this->get_roundTimer_18();
		NullCheck(L_4);
		L_4->set_value_4((0.0f));
		// countdownTimer = 3;
		__this->set_countdownTimer_11(3);
		// escalationTier.value = 1;
		FloatVariable_t54F75E496629023CDD9A6E3ADC14072AB3C2E275 * L_5 = __this->get_escalationTier_24();
		NullCheck(L_5);
		L_5->set_value_4((1.0f));
		// nextEscalationTick = escalationStartTime;
		float L_6 = __this->get_escalationStartTime_21();
		__this->set_nextEscalationTick_23(L_6);
		// if(gameMode == GameMode.Singleplayer)
		int32_t L_7 = __this->get_gameMode_19();
		if (L_7)
		{
			goto IL_0095;
		}
	}
	{
		// player1.playerScore.value = 0;
		PlayerBrain_t8E1560D2B1590AF0ABC355B852E846F3FC4A0A47 * L_8 = __this->get_player1_4();
		NullCheck(L_8);
		FloatVariable_t54F75E496629023CDD9A6E3ADC14072AB3C2E275 * L_9 = L_8->get_playerScore_7();
		NullCheck(L_9);
		L_9->set_value_4((0.0f));
		// player2.playerScore.value = 0;
		PlayerBrain_t8E1560D2B1590AF0ABC355B852E846F3FC4A0A47 * L_10 = __this->get_player2_5();
		NullCheck(L_10);
		FloatVariable_t54F75E496629023CDD9A6E3ADC14072AB3C2E275 * L_11 = L_10->get_playerScore_7();
		NullCheck(L_11);
		L_11->set_value_4((0.0f));
	}

IL_0095:
	{
		// }
		return;
	}
}
// System.Void GameManager::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_Start_m26461AEF27E44DB8FECCBC19D6C9E228B658BF8E (GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * __this, const RuntimeMethod* method)
{
	{
		// SpawnRandomBlocks(startingRandomizedBlocks);
		float L_0 = __this->get_startingRandomizedBlocks_20();
		GameManager_SpawnRandomBlocks_mDE809BEAC1E59B316DA317409745FD80F778B83D(__this, L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void GameManager::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_Update_mC9303BA7C3117BD861F49F8E36151CC52117E6C1 (GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m99FAEDD9C024582566F281EF9D4051695FBDB0A5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* G_B4_0 = NULL;
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * G_B4_1 = NULL;
	String_t* G_B3_0 = NULL;
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * G_B3_1 = NULL;
	{
		// if (stateManager.currentGameState == GameState.PreGame && PlayersReady())
		StateManager_tDAE60D3E07D8A34DE82EF3FC439FB2968C4ACB47 * L_0 = __this->get_stateManager_6();
		NullCheck(L_0);
		int32_t L_1 = L_0->get_currentGameState_5();
		if (L_1)
		{
			goto IL_0074;
		}
	}
	{
		bool L_2;
		L_2 = GameManager_PlayersReady_m27A793AE3C1C0C6B30920678BC47ADBE9AAA2F0A(__this, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0074;
		}
	}
	{
		// stateManager.currentGameState = GameState.PlayersReady;
		StateManager_tDAE60D3E07D8A34DE82EF3FC439FB2968C4ACB47 * L_3 = __this->get_stateManager_6();
		NullCheck(L_3);
		L_3->set_currentGameState_5(1);
		// nextCountdownTick = Time.time + 1;
		float L_4;
		L_4 = Time_get_time_m1A186074B1FCD448AB13A4B9D715AB9ED0B40844(/*hidden argument*/NULL);
		__this->set_nextCountdownTick_12(((float)il2cpp_codegen_add((float)L_4, (float)(1.0f))));
		// gameStatusText.gameObject.SetActive(false);
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_5 = __this->get_gameStatusText_9();
		NullCheck(L_5);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_6;
		L_6 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_5, /*hidden argument*/NULL);
		NullCheck(L_6);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_6, (bool)0, /*hidden argument*/NULL);
		// audioSource.PlayOneShot(countdownTick);
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_7 = __this->get_audioSource_13();
		AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * L_8 = __this->get_countdownTick_14();
		NullCheck(L_7);
		AudioSource_PlayOneShot_mA90B136041A61C30909301D45D0315088CA7D796(L_7, L_8, /*hidden argument*/NULL);
		// countdownTimerText.text = countdownTimer + "";
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_9 = __this->get_countdownTimerText_10();
		int32_t* L_10 = __this->get_address_of_countdownTimer_11();
		String_t* L_11;
		L_11 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)L_10, /*hidden argument*/NULL);
		String_t* L_12 = L_11;
		G_B3_0 = L_12;
		G_B3_1 = L_9;
		if (L_12)
		{
			G_B4_0 = L_12;
			G_B4_1 = L_9;
			goto IL_006e;
		}
	}
	{
		G_B4_0 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		G_B4_1 = G_B3_1;
	}

IL_006e:
	{
		NullCheck(G_B4_1);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, G_B4_1, G_B4_0);
		// }
		return;
	}

IL_0074:
	{
		// else if (stateManager.currentGameState == GameState.PlayersReady)
		StateManager_tDAE60D3E07D8A34DE82EF3FC439FB2968C4ACB47 * L_13 = __this->get_stateManager_6();
		NullCheck(L_13);
		int32_t L_14 = L_13->get_currentGameState_5();
		if ((!(((uint32_t)L_14) == ((uint32_t)1))))
		{
			goto IL_00aa;
		}
	}
	{
		// if (Time.time > nextCountdownTick)
		float L_15;
		L_15 = Time_get_time_m1A186074B1FCD448AB13A4B9D715AB9ED0B40844(/*hidden argument*/NULL);
		float L_16 = __this->get_nextCountdownTick_12();
		if ((!(((float)L_15) > ((float)L_16))))
		{
			goto IL_0154;
		}
	}
	{
		// CountdownTick();
		GameManager_CountdownTick_m6A8EB3E91153AEC2B5BF2CC95D9E098FAF7DA2CD(__this, /*hidden argument*/NULL);
		// nextCountdownTick = Time.time + 1;
		float L_17;
		L_17 = Time_get_time_m1A186074B1FCD448AB13A4B9D715AB9ED0B40844(/*hidden argument*/NULL);
		__this->set_nextCountdownTick_12(((float)il2cpp_codegen_add((float)L_17, (float)(1.0f))));
		// }
		return;
	}

IL_00aa:
	{
		// else if (stateManager.currentGameState == GameState.GameActive)
		StateManager_tDAE60D3E07D8A34DE82EF3FC439FB2968C4ACB47 * L_18 = __this->get_stateManager_6();
		NullCheck(L_18);
		int32_t L_19 = L_18->get_currentGameState_5();
		if ((!(((uint32_t)L_19) == ((uint32_t)2))))
		{
			goto IL_0110;
		}
	}
	{
		// roundTimer.value = Utils.RoundToInt(Time.time - roundStartTime);
		FloatVariable_t54F75E496629023CDD9A6E3ADC14072AB3C2E275 * L_20 = __this->get_roundTimer_18();
		float L_21;
		L_21 = Time_get_time_m1A186074B1FCD448AB13A4B9D715AB9ED0B40844(/*hidden argument*/NULL);
		float L_22 = __this->get_roundStartTime_17();
		int32_t L_23;
		L_23 = Utils_RoundToInt_m1CC53FAE2287620FB71F7DD6F6B4E9E75F3D514F(((float)il2cpp_codegen_subtract((float)L_21, (float)L_22)), /*hidden argument*/NULL);
		NullCheck(L_20);
		L_20->set_value_4(((float)((float)L_23)));
		// if(roundTimer.value > nextEscalationTick)
		FloatVariable_t54F75E496629023CDD9A6E3ADC14072AB3C2E275 * L_24 = __this->get_roundTimer_18();
		NullCheck(L_24);
		float L_25 = L_24->get_value_4();
		float L_26 = __this->get_nextEscalationTick_23();
		if ((!(((float)L_25) > ((float)L_26))))
		{
			goto IL_00ef;
		}
	}
	{
		// TriggerEscalation();
		GameManager_TriggerEscalation_m5725A441EA85CE35F5218F67934498330526B0AD(__this, /*hidden argument*/NULL);
		// }
		return;
	}

IL_00ef:
	{
		// else if(gameMode == GameMode.Singleplayer && enemyManager.spawnedEnemies.Count == 0)
		int32_t L_27 = __this->get_gameMode_19();
		if (L_27)
		{
			goto IL_0154;
		}
	}
	{
		EnemyManager_t0C705BD8A8A466A5681EA2FD18CB057B361036E1 * L_28 = __this->get_enemyManager_8();
		NullCheck(L_28);
		List_1_tC094F21B05965C2E6F7256CF752F1F5ACEE0518C * L_29 = L_28->get_spawnedEnemies_5();
		NullCheck(L_29);
		int32_t L_30;
		L_30 = List_1_get_Count_m99FAEDD9C024582566F281EF9D4051695FBDB0A5_inline(L_29, /*hidden argument*/List_1_get_Count_m99FAEDD9C024582566F281EF9D4051695FBDB0A5_RuntimeMethod_var);
		if (L_30)
		{
			goto IL_0154;
		}
	}
	{
		// TriggerEscalation();
		GameManager_TriggerEscalation_m5725A441EA85CE35F5218F67934498330526B0AD(__this, /*hidden argument*/NULL);
		// }
		return;
	}

IL_0110:
	{
		// else if (stateManager.currentGameState == GameState.GameOver)
		StateManager_tDAE60D3E07D8A34DE82EF3FC439FB2968C4ACB47 * L_31 = __this->get_stateManager_6();
		NullCheck(L_31);
		int32_t L_32 = L_31->get_currentGameState_5();
		if ((!(((uint32_t)L_32) == ((uint32_t)3))))
		{
			goto IL_0154;
		}
	}
	{
		// if (Input.GetKey(player1.bombKey) || Input.GetKey(player2.bombKey))
		PlayerBrain_t8E1560D2B1590AF0ABC355B852E846F3FC4A0A47 * L_33 = __this->get_player1_4();
		NullCheck(L_33);
		int32_t L_34 = L_33->get_bombKey_13();
		bool L_35;
		L_35 = Input_GetKey_mFDD450A4C61F2930928B12287FFBD1ACCB71E429(L_34, /*hidden argument*/NULL);
		if (L_35)
		{
			goto IL_0142;
		}
	}
	{
		PlayerBrain_t8E1560D2B1590AF0ABC355B852E846F3FC4A0A47 * L_36 = __this->get_player2_5();
		NullCheck(L_36);
		int32_t L_37 = L_36->get_bombKey_13();
		bool L_38;
		L_38 = Input_GetKey_mFDD450A4C61F2930928B12287FFBD1ACCB71E429(L_37, /*hidden argument*/NULL);
		if (!L_38)
		{
			goto IL_0154;
		}
	}

IL_0142:
	{
		// SceneManager.LoadScene(SceneManager.GetActiveScene().buildIndex);
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  L_39;
		L_39 = SceneManager_GetActiveScene_mB9A5037FFB576B2432D0BFEF6A161B7C4C1921A4(/*hidden argument*/NULL);
		V_0 = L_39;
		int32_t L_40;
		L_40 = Scene_get_buildIndex_mE32CE766EA0790E4636A351BA353A7FD71A11DA4((Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE *)(&V_0), /*hidden argument*/NULL);
		SceneManager_LoadScene_m5550E6368A6D0E37DACEDA3C5E4BA331836BC3C5(L_40, /*hidden argument*/NULL);
	}

IL_0154:
	{
		// }
		return;
	}
}
// System.Void GameManager::TriggerEscalation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_TriggerEscalation_m5725A441EA85CE35F5218F67934498330526B0AD (GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m6206A8F48C7A98B9CFC23A13548CB215717573BD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_5;
	memset((&V_5), 0, sizeof(V_5));
	bool V_6 = false;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_10;
	memset((&V_10), 0, sizeof(V_10));
	int32_t V_11 = 0;
	{
		// for(int i = 0; i < escalationTier.value; i++)
		V_0 = 0;
		goto IL_0100;
	}

IL_0007:
	{
		// if (gameMode == GameMode.Multiplayer)
		int32_t L_0 = __this->get_gameMode_19();
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_006c;
		}
	}
	{
		// bool bombSpawned = false;
		V_1 = (bool)0;
		// int attempts = 0;
		V_2 = 0;
		goto IL_0064;
	}

IL_0016:
	{
		// int x = Random.Range(-4, 5);
		int32_t L_1;
		L_1 = Random_Range_m4B3A0037ACA057F33C94508F908546B9317D996A(((int32_t)-4), 5, /*hidden argument*/NULL);
		V_3 = L_1;
		// int z = Random.Range(-3, 6);
		int32_t L_2;
		L_2 = Random_Range_m4B3A0037ACA057F33C94508F908546B9317D996A(((int32_t)-3), 6, /*hidden argument*/NULL);
		V_4 = L_2;
		// Vector3 position = new Vector3(x, 0, z);
		int32_t L_3 = V_3;
		int32_t L_4 = V_4;
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&V_5), ((float)((float)L_3)), (0.0f), ((float)((float)L_4)), /*hidden argument*/NULL);
		// if (PositionIsOpen(position))
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5 = V_5;
		bool L_6;
		L_6 = GameManager_PositionIsOpen_mEF759380AEB144BFC1D0CBF00183E39A59D57B68(__this, L_5, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_0059;
		}
	}
	{
		// bombSpawned = true;
		V_1 = (bool)1;
		// GameObject.Instantiate(neutralBomb, position, Quaternion.identity);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_7 = __this->get_neutralBomb_25();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8 = V_5;
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_9;
		L_9 = Quaternion_get_identity_mF2E565DBCE793A1AE6208056D42CA7C59D83A702(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_10;
		L_10 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B(L_7, L_8, L_9, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var);
	}

IL_0059:
	{
		// if (attempts > 50)
		int32_t L_11 = V_2;
		if ((((int32_t)L_11) <= ((int32_t)((int32_t)50))))
		{
			goto IL_0060;
		}
	}
	{
		// bombSpawned = true;
		V_1 = (bool)1;
	}

IL_0060:
	{
		// attempts++;
		int32_t L_12 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_12, (int32_t)1));
	}

IL_0064:
	{
		// while (!bombSpawned)
		bool L_13 = V_1;
		if (!L_13)
		{
			goto IL_0016;
		}
	}
	{
		// }
		goto IL_00fc;
	}

IL_006c:
	{
		// else if (gameMode == GameMode.Singleplayer)
		int32_t L_14 = __this->get_gameMode_19();
		if (L_14)
		{
			goto IL_00fc;
		}
	}
	{
		// bool enemySpawned = false;
		V_6 = (bool)0;
		// int attempts = 0;
		V_7 = 0;
		goto IL_00f8;
	}

IL_007f:
	{
		// int x = Random.Range(-4, 5);
		int32_t L_15;
		L_15 = Random_Range_m4B3A0037ACA057F33C94508F908546B9317D996A(((int32_t)-4), 5, /*hidden argument*/NULL);
		V_8 = L_15;
		// int z = Random.Range(-3, 6);
		int32_t L_16;
		L_16 = Random_Range_m4B3A0037ACA057F33C94508F908546B9317D996A(((int32_t)-3), 6, /*hidden argument*/NULL);
		V_9 = L_16;
		// Vector3 position = new Vector3(x, 0, z);
		int32_t L_17 = V_8;
		int32_t L_18 = V_9;
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&V_10), ((float)((float)L_17)), (0.0f), ((float)((float)L_18)), /*hidden argument*/NULL);
		// int enemyNumber = Random.Range(0, enemyManager.enemyTypes.Count);
		EnemyManager_t0C705BD8A8A466A5681EA2FD18CB057B361036E1 * L_19 = __this->get_enemyManager_8();
		NullCheck(L_19);
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_20 = L_19->get_enemyTypes_4();
		NullCheck(L_20);
		int32_t L_21;
		L_21 = List_1_get_Count_m6206A8F48C7A98B9CFC23A13548CB215717573BD_inline(L_20, /*hidden argument*/List_1_get_Count_m6206A8F48C7A98B9CFC23A13548CB215717573BD_RuntimeMethod_var);
		int32_t L_22;
		L_22 = Random_Range_m4B3A0037ACA057F33C94508F908546B9317D996A(0, L_21, /*hidden argument*/NULL);
		V_11 = L_22;
		// if (PositionIsOpen(position))
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_23 = V_10;
		bool L_24;
		L_24 = GameManager_PositionIsOpen_mEF759380AEB144BFC1D0CBF00183E39A59D57B68(__this, L_23, /*hidden argument*/NULL);
		if (!L_24)
		{
			goto IL_00e9;
		}
	}
	{
		// enemySpawned = true;
		V_6 = (bool)1;
		// GameObject.Instantiate(enemyManager.enemyTypes[enemyNumber], position, Quaternion.identity);
		EnemyManager_t0C705BD8A8A466A5681EA2FD18CB057B361036E1 * L_25 = __this->get_enemyManager_8();
		NullCheck(L_25);
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_26 = L_25->get_enemyTypes_4();
		int32_t L_27 = V_11;
		NullCheck(L_26);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_28;
		L_28 = List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_inline(L_26, L_27, /*hidden argument*/List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_RuntimeMethod_var);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_29 = V_10;
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_30;
		L_30 = Quaternion_get_identity_mF2E565DBCE793A1AE6208056D42CA7C59D83A702(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_31;
		L_31 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B(L_28, L_29, L_30, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var);
	}

IL_00e9:
	{
		// if (attempts > 50)
		int32_t L_32 = V_7;
		if ((((int32_t)L_32) <= ((int32_t)((int32_t)50))))
		{
			goto IL_00f2;
		}
	}
	{
		// enemySpawned = true;
		V_6 = (bool)1;
	}

IL_00f2:
	{
		// attempts++;
		int32_t L_33 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add((int32_t)L_33, (int32_t)1));
	}

IL_00f8:
	{
		// while (!enemySpawned)
		bool L_34 = V_6;
		if (!L_34)
		{
			goto IL_007f;
		}
	}

IL_00fc:
	{
		// for(int i = 0; i < escalationTier.value; i++)
		int32_t L_35 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_35, (int32_t)1));
	}

IL_0100:
	{
		// for(int i = 0; i < escalationTier.value; i++)
		int32_t L_36 = V_0;
		FloatVariable_t54F75E496629023CDD9A6E3ADC14072AB3C2E275 * L_37 = __this->get_escalationTier_24();
		NullCheck(L_37);
		float L_38 = L_37->get_value_4();
		if ((((float)((float)((float)L_36))) < ((float)L_38)))
		{
			goto IL_0007;
		}
	}
	{
		// nextEscalationTick += escalationFrequency;
		float L_39 = __this->get_nextEscalationTick_23();
		float L_40 = __this->get_escalationFrequency_22();
		__this->set_nextEscalationTick_23(((float)il2cpp_codegen_add((float)L_39, (float)L_40)));
		// escalationTier.value++;
		FloatVariable_t54F75E496629023CDD9A6E3ADC14072AB3C2E275 * L_41 = __this->get_escalationTier_24();
		FloatVariable_t54F75E496629023CDD9A6E3ADC14072AB3C2E275 * L_42 = L_41;
		NullCheck(L_42);
		float L_43 = L_42->get_value_4();
		NullCheck(L_42);
		L_42->set_value_4(((float)il2cpp_codegen_add((float)L_43, (float)(1.0f))));
		// }
		return;
	}
}
// System.Void GameManager::CountdownTick()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_CountdownTick_m6A8EB3E91153AEC2B5BF2CC95D9E098FAF7DA2CD (GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	String_t* G_B5_0 = NULL;
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * G_B5_1 = NULL;
	String_t* G_B4_0 = NULL;
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * G_B4_1 = NULL;
	{
		// countdownTimer--;
		int32_t L_0 = __this->get_countdownTimer_11();
		__this->set_countdownTimer_11(((int32_t)il2cpp_codegen_subtract((int32_t)L_0, (int32_t)1)));
		// if (countdownTimer == 0)
		int32_t L_1 = __this->get_countdownTimer_11();
		if (L_1)
		{
			goto IL_0084;
		}
	}
	{
		// audioSource.PlayOneShot(countdownEnd);
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_2 = __this->get_audioSource_13();
		AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * L_3 = __this->get_countdownEnd_15();
		NullCheck(L_2);
		AudioSource_PlayOneShot_mA90B136041A61C30909301D45D0315088CA7D796(L_2, L_3, /*hidden argument*/NULL);
		// stateManager.currentGameState = GameState.GameActive;
		StateManager_tDAE60D3E07D8A34DE82EF3FC439FB2968C4ACB47 * L_4 = __this->get_stateManager_6();
		NullCheck(L_4);
		L_4->set_currentGameState_5(2);
		// countdownTimerText.text = "";
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_5 = __this->get_countdownTimerText_10();
		NullCheck(L_5);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_5, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		// roundStartTime = Time.time;
		float L_6;
		L_6 = Time_get_time_m1A186074B1FCD448AB13A4B9D715AB9ED0B40844(/*hidden argument*/NULL);
		__this->set_roundStartTime_17(L_6);
		// if (music)
		AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * L_7 = __this->get_music_16();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_8;
		L_8 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499(L_7, /*hidden argument*/NULL);
		if (!L_8)
		{
			goto IL_00b4;
		}
	}
	{
		// audioSource.clip = music;
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_9 = __this->get_audioSource_13();
		AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * L_10 = __this->get_music_16();
		NullCheck(L_9);
		AudioSource_set_clip_mD1F50F7BA6EA3AF25B4922473352C5180CFF7B2B(L_9, L_10, /*hidden argument*/NULL);
		// audioSource.loop = true;
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_11 = __this->get_audioSource_13();
		NullCheck(L_11);
		AudioSource_set_loop_mDD9FB746D8A7392472E5484EEF8D0A667993E3E0(L_11, (bool)1, /*hidden argument*/NULL);
		// audioSource.Play();
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_12 = __this->get_audioSource_13();
		NullCheck(L_12);
		AudioSource_Play_mED16664B8F8F3E4D68785C8C00FC96C4DF053AE1(L_12, /*hidden argument*/NULL);
		// }
		return;
	}

IL_0084:
	{
		// countdownTimerText.text = countdownTimer + "";
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_13 = __this->get_countdownTimerText_10();
		int32_t* L_14 = __this->get_address_of_countdownTimer_11();
		String_t* L_15;
		L_15 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)L_14, /*hidden argument*/NULL);
		String_t* L_16 = L_15;
		G_B4_0 = L_16;
		G_B4_1 = L_13;
		if (L_16)
		{
			G_B5_0 = L_16;
			G_B5_1 = L_13;
			goto IL_009e;
		}
	}
	{
		G_B5_0 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		G_B5_1 = G_B4_1;
	}

IL_009e:
	{
		NullCheck(G_B5_1);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, G_B5_1, G_B5_0);
		// audioSource.PlayOneShot(countdownTick);
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_17 = __this->get_audioSource_13();
		AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * L_18 = __this->get_countdownTick_14();
		NullCheck(L_17);
		AudioSource_PlayOneShot_mA90B136041A61C30909301D45D0315088CA7D796(L_17, L_18, /*hidden argument*/NULL);
	}

IL_00b4:
	{
		// }
		return;
	}
}
// System.Void GameManager::OnPlayerKilled(PlayerBrain)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_OnPlayerKilled_mF13E0E5918806D9F9D5518A07014B2E8ACC59043 (GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * __this, PlayerBrain_t8E1560D2B1590AF0ABC355B852E846F3FC4A0A47 * ___playerKilled0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral13965FD064A482BC7D172918DF467212E8EAF0D3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2793A6051169D45EEECDDCE436FCA27B04441758);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral457CB937B2FD4136CDABEDDA634357F603F8954F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA19526466B6903289E8D3A7D74C59E27E9EF33F3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC94C3D52342E881447C30F182FF41AE786365EA6);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(stateManager.currentGameState == GameState.GameActive)
		StateManager_tDAE60D3E07D8A34DE82EF3FC439FB2968C4ACB47 * L_0 = __this->get_stateManager_6();
		NullCheck(L_0);
		int32_t L_1 = L_0->get_currentGameState_5();
		// if (gameMode == GameMode.Multiplayer)
		int32_t L_2 = __this->get_gameMode_19();
		if ((!(((uint32_t)L_2) == ((uint32_t)1))))
		{
			goto IL_00c0;
		}
	}
	{
		// if (playerKilled == player1)
		PlayerBrain_t8E1560D2B1590AF0ABC355B852E846F3FC4A0A47 * L_3 = ___playerKilled0;
		PlayerBrain_t8E1560D2B1590AF0ABC355B852E846F3FC4A0A47 * L_4 = __this->get_player1_4();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_3, L_4, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_006d;
		}
	}
	{
		// Debug.Log("Player 2 Wins!");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteralA19526466B6903289E8D3A7D74C59E27E9EF33F3, /*hidden argument*/NULL);
		// countdownTimerText.fontSize = 95;
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_6 = __this->get_countdownTimerText_10();
		NullCheck(L_6);
		Text_set_fontSize_m0D32489043916BCE64E51E0BDFCC12AC1B829411(L_6, ((int32_t)95), /*hidden argument*/NULL);
		// countdownTimerText.text = "Player 2 Wins! \n Hit Bomb Key to Restart";
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_7 = __this->get_countdownTimerText_10();
		NullCheck(L_7);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_7, _stringLiteralC94C3D52342E881447C30F182FF41AE786365EA6);
		// player2.playerScore.value++;
		PlayerBrain_t8E1560D2B1590AF0ABC355B852E846F3FC4A0A47 * L_8 = __this->get_player2_5();
		NullCheck(L_8);
		FloatVariable_t54F75E496629023CDD9A6E3ADC14072AB3C2E275 * L_9 = L_8->get_playerScore_7();
		FloatVariable_t54F75E496629023CDD9A6E3ADC14072AB3C2E275 * L_10 = L_9;
		NullCheck(L_10);
		float L_11 = L_10->get_value_4();
		NullCheck(L_10);
		L_10->set_value_4(((float)il2cpp_codegen_add((float)L_11, (float)(1.0f))));
		// }
		goto IL_00dd;
	}

IL_006d:
	{
		// else if (playerKilled == player2)
		PlayerBrain_t8E1560D2B1590AF0ABC355B852E846F3FC4A0A47 * L_12 = ___playerKilled0;
		PlayerBrain_t8E1560D2B1590AF0ABC355B852E846F3FC4A0A47 * L_13 = __this->get_player2_5();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_14;
		L_14 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_12, L_13, /*hidden argument*/NULL);
		if (!L_14)
		{
			goto IL_00dd;
		}
	}
	{
		// Debug.Log("Player 1 Wins!");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteral2793A6051169D45EEECDDCE436FCA27B04441758, /*hidden argument*/NULL);
		// countdownTimerText.fontSize = 95;
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_15 = __this->get_countdownTimerText_10();
		NullCheck(L_15);
		Text_set_fontSize_m0D32489043916BCE64E51E0BDFCC12AC1B829411(L_15, ((int32_t)95), /*hidden argument*/NULL);
		// countdownTimerText.text = "Player 1 Wins! \n Hit Bomb Key to Restart";
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_16 = __this->get_countdownTimerText_10();
		NullCheck(L_16);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_16, _stringLiteral13965FD064A482BC7D172918DF467212E8EAF0D3);
		// player1.playerScore.value++;
		PlayerBrain_t8E1560D2B1590AF0ABC355B852E846F3FC4A0A47 * L_17 = __this->get_player1_4();
		NullCheck(L_17);
		FloatVariable_t54F75E496629023CDD9A6E3ADC14072AB3C2E275 * L_18 = L_17->get_playerScore_7();
		FloatVariable_t54F75E496629023CDD9A6E3ADC14072AB3C2E275 * L_19 = L_18;
		NullCheck(L_19);
		float L_20 = L_19->get_value_4();
		NullCheck(L_19);
		L_19->set_value_4(((float)il2cpp_codegen_add((float)L_20, (float)(1.0f))));
		// }
		goto IL_00dd;
	}

IL_00c0:
	{
		// countdownTimerText.fontSize = 30;
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_21 = __this->get_countdownTimerText_10();
		NullCheck(L_21);
		Text_set_fontSize_m0D32489043916BCE64E51E0BDFCC12AC1B829411(L_21, ((int32_t)30), /*hidden argument*/NULL);
		// countdownTimerText.text = "Game Over! \n Hit Bomb Key to Restart";
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_22 = __this->get_countdownTimerText_10();
		NullCheck(L_22);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_22, _stringLiteral457CB937B2FD4136CDABEDDA634357F603F8954F);
	}

IL_00dd:
	{
		// stateManager.currentGameState = GameState.GameOver;
		StateManager_tDAE60D3E07D8A34DE82EF3FC439FB2968C4ACB47 * L_23 = __this->get_stateManager_6();
		NullCheck(L_23);
		L_23->set_currentGameState_5(3);
		// player1.ready = false;
		PlayerBrain_t8E1560D2B1590AF0ABC355B852E846F3FC4A0A47 * L_24 = __this->get_player1_4();
		NullCheck(L_24);
		L_24->set_ready_14((bool)0);
		// player2.ready = false;
		PlayerBrain_t8E1560D2B1590AF0ABC355B852E846F3FC4A0A47 * L_25 = __this->get_player2_5();
		NullCheck(L_25);
		L_25->set_ready_14((bool)0);
		// }
		return;
	}
}
// System.Boolean GameManager::PlayersReady()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GameManager_PlayersReady_m27A793AE3C1C0C6B30920678BC47ADBE9AAA2F0A (GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (player1.ready && !player2.playerGO)
		PlayerBrain_t8E1560D2B1590AF0ABC355B852E846F3FC4A0A47 * L_0 = __this->get_player1_4();
		NullCheck(L_0);
		bool L_1 = L_0->get_ready_14();
		if (!L_1)
		{
			goto IL_0021;
		}
	}
	{
		PlayerBrain_t8E1560D2B1590AF0ABC355B852E846F3FC4A0A47 * L_2 = __this->get_player2_5();
		NullCheck(L_2);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_3 = L_2->get_playerGO_6();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499(L_3, /*hidden argument*/NULL);
		if (L_4)
		{
			goto IL_0021;
		}
	}
	{
		// return true;
		return (bool)1;
	}

IL_0021:
	{
		// if (player1.ready && player2.ready)
		PlayerBrain_t8E1560D2B1590AF0ABC355B852E846F3FC4A0A47 * L_5 = __this->get_player1_4();
		NullCheck(L_5);
		bool L_6 = L_5->get_ready_14();
		if (!L_6)
		{
			goto IL_003d;
		}
	}
	{
		PlayerBrain_t8E1560D2B1590AF0ABC355B852E846F3FC4A0A47 * L_7 = __this->get_player2_5();
		NullCheck(L_7);
		bool L_8 = L_7->get_ready_14();
		if (!L_8)
		{
			goto IL_003d;
		}
	}
	{
		// return true;
		return (bool)1;
	}

IL_003d:
	{
		// return false;
		return (bool)0;
	}
}
// System.Void GameManager::SpawnRandomBlocks(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_SpawnRandomBlocks_mDE809BEAC1E59B316DA317409745FD80F778B83D (GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * __this, float ___count0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_5;
	memset((&V_5), 0, sizeof(V_5));
	{
		// if (!blockManager.breakableBlockPrefab)
		BlockManager_t9C5AF5A177FFEEBD9C3968E47D9D4F272EAC5414 * L_0 = __this->get_blockManager_7();
		NullCheck(L_0);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1 = L_0->get_breakableBlockPrefab_5();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499(L_1, /*hidden argument*/NULL);
		if (L_2)
		{
			goto IL_0013;
		}
	}
	{
		// return;
		return;
	}

IL_0013:
	{
		// for (int i = 0; i < count; i++)
		V_0 = 0;
		goto IL_00be;
	}

IL_001a:
	{
		// bool blockSpawned = false;
		V_1 = (bool)0;
		// int attempts = 0;
		V_2 = 0;
		goto IL_00b4;
	}

IL_0023:
	{
		// int x = Random.Range((int)blockManager.minBlock.x, (int)blockManager.maxBlock.x);
		BlockManager_t9C5AF5A177FFEEBD9C3968E47D9D4F272EAC5414 * L_3 = __this->get_blockManager_7();
		NullCheck(L_3);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_4 = L_3->get_address_of_minBlock_8();
		float L_5 = L_4->get_x_0();
		BlockManager_t9C5AF5A177FFEEBD9C3968E47D9D4F272EAC5414 * L_6 = __this->get_blockManager_7();
		NullCheck(L_6);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_7 = L_6->get_address_of_maxBlock_7();
		float L_8 = L_7->get_x_0();
		int32_t L_9;
		L_9 = Random_Range_m4B3A0037ACA057F33C94508F908546B9317D996A(((int32_t)((int32_t)L_5)), ((int32_t)((int32_t)L_8)), /*hidden argument*/NULL);
		V_3 = L_9;
		// int z = Random.Range((int)blockManager.minBlock.y, (int)blockManager.maxBlock.y);
		BlockManager_t9C5AF5A177FFEEBD9C3968E47D9D4F272EAC5414 * L_10 = __this->get_blockManager_7();
		NullCheck(L_10);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_11 = L_10->get_address_of_minBlock_8();
		float L_12 = L_11->get_y_1();
		BlockManager_t9C5AF5A177FFEEBD9C3968E47D9D4F272EAC5414 * L_13 = __this->get_blockManager_7();
		NullCheck(L_13);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_14 = L_13->get_address_of_maxBlock_7();
		float L_15 = L_14->get_y_1();
		int32_t L_16;
		L_16 = Random_Range_m4B3A0037ACA057F33C94508F908546B9317D996A(((int32_t)((int32_t)L_12)), ((int32_t)((int32_t)L_15)), /*hidden argument*/NULL);
		V_4 = L_16;
		// Vector3 position = new Vector3(x, 0, z);
		int32_t L_17 = V_3;
		int32_t L_18 = V_4;
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&V_5), ((float)((float)L_17)), (0.0f), ((float)((float)L_18)), /*hidden argument*/NULL);
		// if (PositionIsOpen(position))
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_19 = V_5;
		bool L_20;
		L_20 = GameManager_PositionIsOpen_mEF759380AEB144BFC1D0CBF00183E39A59D57B68(__this, L_19, /*hidden argument*/NULL);
		if (!L_20)
		{
			goto IL_00a9;
		}
	}
	{
		// blockSpawned = true;
		V_1 = (bool)1;
		// GameObject.Instantiate(blockManager.breakableBlockPrefab, position, Quaternion.identity);
		BlockManager_t9C5AF5A177FFEEBD9C3968E47D9D4F272EAC5414 * L_21 = __this->get_blockManager_7();
		NullCheck(L_21);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_22 = L_21->get_breakableBlockPrefab_5();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_23 = V_5;
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_24;
		L_24 = Quaternion_get_identity_mF2E565DBCE793A1AE6208056D42CA7C59D83A702(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_25;
		L_25 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B(L_22, L_23, L_24, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var);
	}

IL_00a9:
	{
		// if (attempts > 50)
		int32_t L_26 = V_2;
		if ((((int32_t)L_26) <= ((int32_t)((int32_t)50))))
		{
			goto IL_00b0;
		}
	}
	{
		// blockSpawned = true;
		V_1 = (bool)1;
	}

IL_00b0:
	{
		// attempts++;
		int32_t L_27 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_27, (int32_t)1));
	}

IL_00b4:
	{
		// while (!blockSpawned)
		bool L_28 = V_1;
		if (!L_28)
		{
			goto IL_0023;
		}
	}
	{
		// for (int i = 0; i < count; i++)
		int32_t L_29 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_29, (int32_t)1));
	}

IL_00be:
	{
		// for (int i = 0; i < count; i++)
		int32_t L_30 = V_0;
		float L_31 = ___count0;
		if ((((float)((float)((float)L_30))) < ((float)L_31)))
		{
			goto IL_001a;
		}
	}
	{
		// }
		return;
	}
}
// System.Boolean GameManager::PositionIsOpen(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GameManager_PositionIsOpen_mEF759380AEB144BFC1D0CBF00183E39A59D57B68 (GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_mE3E143158029D6ADAC5A00E68CE1DEAE2BED1ED0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (blockManager.activeBlocksDictionary.ContainsKey(position))
		BlockManager_t9C5AF5A177FFEEBD9C3968E47D9D4F272EAC5414 * L_0 = __this->get_blockManager_7();
		NullCheck(L_0);
		Dictionary_2_t59B878E4ADB9CCE44F927CD5EC3591A0975741BD * L_1 = L_0->get_activeBlocksDictionary_6();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = ___position0;
		NullCheck(L_1);
		bool L_3;
		L_3 = Dictionary_2_ContainsKey_mE3E143158029D6ADAC5A00E68CE1DEAE2BED1ED0(L_1, L_2, /*hidden argument*/Dictionary_2_ContainsKey_mE3E143158029D6ADAC5A00E68CE1DEAE2BED1ED0_RuntimeMethod_var);
		if (!L_3)
		{
			goto IL_0015;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_0015:
	{
		// if(player1.playerGO && position == Utils.RoundedVector3(player1.playerGO.transform.position))
		PlayerBrain_t8E1560D2B1590AF0ABC355B852E846F3FC4A0A47 * L_4 = __this->get_player1_4();
		NullCheck(L_4);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_5 = L_4->get_playerGO_6();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_6;
		L_6 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499(L_5, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_004b;
		}
	}
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_7 = ___position0;
		PlayerBrain_t8E1560D2B1590AF0ABC355B852E846F3FC4A0A47 * L_8 = __this->get_player1_4();
		NullCheck(L_8);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_9 = L_8->get_playerGO_6();
		NullCheck(L_9);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_10;
		L_10 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_9, /*hidden argument*/NULL);
		NullCheck(L_10);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_11;
		L_11 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_10, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12;
		L_12 = Utils_RoundedVector3_m33B329BD79A6C03D660C9D59FBF2F24B1DA4D8F9(L_11, /*hidden argument*/NULL);
		bool L_13;
		L_13 = Vector3_op_Equality_m8A98C7F38641110A2F90445EF8E98ECE14B08296(L_7, L_12, /*hidden argument*/NULL);
		if (!L_13)
		{
			goto IL_004b;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_004b:
	{
		// if (player2.playerGO && position == Utils.RoundedVector3(player2.playerGO.transform.position))
		PlayerBrain_t8E1560D2B1590AF0ABC355B852E846F3FC4A0A47 * L_14 = __this->get_player2_5();
		NullCheck(L_14);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_15 = L_14->get_playerGO_6();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_16;
		L_16 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499(L_15, /*hidden argument*/NULL);
		if (!L_16)
		{
			goto IL_0081;
		}
	}
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_17 = ___position0;
		PlayerBrain_t8E1560D2B1590AF0ABC355B852E846F3FC4A0A47 * L_18 = __this->get_player2_5();
		NullCheck(L_18);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_19 = L_18->get_playerGO_6();
		NullCheck(L_19);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_20;
		L_20 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_19, /*hidden argument*/NULL);
		NullCheck(L_20);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_21;
		L_21 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_20, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_22;
		L_22 = Utils_RoundedVector3_m33B329BD79A6C03D660C9D59FBF2F24B1DA4D8F9(L_21, /*hidden argument*/NULL);
		bool L_23;
		L_23 = Vector3_op_Equality_m8A98C7F38641110A2F90445EF8E98ECE14B08296(L_17, L_22, /*hidden argument*/NULL);
		if (!L_23)
		{
			goto IL_0081;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_0081:
	{
		// return true;
		return (bool)1;
	}
}
// System.Void GameManager::OnEnemyKilled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_OnEnemyKilled_mBBDC610B209083ACBD2ADFD683FB4D1F0B3CDA4B (GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * __this, const RuntimeMethod* method)
{
	{
		// player1.playerScore.value++;
		PlayerBrain_t8E1560D2B1590AF0ABC355B852E846F3FC4A0A47 * L_0 = __this->get_player1_4();
		NullCheck(L_0);
		FloatVariable_t54F75E496629023CDD9A6E3ADC14072AB3C2E275 * L_1 = L_0->get_playerScore_7();
		FloatVariable_t54F75E496629023CDD9A6E3ADC14072AB3C2E275 * L_2 = L_1;
		NullCheck(L_2);
		float L_3 = L_2->get_value_4();
		NullCheck(L_2);
		L_2->set_value_4(((float)il2cpp_codegen_add((float)L_3, (float)(1.0f))));
		// }
		return;
	}
}
// System.Void GameManager::LoadSinglePlayer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_LoadSinglePlayer_m7AC61BC6E5C12D92B0BF5A70CC22FC971B44D4BD (GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFBB454E8FC78090D2E89ED6B3050A97A01FB8613);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene("SingleplayerScene");
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m7DAF30213E99396ECBDB1BD40CC34CCF36902092(_stringLiteralFBB454E8FC78090D2E89ED6B3050A97A01FB8613, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void GameManager::LoadMultiplayer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_LoadMultiplayer_m946821EB01698C255821043F040E43DA31A1CA14 (GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4FFF1C5F85164FDC6302BBAC4585F9DA653EDB21);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene("MultiplayerScene");
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m7DAF30213E99396ECBDB1BD40CC34CCF36902092(_stringLiteral4FFF1C5F85164FDC6302BBAC4585F9DA653EDB21, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void GameManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager__ctor_mE8666F6D0CA9C31E16B719F79780DC4B0245B64D (GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * __this, const RuntimeMethod* method)
{
	{
		// int countdownTimer = 3;
		__this->set_countdownTimer_11(3);
		// public float startingRandomizedBlocks = 8;
		__this->set_startingRandomizedBlocks_20((8.0f));
		// public float escalationStartTime = 10f;
		__this->set_escalationStartTime_21((10.0f));
		// public float escalationFrequency = 5f;
		__this->set_escalationFrequency_22((5.0f));
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Player::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player_Start_mBD692B64AAC791B93A589E7D3596F36787EAF021 (Player_t5689617909B48F7640EA0892D85C92C13CC22C6F * __this, const RuntimeMethod* method)
{
	{
		// playerBrain.playerGO = gameObject;
		PlayerBrain_t8E1560D2B1590AF0ABC355B852E846F3FC4A0A47 * L_0 = __this->get_playerBrain_5();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1;
		L_1 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		L_0->set_playerGO_6(L_1);
		// playerLight.color = playerBrain.lightColor;
		Light_tA2F349FE839781469A0344CF6039B51512394275 * L_2 = __this->get_playerLight_10();
		PlayerBrain_t8E1560D2B1590AF0ABC355B852E846F3FC4A0A47 * L_3 = __this->get_playerBrain_5();
		NullCheck(L_3);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_4 = L_3->get_lightColor_15();
		NullCheck(L_2);
		Light_set_color_mB33E961A7CF25D0EBE410EE22444B4B8D4317C6C(L_2, L_4, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Player::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player_Update_mBA04F1D6FE3C18037EA95DFAEEAA9977BFD49CD3 (Player_t5689617909B48F7640EA0892D85C92C13CC22C6F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC8E73DC4EDC0AEBC71ACEDC10E8B5EF7D26C8764);
		s_Il2CppMethodInitialized = true;
	}
	{
		// animator.SetBool("moving", false);
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_0 = __this->get_animator_9();
		NullCheck(L_0);
		Animator_SetBool_m34E2E9785A47A3AE94E804004425C333C36CCD43(L_0, _stringLiteralC8E73DC4EDC0AEBC71ACEDC10E8B5EF7D26C8764, (bool)0, /*hidden argument*/NULL);
		// if (Input.GetKey(playerBrain.upKey))
		PlayerBrain_t8E1560D2B1590AF0ABC355B852E846F3FC4A0A47 * L_1 = __this->get_playerBrain_5();
		NullCheck(L_1);
		int32_t L_2 = L_1->get_upKey_9();
		bool L_3;
		L_3 = Input_GetKey_mFDD450A4C61F2930928B12287FFBD1ACCB71E429(L_2, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0073;
		}
	}
	{
		// newVelocity = new Vector3(0, 0, playerBrain.movementSpeed.value);
		PlayerBrain_t8E1560D2B1590AF0ABC355B852E846F3FC4A0A47 * L_4 = __this->get_playerBrain_5();
		NullCheck(L_4);
		FloatVariable_t54F75E496629023CDD9A6E3ADC14072AB3C2E275 * L_5 = L_4->get_movementSpeed_16();
		NullCheck(L_5);
		float L_6 = L_5->get_value_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_7;
		memset((&L_7), 0, sizeof(L_7));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_7), (0.0f), (0.0f), L_6, /*hidden argument*/NULL);
		__this->set_newVelocity_8(L_7);
		// newRotation = Quaternion.Euler(0, 0, 0);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_8;
		L_8 = Quaternion_Euler_m37BF99FFFA09F4B3F83DC066641B82C59B19A9C3((0.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		__this->set_newRotation_7(L_8);
		// animator.SetBool("moving", true);
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_9 = __this->get_animator_9();
		NullCheck(L_9);
		Animator_SetBool_m34E2E9785A47A3AE94E804004425C333C36CCD43(L_9, _stringLiteralC8E73DC4EDC0AEBC71ACEDC10E8B5EF7D26C8764, (bool)1, /*hidden argument*/NULL);
	}

IL_0073:
	{
		// if (Input.GetKey(playerBrain.downKey))
		PlayerBrain_t8E1560D2B1590AF0ABC355B852E846F3FC4A0A47 * L_10 = __this->get_playerBrain_5();
		NullCheck(L_10);
		int32_t L_11 = L_10->get_downKey_10();
		bool L_12;
		L_12 = Input_GetKey_mFDD450A4C61F2930928B12287FFBD1ACCB71E429(L_11, /*hidden argument*/NULL);
		if (!L_12)
		{
			goto IL_00d6;
		}
	}
	{
		// newVelocity = new Vector3(0, 0, -playerBrain.movementSpeed.value);
		PlayerBrain_t8E1560D2B1590AF0ABC355B852E846F3FC4A0A47 * L_13 = __this->get_playerBrain_5();
		NullCheck(L_13);
		FloatVariable_t54F75E496629023CDD9A6E3ADC14072AB3C2E275 * L_14 = L_13->get_movementSpeed_16();
		NullCheck(L_14);
		float L_15 = L_14->get_value_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_16;
		memset((&L_16), 0, sizeof(L_16));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_16), (0.0f), (0.0f), ((-L_15)), /*hidden argument*/NULL);
		__this->set_newVelocity_8(L_16);
		// newRotation = Quaternion.Euler(0, 180, 0);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_17;
		L_17 = Quaternion_Euler_m37BF99FFFA09F4B3F83DC066641B82C59B19A9C3((0.0f), (180.0f), (0.0f), /*hidden argument*/NULL);
		__this->set_newRotation_7(L_17);
		// animator.SetBool("moving", true);
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_18 = __this->get_animator_9();
		NullCheck(L_18);
		Animator_SetBool_m34E2E9785A47A3AE94E804004425C333C36CCD43(L_18, _stringLiteralC8E73DC4EDC0AEBC71ACEDC10E8B5EF7D26C8764, (bool)1, /*hidden argument*/NULL);
	}

IL_00d6:
	{
		// if (Input.GetKey(playerBrain.leftKey))
		PlayerBrain_t8E1560D2B1590AF0ABC355B852E846F3FC4A0A47 * L_19 = __this->get_playerBrain_5();
		NullCheck(L_19);
		int32_t L_20 = L_19->get_leftKey_11();
		bool L_21;
		L_21 = Input_GetKey_mFDD450A4C61F2930928B12287FFBD1ACCB71E429(L_20, /*hidden argument*/NULL);
		if (!L_21)
		{
			goto IL_0138;
		}
	}
	{
		// newVelocity = new Vector3(playerBrain.movementSpeed.value, 0, 0);
		PlayerBrain_t8E1560D2B1590AF0ABC355B852E846F3FC4A0A47 * L_22 = __this->get_playerBrain_5();
		NullCheck(L_22);
		FloatVariable_t54F75E496629023CDD9A6E3ADC14072AB3C2E275 * L_23 = L_22->get_movementSpeed_16();
		NullCheck(L_23);
		float L_24 = L_23->get_value_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_25;
		memset((&L_25), 0, sizeof(L_25));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_25), L_24, (0.0f), (0.0f), /*hidden argument*/NULL);
		__this->set_newVelocity_8(L_25);
		// newRotation = Quaternion.Euler(0, 90, 0);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_26;
		L_26 = Quaternion_Euler_m37BF99FFFA09F4B3F83DC066641B82C59B19A9C3((0.0f), (90.0f), (0.0f), /*hidden argument*/NULL);
		__this->set_newRotation_7(L_26);
		// animator.SetBool("moving", true);
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_27 = __this->get_animator_9();
		NullCheck(L_27);
		Animator_SetBool_m34E2E9785A47A3AE94E804004425C333C36CCD43(L_27, _stringLiteralC8E73DC4EDC0AEBC71ACEDC10E8B5EF7D26C8764, (bool)1, /*hidden argument*/NULL);
	}

IL_0138:
	{
		// if (Input.GetKey(playerBrain.rightKey))
		PlayerBrain_t8E1560D2B1590AF0ABC355B852E846F3FC4A0A47 * L_28 = __this->get_playerBrain_5();
		NullCheck(L_28);
		int32_t L_29 = L_28->get_rightKey_12();
		bool L_30;
		L_30 = Input_GetKey_mFDD450A4C61F2930928B12287FFBD1ACCB71E429(L_29, /*hidden argument*/NULL);
		if (!L_30)
		{
			goto IL_019b;
		}
	}
	{
		// newVelocity = new Vector3(-playerBrain.movementSpeed.value, 0, 0);
		PlayerBrain_t8E1560D2B1590AF0ABC355B852E846F3FC4A0A47 * L_31 = __this->get_playerBrain_5();
		NullCheck(L_31);
		FloatVariable_t54F75E496629023CDD9A6E3ADC14072AB3C2E275 * L_32 = L_31->get_movementSpeed_16();
		NullCheck(L_32);
		float L_33 = L_32->get_value_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_34;
		memset((&L_34), 0, sizeof(L_34));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_34), ((-L_33)), (0.0f), (0.0f), /*hidden argument*/NULL);
		__this->set_newVelocity_8(L_34);
		// newRotation = Quaternion.Euler(0, 270, 0);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_35;
		L_35 = Quaternion_Euler_m37BF99FFFA09F4B3F83DC066641B82C59B19A9C3((0.0f), (270.0f), (0.0f), /*hidden argument*/NULL);
		__this->set_newRotation_7(L_35);
		// animator.SetBool("moving", true);
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_36 = __this->get_animator_9();
		NullCheck(L_36);
		Animator_SetBool_m34E2E9785A47A3AE94E804004425C333C36CCD43(L_36, _stringLiteralC8E73DC4EDC0AEBC71ACEDC10E8B5EF7D26C8764, (bool)1, /*hidden argument*/NULL);
	}

IL_019b:
	{
		// if (Input.GetKey(playerBrain.bombKey))
		PlayerBrain_t8E1560D2B1590AF0ABC355B852E846F3FC4A0A47 * L_37 = __this->get_playerBrain_5();
		NullCheck(L_37);
		int32_t L_38 = L_37->get_bombKey_13();
		bool L_39;
		L_39 = Input_GetKey_mFDD450A4C61F2930928B12287FFBD1ACCB71E429(L_38, /*hidden argument*/NULL);
		if (!L_39)
		{
			goto IL_01e7;
		}
	}
	{
		// if(stateManager.currentGameState == GameState.GameActive)
		StateManager_tDAE60D3E07D8A34DE82EF3FC439FB2968C4ACB47 * L_40 = __this->get_stateManager_6();
		NullCheck(L_40);
		int32_t L_41 = L_40->get_currentGameState_5();
		if ((!(((uint32_t)L_41) == ((uint32_t)2))))
		{
			goto IL_01c2;
		}
	}
	{
		// DropBomb();
		Player_DropBomb_m89F9FF5D6E8CAC1FDB8633207D8612E5BF52EA26(__this, /*hidden argument*/NULL);
		// }
		return;
	}

IL_01c2:
	{
		// else if(stateManager.currentGameState == GameState.PreGame)
		StateManager_tDAE60D3E07D8A34DE82EF3FC439FB2968C4ACB47 * L_42 = __this->get_stateManager_6();
		NullCheck(L_42);
		int32_t L_43 = L_42->get_currentGameState_5();
		if (L_43)
		{
			goto IL_01e7;
		}
	}
	{
		// playerBrain.ready = true;
		PlayerBrain_t8E1560D2B1590AF0ABC355B852E846F3FC4A0A47 * L_44 = __this->get_playerBrain_5();
		NullCheck(L_44);
		L_44->set_ready_14((bool)1);
		// playerLight.enabled = true;
		Light_tA2F349FE839781469A0344CF6039B51512394275 * L_45 = __this->get_playerLight_10();
		NullCheck(L_45);
		Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32(L_45, (bool)1, /*hidden argument*/NULL);
	}

IL_01e7:
	{
		// }
		return;
	}
}
// System.Void Player::FixedUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player_FixedUpdate_mD7447EDFC86F29A3E5FBDEF7E0139535BD4C5088 (Player_t5689617909B48F7640EA0892D85C92C13CC22C6F * __this, const RuntimeMethod* method)
{
	{
		// if(newVelocity != Vector3.zero && stateManager.currentGameState == GameState.GameActive)
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = __this->get_newVelocity_8();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1;
		L_1 = Vector3_get_zero_m1A8F7993167785F750B6B01762D22C2597C84EF6(/*hidden argument*/NULL);
		bool L_2;
		L_2 = Vector3_op_Inequality_m15190A795B416EB699E69E6190DE6F1C1F208710(L_0, L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0042;
		}
	}
	{
		StateManager_tDAE60D3E07D8A34DE82EF3FC439FB2968C4ACB47 * L_3 = __this->get_stateManager_6();
		NullCheck(L_3);
		int32_t L_4 = L_3->get_currentGameState_5();
		if ((!(((uint32_t)L_4) == ((uint32_t)2))))
		{
			goto IL_0042;
		}
	}
	{
		// ridgedBody.velocity = newVelocity;
		Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * L_5 = __this->get_ridgedBody_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = __this->get_newVelocity_8();
		NullCheck(L_5);
		Rigidbody_set_velocity_m8DC0988916EB38DFD7D4584830B41D79140BF18D(L_5, L_6, /*hidden argument*/NULL);
		// transform.rotation = newRotation;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_7;
		L_7 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_8 = __this->get_newRotation_7();
		NullCheck(L_7);
		Transform_set_rotation_m1B5F3D4CE984AB31254615C9C71B0E54978583B4(L_7, L_8, /*hidden argument*/NULL);
	}

IL_0042:
	{
		// newVelocity = Vector3.zero;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9;
		L_9 = Vector3_get_zero_m1A8F7993167785F750B6B01762D22C2597C84EF6(/*hidden argument*/NULL);
		__this->set_newVelocity_8(L_9);
		// }
		return;
	}
}
// System.Void Player::DropBomb()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player_DropBomb_m89F9FF5D6E8CAC1FDB8633207D8612E5BF52EA26 (Player_t5689617909B48F7640EA0892D85C92C13CC22C6F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m6C3B4446020715A887B6977BDBB20AC8EE2ADF16_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2918B2F21831E0CDD79E134CC1384ECDC0E2916C);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log("Dropping bomb now");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteral2918B2F21831E0CDD79E134CC1384ECDC0E2916C, /*hidden argument*/NULL);
		// if(Time.time > playerBrain.nextBombTime && playerBrain.activeBombs.Count < playerBrain.maxActiveBombs.value)
		float L_0;
		L_0 = Time_get_time_m1A186074B1FCD448AB13A4B9D715AB9ED0B40844(/*hidden argument*/NULL);
		PlayerBrain_t8E1560D2B1590AF0ABC355B852E846F3FC4A0A47 * L_1 = __this->get_playerBrain_5();
		NullCheck(L_1);
		float L_2 = L_1->get_nextBombTime_19();
		if ((!(((float)L_0) > ((float)L_2))))
		{
			goto IL_00c0;
		}
	}
	{
		PlayerBrain_t8E1560D2B1590AF0ABC355B852E846F3FC4A0A47 * L_3 = __this->get_playerBrain_5();
		NullCheck(L_3);
		List_1_tDB3AB8389E177E6FC35B0AD539765C2EF7334450 * L_4 = L_3->get_activeBombs_20();
		NullCheck(L_4);
		int32_t L_5;
		L_5 = List_1_get_Count_m6C3B4446020715A887B6977BDBB20AC8EE2ADF16_inline(L_4, /*hidden argument*/List_1_get_Count_m6C3B4446020715A887B6977BDBB20AC8EE2ADF16_RuntimeMethod_var);
		PlayerBrain_t8E1560D2B1590AF0ABC355B852E846F3FC4A0A47 * L_6 = __this->get_playerBrain_5();
		NullCheck(L_6);
		FloatVariable_t54F75E496629023CDD9A6E3ADC14072AB3C2E275 * L_7 = L_6->get_maxActiveBombs_8();
		NullCheck(L_7);
		float L_8 = L_7->get_value_4();
		if ((!(((float)((float)((float)L_5))) < ((float)L_8))))
		{
			goto IL_00c0;
		}
	}
	{
		// GameObject.Instantiate(playerBrain.bombPrefab, new Vector3(Utils.RoundToInt(transform.position.x), Utils.RoundToInt(transform.position.y), Utils.RoundToInt(transform.position.z)), Quaternion.identity);
		PlayerBrain_t8E1560D2B1590AF0ABC355B852E846F3FC4A0A47 * L_9 = __this->get_playerBrain_5();
		NullCheck(L_9);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_10 = L_9->get_bombPrefab_17();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_11;
		L_11 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_11);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12;
		L_12 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_11, /*hidden argument*/NULL);
		float L_13 = L_12.get_x_2();
		int32_t L_14;
		L_14 = Utils_RoundToInt_m1CC53FAE2287620FB71F7DD6F6B4E9E75F3D514F(L_13, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_15;
		L_15 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_15);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_16;
		L_16 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_15, /*hidden argument*/NULL);
		float L_17 = L_16.get_y_3();
		int32_t L_18;
		L_18 = Utils_RoundToInt_m1CC53FAE2287620FB71F7DD6F6B4E9E75F3D514F(L_17, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_19;
		L_19 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_19);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_20;
		L_20 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_19, /*hidden argument*/NULL);
		float L_21 = L_20.get_z_4();
		int32_t L_22;
		L_22 = Utils_RoundToInt_m1CC53FAE2287620FB71F7DD6F6B4E9E75F3D514F(L_21, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_23;
		memset((&L_23), 0, sizeof(L_23));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_23), ((float)((float)L_14)), ((float)((float)L_18)), ((float)((float)L_22)), /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_24;
		L_24 = Quaternion_get_identity_mF2E565DBCE793A1AE6208056D42CA7C59D83A702(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_25;
		L_25 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B(L_10, L_23, L_24, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var);
		// playerBrain.nextBombTime = Time.time + playerBrain.bombPlacementDelay.value;
		PlayerBrain_t8E1560D2B1590AF0ABC355B852E846F3FC4A0A47 * L_26 = __this->get_playerBrain_5();
		float L_27;
		L_27 = Time_get_time_m1A186074B1FCD448AB13A4B9D715AB9ED0B40844(/*hidden argument*/NULL);
		PlayerBrain_t8E1560D2B1590AF0ABC355B852E846F3FC4A0A47 * L_28 = __this->get_playerBrain_5();
		NullCheck(L_28);
		FloatVariable_t54F75E496629023CDD9A6E3ADC14072AB3C2E275 * L_29 = L_28->get_bombPlacementDelay_18();
		NullCheck(L_29);
		float L_30 = L_29->get_value_4();
		NullCheck(L_26);
		L_26->set_nextBombTime_19(((float)il2cpp_codegen_add((float)L_27, (float)L_30)));
	}

IL_00c0:
	{
		// }
		return;
	}
}
// System.Void Player::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player__ctor_mDE8EB5B351975D4E7E24DE341B8B49B8A29CC2B7 (Player_t5689617909B48F7640EA0892D85C92C13CC22C6F * __this, const RuntimeMethod* method)
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
// System.Void PlayerBrain::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerBrain_OnEnable_m829E7CD2B69301EEFF421A749875471BB5A86EAE (PlayerBrain_t8E1560D2B1590AF0ABC355B852E846F3FC4A0A47 * __this, const RuntimeMethod* method)
{
	{
		// nextBombTime = 0;
		__this->set_nextBombTime_19((0.0f));
		// ready = false;
		__this->set_ready_14((bool)0);
		// }
		return;
	}
}
// System.Void PlayerBrain::AddActiveBomb(Bomb)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerBrain_AddActiveBomb_m6E65E76F249D3A20F5D894CC76462E169E6D74A4 (PlayerBrain_t8E1560D2B1590AF0ABC355B852E846F3FC4A0A47 * __this, Bomb_t2F20FE59E0B0F4EE5ED5E76D2DD8406D9487CCC5 * ___bomb0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mBE339A0D5D8A8E1458C669CBACB51BFC70412C4A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Contains_mDD3B3320E8F04D5683767102003DCC1A646F24D2_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!activeBombs.Contains(bomb))
		List_1_tDB3AB8389E177E6FC35B0AD539765C2EF7334450 * L_0 = __this->get_activeBombs_20();
		Bomb_t2F20FE59E0B0F4EE5ED5E76D2DD8406D9487CCC5 * L_1 = ___bomb0;
		NullCheck(L_0);
		bool L_2;
		L_2 = List_1_Contains_mDD3B3320E8F04D5683767102003DCC1A646F24D2(L_0, L_1, /*hidden argument*/List_1_Contains_mDD3B3320E8F04D5683767102003DCC1A646F24D2_RuntimeMethod_var);
		if (L_2)
		{
			goto IL_001a;
		}
	}
	{
		// activeBombs.Add(bomb);
		List_1_tDB3AB8389E177E6FC35B0AD539765C2EF7334450 * L_3 = __this->get_activeBombs_20();
		Bomb_t2F20FE59E0B0F4EE5ED5E76D2DD8406D9487CCC5 * L_4 = ___bomb0;
		NullCheck(L_3);
		List_1_Add_mBE339A0D5D8A8E1458C669CBACB51BFC70412C4A(L_3, L_4, /*hidden argument*/List_1_Add_mBE339A0D5D8A8E1458C669CBACB51BFC70412C4A_RuntimeMethod_var);
	}

IL_001a:
	{
		// }
		return;
	}
}
// System.Void PlayerBrain::RemoveBomb(Bomb)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerBrain_RemoveBomb_mFE5171474DFEB338E8DEBFCD61280DA02E505C9C (PlayerBrain_t8E1560D2B1590AF0ABC355B852E846F3FC4A0A47 * __this, Bomb_t2F20FE59E0B0F4EE5ED5E76D2DD8406D9487CCC5 * ___bomb0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Contains_mDD3B3320E8F04D5683767102003DCC1A646F24D2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Remove_mA5CF7C12D59438DFD44792765E09BE018434E254_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (activeBombs.Contains(bomb))
		List_1_tDB3AB8389E177E6FC35B0AD539765C2EF7334450 * L_0 = __this->get_activeBombs_20();
		Bomb_t2F20FE59E0B0F4EE5ED5E76D2DD8406D9487CCC5 * L_1 = ___bomb0;
		NullCheck(L_0);
		bool L_2;
		L_2 = List_1_Contains_mDD3B3320E8F04D5683767102003DCC1A646F24D2(L_0, L_1, /*hidden argument*/List_1_Contains_mDD3B3320E8F04D5683767102003DCC1A646F24D2_RuntimeMethod_var);
		if (!L_2)
		{
			goto IL_001b;
		}
	}
	{
		// activeBombs.Remove(bomb);
		List_1_tDB3AB8389E177E6FC35B0AD539765C2EF7334450 * L_3 = __this->get_activeBombs_20();
		Bomb_t2F20FE59E0B0F4EE5ED5E76D2DD8406D9487CCC5 * L_4 = ___bomb0;
		NullCheck(L_3);
		bool L_5;
		L_5 = List_1_Remove_mA5CF7C12D59438DFD44792765E09BE018434E254(L_3, L_4, /*hidden argument*/List_1_Remove_mA5CF7C12D59438DFD44792765E09BE018434E254_RuntimeMethod_var);
	}

IL_001b:
	{
		// }
		return;
	}
}
// System.Void PlayerBrain::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerBrain__ctor_m8CAD32EA09F6ED25BF02F112D99F604DA309AA23 (PlayerBrain_t8E1560D2B1590AF0ABC355B852E846F3FC4A0A47 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mB499F4BB9B012EBA8F228DB7760F6BC6D7717512_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tDB3AB8389E177E6FC35B0AD539765C2EF7334450_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public Color lightColor = Color.green;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_0;
		L_0 = Color_get_green_mFF9BD42534D385A0717B1EAD083ADF08712984B9(/*hidden argument*/NULL);
		__this->set_lightColor_15(L_0);
		// public List<Bomb> activeBombs = new List<Bomb>();
		List_1_tDB3AB8389E177E6FC35B0AD539765C2EF7334450 * L_1 = (List_1_tDB3AB8389E177E6FC35B0AD539765C2EF7334450 *)il2cpp_codegen_object_new(List_1_tDB3AB8389E177E6FC35B0AD539765C2EF7334450_il2cpp_TypeInfo_var);
		List_1__ctor_mB499F4BB9B012EBA8F228DB7760F6BC6D7717512(L_1, /*hidden argument*/List_1__ctor_mB499F4BB9B012EBA8F228DB7760F6BC6D7717512_RuntimeMethod_var);
		__this->set_activeBombs_20(L_1);
		ScriptableObject__ctor_m8DAE6CDCFA34E16F2543B02CC3669669FF203063(__this, /*hidden argument*/NULL);
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
// System.Void ReadmeScriptableObject::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadmeScriptableObject__ctor_mCE28A70771FED285DD405D9ED93D4979A378D36F (ReadmeScriptableObject_tD2811D928B11625AAC13E8C0614E4D2AB51E2058 * __this, const RuntimeMethod* method)
{
	{
		ScriptableObject__ctor_m8DAE6CDCFA34E16F2543B02CC3669669FF203063(__this, /*hidden argument*/NULL);
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
// System.Void StateManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StateManager__ctor_m4A246D6AB96FF1FF10BF145B75F8EFEB1FB2CAC1 (StateManager_tDAE60D3E07D8A34DE82EF3FC439FB2968C4ACB47 * __this, const RuntimeMethod* method)
{
	{
		// public GameMode currentGameMode = GameMode.Multiplayer;
		__this->set_currentGameMode_6(1);
		ScriptableObject__ctor_m8DAE6CDCFA34E16F2543B02CC3669669FF203063(__this, /*hidden argument*/NULL);
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
// System.String CoffeeTools.Variables.StringVariable::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* StringVariable_get_Value_m86BE4BD992C393488BF564E562F5FEA0F4718631 (StringVariable_tF722B8C57C7554A75D23379E070F3FA0F90ADCDD * __this, const RuntimeMethod* method)
{
	{
		// get { return value; }
		String_t* L_0 = __this->get_value_4();
		return L_0;
	}
}
// System.Void CoffeeTools.Variables.StringVariable::set_Value(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringVariable_set_Value_m53CDA90C99C2CB1BD7D7DAED14601814B0E3485F (StringVariable_tF722B8C57C7554A75D23379E070F3FA0F90ADCDD * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		// set { this.value = value; }
		String_t* L_0 = ___value0;
		__this->set_value_4(L_0);
		// set { this.value = value; }
		return;
	}
}
// System.Void CoffeeTools.Variables.StringVariable::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringVariable__ctor_m69B2A857A104AAC94A3271D97292C810F57C0E8D (StringVariable_tF722B8C57C7554A75D23379E070F3FA0F90ADCDD * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private string value = "";
		__this->set_value_4(_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		ScriptableObject__ctor_m8DAE6CDCFA34E16F2543B02CC3669669FF203063(__this, /*hidden argument*/NULL);
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
// System.Void CoffeeTools.Variables.TextReplacer::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextReplacer_OnEnable_m7801E86A32181A899AC705D7ABE49BF4273A18C6 (TextReplacer_tEB5F8E2E5604F8D25348A4FEE3D3BA4A7AE5164C * __this, const RuntimeMethod* method)
{
	{
		// Text.text = Variable.Value;
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_0 = __this->get_Text_4();
		StringVariable_tF722B8C57C7554A75D23379E070F3FA0F90ADCDD * L_1 = __this->get_Variable_5();
		NullCheck(L_1);
		String_t* L_2;
		L_2 = StringVariable_get_Value_m86BE4BD992C393488BF564E562F5FEA0F4718631_inline(L_1, /*hidden argument*/NULL);
		NullCheck(L_0);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_0, L_2);
		// }
		return;
	}
}
// System.Void CoffeeTools.Variables.TextReplacer::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextReplacer_Update_m517E851E498A719290A5BA3B9617347DF5520F53 (TextReplacer_tEB5F8E2E5604F8D25348A4FEE3D3BA4A7AE5164C * __this, const RuntimeMethod* method)
{
	{
		// if (AlwaysUpdate)
		bool L_0 = __this->get_AlwaysUpdate_6();
		if (!L_0)
		{
			goto IL_001e;
		}
	}
	{
		// Text.text = Variable.Value;
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_1 = __this->get_Text_4();
		StringVariable_tF722B8C57C7554A75D23379E070F3FA0F90ADCDD * L_2 = __this->get_Variable_5();
		NullCheck(L_2);
		String_t* L_3;
		L_3 = StringVariable_get_Value_m86BE4BD992C393488BF564E562F5FEA0F4718631_inline(L_2, /*hidden argument*/NULL);
		NullCheck(L_1);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_1, L_3);
	}

IL_001e:
	{
		// }
		return;
	}
}
// System.Void CoffeeTools.Variables.TextReplacer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextReplacer__ctor_mDC784E5640BA7BD053BA35BD7A7E5C7CD9F3DD21 (TextReplacer_tEB5F8E2E5604F8D25348A4FEE3D3BA4A7AE5164C * __this, const RuntimeMethod* method)
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
// System.Void CoffeeTools.Variables.UnityEventRaiser::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEventRaiser_OnEnable_m56874B4A003786A146834FCB3496482316100889 (UnityEventRaiser_t8A2370C1EF0BEB4644C43A193EF511F369C797BF * __this, const RuntimeMethod* method)
{
	{
		// OnEnableEvent.Invoke();
		UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * L_0 = __this->get_OnEnableEvent_4();
		NullCheck(L_0);
		UnityEvent_Invoke_mDA46AA9786AD4C34211C6C6ADFB0963DFF430AF5(L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void CoffeeTools.Variables.UnityEventRaiser::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEventRaiser__ctor_m251F26F0D4F509F10EF83FDA2DD2903111A39062 (UnityEventRaiser_t8A2370C1EF0BEB4644C43A193EF511F369C797BF * __this, const RuntimeMethod* method)
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
// System.Int32 Utils::RoundToInt(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Utils_RoundToInt_m1CC53FAE2287620FB71F7DD6F6B4E9E75F3D514F (float ___f0, const RuntimeMethod* method)
{
	{
		// return Mathf.RoundToInt(f);
		float L_0 = ___f0;
		int32_t L_1;
		L_1 = Mathf_RoundToInt_m56850BDF60FF9E3441CE57E5EFEFEF36EDCDE6DD(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Int32 Utils::RandomEven(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Utils_RandomEven_m89706210998F53B1B55F6B9BAC268246CEBFA051 (int32_t ___min0, int32_t ___maxExclusive1, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		// int value = Random.Range(min, maxExclusive + 1);
		int32_t L_0 = ___min0;
		int32_t L_1 = ___maxExclusive1;
		int32_t L_2;
		L_2 = Random_Range_m4B3A0037ACA057F33C94508F908546B9317D996A(L_0, ((int32_t)il2cpp_codegen_add((int32_t)L_1, (int32_t)1)), /*hidden argument*/NULL);
		V_0 = L_2;
		goto IL_0016;
	}

IL_000c:
	{
		// value = Random.Range(min, maxExclusive + 1);
		int32_t L_3 = ___min0;
		int32_t L_4 = ___maxExclusive1;
		int32_t L_5;
		L_5 = Random_Range_m4B3A0037ACA057F33C94508F908546B9317D996A(L_3, ((int32_t)il2cpp_codegen_add((int32_t)L_4, (int32_t)1)), /*hidden argument*/NULL);
		V_0 = L_5;
	}

IL_0016:
	{
		// while(value % 2 != 0)
		int32_t L_6 = V_0;
		if (((int32_t)((int32_t)L_6%(int32_t)2)))
		{
			goto IL_000c;
		}
	}
	{
		// return value;
		int32_t L_7 = V_0;
		return L_7;
	}
}
// System.Int32 Utils::RandomOdd(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Utils_RandomOdd_m96B3A1A21BABDF02B6E8A6C1435929133264C90C (int32_t ___min0, int32_t ___maxExclusive1, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		// int value = Random.Range(min, maxExclusive + 1);
		int32_t L_0 = ___min0;
		int32_t L_1 = ___maxExclusive1;
		int32_t L_2;
		L_2 = Random_Range_m4B3A0037ACA057F33C94508F908546B9317D996A(L_0, ((int32_t)il2cpp_codegen_add((int32_t)L_1, (int32_t)1)), /*hidden argument*/NULL);
		V_0 = L_2;
		goto IL_0016;
	}

IL_000c:
	{
		// value = Random.Range(min, maxExclusive + 1);
		int32_t L_3 = ___min0;
		int32_t L_4 = ___maxExclusive1;
		int32_t L_5;
		L_5 = Random_Range_m4B3A0037ACA057F33C94508F908546B9317D996A(L_3, ((int32_t)il2cpp_codegen_add((int32_t)L_4, (int32_t)1)), /*hidden argument*/NULL);
		V_0 = L_5;
	}

IL_0016:
	{
		// while (value % 2 == 0)
		int32_t L_6 = V_0;
		if (!((int32_t)((int32_t)L_6%(int32_t)2)))
		{
			goto IL_000c;
		}
	}
	{
		// return value;
		int32_t L_7 = V_0;
		return L_7;
	}
}
// UnityEngine.Vector3 Utils::RoundedVector3(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Utils_RoundedVector3_m33B329BD79A6C03D660C9D59FBF2F24B1DA4D8F9 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___pos0, const RuntimeMethod* method)
{
	{
		// Vector3 roundedV3 = new Vector3(RoundToInt(pos.x), RoundToInt(pos.y), RoundToInt(pos.z));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___pos0;
		float L_1 = L_0.get_x_2();
		int32_t L_2;
		L_2 = Utils_RoundToInt_m1CC53FAE2287620FB71F7DD6F6B4E9E75F3D514F(L_1, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3 = ___pos0;
		float L_4 = L_3.get_y_3();
		int32_t L_5;
		L_5 = Utils_RoundToInt_m1CC53FAE2287620FB71F7DD6F6B4E9E75F3D514F(L_4, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = ___pos0;
		float L_7 = L_6.get_z_4();
		int32_t L_8;
		L_8 = Utils_RoundToInt_m1CC53FAE2287620FB71F7DD6F6B4E9E75F3D514F(L_7, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_9), ((float)((float)L_2)), ((float)((float)L_5)), ((float)((float)L_8)), /*hidden argument*/NULL);
		// return roundedV3;
		return L_9;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_mF7FCDE24496D619F4BB1A0BA44AF17DCB5D697FF_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, float ___x0, float ___y1, const RuntimeMethod* method)
{
	{
		float L_0 = ___x0;
		__this->set_x_2(L_0);
		float L_1 = ___y1;
		__this->set_y_3(L_1);
		__this->set_z_4((0.0f));
		return;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* StringVariable_get_Value_m86BE4BD992C393488BF564E562F5FEA0F4718631_inline (StringVariable_tF722B8C57C7554A75D23379E070F3FA0F90ADCDD * __this, const RuntimeMethod* method)
{
	{
		// get { return value; }
		String_t* L_0 = __this->get_value_4();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, int32_t ___index0, const RuntimeMethod* method)
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
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_2 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)__this->get__items_1();
		int32_t L_3 = ___index0;
		RuntimeObject * L_4;
		L_4 = IL2CPP_ARRAY_UNSAFE_LOAD((ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)L_2, (int32_t)L_3);
		return (RuntimeObject *)L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get__size_2();
		return (int32_t)L_0;
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
